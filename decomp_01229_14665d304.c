// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14665d304 FUN_14665d304 body=26 status=ok
// SIG undefined FUN_14665d304(void)

bool FUN_14665d304(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14665d31e FUN_14665d31e body=24 status=ok
// SIG undefined FUN_14665d31e(void)

bool FUN_14665d31e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14665d336 FUN_14665d336 body=93 status=ok
// SIG undefined FUN_14665d336(void)

void FUN_14665d336(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dbf30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14665d394 FUN_14665d394 body=132 status=ok
// SIG undefined FUN_14665d394(void)

void FUN_14665d394(longlong param_1,int param_2)

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



// FUNCTION 14665d418 FUN_14665d418 body=24 status=ok
// SIG undefined FUN_14665d418(void)

bool FUN_14665d418(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14665d430 FUN_14665d430 body=24 status=ok
// SIG undefined FUN_14665d430(void)

bool FUN_14665d430(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14665d448 FUN_14665d448 body=26 status=ok
// SIG undefined FUN_14665d448(void)

bool FUN_14665d448(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14665d462 FUN_14665d462 body=146 status=ok
// SIG undefined FUN_14665d462(void)

void FUN_14665d462(longlong param_1,int param_2)

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



// FUNCTION 14665d4f4 FUN_14665d4f4 body=93 status=ok
// SIG undefined FUN_14665d4f4(void)

void FUN_14665d4f4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9dc390;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b9dc320;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14665d552 FUN_14665d552 body=59 status=ok
// SIG undefined FUN_14665d552(void)

ulonglong FUN_14665d552(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_2 != 0) {
    lVar2 = FUN_1400b4698();
    lVar1 = *(longlong *)(param_2 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (uVar3 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1),
       *(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
       lVar2 + 0x30)) goto LAB_14665d581;
  }
  uVar3 = 0;
LAB_14665d581:
  return uVar3 & 0xffffffff;
}



// FUNCTION 14665d58e FUN_14665d58e body=775 status=ok
// SIG undefined FUN_14665d58e(void)

void FUN_14665d58e(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_118 [36];
  int local_f4;
  longlong *local_f0;
  longlong *local_e8;
  undefined1 local_e0 [12];
  undefined1 local_d4 [12];
  longlong *local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined2 local_98;
  undefined2 uStack_96;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar5 = (**(code **)(*param_1 + 0x180))();
  if (lVar5 != 0) {
    plVar6 = (longlong *)FUN_140ec3c65(lVar5);
    if (plVar6 != (longlong *)0x0) {
      local_f0 = param_1 + 0x44;
      local_e8 = param_1 + 0x46;
      local_98 = 0;
      uStack_96 = 0;
      uStack_94 = 1;
      local_88 = 0xffffffff;
      uStack_80 = uStack_80 & 0xffffffff00000000;
      local_f4 = 0;
      local_b8 = local_e8;
      if ((int)param_1[0x49] != 0) {
        local_90 = local_e8;
        FUN_1449c0562(&local_98);
        local_f4 = (int)param_1[0x49];
        local_b8 = local_90;
      }
      local_90._4_4_ = (undefined4)((ulonglong)local_b8 >> 0x20);
      local_c0 = CONCAT44(uStack_94,CONCAT22(uStack_96,local_98));
      local_b0 = local_88;
      uVar2 = local_b0;
      local_a8 = (undefined4)uStack_80;
      local_a4 = uStack_80._4_4_;
      local_c8 = local_f0;
      local_b0._4_4_ = (int)((ulonglong)local_88 >> 0x20);
      if ((local_b0._4_4_ != local_f4) || (plVar3 = local_b8, local_b8 != local_e8)) {
        iVar4 = local_b0._4_4_;
        local_b0 = uVar2;
        do {
          local_88 = 0;
          uStack_80 = 0;
          local_78 = 0;
          local_70 = 0;
          uStack_68 = 0;
          lVar1 = *local_c8 + 0x10 + (longlong)iVar4 * 0x50;
          local_90._0_4_ = *(undefined4 *)(lVar1 + -8);
          uVar2 = *(undefined8 *)(lVar1 + -0x10);
          local_98 = (undefined2)uVar2;
          uStack_96 = (undefined2)((ulonglong)uVar2 >> 0x10);
          uStack_94 = (undefined4)((ulonglong)uVar2 >> 0x20);
          FUN_1447715ec(&local_88,lVar1);
          local_a0 = DAT_14cbe7058;
          FUN_1401533ba(local_d4,&local_a0,1);
          FUN_144928d62(&local_88,5,local_d4);
          (**(code **)(*plVar6 + 0x40))(plVar6,&local_98,*(undefined8 *)(lVar1 + 0x28));
          local_a0 = DAT_14cbe7060;
          FUN_1401533ba(local_e0,&local_a0,1);
          FUN_144928d62(&local_88,5,local_e0);
          (**(code **)(*plVar6 + 0x40))(plVar6,&local_98,*(undefined8 *)(lVar1 + 0x30));
          if (local_70 != 0) {
            FUN_1400020a8();
          }
          local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0 & ~local_c0._4_4_);
          FUN_1449c0562(&local_c0);
          plVar3 = (longlong *)CONCAT44(local_90._4_4_,(undefined4)local_90);
          iVar4 = local_b0._4_4_;
          uVar2 = local_b0;
        } while (local_c8 != local_f0 || (local_b8 != local_e8 || local_b0._4_4_ != local_f4));
      }
      local_b0 = uVar2;
      local_90 = plVar3;
      FUN_1460d87f8(param_1 + 0x14);
      FUN_140457ffc(&DAT_14cb10980,param_1);
      if (param_1[0x58] != 0) {
        lVar5 = FUN_1406f612e(lVar5);
        if (lVar5 != 0) {
          FUN_140457ffc(lVar5 + 0x30,param_1);
          param_1[0x58] = 0;
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14665d896 FUN_14665d896 body=66 status=ok
// SIG undefined FUN_14665d896(void)

void FUN_14665d896(undefined8 param_1,longlong param_2)

{
  FUN_140907f04();
  FUN_140bf2acc(param_2,param_2 + 0x18,&DAT_14cbe7058,0);
  FUN_140bf2acc(param_2,param_2 + 0x18,&DAT_14cbe7060,0);
  return;
}



// FUNCTION 14665d8d8 FUN_14665d8d8 body=49 status=ok
// SIG undefined FUN_14665d8d8(void)

longlong * FUN_14665d8d8(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14130c6ae();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 14665d90a FUN_14665d90a body=227 status=ok
// SIG undefined FUN_14665d90a(void)

byte FUN_14665d90a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(longlong *)(param_1 + 0x1b0) == 0) ||
      (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x1e0), lVar4 == 0)) ||
     (lVar4 = *(longlong *)(lVar4 + 0x68), lVar4 == 0)) {
    bVar6 = 0;
    goto LAB_14665d9c1;
  }
  local_24 = FUN_140b9fef0(lVar4,param_2,0);
  lVar4 = FUN_140b9ffa8(param_1);
  bVar3 = 0;
  if (lVar4 == 0) {
LAB_14665d9e8:
    bVar6 = 0;
  }
  else {
    lVar5 = FUN_14130c6ae();
    piVar1 = (int *)(lVar5 + 0x38);
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *piVar1) ||
       (lVar5 = lVar5 + 0x30,
       *(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*piVar1 * 8) !=
       lVar5)) {
      bVar3 = (byte)lVar5;
      goto LAB_14665d9e8;
    }
    bVar6 = 1;
    if (*param_3 == 0) {
LAB_14665d9ea:
      bVar3 = 0;
    }
    else {
      cVar2 = FUN_14480f766(lVar4 + 0x198);
      if (cVar2 == '\0') goto LAB_14665d9ea;
      *param_3 = 0;
      bVar6 = 1;
      bVar3 = 1;
    }
  }
  bVar6 = bVar6 & bVar3;
LAB_14665d9c1:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14665d9ee FUN_14665d9ee body=143 status=ok
// SIG undefined FUN_14665d9ee(void)

undefined8 * FUN_14665d9ee(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0xb40);
  memset(_Dst,0,0xb40);
  FUN_140b1ac70(_Dst);
  _Dst[0x161] = 0;
  *(undefined4 *)(_Dst + 0x162) = 0;
  _Dst[0x15a] = 0;
  _Dst[0x15b] = 0;
  _Dst[0x15c] = 0;
  _Dst[0x15d] = 0;
  _Dst[0x15e] = 0;
  *(undefined8 *)((longlong)_Dst + 0xb14) = 0xffffffff00000080;
  *(undefined4 *)((longlong)_Dst + 0xb1c) = 0;
  _Dst[0x165] = 0;
  *(undefined4 *)(_Dst + 0x166) = 0;
  *_Dst = &PTR_FUN_14b8d8740;
  return _Dst;
}



// FUNCTION 14665da7e FUN_14665da7e body=99 status=ok
// SIG undefined FUN_14665da7e(void)

void FUN_14665da7e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_140c036ec();
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa8);
  if (lVar2 != 0) {
    lVar1 = FUN_1402095ca();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar2);
      }
      goto LAB_14665dac5;
    }
  }
  lVar2 = 0;
LAB_14665dac5:
  *(longlong *)(param_1 + 0x6a8) = lVar2;
  return;
}



// FUNCTION 14665dae2 FUN_14665dae2 body=110 status=ok
// SIG undefined FUN_14665dae2(void)

void FUN_14665dae2(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) != 1) {
    FUN_1406ba688(param_2,1);
  }
  puVar2 = (undefined8 *)FUN_1403f9e22(param_2);
  *puVar2 = DAT_14cb7bde0;
  *(undefined4 *)(puVar2 + 1) = DAT_14cb7bde8;
  bVar1 = *(byte *)(param_1 + 8);
  *(undefined1 *)((longlong)puVar2 + 0xc) = 1;
  *(uint *)(puVar2 + 3) = (uint)bVar1;
  puVar3 = &DAT_14cb7c580;
  if (bVar1 != 0) {
    puVar3 = &DAT_14cb7c588;
  }
  puVar2[2] = *puVar3;
  return;
}



// FUNCTION 14665db50 FUN_14665db50 body=82 status=ok
// SIG undefined FUN_14665db50(void)

void FUN_14665db50(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = (longlong *)FUN_144a8232a(&DAT_14cb7bde0);
  if (*param_2 == *plVar1) {
    cVar2 = FUN_1407eda54(*param_3);
    if (*(char *)(param_1 + 8) != cVar2) {
      *(char *)(param_1 + 8) = cVar2;
      FUN_140e10a64(param_1 + -0x3c8);
      return;
    }
  }
  return;
}



// FUNCTION 14665dba8 FUN_14665dba8 body=74 status=ok
// SIG undefined FUN_14665dba8(void)

void FUN_14665dba8(longlong param_1)

{
  FUN_140a462a2();
  *(byte *)(param_1 + 0x158) = *(byte *)(param_1 + 0x158) | 1;
  *(undefined4 *)(param_1 + 0x118) = 0x44bb8000;
  *(undefined8 *)(param_1 + 0x120) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x128) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x130) = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 0xe10) = 0;
  return;
}



// FUNCTION 14665dbf2 FUN_14665dbf2 body=615 status=ok
// SIG undefined FUN_14665dbf2(void)

longlong * FUN_14665dbf2(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14050cf44(param_1 + 0x1750,&local_48);
  plVar4 = local_40;
  *param_2 = (longlong)local_48;
  param_2[1] = (longlong)local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_40)(local_40);
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
  if (*param_2 == 0) {
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
    local_40 = (longlong *)FUN_146122cd9();
    local_48 = local_40 + 2;
    FUN_1413dc5cc(&local_48);
    plVar1 = local_40;
    plVar4 = local_48;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_40 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
    }
    local_58 = 0;
    FUN_1413dcc0a(plVar4,param_1 + 6000,param_3,0);
    plVar5 = (longlong *)FUN_14050d8a4(param_3);
    if (plVar5 != (longlong *)0x0) {
      uVar6 = FUN_140ba0042();
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x288))(plVar5,uVar6);
      if (plVar5 != (longlong *)0x0) {
        uVar6 = FUN_140ba0042();
        plVar7 = (longlong *)FUN_144718840(plVar5,uVar6);
        if (plVar7 != (longlong *)0x0 && plVar5 != plVar7) {
          lVar8 = (**(code **)(*plVar7 + 0x10))(plVar7);
          if (lVar8 != 0) {
            lVar9 = FUN_144a5dd5e();
            iVar3 = *(int *)(lVar9 + 0x38);
            if (((iVar3 <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar3 * 8) ==
                 lVar9 + 0x30)) && (1 < *(int *)(lVar8 + 0x3988))) {
              lVar9 = FUN_141870208(plVar4,CONCAT71((int7)(int3)((uint)iVar3 >> 8),1));
              if (lVar9 != 0) {
                FUN_1459b2546(lVar9,&DAT_14cbe6dd8,lVar8 + 0x3980,1);
              }
            }
          }
        }
      }
    }
    FUN_1413dc66a(plVar4,0,0,0);
    *param_2 = (longlong)plVar4;
    param_2[1] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
      LOCK();
      plVar4 = plVar1 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar1)(plVar1);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14665de5a FUN_14665de5a body=76 status=ok
