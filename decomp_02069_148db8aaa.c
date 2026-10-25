// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148db8aaa FUN_148db8aaa body=102 status=ok
// SIG undefined FUN_148db8aaa(void)

void FUN_148db8aaa(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_1447210f0();
  lVar2 = FUN_14133cf3b(uVar1);
  if (lVar2 != 0) {
    local_20 = *(undefined4 *)(param_2 + 1);
    local_28 = *param_2;
    FUN_1441a81f8(lVar2,&local_28,param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148db8b16 FUN_148db8b16 body=54 status=ok
// SIG undefined FUN_148db8b16(void)

void FUN_148db8b16(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1447210f0();
  lVar2 = FUN_1411db1ae(uVar1);
  if (lVar2 != 0) {
    FUN_143df6160(lVar2,0,param_1,0);
    return;
  }
  return;
}



// FUNCTION 148db8b50 FUN_148db8b50 body=190 status=ok
// SIG undefined FUN_148db8b50(void)

void FUN_148db8b50(undefined8 param_1,undefined8 param_2,undefined4 param_3,char param_4,
                  undefined2 param_5)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = FUN_1447210f0();
  plVar2 = (longlong *)FUN_1488ffe25(uVar1,param_2,param_5);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x68))(plVar2,param_2,param_3,0);
    if (param_4 != '\0') {
      (**(code **)(*plVar2 + 0x70))(plVar2,param_2);
    }
  }
  uVar1 = FUN_1447210f0();
  local_38 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1460028be(uVar1,param_1);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148db8c10 FUN_148db8c10 body=138 status=ok
// SIG undefined FUN_148db8c10(void)

void FUN_148db8c10(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 != 0) {
    lVar1 = FUN_1447210f0();
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
      lVar1 = FUN_148db6664();
      if (lVar1 != 0) {
        FUN_1400021e4(param_2,local_30);
        FUN_1414bac82(lVar1,local_30);
        if (local_30[0] != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148db8c9c FUN_148db8c9c body=167 status=ok
// SIG undefined FUN_148db8c9c(void)

void FUN_148db8c9c(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_2 != 0) {
    lVar1 = FUN_1447210f0();
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
      lVar1 = FUN_148db6664();
      if (lVar1 != 0) {
        local_38 = 0;
        FUN_1400021e4(param_2,local_48);
        FUN_1441eb4bc(lVar1,local_48,param_3,&local_38);
        if (local_48[0] != 0) {
          FUN_1400020a8();
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



// FUNCTION 148db8d56 FUN_148db8d56 body=32 status=ok
// SIG undefined FUN_148db8d56(void)

void FUN_148db8d56(undefined8 param_1,undefined4 param_2)

{
  FUN_1487c4cea();
  FUN_148c368ea(param_1,param_2);
  return;
}



// FUNCTION 148db8d76 FUN_148db8d76 body=87 status=ok
// SIG undefined FUN_148db8d76(void)

void FUN_148db8d76(undefined8 param_1,byte param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = FUN_1447210f0();
  lVar2 = FUN_14583d396(uVar1);
  if (lVar2 != 0) {
    lVar3 = FUN_1402735c8();
    lVar4 = (ulonglong)(param_2 ^ 1) * 0x10;
    FUN_1458d9546(lVar2,lVar4 + lVar3 + 0xa70,lVar4 + lVar3 + 0xa90);
    return;
  }
  return;
}



// FUNCTION 148db8dce FUN_148db8dce body=62 status=ok
// SIG undefined FUN_148db8dce(void)

void FUN_148db8dce(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  if ((longlong)*(int *)(param_1 + 0x31d8) != 0) {
    lVar8 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x31d0) + 8 + lVar8) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x31d0) + lVar8) != 0)) {
        iVar1 = *(int *)(&DAT_000031e4 + param_1);
        *(int *)(&DAT_000031e4 + param_1) = iVar1 + 1;
        uVar6 = (ulonglong)*(int *)(param_1 + 0x31d8);
        if ((longlong)uVar6 < 1) {
          *(int *)(&DAT_000031e4 + param_1) = iVar1;
          return;
        }
        bVar7 = false;
        do {
          lVar8 = uVar6 * 0x10 + -8;
          uVar9 = uVar6;
          while (((lVar2 = *(longlong *)(param_1 + 0x31d0), *(int *)(lVar2 + lVar8) != 0 &&
                  (plVar3 = *(longlong **)(lVar2 + -8 + lVar8), plVar3 != (longlong *)0x0)) &&
                 (cVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,param_2,param_3), cVar5 != '\0'))) {
            lVar8 = lVar8 + -0x10;
            bVar4 = uVar9 < 2;
            uVar9 = uVar9 - 1;
            if (bVar4) {
              *(int *)(&DAT_000031e4 + param_1) = *(int *)(&DAT_000031e4 + param_1) + -1;
              if (!bVar7) {
                return;
              }
              goto LAB_145b2546d;
            }
          }
          uVar6 = uVar9 - 1;
          bVar7 = true;
        } while (1 < uVar9);
        *(int *)(&DAT_000031e4 + param_1) = *(int *)(&DAT_000031e4 + param_1) + -1;
LAB_145b2546d:
        FUN_14474d06a((longlong *)(param_1 + 0x31d0),0);
        return;
      }
      lVar8 = lVar8 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x31d8) * 0x10 != lVar8);
  }
  return;
}



// FUNCTION 148db8e0c FUN_148db8e0c body=56 status=ok
// SIG undefined FUN_148db8e0c(void)

void FUN_148db8e0c(longlong param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\0') {
    FUN_148c35b7c(param_1 + -0xe68);
  }
  else {
    FUN_148c377a0();
  }
  FUN_148c35ec6(param_1 + -0xe68,param_2);
  return;
}



// FUNCTION 148db8e44 FUN_148db8e44 body=165 status=ok
// SIG undefined FUN_148db8e44(void)

void FUN_148db8e44(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined4 local_a0 [2];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined8 uStack_64;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  undefined4 local_21;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0[0] = 0;
  uStack_68 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  local_6c = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0xffffffff;
  local_24 = 0;
  local_22 = 1;
  local_21 = 0;
  uStack_64 = 0x1000000000000;
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0xe68) + 0x10))(param_1 + 0xe68);
  FUN_148d12298(uVar1,local_a8,param_2,local_a0);
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148db8eea FUN_148db8eea body=42 status=ok
// SIG undefined FUN_148db8eea(void)

void FUN_148db8eea(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0xe68) + 0x10))(param_1 + 0xe68);
  FUN_148d17e58(lVar1 + 8,param_2);
  return;
}



// FUNCTION 148db8f14 FUN_148db8f14 body=168 status=ok
// SIG undefined FUN_148db8f14(void)

void FUN_148db8f14(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [8];
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_1a;
  undefined4 local_19;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0xe68) + 0x10))();
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0xffffffff;
  local_1c = 0;
  local_1a = 1;
  local_19 = 0;
  FUN_148d12298(uVar1,local_a0,param_2);
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148db8fbe FUN_148db8fbe body=190 status=ok
// SIG undefined FUN_148db8fbe(void)

void FUN_148db8fbe(longlong param_1,undefined4 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  char *pcVar3;
  
  pcVar3 = *(char **)(param_1 + 0x2228);
  if (pcVar3 == (char *)0x0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *puVar2 = &LAB_146631bcd;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    pcVar3 = (char *)(puVar2 + 2);
    *(char **)(param_1 + 0x2228) = pcVar3;
    if (pcVar3 == (char *)0x0) {
      return;
    }
  }
  uVar1 = FUN_148cf20d2(pcVar3,param_2);
  if (*pcVar3 == (char)uVar1) {
    return;
  }
  FUN_148cf20e6(pcVar3,uVar1);
  if (param_3 != 0 && (char)uVar1 == '\x01') {
    FUN_14485c47a(pcVar3 + 8,param_3);
  }
  FUN_140898514(param_1 + 0x2238,**(undefined1 **)(param_1 + 0x2228));
  return;
}



// FUNCTION 148db907c FUN_148db907c body=141 status=ok
// SIG undefined FUN_148db907c(void)

undefined8 * FUN_148db907c(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x23d0);
  if (lVar1 == 0) {
    local_20 = *(undefined8 *)(param_1 + 0x23c0);
    lVar1 = FUN_14050aea0();
    *(longlong *)(param_1 + 0x23d0) = lVar1;
    if (lVar1 == 0) {
      *param_2 = 0;
      goto LAB_148db90bd;
    }
  }
  puVar2 = &DAT_14c9485f0;
  if (*(undefined4 **)(lVar1 + 8) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(lVar1 + 8);
  }
  FUN_1447325ac(puVar2,param_2,1);
LAB_148db90bd:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148db910c FUN_148db910c body=97 status=ok
// SIG undefined FUN_148db910c(void)

void FUN_148db910c(undefined8 param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_14497e828();
  if (lVar1 != 0) {
    lVar1 = FUN_140b64196(lVar1);
    if (lVar1 != 0) {
      lVar2 = FUN_144a7ba4c(param_1);
      if (lVar2 != 0) {
        if (param_2 != '\0') {
          thunk_FUN_143f460d4();
          return;
        }
        FUN_148aac0e4(lVar1,*(undefined4 *)(lVar2 + 0xe0));
        return;
      }
    }
  }
  return;
}



// FUNCTION 148db916e FUN_148db916e body=447 status=ok
// SIG undefined FUN_148db916e(void)

void FUN_148db916e(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined2 local_38;
  undefined4 local_30;
  char local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = (**(code **)(*(longlong *)(param_1 + 0xda8) + 0x50))(param_1 + 0xda8);
  if (*(longlong *)(lVar5 + 8) != 0) {
    bVar3 = FUN_144729dda(lVar5);
    plVar1 = *(longlong **)(lVar5 + 8);
    if ((plVar1 != (longlong *)0x0 & bVar3) == 1) {
      FUN_1489af018(local_48);
      local_28 = param_1;
      FUN_148db932e(local_48);
      local_38 = 0;
      (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
      if (local_28._4_1_ == '\x01') {
        lVar5 = (**(code **)(*plVar1 + 8))(plVar1);
        if (lVar5 != 0) {
          lVar6 = FUN_144a7ddba();
          if ((((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) &&
              (*(longlong *)(lVar5 + 0x3f0) != 0)) &&
             ((*(byte *)(*(longlong *)(lVar5 + 0x3f0) + 0x368) & 0x10) != 0)) {
            local_2c = local_28._4_1_;
            if (local_28._4_1_ == '\x01') {
              local_30 = (undefined4)local_28;
            }
            cVar4 = FUN_140b47776(param_1,&local_30,0x40);
            if (cVar4 != '\0') {
              cVar4 = FUN_1412e04a6(param_1,lVar5 + 0x3f0);
              if (cVar4 != '\0') {
                if (*(longlong *)(param_1 + 0x398) != 0) {
                  lVar6 = FUN_144a7b4ca();
                  lVar5 = *(longlong *)(param_1 + 0x398);
                  if ((((lVar5 != 0) && (lVar6 != 0)) &&
                      ((lVar2 = *(longlong *)(lVar5 + 0x10), lVar2 != 0 &&
                       ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar2 + 0x38) &&
                        (*(longlong *)
                          (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
                         lVar6 + 0x30)))))) && (*(longlong *)(lVar5 + 0xf78) != 0)) {
                    FUN_140b47734(*(longlong *)(lVar5 + 0xf78),&local_28);
                  }
                }
                FUN_1418ce258(param_1,&local_28,0,1);
                goto LAB_148db91bb;
              }
            }
            (**(code **)(*plVar1 + 0x88))(plVar1,local_48);
          }
        }
      }
    }
  }
LAB_148db91bb:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148db932e FUN_148db932e body=114 status=ok
// SIG undefined FUN_148db932e(void)

longlong * FUN_148db932e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_2;
  lVar3 = lVar1;
  if (lVar1 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar1);
    lVar3 = *param_2;
  }
  if ((lVar1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(lVar1);
  }
  lVar2 = lVar3 + 0xda8;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  *param_1 = lVar1;
  param_1[1] = lVar2;
  return param_1;
}



// FUNCTION 148db93ac FUN_148db93ac body=58 status=ok
// SIG undefined FUN_148db93ac(void)

longlong FUN_148db93ac(longlong param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x2180) == '\x01') &&
     (cVar1 = FUN_1457af714(param_1 + 0xf60), cVar1 == '\0')) {
    return param_1 + 0x1870;
  }
  return param_1 + 0xf60;
}



// FUNCTION 148db93e6 FUN_148db93e6 body=136 status=ok
// SIG undefined FUN_148db93e6(void)

