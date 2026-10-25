// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1470db514 FUN_1470db514 body=262 status=ok
// SIG undefined FUN_1470db514(void)

void FUN_1470db514(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar5 = FUN_141211ffe();
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar6 = FUN_14479d2ce(param_2);
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14a1c8700;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_40[2] = lVar7;
  *local_40 = &PTR_FUN_14a1c8190;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,uVar6);
  puVar3[4] = uVar1;
  puVar3[5] = uVar2;
  FUN_140c67310(uVar5,local_48,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470db61c FUN_1470db61c body=42 status=ok
// SIG undefined FUN_1470db61c(void)

void FUN_1470db61c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_141211ffe();
  uVar2 = FUN_14479d2ce(param_2);
  FUN_140457ffc(uVar1,uVar2);
  return;
}



// FUNCTION 1470db646 FUN_1470db646 body=21 status=ok
// SIG undefined FUN_1470db646(void)

void FUN_1470db646(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141211ffe();
  FUN_1448a8284(uVar1);
  return;
}



// FUNCTION 1470db65c FUN_1470db65c body=22 status=ok
// SIG undefined FUN_1470db65c(void)

undefined8 FUN_1470db65c(undefined8 param_1)

{
  FUN_1413f3c00();
  return param_1;
}



// FUNCTION 1470db672 FUN_1470db672 body=12 status=ok
// SIG undefined FUN_1470db672(void)

void FUN_1470db672(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = *(undefined4 *)(param_1 + 4);
  *param_3 = *(undefined4 *)(param_1 + 8);
  return;
}



// FUNCTION 1470db67e FUN_1470db67e body=28 status=ok
// SIG undefined FUN_1470db67e(void)

undefined8 FUN_1470db67e(undefined8 param_1,undefined8 param_2)

{
  FUN_1470b0e96(param_2,param_1);
  return param_1;
}



// FUNCTION 1470db69a FUN_1470db69a body=4 status=ok
// SIG undefined FUN_1470db69a(void)

undefined4 FUN_1470db69a(longlong param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



// FUNCTION 1470db69e FUN_1470db69e body=8 status=ok
// SIG undefined FUN_1470db69e(void)

void FUN_1470db69e(undefined8 param_1,longlong param_2)

{
  FUN_144a7d382(param_1,*(undefined4 *)(param_2 + 4));
  return;
}



// FUNCTION 1470db6a6 thunk_FUN_144a7d382 body=5 status=ok
// SIG undefined thunk_FUN_144a7d382(void)

bool thunk_FUN_144a7d382(longlong param_1,int param_2)

{
  return *(int *)(param_1 + 4) == param_2;
}



// FUNCTION 1470db6ac FUN_1470db6ac body=262 status=ok
// SIG undefined FUN_1470db6ac(void)

void FUN_1470db6ac(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar5 = FUN_141211ffe();
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar6 = FUN_14479d2ce(param_2);
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14a1c8700;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_40[2] = lVar7;
  *local_40 = &PTR_FUN_14a1c8200;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,uVar6);
  puVar3[4] = uVar1;
  puVar3[5] = uVar2;
  FUN_140c67310(uVar5,local_48,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470db7b4 FUN_1470db7b4 body=42 status=ok
// SIG undefined FUN_1470db7b4(void)

void FUN_1470db7b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_141211ffe();
  uVar2 = FUN_14479d2ce(param_2);
  FUN_140457ffc(uVar1,uVar2);
  return;
}



// FUNCTION 1470db7de FUN_1470db7de body=21 status=ok
// SIG undefined FUN_1470db7de(void)

void FUN_1470db7de(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141211ffe();
  FUN_1448a8284(uVar1);
  return;
}



// FUNCTION 1470db7f4 FUN_1470db7f4 body=28 status=ok
// SIG undefined FUN_1470db7f4(void)

undefined8 FUN_1470db7f4(undefined8 param_1,undefined8 param_2)

{
  FUN_14624635c(param_2,param_1);
  return param_1;
}



// FUNCTION 1470db810 FUN_1470db810 body=28 status=ok
// SIG undefined FUN_1470db810(void)

undefined8 FUN_1470db810(undefined8 param_1,undefined8 param_2)

{
  FUN_1470db82c(param_2,param_1);
  return param_1;
}



// FUNCTION 1470db82c FUN_1470db82c body=1089 status=ok
// SIG undefined FUN_1470db82c(void)

ulonglong * FUN_1470db82c(char *param_1,ulonglong *param_2)

{
  code *pcVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined8 ***pppuVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_128 [32];
  longlong local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 **local_a8;
  int local_a0;
  ushort local_90;
  byte local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *param_2 = 0;
  param_2[1] = 0;
  local_108 = 0;
  uStack_100 = 0;
  if ((longlong)*(int *)(param_1 + 0xb0) == 0) {
    fVar10 = 0.0;
  }
  else {
    lVar7 = (longlong)*(int *)(param_1 + 0xb0) * 0xa0;
    lVar6 = *(longlong *)(param_1 + 0xa8) + 0x50;
    fVar10 = 0.0;
    do {
      local_f8 = local_f8 & 0xffffffffffffff00;
      uStack_d0 = uStack_d0 & 0xffffffff00000000;
      FUN_14575a19a(&local_f8,0);
      FUN_1448729ea(lVar6,&local_a8,&local_f8);
      fVar9 = (float)FUN_144a7b41a(&local_a8,0);
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
      if (pcVar1 != (code *)0x0) {
        pppuVar5 = &local_a8;
        if (0x18 < local_90) {
          pppuVar5 = (undefined8 ***)local_a8;
        }
        (*pcVar1)(pppuVar5);
      }
      if (0x18 < local_90) {
        FUN_1400020a8(local_a8);
      }
      FUN_144a5ac3a(&local_f8);
      lVar8 = (longlong)(int)uStack_100;
      uVar4 = (int)uStack_100 + 1;
      uStack_100 = CONCAT44(uStack_100._4_4_,uVar4);
      if (uStack_100._4_4_ < uVar4) {
        FUN_14475e4ac(&local_108);
      }
      *(float *)(local_108 + lVar8 * 4) = fVar9;
      fVar10 = fVar10 + fVar9;
      lVar6 = lVar6 + 0xa0;
      lVar7 = lVar7 + -0xa0;
    } while (lVar7 != 0);
  }
  if (*param_1 == '\x01') {
    local_f8 = local_f8 & 0xffffffffffffff00;
    uStack_d0 = uStack_d0 & 0xffffffff00000000;
    FUN_14575a19a(&local_f8,0);
    FUN_1448729ea(param_1 + 0x58,&local_a8,&local_f8);
    fVar9 = (float)FUN_144a7b41a(&local_a8,0);
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppuVar5 = &local_a8;
      if (0x18 < local_90) {
        pppuVar5 = (undefined8 ***)local_a8;
      }
      (*pcVar1)(pppuVar5);
    }
    if (0x18 < local_90) {
      FUN_1400020a8(local_a8);
    }
    FUN_144a5ac3a(&local_f8);
    local_c8 = 0;
    local_b8 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    uStack_c0 = 0xf00000d0;
    uStack_b0 = 0x3f800000;
    cVar3 = FUN_1401b48d6(param_1 + 8,&local_f8);
    if ((cVar3 != '\0') && (*(int *)(param_1 + 0xb0) < 1)) goto LAB_1470dba91;
    FUN_14624635c(param_1 + 8,&local_f8);
    if (&local_f8 == param_2) {
      if (local_f8 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_f8;
      local_f8 = 0;
      *(int *)(param_2 + 1) = (int)uStack_f0;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_f0._4_4_;
    }
    if (*(int *)(param_1 + 0xb0) < 1) goto LAB_1470dba91;
    fVar10 = fVar10 + fVar9;
    FUN_1400020e8(param_2,&DAT_14a1c86cc,2);
  }
  if (0 < *(int *)(param_1 + 0xb0)) {
    lVar7 = 0;
    lVar6 = 0;
    do {
      if (1 < (int)param_2[1]) {
        FUN_1400020e8(param_2,&DAT_149e01f72,1);
      }
      fVar9 = 0.0;
      if (0.0 < fVar10) {
        fVar9 = (*(float *)(local_108 + lVar6 * 4) / fVar10) * 100.0;
      }
      FUN_14624635c(*(longlong *)(param_1 + 0xa8) + lVar7,&local_a8);
      pppuVar5 = (undefined8 ***)&DAT_149dfb77a;
      if (local_a0 != 0) {
        pppuVar5 = (undefined8 ***)local_a8;
      }
      FUN_140002266(&local_f8,L"%g%% chance of %s",(double)fVar9,pppuVar5);
      iVar2 = (int)uStack_f0 + -1;
      if ((int)uStack_f0 == 0) {
        iVar2 = 0;
      }
      FUN_1400020e8(param_2,local_f8,iVar2);
      if (local_f8 != 0) {
        FUN_1400020a8();
      }
      if ((undefined8 ***)local_a8 != (undefined8 ***)0x0) {
        FUN_1400020a8();
      }
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0xa0;
    } while (lVar6 < *(int *)(param_1 + 0xb0));
  }
LAB_1470dba91:
  if ((int)param_2[1] < 2) {
    FUN_14020fad6(param_2,&DAT_149e25dfc);
  }
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470dbc6e FUN_1470dbc6e body=50 status=ok
// SIG undefined FUN_1470dbc6e(void)

void FUN_1470dbc6e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1407ebc1c(&DAT_14c9a6470);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_14a1a0ad0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  return;
}



// FUNCTION 1470dbca0 FUN_1470dbca0 body=44 status=ok
// SIG undefined FUN_1470dbca0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1470dbca0(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14c9a647c = _DAT_14c9a647c + -1;
  *param_1 = DAT_14c9a6470;
  DAT_14c9a6470 = param_1;
  return;
}



// FUNCTION 1470dbccc FUN_1470dbccc body=50 status=ok
// SIG undefined FUN_1470dbccc(void)

void FUN_1470dbccc(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14a1a0ad0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}



// FUNCTION 1470dbcfe FUN_1470dbcfe body=189 status=ok
// SIG undefined FUN_1470dbcfe(void)

undefined8 FUN_1470dbcfe(longlong param_1,undefined8 param_2,longlong *param_3)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  longlong lStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(ulonglong *)(param_1 + 0xc);
  FUN_1401a700c(&local_48,10);
  if (uVar1 == (local_48 & 0xffffffff)) {
    lVar3 = FUN_1462a94c8();
    if (lVar3 != 0) {
      local_48 = CONCAT44(local_48._4_4_,*(undefined4 *)(param_1 + 8));
      cVar2 = FUN_1468ec2ac(&local_48,*(undefined8 *)(lVar3 + 0x18));
      if (cVar2 != '\0') {
        local_48 = 0;
        lStack_40 = 0;
        FUN_14483b62e(lVar3,param_2,&local_48,0);
        if (*param_3 != lStack_40) {
          param_3[2] = 0;
        }
        *param_3 = lStack_40;
        uVar4 = 1;
        goto LAB_1470dbd99;
      }
    }
  }
  uVar4 = 0;
LAB_1470dbd99:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470dbdbc FUN_1470dbdbc body=312 status=ok
// SIG undefined FUN_1470dbdbc(void)

undefined8 FUN_1470dbdbc(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined1 local_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 auStack_40 [2];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = FUN_14479d2ce(param_2 + 0x10);
  if (lVar1 != 0) {
    lVar2 = FUN_1446f4bba();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      lVar2 = FUN_1462a94c8();
      if (lVar1 == lVar2) {
        local_48 = 0;
        auStack_40[0] = 0;
        local_30 = *(undefined8 *)(lVar1 + 0x18);
        FUN_1400021e4(&local_30,&local_58);
        if ((int)param_1[1] == 0) {
          puVar4 = &DAT_149dfb77a;
        }
        else {
          puVar4 = (undefined2 *)*param_1;
        }
        local_70 = DAT_14c872be8;
        local_60 = 1;
        local_78 = 0;
        local_68 = &local_58;
        FUN_14115911a(lVar1,puVar4,&local_48,0);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        FUN_1400021e4(auStack_40,&local_58);
        if (&local_58 == param_1) {
          if (local_58 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*param_1 != 0) {
            FUN_1400020a8();
          }
          *param_1 = local_58;
          *(undefined4 *)(param_1 + 1) = local_50;
          *(undefined4 *)((longlong)param_1 + 0xc) = local_4c;
        }
        uVar3 = 1;
        goto LAB_1470dbe0a;
      }
    }
  }
  uVar3 = 0;
LAB_1470dbe0a:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470dbef6 FUN_1470dbef6 body=125 status=ok
// SIG undefined FUN_1470dbef6(void)

byte FUN_1470dbef6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  byte unaff_BL;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
  plVar4 = *(longlong **)(param_1 + 0x38);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  if (plVar3 != (longlong *)0x0) {
    unaff_BL = (**(code **)(*plVar3 + 0x10))(plVar3);
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
  return plVar3 != (longlong *)0x0 & unaff_BL;
}



// FUNCTION 1470dbf74 FUN_1470dbf74 body=135 status=ok
// SIG undefined FUN_1470dbf74(void)

void FUN_1470dbf74(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  
  cVar3 = FUN_1447f8eee(param_2);
  if (cVar3 != '\0') {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_1400832a0(param_1 + 0x18,iVar2);
  }
  lVar4 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x48);
  }
  puVar1 = (undefined1 *)(lVar4 + (longlong)iVar2 * 0x30);
  *puVar1 = 0;
  FUN_1447f8f6a(lVar4 + (longlong)iVar2 * 0x30,param_2);
  FUN_1447f8ea6(puVar1 + 0x28,param_2 + 0x28);
  return;
}



// FUNCTION 1470dbffc FUN_1470dbffc body=264 status=ok
// SIG undefined FUN_1470dbffc(void)

void FUN_1470dbffc(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 ****ppppuVar2;
  undefined4 uVar3;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [40];
  undefined4 local_80;
  undefined8 ***local_78 [3];
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8[0] = 0;
  local_80 = 0;
  FUN_1456bb102(local_a8,param_3);
  FUN_1448729ea(param_1 + 0x20,local_78,local_a8);
  uVar3 = FUN_144a7b41a(local_78,0);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
  if (pcVar1 != (code *)0x0) {
    ppppuVar2 = local_78;
    if (0x18 < local_60) {
      ppppuVar2 = (undefined8 ****)local_78[0];
    }
    (*pcVar1)(ppppuVar2);
  }
  if (0x18 < local_60) {
    FUN_1400020a8(local_78[0]);
  }
  FUN_144a5ac3a(local_a8);
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x18))(param_2,param_4,*(undefined1 *)(param_1 + 0x18),uVar3);
  }
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470dc106 FUN_1470dc106 body=236 status=ok
// SIG undefined FUN_1470dc106(void)

