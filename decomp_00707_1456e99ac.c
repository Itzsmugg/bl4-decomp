// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1456e99ac FUN_1456e99ac body=177 status=ok
// SIG undefined FUN_1456e99ac(void)

void FUN_1456e99ac(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14023c1e8(param_1 + 0x48);
  FUN_1449027d0(param_1,&local_38);
  lVar3 = *(longlong *)(local_38 + 0x420);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x78));
  *(int *)(lVar3 + 0x70) = *(int *)(lVar3 + 0x70) + 1;
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
  FUN_14023c1e8(lVar3 + 0x10,param_2);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x78));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456e9a5e FUN_1456e9a5e body=373 status=ok
// SIG undefined FUN_1456e9a5e(void)

void FUN_1456e9a5e(longlong param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  longlong *plVar8;
  undefined1 auStack_978 [32];
  undefined4 local_958;
  char local_951;
  char *local_950;
  undefined4 *local_948;
  undefined1 local_93c [4];
  char *local_938 [2];
  char local_928 [1144];
  char local_4b0 [1160];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_978;
  local_951 = param_2;
  lVar2 = FUN_1400d7050(param_1 + 0x30);
  if (lVar2 != 0) {
    lVar3 = FUN_144a5dd5e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      pcVar7 = local_928;
      plVar8 = (longlong *)(lVar2 + 0xda8);
      uVar4 = (**(code **)(*(longlong *)(lVar2 + 0xda8) + 0x50))(plVar8);
      FUN_14023c3a2(local_938,uVar4);
      if (local_951 == '\0') {
        pcVar6 = local_4b0;
        pcVar5 = pcVar7;
LAB_1456e9b01:
        pcVar7 = pcVar5;
        if (*pcVar6 == '\x01') {
LAB_1456e9b09:
          if (pcVar7 != (char *)0x0) {
            cVar1 = FUN_1456e9bd4(pcVar7,1);
            if (cVar1 == '\0') {
              local_958 = (**(code **)(*plVar8 + 0x60))(plVar8,local_951);
              local_948 = &local_958;
              local_950 = &local_951;
              FUN_1456e9bf0(param_1 + 0x48,local_93c);
            }
          }
        }
      }
      else {
        pcVar5 = local_4b0 + 8;
        pcVar6 = local_4b0 + 0x480;
        if (local_951 == '\x01') goto LAB_1456e9b01;
        if (local_951 == '\x02') {
          if (local_4b0[0] == '\0') goto LAB_1456e9b01;
          goto LAB_1456e9b09;
        }
      }
      FUN_14023c33c(local_938);
      goto LAB_1456e9b5c;
    }
  }
  local_938[0] = &local_951;
  FUN_148e40522(param_1 + 0x48,&local_950);
LAB_1456e9b5c:
  if ((local_28 ^ (ulonglong)auStack_978) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456e9bd4 FUN_1456e9bd4 body=27 status=ok
// SIG undefined FUN_1456e9bd4(void)

undefined8 FUN_1456e9bd4(longlong param_1,char param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)(param_1 + 0x458);
  if (param_2 == '\0') {
    puVar2 = (undefined1 *)(param_1 + 0x228);
  }
  uVar1 = CONCAT71((int7)((ulonglong)(param_1 + 0x228) >> 8),*puVar2) & 0xffffffffffffff02;
  return CONCAT71((int7)(uVar1 >> 8),(byte)uVar1 >> 1);
}



// FUNCTION 1456e9bf0 FUN_1456e9bf0 body=297 status=ok
// SIG undefined FUN_1456e9bf0(void)

undefined4 * FUN_1456e9bf0(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  byte *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_141109398(param_1,local_48);
  puVar2 = (undefined4 *)param_3[1];
  bVar1 = *(byte *)*param_3;
  *local_40 = bVar1;
  *(undefined4 *)(local_40 + 4) = *puVar2;
  local_40[8] = 0xff;
  local_40[9] = 0xff;
  local_40[10] = 0xff;
  local_40[0xb] = 0xff;
  local_4c = local_48[0];
  local_58 = 0;
  cVar3 = FUN_141109300(param_1,bVar1,local_40);
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
      uVar5 = *(int *)(param_1 + 0x48) - 1U & (uint)bVar1;
      *(uint *)(local_40 + 0xc) = uVar5;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 8) =
           *(undefined4 *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar5) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar5) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1456e9d1a(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456e9d1a FUN_1456e9d1a body=422 status=ok
// SIG undefined FUN_1456e9d1a(void)

void FUN_1456e9d1a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
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
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar6 = (longlong)iVar4 * 0x10;
        uVar8 = (int)param_1[9] - 1U & (uint)*(byte *)(lVar2 + lVar6);
        *(uint *)(lVar2 + 0xc + lVar6) = uVar8;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456e9ec2 FUN_1456e9ec2 body=66 status=ok
// SIG undefined FUN_1456e9ec2(void)

undefined8 FUN_1456e9ec2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    lVar2 = FUN_144a7a908();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return *(undefined8 *)(lVar1 + 0x3c0);
    }
  }
  return 0;
}



// FUNCTION 1456e9f04 FUN_1456e9f04 body=66 status=ok
// SIG undefined FUN_1456e9f04(void)

undefined8 FUN_1456e9f04(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    lVar2 = FUN_144a7a908();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return *(undefined8 *)(lVar1 + 0x3c8);
    }
  }
  return 0;
}



// FUNCTION 1456e9f46 FUN_1456e9f46 body=237 status=ok
// SIG undefined FUN_1456e9f46(void)

undefined8 FUN_1456e9f46(void)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') {
      return 0;
    }
    if ((DAT_14c8442b8 & 1) != 0) {
      return 0;
    }
LAB_1456e9f9a:
    if ((DAT_14c760d84 == 0) || ((DAT_14ca84f5a & 1) == 0)) {
      cVar1 = FUN_1406917e6();
      if (cVar1 == '\0') {
        return 0;
      }
      if (DAT_14c761950 == 0) {
        return 0;
      }
    }
    else if (DAT_14c761950 == 0) goto LAB_1456e9f93;
    uVar2 = 1;
  }
  else {
    if (DAT_14c8442b8 == 0) goto LAB_1456e9f9a;
LAB_1456e9f93:
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1456ea034 FUN_1456ea034 body=52 status=ok
// SIG undefined FUN_1456ea034(void)

void FUN_1456ea034(longlong *param_1)

{
  FUN_14840c9dc();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1456ea068 FUN_1456ea068 body=108 status=ok
// SIG undefined FUN_1456ea068(void)

void FUN_1456ea068(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_2 + 200);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_1410872ba(param_1,iVar2);
  }
  lVar3 = *(longlong *)(param_2 + 0xc0);
  if (*(longlong *)(param_2 + 0xc0) == 0) {
    lVar3 = param_2;
  }
  FUN_14840cf9c((longlong)iVar2 * 8 + *param_1,lVar3,uVar1);
  return;
}



// FUNCTION 1456ea0d4 FUN_1456ea0d4 body=440 status=ok
// SIG undefined FUN_1456ea0d4(void)

void FUN_1456ea0d4(uint *param_1)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  uint *puVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  byte bVar8;
  longlong lVar9;
  longlong lVar10;
  char *pcVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  
  lVar13 = (longlong)(int)param_1[6];
  if ((int)(param_1[8] + 1) < (int)(param_1[0x10] + param_1[6])) {
    lVar2 = *(longlong *)(param_1 + 2);
    lVar12 = (longlong)(int)param_1[8] + 1;
    do {
      lVar9 = lVar13;
      puVar4 = param_1 + 0xe;
      if (lVar12 < lVar13) {
        lVar9 = 0;
        puVar4 = param_1 + 4;
      }
      lVar9 = *(longlong *)(*(longlong *)puVar4 + lVar9 * -8 + lVar12 * 8);
      param_1[10] = param_1[10] + 1;
      if (((lVar9 != 0) && (lVar7 = FUN_144a79cc8(lVar9), lVar7 != 0)) &&
         ((uVar6 = *param_1, (uVar6 & 1) == 0 || ((*(uint *)(lVar9 + 8) >> 0x1e & 1) == 0)))) {
        if ((uVar6 & 2) != 0) {
          cVar5 = FUN_144affb44(lVar9);
          if (cVar5 == '\0') goto LAB_1456ea178;
          uVar6 = *param_1;
        }
        if ((uVar6 & 4) == 0) {
          lVar10 = *(longlong *)(lVar7 + 0xc0);
        }
        else {
          if (((*(byte *)(lVar7 + 0x240) & 0x20) == 0) ||
             (bVar8 = 1, (*(byte *)(lVar7 + 0x242) & 8) != 0)) {
            bVar8 = 1;
            if ((*(byte *)(lVar7 + 0x241) & 0x20) == 0) {
              bVar8 = (*(byte *)(lVar7 + 0x241) & 0x40) >> 6;
            }
          }
          lVar10 = *(longlong *)(lVar7 + 0xc0);
          if (lVar10 == 0) {
LAB_1456ea25b:
            pcVar11 = (char *)0x0;
          }
          else {
            iVar1 = *(int *)(lVar10 + 0x1b0);
            if (((longlong)iVar1 < 0) || (*(int *)(lVar10 + 0x1a8) <= iVar1)) goto LAB_1456ea25b;
            pcVar11 = (char *)((longlong)iVar1 * 0x78 + *(longlong *)(lVar10 + 0x1a0));
          }
          pcVar3 = *(char **)(lVar7 + 0x2e8);
          if (pcVar3 == (char *)0x0) {
            bVar14 = true;
          }
          else {
            bVar14 = *pcVar3 == '\x02';
          }
          if ((bVar8 & ((pcVar11 == (char *)0x0 || pcVar3 == pcVar11) | bVar14)) != 1)
          goto LAB_1456ea178;
        }
        if (lVar10 == lVar2) {
          if (*(longlong *)(lVar2 + 0x30) == lVar7) {
LAB_1456ea282:
            *(longlong *)(param_1 + 0xc) = lVar9;
            param_1[8] = (uint)lVar12;
            return;
          }
          lVar7 = FUN_14059e8cc();
          if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) goto LAB_1456ea282;
        }
      }
LAB_1456ea178:
      lVar12 = lVar12 + 1;
    } while (lVar12 < (int)param_1[0x10] + lVar13);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}



// FUNCTION 1456ea28c FUN_1456ea28c body=113 status=ok
// SIG undefined FUN_1456ea28c(void)

undefined8 FUN_1456ea28c(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_2;
  local_28 = *(longlong *)(param_2 + 4);
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_147ac850a(param_1,*(undefined8 *)(param_2 + 2),&local_28,uVar1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456ea2fe FUN_1456ea2fe body=131 status=ok
// SIG undefined FUN_1456ea2fe(void)

void FUN_1456ea2fe(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_2 + 200) = 0;
  if (*(int *)(param_2 + 0xcc) < 0) {
    FUN_14840cb18(param_2);
  }
  local_20 = FUN_1401e2408();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  FUN_14840ca36(param_1,&local_20,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456ea382 FUN_1456ea382 body=226 status=ok
// SIG undefined FUN_1456ea382(void)

longlong * FUN_1456ea382(longlong *param_1)

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
  pcVar13 = FUN_146470868;
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



// FUNCTION 1456ea466 FUN_1456ea466 body=138 status=ok
// SIG undefined FUN_1456ea466(void)

code * FUN_1456ea466(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"WorldBBoxSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000002a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1464708f0;
}



// FUNCTION 1456ea4f0 FUN_1456ea4f0 body=138 status=ok
// SIG undefined FUN_1456ea4f0(void)

code * FUN_1456ea4f0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Grid";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2DArray<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x280000002c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1456ea466;
}



// FUNCTION 1456ea57a FUN_1456ea57a body=138 status=ok
// SIG undefined FUN_1456ea57a(void)

code * FUN_1456ea57a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GridSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000002d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1456ea4f0;
}



// FUNCTION 1456ea612 FUN_1456ea612 body=49 status=ok
// SIG undefined FUN_1456ea612(void)

undefined8 FUN_1456ea612(ulonglong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_144a78877(param_1 >> 0x20);
  uVar2 = FUN_144a78877(param_1 & 0xffffffff,param_2);
  return CONCAT44(uVar1,uVar2);
}



// FUNCTION 1456ea644 FUN_1456ea644 body=132 status=ok
// SIG undefined FUN_1456ea644(void)

void FUN_1456ea644(longlong param_1,int param_2)

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



// FUNCTION 1456ea6ca FUN_1456ea6ca body=376 status=ok
// SIG undefined FUN_1456ea6ca(void)

void FUN_1456ea6ca(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_68 [40];
  int local_40;
  int local_3c;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  plVar2 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  iVar1 = local_3c;
  local_40 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14490f2e4(param_1,plVar2,iVar1 != 0,local_40 != 0);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456ea844 FUN_1456ea844 body=226 status=ok
// SIG undefined FUN_1456ea844(void)

longlong * FUN_1456ea844(longlong *param_1)

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
  pcVar13 = FUN_1462b9e08;
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



// FUNCTION 1456ea92c FUN_1456ea92c body=138 status=ok
// SIG undefined FUN_1456ea92c(void)

undefined1 * FUN_1456ea92c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14482e3b2();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"SceneTextures";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSceneTextureUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x18;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1456ea928;
}



// FUNCTION 1456ea9b6 FUN_1456ea9b6 body=144 status=ok
// SIG undefined FUN_1456ea9b6(void)

code * FUN_1456ea9b6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a890ae();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"MobileSceneTextures";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FMobileSceneTextureUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x9000000019;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1456ea92c;
}



// FUNCTION 1456eaa46 FUN_1456eaa46 body=456 status=ok
// SIG undefined FUN_1456eaa46(void)

void FUN_1456eaa46(longlong *param_1,longlong param_2,uint *param_3,longlong *param_4,char param_5)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  
  cVar3 = (**(code **)(*param_1 + 0x38))(param_1,0xffffffff,param_4);
  if (cVar3 == '\0') {
    return;
  }
  plVar1 = param_1 + -0x77d;
  lVar8 = (**(code **)(*plVar1 + 0x5d0))(plVar1);
  if (lVar8 == 0) {
LAB_1456eabd5:
    *param_3 = 0xffffffff;
LAB_1456eaaf8:
    uVar5 = (**(code **)(*param_1 + 0x60))(param_1,param_4);
    *param_3 = uVar5;
  }
  else {
    lVar9 = FUN_144a5dd5e();
    if (((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
         != lVar9 + 0x30)) || (lVar8 = FUN_140254ee4(lVar8), lVar8 == 0)) goto LAB_1456eabd5;
    cVar4 = FUN_140254ec8(lVar8);
    cVar3 = *(char *)(lVar8 + 0x147);
    *param_3 = 0xffffffff;
    if ((cVar4 == '\0') || (cVar3 != '\0')) goto LAB_1456eaaf8;
  }
  if (param_5 == '\0') {
    return;
  }
  lVar8 = *param_4;
  if (lVar8 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = *(longlong *)(lVar8 + 0xa0);
    if ((lVar9 == 0) && (lVar9 = *(longlong *)(lVar8 + 0x98), lVar9 == 0)) {
      lVar9 = *(longlong *)(lVar8 + 0x3c);
    }
  }
  uVar6 = FUN_14042831e(plVar1);
  lVar8 = FUN_14011c349();
  uVar5 = *param_3;
  uVar7 = uVar5;
  if ((lVar9 == *(longlong *)(lVar8 + 0x78)) && (uVar7 = uVar6, uVar5 != uVar6)) {
    if (uVar5 == 0xffffffff) {
      *param_3 = uVar6;
      uVar5 = FUN_1403ae46b();
      if (uVar6 != uVar5) goto LAB_1456eab73;
      uVar5 = FUN_146229be8(plVar1);
      *param_3 = uVar5;
      if (uVar5 == 0xffffffff) {
        uVar5 = FUN_140bad87a(plVar1,param_4);
        *param_3 = uVar5;
      }
    }
    *(char *)(param_2 + 0x161) = (char)uVar5;
  }
  else if (uVar7 == 0xffffffff) {
    uVar5 = FUN_140bad87a(plVar1,param_4);
    *param_3 = uVar5;
    goto LAB_1456eab75;
  }
LAB_1456eab73:
  uVar5 = *param_3;
LAB_1456eab75:
  if ((((-1 < (int)uVar5) && ((int)uVar5 < (int)param_1[0x7a1])) &&
      (lVar8 = (ulonglong)uVar5 * 0x48 + param_1[0x7a0], lVar8 != 0)) &&
     (iVar2 = *(int *)(lVar8 + 0xc), iVar2 != -1)) {
    *(int *)(param_2 + 4) = iVar2;
  }
  return;
}



// FUNCTION 1456eac0e FUN_1456eac0e body=47 status=ok
// SIG undefined FUN_1456eac0e(void)

void FUN_1456eac0e(longlong param_1)

{
  FUN_144a63f30();
  FUN_14025a0ce(param_1);
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_1456eac3e(param_1);
    return;
  }
  return;
}



// FUNCTION 1456eac3e FUN_1456eac3e body=566 status=ok
// SIG undefined FUN_1456eac3e(void)

void FUN_1456eac3e(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0xb8) != '\0') {
    return;
  }
  lVar2 = FUN_144a6654a(param_1 + 0x30);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  *(longlong *)(param_1 + 0xe0) = lVar2;
  lVar2 = FUN_140cc27fc(param_1 + 0x58);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  *(longlong *)(param_1 + 0xe8) = lVar2;
  plVar3 = (longlong *)FUN_1456eae74(param_1 + 0x80);
  if ((plVar3 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
    if (plVar3 == (longlong *)0x0) {
      lVar2 = 0;
      goto LAB_1456eaccb;
    }
  }
  else {
    FUN_1456cec3c(plVar3);
  }
  lVar2 = plVar3[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar3 + 1000))(plVar3);
    lVar2 = plVar3[0x22];
  }
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
LAB_1456eaccb:
  *(longlong *)(param_1 + 0x1a0) = lVar2;
  if (*(int *)(param_1 + 0xc) <= DAT_14c9647bc) {
    if (*(longlong *)(param_1 + 0xe0) != 0) {
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0xe0) + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar2 = 0;
      }
      FUN_1447f71cc(lVar2,0x40000000);
    }
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0xe8) + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar2 = 0;
      }
      FUN_1447f71cc(lVar2,0x40000000);
    }
    if (*(longlong *)(param_1 + 0x1a0) != 0) {
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x1a0) + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar2 = 0;
      }
      FUN_1447f71cc(lVar2,0x40000000);
    }
  }
  FUN_140648376(param_1 + 0xf0,*(undefined8 *)(param_1 + 0xe8));
  *(undefined8 *)(param_1 + 0x110) = 0x4280000042800000;
  *(undefined1 *)(param_1 + 0x10f) = 1;
  *(char *)(param_1 + 0x10c) = (*(longlong *)(param_1 + 0xe8) != 0) * '\x03';
  *(undefined1 *)(param_1 + 0xb8) = 1;
  return;
}



// FUNCTION 1456eae74 FUN_1456eae74 body=100 status=ok
// SIG undefined FUN_1456eae74(void)

