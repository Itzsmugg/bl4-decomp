// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145d19aca FUN_145d19aca body=172 status=ok
// SIG undefined FUN_145d19aca(void)

void FUN_145d19aca(longlong *param_1)

{
  FUN_14141661e(param_1 + 0x22);
  FUN_14141661e(param_1 + 0x1a);
  FUN_14141661e(param_1 + 0x12);
  FUN_14141661e(param_1 + 10);
  FUN_144760e21(param_1[7],(int)param_1[8]);
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_145af9661(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_145d19b76(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d19b76 FUN_145d19b76 body=40 status=ok
// SIG undefined FUN_145d19b76(void)

void FUN_145d19b76(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14606bbe0(param_1);
    param_1 = param_1 + 0x40;
  }
  return;
}



// FUNCTION 145d19b9e FUN_145d19b9e body=367 status=ok
// SIG undefined FUN_145d19b9e(void)

void FUN_145d19b9e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
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
      lVar2 = *local_70;
      lVar3 = (longlong)iStack_54;
      FUN_14141661e(lVar2 + lVar3 * 0xa0 + 0x58);
      FUN_14141661e(lVar2 + lVar3 * 0xa0 + 0x18);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14152de66(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d19d0e FUN_145d19d0e body=407 status=ok
// SIG undefined FUN_145d19d0e(void)

void FUN_145d19d0e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
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
      lVar3 = (longlong)iStack_64 * 0x110;
      FUN_14141661e(lVar2 + lVar3 + 200);
      FUN_14141661e(lVar2 + lVar3 + 0x88);
      FUN_14141661e(lVar2 + lVar3 + 0x48);
      FUN_14141661e(lVar2 + lVar3 + 8);
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140e3154e(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d19eb2 FUN_145d19eb2 body=186 status=ok
// SIG undefined FUN_145d19eb2(void)

undefined8 * FUN_145d19eb2(undefined8 *param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140553f2a();
  *param_1 = &PTR_FUN_14b211800;
  FUN_145d19f6e();
  *(undefined2 *)(param_1 + 6) = DAT_14cb8a3c0;
  *(undefined1 *)((longlong)param_1 + 0x32) = 8;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    local_18 = FUN_145a68674();
    if (local_18 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(local_18);
    }
    local_20 = param_1[2];
    if ((local_20 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c();
    }
    FUN_140909372(&local_20,&local_18);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d19f6e FUN_145d19f6e body=84 status=ok
// SIG undefined FUN_145d19f6e(void)

void FUN_145d19f6e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8a3c4) {
    FUN_144b3d300(&DAT_14cb8a3c4);
    if (DAT_14cb8a3c4 == -1) {
      FUN_145d19fc2();
      _Init_thread_footer(&DAT_14cb8a3c4);
      return;
    }
  }
  return;
}



// FUNCTION 145d19fc2 FUN_145d19fc2 body=117 status=ok
// SIG undefined FUN_145d19fc2(void)

void FUN_145d19fc2(void)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_28;
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  DAT_14cb8a3c0 = 0xffff;
  uVar1 = FUN_145d77b9e();
  local_30 = 0;
  local_28 = 0;
  FUN_141534050(uVar1,&local_1a);
  DAT_14cb8a3c0 = local_1a;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_145d1a038(uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d1a038 FUN_145d1a038 body=139 status=ok
// SIG undefined FUN_145d1a038(void)

void FUN_145d1a038(undefined8 param_1,undefined2 param_2)

{
  undefined ****ppppuVar1;
  undefined1 auStack_78 [32];
  undefined ***local_58;
  undefined4 local_50;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = CONCAT22(param_2,param_2);
  local_18 = 0xff;
  local_58 = (undefined ***)&PTR_FUN_14b422bf0;
  FUN_1400abcac(param_1,&local_58);
  if ((local_18 & 1) != 0) {
    ppppuVar1 = &local_58;
    if ((local_18 & 2) == 0) {
      ppppuVar1 = (undefined ****)local_58;
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**ppppuVar1)(ppppuVar1,0);
    if ((local_18 & 2) == 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d1a0c4 FUN_145d1a0c4 body=287 status=ok
// SIG undefined FUN_145d1a0c4(void)

void FUN_145d1a0c4(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((byte *)*param_4 != (byte *)0x0) && ((*(byte *)*param_4 & 3) != 0)) {
    lVar1 = (**(code **)(*param_1 + 0x180))();
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
      lVar2 = FUN_140dbafcc();
      if (lVar2 != 0) {
        lVar1 = FUN_1400f6f32(lVar1);
        if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x68), lVar1 != 0)) {
          lVar3 = FUN_140bccd38(lVar1,param_2 + 0x18);
          if (lVar3 != 0) {
            FUN_1404963c2(lVar2,local_40,lVar3);
            lVar2 = FUN_1458cfed0(lVar2,local_40);
            if (lVar2 != 0) {
              lVar3 = FUN_140ade7fe();
              if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
                FUN_140def96c(lVar1,param_2 + 0x18);
                    /* WARNING: Subroutine does not return */
                FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
              }
            }
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d1a2b8 FUN_145d1a2b8 body=136 status=ok
// SIG undefined FUN_145d1a2b8(void)

void FUN_145d1a2b8(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = DAT_14cbe5780;
  local_50 = DAT_14cbe5788;
  FUN_1448075d0(local_48);
  uVar2 = FUN_144a06846(param_1,local_48);
  uVar1 = FUN_1410451c0(uVar2,*(undefined4 *)(param_2 + 8));
  *(undefined4 *)(param_2 + 8) = uVar1;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d1a342 FUN_145d1a342 body=171 status=ok
// SIG undefined FUN_145d1a342(void)

void FUN_145d1a342(longlong *param_1,undefined4 param_2,undefined8 param_3)

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
        goto LAB_145d1a3d7;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145d1a3d7:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145d1a3ee FUN_145d1a3ee body=163 status=ok
// SIG undefined FUN_145d1a3ee(void)

bool FUN_145d1a3ee(longlong param_1,undefined4 param_2,undefined8 param_3)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
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



// FUNCTION 145d1a492 FUN_145d1a492 body=164 status=ok
// SIG undefined FUN_145d1a492(void)

void FUN_145d1a492(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_145d1a736(param_1,*param_3,param_3[1]);
  if (*(longlong *)(param_3 + 3) != *(longlong *)(param_1 + 0x1a0)) {
    *(longlong *)(param_1 + 0x1a0) = *(longlong *)(param_3 + 3);
    FUN_14595ffec(param_1,0);
  }
  FUN_145d1a5b6(param_1,param_3[2]);
  FUN_145d1a636(param_1,*(undefined1 *)(param_3 + 5));
  FUN_145d1a6b6(param_1,*(undefined1 *)((longlong)param_3 + 0x15));
  lVar1 = DAT_14cb0d2b0;
  if (DAT_14cb0d2b0 == 0) {
    return;
  }
  lVar2 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
  if (lVar2 == 0) {
    FUN_145876474(DAT_14cb0d2b0);
    lVar2 = *(longlong *)(lVar1 + 0x2c8);
    if (lVar2 == 0) {
      return;
    }
  }
  FUN_145d1a536(param_1,*(undefined1 *)(lVar2 + 0x300));
  return;
}



// FUNCTION 145d1a536 FUN_145d1a536 body=128 status=ok
// SIG undefined FUN_145d1a536(void)

void FUN_145d1a536(longlong param_1,char param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(char *)(param_1 + 0x1be) != param_2) {
    *(char *)(param_1 + 0x1be) = param_2;
    iVar1 = *(int *)(param_1 + 0x48);
    if ((longlong)iVar1 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x40);
      lVar6 = 0;
      do {
        lVar4 = *(longlong *)(lVar3 + lVar6);
        if (lVar4 != 0) {
          lVar5 = FUN_14020fb76();
          iVar2 = *(int *)(lVar5 + 0x38);
          if ((iVar2 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
             (*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar2 * 8)
              == lVar5 + 0x30)) {
            FUN_14594399c(lVar4,CONCAT71((int7)(int3)((uint)iVar2 >> 8),
                                         *(undefined1 *)(param_1 + 0x1be)));
          }
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar1 * 8 != lVar6);
    }
  }
  return;
}



// FUNCTION 145d1a5b6 FUN_145d1a5b6 body=128 status=ok
// SIG undefined FUN_145d1a5b6(void)

void FUN_145d1a5b6(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(int *)(param_1 + 0x1b8) != param_2) {
    *(int *)(param_1 + 0x1b8) = param_2;
    iVar1 = *(int *)(param_1 + 0x48);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x40);
      lVar5 = 0;
      do {
        lVar3 = *(longlong *)(lVar2 + lVar5);
        if (lVar3 != 0) {
          lVar4 = FUN_14020fb76();
          if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
            FUN_145943868(lVar3,*(undefined4 *)(param_1 + 0x1b8));
          }
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
    }
  }
  return;
}



// FUNCTION 145d1a636 FUN_145d1a636 body=128 status=ok
// SIG undefined FUN_145d1a636(void)

void FUN_145d1a636(longlong param_1,char param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(char *)(param_1 + 0x1bc) != param_2) {
    *(char *)(param_1 + 0x1bc) = param_2;
    iVar1 = *(int *)(param_1 + 0x48);
    if ((longlong)iVar1 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x40);
      lVar6 = 0;
      do {
        lVar4 = *(longlong *)(lVar3 + lVar6);
        if (lVar4 != 0) {
          lVar5 = FUN_14020fb76();
          iVar2 = *(int *)(lVar5 + 0x38);
          if ((iVar2 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
             (*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar2 * 8)
              == lVar5 + 0x30)) {
            FUN_145943610(lVar4,CONCAT71((int7)(int3)((uint)iVar2 >> 8),
                                         *(undefined1 *)(param_1 + 0x1bc)));
          }
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar1 * 8 != lVar6);
    }
  }
  return;
}



// FUNCTION 145d1a6b6 FUN_145d1a6b6 body=128 status=ok
// SIG undefined FUN_145d1a6b6(void)

void FUN_145d1a6b6(longlong param_1,char param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(char *)(param_1 + 0x1bd) != param_2) {
    *(char *)(param_1 + 0x1bd) = param_2;
    iVar1 = *(int *)(param_1 + 0x48);
    if ((longlong)iVar1 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x40);
      lVar6 = 0;
      do {
        lVar4 = *(longlong *)(lVar3 + lVar6);
        if (lVar4 != 0) {
          lVar5 = FUN_14020fb76();
          iVar2 = *(int *)(lVar5 + 0x38);
          if ((iVar2 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
             (*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar2 * 8)
              == lVar5 + 0x30)) {
            FUN_14594373c(lVar4,CONCAT71((int7)(int3)((uint)iVar2 >> 8),
                                         *(undefined1 *)(param_1 + 0x1bd)));
          }
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar1 * 8 != lVar6);
    }
  }
  return;
}



// FUNCTION 145d1a736 FUN_145d1a736 body=263 status=ok
// SIG undefined FUN_145d1a736(void)

void FUN_145d1a736(longlong *param_1,float param_2,float param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[5] != 0) {
    if (ABS((double)param_1[0x35] - (double)param_2) <= 1e-08) {
      if (ABS((double)param_1[0x36] - (double)param_3) <= 1e-08) goto LAB_145d1a7ac;
    }
    uVar1 = (**(code **)(*param_1 + 0x180))(param_1);
    lVar2 = FUN_1449baec6(uVar1);
    if (lVar2 != 0) {
      FUN_14039c14e(lVar2,local_68);
      param_1[0x35] = (longlong)(double)param_2;
      param_1[0x36] = (longlong)(double)param_3;
      local_58 = (undefined4)param_1[0x35];
      uStack_54 = *(undefined4 *)((longlong)param_1 + 0x1ac);
      uStack_50 = (undefined4)param_1[0x36];
      uStack_4c = *(undefined4 *)((longlong)param_1 + 0x1b4);
      FUN_14433a8f8(param_1 + 0x38);
      FUN_145960286(param_1);
    }
  }
LAB_145d1a7ac:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d1a83e FUN_145d1a83e body=292 status=ok
// SIG undefined FUN_145d1a83e(void)

undefined4 * FUN_145d1a83e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145d1a9f6(param_1,local_48);
  puVar1 = (uint *)param_3[1];
  uVar7 = *(uint *)*param_3;
  *local_40 = uVar7;
  uVar6 = puVar1[1];
  uVar2 = puVar1[2];
  uVar3 = puVar1[3];
  local_40[1] = *puVar1;
  local_40[2] = uVar6;
  local_40[3] = uVar2;
  local_40[4] = uVar3;
  *(undefined8 *)(local_40 + 5) = *(undefined8 *)(puVar1 + 4);
  local_40[7] = 0xffffffff;
  local_4c = local_48[0];
  cVar5 = FUN_145d1a964(param_1,uVar7,local_40,&local_4c);
  uVar4 = local_4c;
  if (cVar5 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      local_40[8] = uVar7;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      local_40[7] = *(uint *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                       (longlong)(int)uVar7) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_145d1b004(param_1);
    }
  }
  *param_2 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d1a964 FUN_145d1a964 body=145 status=ok
// SIG undefined FUN_145d1a964(void)

undefined8 FUN_145d1a964(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar8 * 0x24);
        if (*piVar1 == *param_3) {
          iVar3 = *param_3;
          iVar4 = param_3[1];
          iVar5 = param_3[2];
          iVar6 = param_3[3];
          uVar2 = *(undefined8 *)(param_3 + 4);
          piVar1[6] = param_3[6];
          *(undefined8 *)(piVar1 + 4) = uVar2;
          *piVar1 = iVar3;
          piVar1[1] = iVar4;
          piVar1[2] = iVar5;
          piVar1[3] = iVar6;
          FUN_145d1aade(iVar3,*param_4);
          *param_4 = iVar8;
          return 1;
        }
        iVar8 = piVar1[7];
      } while (iVar8 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145d1a9f6 FUN_145d1a9f6 body=231 status=ok
// SIG undefined FUN_145d1a9f6(void)

int * FUN_145d1a9f6(longlong *param_1,int *param_2)

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
      FUN_14042c636(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x24);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x24) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x24 + *param_1;
  return param_2;
}



// FUNCTION 145d1aade FUN_145d1aade body=116 status=ok
// SIG undefined FUN_145d1aade(void)

void FUN_145d1aade(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x24) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x24);
  *puVar1 = 0xffffffff;
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 145d1ab52 FUN_145d1ab52 body=389 status=ok
// SIG undefined FUN_145d1ab52(void)

void FUN_145d1ab52(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [24];
  longlong local_b0;
  undefined1 local_a0 [24];
  longlong local_88;
  undefined1 local_78 [24];
  longlong local_60;
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_d8 = DAT_14cbe575c;
  local_d0 = DAT_14cbe5764;
  FUN_1448075d0(local_50);
  uVar3 = FUN_144a06846(param_1,local_50);
  local_e8 = DAT_14cbe5768;
  local_e0 = DAT_14cbe5770;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(uVar3,local_78);
  uVar1 = FUN_1410451c0(uVar3,*(undefined4 *)(param_2 + 0xc));
  local_f8 = DAT_14cbe575c;
  local_f0 = DAT_14cbe5764;
  FUN_1448075d0(local_a0);
  uVar3 = FUN_144a06846(param_1,local_a0);
  local_108 = DAT_14cbe5774;
  local_100 = DAT_14cbe577c;
  FUN_1448075d0(local_c8);
  uVar3 = FUN_144a06846(uVar3,local_c8);
  uVar2 = FUN_1410451c0(uVar3,*(undefined4 *)(param_2 + 0x10));
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_2 + 0xc) = uVar1;
  *(undefined4 *)(param_2 + 0x10) = uVar2;
  if ((local_28 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d1acd8 FUN_145d1acd8 body=395 status=ok
// SIG undefined FUN_145d1acd8(void)

void FUN_145d1acd8(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [24];
  longlong local_60;
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = DAT_14cbe5738;
  local_80 = DAT_14cbe5740;
  FUN_1448075d0(local_50);
  uVar1 = FUN_144a06846(param_1,local_50);
  local_98 = DAT_14cbe5744;
  local_90 = DAT_14cbe574c;
  FUN_1448075d0(local_78);
  uVar1 = FUN_144a06846(uVar1,local_78);
  uVar2 = FUN_140b963dc(uVar1,0);
  *param_2 = uVar2;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  local_a8 = DAT_14cbe5738;
  local_a0 = DAT_14cbe5740;
  FUN_1448075d0(local_50);
  uVar1 = FUN_144a06846(param_1,local_50);
  local_b8 = DAT_14cbe5750;
  local_b0 = DAT_14cbe5758;
  FUN_1448075d0(local_78);
  uVar1 = FUN_144a06846(uVar1,local_78);
  uVar2 = FUN_140b963dc(uVar1,0);
  param_2[1] = uVar2;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d1ae64 FUN_145d1ae64 body=414 status=ok
// SIG undefined FUN_145d1ae64(void)

void FUN_145d1ae64(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [24];
  longlong local_60;
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = DAT_14cbe578c;
  local_80 = DAT_14cbe5794;
  FUN_1448075d0(local_50);
  uVar1 = FUN_144a06846(param_1,local_50);
  local_98 = DAT_14cbe5798;
  local_90 = DAT_14cbe57a0;
  FUN_1448075d0(local_78);
  plVar2 = (longlong *)FUN_144a06846(uVar1,local_78);
  uVar3 = CONCAT71((int7)((ulonglong)plVar2 >> 8),*(undefined1 *)(param_2 + 0x14));
  if (*plVar2 != 0) {
    uVar3 = FUN_14000584e(*plVar2,uVar3 & 0xffffffff);
  }
  *(char *)(param_2 + 0x14) = (char)uVar3;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  local_a8 = DAT_14cbe578c;
  local_a0 = DAT_14cbe5794;
  FUN_1448075d0(local_50);
  uVar1 = FUN_144a06846(param_1,local_50);
  local_b8 = DAT_14cbe57a4;
  local_b0 = DAT_14cbe57ac;
  FUN_1448075d0(local_78);
  plVar2 = (longlong *)FUN_144a06846(uVar1,local_78);
  uVar3 = CONCAT71((int7)((ulonglong)plVar2 >> 8),*(undefined1 *)(param_2 + 0x15));
  if (*plVar2 != 0) {
    uVar3 = FUN_14000584e(*plVar2,uVar3 & 0xffffffff);
  }
  *(char *)(param_2 + 0x15) = (char)uVar3;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d1b004 FUN_145d1b004 body=428 status=ok
// SIG undefined FUN_145d1b004(void)

void FUN_145d1b004(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar6 = (longlong)iVar5;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x24);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x20 + lVar6 * 0x24) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x1c + lVar6 * 0x24) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 145d1b1b2 FUN_145d1b1b2 body=284 status=ok
// SIG undefined FUN_145d1b1b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145d1b1b2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9dd6d0) {
    FUN_144b3d300(&DAT_14c9dd6d0);
    if (DAT_14c9dd6d0 == -1) {
      FUN_145d1b2ce();
      FUN_140db5666(&DAT_14c9dd628,0,&DAT_14c9dd5c0,L"FHdrCustomResolve2xPS",
                    L"/Engine/Private/HdrCustomResolveShaders.usf",L"HdrCustomResolve2xPS",3,1,
                    FUN_14719908c,FUN_147199034,&LAB_147199030,&LAB_14719902c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe8,0);
      _DAT_14c9dd628 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c8cde0);
      _Init_thread_footer(&DAT_14c9dd6d0);
    }
  }
  return &DAT_14c9dd628;
}



// FUNCTION 145d1b2ce FUN_145d1b2ce body=314 status=ok
// SIG undefined FUN_145d1b2ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145d1b2ce(void)

{
  if ((DAT_14c9dd627 & 2) == 0) {
    DAT_14c9dd627 = DAT_14c9dd627 | 2;
    _DAT_14c9dd5c8 = L"FHdrCustomResolve2xPS";
    _DAT_14c9dd5e0 = FUN_146826540;
    _DAT_14c9dd5e8 = FUN_146825d77;
    _DAT_14c9dd5f0 = FUN_146825fd6;
    _DAT_14c9dd5f8 = FUN_1407e02ea;
    _DAT_14c9dd600 = FUN_146826273;
    _DAT_14c9dd5d8 = FUN_147198ffe;
    _DAT_14c9dd618 = 0xffffffff000000e8;
    _DAT_14c9dd620 = 8;
    DAT_14c9dd624 = 0;
    _DAT_14c9dd608 = &LAB_147199028;
    _DAT_14c9e0538 = &DAT_14a235a78;
    DAT_14c9e0562 = FUN_140850cc5();
    _DAT_14c9e0540 = FUN_140fb78d0();
    _DAT_14c9e0550 = &LAB_14682652b;
    _DAT_14c9e0558 = 0x1000000e0;
    _DAT_14c9e0560 = 0;
    _DAT_14c9e0548 = DAT_14c9dd5d0;
    DAT_14c9dd5d0 = &DAT_14c9e0538;
    FUN_145d1b408();
    FUN_1407e00cc(&DAT_14c9dd5c0);
  }
  return &DAT_14c9dd5c0;
}



// FUNCTION 145d1b408 FUN_145d1b408 body=123 status=ok
// SIG undefined FUN_145d1b408(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d1b408(void)

{
  _DAT_14c9e16c0 = L"BASE";
  DAT_14c9e16ea = 4;
  _DAT_14c9e16c8 = FUN_140b35ae4();
  _DAT_14c9e16d0 = DAT_14c9dd5d0;
  _DAT_14c9e16d8 = &LAB_14682652b;
  DAT_14c9dd5d0 = &DAT_14c9e16c0;
  DAT_14c9dd625 = DAT_14c9dd625 + '\x01';
  _DAT_14c9e16e0 = 0x100000000;
  if (*(char *)(_DAT_14c9e16c8 + 100) != '\0') {
    DAT_14c9dd626 = DAT_14c9dd626 + '\x01';
  }
  return;
}



// FUNCTION 145d1b484 FUN_145d1b484 body=148 status=ok
// SIG undefined FUN_145d1b484(void)

bool FUN_145d1b484(longlong param_1)

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
    (**(code **)(param_1 + 0x20))(lVar2,*(undefined2 *)(param_1 + 8));
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



// FUNCTION 145d1b51a FUN_145d1b51a body=9 status=ok
// SIG undefined FUN_145d1b51a(void)

void FUN_145d1b51a(longlong param_1)

{
  FUN_145d1b524(param_1 + 0x10);
  return;
}



// FUNCTION 145d1b524 FUN_145d1b524 body=79 status=ok
// SIG undefined FUN_145d1b524(void)