ulonglong FUN_1470dc106(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined1 auStack_98 [32];
  uint local_78 [2];
  undefined8 local_70;
  longlong *plStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = *(ulonglong *)(param_2 + 0xc);
  FUN_1401a700c(local_78,0x31);
  if (uVar4 == local_78[0]) {
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    FUN_14041e7fb(param_3,&local_40);
    uVar4 = CONCAT71((int7)((ulonglong)param_3 >> 8),local_38 == -0xfffff30);
    if (local_38 == -0xfffff30) {
      local_78[0] = local_78[0] & 0xffffff00;
      local_70 = 0;
      plStack_68 = (longlong *)0x0;
      local_60 = 0;
      local_58 = local_40;
      local_50 = 0xf00000d0;
      local_48 = 0;
      FUN_140e3f0da(param_1,local_78);
      plVar3 = plStack_68;
      if (plStack_68 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_68 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_68)(plStack_68);
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
  }
  else {
    uVar4 = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470dc1f4 FUN_1470dc1f4 body=205 status=ok
// SIG undefined FUN_1470dc1f4(void)

void FUN_1470dc1f4(char *param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  longlong *local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar3 = *param_1;
  if (cVar3 == '\x01') {
    FUN_1401697d6(param_1 + 8,&local_20);
    if (local_20 != (longlong *)0x0) {
      (**(code **)(*local_20 + 0x38))();
    }
  }
  else {
    if (cVar3 != '\x02') {
      if (cVar3 == '\0') {
        lVar4 = FUN_144873cc0(param_1 + 0x20);
        if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
        }
      }
      goto LAB_1470dc2b2;
    }
    FUN_140169748(param_1 + 8,&local_20);
    if (local_20 != (longlong *)0x0) {
      FUN_140103674();
    }
  }
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
LAB_1470dc2b2:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470dc2d0 FUN_1470dc2d0 body=237 status=ok
// SIG undefined FUN_1470dc2d0(void)

undefined8 * FUN_1470dc2d0(char *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar3 = *param_1;
  if (cVar3 == '\x02') {
    FUN_140169748(param_1 + 8,&local_38);
  }
  else {
    if (cVar3 != '\x01') {
      if (cVar3 != '\0') goto LAB_1470dc3a0;
      local_38 = *(longlong **)(param_1 + 0x20);
      FUN_1400021e4(&local_38,param_2);
      goto LAB_1470dc389;
    }
    FUN_1401697d6(param_1 + 8,&local_38);
  }
  plVar4 = local_38;
  if (local_38 != (longlong *)0x0) {
    lVar5 = (**(code **)(*local_38 + 8))(local_38);
    local_28 = *(undefined8 *)(lVar5 + 0x18);
    FUN_1400021e4(&local_28,param_2);
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
  if (plVar4 == (longlong *)0x0) {
LAB_1470dc3a0:
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
LAB_1470dc389:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1470dc3be FUN_1470dc3be body=55 status=ok
// SIG undefined FUN_1470dc3be(void)

undefined1 FUN_1470dc3be(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_144873cc0(param_1 + 0x30);
  if (lVar2 != 0) {
    uVar1 = FUN_140103674(lVar2);
    return uVar1;
  }
  FUN_1459b61e8(param_1 + 8);
  return 3;
}



// FUNCTION 1470dc3f6 FUN_1470dc3f6 body=59 status=ok
// SIG undefined FUN_1470dc3f6(void)

void FUN_1470dc3f6(longlong param_1)

{
  longlong lVar1;
  
  if (-1 < *(int *)(param_1 + 0x44)) {
    lVar1 = *(longlong *)(param_1 + 0x38);
    if (*(longlong *)(param_1 + 0x38) == 0) {
      lVar1 = param_1;
    }
    FUN_14053dda4(lVar1,*(undefined4 *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x40) = 0;
    return;
  }
  FUN_14053dd1e(param_1);
  return;
}



// FUNCTION 1470dc440 FUN_1470dc440 body=32 status=ok
// SIG undefined FUN_1470dc440(void)

undefined8 FUN_1470dc440(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 1470dc460 FUN_1470dc460 body=47 status=ok
// SIG undefined FUN_1470dc460(void)

void FUN_1470dc460(longlong param_1,undefined8 param_2)

{
  FUN_140c41132(param_1 + 0x78);
  FUN_14030896c(param_1,param_2,*(undefined1 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
  return;
}



// FUNCTION 1470dc490 FUN_1470dc490 body=107 status=ok
// SIG undefined FUN_1470dc490(void)

undefined8 FUN_1470dc490(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400b22c2(local_28,&DAT_149e02088);
  FUN_140ba7826(param_2,L"*Auto Refreshing* ",local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470dc50a FUN_1470dc50a body=389 status=ok
// SIG undefined FUN_1470dc50a(void)

longlong * FUN_1470dc50a(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  undefined8 *_Dst;
  undefined8 ****ppppuVar4;
  undefined1 *puVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auStack_d8 [40];
  undefined8 ***local_b0 [3];
  ushort local_98;
  byte local_90;
  undefined1 local_88 [48];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1400606f6(local_88);
  puVar5 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar5 = local_88;
  }
  if ((longlong)local_50 != 0) {
    lVar7 = (longlong)local_50 * 0x30;
    do {
      FUN_1400603ec(local_b0,param_2,puVar5);
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_140a4bb3a(param_1,iVar2);
      }
      puVar1 = (undefined8 *)(*param_1 + (longlong)iVar2 * 0x28);
      uVar6 = (uint)local_90;
      *(ushort *)(puVar1 + 3) = local_98;
      _Dst = puVar1;
      ppppuVar4 = local_b0;
      if (0x18 < local_98) {
        _Dst = (undefined8 *)FUN_14001cc68(local_98,0);
        *puVar1 = _Dst;
        ppppuVar4 = (undefined8 ****)local_b0[0];
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar6 * 0x120));
      if (pcVar3 == (code *)0x0) {
        memcpy(_Dst,ppppuVar4,
               (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar6 * 0x120)));
      }
      else {
        (*pcVar3)();
      }
      *(byte *)(puVar1 + 4) = local_90;
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
      if (pcVar3 != (code *)0x0) {
        ppppuVar4 = local_b0;
        if (0x18 < local_98) {
          ppppuVar4 = (undefined8 ****)local_b0[0];
        }
        (*pcVar3)(ppppuVar4);
      }
      if (0x18 < local_98) {
        FUN_1400020a8(local_b0[0]);
      }
      puVar5 = puVar5 + 0x30;
      lVar7 = lVar7 + -0x30;
    } while (lVar7 != 0);
  }
  FUN_1446fdf24(local_88);
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1470dc690 FUN_1470dc690 body=19 status=ok
// SIG undefined FUN_1470dc690(void)

void FUN_1470dc690(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001470dc69f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 1470dc6cc FUN_1470dc6cc body=42 status=ok
// SIG undefined FUN_1470dc6cc(void)

void FUN_1470dc6cc(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1447262c2(param_3);
  FUN_1414fd5fa(uVar1,param_1 + 0x10,param_1 + 0x1c);
  return;
}



// FUNCTION 1470dc6f6 FUN_1470dc6f6 body=431 status=ok
// SIG undefined FUN_1470dc6f6(void)

undefined8 FUN_1470dc6f6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_c8 [32];
  undefined8 **local_a8 [3];
  ushort local_90;
  byte local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_140168de2(param_1 + 8,local_a8,param_4);
  fVar5 = (float)FUN_144a7ecd0(local_a8);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_a8;
    if (0x18 < local_90) {
      pppuVar2 = (undefined8 ***)local_a8[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_90) {
    FUN_1400020a8(local_a8[0]);
  }
  if ((longlong)*(int *)(param_1 + 0x98) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x90);
    lVar3 = (longlong)*(int *)(param_1 + 0x98) * 0xa0;
    do {
      FUN_1448729ea(lVar4,local_a8,param_4);
      fVar6 = (float)FUN_144a7ecd0(local_a8);
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
      if (pcVar1 != (code *)0x0) {
        pppuVar2 = local_a8;
        if (0x18 < local_90) {
          pppuVar2 = (undefined8 ***)local_a8[0];
        }
        (*pcVar1)(pppuVar2);
      }
      if (0x18 < local_90) {
        FUN_1400020a8(local_a8[0]);
      }
      if (ABS(fVar6 - fVar5) <= 1e-08) {
        param_1 = lVar4 + 0x50;
        goto LAB_1470dc849;
      }
      lVar4 = lVar4 + 0xa0;
      lVar3 = lVar3 + -0xa0;
    } while (lVar3 != 0);
  }
  param_1 = param_1 + 0x40;
LAB_1470dc849:
  FUN_1448729ea(param_1,param_2,param_4);
  if ((local_80 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470dc8c8 FUN_1470dc8c8 body=68 status=ok
// SIG undefined FUN_1470dc8c8(void)

undefined4 FUN_1470dc8c8(longlong param_1)

{
  float fVar1;
  uint uVar2;
  undefined4 uVar3;
  
  fVar1 = *(float *)(param_1 + 0x10);
  if (fVar1 <= 0.0) {
    uVar3 = 0;
  }
  else {
    uVar2 = rand();
    uVar3 = CONCAT31((int3)((uVar2 & 0x7fff) >> 8),(float)(uVar2 & 0x7fff) / 32767.0 <= fVar1);
  }
  return uVar3;
}



// FUNCTION 1470dc92e FUN_1470dc92e body=96 status=ok
// SIG undefined FUN_1470dc92e(void)

undefined8 FUN_1470dc92e(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_142b38b3c(param_1 + 8);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    local_1c = 0xffffffff;
    local_18 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = FUN_1470e0ba0(lVar1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470dc990 FUN_1470dc990 body=92 status=ok
// SIG undefined FUN_1470dc990(void)

undefined8 FUN_1470dc990(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_142b38b3c();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    local_1c = 0xffffffff;
    local_18 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = FUN_1470e0ba0(lVar1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470dc9fa FUN_1470dc9fa body=3 status=ok
// SIG undefined FUN_1470dc9fa(void)

undefined8 FUN_1470dc9fa(void)

{
  return 0;
}



// FUNCTION 1470dc9fe FUN_1470dc9fe body=584 status=ok
// SIG undefined FUN_1470dc9fe(void)

bool FUN_1470dc9fe(longlong param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  short *psVar6;
  longlong lVar7;
  short *psVar8;
  undefined8 uVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined1 local_80;
  longlong local_78;
  int local_70;
  undefined2 *local_68;
  ulonglong uStack_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = (undefined2 *)0x0;
  uStack_60 = 0;
  psVar6 = (short *)FUN_1401e9420(*param_2);
  if (psVar6 != (short *)0x0) {
    lVar1 = param_1 + 0x18;
    if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
      FUN_14063b348(lVar1);
      FUN_14063b48e(lVar1);
    }
    lVar7 = FUN_1462acf18();
    local_50 = *(undefined8 *)(lVar7 + 0x18);
    FUN_1400021e4(&local_50,&local_78);
    if ((int)uStack_60 == local_70) {
      bVar11 = true;
      if (1 < (int)uStack_60) {
        lVar7 = 0;
        while( true ) {
          uVar2 = *(ushort *)((longlong)local_68 + lVar7);
          uVar4 = (uint)uVar2;
          uVar3 = *(ushort *)(local_78 + lVar7);
          uVar10 = (uint)uVar3;
          if (uVar2 != uVar3) {
            if ((uVar3 | uVar2) < 0x80) {
              uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar3];
              if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_1470dcaff;
            }
            iVar5 = uVar4 - uVar10;
            goto LAB_1470dcc3c;
          }
          if (uVar2 == 0) break;
LAB_1470dcaff:
          lVar7 = lVar7 + 2;
        }
        iVar5 = 0;
LAB_1470dcc3c:
        bVar11 = iVar5 == 0;
      }
    }
    else {
      bVar11 = local_70 + (int)uStack_60 == 1;
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (bVar11) {
      *param_2 = (longlong)psVar6;
      if (*psVar6 == 0x28) {
        *param_2 = (longlong)(psVar6 + 1);
      }
      bVar11 = (longlong)uStack_60 < 0;
      uStack_60 = uStack_60 & 0xffffffff00000000;
      if (bVar11) {
        FUN_1446f8c06(&local_68,0);
      }
      if (local_68 != (undefined2 *)0x0) {
        *local_68 = 0;
      }
      psVar8 = (short *)FUN_1401e9420(*param_2,&local_68,1);
      *param_2 = (longlong)psVar8;
      if (psVar8 != (short *)0x0) {
        if (*psVar8 == 0x2c) {
          *param_2 = (longlong)(psVar8 + 1);
        }
        uVar9 = FUN_1410b878e();
        lVar7 = FUN_1410b878e();
        local_50 = *(undefined8 *)(lVar7 + 0x18);
        FUN_1400021e4(&local_50,&local_78);
        local_90 = param_5;
        local_80 = 1;
        local_98 = param_3;
        local_88 = &local_78;
        psVar8 = (short *)FUN_14115911a(uVar9,*param_2,lVar1,param_4);
        *param_2 = (longlong)psVar8;
        if (local_78 != 0) {
          FUN_1400020a8();
          psVar8 = (short *)*param_2;
        }
        if ((psVar8 != (short *)0x0) && (*psVar8 == 0x29)) {
          *param_2 = (longlong)(psVar8 + 1);
        }
      }
    }
    FUN_1457f673a(param_1,&local_68);
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return psVar6 != (short *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470dcc48 FUN_1470dcc48 body=148 status=ok
// SIG undefined FUN_1470dcc48(void)

undefined8 FUN_1470dcc48(longlong *param_1,longlong *param_2)

{
  float *pfVar1;
  float fVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  uVar3 = *(uint *)(param_1 + 1);
  if (uVar3 != *(uint *)(param_2 + 1)) {
    return 0;
  }
  if (0 < (int)uVar3) {
    lVar4 = *param_1;
    lVar5 = *param_2;
    lVar7 = 0;
    do {
      if (*(char *)(lVar4 + lVar7) != *(char *)(lVar5 + lVar7)) {
        return 0;
      }
      if (*(short *)(lVar4 + 0x10 + lVar7) != *(short *)(lVar5 + 0x10 + lVar7)) {
        return 0;
      }
      if (*(short *)(lVar4 + 0x12 + lVar7) != *(short *)(lVar5 + 0x12 + lVar7)) {
        return 0;
      }
      if (*(char *)(lVar4 + 1 + lVar7) != *(char *)(lVar5 + 1 + lVar7)) {
        return 0;
      }
      if (*(longlong *)(lVar4 + 4 + lVar7) != *(longlong *)(lVar5 + 4 + lVar7)) {
        return 0;
      }
      fVar2 = *(float *)(lVar4 + 0xc + lVar7);
      pfVar1 = (float *)(lVar5 + 0xc + lVar7);
      if (fVar2 != *pfVar1) {
        return 0;
      }
      if (NAN(fVar2) || NAN(*pfVar1)) {
        return 0;
      }
      lVar7 = lVar7 + 0x14;
    } while ((ulonglong)uVar3 * 0x14 != lVar7);
  }
  uVar6 = FUN_1470e2602(param_1 + 3,param_2 + 3);
  return uVar6;
}



// FUNCTION 1470dcce6 FUN_1470dcce6 body=1495 status=ok
// SIG undefined FUN_1470dcce6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1470dcce6(longlong param_1,double *param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  double *pdVar6;
  undefined8 ****ppppuVar7;
  uint uVar8;
  code *pcVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  double dVar14;
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
  undefined1 auStack_138 [40];
  double local_110;
  double local_108;
  double local_100;
  undefined8 ***local_f8;
  double local_f0;
  double local_e8;
  ushort local_e0;
  byte local_d8;
  undefined8 ***local_d0 [3];
  ushort local_b8;
  byte local_b0;
  undefined8 ***local_a8 [3];
  ushort local_90;
  byte local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_1448729ea(param_1 + 8,local_a8,param_4);
  FUN_1448729ea(param_1 + 0x58,local_d0,param_4);
  FUN_1448729ea(param_1 + 0xa8,&local_f8,param_4);
  fVar10 = (float)FUN_144a7b41a(&local_f8,0);
  pcVar9 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_d8 * 0x120));
  if (pcVar9 != (code *)0x0) {
    ppppuVar7 = &local_f8;
    if (0x18 < local_e0) {
      ppppuVar7 = (undefined8 ****)local_f8;
    }
    (*pcVar9)(ppppuVar7);
  }
  if (0x18 < local_e0) {
    FUN_1400020a8(local_f8);
  }
  pdVar6 = param_2;
  switch(local_88) {
  case 2:
    cVar3 = FUN_144a7b75a(CONCAT71(0x14a1c88,local_b0),2);
    if (cVar3 != '\0') {
      iVar4 = FUN_1405d5f74(local_a8);
      iVar5 = FUN_1405d5f74(local_d0);
      *(undefined2 *)(param_2 + 3) = 4;
      *(int *)param_2 = (int)(fVar10 * (float)(iVar5 - iVar4) + (float)iVar4);
      *(undefined1 *)(param_2 + 4) = 2;
      goto LAB_1470dd166;
    }
    break;
  case 3:
    cVar3 = FUN_144a7b75a(CONCAT71(0x14a1c88,local_b0),3);
    if (cVar3 != '\0') {
      fVar11 = (float)FUN_144a7ecd0(local_a8);
      fVar12 = (float)FUN_144a7ecd0(local_d0);
      *(undefined2 *)(param_2 + 3) = 4;
      *(float *)param_2 = fVar10 * (fVar12 - fVar11) + fVar11;
      *(undefined1 *)(param_2 + 4) = 3;
      goto LAB_1470dd166;
    }
    break;
  case 4:
    cVar3 = FUN_144a7b75a(CONCAT71(0x14a1c88,local_b0),4);
    if (cVar3 != '\0') {
      FUN_144a7b7fe(local_a8,&local_f8);
      FUN_144a7b7fe(local_d0,&local_110);
      dVar13 = (double)fVar10;
      *(undefined2 *)(param_2 + 3) = 0x18;
      *param_2 = (local_110 - (double)local_f8) * dVar13 + (double)local_f8;
      param_2[1] = (local_108 - local_f0) * dVar13 + local_f0;
      param_2[2] = (local_100 - local_e8) * dVar13 + local_e8;
      *(undefined1 *)(param_2 + 4) = 4;
      goto LAB_1470dd166;
    }
    break;
  case 5:
    cVar3 = FUN_144a7b75a(CONCAT71(0x14a1c88,local_b0),5);
    if (cVar3 != '\0') {
      FUN_142b38d56(local_a8,&local_f8);
      FUN_142b38d56(local_d0,&local_110);
      dVar13 = (double)DAT_1499387d0;
      dVar14 = DAT_1499387d0._8_8_;
      auVar18._8_8_ = local_108 - local_f0;
      auVar18._0_8_ = local_110 - (double)local_f8;
      auVar19 = divpd(auVar18,_DAT_1499387d0);
      auVar15._0_8_ = (local_100 - local_e8) / 360.0;
      auVar15._8_8_ = 0;
      auVar20 = roundpd(auVar19,auVar19,3);
      auVar19 = roundpd(auVar15,auVar15,3);
      auVar24._0_8_ = (local_100 - local_e8) - auVar19._0_8_ * dVar13;
      auVar24._8_8_ = 0.0 - auVar19._8_8_ * dVar14;
      dVar1 = (local_110 - (double)local_f8) - auVar20._0_8_ * dVar13;
      dVar2 = (local_108 - local_f0) - auVar20._8_8_ * dVar14;
      auVar22._0_8_ = dVar1 + dVar13;
      auVar22._8_8_ = dVar2 + dVar14;
      auVar23._0_8_ = dVar13 + auVar24._0_8_;
      auVar23._8_8_ = dVar14 + auVar24._8_8_;
      auVar20._8_8_ = -(ulonglong)(0.0 <= dVar2);
      auVar20._0_8_ = -(ulonglong)(0.0 <= dVar1);
      auVar19._8_4_ = SUB84(dVar2,0);
      auVar19._0_8_ = dVar1;
      auVar19._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      auVar19 = blendvpd(auVar22,auVar19,auVar20);
      auVar16._8_8_ = -(ulonglong)(0.0 <= auVar24._8_8_);
      auVar16._0_8_ = -(ulonglong)(0.0 <= auVar24._0_8_);
      auVar15 = blendvpd(auVar23,auVar24,auVar16);
      auVar21._0_8_ = auVar19._0_8_ + -360.0;
      auVar21._8_8_ = auVar19._8_8_ + -360.0;
      auVar17._8_8_ = -(ulonglong)(180.0 < auVar19._8_8_);
      auVar17._0_8_ = -(ulonglong)(180.0 < auVar19._0_8_);
      auVar19 = blendvpd(auVar19,auVar21,auVar17);
      dVar14 = auVar15._0_8_;
      dVar13 = (double)fVar10;
      *(undefined2 *)(param_2 + 3) = 0x18;
      *param_2 = auVar19._0_8_ * dVar13 + (double)local_f8;
      param_2[1] = auVar19._8_8_ * dVar13 + local_f0;
      param_2[2] = (double)(~-(ulonglong)(180.0 < dVar14) & (ulonglong)dVar14 |
                           (ulonglong)(dVar14 + -360.0) & -(ulonglong)(180.0 < dVar14)) * dVar13 +
                   local_e8;
      *(undefined1 *)(param_2 + 4) = 5;
      goto LAB_1470dd166;
    }
    uVar8 = (uint)local_88;
    *(ushort *)(param_2 + 3) = local_90;
    ppppuVar7 = local_a8;
    if (0x18 < local_90) {
      pdVar6 = (double *)FUN_14001cc68(local_90,0);
      *param_2 = (double)pdVar6;
      ppppuVar7 = (undefined8 ****)local_a8[0];
    }
    pcVar9 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar8 * 0x120));
    if (pcVar9 == (code *)0x0) {
      iVar4 = *(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar8 * 0x120));
      goto LAB_1470dd256;
    }
    goto LAB_1470dd159;
  default:
    if (local_88 != 0x15) {
      *(undefined2 *)(param_2 + 3) = 0;
      *(undefined1 *)(param_2 + 4) = 0;
      goto LAB_1470dd166;
    }
    cVar3 = FUN_144a7b75a(local_b0,0x15);
    if (cVar3 != '\0') {
      dVar13 = (double)FUN_140ee352e(local_a8);
      dVar14 = (double)FUN_140ee352e(local_d0);
      *(undefined2 *)(param_2 + 3) = 8;
      *param_2 = (dVar14 - dVar13) * (double)fVar10 + dVar13;
      *(undefined1 *)(param_2 + 4) = 0x15;
      goto LAB_1470dd166;
    }
  }
  uVar8 = (uint)local_88;
  *(ushort *)(param_2 + 3) = local_90;
  if (local_90 < 0x19) {
    ppppuVar7 = local_a8;
  }
  else {
    pdVar6 = (double *)FUN_14001cc68(local_90,0);
    *param_2 = (double)pdVar6;
    ppppuVar7 = (undefined8 ****)local_a8[0];
  }
  pcVar9 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar8 * 0x120));
  if (pcVar9 == (code *)0x0) {
    iVar4 = *(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar8 * 0x120));
LAB_1470dd256:
    memcpy(pdVar6,ppppuVar7,(longlong)iVar4);
  }
  else {
LAB_1470dd159:
    (*pcVar9)(pdVar6,ppppuVar7);
  }
  *(byte *)(param_2 + 4) = local_88;
LAB_1470dd166:
  pcVar9 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_b0 * 0x120));
  if (pcVar9 != (code *)0x0) {
    ppppuVar7 = local_d0;
    if (0x18 < local_b8) {
      ppppuVar7 = (undefined8 ****)local_d0[0];
    }
    (*pcVar9)(ppppuVar7);
  }
  if (0x18 < local_b8) {
    FUN_1400020a8(local_d0[0]);
  }
  pcVar9 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
  if (pcVar9 != (code *)0x0) {
    ppppuVar7 = (undefined8 ****)local_a8[0];
    if (local_90 < 0x19) {
      ppppuVar7 = local_a8;
    }
    (*pcVar9)(ppppuVar7);
  }
  if (0x18 < local_90) {
    FUN_1400020a8(local_a8[0]);
  }
  if ((local_80 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1470dd2be FUN_1470dd2be body=247 status=ok
// SIG undefined FUN_1470dd2be(void)

undefined8 *
FUN_1470dd2be(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong *local_38;
  uint local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = FUN_14049cbd6(param_4);
  if (lVar5 != 0) {
    FUN_144a7d35a(lVar5,&local_38);
    if (-1 < (int)local_30) {
      do {
        if ((int)local_38[1] <= (int)local_30) break;
        lVar5 = FUN_14479d2ce((ulonglong)local_30 * 8 + *local_38);
        if (lVar5 != 0) {
          cVar3 = FUN_141107632(lVar5);
          if ((cVar3 != '\0') && (lVar5 = *(longlong *)(lVar5 + 0x3d0), lVar5 != 0)) {
            if (*(char *)(param_1 + 8) == '\x01') {
              lVar6 = FUN_140fecfdc(param_4);
              if (lVar5 != lVar6) goto LAB_1470dd38d;
              *(undefined2 *)(param_2 + 3) = 0;
              uVar4 = 0;
            }
            else {
LAB_1470dd38d:
              *(undefined2 *)(param_2 + 3) = 8;
              *param_2 = 0;
              FUN_14485c47a(param_2,lVar5);
              uVar4 = 7;
            }
            *(undefined1 *)(param_2 + 4) = uVar4;
            goto LAB_1470dd356;
          }
        }
        uVar1 = local_30 + 1;
        bVar2 = -2 < (int)local_30;
        local_30 = uVar1;
      } while (bVar2);
    }
  }
  *(undefined2 *)(param_2 + 3) = 0;
  *(undefined1 *)(param_2 + 4) = 0;
LAB_1470dd356:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470dd3b6 FUN_1470dd3b6 body=241 status=ok
// SIG undefined FUN_1470dd3b6(void)

undefined4 FUN_1470dd3b6(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  longlong lVar10;
  
  if ((longlong)*(int *)(param_1 + 0x10) == 0) {
LAB_1470dd48c:
    uVar8 = 0;
  }
  else {
    plVar9 = *(longlong **)(param_1 + 8);
    lVar10 = (longlong)*(int *)(param_1 + 0x10) * 0x18;
    uVar7 = 0;
    do {
      lVar5 = plVar9[1];
      if (lVar5 == 0) {
        uVar4 = FUN_14016979c();
        lVar5 = FUN_14477b664(uVar4);
        plVar9[1] = lVar5;
      }
      lVar6 = plVar9[2];
      uVar8 = uVar7;
      if (lVar6 == 0) {
        if ((lVar5 != 0) && (*plVar9 != 0)) {
          plVar1 = *(longlong **)(lVar5 + 0xb8);
          if ((plVar1 == (longlong *)0x0) ||
             (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
            plVar9[2] = 0;
          }
          else {
            uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
            lVar6 = FUN_144aff482(uVar4,plVar9);
            plVar9[2] = lVar6;
            if (lVar6 != 0) goto LAB_1470dd3fd;
          }
        }
      }
      else {
LAB_1470dd3fd:
        uVar3 = FUN_140103674(lVar6);
        if (((((char)uVar3 != (char)uVar7) && (uVar8 = uVar3, (char)uVar7 != '\0')) &&
            (cVar2 = FUN_144a7b75a(uVar7,uVar3), cVar2 == '\0')) &&
           ((uVar8 = uVar7, (char)uVar3 != '\0' &&
            (cVar2 = FUN_144a7b75a(uVar3,uVar7), cVar2 == '\0')))) goto LAB_1470dd48c;
      }
      plVar9 = plVar9 + 3;
      lVar10 = lVar10 + -0x18;
      uVar7 = uVar8;
    } while (lVar10 != 0);
  }
  return uVar8;
}



// FUNCTION 1470dd4a8 FUN_1470dd4a8 body=447 status=ok
// SIG undefined FUN_1470dd4a8(void)

undefined8 * FUN_1470dd4a8(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  undefined1 local_a8 [40];
  undefined1 local_80 [8];
  undefined1 local_78 [40];
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b8 = param_4;
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    plVar7 = *(longlong **)(param_1 + 8);
    param_4 = param_4 + 0x28;
    lVar8 = (longlong)*(int *)(param_1 + 0x10) * 0x18;
    local_b0 = param_4;
    do {
      local_a8[0] = 0;
      FUN_1447f8f6a(local_a8,local_b8);
      FUN_1447f8ea6(local_80,param_4);
      local_78[0] = 0;
      local_50 = 0;
      lVar4 = plVar7[1];
      if (lVar4 == 0) {
        uVar3 = FUN_14016979c();
        lVar4 = FUN_14477b664(uVar3);
        plVar7[1] = lVar4;
      }
      lVar6 = plVar7[2];
      if (lVar6 == 0) {
        if (lVar4 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = 0;
          if (*plVar7 != 0) {
            plVar1 = *(longlong **)(lVar4 + 0xb8);
            if ((plVar1 == (longlong *)0x0) ||
               (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
              lVar6 = 0;
            }
            else {
              uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
              lVar6 = FUN_144aff482(uVar3,plVar7);
            }
            plVar7[2] = lVar6;
            param_4 = local_b0;
          }
        }
      }
      FUN_144750e81(param_2,lVar6,local_a8);
      FUN_144a5ac3a(local_78);
      FUN_144a5ac3a(local_a8);
      if (*(char *)(param_2 + 4) != '\0') goto LAB_1470dd633;
      if (DAT_14c9a85d0 != (code *)0x0) {
        puVar5 = param_2;
        if (0x18 < *(ushort *)(param_2 + 3)) {
          puVar5 = (undefined8 *)*param_2;
        }
        (*DAT_14c9a85d0)(puVar5);
      }
      if (0x18 < *(ushort *)(param_2 + 3)) {
        FUN_1400020a8(*param_2);
      }
      plVar7 = plVar7 + 3;
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != 0);
  }
  *(undefined2 *)(param_2 + 3) = 0;
  *(undefined1 *)(param_2 + 4) = 0;
LAB_1470dd633:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1470dd68c FUN_1470dd68c body=103 status=ok
// SIG undefined FUN_1470dd68c(void)

longlong FUN_1470dd68c(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  char local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_142b38e2e(param_1,local_38,param_4);
  if (local_20 == '\0') {
    *(undefined2 *)(param_2 + 0x18) = 0;
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  else {
    FUN_1470dd6f4(param_2,local_38);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470dd6f4 FUN_1470dd6f4 body=270 status=ok
// SIG undefined FUN_1470dd6f4(void)

undefined4 * FUN_1470dd6f4(undefined4 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  undefined4 uVar6;
  
  if ((param_2[1] != 0) && (lVar1 = *param_2, lVar1 != 0)) {
    lVar4 = *(longlong *)(lVar1 + 8);
    lVar3 = FUN_1446dcc8c();
    if (*(ulonglong *)(lVar3 + 8) == 0) {
      bVar5 = lVar4 != 0;
      if (lVar4 != lVar3 && bVar5) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar5 = lVar4 != 0;
          if (lVar4 == lVar3) break;
        } while (lVar4 != 0);
      }
      if (bVar5) goto LAB_1470dd764;
    }
    else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_1470dd764:
      lVar4 = *(longlong *)(lVar1 + 0x70);
      if ((lVar4 != 0) &&
         ((((lVar3 = FUN_140168d6e(), lVar3 != 0 &&
            (*(int *)(lVar3 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
           (param_2[1] != 0 &&
            *(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30)) ||
          (((lVar1 = *(longlong *)(lVar1 + 0x70), lVar1 != 0 &&
            (lVar4 = FUN_140168da8(), lVar4 != 0)) &&
           ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38) &&
            (param_2[1] != 0 &&
             *(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
             lVar4 + 0x30)))))))) {
        uVar6 = FUN_14001cd04();
        *(undefined2 *)(param_1 + 6) = 4;
        *param_1 = uVar6;
        uVar2 = 3;
        goto LAB_1470dd7df;
      }
    }
  }
  *(undefined2 *)(param_1 + 6) = 0;
  uVar2 = 0;
LAB_1470dd7df:
  *(undefined1 *)(param_1 + 8) = uVar2;
  return param_1;
}



// FUNCTION 1470dd818 FUN_1470dd818 body=83 status=ok
// SIG undefined FUN_1470dd818(void)

bool FUN_1470dd818(undefined8 param_1)

{
  bool bVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [3];
  char local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_142b38e2e(param_1,local_30);
  if (local_18 == '\x01') {
    bVar1 = (*(byte *)(local_30[0] + 0x38) & 0x20) == 0;
  }
  else {
    bVar1 = false;
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470dd86c FUN_1470dd86c body=180 status=ok
// SIG undefined FUN_1470dd86c(void)

void FUN_1470dd86c(undefined1 *param_1,longlong param_2,longlong param_3,undefined1 param_4,
                  float param_5)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  
  bVar1 = *(byte *)(param_3 + (ulonglong)*(byte *)(param_2 + 0x71));
  if ((*(byte *)(param_2 + 0x73) & bVar1) == 0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = 1.0;
  }
  switch(param_4) {
  case 0:
    param_5 = (float)(-(uint)(param_5 < 0.0) & (uint)(1.0 / (1.0 - param_5)) |
                     ~-(uint)(param_5 < 0.0) & (uint)(param_5 + 1.0)) * fVar3;
    break;
  case 1:
  case 2:
    param_5 = param_5 + fVar3;
    break;
  case 3:
    param_5 = param_5 * fVar3;
  }
  if ((param_5 != 0.0) || (NAN(param_5))) {
    bVar2 = *(byte *)(param_2 + 0x72);
  }
  else {
    bVar2 = 0;
  }
  *(byte *)(param_3 + (ulonglong)*(byte *)(param_2 + 0x71)) =
       bVar1 & ~*(byte *)(param_2 + 0x73) | bVar2;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  return;
}



// FUNCTION 1470dd920 FUN_1470dd920 body=215 status=ok
// SIG undefined FUN_1470dd920(void)

undefined1 *
FUN_1470dd920(undefined1 *param_1,longlong param_2,undefined8 param_3,undefined1 param_4,
             float param_5)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  
  lVar2 = (**(code **)(**(longlong **)(param_2 + 0x70) + 0x220))
                    (*(longlong **)(param_2 + 0x70),param_3);
  fVar3 = (float)lVar2;
  switch(param_4) {
  case 0:
    param_5 = (float)(-(uint)(param_5 < 0.0) & (uint)(1.0 / (1.0 - param_5)) |
                     ~-(uint)(param_5 < 0.0) & (uint)(param_5 + 1.0)) * fVar3;
    break;
  case 1:
  case 2:
    param_5 = param_5 + fVar3;
    break;
  case 3:
    param_5 = param_5 * fVar3;
  }
  cVar1 = FUN_1427e11e8(*(undefined8 *)(param_2 + 0x78),(longlong)(int)param_5);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_2 + 0x70) + 0x1f8))
              (*(longlong **)(param_2 + 0x70),param_3,(longlong)(int)param_5);
  }
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  return param_1;
}



// FUNCTION 1470dd9f7 FUN_1470dd9f7 body=123 status=ok
// SIG undefined FUN_1470dd9f7(void)

void FUN_1470dd9f7(undefined1 *param_1,double *param_2,undefined1 param_3,double param_4)

{
  double dVar1;
  
  dVar1 = *param_2;
  switch(param_3) {
  case 0:
    param_4 = (double)(-(ulonglong)(param_4 < 0.0) & (ulonglong)(1.0 / (1.0 - param_4)) |
                      ~-(ulonglong)(param_4 < 0.0) & (ulonglong)(param_4 + 1.0)) * dVar1;
    break;
  case 1:
  case 2:
    param_4 = param_4 + dVar1;
    break;
  case 3:
    param_4 = param_4 * dVar1;
  }
  *param_2 = param_4;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  return;
}



// FUNCTION 1470dda72 FUN_1470dda72 body=178 status=ok
// SIG undefined FUN_1470dda72(void)

undefined1 *
FUN_1470dda72(undefined1 *param_1,longlong *param_2,int *param_3,undefined1 param_4,float param_5)

{
  float fVar1;
  
  fVar1 = (float)*param_3;
  switch(param_4) {
  case 0:
    param_5 = (float)(-(uint)(param_5 < 0.0) & (uint)(1.0 / (1.0 - param_5)) |
                     ~-(uint)(param_5 < 0.0) & (uint)(param_5 + 1.0)) * fVar1;
    break;
  case 1:
  case 2:
    param_5 = param_5 + fVar1;
    break;
  case 3:
    param_5 = param_5 * fVar1;
  }
  (**(code **)(*param_2 + 0x1e8))(param_2);
  *param_3 = (int)param_5;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  return param_1;
}



// FUNCTION 1470ddb24 FUN_1470ddb24 body=182 status=ok
// SIG undefined FUN_1470ddb24(void)

undefined1 *
FUN_1470ddb24(undefined1 *param_1,longlong *param_2,short *param_3,undefined1 param_4,float param_5)

{
  char cVar1;
  short sVar2;
  float fVar3;
  
  fVar3 = (float)(int)*param_3;
  switch(param_4) {
  case 0:
    param_5 = (float)(-(uint)(param_5 < 0.0) & (uint)(1.0 / (1.0 - param_5)) |
                     ~-(uint)(param_5 < 0.0) & (uint)(param_5 + 1.0)) * fVar3;
    break;
  case 1:
  case 2:
    param_5 = param_5 + fVar3;
    break;
  case 3:
    param_5 = param_5 * fVar3;
  }
  cVar1 = (**(code **)(*param_2 + 0x1e8))(param_2);
  if (cVar1 == '\0') {
    sVar2 = (short)(int)param_5;
  }
  else {
    sVar2 = (short)(int)param_5;
  }
  *param_3 = sVar2;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  return param_1;
}



// FUNCTION 1470ddbda FUN_1470ddbda body=181 status=ok
// SIG undefined FUN_1470ddbda(void)

undefined1 *
FUN_1470ddbda(undefined1 *param_1,longlong *param_2,byte *param_3,undefined1 param_4,float param_5)

{
  char cVar1;
  byte bVar2;
  float fVar3;
  
  fVar3 = (float)*param_3;
  switch(param_4) {
  case 0:
    param_5 = (float)(-(uint)(param_5 < 0.0) & (uint)(1.0 / (1.0 - param_5)) |
                     ~-(uint)(param_5 < 0.0) & (uint)(param_5 + 1.0)) * fVar3;
    break;
  case 1:
  case 2:
    param_5 = param_5 + fVar3;
    break;
  case 3:
    param_5 = param_5 * fVar3;
  }
  cVar1 = (**(code **)(*param_2 + 0x1e8))(param_2);
  if (cVar1 == '\0') {
    bVar2 = (byte)(int)param_5;
  }
  else {
    bVar2 = (byte)(int)param_5;
  }
  *param_3 = bVar2;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  return param_1;
}



// FUNCTION 1470ddc90 FUN_1470ddc90 body=269 status=ok
// SIG undefined FUN_1470ddc90(void)

void FUN_1470ddc90(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = (**(code **)(*param_1 + 0x10))();
  if ((((cVar1 != '\0') && (cVar1 = (**(code **)(*param_1 + 0x28))(param_1), cVar1 != '\0')) &&
      (FUN_1400e1dbc(param_1,&local_40), local_28 == '\x01')) &&
     ((**(code **)(*param_1 + 0x98))(param_1,&local_40), local_40 != 0)) {
    lVar3 = *(longlong *)(local_40 + 8);
    lVar2 = FUN_1446dcc8c();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
      if (!bVar4) goto LAB_1470ddd7f;
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0) goto LAB_1470ddd7f;
    if (local_38 != 0) {
      lVar3 = FUN_140168d6e();
      if (*(longlong *)(local_40 + 0x70) == lVar3) {
        thunk_FUN_1470b0b0e(local_38);
      }
      else {
        lVar3 = FUN_140168da8();
        if (*(longlong *)(local_40 + 0x70) == lVar3) {
          thunk_FUN_1470b0e30(local_38);
        }
      }
    }
  }
LAB_1470ddd7f:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470ddd9e thunk_FUN_1405f1eac body=5 status=ok
// SIG undefined thunk_FUN_1405f1eac(void)

void thunk_FUN_1405f1eac(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_178 [32];
  undefined4 uStack_158;
  undefined4 uStack_150;
  undefined4 uStack_148;
  undefined8 uStack_140;
  wchar_t *pwStack_138;
  code *pcStack_130;
  undefined1 *puStack_128;
  code **ppcStack_120;
  code *pcStack_118;
  code *pcStack_110;
  code *pcStack_108;
  undefined1 auStack_100 [192];
  undefined1 *puStack_40;
  undefined8 uStack_38;
  ulonglong uStack_30;
  
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_178;
  (**(code **)(*param_1 + 0x388))(param_1,*(undefined4 *)((longlong)param_1 + 0x6c));
  FUN_144958ee8(param_1,1,0);
  puStack_40 = (undefined1 *)0x0;
  uStack_38 = 0x1800000000;
  FUN_1448c0c58(param_1,auStack_100,0);
  puVar6 = puStack_40;
  if (puStack_40 == (undefined1 *)0x0) {
    puVar6 = auStack_100;
  }
  lVar7 = (longlong)(int)uStack_38;
  if (lVar7 != 0) {
    lVar8 = 0;
    do {
      plVar3 = *(longlong **)(puVar6 + lVar8);
      if (((*(byte *)((longlong)plVar3 + 0x9c) & 1) != 0) &&
         ((*(byte *)((longlong)plVar3 + 0x9f) & 0x20) == 0)) {
        FUN_1449483a0(plVar3,1);
        (**(code **)(*plVar3 + 0x388))(plVar3);
      }
      lVar8 = lVar8 + 8;
    } while (lVar7 * 8 != lVar8);
  }
  if (((((*(byte *)((longlong)param_1 + 0x62) & 2) != 0) && ((*(uint *)(param_1 + 1) & 0x10) == 0))
      && (lVar7 = param_1[4], lVar7 != 0)) && (-1 < (short)*(undefined4 *)(lVar7 + 8))) {
    uVar1 = *(uint *)(lVar7 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    if ((*(uint *)(lVar7 + 8) >> 0x1c & 1) == 0) {
      if (DAT_14cae8b20 == 0) {
        ppcStack_120 = &pcStack_108;
        pcStack_108 = (code *)&LAB_14355090c;
        pcStack_110 = FUN_14081d0ea;
        pcStack_118 = FUN_14081d0ea;
        puStack_128 = &LAB_147b8e16d;
        pcStack_130 = (code *)&LAB_140810a38;
        pwStack_138 = L"Engine";
        uStack_140 = 0x800000000;
        uStack_148 = 0x10000000;
        uStack_150 = 8;
        uStack_158 = 0x3f0;
        FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
      }
      lVar7 = DAT_14cae8b20;
      if (DAT_14c951858 == 0) {
        ppcStack_120 = &pcStack_108;
        pcStack_108 = FUN_1449e2820;
        pcStack_110 = FUN_14081d0ea;
        pcStack_118 = FUN_14081d0ea;
        puStack_128 = &LAB_1468c5283;
        pcStack_130 = FUN_142809da0;
        pwStack_138 = L"Engine";
        uStack_140 = 0x400000000;
        uStack_148 = 0x10000000;
        uStack_150 = 8;
        uStack_158 = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar8 = param_1[4];
      if (lVar8 != 0) {
        iVar2 = *(int *)(lVar7 + 0x38);
        do {
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < iVar2) ||
             (lVar5 = lVar8,
             *(longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar2 * 8)
             != lVar7 + 0x30)) {
            lVar5 = 0;
          }
        } while ((lVar5 == 0) && (lVar8 = *(longlong *)(lVar8 + 0x20), lVar8 != 0));
        if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0xc0) != 0)) {
          lVar7 = FUN_1478b8264();
          if (lVar7 != 0) {
            FUN_147a91488(lVar7,param_1);
          }
        }
      }
    }
  }
  uVar4 = FUN_14477b072(param_1,DAT_14cac9b70);
  (**(code **)(*param_1 + 0x248))(param_1,uVar4,0);
  FUN_1400da9ba(param_1 + 0x5d,param_1);
  *(byte *)((longlong)param_1 + 0x65) = *(byte *)((longlong)param_1 + 0x65) & 0xe7 | 0x10;
  if (puStack_40 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((uStack_30 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470ddda4 FUN_1470ddda4 body=31 status=ok
// SIG undefined FUN_1470ddda4(void)

void FUN_1470ddda4(longlong *param_1)

{
  FUN_1404d1fb0();
                    /* WARNING: Could not recover jumptable at 0x0001470dddbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x640))(param_1);
  return;
}



// FUNCTION 1470dddc4 FUN_1470dddc4 body=140 status=ok
// SIG undefined FUN_1470dddc4(void)

void FUN_1470dddc4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140c2c6fa();
  FUN_1446f470e(&local_38,L"bIsActive",1);
  uVar1 = FUN_1459571c0();
  FUN_1459571c0();
  uVar1 = FUN_140f1fabf(uVar1,local_38);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470dde52 FUN_1470dde52 body=315 status=ok
// SIG undefined FUN_1470dde52(void)

void FUN_1470dde52(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [8];
  undefined8 *local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 *local_60;
  longlong local_58;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = FUN_1447210f0();
  FUN_1470e3618(local_80);
  lVar3 = local_58;
  lVar2 = local_70;
  LOCK();
  *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
  UNLOCK();
  LOCK();
  *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
  UNLOCK();
  puVar4 = local_78;
LAB_1470ddeac:
  do {
    if (puVar4 == local_60) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + -1;
      UNLOCK();
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + -1;
      UNLOCK();
      LOCK();
      *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + -1;
      UNLOCK();
      LOCK();
      *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + -1;
      UNLOCK();
      FUN_1470ddfb4(param_1);
      *(undefined1 *)((longlong)param_1 + 0x3d6) = 0;
      FUN_1470cc0f9(param_1 + 0x73);
      (**(code **)(*param_1 + 0x400))(param_1,1);
      *(undefined1 *)((longlong)param_1 + 0x3d4) = 1;
      (**(code **)(*param_1 + 0x658))(param_1);
      if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    plVar1 = (longlong *)puVar4[2];
    if (*(char *)((longlong)plVar1 + 0x3d6) == '\0') {
      (**(code **)(*plVar1 + 0x650))(plVar1);
      FUN_1470de17c(plVar1,'\x02' - *(char *)((longlong)plVar1 + 0x3d5));
    }
    for (puVar4 = (undefined8 *)FUN_1470e36a2(*puVar4); puVar4 != (undefined8 *)0x0;
        puVar4 = (undefined8 *)FUN_1470e36a2(*puVar4)) {
      lVar5 = FUN_1447210f0(puVar4[2]);
      if (lVar5 == *local_68) goto LAB_1470ddeac;
    }
    puVar4 = (undefined8 *)0x0;
  } while( true );
}



// FUNCTION 1470ddf8e FUN_1470ddf8e body=38 status=ok
// SIG undefined FUN_1470ddf8e(void)

void FUN_1470ddf8e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x650))();
  FUN_1470de17c(param_1,'\x02' - *(char *)((longlong)param_1 + 0x3d5));
  return;
}



// FUNCTION 1470ddfb4 FUN_1470ddfb4 body=416 status=ok
// SIG undefined FUN_1470ddfb4(void)

void FUN_1470ddfb4(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined2 local_a0 [2];
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar3 = FUN_1447210f0();
  if (lVar3 != 0) {
    lVar3 = FUN_1447210f0(param_1);
    if (*(longlong *)(lVar3 + 0x1f0) == 0) {
      puVar4 = (undefined8 *)(lVar3 + 0x458);
    }
    else {
      puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
    }
    uVar2 = *puVar4;
    uVar1 = *(undefined4 *)(param_1 + 0x3d0);
    local_b0 = (undefined8 *)0x0;
    local_a8 = 0;
    FUN_1446efa72(&local_b0,0,3,0x10);
    puVar4 = local_b0;
    local_a8 = 3;
    *local_b0 = &PTR_LAB_14a1c8830;
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
    local_b0[2] = lVar5;
    *local_b0 = &PTR_FUN_14a1c83e0;
    local_b0[3] = 0;
    FUN_14485c47a(local_b0 + 3,param_1);
    puVar4[4] = FUN_1470ddf8e;
    local_98 = 0;
    local_90 = 0;
    FUN_14487d8d8(&local_98,&local_b0);
    local_58 = 1;
    local_b8 = local_a0;
    local_a0[0] = 0;
    local_9c = 0xbf800000;
    FUN_1406f4044(uVar2,param_1 + 0x3d8,&local_98,uVar1);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
    FUN_1449db362(&local_b0);
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470de156 FUN_1470de156 body=38 status=ok
// SIG undefined FUN_1470de156(void)

void FUN_1470de156(longlong *param_1)

{
  (**(code **)(*param_1 + 0x650))();
  FUN_1470de17c(param_1,*(char *)((longlong)param_1 + 0x3d5) + '\x01');
  return;
}



// FUNCTION 1470de17c FUN_1470de17c body=297 status=ok
// SIG undefined FUN_1470de17c(void)

void FUN_1470de17c(longlong param_1,char param_2)

{
  wchar_t *pwVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_2 != '\0') && (*(char *)(param_1 + 0x3d6) != param_2)) {
    *(char *)(param_1 + 0x3d6) = param_2;
    pwVar1 = L"Failure";
    if (param_2 == '\x01') {
      pwVar1 = L"Success";
    }
    uVar3 = 0xffff0000;
    if (param_2 == '\x01') {
      uVar3 = 0xff00ff00;
    }
    if (*(int *)(param_1 + 0x3c8) == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = *(undefined2 **)(param_1 + 0x3c0);
    }
    FUN_140002266(local_38,L"%s: %s",pwVar1,puVar2);
    local_48 = (&DAT_14c758c60)[uVar3 >> 0x10 & 0xff];
    local_68 = &local_48;
    local_44 = (&DAT_14c758c60)[uVar3 >> 8 & 0xff];
    local_40 = DAT_14c758c60;
    local_3c = 0x3f800000;
    local_58 = 0;
    local_60 = 0x40000000;
    FUN_147b7c478(param_1,local_38,1,1);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470de2a6 FUN_1470de2a6 body=79 status=ok
// SIG undefined FUN_1470de2a6(void)

void FUN_1470de2a6(longlong *param_1)

{
  if (*(char *)((longlong)param_1 + 0x3d6) != '\0') {
    return;
  }
  FUN_1470de2f6();
  *(undefined1 *)((longlong)param_1 + 0x3d4) = 0;
  FUN_1470cc0f9(param_1 + 0x75);
  (**(code **)(*param_1 + 0x400))(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x0001470de2ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x660))(param_1);
  return;
}



// FUNCTION 1470de2f6 FUN_1470de2f6 body=108 status=ok
// SIG undefined FUN_1470de2f6(void)

void FUN_1470de2f6(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = FUN_1447210f0();
  if (lVar2 != 0) {
    lVar2 = FUN_1447210f0(param_1);
    if (*(longlong *)(lVar2 + 0x1f0) == 0) {
      puVar3 = (undefined8 *)(lVar2 + 0x458);
    }
    else {
      puVar3 = (undefined8 *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
    }
    uVar1 = *puVar3;
    puVar3 = (undefined8 *)(param_1 + 0x3d8);
    lVar2 = FUN_144a61814(uVar1,puVar3);
    if (lVar2 != 0) {
      FUN_1405a424c(uVar1,*puVar3);
    }
    *puVar3 = 0;
  }
  return;
}



// FUNCTION 1470de3b0 FUN_1470de3b0 body=192 status=ok
// SIG undefined FUN_1470de3b0(void)

longlong FUN_1470de3b0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = param_1 + 0x10;
  lVar3 = (longlong)(int)param_2[1];
  if ((lVar3 < 0) || (*(int *)(param_1 + 0x918) <= (int)param_2[1])) {
    lVar4 = *param_2;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x910);
    if (*(longlong *)(param_1 + 0x910) == 0) {
      lVar5 = lVar1;
    }
    lVar4 = *param_2;
    if (*(longlong *)(lVar5 + 0x28 + lVar3 * 0x48) == lVar4) {
      return lVar5 + lVar3 * 0x48;
    }
  }
  if (lVar4 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x910);
    if (*(longlong *)(param_1 + 0x910) == 0) {
      lVar3 = lVar1;
    }
    if ((longlong)*(int *)(param_1 + 0x918) != 0) {
      lVar5 = 0;
      do {
        if (*(longlong *)(lVar3 + 0x28 + lVar5) == lVar4) {
          uVar2 = (int)(lVar5 >> 3) * 0x38e38e39;
          *(uint *)(param_2 + 1) = uVar2;
          if ((int)uVar2 < 0) {
            return 0;
          }
          if (*(int *)(param_1 + 0x918) <= (int)uVar2) {
            return 0;
          }
          if (*(longlong *)(param_1 + 0x910) != 0) {
            lVar1 = *(longlong *)(param_1 + 0x910);
          }
          return lVar1 + (ulonglong)(uVar2 & 0x7fffffff) * 0x48;
        }
        lVar5 = lVar5 + 0x48;
      } while ((longlong)*(int *)(param_1 + 0x918) * 0x48 != lVar5);
    }
    *(undefined4 *)(param_2 + 1) = 0xffffffff;
  }
  return 0;
}



// FUNCTION 1470de470 FUN_1470de470 body=339 status=ok
// SIG undefined FUN_1470de470(void)

void FUN_1470de470(void)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *_Src;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 *_Src_00;
  longlong *_Dst;
  
  _Src = (undefined8 *)FUN_1470de3b0();
  if ((_Src != (undefined8 *)0x0) && (_Src[7] != 0)) {
    FUN_1470b117c();
    lVar3 = _Src[7];
    _Dst = (longlong *)(lVar3 + 0x70);
    bVar1 = *(byte *)(lVar3 + 0x90);
    if (bVar1 == *(byte *)(_Src + 4)) {
      if (0x18 < *(ushort *)(_Src + 3)) {
        _Src = (undefined8 *)*_Src;
      }
      if (0x18 < *(ushort *)(lVar3 + 0x88)) {
        _Dst = (longlong *)*_Dst;
      }
      uVar4 = (ulonglong)((uint)bVar1 * 0x120);
      UNRECOVERED_JUMPTABLE = *(code **)((longlong)&DAT_14c9a85c0 + uVar4);
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        memcpy(_Dst,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
        return;
      }
                    /* WARNING: Jumptable at 0x0001470de4f9 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(_Dst,_Src);
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      plVar5 = _Dst;
      if (0x18 < *(ushort *)(lVar3 + 0x88)) {
        plVar5 = (longlong *)*_Dst;
      }
      (*UNRECOVERED_JUMPTABLE)(plVar5);
    }
    if (0x18 < *(ushort *)(lVar3 + 0x88)) {
      FUN_1400020a8(*_Dst);
    }
    bVar1 = *(byte *)(_Src + 4);
    uVar2 = *(ushort *)(_Src + 3);
    *(ushort *)(lVar3 + 0x88) = uVar2;
    _Src_00 = _Src;
    if (0x18 < uVar2) {
      plVar5 = (longlong *)FUN_14001cc68(uVar2,0);
      *_Dst = (longlong)plVar5;
      _Src_00 = (undefined8 *)*_Src;
      _Dst = plVar5;
    }
    UNRECOVERED_JUMPTABLE = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      memcpy(_Dst,_Src_00,
             (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120)));
    }
    else {
      (*UNRECOVERED_JUMPTABLE)(_Dst);
    }
    *(undefined1 *)(lVar3 + 0x90) = *(undefined1 *)(_Src + 4);
  }
  return;
}



// FUNCTION 1470de5c4 FUN_1470de5c4 body=198 status=ok
// SIG undefined FUN_1470de5c4(void)

ulonglong FUN_1470de5c4(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  undefined8 unaff_RBX;
  undefined7 uVar3;
  ulonglong uVar2;
  undefined8 ***pppuVar4;
  undefined1 auStack_68 [32];
  undefined8 **local_48;
  undefined4 local_40;
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if ((char)param_1[4] == '\x14') {
    uVar2 = CONCAT71(uVar3,1);
    if (*param_2 != *param_1) {
      *param_2 = *param_1;
      *(int *)(param_2 + 1) = (int)param_1[1];
    }
  }
  else {
    FUN_1400b56fe(&local_48,param_1,0x14);
    uVar2 = CONCAT71(uVar3,local_28 != 0);
    if ((local_28 != 0) && ((undefined8 ***)*param_2 != (undefined8 ***)local_48)) {
      *param_2 = (longlong)local_48;
      *(undefined4 *)(param_2 + 1) = local_40;
    }
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppuVar4 = &local_48;
      if (0x18 < local_30) {
        pppuVar4 = (undefined8 ***)local_48;
      }
      (*pcVar1)(pppuVar4);
    }
    if (0x18 < local_30) {
      FUN_1400020a8(local_48);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470de68c FUN_1470de68c body=10 status=ok
// SIG undefined FUN_1470de68c(void)

void FUN_1470de68c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



// FUNCTION 1470de696 FUN_1470de696 body=28 status=ok
// SIG undefined FUN_1470de696(void)

undefined8 FUN_1470de696(undefined8 param_1,undefined8 param_2)

{
  FUN_1400021e4(param_2,param_1);
  return param_1;
}



// FUNCTION 1470de6b2 FUN_1470de6b2 body=147 status=ok
// SIG undefined FUN_1470de6b2(void)

undefined8 FUN_1470de6b2(undefined8 param_1)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_68 [40];
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140ff2acb(local_40);
  FUN_140c5894c(param_1,local_40);
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
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470de746 FUN_1470de746 body=213 status=ok
// SIG undefined FUN_1470de746(void)

void FUN_1470de746(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [40];
  undefined4 local_60;
  undefined8 **local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88[0] = 0;
  local_60 = 0;
  FUN_1456bb102(local_88,param_3);
  FUN_1447c3578(param_2,local_58,local_88);
  FUN_141107e97(param_1,local_58,param_3);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_58;
    if (0x18 < local_40) {
      pppuVar2 = (undefined8 ***)local_58[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  FUN_144a5ac3a(local_88);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470de81c FUN_1470de81c body=150 status=ok
// SIG undefined FUN_1470de81c(void)

undefined4 FUN_1470de81c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_68 [40];
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140ff2acb(local_40,param_1,param_2);
  uVar2 = FUN_14005fbd2(local_40,0);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = local_40;
    if (0x18 < local_28) {
      pppuVar3 = (undefined8 ***)local_40[0];
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(local_40[0]);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470de8b4 FUN_1470de8b4 body=158 status=ok
// SIG undefined FUN_1470de8b4(void)

undefined4 FUN_1470de8b4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [32];
  undefined8 **local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140ff2acb(local_48,param_1,param_2);
  uVar3 = FUN_1470de954(local_48);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_48;
    if (0x18 < local_30) {
      pppuVar2 = (undefined8 ***)local_48[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(local_48[0]);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470de954 FUN_1470de954 body=183 status=ok
// SIG undefined FUN_1470de954(void)

undefined8 *** FUN_1470de954(longlong *param_1)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_68 [32];
  undefined8 **local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((char)param_1[4] == '\x15') {
    pppuVar3 = (undefined8 ***)*param_1;
  }
  else {
    FUN_1400b56fe(local_48,param_1,0x15);
    pppuVar3 = (undefined8 ***)0x0;
    if (local_28 != 0) {
      pppuVar3 = (undefined8 ***)local_48[0];
    }
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppuVar2 = local_48;
      if (0x18 < local_30) {
        pppuVar2 = (undefined8 ***)local_48[0];
      }
      (*pcVar1)(pppuVar2);
    }
    if (0x18 < local_30) {
      FUN_1400020a8(local_48[0]);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return pppuVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470dea0c FUN_1470dea0c body=142 status=ok
// SIG undefined FUN_1470dea0c(void)

void FUN_1470dea0c(undefined8 param_1,undefined8 ***param_2)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_58 [32];
  undefined8 **local_38 [3];
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 8;
  local_18 = 0x15;
  local_38[0] = param_2;
  FUN_141107e97(param_1,local_38);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_18 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_38;
    if (0x18 < local_20) {
      pppuVar2 = (undefined8 ***)local_38[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_20) {
    FUN_1400020a8(local_38[0]);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470dea9c FUN_1470dea9c body=163 status=ok
// SIG undefined FUN_1470dea9c(void)

void FUN_1470dea9c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 **local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140ff2acb(local_48,param_1,param_2);
  FUN_140b013e6(local_48,&local_50);
  *param_3 = local_50;
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_48;
    if (0x18 < local_30) {
      pppuVar2 = (undefined8 ***)local_48[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(local_48[0]);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470deb40 FUN_1470deb40 body=141 status=ok
// SIG undefined FUN_1470deb40(void)

void FUN_1470deb40(undefined8 param_1,undefined8 ***param_2)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_58 [32];
  undefined8 **local_38 [3];
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 8;
  local_18 = 0xb;
  local_38[0] = param_2;
  FUN_141107e97(param_1,local_38);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_18 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_38;
    if (0x18 < local_20) {
      pppuVar2 = (undefined8 ***)local_38[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_20) {
    FUN_1400020a8(local_38[0]);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470debce FUN_1470debce body=173 status=ok
// SIG undefined FUN_1470debce(void)

undefined8 FUN_1470debce(undefined8 param_1)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140ff2acb(local_40);
  local_58 = 0x47efffffe0000000;
  local_50 = 0x47efffffe0000000;
  local_48 = 0x47efffffe0000000;
  FUN_1405b801a(local_40,param_1);
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
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470dec7c FUN_1470dec7c body=173 status=ok
// SIG undefined FUN_1470dec7c(void)

undefined8 FUN_1470dec7c(undefined8 param_1)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140ff2acb(local_40);
  local_58 = 0x47efffffe0000000;
  local_50 = 0x47efffffe0000000;
  local_48 = 0x47efffffe0000000;
  FUN_1470da8d0(local_40,param_1);
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
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470ded2a FUN_1470ded2a body=152 status=ok
// SIG undefined FUN_1470ded2a(void)

void FUN_1470ded2a(undefined8 param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = &local_38;
  local_20 = 0x18;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_28 = *(undefined8 *)(param_2 + 4);
  local_18 = 5;
  FUN_141107e97(local_38,puVar2);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_18 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_20) {
      puVar2 = (undefined4 *)CONCAT44(uStack_34,local_38);
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < local_20) {
    FUN_1400020a8(CONCAT44(uStack_34,local_38));
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470dedc4 FUN_1470dedc4 body=169 status=ok
// SIG undefined FUN_1470dedc4(void)

void FUN_1470dedc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_68 [32];
  undefined8 **local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 8;
  local_48[0] = (undefined8 ***)0x0;
  FUN_14485c47a(local_48);
  local_28 = 6;
  FUN_141107e97(param_1,local_48,param_3);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_48;
    if (0x18 < local_30) {
      pppuVar2 = (undefined8 ***)local_48[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(local_48[0]);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470dee6e FUN_1470dee6e body=169 status=ok
// SIG undefined FUN_1470dee6e(void)

void FUN_1470dee6e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_68 [32];
  undefined8 **local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 8;
  local_48[0] = (undefined8 ***)0x0;
  FUN_14485c47a(local_48);
  local_28 = 7;
  FUN_141107e97(param_1,local_48,param_3);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_48;
    if (0x18 < local_30) {
      pppuVar2 = (undefined8 ***)local_48[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(local_48[0]);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470def18 FUN_1470def18 body=269 status=ok
// SIG undefined FUN_1470def18(void)

longlong FUN_1470def18(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 ***pppuVar5;
  bool bVar6;
  undefined1 auStack_78 [32];
  undefined8 **local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140ff2acb(local_58,param_1,param_2);
  lVar3 = FUN_140593260(local_58);
  bVar6 = true;
  if (lVar3 != 0) {
    lVar1 = *param_3;
    if (lVar1 != 0) {
      lVar4 = FUN_144a799b0();
      if ((((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
          (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
           lVar4 + 0x30)) && (lVar1 = *param_3, lVar1 != 0)) {
        if (*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) {
          bVar6 = *(longlong *)
                   (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar1 + 0x38) * 8) != lVar1 + 0x30;
        }
        goto LAB_1470def86;
      }
    }
    bVar6 = false;
  }
LAB_1470def86:
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar2 != (code *)0x0) {
    pppuVar5 = local_58;
    if (0x18 < local_40) {
      pppuVar5 = (undefined8 ***)local_58[0];
    }
    (*pcVar2)(pppuVar5);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  if (bVar6) {
    lVar3 = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470df026 FUN_1470df026 body=169 status=ok
// SIG undefined FUN_1470df026(void)

void FUN_1470df026(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_68 [32];
  undefined8 **local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 8;
  local_48[0] = (undefined8 ***)0x0;
  FUN_14485c47a(local_48);
  local_28 = 0xe;
  FUN_141107e97(param_1,local_48,param_3);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_48;
    if (0x18 < local_30) {
      pppuVar2 = (undefined8 ***)local_48[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(local_48[0]);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470df0d0 FUN_1470df0d0 body=265 status=ok
// SIG undefined FUN_1470df0d0(void)

void FUN_1470df0d0(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  void *_Src;
  code *pcVar1;
  longlong lVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_88 [40];
  undefined8 **local_60;
  int local_58;
  undefined4 local_54;
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0x10;
  local_60 = (undefined8 ***)0x0;
  local_58 = (int)param_2[1];
  lVar2 = (longlong)local_58;
  _Src = (void *)*param_2;
  if (lVar2 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,local_58,0);
    memcpy(local_60,_Src,lVar2 * 2);
  }
  local_40 = 8;
  FUN_141107e97(param_1,&local_60,param_3);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = &local_60;
    if (0x18 < local_48) {
      pppuVar3 = (undefined8 ***)local_60;
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_48) {
    FUN_1400020a8(local_60);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470df1da FUN_1470df1da body=159 status=ok
// SIG undefined FUN_1470df1da(void)

undefined8 FUN_1470df1da(undefined8 param_1)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140ff2acb(local_40);
  local_48 = 0;
  FUN_141250f7a(local_40,param_1);
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
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470df27a FUN_1470df27a body=141 status=ok
// SIG undefined FUN_1470df27a(void)

void FUN_1470df27a(undefined8 param_1,undefined8 ***param_2)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_58 [32];
  undefined8 **local_38 [3];
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 8;
  local_18 = 0x12;
  local_38[0] = param_2;
  FUN_141107e97(param_1,local_38);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_18 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_38;
    if (0x18 < local_20) {
      pppuVar2 = (undefined8 ***)local_38[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_20) {
    FUN_1400020a8(local_38[0]);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470df308 FUN_1470df308 body=147 status=ok
// SIG undefined FUN_1470df308(void)

undefined8 FUN_1470df308(undefined8 param_1)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_68 [40];
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140ff2acb(local_40);
  FUN_1470df39c(local_40,param_1);
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
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470df39c FUN_1470df39c body=247 status=ok
// SIG undefined FUN_1470df39c(void)

longlong * FUN_1470df39c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong ****pppplVar2;
  code *pcVar3;
  byte bVar4;
  longlong *****ppppplVar5;
  undefined1 auStack_78 [40];
  longlong ****local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((char)param_1[4] == '\x1b') {
    plVar1 = (longlong *)*param_1;
    *param_2 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    *(int *)(param_2 + 1) = (int)param_1[1];
  }
  else {
    FUN_1400b56fe(local_50,param_1,0x1b);
    bVar4 = local_30;
    ppppplVar5 = local_50;
    if (local_30 == 0) {
      ppppplVar5 = (longlong *****)&DAT_14c9ab030;
    }
    pppplVar2 = *ppppplVar5;
    *param_2 = (longlong)pppplVar2;
    if (pppplVar2 != (longlong ****)0x0) {
      (*(code *)(*pppplVar2)[1])();
    }
    ppppplVar5 = (longlong *****)&DAT_14c9ab030;
    if (bVar4 != 0) {
      ppppplVar5 = local_50;
    }
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(ppppplVar5 + 1);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppplVar5 = local_50;
      if (0x18 < local_38) {
        ppppplVar5 = (longlong *****)local_50[0];
      }
      (*pcVar3)(ppppplVar5);
    }
    if (0x18 < local_38) {
      FUN_1400020a8(local_50[0]);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470df494 FUN_1470df494 body=198 status=ok
// SIG undefined FUN_1470df494(void)

void FUN_1470df494(undefined8 param_1,void *param_2)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_168 [32];
  undefined1 local_148 [256];
  undefined8 **local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_140ff2acb(local_48,param_1);
  FUN_1470df55c(local_48,local_148);
  memcpy(param_2,local_148,0x100);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_48;
    if (0x18 < local_30) {
      pppuVar2 = (undefined8 ***)local_48[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(local_48[0]);
  }
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470df55c FUN_1470df55c body=419 status=ok
// SIG undefined FUN_1470df55c(void)

void * FUN_1470df55c(undefined8 *param_1,void *param_2)

{
  void *_Src;
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 **ppuVar10;
  undefined8 **ppuVar11;
  undefined8 ***pppuVar12;
  undefined1 auStack_78 [32];
  undefined8 **local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 4) == '\x19') {
    _Src = (void *)*param_1;
    memcpy(param_2,_Src,0xb8);
    *(undefined8 *)((longlong)param_2 + 0xb8) = *(undefined8 *)((longlong)_Src + 0xb8);
    uVar9 = *(undefined8 *)((longlong)_Src + 200);
    *(undefined8 *)((longlong)param_2 + 0xc0) = *(undefined8 *)((longlong)_Src + 0xc0);
    *(undefined8 *)((longlong)param_2 + 200) = uVar9;
    *(undefined4 *)((longlong)param_2 + 0xd0) = *(undefined4 *)((longlong)_Src + 0xd0);
    *(undefined1 *)((longlong)param_2 + 0xd4) = *(undefined1 *)((longlong)_Src + 0xd4);
    *(undefined8 *)((longlong)param_2 + 0xf8) = *(undefined8 *)((longlong)_Src + 0xf8);
    uVar2 = *(undefined4 *)((longlong)_Src + 0xd8);
    uVar3 = *(undefined4 *)((longlong)_Src + 0xdc);
    uVar4 = *(undefined4 *)((longlong)_Src + 0xe0);
    uVar5 = *(undefined4 *)((longlong)_Src + 0xe4);
    uVar6 = *(undefined4 *)((longlong)_Src + 0xec);
    uVar7 = *(undefined4 *)((longlong)_Src + 0xf0);
    uVar8 = *(undefined4 *)((longlong)_Src + 0xf4);
    *(undefined4 *)((longlong)param_2 + 0xe8) = *(undefined4 *)((longlong)_Src + 0xe8);
    *(undefined4 *)((longlong)param_2 + 0xec) = uVar6;
    *(undefined4 *)((longlong)param_2 + 0xf0) = uVar7;
    *(undefined4 *)((longlong)param_2 + 0xf4) = uVar8;
    *(undefined4 *)((longlong)param_2 + 0xd8) = uVar2;
    *(undefined4 *)((longlong)param_2 + 0xdc) = uVar3;
    *(undefined4 *)((longlong)param_2 + 0xe0) = uVar4;
    *(undefined4 *)((longlong)param_2 + 0xe4) = uVar5;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
  }
  FUN_1400b56fe(local_58,param_1,0x19);
  ppuVar11 = local_58[0];
  pppuVar12 = (undefined8 ***)&DAT_14c9ab040;
  if (local_38 != 0) {
    pppuVar12 = (undefined8 ***)local_58[0];
  }
  memcpy(param_2,pppuVar12,0xb8);
  *(undefined8 ***)((longlong)param_2 + 0xb8) = pppuVar12[0x17];
  ppuVar10 = pppuVar12[0x19];
  *(undefined8 ***)((longlong)param_2 + 0xc0) = pppuVar12[0x18];
  *(undefined8 ***)((longlong)param_2 + 200) = ppuVar10;
  *(undefined4 *)((longlong)param_2 + 0xd0) = *(undefined4 *)(pppuVar12 + 0x1a);
  *(undefined *)((longlong)param_2 + 0xd4) = *(undefined *)((longlong)pppuVar12 + 0xd4);
  *(undefined8 ***)((longlong)param_2 + 0xf8) = pppuVar12[0x1f];
  uVar2 = *(undefined4 *)(pppuVar12 + 0x1b);
  uVar3 = *(undefined4 *)((longlong)pppuVar12 + 0xdc);
  uVar4 = *(undefined4 *)(pppuVar12 + 0x1c);
  uVar5 = *(undefined4 *)((longlong)pppuVar12 + 0xe4);
  uVar6 = *(undefined4 *)((longlong)pppuVar12 + 0xec);
  uVar7 = *(undefined4 *)(pppuVar12 + 0x1e);
  uVar8 = *(undefined4 *)((longlong)pppuVar12 + 0xf4);
  *(undefined4 *)((longlong)param_2 + 0xe8) = *(undefined4 *)(pppuVar12 + 0x1d);
  *(undefined4 *)((longlong)param_2 + 0xec) = uVar6;
  *(undefined4 *)((longlong)param_2 + 0xf0) = uVar7;
  *(undefined4 *)((longlong)param_2 + 0xf4) = uVar8;
  *(undefined4 *)((longlong)param_2 + 0xd8) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0xdc) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0xe0) = uVar4;
  *(undefined4 *)((longlong)param_2 + 0xe4) = uVar5;
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar12 = local_58;
    if (0x18 < local_40) {
      pppuVar12 = (undefined8 ***)ppuVar11;
    }
    (*pcVar1)(pppuVar12);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1470df700 FUN_1470df700 body=304 status=ok
// SIG undefined FUN_1470df700(void)

void FUN_1470df700(undefined8 param_1,void *param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 **ppuVar9;
  undefined8 ***pppuVar10;
  undefined1 auStack_78 [32];
  undefined8 **local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0x100;
  pppuVar10 = (undefined8 ***)FUN_14001cc68(0x100,0);
  local_58[0] = pppuVar10;
  memcpy(pppuVar10,param_2,0xb8);
  pppuVar10[0x17] = *(undefined8 ***)((longlong)param_2 + 0xb8);
  ppuVar9 = *(undefined8 ***)((longlong)param_2 + 200);
  pppuVar10[0x18] = *(undefined8 ***)((longlong)param_2 + 0xc0);
  pppuVar10[0x19] = ppuVar9;
  *(undefined4 *)(pppuVar10 + 0x1a) = *(undefined4 *)((longlong)param_2 + 0xd0);
  *(undefined1 *)((longlong)pppuVar10 + 0xd4) = *(undefined1 *)((longlong)param_2 + 0xd4);
  pppuVar10[0x1f] = *(undefined8 ***)((longlong)param_2 + 0xf8);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0xd8);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xdc);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xe0);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0xe4);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0xec);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0xf0);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0xf4);
  *(undefined4 *)(pppuVar10 + 0x1d) = *(undefined4 *)((longlong)param_2 + 0xe8);
  *(undefined4 *)((longlong)pppuVar10 + 0xec) = uVar6;
  *(undefined4 *)(pppuVar10 + 0x1e) = uVar7;
  *(undefined4 *)((longlong)pppuVar10 + 0xf4) = uVar8;
  *(undefined4 *)(pppuVar10 + 0x1b) = uVar2;
  *(undefined4 *)((longlong)pppuVar10 + 0xdc) = uVar3;
  *(undefined4 *)(pppuVar10 + 0x1c) = uVar4;
  *(undefined4 *)((longlong)pppuVar10 + 0xe4) = uVar5;
  local_38 = 0x19;
  FUN_141107e97(param_1,local_58,param_3);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar10 = local_58;
    if (0x18 < local_40) {
      pppuVar10 = (undefined8 ***)local_58[0];
    }
    (*pcVar1)(pppuVar10);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470df832 FUN_1470df832 body=147 status=ok
// SIG undefined FUN_1470df832(void)

undefined8 FUN_1470df832(undefined8 param_1)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_68 [40];
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140ff2acb(local_40);
  FUN_1470df8c6(local_40,param_1);
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
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470df8c6 FUN_1470df8c6 body=374 status=ok
// SIG undefined FUN_1470df8c6(void)

undefined8 * FUN_1470df8c6(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined8 ***_Src_00;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 ****ppppuVar7;
  undefined1 auStack_78 [32];
  undefined8 ***local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((char)param_1[4] == '\x1c') {
    puVar2 = (undefined8 *)*param_1;
    *param_2 = *puVar2;
    uVar4 = *(undefined4 *)((longlong)puVar2 + 0xc);
    uVar5 = *(undefined4 *)(puVar2 + 2);
    uVar6 = *(undefined4 *)((longlong)puVar2 + 0x14);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar2 + 1);
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
    *(undefined4 *)(param_2 + 2) = uVar5;
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar6;
    param_2[3] = 0;
    iVar1 = *(int *)(puVar2 + 4);
    _Src = (void *)puVar2[3];
    *(int *)(param_2 + 4) = iVar1;
    if ((longlong)iVar1 != 0) {
      FUN_1446dd670(param_2 + 3,iVar1,0);
      memcpy((void *)param_2[3],_Src,(longlong)iVar1 * 2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
    }
    *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  }
  else {
    FUN_1400b56fe(local_58,param_1,0x1c);
    ppppuVar7 = (undefined8 ****)local_58[0];
    if (local_38 == 0) {
      ppppuVar7 = (undefined8 ****)&DAT_14c9ab140;
    }
    *param_2 = *ppppuVar7;
    uVar4 = *(undefined4 *)((longlong)ppppuVar7 + 0xc);
    uVar5 = *(undefined4 *)(ppppuVar7 + 2);
    uVar6 = *(undefined4 *)((longlong)ppppuVar7 + 0x14);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(ppppuVar7 + 1);
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
    *(undefined4 *)(param_2 + 2) = uVar5;
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar6;
    param_2[3] = 0;
    iVar1 = *(int *)(ppppuVar7 + 4);
    _Src_00 = ppppuVar7[3];
    *(int *)(param_2 + 4) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0x24) = 0;
    }
    else {
      FUN_1446dd670(param_2 + 3,iVar1,0);
      memcpy((void *)param_2[3],_Src_00,(longlong)iVar1 * 2);
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar7 = local_58;
      if (0x18 < local_40) {
        ppppuVar7 = (undefined8 ****)local_58[0];
      }
      (*pcVar3)(ppppuVar7);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(local_58[0]);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1470dfa42 FUN_1470dfa42 body=298 status=ok
// SIG undefined FUN_1470dfa42(void)

void FUN_1470dfa42(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  void *_Src;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 ***pppuVar6;
  undefined1 auStack_88 [40];
  undefined8 **local_60 [3];
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0x28;
  local_60[0] = (undefined8 **)FUN_14001cc68(0x28,0);
  *local_60[0] = (undefined8 **)*param_2;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar4 = *(undefined4 *)(param_2 + 2);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(local_60[0] + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)local_60[0] + 0xc) = uVar3;
  *(undefined4 *)(local_60[0] + 2) = uVar4;
  *(undefined4 *)((longlong)local_60[0] + 0x14) = uVar5;
  local_60[0][3] = (undefined8 **)0x0;
  iVar1 = *(int *)(param_2 + 4);
  _Src = (void *)param_2[3];
  *(int *)(local_60[0] + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)local_60[0] + 0x24) = 0;
  }
  else {
    pppuVar6 = (undefined8 ***)(local_60[0] + 3);
    FUN_1446dd670(pppuVar6,iVar1,0);
    memcpy(*pppuVar6,_Src,(longlong)iVar1 * 2);
  }
  local_40 = 0x1c;
  FUN_141107e97(param_1,local_60,param_3);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
  if (pcVar2 != (code *)0x0) {
    pppuVar6 = local_60;
    if (0x18 < local_48) {
      pppuVar6 = (undefined8 ***)local_60[0];
    }
    (*pcVar2)(pppuVar6);
  }
  if (0x18 < local_48) {
    FUN_1400020a8(local_60[0]);
  }
  if (param_2[3] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470dfb6e FUN_1470dfb6e body=196 status=ok
// SIG undefined FUN_1470dfb6e(void)

void FUN_1470dfb6e(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_78 [40];
  undefined8 **local_50;
  undefined8 local_48;
  longlong local_40;
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0x18;
  local_50 = (undefined8 **)*param_2;
  uVar2 = FUN_14477b664(param_2[1]);
  local_48 = FUN_14477b664(uVar2);
  local_40 = param_2[2];
  local_30 = 0x1d;
  FUN_141107e97(param_1,&local_50,param_3);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = &local_50;
    if (0x18 < local_38) {
      pppuVar3 = (undefined8 ***)local_50;
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(local_50);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470dfc34 FUN_1470dfc34 body=213 status=ok
// SIG undefined FUN_1470dfc34(void)

void FUN_1470dfc34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [40];
  undefined4 local_60;
  undefined8 **local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88[0] = 0;
  local_60 = 0;
  FUN_1456bb102(local_88,param_3);
  FUN_140168c66(param_2,local_58,local_88);
  FUN_141107e97(param_1,local_58,param_3);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_58;
    if (0x18 < local_40) {
      pppuVar2 = (undefined8 ***)local_58[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  FUN_144a5ac3a(local_88);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470dfd0a FUN_1470dfd0a body=24 status=ok
// SIG undefined FUN_1470dfd0a(void)

undefined1 FUN_1470dfd0a(void)

{
  undefined1 *in_R9;
  
  FUN_140218e22();
  *in_R9 = 1;
  return 1;
}



// FUNCTION 1470dfd22 FUN_1470dfd22 body=118 status=ok
// SIG undefined FUN_1470dfd22(void)

undefined8 FUN_1470dfd22(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  cVar1 = (**(code **)(*param_2 + 8))(param_2);
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(*param_2 + 0x28))();
    uVar2 = FUN_14078540c(param_1,param_2,uVar2);
    return uVar2;
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(param_2);
  if (cVar1 == '\0') {
    return 0;
  }
  uVar2 = (**(code **)(*param_2 + 0x20))(param_2);
  uVar3 = (**(code **)(*param_2 + 0x28))(param_2);
  uVar2 = FUN_1470dfd98(param_1,param_2,uVar3,uVar2);
  return uVar2;
}



// FUNCTION 1470dfd98 FUN_1470dfd98 body=710 status=ok
// SIG undefined FUN_1470dfd98(void)

undefined4 FUN_1470dfd98(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 uVar5;
  size_t sVar6;
  longlong lVar7;
  ushort uVar8;
  ulonglong uVar9;
  ushort uVar10;
  ulonglong uVar11;
  wchar_t *_Str;
  longlong *plVar12;
  undefined1 auStack_118 [32];
  byte *local_f8;
  longlong *plStack_f0;
  undefined1 local_e4 [4];
  undefined4 *local_e0;
  byte **local_d8;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  pbVar4 = (byte *)*param_3;
  plVar12 = &DAT_14c9a1288;
  if ((pbVar4 != (byte *)0x0) && ((*pbVar4 & 2) != 0)) {
    plVar12 = (longlong *)(*(longlong *)(pbVar4 + 8) + 0x18);
  }
  local_e4 = (undefined1  [4])0x1;
  local_e0 = &DAT_14c9a7108;
  local_d8 = (byte **)local_e4;
  FUN_14049fede(plVar12,&local_f8,&local_e0,0);
  FUN_1401269c0(*plVar12 + (longlong)(int)local_f8 * 0x40 + 0x28);
  if (param_4 == 0) {
    if (*(int *)(param_1 + 0x48) < 2) goto LAB_1470dfe47;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x48);
    if (iVar3 == *(int *)(param_4 + 0x48)) {
      if (1 < iVar3) {
        lVar7 = 0;
        while( true ) {
          uVar8 = *(ushort *)(*(longlong *)(param_1 + 0x40) + lVar7);
          uVar9 = (ulonglong)uVar8;
          uVar10 = *(ushort *)(*(longlong *)(param_4 + 0x40) + lVar7);
          if (uVar8 != uVar10) break;
          if (uVar8 == 0) goto LAB_1470dfe47;
LAB_1470dff45:
          lVar7 = lVar7 + 2;
        }
        if ((uVar10 | uVar8) < 0x80) {
          uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
          uVar11 = (ulonglong)uVar10;
          uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
          if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar11]) goto LAB_1470dff45;
        }
        if (uVar8 != uVar10) goto LAB_1470dff88;
      }
      goto LAB_1470dfe47;
    }
    if (*(int *)(param_4 + 0x48) + iVar3 == 1) goto LAB_1470dfe47;
  }
LAB_1470dff88:
  local_e4 = (undefined1  [4])0x1;
  local_e0 = &DAT_14c9a7130;
  local_d8 = (byte **)local_e4;
  FUN_14049fede(plVar12,&local_f8,&local_e0,0);
  lVar7 = *plVar12;
  if (*(int *)(param_1 + 0x48) == 0) {
    _Str = L"";
LAB_1470dffe3:
    local_60 = 0;
    sVar6 = wcslen(_Str);
    FUN_1449b853c(&local_e0,_Str,sVar6 & 0xffffffff,1);
  }
  else {
    _Str = *(wchar_t **)(param_1 + 0x40);
    local_60 = 0;
    if (_Str != (wchar_t *)0x0) goto LAB_1470dffe3;
    local_58 = 0;
    local_50 = 0;
  }
  FUN_1417381b0(lVar7 + (longlong)(int)local_f8 * 0x40 + 0x28,local_58);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
LAB_1470dfe47:
  lVar7 = param_4 + 0x50;
  if (param_4 == 0) {
    lVar7 = 0;
  }
  local_f8 = (byte *)0x0;
  plStack_f0 = (longlong *)0x0;
  FUN_1470e0060(param_1 + 0x50,param_2,&local_f8,lVar7);
  if ((local_f8 != (byte *)0x0) && ((*local_f8 & 3) != 0)) {
    local_e0 = &DAT_14c9a7180;
    local_d8 = &local_f8;
    FUN_1446eba7e(plVar12,local_e4,&local_e0,0);
  }
  uVar5 = FUN_1470eb664(param_1,param_2,param_3,param_4);
  plVar12 = plStack_f0;
  if (plStack_f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_f0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_f0)(plStack_f0);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1470e0060 FUN_1470e0060 body=367 status=ok
// SIG undefined FUN_1470e0060(void)

void FUN_1470e0060(int *param_1,longlong *param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte *pbVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  int *local_58;
  longlong *plStack_50;
  undefined8 *local_48;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_4 == (int *)0x0) {
    local_3c = 0;
  }
  else {
    local_3c = *param_4;
  }
  if (*param_1 == local_3c) {
    local_58 = (int *)0x0;
    plStack_50 = (longlong *)0x0;
    FUN_1446dcc2e(param_3);
    goto LAB_1470e0198;
  }
  pbVar4 = (byte *)*param_3;
  if ((pbVar4 == (byte *)0x0) || ((~*pbVar4 & 3) != 0)) {
    local_58 = (int *)0x0;
    plStack_50 = (longlong *)0x0;
    FUN_14009b010(&local_58,3,0);
    FUN_1446dcc2e(param_3,&local_58);
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
    pbVar4 = (byte *)*param_3;
    if (pbVar4 != (byte *)0x0) goto LAB_1470e011d;
LAB_1470e01c4:
    local_48 = &DAT_14c9a1288;
  }
  else {
LAB_1470e011d:
    if ((*pbVar4 & 2) == 0) goto LAB_1470e01c4;
    local_48 = (undefined8 *)(*(longlong *)(pbVar4 + 8) + 0x18);
  }
  plStack_50 = (longlong *)&local_3c;
  puVar6 = &DAT_14c9a7210;
  if (DAT_14c9a7410 != (undefined8 *)0x0) {
    puVar6 = DAT_14c9a7410;
  }
  lVar7 = (longlong)DAT_14c9a7418;
  local_58 = param_1;
  if (lVar7 != 0) {
    lVar5 = 0;
    do {
      if (*(longlong *)((longlong)puVar6 + lVar5) != 0) {
        FUN_142b3dd9c(&local_58);
      }
      lVar5 = lVar5 + 0x10;
    } while (lVar7 * 0x10 != lVar5);
  }
  (**(code **)(*param_2 + 0x48))(param_2,param_3,1);
LAB_1470e0198:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470e01d0 FUN_1470e01d0 body=194 status=ok
// SIG undefined FUN_1470e01d0(void)

ulonglong FUN_1470e01d0(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  short *psVar1;
  ulonglong uVar2;
  short sVar3;
  short *psVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  psVar1 = (short *)*param_2;
  if (psVar1 != (short *)0x0) {
    sVar3 = *psVar1;
    uVar2 = 0;
    psVar4 = psVar1;
    if (sVar3 == 0) goto LAB_1470e0235;
    while (psVar4 = psVar4 + 1, sVar3 != 0) {
      if (sVar3 == 0x3d) {
        FUN_1446f82e2(&local_48,uVar2,psVar1,1);
        *(undefined8 *)(param_1 + 0x38) = local_48;
        *param_2 = psVar4;
        local_58 = param_5;
        uVar2 = FUN_1470ec434(param_1,param_2,param_3,param_4);
        goto LAB_1470e0235;
      }
      uVar2 = (ulonglong)((int)uVar2 + 1);
      sVar3 = *psVar4;
    }
  }
  uVar2 = 0;
LAB_1470e0235:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1470e0294 FUN_1470e0294 body=231 status=ok
// SIG undefined FUN_1470e0294(void)

undefined4
FUN_1470e0294(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = param_6;
  local_58 = param_5;
  uVar1 = FUN_140180b6e(param_1);
  if ((char)uVar1 != '\0') {
    iVar4 = *(int *)(param_2 + 8) + -1;
    if (*(int *)(param_2 + 8) == 0) {
      iVar4 = 0;
    }
    iVar2 = FUN_140180c78(param_1 + 0x38);
    iVar3 = (int)uStack_40 + -1;
    if ((int)uStack_40 == 0) {
      iVar3 = 0;
    }
    FUN_1412d7f26(param_2,iVar3 + iVar2 + iVar4 + 1);
    FUN_140180cec(param_1 + 0x38,param_2);
    FUN_140002184(param_2,0x3d);
    iVar4 = (int)uStack_40 + -1;
    if ((int)uStack_40 == 0) {
      iVar4 = 0;
    }
    FUN_1400020e8(param_2,local_48,iVar4);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470e037c FUN_1470e037c body=488 status=ok
// SIG undefined FUN_1470e037c(void)

undefined8 FUN_1470e037c(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined4 local_7c;
  undefined4 *local_78;
  undefined4 *puStack_70;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = param_3;
  if ((longlong)(int)param_1[1] != 0) {
    lVar10 = *param_1;
    lVar7 = (longlong)(int)param_1[1] * 0x58 + lVar10;
    plVar9 = (longlong *)0x0;
    do {
      if (*(longlong *)(lVar10 + 0x38) != 0) {
        if ((param_4 != (longlong *)0x0) && ((longlong)(int)param_4[1] != 0)) {
          lVar3 = *param_4;
          lVar8 = 0x38;
          lVar6 = 0;
          do {
            if (*(longlong *)(lVar3 + lVar8) == *(longlong *)(lVar10 + 0x38)) {
              if ((lVar3 != lVar6) &&
                 (cVar5 = FUN_144a43716((lVar3 - lVar6) + 8,lVar10 + 8), cVar5 != '\0'))
              goto LAB_1470e04fc;
              break;
            }
            lVar6 = lVar6 + -0x58;
            lVar8 = lVar8 + 0x58;
          } while ((longlong)(int)param_4[1] * -0x58 - lVar6 != 0);
        }
        if (plVar9 == (longlong *)0x0) {
          pbVar4 = (byte *)*local_88;
          plVar9 = &DAT_14c9a1288;
          if ((pbVar4 != (byte *)0x0) && (plVar9 = &DAT_14c9a1288, (*pbVar4 & 2) != 0)) {
            plVar9 = (longlong *)(*(longlong *)(pbVar4 + 8) + 0x18);
          }
          local_7c = 2;
          local_78 = &DAT_14c9a71a8;
          puStack_70 = &local_7c;
          FUN_14049fede(plVar9,&local_64,&local_78,0);
          plVar9 = (longlong *)FUN_142b16260(*plVar9 + (longlong)local_64 * 0x40 + 0x28);
        }
        iVar2 = (int)plVar9[2];
        *(uint *)(plVar9 + 2) = iVar2 + 1U;
        if (*(uint *)((longlong)plVar9 + 0x14) < iVar2 + 1U) {
          FUN_14000961e(plVar9,iVar2);
        }
        lVar3 = *plVar9;
        puVar1 = (undefined8 *)(lVar3 + (longlong)iVar2 * 0x10);
        *puVar1 = 0;
        puVar1[1] = 0;
        FUN_14009b010(lVar3 + (longlong)iVar2 * 0x10,3,0);
        FUN_1470dfd98(lVar10,param_2);
      }
LAB_1470e04fc:
      lVar10 = lVar10 + 0x58;
    } while (lVar10 != lVar7);
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*param_2 + 0x48))(param_2,local_88,1);
      goto LAB_1470e0536;
    }
  }
  local_78 = (undefined4 *)0x0;
  puStack_70 = (undefined4 *)0x0;
  FUN_1446dcc2e(local_88);
LAB_1470e0536:
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1470e0566 FUN_1470e0566 body=116 status=ok
// SIG undefined FUN_1470e0566(void)

undefined8 FUN_1470e0566(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar1 = (**(code **)(*param_1 + 8))();
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_144938c96(lVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar3 = FUN_1459204c0();
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar3);
      if (plVar2 != (longlong *)0x0) {
        uVar3 = FUN_1459204c0();
        plVar4 = (longlong *)FUN_144718840(plVar2,uVar3);
        if (plVar4 != (longlong *)0x0 && plVar2 != plVar4) {
                    /* WARNING: Could not recover jumptable at 0x0001470e05d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (**(code **)(*plVar4 + 0x10))(plVar4);
          return uVar3;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1470e05da FUN_1470e05da body=43 status=ok
// SIG undefined FUN_1470e05da(void)

undefined8 FUN_1470e05da(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x28))();
  if (lVar1 != 0) {
    uVar2 = FUN_144a7ff9e(lVar1,param_2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1470e0606 FUN_1470e0606 body=38 status=ok
// SIG undefined FUN_1470e0606(void)

undefined8
FUN_1470e0606(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  (**(code **)(*param_2 + 0x160))(param_2,param_1);
  *param_4 = 1;
  return 1;
}



// FUNCTION 1470e062c FUN_1470e062c body=147 status=ok
// SIG undefined FUN_1470e062c(void)

undefined8 FUN_1470e062c(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  FUN_14009b010(&local_38,1,0);
  FUN_1446dcc2e(param_2,&local_38);
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_1401269c0(param_2,param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470e06c0 FUN_1470e06c0 body=133 status=ok
// SIG undefined FUN_1470e06c0(void)

undefined8
FUN_1470e06c0(undefined8 param_1,longlong *param_2,uint param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_144a819d0();
  plVar1 = *(longlong **)(lVar3 + 0x70);
  lVar3 = *param_2;
  cVar2 = FUN_140d50488(plVar1,param_3,param_5);
  lVar4 = 0;
  if ((lVar3 != 0) && (cVar2 != '\0')) {
    lVar4 = (**(code **)(*plVar1 + 0xf8))
                      (plVar1,lVar3,param_1,0,param_4,param_3 | 0x8000000,param_5);
  }
  *param_2 = lVar4;
  return 1;
}



// FUNCTION 1470e0746 FUN_1470e0746 body=112 status=ok
// SIG undefined FUN_1470e0746(void)

bool FUN_1470e0746(undefined8 param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  FUN_1401a700c(&local_2c,6);
  if (uVar1 == local_2c) {
    (**(code **)(*param_3 + 0x160))(param_3,param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1 == local_2c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470e07b8 FUN_1470e07b8 body=24 status=ok
// SIG undefined FUN_1470e07b8(void)

undefined1 FUN_1470e07b8(void)

{
  undefined1 *in_R9;
  
  FUN_140218f30();
  *in_R9 = 1;
  return 1;
}



// FUNCTION 1470e07d0 FUN_1470e07d0 body=110 status=ok
// SIG undefined FUN_1470e07d0(void)

undefined8 FUN_1470e07d0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  cVar1 = (**(code **)(*param_2 + 8))(param_2);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_2 + 0x10))(param_2);
    if (cVar1 == '\0') {
      return 0;
    }
    uVar2 = (**(code **)(*param_2 + 0x20))(param_2);
    uVar3 = (**(code **)(*param_2 + 0x28))(param_2);
    FUN_1470e0060(param_1,param_2,uVar3,uVar2);
  }
  else {
    uVar2 = (**(code **)(*param_2 + 0x28))(param_2);
    FUN_140785722(param_1,uVar2);
  }
  return 1;
}



// FUNCTION 1470e083e FUN_1470e083e body=159 status=ok
// SIG undefined FUN_1470e083e(void)

undefined8 FUN_1470e083e(uint *param_1,longlong *param_2)

{
  short sVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  ulonglong local_28;
  
  uVar3 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  psVar5 = (short *)*param_2;
  local_28 = uVar3;
  if ((psVar5 != (short *)0x0) && (*psVar5 != 0)) {
    do {
      iVar4 = 0;
      for (psVar6 = psVar5; (*psVar6 != 0 && (*psVar6 != 0x2c)); psVar6 = psVar6 + 1) {
        iVar4 = iVar4 + 1;
      }
      FUN_1446f82e2(local_30,iVar4,psVar5,1);
      uVar2 = FUN_1407864f6(local_30);
      *param_1 = *param_1 | uVar2;
      sVar1 = *psVar6;
      uVar3 = (ulonglong)(sVar1 != 0);
      psVar5 = psVar6 + uVar3;
      *param_2 = (longlong)psVar5;
    } while (sVar1 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470e08de FUN_1470e08de body=92 status=ok
// SIG undefined FUN_1470e08de(void)

undefined8 FUN_1470e08de(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_28;
  code *local_20;
  undefined1 **local_18;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = &local_9;
  local_9 = 0;
  local_18 = &local_30;
  local_20 = FUN_142b3de78;
  local_28 = param_2;
  FUN_140cfa7c8();
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470e0958 FUN_1470e0958 body=187 status=ok
// SIG undefined FUN_1470e0958(void)

undefined8 FUN_1470e0958(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1401285f0(local_28,param_1 + 8,param_2);
  if (local_28[0] != 0) {
    plVar1 = (longlong *)FUN_1447262c2(param_3);
    if (plVar1 != (longlong *)0x0) {
      uVar2 = FUN_144a7fd54();
      plVar1 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,uVar2);
      if (plVar1 != (longlong *)0x0) {
        uVar2 = FUN_144a7fd54();
        plVar3 = (longlong *)FUN_144718840(plVar1,uVar2);
        if (plVar3 != (longlong *)0x0 && plVar1 != plVar3) {
          uVar2 = (**(code **)(*plVar3 + 0x28))(plVar3);
          FUN_1402b8b80(uVar2,local_28);
          uVar2 = 1;
          goto LAB_1470e098c;
        }
      }
    }
  }
  uVar2 = 0;
LAB_1470e098c:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470e0a14 FUN_1470e0a14 body=261 status=ok
// SIG undefined FUN_1470e0a14(void)

void FUN_1470e0a14(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    plVar1 = (longlong *)FUN_1447262c2(param_3);
    if (plVar1 != (longlong *)0x0) {
      uVar2 = FUN_144a7fd54();
      plVar1 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,uVar2);
      if (plVar1 != (longlong *)0x0) {
        uVar2 = FUN_144a7fd54();
        plVar3 = (longlong *)FUN_144718840(plVar1,uVar2);
        if (plVar3 != (longlong *)0x0 && plVar1 != plVar3) {
          if (*(longlong *)(param_1 + 8) == 0) {
            puVar4 = &DAT_14c9485f0;
            if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
              puVar4 = *(undefined4 **)(param_2 + 8);
            }
            FUN_1447325ac(puVar4,&local_30,1);
            local_40 = local_30;
            local_38 = 0xffffffff;
          }
          else {
            local_38 = *(undefined4 *)(param_1 + 0x10);
            local_40 = *(longlong *)(param_1 + 8);
          }
          if (local_40 != 0) {
            uVar2 = (**(code **)(*plVar3 + 0x28))(plVar3);
            FUN_1470de470(uVar2,&local_40);
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470e0b1a FUN_1470e0b1a body=4 status=ok
// SIG undefined FUN_1470e0b1a(void)

int FUN_1470e0b1a(int param_1,int param_2)

{
  return param_1 + param_2;
}



// FUNCTION 1470e0b22 FUN_1470e0b22 body=111 status=ok
// SIG undefined FUN_1470e0b22(void)

undefined4 FUN_1470e0b22(longlong param_1)

{
  byte bVar1;
  undefined4 uVar2;
  
  switch((&DAT_00001100)[param_1]) {
  case 1:
  case 2:
    bVar1 = (**(code **)(*(longlong *)(param_1 + 0x178) + 0xd0))(param_1 + 0x178);
    uVar2 = *(undefined4 *)(param_1 + 0x2d8 + (ulonglong)bVar1 * 4);
    break;
  case 3:
    uVar2 = *(undefined4 *)(param_1 + 0x2d8);
    break;
  case 4:
    uVar2 = *(undefined4 *)(param_1 + 0x2e0);
    break;
  case 5:
    uVar2 = *(undefined4 *)(param_1 + 0x2e4);
    break;
  default:
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1470e0ba0 FUN_1470e0ba0 body=71 status=ok
// SIG undefined FUN_1470e0ba0(void)

undefined8 FUN_1470e0ba0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_14016a17c();
  FUN_14168c06a(param_1);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar1 = FUN_144a87586(*(longlong *)(param_1 + 0x48),*(undefined8 *)(param_2 + 4));
    if (lVar1 != 0) {
      uVar2 = FUN_1470ee6ec(lVar1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1470e0be8 FUN_1470e0be8 body=145 status=ok
// SIG undefined FUN_1470e0be8(void)

longlong FUN_1470e0be8(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_142b38b3c();
  if (lVar1 == 0) {
    *(undefined2 *)(param_2 + 0x18) = 0;
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  else {
    local_34 = 0xffffffff;
    local_30 = *(undefined8 *)(param_1 + 0x20);
    local_40 = 0xffffffff;
    local_3c = *param_3;
    local_48 = param_4;
    FUN_144873f38(lVar1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470e0c7a FUN_1470e0c7a body=28 status=ok
// SIG undefined FUN_1470e0c7a(void)

undefined8 FUN_1470e0c7a(undefined8 param_1,undefined8 param_2)

{
  FUN_1462464fe(param_2,param_1);
  return param_1;
}



// FUNCTION 1470e0c96 FUN_1470e0c96 body=112 status=ok
// SIG undefined FUN_1470e0c96(void)

undefined8 * FUN_1470e0c96(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140b321f2(&DAT_14c9a74c0);
  memset(puVar1 + 1,0,0x98);
  *puVar1 = &PTR_FUN_14a1c2160;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined1 *)(puVar1 + 8) = 1;
  puVar1[0xe] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x7c) = 0xffffffff00000080;
  puVar1[0x12] = 0;
  return puVar1;
}



// FUNCTION 1470e0d06 FUN_1470e0d06 body=44 status=ok
// SIG undefined FUN_1470e0d06(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1470e0d06(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14c9a74cc = _DAT_14c9a74cc + -1;
  *param_1 = DAT_14c9a74c0;
  DAT_14c9a74c0 = param_1;
  return;
}



// FUNCTION 1470e0d32 FUN_1470e0d32 body=104 status=ok
// SIG undefined FUN_1470e0d32(void)

void FUN_1470e0d32(undefined8 *param_1)

{
  (**(code **)*param_1)();
  memset(param_1 + 1,0,0x98);
  *param_1 = &PTR_FUN_14a1c2160;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 1;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  param_1[0x12] = 0;
  return;
}



// FUNCTION 1470e0d9a FUN_1470e0d9a body=198 status=ok
// SIG undefined FUN_1470e0d9a(void)

undefined8 FUN_1470e0d9a(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = *param_1;
  FUN_1446dcdd4(local_48);
  if (DAT_14c9a75f8 == 0) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar1 = FUN_144837462(DAT_14c9a75f8,local_48);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    if (lVar1 != 0) {
      FUN_14168c06a(lVar1);
      lVar1 = *(longlong *)(lVar1 + 0x48);
      if ((param_2 != 0 && lVar1 != 0) && (*(int *)(param_2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
        uVar2 = CONCAT71((int7)((ulonglong)*(longlong *)(lVar1 + 0x30) >> 8),
                         *(longlong *)
                          (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(param_2 + 0x38) * 8) ==
                         param_2 + 0x30);
        goto LAB_1470e0e34;
      }
    }
  }
  uVar2 = 0;
LAB_1470e0e34:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470e0e62 FUN_1470e0e62 body=667 status=ok
// SIG undefined FUN_1470e0e62(void)

longlong * FUN_1470e0e62(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong *local_68;
  undefined4 local_60;
  uint uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_2 = 0;
  param_2[1] = 0;
  plVar4 = (longlong *)(param_1 + 8);
  if (*(char *)(param_1 + 0x10) != '\0') {
    if (*(char *)(param_1 + 0x10) != '\x02') goto LAB_1470e0ff3;
    plVar4 = (longlong *)(*plVar4 + 0x30);
  }
  lVar7 = *plVar4;
  if (lVar7 != 0) {
    uStack_80 = CONCAT44(uStack_80._4_4_,DAT_14c9a7570);
    local_88 = DAT_14c9a7568;
    FUN_1448075d0(&local_68);
    puVar3 = (undefined8 *)FUN_144a06846(lVar7 + 0x48,&local_68);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    pbVar1 = (byte *)*puVar3;
    if (pbVar1 != (byte *)0x0) {
      if ((*pbVar1 & 0x6b) == 2) {
        lVar7 = (longlong)(int)(*(longlong **)(pbVar1 + 8))[2];
        if (lVar7 != 0) {
          lVar6 = **(longlong **)(pbVar1 + 8);
          lVar7 = lVar7 << 4;
          do {
            uStack_80 = CONCAT44(uStack_80._4_4_,DAT_14c9a75b8);
            local_88 = DAT_14c9a75b0;
            FUN_1448075d0(&local_68,&local_88);
            puVar3 = (undefined8 *)FUN_144a06846(lVar6,&local_68);
            if (local_50 != 0) {
              FUN_1400020a8();
            }
            pbVar1 = (byte *)*puVar3;
            if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 0x6b) == 1)) {
              local_88 = 0;
              FUN_1400bc2ec(pbVar1,&local_68,&local_88);
              iVar5 = (int)param_2[1];
              *(uint *)(param_2 + 1) = iVar5 + 1U;
              if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
                FUN_1446f84a2(param_2,iVar5);
              }
              *(longlong **)(*param_2 + (longlong)iVar5 * 8) = local_68;
            }
            lVar6 = lVar6 + 0x10;
            lVar7 = lVar7 + -0x10;
          } while (lVar7 != 0);
        }
      }
      else if ((*pbVar1 & 0x6b) == 3) {
        lVar6 = *(longlong *)(pbVar1 + 8);
        plVar4 = (longlong *)(lVar6 + 0x18);
        lVar7 = lVar6 + 0x30;
        local_88 = 0x100000000;
        local_78 = 0xffffffff;
        uStack_70 = 0;
        uStack_80 = lVar7;
        if (*(int *)(lVar6 + 0x48) == 0) {
          iVar5 = 0;
        }
        else {
          FUN_1449c0562(&local_88);
          iVar5 = *(int *)(lVar6 + 0x48);
        }
        uStack_48 = CONCAT44(uStack_6c,uStack_70);
        local_50 = local_78;
        lVar6 = local_50;
        local_60 = (undefined4)local_88;
        uStack_5c = local_88._4_4_;
        uStack_58 = (undefined4)uStack_80;
        uStack_54 = uStack_80._4_4_;
        local_50._4_4_ = (int)((ulonglong)local_78 >> 0x20);
        iVar2 = local_50._4_4_;
        local_68 = plVar4;
        if ((local_50._4_4_ != iVar5) || (local_50 = lVar6, uStack_80 != lVar7)) {
          do {
            local_50 = lVar6;
            FUN_1447325ac((longlong)iVar2 * 0x40 + *local_68,&local_88,1);
            iVar2 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar2 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
              FUN_1446f84a2(param_2,iVar2);
            }
            *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = local_88;
            local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~uStack_5c);
            FUN_1449c0562(&local_60);
            iVar2 = local_50._4_4_;
            lVar6 = local_50;
          } while (local_68 != plVar4 ||
                   (CONCAT44(uStack_54,uStack_58) != lVar7 || local_50._4_4_ != iVar5));
        }
      }
    }
  }
LAB_1470e0ff3:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1470e10fe FUN_1470e10fe body=102 status=ok
// SIG undefined FUN_1470e10fe(void)

undefined8 * FUN_1470e10fe(undefined8 *param_1,char *param_2)

{
  size_t sVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_20 = param_2;
  if (param_2 == (char *)0x0) {
    local_18 = 0;
  }
  else {
    sVar1 = strlen(param_2);
    local_18 = (undefined4)sVar1;
  }
  FUN_14475bea4(param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470e1166 FUN_1470e1166 body=186 status=ok
// SIG undefined FUN_1470e1166(void)

void FUN_1470e1166(int *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != (char *)0x0) {
    if ((*param_2 == '-') || (pcVar4 = param_2, *param_2 == '+')) {
      pcVar4 = param_2 + 1;
    }
    bVar5 = false;
    do {
      cVar1 = *pcVar4;
      if (cVar1 == '.') {
        bVar2 = true;
        if (bVar5) goto LAB_1470e11d5;
      }
      else {
        if (cVar1 == '\0') {
          iVar3 = atoi(param_2);
          *param_1 = iVar3;
          break;
        }
        iVar3 = iswdigit((short)cVar1);
        bVar2 = bVar5;
        if (iVar3 == 0) goto LAB_1470e11d5;
      }
      bVar5 = bVar2;
      pcVar4 = pcVar4 + 1;
    } while( true );
  }
LAB_1470e11f2:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1470e11d5:
  FUN_1446ddc76(&local_38,param_2,1);
  *(undefined8 *)(param_1 + 1) = local_38;
  goto LAB_1470e11f2;
}



// FUNCTION 1470e124a FUN_1470e124a body=167 status=ok
// SIG undefined FUN_1470e124a(void)

undefined8 * FUN_1470e124a(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_14a1c78c0;
  uVar1 = FUN_1462abb52();
  param_1[1] = DAT_14c9a7608;
  uVar1 = FUN_14477b664(uVar1);
  param_1[2] = uVar1;
  param_1[3] = 0;
  param_1[4] = DAT_14c9a7608;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_1446f470e(&local_38,L"ValidIdent",1);
  param_1[7] = local_38;
  param_1[8] = 0;
  param_1[9] = 0;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470e12f2 FUN_1470e12f2 body=114 status=ok
// SIG undefined FUN_1470e12f2(void)

undefined * FUN_1470e12f2(longlong param_1)

{
  undefined *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a7660) {
    FUN_144b3d300(&DAT_14c9a7660);
    if (DAT_14c9a7660 == -1) {
      FUN_1470e124a(&DAT_14c9a7610);
      _Init_thread_footer(&DAT_14c9a7660);
    }
  }
  puVar1 = (undefined *)0x0;
  if (DAT_14c9a7600 == param_1) {
    puVar1 = &DAT_14c9a7610;
  }
  return puVar1;
}



// FUNCTION 1470e1364 FUN_1470e1364 body=53 status=ok
// SIG undefined FUN_1470e1364(void)

undefined8 * FUN_1470e1364(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1470e12f2(DAT_14c9a7600);
  uVar2 = DAT_14c9a7600;
  if (lVar1 != param_2) {
    uVar2 = 0;
  }
  *param_1 = uVar2;
  return param_1;
}



// FUNCTION 1470e139a FUN_1470e139a body=102 status=ok
// SIG undefined FUN_1470e139a(void)

undefined ** FUN_1470e139a(longlong param_1)

{
  undefined **ppuVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a7664) {
    FUN_144b3d300(&DAT_14c9a7664);
    if (DAT_14c9a7664 == -1) {
      _Init_thread_footer(&DAT_14c9a7664);
    }
  }
  ppuVar1 = (undefined **)0x0;
  if (DAT_14c9a7608 == param_1) {
    ppuVar1 = &PTR_PTR_14c75f7a8;
  }
  return ppuVar1;
}



// FUNCTION 1470e1400 FUN_1470e1400 body=53 status=ok
// SIG undefined FUN_1470e1400(void)

undefined8 * FUN_1470e1400(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1470e139a(DAT_14c9a7608);
  uVar2 = DAT_14c9a7608;
  if (lVar1 != param_2) {
    uVar2 = 0;
  }
  *param_1 = uVar2;
  return param_1;
}



// FUNCTION 1470e1436 FUN_1470e1436 body=50 status=ok
// SIG undefined FUN_1470e1436(void)

void FUN_1470e1436(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140ef166c(&DAT_14c9a76c8);
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *puVar1 = &PTR_FUN_14a1c7910;
  *(undefined4 *)(puVar1 + 3) = 0x7b;
  return;
}



// FUNCTION 1470e148a FUN_1470e148a body=44 status=ok
// SIG undefined FUN_1470e148a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1470e148a(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14c9a76d4 = _DAT_14c9a76d4 + -1;
  *param_1 = DAT_14c9a76c8;
  DAT_14c9a76c8 = param_1;
  return;
}



// FUNCTION 1470e14b6 FUN_1470e14b6 body=50 status=ok
// SIG undefined FUN_1470e14b6(void)

void FUN_1470e14b6(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14a1c7910;
  *(undefined4 *)(param_1 + 3) = 0x7b;
  return;
}



// FUNCTION 1470e14e8 FUN_1470e14e8 body=22 status=ok
// SIG undefined FUN_1470e14e8(void)

ulonglong FUN_1470e14e8(uint *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  ulonglong *puVar7;
  uint *puVar8;
  longlong lVar9;
  uint *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  undefined1 auStack_68 [40];
  ulonglong uStack_40;
  int iStack_38;
  ulonglong uStack_30;
  
  plVar3 = DAT_14c9a7778;
  if (DAT_14c9a7778 == (longlong *)0x0) {
    return 0;
  }
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(code **)(*DAT_14c9a7778 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14c9a7778 + 0x154) & 1) != 0) &&
       (*(int *)((longlong)DAT_14c9a7778 + 0x1fc) < (int)DAT_14c9a7778[0x3a])) goto LAB_144815de0;
LAB_144815f6c:
    iVar6 = (int)plVar3[0x59];
    uVar14 = *param_1;
    if ((longlong)iVar6 == -1) {
      if (((uVar14 != 0) && (param_1[1] != 0)) && (uVar14 != DAT_14c948000)) {
        puVar7 = &DAT_14c948028;
        goto LAB_144815fa4;
      }
LAB_1448160f1:
      puVar7 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
      uVar14 = (uint)DAT_14c948618;
    }
    else {
      if (((uVar14 == 0) || (uVar5 = param_1[1], uVar5 == 0)) || (uVar14 == DAT_14c948000))
      goto LAB_1448160f1;
      puVar10 = param_1 + 2;
      if (0 < (int)param_1[9]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (1 < (int)uVar5) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (uVar5 == 1 && 0 < iVar6) {
        puVar8 = (uint *)&DAT_14c948618;
        if (*(int *)((longlong)plVar3 + 0x2cc) == 1) {
          puVar8 = puVar10;
        }
        uVar14 = *puVar8;
        puVar7 = (ulonglong *)(puVar8 + 1);
      }
      else {
        if ((int)uVar5 <= iVar6) goto LAB_1448160f1;
        puVar7 = (ulonglong *)(puVar10 + (longlong)iVar6 * 3 + 1);
        uVar14 = puVar10[(longlong)iVar6 * 3];
      }
    }
LAB_144815fa4:
    uVar2 = *puVar7;
    uVar15 = uVar2 >> 0x20;
    uVar5 = uVar14;
    if (uVar15 != 0) {
      uVar5 = FUN_144a78877(uVar14,uVar15);
    }
    if ((int)plVar3[0x50] != *(int *)((longlong)plVar3 + 0x2ac)) {
      plVar11 = plVar3 + 0x56;
      if ((longlong *)plVar3[0x57] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar3[0x57];
      }
      iVar6 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar3[0x58] - 1U & uVar5) * 4);
      if (iVar6 != -1) {
        plVar11 = plVar3 + 0x4f;
        lVar9 = *plVar11;
        uVar15 = 0;
LAB_144815ffc:
        lVar18 = (longlong)iVar6 * 0x20;
        if ((*(uint *)(lVar9 + lVar18) != uVar14) ||
           (lVar1 = lVar9 + lVar18, *(int *)(lVar1 + 8) != (int)(uVar2 >> 0x20)))
        goto LAB_144816008;
        uVar15 = 0;
        if ((lVar1 != 0) && ((longlong *)(lVar1 + 0x10) != (longlong *)0x0)) {
          lVar9 = *(longlong *)(lVar1 + 0x10);
          if (lVar9 != 0) {
            lVar18 = *(longlong *)(lVar9 + 0x60);
            if (lVar18 != 0) {
              do {
                FUN_144a62e5c(&uStack_40,lVar18 + 0x18,(int)plVar3[0x59],
                              *(undefined4 *)((longlong)plVar3 + 0x2cc));
                if (iStack_38 != 0) {
                  FUN_144a78877(uStack_40 & 0xffffffff,iStack_38);
                }
                iVar6 = FUN_144b0847a(plVar11);
                if (iVar6 == -1) {
                  lVar9 = 0;
                }
                else {
                  lVar9 = (longlong)iVar6 * 0x20 + *plVar11;
                }
                plVar12 = (longlong *)(lVar9 + 0x10);
                if (lVar9 == 0) {
                  plVar12 = (longlong *)0x0;
                }
                lVar9 = *plVar12;
                lVar18 = *(longlong *)(lVar9 + 0x60);
              } while (lVar18 != 0);
            }
            uVar15 = *(ulonglong *)(lVar9 + 0x30);
            uStack_40 = uVar15;
            if (uVar15 != 0) goto LAB_144815ea3;
            FUN_140e43bf0(plVar3,&uStack_40,lVar9);
            uVar15 = uStack_40;
            if (uStack_40 != 0) {
              *(ulonglong *)(lVar9 + 0x30) = uStack_40;
              if (lVar9 != 0) {
                FUN_1407d81de(uStack_40 + 8,lVar9);
              }
              goto LAB_144815ea3;
            }
          }
          goto LAB_144816103;
        }
        goto LAB_144815ea3;
      }
    }
  }
  else {
    cVar4 = (**(code **)(*DAT_14c9a7778 + 0x300))(DAT_14c9a7778);
    if (cVar4 == '\0') goto LAB_144815f6c;
LAB_144815de0:
    puVar10 = (uint *)&DAT_14c948618;
    if (((*param_1 != 0) && (0 < (int)param_1[1])) && (*param_1 != DAT_14c948000)) {
      puVar10 = param_1 + 2;
      if (0 < (int)param_1[9]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (1 < param_1[1]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
    }
    uVar14 = *puVar10;
    uVar5 = puVar10[2];
    uVar13 = uVar14;
    if (uVar5 != 0) {
      uVar13 = uVar5 >> 0xd ^ uVar14 - uVar5;
      uVar16 = uVar13 << 8 ^ (-0x61c88647 - uVar5) - uVar13;
      uVar17 = uVar16 >> 0xd ^ (uVar5 - uVar13) - uVar16;
      uVar13 = uVar17 >> 0xc ^ (uVar13 - uVar16) - uVar17;
      uVar19 = uVar13 << 0x10 ^ (uVar16 - uVar17) - uVar13;
      uVar16 = uVar19 >> 5 ^ (uVar17 - uVar13) - uVar19;
      uVar17 = uVar16 >> 3 ^ (uVar13 - uVar19) - uVar16;
      uVar13 = uVar17 << 10 ^ (uVar19 - uVar16) - uVar17;
      uVar13 = uVar13 >> 0xf ^ uVar16 - (uVar17 + uVar13);
    }
    if ((int)plVar3[0x3a] != *(int *)((longlong)plVar3 + 0x1fc)) {
      plVar11 = plVar3 + 0x40;
      if ((longlong *)plVar3[0x41] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar3[0x41];
      }
      iVar6 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar3[0x42] - 1U & uVar13) * 4);
      if (iVar6 != -1) {
        lVar9 = plVar3[0x39];
        uVar15 = 0;
        do {
          lVar18 = (longlong)iVar6 * 0x20;
          if ((*(uint *)(lVar9 + lVar18) == uVar14) &&
             (lVar1 = lVar9 + lVar18, *(uint *)(lVar1 + 8) == uVar5)) {
            uVar15 = 0;
            if ((lVar1 != 0) && ((ulonglong *)(lVar1 + 0x10) != (ulonglong *)0x0)) {
              uVar15 = *(ulonglong *)(lVar1 + 0x10);
            }
            break;
          }
          iVar6 = *(int *)(lVar9 + 0x18 + lVar18);
        } while (iVar6 != -1);
        goto LAB_144815ea3;
      }
    }
  }
LAB_144816103:
  uVar15 = 0;
LAB_144815ea3:
  if ((uStack_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_144816008:
  iVar6 = *(int *)(lVar9 + 0x18 + lVar18);
  if (iVar6 == -1) goto LAB_144815ea3;
  goto LAB_144815ffc;
}



// FUNCTION 1470e1526 FUN_1470e1526 body=71 status=ok
// SIG undefined FUN_1470e1526(void)

void FUN_1470e1526(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_1470e156e(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001470e153b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  puVar2 = (undefined8 *)FUN_140ef166c(&DAT_14c9a76c8);
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + 2) = 0;
  *puVar2 = &PTR_FUN_14a1c7910;
  *(undefined4 *)(puVar2 + 3) = 0x7b;
  return;
}



// FUNCTION 1470e156e FUN_1470e156e body=204 status=ok
// SIG undefined FUN_1470e156e(void)

longlong FUN_1470e156e(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_1460df00e();
  lVar3 = *param_1;
  if (DAT_14c9a7678 != DAT_14c9a76a4) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14c9a76a8;
    if (DAT_14c9a76b0 != (undefined *)0x0) {
      puVar7 = DAT_14c9a76b0;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14c9a76b8 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14c9a7670 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14c9a7668;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 1470e165a FUN_1470e165a body=40 status=ok
// SIG undefined FUN_1470e165a(void)

undefined8 FUN_1470e165a(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1470e156e(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 1470e1682 FUN_1470e1682 body=76 status=ok
// SIG undefined FUN_1470e1682(void)

undefined8 FUN_1470e1682(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_1470e156e(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x0001470e16c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 1470e16d8 FUN_1470e16d8 body=44 status=ok
// SIG undefined FUN_1470e16d8(void)

void FUN_1470e16d8(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 8))(param_2);
  FUN_1446e7478(param_3,param_2,uVar1,0);
  return;
}



// FUNCTION 1470e1704 FUN_1470e1704 body=73 status=ok
// SIG undefined FUN_1470e1704(void)

undefined8 * FUN_1470e1704(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a1c75b0;
  FUN_14053e432(param_1 + 6);
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470e174e FUN_1470e174e body=31 status=ok
// SIG undefined FUN_1470e174e(void)

undefined8 FUN_1470e174e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470e1788 FUN_1470e1788 body=29 status=ok
// SIG undefined FUN_1470e1788(void)

undefined8 FUN_1470e1788(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470e17ac FUN_1470e17ac body=52 status=ok
// SIG undefined FUN_1470e17ac(void)

undefined8 * FUN_1470e17ac(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470e180a FUN_1470e180a body=29 status=ok
// SIG undefined FUN_1470e180a(void)

undefined8 FUN_1470e180a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470e1828 FUN_1470e1828 body=83 status=ok
// SIG undefined FUN_1470e1828(void)

void FUN_1470e1828(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined8 *_Dst;
  
  uVar1 = DAT_14c9a9050;
  uVar2 = (ushort)DAT_14c9a9050;
  *(ushort *)(param_2 + 3) = uVar2;
  _Dst = param_2;
  if (0x18 < uVar2) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar1 & 0xffff);
    *param_2 = _Dst;
  }
  if (DAT_14c9a90e8 == (code *)0x0) {
    memset(_Dst,0,(longlong)(int)DAT_14c9a9050);
  }
  else {
    (*DAT_14c9a90e8)();
  }
  *(undefined1 *)(param_2 + 4) = 10;
  return;
}



// FUNCTION 1470e187c FUN_1470e187c body=83 status=ok
// SIG undefined FUN_1470e187c(void)

void FUN_1470e187c(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined8 *_Dst;
  
  uVar1 = DAT_14c9a9050;
  uVar2 = (ushort)DAT_14c9a9050;
  *(ushort *)(param_2 + 3) = uVar2;
  _Dst = param_2;
  if (0x18 < uVar2) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar1 & 0xffff);
    *param_2 = _Dst;
  }
  if (DAT_14c9a90e8 == (code *)0x0) {
    memset(_Dst,0,(longlong)(int)DAT_14c9a9050);
  }
  else {
    (*DAT_14c9a90e8)();
  }
  *(undefined1 *)(param_2 + 4) = 10;
  return;
}



// FUNCTION 1470e18d0 FUN_1470e18d0 body=81 status=ok
// SIG undefined FUN_1470e18d0(void)

void FUN_1470e18d0(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_2 + 4) * 0x120));
  if (pcVar1 != (code *)0x0) {
    puVar2 = param_2;
    if (0x18 < *(ushort *)(param_2 + 3)) {
      puVar2 = (undefined8 *)*param_2;
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < *(ushort *)(param_2 + 3)) {
    FUN_1400020a8(*param_2);
    return;
  }
  return;
}



// FUNCTION 1470e1938 FUN_1470e1938 body=283 status=ok
// SIG undefined FUN_1470e1938(void)

undefined8 FUN_1470e1938(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    bVar1 = *(byte *)(param_2 + 4);
    if (bVar1 == *(byte *)(param_3 + 4)) {
      puVar6 = param_3;
      if (0x18 < *(ushort *)(param_3 + 3)) {
        puVar6 = (undefined8 *)*param_3;
      }
      puVar5 = param_2;
      if (0x18 < *(ushort *)(param_2 + 3)) {
        puVar5 = (undefined8 *)*param_2;
      }
      uVar4 = (ulonglong)((uint)bVar1 * 0x120);
      pcVar3 = *(code **)((longlong)&DAT_14c9a85c0 + uVar4);
      if (pcVar3 == (code *)0x0) {
        memcpy(puVar5,puVar6,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
      }
      else {
        (*pcVar3)();
      }
    }
    else {
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
      if (pcVar3 != (code *)0x0) {
        puVar6 = param_2;
        if (0x18 < *(ushort *)(param_2 + 3)) {
          puVar6 = (undefined8 *)*param_2;
        }
        (*pcVar3)(puVar6);
      }
      if (0x18 < *(ushort *)(param_2 + 3)) {
        FUN_1400020a8(*param_2);
      }
      bVar1 = *(byte *)(param_3 + 4);
      uVar2 = *(ushort *)(param_3 + 3);
      *(ushort *)(param_2 + 3) = uVar2;
      puVar5 = param_2;
      puVar6 = param_3;
      if (0x18 < uVar2) {
        puVar5 = (undefined8 *)FUN_14001cc68(uVar2,0);
        *param_2 = puVar5;
        puVar6 = (undefined8 *)*param_3;
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
      if (pcVar3 == (code *)0x0) {
        memcpy(puVar5,puVar6,
               (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120)));
      }
      else {
        (*pcVar3)();
      }
      *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_3 + 4);
    }
    param_3 = param_3 + 5;
    param_2 = param_2 + 5;
  }
  return 1;
}



// FUNCTION 1470e1a7c FUN_1470e1a7c body=59 status=ok
// SIG undefined FUN_1470e1a7c(void)

undefined8 FUN_1470e1a7c(longlong *param_1)

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



// FUNCTION 1470e1b1a FUN_1470e1b1a body=85 status=ok
// SIG undefined FUN_1470e1b1a(void)

void FUN_1470e1b1a(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 5) == '\x01') {
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120)
                       );
    if (pcVar1 != (code *)0x0) {
      puVar2 = param_1;
      if (0x18 < *(ushort *)(param_1 + 3)) {
        puVar2 = (undefined8 *)*param_1;
      }
      (*pcVar1)(puVar2);
    }
    if (0x18 < *(ushort *)(param_1 + 3)) {
      FUN_1400020a8(*param_1);
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 1470e1b94 FUN_1470e1b94 body=55 status=ok
// SIG undefined FUN_1470e1b94(void)

void FUN_1470e1b94(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x0001470e1bc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1470e1bcc FUN_1470e1bcc body=58 status=ok
// SIG undefined FUN_1470e1bcc(void)

void FUN_1470e1bcc(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  FUN_1401f3da4(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}



// FUNCTION 1470e1c06 FUN_1470e1c06 body=58 status=ok
// SIG undefined FUN_1470e1c06(void)

void FUN_1470e1c06(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  FUN_140c13cc0(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}



// FUNCTION 1470e1c4c FUN_1470e1c4c body=29 status=ok
// SIG undefined FUN_1470e1c4c(void)

undefined8 FUN_1470e1c4c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470e1c6a FUN_1470e1c6a body=83 status=ok
// SIG undefined FUN_1470e1c6a(void)

void FUN_1470e1c6a(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined8 *_Dst;
  
  uVar1 = DAT_14c9aaa30;
  uVar2 = (ushort)DAT_14c9aaa30;
  *(ushort *)(param_2 + 3) = uVar2;
  _Dst = param_2;
  if (0x18 < uVar2) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar1 & 0xffff);
    *param_2 = _Dst;
  }
  if (DAT_14c9aaac8 == (code *)0x0) {
    memset(_Dst,0,(longlong)(int)DAT_14c9aaa30);
  }
  else {
    (*DAT_14c9aaac8)();
  }
  *(undefined1 *)(param_2 + 4) = 0x21;
  return;
}



// FUNCTION 1470e1cbe FUN_1470e1cbe body=83 status=ok
// SIG undefined FUN_1470e1cbe(void)

void FUN_1470e1cbe(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined8 *_Dst;
  
  uVar1 = DAT_14c9aaa30;
  uVar2 = (ushort)DAT_14c9aaa30;
  *(ushort *)(param_2 + 3) = uVar2;
  _Dst = param_2;
  if (0x18 < uVar2) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar1 & 0xffff);
    *param_2 = _Dst;
  }
  if (DAT_14c9aaac8 == (code *)0x0) {
    memset(_Dst,0,(longlong)(int)DAT_14c9aaa30);
  }
  else {
    (*DAT_14c9aaac8)();
  }
  *(undefined1 *)(param_2 + 4) = 0x21;
  return;
}



// FUNCTION 1470e1d12 FUN_1470e1d12 body=81 status=ok
// SIG undefined FUN_1470e1d12(void)

void FUN_1470e1d12(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_2 + 4) * 0x120));
  if (pcVar1 != (code *)0x0) {
    puVar2 = param_2;
    if (0x18 < *(ushort *)(param_2 + 3)) {
      puVar2 = (undefined8 *)*param_2;
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < *(ushort *)(param_2 + 3)) {
    FUN_1400020a8(*param_2);
    return;
  }
  return;
}



// FUNCTION 1470e1d7a FUN_1470e1d7a body=283 status=ok
// SIG undefined FUN_1470e1d7a(void)

undefined8 FUN_1470e1d7a(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    bVar1 = *(byte *)(param_2 + 4);
    if (bVar1 == *(byte *)(param_3 + 4)) {
      puVar6 = param_3;
      if (0x18 < *(ushort *)(param_3 + 3)) {
        puVar6 = (undefined8 *)*param_3;
      }
      puVar5 = param_2;
      if (0x18 < *(ushort *)(param_2 + 3)) {
        puVar5 = (undefined8 *)*param_2;
      }
      uVar4 = (ulonglong)((uint)bVar1 * 0x120);
      pcVar3 = *(code **)((longlong)&DAT_14c9a85c0 + uVar4);
      if (pcVar3 == (code *)0x0) {
        memcpy(puVar5,puVar6,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
      }
      else {
        (*pcVar3)();
      }
    }
    else {
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
      if (pcVar3 != (code *)0x0) {
        puVar6 = param_2;
        if (0x18 < *(ushort *)(param_2 + 3)) {
          puVar6 = (undefined8 *)*param_2;
        }
        (*pcVar3)(puVar6);
      }
      if (0x18 < *(ushort *)(param_2 + 3)) {
        FUN_1400020a8(*param_2);
      }
      bVar1 = *(byte *)(param_3 + 4);
      uVar2 = *(ushort *)(param_3 + 3);
      *(ushort *)(param_2 + 3) = uVar2;
      puVar5 = param_2;
      puVar6 = param_3;
      if (0x18 < uVar2) {
        puVar5 = (undefined8 *)FUN_14001cc68(uVar2,0);
        *param_2 = puVar5;
        puVar6 = (undefined8 *)*param_3;
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
      if (pcVar3 == (code *)0x0) {
        memcpy(puVar5,puVar6,
               (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120)));
      }
      else {
        (*pcVar3)();
      }
      *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_3 + 4);
    }
    param_3 = param_3 + 5;
    param_2 = param_2 + 5;
  }
  return 1;
}



// FUNCTION 1470e1ebe FUN_1470e1ebe body=59 status=ok
// SIG undefined FUN_1470e1ebe(void)

undefined8 FUN_1470e1ebe(longlong *param_1)

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



// FUNCTION 1470e1f5c FUN_1470e1f5c body=85 status=ok
// SIG undefined FUN_1470e1f5c(void)

void FUN_1470e1f5c(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 5) == '\x01') {
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120)
                       );
    if (pcVar1 != (code *)0x0) {
      puVar2 = param_1;
      if (0x18 < *(ushort *)(param_1 + 3)) {
        puVar2 = (undefined8 *)*param_1;
      }
      (*pcVar1)(puVar2);
    }
    if (0x18 < *(ushort *)(param_1 + 3)) {
      FUN_1400020a8(*param_1);
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 1470e1fb2 FUN_1470e1fb2 body=97 status=ok
// SIG undefined FUN_1470e1fb2(void)

void FUN_1470e1fb2(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  FUN_1470e2014(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  *(undefined8 *)(param_2 + 0xb0) = 0;
  return;
}



// FUNCTION 1470e2014 FUN_1470e2014 body=163 status=ok
// SIG undefined FUN_1470e2014(void)

undefined4 * FUN_1470e2014(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  FUN_1408db122(param_1 + 2,param_2 + 2);
  uVar1 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = uVar1;
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  param_1[0xe] = param_2[0xe];
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x12] = param_2[0x12];
  param_1[0x14] = param_2[0x14];
  FUN_1408db122(param_1 + 0x16,param_2 + 0x16);
  uVar1 = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1e) = uVar1;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  param_1[0x22] = param_2[0x22];
  *(undefined8 *)(param_1 + 0x24) = 0;
  param_1[0x26] = param_2[0x26];
  return param_1;
}



// FUNCTION 1470e20b8 FUN_1470e20b8 body=70 status=ok
// SIG undefined FUN_1470e20b8(void)

void FUN_1470e20b8(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  FUN_140d02432(param_1 + 8,param_2 + 8);
  FUN_140d02432(param_1 + 0x58,param_2 + 0x58);
  FUN_1470d5538(param_1 + 0xa8,param_2 + 0xa8);
  return;
}



// FUNCTION 1470e2104 FUN_1470e2104 body=128 status=ok
// SIG undefined FUN_1470e2104(void)

undefined1 * FUN_1470e2104(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  FUN_140f85fd4(param_1 + 8,param_2 + 8);
  FUN_140f85fd4(param_1 + 0x58,param_2 + 0x58);
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
    *(undefined8 *)(param_2 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
    *(undefined8 *)(param_2 + 0xb0) = 0;
  }
  return param_1;
}



// FUNCTION 1470e2184 FUN_1470e2184 body=86 status=ok
// SIG undefined FUN_1470e2184(void)

longlong * FUN_1470e2184(longlong *param_1,longlong *param_2)

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



// FUNCTION 1470e21da FUN_1470e21da body=29 status=ok
// SIG undefined FUN_1470e21da(void)

undefined8 FUN_1470e21da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470e21f8 FUN_1470e21f8 body=83 status=ok
// SIG undefined FUN_1470e21f8(void)

void FUN_1470e21f8(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined8 *_Dst;
  
  uVar1 = DAT_14c9aa6d0;
  uVar2 = (ushort)DAT_14c9aa6d0;
  *(ushort *)(param_2 + 3) = uVar2;
  _Dst = param_2;
  if (0x18 < uVar2) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar1 & 0xffff);
    *param_2 = _Dst;
  }
  if (DAT_14c9aa768 == (code *)0x0) {
    memset(_Dst,0,(longlong)(int)DAT_14c9aa6d0);
  }
  else {
    (*DAT_14c9aa768)();
  }
  *(undefined1 *)(param_2 + 4) = 0x1e;
  return;
}



// FUNCTION 1470e224c FUN_1470e224c body=83 status=ok
// SIG undefined FUN_1470e224c(void)

void FUN_1470e224c(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined8 *_Dst;
  
  uVar1 = DAT_14c9aa6d0;
  uVar2 = (ushort)DAT_14c9aa6d0;
  *(ushort *)(param_2 + 3) = uVar2;
  _Dst = param_2;
  if (0x18 < uVar2) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar1 & 0xffff);
    *param_2 = _Dst;
  }
  if (DAT_14c9aa768 == (code *)0x0) {
    memset(_Dst,0,(longlong)(int)DAT_14c9aa6d0);
  }
  else {
    (*DAT_14c9aa768)();
  }
  *(undefined1 *)(param_2 + 4) = 0x1e;
  return;
}



// FUNCTION 1470e22a0 FUN_1470e22a0 body=81 status=ok
// SIG undefined FUN_1470e22a0(void)

void FUN_1470e22a0(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_2 + 4) * 0x120));
  if (pcVar1 != (code *)0x0) {
    puVar2 = param_2;
    if (0x18 < *(ushort *)(param_2 + 3)) {
      puVar2 = (undefined8 *)*param_2;
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < *(ushort *)(param_2 + 3)) {
    FUN_1400020a8(*param_2);
    return;
  }
  return;
}



// FUNCTION 1470e2308 FUN_1470e2308 body=283 status=ok
// SIG undefined FUN_1470e2308(void)

undefined8 FUN_1470e2308(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    bVar1 = *(byte *)(param_2 + 4);
    if (bVar1 == *(byte *)(param_3 + 4)) {
      puVar6 = param_3;
      if (0x18 < *(ushort *)(param_3 + 3)) {
        puVar6 = (undefined8 *)*param_3;
      }
      puVar5 = param_2;
      if (0x18 < *(ushort *)(param_2 + 3)) {
        puVar5 = (undefined8 *)*param_2;
      }
      uVar4 = (ulonglong)((uint)bVar1 * 0x120);
      pcVar3 = *(code **)((longlong)&DAT_14c9a85c0 + uVar4);
      if (pcVar3 == (code *)0x0) {
        memcpy(puVar5,puVar6,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
      }
      else {
        (*pcVar3)();
      }
    }
    else {
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
      if (pcVar3 != (code *)0x0) {
        puVar6 = param_2;
        if (0x18 < *(ushort *)(param_2 + 3)) {
          puVar6 = (undefined8 *)*param_2;
        }
        (*pcVar3)(puVar6);
      }
      if (0x18 < *(ushort *)(param_2 + 3)) {
        FUN_1400020a8(*param_2);
      }
      bVar1 = *(byte *)(param_3 + 4);
      uVar2 = *(ushort *)(param_3 + 3);
      *(ushort *)(param_2 + 3) = uVar2;
      puVar5 = param_2;
      puVar6 = param_3;
      if (0x18 < uVar2) {
        puVar5 = (undefined8 *)FUN_14001cc68(uVar2,0);
        *param_2 = puVar5;
        puVar6 = (undefined8 *)*param_3;
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
      if (pcVar3 == (code *)0x0) {
        memcpy(puVar5,puVar6,
               (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120)));
      }
      else {
        (*pcVar3)();
      }
      *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_3 + 4);
    }
    param_3 = param_3 + 5;
    param_2 = param_2 + 5;
  }
  return 1;
}



// FUNCTION 1470e244c FUN_1470e244c body=59 status=ok
// SIG undefined FUN_1470e244c(void)

undefined8 FUN_1470e244c(longlong *param_1)

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



// FUNCTION 1470e24ea FUN_1470e24ea body=85 status=ok
// SIG undefined FUN_1470e24ea(void)

void FUN_1470e24ea(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 5) == '\x01') {
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120)
                       );
    if (pcVar1 != (code *)0x0) {
      puVar2 = param_1;
      if (0x18 < *(ushort *)(param_1 + 3)) {
        puVar2 = (undefined8 *)*param_1;
      }
      (*pcVar1)(puVar2);
    }
    if (0x18 < *(ushort *)(param_1 + 3)) {
      FUN_1400020a8(*param_1);
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 1470e2540 FUN_1470e2540 body=102 status=ok
// SIG undefined FUN_1470e2540(void)

undefined8 FUN_1470e2540(char *param_1,char *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*param_1 == *param_2) {
    cVar1 = FUN_1401b48d6(param_1 + 8,param_2 + 8);
    if (cVar1 != '\0') {
      cVar1 = FUN_1401b48d6(param_1 + 0x58,param_2 + 0x58);
      if ((cVar1 != '\0') && (*(int *)(param_1 + 0xb0) == *(int *)(param_2 + 0xb0))) {
        uVar2 = FUN_1470e25a6(*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_2 + 0xa8));
        return uVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 1470e25a6 FUN_1470e25a6 body=92 status=ok
// SIG undefined FUN_1470e25a6(void)

ulonglong FUN_1470e25a6(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  do {
    if (param_3 == 0) {
LAB_1470e25f6:
      return uVar2 & 0xffffffff;
    }
    cVar1 = FUN_1401b48d6(param_1,param_2);
    if ((cVar1 == '\0') || (cVar1 = FUN_1401b48d6(param_1 + 0x50,param_2 + 0x50), cVar1 == '\0')) {
      uVar2 = 0;
      goto LAB_1470e25f6;
    }
    param_1 = param_1 + 0xa0;
    param_2 = param_2 + 0xa0;
    param_3 = param_3 + -1;
  } while( true );
}



// FUNCTION 1470e2602 FUN_1470e2602 body=429 status=ok
// SIG undefined FUN_1470e2602(void)

undefined8 FUN_1470e2602(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  char cVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) ==
      (int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) {
    local_38 = param_1 + 2;
    local_40 = 0x100000000;
    local_30 = 0xffffffff;
    local_28 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_40);
    }
    local_50 = local_30;
    uVar6 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_60 = local_40;
    local_58 = local_38;
    local_50._4_4_ = (uint)((ulonglong)local_30 >> 0x20);
    uVar5 = (ulonglong)local_50._4_4_;
    bVar2 = (int)local_50._4_4_ < (int)local_38[3];
    local_68 = param_1;
    local_50 = uVar6;
    if (bVar2) {
      do {
        if ((int)param_2[1] == *(int *)((longlong)param_2 + 0x34)) goto LAB_1470e278f;
        lVar1 = *(longlong *)(*local_68 + (longlong)(int)uVar5 * 0x48);
        uVar3 = (uint)((ulonglong)lVar1 >> 0x10);
        uVar9 = (uint)lVar1 & 0xffff;
        plVar8 = (longlong *)param_2[8];
        if ((longlong *)param_2[8] == (longlong *)0x0) {
          plVar8 = param_2 + 7;
        }
        iVar7 = *(int *)((longlong)plVar8 +
                        (ulonglong)
                        ((int)param_2[9] - 1U &
                        (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar9) +
                        (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4)) * 4);
        if (iVar7 == -1) goto LAB_1470e278f;
        while (plVar8 = (longlong *)(*param_2 + (longlong)iVar7 * 0x48), *plVar8 != lVar1) {
          iVar7 = (int)plVar8[8];
          if (iVar7 == -1) goto LAB_1470e278f;
        }
        uVar6 = 0;
        if ((plVar8 == (longlong *)0x0) || (plVar8 == (longlong *)&DAT_fffffffffffffff8))
        goto LAB_1470e2791;
        cVar4 = FUN_144a43716(plVar8 + 2,*local_68 + (longlong)(int)uVar5 * 0x48 + 0x10);
        if (cVar4 == '\0') goto LAB_1470e278f;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        uVar5 = (ulonglong)local_50._4_4_;
      } while ((int)local_50._4_4_ < (int)local_58[3]);
    }
    uVar6 = CONCAT71((int7)(uVar5 >> 8),1);
  }
  else {
LAB_1470e278f:
    uVar6 = 0;
  }
LAB_1470e2791:
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1470e27c2 FUN_1470e27c2 body=29 status=ok
// SIG undefined FUN_1470e27c2(void)

undefined8 FUN_1470e27c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470e27e0 FUN_1470e27e0 body=83 status=ok
// SIG undefined FUN_1470e27e0(void)

void FUN_1470e27e0(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined8 *_Dst;
  
  uVar1 = DAT_14c9a9b90;
  uVar2 = (ushort)DAT_14c9a9b90;
  *(ushort *)(param_2 + 3) = uVar2;
  _Dst = param_2;
  if (0x18 < uVar2) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar1 & 0xffff);
    *param_2 = _Dst;
  }
  if (DAT_14c9a9c28 == (code *)0x0) {
    memset(_Dst,0,(longlong)(int)DAT_14c9a9b90);
  }
  else {
    (*DAT_14c9a9c28)();
  }
  *(undefined1 *)(param_2 + 4) = 0x14;
  return;
}



// FUNCTION 1470e2834 FUN_1470e2834 body=83 status=ok
// SIG undefined FUN_1470e2834(void)

void FUN_1470e2834(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined8 *_Dst;
  
  uVar1 = DAT_14c9a9b90;
  uVar2 = (ushort)DAT_14c9a9b90;
  *(ushort *)(param_2 + 3) = uVar2;
  _Dst = param_2;
  if (0x18 < uVar2) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar1 & 0xffff);
    *param_2 = _Dst;
  }
  if (DAT_14c9a9c28 == (code *)0x0) {
    memset(_Dst,0,(longlong)(int)DAT_14c9a9b90);
  }
  else {
    (*DAT_14c9a9c28)();
  }
  *(undefined1 *)(param_2 + 4) = 0x14;
  return;
}



// FUNCTION 1470e2888 FUN_1470e2888 body=81 status=ok
// SIG undefined FUN_1470e2888(void)

void FUN_1470e2888(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_2 + 4) * 0x120));
  if (pcVar1 != (code *)0x0) {
    puVar2 = param_2;
    if (0x18 < *(ushort *)(param_2 + 3)) {
      puVar2 = (undefined8 *)*param_2;
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < *(ushort *)(param_2 + 3)) {
    FUN_1400020a8(*param_2);
    return;
  }
  return;
}



// FUNCTION 1470e28f0 FUN_1470e28f0 body=283 status=ok
// SIG undefined FUN_1470e28f0(void)

undefined8 FUN_1470e28f0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    bVar1 = *(byte *)(param_2 + 4);
    if (bVar1 == *(byte *)(param_3 + 4)) {
      puVar6 = param_3;
      if (0x18 < *(ushort *)(param_3 + 3)) {
        puVar6 = (undefined8 *)*param_3;
      }
      puVar5 = param_2;
      if (0x18 < *(ushort *)(param_2 + 3)) {
        puVar5 = (undefined8 *)*param_2;
      }
      uVar4 = (ulonglong)((uint)bVar1 * 0x120);
      pcVar3 = *(code **)((longlong)&DAT_14c9a85c0 + uVar4);
      if (pcVar3 == (code *)0x0) {
        memcpy(puVar5,puVar6,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
      }
      else {
        (*pcVar3)();
      }
    }
    else {
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
      if (pcVar3 != (code *)0x0) {
        puVar6 = param_2;
        if (0x18 < *(ushort *)(param_2 + 3)) {
          puVar6 = (undefined8 *)*param_2;
        }
        (*pcVar3)(puVar6);
      }
      if (0x18 < *(ushort *)(param_2 + 3)) {
        FUN_1400020a8(*param_2);
      }
      bVar1 = *(byte *)(param_3 + 4);
      uVar2 = *(ushort *)(param_3 + 3);
      *(ushort *)(param_2 + 3) = uVar2;
      puVar5 = param_2;
      puVar6 = param_3;
      if (0x18 < uVar2) {
        puVar5 = (undefined8 *)FUN_14001cc68(uVar2,0);
        *param_2 = puVar5;
        puVar6 = (undefined8 *)*param_3;
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
      if (pcVar3 == (code *)0x0) {
        memcpy(puVar5,puVar6,
               (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120)));
      }
      else {
        (*pcVar3)();
      }
      *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_3 + 4);
    }
    param_3 = param_3 + 5;
    param_2 = param_2 + 5;
  }
  return 1;
}



// FUNCTION 1470e2a34 FUN_1470e2a34 body=59 status=ok
// SIG undefined FUN_1470e2a34(void)

undefined8 FUN_1470e2a34(longlong *param_1)

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



// FUNCTION 1470e2ad2 FUN_1470e2ad2 body=85 status=ok
// SIG undefined FUN_1470e2ad2(void)

void FUN_1470e2ad2(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 5) == '\x01') {
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120)
                       );
    if (pcVar1 != (code *)0x0) {
      puVar2 = param_1;
      if (0x18 < *(ushort *)(param_1 + 3)) {
        puVar2 = (undefined8 *)*param_1;
      }
      (*pcVar1)(puVar2);
    }
    if (0x18 < *(ushort *)(param_1 + 3)) {
      FUN_1400020a8(*param_1);
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 1470e2b2a FUN_1470e2b2a body=32 status=ok
// SIG undefined FUN_1470e2b2a(void)

void FUN_1470e2b2a(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1408db122();
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return;
}



// FUNCTION 1470e2b4a FUN_1470e2b4a body=32 status=ok
// SIG undefined FUN_1470e2b4a(void)

void FUN_1470e2b4a(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1470e2184();
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return;
}



// FUNCTION 1470e2b6a FUN_1470e2b6a body=29 status=ok
// SIG undefined FUN_1470e2b6a(void)

undefined8 FUN_1470e2b6a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470e2b88 FUN_1470e2b88 body=83 status=ok
// SIG undefined FUN_1470e2b88(void)

void FUN_1470e2b88(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined8 *_Dst;
  
  uVar1 = DAT_14c9a9ef0;
  uVar2 = (ushort)DAT_14c9a9ef0;
  *(ushort *)(param_2 + 3) = uVar2;
  _Dst = param_2;
  if (0x18 < uVar2) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar1 & 0xffff);
    *param_2 = _Dst;
  }
  if (DAT_14c9a9f88 == (code *)0x0) {
    memset(_Dst,0,(longlong)(int)DAT_14c9a9ef0);
  }
  else {
    (*DAT_14c9a9f88)();
  }
  *(undefined1 *)(param_2 + 4) = 0x17;
  return;
}



// FUNCTION 1470e2bdc FUN_1470e2bdc body=83 status=ok
// SIG undefined FUN_1470e2bdc(void)

void FUN_1470e2bdc(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined8 *_Dst;
  
  uVar1 = DAT_14c9a9ef0;
  uVar2 = (ushort)DAT_14c9a9ef0;
  *(ushort *)(param_2 + 3) = uVar2;
  _Dst = param_2;
  if (0x18 < uVar2) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar1 & 0xffff);
    *param_2 = _Dst;
  }
  if (DAT_14c9a9f88 == (code *)0x0) {
    memset(_Dst,0,(longlong)(int)DAT_14c9a9ef0);
  }
  else {
    (*DAT_14c9a9f88)();
  }
  *(undefined1 *)(param_2 + 4) = 0x17;
  return;
}



// FUNCTION 1470e2c30 FUN_1470e2c30 body=81 status=ok
// SIG undefined FUN_1470e2c30(void)

void FUN_1470e2c30(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_2 + 4) * 0x120));
  if (pcVar1 != (code *)0x0) {
    puVar2 = param_2;
    if (0x18 < *(ushort *)(param_2 + 3)) {
      puVar2 = (undefined8 *)*param_2;
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < *(ushort *)(param_2 + 3)) {
    FUN_1400020a8(*param_2);
    return;
  }
  return;
}



// FUNCTION 1470e2c98 FUN_1470e2c98 body=283 status=ok
// SIG undefined FUN_1470e2c98(void)

undefined8 FUN_1470e2c98(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    bVar1 = *(byte *)(param_2 + 4);
    if (bVar1 == *(byte *)(param_3 + 4)) {
      puVar6 = param_3;
      if (0x18 < *(ushort *)(param_3 + 3)) {
        puVar6 = (undefined8 *)*param_3;
      }
      puVar5 = param_2;
      if (0x18 < *(ushort *)(param_2 + 3)) {
        puVar5 = (undefined8 *)*param_2;
      }
      uVar4 = (ulonglong)((uint)bVar1 * 0x120);
      pcVar3 = *(code **)((longlong)&DAT_14c9a85c0 + uVar4);
      if (pcVar3 == (code *)0x0) {
        memcpy(puVar5,puVar6,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
      }
      else {
        (*pcVar3)();
      }
    }
    else {
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
      if (pcVar3 != (code *)0x0) {
        puVar6 = param_2;
        if (0x18 < *(ushort *)(param_2 + 3)) {
          puVar6 = (undefined8 *)*param_2;
        }
        (*pcVar3)(puVar6);
      }
      if (0x18 < *(ushort *)(param_2 + 3)) {
        FUN_1400020a8(*param_2);
      }
      bVar1 = *(byte *)(param_3 + 4);
      uVar2 = *(ushort *)(param_3 + 3);
      *(ushort *)(param_2 + 3) = uVar2;
      puVar5 = param_2;
      puVar6 = param_3;
      if (0x18 < uVar2) {
        puVar5 = (undefined8 *)FUN_14001cc68(uVar2,0);
        *param_2 = puVar5;
        puVar6 = (undefined8 *)*param_3;
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
      if (pcVar3 == (code *)0x0) {
        memcpy(puVar5,puVar6,
               (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120)));
      }
      else {
        (*pcVar3)();
      }
      *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_3 + 4);
    }
    param_3 = param_3 + 5;
    param_2 = param_2 + 5;
  }
  return 1;
}



// FUNCTION 1470e2ddc FUN_1470e2ddc body=59 status=ok
// SIG undefined FUN_1470e2ddc(void)

undefined8 FUN_1470e2ddc(longlong *param_1)

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



// FUNCTION 1470e2e7a FUN_1470e2e7a body=85 status=ok
// SIG undefined FUN_1470e2e7a(void)

void FUN_1470e2e7a(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 5) == '\x01') {
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120)
                       );
    if (pcVar1 != (code *)0x0) {
      puVar2 = param_1;
      if (0x18 < *(ushort *)(param_1 + 3)) {
        puVar2 = (undefined8 *)*param_1;
      }
      (*pcVar1)(puVar2);
    }
    if (0x18 < *(ushort *)(param_1 + 3)) {
      FUN_1400020a8(*param_1);
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 1470e2ed2 FUN_1470e2ed2 body=83 status=ok
// SIG undefined FUN_1470e2ed2(void)

undefined8 FUN_1470e2ed2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 1470e2f2c FUN_1470e2f2c body=89 status=ok
// SIG undefined FUN_1470e2f2c(void)

bool FUN_1470e2f2c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1470e2f77;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1470e2f77:
  return lVar6 == param_2;
}



// FUNCTION 1470e2f92 FUN_1470e2f92 body=118 status=ok
// SIG undefined FUN_1470e2f92(void)

void FUN_1470e2f92(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1c8270;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1470e3008 FUN_1470e3008 body=156 status=ok
// SIG undefined FUN_1470e3008(void)

void FUN_1470e3008(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a1c8270;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001470e3094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1470e30a4 FUN_1470e30a4 body=100 status=ok
// SIG undefined FUN_1470e30a4(void)

ulonglong FUN_1470e30a4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1470e30fd:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1470e30fd;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 1470e310a FUN_1470e310a body=31 status=ok
// SIG undefined FUN_1470e310a(void)

undefined8 FUN_1470e310a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470e314a FUN_1470e314a body=85 status=ok
// SIG undefined FUN_1470e314a(void)

void FUN_1470e314a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1c8310;
  return;
}



// FUNCTION 1470e31a0 FUN_1470e31a0 body=118 status=ok
// SIG undefined FUN_1470e31a0(void)

void FUN_1470e31a0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a1c8310;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001470e3207. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1470e3216 FUN_1470e3216 body=101 status=ok
// SIG undefined FUN_1470e3216(void)

undefined8 FUN_1470e3216(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14601200c(local_20);
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



// FUNCTION 1470e327e FUN_1470e327e body=360 status=ok
// SIG undefined FUN_1470e327e(void)

void FUN_1470e327e(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong local_78;
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
  lVar5 = param_1 + 0xb0;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    lVar5 = *(longlong *)(param_1 + 0xc0);
  }
  iVar6 = *(int *)(param_1 + 200);
  iVar3 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  if (*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0xac) < iVar3 >> 2) {
    lVar2 = param_1 + 0x90;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = lVar2;
    if (*(int *)(param_1 + 0xa0) == 0) {
      iVar6 = 0;
    }
    else {
      FUN_144a81a4c(&local_50);
      iVar6 = *(int *)(param_1 + 0xa0);
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar3 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar1, uStack_48 != lVar2)) {
      do {
        local_60 = uVar1;
        lVar4 = *(longlong *)(local_78 + 0x80);
        if (*(longlong *)(local_78 + 0x80) == 0) {
          lVar4 = local_78;
        }
        *(undefined4 *)(lVar5 + (longlong)*(int *)(lVar4 + 0xc + (longlong)iVar3 * 0x10) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_144a81a4c(&local_70);
        iVar3 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != param_1 ||
               (CONCAT44(uStack_64,uStack_68) != lVar2 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar2 = 0;
    do {
      *(undefined4 *)(lVar5 + lVar2 * 4) = 0xffffffff;
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 200));
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470e33e8 FUN_1470e33e8 body=125 status=ok
// SIG undefined FUN_1470e33e8(void)

void FUN_1470e33e8(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    uVar4 = 8;
    if (8 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x8c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 4,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 4)) {
        uVar4 = uVar2 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x8c) = (int)uVar4;
    FUN_140df33ca(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1470e3466 FUN_1470e3466 body=177 status=ok
// SIG undefined FUN_1470e3466(void)

void FUN_1470e3466(longlong param_1,int param_2,int param_3)

{
  uint *puVar1;
  byte bVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  
  lVar6 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar6 = param_1;
  }
  if (param_3 != 0) {
    puVar7 = (undefined4 *)((longlong)param_2 * 0x10 + lVar6 + 4);
    do {
      if (*(int *)(param_1 + 0xac) != 0) {
        *(int *)(lVar6 + (longlong)*(int *)(param_1 + 0xa8) * 0x10) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)(param_1 + 0xac) < 1) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = *(undefined4 *)(param_1 + 0xa8);
      }
      *puVar7 = uVar3;
      *(int *)(param_1 + 0xa8) = param_2;
      *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + 1;
      lVar4 = *(longlong *)(param_1 + 0x98);
      if (*(longlong *)(param_1 + 0x98) == 0) {
        lVar4 = param_1 + 0x90;
      }
      iVar5 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar5 = param_2;
      }
      bVar2 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)(lVar4 + (longlong)(iVar5 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1470e3518 FUN_1470e3518 body=147 status=ok
// SIG undefined FUN_1470e3518(void)

void FUN_1470e3518(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x14,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x14)) {
      uVar5 = uVar4 / 0x14 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x14,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1470e35ac FUN_1470e35ac body=107 status=ok
// SIG undefined FUN_1470e35ac(void)

/* WARNING: Removing unreachable block (ram,0x0001470e35de) */
/* WARNING: Removing unreachable block (ram,0x0001470e35ba) */
/* WARNING: Removing unreachable block (ram,0x0001470e35d0) */
/* WARNING: Removing unreachable block (ram,0x0001470e35e9) */
/* WARNING: Removing unreachable block (ram,0x0001470e35d2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1470e35ac(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14c9a6780;
  LOCK();
  UNLOCK();
  DAT_14c9a6780 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14c9a6788 = _DAT_14c9a6788 + -1;
    UNLOCK();
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar2[2] != 0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    LOCK();
    _DAT_14c9a6788 = _DAT_14c9a6788 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1470e3618 FUN_1470e3618 body=137 status=ok
// SIG undefined FUN_1470e3618(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1470e3618(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  LOCK();
  _DAT_14c9a6788 = _DAT_14c9a6788 + 1;
  UNLOCK();
  uVar1 = FUN_1470e36a2(DAT_14c9a6780);
  param_1[1] = uVar1;
  param_1[2] = &DAT_14c9a6780;
  LOCK();
  _DAT_14c9a6788 = _DAT_14c9a6788 + 1;
  UNLOCK();
  param_1[3] = param_1;
  FUN_1470e3724(param_1 + 1);
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  param_1[4] = 0;
  param_1[5] = &DAT_14c9a6780;
  LOCK();
  _DAT_14c9a6788 = _DAT_14c9a6788 + 1;
  UNLOCK();
  param_1[6] = param_1;
  FUN_1470e3724(param_1 + 4);
  LOCK();
  _DAT_14c9a6788 = _DAT_14c9a6788 + -1;
  UNLOCK();
  return param_1;
}



// FUNCTION 1470e36a2 FUN_1470e36a2 body=130 status=ok
// SIG undefined FUN_1470e36a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1470e36a2(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  do {
    if (param_1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    lVar2 = param_1[2];
    if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) & 0x40018000) == 0)) {
      uVar1 = *(uint *)(lVar2 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar2 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if ((*(uint *)(lVar2 + 8 + (ulonglong)(uVar1 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
          lVar2 = lVar2 + (ulonglong)(uVar1 & 0xffff) * 0x18;
LAB_1470e3714:
          if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
            return param_1;
          }
        }
      }
      else if ((_DAT_00000008 >> 0x15 & 1) == 0) {
        lVar2 = 0;
        goto LAB_1470e3714;
      }
    }
    param_1 = (undefined8 *)*param_1;
  } while( true );
}



// FUNCTION 1470e3724 FUN_1470e3724 body=61 status=ok
// SIG undefined FUN_1470e3724(void)

void FUN_1470e3724(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  while ((lVar2 != 0 &&
         (plVar1 = (longlong *)param_1[2], lVar2 = FUN_1447210f0(*(undefined8 *)(lVar2 + 0x10)),
         lVar2 != *plVar1))) {
    lVar2 = FUN_1470e36a2(*(undefined8 *)*param_1);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 1470e3762 FUN_1470e3762 body=29 status=ok
// SIG undefined FUN_1470e3762(void)

undefined8 FUN_1470e3762(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470e379a FUN_1470e379a body=29 status=ok
// SIG undefined FUN_1470e379a(void)

bool FUN_1470e379a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1470e37b8 FUN_1470e37b8 body=26 status=ok
// SIG undefined FUN_1470e37b8(void)

bool FUN_1470e37b8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1470e37d2 FUN_1470e37d2 body=24 status=ok
// SIG undefined FUN_1470e37d2(void)

bool FUN_1470e37d2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1470e37ea FUN_1470e37ea body=93 status=ok
// SIG undefined FUN_1470e37ea(void)

void FUN_1470e37ea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1c83e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1470e3848 FUN_1470e3848 body=93 status=ok
// SIG undefined FUN_1470e3848(void)

void FUN_1470e3848(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1c83e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1470e38a6 FUN_1470e38a6 body=126 status=ok
// SIG undefined FUN_1470e38a6(void)

void FUN_1470e38a6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a1c83e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001470e3915. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1470e3924 FUN_1470e3924 body=35 status=ok
// SIG undefined FUN_1470e3924(void)

void FUN_1470e3924(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001470e3943. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 1470e3948 FUN_1470e3948 body=142 status=ok
// SIG undefined FUN_1470e3948(void)

bool FUN_1470e3948(longlong param_1)

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
    (**(code **)(param_1 + 0x20))(lVar2);
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



// FUNCTION 1470e39d8 FUN_1470e39d8 body=96 status=ok
// SIG undefined FUN_1470e39d8(void)

void FUN_1470e39d8(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 6,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 6)) {
      uVar2 = uVar1 >> 6 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x40,8);
  }
  return;
}



// FUNCTION 1470e3a38 FUN_1470e3a38 body=88 status=ok
// SIG undefined FUN_1470e3a38(void)

void FUN_1470e3a38(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  lVar1 = *(longlong *)(param_1 + 0x900);
  if (*(longlong *)(param_1 + 0x900) == 0) {
    lVar1 = param_1;
  }
  FUN_140cfa737(lVar1,*(undefined4 *)(param_1 + 0x908));
  *(undefined4 *)(param_1 + 0x908) = 0;
  if (*(int *)(param_1 + 0x90c) == param_2) {
    return;
  }
  FUN_1470e3a92(param_1,param_2);
  return;
}



// FUNCTION 1470e3a92 FUN_1470e3a92 body=126 status=ok
// SIG undefined FUN_1470e3a92(void)

void FUN_1470e3a92(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x20;
    if (0x20 < param_2) {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x48,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 / 0x48)) {
        uVar2 = uVar1 / 0x48 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0x90c)) {
    *(int *)(param_1 + 0x90c) = (int)uVar2;
    FUN_14576ef82(param_1,*(undefined4 *)(param_1 + 0x908),uVar2,0x48);
    return;
  }
  return;
}



// FUNCTION 1470e3b12 FUN_1470e3b12 body=132 status=ok
// SIG undefined FUN_1470e3b12(void)

void FUN_1470e3b12(longlong param_1,int param_2)

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



// FUNCTION 1470e3b98 FUN_1470e3b98 body=107 status=ok
// SIG undefined FUN_1470e3b98(void)

void FUN_1470e3b98(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar1 = DAT_14c9a7418;
  if (param_1 <= (int)DAT_14c9a7418) {
    iVar2 = 0x20;
    if (0x20 < DAT_14c9a7418) {
      lVar5 = (longlong)(int)DAT_14c9a7418;
      if (0x20 < DAT_14c9a741c) {
        lVar5 = lVar5 + ((ulonglong)(lVar5 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 4,0);
      iVar3 = (int)(uVar4 >> 4);
      iVar2 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar2 = iVar3;
      }
    }
    DAT_14c9a741c = iVar2;
    FUN_1470e3c04(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(DAT_14c9a7418);
}



// FUNCTION 1470e3c04 FUN_1470e3c04 body=142 status=ok
// SIG undefined FUN_1470e3c04(void)

void FUN_1470e3c04(int param_1,uint param_2)

{
  if (param_2 < 0x21) {
    if (DAT_14c9a7410 == (void *)0x0) {
      return;
    }
    memmove(&DAT_14c9a7210,DAT_14c9a7410,(longlong)param_1 << 4);
    param_1 = 0;
    param_2 = 0;
  }
  else if (DAT_14c9a7410 == (void *)0x0) {
    FUN_1446efa72(&DAT_14c9a7410,0,param_2,0x10);
    memmove(DAT_14c9a7410,&DAT_14c9a7210,(longlong)param_1 << 4);
    return;
  }
  FUN_1446efa72(&DAT_14c9a7410,param_1,param_2,0x10);
  return;
}



// FUNCTION 1470e3c92 FUN_1470e3c92 body=127 status=ok
// SIG undefined FUN_1470e3c92(void)

void FUN_1470e3c92(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x3c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0xc,0);
      iVar4 = (int)(uVar3 / 0xc);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x3c) = iVar5;
    FUN_1470e3d12(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1470e3d12 FUN_1470e3d12 body=140 status=ok
// SIG undefined FUN_1470e3d12(void)

void FUN_1470e3d12(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x30);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xc);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x30,0,param_3,0xc);
    memmove(*(void **)((longlong)param_1 + 0x30),param_1,(longlong)param_2 * 0xc);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x30,param_2,param_3,0xc);
  return;
}



// FUNCTION 1470e3d9e FUN_1470e3d9e body=127 status=ok
// SIG undefined FUN_1470e3d9e(void)

void FUN_1470e3d9e(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x3c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0xc,0);
      iVar4 = (int)(uVar3 / 0xc);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x3c) = iVar5;
    FUN_1470e3e1e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1470e3e1e FUN_1470e3e1e body=140 status=ok
// SIG undefined FUN_1470e3e1e(void)

void FUN_1470e3e1e(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x30);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xc);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x30,0,param_3,0xc);
    memmove(*(void **)((longlong)param_1 + 0x30),param_1,(longlong)param_2 * 0xc);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x30,param_2,param_3,0xc);
  return;
}



// FUNCTION 1470e3eaa FUN_1470e3eaa body=138 status=ok
// SIG undefined FUN_1470e3eaa(void)

void FUN_1470e3eaa(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
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
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1470e3f34 FUN_1470e3f34 body=138 status=ok
// SIG undefined FUN_1470e3f34(void)

void FUN_1470e3f34(longlong *param_1,int param_2,int param_3)

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
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
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



// FUNCTION 1470e3fc0 FUN_1470e3fc0 body=1 status=ok
// SIG undefined FUN_1470e3fc0(void)

void FUN_1470e3fc0(void)

{
  return;
}



// FUNCTION 1470e3fc2 FUN_1470e3fc2 body=30 status=ok
// SIG undefined FUN_1470e3fc2(void)

void FUN_1470e3fc2(undefined8 *param_1,char param_2)

{
  undefined8 *puVar1;
  
  puVar1 = &DAT_14c9a7870;
  if (param_2 != '\0') {
    puVar1 = &DAT_14c9a7868;
  }
  *param_1 = *puVar1;
  return;
}



// FUNCTION 1470e3fe0 FUN_1470e3fe0 body=181 status=ok
// SIG undefined FUN_1470e3fe0(void)

undefined8 * FUN_1470e3fe0(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    lVar6 = FUN_144b2ab1c(param_2,param_3);
    if (lVar6 != 0) {
      FUN_144a7484c(lVar6 + 0x48,&local_48);
      *param_1 = local_48;
      param_1[1] = uStack_40;
      param_1[2] = local_38;
      param_1[3] = uStack_30;
      uVar5 = *(undefined8 *)(lVar6 + 0x38);
      uVar1 = *(undefined8 *)(lVar6 + 0x40);
      param_1[4] = *(undefined8 *)(lVar6 + 0x30);
      param_1[5] = uVar5;
      param_1[6] = uVar1;
      param_1[7] = 0;
      uVar2 = *(undefined4 *)(lVar6 + 100);
      uVar3 = *(undefined4 *)(lVar6 + 0x68);
      uVar4 = *(undefined4 *)(lVar6 + 0x6c);
      uVar1 = *(undefined8 *)(lVar6 + 0x70);
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar6 + 0x60);
      *(undefined4 *)((longlong)param_1 + 0x44) = uVar2;
      *(undefined4 *)(param_1 + 9) = uVar3;
      *(undefined4 *)((longlong)param_1 + 0x4c) = uVar4;
      param_1[10] = uVar1;
      param_1[0xb] = 0;
      if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_1;
    }
  }
  puVar7 = &DAT_14c846480;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *param_1 = *puVar7;
    puVar7 = puVar7 + 1;
    param_1 = param_1 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
}



// FUNCTION 1470e4096 FUN_1470e4096 body=88 status=ok
// SIG undefined FUN_1470e4096(void)

void FUN_1470e4096(longlong param_1,longlong *param_2)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  *(int *)(local_18 + 0x94) = *(int *)(local_18 + 0x94) + 1;
  FUN_1468be722();
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470e40f0 FUN_1470e40f0 body=742 status=ok
// SIG undefined FUN_1470e40f0(void)

void FUN_1470e40f0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  
  lVar6 = (longlong)*(int *)(*(longlong *)(param_1 + 0x30) + 0x30);
  if (lVar6 != 0) {
    plVar12 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x28);
    plVar1 = plVar12 + lVar6;
    do {
      lVar6 = *plVar12;
      lVar10 = *(longlong *)(lVar6 + 0x20);
      if (lVar10 != 0) {
        plVar4 = *(longlong **)(lVar10 + 0x28);
        iVar3 = *(int *)(lVar10 + 0x30);
        lVar11 = (longlong)iVar3;
        if (lVar11 != 0) {
          lVar7 = lVar11 << 5;
          plVar8 = plVar4;
          do {
            if (((char)plVar8[1] == '\x01') && (*plVar8 == lVar6)) {
              if (plVar8 != (longlong *)0x0) goto LAB_1470e419c;
              break;
            }
            plVar8 = plVar8 + 4;
            lVar7 = lVar7 + -0x20;
          } while (lVar7 != 0);
        }
        *(uint *)(lVar10 + 0x30) = iVar3 + 1U;
        if (*(uint *)(lVar10 + 0x34) < iVar3 + 1U) {
          FUN_1406f8fea((undefined8 *)(lVar10 + 0x28),iVar3);
          plVar4 = *(longlong **)(lVar10 + 0x28);
        }
        plVar4[lVar11 * 4] = lVar6;
        *(undefined1 *)(plVar4 + lVar11 * 4 + 1) = 1;
        puVar2 = (undefined8 *)((longlong)plVar4 + lVar11 * 0x20 + 0xc);
        *puVar2 = 0;
        puVar2[1] = 0;
        FUN_14024bea0(lVar6,1);
      }
LAB_1470e419c:
      if ((longlong)*(int *)(lVar6 + 0x30) != 0) {
        plVar4 = *(longlong **)(lVar6 + 0x28);
        plVar8 = plVar4 + (longlong)*(int *)(lVar6 + 0x30) * 4;
        do {
          lVar10 = *plVar4;
          if (lVar10 == 0) goto switchD_1470e41d7_default;
          switch((char)plVar4[1]) {
          case '\x01':
            if (*(longlong *)(lVar10 + 0x20) != lVar6) {
              FUN_1403ecbfe(lVar10,lVar6);
            }
            goto switchD_1470e41d7_default;
          case '\x02':
            plVar5 = *(longlong **)(lVar10 + 0x28);
            iVar3 = *(int *)(lVar10 + 0x30);
            lVar11 = (longlong)iVar3;
            if (lVar11 != 0) {
              lVar7 = lVar11 << 5;
              plVar9 = plVar5;
              do {
                if (((char)plVar9[1] == '\x03') && (*plVar9 == lVar6)) {
                  if (plVar9 != (longlong *)0x0) goto switchD_1470e41d7_default;
                  break;
                }
                plVar9 = plVar9 + 4;
                lVar7 = lVar7 + -0x20;
              } while (lVar7 != 0);
            }
            *(uint *)(lVar10 + 0x30) = iVar3 + 1U;
            if (*(uint *)(lVar10 + 0x34) < iVar3 + 1U) {
              FUN_1406f8fea((undefined8 *)(lVar10 + 0x28),iVar3);
              plVar5 = *(longlong **)(lVar10 + 0x28);
            }
            lVar10 = lVar11 * 0x20;
            plVar5[lVar11 * 4] = lVar6;
            *(undefined1 *)(plVar5 + lVar11 * 4 + 1) = 3;
            break;
          case '\x03':
            plVar5 = *(longlong **)(lVar10 + 0x28);
            iVar3 = *(int *)(lVar10 + 0x30);
            lVar11 = (longlong)iVar3;
            if (lVar11 != 0) {
              lVar7 = lVar11 << 5;
              plVar9 = plVar5;
              do {
                if (((char)plVar9[1] == '\x02') && (*plVar9 == lVar6)) {
                  if (plVar9 != (longlong *)0x0) goto switchD_1470e41d7_default;
                  break;
                }
                plVar9 = plVar9 + 4;
                lVar7 = lVar7 + -0x20;
              } while (lVar7 != 0);
            }
            *(uint *)(lVar10 + 0x30) = iVar3 + 1U;
            if (*(uint *)(lVar10 + 0x34) < iVar3 + 1U) {
              FUN_1406f8fea((undefined8 *)(lVar10 + 0x28),iVar3);
              plVar5 = *(longlong **)(lVar10 + 0x28);
            }
            lVar10 = lVar11 * 0x20;
            plVar5[lVar11 * 4] = lVar6;
            *(undefined1 *)(plVar5 + lVar11 * 4 + 1) = 2;
            break;
          case '\x04':
            plVar5 = *(longlong **)(lVar10 + 0x28);
            iVar3 = *(int *)(lVar10 + 0x30);
            lVar11 = (longlong)iVar3;
            if (lVar11 != 0) {
              lVar7 = lVar11 << 5;
              plVar9 = plVar5;
              do {
                if (((char)plVar9[1] == '\x05') && (*plVar9 == lVar6)) {
                  if (plVar9 != (longlong *)0x0) goto switchD_1470e41d7_default;
                  break;
                }
                plVar9 = plVar9 + 4;
                lVar7 = lVar7 + -0x20;
              } while (lVar7 != 0);
            }
            *(uint *)(lVar10 + 0x30) = iVar3 + 1U;
            if (*(uint *)(lVar10 + 0x34) < iVar3 + 1U) {
              FUN_1406f8fea((undefined8 *)(lVar10 + 0x28),iVar3);
              plVar5 = *(longlong **)(lVar10 + 0x28);
            }
            lVar10 = lVar11 * 0x20;
            plVar5[lVar11 * 4] = lVar6;
            *(undefined1 *)(plVar5 + lVar11 * 4 + 1) = 5;
            break;
          case '\x05':
            plVar5 = *(longlong **)(lVar10 + 0x28);
            iVar3 = *(int *)(lVar10 + 0x30);
            lVar11 = (longlong)iVar3;
            if (lVar11 != 0) {
              lVar7 = lVar11 << 5;
              plVar9 = plVar5;
              do {
                if (((char)plVar9[1] == '\x04') && (*plVar9 == lVar6)) {
                  if (plVar9 != (longlong *)0x0) goto switchD_1470e41d7_default;
                  break;
                }
                plVar9 = plVar9 + 4;
                lVar7 = lVar7 + -0x20;
              } while (lVar7 != 0);
            }
            *(uint *)(lVar10 + 0x30) = iVar3 + 1U;
            if (*(uint *)(lVar10 + 0x34) < iVar3 + 1U) {
              FUN_1406f8fea((undefined8 *)(lVar10 + 0x28),iVar3);
              plVar5 = *(longlong **)(lVar10 + 0x28);
            }
            lVar10 = lVar11 * 0x20;
            plVar5[lVar11 * 4] = lVar6;
            *(undefined1 *)(plVar5 + lVar11 * 4 + 1) = 4;
            break;
          default:
            goto switchD_1470e41d7_default;
          }
          puVar2 = (undefined8 *)((longlong)plVar5 + lVar10 + 0xc);
          *puVar2 = 0;
          puVar2[1] = 0;
          FUN_14024bea0(*plVar4,1);
switchD_1470e41d7_default:
          plVar4 = plVar4 + 4;
        } while (plVar4 != plVar8);
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar1);
  }
  return;
}



// FUNCTION 1470e43d6 FUN_1470e43d6 body=48 status=ok
// SIG undefined FUN_1470e43d6(void)

longlong FUN_1470e43d6(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  FUN_14034cca6(param_1,param_3);
  *(undefined8 *)(param_1 + 0x38) = *param_2;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  return param_1;
}



// FUNCTION 1470e4406 FUN_1470e4406 body=114 status=ok
// SIG undefined FUN_1470e4406(void)

longlong FUN_1470e4406(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1470ec508(local_58,param_3);
  FUN_14034cca6(param_1,local_58);
  *(undefined8 *)(param_1 + 0x38) = *param_2;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  FUN_144a2da94(local_58);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470e447a FUN_1470e447a body=21 status=ok
// SIG undefined FUN_1470e447a(void)

void FUN_1470e447a(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  *param_2 = *(undefined8 *)(param_1 + 0x38);
  FUN_144983130(param_3,param_1);
  return;
}



// FUNCTION 1470e4490 FUN_1470e4490 body=1038 status=ok
// SIG undefined FUN_1470e4490(void)

undefined8 FUN_1470e4490(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  longlong *local_98;
  undefined8 uStack_90;
  undefined8 *local_88;
  ulonglong uStack_80;
  undefined8 *local_78;
  ulonglong uStack_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_4 != 0) {
    uVar6 = FUN_144a7ef38();
    lVar7 = FUN_144a78ede(param_4,uVar6);
    if (lVar7 != 0) {
      local_78 = (undefined8 *)0x0;
      uStack_70 = 0;
      pwVar8 = wcschr((wchar_t *)*param_2,L',');
      if (pwVar8 == (wchar_t *)0x0) {
        FUN_14020fad6(&local_78,*param_2);
        iVar5 = (int)uStack_70 + -1;
        if ((int)uStack_70 == 0) {
          iVar5 = 0;
        }
        pwVar8 = (wchar_t *)((longlong)iVar5 * 2 + *param_2);
      }
      else {
        FUN_1400089be(&local_88,(ulonglong)((longlong)pwVar8 - *param_2) >> 1);
        if (local_78 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        pwVar8 = pwVar8 + 1;
        local_78 = local_88;
        uStack_70 = uStack_80;
      }
      *param_2 = (longlong)pwVar8;
      local_88 = (undefined8 *)0x0;
      uStack_80 = 0;
      FUN_1403de9f2(&local_78,&local_88,&DAT_149e0635c,1);
      if (0 < (int)uStack_80) {
        local_98 = (longlong *)0x0;
        uStack_90 = 0;
        local_a8 = param_1;
        local_a0 = lVar7;
        FUN_1402191ca();
        if ((longlong)(int)uStack_80 != 0) {
          puVar15 = local_88 + (longlong)(int)uStack_80 * 2;
          puVar12 = local_88;
          do {
            uVar10 = uStack_90;
            lVar7 = (longlong)(int)uStack_90;
            uVar4 = (int)uStack_90 + 1;
            uStack_90 = CONCAT44(uStack_90._4_4_,uVar4);
            if (uStack_90._4_4_ < uVar4) {
              FUN_1446f84a2(&local_98,uVar10 & 0xffffffff);
            }
            plVar9 = local_98;
            iVar5 = *(int *)(puVar12 + 1) + -1;
            if (*(int *)(puVar12 + 1) == 0) {
              iVar5 = 0;
            }
            FUN_1446f82e2(&local_68,iVar5,*puVar12,1);
            plVar9[lVar7] = local_68;
            puVar12 = puVar12 + 2;
          } while (puVar12 != puVar15);
        }
        uVar6 = FUN_145b2e98c();
        plVar9 = (longlong *)FUN_144718840(param_4,uVar6);
        if (plVar9 == (longlong *)0x0) {
          uVar10 = uStack_90 & 0xffffffff;
        }
        else {
          lVar7 = (**(code **)(*plVar9 + 0x10))(plVar9);
          uVar10 = uStack_90 & 0xffffffff;
          if (lVar7 != 0) {
            do {
              if (0 < (int)uStack_90) {
                uVar16 = uVar10;
                do {
                  if (*(int *)(lVar7 + 0x30) != 0) {
                    lVar13 = 0;
                    do {
                      if (((*(char *)(*(longlong *)(lVar7 + 0x28) + 8 + lVar13) == '\x01') &&
                          (lVar11 = *(longlong *)(*(longlong *)(lVar7 + 0x28) + lVar13), lVar11 != 0
                          )) && (*(longlong *)(lVar11 + 0x10) == local_98[uVar16 - 1])) {
                        uVar14 = uVar16;
                        if ((longlong)(int)uStack_90 <= (longlong)uVar16) goto LAB_1470e4768;
                        goto LAB_1470e468a;
                      }
                      lVar13 = lVar13 + 0x20;
                    } while ((longlong)*(int *)(lVar7 + 0x30) << 5 != lVar13);
                  }
LAB_1470e4676:
                  bVar3 = 1 < (longlong)uVar16;
                  uVar16 = uVar16 - 1;
                } while (bVar3);
              }
              lVar7 = *(longlong *)(lVar7 + 0x20);
            } while (lVar7 != 0);
          }
        }
        lVar7 = (longlong)*(int *)(*(longlong *)(local_a0 + 0x30) + 0x30);
        if (lVar7 != 0) {
          lVar13 = 0;
          do {
            lVar11 = *(longlong *)(*(longlong *)(*(longlong *)(local_a0 + 0x30) + 0x28) + lVar13);
            if (((lVar11 != 0) && (*(longlong *)(lVar11 + 0x20) == 0)) &&
               (*(longlong *)(lVar11 + 0x10) == *local_98)) {
              if ((int)uVar10 < 2) goto LAB_1470e4768;
              plVar9 = local_98 + 1;
              goto LAB_1470e4851;
            }
            lVar13 = lVar13 + 8;
          } while (lVar7 * 8 != lVar13);
        }
LAB_1470e4766:
        lVar11 = 0;
        goto LAB_1470e4768;
      }
      lVar11 = 0;
      goto LAB_1470e4776;
    }
  }
  goto LAB_1470e47e3;
LAB_1470e468a:
  piVar1 = (int *)(lVar11 + 0x30);
  if ((longlong)*piVar1 == 0) goto LAB_1470e4676;
  plVar9 = (longlong *)(lVar11 + 0x28);
  lVar13 = 0;
  while (((*(char *)(*plVar9 + 8 + lVar13) != '\x01' ||
          (lVar11 = *(longlong *)(*plVar9 + lVar13), lVar11 == 0)) ||
         (*(longlong *)(lVar11 + 0x10) != local_98[uVar14]))) {
    lVar13 = lVar13 + 0x20;
    if ((longlong)*piVar1 * 0x20 == lVar13) goto LAB_1470e4676;
  }
  uVar14 = uVar14 + 1;
  if ((int)uStack_90 <= (int)uVar14) goto LAB_1470e4768;
  goto LAB_1470e468a;
  while( true ) {
    plVar2 = (longlong *)(lVar11 + 0x28);
    lVar7 = 0;
    while (((*(char *)(*plVar2 + 8 + lVar7) != '\x01' ||
            (lVar11 = *(longlong *)(*plVar2 + lVar7), lVar11 == 0)) ||
           (*(longlong *)(lVar11 + 0x10) != *plVar9))) {
      lVar7 = lVar7 + 0x20;
      if ((longlong)*piVar1 * 0x20 == lVar7) goto LAB_1470e4766;
    }
    plVar9 = plVar9 + 1;
    if (local_98 + (int)uVar10 <= plVar9) break;
LAB_1470e4851:
    piVar1 = (int *)(lVar11 + 0x30);
    if ((longlong)*piVar1 == 0) goto LAB_1470e4766;
  }
LAB_1470e4768:
  param_1 = local_a8;
  if (local_98 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1470e4776:
  FUN_1447a1747(local_88,uStack_80 & 0xffffffff);
  if (local_88 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((lVar11 != 0) && (*(longlong *)(lVar11 + 8) != 0)) {
    plVar9 = *(longlong **)(*(longlong *)(lVar11 + 8) + 0xa0);
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar2 = plVar9 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
    goto LAB_1470e47e7;
  }
LAB_1470e47e3:
  plVar9 = (longlong *)0x0;
  lVar11 = 0;
LAB_1470e47e7:
  *(longlong *)(param_1 + 8) = lVar11;
  plVar2 = *(longlong **)(param_1 + 0x10);
  *(longlong **)(param_1 + 0x10) = plVar9;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1470e48a0 FUN_1470e48a0 body=125 status=ok
// SIG undefined FUN_1470e48a0(void)

undefined8 FUN_1470e48a0(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1470e491e(param_1,&local_28);
  if (&local_28 == param_2) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_28;
    *(undefined4 *)(param_2 + 1) = local_20;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470e491e FUN_1470e491e body=102 status=ok
// SIG undefined FUN_1470e491e(void)

undefined8 * FUN_1470e491e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  *param_2 = 0;
  param_2[1] = 0;
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) {
        return param_2;
      }
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
    lVar4 = *(longlong *)(param_1 + 8);
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
    if (lVar4 != 0) {
      FUN_142b3f80e(param_2,lVar4);
    }
  }
  return param_2;
}



// FUNCTION 1470e4986 FUN_1470e4986 body=1 status=ok
// SIG undefined FUN_1470e4986(void)

void FUN_1470e4986(void)

{
  return;
}



// FUNCTION 1470e498a FUN_1470e498a body=14 status=ok
// SIG undefined FUN_1470e498a(void)

longlong FUN_1470e498a(undefined8 param_1,longlong param_2)

{
  *(undefined2 *)(param_2 + 0x18) = 0;
  *(undefined1 *)(param_2 + 0x20) = 0;
  return param_2;
}



// FUNCTION 1470e49a6 FUN_1470e49a6 body=1 status=ok
// SIG undefined FUN_1470e49a6(void)

void FUN_1470e49a6(void)

{
  return;
}



// FUNCTION 1470e49a8 FUN_1470e49a8 body=24 status=ok
// SIG undefined FUN_1470e49a8(void)

undefined1 FUN_1470e49a8(void)

{
  undefined1 *in_R9;
  
  FUN_140d72db8();
  *in_R9 = 1;
  return 1;
}



// FUNCTION 1470e49c0 FUN_1470e49c0 body=139 status=ok
// SIG undefined FUN_1470e49c0(void)

longlong * FUN_1470e49c0(char *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  bool bVar9;
  
  if ((*param_1 == '\x03') && (plVar3 = *(longlong **)(param_1 + 0x10), plVar3 != (longlong *)0x0))
  {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_1470e4a39;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar7 == iVar5;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *(longlong *)(param_1 + 8);
    bVar9 = true;
    if (lVar4 != 0) {
      uVar8 = FUN_1462ad782();
      cVar6 = FUN_1448093f4(lVar4,uVar8);
      if (cVar6 != '\0') {
        *param_2 = lVar4;
        param_2[1] = (longlong)plVar3;
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        bVar9 = false;
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
    if (!bVar9) {
      return param_2;
    }
  }
LAB_1470e4a39:
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1470e4a4c FUN_1470e4a4c body=95 status=ok
// SIG undefined FUN_1470e4a4c(void)

longlong FUN_1470e4a4c(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  do {
    lVar1 = FUN_1402b888a(param_3,param_1 + 0x58);
    if (lVar1 != 0) {
      FUN_1447c3578(lVar1,param_2,param_4);
      return param_2;
    }
  } while ((*(longlong *)(param_1 + 8) != 0) &&
          (param_1 = *(longlong *)(*(longlong *)(param_1 + 8) + 8), param_1 != 0));
  *(undefined2 *)(param_2 + 0x18) = 0;
  *(undefined1 *)(param_2 + 0x20) = 0;
  return param_2;
}