longlong FUN_1456eae74(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a6654a();
  if (lVar1 != 0) {
    lVar2 = FUN_144a797b2();
    if ((((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) && (lVar2 = FUN_145987442(), lVar2 != 0)) &&
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



// FUNCTION 1456eaed8 FUN_1456eaed8 body=202 status=ok
// SIG undefined FUN_1456eaed8(void)

void FUN_1456eaed8(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *(int *)(param_1 + 0x18) + 0x1f;
  uVar4 = 4;
  if (0x9f < uVar5) {
    uVar5 = uVar5 >> 5;
    if (*(int *)(param_1 + 0x1c) + 0x1fU < 0xa0) {
      uVar4 = 4;
      if (4 < uVar5) {
        uVar4 = uVar5;
      }
    }
    else {
      uVar4 = (uVar5 * 3 >> 3) + uVar5 + 0x10;
    }
    uVar3 = FUN_144a3809e(uVar4 << 2,0);
    uVar1 = (uint)(uVar3 >> 2);
    uVar4 = 0x7fffffff;
    if ((int)uVar5 <= (int)uVar1) {
      uVar4 = uVar1;
    }
  }
  *(uint *)(param_1 + 0x1c) = uVar4 << 5;
  uVar5 = param_2 + 0x1fU >> 5;
  FUN_14499171c(param_1,uVar5,uVar4,4);
  if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar2 = param_1;
  }
  memset((void *)(lVar2 + (ulonglong)uVar5 * 4),0,(ulonglong)(uVar4 - uVar5) << 2);
  return;
}



// FUNCTION 1456eafa2 FUN_1456eafa2 body=155 status=ok
// SIG undefined FUN_1456eafa2(void)

void FUN_1456eafa2(int param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14c9a6590;
  if (param_1 <= (int)DAT_14c9a6590) {
    if (DAT_14c9a6594 == 0) {
      uVar2 = 4;
      if (4 < DAT_14c9a6590) {
        uVar2 = DAT_14c9a6590;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)DAT_14c9a6590 * 3) >> 3) + (longlong)(int)DAT_14c9a6590 +
              0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    DAT_14c9a6594 = (int)uVar5;
    FUN_1446f8d3c(&DAT_14c9a6588,param_1,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1456eb03e FUN_1456eb03e body=132 status=ok
// SIG undefined FUN_1456eb03e(void)

void FUN_1456eb03e(longlong param_1,int param_2)

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



// FUNCTION 1456eb0c4 FUN_1456eb0c4 body=123 status=ok
// SIG undefined FUN_1456eb0c4(void)

void FUN_1456eb0c4(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 0x11) {
      iVar5 = 0x10;
    }
    else {
      lVar4 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x10c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x10c) = iVar5;
    FUN_1456eb140(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1456eb140 FUN_1456eb140 body=141 status=ok
// SIG undefined FUN_1456eb140(void)

void FUN_1456eb140(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,0x10);
  return;
}



// FUNCTION 1456eb1cd FUN_1456eb1cd body=211 status=ok
// SIG undefined FUN_1456eb1cd(void)

void FUN_1456eb1cd(longlong param_1,double *param_2,double *param_3,double param_4,int param_5,
                  int *param_6,double *param_7)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  lVar2 = (longlong)param_5;
  lVar1 = *(longlong *)(param_1 + 0x20);
  dVar3 = (double)*(float *)(lVar1 + 0x14 + lVar2 * 0x18);
  dVar5 = (double)*(float *)(lVar1 + 0x10 + lVar2 * 0x18);
  dVar4 = (double)*(float *)(lVar1 + 0xc + lVar2 * 0x18);
  if (((ABS((param_2[2] - (double)*(float *)(lVar1 + 8 + lVar2 * 0x18)) * dVar3 +
            (*param_2 - (double)*(float *)(lVar1 + lVar2 * 0x18)) * dVar4 +
            (param_2[1] - (double)*(float *)(lVar1 + 4 + lVar2 * 0x18)) * dVar5) <= param_4) &&
      (dVar3 = dVar3 * param_3[2] + dVar4 * *param_3 + dVar5 * param_3[1],
      dVar3 <= -9.99999993922529e-09)) && (dVar3 < *param_7)) {
    *param_7 = dVar3;
    *param_6 = param_5;
  }
  return;
}



// FUNCTION 1456eb2a0 FUN_1456eb2a0 body=62 status=ok
// SIG undefined FUN_1456eb2a0(void)

void FUN_1456eb2a0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1456eb2de(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1456eb2de FUN_1456eb2de body=89 status=ok
// SIG undefined FUN_1456eb2de(void)

ulonglong FUN_1456eb2de(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1456eb338 FUN_1456eb338 body=205 status=ok
// SIG undefined FUN_1456eb338(void)

void FUN_1456eb338(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  int *piVar7;
  longlong lVar8;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar8 = (longlong)*(int *)(lVar2 + 0xc + (longlong)param_2 * 0x10);
  iVar6 = *(int *)((longlong)plVar5 + lVar8 * 4);
  if (iVar6 == param_2) {
    piVar7 = (int *)((longlong)plVar5 + lVar8 * 4);
  }
  else {
    do {
      piVar7 = (int *)(lVar2 + (longlong)iVar6 * 0x10 + 8);
      iVar6 = *piVar7;
    } while (iVar6 != param_2);
  }
  *piVar7 = *(int *)(lVar2 + (longlong)param_2 * 0x10 + 8);
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1456eb406 FUN_1456eb406 body=120 status=ok
// SIG undefined FUN_1456eb406(void)

undefined8 * FUN_1456eb406(undefined8 *param_1)

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
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x14));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x14),4000);
  return param_1;
}



// FUNCTION 1456eb480 FUN_1456eb480 body=31 status=ok
// SIG undefined FUN_1456eb480(void)

undefined8 FUN_1456eb480(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1456eb4a0 FUN_1456eb4a0 body=331 status=ok
// SIG undefined FUN_1456eb4a0(void)

undefined4 * FUN_1456eb4a0(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined4 local_40 [2];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1456eb672(param_1,local_40);
  param_4 = (longlong *)*param_4;
  lVar5 = *param_4;
  *local_38 = lVar5;
  if ((lVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined1 *)((longlong)local_38 + 0xc) = *(undefined1 *)((longlong)param_4 + 0xc);
  *(int *)(local_38 + 1) = (int)param_4[1];
  local_38[5] = 0;
  local_38[6] = 0x100000000;
  *(undefined4 *)(local_38 + 7) = 0xffffffff;
  cVar1 = FUN_1456eb5ec(param_1,param_3,local_38);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_38 + 0x3c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 7) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_40[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_1456eb756(param_1);
    }
  }
  *param_2 = local_40[0];
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456eb5ec FUN_1456eb5ec body=133 status=ok
// SIG undefined FUN_1456eb5ec(void)

undefined8 FUN_1456eb5ec(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
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
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar14 = FUN_14027673a(), iVar14 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar14 * 0x40);
    if (*(longlong *)(*param_1 + 0x28 + (longlong)iVar14 * 0x40) != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[4];
    uVar7 = param_3[5];
    uVar8 = param_3[6];
    uVar9 = param_3[7];
    uVar10 = param_3[8];
    uVar11 = param_3[9];
    uVar12 = param_3[10];
    uVar13 = param_3[0xb];
    *(undefined8 *)(puVar1 + 0xc) = *(undefined8 *)(param_3 + 0xc);
    puVar1[8] = uVar10;
    puVar1[9] = uVar11;
    puVar1[10] = uVar12;
    puVar1[0xb] = uVar13;
    puVar1[4] = uVar6;
    puVar1[5] = uVar7;
    puVar1[6] = uVar8;
    puVar1[7] = uVar9;
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_1461f1164(param_1,*param_4);
    *param_4 = iVar14;
    return 1;
  }
  return 0;
}



// FUNCTION 1456eb672 FUN_1456eb672 body=228 status=ok
// SIG undefined FUN_1456eb672(void)

int * FUN_1456eb672(longlong *param_1,int *param_2)

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



// FUNCTION 1456eb756 FUN_1456eb756 body=509 status=ok
// SIG undefined FUN_1456eb756(void)

void FUN_1456eb756(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
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
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar6 = (longlong)iVar4 * 0x40;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)
                 (int)((uVar8 >> 0x10 ^ uVar8) * 0x133 + (uint)*(ushort *)(lVar2 + 8 + lVar6) +
                      0x288252e3) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x3c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x38 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456eb954 FUN_1456eb954 body=58 status=ok
// SIG undefined FUN_1456eb954(void)

void FUN_1456eb954(undefined8 *param_1,int param_2)

{
  FUN_144922684(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1456eb98e(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1456eb98e FUN_1456eb98e body=112 status=ok
// SIG undefined FUN_1456eb98e(void)

void FUN_1456eb98e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x28,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x28)) {
      uVar2 = uVar1 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x28,8);
  }
  return;
}



// FUNCTION 1456eb9fe FUN_1456eb9fe body=392 status=ok
// SIG undefined FUN_1456eb9fe(void)

undefined8 * FUN_1456eb9fe(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  short ***pppsVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  short ****ppppsVar7;
  int iVar8;
  longlong lVar9;
  short ***pppsVar10;
  longlong lVar11;
  undefined1 auStack_458 [32];
  short ***local_438;
  uint local_430;
  undefined1 local_42c;
  short **local_428;
  uint local_420;
  undefined1 local_41c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_458;
  iVar1 = *(int *)(param_2 + 1);
  uVar4 = (ulonglong)iVar1;
  if (uVar4 == 0) {
LAB_1456ebb59:
    *param_1 = 0;
  }
  else {
    pppsVar2 = (short ***)*param_2;
    pppsVar10 = (short ***)((longlong)pppsVar2 + (uVar4 - 1) * 2);
    if (pppsVar10 < pppsVar2) {
      iVar8 = 0;
    }
    else {
      uVar5 = 0;
      do {
        if (9 < (ushort)(*(short *)pppsVar10 - 0x30U)) break;
        uVar5 = uVar5 + 1;
        pppsVar10 = (short ***)((longlong)pppsVar10 + -2);
      } while (pppsVar2 <= pppsVar10);
      iVar8 = 0;
      if ((uVar5 != 0 && (int)uVar5 < iVar1) && (uVar5 < 0xb)) {
        uVar6 = (ulonglong)uVar5;
        lVar11 = -uVar6;
        if ((*(short *)((longlong)pppsVar2 + (uVar4 + (-1 - uVar6)) * 2) == 0x5f) &&
           ((uVar5 == 1 || (iVar8 = 0, *(short *)((longlong)pppsVar2 + (uVar4 - uVar6) * 2) != 0x30)
            ))) {
          lVar9 = 0;
          do {
            lVar9 = (ulonglong)*(ushort *)((longlong)pppsVar2 + (uVar4 + lVar11) * 2) + lVar9 * 10 +
                    -0x30;
            lVar11 = lVar11 + 1;
          } while (lVar11 != 0);
          if (lVar9 < 0x7fffffff) {
            *(uint *)(param_2 + 1) = ~uVar5 + iVar1;
            iVar8 = (int)lVar9 + 1;
            uVar4 = (ulonglong)(~uVar5 + iVar1);
          }
          else {
            iVar8 = 0;
          }
        }
      }
      if ((int)uVar4 == 0) goto LAB_1456ebb59;
    }
    uVar5 = (uint)uVar4;
    if ((*(byte *)((longlong)param_2 + 0xc) & 1) == 0) {
      if (0 < (int)uVar5) {
        uVar6 = 0x400;
        if (uVar5 < 0x400) {
          uVar6 = uVar4 & 0xffffffff;
        }
        uVar4 = 0;
        do {
          *(char *)((longlong)&local_428 + uVar4) = (char)*(short *)((longlong)pppsVar2 + uVar4 * 2)
          ;
          uVar4 = uVar4 + 1;
        } while (uVar6 != uVar4);
      }
      local_438 = &local_428;
      ppppsVar7 = &local_438;
      local_42c = 0;
      local_430 = uVar5;
    }
    else {
      ppppsVar7 = (short ****)&local_428;
      local_41c = 1;
      local_428 = (short **)pppsVar2;
      local_420 = uVar5;
    }
    uVar3 = FUN_14001a6c0(ppppsVar7,param_3);
    *(undefined4 *)param_1 = uVar3;
    *(int *)((longlong)param_1 + 4) = iVar8;
  }
  if ((local_20 ^ (ulonglong)auStack_458) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1456ebb88 FUN_1456ebb88 body=124 status=ok
// SIG undefined FUN_1456ebb88(void)

void FUN_1456ebb88(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_1;
    uVar5 = 0;
    do {
      cVar4 = FUN_144925eda(lVar2 + uVar5,param_2);
      if (cVar4 != '\0') {
        if ((int)(~uVar5 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar5 = uVar5 + 8;
    } while ((longlong)(int)lVar3 * 8 != uVar5);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14027bf84(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = *param_2;
  return;
}



// FUNCTION 1456ebc04 FUN_1456ebc04 body=48 status=ok
// SIG undefined FUN_1456ebc04(void)

void FUN_1456ebc04(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1456ebc34 FUN_1456ebc34 body=48 status=ok
// SIG undefined FUN_1456ebc34(void)

void FUN_1456ebc34(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 1456ebc64 FUN_1456ebc64 body=48 status=ok
// SIG undefined FUN_1456ebc64(void)

void FUN_1456ebc64(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x40,8);
  }
  return;
}



// FUNCTION 1456ebc94 FUN_1456ebc94 body=110 status=ok
// SIG undefined FUN_1456ebc94(void)

void FUN_1456ebc94(longlong param_1,uint param_2)

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
  if (*(int *)(param_1 + 0x48) < iVar3 && 0 < (int)param_2 || iVar3 < *(int *)(param_1 + 0x48)) {
    FUN_14150c7c0(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_140ddf0fc(param_1);
    return;
  }
  FUN_143d18ca6(param_1);
  FUN_14150c7c0(param_1,param_2);
  return;
}



// FUNCTION 1456ebd02 FUN_1456ebd02 body=987 status=ok
// SIG undefined FUN_1456ebd02(void)

void FUN_1456ebd02(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = param_2[1];
  if ((longlong)(int)lVar4 != 0) {
    local_68 = param_1 + 0x148;
    lVar12 = *param_2;
    lVar11 = 0;
    do {
      lVar3 = *(longlong *)(lVar12 + lVar11);
      if ((((lVar3 != 0) && (lVar8 = FUN_14027a428(), lVar8 != 0)) &&
          (*(int *)(lVar8 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
         ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
           lVar8 + 0x30 && (lVar3 = *(longlong *)(lVar12 + lVar11), lVar3 != 0)))) {
        lVar8 = FUN_14027a428();
        if ((lVar8 == 0) ||
           ((*(int *)(lVar3 + 0x38) < *(int *)(lVar8 + 0x38) ||
            (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
             lVar8 + 0x30)))) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(undefined8 *)(lVar12 + lVar11);
        }
        plVar9 = (longlong *)FUN_1456ec1e9(DAT_14c951640,uVar10);
        if (plVar9 != (longlong *)0x0) {
          FUN_1401924dc(plVar9);
          iVar7 = *(int *)(param_1 + 0x150);
          *(uint *)(param_1 + 0x150) = iVar7 + 1U;
          if (*(uint *)(param_1 + 0x154) < iVar7 + 1U) {
            FUN_1456ec2a6(local_68,iVar7);
          }
          lVar3 = *(longlong *)(param_1 + 0x148);
          *(undefined8 *)(lVar3 + (longlong)iVar7 * 8) = 0;
          FUN_1401924dc(plVar9);
          *(longlong **)(lVar3 + (longlong)iVar7 * 8) = plVar9;
          plVar9[6] = param_1;
          (**(code **)(*plVar9 + 0x2a0))(plVar9);
          plVar9[5] = *(longlong *)(param_1 + 0x158);
          (**(code **)(*plVar9 + 0x2b0))(plVar9,param_1 + 0x158);
          (**(code **)(*plVar9 + 0x2c0))(plVar9,*(undefined1 *)(param_1 + 0x169));
          if (DAT_14c872a72 == '\0') {
            FUN_140113f48(plVar9);
          }
        }
      }
      lVar11 = lVar11 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar11);
  }
  if (*(longlong *)(param_1 + 0x128) != 0) {
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,3,0x10);
    local_50 = 3;
    plVar9 = *(longlong **)(param_1 + 0x10);
    if (plVar9 == (longlong *)0x0) {
LAB_1456ec012:
      *local_58 = &PTR_LAB_14b3f8f90;
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 1;
      lVar4 = DAT_14c758608 + 1;
      if (lVar12 == 0) {
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 2;
        lVar4 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar4;
      local_58[2] = lVar12;
      *local_58 = &PTR_FUN_14b3f8b90;
      local_58[3] = 0;
      local_58[4] = 0;
      local_58[5] = param_1;
    }
    else {
      iVar7 = (int)plVar9[1];
      do {
        if (iVar7 == 0) goto LAB_1456ec012;
        LOCK();
        iVar5 = (int)plVar9[1];
        bVar13 = iVar7 == iVar5;
        if (bVar13) {
          *(int *)(plVar9 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar13);
      uVar10 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      *local_58 = &PTR_LAB_14b3f8f90;
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 1;
      lVar4 = DAT_14c758608 + 1;
      if (lVar12 == 0) {
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 2;
        lVar4 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar4;
      local_58[2] = lVar12;
      *local_58 = &PTR_FUN_14b3f8b90;
      local_58[3] = uVar10;
      local_58[4] = plVar9;
      LOCK();
      *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
      UNLOCK();
      local_58[5] = param_1;
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
    FUN_145d8a6ac(&DAT_14cb7bd50,&local_60,&local_58);
    FUN_1449db362(&local_58);
    *(undefined8 *)(param_1 + 1000) = local_60;
    FUN_141496108(param_1);
  }
  if (((*(int *)(param_1 + 0x120) - 1U < 2) && (*(longlong *)(param_1 + 0x138) != 0)) &&
     (cVar6 = FUN_144729dda(param_1 + 0x130), cVar6 != '\0')) {
    uVar10 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x18))();
    FUN_141495e41(&local_58,uVar10);
    FUN_145ac0ecc(param_1,&local_58);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456ec0de FUN_1456ec0de body=132 status=ok
// SIG undefined FUN_1456ec0de(void)

void FUN_1456ec0de(longlong param_1,int param_2)

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



// FUNCTION 1456ec164 FUN_1456ec164 body=132 status=ok
// SIG undefined FUN_1456ec164(void)

void FUN_1456ec164(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144a63cba(local_48);
  FUN_1447715ec(local_48,param_2);
  uVar1 = FUN_14477b072(param_1,DAT_14cb61f20);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456ec1e9 FUN_1456ec1e9 body=187 status=ok
// SIG undefined FUN_1456ec1e9(void)

undefined8 FUN_1456ec1e9(undefined8 param_1,undefined8 param_2)

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
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456ec2a6 FUN_1456ec2a6 body=132 status=ok
// SIG undefined FUN_1456ec2a6(void)

void FUN_1456ec2a6(longlong param_1,int param_2)

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



// FUNCTION 1456ec32c FUN_1456ec32c body=1316 status=ok
// SIG undefined FUN_1456ec32c(void)

void FUN_1456ec32c(longlong param_1,longlong param_2)

{
  int *piVar1;
  ulonglong uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  uint *puVar9;
  undefined *puVar10;
  longlong lVar11;
  longlong lVar12;
  int *piVar13;
  longlong lVar14;
  longlong *plVar15;
  int iVar16;
  undefined2 *puVar17;
  int *piVar18;
  uint uVar19;
  ulonglong uVar20;
  int iVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined1 auStack_a8 [32];
  undefined2 *local_88;
  int local_80;
  uint local_7c;
  int *local_78;
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_50 = 0;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar12 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar12 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar12 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & (uint)param_2) * 4);
    if (iVar4 != -1) {
      do {
        lVar12 = *(longlong *)(param_1 + 8) + (longlong)iVar4 * 0x78;
        if (*(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar4 * 0x78) == param_2)
        goto LAB_1456ec39c;
        iVar4 = *(int *)(lVar12 + 0x70);
      } while (iVar4 != -1);
    }
  }
  lVar12 = 0;
LAB_1456ec39c:
  plVar15 = (longlong *)(lVar12 + 8);
  if (lVar12 == 0) {
    plVar15 = (longlong *)0x0;
  }
  if (plVar15 == (longlong *)0x0) {
    FUN_140002266(&local_60,L"%llX");
    local_88 = &DAT_149dfb77a;
    if (local_58 != 0) {
      local_88 = local_60;
    }
    FUN_1400021e4(&local_50,&local_70);
    puVar17 = &DAT_149dfb77a;
    if (local_68 != 0) {
      puVar17 = local_70;
    }
    FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/AsyncLoading2.cpp",0x502,
                  L"FindPackageRefChecked: Package %s (0x%s) has been deleted",puVar17);
    if (local_70 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_60 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  piVar13 = (int *)((longlong)plVar15 + 0x5c);
  *piVar13 = *piVar13 + -1;
  uVar19 = *(uint *)(plVar15 + 0xb);
  if (-1 < (int)uVar19 && *piVar13 == 0) {
    if ((int)uVar19 < DAT_14c9647dc) {
      plVar8 = (longlong *)
               ((ulonglong)((uVar19 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8));
    }
    else {
      plVar8 = (longlong *)0x0;
    }
    lVar12 = *plVar8;
    if (DAT_14c9647bc < *(int *)(lVar12 + 0xc)) {
      iVar4 = (int)plVar15[5];
      if (iVar4 == 0) {
        uVar20 = 1;
        iVar5 = 0;
        iVar16 = 0;
        uVar22 = 0;
      }
      else {
        puVar9 = (uint *)plVar15[4];
        if ((uint *)plVar15[4] == (uint *)0x0) {
          puVar9 = (uint *)(plVar15 + 2);
        }
        uVar19 = *puVar9;
        if (uVar19 == 0) {
          iVar5 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar5 = iVar4 + -1;
          }
          uVar22 = 0;
          uVar20 = (ulonglong)(uint)(iVar5 >> 5);
          if (iVar5 >> 5 < 1) {
            uVar20 = uVar22;
          }
          iVar16 = 0;
          do {
            if (uVar20 == uVar22) goto LAB_1456ec727;
            iVar16 = iVar16 + 0x20;
            uVar19 = puVar9[uVar22 + 1];
            uVar22 = uVar22 + 1;
          } while (uVar19 == 0);
        }
        else {
          iVar16 = 0;
          uVar22 = 0;
        }
        uVar20 = (ulonglong)(-uVar19 & uVar19);
        uVar2 = uVar20 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar5 = (iVar16 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar5) {
          iVar5 = iVar4;
        }
      }
      if (iVar5 < iVar4) {
        uVar19 = 0xffffffff;
        do {
          local_7c = uVar19;
          uVar19 = *(uint *)(*plVar15 + 8 + (longlong)iVar5 * 0x18);
          if ((int)uVar19 < DAT_14c9647dc) {
            plVar8 = (longlong *)
                     ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8));
          }
          else {
            plVar8 = (longlong *)0x0;
          }
          uVar19 = *(uint *)(*plVar8 + 0xc);
          if ((int)uVar19 < DAT_14c9647dc) {
            plVar8 = (longlong *)
                     ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8));
          }
          else {
            plVar8 = (longlong *)0x0;
          }
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c949e68);
          if (((*(uint *)(plVar8 + 1) & 0x6e500000) == 0x100000) && (DAT_14c949e20 != DAT_14c949e4c)
             ) {
            iVar4 = *(int *)(*plVar8 + 0xc);
            puVar10 = DAT_14c949e58;
            if (DAT_14c949e58 == (undefined *)0x0) {
              puVar10 = &DAT_14c949e50;
            }
            piVar13 = (int *)(puVar10 + ((longlong)DAT_14c949e60 - 1U & (longlong)iVar4) * 4);
            do {
              iVar5 = *piVar13;
              lVar11 = (longlong)iVar5;
              if (lVar11 == -1) break;
              piVar1 = (int *)(DAT_14c949e18 + lVar11 * 0xc);
              iVar7 = *piVar1;
              if (iVar7 == iVar4) {
                puVar10 = DAT_14c949e58;
                if (DAT_14c949e58 == (undefined *)0x0) {
                  puVar10 = &DAT_14c949e50;
                }
                iVar21 = *(int *)(puVar10 + (longlong)piVar1[2] * 4);
                if (iVar21 == iVar5) {
                  piVar18 = (int *)(puVar10 + (longlong)piVar1[2] * 4);
                }
                else {
                  do {
                    piVar18 = (int *)(DAT_14c949e18 + (longlong)iVar21 * 0xc + 4);
                    iVar21 = *piVar18;
                  } while (iVar21 != iVar5);
                }
                *piVar18 = piVar1[1];
                lVar14 = DAT_14c949e18;
                if (DAT_14c949e4c != 0) {
                  *(int *)(DAT_14c949e18 + (longlong)DAT_14c949e48 * 0xc) = iVar5;
                }
                *(undefined4 *)(lVar14 + lVar11 * 0xc) = 0xffffffff;
                iVar21 = -1;
                if (0 < DAT_14c949e4c) {
                  iVar21 = DAT_14c949e48;
                }
                *(int *)(lVar14 + 4 + lVar11 * 0xc) = iVar21;
                DAT_14c949e4c = DAT_14c949e4c + 1;
                puVar10 = DAT_14c949e38;
                if (DAT_14c949e38 == (undefined *)0x0) {
                  puVar10 = &DAT_14c949e28;
                }
                iVar21 = iVar5 + 0x1f;
                if (-1 < iVar5) {
                  iVar21 = iVar5;
                }
                bVar3 = (byte)iVar5 & 0x1f;
                DAT_14c949e48 = iVar5;
                *(uint *)(puVar10 + (longlong)(iVar21 >> 5) * 4) =
                     *(uint *)(puVar10 + (longlong)(iVar21 >> 5) * 4) &
                     (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
                local_80 = iVar16;
                local_78 = piVar13;
              }
              else {
                piVar13 = piVar1 + 1;
              }
            } while (iVar7 != iVar4);
          }
          do {
            uVar19 = *(uint *)(plVar8 + 1);
            if ((uVar19 >> 0x14 & 1) == 0) break;
            LOCK();
            bVar23 = uVar19 == *(uint *)(plVar8 + 1);
            if (bVar23) {
              *(uint *)(plVar8 + 1) = uVar19 & 0xffefffff;
            }
            UNLOCK();
          } while (!bVar23);
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c949e68);
          uVar19 = local_7c & ~(uint)uVar20;
          puVar9 = (uint *)plVar15[4];
          if ((uint *)plVar15[4] == (uint *)0x0) {
            puVar9 = (uint *)(plVar15 + 2);
          }
          iVar4 = (int)plVar15[5];
          iVar5 = (int)uVar22;
          lVar11 = (longlong)iVar5;
          uVar6 = puVar9[lVar11] & uVar19;
          if (uVar6 == 0) {
            iVar7 = iVar4 + 0x1e;
            if (-1 < iVar4 + -1) {
              iVar7 = iVar4 + -1;
            }
            iVar7 = iVar7 >> 5;
            iVar21 = iVar7;
            if (iVar7 < iVar5) {
              iVar21 = iVar5;
            }
            if (iVar7 <= iVar5) break;
            lVar14 = 0;
            while( true ) {
              iVar16 = iVar16 + 0x20;
              uVar6 = puVar9[lVar11 + lVar14 + 1];
              if (uVar6 != 0) break;
              lVar14 = lVar14 + 1;
              if (iVar21 - lVar11 == lVar14) goto LAB_1456ec727;
            }
            uVar22 = (ulonglong)(iVar5 + (int)lVar14 + 1);
            uVar19 = 0xffffffff;
          }
          uVar20 = (ulonglong)(-uVar6 & uVar6);
          uVar2 = uVar20 * 2 + 1;
          lVar11 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          iVar5 = (iVar16 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        } while (iVar5 < iVar4);
      }
LAB_1456ec727:
      uVar19 = *(uint *)(lVar12 + 0xc);
      if ((int)uVar19 < DAT_14c9647dc) {
        lVar12 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
      }
      else {
        lVar12 = 0;
      }
      FUN_14482b126(lVar12,0x100000);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456ec852 FUN_1456ec852 body=226 status=ok
// SIG undefined FUN_1456ec852(void)

longlong * FUN_1456ec852(longlong *param_1)

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
  pcVar13 = FUN_146317cbc;
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



// FUNCTION 1456ec93a FUN_1456ec93a body=132 status=ok
// SIG undefined FUN_1456ec93a(void)

undefined1 * FUN_1456ec93a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PageTableTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<uint4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1456ec936;
}



// FUNCTION 1456ec9be FUN_1456ec9be body=138 status=ok
// SIG undefined FUN_1456ec9be(void)

code * FUN_1456ec9be(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PhysicalTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000001d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1456ec93a;
}



// FUNCTION 1456eca48 FUN_1456eca48 body=138 status=ok
// SIG undefined FUN_1456eca48(void)

void FUN_1456eca48(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x10 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
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
      puVar7 = puVar7 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1456ecad2 FUN_1456ecad2 body=145 status=ok
// SIG undefined FUN_1456ecad2(void)

void FUN_1456ecad2(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  FUN_14485c47a(&local_58);
  uStack_50 = param_3;
  FUN_14113f0c0(&local_58);
  uVar2 = uStack_50;
  uVar1 = local_58;
  FUN_14028d57c(param_1,&local_48);
  local_40 = uVar1;
  uStack_38 = uVar2;
  bVar3 = FUN_140a28ca8(param_1 + -0x59d,local_48);
  *param_1 = *param_1 | bVar3;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456ecb64 FUN_1456ecb64 body=126 status=ok
// SIG undefined FUN_1456ecb64(void)

void FUN_1456ecb64(longlong *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar3 = *param_1;
  lVar4 = *(longlong *)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  iVar5 = (int)param_1[1];
  iVar7 = ~param_2 + iVar5;
  if (iVar7 != 0) {
    iVar6 = 1;
    if (iVar7 < 1) {
      iVar6 = iVar7;
    }
    memmove((void *)((longlong)(int)param_2 * 0x10 + lVar3),
            (void *)((longlong)(iVar5 - iVar6) * 0x10 + lVar3),(longlong)iVar6 << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 1456ecbe2 FUN_1456ecbe2 body=61 status=ok
// SIG undefined FUN_1456ecbe2(void)

void FUN_1456ecbe2(undefined8 *param_1,longlong param_2,int param_3)

{
  do {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    FUN_145c1b492(param_1,param_2);
    param_1 = param_1 + 2;
    param_2 = param_2 + 0x10;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1456ecc20 FUN_1456ecc20 body=88 status=ok
// SIG undefined FUN_1456ecc20(void)

void FUN_1456ecc20(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1456ecc78 FUN_1456ecc78 body=93 status=ok
// SIG undefined FUN_1456ecc78(void)

longlong FUN_1456ecc78(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_140292f56(param_1);
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



// FUNCTION 1456eccd5 FUN_1456eccd5 body=61 status=ok
// SIG undefined FUN_1456eccd5(void)

void FUN_1456eccd5(undefined8 *param_1,longlong param_2,int param_3)

{
  do {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    FUN_1401aa3da(param_1,param_2);
    param_1 = param_1 + 2;
    param_2 = param_2 + 0x10;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1456ecd12 FUN_1456ecd12 body=88 status=ok
// SIG undefined FUN_1456ecd12(void)

void FUN_1456ecd12(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1456ecd6a FUN_1456ecd6a body=373 status=ok
// SIG undefined FUN_1456ecd6a(void)

void FUN_1456ecd6a(longlong param_1,uint param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [24];
  longlong local_60;
  undefined1 local_50 [4];
  undefined8 local_4c;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar3 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x60);
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x68) - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 0x20;
        if (*(uint *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 0x20) == param_2) {
          if ((lVar3 != 0) && (lVar3 != -8)) {
            FUN_144928b90(&local_88,6);
            local_50[0] = 0;
            local_4c = 0;
            local_44 = 0;
            local_88 = *param_3;
            local_80 = *(undefined4 *)(param_3 + 1);
            FUN_1447715ec(local_78,param_3 + 2);
            FUN_1456ecee0(local_50,param_4);
            iVar1 = *(int *)(lVar3 + 0x10);
            if ((longlong)iVar1 != 0) {
              lVar3 = *(longlong *)(lVar3 + 8);
              lVar4 = 0;
              do {
                local_98 = 0;
                uStack_90 = 0;
                if ((*(int *)(lVar3 + 8 + lVar4) != 0) &&
                   (plVar2 = *(longlong **)(lVar3 + lVar4), plVar2 != (longlong *)0x0)) {
                  (**(code **)(*plVar2 + 0x60))(plVar2,&local_88,&local_98,0);
                }
                lVar4 = lVar4 + 0x10;
              } while ((longlong)iVar1 * 0x10 != lVar4);
            }
            if (local_60 != 0) {
              FUN_1400020a8();
            }
          }
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456ecee0 FUN_1456ecee0 body=27 status=ok
// SIG undefined FUN_1456ecee0(void)

void FUN_1456ecee0(undefined1 *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  uVar1 = 0x7fffffff;
  if (param_2 < 0x7fffffff) {
    uVar1 = param_2;
  }
  *param_1 = 2;
  *(int *)(param_1 + 0xc) = (int)uVar1;
  *(undefined8 *)(param_1 + 4) = 0;
  return;
}



// FUNCTION 1456ecefc FUN_1456ecefc body=281 status=ok
// SIG undefined FUN_1456ecefc(void)

void FUN_1456ecefc(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x151) == '\x01') {
    cVar4 = FUN_140bde87c();
    if (cVar4 != '\0') {
      FUN_145709a52(&local_28);
      if (local_28 != 0) {
        FUN_140d7e6a6(local_28 + 0x10,param_1 + 0x160);
        local_38 = local_28;
        local_30 = local_20;
        if (local_20 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_20 + 1) = (int)local_20[1] + 1;
          UNLOCK();
        }
        lVar5 = FUN_14479d2ce(param_1 + 0x140);
        if ((lVar5 == 0) || (*(longlong *)(lVar5 + 0x30) == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined8 *)(*(longlong *)(lVar5 + 0x30) + 0x360);
        }
        FUN_141000642(uVar6,&local_38);
        plVar2 = local_30;
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_30 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_30)(local_30);
            LOCK();
            piVar3 = (int *)((longlong)plVar2 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
            }
          }
        }
      }
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_20 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar3 = (int *)((longlong)local_20 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*local_20 + 0x10))(local_20);
          }
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456ed016 FUN_1456ed016 body=147 status=ok
// SIG undefined FUN_1456ed016(void)

void FUN_1456ed016(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1456ed0aa FUN_1456ed0aa body=24 status=ok
// SIG undefined FUN_1456ed0aa(void)

void FUN_1456ed0aa(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001456ed0be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1456ed0c2 FUN_1456ed0c2 body=38 status=ok
// SIG undefined FUN_1456ed0c2(void)

undefined8 FUN_1456ed0c2(undefined8 param_1,int param_2)

{
  FUN_1456ed0e8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1456ed0e8 FUN_1456ed0e8 body=162 status=ok
// SIG undefined FUN_1456ed0e8(void)

void FUN_1456ed0e8(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ac8d0e0;
  param_1[4] = &PTR_FUN_14ac8d100;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_1413495c2(param_1 + 0x1e);
  FUN_1456ed18a(param_1 + 10);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_14114f6be(param_1 + 4);
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001456ed186. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1456ed18a FUN_1456ed18a body=147 status=ok
// SIG undefined FUN_1456ed18a(void)

void FUN_1456ed18a(longlong *param_1)

{
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1456ed21e(param_1 + 4);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_14029c8c5(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456ed21e FUN_1456ed21e body=53 status=ok
// SIG undefined FUN_1456ed21e(void)

void FUN_1456ed21e(longlong *param_1)

{
  FUN_14029c8ee();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456ed254 FUN_1456ed254 body=147 status=ok
// SIG undefined FUN_1456ed254(void)

void FUN_1456ed254(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1456ed2e8 FUN_1456ed2e8 body=132 status=ok
// SIG undefined FUN_1456ed2e8(void)

void FUN_1456ed2e8(longlong param_1,int param_2)

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



// FUNCTION 1456ed36c FUN_1456ed36c body=325 status=ok
// SIG undefined FUN_1456ed36c(void)

void FUN_1456ed36c(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
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



// FUNCTION 1456ed4b2 FUN_1456ed4b2 body=196 status=ok
// SIG undefined FUN_1456ed4b2(void)

void FUN_1456ed4b2(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(int *)(param_1 + 0x94) != 0) {
    FUN_1403e3ace(param_1 + 0x88,0);
  }
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 == 0) {
    FUN_1456ed5da(param_1 + 0x38,&local_38);
  }
  else {
    local_38 = 0;
    uVar2 = *param_2;
    local_30 = iVar1;
    FUN_1456ed578(&local_38,iVar1,0);
    FUN_1403e3b2e(local_38,uVar2,iVar1);
  }
  FUN_1403e3406(param_1 + 0x88,&local_38);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456ed578 FUN_1456ed578 body=98 status=ok
// SIG undefined FUN_1456ed578(void)

void FUN_1456ed578(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1456ed5da FUN_1456ed5da body=338 status=ok
// SIG undefined FUN_1456ed5da(void)

longlong * FUN_1456ed5da(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
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
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  if (iVar2 != 0) {
    FUN_1403e3ace(param_2);
  }
  local_48 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar3 = (longlong)iStack_5c * 0x28 + *local_78;
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1403e3ba8(param_2,iVar2);
      }
      lVar1 = *param_2;
      FUN_1456ed72e(lVar1 + (longlong)iVar2 * 0x20,lVar3);
      *(undefined4 *)(lVar1 + 0x18 + (longlong)iVar2 * 0x20) = *(undefined4 *)(lVar3 + 0x18);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456ed72e FUN_1456ed72e body=71 status=ok
// SIG undefined FUN_1456ed72e(void)

undefined8 * FUN_1456ed72e(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 1456ed776 FUN_1456ed776 body=105 status=ok
// SIG undefined FUN_1456ed776(void)

undefined8 * FUN_1456ed776(undefined8 *param_1)

{
  FUN_1409e1656();
  *param_1 = &PTR_FUN_14aac20b0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xd),4000);
  return param_1;
}



// FUNCTION 1456ed7e0 FUN_1456ed7e0 body=353 status=ok
// SIG undefined FUN_1456ed7e0(void)

undefined8 * FUN_1456ed7e0(undefined8 *param_1)

{
  FUN_14118b488();
  *param_1 = &PTR_FUN_149e8cb50;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xb),4000);
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1a));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x1a),4000);
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x29));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x29),4000);
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x38),4000);
  *(undefined4 *)(param_1 + 0x3d) = 0;
  return param_1;
}



// FUNCTION 1456ed942 FUN_1456ed942 body=75 status=ok
// SIG undefined FUN_1456ed942(void)

undefined8
FUN_1456ed942(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined4 param_6,undefined8 param_7)

{
  longlong lVar1;
  
  lVar1 = FUN_1456eda10(param_1,param_4,1);
  if (lVar1 == 0) {
    FUN_1414ff806(param_2);
  }
  else {
    FUN_1402a4426(lVar1,param_2,param_5,param_6,param_7);
  }
  return param_2;
}



// FUNCTION 1456ed98e FUN_1456ed98e body=129 status=ok
// SIG undefined FUN_1456ed98e(void)

void FUN_1456ed98e(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x68);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 9) {
      iVar5 = 8;
    }
    else {
      lVar2 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x6c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0xc,0);
      iVar4 = (int)(uVar3 / 0xc);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x6c) = iVar5;
    FUN_1402a4ac6(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1456eda10 FUN_1456eda10 body=164 status=ok
// SIG undefined FUN_1456eda10(void)

longlong FUN_1456eda10(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1400e8a68(param_2);
  if (lVar1 != 0) {
    if (param_3 == '\0') {
      lVar1 = FUN_1456edab4(lVar1 + 0x69c0,*(undefined1 *)(param_1 + 8));
      if (lVar1 != 0) {
        if (*(char *)(param_1 + 9) == '\a') goto LAB_1456eda73;
        switch(*(char *)(param_1 + 9)) {
        case '\x01':
          goto switchD_1456eda5e_caseD_1;
        case '\x02':
          goto switchD_1456eda5e_caseD_2;
        case '\x03':
          goto switchD_1456eda5e_caseD_3;
        case '\x04':
          goto switchD_1456eda5e_caseD_4;
        case '\x05':
          goto switchD_1456eda5e_caseD_5;
        case '\x06':
          goto switchD_1456eda5e_caseD_6;
        }
      }
    }
    else {
      lVar1 = FUN_1456edad2();
      if (lVar1 != 0) {
        if (*(char *)(param_1 + 9) == '\a') {
LAB_1456eda73:
          return lVar1 + 0x48;
        }
        switch(*(char *)(param_1 + 9)) {
        case '\x01':
          goto switchD_1456eda5e_caseD_1;
        case '\x02':
switchD_1456eda5e_caseD_2:
          return lVar1 + 0xc;
        case '\x03':
switchD_1456eda5e_caseD_3:
          return lVar1 + 0x18;
        case '\x04':
switchD_1456eda5e_caseD_4:
          return lVar1 + 0x24;
        case '\x05':
switchD_1456eda5e_caseD_5:
          return lVar1 + 0x30;
        case '\x06':
switchD_1456eda5e_caseD_6:
          lVar1 = lVar1 + 0x3c;
          goto switchD_1456eda5e_caseD_1;
        }
      }
    }
  }
  lVar1 = 0;
switchD_1456eda5e_caseD_1:
  return lVar1;
}



// FUNCTION 1456edab4 FUN_1456edab4 body=29 status=ok
// SIG undefined FUN_1456edab4(void)

longlong FUN_1456edab4(longlong param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + (ulonglong)param_2 * 4);
  if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_1 + 0x20))) {
    return (longlong)iVar1 * 0x54 + *(longlong *)(param_1 + 0x18);
  }
  return 0;
}



// FUNCTION 1456edad2 FUN_1456edad2 body=76 status=ok
// SIG undefined FUN_1456edad2(void)

longlong FUN_1456edad2(longlong param_1,byte param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + (ulonglong)param_2 * 4);
  if (((int)uVar1 < 0) || (iVar2 = *(int *)(param_1 + 0x20), iVar2 <= (int)uVar1)) {
    uVar1 = FUN_1456edb1e((longlong *)(param_1 + 0x18));
    *(uint *)(param_1 + (ulonglong)param_2 * 4) = uVar1;
    if ((int)uVar1 < 0) {
      return 0;
    }
    iVar2 = *(int *)(param_1 + 0x20);
  }
  if (iVar2 <= (int)uVar1) {
    return 0;
  }
  return (ulonglong)uVar1 * 0x54 + *(longlong *)(param_1 + 0x18);
}



// FUNCTION 1456edb1e FUN_1456edb1e body=55 status=ok
// SIG undefined FUN_1456edb1e(void)

int FUN_1456edb1e(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1456edb9a(param_1,iVar1);
  }
  thunk_FUN_1456edb5a((longlong)iVar1 * 0x54 + *param_1);
  return iVar1;
}



// FUNCTION 1456edb55 thunk_FUN_1456edb5a body=5 status=ok
// SIG undefined thunk_FUN_1456edb5a(void)

void thunk_FUN_1456edb5a(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined1 **)(param_1 + 1) = &DAT_3f8000003f800000;
  param_1[3] = 0;
  *(undefined1 **)(param_1 + 4) = &DAT_3f8000003f800000;
  param_1[6] = 0;
  *(undefined1 **)(param_1 + 7) = &DAT_3f8000003f800000;
  param_1[9] = 0;
  *(undefined1 **)(param_1 + 10) = &DAT_3f8000003f800000;
  param_1[0xc] = 0;
  *(undefined1 **)(param_1 + 0xd) = &DAT_3f8000003f800000;
  param_1[0xf] = 0;
  *(undefined1 **)(param_1 + 0x10) = &DAT_3f8000003f800000;
  param_1[0x12] = 0;
  *(undefined1 **)(param_1 + 0x13) = &DAT_3f8000003f800000;
  return;
}



// FUNCTION 1456edb5a FUN_1456edb5a body=64 status=ok
// SIG undefined FUN_1456edb5a(void)

void FUN_1456edb5a(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined1 **)(param_1 + 1) = &DAT_3f8000003f800000;
  param_1[3] = 0;
  *(undefined1 **)(param_1 + 4) = &DAT_3f8000003f800000;
  param_1[6] = 0;
  *(undefined1 **)(param_1 + 7) = &DAT_3f8000003f800000;
  param_1[9] = 0;
  *(undefined1 **)(param_1 + 10) = &DAT_3f8000003f800000;
  param_1[0xc] = 0;
  *(undefined1 **)(param_1 + 0xd) = &DAT_3f8000003f800000;
  param_1[0xf] = 0;
  *(undefined1 **)(param_1 + 0x10) = &DAT_3f8000003f800000;
  param_1[0x12] = 0;
  *(undefined1 **)(param_1 + 0x13) = &DAT_3f8000003f800000;
  return;
}



// FUNCTION 1456edb9a FUN_1456edb9a body=147 status=ok
// SIG undefined FUN_1456edb9a(void)

void FUN_1456edb9a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x54,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x54)) {
      uVar5 = uVar4 / 0x54 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x54,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1456edc2e FUN_1456edc2e body=138 status=ok
// SIG undefined FUN_1456edc2e(void)

code * FUN_1456edc2e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ProjectionData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa8000000b3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14732d98a;
}



