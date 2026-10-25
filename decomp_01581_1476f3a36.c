// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1476f3a36 FUN_1476f3a36 body=251 status=ok
// SIG undefined FUN_1476f3a36(void)

void FUN_1476f3a36(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = FUN_14009d2a0();
  lVar3 = FUN_141645258(param_2);
  uVar1 = *(ushort *)(lVar2 + 0x11a);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar3 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar3 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar3 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = *(ushort *)(lVar2 + 0x11c);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar3 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar3 + 0x20) < (int)(uint)uVar1)) {
    bVar5 = false;
  }
  else {
    bVar5 = (*(uint *)(lVar3 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  if (bVar4) {
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    local_68 = param_5;
    FUN_1476f3ef8(param_1,&local_48,param_3,param_4);
  }
  else if (bVar5) {
    local_58 = *param_2;
    uStack_54 = param_2[1];
    uStack_50 = param_2[2];
    uStack_4c = param_2[3];
    local_68 = param_5;
    FUN_1476f4094(param_1,&local_58,param_3,param_4);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f3b32 FUN_1476f3b32 body=766 status=ok
// SIG undefined FUN_1476f3b32(void)

void FUN_1476f3b32(longlong param_1,char param_2,undefined8 param_3)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined1 *puVar6;
  uint *puVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  longlong local_c0;
  longlong local_b8;
  ulonglong local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_9c [4];
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_2 != '\0') {
    puVar1 = (uint *)(param_1 + 0x58);
    puVar7 = *(uint **)(param_1 + 0x68);
    if (*(uint **)(param_1 + 0x68) == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar8 = *(int *)(param_1 + 0x70) + 0x1f;
    if (0x1f < uVar8) {
      plVar2 = (longlong *)(param_1 + 8);
      lVar9 = 0;
      do {
        uVar3 = *puVar7;
        if (uVar3 != 0) {
          iVar10 = 0;
          if (uVar3 != 0) {
            for (; (uVar3 >> iVar10 & 1) == 0; iVar10 = iVar10 + 1) {
            }
          }
          if (iVar10 + 1 != (int)lVar9 && iVar10 - (int)lVar9 < *(int *)(param_1 + 0x70)) {
            local_78 = 0;
            iVar10 = 0;
            local_70 = 0;
            local_98 = 0;
            uStack_90 = 0;
            local_6c = 0xffffffff00000080;
            local_64 = 0;
            local_58 = (undefined1 *)0x0;
            local_50 = 0;
            lVar9 = param_1 + 0x18;
            local_c0 = 0x100000000;
            local_b0 = 0xffffffff;
            local_a8 = 0;
            local_b8 = lVar9;
            if (*(int *)(param_1 + 0x30) != 0) {
              FUN_1449c0562(&local_c0);
              iVar10 = *(int *)(param_1 + 0x30);
            }
            local_d0 = local_b0;
            uVar4 = local_d0;
            local_c8 = local_a8;
            local_c4 = local_a4;
            local_e0 = (uint *)local_c0;
            local_d8 = local_b8;
            local_d0._4_4_ = (int)(local_b0 >> 0x20);
            iVar5 = local_d0._4_4_;
            local_e8 = plVar2;
            if ((local_d0._4_4_ != iVar10) || (local_d0 = uVar4, local_b8 != lVar9)) {
              do {
                local_d0 = uVar4;
                local_b8 = *local_e8 + (longlong)iVar5 * 0x38;
                local_c0 = (longlong)iVar5 * 0x38 + *local_e8 + 0x28;
                FUN_1476f4d8c(&local_98,local_9c);
                local_d0 = CONCAT44(local_d0._4_4_,(uint)local_d0 & ~local_e0._4_4_);
                FUN_1449c0562(&local_e0);
                iVar5 = local_d0._4_4_;
                uVar4 = local_d0;
              } while (local_e8 != plVar2 || (local_d8 != lVar9 || local_d0._4_4_ != iVar10));
            }
            local_e8 = (longlong *)0x100000000;
            local_d8 = 0xffffffff;
            local_d0 = local_d0 & 0xffffffff00000000;
            local_d8._4_4_ = 0;
            local_e0 = puVar1;
            if (*(int *)(param_1 + 0x70) != 0) {
              FUN_1449c0562(&local_e8);
            }
            if ((int)local_d8._4_4_ < (int)local_e0[6]) {
              uVar8 = local_d8._4_4_;
              do {
                if ((int)uStack_90 != local_64) {
                  puVar6 = local_58;
                  if (local_58 == (undefined1 *)0x0) {
                    puVar6 = local_60;
                  }
                  iVar10 = *(int *)(puVar6 + (ulonglong)(local_50 - 1U & uVar8) * 4);
                  while (iVar10 != -1) {
                    lVar9 = local_98 + (longlong)iVar10 * 0x38;
                    if (*(uint *)(local_98 + (longlong)iVar10 * 0x38) == uVar8) {
                      if (lVar9 + 8 != 0 && lVar9 != 0) {
                        FUN_1476f524c(plVar2,lVar9 + 8);
                        uVar8 = local_d8._4_4_;
                      }
                      break;
                    }
                    iVar10 = *(int *)(lVar9 + 0x30);
                  }
                }
                FUN_1410928e4(param_3,uVar8);
                local_d8 = CONCAT44(local_d8._4_4_,(uint)local_d8 & ~local_e8._4_4_);
                FUN_1449c0562(&local_e8);
                uVar8 = local_d8._4_4_;
              } while ((int)local_d8._4_4_ < (int)local_e0[6]);
            }
            *(undefined4 *)(param_1 + 0x70) = 0;
            local_50 = 0;
            if (local_58 != (undefined1 *)0x0) {
              FUN_1400020a8();
            }
            FUN_1476f546e(&local_98);
          }
          break;
        }
        lVar9 = lVar9 + -0x20;
        puVar7 = puVar7 + 1;
      } while ((ulonglong)(uVar8 & 0xffffffe0) + lVar9 != 0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f3e32 FUN_1476f3e32 body=56 status=ok
// SIG undefined FUN_1476f3e32(void)

void FUN_1476f3e32(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1476f3e6a(param_1);
  return;
}



// FUNCTION 1476f3e6a FUN_1476f3e6a body=52 status=ok
// SIG undefined FUN_1476f3e6a(void)

void FUN_1476f3e6a(longlong *param_1)

{
  FUN_1476f3e9e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1476f3e9e FUN_1476f3e9e body=89 status=ok
// SIG undefined FUN_1476f3e9e(void)

void FUN_1476f3e9e(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
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



// FUNCTION 1476f3ef8 FUN_1476f3ef8 body=410 status=ok
// SIG undefined FUN_1476f3ef8(void)

void FUN_1476f3ef8(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar6 = *(undefined8 **)(lVar3 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar6 + 0x1e) == *(short *)(param_1 + 0x7c)) goto LAB_1476f3f41;
      puVar6 = puVar6 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar6 = (undefined8 *)0x0;
LAB_1476f3f41:
  iVar1 = *(int *)(lVar3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar6 + 1));
  }
  LOCK();
  *(int *)(puVar6 + 3) = *(int *)(puVar6 + 3) + 1;
  UNLOCK();
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar7 = *(undefined8 **)(lVar3 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == *(short *)(param_1 + 0x7a)) goto LAB_1476f3f6d;
      puVar7 = puVar7 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar7 = (undefined8 *)0x0;
LAB_1476f3f6d:
  uVar4 = *puVar6;
  iVar2 = *(int *)(lVar3 + 0x14);
  if (iVar2 == 1) {
    local_60 = param_1;
    AcquireSRWLockShared((PSRWLOCK)(puVar7 + 1));
    param_1 = local_60;
  }
  LOCK();
  *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + 1;
  UNLOCK();
  local_70 = *puVar7;
  local_58 = (undefined4)*param_2;
  uStack_54 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_50 = (undefined4)param_2[1];
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_78 = param_4;
  local_68 = uVar4;
  FUN_1476f41ca(param_1 + 8,param_5,&local_58,param_3);
  if (puVar7 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(puVar7 + 1));
    }
  }
  if (puVar6 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar6 + 3) = *(int *)(puVar6 + 3) + -1;
    UNLOCK();
    if (iVar1 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(puVar6 + 1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476f4094 FUN_1476f4094 body=308 status=ok
// SIG undefined FUN_1476f4094(void)

void FUN_1476f4094(longlong param_1,longlong *param_2,longlong param_3,int *param_4,
                  undefined8 param_5)

{
  uint *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar7 = (ulonglong)
          *(ushort *)
           (*(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8) + 0xe);
  local_58 = param_1;
  if (uVar7 != 0) {
    param_1 = param_1 + 0x58;
    uVar8 = 0;
    do {
      local_4a = *(undefined2 *)(param_3 + uVar8 * 2);
      if (((*param_4 != -1) && (param_4[1] != -1)) && ((*(byte *)(param_4 + 2) & 1) == 0)) {
        cVar2 = FUN_140add178(param_5,&local_4a,param_4);
        if (cVar2 != '\0') {
          iVar4 = param_4[1];
          iVar6 = (iVar4 - *(int *)(local_58 + 0x70)) + 1;
          if (0 < iVar6) {
            uVar3 = FUN_144a54ea4(param_1,iVar6);
            FUN_1447c6044(param_1,uVar3,iVar6,0);
            iVar4 = param_4[1];
          }
          lVar5 = *(longlong *)(local_58 + 0x68);
          if (*(longlong *)(local_58 + 0x68) == 0) {
            lVar5 = param_1;
          }
          iVar6 = iVar4 + 0x1f;
          if (-1 < iVar4) {
            iVar6 = iVar4;
          }
          puVar1 = (uint *)(lVar5 + (longlong)(iVar6 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)iVar4 & 0x1f);
        }
        *(byte *)(param_4 + 2) = *(byte *)(param_4 + 2) | 1;
      }
      uVar8 = uVar8 + 1;
      param_4 = param_4 + 3;
    } while (uVar7 != uVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f41ca FUN_1476f41ca body=796 status=ok
// SIG undefined FUN_1476f41ca(void)

void FUN_1476f41ca(undefined8 param_1,longlong param_2,longlong *param_3,longlong param_4,
                  undefined8 *param_5,longlong param_6,longlong param_7)

{
  undefined8 *puVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ushort uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  longlong local_88;
  undefined4 local_7c;
  undefined4 uStack_78;
  uint local_74;
  longlong local_70;
  undefined8 local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = param_1;
  local_88 = param_4;
  lVar4 = FUN_141645258(param_3);
  lVar5 = FUN_14038fb82();
  uVar6 = *(ushort *)(lVar5 + 0xea);
  if (((uVar6 == 0xffff) ||
      (*(uint *)(lVar4 + 0x20) == (uint)uVar6 || (int)*(uint *)(lVar4 + 0x20) < (int)(uint)uVar6))
     || ((*(uint *)(lVar4 + (ulonglong)(uVar6 >> 5) * 4) >> (uVar6 & 0x1f) & 1) == 0)) {
    uVar6 = *(ushort *)(lVar5 + 0xee);
    if (((uVar6 == 0xffff) ||
        (*(uint *)(lVar4 + 0x20) == (uint)uVar6 || (int)*(uint *)(lVar4 + 0x20) < (int)(uint)uVar6))
       || ((*(uint *)(lVar4 + (ulonglong)(uVar6 >> 5) * 4) >> (uVar6 & 0x1f) & 1) == 0)) {
      uVar2 = *(ushort *)(lVar5 + 0xf0);
      uVar6 = 0xffff;
      if (((uVar2 != 0xffff) &&
          (*(uint *)(lVar4 + 0x20) != (uint)uVar2 &&
           (int)(uint)uVar2 <= (int)*(uint *)(lVar4 + 0x20))) &&
         (uVar6 = 0xffff,
         (*(uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0)) {
        uVar6 = uVar2;
      }
    }
  }
  uVar2 = *(ushort *)(lVar5 + 0xf4);
  if (((uVar2 == 0xffff) ||
      (*(uint *)(lVar4 + 0x20) == (uint)uVar2 || (int)*(uint *)(lVar4 + 0x20) < (int)(uint)uVar2))
     || (uVar7 = (uint)uVar2,
        (*(uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)) {
    uVar2 = *(ushort *)(lVar5 + 0xf8);
    if (((uVar2 == 0xffff) ||
        (*(uint *)(lVar4 + 0x20) == (uint)uVar2 || (int)*(uint *)(lVar4 + 0x20) < (int)(uint)uVar2))
       || (uVar7 = (uint)uVar2,
          (*(uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)) {
      uVar2 = *(ushort *)(lVar5 + 0xf6);
      uVar7 = 0xffff;
      if (((uVar2 != 0xffff) &&
          (uVar3 = (uint)uVar2,
          *(uint *)(lVar4 + 0x20) != uVar3 && (int)(uint)uVar2 <= (int)*(uint *)(lVar4 + 0x20))) &&
         (uVar7 = 0xffff,
         (*(uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar3 & 0x1f) & 1) != 0)) {
        uVar7 = uVar3;
      }
    }
  }
  lVar4 = *(longlong *)(*(longlong *)(*param_3 + 0x60) + (longlong)(int)param_3[1] * 8);
  uVar2 = *(ushort *)(lVar4 + 0xe);
  if (uVar6 == 0xffff) {
    lVar5 = 0;
  }
  else {
    FUN_140fc2f5e(lVar4,&local_70);
    lVar5 = lStack_60;
    lStack_60 = 0;
    if (local_70 != 0) {
      LOCK();
      *(int *)(local_70 + 0x18) = *(int *)(local_70 + 0x18) + -1;
      UNLOCK();
      if ((int)local_68 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(local_70 + 8));
      }
    }
  }
  if ((short)uVar7 == -1) {
    lVar4 = 0;
  }
  else {
    FUN_140fc2f08(lVar4,&local_70,uVar7);
    lVar4 = lStack_60;
    lStack_60 = 0;
    if (local_70 != 0) {
      LOCK();
      *(int *)(local_70 + 0x18) = *(int *)(local_70 + 0x18) + -1;
      UNLOCK();
      if ((int)local_68 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(local_70 + 8));
      }
    }
  }
  if (uVar2 != 0) {
    uVar8 = 0;
    do {
      if (lVar4 == 0) {
        if (lVar5 == 0) {
          local_70 = *(longlong *)(param_6 + uVar8 * 4);
          puVar1 = (undefined8 *)(param_7 + uVar8 * 8);
          local_68 = *puVar1;
          lStack_60 = puVar1[1];
          local_58 = 0;
        }
        else {
          local_58 = *(undefined8 *)(lVar5 + uVar8 * 4);
          local_70 = *(longlong *)(param_6 + uVar8 * 4);
          puVar1 = (undefined8 *)(param_7 + uVar8 * 8);
          local_68 = *puVar1;
          lStack_60 = puVar1[1];
        }
        uStack_50 = CONCAT31(uStack_50._1_3_,2);
        uStack_4c = 0xffffffff;
      }
      else {
        local_70 = *(longlong *)(param_6 + uVar8 * 4);
        puVar1 = (undefined8 *)(param_7 + uVar8 * 8);
        local_68 = *puVar1;
        lStack_60 = puVar1[1];
        puVar1 = (undefined8 *)(lVar4 + uVar8 * 8);
        local_58 = *puVar1;
        uStack_50 = *(undefined4 *)(puVar1 + 1);
        uStack_4c = *(undefined4 *)((longlong)puVar1 + 0xc);
      }
      uStack_78 = FUN_1476f44e8(local_90,&local_70,param_2);
      local_7c = *(undefined4 *)(param_2 + 8);
      local_74 = local_74 & 0xffffff00;
      FUN_140addf02(param_2,local_88 + uVar8,&local_7c);
      *(uint *)(param_5 + 1) = local_74;
      *param_5 = CONCAT44(uStack_78,local_7c);
      uVar8 = uVar8 + 2;
      param_5 = (undefined8 *)((longlong)param_5 + 0xc);
    } while ((uint)uVar2 * 2 != uVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f44e8 FUN_1476f44e8 body=446 status=ok
// SIG undefined FUN_1476f44e8(void)

ulonglong FUN_1476f44e8(longlong param_1,ulonglong *param_2,undefined8 param_3)

{
  uint *puVar1;
  byte bVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_4c = 0xffffffff;
  uVar10 = param_2[1];
  uVar4 = ((uint)(*param_2 >> 0x14) & 0xffff ^ (uint)(*param_2 >> 4)) * -0x7a143595;
  uVar5 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  uVar4 = ((uint)(param_2[2] >> 0x14) & 0xffff ^ (uint)(param_2[2] >> 4)) * -0x7a143595;
  uVar6 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = (uint)(uVar10 >> 0x10);
  uVar12 = (uint)uVar10 & 0xffff;
  iVar7 = FUN_144a78877(((uint)uVar10 << 0x10 | uVar12) + (int)(uVar10 >> 0x20) +
                        (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar12 >> 4),uVar6 >> 0x10 ^ uVar6);
  uVar5 = (uVar5 >> 2) + 0x9e3779b9 + uVar5 * 0x40 + iVar7 ^ uVar5;
  uVar3 = param_2[4];
  uVar10 = param_2[3];
  uVar4 = (uint)(uVar10 >> 0x10);
  uVar6 = (uint)uVar10 & 0xffff;
  uVar8 = FUN_144a78877(((uint)uVar10 << 0x10 | uVar6) + (int)(uVar10 >> 0x20) +
                        (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4),
                        *(undefined4 *)((longlong)param_2 + 0x24));
  iVar7 = FUN_144a78877(uVar8,(char)uVar3);
  puVar9 = (uint *)FUN_1476f46a8(param_1,(uVar5 >> 2) + 0x9e3779b9 + uVar5 * 0x40 + iVar7 ^ uVar5,
                                 param_2,&local_4c);
  uVar4 = *puVar9;
  uVar10 = (ulonglong)uVar4;
  if (uVar10 == 0xffffffff) {
    uVar10 = FUN_14086cb2a(param_3);
    *puVar9 = (uint)uVar10;
  }
  else if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(param_1 + 0x68))) {
    lVar11 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar11 = *(longlong *)(param_1 + 0x60);
    }
    bVar2 = (byte)uVar4 & 0x1f;
    puVar1 = (uint *)(lVar11 + (ulonglong)(uVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
    uVar10 = (ulonglong)*puVar9;
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f46a8 FUN_1476f46a8 body=144 status=ok
// SIG undefined FUN_1476f46a8(void)

longlong FUN_1476f46a8(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = FUN_1476f473a();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x38;
    if (lVar3 + lVar2 != 0) goto LAB_1476f46e6;
  }
  local_40 = param_3;
  local_38 = param_4;
  FUN_1476f47d8(param_1,&local_2c,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_2c * 0x38;
LAB_1476f46e6:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f473a FUN_1476f473a body=157 status=ok
// SIG undefined FUN_1476f473a(void)

int FUN_1476f473a(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_1;
      do {
        lVar5 = (longlong)iVar2 * 0x38;
        if ((((*(longlong *)(lVar3 + lVar5) == *param_3) &&
             (lVar1 = lVar3 + lVar5, *(longlong *)(lVar1 + 8) == param_3[1])) &&
            (*(longlong *)(lVar1 + 0x10) == param_3[2])) &&
           (((*(int *)(lVar1 + 0x18) == (int)param_3[3] &&
             (*(int *)(lVar1 + 0x1c) == *(int *)((longlong)param_3 + 0x1c))) &&
            ((*(char *)(lVar1 + 0x20) == (char)param_3[4] &&
             (*(int *)(lVar1 + 0x24) == *(int *)((longlong)param_3 + 0x24))))))) {
          return iVar2;
        }
        iVar2 = *(int *)(lVar3 + 0x30 + lVar5);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 1476f47d8 FUN_1476f47d8 body=295 status=ok
// SIG undefined FUN_1476f47d8(void)

undefined4 * FUN_1476f47d8(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1476f4900(param_1,local_48);
  puVar1 = (undefined4 *)*param_4;
  puVar2 = (undefined4 *)param_4[1];
  *(undefined8 *)(local_40 + 8) = *(undefined8 *)(puVar1 + 8);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  uVar7 = puVar1[5];
  uVar8 = puVar1[6];
  uVar9 = puVar1[7];
  local_40[4] = puVar1[4];
  local_40[5] = uVar7;
  local_40[6] = uVar8;
  local_40[7] = uVar9;
  *local_40 = uVar3;
  local_40[1] = uVar4;
  local_40[2] = uVar5;
  local_40[3] = uVar6;
  local_40[10] = *puVar2;
  local_40[0xc] = 0xffffffff;
  cVar10 = FUN_1476f49e2(param_1,param_3,local_40,local_48);
  if (cVar10 == '\0') {
    uVar11 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar13 = 1;
    if (3 < uVar11) {
      uVar12 = (ulonglong)(uVar11 & 0xfffffffe) + 0xf;
      lVar14 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar14 & 0x1f);
    }
    if (((int)uVar11 < 1) || (iVar13 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      local_40[0xd] = param_3;
      lVar14 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar14 = param_1 + 0x38;
      }
      local_40[0xc] =
           *(undefined4 *)
            (lVar14 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar14 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar14 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar14 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar13;
      FUN_1476f4abc(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f4900 FUN_1476f4900 body=226 status=ok
// SIG undefined FUN_1476f4900(void)

int * FUN_1476f4900(longlong *param_1,int *param_2)

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
      FUN_1447030e2(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x38) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 1476f49e2 FUN_1476f49e2 body=102 status=ok
// SIG undefined FUN_1476f49e2(void)

undefined8 FUN_1476f49e2(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
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
  longlong lVar15;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar14 = FUN_1476f473a(), iVar14 != -1)) {
    lVar2 = *param_1;
    lVar15 = (longlong)iVar14 * 0x38;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[4];
    uVar8 = param_3[5];
    uVar9 = param_3[6];
    uVar10 = param_3[7];
    uVar11 = param_3[9];
    uVar12 = param_3[10];
    uVar13 = param_3[0xb];
    puVar1 = (undefined4 *)(lVar2 + 0x20 + lVar15);
    *puVar1 = param_3[8];
    puVar1[1] = uVar11;
    puVar1[2] = uVar12;
    puVar1[3] = uVar13;
    puVar1 = (undefined4 *)(lVar2 + 0x10 + lVar15);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
    puVar1 = (undefined4 *)(lVar2 + lVar15);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_1476f4a48(param_1,*param_4);
    *param_4 = iVar14;
    return 1;
  }
  return 0;
}



// FUNCTION 1476f4a48 FUN_1476f4a48 body=116 status=ok
// SIG undefined FUN_1476f4a48(void)

void FUN_1476f4a48(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
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



// FUNCTION 1476f4abc FUN_1476f4abc body=718 status=ok
// SIG undefined FUN_1476f4abc(void)

void FUN_1476f4abc(longlong *param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_b8 [32];
  longlong local_98;
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
  uVar6 = *(uint *)(param_1 + 9);
  if (uVar6 != 0) {
    plVar1 = param_1 + 7;
    uVar13 = 0;
    FUN_144a1cbf0(plVar1,0,uVar6,4);
    if (0 < (int)uVar6) {
      do {
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        *(undefined4 *)((longlong)plVar11 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar13) * 4)
             = 0xffffffff;
        uVar13 = uVar13 + 1;
      } while (uVar6 != uVar13);
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
    uVar4 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    bVar5 = local_78._4_4_ < (int)local_60[3];
    iVar8 = local_78._4_4_;
    local_90 = param_1;
    local_78 = uVar4;
    if (bVar5) {
      do {
        lVar3 = *local_90;
        local_98 = (longlong)iVar8;
        lVar12 = local_98 * 0x38;
        uVar4 = *(undefined8 *)(lVar3 + 8 + lVar12);
        uVar6 = ((uint)(*(ulonglong *)(lVar3 + lVar12) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar3 + lVar12) >> 4)) * -0x7a143595;
        uVar13 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        uVar13 = uVar13 >> 0x10 ^ uVar13;
        uVar10 = *(ulonglong *)(lVar3 + 0x10 + lVar12);
        uVar6 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar7 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        uVar6 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar14 = (uint)uVar4 & 0xffff;
        iVar8 = FUN_144a78877(((uint)uVar4 << 0x10 | uVar14) + (int)((ulonglong)uVar4 >> 0x20) +
                              (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar14 >> 4),uVar7 >> 0x10 ^ uVar7
                             );
        uVar13 = (uVar13 >> 2) + 0x9e3779b9 + uVar13 * 0x40 + iVar8 ^ uVar13;
        uVar2 = *(undefined1 *)(lVar3 + 0x20 + lVar12);
        uVar4 = *(undefined8 *)(lVar3 + 0x18 + lVar12);
        uVar6 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar7 = (uint)uVar4 & 0xffff;
        uVar9 = FUN_144a78877(((uint)uVar4 << 0x10 | uVar7) + (int)((ulonglong)uVar4 >> 0x20) +
                              (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar7 >> 4),
                              *(undefined4 *)(lVar3 + 0x24 + lVar12));
        iVar8 = FUN_144a78877(uVar9,uVar2);
        uVar10 = (longlong)(int)((uVar13 >> 2) + 0x9e3779b9 + uVar13 * 0x40 + iVar8 ^ uVar13) &
                 (longlong)(int)param_1[9] - 1U;
        iVar8 = (int)uVar10;
        *(int *)(lVar3 + 0x34 + lVar12) = iVar8;
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x30 + lVar12) =
             *(undefined4 *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        *(int *)((longlong)plVar11 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) =
             (int)local_98;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        bVar5 = local_78._4_4_ < (int)local_80[3];
        iVar8 = local_78._4_4_;
      } while (bVar5);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476f4d8c FUN_1476f4d8c body=303 status=ok
// SIG undefined FUN_1476f4d8c(void)

undefined4 * FUN_1476f4d8c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1476f4ebc(param_1,local_48);
  puVar1 = (uint *)param_3[1];
  uVar11 = *(uint *)*param_3;
  *local_40 = uVar11;
  uVar10 = puVar1[1];
  uVar2 = puVar1[2];
  uVar3 = puVar1[3];
  uVar4 = puVar1[4];
  uVar5 = puVar1[5];
  uVar6 = puVar1[6];
  uVar7 = puVar1[7];
  local_40[2] = *puVar1;
  local_40[3] = uVar10;
  local_40[4] = uVar2;
  local_40[5] = uVar3;
  local_40[6] = uVar4;
  local_40[7] = uVar5;
  local_40[8] = uVar6;
  local_40[9] = uVar7;
  *(undefined8 *)(local_40 + 10) = *(undefined8 *)(puVar1 + 8);
  local_40[0xc] = 0xffffffff;
  local_4c = local_48[0];
  cVar9 = FUN_1476f4f9e(param_1,uVar11,local_40,&local_4c);
  uVar8 = local_4c;
  if (cVar9 == '\0') {
    uVar10 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar13 = 1;
    if (3 < uVar10) {
      uVar12 = (ulonglong)(uVar10 & 0xfffffffe) + 0xf;
      lVar14 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar14 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar13 <= *(int *)(param_1 + 0x48))) {
      uVar11 = *(int *)(param_1 + 0x48) - 1U & uVar11;
      local_40[0xd] = uVar11;
      lVar14 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar14 = param_1 + 0x38;
      }
      local_40[0xc] =
           *(uint *)(lVar14 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4)
      ;
      lVar14 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar14 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar14 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar13;
      FUN_1476f50a8(param_1);
    }
  }
  *param_2 = uVar8;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f4ebc FUN_1476f4ebc body=226 status=ok
// SIG undefined FUN_1476f4ebc(void)

int * FUN_1476f4ebc(longlong *param_1,int *param_2)

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
      FUN_1447030e2(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x38) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 1476f4f9e FUN_1476f4f9e body=149 status=ok
// SIG undefined FUN_1476f4f9e(void)

undefined8 FUN_1476f4f9e(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
  longlong *plVar13;
  int iVar14;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar13 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[8];
    }
    iVar14 = *(int *)((longlong)plVar13 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar14 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar14 * 0x38);
        if (*(int *)(*param_1 + (longlong)iVar14 * 0x38) == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[4];
          iVar7 = param_3[5];
          iVar8 = param_3[6];
          iVar9 = param_3[7];
          iVar10 = param_3[9];
          iVar11 = param_3[10];
          iVar12 = param_3[0xb];
          piVar1[8] = param_3[8];
          piVar1[9] = iVar10;
          piVar1[10] = iVar11;
          piVar1[0xb] = iVar12;
          piVar1[4] = iVar6;
          piVar1[5] = iVar7;
          piVar1[6] = iVar8;
          piVar1[7] = iVar9;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1476f5034(iVar2,*param_4);
          *param_4 = iVar14;
          return 1;
        }
        iVar14 = piVar1[0xc];
      } while (iVar14 != -1);
    }
  }
  return 0;
}



// FUNCTION 1476f5034 FUN_1476f5034 body=116 status=ok
// SIG undefined FUN_1476f5034(void)

void FUN_1476f5034(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
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



// FUNCTION 1476f50a8 FUN_1476f50a8 body=419 status=ok
// SIG undefined FUN_1476f50a8(void)

void FUN_1476f50a8(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x38;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x34 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x30 + lVar7) =
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



// FUNCTION 1476f524c FUN_1476f524c body=458 status=ok
// SIG undefined FUN_1476f524c(void)

void FUN_1476f524c(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  longlong *plVar9;
  uint uVar10;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = param_2[1];
    uVar4 = ((uint)(*param_2 >> 0x14) & 0xffff ^ (uint)(*param_2 >> 4)) * -0x7a143595;
    uVar5 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar5 = uVar5 >> 0x10 ^ uVar5;
    uVar4 = ((uint)(param_2[2] >> 0x14) & 0xffff ^ (uint)(param_2[2] >> 4)) * -0x7a143595;
    uVar6 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar4 = (uint)(uVar2 >> 0x10);
    uVar10 = (uint)uVar2 & 0xffff;
    iVar7 = FUN_144a78877(((uint)uVar2 << 0x10 | uVar10) + (int)(uVar2 >> 0x20) +
                          (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar10 >> 4),uVar6 >> 0x10 ^ uVar6);
    uVar5 = (uVar5 >> 2) + 0x9e3779b9 + uVar5 * 0x40 + iVar7 ^ uVar5;
    uVar3 = param_2[4];
    uVar2 = param_2[3];
    uVar4 = (uint)(uVar2 >> 0x10);
    uVar6 = (uint)uVar2 & 0xffff;
    uVar8 = FUN_144a78877(((uint)uVar2 << 0x10 | uVar6) + (int)(uVar2 >> 0x20) +
                          (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4),
                          *(undefined4 *)((longlong)param_2 + 0x24));
    iVar7 = FUN_144a78877(uVar8,(char)uVar3);
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar9 +
                    ((longlong)(int)((uVar5 >> 2) + 0x9e3779b9 + uVar5 * 0x40 + iVar7 ^ uVar5) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar7 != -1) {
      do {
        lVar1 = *param_1 + (longlong)iVar7 * 0x38;
        if ((((*(ulonglong *)(*param_1 + (longlong)iVar7 * 0x38) == *param_2) &&
             (*(ulonglong *)(lVar1 + 8) == param_2[1])) &&
            (*(ulonglong *)(lVar1 + 0x10) == param_2[2])) &&
           (((*(int *)(lVar1 + 0x18) == (int)param_2[3] &&
             (*(int *)(lVar1 + 0x1c) == *(int *)((longlong)param_2 + 0x1c))) &&
            ((*(char *)(lVar1 + 0x20) == (char)param_2[4] &&
             (*(int *)(lVar1 + 0x24) == *(int *)((longlong)param_2 + 0x24))))))) {
          FUN_1476f5416(param_1);
          return;
        }
        iVar7 = *(int *)(lVar1 + 0x30);
      } while (iVar7 != -1);
    }
  }
  return;
}



// FUNCTION 1476f5416 FUN_1476f5416 body=87 status=ok
// SIG undefined FUN_1476f5416(void)

void FUN_1476f5416(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x34 + (longlong)param_2 * 0x38);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x30 + lVar5 * 0x38);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x38 + 0x30);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x38 + 0x30);
  FUN_1476f4a48();
  return;
}



// FUNCTION 1476f546e FUN_1476f546e body=52 status=ok
// SIG undefined FUN_1476f546e(void)

void FUN_1476f546e(longlong *param_1)

{
  FUN_1476f54a2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1476f54a2 FUN_1476f54a2 body=89 status=ok
// SIG undefined FUN_1476f54a2(void)

void FUN_1476f54a2(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
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



// FUNCTION 1476f54fc FUN_1476f54fc body=29 status=ok
// SIG undefined FUN_1476f54fc(void)

undefined8 FUN_1476f54fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476f5542 FUN_1476f5542 body=93 status=ok
// SIG undefined FUN_1476f5542(void)

void FUN_1476f5542(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a508870;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14a508800;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1476f55a0 FUN_1476f55a0 body=93 status=ok
// SIG undefined FUN_1476f55a0(void)

void FUN_1476f55a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a508870;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14a508800;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1476f55fe FUN_1476f55fe body=126 status=ok
// SIG undefined FUN_1476f55fe(void)

void FUN_1476f55fe(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  _LIST_ENTRY *p_Var5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a508870;
  p_Var5 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var5;
  *(undefined ***)p_Var1 = &PTR_FUN_14a508800;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001476f566d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1476f5694 FUN_1476f5694 body=31 status=ok
// SIG undefined FUN_1476f5694(void)

undefined8 FUN_1476f5694(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x20))
            (*(undefined8 *)(param_1 + 0x18),param_2,*(undefined2 *)(param_1 + 8),
             *(undefined2 *)(param_1 + 10));
  return 1;
}



// FUNCTION 1476f56b6 FUN_1476f56b6 body=87 status=ok
// SIG undefined FUN_1476f56b6(void)

void FUN_1476f56b6(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_14038fb82();
  lVar2 = param_1[2];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = param_1[1];
    lVar4 = 0;
    do {
      FUN_1405e0ab4(*param_1 + 0x28,*(undefined2 *)(lVar1 + lVar4),*(undefined2 *)(lVar3 + 0xf10));
      lVar4 = lVar4 + 2;
    } while ((longlong)(int)lVar2 * 2 != lVar4);
  }
  return;
}



// FUNCTION 1476f570e FUN_1476f570e body=86 status=ok
// SIG undefined FUN_1476f570e(void)

void FUN_1476f570e(longlong param_1,undefined2 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  char cVar2;
  
  cVar2 = FUN_143331554(param_3,param_4,param_5);
  if (cVar2 != '\0') {
    iVar1 = *(int *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x10) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
      FUN_1405e07ae((longlong *)(param_1 + 8),iVar1);
    }
    *(undefined2 *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 2) = param_2;
  }
  return;
}



// FUNCTION 1476f5764 FUN_1476f5764 body=146 status=ok
// SIG undefined FUN_1476f5764(void)

undefined8 * FUN_1476f5764(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 2);
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[7] = 0x10000000000;
  param_2[0xc] = 0x10000000000;
  param_2[0x13] = 0x10000000000;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0x18] = 0x10000000000;
  FUN_1476f5998(param_2,param_2 + 3);
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1447c44f6(param_2 + 3);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f57f8 FUN_1476f57f8 body=121 status=ok
// SIG undefined FUN_1476f57f8(void)

void FUN_1476f57f8(short *param_1)

{
  undefined1 auStack_108 [32];
  undefined1 local_e8 [104];
  longlong local_80;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (((*param_1 != -1) && (param_1[1] != -1)) && (param_1[2] != -1)) {
    FUN_1476f5a40(local_e8);
    FUN_1433318be(local_e8);
    if (local_80 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f5872 FUN_1476f5872 body=146 status=ok
// SIG undefined FUN_1476f5872(void)

undefined8 * FUN_1476f5872(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 2);
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[7] = 0x10000000000;
  param_2[0xc] = 0x10000000000;
  param_2[0x13] = 0x10000000000;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0x18] = 0x10000000000;
  FUN_1476f5e80(param_2,param_2 + 3);
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1447c44f6(param_2 + 3);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f5906 FUN_1476f5906 body=144 status=ok
// SIG undefined FUN_1476f5906(void)

void FUN_1476f5906(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_118 [40];
  undefined1 local_f0 [104];
  longlong local_88;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (((*(short *)(param_1 + 2) != -1) && (*(short *)(param_1 + 4) != -1)) &&
     (*(short *)(param_1 + 6) != -1)) {
    FUN_1476f5f28(local_f0);
    FUN_143331bb8(local_f0,param_3);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  if (*(longlong *)(param_3 + 8) != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f5998 FUN_1476f5998 body=166 status=ok
// SIG undefined FUN_1476f5998(void)

void FUN_1476f5998(undefined2 *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_32 = *param_1;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[1];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[2];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f5a40 FUN_1476f5a40 body=126 status=ok
// SIG undefined FUN_1476f5a40(void)

undefined4 * FUN_1476f5a40(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[4] = param_3[4];
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1403b8af8(param_1 + 6,param_3 + 6);
  *(undefined8 *)(param_1 + 0x26) = 0;
  FUN_1400abb7c(param_1 + 0x1e,param_3 + 0x1e);
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_1400abb7c(param_1 + 0x28,param_3 + 0x28);
  *(longlong *)(param_1 + 0x32) = param_2;
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 1476f5abe FUN_1476f5abe body=428 status=ok
// SIG undefined FUN_1476f5abe(void)

void FUN_1476f5abe(longlong param_1,short *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined1 auStack_b8 [32];
  int local_98;
  int local_94;
  longlong *local_90;
  int local_88;
  longlong local_80;
  longlong *local_78;
  int local_70;
  longlong local_68;
  longlong *local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar8 = *(longlong **)(param_1 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == param_2[2]) goto LAB_1476f5af3;
      plVar8 = plVar8 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_1476f5af3:
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar10 = *(longlong **)(param_1 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar10 + 0x1e) == param_2[1]) goto LAB_1476f5b1e;
      plVar10 = plVar10 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar10 = (longlong *)0x0;
LAB_1476f5b1e:
  lVar5 = *plVar8;
  iVar3 = *(int *)(param_1 + 0x14);
  local_94 = iVar2;
  if (iVar3 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar10 + 1));
  }
  LOCK();
  *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar6 = *(longlong **)(param_1 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar6 + 0x1e) == *param_2) goto LAB_1476f5b4e;
      plVar6 = plVar6 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  plVar6 = (longlong *)0x0;
LAB_1476f5b4e:
  lVar7 = *plVar10;
  iVar2 = *(int *)(param_1 + 0x14);
  local_98 = iVar3;
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar6 + 1));
  }
  LOCK();
  *(int *)(plVar6 + 3) = (int)plVar6[3] + 1;
  UNLOCK();
  lVar4 = *plVar6;
  local_70 = local_98;
  local_58 = local_94;
  uVar1 = *(ushort *)(param_1 + 0xe);
  local_90 = plVar6;
  local_88 = iVar2;
  local_80 = lVar4;
  local_78 = plVar10;
  local_68 = lVar7;
  local_60 = plVar8;
  local_50 = lVar5;
  if ((ulonglong)uVar1 != 0) {
    uVar9 = 0;
    do {
      FUN_1433319de(*(undefined8 *)(lVar4 + uVar9 * 8),lVar7,lVar5);
      uVar9 = uVar9 + 1;
      lVar7 = lVar7 + 0x10;
      lVar5 = lVar5 + 0x10;
    } while (uVar1 != uVar9);
  }
  FUN_1476f5c6c(&local_90);
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476f5c6c FUN_1476f5c6c body=118 status=ok
// SIG undefined FUN_1476f5c6c(void)

void FUN_1476f5c6c(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[7] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[6] + 8));
    }
  }
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001476f5cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1476f5ce2 FUN_1476f5ce2 body=29 status=ok
// SIG undefined FUN_1476f5ce2(void)

undefined8 FUN_1476f5ce2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476f5d14 FUN_1476f5d14 body=364 status=ok
// SIG undefined FUN_1476f5d14(void)

void FUN_1476f5d14(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    puVar7 = *(undefined8 **)(param_2 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x10) + 0xfa))
      goto LAB_1476f5d57;
      puVar7 = puVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  puVar7 = (undefined8 *)0x0;
LAB_1476f5d57:
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(puVar7 + 1));
  }
  LOCK();
  *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    lVar4 = *(longlong *)(param_2 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)(lVar4 + 0x1e) == *(short *)(param_1 + 0x1a)) goto LAB_1476f5d94;
      lVar4 = lVar4 + 0x20;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  lVar4 = 0;
LAB_1476f5d94:
  _Dst = (void *)*puVar7;
  iVar2 = *(int *)(param_2 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(lVar4 + 8));
  }
  LOCK();
  *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    lVar5 = *(longlong *)(param_2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)(lVar5 + 0x1e) == *(short *)(param_1 + 0x18)) goto LAB_1476f5dd8;
      lVar5 = lVar5 + 0x20;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  lVar5 = 0;
LAB_1476f5dd8:
  iVar3 = *(int *)(param_2 + 0x14);
  if (iVar3 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(lVar5 + 8));
  }
  LOCK();
  *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xe) != 0) {
    memset(_Dst,0,(ulonglong)*(ushort *)(param_2 + 0xe) << 4);
  }
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + -1;
    UNLOCK();
    if (iVar3 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(lVar5 + 8));
    }
  }
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(lVar4 + 8));
    }
  }
  if (puVar7 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001476f5e67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(puVar7 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 1476f5e80 FUN_1476f5e80 body=167 status=ok
// SIG undefined FUN_1476f5e80(void)

void FUN_1476f5e80(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_32 = *(undefined2 *)(param_1 + 2);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = *(undefined2 *)(param_1 + 4);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = *(undefined2 *)(param_1 + 6);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f5f28 FUN_1476f5f28 body=126 status=ok
// SIG undefined FUN_1476f5f28(void)

undefined4 * FUN_1476f5f28(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[4] = param_3[4];
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1403b8af8(param_1 + 6,param_3 + 6);
  *(undefined8 *)(param_1 + 0x26) = 0;
  FUN_1400abb7c(param_1 + 0x1e,param_3 + 0x1e);
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_1400abb7c(param_1 + 0x28,param_3 + 0x28);
  *(longlong *)(param_1 + 0x32) = param_2;
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 1476f5fa6 FUN_1476f5fa6 body=507 status=ok
// SIG undefined FUN_1476f5fa6(void)

void FUN_1476f5fa6(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  int local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  longlong *local_98;
  int local_90;
  longlong local_88;
  longlong *local_80;
  int local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar11 = *(longlong **)(param_2 + 0x28);
    lVar8 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar11 + 0x1e) == *(short *)(param_4 + 6)) goto LAB_1476f5fe7;
      plVar11 = plVar11 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  plVar11 = (longlong *)0x0;
LAB_1476f5fe7:
  iVar2 = *(int *)(param_2 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar11 + 1));
  }
  LOCK();
  *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar9 = *(longlong **)(param_2 + 0x28);
    lVar8 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == *(short *)(param_4 + 4)) goto LAB_1476f6017;
      plVar9 = plVar9 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_1476f6017:
  lVar8 = *plVar11;
  iVar3 = *(int *)(param_2 + 0x14);
  local_b4 = iVar2;
  local_b0 = param_3;
  if (iVar3 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_2 + 0x28);
    lVar10 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_4 + 2)) goto LAB_1476f6049;
      plVar7 = plVar7 + 4;
      lVar10 = lVar10 + -0x20;
    } while (lVar10 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_1476f6049:
  lVar10 = *plVar9;
  iVar2 = *(int *)(param_2 + 0x14);
  local_a8 = param_1;
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  uVar6 = local_a8;
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar4 = *plVar7;
  lVar5 = *(longlong *)(param_2 + 0x18);
  local_60 = local_b0;
  local_58 = local_b4;
  uVar1 = *(ushort *)(param_2 + 0xe);
  local_a0 = lVar5;
  local_98 = plVar7;
  local_90 = iVar2;
  local_88 = lVar4;
  local_80 = plVar9;
  local_78 = iVar3;
  local_70 = lVar10;
  local_68 = plVar11;
  local_50 = lVar8;
  if ((ulonglong)uVar1 != 0) {
    uVar12 = 0;
    do {
      local_c8 = lVar8;
      FUN_1476f570e(uVar6,*(undefined2 *)(lVar5 + uVar12 * 2),*(undefined8 *)(lVar4 + uVar12 * 8),
                    lVar10);
      uVar12 = uVar12 + 1;
      lVar10 = lVar10 + 0x10;
      lVar8 = lVar8 + 0x10;
    } while (uVar1 != uVar12);
  }
  FUN_1476f61a2(&local_a0);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476f61a2 FUN_1476f61a2 body=143 status=ok
// SIG undefined FUN_1476f61a2(void)

void FUN_1476f61a2(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < *(ulonglong *)(param_1 + 0x40)) {
      uVar3 = *(ulonglong *)(param_1 + 0x40);
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x38) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x48) == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(*(longlong *)(param_1 + 0x38) + 8));
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x20) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x28) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x20) + 8));
    }
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x10) == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001476f6223. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 8) + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1476f6232 FUN_1476f6232 body=273 status=ok
// SIG undefined FUN_1476f6232(void)

