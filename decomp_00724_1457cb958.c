// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1457cb958 FUN_1457cb958 body=575 status=ok
// SIG undefined FUN_1457cb958(void)

void FUN_1457cb958(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  code *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_14011be0c(param_1 + 0x30);
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_141361000(&local_50);
      local_48 = (code *)0x0;
      FUN_14485c47a(&local_48,param_1);
      local_40 = local_50;
      FUN_14113f0c0(&local_48);
      FUN_14053c012(lVar1 + 0x3b8,&local_48);
    }
  }
  lVar1 = FUN_144a883b6(param_1 + 0x30);
  if (lVar1 != 0) {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      if (*(longlong *)(param_1 + 0x48) == 0) {
        local_48 = FUN_14589faf8;
        local_40 = local_40 & 0xffffffff00000000;
        FUN_1457cbc48(lVar1 + 0x7790,&local_58,param_1);
        *(undefined8 *)(param_1 + 0x48) = local_58;
      }
      if (*(longlong *)(param_1 + 0x50) == 0) {
        local_48 = FUN_145ad0a4e;
        local_40 = local_40 & 0xffffffff00000000;
        FUN_1457cbd48(lVar1 + 0x77a8,&local_58,param_1);
        *(undefined8 *)(param_1 + 0x50) = local_58;
      }
      if (*(longlong *)(param_1 + 0xa8) == 0) {
        local_48 = FUN_1412521e2;
        local_40 = local_40 & 0xffffffff00000000;
        FUN_145a062aa(lVar1 + 0x6048,&local_58,param_1);
        *(undefined8 *)(param_1 + 0xa8) = local_58;
      }
      FUN_1457cbb98(&local_60);
      local_48 = (code *)0x0;
      FUN_14485c47a(&local_48,param_1);
      local_40 = local_60;
      FUN_14113f0c0(&local_48);
      FUN_14053c012(lVar1 + 0x6038,&local_48);
      FUN_1412a3650(&local_68);
      local_48 = (code *)0x0;
      FUN_14485c47a(&local_48,param_1);
      local_40 = local_68;
      FUN_14113f0c0(&local_48);
      FUN_14053c012(lVar1 + 0x5fc0,&local_48);
      FUN_1457cbe48(param_1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457cbb98 FUN_1457cbb98 body=174 status=ok
// SIG undefined FUN_1457cbb98(void)

undefined8 * FUN_1457cbb98(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbd6d38) {
    FUN_144b3d300(&DAT_14cbd6d38);
    if (DAT_14cbd6d38 == -1) {
      builtin_wcsncpy(local_38 + 8,L"eGadget",8);
      builtin_wcsncpy(local_38,L"OnCantUs",8);
      FUN_1446f470e(&DAT_14cbd6d30,local_38,1);
      _Init_thread_footer(&DAT_14cbd6d38);
    }
  }
  *param_1 = DAT_14cbd6d30;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457cbc48 FUN_1457cbc48 body=254 status=ok
// SIG undefined FUN_1457cbc48(void)

undefined8
FUN_1457cbc48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b96ec30;
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
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9addc0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140f50c4e(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457cbd48 FUN_1457cbd48 body=254 status=ok
// SIG undefined FUN_1457cbd48(void)

undefined8
FUN_1457cbd48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b9abb90;
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
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9ade30;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140f50dce(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457cbe48 FUN_1457cbe48 body=513 status=ok
// SIG undefined FUN_1457cbe48(void)

void FUN_1457cbe48(longlong param_1)

{
  undefined4 *puVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = FUN_144a883b6(param_1 + 0x30);
  if (lVar3 != 0) {
    lVar4 = FUN_144a2f878();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      lVar4 = FUN_14011c349();
      plVar7 = (longlong *)(lVar3 + 0x3a20);
      uVar5 = (**(code **)(*(longlong *)(lVar3 + 0x3a20) + 0x10))(plVar7);
      uVar6 = FUN_14011c2be(lVar4 + 0x250);
      FUN_1403c7952(uVar5,&local_58,uVar6,0);
      puVar1 = (undefined4 *)(param_1 + 0x58);
      *(undefined4 *)(param_1 + 0x68) = local_48;
      *(undefined4 *)(param_1 + 0x6c) = uStack_44;
      *(undefined4 *)(param_1 + 0x70) = uStack_40;
      *(undefined4 *)(param_1 + 0x74) = uStack_3c;
      *(undefined4 *)(param_1 + 0x58) = (undefined4)local_58;
      *(undefined4 *)(param_1 + 0x5c) = local_58._4_4_;
      *(undefined4 *)(param_1 + 0x60) = uStack_50;
      *(undefined4 *)(param_1 + 100) = uStack_4c;
      cVar2 = FUN_14486ea84(puVar1);
      if (cVar2 == '\0') {
        if (*(char *)(lVar3 + 0x178) != '\x03') {
          uVar5 = (**(code **)(*plVar7 + 0x10))(plVar7);
          local_58 = FUN_1458e33ac;
          uStack_50 = 0;
          FUN_1457cc04a(uVar5,&local_60,param_1);
          goto LAB_1457cbff3;
        }
        uVar5 = (**(code **)(*plVar7 + 0x10))(plVar7);
        uVar6 = FUN_14011c2be(lVar4 + 0x250);
        FUN_14036c7e6(uVar5,&local_58,uVar6,0);
        *(ulonglong *)(param_1 + 0x68) = CONCAT44(uStack_44,local_48);
        *(ulonglong *)(param_1 + 0x70) = CONCAT44(uStack_3c,uStack_40);
        *puVar1 = (undefined4)local_58;
        *(undefined4 *)(param_1 + 0x5c) = local_58._4_4_;
        *(undefined4 *)(param_1 + 0x60) = uStack_50;
        *(undefined4 *)(param_1 + 100) = uStack_4c;
      }
      cVar2 = FUN_14486ea84(puVar1);
      if (cVar2 != '\0') {
        if (*(longlong *)(param_1 + 0x78) == 0) {
          lVar3 = FUN_14008e0ae(puVar1);
          local_58 = FUN_1407fac48;
          uStack_50 = 0;
          FUN_1457cc14a(lVar3 + 0x138,&local_60,param_1);
          *(undefined8 *)(param_1 + 0x78) = local_60;
        }
        if (*(longlong *)(param_1 + 0x80) == 0) {
          lVar3 = FUN_14008e0ae(puVar1);
          local_58 = FUN_141312432;
          uStack_50 = 0;
          FUN_1457cc04a(lVar3 + 0x168,&local_60,param_1);
          *(undefined8 *)(param_1 + 0x80) = local_60;
        }
      }
    }
  }
LAB_1457cbff3:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457cc04a FUN_1457cc04a body=254 status=ok
// SIG undefined FUN_1457cc04a(void)

undefined8
FUN_1457cc04a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b3f7890;
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
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9adf30;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14036a282(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457cc14a FUN_1457cc14a body=254 status=ok
// SIG undefined FUN_1457cc14a(void)

undefined8
FUN_1457cc14a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b3f7900;
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
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9adfa0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140e2bd22(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457cc24a FUN_1457cc24a body=24 status=ok
// SIG undefined FUN_1457cc24a(void)

bool FUN_1457cc24a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1457cc262 FUN_1457cc262 body=425 status=ok
// SIG undefined FUN_1457cc262(void)

void FUN_1457cc262(longlong param_1,longlong param_2,undefined4 param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_768 [40];
  undefined8 local_740;
  ulonglong local_738;
  undefined8 *local_730;
  ulonglong *local_728;
  undefined1 local_71c [4];
  ulonglong local_718 [221];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_768;
  if ((((param_2 != 0) && (DAT_14c872bf0 == '\0')) && (*(char *)(param_2 + 0x152) == '\x01')) &&
     (((*(char *)(param_1 + 0x138) == '\x01' && (0 < *(int *)(param_1 + 0xc0))) ||
      ((*(char *)(param_1 + 0x139) == '\x01' && (0 < *(int *)(param_1 + 0xc4))))))) {
    uVar1 = *(ulonglong *)(param_2 + 0x18);
    FUN_1401a700c(local_718);
    if ((uVar1 != (local_718[0] & 0xffffffff)) &&
       ((*(char *)(param_1 + 0x54) != '\x01' || ((*(byte *)(param_2 + 0x154) & 0x20) == 0)))) {
      if ((longlong)*(int *)(param_1 + 0x60) != 0) {
        lVar3 = 0;
        do {
          if (*(ulonglong *)(*(longlong *)(param_1 + 0x58) + lVar3) == uVar1) {
            if (*(char *)(param_1 + 0x55) == '\x01') goto LAB_1457cc314;
            goto LAB_1457cc3a0;
          }
          lVar3 = lVar3 + 8;
        } while ((longlong)*(int *)(param_1 + 0x60) * 8 != lVar3);
      }
      if (*(char *)(param_1 + 0x55) == '\0') {
LAB_1457cc314:
        local_738 = 0;
        FUN_14485c47a(&local_738,param_2);
        local_718[0] = local_738;
        iVar2 = FUN_140214162(param_1 + 0xd0,(uint)(local_738 >> 0x20) ^ (uint)local_738,local_718);
        if (iVar2 == -1) {
          FUN_1457cc87c(local_718,*(undefined8 *)(param_2 + 0x18),param_1,param_3);
          local_740 = 0;
          FUN_14485c47a(&local_740,param_2);
          local_730 = &local_740;
          local_728 = local_718;
          FUN_1457cc51c(param_1 + 0xd0,local_71c);
          FUN_1457cc40c(local_718);
        }
      }
    }
  }
LAB_1457cc3a0:
  if ((local_30 ^ (ulonglong)auStack_768) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457cc40c FUN_1457cc40c body=125 status=ok
// SIG undefined FUN_1457cc40c(void)

void FUN_1457cc40c(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x6e0) = 0;
  if (*(longlong *)(param_1 + 0x6d8) != 0) {
    FUN_1400020a8();
  }
  FUN_1448fc100(param_1 + 0x698);
  if (*(longlong *)(param_1 + 0x688) != 0) {
    FUN_1400020a8();
  }
  FUN_1457cc48a(param_1 + 0xa8);
  FUN_1402142c4(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80));
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  FUN_1457cc4c8(param_1);
  return;
}



// FUNCTION 1457cc48a FUN_1457cc48a body=61 status=ok
// SIG undefined FUN_1457cc48a(void)

void FUN_1457cc48a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x580);
  if (*(longlong *)(param_1 + 0x580) == 0) {
    lVar1 = param_1;
  }
  FUN_1456e7130(lVar1,*(undefined4 *)(param_1 + 0x588));
  if (*(longlong *)(param_1 + 0x580) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457cc4c8 FUN_1457cc4c8 body=84 status=ok
// SIG undefined FUN_1457cc4c8(void)

void FUN_1457cc4c8(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_1448fc100(param_1 + 0x18);
  FUN_140f517a3(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1457cc51c FUN_1457cc51c body=310 status=ok
// SIG undefined FUN_1457cc51c(void)

undefined4 * FUN_1457cc51c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1457cc6fa(param_1,local_48);
  uVar1 = param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  FUN_1457cca66(local_40 + 1,uVar1);
  *(undefined4 *)(local_40 + 0xde) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)*local_40 >> 0x20) ^ (uint)*local_40;
  cVar3 = FUN_1457cc654(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x6f4) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xde) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1457ccc72(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457cc654 FUN_1457cc654 body=165 status=ok
// SIG undefined FUN_1457cc654(void)

undefined8 FUN_1457cc654(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_38 = *param_3;
    iVar2 = FUN_140214162();
    if (iVar2 != -1) {
      lVar1 = *param_1;
      FUN_1457cc40c((longlong)iVar2 * 0x6f8 + lVar1 + 8);
      memmove((void *)(lVar1 + (longlong)iVar2 * 0x6f8),param_3,0x6f0);
      FUN_1457490b8(param_1,*param_4);
      *param_4 = iVar2;
      uVar3 = 1;
      goto LAB_1457cc698;
    }
  }
  uVar3 = 0;
LAB_1457cc698:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457cc6fa FUN_1457cc6fa body=236 status=ok
// SIG undefined FUN_1457cc6fa(void)

int * FUN_1457cc6fa(longlong *param_1,int *param_2)

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
      FUN_1457cc7e6(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x6f8);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x6f8) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x6f8 + *param_1;
  return param_2;
}



// FUNCTION 1457cc7e6 FUN_1457cc7e6 body=150 status=ok
// SIG undefined FUN_1457cc7e6(void)

void FUN_1457cc7e6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x6f8,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x6f8)) {
      uVar5 = uVar4 / 0x6f8 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x6f8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457cc87c FUN_1457cc87c body=393 status=ok
// SIG undefined FUN_1457cc87c(void)

undefined8 * FUN_1457cc87c(undefined8 *param_1,undefined8 param_2,longlong param_3,char param_4)

{
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  FUN_140f514be(param_3,param_1);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = param_2;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0x800000000;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0xcd) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  param_1[0xd7] = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6cc) = 0;
  param_1[0xdb] = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  FUN_140f513b8(param_3,param_1 + 0xd1);
  if ((param_4 == '\0') && (0.0 < *(float *)(param_3 + 0x50))) {
    QueryPerformanceCounter(&local_58);
    param_1[0x12] =
         (double)*(float *)(param_3 + 0x50) + (double)local_58.QuadPart * DAT_14c83f420 + 16777216.0
    ;
  }
  *(undefined4 *)(param_1 + 0xce) = 0;
  param_1[0xcf] = 0;
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457cca06 FUN_1457cca06 body=95 status=ok
// SIG undefined FUN_1457cca06(void)

void FUN_1457cca06(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 5,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 1457cca66 FUN_1457cca66 body=397 status=ok
// SIG undefined FUN_1457cca66(void)

undefined8 * FUN_1457cca66(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  param_2[2] = 0;
  FUN_1457ccbf4(param_1 + 3,param_2 + 3);
  param_1[0xd] = param_2[0xd];
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  param_1[0xf] = 0;
  param_1[0xf] = param_2[0xf];
  param_2[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x84);
  param_2[0x10] = 0;
  uVar1 = *(undefined4 *)(param_2 + 0x11);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x8c);
  uVar3 = *(undefined4 *)(param_2 + 0x12);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x94);
  uVar5 = param_2[0x14];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = uVar5;
  *(undefined4 *)(param_1 + 0x11) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar2;
  *(undefined4 *)(param_1 + 0x12) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar4;
  param_1[0xc5] = 0;
  lVar6 = param_2[0xc5];
  if (lVar6 == 0) {
    memmove(param_1 + 0x15,param_2 + 0x15,0x580);
    lVar6 = param_2[0xc5];
  }
  param_1[0xc5] = lVar6;
  param_2[0xc5] = 0;
  *(undefined4 *)(param_1 + 0xc6) = *(undefined4 *)(param_2 + 0xc6);
  *(undefined4 *)((longlong)param_1 + 0x634) = *(undefined4 *)((longlong)param_2 + 0x634);
  param_2[0xc6] = 0x800000000;
  puVar7 = param_2 + 199;
  puVar8 = param_1 + 199;
  for (lVar6 = 9; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  param_1[0xd1] = 0;
  param_1[0xd1] = param_2[0xd1];
  param_2[0xd1] = 0;
  *(undefined4 *)(param_1 + 0xd2) = *(undefined4 *)(param_2 + 0xd2);
  *(undefined4 *)((longlong)param_1 + 0x694) = *(undefined4 *)((longlong)param_2 + 0x694);
  param_2[0xd2] = 0;
  FUN_1457ccbf4(param_1 + 0xd3,param_2 + 0xd3);
  return param_1;
}



// FUNCTION 1457ccbf4 FUN_1457ccbf4 body=125 status=ok
// SIG undefined FUN_1457ccbf4(void)

undefined8 * FUN_1457ccbf4(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_140f518b8();
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



// FUNCTION 1457ccc72 FUN_1457ccc72 body=454 status=ok
// SIG undefined FUN_1457ccc72(void)

void FUN_1457ccc72(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x6f8;
        uVar10 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x6f4 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x6f0 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457cce6a FUN_1457cce6a body=146 status=ok
// SIG undefined FUN_1457cce6a(void)

longlong * FUN_1457cce6a(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14b419a10;
  puVar1 = puVar2 + 2;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = param_3;
  FUN_1457ccefc(puVar2 + 5,param_1);
  puVar2[9] = 0;
  puVar2[10] = 0;
  *param_2 = (longlong)puVar1;
  param_2[1] = (longlong)puVar2;
  FUN_1457ccf6a(param_2,puVar1);
  FUN_1457cd08e(puVar1);
  return param_2;
}



// FUNCTION 1457ccefc FUN_1457ccefc body=110 status=ok
// SIG undefined FUN_1457ccefc(void)

undefined8 * FUN_1457ccefc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  lVar2 = param_2[1];
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  uVar3 = param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_14082454c(param_1 + 2,iVar1,0);
    FUN_1408243d3(param_1[2],uVar3,iVar1);
  }
  return param_1;
}



// FUNCTION 1457ccf6a FUN_1457ccf6a body=159 status=ok
// SIG undefined FUN_1457ccf6a(void)

void FUN_1457ccf6a(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = (longlong)param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_2 = (longlong)param_2;
    if ((longlong *)param_2[1] == plVar2) goto LAB_1457ccfa7;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_1457ccfa7;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  param_2[1] = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1457ccfa7:
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
                    /* WARNING: Could not recover jumptable at 0x0001457cd005. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1457cd00a FUN_1457cd00a body=132 status=ok
// SIG undefined FUN_1457cd00a(void)

void FUN_1457cd00a(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457cd08e FUN_1457cd08e body=387 status=ok
// SIG undefined FUN_1457cd08e(void)

void FUN_1457cd08e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  longlong *local_b8;
  longlong local_a8 [4];
  longlong local_88;
  longlong *local_78;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_b8 = (longlong *)0x0;
  local_88 = 0;
  local_78 = (longlong *)0x0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x28);
    lVar7 = (longlong)*(int *)(param_1 + 0x30) << 4;
    do {
      iVar1 = *(int *)(param_1 + 0x40);
      *(uint *)(param_1 + 0x40) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x44) < iVar1 + 1U) {
        FUN_146557282(param_1 + 0x38,iVar1);
      }
      lVar6 = (longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x38);
      FUN_140d7ec9e(lVar6);
      FUN_148900a5a(local_f8,param_1);
      lVar2 = FUN_14479d2ce(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x50);
      if ((lVar2 == 0) || (*(longlong *)(lVar2 + 0x30) == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(*(longlong *)(lVar2 + 0x30) + 0x360);
      }
      local_108 = local_f8;
      FUN_1411cff2e(lVar6,lVar4,uVar5,&local_e8);
      FUN_1449db362(local_f8);
      lVar4 = lVar4 + 0x10;
      lVar7 = lVar7 + -0x10;
    } while (lVar7 != 0);
  }
  FUN_1457cd212(param_1);
  if (local_88 != 0) {
    plVar3 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar3 = local_68;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (local_c8 != 0) {
    plVar3 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar3 = local_a8;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457cd212 FUN_1457cd212 body=99 status=ok
// SIG undefined FUN_1457cd212(void)

void FUN_1457cd212(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x38);
    lVar2 = (longlong)*(int *)(param_1 + 0x40) * 0x10;
    do {
      lVar2 = lVar2 + -0x10;
      cVar1 = FUN_140a262da(lVar3);
      if (cVar1 == '\0') break;
      lVar3 = lVar3 + 0x10;
    } while (lVar2 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001457cd245. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0xa8))
            (*(longlong **)(param_1 + 0x10),*(longlong *)(param_1 + 0x18) + 0x18);
  return;
}



// FUNCTION 1457cd276 FUN_1457cd276 body=322 status=ok
// SIG undefined FUN_1457cd276(void)

void FUN_1457cd276(longlong *param_1,char param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  char local_99;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_80 [8];
  undefined8 local_78;
  undefined8 uStack_70;
  short local_64 [2];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_99 = param_3;
  cVar5 = FUN_144a61b4f();
  if ((((cVar5 != '\0') && (lVar1 = param_1[0x3c], lVar1 != 0)) &&
      (lVar2 = *(longlong *)(lVar1 + 0x30), lVar2 != 0)) &&
     ((lVar1 = *(longlong *)(lVar1 + 0x68), lVar1 != 0 &&
      (lVar4 = param_1[8], (longlong)(int)lVar4 != 0)))) {
    lVar3 = param_1[7];
    lVar7 = 0;
    do {
      if (*(longlong *)(lVar3 + lVar7) != 0) {
        FUN_1409845a0(lVar1,local_64);
        if (-1 < local_64[0]) {
          if (local_99 != '\0') {
            bVar6 = (**(code **)(*param_1 + 0x498))(param_1);
            FUN_1489b05a0(lVar2,local_64,bVar6 < 6);
          }
          if (param_2 == '\0') {
            local_98 = 0;
            uStack_90 = 0;
            FUN_140ceec8e(lVar2,local_80,local_64);
          }
          else {
            local_78 = 0;
            uStack_70 = 0;
            local_a8 = &local_78;
            FUN_1457cd3ba(lVar2,local_80,local_64,0);
          }
        }
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar7);
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457cd3ba FUN_1457cd3ba body=620 status=ok
// SIG undefined FUN_1457cd3ba(void)

undefined8 *
FUN_1457cd3ba(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_d8 [40];
  undefined8 local_b0 [2];
  undefined8 local_a0 [2];
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((param_1[0x36] != 0) && (*(char *)(param_1[0x36] + 0x419) == '\x01')) {
    *param_2 = 0;
    goto LAB_1457cd524;
  }
  plVar1 = param_1 + 0x45;
  FUN_1457cd75b(param_1 + 0x43,plVar1);
  local_50 = 0;
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_60 = 0xffff;
  lVar3 = FUN_140b9fe48(param_1,param_3);
  uVar5 = 0;
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0x158) == '\0') {
      *(undefined1 *)(lVar3 + 0x88) = 1;
      *(undefined1 *)(lVar3 + 0x89) = param_4;
      local_88 = 0;
      local_80 = 0;
      FUN_1457cd628(&local_88,param_5);
      FUN_1457cd6ac(lVar3,&local_50,&local_88);
      if (*(char *)(lVar3 + 0x8d) == '\0') {
        cVar2 = FUN_140f5a10e(lVar3,param_1[0x36]);
        if (cVar2 == '\0') {
          if (*(char *)(lVar3 + 0x91) == '\x01') {
            *(undefined1 *)(lVar3 + 0x92) = 1;
            puVar4 = local_a0;
          }
          else {
            FUN_140ceee2f(param_1 + 0x43,plVar1,param_1);
            puVar4 = local_b0;
          }
          *puVar4 = 0;
          *(undefined4 *)(puVar4 + 1) = 0;
          FUN_1457cd628(puVar4,param_5);
          FUN_1457cd6ac(lVar3,&local_90,puVar4);
          uVar5 = local_90;
          goto LAB_1457cd521;
        }
        if ((*(char *)(lVar3 + 0x8a) != '\x01') || (*(char *)(lVar3 + 0x8b) == '\x01')) {
          FUN_140f5a346(param_1,&local_78,lVar3,0xffffffff);
        }
        cVar2 = FUN_140f5a77a(lVar3,&local_78);
        if (cVar2 == '\0') {
          FUN_1489b402e(lVar3 + 0xa8,&local_50);
          local_50 = 0;
          if ((*(char *)(lVar3 + 0x91) == '\0') && (*(char *)(lVar3 + 0x9c) == '\0')) {
            (**(code **)(*param_1 + 0x2b0))(param_1);
          }
        }
      }
      FUN_140f5a52b(plVar1,param_1);
      uVar5 = local_50;
    }
    else {
      uVar5 = 0;
    }
  }
LAB_1457cd521:
  *param_2 = uVar5;
LAB_1457cd524:
  FUN_1449db362(param_5);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457cd628 FUN_1457cd628 body=130 status=ok
// SIG undefined FUN_1457cd628(void)

void FUN_1457cd628(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457cd6ac FUN_1457cd6ac body=174 status=ok
// SIG undefined FUN_1457cd6ac(void)

longlong * FUN_1457cd6ac(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *param_2 = lVar3;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar2 != '\0') {
      local_38 = param_2;
      local_30 = param_3;
      FUN_1457cd84c(param_1 + 0xa8,local_24);
    }
  }
  FUN_1449db362(param_3);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457cd75b FUN_1457cd75b body=223 status=ok
// SIG undefined FUN_1457cd75b(void)

void FUN_1457cd75b(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1401cb356();
  lVar2 = *param_1;
  if (((lVar2 != 0) && (lVar4 = param_1[1], lVar4 != 0)) && (0 < *(int *)(lVar4 + 8))) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
    local_28 = lVar2;
    local_20 = lVar4;
    FUN_140d61352();
    plVar3 = (longlong *)param_1[1];
    *param_1 = 0;
    param_1[1] = 0;
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
  lVar2 = *param_2;
  if (((lVar2 != 0) && (lVar4 = param_2[1], lVar4 != 0)) && (0 < *(int *)(lVar4 + 8))) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
    local_38 = lVar2;
    local_30 = lVar4;
    FUN_140d61352();
    lVar2 = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    if (lVar2 != 0) {
      LOCK();
      piVar1 = (int *)(lVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457cd84c FUN_1457cd84c body=323 status=ok
// SIG undefined FUN_1457cd84c(void)

undefined4 * FUN_1457cd84c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1457cda30(param_1,local_48);
  uVar1 = param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = 0;
  *(undefined4 *)(local_40 + 2) = 0;
  FUN_1457cd628(local_40 + 1,uVar1);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (int)((ulonglong)*local_40 >> 0x20) * 0x17 + (int)*local_40;
  cVar3 = FUN_1457cd990(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x1c) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1457cdb16(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457cd990 FUN_1457cd990 body=160 status=ok
// SIG undefined FUN_1457cd990(void)

undefined8 FUN_1457cd990(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          FUN_1449db362(puVar1 + 2);
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_1489b311e(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1457cda30 FUN_1457cda30 body=230 status=ok
// SIG undefined FUN_1457cda30(void)

int * FUN_1457cda30(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447711aa(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 1457cdb16 FUN_1457cdb16 body=459 status=ok
// SIG undefined FUN_1457cdb16(void)

void FUN_1457cdb16(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x20;
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457cdce2 FUN_1457cdce2 body=1321 status=ok
// SIG undefined FUN_1457cdce2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1457cdce2(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined ***pppuVar5;
  longlong lVar6;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  ulonglong uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined1 local_ac [4];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined ***local_98;
  undefined **local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *param_1 = 0;
  puVar1 = param_1 + 8;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_1457ac5c8(param_1 + 0x18);
  FUN_1457ce514(param_1 + 0x158);
  *param_1 = 1;
  iVar3 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar3 + 1U) {
    FUN_1457adc16(puVar1,iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 8);
  lVar6 = (longlong)iVar3 * 0x40;
  *(code **)(lVar4 + lVar6) = FUN_14276d564;
  *(undefined8 *)(lVar4 + 0x10 + lVar6) = 0;
  *(undefined ***)(lVar4 + 0x20 + lVar6) = &PTR_LAB_149e1d860;
  *(code **)(lVar4 + 0x28 + lVar6) = FUN_142782eba;
  puVar2 = (undefined4 *)(lVar4 + 0x30 + lVar6);
  *puVar2 = (undefined4)local_a8;
  puVar2[1] = local_a8._4_4_;
  puVar2[2] = (undefined4)uStack_a0;
  puVar2[3] = uStack_a0._4_4_;
  iVar3 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar3 + 1U) {
    FUN_1457adc16(puVar1,iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 8);
  lVar6 = (longlong)iVar3 * 0x40;
  *(code **)(lVar4 + lVar6) = FUN_14276d564;
  *(undefined8 *)(lVar4 + 0x10 + lVar6) = 0;
  *(undefined ***)(lVar4 + 0x20 + lVar6) = &PTR_LAB_149e1d860;
  *(code **)(lVar4 + 0x28 + lVar6) = FUN_142782f7a;
  puVar2 = (undefined4 *)(lVar4 + 0x30 + lVar6);
  *puVar2 = (undefined4)local_a8;
  puVar2[1] = local_a8._4_4_;
  puVar2[2] = (undefined4)uStack_a0;
  puVar2[3] = uStack_a0._4_4_;
  iVar3 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar3 + 1U) {
    FUN_1457adc16(puVar1,iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 8);
  lVar6 = (longlong)iVar3 * 0x40;
  *(code **)(lVar4 + lVar6) = FUN_14276d564;
  *(undefined8 *)(lVar4 + 0x10 + lVar6) = 0;
  *(undefined ***)(lVar4 + 0x20 + lVar6) = &PTR_LAB_149e1d860;
  *(code **)(lVar4 + 0x28 + lVar6) = FUN_14278303a;
  iVar3 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar3 + 1U) {
    FUN_1457adc16(puVar1,iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 8);
  lVar6 = (longlong)iVar3 * 0x40;
  *(code **)(lVar4 + lVar6) = FUN_14276d564;
  *(undefined8 *)(lVar4 + 0x10 + lVar6) = 0;
  *(undefined ***)(lVar4 + 0x20 + lVar6) = &PTR_LAB_149e1d860;
  *(code **)(lVar4 + 0x28 + lVar6) = FUN_1427830fa;
  iVar3 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar3 + 1U) {
    FUN_1457adc16(puVar1,iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 8);
  lVar6 = (longlong)iVar3 * 0x40;
  *(code **)(lVar4 + lVar6) = FUN_14276d564;
  *(undefined8 *)(lVar4 + 0x10 + lVar6) = 0;
  *(undefined ***)(lVar4 + 0x20 + lVar6) = &PTR_LAB_149e1d860;
  *(code **)(lVar4 + 0x28 + lVar6) = FUN_141703c58;
  iVar3 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar3 + 1U) {
    FUN_1457adc16(puVar1,iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 8);
  lVar6 = (longlong)iVar3 * 0x40;
  *(code **)(lVar4 + lVar6) = FUN_14276d564;
  *(undefined8 *)(lVar4 + 0x10 + lVar6) = 0;
  *(undefined ***)(lVar4 + 0x20 + lVar6) = &PTR_LAB_149e1d860;
  *(code **)(lVar4 + 0x28 + lVar6) = FUN_140b6070a;
  local_f8 = 1;
  uStack_f0 = uStack_f0 & 0xffffffffffffff00;
  local_a8 = (code *)&DAT_14c758c14;
  uStack_a0 = &local_f8;
  FUN_140dc62b6(param_1 + 0x108,&local_c0,&local_a8,0);
  puVar1 = param_1 + 0xb8;
  FUN_1457adc9c(puVar1,&local_a8,&DAT_14c75b0d0,0);
  FUN_1457adc9c(puVar1,&local_a8,&DAT_14c75b0e0,0);
  FUN_1457adc9c(puVar1,&local_a8,&DAT_14c75b0f0,0);
  FUN_1457adc9c(puVar1,&local_a8,&DAT_14c75b100,0);
  local_f8 = _DAT_14c75b0d0;
  uStack_f0 = uRam000000014c75b0d8;
  local_e8 = DAT_14c758c44;
  uStack_e4 = DAT_14c758c48;
  uStack_e0 = DAT_14c758c4c;
  uStack_dc = DAT_14c758c50;
  puVar1 = param_1 + 0x1a8;
  local_d8 = 0;
  uStack_d0 = 0;
  local_98 = (undefined ***)0x0;
  local_88[0] = &PTR_LAB_149e301c0;
  local_a8 = FUN_146812d20;
  local_c0 = &local_f8;
  local_b8 = &local_a8;
  FUN_1457ce20c(puVar1,local_ac,&local_c0,0);
  if (local_a8 != (code *)0x0) {
    pppuVar5 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar5 = local_88;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  local_f8 = _DAT_14c75b0e0;
  uStack_f0 = uRam000000014c75b0e8;
  local_e8 = DAT_14c758c44;
  uStack_e4 = DAT_14c758c48;
  uStack_e0 = DAT_14c758c4c;
  uStack_dc = DAT_14c758c50;
  local_d8 = 0;
  uStack_d0 = 0;
  local_98 = (undefined ***)0x0;
  local_88[0] = &PTR_LAB_149e303c0;
  local_a8 = FUN_14110c1f2;
  local_c0 = &local_f8;
  local_b8 = &local_a8;
  FUN_1457ce20c(puVar1,local_ac,&local_c0,0);
  if (local_a8 != (code *)0x0) {
    pppuVar5 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar5 = local_88;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  local_f8 = _DAT_14c75b0f0;
  uStack_f0 = uRam000000014c75b0f8;
  local_e8 = DAT_14c758c44;
  uStack_e4 = DAT_14c758c48;
  uStack_e0 = DAT_14c758c4c;
  uStack_dc = DAT_14c758c50;
  local_d8 = 0;
  uStack_d0 = 0;
  local_98 = (undefined ***)0x0;
  local_88[0] = &PTR_LAB_149e303e0;
  local_a8 = FUN_1468130bc;
  local_c0 = &local_f8;
  local_b8 = &local_a8;
  FUN_1457ce20c(puVar1,local_ac,&local_c0,0);
  if (local_a8 != (code *)0x0) {
    pppuVar5 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar5 = local_88;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  local_f8 = _DAT_14c75b100;
  uStack_f0 = uRam000000014c75b108;
  local_e8 = DAT_14c758c44;
  uStack_e4 = DAT_14c758c48;
  uStack_e0 = DAT_14c758c4c;
  uStack_dc = DAT_14c758c50;
  local_d8 = 0;
  uStack_d0 = 0;
  local_98 = (undefined ***)0x0;
  local_88[0] = &PTR_LAB_149e30400;
  local_a8 = FUN_14681319e;
  local_c0 = &local_f8;
  local_b8 = &local_a8;
  FUN_1457ce20c(puVar1,local_ac,&local_c0,0);
  if (local_a8 != (code *)0x0) {
    pppuVar5 = local_88;
    if (local_98 != (undefined ***)0x0) {
      pppuVar5 = local_98;
    }
    (*(code *)(*pppuVar5)[2])(pppuVar5);
  }
  FUN_1457ce5be(param_1 + 0x158);
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457ce20c FUN_1457ce20c body=374 status=ok
// SIG undefined FUN_1457ce20c(void)

undefined4 *
FUN_1457ce20c(longlong param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  char cVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1457ce424(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  plVar2 = (longlong *)param_3[1];
  uVar7 = *puVar1;
  uVar8 = puVar1[1];
  uVar9 = puVar1[2];
  uVar10 = puVar1[3];
  uVar3 = *(undefined4 *)((longlong)puVar1 + 0x24);
  uVar4 = *(undefined4 *)(puVar1 + 5);
  uVar5 = *(undefined4 *)((longlong)puVar1 + 0x2c);
  *(undefined4 *)(local_40 + 4) = *(undefined4 *)(puVar1 + 4);
  *(undefined4 *)((longlong)local_40 + 0x24) = uVar3;
  *(undefined4 *)(local_40 + 5) = uVar4;
  *(undefined4 *)((longlong)local_40 + 0x2c) = uVar5;
  local_40[2] = uVar9;
  local_40[3] = uVar10;
  *local_40 = uVar7;
  local_40[1] = uVar8;
  lVar19 = *plVar2;
  local_40[6] = lVar19;
  local_40[8] = plVar2[2];
  plVar2[2] = 0;
  lVar11 = plVar2[4];
  uVar3 = *(undefined4 *)((longlong)plVar2 + 0x24);
  lVar12 = plVar2[5];
  uVar4 = *(undefined4 *)((longlong)plVar2 + 0x2c);
  uVar5 = *(undefined4 *)((longlong)plVar2 + 0x34);
  lVar13 = plVar2[7];
  uVar6 = *(undefined4 *)((longlong)plVar2 + 0x3c);
  *(int *)(local_40 + 0xc) = (int)plVar2[6];
  *(undefined4 *)((longlong)local_40 + 100) = uVar5;
  *(int *)(local_40 + 0xd) = (int)lVar13;
  *(undefined4 *)((longlong)local_40 + 0x6c) = uVar6;
  *(int *)(local_40 + 10) = (int)lVar11;
  *(undefined4 *)((longlong)local_40 + 0x54) = uVar3;
  *(int *)(local_40 + 0xb) = (int)lVar12;
  *(undefined4 *)((longlong)local_40 + 0x5c) = uVar4;
  if (lVar19 != 0) {
    *plVar2 = 0;
  }
  *(undefined4 *)(local_40 + 0xe) = 0xffffffff;
  local_4c = local_48[0];
  uVar15 = FUN_144a70b6e(local_40);
  local_58 = param_4;
  cVar14 = FUN_1457ce384(param_1,uVar15,local_40,&local_4c);
  if (cVar14 == '\0') {
    uVar17 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar18 = 1;
    if (3 < uVar17) {
      uVar16 = (ulonglong)(uVar17 & 0xfffffffe) + 0xf;
      lVar19 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      iVar18 = 1 << ((byte)lVar19 & 0x1f);
    }
    if (((int)uVar17 < 1) || (iVar18 <= *(int *)(param_1 + 0x48))) {
      uVar15 = *(int *)(param_1 + 0x48) - 1U & uVar15;
      *(uint *)((longlong)local_40 + 0x74) = uVar15;
      lVar19 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar19 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xe) =
           *(undefined4 *)
            (lVar19 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar15) * 4);
      lVar19 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar19 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar19 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar15) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar18;
      FUN_1457ce67c(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457ce384 FUN_1457ce384 body=159 status=ok
// SIG undefined FUN_1457ce384(void)

void FUN_1457ce384(longlong *param_1,undefined8 param_2,void *param_3,int *param_4,
                  undefined1 *param_5)

{
  void *_Dst;
  undefined1 uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar2 = FUN_141041776();
    if (iVar2 != -1) {
      _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x80);
      if (*(longlong *)(*param_1 + 0x30 + (longlong)iVar2 * 0x80) != 0) {
        plVar3 = (longlong *)((longlong)_Dst + 0x50);
        if (*(longlong **)((longlong)_Dst + 0x40) != (longlong *)0x0) {
          plVar3 = *(longlong **)((longlong)_Dst + 0x40);
        }
        (**(code **)(*plVar3 + 0x10))();
      }
      memmove(_Dst,param_3,0x70);
      FUN_1467f46f4(param_1,*param_4,1);
      *param_4 = iVar2;
      uVar1 = 1;
      goto LAB_1457ce3b8;
    }
  }
  uVar1 = 0;
LAB_1457ce3b8:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 1457ce424 FUN_1457ce424 body=239 status=ok
// SIG undefined FUN_1457ce424(void)

int * FUN_1457ce424(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14045f6dc(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x80);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x80) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x80 + *param_1;
  return param_2;
}



// FUNCTION 1457ce514 FUN_1457ce514 body=169 status=ok
// SIG undefined FUN_1457ce514(void)

void FUN_1457ce514(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  return;
}



// FUNCTION 1457ce5be FUN_1457ce5be body=189 status=ok
// SIG undefined FUN_1457ce5be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457ce5be(longlong param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *local_70;
  code **local_68;
  undefined1 local_5c [4];
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38 [5];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_70 = &local_a8;
  local_a8 = _DAT_14c758c14;
  uStack_a0 = uRam000000014c758c1c;
  local_98 = DAT_14c758c44;
  uStack_94 = DAT_14c758c48;
  uStack_90 = DAT_14c758c4c;
  uStack_8c = DAT_14c758c50;
  local_88 = DAT_14c758c44;
  uStack_84 = DAT_14c758c48;
  uStack_80 = DAT_14c758c4c;
  uStack_7c = DAT_14c758c50;
  local_68 = local_58;
  local_48 = (undefined ***)0x0;
  local_38[0] = &PTR_LAB_149e30570;
  local_58[0] = FUN_146813520;
  FUN_1457ce842(param_1 + 0xa0,local_5c,&local_70,0);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457ce67c FUN_1457ce67c body=453 status=ok
// SIG undefined FUN_1457ce67c(void)

void FUN_1457ce67c(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x80;
        iVar6 = FUN_144a70b6e(lVar3 + lVar10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x74 + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x70 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457ce842 FUN_1457ce842 body=374 status=ok
// SIG undefined FUN_1457ce842(void)

undefined4 *
FUN_1457ce842(longlong param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  char cVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1457cea5a(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  plVar2 = (longlong *)param_3[1];
  uVar7 = *puVar1;
  uVar8 = puVar1[1];
  uVar9 = puVar1[2];
  uVar10 = puVar1[3];
  uVar3 = *(undefined4 *)((longlong)puVar1 + 0x24);
  uVar4 = *(undefined4 *)(puVar1 + 5);
  uVar5 = *(undefined4 *)((longlong)puVar1 + 0x2c);
  *(undefined4 *)(local_40 + 4) = *(undefined4 *)(puVar1 + 4);
  *(undefined4 *)((longlong)local_40 + 0x24) = uVar3;
  *(undefined4 *)(local_40 + 5) = uVar4;
  *(undefined4 *)((longlong)local_40 + 0x2c) = uVar5;
  local_40[2] = uVar9;
  local_40[3] = uVar10;
  *local_40 = uVar7;
  local_40[1] = uVar8;
  lVar19 = *plVar2;
  local_40[6] = lVar19;
  local_40[8] = plVar2[2];
  plVar2[2] = 0;
  lVar11 = plVar2[4];
  uVar3 = *(undefined4 *)((longlong)plVar2 + 0x24);
  lVar12 = plVar2[5];
  uVar4 = *(undefined4 *)((longlong)plVar2 + 0x2c);
  uVar5 = *(undefined4 *)((longlong)plVar2 + 0x34);
  lVar13 = plVar2[7];
  uVar6 = *(undefined4 *)((longlong)plVar2 + 0x3c);
  *(int *)(local_40 + 0xc) = (int)plVar2[6];
  *(undefined4 *)((longlong)local_40 + 100) = uVar5;
  *(int *)(local_40 + 0xd) = (int)lVar13;
  *(undefined4 *)((longlong)local_40 + 0x6c) = uVar6;
  *(int *)(local_40 + 10) = (int)lVar11;
  *(undefined4 *)((longlong)local_40 + 0x54) = uVar3;
  *(int *)(local_40 + 0xb) = (int)lVar12;
  *(undefined4 *)((longlong)local_40 + 0x5c) = uVar4;
  if (lVar19 != 0) {
    *plVar2 = 0;
  }
  *(undefined4 *)(local_40 + 0xe) = 0xffffffff;
  local_4c = local_48[0];
  uVar15 = FUN_144a70b6e(local_40);
  local_58 = param_4;
  cVar14 = FUN_1457ce9ba(param_1,uVar15,local_40,&local_4c);
  if (cVar14 == '\0') {
    uVar17 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar18 = 1;
    if (3 < uVar17) {
      uVar16 = (ulonglong)(uVar17 & 0xfffffffe) + 0xf;
      lVar19 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      iVar18 = 1 << ((byte)lVar19 & 0x1f);
    }
    if (((int)uVar17 < 1) || (iVar18 <= *(int *)(param_1 + 0x48))) {
      uVar15 = *(int *)(param_1 + 0x48) - 1U & uVar15;
      *(uint *)((longlong)local_40 + 0x74) = uVar15;
      lVar19 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar19 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xe) =
           *(undefined4 *)
            (lVar19 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar15) * 4);
      lVar19 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar19 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar19 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar15) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar18;
      FUN_1457ceb40(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457ce9ba FUN_1457ce9ba body=159 status=ok
// SIG undefined FUN_1457ce9ba(void)

void FUN_1457ce9ba(longlong *param_1,undefined8 param_2,void *param_3,int *param_4,
                  undefined1 *param_5)

{
  void *_Dst;
  undefined1 uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar2 = FUN_1467f477e();
    if (iVar2 != -1) {
      _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x80);
      if (*(longlong *)(*param_1 + 0x30 + (longlong)iVar2 * 0x80) != 0) {
        plVar3 = (longlong *)((longlong)_Dst + 0x50);
        if (*(longlong **)((longlong)_Dst + 0x40) != (longlong *)0x0) {
          plVar3 = *(longlong **)((longlong)_Dst + 0x40);
        }
        (**(code **)(*plVar3 + 0x10))();
      }
      memmove(_Dst,param_3,0x70);
      FUN_1467f47ec(param_1,*param_4,1);
      *param_4 = iVar2;
      uVar1 = 1;
      goto LAB_1457ce9db;
    }
  }
  uVar1 = 0;
LAB_1457ce9db:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 1457cea5a FUN_1457cea5a body=230 status=ok
// SIG undefined FUN_1457cea5a(void)

int * FUN_1457cea5a(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14045f6dc(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x80);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x80) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x80 + *param_1;
  return param_2;
}



// FUNCTION 1457ceb40 FUN_1457ceb40 body=453 status=ok
// SIG undefined FUN_1457ceb40(void)

void FUN_1457ceb40(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x80;
        iVar6 = FUN_144a70b6e(lVar3 + lVar10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x74 + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x70 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457ced06 FUN_1457ced06 body=38 status=ok
// SIG undefined FUN_1457ced06(void)

void FUN_1457ced06(longlong param_1,undefined8 param_2)

{
  FUN_140f5d36e();
  FUN_140aa1618(param_1 + 0x80,param_2);
  return;
}



// FUNCTION 1457ced2c FUN_1457ced2c body=307 status=ok
// SIG undefined FUN_1457ced2c(void)

undefined4 * FUN_1457ced2c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1457cef0a(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  FUN_1447a97f4(local_40,*param_3);
  *(undefined8 *)(local_40 + 10) = *puVar1;
  *(undefined8 *)(local_40 + 0xc) = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  local_40[0xe] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_1457cee60(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar7 = 1;
    }
    else {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[0xf] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[0xe] =
           *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_140f602a8(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457cee60 FUN_1457cee60 body=169 status=ok
// SIG undefined FUN_1457cee60(void)

undefined8 FUN_1457cee60(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  int iVar15;
  
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar15 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar15 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar15 * 0x40);
        if (*(int *)(*param_1 + (longlong)iVar15 * 0x40) == *param_3) {
          FUN_14591f142(piVar1);
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[4];
          iVar7 = param_3[5];
          iVar8 = param_3[6];
          iVar9 = param_3[7];
          iVar10 = param_3[8];
          iVar11 = param_3[9];
          iVar12 = param_3[10];
          iVar13 = param_3[0xb];
          *(undefined8 *)(piVar1 + 0xc) = *(undefined8 *)(param_3 + 0xc);
          piVar1[8] = iVar10;
          piVar1[9] = iVar11;
          piVar1[10] = iVar12;
          piVar1[0xb] = iVar13;
          piVar1[4] = iVar6;
          piVar1[5] = iVar7;
          piVar1[6] = iVar8;
          piVar1[7] = iVar9;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_14882a86a(param_1,*param_4);
          *param_4 = iVar15;
          return 1;
        }
        iVar15 = piVar1[0xe];
      } while (iVar15 != -1);
    }
  }
  return 0;
}



// FUNCTION 1457cef0a FUN_1457cef0a body=239 status=ok
// SIG undefined FUN_1457cef0a(void)

int * FUN_1457cef0a(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1406cd6a8(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x40);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x40) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 1457ceffa FUN_1457ceffa body=4 status=ok
// SIG undefined FUN_1457ceffa(void)

void FUN_1457ceffa(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}



// FUNCTION 1457ceffe FUN_1457ceffe body=5 status=ok
// SIG undefined FUN_1457ceffe(void)

void FUN_1457ceffe(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}



// FUNCTION 1457cf004 FUN_1457cf004 body=13 status=ok
// SIG undefined FUN_1457cf004(void)

void FUN_1457cf004(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x18) = param_4;
  return;
}



// FUNCTION 1457cf011 FUN_1457cf011 body=92 status=ok
// SIG undefined FUN_1457cf011(void)

ulonglong FUN_1457cf011(void)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  uint uVar5;
  
  cVar1 = FUN_1447e0190();
  uVar5 = DAT_14c75f14c;
  if ((cVar1 == '\0') || (DAT_14c99384c != 0)) {
    uVar4 = 2000;
  }
  else {
    plVar3 = (longlong *)FUN_144a7672a();
    uVar2 = (**(code **)(*plVar3 + 0x20))(plVar3);
    if ((int)uVar2 < (int)uVar5) {
      uVar5 = uVar2;
    }
    uVar4 = 1;
    if (1 < (int)uVar5) {
      uVar4 = (ulonglong)uVar5;
    }
    uVar4 = 2000 / uVar4;
    if ((uint)uVar4 < 0x65) {
      uVar4 = 100;
    }
  }
  return uVar4;
}



// FUNCTION 1457cf06e FUN_1457cf06e body=109 status=ok
// SIG undefined FUN_1457cf06e(void)

undefined8 * FUN_1457cf06e(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)FUN_140f61df0();
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *(undefined4 *)(param_1 + 1) = *puVar4;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 2) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = &PTR_FUN_149f583c0;
  FUN_1457cf3fe(param_1 + 4);
  *(undefined1 *)((longlong)param_1 + 0x129) = 0;
  param_1[0x26] = 0;
  param_1[0x28] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  return param_1;
}



// FUNCTION 1457cf0dc FUN_1457cf0dc body=114 status=ok
// SIG undefined FUN_1457cf0dc(void)

undefined8 * FUN_1457cf0dc(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined4 *)FUN_140a37a82();
  local_28 = *puVar1;
  uStack_24 = puVar1[1];
  uStack_20 = puVar1[2];
  uStack_1c = puVar1[3];
  FUN_140f61dd4(param_1);
  *param_1 = &PTR_FUN_149f496a0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0x10;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457cf150 FUN_1457cf150 body=132 status=ok
// SIG undefined FUN_1457cf150(void)

void FUN_1457cf150(longlong param_1,int param_2)

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



// FUNCTION 1457cf1d4 FUN_1457cf1d4 body=132 status=ok
// SIG undefined FUN_1457cf1d4(void)

void FUN_1457cf1d4(longlong param_1,int param_2)

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



// FUNCTION 1457cf258 FUN_1457cf258 body=142 status=ok
// SIG undefined FUN_1457cf258(void)

void FUN_1457cf258(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_1457cf2e6((longlong *)(param_1 + 0x10),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar5 = (longlong)iVar1 * 0x40;
  lVar3 = *param_2;
  *(longlong *)(lVar2 + lVar5) = lVar3;
  *(undefined8 *)(lVar2 + 0x10 + lVar5) = 0;
  if (lVar3 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
    (**(code **)*plVar4)(plVar4,lVar2 + lVar5 + 0x10);
  }
  if (*param_2 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
                    /* WARNING: Could not recover jumptable at 0x0001457cf2d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x10))(plVar4);
    return;
  }
  return;
}



// FUNCTION 1457cf2e6 FUN_1457cf2e6 body=132 status=ok
// SIG undefined FUN_1457cf2e6(void)

void FUN_1457cf2e6(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457cf36a FUN_1457cf36a body=147 status=ok
// SIG undefined FUN_1457cf36a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1457cf36a(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140f61ea2();
  local_28 = (undefined4)DAT_14c9948c0;
  uStack_24 = DAT_14c9948c0._4_4_;
  uStack_20 = _DAT_14c9948c8;
  uStack_1c = uRam000000014c9948cc;
  FUN_140f61dd4(param_1);
  *param_1 = &PTR_FUN_149f5d570;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
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
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457cf3fe FUN_1457cf3fe body=178 status=ok
// SIG undefined FUN_1457cf3fe(void)

void FUN_1457cf3fe(undefined8 *param_1)

{
  *param_1 = 0x3eb0c6f7a0000000;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x3ff0000000000000;
  param_1[6] = 0x3ff0000000000000;
  param_1[7] = 1;
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined1 *)((longlong)param_1 + 0x41) = 0;
  *(undefined1 *)((longlong)param_1 + 0x42) = 0;
  *(undefined1 *)((longlong)param_1 + 0x47) = 1;
  *(undefined4 *)((longlong)param_1 + 0x43) = 0x1010101;
  param_1[9] = 0xbff0000000000000;
  param_1[10] = 0xbff0000000000000;
  param_1[0xb] = 0xbff0000000000000;
  param_1[0xc] = 0xbff0000000000000;
  param_1[0xd] = 0xbff0000000000000;
  param_1[0xe] = 0xbff0000000000000;
  param_1[0xf] = 0xbff0000000000000;
  param_1[0x10] = 0xbff0000000000000;
  param_1[0x11] = 0xbff0000000000000;
  param_1[0x12] = 0xbff0000000000000;
  param_1[0x13] = 0xbff0000000000000;
  param_1[0x14] = 0xbff0000000000000;
  param_1[0x15] = 0xbff0000000000000;
  param_1[0x16] = 0xbff0000000000000;
  param_1[0x17] = 0xbff0000000000000;
  param_1[0x18] = 0xbff0000000000000;
  return;
}



// FUNCTION 1457cf4b0 FUN_1457cf4b0 body=241 status=ok
// SIG undefined FUN_1457cf4b0(void)

undefined8 * FUN_1457cf4b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  param_1[0x21] = puVar1;
  param_1[0x20] = puVar1;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  param_1[0x23] = puVar1;
  param_1[0x22] = puVar1;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar2 = FUN_140f61f4c(param_1);
  param_1[0x1e] = uVar2;
  return param_1;
}



// FUNCTION 1457cf5a2 FUN_1457cf5a2 body=132 status=ok
// SIG undefined FUN_1457cf5a2(void)

void FUN_1457cf5a2(longlong param_1,int param_2)

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



// FUNCTION 1457cf63e FUN_1457cf63e body=292 status=ok
// SIG undefined FUN_1457cf63e(void)

longlong * FUN_1457cf63e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457cf764 FUN_1457cf764 body=328 status=ok
// SIG undefined FUN_1457cf764(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1457cf764(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  FUN_1457cf8ac();
  uVar1 = _DAT_14c9941d8;
  param_1[1] = _DAT_14c9941d0;
  param_1[2] = uVar1;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = &PTR_FUN_149f58080;
  param_1[4] = param_2;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = param_7;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x76) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = param_3;
  param_1[0x14] = param_4;
  param_1[0x15] = param_5;
  param_1[0x16] = param_6;
  param_1[0x17] = param_8;
  *(undefined4 *)(param_1 + 0x18) = 0x1010101;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0x100;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0xbff0000000000000;
  param_1[0x1d] = 0x408ea00000000000;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0x400000000;
  param_1[0x20] = 0x300000000;
  *(undefined4 *)(param_1 + 0x21) = 2;
  param_1[0x26] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0x1010001;
  *(undefined2 *)((longlong)param_1 + 0x13c) = 1;
  param_1[5] = param_1;
  return param_1;
}



// FUNCTION 1457cf8ac FUN_1457cf8ac body=171 status=ok
// SIG undefined FUN_1457cf8ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457cf8ac(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9941e0) {
    FUN_144b3d300(&DAT_14c9941e0);
    if (DAT_14c9941e0 == -1) {
      FUN_1457d0658();
      FUN_1446f470e(&local_18,L"FCollisionConstraintHandle",1);
      _DAT_14c9941d0 = local_18;
      _DAT_14c9941d8 = &DAT_14c9941e8;
      _Init_thread_footer(&DAT_14c9941e0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457cf958 FUN_1457cf958 body=397 status=ok
// SIG undefined FUN_1457cf958(void)

undefined8 *
FUN_1457cf958(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = param_2;
  param_1[4] = param_3;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  FUN_1457cfae6(param_1 + 0x23,param_1,param_2);
  *(undefined2 *)(param_1 + 0x6e) = 1;
  param_1[0x77] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3cc) = 0;
  param_1[0x7b] = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x414) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x41c) = 0;
  param_1[0x85] = 0;
  *(undefined4 *)(param_1 + 0x86) = 0;
  param_1[0x8b] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  *(undefined8 *)((longlong)param_1 + 0x464) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x46c) = 0;
  param_1[0x8f] = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  param_1[0x91] = 0x3ff0000000000000;
  *(undefined4 *)(param_1 + 0x92) = 1;
  param_1[0x93] = param_4;
  return param_1;
}



// FUNCTION 1457cfae6 FUN_1457cfae6 body=341 status=ok
// SIG undefined FUN_1457cfae6(void)

void FUN_1457cfae6(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 1;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *(undefined8 *)((longlong)param_1 + 0x234) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x23c) = 0;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  return;
}



// FUNCTION 1457cfc3c FUN_1457cfc3c body=1120 status=ok
// SIG undefined FUN_1457cfc3c(void)

undefined8 * FUN_1457cfc3c(undefined8 *param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [16];
  longlong local_b8;
  int local_b0;
  byte local_ac;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  uint local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *param_1 = &PTR_FUN_149f5add0;
  param_1[8] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  lVar8 = param_3;
  FUN_1457d009e(param_1 + 0x20);
  FUN_140f62278(param_1 + 0x4a,param_1 + 0x20);
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x50] = &PTR_LAB_149f5afb0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x53] = &PTR_LAB_149f5aff0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x56] = &PTR_LAB_149f51ec0;
  param_1[0x59] = param_2;
  param_1[0x5a] = param_3;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar5 = 0;
  param_1[0x61] = puVar5;
  param_1[0x60] = puVar5;
  puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar5 = 0;
  param_1[99] = puVar5;
  param_1[0x62] = puVar5;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(undefined1 *)(param_1 + 0x66) = param_4;
  *(undefined1 *)((longlong)param_1 + 0x331) = 1;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0xffffffff;
  param_1[0x7a] = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3dc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3e4) = 0;
  param_1[0x7e] = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  puVar5 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar5 = &PTR_FUN_149f5ae50;
  param_1[0x83] = puVar5;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  *(undefined2 *)(param_1 + 0x86) = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  FUN_14062dc0c(param_1[0x59] + 0x6d0,param_1 + 0x50);
  FUN_14062dc0c(param_1[0x59] + 0x6d0,param_1 + 0x53);
  FUN_14062dc0c(param_1[0x59] + 0x6d0,param_1 + 0x56);
  FUN_140f62150(local_c8,param_2 + 0x5c8);
  if (local_b8 != 0) {
    plVar2 = &local_b8;
    do {
      lVar8 = CONCAT71((int7)((ulonglong)lVar8 >> 8),plVar2 != (longlong *)0x0);
      lVar7 = (longlong)local_b0;
      if ((plVar2 != (longlong *)0x0 && 1 < local_ac) &&
         (lVar8 = lVar7 * 0x10, *(char *)(*(longlong *)(local_b8 + 0x2c0) + 0xd + lVar8) == '\x01'))
      {
        if ((2 < local_ac) &&
           ((plVar4 = *(longlong **)(*(longlong *)(local_b8 + 0x5a8) + lVar8),
            plVar4 != (longlong *)0x0 && (2 < *(byte *)((longlong)plVar4 + 0xc))))) {
          lVar8 = *plVar4;
          if (((*(byte *)(*(longlong *)(lVar8 + 0x680) + (longlong)(int)plVar4[1]) & 1) != 0) &&
             (plVar1 = (longlong *)(lVar8 + 200), lVar8 = *(longlong *)(local_b8 + 200),
             *(longlong *)(*plVar1 + (longlong)(int)plVar4[1] * 8) ==
             *(longlong *)(lVar8 + lVar7 * 8))) goto LAB_1457cff45;
        }
      }
      else {
LAB_1457cff45:
        if ((*(char *)(*(longlong *)(local_b8 + 0xe0) + lVar7) != '\0') || (DAT_14c9978a0 != 0)) {
          uVar3 = *(undefined4 *)(*(longlong *)(local_b8 + 0x80) + lVar7 * 4);
          uVar9 = CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
          puVar5 = (undefined8 *)FUN_1447eab44(param_1 + 0x6c,uVar3,uVar9);
          lVar8 = local_b8;
          *(undefined1 *)(puVar5 + 8) = 2;
          lVar7 = (longlong)local_b0;
          local_98 = *(undefined8 *)(*(longlong *)(local_b8 + 0xb0) + lVar7 * 8);
          uStack_90 = *(undefined8 *)(*(longlong *)(local_b8 + 0x98) + lVar7 * 8);
          local_88 = *(undefined4 *)(*(longlong *)(local_b8 + 0x80) + lVar7 * 4);
          uStack_84 = 0;
          uStack_7c = 0;
          uStack_74 = 0;
          uStack_6c = 0;
          uStack_68 = 0;
          local_64 = local_64 & 0xffffff00;
          FUN_144b06b64(plVar2,&uStack_84);
          FUN_144b06c02(plVar2,&uStack_74);
          local_64 = CONCAT31(local_64._1_3_,1);
          *(undefined4 *)(puVar5 + 4) = uStack_7c._4_4_;
          *(undefined4 *)((longlong)puVar5 + 0x24) = (undefined4)uStack_74;
          *(undefined4 *)(puVar5 + 5) = uStack_74._4_4_;
          *(undefined4 *)((longlong)puVar5 + 0x2c) = uStack_6c;
          *(undefined4 *)(puVar5 + 2) = local_88;
          *(undefined4 *)((longlong)puVar5 + 0x14) = (undefined4)uStack_84;
          *(undefined4 *)(puVar5 + 3) = uStack_84._4_4_;
          *(undefined4 *)((longlong)puVar5 + 0x1c) = (undefined4)uStack_7c;
          *(undefined4 *)puVar5 = (undefined4)local_98;
          *(undefined4 *)((longlong)puVar5 + 4) = local_98._4_4_;
          *(undefined4 *)(puVar5 + 1) = (undefined4)uStack_90;
          *(undefined4 *)((longlong)puVar5 + 0xc) = uStack_90._4_4_;
          puVar5[6] = CONCAT44(local_64,uStack_68);
          *(undefined2 *)(puVar5 + 7) = *(undefined2 *)(*(longlong *)(lVar8 + 0x170) + lVar7 * 2);
          lVar8 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
          puVar6 = (undefined8 *)FUN_1447eab44(param_1 + 0x70,uVar3,lVar8);
          for (lVar7 = 9; lVar7 != 0; lVar7 = lVar7 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
        }
      }
      FUN_140a1e69e(local_c8);
    } while (local_b8 != 0);
  }
  FUN_140f624bc(param_1,0);
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1457d009e FUN_1457d009e body=317 status=ok
// SIG undefined FUN_1457d009e(void)

undefined8 * FUN_1457d009e(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 5) = 0x7fffffff;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 1000;
  *(undefined4 *)(param_1 + 0xd) = 0;
  do {
    FUN_1457d01dc(param_1 + 10);
  } while (*(int *)(param_1 + 0xb) < 1);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x14] = 1000;
  *(undefined4 *)(param_1 + 0x15) = 0;
  do {
    FUN_1457d03ea(param_1 + 0x12);
  } while (*(int *)(param_1 + 0x13) < 1);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1c] = 1000;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  do {
    FUN_1457d04f6(param_1 + 0x1a);
  } while (*(int *)(param_1 + 0x1b) < 1);
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x24] = 1000;
  *(undefined4 *)(param_1 + 0x25) = 0;
  do {
    FUN_1457d025e(param_1 + 0x22);
  } while (*(int *)(param_1 + 0x23) < 1);
  *(undefined8 *)((longlong)param_1 + 0x139) = 0;
  *(undefined8 *)((longlong)param_1 + 0x141) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined1 *)((longlong)param_1 + 0x149) = 1;
  return param_1;
}



// FUNCTION 1457d01dc FUN_1457d01dc body=129 status=ok
// SIG undefined FUN_1457d01dc(void)

longlong FUN_1457d01dc(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1457d02e2(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x20;
  iVar1 = (int)param_1[2];
  uVar3 = FUN_14001cc68((longlong)iVar1 * 0x58,8);
  *(undefined8 *)(lVar2 + lVar4) = uVar3;
  *(undefined8 *)(lVar2 + 8 + lVar4) = uVar3;
  *(int *)(lVar2 + 0x10 + lVar4) = iVar1;
  *(int *)(lVar2 + 0x14 + lVar4) = iVar1;
  *(undefined8 *)(lVar2 + 0x18 + lVar4) = 0xffffffff00000000;
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + (int)param_1[2];
  *(int *)(param_1 + 3) = (int)param_1[3] + (int)param_1[2];
  return (longlong)((int)param_1[1] + -1) * 0x20 + *param_1;
}



// FUNCTION 1457d025e FUN_1457d025e body=132 status=ok
// SIG undefined FUN_1457d025e(void)

longlong FUN_1457d025e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1457d0366(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x20;
  iVar1 = (int)param_1[2];
  uVar3 = FUN_14001cc68((longlong)iVar1 << 5,8);
  *(undefined8 *)(lVar2 + lVar4) = uVar3;
  *(undefined8 *)(lVar2 + 8 + lVar4) = uVar3;
  *(int *)(lVar2 + 0x10 + lVar4) = iVar1;
  *(int *)(lVar2 + 0x14 + lVar4) = iVar1;
  *(undefined8 *)(lVar2 + 0x18 + lVar4) = 0xffffffff00000000;
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + (int)param_1[2];
  *(int *)(param_1 + 3) = (int)param_1[3] + (int)param_1[2];
  return (longlong)((int)param_1[1] + -1) * 0x20 + *param_1;
}



// FUNCTION 1457d02e2 FUN_1457d02e2 body=132 status=ok
// SIG undefined FUN_1457d02e2(void)

void FUN_1457d02e2(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457d0366 FUN_1457d0366 body=132 status=ok
// SIG undefined FUN_1457d0366(void)

void FUN_1457d0366(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457d03ea FUN_1457d03ea body=136 status=ok
// SIG undefined FUN_1457d03ea(void)

longlong FUN_1457d03ea(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1457d0472(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x20;
  iVar1 = (int)param_1[2];
  uVar3 = FUN_14001cc68((longlong)iVar1 * 0x50,8);
  *(undefined8 *)(lVar2 + lVar4) = uVar3;
  *(undefined8 *)(lVar2 + 8 + lVar4) = uVar3;
  *(int *)(lVar2 + 0x10 + lVar4) = iVar1;
  *(int *)(lVar2 + 0x14 + lVar4) = iVar1;
  *(undefined8 *)(lVar2 + 0x18 + lVar4) = 0xffffffff00000000;
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + (int)param_1[2];
  *(int *)(param_1 + 3) = (int)param_1[3] + (int)param_1[2];
  return (longlong)((int)param_1[1] + -1) * 0x20 + *param_1;
}



// FUNCTION 1457d0472 FUN_1457d0472 body=132 status=ok
// SIG undefined FUN_1457d0472(void)

void FUN_1457d0472(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457d04f6 FUN_1457d04f6 body=136 status=ok
// SIG undefined FUN_1457d04f6(void)

longlong FUN_1457d04f6(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1457d057e(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x20;
  iVar1 = (int)param_1[2];
  uVar3 = FUN_14001cc68((longlong)iVar1 * 0xa0,8);
  *(undefined8 *)(lVar2 + lVar4) = uVar3;
  *(undefined8 *)(lVar2 + 8 + lVar4) = uVar3;
  *(int *)(lVar2 + 0x10 + lVar4) = iVar1;
  *(int *)(lVar2 + 0x14 + lVar4) = iVar1;
  *(undefined8 *)(lVar2 + 0x18 + lVar4) = 0xffffffff00000000;
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + (int)param_1[2];
  *(int *)(param_1 + 3) = (int)param_1[3] + (int)param_1[2];
  return (longlong)((int)param_1[1] + -1) * 0x20 + *param_1;
}



// FUNCTION 1457d057e FUN_1457d057e body=132 status=ok
// SIG undefined FUN_1457d057e(void)

void FUN_1457d057e(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457d0602 FUN_1457d0602 body=86 status=ok
// SIG undefined FUN_1457d0602(void)

void FUN_1457d0602(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1457d0658 FUN_1457d0658 body=167 status=ok
// SIG undefined FUN_1457d0658(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457d0658(void)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9941f8) {
    FUN_144b3d300(&DAT_14c9941f8);
    if (DAT_14c9941f8 == -1) {
      uVar1 = FUN_14576554a();
      FUN_1446f470e(&local_20,L"FIntrusiveConstraintHandle",1);
      _DAT_14c9941e8 = local_20;
      _DAT_14c9941f0 = uVar1;
      _Init_thread_footer(&DAT_14c9941f8);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d0700 FUN_1457d0700 body=177 status=ok
// SIG undefined FUN_1457d0700(void)

void FUN_1457d0700(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1449027d0(param_1,&local_30);
  lVar3 = *(longlong *)(local_30 + 0x220);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x1b8));
  *(int *)(lVar3 + 0x1b0) = *(int *)(lVar3 + 0x1b0) + 1;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if (*(char *)(lVar3 + 0x58) == '\0') {
    iVar4 = *(int *)(lVar3 + 0x5c) + 1;
  }
  else {
    if (*(int *)(lVar3 + 0x5c) != 0) goto LAB_1457d075f;
    iVar4 = 1;
  }
  *(undefined1 *)(lVar3 + 0x58) = 1;
  *(int *)(lVar3 + 0x5c) = iVar4;
LAB_1457d075f:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x1b8));
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d07b2 FUN_1457d07b2 body=212 status=ok
// SIG undefined FUN_1457d07b2(void)

void FUN_1457d07b2(longlong *param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar7;
  int iVar6;
  
  if ((int)param_1[9] != 0) {
    lVar2 = *param_2;
    uVar1 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar7 = (uint)lVar2 & 0xffff;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar4 +
                    (longlong)
                    (int)((int)param_1[9] - 1U &
                         ((uint)lVar2 << 0x10 | uVar7) + (int)((ulonglong)lVar2 >> 0x20) +
                         (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar7 >> 4)) * 4);
    while (iVar6 = iVar5, iVar6 != -1) {
      lVar3 = *param_1;
      iVar5 = *(int *)(lVar3 + 0x10 + (longlong)iVar6 * 0x18);
      if (*(longlong *)(lVar3 + (longlong)iVar6 * 0x18) == lVar2) {
        do {
          if (*(longlong *)(lVar3 + 8 + (longlong)iVar6 * 0x18) == param_3) {
            FUN_148a08300(param_1);
            lVar2 = *param_2;
          }
          do {
            iVar6 = iVar5;
            if (iVar6 == -1) {
              return;
            }
            lVar3 = *param_1;
            iVar5 = *(int *)(lVar3 + 0x10 + (longlong)iVar6 * 0x18);
          } while (*(longlong *)(lVar3 + (longlong)iVar6 * 0x18) != lVar2);
        } while( true );
      }
    }
  }
  return;
}



// FUNCTION 1457d0886 FUN_1457d0886 body=96 status=ok
// SIG undefined FUN_1457d0886(void)

void FUN_1457d0886(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1457d08e6 FUN_1457d08e6 body=57 status=ok
// SIG undefined FUN_1457d08e6(void)

void FUN_1457d08e6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb92320 == 0) {
    uVar1 = FUN_140e19277();
    DAT_14cb92320 = FUN_140002ddd(FUN_14656c760,uVar1,L"GbxUIWidgetClassDef");
  }
  return;
}



// FUNCTION 1457d0920 FUN_1457d0920 body=294 status=ok
// SIG undefined FUN_1457d0920(void)

void FUN_1457d0920(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_3 == 0) {
    lVar1 = FUN_14008e0ae(param_2);
    local_48 = FUN_145e39b3e;
    local_40 = 0;
    FUN_1457d0c48(lVar1 + 0x150,&local_38,param_1);
    *param_3 = local_38;
  }
  if (*param_4 == 0) {
    lVar1 = FUN_14008e0ae(param_2);
    local_48 = FUN_140280c1c;
    local_40 = 0;
    FUN_1457d0a48(lVar1 + 0x138,&local_38,param_1);
    *param_4 = local_38;
  }
  if (*param_5 == 0) {
    lVar1 = FUN_14008e0ae(param_2);
    local_48 = FUN_148e281d4;
    local_40 = 0;
    FUN_1457d0a48(lVar1 + 0x2b8,&local_38,param_1);
    *param_5 = local_38;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d0a48 FUN_1457d0a48 body=254 status=ok
// SIG undefined FUN_1457d0a48(void)

undefined8
FUN_1457d0a48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b3f7900;
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
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9aa350;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140e2bd22(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d0b48 FUN_1457d0b48 body=254 status=ok
// SIG undefined FUN_1457d0b48(void)

undefined8
FUN_1457d0b48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b404040;
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
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9aa3c0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145882066(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d0c48 FUN_1457d0c48 body=254 status=ok
// SIG undefined FUN_1457d0c48(void)

undefined8
FUN_1457d0c48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b3f76f0;
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
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9aa2e0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14104d758(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d0d48 FUN_1457d0d48 body=236 status=ok
// SIG undefined FUN_1457d0d48(void)

undefined8 * FUN_1457d0d48(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = FUN_14011be0c(param_1 + 0x30);
  if (lVar4 == 0) {
LAB_1457d0e05:
    lVar4 = 0;
  }
  else {
    lVar5 = FUN_144a5dd5e();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        != lVar5 + 0x30)) goto LAB_1457d0e05;
  }
  cVar3 = FUN_14011bf50(lVar4);
  if (cVar3 != '\0') {
    FUN_1403adc5e(&local_30,lVar4);
    *param_2 = *(undefined8 *)(local_30 + 0x520);
    lVar4 = *(longlong *)(local_30 + 0x528);
    param_2[1] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)local_28 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_28 + 0x10))(local_28);
          goto LAB_1457d0e0f;
        }
      }
    }
    if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_1457d0e0f:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 1457d0e38 FUN_1457d0e38 body=105 status=ok
// SIG undefined FUN_1457d0e38(void)

bool FUN_1457d0e38(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  undefined1 auStack_48 [40];
  float local_20;
  char local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x220);
  if (lVar1 != 0) {
    FUN_1418e647a(param_1,&local_20);
    if (local_1c == '\x01') {
      bVar2 = local_20 <= *(float *)(lVar1 + 0x108);
      goto LAB_1457d0e84;
    }
  }
  bVar2 = false;
LAB_1457d0e84:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d0ea2 FUN_1457d0ea2 body=91 status=ok
// SIG undefined FUN_1457d0ea2(void)

void FUN_1457d0ea2(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_140f70730();
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x41a) = 1;
    *(undefined1 *)(param_1 + 0x125) = 6;
    *(undefined1 *)(param_1 + 0x36e) = 0;
    if (*(longlong *)(param_1 + 800) != 0) {
      FUN_140f6f7b0(*(longlong *)(param_1 + 800),7);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x418) = 1;
  }
  if (*(longlong *)(param_1 + 0x420) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x420) + 0x150) = 1;
  }
  return;
}



// FUNCTION 1457d0f1d FUN_1457d0f1d body=42 status=ok
// SIG undefined FUN_1457d0f1d(void)

void FUN_1457d0f1d(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140f71704(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b9076f0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  return;
}



// FUNCTION 1457d0f50 FUN_1457d0f50 body=132 status=ok
// SIG undefined FUN_1457d0f50(void)

void FUN_1457d0f50(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457d0fd6 FUN_1457d0fd6 body=93 status=ok
// SIG undefined FUN_1457d0fd6(void)

longlong FUN_1457d0fd6(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_1414ff5a8(param_1);
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



// FUNCTION 1457d1034 FUN_1457d1034 body=190 status=ok
// SIG undefined FUN_1457d1034(void)

void FUN_1457d1034(undefined8 *param_1)

{
  undefined4 *puVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  void *_Src;
  longlong lVar6;
  
  _Src = (void *)*param_1;
  *param_1 = 0;
  iVar4 = *(int *)(param_1 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar1 = (undefined4 *)(lVar6 + 0xc7c);
  uVar5 = *puVar1;
  pbVar2 = (byte *)(lVar6 + 0xc80);
  bVar3 = *pbVar2;
  if ((bVar3 & 1) != 0) {
    *pbVar2 = 0;
    *puVar1 = 0xffffffff;
  }
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1457d10f2(param_1,iVar4);
    memcpy((void *)*param_1,_Src,(longlong)iVar4 << 4);
  }
  if ((bVar3 & 1) != 0) {
    *puVar1 = uVar5;
    *pbVar2 = 1;
  }
  if (_Src != (void *)0x0) {
    FUN_1400020a8(_Src);
    return;
  }
  return;
}



// FUNCTION 1457d10f2 FUN_1457d10f2 body=88 status=ok
// SIG undefined FUN_1457d10f2(void)

void FUN_1457d10f2(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 4,4);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,4);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1457d114a FUN_1457d114a body=190 status=ok
// SIG undefined FUN_1457d114a(void)

void FUN_1457d114a(undefined8 *param_1)

{
  undefined4 *puVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  void *_Src;
  longlong lVar6;
  
  _Src = (void *)*param_1;
  *param_1 = 0;
  iVar4 = *(int *)(param_1 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar1 = (undefined4 *)(lVar6 + 0xc7c);
  uVar5 = *puVar1;
  pbVar2 = (byte *)(lVar6 + 0xc80);
  bVar3 = *pbVar2;
  if ((bVar3 & 1) != 0) {
    *pbVar2 = 0;
    *puVar1 = 0xffffffff;
  }
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1457d1208(param_1,iVar4);
    memcpy((void *)*param_1,_Src,(longlong)iVar4 << 4);
  }
  if ((bVar3 & 1) != 0) {
    *puVar1 = uVar5;
    *pbVar2 = 1;
  }
  if (_Src != (void *)0x0) {
    FUN_1400020a8(_Src);
    return;
  }
  return;
}



// FUNCTION 1457d1208 FUN_1457d1208 body=88 status=ok
// SIG undefined FUN_1457d1208(void)

void FUN_1457d1208(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 4,4);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,4);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1457d1260 FUN_1457d1260 body=190 status=ok
// SIG undefined FUN_1457d1260(void)

void FUN_1457d1260(undefined8 *param_1)

{
  undefined4 *puVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  void *_Src;
  longlong lVar6;
  
  _Src = (void *)*param_1;
  *param_1 = 0;
  iVar4 = *(int *)(param_1 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar1 = (undefined4 *)(lVar6 + 0xc7c);
  uVar5 = *puVar1;
  pbVar2 = (byte *)(lVar6 + 0xc80);
  bVar3 = *pbVar2;
  if ((bVar3 & 1) != 0) {
    *pbVar2 = 0;
    *puVar1 = 0xffffffff;
  }
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1457d131e(param_1,iVar4);
    memcpy((void *)*param_1,_Src,(longlong)iVar4 << 3);
  }
  if ((bVar3 & 1) != 0) {
    *puVar1 = uVar5;
    *pbVar2 = 1;
  }
  if (_Src != (void *)0x0) {
    FUN_1400020a8(_Src);
    return;
  }
  return;
}



// FUNCTION 1457d131e FUN_1457d131e body=89 status=ok
// SIG undefined FUN_1457d131e(void)

void FUN_1457d131e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,4);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,4);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1457d1378 FUN_1457d1378 body=190 status=ok
// SIG undefined FUN_1457d1378(void)

void FUN_1457d1378(undefined8 *param_1)

{
  undefined4 *puVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  void *_Src;
  longlong lVar6;
  
  _Src = (void *)*param_1;
  *param_1 = 0;
  iVar4 = *(int *)(param_1 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar1 = (undefined4 *)(lVar6 + 0xc7c);
  uVar5 = *puVar1;
  pbVar2 = (byte *)(lVar6 + 0xc80);
  bVar3 = *pbVar2;
  if ((bVar3 & 1) != 0) {
    *pbVar2 = 0;
    *puVar1 = 0xffffffff;
  }
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1457d1436(param_1,iVar4);
    memcpy((void *)*param_1,_Src,(longlong)iVar4 << 3);
  }
  if ((bVar3 & 1) != 0) {
    *puVar1 = uVar5;
    *pbVar2 = 1;
  }
  if (_Src != (void *)0x0) {
    FUN_1400020a8(_Src);
    return;
  }
  return;
}



// FUNCTION 1457d1436 FUN_1457d1436 body=89 status=ok
// SIG undefined FUN_1457d1436(void)

void FUN_1457d1436(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,4);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,4);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1457d1490 FUN_1457d1490 body=193 status=ok
// SIG undefined FUN_1457d1490(void)

void FUN_1457d1490(undefined8 *param_1)

{
  undefined4 *puVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  void *_Src;
  longlong lVar6;
  
  _Src = (void *)*param_1;
  *param_1 = 0;
  iVar4 = *(int *)(param_1 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar1 = (undefined4 *)(lVar6 + 0xc7c);
  uVar5 = *puVar1;
  pbVar2 = (byte *)(lVar6 + 0xc80);
  bVar3 = *pbVar2;
  if ((bVar3 & 1) != 0) {
    *pbVar2 = 0;
    *puVar1 = 0xffffffff;
  }
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1447c510a(param_1,iVar4,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar4 << 2);
  }
  if ((bVar3 & 1) != 0) {
    *puVar1 = uVar5;
    *pbVar2 = 1;
  }
  if (_Src != (void *)0x0) {
    FUN_1400020a8(_Src);
    return;
  }
  return;
}



// FUNCTION 1457d1552 FUN_1457d1552 body=202 status=ok
// SIG undefined FUN_1457d1552(void)

void FUN_1457d1552(longlong *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_1;
  *param_1 = 0;
  local_28 = (undefined4)param_1[1];
  local_24 = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(byte *)(lVar3 + 0xc80) & 1) == 0) {
    FUN_1457d161e(param_1,&local_30);
  }
  else {
    puVar1 = (undefined1 *)(lVar3 + 0xc80);
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar2 = *(undefined4 *)(lVar3 + 0xc7c);
    *puVar1 = 0;
    *(undefined4 *)(lVar3 + 0xc7c) = 0xffffffff;
    FUN_1457d161e(param_1,&local_30);
    *(undefined4 *)(lVar3 + 0xc7c) = uVar2;
    *puVar1 = 1;
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d161e FUN_1457d161e body=79 status=ok
// SIG undefined FUN_1457d161e(void)

undefined8 * FUN_1457d161e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1457d166e(param_1,iVar1);
      FUN_140f74646(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1457d166e FUN_1457d166e body=115 status=ok
// SIG undefined FUN_1457d166e(void)

void FUN_1457d166e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1457d16e2 FUN_1457d16e2 body=202 status=ok
// SIG undefined FUN_1457d16e2(void)

void FUN_1457d16e2(longlong *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_1;
  *param_1 = 0;
  local_28 = (undefined4)param_1[1];
  local_24 = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(byte *)(lVar3 + 0xc80) & 1) == 0) {
    FUN_1457d17ae(param_1,&local_30);
  }
  else {
    puVar1 = (undefined1 *)(lVar3 + 0xc80);
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar2 = *(undefined4 *)(lVar3 + 0xc7c);
    *puVar1 = 0;
    *(undefined4 *)(lVar3 + 0xc7c) = 0xffffffff;
    FUN_1457d17ae(param_1,&local_30);
    *(undefined4 *)(lVar3 + 0xc7c) = uVar2;
    *puVar1 = 1;
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d17ae FUN_1457d17ae body=79 status=ok
// SIG undefined FUN_1457d17ae(void)

undefined8 * FUN_1457d17ae(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1457d187a(param_1,iVar1);
      FUN_1457d17fd(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1457d17fd FUN_1457d17fd body=52 status=ok
// SIG undefined FUN_1457d17fd(void)

void FUN_1457d17fd(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1457d1832(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 1457d1832 FUN_1457d1832 body=71 status=ok
// SIG undefined FUN_1457d1832(void)

undefined8 * FUN_1457d1832(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1457d187a FUN_1457d187a body=115 status=ok
// SIG undefined FUN_1457d187a(void)

void FUN_1457d187a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1457d18ee FUN_1457d18ee body=202 status=ok
// SIG undefined FUN_1457d18ee(void)

void FUN_1457d18ee(longlong *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_1;
  *param_1 = 0;
  local_28 = (undefined4)param_1[1];
  local_24 = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(byte *)(lVar3 + 0xc80) & 1) == 0) {
    FUN_1457d19ba(param_1,&local_30);
  }
  else {
    puVar1 = (undefined1 *)(lVar3 + 0xc80);
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar2 = *(undefined4 *)(lVar3 + 0xc7c);
    *puVar1 = 0;
    *(undefined4 *)(lVar3 + 0xc7c) = 0xffffffff;
    FUN_1457d19ba(param_1,&local_30);
    *(undefined4 *)(lVar3 + 0xc7c) = uVar2;
    *puVar1 = 1;
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d19ba FUN_1457d19ba body=79 status=ok
// SIG undefined FUN_1457d19ba(void)

undefined8 * FUN_1457d19ba(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1457d1a3e(param_1,iVar1);
      FUN_1457d1a09(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1457d1a09 FUN_1457d1a09 body=52 status=ok
// SIG undefined FUN_1457d1a09(void)

void FUN_1457d1a09(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_140f746b6(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 1457d1a3e FUN_1457d1a3e body=115 status=ok
// SIG undefined FUN_1457d1a3e(void)

void FUN_1457d1a3e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1457d1ab2 FUN_1457d1ab2 body=202 status=ok
// SIG undefined FUN_1457d1ab2(void)

void FUN_1457d1ab2(longlong *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_1;
  *param_1 = 0;
  local_28 = (undefined4)param_1[1];
  local_24 = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(byte *)(lVar3 + 0xc80) & 1) == 0) {
    FUN_1457d1b7e(param_1,&local_30);
  }
  else {
    puVar1 = (undefined1 *)(lVar3 + 0xc80);
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar2 = *(undefined4 *)(lVar3 + 0xc7c);
    *puVar1 = 0;
    *(undefined4 *)(lVar3 + 0xc7c) = 0xffffffff;
    FUN_1457d1b7e(param_1,&local_30);
    *(undefined4 *)(lVar3 + 0xc7c) = uVar2;
    *puVar1 = 1;
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d1b7e FUN_1457d1b7e body=79 status=ok
// SIG undefined FUN_1457d1b7e(void)

undefined8 * FUN_1457d1b7e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1457d1bce(param_1,iVar1);
      FUN_140f746fd(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1457d1bce FUN_1457d1bce body=115 status=ok
// SIG undefined FUN_1457d1bce(void)

void FUN_1457d1bce(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1457d1c42 FUN_1457d1c42 body=216 status=ok
// SIG undefined FUN_1457d1c42(void)

void FUN_1457d1c42(longlong *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_1;
  *param_1 = 0;
  local_28 = (undefined4)param_1[1];
  local_24 = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(byte *)(lVar3 + 0xc80) & 1) == 0) {
    FUN_1457d1d1c(param_1,&local_30);
  }
  else {
    puVar1 = (undefined1 *)(lVar3 + 0xc80);
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar2 = *(undefined4 *)(lVar3 + 0xc7c);
    *puVar1 = 0;
    *(undefined4 *)(lVar3 + 0xc7c) = 0xffffffff;
    FUN_1457d1d1c(param_1,&local_30);
    *(undefined4 *)(lVar3 + 0xc7c) = uVar2;
    *puVar1 = 1;
  }
  FUN_140df63b0(local_30,local_28);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d1d1c FUN_1457d1d1c body=93 status=ok
// SIG undefined FUN_1457d1d1c(void)

undefined8 * FUN_1457d1d1c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140df63b0(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1457d1d7a(param_1,iVar1);
      FUN_140f7476d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1457d1d7a FUN_1457d1d7a body=98 status=ok
// SIG undefined FUN_1457d1d7a(void)

void FUN_1457d1d7a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1457d1ddc FUN_1457d1ddc body=216 status=ok
// SIG undefined FUN_1457d1ddc(void)

void FUN_1457d1ddc(longlong *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_1;
  *param_1 = 0;
  local_28 = (undefined4)param_1[1];
  local_24 = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(byte *)(lVar3 + 0xc80) & 1) == 0) {
    FUN_1457d1eb6(param_1,&local_30);
  }
  else {
    puVar1 = (undefined1 *)(lVar3 + 0xc80);
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar2 = *(undefined4 *)(lVar3 + 0xc7c);
    *puVar1 = 0;
    *(undefined4 *)(lVar3 + 0xc7c) = 0xffffffff;
    FUN_1457d1eb6(param_1,&local_30);
    *(undefined4 *)(lVar3 + 0xc7c) = uVar2;
    *puVar1 = 1;
  }
  FUN_140df6446(local_30,local_28);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d1eb6 FUN_1457d1eb6 body=93 status=ok
// SIG undefined FUN_1457d1eb6(void)

undefined8 * FUN_1457d1eb6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140df6446(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1457d1f60(param_1,iVar1);
      FUN_1457d1f13(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1457d1f13 FUN_1457d1f13 body=76 status=ok
// SIG undefined FUN_1457d1f13(void)

void FUN_1457d1f13(undefined8 *param_1,longlong param_2,int param_3)

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



// FUNCTION 1457d1f60 FUN_1457d1f60 body=115 status=ok
// SIG undefined FUN_1457d1f60(void)

void FUN_1457d1f60(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1457d1fd4 FUN_1457d1fd4 body=216 status=ok
// SIG undefined FUN_1457d1fd4(void)

void FUN_1457d1fd4(longlong *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_1;
  *param_1 = 0;
  local_28 = (undefined4)param_1[1];
  local_24 = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(byte *)(lVar3 + 0xc80) & 1) == 0) {
    FUN_1457d20ae(param_1,&local_30);
  }
  else {
    puVar1 = (undefined1 *)(lVar3 + 0xc80);
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar2 = *(undefined4 *)(lVar3 + 0xc7c);
    *puVar1 = 0;
    *(undefined4 *)(lVar3 + 0xc7c) = 0xffffffff;
    FUN_1457d20ae(param_1,&local_30);
    *(undefined4 *)(lVar3 + 0xc7c) = uVar2;
    *puVar1 = 1;
  }
  FUN_140df63e1(local_30,local_28);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d20ae FUN_1457d20ae body=93 status=ok
// SIG undefined FUN_1457d20ae(void)

undefined8 * FUN_1457d20ae(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140df63e1(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1457d210c(param_1,iVar1);
      FUN_140f747ff(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1457d210c FUN_1457d210c body=115 status=ok
// SIG undefined FUN_1457d210c(void)

void FUN_1457d210c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1457d2180 FUN_1457d2180 body=216 status=ok
// SIG undefined FUN_1457d2180(void)

void FUN_1457d2180(longlong *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_1;
  *param_1 = 0;
  local_28 = (undefined4)param_1[1];
  local_24 = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(byte *)(lVar3 + 0xc80) & 1) == 0) {
    FUN_1457d225a(param_1,&local_30);
  }
  else {
    puVar1 = (undefined1 *)(lVar3 + 0xc80);
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar2 = *(undefined4 *)(lVar3 + 0xc7c);
    *puVar1 = 0;
    *(undefined4 *)(lVar3 + 0xc7c) = 0xffffffff;
    FUN_1457d225a(param_1,&local_30);
    *(undefined4 *)(lVar3 + 0xc7c) = uVar2;
    *puVar1 = 1;
  }
  FUN_140df64ba(local_30,local_28);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d225a FUN_1457d225a body=93 status=ok
// SIG undefined FUN_1457d225a(void)

undefined8 * FUN_1457d225a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140df64ba(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1457d22b8(param_1,iVar1);
      FUN_140f74b6d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1457d22b8 FUN_1457d22b8 body=98 status=ok
// SIG undefined FUN_1457d22b8(void)

void FUN_1457d22b8(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1457d231a FUN_1457d231a body=216 status=ok
// SIG undefined FUN_1457d231a(void)

void FUN_1457d231a(longlong *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_1;
  *param_1 = 0;
  local_28 = (undefined4)param_1[1];
  local_24 = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(byte *)(lVar3 + 0xc80) & 1) == 0) {
    FUN_1457d23f4(param_1,&local_30);
  }
  else {
    puVar1 = (undefined1 *)(lVar3 + 0xc80);
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar2 = *(undefined4 *)(lVar3 + 0xc7c);
    *puVar1 = 0;
    *(undefined4 *)(lVar3 + 0xc7c) = 0xffffffff;
    FUN_1457d23f4(param_1,&local_30);
    *(undefined4 *)(lVar3 + 0xc7c) = uVar2;
    *puVar1 = 1;
  }
  FUN_140df648f(local_30,local_28);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d23f4 FUN_1457d23f4 body=93 status=ok
// SIG undefined FUN_1457d23f4(void)

undefined8 * FUN_1457d23f4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140df648f(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1457d2452(param_1,iVar1);
      FUN_140f74bda(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1457d2452 FUN_1457d2452 body=98 status=ok
// SIG undefined FUN_1457d2452(void)

void FUN_1457d2452(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1457d24b4 FUN_1457d24b4 body=216 status=ok
// SIG undefined FUN_1457d24b4(void)

void FUN_1457d24b4(longlong *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_1;
  *param_1 = 0;
  local_28 = (undefined4)param_1[1];
  local_24 = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(byte *)(lVar3 + 0xc80) & 1) == 0) {
    FUN_1457d258e(param_1,&local_30);
  }
  else {
    puVar1 = (undefined1 *)(lVar3 + 0xc80);
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar2 = *(undefined4 *)(lVar3 + 0xc7c);
    *puVar1 = 0;
    *(undefined4 *)(lVar3 + 0xc7c) = 0xffffffff;
    FUN_1457d258e(param_1,&local_30);
    *(undefined4 *)(lVar3 + 0xc7c) = uVar2;
    *puVar1 = 1;
  }
  FUN_140595ef6(local_30,local_28);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d258e FUN_1457d258e body=93 status=ok
// SIG undefined FUN_1457d258e(void)

undefined8 * FUN_1457d258e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140595ef6(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1457d25ec(param_1,iVar1);
      FUN_1457d265f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1457d25ec FUN_1457d25ec body=115 status=ok
// SIG undefined FUN_1457d25ec(void)

void FUN_1457d25ec(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    iVar2 = (int)(uVar1 / 0x28);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x28,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1457d265f FUN_1457d265f body=132 status=ok
// SIG undefined FUN_1457d265f(void)

void FUN_1457d265f(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x18);
    do {
      puVar5[-3] = *param_2;
      uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
      uVar3 = *(undefined4 *)(param_2 + 2);
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
      *(undefined4 *)(puVar5 + -2) = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)((longlong)puVar5 + -0xc) = uVar2;
      *(undefined4 *)(puVar5 + -1) = uVar3;
      *(undefined4 *)((longlong)puVar5 + -4) = uVar4;
      *puVar5 = 0;
      iVar1 = *(int *)(param_2 + 4);
      _Src = (void *)param_2[3];
      *(int *)(puVar5 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar5,iVar1,0);
        memcpy((void *)*puVar5,_Src,(longlong)iVar1 * 2);
      }
      param_2 = param_2 + 5;
      puVar5 = puVar5 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1457d26e4 FUN_1457d26e4 body=216 status=ok
// SIG undefined FUN_1457d26e4(void)

void FUN_1457d26e4(longlong *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_1;
  *param_1 = 0;
  local_28 = (undefined4)param_1[1];
  local_24 = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(byte *)(lVar3 + 0xc80) & 1) == 0) {
    FUN_1410d4484(param_1,&local_30);
  }
  else {
    puVar1 = (undefined1 *)(lVar3 + 0xc80);
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar2 = *(undefined4 *)(lVar3 + 0xc7c);
    *puVar1 = 0;
    *(undefined4 *)(lVar3 + 0xc7c) = 0xffffffff;
    FUN_1410d4484(param_1,&local_30);
    *(undefined4 *)(lVar3 + 0xc7c) = uVar2;
    *puVar1 = 1;
  }
  FUN_1405d7ab2(local_30,local_28);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d27be FUN_1457d27be body=40 status=ok
// SIG undefined FUN_1457d27be(void)

undefined8 FUN_1457d27be(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457d27e6 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457d27ec thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457d27fa FUN_1457d27fa body=40 status=ok
// SIG undefined FUN_1457d27fa(void)

undefined8 FUN_1457d27fa(undefined8 param_1,int param_2)

{
  FUN_1457d2822();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457d2822 FUN_1457d2822 body=786 status=ok
// SIG undefined FUN_1457d2822(void)

void FUN_1457d2822(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a7e1160;
  *(undefined4 *)(param_1 + 0x99) = 0;
  if (param_1[0x98] != 0) {
    FUN_1400020a8();
  }
  FUN_1457d2b5c(param_1 + 0x90);
  FUN_144760e21(param_1[0x8b],*(undefined4 *)(param_1 + 0x8c));
  if (param_1[0x8b] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x8a) = 0;
  if (param_1[0x89] != 0) {
    FUN_1400020a8();
  }
  FUN_1457d2ca0(param_1 + 0x81);
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (param_1[0x7f] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 0x77);
  *(undefined4 *)(param_1 + 0x76) = 0;
  if (param_1[0x75] != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(param_1 + 0x6d);
  if (param_1[0x68] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x67) = 0;
  if (param_1[0x66] != 0) {
    FUN_1400020a8();
  }
  FUN_1457d2b92(param_1 + 0x5e);
  FUN_1457d2b34(param_1[0x5c],*(undefined4 *)(param_1 + 0x5d));
  if (param_1[0x5c] != 0) {
    FUN_1400020a8();
  }
  FUN_140f77756(param_1 + 0x3d);
  FUN_1447a1747(param_1[0x3b],*(undefined4 *)(param_1 + 0x3c));
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x39],*(undefined4 *)(param_1 + 0x3a));
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x37],*(undefined4 *)(param_1 + 0x38));
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x36) = 0;
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_1457d2cd8(param_1 + 0x2d);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  FUN_1457d2bc8(param_1 + 0x23);
  *(undefined4 *)(param_1 + 0x22) = 0;
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_1457d2bfe(param_1 + 0x19);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_1457d2c34(param_1 + 0xf);
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1457d2c6a(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1457d2b34 FUN_1457d2b34 body=40 status=ok
// SIG undefined FUN_1457d2b34(void)

void FUN_1457d2b34(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14795625e(param_1);
    param_1 = param_1 + 0x40;
  }
  return;
}



// FUNCTION 1457d2b5c FUN_1457d2b5c body=53 status=ok
// SIG undefined FUN_1457d2b5c(void)

void FUN_1457d2b5c(longlong *param_1)

{
  FUN_140f77204();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457d2b92 FUN_1457d2b92 body=53 status=ok
// SIG undefined FUN_1457d2b92(void)

void FUN_1457d2b92(longlong *param_1)

{
  FUN_1457d2d10();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457d2bc8 FUN_1457d2bc8 body=53 status=ok
// SIG undefined FUN_1457d2bc8(void)

void FUN_1457d2bc8(longlong *param_1)

{
  FUN_140f77024();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457d2bfe FUN_1457d2bfe body=53 status=ok
// SIG undefined FUN_1457d2bfe(void)

void FUN_1457d2bfe(longlong *param_1)

{
  FUN_1457d2e40();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457d2c34 FUN_1457d2c34 body=53 status=ok
// SIG undefined FUN_1457d2c34(void)

void FUN_1457d2c34(longlong *param_1)

{
  FUN_1457d2d6a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457d2c6a FUN_1457d2c6a body=53 status=ok
// SIG undefined FUN_1457d2c6a(void)

void FUN_1457d2c6a(longlong *param_1)

{
  FUN_1457d2f9c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457d2ca0 FUN_1457d2ca0 body=55 status=ok
// SIG undefined FUN_1457d2ca0(void)

void FUN_1457d2ca0(longlong *param_1)

{
  FUN_1457d30f8(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457d2cd8 FUN_1457d2cd8 body=55 status=ok
// SIG undefined FUN_1457d2cd8(void)

void FUN_1457d2cd8(longlong *param_1)

{
  FUN_1457d2dc4(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457d2d10 FUN_1457d2d10 body=90 status=ok
// SIG undefined FUN_1457d2d10(void)

void FUN_1457d2d10(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140957390(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1457d2d6a FUN_1457d2d6a body=90 status=ok
// SIG undefined FUN_1457d2d6a(void)

void FUN_1457d2d6a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140957390(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1457d2dc4 FUN_1457d2dc4 body=123 status=ok
// SIG undefined FUN_1457d2dc4(void)

void FUN_1457d2dc4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1405357e8(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1457d2e40 FUN_1457d2e40 body=346 status=ok
// SIG undefined FUN_1457d2e40(void)

void FUN_1457d2e40(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + 0x10 + (longlong)iStack_4c * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457d2f9c FUN_1457d2f9c body=346 status=ok
// SIG undefined FUN_1457d2f9c(void)

void FUN_1457d2f9c(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + 0x10 + (longlong)iStack_4c * 0x38) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457d30f8 FUN_1457d30f8 body=410 status=ok
// SIG undefined FUN_1457d30f8(void)

void FUN_1457d30f8(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      lVar2 = *local_80;
      lVar4 = (longlong)iStack_64;
      if (*(longlong *)(lVar2 + 0x30 + lVar4 * 0x48) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + lVar4 * 0x48 + 0x10) != 0) {
        FUN_1400020a8();
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1403af08a(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar5 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar5) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar3 = 0x80;
    if (0x80 < (int)uVar5) {
      uVar3 = uVar5;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457d3294 FUN_1457d3294 body=119 status=ok
// SIG undefined FUN_1457d3294(void)

void FUN_1457d3294(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457d330c FUN_1457d330c body=102 status=ok
// SIG undefined FUN_1457d330c(void)

undefined8 * FUN_1457d330c(undefined8 *param_1)

{
  *(undefined8 *)((longlong)param_1 + 10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x12) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0xffffffff;
  *(undefined2 *)(param_1 + 0xb) = 0;
  FUN_1400b22c2(param_1 + 0xc,"Gamepad");
  *(undefined4 *)(param_1 + 0xe) = 0x10100;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  return param_1;
}



// FUNCTION 1457d3372 FUN_1457d3372 body=132 status=ok
// SIG undefined FUN_1457d3372(void)

void FUN_1457d3372(longlong param_1,int param_2)

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



// FUNCTION 1457d33f6 FUN_1457d33f6 body=213 status=ok
// SIG undefined FUN_1457d33f6(void)

longlong FUN_1457d33f6(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined8 local_20;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c867e60 != DAT_14c867e8c) {
    puVar3 = &DAT_14c867e90;
    if (DAT_14c867e98 != (undefined *)0x0) {
      puVar3 = DAT_14c867e98;
    }
    iVar1 = *(int *)(puVar3 + (ulonglong)(DAT_14c867ea0 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = DAT_14c867e58 + (longlong)iVar1 * 0xa0;
        if (*(longlong *)(DAT_14c867e58 + (longlong)iVar1 * 0xa0) == *param_2) {
          if (lVar2 != 0) goto LAB_1457d34a4;
          break;
        }
        iVar1 = *(int *)(lVar2 + 0x98);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_2;
  local_20 = param_3;
  FUN_1457d34cc(&local_14,param_1,&local_28);
  lVar2 = (longlong)local_14 * 0xa0 + DAT_14c867e58;
LAB_1457d34a4:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 + 8;
}



// FUNCTION 1457d34cc FUN_1457d34cc body=259 status=ok
// SIG undefined FUN_1457d34cc(void)

undefined4 * FUN_1457d34cc(undefined4 *param_1,uint param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  undefined *puVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1457d3782(local_48);
  uVar1 = param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  FUN_1457d3682(local_40 + 1,uVar1);
  *(undefined4 *)(local_40 + 0x13) = 0xffffffff;
  cVar3 = FUN_1457d35d0(param_2,local_40,local_48);
  if (cVar3 == '\0') {
    uVar4 = DAT_14c867e60 - DAT_14c867e8c;
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= DAT_14c867ea0)) {
      param_2 = DAT_14c867ea0 - 1U & param_2;
      *(uint *)((longlong)local_40 + 0x9c) = param_2;
      puVar7 = &DAT_14c867e90;
      if (DAT_14c867e98 != (undefined *)0x0) {
        puVar7 = DAT_14c867e98;
      }
      *(undefined4 *)(local_40 + 0x13) = *(undefined4 *)(puVar7 + (longlong)(int)param_2 * 4);
      *(undefined4 *)(puVar7 + (longlong)(int)param_2 * 4) = local_48[0];
    }
    else {
      DAT_14c867ea0 = iVar6;
      FUN_1457d3e66();
    }
  }
  *param_1 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d35d0 FUN_1457d35d0 body=177 status=ok
// SIG undefined FUN_1457d35d0(void)

undefined8 FUN_1457d35d0(uint param_1,longlong *param_2,int *param_3)

{
  void *_Dst;
  undefined *puVar1;
  int iVar2;
  
  if ((DAT_14c867e60 - DAT_14c867e8c != 1) && (DAT_14c867e60 != DAT_14c867e8c)) {
    puVar1 = &DAT_14c867e90;
    if (DAT_14c867e98 != (undefined *)0x0) {
      puVar1 = DAT_14c867e98;
    }
    iVar2 = *(int *)(puVar1 + (ulonglong)(DAT_14c867ea0 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(DAT_14c867e58 + (longlong)iVar2 * 0xa0);
        if (*(longlong *)(DAT_14c867e58 + (longlong)iVar2 * 0xa0) == *param_2) {
          FUN_1457d3294((longlong)_Dst + 8);
          memmove(_Dst,param_2,0x98);
          FUN_1468144b0(*param_3);
          *param_3 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x98);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1457d3682 FUN_1457d3682 body=255 status=ok
// SIG undefined FUN_1457d3682(void)

void FUN_1457d3682(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  param_2[2] = 0;
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
  param_1[4] = 0;
  param_1[4] = param_2[4];
  param_2[4] = 0;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  param_2[5] = 0;
  param_1[6] = 0;
  param_1[6] = param_2[6];
  param_2[6] = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  param_2[7] = 0;
  uVar1 = param_2[8];
  uVar2 = param_2[9];
  uVar3 = *(undefined8 *)((longlong)param_2 + 0x52);
  *(undefined8 *)((longlong)param_1 + 0x4a) = *(undefined8 *)((longlong)param_2 + 0x4a);
  *(undefined8 *)((longlong)param_1 + 0x52) = uVar3;
  param_1[8] = uVar1;
  param_1[9] = uVar2;
  param_1[0xc] = 0;
  param_1[0xc] = param_2[0xc];
  param_2[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
  param_2[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  param_1[0xf] = 0;
  param_1[0xf] = param_2[0xf];
  param_2[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x84);
  param_2[0x10] = 0;
  param_1[0x11] = param_2[0x11];
  return;
}



// FUNCTION 1457d3782 FUN_1457d3782 body=278 status=ok
// SIG undefined FUN_1457d3782(void)

int * FUN_1457d3782(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14c867e88;
  iVar3 = DAT_14c867e60;
  if (DAT_14c867e8c == 0) {
    iVar2 = DAT_14c867e60 + 1;
    bVar7 = DAT_14c867e64 == DAT_14c867e60;
    DAT_14c867e60 = iVar2;
    if (bVar7) {
      FUN_1413d87fe(&DAT_14c867e58,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14c867e68,1);
    puVar4 = DAT_14c867e78;
    if (DAT_14c867e78 == (undefined *)0x0) {
      puVar4 = &DAT_14c867e68;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14c867e88;
    DAT_14c867e88 = *(int *)(DAT_14c867e58 + 4 + lVar6 * 0xa0);
    DAT_14c867e8c = DAT_14c867e8c + -1;
    if (DAT_14c867e8c != 0) {
      *(undefined4 *)(DAT_14c867e58 + (longlong)DAT_14c867e88 * 0xa0) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14c867e68;
  if (DAT_14c867e78 != (undefined *)0x0) {
    puVar4 = DAT_14c867e78;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0xa0 + DAT_14c867e58;
  return param_1;
}



// FUNCTION 1457d3898 FUN_1457d3898 body=350 status=ok
// SIG undefined FUN_1457d3898(void)

undefined4 *
FUN_1457d3898(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1402ca3ce(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar8 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar5 >> 4);
  local_58 = param_4;
  cVar3 = FUN_14090688a(param_1,uVar8,local_40);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x14) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_140906920(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d39f8 FUN_1457d39f8 body=836 status=ok
// SIG undefined FUN_1457d39f8(void)

undefined4 FUN_1457d39f8(uint param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_b8 [44];
  undefined4 local_8c;
  longlong local_88 [2];
  longlong local_78 [2];
  undefined2 *local_68;
  undefined8 uStack_60;
  undefined2 *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140f7cd83();
  uVar2 = 0;
  if (((int)param_1 < 0) || (DAT_14c868280 <= (int)param_1)) goto LAB_1457d3c5f;
  local_68 = (undefined2 *)0x0;
  uStack_60 = 0;
  lVar5 = (ulonglong)param_1 * 0x10;
  if (*(int *)(DAT_14c868278 + 8 + lVar5) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(DAT_14c868278 + lVar5);
  }
  iVar3 = 0;
  uVar2 = FUN_140f7cb10(&local_68,puVar4,0,0);
  if ((char)uVar2 != '\0') {
    local_50 = (int)uStack_60 + -1;
    if ((int)uStack_60 == 0) {
      local_50 = 0;
    }
    local_58 = local_68;
    local_8c = uVar2;
    FUN_140fa6601(param_2,&local_58,0,DAT_14c868278 + lVar5);
    lVar6 = DAT_14c868278 + lVar5;
    puVar4 = &DAT_149dfb77a;
    FUN_1457d3d7a(local_78,&DAT_149dfb77a);
    FUN_1457d3d3e(local_78,&local_58,0x2f,0);
    if (local_50 != 0) {
      puVar4 = local_58;
      iVar3 = local_50 + -1;
    }
    cVar1 = FUN_144a791f8(lVar6,puVar4,iVar3,1);
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    if (cVar1 == '\0') {
      lVar6 = DAT_14c868278 + lVar5;
      puVar4 = &DAT_149dfb77a;
      FUN_1457d3df4(local_78,&DAT_149dfb77a);
      FUN_1457d3d3e(local_78,&local_58,0x2f,0);
      iVar3 = 0;
      if (local_50 != 0) {
        puVar4 = local_58;
        iVar3 = local_50 + -1;
      }
      cVar1 = FUN_144a791f8(lVar6,puVar4,iVar3,1);
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_78[0] != 0) {
        FUN_1400020a8();
      }
      if (cVar1 != '\0') goto LAB_1457d3c8a;
      FUN_140bee914(local_78,lVar5 + DAT_14c868278);
      FUN_14093d9c4(&local_58,local_78);
      if (*param_3 != 0) {
        FUN_1400020a8();
      }
      uVar2 = local_8c;
      *param_3 = (longlong)local_58;
      *(int *)(param_3 + 1) = local_50;
      *(undefined4 *)((longlong)param_3 + 0xc) = local_4c;
      if (local_78[0] != 0) {
        FUN_1400020a8();
      }
    }
    else {
LAB_1457d3c8a:
      FUN_140bee914(local_88,lVar5 + DAT_14c868278);
      FUN_140beea4a(local_78,local_88);
      FUN_14093d9c4(&local_58,local_78);
      if (*param_3 != 0) {
        FUN_1400020a8();
      }
      *param_3 = (longlong)local_58;
      *(int *)(param_3 + 1) = local_50;
      *(undefined4 *)((longlong)param_3 + 0xc) = local_4c;
      if (local_78[0] != 0) {
        FUN_1400020a8();
      }
      uVar2 = local_8c;
      if (local_88[0] != 0) {
        FUN_1400020a8();
        uVar2 = local_8c;
      }
    }
    iVar3 = (int)param_3[1] + -1;
    if ((int)param_3[1] == 0) {
      iVar3 = 0;
    }
    FUN_1402980a2(param_2 + 0x60,*param_3,iVar3);
    *(byte *)(param_2 + 0x50) = *(byte *)(param_2 + 0x50) & 0xfb | (1 < (int)param_3[1]) << 2;
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1457d3c5f:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1457d3d3e FUN_1457d3d3e body=60 status=ok
// SIG undefined FUN_1457d3d3e(void)

undefined8 *
FUN_1457d3d3e(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_140db34f4(param_1,param_3,param_4);
  *param_2 = *param_1;
  *param_1 = 0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 1457d3d7a FUN_1457d3d7a body=121 status=ok
// SIG undefined FUN_1457d3d7a(void)

undefined8 FUN_1457d3d7a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_140d6ac5a();
  FUN_140056680(local_30,uVar1);
  local_38 = 0;
  FUN_140808bbe(param_1,local_30,0,param_2);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d3df4 FUN_1457d3df4 body=113 status=ok
// SIG undefined FUN_1457d3df4(void)

undefined8 FUN_1457d3df4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140f7cd62(local_30);
  local_38 = 0;
  FUN_140808bbe(param_1,local_30,4,param_2);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d3e66 FUN_1457d3e66 body=533 status=ok
// SIG undefined FUN_1457d3e66(void)

void FUN_1457d3e66(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c867e98 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c867e98,0,0,4);
  }
  uVar3 = DAT_14c867ea0;
  uVar2 = local_50;
  if (DAT_14c867ea0 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14c867e90,0,DAT_14c867ea0,4);
    if (0 < (int)uVar3) {
      do {
        puVar5 = DAT_14c867e98;
        if (DAT_14c867e98 == (undefined *)0x0) {
          puVar5 = &DAT_14c867e90;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14c867ea0 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14c867e68;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14c867e80 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14c867e58;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar6 = (longlong)iVar4 * 0xa0;
        uVar2 = *(undefined8 *)(lVar1 + lVar6);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14c867ea0 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x9c + lVar6) = iVar8;
        puVar5 = DAT_14c867e98;
        if (DAT_14c867e98 == (undefined *)0x0) {
          puVar5 = &DAT_14c867e90;
        }
        *(undefined4 *)(lVar1 + 0x98 + lVar6) =
             *(undefined4 *)(puVar5 + ((longlong)(int)DAT_14c867ea0 - 1U & uVar9) * 4);
        puVar5 = DAT_14c867e98;
        if (DAT_14c867e98 == (undefined *)0x0) {
          puVar5 = &DAT_14c867e90;
        }
        *(int *)(puVar5 + ((longlong)iVar8 & (longlong)(int)DAT_14c867ea0 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457d407c FUN_1457d407c body=818 status=ok
// SIG undefined FUN_1457d407c(void)

void FUN_1457d407c(void)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  DAT_14c867f00 = 0;
  if ((int)DAT_14c867f04 < 0) {
    FUN_1402191ca(&DAT_14c867ef8,0);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  uVar7 = DAT_14c867e60 - DAT_14c867e8c;
  if (uVar7 != 0) {
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar7);
    }
    FUN_144732142(&local_98,uVar7);
    iVar5 = 1;
    if (3 < uVar7) {
      uVar7 = (uVar7 | 1) + 0xe;
      iVar5 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      iVar5 = 1 << ((byte)iVar5 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar5)) {
      local_50 = iVar5;
      FUN_144869b4a();
    }
  }
  iVar5 = DAT_14c867e60 - DAT_14c867e8c;
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if ((int)DAT_14c867f04 < iVar5) {
    FUN_1402191ca(&DAT_14c867ef8);
  }
  local_b8 = 0x100000000;
  local_b0 = &DAT_14c867e68;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  if (DAT_14c867e80 != 0) {
    FUN_1449c0562(&local_b8);
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = &DAT_14c867e58;
  if (iStack_a4 < *(int *)(local_b0 + 0x18)) {
    do {
      uVar7 = DAT_14c867f00;
      lVar1 = *local_e0;
      lVar3 = (longlong)iStack_c4;
      if ((int)uStack_90 != local_64) {
        lVar8 = *(longlong *)(lVar1 + lVar3 * 0xa0);
        uVar2 = (uint)((ulonglong)lVar8 >> 0x10);
        uVar6 = (uint)lVar8 & 0xffff;
        puVar4 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar4 = local_60;
        }
        for (iVar5 = *(int *)(puVar4 + (ulonglong)
                                       (local_50 - 1U &
                                       (int)((ulonglong)lVar8 >> 0x20) +
                                       ((uint)lVar8 << 0x10 | uVar6) +
                                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
            iVar5 != -1; iVar5 = *(int *)((longlong)iVar5 * 0x10 + local_98 + 8)) {
          if (*(longlong *)(local_98 + (longlong)iVar5 * 0x10) == lVar8) goto LAB_1457d42ec;
        }
      }
      lVar8 = (longlong)(int)DAT_14c867f00;
      DAT_14c867f00 = DAT_14c867f00 + 1;
      if (DAT_14c867f04 < DAT_14c867f00) {
        FUN_1446f84a2(&DAT_14c867ef8,uVar7);
      }
      *(undefined8 *)(DAT_14c867ef8 + lVar8 * 8) = *(undefined8 *)(lVar1 + lVar3 * 0xa0);
      FUN_144a13f80(&local_98,&local_b8,(longlong)iStack_c4 * 0xa0 + *local_e0,0);
LAB_1457d42ec:
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (iStack_c4 < *(int *)(local_d0 + 0x18));
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(&local_98);
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d43c2 FUN_1457d43c2 body=21 status=ok
// SIG undefined FUN_1457d43c2(void)

undefined8 FUN_1457d43c2(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1457d43e4 FUN_1457d43e4 body=177 status=ok
// SIG undefined FUN_1457d43e4(void)

longlong * FUN_1457d43e4(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_68 [40];
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((char)param_1[4] == '\x12') {
    *param_2 = *param_1;
  }
  else {
    FUN_1400b56fe(local_40,param_1,0x12);
    pppuVar2 = (undefined8 ***)local_40[0];
    if (local_20 == 0) {
      pppuVar2 = DAT_14c9ab1a8;
    }
    *param_2 = (longlong)pppuVar2;
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppuVar2 = local_40;
      if (0x18 < local_28) {
        pppuVar2 = (undefined8 ***)local_40[0];
      }
      (*pcVar1)(pppuVar2);
    }
    if (0x18 < local_28) {
      FUN_1400020a8(local_40[0]);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d4496 FUN_1457d4496 body=652 status=ok
// SIG undefined FUN_1457d4496(void)

void FUN_1457d4496(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *_Dst;
  undefined **ppuVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 == 0) {
LAB_1457d466a:
    lVar7 = 0;
  }
  else {
    lVar4 = FUN_1406f6176();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (lVar7 = param_3,
       *(longlong *)
        (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
       != lVar4 + 0x30)) goto LAB_1457d466a;
  }
  FUN_14485c47a(param_1 + 0x168,lVar7);
  _Dst = (undefined8 *)FUN_14001cc68(0x230);
  memset(_Dst,0,0x230);
  FUN_1457d4c0a(_Dst);
  ppuVar5 = &PTR_FUN_14b97d710;
  *_Dst = &PTR_FUN_14b97d710;
  _Dst[0x44] = 0;
  *(undefined4 *)(_Dst + 0x45) = 0;
  puVar3 = *(undefined8 **)(param_1 + 0xe0);
  *(undefined8 **)(param_1 + 0xe0) = _Dst;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
    _Dst = *(undefined8 **)(param_1 + 0xe0);
    ppuVar5 = (undefined **)*_Dst;
  }
  (*(code *)ppuVar5[0x19])(_Dst,param_2,param_3);
  plVar6 = (longlong *)FUN_14001cc68(0x1c8,0x10);
  FUN_1457d49d4(plVar6);
  plVar8 = plVar6 + 2;
  local_48 = plVar8;
  local_40 = plVar6;
  FUN_1457d484c(&local_48,plVar8);
  if (plVar6 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xe8) = 0x10;
    plVar8 = *(longlong **)(param_1 + 0xf0);
    if (plVar8 == (longlong *)0x0) goto LAB_1457d45d9;
    *(undefined8 *)(param_1 + 0xf0) = 0;
LAB_1457d46b3:
    LOCK();
    plVar6 = plVar8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_1457d45d9;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar6 = plVar8;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0xe8) = plVar8;
    plVar8 = *(longlong **)(param_1 + 0xf0);
    if (plVar6 != plVar8) {
      *(longlong **)(param_1 + 0xf0) = plVar6;
      if (plVar8 == (longlong *)0x0) goto LAB_1457d45d9;
      goto LAB_1457d46b3;
    }
    LOCK();
    plVar8 = plVar6 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 != 0) goto LAB_1457d45d9;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
LAB_1457d45d9:
  plVar8 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_40 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0xe8) + 8))(*(longlong **)(param_1 + 0xe8),param_2,param_3)
  ;
  if (param_2 != 0) {
    lVar4 = FUN_1403ca142();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
         ) == lVar4 + 0x30)) {
      FUN_1457d4b24(param_2 + 0x680,&local_48,param_1);
    }
  }
  FUN_1457d52dc(param_1,param_2,param_3);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d4724 FUN_1457d4724 body=26 status=ok
// SIG undefined FUN_1457d4724(void)

void FUN_1457d4724(undefined8 param_1)

{
  FUN_1457d47ae();
  FUN_1457d4ec8(param_1);
  return;
}



// FUNCTION 1457d473e FUN_1457d473e body=110 status=ok
// SIG undefined FUN_1457d473e(void)

void FUN_1457d473e(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14485c47a(param_1 + 0x50);
  FUN_14485c47a(param_1 + 0x58,param_3);
  if (param_2 != 0) {
    FUN_1457d48ee(param_2 + 0x2a8,local_28,param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d47ae FUN_1457d47ae body=157 status=ok
// SIG undefined FUN_1457d47ae(void)

void FUN_1457d47ae(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14485c47a(param_1 + 0x18);
  FUN_14485c47a(param_1 + 0x20,param_3);
  if (param_2 != 0) {
    local_40 = &LAB_1458ca5b0;
    local_38 = 0;
    FUN_1457d4d1c(local_30,param_1);
    FUN_141285884(param_2 + 0x2a8,&local_40,local_30);
    FUN_1449db362(local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d484c FUN_1457d484c body=162 status=ok
// SIG undefined FUN_1457d484c(void)

void FUN_1457d484c(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1457d488b;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1457d488b;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1457d488b:
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
                    /* WARNING: Could not recover jumptable at 0x0001457d48ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1457d48ee FUN_1457d48ee body=228 status=ok
// SIG undefined FUN_1457d48ee(void)

undefined8 FUN_1457d48ee(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14b3e62a0;
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
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14b419830;
  local_38[3] = param_3;
  local_38[4] = &LAB_14581f696;
  FUN_141285884(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d49d4 FUN_1457d49d4 body=191 status=ok
// SIG undefined FUN_1457d49d4(void)

undefined8 * FUN_1457d49d4(undefined8 *param_1)

{
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14b97d830;
  memset(param_1 + 2,0,0x1b8);
  FUN_1457d4a94(param_1 + 2);
  param_1[2] = &PTR_FUN_14b97d850;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}



// FUNCTION 1457d4a94 FUN_1457d4a94 body=143 status=ok
// SIG undefined FUN_1457d4a94(void)

void FUN_1457d4a94(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b41df00;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  return;
}



// FUNCTION 1457d4b24 FUN_1457d4b24 body=228 status=ok
// SIG undefined FUN_1457d4b24(void)

undefined8 FUN_1457d4b24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_149e06450;
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
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14b97d8b0;
  local_38[3] = param_3;
  local_38[4] = FUN_1461c8782;
  FUN_140c6314c(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d4c0a FUN_1457d4c0a body=273 status=ok
// SIG undefined FUN_1457d4c0a(void)

undefined8 * FUN_1457d4c0a(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  param_1[6] = 2;
  *param_1 = &PTR_FUN_14b417c70;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 2;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  memset(param_1 + 0x20,0,0x99);
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ba) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c2) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x204) = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  return param_1;
}



// FUNCTION 1457d4d1c FUN_1457d4d1c body=428 status=ok
// SIG undefined FUN_1457d4d1c(void)

longlong * FUN_1457d4d1c(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1457d4dfc:
    *puVar5 = &PTR_LAB_14b3e62a0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b41afa0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1457d4dfc;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b3e62a0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b41afa0;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 1457d4ec8 FUN_1457d4ec8 body=703 status=ok
// SIG undefined FUN_1457d4ec8(void)

void FUN_1457d4ec8(longlong param_1)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_148 [40];
  longlong *local_120;
  undefined1 local_118 [8];
  longlong local_110;
  longlong local_108;
  int local_100;
  undefined1 local_f8 [4];
  undefined8 local_f4;
  undefined4 local_ec;
  undefined1 local_e8;
  undefined8 local_e4;
  undefined8 uStack_dc;
  undefined8 local_d4;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined2 local_67;
  undefined1 local_65;
  undefined4 local_64;
  longlong *local_60;
  undefined1 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  cVar2 = FUN_140f7e320();
  if ((cVar2 != '\0') && (*(int *)(param_1 + 0x170) <= *(int *)(param_1 + 0x19c))) {
    uVar3 = FUN_140d80c3e(param_1);
    lVar4 = FUN_140149a73(uVar3,0);
    if ((lVar4 != 0) && (plVar5 = (longlong *)FUN_140b75e6e(lVar4), plVar5 != (longlong *)0x0)) {
      lVar4 = *(longlong *)(param_1 + 8);
      plVar8 = *(longlong **)(param_1 + 0x10);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
        UNLOCK();
      }
      local_f8[0] = 0;
      local_f4 = 0;
      local_ec = 0;
      local_e8 = 0;
      local_e4 = 0;
      uStack_dc = 0;
      local_d4 = 0;
      local_c8 = 0xc69c4000;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0;
      local_67 = 1;
      local_65 = 0;
      local_64 = 0;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
        UNLOCK();
      }
      local_60 = (longlong *)0x0;
      local_58 = (undefined1 *)((ulonglong)local_58 & 0xffffffff00000000);
      FUN_1446efa72(&local_60,0,3,0x10);
      local_58 = (undefined1 *)CONCAT44(local_58._4_4_,3);
      *local_60 = (longlong)&PTR_LAB_14b3e6310;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar7 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar7 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar7;
      local_60[2] = lVar6;
      *local_60 = (longlong)&PTR_FUN_14b97d470;
      local_60[3] = param_1;
      local_60[4] = lVar4;
      local_60[5] = (longlong)plVar8;
      FUN_144a450dc((longlong)&uStack_dc + 4,&local_60);
      FUN_1449db362(&local_60);
      FUN_141208f3a(&local_108);
      lVar4 = local_108;
      if ((longlong)local_100 != 0) {
        lVar7 = 0;
        local_120 = plVar8;
        do {
          local_110 = *(longlong *)(lVar4 + lVar7);
          if (*(char *)(local_110 + 0x1e8) == '\x01') {
            (**(code **)(*plVar5 + 0x28))(plVar5,local_118,local_110 + 0x90,local_f8);
            local_60 = &local_110;
            local_58 = local_118;
            FUN_1457d5188(param_1 + 0x168,local_4c,&local_60);
          }
          lVar7 = lVar7 + 8;
          plVar8 = local_120;
        } while ((longlong)local_100 * 8 != lVar7);
      }
      if (local_108 != 0) {
        FUN_1400020a8(local_108);
      }
      FUN_1409838b8(local_f8);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457d5188 FUN_1457d5188 body=338 status=ok
// SIG undefined FUN_1457d5188(void)

undefined4 * FUN_1457d5188(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1412f9ffa(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar4 = *(ulonglong *)*param_3;
  *local_40 = uVar4;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  local_58 = 0;
  cVar2 = FUN_1412f9f62(param_1,uVar3,local_40);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0x14) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1412fa1e0(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d52dc FUN_1457d52dc body=937 status=ok
// SIG undefined FUN_1457d52dc(void)

void FUN_1457d52dc(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar6 = (longlong)param_1 + 0xa4;
  FUN_14485c47a(lVar6);
  FUN_14485c47a((longlong)param_1 + 0xac,param_3);
  if (param_1[0x1c] == 0) {
    plVar7 = (longlong *)FUN_14001cc68(0x220,0x10);
    FUN_1457d4c0a(plVar7);
    puVar3 = (undefined8 *)param_1[0x1c];
    param_1[0x1c] = (longlong)plVar7;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
      plVar7 = (longlong *)param_1[0x1c];
    }
    (**(code **)(*plVar7 + 200))(plVar7,param_2,param_3);
  }
  (**(code **)(*param_1 + 0xa8))(param_1,&DAT_14cb86b38);
  if ((param_2 != 0) && (cVar4 = FUN_1414229c6(param_2), cVar4 == '\0')) {
    (**(code **)(*param_1 + 0x38))(param_1,&local_48);
    plVar7 = local_40;
    if (local_40 == (longlong *)0x0) {
      param_1[0x1f] = (longlong)local_48;
      plVar8 = (longlong *)param_1[0x20];
      if (plVar8 != (longlong *)0x0) {
        param_1[0x20] = 0;
LAB_1457d557a:
        LOCK();
        plVar7 = plVar8 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
joined_r0x0001457d55b8:
          if (iVar2 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
      param_1[0x1f] = (longlong)local_48;
      plVar8 = (longlong *)param_1[0x20];
      if (local_40 == plVar8) {
        LOCK();
        plVar8 = local_40 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
          plVar8 = plVar7;
          goto joined_r0x0001457d55b8;
        }
      }
      else {
        param_1[0x20] = (longlong)local_40;
        if (plVar8 != (longlong *)0x0) goto LAB_1457d557a;
      }
    }
    plVar7 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_40 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    FUN_14485c47a(param_1[0x1f] + 0xa8,param_3);
    lVar5 = FUN_14479d2ce(lVar6);
    FUN_1457d5686(lVar5 + 0xc0,&local_48,param_1,FUN_14603bb7a);
    lVar6 = FUN_14479d2ce(lVar6);
    FUN_1457d5686(lVar6 + 0xd8,&local_48,param_1,FUN_14891ad16);
  }
  if (param_1[0x1d] != 0) goto LAB_1457d5424;
  plVar8 = (longlong *)FUN_14001cc68(0x128);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14b41ce00;
  plVar7 = plVar8 + 2;
  memset(plVar7,0,0x118);
  FUN_1457d4a94(plVar7);
  local_48 = plVar7;
  local_40 = plVar8;
  FUN_148920d78(&local_48,plVar7);
  if (plVar8 == (longlong *)0x0) {
    param_1[0x1d] = 0x10;
    plVar7 = (longlong *)param_1[0x1e];
    if (plVar7 != (longlong *)0x0) {
      param_1[0x1e] = 0;
LAB_1457d560b:
      LOCK();
      plVar8 = plVar7 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x0001457d563a:
        if (iVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    param_1[0x1d] = (longlong)plVar7;
    plVar7 = (longlong *)param_1[0x1e];
    if (plVar8 == plVar7) {
      LOCK();
      plVar7 = plVar8 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar7 = plVar8;
        goto joined_r0x0001457d563a;
      }
    }
    else {
      param_1[0x1e] = (longlong)plVar8;
      if (plVar7 != (longlong *)0x0) goto LAB_1457d560b;
    }
  }
  plVar7 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_40 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  (**(code **)(*(longlong *)param_1[0x1d] + 8))((longlong *)param_1[0x1d],param_2,param_3);
LAB_1457d5424:
  if (param_2 != 0) {
    FUN_1457d576c(param_2 + 0x60,&local_48,param_1);
    param_1[0x13] = (longlong)local_48;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d5686 FUN_1457d5686 body=228 status=ok
// SIG undefined FUN_1457d5686(void)

undefined8
FUN_1457d5686(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  local_38 = 3;
  *local_40 = &PTR_LAB_14b412d70;
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
  local_40[2] = lVar2;
  *local_40 = &PTR_FUN_14b41cd90;
  local_40[3] = param_3;
  local_40[4] = param_4;
  FUN_14127bc3c(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d576c FUN_1457d576c body=228 status=ok
// SIG undefined FUN_1457d576c(void)

undefined8 FUN_1457d576c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14b403f60;
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
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14b41ce20;
  local_38[3] = param_3;
  local_38[4] = &LAB_145a0a478;
  FUN_1457bc922(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d5852 FUN_1457d5852 body=261 status=ok
// SIG undefined FUN_1457d5852(void)

void FUN_1457d5852(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_1 + 0x160);
  if (plVar1 == (longlong *)0x0) {
    lVar3 = *param_2;
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_28);
    lVar3 = *param_2;
    if (lVar3 == local_28) goto LAB_1457d58bf;
  }
  if (lVar3 == DAT_14cb86b38) {
    puVar4 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    puVar4[1] = param_1;
    *puVar4 = &PTR_FUN_14b41cad0;
  }
  else {
    if (lVar3 != DAT_14cb86b40) goto LAB_1457d58bf;
    puVar4 = (undefined8 *)FUN_14001cc68(0x60,0x10);
    puVar4[1] = param_1;
    *puVar4 = &PTR_FUN_14b41cb00;
    puVar4[6] = 0;
    *(undefined4 *)(puVar4 + 7) = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *(undefined8 *)((longlong)puVar4 + 0x3c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar4 + 0x44) = 0;
    puVar4[10] = 0;
    *(undefined4 *)(puVar4 + 0xb) = 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x160);
  if ((puVar2 != puVar4) &&
     (*(undefined8 **)(param_1 + 0x160) = puVar4, puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,1);
  }
LAB_1457d58bf:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457d5958 FUN_1457d5958 body=77 status=ok
// SIG undefined FUN_1457d5958(void)

longlong FUN_1457d5958(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_14034cca6();
  FUN_1457d5a3a(param_1 + 0x38,param_2 + 0x38);
  lVar1 = *(longlong *)(param_2 + 0x188);
  *(longlong *)(param_1 + 0x188) = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 1457d59a6 FUN_1457d59a6 body=146 status=ok
// SIG undefined FUN_1457d59a6(void)

void FUN_1457d59a6(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong lVar4;
  
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
    uVar5 = FUN_144a3809e(lVar4 * 400,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0xa3d70a3d70a3d71),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,400,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457d5a3a FUN_1457d5a3a body=440 status=ok
// SIG undefined FUN_1457d5a3a(void)

undefined8 * FUN_1457d5a3a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte bVar4;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_141251d4e(param_1,iVar1,0);
    FUN_141251d11(*param_1,uVar2,iVar1);
  }
  param_1[2] = param_2[2];
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  uVar2 = *(undefined8 *)((longlong)param_2 + 0x2d);
  param_1[5] = param_2[5];
  *(undefined8 *)((longlong)param_1 + 0x2d) = uVar2;
  FUN_140f7ece8(param_1 + 7,param_2 + 7);
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  FUN_140f7ece8(param_1 + 0xc,param_2 + 0xc);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  FUN_14034cca6(param_1 + 0x11,param_2 + 0x11);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  FUN_14034cca6(param_1 + 0x19,param_2 + 0x19);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined1 *)((longlong)param_1 + 0x104) = *(undefined1 *)((longlong)param_2 + 0x104);
  param_1[0x21] = param_2[0x21];
  lVar3 = param_2[0x22];
  param_1[0x22] = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar4 = DAT_14c950c29;
  *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(param_2 + 0x23);
  param_1[0x24] = param_2[0x24];
  lVar3 = param_2[0x25];
  param_1[0x25] = lVar3;
  if ((lVar3 != 0 & bVar4) == 1) {
    FUN_1456cec3c();
  }
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_2 + 0x26);
  uVar2 = param_2[0x28];
  param_1[0x27] = param_2[0x27];
  param_1[0x28] = uVar2;
  *(undefined2 *)(param_1 + 0x29) = *(undefined2 *)(param_2 + 0x29);
  return param_1;
}



// FUNCTION 1457d5bf2 FUN_1457d5bf2 body=168 status=ok
// SIG undefined FUN_1457d5bf2(void)

void FUN_1457d5bf2(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  void *_Dst;
  longlong lVar2;
  int iVar3;
  
  plVar1 = (longlong *)(param_1 + 0x60);
  iVar3 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    _Dst = *(void **)(param_1 + 0x60);
    lVar2 = 0;
    do {
      if (*(longlong *)((longlong)_Dst + lVar2) == param_2) {
        lVar2 = (longlong)_Dst + lVar2;
        goto LAB_1457d5c29;
      }
      lVar2 = lVar2 + 0x10;
    } while ((longlong)iVar3 << 4 != lVar2);
    if (9 < iVar3) {
      memmove(_Dst,(void *)((longlong)_Dst + 0x10),(ulonglong)(iVar3 - 1) << 4);
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
      FUN_1489ac366(plVar1);
      iVar3 = *(int *)(param_1 + 0x68);
    }
  }
  *(uint *)(param_1 + 0x68) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x6c) < iVar3 + 1U) {
    FUN_146562856(plVar1,iVar3);
  }
  lVar2 = *plVar1 + (longlong)iVar3 * 0x10;
  *(longlong *)(*plVar1 + (longlong)iVar3 * 0x10) = param_2;
LAB_1457d5c29:
  *(undefined4 *)(lVar2 + 8) = param_3;
  return;
}



// FUNCTION 1457d5c9a FUN_1457d5c9a body=93 status=ok
// SIG undefined FUN_1457d5c9a(void)

void FUN_1457d5c9a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x0001457d5cf3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001457d5cd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 1457d5cf8 FUN_1457d5cf8 body=139 status=ok
// SIG undefined FUN_1457d5cf8(void)

void FUN_1457d5cf8(longlong param_1)

{
  float fVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(int *)(param_1 + 0x168) == 0) && (*(char *)(param_1 + 0x108) == '\x01')) {
    lVar3 = FUN_140f7f1be(param_1);
    lVar4 = FUN_140f7f142(param_1);
    if ((lVar3 != 0) && (lVar4 != 0)) {
      dVar2 = *(double *)(lVar4 + 0x6d0);
      fVar1 = *(float *)(param_1 + 400);
      lVar4 = FUN_140fcbb85();
      if ((double)*(float *)(lVar4 + 0x58) <= dVar2 - (double)fVar1) {
        FUN_146176ad6(param_1,lVar3 + 0x68);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1457d5d83 FUN_1457d5d83 body=52 status=ok
// SIG undefined FUN_1457d5d83(void)

undefined8 * FUN_1457d5d83(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  pvVar1 = cohtml::Property::operator_new(0x90);
  FUN_140f7fee4(pvVar1,param_2);
  *param_1 = pvVar1;
  return param_1;
}



// FUNCTION 1457d5db8 FUN_1457d5db8 body=132 status=ok
// SIG undefined FUN_1457d5db8(void)

void FUN_1457d5db8(longlong param_1,int param_2)

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



// FUNCTION 1457d5e3c FUN_1457d5e3c body=258 status=ok
// SIG undefined FUN_1457d5e3c(void)

undefined8 *
FUN_1457d5e3c(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  *(undefined2 *)(param_2 + 3) = 0;
  *(undefined1 *)(param_2 + 4) = 0;
  if ((byte)(*(char *)(param_1 + 8) - 0xfU) < 0xfe) {
    lVar3 = FUN_1457d5f3e();
    if (lVar3 != 0) {
      uVar1 = *(undefined4 *)(lVar3 + 4);
      if (*(byte *)(param_2 + 4) == 3) {
        *(undefined4 *)param_2 = uVar1;
      }
      else {
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                           (ulonglong)((uint)*(byte *)(param_2 + 4) * 0x120));
        if (pcVar2 != (code *)0x0) {
          puVar4 = param_2;
          if (0x18 < *(ushort *)(param_2 + 3)) {
            puVar4 = (undefined8 *)*param_2;
          }
          (*pcVar2)(puVar4);
        }
        if (0x18 < *(ushort *)(param_2 + 3)) {
          FUN_1400020a8(*param_2);
        }
        *(undefined2 *)(param_2 + 3) = 4;
        *(undefined4 *)param_2 = uVar1;
        *(undefined1 *)(param_2 + 4) = 3;
      }
    }
  }
  else {
    lVar3 = FUN_14885b260(param_1,param_4);
    if (lVar3 != 0) {
      uVar1 = *(undefined4 *)(lVar3 + 4);
      if (*(byte *)(param_2 + 4) == 2) {
        *(undefined4 *)param_2 = uVar1;
      }
      else {
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                           (ulonglong)((uint)*(byte *)(param_2 + 4) * 0x120));
        if (pcVar2 != (code *)0x0) {
          puVar4 = param_2;
          if (0x18 < *(ushort *)(param_2 + 3)) {
            puVar4 = (undefined8 *)*param_2;
          }
          (*pcVar2)(puVar4);
        }
        if (0x18 < *(ushort *)(param_2 + 3)) {
          FUN_1400020a8(*param_2);
        }
        *(undefined2 *)(param_2 + 3) = 4;
        *(undefined4 *)param_2 = uVar1;
        *(undefined1 *)(param_2 + 4) = 2;
      }
    }
  }
  return param_2;
}



// FUNCTION 1457d5f3e FUN_1457d5f3e body=491 status=ok
// SIG undefined FUN_1457d5f3e(void)

longlong FUN_1457d5f3e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140f83604(param_2,&local_30);
  if (local_30 == 0) {
    uVar8 = FUN_1447262c2(param_2);
    uVar9 = FUN_140414d56(param_1 + 0x10);
    FUN_140414de2(&local_40,uVar9,uVar8);
    plVar1 = local_28;
    if (local_38 == (longlong *)0x0) {
LAB_1457d5fa6:
      plVar10 = (longlong *)0x0;
    }
    else {
      iVar7 = (int)local_38[1];
      do {
        if (iVar7 == 0) goto LAB_1457d5fa6;
        LOCK();
        iVar5 = (int)local_38[1];
        bVar12 = iVar7 == iVar5;
        if (bVar12) {
          *(int *)(local_38 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
        plVar10 = local_38;
      } while (!bVar12);
    }
    local_30 = 0;
    if (plVar10 != (longlong *)0x0) {
      local_30 = local_40;
    }
    if (plVar10 == local_28) {
      plVar6 = local_28;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar10 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar7 = *piVar2;
          UNLOCK();
joined_r0x0001457d60d2:
          plVar6 = local_28;
          if (iVar7 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
            plVar6 = local_28;
          }
        }
      }
    }
    else {
      plVar6 = plVar10;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_28 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          puVar4 = (undefined8 *)*local_28;
          local_28 = plVar10;
          (*(code *)*puVar4)(plVar1);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar7 = *piVar2;
          UNLOCK();
          plVar10 = plVar1;
          goto joined_r0x0001457d60d2;
        }
      }
    }
    local_28 = plVar6;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
    }
    if (local_30 != 0) goto LAB_1457d6052;
switchD_1457d606b_default:
    lVar11 = 0;
  }
  else {
LAB_1457d6052:
    switch(*(undefined1 *)(param_1 + 8)) {
    case 1:
      lVar11 = local_30 + 0x20;
      break;
    case 2:
      lVar11 = local_30 + 0x2c;
      break;
    case 3:
      lVar11 = local_30 + 0x38;
      break;
    case 4:
      lVar11 = local_30 + 0x50;
      break;
    case 5:
      lVar11 = local_30 + 0x5c;
      break;
    case 6:
      lVar11 = local_30 + 0x68;
      break;
    case 7:
      lVar11 = local_30 + 0x74;
      break;
    case 8:
      lVar11 = local_30 + 0x80;
      break;
    case 9:
      lVar11 = local_30 + 0x8c;
      break;
    case 10:
      lVar11 = local_30 + 0x98;
      break;
    case 0xb:
      lVar11 = local_30 + 0xa4;
      break;
    case 0xc:
      lVar11 = local_30 + 0xbc;
      break;
    default:
      goto switchD_1457d606b_default;
    }
  }
  plVar1 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_28 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d6138 FUN_1457d6138 body=287 status=ok
// SIG undefined FUN_1457d6138(void)

void FUN_1457d6138(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_b8 [40];
  longlong local_90;
  longlong *local_88;
  code *local_80;
  longlong *local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14101835a(param_1 + 0xcf8,param_1);
  local_70 = param_1 + 0x16f0;
  local_68 = DAT_14c8464e0;
  uStack_60 = DAT_14c8464e8;
  local_58 = DAT_14c8464f0;
  local_50 = *(undefined4 *)(param_1 + 0x18c4);
  local_4c = 0;
  local_44 = 0x1000000000000;
  local_28 = DAT_14c8464f0;
  local_38 = DAT_14c8464e0;
  uStack_30 = DAT_14c8464e8;
  local_20 = 0;
  uStack_18 = 0;
  plVar1 = *(longlong **)(param_1 + 0x118);
  local_48 = local_50;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x7b8))(plVar1,0,1,0xffffffff);
    if (lVar2 != 0) {
      local_78 = &local_90;
      local_88 = &local_70;
      local_80 = FUN_144347934;
      local_90 = param_1;
      FUN_144966906(lVar2 + 0x138);
      if (local_20 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d6258 FUN_1457d6258 body=294 status=ok
// SIG undefined FUN_1457d6258(void)

void FUN_1457d6258(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 uStack_54;
  undefined1 local_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uStack_58 = 0;
  uStack_54 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  local_4c = 0xff;
  FUN_140f8606e(param_1 + 0x1420,&local_68);
  cVar1 = FUN_14486ea84(&local_68);
  if (cVar1 != '\0') {
    lVar2 = *(longlong *)(param_1 + 0x1710);
    uVar4 = 0;
    fVar5 = 0.0;
    if (lVar2 != 0) {
      lVar2 = (**(code **)(*(longlong *)(lVar2 + 0x3c20) + 0x28))(lVar2 + 0x3c20);
      fVar5 = 0.0;
      if ((lVar2 != 0) && (fVar5 = *(float *)(lVar2 + 0xdc), *(int *)(lVar2 + 0xf4) != 0)) {
        fVar3 = (float)FUN_140f8608e(param_1 + 0x1420);
        fVar5 = fVar5 * fVar3;
      }
    }
    lVar2 = FUN_14008e0ae(&local_68);
    *(float *)(lVar2 + 0x70) = fVar5;
    FUN_14020a6cc(lVar2 + 0x68,1);
    lVar2 = *(longlong *)(param_1 + 0x1710);
    if (lVar2 != 0) {
      lVar2 = (**(code **)(*(longlong *)(lVar2 + 0x3c20) + 0x28))(lVar2 + 0x3c20);
      if (lVar2 != 0) {
        uVar4 = *(undefined4 *)(lVar2 + 0xe8);
      }
    }
    lVar2 = FUN_14008e0ae(&local_68);
    *(undefined4 *)(lVar2 + 0x7c) = uVar4;
    FUN_14020a6cc(lVar2 + 0x74,1);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d6380 FUN_1457d6380 body=132 status=ok
// SIG undefined FUN_1457d6380(void)

void FUN_1457d6380(void)

{
  undefined2 *puVar1;
  undefined1 auStack_38 [32];
  undefined2 *local_18;
  int local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1400b22c2(&local_18,"ThrowGrenade");
  if (((DAT_14cc2d220 == '\x01') && ((DAT_14cc2d201 & 1) != 0)) && (DAT_14cc2d221 == '\x01')) {
    puVar1 = local_18;
    if (local_10 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    (*DAT_14cc2d210)(puVar1);
  }
  if (local_18 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457d6410 FUN_1457d6410 body=144 status=ok
// SIG undefined FUN_1457d6410(void)

undefined8 * FUN_1457d6410(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_140f8b11c();
  *param_1 = &PTR_FUN_14ad7b050;
  param_1[7] = 1;
  *(undefined1 *)(param_1 + 8) = 0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14ad7f420;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x80;
  *(undefined4 *)(puVar2 + 8) = 0xffffffff;
  puVar1 = (undefined8 *)param_1[5];
  if ((puVar1 != puVar2) && (param_1[5] = puVar2, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return param_1;
}



// FUNCTION 1457d64a2 FUN_1457d64a2 body=450 status=ok
// SIG undefined FUN_1457d64a2(void)

longlong * FUN_1457d64a2(int param_1,int param_2,undefined1 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  undefined1 auStack_78 [32];
  uint local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = (longlong *)0x0;
  if ((0 < param_1) && (0 < param_2)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
      uVar1 = FUN_14118da1c();
      DAT_14c8442b8 = FUN_14054d46e(uVar1,L"nullrhi");
      _Init_thread_footer(&DAT_14c8442bc);
    }
    if (DAT_14c872bf0 == '\x01') {
      plVar2 = (longlong *)0x0;
      if ((DAT_14c872bf1 != '\x01') || ((DAT_14c8442b8 & 1) != 0)) goto LAB_1457d65db;
    }
    else if (DAT_14c8442b8 != 0) {
      plVar2 = (longlong *)0x0;
      goto LAB_1457d65db;
    }
    FUN_140002266(&local_38,L"GbxSceneViewer_%s",L"Shared");
    puVar3 = local_38;
    if (local_30 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_48,puVar3,1);
    uVar1 = FUN_144a805b8();
    local_58 = 0;
    FUN_140af9fb2(&local_40,DAT_14c951640,uVar1,local_48);
    local_50 = 0;
    local_58 = local_58 & 0xffffff00;
    plVar2 = (longlong *)FUN_1458f5bea(DAT_14c951640,local_40,0,0);
    *(undefined1 *)((longlong)plVar2 + 0x15b) = param_3;
    *(int *)(plVar2 + 0x28) = param_1;
    *(int *)((longlong)plVar2 + 0x144) = param_2;
    (**(code **)(*plVar2 + 0x318))(plVar2);
    FUN_140768b6e(plVar2,1);
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1457d65db:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2;
}



// FUNCTION 1457d6666 FUN_1457d6666 body=40 status=ok
// SIG undefined FUN_1457d6666(void)

undefined8 FUN_1457d6666(undefined8 param_1,int param_2)

{
  FUN_140f8ccfc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457d668e FUN_1457d668e body=24 status=ok
// SIG undefined FUN_1457d668e(void)

bool FUN_1457d668e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1457d66a6 FUN_1457d66a6 body=138 status=ok
// SIG undefined FUN_1457d66a6(void)

void FUN_1457d66a6(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)((longlong)param_2 * 0x40 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1457d673a FUN_1457d673a body=33 status=ok
// SIG undefined FUN_1457d673a(void)

undefined8
FUN_1457d673a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  FUN_1408383eb(param_2,param_1);
  *param_4 = 1;
  return 1;
}



// FUNCTION 1457d675c FUN_1457d675c body=12 status=ok
// SIG undefined FUN_1457d675c(void)

void FUN_1457d675c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001457d6765. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1457d6768 FUN_1457d6768 body=31 status=ok
// SIG undefined FUN_1457d6768(void)

undefined8 FUN_1457d6768(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457d67b4 FUN_1457d67b4 body=41 status=ok
// SIG undefined FUN_1457d67b4(void)

void FUN_1457d67b4(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1446e7478(param_2,param_1,uVar1,0);
  return;
}



// FUNCTION 1457d67de FUN_1457d67de body=147 status=ok
// SIG undefined FUN_1457d67de(void)

void FUN_1457d67de(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 2) {
      uVar5 = 1;
    }
    else {
      if (*(uint *)(param_1 + 0x24) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x18,0);
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
        uVar5 = uVar4 / 0x18 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x24) = (int)uVar5;
    FUN_1457d6872(param_1,param_2,uVar5,0x18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457d6872 FUN_1457d6872 body=141 status=ok
// SIG undefined FUN_1457d6872(void)

void FUN_1457d6872(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x18);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x18,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x18),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x18,param_2,param_3,param_4);
  return;
}



// FUNCTION 1457d6900 FUN_1457d6900 body=132 status=ok
// SIG undefined FUN_1457d6900(void)

void FUN_1457d6900(longlong param_1,int param_2)

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



// FUNCTION 1457d6986 FUN_1457d6986 body=9 status=ok
// SIG undefined FUN_1457d6986(void)

undefined4 FUN_1457d6986(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xdc);
}



// FUNCTION 1457d6990 FUN_1457d6990 body=47 status=ok
// SIG undefined FUN_1457d6990(void)

void FUN_1457d6990(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cb63b70);
                    /* WARNING: Could not recover jumptable at 0x0001457d69bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 1457d69c0 FUN_1457d69c0 body=48 status=ok
// SIG undefined FUN_1457d69c0(void)

void FUN_1457d69c0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1457d69f0 FUN_1457d69f0 body=186 status=ok
// SIG undefined FUN_1457d69f0(void)

void FUN_1457d69f0(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  uint *puVar2;
  undefined1 auStack_78 [40];
  undefined *local_50;
  uint *local_48;
  undefined1 local_3c [4];
  uint local_38;
  undefined4 uStack_34;
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *(uint *)(param_1 + 0x88) >> 6 & 1;
  puVar2 = &local_38;
  local_20 = 4;
  local_18 = 2;
  local_50 = &DAT_14cb8ae28;
  local_48 = puVar2;
  FUN_140881f5a(param_2,local_3c,&local_50,0);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_18 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_20) {
      puVar2 = (uint *)CONCAT44(uStack_34,local_38);
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < local_20) {
    FUN_1400020a8(CONCAT44(uStack_34,local_38));
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d6aac FUN_1457d6aac body=11 status=ok
// SIG undefined FUN_1457d6aac(void)

void FUN_1457d6aac(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001457d6ab3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 1457d6ab8 FUN_1457d6ab8 body=29 status=ok
// SIG undefined FUN_1457d6ab8(void)

void FUN_1457d6ab8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = FDefaultModuleImpl::vftable;
  return;
}



// FUNCTION 1457d6ad6 FUN_1457d6ad6 body=261 status=ok
// SIG undefined FUN_1457d6ad6(void)

void FUN_1457d6ad6(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_2b8 [32];
  longlong local_298;
  undefined1 local_290 [312];
  longlong local_158 [39];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  plVar1 = param_1 + 0xd;
  local_298 = param_2;
  FUN_14485c47a(plVar1);
  cVar2 = FUN_144729dda(plVar1);
  if (cVar2 != '\0') {
    lVar3 = FUN_14479d2ce(plVar1);
    if ((lVar3 != 0) && (*(char *)(lVar3 + 0x178) == '\x03')) {
      FUN_1413dbc9a(local_158);
      FUN_140f9916c(param_1,local_290,0);
      FUN_140f991ea(local_158,local_290);
      FUN_1449daebe(local_290);
      (**(code **)(local_158[0] + 0x150))(local_158,&local_298);
      (**(code **)(*param_1 + 0x308))(param_1,local_290,local_158,0);
      FUN_1449daebe(local_158);
      goto LAB_1457d6bad;
    }
  }
  if (param_2 != 0) {
    if ((param_1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_1);
    }
    *(longlong **)(param_2 + 0x2578) = param_1;
  }
LAB_1457d6bad:
  if ((local_20 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d6bdc FUN_1457d6bdc body=40 status=ok
// SIG undefined FUN_1457d6bdc(void)

undefined8 FUN_1457d6bdc(undefined8 param_1,int param_2)

{
  FUN_1457d6c04();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457d6c04 FUN_1457d6c04 body=115 status=ok
// SIG undefined FUN_1457d6c04(void)

void FUN_1457d6c04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a74b350;
  param_1[5] = &PTR_FUN_14a74b930;
  param_1[6] = &PTR_LAB_14a74b970;
  FUN_144a76fd2(param_1 + 0x98);
  FUN_144a76fd2(param_1 + 0x97);
  if (param_1[0x80] != 0) {
    FUN_147a1868a();
  }
  if (param_1[0x6a] != 0) {
    FUN_147a1868a();
  }
  thunk_FUN_14006e79a(param_1);
  return;
}



// FUNCTION 1457d6c78 FUN_1457d6c78 body=616 status=ok
// SIG undefined FUN_1457d6c78(void)

void FUN_1457d6c78(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined1 auStack_68 [32];
  LARGE_INTEGER local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146245af8();
  FUN_1457d6f56(param_1);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 == 0) goto LAB_1457d6da2;
  *(undefined4 *)(param_1 + 0x300) = 0;
  FUN_140f9a344(param_1,lVar1);
  FUN_1457d700e(param_1,lVar1);
  FUN_1457d740c(param_1,lVar1);
  FUN_140f99478(param_1);
  QueryPerformanceCounter(&local_48);
  *(double *)(param_1 + 0x2f8) = (double)local_48.QuadPart * DAT_14c83f420 + 16777216.0;
  if ((*(char *)(param_1 + 800) != '\0') || (*(int *)(param_1 + 0x324) == 0)) {
    *(undefined1 *)(param_1 + 800) = 0;
  }
  *(undefined4 *)(param_1 + 0x324) = 0;
  FUN_140f9c09a(param_1);
  FUN_1457d6ee2(param_1);
  plVar4 = (longlong *)FUN_140f9a2c8(param_1);
  lVar1 = *plVar4;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0xa0));
  *(int *)(lVar1 + 0x98) = *(int *)(lVar1 + 0x98) + 1;
  lVar5 = FUN_14479d2ce(param_1 + 0x30);
  cVar3 = FUN_140426394(lVar5 + 0x3c0,&DAT_14cbd9378);
  if (*(char *)(lVar1 + 0x10) == cVar3) {
    if (*(int *)(lVar1 + 0x14) == 0) {
      iVar7 = 1;
      goto LAB_1457d6ed6;
    }
  }
  else {
    iVar7 = *(int *)(lVar1 + 0x14) + 1;
LAB_1457d6ed6:
    *(char *)(lVar1 + 0x10) = cVar3;
    *(int *)(lVar1 + 0x14) = iVar7;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0xa0));
LAB_1457d6da2:
  puVar6 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *puVar6 = &PTR_FUN_14b9c7210;
  FUN_1446ddc76(&local_48,"SetVisible",1);
  FUN_14039176c(puVar6,uVar2,local_48.QuadPart,1);
  *puVar6 = &PTR_FUN_14b9c7210;
  *(undefined1 *)(puVar6 + 7) = 0;
  *(undefined4 *)((longlong)puVar6 + 0x3c) = 0;
  FUN_140391314(param_1,puVar6);
  puVar6 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *puVar6 = &PTR_FUN_14b9c7210;
  FUN_1446ddc76(&local_48,"SetVisible",1);
  FUN_14039176c(puVar6,uVar2,local_48.QuadPart,1);
  *puVar6 = &PTR_FUN_14b9c7210;
  *(undefined1 *)(puVar6 + 7) = 0;
  *(undefined4 *)((longlong)puVar6 + 0x3c) = 1;
  FUN_140391314(param_1,puVar6);
  FUN_1457d70f8(param_1);
  puVar6 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  puVar6[1] = 0;
  *(undefined4 *)(puVar6 + 2) = 0;
  puVar6[3] = 0;
  *puVar6 = &PTR_FUN_14b9d13b8;
  FUN_140391314(param_1,puVar6);
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d6ee2 FUN_1457d6ee2 body=115 status=ok
// SIG undefined FUN_1457d6ee2(void)

void FUN_1457d6ee2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 == 0) {
    return;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x30);
  cVar3 = FUN_140426394(lVar2 + 0x3c0,&DAT_14cbd9378);
  if (cVar3 == '\0') {
    FUN_140afad18(param_1,&DAT_14cbe2310);
    if (*(int *)(lVar1 + 200) < 2) {
      return;
    }
    puVar4 = &DAT_14cbe2320;
  }
  else {
    puVar4 = &DAT_14cbe2350;
  }
  FUN_140afad18(param_1,puVar4);
  return;
}



// FUNCTION 1457d6f56 FUN_1457d6f56 body=183 status=ok
// SIG undefined FUN_1457d6f56(void)

void FUN_1457d6f56(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  PSRWLOCK SRWLock;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1448d5e3c(&local_38,param_1 + 0x208);
  lVar3 = *(longlong *)(local_38 + 0x2c0);
  SRWLock = (PSRWLOCK)(lVar3 + 0x168);
  AcquireSRWLockShared(SRWLock);
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
  FUN_145e28436(param_1 + 0x2d0,lVar3);
  *(undefined4 *)(param_1 + 0x2cc) = *(undefined4 *)(param_1 + 0x2d0);
  ReleaseSRWLockShared(SRWLock);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d700e FUN_1457d700e body=233 status=ok
// SIG undefined FUN_1457d700e(void)

void FUN_1457d700e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1448d5e3c(&local_38,param_1 + 0x208);
  puVar3 = *(undefined4 **)(local_38 + 0x60);
  AcquireSRWLockShared((PSRWLOCK)(puVar3 + 0x2c));
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
  if (*(int *)(param_2 + 0xc0) != puVar3[0x20]) {
    FUN_144a787a6(param_2 + 0xb0,puVar3 + 0x1c);
    *(undefined4 *)(param_2 + 0xc0) = puVar3[0x20];
  }
  if (*(int *)(param_2 + 0xcc) != puVar3[1]) {
    *(undefined4 *)(param_2 + 200) = *puVar3;
    *(undefined4 *)(param_2 + 0xcc) = puVar3[1];
  }
  ReleaseSRWLockShared((PSRWLOCK)(puVar3 + 0x2c));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d70f8 FUN_1457d70f8 body=363 status=ok
// SIG undefined FUN_1457d70f8(void)

void FUN_1457d70f8(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined2 local_b0 [2];
  undefined4 local_ac;
  code *local_a8;
  undefined4 local_a0;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar4 = (longlong *)FUN_14479d2ce(param_1 + 0x30);
  if (plVar4 != (longlong *)0x0) {
    lVar5 = (**(code **)(*plVar4 + 0x180))(plVar4);
    if (lVar5 != 0) {
      local_c0 = 0;
      local_b8 = 0;
      local_a8 = FUN_146248bea;
      local_a0 = 0;
      FUN_1457d7264(&local_c0,param_1);
      if (*(longlong *)(lVar5 + 0x1f0) == 0) {
        puVar6 = (undefined8 *)(lVar5 + 0x458);
      }
      else {
        puVar6 = (undefined8 *)(*(longlong *)(lVar5 + 0x1f0) + 0xf0);
      }
      uVar3 = *puVar6;
      lVar5 = thunk_FUN_1402735c8();
      uVar1 = *(undefined4 *)(lVar5 + 0x514);
      lVar5 = thunk_FUN_1402735c8();
      uVar2 = *(undefined4 *)(lVar5 + 0x510);
      local_a8 = (code *)0x0;
      local_a0 = 0;
      FUN_14487d8d8(&local_a8,&local_c0);
      local_68 = 1;
      local_c8 = local_b0;
      local_b0[0] = 1;
      local_ac = uVar1;
      FUN_1406f4044(uVar3,param_1 + 0x308,&local_a8,uVar2);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
      FUN_1449db362(&local_c0);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d7264 FUN_1457d7264 body=423 status=ok
// SIG undefined FUN_1457d7264(void)

void FUN_1457d7264(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1457d733a:
    *puVar5 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9d3740;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1457d733a;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9d3740;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
                    /* WARNING: Could not recover jumptable at 0x0001457d73f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1457d740c FUN_1457d740c body=636 status=ok
// SIG undefined FUN_1457d740c(void)

void FUN_1457d740c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  PSRWLOCK SRWLock;
  undefined8 *puVar2;
  longlong *plVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  void *_Src;
  longlong lVar7;
  longlong lVar8;
  ushort uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ushort uVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1448d5e3c(&local_58,param_1 + 0x208);
  lVar6 = *(longlong *)(local_58 + 0x1f0);
  AcquireSRWLockShared((PSRWLOCK)(lVar6 + 0x1478));
  plVar3 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar4 = (int *)((longlong)plVar3 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_1448d5e3c(&local_58,param_1 + 0x208);
  lVar8 = *(longlong *)(local_58 + 0x1b0);
  SRWLock = (PSRWLOCK)(lVar8 + 0x1c0);
  AcquireSRWLockShared(SRWLock);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_50 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar4 = (int *)((longlong)local_50 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  puVar2 = (undefined8 *)(param_2 + 0x310);
  iVar14 = *(int *)(param_2 + 0xb8);
  _Src = *(void **)(param_2 + 0xb0);
  *(int *)(param_2 + 0x318) = iVar14;
  if (iVar14 == 0 && *(int *)(param_2 + 0x31c) == 0) {
    *(undefined4 *)(param_2 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(puVar2,iVar14);
    if (iVar14 != 0) {
      memcpy((void *)*puVar2,_Src,(longlong)iVar14 * 2);
    }
  }
  if (*(int *)(lVar6 + 0x1450) < 1) {
LAB_1457d75f0:
    ReleaseSRWLockShared(SRWLock);
    ReleaseSRWLockShared((PSRWLOCK)(lVar6 + 0x1478));
    if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  iVar14 = 0;
LAB_1457d751f:
  lVar7 = FUN_140f99464(lVar6,iVar14);
  if (lVar7 != 0) {
    iVar5 = *(int *)(lVar7 + 0x38);
    if (iVar5 == DAT_14cbe2130) {
      if (1 < iVar5) {
        lVar11 = 0;
        do {
          uVar9 = *(ushort *)(*(longlong *)(lVar7 + 0x30) + lVar11);
          uVar10 = (ulonglong)uVar9;
          uVar12 = *(ushort *)(DAT_14cbe2128 + lVar11);
          if (uVar9 == uVar12) {
            if (uVar9 == 0) break;
          }
          else {
            if (0x7f < (uVar12 | uVar9)) goto LAB_1457d75a0;
            uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
            uVar13 = (ulonglong)uVar12;
            uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
            if ((&DAT_149e05da0)[uVar10] != (&DAT_149e05da0)[uVar13]) goto LAB_1457d75a0;
          }
          lVar11 = lVar11 + 2;
        } while( true );
      }
    }
    else if (DAT_14cbe2130 + iVar5 != 1) goto LAB_1457d7543;
    goto LAB_1457d75a8;
  }
  goto LAB_1457d7543;
LAB_1457d75a0:
  if (uVar9 == uVar12) {
LAB_1457d75a8:
    lVar8 = FUN_140c6f194(lVar8,lVar7 + 0x58);
    if (lVar8 == 0) {
      *(undefined1 *)(param_2 + 800) = 0;
    }
    else {
      *(undefined1 *)(param_2 + 800) = 1;
      FUN_144a787a6(puVar2,lVar8 + 0xb8);
      *(undefined8 *)(param_2 + 0x328) = *(undefined8 *)(lVar8 + 0x20);
      *(undefined4 *)(param_2 + 0x324) = *(undefined4 *)(lVar8 + 8);
    }
    goto LAB_1457d75f0;
  }
LAB_1457d7543:
  iVar14 = iVar14 + 1;
  if (*(int *)(lVar6 + 0x1450) <= iVar14) goto LAB_1457d75f0;
  goto LAB_1457d751f;
}



// FUNCTION 1457d768a FUN_1457d768a body=4 status=ok
// SIG undefined FUN_1457d768a(void)

undefined8 FUN_1457d768a(undefined8 param_1)

{
  return param_1;
}



// FUNCTION 1457d768e FUN_1457d768e body=48 status=ok
// SIG undefined FUN_1457d768e(void)

void FUN_1457d768e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1457d76be FUN_1457d76be body=250 status=ok
// SIG undefined FUN_1457d76be(void)

undefined4 * FUN_1457d76be(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  plVar1 = *(longlong **)(param_2 + 4);
  plVar2 = *(longlong **)(param_1 + 4);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 4) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  param_1[6] = param_2[6];
  uVar3 = param_2[9];
  uVar4 = param_2[10];
  uVar5 = param_2[0xb];
  uVar6 = param_2[0xc];
  uVar7 = param_2[0xd];
  uVar8 = param_2[0xe];
  uVar9 = param_2[0xf];
  param_1[8] = param_2[8];
  param_1[9] = uVar3;
  param_1[10] = uVar4;
  param_1[0xb] = uVar5;
  param_1[0xc] = uVar6;
  param_1[0xd] = uVar7;
  param_1[0xe] = uVar8;
  param_1[0xf] = uVar9;
  param_1[0x10] = param_2[0x10];
  FUN_144a787a6(param_1 + 0x12,param_2 + 0x12);
  FUN_144a787a6(param_1 + 0x16,param_2 + 0x16);
  FUN_144a787a6(param_1 + 0x1a,param_2 + 0x1a);
  FUN_144a787a6(param_1 + 0x1e,param_2 + 0x1e);
  if (param_1[0x23] != param_2[0x23]) {
    *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
    param_1[0x23] = param_2[0x23];
  }
  param_1[0x2c] = param_2[0x2c];
  uVar3 = param_2[0x24];
  uVar4 = param_2[0x25];
  uVar5 = param_2[0x26];
  uVar6 = param_2[0x27];
  uVar7 = param_2[0x29];
  uVar8 = param_2[0x2a];
  uVar9 = param_2[0x2b];
  param_1[0x28] = param_2[0x28];
  param_1[0x29] = uVar7;
  param_1[0x2a] = uVar8;
  param_1[0x2b] = uVar9;
  param_1[0x24] = uVar3;
  param_1[0x25] = uVar4;
  param_1[0x26] = uVar5;
  param_1[0x27] = uVar6;
  FUN_1457d77b8(param_1 + 0x2e,param_2 + 0x2e);
  return param_1;
}



// FUNCTION 1457d77b8 FUN_1457d77b8 body=88 status=ok
// SIG undefined FUN_1457d77b8(void)

undefined8 * FUN_1457d77b8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140f9b206(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 5);
      }
    }
  }
  return param_1;
}



// FUNCTION 1457d7810 FUN_1457d7810 body=132 status=ok
// SIG undefined FUN_1457d7810(void)

void FUN_1457d7810(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457d7894 FUN_1457d7894 body=233 status=ok
// SIG undefined FUN_1457d7894(void)

void FUN_1457d7894(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_178 [36];
  undefined4 local_154;
  undefined1 local_150 [24];
  longlong local_138;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_178;
  (**(code **)(*param_1 + 0x180))();
  FUN_1446dcdd4(local_150,param_2);
  lVar2 = FUN_1412095fe(local_150);
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  if (lVar2 != 0) {
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x170))(param_1);
    lVar1 = *plVar3;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x58));
    *(int *)(lVar1 + 0x50) = *(int *)(lVar1 + 0x50) + 1;
    FUN_141209dde(local_150,lVar2);
    FUN_14120972e(lVar1,&local_154,local_150);
    *(undefined4 *)(param_1 + 0x56) = local_154;
    FUN_140989dc4(local_150);
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x58));
  }
  if ((local_30 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d797e FUN_1457d797e body=141 status=ok
// SIG undefined FUN_1457d797e(void)

void FUN_1457d797e(longlong *param_1)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x170))();
  lVar1 = *plVar3;
  SRWLock = (PSRWLOCK)(lVar1 + 0x58);
  AcquireSRWLockShared(SRWLock);
  cVar2 = FUN_1457d7c7e(lVar1,param_1 + 0x56);
  ReleaseSRWLockShared(SRWLock);
  if (cVar2 != '\0') {
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x170))(param_1);
    lVar1 = *plVar3;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x58));
    *(int *)(lVar1 + 0x50) = *(int *)(lVar1 + 0x50) + 1;
    FUN_140e8d7da(lVar1,param_1 + 0x56);
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x58));
    *(undefined4 *)(param_1 + 0x56) = 0xffffffff;
  }
  return;
}



// FUNCTION 1457d7a0c FUN_1457d7a0c body=123 status=ok
// SIG undefined FUN_1457d7a0c(void)

longlong FUN_1457d7a0c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448d5e3c(&local_28,param_1 + 0x208);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28 + 0x140;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d7a88 FUN_1457d7a88 body=500 status=ok
// SIG undefined FUN_1457d7a88(void)

void FUN_1457d7a88(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined4 local_98;
  longlong *local_90 [2];
  longlong *local_80 [2];
  undefined8 local_70;
  longlong *local_68;
  undefined4 *local_60;
  ulonglong *local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_40 [4];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar5 = *(longlong *)(param_1 + 0x288);
  if (lVar5 != 0) {
    uVar3 = *(uint *)(param_2 + 0x2b8);
    if ((-1 < (int)uVar3) && ((int)uVar3 < *(int *)(lVar5 + 0x1c0))) {
      *(int *)(lVar5 + 0x1c8) = *(int *)(lVar5 + 0x1c8) + 1;
      lVar5 = (ulonglong)uVar3 * 0x1e8 + *(longlong *)(lVar5 + 0x1b8);
      if ((lVar5 != -0x28) && (*(char *)(lVar5 + 0xb8) == '\0')) {
        FUN_144a5dc74(local_80);
        FUN_140ac6c96(&DAT_14cbe2160,local_80);
        local_a0 = *(longlong **)(lVar5 + 0x38);
        if (local_a0 != (longlong *)0x0) {
          (**(code **)(*local_a0 + 8))();
        }
        local_98 = *(undefined4 *)(lVar5 + 0x40);
        FUN_14023409e(&local_b0,local_80,1);
        local_40[0] = 4;
        FUN_14023423e(local_30,&local_a0);
        local_60 = local_40;
        local_58 = &local_20;
        FUN_14010d304(&local_50);
        local_70 = local_b0;
        local_68 = local_a8;
        if (local_a8 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(local_90,&local_70,&local_50);
        FUN_14007f2db(local_50,local_48);
        if (local_50 != 0) {
          FUN_1400020a8();
        }
        if (local_30[0] != (longlong *)0x0) {
          (**(code **)(*local_30[0] + 0x10))();
        }
        if (local_a8 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_a8 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_a8)(local_a8);
            LOCK();
            piVar2 = (int *)((longlong)local_a8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_a8 + 0x10))(local_a8);
            }
          }
        }
        if (local_a0 != (longlong *)0x0) {
          (**(code **)(*local_a0 + 0x10))();
        }
        uVar4 = FUN_1457d8342(param_2 + 0x298);
        FUN_140008f88(uVar4,local_90);
        if (local_90[0] != (longlong *)0x0) {
          (**(code **)(*local_90[0] + 0x10))();
        }
        if (local_80[0] != (longlong *)0x0) {
          (**(code **)(*local_80[0] + 0x10))();
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d7c7e FUN_1457d7c7e body=331 status=ok
// SIG undefined FUN_1457d7c7e(void)

ulonglong FUN_1457d7c7e(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar5 = 0;
  if (*param_2 != -1) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_48 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_50);
      uVar5 = (ulonglong)*(uint *)(param_1 + 5);
    }
    local_60 = local_40;
    uVar2 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_70 = local_50;
    local_68 = local_48;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    local_78 = param_1;
    if ((local_60._4_4_ != (int)uVar5) || (local_48 != plVar1)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar2;
      do {
        lVar4 = (longlong)*(int *)(*local_78 + 0x10 + (longlong)iVar3 * 0x28);
        if (lVar4 != 0) {
          lVar6 = 0;
          do {
            if (*(int *)(*(longlong *)(*local_78 + 8 + (longlong)iVar3 * 0x28) + lVar6) == *param_2)
            {
              uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
              goto LAB_1457d7da5;
            }
            lVar6 = lVar6 + 0x120;
          } while (lVar4 * 0x120 != lVar6);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 || (local_68 != plVar1 || local_60._4_4_ != (int)uVar5));
    }
    local_60 = uVar2;
    uVar5 = 0;
  }
LAB_1457d7da5:
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d7dca FUN_1457d7dca body=1283 status=ok
// SIG undefined FUN_1457d7dca(void)

void FUN_1457d7dca(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_138 [32];
  int local_118;
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  longlong *local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  longlong local_88;
  ulonglong local_80;
  longlong *local_78;
  undefined4 local_70;
  undefined4 local_68 [4];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_118 = *(int *)(param_2 + 0x1f8);
  lVar16 = (longlong)local_118;
  iVar13 = *(int *)(param_2 + 0x1f0);
  iVar4 = *(int *)(param_2 + 500);
  cVar6 = FUN_1457d82ce(param_1,*(undefined4 *)(param_2 + 0x2b8),iVar13,iVar4);
  if (cVar6 != '\0') {
    iVar7 = *(int *)(param_1 + 0x2cc);
    iVar10 = *(int *)(param_2 + 0x1c8);
    *(int *)(param_2 + 0x1c8) = iVar10 + 1;
    lVar15 = *(longlong *)(*(longlong *)(param_2 + 0x1b8) + 0xf0 + (longlong)iVar7 * 0x1e8);
    lVar8 = *(longlong *)(lVar15 + 8 + (longlong)iVar13 * 0x28);
    lVar5 = *(longlong *)(lVar8 + 8 + (longlong)iVar4 * 0x28);
    uVar14 = *(int *)(lVar8 + 0x18 + (longlong)iVar4 * 0x28) -
             *(int *)(lVar15 + 0x18 + (longlong)iVar13 * 0x28);
    if (iVar4 == 0 && 0 < iVar13) {
      iVar7 = *(int *)(param_1 + 0x2cc);
      *(int *)(param_2 + 0x1c8) = iVar10 + 2;
      lVar15 = *(longlong *)(*(longlong *)(param_2 + 0x1b8) + 0xf0 + (longlong)iVar7 * 0x1e8);
      iVar10 = *(int *)(lVar15 + 0x1c) - *(int *)(lVar15 + 0x18);
      iVar7 = 0;
      if (0 < iVar10) {
        iVar7 = iVar10;
      }
      uVar14 = uVar14 + iVar7;
    }
    if (0 < (int)uVar14) {
      FUN_144a5dc74(local_c8);
      puVar11 = &DAT_14cbe21b0;
      if (0 < iVar4 && 0 < iVar13) {
        puVar11 = &DAT_14cbe2200;
      }
      puVar12 = &DAT_14cbe21d8;
      if (0 < iVar4 && 0 < iVar13) {
        puVar12 = &DAT_14cbe2228;
      }
      if (uVar14 == 1) {
        puVar12 = puVar11;
      }
      FUN_140ac6c96(puVar12,local_c8);
      FUN_14023409e(&local_e8,local_c8,1);
      local_a8 = &local_88;
      local_88._0_4_ = 0;
      local_78 = (longlong *)0x0;
      local_70 = 0;
      local_80 = (ulonglong)uVar14;
      local_a0 = (ulonglong *)local_68;
      FUN_14010d304(&local_98);
      local_b8 = local_e8;
      local_b0 = local_e0;
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_d8,&local_b8,&local_98);
      FUN_14007f2db(local_98,local_90);
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      if (local_78 != (longlong *)0x0) {
        (**(code **)(*local_78 + 0x10))();
      }
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_e0 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_e0)(local_e0);
          LOCK();
          piVar3 = (int *)((longlong)local_e0 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*local_e0 + 0x10))(local_e0);
          }
        }
      }
      uVar9 = FUN_1457d8342(param_2 + 0x298);
      FUN_140008f88(uVar9,local_d8);
      if (local_d8[0] != (longlong *)0x0) {
        (**(code **)(*local_d8[0] + 0x10))();
      }
      if (local_c8[0] != (longlong *)0x0) {
        (**(code **)(*local_c8[0] + 0x10))();
      }
    }
    lVar15 = (longlong)*(int *)(lVar5 + 0xc0 + lVar16 * 200);
    if (lVar15 != 0) {
      lVar16 = *(longlong *)(lVar5 + 0xb8 + lVar16 * 200);
      lVar15 = lVar15 * 0x20 + lVar16;
      do {
        lVar8 = FUN_1457d8382(param_1,lVar16);
        if (lVar8 != 0) {
          iVar13 = *(int *)(lVar16 + 0x18);
          if (iVar13 == 0) {
            iVar13 = *(int *)(lVar8 + 0x98);
          }
          uVar14 = iVar13 - *(int *)(lVar8 + 0x9c);
          if (uVar14 != 0 && *(int *)(lVar8 + 0x9c) <= iVar13) {
            FUN_144a5dc74(local_c8);
            puVar11 = &DAT_14cbe2278;
            if (uVar14 == 1) {
              puVar11 = &DAT_14cbe2250;
            }
            FUN_140ac6c96(puVar11,local_c8);
            local_f8 = *(longlong **)(lVar8 + 0x10);
            if (local_f8 != (longlong *)0x0) {
              (**(code **)(*local_f8 + 8))();
            }
            local_f0 = *(undefined4 *)(lVar8 + 0x18);
            FUN_14023409e(&local_108,local_c8,1);
            local_88._0_4_ = 0;
            local_78 = (longlong *)0x0;
            local_70 = 0;
            local_80 = (ulonglong)uVar14;
            local_68[0] = 4;
            FUN_14023423e(local_58,&local_f8);
            local_a8 = &local_88;
            local_a0 = &local_48;
            FUN_14010d304(&local_98,&local_a8);
            local_b8 = local_108;
            local_b0 = local_100;
            if (local_100 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_100 + 1) = (int)local_100[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(local_d8,&local_b8,&local_98);
            FUN_14007f2db(local_98,local_90);
            if (local_98 != 0) {
              FUN_1400020a8();
            }
            lVar8 = 0x30;
            do {
              if (*(longlong **)((longlong)&local_88 + lVar8) != (longlong *)0x0) {
                (**(code **)(**(longlong **)((longlong)&local_88 + lVar8) + 0x10))();
                *(undefined8 *)((longlong)&local_88 + lVar8) = 0;
                *(undefined4 *)((longlong)&local_80 + lVar8) = 0;
              }
              plVar2 = local_100;
              lVar8 = lVar8 + -0x20;
            } while (lVar8 != -0x10);
            if (local_100 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_100 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_100)(local_100);
                LOCK();
                piVar3 = (int *)((longlong)plVar2 + 0xc);
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (*piVar3 == 0) {
                  (**(code **)(*plVar2 + 0x10))(plVar2);
                }
              }
            }
            if (local_f8 != (longlong *)0x0) {
              (**(code **)(*local_f8 + 0x10))();
            }
            uVar9 = FUN_1457d8342(param_2 + 0x298);
            FUN_140008f88(uVar9,local_d8);
            if (local_d8[0] != (longlong *)0x0) {
              (**(code **)(*local_d8[0] + 0x10))();
            }
            if (local_c8[0] != (longlong *)0x0) {
              (**(code **)(*local_c8[0] + 0x10))();
            }
          }
        }
        lVar16 = lVar16 + 0x20;
      } while (lVar16 != lVar15);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457d82ce FUN_1457d82ce body=116 status=ok
// SIG undefined FUN_1457d82ce(void)

undefined8 FUN_1457d82ce(longlong param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((((lVar1 != 0) && (-1 < (int)param_2)) && ((int)param_2 < *(int *)(lVar1 + 0x1c0))) &&
     (-1 < (int)param_3)) {
    if ((((int)param_3 < *(int *)(*(longlong *)(lVar1 + 0x1b8) + 0xf8 + (ulonglong)param_2 * 0x1e8))
        && (-1 < (int)param_4)) && (-1 < param_5)) {
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x1b8) + 0xf0 + (ulonglong)param_2 * 0x1e8);
      if (((int)param_4 < *(int *)(lVar1 + 0x10 + (ulonglong)param_3 * 0x28)) &&
         (param_5 < *(int *)(*(longlong *)(lVar1 + 8 + (ulonglong)param_3 * 0x28) + 0x10 +
                            (ulonglong)param_4 * 0x28))) {
        return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
      }
    }
  }
  return 0;
}



// FUNCTION 1457d8342 FUN_1457d8342 body=59 status=ok
// SIG undefined FUN_1457d8342(void)

longlong FUN_1457d8342(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1457d83be(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x10 + *param_1;
  thunk_FUN_144a5dc74(lVar2);
  return lVar2;
}



// FUNCTION 1457d837d thunk_FUN_144a5dc74 body=5 status=ok
// SIG undefined thunk_FUN_144a5dc74(void)

undefined8 * thunk_FUN_144a5dc74(undefined8 *param_1)

{
  longlong *plVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  *param_1 = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  return param_1;
}