// FUNCTION 1456edcb8 FUN_1456edcb8 body=138 status=ok
// SIG undefined FUN_1456edcb8(void)

code * FUN_1456edcb8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SMRTTexelDitherScaleLocal";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x84000000a7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14732ddda;
}



// FUNCTION 1456edd42 FUN_1456edd42 body=138 status=ok
// SIG undefined FUN_1456edd42(void)

code * FUN_1456edd42(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NormalBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x70000000a2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14732e002;
}



// FUNCTION 1456eddcc FUN_1456eddcc body=205 status=ok
// SIG undefined FUN_1456eddcc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456eddcc(void)

{
  if ((DAT_14caff7c7 & 2) == 0) {
    DAT_14caff7c7 = DAT_14caff7c7 | 2;
    _DAT_14caff768 = L"FTranscodePageToGPU_CS";
    _DAT_14caff780 = FUN_146826540;
    _DAT_14caff788 = FUN_146825d77;
    _DAT_14caff790 = FUN_146825fd6;
    _DAT_14caff798 = FUN_1407e02ea;
    _DAT_14caff7a0 = FUN_146826273;
    _DAT_14caff778 = FUN_147ccc6b2;
    _DAT_14caff7b8 = 0xffffffff000000e0;
    _DAT_14caff7c0 = 8;
    DAT_14caff7c4 = 0;
    _DAT_14caff7a8 = &LAB_147ccc6dc;
    FUN_1456ede9a();
    FUN_1407e00cc(&DAT_14caff760);
    return;
  }
  return;
}



// FUNCTION 1456ede9a FUN_1456ede9a body=123 status=ok
// SIG undefined FUN_1456ede9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456ede9a(void)

{
  _DAT_14cb00238 = L"BASE";
  DAT_14cb00262 = 4;
  _DAT_14cb00240 = FUN_140b35ae4();
  _DAT_14cb00248 = DAT_14caff770;
  _DAT_14cb00250 = &LAB_14682652b;
  DAT_14caff770 = &DAT_14cb00238;
  DAT_14caff7c5 = DAT_14caff7c5 + '\x01';
  _DAT_14cb00258 = 0x100000000;
  if (*(char *)(_DAT_14cb00240 + 100) != '\0') {
    DAT_14caff7c6 = DAT_14caff7c6 + '\x01';
  }
  return;
}



// FUNCTION 1456edf16 FUN_1456edf16 body=226 status=ok
// SIG undefined FUN_1456edf16(void)

longlong * FUN_1456edf16(longlong *param_1)

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
  pcVar13 = FUN_1463fc994;
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



// FUNCTION 1456edffe FUN_1456edffe body=136 status=ok
// SIG undefined FUN_1456edffe(void)

code * FUN_1456edffe(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PageConstants";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000176;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147ccf568;
}



// FUNCTION 1456ee086 FUN_1456ee086 body=138 status=ok
// SIG undefined FUN_1456ee086(void)

code * FUN_1456ee086(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ClusterInstallInfoBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FPackedClusterInstallInfo>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000177;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1456edffe;
}



// FUNCTION 1456ee110 FUN_1456ee110 body=378 status=ok
// SIG undefined FUN_1456ee110(void)

undefined4 * FUN_1456ee110(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined4 local_58 [2];
  ulonglong *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1456ee38a(param_1,local_58);
  local_48 = 0;
  FUN_1456ee28c(local_50,*param_3,&local_48);
  *(undefined4 *)(local_50 + 2) = 0xffffffff;
  local_48 = CONCAT44(local_48._4_4_,local_58[0]);
  uVar5 = *local_50;
  if ((uVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar5);
  }
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_1456ee2e4(param_1,uVar3,local_50,&local_48);
  uVar1 = (undefined4)local_48;
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar6 = 1;
    }
    else {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_50 + 0x14) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = (undefined4)local_48;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1402af410(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456ee28c FUN_1456ee28c body=87 status=ok
// SIG undefined FUN_1456ee28c(void)

longlong * FUN_1456ee28c(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  lVar1 = *param_3;
  param_1[1] = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 1456ee2e4 FUN_1456ee2e4 body=164 status=ok
// SIG undefined FUN_1456ee2e4(void)

undefined8 FUN_1456ee2e4(longlong *param_1,undefined4 param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    iVar5 = FUN_1402ad944(param_1,param_2,&local_30);
    if (iVar5 != -1) {
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      lVar4 = param_3[1];
      uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar5 * 0x18);
      *puVar1 = (int)*param_3;
      puVar1[1] = uVar2;
      puVar1[2] = (int)lVar4;
      puVar1[3] = uVar3;
      FUN_14820842a(param_1,*param_4);
      *param_4 = iVar5;
      uVar6 = 1;
      goto LAB_1456ee33f;
    }
  }
  uVar6 = 0;
LAB_1456ee33f:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456ee38a FUN_1456ee38a body=243 status=ok
// SIG undefined FUN_1456ee38a(void)

int * FUN_1456ee38a(longlong *param_1,int *param_2)

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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1456ee47e FUN_1456ee47e body=216 status=ok
// SIG undefined FUN_1456ee47e(void)

undefined8 * FUN_1456ee47e(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1456ee564 FUN_1456ee564 body=216 status=ok
// SIG undefined FUN_1456ee564(void)

undefined8 * FUN_1456ee564(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1456ee64a FUN_1456ee64a body=45 status=ok
// SIG undefined FUN_1456ee64a(void)

void FUN_1456ee64a(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x21e0,0x10);
  FUN_1456ee678(uVar1,param_2,param_3);
  return;
}



// FUNCTION 1456ee678 FUN_1456ee678 body=1944 status=ok
// SIG undefined FUN_1456ee678(void)

undefined8 * FUN_1456ee678(undefined8 *param_1,int param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xfc;
  plVar1 = param_1 + 2;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  *param_1 = &PTR_FUN_14a2e4df0;
  param_1[2] = &PTR_FUN_14a2e4ee0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0x400000000;
  FUN_1456ef0d1(param_1 + 0x30,1,0xffffffff);
  memset(param_1 + 0x31,0,0xc4);
  *(undefined8 *)((longlong)param_1 + 0x24c) = 0xffffffff;
  FUN_1456eee38(param_1 + 0x4b);
  FUN_1456ef2a4(param_1 + 0x53);
  *(undefined1 *)(param_1 + 0x7d) = 0;
  *(undefined2 *)((longlong)param_1 + 0x429) = 0;
  param_1[0x9e] = 0;
  *(undefined4 *)(param_1 + 0x9f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ec) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3f4) = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x504) = 0;
  param_1[0xa2] = 0;
  *(undefined4 *)(param_1 + 0xa3) = 0;
  param_1[0xaa] = 0;
  *(undefined4 *)(param_1 + 0xab) = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x55c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x564) = 0;
  param_1[0xae] = 0;
  *(undefined4 *)(param_1 + 0xaf) = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0x8000000000;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0x8000000000;
  param_1[0xba] = 0;
  param_1[0xbb] = 0x8000000000;
  param_1[0xbe] = 0;
  *(undefined4 *)(param_1 + 0xbf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5fc) = 0x80;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x604) = 0x3f800000;
  *(undefined2 *)(param_1 + 0xc1) = 0;
  param_1[0xc6] = 0;
  *(undefined4 *)(param_1 + 199) = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x63c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x644) = 0;
  param_1[0xca] = 0;
  *(undefined4 *)(param_1 + 0xcb) = 0;
  FUN_1456ef12c(param_1 + 0xcd);
  param_1[0xd6] = 0;
  *(undefined1 *)(param_1 + 0xd7) = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  FUN_144939680(param_1 + 0xde);
  param_1[0x2f8] = 0;
  param_1[0x2f9] = 0;
  param_1[0x302] = 0;
  *(undefined4 *)(param_1 + 0x303) = 0;
  param_1[0x2fb] = 0;
  param_1[0x2fc] = 0;
  *(undefined4 *)(param_1 + 0x2fd) = 0;
  param_1[0x2fe] = 0;
  param_1[0x2ff] = 0;
  *(undefined8 *)((longlong)param_1 + 0x181c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1824) = 0;
  param_1[0x306] = 0;
  *(undefined4 *)(param_1 + 0x307) = 0;
  param_1[0x308] = 0;
  param_1[0x309] = 0;
  param_1[0x30a] = 0;
  param_1[0x30b] = 0;
  param_1[0x30c] = 0;
  FUN_1402afb50(param_1 + 0x30d);
  FUN_1456ef206(param_1 + 0x30e);
  param_1[0x326] = 0;
  param_1[0x327] = 0;
  param_1[0x328] = 0;
  param_1[0x329] = 0;
  param_1[0x32a] = 0;
  param_1[0x32b] = 0;
  param_1[0x32c] = 0;
  param_1[0x32d] = 0;
  param_1[0x32e] = 0;
  param_1[0x32f] = 0;
  param_1[0x330] = 0;
  param_1[0x331] = 0;
  param_1[0x332] = 0;
  param_1[0x334] = 0;
  param_1[0x335] = 0;
  param_1[0x336] = 0;
  param_1[0x337] = 0;
  param_1[0x338] = 0;
  param_1[0x339] = 0;
  param_1[0x33a] = 0;
  param_1[0x33b] = 0;
  param_1[0x33e] = 0;
  param_1[0x33f] = 0;
  param_1[0x340] = 0;
  param_1[0x341] = 0;
  param_1[0x342] = 0;
  param_1[0x343] = 0;
  *(undefined4 *)(param_1 + 0x344) = 0;
  param_1[0x346] = 0;
  param_1[0x347] = 0;
  param_1[0x348] = 0;
  param_1[0x349] = 0;
  param_1[0x34a] = 0;
  param_1[0x34b] = 0;
  param_1[0x34c] = 0;
  param_1[0x34d] = 0;
  param_1[0x34e] = 0;
  param_1[0x34f] = 0;
  param_1[0x350] = 0;
  param_1[0x351] = 0;
  *(undefined4 *)(param_1 + 0x352) = 0;
  param_1[0x391] = 0;
  *(undefined4 *)(param_1 + 0x392) = 0;
  memset(param_1 + 0x354,0,0x158);
  param_1[0x380] = 0;
  param_1[0x381] = 0;
  param_1[0x382] = 0;
  param_1[899] = 0;
  param_1[900] = 0;
  param_1[0x385] = 0;
  param_1[0x386] = 0;
  param_1[0x387] = 0;
  param_1[0x388] = 0;
  param_1[0x389] = 0;
  param_1[0x38a] = 0;
  param_1[0x38b] = 0;
  param_1[0x38c] = 0;
  param_1[0x38d] = 0;
  param_1[0x38e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1c9c) = 0;
  param_1[0x395] = 0;
  *(undefined4 *)(param_1 + 0x396) = 0;
  param_1[0x39b] = 0;
  *(undefined4 *)(param_1 + 0x39c) = 0;
  param_1[0x397] = 0;
  param_1[0x398] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ce4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1cec) = 0;
  param_1[0x39f] = 0;
  *(undefined4 *)(param_1 + 0x3a0) = 0;
  param_1[0x3b0] = 0;
  *(undefined4 *)(param_1 + 0x3a5) = 0;
  param_1[0x3a3] = 0;
  param_1[0x3a4] = 0;
  param_1[0x3a1] = 0;
  param_1[0x3a2] = 0;
  param_1[0x3a9] = 0;
  param_1[0x3a7] = 0;
  param_1[0x3a8] = 0;
  *(undefined4 *)(param_1 + 0x3af) = 0;
  param_1[0x3ad] = 0;
  param_1[0x3ae] = 0;
  param_1[0x3ab] = 0;
  param_1[0x3ac] = 0;
  param_1[0x3b3] = 0x1800000008;
  *(undefined1 *)(param_1 + 0x3b4) = 1;
  *(undefined4 *)(param_1 + 0x3ce) = 0;
  param_1[0x3b9] = 0;
  param_1[0x3ba] = 0;
  param_1[0x3b7] = 0;
  param_1[0x3b8] = 0;
  param_1[0x3b5] = 0;
  param_1[0x3b6] = 0;
  param_1[0x3c3] = 0;
  param_1[0x3c1] = 0;
  param_1[0x3c2] = 0;
  FUN_1456eef2e(param_1 + 0x3cf);
  lVar11 = 0x1ef8;
  do {
    FUN_1456eee10((longlong)param_1 + lVar11);
    lVar11 = lVar11 + 0x28;
  } while (lVar11 != 0x1f48);
  param_1[0x41e] = 0;
  param_1[0x41f] = 0;
  param_1[0x41c] = 0;
  param_1[0x41d] = 0;
  param_1[0x420] = 0;
  uVar4 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x421] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x422] = uVar4;
  param_1[0x423] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x424) = 0;
  param_1[0x42f] = 0;
  *(undefined4 *)(param_1 + 0x430) = 0;
  param_1[0x425] = 0;
  param_1[0x426] = 0;
  param_1[0x427] = 0;
  param_1[0x428] = 0;
  *(undefined4 *)(param_1 + 0x429) = 0;
  param_1[0x42b] = 0;
  param_1[0x42c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2184) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x218c) = 0;
  param_1[0x433] = 0;
  *(undefined4 *)(param_1 + 0x434) = 0;
  param_1[0x439] = 0;
  param_1[0x43a] = 0x400000000;
  *(undefined4 *)(param_1 + 0x43b) = 0;
  *(char *)((longlong)param_1 + 0x1c) = (char)param_2;
  LOCK();
  UNLOCK();
  iVar10 = DAT_14ca434f8 + 1;
  DAT_14ca434f8 = DAT_14ca434f8 + 1;
  *(int *)(param_1 + 4) = iVar10;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 0x99) = 0;
  *(undefined4 *)((longlong)param_1 + 0x45c) = 0xff7fffff;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x464) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x8d) = 0x3c888889;
  *(undefined4 *)(param_1 + 0x8e) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x474) = 0;
  *(undefined8 *)((longlong)param_1 + 0x47c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x484) = 0x3f800000;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  *(undefined4 *)(param_1 + 0x93) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x49c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4a4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4ac) = 0x3f800000;
  uVar7 = DAT_14c8464e8._4_4_;
  uVar6 = (undefined4)DAT_14c8464e8;
  uVar5 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x96) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x4b4) = uVar5;
  *(undefined4 *)(param_1 + 0x97) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x4bc) = uVar7;
  param_1[0x98] = DAT_14c8464f0;
  cVar8 = FUN_144a61b4f();
  if (cVar8 == '\0') {
    (**(code **)(*plVar1 + 0x18))(plVar1,&DAT_14ca85100);
  }
  else {
    FUN_140308182(plVar1,0);
  }
  puVar13 = param_1 + 6;
  param_1[0x88] = 0;
  param_1[0x89] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x8a) = 0xffffffff;
  param_1[0xda] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6dc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6e4) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1e2d) = 0x101;
  param_1[0x3aa] = 0x7f7fc99e7f7fc99e;
  *(undefined4 *)(param_1 + 0x3c6) = 0;
  *(undefined2 *)(param_1 + 0xdb) = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  if (param_3 == 0) {
    puVar12 = param_1 + 4;
    puVar9 = (undefined8 *)FUN_14001cc68(1000,0x10);
    FUN_1456ef356(puVar9);
    puVar3 = (undefined8 *)param_1[0x3c3];
    if (puVar3 != puVar9) {
      param_1[0x3c3] = puVar9;
      if (puVar9 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
        UNLOCK();
      }
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(puVar3 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
  }
  else {
    puVar12 = *(undefined8 **)(param_3 + 0x1e18);
    puVar3 = (undefined8 *)param_1[0x3c3];
    if (puVar3 != puVar12) {
      param_1[0x3c3] = puVar12;
      if (puVar12 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
        UNLOCK();
      }
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(puVar3 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
    puVar12 = (undefined8 *)(param_3 + 0x20);
  }
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)puVar12;
  FUN_1456eee6e(puVar13);
  iVar10 = *(int *)(param_1 + 0x2f);
  *(int *)(param_1 + 0x2f) = iVar10 + 4;
  if ((uint)(*(int *)((longlong)param_1 + 0x17c) - iVar10) < 4) {
    FUN_1472d2660(puVar13);
  }
  if ((undefined8 *)param_1[0x2e] != (undefined8 *)0x0) {
    puVar13 = (undefined8 *)param_1[0x2e];
  }
  memset(puVar13 + (longlong)iVar10 * 10,0,0x140);
  param_1[0x3c4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e25) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x664) = 0;
  *(undefined1 *)(param_1 + 0x42a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2154) = 0x3f800000;
  if ((param_2 == 1) && (DAT_14ca4c9cc != 0)) {
    FUN_140308182(param_1 + 0x53,0);
  }
  FUN_1456ef18c(param_1 + 0x435);
  return param_1;
}



// FUNCTION 1456eee10 FUN_1456eee10 body=39 status=ok
// SIG undefined FUN_1456eee10(void)

void FUN_1456eee10(undefined8 *param_1)

{
  *param_1 = 1;
  *(undefined2 *)(param_1 + 1) = 1;
  *(undefined8 *)((longlong)param_1 + 0xc) = DAT_14c967818;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0x5d;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}



// FUNCTION 1456eee38 FUN_1456eee38 body=54 status=ok
// SIG undefined FUN_1456eee38(void)

void FUN_1456eee38(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14a2e98f0;
  param_1[6] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  return;
}



// FUNCTION 1456eee6e FUN_1456eee6e body=77 status=ok
// SIG undefined FUN_1456eee6e(void)

void FUN_1456eee6e(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x140);
  if (*(longlong *)(param_1 + 0x140) == 0) {
    lVar1 = param_1;
  }
  FUN_1456eeebb(lVar1,*(undefined4 *)(param_1 + 0x148));
  *(undefined4 *)(param_1 + 0x148) = 0;
  if (*(int *)(param_1 + 0x14c) == param_2) {
    return;
  }
  FUN_1472d25a0(param_1,param_2);
  return;
}