void FUN_1476f6232(undefined8 param_1,longlong param_2,longlong param_3,undefined2 param_4,
                  undefined2 param_5)

{
  longlong lVar1;
  undefined1 auStack_188 [32];
  undefined1 local_168 [2];
  undefined2 local_166;
  undefined2 local_164;
  undefined2 local_162;
  undefined1 local_15f;
  undefined4 local_15c;
  undefined1 local_158;
  undefined1 local_150 [80];
  longlong local_100;
  undefined8 local_d0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [80];
  longlong local_48;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_a0 = param_1;
  FUN_1403b8af8(local_98,param_3);
  local_38 = *(undefined4 *)(param_3 + 0x60);
  lVar1 = FUN_14009d2a0();
  local_166 = *(undefined2 *)(lVar1 + 0x50);
  local_162 = param_5;
  local_15f = 0;
  local_15c = 0x6ff;
  local_158 = 0;
  local_164 = param_4;
  FUN_1403b8af8(local_150,param_3);
  local_d0 = 0x10000000000;
  local_a8 = 0x10000000000;
  FUN_1476f6344(local_168,local_150);
  FUN_1476f63ec(local_168,param_2 + 0x28,local_150,&local_a0);
  if (local_100 != 0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f6344 FUN_1476f6344 body=167 status=ok
// SIG undefined FUN_1476f6344(void)

void FUN_1476f6344(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_32 = *(undefined2 *)(param_1 + 2);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = *(undefined2 *)(param_1 + 4);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = *(undefined2 *)(param_1 + 6);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f63ec FUN_1476f63ec body=752 status=ok
// SIG undefined FUN_1476f63ec(void)

void FUN_1476f63ec(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 local_100;
  char local_ed;
  int local_ec;
  int local_e8;
  int local_e4;
  longlong local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong local_c8;
  longlong local_c0;
  int local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  int local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  int local_88;
  undefined8 local_80;
  undefined8 *local_78;
  int local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (((*(short *)(param_1 + 2) != -1) && (*(short *)(param_1 + 4) != -1)) &&
     (*(short *)(param_1 + 6) != -1)) {
    local_ed = *(char *)(param_2 + 0x270);
    FUN_14150e78a(&local_60);
    local_e8 = *(int *)(param_2 + 0x10);
    lVar3 = param_1;
    uVar4 = param_4;
    if (local_50 != local_e8) {
      do {
        local_d0 = uVar4;
        local_d8 = lVar3;
        iVar10 = local_50;
        lVar8 = local_58;
        lVar6 = local_d8;
        lVar3 = *(longlong *)(*(longlong *)(local_58 + 0x60) + (longlong)local_50 * 8);
        if (local_ed == '\0') {
          *(undefined4 *)(lVar3 + 0x14) = 0;
          local_e0 = lVar3;
        }
        else {
          local_e0 = 0;
        }
        if (*(ushort *)(lVar3 + 0xc) != 0) {
          puVar11 = *(undefined8 **)(lVar3 + 0x28);
          lVar7 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
          do {
            if (*(short *)((longlong)puVar11 + 0x1e) == *(short *)(local_d8 + 6))
            goto LAB_1476f64f9;
            puVar11 = puVar11 + 4;
            lVar7 = lVar7 + -0x20;
          } while (lVar7 != 0);
        }
        puVar11 = (undefined8 *)0x0;
LAB_1476f64f9:
        iVar1 = *(int *)(lVar3 + 0x14);
        if (iVar1 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(puVar11 + 1));
        }
        LOCK();
        *(int *)(puVar11 + 3) = *(int *)(puVar11 + 3) + 1;
        UNLOCK();
        uVar4 = *puVar11;
        local_c8 = lVar8;
        if (*(ushort *)(lVar3 + 0xc) != 0) {
          puVar9 = *(undefined8 **)(lVar3 + 0x28);
          lVar8 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
          do {
            if (*(short *)((longlong)puVar9 + 0x1e) == *(short *)(lVar6 + 4)) goto LAB_1476f6532;
            puVar9 = puVar9 + 4;
            lVar8 = lVar8 + -0x20;
          } while (lVar8 != 0);
        }
        puVar9 = (undefined8 *)0x0;
LAB_1476f6532:
        iVar2 = *(int *)(lVar3 + 0x14);
        local_e4 = iVar1;
        if (iVar2 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(puVar9 + 1));
        }
        LOCK();
        *(int *)(puVar9 + 3) = *(int *)(puVar9 + 3) + 1;
        UNLOCK();
        uVar5 = *puVar9;
        if (*(ushort *)(lVar3 + 0xc) != 0) {
          puVar12 = *(undefined8 **)(lVar3 + 0x28);
          lVar8 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
          do {
            if (*(short *)((longlong)puVar12 + 0x1e) == *(short *)(lVar6 + 2)) goto LAB_1476f6564;
            puVar12 = puVar12 + 4;
            lVar8 = lVar8 + -0x20;
          } while (lVar8 != 0);
        }
        puVar12 = (undefined8 *)0x0;
LAB_1476f6564:
        iVar1 = *(int *)(lVar3 + 0x14);
        if (iVar1 == 1) {
          local_ec = iVar10;
          AcquireSRWLockShared((PSRWLOCK)(puVar12 + 1));
          iVar10 = local_ec;
        }
        LOCK();
        *(int *)(puVar12 + 3) = *(int *)(puVar12 + 3) + 1;
        UNLOCK();
        local_98 = *puVar12;
        local_b0 = *(undefined8 *)(lVar3 + 0x18);
        local_70 = local_e4;
        local_c0 = local_c8;
        local_108 = uVar5;
        local_100 = uVar4;
        local_b8 = iVar10;
        local_a8 = puVar12;
        local_a0 = iVar1;
        local_90 = puVar9;
        local_88 = iVar2;
        local_80 = uVar5;
        local_78 = puVar11;
        local_68 = uVar4;
        FUN_1476f66de(local_d0,&local_c0);
        FUN_1476f6860(&local_b0);
        if (local_e0 != 0) {
          *(undefined4 *)(local_e0 + 0x14) = 1;
        }
        local_50 = FUN_1403b8464(&local_60,local_50 + 1);
        lVar3 = local_d8;
        uVar4 = local_d0;
      } while (local_50 != local_e8);
    }
    if (local_60 != 0) {
      if (*(char *)(local_58 + 0x270) == '\0') {
        *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476f66de FUN_1476f66de body=384 status=ok
// SIG undefined FUN_1476f66de(void)

void FUN_1476f66de(longlong *param_1,undefined4 *param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined1 auStack_e8 [32];
  byte local_c8;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8 [4];
  longlong local_88;
  undefined1 local_74 [8];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_50;
  byte local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar1 = *param_1;
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_b0 = param_3;
  FUN_140cd6274(&local_50);
  if (**(int **)(lVar1 + 0xb0) != 0 || (local_4c & 1) != 0) {
    local_b8 = FUN_140732858();
    if (0 < (int)local_50) {
      uVar4 = 0;
      do {
        local_a8[0] = *(undefined8 *)(param_5 + uVar4 * 8);
        FUN_1476f68d8(lVar1,local_74,local_a8,param_6);
        local_c8 = local_4c & 1;
        FUN_14052d442(local_b8,local_74,*(undefined2 *)(local_b0 + uVar4 * 2),
                      *(undefined4 *)(param_4 + uVar4 * 4));
        uVar3 = FUN_1400e4034(*(undefined8 *)(lVar1 + 0xb0),local_74);
        cVar2 = FUN_1476f6996(lVar1,local_6c,uVar3);
        if (cVar2 == '\0') {
          FUN_143331cfa(local_a8,*(undefined8 *)(param_5 + uVar4 * 8),param_6);
          FUN_1476f6a30(lVar1,local_6c,uVar3,local_a8);
          if (local_88 != 0) {
            FUN_1400020a8();
          }
        }
        uVar4 = uVar4 + 1;
        param_6 = param_6 + 0x10;
      } while (local_50 != uVar4);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476f6860 FUN_1476f6860 body=120 status=ok
// SIG undefined FUN_1476f6860(void)

void FUN_1476f6860(longlong param_1)

{
  int *piVar1;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x38) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x40) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x38) + 8));
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x20) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x28) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x20) + 8));
    }
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x10) == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001476f68ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 8) + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1476f68d8 FUN_1476f68d8 body=189 status=ok
// SIG undefined FUN_1476f68d8(void)

longlong FUN_1476f68d8(longlong param_1,longlong param_2,longlong *param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = 0;
  if (*param_3 == 0) {
    lVar1 = 0;
  }
  else {
    local_38 = 0;
    FUN_14485c47a(&local_38);
    local_50 = local_38;
    lVar1 = *param_3;
  }
  local_48 = *param_4;
  uStack_44 = param_4[1];
  uStack_40 = param_4[2];
  uStack_3c = param_4[3];
  FUN_14027461a(param_1 + 200,param_2,lVar1);
  FUN_1476f6b18(param_1,&local_38,&local_50);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_38;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f6996 FUN_1476f6996 body=154 status=ok
// SIG undefined FUN_1476f6996(void)

ulonglong FUN_1476f6996(longlong param_1,int param_2,char param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int7 iVar6;
  
  lVar7 = (longlong)param_2 * 0x50 + *(longlong *)(param_1 + 0x68);
  iVar6 = (int7)(int3)((uint)param_2 >> 8);
  uVar5 = CONCAT71(iVar6,1);
  if (param_3 == '\x02') {
    bVar2 = *(byte *)(lVar7 + 0x48);
    if (((bVar2 & 2) == 0 & bVar2) == 0) {
      uVar3 = *(uint *)(param_1 + 0xa8);
      lVar7 = *(longlong *)(param_1 + 0xa0);
      uVar9 = 0;
      uVar8 = uVar3;
      if (0 < (int)uVar3) {
        do {
          uVar1 = (uVar8 >> 1) + uVar9;
          if (*(int *)(lVar7 + (ulonglong)uVar1 * 0x38) < param_2) {
            uVar9 = uVar1 + (uVar8 & 1);
          }
          bVar4 = 1 < uVar8;
          uVar8 = uVar8 >> 1;
        } while (bVar4);
      }
      if (((int)uVar9 < (int)uVar3) && (*(int *)(lVar7 + (ulonglong)uVar9 * 0x38) <= param_2)) {
        lVar7 = lVar7 + (ulonglong)uVar9 * 0x38;
        uVar5 = CONCAT71((int7)((ulonglong)lVar7 >> 8),lVar7 != -8);
      }
      else {
        uVar5 = 0;
      }
    }
  }
  else if (param_3 == '\x01') {
    uVar5 = CONCAT71(iVar6,*(undefined1 *)(lVar7 + 0x48));
  }
  return uVar5 & 0xffffffffffffff01;
}



// FUNCTION 1476f6a30 FUN_1476f6a30 body=230 status=ok
// SIG undefined FUN_1476f6a30(void)

void FUN_1476f6a30(longlong param_1,int param_2,char param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = (longlong)param_2 * 0x50 + *(longlong *)(param_1 + 0x68);
  local_1c = param_2;
  if (param_3 == '\x02') {
    if ((*(byte *)(lVar2 + 0x48) & 1) == 0) {
      lVar1 = *param_4;
      if (DAT_14c950c29 == '\x01') {
        if (lVar1 == 0) {
          lVar1 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar1 = *param_4;
        }
      }
      *(longlong *)(lVar2 + 0x18) = lVar1;
      FUN_141314ea8(lVar2 + 0x20,param_4 + 1);
      *(byte *)(lVar2 + 0x48) = *(byte *)(lVar2 + 0x48) | 1;
    }
    else {
      FUN_14767d35e(param_1 + 0xa0,&local_1c,param_4);
    }
  }
  else if (param_3 == '\x01') {
    lVar1 = *param_4;
    if (DAT_14c950c29 == '\x01') {
      if (lVar1 == 0) {
        lVar1 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar1 = *param_4;
      }
    }
    *(longlong *)(lVar2 + 0x18) = lVar1;
    FUN_141314ea8(lVar2 + 0x20,param_4 + 1);
    *(byte *)(lVar2 + 0x48) = *(byte *)(lVar2 + 0x48) | 3;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f6b18 FUN_1476f6b18 body=270 status=ok
// SIG undefined FUN_1476f6b18(void)

int * FUN_1476f6b18(longlong param_1,int *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  int *piStack_70;
  undefined8 local_68;
  int local_60 [2];
  undefined8 *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x18);
  uVar2 = FUN_1476f2b0a(param_3);
  iVar3 = FUN_1476f2dfe(plVar1,uVar2,param_3);
  if ((iVar3 == -1) || (lVar4 = (longlong)iVar3 * 0x28 + *plVar1, lVar4 == 0)) {
    *param_2 = -1;
  }
  else {
    iVar3 = *(int *)(lVar4 + 0x18);
    *param_2 = iVar3;
    if (iVar3 != -1) goto LAB_1476f6b79;
  }
  local_78 = (undefined8 *)*param_3;
  piStack_70 = (int *)param_3[1];
  local_68 = param_3[2];
  local_88 = 0;
  uStack_80 = 0;
  FUN_1476f6c28(param_1 + 0x68,local_60);
  local_58[2] = local_68;
  *local_58 = local_78;
  local_58[1] = piStack_70;
  local_58[3] = 0;
  local_58[4] = 0;
  *(undefined4 *)(local_58 + 5) = (undefined4)local_88;
  *(undefined4 *)((longlong)local_58 + 0x2c) = local_88._4_4_;
  *(undefined4 *)(local_58 + 6) = (undefined4)uStack_80;
  *(undefined4 *)((longlong)local_58 + 0x34) = uStack_80._4_4_;
  local_58[7] = 0;
  local_58[8] = 0;
  *(undefined1 *)(local_58 + 9) = 0;
  *param_2 = local_60[0];
  local_78 = param_3;
  piStack_70 = param_2;
  FUN_1476f2b88(plVar1,local_60,&local_78);
LAB_1476f6b79:
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f6c28 FUN_1476f6c28 body=238 status=ok
// SIG undefined FUN_1476f6c28(void)

int * FUN_1476f6c28(longlong *param_1,int *param_2)

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
      FUN_1406fba42(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x50);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x50) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x50 + *param_1;
  return param_2;
}



// FUNCTION 1476f6d16 FUN_1476f6d16 body=67 status=ok
// SIG undefined FUN_1476f6d16(void)

undefined8 * FUN_1476f6d16(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a5074f0;
  if (*(char *)(param_1 + 6) == '\x01') {
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 6) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476f6d5a FUN_1476f6d5a body=176 status=ok
// SIG undefined FUN_1476f6d5a(void)

void FUN_1476f6d5a(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
  puVar4 = (undefined8 *)FUN_14001cc68(0x48,8);
  *param_1 = puVar4;
  bVar1 = *(byte *)(param_1 + 8);
  *(byte *)(param_1 + 8) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar4;
  }
  *param_1 = &PTR_FUN_14a5074f0;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 8);
  cVar2 = *(char *)(param_2 + 0x30);
  *(char *)(param_1 + 6) = cVar2;
  if (cVar2 == '\x01') {
    param_1[4] = 0;
    lVar5 = *(longlong *)(param_2 + 0x20);
    if (lVar5 == 0) {
      uVar3 = *(undefined8 *)(param_2 + 0x18);
      param_1[2] = *(undefined8 *)(param_2 + 0x10);
      param_1[3] = uVar3;
      lVar5 = *(longlong *)(param_2 + 0x20);
    }
    param_1[4] = lVar5;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined8 *)(param_2 + 0x28) = 0x200000000;
  }
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 0x40);
  *param_1 = &PTR_FUN_14a508900;
  return;
}



// FUNCTION 1476f6e0a FUN_1476f6e0a body=29 status=ok
// SIG undefined FUN_1476f6e0a(void)

undefined8 FUN_1476f6e0a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476f6e42 FUN_1476f6e42 body=29 status=ok
// SIG undefined FUN_1476f6e42(void)