// SIG undefined FUN_14665de5a(void)

undefined8 FUN_14665de5a(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_1458ef7c8(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x00014665de9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 14665deb2 FUN_14665deb2 body=203 status=ok
// SIG undefined FUN_14665deb2(void)

void FUN_14665deb2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = *(longlong *)(param_1 + 0x88);
  if ((lVar3 != 0) && (*(longlong *)(param_1 + 0x128) != 0)) {
    uVar5 = (**(code **)(*(longlong *)(lVar3 + 0x440) + 0x28))(lVar3 + 0x440);
    local_28 = *(undefined8 *)(param_1 + 0x128);
    local_20 = *(longlong *)(param_1 + 0x130);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    FUN_1405f862c(uVar5,&local_28);
    *(undefined8 *)(param_1 + 0x128) = 0;
    plVar4 = *(longlong **)(param_1 + 0x130);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x130) = 0;
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14665df7e FUN_14665df7e body=24 status=ok
// SIG undefined FUN_14665df7e(void)

bool FUN_14665df7e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14665df96 FUN_14665df96 body=101 status=ok
// SIG undefined FUN_14665df96(void)

void FUN_14665df96(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9dcbd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14665dffc FUN_14665dffc body=52 status=ok
// SIG undefined FUN_14665dffc(void)

void FUN_14665dffc(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014665e02d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2);
  return;
}



// FUNCTION 14665e030 FUN_14665e030 body=445 status=ok
// SIG undefined FUN_14665e030(void)

void FUN_14665e030(longlong *param_1)

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
        uVar10 = (longlong)(int)((uint)((ulonglong)uVar4 >> 0x20) ^ (uint)uVar4) &
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



// FUNCTION 14665e1ee FUN_14665e1ee body=445 status=ok
// SIG undefined FUN_14665e1ee(void)

void FUN_14665e1ee(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar10 = (longlong)(int)((uint)((ulonglong)uVar4 >> 0x20) ^ (uint)uVar4) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
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



// FUNCTION 14665e3ac FUN_14665e3ac body=26 status=ok
// SIG undefined FUN_14665e3ac(void)

bool FUN_14665e3ac(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14665e3c6 FUN_14665e3c6 body=24 status=ok
// SIG undefined FUN_14665e3c6(void)

bool FUN_14665e3c6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14665e3de FUN_14665e3de body=24 status=ok
// SIG undefined FUN_14665e3de(void)

bool FUN_14665e3de(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14665e3f6 FUN_14665e3f6 body=29 status=ok
// SIG undefined FUN_14665e3f6(void)

undefined8 FUN_14665e3f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14665e414 FUN_14665e414 body=26 status=ok
// SIG undefined FUN_14665e414(void)

bool FUN_14665e414(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14665e42e FUN_14665e42e body=24 status=ok
// SIG undefined FUN_14665e42e(void)

bool FUN_14665e42e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14665e446 FUN_14665e446 body=24 status=ok
// SIG undefined FUN_14665e446(void)

bool FUN_14665e446(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14665e45e FUN_14665e45e body=99 status=ok
// SIG undefined FUN_14665e45e(void)

undefined8 * FUN_14665e45e(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xb0);
  memset(puVar1 + 2,0,0xa0);
  puVar1[1] = 0xffffffffffffffff;
  *(undefined4 *)(puVar1 + 2) = 0xffffffff;
  memset(puVar1 + 3,0,0x8c);
  *puVar1 = &PTR_FUN_14b8fbe80;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 14665e4c2 FUN_14665e4c2 body=104 status=ok
// SIG undefined FUN_14665e4c2(void)

undefined8 * FUN_14665e4c2(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  uVar1 = *(undefined1 *)(param_1 + 8);
  *puVar2 = &PTR_LAB_14b9dd5f0;
  *(undefined1 *)(puVar2 + 1) = uVar1;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0xffffffff;
  puVar2[5] = 0;
  FUN_140df7f36(puVar2 + 2,0,1);
  *puVar2 = &PTR_FUN_14b9dd4b0;
  *param_2 = puVar2;
  return param_2;
}



// FUNCTION 14665e52a FUN_14665e52a body=93 status=ok
// SIG undefined FUN_14665e52a(void)

void FUN_14665e52a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9dd890;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14665e588 FUN_14665e588 body=42 status=ok
// SIG undefined FUN_14665e588(void)

void FUN_14665e588(longlong param_1)

{
  FUN_1401c3216();
  FUN_1458c64da(param_1 + 0x168);
  *(undefined8 *)(param_1 + 0x128) = 0;
  return;
}



// FUNCTION 14665e5b2 FUN_14665e5b2 body=403 status=ok
// SIG undefined FUN_14665e5b2(void)

longlong FUN_14665e5b2(longlong *param_1)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = (**(code **)(*param_1 + 0x2b8))();
  lVar4 = 0;
  if (lVar3 != 0) {
    lVar4 = FUN_14070560c();
    piVar1 = (int *)(lVar4 + 0x38);
    if ((*piVar1 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (lVar4 = lVar4 + 0x30,
       *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*piVar1 * 8) ==
       lVar4)) {
      lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
      lVar4 = 0;
      if (lVar5 != 0) {
        FUN_140212f8e(&local_50);
        local_60 = 0;
        local_68 = 0;
        local_70 = 0;
        local_78 = 0;
        FUN_14021300e(&local_48,0x7b2,1,1);
        lVar4 = (local_50 - local_48) * -0x29406b2a1a85bd43;
        if (0 < *(int *)(lVar5 + 0x238)) {
          lVar8 = 0;
          lVar7 = 0;
          do {
            plVar6 = (longlong *)FUN_14479d2ce(*(longlong *)(lVar5 + 0x230) + lVar8);
            if (plVar6 != (longlong *)0x0) {
              lVar4 = FUN_144a5dd5e();
              if ((*(int *)(lVar4 + 0x38) <= *(int *)(plVar6[2] + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
                  lVar4 + 0x30)) {
                cVar2 = (**(code **)(*plVar6 + 0x6c8))(plVar6);
                if (cVar2 != '\0') {
                  lVar4 = FUN_1402a1246(plVar6);
                  if ((lVar4 != 0) &&
                     ((ulonglong)((local_50 - local_48) / 10000000) < *(ulonglong *)(lVar4 + 0xf20))
                     ) {
                    FUN_148f05cae(lVar3,plVar6);
                  }
                }
              }
            }
            lVar7 = lVar7 + 1;
            lVar4 = (longlong)*(int *)(lVar5 + 0x238);
            lVar8 = lVar8 + 8;
          } while (lVar7 < lVar4);
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14665e746 FUN_14665e746 body=254 status=ok
// SIG undefined FUN_14665e746(void)

undefined8
FUN_14665e746(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_149e020b0;
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
  *local_48 = &PTR_FUN_14b9de400;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14665e846 FUN_14665e846 body=173 status=ok
// SIG undefined FUN_14665e846(void)

longlong * FUN_14665e846(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = &PTR_LAB_149e020b0;
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
  puVar3[2] = lVar5;
  *puVar3 = &PTR_FUN_14b9de400;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  return param_1;
}



// FUNCTION 14665e8f4 FUN_14665e8f4 body=156 status=ok
// SIG undefined FUN_14665e8f4(void)

void FUN_14665e8f4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_14485c47a(&local_30);
  uVar1 = FUN_14575181a(param_1 + 0x150,(uint)((ulonglong)local_30 >> 0x20) ^ (uint)local_30,
                        &local_30);
  local_38 = 0;
  FUN_14485c47a(&local_38,param_3);
  FUN_1457516dc(uVar1,(uint)((ulonglong)local_38 >> 0x20) ^ (uint)local_38,&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14665e992 FUN_14665e992 body=479 status=ok
// SIG undefined FUN_14665e992(void)

void FUN_14665e992(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
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
  if (*(longlong *)(param_1 + 0x2600) != 0) {
    FUN_14480f766(&DAT_14cbe74f0);
  }
  if (*(longlong *)(param_1 + 0x2608) != 0) {
    FUN_140457ffc(&DAT_14cbe7508,param_1);
  }
  lVar2 = FUN_1447210f0(param_1);
  if (lVar2 != 0) {
    lVar2 = FUN_14497e828(param_1);
    if (lVar2 != 0) {
      FUN_140457ffc(lVar2 + 0xd8,param_1);
    }
  }
  plVar4 = (longlong *)(param_1 + 0x2668);
  lVar2 = param_1 + 0x2678;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x2690) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar6 = *(int *)(param_1 + 0x2690);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar4;
  if ((iStack_4c != iVar6) || (uStack_58 != lVar2)) {
    do {
      lVar7 = *local_88 + (longlong)iStack_6c * 0x20 + 8;
      cVar1 = FUN_144729dda(lVar7);
      if (cVar1 != '\0') {
        plVar3 = (longlong *)FUN_14479d2ce(lVar7);
        (**(code **)(*plVar3 + 0x420))(plVar3,0);
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (((iStack_6c != iVar6) || (CONCAT44(uStack_74,uStack_78) != lVar2)) ||
            (local_88 != plVar4));
  }
  if ((longlong)*(int *)(param_1 + 0x26c0) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x26c0) * 0x14;
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x26b8) + 8);
    do {
      cVar1 = FUN_144729dda(puVar5);
      if (cVar1 != '\0') {
        plVar4 = (longlong *)FUN_14479d2ce(puVar5);
        (**(code **)(*plVar4 + 0xa68))(plVar4);
        *puVar5 = 0;
      }
      puVar5 = (undefined8 *)((longlong)puVar5 + 0x14);
      lVar2 = lVar2 + -0x14;
    } while (lVar2 != 0);
  }
  FUN_140d6119a(param_1,param_2);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14665eb78 FUN_14665eb78 body=99 status=ok
// SIG undefined FUN_14665eb78(void)

undefined8 FUN_14665eb78(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (cVar1 != '\0') {
    lVar2 = FUN_144a815a6(param_3);
    if (lVar2 != 0) {
      lVar2 = FUN_1402a1246(lVar2);
      if (((lVar2 != 0) && (*(longlong *)(lVar2 + 0xf78) != 0)) && ((char)param_1[1] == '\0')) {
        uVar3 = thunk_FUN_1456fac0c(*(longlong *)(lVar2 + 0xf78) + 0x30,param_4);
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 14665ebdc FUN_14665ebdc body=124 status=ok
// SIG undefined FUN_14665ebdc(void)

void FUN_14665ebdc(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140bfc8e6();
  if (*(longlong *)(param_2 + 0x68) == DAT_14cbe75d0) {
    plVar1 = (longlong *)FUN_144a8232a(&DAT_14cbe75b8);
    *(bool *)(param_1 + 0x2578) = *(longlong *)(param_2 + 0x78) == *plVar1;
    FUN_141305ea8(param_1 + -0x398,&local_21);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14665ec5a FUN_14665ec5a body=372 status=ok
// SIG undefined FUN_14665ec5a(void)

void FUN_14665ec5a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c2c4ea();
  FUN_1446f470e(&local_58,L"StoredInventoryData",1);
  uVar1 = FUN_14070560c();
  FUN_14070560c();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"BuybackItems",1);
  uVar1 = FUN_14070560c();
  FUN_14070560c();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"bShuffleCalledWhileInUse",1);
  uVar1 = FUN_14070560c();
  FUN_14070560c();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"bShuffleRequested",1);
  uVar1 = FUN_14070560c();
  FUN_14070560c();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14665edd6 FUN_14665edd6 body=62 status=ok
// SIG undefined FUN_14665edd6(void)

void FUN_14665edd6(longlong param_1,int param_2)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x128) = *(byte *)(param_1 + 0x128) | 1;
  iVar1 = *(int *)(param_1 + 0x100);
  *(int *)(param_1 + 0x11c) = param_2;
  *(int *)(param_1 + 0x100) = param_2;
  if (iVar1 != param_2) {
    FUN_140a429bc(param_1);
  }
  FUN_1447f69b6(param_1 + 0x40);
  return;
}



// FUNCTION 14665ee14 FUN_14665ee14 body=896 status=ok
// SIG undefined FUN_14665ee14(void)

void FUN_14665ee14(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40 [2];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  lVar1 = DAT_14caa8580;
  FUN_140056680(local_40,L"(Native)");
  FUN_1446f470e(&local_48,L"Weapon.Charge.ChargeStarted",1);
  FUN_1413e432a(lVar1,&local_30,local_48,local_40);
  *(undefined8 *)(param_1 + 8) = local_30;
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_40,L"(Native)");
  FUN_1446f470e(&local_50,L"Weapon.Charge.StackCharged",1);
  FUN_1413e432a(lVar1,&local_30,local_50,local_40);
  *(undefined8 *)(param_1 + 0x10) = local_30;
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_40,L"(Native)");
  FUN_1446f470e(&local_58,L"Weapon.Charge.FullyCharged",1);
  FUN_1413e432a(lVar1,&local_30,local_58,local_40);
  *(undefined8 *)(param_1 + 0x18) = local_30;
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_40,L"(Native)");
  FUN_1446f470e(&local_60,L"Weapon.Charge.ChargeCanceled",1);
  FUN_1413e432a(lVar1,&local_30,local_60,local_40);
  *(undefined8 *)(param_1 + 0x20) = local_30;
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_40,L"(Native)");
  FUN_1446f470e(&local_68,L"Weapon.Charge.Overcharged",1);
  FUN_1413e432a(lVar1,&local_30,local_68,local_40);
  *(undefined8 *)(param_1 + 0x28) = local_30;
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_40,L"(Native)");
  FUN_1446f470e(&local_70,L"Weapon.Charge.DischargeStarted",1);
  FUN_1413e432a(lVar1,&local_30,local_70,local_40);
  *(undefined8 *)(param_1 + 0x30) = local_30;
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_40,L"(Native)");
  FUN_1446f470e(&local_78,L"Weapon.Charge.DischargeStopped",1);
  FUN_1413e432a(lVar1,&local_30,local_78,local_40);
  *(undefined8 *)(param_1 + 0x38) = local_30;
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_40,L"(Native)");
  FUN_1446f470e(&local_80,L"Weapon.Charge.StackDischarged",1);
  FUN_1413e432a(lVar1,&local_30,local_80,local_40);
  *(undefined8 *)(param_1 + 0x40) = local_30;
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_40,L"(Native)");
  FUN_1446f470e(&local_88,L"Weapon.Charge.FullyDischarged",1);
  FUN_1413e432a(lVar1,&local_30,local_88,local_40);
  *(undefined8 *)(param_1 + 0x48) = local_30;
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14665f196 FUN_14665f196 body=179 status=ok
// SIG undefined FUN_14665f196(void)

void FUN_14665f196(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_88 [40];
  wchar_t *local_60;
  undefined1 *local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  switchD_143c3d4dc::caseD_42();
  local_28 = 0;
  local_38 = 0;
  local_30 = 1;
  local_40 = 0;
  local_50 = 3;
  local_48 = 1;
  local_60 = L"ChargeTime";
  local_58 = (undefined1 *)0x100000000;
  FUN_140c2c993(&local_60,param_2);
  local_60 = L"RepChargeState";
  local_58 = &DAT_100000001;
  FUN_140c2c993(&local_60,param_2,&local_50);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14665f262 FUN_14665f262 body=24 status=ok
// SIG undefined FUN_14665f262(void)

bool FUN_14665f262(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14665f27a FUN_14665f27a body=101 status=ok
// SIG undefined FUN_14665f27a(void)

void FUN_14665f27a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9de400;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14665f2e0 FUN_14665f2e0 body=26 status=ok
// SIG undefined FUN_14665f2e0(void)

bool FUN_14665f2e0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14665f2fa FUN_14665f2fa body=24 status=ok
// SIG undefined FUN_14665f2fa(void)

bool FUN_14665f2fa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14665f312 FUN_14665f312 body=29 status=ok
// SIG undefined FUN_14665f312(void)

bool FUN_14665f312(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14665f330 FUN_14665f330 body=147 status=ok
// SIG undefined FUN_14665f330(void)

void FUN_14665f330(longlong param_1,int param_2)

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



// FUNCTION 14665f3ce FUN_14665f3ce body=101 status=ok
// SIG undefined FUN_14665f3ce(void)

void FUN_14665f3ce(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9deb20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14665f434 FUN_14665f434 body=26 status=ok
// SIG undefined FUN_14665f434(void)

bool FUN_14665f434(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14665f44e FUN_14665f44e body=29 status=ok
// SIG undefined FUN_14665f44e(void)

undefined8 FUN_14665f44e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14665f480 FUN_14665f480 body=24 status=ok
// SIG undefined FUN_14665f480(void)

bool FUN_14665f480(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14665f498 FUN_14665f498 body=93 status=ok
// SIG undefined FUN_14665f498(void)

void FUN_14665f498(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9dedf0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14665f4f6 FUN_14665f4f6 body=204 status=ok
// SIG undefined FUN_14665f4f6(void)

void FUN_14665f4f6(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  wchar_t *local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  switchD_143c3d4dc::caseD_42();
  local_28 = 0;
  local_38 = 0;
  local_30 = 1;
  local_48 = L"bIsActive";
  local_40 = (undefined1 *)0x100000000;
  FUN_140c2c993(&local_48,param_2,&local_38);
  local_48 = L"ShieldState";
  local_40 = &DAT_100000001;
  FUN_140c2c993(&local_48,param_2,&local_38);
  local_48 = L"RepDamageCounter";
  local_40 = &DAT_100000002;
  FUN_140c2c993(&local_48,param_2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14665f5c4 FUN_14665f5c4 body=901 status=ok
// SIG undefined FUN_14665f5c4(void)

void FUN_14665f5c4(longlong param_1,undefined8 *param_2,longlong *param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 ****ppppuVar9;
  undefined4 uVar10;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 ***local_68;
  undefined8 local_60;
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar7 = *param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x60) = uVar7;
    plVar8 = *(longlong **)(param_1 + 0x68);
    if (plVar8 == (longlong *)0x0) goto LAB_14665f631;
    *(undefined8 *)(param_1 + 0x68) = 0;
LAB_14665f831:
    LOCK();
    plVar2 = plVar8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    if (plVar3 == (longlong *)0x0) goto LAB_14665f631;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x60) = uVar7;
    plVar8 = *(longlong **)(param_1 + 0x68);
    if (plVar3 == plVar8) {
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
    else {
      *(longlong **)(param_1 + 0x68) = plVar3;
      if (plVar8 != (longlong *)0x0) goto LAB_14665f831;
    }
  }
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
LAB_14665f631:
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  lVar4 = *param_3;
  uVar7 = FUN_14118eb6b();
  lVar5 = *(longlong *)(lVar4 + 0x200);
  if (lVar5 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_1403f69f4(lVar5,uVar7,0);
  }
  FUN_140ccc900(lVar4,&local_68,uVar7,param_4);
  uVar10 = FUN_144a7ecd0(&local_68);
  *(undefined4 *)(param_1 + 0x78) = uVar10;
  FUN_14020a6cc(param_1 + 0x70,1);
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
  if (pcVar6 != (code *)0x0) {
    ppppuVar9 = &local_68;
    if (0x18 < local_50) {
      ppppuVar9 = (undefined8 ****)local_68;
    }
    (*pcVar6)(ppppuVar9);
  }
  if (0x18 < local_50) {
    FUN_1400020a8(local_68);
  }
  lVar4 = *param_3;
  uVar7 = FUN_14118eb6b();
  lVar5 = *(longlong *)(lVar4 + 0x200);
  if (lVar5 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_1403f69f4(lVar5,uVar7,1);
  }
  FUN_140ccc900(lVar4,&local_68,uVar7,param_4);
  uVar10 = FUN_144a7ecd0(&local_68);
  *(undefined4 *)(param_1 + 0x84) = uVar10;
  FUN_14020a6cc(param_1 + 0x7c,1);
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
  if (pcVar6 != (code *)0x0) {
    ppppuVar9 = &local_68;
    if (0x18 < local_50) {
      ppppuVar9 = (undefined8 ****)local_68;
    }
    (*pcVar6)(ppppuVar9);
  }
  if (0x18 < local_50) {
    FUN_1400020a8(local_68);
  }
  lVar4 = *(longlong *)(param_1 + 0x30);
  if (lVar4 != 0) {
    FUN_141103af8(&local_70);
    local_68 = (undefined8 ***)0x0;
    FUN_14485c47a(&local_68,param_1);
    local_60 = local_70;
    FUN_14113f0c0(&local_68);
    FUN_14053c012(lVar4 + 0x988,&local_68);
    FUN_14114569c(&local_78);
    local_68 = (undefined8 ****)0x0;
    FUN_14485c47a(&local_68,param_1);
    local_60 = local_78;
    FUN_14113f0c0(&local_68);
    FUN_14053c012(lVar4 + 0x998,&local_68);
  }
  plVar3 = (longlong *)param_2[1];
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
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14665f94a FUN_14665f94a body=51 status=ok
// SIG undefined FUN_14665f94a(void)

undefined4 FUN_14665f94a(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar2 = FUN_1403ae288(param_1 + 0x68);
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    lVar1 = FUN_140280ec4(param_1 + 0x68);
    uVar3 = *(undefined4 *)(lVar1 + 200);
  }
  return uVar3;
}



// FUNCTION 14665f97e FUN_14665f97e body=161 status=ok
// SIG undefined FUN_14665f97e(void)

void FUN_14665f97e(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  wchar_t *local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145c18618();
  local_28 = 0;
  local_38 = 0;
  local_30 = 1;
  local_48 = L"ClientReloadState";
  local_40 = &DAT_100000001;
  FUN_140c2c993(&local_48,param_2,&local_38);
  local_48 = L"CurrentMag";
  local_40 = &DAT_100000002;
  FUN_140c2c993(&local_48,param_2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14665fa20 FUN_14665fa20 body=207 status=ok
// SIG undefined FUN_14665fa20(void)

float FUN_14665fa20(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar5 = (float)(**(code **)(*param_1 + 0x2c8))();
  if ((0 < (int)param_1[0x16]) && ((*(byte *)((longlong)param_1 + 0xcc) & 2) == 0)) {
    lVar2 = param_1[6];
    bVar1 = *(byte *)(lVar2 + 0xbd8);
    fVar7 = 0.0;
    if (((int)(uint)bVar1 < *(int *)(lVar2 + 0xbf0)) &&
       (plVar3 = *(longlong **)
                  (*(longlong *)(lVar2 + 0xbe8) + 0x10 +
                  (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8), plVar3 != (longlong *)0x0)) {
      iVar4 = (**(code **)(*plVar3 + 0x2b8))();
      fVar7 = (float)iVar4 / (float)(int)param_1[0x16];
      fVar7 = (float)~((int)ROUND(-0.5 - (fVar7 + fVar7)) >> 1);
    }
    fVar6 = (float)(**(code **)(*param_1 + 0x2c8))(param_1);
    fVar5 = fVar6 * fVar7 * 0.2 + fVar5;
  }
  return fVar5;
}



// FUNCTION 14665faf0 FUN_14665faf0 body=83 status=ok
// SIG undefined FUN_14665faf0(void)

void FUN_14665faf0(longlong *param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1[6] + 0x178) == '\x03') && ((*(byte *)((longlong)param_1 + 0xcc) & 4) == 0))
  {
    cVar1 = (**(code **)(*param_1 + 0x2b8))(param_1);
    if (cVar1 == '\0') {
      if (*(char *)((longlong)param_1 + 0xcd) == '\x03') {
        FUN_140f1f37c(param_1);
        return;
      }
    }
    else {
      *(byte *)((longlong)param_1 + 0xcc) = *(byte *)((longlong)param_1 + 0xcc) | 8;
    }
  }
  return;
}



// FUNCTION 14665fb44 FUN_14665fb44 body=125 status=ok
// SIG undefined FUN_14665fb44(void)

void FUN_14665fb44(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined2 local_18;
  undefined1 local_16;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    local_20 = *(longlong *)(param_1 + 0x10);
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffff;
    FUN_140c6bd52(&local_20,0x1f);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14665fbc2 FUN_14665fbc2 body=118 status=ok
// SIG undefined FUN_14665fbc2(void)

void FUN_14665fbc2(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x18d0) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x1b0);
    if (lVar3 != 0) {
      uVar1 = FUN_1403ec9c0();
      plVar2 = (longlong *)FUN_144718840(lVar3,uVar1);
      if (plVar2 != (longlong *)0x0) {
        lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
        if (*(longlong *)(param_1 + 0x18d0) != 0) {
          FUN_14480f766(lVar3 + 8);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x18d0) = 0;
  }
  FUN_140c2cb78(param_1,param_2);
  return;
}



// FUNCTION 14665fc4a FUN_14665fc4a body=48 status=ok
// SIG undefined FUN_14665fc4a(void)

void FUN_14665fc4a(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b9e0e1c);
  switchD_143c3d4dc::caseD_21(param_1,param_2);
  return;
}



// FUNCTION 14665fc7a FUN_14665fc7a body=93 status=ok
// SIG undefined FUN_14665fc7a(void)

void FUN_14665fc7a(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446e0b6e();
  local_28 = 0xffe77365;
  uStack_24 = 0xed5143f8;
  uStack_20 = 0xa9c49d56;
  uStack_1c = 0x4e967383;
  iVar1 = FUN_1448a256a(param_1);
  if (iVar1 < 0) {
    FUN_148f1980c(param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14665fcd8 FUN_14665fcd8 body=132 status=ok
// SIG undefined FUN_14665fcd8(void)

void FUN_14665fcd8(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if ((param_2 == 0) && (*(longlong *)(param_1 + 0x60) != 0)) {
    lVar3 = FUN_14479d2ce(param_1 + 8);
    if (lVar3 != 0) {
      puVar1 = (undefined8 *)(param_1 + 0x60);
      if (*(longlong *)(lVar3 + 0x1f0) == 0) {
        puVar4 = (undefined8 *)(lVar3 + 0x458);
      }
      else {
        puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
      }
      uVar2 = *puVar4;
      lVar3 = FUN_144a61814(uVar2,puVar1);
      if (lVar3 != 0) {
        FUN_1405a424c(uVar2,*puVar1);
      }
      *puVar1 = 0;
    }
  }
  FUN_141245f18(param_1,param_2);
  return;
}



// FUNCTION 14665fd5c FUN_14665fd5c body=26 status=ok
// SIG undefined FUN_14665fd5c(void)

bool FUN_14665fd5c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14665fd76 FUN_14665fd76 body=26 status=ok
// SIG undefined FUN_14665fd76(void)

bool FUN_14665fd76(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14665fd90 FUN_14665fd90 body=24 status=ok
// SIG undefined FUN_14665fd90(void)

bool FUN_14665fd90(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14665fda8 FUN_14665fda8 body=24 status=ok
// SIG undefined FUN_14665fda8(void)

bool FUN_14665fda8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14665fdc0 FUN_14665fdc0 body=24 status=ok
// SIG undefined FUN_14665fdc0(void)

bool FUN_14665fdc0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14665fdd8 FUN_14665fdd8 body=24 status=ok
// SIG undefined FUN_14665fdd8(void)

bool FUN_14665fdd8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14665fdf0 FUN_14665fdf0 body=68 status=ok
// SIG undefined FUN_14665fdf0(void)

undefined8 * FUN_14665fdf0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9e1d50;
  plVar2 = (longlong *)param_1[4];
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



// FUNCTION 14665fe34 FUN_14665fe34 body=118 status=ok
// SIG undefined FUN_14665fe34(void)

void FUN_14665fe34(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9e1d50;
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



// FUNCTION 14665feaa FUN_14665feaa body=36 status=ok
// SIG undefined FUN_14665feaa(void)

void FUN_14665feaa(void)

{
  FUN_145805182(*(undefined8 *)(DAT_14cbe8328 + 8));
  FUN_1400020a8(DAT_14cbe8328);
  return;
}



// FUNCTION 14665fece FUN_14665fece body=34 status=ok
// SIG undefined FUN_14665fece(void)

void FUN_14665fece(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *puVar1 = &PTR_FUN_14b9e26f0;
  return;
}



// FUNCTION 14665fef0 FUN_14665fef0 body=29 status=ok
// SIG undefined FUN_14665fef0(void)

undefined8 FUN_14665fef0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14665ff0e FUN_14665ff0e body=34 status=ok
// SIG undefined FUN_14665ff0e(void)

void FUN_14665ff0e(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144a7c8f6();
  if (lVar1 != 0) {
    FUN_145942c42(lVar1,0);
    return;
  }
  return;
}



// FUNCTION 14665ff30 FUN_14665ff30 body=34 status=ok
// SIG undefined FUN_14665ff30(void)

undefined8 FUN_14665ff30(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14665ff52 FUN_14665ff52 body=93 status=ok
// SIG undefined FUN_14665ff52(void)

void FUN_14665ff52(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9e2b50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14665ffaf FUN_14665ffaf body=49 status=ok
// SIG undefined FUN_14665ffaf(void)

longlong FUN_14665ffaf(void)

{
  if (DAT_14cbf2378 == 0) {
    FUN_14073dd9a(&DAT_14cbf2378,&PTR_LAB_14b9e3060);
  }
  return DAT_14cbf2378;
}



// FUNCTION 14665ffe0 FUN_14665ffe0 body=47 status=ok
// SIG undefined FUN_14665ffe0(void)

longlong FUN_14665ffe0(void)

{
  if (DAT_14cbf2350 == 0) {
    FUN_14000fc22(&DAT_14cbf2350,&PTR_FUN_14b9e2ca8);
  }
  return DAT_14cbf2350;
}



// FUNCTION 14666000f FUN_14666000f body=47 status=ok
// SIG undefined FUN_14666000f(void)

longlong FUN_14666000f(void)

{
  if (DAT_14cbf2358 == 0) {
    FUN_14000fc22(&DAT_14cbf2358,&PTR_FUN_14b9e2d30);
  }
  return DAT_14cbf2358;
}



// FUNCTION 14666003e FUN_14666003e body=47 status=ok
// SIG undefined FUN_14666003e(void)

longlong FUN_14666003e(void)

{
  if (DAT_14cbf2360 == 0) {
    FUN_14000fc22(&DAT_14cbf2360,&PTR_FUN_14b9e2ea8);
  }
  return DAT_14cbf2360;
}



// FUNCTION 14666006d FUN_14666006d body=47 status=ok
// SIG undefined FUN_14666006d(void)

longlong FUN_14666006d(void)

{
  if (DAT_14cbf2368 == 0) {
    FUN_14000fc22(&DAT_14cbf2368,&PTR_FUN_14b9e2f30);
  }
  return DAT_14cbf2368;
}



// FUNCTION 14666009c FUN_14666009c body=34 status=ok
// SIG undefined FUN_14666009c(void)

void FUN_14666009c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145999ccc();
  FUN_14069c8d6(uVar1,&PTR_s_GetTime_14b9e2f70,4);
  return;
}



// FUNCTION 1466600c3 FUN_1466600c3 body=70 status=ok
// SIG undefined FUN_1466600c3(void)

void FUN_1466600c3(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b9e6840;
  FUN_14045d416(puVar1 + 5);
  *(undefined8 *)((longlong)puVar1 + 0x2c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x34) = 0;
  FUN_140e2938c(puVar1 + 8);
  *puVar1 = &PTR_FUN_14b9e30a0;
  return;
}



// FUNCTION 14666010e FUN_14666010e body=49 status=ok
// SIG undefined FUN_14666010e(void)

longlong FUN_14666010e(void)

{
  if (DAT_14cbf2520 == 0) {
    FUN_14073dd9a(&DAT_14cbf2520,&PTR_LAB_14b9e67f8);
  }
  return DAT_14cbf2520;
}



// FUNCTION 14666013f FUN_14666013f body=49 status=ok
// SIG undefined FUN_14666013f(void)

longlong FUN_14666013f(void)

{
  if (DAT_14cbf23d0 == 0) {
    FUN_14073dd9a(&DAT_14cbf23d0,&PTR_LAB_14b9e3ba0);
  }
  return DAT_14cbf23d0;
}



// FUNCTION 146660170 FUN_146660170 body=47 status=ok
// SIG undefined FUN_146660170(void)

longlong FUN_146660170(void)

{
  if (DAT_14cbf2388 == 0) {
    FUN_14000fc22(&DAT_14cbf2388,&PTR_FUN_14b9e34f8);
  }
  return DAT_14cbf2388;
}



// FUNCTION 14666019f FUN_14666019f body=47 status=ok
// SIG undefined FUN_14666019f(void)

longlong FUN_14666019f(void)

{
  if (DAT_14cbf2390 == 0) {
    FUN_14000fc22(&DAT_14cbf2390,&PTR_FUN_14b9e3590);
  }
  return DAT_14cbf2390;
}



// FUNCTION 1466601ce FUN_1466601ce body=47 status=ok
// SIG undefined FUN_1466601ce(void)

longlong FUN_1466601ce(void)

{
  if (DAT_14cbf2398 == 0) {
    FUN_14000fc22(&DAT_14cbf2398,&PTR_FUN_14b9e3668);
  }
  return DAT_14cbf2398;
}



// FUNCTION 1466601fd FUN_1466601fd body=47 status=ok
// SIG undefined FUN_1466601fd(void)

longlong FUN_1466601fd(void)

{
  if (DAT_14cbf23a0 == 0) {
    FUN_14000fc22(&DAT_14cbf23a0,&PTR_FUN_14b9e37c0);
  }
  return DAT_14cbf23a0;
}



// FUNCTION 14666022c FUN_14666022c body=47 status=ok
// SIG undefined FUN_14666022c(void)

longlong FUN_14666022c(void)

{
  if (DAT_14cbf23a8 == 0) {
    FUN_14000fc22(&DAT_14cbf23a8,&PTR_FUN_14b9e3858);
  }
  return DAT_14cbf23a8;
}



// FUNCTION 14666025b FUN_14666025b body=47 status=ok
// SIG undefined FUN_14666025b(void)

longlong FUN_14666025b(void)

{
  if (DAT_14cbf23b0 == 0) {
    FUN_14000fc22(&DAT_14cbf23b0,&PTR_FUN_14b9e38a8);
  }
  return DAT_14cbf23b0;
}



// FUNCTION 14666028a FUN_14666028a body=47 status=ok
// SIG undefined FUN_14666028a(void)

longlong FUN_14666028a(void)

{
  if (DAT_14cbf23b8 == 0) {
    FUN_14000fc22(&DAT_14cbf23b8,&PTR_FUN_14b9e3940);
  }
  return DAT_14cbf23b8;
}



// FUNCTION 1466602b9 FUN_1466602b9 body=47 status=ok
// SIG undefined FUN_1466602b9(void)

longlong FUN_1466602b9(void)

{
  if (DAT_14cbf23c0 == 0) {
    FUN_14000fc22(&DAT_14cbf23c0,&PTR_FUN_14b9e39d8);
  }
  return DAT_14cbf23c0;
}



// FUNCTION 1466602e8 FUN_1466602e8 body=34 status=ok
// SIG undefined FUN_1466602e8(void)

void FUN_1466602e8(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a8f164();
  FUN_14069c8d6(uVar1,&PTR_s_AddKey_14b9e3a20,8);
  return;
}



// FUNCTION 14666030a FUN_14666030a body=61 status=ok
// SIG undefined FUN_14666030a(void)

void FUN_14666030a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  puVar1[5] = 0;
  *puVar1 = &PTR_FUN_14b9e3be0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  FUN_140e2938c(puVar1 + 8);
  return;
}



// FUNCTION 146660347 FUN_146660347 body=49 status=ok
// SIG undefined FUN_146660347(void)

longlong FUN_146660347(void)

{
  if (DAT_14cbf2538 == 0) {
    FUN_14073dd9a(&DAT_14cbf2538,&PTR_LAB_14b9e6b78);
  }
  return DAT_14cbf2538;
}



// FUNCTION 146660378 FUN_146660378 body=49 status=ok
// SIG undefined FUN_146660378(void)

longlong FUN_146660378(void)

{
  if (DAT_14cbf2408 == 0) {
    FUN_14073dd9a(&DAT_14cbf2408,&PTR_LAB_14b9e43a0);
  }
  return DAT_14cbf2408;
}



// FUNCTION 1466603a9 FUN_1466603a9 body=47 status=ok
// SIG undefined FUN_1466603a9(void)

longlong FUN_1466603a9(void)

{
  if (DAT_14cbf23e0 == 0) {
    FUN_14000fc22(&DAT_14cbf23e0,&PTR_FUN_14b9e4008);
  }
  return DAT_14cbf23e0;
}



// FUNCTION 1466603d8 FUN_1466603d8 body=47 status=ok
// SIG undefined FUN_1466603d8(void)

longlong FUN_1466603d8(void)

{
  if (DAT_14cbf23e8 == 0) {
    FUN_14000fc22(&DAT_14cbf23e8,&PTR_FUN_14b9e4090);
  }
  return DAT_14cbf23e8;
}



// FUNCTION 146660407 FUN_146660407 body=47 status=ok
// SIG undefined FUN_146660407(void)

longlong FUN_146660407(void)

{
  if (DAT_14cbf23f0 == 0) {
    FUN_14000fc22(&DAT_14cbf23f0,&PTR_FUN_14b9e41f0);
  }
  return DAT_14cbf23f0;
}



// FUNCTION 146660436 FUN_146660436 body=47 status=ok
// SIG undefined FUN_146660436(void)

longlong FUN_146660436(void)

{
  if (DAT_14cbf23f8 == 0) {
    FUN_14000fc22(&DAT_14cbf23f8,&PTR_FUN_14b9e4278);
  }
  return DAT_14cbf23f8;
}



// FUNCTION 146660466 FUN_146660466 body=34 status=ok
// SIG undefined FUN_146660466(void)

void FUN_146660466(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145999db8();
  FUN_14069c8d6(uVar1,&PTR_s_GetTime_14b9e42c0,4);
  return;
}



// FUNCTION 146660488 FUN_146660488 body=70 status=ok
// SIG undefined FUN_146660488(void)

void FUN_146660488(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b9e6840;
  FUN_14045d416(puVar1 + 5);
  *(undefined8 *)((longlong)puVar1 + 0x2c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x34) = 0;
  FUN_140e2938c(puVar1 + 8);
  *puVar1 = &PTR_FUN_14b9e43e0;
  return;
}



// FUNCTION 1466604d3 FUN_1466604d3 body=49 status=ok
// SIG undefined FUN_1466604d3(void)

longlong FUN_1466604d3(void)

{
  if (DAT_14cbf2478 == 0) {
    FUN_14073dd9a(&DAT_14cbf2478,&PTR_LAB_14b9e5150);
  }
  return DAT_14cbf2478;
}



// FUNCTION 146660504 FUN_146660504 body=47 status=ok
// SIG undefined FUN_146660504(void)

longlong FUN_146660504(void)

{
  if (DAT_14cbf2418 == 0) {
    FUN_14000fc22(&DAT_14cbf2418,&PTR_FUN_14b9e4830);
  }
  return DAT_14cbf2418;
}



// FUNCTION 146660533 FUN_146660533 body=47 status=ok
// SIG undefined FUN_146660533(void)

longlong FUN_146660533(void)

{
  if (DAT_14cbf2420 == 0) {
    FUN_14000fc22(&DAT_14cbf2420,&PTR_FUN_14b9e48d0);
  }
  return DAT_14cbf2420;
}



// FUNCTION 146660562 FUN_146660562 body=47 status=ok
// SIG undefined FUN_146660562(void)

longlong FUN_146660562(void)

{
  if (DAT_14cbf2428 == 0) {
    FUN_14000fc22(&DAT_14cbf2428,&PTR_FUN_14b9e4a40);
  }
  return DAT_14cbf2428;
}



// FUNCTION 146660591 FUN_146660591 body=47 status=ok
// SIG undefined FUN_146660591(void)

longlong FUN_146660591(void)

{
  if (DAT_14cbf2430 == 0) {
    FUN_14000fc22(&DAT_14cbf2430,&PTR_FUN_14b9e4ac8);
  }
  return DAT_14cbf2430;
}



// FUNCTION 1466605c0 FUN_1466605c0 body=47 status=ok
// SIG undefined FUN_1466605c0(void)

longlong FUN_1466605c0(void)

{
  if (DAT_14cbf2438 == 0) {
    FUN_14000fc22(&DAT_14cbf2438,&PTR_FUN_14b9e4b90);
  }
  return DAT_14cbf2438;
}



// FUNCTION 1466605ef FUN_1466605ef body=47 status=ok
// SIG undefined FUN_1466605ef(void)

longlong FUN_1466605ef(void)

{
  if (DAT_14cbf2440 == 0) {
    FUN_14000fc22(&DAT_14cbf2440,&PTR_FUN_14b9e4ce0);
  }
  return DAT_14cbf2440;
}



// FUNCTION 14666061e FUN_14666061e body=47 status=ok
// SIG undefined FUN_14666061e(void)

longlong FUN_14666061e(void)

{
  if (DAT_14cbf2448 == 0) {
    FUN_14000fc22(&DAT_14cbf2448,&PTR_FUN_14b9e4d70);
  }
  return DAT_14cbf2448;
}



// FUNCTION 14666064d FUN_14666064d body=47 status=ok
// SIG undefined FUN_14666064d(void)

longlong FUN_14666064d(void)

{
  if (DAT_14cbf2450 == 0) {
    FUN_14000fc22(&DAT_14cbf2450,&PTR_FUN_14b9e4df8);
  }
  return DAT_14cbf2450;
}



// FUNCTION 14666067c FUN_14666067c body=47 status=ok
// SIG undefined FUN_14666067c(void)

longlong FUN_14666067c(void)

{
  if (DAT_14cbf2458 == 0) {
    FUN_14000fc22(&DAT_14cbf2458,&PTR_FUN_14b9e4e38);
  }
  return DAT_14cbf2458;
}



// FUNCTION 1466606ab FUN_1466606ab body=47 status=ok
// SIG undefined FUN_1466606ab(void)

longlong FUN_1466606ab(void)

{
  if (DAT_14cbf2460 == 0) {
    FUN_14000fc22(&DAT_14cbf2460,&PTR_FUN_14b9e4ec0);
  }
  return DAT_14cbf2460;
}



// FUNCTION 1466606da FUN_1466606da body=47 status=ok
// SIG undefined FUN_1466606da(void)

longlong FUN_1466606da(void)

{
  if (DAT_14cbf2468 == 0) {
    FUN_14000fc22(&DAT_14cbf2468,&PTR_FUN_14b9e4f48);
  }
  return DAT_14cbf2468;
}



// FUNCTION 14666070a FUN_14666070a body=34 status=ok
// SIG undefined FUN_14666070a(void)

void FUN_14666070a(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a8f250();
  FUN_14069c8d6(uVar1,&PTR_s_AddKey_14b9e4f90,0xb);
  return;
}



// FUNCTION 14666072c FUN_14666072c body=61 status=ok
// SIG undefined FUN_14666072c(void)

void FUN_14666072c(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  puVar1[5] = 0;
  *puVar1 = &PTR_FUN_14b9e5190;
  puVar1[6] = 0;
  puVar1[7] = 0;
  FUN_140e2938c(puVar1 + 8);
  return;
}



// FUNCTION 146660769 FUN_146660769 body=49 status=ok
// SIG undefined FUN_146660769(void)

longlong FUN_146660769(void)

{
  if (DAT_14cbf24b0 == 0) {
    FUN_14073dd9a(&DAT_14cbf24b0,&PTR_LAB_14b9e5910);
  }
  return DAT_14cbf24b0;
}



// FUNCTION 14666079a FUN_14666079a body=47 status=ok
// SIG undefined FUN_14666079a(void)

longlong FUN_14666079a(void)

{
  if (DAT_14cbf2488 == 0) {
    FUN_14000fc22(&DAT_14cbf2488,&PTR_FUN_14b9e5578);
  }
  return DAT_14cbf2488;
}



// FUNCTION 1466607c9 FUN_1466607c9 body=47 status=ok
// SIG undefined FUN_1466607c9(void)

longlong FUN_1466607c9(void)

{
  if (DAT_14cbf2490 == 0) {
    FUN_14000fc22(&DAT_14cbf2490,&PTR_FUN_14b9e5600);
  }
  return DAT_14cbf2490;
}



// FUNCTION 1466607f8 FUN_1466607f8 body=47 status=ok
// SIG undefined FUN_1466607f8(void)

longlong FUN_1466607f8(void)

{
  if (DAT_14cbf2498 == 0) {
    FUN_14000fc22(&DAT_14cbf2498,&PTR_FUN_14b9e5760);
  }
  return DAT_14cbf2498;
}



// FUNCTION 146660827 FUN_146660827 body=47 status=ok
// SIG undefined FUN_146660827(void)

longlong FUN_146660827(void)

{
  if (DAT_14cbf24a0 == 0) {
    FUN_14000fc22(&DAT_14cbf24a0,&PTR_FUN_14b9e57e8);
  }
  return DAT_14cbf24a0;
}



// FUNCTION 146660856 FUN_146660856 body=34 status=ok
// SIG undefined FUN_146660856(void)

void FUN_146660856(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145999ea4();
  FUN_14069c8d6(uVar1,&PTR_s_GetTime_14b9e5830,4);
  return;
}



// FUNCTION 146660878 FUN_146660878 body=70 status=ok
// SIG undefined FUN_146660878(void)

void FUN_146660878(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b9e6840;
  FUN_14045d416(puVar1 + 5);
  *(undefined8 *)((longlong)puVar1 + 0x2c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x34) = 0;
  FUN_140e2938c(puVar1 + 8);
  *puVar1 = &PTR_FUN_14b9e5950;
  return;
}



// FUNCTION 1466608c3 FUN_1466608c3 body=49 status=ok
// SIG undefined FUN_1466608c3(void)

longlong FUN_1466608c3(void)

{
  if (DAT_14cbf2508 == 0) {
    FUN_14073dd9a(&DAT_14cbf2508,&PTR_LAB_14b9e6460);
  }
  return DAT_14cbf2508;
}



// FUNCTION 1466608f4 FUN_1466608f4 body=47 status=ok
// SIG undefined FUN_1466608f4(void)

longlong FUN_1466608f4(void)

{
  if (DAT_14cbf24c0 == 0) {
    FUN_14000fc22(&DAT_14cbf24c0,&PTR_FUN_14b9e5e40);
  }
  return DAT_14cbf24c0;
}



// FUNCTION 146660923 FUN_146660923 body=47 status=ok
// SIG undefined FUN_146660923(void)

longlong FUN_146660923(void)

{
  if (DAT_14cbf24c8 == 0) {
    FUN_14000fc22(&DAT_14cbf24c8,&PTR_FUN_14b9e5ec8);
  }
  return DAT_14cbf24c8;
}



// FUNCTION 146660952 FUN_146660952 body=47 status=ok
// SIG undefined FUN_146660952(void)

longlong FUN_146660952(void)

{
  if (DAT_14cbf24d0 == 0) {
    FUN_14000fc22(&DAT_14cbf24d0,&PTR_FUN_14b9e5f90);
  }
  return DAT_14cbf24d0;
}



// FUNCTION 146660981 FUN_146660981 body=47 status=ok
// SIG undefined FUN_146660981(void)

longlong FUN_146660981(void)

{
  if (DAT_14cbf24d8 == 0) {
    FUN_14000fc22(&DAT_14cbf24d8,&PTR_FUN_14b9e60e0);
  }
  return DAT_14cbf24d8;
}



// FUNCTION 1466609b0 FUN_1466609b0 body=47 status=ok
// SIG undefined FUN_1466609b0(void)

longlong FUN_1466609b0(void)

{
  if (DAT_14cbf24e0 == 0) {
    FUN_14000fc22(&DAT_14cbf24e0,&PTR_FUN_14b9e6168);
  }
  return DAT_14cbf24e0;
}



// FUNCTION 1466609df FUN_1466609df body=47 status=ok
// SIG undefined FUN_1466609df(void)

longlong FUN_1466609df(void)

{
  if (DAT_14cbf24e8 == 0) {
    FUN_14000fc22(&DAT_14cbf24e8,&PTR_FUN_14b9e61a8);
  }
  return DAT_14cbf24e8;
}



// FUNCTION 146660a0e FUN_146660a0e body=47 status=ok
// SIG undefined FUN_146660a0e(void)

longlong FUN_146660a0e(void)

{
  if (DAT_14cbf24f0 == 0) {
    FUN_14000fc22(&DAT_14cbf24f0,&PTR_FUN_14b9e6230);
  }
  return DAT_14cbf24f0;
}



// FUNCTION 146660a3d FUN_146660a3d body=47 status=ok
// SIG undefined FUN_146660a3d(void)

longlong FUN_146660a3d(void)

{
  if (DAT_14cbf24f8 == 0) {
    FUN_14000fc22(&DAT_14cbf24f8,&PTR_FUN_14b9e62b8);
  }
  return DAT_14cbf24f8;
}



// FUNCTION 146660a6c FUN_146660a6c body=34 status=ok
// SIG undefined FUN_146660a6c(void)

void FUN_146660a6c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a8f33c();
  FUN_14069c8d6(uVar1,&PTR_s_AddKey_14b9e6300,8);
  return;
}



// FUNCTION 146660a8e FUN_146660a8e body=61 status=ok
// SIG undefined FUN_146660a8e(void)

void FUN_146660a8e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  puVar1[5] = 0;
  *puVar1 = &PTR_FUN_14b9e64a0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  FUN_140e2938c(puVar1 + 8);
  return;
}



// FUNCTION 146660acb FUN_146660acb body=51 status=ok
// SIG undefined FUN_146660acb(void)

void FUN_146660acb(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b9e6840;
  FUN_14045d416(puVar1 + 5);
  *(undefined8 *)((longlong)puVar1 + 0x2c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x34) = 0;
  return;
}



// FUNCTION 146660afe FUN_146660afe body=43 status=ok
// SIG undefined FUN_146660afe(void)

void FUN_146660afe(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b9e6bc0;
  puVar1[5] = 0;
  return;
}



// FUNCTION 146660b2e FUN_146660b2e body=47 status=ok
// SIG undefined FUN_146660b2e(void)

longlong FUN_146660b2e(void)

{
  if (DAT_14cbf2548 == 0) {
    FUN_14000fc22(&DAT_14cbf2548,&PTR_FUN_14b9e6f18);
  }
  return DAT_14cbf2548;
}



// FUNCTION 146660b5d FUN_146660b5d body=47 status=ok
// SIG undefined FUN_146660b5d(void)

longlong FUN_146660b5d(void)

{
  if (DAT_14cbf2550 == 0) {
    FUN_14000fc22(&DAT_14cbf2550,&PTR_FUN_14b9e6fb0);
  }
  return DAT_14cbf2550;
}



// FUNCTION 146660b8c FUN_146660b8c body=47 status=ok
// SIG undefined FUN_146660b8c(void)

longlong FUN_146660b8c(void)

{
  if (DAT_14cbf2558 == 0) {
    FUN_14000fc22(&DAT_14cbf2558,&PTR_FUN_14b9e7050);
  }
  return DAT_14cbf2558;
}



// FUNCTION 146660bbb FUN_146660bbb body=47 status=ok
// SIG undefined FUN_146660bbb(void)

longlong FUN_146660bbb(void)

{
  if (DAT_14cbf2560 == 0) {
    FUN_14000fc22(&DAT_14cbf2560,&PTR_FUN_14b9e70e0);
  }
  return DAT_14cbf2560;
}



// FUNCTION 146660bea FUN_146660bea body=47 status=ok
// SIG undefined FUN_146660bea(void)

longlong FUN_146660bea(void)

{
  if (DAT_14cbf2568 == 0) {
    FUN_14000fc22(&DAT_14cbf2568,&PTR_FUN_14b9e7178);
  }
  return DAT_14cbf2568;
}



// FUNCTION 146660c19 FUN_146660c19 body=47 status=ok
// SIG undefined FUN_146660c19(void)

longlong FUN_146660c19(void)

{
  if (DAT_14cbf2570 == 0) {
    FUN_14000fc22(&DAT_14cbf2570,&PTR_FUN_14b9e7210);
  }
  return DAT_14cbf2570;
}



// FUNCTION 146660c48 FUN_146660c48 body=47 status=ok
// SIG undefined FUN_146660c48(void)

longlong FUN_146660c48(void)

{
  if (DAT_14cbf2578 == 0) {
    FUN_14000fc22(&DAT_14cbf2578,&PTR_FUN_14b9e72b0);
  }
  return DAT_14cbf2578;
}



// FUNCTION 146660c77 FUN_146660c77 body=47 status=ok
// SIG undefined FUN_146660c77(void)

longlong FUN_146660c77(void)

{
  if (DAT_14cbf2580 == 0) {
    FUN_14000fc22(&DAT_14cbf2580,&PTR_FUN_14b9e73c8);
  }
  return DAT_14cbf2580;
}



// FUNCTION 146660ca6 FUN_146660ca6 body=47 status=ok
// SIG undefined FUN_146660ca6(void)

longlong FUN_146660ca6(void)

{
  if (DAT_14cbf2588 == 0) {
    FUN_14000fc22(&DAT_14cbf2588,&PTR_FUN_14b9e7448);
  }
  return DAT_14cbf2588;
}



// FUNCTION 146660cd5 FUN_146660cd5 body=47 status=ok
// SIG undefined FUN_146660cd5(void)

longlong FUN_146660cd5(void)

{
  if (DAT_14cbf2590 == 0) {
    FUN_14000fc22(&DAT_14cbf2590,&PTR_FUN_14b9e74e0);
  }
  return DAT_14cbf2590;
}



// FUNCTION 146660d04 FUN_146660d04 body=47 status=ok
// SIG undefined FUN_146660d04(void)

longlong FUN_146660d04(void)

{
  if (DAT_14cbf2598 == 0) {
    FUN_14000fc22(&DAT_14cbf2598,&PTR_FUN_14b9e7578);
  }
  return DAT_14cbf2598;
}



// FUNCTION 146660d33 FUN_146660d33 body=47 status=ok
// SIG undefined FUN_146660d33(void)

longlong FUN_146660d33(void)

{
  if (DAT_14cbf25a0 == 0) {
    FUN_14000fc22(&DAT_14cbf25a0,&PTR_FUN_14b9e7618);
  }
  return DAT_14cbf25a0;
}



// FUNCTION 146660d62 FUN_146660d62 body=47 status=ok
// SIG undefined FUN_146660d62(void)

longlong FUN_146660d62(void)

{
  if (DAT_14cbf25a8 == 0) {
    FUN_14000fc22(&DAT_14cbf25a8,&PTR_FUN_14b9e76a8);
  }
  return DAT_14cbf25a8;
}



// FUNCTION 146660d91 FUN_146660d91 body=47 status=ok
// SIG undefined FUN_146660d91(void)

longlong FUN_146660d91(void)

{
  if (DAT_14cbf25b0 == 0) {
    FUN_14000fc22(&DAT_14cbf25b0,&PTR_FUN_14b9e7740);
  }
  return DAT_14cbf25b0;
}



// FUNCTION 146660dc0 FUN_146660dc0 body=47 status=ok
// SIG undefined FUN_146660dc0(void)

longlong FUN_146660dc0(void)

{
  if (DAT_14cbf25b8 == 0) {
    FUN_14000fc22(&DAT_14cbf25b8,&PTR_FUN_14b9e77d8);
  }
  return DAT_14cbf25b8;
}



// FUNCTION 146660def FUN_146660def body=47 status=ok
// SIG undefined FUN_146660def(void)

longlong FUN_146660def(void)

{
  if (DAT_14cbf25c0 == 0) {
    FUN_14000fc22(&DAT_14cbf25c0,&PTR_FUN_14b9e7878);
  }
  return DAT_14cbf25c0;
}



// FUNCTION 146660e1e FUN_146660e1e body=47 status=ok
// SIG undefined FUN_146660e1e(void)

longlong FUN_146660e1e(void)

{
  if (DAT_14cbf25c8 == 0) {
    FUN_14000fc22(&DAT_14cbf25c8,&PTR_FUN_14b9e79d0);
  }
  return DAT_14cbf25c8;
}



// FUNCTION 146660e4d FUN_146660e4d body=47 status=ok
// SIG undefined FUN_146660e4d(void)

longlong FUN_146660e4d(void)

{
  if (DAT_14cbf25d0 == 0) {
    FUN_14000fc22(&DAT_14cbf25d0,&PTR_FUN_14b9e7a50);
  }
  return DAT_14cbf25d0;
}



// FUNCTION 146660e7c FUN_146660e7c body=34 status=ok
// SIG undefined FUN_146660e7c(void)

void FUN_146660e7c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145999f90();
  FUN_14069c8d6(uVar1,&PTR_s_GetArriveTangent_14b9e7a90,0x12);
  return;
}



// FUNCTION 146660e9e FUN_146660e9e body=70 status=ok
// SIG undefined FUN_146660e9e(void)

void FUN_146660e9e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b9e6840;
  FUN_14045d416(puVar1 + 5);
  *(undefined8 *)((longlong)puVar1 + 0x2c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x34) = 0;
  FUN_140e2938c(puVar1 + 8);
  *puVar1 = &PTR_FUN_14b9e7d70;
  return;
}



// FUNCTION 146660ee9 FUN_146660ee9 body=49 status=ok
// SIG undefined FUN_146660ee9(void)

longlong FUN_146660ee9(void)

{
  if (DAT_14cbf2670 == 0) {
    FUN_14073dd9a(&DAT_14cbf2670,&PTR_LAB_14b9e8e60);
  }
  return DAT_14cbf2670;
}



// FUNCTION 146660f1a FUN_146660f1a body=47 status=ok
// SIG undefined FUN_146660f1a(void)

longlong FUN_146660f1a(void)

{
  if (DAT_14cbf25f0 == 0) {
    FUN_14000fc22(&DAT_14cbf25f0,&PTR_FUN_14b9e8250);
  }
  return DAT_14cbf25f0;
}



// FUNCTION 146660f49 FUN_146660f49 body=47 status=ok
// SIG undefined FUN_146660f49(void)

longlong FUN_146660f49(void)

{
  if (DAT_14cbf25f8 == 0) {
    FUN_14000fc22(&DAT_14cbf25f8,&PTR_FUN_14b9e82d8);
  }
  return DAT_14cbf25f8;
}



// FUNCTION 146660f78 FUN_146660f78 body=47 status=ok
// SIG undefined FUN_146660f78(void)

longlong FUN_146660f78(void)

{
  if (DAT_14cbf2600 == 0) {
    FUN_14000fc22(&DAT_14cbf2600,&PTR_FUN_14b9e8430);
  }
  return DAT_14cbf2600;
}



// FUNCTION 146660fa7 FUN_146660fa7 body=47 status=ok
// SIG undefined FUN_146660fa7(void)

longlong FUN_146660fa7(void)

{
  if (DAT_14cbf2608 == 0) {
    FUN_14000fc22(&DAT_14cbf2608,&PTR_FUN_14b9e84b0);
  }
  return DAT_14cbf2608;
}



// FUNCTION 146660fd6 FUN_146660fd6 body=47 status=ok
// SIG undefined FUN_146660fd6(void)

longlong FUN_146660fd6(void)

{
  if (DAT_14cbf2610 == 0) {
    FUN_14000fc22(&DAT_14cbf2610,&PTR_FUN_14b9e8580);
  }
  return DAT_14cbf2610;
}



// FUNCTION 146661005 FUN_146661005 body=47 status=ok
// SIG undefined FUN_146661005(void)

longlong FUN_146661005(void)

{
  if (DAT_14cbf2618 == 0) {
    FUN_14000fc22(&DAT_14cbf2618,&PTR_FUN_14b9e86d0);
  }
  return DAT_14cbf2618;
}



// FUNCTION 146661034 FUN_146661034 body=47 status=ok
// SIG undefined FUN_146661034(void)

longlong FUN_146661034(void)

{
  if (DAT_14cbf2620 == 0) {
    FUN_14000fc22(&DAT_14cbf2620,&PTR_FUN_14b9e8750);
  }
  return DAT_14cbf2620;
}



// FUNCTION 146661063 FUN_146661063 body=47 status=ok
// SIG undefined FUN_146661063(void)

longlong FUN_146661063(void)

{
  if (DAT_14cbf2628 == 0) {
    FUN_14000fc22(&DAT_14cbf2628,&PTR_FUN_14b9e87f8);
  }
  return DAT_14cbf2628;
}



// FUNCTION 146661092 FUN_146661092 body=47 status=ok
// SIG undefined FUN_146661092(void)

longlong FUN_146661092(void)

{
  if (DAT_14cbf2630 == 0) {
    FUN_14000fc22(&DAT_14cbf2630,&PTR_FUN_14b9e88a0);
  }
  return DAT_14cbf2630;
}



// FUNCTION 1466610c1 FUN_1466610c1 body=47 status=ok
// SIG undefined FUN_1466610c1(void)

longlong FUN_1466610c1(void)

{
  if (DAT_14cbf2638 == 0) {
    FUN_14000fc22(&DAT_14cbf2638,&PTR_FUN_14b9e8928);
  }
  return DAT_14cbf2638;
}



// FUNCTION 1466610f0 FUN_1466610f0 body=47 status=ok
// SIG undefined FUN_1466610f0(void)

longlong FUN_1466610f0(void)

{
  if (DAT_14cbf2640 == 0) {
    FUN_14000fc22(&DAT_14cbf2640,&PTR_FUN_14b9e8968);
  }
  return DAT_14cbf2640;
}



// FUNCTION 14666111f FUN_14666111f body=47 status=ok
// SIG undefined FUN_14666111f(void)

longlong FUN_14666111f(void)

{
  if (DAT_14cbf2648 == 0) {
    FUN_14000fc22(&DAT_14cbf2648,&PTR_FUN_14b9e89f0);
  }
  return DAT_14cbf2648;
}



// FUNCTION 14666114e FUN_14666114e body=47 status=ok
// SIG undefined FUN_14666114e(void)

longlong FUN_14666114e(void)

{
  if (DAT_14cbf2650 == 0) {
    FUN_14000fc22(&DAT_14cbf2650,&PTR_FUN_14b9e8a70);
  }
  return DAT_14cbf2650;
}



// FUNCTION 14666117d FUN_14666117d body=47 status=ok
// SIG undefined FUN_14666117d(void)

longlong FUN_14666117d(void)

{
  if (DAT_14cbf2658 == 0) {
    FUN_14000fc22(&DAT_14cbf2658,&PTR_FUN_14b9e8b28);
  }
  return DAT_14cbf2658;
}



// FUNCTION 1466611ac FUN_1466611ac body=47 status=ok
// SIG undefined FUN_1466611ac(void)

longlong FUN_1466611ac(void)

{
  if (DAT_14cbf2660 == 0) {
    FUN_14000fc22(&DAT_14cbf2660,&PTR_FUN_14b9e8bd0);
  }
  return DAT_14cbf2660;
}



// FUNCTION 1466611dc FUN_1466611dc body=34 status=ok
// SIG undefined FUN_1466611dc(void)

void FUN_1466611dc(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a8f428();
  FUN_14069c8d6(uVar1,&PTR_s_AddKey_14b9e8c10,0xf);
  return;
}



// FUNCTION 1466611fe FUN_1466611fe body=59 status=ok
// SIG undefined FUN_1466611fe(void)

void FUN_1466611fe(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  puVar1[5] = 0;
  puVar1[6] = 0;
  *puVar1 = &PTR_FUN_14b9e8ea0;
  FUN_140e2938c(puVar1 + 7);
  puVar1[0xb] = 0;
  return;
}



// FUNCTION 146661239 FUN_146661239 body=49 status=ok
// SIG undefined FUN_146661239(void)

longlong FUN_146661239(void)

{
  if (DAT_14cbf26a8 == 0) {
    FUN_14073dd9a(&DAT_14cbf26a8,&PTR_LAB_14b9e9620);
  }
  return DAT_14cbf26a8;
}



// FUNCTION 14666126a FUN_14666126a body=47 status=ok
// SIG undefined FUN_14666126a(void)

longlong FUN_14666126a(void)

{
  if (DAT_14cbf2680 == 0) {
    FUN_14000fc22(&DAT_14cbf2680,&PTR_FUN_14b9e9288);
  }
  return DAT_14cbf2680;
}



// FUNCTION 146661299 FUN_146661299 body=47 status=ok
// SIG undefined FUN_146661299(void)

longlong FUN_146661299(void)

{
  if (DAT_14cbf2688 == 0) {
    FUN_14000fc22(&DAT_14cbf2688,&PTR_FUN_14b9e9310);
  }
  return DAT_14cbf2688;
}



// FUNCTION 1466612c8 FUN_1466612c8 body=47 status=ok
// SIG undefined FUN_1466612c8(void)

longlong FUN_1466612c8(void)

{
  if (DAT_14cbf2690 == 0) {
    FUN_14000fc22(&DAT_14cbf2690,&PTR_FUN_14b9e9470);
  }
  return DAT_14cbf2690;
}



// FUNCTION 1466612f7 FUN_1466612f7 body=47 status=ok
// SIG undefined FUN_1466612f7(void)

longlong FUN_1466612f7(void)

{
  if (DAT_14cbf2698 == 0) {
    FUN_14000fc22(&DAT_14cbf2698,&PTR_FUN_14b9e94f8);
  }
  return DAT_14cbf2698;
}



// FUNCTION 146661326 FUN_146661326 body=34 status=ok
// SIG undefined FUN_146661326(void)

void FUN_146661326(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14599a07c();
  FUN_14069c8d6(uVar1,&PTR_s_GetTime_14b9e9540,4);
  return;
}



// FUNCTION 146661348 FUN_146661348 body=70 status=ok
// SIG undefined FUN_146661348(void)

void FUN_146661348(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b9e6840;
  FUN_14045d416(puVar1 + 5);
  *(undefined8 *)((longlong)puVar1 + 0x2c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x34) = 0;
  FUN_140e2938c(puVar1 + 8);
  *puVar1 = &PTR_FUN_14b9e9660;
  return;
}



// FUNCTION 146661393 FUN_146661393 body=49 status=ok
// SIG undefined FUN_146661393(void)

longlong FUN_146661393(void)

{
  if (DAT_14cbf26e0 == 0) {
    FUN_14073dd9a(&DAT_14cbf26e0,&PTR_LAB_14b9e9e90);
  }
  return DAT_14cbf26e0;
}



// FUNCTION 1466613c4 FUN_1466613c4 body=47 status=ok
// SIG undefined FUN_1466613c4(void)

longlong FUN_1466613c4(void)

{
  if (DAT_14cbf26b8 == 0) {
    FUN_14000fc22(&DAT_14cbf26b8,&PTR_FUN_14b9e9ab0);
  }
  return DAT_14cbf26b8;
}



// FUNCTION 1466613f3 FUN_1466613f3 body=47 status=ok
// SIG undefined FUN_1466613f3(void)

longlong FUN_1466613f3(void)

{
  if (DAT_14cbf26c0 == 0) {
    FUN_14000fc22(&DAT_14cbf26c0,&PTR_FUN_14b9e9b80);
  }
  return DAT_14cbf26c0;
}



// FUNCTION 146661422 FUN_146661422 body=47 status=ok
// SIG undefined FUN_146661422(void)

longlong FUN_146661422(void)

{
  if (DAT_14cbf26c8 == 0) {
    FUN_14000fc22(&DAT_14cbf26c8,&PTR_FUN_14b9e9cd0);
  }
  return DAT_14cbf26c8;
}



// FUNCTION 146661451 FUN_146661451 body=47 status=ok
// SIG undefined FUN_146661451(void)

longlong FUN_146661451(void)

{
  if (DAT_14cbf26d0 == 0) {
    FUN_14000fc22(&DAT_14cbf26d0,&PTR_FUN_14b9e9d58);
  }
  return DAT_14cbf26d0;
}



// FUNCTION 146661480 FUN_146661480 body=34 status=ok
// SIG undefined FUN_146661480(void)

void FUN_146661480(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a8f514();
  FUN_14069c8d6(uVar1,&PTR_s_AddKey_14b9e9da0,4);
  return;
}



// FUNCTION 1466614a2 FUN_1466614a2 body=59 status=ok
// SIG undefined FUN_1466614a2(void)

void FUN_1466614a2(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  puVar1[5] = 0;
  puVar1[6] = 0;
  *puVar1 = &PTR_FUN_14b9e9ed0;
  FUN_140e2938c(puVar1 + 7);
  puVar1[0xb] = 0;
  return;
}



// FUNCTION 1466614de FUN_1466614de body=66 status=ok
// SIG undefined FUN_1466614de(void)

longlong FUN_1466614de(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x48);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146661520 FUN_146661520 body=76 status=ok
// SIG undefined FUN_146661520(void)

undefined8 * FUN_146661520(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9e3be0;
  plVar2 = (longlong *)param_1[9];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666156c FUN_14666156c body=66 status=ok
// SIG undefined FUN_14666156c(void)

longlong FUN_14666156c(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x48);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466615ae FUN_1466615ae body=76 status=ok
// SIG undefined FUN_1466615ae(void)

undefined8 * FUN_1466615ae(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9e5190;
  plVar2 = (longlong *)param_1[9];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466615fa FUN_1466615fa body=66 status=ok
// SIG undefined FUN_1466615fa(void)

longlong FUN_1466615fa(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x48);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666163c FUN_14666163c body=76 status=ok
// SIG undefined FUN_14666163c(void)

undefined8 * FUN_14666163c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9e64a0;
  plVar2 = (longlong *)param_1[9];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146661688 FUN_146661688 body=40 status=ok
// SIG undefined FUN_146661688(void)

undefined8 FUN_146661688(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466616b0 FUN_1466616b0 body=40 status=ok
// SIG undefined FUN_1466616b0(void)

undefined8 FUN_1466616b0(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466616d8 FUN_1466616d8 body=66 status=ok
// SIG undefined FUN_1466616d8(void)

longlong FUN_1466616d8(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x48);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666171a FUN_14666171a body=76 status=ok
// SIG undefined FUN_14666171a(void)

undefined8 * FUN_14666171a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9e8ea0;
  plVar2 = (longlong *)param_1[8];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146661766 FUN_146661766 body=66 status=ok
// SIG undefined FUN_146661766(void)

longlong FUN_146661766(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x48);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466617a8 FUN_1466617a8 body=76 status=ok
// SIG undefined FUN_1466617a8(void)

undefined8 * FUN_1466617a8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9e9ed0;
  plVar2 = (longlong *)param_1[8];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466617f4 FUN_1466617f4 body=47 status=ok
// SIG undefined FUN_1466617f4(void)

longlong FUN_1466617f4(void)

{
  if (DAT_14cbf26f8 == 0) {
    FUN_14000fc22(&DAT_14cbf26f8,&PTR_FUN_14b9eb330);
  }
  return DAT_14cbf26f8;
}



// FUNCTION 146661823 FUN_146661823 body=47 status=ok
// SIG undefined FUN_146661823(void)

longlong FUN_146661823(void)

{
  if (DAT_14cbf2700 == 0) {
    FUN_14000fc22(&DAT_14cbf2700,&PTR_FUN_14b9eb3b0);
  }
  return DAT_14cbf2700;
}



// FUNCTION 146661852 FUN_146661852 body=47 status=ok
// SIG undefined FUN_146661852(void)

longlong FUN_146661852(void)

{
  if (DAT_14cbf2708 == 0) {
    FUN_14000fc22(&DAT_14cbf2708,&PTR_FUN_14b9eb438);
  }
  return DAT_14cbf2708;
}



// FUNCTION 146661881 FUN_146661881 body=47 status=ok
// SIG undefined FUN_146661881(void)

longlong FUN_146661881(void)

{
  if (DAT_14cbf2710 == 0) {
    FUN_14000fc22(&DAT_14cbf2710,&PTR_FUN_14b9eb4b8);
  }
  return DAT_14cbf2710;
}



// FUNCTION 1466618b0 FUN_1466618b0 body=47 status=ok
// SIG undefined FUN_1466618b0(void)

longlong FUN_1466618b0(void)

{
  if (DAT_14cbf2718 == 0) {
    FUN_14000fc22(&DAT_14cbf2718,&PTR_FUN_14b9eb538);
  }
  return DAT_14cbf2718;
}



// FUNCTION 1466618df FUN_1466618df body=47 status=ok
// SIG undefined FUN_1466618df(void)

longlong FUN_1466618df(void)

{
  if (DAT_14cbf2720 == 0) {
    FUN_14000fc22(&DAT_14cbf2720,&PTR_FUN_14b9eb5c0);
  }
  return DAT_14cbf2720;
}



// FUNCTION 14666190e FUN_14666190e body=47 status=ok
// SIG undefined FUN_14666190e(void)

longlong FUN_14666190e(void)

{
  if (DAT_14cbf2728 == 0) {
    FUN_14000fc22(&DAT_14cbf2728,&PTR_FUN_14b9eb648);
  }
  return DAT_14cbf2728;
}



// FUNCTION 14666193d FUN_14666193d body=47 status=ok
// SIG undefined FUN_14666193d(void)

longlong FUN_14666193d(void)

{
  if (DAT_14cbf2730 == 0) {
    FUN_14000fc22(&DAT_14cbf2730,&PTR_FUN_14b9eb768);
  }
  return DAT_14cbf2730;
}



// FUNCTION 14666196c FUN_14666196c body=47 status=ok
// SIG undefined FUN_14666196c(void)

longlong FUN_14666196c(void)

{
  if (DAT_14cbf2738 == 0) {
    FUN_14000fc22(&DAT_14cbf2738,&PTR_FUN_14b9eb7e8);
  }
  return DAT_14cbf2738;
}



// FUNCTION 14666199b FUN_14666199b body=47 status=ok
// SIG undefined FUN_14666199b(void)

longlong FUN_14666199b(void)

{
  if (DAT_14cbf2740 == 0) {
    FUN_14000fc22(&DAT_14cbf2740,&PTR_FUN_14b9eb868);
  }
  return DAT_14cbf2740;
}



// FUNCTION 1466619ca FUN_1466619ca body=47 status=ok
// SIG undefined FUN_1466619ca(void)

longlong FUN_1466619ca(void)

{
  if (DAT_14cbf2748 == 0) {
    FUN_14000fc22(&DAT_14cbf2748,&PTR_FUN_14b9eb8e8);
  }
  return DAT_14cbf2748;
}



// FUNCTION 1466619f9 FUN_1466619f9 body=47 status=ok
// SIG undefined FUN_1466619f9(void)

longlong FUN_1466619f9(void)

{
  if (DAT_14cbf2750 == 0) {
    FUN_14000fc22(&DAT_14cbf2750,&PTR_FUN_14b9eb970);
  }
  return DAT_14cbf2750;
}



// FUNCTION 146661a28 FUN_146661a28 body=47 status=ok
// SIG undefined FUN_146661a28(void)

longlong FUN_146661a28(void)

{
  if (DAT_14cbf2758 == 0) {
    FUN_14000fc22(&DAT_14cbf2758,&PTR_FUN_14b9eb9f0);
  }
  return DAT_14cbf2758;
}



// FUNCTION 146661a57 FUN_146661a57 body=47 status=ok
// SIG undefined FUN_146661a57(void)

longlong FUN_146661a57(void)

{
  if (DAT_14cbf2760 == 0) {
    FUN_14000fc22(&DAT_14cbf2760,&PTR_FUN_14b9eba70);
  }
  return DAT_14cbf2760;
}



// FUNCTION 146661a86 FUN_146661a86 body=47 status=ok
// SIG undefined FUN_146661a86(void)

longlong FUN_146661a86(void)

{
  if (DAT_14cbf2768 == 0) {
    FUN_14000fc22(&DAT_14cbf2768,&PTR_FUN_14b9ebaf8);
  }
  return DAT_14cbf2768;
}



// FUNCTION 146661ab5 FUN_146661ab5 body=47 status=ok
// SIG undefined FUN_146661ab5(void)

longlong FUN_146661ab5(void)

{
  if (DAT_14cbf2770 == 0) {
    FUN_14000fc22(&DAT_14cbf2770,&PTR_FUN_14b9ebb80);
  }
  return DAT_14cbf2770;
}



// FUNCTION 146661ae4 FUN_146661ae4 body=47 status=ok
// SIG undefined FUN_146661ae4(void)

longlong FUN_146661ae4(void)

{
  if (DAT_14cbf2778 == 0) {
    FUN_14000fc22(&DAT_14cbf2778,&PTR_FUN_14b9ebce0);
  }
  return DAT_14cbf2778;
}



// FUNCTION 146661b13 FUN_146661b13 body=47 status=ok
// SIG undefined FUN_146661b13(void)

longlong FUN_146661b13(void)

{
  if (DAT_14cbf2780 == 0) {
    FUN_14000fc22(&DAT_14cbf2780,&PTR_FUN_14b9ebd60);
  }
  return DAT_14cbf2780;
}



// FUNCTION 146661b42 FUN_146661b42 body=34 status=ok
// SIG undefined FUN_146661b42(void)

void FUN_146661b42(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1459234f8();
  FUN_14069c8d6(uVar1,&PTR_s_GetArriveTangent_14b9ebda0,0x12);
  return;
}



// FUNCTION 146661b69 FUN_146661b69 body=54 status=ok
// SIG undefined FUN_146661b69(void)

void FUN_146661b69(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145853a92(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b9ec080;
  FUN_140e2938c(puVar1 + 8);
  *puVar1 = &PTR_FUN_14b9ec460;
  return;
}



// FUNCTION 146661b9f FUN_146661b9f body=47 status=ok
// SIG undefined FUN_146661b9f(void)

longlong FUN_146661b9f(void)

{
  if (DAT_14cbf27a8 == 0) {
    FUN_14073dd9a(&DAT_14cbf27a8,&PTR_LAB_14b9ec418);
  }
  return DAT_14cbf27a8;
}



// FUNCTION 146661bce FUN_146661bce body=54 status=ok
// SIG undefined FUN_146661bce(void)

void FUN_146661bce(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145853a92(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b9ec080;
  FUN_140e2938c(puVar1 + 8);
  *puVar1 = &PTR_FUN_14b9ec840;
  return;
}



// FUNCTION 146661c04 FUN_146661c04 body=47 status=ok
// SIG undefined FUN_146661c04(void)

longlong FUN_146661c04(void)

{
  if (DAT_14cbf27c0 == 0) {
    FUN_14073dd9a(&DAT_14cbf27c0,&PTR_LAB_14b9ec7f8);
  }
  return DAT_14cbf27c0;
}



// FUNCTION 146661c33 FUN_146661c33 body=49 status=ok
// SIG undefined FUN_146661c33(void)

longlong FUN_146661c33(void)

{
  if (DAT_14cbf2850 == 0) {
    FUN_14073dd9a(&DAT_14cbf2850,&PTR_LAB_14b9ed920);
  }
  return DAT_14cbf2850;
}



// FUNCTION 146661c64 FUN_146661c64 body=47 status=ok
// SIG undefined FUN_146661c64(void)

longlong FUN_146661c64(void)

{
  if (DAT_14cbf27d0 == 0) {
    FUN_14000fc22(&DAT_14cbf27d0,&PTR_FUN_14b9ecda0);
  }
  return DAT_14cbf27d0;
}



// FUNCTION 146661c93 FUN_146661c93 body=47 status=ok
// SIG undefined FUN_146661c93(void)

longlong FUN_146661c93(void)

{
  if (DAT_14cbf27d8 == 0) {
    FUN_14000fc22(&DAT_14cbf27d8,&PTR_FUN_14b9ece28);
  }
  return DAT_14cbf27d8;
}



// FUNCTION 146661cc2 FUN_146661cc2 body=47 status=ok
// SIG undefined FUN_146661cc2(void)

longlong FUN_146661cc2(void)

{
  if (DAT_14cbf27e0 == 0) {
    FUN_14000fc22(&DAT_14cbf27e0,&PTR_FUN_14b9ecf80);
  }
  return DAT_14cbf27e0;
}



// FUNCTION 146661cf1 FUN_146661cf1 body=47 status=ok
// SIG undefined FUN_146661cf1(void)

longlong FUN_146661cf1(void)

{
  if (DAT_14cbf27e8 == 0) {
    FUN_14000fc22(&DAT_14cbf27e8,&PTR_FUN_14b9ed000);
  }
  return DAT_14cbf27e8;
}



// FUNCTION 146661d20 FUN_146661d20 body=47 status=ok
// SIG undefined FUN_146661d20(void)

longlong FUN_146661d20(void)

{
  if (DAT_14cbf27f0 == 0) {
    FUN_14000fc22(&DAT_14cbf27f0,&PTR_FUN_14b9ed0d0);
  }
  return DAT_14cbf27f0;
}



// FUNCTION 146661d4f FUN_146661d4f body=47 status=ok
// SIG undefined FUN_146661d4f(void)

longlong FUN_146661d4f(void)

{
  if (DAT_14cbf27f8 == 0) {
    FUN_14000fc22(&DAT_14cbf27f8,&PTR_FUN_14b9ed220);
  }
  return DAT_14cbf27f8;
}



// FUNCTION 146661d7e FUN_146661d7e body=47 status=ok
// SIG undefined FUN_146661d7e(void)

longlong FUN_146661d7e(void)

{
  if (DAT_14cbf2800 == 0) {
    FUN_14000fc22(&DAT_14cbf2800,&PTR_FUN_14b9ed2a0);
  }
  return DAT_14cbf2800;
}



// FUNCTION 146661dad FUN_146661dad body=47 status=ok
// SIG undefined FUN_146661dad(void)

longlong FUN_146661dad(void)

{
  if (DAT_14cbf2808 == 0) {
    FUN_14000fc22(&DAT_14cbf2808,&PTR_FUN_14b9ed328);
  }
  return DAT_14cbf2808;
}



// FUNCTION 146661ddc FUN_146661ddc body=47 status=ok
// SIG undefined FUN_146661ddc(void)

longlong FUN_146661ddc(void)

{
  if (DAT_14cbf2810 == 0) {
    FUN_14000fc22(&DAT_14cbf2810,&PTR_FUN_14b9ed3b0);
  }
  return DAT_14cbf2810;
}



// FUNCTION 146661e0b FUN_146661e0b body=47 status=ok
// SIG undefined FUN_146661e0b(void)

longlong FUN_146661e0b(void)

{
  if (DAT_14cbf2818 == 0) {
    FUN_14000fc22(&DAT_14cbf2818,&PTR_FUN_14b9ed438);
  }
  return DAT_14cbf2818;
}



// FUNCTION 146661e3a FUN_146661e3a body=47 status=ok
// SIG undefined FUN_146661e3a(void)

longlong FUN_146661e3a(void)

{
  if (DAT_14cbf2820 == 0) {
    FUN_14000fc22(&DAT_14cbf2820,&PTR_FUN_14b9ed478);
  }
  return DAT_14cbf2820;
}



// FUNCTION 146661e69 FUN_146661e69 body=47 status=ok
// SIG undefined FUN_146661e69(void)

longlong FUN_146661e69(void)

{
  if (DAT_14cbf2828 == 0) {
    FUN_14000fc22(&DAT_14cbf2828,&PTR_FUN_14b9ed500);
  }
  return DAT_14cbf2828;
}



// FUNCTION 146661e98 FUN_146661e98 body=47 status=ok
// SIG undefined FUN_146661e98(void)

longlong FUN_146661e98(void)

{
  if (DAT_14cbf2830 == 0) {
    FUN_14000fc22(&DAT_14cbf2830,&PTR_FUN_14b9ed580);
  }
  return DAT_14cbf2830;
}



// FUNCTION 146661ec7 FUN_146661ec7 body=47 status=ok
// SIG undefined FUN_146661ec7(void)

longlong FUN_146661ec7(void)

{
  if (DAT_14cbf2838 == 0) {
    FUN_14000fc22(&DAT_14cbf2838,&PTR_FUN_14b9ed608);
  }
  return DAT_14cbf2838;
}



// FUNCTION 146661ef6 FUN_146661ef6 body=47 status=ok
// SIG undefined FUN_146661ef6(void)

longlong FUN_146661ef6(void)

{
  if (DAT_14cbf2840 == 0) {
    FUN_14000fc22(&DAT_14cbf2840,&PTR_FUN_14b9ed690);
  }
  return DAT_14cbf2840;
}



// FUNCTION 146661f26 FUN_146661f26 body=34 status=ok
// SIG undefined FUN_146661f26(void)

void FUN_146661f26(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a8f600();
  FUN_14069c8d6(uVar1,&PTR_s_AddKey_14b9ed6d0,0xf);
  return;
}