// FUNCTION 1456eeebb FUN_1456eeebb body=61 status=ok
// SIG undefined FUN_1456eeebb(void)

void FUN_1456eeebb(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1456eeef8(param_1);
    param_1 = param_1 + 0x50;
  }
  return;
}



// FUNCTION 1456eeef8 FUN_1456eeef8 body=53 status=ok
// SIG undefined FUN_1456eeef8(void)

void FUN_1456eeef8(longlong *param_1)

{
  FUN_1456eef7c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456eef2e FUN_1456eef2e body=78 status=ok
// SIG undefined FUN_1456eef2e(void)

void FUN_1456eef2e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined2 *)((longlong)param_1 + 0xc) = 1;
  param_1[2] = 0x3f800000;
  param_1[3] = 0;
  uVar1 = DAT_14c967818;
  param_1[4] = DAT_14c967818;
  param_1[5] = uVar1;
  param_1[6] = uVar1;
  param_1[7] = uVar1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return;
}



// FUNCTION 1456eef7c FUN_1456eef7c body=340 status=ok
// SIG undefined FUN_1456eef7c(void)

void FUN_1456eef7c(longlong *param_1)

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
      FUN_1449cc82a(*local_68 + (longlong)iStack_4c * 0x30 + 0x18);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
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



// FUNCTION 1456ef0d1 FUN_1456ef0d1 body=91 status=ok
// SIG undefined FUN_1456ef0d1(void)

undefined8 * FUN_1456ef0d1(undefined8 *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *(undefined4 *)(puVar1 + 1) = 0;
  *(undefined1 *)((longlong)puVar1 + 0xc) = 0x1d;
  *(byte *)((longlong)puVar1 + 0xd) = *(byte *)((longlong)puVar1 + 0xd) | 3;
  *puVar1 = &PTR_FUN_14a37d0c0;
  *(undefined4 *)(puVar1 + 2) = param_2;
  *(undefined8 *)((longlong)puVar1 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x21) = 0;
  *param_1 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 1456ef12c FUN_1456ef12c body=95 status=ok
// SIG undefined FUN_1456ef12c(void)

undefined4 * FUN_1456ef12c(undefined4 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 1) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 0xd) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  param_1[0xe] = 4;
  FUN_14134681c(param_1 + 0xc,0);
  puVar1 = *(undefined8 **)(param_1 + 0xc);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 1456ef18c FUN_1456ef18c body=122 status=ok
// SIG undefined FUN_1456ef18c(void)

void FUN_1456ef18c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 < 4) {
    *(undefined4 *)(param_1 + 0x28) = 4;
    if ((uint)(*(int *)(param_1 + 0x2c) - iVar1) < 4U - iVar1) {
      FUN_1472d26ea(param_1);
    }
    lVar2 = *(longlong *)(param_1 + 0x20);
    if (*(longlong *)(param_1 + 0x20) == 0) {
      lVar2 = param_1;
    }
    memset((void *)(lVar2 + (longlong)iVar1 * 8),0,(ulonglong)(4U - iVar1) << 3);
    return;
  }
  if (iVar1 == 4) {
    return;
  }
  *(undefined4 *)(param_1 + 0x28) = 4;
  FUN_1472d27de(param_1);
  return;
}



// FUNCTION 1456ef206 FUN_1456ef206 body=135 status=ok
// SIG undefined FUN_1456ef206(void)

undefined8 * FUN_1456ef206(undefined8 *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  param_1[0xc] = 0;
  param_1[0xd] = 0x3f80000000000000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_1456ef28e(param_1 + 0x12);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  return param_1;
}



// FUNCTION 1456ef28e FUN_1456ef28e body=21 status=ok
// SIG undefined FUN_1456ef28e(void)

undefined8 * FUN_1456ef28e(undefined8 *param_1)

{
  *param_1 = 0x4334000000000001;
  param_1[1] = &DAT_40a00000;
  *(undefined4 *)(param_1 + 2) = 0;
  return param_1;
}



// FUNCTION 1456ef2a4 FUN_1456ef2a4 body=177 status=ok
// SIG undefined FUN_1456ef2a4(void)

void FUN_1456ef2a4(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14a2ec6d0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x300000000;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x29] = 0;
  return;
}



// FUNCTION 1456ef356 FUN_1456ef356 body=327 status=ok
// SIG undefined FUN_1456ef356(void)

undefined8 * FUN_1456ef356(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_149e002e8;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_14a2e69c0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined2 *)((longlong)param_1 + 0x54) = 1;
  *(undefined1 *)((longlong)param_1 + 0x56) = 0;
  lVar2 = 0xc0;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x20);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x34);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)((longlong)param_1 + lVar2 + -0x24) = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x68);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x58);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x48);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)((longlong)param_1 + lVar2 + -0x38) = 1;
    *(undefined8 *)((longlong)param_1 + lVar2) = 0;
    lVar2 = lVar2 + 0x70;
  } while (lVar2 != 0x360);
  *(undefined4 *)(param_1 + 0x5f) = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  *(undefined1 *)(param_1 + 99) = 1;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 1;
  lVar2 = 0x340;
  do {
    *(undefined8 *)((longlong)param_1 + lVar2) = 0;
    ((undefined8 *)((longlong)param_1 + lVar2))[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + 0x10) = 4;
    *(undefined4 *)((longlong)param_1 + lVar2 + 0x18) = 0;
    FUN_1456ef49e((longlong)param_1 + lVar2);
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x380);
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x7c] = 0;
  return param_1;
}



// FUNCTION 1456ef49e FUN_1456ef49e body=176 status=ok
// SIG undefined FUN_1456ef49e(void)

void FUN_1456ef49e(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  void *_Dst;
  
  iVar3 = (int)param_1[1];
  if ((longlong)iVar3 < 4) {
    *(undefined4 *)(param_1 + 1) = 4;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar3) < 4U - iVar3) {
      FUN_1456ef54e(param_1);
    }
    memset((void *)((longlong)iVar3 * 8 + *param_1),0,(ulonglong)(4U - iVar3) << 3);
    return;
  }
  if (iVar3 == 4) {
    return;
  }
  uVar2 = iVar3 - 4;
  _Dst = (void *)(*param_1 + 0x20);
  FUN_1414752db(_Dst,uVar2);
  iVar1 = (int)param_1[1] - iVar3;
  if (iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (ulonglong)uVar2 * 8),(longlong)iVar1 << 3);
    iVar3 = (int)param_1[1];
  }
  *(uint *)(param_1 + 1) = iVar3 - uVar2;
  FUN_1472ceac2(param_1);
  return;
}



// FUNCTION 1456ef54e FUN_1456ef54e body=132 status=ok
// SIG undefined FUN_1456ef54e(void)

void FUN_1456ef54e(longlong param_1,int param_2)

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



// FUNCTION 1456ef5d2 FUN_1456ef5d2 body=147 status=ok
// SIG undefined FUN_1456ef5d2(void)

void FUN_1456ef5d2(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x90,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x90)) {
      uVar5 = uVar4 / 0x90 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x90,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1456ef666 FUN_1456ef666 body=147 status=ok
// SIG undefined FUN_1456ef666(void)

void FUN_1456ef666(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x280,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x280)) {
      uVar5 = uVar4 / 0x280 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x280,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1456ef6fa FUN_1456ef6fa body=40 status=ok
// SIG undefined FUN_1456ef6fa(void)

undefined8 FUN_1456ef6fa(undefined8 param_1,int param_2)

{
  FUN_1456ef722();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1456ef722 FUN_1456ef722 body=430 status=ok
// SIG undefined FUN_1456ef722(void)

void FUN_1456ef722(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_14b1dcc20;
  param_1[7] = &PTR_FUN_14b1dcee0;
  FUN_1456ef996();
  plVar3 = (longlong *)param_1[0x8a];
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
  FUN_1456ef906(param_1 + 0x72);
  plVar3 = (longlong *)param_1[0x71];
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
  *(undefined4 *)(param_1 + 0x6e) = 0;
  if (param_1[0x6d] != 0) {
    FUN_1400020a8();
  }
  FUN_1456ef8d0(param_1 + 0x65);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x60));
  *(undefined4 *)(param_1 + 0x5f) = 0;
  if (param_1[0x5e] != 0) {
    FUN_1400020a8();
  }
  FUN_1401c5aac(param_1 + 0x56);
  *(undefined4 *)(param_1 + 0x55) = 0;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_1401c5aac(param_1 + 0x4c);
  FUN_1449db362(param_1 + 0x4a);
  do {
    lVar4 = FUN_1401c6a1e(param_1 + 0x38);
  } while (lVar4 != 0);
  FUN_1447d080c((uint)param_1[0x38] & 0x3ffffff);
  FUN_1402b74ec(param_1 + 0x28);
  FUN_14493be96(param_1 + 0x28);
  do {
    lVar4 = FUN_1407a4334(param_1 + 0x18);
  } while (lVar4 != 0);
  FUN_1447d080c((uint)param_1[0x18] & 0x3ffffff);
  FUN_1402b761c(param_1 + 8);
  FUN_14493be96(param_1 + 8);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 1456ef8d0 FUN_1456ef8d0 body=53 status=ok
// SIG undefined FUN_1456ef8d0(void)

void FUN_1456ef8d0(longlong *param_1)

{
  FUN_1456efaee();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456ef906 FUN_1456ef906 body=103 status=ok
// SIG undefined FUN_1456ef906(void)

void FUN_1456ef906(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_1456ef96d(*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x88));
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1456ef96d FUN_1456ef96d body=41 status=ok
// SIG undefined FUN_1456ef96d(void)

void FUN_1456ef96d(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1402b7462(param_1);
    param_1 = param_1 + 0x4810;
  }
  return;
}



// FUNCTION 1456ef996 FUN_1456ef996 body=342 status=ok
// SIG undefined FUN_1456ef996(void)

void FUN_1456ef996(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  LOCK();
  *(int *)(param_1 + 0x440) = *(int *)(param_1 + 0x440) + 1;
  UNLOCK();
  if (*(longlong **)(param_1 + 0x240) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x240) + 0x10))();
    if (((*(longlong *)(param_1 + 0x448) == 0) ||
        ((*(byte *)(*(longlong *)(param_1 + 0x448) + 0x78) & 1) == 0)) ||
       (*(int *)(param_1 + 0x458) < 1)) {
      if (0 < *(int *)(param_1 + 0x458)) {
        local_20 = 0;
        local_28 = 5;
        FUN_1458c54da(&local_18,0,0,0);
        if (*(longlong *)(param_1 + 0x448) != 0) {
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x448) + 0x70);
          local_18 = local_18 / 10000;
          if (0xfffffffe < local_18) {
            local_18 = 0xffffffff;
          }
          if (local_18 < 1) {
            local_18 = 0;
          }
          cVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,local_18,0);
          if (cVar3 != '\0') {
            *(int *)(param_1 + 0x458) = *(int *)(param_1 + 0x458) + -1;
          }
        }
      }
    }
    else {
      *(int *)(param_1 + 0x458) = *(int *)(param_1 + 0x458) + -1;
    }
    FUN_14018802a(*(undefined8 *)(param_1 + 0x240));
    *(undefined8 *)(param_1 + 0x240) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x448);
  if (*(longlong *)(param_1 + 0x448) != 0) {
    while( true ) {
      do {
        lVar4 = lVar2;
        lVar2 = 0;
      } while (lVar4 == 0);
      plVar1 = *(longlong **)(lVar4 + 0x70);
      cVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
      if (cVar3 != '\0') break;
      lVar2 = *(longlong *)(param_1 + 0x448);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456efaee FUN_1456efaee body=366 status=ok
// SIG undefined FUN_1456efaee(void)

void FUN_1456efaee(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
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
      plVar4 = *(longlong **)(*local_70 + 0x20 + (longlong)iStack_54 * 0x30);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
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



// FUNCTION 1456efc5e FUN_1456efc5e body=18 status=ok
// SIG undefined FUN_1456efc5e(void)

undefined8 FUN_1456efc5e(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0xd24) >> 8),
                  *(longlong *)(param_1 + 0xd24) == DAT_14cb241f0);
}



// FUNCTION 1456efc70 FUN_1456efc70 body=62 status=ok
// SIG undefined FUN_1456efc70(void)

undefined8 * FUN_1456efc70(undefined8 *param_1)

{
  undefined1 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 4) = 8;
  FUN_14485c47a(param_1 + 1);
  *(undefined1 *)(param_1 + 5) = 0xe;
  uVar1 = 0xe;
  if ((DAT_14c9a94d4 & 0x20) != 0) {
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 6) = uVar1;
  return param_1;
}



// FUNCTION 1456efeaa FUN_1456efeaa body=18 status=ok
// SIG undefined FUN_1456efeaa(void)

undefined8 FUN_1456efeaa(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0xd24) >> 8),
                  *(longlong *)(param_1 + 0xd24) == DAT_14cb24250);
}



// FUNCTION 1456efebc FUN_1456efebc body=38 status=ok
// SIG undefined FUN_1456efebc(void)

undefined8 FUN_1456efebc(longlong param_1,byte param_2)

{
  if (*(int *)(param_1 + 0x90 + (ulonglong)param_2 * 0x138) < 1) {
    return 0;
  }
  return **(undefined8 **)((ulonglong)param_2 * 0x138 + param_1 + 0x88);
}



// FUNCTION 1456efee2 FUN_1456efee2 body=1671 status=ok
// SIG undefined FUN_1456efee2(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1456efee2(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  float fVar2;
  code *pcVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  byte bVar10;
  undefined8 *******pppppppuVar11;
  longlong *plVar12;
  float fVar13;
  undefined1 auStack_b8 [40];
  undefined8 *******local_90 [3];
  ushort local_78;
  byte local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar5 = (longlong *)FUN_14479d2ce(param_2 + 0x24);
  if ((*(longlong *)(param_2 + 0x50) == 0) || (cVar4 = FUN_144729dda(param_2 + 0x48), cVar4 == '\0')
     ) {
    plVar12 = (longlong *)0x0;
  }
  else {
    plVar12 = *(longlong **)(param_2 + 0x50);
  }
  if (*(longlong *)(param_2 + 0x60) == 0) goto LAB_1456f013e;
  cVar4 = FUN_144729dda();
  if (cVar4 == '\0') {
    plVar8 = (longlong *)0x0;
  }
  else {
    plVar8 = *(longlong **)(param_2 + 0x60);
  }
  if (((plVar5 == (longlong *)0x0) || (plVar12 == (longlong *)0x0)) || (plVar8 == (longlong *)0x0))
  goto LAB_1456f013e;
  uVar6 = (**(code **)(*plVar8 + 0x28))();
  local_78 = 8;
  local_90[0] = (undefined8 *******)0x0;
  FUN_14485c47a(local_90,plVar5[0x15]);
  local_70 = 7;
  FUN_1402b90a2(uVar6,&DAT_14cb716c8,local_90);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_70 * 0x120));
  if (pcVar3 != (code *)0x0) {
    pppppppuVar11 = local_90;
    if (0x18 < local_78) {
      pppppppuVar11 = local_90[0];
    }
    (*pcVar3)(pppppppuVar11);
  }
  if (0x18 < local_78) {
    FUN_1400020a8(local_90[0]);
  }
  local_78 = 4;
  local_90[0] = (undefined8 *******)CONCAT44(local_90[0]._4_4_,(int)plVar5[0xcb]);
  local_70 = 3;
  FUN_1402b90a2(uVar6,&DAT_14cb716d0,local_90);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_70 * 0x120));
  if (pcVar3 != (code *)0x0) {
    pppppppuVar11 = local_90;
    if (0x18 < local_78) {
      pppppppuVar11 = local_90[0];
    }
    (*pcVar3)(pppppppuVar11);
  }
  if (0x18 < local_78) {
    FUN_1400020a8(local_90[0]);
  }
  FUN_1402b8a4c(uVar6,&DAT_14cb716d8);
  FUN_1402b8a4c(uVar6,&DAT_14cb716e0);
  cVar4 = FUN_1456f056a(plVar5);
  if (cVar4 == '\0') {
    cVar4 = FUN_1456f057c(plVar5);
    if (cVar4 == '\0') {
      lVar7 = plVar5[0x123];
      if (lVar7 == DAT_14cb24218) {
        if (*(char *)((longlong)plVar5 + 0xa9b) == '\x01') {
          lVar7 = FUN_145a30f1c(plVar5 + 0x154);
        }
        else {
          lVar7 = plVar5[0x159];
        }
        if (lVar7 != 0) {
          if ((char)plVar5[0x153] == '\0') {
            pppppppuVar11 = *(undefined8 ********)(param_2 + 0x34);
            FUN_140cc68fa(plVar5);
            lVar7 = plVar5[0xd5];
            plVar8 = (longlong *)plVar5[0xd6];
            local_90[0] = pppppppuVar11;
            if (plVar8 == (longlong *)0x0) {
              cVar4 = FUN_140383372(lVar7 + 0x60);
            }
            else {
              LOCK();
              *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
              UNLOCK();
              cVar4 = FUN_140383372(lVar7 + 0x60);
              LOCK();
              plVar9 = plVar8 + 1;
              *(int *)plVar9 = (int)*plVar9 + -1;
              UNLOCK();
              if ((int)*plVar9 == 0) {
                (**(code **)*plVar8)(plVar8);
                LOCK();
                piVar1 = (int *)((longlong)plVar8 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar8 + 0x10))(plVar8);
                }
              }
            }
            if (cVar4 == '\0') goto LAB_1456f00af;
          }
          cVar4 = '\x01';
LAB_1456f0332:
          bVar10 = 0;
          goto LAB_1456f00b4;
        }
      }
      else if (lVar7 == DAT_14cb24220) {
        if ((int)plVar5[0x16c] == 0) {
          lVar7 = plVar5[0x16a];
        }
        else {
          lVar7 = plVar5[0x16b];
        }
        if (lVar7 != 0) {
          cVar4 = (char)plVar5[0x16d];
          goto LAB_1456f0332;
        }
      }
      else if ((lVar7 == DAT_14cb24200) && (plVar5[0x124] != 0)) {
        local_90[0] = (undefined8 *******)((ulonglong)local_90[0] & 0xffffffffffffff00);
        local_68 = 0;
        FUN_1405833e0(local_90,param_2 + 0x34);
        plVar8 = (longlong *)FUN_1447262c2(local_90);
        if (plVar8 != (longlong *)0x0) {
          uVar6 = FUN_14090a268();
          plVar8 = (longlong *)(**(code **)(*plVar8 + 0x288))(plVar8,uVar6);
          if (plVar8 != (longlong *)0x0) {
            uVar6 = FUN_14090a268();
            plVar9 = (longlong *)FUN_144718840(plVar8,uVar6);
            if (plVar8 != plVar9) {
              FUN_144a5ac3a(local_90);
              if (plVar9 != (longlong *)0x0) {
                uVar6 = (**(code **)(*plVar9 + 0x18))(plVar9);
                FUN_14892b532(uVar6,plVar5[0x124],DAT_14caa8578);
              }
              goto LAB_1456f00af;
            }
          }
        }
        FUN_144a5ac3a(local_90);
      }
    }
    else {
      lVar7 = FUN_1487c6890(plVar5 + 300);
      if (lVar7 != 0) {
        if (*(char *)((longlong)plVar5 + 0xa91) == '\0') {
          pppppppuVar11 = *(undefined8 ********)(param_2 + 0x34);
          FUN_140cc68fa(plVar5);
          lVar7 = plVar5[0xd5];
          plVar8 = (longlong *)plVar5[0xd6];
          local_90[0] = pppppppuVar11;
          if (plVar8 == (longlong *)0x0) {
            cVar4 = FUN_140383372(lVar7 + 0x60);
          }
          else {
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
            cVar4 = FUN_140383372(lVar7 + 0x60);
            LOCK();
            plVar9 = plVar8 + 1;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)*plVar9 == 0) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
              }
            }
          }
          if (cVar4 == '\0') goto LAB_1456f00af;
        }
        bVar10 = *(byte *)(plVar5 + 0x132) ^ 1;
        goto LAB_1456f0210;
      }
    }