void FUN_148db93e6(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1402f20d0(param_1,&local_30);
  if (local_30 != 0) {
    FUN_1489aef0c(local_30,param_1,param_2);
  }
  if (local_28 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_28 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148db9480 FUN_148db9480 body=21 status=ok
// SIG undefined FUN_148db9480(void)

void FUN_148db9480(longlong param_1,uint param_2,char param_3)

{
  if (param_3 != '\0') {
    *(uint *)(param_1 + 0x24c4) = *(uint *)(param_1 + 0x24c4) | param_2;
    return;
  }
  *(uint *)(param_1 + 0x24c4) = *(uint *)(param_1 + 0x24c4) & ~param_2;
  return;
}



// FUNCTION 148db9496 FUN_148db9496 body=86 status=ok
// SIG undefined FUN_148db9496(void)

int FUN_148db9496(undefined8 param_1)

{
  byte bVar1;
  undefined1 auStack_38 [36];
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  bVar1 = FUN_14016169c(param_1,&local_14);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return (uint)(local_14 == 1 & bVar1) * 0x800 + 0x800;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148db94ee FUN_148db94ee body=936 status=ok
// SIG undefined FUN_148db94ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148db94ee(longlong param_1)

{
  longlong *plVar1;
  void *pvVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_208 [32];
  undefined1 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1c8;
  undefined4 local_1c0 [2];
  longlong local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 local_188 [32];
  undefined8 local_168;
  undefined8 uStack_160;
  uint local_158 [10];
  undefined4 local_130;
  undefined8 *local_128;
  int local_120;
  undefined4 local_11c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if ((*(char *)(param_1 + 0x178) != '\x03') || (*(longlong *)(param_1 + 0xf48) == 0))
  goto LAB_148db9612;
  uVar5 = FUN_140232fad();
  if ((-1 < (int)uVar5) &&
     (((((int)uVar5 < *(int *)(*(longlong *)(param_1 + 0xf48) + 0x78f0) &&
        (lVar9 = (ulonglong)uVar5 * 0x48 + *(longlong *)(*(longlong *)(param_1 + 0xf48) + 0x78e8),
        lVar9 != 0)) &&
       (*(longlong **)(lVar9 + 0x28) != (longlong *)0x0 && *(longlong *)(lVar9 + 0x20) != 0)) &&
      (lVar9 = (**(code **)(**(longlong **)(lVar9 + 0x28) + 8))(), lVar9 != 0)))) {
    lVar6 = FUN_140232dfe();
    if (((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
         == lVar6 + 0x30)) && (*(char *)(lVar9 + 0xb2c) != '\x01')) goto LAB_148db9612;
  }
  lVar6 = FUN_14011c349();
  lVar9 = *(longlong *)(lVar6 + 0x1d8);
  if (lVar9 == 0) {
    uVar7 = FUN_14042c486();
    lVar9 = FUN_14477b664(uVar7);
    *(longlong *)(lVar6 + 0x1d8) = lVar9;
  }
  lVar8 = *(longlong *)(lVar6 + 0x1e0);
  if (lVar8 == 0) {
    if ((lVar9 == 0) || (*(longlong *)(lVar6 + 0x1d0) == 0)) goto LAB_148db9612;
    plVar1 = *(longlong **)(lVar9 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar4 == '\0')) {
      *(undefined8 *)(lVar6 + 0x1e0) = 0;
      goto LAB_148db9612;
    }
    uVar7 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar8 = FUN_144aff482(uVar7,(longlong *)(lVar6 + 0x1d0));
    *(longlong *)(lVar6 + 0x1e0) = lVar8;
    if (lVar8 == 0) goto LAB_148db9612;
  }
  local_1c0[0] = 1;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  FUN_140265ee0(local_188);
  local_168 = 0;
  uStack_160 = 0;
  local_128 = (undefined8 *)0x0;
  local_120 = *(int *)(lVar8 + 0x410);
  lVar9 = (longlong)local_120;
  pvVar2 = *(void **)(lVar8 + 0x408);
  local_1b8 = lVar8;
  if (lVar9 != 0) {
    FUN_140c7c212(&local_128,local_120,0);
    memcpy(local_128,pvVar2,lVar9 << 3);
    iVar3 = local_120;
    if (local_128 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    if (0 < iVar3) {
      local_128 = (undefined8 *)0x0;
      local_120 = *(int *)(lVar8 + 0x410);
      lVar9 = (longlong)local_120;
      pvVar2 = *(void **)(lVar8 + 0x408);
      if (lVar9 == 0) {
        local_11c = 0;
        uStack_1b0 = _DAT_00000000;
      }
      else {
        FUN_140c7c212(&local_128,local_120,0);
        memcpy(local_128,pvVar2,lVar9 << 3);
        uStack_1b0 = *local_128;
        if (local_128 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  local_1c8 = 0;
  local_1c0[0] = FUN_140fbfb03(param_1);
  local_158[0] = local_158[0] & 0xffffff00;
  local_130 = 0;
  FUN_1456bb102(local_158,param_1);
  FUN_140368c94(local_1c0,&local_128,local_158,0);
  FUN_144a5ac3a(local_158);
  local_158[0] = 0xffffffff;
  local_1d8 = 0;
  local_1e0 = 0;
  local_1e8 = 0;
  (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0xf48) + 0x3be8) + 0xa8))
            (*(longlong *)(param_1 + 0xf48) + 0x3be8,local_158,&local_128,(ulonglong)uVar5);
  lVar9 = FUN_1407afa82(*(undefined8 *)(param_1 + 0xf48));
  if (lVar9 != 0) {
    *(undefined1 *)(lVar9 + 0xb2c) = 1;
  }
  FUN_140368b56(&local_128);
  FUN_140372a38(local_1c0);
LAB_148db9612:
  if ((local_50 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148db9898 FUN_148db9898 body=65 status=ok
// SIG undefined FUN_148db9898(void)

undefined8 FUN_148db9898(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if ((*(longlong *)(param_2 + 8) == 0) ||
     ((*(byte *)(*(longlong *)(param_2 + 8) + 0x368) & 4) != 0)) {
    uVar1 = 0;
  }
  else {
    (**(code **)(*(longlong *)(param_1 + 0x20) + 0x30))(param_1 + 0x20,param_2 + 8,0,0xffffffff,0);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 148db98da FUN_148db98da body=74 status=ok
// SIG undefined FUN_148db98da(void)

void FUN_148db98da(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  (**(code **)(*(longlong *)(param_1 + 0xe18) + 0x20))(param_1 + 0xe18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148db994c FUN_148db994c body=1570 status=ok
// SIG undefined FUN_148db994c(void)

void FUN_148db994c(longlong param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  int iVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  bool bVar30;
  float fVar31;
  undefined1 auStack_458 [32];
  longlong *local_438;
  longlong *local_430;
  longlong *local_428;
  undefined4 local_420;
  undefined4 local_418;
  undefined4 local_410;
  longlong local_400;
  longlong local_3f8;
  longlong lStack_3f0;
  undefined8 local_3e0;
  longlong local_3d8;
  longlong lStack_3d0;
  longlong local_3c8;
  longlong lStack_3c0;
  longlong local_3b8;
  undefined8 uStack_3b0;
  code *local_3a8;
  undefined8 local_398;
  undefined **local_388;
  longlong *local_380;
  longlong local_368;
  longlong local_360;
  undefined4 local_358 [190];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_458;
  lVar19 = *(longlong *)(param_1 + 0xc38);
  lVar6 = FUN_14011c349();
  local_368 = *(longlong *)(lVar6 + 0x48);
  lVar6 = FUN_140254f32(param_1,&local_368);
  local_400 = lVar19;
  if (lVar19 != 0 && lVar6 != 0) {
    local_380 = &local_3b8;
    local_3b8 = 0;
    uStack_3b0 = 0;
    local_398 = 0;
    local_388 = &PTR_LAB_14b995260;
    local_3a8 = FUN_1441f6afe;
    FUN_14573bd7e(lVar6);
    lVar19 = local_3b8;
    iVar20 = (int)uStack_3b0;
    lVar6 = (longlong)(int)uStack_3b0;
    if (1 < lVar6) {
      memset(local_358,0,0x2f0);
      local_368 = lVar19;
      local_360 = lVar19 + lVar6 * 8 + -8;
      fVar31 = logf((float)iVar20);
      local_358[0] = (int)(longlong)(fVar31 + fVar31);
      plVar7 = &local_368;
      do {
        puVar9 = (undefined8 *)*plVar7;
        puVar16 = (undefined8 *)plVar7[1];
        iVar20 = (int)plVar7[2];
        iVar11 = (int)((ulonglong)((longlong)puVar16 - (longlong)puVar9) >> 3);
        uVar24 = (ulonglong)(iVar11 + 1);
        puVar17 = puVar16;
        puVar29 = puVar9;
        if (iVar20 != 0) {
LAB_148db9a7d:
          if (8 < (int)(uint)uVar24) {
            uVar23 = (uint)uVar24 >> 1;
            uVar4 = puVar9[uVar23];
            puVar9[uVar23] = *puVar9;
            *puVar9 = uVar4;
            puVar25 = puVar17 + 1;
            puVar8 = puVar9;
            do {
              puVar5 = puVar8 + 1;
              puVar18 = puVar8 + 1;
              do {
                puVar27 = puVar18;
                puVar8 = puVar5;
                if ((puVar17 < puVar8) ||
                   (*(char *)((longlong)puVar9 + 4) == *(char *)((longlong)puVar8 + 4))) break;
                puVar5 = puVar8 + 1;
                puVar18 = puVar27 + 1;
              } while (*(char *)((longlong)puVar9 + 4) != '\0');
              puVar5 = puVar25 + -2;
              do {
                puVar18 = puVar25;
                puVar28 = puVar5;
                puVar25 = puVar18 + -1;
                if ((puVar25 <= puVar9) ||
                   (*(char *)((longlong)puVar18 + -4) == *(char *)((longlong)puVar9 + 4))) break;
                puVar5 = puVar28 + -1;
              } while (*(char *)((longlong)puVar18 + -4) != '\0');
              if (puVar25 < puVar8) goto LAB_148db9b0b;
              uVar4 = *puVar8;
              *puVar8 = *puVar25;
              *puVar25 = uVar4;
            } while( true );
          }
          for (; puVar16 = puVar9, puVar29 = puVar9, puVar9 < puVar17; puVar17 = puVar17 + -1) {
            while (puVar25 = puVar29 + 1, puVar25 <= puVar17) {
              pbVar1 = (byte *)((longlong)puVar16 + 4);
              if ((*pbVar1 & 1) == 0) {
                puVar16 = puVar25;
              }
              pbVar2 = (byte *)((longlong)puVar29 + 0xc);
              puVar29 = puVar25;
              if (*pbVar1 == *pbVar2) {
                puVar16 = puVar25;
              }
            }
            uVar4 = *puVar16;
            *puVar16 = *puVar17;
            *puVar17 = uVar4;
          }
          goto LAB_148db9d4e;
        }
LAB_148db9b9f:
        iVar20 = (int)uVar24;
        if (iVar20 != 0) {
          iVar11 = (iVar11 - (iVar11 + -1 >> 0x1f)) + -1 >> 1;
          iVar22 = iVar11;
joined_r0x000148db9bc2:
          do {
            iVar26 = iVar11 * 2 + 1;
            if (iVar26 < iVar20) {
              iVar21 = iVar11 * 2 + 2;
              iVar15 = iVar26;
              if (iVar21 < iVar20) {
                bVar3 = *(byte *)((longlong)puVar9 + (longlong)iVar21 * 8 + 4);
                if ((bVar3 & 1) == 0) {
                  iVar21 = iVar26;
                }
                iVar15 = iVar21;
                if (bVar3 == *(byte *)((longlong)puVar9 + (longlong)iVar26 * 8 + 4)) {
                  iVar15 = iVar26;
                }
              }
              lVar6 = (longlong)iVar11;
              lVar19 = (longlong)iVar15;
              bVar3 = *(byte *)((longlong)puVar9 + lVar6 * 8 + 4);
              if ((bVar3 != *(byte *)((longlong)puVar9 + lVar19 * 8 + 4) & bVar3) == 0) {
                uVar4 = puVar9[lVar6];
                puVar9[lVar6] = puVar9[lVar19];
                puVar9[lVar19] = uVar4;
                iVar11 = iVar15;
                goto joined_r0x000148db9bc2;
              }
            }
            bVar30 = iVar22 != 0;
            iVar11 = iVar22 + -1;
            iVar22 = iVar11;
          } while (bVar30);
          if (1 < iVar20) {
            uVar4 = *puVar9;
            *puVar9 = puVar9[uVar24 - 1];
            puVar9[uVar24 - 1] = uVar4;
            if (iVar20 != 2) {
              do {
                uVar12 = uVar24 - 1;
                iVar20 = 0;
                iVar22 = 1;
                iVar11 = 0;
                do {
                  iVar26 = iVar20 + 2;
                  if ((longlong)iVar26 < (longlong)uVar12) {
                    bVar3 = *(byte *)((longlong)puVar9 + (longlong)iVar26 * 8 + 4);
                    if ((bVar3 & 1) == 0) {
                      iVar26 = iVar22;
                    }
                    if (bVar3 == *(byte *)((longlong)puVar9 + (longlong)iVar22 * 8 + 4))
                    goto LAB_148db9c98;
                  }
                  else {
LAB_148db9c98:
                    iVar26 = iVar22;
                  }
                  lVar6 = (longlong)iVar11;
                  lVar19 = (longlong)iVar26;
                  bVar3 = *(byte *)((longlong)puVar9 + lVar6 * 8 + 4);
                  if ((bVar3 != *(byte *)((longlong)puVar9 + lVar19 * 8 + 4) & bVar3) != 0) break;
                  uVar4 = puVar9[lVar6];
                  puVar9[lVar6] = puVar9[lVar19];
                  puVar9[lVar19] = uVar4;
                  iVar20 = iVar26 * 2;
                  iVar22 = iVar26 * 2 + 1;
                  iVar11 = iVar26;
                } while ((longlong)iVar22 < (longlong)uVar12);
                uVar4 = *puVar9;
                *puVar9 = puVar9[uVar24 - 2];
                puVar9[uVar24 - 2] = uVar4;
                uVar24 = uVar12;
              } while (2 < uVar12);
            }
          }
        }
LAB_148db9d4e:
        plVar7 = plVar7 + -3;
      } while (&local_368 <= plVar7);
    }
    lVar19 = FUN_14011c349();
    if ((longlong)(int)uStack_3b0 != 0) {
      lVar6 = param_1 + 0xe18;
      lVar14 = (longlong)(int)uStack_3b0 << 3;
      lVar13 = local_3b8;
      do {
        lVar10 = *(longlong *)(param_1 + 0xf48);
        if ((lVar10 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar10);
        }
        local_3c8 = 0;
        lStack_3c0 = 0;
        if ((~DAT_14c950c29 & 1) == 0 && lVar10 != 0) {
          FUN_1456cec3c(lVar10);
LAB_148db9ddc:
          lStack_3c0 = lVar10 + 0x3be8;
        }
        else {
          if (lVar10 != 0) goto LAB_148db9ddc;
          lStack_3c0 = 0;
        }
        local_368 = *(longlong *)(lVar19 + 0x60);
        local_3d8 = 0;
        lStack_3d0 = 0;
        local_3c8 = lVar10;
        if ((~DAT_14c950c29 & 1) == 0 && param_1 != 0) {
          FUN_1456cec3c(param_1);
LAB_148db9e21:
          local_3e0 = *(undefined8 *)(lVar19 + 0x48);
          local_3f8 = 0;
          lStack_3f0 = 0;
          lVar10 = lVar6;
          local_3d8 = param_1;
          lStack_3d0 = lVar6;
          if ((param_1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
            FUN_1456cec3c(param_1);
          }
        }
        else {
          if (param_1 != 0) goto LAB_148db9e21;
          lStack_3d0 = 0;
          local_3e0 = *(undefined8 *)(lVar19 + 0x48);
          lVar10 = 0;
          local_3d8 = param_1;
        }
        local_428 = &local_3c8;
        local_430 = &local_368;
        local_438 = &local_3d8;
        local_410 = 0xffffffff;
        local_418 = 8;
        local_420 = 0;
        local_3f8 = param_1;
        lStack_3f0 = lVar10;
        FUN_143db6d84(local_400,lVar13,&local_3f8,&local_3e0);
        lVar13 = lVar13 + 8;
        lVar14 = lVar14 + -8;
      } while (lVar14 != 0);
    }
    if (local_3b8 != 0) {
      FUN_1400020a8(local_3b8);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_458) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_148db9b0b:
  uVar4 = *puVar9;
  *puVar9 = *puVar25;
  *puVar25 = uVar4;
  iVar20 = iVar20 + -1;
  puVar18 = puVar18 + -2;
  if ((longlong)puVar28 - (longlong)puVar29 < (longlong)puVar16 - (longlong)puVar27) {
    if (puVar8 < puVar17) {
      *plVar7 = (longlong)puVar8;
      plVar7[1] = (longlong)puVar17;
      *(int *)(plVar7 + 2) = iVar20;
      plVar7 = plVar7 + 3;
    }
    puVar27 = puVar9;
    puVar16 = puVar28;
    if (puVar25 <= puVar9 + 1) goto LAB_148db9d4e;
  }
  else {
    if (puVar9 + 1 < puVar25) {
      *plVar7 = (longlong)puVar9;
      plVar7[1] = (longlong)puVar18;
      *(int *)(plVar7 + 2) = iVar20;
      plVar7 = plVar7 + 3;
    }
    puVar9 = puVar8;
    puVar18 = puVar17;
    puVar16 = puVar17;
    if (puVar17 <= puVar8) goto LAB_148db9d4e;
  }
  iVar11 = (int)((ulonglong)((longlong)puVar16 - (longlong)puVar27) >> 3);
  uVar24 = (ulonglong)(iVar11 + 1);
  puVar17 = puVar18;
  puVar29 = puVar27;
  if (iVar20 == 0) goto LAB_148db9b9f;
  goto LAB_148db9a7d;
}



// FUNCTION 148db9f70 FUN_148db9f70 body=8 status=ok
// SIG undefined FUN_148db9f70(void)

undefined8 FUN_148db9f70(longlong param_1)

{
  return *(undefined8 *)(param_1 + -0x1e0);
}



// FUNCTION 148db9f78 FUN_148db9f78 body=76 status=ok
// SIG undefined FUN_148db9f78(void)

longlong * FUN_148db9f78(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x130);
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    *param_2 = lVar1;
    if (lVar1 == 0) {
      lVar1 = 0;
      goto LAB_148db9fa5;
    }
  }
  else {
    FUN_1456cec3c(lVar1);
    *param_2 = lVar1;
  }
  lVar1 = lVar1 + 0x3be8;
LAB_148db9fa5:
  param_2[1] = lVar1;
  return param_2;
}



// FUNCTION 148db9fc4 FUN_148db9fc4 body=388 status=ok
// SIG undefined FUN_148db9fc4(void)

longlong FUN_148db9fc4(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = local_60;
  if (*(longlong *)(param_1 + -0xa80) != 0) {
    lVar6 = FUN_144a7b4ca();
    lVar2 = *(longlong *)(param_1 + -0xa80);
    uVar4 = local_60;
    if (lVar2 != 0) {
      lVar7 = 0;
      if ((lVar6 == 0) || (lVar3 = *(longlong *)(lVar2 + 0x10), lVar3 == 0)) goto LAB_148dba02d;
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
         (iVar8 = 0,
         *(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
         lVar6 + 0x30)) {
        plVar1 = (longlong *)(lVar2 + 0xc90);
        lVar6 = lVar2 + 0xca0;
        local_50 = 0x100000000;
        local_40 = 0xffffffff;
        local_38 = 0;
        local_48 = lVar6;
        if (*(int *)(lVar2 + 0xcb8) != 0) {
          FUN_1449c0562(&local_50);
          iVar8 = *(int *)(lVar2 + 0xcb8);
        }
        local_70 = local_50;
        local_68 = local_48;
        local_60 = local_40;
        uVar4 = local_60;
        local_58 = local_38;
        local_54 = local_34;
        local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
        local_78 = plVar1;
        if ((local_60._4_4_ != iVar8) || (local_48 != lVar6)) {
          iVar5 = local_60._4_4_;
          local_60 = uVar4;
          do {
            lVar7 = *(longlong *)(*local_78 + 8 + (longlong)iVar5 * 0x18);
            if ((lVar7 != 0) && (*(int *)(lVar7 + 0xd0) == param_2)) goto LAB_148dba02d;
            local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
            FUN_1449c0562(&local_70);
            iVar5 = local_60._4_4_;
            uVar4 = local_60;
          } while (local_78 != plVar1 || (local_68 != lVar6 || local_60._4_4_ != iVar8));
        }
      }
    }
  }
  local_60 = uVar4;
  lVar7 = 0;
LAB_148dba02d:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar7;
}



// FUNCTION 148dba15a FUN_148dba15a body=563 status=ok
// SIG undefined FUN_148dba15a(void)

void FUN_148dba15a(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  undefined8 local_e0;
  undefined1 *local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  char local_b9;
  undefined8 local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98 [2];
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_b9 = '\0';
  if (*(longlong *)(param_1 + -0xa80) != 0) {
    lVar5 = FUN_144a7b4ca();
    lVar1 = *(longlong *)(param_1 + -0xa80);
    if ((((lVar1 != 0) && (lVar5 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
         lVar5 + 0x30)))) {
      local_78 = 0;
      local_70 = 0;
      local_98[0] = 0;
      local_98[1] = 0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      FUN_141149c26(local_98,lVar1 + 0xc90);
      local_b0 = local_88;
      local_b8 = 0x100000000;
      local_a8 = 0xffffffff;
      local_a0 = 0;
      iVar8 = 0;
      if (local_70 != 0) {
        FUN_1449c0562(&local_b8);
        iVar8 = local_70;
      }
      local_d0 = local_a8;
      uVar6 = local_d0;
      local_c8 = local_a0;
      local_c4 = local_9c;
      local_e0 = local_b8;
      local_d8 = local_b0;
      local_d0._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
      local_e8 = local_98;
      if ((local_d0._4_4_ != iVar8) || (local_b0 != local_88)) {
        iVar4 = local_d0._4_4_;
        local_d0 = uVar6;
        do {
          lVar1 = *local_e8 + (longlong)iVar4 * 0x18;
          local_b8 = *(undefined8 *)(lVar1 + 8);
          pcVar3 = (code *)*param_2;
          plVar7 = (longlong *)param_2[2];
          if ((longlong *)param_2[2] == (longlong *)0x0) {
            plVar7 = param_2 + 4;
          }
          uVar6 = (**(code **)(*plVar7 + 8))();
          (*pcVar3)(uVar6,&local_b8,lVar1,&local_b9);
          uVar6 = local_d0;
          if (local_b9 != '\0') break;
          local_d0 = CONCAT44(local_d0._4_4_,(uint)local_d0 & ~local_e0._4_4_);
          FUN_1449c0562(&local_e0);
          iVar4 = local_d0._4_4_;
          uVar6 = local_d0;
        } while (local_e8 != local_98 || (local_d8 != local_88 || local_d0._4_4_ != iVar8));
      }
      local_d0 = uVar6;
      local_50 = 0;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_141149b74(local_98);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148dba38e FUN_148dba38e body=82 status=ok
// SIG undefined FUN_148dba38e(void)

ulonglong FUN_148dba38e(longlong param_1,int *param_2)

{
  longlong lVar1;
  int *piVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xf48);
  if (lVar1 == 0) {
    return 0xffffffff;
  }
  if ((*param_2 != -1) && (0 < (longlong)*(int *)(lVar1 + 0x78f0))) {
    piVar2 = (int *)(*(longlong *)(lVar1 + 0x78e8) + 0xc);
    uVar3 = 0;
    do {
      if (*piVar2 == *param_2) {
        return uVar3 & 0xffffffff;
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 0x12;
    } while ((longlong)*(int *)(lVar1 + 0x78f0) != uVar3);
  }
  return 0xffffffff;
}



// FUNCTION 148dba3a4 FUN_148dba3a4 body=187 status=ok
// SIG undefined FUN_148dba3a4(void)

void FUN_148dba3a4(longlong *param_1,uint param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  
  if ((char)param_1[0x2f] == '\x03') {
    uVar5 = (param_2 & 0xff) << 6;
    iVar6 = *(int *)((longlong)param_1 + (ulonglong)uVar5 + 0x2608);
    if (param_3 < iVar6) {
      iVar6 = param_3;
    }
    iVar3 = 0;
    if (0 < iVar6) {
      iVar3 = iVar6;
    }
    *(int *)((longlong)param_1 + (ulonglong)uVar5 + 0x2600) = iVar3;
    FUN_1401861f4((longlong)param_1 + (ulonglong)uVar5 + 0x25d0);
    if (param_1[0x73] != 0) {
      lVar7 = FUN_144a7b4ca();
      lVar1 = param_1[0x73];
      if ((((lVar1 != 0) && (lVar7 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
         ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar2 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
           lVar7 + 0x30)))) {
        FUN_140a43188(lVar1,param_2);
      }
    }
    cVar4 = (**(code **)(*param_1 + 0x6c8))(param_1);
    if (cVar4 == '\0') {
      *(undefined2 *)(param_1 + (ulonglong)(param_2 & 0xff) + 0x4ea) =
           *(undefined2 *)((longlong)param_1 + (ulonglong)uVar5 + 0x2600);
    }
  }
  return;
}



// FUNCTION 148dba460 FUN_148dba460 body=85 status=ok
// SIG undefined FUN_148dba460(void)

void FUN_148dba460(longlong *param_1,byte param_2,undefined4 param_3)

{
  char cVar1;
  
  if ((char)param_1[0x2f] == '\x03') {
    FUN_148d61caa(param_1 + (ulonglong)param_2 * 8 + 0x4ba,param_3);
    cVar1 = (**(code **)(*param_1 + 0x6c8))(param_1);
    if (cVar1 == '\0') {
      *(short *)((longlong)param_1 + (ulonglong)param_2 * 8 + 0x2752) =
           (short)param_1[(ulonglong)param_2 * 8 + 0x4c1];
    }
  }
  return;
}



// FUNCTION 148dba4b6 FUN_148dba4b6 body=178 status=ok
// SIG undefined FUN_148dba4b6(void)

undefined1 *
FUN_148dba4b6(longlong *param_1,undefined1 *param_2,byte param_3,undefined8 param_4,
             undefined1 param_5,undefined4 param_6,undefined8 param_7)

{
  ulonglong uVar1;
  char cVar2;
  undefined8 in_RAX;
  
  *param_2 = 0;
  *(undefined4 *)(param_2 + 4) = 0xffffffff;
  if ((char)param_1[0x2f] == '\x03') {
    uVar1 = (ulonglong)param_3;
    FUN_1470b0d80((longlong)param_1 + uVar1 * 0x40 + 0x2604,param_2,param_4,
                  CONCAT71((int7)((ulonglong)in_RAX >> 8),param_5) & 0xffffffff,param_6,param_7);
    FUN_1401861f4(param_1 + uVar1 * 8 + 0x4bd,(int)param_1[uVar1 * 8 + 0x4c1]);
    cVar2 = (**(code **)(*param_1 + 0x6c8))(param_1);
    if (cVar2 == '\0') {
      *(short *)((longlong)param_1 + (ulonglong)param_3 * 8 + 0x2752) =
           (short)param_1[uVar1 * 8 + 0x4c1];
    }
  }
  return param_2;
}



// FUNCTION 148dba568 FUN_148dba568 body=126 status=ok
// SIG undefined FUN_148dba568(void)

void FUN_148dba568(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x2500) != 0) {
    local_20 = 0;
    local_18 = 0x7202;
    local_10 = 0;
    local_30 = 0x7201;
    local_28 = 0;
    local_40 = 0;
    local_48 = 0;
    local_38 = param_2;
    FUN_14129a79a(*(longlong *)(param_1 + 0x2500),&local_38,&local_20,0xbf800000);
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dba5e8 FUN_148dba5e8 body=641 status=ok
// SIG undefined FUN_148dba5e8(void)

void FUN_148dba5e8(longlong param_1,longlong param_2,uint param_3,undefined8 param_4,char param_5)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_178 [32];
  uint local_158;
  longlong local_148;
  ulonglong local_140;
  longlong *local_138;
  undefined1 local_12c [4];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined2 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (param_2 != 0) {
    lVar4 = FUN_148f08730(param_2,param_1);
    if (((lVar4 != 0) && (-1 < (int)param_3)) && ((int)param_3 < *(int *)(lVar4 + 0x18))) {
      local_138 = (longlong *)(lVar4 + 0x10);
      iVar3 = 0;
      local_c8 = 0;
      local_c0 = 0x8000000000;
      uStack_b8 = 0xffffffff;
      local_128 = 0;
      uStack_120 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      local_70 = 0xf;
      local_68 = 1;
      local_64 = 0;
      uStack_5c = 0;
      local_140 = (ulonglong)param_3;
      cVar2 = FUN_14088c870(&local_128,local_140 * 0x10 + *local_138);
      if (cVar2 != '\0') {
        if (param_5 != '\0') {
          iVar3 = FUN_14088e1d6(param_2,&local_128,0);
        }
        plVar1 = (longlong *)(param_1 + 0x9b0);
        uVar5 = (**(code **)(*(longlong *)(param_1 + 0x9b0) + 0x18))(plVar1,param_4);
        if ((ulonglong)(longlong)iVar3 <= uVar5) {
          FUN_14136cf00(local_12c,param_1,param_2,0);
          local_148 = param_1 + 0xe38;
          FUN_1418955c7(&local_128,local_148,0);
          if (param_5 != '\0') {
            (**(code **)(*plVar1 + 0x30))(plVar1,param_4,iVar3);
          }
          local_158 = 0;
          (**(code **)(*(longlong *)(param_1 + 0xe38) + 0x30))(local_148,&local_128,0x40,0xffffffff)
          ;
          local_158 = local_158 & 0xffffff00;
          FUN_148dbfc3c(param_2 + 0x2ac8,&local_128,1,param_1);
          FUN_148f0b2c8(param_2);
          if ((*(longlong *)(param_1 + 0xf48) != 0) && (*(char *)(param_2 + 0x2b30) == '\x01')) {
            FUN_1447f69b6(*(longlong *)(param_1 + 0xf48) + 0x5ae8);
          }
          plVar1 = local_138;
          FUN_14101da94(local_138,param_3);
          FUN_140b12644(plVar1);
          iVar3 = *(int *)(lVar4 + 0x28);
          if (~param_3 + iVar3 != 0) {
            memmove((void *)(*(longlong *)(lVar4 + 0x20) + local_140 * 4),
                    (void *)(*(longlong *)(lVar4 + 0x20) + local_140 * 4 + 4),
                    (longlong)(int)(~param_3 + iVar3) << 2);
            iVar3 = *(int *)(lVar4 + 0x28);
          }
          *(int *)(lVar4 + 0x28) = iVar3 + -1;
          FUN_14479f406(lVar4 + 0x20);
          FUN_14136cce2(local_12c);
        }
      }
      FUN_140368b56(&local_128);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dba86a FUN_148dba86a body=597 status=ok
// SIG undefined FUN_148dba86a(void)

void FUN_148dba86a(longlong param_1,longlong param_2,int *param_3,undefined8 param_4)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined1 local_12c [4];
  longlong local_128 [3];
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined2 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (param_2 != 0) {
    local_c8 = 0;
    local_c0 = 0x8000000000;
    uStack_b8 = 0xffffffff;
    local_128[0] = 0;
    local_128[1] = 0;
    local_128[2] = 0;
    uStack_110 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    local_70 = 0xf;
    local_68 = 1;
    local_64 = 0;
    uStack_5c = 0;
    uVar6 = (ulonglong)*(int *)(param_2 + 0x2b00);
    if (0 < (longlong)uVar6) {
      lVar5 = uVar6 * 0xe8 + -0xe0;
      do {
        lVar1 = *(longlong *)(param_2 + 11000);
        if (*(int *)(lVar1 + lVar5) == *param_3) {
          FUN_1407b25f0(local_128,lVar1 + lVar5 + 8);
          FUN_148dbaac0((longlong *)(param_2 + 11000));
        }
        lVar5 = lVar5 + -0xe8;
        bVar2 = 1 < uVar6;
        uVar6 = uVar6 - 1;
      } while (bVar2);
      if (local_128[0] != 0) {
        if ((longlong)(int)uStack_110 != 0) {
          lVar5 = 0;
          do {
            if (*(longlong *)(local_128[2] + lVar5) == 0) goto LAB_148dba9fa;
            lVar5 = lVar5 + 8;
          } while ((longlong)(int)uStack_110 * 8 != lVar5);
        }
        FUN_1409e3208(local_128,&DAT_14cbe77e0,1);
        iVar3 = FUN_148f0b2d0(param_2,local_128);
        iVar4 = (**(code **)(*(longlong *)(param_1 + 0x9b0) + 0x18))(param_1 + 0x9b0,param_4);
        if (iVar3 <= iVar4) {
          FUN_14136cf00(local_12c,param_1,param_2,0);
          FUN_1418955c7(local_128,param_1 + 0xe38,0);
          (**(code **)(*(longlong *)(param_1 + 0x9b0) + 0x30))(param_1 + 0x9b0,param_4,iVar3);
          local_138 = 0;
          (**(code **)(*(longlong *)(param_1 + 0xe38) + 0x30))
                    (param_1 + 0xe38,local_128,0,0xffffffff);
          local_138 = CONCAT31(local_138._1_3_,1);
          FUN_148dbfc3c(param_2 + 0x2ac8,local_128,1,param_1);
          FUN_14136cce2(local_12c);
        }
      }
    }
LAB_148dba9fa:
    FUN_140368b56(local_128);
  }
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dbaac0 FUN_148dbaac0 body=100 status=ok
// SIG undefined FUN_148dbaac0(void)

void FUN_148dbaac0(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  
  lVar1 = *param_1;
  FUN_140368b56(lVar1 + (longlong)(int)param_2 * 0xe8 + 0x10);
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0xe8);
    memmove(_Dst,(void *)((longlong)_Dst + 0xe8),(longlong)(int)(~param_2 + iVar2) * 0xe8);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  FUN_148dbfab2(param_1);
  return;
}



// FUNCTION 148dbab24 FUN_148dbab24 body=966 status=ok
// SIG undefined FUN_148dbab24(void)

void FUN_148dbab24(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_288 [32];
  undefined1 local_268;
  longlong *local_260;
  undefined4 local_258;
  longlong local_248;
  longlong local_240;
  longlong local_238;
  longlong local_230;
  undefined1 local_224 [4];
  undefined4 local_220;
  undefined4 uStack_21c;
  longlong *local_218;
  longlong local_210;
  longlong local_208;
  undefined4 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined2 local_138;
  undefined8 local_134;
  undefined8 uStack_12c;
  longlong local_120 [2];
  longlong local_110;
  int local_108;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_288;
  if (param_2 != 0) {
    local_210 = FUN_140254f32(param_1,param_4);
    if (local_210 == 0) {
      lVar5 = FUN_14011c349();
      local_208 = *(longlong *)(lVar5 + 0x48);
      local_210 = FUN_140254f32(param_1);
    }
    lVar5 = param_1 + 0xe18;
    lVar6 = FUN_1488c6656(lVar5,param_3,&local_210);
    if (lVar6 != 0) {
      FUN_1406fd608(local_120);
      if (local_120[0] != 0) {
        if ((longlong)local_108 != 0) {
          lVar6 = 0;
          do {
            if (*(longlong *)(local_110 + lVar6) == 0) goto LAB_148dbadae;
            lVar6 = lVar6 + 8;
          } while ((longlong)local_108 * 8 != lVar6);
        }
        lVar6 = FUN_140b479f0(local_120,&DAT_14cbe77e0,0);
        local_200 = 0;
        local_198 = 0;
        local_190 = 0x8000000000;
        uStack_188 = 0xffffffff;
        local_1f8 = 0;
        uStack_1f0 = 0;
        local_1e8 = 0;
        uStack_1e0 = 0;
        local_1d8 = 0;
        uStack_1d0 = 0;
        local_1c8 = 0;
        uStack_1c0 = 0;
        local_1b8 = 0;
        uStack_1b0 = 0;
        local_178 = 0;
        local_170 = 0;
        local_168 = 0;
        uStack_160 = 0;
        local_158 = 0;
        uStack_150 = 0;
        local_148 = 0;
        local_140 = 0xf;
        local_138 = 1;
        local_134 = 0;
        uStack_12c = 0;
        if ((param_1 != 0) && (DAT_14c950c29 != 0)) {
          FUN_1456cec3c(param_1);
        }
        local_208 = param_1;
        FUN_1407b25f0(&local_1f8,local_120);
        FUN_148f07b56(&local_220);
        local_200 = local_220;
        iVar3 = *(int *)(param_2 + 0x2b00);
        *(uint *)(param_2 + 0x2b00) = iVar3 + 1U;
        if (*(uint *)(param_2 + 0x2b04) < iVar3 + 1U) {
          FUN_148dbfba8((longlong *)(param_2 + 11000),iVar3);
        }
        FUN_148dbfb5e((longlong)iVar3 * 0xe8 + *(longlong *)(param_2 + 11000),&local_208);
        if (lVar6 == 0 && *(longlong *)(param_1 + 0xf48) != 0) {
          FUN_1447f69b6(*(longlong *)(param_1 + 0xf48) + 0x5a80);
        }
        FUN_140c65c56(local_120,&local_220);
        lVar6 = *(longlong *)(param_1 + 0xc38);
        lVar4 = *(longlong *)(param_1 + 0xf48);
        if (lVar4 != 0 && (lVar6 != 0 && CONCAT44(uStack_21c,local_220) != 0)) {
          FUN_14136cf00(local_224,param_1,param_2,2);
          FUN_1418955c7(local_120,param_1 + 0xe38,0);
          (**(code **)(*(longlong *)(param_1 + 0x9b0) + 0x28))
                    (param_1 + 0x9b0,param_5,*(undefined4 *)(CONCAT44(uStack_21c,local_220) + 0x40))
          ;
          local_268 = 0;
          FUN_148dbfc3c(param_2 + 0x2ac8,local_120,0,param_1);
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(lVar4);
          }
          local_230 = lVar4 + 0x3be8;
          local_238 = lVar4;
          if ((param_1 == 0) || ((DAT_14c950c29 & 1) == 0)) {
            if (param_1 == 0) {
              lVar5 = 0;
            }
          }
          else {
            FUN_1456cec3c(param_1);
          }
          local_260 = &local_238;
          local_258 = 1;
          local_268 = 0;
          local_248 = param_1;
          local_240 = lVar5;
          FUN_1416a1924(lVar6,param_3,local_210 + 0xb8);
          FUN_14136cce2(local_224);
        }
        if (local_218 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_218 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_218)(local_218);
            LOCK();
            piVar2 = (int *)((longlong)local_218 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_218 + 0x10))(local_218);
            }
          }
        }
        FUN_140368b56(&local_1f8);
      }
LAB_148dbadae:
      FUN_140368b56(local_120);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dbaeec FUN_148dbaeec body=104 status=ok
// SIG undefined FUN_148dbaeec(void)

void FUN_148dbaeec(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_4 != '\0') {
    uVar1 = FUN_148f0b12e(param_2,param_1);
    (**(code **)(*(longlong *)(param_1 + 0x9b0) + 0x30))(param_1 + 0x9b0,param_3,uVar1);
  }
  iVar2 = 0;
  do {
    FUN_145907648(param_1,iVar2,0x3f800000);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 6);
  return;
}



// FUNCTION 148dbaf54 FUN_148dbaf54 body=146 status=ok
// SIG undefined FUN_148dbaf54(void)

void FUN_148dbaf54(undefined8 param_1,undefined1 *param_2,longlong param_3,undefined4 param_4)

{
  if (param_3 == 0) {
    return;
  }
  switch(*param_2) {
  case 0:
    FUN_148ca0b51(param_3 + 0x2758,param_1,param_4);
    if ((char)param_4 != '\0') {
      return;
    }
    FUN_148f0ad5c(param_3,param_1);
    return;
  case 1:
    param_3 = param_3 + 0x2778;
    break;
  case 2:
    param_3 = param_3 + 0x2768;
    break;
  case 3:
    param_3 = param_3 + 0x2788;
    break;
  case 4:
    param_3 = param_3 + 0x2798;
    break;
  default:
    return;
  }
  FUN_148ca0b0d(param_3,param_1);
  return;
}



// FUNCTION 148dbafe6 FUN_148dbafe6 body=63 status=ok
// SIG undefined FUN_148dbafe6(void)

void FUN_148dbafe6(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14497e828();
  if (lVar1 != 0) {
    lVar1 = FUN_140704886(lVar1);
    if (lVar1 != 0) {
      FUN_148f06cfc(lVar1,param_2,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148dbb026 FUN_148dbb026 body=59 status=ok
// SIG undefined FUN_148dbb026(void)

void FUN_148dbb026(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_14497e828();
    if (lVar1 != 0) {
      lVar1 = FUN_140704886(lVar1);
      if (lVar1 != 0) {
        FUN_14126e4e0(lVar1,param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148dbb0a0 FUN_148dbb0a0 body=78 status=ok
// SIG undefined FUN_148dbb0a0(void)

void FUN_148dbb0a0(undefined8 param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1447210f0();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_140704886();
    if (lVar1 != 0) {
      lVar2 = lVar1 + 0x2b0;
      if (param_2 == '\0') {
        lVar2 = lVar1 + 0x298;
      }
      FUN_1447f69b6(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148dbb106 FUN_148dbb106 body=85 status=ok
// SIG undefined FUN_148dbb106(void)

void FUN_148dbb106(longlong *param_1,float param_2)

{
  if (param_1[0x4a0] != 0) {
    if (param_2 <= 0.0) {
      FUN_14880395a();
    }
    else {
      *(float *)(param_1[0x4a0] + 0x3a8) = param_2;
    }
                    /* WARNING: Could not recover jumptable at 0x000148dbb158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xfd8))(param_1,*(undefined4 *)(param_1[0x4a0] + 0x3a8));
    return;
  }
  return;
}



// FUNCTION 148dbb170 FUN_148dbb170 body=164 status=ok
// SIG undefined FUN_148dbb170(void)

void FUN_148dbb170(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0x2800) < 1) {
    FUN_1446ddc76(&local_20,"bigmapentry",1);
    FUN_14621ebb6(param_1,local_20);
  }
  else {
    uVar1 = FUN_144a7ba4c(param_1);
    lVar2 = FUN_1404960a8(uVar1);
    if (lVar2 != 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(8,0x10);
      *puVar3 = &PTR_FUN_14b9941b8;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dbb226 FUN_148dbb226 body=33 status=ok
// SIG undefined FUN_148dbb226(void)

void FUN_148dbb226(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1402735c8();
  FUN_14621ebb6(param_1,*(undefined8 *)(lVar1 + 0x120));
  return;
}



// FUNCTION 148dbb248 FUN_148dbb248 body=90 status=ok
// SIG undefined FUN_148dbb248(void)

void FUN_148dbb248(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446ddc76(&local_20,"missionlogentry",1);
  FUN_14621ebb6(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dbb2a4 FUN_148dbb2a4 body=90 status=ok
// SIG undefined FUN_148dbb2a4(void)

void FUN_148dbb2a4(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446ddc76(&local_20,"skills",1);
  FUN_14621ebb6(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dbb320 FUN_148dbb320 body=33 status=ok
// SIG undefined FUN_148dbb320(void)

void FUN_148dbb320(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1402735c8();
  FUN_14621ebb6(param_1,*(undefined8 *)(lVar1 + 0x120));
  return;
}



// FUNCTION 148dbb342 FUN_148dbb342 body=90 status=ok
// SIG undefined FUN_148dbb342(void)

void FUN_148dbb342(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446ddc76(&local_20,"skills",1);
  FUN_14621ebb6(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dbb39e FUN_148dbb39e body=90 status=ok
// SIG undefined FUN_148dbb39e(void)

void FUN_148dbb39e(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446ddc76(&local_20,"missionlogentry",1);
  FUN_14621ebb6(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dbb3fa FUN_148dbb3fa body=90 status=ok
// SIG undefined FUN_148dbb3fa(void)

void FUN_148dbb3fa(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446ddc76(&local_20,"bigmapentry",1);
  FUN_14621ebb6(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dbb456 FUN_148dbb456 body=46 status=ok
// SIG undefined FUN_148dbb456(void)

void FUN_148dbb456(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x3208) != 0) {
    FUN_148d9a016();
  }
  FUN_140545fa2(param_1);
  FUN_148dc228e(param_1);
  return;
}



// FUNCTION 148dbb484 FUN_148dbb484 body=96 status=ok
// SIG undefined FUN_148dbb484(void)

void FUN_148dbb484(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x398) != 0) {
    lVar3 = FUN_144a7b4ca();
    lVar1 = *(longlong *)(param_1 + 0x398);
    if ((((lVar1 != 0) && (lVar3 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)))) {
      FUN_148dc09fc(lVar1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 148dbb4e4 FUN_148dbb4e4 body=83 status=ok
// SIG undefined FUN_148dbb4e4(void)

void FUN_148dbb4e4(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_144a7ba4c();
  if (lVar1 != 0) {
    lVar2 = FUN_14030d4a0();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      *(undefined1 *)(lVar1 + 0x3de) = 0;
    }
  }
  uVar3 = FUN_140d27aa0(param_1);
  FUN_1461b7588(uVar3);
  return;
}



// FUNCTION 148dbb53c FUN_148dbb53c body=459 status=ok
// SIG undefined FUN_148dbb53c(void)

void FUN_148dbb53c(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  double dVar12;
  longlong lVar13;
  double *pdVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (0 < param_2) {
    lVar13 = param_1;
    lVar11 = FUN_1447210f0();
    uVar15 = (undefined4)lVar13;
    dVar12 = 0.0;
    if (lVar11 != 0) {
      dVar12 = (double)FUN_144a80e00();
      uVar15 = (undefined4)lVar11;
      if (SUB81(dVar12,0) != '\0') goto LAB_148dbb584;
    }
    lVar13 = *(longlong *)(param_1 + 0x3d0);
    if (lVar13 != 0) {
      lVar11 = *(longlong *)(lVar13 + 0x1c8);
      if (lVar11 != 0) {
        dVar3 = *(double *)(lVar11 + 0x240);
        dVar4 = *(double *)(lVar11 + 0x248);
        dVar5 = *(double *)(lVar11 + 0x250);
        dVar6 = *(double *)(lVar11 + 600);
        pdVar14 = *(double **)(lVar11 + 0x228);
        local_88 = dVar3;
        uStack_80 = dVar4;
        local_78 = dVar5;
        uStack_70 = dVar6;
        if (pdVar14 == (double *)0x0) {
          uVar15 = 0x40;
          pdVar14 = (double *)FUN_14001cc68(0x40,0x10);
          dVar12 = DAT_14c8463d8;
          *pdVar14 = DAT_14c8463d0;
          pdVar14[1] = dVar12;
          dVar12 = DAT_14c8463e8;
          pdVar14[2] = DAT_14c8463e0;
          pdVar14[3] = dVar12;
          uVar9 = DAT_14c846500._4_4_;
          uVar8 = (undefined4)DAT_14c846500;
          uVar7 = DAT_14c8464f8._4_4_;
          *(undefined4 *)(pdVar14 + 4) = (undefined4)DAT_14c8464f8;
          *(undefined4 *)((longlong)pdVar14 + 0x24) = uVar7;
          *(undefined4 *)(pdVar14 + 5) = uVar8;
          *(undefined4 *)((longlong)pdVar14 + 0x2c) = uVar9;
          dVar12 = DAT_14c846508;
          pdVar14[6] = DAT_14c846508;
          *(double **)(lVar11 + 0x228) = pdVar14;
        }
        auVar1._8_4_ = (int)-(ulonglong)(dVar4 != pdVar14[1]);
        auVar1._0_8_ = -(ulonglong)(dVar3 != *pdVar14);
        auVar1._12_4_ = (int)(-(ulonglong)(dVar4 != pdVar14[1]) >> 0x20);
        iVar10 = movmskpd(SUB84(dVar12,0),auVar1);
        auVar2._8_4_ = (int)-(ulonglong)(dVar6 != pdVar14[3]);
        auVar2._0_8_ = -(ulonglong)(dVar5 != pdVar14[2]);
        auVar2._12_4_ = (int)(-(ulonglong)(dVar6 != pdVar14[3]) >> 0x20);
        uVar16 = movmskpd(uVar15,auVar2);
        if ((uVar16 & 0x3fffffff) != 0 || iVar10 != 0) {
          *(undefined4 *)(pdVar14 + 2) = (undefined4)local_78;
          *(undefined4 *)((longlong)pdVar14 + 0x14) = local_78._4_4_;
          *(undefined4 *)(pdVar14 + 3) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)pdVar14 + 0x1c) = uStack_70._4_4_;
          *(undefined4 *)pdVar14 = (undefined4)local_88;
          *(undefined4 *)((longlong)pdVar14 + 4) = local_88._4_4_;
          *(undefined4 *)(pdVar14 + 1) = (undefined4)uStack_80;
          *(undefined4 *)((longlong)pdVar14 + 0xc) = uStack_80._4_4_;
          FUN_1448052ee(&local_88,&local_68);
          pdVar14[6] = local_58;
          *(undefined4 *)(pdVar14 + 4) = local_68;
          *(undefined4 *)((longlong)pdVar14 + 0x24) = uStack_64;
          *(undefined4 *)(pdVar14 + 5) = uStack_60;
          *(undefined4 *)((longlong)pdVar14 + 0x2c) = uStack_5c;
        }
      }
      FUN_140aeefbc(lVar13,1,1);
    }
    if (*(longlong *)(param_1 + 0x398) != 0) {
      lVar13 = FUN_144a7b4ca();
      if ((((*(longlong *)(param_1 + 0x398) != 0) && (lVar13 != 0)) &&
          (lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x398) + 0x10), lVar11 != 0)) &&
         ((*(int *)(lVar13 + 0x38) <= *(int *)(lVar11 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8) ==
           lVar13 + 0x30)))) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_a8);
      }
    }
  }
LAB_148dbb584:
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dbb768 FUN_148dbb768 body=27 status=ok
// SIG undefined FUN_148dbb768(void)

undefined1 FUN_148dbb768(void)

{
  longlong in_R9;
  
  if (*(longlong *)(in_R9 + 0x18) != 0) {
    FUN_1400020a8();
  }
  return 1;
}



// FUNCTION 148dbb788 FUN_148dbb788 body=237 status=ok
// SIG undefined FUN_148dbb788(void)

void FUN_148dbb788(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = FUN_1447210f0();
  if ((lVar2 != 0) && (0 < *(int *)(lVar2 + 0x238))) {
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x398) + 0x394);
    iVar5 = 0;
    lVar6 = 0;
    do {
      lVar3 = FUN_14479d2ce(*(longlong *)(lVar2 + 0x230) + lVar6);
      if (lVar3 != 0) {
        lVar4 = FUN_144a5dd5e();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          local_58 = *(undefined8 *)(param_3 + 4);
          local_68 = *param_3;
          uStack_64 = param_3[1];
          uStack_60 = param_3[2];
          uStack_5c = param_3[3];
          FUN_148c3624c(lVar3,uVar1,param_2,&local_68);
        }
      }
      lVar6 = lVar6 + 8;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(lVar2 + 0x238));
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dbb876 FUN_148dbb876 body=155 status=ok
// SIG undefined FUN_148dbb876(void)

void FUN_148dbb876(longlong param_1,undefined4 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_3;
  if ((param_3 == 0) || (DAT_14c950c29 == '\0')) {
    if (param_3 == 0) {
      local_30 = 0;
      goto LAB_148dbb8c1;
    }
  }
  else {
    FUN_1456cec3c(param_3);
  }
  uVar1 = FUN_145a3ca5a();
  local_30 = FUN_144718840(param_3,uVar1);
LAB_148dbb8c1:
  FUN_145806b10(param_1 + 0x34f0,param_2,&local_38,param_4);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dbb912 FUN_148dbb912 body=192 status=ok
// SIG undefined FUN_148dbb912(void)

void FUN_148dbb912(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  undefined4 local_b0 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  undefined4 local_31;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0[0] = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_32 = 1;
  local_31 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0xa08);
  lVar2 = FUN_1403ca35b();
  uVar3 = FUN_1447210f0(param_1);
  local_b8 = local_b0;
  FUN_140bdce7c(uVar3,lVar2 + 600,uVar1,0);
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dbb9d4 FUN_148dbb9d4 body=117 status=ok
// SIG undefined FUN_148dbb9d4(void)

void FUN_148dbb9d4(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*(longlong *)(param_1 + 0xe70) + 0x18))(param_1 + 0xe70,local_28);
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0xe70) + 0x10))(param_1 + 0xe70,local_28);
  FUN_1415bd6c0(uVar1,param_1,DAT_14cbcfa90);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dbba4a FUN_148dbba4a body=117 status=ok
// SIG undefined FUN_148dbba4a(void)

void FUN_148dbba4a(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*(longlong *)(param_1 + 0xe70) + 0x18))(param_1 + 0xe70,local_28);
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0xe70) + 0x10))(param_1 + 0xe70,local_28);
  FUN_14169654e(uVar1,param_1,DAT_14cbcfa90);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dbbb04 FUN_148dbbb04 body=147 status=ok
// SIG undefined FUN_148dbbb04(void)

void FUN_148dbbb04(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_144a2f878();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_148ccc1c8(param_2);
    }
  }
  if ((longlong)*(int *)(param_1 + 0x3cf8) != 0) {
    lVar1 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x3cf0) + 8 + lVar1) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x3cf0) + lVar1) != 0)) {
        FUN_1410b8c2c(param_1 + 0x3cf0,param_2,param_3);
        return;
      }
      lVar1 = lVar1 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x3cf8) * 0x10 != lVar1);
  }
  return;
}



// FUNCTION 148dbbb9e FUN_148dbbb9e body=147 status=ok
// SIG undefined FUN_148dbbb9e(void)

void FUN_148dbbb9e(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_144a2f878();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_148ccc1b8(param_2);
    }
  }
  if ((longlong)*(int *)(param_1 + 0x3d10) != 0) {
    lVar1 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x3d08) + 8 + lVar1) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x3d08) + lVar1) != 0)) {
        FUN_1410b8c2c(param_1 + 0x3d08,param_2,param_3);
        return;
      }
      lVar1 = lVar1 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x3d10) * 0x10 != lVar1);
  }
  return;
}



// FUNCTION 148dbbc32 FUN_148dbbc32 body=59 status=ok
// SIG undefined FUN_148dbbc32(void)

void FUN_148dbbc32(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  if (*(char *)(param_1 + 0x178) != '\x03') {
    return;
  }
  FUN_148c371d4();
  FUN_148dbbb04(param_1,param_2,param_3);
  return;
}



// FUNCTION 148dbbc6e FUN_148dbbc6e body=59 status=ok
// SIG undefined FUN_148dbbc6e(void)

void FUN_148dbbc6e(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  if (*(char *)(param_1 + 0x178) != '\x03') {
    return;
  }
  FUN_148c37076();
  FUN_148dbbb9e(param_1,param_2,param_3);
  return;
}



// FUNCTION 148dbbcaa FUN_148dbbcaa body=170 status=ok
// SIG undefined FUN_148dbbcaa(void)

void FUN_148dbbcaa(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (2 < (byte)((char)param_2 - 3U)) {
    return;
  }
  lVar1 = FUN_14497e828();
  if (lVar1 == 0) goto LAB_148dbbcea;
  lVar2 = FUN_1403ca142();
  if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
      lVar2 + 0x30)) goto LAB_148dbbcea;
  lVar1 = *(longlong *)(lVar1 + 0x48);
  if (lVar1 == 0) {
LAB_148dbbd36:
    lVar1 = 0;
  }
  else {
    lVar2 = FUN_140b6d0be();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        != lVar2 + 0x30)) goto LAB_148dbbd36;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar1);
    }
  }
  *(longlong *)(param_1 + 0x3208) = lVar1;
LAB_148dbbcea:
  if (*(longlong *)(param_1 + 0x3208) == 0) {
    return;
  }
  FUN_148d955bc(*(longlong *)(param_1 + 0x3208),param_2);
  return;
}



// FUNCTION 148dbbd54 FUN_148dbbd54 body=40 status=ok
// SIG undefined FUN_148dbbd54(void)

byte FUN_148dbbd54(longlong param_1,char param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = FUN_1487c51f2();
  bVar2 = 1;
  if (param_2 == '\0') {
    bVar2 = *(byte *)(param_1 + 0x23bd) ^ 1;
  }
  return bVar1 & bVar2;
}



// FUNCTION 148dbbd7c FUN_148dbbd7c body=416 status=ok
// SIG undefined FUN_148dbbd7c(void)

void FUN_148dbbd7c(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_a8 [40];
  longlong *local_80 [2];
  undefined4 local_6c;
  undefined1 local_68 [16];
  undefined8 local_58;
  longlong *local_50 [3];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = param_2;
  FUN_1446dcdd4(local_50,&local_58);
  if (DAT_14cbc8bb8 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_144815d88(DAT_14cbc8bb8,local_50);
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (lVar1 != 0) {
    lVar2 = FUN_140e4494e(param_1);
    if (lVar2 != 0) {
      FUN_1446f470e(local_80,L"UIMessage_Travel_Locked",1);
      FUN_1446dcdd4(local_50,local_80);
      lVar3 = FUN_1412095fe(local_50);
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      if (lVar3 != 0) {
        FUN_14023409e(local_68,lVar3 + 0x28,1);
        FUN_148dbbf1e(local_50,local_68,lVar1 + 0x28);
        FUN_1446f470e(local_80,L"UIMessage_Travel_Locked",1);
        FUN_148e38158(lVar2,&local_6c,local_80);
        FUN_144a5dc74(local_80);
        FUN_148e3a3b0(lVar2,local_6c,local_50,local_80);
        if (local_80[0] != (longlong *)0x0) {
          (**(code **)(*local_80[0] + 0x10))();
        }
        if (local_50[0] != (longlong *)0x0) {
          (**(code **)(*local_50[0] + 0x10))();
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dbbf1e FUN_148dbbf1e body=181 status=ok
// SIG undefined FUN_148dbbf1e(void)

undefined8 FUN_148dbbf1e(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  FUN_145c6ff46(&local_38,1);
  FUN_148dc020e(&local_38,param_3);
  FUN_145c6ff28(param_1,param_2,&local_38);
  FUN_14007f2db(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dbc01e FUN_148dbc01e body=48 status=ok
// SIG undefined FUN_148dbc01e(void)

longlong FUN_148dbc01e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x9a0;
  FUN_14164ae34(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dbc056 FUN_148dbc056 body=48 status=ok
// SIG undefined FUN_148dbc056(void)

longlong FUN_148dbc056(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x9a8;
  FUN_14164ae34(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dbc08e FUN_148dbc08e body=48 status=ok
// SIG undefined FUN_148dbc08e(void)

longlong FUN_148dbc08e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x9b0;
  FUN_14164ae34(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dbc0f8 FUN_148dbc0f8 body=48 status=ok
// SIG undefined FUN_148dbc0f8(void)

longlong FUN_148dbc0f8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xe48;
  FUN_14164ae34(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dbc138 FUN_148dbc138 body=48 status=ok
// SIG undefined FUN_148dbc138(void)

longlong FUN_148dbc138(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xe50;
  FUN_14164ae34(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dbc170 FUN_148dbc170 body=48 status=ok
// SIG undefined FUN_148dbc170(void)

longlong FUN_148dbc170(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xe60;
  FUN_14164ae34(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dbc1b0 FUN_148dbc1b0 body=48 status=ok
// SIG undefined FUN_148dbc1b0(void)

longlong FUN_148dbc1b0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xe70;
  FUN_14164ae34(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dbc1e8 FUN_148dbc1e8 body=38 status=ok
// SIG undefined FUN_148dbc1e8(void)

undefined8 FUN_148dbc1e8(undefined8 param_1,int param_2)

{
  FUN_142b2c07c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dbc20e FUN_148dbc20e body=29 status=ok
// SIG undefined FUN_148dbc20e(void)

undefined8 FUN_148dbc20e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dbc22c FUN_148dbc22c body=38 status=ok
// SIG undefined FUN_148dbc22c(void)

undefined8 FUN_148dbc22c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_OnEnterCharacterRapSheet",1);
  return param_2;
}



// FUNCTION 148dbc252 FUN_148dbc252 body=31 status=ok
// SIG undefined FUN_148dbc252(void)

undefined8 FUN_148dbc252(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dbc28a FUN_148dbc28a body=93 status=ok
// SIG undefined FUN_148dbc28a(void)

void FUN_148dbc28a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b993e90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148dbc2e8 FUN_148dbc2e8 body=126 status=ok
// SIG undefined FUN_148dbc2e8(void)

void FUN_148dbc2e8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b993e90;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148dbc357. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dbc366 FUN_148dbc366 body=21 status=ok
// SIG undefined FUN_148dbc366(void)

undefined8 FUN_148dbc366(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148dbc37c FUN_148dbc37c body=29 status=ok
// SIG undefined FUN_148dbc37c(void)

undefined8 FUN_148dbc37c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dbc39a FUN_148dbc39a body=38 status=ok
// SIG undefined FUN_148dbc39a(void)

undefined8 FUN_148dbc39a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_OnCharacterFocused",1);
  return param_2;
}



// FUNCTION 148dbc3e4 FUN_148dbc3e4 body=29 status=ok
// SIG undefined FUN_148dbc3e4(void)

bool FUN_148dbc3e4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148dbc402 FUN_148dbc402 body=26 status=ok
// SIG undefined FUN_148dbc402(void)

bool FUN_148dbc402(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148dbc41c FUN_148dbc41c body=101 status=ok
// SIG undefined FUN_148dbc41c(void)

void FUN_148dbc41c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b995700;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dbc482 FUN_148dbc482 body=134 status=ok
// SIG undefined FUN_148dbc482(void)

void FUN_148dbc482(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b995700;
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
                    /* WARNING: Could not recover jumptable at 0x000148dbc4f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dbc508 FUN_148dbc508 body=162 status=ok
// SIG undefined FUN_148dbc508(void)

bool FUN_148dbc508(longlong param_1,undefined4 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 148dbc5ac FUN_148dbc5ac body=29 status=ok
// SIG undefined FUN_148dbc5ac(void)

undefined8 FUN_148dbc5ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dbc5ca FUN_148dbc5ca body=38 status=ok
// SIG undefined FUN_148dbc5ca(void)

undefined8 FUN_148dbc5ca(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FGbxUIEvent_CSP_WidgetTrigger",1);
  return param_2;
}



// FUNCTION 148dbc5f0 FUN_148dbc5f0 body=29 status=ok
// SIG undefined FUN_148dbc5f0(void)

undefined8 FUN_148dbc5f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dbc60e FUN_148dbc60e body=38 status=ok
// SIG undefined FUN_148dbc60e(void)

undefined8 FUN_148dbc60e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FGbxUIEvent_CSP_Trigger",1);
  return param_2;
}



// FUNCTION 148dbc634 FUN_148dbc634 body=76 status=ok
// SIG undefined FUN_148dbc634(void)

void FUN_148dbc634(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145b91338();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_148dbc671;
    }
  }
  lVar2 = 0;
LAB_148dbc671:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 148dbc680 FUN_148dbc680 body=31 status=ok
// SIG undefined FUN_148dbc680(void)

undefined8 FUN_148dbc680(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dbc6ba FUN_148dbc6ba body=93 status=ok
// SIG undefined FUN_148dbc6ba(void)

void FUN_148dbc6ba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3cb240;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9941f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148dbc718 FUN_148dbc718 body=93 status=ok
// SIG undefined FUN_148dbc718(void)

void FUN_148dbc718(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3cb240;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9941f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148dbc776 FUN_148dbc776 body=126 status=ok
// SIG undefined FUN_148dbc776(void)

void FUN_148dbc776(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a3cb240;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9941f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148dbc7e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dbc7f4 FUN_148dbc7f4 body=40 status=ok
// SIG undefined FUN_148dbc7f4(void)

void FUN_148dbc7f4(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148dbc819. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148dbc82a FUN_148dbc82a body=130 status=ok
// SIG undefined FUN_148dbc82a(void)

void FUN_148dbc82a(longlong *param_1,longlong *param_2)

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



// FUNCTION 148dbc8bc FUN_148dbc8bc body=130 status=ok
// SIG undefined FUN_148dbc8bc(void)

void FUN_148dbc8bc(longlong *param_1,longlong *param_2)

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



// FUNCTION 148dbc940 FUN_148dbc940 body=130 status=ok
// SIG undefined FUN_148dbc940(void)

void FUN_148dbc940(longlong *param_1,longlong *param_2)

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



// FUNCTION 148dbc9c4 FUN_148dbc9c4 body=31 status=ok
// SIG undefined FUN_148dbc9c4(void)

undefined8 FUN_148dbc9c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dbc9fe FUN_148dbc9fe body=29 status=ok
// SIG undefined FUN_148dbc9fe(void)

bool FUN_148dbc9fe(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148dbca1c FUN_148dbca1c body=26 status=ok
// SIG undefined FUN_148dbca1c(void)

bool FUN_148dbca1c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148dbca36 FUN_148dbca36 body=93 status=ok
// SIG undefined FUN_148dbca36(void)

void FUN_148dbca36(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b403ee0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b994500;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148dbca94 FUN_148dbca94 body=93 status=ok
// SIG undefined FUN_148dbca94(void)

void FUN_148dbca94(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b403ee0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b994500;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148dbcaf2 FUN_148dbcaf2 body=126 status=ok
// SIG undefined FUN_148dbcaf2(void)

void FUN_148dbcaf2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b403ee0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b994500;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148dbcb61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dbcb70 FUN_148dbcb70 body=100 status=ok
// SIG undefined FUN_148dbcb70(void)

void FUN_148dbcb70(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
  local_28 = *(undefined4 *)(param_2 + 1);
  local_30 = *param_2;
  (**(code **)(param_1 + 0x20))(uVar1,&local_30,param_3);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dbcbd6 FUN_148dbcbd6 body=322 status=ok
// SIG undefined FUN_148dbcbd6(void)

void FUN_148dbcbd6(longlong *param_1)

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



// FUNCTION 148dbcd1a FUN_148dbcd1a body=114 status=ok
// SIG undefined FUN_148dbcd1a(void)

void FUN_148dbcd1a(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
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



// FUNCTION 148dbcd8c FUN_148dbcd8c body=320 status=ok
// SIG undefined FUN_148dbcd8c(void)

void FUN_148dbcd8c(undefined8 param_1,longlong *param_2,char param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *param_2;
  if (lVar3 != 0) {
    lVar1 = FUN_144a78d6a();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar3 = *param_2;
      goto LAB_148dbcde4;
    }
  }
  lVar3 = 0;
LAB_148dbcde4:
  lVar2 = FUN_144a78d6a();
  lVar1 = *param_2;
  if (lVar3 == lVar2) {
    if (param_3 == '\0') {
      local_40 = lVar1;
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      FUN_148dbd24e(param_1,&local_40,param_4);
    }
    else {
      local_38 = lVar1;
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      FUN_148dbcfca(param_1,&local_38,param_4);
    }
  }
  else if (param_3 == '\0') {
    local_50 = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_148dbd6a6(param_1,&local_50,param_4);
  }
  else {
    local_48 = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_148dbd3a0(param_1,&local_48,param_4);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dbcece FUN_148dbcece body=110 status=ok
// SIG undefined FUN_148dbcece(void)

void FUN_148dbcece(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x18;
    if (0x18 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 3)) {
        uVar2 = uVar1 >> 3 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xcc)) {
    *(int *)(param_1 + 0xcc) = (int)uVar2;
    FUN_148dbcf3c(param_1,*(undefined4 *)(param_1 + 200),uVar2,8);
    return;
  }
  return;
}



// FUNCTION 148dbcf3c FUN_148dbcf3c body=142 status=ok
// SIG undefined FUN_148dbcf3c(void)

void FUN_148dbcf3c(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc0);
  if ((uint)param_3 < 0x19) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc0,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc0,param_2,param_3,param_4);
  return;
}



// FUNCTION 148dbcfca FUN_148dbcfca body=643 status=ok
// SIG undefined FUN_148dbcfca(void)

void FUN_148dbcfca(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar10 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar10;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar9 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar9) || (uStack_130 != lVar10)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        iVar2 = *(int *)(param_3 + 200);
        *(uint *)(param_3 + 200) = iVar2 + 1U;
        if (*(uint *)(param_3 + 0xcc) < iVar2 + 1U) {
          FUN_148dbd878(param_3,iVar2);
        }
        lVar7 = *(longlong *)(param_3 + 0xc0);
        if (*(longlong *)(param_3 + 0xc0) == 0) {
          lVar7 = param_3;
        }
        *(longlong **)(lVar7 + (longlong)iVar2 * 8) = plVar3;
        lVar7 = FUN_144a7f016();
        if (((*(int *)(lVar7 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
             == lVar7 + 0x30)) &&
           (lVar7 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar7 != 0)) {
          lVar11 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar8 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar8 = local_118;
          }
          *(longlong *)(puVar8 + lVar11 * 8) = lVar7;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar10 || iStack_144 != iVar9));
    lVar10 = (longlong)(int)local_50;
    puVar8 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar8 = local_58;
    }
    if (lVar10 != 0) {
      lVar7 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar8 + lVar7);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_148dbcfca(uVar4,&local_168,param_3);
        lVar7 = lVar7 + 8;
      } while (lVar10 * 8 != lVar7);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148dbd24e FUN_148dbd24e body=336 status=ok
// SIG undefined FUN_148dbd24e(void)

void FUN_148dbd24e(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar6 = *(int *)(param_1 + 0x268);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar6) || (uStack_58 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_88 + (longlong)iStack_6c * 0x10);
      if (lVar4 != 0) {
        iVar3 = *(int *)(param_3 + 200);
        *(uint *)(param_3 + 200) = iVar3 + 1U;
        if (*(uint *)(param_3 + 0xcc) < iVar3 + 1U) {
          FUN_148dbd878(param_3,iVar3);
        }
        lVar5 = *(longlong *)(param_3 + 0xc0);
        if (*(longlong *)(param_3 + 0xc0) == 0) {
          lVar5 = param_3;
        }
        *(longlong *)(lVar5 + (longlong)iVar3 * 8) = lVar4;
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar6));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148dbd3a0 FUN_148dbd3a0 body=772 status=ok
// SIG undefined FUN_148dbd3a0(void)

void FUN_148dbd3a0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar12 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar12;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar11 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar11) || (uStack_130 != lVar12)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        lVar8 = *param_2;
        if ((lVar8 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
LAB_148dbd4c4:
          lVar7 = FUN_144a78d6a();
          if ((lVar7 == 0) || (*(int *)(lVar8 + 0x38) < *(int *)(lVar7 + 0x38))) goto LAB_148dbd4dc;
          lVar9 = 0;
          if (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
              lVar7 + 0x30) {
            lVar9 = lVar8;
          }
        }
        else {
          if (lVar8 != 0) goto LAB_148dbd4c4;
LAB_148dbd4dc:
          lVar9 = 0;
        }
        if ((*(int *)(lVar9 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
            lVar9 + 0x30)) {
          iVar2 = *(int *)(param_3 + 200);
          *(uint *)(param_3 + 200) = iVar2 + 1U;
          if (*(uint *)(param_3 + 0xcc) < iVar2 + 1U) {
            FUN_148dbd878(param_3,iVar2);
          }
          lVar8 = *(longlong *)(param_3 + 0xc0);
          if (*(longlong *)(param_3 + 0xc0) == 0) {
            lVar8 = param_3;
          }
          *(longlong **)(lVar8 + (longlong)iVar2 * 8) = plVar3;
        }
        lVar8 = FUN_144a7f016();
        if (((*(int *)(lVar8 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
             == lVar8 + 0x30)) &&
           (lVar8 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar8 != 0)) {
          lVar7 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar10 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar10 = local_118;
          }
          *(longlong *)(puVar10 + lVar7 * 8) = lVar8;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar12 || iStack_144 != iVar11));
    lVar12 = (longlong)(int)local_50;
    puVar10 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar10 = local_58;
    }
    if (lVar12 != 0) {
      lVar8 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar10 + lVar8);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_148dbd3a0(uVar4,&local_168,param_3);
        lVar8 = lVar8 + 8;
      } while (lVar12 * 8 != lVar8);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148dbd6a6 FUN_148dbd6a6 body=465 status=ok
// SIG undefined FUN_148dbd6a6(void)

void FUN_148dbd6a6(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_b8 [40];
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar8 = *(int *)(param_1 + 0x268);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar8) || (uStack_60 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_90 + (longlong)iStack_74 * 0x10);
      if (lVar4 != 0) {
        lVar5 = *param_2;
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
LAB_148dbd7d5:
          lVar6 = FUN_144a78d6a();
          if ((lVar6 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38))) goto LAB_148dbd7ed;
          lVar7 = 0;
          if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30) {
            lVar7 = lVar5;
          }
        }
        else {
          if (lVar5 != 0) goto LAB_148dbd7d5;
LAB_148dbd7ed:
          lVar7 = 0;
        }
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          iVar3 = *(int *)(param_3 + 200);
          *(uint *)(param_3 + 200) = iVar3 + 1U;
          if (*(uint *)(param_3 + 0xcc) < iVar3 + 1U) {
            FUN_148dbd878(param_3,iVar3);
          }
          lVar5 = *(longlong *)(param_3 + 0xc0);
          if (*(longlong *)(param_3 + 0xc0) == 0) {
            lVar5 = param_3;
          }
          *(longlong *)(lVar5 + (longlong)iVar3 * 8) = lVar4;
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar8));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148dbd878 FUN_148dbd878 body=125 status=ok
// SIG undefined FUN_148dbd878(void)

void FUN_148dbd878(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 200);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0x18;
    if (0x18 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0x18 < *(uint *)(param_1 + 0xcc)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0xcc) = (int)uVar4;
    FUN_148dbcf3c(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 148dbd8f6 FUN_148dbd8f6 body=31 status=ok
// SIG undefined FUN_148dbd8f6(void)

undefined8 FUN_148dbd8f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dbd932 FUN_148dbd932 body=93 status=ok
// SIG undefined FUN_148dbd932(void)

void FUN_148dbd932(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b994650;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148dbd990 FUN_148dbd990 body=93 status=ok
// SIG undefined FUN_148dbd990(void)

void FUN_148dbd990(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b994650;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148dbd9ee FUN_148dbd9ee body=126 status=ok
// SIG undefined FUN_148dbd9ee(void)

void FUN_148dbd9ee(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b994650;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148dbda5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dbda7a FUN_148dbda7a body=95 status=ok
// SIG undefined FUN_148dbda7a(void)

longlong FUN_148dbda7a(longlong param_1,int param_2)

{
  *(undefined ***)(param_1 + 0xc0) = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (*(char *)(param_1 + 0xc9) == '\x01')) {
    FUN_14019e20a(DAT_14c948580,param_1 + 0xc0);
    *(undefined1 *)(param_1 + 0xc9) = 0;
  }
  FUN_14079057a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dbdae6 FUN_148dbdae6 body=32 status=ok
// SIG undefined FUN_148dbdae6(void)

undefined8 FUN_148dbdae6(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FSubsystemCollection");
  return param_2;
}



// FUNCTION 148dbdb06 FUN_148dbdb06 body=31 status=ok
// SIG undefined FUN_148dbdb06(void)

undefined8 FUN_148dbdb06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dbdb40 FUN_148dbdb40 body=101 status=ok
// SIG undefined FUN_148dbdb40(void)

void FUN_148dbdb40(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ecf50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9946e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dbdba6 FUN_148dbdba6 body=101 status=ok
// SIG undefined FUN_148dbdba6(void)

void FUN_148dbdba6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ecf50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9946e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dbdc0c FUN_148dbdc0c body=134 status=ok
// SIG undefined FUN_148dbdc0c(void)

void FUN_148dbdc0c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3ecf50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9946e0;
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
                    /* WARNING: Could not recover jumptable at 0x000148dbdc83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dbdc92 FUN_148dbdc92 body=52 status=ok
// SIG undefined FUN_148dbdc92(void)

void FUN_148dbdc92(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148dbdcc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148dbdcc6 FUN_148dbdcc6 body=31 status=ok
// SIG undefined FUN_148dbdcc6(void)

undefined8 FUN_148dbdcc6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dbdcfa FUN_148dbdcfa body=85 status=ok
// SIG undefined FUN_148dbdcfa(void)

void FUN_148dbdcfa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b994790;
  return;
}



// FUNCTION 148dbdd50 FUN_148dbdd50 body=118 status=ok
// SIG undefined FUN_148dbdd50(void)

void FUN_148dbdd50(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c87c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b994790;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148dbddb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dbddc6 FUN_148dbddc6 body=101 status=ok
// SIG undefined FUN_148dbddc6(void)

undefined8 FUN_148dbddc6(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145d20322(local_20);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_18 + 0x10))(local_18);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dbde2c FUN_148dbde2c body=24 status=ok
// SIG undefined FUN_148dbde2c(void)

void FUN_148dbde2c(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148dbde40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 148dbde44 FUN_148dbde44 body=162 status=ok
// SIG undefined FUN_148dbde44(void)

void FUN_148dbde44(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148dbde83;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148dbde83;
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
LAB_148dbde83:
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
                    /* WARNING: Could not recover jumptable at 0x000148dbdee2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148dbdeea FUN_148dbdeea body=38 status=ok
// SIG undefined FUN_148dbdeea(void)

undefined8 FUN_148dbdeea(undefined8 param_1,int param_2)

{
  FUN_141495c9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dbdf10 FUN_148dbdf10 body=162 status=ok
// SIG undefined FUN_148dbdf10(void)

void FUN_148dbdf10(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148dbdf4f;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148dbdf4f;
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
LAB_148dbdf4f:
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
                    /* WARNING: Could not recover jumptable at 0x000148dbdfae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148dbdfb2 FUN_148dbdfb2 body=31 status=ok
// SIG undefined FUN_148dbdfb2(void)

undefined8 FUN_148dbdfb2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dbdfec FUN_148dbdfec body=29 status=ok
// SIG undefined FUN_148dbdfec(void)

bool FUN_148dbdfec(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148dbe00a FUN_148dbe00a body=26 status=ok
// SIG undefined FUN_148dbe00a(void)

bool FUN_148dbe00a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148dbe024 FUN_148dbe024 body=24 status=ok
// SIG undefined FUN_148dbe024(void)

bool FUN_148dbe024(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148dbe03c FUN_148dbe03c body=101 status=ok
// SIG undefined FUN_148dbe03c(void)

void FUN_148dbe03c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9948b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dbe0a2 FUN_148dbe0a2 body=101 status=ok
// SIG undefined FUN_148dbe0a2(void)

void FUN_148dbe0a2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9948b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dbe108 FUN_148dbe108 body=134 status=ok
// SIG undefined FUN_148dbe108(void)

void FUN_148dbe108(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9948b0;
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
                    /* WARNING: Could not recover jumptable at 0x000148dbe17f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dbe18e FUN_148dbe18e body=42 status=ok
// SIG undefined FUN_148dbe18e(void)

void FUN_148dbe18e(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148dbe1b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148dbe1b8 FUN_148dbe1b8 body=154 status=ok
// SIG undefined FUN_148dbe1b8(void)

bool FUN_148dbe1b8(longlong param_1,undefined4 param_2)

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



// FUNCTION 148dbe26e FUN_148dbe26e body=101 status=ok
// SIG undefined FUN_148dbe26e(void)

void FUN_148dbe26e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b994920;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dbe2d4 FUN_148dbe2d4 body=101 status=ok
// SIG undefined FUN_148dbe2d4(void)

void FUN_148dbe2d4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b994920;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dbe33a FUN_148dbe33a body=134 status=ok
// SIG undefined FUN_148dbe33a(void)

void FUN_148dbe33a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b994920;
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
                    /* WARNING: Could not recover jumptable at 0x000148dbe3b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dbe3c0 FUN_148dbe3c0 body=31 status=ok
// SIG undefined FUN_148dbe3c0(void)

undefined8 FUN_148dbe3c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dbe3fa FUN_148dbe3fa body=101 status=ok
// SIG undefined FUN_148dbe3fa(void)

void FUN_148dbe3fa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b97b2d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b994990;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dbe460 FUN_148dbe460 body=101 status=ok
// SIG undefined FUN_148dbe460(void)

void FUN_148dbe460(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b97b2d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b994990;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dbe4c6 FUN_148dbe4c6 body=134 status=ok
// SIG undefined FUN_148dbe4c6(void)

void FUN_148dbe4c6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b97b2d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b994990;
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
                    /* WARNING: Could not recover jumptable at 0x000148dbe53d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dbe54c FUN_148dbe54c body=44 status=ok
// SIG undefined FUN_148dbe54c(void)

void FUN_148dbe54c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148dbe575. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148dbe578 FUN_148dbe578 body=31 status=ok
// SIG undefined FUN_148dbe578(void)

undefined8 FUN_148dbe578(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dbe5b2 FUN_148dbe5b2 body=101 status=ok
// SIG undefined FUN_148dbe5b2(void)

void FUN_148dbe5b2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9955b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b994a00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dbe618 FUN_148dbe618 body=101 status=ok
// SIG undefined FUN_148dbe618(void)

void FUN_148dbe618(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9955b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b994a00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dbe67e FUN_148dbe67e body=134 status=ok
// SIG undefined FUN_148dbe67e(void)

void FUN_148dbe67e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9955b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b994a00;
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
                    /* WARNING: Could not recover jumptable at 0x000148dbe6f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dbe704 FUN_148dbe704 body=44 status=ok
// SIG undefined FUN_148dbe704(void)

void FUN_148dbe704(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148dbe72d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148dbe732 FUN_148dbe732 body=31 status=ok
// SIG undefined FUN_148dbe732(void)

undefined8 FUN_148dbe732(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dbe76c FUN_148dbe76c body=26 status=ok
// SIG undefined FUN_148dbe76c(void)

bool FUN_148dbe76c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148dbe786 FUN_148dbe786 body=101 status=ok
// SIG undefined FUN_148dbe786(void)

void FUN_148dbe786(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b994ae0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b994a70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dbe7ec FUN_148dbe7ec body=101 status=ok
// SIG undefined FUN_148dbe7ec(void)

void FUN_148dbe7ec(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b994ae0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b994a70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dbe852 FUN_148dbe852 body=134 status=ok
// SIG undefined FUN_148dbe852(void)

void FUN_148dbe852(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b994ae0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b994a70;
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
                    /* WARNING: Could not recover jumptable at 0x000148dbe8c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dbe8d8 FUN_148dbe8d8 body=42 status=ok
// SIG undefined FUN_148dbe8d8(void)

void FUN_148dbe8d8(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148dbe8ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148dbe904 FUN_148dbe904 body=31 status=ok
// SIG undefined FUN_148dbe904(void)

undefined8 FUN_148dbe904(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dbe93e FUN_148dbe93e body=26 status=ok
// SIG undefined FUN_148dbe93e(void)

bool FUN_148dbe93e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148dbe958 FUN_148dbe958 body=101 status=ok
// SIG undefined FUN_148dbe958(void)

void FUN_148dbe958(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b994bc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b994b50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dbe9be FUN_148dbe9be body=101 status=ok
// SIG undefined FUN_148dbe9be(void)

void FUN_148dbe9be(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b994bc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b994b50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dbea24 FUN_148dbea24 body=134 status=ok
// SIG undefined FUN_148dbea24(void)

void FUN_148dbea24(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b994bc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b994b50;
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
                    /* WARNING: Could not recover jumptable at 0x000148dbea9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dbeaaa FUN_148dbeaaa body=42 status=ok
// SIG undefined FUN_148dbeaaa(void)

void FUN_148dbeaaa(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148dbead1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148dbead6 FUN_148dbead6 body=31 status=ok
// SIG undefined FUN_148dbead6(void)

undefined8 FUN_148dbead6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dbeb10 FUN_148dbeb10 body=101 status=ok
// SIG undefined FUN_148dbeb10(void)

void FUN_148dbeb10(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e62a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b994c30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dbeb76 FUN_148dbeb76 body=101 status=ok
// SIG undefined FUN_148dbeb76(void)

void FUN_148dbeb76(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e62a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b994c30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dbebdc FUN_148dbebdc body=134 status=ok
// SIG undefined FUN_148dbebdc(void)

void FUN_148dbebdc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e62a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b994c30;
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
                    /* WARNING: Could not recover jumptable at 0x000148dbec53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dbec62 FUN_148dbec62 body=62 status=ok
// SIG undefined FUN_148dbec62(void)

void FUN_148dbec62(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148dbec9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148dbecba FUN_148dbecba body=29 status=ok
// SIG undefined FUN_148dbecba(void)

bool FUN_148dbecba(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148dbecd8 FUN_148dbecd8 body=26 status=ok
// SIG undefined FUN_148dbecd8(void)

bool FUN_148dbecd8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148dbecf2 FUN_148dbecf2 body=101 status=ok
// SIG undefined FUN_148dbecf2(void)

void FUN_148dbecf2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a78e0f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b994d80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dbed58 FUN_148dbed58 body=134 status=ok
// SIG undefined FUN_148dbed58(void)

void FUN_148dbed58(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a78e0f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b994d80;
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
                    /* WARNING: Could not recover jumptable at 0x000148dbedcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dbedde FUN_148dbedde body=52 status=ok
// SIG undefined FUN_148dbedde(void)

void FUN_148dbedde(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148dbee0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148dbee12 FUN_148dbee12 body=31 status=ok
// SIG undefined FUN_148dbee12(void)

undefined8 FUN_148dbee12(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dbee4c FUN_148dbee4c body=29 status=ok
// SIG undefined FUN_148dbee4c(void)

bool FUN_148dbee4c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148dbee6a FUN_148dbee6a body=26 status=ok
// SIG undefined FUN_148dbee6a(void)

bool FUN_148dbee6a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148dbee84 FUN_148dbee84 body=101 status=ok
// SIG undefined FUN_148dbee84(void)

void FUN_148dbee84(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b982140;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b994df0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dbeeea FUN_148dbeeea body=101 status=ok
// SIG undefined FUN_148dbeeea(void)

void FUN_148dbeeea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b982140;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b994df0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dbef50 FUN_148dbef50 body=134 status=ok
// SIG undefined FUN_148dbef50(void)

void FUN_148dbef50(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b982140;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b994df0;
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
                    /* WARNING: Could not recover jumptable at 0x000148dbefc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dbefd6 FUN_148dbefd6 body=44 status=ok
// SIG undefined FUN_148dbefd6(void)

void FUN_148dbefd6(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148dbefff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148dbf01c FUN_148dbf01c body=29 status=ok
// SIG undefined FUN_148dbf01c(void)

bool FUN_148dbf01c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148dbf03a FUN_148dbf03a body=26 status=ok
// SIG undefined FUN_148dbf03a(void)

bool FUN_148dbf03a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148dbf054 FUN_148dbf054 body=24 status=ok
// SIG undefined FUN_148dbf054(void)

bool FUN_148dbf054(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148dbf06c FUN_148dbf06c body=101 status=ok
// SIG undefined FUN_148dbf06c(void)

void FUN_148dbf06c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b994e60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dbf0d2 FUN_148dbf0d2 body=134 status=ok
// SIG undefined FUN_148dbf0d2(void)

void FUN_148dbf0d2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4665f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b994e60;
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
                    /* WARNING: Could not recover jumptable at 0x000148dbf149. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dbf158 FUN_148dbf158 body=44 status=ok
// SIG undefined FUN_148dbf158(void)

void FUN_148dbf158(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148dbf181. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148dbf184 FUN_148dbf184 body=31 status=ok
// SIG undefined FUN_148dbf184(void)

undefined8 FUN_148dbf184(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dbf1be FUN_148dbf1be body=101 status=ok
// SIG undefined FUN_148dbf1be(void)

void FUN_148dbf1be(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8bcc20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b994ed0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dbf224 FUN_148dbf224 body=101 status=ok
// SIG undefined FUN_148dbf224(void)

void FUN_148dbf224(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8bcc20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b994ed0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dbf28a FUN_148dbf28a body=134 status=ok
// SIG undefined FUN_148dbf28a(void)

void FUN_148dbf28a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a8bcc20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b994ed0;
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
                    /* WARNING: Could not recover jumptable at 0x000148dbf301. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dbf310 FUN_148dbf310 body=52 status=ok
// SIG undefined FUN_148dbf310(void)

void FUN_148dbf310(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148dbf341. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148dbf344 FUN_148dbf344 body=31 status=ok
// SIG undefined FUN_148dbf344(void)

undefined8 FUN_148dbf344(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dbf37e FUN_148dbf37e body=101 status=ok
// SIG undefined FUN_148dbf37e(void)

void FUN_148dbf37e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8bcd00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b994f40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dbf3e4 FUN_148dbf3e4 body=101 status=ok
// SIG undefined FUN_148dbf3e4(void)

void FUN_148dbf3e4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8bcd00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b994f40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dbf44a FUN_148dbf44a body=134 status=ok
// SIG undefined FUN_148dbf44a(void)

void FUN_148dbf44a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a8bcd00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b994f40;
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
                    /* WARNING: Could not recover jumptable at 0x000148dbf4c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dbf4d0 FUN_148dbf4d0 body=52 status=ok
// SIG undefined FUN_148dbf4d0(void)

void FUN_148dbf4d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148dbf501. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148dbf504 FUN_148dbf504 body=31 status=ok
// SIG undefined FUN_148dbf504(void)

undefined8 FUN_148dbf504(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dbf53e FUN_148dbf53e body=29 status=ok
// SIG undefined FUN_148dbf53e(void)

bool FUN_148dbf53e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148dbf55c FUN_148dbf55c body=26 status=ok
// SIG undefined FUN_148dbf55c(void)

bool FUN_148dbf55c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148dbf576 FUN_148dbf576 body=101 status=ok
// SIG undefined FUN_148dbf576(void)

void FUN_148dbf576(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e063e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b994fb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dbf5dc FUN_148dbf5dc body=101 status=ok
// SIG undefined FUN_148dbf5dc(void)

void FUN_148dbf5dc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e063e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b994fb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dbf642 FUN_148dbf642 body=134 status=ok
// SIG undefined FUN_148dbf642(void)

void FUN_148dbf642(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e063e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b994fb0;
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
                    /* WARNING: Could not recover jumptable at 0x000148dbf6b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dbf6c8 FUN_148dbf6c8 body=44 status=ok
// SIG undefined FUN_148dbf6c8(void)

void FUN_148dbf6c8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148dbf6f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148dbf6f4 FUN_148dbf6f4 body=31 status=ok
// SIG undefined FUN_148dbf6f4(void)

undefined8 FUN_148dbf6f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dbf72e FUN_148dbf72e body=29 status=ok
// SIG undefined FUN_148dbf72e(void)

bool FUN_148dbf72e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148dbf74c FUN_148dbf74c body=26 status=ok
// SIG undefined FUN_148dbf74c(void)

bool FUN_148dbf74c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148dbf766 FUN_148dbf766 body=101 status=ok
// SIG undefined FUN_148dbf766(void)

void FUN_148dbf766(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ca0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b995020;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dbf7cc FUN_148dbf7cc body=134 status=ok
// SIG undefined FUN_148dbf7cc(void)

void FUN_148dbf7cc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ca0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b995020;
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
                    /* WARNING: Could not recover jumptable at 0x000148dbf843. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dbf852 FUN_148dbf852 body=62 status=ok
// SIG undefined FUN_148dbf852(void)

void FUN_148dbf852(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148dbf88d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148dbf890 FUN_148dbf890 body=48 status=ok
// SIG undefined FUN_148dbf890(void)

void FUN_148dbf890(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xc,4);
  }
  return;
}



// FUNCTION 148dbf8c0 FUN_148dbf8c0 body=31 status=ok
// SIG undefined FUN_148dbf8c0(void)

undefined8 FUN_148dbf8c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dbf8fa FUN_148dbf8fa body=29 status=ok
// SIG undefined FUN_148dbf8fa(void)

bool FUN_148dbf8fa(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148dbf918 FUN_148dbf918 body=26 status=ok
// SIG undefined FUN_148dbf918(void)

bool FUN_148dbf918(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148dbf932 FUN_148dbf932 body=101 status=ok
// SIG undefined FUN_148dbf932(void)

void FUN_148dbf932(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b995350;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9952e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dbf998 FUN_148dbf998 body=101 status=ok
// SIG undefined FUN_148dbf998(void)

void FUN_148dbf998(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b995350;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9952e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dbf9fe FUN_148dbf9fe body=134 status=ok
// SIG undefined FUN_148dbf9fe(void)

void FUN_148dbf9fe(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b995350;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9952e0;
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
                    /* WARNING: Could not recover jumptable at 0x000148dbfa75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dbfa84 FUN_148dbfa84 body=44 status=ok
// SIG undefined FUN_148dbfa84(void)

void FUN_148dbfa84(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148dbfaad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148dbfab2 FUN_148dbfab2 body=62 status=ok
// SIG undefined FUN_148dbfab2(void)

void FUN_148dbfab2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148dbfaf0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xe8,8);
  }
  return;
}



// FUNCTION 148dbfaf0 FUN_148dbfaf0 body=110 status=ok
// SIG undefined FUN_148dbfaf0(void)

ulonglong FUN_148dbfaf0(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xe8) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148dbfb29;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xe8,8);
      param_2 = param_2 / 0xe8;
    }
  }
LAB_148dbfb29:
  return param_2 & 0xffffffff;
}



// FUNCTION 148dbfb5e FUN_148dbfb5e body=73 status=ok
// SIG undefined FUN_148dbfb5e(void)

longlong * FUN_148dbfb5e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  FUN_1406fd608(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 148dbfba8 FUN_148dbfba8 body=146 status=ok
// SIG undefined FUN_148dbfba8(void)

void FUN_148dbfba8(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
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
    uVar5 = FUN_144a3809e(lVar4 * 0xe8,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x8d3dcb08d3dcb09),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0xe8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148dbfc3c FUN_148dbfc3c body=211 status=ok
// SIG undefined FUN_148dbfc3c(void)

void FUN_148dbfc3c(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar8 = false;
  do {
    lVar6 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar6) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar6), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4,param_5),
           cVar4 != '\0'))) {
      lVar6 = lVar6 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar8) {
          return;
        }
        goto LAB_148dbfce1;
      }
    }
    uVar5 = uVar7 - 1;
    bVar8 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148dbfce1:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148dbfd10 FUN_148dbfd10 body=31 status=ok
// SIG undefined FUN_148dbfd10(void)

undefined8 FUN_148dbfd10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dbfd4a FUN_148dbfd4a body=101 status=ok
// SIG undefined FUN_148dbfd4a(void)

void FUN_148dbfd4a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b961ce0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9953c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dbfdb0 FUN_148dbfdb0 body=101 status=ok
// SIG undefined FUN_148dbfdb0(void)

void FUN_148dbfdb0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b961ce0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9953c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dbfe16 FUN_148dbfe16 body=134 status=ok
// SIG undefined FUN_148dbfe16(void)

void FUN_148dbfe16(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b961ce0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9953c0;
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
                    /* WARNING: Could not recover jumptable at 0x000148dbfe8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dbfe9c FUN_148dbfe9c body=62 status=ok
// SIG undefined FUN_148dbfe9c(void)

void FUN_148dbfe9c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148dbfed7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148dbfeda FUN_148dbfeda body=150 status=ok
// SIG undefined FUN_148dbfeda(void)

void FUN_148dbfeda(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0xf8);
  if (param_2 <= (int)uVar1) {
    uVar5 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0xfc) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x78,0);
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar4 / 0x78)) {
        uVar5 = uVar4 / 0x78 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0xfc) = (int)uVar5;
    FUN_148b83896(param_1,param_2,uVar5,0x78);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148dbff72 FUN_148dbff72 body=116 status=ok
// SIG undefined FUN_148dbff72(void)

void FUN_148dbff72(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x68);
  if (param_2 <= (int)uVar1) {
    uVar4 = 3;
    if (3 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (3 < *(uint *)(param_1 + 0x6c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 5,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 5)) {
        uVar4 = uVar2 >> 5 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x6c) = (int)uVar4;
    FUN_148b8398e(param_1,param_2,uVar4,0x20);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 148dbffe8 FUN_148dbffe8 body=164 status=ok
// SIG undefined FUN_148dbffe8(void)

void FUN_148dbffe8(longlong *param_1,undefined8 param_2)

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
        goto LAB_148dc0068;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148dc0068:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148dc00a6 FUN_148dc00a6 body=29 status=ok
// SIG undefined FUN_148dc00a6(void)

bool FUN_148dc00a6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148dc00c4 FUN_148dc00c4 body=26 status=ok
// SIG undefined FUN_148dc00c4(void)

bool FUN_148dc00c4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148dc00de FUN_148dc00de body=101 status=ok
// SIG undefined FUN_148dc00de(void)

void FUN_148dc00de(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b995690;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dc0144 FUN_148dc0144 body=134 status=ok
// SIG undefined FUN_148dc0144(void)

void FUN_148dc0144(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e6310;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b995690;
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
                    /* WARNING: Could not recover jumptable at 0x000148dc01bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dc01ca FUN_148dc01ca body=68 status=ok
// SIG undefined FUN_148dc01ca(void)

void FUN_148dc01ca(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148dc020b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148dc020e FUN_148dc020e body=89 status=ok
// SIG undefined FUN_148dc020e(void)

void FUN_148dc020e(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140188694(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x20;
  *(undefined4 *)(lVar2 + lVar4) = 4;
  plVar3 = (longlong *)*param_2;
  *(longlong **)(lVar2 + 0x10 + lVar4) = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(int *)(lVar2 + lVar4 + 0x18) = (int)param_2[1];
  return;
}



// FUNCTION 148dc026a FUN_148dc026a body=516 status=ok
// SIG undefined FUN_148dc026a(void)

void FUN_148dc026a(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined1 local_78 [72];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[1] != 0) {
    FUN_1458e7bbe(param_1);
  }
  if (*param_1 == 0) goto LAB_148dc0400;
  if (*(longlong *)(param_2 + 0x3f70) != 0) {
    lVar1 = FUN_148cd08c6(*(longlong *)(param_2 + 0x3f70) + 0x1030);
    param_1[2] = lVar1;
  }
  lVar1 = (**(code **)(*(longlong *)(param_2 + 0x1118) + 0x20))(param_2 + 0x1118);
  if (lVar1 != 0) {
    FUN_140ba2cd0(lVar1,&DAT_14cbcffec,1);
  }
  if (*(longlong *)(&DAT_00006850 + param_2) != 0) {
    FUN_14035bd78(*(longlong *)(&DAT_00006850 + param_2),4,1);
  }
  FUN_1400bc96c(param_2 + 0x28b0,&DAT_14cbcffec);
  lVar1 = FUN_144a782da(param_2 + 0x1808,&DAT_14cb72620);
  if (lVar1 != 0) {
    lVar2 = *param_1;
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar2);
    }
    local_80 = 0;
    FUN_14485c47a(&local_80,lVar2);
    FUN_14598098a(local_78,&local_80);
    FUN_1406ebff6(lVar1,4,local_78);
  }
  if (DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  param_1[1] = param_2;
  if (*(char *)(param_2 + 0x178) == '\x03') {
    FUN_1414b167c(*param_1,param_2);
  }
  if (0 < *(int *)(param_2 + 0x6190)) {
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x6188) + 0x20);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    else if (lVar1 == 0) goto LAB_148dc03e6;
    lVar2 = FUN_144a7a5f4();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_148f17644(lVar1,*param_1);
    }
  }
LAB_148dc03e6:
  FUN_140e0e422(param_1);
  FUN_148bf6fac(param_2 + 0x89a8,*param_1);
LAB_148dc0400:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc0470 FUN_148dc0470 body=120 status=ok
// SIG undefined FUN_148dc0470(void)

void FUN_148dc0470(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(longlong *)(param_1 + 8) != 0) &&
     (lVar1 = *(longlong *)(&DAT_00006850 + *(longlong *)(param_1 + 8)), lVar1 != 0)) {
    if (0 < *(int *)(lVar1 + 0x14b8)) {
      local_18 = &DAT_14cbcffec;
      FUN_140b042ce(lVar1 + 0x1430);
    }
    FUN_14483674a(lVar1 + 0x1288);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc04ea FUN_148dc04ea body=28 status=ok
// SIG undefined FUN_148dc04ea(void)

void FUN_148dc04ea(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  FUN_145cda230(param_1);
  return;
}