void FUN_145d1b524(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  FUN_145d1b574(param_1 + 0x20);
  plVar3 = *(longlong **)(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x000145d1b56f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d1b574 FUN_145d1b574 body=53 status=ok
// SIG undefined FUN_145d1b574(void)

void FUN_145d1b574(LPCRITICAL_SECTION param_1)

{
  *(undefined4 *)&param_1[2].SpinCount = 0;
  if (param_1[2].LockSemaphore != (HANDLE)0x0) {
    FUN_1400020a8();
  }
  FUN_145d1b5aa(param_1 + 1);
  DeleteCriticalSection(param_1);
  return;
}



// FUNCTION 145d1b5aa FUN_145d1b5aa body=53 status=ok
// SIG undefined FUN_145d1b5aa(void)

void FUN_145d1b5aa(longlong *param_1)

{
  FUN_145d1b5e0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d1b5e0 FUN_145d1b5e0 body=382 status=ok
// SIG undefined FUN_145d1b5e0(void)

void FUN_145d1b5e0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar4 = (longlong)iStack_5c;
      puVar3 = *(undefined8 **)(lVar2 + 0x10 + lVar4 * 0x20);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      puVar3 = *(undefined8 **)(lVar2 + lVar4 * 0x20 + 8);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d1b760 FUN_145d1b760 body=40 status=ok
// SIG undefined FUN_145d1b760(void)

undefined8 FUN_145d1b760(undefined8 param_1,int param_2)

{
  FUN_145d1b788();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d1b788 FUN_145d1b788 body=299 status=ok
// SIG undefined FUN_145d1b788(void)

void FUN_145d1b788(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a81a970;
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x27) = 0;
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(param_1 + 0x1e);
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(param_1 + 0x14);
  FUN_144760e21(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1415348c2(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1415348f1(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d1b8b4 FUN_145d1b8b4 body=107 status=ok
// SIG undefined FUN_145d1b8b4(void)

void FUN_145d1b8b4(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_145d1b903:
      FUN_14124f2dc(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_145b20bd6(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_145d1b903;
  FUN_145d1b920(param_1);
  FUN_14124f2dc(param_1,param_2);
  return;
}



// FUNCTION 145d1b920 FUN_145d1b920 body=325 status=ok
// SIG undefined FUN_145d1b920(void)

void FUN_145d1b920(longlong *param_1)

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
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x34 + (longlong)iVar4 * 0x38) * 4) =
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



// FUNCTION 145d1ba66 FUN_145d1ba66 body=300 status=ok
// SIG undefined FUN_145d1ba66(void)

undefined4 * FUN_145d1ba66(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145d1bc58(param_1,local_40);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_38 = uVar5;
  *(undefined8 *)(local_38 + 2) = *puVar1;
  lVar8 = puVar1[1];
  *(longlong *)(local_38 + 4) = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
    uVar5 = *local_38;
  }
  local_38[6] = 0xffffffff;
  local_44 = local_40[0];
  cVar3 = FUN_145d1bb94(param_1,uVar5,local_38,&local_44);
  uVar2 = local_44;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
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
      local_38[7] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_38[6] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_145d1bd3a(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d1bb94 FUN_145d1bb94 body=196 status=ok
// SIG undefined FUN_145d1bb94(void)

undefined8 FUN_145d1bb94(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        piVar3 = (int *)(*param_1 + (longlong)iVar9 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar9 * 0x20) == *param_3) {
          plVar8 = *(longlong **)(piVar3 + 4);
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
          iVar4 = *param_3;
          iVar5 = param_3[1];
          iVar6 = param_3[2];
          iVar7 = param_3[3];
          *(undefined8 *)(piVar3 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar3 = iVar4;
          piVar3[1] = iVar5;
          piVar3[2] = iVar6;
          piVar3[3] = iVar7;
          FUN_145af662a(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = piVar3[6];
      } while (iVar9 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145d1bc58 FUN_145d1bc58 body=226 status=ok
// SIG undefined FUN_145d1bc58(void)

int * FUN_145d1bc58(longlong *param_1,int *param_2)

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



// FUNCTION 145d1bd3a FUN_145d1bd3a body=431 status=ok
// SIG undefined FUN_145d1bd3a(void)

void FUN_145d1bd3a(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
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



// FUNCTION 145d1beea FUN_145d1beea body=42 status=ok
// SIG undefined FUN_145d1beea(void)

void FUN_145d1beea(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_145d1bf14(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 145d1bf14 FUN_145d1bf14 body=386 status=ok
// SIG undefined FUN_145d1bf14(void)

void FUN_145d1bf14(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x408) != 0) {
    FUN_1400020a8();
  }
  lVar4 = 0x390;
  do {
    FUN_144a76fd2(param_1 + lVar4);
    lVar4 = lVar4 + -8;
  } while (lVar4 != 0x368);
  FUN_141534920(param_1 + 0x330);
  FUN_141534984(param_1 + 800);
  FUN_1415349e8(param_1 + 0x310);
  lVar4 = 0x300;
  do {
    FUN_141412c32(*(undefined8 *)(param_1 + lVar4),*(undefined4 *)(param_1 + 8 + lVar4));
    if (*(longlong *)(param_1 + lVar4) != 0) {
      FUN_1400020a8();
    }
    lVar4 = lVar4 + -0x10;
  } while (lVar4 != 0x2d0);
  plVar3 = *(longlong **)(param_1 + 0x2d8);
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
  plVar3 = *(longlong **)(param_1 + 0x2c8);
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
  if (*(longlong *)(param_1 + 0x2b8) != 0) {
    FUN_1400020a8();
  }
  lVar4 = 0x248;
  do {
    FUN_140e848f6(param_1 + lVar4);
    lVar4 = lVar4 + -0x68;
  } while (lVar4 != 0x110);
  *(undefined4 *)(param_1 + 0x168) = 0;
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FUN_1400020a8();
  }
  FUN_145d1c096(param_1 + 0x120);
  FUN_145d1c0cc(param_1);
  return;
}



// FUNCTION 145d1c096 FUN_145d1c096 body=53 status=ok
// SIG undefined FUN_145d1c096(void)

void FUN_145d1c096(longlong *param_1)

{
  FUN_145f8b1d2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d1c0cc FUN_145d1c0cc body=233 status=ok
// SIG undefined FUN_145d1c0cc(void)

void FUN_145d1c0cc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_149edae50;
  if (param_1[1] != 0) {
    FUN_140457ffc(param_1[1] + 0x40,param_1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f));
  FUN_14141661e(param_1 + 0x17);
  FUN_14141661e(param_1 + 0xf);
  FUN_144760e21(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
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
                    /* WARNING: Could not recover jumptable at 0x000145d1c1b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d1c1b6 FUN_145d1c1b6 body=458 status=ok
// SIG undefined FUN_145d1c1b6(void)

undefined8 FUN_145d1c1b6(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined2 *puVar8;
  char cVar9;
  undefined8 *puVar10;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  undefined8 *local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140e92164();
  local_68 = &DAT_14c8c2640;
  cVar9 = (0 < DAT_14c8c2b78) + '\x01';
  local_60 = param_3;
  local_58 = param_2;
  local_50 = param_1;
  cVar4 = FUN_141534a4c(&local_68,0,cVar9);
  if (cVar4 != '\0') {
LAB_145d1c37a:
    uVar6 = 1;
    goto LAB_145d1c259;
  }
  if (*(int *)(param_1 + 1) == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*param_1;
  }
  FUN_1446f470e(&local_70,puVar8,0);
  uVar3 = local_70;
  if ((local_70 != 0) &&
     (iVar5 = FUN_144a788f7(local_70 & 0xffffffff), DAT_14c8c2b98 != DAT_14c8c2bc4)) {
    puVar7 = &DAT_14c8c2bc8;
    if (DAT_14c8c2bd0 != (undefined *)0x0) {
      puVar7 = DAT_14c8c2bd0;
    }
    iVar5 = *(int *)(puVar7 + (ulonglong)(DAT_14c8c2bd8 - 1U & iVar5 + (int)(uVar3 >> 0x20)) * 4);
    while (iVar5 != -1) {
      lVar1 = DAT_14c8c2b90 + (longlong)iVar5 * 0x20;
      if (*(ulonglong *)(DAT_14c8c2b90 + (longlong)iVar5 * 0x20) == uVar3) {
        puVar10 = (undefined8 *)(lVar1 + 8);
        if (puVar10 != (undefined8 *)0x0 && lVar1 != 0) {
          iVar5 = *(int *)(lVar1 + 0x10);
          goto joined_r0x000145d1c30b;
        }
        break;
      }
      iVar5 = *(int *)(lVar1 + 0x18);
    }
  }
  goto LAB_145d1c249;
joined_r0x000145d1c30b:
  if (iVar5 < 1) goto LAB_145d1c358;
  puVar2 = (undefined8 *)*puVar10;
  puVar8 = &DAT_149dfb77a;
  if (*(int *)(puVar2 + 1) != 0) {
    puVar8 = (undefined2 *)*puVar2;
  }
  cVar4 = (**(code **)(DAT_14c8c2640 + 0x78))(&DAT_14c8c2640,puVar8);
  if (cVar4 != '\0') {
    FUN_144a787a6(param_3,puVar2);
    goto LAB_145d1c37a;
  }
  FUN_14101da94(puVar10,0);
  FUN_140b12644(puVar10);
  iVar5 = *(int *)(lVar1 + 0x10);
  goto joined_r0x000145d1c30b;
LAB_145d1c358:
  if (iVar5 == 0) {
    FUN_146834740(local_70);
  }
LAB_145d1c249:
  uVar6 = FUN_141534a4c(&local_68,cVar9,*(undefined4 *)(param_2 + 8));
LAB_145d1c259:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 145d1c382 FUN_145d1c382 body=164 status=ok
// SIG undefined FUN_145d1c382(void)

void FUN_145d1c382(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_14a3355d0;
  lVar3 = param_1[0x62];
  if (lVar3 != 0) {
    FUN_145d1c456(lVar3);
    FUN_1400020a8(lVar3);
  }
  if (param_1[0x67] != 0) {
    FUN_1400020a8();
  }
  FUN_145d1c426(param_1[0x65],*(undefined4 *)(param_1 + 0x66));
  if (param_1[0x65] != 0) {
    FUN_1400020a8();
  }
  lVar3 = 0x308;
  do {
    if (*(longlong *)((longlong)param_1 + lVar3) != 0) {
      LOCK();
      puVar1 = (uint *)(*(longlong *)((longlong)param_1 + lVar3) + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar3 = lVar3 + -0x60;
  } while (lVar3 != 8);
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 145d1c426 FUN_145d1c426 body=47 status=ok
// SIG undefined FUN_145d1c426(void)

void FUN_145d1c426(longlong param_1,int param_2)

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



// FUNCTION 145d1c456 FUN_145d1c456 body=78 status=ok
// SIG undefined FUN_145d1c456(void)

void FUN_145d1c456(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  FUN_141474ffa(param_1[1],(int)param_1[2]);
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_1 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 145d1c4b0 FUN_145d1c4b0 body=245 status=ok
// SIG undefined FUN_145d1c4b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_145d1c4b0(undefined8 *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  void *local_48;
  ulonglong uStack_40;
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145d1c5a6();
  *param_1 = &PTR_FUN_14b16af50;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_30 = DAT_14cb7dc28;
  local_28 = DAT_14cb7dc30 + -1;
  if (DAT_14cb7dc30 == 0) {
    local_28 = 0;
  }
  FUN_14475bf92(&local_58);
  _Src = local_48;
  _DAT_14cb7dc38 = 0;
  DAT_14cb7dc40._0_4_ = (undefined4)local_58;
  DAT_14cb7dc40._4_4_ = local_58._4_4_;
  _DAT_14cb7dc48 = (undefined4)uStack_50;
  uRam000000014cb7dc4c = uStack_50._4_4_;
  iVar1 = (int)uStack_40;
  lVar2 = (longlong)(int)uStack_40;
  _DAT_14cb7dc58 = (int)uStack_40;
  if ((int)uStack_40 == 0 && DAT_14cb7dc5c == 0) {
    DAT_14cb7dc5c = 0;
  }
  else {
    FUN_1446dd670(&DAT_14cb7dc50,uStack_40 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb7dc50,_Src,lVar2 * 2);
    }
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d1c5a6 FUN_145d1c5a6 body=32 status=ok
// SIG undefined FUN_145d1c5a6(void)

undefined8 * FUN_145d1c5a6(undefined8 *param_1)

{
  FUN_140b4b170();
  *param_1 = &PTR_FUN_14a8fe810;
  return param_1;
}



// FUNCTION 145d1c5c6 FUN_145d1c5c6 body=84 status=ok
// SIG undefined FUN_145d1c5c6(void)

void FUN_145d1c5c6(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  switchD_143c3d4dc::caseD_1d();
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    local_18 = &local_20;
    local_20 = param_1;
    FUN_145d1c61c();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d1c61c FUN_145d1c61c body=204 status=ok
// SIG undefined FUN_145d1c61c(void)

void FUN_145d1c61c(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar2 = DAT_14cb81c90;
  plVar1 = DAT_14cb81c88;
  lVar5 = (longlong)DAT_14cb81c90;
  iVar4 = DAT_14cb81c90;
  if (lVar5 != 0) {
    iVar4 = 0;
    bVar8 = *DAT_14cb81c88 == *(longlong *)*param_1;
    iVar9 = 0;
    do {
      lVar3 = (longlong)iVar9;
      iVar10 = iVar9;
      lVar7 = lVar3;
      iVar6 = iVar9 + 1;
      if (iVar9 + 1 < iVar2) {
        iVar6 = iVar2;
      }
      do {
        lVar7 = lVar7 + 1;
        iVar11 = iVar6;
        if (lVar5 <= lVar7) break;
        iVar10 = iVar10 + 1;
        iVar11 = iVar10;
      } while (bVar8 == (plVar1[lVar7] == *(longlong *)*param_1));
      if (bVar8 == false) {
        if (iVar4 != iVar9) {
          memmove(plVar1 + iVar4,plVar1 + lVar3,(longlong)(iVar11 - iVar9) << 3);
        }
        iVar4 = iVar4 + (iVar11 - iVar9);
      }
      bVar8 = (bool)(bVar8 ^ 1);
      iVar9 = iVar11;
    } while (lVar7 < lVar5);
  }
  DAT_14cb81c90 = iVar4;
  return;
}



// FUNCTION 145d1c6f4 FUN_145d1c6f4 body=314 status=ok
// SIG undefined FUN_145d1c6f4(void)

void FUN_145d1c6f4(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  ushort uVar4;
  ulonglong uVar5;
  ushort uVar6;
  ulonglong uVar7;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (1 < (int)param_1[1]) {
    lVar1 = 0;
    while( true ) {
      uVar4 = *(ushort *)(*param_1 + lVar1);
      uVar5 = (ulonglong)uVar4;
      uVar6 = *(ushort *)((longlong)&DAT_149e62e78 + lVar1);
      if (uVar4 != uVar6) break;
      if (uVar4 == 0) goto LAB_145d1c7fd;
LAB_145d1c745:
      lVar1 = lVar1 + 2;
    }
    if ((uVar6 | uVar4) < 0x80) {
      uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
      uVar7 = (ulonglong)uVar6;
      uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
      if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar7]) goto LAB_145d1c745;
    }
    if (uVar4 != uVar6) {
      puVar3 = &DAT_149dfb77a;
      if ((int)param_2[1] != 0) {
        puVar3 = (undefined2 *)*param_2;
      }
      FUN_144a2b0a4(param_1,&local_48);
      puVar2 = &DAT_149dfb77a;
      if (local_40 != 0) {
        puVar2 = local_48;
      }
      FUN_140002266(&local_38,L"[nowrap][%s]%s[/nowrap]",puVar2,puVar3);
      if (&local_38 == param_2) {
        if (local_38 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_2 != 0) {
          FUN_1400020a8();
        }
        *param_2 = local_38;
        local_38 = 0;
        *(undefined4 *)(param_2 + 1) = (undefined4)local_30;
        *(undefined4 *)((longlong)param_2 + 0xc) = local_30._4_4_;
        local_30 = 0;
      }
      if (local_48 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_145d1c7fd:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d1c830 FUN_145d1c830 body=40 status=ok
// SIG undefined FUN_145d1c830(void)

undefined8 FUN_145d1c830(undefined8 param_1,int param_2)

{
  FUN_145d1c858();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d1c858 FUN_145d1c858 body=105 status=ok
// SIG undefined FUN_145d1c858(void)

void FUN_145d1c858(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149fbb000;
  FUN_144760e21(param_1[0x1b],*(undefined4 *)(param_1 + 0x1c));
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_145fcabba(param_1 + 0x11);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d1c8ca FUN_145d1c8ca body=137 status=ok
// SIG undefined FUN_145d1c8ca(void)

undefined8 * FUN_145d1c8ca(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14a170910;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    plVar1 = param_1 + 5;
    param_1[8] = &DAT_14c9a16a0;
    param_1[7] = param_1;
    lVar2 = DAT_14c9a16a0;
    while( true ) {
      param_1[5] = lVar2;
      LOCK();
      lVar3 = *(longlong *)param_1[8];
      bVar4 = lVar2 == lVar3;
      if (bVar4) {
        *(longlong *)param_1[8] = (longlong)plVar1;
        lVar3 = lVar2;
      }
      UNLOCK();
      if (bVar4) break;
      param_1[5] = lVar3;
      lVar2 = *(longlong *)param_1[8];
    }
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  return param_1;
}



// FUNCTION 145d1c95e FUN_145d1c95e body=125 status=ok
// SIG undefined FUN_145d1c95e(void)

undefined8 * FUN_145d1c95e(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14a3b80c0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa7b38) {
    FUN_144b3d300(&DAT_14caa7b38);
    if (DAT_14caa7b38 == -1) {
      FUN_1415351f8();
      atexit((_func_5014 *)&LAB_143270ac2);
      _Init_thread_footer(&DAT_14caa7b38);
    }
  }
  return param_1;
}



// FUNCTION 145d1c9e6 FUN_145d1c9e6 body=125 status=ok
// SIG undefined FUN_145d1c9e6(void)

undefined8 * FUN_145d1c9e6(undefined8 *param_1)

{
  FUN_145c60be4();
  *param_1 = &PTR_FUN_14a3d66d0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa7c28) {
    FUN_144b3d300(&DAT_14caa7c28);
    if (DAT_14caa7c28 == -1) {
      FUN_141535292();
      atexit((_func_5014 *)&LAB_143270b26);
      _Init_thread_footer(&DAT_14caa7c28);
    }
  }
  return param_1;
}



// FUNCTION 145d1ca6e FUN_145d1ca6e body=136 status=ok
// SIG undefined FUN_145d1ca6e(void)

void FUN_145d1ca6e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  longlong *plVar5;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    puVar3 = (uint *)(*(longlong *)(param_1 + 0x30) + 8);
    uVar4 = *puVar3;
    *puVar3 = *puVar3 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  plVar5 = *(longlong **)(param_1 + 0x20);
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
  plVar5 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000145d1cacf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d1cafe FUN_145d1cafe body=137 status=ok
// SIG undefined FUN_145d1cafe(void)

undefined8 * FUN_145d1cafe(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_144a0768c(param_1,uVar1);
  *param_1 = &PTR_FUN_14a75db50;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0x3ff0000000000000;
  param_1[8] = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 9) = 1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0x3ff0000000000000;
  param_1[0xd] = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 0xe) = 1;
  param_1[0xf] = 0x3ff0000000000000;
  param_1[0x10] = 0x3ff0000000000000;
  param_1[0x11] = 0x3ff0000000000000;
  param_1[0x12] = 0x3ff0000000000000;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  return param_1;
}



// FUNCTION 145d1cb92 FUN_145d1cb92 body=134 status=ok
// SIG undefined FUN_145d1cb92(void)

undefined8 * FUN_145d1cb92(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(uint *)(param_1 + 9) = (*(uint *)(param_1 + 9) & 0xfffffffc) + 1;
  *param_1 = &PTR_FUN_14ac0a330;
  param_1[10] = 0;
  lVar1 = FUN_1411e5f92();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[10] = lVar1;
  lVar1 = FUN_145943f0a();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[8] = lVar1;
  return param_1;
}



// FUNCTION 145d1cc24 FUN_145d1cc24 body=134 status=ok
// SIG undefined FUN_145d1cc24(void)

undefined8 * FUN_145d1cc24(undefined8 *param_1)

{
  FUN_1400ead26();
  *param_1 = &PTR_FUN_14b056150;
  param_1[5] = &PTR_LAB_14b056730;
  param_1[6] = &PTR_LAB_14b056770;
  param_1[0x55] = 0x457a000043fa0000;
  param_1[0x56] = 0x4348000044160000;
  param_1[0x57] = 0x4348000040a00000;
  *(undefined4 *)(param_1 + 0x58) = 0x42c80000;
  param_1[0x5f] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xfd;
  return param_1;
}



// FUNCTION 145d1ccb6 FUN_145d1ccb6 body=134 status=ok
// SIG undefined FUN_145d1ccb6(void)

undefined8 * FUN_145d1ccb6(undefined8 *param_1)

{
  char cVar1;
  
  FUN_140e327bc();
  *param_1 = &PTR_FUN_14b216e00;
  param_1[0x1f] = &PTR_FUN_14b217170;
  param_1[0x20] = &PTR_FUN_14b2171a0;
  *(undefined1 *)(param_1 + 0x1b) = 1;
  if (((*(uint *)(param_1 + 1) >> 9 & 1) != 0) || (cVar1 = FUN_145c40fca(param_1,1), cVar1 != '\0'))
  {
    param_1[0x13] = 2;
    param_1[0x14] = 2;
  }
  *(undefined1 *)((longlong)param_1 + 0x184) = 1;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  *(undefined2 *)(param_1 + 0xb) = 0x201;
  return param_1;
}



// FUNCTION 145d1cd3c FUN_145d1cd3c body=38 status=ok
// SIG undefined FUN_145d1cd3c(void)

undefined8 FUN_145d1cd3c(undefined8 param_1,int param_2)

{
  FUN_145d1cd62();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d1cd62 FUN_145d1cd62 body=101 status=ok
// SIG undefined FUN_145d1cd62(void)

void FUN_145d1cd62(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14b3fd920;
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_140292ea0(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145d1cdc8(param_1 + 2);
  return;
}



// FUNCTION 145d1cdc8 FUN_145d1cdc8 body=55 status=ok
// SIG undefined FUN_145d1cdc8(void)

void FUN_145d1cdc8(longlong *param_1)

{
  FUN_145d1ce00(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d1ce00 FUN_145d1ce00 body=385 status=ok
// SIG undefined FUN_145d1ce00(void)

void FUN_145d1ce00(longlong *param_1,int param_2)

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
      FUN_1488401c4(*local_70 + (longlong)iStack_54 * 0x120 + 0x10);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140e8b234(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d1cf82 FUN_145d1cf82 body=40 status=ok
// SIG undefined FUN_145d1cf82(void)

undefined8 FUN_145d1cf82(undefined8 param_1,int param_2)

{
  FUN_145d1cfaa();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d1cfaa FUN_145d1cfaa body=105 status=ok
// SIG undefined FUN_145d1cfaa(void)

void FUN_145d1cfaa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5484d0;
  FUN_1401b9920(param_1[0x29],*(undefined4 *)(param_1 + 0x2a));
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_1401b9920(param_1[0x27],*(undefined4 *)(param_1 + 0x28));
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_140ee3dc0(param_1);
  return;
}



// FUNCTION 145d1d014 FUN_145d1d014 body=68 status=ok
// SIG undefined FUN_145d1d014(void)

void FUN_145d1d014(longlong param_1)

{
  FUN_145d1d058(*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x88));
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(int *)(param_1 + 0x8c) == 0) {
    return;
  }
  FUN_148f9b896(param_1 + 0x80);
  return;
}



// FUNCTION 145d1d058 FUN_145d1d058 body=77 status=ok
// SIG undefined FUN_145d1d058(void)

void FUN_145d1d058(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145d1d0ae FUN_145d1d0ae body=137 status=ok
// SIG undefined FUN_145d1d0ae(void)

undefined8 * FUN_145d1d0ae(undefined8 *param_1)

{
  FUN_1410832cc();
  *param_1 = &PTR_FUN_14bc396c0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_14020fad6(param_1 + 0xc,L"FocalLength");
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_14020fad6(param_1 + 0xe,L"SensorWidth");
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_14020fad6(param_1 + 0x10,L"SensorHeight");
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_14020fad6(param_1 + 0x12,L"EnableDepthOfField");
  return param_1;
}



// FUNCTION 145d1d140 FUN_145d1d140 body=136 status=ok
// SIG undefined FUN_145d1d140(void)

undefined8 * FUN_145d1d140(undefined8 *param_1)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1410832cc();
  *param_1 = &PTR_FUN_14bc480b0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_140056680(local_30,L"VariantSetUids");
  FUN_1410835a0(param_1 + 0xc,param_1 + 5,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d1d1ca FUN_145d1d1ca body=103 status=ok
// SIG undefined FUN_145d1d1ca(void)

void FUN_145d1d1ca(longlong *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = *(undefined8 *)(param_2 + 8);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_28 = param_2[4];
  uStack_24 = param_2[5];
  uStack_20 = param_2[6];
  uStack_1c = param_2[7];
  cVar1 = (**(code **)(*param_1 + 0x600))();
  if (cVar1 != '\0') {
    FUN_14153532c(param_1,&local_38);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d1d232 FUN_145d1d232 body=194 status=ok
// SIG undefined FUN_145d1d232(void)

void FUN_145d1d232(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [64];
  longlong local_88;
  undefined4 local_80;
  undefined1 local_78 [64];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  (**(code **)(*param_1 + 0x1c8))(param_1,local_c8);
  FUN_145d1d460(local_c8,local_78,param_2);
  (**(code **)(*param_1 + 0x1a8))(param_1,local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(local_78);
  local_80 = 0;
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(local_c8);
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d1d2f6 FUN_145d1d2f6 body=322 status=ok
// SIG undefined FUN_145d1d2f6(void)

undefined8 * FUN_145d1d2f6(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  longlong local_60;
  int local_58;
  undefined1 local_4c [4];
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  plVar2 = (longlong *)FUN_141535576(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10));
  if (plVar2 != (longlong *)0x0) {
    cVar1 = FUN_140d60302(param_1 + 0x20);
    if (cVar1 != '\0') {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x18))(plVar2,param_1 + 0x20);
      (**(code **)(*plVar2 + 0x108))(plVar2,&local_60);
      if ((longlong)local_58 == 0) {
        local_58 = 0;
      }
      else {
        lVar3 = local_60 + 0x10;
        lVar4 = (longlong)local_58 * 0x60;
        do {
          FUN_141478050(param_1,local_48,lVar3);
          FUN_140e830ae(param_2,local_4c,local_48,0);
          if (local_48[0] != 0) {
            FUN_1400020a8();
          }
          lVar3 = lVar3 + 0x60;
          lVar4 = lVar4 + -0x60;
        } while (lVar4 != 0);
      }
      FUN_145d1d439(local_60,local_58);
      if (local_60 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145d1d439 FUN_145d1d439 body=38 status=ok
// SIG undefined FUN_145d1d439(void)

void FUN_145d1d439(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_141478002(param_1);
    param_1 = param_1 + 0x60;
  }
  return;
}



// FUNCTION 145d1d460 FUN_145d1d460 body=500 status=ok
// SIG undefined FUN_145d1d460(void)

undefined8 * FUN_145d1d460(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined2 *puVar6;
  uint uVar7;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  uVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar7 != 0) {
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar7);
    }
    FUN_140e83416(param_2,uVar7);
    iVar3 = 1;
    if (3 < uVar7) {
      uVar7 = (uVar7 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((*(int *)(param_2 + 9) == 0) || (*(int *)(param_2 + 9) < iVar3)) {
      *(int *)(param_2 + 9) = iVar3;
      FUN_14482b9e8(param_2);
    }
  }
  local_60 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_68);
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = param_1;
  if (iStack_54 < (int)local_60[3]) {
    do {
      lVar1 = *local_90;
      lVar4 = (longlong)iStack_74;
      iVar3 = *(int *)(lVar1 + 8 + lVar4 * 0x18);
      puVar6 = &DAT_149dfb77a;
      if (iVar3 != 0) {
        puVar6 = *(undefined2 **)(lVar1 + lVar4 * 0x18);
      }
      iVar5 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar5 = 0;
      }
      uVar2 = FUN_144a49b4a(iVar5,puVar6);
      iVar3 = FUN_1456cf568(param_3,uVar2,lVar1 + lVar4 * 0x18);
      if (iVar3 == -1) {
        FUN_14482b35e(param_2,&local_68,(longlong)iStack_74 * 0x18 + *local_90,0);
      }
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (iStack_74 < (int)local_80[3]);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145d1d656 FUN_145d1d656 body=266 status=ok
// SIG undefined FUN_145d1d656(void)

void FUN_145d1d656(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_a8 [40];
  undefined8 *local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = param_1 + 0x78;
  lVar2 = param_1 + 0x88;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  local_58 = param_2;
  uStack_48 = lVar2;
  if (*(int *)(param_1 + 0xa0) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar3 = *(int *)(param_1 + 0xa0);
  }
  uStack_60 = CONCAT44(uStack_34,uStack_38);
  local_68 = local_40;
  iStack_64 = iStack_3c;
  local_78._0_4_ = (undefined4)local_50;
  local_78._4_4_ = local_50._4_4_;
  uStack_70 = (undefined4)uStack_48;
  uStack_6c = uStack_48._4_4_;
  local_80 = (undefined8 *)lVar1;
  if ((iStack_3c != iVar3) || (uStack_48 != lVar2)) {
    do {
      do {
        local_68 = local_68 & ~local_78._4_4_;
        FUN_1449c0562(&local_78);
      } while (iStack_64 != iVar3);
    } while ((CONCAT44(uStack_6c,uStack_70) != lVar2) || (local_80 != (undefined8 *)lVar1));
  }
  local_80 = &local_58;
  local_78 = param_3;
  FUN_145d1d762(lVar1,&local_50);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d1d762 FUN_145d1d762 body=332 status=ok
// SIG undefined FUN_145d1d762(void)

undefined4 * FUN_145d1d762(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145d1d93a(param_1,local_48);
  puVar1 = (undefined2 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  *(undefined2 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_145d1d8b0(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)(local_40 + 2) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_145d1da22(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d1d8b0 FUN_145d1d8b0 body=137 status=ok
// SIG undefined FUN_145d1d8b0(void)

undefined8 FUN_145d1d8b0(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x14);
        if (*plVar2 == *param_3) {
          lVar1 = *param_3;
          *(int *)(plVar2 + 1) = (int)param_3[1];
          *plVar2 = lVar1;
          FUN_1475806fe(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)((longlong)plVar2 + 0xc);
      } while (iVar3 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145d1d93a FUN_145d1d93a body=231 status=ok
// SIG undefined FUN_145d1d93a(void)

int * FUN_145d1d93a(longlong *param_1,int *param_2)

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
      FUN_140171ad2(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x14);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x14) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 145d1da22 FUN_145d1da22 body=482 status=ok
// SIG undefined FUN_145d1da22(void)

void FUN_145d1da22(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x14);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x10 + lVar6 * 0x14) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xc + lVar6 * 0x14) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 145d1dc06 FUN_145d1dc06 body=604 status=ok
// SIG undefined FUN_145d1dc06(void)

void FUN_145d1dc06(longlong param_1,char *param_2)

{
  char *pcVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 *local_130;
  undefined8 local_128;
  undefined8 local_118;
  undefined1 local_110 [48];
  longlong local_e0;
  longlong *local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined2 local_50;
  undefined8 local_4c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (param_2[0x79] == '\x01') {
    pcVar1 = param_2 + 0x18;
    cVar5 = FUN_144a87d38(pcVar1);
    if (cVar5 != '\0') {
      cVar5 = FUN_1404fa388(param_2 + 0x80);
      if ((cVar5 == '\0') && (*(longlong **)(param_1 + 0xb20) != (longlong *)0x0)) {
        cVar5 = (**(code **)(**(longlong **)(param_1 + 0xb20) + 0x700))();
        if (cVar5 == '\0') {
          cVar5 = FUN_1456e2be6(pcVar1);
          if (cVar5 == '\0') {
            local_118 = 0;
          }
          else {
            FUN_1438a4f78(pcVar1,&local_118);
          }
          local_c0 = *(undefined8 *)(param_2 + 0x28);
          FUN_1400021e4(&local_c0,&local_e0);
          lVar6 = FUN_1456e2bea(*(undefined8 *)(param_1 + 0xb20));
          if (lVar6 != 0) {
            local_138 = 0;
            FUN_145aa6c7a(lVar6,&local_e0,local_118,1);
          }
          if (local_e0 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*param_2 == '\x01') {
            local_130 = &local_b8;
            local_b8 = 0;
            uStack_b0 = 0;
            local_a8 = 0;
            uStack_a4 = 0;
            uStack_a0 = 0;
            uStack_9c = 0x3ff00000;
            local_98 = 0;
            uStack_90 = 0;
            local_88 = 0;
            uStack_80 = 0;
            local_78 = 0;
            uStack_74 = 0x3ff00000;
            uStack_70 = 0;
            uStack_6c = 0x3ff00000;
            local_68 = 0x3ff0000000000000;
            uStack_60 = 0;
            local_58 = 0x3f800000;
            local_50 = 0;
            local_4c = 0;
            local_128 = 0;
            local_138 = CONCAT71(local_138._1_7_,1);
            FUN_141504178(&local_e0,*(undefined8 *)(param_1 + 0xb20),pcVar1,param_2 + 4);
          }
          else {
            uVar3 = *(undefined8 *)(param_2 + 0xc);
            FUN_1412bd664(local_110,pcVar1);
            local_138 = 0;
            FUN_140f7fb5b(&local_e0,*(undefined8 *)(param_1 + 0xb20),local_110,uVar3);
          }
          if ((longlong *)(param_2 + 0x80) != &local_e0) {
            *(longlong *)(param_2 + 0x80) = local_e0;
            local_e0 = 0;
            plVar4 = *(longlong **)(param_2 + 0x88);
            *(longlong **)(param_2 + 0x88) = local_d8;
            local_d8 = (longlong *)0x0;
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar4 + 0x10))();
              }
            }
          }
          *(undefined4 *)(param_2 + 0x90) = local_d0;
          *(undefined4 *)(param_2 + 0x94) = uStack_cc;
          *(undefined4 *)(param_2 + 0x98) = uStack_c8;
          *(undefined4 *)(param_2 + 0x9c) = uStack_c4;
          if (local_d8 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)local_d8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_d8 + 0x10))();
            }
          }
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d1de64 FUN_145d1de64 body=147 status=ok
// SIG undefined FUN_145d1de64(void)

void FUN_145d1de64(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  *(undefined1 *)(param_1 + 0x10b6) = 1;
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (lVar1 != 0) {
    lVar3 = FUN_144a2f878();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      FUN_1447f69b6(lVar1 + 0x6060);
      if (*(char *)(param_1 + 0x178) != '\x03') {
        uVar2 = FUN_1403ae46b();
        FUN_141020220(lVar1,uVar2);
        FUN_1447cd2ec(lVar1 + 0x6028,0);
        FUN_1447f69b6(lVar1 + 0x6048);
      }
    }
  }
  FUN_141535920(param_1,param_2);
  return;
}



// FUNCTION 145d1def8 FUN_145d1def8 body=171 status=ok
// SIG undefined FUN_145d1def8(void)

void FUN_145d1def8(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  code *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14573061a();
  if (param_2 != 0) {
    lVar1 = FUN_1407f4df8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_38 = FUN_148ebdc7c;
      local_30 = 0;
      FUN_145d1dfa4(param_1,param_2,param_1,&local_38);
      local_38 = FUN_140de0f20;
      local_30 = 0;
      FUN_145d1e0be(param_1,param_2,param_1,&local_38);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d1dfa4 FUN_145d1dfa4 body=280 status=ok
// SIG undefined FUN_145d1dfa4(void)

void FUN_145d1dfa4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  code **local_48;
  code *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *(undefined4 *)(param_4 + 1);
  local_40 = (code *)*param_4;
  plVar1 = (longlong *)(param_1 + 0x138);
  uVar3 = FUN_141535968(param_2,param_3);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  local_40 = DAT_14cb92bf8;
  lVar4 = FUN_14063edce(&DAT_14cb91658,&local_40);
  if (lVar4 != 0) {
    local_40 = FUN_140ed4b7e;
    local_38 = 0;
    local_48 = &local_40;
    lVar4 = FUN_14063efbe(param_2,lVar4,1,param_1);
    uVar3 = *(undefined4 *)(lVar4 + 8);
    iVar2 = *(int *)(param_1 + 0x140);
    *(uint *)(param_1 + 0x140) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
      FUN_1447808da(plVar1,iVar2);
    }
    *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d1e0be FUN_145d1e0be body=340 status=ok
// SIG undefined FUN_145d1e0be(void)

void FUN_145d1e0be(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = *(undefined4 *)(param_4 + 1);
  uVar3 = *param_4;
  lVar1 = param_1 + 0x138;
  local_58 = uVar3;
  local_50 = uVar5;
  uVar4 = FUN_1415359f0(param_2,2);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(lVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar4;
  local_58 = uVar3;
  local_50 = uVar5;
  uVar4 = FUN_1415359f0(param_2,8,param_3);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(lVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar4;
  local_58 = uVar3;
  local_50 = uVar5;
  uVar5 = FUN_1415359f0(param_2,0x10,param_3);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(lVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar5;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_1411a3386(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d1e214 FUN_145d1e214 body=287 status=ok
// SIG undefined FUN_145d1e214(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145d1e214(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ad010) {
    FUN_144b3d300(&DAT_14c9ad010);
    if (DAT_14c9ad010 == -1) {
      FUN_145d1e334();
      FUN_140db5666(&DAT_14c9acf68,2,&DAT_14c9acf00,
                    L"TBasePassPSFSelfShadowedTranslucencyPolicyForceVelocity",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712b07c,
                    FUN_14712b054,FUN_141747032,&LAB_14712b050,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9acf68 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c26b);
      _Init_thread_footer(&DAT_14c9ad010);
    }
  }
  return &DAT_14c9acf68;
}



// FUNCTION 145d1e334 FUN_145d1e334 body=205 status=ok
// SIG undefined FUN_145d1e334(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d1e334(void)

{
  if ((DAT_14c9acf67 & 2) == 0) {
    DAT_14c9acf67 = DAT_14c9acf67 | 2;
    _DAT_14c9acf08 = L"TBasePassPSFSelfShadowedTranslucencyPolicyForceVelocity";
    _DAT_14c9acf20 = FUN_146826540;
    _DAT_14c9acf28 = FUN_146825d77;
    _DAT_14c9acf30 = FUN_146825fd6;
    _DAT_14c9acf38 = FUN_1407e02ea;
    _DAT_14c9acf40 = FUN_146826273;
    _DAT_14c9acf18 = FUN_14712b016;
    _DAT_14c9acf58 = 0xffffffff00000110;
    _DAT_14c9acf60 = 8;
    DAT_14c9acf64 = 0;
    _DAT_14c9acf48 = &LAB_14712b04c;
    FUN_145d1e402();
    FUN_1407e00cc(&DAT_14c9acf00);
    return;
  }
  return;
}



// FUNCTION 145d1e402 FUN_145d1e402 body=133 status=ok
// SIG undefined FUN_145d1e402(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d1e402(void)

{
  _DAT_14c9b9108 = L"BASE";
  DAT_14c9b9132 = 4;
  FUN_145c860b2();
  _DAT_14c9b9118 = DAT_14c9acf10;
  _DAT_14c9b9110 = &DAT_14c9b8e20;
  _DAT_14c9b9120 = &LAB_14682652b;
  DAT_14c9acf10 = &DAT_14c9b9108;
  DAT_14c9acf65 = DAT_14c9acf65 + '\x01';
  _DAT_14c9b9128 = 0x100000000;
  if (DAT_14c9b8e84 != '\0') {
    DAT_14c9acf66 = DAT_14c9acf66 + '\x01';
  }
  return;
}



// FUNCTION 145d1e488 FUN_145d1e488 body=287 status=ok
// SIG undefined FUN_145d1e488(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145d1e488(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ad5d8) {
    FUN_144b3d300(&DAT_14c9ad5d8);
    if (DAT_14c9ad5d8 == -1) {
      FUN_145d1e5a8();
      FUN_140db5666(&DAT_14c9ad530,2,&DAT_14c9ad4c8,
                    L"TBasePassCSFSelfShadowedTranslucencyPolicySkylight",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainCS",5,1,FUN_14712b3d8,
                    FUN_14712b3b0,FUN_1417480b6,&LAB_14712b3ac,&LAB_14712ac0c,&LAB_14712ac08,0x128,0
                   );
      _DAT_14c9ad530 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c2a7);
      _Init_thread_footer(&DAT_14c9ad5d8);
    }
  }
  return &DAT_14c9ad530;
}



// FUNCTION 145d1e5a8 FUN_145d1e5a8 body=205 status=ok
// SIG undefined FUN_145d1e5a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d1e5a8(void)

{
  if ((DAT_14c9ad52f & 2) == 0) {
    DAT_14c9ad52f = DAT_14c9ad52f | 2;
    _DAT_14c9ad4d0 = L"TBasePassCSFSelfShadowedTranslucencyPolicySkylight";
    _DAT_14c9ad4e8 = FUN_146826540;
    _DAT_14c9ad4f0 = FUN_146825d77;
    _DAT_14c9ad4f8 = FUN_146825fd6;
    _DAT_14c9ad500 = FUN_1407e02ea;
    _DAT_14c9ad508 = FUN_146826273;
    _DAT_14c9ad4e0 = FUN_14712b372;
    _DAT_14c9ad520 = 0xffffffff00000128;
    _DAT_14c9ad528 = 8;
    DAT_14c9ad52c = 0;
    _DAT_14c9ad510 = &LAB_14712b3a8;
    FUN_145d1e676();
    FUN_1407e00cc(&DAT_14c9ad4c8);
    return;
  }
  return;
}



// FUNCTION 145d1e676 FUN_145d1e676 body=133 status=ok
// SIG undefined FUN_145d1e676(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d1e676(void)

{
  _DAT_14c9b9298 = L"BASE";
  DAT_14c9b92c2 = 4;
  FUN_145d1e6fc();
  _DAT_14c9b92a8 = DAT_14c9ad4d8;
  _DAT_14c9b92a0 = &DAT_14c9b92c8;
  _DAT_14c9b92b0 = &LAB_14682652b;
  DAT_14c9ad4d8 = &DAT_14c9b9298;
  DAT_14c9ad52d = DAT_14c9ad52d + '\x01';
  _DAT_14c9b92b8 = 0x100000000;
  if (DAT_14c9b932c != '\0') {
    DAT_14c9ad52e = DAT_14c9ad52e + '\x01';
  }
  return;
}



// FUNCTION 145d1e6fc FUN_145d1e6fc body=200 status=ok
// SIG undefined FUN_145d1e6fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d1e6fc(void)

{
  if ((DAT_14c9b932f & 2) != 0) {
    return;
  }
  DAT_14c9b932f = DAT_14c9b932f | 2;
  _DAT_14c9b92d0 = L"TBasePassComputeShaderBaseType";
  _DAT_14c9b92e8 = FUN_146826540;
  _DAT_14c9b92f0 = FUN_146825d77;
  _DAT_14c9b92f8 = FUN_146825fd6;
  _DAT_14c9b9300 = FUN_1407e02ea;
  _DAT_14c9b9308 = FUN_146826273;
  _DAT_14c9b92e0 = FUN_14713bf86;
  _DAT_14c9b9320 = 0xffffffff00000128;
  _DAT_14c9b9328 = 8;
  DAT_14c9b932c = 0;
  _DAT_14c9b9310 = &LAB_14713bfbc;
  FUN_145d1e7c4();
  FUN_1407e00cc(&DAT_14c9b92c8);
  return;
}



// FUNCTION 145d1e7c4 FUN_145d1e7c4 body=133 status=ok
// SIG undefined FUN_145d1e7c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d1e7c4(void)

{
  _DAT_14c9b9330 = L"BASE";
  DAT_14c9b935a = 4;
  FUN_145d1e84a();
  _DAT_14c9b9340 = DAT_14c9b92d8;
  _DAT_14c9b9338 = &DAT_14c9b9360;
  _DAT_14c9b9348 = &LAB_14682652b;
  DAT_14c9b92d8 = &DAT_14c9b9330;
  DAT_14c9b932d = DAT_14c9b932d + '\x01';
  _DAT_14c9b9350 = 0x100000000;
  if (DAT_14c9b93c4 != '\0') {
    DAT_14c9b932e = DAT_14c9b932e + '\x01';
  }
  return;
}



// FUNCTION 145d1e84a FUN_145d1e84a body=210 status=ok
// SIG undefined FUN_145d1e84a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d1e84a(void)

{
  if ((DAT_14c9b93c7 & 2) == 0) {
    DAT_14c9b93c7 = DAT_14c9b93c7 | 2;
    _DAT_14c9b9368 = L"TBasePassComputeShaderPolicyParamType";
    _DAT_14c9b9380 = FUN_146826540;
    _DAT_14c9b9388 = FUN_146825d77;
    _DAT_14c9b9390 = FUN_146825fd6;
    _DAT_14c9b9398 = FUN_1407e02ea;
    _DAT_14c9b93a0 = FUN_146826273;
    _DAT_14c9b9378 = FUN_14713bfc0;
    _DAT_14c9b93b8 = 0xffffffff00000128;
    _DAT_14c9b93c0 = 8;
    DAT_14c9b93c4 = 0;
    _DAT_14c9b93a8 = &LAB_14713bff6;
    FUN_145d1e91c();
    FUN_145d1ef32();
    FUN_1407e00cc(&DAT_14c9b9360);
    return;
  }
  return;
}



// FUNCTION 145d1e91c FUN_145d1e91c body=121 status=ok
// SIG undefined FUN_145d1e91c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d1e91c(void)

{
  FUN_145d1e996();
  _DAT_14c9b93c8 = L"ReflectionCaptureBuffer";
  DAT_14c9b93f2 = FUN_140850cc5();
  _DAT_14c9b93d0 = FUN_14106a12a();
  _DAT_14c9b93e0 = &LAB_14682652b;
  _DAT_14c9b93e8 = 0x10000010a;
  _DAT_14c9b93f0 = 0;
  _DAT_14c9b93d8 = DAT_14c9b9370;
  DAT_14c9b9370 = &DAT_14c9b93c8;
  return;
}



// FUNCTION 145d1e996 FUN_145d1e996 body=121 status=ok
// SIG undefined FUN_145d1e996(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d1e996(void)

{
  FUN_145d1ea10();
  _DAT_14c9b93f8 = L"ShadingOutputsParam";
  DAT_14c9b9422 = FUN_140850cc5();
  _DAT_14c9b9400 = FUN_14106a12a();
  _DAT_14c9b9410 = &LAB_14682652b;
  _DAT_14c9b9418 = 0x10000010c;
  _DAT_14c9b9420 = 0;
  _DAT_14c9b9408 = DAT_14c9b9370;
  DAT_14c9b9370 = &DAT_14c9b93f8;
  return;
}



// FUNCTION 145d1ea10 FUN_145d1ea10 body=121 status=ok
// SIG undefined FUN_145d1ea10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d1ea10(void)

{
  FUN_145d1ea8a();
  _DAT_14c9b9428 = L"ViewRectParam";
  DAT_14c9b9452 = FUN_140850cc5();
  _DAT_14c9b9430 = FUN_140ec6960();
  _DAT_14c9b9440 = &LAB_14682652b;
  _DAT_14c9b9448 = 0x10000010e;
  _DAT_14c9b9450 = 0;
  _DAT_14c9b9438 = DAT_14c9b9370;
  DAT_14c9b9370 = &DAT_14c9b9428;
  return;
}



// FUNCTION 145d1ea8a FUN_145d1ea8a body=121 status=ok
// SIG undefined FUN_145d1ea8a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d1ea8a(void)

{
  FUN_145d1eb04();
  _DAT_14c9b9458 = L"PassDataParam";
  DAT_14c9b9482 = FUN_140850cc5();
  _DAT_14c9b9460 = FUN_140ec6960();
  _DAT_14c9b9470 = &LAB_14682652b;
  _DAT_14c9b9478 = 0x100000114;
  _DAT_14c9b9480 = 0;
  _DAT_14c9b9468 = DAT_14c9b9370;
  DAT_14c9b9370 = &DAT_14c9b9458;
  return;
}



// FUNCTION 145d1eb04 FUN_145d1eb04 body=121 status=ok
// SIG undefined FUN_145d1eb04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d1eb04(void)

{
  FUN_145d1eb7e();
  _DAT_14c9b9488 = L"Target0";
  DAT_14c9b94b2 = FUN_140850cc5();
  _DAT_14c9b9490 = FUN_1410b9266();
  _DAT_14c9b94a0 = &LAB_14682652b;
  _DAT_14c9b94a8 = 0x10000011a;
  _DAT_14c9b94b0 = 0;
  _DAT_14c9b9498 = DAT_14c9b9370;
  DAT_14c9b9370 = &DAT_14c9b9488;
  return;
}



// FUNCTION 145d1eb7e FUN_145d1eb7e body=121 status=ok
// SIG undefined FUN_145d1eb7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d1eb7e(void)

{
  FUN_145d1ebf8();
  _DAT_14c9b94b8 = L"Target1";
  DAT_14c9b94e2 = FUN_140850cc5();
  _DAT_14c9b94c0 = FUN_1410b9266();
  _DAT_14c9b94d0 = &LAB_14682652b;
  _DAT_14c9b94d8 = 0x10000011b;
  _DAT_14c9b94e0 = 0;
  _DAT_14c9b94c8 = DAT_14c9b9370;
  DAT_14c9b9370 = &DAT_14c9b94b8;
  return;
}



// FUNCTION 145d1ebf8 FUN_145d1ebf8 body=121 status=ok
// SIG undefined FUN_145d1ebf8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d1ebf8(void)

{
  FUN_145d1ec72();
  _DAT_14c9b94e8 = L"Target2";
  DAT_14c9b9512 = FUN_140850cc5();
  _DAT_14c9b94f0 = FUN_1410b9266();
  _DAT_14c9b9500 = &LAB_14682652b;
  _DAT_14c9b9508 = 0x10000011c;
  _DAT_14c9b9510 = 0;
  _DAT_14c9b94f8 = DAT_14c9b9370;
  DAT_14c9b9370 = &DAT_14c9b94e8;
  return;
}



// FUNCTION 145d1ec72 FUN_145d1ec72 body=121 status=ok
// SIG undefined FUN_145d1ec72(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d1ec72(void)

{
  FUN_145d1ecec();
  _DAT_14c9b9518 = L"Target3";
  DAT_14c9b9542 = FUN_140850cc5();
  _DAT_14c9b9520 = FUN_1410b9266();
  _DAT_14c9b9530 = &LAB_14682652b;
  _DAT_14c9b9538 = 0x10000011d;
  _DAT_14c9b9540 = 0;
  _DAT_14c9b9528 = DAT_14c9b9370;
  DAT_14c9b9370 = &DAT_14c9b9518;
  return;
}



// FUNCTION 145d1ecec FUN_145d1ecec body=121 status=ok
// SIG undefined FUN_145d1ecec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d1ecec(void)

{
  FUN_145d1ed66();
  _DAT_14c9b9548 = L"Target4";
  DAT_14c9b9572 = FUN_140850cc5();
  _DAT_14c9b9550 = FUN_1410b9266();
  _DAT_14c9b9560 = &LAB_14682652b;
  _DAT_14c9b9568 = 0x10000011e;
  _DAT_14c9b9570 = 0;
  _DAT_14c9b9558 = DAT_14c9b9370;
  DAT_14c9b9370 = &DAT_14c9b9548;
  return;
}



// FUNCTION 145d1ed66 FUN_145d1ed66 body=121 status=ok
// SIG undefined FUN_145d1ed66(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d1ed66(void)

{
  FUN_145d1ede0();
  _DAT_14c9b9578 = L"Target5";
  DAT_14c9b95a2 = FUN_140850cc5();
  _DAT_14c9b9580 = FUN_1410b9266();
  _DAT_14c9b9590 = &LAB_14682652b;
  _DAT_14c9b9598 = 0x10000011f;
  _DAT_14c9b95a0 = 0;
  _DAT_14c9b9588 = DAT_14c9b9370;
  DAT_14c9b9370 = &DAT_14c9b9578;
  return;
}



// FUNCTION 145d1ede0 FUN_145d1ede0 body=121 status=ok
// SIG undefined FUN_145d1ede0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d1ede0(void)

{
  FUN_145d1ee5a();
  _DAT_14c9b95a8 = L"Target6";
  DAT_14c9b95d2 = FUN_140850cc5();
  _DAT_14c9b95b0 = FUN_1410b9266();
  _DAT_14c9b95c0 = &LAB_14682652b;
  _DAT_14c9b95c8 = 0x100000120;
  _DAT_14c9b95d0 = 0;
  _DAT_14c9b95b8 = DAT_14c9b9370;
  DAT_14c9b9370 = &DAT_14c9b95a8;
  return;
}



// FUNCTION 145d1ee5a FUN_145d1ee5a body=216 status=ok
// SIG undefined FUN_145d1ee5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d1ee5a(void)

{
  _DAT_14c9b9608 = L"Targets";
  DAT_14c9b9632 = FUN_140850cc5();
  _DAT_14c9b9610 = FUN_1410b9266();
  _DAT_14c9b9620 = &LAB_14682652b;
  _DAT_14c9b9628 = 0x100000122;
  _DAT_14c9b9630 = 0;
  _DAT_14c9b9618 = DAT_14c9b9370;
  DAT_14c9b9370 = &DAT_14c9b9608;
  _DAT_14c9b95d8 = L"Target7";
  DAT_14c9b9602 = FUN_140850cc5();
  _DAT_14c9b95e0 = FUN_1410b9266();
  _DAT_14c9b95f0 = &LAB_14682652b;
  _DAT_14c9b95f8 = 0x100000121;
  _DAT_14c9b9600 = 0;
  _DAT_14c9b95e8 = DAT_14c9b9370;
  DAT_14c9b9370 = &DAT_14c9b95d8;
  return;
}



// FUNCTION 145d1ef32 FUN_145d1ef32 body=235 status=ok
// SIG undefined FUN_145d1ef32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d1ef32(void)

{
  _DAT_14c9b9638 = L"BASE";
  DAT_14c9b9662 = 4;
  FUN_145d1f01e();
  _DAT_14c9b9648 = DAT_14c9b9370;
  _DAT_14c9b9640 = &DAT_14c9b9668;
  _DAT_14c9b9650 = &LAB_14682652b;
  DAT_14c9b9370 = &DAT_14c9b9638;
  DAT_14c9b93c5 = DAT_14c9b93c5 + '\x01';
  _DAT_14c9b9658 = &DAT_100000108;
  if (DAT_14c9b96cc != '\0') {
    DAT_14c9b93c6 = DAT_14c9b93c6 + '\x01';
  }
  _DAT_14c9b9700 = L"BASE";
  DAT_14c9b972a = 4;
  _DAT_14c9b9708 = FUN_141092e92();
  _DAT_14c9b9710 = DAT_14c9b9370;
  _DAT_14c9b9718 = &LAB_14682652b;
  DAT_14c9b9370 = &DAT_14c9b9700;
  DAT_14c9b93c5 = DAT_14c9b93c5 + '\x01';
  _DAT_14c9b9720 = 0x100000000;
  if (*(char *)(_DAT_14c9b9708 + 100) != '\0') {
    DAT_14c9b93c6 = DAT_14c9b93c6 + '\x01';
  }
  return;
}



// FUNCTION 145d1f01e FUN_145d1f01e body=303 status=ok
// SIG undefined FUN_145d1f01e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d1f01e(void)

{
  if ((DAT_14c9b96cf & 2) != 0) {
    return;
  }
  DAT_14c9b96cf = DAT_14c9b96cf | 2;
  _DAT_14c9b9670 = L"ComputeParametersType";
  _DAT_14c9b9688 = FUN_146826540;
  _DAT_14c9b9690 = FUN_146825d77;
  _DAT_14c9b9698 = FUN_146825fd6;
  _DAT_14c9b96a0 = FUN_1407e02ea;
  _DAT_14c9b96a8 = FUN_146826273;
  _DAT_14c9b9680 = &LAB_14713bffa;
  _DAT_14c9b96c0 = 0xffffffff00000002;
  _DAT_14c9b96c8 = 2;
  DAT_14c9b96cc = 0;
  _DAT_14c9b96b0 = &LAB_14713c000;
  _DAT_14c9b96d0 = L"TranslucentSelfShadowBufferParameter";
  DAT_14c9b96fa = FUN_140850cc5();
  _DAT_14c9b96d8 = FUN_14106a12a();
  _DAT_14c9b96e8 = &LAB_14682652b;
  _DAT_14c9b96f0 = 0x100000000;
  _DAT_14c9b96f8 = 0;
  _DAT_14c9b96e0 = DAT_14c9b9678;
  DAT_14c9b9678 = &DAT_14c9b96d0;
  FUN_1407e00cc(&DAT_14c9b9668);
  return;
}



// FUNCTION 145d1f14e FUN_145d1f14e body=287 status=ok
// SIG undefined FUN_145d1f14e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145d1f14e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ae290) {
    FUN_144b3d300(&DAT_14c9ae290);
    if (DAT_14c9ae290 == -1) {
      FUN_145d1f26e();
      FUN_140db5666(&DAT_14c9ae1e8,2,&DAT_14c9ae180,
                    L"TBasePassPSFSelfShadowedCachedPointIndirectLightingPolicySkylightGbxDigiForceVelocity"
                    ,L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712bc04,
                    FUN_14712bbdc,FUN_14174a0ca,&LAB_14712bbd8,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14c9ae1e8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c32b);
      _Init_thread_footer(&DAT_14c9ae290);
    }
  }
  return &DAT_14c9ae1e8;
}



// FUNCTION 145d1f26e FUN_145d1f26e body=205 status=ok
// SIG undefined FUN_145d1f26e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d1f26e(void)

{
  if ((DAT_14c9ae1e7 & 2) == 0) {
    DAT_14c9ae1e7 = DAT_14c9ae1e7 | 2;
    _DAT_14c9ae188 =
         L"TBasePassPSFSelfShadowedCachedPointIndirectLightingPolicySkylightGbxDigiForceVelocity";
    _DAT_14c9ae1a0 = FUN_146826540;
    _DAT_14c9ae1a8 = FUN_146825d77;
    _DAT_14c9ae1b0 = FUN_146825fd6;
    _DAT_14c9ae1b8 = FUN_1407e02ea;
    _DAT_14c9ae1c0 = FUN_146826273;
    _DAT_14c9ae198 = FUN_14712bb9e;
    _DAT_14c9ae1d8 = 0xffffffff00000118;
    _DAT_14c9ae1e0 = 8;
    DAT_14c9ae1e4 = 0;
    _DAT_14c9ae1c8 = &LAB_14712bbd4;
    FUN_145d1f33c();
    FUN_1407e00cc(&DAT_14c9ae180);
    return;
  }
  return;
}



// FUNCTION 145d1f33c FUN_145d1f33c body=133 status=ok
// SIG undefined FUN_145d1f33c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d1f33c(void)

{
  _DAT_14c9b9e48 = L"BASE";
  DAT_14c9b9e72 = 4;
  FUN_145cd447a();
  _DAT_14c9b9e58 = DAT_14c9ae190;
  _DAT_14c9b9e50 = &DAT_14c9b9a40;
  _DAT_14c9b9e60 = &LAB_14682652b;
  DAT_14c9ae190 = &DAT_14c9b9e48;
  DAT_14c9ae1e5 = DAT_14c9ae1e5 + '\x01';
  _DAT_14c9b9e68 = 0x100000000;
  if (DAT_14c9b9aa4 != '\0') {
    DAT_14c9ae1e6 = DAT_14c9ae1e6 + '\x01';
  }
  return;
}



// FUNCTION 145d1f3c2 FUN_145d1f3c2 body=338 status=ok
// SIG undefined FUN_145d1f3c2(void)

void FUN_145d1f3c2(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar2 = *(longlong **)(param_1 + 0x178);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FUN_145d1f516(*(longlong *)(param_1 + 0x188),param_2);
  }
  plVar2 = (longlong *)(param_1 + 0x1a0);
  lVar1 = param_1 + 0x1b0;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  iVar4 = 0;
  local_48 = lVar1;
  if (*(int *)(param_1 + 0x1c8) != 0) {
    FUN_1449c0562(&local_50);
    iVar4 = *(int *)(param_1 + 0x1c8);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = plVar2;
  if ((iStack_3c != iVar4) || (local_48 != lVar1)) {
    do {
      plVar3 = *(longlong **)(*local_78 + 8 + (longlong)iStack_5c * 0x18);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x358))(plVar3,param_2);
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (((iStack_5c != iVar4) || (local_68 != lVar1)) || (local_78 != plVar2));
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d1f516 FUN_145d1f516 body=61 status=ok
// SIG undefined FUN_145d1f516(void)

void FUN_145d1f516(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = FUN_1410e9f0d(param_2);
    if (cVar1 == '\0') {
      FUN_14485c47a(param_1 + 0x1b8,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 145d1f554 FUN_145d1f554 body=133 status=ok
// SIG undefined FUN_145d1f554(void)

void FUN_145d1f554(void)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    FUN_144760e21(*(undefined8 *)((longlong)&DAT_14c9a3fe0 + lVar1),
                  *(undefined4 *)((longlong)&DAT_14c9a3fe8 + lVar1));
    if (*(longlong *)((longlong)&DAT_14c9a3fe0 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != -0xa8);
  DAT_14c9a3f48 = 0;
  if (DAT_14c9a3f40 != 0) {
    FUN_1400020a8();
  }
  FUN_145d1f5da();
  if (DAT_14c9a3ef0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145d1f5da FUN_145d1f5da body=54 status=ok
// SIG undefined FUN_145d1f5da(void)

void FUN_145d1f5da(void)

{
  FUN_145d1f610();
  if (DAT_14c9a3f20 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c9a3f00 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d1f610 FUN_145d1f610 body=104 status=ok
// SIG undefined FUN_145d1f610(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d1f610(void)

{
  DAT_14c9a3f08 = 0;
  if (DAT_14c9a3f0c != 0) {
    FUN_144727cd0(&DAT_14c9a3f00,0);
  }
  _DAT_14c9a3f30 = 0xffffffff;
  DAT_14c9a3f28 = 0;
  if (DAT_14c9a3f2c < 0x81) {
    return;
  }
  DAT_14c9a3f2c = 0x80;
  FUN_1446efbd8(&DAT_14c9a3f10,0);
  return;
}



// FUNCTION 145d1f684 FUN_145d1f684 body=126 status=ok
// SIG undefined FUN_145d1f684(void)

undefined8 * FUN_145d1f684(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14a3d5720;
  param_1[0x16] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa7b80) {
    FUN_144b3d300(&DAT_14caa7b80);
    if (DAT_14caa7b80 == -1) {
      FUN_141535a96();
      atexit((_func_5014 *)&LAB_143270aea);
      _Init_thread_footer(&DAT_14caa7b80);
    }
  }
  return param_1;
}



// FUNCTION 145d1f70a FUN_145d1f70a body=282 status=ok
// SIG undefined FUN_145d1f70a(void)

undefined8 * FUN_145d1f70a(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_14007ca06();
  FUN_1412b486a(param_1,uVar1);
  *param_1 = &PTR_FUN_14bcc0660;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined2 *)(param_1 + 0x2b) = 1;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)((longlong)param_1 + 0x16f) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined1 *)(param_1 + 0x3b) = 1;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  FUN_1446ddc76(&local_28,"TexturePipeline",1);
  uVar1 = FUN_14595ea16();
  local_38 = 1;
  local_30 = 0;
  lVar2 = FUN_14048696c(param_1,local_28,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x33] = lVar2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d1f826 FUN_145d1f826 body=284 status=ok
// SIG undefined FUN_145d1f826(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145d1f826(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf87c8) {
    FUN_144b3d300(&DAT_14caf87c8);
    if (DAT_14caf87c8 == -1) {
      FUN_145d1f942();
      FUN_140db5666(&DAT_14caf8720,0,&DAT_14caf86b8,L"FBuildPhysicsFieldClipmapCS",
                    L"/Engine/Private/PhysicsFieldBuilder.usf",L"BuildPhysicsFieldClipmapCS",5,1,
                    FUN_147c8f530,FUN_147c8f508,&LAB_147c8f4f0,&LAB_147c8f4ec,&LAB_14712ac0c,
                    &LAB_14712ac08,0x140,0);
      _DAT_14caf8720 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14364625f);
      _Init_thread_footer(&DAT_14caf87c8);
    }
  }
  return &DAT_14caf8720;
}



// FUNCTION 145d1f942 FUN_145d1f942 body=210 status=ok
// SIG undefined FUN_145d1f942(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d1f942(void)

{
  if ((DAT_14caf871f & 2) == 0) {
    DAT_14caf871f = DAT_14caf871f | 2;
    _DAT_14caf86c0 = L"FBuildPhysicsFieldClipmapCS";
    _DAT_14caf86d8 = FUN_146826540;
    _DAT_14caf86e0 = FUN_146825d77;
    _DAT_14caf86e8 = FUN_146825fd6;
    _DAT_14caf86f0 = FUN_1407e02ea;
    _DAT_14caf86f8 = FUN_146826273;
    _DAT_14caf86d0 = FUN_147c8f4be;
    _DAT_14caf8710 = 0xffffffff00000140;
    _DAT_14caf8718 = 8;
    DAT_14caf871c = 0;
    _DAT_14caf8700 = &LAB_147c8f4e8;
    FUN_145d1fa14();
    FUN_145d201b4();
    FUN_1407e00cc(&DAT_14caf86b8);
    return;
  }
  return;
}



// FUNCTION 145d1fa14 FUN_145d1fa14 body=121 status=ok
// SIG undefined FUN_145d1fa14(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d1fa14(void)

{
  FUN_145d1fa8e();
  _DAT_14caf9ec8 = L"NodesParams";
  DAT_14caf9ef2 = FUN_140850cc5();
  _DAT_14caf9ed0 = FUN_140fb78d0();
  _DAT_14caf9ee0 = &LAB_14682652b;
  _DAT_14caf9ee8 = 0x1000000e0;
  _DAT_14caf9ef0 = 0;
  _DAT_14caf9ed8 = DAT_14caf86c8;
  DAT_14caf86c8 = &DAT_14caf9ec8;
  return;
}



// FUNCTION 145d1fa8e FUN_145d1fa8e body=121 status=ok
// SIG undefined FUN_145d1fa8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d1fa8e(void)

{
  FUN_145d1fb08();
  _DAT_14caf9ef8 = L"NodesOffsets";
  DAT_14caf9f22 = FUN_140850cc5();
  _DAT_14caf9f00 = FUN_140fb78d0();
  _DAT_14caf9f10 = &LAB_14682652b;
  _DAT_14caf9f18 = 0x1000000e4;
  _DAT_14caf9f20 = 0;
  _DAT_14caf9f08 = DAT_14caf86c8;
  DAT_14caf86c8 = &DAT_14caf9ef8;
  return;
}



// FUNCTION 145d1fb08 FUN_145d1fb08 body=121 status=ok
// SIG undefined FUN_145d1fb08(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d1fb08(void)

{
  FUN_145d1fb82();
  _DAT_14caf9f28 = L"TargetsOffsets";
  DAT_14caf9f52 = FUN_140850cc5();
  _DAT_14caf9f30 = FUN_140fb78d0();
  _DAT_14caf9f40 = &LAB_14682652b;
  _DAT_14caf9f48 = 0x1000000e8;
  _DAT_14caf9f50 = 0;
  _DAT_14caf9f38 = DAT_14caf86c8;
  DAT_14caf86c8 = &DAT_14caf9f28;
  return;
}



// FUNCTION 145d1fb82 FUN_145d1fb82 body=121 status=ok
// SIG undefined FUN_145d1fb82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d1fb82(void)

{
  FUN_145d1fbfc();
  _DAT_14caf9f58 = L"FieldClipmap";
  DAT_14caf9f82 = FUN_140850cc5();
  _DAT_14caf9f60 = FUN_140fb78d0();
  _DAT_14caf9f70 = &LAB_14682652b;
  _DAT_14caf9f78 = 0x1000000ec;
  _DAT_14caf9f80 = 0;
  _DAT_14caf9f68 = DAT_14caf86c8;
  DAT_14caf86c8 = &DAT_14caf9f58;
  return;
}



// FUNCTION 145d1fbfc FUN_145d1fbfc body=121 status=ok
// SIG undefined FUN_145d1fbfc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d1fbfc(void)

{
  FUN_145d1fc76();
  _DAT_14caf9f88 = L"CellsOffsets";
  DAT_14caf9fb2 = FUN_140850cc5();
  _DAT_14caf9f90 = FUN_140fb78d0();
  _DAT_14caf9fa0 = &LAB_14682652b;
  _DAT_14caf9fa8 = 0x1000000f0;
  _DAT_14caf9fb0 = 0;
  _DAT_14caf9f98 = DAT_14caf86c8;
  DAT_14caf86c8 = &DAT_14caf9f88;
  return;
}



// FUNCTION 145d1fc76 FUN_145d1fc76 body=121 status=ok
// SIG undefined FUN_145d1fc76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d1fc76(void)

{
  FUN_145d1fcf0();
  _DAT_14caf9fb8 = L"CellsMin";
  DAT_14caf9fe2 = FUN_140850cc5();
  _DAT_14caf9fc0 = FUN_140fb78d0();
  _DAT_14caf9fd0 = &LAB_14682652b;
  _DAT_14caf9fd8 = 0x1000000f4;
  _DAT_14caf9fe0 = 0;
  _DAT_14caf9fc8 = DAT_14caf86c8;
  DAT_14caf86c8 = &DAT_14caf9fb8;
  return;
}



// FUNCTION 145d1fcf0 FUN_145d1fcf0 body=121 status=ok
// SIG undefined FUN_145d1fcf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d1fcf0(void)

{
  FUN_145d1fd6a();
  _DAT_14caf9fe8 = L"CellsMax";
  DAT_14cafa012 = FUN_140850cc5();
  _DAT_14caf9ff0 = FUN_140fb78d0();
  _DAT_14cafa000 = &LAB_14682652b;
  _DAT_14cafa008 = 0x1000000f8;
  _DAT_14cafa010 = 0;
  _DAT_14caf9ff8 = DAT_14caf86c8;
  DAT_14caf86c8 = &DAT_14caf9fe8;
  return;
}



// FUNCTION 145d1fd6a FUN_145d1fd6a body=121 status=ok
// SIG undefined FUN_145d1fd6a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d1fd6a(void)

{
  FUN_145d1fde4();
  _DAT_14cafa018 = L"ClipmapResolution";
  DAT_14cafa042 = FUN_140850cc5();
  _DAT_14cafa020 = FUN_140ec6960();
  _DAT_14cafa030 = &LAB_14682652b;
  _DAT_14cafa038 = 0x1000000fc;
  _DAT_14cafa040 = 0;
  _DAT_14cafa028 = DAT_14caf86c8;
  DAT_14caf86c8 = &DAT_14cafa018;
  return;
}



// FUNCTION 145d1fde4 FUN_145d1fde4 body=121 status=ok
// SIG undefined FUN_145d1fde4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d1fde4(void)

{
  FUN_145d1fe5e();
  _DAT_14cafa048 = L"ClipmapDistance";
  DAT_14cafa072 = FUN_140850cc5();
  _DAT_14cafa050 = FUN_140ec6960();
  _DAT_14cafa060 = &LAB_14682652b;
  _DAT_14cafa068 = 0x100000102;
  _DAT_14cafa070 = 0;
  _DAT_14cafa058 = DAT_14caf86c8;
  DAT_14caf86c8 = &DAT_14cafa048;
  return;
}



// FUNCTION 145d1fe5e FUN_145d1fe5e body=121 status=ok
// SIG undefined FUN_145d1fe5e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d1fe5e(void)

{
  FUN_145d1fed8();
  _DAT_14cafa078 = L"ClipmapCenter";
  DAT_14cafa0a2 = FUN_140850cc5();
  _DAT_14cafa080 = FUN_140ec6960();
  _DAT_14cafa090 = &LAB_14682652b;
  _DAT_14cafa098 = &DAT_100000108;
  _DAT_14cafa0a0 = 0;
  _DAT_14cafa088 = DAT_14caf86c8;
  DAT_14caf86c8 = &DAT_14cafa078;
  return;
}



// FUNCTION 145d1fed8 FUN_145d1fed8 body=121 status=ok
// SIG undefined FUN_145d1fed8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d1fed8(void)

{
  FUN_145d1ff52();
  _DAT_14cafa0a8 = L"ClipmapCount";
  DAT_14cafa0d2 = FUN_140850cc5();
  _DAT_14cafa0b0 = FUN_140ec6960();
  _DAT_14cafa0c0 = &LAB_14682652b;
  _DAT_14cafa0c8 = 0x10000010e;
  _DAT_14cafa0d0 = 0;
  _DAT_14cafa0b8 = DAT_14caf86c8;
  DAT_14caf86c8 = &DAT_14cafa0a8;
  return;
}



// FUNCTION 145d1ff52 FUN_145d1ff52 body=121 status=ok
// SIG undefined FUN_145d1ff52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d1ff52(void)

{
  FUN_145d1ffcc();
  _DAT_14cafa0d8 = L"ClipmapExponent";
  DAT_14cafa102 = FUN_140850cc5();
  _DAT_14cafa0e0 = FUN_140ec6960();
  _DAT_14cafa0f0 = &LAB_14682652b;
  _DAT_14cafa0f8 = 0x100000114;
  _DAT_14cafa100 = 0;
  _DAT_14cafa0e8 = DAT_14caf86c8;
  DAT_14caf86c8 = &DAT_14cafa0d8;
  return;
}



// FUNCTION 145d1ffcc FUN_145d1ffcc body=121 status=ok
// SIG undefined FUN_145d1ffcc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d1ffcc(void)

{
  FUN_145d20046();
  _DAT_14cafa108 = L"TargetsIndex";
  DAT_14cafa132 = FUN_140850cc5();
  _DAT_14cafa110 = FUN_140ec6960();
  _DAT_14cafa120 = &LAB_14682652b;
  _DAT_14cafa128 = 0x10000011a;
  _DAT_14cafa130 = 0;
  _DAT_14cafa118 = DAT_14caf86c8;
  DAT_14caf86c8 = &DAT_14cafa108;
  return;
}



// FUNCTION 145d20046 FUN_145d20046 body=121 status=ok
// SIG undefined FUN_145d20046(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d20046(void)

{
  FUN_145d200c0();
  _DAT_14cafa138 = L"ValidTargets";
  DAT_14cafa162 = FUN_140850cc5();
  _DAT_14cafa140 = FUN_140ec6960();
  _DAT_14cafa150 = &LAB_14682652b;
  _DAT_14cafa158 = 0x100000120;
  _DAT_14cafa160 = 0;
  _DAT_14cafa148 = DAT_14caf86c8;
  DAT_14caf86c8 = &DAT_14cafa138;
  return;
}



// FUNCTION 145d200c0 FUN_145d200c0 body=121 status=ok
// SIG undefined FUN_145d200c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d200c0(void)

{
  FUN_145d2013a();
  _DAT_14cafa168 = L"ValidCount";
  DAT_14cafa192 = FUN_140850cc5();
  _DAT_14cafa170 = FUN_140ec6960();
  _DAT_14cafa180 = &LAB_14682652b;
  _DAT_14cafa188 = 0x100000126;
  _DAT_14cafa190 = 0;
  _DAT_14cafa178 = DAT_14caf86c8;
  DAT_14caf86c8 = &DAT_14cafa168;
  return;
}



// FUNCTION 145d2013a FUN_145d2013a body=121 status=ok
// SIG undefined FUN_145d2013a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d2013a(void)

{
  FUN_145d20230();
  _DAT_14cafa198 = L"TimeSeconds";
  DAT_14cafa1c2 = FUN_140850cc5();
  _DAT_14cafa1a0 = FUN_140ec6960();
  _DAT_14cafa1b0 = &LAB_14682652b;
  _DAT_14cafa1b8 = 0x10000012c;
  _DAT_14cafa1c0 = 0;
  _DAT_14cafa1a8 = DAT_14caf86c8;
  DAT_14caf86c8 = &DAT_14cafa198;
  return;
}



// FUNCTION 145d201b4 FUN_145d201b4 body=123 status=ok
// SIG undefined FUN_145d201b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d201b4(void)

{
  _DAT_14cafa4b0 = L"BASE";
  DAT_14cafa4da = 4;
  _DAT_14cafa4b8 = FUN_140b35ae4();
  _DAT_14cafa4c0 = DAT_14caf86c8;
  _DAT_14cafa4c8 = &LAB_14682652b;
  DAT_14caf86c8 = &DAT_14cafa4b0;
  DAT_14caf871d = DAT_14caf871d + '\x01';
  _DAT_14cafa4d0 = 0x100000000;
  if (*(char *)(_DAT_14cafa4b8 + 100) != '\0') {
    DAT_14caf871e = DAT_14caf871e + '\x01';
  }
  return;
}



// FUNCTION 145d20230 FUN_145d20230 body=216 status=ok
// SIG undefined FUN_145d20230(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d20230(void)

{
  _DAT_14cafa1f8 = L"TargetCount";
  DAT_14cafa222 = FUN_140850cc5();
  _DAT_14cafa200 = FUN_140ec6960();
  _DAT_14cafa210 = &LAB_14682652b;
  _DAT_14cafa218 = 0x100000138;
  _DAT_14cafa220 = 0;
  _DAT_14cafa208 = DAT_14caf86c8;
  DAT_14caf86c8 = &DAT_14cafa1f8;
  _DAT_14cafa1c8 = L"NumCells";
  DAT_14cafa1f2 = FUN_140850cc5();
  _DAT_14cafa1d0 = FUN_140ec6960();
  _DAT_14cafa1e0 = &LAB_14682652b;
  _DAT_14cafa1e8 = 0x100000132;
  _DAT_14cafa1f0 = 0;
  _DAT_14cafa1d8 = DAT_14caf86c8;
  DAT_14caf86c8 = &DAT_14cafa1c8;
  return;
}



// FUNCTION 145d20308 FUN_145d20308 body=25 status=ok
// SIG undefined FUN_145d20308(void)

undefined8 FUN_145d20308(undefined8 param_1,undefined8 param_2)

{
  FUN_145d20322(param_2);
  return param_2;
}



// FUNCTION 145d20322 FUN_145d20322 body=422 status=ok
// SIG undefined FUN_145d20322(void)

longlong * FUN_145d20322(longlong *param_1)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14cbcfba0 != (longlong *)0x0 && DAT_14cbcfba8 != 0) &&
     (cVar2 = (**(code **)(*DAT_14cbcfba0 + 0x30))(), cVar2 != '\0')) {
    plVar4 = DAT_14cbcfba0;
    if (DAT_14cbcfba8 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x58))(plVar4,&local_38);
    goto LAB_145d203f3;
  }
  lVar3 = FUN_14001cc68(0x40,0x10);
  FUN_145d204ca(lVar3);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b994800;
  plVar4[2] = lVar3;
  local_30 = plVar4;
  if (lVar3 == 0) {
    local_38 = 0;
    goto LAB_145d203f3;
  }
  local_38 = lVar3;
  if (((*(longlong *)(lVar3 + 0x10) != 0) && (*(longlong *)(lVar3 + 0x18) != 0)) &&
     (0 < *(int *)(*(longlong *)(lVar3 + 0x18) + 8))) goto LAB_145d203f3;
  if (plVar4 == (longlong *)0x0) {
    *(longlong *)(lVar3 + 0x10) = lVar3;
    plVar5 = *(longlong **)(lVar3 + 0x18);
    if (plVar5 != (longlong *)0x0) {
LAB_145d2046e:
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      *(longlong **)(lVar3 + 0x18) = plVar4;
      if (plVar4 != (longlong *)0x0) goto LAB_145d203e9;
    }
    local_30 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong *)(lVar3 + 0x10) = lVar3;
    if (*(longlong **)(lVar3 + 0x18) != plVar4) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar5 = *(longlong **)(lVar3 + 0x18);
      if (plVar5 != (longlong *)0x0) goto LAB_145d2046e;
      *(longlong **)(lVar3 + 0x18) = plVar4;
    }
LAB_145d203e9:
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
LAB_145d203f3:
  *param_1 = local_38;
  param_1[1] = (longlong)local_30;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145d204ca FUN_145d204ca body=131 status=ok
// SIG undefined FUN_145d204ca(void)

undefined8 * FUN_145d204ca(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  code *local_28;
  undefined4 local_20;
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b9959c0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar1 = FUN_141535b30();
  local_28 = FUN_140b85e90;
  local_20 = 0;
  FUN_145d2054e(uVar1,local_18,param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d2054e FUN_145d2054e body=237 status=ok
// SIG undefined FUN_145d2054e(void)

undefined8
FUN_145d2054e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
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
  local_40 = 3;
  *local_48 = &PTR_LAB_14b996660;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14b9965f0;
  local_48[3] = param_3;
  local_48[4] = uVar2;
  *(undefined4 *)(local_48 + 5) = uVar1;
  FUN_145d2063c(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d2063c FUN_145d2063c body=216 status=ok
// SIG undefined FUN_145d2063c(void)

undefined8 * FUN_145d2063c(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
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



// FUNCTION 145d20726 FUN_145d20726 body=292 status=ok
// SIG undefined FUN_145d20726(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145d20726(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b7340) {
    FUN_144b3d300(&DAT_14c9b7340);
    if (DAT_14c9b7340 == -1) {
      FUN_145d20994();
      FUN_145d2084a();
      FUN_140db5666(&DAT_14c9b7298,0,&DAT_14c9b7230,L"FGTAOHorizonSearchAndIntegrateCS",
                    L"/Engine/Private/PostProcessAmbientOcclusion.usf",L"GTAOCombinedCS",5,10,
                    FUN_1471352c8,FUN_147135268,&LAB_142b8b932,&LAB_142b8b92e,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9b8718);
      _DAT_14c9b7298 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142b8b949);
      _Init_thread_footer(&DAT_14c9b7340);
    }
  }
  return &DAT_14c9b7298;
}



// FUNCTION 145d2084a FUN_145d2084a body=205 status=ok
// SIG undefined FUN_145d2084a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d2084a(void)

{
  if ((DAT_14c9b7297 & 2) == 0) {
    DAT_14c9b7297 = DAT_14c9b7297 | 2;
    _DAT_14c9b7238 = L"FGTAOHorizonSearchAndIntegrateCS";
    _DAT_14c9b7250 = FUN_146826540;
    _DAT_14c9b7258 = FUN_146825d77;
    _DAT_14c9b7260 = FUN_146825fd6;
    _DAT_14c9b7268 = FUN_1407e02ea;
    _DAT_14c9b7270 = FUN_146826273;
    _DAT_14c9b7248 = FUN_14713523a;
    _DAT_14c9b7288 = 0xffffffff000000e0;
    _DAT_14c9b7290 = 8;
    DAT_14c9b7294 = 0;
    _DAT_14c9b7278 = &LAB_147135264;
    FUN_145d20918();
    FUN_1407e00cc(&DAT_14c9b7230);
    return;
  }
  return;
}



// FUNCTION 145d20918 FUN_145d20918 body=123 status=ok
// SIG undefined FUN_145d20918(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d20918(void)

{
  _DAT_14c9c0140 = L"BASE";
  DAT_14c9c016a = 4;
  _DAT_14c9c0148 = FUN_140b35ae4();
  _DAT_14c9c0150 = DAT_14c9b7240;
  _DAT_14c9c0158 = &LAB_14682652b;
  DAT_14c9b7240 = &DAT_14c9c0140;
  DAT_14c9b7295 = DAT_14c9b7295 + '\x01';
  _DAT_14c9c0160 = 0x100000000;
  if (*(char *)(_DAT_14c9c0148 + 100) != '\0') {
    DAT_14c9b7296 = DAT_14c9b7296 + '\x01';
  }
  return;
}



// FUNCTION 145d20994 FUN_145d20994 body=261 status=ok
// SIG undefined FUN_145d20994(void)

void FUN_145d20994(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b8798) {
    FUN_144b3d300(&DAT_14c9b8798);
    if (DAT_14c9b8798 == -1) {
      FUN_145d20a9a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1e0;
      local_58 = 0x454;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9b8718,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b90925);
      _Init_thread_footer(&DAT_14c9b8798);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d20a9a FUN_145d20a9a body=226 status=ok
// SIG undefined FUN_145d20a9a(void)

longlong * FUN_145d20a9a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462b905a;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d20b82 FUN_145d20b82 body=142 status=ok
// SIG undefined FUN_145d20b82(void)

code * FUN_145d20b82(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145c8e6ba();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"HZBParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FHZBParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2000000457;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462b9286;
}



// FUNCTION 145d20c10 FUN_145d20c10 body=146 status=ok
// SIG undefined FUN_145d20c10(void)

code * FUN_145d20c10(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145d20ca2();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GTAOParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FGTAOShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000045b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9b87a0;
  return FUN_1462b90e2;
}



// FUNCTION 145d20ca2 FUN_145d20ca2 body=258 status=ok
// SIG undefined FUN_145d20ca2(void)

void FUN_145d20ca2(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b8820) {
    FUN_144b3d300(&DAT_14c9b8820);
    if (DAT_14c9b8820 == -1) {
      FUN_145d20da6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FGTAOShaderParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x19d;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9b87a0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b90931);
      _Init_thread_footer(&DAT_14c9b8820);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d20da6 FUN_145d20da6 body=232 status=ok
// SIG undefined FUN_145d20da6(void)

longlong * FUN_145d20da6(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar12 = FUN_1462b9174;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145d20e94 FUN_145d20e94 body=284 status=ok
// SIG undefined FUN_145d20e94(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145d20e94(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb06050) {
    FUN_144b3d300(&DAT_14cb06050);
    if (DAT_14cb06050 == -1) {
      FUN_145d20fb0();
      FUN_140db5666(&DAT_14cb05fa8,0,&DAT_14cb05f40,L"FSimpleElementPS",
                    L"/Engine/Private/SimpleElementPixelShader.usf",L"Main",3,1,FUN_147d13ffe,
                    FUN_147d13fd6,&LAB_147d13fd2,&LAB_147d13fce,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14cb05fa8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1436b0afc);
      _Init_thread_footer(&DAT_14cb06050);
    }
  }
  return &DAT_14cb05fa8;
}



// FUNCTION 145d20fb0 FUN_145d20fb0 body=205 status=ok
// SIG undefined FUN_145d20fb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d20fb0(void)

{
  if ((DAT_14cb05fa7 & 2) != 0) {
    return;
  }
  DAT_14cb05fa7 = DAT_14cb05fa7 | 2;
  _DAT_14cb05f48 = L"FSimpleElementPS";
  _DAT_14cb05f60 = FUN_146826540;
  _DAT_14cb05f68 = FUN_146825d77;
  _DAT_14cb05f70 = FUN_146825fd6;
  _DAT_14cb05f78 = FUN_1407e02ea;
  _DAT_14cb05f80 = FUN_146826273;
  _DAT_14cb05f58 = FUN_147d13fa0;
  _DAT_14cb05f98 = 0xffffffff00000100;
  _DAT_14cb05fa0 = 8;
  DAT_14cb05fa4 = 0;
  _DAT_14cb05f88 = &LAB_147d13fca;
  FUN_145d2107e();
  FUN_145d21266();
  FUN_1407e00cc(&DAT_14cb05f40);
  return;
}



// FUNCTION 145d2107e FUN_145d2107e body=121 status=ok
// SIG undefined FUN_145d2107e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d2107e(void)

{
  FUN_145d210f8();
  _DAT_14cb07080 = L"InTexture";
  DAT_14cb070aa = FUN_140850cc5();
  _DAT_14cb07088 = FUN_140fb78d0();
  _DAT_14cb07098 = &LAB_14682652b;
  _DAT_14cb070a0 = 0x1000000e0;
  _DAT_14cb070a8 = 0;
  _DAT_14cb07090 = DAT_14cb05f50;
  DAT_14cb05f50 = &DAT_14cb07080;
  return;
}



// FUNCTION 145d210f8 FUN_145d210f8 body=121 status=ok
// SIG undefined FUN_145d210f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d210f8(void)

{
  FUN_145d21172();
  _DAT_14cb070b0 = L"InTextureSampler";
  DAT_14cb070da = FUN_140850cc5();
  _DAT_14cb070b8 = FUN_140fb78d0();
  _DAT_14cb070c8 = &LAB_14682652b;
  _DAT_14cb070d0 = 0x1000000e4;
  _DAT_14cb070d8 = 0;
  _DAT_14cb070c0 = DAT_14cb05f50;
  DAT_14cb05f50 = &DAT_14cb070b0;
  return;
}



// FUNCTION 145d21172 FUN_145d21172 body=121 status=ok
// SIG undefined FUN_145d21172(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d21172(void)

{
  FUN_145d211ec();
  _DAT_14cb070e0 = L"TextureComponentReplicate";
  DAT_14cb0710a = FUN_140850cc5();
  _DAT_14cb070e8 = FUN_140ec6960();
  _DAT_14cb070f8 = &LAB_14682652b;
  _DAT_14cb07100 = 0x1000000e8;
  _DAT_14cb07108 = 0;
  _DAT_14cb070f0 = DAT_14cb05f50;
  DAT_14cb05f50 = &DAT_14cb070e0;
  return;
}



// FUNCTION 145d211ec FUN_145d211ec body=121 status=ok
// SIG undefined FUN_145d211ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d211ec(void)

{
  FUN_145d212e2();
  _DAT_14cb07110 = L"TextureComponentReplicateAlpha";
  DAT_14cb0713a = FUN_140850cc5();
  _DAT_14cb07118 = FUN_140ec6960();
  _DAT_14cb07128 = &LAB_14682652b;
  _DAT_14cb07130 = 0x1000000ee;
  _DAT_14cb07138 = 0;
  _DAT_14cb07120 = DAT_14cb05f50;
  DAT_14cb05f50 = &DAT_14cb07110;
  return;
}



// FUNCTION 145d21266 FUN_145d21266 body=123 status=ok
// SIG undefined FUN_145d21266(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d21266(void)

{
  _DAT_14cb07520 = L"BASE";
  DAT_14cb0754a = 4;
  _DAT_14cb07528 = FUN_140b35ae4();
  _DAT_14cb07530 = DAT_14cb05f50;
  _DAT_14cb07538 = &LAB_14682652b;
  DAT_14cb05f50 = &DAT_14cb07520;
  DAT_14cb05fa5 = DAT_14cb05fa5 + '\x01';
  _DAT_14cb07540 = 0x100000000;
  if (*(char *)(_DAT_14cb07528 + 100) != '\0') {
    DAT_14cb05fa6 = DAT_14cb05fa6 + '\x01';
  }
  return;
}



// FUNCTION 145d212e2 FUN_145d212e2 body=216 status=ok
// SIG undefined FUN_145d212e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d212e2(void)

{
  _DAT_14cb07170 = L"ScreenToPixel";
  DAT_14cb0719a = FUN_140850cc5();
  _DAT_14cb07178 = FUN_140ec6960();
  _DAT_14cb07188 = &LAB_14682652b;
  _DAT_14cb07190 = 0x1000000fa;
  _DAT_14cb07198 = 0;
  _DAT_14cb07180 = DAT_14cb05f50;
  DAT_14cb05f50 = &DAT_14cb07170;
  _DAT_14cb07140 = L"EditorCompositeDepthTestParameter";
  DAT_14cb0716a = FUN_140850cc5();
  _DAT_14cb07148 = FUN_140ec6960();
  _DAT_14cb07158 = &LAB_14682652b;
  _DAT_14cb07160 = 0x1000000f4;
  _DAT_14cb07168 = 0;
  _DAT_14cb07150 = DAT_14cb05f50;
  DAT_14cb05f50 = &DAT_14cb07140;
  return;
}



// FUNCTION 145d213c2 FUN_145d213c2 body=801 status=ok
// SIG undefined FUN_145d213c2(void)

undefined8 * FUN_145d213c2(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = FUN_14007ca06();
  FUN_145d216e4(param_1,uVar1);
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 2;
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x304) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x314) = 0;
  *(undefined8 *)((longlong)param_1 + 0x31c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x324) = 0;
  param_1[0x65] = 2;
  *param_1 = &PTR_FUN_14b79b7f0;
  param_1[5] = &PTR_FUN_14b79bb70;
  param_1[0x5c] = &PTR_FUN_14b79bb98;
  param_1[0x66] = &PTR_FUN_14b79bbb0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  *(undefined2 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x362) = 0x1010101;
  *(undefined2 *)((longlong)param_1 + 0x366) = 0x100;
  *(undefined1 *)(param_1 + 0x6d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x36c) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x6e) = 0;
  *(undefined1 **)((longlong)param_1 + 0x374) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x37c) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 900) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x38c) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x394) = &DAT_3f8000003f800000;
  *(undefined1 *)((longlong)param_1 + 0x39c) = 0;
  param_1[0x74] = &DAT_3f8000003f800000;
  param_1[0x75] = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0x76) = 1;
  *(undefined8 *)((longlong)param_1 + 0x3b1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3bc) = 0x3dcccccd3e800000;
  *(undefined8 *)((longlong)param_1 + 0x3c4) = 0x4170000040f00000;
  *(undefined8 *)((longlong)param_1 + 0x3cc) = 0x3dcccccd3e800000;
  *(undefined8 *)((longlong)param_1 + 0x3d4) = 0x4170000040f00000;
  *(undefined8 *)((longlong)param_1 + 0x3dc) = 0x3f80000001000100;
  *(undefined2 *)((longlong)param_1 + 0x3e4) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x3e6) = 0;
  *(undefined4 *)(param_1 + 0x7d) = 1;
  *(undefined4 *)((longlong)param_1 + 0x3ec) = 0;
  *(undefined4 *)(param_1 + 0x7e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3f4) = 0x42b40000;
  *(undefined4 *)(param_1 + 0x7f) = 0x42b40000;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 2;
  *(undefined4 *)((longlong)param_1 + 0x424) = 0;
  *(undefined8 *)((longlong)param_1 + 0x414) = 0;
  *(undefined8 *)((longlong)param_1 + 0x41c) = 0;
  param_1[0x85] = 2;
  *(undefined2 *)(param_1 + 0x86) = 0x101;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  *(undefined4 *)(param_1 + 0x8b) = 0x101;
  FUN_140056680(param_1 + 0x8c,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x8e,&DAT_149dfb77a);
  param_1[0x90] = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x487) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x494) = 0;
  *(undefined4 *)((longlong)param_1 + 0x49c) = 0;
  param_1[0x94] = &DAT_3f8000003f800000;
  param_1[0x95] = 0;
  *(undefined4 *)(param_1 + 0x96) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4b4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x97) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x4bc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4c4) = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  *(undefined1 *)(param_1 + 0x9b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4dc) = 0xffffffff;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  *(undefined4 *)(param_1 + 0x9e) = 1;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    plVar2 = (longlong *)FUN_140a68038(1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,&local_58);
      param_1[0x57] = local_58;
    }
    local_58 = &LAB_145ce44a0;
    local_50 = 0;
    FUN_145d2186e(&DAT_14cb7df50,&local_48,param_1,&local_58);
    param_1[0x6a] = local_48;
    local_58 = &LAB_145ce447a;
    local_50 = 0;
    FUN_145d2186e(&DAT_14cb7df68,&local_48,param_1,&local_58);
    param_1[0x6b] = local_48;
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d216e4 FUN_145d216e4 body=78 status=ok
// SIG undefined FUN_145d216e4(void)

undefined8 * FUN_145d216e4(undefined8 *param_1)

{
  FUN_145d21732();
  *param_1 = &PTR_FUN_14b1a1920;
  param_1[5] = &PTR_FUN_14b1a1ca0;
  param_1[0x57] = 0;
  *(undefined1 *)((longlong)param_1 + 0x2d2) = 1;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0x1013f800000;
  return param_1;
}



// FUNCTION 145d21732 FUN_145d21732 body=316 status=ok
// SIG undefined FUN_145d21732(void)

undefined8 * FUN_145d21732(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_145946dc8();
  *param_1 = &PTR_FUN_14a9bfe20;
  param_1[5] = &PTR_FUN_14a9c0190;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[9] = &PTR_FUN_14a5af930;
  param_1[0x18] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 2;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 2;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x26] = 2;
  FUN_14115fc2e();
  FUN_14112365e(param_1 + 0x27);
  param_1[0x27] = &PTR_FUN_14a9c40d8;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  *(undefined1 *)(param_1 + 0x43) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  memset(param_1 + 0x44,0,0x88);
  *(undefined4 *)(param_1 + 0x55) = 0x20702;
  *(undefined1 *)((longlong)param_1 + 0x2ac) = 0;
  *(undefined1 *)(param_1 + 0x56) = 0;
  lVar1 = FUN_144a75eb4();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x18] = lVar1;
  return param_1;
}



// FUNCTION 145d2186e FUN_145d2186e body=254 status=ok
// SIG undefined FUN_145d2186e(void)

undefined8
FUN_145d2186e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b3ecf50;
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
  *local_48 = &PTR_FUN_14b9916d0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1412a3750(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d21978 FUN_145d21978 body=135 status=ok
// SIG undefined FUN_145d21978(void)

undefined8 * FUN_145d21978(undefined8 *param_1)

{
  FUN_140307c5a();
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(byte *)((longlong)param_1 + 0xbc) = *(byte *)((longlong)param_1 + 0xbc) | 1;
  *(byte *)((longlong)param_1 + 0xfe) = *(byte *)((longlong)param_1 + 0xfe) | 1;
  *(undefined1 *)((longlong)param_1 + 0xf6) = 0x12;
  *(byte *)((longlong)param_1 + 0x13c) = *(byte *)((longlong)param_1 + 0x13c) & 0xf8;
  *param_1 = &PTR_FUN_14aad8930;
  param_1[0x19] = &PTR_FUN_14aad8d00;
  param_1[0x1a] = &PTR_FUN_14aad8d40;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0x3f80000000000000;
  *(undefined1 *)((longlong)param_1 + 0x15c) = 0;
  *(byte *)((longlong)param_1 + 0x15d) = *(byte *)((longlong)param_1 + 0x15d) & 0xf8 | 5;
  return param_1;
}



// FUNCTION 145d21a00 FUN_145d21a00 body=53 status=ok
// SIG undefined FUN_145d21a00(void)

void FUN_145d21a00(longlong param_1)

{
  FUN_145d21a36();
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  *(byte *)(param_1 + 0x391) = *(byte *)(param_1 + 0x391) & 0x4f | 0x20;
  *(byte *)(param_1 + 0x390) = *(byte *)(param_1 + 0x390) & 0xfb;
  return;
}



// FUNCTION 145d21a36 FUN_145d21a36 body=501 status=ok
// SIG undefined FUN_145d21a36(void)

void FUN_145d21a36(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined4 *)(param_1 + 0x310) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(byte *)(param_1 + 0x2a6) = *(byte *)(param_1 + 0x2a6) & 0xf7;
  if (*(int *)(param_1 + 0x2d4) < 0) {
    *(undefined4 *)(param_1 + 0x2d0) = 0;
    FUN_147f0ca96(param_1 + 0x2c8,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x2d0) = 0;
  }
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  plVar4 = *(longlong **)(param_1 + 0x180);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x180) = 0;
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
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  plVar4 = *(longlong **)(param_1 + 0x1b8);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1b8) = 0;
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
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  FUN_145d21c2c(param_1 + 0x1d0);
  *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_1 + 0x198);
  *(byte *)(param_1 + 0x2a5) = *(byte *)(param_1 + 0x2a5) & 0xdc | 3;
  *(byte *)(param_1 + 0x2a6) = *(byte *)(param_1 + 0x2a6) & 0xfc;
  *(undefined4 *)(param_1 + 0x2a0) = 0xffffffff;
  uVar7 = DAT_14cb203d8._4_4_;
  uVar6 = (undefined4)DAT_14cb203d8;
  uVar5 = DAT_14cb203d0._4_4_;
  *(undefined4 *)(param_1 + 0x280) = (undefined4)DAT_14cb203d0;
  *(undefined4 *)(param_1 + 0x284) = uVar5;
  *(undefined4 *)(param_1 + 0x288) = uVar6;
  *(undefined4 *)(param_1 + 0x28c) = uVar7;
  *(undefined8 *)(param_1 + 0x290) = DAT_14cb203e0;
  *(undefined4 *)(param_1 + 0x338) = DAT_14cb1eff8;
  *(undefined1 *)(param_1 + 0x2a4) = 0;
  if (*(longlong *)(param_1 + 0x330) != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x330);
    lVar8 = *(longlong *)(param_1 + 0xb0);
    if (lVar8 == 0) {
      lVar8 = FUN_1448abda6(param_1);
    }
    uVar9 = FUN_144a88394(lVar8);
    lVar8 = FUN_144a61814(uVar9,puVar3);
    if (lVar8 != 0) {
      FUN_1405a424c(uVar9,*puVar3);
    }
    *puVar3 = 0;
  }
  return;
}



// FUNCTION 145d21c2c FUN_145d21c2c body=30 status=ok
// SIG undefined FUN_145d21c2c(void)

void FUN_145d21c2c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  uVar1 = DAT_14c8464e8;
  param_1[1] = DAT_14c8464e0;
  param_1[2] = uVar1;
  param_1[3] = DAT_14c8464f0;
  return;
}



// FUNCTION 145d21c4a FUN_145d21c4a body=40 status=ok
// SIG undefined FUN_145d21c4a(void)

undefined8 FUN_145d21c4a(undefined8 param_1,int param_2)

{
  FUN_145d21c72();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d21c72 FUN_145d21c72 body=106 status=ok
// SIG undefined FUN_145d21c72(void)

void FUN_145d21c72(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac1df70;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ac1cb30;
  FUN_1449db362(param_1 + 0xd);
  FUN_1449db362(param_1 + 0xb);
  FUN_1449db362(param_1 + 9);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d21cdc FUN_145d21cdc body=54 status=ok
// SIG undefined FUN_145d21cdc(void)

undefined1 FUN_145d21cdc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_145d21d12(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 145d21d12 FUN_145d21d12 body=92 status=ok
// SIG undefined FUN_145d21d12(void)

undefined8 * FUN_145d21d12(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1486e5d56(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x1c);
      }
    }
  }
  return param_1;
}



// FUNCTION 145d21d6e FUN_145d21d6e body=1487 status=ok
// SIG undefined FUN_145d21d6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_145d21d6e(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  char cVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined1 auStack_e8 [40];
  longlong *local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong local_a0;
  undefined8 *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong local_80;
  longlong *local_78;
  longlong local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  cVar10 = (**(code **)(*(longlong *)*param_3 + 0x50))();
  if (cVar10 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_e8);
  }
  FUN_1404e37f4(*param_3,&local_70,&DAT_14cb8b8c0);
  if (local_70 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    goto LAB_145d22151;
  }
  plVar11 = (longlong *)FUN_14001cc68(0x88,0x10);
  plVar11[1] = (longlong)&DAT_100000001;
  *plVar11 = (longlong)&PTR_FUN_14b426e10;
  plVar11[8] = 0;
  plVar11[3] = 0;
  plVar11[4] = 0;
  plVar11[5] = 0;
  plVar11[6] = 0;
  *(undefined8 *)((longlong)plVar11 + 0x31) = 0;
  *(undefined8 *)((longlong)plVar11 + 0x39) = 0;
  *(undefined4 *)((longlong)plVar11 + 0x44) = 0xffffffff;
  plVar11[9] = 0;
  plVar11[10] = 0;
  plVar11[0xb] = 2;
  plVar11[2] = (longlong)&PTR_FUN_14b2427f0;
  plVar11[0xc] = 0;
  plVar11[0xd] = 0;
  plVar11[0xe] = 0;
  plVar11[0xf] = 0;
  plVar11[0x10] = 0;
  lVar15 = param_3[3];
  plVar16 = (longlong *)param_3[4];
  if (plVar16 == (longlong *)0x0) {
    plVar11[0xd] = lVar15;
  }
  else {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    plVar3 = (longlong *)plVar11[0xe];
    plVar11[0xd] = lVar15;
    if (plVar16 == plVar3) {
      LOCK();
      plVar3 = plVar16 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar3 = plVar16;
joined_r0x000145d222a4:
        if (iVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    else {
      plVar11[0xe] = (longlong)plVar16;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar3 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
          goto joined_r0x000145d222a4;
        }
      }
    }
    LOCK();
    plVar3 = plVar16 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  local_c0 = param_2;
  if ((*(longlong *)(param_3[1] + 0x88) == 0) ||
     (plVar16 = *(longlong **)(param_3[1] + 0x90), plVar16 == (longlong *)0x0)) {
    uVar12 = 0;
  }
  else {
    uVar12 = (**(code **)(*plVar16 + 8))();
  }
  FUN_14485c47a(plVar11 + 0xc,uVar12);
  if (0 < *(int *)(param_1 + 0x60)) {
    local_a8 = plVar11 + 0xf;
    local_b0 = param_1 + 0x48;
    local_b8 = param_1 + 0x30;
    lVar15 = 0x40;
    lVar17 = 0;
    local_a0 = param_1;
    local_98 = param_3;
    do {
      plVar13 = (longlong *)FUN_145d2233e();
      plVar16 = plVar13 + 2;
      local_90 = plVar16;
      local_88 = plVar13;
      FUN_145d22444(&local_90,plVar16);
      plVar3 = local_a8;
      iVar2 = (int)plVar11[0x10];
      *(uint *)(plVar11 + 0x10) = iVar2 + 1U;
      if (*(uint *)((longlong)plVar11 + 0x84) < iVar2 + 1U) {
        FUN_145d224e6(local_a8,iVar2);
      }
      plVar9 = local_88;
      lVar7 = local_a0;
      lVar4 = *plVar3;
      lVar14 = (longlong)iVar2 * 0x10;
      *(longlong **)(lVar4 + lVar14) = plVar16;
      *(longlong **)(lVar4 + 8 + lVar14) = plVar13;
      if (plVar13 == (longlong *)0x0) {
        local_78 = (longlong *)0x0;
        local_80 = 0x10;
      }
      else {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
        local_80 = *(longlong *)(lVar4 + lVar14);
        local_78 = (longlong *)((longlong *)(lVar4 + lVar14))[1];
        if (local_78 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_78 + 1) = (int)local_78[1] + 1;
          UNLOCK();
        }
      }
      if (local_88 != (longlong *)0x0) {
        LOCK();
        plVar16 = local_88 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
          (**(code **)*local_88)(local_88);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      puVar8 = local_98;
      if (plVar11 == (longlong *)0x0) {
        *(undefined8 *)(local_80 + 0x50) = 0x10;
        plVar16 = *(longlong **)(local_80 + 0x58);
        if (plVar16 != (longlong *)0x0) {
          *(undefined8 *)(local_80 + 0x58) = 0;
LAB_145d221de:
          LOCK();
          plVar3 = plVar16 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar16)(plVar16);
            LOCK();
            piVar1 = (int *)((longlong)plVar16 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar2 = *piVar1;
            UNLOCK();
joined_r0x000145d2221c:
            if (iVar2 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
        *(longlong **)(local_80 + 0x50) = plVar11 + 2;
        plVar16 = *(longlong **)(local_80 + 0x58);
        if (plVar11 == plVar16) {
          LOCK();
          plVar16 = plVar11 + 1;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)*plVar16 == 0) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar2 = *piVar1;
            UNLOCK();
            plVar16 = plVar11;
            goto joined_r0x000145d2221c;
          }
        }
        else {
          *(longlong **)(local_80 + 0x58) = plVar11;
          if (plVar16 != (longlong *)0x0) goto LAB_145d221de;
        }
      }
      lVar4 = local_80;
      *(int *)(local_80 + 0x60) = (int)lVar17;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb8aaa0) && (FUN_144b3d300(&DAT_14cb8aaa0), DAT_14cb8aaa0 == -1))
      {
        DAT_14cb8aa90 = 0;
        _DAT_14cb8aa98 = 0;
        atexit(FUN_143e2309d);
        _Init_thread_footer(&DAT_14cb8aaa0);
      }
      uVar6 = _DAT_14cb8aa98;
      FUN_140b47c46(DAT_14cb8aa90,_DAT_14cb8aa98 & 0xffffffff);
      uVar5 = _DAT_14cb8aa98 >> 0x20;
      _DAT_14cb8aa98 = _DAT_14cb8aa98 & 0xffffffff00000000;
      if (((longlong)uVar6 < 0) && ((int)uVar5 != 0)) {
        FUN_14896cd66(&DAT_14cb8aa90,0);
      }
      FUN_1404e3746(&DAT_14cb8aa90,local_b0);
      FUN_1404e3746(&DAT_14cb8aa90,*(longlong *)(lVar7 + 0x58) + lVar15 + 0x18);
      FUN_145d223aa(*puVar8,&local_80,local_b8,*(longlong *)(lVar7 + 0x58) + lVar15);
      FUN_1404e38dc(local_70,*puVar8,lVar4 + 0x20,&DAT_14cb8aa90);
      plVar16 = local_78;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_78 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar1 = (int *)((longlong)plVar16 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
          }
        }
      }
      lVar17 = lVar17 + 1;
      lVar15 = lVar15 + 0x68;
    } while (lVar17 < *(int *)(lVar7 + 0x60));
  }
  param_2 = local_c0;
  *local_c0 = (longlong)(plVar11 + 2);
  local_c0[1] = (longlong)plVar11;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    plVar16 = plVar11 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
LAB_145d22151:
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_68 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145d2233e FUN_145d2233e body=108 status=ok
// SIG undefined FUN_145d2233e(void)

void FUN_145d2233e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b426e30;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[2] = &PTR_FUN_14b426e50;
  puVar1[6] = &PTR_FUN_14b426e68;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  *(undefined4 *)(puVar1 + 0xe) = 0xffffffff;
  return;
}



// FUNCTION 145d223aa FUN_145d223aa body=153 status=ok
// SIG undefined FUN_145d223aa(void)

void FUN_145d223aa(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_4 = (longlong *)*param_4;
  if ((param_4 != (longlong *)0x0) || (param_4 = (longlong *)*param_3, param_4 != (longlong *)0x0))
  {
    local_20 = *param_2;
    local_18 = (longlong *)param_2[1];
    if (local_18 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_18 + 1) = (int)local_18[1] + 1;
      UNLOCK();
    }
    (**(code **)(*param_4 + 0x18))(param_4,param_1,&local_20);
    plVar3 = local_18;
    if (local_18 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_18 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_18)(local_18);
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
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d22444 FUN_145d22444 body=162 status=ok
// SIG undefined FUN_145d22444(void)

void FUN_145d22444(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x40) != 0) && (*(longlong *)(param_2 + 0x48) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x48) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x40) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x48);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x40) = param_2;
    if (*(longlong **)(param_2 + 0x48) == plVar2) goto LAB_145d22483;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x48);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x48) = plVar2;
      goto LAB_145d22483;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x48) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_145d22483:
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
                    /* WARNING: Could not recover jumptable at 0x000145d224e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145d224e6 FUN_145d224e6 body=132 status=ok
// SIG undefined FUN_145d224e6(void)

void FUN_145d224e6(longlong param_1,int param_2)

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



// FUNCTION 145d2256a FUN_145d2256a body=40 status=ok
// SIG undefined FUN_145d2256a(void)

undefined8 FUN_145d2256a(undefined8 param_1,int param_2)

{
  FUN_145d22592();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d22592 FUN_145d22592 body=106 status=ok
// SIG undefined FUN_145d22592(void)

void FUN_145d22592(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b589640;
  param_1[5] = &PTR_FUN_14b589940;
  plVar3 = (longlong *)param_1[0x30];
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
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_140cdcfea(param_1);
  return;
}



// FUNCTION 145d22612 FUN_145d22612 body=138 status=ok
// SIG undefined FUN_145d22612(void)

undefined8 * FUN_145d22612(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_140da6ea8(param_1,uVar1);
  *param_1 = &PTR_FUN_14b756c30;
  FUN_1446f470e(param_1 + 7,L"Camera",1);
  FUN_1446f470e(param_1 + 8,L"Spine5",1);
  *(undefined4 *)(param_1 + 9) = 0x431c6d0e;
  FUN_1446f470e((longlong)param_1 + 0x4c,L"Muzzle_Lead",1);
  FUN_1446f470e((longlong)param_1 + 0x54,L"ADD_Secondary",1);
  return param_1;
}



// FUNCTION 145d2269c FUN_145d2269c body=37 status=ok
// SIG undefined FUN_145d2269c(void)

void FUN_145d2269c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145d226c2();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145d226c2 FUN_145d226c2 body=83 status=ok
// SIG undefined FUN_145d226c2(void)

undefined8 FUN_145d226c2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_140ade8e4();
  if (lVar1 != 0) {
    lVar2 = FUN_140ade7fe();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      uVar3 = FUN_145d22716(lVar1,*(undefined4 *)(param_1 + 0xe0));
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 145d22716 FUN_145d22716 body=26 status=ok
// SIG undefined FUN_145d22716(void)

undefined4 FUN_145d22716(void)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_140ade790();
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(lVar2 + 0xc);
  }
  return uVar1;
}



// FUNCTION 145d22740 FUN_145d22740 body=131 status=ok
// SIG undefined FUN_145d22740(void)

void FUN_145d22740(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0x30);
  if (plVar1 != (longlong *)0x0) {
    FUN_140c125e6(plVar1 + 0x78,&DAT_14cbd9588);
    if (*(longlong *)(param_1 + 0x2b0) != 0) {
      lVar2 = (**(code **)(*plVar1 + 0x180))(plVar1);
      if (lVar2 != 0) {
        puVar4 = (undefined8 *)(param_1 + 0x2b0);
        uVar3 = FUN_144a88394(lVar2);
        lVar2 = FUN_144a61814(uVar3,puVar4);
        if (lVar2 != 0) {
          FUN_1405a424c(uVar3,*puVar4);
        }
        *puVar4 = 0;
      }
    }
  }
  return;
}



// FUNCTION 145d227c4 FUN_145d227c4 body=40 status=ok
// SIG undefined FUN_145d227c4(void)

undefined8 FUN_145d227c4(undefined8 param_1,int param_2)

{
  FUN_145d227ec();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d227ec FUN_145d227ec body=106 status=ok
// SIG undefined FUN_145d227ec(void)

void FUN_145d227ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc13230;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_140ba05b6(param_1 + 0x16);
  *param_1 = &PTR_FUN_14bc14b60;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d22856 FUN_145d22856 body=40 status=ok
// SIG undefined FUN_145d22856(void)

undefined8 FUN_145d22856(undefined8 param_1,int param_2)

{
  FUN_145d2287e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d2287e FUN_145d2287e body=189 status=ok
// SIG undefined FUN_145d2287e(void)

void FUN_145d2287e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc63c50;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_141535be2(param_1[0x15],*(undefined4 *)(param_1 + 0x16));
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d2293c FUN_145d2293c body=40 status=ok
// SIG undefined FUN_145d2293c(void)

undefined8 FUN_145d2293c(undefined8 param_1,int param_2)

{
  FUN_145d22964();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d22964 FUN_145d22964 body=106 status=ok
// SIG undefined FUN_145d22964(void)

void FUN_145d22964(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bccb9e0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(param_1 + 0xf);
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d229ce FUN_145d229ce body=40 status=ok
// SIG undefined FUN_145d229ce(void)

undefined8 FUN_145d229ce(undefined8 param_1,int param_2)

{
  FUN_145d229f6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d229f6 FUN_145d229f6 body=106 status=ok
// SIG undefined FUN_145d229f6(void)

void FUN_145d229f6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd77340;
  FUN_1447a1747(param_1[0x1d],*(undefined4 *)(param_1 + 0x1e));
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_140e36c74(param_1);
  return;
}



// FUNCTION 145d22a6c FUN_145d22a6c body=31 status=ok
// SIG undefined FUN_145d22a6c(void)

void FUN_145d22a6c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x50,0x10);
  FUN_145d22a8c(uVar1);
  return;
}



// FUNCTION 145d22a8c FUN_145d22a8c body=249 status=ok
// SIG undefined FUN_145d22a8c(void)

undefined8 * FUN_145d22a8c(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [40];
  ulonglong ***local_80;
  ulonglong *local_78;
  ulonglong **local_70 [2];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 2;
  *param_1 = &PTR_FUN_14bef1500;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_140056680(local_70,&DAT_149e31260);
  FUN_140056680(local_60,&DAT_149ef80de);
  FUN_140056680(local_50,&DAT_149ef62fc);
  FUN_140056680(local_40,&DAT_149ef62f2);
  FUN_140056680(local_30,&DAT_149ef80e6);
  local_78 = &local_20;
  local_80 = local_70;
  FUN_141469cae(param_1 + 8);
  lVar1 = 0x50;
  do {
    if (*(longlong *)((longlong)&local_80 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d22b86 FUN_145d22b86 body=357 status=ok
// SIG undefined FUN_145d22b86(void)

undefined8 FUN_145d22b86(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  void *_Dst;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  int iVar13;
  uint uVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  int iVar19;
  
  iVar2 = *(int *)((longlong)param_1 + 0x34);
  if ((longlong)iVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 1);
    iVar10 = uVar3 - iVar2;
    iVar9 = iVar10;
    if ((int)param_1[6] == -1) {
      uVar12 = 0;
    }
    else {
      lVar5 = *param_1;
      uVar12 = 0;
      iVar13 = (int)param_1[6];
      uVar14 = uVar3;
      do {
        iVar4 = *(int *)(lVar5 + 4 + (longlong)iVar13 * 0x20);
        if (iVar13 < iVar10) {
          puVar17 = (undefined8 *)((longlong)iVar13 * 0x20 + lVar5);
          plVar18 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar18 = param_1 + 2;
          }
          puVar8 = (undefined8 *)((longlong)(int)(uVar14 - 1) * 0x20 + lVar5 + 0x20);
          uVar11 = uVar14;
          do {
            puVar15 = puVar8;
            uVar14 = uVar11 - 1;
            uVar16 = uVar11 + 0x1e;
            if (-1 < (int)uVar14) {
              uVar16 = uVar14;
            }
            puVar8 = puVar15 + -4;
            uVar11 = uVar14;
          } while ((*(uint *)((longlong)plVar18 + (longlong)((int)uVar16 >> 5) * 4) >>
                    (uVar14 & 0x1f) & 1) == 0);
          uVar12 = puVar15[-4];
          uVar6 = puVar15[-3];
          uVar7 = puVar15[-1];
          uVar11 = 1 << ((byte)iVar13 & 0x1f);
          puVar17[2] = puVar15[-2];
          puVar17[3] = uVar7;
          *puVar17 = uVar12;
          puVar17[1] = uVar6;
          plVar18 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar18 = param_1 + 2;
          }
          iVar19 = iVar13 + 0x1f;
          if (-1 < iVar13) {
            iVar19 = iVar13;
          }
          puVar1 = (uint *)((longlong)plVar18 + (longlong)(iVar19 >> 5) * 4);
          *puVar1 = *puVar1 | uVar11;
          uVar12 = CONCAT71((uint7)(uint3)(uVar11 >> 8),1);
        }
        iVar13 = iVar4;
      } while (iVar4 != -1);
      iVar13 = (int)param_1[1] - uVar3;
      if (iVar13 != 0) {
        _Dst = (void *)((longlong)iVar10 * 0x20 + *param_1);
        memmove(_Dst,(void *)((longlong)iVar2 * 0x20 + (longlong)_Dst),(longlong)iVar13 << 5);
        iVar9 = (int)param_1[1] - iVar2;
      }
    }
    *(int *)(param_1 + 1) = iVar9;
    FUN_144a6134a(param_1 + 2,iVar10,iVar2);
    param_1[6] = 0xffffffff;
    if (*(int *)((longlong)param_1 + 0xc) != (int)param_1[1]) {
      FUN_1446f4a44(param_1);
    }
  }
  return uVar12;
}



// FUNCTION 145d22cec FUN_145d22cec body=360 status=ok
// SIG undefined FUN_145d22cec(void)

undefined8 FUN_145d22cec(longlong *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  void *_Dst;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  int iVar13;
  uint uVar14;
  undefined8 *puVar15;
  uint uVar16;
  longlong *plVar17;
  int iVar18;
  
  iVar3 = *(int *)((longlong)param_1 + 0x34);
  if ((longlong)iVar3 == 0) {
    uVar12 = 0;
  }
  else {
    uVar4 = *(uint *)(param_1 + 1);
    iVar10 = uVar4 - iVar3;
    iVar9 = iVar10;
    if ((int)param_1[6] == -1) {
      uVar12 = 0;
    }
    else {
      lVar6 = *param_1;
      uVar12 = 0;
      iVar13 = (int)param_1[6];
      uVar14 = uVar4;
      do {
        iVar5 = *(int *)(lVar6 + 4 + (longlong)iVar13 * 0x18);
        if (iVar13 < iVar10) {
          puVar1 = (undefined8 *)(lVar6 + (longlong)iVar13 * 0x18);
          plVar17 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar17 = param_1 + 2;
          }
          puVar8 = (undefined8 *)(lVar6 + 0x18 + (longlong)(int)(uVar14 - 1) * 0x18);
          uVar11 = uVar14;
          do {
            puVar15 = puVar8;
            uVar14 = uVar11 - 1;
            uVar16 = uVar11 + 0x1e;
            if (-1 < (int)uVar14) {
              uVar16 = uVar14;
            }
            puVar8 = puVar15 + -3;
            uVar11 = uVar14;
          } while ((*(uint *)((longlong)plVar17 + (longlong)((int)uVar16 >> 5) * 4) >>
                    (uVar14 & 0x1f) & 1) == 0);
          uVar12 = puVar15[-3];
          uVar7 = puVar15[-2];
          uVar11 = 1 << ((byte)iVar13 & 0x1f);
          puVar1[2] = puVar15[-1];
          *puVar1 = uVar12;
          puVar1[1] = uVar7;
          plVar17 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar17 = param_1 + 2;
          }
          iVar18 = iVar13 + 0x1f;
          if (-1 < iVar13) {
            iVar18 = iVar13;
          }
          puVar2 = (uint *)((longlong)plVar17 + (longlong)(iVar18 >> 5) * 4);
          *puVar2 = *puVar2 | uVar11;
          uVar12 = CONCAT71((uint7)(uint3)(uVar11 >> 8),1);
        }
        iVar13 = iVar5;
      } while (iVar5 != -1);
      iVar13 = (int)param_1[1] - uVar4;
      if (iVar13 != 0) {
        _Dst = (void *)((longlong)iVar10 * 0x18 + *param_1);
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar3 * 0x18),(longlong)iVar13 * 0x18);
        iVar9 = (int)param_1[1] - iVar3;
      }
    }
    *(int *)(param_1 + 1) = iVar9;
    FUN_144a6134a(param_1 + 2,iVar10,iVar3);
    param_1[6] = 0xffffffff;
    if (*(int *)((longlong)param_1 + 0xc) != (int)param_1[1]) {
      FUN_144727cd0(param_1);
    }
  }
  return uVar12;
}



// FUNCTION 145d22e5a FUN_145d22e5a body=65 status=ok
// SIG undefined FUN_145d22e5a(void)

void FUN_145d22e5a(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140083894();
  FUN_145d22e9c();
  FUN_145adf30e(uVar1,&DAT_14cbf7f28);
  FUN_145d22e9c();
                    /* WARNING: Could not recover jumptable at 0x000145d22e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_14cbf7f28 + 0xc0))(&DAT_14cbf7f28);
  return;
}



// FUNCTION 145d22e9c FUN_145d22e9c body=99 status=ok
// SIG undefined FUN_145d22e9c(void)

undefined8 * FUN_145d22e9c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf8060) {
    FUN_144b3d300(&DAT_14cbf8060);
    if (DAT_14cbf8060 == -1) {
      FUN_145d22f00();
      atexit((_func_5014 *)&LAB_14441921a);
      _Init_thread_footer(&DAT_14cbf8060);
    }
  }
  return &DAT_14cbf7f28;
}



// FUNCTION 145d22f00 FUN_145d22f00 body=222 status=ok
// SIG undefined FUN_145d22f00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d22f00(void)

{
  _DAT_14cbf7f30 = 0;
  DAT_14cbf7f28 = &PTR_FUN_14baa2670;
  _DAT_14cbf7f58 = 0;
  _DAT_14cbf7f60 = 0;
  _DAT_14cbf7f38 = 0;
  uRam000000014cbf7f40 = 0;
  _DAT_14cbf7f64 = 0xffffffff00000080;
  _DAT_14cbf7f6c = 0;
  _DAT_14cbf7f78 = 0;
  _DAT_14cbf7f80 = 0;
  _DAT_14cbf7fa8 = 0;
  _DAT_14cbf7fb0 = 0;
  _DAT_14cbf7f88 = 0;
  uRam000000014cbf7f90 = 0;
  _DAT_14cbf7fb4 = 0xffffffff00000080;
  _DAT_14cbf7fbc = 0;
  _DAT_14cbf7fc8 = 0;
  _DAT_14cbf7fd0 = 0;
  _DAT_14cbf7ff8 = 0;
  _DAT_14cbf8000 = 0;
  _DAT_14cbf7fd8 = 0;
  uRam000000014cbf7fe0 = 0;
  _DAT_14cbf8004 = 0xffffffff00000080;
  _DAT_14cbf800c = 0;
  _DAT_14cbf8018 = 0;
  _DAT_14cbf8020 = 0;
  _DAT_14cbf8028 = 0;
  uRam000000014cbf8030 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cbf8038);
                    /* WARNING: Could not recover jumptable at 0x000145d22fd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cbf8038,4000);
  return;
}



// FUNCTION 145d22fde FUN_145d22fde body=565 status=ok
// SIG undefined FUN_145d22fde(void)

void FUN_145d22fde(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  longlong *local_68;
  longlong *local_60;
  undefined2 local_58;
  undefined8 local_50;
  longlong local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_1 + 0xe4) < *(int *)(param_1 + 0xb8)) {
    do {
      FUN_140441118(param_1,0);
    } while (*(int *)(param_1 + 0xe4) < *(int *)(param_1 + 0xb8));
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x110));
  plVar1 = (longlong *)(param_1 + 0x10);
  local_48 = param_1 + 0x20;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_1449c0562(&local_50);
  }
  local_78 = local_40;
  iStack_74 = iStack_3c;
  local_70 = local_38;
  local_6c = local_34;
  local_88 = local_50;
  local_80 = local_48;
  local_58 = 0;
  local_90 = plVar1;
  local_68 = plVar1;
  local_60 = plVar1;
  if (iStack_3c < *(int *)(local_48 + 0x18)) {
    do {
      FUN_14907cc4a(*(undefined8 *)(*local_90 + 8 + (longlong)iStack_74 * 0x18),0);
      lVar2 = *(longlong *)(*local_90 + 8 + (longlong)iStack_74 * 0x18);
      if (lVar2 != 0) {
        FUN_14907c89a(lVar2);
        FUN_1400020a8(lVar2);
      }
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (iStack_74 < *(int *)(local_80 + 0x18));
    if (((local_58 & 1) != 0) && (local_58._1_1_ == '\x01')) {
      FUN_14908a12c(local_60,(int)local_60[1] - *(int *)((longlong)local_60 + 0x34));
    }
  }
  FUN_145d23214(plVar1);
  if (*(int *)(param_1 + 0x68) != *(int *)(param_1 + 0x94)) {
    FUN_14908a490(param_1 + 0x60);
    FUN_14908a5d8(param_1 + 0x60);
  }
  if (*(int *)(param_1 + 0x10c) < 0) {
    *(undefined4 *)(param_1 + 0x108) = 0;
    FUN_14908a718(param_1 + 0x100);
  }
  else {
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x110));
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d23214 FUN_145d23214 body=68 status=ok
// SIG undefined FUN_145d23214(void)

void FUN_145d23214(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_14908a34c();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 145d23264 FUN_145d23264 body=188 status=ok
// SIG undefined FUN_145d23264(void)

undefined8 * FUN_145d23264(undefined8 *param_1)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1413f708e();
  *param_1 = &PTR_FUN_14abf8230;
  param_1[5] = &PTR_FUN_14abf8550;
  local_20 = 0;
  FUN_145d23322(param_1 + 0xe);
  FUN_1400b22c2(&local_30,"PlaySound");
  if (param_1 + 6 == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = local_30;
    *(undefined4 *)(param_1 + 7) = local_28;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_24;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d23322 FUN_145d23322 body=93 status=ok
// SIG undefined FUN_145d23322(void)

undefined8 * FUN_145d23322(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0xffff;
  lVar1 = *param_2;
  param_1[2] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  lVar1 = FUN_145992be8();
  param_1[3] = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar1);
  }
  return param_1;
}



// FUNCTION 145d23380 FUN_145d23380 body=52 status=ok
// SIG undefined FUN_145d23380(void)

void FUN_145d23380(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x380);
  memset(_Dst,0,0x380);
  FUN_145d233b4(_Dst);
  return;
}



// FUNCTION 145d233b4 FUN_145d233b4 body=241 status=ok
// SIG undefined FUN_145d233b4(void)

undefined8 * FUN_145d233b4(undefined8 *param_1)

{
  FUN_140e8cfb8();
  *(undefined4 *)(param_1 + 0x56) = 0xffffffff;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  *param_1 = &PTR_FUN_14b9d24a0;
  param_1[0x59] = DAT_14caa8578;
  FUN_140056680(param_1 + 0x5a,L"StandInScene_VaultCard_Echo4");
  FUN_140056680(param_1 + 0x5c,L"StandInScene_VaultCard_Character");
  FUN_140056680(param_1 + 0x5e,L"StandInScene_VaultCard_Vehicle");
  FUN_140056680(param_1 + 0x60,L"StandInScene_VaultCard_Item");
  FUN_140056680(param_1 + 0x62,L"StandInScene_VaultCard_QuestionMark");
  FUN_1446f470e(param_1 + 100,L"ui_message_insufficient_space_error",1);
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0x3f800000;
  return param_1;
}



// FUNCTION 145d234a6 FUN_145d234a6 body=273 status=ok
// SIG undefined FUN_145d234a6(void)

undefined8 FUN_145d234a6(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  longlong lVar11;
  
  uVar9 = 0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar6 = (**(code **)(*(longlong *)*param_2 + 0x40))();
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    uVar8 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
    iVar6 = *(int *)((longlong)plVar7 + uVar8 * 4);
    if (iVar6 != -1) {
      puVar10 = (undefined4 *)((longlong)plVar7 + uVar8 * 4);
      do {
        lVar3 = *param_1;
        lVar11 = (longlong)iVar6 * 0x68;
        puVar4 = *(undefined8 **)(lVar3 + lVar11);
        plVar7 = *(longlong **)(lVar3 + 8 + lVar11);
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
        }
        cVar5 = '\x01';
        if (puVar4 != (undefined8 *)*param_2) {
          cVar5 = (**(code **)*puVar4)();
        }
        if (plVar7 != (longlong *)0x0) {
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
        if (cVar5 != '\0') {
          FUN_145d235b8(param_1,*puVar10);
          uVar9 = 1;
          break;
        }
        iVar6 = *(int *)(lVar3 + lVar11 + 0x60);
        puVar10 = (undefined4 *)(lVar3 + lVar11 + 0x60);
      } while (iVar6 != -1);
    }
  }
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
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
  return uVar9;
}



// FUNCTION 145d235b8 FUN_145d235b8 body=113 status=ok
// SIG undefined FUN_145d235b8(void)

void FUN_145d235b8(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x68;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 100 + lVar2);
  iVar3 = *(int *)((longlong)plVar4 + lVar6 * 4);
  if (iVar3 == param_2) {
    piVar5 = (int *)((longlong)plVar4 + lVar6 * 4);
  }
  else {
    do {
      piVar5 = (int *)(lVar1 + (longlong)iVar3 * 0x68 + 0x60);
      iVar3 = *piVar5;
    } while (iVar3 != param_2);
  }
  *piVar5 = *(int *)(lVar1 + lVar2 + 0x60);
  FUN_145d2362a(lVar2 + *param_1);
  FUN_145d236c0(param_1,param_2);
  return;
}



// FUNCTION 145d2362a FUN_145d2362a body=96 status=ok
// SIG undefined FUN_145d2362a(void)

void FUN_145d2362a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_145d2368a(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000145d23686. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d2368a FUN_145d2368a body=53 status=ok
// SIG undefined FUN_145d2368a(void)

void FUN_145d2368a(longlong *param_1)

{
  FUN_145d23736();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d236c0 FUN_145d236c0 body=118 status=ok
// SIG undefined FUN_145d236c0(void)

void FUN_145d236c0(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x68) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68) = 0xffffffff;
  uVar5 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 145d23736 FUN_145d23736 body=332 status=ok
// SIG undefined FUN_145d23736(void)

void FUN_145d23736(longlong *param_1)

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
      FUN_145d23884((longlong)iStack_4c * 0x38 + *local_68);
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



// FUNCTION 145d23884 FUN_145d23884 body=113 status=ok
// SIG undefined FUN_145d23884(void)

void FUN_145d23884(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14ba3d3b0;
  plVar3 = *(longlong **)(param_1 + 0x20);
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
                    /* WARNING: Could not recover jumptable at 0x000145d238d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d238f6 FUN_145d238f6 body=312 status=ok
// SIG undefined FUN_145d238f6(void)

undefined4 * FUN_145d238f6(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145d23b06(param_1,local_48);
  FUN_145d23a30(param_3,local_40);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar8);
  cVar3 = FUN_145d23a94(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x1c) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_145d23bec(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d23a30 FUN_145d23a30 body=100 status=ok
// SIG undefined FUN_145d23a30(void)

undefined8 * FUN_145d23a30(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *_Src;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  *param_2 = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  param_2[2] = *puVar3;
  return param_2;
}



// FUNCTION 145d23a94 FUN_145d23a94 body=114 status=ok
// SIG undefined FUN_145d23a94(void)

undefined8 FUN_145d23a94(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar6 = FUN_14153787a(), iVar6 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x20);
    if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x20) != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 4);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_145c7f026(param_1,*param_4);
    *param_4 = iVar6;
    return 1;
  }
  return 0;
}



// FUNCTION 145d23b06 FUN_145d23b06 body=230 status=ok
// SIG undefined FUN_145d23b06(void)

int * FUN_145d23b06(longlong *param_1,int *param_2)

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



// FUNCTION 145d23bec FUN_145d23bec body=485 status=ok
// SIG undefined FUN_145d23bec(void)

void FUN_145d23bec(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar11 = (longlong)iVar12 * 0x20;
        iVar6 = *(int *)(lVar3 + 8 + lVar11);
        puVar9 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar9 = *(undefined2 **)(lVar3 + lVar11);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar9);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar11) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d23dd2 FUN_145d23dd2 body=402 status=ok
// SIG undefined FUN_145d23dd2(void)

void FUN_145d23dd2(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_1 + -0x8c0;
  FUN_140eeb8c0(lVar1);
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x2b0) = param_2;
  uVar5 = (**(code **)(*(longlong *)(param_2 + 0x3a20) + 0x10))(param_2 + 0x3a20);
  FUN_145d23f66(extraout_XMM0_Da,&local_50,uVar5);
  *(undefined4 *)(param_1 + 0x2a0) = local_40;
  *(undefined4 *)(param_1 + 0x2a4) = uStack_3c;
  *(undefined4 *)(param_1 + 0x2a8) = uStack_38;
  *(undefined4 *)(param_1 + 0x2ac) = uStack_34;
  *(undefined4 *)(param_1 + 0x290) = (undefined4)local_50;
  *(undefined4 *)(param_1 + 0x294) = local_50._4_4_;
  *(undefined4 *)(param_1 + 0x298) = uStack_48;
  *(undefined4 *)(param_1 + 0x29c) = uStack_44;
  if (*(char *)(param_1 + -0x748) == '\x03') {
    FUN_140c66eee(param_1 + 0x200,lVar1);
    if (*(char *)(param_1 + -0x748) == '\x03') {
      *(undefined4 *)(param_1 + 0x284) = *(undefined4 *)(param_1 + 0x27c);
      FUN_140ef1516(lVar1);
    }
    cVar4 = FUN_1403ae288(param_1 + 0x290);
    if (cVar4 != '\0') {
      lVar6 = FUN_14008e0ae(param_1 + 0x290);
      local_50 = &LAB_1411cb1f0;
      uStack_48 = 0;
      FUN_145d24020(lVar6 + 0x168,local_58,lVar1);
    }
    if (*(longlong *)(param_1 + 0x30) != 0) {
      FUN_14615c894(param_1 + 0x20);
    }
    iVar2 = *(int *)(param_1 + 0x58);
    if ((longlong)iVar2 != 0) {
      lVar1 = *(longlong *)(param_1 + 0x50);
      lVar6 = 0;
      do {
        plVar3 = *(longlong **)(lVar1 + lVar6);
        (**(code **)(*plVar3 + 0x18))(plVar3,*(undefined8 *)(param_1 + 0x2b0));
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar2 * 8 != lVar6);
    }
  }
  FUN_14615c82e(param_1,*(undefined8 *)(param_1 + 0x2b0),param_3);
  *(undefined4 *)(param_1 + 0x2b8) = param_3;
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d23f66 FUN_145d23f66 body=184 status=ok
// SIG undefined FUN_145d23f66(void)

undefined8 * FUN_145d23f66(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_14011c349();
  uVar3 = FUN_14011c2be(lVar2 + 0x250);
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)((longlong)param_2 + 0x1c) = 0xff;
  *(undefined4 *)(param_2 + 3) = 0;
  param_2[2] = 0;
  FUN_14493679e(param_3,param_2,uVar3,0);
  cVar1 = FUN_14486ea84(param_2);
  if (cVar1 == '\0') {
    uVar3 = FUN_14011c2be(lVar2 + 0x250);
    FUN_14036c7e6(param_3,&local_40,uVar3,0);
    param_2[2] = local_30;
    param_2[3] = uStack_28;
    *(undefined4 *)param_2 = local_40;
    *(undefined4 *)((longlong)param_2 + 4) = uStack_3c;
    *(undefined4 *)(param_2 + 1) = uStack_38;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_34;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d24020 FUN_145d24020 body=254 status=ok
// SIG undefined FUN_145d24020(void)

undefined8
FUN_145d24020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_FUN_14b977bb0;
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



// FUNCTION 145d24120 FUN_145d24120 body=26 status=ok
// SIG undefined FUN_145d24120(void)

void FUN_145d24120(undefined8 param_1)

{
  FUN_145d2413a();
  FUN_140cef0ca(param_1);
  return;
}



// FUNCTION 145d2413a FUN_145d2413a body=179 status=ok
// SIG undefined FUN_145d2413a(void)

void FUN_145d2413a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *(undefined8 **)(param_1 + 0x6c);
  iVar1 = FUN_145d241ee((uint)((ulonglong)local_30 >> 0x20) ^ (uint)local_30);
  lVar2 = (longlong)iVar1 * 0x20 + DAT_14cb7c5c8;
  if (lVar2 != 0 && iVar1 != -1) {
    local_38 = 0;
    FUN_14485c47a(&local_38,param_1);
    local_30 = &local_38;
    FUN_145d244dc(lVar2 + 8);
    if (*(int *)(lVar2 + 0x10) == 0) {
      FUN_145d242bc(*(undefined8 *)(param_1 + 0x6c));
    }
  }
  *(undefined8 *)(param_1 + 0x6c) = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d241ee FUN_145d241ee body=205 status=ok
// SIG undefined FUN_145d241ee(void)

int FUN_145d241ee(uint param_1,undefined8 *param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb7c5d0 != DAT_14cb7c5fc) {
    puVar2 = &DAT_14cb7c600;
    if (DAT_14cb7c608 != (undefined *)0x0) {
      puVar2 = DAT_14cb7c608;
    }
    iVar3 = *(int *)(puVar2 + (ulonglong)(DAT_14cb7c610 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        local_40 = *param_2;
        local_38 = *(undefined8 *)(DAT_14cb7c5c8 + (longlong)iVar3 * 0x20);
        cVar1 = FUN_140d09c9e(&local_38,&local_40);
        if (cVar1 != '\0') goto LAB_145d2421b;
        iVar3 = *(int *)(DAT_14cb7c5c8 + 0x18 + (longlong)iVar3 * 0x20);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_145d2421b:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3;
}



// FUNCTION 145d242bc FUN_145d242bc body=261 status=ok
// SIG undefined FUN_145d242bc(void)

void FUN_145d242bc(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  undefined *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  lVar1 = DAT_14cb7c5c8;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb7c5d0 != DAT_14cb7c5fc) {
    puVar4 = &DAT_14cb7c600;
    if (DAT_14cb7c608 != (undefined *)0x0) {
      puVar4 = DAT_14cb7c608;
    }
    uVar3 = (longlong)(int)((uint)((ulonglong)param_1 >> 0x20) ^ (uint)param_1) &
            (longlong)DAT_14cb7c610 - 1U;
    if ((longlong)*(int *)(puVar4 + uVar3 * 4) != -1) {
      lVar6 = (longlong)*(int *)(puVar4 + uVar3 * 4) * 0x20;
      local_38 = *(undefined8 *)(DAT_14cb7c5c8 + lVar6);
      local_40 = param_1;
      cVar2 = FUN_140d09c9e();
      if (cVar2 == '\0') {
        lVar1 = lVar1 + lVar6;
        do {
          lVar5 = lVar1;
          lVar6 = (longlong)*(int *)(lVar5 + 0x18);
          if (lVar6 == -1) goto LAB_145d24353;
          lVar6 = lVar6 * 0x20;
          lVar1 = DAT_14cb7c5c8 + lVar6;
          local_38 = *(undefined8 *)(DAT_14cb7c5c8 + lVar6);
          local_40 = param_1;
          cVar2 = FUN_140d09c9e(&local_38,&local_40);
        } while (cVar2 == '\0');
        puVar7 = (undefined4 *)(lVar5 + 0x18);
      }
      else {
        puVar7 = (undefined4 *)(puVar4 + uVar3 * 4);
      }
      FUN_145d243c2(*puVar7);
    }
  }
LAB_145d24353:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d243c2 FUN_145d243c2 body=96 status=ok
// SIG undefined FUN_145d243c2(void)

void FUN_145d243c2(int param_1)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  longlong lVar4;
  
  puVar2 = &DAT_14cb7c600;
  if (DAT_14cb7c608 != (undefined *)0x0) {
    puVar2 = DAT_14cb7c608;
  }
  lVar4 = (longlong)*(int *)(DAT_14cb7c5c8 + 0x1c + (longlong)param_1 * 0x20);
  iVar1 = *(int *)(puVar2 + lVar4 * 4);
  if (iVar1 == param_1) {
    piVar3 = (int *)(puVar2 + lVar4 * 4);
  }
  else {
    do {
      piVar3 = (int *)(DAT_14cb7c5c8 + (longlong)iVar1 * 0x20 + 0x18);
      iVar1 = *piVar3;
    } while (iVar1 != param_1);
  }
  *piVar3 = *(int *)(DAT_14cb7c5c8 + (longlong)param_1 * 0x20 + 0x18);
  FUN_145d24422();
  return;
}



// FUNCTION 145d24422 FUN_145d24422 body=48 status=ok
// SIG undefined FUN_145d24422(void)

void FUN_145d24422(int param_1)

{
  if (*(longlong *)(DAT_14cb7c5c8 + 8 + (longlong)param_1 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_145d24452(param_1);
  return;
}



// FUNCTION 145d24452 FUN_145d24452 body=137 status=ok
// SIG undefined FUN_145d24452(void)

void FUN_145d24452(int param_1)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  undefined4 *puVar4;
  
  lVar2 = DAT_14cb7c5c8;
  if (DAT_14cb7c5fc != 0) {
    *(int *)(DAT_14cb7c5c8 + (longlong)DAT_14cb7c5f8 * 0x20) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x20) = 0xffffffff;
  iVar3 = -1;
  if (0 < DAT_14cb7c5fc) {
    iVar3 = DAT_14cb7c5f8;
  }
  *(int *)(lVar2 + (longlong)param_1 * 0x20 + 4) = iVar3;
  DAT_14cb7c5fc = DAT_14cb7c5fc + 1;
  puVar4 = &DAT_14cb7c5d8;
  if (DAT_14cb7c5e8 != (undefined4 *)0x0) {
    puVar4 = DAT_14cb7c5e8;
  }
  iVar3 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar3 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb7c5f8 = param_1;
  puVar4[iVar3 >> 5] = puVar4[iVar3 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 145d244dc FUN_145d244dc body=273 status=ok
// SIG undefined FUN_145d244dc(void)

void FUN_145d244dc(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar13 = (longlong)(int)uVar1;
  if (lVar13 != 0) {
    lVar2 = *param_1;
    bVar4 = FUN_145d245ee(lVar2);
    uVar7 = 0;
    uVar8 = 0;
    do {
      uVar11 = (ulonglong)uVar8;
      uVar3 = uVar8 + 1;
      if ((int)(uVar8 + 1) < (int)uVar1) {
        uVar3 = uVar1;
      }
      lVar12 = lVar2 + 8 + uVar11 * 8;
      uVar9 = uVar8;
      uVar6 = uVar11;
      do {
        uVar6 = uVar6 + 1;
        uVar10 = uVar3;
        if (lVar13 <= (longlong)uVar6) break;
        bVar5 = FUN_145d245ee(lVar12,*param_2);
        uVar9 = uVar9 + 1;
        lVar12 = lVar12 + 8;
        uVar10 = uVar9;
      } while ((bVar4 & 1) == bVar5);
      if ((bVar4 & 1) == 0) {
        if (uVar7 != uVar8) {
          memmove((void *)(lVar2 + (longlong)(int)uVar7 * 8),(void *)(lVar2 + uVar11 * 8),
                  (longlong)(int)(uVar10 - uVar8) << 3);
        }
        uVar7 = uVar7 + (uVar10 - uVar8);
      }
      uVar8 = uVar10;
      bVar4 = bVar4 ^ 1;
    } while ((longlong)uVar6 < lVar13);
    *(uint *)(param_1 + 1) = uVar7;
  }
  return;
}



// FUNCTION 145d245ee FUN_145d245ee body=55 status=ok
// SIG undefined FUN_145d245ee(void)

ulonglong FUN_145d245ee(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 145d24626 FUN_145d24626 body=40 status=ok
// SIG undefined FUN_145d24626(void)

undefined8 FUN_145d24626(undefined8 param_1,int param_2)

{
  FUN_145d2464e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d2464e FUN_145d2464e body=208 status=ok
// SIG undefined FUN_145d2464e(void)

void FUN_145d2464e(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x130) = 0;
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_1400020a8();
  }
  FUN_145d24786(param_1 + 0xe8);
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  FUN_145d24750(param_1 + 0x98);
  FUN_145a58c06(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90));
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  FUN_145d2471e(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80));
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  FUN_1457c0e82(param_1);
  return;
}



// FUNCTION 145d2471e FUN_145d2471e body=49 status=ok
// SIG undefined FUN_145d2471e(void)

void FUN_145d2471e(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145d24750 FUN_145d24750 body=53 status=ok
// SIG undefined FUN_145d24750(void)

void FUN_145d24750(longlong *param_1)

{
  FUN_145d247be();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d24786 FUN_145d24786 body=55 status=ok
// SIG undefined FUN_145d24786(void)

void FUN_145d24786(longlong *param_1)

{
  FUN_145d24818(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d247be FUN_145d247be body=90 status=ok
// SIG undefined FUN_145d247be(void)

void FUN_145d247be(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 145d24818 FUN_145d24818 body=384 status=ok
// SIG undefined FUN_145d24818(void)

void FUN_145d24818(longlong *param_1,int param_2)

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
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d2499a FUN_145d2499a body=176 status=ok
// SIG undefined FUN_145d2499a(void)

undefined8 * FUN_145d2499a(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  undefined1 local_50 [40];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1447a97f4(local_50);
  FUN_145bd1d66(&local_60,local_50);
  if (local_60 == 0) {
    *param_1 = 0;
  }
  else {
    FUN_145d24a4c(local_60,param_1);
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d24a4c FUN_145d24a4c body=183 status=ok
// SIG undefined FUN_145d24a4c(void)

undefined8 FUN_145d24a4c(longlong param_1,undefined8 param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = *(undefined8 *)(param_1 + 8);
  local_48 = *(undefined4 *)(param_1 + 0x10);
  uStack_44 = *(undefined4 *)(param_1 + 0x14);
  uStack_40 = *(undefined4 *)(param_1 + 0x18);
  uStack_3c = *(undefined4 *)(param_1 + 0x1c);
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_1 + 0x28);
  lVar1 = (longlong)local_30;
  _Src = *(void **)(param_1 + 0x20);
  if (lVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar1 * 2);
  }
  FUN_145d24b04(param_2,&local_50);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d24b04 FUN_145d24b04 body=89 status=ok
// SIG undefined FUN_145d24b04(void)

longlong * FUN_145d24b04(longlong *param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  
  uVar1 = DAT_14c868714;
  DAT_14c868714 = 0;
  if (*(longlong *)(param_2 + 8) == 0) {
    *param_1 = 0;
  }
  else {
    lVar2 = FUN_145d24b5e(param_2);
    *param_1 = lVar2;
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
  }
  DAT_14c868714 = uVar1;
  return param_1;
}



// FUNCTION 145d24b5e FUN_145d24b5e body=100 status=ok
// SIG undefined FUN_145d24b5e(void)

longlong FUN_145d24b5e(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a6654a();
  if (lVar1 != 0) {
    lVar2 = FUN_144a797b2();
    if ((((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) && (lVar2 = FUN_14117928e(), lVar2 != 0)) &&
       (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30) {
        return 0;
      }
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 145d24bc2 FUN_145d24bc2 body=31 status=ok
// SIG undefined FUN_145d24bc2(void)

void FUN_145d24bc2(longlong param_1)

{
  FUN_144729dda(param_1 + 0x18);
  FUN_145d24be2(param_1 + -0x30);
  return;
}



// FUNCTION 145d24be2 FUN_145d24be2 body=935 status=ok
// SIG undefined FUN_145d24be2(void)

void FUN_145d24be2(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined2 *puVar10;
  longlong lVar11;
  undefined1 auStack_528 [32];
  longlong local_508;
  longlong local_500;
  longlong local_4f8;
  longlong local_4f0 [7];
  undefined2 *local_4b8;
  undefined8 uStack_4b0;
  longlong local_4a8 [134];
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70;
  undefined4 local_6c;
  undefined1 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_528;
  lVar7 = FUN_1458b3932();
  lVar8 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((((lVar8 == 0) || (*(longlong *)(lVar8 + 0x1f0) == 0)) ||
      (lVar8 = FUN_1400d6ce6(), lVar7 == 0)) || (lVar8 == 0)) goto LAB_145d24cc1;
  puVar9 = (undefined8 *)FUN_1458f4156(param_1);
  piVar3 = (int *)*puVar9;
  AcquireSRWLockExclusive((PSRWLOCK)(piVar3 + 0x50));
  piVar3[0x4e] = piVar3[0x4e] + 1;
  if (*(int *)(lVar7 + 0x34) == *piVar3) {
    iVar6 = 1;
    if (piVar3[1] == 0) goto LAB_145d24c88;
  }
  else {
    iVar6 = piVar3[1] + 1;
LAB_145d24c88:
    *piVar3 = *(int *)(lVar7 + 0x34);
    piVar3[1] = iVar6;
  }
  plVar1 = (longlong *)(piVar3 + 2);
  FUN_145d24f8a(plVar1,*(undefined4 *)(lVar7 + 0xe8));
  piVar3[6] = piVar3[6] + 1;
  if ((ulonglong)*(uint *)(lVar7 + 0xe8) != 0) {
    local_4f8 = (ulonglong)*(uint *)(lVar7 + 0xe8) * 0xf0;
    local_500 = 0;
    do {
      piVar3[6] = piVar3[6] + 1;
      FUN_148e1eab2(local_4a8,*(longlong *)(lVar7 + 0xe0) + local_500);
      iVar6 = piVar3[4];
      piVar3[4] = iVar6 + 1U;
      if ((uint)piVar3[5] < iVar6 + 1U) {
        FUN_148e4246c(plVar1,iVar6);
      }
      lVar4 = *plVar1;
      lVar11 = (longlong)iVar6 * 0x448;
      local_508 = lVar4 + lVar11;
      FUN_1413505e4(local_508,local_4a8);
      *(undefined ***)(lVar4 + lVar11) = &PTR_FUN_14b8b6620;
      *(undefined8 *)(lVar4 + 0x430 + lVar11) = 0;
      *(undefined4 *)(lVar4 + 0x430 + lVar11) = local_78;
      *(undefined4 *)(lVar4 + 0x434 + lVar11) = local_74;
      *(undefined1 *)(lVar4 + 0x438 + lVar11) = 0;
      *(undefined4 *)(lVar4 + 0x43c + lVar11) = 0;
      *(undefined1 *)(lVar4 + 0x438 + lVar11) = local_70;
      *(undefined4 *)(lVar4 + 0x43c + lVar11) = local_6c;
      *(undefined1 *)(lVar4 + 0x440 + lVar11) = 0;
      *(undefined4 *)(lVar4 + 0x444 + lVar11) = 0;
      *(undefined1 *)(lVar4 + 0x440 + lVar11) = local_68;
      *(undefined4 *)(lVar4 + 0x444 + lVar11) = local_64;
      FUN_141286efe(local_4a8);
      iVar6 = *(int *)(*(longlong *)(lVar7 + 0xe0) + 0xec + local_500);
      iVar2 = *(int *)(lVar4 + 0x434 + lVar11);
      if ((iVar6 != *(int *)(lVar4 + 0x430 + lVar11)) || (iVar2 == 0)) {
        *(int *)(local_508 + 0x430) = iVar6;
        *(int *)(local_508 + 0x434) = iVar2 + 1;
      }
      lVar4 = local_508 + 0x1f0;
      FUN_1411bce66(lVar8,local_4a8,lVar4,&DAT_14cbe4638);
      if (local_4a8[0] == 0) {
        cVar5 = FUN_144729dda(param_1 + 9);
        if ((cVar5 != '\0') &&
           (FUN_1411bd35e(lVar8,local_4f0,lVar4,&DAT_14cbe4638), local_4f0[0] != 0)) {
          FUN_1400020a8();
        }
      }
      else {
        local_4b8 = (undefined2 *)0x0;
        uStack_4b0 = 0;
        FUN_1401031ac(local_4a8[0],0,&local_4b8);
        puVar10 = &DAT_149dfb77a;
        if ((int)uStack_4b0 != 0) {
          puVar10 = local_4b8;
        }
        FUN_140002266(local_4a8,L"TextureRenderTarget2D\'%s\'",puVar10);
        FUN_140775538(local_508 + 0x1d8,local_4a8);
        if (local_4a8[0] != 0) {
          FUN_1400020a8();
        }
        if (local_4b8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        iVar6 = *(int *)(local_508 + 0x1d4);
        if (*(char *)(local_508 + 0x1d0) == '\0') {
          if (iVar6 != 0) goto LAB_145d24f1b;
          iVar6 = 0;
        }
        *(undefined1 *)(local_508 + 0x1d0) = 0;
        *(int *)(local_508 + 0x1d4) = iVar6 + 1;
      }
LAB_145d24f1b:
      local_500 = local_500 + 0xf0;
    } while (local_4f8 != local_500);
  }
  FUN_145d24ff2(piVar3);
  ReleaseSRWLockExclusive((PSRWLOCK)(piVar3 + 0x50));
LAB_145d24cc1:
  if ((local_60 ^ (ulonglong)auStack_528) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d24f8a FUN_145d24f8a body=61 status=ok
// SIG undefined FUN_145d24f8a(void)

void FUN_145d24f8a(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)((longlong)param_1 + 0xc)) {
    FUN_145d24fc7(*param_1,*(undefined4 *)(param_1 + 1));
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  FUN_148e423b2(param_1);
  return;
}



// FUNCTION 145d24fc7 FUN_145d24fc7 body=43 status=ok
// SIG undefined FUN_145d24fc7(void)

void FUN_145d24fc7(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_141286efe(param_1);
    param_1 = param_1 + 0x448;
  }
  return;
}