LAB_1456f00af:
    bVar10 = 0;
    cVar4 = '\0';
  }
  else {
    lVar7 = FUN_1456f0676(plVar5 + 0x125);
    if (lVar7 == 0) goto LAB_1456f00af;
    if (*(char *)((longlong)plVar5 + 0x959) == '\0') {
      pppppppuVar11 = *(undefined8 ********)(param_2 + 0x34);
      FUN_140cc68fa(plVar5);
      lVar7 = plVar5[0xd5];
      plVar8 = (longlong *)plVar5[0xd6];
      local_90[0] = pppppppuVar11;
      if (plVar8 == (longlong *)0x0) {
        cVar4 = FUN_140383372(lVar7 + 0x60);
      }
      else {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        cVar4 = FUN_140383372(lVar7 + 0x60);
        LOCK();
        plVar9 = plVar8 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      if (cVar4 == '\0') goto LAB_1456f00af;
    }
    bVar10 = FUN_1456f1258(plVar5 + 0x125);
LAB_1456f0210:
    cVar4 = '\x01';
  }
LAB_1456f00b4:
  *param_2 = 0;
  lVar7 = (**(code **)(*plVar5 + 0x9f8))(plVar5);
  if (cVar4 == '\0') {
    if (lVar7 == 0) {
      fVar13 = 0.0;
      if (*(char *)((longlong)plVar5 + 0xd23) != '\x01') {
        fVar13 = 3.4028235e+38;
      }
    }
    else {
      fVar2 = *(float *)(param_1 + 0x28);
      fVar13 = (float)FUN_14085b07e((longlong)plVar5 + 0xc94);
      fVar13 = fVar13 + fVar2;
    }
    *(float *)(param_2 + 8) = fVar13;
  }
  else {
    *(undefined4 *)(param_2 + 8) = 0x7f7fffff;
    if ((bVar10 != 0) && ((lVar7 == 0 || (*(char *)(lVar7 + 0x6f1) == '\x01')))) {
      *(undefined4 *)(param_2 + 8) = 0x3f000000;
    }
  }
  uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
  FUN_1456f058e(plVar5,uVar6);
  if (*(char *)((longlong)plVar5 + 0xd22) == '\x01') {
    FUN_1456f1280(param_2,plVar5[0x15]);
  }
  if (((cVar4 == '\0') && (cVar4 = FUN_1410770b6(param_1,param_2), cVar4 != '\0')) &&
     (plVar5[0x123] != DAT_14cb241f8)) {
    FUN_1456f06d6(param_1,param_2);
  }
  else {
    FUN_141077574(param_2);
    FUN_1402b927e(param_1,param_2);
  }
LAB_1456f013e:
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456f056a FUN_1456f056a body=18 status=ok
// SIG undefined FUN_1456f056a(void)

undefined8 FUN_1456f056a(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x918) >> 8),
                  *(longlong *)(param_1 + 0x918) == DAT_14cb24208);
}



// FUNCTION 1456f057c FUN_1456f057c body=18 status=ok
// SIG undefined FUN_1456f057c(void)

undefined8 FUN_1456f057c(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x918) >> 8),
                  *(longlong *)(param_1 + 0x918) == DAT_14cb24210);
}



// FUNCTION 1456f058e FUN_1456f058e body=231 status=ok
// SIG undefined FUN_1456f058e(void)

void FUN_1456f058e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    lVar3 = FUN_140363886();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      FUN_1402b8a92(lVar1 + 0x3c0,param_2);
    }
  }
  FUN_1402b8ad2(param_1 + 0x6b8,param_1,param_2);
  if (param_2 != 0) {
    uVar4 = FUN_144a7b040();
    plVar5 = (longlong *)FUN_144718840(param_2,uVar4);
    if (plVar5 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar5 + 0x40))(plVar5);
      if (cVar2 == '\0') {
        FUN_141460aa2(local_50);
        FUN_141460ac0(param_1 + 0x808,&DAT_14cb86288,local_50);
        if (local_38 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456f0676 FUN_1456f0676 body=96 status=ok
// SIG undefined FUN_1456f0676(void)

undefined8 FUN_1456f0676(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)FUN_1404101e2();
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_1412c5dd0();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,uVar2);
    if (plVar1 != (longlong *)0x0) {
      uVar2 = FUN_1412c5dd0();
      plVar3 = (longlong *)FUN_144718840(plVar1,uVar2);
      if ((plVar1 != plVar3) && (plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001456f06ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
        return uVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 1456f06d6 FUN_1456f06d6 body=1466 status=ok
// SIG undefined FUN_1456f06d6(void)

void FUN_1456f06d6(longlong param_1,char *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined1 auStack_d8 [47];
  char local_a9;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  ushort local_70;
  undefined2 local_68;
  undefined1 local_60;
  undefined1 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar4 = (longlong *)FUN_14479d2ce(param_2 + 0x24);
  if ((*(longlong *)(param_2 + 0x50) == 0) || (cVar2 = FUN_144729dda(param_2 + 0x48), cVar2 == '\0')
     ) {
    plVar12 = (longlong *)0x0;
  }
  else {
    plVar12 = *(longlong **)(param_2 + 0x50);
  }
  if (*(longlong *)(param_2 + 0x60) == 0) goto LAB_1456f0a6b;
  cVar2 = FUN_144729dda(param_2 + 0x58);
  if (cVar2 == '\0') {
    plVar10 = (longlong *)0x0;
  }
  else {
    plVar10 = *(longlong **)(param_2 + 0x60);
  }
  if (((plVar4 == (longlong *)0x0) || (plVar12 == (longlong *)0x0)) || (plVar10 == (longlong *)0x0))
  goto LAB_1456f0a6b;
  if (*param_2 == '\0') {
    cVar2 = FUN_1456f0ca8(plVar4);
    if (cVar2 == '\0') goto LAB_1456f0a6b;
    lVar5 = (**(code **)(*plVar12 + 0x20))(plVar12);
    if ((lVar5 != 0) && (cVar2 = FUN_1402b909a(lVar5), cVar2 == '\x01')) {
      uVar6 = FUN_1456f0c92(lVar5);
      lVar7 = FUN_1402b91c4(uVar6);
      lVar8 = FUN_1402b9204(lVar5,(longlong)plVar4 + 0xd24);
      if (lVar7 != lVar8) {
        FUN_140356f00(lVar5,1,3);
        cVar2 = FUN_1402b909a(lVar5);
        if (cVar2 == '\x01') goto LAB_1456f0a6b;
      }
    }
  }
  param_2[7] = '\0';
  local_a9 = param_2[2];
  plVar9 = plVar4;
  if (local_a9 == '\0') {
    plVar9 = (longlong *)(**(code **)(*plVar4 + 0x9f8))(plVar4);
  }
  uVar6 = (**(code **)(*plVar10 + 0x28))(plVar10);
  local_a8 = param_1;
  if (plVar9 == (longlong *)0x0) {
    FUN_1402b8a4c(uVar6,&DAT_14cb716d8);
    FUN_1402b8a4c(uVar6,&DAT_14cb716e0);
    *param_2 = '\x01';
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x28);
    if (param_2[3] != '\0') goto LAB_1456f0b1a;
  }
  else {
    local_70 = 8;
    local_88 = (undefined8 *)0x0;
    FUN_14485c47a(&local_88,plVar9[0x15]);
    local_68 = CONCAT11(local_68._1_1_,7);
    FUN_1402b90a2(uVar6,&DAT_14cb716d8,&local_88);
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_68 * 0x120));
    if (pcVar1 != (code *)0x0) {
      puVar11 = &local_88;
      if (0x18 < local_70) {
        puVar11 = local_88;
      }
      (*pcVar1)(puVar11);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(local_88);
    }
    FUN_1456f0e14(&local_a0,plVar9,param_2);
    local_70 = 0x18;
    local_88 = (undefined8 *)CONCAT44(uStack_9c,local_a0);
    uStack_80 = uStack_98;
    uStack_7c = uStack_94;
    local_78 = local_90;
    local_68 = CONCAT11(local_68._1_1_,4);
    FUN_1402b90a2(uVar6,&DAT_14cb716e0,&local_88);
    param_1 = local_a8;
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_68 * 0x120));
    if (pcVar1 != (code *)0x0) {
      puVar11 = &local_88;
      if (0x18 < local_70) {
        puVar11 = local_88;
      }
      (*pcVar1)(puVar11);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(local_88);
    }
    *param_2 = '\x01';
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x28);
    if ((param_2[3] == '\x01') && (*(char *)((longlong)plVar9 + 0xf9b) == '\0')) {
LAB_1456f0b1a:
      param_2[3] = '\0';
      param_2[5] = '\0';
      param_2[0x2c] = '\0';
      param_2[0x2d] = '\0';
      param_2[0x2e] = '\0';
      param_2[0x2f] = '\0';
      param_2[0x30] = '\0';
      param_2[0x31] = '\0';
      param_2[0x32] = '\0';
      param_2[0x33] = '\0';
    }
  }
  if (local_a9 == '\0') {
    uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_1456f0d52(plVar4,uVar6);
  }
  if (plVar9 == (longlong *)0x0) {
    local_88 = (undefined8 *)0x0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    FUN_1456f0f42(param_2,&local_88);
    FUN_144a2da94(&local_88);
    uVar6 = FUN_14479d2ce(param_2 + 0x34);
    lVar5 = FUN_14152bd28(uVar6);
    if (lVar5 != 0) {
      uVar6 = FUN_140de1ade(lVar5 + 0xb0);
      FUN_141077e62(lVar5,uVar6,0);
    }
    local_88 = (undefined8 *)((ulonglong)local_88 & 0xffffffffff000000);
    param_2[0] = '\0';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    param_2[4] = '\0';
    param_2[5] = '\0';
    param_2[6] = '\0';
    param_2[7] = '\0';
    param_2[8] = '\0';
    param_2[9] = '\0';
    param_2[10] = '\0';
    param_2[0xb] = '\0';
    param_2[0xc] = '\x02';
    param_2[0xd] = '\0';
    param_2[0xe] = '\0';
    param_2[0xf] = '\0';
    param_2[0x10] = '\0';
    param_2[0x11] = '\0';
    param_2[0x12] = '\0';
    param_2[0x13] = '\0';
    param_2[0x14] = -1;
    param_2[0x15] = -1;
    param_2[0x16] = '\x7f';
    param_2[0x17] = -1;
    param_2[0x18] = '\0';
    param_2[0x19] = '\x01';
    param_2[0x1a] = '\0';
    param_2[0x1b] = '\0';
    param_2[0x1c] = '\0';
    param_2[0x1d] = '\0';
    param_2[0x1e] = '\0';
    param_2[0x1f] = '\0';
    param_2[0x20] = '\0';
    param_2[0x21] = '\0';
    param_2[0x22] = '\0';
    param_2[0x23] = '\0';
    param_2[0x24] = '\0';
    param_2[0x25] = '\0';
    param_2[0x26] = '\0';
    param_2[0x27] = '\0';
    param_2[0x28] = '\0';
    param_2[0x29] = '\0';
    param_2[0x2a] = '\0';
    param_2[0x2b] = '\0';
    param_2[0x2c] = '\0';
    param_2[0x2d] = '\0';
    param_2[0x2e] = '\0';
    param_2[0x2f] = '\0';
    param_2[0x30] = '\0';
    param_2[0x31] = '\0';
    param_2[0x32] = '\0';
    param_2[0x33] = '\0';
    param_2[0x34] = '\0';
    param_2[0x35] = '\0';
    param_2[0x36] = '\0';
    param_2[0x37] = '\0';
    param_2[0x38] = '\0';
    param_2[0x39] = '\0';
    param_2[0x3a] = '\0';
    param_2[0x3b] = '\0';
    param_2[0x3c] = '\0';
    param_2[0x3d] = '\0';
    param_2[0x3e] = '\0';
    param_2[0x3f] = '\0';
    param_2[0x40] = '\0';
    param_2[0x41] = '\0';
    param_2[0x42] = '\0';
    param_2[0x43] = '\0';
    param_2[0x44] = '\0';
    param_2[0x45] = '\0';
    param_2[0x46] = '\0';
    param_2[0x47] = '\0';
    param_2[0x48] = '\0';
    param_2[0x49] = '\0';
    param_2[0x4a] = '\0';
    param_2[0x4b] = '\0';
    param_2[0x4c] = '\0';
    param_2[0x4d] = '\0';
    param_2[0x4e] = '\0';
    param_2[0x4f] = '\0';
    param_2[0x50] = '\0';
    param_2[0x51] = '\0';
    param_2[0x52] = '\0';
    param_2[0x53] = '\0';
    param_2[0x54] = '\0';
    param_2[0x55] = '\0';
    param_2[0x56] = '\0';
    param_2[0x57] = '\0';
    param_2[0x58] = '\0';
    param_2[0x59] = '\0';
    param_2[0x5a] = '\0';
    param_2[0x5b] = '\0';
    param_2[0x5c] = '\0';
    param_2[0x5d] = '\0';
    param_2[0x5e] = '\0';
    param_2[0x5f] = '\0';
    param_2[0x60] = '\0';
    param_2[0x61] = '\0';
    param_2[0x62] = '\0';
    param_2[99] = '\0';
    param_2[100] = '\0';
    param_2[0x65] = '\0';
    param_2[0x66] = '\0';
    param_2[0x67] = '\0';
    param_2[0x68] = '\0';
    param_2[0x69] = '\0';
    param_2[0x6a] = '\0';
    param_2[0x6b] = '\0';
    param_2[0x6c] = '\0';
    param_2[0x6d] = '\0';
    param_2[0x6e] = '\0';
    param_2[0x6f] = '\0';
    param_2[0x70] = '\0';
    param_2[0x71] = '\0';
    param_2[0x72] = '\0';
    param_2[0x73] = '\0';
    param_2[0x74] = '\0';
    param_2[0x75] = '\0';
    param_2[0x76] = '\0';
    param_2[0x77] = '\0';
    param_2[0x78] = '\0';
    param_2[0x79] = '\0';
    param_2[0x78] = '\0';
    param_2[0x79] = '\0';
    param_2[0x7a] = '\0';
    param_2[0x7b] = '\0';
    param_2[0x7c] = '\0';
    param_2[0x7d] = '\0';
    param_2[0x7e] = '\0';
    param_2[0x7f] = '\0';
    goto LAB_1456f0a6b;
  }
  FUN_1402b927e(param_1,param_2);
  local_88 = (undefined8 *)0x0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  cVar2 = FUN_1402b90fa(plVar9);
  if (cVar2 == '\0') {
    cVar2 = FUN_1402b90e8(plVar9);
    if (cVar2 != '\0') {
      lVar5 = FUN_144860928();
      plVar4 = (longlong *)(lVar5 + 0xa0);
      lVar5 = 0xe01;
      goto LAB_1456f0c2d;
    }
    if (*(char *)((longlong)plVar9 + 0xf9d) != '\0') {
LAB_1456f0c74:
      FUN_1456f1280(param_2,plVar9[0x15]);
    }
  }
  else {
    lVar5 = FUN_144860928();
    if (((char)plVar9[0x1db] == '\x01') && ((char)plVar9[0x1d9] != '\0')) {
      plVar4 = plVar9 + 0x1d4;
    }
    else {
      plVar4 = (longlong *)(lVar5 + 0xd8);
    }
    lVar5 = 0xed9;
LAB_1456f0c2d:
    FUN_144983130(&local_88,plVar4);
    param_1 = local_a8;
    if (*(char *)((longlong)plVar9 + 0xf9d) != '\0') {
      if (*(char *)((longlong)plVar9 + lVar5) != '\x01') goto LAB_1456f0c74;
      FUN_1487cc2ba(param_2,&local_88,plVar9);
    }
  }
  FUN_1456f0f42(param_2,&local_88);
  if ((*(char *)((longlong)plVar9 + 0xf9e) == '\x01') &&
     (lVar5 = FUN_14479d2ce(param_2 + 0x34), lVar5 != 0)) {
    lVar7 = FUN_140a40fb0(lVar5);
    if (lVar7 != 0) {
      FUN_1400bc96c(lVar7 + 0x1218,&DAT_14cb71988);
    }
    plVar4 = *(longlong **)(lVar5 + 0x1c8);
    if (plVar4 != (longlong *)0x0) {
      lVar5 = FUN_144a3a302();
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30)) {
        uVar3 = (**(code **)(*plVar4 + 0x578))(plVar4,2);
        *(undefined4 *)(param_2 + 0xc) = uVar3;
        (**(code **)(*plVar4 + 0x938))(plVar4,2,1);
      }
    }
  }
  if (((param_2[3] == '\0') && (*(char *)((longlong)plVar9 + 0xf9b) == '\x01')) &&
     (cVar2 = FUN_1402b9118(param_2), cVar2 != '\0')) {
    FUN_145a2b17e(param_1,param_2);
  }
  FUN_144a2da94(&local_88);
LAB_1456f0a6b:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456f0c92 FUN_1456f0c92 body=22 status=ok
// SIG undefined FUN_1456f0c92(void)

longlong FUN_1456f0c92(longlong param_1)

{
  return (ulonglong)*(byte *)(param_1 + 0x3c0) * 0x138 + param_1 + 0x18;
}



// FUNCTION 1456f0ca8 FUN_1456f0ca8 body=170 status=ok
// SIG undefined FUN_1456f0ca8(void)

ulonglong FUN_1456f0ca8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 unaff_RDI;
  ulonglong uVar9;
  bool bVar11;
  undefined7 uVar10;
  
  plVar3 = *(longlong **)(param_1 + 0xb78);
  uVar10 = (undefined7)((ulonglong)unaff_RDI >> 8);
  uVar9 = CONCAT71(uVar10,1);
  if (plVar3 != (longlong *)0x0) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_1456f0cbe;
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar11 = iVar7 == iVar6;
      if (bVar11) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar11);
    lVar4 = *(longlong *)(param_1 + 0xb70);
    uVar9 = CONCAT71(uVar10,1);
    if (lVar4 != 0) {
      if ((*(char *)(param_1 + 0xb69) == '\x01') && (*(char *)(lVar4 + 0xa0) == '\0')) {
        lVar5 = *(longlong *)(lVar4 + 0x30);
        lVar8 = FUN_140ed0e8c();
        lVar5 = *(longlong *)(lVar5 + 0x10);
        iVar7 = *(int *)(lVar8 + 0x38);
        if ((iVar7 <= *(int *)(lVar5 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar7 * 8) == lVar8 + 0x30)) {
          FUN_1410c9a0e(lVar4,CONCAT71((int7)(int3)((uint)iVar7 >> 8),1));
        }
        uVar9 = 0;
      }
      else {
        FUN_1487c7ad2();
      }
    }
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
LAB_1456f0cbe:
  return uVar9 & 0xffffffff;
}



// FUNCTION 1456f0d52 FUN_1456f0d52 body=192 status=ok
// SIG undefined FUN_1456f0d52(void)

void FUN_1456f0d52(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    lVar2 = FUN_140363886();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_1402b8a92(lVar1 + 0x3d0,param_2);
    }
  }
  FUN_1402b8ad2(param_1 + 0x6d0,param_1,param_2);
  FUN_141460aa2(local_50);
  FUN_141460ac0(param_1 + 0x808,&DAT_14cb86270,local_50);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456f0e14 FUN_1456f0e14 body=299 status=ok
// SIG undefined FUN_1456f0e14(void)

undefined8 * FUN_1456f0e14(undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_2 + 0xa8) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  lVar7 = *(longlong *)(*(longlong *)(param_2 + 0xa8) + 0x1c8);
  if (lVar7 == 0) {
    param_1[2] = DAT_14c8464f0;
    uVar6 = DAT_14c8464e8._4_4_;
    uVar5 = (undefined4)DAT_14c8464e8;
    uVar4 = DAT_14c8464e0._4_4_;
    *(undefined4 *)param_1 = (undefined4)DAT_14c8464e0;
    *(undefined4 *)((longlong)param_1 + 4) = uVar4;
    *(undefined4 *)(param_1 + 1) = uVar5;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar6;
  }
  else {
    uVar3 = *(undefined8 *)(lVar7 + 0x268);
    *param_1 = *(undefined8 *)(lVar7 + 0x260);
    param_1[1] = uVar3;
    param_1[2] = *(undefined8 *)(lVar7 + 0x270);
  }
  lVar7 = FUN_14479d2ce(param_3 + 0x34);
  if (lVar7 != 0) {
    FUN_14070cbf4(&local_30,lVar7);
    if ((local_30 != 0) && (*(int *)(local_30 + 0x250) - 0x15U < 10)) {
      param_1[2] = (double)*(float *)(param_2 + 0xfa4) + (double)param_1[2];
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
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456f0f42 FUN_1456f0f42 body=429 status=ok
// SIG undefined FUN_1456f0f42(void)

void FUN_1456f0f42(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 ***pppuVar8;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [16];
  undefined1 local_88 [40];
  undefined4 local_60;
  undefined8 **local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x34);
  lVar3 = FUN_140363c42(plVar2);
  if ((plVar2 != (longlong *)0x0) && (lVar3 != 0)) {
    uVar4 = FUN_144a78ab8();
    lVar5 = (**(code **)(*plVar2 + 0x288))(plVar2,uVar4);
    if (lVar5 != 0) {
      uVar4 = FUN_144a78ab8();
      lVar6 = FUN_144718840(lVar5,uVar4);
      if ((lVar5 != lVar6) && (lVar6 != 0)) {
        local_88[0] = 0;
        local_60 = 0;
        FUN_1456bb102(local_88,plVar2);
        FUN_1447c3578(param_2,local_58,local_88);
        lVar5 = FUN_14030a32e(local_58);
        pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
        if (pcVar1 != (code *)0x0) {
          pppuVar8 = local_58;
          if (0x18 < local_40) {
            pppuVar8 = (undefined8 ***)local_58[0];
          }
          (*pcVar1)(pppuVar8);
        }
        if (0x18 < local_40) {
          FUN_1400020a8(local_58[0]);
        }
        FUN_144a5ac3a(local_88);
        if (lVar5 == 0) {
          FUN_145702b5e(lVar3);
          FUN_1456f10f0(lVar3);
        }
        else {
          lVar5 = FUN_140363c42(lVar5);
          if (lVar5 != 0) {
            lVar5 = FUN_1438696fc(lVar5);
            if (lVar5 != 0) {
              lVar7 = FUN_1438696fc(lVar3);
              if (lVar5 != lVar7) {
                FUN_145702b5e(lVar3);
                FUN_14493c14a(local_98,lVar6);
                FUN_1403654aa(lVar5,local_98);
              }
            }
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456f10f0 FUN_1456f10f0 body=359 status=ok
// SIG undefined FUN_1456f10f0(void)

void FUN_1456f10f0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined1 local_68 [20];
  undefined1 local_54 [20];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar4 = (longlong *)FUN_14479d2ce(param_1 + 0x98);
  if (plVar4 != (longlong *)0x0) {
    lVar5 = FUN_14479d2ce(param_1 + 0x98);
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_1447210f0(lVar5);
    }
    FUN_1402b6034(&local_40,uVar6);
    if (local_38 != (longlong *)0x0) {
      iVar3 = (int)local_38[1];
      do {
        if (iVar3 == 0) {
          plVar8 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar2 = (int)local_38[1];
        bVar9 = iVar3 == iVar2;
        if (bVar9) {
          *(int *)(local_38 + 1) = iVar3 + 1;
          iVar2 = iVar3;
        }
        iVar3 = iVar2;
        UNLOCK();
        plVar8 = local_38;
      } while (!bVar9);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
      if (plVar8 != (longlong *)0x0) {
        if (local_40 != 0) {
          uVar6 = FUN_144a78ab8();
          plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,uVar6);
          if (plVar4 != (longlong *)0x0) {
            uVar6 = FUN_144a78ab8();
            plVar7 = (longlong *)FUN_144718840(plVar4,uVar6);
            if ((plVar4 != plVar7) && (plVar7 != (longlong *)0x0)) {
              (**(code **)(*plVar7 + 0x10))(plVar7,local_54,1);
              FUN_14493c14a(local_68,plVar7);
              FUN_140363e36(local_40,local_68,local_54);
            }
          }
        }
        LOCK();
        plVar4 = plVar8 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar8)(plVar8);
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
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456f1258 FUN_1456f1258 body=39 status=ok
// SIG undefined FUN_1456f1258(void)

bool FUN_1456f1258(longlong param_1)

{
  longlong lVar1;
  
  if ((*(char *)(param_1 + 0x30) == '\0') && (lVar1 = FUN_1456f0676(), lVar1 != 0)) {
    return *(char *)(lVar1 + 0x675) == '\x02';
  }
  return false;
}



// FUNCTION 1456f1280 FUN_1456f1280 body=274 status=ok
// SIG undefined FUN_1456f1280(void)

void FUN_1456f1280(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    return;
  }
  cVar1 = FUN_144729dda(param_1 + 0x48);
  if (cVar1 == '\0') {
    return;
  }
  plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x50) + 8))();
  if (plVar2 != (longlong *)0x0) {
    uVar3 = FUN_140b066c4();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar3);
    if (plVar2 != (longlong *)0x0) {
      uVar3 = FUN_140b066c4();
      plVar4 = (longlong *)FUN_144718840(plVar2,uVar3);
      if (plVar2 != plVar4) goto LAB_1456f12fa;
    }
  }
  plVar4 = (longlong *)0x0;
LAB_1456f12fa:
  if (param_2 != (longlong *)0x0) {
    uVar3 = FUN_1449a018c();
    plVar2 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar3);
    if (plVar2 != (longlong *)0x0) {
      uVar3 = FUN_1449a018c();
      plVar5 = (longlong *)FUN_144718840(plVar2,uVar3);
      if (((plVar2 != plVar5) && (plVar4 != (longlong *)0x0)) && (plVar5 != (longlong *)0x0)) {
        uVar3 = (**(code **)(*plVar5 + 0x10))(plVar5);
        (**(code **)(*plVar4 + 0x10))(plVar4,uVar3);
      }
    }
  }
  if (*(char *)(param_1 + 6) == '\x01') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x3c);
    if (plVar2 != (longlong *)0x0) {
      FUN_1401bf202(plVar2);
      (**(code **)(*plVar2 + 0x420))(plVar2,0);
    }
    *(undefined1 *)(param_1 + 6) = 0;
  }
  return;
}