bool FUN_1476f6e42(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1476f6e60 FUN_1476f6e60 body=26 status=ok
// SIG undefined FUN_1476f6e60(void)

bool FUN_1476f6e60(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1476f6e7a FUN_1476f6e7a body=24 status=ok
// SIG undefined FUN_1476f6e7a(void)

bool FUN_1476f6e7a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1476f6e92 FUN_1476f6e92 body=101 status=ok
// SIG undefined FUN_1476f6e92(void)

void FUN_1476f6e92(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a508920;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1476f6ef8 FUN_1476f6ef8 body=101 status=ok
// SIG undefined FUN_1476f6ef8(void)

void FUN_1476f6ef8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a508920;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1476f6f5e FUN_1476f6f5e body=134 status=ok
// SIG undefined FUN_1476f6f5e(void)

void FUN_1476f6f5e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a508920;
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
                    /* WARNING: Could not recover jumptable at 0x0001476f6fd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1476f6fe4 FUN_1476f6fe4 body=39 status=ok
// SIG undefined FUN_1476f6fe4(void)

void FUN_1476f6fe4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001476f7007. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 1476f700c FUN_1476f700c body=146 status=ok
// SIG undefined FUN_1476f700c(void)

bool FUN_1476f700c(longlong param_1)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
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



// FUNCTION 1476f70a0 FUN_1476f70a0 body=29 status=ok
// SIG undefined FUN_1476f70a0(void)

undefined8 FUN_1476f70a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476f70d8 FUN_1476f70d8 body=29 status=ok
// SIG undefined FUN_1476f70d8(void)

bool FUN_1476f70d8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x28);
  return lVar1 == param_2;
}



// FUNCTION 1476f70f6 FUN_1476f70f6 body=26 status=ok
// SIG undefined FUN_1476f70f6(void)

bool FUN_1476f70f6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x28,1);
  return lVar1 == 0;
}



// FUNCTION 1476f7110 FUN_1476f7110 body=24 status=ok
// SIG undefined FUN_1476f7110(void)

bool FUN_1476f7110(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x28);
  return lVar1 != 0;
}



// FUNCTION 1476f7134 FUN_1476f7134 body=109 status=ok
// SIG undefined FUN_1476f7134(void)

void FUN_1476f7134(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a508a70;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  puVar1[3] = uVar3;
  puVar1[4] = uVar4;
  *puVar1 = &PTR_FUN_14a508a00;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar2;
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  return;
}



// FUNCTION 1476f71a2 FUN_1476f71a2 body=109 status=ok
// SIG undefined FUN_1476f71a2(void)

void FUN_1476f71a2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a508a70;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  puVar1[3] = uVar3;
  puVar1[4] = uVar4;
  *puVar1 = &PTR_FUN_14a508a00;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar2;
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  return;
}



// FUNCTION 1476f7210 FUN_1476f7210 body=142 status=ok
// SIG undefined FUN_1476f7210(void)

void FUN_1476f7210(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined4 uVar6;
  _LIST_ENTRY *p_Var7;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a508a70;
  p_Var7 = *(_LIST_ENTRY **)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var7;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = uVar2;
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  *(undefined ***)p_Var1 = &PTR_FUN_14a508a00;
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  uVar6 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar2;
  p_Var1->SpareWORD = (short)((uint)uVar2 >> 0x10);
  p_Var1[1].Type = (short)uVar3;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar3 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar6;
  p_Var1[1].CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001476f728f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1476f729e FUN_1476f729e body=65 status=ok
// SIG undefined FUN_1476f729e(void)

void FUN_1476f729e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x28);
  (**(code **)(param_1 + 0x30))
            (*(int *)(param_1 + 0x38) + lVar1,*(undefined4 *)(param_1 + 8),
             *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
             *(undefined4 *)(param_1 + 0x14),*(undefined1 *)(param_1 + 0x18));
  return;
}



// FUNCTION 1476f72e0 FUN_1476f72e0 body=177 status=ok
// SIG undefined FUN_1476f72e0(void)

bool FUN_1476f72e0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined1 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x28,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x28);
  if (lVar2 != 0) {
    local_30 = *(undefined1 *)(param_1 + 0x18);
    local_38 = *(undefined4 *)(param_1 + 0x14);
    (**(code **)(param_1 + 0x30))
              (*(int *)(param_1 + 0x38) + lVar2,*(undefined4 *)(param_1 + 8),
               *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f7394 FUN_1476f7394 body=29 status=ok
// SIG undefined FUN_1476f7394(void)

undefined8 FUN_1476f7394(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476f73cc FUN_1476f73cc body=29 status=ok
// SIG undefined FUN_1476f73cc(void)

bool FUN_1476f73cc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x28);
  return lVar1 == param_2;
}



// FUNCTION 1476f73ea FUN_1476f73ea body=26 status=ok
// SIG undefined FUN_1476f73ea(void)

bool FUN_1476f73ea(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x28,1);
  return lVar1 == 0;
}



// FUNCTION 1476f7404 FUN_1476f7404 body=24 status=ok
// SIG undefined FUN_1476f7404(void)

bool FUN_1476f7404(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x28);
  return lVar1 != 0;
}



// FUNCTION 1476f7428 FUN_1476f7428 body=109 status=ok
// SIG undefined FUN_1476f7428(void)

void FUN_1476f7428(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a508b50;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  puVar1[3] = uVar3;
  puVar1[4] = uVar4;
  *puVar1 = &PTR_FUN_14a508ae0;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar2;
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  return;
}



// FUNCTION 1476f7496 FUN_1476f7496 body=109 status=ok
// SIG undefined FUN_1476f7496(void)

void FUN_1476f7496(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a508b50;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  puVar1[3] = uVar3;
  puVar1[4] = uVar4;
  *puVar1 = &PTR_FUN_14a508ae0;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar2;
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  return;
}



// FUNCTION 1476f7504 FUN_1476f7504 body=142 status=ok
// SIG undefined FUN_1476f7504(void)

void FUN_1476f7504(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined4 uVar6;
  _LIST_ENTRY *p_Var7;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a508b50;
  p_Var7 = *(_LIST_ENTRY **)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var7;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = uVar2;
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  *(undefined ***)p_Var1 = &PTR_FUN_14a508ae0;
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  uVar6 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar2;
  p_Var1->SpareWORD = (short)((uint)uVar2 >> 0x10);
  p_Var1[1].Type = (short)uVar3;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar3 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar6;
  p_Var1[1].CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001476f7583. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1476f7592 FUN_1476f7592 body=73 status=ok
// SIG undefined FUN_1476f7592(void)

void FUN_1476f7592(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x28);
  (**(code **)(param_1 + 0x30))
            (*(int *)(param_1 + 0x38) + lVar1,*(undefined4 *)(param_1 + 8),
             *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
             *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
             *(undefined1 *)(param_1 + 0x1c));
  return;
}



// FUNCTION 1476f75dc FUN_1476f75dc body=185 status=ok
// SIG undefined FUN_1476f75dc(void)

bool FUN_1476f75dc(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  undefined1 local_38;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x28,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x28);
  if (lVar2 != 0) {
    local_38 = *(undefined1 *)(param_1 + 0x1c);
    local_40 = *(undefined4 *)(param_1 + 0x18);
    local_48 = *(undefined4 *)(param_1 + 0x14);
    (**(code **)(param_1 + 0x30))
              (*(int *)(param_1 + 0x38) + lVar2,*(undefined4 *)(param_1 + 8),
               *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f7698 FUN_1476f7698 body=29 status=ok
// SIG undefined FUN_1476f7698(void)

undefined8 FUN_1476f7698(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476f76d0 FUN_1476f76d0 body=29 status=ok
// SIG undefined FUN_1476f76d0(void)

bool FUN_1476f76d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1476f76ee FUN_1476f76ee body=26 status=ok
// SIG undefined FUN_1476f76ee(void)

bool FUN_1476f76ee(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1476f7708 FUN_1476f7708 body=24 status=ok
// SIG undefined FUN_1476f7708(void)

bool FUN_1476f7708(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1476f7720 FUN_1476f7720 body=101 status=ok
// SIG undefined FUN_1476f7720(void)

void FUN_1476f7720(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a508bc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1476f7786 FUN_1476f7786 body=101 status=ok
// SIG undefined FUN_1476f7786(void)

void FUN_1476f7786(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a508bc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1476f77ec FUN_1476f77ec body=134 status=ok
// SIG undefined FUN_1476f77ec(void)

void FUN_1476f77ec(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a508bc0;
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
                    /* WARNING: Could not recover jumptable at 0x0001476f7863. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1476f7872 FUN_1476f7872 body=39 status=ok
// SIG undefined FUN_1476f7872(void)

void FUN_1476f7872(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001476f7895. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 1476f789a FUN_1476f789a body=146 status=ok
// SIG undefined FUN_1476f789a(void)

bool FUN_1476f789a(longlong param_1)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
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



// FUNCTION 1476f79d2 FUN_1476f79d2 body=29 status=ok
// SIG undefined FUN_1476f79d2(void)

undefined8 FUN_1476f79d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476f7a0a FUN_1476f7a0a body=29 status=ok
// SIG undefined FUN_1476f7a0a(void)

bool FUN_1476f7a0a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1476f7a28 FUN_1476f7a28 body=26 status=ok
// SIG undefined FUN_1476f7a28(void)

bool FUN_1476f7a28(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1476f7a42 FUN_1476f7a42 body=24 status=ok
// SIG undefined FUN_1476f7a42(void)

bool FUN_1476f7a42(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1476f7a5a FUN_1476f7a5a body=93 status=ok
// SIG undefined FUN_1476f7a5a(void)

void FUN_1476f7a5a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a508c30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1476f7ab8 FUN_1476f7ab8 body=93 status=ok
// SIG undefined FUN_1476f7ab8(void)

void FUN_1476f7ab8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a508c30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1476f7b16 FUN_1476f7b16 body=126 status=ok
// SIG undefined FUN_1476f7b16(void)

void FUN_1476f7b16(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e01f80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a508c30;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001476f7b85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1476f7b94 FUN_1476f7b94 body=48 status=ok
// SIG undefined FUN_1476f7b94(void)

void FUN_1476f7b94(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001476f7bc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2);
  return;
}



// FUNCTION 1476f7bc4 FUN_1476f7bc4 body=158 status=ok
// SIG undefined FUN_1476f7bc4(void)

bool FUN_1476f7bc4(longlong param_1,undefined4 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 1476f7c64 FUN_1476f7c64 body=180 status=ok
// SIG undefined FUN_1476f7c64(void)

int FUN_1476f7c64(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x14);
        cVar1 = FUN_1476df66c(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_1476f7cf2;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_1476f7cf2:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f7d1a FUN_1476f7d1a body=299 status=ok
// SIG undefined FUN_1476f7d1a(void)

undefined4 * FUN_1476f7d1a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_1476f7e46(param_1,local_48);
  puVar1 = (undefined2 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  *(undefined2 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x20) ^ (uint)uVar2;
  cVar4 = FUN_1476f7f2c(param_1,uVar9,local_40,&local_4c);
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
      FUN_1476f8070(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f7e46 FUN_1476f7e46 body=230 status=ok
// SIG undefined FUN_1476f7e46(void)

int * FUN_1476f7e46(longlong *param_1,int *param_2)

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
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x14);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x14) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 1476f7f2c FUN_1476f7f2c body=141 status=ok
// SIG undefined FUN_1476f7f2c(void)

undefined8 FUN_1476f7f2c(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    iVar2 = FUN_1476f7c64();
    if (iVar2 != -1) {
      lVar1 = *param_1;
      uVar3 = *param_3;
      *(undefined4 *)(lVar1 + 8 + (longlong)iVar2 * 0x14) = *(undefined4 *)(param_3 + 1);
      *(undefined8 *)(lVar1 + (longlong)iVar2 * 0x14) = uVar3;
      FUN_1476f7fba(param_1,*param_4);
      *param_4 = iVar2;
      uVar3 = 1;
      goto LAB_1476f7f50;
    }
  }
  uVar3 = 0;
LAB_1476f7f50:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f7fba FUN_1476f7fba body=114 status=ok
// SIG undefined FUN_1476f7fba(void)

void FUN_1476f7fba(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
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



// FUNCTION 1476f802c FUN_1476f802c body=68 status=ok
// SIG undefined FUN_1476f802c(void)

void FUN_1476f802c(longlong param_1,uint param_2)

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
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_1476f8070(param_1);
  return;
}



// FUNCTION 1476f8070 FUN_1476f8070 body=436 status=ok
// SIG undefined FUN_1476f8070(void)

void FUN_1476f8070(longlong *param_1)

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



// FUNCTION 1476f8226 FUN_1476f8226 body=255 status=ok
// SIG undefined FUN_1476f8226(void)

void FUN_1476f8226(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    uVar7 = (longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
            (longlong)(int)param_1[9] - 1U;
    lVar4 = (longlong)*(int *)((longlong)plVar5 + uVar7 * 4);
    if (lVar4 != -1) {
      lVar2 = *param_1;
      local_40 = *(undefined8 *)(lVar2 + lVar4 * 0x14);
      local_48 = param_2;
      cVar3 = FUN_1476df66c();
      if (cVar3 == '\0') {
        puVar1 = (undefined8 *)(lVar2 + lVar4 * 0x14);
        do {
          puVar6 = puVar1;
          lVar4 = (longlong)*(int *)((longlong)puVar6 + 0xc);
          if (lVar4 == -1) goto LAB_1476f827f;
          puVar1 = (undefined8 *)(*param_1 + lVar4 * 0x14);
          local_40 = *puVar1;
          local_48 = param_2;
          cVar3 = FUN_1476df66c(&local_40,&local_48);
        } while (cVar3 == '\0');
        puVar8 = (undefined4 *)((longlong)puVar6 + 0xc);
      }
      else {
        puVar8 = (undefined4 *)((longlong)plVar5 + uVar7 * 4);
      }
      FUN_1476f8326(param_1,*puVar8);
    }
  }
LAB_1476f827f:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f8326 FUN_1476f8326 body=87 status=ok
// SIG undefined FUN_1476f8326(void)

void FUN_1476f8326(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x14;
  lVar6 = (longlong)*(int *)(lVar1 + 0x10);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0xc + lVar6 * 0x14);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x14 + 0xc);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0xc);
  FUN_1476f7fba();
  return;
}



// FUNCTION 1476f837e FUN_1476f837e body=299 status=ok
// SIG undefined FUN_1476f837e(void)

undefined4 * FUN_1476f837e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_1476f7e46(param_1,local_48);
  puVar1 = (undefined2 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  *(undefined2 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x20) ^ (uint)uVar2;
  cVar4 = FUN_1476f7f2c(param_1,uVar9,local_40,&local_4c);
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
      FUN_1476f8070(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f84aa FUN_1476f84aa body=196 status=ok
// SIG undefined FUN_1476f84aa(void)

void FUN_1476f84aa(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  iVar3 = FUN_144a79e9a(param_1 + 2,1,(int)param_1[5]);
  iVar4 = iVar3 + 1;
  iVar5 = (int)param_1[1];
  if (iVar4 < iVar5) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar7 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      lVar2 = *param_1;
      do {
        lVar6 = (longlong)(int)uVar7;
        if (iVar3 < (int)uVar7) {
          iVar5 = *(int *)(lVar2 + lVar6 * 0x14);
          iVar1 = *(int *)(lVar2 + 4 + lVar6 * 0x14);
          uVar7 = (ulonglong)iVar1;
          if (uVar7 != 0xffffffffffffffff) {
            *(int *)(lVar2 + uVar7 * 0x14) = iVar5;
          }
          if (iVar5 == -1) {
            *(int *)(param_1 + 6) = iVar1;
          }
          else {
            *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x14) = iVar1;
          }
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
        }
        else {
          uVar7 = (ulonglong)*(uint *)(lVar2 + 4 + lVar6 * 0x14);
        }
      } while ((int)uVar7 != -1);
      iVar5 = (int)param_1[1];
    }
    if (iVar5 != iVar4) {
      *(int *)(param_1 + 1) = iVar4;
    }
    FUN_144a6134a(param_1 + 2,iVar4,(int)param_1[5] - iVar4);
    iVar5 = (int)param_1[1];
  }
  if (*(int *)((longlong)param_1 + 0xc) == iVar5) {
    return;
  }
  FUN_1401ad22e(param_1,iVar5);
  return;
}



// FUNCTION 1476f856e FUN_1476f856e body=147 status=ok
// SIG undefined FUN_1476f856e(void)

void FUN_1476f856e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1476f8602 FUN_1476f8602 body=230 status=ok
// SIG undefined FUN_1476f8602(void)

undefined8 * FUN_1476f8602(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
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



// FUNCTION 1476f86ea FUN_1476f86ea body=29 status=ok
// SIG undefined FUN_1476f86ea(void)

undefined8 FUN_1476f86ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476f8722 FUN_1476f8722 body=29 status=ok
// SIG undefined FUN_1476f8722(void)

bool FUN_1476f8722(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1476f8740 FUN_1476f8740 body=26 status=ok
// SIG undefined FUN_1476f8740(void)

bool FUN_1476f8740(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1476f875a FUN_1476f875a body=24 status=ok
// SIG undefined FUN_1476f875a(void)

bool FUN_1476f875a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1476f877e FUN_1476f877e body=93 status=ok
// SIG undefined FUN_1476f877e(void)

void FUN_1476f877e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a508d10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a508ca0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1476f87dc FUN_1476f87dc body=93 status=ok
// SIG undefined FUN_1476f87dc(void)

void FUN_1476f87dc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a508d10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a508ca0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1476f883a FUN_1476f883a body=126 status=ok
// SIG undefined FUN_1476f883a(void)

void FUN_1476f883a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a508d10;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a508ca0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001476f88a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1476f88b8 FUN_1476f88b8 body=40 status=ok
// SIG undefined FUN_1476f88b8(void)

void FUN_1476f88b8(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001476f88dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1476f88e0 FUN_1476f88e0 body=152 status=ok
// SIG undefined FUN_1476f88e0(void)

bool FUN_1476f88e0(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 1476f897c FUN_1476f897c body=29 status=ok
// SIG undefined FUN_1476f897c(void)

undefined8 FUN_1476f897c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476f89b4 FUN_1476f89b4 body=29 status=ok
// SIG undefined FUN_1476f89b4(void)

bool FUN_1476f89b4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1476f89d2 FUN_1476f89d2 body=26 status=ok
// SIG undefined FUN_1476f89d2(void)

bool FUN_1476f89d2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1476f89ec FUN_1476f89ec body=24 status=ok
// SIG undefined FUN_1476f89ec(void)

bool FUN_1476f89ec(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1476f8a04 FUN_1476f8a04 body=93 status=ok
// SIG undefined FUN_1476f8a04(void)

void FUN_1476f8a04(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a508d80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1476f8a62 FUN_1476f8a62 body=93 status=ok
// SIG undefined FUN_1476f8a62(void)

void FUN_1476f8a62(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a508d80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1476f8ac0 FUN_1476f8ac0 body=126 status=ok
// SIG undefined FUN_1476f8ac0(void)

void FUN_1476f8ac0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a508d80;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001476f8b2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1476f8b3e FUN_1476f8b3e body=48 status=ok
// SIG undefined FUN_1476f8b3e(void)

void FUN_1476f8b3e(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001476f8b6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2);
  return;
}



// FUNCTION 1476f8b6e FUN_1476f8b6e body=158 status=ok
// SIG undefined FUN_1476f8b6e(void)

bool FUN_1476f8b6e(longlong param_1,undefined4 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 1476f8c0e FUN_1476f8c0e body=98 status=ok
// SIG undefined FUN_1476f8c0e(void)

void FUN_1476f8c0e(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1476f8c70 FUN_1476f8c70 body=63 status=ok
// SIG undefined FUN_1476f8c70(void)

void FUN_1476f8c70(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1476f8cb0(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1476f8cb0 FUN_1476f8cb0 body=97 status=ok
// SIG undefined FUN_1476f8cb0(void)

ulonglong FUN_1476f8cb0(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1476f8d11 FUN_1476f8d11 body=127 status=ok
// SIG undefined FUN_1476f8d11(void)

void FUN_1476f8d11(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 auStack_68 [40];
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_147029ea6(param_2);
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  local_40 = &PTR_FUN_14a508df0;
  local_38 = param_3;
  local_30 = param_4;
  FUN_147029a0b(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f8e1c FUN_1476f8e1c body=290 status=ok
// SIG undefined FUN_1476f8e1c(void)

undefined8 FUN_1476f8e1c(longlong *param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_2 + 0xb4) == '\x01') {
    if (param_2 == 0) {
      local_40 = 0;
    }
    else {
      local_40 = *(longlong *)(param_2 + 0x50);
    }
    local_38 = 0xffffffff;
    local_34 = 0x101;
    local_32 = 0;
    local_48 = param_2;
    FUN_144a2daf0();
    lVar5 = local_40;
    while (local_40 = lVar5, lVar5 != 0) {
      if ((char)*(ulonglong *)(lVar5 + 0x38) < '\0') {
        if ((((*(ulonglong *)(lVar5 + 0x38) & 0x500) != 0) &&
            (lVar2 = *(longlong *)(lVar5 + 8), lVar3 = FUN_144a5ab96(), lVar2 == lVar3)) &&
           (FUN_14475a8dc(), *(int *)(lVar5 + 0x34) == 1)) {
          uVar1 = *(uint *)((longlong)param_1 + 0xc);
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          }
          else {
            lVar5 = 0;
          }
          if ((*(uint *)(lVar5 + 8) >> 0x1c & 1) == 0) {
            (**(code **)(*param_1 + 0x248))(param_1,param_2,param_3);
            uVar4 = 1;
            goto LAB_1476f8eae;
          }
        }
        break;
      }
      local_40 = *(longlong *)(lVar5 + 0x18);
      FUN_144a2daf0();
      lVar5 = local_40;
    }
  }
  uVar4 = 0;
LAB_1476f8eae:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f8f40 FUN_1476f8f40 body=401 status=ok
// SIG undefined FUN_1476f8f40(void)

ulonglong FUN_1476f8f40(undefined8 param_1,void *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  void *_Src;
  undefined7 uVar7;
  ulonglong uVar6;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = FUN_147029e60();
  FUN_147029a40(uVar4,&local_40);
  uVar6 = 0;
  if ((local_40 & 1) == 0) {
    uVar6 = local_40;
  }
  *param_3 = uVar6;
  uVar7 = (undefined7)((ulonglong)param_1 >> 8);
  if (uVar6 == 0) {
LAB_1476f9039:
    lVar8 = *(longlong *)(*param_3 + 8);
    lVar5 = FUN_144a5ab96();
    if (lVar8 == lVar5) {
      cVar2 = (**(code **)(*(longlong *)*param_3 + 0x88))();
      if (cVar2 == '\0') {
        uVar4 = FUN_147029ecc(param_1);
        FUN_147029a73(param_2,param_1,uVar4);
      }
      else {
        plVar1 = (longlong *)*param_3;
        uVar4 = FUN_147029a36(param_1);
        (**(code **)(*plVar1 + 0xa0))(plVar1,uVar4,param_2);
      }
      uVar6 = CONCAT71(uVar7,1);
      goto LAB_1476f904c;
    }
  }
  else {
    lVar8 = *(longlong *)(uVar6 + 8);
    lVar5 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar5 + 8) == 0) {
      bVar9 = lVar8 != 0;
      if (lVar8 != lVar5 && bVar9) {
        do {
          lVar8 = *(longlong *)(lVar8 + 0x30);
          bVar9 = lVar8 != 0;
          if (lVar8 == lVar5) break;
        } while (lVar8 != 0);
      }
      if (bVar9) goto LAB_1476f8fe1;
      goto LAB_1476f9039;
    }
    if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar5 + 8)) == 0) goto LAB_1476f9039;
LAB_1476f8fe1:
    iVar3 = FUN_147029a3c(uVar4);
    if (iVar3 == -1) goto LAB_1476f9039;
    lVar8 = *(longlong *)(*(longlong *)(uVar6 + 0x78) + 8);
    lVar5 = FUN_144a5ab96();
    if (lVar8 == lVar5) {
      plVar1 = *(longlong **)(uVar6 + 0x78);
      _Src = (void *)FUN_147029ecc(param_1);
      uVar6 = CONCAT71(uVar7,1);
      if (_Src != param_2) {
        if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
          (**(code **)(*plVar1 + 0x100))(plVar1,param_2,_Src,1);
        }
        else {
          memcpy(param_2,_Src,(longlong)*(int *)((longlong)plVar1 + 0x34));
        }
      }
      goto LAB_1476f904c;
    }
  }
  uVar6 = 0;
LAB_1476f904c:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1476f90d2 FUN_1476f90d2 body=29 status=ok
// SIG undefined FUN_1476f90d2(void)

undefined8 FUN_1476f90d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476f911c FUN_1476f911c body=701 status=ok
// SIG undefined FUN_1476f911c(void)

undefined8 FUN_1476f911c(longlong param_1,undefined8 param_2,longlong *param_3,void *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  void *pvVar9;
  undefined7 uVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  byte unaff_BPL;
  void *pvVar13;
  undefined1 auStack_88 [40];
  void *local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar7 = FUN_147029e60(param_2);
  uVar6 = FUN_147029a3c(uVar7);
  FUN_147029a40(uVar7,&local_50);
  uVar7 = FUN_1446e6bbc();
  bVar4 = FUN_1400164de(&local_50,uVar7);
  if ((local_50 != (longlong *)0x0 & bVar4) != 1) {
    uVar7 = FUN_140010bca();
    bVar4 = FUN_144affa3a(&local_50,uVar7);
    uVar12 = (ulonglong)local_50 & 0xfffffffffffffffe;
    if ((uVar12 != 0 & bVar4) == 1) {
      FUN_147029e76(param_2,uVar12);
      uVar7 = FUN_1476f8e1c(param_1,uVar12,param_4);
    }
    else {
      uVar7 = FUN_1446ddbd2();
      cVar5 = FUN_1400164de(&local_50,uVar7);
      bVar4 = 0;
      uVar10 = 0;
      if ((cVar5 == '\0') || (local_50 == (longlong *)0x0)) goto LAB_1476f925b;
      uVar7 = FUN_1476f93da(param_1,param_2,param_4,param_3);
    }
    unaff_BPL = (byte)uVar7;
    uVar10 = (undefined7)((ulonglong)uVar7 >> 8);
    bVar4 = 1;
    goto LAB_1476f925b;
  }
  local_60 = param_4;
  if (uVar6 == 0xffffffff) {
    lVar2 = local_50[1];
    lVar8 = FUN_144a5ab96();
    if ((lVar2 != lVar8) || (FUN_14475a8dc(), *(int *)((longlong)local_50 + 0x34) != 1)) {
      bVar4 = 0;
      uVar10 = 0;
      goto LAB_1476f925b;
    }
    pvVar13 = (void *)(param_1 + *(int *)((longlong)local_50 + 0x44));
    if (pvVar13 == (void *)0x0) {
      bVar4 = 0;
      uVar10 = 0;
    }
    else {
      pvVar9 = (void *)FUN_147029e70(param_2,pvVar13);
      if (pvVar13 != local_60) {
        if ((*(byte *)((longlong)local_50 + 0x3b) & 0x40) == 0) {
          pvVar9 = (void *)(**(code **)(*local_50 + 0x100))(local_50,local_60,pvVar13,1);
        }
        else {
          pvVar9 = memcpy(local_60,pvVar13,(longlong)*(int *)((longlong)local_50 + 0x34));
        }
      }
      *param_3 = (longlong)local_50;
LAB_1476f9396:
      uVar10 = (undefined7)((ulonglong)pvVar9 >> 8);
      bVar4 = 1;
    }
    unaff_BPL = 1;
  }
  else {
    iVar1 = *(int *)((longlong)local_50 + 0x44);
    bVar4 = *(byte *)(local_50 + 0xe);
    (**(code **)(*(longlong *)local_50[0xf] + 0x178))();
    unaff_BPL = 1;
    if ((-1 < (int)uVar6) &&
       (puVar11 = (ulonglong *)(param_1 + iVar1), (int)uVar6 < (int)puVar11[1])) {
      local_58 = (longlong)*(int *)(local_50[0xf] + 0x34);
      lVar2 = *(longlong *)(local_50[0xf] + 8);
      lVar8 = FUN_144a5ab96();
      if (lVar2 == lVar8) {
        lVar2 = local_50[0xf];
        if (lVar2 != 0) {
          FUN_14475a8dc();
        }
        if ((*(int *)(lVar2 + 0x34) == 1) && ((int)puVar11[1] != 0)) {
          if ((bVar4 & 1) == 0) {
            uVar12 = *puVar11;
          }
          else {
            uVar12 = *puVar11;
            if ((uVar12 & 1) != 0) {
              uVar12 = (longlong)puVar11 + ((longlong)uVar12 >> 0x18);
            }
          }
          pvVar13 = (void *)(local_58 * (ulonglong)uVar6 + uVar12);
          if (pvVar13 != (void *)0x0) {
            FUN_147029e70(param_2,pvVar13);
            if (pvVar13 != local_60) {
              plVar3 = (longlong *)local_50[0xf];
              if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
                (**(code **)(*plVar3 + 0x100))(plVar3,local_60,pvVar13,1);
              }
              else {
                memcpy(local_60,pvVar13,(longlong)*(int *)((longlong)plVar3 + 0x34));
              }
            }
            pvVar9 = (void *)local_50[0xf];
            *param_3 = (longlong)pvVar9;
            goto LAB_1476f9396;
          }
        }
      }
    }
    bVar4 = 0;
    uVar10 = 0;
  }
LAB_1476f925b:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar10,bVar4 & unaff_BPL);
}



// FUNCTION 1476f93da FUN_1476f93da body=275 status=ok
// SIG undefined FUN_1476f93da(void)

ulonglong FUN_1476f93da(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [32];
  ulonglong *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = param_4;
  uVar3 = FUN_147029e60(param_2);
  iVar2 = FUN_147029a3c(uVar3);
  FUN_147029a40(uVar3,&local_50);
  uVar5 = 0;
  uVar8 = local_50;
  if ((local_50 & 1) != 0) {
    uVar8 = uVar5;
  }
  lVar7 = *(longlong *)(uVar8 + 8);
  lVar4 = FUN_144a5ab96();
  puVar1 = local_58;
  if (lVar7 == lVar4) {
    iVar6 = 0;
    if (iVar2 != -1) {
      iVar6 = iVar2;
    }
    if (uVar8 != 0) {
      FUN_14475a8dc();
    }
    if (((*(int *)(uVar8 + 0x34) == 1) && (iVar6 < *(int *)(uVar8 + 0x30))) &&
       (lVar7 = (longlong)iVar6 + param_1 + *(int *)(uVar8 + 0x44), lVar7 != 0)) {
      FUN_147029e70(param_2,lVar7);
      FUN_147029a40(uVar3,&local_50);
      uVar5 = 0;
      if ((local_50 & 1) == 0) {
        uVar5 = local_50;
      }
      *(bool *)param_3 =
           (*(byte *)(lVar7 + (ulonglong)*(byte *)(uVar5 + 0x71)) & *(byte *)(uVar5 + 0x73)) != 0;
      *puVar1 = uVar8;
      uVar5 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
    }
    else {
      uVar5 = 0;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f94ee FUN_1476f94ee body=663 status=ok
// SIG undefined FUN_1476f94ee(void)

undefined8 FUN_1476f94ee(longlong param_1,undefined8 param_2,longlong *param_3,void *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined7 uVar10;
  ulonglong *puVar11;
  void *_Src;
  ulonglong uVar12;
  void *pvVar13;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar8 = FUN_147029e60(param_2);
  uVar7 = FUN_147029a3c(uVar8);
  FUN_147029a40(uVar8,&local_50);
  uVar8 = FUN_1446e6bbc();
  bVar5 = FUN_1400164de(&local_50,uVar8);
  if ((local_50 != (longlong *)0x0 & bVar5) == 1) {
    if (uVar7 != 0xffffffff) {
      iVar1 = *(int *)((longlong)local_50 + 0x44);
      bVar5 = *(byte *)(local_50 + 0xe);
      local_58 = param_3;
      (**(code **)(*(longlong *)local_50[0xf] + 0x178))();
      param_3 = (longlong *)&DAT_00000001;
      if ((-1 < (int)uVar7) &&
         (puVar11 = (ulonglong *)(param_1 + iVar1), (int)uVar7 < (int)puVar11[1])) {
        local_60 = (longlong)*(int *)(local_50[0xf] + 0x34);
        lVar2 = *(longlong *)(local_50[0xf] + 8);
        lVar9 = FUN_144a5ab96();
        if (lVar2 == lVar9) {
          lVar2 = local_50[0xf];
          if (lVar2 != 0) {
            FUN_14475a8dc();
          }
          if ((*(int *)(lVar2 + 0x34) == 1) && ((int)puVar11[1] != 0)) {
            if ((bVar5 & 1) == 0) {
              uVar12 = *puVar11;
            }
            else {
              uVar12 = *puVar11;
              if ((uVar12 & 1) != 0) {
                uVar12 = (longlong)puVar11 + ((longlong)uVar12 >> 0x18);
              }
            }
            pvVar13 = (void *)(local_60 * (ulonglong)uVar7 + uVar12);
            if (pvVar13 != (void *)0x0) {
              FUN_147029e70(param_2,pvVar13);
              plVar4 = local_58;
              if (pvVar13 != param_4) {
                plVar3 = (longlong *)local_50[0xf];
                if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
                  (**(code **)(*plVar3 + 0x100))(plVar3,param_4,pvVar13,1);
                }
                else {
                  memcpy(param_4,pvVar13,(longlong)*(int *)((longlong)plVar3 + 0x34));
                }
              }
              pvVar13 = (void *)local_50[0xf];
              *plVar4 = (longlong)pvVar13;
              goto LAB_1476f974c;
            }
          }
        }
      }
      bVar5 = 0;
      uVar10 = 0;
      goto LAB_1476f95b6;
    }
    lVar2 = local_50[1];
    lVar9 = FUN_144a5ab96();
    if ((lVar2 == lVar9) && (FUN_14475a8dc(), *(int *)((longlong)local_50 + 0x34) == 1)) {
      _Src = (void *)(param_1 + *(int *)((longlong)local_50 + 0x44));
      if (_Src == (void *)0x0) {
        bVar5 = 0;
        uVar10 = 0;
      }
      else {
        pvVar13 = (void *)FUN_147029e70(param_2,_Src);
        if (_Src != param_4) {
          if ((*(byte *)((longlong)local_50 + 0x3b) & 0x40) == 0) {
            pvVar13 = (void *)(**(code **)(*local_50 + 0x100))(local_50,param_4,_Src,1);
          }
          else {
            pvVar13 = memcpy(param_4,_Src,(longlong)*(int *)((longlong)local_50 + 0x34));
          }
        }
        *param_3 = (longlong)local_50;
LAB_1476f974c:
        uVar10 = (undefined7)((ulonglong)pvVar13 >> 8);
        bVar5 = 1;
      }
      param_3 = (longlong *)&DAT_00000001;
      goto LAB_1476f95b6;
    }
  }
  else {
    uVar8 = FUN_140010bca();
    bVar5 = FUN_144affa3a(&local_50,uVar8);
    if ((((ulonglong)local_50 & 0xfffffffffffffffe) != 0 & bVar5) == 1) {
      uVar8 = FUN_147029e76(param_2);
      uVar10 = (undefined7)((ulonglong)uVar8 >> 8);
      bVar5 = 1;
      param_3 = (longlong *)0x0;
      goto LAB_1476f95b6;
    }
    uVar8 = FUN_1446ddbd2();
    cVar6 = FUN_1400164de(&local_50,uVar8);
    bVar5 = 0;
    uVar10 = 0;
    if (cVar6 != '\0') {
      if (local_50 != (longlong *)0x0) {
        uVar12 = FUN_1476f9786(param_1,param_2,param_4,param_3);
        param_3 = (longlong *)(uVar12 & 0xffffffff);
        uVar10 = (undefined7)(uVar12 >> 8);
        bVar5 = 1;
      }
      goto LAB_1476f95b6;
    }
  }
  bVar5 = 0;
  uVar10 = 0;
LAB_1476f95b6:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar10,bVar5 & (byte)param_3);
}



// FUNCTION 1476f9786 FUN_1476f9786 body=275 status=ok
// SIG undefined FUN_1476f9786(void)

ulonglong FUN_1476f9786(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [32];
  ulonglong *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = param_4;
  uVar3 = FUN_147029e60(param_2);
  iVar2 = FUN_147029a3c(uVar3);
  FUN_147029a40(uVar3,&local_50);
  uVar5 = 0;
  uVar8 = local_50;
  if ((local_50 & 1) != 0) {
    uVar8 = uVar5;
  }
  lVar7 = *(longlong *)(uVar8 + 8);
  lVar4 = FUN_144a5ab96();
  puVar1 = local_58;
  if (lVar7 == lVar4) {
    iVar6 = 0;
    if (iVar2 != -1) {
      iVar6 = iVar2;
    }
    if (uVar8 != 0) {
      FUN_14475a8dc();
    }
    if (((*(int *)(uVar8 + 0x34) == 1) && (iVar6 < *(int *)(uVar8 + 0x30))) &&
       (lVar7 = (longlong)iVar6 + param_1 + *(int *)(uVar8 + 0x44), lVar7 != 0)) {
      FUN_147029e70(param_2,lVar7);
      FUN_147029a40(uVar3,&local_50);
      uVar5 = 0;
      if ((local_50 & 1) == 0) {
        uVar5 = local_50;
      }
      *(bool *)param_3 =
           (*(byte *)(lVar7 + (ulonglong)*(byte *)(uVar5 + 0x71)) & *(byte *)(uVar5 + 0x73)) != 0;
      *puVar1 = uVar8;
      uVar5 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
    }
    else {
      uVar5 = 0;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f989a FUN_1476f989a body=106 status=ok
// SIG undefined FUN_1476f989a(void)

bool FUN_1476f989a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  if (param_1 == 0) {
LAB_1476f98fb:
    bVar3 = false;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar1 = FUN_1446dcc8c();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (!bVar3) goto LAB_1476f98fb;
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) goto LAB_1476f98fb;
    lVar2 = FUN_14627a934();
    bVar3 = *(longlong *)(param_1 + 0x70) == lVar2;
  }
  return bVar3;
}



// FUNCTION 1476f9904 FUN_1476f9904 body=127 status=ok
// SIG undefined FUN_1476f9904(void)

void FUN_1476f9904(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 auStack_68 [40];
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_147029ea6(param_2);
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  local_40 = &PTR_FUN_14a508e10;
  local_38 = param_3;
  local_30 = param_4;
  FUN_147029a0b(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f9a10 FUN_1476f9a10 body=290 status=ok
// SIG undefined FUN_1476f9a10(void)

undefined8 FUN_1476f9a10(longlong *param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_2 + 0xb4) == '\x01') {
    if (param_2 == 0) {
      local_40 = 0;
    }
    else {
      local_40 = *(longlong *)(param_2 + 0x50);
    }
    local_38 = 0xffffffff;
    local_34 = 0x101;
    local_32 = 0;
    local_48 = param_2;
    FUN_144a2daf0(&local_48);
    if (local_40 != 0) {
      do {
        if ((char)*(ulonglong *)(local_40 + 0x38) < '\0') {
          if ((((*(ulonglong *)(local_40 + 0x38) & 0x500) != 0) &&
              (cVar2 = FUN_1476f989a(local_40), cVar2 != '\0')) &&
             (cVar2 = FUN_1476f9cc5(), cVar2 != '\0')) {
            uVar1 = *(uint *)((longlong)param_1 + 0xc);
            if ((int)uVar1 < DAT_14c9647dc) {
              lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            }
            else {
              lVar4 = 0;
            }
            if ((*(uint *)(lVar4 + 8) >> 0x1c & 1) == 0) {
              (**(code **)(*param_1 + 0x248))(param_1,param_2,param_3);
              uVar3 = 1;
              goto LAB_1476f9aaf;
            }
          }
          break;
        }
        local_40 = *(longlong *)(local_40 + 0x18);
        FUN_144a2daf0(&local_48);
      } while (local_40 != 0);
    }
  }
  uVar3 = 0;
LAB_1476f9aaf:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1476f9b34 FUN_1476f9b34 body=400 status=ok
// SIG undefined FUN_1476f9b34(void)

ulonglong FUN_1476f9b34(undefined8 param_1,void *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  void *_Src;
  undefined7 uVar7;
  ulonglong uVar6;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = FUN_147029e60();
  FUN_147029a40(uVar4,&local_40);
  uVar6 = 0;
  if ((local_40 & 1) == 0) {
    uVar6 = local_40;
  }
  *param_3 = uVar6;
  uVar7 = (undefined7)((ulonglong)param_1 >> 8);
  if (uVar6 == 0) {
LAB_1476f9b85:
    cVar2 = FUN_1476f989a(*param_3);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*(longlong *)*param_3 + 0x88))();
      if (cVar2 == '\0') {
        uVar4 = FUN_147029ecc(param_1);
        FUN_147029a73(param_2,param_1,uVar4);
      }
      else {
        plVar1 = (longlong *)*param_3;
        uVar4 = FUN_147029a36(param_1);
        (**(code **)(*plVar1 + 0xa0))(plVar1,uVar4,param_2);
      }
      uVar6 = CONCAT71(uVar7,1);
      goto LAB_1476f9c72;
    }
  }
  else {
    lVar8 = *(longlong *)(uVar6 + 8);
    lVar5 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar5 + 8) != 0) {
      if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) goto LAB_1476f9c1d;
      goto LAB_1476f9b85;
    }
    bVar9 = lVar8 != 0;
    if (lVar8 != lVar5 && bVar9) {
      do {
        lVar8 = *(longlong *)(lVar8 + 0x30);
        bVar9 = lVar8 != 0;
        if (lVar8 == lVar5) break;
      } while (lVar8 != 0);
    }
    if (!bVar9) goto LAB_1476f9b85;
LAB_1476f9c1d:
    iVar3 = FUN_147029a3c(uVar4);
    if (iVar3 == -1) goto LAB_1476f9b85;
    cVar2 = FUN_1476f989a(*(undefined8 *)(uVar6 + 0x78));
    if (cVar2 != '\0') {
      plVar1 = *(longlong **)(uVar6 + 0x78);
      _Src = (void *)FUN_147029ecc(param_1);
      uVar6 = CONCAT71(uVar7,1);
      if (_Src != param_2) {
        if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
          (**(code **)(*plVar1 + 0x100))(plVar1,param_2,_Src,1);
        }
        else {
          memcpy(param_2,_Src,(longlong)*(int *)((longlong)plVar1 + 0x34));
        }
      }
      goto LAB_1476f9c72;
    }
  }
  uVar6 = 0;
LAB_1476f9c72:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1476f9cc5 FUN_1476f9cc5 body=113 status=ok
// SIG undefined FUN_1476f9cc5(void)

bool FUN_1476f9cc5(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if (param_1 != 0) {
    lVar3 = *(longlong *)(param_1 + 8);
    lVar2 = FUN_14475a8dc();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
      iVar1 = 1;
      if (bVar4) goto LAB_1476f9cf5;
    }
    else {
      iVar1 = 1;
      if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) goto LAB_1476f9cf5;
    }
  }
  iVar1 = 0xb0;
LAB_1476f9cf5:
  return *(int *)(param_1 + 0x34) == iVar1;
}



// FUNCTION 1476f9d36 FUN_1476f9d36 body=29 status=ok
// SIG undefined FUN_1476f9d36(void)

undefined8 FUN_1476f9d36(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476f9d80 FUN_1476f9d80 body=680 status=ok
// SIG undefined FUN_1476f9d80(void)

undefined8 FUN_1476f9d80(longlong param_1,undefined8 param_2,longlong *param_3,void *param_4)

{
  int iVar1;
  longlong *plVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined7 uVar8;
  void *pvVar7;
  ulonglong *puVar9;
  ulonglong uVar10;
  byte unaff_BPL;
  void *pvVar11;
  undefined1 auStack_78 [32];
  void *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar6 = FUN_147029e60(param_2);
  uVar5 = FUN_147029a3c(uVar6);
  FUN_147029a40(uVar6,&local_50);
  uVar6 = FUN_1446e6bbc();
  bVar3 = FUN_1400164de(&local_50,uVar6);
  if ((local_50 != (longlong *)0x0 & bVar3) == 1) {
    if (uVar5 != 0xffffffff) {
      iVar1 = *(int *)((longlong)local_50 + 0x44);
      bVar3 = *(byte *)(local_50 + 0xe);
      local_58 = param_4;
      (**(code **)(*(longlong *)local_50[0xf] + 0x178))();
      unaff_BPL = 1;
      if ((-1 < (int)uVar5) &&
         (puVar9 = (ulonglong *)(param_1 + iVar1), (int)uVar5 < (int)puVar9[1])) {
        iVar1 = *(int *)(local_50[0xf] + 0x34);
        cVar4 = FUN_1476f989a();
        if ((cVar4 != '\0') &&
           ((cVar4 = FUN_1476f9cc5(local_50[0xf]), pvVar7 = local_58, cVar4 != '\0' &&
            ((int)puVar9[1] != 0)))) {
          if ((bVar3 & 1) == 0) {
            uVar10 = *puVar9;
          }
          else {
            uVar10 = *puVar9;
            if ((uVar10 & 1) != 0) {
              uVar10 = (longlong)puVar9 + ((longlong)uVar10 >> 0x18);
            }
          }
          pvVar11 = (void *)((longlong)iVar1 * (ulonglong)uVar5 + uVar10);
          if (pvVar11 != (void *)0x0) {
            FUN_147029e70(param_2,pvVar11);
            if (pvVar11 != pvVar7) {
              plVar2 = (longlong *)local_50[0xf];
              if ((*(byte *)((longlong)plVar2 + 0x3b) & 0x40) == 0) {
                (**(code **)(*plVar2 + 0x100))(plVar2,pvVar7,pvVar11,1);
              }
              else {
                memcpy(pvVar7,pvVar11,(longlong)*(int *)((longlong)plVar2 + 0x34));
              }
            }
            pvVar7 = (void *)local_50[0xf];
            *param_3 = (longlong)pvVar7;
            goto LAB_1476f9fe9;
          }
        }
      }
      bVar3 = 0;
      uVar8 = 0;
      goto LAB_1476f9e30;
    }
    cVar4 = FUN_1476f989a(local_50);
    if ((cVar4 != '\0') && (cVar4 = FUN_1476f9cc5(local_50), cVar4 != '\0')) {
      pvVar11 = (void *)(param_1 + *(int *)((longlong)local_50 + 0x44));
      if (pvVar11 == (void *)0x0) {
        bVar3 = 0;
        uVar8 = 0;
      }
      else {
        pvVar7 = (void *)FUN_147029e70(param_2,pvVar11);
        if (pvVar11 != param_4) {
          if ((*(byte *)((longlong)local_50 + 0x3b) & 0x40) == 0) {
            pvVar7 = (void *)(**(code **)(*local_50 + 0x100))(local_50,param_4,pvVar11,1);
          }
          else {
            pvVar7 = memcpy(param_4,pvVar11,(longlong)*(int *)((longlong)local_50 + 0x34));
          }
        }
        *param_3 = (longlong)local_50;
LAB_1476f9fe9:
        uVar8 = (undefined7)((ulonglong)pvVar7 >> 8);
        bVar3 = 1;
      }
      unaff_BPL = 1;
      goto LAB_1476f9e30;
    }
LAB_1476f9ec8:
    bVar3 = 0;
    uVar8 = 0;
  }
  else {
    uVar6 = FUN_140010bca();
    bVar3 = FUN_144affa3a(&local_50,uVar6);
    uVar10 = (ulonglong)local_50 & 0xfffffffffffffffe;
    if ((uVar10 != 0 & bVar3) == 1) {
      FUN_147029e76(param_2,uVar10);
      uVar6 = FUN_1476f9a10(param_1,uVar10,param_4);
    }
    else {
      uVar6 = FUN_1446ddbd2();
      cVar4 = FUN_1400164de(&local_50,uVar6);
      bVar3 = 0;
      uVar8 = 0;
      if (cVar4 == '\0') goto LAB_1476f9ec8;
      if (local_50 == (longlong *)0x0) goto LAB_1476f9e30;
      uVar6 = FUN_1476fa02a(param_1,param_2,param_4,param_3);
    }
    unaff_BPL = (byte)uVar6;
    uVar8 = (undefined7)((ulonglong)uVar6 >> 8);
    bVar3 = 1;
  }
LAB_1476f9e30:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar8,bVar3 & unaff_BPL);
}



// FUNCTION 1476fa02a FUN_1476fa02a body=267 status=ok
// SIG undefined FUN_1476fa02a(void)

ulonglong FUN_1476fa02a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = FUN_147029e60(param_2);
  iVar2 = FUN_147029a3c(uVar3);
  FUN_147029a40(uVar3,&local_48);
  plVar4 = (longlong *)0x0;
  plVar5 = local_48;
  if (((ulonglong)local_48 & 1) != 0) {
    plVar5 = plVar4;
  }
  cVar1 = FUN_1476f989a(plVar5);
  if (cVar1 != '\0') {
    if (iVar2 == -1) {
      iVar2 = 0;
    }
    cVar1 = FUN_1476f9cc5(plVar5);
    if (cVar1 != '\0') {
      if (iVar2 < (int)plVar5[6]) {
        cVar1 = (**(code **)(*plVar5 + 0x88))(plVar5);
        if (cVar1 == '\0') {
          plVar4 = (longlong *)
                   ((longlong)iVar2 * (longlong)*(int *)((longlong)plVar5 + 0x34) +
                   param_1 + *(int *)((longlong)plVar5 + 0x44));
          if (plVar4 != (longlong *)0x0) {
            FUN_147029e70(param_2,plVar4);
            FUN_147029a73(param_3,param_2,plVar4);
          }
        }
        else {
          (**(code **)(*plVar5 + 0xa0))(plVar5,param_1,param_3);
        }
        *param_4 = plVar5;
        plVar4 = (longlong *)CONCAT71((int7)((ulonglong)plVar4 >> 8),1);
      }
      else {
        plVar4 = (longlong *)0x0;
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return (ulonglong)plVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476fa136 FUN_1476fa136 body=671 status=ok
// SIG undefined FUN_1476fa136(void)

undefined8 FUN_1476fa136(longlong param_1,undefined8 param_2,longlong *param_3,void *param_4)

{
  int iVar1;
  longlong *plVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined7 uVar8;
  void *pvVar7;
  ulonglong *puVar9;
  ulonglong uVar10;
  byte unaff_BPL;
  void *pvVar11;
  undefined1 auStack_78 [32];
  void *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar6 = FUN_147029e60(param_2);
  uVar5 = FUN_147029a3c(uVar6);
  FUN_147029a40(uVar6,&local_50);
  uVar6 = FUN_1446e6bbc();
  bVar3 = FUN_1400164de(&local_50,uVar6);
  if ((local_50 != (longlong *)0x0 & bVar3) == 1) {
    if (uVar5 != 0xffffffff) {
      iVar1 = *(int *)((longlong)local_50 + 0x44);
      bVar3 = *(byte *)(local_50 + 0xe);
      local_58 = param_4;
      (**(code **)(*(longlong *)local_50[0xf] + 0x178))();
      unaff_BPL = 1;
      if ((-1 < (int)uVar5) &&
         (puVar9 = (ulonglong *)(param_1 + iVar1), (int)uVar5 < (int)puVar9[1])) {
        iVar1 = *(int *)(local_50[0xf] + 0x34);
        cVar4 = FUN_1476f989a();
        if ((cVar4 != '\0') &&
           ((cVar4 = FUN_1476f9cc5(local_50[0xf]), pvVar7 = local_58, cVar4 != '\0' &&
            ((int)puVar9[1] != 0)))) {
          if ((bVar3 & 1) == 0) {
            uVar10 = *puVar9;
          }
          else {
            uVar10 = *puVar9;
            if ((uVar10 & 1) != 0) {
              uVar10 = (longlong)puVar9 + ((longlong)uVar10 >> 0x18);
            }
          }
          pvVar11 = (void *)((longlong)iVar1 * (ulonglong)uVar5 + uVar10);
          if (pvVar11 != (void *)0x0) {
            FUN_147029e70(param_2,pvVar11);
            if (pvVar11 != pvVar7) {
              plVar2 = (longlong *)local_50[0xf];
              if ((*(byte *)((longlong)plVar2 + 0x3b) & 0x40) == 0) {
                (**(code **)(*plVar2 + 0x100))(plVar2,pvVar7,pvVar11,1);
              }
              else {
                memcpy(pvVar7,pvVar11,(longlong)*(int *)((longlong)plVar2 + 0x34));
              }
            }
            pvVar7 = (void *)local_50[0xf];
            *param_3 = (longlong)pvVar7;
            goto LAB_1476fa396;
          }
        }
      }
      bVar3 = 0;
      uVar8 = 0;
      goto LAB_1476fa1e6;
    }
    cVar4 = FUN_1476f989a(local_50);
    if ((cVar4 != '\0') && (cVar4 = FUN_1476f9cc5(local_50), cVar4 != '\0')) {
      pvVar11 = (void *)(param_1 + *(int *)((longlong)local_50 + 0x44));
      if (pvVar11 == (void *)0x0) {
        bVar3 = 0;
        uVar8 = 0;
      }
      else {
        pvVar7 = (void *)FUN_147029e70(param_2,pvVar11);
        if (pvVar11 != param_4) {
          if ((*(byte *)((longlong)local_50 + 0x3b) & 0x40) == 0) {
            pvVar7 = (void *)(**(code **)(*local_50 + 0x100))(local_50,param_4,pvVar11,1);
          }
          else {
            pvVar7 = memcpy(param_4,pvVar11,(longlong)*(int *)((longlong)local_50 + 0x34));
          }
        }
        *param_3 = (longlong)local_50;
LAB_1476fa396:
        uVar8 = (undefined7)((ulonglong)pvVar7 >> 8);
        bVar3 = 1;
      }
      unaff_BPL = 1;
      goto LAB_1476fa1e6;
    }
  }
  else {
    uVar6 = FUN_140010bca();
    bVar3 = FUN_144affa3a(&local_50,uVar6);
    if ((((ulonglong)local_50 & 0xfffffffffffffffe) != 0 & bVar3) == 1) {
      uVar6 = FUN_147029e76(param_2);
      uVar8 = (undefined7)((ulonglong)uVar6 >> 8);
      bVar3 = 1;
      unaff_BPL = 0;
      goto LAB_1476fa1e6;
    }
    uVar6 = FUN_1446ddbd2();
    cVar4 = FUN_1400164de(&local_50,uVar6);
    bVar3 = 0;
    uVar8 = 0;
    if (cVar4 != '\0') {
      if (local_50 != (longlong *)0x0) {
        uVar6 = FUN_1476fa3d6(param_1,param_2,param_4,param_3);
        unaff_BPL = (byte)uVar6;
        uVar8 = (undefined7)((ulonglong)uVar6 >> 8);
        bVar3 = 1;
      }
      goto LAB_1476fa1e6;
    }
  }
  bVar3 = 0;
  uVar8 = 0;
LAB_1476fa1e6:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar8,bVar3 & unaff_BPL);
}



// FUNCTION 1476fa3d6 FUN_1476fa3d6 body=267 status=ok
// SIG undefined FUN_1476fa3d6(void)

ulonglong FUN_1476fa3d6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = FUN_147029e60(param_2);
  iVar2 = FUN_147029a3c(uVar3);
  FUN_147029a40(uVar3,&local_48);
  plVar4 = (longlong *)0x0;
  plVar5 = local_48;
  if (((ulonglong)local_48 & 1) != 0) {
    plVar5 = plVar4;
  }
  cVar1 = FUN_1476f989a(plVar5);
  if (cVar1 != '\0') {
    if (iVar2 == -1) {
      iVar2 = 0;
    }
    cVar1 = FUN_1476f9cc5(plVar5);
    if (cVar1 != '\0') {
      if (iVar2 < (int)plVar5[6]) {
        cVar1 = (**(code **)(*plVar5 + 0x88))(plVar5);
        if (cVar1 == '\0') {
          plVar4 = (longlong *)
                   ((longlong)iVar2 * (longlong)*(int *)((longlong)plVar5 + 0x34) +
                   param_1 + *(int *)((longlong)plVar5 + 0x44));
          if (plVar4 != (longlong *)0x0) {
            FUN_147029e70(param_2,plVar4);
            FUN_147029a73(param_3,param_2,plVar4);
          }
        }
        else {
          (**(code **)(*plVar5 + 0xa0))(plVar5,param_1,param_3);
        }
        *param_4 = plVar5;
        plVar4 = (longlong *)CONCAT71((int7)((ulonglong)plVar4 >> 8),1);
      }
      else {
        plVar4 = (longlong *)0x0;
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return (ulonglong)plVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476fa4e2 FUN_1476fa4e2 body=127 status=ok
// SIG undefined FUN_1476fa4e2(void)

void FUN_1476fa4e2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 auStack_68 [40];
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_147029ea6(param_2);
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  local_40 = &PTR_FUN_14a508e30;
  local_38 = param_3;
  local_30 = param_4;
  FUN_147029a0b(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476fa816 FUN_1476fa816 body=29 status=ok
// SIG undefined FUN_1476fa816(void)

undefined8 FUN_1476fa816(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476fa860 FUN_1476fa860 body=127 status=ok
// SIG undefined FUN_1476fa860(void)

void FUN_1476fa860(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 auStack_68 [40];
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_147029ea6(param_2);
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  local_40 = &PTR_FUN_14a508e50;
  local_38 = param_3;
  local_30 = param_4;
  FUN_147029a0b(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476fa96c FUN_1476fa96c body=290 status=ok
// SIG undefined FUN_1476fa96c(void)

undefined8 FUN_1476fa96c(longlong *param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_2 + 0xb4) == '\x01') {
    if (param_2 == 0) {
      local_40 = 0;
    }
    else {
      local_40 = *(longlong *)(param_2 + 0x50);
    }
    local_38 = 0xffffffff;
    local_34 = 0x101;
    local_32 = 0;
    local_48 = param_2;
    FUN_144a2daf0(&local_48);
    if (local_40 != 0) {
      do {
        if ((char)*(ulonglong *)(local_40 + 0x38) < '\0') {
          if ((((*(ulonglong *)(local_40 + 0x38) & 0x500) != 0) &&
              (cVar2 = FUN_1476fac21(local_40), cVar2 != '\0')) &&
             (cVar2 = FUN_1476face6(), cVar2 != '\0')) {
            uVar1 = *(uint *)((longlong)param_1 + 0xc);
            if ((int)uVar1 < DAT_14c9647dc) {
              lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            }
            else {
              lVar4 = 0;
            }
            if ((*(uint *)(lVar4 + 8) >> 0x1c & 1) == 0) {
              (**(code **)(*param_1 + 0x248))(param_1,param_2,param_3);
              uVar3 = 1;
              goto LAB_1476faa0b;
            }
          }
          break;
        }
        local_40 = *(longlong *)(local_40 + 0x18);
        FUN_144a2daf0(&local_48);
      } while (local_40 != 0);
    }
  }
  uVar3 = 0;
LAB_1476faa0b:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1476faa90 FUN_1476faa90 body=400 status=ok
// SIG undefined FUN_1476faa90(void)

ulonglong FUN_1476faa90(undefined8 param_1,void *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  void *_Src;
  undefined7 uVar7;
  ulonglong uVar6;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = FUN_147029e60();
  FUN_147029a40(uVar4,&local_40);
  uVar6 = 0;
  if ((local_40 & 1) == 0) {
    uVar6 = local_40;
  }
  *param_3 = uVar6;
  uVar7 = (undefined7)((ulonglong)param_1 >> 8);
  if (uVar6 == 0) {
LAB_1476faae1:
    cVar2 = FUN_1476fac21(*param_3);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*(longlong *)*param_3 + 0x88))();
      if (cVar2 == '\0') {
        uVar4 = FUN_147029ecc(param_1);
        FUN_147029a73(param_2,param_1,uVar4);
      }
      else {
        plVar1 = (longlong *)*param_3;
        uVar4 = FUN_147029a36(param_1);
        (**(code **)(*plVar1 + 0xa0))(plVar1,uVar4,param_2);
      }
      uVar6 = CONCAT71(uVar7,1);
      goto LAB_1476fabce;
    }
  }
  else {
    lVar8 = *(longlong *)(uVar6 + 8);
    lVar5 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar5 + 8) != 0) {
      if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) goto LAB_1476fab79;
      goto LAB_1476faae1;
    }
    bVar9 = lVar8 != 0;
    if (lVar8 != lVar5 && bVar9) {
      do {
        lVar8 = *(longlong *)(lVar8 + 0x30);
        bVar9 = lVar8 != 0;
        if (lVar8 == lVar5) break;
      } while (lVar8 != 0);
    }
    if (!bVar9) goto LAB_1476faae1;
LAB_1476fab79:
    iVar3 = FUN_147029a3c(uVar4);
    if (iVar3 == -1) goto LAB_1476faae1;
    cVar2 = FUN_1476fac21(*(undefined8 *)(uVar6 + 0x78));
    if (cVar2 != '\0') {
      plVar1 = *(longlong **)(uVar6 + 0x78);
      _Src = (void *)FUN_147029ecc(param_1);
      uVar6 = CONCAT71(uVar7,1);
      if (_Src != param_2) {
        if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
          (**(code **)(*plVar1 + 0x100))(plVar1,param_2,_Src,1);
        }
        else {
          memcpy(param_2,_Src,(longlong)*(int *)((longlong)plVar1 + 0x34));
        }
      }
      goto LAB_1476fabce;
    }
  }
  uVar6 = 0;
LAB_1476fabce:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1476fac21 FUN_1476fac21 body=197 status=ok
// SIG undefined FUN_1476fac21(void)

bool FUN_1476fac21(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  if (param_1 == 0) {
    param_1 = 0;
    goto LAB_1476fac4f;
  }
  lVar2 = *(longlong *)(param_1 + 8);
  lVar1 = FUN_144a7add4();
  if (*(ulonglong *)(lVar1 + 8) == 0) {
    bVar3 = lVar2 != 0;
    if (lVar2 != lVar1 && bVar3) {
      do {
        lVar2 = *(longlong *)(lVar2 + 0x30);
        bVar3 = lVar2 != 0;
        if (lVar2 == lVar1) break;
      } while (lVar2 != 0);
    }
    if (bVar3) goto LAB_1476fac47;
  }
  else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
LAB_1476fac47:
    param_1 = *(longlong *)(param_1 + 0x70);
    goto LAB_1476fac4f;
  }
  lVar2 = *(longlong *)(param_1 + 8);
  lVar1 = FUN_144a5ab96();
  if (*(ulonglong *)(lVar1 + 8) == 0) {
    bVar3 = lVar2 != 0;
    if (lVar2 != lVar1 && bVar3) {
      do {
        lVar2 = *(longlong *)(lVar2 + 0x30);
        bVar3 = lVar2 != 0;
        if (lVar2 == lVar1) break;
      } while (lVar2 != 0);
    }
    if (bVar3) goto LAB_1476facaa;
  }
  else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
LAB_1476facaa:
    return *(char *)(param_1 + 0x73) != -1;
  }
LAB_1476fac4f:
  lVar2 = *(longlong *)(param_1 + 8);
  lVar1 = FUN_14475a8dc();
  return lVar2 == lVar1;
}



// FUNCTION 1476face6 FUN_1476face6 body=106 status=ok
// SIG undefined FUN_1476face6(void)

bool FUN_1476face6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  if (param_1 == 0) {
LAB_1476fad42:
    bVar3 = *(int *)(param_1 + 0x34) == 1;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar1 = FUN_144a5ab96();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (!bVar3) goto LAB_1476fad42;
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) goto LAB_1476fad42;
    bVar3 = *(char *)(param_1 + 0x73) != -1;
  }
  return bVar3;
}



// FUNCTION 1476fad50 FUN_1476fad50 body=29 status=ok
// SIG undefined FUN_1476fad50(void)

undefined8 FUN_1476fad50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476fad9a FUN_1476fad9a body=680 status=ok
// SIG undefined FUN_1476fad9a(void)

undefined8 FUN_1476fad9a(longlong param_1,undefined8 param_2,longlong *param_3,void *param_4)

{
  int iVar1;
  longlong *plVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined7 uVar8;
  void *pvVar7;
  ulonglong *puVar9;
  ulonglong uVar10;
  byte unaff_BPL;
  void *pvVar11;
  undefined1 auStack_78 [32];
  void *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar6 = FUN_147029e60(param_2);
  uVar5 = FUN_147029a3c(uVar6);
  FUN_147029a40(uVar6,&local_50);
  uVar6 = FUN_1446e6bbc();
  bVar3 = FUN_1400164de(&local_50,uVar6);
  if ((local_50 != (longlong *)0x0 & bVar3) == 1) {
    if (uVar5 != 0xffffffff) {
      iVar1 = *(int *)((longlong)local_50 + 0x44);
      bVar3 = *(byte *)(local_50 + 0xe);
      local_58 = param_4;
      (**(code **)(*(longlong *)local_50[0xf] + 0x178))();
      unaff_BPL = 1;
      if ((-1 < (int)uVar5) &&
         (puVar9 = (ulonglong *)(param_1 + iVar1), (int)uVar5 < (int)puVar9[1])) {
        iVar1 = *(int *)(local_50[0xf] + 0x34);
        cVar4 = FUN_1476fac21();
        if ((cVar4 != '\0') &&
           ((cVar4 = FUN_1476face6(local_50[0xf]), pvVar7 = local_58, cVar4 != '\0' &&
            ((int)puVar9[1] != 0)))) {
          if ((bVar3 & 1) == 0) {
            uVar10 = *puVar9;
          }
          else {
            uVar10 = *puVar9;
            if ((uVar10 & 1) != 0) {
              uVar10 = (longlong)puVar9 + ((longlong)uVar10 >> 0x18);
            }
          }
          pvVar11 = (void *)((longlong)iVar1 * (ulonglong)uVar5 + uVar10);
          if (pvVar11 != (void *)0x0) {
            FUN_147029e70(param_2,pvVar11);
            if (pvVar11 != pvVar7) {
              plVar2 = (longlong *)local_50[0xf];
              if ((*(byte *)((longlong)plVar2 + 0x3b) & 0x40) == 0) {
                (**(code **)(*plVar2 + 0x100))(plVar2,pvVar7,pvVar11,1);
              }
              else {
                memcpy(pvVar7,pvVar11,(longlong)*(int *)((longlong)plVar2 + 0x34));
              }
            }
            pvVar7 = (void *)local_50[0xf];
            *param_3 = (longlong)pvVar7;
            goto LAB_1476fb003;
          }
        }
      }
      bVar3 = 0;
      uVar8 = 0;
      goto LAB_1476fae4a;
    }
    cVar4 = FUN_1476fac21(local_50);
    if ((cVar4 != '\0') && (cVar4 = FUN_1476face6(local_50), cVar4 != '\0')) {
      pvVar11 = (void *)(param_1 + *(int *)((longlong)local_50 + 0x44));
      if (pvVar11 == (void *)0x0) {
        bVar3 = 0;
        uVar8 = 0;
      }
      else {
        pvVar7 = (void *)FUN_147029e70(param_2,pvVar11);
        if (pvVar11 != param_4) {
          if ((*(byte *)((longlong)local_50 + 0x3b) & 0x40) == 0) {
            pvVar7 = (void *)(**(code **)(*local_50 + 0x100))(local_50,param_4,pvVar11,1);
          }
          else {
            pvVar7 = memcpy(param_4,pvVar11,(longlong)*(int *)((longlong)local_50 + 0x34));
          }
        }
        *param_3 = (longlong)local_50;
LAB_1476fb003:
        uVar8 = (undefined7)((ulonglong)pvVar7 >> 8);
        bVar3 = 1;
      }
      unaff_BPL = 1;
      goto LAB_1476fae4a;
    }
LAB_1476faee2:
    bVar3 = 0;
    uVar8 = 0;
  }
  else {
    uVar6 = FUN_140010bca();
    bVar3 = FUN_144affa3a(&local_50,uVar6);
    uVar10 = (ulonglong)local_50 & 0xfffffffffffffffe;
    if ((uVar10 != 0 & bVar3) == 1) {
      FUN_147029e76(param_2,uVar10);
      uVar6 = FUN_1476fa96c(param_1,uVar10,param_4);
    }
    else {
      uVar6 = FUN_1446ddbd2();
      cVar4 = FUN_1400164de(&local_50,uVar6);
      bVar3 = 0;
      uVar8 = 0;
      if (cVar4 == '\0') goto LAB_1476faee2;
      if (local_50 == (longlong *)0x0) goto LAB_1476fae4a;
      uVar6 = FUN_1476fb044(param_1,param_2,param_4,param_3);
    }
    unaff_BPL = (byte)uVar6;
    uVar8 = (undefined7)((ulonglong)uVar6 >> 8);
    bVar3 = 1;
  }
LAB_1476fae4a:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar8,bVar3 & unaff_BPL);
}



// FUNCTION 1476fb044 FUN_1476fb044 body=267 status=ok
// SIG undefined FUN_1476fb044(void)

ulonglong FUN_1476fb044(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = FUN_147029e60(param_2);
  iVar2 = FUN_147029a3c(uVar3);
  FUN_147029a40(uVar3,&local_48);
  plVar4 = (longlong *)0x0;
  plVar5 = local_48;
  if (((ulonglong)local_48 & 1) != 0) {
    plVar5 = plVar4;
  }
  cVar1 = FUN_1476fac21(plVar5);
  if (cVar1 != '\0') {
    if (iVar2 == -1) {
      iVar2 = 0;
    }
    cVar1 = FUN_1476face6(plVar5);
    if (cVar1 != '\0') {
      if (iVar2 < (int)plVar5[6]) {
        cVar1 = (**(code **)(*plVar5 + 0x88))(plVar5);
        if (cVar1 == '\0') {
          plVar4 = (longlong *)
                   ((longlong)iVar2 * (longlong)*(int *)((longlong)plVar5 + 0x34) +
                   param_1 + *(int *)((longlong)plVar5 + 0x44));
          if (plVar4 != (longlong *)0x0) {
            FUN_147029e70(param_2,plVar4);
            FUN_147029a73(param_3,param_2,plVar4);
          }
        }
        else {
          (**(code **)(*plVar5 + 0xa0))(plVar5,param_1,param_3);
        }
        *param_4 = plVar5;
        plVar4 = (longlong *)CONCAT71((int7)((ulonglong)plVar4 >> 8),1);
      }
      else {
        plVar4 = (longlong *)0x0;
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return (ulonglong)plVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476fb150 FUN_1476fb150 body=671 status=ok
// SIG undefined FUN_1476fb150(void)

undefined8 FUN_1476fb150(longlong param_1,undefined8 param_2,longlong *param_3,void *param_4)

{
  int iVar1;
  longlong *plVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined7 uVar8;
  void *pvVar7;
  ulonglong *puVar9;
  ulonglong uVar10;
  byte unaff_BPL;
  void *pvVar11;
  undefined1 auStack_78 [32];
  void *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar6 = FUN_147029e60(param_2);
  uVar5 = FUN_147029a3c(uVar6);
  FUN_147029a40(uVar6,&local_50);
  uVar6 = FUN_1446e6bbc();
  bVar3 = FUN_1400164de(&local_50,uVar6);
  if ((local_50 != (longlong *)0x0 & bVar3) == 1) {
    if (uVar5 != 0xffffffff) {
      iVar1 = *(int *)((longlong)local_50 + 0x44);
      bVar3 = *(byte *)(local_50 + 0xe);
      local_58 = param_4;
      (**(code **)(*(longlong *)local_50[0xf] + 0x178))();
      unaff_BPL = 1;
      if ((-1 < (int)uVar5) &&
         (puVar9 = (ulonglong *)(param_1 + iVar1), (int)uVar5 < (int)puVar9[1])) {
        iVar1 = *(int *)(local_50[0xf] + 0x34);
        cVar4 = FUN_1476fac21();
        if ((cVar4 != '\0') &&
           ((cVar4 = FUN_1476face6(local_50[0xf]), pvVar7 = local_58, cVar4 != '\0' &&
            ((int)puVar9[1] != 0)))) {
          if ((bVar3 & 1) == 0) {
            uVar10 = *puVar9;
          }
          else {
            uVar10 = *puVar9;
            if ((uVar10 & 1) != 0) {
              uVar10 = (longlong)puVar9 + ((longlong)uVar10 >> 0x18);
            }
          }
          pvVar11 = (void *)((longlong)iVar1 * (ulonglong)uVar5 + uVar10);
          if (pvVar11 != (void *)0x0) {
            FUN_147029e70(param_2,pvVar11);
            if (pvVar11 != pvVar7) {
              plVar2 = (longlong *)local_50[0xf];
              if ((*(byte *)((longlong)plVar2 + 0x3b) & 0x40) == 0) {
                (**(code **)(*plVar2 + 0x100))(plVar2,pvVar7,pvVar11,1);
              }
              else {
                memcpy(pvVar7,pvVar11,(longlong)*(int *)((longlong)plVar2 + 0x34));
              }
            }
            pvVar7 = (void *)local_50[0xf];
            *param_3 = (longlong)pvVar7;
            goto LAB_1476fb3b0;
          }
        }
      }
      bVar3 = 0;
      uVar8 = 0;
      goto LAB_1476fb200;
    }
    cVar4 = FUN_1476fac21(local_50);
    if ((cVar4 != '\0') && (cVar4 = FUN_1476face6(local_50), cVar4 != '\0')) {
      pvVar11 = (void *)(param_1 + *(int *)((longlong)local_50 + 0x44));
      if (pvVar11 == (void *)0x0) {
        bVar3 = 0;
        uVar8 = 0;
      }
      else {
        pvVar7 = (void *)FUN_147029e70(param_2,pvVar11);
        if (pvVar11 != param_4) {
          if ((*(byte *)((longlong)local_50 + 0x3b) & 0x40) == 0) {
            pvVar7 = (void *)(**(code **)(*local_50 + 0x100))(local_50,param_4,pvVar11,1);
          }
          else {
            pvVar7 = memcpy(param_4,pvVar11,(longlong)*(int *)((longlong)local_50 + 0x34));
          }
        }
        *param_3 = (longlong)local_50;
LAB_1476fb3b0:
        uVar8 = (undefined7)((ulonglong)pvVar7 >> 8);
        bVar3 = 1;
      }
      unaff_BPL = 1;
      goto LAB_1476fb200;
    }
  }
  else {
    uVar6 = FUN_140010bca();
    bVar3 = FUN_144affa3a(&local_50,uVar6);
    if ((((ulonglong)local_50 & 0xfffffffffffffffe) != 0 & bVar3) == 1) {
      uVar6 = FUN_147029e76(param_2);
      uVar8 = (undefined7)((ulonglong)uVar6 >> 8);
      bVar3 = 1;
      unaff_BPL = 0;
      goto LAB_1476fb200;
    }
    uVar6 = FUN_1446ddbd2();
    cVar4 = FUN_1400164de(&local_50,uVar6);
    bVar3 = 0;
    uVar8 = 0;
    if (cVar4 != '\0') {
      if (local_50 != (longlong *)0x0) {
        uVar6 = FUN_1476fb3f0(param_1,param_2,param_4,param_3);
        unaff_BPL = (byte)uVar6;
        uVar8 = (undefined7)((ulonglong)uVar6 >> 8);
        bVar3 = 1;
      }
      goto LAB_1476fb200;
    }
  }
  bVar3 = 0;
  uVar8 = 0;
LAB_1476fb200:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar8,bVar3 & unaff_BPL);
}



// FUNCTION 1476fb3f0 FUN_1476fb3f0 body=267 status=ok
// SIG undefined FUN_1476fb3f0(void)

ulonglong FUN_1476fb3f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = FUN_147029e60(param_2);
  iVar2 = FUN_147029a3c(uVar3);
  FUN_147029a40(uVar3,&local_48);
  plVar4 = (longlong *)0x0;
  plVar5 = local_48;
  if (((ulonglong)local_48 & 1) != 0) {
    plVar5 = plVar4;
  }
  cVar1 = FUN_1476fac21(plVar5);
  if (cVar1 != '\0') {
    if (iVar2 == -1) {
      iVar2 = 0;
    }
    cVar1 = FUN_1476face6(plVar5);
    if (cVar1 != '\0') {
      if (iVar2 < (int)plVar5[6]) {
        cVar1 = (**(code **)(*plVar5 + 0x88))(plVar5);
        if (cVar1 == '\0') {
          plVar4 = (longlong *)
                   ((longlong)iVar2 * (longlong)*(int *)((longlong)plVar5 + 0x34) +
                   param_1 + *(int *)((longlong)plVar5 + 0x44));
          if (plVar4 != (longlong *)0x0) {
            FUN_147029e70(param_2,plVar4);
            FUN_147029a73(param_3,param_2,plVar4);
          }
        }
        else {
          (**(code **)(*plVar5 + 0xa0))(plVar5,param_1,param_3);
        }
        *param_4 = plVar5;
        plVar4 = (longlong *)CONCAT71((int7)((ulonglong)plVar4 >> 8),1);
      }
      else {
        plVar4 = (longlong *)0x0;
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return (ulonglong)plVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476fb4fc FUN_1476fb4fc body=106 status=ok
// SIG undefined FUN_1476fb4fc(void)

bool FUN_1476fb4fc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  if (param_1 == 0) {
LAB_1476fb55d:
    bVar3 = false;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar1 = FUN_1446dcc8c();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (!bVar3) goto LAB_1476fb55d;
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) goto LAB_1476fb55d;
    lVar2 = FUN_14627a9cc();
    bVar3 = *(longlong *)(param_1 + 0x70) == lVar2;
  }
  return bVar3;
}



// FUNCTION 1476fb566 FUN_1476fb566 body=191 status=ok
// SIG undefined FUN_1476fb566(void)

undefined8 FUN_1476fb566(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab7668) {
    FUN_144b3d300(&DAT_14cab7668);
    if (DAT_14cab7668 == -1) {
      DAT_14cab7660 = FUN_140bf8bc4();
      _Init_thread_footer(&DAT_14cab7668);
    }
  }
  if (param_1 == 0) {
LAB_1476fb5ea:
    uVar2 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 8);
    lVar1 = FUN_1446dcc8c();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar1 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar1) break;
        } while (lVar3 != 0);
      }
      if (!bVar4) goto LAB_1476fb5ea;
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) goto LAB_1476fb5ea;
    uVar2 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x70) >> 8),
                     *(longlong *)(param_1 + 0x70) == DAT_14cab7660);
  }
  return uVar2;
}



// FUNCTION 1476fb625 FUN_1476fb625 body=127 status=ok
// SIG undefined FUN_1476fb625(void)

void FUN_1476fb625(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 auStack_68 [40];
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_147029ea6(param_2);
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  local_40 = &PTR_FUN_14a508e70;
  local_38 = param_3;
  local_30 = param_4;
  FUN_147029a0b(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476fb730 FUN_1476fb730 body=290 status=ok
// SIG undefined FUN_1476fb730(void)

undefined8 FUN_1476fb730(longlong *param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_2 + 0xb4) == '\x01') {
    if (param_2 == 0) {
      local_40 = 0;
    }
    else {
      local_40 = *(longlong *)(param_2 + 0x50);
    }
    local_38 = 0xffffffff;
    local_34 = 0x101;
    local_32 = 0;
    local_48 = param_2;
    FUN_144a2daf0(&local_48);
    if (local_40 != 0) {
      do {
        if ((char)*(ulonglong *)(local_40 + 0x38) < '\0') {
          if ((((*(ulonglong *)(local_40 + 0x38) & 0x500) != 0) &&
              (cVar2 = FUN_1476fb4fc(local_40), cVar2 != '\0')) &&
             (cVar2 = FUN_1476fb9e5(), cVar2 != '\0')) {
            uVar1 = *(uint *)((longlong)param_1 + 0xc);
            if ((int)uVar1 < DAT_14c9647dc) {
              lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            }
            else {
              lVar4 = 0;
            }
            if ((*(uint *)(lVar4 + 8) >> 0x1c & 1) == 0) {
              (**(code **)(*param_1 + 0x248))(param_1,param_2,param_3);
              uVar3 = 1;
              goto LAB_1476fb7cf;
            }
          }
          break;
        }
        local_40 = *(longlong *)(local_40 + 0x18);
        FUN_144a2daf0(&local_48);
      } while (local_40 != 0);
    }
  }
  uVar3 = 0;
LAB_1476fb7cf:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1476fb854 FUN_1476fb854 body=400 status=ok
// SIG undefined FUN_1476fb854(void)

ulonglong FUN_1476fb854(undefined8 param_1,void *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  void *_Src;
  undefined7 uVar7;
  ulonglong uVar6;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = FUN_147029e60();
  FUN_147029a40(uVar4,&local_40);
  uVar6 = 0;
  if ((local_40 & 1) == 0) {
    uVar6 = local_40;
  }
  *param_3 = uVar6;
  uVar7 = (undefined7)((ulonglong)param_1 >> 8);
  if (uVar6 == 0) {
LAB_1476fb8a5:
    cVar2 = FUN_1476fb4fc(*param_3);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*(longlong *)*param_3 + 0x88))();
      if (cVar2 == '\0') {
        uVar4 = FUN_147029ecc(param_1);
        FUN_147029a73(param_2,param_1,uVar4);
      }
      else {
        plVar1 = (longlong *)*param_3;
        uVar4 = FUN_147029a36(param_1);
        (**(code **)(*plVar1 + 0xa0))(plVar1,uVar4,param_2);
      }
      uVar6 = CONCAT71(uVar7,1);
      goto LAB_1476fb992;
    }
  }
  else {
    lVar8 = *(longlong *)(uVar6 + 8);
    lVar5 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar5 + 8) != 0) {
      if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) goto LAB_1476fb93d;
      goto LAB_1476fb8a5;
    }
    bVar9 = lVar8 != 0;
    if (lVar8 != lVar5 && bVar9) {
      do {
        lVar8 = *(longlong *)(lVar8 + 0x30);
        bVar9 = lVar8 != 0;
        if (lVar8 == lVar5) break;
      } while (lVar8 != 0);
    }
    if (!bVar9) goto LAB_1476fb8a5;
LAB_1476fb93d:
    iVar3 = FUN_147029a3c(uVar4);
    if (iVar3 == -1) goto LAB_1476fb8a5;
    cVar2 = FUN_1476fb4fc(*(undefined8 *)(uVar6 + 0x78));
    if (cVar2 != '\0') {
      plVar1 = *(longlong **)(uVar6 + 0x78);
      _Src = (void *)FUN_147029ecc(param_1);
      uVar6 = CONCAT71(uVar7,1);
      if (_Src != param_2) {
        if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
          (**(code **)(*plVar1 + 0x100))(plVar1,param_2,_Src,1);
        }
        else {
          memcpy(param_2,_Src,(longlong)*(int *)((longlong)plVar1 + 0x34));
        }
      }
      goto LAB_1476fb992;
    }
  }
  uVar6 = 0;
LAB_1476fb992:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1476fb9e5 FUN_1476fb9e5 body=113 status=ok
// SIG undefined FUN_1476fb9e5(void)

bool FUN_1476fb9e5(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if (param_1 != 0) {
    lVar3 = *(longlong *)(param_1 + 8);
    lVar2 = FUN_14475a8dc();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
      iVar1 = 1;
      if (bVar4) goto LAB_1476fba15;
    }
    else {
      iVar1 = 1;
      if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) goto LAB_1476fba15;
    }
  }
  iVar1 = 0x14;
LAB_1476fba15:
  return *(int *)(param_1 + 0x34) == iVar1;
}



// FUNCTION 1476fba56 FUN_1476fba56 body=29 status=ok
// SIG undefined FUN_1476fba56(void)

undefined8 FUN_1476fba56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476fbaa0 FUN_1476fbaa0 body=680 status=ok
// SIG undefined FUN_1476fbaa0(void)

undefined8 FUN_1476fbaa0(longlong param_1,undefined8 param_2,longlong *param_3,void *param_4)

{
  int iVar1;
  longlong *plVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined7 uVar8;
  void *pvVar7;
  ulonglong *puVar9;
  ulonglong uVar10;
  byte unaff_BPL;
  void *pvVar11;
  undefined1 auStack_78 [32];
  void *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar6 = FUN_147029e60(param_2);
  uVar5 = FUN_147029a3c(uVar6);
  FUN_147029a40(uVar6,&local_50);
  uVar6 = FUN_1446e6bbc();
  bVar3 = FUN_1400164de(&local_50,uVar6);
  if ((local_50 != (longlong *)0x0 & bVar3) == 1) {
    if (uVar5 != 0xffffffff) {
      iVar1 = *(int *)((longlong)local_50 + 0x44);
      bVar3 = *(byte *)(local_50 + 0xe);
      local_58 = param_4;
      (**(code **)(*(longlong *)local_50[0xf] + 0x178))();
      unaff_BPL = 1;
      if ((-1 < (int)uVar5) &&
         (puVar9 = (ulonglong *)(param_1 + iVar1), (int)uVar5 < (int)puVar9[1])) {
        iVar1 = *(int *)(local_50[0xf] + 0x34);
        cVar4 = FUN_1476fb4fc();
        if ((cVar4 != '\0') &&
           ((cVar4 = FUN_1476fb9e5(local_50[0xf]), pvVar7 = local_58, cVar4 != '\0' &&
            ((int)puVar9[1] != 0)))) {
          if ((bVar3 & 1) == 0) {
            uVar10 = *puVar9;
          }
          else {
            uVar10 = *puVar9;
            if ((uVar10 & 1) != 0) {
              uVar10 = (longlong)puVar9 + ((longlong)uVar10 >> 0x18);
            }
          }
          pvVar11 = (void *)((longlong)iVar1 * (ulonglong)uVar5 + uVar10);
          if (pvVar11 != (void *)0x0) {
            FUN_147029e70(param_2,pvVar11);
            if (pvVar11 != pvVar7) {
              plVar2 = (longlong *)local_50[0xf];
              if ((*(byte *)((longlong)plVar2 + 0x3b) & 0x40) == 0) {
                (**(code **)(*plVar2 + 0x100))(plVar2,pvVar7,pvVar11,1);
              }
              else {
                memcpy(pvVar7,pvVar11,(longlong)*(int *)((longlong)plVar2 + 0x34));
              }
            }
            pvVar7 = (void *)local_50[0xf];
            *param_3 = (longlong)pvVar7;
            goto LAB_1476fbd09;
          }
        }
      }
      bVar3 = 0;
      uVar8 = 0;
      goto LAB_1476fbb50;
    }
    cVar4 = FUN_1476fb4fc(local_50);
    if ((cVar4 != '\0') && (cVar4 = FUN_1476fb9e5(local_50), cVar4 != '\0')) {
      pvVar11 = (void *)(param_1 + *(int *)((longlong)local_50 + 0x44));
      if (pvVar11 == (void *)0x0) {
        bVar3 = 0;
        uVar8 = 0;
      }
      else {
        pvVar7 = (void *)FUN_147029e70(param_2,pvVar11);
        if (pvVar11 != param_4) {
          if ((*(byte *)((longlong)local_50 + 0x3b) & 0x40) == 0) {
            pvVar7 = (void *)(**(code **)(*local_50 + 0x100))(local_50,param_4,pvVar11,1);
          }
          else {
            pvVar7 = memcpy(param_4,pvVar11,(longlong)*(int *)((longlong)local_50 + 0x34));
          }
        }
        *param_3 = (longlong)local_50;
LAB_1476fbd09:
        uVar8 = (undefined7)((ulonglong)pvVar7 >> 8);
        bVar3 = 1;
      }
      unaff_BPL = 1;
      goto LAB_1476fbb50;
    }
LAB_1476fbbe8:
    bVar3 = 0;
    uVar8 = 0;
  }
  else {
    uVar6 = FUN_140010bca();
    bVar3 = FUN_144affa3a(&local_50,uVar6);
    uVar10 = (ulonglong)local_50 & 0xfffffffffffffffe;
    if ((uVar10 != 0 & bVar3) == 1) {
      FUN_147029e76(param_2,uVar10);
      uVar6 = FUN_1476fb730(param_1,uVar10,param_4);
    }
    else {
      uVar6 = FUN_1446ddbd2();
      cVar4 = FUN_1400164de(&local_50,uVar6);
      bVar3 = 0;
      uVar8 = 0;
      if (cVar4 == '\0') goto LAB_1476fbbe8;
      if (local_50 == (longlong *)0x0) goto LAB_1476fbb50;
      uVar6 = FUN_1476fbd4a(param_1,param_2,param_4,param_3);
    }
    unaff_BPL = (byte)uVar6;
    uVar8 = (undefined7)((ulonglong)uVar6 >> 8);
    bVar3 = 1;
  }
LAB_1476fbb50:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar8,bVar3 & unaff_BPL);
}



// FUNCTION 1476fbd4a FUN_1476fbd4a body=267 status=ok
// SIG undefined FUN_1476fbd4a(void)

ulonglong FUN_1476fbd4a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = FUN_147029e60(param_2);
  iVar2 = FUN_147029a3c(uVar3);
  FUN_147029a40(uVar3,&local_48);
  plVar4 = (longlong *)0x0;
  plVar5 = local_48;
  if (((ulonglong)local_48 & 1) != 0) {
    plVar5 = plVar4;
  }
  cVar1 = FUN_1476fb4fc(plVar5);
  if (cVar1 != '\0') {
    if (iVar2 == -1) {
      iVar2 = 0;
    }
    cVar1 = FUN_1476fb9e5(plVar5);
    if (cVar1 != '\0') {
      if (iVar2 < (int)plVar5[6]) {
        cVar1 = (**(code **)(*plVar5 + 0x88))(plVar5);
        if (cVar1 == '\0') {
          plVar4 = (longlong *)
                   ((longlong)iVar2 * (longlong)*(int *)((longlong)plVar5 + 0x34) +
                   param_1 + *(int *)((longlong)plVar5 + 0x44));
          if (plVar4 != (longlong *)0x0) {
            FUN_147029e70(param_2,plVar4);
            FUN_147029a73(param_3,param_2,plVar4);
          }
        }
        else {
          (**(code **)(*plVar5 + 0xa0))(plVar5,param_1,param_3);
        }
        *param_4 = plVar5;
        plVar4 = (longlong *)CONCAT71((int7)((ulonglong)plVar4 >> 8),1);
      }
      else {
        plVar4 = (longlong *)0x0;
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return (ulonglong)plVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476fbe56 FUN_1476fbe56 body=671 status=ok
// SIG undefined FUN_1476fbe56(void)

undefined8 FUN_1476fbe56(longlong param_1,undefined8 param_2,longlong *param_3,void *param_4)

{
  int iVar1;
  longlong *plVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined7 uVar8;
  void *pvVar7;
  ulonglong *puVar9;
  ulonglong uVar10;
  byte unaff_BPL;
  void *pvVar11;
  undefined1 auStack_78 [32];
  void *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar6 = FUN_147029e60(param_2);
  uVar5 = FUN_147029a3c(uVar6);
  FUN_147029a40(uVar6,&local_50);
  uVar6 = FUN_1446e6bbc();
  bVar3 = FUN_1400164de(&local_50,uVar6);
  if ((local_50 != (longlong *)0x0 & bVar3) == 1) {
    if (uVar5 != 0xffffffff) {
      iVar1 = *(int *)((longlong)local_50 + 0x44);
      bVar3 = *(byte *)(local_50 + 0xe);
      local_58 = param_4;
      (**(code **)(*(longlong *)local_50[0xf] + 0x178))();
      unaff_BPL = 1;
      if ((-1 < (int)uVar5) &&
         (puVar9 = (ulonglong *)(param_1 + iVar1), (int)uVar5 < (int)puVar9[1])) {
        iVar1 = *(int *)(local_50[0xf] + 0x34);
        cVar4 = FUN_1476fb4fc();
        if ((cVar4 != '\0') &&
           ((cVar4 = FUN_1476fb9e5(local_50[0xf]), pvVar7 = local_58, cVar4 != '\0' &&
            ((int)puVar9[1] != 0)))) {
          if ((bVar3 & 1) == 0) {
            uVar10 = *puVar9;
          }
          else {
            uVar10 = *puVar9;
            if ((uVar10 & 1) != 0) {
              uVar10 = (longlong)puVar9 + ((longlong)uVar10 >> 0x18);
            }
          }
          pvVar11 = (void *)((longlong)iVar1 * (ulonglong)uVar5 + uVar10);
          if (pvVar11 != (void *)0x0) {
            FUN_147029e70(param_2,pvVar11);
            if (pvVar11 != pvVar7) {
              plVar2 = (longlong *)local_50[0xf];
              if ((*(byte *)((longlong)plVar2 + 0x3b) & 0x40) == 0) {
                (**(code **)(*plVar2 + 0x100))(plVar2,pvVar7,pvVar11,1);
              }
              else {
                memcpy(pvVar7,pvVar11,(longlong)*(int *)((longlong)plVar2 + 0x34));
              }
            }
            pvVar7 = (void *)local_50[0xf];
            *param_3 = (longlong)pvVar7;
            goto LAB_1476fc0b6;
          }
        }
      }
      bVar3 = 0;
      uVar8 = 0;
      goto LAB_1476fbf06;
    }
    cVar4 = FUN_1476fb4fc(local_50);
    if ((cVar4 != '\0') && (cVar4 = FUN_1476fb9e5(local_50), cVar4 != '\0')) {
      pvVar11 = (void *)(param_1 + *(int *)((longlong)local_50 + 0x44));
      if (pvVar11 == (void *)0x0) {
        bVar3 = 0;
        uVar8 = 0;
      }
      else {
        pvVar7 = (void *)FUN_147029e70(param_2,pvVar11);
        if (pvVar11 != param_4) {
          if ((*(byte *)((longlong)local_50 + 0x3b) & 0x40) == 0) {
            pvVar7 = (void *)(**(code **)(*local_50 + 0x100))(local_50,param_4,pvVar11,1);
          }
          else {
            pvVar7 = memcpy(param_4,pvVar11,(longlong)*(int *)((longlong)local_50 + 0x34));
          }
        }
        *param_3 = (longlong)local_50;
LAB_1476fc0b6:
        uVar8 = (undefined7)((ulonglong)pvVar7 >> 8);
        bVar3 = 1;
      }
      unaff_BPL = 1;
      goto LAB_1476fbf06;
    }
  }
  else {
    uVar6 = FUN_140010bca();
    bVar3 = FUN_144affa3a(&local_50,uVar6);
    if ((((ulonglong)local_50 & 0xfffffffffffffffe) != 0 & bVar3) == 1) {
      uVar6 = FUN_147029e76(param_2);
      uVar8 = (undefined7)((ulonglong)uVar6 >> 8);
      bVar3 = 1;
      unaff_BPL = 0;
      goto LAB_1476fbf06;
    }
    uVar6 = FUN_1446ddbd2();
    cVar4 = FUN_1400164de(&local_50,uVar6);
    bVar3 = 0;
    uVar8 = 0;
    if (cVar4 != '\0') {
      if (local_50 != (longlong *)0x0) {
        uVar6 = FUN_1476fc0f6(param_1,param_2,param_4,param_3);
        unaff_BPL = (byte)uVar6;
        uVar8 = (undefined7)((ulonglong)uVar6 >> 8);
        bVar3 = 1;
      }
      goto LAB_1476fbf06;
    }
  }
  bVar3 = 0;
  uVar8 = 0;
LAB_1476fbf06:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar8,bVar3 & unaff_BPL);
}



// FUNCTION 1476fc0f6 FUN_1476fc0f6 body=267 status=ok
// SIG undefined FUN_1476fc0f6(void)

ulonglong FUN_1476fc0f6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = FUN_147029e60(param_2);
  iVar2 = FUN_147029a3c(uVar3);
  FUN_147029a40(uVar3,&local_48);
  plVar4 = (longlong *)0x0;
  plVar5 = local_48;
  if (((ulonglong)local_48 & 1) != 0) {
    plVar5 = plVar4;
  }
  cVar1 = FUN_1476fb4fc(plVar5);
  if (cVar1 != '\0') {
    if (iVar2 == -1) {
      iVar2 = 0;
    }
    cVar1 = FUN_1476fb9e5(plVar5);
    if (cVar1 != '\0') {
      if (iVar2 < (int)plVar5[6]) {
        cVar1 = (**(code **)(*plVar5 + 0x88))(plVar5);
        if (cVar1 == '\0') {
          plVar4 = (longlong *)
                   ((longlong)iVar2 * (longlong)*(int *)((longlong)plVar5 + 0x34) +
                   param_1 + *(int *)((longlong)plVar5 + 0x44));
          if (plVar4 != (longlong *)0x0) {
            FUN_147029e70(param_2,plVar4);
            FUN_147029a73(param_3,param_2,plVar4);
          }
        }
        else {
          (**(code **)(*plVar5 + 0xa0))(plVar5,param_1,param_3);
        }
        *param_4 = plVar5;
        plVar4 = (longlong *)CONCAT71((int7)((ulonglong)plVar4 >> 8),1);
      }
      else {
        plVar4 = (longlong *)0x0;
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return (ulonglong)plVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476fc202 FUN_1476fc202 body=127 status=ok
// SIG undefined FUN_1476fc202(void)

void FUN_1476fc202(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 auStack_68 [40];
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_147029ea6(param_2);
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  local_40 = &PTR_FUN_14a508e90;
  local_38 = param_3;
  local_30 = param_4;
  FUN_147029a0b(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476fc30e FUN_1476fc30e body=290 status=ok
// SIG undefined FUN_1476fc30e(void)

undefined8 FUN_1476fc30e(longlong *param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_2 + 0xb4) == '\x01') {
    if (param_2 == 0) {
      local_40 = 0;
    }
    else {
      local_40 = *(longlong *)(param_2 + 0x50);
    }
    local_38 = 0xffffffff;
    local_34 = 0x101;
    local_32 = 0;
    local_48 = param_2;
    FUN_144a2daf0(&local_48);
    if (local_40 != 0) {
      do {
        if ((char)*(ulonglong *)(local_40 + 0x38) < '\0') {
          if ((((*(ulonglong *)(local_40 + 0x38) & 0x500) != 0) &&
              (cVar2 = FUN_1476fb566(local_40), cVar2 != '\0')) &&
             (cVar2 = FUN_1476fc5c3(), cVar2 != '\0')) {
            uVar1 = *(uint *)((longlong)param_1 + 0xc);
            if ((int)uVar1 < DAT_14c9647dc) {
              lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            }
            else {
              lVar4 = 0;
            }
            if ((*(uint *)(lVar4 + 8) >> 0x1c & 1) == 0) {
              (**(code **)(*param_1 + 0x248))(param_1,param_2,param_3);
              uVar3 = 1;
              goto LAB_1476fc3ad;
            }
          }
          break;
        }
        local_40 = *(longlong *)(local_40 + 0x18);
        FUN_144a2daf0(&local_48);
      } while (local_40 != 0);
    }
  }
  uVar3 = 0;
LAB_1476fc3ad:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1476fc432 FUN_1476fc432 body=400 status=ok
// SIG undefined FUN_1476fc432(void)

ulonglong FUN_1476fc432(undefined8 param_1,void *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  void *_Src;
  undefined7 uVar7;
  ulonglong uVar6;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = FUN_147029e60();
  FUN_147029a40(uVar4,&local_40);
  uVar6 = 0;
  if ((local_40 & 1) == 0) {
    uVar6 = local_40;
  }
  *param_3 = uVar6;
  uVar7 = (undefined7)((ulonglong)param_1 >> 8);
  if (uVar6 == 0) {
LAB_1476fc483:
    cVar2 = FUN_1476fb566(*param_3);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*(longlong *)*param_3 + 0x88))();
      if (cVar2 == '\0') {
        uVar4 = FUN_147029ecc(param_1);
        FUN_147029a73(param_2,param_1,uVar4);
      }
      else {
        plVar1 = (longlong *)*param_3;
        uVar4 = FUN_147029a36(param_1);
        (**(code **)(*plVar1 + 0xa0))(plVar1,uVar4,param_2);
      }
      uVar6 = CONCAT71(uVar7,1);
      goto LAB_1476fc570;
    }
  }
  else {
    lVar8 = *(longlong *)(uVar6 + 8);
    lVar5 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar5 + 8) != 0) {
      if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) goto LAB_1476fc51b;
      goto LAB_1476fc483;
    }
    bVar9 = lVar8 != 0;
    if (lVar8 != lVar5 && bVar9) {
      do {
        lVar8 = *(longlong *)(lVar8 + 0x30);
        bVar9 = lVar8 != 0;
        if (lVar8 == lVar5) break;
      } while (lVar8 != 0);
    }
    if (!bVar9) goto LAB_1476fc483;
LAB_1476fc51b:
    iVar3 = FUN_147029a3c(uVar4);
    if (iVar3 == -1) goto LAB_1476fc483;
    cVar2 = FUN_1476fb566(*(undefined8 *)(uVar6 + 0x78));
    if (cVar2 != '\0') {
      plVar1 = *(longlong **)(uVar6 + 0x78);
      _Src = (void *)FUN_147029ecc(param_1);
      uVar6 = CONCAT71(uVar7,1);
      if (_Src != param_2) {
        if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
          (**(code **)(*plVar1 + 0x100))(plVar1,param_2,_Src,1);
        }
        else {
          memcpy(param_2,_Src,(longlong)*(int *)((longlong)plVar1 + 0x34));
        }
      }
      goto LAB_1476fc570;
    }
  }
  uVar6 = 0;
LAB_1476fc570:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1476fc5c3 FUN_1476fc5c3 body=113 status=ok
// SIG undefined FUN_1476fc5c3(void)

bool FUN_1476fc5c3(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if (param_1 != 0) {
    lVar3 = *(longlong *)(param_1 + 8);
    lVar2 = FUN_14475a8dc();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
      iVar1 = 1;
      if (bVar4) goto LAB_1476fc5f3;
    }
    else {
      iVar1 = 1;
      if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) goto LAB_1476fc5f3;
    }
  }
  iVar1 = 0x10;
LAB_1476fc5f3:
  return *(int *)(param_1 + 0x34) == iVar1;
}



// FUNCTION 1476fc634 FUN_1476fc634 body=29 status=ok
// SIG undefined FUN_1476fc634(void)

undefined8 FUN_1476fc634(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476fc67e FUN_1476fc67e body=680 status=ok
// SIG undefined FUN_1476fc67e(void)

undefined8 FUN_1476fc67e(longlong param_1,undefined8 param_2,longlong *param_3,void *param_4)

{
  int iVar1;
  longlong *plVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined7 uVar8;
  void *pvVar7;
  ulonglong *puVar9;
  ulonglong uVar10;
  byte unaff_BPL;
  void *pvVar11;
  undefined1 auStack_78 [32];
  void *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar6 = FUN_147029e60(param_2);
  uVar5 = FUN_147029a3c(uVar6);
  FUN_147029a40(uVar6,&local_50);
  uVar6 = FUN_1446e6bbc();
  bVar3 = FUN_1400164de(&local_50,uVar6);
  if ((local_50 != (longlong *)0x0 & bVar3) == 1) {
    if (uVar5 != 0xffffffff) {
      iVar1 = *(int *)((longlong)local_50 + 0x44);
      bVar3 = *(byte *)(local_50 + 0xe);
      local_58 = param_4;
      (**(code **)(*(longlong *)local_50[0xf] + 0x178))();
      unaff_BPL = 1;
      if ((-1 < (int)uVar5) &&
         (puVar9 = (ulonglong *)(param_1 + iVar1), (int)uVar5 < (int)puVar9[1])) {
        iVar1 = *(int *)(local_50[0xf] + 0x34);
        cVar4 = FUN_1476fb566();
        if ((cVar4 != '\0') &&
           ((cVar4 = FUN_1476fc5c3(local_50[0xf]), pvVar7 = local_58, cVar4 != '\0' &&
            ((int)puVar9[1] != 0)))) {
          if ((bVar3 & 1) == 0) {
            uVar10 = *puVar9;
          }
          else {
            uVar10 = *puVar9;
            if ((uVar10 & 1) != 0) {
              uVar10 = (longlong)puVar9 + ((longlong)uVar10 >> 0x18);
            }
          }
          pvVar11 = (void *)((longlong)iVar1 * (ulonglong)uVar5 + uVar10);
          if (pvVar11 != (void *)0x0) {
            FUN_147029e70(param_2,pvVar11);
            if (pvVar11 != pvVar7) {
              plVar2 = (longlong *)local_50[0xf];
              if ((*(byte *)((longlong)plVar2 + 0x3b) & 0x40) == 0) {
                (**(code **)(*plVar2 + 0x100))(plVar2,pvVar7,pvVar11,1);
              }
              else {
                memcpy(pvVar7,pvVar11,(longlong)*(int *)((longlong)plVar2 + 0x34));
              }
            }
            pvVar7 = (void *)local_50[0xf];
            *param_3 = (longlong)pvVar7;
            goto LAB_1476fc8e7;
          }
        }
      }
      bVar3 = 0;
      uVar8 = 0;
      goto LAB_1476fc72e;
    }
    cVar4 = FUN_1476fb566(local_50);
    if ((cVar4 != '\0') && (cVar4 = FUN_1476fc5c3(local_50), cVar4 != '\0')) {
      pvVar11 = (void *)(param_1 + *(int *)((longlong)local_50 + 0x44));
      if (pvVar11 == (void *)0x0) {
        bVar3 = 0;
        uVar8 = 0;
      }
      else {
        pvVar7 = (void *)FUN_147029e70(param_2,pvVar11);
        if (pvVar11 != param_4) {
          if ((*(byte *)((longlong)local_50 + 0x3b) & 0x40) == 0) {
            pvVar7 = (void *)(**(code **)(*local_50 + 0x100))(local_50,param_4,pvVar11,1);
          }
          else {
            pvVar7 = memcpy(param_4,pvVar11,(longlong)*(int *)((longlong)local_50 + 0x34));
          }
        }
        *param_3 = (longlong)local_50;
LAB_1476fc8e7:
        uVar8 = (undefined7)((ulonglong)pvVar7 >> 8);
        bVar3 = 1;
      }
      unaff_BPL = 1;
      goto LAB_1476fc72e;
    }
LAB_1476fc7c6:
    bVar3 = 0;
    uVar8 = 0;
  }
  else {
    uVar6 = FUN_140010bca();
    bVar3 = FUN_144affa3a(&local_50,uVar6);
    uVar10 = (ulonglong)local_50 & 0xfffffffffffffffe;
    if ((uVar10 != 0 & bVar3) == 1) {
      FUN_147029e76(param_2,uVar10);
      uVar6 = FUN_1476fc30e(param_1,uVar10,param_4);
    }
    else {
      uVar6 = FUN_1446ddbd2();
      cVar4 = FUN_1400164de(&local_50,uVar6);
      bVar3 = 0;
      uVar8 = 0;
      if (cVar4 == '\0') goto LAB_1476fc7c6;
      if (local_50 == (longlong *)0x0) goto LAB_1476fc72e;
      uVar6 = FUN_1476fc928(param_1,param_2,param_4,param_3);
    }
    unaff_BPL = (byte)uVar6;
    uVar8 = (undefined7)((ulonglong)uVar6 >> 8);
    bVar3 = 1;
  }
LAB_1476fc72e:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar8,bVar3 & unaff_BPL);
}



// FUNCTION 1476fc928 FUN_1476fc928 body=267 status=ok
// SIG undefined FUN_1476fc928(void)

ulonglong FUN_1476fc928(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = FUN_147029e60(param_2);
  iVar2 = FUN_147029a3c(uVar3);
  FUN_147029a40(uVar3,&local_48);
  plVar4 = (longlong *)0x0;
  plVar5 = local_48;
  if (((ulonglong)local_48 & 1) != 0) {
    plVar5 = plVar4;
  }
  cVar1 = FUN_1476fb566(plVar5);
  if (cVar1 != '\0') {
    if (iVar2 == -1) {
      iVar2 = 0;
    }
    cVar1 = FUN_1476fc5c3(plVar5);
    if (cVar1 != '\0') {
      if (iVar2 < (int)plVar5[6]) {
        cVar1 = (**(code **)(*plVar5 + 0x88))(plVar5);
        if (cVar1 == '\0') {
          plVar4 = (longlong *)
                   ((longlong)iVar2 * (longlong)*(int *)((longlong)plVar5 + 0x34) +
                   param_1 + *(int *)((longlong)plVar5 + 0x44));
          if (plVar4 != (longlong *)0x0) {
            FUN_147029e70(param_2,plVar4);
            FUN_147029a73(param_3,param_2,plVar4);
          }
        }
        else {
          (**(code **)(*plVar5 + 0xa0))(plVar5,param_1,param_3);
        }
        *param_4 = plVar5;
        plVar4 = (longlong *)CONCAT71((int7)((ulonglong)plVar4 >> 8),1);
      }
      else {
        plVar4 = (longlong *)0x0;
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return (ulonglong)plVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476fca34 FUN_1476fca34 body=671 status=ok
// SIG undefined FUN_1476fca34(void)

undefined8 FUN_1476fca34(longlong param_1,undefined8 param_2,longlong *param_3,void *param_4)

{
  int iVar1;
  longlong *plVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined7 uVar8;
  void *pvVar7;
  ulonglong *puVar9;
  ulonglong uVar10;
  byte unaff_BPL;
  void *pvVar11;
  undefined1 auStack_78 [32];
  void *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar6 = FUN_147029e60(param_2);
  uVar5 = FUN_147029a3c(uVar6);
  FUN_147029a40(uVar6,&local_50);
  uVar6 = FUN_1446e6bbc();
  bVar3 = FUN_1400164de(&local_50,uVar6);
  if ((local_50 != (longlong *)0x0 & bVar3) == 1) {
    if (uVar5 != 0xffffffff) {
      iVar1 = *(int *)((longlong)local_50 + 0x44);
      bVar3 = *(byte *)(local_50 + 0xe);
      local_58 = param_4;
      (**(code **)(*(longlong *)local_50[0xf] + 0x178))();
      unaff_BPL = 1;
      if ((-1 < (int)uVar5) &&
         (puVar9 = (ulonglong *)(param_1 + iVar1), (int)uVar5 < (int)puVar9[1])) {
        iVar1 = *(int *)(local_50[0xf] + 0x34);
        cVar4 = FUN_1476fb566();
        if ((cVar4 != '\0') &&
           ((cVar4 = FUN_1476fc5c3(local_50[0xf]), pvVar7 = local_58, cVar4 != '\0' &&
            ((int)puVar9[1] != 0)))) {
          if ((bVar3 & 1) == 0) {
            uVar10 = *puVar9;
          }
          else {
            uVar10 = *puVar9;
            if ((uVar10 & 1) != 0) {
              uVar10 = (longlong)puVar9 + ((longlong)uVar10 >> 0x18);
            }
          }
          pvVar11 = (void *)((longlong)iVar1 * (ulonglong)uVar5 + uVar10);
          if (pvVar11 != (void *)0x0) {
            FUN_147029e70(param_2,pvVar11);
            if (pvVar11 != pvVar7) {
              plVar2 = (longlong *)local_50[0xf];
              if ((*(byte *)((longlong)plVar2 + 0x3b) & 0x40) == 0) {
                (**(code **)(*plVar2 + 0x100))(plVar2,pvVar7,pvVar11,1);
              }
              else {
                memcpy(pvVar7,pvVar11,(longlong)*(int *)((longlong)plVar2 + 0x34));
              }
            }
            pvVar7 = (void *)local_50[0xf];
            *param_3 = (longlong)pvVar7;
            goto LAB_1476fcc94;
          }
        }
      }
      bVar3 = 0;
      uVar8 = 0;
      goto LAB_1476fcae4;
    }
    cVar4 = FUN_1476fb566(local_50);
    if ((cVar4 != '\0') && (cVar4 = FUN_1476fc5c3(local_50), cVar4 != '\0')) {
      pvVar11 = (void *)(param_1 + *(int *)((longlong)local_50 + 0x44));
      if (pvVar11 == (void *)0x0) {
        bVar3 = 0;
        uVar8 = 0;
      }
      else {
        pvVar7 = (void *)FUN_147029e70(param_2,pvVar11);
        if (pvVar11 != param_4) {
          if ((*(byte *)((longlong)local_50 + 0x3b) & 0x40) == 0) {
            pvVar7 = (void *)(**(code **)(*local_50 + 0x100))(local_50,param_4,pvVar11,1);
          }
          else {
            pvVar7 = memcpy(param_4,pvVar11,(longlong)*(int *)((longlong)local_50 + 0x34));
          }
        }
        *param_3 = (longlong)local_50;
LAB_1476fcc94:
        uVar8 = (undefined7)((ulonglong)pvVar7 >> 8);
        bVar3 = 1;
      }
      unaff_BPL = 1;
      goto LAB_1476fcae4;
    }
  }
  else {
    uVar6 = FUN_140010bca();
    bVar3 = FUN_144affa3a(&local_50,uVar6);
    if ((((ulonglong)local_50 & 0xfffffffffffffffe) != 0 & bVar3) == 1) {
      uVar6 = FUN_147029e76(param_2);
      uVar8 = (undefined7)((ulonglong)uVar6 >> 8);
      bVar3 = 1;
      unaff_BPL = 0;
      goto LAB_1476fcae4;
    }
    uVar6 = FUN_1446ddbd2();
    cVar4 = FUN_1400164de(&local_50,uVar6);
    bVar3 = 0;
    uVar8 = 0;
    if (cVar4 != '\0') {
      if (local_50 != (longlong *)0x0) {
        uVar6 = FUN_1476fccd4(param_1,param_2,param_4,param_3);
        unaff_BPL = (byte)uVar6;
        uVar8 = (undefined7)((ulonglong)uVar6 >> 8);
        bVar3 = 1;
      }
      goto LAB_1476fcae4;
    }
  }
  bVar3 = 0;
  uVar8 = 0;
LAB_1476fcae4:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar8,bVar3 & unaff_BPL);
}



// FUNCTION 1476fccd4 FUN_1476fccd4 body=267 status=ok
// SIG undefined FUN_1476fccd4(void)

ulonglong FUN_1476fccd4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = FUN_147029e60(param_2);
  iVar2 = FUN_147029a3c(uVar3);
  FUN_147029a40(uVar3,&local_48);
  plVar4 = (longlong *)0x0;
  plVar5 = local_48;
  if (((ulonglong)local_48 & 1) != 0) {
    plVar5 = plVar4;
  }
  cVar1 = FUN_1476fb566(plVar5);
  if (cVar1 != '\0') {
    if (iVar2 == -1) {
      iVar2 = 0;
    }
    cVar1 = FUN_1476fc5c3(plVar5);
    if (cVar1 != '\0') {
      if (iVar2 < (int)plVar5[6]) {
        cVar1 = (**(code **)(*plVar5 + 0x88))(plVar5);
        if (cVar1 == '\0') {
          plVar4 = (longlong *)
                   ((longlong)iVar2 * (longlong)*(int *)((longlong)plVar5 + 0x34) +
                   param_1 + *(int *)((longlong)plVar5 + 0x44));
          if (plVar4 != (longlong *)0x0) {
            FUN_147029e70(param_2,plVar4);
            FUN_147029a73(param_3,param_2,plVar4);
          }
        }
        else {
          (**(code **)(*plVar5 + 0xa0))(plVar5,param_1,param_3);
        }
        *param_4 = plVar5;
        plVar4 = (longlong *)CONCAT71((int7)((ulonglong)plVar4 >> 8),1);
      }
      else {
        plVar4 = (longlong *)0x0;
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return (ulonglong)plVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476fcde0 FUN_1476fcde0 body=127 status=ok
// SIG undefined FUN_1476fcde0(void)

void FUN_1476fcde0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 auStack_68 [40];
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_147029ea6(param_2);
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  local_40 = &PTR_FUN_14a508eb0;
  local_38 = param_3;
  local_30 = param_4;
  FUN_147029a0b(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476fceec FUN_1476fceec body=290 status=ok
// SIG undefined FUN_1476fceec(void)

undefined8 FUN_1476fceec(longlong *param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_2 + 0xb4) == '\x01') {
    if (param_2 == 0) {
      local_40 = 0;
    }
    else {
      local_40 = *(longlong *)(param_2 + 0x50);
    }
    local_38 = 0xffffffff;
    local_34 = 0x101;
    local_32 = 0;
    local_48 = param_2;
    FUN_144a2daf0(&local_48);
    if (local_40 != 0) {
      do {
        if ((char)*(ulonglong *)(local_40 + 0x38) < '\0') {
          if ((*(ulonglong *)(local_40 + 0x38) & 0x500) != 0) {
            lVar5 = *(longlong *)(local_40 + 8);
            lVar3 = FUN_144a64e42();
            if (lVar5 == lVar3) {
              cVar2 = FUN_1476fd1a2();
              if (cVar2 != '\0') {
                uVar1 = *(uint *)((longlong)param_1 + 0xc);
                if ((int)uVar1 < DAT_14c9647dc) {
                  lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
                }
                else {
                  lVar5 = 0;
                }
                if ((*(uint *)(lVar5 + 8) >> 0x1c & 1) == 0) {
                  (**(code **)(*param_1 + 0x248))(param_1,param_2,param_3);
                  uVar4 = 1;
                  goto LAB_1476fcf7e;
                }
              }
            }
          }
          break;
        }
        local_40 = *(longlong *)(local_40 + 0x18);
        FUN_144a2daf0(&local_48);
      } while (local_40 != 0);
    }
  }
  uVar4 = 0;
LAB_1476fcf7e:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476fd010 FUN_1476fd010 body=401 status=ok
// SIG undefined FUN_1476fd010(void)

ulonglong FUN_1476fd010(undefined8 param_1,void *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  void *_Src;
  undefined7 uVar7;
  ulonglong uVar6;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = FUN_147029e60();
  FUN_147029a40(uVar4,&local_40);
  uVar6 = 0;
  if ((local_40 & 1) == 0) {
    uVar6 = local_40;
  }
  *param_3 = uVar6;
  uVar7 = (undefined7)((ulonglong)param_1 >> 8);
  if (uVar6 == 0) {
LAB_1476fd109:
    lVar8 = *(longlong *)(*param_3 + 8);
    lVar5 = FUN_144a64e42();
    if (lVar8 == lVar5) {
      cVar2 = (**(code **)(*(longlong *)*param_3 + 0x88))();
      if (cVar2 == '\0') {
        uVar4 = FUN_147029ecc(param_1);
        FUN_147029a73(param_2,param_1,uVar4);
      }
      else {
        plVar1 = (longlong *)*param_3;
        uVar4 = FUN_147029a36(param_1);
        (**(code **)(*plVar1 + 0xa0))(plVar1,uVar4,param_2);
      }
      uVar6 = CONCAT71(uVar7,1);
      goto LAB_1476fd11c;
    }
  }
  else {
    lVar8 = *(longlong *)(uVar6 + 8);
    lVar5 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar5 + 8) == 0) {
      bVar9 = lVar8 != 0;
      if (lVar8 != lVar5 && bVar9) {
        do {
          lVar8 = *(longlong *)(lVar8 + 0x30);
          bVar9 = lVar8 != 0;
          if (lVar8 == lVar5) break;
        } while (lVar8 != 0);
      }
      if (bVar9) goto LAB_1476fd0b1;
      goto LAB_1476fd109;
    }
    if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar5 + 8)) == 0) goto LAB_1476fd109;
LAB_1476fd0b1:
    iVar3 = FUN_147029a3c(uVar4);
    if (iVar3 == -1) goto LAB_1476fd109;
    lVar8 = *(longlong *)(*(longlong *)(uVar6 + 0x78) + 8);
    lVar5 = FUN_144a64e42();
    if (lVar8 == lVar5) {
      plVar1 = *(longlong **)(uVar6 + 0x78);
      _Src = (void *)FUN_147029ecc(param_1);
      uVar6 = CONCAT71(uVar7,1);
      if (_Src != param_2) {
        if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
          (**(code **)(*plVar1 + 0x100))(plVar1,param_2,_Src,1);
        }
        else {
          memcpy(param_2,_Src,(longlong)*(int *)((longlong)plVar1 + 0x34));
        }
      }
      goto LAB_1476fd11c;
    }
  }
  uVar6 = 0;
LAB_1476fd11c:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1476fd1a2 FUN_1476fd1a2 body=113 status=ok
// SIG undefined FUN_1476fd1a2(void)

bool FUN_1476fd1a2(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if (param_1 != 0) {
    lVar3 = *(longlong *)(param_1 + 8);
    lVar2 = FUN_14475a8dc();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
      iVar1 = 1;
      if (bVar4) goto LAB_1476fd1d2;
    }
    else {
      iVar1 = 1;
      if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) goto LAB_1476fd1d2;
    }
  }
  iVar1 = 4;
LAB_1476fd1d2:
  return *(int *)(param_1 + 0x34) == iVar1;
}



// FUNCTION 1476fd214 FUN_1476fd214 body=29 status=ok
// SIG undefined FUN_1476fd214(void)

undefined8 FUN_1476fd214(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476fd25e FUN_1476fd25e body=665 status=ok
// SIG undefined FUN_1476fd25e(void)

undefined8 FUN_1476fd25e(longlong param_1,undefined8 param_2,longlong *param_3,void *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined7 uVar11;
  void *pvVar10;
  ulonglong *puVar12;
  ulonglong uVar13;
  byte unaff_BPL;
  void *pvVar14;
  undefined1 auStack_88 [40];
  void *local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar7 = FUN_147029e60(param_2);
  uVar6 = FUN_147029a3c(uVar7);
  FUN_147029a40(uVar7,&local_50);
  uVar7 = FUN_1446e6bbc();
  bVar4 = FUN_1400164de(&local_50,uVar7);
  if ((local_50 != (longlong *)0x0 & bVar4) != 1) {
    uVar7 = FUN_140010bca();
    bVar4 = FUN_144affa3a(&local_50,uVar7);
    uVar13 = (ulonglong)local_50 & 0xfffffffffffffffe;
    if ((uVar13 != 0 & bVar4) == 1) {
      FUN_147029e76(param_2,uVar13);
      uVar7 = FUN_1476fceec(param_1,uVar13,param_4);
    }
    else {
      uVar7 = FUN_1446ddbd2();
      cVar5 = FUN_1400164de(&local_50,uVar7);
      bVar4 = 0;
      uVar11 = 0;
      if ((cVar5 == '\0') || (local_50 == (longlong *)0x0)) goto LAB_1476fd396;
      uVar7 = FUN_1476fd4f8(param_1,param_2,param_4,param_3);
    }
    unaff_BPL = (byte)uVar7;
    uVar11 = (undefined7)((ulonglong)uVar7 >> 8);
    bVar4 = 1;
    goto LAB_1476fd396;
  }
  local_60 = param_4;
  if (uVar6 == 0xffffffff) {
    lVar2 = local_50[1];
    lVar9 = FUN_144a64e42();
    if ((lVar2 != lVar9) || (cVar5 = FUN_1476fd1a2(local_50), cVar5 == '\0')) {
      bVar4 = 0;
      uVar11 = 0;
      goto LAB_1476fd396;
    }
    pvVar14 = (void *)(param_1 + *(int *)((longlong)local_50 + 0x44));
    if (pvVar14 == (void *)0x0) {
      bVar4 = 0;
      uVar11 = 0;
    }
    else {
      pvVar10 = (void *)FUN_147029e70(param_2,pvVar14);
      if (pvVar14 != local_60) {
        if ((*(byte *)((longlong)local_50 + 0x3b) & 0x40) == 0) {
          pvVar10 = (void *)(**(code **)(*local_50 + 0x100))(local_50,local_60,pvVar14,1);
        }
        else {
          pvVar10 = memcpy(local_60,pvVar14,(longlong)*(int *)((longlong)local_50 + 0x34));
        }
      }
      *param_3 = (longlong)local_50;
LAB_1476fd4bf:
      uVar11 = (undefined7)((ulonglong)pvVar10 >> 8);
      bVar4 = 1;
    }
    unaff_BPL = 1;
  }
  else {
    iVar1 = *(int *)((longlong)local_50 + 0x44);
    bVar4 = *(byte *)(local_50 + 0xe);
    (**(code **)(*(longlong *)local_50[0xf] + 0x178))();
    unaff_BPL = 1;
    if ((-1 < (int)uVar6) &&
       (puVar12 = (ulonglong *)(param_1 + iVar1), (int)uVar6 < (int)puVar12[1])) {
      local_58 = (longlong)*(int *)(local_50[0xf] + 0x34);
      lVar2 = *(longlong *)(local_50[0xf] + 8);
      lVar8 = FUN_144a64e42();
      lVar9 = local_58;
      if ((lVar2 == lVar8) &&
         ((cVar5 = FUN_1476fd1a2(local_50[0xf]), cVar5 != '\0' && ((int)puVar12[1] != 0)))) {
        if ((bVar4 & 1) == 0) {
          uVar13 = *puVar12;
        }
        else {
          uVar13 = *puVar12;
          if ((uVar13 & 1) != 0) {
            uVar13 = (longlong)puVar12 + ((longlong)uVar13 >> 0x18);
          }
        }
        pvVar14 = (void *)(lVar9 * (ulonglong)uVar6 + uVar13);
        if (pvVar14 != (void *)0x0) {
          FUN_147029e70(param_2,pvVar14);
          if (pvVar14 != local_60) {
            plVar3 = (longlong *)local_50[0xf];
            if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar3 + 0x100))(plVar3,local_60,pvVar14,1);
            }
            else {
              memcpy(local_60,pvVar14,(longlong)*(int *)((longlong)plVar3 + 0x34));
            }
          }
          pvVar10 = (void *)local_50[0xf];
          *param_3 = (longlong)pvVar10;
          goto LAB_1476fd4bf;
        }
      }
    }
    bVar4 = 0;
    uVar11 = 0;
  }
LAB_1476fd396:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar11,bVar4 & unaff_BPL);
}



// FUNCTION 1476fd4f8 FUN_1476fd4f8 body=273 status=ok
// SIG undefined FUN_1476fd4f8(void)

ulonglong FUN_1476fd4f8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_78 [40];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = FUN_147029e60(param_2);
  iVar3 = FUN_147029a3c(uVar4);
  FUN_147029a40(uVar4,&local_50);
  plVar6 = (longlong *)0x0;
  plVar7 = local_50;
  if (((ulonglong)local_50 & 1) != 0) {
    plVar7 = plVar6;
  }
  lVar1 = plVar7[1];
  lVar5 = FUN_144a64e42();
  if (lVar1 == lVar5) {
    if (iVar3 == -1) {
      iVar3 = 0;
    }
    cVar2 = FUN_1476fd1a2(plVar7);
    if (cVar2 != '\0') {
      if (iVar3 < (int)plVar7[6]) {
        cVar2 = (**(code **)(*plVar7 + 0x88))(plVar7);
        if (cVar2 == '\0') {
          plVar6 = (longlong *)
                   ((longlong)iVar3 * (longlong)*(int *)((longlong)plVar7 + 0x34) +
                   param_1 + *(int *)((longlong)plVar7 + 0x44));
          if (plVar6 != (longlong *)0x0) {
            FUN_147029e70(param_2,plVar6);
            FUN_147029a73(param_3,param_2,plVar6);
          }
        }
        else {
          (**(code **)(*plVar7 + 0xa0))(plVar7,param_1,param_3);
        }
        *param_4 = plVar7;
        plVar6 = (longlong *)CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
      }
      else {
        plVar6 = (longlong *)0x0;
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return (ulonglong)plVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476fd60a FUN_1476fd60a body=646 status=ok
// SIG undefined FUN_1476fd60a(void)

undefined8 FUN_1476fd60a(longlong param_1,undefined8 param_2,longlong *param_3,void *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined7 uVar12;
  longlong lVar10;
  void *pvVar11;
  ulonglong *puVar13;
  ulonglong uVar14;
  void *pvVar15;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar8 = FUN_147029e60(param_2);
  uVar7 = FUN_147029a3c(uVar8);
  FUN_147029a40(uVar8,&local_50);
  uVar8 = FUN_1446e6bbc();
  bVar5 = FUN_1400164de(&local_50,uVar8);
  if ((local_50 != (longlong *)0x0 & bVar5) != 1) {
    uVar8 = FUN_140010bca();
    bVar5 = FUN_144affa3a(&local_50,uVar8);
    if ((((ulonglong)local_50 & 0xfffffffffffffffe) != 0 & bVar5) == 1) {
      uVar8 = FUN_147029e76(param_2);
      bVar5 = 1;
      param_3 = (longlong *)0x0;
      uVar12 = (int7)((ulonglong)uVar8 >> 8);
    }
    else {
      uVar8 = FUN_1446ddbd2();
      cVar6 = FUN_1400164de(&local_50,uVar8);
      bVar5 = 0;
      uVar12 = 0;
      if ((cVar6 != '\0') && (uVar12 = 0, local_50 != (longlong *)0x0)) {
        uVar14 = FUN_1476fd892(param_1,param_2,param_4,param_3);
        param_3 = (longlong *)(uVar14 & 0xffffffff);
        uVar12 = (undefined7)(uVar14 >> 8);
        bVar5 = 1;
      }
    }
    goto LAB_1476fd751;
  }
  if (uVar7 == 0xffffffff) {
    lVar2 = local_50[1];
    lVar10 = FUN_144a64e42();
    if ((lVar2 != lVar10) || (cVar6 = FUN_1476fd1a2(local_50), cVar6 == '\0')) {
      bVar5 = 0;
      uVar12 = 0;
      goto LAB_1476fd751;
    }
    pvVar15 = (void *)(param_1 + *(int *)((longlong)local_50 + 0x44));
    if (pvVar15 == (void *)0x0) {
      bVar5 = 0;
      uVar12 = 0;
    }
    else {
      pvVar11 = (void *)FUN_147029e70(param_2,pvVar15);
      if (pvVar15 != param_4) {
        if ((*(byte *)((longlong)local_50 + 0x3b) & 0x40) == 0) {
          pvVar11 = (void *)(**(code **)(*local_50 + 0x100))(local_50,param_4,pvVar15,1);
        }
        else {
          pvVar11 = memcpy(param_4,pvVar15,(longlong)*(int *)((longlong)local_50 + 0x34));
        }
      }
      *param_3 = (longlong)local_50;
LAB_1476fd85a:
      uVar12 = (undefined7)((ulonglong)pvVar11 >> 8);
      bVar5 = 1;
    }
    param_3 = (longlong *)&DAT_00000001;
  }
  else {
    iVar1 = *(int *)((longlong)local_50 + 0x44);
    bVar5 = *(byte *)(local_50 + 0xe);
    local_58 = param_3;
    (**(code **)(*(longlong *)local_50[0xf] + 0x178))();
    param_3 = (longlong *)&DAT_00000001;
    if ((-1 < (int)uVar7) &&
       (puVar13 = (ulonglong *)(param_1 + iVar1), (int)uVar7 < (int)puVar13[1])) {
      local_60 = (longlong)*(int *)(local_50[0xf] + 0x34);
      lVar2 = *(longlong *)(local_50[0xf] + 8);
      lVar9 = FUN_144a64e42();
      lVar10 = local_60;
      if ((lVar2 == lVar9) &&
         ((cVar6 = FUN_1476fd1a2(local_50[0xf]), cVar6 != '\0' && ((int)puVar13[1] != 0)))) {
        if ((bVar5 & 1) == 0) {
          uVar14 = *puVar13;
        }
        else {
          uVar14 = *puVar13;
          if ((uVar14 & 1) != 0) {
            uVar14 = (longlong)puVar13 + ((longlong)uVar14 >> 0x18);
          }
        }
        pvVar15 = (void *)(lVar10 * (ulonglong)uVar7 + uVar14);
        if (pvVar15 != (void *)0x0) {
          FUN_147029e70(param_2,pvVar15);
          plVar4 = local_58;
          if (pvVar15 != param_4) {
            plVar3 = (longlong *)local_50[0xf];
            if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar3 + 0x100))(plVar3,param_4,pvVar15,1);
            }
            else {
              memcpy(param_4,pvVar15,(longlong)*(int *)((longlong)plVar3 + 0x34));
            }
          }
          pvVar11 = (void *)local_50[0xf];
          *plVar4 = (longlong)pvVar11;
          goto LAB_1476fd85a;
        }
      }
    }
    bVar5 = 0;
    uVar12 = 0;
  }
LAB_1476fd751:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar12,bVar5 & (byte)param_3);
}



// FUNCTION 1476fd892 FUN_1476fd892 body=273 status=ok
// SIG undefined FUN_1476fd892(void)

ulonglong FUN_1476fd892(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_78 [40];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = FUN_147029e60(param_2);
  iVar3 = FUN_147029a3c(uVar4);
  FUN_147029a40(uVar4,&local_50);
  plVar6 = (longlong *)0x0;
  plVar7 = local_50;
  if (((ulonglong)local_50 & 1) != 0) {
    plVar7 = plVar6;
  }
  lVar1 = plVar7[1];
  lVar5 = FUN_144a64e42();
  if (lVar1 == lVar5) {
    if (iVar3 == -1) {
      iVar3 = 0;
    }
    cVar2 = FUN_1476fd1a2(plVar7);
    if (cVar2 != '\0') {
      if (iVar3 < (int)plVar7[6]) {
        cVar2 = (**(code **)(*plVar7 + 0x88))(plVar7);
        if (cVar2 == '\0') {
          plVar6 = (longlong *)
                   ((longlong)iVar3 * (longlong)*(int *)((longlong)plVar7 + 0x34) +
                   param_1 + *(int *)((longlong)plVar7 + 0x44));
          if (plVar6 != (longlong *)0x0) {
            FUN_147029e70(param_2,plVar6);
            FUN_147029a73(param_3,param_2,plVar6);
          }
        }
        else {
          (**(code **)(*plVar7 + 0xa0))(plVar7,param_1,param_3);
        }
        *param_4 = plVar7;
        plVar6 = (longlong *)CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
      }
      else {
        plVar6 = (longlong *)0x0;
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return (ulonglong)plVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476fd9a4 FUN_1476fd9a4 body=127 status=ok
// SIG undefined FUN_1476fd9a4(void)

void FUN_1476fd9a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 auStack_68 [40];
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_147029ea6(param_2);
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  local_40 = &PTR_FUN_14a508ed0;
  local_38 = param_3;
  local_30 = param_4;
  FUN_147029a0b(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476fdab0 FUN_1476fdab0 body=290 status=ok
// SIG undefined FUN_1476fdab0(void)

undefined8 FUN_1476fdab0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_2 + 0xb4) == '\x01') {
    if (param_2 == 0) {
      local_40 = 0;
    }
    else {
      local_40 = *(longlong *)(param_2 + 0x50);
    }
    local_38 = 0xffffffff;
    local_34 = 0x101;
    local_32 = 0;
    local_48 = param_2;
    FUN_144a2daf0(&local_48);
    if (local_40 != 0) {
      do {
        if ((char)*(ulonglong *)(local_40 + 0x38) < '\0') {
          if ((*(ulonglong *)(local_40 + 0x38) & 0x500) != 0) {
            lVar5 = *(longlong *)(local_40 + 8);
            lVar3 = FUN_144a49fc8();
            if (lVar5 == lVar3) {
              cVar2 = FUN_1476fdd66();
              if (cVar2 != '\0') {
                uVar1 = *(uint *)((longlong)param_1 + 0xc);
                if ((int)uVar1 < DAT_14c9647dc) {
                  lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
                }
                else {
                  lVar5 = 0;
                }
                if ((*(uint *)(lVar5 + 8) >> 0x1c & 1) == 0) {
                  (**(code **)(*param_1 + 0x248))(param_1,param_2,param_3);
                  uVar4 = 1;
                  goto LAB_1476fdb42;
                }
              }
            }
          }
          break;
        }
        local_40 = *(longlong *)(local_40 + 0x18);
        FUN_144a2daf0(&local_48);
      } while (local_40 != 0);
    }
  }
  uVar4 = 0;
LAB_1476fdb42:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476fdbd4 FUN_1476fdbd4 body=401 status=ok
// SIG undefined FUN_1476fdbd4(void)

ulonglong FUN_1476fdbd4(undefined8 param_1,void *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  void *_Src;
  undefined7 uVar7;
  ulonglong uVar6;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = FUN_147029e60();
  FUN_147029a40(uVar4,&local_40);
  uVar6 = 0;
  if ((local_40 & 1) == 0) {
    uVar6 = local_40;
  }
  *param_3 = uVar6;
  uVar7 = (undefined7)((ulonglong)param_1 >> 8);
  if (uVar6 == 0) {
LAB_1476fdccd:
    lVar8 = *(longlong *)(*param_3 + 8);
    lVar5 = FUN_144a49fc8();
    if (lVar8 == lVar5) {
      cVar2 = (**(code **)(*(longlong *)*param_3 + 0x88))();
      if (cVar2 == '\0') {
        uVar4 = FUN_147029ecc(param_1);
        FUN_147029a73(param_2,param_1,uVar4);
      }
      else {
        plVar1 = (longlong *)*param_3;
        uVar4 = FUN_147029a36(param_1);
        (**(code **)(*plVar1 + 0xa0))(plVar1,uVar4,param_2);
      }
      uVar6 = CONCAT71(uVar7,1);
      goto LAB_1476fdce0;
    }
  }
  else {
    lVar8 = *(longlong *)(uVar6 + 8);
    lVar5 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar5 + 8) == 0) {
      bVar9 = lVar8 != 0;
      if (lVar8 != lVar5 && bVar9) {
        do {
          lVar8 = *(longlong *)(lVar8 + 0x30);
          bVar9 = lVar8 != 0;
          if (lVar8 == lVar5) break;
        } while (lVar8 != 0);
      }
      if (bVar9) goto LAB_1476fdc75;
      goto LAB_1476fdccd;
    }
    if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar5 + 8)) == 0) goto LAB_1476fdccd;
LAB_1476fdc75:
    iVar3 = FUN_147029a3c(uVar4);
    if (iVar3 == -1) goto LAB_1476fdccd;
    lVar8 = *(longlong *)(*(longlong *)(uVar6 + 0x78) + 8);
    lVar5 = FUN_144a49fc8();
    if (lVar8 == lVar5) {
      plVar1 = *(longlong **)(uVar6 + 0x78);
      _Src = (void *)FUN_147029ecc(param_1);
      uVar6 = CONCAT71(uVar7,1);
      if (_Src != param_2) {
        if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
          (**(code **)(*plVar1 + 0x100))(plVar1,param_2,_Src,1);
        }
        else {
          memcpy(param_2,_Src,(longlong)*(int *)((longlong)plVar1 + 0x34));
        }
      }
      goto LAB_1476fdce0;
    }
  }
  uVar6 = 0;
LAB_1476fdce0:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1476fdd66 FUN_1476fdd66 body=113 status=ok
// SIG undefined FUN_1476fdd66(void)

bool FUN_1476fdd66(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if (param_1 != 0) {
    lVar3 = *(longlong *)(param_1 + 8);
    lVar2 = FUN_14475a8dc();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
      iVar1 = 1;
      if (bVar4) goto LAB_1476fdd96;
    }
    else {
      iVar1 = 1;
      if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) goto LAB_1476fdd96;
    }
  }
  iVar1 = 8;
LAB_1476fdd96:
  return *(int *)(param_1 + 0x34) == iVar1;
}



// FUNCTION 1476fddd8 FUN_1476fddd8 body=29 status=ok
// SIG undefined FUN_1476fddd8(void)

undefined8 FUN_1476fddd8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476fde22 FUN_1476fde22 body=665 status=ok
// SIG undefined FUN_1476fde22(void)

undefined8 FUN_1476fde22(longlong param_1,undefined8 param_2,longlong *param_3,void *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined7 uVar11;
  void *pvVar10;
  ulonglong *puVar12;
  ulonglong uVar13;
  byte unaff_BPL;
  void *pvVar14;
  undefined1 auStack_88 [40];
  void *local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar7 = FUN_147029e60(param_2);
  uVar6 = FUN_147029a3c(uVar7);
  FUN_147029a40(uVar7,&local_50);
  uVar7 = FUN_1446e6bbc();
  bVar4 = FUN_1400164de(&local_50,uVar7);
  if ((local_50 != (longlong *)0x0 & bVar4) != 1) {
    uVar7 = FUN_140010bca();
    bVar4 = FUN_144affa3a(&local_50,uVar7);
    uVar13 = (ulonglong)local_50 & 0xfffffffffffffffe;
    if ((uVar13 != 0 & bVar4) == 1) {
      FUN_147029e76(param_2,uVar13);
      uVar7 = FUN_1476fdab0(param_1,uVar13,param_4);
    }
    else {
      uVar7 = FUN_1446ddbd2();
      cVar5 = FUN_1400164de(&local_50,uVar7);
      bVar4 = 0;
      uVar11 = 0;
      if ((cVar5 == '\0') || (local_50 == (longlong *)0x0)) goto LAB_1476fdf5a;
      uVar7 = FUN_1476fe0bc(param_1,param_2,param_4,param_3);
    }
    unaff_BPL = (byte)uVar7;
    uVar11 = (undefined7)((ulonglong)uVar7 >> 8);
    bVar4 = 1;
    goto LAB_1476fdf5a;
  }
  local_60 = param_4;
  if (uVar6 == 0xffffffff) {
    lVar2 = local_50[1];
    lVar9 = FUN_144a49fc8();
    if ((lVar2 != lVar9) || (cVar5 = FUN_1476fdd66(local_50), cVar5 == '\0')) {
      bVar4 = 0;
      uVar11 = 0;
      goto LAB_1476fdf5a;
    }
    pvVar14 = (void *)(param_1 + *(int *)((longlong)local_50 + 0x44));
    if (pvVar14 == (void *)0x0) {
      bVar4 = 0;
      uVar11 = 0;
    }
    else {
      pvVar10 = (void *)FUN_147029e70(param_2,pvVar14);
      if (pvVar14 != local_60) {
        if ((*(byte *)((longlong)local_50 + 0x3b) & 0x40) == 0) {
          pvVar10 = (void *)(**(code **)(*local_50 + 0x100))(local_50,local_60,pvVar14,1);
        }
        else {
          pvVar10 = memcpy(local_60,pvVar14,(longlong)*(int *)((longlong)local_50 + 0x34));
        }
      }
      *param_3 = (longlong)local_50;
LAB_1476fe083:
      uVar11 = (undefined7)((ulonglong)pvVar10 >> 8);
      bVar4 = 1;
    }
    unaff_BPL = 1;
  }
  else {
    iVar1 = *(int *)((longlong)local_50 + 0x44);
    bVar4 = *(byte *)(local_50 + 0xe);
    (**(code **)(*(longlong *)local_50[0xf] + 0x178))();
    unaff_BPL = 1;
    if ((-1 < (int)uVar6) &&
       (puVar12 = (ulonglong *)(param_1 + iVar1), (int)uVar6 < (int)puVar12[1])) {
      local_58 = (longlong)*(int *)(local_50[0xf] + 0x34);
      lVar2 = *(longlong *)(local_50[0xf] + 8);
      lVar8 = FUN_144a49fc8();
      lVar9 = local_58;
      if ((lVar2 == lVar8) &&
         ((cVar5 = FUN_1476fdd66(local_50[0xf]), cVar5 != '\0' && ((int)puVar12[1] != 0)))) {
        if ((bVar4 & 1) == 0) {
          uVar13 = *puVar12;
        }
        else {
          uVar13 = *puVar12;
          if ((uVar13 & 1) != 0) {
            uVar13 = (longlong)puVar12 + ((longlong)uVar13 >> 0x18);
          }
        }
        pvVar14 = (void *)(lVar9 * (ulonglong)uVar6 + uVar13);
        if (pvVar14 != (void *)0x0) {
          FUN_147029e70(param_2,pvVar14);
          if (pvVar14 != local_60) {
            plVar3 = (longlong *)local_50[0xf];
            if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar3 + 0x100))(plVar3,local_60,pvVar14,1);
            }
            else {
              memcpy(local_60,pvVar14,(longlong)*(int *)((longlong)plVar3 + 0x34));
            }
          }
          pvVar10 = (void *)local_50[0xf];
          *param_3 = (longlong)pvVar10;
          goto LAB_1476fe083;
        }
      }
    }
    bVar4 = 0;
    uVar11 = 0;
  }
LAB_1476fdf5a:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar11,bVar4 & unaff_BPL);
}



// FUNCTION 1476fe0bc FUN_1476fe0bc body=273 status=ok
// SIG undefined FUN_1476fe0bc(void)

ulonglong FUN_1476fe0bc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_78 [40];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = FUN_147029e60(param_2);
  iVar3 = FUN_147029a3c(uVar4);
  FUN_147029a40(uVar4,&local_50);
  plVar6 = (longlong *)0x0;
  plVar7 = local_50;
  if (((ulonglong)local_50 & 1) != 0) {
    plVar7 = plVar6;
  }
  lVar1 = plVar7[1];
  lVar5 = FUN_144a49fc8();
  if (lVar1 == lVar5) {
    if (iVar3 == -1) {
      iVar3 = 0;
    }
    cVar2 = FUN_1476fdd66(plVar7);
    if (cVar2 != '\0') {
      if (iVar3 < (int)plVar7[6]) {
        cVar2 = (**(code **)(*plVar7 + 0x88))(plVar7);
        if (cVar2 == '\0') {
          plVar6 = (longlong *)
                   ((longlong)iVar3 * (longlong)*(int *)((longlong)plVar7 + 0x34) +
                   param_1 + *(int *)((longlong)plVar7 + 0x44));
          if (plVar6 != (longlong *)0x0) {
            FUN_147029e70(param_2,plVar6);
            FUN_147029a73(param_3,param_2,plVar6);
          }
        }
        else {
          (**(code **)(*plVar7 + 0xa0))(plVar7,param_1,param_3);
        }
        *param_4 = plVar7;
        plVar6 = (longlong *)CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
      }
      else {
        plVar6 = (longlong *)0x0;
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return (ulonglong)plVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476fe1ce FUN_1476fe1ce body=646 status=ok
// SIG undefined FUN_1476fe1ce(void)

undefined8 FUN_1476fe1ce(longlong param_1,undefined8 param_2,longlong *param_3,void *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined7 uVar12;
  longlong lVar10;
  void *pvVar11;
  ulonglong *puVar13;
  ulonglong uVar14;
  void *pvVar15;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar8 = FUN_147029e60(param_2);
  uVar7 = FUN_147029a3c(uVar8);
  FUN_147029a40(uVar8,&local_50);
  uVar8 = FUN_1446e6bbc();
  bVar5 = FUN_1400164de(&local_50,uVar8);
  if ((local_50 != (longlong *)0x0 & bVar5) != 1) {
    uVar8 = FUN_140010bca();
    bVar5 = FUN_144affa3a(&local_50,uVar8);
    if ((((ulonglong)local_50 & 0xfffffffffffffffe) != 0 & bVar5) == 1) {
      uVar8 = FUN_147029e76(param_2);
      bVar5 = 1;
      param_3 = (longlong *)0x0;
      uVar12 = (int7)((ulonglong)uVar8 >> 8);
    }
    else {
      uVar8 = FUN_1446ddbd2();
      cVar6 = FUN_1400164de(&local_50,uVar8);
      bVar5 = 0;
      uVar12 = 0;
      if ((cVar6 != '\0') && (uVar12 = 0, local_50 != (longlong *)0x0)) {
        uVar14 = FUN_1476fe456(param_1,param_2,param_4,param_3);
        param_3 = (longlong *)(uVar14 & 0xffffffff);
        uVar12 = (undefined7)(uVar14 >> 8);
        bVar5 = 1;
      }
    }
    goto LAB_1476fe315;
  }
  if (uVar7 == 0xffffffff) {
    lVar2 = local_50[1];
    lVar10 = FUN_144a49fc8();
    if ((lVar2 != lVar10) || (cVar6 = FUN_1476fdd66(local_50), cVar6 == '\0')) {
      bVar5 = 0;
      uVar12 = 0;
      goto LAB_1476fe315;
    }
    pvVar15 = (void *)(param_1 + *(int *)((longlong)local_50 + 0x44));
    if (pvVar15 == (void *)0x0) {
      bVar5 = 0;
      uVar12 = 0;
    }
    else {
      pvVar11 = (void *)FUN_147029e70(param_2,pvVar15);
      if (pvVar15 != param_4) {
        if ((*(byte *)((longlong)local_50 + 0x3b) & 0x40) == 0) {
          pvVar11 = (void *)(**(code **)(*local_50 + 0x100))(local_50,param_4,pvVar15,1);
        }
        else {
          pvVar11 = memcpy(param_4,pvVar15,(longlong)*(int *)((longlong)local_50 + 0x34));
        }
      }
      *param_3 = (longlong)local_50;
LAB_1476fe41e:
      uVar12 = (undefined7)((ulonglong)pvVar11 >> 8);
      bVar5 = 1;
    }
    param_3 = (longlong *)&DAT_00000001;
  }
  else {
    iVar1 = *(int *)((longlong)local_50 + 0x44);
    bVar5 = *(byte *)(local_50 + 0xe);
    local_58 = param_3;
    (**(code **)(*(longlong *)local_50[0xf] + 0x178))();
    param_3 = (longlong *)&DAT_00000001;
    if ((-1 < (int)uVar7) &&
       (puVar13 = (ulonglong *)(param_1 + iVar1), (int)uVar7 < (int)puVar13[1])) {
      local_60 = (longlong)*(int *)(local_50[0xf] + 0x34);
      lVar2 = *(longlong *)(local_50[0xf] + 8);
      lVar9 = FUN_144a49fc8();
      lVar10 = local_60;
      if ((lVar2 == lVar9) &&
         ((cVar6 = FUN_1476fdd66(local_50[0xf]), cVar6 != '\0' && ((int)puVar13[1] != 0)))) {
        if ((bVar5 & 1) == 0) {
          uVar14 = *puVar13;
        }
        else {
          uVar14 = *puVar13;
          if ((uVar14 & 1) != 0) {
            uVar14 = (longlong)puVar13 + ((longlong)uVar14 >> 0x18);
          }
        }
        pvVar15 = (void *)(lVar10 * (ulonglong)uVar7 + uVar14);
        if (pvVar15 != (void *)0x0) {
          FUN_147029e70(param_2,pvVar15);
          plVar4 = local_58;
          if (pvVar15 != param_4) {
            plVar3 = (longlong *)local_50[0xf];
            if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar3 + 0x100))(plVar3,param_4,pvVar15,1);
            }
            else {
              memcpy(param_4,pvVar15,(longlong)*(int *)((longlong)plVar3 + 0x34));
            }
          }
          pvVar11 = (void *)local_50[0xf];
          *plVar4 = (longlong)pvVar11;
          goto LAB_1476fe41e;
        }
      }
    }
    bVar5 = 0;
    uVar12 = 0;
  }
LAB_1476fe315:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar12,bVar5 & (byte)param_3);
}



// FUNCTION 1476fe456 FUN_1476fe456 body=273 status=ok
// SIG undefined FUN_1476fe456(void)

ulonglong FUN_1476fe456(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_78 [40];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = FUN_147029e60(param_2);
  iVar3 = FUN_147029a3c(uVar4);
  FUN_147029a40(uVar4,&local_50);
  plVar6 = (longlong *)0x0;
  plVar7 = local_50;
  if (((ulonglong)local_50 & 1) != 0) {
    plVar7 = plVar6;
  }
  lVar1 = plVar7[1];
  lVar5 = FUN_144a49fc8();
  if (lVar1 == lVar5) {
    if (iVar3 == -1) {
      iVar3 = 0;
    }
    cVar2 = FUN_1476fdd66(plVar7);
    if (cVar2 != '\0') {
      if (iVar3 < (int)plVar7[6]) {
        cVar2 = (**(code **)(*plVar7 + 0x88))(plVar7);
        if (cVar2 == '\0') {
          plVar6 = (longlong *)
                   ((longlong)iVar3 * (longlong)*(int *)((longlong)plVar7 + 0x34) +
                   param_1 + *(int *)((longlong)plVar7 + 0x44));
          if (plVar6 != (longlong *)0x0) {
            FUN_147029e70(param_2,plVar6);
            FUN_147029a73(param_3,param_2,plVar6);
          }
        }
        else {
          (**(code **)(*plVar7 + 0xa0))(plVar7,param_1,param_3);
        }
        *param_4 = plVar7;
        plVar6 = (longlong *)CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
      }
      else {
        plVar6 = (longlong *)0x0;
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return (ulonglong)plVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476fe568 FUN_1476fe568 body=115 status=ok
// SIG undefined FUN_1476fe568(void)

bool FUN_1476fe568(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar1 = FUN_144a7add4();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (!bVar3) goto LAB_1476fe5c5;
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) goto LAB_1476fe5c5;
    param_1 = *(longlong *)(param_1 + 0x70);
  }
LAB_1476fe5c5:
  lVar2 = *(longlong *)(param_1 + 8);
  lVar1 = FUN_144a7452c();
  return lVar2 == lVar1;
}



// FUNCTION 1476fe5db FUN_1476fe5db body=127 status=ok
// SIG undefined FUN_1476fe5db(void)

void FUN_1476fe5db(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 auStack_68 [40];
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_147029ea6(param_2);
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  local_40 = &PTR_FUN_14a508ef0;
  local_38 = param_3;
  local_30 = param_4;
  FUN_147029a0b(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476fe6e6 FUN_1476fe6e6 body=290 status=ok
// SIG undefined FUN_1476fe6e6(void)

undefined8 FUN_1476fe6e6(longlong *param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_2 + 0xb4) == '\x01') {
    if (param_2 == 0) {
      local_40 = 0;
    }
    else {
      local_40 = *(longlong *)(param_2 + 0x50);
    }
    local_38 = 0xffffffff;
    local_34 = 0x101;
    local_32 = 0;
    local_48 = param_2;
    FUN_144a2daf0(&local_48);
    if (local_40 != 0) {
      do {
        if ((char)*(ulonglong *)(local_40 + 0x38) < '\0') {
          if ((((*(ulonglong *)(local_40 + 0x38) & 0x500) != 0) &&
              (cVar2 = FUN_1476fe568(local_40), cVar2 != '\0')) &&
             (cVar2 = FUN_1476fe99b(), cVar2 != '\0')) {
            uVar1 = *(uint *)((longlong)param_1 + 0xc);
            if ((int)uVar1 < DAT_14c9647dc) {
              lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            }
            else {
              lVar4 = 0;
            }
            if ((*(uint *)(lVar4 + 8) >> 0x1c & 1) == 0) {
              (**(code **)(*param_1 + 0x248))(param_1,param_2,param_3);
              uVar3 = 1;
              goto LAB_1476fe785;
            }
          }
          break;
        }
        local_40 = *(longlong *)(local_40 + 0x18);
        FUN_144a2daf0(&local_48);
      } while (local_40 != 0);
    }
  }
  uVar3 = 0;
LAB_1476fe785:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1476fe80a FUN_1476fe80a body=400 status=ok
// SIG undefined FUN_1476fe80a(void)

ulonglong FUN_1476fe80a(undefined8 param_1,void *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  void *_Src;
  undefined7 uVar7;
  ulonglong uVar6;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = FUN_147029e60();
  FUN_147029a40(uVar4,&local_40);
  uVar6 = 0;
  if ((local_40 & 1) == 0) {
    uVar6 = local_40;
  }
  *param_3 = uVar6;
  uVar7 = (undefined7)((ulonglong)param_1 >> 8);
  if (uVar6 == 0) {
LAB_1476fe85b:
    cVar2 = FUN_1476fe568(*param_3);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*(longlong *)*param_3 + 0x88))();
      if (cVar2 == '\0') {
        uVar4 = FUN_147029ecc(param_1);
        FUN_147029a73(param_2,param_1,uVar4);
      }
      else {
        plVar1 = (longlong *)*param_3;
        uVar4 = FUN_147029a36(param_1);
        (**(code **)(*plVar1 + 0xa0))(plVar1,uVar4,param_2);
      }
      uVar6 = CONCAT71(uVar7,1);
      goto LAB_1476fe948;
    }
  }
  else {
    lVar8 = *(longlong *)(uVar6 + 8);
    lVar5 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar5 + 8) != 0) {
      if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) goto LAB_1476fe8f3;
      goto LAB_1476fe85b;
    }
    bVar9 = lVar8 != 0;
    if (lVar8 != lVar5 && bVar9) {
      do {
        lVar8 = *(longlong *)(lVar8 + 0x30);
        bVar9 = lVar8 != 0;
        if (lVar8 == lVar5) break;
      } while (lVar8 != 0);
    }
    if (!bVar9) goto LAB_1476fe85b;
LAB_1476fe8f3:
    iVar3 = FUN_147029a3c(uVar4);
    if (iVar3 == -1) goto LAB_1476fe85b;
    cVar2 = FUN_1476fe568(*(undefined8 *)(uVar6 + 0x78));
    if (cVar2 != '\0') {
      plVar1 = *(longlong **)(uVar6 + 0x78);
      _Src = (void *)FUN_147029ecc(param_1);
      uVar6 = CONCAT71(uVar7,1);
      if (_Src != param_2) {
        if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
          (**(code **)(*plVar1 + 0x100))(plVar1,param_2,_Src,1);
        }
        else {
          memcpy(param_2,_Src,(longlong)*(int *)((longlong)plVar1 + 0x34));
        }
      }
      goto LAB_1476fe948;
    }
  }
  uVar6 = 0;
LAB_1476fe948:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1476fe99b FUN_1476fe99b body=113 status=ok
// SIG undefined FUN_1476fe99b(void)

bool FUN_1476fe99b(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if (param_1 != 0) {
    lVar3 = *(longlong *)(param_1 + 8);
    lVar2 = FUN_14475a8dc();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
      iVar1 = 1;
      if (bVar4) goto LAB_1476fe9cb;
    }
    else {
      iVar1 = 1;
      if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) goto LAB_1476fe9cb;
    }
  }
  iVar1 = 4;
LAB_1476fe9cb:
  return *(int *)(param_1 + 0x34) == iVar1;
}



// FUNCTION 1476fea0c FUN_1476fea0c body=29 status=ok
// SIG undefined FUN_1476fea0c(void)

undefined8 FUN_1476fea0c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476fea56 FUN_1476fea56 body=680 status=ok
// SIG undefined FUN_1476fea56(void)

undefined8 FUN_1476fea56(longlong param_1,undefined8 param_2,longlong *param_3,void *param_4)

{
  int iVar1;
  longlong *plVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined7 uVar8;
  void *pvVar7;
  ulonglong *puVar9;
  ulonglong uVar10;
  byte unaff_BPL;
  void *pvVar11;
  undefined1 auStack_78 [32];
  void *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar6 = FUN_147029e60(param_2);
  uVar5 = FUN_147029a3c(uVar6);
  FUN_147029a40(uVar6,&local_50);
  uVar6 = FUN_1446e6bbc();
  bVar3 = FUN_1400164de(&local_50,uVar6);
  if ((local_50 != (longlong *)0x0 & bVar3) == 1) {
    if (uVar5 != 0xffffffff) {
      iVar1 = *(int *)((longlong)local_50 + 0x44);
      bVar3 = *(byte *)(local_50 + 0xe);
      local_58 = param_4;
      (**(code **)(*(longlong *)local_50[0xf] + 0x178))();
      unaff_BPL = 1;
      if ((-1 < (int)uVar5) &&
         (puVar9 = (ulonglong *)(param_1 + iVar1), (int)uVar5 < (int)puVar9[1])) {
        iVar1 = *(int *)(local_50[0xf] + 0x34);
        cVar4 = FUN_1476fe568();
        if ((cVar4 != '\0') &&
           ((cVar4 = FUN_1476fe99b(local_50[0xf]), pvVar7 = local_58, cVar4 != '\0' &&
            ((int)puVar9[1] != 0)))) {
          if ((bVar3 & 1) == 0) {
            uVar10 = *puVar9;
          }
          else {
            uVar10 = *puVar9;
            if ((uVar10 & 1) != 0) {
              uVar10 = (longlong)puVar9 + ((longlong)uVar10 >> 0x18);
            }
          }
          pvVar11 = (void *)((longlong)iVar1 * (ulonglong)uVar5 + uVar10);
          if (pvVar11 != (void *)0x0) {
            FUN_147029e70(param_2,pvVar11);
            if (pvVar11 != pvVar7) {
              plVar2 = (longlong *)local_50[0xf];
              if ((*(byte *)((longlong)plVar2 + 0x3b) & 0x40) == 0) {
                (**(code **)(*plVar2 + 0x100))(plVar2,pvVar7,pvVar11,1);
              }
              else {
                memcpy(pvVar7,pvVar11,(longlong)*(int *)((longlong)plVar2 + 0x34));
              }
            }
            pvVar7 = (void *)local_50[0xf];
            *param_3 = (longlong)pvVar7;
            goto LAB_1476fecbf;
          }
        }
      }
      bVar3 = 0;
      uVar8 = 0;
      goto LAB_1476feb06;
    }
    cVar4 = FUN_1476fe568(local_50);
    if ((cVar4 != '\0') && (cVar4 = FUN_1476fe99b(local_50), cVar4 != '\0')) {
      pvVar11 = (void *)(param_1 + *(int *)((longlong)local_50 + 0x44));
      if (pvVar11 == (void *)0x0) {
        bVar3 = 0;
        uVar8 = 0;
      }
      else {
        pvVar7 = (void *)FUN_147029e70(param_2,pvVar11);
        if (pvVar11 != param_4) {
          if ((*(byte *)((longlong)local_50 + 0x3b) & 0x40) == 0) {
            pvVar7 = (void *)(**(code **)(*local_50 + 0x100))(local_50,param_4,pvVar11,1);
          }
          else {
            pvVar7 = memcpy(param_4,pvVar11,(longlong)*(int *)((longlong)local_50 + 0x34));
          }
        }
        *param_3 = (longlong)local_50;
LAB_1476fecbf:
        uVar8 = (undefined7)((ulonglong)pvVar7 >> 8);
        bVar3 = 1;
      }
      unaff_BPL = 1;
      goto LAB_1476feb06;
    }
LAB_1476feb9e:
    bVar3 = 0;
    uVar8 = 0;
  }
  else {
    uVar6 = FUN_140010bca();
    bVar3 = FUN_144affa3a(&local_50,uVar6);
    uVar10 = (ulonglong)local_50 & 0xfffffffffffffffe;
    if ((uVar10 != 0 & bVar3) == 1) {
      FUN_147029e76(param_2,uVar10);
      uVar6 = FUN_1476fe6e6(param_1,uVar10,param_4);
    }
    else {
      uVar6 = FUN_1446ddbd2();
      cVar4 = FUN_1400164de(&local_50,uVar6);
      bVar3 = 0;
      uVar8 = 0;
      if (cVar4 == '\0') goto LAB_1476feb9e;
      if (local_50 == (longlong *)0x0) goto LAB_1476feb06;
      uVar6 = FUN_1476fed00(param_1,param_2,param_4,param_3);
    }
    unaff_BPL = (byte)uVar6;
    uVar8 = (undefined7)((ulonglong)uVar6 >> 8);
    bVar3 = 1;
  }
LAB_1476feb06:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar8,bVar3 & unaff_BPL);
}



// FUNCTION 1476fed00 FUN_1476fed00 body=267 status=ok
// SIG undefined FUN_1476fed00(void)

ulonglong FUN_1476fed00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = FUN_147029e60(param_2);
  iVar2 = FUN_147029a3c(uVar3);
  FUN_147029a40(uVar3,&local_48);
  plVar4 = (longlong *)0x0;
  plVar5 = local_48;
  if (((ulonglong)local_48 & 1) != 0) {
    plVar5 = plVar4;
  }
  cVar1 = FUN_1476fe568(plVar5);
  if (cVar1 != '\0') {
    if (iVar2 == -1) {
      iVar2 = 0;
    }
    cVar1 = FUN_1476fe99b(plVar5);
    if (cVar1 != '\0') {
      if (iVar2 < (int)plVar5[6]) {
        cVar1 = (**(code **)(*plVar5 + 0x88))(plVar5);
        if (cVar1 == '\0') {
          plVar4 = (longlong *)
                   ((longlong)iVar2 * (longlong)*(int *)((longlong)plVar5 + 0x34) +
                   param_1 + *(int *)((longlong)plVar5 + 0x44));
          if (plVar4 != (longlong *)0x0) {
            FUN_147029e70(param_2,plVar4);
            FUN_147029a73(param_3,param_2,plVar4);
          }
        }
        else {
          (**(code **)(*plVar5 + 0xa0))(plVar5,param_1,param_3);
        }
        *param_4 = plVar5;
        plVar4 = (longlong *)CONCAT71((int7)((ulonglong)plVar4 >> 8),1);
      }
      else {
        plVar4 = (longlong *)0x0;
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return (ulonglong)plVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476fee0c FUN_1476fee0c body=671 status=ok
// SIG undefined FUN_1476fee0c(void)

undefined8 FUN_1476fee0c(longlong param_1,undefined8 param_2,longlong *param_3,void *param_4)

{
  int iVar1;
  longlong *plVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined7 uVar8;
  void *pvVar7;
  ulonglong *puVar9;
  ulonglong uVar10;
  byte unaff_BPL;
  void *pvVar11;
  undefined1 auStack_78 [32];
  void *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar6 = FUN_147029e60(param_2);
  uVar5 = FUN_147029a3c(uVar6);
  FUN_147029a40(uVar6,&local_50);
  uVar6 = FUN_1446e6bbc();
  bVar3 = FUN_1400164de(&local_50,uVar6);
  if ((local_50 != (longlong *)0x0 & bVar3) == 1) {
    if (uVar5 != 0xffffffff) {
      iVar1 = *(int *)((longlong)local_50 + 0x44);
      bVar3 = *(byte *)(local_50 + 0xe);
      local_58 = param_4;
      (**(code **)(*(longlong *)local_50[0xf] + 0x178))();
      unaff_BPL = 1;
      if ((-1 < (int)uVar5) &&
         (puVar9 = (ulonglong *)(param_1 + iVar1), (int)uVar5 < (int)puVar9[1])) {
        iVar1 = *(int *)(local_50[0xf] + 0x34);
        cVar4 = FUN_1476fe568();
        if ((cVar4 != '\0') &&
           ((cVar4 = FUN_1476fe99b(local_50[0xf]), pvVar7 = local_58, cVar4 != '\0' &&
            ((int)puVar9[1] != 0)))) {
          if ((bVar3 & 1) == 0) {
            uVar10 = *puVar9;
          }
          else {
            uVar10 = *puVar9;
            if ((uVar10 & 1) != 0) {
              uVar10 = (longlong)puVar9 + ((longlong)uVar10 >> 0x18);
            }
          }
          pvVar11 = (void *)((longlong)iVar1 * (ulonglong)uVar5 + uVar10);
          if (pvVar11 != (void *)0x0) {
            FUN_147029e70(param_2,pvVar11);
            if (pvVar11 != pvVar7) {
              plVar2 = (longlong *)local_50[0xf];
              if ((*(byte *)((longlong)plVar2 + 0x3b) & 0x40) == 0) {
                (**(code **)(*plVar2 + 0x100))(plVar2,pvVar7,pvVar11,1);
              }
              else {
                memcpy(pvVar7,pvVar11,(longlong)*(int *)((longlong)plVar2 + 0x34));
              }
            }
            pvVar7 = (void *)local_50[0xf];
            *param_3 = (longlong)pvVar7;
            goto LAB_1476ff06c;
          }
        }
      }
      bVar3 = 0;
      uVar8 = 0;
      goto LAB_1476feebc;
    }
    cVar4 = FUN_1476fe568(local_50);
    if ((cVar4 != '\0') && (cVar4 = FUN_1476fe99b(local_50), cVar4 != '\0')) {
      pvVar11 = (void *)(param_1 + *(int *)((longlong)local_50 + 0x44));
      if (pvVar11 == (void *)0x0) {
        bVar3 = 0;
        uVar8 = 0;
      }
      else {
        pvVar7 = (void *)FUN_147029e70(param_2,pvVar11);
        if (pvVar11 != param_4) {
          if ((*(byte *)((longlong)local_50 + 0x3b) & 0x40) == 0) {
            pvVar7 = (void *)(**(code **)(*local_50 + 0x100))(local_50,param_4,pvVar11,1);
          }
          else {
            pvVar7 = memcpy(param_4,pvVar11,(longlong)*(int *)((longlong)local_50 + 0x34));
          }
        }
        *param_3 = (longlong)local_50;
LAB_1476ff06c:
        uVar8 = (undefined7)((ulonglong)pvVar7 >> 8);
        bVar3 = 1;
      }
      unaff_BPL = 1;
      goto LAB_1476feebc;
    }
  }
  else {
    uVar6 = FUN_140010bca();
    bVar3 = FUN_144affa3a(&local_50,uVar6);
    if ((((ulonglong)local_50 & 0xfffffffffffffffe) != 0 & bVar3) == 1) {
      uVar6 = FUN_147029e76(param_2);
      uVar8 = (undefined7)((ulonglong)uVar6 >> 8);
      bVar3 = 1;
      unaff_BPL = 0;
      goto LAB_1476feebc;
    }
    uVar6 = FUN_1446ddbd2();
    cVar4 = FUN_1400164de(&local_50,uVar6);
    bVar3 = 0;
    uVar8 = 0;
    if (cVar4 != '\0') {
      if (local_50 != (longlong *)0x0) {
        uVar6 = FUN_1476ff0ac(param_1,param_2,param_4,param_3);
        unaff_BPL = (byte)uVar6;
        uVar8 = (undefined7)((ulonglong)uVar6 >> 8);
        bVar3 = 1;
      }
      goto LAB_1476feebc;
    }
  }
  bVar3 = 0;
  uVar8 = 0;
LAB_1476feebc:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar8,bVar3 & unaff_BPL);
}



// FUNCTION 1476ff0ac FUN_1476ff0ac body=267 status=ok
// SIG undefined FUN_1476ff0ac(void)

ulonglong FUN_1476ff0ac(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = FUN_147029e60(param_2);
  iVar2 = FUN_147029a3c(uVar3);
  FUN_147029a40(uVar3,&local_48);
  plVar4 = (longlong *)0x0;
  plVar5 = local_48;
  if (((ulonglong)local_48 & 1) != 0) {
    plVar5 = plVar4;
  }
  cVar1 = FUN_1476fe568(plVar5);
  if (cVar1 != '\0') {
    if (iVar2 == -1) {
      iVar2 = 0;
    }
    cVar1 = FUN_1476fe99b(plVar5);
    if (cVar1 != '\0') {
      if (iVar2 < (int)plVar5[6]) {
        cVar1 = (**(code **)(*plVar5 + 0x88))(plVar5);
        if (cVar1 == '\0') {
          plVar4 = (longlong *)
                   ((longlong)iVar2 * (longlong)*(int *)((longlong)plVar5 + 0x34) +
                   param_1 + *(int *)((longlong)plVar5 + 0x44));
          if (plVar4 != (longlong *)0x0) {
            FUN_147029e70(param_2,plVar4);
            FUN_147029a73(param_3,param_2,plVar4);
          }
        }
        else {
          (**(code **)(*plVar5 + 0xa0))(plVar5,param_1,param_3);
        }
        *param_4 = plVar5;
        plVar4 = (longlong *)CONCAT71((int7)((ulonglong)plVar4 >> 8),1);
      }
      else {
        plVar4 = (longlong *)0x0;
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return (ulonglong)plVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ff1b8 FUN_1476ff1b8 body=141 status=ok
// SIG undefined FUN_1476ff1b8(void)

void FUN_1476ff1b8(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,8);
  return;
}



// FUNCTION 1476ff246 FUN_1476ff246 body=360 status=ok
// SIG undefined FUN_1476ff246(void)

void FUN_1476ff246(longlong param_1)

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
  lVar5 = param_1 + 0x2b0;
  if (*(longlong *)(param_1 + 0x2f0) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x2f0);
  }
  iVar6 = *(int *)(param_1 + 0x2f8);
  iVar3 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  if (*(int *)(param_1 + 0x288) - *(int *)(param_1 + 0x2ac) < iVar3 >> 2) {
    lVar2 = param_1 + 0x290;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = lVar2;
    if (*(int *)(param_1 + 0x2a0) == 0) {
      iVar6 = 0;
    }
    else {
      FUN_144a81a4c(&local_50);
      iVar6 = *(int *)(param_1 + 0x2a0);
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
        lVar4 = *(longlong *)(local_78 + 0x280);
        if (*(longlong *)(local_78 + 0x280) == 0) {
          lVar4 = local_78;
        }
        *(undefined4 *)(lVar5 + (longlong)*(int *)(lVar4 + 0x10 + (longlong)iVar3 * 0x14) * 4) =
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
    } while (lVar2 < *(int *)(param_1 + 0x2f8));
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476ff3b0 FUN_1476ff3b0 body=119 status=ok
// SIG undefined FUN_1476ff3b0(void)

void FUN_1476ff3b0(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x20;
    if (0x20 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x10c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x10c) = iVar5;
    FUN_1476ff1b8(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1476ff428 FUN_1476ff428 body=136 status=ok
// SIG undefined FUN_1476ff428(void)

void FUN_1476ff428(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x288);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x20;
    if (0x20 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x28c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x14,0);
      iVar4 = (int)(uVar3 / 0x14);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x28c) = iVar5;
    FUN_145c1063c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1476ff4b2 FUN_1476ff4b2 body=148 status=ok
// SIG undefined FUN_1476ff4b2(void)

void FUN_1476ff4b2(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x280);
  if (*(longlong *)(param_1 + 0x280) == 0) {
    lVar5 = param_1;
  }
  if (*(int *)(param_1 + 0x2ac) != 0) {
    *(int *)(lVar5 + (longlong)*(int *)(param_1 + 0x2a8) * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar5 + (longlong)param_2 * 0x14);
  *puVar1 = 0xffffffff;
  if (*(int *)(param_1 + 0x2ac) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 0x2a8);
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 0x2a8) = param_2;
  *(int *)(param_1 + 0x2ac) = *(int *)(param_1 + 0x2ac) + 1;
  lVar5 = param_1 + 0x290;
  if (*(longlong *)(param_1 + 0x298) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x298);
  }
  iVar4 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar4 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)(lVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1476ff546 FUN_1476ff546 body=132 status=ok
// SIG undefined FUN_1476ff546(void)

void FUN_1476ff546(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,8);
  return;
}



// FUNCTION 1476ff5ca FUN_1476ff5ca body=360 status=ok
// SIG undefined FUN_1476ff5ca(void)

void FUN_1476ff5ca(longlong param_1)

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
  lVar5 = param_1 + 0xd0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    lVar5 = *(longlong *)(param_1 + 0xe0);
  }
  iVar6 = *(int *)(param_1 + 0xe8);
  iVar3 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  if (*(int *)(param_1 + 0xa8) - *(int *)(param_1 + 0xcc) < iVar3 >> 2) {
    lVar2 = param_1 + 0xb0;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = lVar2;
    if (*(int *)(param_1 + 0xc0) == 0) {
      iVar6 = 0;
    }
    else {
      FUN_144a81a4c(&local_50);
      iVar6 = *(int *)(param_1 + 0xc0);
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
        lVar4 = *(longlong *)(local_78 + 0xa0);
        if (*(longlong *)(local_78 + 0xa0) == 0) {
          lVar4 = local_78;
        }
        *(undefined4 *)(lVar5 + (longlong)*(int *)(lVar4 + 0x10 + (longlong)iVar3 * 0x14) * 4) =
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
    } while (lVar2 < *(int *)(param_1 + 0xe8));
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476ff734 FUN_1476ff734 body=110 status=ok
// SIG undefined FUN_1476ff734(void)

void FUN_1476ff734(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_1476ff546(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1476ff7a4 FUN_1476ff7a4 body=136 status=ok
// SIG undefined FUN_1476ff7a4(void)

void FUN_1476ff7a4(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0xa8);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0xac)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x14,0);
      iVar4 = (int)(uVar3 / 0x14);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0xac) = iVar5;
    FUN_145c105a8(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1476ff82e FUN_1476ff82e body=148 status=ok
// SIG undefined FUN_1476ff82e(void)

void FUN_1476ff82e(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  lVar5 = *(longlong *)(param_1 + 0xa0);
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    lVar5 = param_1;
  }
  if (*(int *)(param_1 + 0xcc) != 0) {
    *(int *)(lVar5 + (longlong)*(int *)(param_1 + 200) * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar5 + (longlong)param_2 * 0x14);
  *puVar1 = 0xffffffff;
  if (*(int *)(param_1 + 0xcc) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 200);
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 200) = param_2;
  *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xcc) + 1;
  lVar5 = param_1 + 0xb0;
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    lVar5 = *(longlong *)(param_1 + 0xb8);
  }
  iVar4 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar4 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)(lVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1476ff8c2 FUN_1476ff8c2 body=127 status=ok
// SIG undefined FUN_1476ff8c2(void)

void FUN_1476ff8c2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 auStack_68 [40];
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_147029ea6(param_2);
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  local_40 = &PTR_FUN_14a508f10;
  local_38 = param_3;
  local_30 = param_4;
  FUN_147029a0b(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ff9ce FUN_1476ff9ce body=290 status=ok
// SIG undefined FUN_1476ff9ce(void)

undefined8 FUN_1476ff9ce(longlong *param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_2 + 0xb4) == '\x01') {
    if (param_2 == 0) {
      local_40 = 0;
    }
    else {
      local_40 = *(longlong *)(param_2 + 0x50);
    }
    local_38 = 0xffffffff;
    local_34 = 0x101;
    local_32 = 0;
    local_48 = param_2;
    FUN_144a2daf0(&local_48);
    if (local_40 != 0) {
      do {
        if ((char)*(ulonglong *)(local_40 + 0x38) < '\0') {
          if ((*(ulonglong *)(local_40 + 0x38) & 0x500) != 0) {
            lVar5 = *(longlong *)(local_40 + 8);
            lVar3 = FUN_144a4a07e();
            if (lVar5 == lVar3) {
              cVar2 = FUN_1476ffc84();
              if (cVar2 != '\0') {
                uVar1 = *(uint *)((longlong)param_1 + 0xc);
                if ((int)uVar1 < DAT_14c9647dc) {
                  lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
                }
                else {
                  lVar5 = 0;
                }
                if ((*(uint *)(lVar5 + 8) >> 0x1c & 1) == 0) {
                  (**(code **)(*param_1 + 0x248))(param_1,param_2,param_3);
                  uVar4 = 1;
                  goto LAB_1476ffa60;
                }
              }
            }
          }
          break;
        }
        local_40 = *(longlong *)(local_40 + 0x18);
        FUN_144a2daf0(&local_48);
      } while (local_40 != 0);
    }
  }
  uVar4 = 0;
LAB_1476ffa60:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ffaf2 FUN_1476ffaf2 body=401 status=ok
// SIG undefined FUN_1476ffaf2(void)

ulonglong FUN_1476ffaf2(undefined8 param_1,void *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  void *_Src;
  undefined7 uVar7;
  ulonglong uVar6;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = FUN_147029e60();
  FUN_147029a40(uVar4,&local_40);
  uVar6 = 0;
  if ((local_40 & 1) == 0) {
    uVar6 = local_40;
  }
  *param_3 = uVar6;
  uVar7 = (undefined7)((ulonglong)param_1 >> 8);
  if (uVar6 == 0) {
LAB_1476ffbeb:
    lVar8 = *(longlong *)(*param_3 + 8);
    lVar5 = FUN_144a4a07e();
    if (lVar8 == lVar5) {
      cVar2 = (**(code **)(*(longlong *)*param_3 + 0x88))();
      if (cVar2 == '\0') {
        uVar4 = FUN_147029ecc(param_1);
        FUN_147029a73(param_2,param_1,uVar4);
      }
      else {
        plVar1 = (longlong *)*param_3;
        uVar4 = FUN_147029a36(param_1);
        (**(code **)(*plVar1 + 0xa0))(plVar1,uVar4,param_2);
      }
      uVar6 = CONCAT71(uVar7,1);
      goto LAB_1476ffbfe;
    }
  }
  else {
    lVar8 = *(longlong *)(uVar6 + 8);
    lVar5 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar5 + 8) == 0) {
      bVar9 = lVar8 != 0;
      if (lVar8 != lVar5 && bVar9) {
        do {
          lVar8 = *(longlong *)(lVar8 + 0x30);
          bVar9 = lVar8 != 0;
          if (lVar8 == lVar5) break;
        } while (lVar8 != 0);
      }
      if (bVar9) goto LAB_1476ffb93;
      goto LAB_1476ffbeb;
    }
    if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar5 + 8)) == 0) goto LAB_1476ffbeb;
LAB_1476ffb93:
    iVar3 = FUN_147029a3c(uVar4);
    if (iVar3 == -1) goto LAB_1476ffbeb;
    lVar8 = *(longlong *)(*(longlong *)(uVar6 + 0x78) + 8);
    lVar5 = FUN_144a4a07e();
    if (lVar8 == lVar5) {
      plVar1 = *(longlong **)(uVar6 + 0x78);
      _Src = (void *)FUN_147029ecc(param_1);
      uVar6 = CONCAT71(uVar7,1);
      if (_Src != param_2) {
        if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
          (**(code **)(*plVar1 + 0x100))(plVar1,param_2,_Src,1);
        }
        else {
          memcpy(param_2,_Src,(longlong)*(int *)((longlong)plVar1 + 0x34));
        }
      }
      goto LAB_1476ffbfe;
    }
  }
  uVar6 = 0;
LAB_1476ffbfe:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1476ffc84 FUN_1476ffc84 body=113 status=ok
// SIG undefined FUN_1476ffc84(void)

bool FUN_1476ffc84(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if (param_1 != 0) {
    lVar3 = *(longlong *)(param_1 + 8);
    lVar2 = FUN_14475a8dc();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
      iVar1 = 1;
      if (bVar4) goto LAB_1476ffcb4;
    }
    else {
      iVar1 = 1;
      if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) goto LAB_1476ffcb4;
    }
  }
  iVar1 = 0x10;
LAB_1476ffcb4:
  return *(int *)(param_1 + 0x34) == iVar1;
}



// FUNCTION 1476ffcf6 FUN_1476ffcf6 body=29 status=ok
// SIG undefined FUN_1476ffcf6(void)

undefined8 FUN_1476ffcf6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476ffd40 FUN_1476ffd40 body=665 status=ok
// SIG undefined FUN_1476ffd40(void)

undefined8 FUN_1476ffd40(longlong param_1,undefined8 param_2,longlong *param_3,void *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined7 uVar11;
  void *pvVar10;
  ulonglong *puVar12;
  ulonglong uVar13;
  byte unaff_BPL;
  void *pvVar14;
  undefined1 auStack_88 [40];
  void *local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar7 = FUN_147029e60(param_2);
  uVar6 = FUN_147029a3c(uVar7);
  FUN_147029a40(uVar7,&local_50);
  uVar7 = FUN_1446e6bbc();
  bVar4 = FUN_1400164de(&local_50,uVar7);
  if ((local_50 != (longlong *)0x0 & bVar4) != 1) {
    uVar7 = FUN_140010bca();
    bVar4 = FUN_144affa3a(&local_50,uVar7);
    uVar13 = (ulonglong)local_50 & 0xfffffffffffffffe;
    if ((uVar13 != 0 & bVar4) == 1) {
      FUN_147029e76(param_2,uVar13);
      uVar7 = FUN_1476ff9ce(param_1,uVar13,param_4);
    }
    else {
      uVar7 = FUN_1446ddbd2();
      cVar5 = FUN_1400164de(&local_50,uVar7);
      bVar4 = 0;
      uVar11 = 0;
      if ((cVar5 == '\0') || (local_50 == (longlong *)0x0)) goto LAB_1476ffe78;
      uVar7 = FUN_1476fffda(param_1,param_2,param_4,param_3);
    }
    unaff_BPL = (byte)uVar7;
    uVar11 = (undefined7)((ulonglong)uVar7 >> 8);
    bVar4 = 1;
    goto LAB_1476ffe78;
  }
  local_60 = param_4;
  if (uVar6 == 0xffffffff) {
    lVar2 = local_50[1];
    lVar9 = FUN_144a4a07e();
    if ((lVar2 != lVar9) || (cVar5 = FUN_1476ffc84(local_50), cVar5 == '\0')) {
      bVar4 = 0;
      uVar11 = 0;
      goto LAB_1476ffe78;
    }
    pvVar14 = (void *)(param_1 + *(int *)((longlong)local_50 + 0x44));
    if (pvVar14 == (void *)0x0) {
      bVar4 = 0;
      uVar11 = 0;
    }
    else {
      pvVar10 = (void *)FUN_147029e70(param_2,pvVar14);
      if (pvVar14 != local_60) {
        if ((*(byte *)((longlong)local_50 + 0x3b) & 0x40) == 0) {
          pvVar10 = (void *)(**(code **)(*local_50 + 0x100))(local_50,local_60,pvVar14,1);
        }
        else {
          pvVar10 = memcpy(local_60,pvVar14,(longlong)*(int *)((longlong)local_50 + 0x34));
        }
      }
      *param_3 = (longlong)local_50;
LAB_1476fffa1:
      uVar11 = (undefined7)((ulonglong)pvVar10 >> 8);
      bVar4 = 1;
    }
    unaff_BPL = 1;
  }
  else {
    iVar1 = *(int *)((longlong)local_50 + 0x44);
    bVar4 = *(byte *)(local_50 + 0xe);
    (**(code **)(*(longlong *)local_50[0xf] + 0x178))();
    unaff_BPL = 1;
    if ((-1 < (int)uVar6) &&
       (puVar12 = (ulonglong *)(param_1 + iVar1), (int)uVar6 < (int)puVar12[1])) {
      local_58 = (longlong)*(int *)(local_50[0xf] + 0x34);
      lVar2 = *(longlong *)(local_50[0xf] + 8);
      lVar8 = FUN_144a4a07e();
      lVar9 = local_58;
      if ((lVar2 == lVar8) &&
         ((cVar5 = FUN_1476ffc84(local_50[0xf]), cVar5 != '\0' && ((int)puVar12[1] != 0)))) {
        if ((bVar4 & 1) == 0) {
          uVar13 = *puVar12;
        }
        else {
          uVar13 = *puVar12;
          if ((uVar13 & 1) != 0) {
            uVar13 = (longlong)puVar12 + ((longlong)uVar13 >> 0x18);
          }
        }
        pvVar14 = (void *)(lVar9 * (ulonglong)uVar6 + uVar13);
        if (pvVar14 != (void *)0x0) {
          FUN_147029e70(param_2,pvVar14);
          if (pvVar14 != local_60) {
            plVar3 = (longlong *)local_50[0xf];
            if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar3 + 0x100))(plVar3,local_60,pvVar14,1);
            }
            else {
              memcpy(local_60,pvVar14,(longlong)*(int *)((longlong)plVar3 + 0x34));
            }
          }
          pvVar10 = (void *)local_50[0xf];
          *param_3 = (longlong)pvVar10;
          goto LAB_1476fffa1;
        }
      }
    }
    bVar4 = 0;
    uVar11 = 0;
  }
LAB_1476ffe78:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar11,bVar4 & unaff_BPL);
}



// FUNCTION 1476fffda FUN_1476fffda body=273 status=ok
// SIG undefined FUN_1476fffda(void)

ulonglong FUN_1476fffda(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_78 [40];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = FUN_147029e60(param_2);
  iVar3 = FUN_147029a3c(uVar4);
  FUN_147029a40(uVar4,&local_50);
  plVar6 = (longlong *)0x0;
  plVar7 = local_50;
  if (((ulonglong)local_50 & 1) != 0) {
    plVar7 = plVar6;
  }
  lVar1 = plVar7[1];
  lVar5 = FUN_144a4a07e();
  if (lVar1 == lVar5) {
    if (iVar3 == -1) {
      iVar3 = 0;
    }
    cVar2 = FUN_1476ffc84(plVar7);
    if (cVar2 != '\0') {
      if (iVar3 < (int)plVar7[6]) {
        cVar2 = (**(code **)(*plVar7 + 0x88))(plVar7);
        if (cVar2 == '\0') {
          plVar6 = (longlong *)
                   ((longlong)iVar3 * (longlong)*(int *)((longlong)plVar7 + 0x34) +
                   param_1 + *(int *)((longlong)plVar7 + 0x44));
          if (plVar6 != (longlong *)0x0) {
            FUN_147029e70(param_2,plVar6);
            FUN_147029a73(param_3,param_2,plVar6);
          }
        }
        else {
          (**(code **)(*plVar7 + 0xa0))(plVar7,param_1,param_3);
        }
        *param_4 = plVar7;
        plVar6 = (longlong *)CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
      }
      else {
        plVar6 = (longlong *)0x0;
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return (ulonglong)plVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477000ec FUN_1477000ec body=646 status=ok
// SIG undefined FUN_1477000ec(void)

undefined8 FUN_1477000ec(longlong param_1,undefined8 param_2,longlong *param_3,void *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined7 uVar12;
  longlong lVar10;
  void *pvVar11;
  ulonglong *puVar13;
  ulonglong uVar14;
  void *pvVar15;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar8 = FUN_147029e60(param_2);
  uVar7 = FUN_147029a3c(uVar8);
  FUN_147029a40(uVar8,&local_50);
  uVar8 = FUN_1446e6bbc();
  bVar5 = FUN_1400164de(&local_50,uVar8);
  if ((local_50 != (longlong *)0x0 & bVar5) != 1) {
    uVar8 = FUN_140010bca();
    bVar5 = FUN_144affa3a(&local_50,uVar8);
    if ((((ulonglong)local_50 & 0xfffffffffffffffe) != 0 & bVar5) == 1) {
      uVar8 = FUN_147029e76(param_2);
      bVar5 = 1;
      param_3 = (longlong *)0x0;
      uVar12 = (int7)((ulonglong)uVar8 >> 8);
    }
    else {
      uVar8 = FUN_1446ddbd2();
      cVar6 = FUN_1400164de(&local_50,uVar8);
      bVar5 = 0;
      uVar12 = 0;
      if ((cVar6 != '\0') && (uVar12 = 0, local_50 != (longlong *)0x0)) {
        uVar14 = FUN_147700374(param_1,param_2,param_4,param_3);
        param_3 = (longlong *)(uVar14 & 0xffffffff);
        uVar12 = (undefined7)(uVar14 >> 8);
        bVar5 = 1;
      }
    }
    goto LAB_147700233;
  }
  if (uVar7 == 0xffffffff) {
    lVar2 = local_50[1];
    lVar10 = FUN_144a4a07e();
    if ((lVar2 != lVar10) || (cVar6 = FUN_1476ffc84(local_50), cVar6 == '\0')) {
      bVar5 = 0;
      uVar12 = 0;
      goto LAB_147700233;
    }
    pvVar15 = (void *)(param_1 + *(int *)((longlong)local_50 + 0x44));
    if (pvVar15 == (void *)0x0) {
      bVar5 = 0;
      uVar12 = 0;
    }
    else {
      pvVar11 = (void *)FUN_147029e70(param_2,pvVar15);
      if (pvVar15 != param_4) {
        if ((*(byte *)((longlong)local_50 + 0x3b) & 0x40) == 0) {
          pvVar11 = (void *)(**(code **)(*local_50 + 0x100))(local_50,param_4,pvVar15,1);
        }
        else {
          pvVar11 = memcpy(param_4,pvVar15,(longlong)*(int *)((longlong)local_50 + 0x34));
        }
      }
      *param_3 = (longlong)local_50;
LAB_14770033c:
      uVar12 = (undefined7)((ulonglong)pvVar11 >> 8);
      bVar5 = 1;
    }
    param_3 = (longlong *)&DAT_00000001;
  }
  else {
    iVar1 = *(int *)((longlong)local_50 + 0x44);
    bVar5 = *(byte *)(local_50 + 0xe);
    local_58 = param_3;
    (**(code **)(*(longlong *)local_50[0xf] + 0x178))();
    param_3 = (longlong *)&DAT_00000001;
    if ((-1 < (int)uVar7) &&
       (puVar13 = (ulonglong *)(param_1 + iVar1), (int)uVar7 < (int)puVar13[1])) {
      local_60 = (longlong)*(int *)(local_50[0xf] + 0x34);
      lVar2 = *(longlong *)(local_50[0xf] + 8);
      lVar9 = FUN_144a4a07e();
      lVar10 = local_60;
      if ((lVar2 == lVar9) &&
         ((cVar6 = FUN_1476ffc84(local_50[0xf]), cVar6 != '\0' && ((int)puVar13[1] != 0)))) {
        if ((bVar5 & 1) == 0) {
          uVar14 = *puVar13;
        }
        else {
          uVar14 = *puVar13;
          if ((uVar14 & 1) != 0) {
            uVar14 = (longlong)puVar13 + ((longlong)uVar14 >> 0x18);
          }
        }
        pvVar15 = (void *)(lVar10 * (ulonglong)uVar7 + uVar14);
        if (pvVar15 != (void *)0x0) {
          FUN_147029e70(param_2,pvVar15);
          plVar4 = local_58;
          if (pvVar15 != param_4) {
            plVar3 = (longlong *)local_50[0xf];
            if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar3 + 0x100))(plVar3,param_4,pvVar15,1);
            }
            else {
              memcpy(param_4,pvVar15,(longlong)*(int *)((longlong)plVar3 + 0x34));
            }
          }
          pvVar11 = (void *)local_50[0xf];
          *plVar4 = (longlong)pvVar11;
          goto LAB_14770033c;
        }
      }
    }
    bVar5 = 0;
    uVar12 = 0;
  }
LAB_147700233:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar12,bVar5 & (byte)param_3);
}



// FUNCTION 147700374 FUN_147700374 body=273 status=ok
// SIG undefined FUN_147700374(void)

ulonglong FUN_147700374(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_78 [40];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = FUN_147029e60(param_2);
  iVar3 = FUN_147029a3c(uVar4);
  FUN_147029a40(uVar4,&local_50);
  plVar6 = (longlong *)0x0;
  plVar7 = local_50;
  if (((ulonglong)local_50 & 1) != 0) {
    plVar7 = plVar6;
  }
  lVar1 = plVar7[1];
  lVar5 = FUN_144a4a07e();
  if (lVar1 == lVar5) {
    if (iVar3 == -1) {
      iVar3 = 0;
    }
    cVar2 = FUN_1476ffc84(plVar7);
    if (cVar2 != '\0') {
      if (iVar3 < (int)plVar7[6]) {
        cVar2 = (**(code **)(*plVar7 + 0x88))(plVar7);
        if (cVar2 == '\0') {
          plVar6 = (longlong *)
                   ((longlong)iVar3 * (longlong)*(int *)((longlong)plVar7 + 0x34) +
                   param_1 + *(int *)((longlong)plVar7 + 0x44));
          if (plVar6 != (longlong *)0x0) {
            FUN_147029e70(param_2,plVar6);
            FUN_147029a73(param_3,param_2,plVar6);
          }
        }
        else {
          (**(code **)(*plVar7 + 0xa0))(plVar7,param_1,param_3);
        }
        *param_4 = plVar7;
        plVar6 = (longlong *)CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
      }
      else {
        plVar6 = (longlong *)0x0;
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return (ulonglong)plVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147700486 FUN_147700486 body=127 status=ok
// SIG undefined FUN_147700486(void)

void FUN_147700486(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 auStack_68 [40];
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_147029ea6(param_2);
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  local_40 = &PTR_FUN_14a508f30;
  local_38 = param_3;
  local_30 = param_4;
  FUN_147029a0b(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147700592 FUN_147700592 body=290 status=ok
// SIG undefined FUN_147700592(void)

undefined8 FUN_147700592(longlong *param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_2 + 0xb4) == '\x01') {
    if (param_2 == 0) {
      local_40 = 0;
    }
    else {
      local_40 = *(longlong *)(param_2 + 0x50);
    }
    local_38 = 0xffffffff;
    local_34 = 0x101;
    local_32 = 0;
    local_48 = param_2;
    FUN_144a2daf0(&local_48);
    if (local_40 != 0) {
      do {
        if ((char)*(ulonglong *)(local_40 + 0x38) < '\0') {
          if ((*(ulonglong *)(local_40 + 0x38) & 0x500) != 0) {
            lVar5 = *(longlong *)(local_40 + 8);
            lVar3 = FUN_144a49f24();
            if (lVar5 == lVar3) {
              cVar2 = FUN_147700848();
              if (cVar2 != '\0') {
                uVar1 = *(uint *)((longlong)param_1 + 0xc);
                if ((int)uVar1 < DAT_14c9647dc) {
                  lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
                }
                else {
                  lVar5 = 0;
                }
                if ((*(uint *)(lVar5 + 8) >> 0x1c & 1) == 0) {
                  (**(code **)(*param_1 + 0x248))(param_1,param_2,param_3);
                  uVar4 = 1;
                  goto LAB_147700624;
                }
              }
            }
          }
          break;
        }
        local_40 = *(longlong *)(local_40 + 0x18);
        FUN_144a2daf0(&local_48);
      } while (local_40 != 0);
    }
  }
  uVar4 = 0;
LAB_147700624:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477006b6 FUN_1477006b6 body=401 status=ok
// SIG undefined FUN_1477006b6(void)

ulonglong FUN_1477006b6(undefined8 param_1,void *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  void *_Src;
  undefined7 uVar7;
  ulonglong uVar6;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = FUN_147029e60();
  FUN_147029a40(uVar4,&local_40);
  uVar6 = 0;
  if ((local_40 & 1) == 0) {
    uVar6 = local_40;
  }
  *param_3 = uVar6;
  uVar7 = (undefined7)((ulonglong)param_1 >> 8);
  if (uVar6 == 0) {
LAB_1477007af:
    lVar8 = *(longlong *)(*param_3 + 8);
    lVar5 = FUN_144a49f24();
    if (lVar8 == lVar5) {
      cVar2 = (**(code **)(*(longlong *)*param_3 + 0x88))();
      if (cVar2 == '\0') {
        uVar4 = FUN_147029ecc(param_1);
        FUN_147029a73(param_2,param_1,uVar4);
      }
      else {
        plVar1 = (longlong *)*param_3;
        uVar4 = FUN_147029a36(param_1);
        (**(code **)(*plVar1 + 0xa0))(plVar1,uVar4,param_2);
      }
      uVar6 = CONCAT71(uVar7,1);
      goto LAB_1477007c2;
    }
  }
  else {
    lVar8 = *(longlong *)(uVar6 + 8);
    lVar5 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar5 + 8) == 0) {
      bVar9 = lVar8 != 0;
      if (lVar8 != lVar5 && bVar9) {
        do {
          lVar8 = *(longlong *)(lVar8 + 0x30);
          bVar9 = lVar8 != 0;
          if (lVar8 == lVar5) break;
        } while (lVar8 != 0);
      }
      if (bVar9) goto LAB_147700757;
      goto LAB_1477007af;
    }
    if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar5 + 8)) == 0) goto LAB_1477007af;
LAB_147700757:
    iVar3 = FUN_147029a3c(uVar4);
    if (iVar3 == -1) goto LAB_1477007af;
    lVar8 = *(longlong *)(*(longlong *)(uVar6 + 0x78) + 8);
    lVar5 = FUN_144a49f24();
    if (lVar8 == lVar5) {
      plVar1 = *(longlong **)(uVar6 + 0x78);
      _Src = (void *)FUN_147029ecc(param_1);
      uVar6 = CONCAT71(uVar7,1);
      if (_Src != param_2) {
        if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
          (**(code **)(*plVar1 + 0x100))(plVar1,param_2,_Src,1);
        }
        else {
          memcpy(param_2,_Src,(longlong)*(int *)((longlong)plVar1 + 0x34));
        }
      }
      goto LAB_1477007c2;
    }
  }
  uVar6 = 0;
LAB_1477007c2:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 147700848 FUN_147700848 body=113 status=ok
// SIG undefined FUN_147700848(void)

bool FUN_147700848(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if (param_1 != 0) {
    lVar3 = *(longlong *)(param_1 + 8);
    lVar2 = FUN_14475a8dc();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
      iVar1 = 1;
      if (bVar4) goto LAB_147700878;
    }
    else {
      iVar1 = 1;
      if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) goto LAB_147700878;
    }
  }
  iVar1 = 0x10;
LAB_147700878:
  return *(int *)(param_1 + 0x34) == iVar1;
}



// FUNCTION 1477008ba FUN_1477008ba body=29 status=ok
// SIG undefined FUN_1477008ba(void)

undefined8 FUN_1477008ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147700904 FUN_147700904 body=665 status=ok
// SIG undefined FUN_147700904(void)

undefined8 FUN_147700904(longlong param_1,undefined8 param_2,longlong *param_3,void *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined7 uVar11;
  void *pvVar10;
  ulonglong *puVar12;
  ulonglong uVar13;
  byte unaff_BPL;
  void *pvVar14;
  undefined1 auStack_88 [40];
  void *local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar7 = FUN_147029e60(param_2);
  uVar6 = FUN_147029a3c(uVar7);
  FUN_147029a40(uVar7,&local_50);
  uVar7 = FUN_1446e6bbc();
  bVar4 = FUN_1400164de(&local_50,uVar7);
  if ((local_50 != (longlong *)0x0 & bVar4) != 1) {
    uVar7 = FUN_140010bca();
    bVar4 = FUN_144affa3a(&local_50,uVar7);
    uVar13 = (ulonglong)local_50 & 0xfffffffffffffffe;
    if ((uVar13 != 0 & bVar4) == 1) {
      FUN_147029e76(param_2,uVar13);
      uVar7 = FUN_147700592(param_1,uVar13,param_4);
    }
    else {
      uVar7 = FUN_1446ddbd2();
      cVar5 = FUN_1400164de(&local_50,uVar7);
      bVar4 = 0;
      uVar11 = 0;
      if ((cVar5 == '\0') || (local_50 == (longlong *)0x0)) goto LAB_147700a3c;
      uVar7 = FUN_147700b9e(param_1,param_2,param_4,param_3);
    }
    unaff_BPL = (byte)uVar7;
    uVar11 = (undefined7)((ulonglong)uVar7 >> 8);
    bVar4 = 1;
    goto LAB_147700a3c;
  }
  local_60 = param_4;
  if (uVar6 == 0xffffffff) {
    lVar2 = local_50[1];
    lVar9 = FUN_144a49f24();
    if ((lVar2 != lVar9) || (cVar5 = FUN_147700848(local_50), cVar5 == '\0')) {
      bVar4 = 0;
      uVar11 = 0;
      goto LAB_147700a3c;
    }
    pvVar14 = (void *)(param_1 + *(int *)((longlong)local_50 + 0x44));
    if (pvVar14 == (void *)0x0) {
      bVar4 = 0;
      uVar11 = 0;
    }
    else {
      pvVar10 = (void *)FUN_147029e70(param_2,pvVar14);
      if (pvVar14 != local_60) {
        if ((*(byte *)((longlong)local_50 + 0x3b) & 0x40) == 0) {
          pvVar10 = (void *)(**(code **)(*local_50 + 0x100))(local_50,local_60,pvVar14,1);
        }
        else {
          pvVar10 = memcpy(local_60,pvVar14,(longlong)*(int *)((longlong)local_50 + 0x34));
        }
      }
      *param_3 = (longlong)local_50;
LAB_147700b65:
      uVar11 = (undefined7)((ulonglong)pvVar10 >> 8);
      bVar4 = 1;
    }
    unaff_BPL = 1;
  }
  else {
    iVar1 = *(int *)((longlong)local_50 + 0x44);
    bVar4 = *(byte *)(local_50 + 0xe);
    (**(code **)(*(longlong *)local_50[0xf] + 0x178))();
    unaff_BPL = 1;
    if ((-1 < (int)uVar6) &&
       (puVar12 = (ulonglong *)(param_1 + iVar1), (int)uVar6 < (int)puVar12[1])) {
      local_58 = (longlong)*(int *)(local_50[0xf] + 0x34);
      lVar2 = *(longlong *)(local_50[0xf] + 8);
      lVar8 = FUN_144a49f24();
      lVar9 = local_58;
      if ((lVar2 == lVar8) &&
         ((cVar5 = FUN_147700848(local_50[0xf]), cVar5 != '\0' && ((int)puVar12[1] != 0)))) {
        if ((bVar4 & 1) == 0) {
          uVar13 = *puVar12;
        }
        else {
          uVar13 = *puVar12;
          if ((uVar13 & 1) != 0) {
            uVar13 = (longlong)puVar12 + ((longlong)uVar13 >> 0x18);
          }
        }
        pvVar14 = (void *)(lVar9 * (ulonglong)uVar6 + uVar13);
        if (pvVar14 != (void *)0x0) {
          FUN_147029e70(param_2,pvVar14);
          if (pvVar14 != local_60) {
            plVar3 = (longlong *)local_50[0xf];
            if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar3 + 0x100))(plVar3,local_60,pvVar14,1);
            }
            else {
              memcpy(local_60,pvVar14,(longlong)*(int *)((longlong)plVar3 + 0x34));
            }
          }
          pvVar10 = (void *)local_50[0xf];
          *param_3 = (longlong)pvVar10;
          goto LAB_147700b65;
        }
      }
    }
    bVar4 = 0;
    uVar11 = 0;
  }
LAB_147700a3c:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar11,bVar4 & unaff_BPL);
}



// FUNCTION 147700b9e FUN_147700b9e body=273 status=ok
// SIG undefined FUN_147700b9e(void)

ulonglong FUN_147700b9e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_78 [40];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = FUN_147029e60(param_2);
  iVar3 = FUN_147029a3c(uVar4);
  FUN_147029a40(uVar4,&local_50);
  plVar6 = (longlong *)0x0;
  plVar7 = local_50;
  if (((ulonglong)local_50 & 1) != 0) {
    plVar7 = plVar6;
  }
  lVar1 = plVar7[1];
  lVar5 = FUN_144a49f24();
  if (lVar1 == lVar5) {
    if (iVar3 == -1) {
      iVar3 = 0;
    }
    cVar2 = FUN_147700848(plVar7);
    if (cVar2 != '\0') {
      if (iVar3 < (int)plVar7[6]) {
        cVar2 = (**(code **)(*plVar7 + 0x88))(plVar7);
        if (cVar2 == '\0') {
          plVar6 = (longlong *)
                   ((longlong)iVar3 * (longlong)*(int *)((longlong)plVar7 + 0x34) +
                   param_1 + *(int *)((longlong)plVar7 + 0x44));
          if (plVar6 != (longlong *)0x0) {
            FUN_147029e70(param_2,plVar6);
            FUN_147029a73(param_3,param_2,plVar6);
          }
        }
        else {
          (**(code **)(*plVar7 + 0xa0))(plVar7,param_1,param_3);
        }
        *param_4 = plVar7;
        plVar6 = (longlong *)CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
      }
      else {
        plVar6 = (longlong *)0x0;
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return (ulonglong)plVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147700cb0 FUN_147700cb0 body=646 status=ok
// SIG undefined FUN_147700cb0(void)

undefined8 FUN_147700cb0(longlong param_1,undefined8 param_2,longlong *param_3,void *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined7 uVar12;
  longlong lVar10;
  void *pvVar11;
  ulonglong *puVar13;
  ulonglong uVar14;
  void *pvVar15;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar8 = FUN_147029e60(param_2);
  uVar7 = FUN_147029a3c(uVar8);
  FUN_147029a40(uVar8,&local_50);
  uVar8 = FUN_1446e6bbc();
  bVar5 = FUN_1400164de(&local_50,uVar8);
  if ((local_50 != (longlong *)0x0 & bVar5) != 1) {
    uVar8 = FUN_140010bca();
    bVar5 = FUN_144affa3a(&local_50,uVar8);
    if ((((ulonglong)local_50 & 0xfffffffffffffffe) != 0 & bVar5) == 1) {
      uVar8 = FUN_147029e76(param_2);
      bVar5 = 1;
      param_3 = (longlong *)0x0;
      uVar12 = (int7)((ulonglong)uVar8 >> 8);
    }
    else {
      uVar8 = FUN_1446ddbd2();
      cVar6 = FUN_1400164de(&local_50,uVar8);
      bVar5 = 0;
      uVar12 = 0;
      if ((cVar6 != '\0') && (uVar12 = 0, local_50 != (longlong *)0x0)) {
        uVar14 = FUN_147700f38(param_1,param_2,param_4,param_3);
        param_3 = (longlong *)(uVar14 & 0xffffffff);
        uVar12 = (undefined7)(uVar14 >> 8);
        bVar5 = 1;
      }
    }
    goto LAB_147700df7;
  }
  if (uVar7 == 0xffffffff) {
    lVar2 = local_50[1];
    lVar10 = FUN_144a49f24();
    if ((lVar2 != lVar10) || (cVar6 = FUN_147700848(local_50), cVar6 == '\0')) {
      bVar5 = 0;
      uVar12 = 0;
      goto LAB_147700df7;
    }
    pvVar15 = (void *)(param_1 + *(int *)((longlong)local_50 + 0x44));
    if (pvVar15 == (void *)0x0) {
      bVar5 = 0;
      uVar12 = 0;
    }
    else {
      pvVar11 = (void *)FUN_147029e70(param_2,pvVar15);
      if (pvVar15 != param_4) {
        if ((*(byte *)((longlong)local_50 + 0x3b) & 0x40) == 0) {
          pvVar11 = (void *)(**(code **)(*local_50 + 0x100))(local_50,param_4,pvVar15,1);
        }
        else {
          pvVar11 = memcpy(param_4,pvVar15,(longlong)*(int *)((longlong)local_50 + 0x34));
        }
      }
      *param_3 = (longlong)local_50;
LAB_147700f00:
      uVar12 = (undefined7)((ulonglong)pvVar11 >> 8);
      bVar5 = 1;
    }
    param_3 = (longlong *)&DAT_00000001;
  }
  else {
    iVar1 = *(int *)((longlong)local_50 + 0x44);
    bVar5 = *(byte *)(local_50 + 0xe);
    local_58 = param_3;
    (**(code **)(*(longlong *)local_50[0xf] + 0x178))();
    param_3 = (longlong *)&DAT_00000001;
    if ((-1 < (int)uVar7) &&
       (puVar13 = (ulonglong *)(param_1 + iVar1), (int)uVar7 < (int)puVar13[1])) {
      local_60 = (longlong)*(int *)(local_50[0xf] + 0x34);
      lVar2 = *(longlong *)(local_50[0xf] + 8);
      lVar9 = FUN_144a49f24();
      lVar10 = local_60;
      if ((lVar2 == lVar9) &&
         ((cVar6 = FUN_147700848(local_50[0xf]), cVar6 != '\0' && ((int)puVar13[1] != 0)))) {
        if ((bVar5 & 1) == 0) {
          uVar14 = *puVar13;
        }
        else {
          uVar14 = *puVar13;
          if ((uVar14 & 1) != 0) {
            uVar14 = (longlong)puVar13 + ((longlong)uVar14 >> 0x18);
          }
        }
        pvVar15 = (void *)(lVar10 * (ulonglong)uVar7 + uVar14);
        if (pvVar15 != (void *)0x0) {
          FUN_147029e70(param_2,pvVar15);
          plVar4 = local_58;
          if (pvVar15 != param_4) {
            plVar3 = (longlong *)local_50[0xf];
            if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar3 + 0x100))(plVar3,param_4,pvVar15,1);
            }
            else {
              memcpy(param_4,pvVar15,(longlong)*(int *)((longlong)plVar3 + 0x34));
            }
          }
          pvVar11 = (void *)local_50[0xf];
          *plVar4 = (longlong)pvVar11;
          goto LAB_147700f00;
        }
      }
    }
    bVar5 = 0;
    uVar12 = 0;
  }
LAB_147700df7:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar12,bVar5 & (byte)param_3);
}



// FUNCTION 147700f38 FUN_147700f38 body=273 status=ok
// SIG undefined FUN_147700f38(void)

ulonglong FUN_147700f38(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_78 [40];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = FUN_147029e60(param_2);
  iVar3 = FUN_147029a3c(uVar4);
  FUN_147029a40(uVar4,&local_50);
  plVar6 = (longlong *)0x0;
  plVar7 = local_50;
  if (((ulonglong)local_50 & 1) != 0) {
    plVar7 = plVar6;
  }
  lVar1 = plVar7[1];
  lVar5 = FUN_144a49f24();
  if (lVar1 == lVar5) {
    if (iVar3 == -1) {
      iVar3 = 0;
    }
    cVar2 = FUN_147700848(plVar7);
    if (cVar2 != '\0') {
      if (iVar3 < (int)plVar7[6]) {
        cVar2 = (**(code **)(*plVar7 + 0x88))(plVar7);
        if (cVar2 == '\0') {
          plVar6 = (longlong *)
                   ((longlong)iVar3 * (longlong)*(int *)((longlong)plVar7 + 0x34) +
                   param_1 + *(int *)((longlong)plVar7 + 0x44));
          if (plVar6 != (longlong *)0x0) {
            FUN_147029e70(param_2,plVar6);
            FUN_147029a73(param_3,param_2,plVar6);
          }
        }
        else {
          (**(code **)(*plVar7 + 0xa0))(plVar7,param_1,param_3);
        }
        *param_4 = plVar7;
        plVar6 = (longlong *)CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
      }
      else {
        plVar6 = (longlong *)0x0;
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return (ulonglong)plVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14770104a FUN_14770104a body=29 status=ok
// SIG undefined FUN_14770104a(void)

undefined8 FUN_14770104a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147701082 FUN_147701082 body=29 status=ok
// SIG undefined FUN_147701082(void)

bool FUN_147701082(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1477010a0 FUN_1477010a0 body=26 status=ok
// SIG undefined FUN_1477010a0(void)

bool FUN_1477010a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1477010ba FUN_1477010ba body=24 status=ok
// SIG undefined FUN_1477010ba(void)

bool FUN_1477010ba(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1477010d2 FUN_1477010d2 body=93 status=ok
// SIG undefined FUN_1477010d2(void)

void FUN_1477010d2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a508f50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147701130 FUN_147701130 body=93 status=ok
// SIG undefined FUN_147701130(void)

void FUN_147701130(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a508f50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14770118e FUN_14770118e body=126 status=ok
// SIG undefined FUN_14770118e(void)

void FUN_14770118e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f2a800;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a508f50;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001477011fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}