// FUNCTION 1456f1392 FUN_1456f1392 body=3462 status=ok
// SIG undefined FUN_1456f1392(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1456f1392(longlong param_1,longlong param_2,undefined8 *param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 ******ppppppuVar3;
  longlong lVar4;
  code *pcVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 *******pppppppuVar14;
  longlong lVar15;
  undefined1 uVar16;
  bool bVar17;
  undefined1 auStack_108 [32];
  undefined8 ******local_e8;
  undefined8 ******local_e0;
  undefined8 ******local_d8;
  undefined8 *******local_d0 [3];
  ushort local_b8;
  byte local_b0;
  undefined1 local_a8 [40];
  undefined4 local_80;
  undefined8 *******local_78;
  uint local_70;
  ushort local_60;
  undefined2 local_58;
  undefined1 local_50;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar9 = FUN_14479d2ce(param_1 + 8);
  if ((lVar9 == 0) || ((*(byte *)(lVar9 + 0x155) & 0x20) != 0)) goto switchD_1456f13fc_caseD_2;
  switch(param_4) {
  case 0:
    uVar10 = FUN_14048b906(*param_3);
    local_d8 = (undefined8 ******)0x0;
    FUN_14485c47a(&local_d8,uVar10);
    local_78 = (undefined8 *******)local_d8;
    iVar8 = FUN_1409a82f2((longlong *)(param_1 + 0x58),
                          (uint)((ulonglong)local_d8 >> 0x20) ^ (uint)local_d8);
    if (iVar8 == -1) goto switchD_1456f13fc_caseD_2;
    lVar9 = *(longlong *)(param_1 + 0x58);
    lVar15 = lVar9 + (longlong)iVar8 * 0x90;
    if (((lVar15 == 0) || ((longlong)iVar8 * 0x90 + lVar9 == -8)) ||
       ((lVar9 = FUN_14479d2ce(lVar15 + 0x2c), param_2 == 0 || (lVar9 == 0))))
    goto switchD_1456f13fc_caseD_2;
    uVar10 = FUN_1402b804a(param_2);
    FUN_1456efc70(&local_78,lVar9);
    FUN_1402b8062(uVar10,&DAT_14cb716e8,&local_78);
    FUN_144a2da94(&local_78);
    local_70 = *(uint *)(lVar9 + 0x658);
    local_78 = (undefined8 *******)0x0;
    local_58 = 4;
    local_50 = 3;
    local_48 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
    FUN_1402b8062(uVar10,&DAT_14cb71740,&local_78);
    FUN_144a2da94(&local_78);
    if (*(char *)(lVar15 + 0xf) != '\0') goto switchD_1456f13fc_caseD_2;
    cVar6 = FUN_1456f056a(lVar9);
    if (cVar6 != '\0') {
      local_78 = (undefined8 *******)0x0;
      local_58 = 4;
      local_70 = (uint)*(byte *)(lVar9 + 0x95a);
      local_48 = (DAT_14c9a8634 & 0x20) == 0;
      local_50 = 1;
      FUN_1446ddc76(local_a8,"bWaitForLoop",1);
      FUN_1402b8062(uVar10,local_a8,&local_78);
      FUN_144a2da94(&local_78);
      uVar12 = FUN_1456f0676(lVar9 + 0x928);
      FUN_1456f215a(&local_78,uVar12);
      FUN_1402b8062(uVar10,&DAT_14cb71748,&local_78);
      FUN_144a2da94(&local_78);
      if (*(char *)(lVar9 + 0x958) == '\x01') {
        local_70 = FUN_14085b07e(lVar9 + 0x950);
        local_78 = (undefined8 *******)0x0;
        local_58 = 4;
        local_50 = 3;
        local_48 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
        FUN_1402b8062(uVar10,&DAT_14cb71750,&local_78);
        FUN_144a2da94(&local_78);
      }
      if (*(char *)(lVar15 + 9) != '\x01') goto switchD_1456f13fc_caseD_2;
      ppppppuVar3 = *(undefined8 *******)(lVar15 + 0x3c);
      FUN_140cc68fa(lVar9);
      lVar15 = *(longlong *)(lVar9 + 0x6a8);
      plVar11 = *(longlong **)(lVar9 + 0x6b0);
      local_78 = (undefined8 *******)ppppppuVar3;
      if (plVar11 == (longlong *)0x0) {
        cVar6 = FUN_140383372(lVar15 + 0x60);
      }
      else {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
        cVar6 = FUN_140383372(lVar15 + 0x60);
        LOCK();
        plVar1 = plVar11 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
      if (cVar6 == '\0') goto switchD_1456f13fc_caseD_2;
      local_78 = (undefined8 *******)0x0;
      local_58 = 4;
      local_70 = 1;
      local_48 = (DAT_14c9a8634 & 0x20) == 0;
      local_50 = 1;
      puVar13 = &DAT_14cb88c38;
      goto LAB_1456f1885;
    }
    cVar6 = FUN_1456f057c(lVar9);
    if (cVar6 != '\0') {
      uVar12 = FUN_14479d2ce(lVar15 + 0x3c);
      local_a8[0] = 0;
      local_80 = 0;
      FUN_1456bb102(local_a8,uVar12);
      if (((*(longlong *)(lVar15 + 0x68) != 0) &&
          (cVar6 = FUN_144729dda(lVar15 + 0x60), cVar6 != '\0')) &&
         ((plVar11 = *(longlong **)(lVar15 + 0x68), plVar11 != (longlong *)0x0 &&
          ((lVar15 = FUN_1487c6890(lVar9 + 0x960), lVar15 != 0 && (*(int *)(lVar15 + 0x3d8) != 0))))
         )) {
        uVar12 = (**(code **)(*plVar11 + 0x28))(plVar11);
        local_60 = 8;
        local_78 = (undefined8 *******)0x0;
        FUN_14485c47a(&local_78,**(undefined8 **)(lVar15 + 0x3d0));
        local_58 = CONCAT11(local_58._1_1_,0xe);
        FUN_1402b90a2(uVar12,&DAT_14cb23ef0,&local_78);
        pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_58 * 0x120));
        if (pcVar5 != (code *)0x0) {
          pppppppuVar14 = &local_78;
          if (0x18 < local_60) {
            pppppppuVar14 = local_78;
          }
          (*pcVar5)(pppppppuVar14);
        }
        if (0x18 < local_60) {
          FUN_1400020a8(local_78);
        }
      }
      local_78 = (undefined8 *******)0x0;
      local_58 = 4;
      local_70 = (uint)*(byte *)(lVar9 + 0x990);
      local_48 = (DAT_14c9a8634 & 0x20) == 0;
      local_50 = 1;
      FUN_1402b8062(uVar10,&DAT_14cb71758,&local_78);
      FUN_144a2da94(&local_78);
      if (*(char *)(lVar9 + 0x990) == '\x01') {
        local_70 = FUN_14085b07e(lVar9 + 0x988);
        local_78 = (undefined8 *******)0x0;
        local_58 = 4;
        local_50 = 3;
        local_48 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
        FUN_1402b8062(uVar10,&DAT_14cb71760,&local_78);
        FUN_144a2da94(&local_78);
      }
      local_78 = (undefined8 *******)0x0;
      local_58 = 4;
      local_70 = (uint)*(byte *)(lVar9 + 0x9d0);
      local_48 = (DAT_14c9a8634 & 0x20) == 0;
      local_50 = 1;
      FUN_1402b8062(uVar10,&DAT_14cb71768,&local_78);
      FUN_144a2da94(&local_78);
      if (*(char *)(lVar9 + 0x9d0) == '\x01') {
        FUN_1447c3578(lVar9 + 0x998,local_d0,local_a8);
        local_70 = FUN_144a7ecd0(local_d0);
        local_78 = (undefined8 *******)0x0;
        local_58 = 4;
        local_50 = 3;
        local_48 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
        FUN_1402b8062(uVar10,&DAT_14cb71770,&local_78);
        FUN_144a2da94(&local_78);
        pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_b0 * 0x120));
        if (pcVar5 != (code *)0x0) {
          pppppppuVar14 = local_d0;
          if (0x18 < local_b8) {
            pppppppuVar14 = local_d0[0];
          }
          (*pcVar5)(pppppppuVar14);
        }
        if (0x18 < local_b8) {
          FUN_1400020a8(local_d0[0]);
        }
      }
      local_78 = (undefined8 *******)0x0;
      local_58 = 4;
      local_70 = (uint)*(byte *)(lVar9 + 0xa10);
      local_48 = (DAT_14c9a8634 & 0x20) == 0;
      local_50 = 1;
      FUN_1402b8062(uVar10,&DAT_14cb71778,&local_78);
      FUN_144a2da94(&local_78);
      if (*(char *)(lVar9 + 0xa10) == '\x01') {
        FUN_1447c3578(lVar9 + 0x9d8,local_d0,local_a8);
        local_70 = FUN_144a7ecd0(local_d0);
        local_78 = (undefined8 *******)0x0;
        local_58 = 4;
        local_50 = 3;
        local_48 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
        FUN_1402b8062(uVar10,&DAT_14cb71780,&local_78);
        FUN_144a2da94(&local_78);
        pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_b0 * 0x120));
        if (pcVar5 != (code *)0x0) {
          pppppppuVar14 = local_d0;
          if (0x18 < local_b8) {
            pppppppuVar14 = local_d0[0];
          }
          (*pcVar5)(pppppppuVar14);
        }
        if (0x18 < local_b8) {
          FUN_1400020a8(local_d0[0]);
        }
      }
      if (*(char *)(lVar9 + 0xa50) == '\x01') {
        FUN_1447c3578(lVar9 + 0xa18,local_d0,local_a8);
        bVar7 = FUN_144a7fca4(local_d0);
        local_78 = (undefined8 *******)0x0;
        local_58 = 4;
        local_70 = (uint)bVar7;
        local_50 = 1;
        local_48 = (DAT_14c9a8634 & 0x20) == 0;
        FUN_1402b8062(uVar10,&DAT_14cb71788,&local_78);
        FUN_144a2da94(&local_78);
        pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_b0 * 0x120));
        if (pcVar5 != (code *)0x0) {
          pppppppuVar14 = local_d0;
          if (0x18 < local_b8) {
            pppppppuVar14 = local_d0[0];
          }
          (*pcVar5)(pppppppuVar14);
        }
        if (0x18 < local_b8) {
          FUN_1400020a8(local_d0[0]);
        }
      }
      if (*(char *)(lVar9 + 0xa90) == '\x01') {
        FUN_1447c3578(lVar9 + 0xa58,local_d0,local_a8);
        bVar7 = FUN_144a7fca4(local_d0);
        local_78 = (undefined8 *******)0x0;
        local_58 = 4;
        local_70 = (uint)bVar7;
        local_50 = 1;
        local_48 = (DAT_14c9a8634 & 0x20) == 0;
        FUN_1402b8062(uVar10,&DAT_14cb71790,&local_78);
        FUN_144a2da94(&local_78);
        pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_b0 * 0x120));
        if (pcVar5 != (code *)0x0) {
          pppppppuVar14 = local_d0;
          if (0x18 < local_b8) {
            pppppppuVar14 = local_d0[0];
          }
          (*pcVar5)(pppppppuVar14);
        }
        if (0x18 < local_b8) {
          FUN_1400020a8(local_d0[0]);
        }
      }
      FUN_144a5ac3a(local_a8);
      goto switchD_1456f13fc_caseD_2;
    }
    cVar6 = FUN_1456f2136(lVar9);
    if (cVar6 == '\0') {
      lVar4 = *(longlong *)(lVar9 + 0x918);
      if (lVar4 == DAT_14cb24218) {
        local_78 = (undefined8 *******)0x0;
        local_58 = 4;
        local_70 = 0;
        local_48 = (DAT_14c9a8634 & 0x20) == 0;
        local_50 = 1;
        FUN_1402b8062(uVar10,&DAT_14cb717a8,&local_78);
        FUN_144a2da94(&local_78);
        uVar10 = FUN_14479d2ce(lVar15 + 0x3c);
        FUN_1487c767c(lVar9,uVar10);
        goto switchD_1456f13fc_caseD_2;
      }
      if (lVar4 == DAT_14cb24220) {
        uVar10 = FUN_14479d2ce(lVar15 + 0x3c);
        FUN_1487c7954(lVar9,uVar10);
        goto switchD_1456f13fc_caseD_2;
      }
      if (lVar4 == DAT_14cb241f8) {
        local_78 = (undefined8 *******)0x0;
        local_58 = 4;
        local_70 = (uint)(*(char *)(lVar9 + 0xc91) == '\x01');
        local_48 = (DAT_14c9a8634 & 0x20) == 0;
        local_50 = 1;
        FUN_1402b8062(uVar10,&DAT_14cb717b0,&local_78);
        FUN_144a2da94(&local_78);
        local_78 = (undefined8 *******)0x0;
        local_58 = 4;
        local_70 = (uint)(*(char *)(lVar9 + 0xc91) == '\x03');
        local_48 = (DAT_14c9a8634 & 0x20) == 0;
        local_50 = 1;
        FUN_1402b8062(uVar10,&DAT_14cb717b8,&local_78);
        FUN_144a2da94(&local_78);
        local_78 = (undefined8 *******)0x0;
        local_58 = 4;
        local_70 = (uint)(*(char *)(lVar9 + 0xc91) == '\x02');
        local_48 = (DAT_14c9a8634 & 0x20) == 0;
        local_50 = 1;
        puVar13 = &DAT_14cb717c0;
      }
      else {
        cVar6 = FUN_1456f2148(lVar9);
        if (cVar6 != '\0') {
          local_78 = (undefined8 *******)0x0;
          local_58 = 4;
          local_70 = (uint)*(byte *)(lVar9 + 0xc92);
          local_48 = (DAT_14c9a8634 & 0x20) == 0;
          local_50 = 1;
          FUN_1402b8062(uVar10,&DAT_14cb717c8,&local_78);
          FUN_144a2da94(&local_78);
          if (*(char *)(lVar9 + 0xf98) != '\x02') goto switchD_1456f13fc_caseD_2;
          lVar9 = lVar9 + 0xf60;
          puVar13 = &DAT_14cb717a8;
          goto LAB_1456f165c;
        }
        cVar6 = FUN_1487c687e(lVar9);
        if (cVar6 == '\0') goto switchD_1456f13fc_caseD_2;
        lVar15 = FUN_144860928();
        FUN_1487cd002(lVar9 + 0xbf0,&local_78);
        FUN_1402b8062(uVar10,&DAT_14cb71710,&local_78);
        FUN_144a2da94(&local_78);
        if ((*(char *)(lVar9 + 0xc88) == '\x01') && (*(char *)(lVar9 + 0xc78) != '\0')) {
          lVar9 = lVar9 + 0xc50;
        }
        else {
          lVar9 = lVar15 + 0xd8;
        }
        FUN_14034cca6(&local_78,lVar9);
        puVar13 = &DAT_14cb71720;
      }
LAB_1456f1885:
      FUN_1402b8062(uVar10,puVar13,&local_78);
      FUN_144a2da94(&local_78);
    }
    else {
      cVar6 = FUN_144a8e0e6(lVar9 + 0xb88);
      if (cVar6 == '\0') {
        FUN_1402b8062(uVar10,&DAT_14cb71798,lVar9 + 0xb80);
      }
      lVar9 = lVar9 + 3000;
      puVar13 = &DAT_14cb717a0;
LAB_1456f165c:
      FUN_1402b8062(uVar10,puVar13,lVar9);
    }
    goto switchD_1456f13fc_caseD_2;
  case 1:
    uVar10 = FUN_14048b906(*param_3);
    local_e0 = (undefined8 ******)0x0;
    FUN_14485c47a(&local_e0,uVar10);
    local_78 = (undefined8 *******)local_e0;
    iVar8 = FUN_1409a82f2((longlong *)(param_1 + 0x58),
                          (uint)((ulonglong)local_e0 >> 0x20) ^ (uint)local_e0);
    if (iVar8 == -1) goto switchD_1456f13fc_caseD_2;
    lVar9 = *(longlong *)(param_1 + 0x58);
    lVar15 = lVar9 + (longlong)iVar8 * 0x90;
    if (((lVar15 == 0) || ((longlong)iVar8 * 0x90 + lVar9 == -8)) ||
       (plVar11 = (longlong *)FUN_14479d2ce(lVar15 + 0x2c), plVar11 == (longlong *)0x0))
    goto switchD_1456f13fc_caseD_2;
    uVar16 = *(undefined1 *)(lVar15 + 0xf);
    uVar10 = FUN_14479d2ce(lVar15 + 0x3c);
    lVar9 = *plVar11;
    uVar12 = 1;
    break;
  default:
    goto switchD_1456f13fc_caseD_2;
  case 4:
    uVar10 = FUN_14048b906(*param_3);
    local_e8 = (undefined8 ******)0x0;
    FUN_14485c47a(&local_e8,uVar10);
    local_78 = (undefined8 *******)local_e8;
    iVar8 = FUN_1409a82f2((longlong *)(param_1 + 0x58),
                          (uint)((ulonglong)local_e8 >> 0x20) ^ (uint)local_e8);
    if (iVar8 == -1) goto switchD_1456f13fc_caseD_2;
    lVar9 = *(longlong *)(param_1 + 0x58);
    lVar15 = lVar9 + (longlong)iVar8 * 0x90;
    if ((lVar15 == 0) || ((longlong)iVar8 * 0x90 + lVar9 == -8)) goto switchD_1456f13fc_caseD_2;
    if ((param_2 == 0) ||
       ((*(char *)(param_2 + 0xb5) == '\x02' &&
        (*(char *)(*(longlong *)(param_2 + 0x48) + 0x73) != '\0')))) {
      bVar17 = false;
    }
    else {
      bVar17 = *(char *)(param_2 + 0xb5) == '\x02';
    }
    *(bool *)(lVar15 + 0xf) = bVar17;
    plVar11 = (longlong *)FUN_14479d2ce(lVar15 + 0x2c);
    if (plVar11 == (longlong *)0x0) goto switchD_1456f13fc_caseD_2;
    uVar10 = FUN_14479d2ce(lVar15 + 0x3c);
    lVar9 = *plVar11;
    uVar12 = 0;
    uVar16 = 1;
    break;
  case 6:
    FUN_14048b906(*param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_108);
  }
  (**(code **)(lVar9 + 0xa40))(plVar11,uVar10,uVar12,uVar16);
switchD_1456f13fc_caseD_2:
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456f2136 FUN_1456f2136 body=18 status=ok
// SIG undefined FUN_1456f2136(void)

undefined8 FUN_1456f2136(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x918) >> 8),
                  *(longlong *)(param_1 + 0x918) == DAT_14cb24228);
}



// FUNCTION 1456f2148 FUN_1456f2148 body=18 status=ok
// SIG undefined FUN_1456f2148(void)

undefined8 FUN_1456f2148(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x918) >> 8),
                  *(longlong *)(param_1 + 0x918) == DAT_14cb241e8);
}



// FUNCTION 1456f215a FUN_1456f215a body=62 status=ok
// SIG undefined FUN_1456f215a(void)

undefined8 * FUN_1456f215a(undefined8 *param_1)

{
  undefined1 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 4) = 8;
  FUN_14485c47a(param_1 + 1);
  *(undefined1 *)(param_1 + 5) = 0xe;
  uVar1 = 0xe;
  if ((DAT_14c9a94d4 & 0x20) != 0) {
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 6) = uVar1;
  return param_1;
}



// FUNCTION 1456f2198 FUN_1456f2198 body=41 status=ok
// SIG undefined FUN_1456f2198(void)

undefined8 FUN_1456f2198(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x30))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001456f21b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0x48))(param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1456f21ca FUN_1456f21ca body=1799 status=ok
// SIG undefined FUN_1456f21ca(void)

undefined8 FUN_1456f21ca(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 auStack_e8 [40];
  longlong *local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  LARGE_INTEGER local_68;
  longlong *plStack_60;
  LARGE_INTEGER local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((DAT_14cabd100 == 0) &&
     ((DAT_14cabd104 == 0 || (*(char *)((longlong)param_1 + 0xd2) == '\0')))) {
    cVar5 = (**(code **)(*param_1 + 0x70))(param_1);
    if (cVar5 == '\0') {
      FUN_1447f69b6(param_1 + 0x1b);
    }
    cVar5 = (**(code **)(*param_1 + 0x70))(param_1);
    if (((cVar5 != '\0') && (cVar5 = (**(code **)(*param_1 + 0x68))(param_1), cVar5 == '\0')) &&
       (iVar6 = FUN_140e55850(), 1 < iVar6)) {
      *(undefined1 *)((longlong)param_1 + 0xa2) = 0;
      QueryPerformanceCounter(&local_58);
      param_1[0x38] = (longlong)((double)local_58.QuadPart * DAT_14c83f420 + 16777216.0);
      param_1[6] = 0;
      plVar13 = (longlong *)param_1[7];
      if (plVar13 != (longlong *)0x0) {
        param_1[7] = 0;
        LOCK();
        plVar14 = plVar13 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
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
      plVar13 = param_1 + 6;
      iVar6 = (int)param_1[5];
      if ((0 < (longlong)iVar6) && (0 < (int)param_1[0x18])) {
        plVar14 = (longlong *)param_1[4];
        plVar12 = plVar14;
        local_c0 = plVar13;
        do {
          plVar13 = (longlong *)*plVar12;
          plVar3 = (longlong *)plVar12[1];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
          }
          plVar4 = (longlong *)param_1[7];
          param_1[6] = (longlong)plVar13;
          param_1[7] = (longlong)plVar3;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar4 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
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
          cVar5 = (**(code **)*plVar13)
                            (plVar13,param_1 + 0x17,*(undefined1 *)((longlong)param_1 + 0xd1));
          if (cVar5 != '\0') {
            if (((param_1[0x10] == 0) ||
                (plVar14 = (longlong *)param_1[0x11], plVar14 == (longlong *)0x0)) ||
               ((int)plVar14[1] < 1)) goto LAB_1456f23cc;
            lVar9 = 0;
            iVar6 = (int)plVar14[1];
            goto LAB_1456f2357;
          }
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
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          plVar12 = plVar12 + 2;
        } while (plVar12 != plVar14 + (longlong)iVar6 * 2);
        goto LAB_1456f23db;
      }
      goto LAB_1456f23e4;
    }
  }
  else {
    FUN_1447a1747(param_1[0x17],(int)param_1[0x18]);
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)((longlong)param_1 + 0xc4) != 0) {
      FUN_1408be2c4(param_1 + 0x17,0);
    }
    *(undefined1 *)((longlong)param_1 + 0xa1) = 0;
  }
  goto LAB_1456f2727;
  while( true ) {
    LOCK();
    iVar6 = (int)plVar14[1];
    bVar15 = iVar7 == iVar6;
    if (bVar15) {
      *(int *)(plVar14 + 1) = iVar7 + 1;
      iVar6 = iVar7;
    }
    UNLOCK();
    if (bVar15) break;
LAB_1456f2357:
    iVar7 = iVar6;
    if (iVar7 == 0) {
      plVar14 = (longlong *)0x0;
      goto LAB_1456f2379;
    }
  }
  lVar9 = param_1[0x10];
LAB_1456f2379:
  (**(code **)(*plVar13 + 0x20))(plVar13,&local_58);
  local_68 = local_58;
  plStack_60 = uStack_50;
  local_58.QuadPart = 0;
  uStack_50 = (longlong *)0x0;
  FUN_1456f2bd8(lVar9);
  plVar13 = uStack_50;
  if (uStack_50 != (longlong *)0x0) {
    LOCK();
    plVar12 = uStack_50 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*uStack_50)(uStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  if (iVar7 != 0) {
    LOCK();
    plVar13 = plVar14 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
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
LAB_1456f23cc:
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
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_1456f23db:
  iVar6 = (int)param_1[5];
  plVar13 = local_c0;
LAB_1456f23e4:
  if (*plVar13 != 0) {
    if (iVar6 < 1) {
LAB_1456f2794:
      uVar8 = 1;
    }
    else {
      iVar6 = (int)param_1[0x18];
LAB_1456f23fd:
      uVar8 = (uint)(iVar6 < 1);
    }
    LOCK();
    *(uint *)(param_1 + 0x13) = uVar8;
    UNLOCK();
    LOCK();
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
    UNLOCK();
    *(undefined1 *)(param_1 + 0x14) = 1;
    local_80 = (undefined4)param_1[0x43];
    local_7c = 1;
    local_78 = 0;
    uStack_70 = 0;
    FUN_1456f2920(param_1[0x41]);
    plVar14 = (longlong *)param_1[0xc];
    local_90 = param_1[0x15];
    if (local_90 == 0) {
      local_90 = DAT_14c98dec8;
      local_88 = DAT_14c98ded0;
    }
    else {
      local_88 = param_1[0x16];
    }
    if (local_88 != 0) {
      LOCK();
      *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar14 + 0x240))(plVar14,&local_90);
    plVar14 = (longlong *)param_1[9];
    lVar9 = param_1[0xe];
    if (plVar14 == (longlong *)0x0) {
LAB_1456f272e:
      FUN_140c2d2b0(0,&local_58);
      FUN_1402bacd4(lVar9,CONCAT44(uStack_50._4_4_ - (float)local_58.s.HighPart,
                                   (float)uStack_50 - (float)local_58.s.LowPart));
    }
    else {
      iVar6 = (int)plVar14[1];
      do {
        if (iVar6 == 0) goto LAB_1456f272e;
        LOCK();
        iVar7 = (int)plVar14[1];
        bVar15 = iVar6 == iVar7;
        if (bVar15) {
          *(int *)(plVar14 + 1) = iVar6 + 1;
          iVar7 = iVar6;
        }
        iVar6 = iVar7;
        UNLOCK();
      } while (!bVar15);
      FUN_140c2d2b0(param_1[8],&local_58);
      FUN_1402bacd4(lVar9,CONCAT44(uStack_50._4_4_ - (float)local_58.s.HighPart,
                                   (float)uStack_50 - (float)local_58.s.LowPart));
      LOCK();
      plVar12 = plVar14 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
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
    local_a0 = param_1[10];
    lVar9 = param_1[0xe];
    local_98 = param_1[0xb];
    if (local_98 != 0) {
      LOCK();
      *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + 1;
      UNLOCK();
    }
    FUN_140763be6(lVar9,&local_a0);
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3a));
    lVar9 = FUN_14001cc68(0x40,0x10);
    local_b0 = param_1[0x3f];
    local_a8 = param_1[0x40];
    if (local_a8 != 0) {
      LOCK();
      *(int *)(local_a8 + 8) = *(int *)(local_a8 + 8) + 1;
      UNLOCK();
    }
    FUN_1456f2996(lVar9,&local_b0,plVar13);
    param_1[0x12] = lVar9;
    FUN_1456f2a10(lVar9);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3a));
    QueryPerformanceCounter(&local_58);
    param_1[0x44] = (longlong)((double)local_58.QuadPart * DAT_14c83f420 + 16777216.0);
    local_58.QuadPart = (LONGLONG)&LAB_1405c972c;
    uStack_50 = (longlong *)CONCAT44(uStack_50._4_4_,0x18);
    FUN_1456f2aea(&DAT_14c868758,&local_b8,param_1 + -2,&local_58);
    param_1[0x45] = local_b8;
    lVar9 = DAT_14cb0d2b0;
    if (DAT_14cb0d2b0 != 0) {
      lVar10 = FUN_1413f862e();
      if (((((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) && (DAT_14c872bd8 == '\0'))
          && ((*(longlong *)(lVar9 + 0x1360) != 0 &&
              (plVar13 = *(longlong **)(lVar9 + 0x1368), plVar13 != (longlong *)0x0)))) &&
         (0 < (int)plVar13[1])) {
        iVar6 = (int)plVar13[1];
        do {
          if (iVar6 == 0) {
            FUN_14032aaf4(0x268,0);
            goto LAB_1456f267f;
          }
          LOCK();
          iVar7 = (int)plVar13[1];
          bVar15 = iVar6 == iVar7;
          if (bVar15) {
            *(int *)(plVar13 + 1) = iVar6 + 1;
            iVar7 = iVar6;
          }
          iVar6 = iVar7;
          UNLOCK();
        } while (!bVar15);
        FUN_14032aaf4(*(longlong *)(lVar9 + 0x1360) + 0x268,0);
        LOCK();
        plVar14 = plVar13 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
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
LAB_1456f267f:
    uVar11 = (**(code **)(*param_1 + 0x98))(param_1);
    FUN_1447f69b6(uVar11);
    uVar11 = 1;
    goto LAB_1456f2695;
  }
  if (iVar6 < 1) goto LAB_1456f2794;
  iVar6 = (int)param_1[0x18];
  if (iVar6 < 1) goto LAB_1456f23fd;
LAB_1456f2727:
  uVar11 = 0;
LAB_1456f2695:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 1456f28da FUN_1456f28da body=70 status=ok
// SIG undefined FUN_1456f28da(void)

void FUN_1456f28da(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140a58896(param_1 + 0x1e0);
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
                    /* WARNING: Could not recover jumptable at 0x0001456f291c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1456f2920 FUN_1456f2920 body=117 status=ok
// SIG undefined FUN_1456f2920(void)

void FUN_1456f2920(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0x3f800000;
  FUN_140a5d1dc(param_1 + 0x230,param_1,param_2);
  FUN_145ab0088(param_1 + 0x230,param_1,0);
  FUN_1449db362(param_2 + 8);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456f2996 FUN_1456f2996 body=121 status=ok
// SIG undefined FUN_1456f2996(void)

longlong FUN_1456f2996(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x20) = *param_2;
  lVar3 = param_2[1];
  *(longlong *)(param_1 + 0x28) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x30) = *param_3;
  lVar3 = param_3[1];
  *(longlong *)(param_1 + 0x38) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 1456f2a10 FUN_1456f2a10 body=217 status=ok
// SIG undefined FUN_1456f2a10(void)

void FUN_1456f2a10(undefined1 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  LOCK();
  *(undefined4 *)(param_1 + 8) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 4) = 1;
  UNLOCK();
  LOCK();
  *param_1 = 1;
  UNLOCK();
  FUN_140056680(&local_30,L"SlateLoadingThread");
  LOCK();
  UNLOCK();
  iVar4 = DAT_14cabd150 + 1;
  DAT_14cabd150 = DAT_14cabd150 + 1;
  FUN_144a83b10(&local_30,iVar4);
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = &PTR_FUN_14a5a9b60;
  puVar1[1] = param_1;
  *(undefined8 **)(param_1 + 0x18) = puVar1;
  puVar3 = local_30;
  if (local_28 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_40 = 0;
  local_48 = 0xffffffffffffffff;
  uVar2 = FUN_1411b1052(puVar1,puVar3,0,0);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456f2aea FUN_1456f2aea body=237 status=ok
// SIG undefined FUN_1456f2aea(void)

undefined8
FUN_1456f2aea(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_149e020b0;
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
  *local_48 = &PTR_FUN_14a5a9e30;
  local_48[3] = param_3;
  local_48[4] = uVar2;
  *(undefined4 *)(local_48 + 5) = uVar1;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456f2bd8 FUN_1456f2bd8 body=249 status=ok
// SIG undefined FUN_1456f2bd8(void)

void FUN_1456f2bd8(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  plVar2 = *(longlong **)(param_1 + 0x270);
  if (plVar2 == (longlong *)0x0) {
LAB_1456f2bf5:
    lVar6 = *param_2;
    lVar7 = 0;
  }
  else {
    iVar4 = (int)plVar2[1];
    do {
      if (iVar4 == 0) goto LAB_1456f2bf5;
      LOCK();
      iVar3 = (int)plVar2[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar8);
    lVar7 = *(longlong *)(param_1 + 0x268);
    lVar6 = *param_2;
    LOCK();
    plVar5 = plVar2 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if (lVar7 != lVar6) {
    *(longlong *)(param_1 + 0x268) = *param_2;
    plVar2 = (longlong *)param_2[1];
    plVar5 = *(longlong **)(param_1 + 0x270);
    if (plVar5 != plVar2) {
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
        UNLOCK();
        plVar5 = *(longlong **)(param_1 + 0x270);
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))();
        }
      }
      *(longlong **)(param_1 + 0x270) = plVar2;
    }
    FUN_140163244(param_1,2);
  }
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar2 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001456f2ccd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x10))(plVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1456f2cd2 FUN_1456f2cd2 body=73 status=ok
// SIG undefined FUN_1456f2cd2(void)

void FUN_1456f2cd2(void)

{
  longlong lVar1;
  
  if (DAT_14ca77900 != 0) {
    FUN_1456f2f02();
    lVar1 = DAT_14ca77900;
    if (DAT_14ca77900 != 0) {
      DAT_14ca77900 = 0;
      FUN_1456f2d1c(lVar1);
      FUN_1400020a8(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 1456f2d1c FUN_1456f2d1c body=221 status=ok
// SIG undefined FUN_1456f2d1c(void)

void FUN_1456f2d1c(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[0xf];
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
  plVar3 = (longlong *)param_1[0xd];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_1456f2e03(param_1[6],(int)param_1[7]);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[3],(int)param_1[4]);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456f2e03 FUN_1456f2e03 body=77 status=ok
// SIG undefined FUN_1456f2e03(void)

void FUN_1456f2e03(longlong param_1,int param_2)

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



// FUNCTION 1456f2e50 FUN_1456f2e50 body=136 status=ok
// SIG undefined FUN_1456f2e50(void)

void FUN_1456f2e50(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001456f2eb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1456f2ed8 FUN_1456f2ed8 body=42 status=ok
// SIG undefined FUN_1456f2ed8(void)

void FUN_1456f2ed8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1402bb7fe(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 1456f2f02 FUN_1456f2f02 body=257 status=ok
// SIG undefined FUN_1456f2f02(void)

void FUN_1456f2f02(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_14738e1ba();
    lVar5 = *(longlong *)(param_1 + 0x88);
    if (lVar5 != 0) {
      FUN_14738e222(lVar5);
      FUN_1400020a8(lVar5);
    }
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar3 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x30);
    lVar6 = 0;
    do {
      if (*(longlong **)(lVar5 + lVar6) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar5 + lVar6) + 0x48))();
      }
      *(undefined8 *)(lVar5 + lVar6) = 0;
      plVar4 = *(longlong **)(lVar5 + 8 + lVar6);
      if (plVar4 != (longlong *)0x0) {
        *(undefined8 *)(lVar5 + 8 + lVar6) = 0;
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
      lVar6 = lVar6 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar6);
  }
  FUN_1447f69b6(param_1);
  if (DAT_14ca77960 == 0) {
    lVar5 = FUN_14001cc68(0x238,0x10);
    FUN_1456f3004(lVar5);
    DAT_14ca77960 = lVar5;
  }
  FUN_14493c441(DAT_14ca77960);
  return;
}



// FUNCTION 1456f3004 FUN_1456f3004 body=379 status=ok
// SIG undefined FUN_1456f3004(void)

undefined8 * FUN_1456f3004(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a355f70;
  param_1[1] = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 2) = 0;
  FUN_1405bceb4(param_1 + 1);
  *param_1 = &PTR_FUN_14a355e30;
  param_1[1] = &PTR_FUN_14a355f10;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
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
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined8 *)((longlong)param_1 + 500) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined1 *)(param_1 + 0x45) = 1;
  *(undefined1 *)((longlong)param_1 + 0x234) = 0;
  return param_1;
}



// FUNCTION 1456f318e FUN_1456f318e body=168 status=ok
// SIG undefined FUN_1456f318e(void)

void FUN_1456f318e(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  
  FUN_1405f1eac();
  lVar5 = FUN_1447210f0(param_1);
  FUN_14490d72a(lVar5);
  uVar4 = 2;
  if (lVar5 != 0) {
    iVar3 = FUN_14490d72a(lVar5);
    if (iVar3 == 3) {
      bVar2 = FUN_14020697c(lVar5);
      uVar4 = (uint)bVar2 * 2;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x448) & 0xfffffffd | uVar4;
  *(uint *)(param_1 + 0x448) = uVar4;
  plVar1 = *(longlong **)(param_1 + 0x390);
  if (plVar1 == (longlong *)0x0) {
    uVar6 = 4;
  }
  else if ((*(byte *)(plVar1 + 0x84) & 2) == 0) {
    uVar6 = 0;
  }
  else {
    bVar2 = (**(code **)(*plVar1 + 0x6c8))();
    uVar6 = (uint)bVar2 << 2;
    uVar4 = *(uint *)(param_1 + 0x448);
  }
  *(uint *)(param_1 + 0x448) = uVar4 & 0xfffffffb | uVar6;
  FUN_1456f3236(param_1);
  return;
}



// FUNCTION 1456f3236 FUN_1456f3236 body=383 status=ok
// SIG undefined FUN_1456f3236(void)

void FUN_1456f3236(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = FUN_1447210f0();
  FUN_1446ddc76(&local_28,"GameplayDebugger",1);
  uVar3 = FUN_144a52528();
  lVar4 = FUN_14493e38c(uVar3,local_28);
  FUN_1456f3424(lVar4 + 8,&local_28,param_1,FUN_1456f35aa);
  FUN_1456f3424(lVar4 + 0x20,&local_28,param_1,FUN_1456f351a);
  FUN_1456f35aa(param_1);
  FUN_1456f351a(param_1);
  (**(code **)(*param_1 + 0x330))(param_1,(*(byte *)(param_1 + 0x89) & 4) == 0);
  uVar1 = *(uint *)(param_1 + 0x89);
  if ((uVar1 & 4) != 0) {
    FUN_1446f470e(&local_30,L"RenderingComp",1);
    lVar4 = FUN_1456f3bcf(param_1,local_30);
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar4);
    }
    param_1[0x7c] = lVar4;
    FUN_140b506dc(lVar4,uVar2,0);
    lVar4 = param_1[0x7c];
    if (DAT_14c950c29 == '\x01') {
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar4 = param_1[0x7c];
      }
    }
    param_1[0x39] = lVar4;
    uVar1 = *(uint *)(param_1 + 0x89);
  }
  if ((uVar1 & 2) != 0) {
    FUN_1402c9756(param_1,0);
  }
  uVar2 = FUN_1456f33b6(uVar2);
  FUN_1402c961e(uVar2,param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456f33b6 FUN_1456f33b6 body=109 status=ok
// SIG undefined FUN_1456f33b6(void)

void FUN_1456f33b6(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446ddc76(&local_20,"GameplayDebugger",1);
  uVar1 = FUN_144a52528();
  uVar1 = FUN_14493e38c(uVar1,local_20);
  FUN_1402c91d8(uVar1,param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456f3424 FUN_1456f3424 body=244 status=ok
// SIG undefined FUN_1456f3424(void)

undefined8
FUN_1456f3424(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_40[2] = lVar3;
  *local_40 = &PTR_FUN_14b5b6fd0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_1448b6402(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456f351a FUN_1456f351a body=142 status=ok
// SIG undefined FUN_1456f351a(void)

void FUN_1456f351a(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446ddc76(&local_20,"GameplayDebugger",1);
  uVar1 = FUN_144a52528();
  lVar2 = FUN_14493e38c(uVar1,local_20);
  FUN_1456f3c8c(lVar2 + 8,param_1,param_1 + 0x3f8);
  if ((*(byte *)(param_1 + 0x448) & 4) != 0) {
    uVar1 = FUN_1447210f0(param_1);
    FUN_1456f33b6(uVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456f35aa FUN_1456f35aa body=154 status=ok
// SIG undefined FUN_1456f35aa(void)

void FUN_1456f35aa(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446ddc76(&local_20,"GameplayDebugger",1);
  uVar1 = FUN_144a52528();
  lVar2 = FUN_14493e38c(uVar1,local_20);
  FUN_1402cac18(lVar2 + 8,param_1,param_1 + 1000);
  FUN_1456f3646(param_1 + 0x3a0);
  if ((*(byte *)(param_1 + 0x448) & 4) != 0) {
    uVar1 = FUN_1447210f0(param_1);
    FUN_1456f33b6(uVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456f3646 FUN_1456f3646 body=80 status=ok
// SIG undefined FUN_1456f3646(void)

void FUN_1456f3646(longlong *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  FUN_141285bfd(param_1[1],(int)param_1[2]);
  *(undefined4 *)(param_1 + 2) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0x14) != 0)) {
    FUN_148b7bf90(param_1 + 1);
  }
  FUN_1456f3696(param_1 + 1,*(undefined4 *)(*param_1 + 0x3f0));
  return;
}



// FUNCTION 1456f3696 FUN_1456f3696 body=121 status=ok
// SIG undefined FUN_1456f3696(void)

void FUN_1456f3696(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1456f3710(param_1,iVar1);
    }
    FUN_1402c91b8((longlong)iVar1 * 0x40 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_148b7bfc0(param_1,param_2,iVar1 - param_2);
    FUN_148b7c01a(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1456f3710 FUN_1456f3710 body=132 status=ok
// SIG undefined FUN_1456f3710(void)

void FUN_1456f3710(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1456f3794 FUN_1456f3794 body=228 status=ok
// SIG undefined FUN_1456f3794(void)

longlong FUN_1456f3794(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9ed88 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_148b79ac7;
    local_40 = &LAB_14584e1c1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 0x3c0;
    FUN_14081cfa3(L"/Script/GameplayDebugger",L"GameplayDebuggerPlayerManager",&DAT_14cb9ed88,
                  &DAT_148b79ac6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9ed88;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456f387a FUN_1456f387a body=85 status=ok
// SIG undefined FUN_1456f387a(void)

void FUN_1456f387a(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_1456f38d0();
  return;
}



// FUNCTION 1456f38d0 FUN_1456f38d0 body=114 status=ok
// SIG undefined FUN_1456f38d0(void)

void FUN_1456f38d0(longlong *param_1,int param_2)

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



// FUNCTION 1456f3942 FUN_1456f3942 body=287 status=ok
// SIG undefined FUN_1456f3942(void)

undefined4 * FUN_1456f3942(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
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
  FUN_1456f3ae8(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x20) ^ (uint)uVar2;
  cVar4 = FUN_1456f3a62(param_1,uVar9,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x14) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      FUN_1402caa5a(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456f3a62 FUN_1456f3a62 body=132 status=ok
// SIG undefined FUN_1456f3a62(void)

undefined8 FUN_1456f3a62(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    iVar5 = FUN_1402c9568();
    if (iVar5 != -1) {
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      uVar3 = *(undefined4 *)(param_3 + 1);
      uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar5 * 0x18);
      *puVar1 = *(undefined4 *)param_3;
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      FUN_1456f38d0(param_1,*param_4);
      *param_4 = iVar5;
      uVar6 = 1;
      goto LAB_1456f3aa4;
    }
  }
  uVar6 = 0;
LAB_1456f3aa4:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456f3ae8 FUN_1456f3ae8 body=231 status=ok
// SIG undefined FUN_1456f3ae8(void)

int * FUN_1456f3ae8(longlong *param_1,int *param_2)

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
      FUN_1403951a8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1456f3bcf FUN_1456f3bcf body=187 status=ok
// SIG undefined FUN_1456f3bcf(void)

undefined8 FUN_1456f3bcf(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_14592c656();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456f3c8c FUN_1456f3c8c body=601 status=ok
// SIG undefined FUN_1456f3c8c(void)

void FUN_1456f3c8c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar9 = *(int *)((longlong)param_3 + 0xc);
  FUN_145877785(*param_3,(int)param_3[1]);
  *(undefined4 *)(param_3 + 1) = 0;
  if ((iVar9 < 0) && (*(int *)((longlong)param_3 + 0xc) != 0)) {
    FUN_148b7b880(param_3);
  }
  plVar1 = (longlong *)(param_1 + 0x30);
  plVar2 = (longlong *)(param_1 + 0x40);
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = plVar2;
  if (*(int *)(param_1 + 0x58) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar9 = *(int *)(param_1 + 0x58);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar9) || (uStack_60 != plVar2)) {
    do {
      puVar3 = (undefined8 *)(*local_90 + (longlong)iStack_74 * 0x28);
      local_68 = *puVar3;
      uStack_60 = (longlong *)0x0;
      local_58 = 0;
      FUN_1402c9880(&uStack_60,puVar3 + 1);
      uStack_50 = CONCAT31(uStack_50._1_3_,*(byte *)(puVar3 + 3));
      if ((*(byte *)(puVar3 + 3) & 2) != 0) {
        DAT_14cb9ead0 = local_68;
        plVar8 = uStack_60;
        if (local_58 == 0) {
          plVar8 = (longlong *)0x0;
        }
        (**(code **)(*plVar8 + 0x58))(plVar8,&local_a0);
        FUN_14485c47a(local_a0 + 0x28,param_2);
        iVar6 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar6 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar6 + 1U) {
          FUN_1456f3f5e(param_3,iVar6);
        }
        plVar8 = local_98;
        lVar7 = *param_3;
        *(longlong *)(lVar7 + (longlong)iVar6 * 0x10) = local_a0;
        *(longlong **)(lVar7 + 8 + (longlong)iVar6 * 0x10) = local_98;
        if (local_98 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_98 + 1) = (int)local_98[1] + 1;
          UNLOCK();
          if (local_98 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_98 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)*local_98)(local_98);
              LOCK();
              piVar5 = (int *)((longlong)plVar8 + 0xc);
              *piVar5 = *piVar5 + -1;
              UNLOCK();
              if (*piVar5 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
              }
            }
          }
        }
      }
      FUN_1449db362(&uStack_60);
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 ||
             ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar2 || iStack_74 != iVar9));
  }
  DAT_14cb9ead0 = 0;
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456f3ee6 FUN_1456f3ee6 body=26 status=ok
// SIG undefined FUN_1456f3ee6(void)

undefined8 FUN_1456f3ee6(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return param_2;
}



// FUNCTION 1456f3f00 FUN_1456f3f00 body=93 status=ok
// SIG undefined FUN_1456f3f00(void)

void FUN_1456f3f00(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5b7330;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5b72c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1456f3f5e FUN_1456f3f5e body=132 status=ok
// SIG undefined FUN_1456f3f5e(void)

void FUN_1456f3f5e(longlong param_1,int param_2)

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



// FUNCTION 1456f3fe2 FUN_1456f3fe2 body=237 status=ok
// SIG undefined FUN_1456f3fe2(void)

longlong * FUN_1456f3fe2(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar2 = FUN_14001cc68(0x50,0x10);
  FUN_1456f43ea(lVar2);
  *param_1 = lVar2;
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b5b70b0;
  plVar3[2] = lVar2;
  param_1[1] = (longlong)plVar3;
  if (lVar2 == 0) {
    return param_1;
  }
  if (((*(longlong *)(lVar2 + 8) != 0) && (*(longlong *)(lVar2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(lVar2 + 0x10) + 8))) {
    return param_1;
  }
  if (plVar3 == (longlong *)0x0) {
    *(longlong *)(lVar2 + 8) = lVar2;
    plVar4 = *(longlong **)(lVar2 + 0x10);
    if (plVar4 == (longlong *)0x0) {
      return param_1;
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong *)(lVar2 + 8) = lVar2;
    if (*(longlong **)(lVar2 + 0x10) == plVar3) goto LAB_1456f406d;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    plVar4 = *(longlong **)(lVar2 + 0x10);
    if (plVar4 == (longlong *)0x0) {
      *(longlong **)(lVar2 + 0x10) = plVar3;
      goto LAB_1456f406d;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar4 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar4 + 0x10))();
  }
  *(longlong **)(lVar2 + 0x10) = plVar3;
  if (plVar3 == (longlong *)0x0) {
    return param_1;
  }
LAB_1456f406d:
  LOCK();
  plVar4 = plVar3 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  return param_1;
}



// FUNCTION 1456f40d0 FUN_1456f40d0 body=237 status=ok
// SIG undefined FUN_1456f40d0(void)

longlong * FUN_1456f40d0(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar2 = FUN_14001cc68(0x50,0x10);
  FUN_1456f41be(lVar2);
  *param_1 = lVar2;
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b5b7140;
  plVar3[2] = lVar2;
  param_1[1] = (longlong)plVar3;
  if (lVar2 == 0) {
    return param_1;
  }
  if (((*(longlong *)(lVar2 + 8) != 0) && (*(longlong *)(lVar2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(lVar2 + 0x10) + 8))) {
    return param_1;
  }
  if (plVar3 == (longlong *)0x0) {
    *(longlong *)(lVar2 + 8) = lVar2;
    plVar4 = *(longlong **)(lVar2 + 0x10);
    if (plVar4 == (longlong *)0x0) {
      return param_1;
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong *)(lVar2 + 8) = lVar2;
    if (*(longlong **)(lVar2 + 0x10) == plVar3) goto LAB_1456f415b;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    plVar4 = *(longlong **)(lVar2 + 0x10);
    if (plVar4 == (longlong *)0x0) {
      *(longlong **)(lVar2 + 0x10) = plVar3;
      goto LAB_1456f415b;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar4 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar4 + 0x10))();
  }
  *(longlong **)(lVar2 + 0x10) = plVar3;
  if (plVar3 == (longlong *)0x0) {
    return param_1;
  }
LAB_1456f415b:
  LOCK();
  plVar4 = plVar3 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  return param_1;
}



// FUNCTION 1456f41be FUN_1456f41be body=203 status=ok
// SIG undefined FUN_1456f41be(void)

undefined8 * FUN_1456f41be(undefined8 *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[5] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b5b3750;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar1 = DAT_14c964d70;
  FUN_1446f470e(&local_38,L"Toggle",1);
  local_28 = 0x10;
  local_30 = uVar1;
  FUN_1402c9ba2(&local_30,local_38);
  local_48 = FUN_148b79628;
  local_40 = 0;
  bVar2 = FUN_1456f428a(param_1,&local_30,param_1);
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) & 0xfffffffe | (uint)bVar2;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456f428a FUN_1456f428a body=350 status=ok
// SIG undefined FUN_1456f428a(void)

undefined4
FUN_1456f428a(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar5 = *(undefined4 *)(param_4 + 1);
  uVar3 = *param_4;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  local_40 = 0;
  local_60 = *param_2;
  local_58 = *(undefined4 *)(param_2 + 1);
  FUN_1446efa72(&local_50,0,3,0x10);
  local_48 = 3;
  *local_50 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_50[2] = lVar6;
  *local_50 = &PTR_FUN_14b5b70d0;
  local_50[3] = param_3;
  local_50[4] = uVar3;
  *(undefined4 *)(local_50 + 5) = uVar5;
  local_40 = 0;
  uVar5 = FUN_1402c99b2();
  if ((char)uVar5 != '\0') {
    iVar2 = *(int *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x20) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x24) < iVar2 + 1U) {
      FUN_1402c9a2c((longlong *)(param_1 + 0x18),iVar2);
    }
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 0x28);
    *(undefined4 *)(puVar1 + 1) = local_58;
    *puVar1 = local_60;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
    FUN_14009d848(puVar1 + 2,&local_50);
    *(undefined1 *)(puVar1 + 4) = local_40;
  }
  FUN_1449db362(&local_50);
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456f43ea FUN_1456f43ea body=378 status=ok
// SIG undefined FUN_1456f43ea(void)

undefined8 * FUN_1456f43ea(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_14b5b3690;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar1 = *(uint *)(param_1 + 6);
  *(uint *)(param_1 + 6) = uVar1 & 0xfffffff8;
  if (DAT_14cb0d2b0 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*(uint *)(DAT_14cb0d2b0 + 0xe10) & 1) << 3;
  }
  *(uint *)(param_1 + 6) = uVar1 & 0xffffffe0 | uVar4;
  uVar2 = DAT_14c965580;
  FUN_1446f470e(&local_40,L"ToggleHUD",1);
  local_38 = uVar2;
  local_30 = DAT_14cb9ed00;
  FUN_1402c9ba2(&local_38,local_40);
  uVar2 = DAT_14c964d70;
  FUN_1446f470e(&local_58,L"ToggleMessages",1);
  local_50 = uVar2;
  local_48 = DAT_14cb9ed00;
  FUN_1402c9ba2(&local_50,local_58);
  local_68 = &LAB_148b792a8;
  local_60 = 0;
  cVar3 = FUN_1456f4566(param_1,&local_38,param_1);
  iVar6 = -1;
  iVar5 = -1;
  if (cVar3 != '\0') {
    iVar5 = *(int *)(param_1 + 4) + -1;
  }
  *(int *)((longlong)param_1 + 0x34) = iVar5;
  local_68 = &LAB_148b792c8;
  local_60 = 0;
  cVar3 = FUN_1456f4566(param_1,&local_50,param_1);
  if (cVar3 != '\0') {
    iVar6 = *(int *)(param_1 + 4) + -1;
  }
  *(int *)(param_1 + 7) = iVar6;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456f4566 FUN_1456f4566 body=350 status=ok
// SIG undefined FUN_1456f4566(void)

undefined4
FUN_1456f4566(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar5 = *(undefined4 *)(param_4 + 1);
  uVar3 = *param_4;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  local_40 = 0;
  local_60 = *param_2;
  local_58 = *(undefined4 *)(param_2 + 1);
  FUN_1446efa72(&local_50,0,3,0x10);
  local_48 = 3;
  *local_50 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_50[2] = lVar6;
  *local_50 = &PTR_FUN_14b5b7040;
  local_50[3] = param_3;
  local_50[4] = uVar3;
  *(undefined4 *)(local_50 + 5) = uVar5;
  local_40 = 0;
  uVar5 = FUN_1402c99b2();
  if ((char)uVar5 != '\0') {
    iVar2 = *(int *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x20) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x24) < iVar2 + 1U) {
      FUN_1402c9a2c((longlong *)(param_1 + 0x18),iVar2);
    }
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 0x28);
    *(undefined4 *)(puVar1 + 1) = local_58;
    *puVar1 = local_60;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
    FUN_14009d848(puVar1 + 2,&local_50);
    *(undefined1 *)(puVar1 + 4) = local_40;
  }
  FUN_1449db362(&local_50);
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456f46c6 FUN_1456f46c6 body=75 status=ok
// SIG undefined FUN_1456f46c6(void)

void FUN_1456f46c6(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1456f4712 FUN_1456f4712 body=130 status=ok
// SIG undefined FUN_1456f4712(void)

undefined8 * FUN_1456f4712(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  lVar2 = param_2[4];
  param_1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}



// FUNCTION 1456f4794 FUN_1456f4794 body=24 status=ok
// SIG undefined FUN_1456f4794(void)

void FUN_1456f4794(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001456f47a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1456f47ac FUN_1456f47ac body=38 status=ok
// SIG undefined FUN_1456f47ac(void)

undefined8 FUN_1456f47ac(undefined8 param_1,int param_2)

{
  FUN_1402cb560();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1456f47d2 FUN_1456f47d2 body=64 status=ok
// SIG undefined FUN_1456f47d2(void)

void FUN_1456f47d2(longlong param_1)

{
  if (param_1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_1456f4a42(param_1 + 8);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1456f4812 FUN_1456f4812 body=67 status=ok
// SIG undefined FUN_1456f4812(void)

void FUN_1456f4812(longlong param_1)

{
  FUN_1456f4856();
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1456f4856 FUN_1456f4856 body=136 status=ok
// SIG undefined FUN_1456f4856(void)

void FUN_1456f4856(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  plVar1 = (longlong *)(param_1 + 0x88);
  if (0 < (longlong)*(int *)(param_1 + 0x90)) {
    uVar3 = (longlong)*(int *)(param_1 + 0x90) + 1;
    do {
      if (*(longlong *)(*plVar1 + -0x10 + uVar3 * 8) != 0) {
        FUN_1400507f4();
        lVar2 = *(longlong *)(*plVar1 + -0x10 + uVar3 * 8);
        if (lVar2 != 0) {
          FUN_1456f48de(lVar2);
          FUN_1400020a8(lVar2);
        }
      }
      uVar3 = uVar3 - 1;
    } while (1 < uVar3);
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(int *)(param_1 + 0x94) == 0) {
    return;
  }
  FUN_1456f497c(plVar1);
  return;
}



// FUNCTION 1456f48de FUN_1456f48de body=157 status=ok
// SIG undefined FUN_1456f48de(void)

void FUN_1456f48de(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  FUN_140db0884(*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xb0));
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  puVar2 = *(undefined8 **)(param_1 + 0x90);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x88);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1456f497c FUN_1456f497c body=48 status=ok
// SIG undefined FUN_1456f497c(void)

void FUN_1456f497c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1456f49ac FUN_1456f49ac body=48 status=ok
// SIG undefined FUN_1456f49ac(void)

void FUN_1456f49ac(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1456f49dc FUN_1456f49dc body=48 status=ok
// SIG undefined FUN_1456f49dc(void)

void FUN_1456f49dc(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1456f4a0c FUN_1456f4a0c body=53 status=ok
// SIG undefined FUN_1456f4a0c(void)

void FUN_1456f4a0c(longlong *param_1)

{
  FUN_1456f4b28();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456f4a42 FUN_1456f4a42 body=53 status=ok
// SIG undefined FUN_1456f4a42(void)

void FUN_1456f4a42(longlong *param_1)

{
  FUN_1456f4cdc();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456f4a78 FUN_1456f4a78 body=57 status=ok
// SIG undefined FUN_1456f4a78(void)

void FUN_1456f4a78(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_1456f4ab2(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x0001456f4aaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 1456f4ab2 FUN_1456f4ab2 body=53 status=ok
// SIG undefined FUN_1456f4ab2(void)

void FUN_1456f4ab2(longlong *param_1)

{
  FUN_1456f4e1a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456f4ae8 FUN_1456f4ae8 body=63 status=ok
// SIG undefined FUN_1456f4ae8(void)

void FUN_1456f4ae8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a353730;
  if ((longlong *)param_1[0x3d] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x3d] + 0x10))();
  }
  FUN_1456f4c04(param_1 + 0x31);
  FUN_1456f4b82(param_1);
  return;
}



// FUNCTION 1456f4b28 FUN_1456f4b28 body=90 status=ok
// SIG undefined FUN_1456f4b28(void)

void FUN_1456f4b28(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14736f258(param_1,0);
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



// FUNCTION 1456f4b82 FUN_1456f4b82 body=130 status=ok
// SIG undefined FUN_1456f4b82(void)

void FUN_1456f4b82(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR__purecall_14a34aaf0;
  FUN_1402cd97c();
  lVar1 = 0x128;
  do {
    FUN_1456f4c04((longlong)param_1 + lVar1);
    lVar1 = lVar1 + -0x60;
  } while (lVar1 != 0x68);
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1456f4c70(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1456f4ca6(param_1 + 2);
  return;
}



// FUNCTION 1456f4c04 FUN_1456f4c04 body=108 status=ok
// SIG undefined FUN_1456f4c04(void)

void FUN_1456f4c04(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1[10];
  lVar1 = param_1[0xb];
  if ((longlong)(int)lVar1 != 0) {
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar3) != 0) {
        FUN_1400020a8();
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)(int)lVar1 * 8 != lVar3);
    lVar2 = param_1[10];
  }
  if (lVar2 != 0) {
    FUN_1400020a8(lVar2);
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1456f4c70 FUN_1456f4c70 body=53 status=ok
// SIG undefined FUN_1456f4c70(void)

void FUN_1456f4c70(longlong *param_1)

{
  FUN_1456f5cea();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456f4ca6 FUN_1456f4ca6 body=53 status=ok
// SIG undefined FUN_1456f4ca6(void)

void FUN_1456f4ca6(longlong *param_1)

{
  FUN_1456f5c54();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456f4cdc FUN_1456f4cdc body=316 status=ok
// SIG undefined FUN_1456f4cdc(void)

void FUN_1456f4cdc(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
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
      plVar2 = *(longlong **)(*local_68 + 8 + (longlong)iStack_4c * 0x18);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456f4e1a FUN_1456f4e1a body=349 status=ok
// SIG undefined FUN_1456f4e1a(void)

void FUN_1456f4e1a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
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
      lVar3 = (longlong)iStack_5c;
      lVar2 = *local_78;
      lVar4 = 0xc0;
      do {
        if (*(longlong *)(lVar3 * 0x100 + lVar2 + -8 + lVar4) != 0) {
          FUN_1400020a8();
        }
        lVar4 = lVar4 + -0x18;
      } while (lVar4 != 0);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1458130c8(param_1,0);
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



// FUNCTION 1456f4f78 FUN_1456f4f78 body=547 status=ok
// SIG undefined FUN_1456f4f78(void)

void FUN_1456f4f78(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x14f0);
  if (lVar3 != 0) {
    FUN_1456f599c(lVar3);
    FUN_1400020a8(lVar3);
  }
  *(undefined8 *)(param_1 + 0x14f0) = 0;
  lVar3 = *(longlong *)(param_1 + 0x1500);
  if (lVar3 != 0) {
    FUN_1402cd362(lVar3);
    FUN_1400020a8(lVar3);
  }
  *(undefined8 *)(param_1 + 0x1500) = 0;
  FUN_1456f58d8(param_1 + 0x13e8);
  FUN_1456f535a(param_1 + 0x1438);
  FUN_1402cc30c(param_1 + 0x14b0);
  FUN_1456f5312(param_1 + 0x14b0);
  FUN_1456f52d2(param_1 + 0x1300);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1488));
  if (*(longlong *)(param_1 + 0x1470) != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1408));
  if (*(longlong *)(param_1 + 0x13f8) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x13a8) = 0;
  if (*(longlong *)(param_1 + 0x13a0) != 0) {
    FUN_1400020a8();
  }
  FUN_1456f519c(param_1 + 0x1360);
  *(undefined4 *)(param_1 + 0x1348) = 0;
  if (*(longlong *)(param_1 + 0x1340) != 0) {
    FUN_1400020a8();
  }
  FUN_1456f51d2(param_1 + 0x1300);
  FUN_1456f5208(param_1 + 0xb00);
  lVar3 = 0;
  do {
    FUN_1402ccf32(param_1 + 0xa80 + lVar3);
    lVar3 = lVar3 + -0x40;
  } while (lVar3 != -0x100);
  if (*(longlong *)(param_1 + 0x9a0) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x9a0) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_1402cc83a(param_1 + 0x8f0);
  FUN_1456f5710(param_1 + 0x8a8);
  FUN_1456f526e(param_1 + 0x6d8);
  FUN_1456f56b4(param_1 + 0x6b0);
  FUN_1456f5596(param_1 + 0x658);
  FUN_1456f5546(param_1 + 0x90);
  *(undefined ***)(param_1 + 0x40) = &PTR_FUN_14a34c120;
  FUN_1456f5818(param_1 + 0x80,0);
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001456f5174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 1456f519c FUN_1456f519c body=53 status=ok
// SIG undefined FUN_1456f519c(void)

void FUN_1456f519c(longlong *param_1)

{
  FUN_1456f565a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456f51d2 FUN_1456f51d2 body=53 status=ok
// SIG undefined FUN_1456f51d2(void)

void FUN_1456f51d2(longlong *param_1)

{
  FUN_1402cd532();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456f5208 FUN_1456f5208 body=61 status=ok
// SIG undefined FUN_1456f5208(void)

void FUN_1456f5208(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x780);
  if (*(longlong *)(param_1 + 0x780) == 0) {
    lVar1 = param_1;
  }
  FUN_1456f5245(lVar1,*(undefined4 *)(param_1 + 0x7c0));
  if (*(longlong *)(param_1 + 0x780) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456f5245 FUN_1456f5245 body=41 status=ok
// SIG undefined FUN_1456f5245(void)

void FUN_1456f5245(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1456f53a6(param_1);
    param_1 = param_1 + 0x280;
  }
  return;
}



// FUNCTION 1456f526e FUN_1456f526e body=61 status=ok
// SIG undefined FUN_1456f526e(void)

void FUN_1456f526e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x1c0);
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    lVar1 = param_1;
  }
  FUN_1456f52ab(lVar1,*(undefined4 *)(param_1 + 0x1c8));
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456f52ab FUN_1456f52ab body=38 status=ok
// SIG undefined FUN_1456f52ab(void)

void FUN_1456f52ab(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1402cc6f4(param_1);
    param_1 = param_1 + 0x70;
  }
  return;
}



// FUNCTION 1456f52d2 FUN_1456f52d2 body=63 status=ok
// SIG undefined FUN_1456f52d2(void)

void FUN_1456f52d2(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1402cd532(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1402cd75e(param_1);
    return;
  }
  FUN_147379858(param_1);
  FUN_1402cd532(param_1);
  return;
}



// FUNCTION 1456f5312 FUN_1456f5312 body=71 status=ok
// SIG undefined FUN_1456f5312(void)

void FUN_1456f5312(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    FUN_14493e5fa(*(undefined8 *)(param_1 + 0x10 + lVar2 * 8),0,0);
    puVar1 = *(undefined8 **)(param_1 + 0x10 + lVar2 * 8);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)();
    }
    *(undefined8 *)(param_1 + 0x10 + lVar2 * 8) = 0;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 4);
  return;
}



// FUNCTION 1456f535a FUN_1456f535a body=76 status=ok
// SIG undefined FUN_1456f535a(void)

void FUN_1456f535a(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_140a6e68e(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  FUN_1402cd2e4(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001456f539f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  return;
}



// FUNCTION 1456f53a6 FUN_1456f53a6 body=237 status=ok
// SIG undefined FUN_1456f53a6(void)

void FUN_1456f53a6(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong **)(param_1 + 600) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 600) + 0x10))();
  }
  lVar1 = *(longlong *)(param_1 + 0x248);
  if (lVar1 != 0) {
    FUN_1456f5494(lVar1);
    FUN_1400020a8(lVar1);
  }
  FUN_1402ccd72(param_1 + 0x200);
  FUN_1402cd172(param_1 + 0x1c0);
  FUN_1402cc892(param_1 + 0x180);
  FUN_14493f7a6(param_1 + 0xe8);
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  FUN_1402ccb2c(param_1 + 0x80);
  while (*(undefined8 **)(param_1 + 0x58) != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x58) = **(undefined8 **)(param_1 + 0x58);
    FUN_1400020a8();
  }
  while (*(undefined8 **)(param_1 + 0x48) != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x48) = **(undefined8 **)(param_1 + 0x48);
    FUN_1400020a8();
  }
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001456f5481. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 1456f5494 FUN_1456f5494 body=178 status=ok
// SIG undefined FUN_1456f5494(void)

void FUN_1456f5494(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 != (undefined8 *)0x0) {
    param_1[2] = 0;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    param_1[1] = 0;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if ((LPVOID)*param_1 != (LPVOID)0x0) {
    VirtualFree((LPVOID)*param_1,0,0x8000);
    *param_1 = 0;
  }
  param_1[3] = 0;
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001456f5543. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 1456f5546 FUN_1456f5546 body=79 status=ok
// SIG undefined FUN_1456f5546(void)

void FUN_1456f5546(longlong param_1)

{
  if (DAT_14c760b88 == '\x01') {
    FUN_1456f5a38(param_1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1a0));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x140));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x118));
                    /* WARNING: Could not recover jumptable at 0x0001456f5592. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return;
}



// FUNCTION 1456f5596 FUN_1456f5596 body=83 status=ok
// SIG undefined FUN_1456f5596(void)

void FUN_1456f5596(longlong param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  FUN_1456f55e9(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_1456f5617(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1456f55e9 FUN_1456f55e9 body=46 status=ok
// SIG undefined FUN_1456f55e9(void)

void FUN_1456f55e9(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if ((longlong *)*param_1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_1 + 0x10))();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1456f5617 FUN_1456f5617 body=67 status=ok
// SIG undefined FUN_1456f5617(void)

void FUN_1456f5617(longlong param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 0x50);
    do {
      puVar2 = (undefined8 *)*plVar3;
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      FUN_1402cc80e(plVar3 + -9);
      plVar3 = plVar3 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1456f565a FUN_1456f565a body=89 status=ok
// SIG undefined FUN_1456f565a(void)

void FUN_1456f565a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1456f56b4 FUN_1456f56b4 body=91 status=ok
// SIG undefined FUN_1456f56b4(void)

void FUN_1456f56b4(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (lVar2 != 0) {
    puVar3 = *(undefined8 **)(lVar2 + 8);
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    FUN_1400020a8(lVar2);
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 == 0) {
    return;
  }
  FUN_14737001e(lVar2);
  FUN_1400020a8(lVar2);
  return;
}



// FUNCTION 1456f5710 FUN_1456f5710 body=112 status=ok
// SIG undefined FUN_1456f5710(void)

void FUN_1456f5710(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14a349710;
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
  *param_1 = &PTR_LAB_14a3496e0;
  puVar4 = (undefined8 *)param_1[2];
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001456f575c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar4)(puVar4,1);
      return;
    }
  }
  return;
}



// FUNCTION 1456f5780 FUN_1456f5780 body=76 status=ok
// SIG undefined FUN_1456f5780(void)

void FUN_1456f5780(undefined8 param_1)

{
  longlong lVar1;
  uint uVar2;
  
  do {
    uVar2 = FUN_14470efbc(param_1);
    if (uVar2 == 0) {
      return;
    }
    lVar1 = *(longlong *)
             (*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar2 >> 0xe) * 8) + 8 +
             (ulonglong)(uVar2 & 0x3fff) * 0x18);
    FUN_1447d080c(uVar2);
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1456f57cc FUN_1456f57cc body=76 status=ok
// SIG undefined FUN_1456f57cc(void)

void FUN_1456f57cc(undefined8 param_1)

{
  longlong lVar1;
  uint uVar2;
  
  do {
    uVar2 = FUN_14470efbc(param_1);
    if (uVar2 == 0) {
      return;
    }
    lVar1 = *(longlong *)
             (*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar2 >> 0xe) * 8) + 8 +
             (ulonglong)(uVar2 & 0x3fff) * 0x18);
    FUN_1447d080c(uVar2);
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1456f5818 FUN_1456f5818 body=115 status=ok
// SIG undefined FUN_1456f5818(void)

void FUN_1456f5818(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      puVar2 = *(undefined8 **)(lVar1 + lVar4 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar3 != (int)lVar4);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1447ab16c(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1456f588c FUN_1456f588c body=76 status=ok
// SIG undefined FUN_1456f588c(void)

void FUN_1456f588c(undefined8 param_1)

{
  longlong lVar1;
  uint uVar2;
  
  do {
    uVar2 = FUN_14470efbc(param_1);
    if (uVar2 == 0) {
      return;
    }
    lVar1 = *(longlong *)
             (*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar2 >> 0xe) * 8) + 8 +
             (ulonglong)(uVar2 & 0x3fff) * 0x18);
    FUN_1447d080c(uVar2);
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1456f58d8 FUN_1456f58d8 body=119 status=ok
// SIG undefined FUN_1456f58d8(void)

void FUN_1456f58d8(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  iVar1 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar3) != 0) {
        FUN_14493e5fa(*(longlong *)(lVar2 + lVar3),0,0);
        if (*(undefined8 **)(lVar2 + lVar3) != (undefined8 *)0x0) {
          (**(code **)**(undefined8 **)(lVar2 + lVar3))();
        }
        *(undefined8 *)(lVar2 + lVar3) = 0;
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x0001456f5948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



// FUNCTION 1456f5950 FUN_1456f5950 body=76 status=ok
// SIG undefined FUN_1456f5950(void)

void FUN_1456f5950(undefined8 param_1)

{
  longlong lVar1;
  uint uVar2;
  
  do {
    uVar2 = FUN_14470efbc(param_1);
    if (uVar2 == 0) {
      return;
    }
    lVar1 = *(longlong *)
             (*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar2 >> 0xe) * 8) + 8 +
             (ulonglong)(uVar2 & 0x3fff) * 0x18);
    FUN_1447d080c(uVar2);
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1456f599c FUN_1456f599c body=156 status=ok
// SIG undefined FUN_1456f599c(void)

void FUN_1456f599c(longlong param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  puVar4 = *(undefined8 **)(param_1 + 0x70);
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x68) + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x60);
  if (lVar5 != 0) {
    (**(code **)(*(longlong *)(lVar5 + 0x30) + 0x10))(lVar5 + 0x30);
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x0001456f5a0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 1456f5a38 FUN_1456f5a38 body=475 status=ok
// SIG undefined FUN_1456f5a38(void)

void FUN_1456f5a38(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  BOOL BVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x10))();
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  if (*(HANDLE *)(param_1 + 0xb8) != (HANDLE)0xffffffffffffffff) {
    CloseHandle(*(HANDLE *)(param_1 + 0xb8));
    *(undefined8 *)(param_1 + 0xb8) = 0xffffffffffffffff;
  }
  do {
    if (*(longlong *)(param_1 + 0x58) == *(longlong *)(param_1 + 0x60)) break;
    uVar3 = *(ulonglong *)(param_1 + 0x58);
    *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + 1;
  } while (*(longlong *)(param_1 + 0x10) + (uVar3 % *(ulonglong *)(param_1 + 8)) * 0x18 != 0);
  *(undefined1 *)(param_1 + 0x50) = 1;
  BVar4 = SetEvent(*(HANDLE *)(param_1 + 0x18));
  if (BVar4 == 0) {
    GetLastError();
  }
  if (*(HANDLE *)(param_1 + 0x20) != (HANDLE)0xffffffffffffffff) {
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x20),0xffffffff);
    CloseHandle(*(HANDLE *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0xffffffffffffffff;
  }
  if (*(HANDLE *)(param_1 + 0x18) != (HANDLE)0xffffffffffffffff) {
    CloseHandle(*(HANDLE *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0xffffffffffffffff;
  }
  if (*(HANDLE *)(param_1 + 0xc0) != (HANDLE)0xffffffffffffffff) {
    CloseHandle(*(HANDLE *)(param_1 + 0xc0));
    *(undefined8 *)(param_1 + 0xc0) = 0xffffffffffffffff;
  }
  plVar6 = (longlong *)(param_1 + 0x68);
  plVar5 = *(longlong **)(param_1 + 0x68);
  while (plVar5 != plVar6) {
    plVar1 = plVar5 + -2;
    if ((longlong *)plVar5[-2] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar5[-2] + 0x10))();
      *plVar1 = 0;
      plVar5 = (longlong *)*plVar6;
    }
    lVar2 = *plVar5;
    *(longlong *)plVar5[1] = lVar2;
    *(longlong *)(lVar2 + 8) = plVar5[1];
    if (plVar1 != (longlong *)0x0) {
      FUN_1400020a8(plVar1);
    }
    plVar5 = (longlong *)*plVar6;
  }
  plVar6 = *(longlong **)(param_1 + 0xa0);
  while (plVar6 != (longlong *)(param_1 + 0xa0)) {
    lVar2 = *plVar6;
    *(longlong *)plVar6[1] = lVar2;
    *(longlong *)(lVar2 + 8) = plVar6[1];
    if (plVar6 != (longlong *)&DAT_00000010) {
      FUN_1400020a8();
    }
    plVar6 = *(longlong **)(param_1 + 0xa0);
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong **)(param_1 + 0xd0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x10))();
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  if (*(longlong **)(param_1 + 0xe0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x10))();
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  return;
}



// FUNCTION 1456f5c14 FUN_1456f5c14 body=63 status=ok
// SIG undefined FUN_1456f5c14(void)

void FUN_1456f5c14(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1456f5c54(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1402cdf14(param_1);
    return;
  }
  FUN_1456f5eb8(param_1);
  FUN_1456f5c54(param_1);
  return;
}



// FUNCTION 1456f5c54 FUN_1456f5c54 body=86 status=ok
// SIG undefined FUN_1456f5c54(void)

void FUN_1456f5c54(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1456f5d42(param_1);
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


