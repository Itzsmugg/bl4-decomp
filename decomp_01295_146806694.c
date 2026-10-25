// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146806694 FUN_146806694 body=95 status=ok
// SIG undefined FUN_146806694(void)

undefined8 * FUN_146806694(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((*(char *)(param_1 + 2) == '\x01') &&
     (plVar3 = (longlong *)param_1[1], plVar3 != (longlong *)0x0)) {
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
  *param_1 = *param_2;
  lVar4 = param_2[1];
  param_1[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 2) = 1;
  return param_1;
}



// FUNCTION 1468066f4 FUN_1468066f4 body=704 status=ok
// SIG undefined FUN_1468066f4(void)

void FUN_1468066f4(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  longlong *local_b0;
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
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_14481578e(param_2,0);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  uVar4 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar4 != 0) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_1400bac10(&local_98,uVar4);
    iVar3 = 1;
    if (3 < uVar4) {
      uVar4 = (uVar4 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar3)) {
      local_50 = iVar3;
      FUN_144a56d22();
    }
  }
  iVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
    FUN_14481578e(param_2);
  }
  local_b0 = param_1 + 2;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_b8);
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = param_1;
  if (iStack_a4 < (int)local_b0[3]) {
    do {
      lVar1 = *local_e0;
      lVar5 = (longlong)iStack_c4;
      if ((int)uStack_90 != local_64) {
        uVar4 = *(uint *)(lVar1 + lVar5 * 0x20);
        puVar2 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar2 = local_60;
        }
        for (iVar3 = *(int *)(puVar2 + (ulonglong)(local_50 - 1U & uVar4) * 4); iVar3 != -1;
            iVar3 = *(int *)(local_98 + (longlong)iVar3 * 0xc + 4)) {
          if (*(uint *)(local_98 + (longlong)iVar3 * 0xc) == uVar4) goto LAB_146806896;
        }
      }
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1446f48e2(param_2,iVar3);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar3 * 4) = *(undefined4 *)(lVar1 + lVar5 * 0x20);
      FUN_1447cbafe(&local_98,&local_b8,(longlong)iStack_c4 * 0x20 + *local_e0,0);
LAB_146806896:
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (iStack_c4 < (int)local_d0[3]);
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_98);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468069b6 FUN_1468069b6 body=48 status=ok
// SIG undefined FUN_1468069b6(void)

void FUN_1468069b6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x30,8);
  }
  return;
}



// FUNCTION 1468069e6 FUN_1468069e6 body=262 status=ok
// SIG undefined FUN_1468069e6(void)

longlong FUN_1468069e6(char param_1)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = 0x100000000;
  local_38 = &DAT_14c866cb0;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if (DAT_14c866cc8 != 0) {
    FUN_1449c0562(&local_40);
  }
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_60 = local_40;
  local_58 = local_38;
  local_68 = &DAT_14c866ca0;
  if (iStack_2c < *(int *)(local_38 + 0x18)) {
    lVar1 = 0;
    do {
      if (*(char *)(*local_68 + 2 + (longlong)iStack_4c * 0xc) == param_1) {
        lVar1 = *local_68 + (longlong)iStack_4c * 0xc;
        break;
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < *(int *)(local_58 + 0x18));
  }
  else {
    lVar1 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 146806aee FUN_146806aee body=404 status=ok
// SIG undefined FUN_146806aee(void)

undefined4 *
FUN_146806aee(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined2 *puVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_5c;
  undefined4 local_58 [2];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140d69788(param_1,local_58);
  puVar1 = (undefined8 *)*param_3;
  lVar8 = param_3[1];
  *local_50 = *puVar1;
  iVar7 = 0;
  *puVar1 = 0;
  *(undefined4 *)(local_50 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_50 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  FUN_140d692d6(local_50 + 2,lVar8);
  FUN_140d69258(local_50 + 0xc,lVar8 + 0x50);
  *(undefined1 *)(local_50 + 0x16) = *(undefined1 *)(lVar8 + 0xa0);
  *(undefined4 *)(local_50 + 0x17) = 0xffffffff;
  local_5c = local_58[0];
  if (*(int *)(local_50 + 1) == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*local_50;
    iVar7 = *(int *)(local_50 + 1) + -1;
  }
  uVar3 = FUN_144a49b4a(iVar7,puVar6);
  local_68 = param_4;
  cVar2 = FUN_140d69354(param_1,uVar3,local_50,&local_5c);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_50 + 0xbc) = uVar3;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 0x17) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_5c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_140d69a94(param_1);
    }
  }
  *param_2 = local_5c;
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146806c84 FUN_146806c84 body=38 status=ok
// SIG undefined FUN_146806c84(void)

undefined8 FUN_146806c84(undefined8 param_1,int param_2)

{
  FUN_144a7fc42();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146806cbc FUN_146806cbc body=129 status=ok
// SIG undefined FUN_146806cbc(void)

longlong FUN_146806cbc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_146806d3d();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_140968080(param_2);
    }
  }
  return param_1;
}



// FUNCTION 146806d3d FUN_146806d3d body=777 status=ok
// SIG undefined FUN_146806d3d(void)

longlong * FUN_146806d3d(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  int local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 5,(longlong)*(int *)((longlong)param_2 + 0xc) << 5
            );
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar4 = local_60._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_64 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar2 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar2 + 1;
    if ((int *)puVar2[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_64,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_64);
      }
    }
    else {
      local_64 = *(int *)*puVar2;
      *puVar2 = (ulonglong)piVar1;
    }
    local_58 = param_2 + 2;
    local_60 = (undefined4 *)&DAT_100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_88 = local_60;
    local_80 = local_58;
    local_78 = local_50;
    uVar5 = local_78;
    local_70 = local_48;
    local_6c = local_44;
    local_78._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_90 = param_2;
    if (local_78._4_4_ < (int)local_58[3]) {
      iVar7 = local_78._4_4_;
      local_78 = uVar5;
      do {
        puVar6 = (undefined4 *)((longlong)iVar7 * 0x20 + *local_90);
        puVar3 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar6,4);
          }
          else {
            thunk_FUN_14572512c(param_1,puVar6);
          }
        }
        else {
          *puVar6 = *puVar3;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        FUN_14021219d(param_1,puVar6 + 2);
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar7 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  else {
    local_60 = (undefined4 *)((ulonglong)local_60._4_4_ << 0x20);
    puVar2 = (ulonglong *)param_1[1];
    puVar3 = (undefined4 *)*puVar2 + 1;
    if ((undefined4 *)puVar2[1] < puVar3) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_60,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_60);
      }
    }
    else {
      local_60 = (undefined4 *)CONCAT44(uVar4,*(undefined4 *)*puVar2);
      *puVar2 = (ulonglong)puVar3;
    }
    FUN_140926656(param_2,(ulonglong)local_60 & 0xffffffff);
    uVar5 = local_78;
    if (0 < (int)local_60) {
      iVar7 = 0;
      do {
        FUN_140967e96(param_2,&local_90);
        puVar6 = local_88;
        *local_88 = 0;
        *(undefined8 *)(local_88 + 2) = 0;
        *(undefined8 *)(local_88 + 4) = 0;
        local_88[6] = 0xffffffff;
        puVar3 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,local_88,4);
          }
          else {
            thunk_FUN_14572512c(param_1,local_88);
          }
        }
        else {
          *local_88 = *puVar3;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        FUN_14021219d(param_1,puVar6 + 2);
        iVar7 = iVar7 + 1;
        uVar5 = local_78;
      } while (iVar7 < (int)local_60);
    }
  }
  local_78 = uVar5;
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146807048 FUN_146807048 body=128 status=ok
// SIG undefined FUN_146807048(void)

void FUN_146807048(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14c866c50;
  if (DAT_14c866c84 != 0) {
    *(int *)(DAT_14c866c50 + (longlong)DAT_14c866c80 * 0x68) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x68) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14c866c84) {
    iVar4 = DAT_14c866c80;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x68) = iVar4;
  DAT_14c866c84 = DAT_14c866c84 + 1;
  puVar3 = &DAT_14c866c60;
  if (DAT_14c866c70 != (undefined *)0x0) {
    puVar3 = DAT_14c866c70;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14c866c80 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 1468070c8 FUN_1468070c8 body=122 status=ok
// SIG undefined FUN_1468070c8(void)

longlong FUN_1468070c8(longlong param_1,longlong param_2)

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
    FUN_146807142(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 146807142 FUN_146807142 body=202 status=ok
// SIG undefined FUN_146807142(void)

undefined8 * FUN_146807142(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140926656(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)*param_2;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
        }
        else {
          FUN_14680720c(puVar6,puVar4);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 8;
        puVar6 = puVar6 + 8;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 14680720c FUN_14680720c body=111 status=ok
// SIG undefined FUN_14680720c(void)

undefined4 * FUN_14680720c(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = param_2[4];
  _Src = *(void **)(param_2 + 2);
  param_1[4] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[5] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy(*(void **)(param_1 + 2),_Src,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  return param_1;
}



// FUNCTION 14680727c FUN_14680727c body=38 status=ok
// SIG undefined FUN_14680727c(void)

undefined8 FUN_14680727c(undefined8 param_1,int param_2)

{
  FUN_1410c966c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468072a2 FUN_1468072a2 body=358 status=ok
// SIG undefined FUN_1468072a2(void)

undefined8 * FUN_1468072a2(undefined8 *param_1,undefined8 param_2,char param_3)

{
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 local_98;
  undefined **local_88;
  undefined8 *local_80;
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  undefined8 *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_144869430();
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(byte *)((longlong)param_1 + 0x2b) = *(byte *)((longlong)param_1 + 0x2b) | 8;
  *param_1 = &PTR_FUN_149e2af00;
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
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  FUN_1468052db(param_1,param_2);
  if (param_3 != '\0') {
    local_58 = 0;
    local_48 = &PTR_LAB_149e2b160;
    local_68 = &LAB_1468078bc;
    local_40 = param_1;
    FUN_146803a4a(param_2);
    local_98 = 0;
    local_88 = &PTR_LAB_149e2b180;
    local_a8 = &LAB_146808536;
    local_80 = param_1;
    FUN_146803b88(param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14680740a FUN_14680740a body=156 status=ok
// SIG undefined FUN_14680740a(void)

void FUN_14680740a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149e2af00;
  *(undefined4 *)(param_1 + 0x31) = 0;
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  FUN_146808936(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x27) = 0;
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_146808936(param_1 + 0x1e);
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_146808936(param_1 + 0x14);
  FUN_144a7fc42(param_1);
  return;
}



// FUNCTION 1468074a6 FUN_1468074a6 body=63 status=ok
// SIG undefined FUN_1468074a6(void)

void FUN_1468074a6(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1468074e6(param_1 + 3);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1468074e6 FUN_1468074e6 body=54 status=ok
// SIG undefined FUN_1468074e6(void)

void FUN_1468074e6(longlong *param_1)

{
  FUN_14680751c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14680751c FUN_14680751c body=356 status=ok
// SIG undefined FUN_14680751c(void)

void FUN_14680751c(longlong *param_1,int param_2)

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
      FUN_140b7cb8c(*local_70 + (longlong)iStack_54 * 0xb8 + 8);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_14018c050(param_1,param_2);
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



// FUNCTION 14680768a FUN_14680768a body=68 status=ok
// SIG undefined FUN_14680768a(void)

void FUN_14680768a(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x210,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_149e2aeb0;
  memcpy(puVar1 + 1,(void *)(param_1 + 8),0x208);
  return;
}



// FUNCTION 1468076d4 FUN_1468076d4 body=29 status=ok
// SIG undefined FUN_1468076d4(void)

void FUN_1468076d4(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1468076f2 FUN_1468076f2 body=29 status=ok
// SIG undefined FUN_1468076f2(void)

undefined8 FUN_1468076f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146807710 FUN_146807710 body=208 status=ok
// SIG undefined FUN_146807710(void)

void FUN_146807710(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *local_68;
  ulonglong *local_60;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *param_1;
  FUN_1446ddc76(&local_48,"HotfixTest",1);
  FUN_140056680(local_40,param_1 + 1);
  local_60 = &local_30;
  local_68 = local_40;
  FUN_141469cae(&local_58);
  local_78 = param_2;
  FUN_1427744f2(uVar1,&local_58,local_48,0x50);
  FUN_1447a1747(local_58,local_50);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468077e2 FUN_1468077e2 body=97 status=ok
// SIG undefined FUN_1468077e2(void)

void FUN_1468077e2(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446ddc76(&local_20,"HotfixTest",1);
  FUN_146805bfa(DAT_14c872ce0,local_20,param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146807878 FUN_146807878 body=29 status=ok
// SIG undefined FUN_146807878(void)

undefined8 FUN_146807878(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146807896 FUN_146807896 body=38 status=ok
// SIG undefined FUN_146807896(void)

undefined8 FUN_146807896(undefined8 param_1,int param_2)

{
  FUN_14680740a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468078f8 FUN_1468078f8 body=29 status=ok
// SIG undefined FUN_1468078f8(void)

undefined8 FUN_1468078f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146807916 FUN_146807916 body=998 status=ok
// SIG undefined FUN_146807916(void)

void FUN_146807916(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  longlong lVar9;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_f8 [36];
  int local_d4;
  longlong local_d0;
  longlong *local_c8;
  longlong local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  uint local_a0;
  uint uStack_9c;
  undefined4 local_98;
  undefined4 local_94;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  uint local_70;
  uint local_6c;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  uint uStack_54;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*param_2;
  }
  iVar4 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  uVar5 = FUN_144a49b4a(iVar4,puVar8);
  uVar6 = FUN_146807d7e(param_1 + 0xa0,uVar5,param_2);
  FUN_146805453(uVar6,param_3);
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
  plVar11 = param_3 + 2;
  local_b8 = (longlong *)&DAT_100000000;
  local_a8 = 0xffffffff;
  local_a0 = 0;
  local_b0 = plVar11;
  if ((int)param_3[5] != 0) {
    FUN_1449c0562(&local_b8);
  }
  local_78 = local_a8;
  local_70 = local_a0;
  local_6c = uStack_9c;
  local_88 = local_b8;
  local_80 = local_b0;
  local_90 = param_3;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
  iVar2 = (int)param_3[5];
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
  local_d4 = iVar2;
  if ((local_78._4_4_ != iVar2) || (local_80 != plVar11)) {
    local_d0 = param_1 + 0xf0;
    local_c0 = param_1 + 0x140;
    plVar7 = param_3;
    local_c8 = plVar11;
    do {
      lVar3 = *plVar7;
      lVar9 = (longlong)local_78._4_4_ * 0xc0;
      iVar2 = *(int *)(lVar3 + 8 + lVar9);
      puVar8 = &DAT_149dfb77a;
      if (iVar2 != 0) {
        puVar8 = *(undefined2 **)(lVar3 + lVar9);
      }
      lVar1 = lVar3 + lVar9;
      iVar4 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar4 = 0;
      }
      uVar5 = FUN_144a49b4a(iVar4,puVar8);
      uVar6 = FUN_146807d7e(local_d0,uVar5,lVar1);
      plVar11 = (longlong *)(lVar3 + lVar9 + 0x10);
      FUN_14680a518(uVar6,plVar11);
      FUN_1467dbe7c(uVar6,lVar3 + lVar9 + 0x60);
      iVar2 = *(int *)(lVar3 + lVar9 + 8);
      puVar8 = &DAT_149dfb77a;
      if (iVar2 != 0) {
        puVar8 = *(undefined2 **)(lVar3 + lVar9);
      }
      iVar4 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar4 = 0;
      }
      uVar5 = FUN_144a49b4a(iVar4,puVar8);
      uVar6 = FUN_146807d7e(local_c0,uVar5,lVar1);
      lVar12 = lVar3 + lVar9 + 0x20;
      local_68 = (longlong *)&DAT_100000000;
      local_58 = 0xffffffff;
      uStack_54 = 0;
      local_50 = 0;
      local_60 = lVar12;
      if (*(int *)(lVar3 + lVar9 + 0x38) != 0) {
        FUN_1449c0562(&local_68);
      }
      local_a0 = local_58;
      uStack_9c = uStack_54;
      local_98 = local_50;
      local_94 = local_4c;
      local_b0 = local_68;
      local_a8 = local_60;
      uVar10 = *(uint *)(lVar1 + 0x38);
      local_68 = (longlong *)CONCAT44(1 << ((byte)uVar10 & 0x1f),(int)uVar10 >> 5);
      _local_58 = CONCAT44(uVar10,-1 << ((byte)uVar10 & 0x1f));
      local_50 = uVar10 & 0xffffffe0;
      local_b8 = plVar11;
      local_60 = lVar12;
      if (*(uint *)(lVar1 + 0x38) != uVar10) {
        FUN_1449c0562(&local_68);
        uVar10 = uStack_54;
      }
      lVar3 = local_60;
      if ((local_b8 != plVar11 || local_a8 != local_60) || uStack_9c != uVar10) {
        do {
          FUN_146807cfd(uVar6,*local_b8 + (longlong)(int)uStack_9c * 0x40 + 8);
          local_a0 = local_a0 & ~local_b0._4_4_;
          FUN_1449c0562(&local_b0);
        } while (local_b8 != plVar11 || (local_a8 != lVar3 || uStack_9c != uVar10));
      }
      local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
      FUN_1449c0562(&local_88);
      plVar7 = local_90;
    } while (local_90 != param_3 || (local_80 != local_c8 || local_78._4_4_ != local_d4));
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146807cfd FUN_146807cfd body=128 status=ok
// SIG undefined FUN_146807cfd(void)

undefined8 FUN_146807cfd(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_1e8 [40];
  undefined8 local_1c0;
  undefined1 local_1b8 [400];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  FUN_144aff0aa(local_1b8,param_1);
  FUN_144aff0c8(local_1b8,&local_1c0);
  FUN_1468084d2(local_1c0,param_2);
  FUN_144aff0d4(local_1b8);
  if ((local_28 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146807d7e FUN_146807d7e body=139 status=ok
// SIG undefined FUN_146807d7e(void)

longlong FUN_146807d7e(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_146807e0a();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0xb8;
    if (lVar3 + lVar2 != 0) goto LAB_146807dba;
  }
  local_30 = param_3;
  FUN_146807edc(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0xb8;
LAB_146807dba:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146807e0a FUN_146807e0a body=209 status=ok
// SIG undefined FUN_146807e0a(void)

int FUN_146807e0a(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_146807e54:
      lVar10 = (longlong)iVar1 * 0xb8;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_146807ed0;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_146807ed0;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_146807ebe;
    }
  }
  return -1;
LAB_146807ed0:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_146807ebe:
  iVar1 = *(int *)(lVar4 + 0xb0 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_146807e54;
}



// FUNCTION 146807edc FUN_146807edc body=281 status=ok
// SIG undefined FUN_146807edc(void)

undefined4 * FUN_146807edc(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146807ff6(param_1,local_48);
  FUN_14680816e(param_4,local_40);
  *(undefined4 *)(local_40 + 0xb0) = 0xffffffff;
  cVar1 = FUN_1468080e2(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0xb4) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xb0) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_1468082ec(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146807ff6 FUN_146807ff6 body=235 status=ok
// SIG undefined FUN_146807ff6(void)

int * FUN_146807ff6(longlong *param_1,int *param_2)

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
      FUN_140d69e26(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0xb8);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0xb8) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0xb8 + *param_1;
  return param_2;
}



// FUNCTION 1468080e2 FUN_1468080e2 body=139 status=ok
// SIG undefined FUN_1468080e2(void)

undefined8 FUN_1468080e2(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar3 = FUN_146807e0a(), iVar3 != -1)) {
    lVar2 = *param_1;
    plVar1 = (longlong *)(lVar2 + (longlong)iVar3 * 0xb8);
    FUN_144a7fc42(plVar1 + 2);
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    memmove((void *)(lVar2 + (longlong)iVar3 * 0xb8),param_3,0xb0);
    FUN_146808272(param_1,*param_4);
    *param_4 = iVar3;
    return 1;
  }
  return 0;
}



// FUNCTION 14680816e FUN_14680816e body=132 status=ok
// SIG undefined FUN_14680816e(void)

undefined8 FUN_14680816e(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_e8 [40];
  undefined **local_c0 [5];
  byte local_95;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144869430(local_c0);
  local_c0[0] = &PTR_FUN_149e2a0e0;
  local_30 = 0;
  uStack_28 = 0;
  local_95 = local_95 | 8;
  FUN_1468081f4(param_2,*param_1,local_c0);
  FUN_144a7fc42(local_c0);
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468081f4 FUN_1468081f4 body=126 status=ok
// SIG undefined FUN_1468081f4(void)

undefined8 * FUN_1468081f4(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
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
  FUN_1407134c4(param_1 + 2,param_3);
  param_1[2] = &PTR_FUN_149e2a0e0;
  uVar2 = *(undefined8 *)(param_3 + 0x98);
  param_1[0x14] = *(undefined8 *)(param_3 + 0x90);
  param_1[0x15] = uVar2;
  return param_1;
}



// FUNCTION 146808272 FUN_146808272 body=122 status=ok
// SIG undefined FUN_146808272(void)

void FUN_146808272(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xb8) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xb8) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xb8 + 4) = uVar5;
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



// FUNCTION 1468082ec FUN_1468082ec body=485 status=ok
// SIG undefined FUN_1468082ec(void)

void FUN_1468082ec(longlong *param_1)

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
        lVar11 = (longlong)iVar12 * 0xb8;
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
        *(int *)(lVar3 + 0xb4 + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xb0 + lVar11) =
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



// FUNCTION 1468084d2 FUN_1468084d2 body=99 status=ok
// SIG undefined FUN_1468084d2(void)

void FUN_1468084d2(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1;
  FUN_14021219d(*(undefined8 *)(*param_1 + 8),param_2 + 8);
  lVar1 = FUN_144aff0e0(&local_20);
  if ((*(byte *)(lVar1 + 0x28) & 1) != 0) {
    FUN_1406e0f98(param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146808572 FUN_146808572 body=29 status=ok
// SIG undefined FUN_146808572(void)

undefined8 FUN_146808572(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146808590 FUN_146808590 body=932 status=ok
// SIG undefined FUN_146808590(void)

void FUN_146808590(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 auStack_f8 [44];
  int local_cc;
  longlong local_c8;
  longlong local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  uint local_a0;
  uint uStack_9c;
  undefined4 local_98;
  undefined4 local_94;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  uint local_70;
  uint local_6c;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  uint uStack_54;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar5 = *(int *)(param_2 + 1);
  if (iVar5 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*param_2;
  }
  iVar9 = 0;
  iVar7 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar7 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar7,puVar8);
  uVar6 = FUN_146807d7e(param_1 + 0xa0,uVar4,param_2);
  FUN_14680c5a2(uVar6,param_3);
  plVar1 = param_3 + 2;
  local_b8 = (longlong *)&DAT_100000000;
  local_a8 = 0xffffffff;
  local_a0 = 0;
  local_b0 = plVar1;
  if ((int)param_3[5] != 0) {
    FUN_1449c0562(&local_b8);
    iVar9 = (int)param_3[5];
  }
  local_78 = local_a8;
  lVar3 = local_78;
  local_70 = local_a0;
  local_6c = uStack_9c;
  local_88 = local_b8;
  local_80 = local_b0;
  local_78._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
  local_90 = param_3;
  if ((local_78._4_4_ != iVar9) || (local_b0 != plVar1)) {
    local_c8 = param_1 + 0xf0;
    local_c0 = param_1 + 0x140;
    iVar5 = local_78._4_4_;
    local_cc = iVar9;
    local_78 = lVar3;
    do {
      lVar13 = local_c0;
      lVar3 = *local_90;
      lVar11 = (longlong)iVar5 * 0xb8;
      iVar5 = *(int *)(lVar3 + 8 + lVar11);
      puVar8 = &DAT_149dfb77a;
      if (iVar5 != 0) {
        puVar8 = *(undefined2 **)(lVar3 + lVar11);
      }
      lVar2 = lVar3 + lVar11;
      iVar9 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar9 = 0;
      }
      uVar4 = FUN_144a49b4a(iVar9,puVar8);
      uVar6 = FUN_146807d7e(local_c8,uVar4,lVar2);
      plVar12 = (longlong *)(lVar3 + lVar11 + 0x10);
      FUN_14680a518(uVar6,plVar12);
      iVar5 = *(int *)(lVar3 + lVar11 + 8);
      puVar8 = &DAT_149dfb77a;
      if (iVar5 != 0) {
        puVar8 = *(undefined2 **)(lVar3 + lVar11);
      }
      iVar9 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar9 = 0;
      }
      uVar4 = FUN_144a49b4a(iVar9,puVar8);
      uVar6 = FUN_146807d7e(lVar13,uVar4,lVar2);
      lVar13 = lVar3 + lVar11 + 0x20;
      local_68 = (longlong *)&DAT_100000000;
      local_58 = 0xffffffff;
      uStack_54 = 0;
      local_50 = 0;
      local_60 = lVar13;
      if (*(int *)(lVar3 + lVar11 + 0x38) != 0) {
        FUN_1449c0562(&local_68);
      }
      local_a0 = local_58;
      uStack_9c = uStack_54;
      local_98 = local_50;
      local_94 = local_4c;
      local_b0 = local_68;
      local_a8 = local_60;
      uVar10 = *(uint *)(lVar2 + 0x38);
      local_68 = (longlong *)CONCAT44(1 << ((byte)uVar10 & 0x1f),(int)uVar10 >> 5);
      _local_58 = CONCAT44(uVar10,-1 << ((byte)uVar10 & 0x1f));
      local_50 = uVar10 & 0xffffffe0;
      local_b8 = plVar12;
      local_60 = lVar13;
      if (*(uint *)(lVar2 + 0x38) != uVar10) {
        FUN_1449c0562(&local_68);
        uVar10 = uStack_54;
      }
      lVar3 = local_60;
      if ((local_b8 != plVar12 || local_a8 != local_60) || uStack_9c != uVar10) {
        do {
          FUN_146807cfd(uVar6,*local_b8 + (longlong)(int)uStack_9c * 0x40 + 8);
          local_a0 = local_a0 & ~local_b0._4_4_;
          FUN_1449c0562(&local_b0);
        } while (local_b8 != plVar12 || (local_a8 != lVar3 || uStack_9c != uVar10));
      }
      local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
      FUN_1449c0562(&local_88);
      iVar5 = local_78._4_4_;
      lVar3 = local_78;
    } while (local_90 != param_3 || (local_80 != plVar1 || local_78._4_4_ != local_cc));
  }
  local_78 = lVar3;
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146808936 FUN_146808936 body=52 status=ok
// SIG undefined FUN_146808936(void)

void FUN_146808936(longlong *param_1)

{
  FUN_14680896a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14680896a FUN_14680896a body=335 status=ok
// SIG undefined FUN_14680896a(void)

void FUN_14680896a(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
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
      plVar2 = (longlong *)(*local_70 + (longlong)iStack_54 * 0xb8);
      FUN_144a7fc42(plVar2 + 2);
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14018c050(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146808aba FUN_146808aba body=43 status=ok
// SIG undefined FUN_146808aba(void)

void FUN_146808aba(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1468026d6(param_1);
    param_1 = param_1 + 0x98;
  }
  return;
}



// FUNCTION 146808ae6 FUN_146808ae6 body=319 status=ok
// SIG undefined FUN_146808ae6(void)

undefined4 * FUN_146808ae6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_146808c26(param_1,local_48);
  FUN_146808d94(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 0xf) = 0xffffffff;
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
  cVar3 = FUN_146808d0c(param_1,uVar4,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x7c) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xf) =
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
      FUN_1468090c6(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146808c26 FUN_146808c26 body=229 status=ok
// SIG undefined FUN_146808c26(void)

int * FUN_146808c26(longlong *param_1,int *param_2)

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
      FUN_140eca382(param_1,iVar6);
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



// FUNCTION 146808d0c FUN_146808d0c body=136 status=ok
// SIG undefined FUN_146808d0c(void)

undefined8 FUN_146808d0c(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar3 = FUN_146808f88(), iVar3 != -1)) {
    lVar2 = *param_1;
    plVar1 = (longlong *)(lVar2 + (longlong)iVar3 * 0x80);
    FUN_140dc54ec(plVar1 + 2);
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    memmove((void *)(lVar2 + (longlong)iVar3 * 0x80),param_3,0x78);
    FUN_146809054(param_1,*param_4);
    *param_4 = iVar3;
    return 1;
  }
  return 0;
}



// FUNCTION 146808d94 FUN_146808d94 body=101 status=ok
// SIG undefined FUN_146808d94(void)

undefined8 * FUN_146808d94(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  void *_Src;
  
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
  FUN_146808dfa(param_1 + 2,param_3);
  return param_1;
}



// FUNCTION 146808dfa FUN_146808dfa body=397 status=ok
// SIG undefined FUN_146808dfa(void)

undefined1 * FUN_146808dfa(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *_Src;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    FUN_140b856de(param_1 + 8,iVar1,0);
    FUN_140b8566a(*(undefined8 *)(param_1 + 8),uVar2,iVar1);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(int *)(param_1 + 0x20) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  else {
    FUN_146806432(param_1 + 0x18,iVar1,0);
    FUN_1468064a5(*(undefined8 *)(param_1 + 0x18),uVar2,iVar1);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  iVar1 = *(int *)(param_2 + 0x30);
  _Src = *(void **)(param_2 + 0x28);
  *(int *)(param_1 + 0x30) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x28,iVar1,0);
    memcpy(*(void **)(param_1 + 0x28),_Src,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = 0;
  iVar1 = *(int *)(param_2 + 0x48);
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  *(int *)(param_1 + 0x48) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  else {
    FUN_146806580(param_1 + 0x40,iVar1,0);
    FUN_1468065ef(*(undefined8 *)(param_1 + 0x40),uVar2,iVar1);
  }
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = 0;
  iVar1 = *(int *)(param_2 + 0x60);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  *(int *)(param_1 + 0x60) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 100) = 0;
  }
  else {
    FUN_140b856de(param_1 + 0x58,iVar1,0);
    FUN_140b8566a(*(undefined8 *)(param_1 + 0x58),uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 146808f88 FUN_146808f88 body=203 status=ok
// SIG undefined FUN_146808f88(void)

int FUN_146808f88(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_146808fd2:
      lVar10 = (longlong)iVar1 * 0x80;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_146809048;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_146809048;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_146809039;
    }
  }
  return -1;
LAB_146809048:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_146809039:
  iVar1 = *(int *)(lVar4 + 0x78 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_146808fd2;
}



// FUNCTION 146809054 FUN_146809054 body=114 status=ok
// SIG undefined FUN_146809054(void)

void FUN_146809054(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x80) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x80) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x80 + 4) = uVar4;
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



// FUNCTION 1468090c6 FUN_1468090c6 body=476 status=ok
// SIG undefined FUN_1468090c6(void)

void FUN_1468090c6(longlong *param_1)

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
        lVar11 = (longlong)iVar12 * 0x80;
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
        *(int *)(lVar3 + 0x7c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x78 + lVar11) =
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



// FUNCTION 1468092a3 FUN_1468092a3 body=55 status=ok
// SIG undefined FUN_1468092a3(void)

void FUN_1468092a3(longlong param_1,longlong param_2,int param_3)

{
  do {
    FUN_14680936e(param_1,param_2);
    param_1 = param_1 + 0x98;
    param_2 = param_2 + 0x98;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1468092da FUN_1468092da body=146 status=ok
// SIG undefined FUN_1468092da(void)

void FUN_1468092da(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x98,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x98)) {
      uVar5 = uVar4 / 0x98 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x98,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14680936e FUN_14680936e body=659 status=ok
// SIG undefined FUN_14680936e(void)

undefined8 * FUN_14680936e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  pvVar2 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 9);
  pvVar2 = (void *)param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy((void *)param_1[8],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[10] = 0;
  iVar1 = *(int *)(param_2 + 0xb);
  pvVar2 = (void *)param_2[10];
  *(int *)(param_1 + 0xb) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 10,iVar1,0);
    memcpy((void *)param_1[10],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  param_1[0xd] = 0;
  iVar1 = *(int *)(param_2 + 0xe);
  pvVar2 = (void *)param_2[0xd];
  *(int *)(param_1 + 0xe) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xd,iVar1,0);
    memcpy((void *)param_1[0xd],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0xf] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  pvVar2 = (void *)param_2[0xf];
  *(int *)(param_1 + 0x10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xf,iVar1,0);
    memcpy((void *)param_1[0xf],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  param_1[0x11] = param_2[0x11];
  return param_1;
}



// FUNCTION 146809602 FUN_146809602 body=164 status=ok
// SIG undefined FUN_146809602(void)

void FUN_146809602(longlong *param_1,undefined8 param_2)

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
        goto LAB_146809682;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_146809682:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1468096a6 FUN_1468096a6 body=322 status=ok
// SIG undefined FUN_1468096a6(void)

void FUN_1468096a6(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x3c + (longlong)iVar4 * 0x40) * 4) =
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



// FUNCTION 1468097ea FUN_1468097ea body=476 status=ok
// SIG undefined FUN_1468097ea(void)

void FUN_1468097ea(longlong *param_1)

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
        lVar11 = (longlong)iVar12 * 0x40;
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
        *(int *)(lVar3 + 0x3c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x38 + lVar11) =
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



// FUNCTION 1468099c8 FUN_1468099c8 body=173 status=ok
// SIG undefined FUN_1468099c8(void)

void FUN_1468099c8(longlong *param_1,undefined4 param_2,undefined8 param_3)

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
        goto LAB_146809a4f;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_146809a4f:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 146809a76 FUN_146809a76 body=383 status=ok
// SIG undefined FUN_146809a76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146809a76(void)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
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
  puVar5 = &DAT_14c846960;
  if (DAT_14c846968 != (undefined *)0x0) {
    puVar5 = DAT_14c846968;
  }
  iVar4 = DAT_14c846970 + 3;
  if (-1 < DAT_14c846970) {
    iVar4 = DAT_14c846970;
  }
  if (DAT_14c846930 - _DAT_14c84695c < iVar4 >> 2) {
    local_50 = 0x100000000;
    uStack_48 = &DAT_14c846938;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    if (DAT_14c846950 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar4 = DAT_14c846950;
    }
    local_78 = &DAT_14c846928;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if ((local_60._4_4_ != iVar4) || (uStack_48 != &DAT_14c846938)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar1;
      do {
        *(undefined4 *)(puVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar3 * 0x20) * 4)
             = 0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != &DAT_14c846928 ||
               ((undefined *)CONCAT44(uStack_64,uStack_68) != &DAT_14c846938 ||
               local_60._4_4_ != iVar4));
    }
  }
  else {
    uVar1 = local_60;
    if (0 < DAT_14c846970) {
      lVar2 = 0;
      do {
        *(undefined4 *)(puVar5 + lVar2 * 4) = 0xffffffff;
        lVar2 = lVar2 + 1;
      } while (lVar2 < DAT_14c846970);
    }
  }
  local_60 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146809bf6 FUN_146809bf6 body=48 status=ok
// SIG undefined FUN_146809bf6(void)

void FUN_146809bf6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x58,8);
  }
  return;
}



// FUNCTION 146809c26 FUN_146809c26 body=48 status=ok
// SIG undefined FUN_146809c26(void)

void FUN_146809c26(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,8);
  }
  return;
}



// FUNCTION 146809c56 FUN_146809c56 body=143 status=ok
// SIG undefined FUN_146809c56(void)

void FUN_146809c56(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x58,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x58)) {
      uVar5 = uVar4 / 0x58 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x58,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146809ce6 FUN_146809ce6 body=38 status=ok
// SIG undefined FUN_146809ce6(void)

void FUN_146809ce6(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1468023ae(param_1);
    param_1 = param_1 + 0x38;
  }
  return;
}



// FUNCTION 146809d0c FUN_146809d0c body=140 status=ok
// SIG undefined FUN_146809d0c(void)

undefined8 * FUN_146809d0c(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  undefined8 uVar4;
  
  *param_1 = 0;
  iVar2 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar2,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar2 * 2);
  }
  cVar1 = *(char *)(param_2 + 4);
  *(char *)(param_1 + 4) = cVar1;
  if (cVar1 == '\x01') {
    param_1[2] = param_2[2];
    lVar3 = param_2[3];
    param_1[3] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
  }
  uVar4 = param_2[5];
  *(undefined8 *)((longlong)param_1 + 0x2d) = *(undefined8 *)((longlong)param_2 + 0x2d);
  param_1[5] = uVar4;
  return param_1;
}



// FUNCTION 146809d98 FUN_146809d98 body=143 status=ok
// SIG undefined FUN_146809d98(void)

void FUN_146809d98(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146809e28 FUN_146809e28 body=108 status=ok
// SIG undefined FUN_146809e28(void)

void FUN_146809e28(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if ((int)param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x38,8);
  }
  return;
}



// FUNCTION 146809e9a FUN_146809e9a body=132 status=ok
// SIG undefined FUN_146809e9a(void)

void FUN_146809e9a(longlong param_1,int param_2)

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



// FUNCTION 146809f20 FUN_146809f20 body=341 status=ok
// SIG undefined FUN_146809f20(void)

undefined4 * FUN_146809f20(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14680a076(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_14680a184(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14c866b40 - DAT_14c866b6c;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14c866b80)) {
      uVar10 = DAT_14c866b80 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14c866b78;
      if (DAT_14c866b78 == (undefined *)0x0) {
        puVar7 = &DAT_14c866b70;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14c866b80 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14c866b78;
      if (DAT_14c866b78 == (undefined *)0x0) {
        puVar7 = &DAT_14c866b70;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14c866b80 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14c866b80 = iVar9;
      FUN_14680a294();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14680a076 FUN_14680a076 body=270 status=ok
// SIG undefined FUN_14680a076(void)

int * FUN_14680a076(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14c866b68;
  iVar4 = DAT_14c866b40;
  if (DAT_14c866b6c == 0) {
    iVar2 = DAT_14c866b40 + 1;
    bVar7 = DAT_14c866b44 == DAT_14c866b40;
    DAT_14c866b40 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14c866b38,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14c866b48,1);
    puVar3 = DAT_14c866b58;
    if (DAT_14c866b58 == (undefined *)0x0) {
      puVar3 = &DAT_14c866b48;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14c866b68;
    DAT_14c866b68 = *(int *)(DAT_14c866b38 + 4 + lVar6 * 0x18);
    DAT_14c866b6c = DAT_14c866b6c + -1;
    iVar4 = iVar2;
    if (DAT_14c866b6c != 0) {
      *(undefined4 *)(DAT_14c866b38 + (longlong)DAT_14c866b68 * 0x18) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14c866b48;
  if (DAT_14c866b58 != (undefined *)0x0) {
    puVar3 = DAT_14c866b58;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14c866b38;
  return param_1;
}



// FUNCTION 14680a184 FUN_14680a184 body=143 status=ok
// SIG undefined FUN_14680a184(void)

undefined8 FUN_14680a184(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14c866b40 - DAT_14c866b6c != 1) && (DAT_14c866b40 != DAT_14c866b6c)) {
    puVar6 = &DAT_14c866b70;
    if (DAT_14c866b78 != (undefined *)0x0) {
      puVar6 = DAT_14c866b78;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14c866b80 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14c866b38 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_14680a214(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
    }
  }
  return 0;
}



// FUNCTION 14680a214 FUN_14680a214 body=128 status=ok
// SIG undefined FUN_14680a214(void)

void FUN_14680a214(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14c866b38;
  if (DAT_14c866b6c != 0) {
    *(int *)(DAT_14c866b38 + (longlong)DAT_14c866b68 * 0x18) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x18) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14c866b6c) {
    iVar4 = DAT_14c866b68;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x18) = iVar4;
  DAT_14c866b6c = DAT_14c866b6c + 1;
  puVar3 = &DAT_14c866b48;
  if (DAT_14c866b58 != (undefined *)0x0) {
    puVar3 = DAT_14c866b58;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14c866b68 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 14680a294 FUN_14680a294 body=514 status=ok
// SIG undefined FUN_14680a294(void)

void FUN_14680a294(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
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
  if (DAT_14c866b78 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c866b78,0,0,4);
  }
  uVar3 = DAT_14c866b80;
  uVar2 = local_50;
  if (DAT_14c866b80 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14c866b70,0,DAT_14c866b80,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14c866b78;
        if (DAT_14c866b78 == (undefined *)0x0) {
          puVar6 = &DAT_14c866b70;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14c866b80 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14c866b48;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14c866b60 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14c866b38;
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
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14c866b80 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14c866b78;
        if (DAT_14c866b78 == (undefined *)0x0) {
          puVar6 = &DAT_14c866b70;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14c866b80 - 1U & uVar9) * 4);
        puVar6 = DAT_14c866b78;
        if (DAT_14c866b78 == (undefined *)0x0) {
          puVar6 = &DAT_14c866b70;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14c866b80 - 1U) * 4) = iVar4;
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



// FUNCTION 14680a498 FUN_14680a498 body=128 status=ok
// SIG undefined FUN_14680a498(void)

void FUN_14680a498(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14c866ca0;
  if (DAT_14c866cd4 != 0) {
    *(int *)(DAT_14c866ca0 + (longlong)DAT_14c866cd0 * 0xc) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0xc) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14c866cd4) {
    iVar4 = DAT_14c866cd0;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0xc) = iVar4;
  DAT_14c866cd4 = DAT_14c866cd4 + 1;
  puVar3 = &DAT_14c866cb0;
  if (DAT_14c866cc0 != (undefined *)0x0) {
    puVar3 = DAT_14c866cc0;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14c866cd0 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 14680a518 FUN_14680a518 body=129 status=ok
// SIG undefined FUN_14680a518(void)

longlong FUN_14680a518(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_14680a599();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_1406e1ba4(param_2);
    }
  }
  return param_1;
}



// FUNCTION 14680a599 FUN_14680a599 body=660 status=ok
// SIG undefined FUN_14680a599(void)

longlong * FUN_14680a599(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  int local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 6,(longlong)*(int *)((longlong)param_2 + 0xc) << 6
            );
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar6 = local_60._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_64 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar4 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_64,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_64);
      }
    }
    else {
      local_64 = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar1;
    }
    local_58 = param_2 + 2;
    local_60 = (undefined8 *)&DAT_100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_88 = local_60;
    local_80 = local_58;
    local_78 = local_50;
    uVar7 = local_78;
    local_70 = local_48;
    local_6c = local_44;
    local_78._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_90 = param_2;
    if (local_78._4_4_ < (int)local_58[3]) {
      iVar8 = local_78._4_4_;
      local_78 = uVar7;
      do {
        lVar5 = *local_90;
        (**(code **)(*param_1 + 0x160))(param_1,lVar5 + (longlong)iVar8 * 0x40);
        FUN_146807cfd(param_1,lVar5 + (longlong)iVar8 * 0x40 + 8);
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar8 = local_78._4_4_;
        uVar7 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  else {
    local_60 = (undefined8 *)((ulonglong)local_60._4_4_ << 0x20);
    puVar4 = (ulonglong *)param_1[1];
    puVar2 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_60,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_60);
      }
    }
    else {
      local_60 = (undefined8 *)CONCAT44(uVar6,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar2;
    }
    FUN_140b7cc1c(param_2,(ulonglong)local_60 & 0xffffffff);
    uVar7 = local_78;
    if (0 < (int)local_60) {
      iVar8 = 0;
      do {
        FUN_1406e119c(param_2,&local_90);
        *local_88 = 0;
        puVar3 = local_88 + 1;
        *(undefined1 *)(local_88 + 1) = 7;
        local_88[2] = 0;
        local_88[3] = 0;
        local_88[4] = 0;
        local_88[5] = 0;
        *(undefined4 *)(local_88 + 7) = 0xffffffff;
        (**(code **)(*param_1 + 0x160))(param_1);
        FUN_146807cfd(param_1,puVar3);
        iVar8 = iVar8 + 1;
        uVar7 = local_78;
      } while (iVar8 < (int)local_60);
    }
  }
  local_78 = uVar7;
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14680a82e FUN_14680a82e body=70 status=ok
// SIG undefined FUN_14680a82e(void)

void FUN_14680a82e(longlong param_1,uint param_2)

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
  FUN_1406e2aa2(param_1);
  return;
}



// FUNCTION 14680a874 FUN_14680a874 body=203 status=ok
// SIG undefined FUN_14680a874(void)

int FUN_14680a874(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_14680a8be:
      lVar10 = (longlong)iVar1 * 0x68;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_14680a934;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_14680a934;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_14680a925;
    }
  }
  return -1;
LAB_14680a934:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_14680a925:
  iVar1 = *(int *)(lVar4 + 0x60 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_14680a8be;
}



// FUNCTION 14680a940 FUN_14680a940 body=110 status=ok
// SIG undefined FUN_14680a940(void)

void FUN_14680a940(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  if (param_2 <= (int)uVar1) {
    iVar5 = 10;
    if (10 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (10 < *(uint *)(param_1 + 0x5c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x5c) = iVar5;
    FUN_14680a9b0(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14680a9b0 FUN_14680a9b0 body=132 status=ok
// SIG undefined FUN_14680a9b0(void)

void FUN_14680a9b0(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x50);
  if ((uint)param_3 < 0xb) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x50,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x50),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x50,param_2,param_3,8);
  return;
}



// FUNCTION 14680aa34 FUN_14680aa34 body=48 status=ok
// SIG undefined FUN_14680aa34(void)

void FUN_14680aa34(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 14680aa64 FUN_14680aa64 body=297 status=ok
// SIG undefined FUN_14680aa64(void)

undefined4 * FUN_14680aa64(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1406e119c(param_1,local_38);
  uVar1 = param_3[1];
  *local_30 = *(undefined8 *)*param_3;
  FUN_140541a86(local_30 + 1,uVar1);
  *(undefined4 *)(local_30 + 7) = 0xffffffff;
  uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar5 = 1;
  if (3 < uVar3) {
    uVar2 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
    lVar4 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar5 = 1 << ((byte)lVar4 & 0x1f);
  }
  uVar1 = *local_30;
  if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
    uVar3 = (uint)((ulonglong)uVar1 >> 0x10);
    uVar6 = (uint)uVar1 & 0xffff;
    uVar3 = *(int *)(param_1 + 0x48) - 1U &
            (uVar6 >> 4) +
            ((uint)uVar1 << 0x10 | uVar6) + (int)((ulonglong)uVar1 >> 0x20) +
            (uVar3 << 0x13 | uVar3 & 0xffff);
    *(uint *)((longlong)local_30 + 0x3c) = uVar3;
    lVar4 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar4 = param_1 + 0x38;
    }
    *(undefined4 *)(local_30 + 7) =
         *(undefined4 *)
          (lVar4 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
    lVar4 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar4 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar4 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4) =
         local_38[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar5;
    FUN_1406e1ba4(param_1);
  }
  *param_2 = local_38[0];
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14680ab8e FUN_14680ab8e body=151 status=ok
// SIG undefined FUN_14680ab8e(void)

void FUN_14680ab8e(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0xb8 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xb8) = param_2;
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
      puVar7 = puVar7 + 0x2e;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14680ac26 FUN_14680ac26 body=70 status=ok
// SIG undefined FUN_14680ac26(void)

void FUN_14680ac26(longlong param_1,uint param_2)

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
  FUN_1457a15b0(param_1);
  return;
}



// FUNCTION 14680ac6c FUN_14680ac6c body=99 status=ok
// SIG undefined FUN_14680ac6c(void)

undefined8 * FUN_14680ac6c(undefined8 *param_1,int param_2)

{
  undefined **ppuVar1;
  longlong lVar2;
  
  ppuVar1 = &PTR_FUN_149e2b5a8;
  *param_1 = &PTR_FUN_149e2b5a8;
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    do {
      lVar2 = *(longlong *)(lVar2 + 8);
      FUN_1400020a8();
      param_1[1] = lVar2;
    } while (lVar2 != 0);
    ppuVar1 = (undefined **)*param_1;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  (*(code *)ppuVar1[1])(param_1,0);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14680acd0 FUN_14680acd0 body=85 status=ok
// SIG undefined FUN_14680acd0(void)

void FUN_14680acd0(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    if (param_1[1] == param_3) {
      plVar1 = param_1 + 1;
      plVar2 = param_1;
      if (param_3 != 0) {
        *(longlong *)(param_2 + 8) = param_1[1];
        plVar2 = (longlong *)*plVar1;
      }
      plVar2 = plVar2 + 2;
    }
    else {
      plVar1 = (longlong *)(param_3 + 0x10);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(longlong *)(param_2 + 8) = param_3;
      plVar2 = (longlong *)(*(longlong *)(param_3 + 0x10) + 8);
    }
    *plVar2 = param_2;
    *plVar1 = param_2;
                    /* WARNING: Could not recover jumptable at 0x00014680ad08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))(param_1,(int)param_1[3] + 1);
    return;
  }
  return;
}



// FUNCTION 14680ad26 FUN_14680ad26 body=150 status=ok
// SIG undefined FUN_14680ad26(void)

void FUN_14680ad26(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x60 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
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
      puVar7 = puVar7 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14680adbc FUN_14680adbc body=203 status=ok
// SIG undefined FUN_14680adbc(void)

int FUN_14680adbc(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_14680ae06:
      lVar10 = (longlong)iVar1 * 0x70;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_14680ae7c;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_14680ae7c;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_14680ae6d;
    }
  }
  return -1;
LAB_14680ae7c:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_14680ae6d:
  iVar1 = *(int *)(lVar4 + 0x68 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_14680ae06;
}



// FUNCTION 14680ae88 FUN_14680ae88 body=189 status=ok
// SIG undefined FUN_14680ae88(void)

longlong FUN_14680ae88(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0xb8;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0xb8) == *param_3) {
          if (lVar3 != 0) goto LAB_14680af28;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0xb0);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_14680af46(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0xb8 + *param_1;
LAB_14680af28:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 14680af46 FUN_14680af46 body=281 status=ok
// SIG undefined FUN_14680af46(void)

undefined4 * FUN_14680af46(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14680b060(param_1,local_48);
  FUN_14680b1f0(param_4,local_40);
  *(undefined4 *)(local_40 + 0xb0) = 0xffffffff;
  cVar1 = FUN_14680b14c(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0xb4) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xb0) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_14680b332(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14680b060 FUN_14680b060 body=235 status=ok
// SIG undefined FUN_14680b060(void)

int * FUN_14680b060(longlong *param_1,int *param_2)

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
      FUN_140d69e26(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0xb8);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0xb8) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0xb8 + *param_1;
  return param_2;
}



// FUNCTION 14680b14c FUN_14680b14c body=164 status=ok
// SIG undefined FUN_14680b14c(void)

undefined8 FUN_14680b14c(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0xb8);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0xb8) == *param_3) {
          FUN_140b7cb8c((longlong)_Dst + 8);
          memmove(_Dst,param_3,0xb0);
          FUN_14680b2b8(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0xb0);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 14680b1f0 FUN_14680b1f0 body=198 status=ok
// SIG undefined FUN_14680b1f0(void)

undefined8 * FUN_14680b1f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_a8 = 0;
  local_a0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_9c = 0xffffffff00000080;
  local_94 = 0;
  local_88 = 0;
  local_80 = 0;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 1;
  *param_2 = *(undefined8 *)*param_1;
  FUN_140d692d6(param_2 + 1,&local_c8);
  FUN_140d69258(param_2 + 0xb,&local_78);
  *(undefined1 *)(param_2 + 0x15) = local_28;
  FUN_140b7cb8c(&local_c8);
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14680b2b8 FUN_14680b2b8 body=122 status=ok
// SIG undefined FUN_14680b2b8(void)

void FUN_14680b2b8(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xb8) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xb8) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xb8 + 4) = uVar5;
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



// FUNCTION 14680b332 FUN_14680b332 body=482 status=ok
// SIG undefined FUN_14680b332(void)

void FUN_14680b332(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0xb8;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xb4 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xb0 + lVar7) =
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



// FUNCTION 14680b515 FUN_14680b515 body=625 status=ok
// SIG undefined FUN_14680b515(void)

void FUN_14680b515(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong *local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong *local_70;
  longlong local_68;
  ulonglong local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b8 = param_3 + 2;
  local_c0 = (longlong *)&DAT_100000000;
  local_b0 = 0xffffffff;
  local_a8 = local_a8 & 0xffffffff00000000;
  if ((int)param_3[5] != 0) {
    FUN_1449c0562(&local_c0);
  }
  local_80 = local_b0;
  lVar1 = local_80;
  local_78 = (uint)local_a8;
  local_74 = local_a8._4_4_;
  local_90 = local_c0;
  local_88 = local_b8;
  local_80._4_4_ = (int)((ulonglong)local_b0 >> 0x20);
  local_98 = param_3;
  if (local_80._4_4_ < (int)local_b8[3]) {
    iVar5 = local_80._4_4_;
    local_c8 = param_2;
    local_80 = lVar1;
    do {
      iVar8 = 0;
      iVar2 = *(int *)(*local_98 + 8 + (longlong)iVar5 * 0x68);
      puVar7 = &DAT_149dfb77a;
      if (iVar2 != 0) {
        puVar7 = *(undefined2 **)(*local_98 + (longlong)iVar5 * 0x68);
        iVar8 = iVar2 + -1;
      }
      cVar4 = FUN_144a38768(param_2,puVar7,iVar8,1);
      if (cVar4 != '\0') {
        lVar6 = (longlong)local_80._4_4_;
        lVar3 = *local_98;
        lVar1 = lVar3 + lVar6 * 0x68;
        local_68 = lVar1 + 0x20;
        local_70 = (longlong *)&DAT_100000000;
        local_60 = 0xffffffff;
        local_58 = 0;
        if (*(int *)(lVar1 + 0x38) != 0) {
          FUN_1449c0562(&local_70);
        }
        local_c0 = (longlong *)(lVar3 + lVar6 * 0x68 + 0x10);
        local_a8 = local_60;
        local_a0 = local_58;
        local_9c = local_54;
        local_b8 = local_70;
        local_b0 = local_68;
        while (param_2 = local_c8, local_a8._4_4_ < *(int *)(local_b0 + 0x18)) {
          local_68 = *local_c0 + (longlong)local_a8._4_4_ * 0x20 + 8;
          local_70 = (longlong *)((longlong)local_a8._4_4_ * 0x20 + *local_c0);
          FUN_1406e263c(param_1 + 0x50,local_4c,&local_70,0);
          local_a8 = CONCAT44(local_a8._4_4_,(uint)local_a8 & ~local_b8._4_4_);
          FUN_1449c0562(&local_b8);
        }
      }
      local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~local_90._4_4_);
      FUN_1449c0562(&local_90);
      iVar5 = local_80._4_4_;
      lVar1 = local_80;
    } while (local_80._4_4_ < (int)local_88[3]);
  }
  local_80 = lVar1;
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14680b788 FUN_14680b788 body=349 status=ok
// SIG undefined FUN_14680b788(void)

undefined4 * FUN_14680b788(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_14680b060(param_1,local_48);
  uVar1 = param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  FUN_140b7c8de(local_40 + 1,uVar1);
  *(undefined4 *)(local_40 + 0x16) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  uVar8 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar8 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_14680b14c(param_1,uVar8,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0xb4) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x16) =
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
      FUN_14680b332(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14680b8e6 FUN_14680b8e6 body=485 status=ok
// SIG undefined FUN_14680b8e6(void)

void FUN_14680b8e6(longlong *param_1)

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
        lVar11 = (longlong)iVar12 * 0xe0;
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
        *(int *)(lVar3 + 0xdc + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xd8 + lVar11) =
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



// FUNCTION 14680bacc FUN_14680bacc body=110 status=ok
// SIG undefined FUN_14680bacc(void)

void FUN_14680bacc(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0xb4 + (longlong)param_2 * 0xb8);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0xb0 + lVar5 * 0xb8);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0xb8 + 0xb0);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0xb8 + 0xb0);
  FUN_14680bb3a(param_1,param_2,1);
  return;
}



// FUNCTION 14680bb3a FUN_14680bb3a body=102 status=ok
// SIG undefined FUN_14680bb3a(void)

void FUN_14680bb3a(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 * 0xb8 + *param_1 + 0x10;
    iVar1 = param_3;
    do {
      FUN_140d69dce(lVar2);
      if (*(longlong *)(lVar2 + -0x10) != 0) {
        FUN_1400020a8();
      }
      lVar2 = lVar2 + 0xb8;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_14680ab8e(param_1,param_2,param_3);
  return;
}



// FUNCTION 14680bbd6 FUN_14680bbd6 body=29 status=ok
// SIG undefined FUN_14680bbd6(void)

undefined8 FUN_14680bbd6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14680bc2a FUN_14680bc2a body=29 status=ok
// SIG undefined FUN_14680bc2a(void)

undefined8 FUN_14680bc2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14680bc48 FUN_14680bc48 body=138 status=ok
// SIG undefined FUN_14680bc48(void)

void FUN_14680bc48(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
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
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14680bcd2 FUN_14680bcd2 body=426 status=ok
// SIG undefined FUN_14680bcd2(void)

void FUN_14680bcd2(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  
  if (param_2 != 0) {
    iVar4 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar8 = iVar4;
joined_r0x00014680bd04:
    do {
      iVar3 = iVar4 * 2 + 1;
      if (iVar3 < (int)param_2) {
        iVar7 = iVar4 * 2 + 2;
        if (iVar7 < (int)param_2) {
          if (*(int *)(param_1 + iVar7) == *(int *)(param_1 + iVar3)) {
            iVar2 = *(int *)((longlong)param_1 + (longlong)iVar7 * 8 + 4) -
                    *(int *)((longlong)param_1 + (longlong)iVar3 * 8 + 4);
          }
          else {
            iVar2 = FUN_14002c2bd();
          }
          if (-1 < iVar2) {
            iVar3 = iVar7;
          }
        }
        lVar9 = (longlong)iVar4;
        lVar10 = (longlong)iVar3;
        if (*(int *)(param_1 + lVar9) == *(int *)(param_1 + lVar10)) {
          iVar4 = *(int *)((longlong)param_1 + lVar9 * 8 + 4) -
                  *(int *)((longlong)param_1 + lVar10 * 8 + 4);
        }
        else {
          iVar4 = FUN_14002c2bd();
        }
        if (iVar4 < 0) {
          uVar1 = param_1[lVar9];
          param_1[lVar9] = param_1[lVar10];
          param_1[lVar10] = uVar1;
          iVar4 = iVar3;
          goto joined_r0x00014680bd04;
        }
      }
      bVar11 = iVar8 != 0;
      iVar4 = iVar8 + -1;
      iVar8 = iVar4;
    } while (bVar11);
    if (1 < (int)param_2) {
      uVar5 = (ulonglong)param_2;
      uVar1 = *param_1;
      *param_1 = param_1[uVar5 - 1];
      param_1[uVar5 - 1] = uVar1;
      if (param_2 != 2) {
        do {
          uVar6 = uVar5 - 1;
          iVar4 = 0;
          iVar3 = 1;
          iVar8 = 0;
          do {
            lVar9 = (longlong)(iVar4 + 2);
            iVar7 = iVar3;
            if (lVar9 < (longlong)uVar6) {
              if (*(int *)(param_1 + lVar9) == *(int *)(param_1 + iVar3)) {
                iVar3 = *(int *)((longlong)param_1 + lVar9 * 8 + 4) -
                        *(int *)((longlong)param_1 + (longlong)iVar3 * 8 + 4);
              }
              else {
                iVar3 = FUN_14002c2bd();
              }
              if (-1 < iVar3) {
                iVar7 = iVar4 + 2;
              }
            }
            lVar9 = (longlong)iVar8;
            lVar10 = (longlong)iVar7;
            if (*(int *)(param_1 + lVar9) == *(int *)(param_1 + lVar10)) {
              iVar4 = *(int *)((longlong)param_1 + lVar9 * 8 + 4) -
                      *(int *)((longlong)param_1 + lVar10 * 8 + 4);
            }
            else {
              iVar4 = FUN_14002c2bd();
            }
            if (-1 < iVar4) break;
            uVar1 = param_1[lVar9];
            param_1[lVar9] = param_1[lVar10];
            param_1[lVar10] = uVar1;
            iVar4 = iVar7 * 2;
            iVar3 = iVar7 * 2 + 1;
            iVar8 = iVar7;
          } while ((longlong)iVar3 < (longlong)uVar6);
          uVar1 = *param_1;
          *param_1 = param_1[uVar5 - 2];
          param_1[uVar5 - 2] = uVar1;
          uVar5 = uVar6;
        } while (2 < uVar6);
      }
    }
  }
  return;
}



// FUNCTION 14680be7c FUN_14680be7c body=957 status=ok
// SIG undefined FUN_14680be7c(void)

void FUN_14680be7c(longlong param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined2 *puVar15;
  int iVar16;
  longlong lVar17;
  undefined2 *puVar18;
  float fVar19;
  undefined1 auStack_388 [40];
  longlong *local_360;
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (1 < (int)param_2) {
    memset(local_348,0,0x2f0);
    local_350 = (ulonglong)param_2 * 0x10 + param_1 + -0x10;
    local_358 = param_1;
    fVar19 = logf((float)(int)param_2);
    local_348[0] = (int)(longlong)(fVar19 + fVar19);
    plVar10 = &local_358;
    do {
      puVar9 = (undefined8 *)*plVar10;
      puVar14 = (undefined8 *)plVar10[1];
      iVar13 = (int)plVar10[2];
      iVar16 = (int)((ulonglong)((longlong)puVar14 - (longlong)puVar9) >> 4);
      local_360 = plVar10;
      if (iVar13 != 0) {
LAB_14680bf2c:
        if (8 < (int)(iVar16 + 1U)) {
          uVar11 = (ulonglong)(iVar16 + 1U >> 1);
          uVar3 = puVar9[uVar11 * 2];
          uVar4 = (puVar9 + uVar11 * 2)[1];
          uVar5 = puVar9[1];
          puVar9[uVar11 * 2] = *puVar9;
          (puVar9 + uVar11 * 2)[1] = uVar5;
          *puVar9 = uVar3;
          puVar9[1] = uVar4;
          puVar12 = puVar14 + 2;
          puVar8 = puVar9;
LAB_14680bf64:
          puVar7 = puVar8;
          puVar8 = puVar7 + 2;
          if (puVar8 <= puVar14) {
            puVar15 = &DAT_149dfb77a;
            if (*(int *)(puVar7 + 3) != 0) {
              puVar15 = (undefined2 *)puVar7[2];
            }
            puVar18 = &DAT_149dfb77a;
            if (*(int *)(puVar9 + 1) != 0) {
              puVar18 = (undefined2 *)*puVar9;
            }
            lVar17 = 0;
            do {
              uVar1 = *(ushort *)((longlong)puVar18 + lVar17);
              uVar2 = *(ushort *)((longlong)puVar15 + lVar17);
              if (uVar1 == uVar2) {
                if (uVar1 == 0) goto LAB_14680bfcb;
              }
              else {
                if (0x7f < (uVar2 | uVar1)) {
                  iVar16 = (uint)uVar1 - (uint)uVar2;
                  goto LAB_14680bfce;
                }
                if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
                  iVar16 = (uint)(byte)(&DAT_149e05da0)[uVar1] -
                           (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
                  goto LAB_14680bfce;
                }
              }
              lVar17 = lVar17 + 2;
            } while( true );
          }
          goto LAB_14680bfd3;
        }
        for (; puVar12 = puVar9, puVar8 = puVar9, puVar9 < puVar14; puVar14 = puVar14 + -2) {
joined_r0x00014680c137:
          puVar7 = puVar8 + 2;
          if (puVar7 <= puVar14) {
            puVar15 = &DAT_149dfb77a;
            if (*(int *)(puVar8 + 3) != 0) {
              puVar15 = (undefined2 *)puVar8[2];
            }
            puVar18 = &DAT_149dfb77a;
            if (*(int *)(puVar12 + 1) != 0) {
              puVar18 = (undefined2 *)*puVar12;
            }
            lVar17 = 0;
            while( true ) {
              uVar1 = *(ushort *)((longlong)puVar18 + lVar17);
              uVar2 = *(ushort *)((longlong)puVar15 + lVar17);
              puVar8 = puVar7;
              if (uVar1 != uVar2) break;
              if (uVar1 == 0) goto joined_r0x00014680c137;
LAB_14680c177:
              lVar17 = lVar17 + 2;
            }
            if ((uVar2 | uVar1) < 0x80) {
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[(uint)uVar2]) goto LAB_14680c177;
              iVar13 = (uint)(byte)(&DAT_149e05da0)[uVar1] -
                       (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
            }
            else {
              iVar13 = (uint)uVar1 - (uint)uVar2;
            }
            if (iVar13 < 0) {
              puVar12 = puVar7;
            }
            goto joined_r0x00014680c137;
          }
          local_58 = *puVar12;
          uStack_50 = puVar12[1];
          uVar4 = local_58;
          uVar5 = uStack_50;
          uVar3 = puVar14[1];
          *puVar12 = *puVar14;
          puVar12[1] = uVar3;
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          *(undefined4 *)puVar14 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar14 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar14 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar14 + 0xc) = uStack_50._4_4_;
          local_58 = uVar4;
          uStack_50 = uVar5;
        }
        goto LAB_14680c1dd;
      }
LAB_14680c11a:
      FUN_14680c23a(puVar9);
LAB_14680c1dd:
      plVar10 = local_360 + -3;
    } while (&local_358 <= plVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14680bfcb:
  iVar16 = 0;
LAB_14680bfce:
  if (iVar16 < 0) {
LAB_14680bfd3:
    puVar6 = puVar12;
    puVar12 = puVar6 + -2;
    if (puVar9 < puVar12) {
      puVar15 = &DAT_149dfb77a;
      if (*(int *)(puVar9 + 1) != 0) {
        puVar15 = (undefined2 *)*puVar9;
      }
      puVar18 = &DAT_149dfb77a;
      if (*(int *)(puVar6 + -1) != 0) {
        puVar18 = (undefined2 *)puVar6[-2];
      }
      lVar17 = 0;
      do {
        uVar1 = *(ushort *)((longlong)puVar18 + lVar17);
        uVar2 = *(ushort *)((longlong)puVar15 + lVar17);
        if (uVar1 == uVar2) {
          if (uVar1 == 0) goto LAB_14680c03d;
        }
        else {
          if (0x7f < (uVar2 | uVar1)) {
            iVar16 = (uint)uVar1 - (uint)uVar2;
            goto LAB_14680c040;
          }
          if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
            iVar16 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2]
            ;
            goto LAB_14680c040;
          }
        }
        lVar17 = lVar17 + 2;
      } while( true );
    }
    goto LAB_14680c045;
  }
  goto LAB_14680bf64;
LAB_14680c03d:
  iVar16 = 0;
LAB_14680c040:
  if (iVar16 < 0) goto LAB_14680c045;
  goto LAB_14680bfd3;
LAB_14680c045:
  if (puVar8 <= puVar12) {
    uVar3 = *puVar8;
    uVar4 = puVar7[3];
    uVar5 = puVar6[-1];
    *puVar8 = *puVar12;
    puVar7[3] = uVar5;
    *puVar12 = uVar3;
    puVar6[-1] = uVar4;
    goto LAB_14680bf64;
  }
  local_58 = *puVar9;
  uStack_50 = puVar9[1];
  uVar4 = local_58;
  uVar5 = uStack_50;
  uVar3 = puVar6[-1];
  *puVar9 = *puVar12;
  puVar9[1] = uVar3;
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  *(undefined4 *)puVar12 = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar6 + -0xc) = local_58._4_4_;
  *(undefined4 *)(puVar6 + -1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar6 + -4) = uStack_50._4_4_;
  iVar13 = iVar13 + -1;
  puVar6 = puVar6 + -4;
  local_58 = uVar4;
  uStack_50 = uVar5;
  if ((longlong)puVar6 - (longlong)puVar9 < (longlong)puVar14 - (longlong)puVar8) {
    if (puVar8 < puVar14) {
      *local_360 = (longlong)puVar8;
      local_360[1] = (longlong)puVar14;
      *(int *)(local_360 + 2) = iVar13;
      local_360 = local_360 + 3;
    }
    if (puVar12 <= puVar9 + 2) goto LAB_14680c1dd;
  }
  else {
    if (puVar9 + 2 < puVar12) {
      *local_360 = (longlong)puVar9;
      local_360[1] = (longlong)puVar6;
      *(int *)(local_360 + 2) = iVar13;
      local_360 = local_360 + 3;
    }
    puVar6 = puVar14;
    puVar9 = puVar8;
    if (puVar14 <= puVar8) goto LAB_14680c1dd;
  }
  iVar16 = (int)((ulonglong)((longlong)puVar6 - (longlong)puVar9) >> 4);
  puVar14 = puVar6;
  if (iVar13 == 0) goto LAB_14680c11a;
  goto LAB_14680bf2c;
}



// FUNCTION 14680c23a FUN_14680c23a body=870 status=ok
// SIG undefined FUN_14680c23a(void)

void FUN_14680c23a(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  undefined8 *puVar19;
  longlong lVar20;
  bool bVar21;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    iVar13 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    do {
      iVar10 = iVar13 * 2 + 1;
      iVar15 = iVar13;
      if (iVar10 < (int)param_2) {
LAB_14680c295:
        iVar17 = iVar15 * 2 + 2;
        iVar16 = iVar10;
        if (iVar17 < (int)param_2) {
          puVar12 = &DAT_149dfb77a;
          if (*(int *)(param_1 + (longlong)iVar10 * 2 + 1) != 0) {
            puVar12 = (undefined2 *)param_1[(longlong)iVar10 * 2];
          }
          puVar7 = &DAT_149dfb77a;
          if (*(int *)(param_1 + (longlong)iVar17 * 2 + 1) != 0) {
            puVar7 = (undefined2 *)param_1[(longlong)iVar17 * 2];
          }
          lVar20 = 0;
          while( true ) {
            uVar2 = *(ushort *)((longlong)puVar7 + lVar20);
            uVar9 = (uint)uVar2;
            uVar3 = *(ushort *)((longlong)puVar12 + lVar20);
            uVar8 = (uint)uVar3;
            iVar16 = iVar17;
            if (uVar2 != uVar3) break;
            if (uVar2 == 0) goto LAB_14680c314;
LAB_14680c2e4:
            lVar20 = lVar20 + 2;
          }
          if ((uVar3 | uVar2) < 0x80) {
            uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar3];
            if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_14680c2e4;
          }
          if ((int)(uVar9 - uVar8) < 0) {
            iVar16 = iVar10;
          }
        }
LAB_14680c314:
        lVar20 = (longlong)iVar16;
        puVar12 = &DAT_149dfb77a;
        if (*(int *)(param_1 + lVar20 * 2 + 1) != 0) {
          puVar12 = (undefined2 *)param_1[lVar20 * 2];
        }
        lVar18 = (longlong)iVar15;
        puVar7 = &DAT_149dfb77a;
        if (*(int *)(param_1 + lVar18 * 2 + 1) != 0) {
          puVar7 = (undefined2 *)param_1[lVar18 * 2];
        }
        puVar19 = param_1 + lVar18 * 2;
        puVar11 = param_1 + lVar20 * 2;
        lVar20 = 0;
        do {
          uVar2 = *(ushort *)((longlong)puVar7 + lVar20);
          uVar9 = (uint)uVar2;
          uVar3 = *(ushort *)((longlong)puVar12 + lVar20);
          uVar8 = (uint)uVar3;
          if (uVar2 == uVar3) {
            if (uVar2 == 0) break;
          }
          else {
            if (0x7f < (uVar3 | uVar2)) goto LAB_14680c381;
            uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar3];
            if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[uVar3]) goto LAB_14680c381;
          }
          lVar20 = lVar20 + 2;
        } while( true );
      }
LAB_14680c3b8:
      bVar21 = iVar13 != 0;
      iVar13 = iVar13 + -1;
    } while (bVar21);
    if (1 < (int)param_2) {
      uVar14 = (ulonglong)param_2 - 1;
      uVar4 = *param_1;
      uVar5 = param_1[1];
      uVar6 = (param_1 + uVar14 * 2)[1];
      *param_1 = param_1[uVar14 * 2];
      param_1[1] = uVar6;
      local_58._0_4_ = (undefined4)uVar4;
      local_58._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_50._0_4_ = (undefined4)uVar5;
      uStack_50._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      puVar11 = param_1 + uVar14 * 2;
      *(undefined4 *)puVar11 = (undefined4)local_58;
      *(undefined4 *)((longlong)puVar11 + 4) = local_58._4_4_;
      *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_50._4_4_;
      local_58 = uVar4;
      uStack_50 = uVar5;
      if (param_2 != 2) {
LAB_14680c431:
        iVar13 = 1;
        iVar15 = 0;
        iVar10 = 0;
LAB_14680c43c:
        iVar15 = iVar15 + 2;
        lVar20 = (longlong)iVar15;
        iVar16 = iVar13;
        if (lVar20 < (longlong)uVar14) {
          puVar12 = &DAT_149dfb77a;
          if (*(int *)(param_1 + (longlong)iVar13 * 2 + 1) != 0) {
            puVar12 = (undefined2 *)param_1[(longlong)iVar13 * 2];
          }
          puVar7 = &DAT_149dfb77a;
          if (*(int *)(param_1 + lVar20 * 2 + 1) != 0) {
            puVar7 = (undefined2 *)param_1[lVar20 * 2];
          }
          lVar20 = 0;
          while( true ) {
            uVar2 = *(ushort *)((longlong)puVar7 + lVar20);
            uVar8 = (uint)uVar2;
            uVar3 = *(ushort *)((longlong)puVar12 + lVar20);
            uVar9 = (uint)uVar3;
            iVar16 = iVar15;
            if (uVar2 != uVar3) break;
            if (uVar2 == 0) goto LAB_14680c4b7;
LAB_14680c488:
            lVar20 = lVar20 + 2;
          }
          if ((uVar3 | uVar2) < 0x80) {
            uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar3];
            if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_14680c488;
          }
          if ((int)(uVar8 - uVar9) < 0) {
            iVar16 = iVar13;
          }
        }
LAB_14680c4b7:
        lVar20 = (longlong)iVar16;
        puVar12 = &DAT_149dfb77a;
        if (*(int *)(param_1 + lVar20 * 2 + 1) != 0) {
          puVar12 = (undefined2 *)param_1[lVar20 * 2];
        }
        lVar18 = (longlong)iVar10;
        puVar7 = &DAT_149dfb77a;
        if (*(int *)(param_1 + lVar18 * 2 + 1) != 0) {
          puVar7 = (undefined2 *)param_1[lVar18 * 2];
        }
        puVar11 = param_1 + lVar18 * 2;
        puVar19 = param_1 + lVar20 * 2;
        lVar20 = 0;
        do {
          uVar2 = *(ushort *)((longlong)puVar7 + lVar20);
          uVar8 = (uint)uVar2;
          uVar3 = *(ushort *)((longlong)puVar12 + lVar20);
          uVar9 = (uint)uVar3;
          if (uVar2 == uVar3) {
            if (uVar2 == 0) goto LAB_14680c55d;
          }
          else {
            if (0x7f < (uVar3 | uVar2)) goto LAB_14680c522;
            uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar3];
            if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[uVar3]) goto LAB_14680c522;
          }
          lVar20 = lVar20 + 2;
        } while( true );
      }
    }
  }
LAB_14680c404:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14680c381:
  if (-1 < (int)(uVar9 - uVar8)) goto LAB_14680c3b8;
  uVar4 = *puVar19;
  uVar5 = puVar19[1];
  uVar6 = puVar11[1];
  *puVar19 = *puVar11;
  puVar19[1] = uVar6;
  local_58._0_4_ = (undefined4)uVar4;
  local_58._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_50._0_4_ = (undefined4)uVar5;
  uStack_50._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  *(undefined4 *)puVar11 = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar11 + 4) = local_58._4_4_;
  *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_50._4_4_;
  iVar10 = iVar16 * 2 + 1;
  local_58 = uVar4;
  uStack_50 = uVar5;
  iVar15 = iVar16;
  if ((int)param_2 <= iVar10) goto LAB_14680c3b8;
  goto LAB_14680c295;
LAB_14680c522:
  if (-1 < (int)(uVar8 - uVar9)) goto LAB_14680c55d;
  uVar4 = *puVar11;
  uVar5 = puVar11[1];
  uVar6 = puVar19[1];
  *puVar11 = *puVar19;
  puVar11[1] = uVar6;
  *puVar19 = uVar4;
  puVar19[1] = uVar5;
  iVar15 = iVar16 * 2;
  iVar13 = iVar16 * 2 + 1;
  iVar10 = iVar16;
  if ((longlong)uVar14 <= (longlong)iVar13) goto LAB_14680c55d;
  goto LAB_14680c43c;
LAB_14680c55d:
  uVar1 = uVar14 - 1;
  uVar4 = *param_1;
  uVar5 = param_1[1];
  uVar6 = (param_1 + uVar1 * 2)[1];
  *param_1 = param_1[uVar1 * 2];
  param_1[1] = uVar6;
  local_58._0_4_ = (undefined4)uVar4;
  local_58._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_50._0_4_ = (undefined4)uVar5;
  uStack_50._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  puVar11 = param_1 + uVar1 * 2;
  *(undefined4 *)puVar11 = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar11 + 4) = local_58._4_4_;
  *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_50._4_4_;
  bVar21 = uVar14 < 3;
  uVar14 = uVar1;
  local_58 = uVar4;
  uStack_50 = uVar5;
  if (bVar21) goto LAB_14680c404;
  goto LAB_14680c431;
}



// FUNCTION 14680c5a2 FUN_14680c5a2 body=129 status=ok
// SIG undefined FUN_14680c5a2(void)

longlong FUN_14680c5a2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_14680c623();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_1457a15b0(param_2);
    }
  }
  return param_1;
}



// FUNCTION 14680c623 FUN_14680c623 body=712 status=ok
// SIG undefined FUN_14680c623(void)

longlong * FUN_14680c623(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  int local_74;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0xb8,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xb8);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar7 = local_70._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_74 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar4 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_74,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_74);
      }
    }
    else {
      local_74 = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar1;
    }
    local_68 = param_2 + 2;
    local_70 = &DAT_100000000;
    local_60 = 0xffffffff;
    local_58 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_70);
    }
    local_98 = local_70;
    local_90 = local_68;
    local_88 = local_60;
    uVar8 = local_88;
    local_80 = local_58;
    local_7c = local_54;
    local_88._4_4_ = (int)((ulonglong)local_60 >> 0x20);
    local_a0 = param_2;
    if (local_88._4_4_ < (int)local_68[3]) {
      iVar9 = local_88._4_4_;
      local_88 = uVar8;
      do {
        lVar5 = *local_a0;
        FUN_14021219d(param_1,lVar5 + (longlong)iVar9 * 0xb8);
        FUN_14680a518(param_1,lVar5 + (longlong)iVar9 * 0xb8 + 0x10);
        local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~local_98._4_4_);
        FUN_1449c0562(&local_98);
        iVar9 = local_88._4_4_;
        uVar8 = local_88;
      } while (local_88._4_4_ < (int)local_90[3]);
    }
  }
  else {
    local_70 = (undefined1 *)((ulonglong)local_70._4_4_ << 0x20);
    puVar4 = (ulonglong *)param_1[1];
    puVar2 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_70,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_70);
      }
    }
    else {
      local_70 = (undefined1 *)CONCAT44(uVar7,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar2;
    }
    FUN_1409264b6(param_2,(ulonglong)local_70 & 0xffffffff);
    uVar8 = local_88;
    if (0 < (int)local_70) {
      iVar9 = 0;
      do {
        FUN_1457a12f0(param_2);
        puVar6 = local_98;
        puVar3 = local_98 + 0x10;
        memset(local_98,0,0xb0);
        *(undefined8 *)(puVar6 + 0x3c) = 0xffffffff00000080;
        *(undefined8 *)(puVar6 + 0x80) = 0;
        *(undefined8 *)(puVar6 + 0x60) = 0;
        *(undefined8 *)(puVar6 + 0x68) = 0;
        *(undefined8 *)(puVar6 + 0x8c) = 0xffffffff00000080;
        *(undefined4 *)(puVar6 + 0xb0) = 0xffffffff;
        FUN_14021219d(param_1,puVar6);
        FUN_14680a518(param_1,puVar3);
        iVar9 = iVar9 + 1;
        uVar8 = local_88;
      } while (iVar9 < (int)local_70);
    }
  }
  local_88 = uVar8;
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14680c8ec FUN_14680c8ec body=308 status=ok
// SIG undefined FUN_14680c8ec(void)

undefined4 * FUN_14680c8ec(longlong param_1,undefined4 *param_2,undefined8 param_3)

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
  FUN_1408e71f8(param_1,local_48);
  FUN_14680ca22(param_3,local_40);
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
  cVar3 = FUN_1408e7186(param_1,uVar4,local_40,&local_4c);
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
      FUN_1408e78c4(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14680ca22 FUN_14680ca22 body=100 status=ok
// SIG undefined FUN_14680ca22(void)

undefined8 * FUN_14680ca22(longlong *param_1,undefined8 *param_2)

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



// FUNCTION 14680ca86 FUN_14680ca86 body=131 status=ok
// SIG undefined FUN_14680ca86(void)

longlong FUN_14680ca86(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_14680cb09();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_14680b8e6(param_2);
    }
  }
  return param_1;
}



// FUNCTION 14680cb09 FUN_14680cb09 body=717 status=ok
// SIG undefined FUN_14680cb09(void)

longlong * FUN_14680cb09(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  longlong lVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  int local_74;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0xe0,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xe0);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar6 = local_70._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_74 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar3 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_74,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_74);
      }
    }
    else {
      local_74 = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar1;
    }
    local_68 = param_2 + 2;
    local_70 = &DAT_100000000;
    local_60 = 0xffffffff;
    local_58 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_70);
    }
    local_98 = local_70;
    local_90 = local_68;
    local_88 = local_60;
    uVar7 = local_88;
    local_80 = local_58;
    local_7c = local_54;
    local_88._4_4_ = (int)((ulonglong)local_60 >> 0x20);
    local_a0 = param_2;
    if (local_88._4_4_ < (int)local_68[3]) {
      iVar8 = local_88._4_4_;
      local_88 = uVar7;
      do {
        lVar4 = *local_a0;
        FUN_14021219d(param_1,lVar4 + (longlong)iVar8 * 0xe0);
        FUN_14680c5a2(param_1,lVar4 + (longlong)iVar8 * 0xe0 + 0x10);
        local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~local_98._4_4_);
        FUN_1449c0562(&local_98);
        iVar8 = local_88._4_4_;
        uVar7 = local_88;
      } while (local_88._4_4_ < (int)local_90[3]);
    }
  }
  else {
    local_70 = (undefined1 *)((ulonglong)local_70._4_4_ << 0x20);
    puVar3 = (ulonglong *)param_1[1];
    puVar2 = (undefined4 *)*puVar3 + 1;
    if ((undefined4 *)puVar3[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_70,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_70);
      }
    }
    else {
      local_70 = (undefined1 *)CONCAT44(uVar6,*(undefined4 *)*puVar3);
      *puVar3 = (ulonglong)puVar2;
    }
    FUN_1407da930(param_2,(ulonglong)local_70 & 0xffffffff);
    uVar7 = local_88;
    if (0 < (int)local_70) {
      iVar8 = 0;
      do {
        FUN_14680cdd8(param_2);
        puVar5 = local_98;
        memset(local_98,0,200);
        *(undefined8 *)(puVar5 + 0x3c) = 0xffffffff00000080;
        *(undefined8 *)(puVar5 + 0x60) = 0;
        *(undefined8 *)(puVar5 + 0x68) = 0;
        *(undefined8 *)(puVar5 + 0x8c) = 0xffffffff00000080;
        *(undefined8 *)(puVar5 + 0xb0) = 0;
        *(undefined8 *)(puVar5 + 0xb8) = 0;
        *(undefined8 *)(puVar5 + 200) = 0;
        *(undefined8 *)(puVar5 + 0xd0) = 0;
        *(undefined4 *)(puVar5 + 0xd8) = 0xffffffff;
        FUN_14021219d(param_1,puVar5);
        FUN_14680c5a2(param_1,puVar5 + 0x10);
        iVar8 = iVar8 + 1;
        uVar7 = local_88;
      } while (iVar8 < (int)local_70);
    }
  }
  local_88 = uVar7;
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14680cdd8 FUN_14680cdd8 body=235 status=ok
// SIG undefined FUN_14680cdd8(void)

int * FUN_14680cdd8(longlong *param_1,int *param_2)

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
      FUN_14041fbf2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0xe0);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0xe0) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0xe0 + *param_1;
  return param_2;
}



// FUNCTION 14680cec4 FUN_14680cec4 body=31 status=ok
// SIG undefined FUN_14680cec4(void)

undefined8 FUN_14680cec4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14680cefa FUN_14680cefa body=60 status=ok
// SIG undefined FUN_14680cefa(void)

void FUN_14680cefa(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20);
  *puVar1 = &PTR_LAB_149e1dc70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e2b4a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14680cf36 FUN_14680cf36 body=60 status=ok
// SIG undefined FUN_14680cf36(void)

void FUN_14680cf36(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20);
  *puVar1 = &PTR_LAB_149e1dc70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e2b4a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14680cf72 FUN_14680cf72 body=100 status=ok
// SIG undefined FUN_14680cf72(void)

void FUN_14680cf72(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined8 *puVar1;
  
  EnterCriticalSection(param_2);
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20,param_2 + 1);
  *puVar1 = &PTR_LAB_149e1dc70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e2b4a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014680cfc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14680cfe4 FUN_14680cfe4 body=23 status=ok
// SIG undefined FUN_14680cfe4(void)

undefined8 FUN_14680cfe4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3);
  return 1;
}



// FUNCTION 14680cffc FUN_14680cffc body=129 status=ok
// SIG undefined FUN_14680cffc(void)

longlong FUN_14680cffc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_14680d07d();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_140d69a94(param_2);
    }
  }
  return param_1;
}



// FUNCTION 14680d07d FUN_14680d07d body=798 status=ok
// SIG undefined FUN_14680d07d(void)

longlong * FUN_14680d07d(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong *puVar5;
  longlong lVar6;
  uint uVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  int local_84;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0xc0,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xc0);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar7 = local_80._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_84 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar5 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar5 + 1;
    if ((int *)puVar5[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_84,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_84);
      }
    }
    else {
      local_84 = *(int *)*puVar5;
      *puVar5 = (ulonglong)piVar1;
    }
    local_78 = param_2 + 2;
    local_80 = (undefined8 *)&DAT_100000000;
    local_70 = 0xffffffff;
    local_68 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_80);
    }
    local_a8 = local_80;
    local_a0 = local_78;
    local_98 = local_70;
    uVar8 = local_98;
    local_90 = local_68;
    local_8c = local_64;
    local_98._4_4_ = (int)((ulonglong)local_70 >> 0x20);
    local_b0 = param_2;
    if (local_98._4_4_ < (int)local_78[3]) {
      iVar9 = local_98._4_4_;
      local_98 = uVar8;
      do {
        lVar6 = *local_b0;
        lVar10 = (longlong)iVar9 * 0xc0;
        FUN_14021219d(param_1,lVar6 + lVar10);
        FUN_14680a518(param_1,lVar6 + lVar10 + 0x10);
        FUN_1467dbe7c(param_1,lVar6 + lVar10 + 0x60);
        local_98 = CONCAT44(local_98._4_4_,(uint)local_98 & ~local_a8._4_4_);
        FUN_1449c0562(&local_a8);
        iVar9 = local_98._4_4_;
        uVar8 = local_98;
      } while (local_98._4_4_ < (int)local_a0[3]);
    }
  }
  else {
    local_80 = (undefined8 *)((ulonglong)local_80._4_4_ << 0x20);
    puVar5 = (ulonglong *)param_1[1];
    puVar2 = (undefined4 *)*puVar5 + 1;
    if ((undefined4 *)puVar5[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_80,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_80);
      }
    }
    else {
      local_80 = (undefined8 *)CONCAT44(uVar7,*(undefined4 *)*puVar5);
      *puVar5 = (ulonglong)puVar2;
    }
    FUN_1407da406(param_2,(ulonglong)local_80 & 0xffffffff);
    uVar8 = local_98;
    if (0 < (int)local_80) {
      iVar9 = 0;
      do {
        FUN_140d69788(param_2,&local_b0);
        puVar3 = local_a8 + 2;
        local_a8[6] = 0;
        *(undefined4 *)(local_a8 + 7) = 0;
        *local_a8 = 0;
        local_a8[1] = 0;
        local_a8[2] = 0;
        local_a8[3] = 0;
        *(undefined8 *)((longlong)local_a8 + 0x3c) = 0xffffffff00000080;
        *(undefined4 *)((longlong)local_a8 + 0x44) = 0;
        local_a8[10] = 0;
        *(undefined4 *)(local_a8 + 0xb) = 0;
        puVar4 = local_a8 + 0xc;
        local_a8[0x10] = 0;
        *(undefined4 *)(local_a8 + 0x11) = 0;
        local_a8[0xc] = 0;
        local_a8[0xd] = 0;
        *(undefined8 *)((longlong)local_a8 + 0x8c) = 0xffffffff00000080;
        *(undefined4 *)((longlong)local_a8 + 0x94) = 0;
        local_a8[0x14] = 0;
        *(undefined4 *)(local_a8 + 0x15) = 0;
        *(undefined1 *)(local_a8 + 0x16) = 1;
        *(undefined4 *)(local_a8 + 0x17) = 0xffffffff;
        FUN_14021219d(param_1);
        FUN_14680a518(param_1,puVar3);
        FUN_1467dbe7c(param_1,puVar4);
        iVar9 = iVar9 + 1;
        uVar8 = local_98;
      } while (iVar9 < (int)local_80);
    }
  }
  local_98 = uVar8;
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14680d39c FUN_14680d39c body=131 status=ok
// SIG undefined FUN_14680d39c(void)

longlong FUN_14680d39c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_1467dbbd7();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_145739f16(param_2);
    }
  }
  return param_1;
}



// FUNCTION 14680d420 FUN_14680d420 body=114 status=ok
// SIG undefined FUN_14680d420(void)

void FUN_14680d420(longlong *param_1,int param_2)

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



// FUNCTION 14680d492 FUN_14680d492 body=60 status=ok
// SIG undefined FUN_14680d492(void)

void FUN_14680d492(longlong *param_1)

{
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14680d4ce FUN_14680d4ce body=372 status=ok
// SIG undefined FUN_14680d4ce(void)

void FUN_14680d4ce(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
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
  iVar2 = *(int *)(param_2 + 8);
  iVar1 = iVar2;
  if (iVar2 != *(int *)(param_2 + 0x34)) {
    FUN_141539c3e(param_2);
    FUN_14170af7a(param_2);
    iVar1 = *(int *)(param_2 + 8);
    iVar2 = *(int *)(param_2 + 0x34);
  }
  uVar4 = (longlong)(int)param_1[1] - (longlong)*(int *)((longlong)param_1 + 0x34);
  uVar3 = (uint)uVar4;
  if ((uint)(iVar1 - iVar2) < uVar3) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b(uVar4);
    }
    FUN_140e83416(param_2,uVar4 & 0xffffffff);
    iVar2 = 1;
    if (3 < uVar3) {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((*(int *)(param_2 + 0x48) == 0) || (*(int *)(param_2 + 0x48) < iVar2)) {
      *(int *)(param_2 + 0x48) = iVar2;
      FUN_14482b9e8(param_2);
    }
  }
  local_38 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_60 = local_40;
  local_58 = local_38;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_14482b35e(param_2,&local_40,(longlong)iStack_4c * 0xb8 + *local_68,0);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14680d644 FUN_14680d644 body=316 status=ok
// SIG undefined FUN_14680d644(void)

undefined8 FUN_14680d644(undefined8 param_1,wchar_t *param_2)

{
  undefined8 uVar1;
  size_t sVar2;
  undefined1 auStack_198 [32];
  longlong local_178;
  int local_170;
  longlong local_168;
  int local_160;
  undefined1 local_158 [256];
  longlong local_58;
  wchar_t *local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_144a81018(local_158,"Windows");
  uVar1 = FUN_140b7d41a();
  FUN_140056680(&local_178,uVar1);
  sVar2 = wcslen(local_50);
  FUN_1412cfe60(&local_168,&local_178,(int)sVar2 + (uint)((int)sVar2 != -1 && local_170 == 0) + 1);
  FUN_1401aebe8(&local_168,local_50,sVar2 & 0xffffffff);
  sVar2 = wcslen(param_2);
  FUN_1412cfe60(param_1,&local_168,(int)sVar2 + (uint)((int)sVar2 != -1 && local_160 == 0) + 1);
  FUN_1401aebe8(param_1,param_2,sVar2 & 0xffffffff);
  if (local_168 != 0) {
    FUN_1400020a8();
  }
  if (local_178 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14680d782 FUN_14680d782 body=451 status=ok
// SIG undefined FUN_14680d782(void)

int FUN_14680d782(int param_1)

{
  ushort uVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar8;
  undefined1 auStack_138 [32];
  longlong local_118 [2];
  undefined2 *local_108;
  int local_100;
  undefined2 *local_f8;
  int local_f0;
  ulonglong local_20;
  ulonglong uVar7;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (param_1 < 1) {
    FUN_145cbe6c2(local_118 + 2,L"EditorSettings.ini");
    puVar3 = &DAT_149dfb77a;
    if (local_100 != 0) {
      puVar3 = local_108;
    }
    FUN_145cbe6c2(&local_f8,L"EditorGameAgnostic.ini");
    puVar4 = &DAT_149dfb77a;
    if (local_f0 != 0) {
      puVar4 = local_f8;
    }
    FUN_14680db4a(puVar4,puVar3);
    if (local_f8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1408e76da(&local_f8);
    FUN_140fa61d5(&local_f8,local_118 + 2,0);
    FUN_14680dc16(&local_f8);
    local_118[0] = 0;
    local_118[1] = 0;
    FUN_14577b4ea(&local_f8,local_118 + 2,0,local_118);
    if (local_118[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1409263a6(&local_f8);
    if (local_108 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (param_1 != 1) goto LAB_14680d81f;
  param_1 = 1;
  if (DAT_14c764000 != 0) {
    lVar2 = 0;
    uVar5 = DAT_14c764000;
    while( true ) {
      uVar1 = *(ushort *)((longlong)&DAT_149e01fe8 + lVar2);
      uVar8 = (uint)uVar1;
      if (uVar5 != uVar1) break;
      if (uVar5 == 0) goto LAB_14680d81f;
LAB_14680d7e6:
      uVar5 = *(ushort *)((longlong)&DAT_14c764002 + lVar2);
      lVar2 = lVar2 + 2;
    }
    uVar6 = (uint)uVar5;
    uVar7 = (ulonglong)uVar6;
    if ((uVar1 | uVar5) < 0x80) {
      uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar7];
      uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar1];
      if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar1]) goto LAB_14680d7e6;
    }
    if (uVar6 != uVar8) {
      FUN_14680da51(L"EditorLayout.ini",L"EditorLayout.ini");
      FUN_14680da51(L"EditorKeyBindings.ini",L"EditorKeyBindings.ini");
      param_1 = 2;
    }
  }
LAB_14680d81f:
  if ((local_20 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_138);
}



// FUNCTION 14680d946 FUN_14680d946 body=266 status=ok
// SIG undefined FUN_14680d946(void)

void FUN_14680d946(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_148 [32];
  longlong local_128 [2];
  longlong local_118 [2];
  undefined1 local_108 [216];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_1408e76da(local_108);
  FUN_140056680(local_118,param_1);
  FUN_140fa61d5(local_108,local_118,0);
  if (local_118[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_118,param_2);
  FUN_140fa61d5(local_108,local_118,1);
  if (local_118[0] != 0) {
    FUN_1400020a8();
  }
  local_118[0] = 0;
  local_118[1] = 0;
  FUN_140056680(local_128,param_3);
  FUN_14577b4ea(local_108,local_128,0,local_118);
  if (local_128[0] != 0) {
    FUN_1400020a8();
  }
  if (local_118[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1409263a6(local_108);
  if ((local_30 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14680da51 FUN_14680da51 body=248 status=ok
// SIG undefined FUN_14680da51(void)

void FUN_14680da51(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50;
  undefined1 local_48;
  undefined2 *local_38;
  int local_30;
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14680d644(&local_28,param_1);
  FUN_145cbe6c2(&local_38,param_2);
  cVar1 = FUN_1415258a0(&local_28);
  if (cVar1 != '\0') {
    cVar1 = FUN_1415258a0();
    if (cVar1 == '\0') {
      plVar2 = (longlong *)FUN_14054d1d4();
      puVar3 = &DAT_149dfb77a;
      if (local_20 != 0) {
        puVar3 = local_28;
      }
      puVar4 = &DAT_149dfb77a;
      if (local_30 != 0) {
        puVar4 = local_38;
      }
      local_48 = 0;
      local_50 = 0;
      local_58 = 0;
      (**(code **)(*plVar2 + 0x40))(plVar2,puVar4,puVar3,1);
    }
    else {
      puVar3 = &DAT_149dfb77a;
      if (local_30 != 0) {
        puVar3 = local_38;
      }
      puVar4 = &DAT_149dfb77a;
      if (local_20 != 0) {
        puVar4 = local_28;
      }
      FUN_14680d946(puVar3,puVar4,puVar3);
    }
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14680db4a FUN_14680db4a body=202 status=ok
// SIG undefined FUN_14680db4a(void)

void FUN_14680db4a(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50;
  undefined1 local_48;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140056680(local_38,param_1);
  cVar1 = FUN_1415258a0(local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (cVar1 != '\0') {
    FUN_140056680(local_38,param_2);
    cVar1 = FUN_1415258a0(local_38);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
    if (cVar1 == '\0') {
      plVar2 = (longlong *)FUN_14054d1d4();
      local_48 = 0;
      local_50 = 0;
      local_58 = 0;
      (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_1,1);
    }
    else {
      FUN_14680d946(param_2,param_1,param_2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14680dc16 FUN_14680dc16 body=904 status=ok
// SIG undefined FUN_14680dc16(void)

void FUN_14680dc16(longlong *param_1)

{
  longlong **pplVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStack_148 [32];
  longlong local_128 [2];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_f4 [4];
  longlong *local_f0;
  int local_e8;
  uint uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_140056680(&local_f0,L"/Script/UnrealEd.EditorGameAgnosticSettings");
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
  plVar13 = local_f0;
  if (local_e8 == 0) {
    plVar13 = (longlong *)&DAT_149dfb77a;
  }
  plVar8 = (longlong *)(ulonglong)(local_e8 - 1);
  if (local_e8 == 0) {
    plVar8 = (longlong *)0x0;
  }
  uVar5 = FUN_144a49b4a(plVar8,plVar13);
  iVar6 = FUN_14052bbf0(param_1,uVar5,&local_f0);
  plVar13 = (longlong *)0x0;
  if (iVar6 != -1) {
    plVar13 = (longlong *)((longlong)iVar6 * 0xc0 + *param_1);
  }
  plVar8 = plVar13;
  if (plVar13 != (longlong *)0x0) {
    plVar8 = plVar13 + 2;
  }
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
  if (local_f0 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (plVar8 != (longlong *)0x0) {
    FUN_140056680(&local_f0,L"/Script/UnrealEd.EditorSettings");
    AcquireSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
    plVar14 = local_f0;
    if (local_e8 == 0) {
      plVar14 = (longlong *)&DAT_149dfb77a;
    }
    uVar9 = (ulonglong)(local_e8 - 1);
    if (local_e8 == 0) {
      uVar9 = 0;
    }
    uVar5 = FUN_144a49b4a(uVar9,plVar14);
    iVar6 = FUN_14052bbf0(param_1,uVar5,&local_f0);
    uVar9 = 0;
    if (iVar6 != -1) {
      uVar9 = (longlong)iVar6 * 0xc0 + *param_1;
    }
    plVar14 = (longlong *)(uVar9 + 0x10);
    if (uVar9 == 0) {
      plVar14 = (longlong *)0x0;
    }
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
    if (local_f0 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (plVar14 == (longlong *)0x0) {
      FUN_140b7c8de(&local_f0,plVar8);
      FUN_140056680(local_128,L"/Script/UnrealEd.EditorSettings");
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c866fe8);
      local_118 = local_128;
      uStack_110 = &local_f0;
      FUN_146806aee(param_1,local_f4,&local_118,0);
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c866fe8);
      if (local_128[0] != 0) {
        FUN_1400020a8();
      }
      FUN_140056680(&local_118,L"/Script/UnrealEd.EditorGameAgnosticSettings");
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c866fe8);
      FUN_140fe62dc(param_1,&local_118);
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c866fe8);
      if (local_118 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      FUN_140b7cb8c(&local_f0);
      uVar4 = local_d8;
    }
    else {
      pplVar1 = (longlong **)(plVar8 + 2);
      local_118 = (longlong *)&DAT_100000000;
      local_108 = 0xffffffff;
      uStack_100 = 0;
      uStack_110 = pplVar1;
      if ((int)plVar8[5] == 0) {
        iVar6 = 0;
      }
      else {
        FUN_1449c0562(&local_118);
        iVar6 = (int)plVar8[5];
      }
      uStack_d0 = CONCAT44(uStack_fc,uStack_100);
      local_d8 = local_108;
      uVar4 = local_d8;
      local_e8 = (int)local_118;
      uStack_e4 = local_118._4_4_;
      uStack_e0 = (undefined4)uStack_110;
      uStack_dc = uStack_110._4_4_;
      local_d8._4_4_ = (int)((ulonglong)local_108 >> 0x20);
      local_f0 = plVar8;
      if ((local_d8._4_4_ != iVar6) || (uStack_110 != pplVar1)) {
        plVar13 = plVar13 + 2;
        iVar7 = local_d8._4_4_;
        local_d8 = uVar4;
        do {
          lVar2 = *(longlong *)(*plVar13 + (longlong)iVar7 * 0x40);
          if ((int)plVar14[1] != *(int *)((longlong)plVar14 + 0x34)) {
            uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
            uVar11 = (uint)lVar2 & 0xffff;
            plVar10 = (longlong *)plVar14[8];
            if ((longlong *)plVar14[8] == (longlong *)0x0) {
              plVar10 = plVar14 + 7;
            }
            iVar12 = *(int *)((longlong)plVar10 +
                             (ulonglong)
                             ((int)plVar14[9] - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar11) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar11 >> 4)) * 4);
            if (iVar12 != -1) {
              do {
                if (*(longlong *)(*plVar14 + (longlong)iVar12 * 0x40) == lVar2) goto LAB_14680de3a;
                iVar12 = *(int *)((longlong)iVar12 * 0x40 + *plVar14 + 0x38);
              } while (iVar12 != -1);
            }
          }
          FUN_140d68bce(param_1,L"/Script/UnrealEd.EditorSettings",lVar2,
                        *plVar13 + (longlong)iVar7 * 0x40 + 0x10);
LAB_14680de3a:
          local_d8 = CONCAT44(local_d8._4_4_,(uint)local_d8 & ~uStack_e4);
          FUN_1449c0562(&local_e8);
          plVar13 = local_f0;
          iVar7 = local_d8._4_4_;
          uVar4 = local_d8;
        } while (local_f0 != plVar8 ||
                 ((longlong **)CONCAT44(uStack_dc,uStack_e0) != pplVar1 || local_d8._4_4_ != iVar6))
        ;
      }
    }
    local_d8 = uVar4;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  }
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14680df9f FUN_14680df9f body=312 status=ok
// SIG undefined FUN_14680df9f(void)

void FUN_14680df9f(void)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined2 *local_70;
  int local_68;
  undefined8 local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14626aeae(DAT_14c872ce0,&local_58);
  if ((longlong)local_50 == 0) {
    local_50 = 0;
  }
  else {
    lVar6 = (longlong)local_50 << 4;
    lVar5 = local_58;
    do {
      lVar3 = FUN_141348652(DAT_14c872ce0,lVar5);
      AcquireSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
      iVar1 = *(int *)(lVar3 + 8);
      iVar2 = *(int *)(lVar3 + 0x34);
      ReleaseSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
      if (iVar2 < iVar1) {
        local_60 = *(undefined8 *)(lVar3 + 0x54);
        FUN_1400021e4(&local_60,&local_70);
        puVar4 = &DAT_149dfb77a;
        if (local_68 != 0) {
          puVar4 = local_70;
        }
        local_78 = 1;
        FUN_14626b27c(lVar3,puVar4,1,0);
        if (local_70 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      lVar5 = lVar5 + 0x10;
      lVar6 = lVar6 + -0x10;
    } while (lVar6 != 0);
  }
  FUN_1447a1747(local_58,local_50);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_14277e53c(DAT_14c867100);
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14680e0d8 FUN_14680e0d8 body=55 status=ok
// SIG undefined FUN_14680e0d8(void)

void FUN_14680e0d8(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14c867100;
  DAT_14c867100 = 0;
  if (lVar1 == 0) {
    return;
  }
  FUN_1468141b0(lVar1);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 14680e110 FUN_14680e110 body=113 status=ok
// SIG undefined FUN_14680e110(void)

undefined8 * FUN_14680e110(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149e2bf00;
  *(undefined1 *)(param_1 + 1) = 1;
  FUN_144a5dc74(param_1 + 2);
  FUN_144a5dc74(param_1 + 4);
  FUN_144a5dc74(param_1 + 6);
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_144a5dc74(param_1 + 10);
  param_1[0xc] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xd),4000);
  return param_1;
}



// FUNCTION 14680e182 FUN_14680e182 body=110 status=ok
// SIG undefined FUN_14680e182(void)

void FUN_14680e182(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149e2bf00;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  if ((longlong *)param_1[10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[10] + 0x10))();
  }
  FUN_1449db362(param_1 + 8);
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x10))();
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014680e1e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14680e1f0 FUN_14680e1f0 body=162 status=ok
// SIG undefined FUN_14680e1f0(void)

void FUN_14680e1f0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != plVar1) {
    param_1[2] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 3) = (int)param_2[1];
  plVar1 = (longlong *)param_2[2];
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != plVar1) {
    param_1[4] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 5) = (int)param_2[3];
  param_1[0xc] = param_2[0x10];
  (**(code **)(*param_1 + 0x68))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014680e28b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  return;
}



// FUNCTION 14680e292 FUN_14680e292 body=191 status=ok
// SIG undefined FUN_14680e292(void)

void FUN_14680e292(longlong *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_68 [40];
  longlong *local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != plVar1) {
    param_1[2] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 3) = (int)param_2[1];
  if (param_3 != '\0') {
    FUN_144a5dc74(local_40);
    FUN_140008f88(param_1 + 4,local_40);
    if (local_40[0] != (longlong *)0x0) {
      (**(code **)(*local_40[0] + 0x10))();
    }
  }
  (**(code **)(*param_1 + 0x68))(param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14680e352 FUN_14680e352 body=103 status=ok
// SIG undefined FUN_14680e352(void)

void FUN_14680e352(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != plVar1) {
    param_1[4] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 5) = (int)param_2[1];
  (**(code **)(*param_1 + 0x68))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014680e3b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  return;
}



// FUNCTION 14680e3ba FUN_14680e3ba body=103 status=ok
// SIG undefined FUN_14680e3ba(void)

void FUN_14680e3ba(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)param_1[6];
  if (plVar2 != plVar1) {
    param_1[6] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 7) = (int)param_2[1];
  (**(code **)(*param_1 + 0x68))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014680e41a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  return;
}



// FUNCTION 14680e422 FUN_14680e422 body=118 status=ok
// SIG undefined FUN_14680e422(void)

void FUN_14680e422(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  FUN_14009d848(param_1 + 8,param_2);
  plVar1 = (longlong *)*param_3;
  plVar2 = (longlong *)param_1[10];
  if (plVar2 != plVar1) {
    param_1[10] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 0xb) = (int)param_3[1];
  (**(code **)(*param_1 + 0x68))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014680e491. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  return;
}



// FUNCTION 14680e498 FUN_14680e498 body=57 status=ok
// SIG undefined FUN_14680e498(void)

void FUN_14680e498(longlong *param_1,byte param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  *(byte *)(param_1 + 1) = param_2 ^ 3;
  (**(code **)(*param_1 + 0x68))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014680e4ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  return;
}



// FUNCTION 14680e4d2 FUN_14680e4d2 body=228 status=ok
// SIG undefined FUN_14680e4d2(void)

void FUN_14680e4d2(longlong *param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_98 [40];
  undefined1 local_70 [40];
  longlong *local_48;
  undefined4 local_40;
  longlong *local_38;
  undefined4 local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14680e5b8(local_70,param_2,param_3,param_4 ^ 3);
  plVar2 = local_48;
  plVar1 = (longlong *)param_1[6];
  if (local_48 != plVar1) {
    local_48 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  plVar2 = local_38;
  local_40 = (undefined4)param_1[7];
  plVar1 = (longlong *)param_1[10];
  if (local_38 != plVar1) {
    local_38 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  local_30 = (undefined4)param_1[0xb];
  FUN_14009d848(local_28,param_1 + 8);
  (**(code **)(*param_1 + 0x40))(param_1,local_70);
  FUN_14680e628(local_70);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14680e5b8 FUN_14680e5b8 body=111 status=ok
// SIG undefined FUN_14680e5b8(void)

undefined1 *
FUN_14680e5b8(undefined1 *param_1,longlong *param_2,longlong *param_3,undefined1 param_4)

{
  longlong *plVar1;
  
  *param_1 = param_4;
  plVar1 = (longlong *)*param_2;
  *(longlong **)(param_1 + 8) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x10) = (int)param_2[1];
  plVar1 = (longlong *)*param_3;
  *(longlong **)(param_1 + 0x18) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x20) = (int)param_3[1];
  FUN_144a5dc74(param_1 + 0x28);
  FUN_144a5dc74(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  return param_1;
}



// FUNCTION 14680e628 FUN_14680e628 body=90 status=ok
// SIG undefined FUN_14680e628(void)

void FUN_14680e628(longlong param_1)

{
  FUN_1449db362(param_1 + 0x48);
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
  }
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014680e677. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14680e682 FUN_14680e682 body=372 status=ok
// SIG undefined FUN_14680e682(void)

void FUN_14680e682(longlong *param_1,char *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  bool bVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  plVar3 = param_1 + 2;
  cVar4 = FUN_14010cee6(plVar3,param_2 + 8,0);
  bVar5 = true;
  if (cVar4 != '\0') {
    cVar4 = FUN_14010cee6(param_1 + 4,param_2 + 0x18,0);
    if (cVar4 != '\0') {
      cVar4 = FUN_14010cee6(param_1 + 6,param_2 + 0x28,0);
      if (cVar4 != '\0') {
        cVar4 = FUN_14010cee6(param_1 + 10,param_2 + 0x38,0);
        if (cVar4 != '\0') {
          bVar5 = (char)param_1[1] != *param_2;
        }
      }
    }
  }
  plVar1 = *(longlong **)(param_2 + 8);
  plVar2 = (longlong *)*plVar3;
  if (plVar2 != plVar1) {
    *plVar3 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x10);
  plVar3 = *(longlong **)(param_2 + 0x18);
  plVar1 = (longlong *)param_1[4];
  if (plVar1 != plVar3) {
    param_1[4] = (longlong)plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
  }
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x20);
  plVar3 = *(longlong **)(param_2 + 0x28);
  plVar1 = (longlong *)param_1[6];
  if (plVar1 != plVar3) {
    param_1[6] = (longlong)plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
  }
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x30);
  plVar3 = *(longlong **)(param_2 + 0x38);
  plVar1 = (longlong *)param_1[10];
  if (plVar1 != plVar3) {
    param_1[10] = (longlong)plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
  }
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0x40);
  FUN_14009d848(param_1 + 8,param_2 + 0x48);
  *(char *)(param_1 + 1) = *param_2;
  if (bVar5) {
    (**(code **)(*param_1 + 0x68))(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00014680e7ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  return;
}



// FUNCTION 14680e800 FUN_14680e800 body=1 status=ok
// SIG undefined FUN_14680e800(void)

void FUN_14680e800(void)

{
  return;
}



// FUNCTION 14680e802 FUN_14680e802 body=178 status=ok
// SIG undefined FUN_14680e802(void)

longlong * FUN_14680e802(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  if ((longlong)(int)param_1[1] < 1) {
    plVar6 = (longlong *)FUN_14001cc68(0xa0,0x10);
    plVar6[1] = (longlong)&DAT_100000001;
    *plVar6 = (longlong)&PTR_FUN_149e30790;
    FUN_14680e110(plVar6 + 2);
    *param_2 = (longlong)(plVar6 + 2);
    param_2[1] = (longlong)plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
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
  else {
    lVar4 = (longlong)(int)param_1[1] * 0x50 + *param_1;
    pcVar3 = *(code **)(lVar4 + -0x40);
    plVar6 = *(longlong **)(lVar4 + -0x30);
    if (*(longlong **)(lVar4 + -0x30) == (longlong *)0x0) {
      plVar6 = (longlong *)(lVar4 + -0x20);
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    (*pcVar3)(param_2,uVar5);
  }
  return param_2;
}



// FUNCTION 14680e8b4 FUN_14680e8b4 body=117 status=ok
// SIG undefined FUN_14680e8b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14680e8b4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c867be8) {
    FUN_144b3d300(&DAT_14c867be8);
    if (DAT_14c867be8 == -1) {
      DAT_14c867bd0 = 0;
      _DAT_14c867bd8 = 0;
      _DAT_14c867be0 = 2;
      atexit(FUN_142780520);
      _Init_thread_footer(&DAT_14c867be8);
    }
  }
  return &DAT_14c867bd0;
}



// FUNCTION 14680e92a FUN_14680e92a body=117 status=ok
// SIG undefined FUN_14680e92a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14680e92a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c867c08) {
    FUN_144b3d300(&DAT_14c867c08);
    if (DAT_14c867c08 == -1) {
      DAT_14c867bf0 = 0;
      _DAT_14c867bf8 = 0;
      _DAT_14c867c00 = 2;
      atexit(FUN_142780551);
      _Init_thread_footer(&DAT_14c867c08);
    }
  }
  return &DAT_14c867bf0;
}



// FUNCTION 14680e99f FUN_14680e99f body=67 status=ok
// SIG undefined FUN_14680e99f(void)

void FUN_14680e99f(undefined4 param_1)

{
  char cVar1;
  char cVar2;
  undefined4 *puVar3;
  
  cVar1 = (*(code *)PTR_FUN_14c758760)();
  cVar2 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    if (cVar2 == '\0') {
      return;
    }
    puVar3 = &DAT_14c7590b4;
  }
  else {
    puVar3 = &DAT_14c7590bc;
    if (cVar2 != '\0') {
      puVar3 = &DAT_14c7590b8;
    }
  }
  *puVar3 = param_1;
  return;
}



// FUNCTION 14680e9e2 FUN_14680e9e2 body=91 status=ok
// SIG undefined FUN_14680e9e2(void)

undefined8 FUN_14680e9e2(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if ((DAT_14c867dd0 != (longlong *)0x0 && DAT_14c867dd8 != 0) &&
     (cVar1 = (**(code **)(*DAT_14c867dd0 + 0x30))(), cVar1 != '\0')) {
    plVar3 = DAT_14c867dd0;
    if (DAT_14c867dd8 == 0) {
      plVar3 = (longlong *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x00014680ea3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14680ea3d FUN_14680ea3d body=37 status=ok
// SIG undefined FUN_14680ea3d(void)

void FUN_14680ea3d(undefined8 param_1)

{
  FUN_140033559(".\\Runtime/Core/Private/Misc/CoreMisc.cpp",0x1d9,
                L"The %s constructor is for internal usage only for hot-reload purposes. Please do NOT use it."
                ,param_1);
  return;
}



// FUNCTION 14680ea62 FUN_14680ea62 body=129 status=ok
// SIG undefined FUN_14680ea62(void)

undefined8 * FUN_14680ea62(undefined8 *param_1,char param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  void *_Src;
  
  FUN_140f7b050();
  *param_1 = 0;
  _Src = DAT_14c867f18;
  pvVar2 = DAT_14c867ef8;
  puVar3 = &DAT_14c867f18;
  if (param_2 == '\x01') {
    puVar3 = &DAT_14c867ef8;
  }
  iVar1 = *(int *)(puVar3 + 1);
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    if (param_2 == '\x01') {
      _Src = pvVar2;
    }
    FUN_1401b309e(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 14680eae4 FUN_14680eae4 body=631 status=ok
// SIG undefined FUN_14680eae4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14680eae4(byte param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_138 [32];
  longlong local_118 [2];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_d0;
  int local_c8;
  longlong *local_70;
  undefined4 local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c867f70) && (FUN_144b3d300(&DAT_14c867f70), DAT_14c867f70 == -1)) {
    DAT_14c867f60 = 0;
    _DAT_14c867f68 = 0;
    DAT_14c867f50 = 0;
    _DAT_14c867f58 = 0;
    atexit(FUN_142780e8f);
    _Init_thread_footer(&DAT_14c867f70);
  }
  uVar1 = local_58;
  if ((&DAT_14c867f49)[param_1] == '\0') {
    (&DAT_14c867f49)[param_1] = 1;
    FUN_140f7b050();
    local_108 = 0x100000000;
    uStack_100 = &DAT_14c867e68;
    local_f8 = 0xffffffff;
    uStack_f0 = 0;
    if (DAT_14c867e80 == 0) {
      iVar3 = 0;
    }
    else {
      FUN_1449c0562(&local_108);
      iVar3 = DAT_14c867e80;
    }
    local_68 = (undefined4)local_108;
    uStack_64 = local_108._4_4_;
    uStack_60 = (undefined4)uStack_100;
    uStack_5c = uStack_100._4_4_;
    uStack_50 = CONCAT44(uStack_ec,uStack_f0);
    local_58 = local_f8;
    uVar1 = local_58;
    local_70 = &DAT_14c867e58;
    local_58._4_4_ = (int)((ulonglong)local_f8 >> 0x20);
    if ((local_58._4_4_ != iVar3) || (uStack_100 != &DAT_14c867e68)) {
      iVar2 = local_58._4_4_;
      local_58 = uVar1;
      do {
        local_108 = *(undefined8 *)(*local_70 + (longlong)iVar2 * 0xa0);
        FUN_1468128ac(&uStack_100);
        FUN_1400021e4(&local_108,local_118);
        FUN_1405e9454(&DAT_14c867f50 + (ulonglong)param_1 * 2,local_118);
        if (local_118[0] != 0) {
          FUN_1400020a8();
        }
        if ((longlong)local_c8 != 0) {
          lVar4 = (longlong)local_c8 << 4;
          lVar5 = local_d0;
          do {
            FUN_1412fabe8(&DAT_14c867f50 + (ulonglong)param_1 * 2,lVar5);
            lVar5 = lVar5 + 0x10;
            lVar4 = lVar4 + -0x10;
          } while (lVar4 != 0);
        }
        FUN_1457d3294(&uStack_100);
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~uStack_64);
        FUN_1449c0562(&local_68);
        iVar2 = local_58._4_4_;
        uVar1 = local_58;
      } while (local_70 != &DAT_14c867e58 ||
               ((undefined *)CONCAT44(uStack_5c,uStack_60) != &DAT_14c867e68 ||
               local_58._4_4_ != iVar3));
    }
  }
  local_58 = uVar1;
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return &DAT_14c867f50 + (ulonglong)param_1 * 2;
}



// FUNCTION 14680ed5c FUN_14680ed5c body=49 status=ok
// SIG undefined FUN_14680ed5c(void)

bool FUN_14680ed5c(uint param_1)

{
  uint uVar1;
  bool bVar2;
  
  if ((param_1 & 3) == 0) {
    uVar1 = param_1 * -0x3d70a3d7 + 0x51eb850;
    bVar2 = true;
    if ((uVar1 >> 2 | param_1 * 0x40000000) < 0x28f5c29) {
      bVar2 = (uVar1 >> 4 | param_1 * -0x70000000) < 0xa3d70b;
    }
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



// FUNCTION 14680ed8e FUN_14680ed8e body=113 status=ok
// SIG undefined FUN_14680ed8e(void)

undefined8 FUN_14680ed8e(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14047ad2e(param_1,&local_28,L"%Y.%m.%d-%H.%M.%S");
  iVar1 = local_20 + -1;
  if (local_20 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_2,local_28,iVar1);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14680ee00 FUN_14680ee00 body=203 status=ok
// SIG undefined FUN_14680ee00(void)

int FUN_14680ee00(undefined8 param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_58 [44];
  int local_2c;
  int local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14021332c(param_1,&local_24,&local_28,&local_2c);
  if (1 < (longlong)local_28) {
    uVar1 = local_24 * -0x3d70a3d7 + 0x51eb850;
    lVar2 = 0;
    do {
      iVar3 = 0x1d;
      if ((lVar2 != 1 || (local_24 & 3) != 0) ||
          0xa3d70a < (uVar1 >> 4 | local_24 * -0x70000000) &&
          (uVar1 >> 2 | local_24 * 0x40000000) < 0x28f5c29) {
        iVar3 = (&DAT_149e2c4e4)[lVar2];
      }
      local_2c = local_2c + iVar3;
      lVar2 = lVar2 + 1;
    } while ((longlong)local_28 + -1 != lVar2);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_2c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14680eecc FUN_14680eecc body=99 status=ok
// SIG undefined FUN_14680eecc(void)

undefined4 FUN_14680eecc(uint param_1,int param_2)

{
  undefined4 uVar1;
  
  if (((param_1 & 3) != 0 || param_2 != 2) ||
     ((uVar1 = 0x1d, (param_1 * -0x3d70a3d7 + 0x51eb850 >> 2 | param_1 * 0x40000000) < 0x28f5c29 &&
      (param_1 != ((int)param_1 / 400) * 400)))) {
    uVar1 = *(undefined4 *)(&DAT_149e2c4e0 + (longlong)param_2 * 4);
  }
  return uVar1;
}



// FUNCTION 14680ef30 FUN_14680ef30 body=75 status=ok
// SIG undefined FUN_14680ef30(void)

int FUN_14680ef30(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = (uint)((ulonglong)((*param_1 / 36000000000) * 0x2aaaaaab) >> 0x20);
  iVar4 = (int)(*param_1 / 36000000000) + ((uVar1 >> 2) - ((int)uVar1 >> 0x1f)) * -0x18;
  iVar3 = iVar4 + -0xc;
  if (iVar4 < 0xd) {
    iVar3 = iVar4;
  }
  iVar2 = 0xc;
  if (0 < iVar4) {
    iVar2 = iVar3;
  }
  return iVar2;
}



// FUNCTION 14680ef7c FUN_14680ef7c body=286 status=ok
// SIG undefined FUN_14680ef7c(void)

ulonglong FUN_14680ef7c(undefined8 param_1,longlong *param_2)

{
  wchar_t *_Str;
  longlong lVar1;
  undefined4 uVar2;
  size_t sVar3;
  uint uVar4;
  ulonglong uVar5;
  void *_Dst;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined8 uStack_48;
  longlong local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  _Str = (wchar_t *)*param_2;
  sVar3 = wcslen(_Str);
  uVar6 = 0;
  if (0x12 < (int)sVar3) {
    FUN_140056680(&local_50,_Str);
    uVar8 = (int)uStack_48 - 1;
    if ((int)uStack_48 == 0) {
      uVar8 = 0;
    }
    uVar4 = 0x13;
    if ((int)uVar8 < 0x13) {
      uVar4 = uVar8;
    }
    uVar5 = (ulonglong)uVar4;
    if ((int)uVar4 < 1) {
      uVar5 = uVar6;
    }
    uVar8 = uVar8 - (int)uVar5;
    local_38 = (int)uStack_48;
    if (0 < (int)uVar8) {
      iVar7 = (int)uStack_48 - (uVar8 + (int)uVar5);
      if (iVar7 != 0) {
        _Dst = (void *)(uVar5 * 2 + local_50);
        memmove(_Dst,(void *)((longlong)_Dst + (ulonglong)uVar8 * 2),(longlong)iVar7 * 2);
      }
      local_38 = (int)uStack_48 - uVar8;
    }
    lVar1 = local_50;
    local_40 = local_50;
    local_34 = uStack_48._4_4_;
    local_50 = 0;
    uStack_48 = 0;
    uVar2 = FUN_14680f09c(&local_40,param_1);
    if (lVar1 != 0) {
      FUN_1400020a8(lVar1);
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    if ((char)uVar2 == '\0') {
      uVar6 = 0;
    }
    else {
      *param_2 = *param_2 + 0x26;
      uVar6 = CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14680f09c FUN_14680f09c body=550 status=ok
// SIG undefined FUN_14680f09c(void)

undefined8 FUN_14680f09c(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  wchar_t *pwVar9;
  undefined8 uVar10;
  wchar_t *_Str;
  undefined1 auStack_b8 [32];
  int local_98;
  int local_90;
  int local_88;
  int local_80;
  undefined8 local_70;
  undefined8 *local_68;
  ulonglong uStack_60;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = 1;
  FUN_140807d8e(param_1,local_58,&DAT_149e1419a,&DAT_149e001d8);
  uVar10 = 0;
  FUN_1448097c4(local_58,&DAT_149e31048,&DAT_149e001d8,0);
  FUN_1448097c4(local_58,&DAT_149e0635c,&DAT_149e001d8,0);
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  FUN_1403de9f2(local_58,&local_68,&DAT_149e001d8,1);
  if (0xfffffffd < (int)uStack_60 - 8U) {
    _Str = L"";
    pwVar9 = L"";
    if (*(int *)(local_68 + 1) != 0) {
      pwVar9 = (wchar_t *)*local_68;
    }
    iVar2 = _wtoi(pwVar9);
    pwVar9 = L"";
    if (*(int *)(local_68 + 3) != 0) {
      pwVar9 = (wchar_t *)local_68[2];
    }
    iVar3 = _wtoi(pwVar9);
    pwVar9 = L"";
    if (*(int *)(local_68 + 5) != 0) {
      pwVar9 = (wchar_t *)local_68[4];
    }
    iVar4 = _wtoi(pwVar9);
    pwVar9 = L"";
    if (*(int *)(local_68 + 7) != 0) {
      pwVar9 = (wchar_t *)local_68[6];
    }
    iVar5 = _wtoi(pwVar9);
    pwVar9 = L"";
    if (*(int *)(local_68 + 9) != 0) {
      pwVar9 = (wchar_t *)local_68[8];
    }
    iVar6 = _wtoi(pwVar9);
    if (*(int *)(local_68 + 0xb) != 0) {
      _Str = (wchar_t *)local_68[10];
    }
    iVar7 = _wtoi(_Str);
    iVar8 = 0;
    if (6 < (int)uStack_60) {
      if (*(int *)(local_68 + 0xd) == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)local_68[0xc];
      }
      iVar8 = _wtoi(pwVar9);
    }
    local_98 = iVar6;
    local_90 = iVar7;
    local_88 = iVar8;
    cVar1 = FUN_1402131c4(iVar2,iVar3,iVar4,iVar5);
    if (cVar1 == '\0') {
      uVar10 = 0;
    }
    else {
      local_98 = iVar5;
      local_90 = iVar6;
      local_88 = iVar7;
      local_80 = iVar8;
      FUN_14021300e(&local_70,iVar2,iVar3,iVar4);
      *param_2 = local_70;
      uVar10 = CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
    }
  }
  FUN_1447a1747(local_68,uStack_60 & 0xffffffff);
  if (local_68 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14680f2c4 FUN_14680f2c4 body=25 status=ok
// SIG undefined FUN_14680f2c4(void)

undefined8 FUN_14680f2c4(undefined8 param_1,undefined8 param_2)

{
  FUN_1408383eb(param_2,param_1);
  return 1;
}



// FUNCTION 14680f2de FUN_14680f2de body=29 status=ok
// SIG undefined FUN_14680f2de(void)

undefined8 FUN_14680f2de(undefined8 param_1,undefined8 param_2)

{
  FUN_14047ad2e(param_1,param_2,L"%Y-%m-%dT%H:%M:%S.%sZ");
  return param_2;
}



// FUNCTION 14680f2fc FUN_14680f2fc body=59 status=ok
// SIG undefined FUN_14680f2fc(void)

int FUN_14680f2fc(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0x16d;
  if ((param_1 & 3) == 0) {
    uVar2 = param_1 * -0x3d70a3d7 + 0x51eb850;
    iVar1 = 0x16e;
    if ((uVar2 >> 2 | param_1 * 0x40000000) < 0x28f5c29) {
      iVar1 = ((uVar2 >> 4 | param_1 * -0x70000000) < 0xa3d70b) + 0x16d;
    }
  }
  return iVar1;
}



// FUNCTION 14680f338 FUN_14680f338 body=979 status=ok
// SIG undefined FUN_14680f338(void)

undefined8 FUN_14680f338(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  wchar_t *local_80;
  int local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  int local_60;
  int local_5c;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (1 < *(int *)(param_1 + 8)) {
    local_58 = 0;
    uStack_50 = 0;
    iVar5 = FUN_1403de9f2(0,&local_58,&DAT_149e001d8,1);
    if ((int)uStack_50 == iVar5 && 0 < iVar5) {
      local_5c = 0;
      local_60 = 0;
      local_64 = 0;
      local_68 = 0;
      local_6c = 0;
      local_70 = 0;
      cVar4 = FUN_144a38768(local_58,&DAT_149e06196,1,1);
      if (cVar4 != '\0') {
        iVar5 = *(int *)(local_58 + 8) + -1;
        if (*(int *)(local_58 + 8) == 0) {
          iVar5 = 0;
        }
        FUN_14496493a(local_58,iVar5 + -1,1,1);
      }
      lVar10 = local_58;
      lVar11 = (longlong)(int)uStack_50;
      FUN_140056680(&local_80);
      pwVar9 = local_80;
      iVar5 = *(int *)(lVar10 + -8 + lVar11 * 0x10);
      if (iVar5 == local_78) {
        bVar12 = true;
        if (1 < iVar5) {
          iVar5 = wcscmp(*(wchar_t **)(lVar10 + lVar11 * 0x10 + -0x10),local_80);
          bVar12 = iVar5 == 0;
        }
      }
      else {
        bVar12 = local_78 + iVar5 == 1;
      }
      if (pwVar9 != (wchar_t *)0x0) {
        FUN_1400020a8(pwVar9);
      }
      if (bVar12) {
        if ((int)uStack_50 == 4) {
          iVar5 = FUN_142781340(local_58);
          if ((0 < iVar5) &&
             (cVar4 = FUN_142781648(local_58 + 0x10,&local_5c,&local_60,&local_64), cVar4 != '\0'))
          {
            lVar10 = local_58 + 0x20;
LAB_14680f56c:
            FUN_142781252(lVar10,&local_68,&local_6c,&local_70);
          }
        }
        else if (((int)uStack_50 == 6) &&
                (iVar5 = FUN_142780f56(local_58), lVar10 = local_58, 0 < iVar5)) {
          lVar11 = local_58 + 0x20;
          if (*(int *)(local_58 + 0x18) == 0) {
            pwVar9 = L"";
          }
          else {
            pwVar9 = *(wchar_t **)(local_58 + 0x10);
          }
          iVar5 = _wtoi(pwVar9);
          local_60 = iVar5;
          iVar6 = FUN_142782988(lVar11);
          iVar7 = -1;
          local_5c = iVar6;
          if (*(int *)(lVar10 + 0x38) == 5) {
            iVar7 = _wtoi(*(wchar_t **)(lVar10 + 0x30));
          }
          local_64 = iVar7;
          if (((iVar5 - 1U < 0x1f) && (iVar6 - 1U < 0xc)) && (iVar7 - 1U < 9999)) {
            lVar10 = local_58 + 0x40;
            goto LAB_14680f56c;
          }
        }
      }
      else if (((int)uStack_50 == 5) && (iVar5 = FUN_142780f56(local_58), 0 < iVar5)) {
        iVar5 = *(int *)(local_58 + 0x28);
        iVar6 = iVar5 + -1;
        if (iVar5 == 0) {
          iVar6 = 0;
        }
        lVar10 = local_58 + 0x10;
        iVar7 = -1;
        if (iVar6 - 1U < 2) {
          if (iVar5 == 0) {
            pwVar9 = L"";
          }
          else {
            pwVar9 = *(wchar_t **)(local_58 + 0x20);
          }
          iVar7 = _wtoi(pwVar9);
        }
        local_60 = iVar7;
        local_5c = FUN_142782988(lVar10);
        if (((0 < local_5c && iVar7 - 1U < 0x1f) &&
            (cVar4 = FUN_142781252(local_58 + 0x30,&local_68,&local_6c,&local_70), cVar4 != '\0'))
           && (*(int *)(local_58 + 0x48) == 5)) {
          local_64 = _wtoi(*(wchar_t **)(local_58 + 0x40));
        }
      }
      iVar7 = local_5c;
      iVar6 = local_60;
      iVar5 = local_64;
      uVar3 = local_68;
      uVar2 = local_6c;
      uVar1 = local_70;
      local_a0 = local_70;
      local_a8 = local_6c;
      local_98 = 0;
      cVar4 = FUN_1402131c4(local_64,local_5c,local_60,local_68);
      if (cVar4 != '\0') {
        local_98 = uVar1;
        local_a0 = uVar2;
        local_a8 = uVar3;
        local_90 = 0;
        FUN_14021300e(&local_80,iVar5,iVar7,iVar6);
        *param_2 = local_80;
        FUN_1447a1747(local_58,uStack_50 & 0xffffffff);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        uVar8 = 1;
        goto LAB_14680f363;
      }
    }
    FUN_1447a1747(local_58,(int)uStack_50);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  uVar8 = 0;
LAB_14680f363:
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 14680f70c FUN_14680f70c body=344 status=ok
// SIG undefined FUN_14680f70c(void)

byte FUN_14680f70c(wint_t *param_1,wint_t *param_2,undefined4 *param_3)

{
  wint_t *pwVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  wint_t *pwVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  wint_t *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_1;
  cVar2 = FUN_140b7f9c0(&local_38);
  if (cVar2 != '\0') {
    if ((*local_38 == 0x2d) || (*local_38 == 0x2b)) {
      local_38 = local_38 + 1;
    }
    cVar2 = FUN_140b7f9c0(&local_38,param_2);
    pwVar1 = local_38;
    if (cVar2 != '\0') {
      bVar7 = *local_38 == 0x30;
      uVar4 = 10;
      pwVar6 = local_38;
      if (bVar7) {
        if ((local_38[1] & 0xffdf) != 0x58) {
          pwVar6 = local_38 + 1;
          uVar4 = 8;
          goto LAB_14680f80e;
        }
        pwVar6 = local_38 + 2;
        *param_3 = 0x10;
        if ((pwVar6 < param_2) && (iVar5 = iswxdigit(*pwVar6), iVar5 != 0)) {
          pwVar1 = pwVar1 + 3;
          do {
            pwVar6 = pwVar1;
            bVar7 = true;
            if (param_2 <= pwVar6) break;
            iVar5 = iswxdigit(*pwVar6);
            pwVar1 = pwVar6 + 1;
          } while (iVar5 != 0);
        }
        else {
          bVar7 = false;
        }
      }
      else {
LAB_14680f80e:
        *param_3 = uVar4;
        if (pwVar6 < param_2) {
          iVar5 = iswdigit(*pwVar6);
          while (iVar5 != 0) {
            pwVar6 = pwVar6 + 1;
            bVar7 = true;
            if (param_2 <= pwVar6) break;
            iVar5 = iswdigit(*pwVar6);
          }
        }
      }
      local_38 = pwVar6;
      bVar3 = FUN_140b7f9c0(&local_38,param_2);
      bVar3 = (bVar3 ^ 1) & bVar7;
      goto LAB_14680f7e2;
    }
  }
  bVar3 = 0;
LAB_14680f7e2:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14680f866 FUN_14680f866 body=419 status=ok
// SIG undefined FUN_14680f866(void)

ulonglong FUN_14680f866(longlong *param_1,double *param_2)

{
  wchar_t *_Str;
  wchar_t *_Str_00;
  char cVar1;
  uint uVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_b8 [40];
  wchar_t *local_90;
  longlong local_88 [3];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar1 = FUN_14278173a();
  if (cVar1 == '\0') {
    local_88[0] = 0;
    local_88[1] = 0;
    plVar7 = param_1;
  }
  else {
    plVar7 = local_88;
    FUN_145bc8d6c(plVar7,param_1);
  }
  if (1 < (int)plVar7[1]) {
    _Str_00 = (wchar_t *)*plVar7;
    pwVar3 = wcsstr(_Str_00,L",");
    if (pwVar3 != (wchar_t *)0x0) {
      _Str = pwVar3 + 1;
      pwVar4 = wcsstr(_Str,L",");
      if (pwVar4 != (wchar_t *)0x0) {
        pwVar5 = wcsstr(pwVar4 + 1,L",");
        if (pwVar5 == (wchar_t *)0x0) {
          iVar9 = (int)plVar7[1] + -1;
          if ((int)plVar7[1] == 0) {
            puVar8 = &DAT_149dfb77a;
            iVar9 = 0;
          }
          else {
            puVar8 = (undefined2 *)*plVar7;
          }
          local_90 = pwVar4 + 1;
          cVar1 = FUN_140b7f836(_Str_00,pwVar3);
          if (((cVar1 == '\0') || (cVar1 = FUN_140b7f836(_Str,pwVar4), cVar1 == '\0')) ||
             (cVar1 = FUN_140b7f836(local_90,puVar8 + iVar9), cVar1 == '\0')) {
            uVar2 = FUN_1467fc5ae(param_2,param_1);
            uVar6 = (ulonglong)uVar2;
          }
          else {
            dVar10 = wcstod(local_90,(wchar_t **)0x0);
            dVar11 = wcstod(_Str,(wchar_t **)0x0);
            dVar12 = wcstod(_Str_00,(wchar_t **)0x0);
            *param_2 = dVar12;
            param_2[1] = dVar11;
            param_2[2] = dVar10;
            uVar6 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
          }
          goto LAB_14680f8b7;
        }
      }
    }
  }
  uVar6 = 0;
LAB_14680f8b7:
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 14680fa0a FUN_14680fa0a body=280 status=ok
// SIG undefined FUN_14680fa0a(void)

undefined8 FUN_14680fa0a(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_14680f866(param_1,&local_30);
  if (cVar1 == '\0') {
    cVar1 = FUN_1467fb2e6(param_2,param_1);
    uVar2 = 1;
    if (cVar1 != '\0') goto LAB_14680fa48;
    local_38 = DAT_14c846508;
    local_48 = (undefined4)DAT_14c8464f8;
    uStack_44 = DAT_14c8464f8._4_4_;
    uStack_40 = (undefined4)DAT_14c846500;
    uStack_3c = DAT_14c846500._4_4_;
    if (*(int *)(param_1 + 1) == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)*param_1;
    }
    cVar1 = FUN_140c2d9be(puVar3,L"Pitch=",&local_48);
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 1) == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      else {
        puVar3 = (undefined2 *)*param_1;
      }
      cVar1 = FUN_140c2d9be(puVar3,L"Yaw=",&uStack_40);
      if (cVar1 != '\0') {
        if (*(int *)(param_1 + 1) == 0) {
          puVar3 = &DAT_149dfb77a;
        }
        else {
          puVar3 = (undefined2 *)*param_1;
        }
        cVar1 = FUN_140c2d9be(puVar3,L"Roll=",&local_38);
        if (cVar1 != '\0') {
          param_2[2] = local_38;
          *(undefined4 *)param_2 = local_48;
          *(undefined4 *)((longlong)param_2 + 4) = uStack_44;
          *(undefined4 *)(param_2 + 1) = uStack_40;
          *(undefined4 *)((longlong)param_2 + 0xc) = uStack_3c;
          goto LAB_14680fa46;
        }
      }
    }
    uVar2 = 0;
  }
  else {
    *param_2 = local_30;
    param_2[1] = uStack_28;
    param_2[2] = local_20;
LAB_14680fa46:
    uVar2 = 1;
  }
LAB_14680fa48:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14680fb24 FUN_14680fb24 body=199 status=ok
// SIG undefined FUN_14680fb24(void)

undefined8 FUN_14680fb24(longlong *param_1,ulong *param_2)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  wchar_t *_Str;
  undefined1 auStack_58 [32];
  wchar_t *local_38;
  undefined8 uStack_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((longlong)(int)param_1[1] < 2) ||
     (cVar1 = FUN_14680f70c(*param_1,*param_1 + (longlong)(int)param_1[1] * 2 + -2,&local_24),
     cVar1 == '\0')) {
    uVar3 = 0;
    goto LAB_14680fb46;
  }
  cVar1 = FUN_14278173a(param_1);
  if (cVar1 == '\0') {
    local_38 = (wchar_t *)0x0;
    uStack_30 = 0;
    if ((int)param_1[1] == 0) {
LAB_14680fbc0:
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)*param_1;
    }
  }
  else {
    FUN_145bc8d6c(&local_38,param_1);
    _Str = local_38;
    if ((int)uStack_30 == 0) goto LAB_14680fbc0;
  }
  uVar2 = wcstoul(_Str,(wchar_t **)0x0,local_24);
  *param_2 = uVar2;
  if (local_38 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = 1;
LAB_14680fb46:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 14680fbec FUN_14680fbec body=190 status=ok
// SIG undefined FUN_14680fbec(void)

undefined8 FUN_14680fbec(longlong *param_1,float *param_2)

{
  char cVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  double dVar3;
  undefined1 auStack_58 [32];
  wchar_t *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((longlong)(int)param_1[1] < 2) ||
     (cVar1 = FUN_140b7f836(*param_1,*param_1 + (longlong)(int)param_1[1] * 2 + -2), cVar1 == '\0'))
  {
    uVar2 = 0;
    goto LAB_14680fc47;
  }
  cVar1 = FUN_14278173a(param_1);
  if (cVar1 == '\0') {
    local_38 = (wchar_t *)0x0;
    uStack_30 = 0;
    if ((int)param_1[1] == 0) {
LAB_14680fc83:
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)*param_1;
    }
  }
  else {
    FUN_145bc8d6c(&local_38,param_1);
    _Str = local_38;
    if ((int)uStack_30 == 0) goto LAB_14680fc83;
  }
  dVar3 = _wtof(_Str);
  *param_2 = (float)dVar3;
  if (local_38 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  uVar2 = 1;
LAB_14680fc47:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 14680fcac FUN_14680fcac body=111 status=ok
// SIG undefined FUN_14680fcac(void)

void FUN_14680fcac(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = (uint)((ulonglong)param_1 >> 0x10);
  uVar2 = (uint)param_1 & 0xffff;
  local_10 = param_1;
  FUN_145e3f0ee(&DAT_14c8680b0,
                ((uint)param_1 << 0x10 | uVar2) + (int)((ulonglong)param_1 >> 0x20) +
                (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar2 >> 4));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14680fd1c FUN_14680fd1c body=248 status=ok
// SIG undefined FUN_14680fd1c(void)

ulonglong FUN_14680fd1c(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  LOCK();
  bVar1 = *param_1;
  if (bVar1 == 0) {
    *param_1 = 1;
  }
  UNLOCK();
  if (bVar1 != 0) {
    FUN_1447d2058(param_1);
  }
  uVar2 = FUN_1447addd0(param_2,0x10);
  iVar3 = FUN_1412c2be0(param_1 + 8,uVar2,param_2);
  if (iVar3 == -1) {
    local_40 = param_2;
    local_38 = param_3;
    FUN_1468149bc();
    LOCK();
    bVar1 = *param_1;
    if (bVar1 == 1) {
      *param_1 = 0;
    }
    UNLOCK();
    if (bVar1 != 1) {
      FUN_14008cdb0(param_1);
    }
    uVar4 = 0;
    if ((longlong)*(int *)(param_1 + 0x60) != 0) {
      uVar4 = (longlong)*(int *)(param_1 + 0x60) * 0x10;
      uVar5 = 0;
      do {
        if ((*(int *)(*(longlong *)(param_1 + 0x58) + 8 + uVar5) != 0) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x58) + uVar5) != 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
        }
        uVar5 = uVar5 + 0x10;
      } while (uVar4 != uVar5);
    }
  }
  else {
    uVar4 = 1;
    LOCK();
    bVar1 = *param_1;
    if (bVar1 == 1) {
      *param_1 = 0;
    }
    else {
      uVar4 = (ulonglong)bVar1;
    }
    UNLOCK();
    if (bVar1 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14680fe3e FUN_14680fe3e body=95 status=ok
// SIG undefined FUN_14680fe3e(void)

bool FUN_14680fe3e(char *param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  LOCK();
  cVar1 = *param_1;
  if (cVar1 == '\0') {
    *param_1 = '\x01';
  }
  UNLOCK();
  if (cVar1 != '\0') {
    FUN_1447d2058(param_1);
  }
  uVar2 = FUN_1447addd0(param_2,0x10);
  iVar3 = FUN_1412c2be0(param_1 + 8,uVar2,param_2);
  LOCK();
  cVar1 = *param_1;
  if (cVar1 == '\x01') {
    *param_1 = '\0';
  }
  UNLOCK();
  if (cVar1 != '\x01') {
    FUN_14008cdb0(param_1);
  }
  return iVar3 != -1;
}



// FUNCTION 14680fe9e FUN_14680fe9e body=7 status=ok
// SIG undefined FUN_14680fe9e(void)

uint FUN_14680fe9e(longlong param_1)

{
  return *(uint *)(param_1 + 8) >> 0x1f;
}



// FUNCTION 14680fea6 FUN_14680fea6 body=214 status=ok
// SIG undefined FUN_14680fea6(void)

int FUN_14680fea6(ushort *param_1,ushort *param_2,undefined4 *param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar1 = *param_1;
  uVar2 = *param_2;
  if (uVar1 == uVar2) {
    uVar1 = param_1[1];
    uVar2 = param_2[1];
    if (uVar1 == uVar2) {
      uVar1 = param_1[2];
      uVar2 = param_2[2];
      if (uVar1 == uVar2) {
        if ((int)(*(uint *)(param_2 + 4) ^ *(uint *)(param_1 + 4)) < 0) {
          return 0;
        }
        uVar4 = *(uint *)(param_1 + 4) & 0x7fffffff;
        if (uVar4 == 0) {
          return 0;
        }
        uVar3 = *(uint *)(param_2 + 4) & 0x7fffffff;
        if (uVar4 == uVar3 || uVar3 == 0) {
          return 0;
        }
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = 3;
          uVar4 = *(uint *)(param_1 + 4) & 0x7fffffff;
          uVar3 = *(uint *)(param_2 + 4) & 0x7fffffff;
        }
        bVar5 = uVar3 < uVar4;
        goto LAB_14680ff44;
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = 2;
        uVar1 = param_1[2];
        uVar2 = param_2[2];
      }
    }
    else if (param_3 != (undefined4 *)0x0) {
      *param_3 = 1;
      uVar1 = param_1[1];
      uVar2 = param_2[1];
    }
  }
  else if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
    uVar1 = *param_1;
    uVar2 = *param_2;
  }
  bVar5 = uVar2 < uVar1;
LAB_14680ff44:
  return 2 - (uint)bVar5;
}



// FUNCTION 14680ff7c FUN_14680ff7c body=37 status=ok
// SIG undefined FUN_14680ff7c(void)

void FUN_14680ff7c(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[6] = 0;
  if (param_1[7] != 0) {
    FUN_1446dd670(param_1 + 4,0);
    return;
  }
  return;
}



// FUNCTION 14680ffa2 FUN_14680ffa2 body=114 status=ok
// SIG undefined FUN_14680ffa2(void)

bool FUN_14680ffa2(longlong param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  undefined1 auStack_38 [44];
  int local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  bVar1 = true;
  if (((*(uint *)(param_1 + 8) & 0x7fffffff) != 0) && ((*(uint *)(param_2 + 8) & 0x7fffffff) != 0))
  {
    local_c = 1;
    iVar2 = FUN_14680fea6();
    bVar1 = true;
    if (iVar2 == 2) {
      bVar1 = local_c == 3 && DAT_14c86821c != 0;
    }
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146810015 FUN_146810015 body=99 status=ok
// SIG undefined FUN_146810015(void)

void FUN_146810015(undefined8 param_1)

{
  undefined1 auStack_1b8 [32];
  undefined **local_198;
  undefined8 local_190;
  undefined ***local_188;
  undefined8 **local_180;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_180 = &local_188;
  local_198 = &PTR_FUN_149e37810;
  local_188 = &local_198;
  local_190 = param_1;
  FUN_146810079(local_180);
  if ((local_8 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146810079 FUN_146810079 body=138 status=ok
// SIG undefined FUN_146810079(void)

void FUN_146810079(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1;
  FUN_144aff0e0(&local_20);
  plVar1 = local_20;
  FUN_144afeef0(*local_20,param_2);
  FUN_144afeef0(*plVar1,param_2 + 2);
  FUN_144afeef0(*plVar1,param_2 + 4);
  FUN_144afef32(*plVar1,param_2 + 8);
  FUN_14021219d(*(undefined8 *)(*plVar1 + 8),param_2 + 0x10);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146810104 FUN_146810104 body=144 status=ok
// SIG undefined FUN_146810104(void)

undefined8 FUN_146810104(longlong param_1,undefined8 param_2)

{
  wint_t *pwVar1;
  longlong lVar2;
  int iVar3;
  wint_t *pwVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  pwVar4 = (wint_t *)(lVar2 + -2);
  do {
    pwVar1 = pwVar4 + 1;
    pwVar4 = pwVar4 + 1;
    iVar3 = iswspace(*pwVar1);
  } while (iVar3 != 0);
  iVar3 = iswspace(*pwVar4);
  for (; (iVar3 == 0 && (*pwVar4 != 0)); pwVar4 = pwVar4 + 1) {
    iVar3 = iswspace(pwVar4[1]);
  }
  uVar5 = (longlong)pwVar4 - lVar2 >> 1;
  uVar6 = 0x20;
  if ((int)uVar5 < 0x20) {
    uVar6 = uVar5 & 0xffffffff;
  }
  FUN_14006620a(param_2,lVar2,uVar6);
  if (0x20 < (longlong)uVar5) {
    FUN_1400020e8(param_2,&DAT_149e30fc2,3);
  }
  return param_2;
}



// FUNCTION 146810194 FUN_146810194 body=178 status=ok
// SIG undefined FUN_146810194(void)

int * FUN_146810194(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  iVar3 = param_1[2];
  iVar4 = param_1[3];
  if ((((iVar1 == *param_2) && (iVar2 == param_2[1])) && (iVar3 == param_2[2])) &&
     (iVar4 == param_2[3])) {
    if ((iVar3 != 0 || iVar4 != 0) || (iVar2 != 0 || iVar1 != 0)) {
      (**(code **)(*(longlong *)(param_2 + 4) + 0x10))(param_2 + 4,param_1 + 4);
      return param_1;
    }
  }
  else if ((iVar3 != 0 || iVar4 != 0) || (iVar2 != 0 || iVar1 != 0)) {
    (*(code *)**(undefined8 **)(param_1 + 4))(param_1 + 4,0);
  }
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  iVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = iVar1;
  param_1[2] = iVar2;
  param_1[3] = iVar3;
  if (((param_2[1] != 0 || *param_2 != 0) || param_2[2] != 0) || param_2[3] != 0) {
    (**(code **)(*(longlong *)(param_2 + 4) + 8))(param_2 + 4,param_1 + 4);
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    (*(code *)**(undefined8 **)(param_2 + 4))(param_2 + 4,0);
  }
  return param_1;
}



// FUNCTION 146810246 FUN_146810246 body=148 status=ok
// SIG undefined FUN_146810246(void)

int * FUN_146810246(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  iVar1 = param_3[1];
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = iVar1;
  param_1[2] = iVar2;
  param_1[3] = iVar3;
  if (((param_3[1] != 0 || *param_3 != 0) || param_3[2] != 0) || param_3[3] != 0) {
    (**(code **)(*(longlong *)(param_3 + 4) + 8))(param_3 + 4,param_1 + 4);
    param_3[0] = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    (*(code *)**(undefined8 **)(param_3 + 4))(param_3 + 4,0);
  }
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 4);
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  iVar3 = param_2[3];
  param_1[0x10] = *param_2;
  param_1[0x11] = iVar1;
  param_1[0x12] = iVar2;
  param_1[0x13] = iVar3;
  if (((param_3[1] != 0 || *param_3 != 0) || param_3[2] != 0) || param_3[3] != 0) {
    (*(code *)**(undefined8 **)(param_3 + 4))(param_3 + 4,0);
  }
  return param_1;
}



// FUNCTION 1468102da FUN_1468102da body=218 status=ok
// SIG undefined FUN_1468102da(void)

void FUN_1468102da(longlong param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 unaff_RBP;
  undefined7 uVar4;
  ulonglong uVar3;
  
  uVar4 = (undefined7)((ulonglong)unaff_RBP >> 8);
  if ((char)param_3 == '\x03') {
    uVar3 = CONCAT71(uVar4,2);
    if (*(char *)(param_1 + 0x10) != '\0') goto LAB_14681031a;
  }
  else if ((((param_3 & 0xff) == 2) && (*(char *)(param_1 + 0x11) == '\x01')) &&
          (uVar3 = CONCAT71(uVar4,3), DAT_14c868880 == '\0')) goto LAB_14681031a;
  uVar3 = (ulonglong)param_3;
LAB_14681031a:
  if (DAT_14c872bf0 == '\x01') {
    if (((byte)uVar3 & 0xfe) == 2) {
      FUN_1468103b4(param_1,param_2,uVar3 & 0xffffffff,param_4);
    }
    if (DAT_14c86a9e8 != (longlong *)0x0) {
      uVar2 = FUN_144a82cde();
      cVar1 = FUN_14049bfe8(uVar2,DAT_14c86a9e8);
      if (cVar1 == '\0') {
        (**(code **)(*DAT_14c86a9e8 + 0x10))(DAT_14c86a9e8,param_2,uVar3 & 0xffffffff,param_4);
      }
    }
  }
  uVar2 = FUN_144a82cde();
  cVar1 = FUN_14049bfe8(uVar2,param_1);
  if (cVar1 == '\0') {
    uVar2 = FUN_144a82cde();
    FUN_1414dd36c(uVar2,param_2,uVar3 & 0xffffffff,param_4);
    return;
  }
  return;
}



// FUNCTION 1468103b4 FUN_1468103b4 body=296 status=ok
// SIG undefined FUN_1468103b4(void)

void FUN_1468103b4(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 auStack_498 [32];
  undefined8 local_478;
  char *local_468;
  undefined4 local_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  char local_449;
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined1 *local_438;
  undefined1 *local_430;
  ulonglong *local_428;
  char local_420;
  undefined1 local_418 [1024];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_498;
  local_449 = (char)param_3;
  if (DAT_14c868880 == '\0') {
    local_438 = local_418;
    local_420 = '\0';
    local_428 = &local_18;
    local_468 = &local_449;
    local_478 = param_4;
    local_430 = local_438;
    FUN_14049bc88(param_1,&local_438,param_2,param_3);
    if (local_449 == '\x02') {
      FUN_14006620a(&local_448,local_438,(ulonglong)((longlong)local_430 - (longlong)local_438) >> 1
                   );
      local_460 = local_448;
      uStack_45c = uStack_444;
      uStack_458 = uStack_440;
      uStack_454 = uStack_43c;
      FUN_146810962(param_1,&local_460);
    }
    else {
      FUN_14006620a(&local_448,local_438,(ulonglong)((longlong)local_430 - (longlong)local_438) >> 1
                   );
      local_460 = local_448;
      uStack_45c = uStack_444;
      uStack_458 = uStack_440;
      uStack_454 = uStack_43c;
      FUN_1468109de(param_1,&local_460);
    }
    if (CONCAT44(uStack_45c,local_460) != 0) {
      FUN_1400020a8();
    }
    if (local_420 == '\x01') {
      FUN_1400020a8(local_438);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_498) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468104de FUN_1468104de body=429 status=ok
// SIG undefined FUN_1468104de(void)

void FUN_1468104de(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  char cVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 uVar9;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [28];
  undefined1 local_6c;
  longlong *local_50;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  bVar5 = param_2[0x1c];
  if (bVar5 == 3) {
    if (*(char *)(param_1 + 0x10) == '\0') goto LAB_146810530;
    uVar9 = 2;
LAB_14681064e:
    local_30 = 0;
    FUN_14681068c(local_88,param_2);
    local_6c = uVar9;
    if (DAT_14c872bf0 != '\x01') goto LAB_146810587;
    puVar8 = local_88;
    if ((local_30 & 1) == 0) {
      puVar8 = param_2;
    }
LAB_14681067c:
    FUN_146810710(param_1,puVar8);
  }
  else {
    if (((bVar5 == 2) && (*(char *)(param_1 + 0x11) == '\x01')) && (DAT_14c868880 == '\0')) {
      uVar9 = 3;
      goto LAB_14681064e;
    }
LAB_146810530:
    local_30 = 0;
    if (DAT_14c872bf0 == '\0') goto LAB_146810587;
    puVar8 = param_2;
    if ((bVar5 & 0xfe) == 2) goto LAB_14681067c;
  }
  if (DAT_14c86a9e8 != (longlong *)0x0) {
    uVar7 = FUN_144a82cde();
    cVar6 = FUN_14049bfe8(uVar7,DAT_14c86a9e8);
    if (cVar6 == '\0') {
      puVar8 = local_88;
      if (local_30 == 0) {
        puVar8 = param_2;
      }
      (**(code **)(*DAT_14c86a9e8 + 0x18))(DAT_14c86a9e8,puVar8);
    }
  }
LAB_146810587:
  uVar7 = FUN_144a82cde();
  cVar6 = FUN_14049bfe8(uVar7,param_1);
  if (cVar6 == '\0') {
    uVar7 = FUN_144a82cde();
    if (local_30 != 0) {
      param_2 = local_88;
    }
    FUN_14681688e(uVar7,param_2);
  }
  if (local_30 == 1) {
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 3;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (((uint)lVar3 & 0x3fffffff) == 1) {
        (**(code **)(*local_50 + 0x10))(local_50);
        local_50[1] = 0;
        local_50[2] = 0;
        LOCK();
        puVar2 = (ulonglong *)(local_50 + 3);
        uVar4 = *puVar2;
        *puVar2 = *puVar2 - 0x40000000;
        UNLOCK();
        if ((uVar4 & 0xfffffffc0000000) == 0x40000000) {
          (**(code **)*local_50)(local_50,1);
        }
      }
    }
    local_30 = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14681068c FUN_14681068c body=131 status=ok
// SIG undefined FUN_14681068c(void)

undefined8 * FUN_14681068c(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_2 != param_1) {
    if (*(char *)(param_1 + 0xb) == '\x01') {
      FUN_14152e1c8(param_1 + 7);
    }
    param_1[4] = param_2[4];
    uVar4 = *param_2;
    uVar5 = param_2[1];
    uVar6 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar6;
    *param_1 = uVar4;
    param_1[1] = uVar5;
    uVar4 = param_2[6];
    param_1[5] = param_2[5];
    param_1[6] = uVar4;
    lVar3 = param_2[7];
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (ulonglong *)(lVar3 + 0x18);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 0) {
        LOCK();
        *(longlong *)(lVar3 + 0x18) = *(longlong *)(lVar3 + 0x18) + 0x40000000;
        UNLOCK();
      }
    }
    param_1[7] = lVar3;
    uVar4 = param_2[9];
    param_1[8] = param_2[8];
    param_1[9] = uVar4;
    param_1[10] = param_2[10];
    *(undefined1 *)(param_1 + 0xb) = 1;
  }
  return param_1;
}



// FUNCTION 146810710 FUN_146810710 body=283 status=ok
// SIG undefined FUN_146810710(void)

void FUN_146810710(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_488 [40];
  undefined4 local_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  char local_449;
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined1 *local_438;
  undefined1 *local_430;
  ulonglong *local_428;
  char local_420;
  undefined1 local_418 [1024];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_488;
  local_438 = local_418;
  local_420 = '\0';
  local_428 = &local_18;
  local_430 = local_438;
  FUN_14681082c(param_1,&local_438,param_2,&local_449);
  if (local_449 == '\x02') {
    FUN_14006620a(&local_448,local_438,(ulonglong)((longlong)local_430 - (longlong)local_438) >> 1);
    local_460 = local_448;
    uStack_45c = uStack_444;
    uStack_458 = uStack_440;
    uStack_454 = uStack_43c;
    FUN_146810962(param_1,&local_460);
  }
  else {
    if (local_449 != '\x03') goto LAB_146810770;
    FUN_14006620a(&local_448,local_438,(ulonglong)((longlong)local_430 - (longlong)local_438) >> 1);
    local_460 = local_448;
    uStack_45c = uStack_444;
    uStack_458 = uStack_440;
    uStack_454 = uStack_43c;
    FUN_1468109de(param_1,&local_460);
  }
  if (CONCAT44(uStack_45c,local_460) != 0) {
    FUN_1400020a8();
  }
LAB_146810770:
  if (local_420 == '\x01') {
    FUN_1400020a8(local_438);
  }
  if ((local_18 ^ (ulonglong)auStack_488) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14681082c FUN_14681082c body=309 status=ok
// SIG undefined FUN_14681082c(void)

void FUN_14681082c(longlong *param_1,undefined8 param_2,longlong param_3,undefined1 *param_4)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined8 unaff_RBX;
  undefined7 uVar7;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  bVar1 = *(byte *)(param_3 + 0x1c);
  uVar7 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (bVar1 == 3) {
    uVar6 = (uint)CONCAT71(uVar7,2);
    if ((char)param_1[2] != '\0') goto LAB_146810876;
  }
  else if (((bVar1 == 2) && (*(char *)((longlong)param_1 + 0x11) == '\x01')) &&
          (uVar6 = (uint)CONCAT71(uVar7,3), DAT_14c868880 == '\0')) goto LAB_146810876;
  uVar6 = (uint)bVar1;
LAB_146810876:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (char)uVar6;
  }
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x88))();
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3,&local_38);
    iVar2 = local_30 + -1;
    if (local_30 == 0) {
      iVar2 = 0;
    }
    lVar4 = FUN_1449668a2(param_2,local_38,iVar2);
    puVar5 = *(undefined4 **)(lVar4 + 8);
    if (*(ulonglong *)(lVar4 + 0x10) <= (longlong)puVar5 + 6U) {
      FUN_140213274(lVar4,3);
      puVar5 = *(undefined4 **)(lVar4 + 8);
    }
    *(undefined2 *)(puVar5 + 1) = 0x20;
    *puVar5 = 0x3a0020;
    *(longlong *)(lVar4 + 8) = (longlong)puVar5 + 6;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  local_50 = 0xbff0000000000000;
  local_48 = 0;
  local_58 = 0;
  FUN_140212aa8(param_2,uVar6,param_3 + 0x14,0);
  FUN_1467eb1ca(param_3,param_2);
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146810962 FUN_146810962 body=123 status=ok
// SIG undefined FUN_146810962(void)

void FUN_146810962(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1447a1bd6((longlong *)(param_1 + 0x28),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  lVar3 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar3) = 0;
  *(undefined8 *)(lVar2 + lVar3) = *param_2;
  *param_2 = 0;
  *(undefined4 *)(lVar2 + 8 + lVar3) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(lVar2 + 0xc + lVar3) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x0001468109d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  return;
}



// FUNCTION 1468109de FUN_1468109de body=123 status=ok
// SIG undefined FUN_1468109de(void)

void FUN_1468109de(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_1447a1bd6((longlong *)(param_1 + 0x18),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  lVar3 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar3) = 0;
  *(undefined8 *)(lVar2 + lVar3) = *param_2;
  *param_2 = 0;
  *(undefined4 *)(lVar2 + 8 + lVar3) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(lVar2 + 0xc + lVar3) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x000146810a52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  return;
}



// FUNCTION 146810a5a FUN_146810a5a body=56 status=ok
// SIG undefined FUN_146810a5a(void)

undefined8 FUN_146810a5a(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  LPCWSTR lpOutputString;
  
  cVar1 = FUN_140b3f358();
  if (cVar1 == '\0') {
    puVar2 = (undefined8 *)FUN_1447a1f4a(param_2);
    if (*(int *)(puVar2 + 1) == 0) {
      lpOutputString = L"";
    }
    else {
      lpOutputString = (LPCWSTR)*puVar2;
    }
    OutputDebugStringW(lpOutputString);
  }
  return 0;
}



// FUNCTION 146810a92 FUN_146810a92 body=165 status=ok
// SIG undefined FUN_146810a92(void)

void FUN_146810a92(longlong param_1,undefined8 param_2,char param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_144a61b4f();
  uVar2 = FUN_14001cc68(0x60,0x10);
  FUN_140997f46(uVar2,0,param_2,1,param_1);
  if (param_3 != '\0') {
    FUN_14681a77c(uVar2,0x40400000,param_4,0);
  }
  FUN_140997a0e(uVar2);
  iVar1 = *(int *)(param_1 + 0x110);
  *(uint *)(param_1 + 0x110) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x114) < iVar1 + 1U) {
    FUN_146814f6c((longlong *)(param_1 + 0x108),iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x108) + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 146810b38 FUN_146810b38 body=161 status=ok
// SIG undefined FUN_146810b38(void)

void FUN_146810b38(longlong param_1,int param_2,int param_3)

{
  FUN_144a61b4f();
  if (*(int *)(param_1 + 0x110) != 0) {
    *(float *)(*(longlong *)
                (*(longlong *)(param_1 + 0x108) + (longlong)(*(int *)(param_1 + 0x110) + -1) * 8) +
              0x20) = (float)param_3;
    *(float *)(*(longlong *)
                (*(longlong *)(param_1 + 0x108) + (longlong)(*(int *)(param_1 + 0x110) + -1) * 8) +
              0x24) = (float)param_2;
    *(float *)(*(longlong *)
                (*(longlong *)(param_1 + 0x108) + (longlong)(*(int *)(param_1 + 0x110) + -1) * 8) +
              0x28) = (float)(param_3 - param_2);
    FUN_14681a798(*(undefined8 *)
                   (*(longlong *)(param_1 + 0x108) + (longlong)(*(int *)(param_1 + 0x110) + -1) * 8)
                 );
    return;
  }
  return;
}



// FUNCTION 146810bda FUN_146810bda body=166 status=ok
// SIG undefined FUN_146810bda(void)

void FUN_146810bda(longlong param_1,int param_2,int param_3,longlong *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  
  FUN_144a61b4f();
  iVar4 = *(int *)(param_1 + 0x110);
  if (iVar4 != 0) {
    if (0 < param_3 && 0 < param_2) {
      FUN_146810b38(param_1,param_2,param_3);
      iVar4 = *(int *)(param_1 + 0x110);
    }
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x108) + (longlong)(iVar4 + -1) * 8);
    plVar2 = (longlong *)*param_4;
    plVar3 = *(longlong **)(lVar1 + 0x10);
    if (plVar3 != plVar2) {
      *(longlong **)(lVar1 + 0x10) = plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    *(int *)(lVar1 + 0x18) = (int)param_4[1];
    FUN_140997e44(param_1,0);
    return;
  }
  return;
}



// FUNCTION 146810c80 FUN_146810c80 body=121 status=ok
// SIG undefined FUN_146810c80(void)

void FUN_146810c80(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a61b4f();
  FUN_140997a5c(*(undefined8 *)
                 (*(longlong *)(param_1 + 0x108) + (longlong)(*(int *)(param_1 + 0x110) + -1) * 8));
  FUN_146810cfa(param_1 + 0x108,&local_20,1);
  FUN_146814f24(&local_20,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146810cfa FUN_146810cfa body=142 status=ok
// SIG undefined FUN_146810cfa(void)

undefined8 * FUN_146810cfa(longlong *param_1,undefined8 *param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *_Dst;
  int iVar4;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  *param_2 = *(undefined8 *)(lVar1 + -8 + (longlong)(int)lVar2 * 8);
  *(undefined8 *)(lVar1 + -8 + (longlong)(int)lVar2 * 8) = 0;
  iVar4 = (int)param_1[1];
  lVar1 = *param_1;
  _Dst = (undefined8 *)(lVar1 + (longlong)iVar4 * 8 + -8);
  FUN_146814f24(_Dst,*_Dst);
  iVar3 = (int)param_1[1] - iVar4;
  if (iVar3 != 0) {
    memmove(_Dst,(void *)(lVar1 + (longlong)iVar4 * 8),(longlong)iVar3 << 3);
    iVar4 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar4 + -1;
  if (param_3 == '\x01') {
    FUN_146814ff2(param_1);
  }
  return param_2;
}



// FUNCTION 146810d90 FUN_146810d90 body=94 status=ok
// SIG undefined FUN_146810d90(void)

ulonglong FUN_146810d90(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  plVar1 = (longlong *)(**(code **)(*param_3 + 0x20))(param_3,param_2,param_4);
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x170))(plVar1,*param_1,param_1[1]);
    (**(code **)(*plVar1 + 0x1f8))(plVar1);
    uVar2 = CONCAT71((int7)((ulonglong)param_1 >> 8),(*(byte *)((longlong)plVar1 + 0x29) & 6) == 0);
    (**(code **)*plVar1)(plVar1,1);
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 146810dee FUN_146810dee body=94 status=ok
// SIG undefined FUN_146810dee(void)

ulonglong FUN_146810dee(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  plVar1 = (longlong *)(**(code **)(*param_3 + 0x20))(param_3,param_2,param_4);
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x170))(plVar1,*param_1,param_1[1]);
    (**(code **)(*plVar1 + 0x1f8))(plVar1);
    uVar2 = CONCAT71((int7)((ulonglong)param_1 >> 8),(*(byte *)((longlong)plVar1 + 0x29) & 6) == 0);
    (**(code **)*plVar1)(plVar1,1);
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 146810e4c FUN_146810e4c body=336 status=ok
// SIG undefined FUN_146810e4c(void)

undefined4
FUN_146810e4c(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  longlong local_68;
  int local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((longlong)(int)param_1[1] == 0) {
LAB_146810ebc:
    uStack_50 = 0;
    local_58 = 0;
    FUN_1446f8c06(&local_58);
    if ((longlong)(int)param_1[1] == 0) goto LAB_146810f1b;
    puVar8 = (undefined8 *)*param_1;
    lVar6 = (longlong)(int)param_1[1] << 4;
  }
  else {
    puVar8 = (undefined8 *)*param_1;
    lVar6 = (longlong)(int)param_1[1] * 0x10;
    iVar5 = 10;
    lVar4 = 0;
    do {
      iVar1 = *(int *)((longlong)puVar8 + lVar4 + 8);
      iVar2 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar2 = 0;
      }
      iVar5 = iVar5 + iVar2 + 3;
      lVar4 = lVar4 + 0x10;
    } while (lVar6 != lVar4);
    local_58 = 0;
    uStack_50 = 0;
    if (0 < iVar5) goto LAB_146810ebc;
  }
  puVar7 = (undefined8 *)(lVar6 + (longlong)puVar8);
  do {
    iVar5 = *(int *)(puVar8 + 1) + -1;
    if (*(int *)(puVar8 + 1) == 0) {
      iVar5 = 0;
    }
    FUN_1400020e8(&local_58,*puVar8,iVar5);
    FUN_1400020e8(&local_58,&DAT_149e02010,2);
    puVar8 = puVar8 + 2;
  } while (puVar8 != puVar7);
LAB_146810f1b:
  local_68 = local_58;
  local_60 = (int)uStack_50 + -1;
  if ((int)uStack_50 == 0) {
    local_60 = 0;
  }
  local_78 = param_5;
  uVar3 = FUN_1415d54ec(&local_68,param_2,param_3,param_4);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 146810f9e FUN_146810f9e body=491 status=ok
// SIG undefined FUN_146810f9e(void)

uint FUN_146810f9e(undefined8 *param_1,undefined8 *param_2,undefined2 **param_3,longlong *param_4)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 **local_60;
  undefined2 *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400b22c2(&local_58,&DAT_149e02088);
  if (&local_58 == param_3) {
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    *param_3 = local_58;
    local_58 = (undefined2 *)0x0;
    *(int *)(param_3 + 1) = local_50;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_4c;
  }
  local_68 = &DAT_149dfb77a;
  if (*(int *)(param_2 + 1) != 0) {
    local_68 = (undefined2 *)*param_2;
  }
  puVar5 = &DAT_149dfb77a;
  if (*(int *)(param_1 + 1) != 0) {
    puVar5 = (undefined2 *)*param_1;
  }
  local_60 = param_3;
  FUN_140002266(&local_58,L"%s%05i.%s",puVar5,DAT_14c86824c);
  puVar5 = local_58;
  puVar6 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar6 = local_58;
  }
  cVar2 = (**(code **)(*param_4 + 0x48))(param_4,puVar6);
  uVar4 = 0;
  uVar7 = DAT_14c86824c + 1;
  if (cVar2 == '\0') {
    uVar7 = uVar4;
  }
  if ((int)uVar7 < 100000) {
    uVar4 = 1;
    do {
      local_68 = &DAT_149dfb77a;
      if (*(int *)(param_2 + 1) != 0) {
        local_68 = (undefined2 *)*param_2;
      }
      puVar6 = &DAT_149dfb77a;
      if (*(int *)(param_1 + 1) != 0) {
        puVar6 = (undefined2 *)*param_1;
      }
      FUN_140002266(&local_58,L"%s%05i.%s",puVar6,uVar7);
      if (puVar5 != (undefined2 *)0x0) {
        FUN_1400020a8(puVar5);
      }
      iVar1 = local_50;
      puVar5 = local_58;
      puVar6 = local_58;
      if (local_50 == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      cVar2 = (**(code **)(*param_4 + 0x48))(param_4,puVar6);
      if (cVar2 == '\0') {
        iVar8 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar8 = 0;
        }
        DAT_14c86824c = uVar7;
        FUN_1402980a2(local_60,puVar5,iVar8);
        break;
      }
      uVar3 = uVar7 + 1;
      uVar4 = (uint)((int)uVar7 < 99999);
      uVar7 = uVar3;
    } while (uVar3 != 100000);
  }
  if (puVar5 != (undefined2 *)0x0) {
    FUN_1400020a8(puVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14681118a FUN_14681118a body=362 status=ok
// SIG undefined FUN_14681118a(void)

void FUN_14681118a(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  undefined1 local_68 [8];
  undefined2 *local_60;
  int local_58;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1400b22c2(&local_50,&DAT_149e02088);
  if (&local_50 == param_3) {
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_50;
    local_50 = 0;
    *(undefined4 *)(param_3 + 1) = (undefined4)local_48;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_48._4_4_;
  }
  puVar3 = &DAT_149dfb77a;
  puVar2 = &DAT_149dfb77a;
  if (*(int *)(param_2 + 1) != 0) {
    puVar2 = (undefined2 *)*param_2;
  }
  FUN_1402160b8(local_68);
  FUN_14047ad2e(local_68,&local_60,L"%Y.%m.%d-%H.%M.%S");
  puVar1 = &DAT_149dfb77a;
  if (local_58 != 0) {
    puVar1 = local_60;
  }
  if (*(int *)(param_1 + 1) != 0) {
    puVar3 = (undefined2 *)*param_1;
  }
  local_78 = puVar2;
  FUN_140002266(&local_50,L"%s_%s.%s",puVar3,puVar1);
  if (&local_50 == param_3) {
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_50;
    local_50 = 0;
    *(undefined4 *)(param_3 + 1) = (undefined4)local_48;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_48._4_4_;
    local_48 = 0;
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468112f6 FUN_1468112f6 body=2343 status=ok
// SIG undefined FUN_1468112f6(void)

ulonglong FUN_1468112f6(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  ushort uVar3;
  ushort uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  wchar_t *pwVar15;
  bool bVar16;
  undefined1 auStack_208 [32];
  undefined4 local_1e8;
  undefined4 local_1e0;
  undefined1 local_1d0 [4];
  undefined1 local_1cc [4];
  longlong *local_1c8 [2];
  undefined8 local_1b8;
  longlong *local_1b0;
  undefined8 local_1a8;
  longlong *plStack_1a0;
  longlong *local_198 [2];
  longlong *local_188 [2];
  longlong *local_178 [2];
  undefined8 local_168;
  longlong *local_160;
  longlong *local_158 [2];
  wchar_t *local_148;
  longlong *plStack_140;
  undefined8 local_130;
  longlong *local_128;
  longlong *local_120 [2];
  longlong *local_110 [2];
  undefined2 *local_100;
  int local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  wchar_t **local_e0;
  ulonglong *local_d8;
  longlong local_d0;
  undefined4 local_c8;
  wchar_t *local_c0;
  int local_b8 [2];
  longlong *local_b0 [2];
  undefined4 local_a0 [4];
  undefined1 local_90 [16];
  undefined4 local_80;
  undefined1 local_70 [16];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_208;
  FUN_140c50e9c(&local_100,param_1);
  iVar11 = local_f8 + -1;
  if (local_f8 == 0) {
    iVar11 = 0;
  }
  if (iVar11 < 1) {
    local_c0 = L"Error_FilenameIsTooShort";
    local_b8[0] = 0x18;
    FUN_1446e940c(&local_d0,&local_c0);
    local_c0 = L"FileHelper";
    local_b8[0] = 10;
    FUN_1446e940c(&local_e0,&local_c0);
    pwVar15 = L"Please provide a filename for the asset.";
LAB_146811694:
    FUN_140208bae(&local_c0,&local_e0,&local_d0,pwVar15);
    FUN_140008f88(param_2,&local_c0);
    pwVar15 = local_c0;
LAB_1468116b8:
    if (pwVar15 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)pwVar15 + 0x10))();
    }
  }
  else {
    iVar6 = FUN_1457a17a0();
    if (iVar11 <= iVar6) {
      lVar12 = 0;
      do {
        FUN_140056680(&local_c0,*(undefined8 *)((longlong)&PTR_DAT_149e2e060 + lVar12));
        if (local_f8 == local_b8[0]) {
          bVar16 = true;
          if (1 < local_f8) {
            lVar13 = 0;
            while( true ) {
              uVar3 = *(ushort *)((longlong)local_100 + lVar13);
              uVar8 = (uint)uVar3;
              uVar4 = *(ushort *)((longlong)local_c0 + lVar13);
              uVar14 = (uint)uVar4;
              if (uVar3 != uVar4) {
                if ((uVar4 | uVar3) < 0x80) {
                  uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                  uVar14 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                  if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_146811774;
                }
                iVar11 = uVar8 - uVar14;
                goto LAB_1468117d6;
              }
              if (uVar3 == 0) break;
LAB_146811774:
              lVar13 = lVar13 + 2;
            }
            iVar11 = 0;
LAB_1468117d6:
            bVar16 = iVar11 == 0;
          }
        }
        else {
          bVar16 = local_b8[0] + local_f8 == 1;
        }
        if (local_c0 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        if (bVar16) {
          local_c0 = L"Error_InvalidFilename";
          local_b8[0] = 0x15;
          FUN_1446e940c(&local_d0,&local_c0);
          local_c0 = L"UnrealEd";
          local_b8[0] = 8;
          FUN_1446e940c(&local_e0,&local_c0);
          pwVar15 = 
          L"A file/folder may not match any of the following : \nCON, PRN, AUX, CLOCK$, NUL, NONE, \nCOM1, COM2, COM3, COM4, COM5, COM6, COM7, COM8, COM9, \nLPT1, LPT2, LPT3, LPT4, LPT5, LPT6, LPT7, LPT8, or LPT9."
          ;
          goto LAB_146811694;
        }
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0xc0);
      puVar9 = local_100;
      if (local_f8 == 0) {
        puVar9 = &DAT_149dfb77a;
      }
      FUN_1446f470e(&local_c0,puVar9,1);
      if (local_c0 == (wchar_t *)0x0) {
        FUN_140009b9a(local_120,&local_100);
        local_c0 = L"Error_NoneFilename";
        local_b8[0] = 0x12;
        FUN_1446e940c(&local_1a8,&local_c0);
        local_c0 = L"UnrealEd";
        local_b8[0] = 8;
        FUN_1446e940c(local_1c8,&local_c0);
        FUN_140208bae(&local_148,local_1c8,&local_1a8,
                      L"Filename \'{0}\' resolves to \'None\' and cannot be used");
        FUN_14023409e(&local_130,&local_148,1);
        local_c0 = (wchar_t *)CONCAT44(local_c0._4_4_,4);
        FUN_14023423e(local_b0,local_120);
        local_d8 = (ulonglong *)local_a0;
        local_e0 = &local_c0;
        FUN_14010d304(&local_d0);
        local_f0 = local_130;
        local_e8 = local_128;
        if (local_128 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_128 + 1) = (int)local_128[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(local_110,&local_f0,&local_d0);
        FUN_14007f2db(local_d0,local_c8);
        if (local_d0 != 0) {
          FUN_1400020a8();
        }
        if (local_b0[0] != (longlong *)0x0) {
          (**(code **)(*local_b0[0] + 0x10))();
        }
        if (local_128 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_128 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*local_128)(local_128);
            LOCK();
            piVar1 = (int *)((longlong)local_128 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_128 + 0x10))(local_128);
            }
          }
        }
      }
      else {
        local_1e0 = 0xffffffff;
        local_1e8 = 1;
        iVar11 = FUN_1447ee042(&local_100,&DAT_149e0635c,1,0);
        if (iVar11 == -1) {
          local_1e0 = 0xffffffff;
          local_1e8 = 1;
          iVar11 = FUN_1447ee042(&local_100,&DAT_149e31048,1,0);
          if (iVar11 == -1) {
            uVar10 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
            goto LAB_1468116c5;
          }
        }
        FUN_140009b9a(local_158,&local_100);
        local_c0 = L"Error_FilenameDisallowed";
        local_b8[0] = 0x18;
        FUN_1446e940c(&local_1a8,&local_c0);
        local_c0 = L"UnrealEd";
        local_b8[0] = 8;
        FUN_1446e940c(local_1c8,&local_c0);
        FUN_140208bae(&local_148,local_1c8,&local_1a8,L"Filename \'{0}\' is disallowed.");
        FUN_14023409e(&local_168,&local_148,1);
        local_c0 = (wchar_t *)CONCAT44(local_c0._4_4_,4);
        FUN_14023423e(local_b0,local_158);
        local_d8 = (ulonglong *)local_a0;
        local_e0 = &local_c0;
        FUN_14010d304(&local_d0);
        local_f0 = local_168;
        local_e8 = local_160;
        if (local_160 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_160 + 1) = (int)local_160[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(local_110,&local_f0,&local_d0);
        FUN_14007f2db(local_d0,local_c8);
        if (local_d0 != 0) {
          FUN_1400020a8();
        }
        if (local_b0[0] != (longlong *)0x0) {
          (**(code **)(*local_b0[0] + 0x10))();
        }
        local_120[0] = local_158[0];
        if (local_160 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_160 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*local_160)(local_160);
            LOCK();
            piVar1 = (int *)((longlong)local_160 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            local_120[0] = local_158[0];
            if (*piVar1 == 0) {
              (**(code **)(*local_160 + 0x10))(local_160);
              local_120[0] = local_158[0];
            }
          }
        }
      }
      if (local_120[0] != (longlong *)0x0) {
        (**(code **)(*local_120[0] + 0x10))();
      }
      FUN_140008f88(param_2,local_110);
      pwVar15 = local_148;
      if (local_110[0] != (longlong *)0x0) {
        (**(code **)(*local_110[0] + 0x10))();
        pwVar15 = local_148;
      }
      goto LAB_1468116b8;
    }
    FUN_140009b9a(local_178,&local_100);
    local_148 = (wchar_t *)0x0;
    plStack_140 = (longlong *)0x0;
    uVar7 = FUN_1457a17a0();
    FUN_1413a4536(local_188,uVar7,0,&local_148);
    local_1a8 = 0;
    plStack_1a0 = (longlong *)0x0;
    iVar11 = local_f8 + -1;
    if (local_f8 == 0) {
      iVar11 = 0;
    }
    FUN_1413a4536(local_198,iVar11,0);
    local_c0 = L"Error_FilenameIsTooLongForCooking";
    local_b8[0] = 0x21;
    FUN_1446e940c(local_1cc,&local_c0);
    local_c0 = L"UnrealEd";
    local_b8[0] = 8;
    FUN_1446e940c(local_1d0,&local_c0);
    FUN_140208bae(local_1c8,local_1d0,local_1cc,
                  L"Filename is too long ({0} characters); this may interfere with cooking for consoles. Unreal filenames should be no longer than {1} characters. Filename value: {2}"
                 );
    FUN_14023409e(&local_1b8,local_1c8,1);
    local_c0 = (wchar_t *)CONCAT44(local_c0._4_4_,4);
    FUN_14023423e(local_b0,local_198);
    local_a0[0] = 4;
    FUN_14023423e(local_90,local_188);
    local_80 = 4;
    FUN_14023423e(local_70,local_178);
    local_d8 = local_60;
    local_e0 = &local_c0;
    FUN_14010d304(&local_d0);
    local_f0 = local_1b8;
    local_e8 = local_1b0;
    if (local_1b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1b0 + 1) = (int)local_1b0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_110,&local_f0,&local_d0);
    FUN_14007f2db(local_d0,local_c8);
    if (local_d0 != 0) {
      FUN_1400020a8();
    }
    lVar12 = 0x50;
    do {
      plVar5 = *(longlong **)((longlong)local_b8 + lVar12 + -8);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))();
        *(undefined8 *)((longlong)local_b8 + lVar12 + -8) = 0;
        *(undefined4 *)((longlong)local_b8 + lVar12) = 0;
      }
      lVar12 = lVar12 + -0x20;
    } while (lVar12 != -0x10);
    if (local_1b0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_1b0 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_1b0)(local_1b0);
        LOCK();
        piVar1 = (int *)((longlong)local_1b0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_1b0 + 0x10))(local_1b0);
        }
      }
    }
    if (local_198[0] != (longlong *)0x0) {
      (**(code **)(*local_198[0] + 0x10))();
    }
    if (local_188[0] != (longlong *)0x0) {
      (**(code **)(*local_188[0] + 0x10))();
    }
    if (local_178[0] != (longlong *)0x0) {
      (**(code **)(*local_178[0] + 0x10))();
    }
    FUN_140008f88(param_2,local_110);
    if (local_110[0] != (longlong *)0x0) {
      (**(code **)(*local_110[0] + 0x10))();
    }
    if (local_1c8[0] != (longlong *)0x0) {
      (**(code **)(*local_1c8[0] + 0x10))();
    }
    plVar5 = plStack_1a0;
    if (plStack_1a0 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_1a0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_1a0)(plStack_1a0);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    plVar5 = plStack_140;
    if (plStack_140 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_140 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_140)(plStack_140);
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
  uVar10 = 0;
LAB_1468116c5:
  if (local_100 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60[0] ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 146811c1e FUN_146811c1e body=60 status=ok
// SIG undefined FUN_146811c1e(void)

ulonglong FUN_146811c1e(longlong param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 + 0xcbf29ce484222325;
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      uVar2 = (*(byte *)(param_1 + lVar1) ^ uVar2) * 0x100000001b3;
      lVar1 = lVar1 + 1;
    } while (param_2 != (int)lVar1);
    return uVar2;
  }
  return uVar2;
}



// FUNCTION 146811c5a FUN_146811c5a body=3 status=ok
// SIG undefined FUN_146811c5a(void)

undefined8 FUN_146811c5a(void)

{
  return 0;
}



// FUNCTION 146811c5e FUN_146811c5e body=156 status=ok
// SIG undefined FUN_146811c5e(void)

undefined1 FUN_146811c5e(void)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_144a65942();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = DAT_14c868258;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c86825c) &&
       (FUN_144b3d300(&DAT_14c86825c), uVar2 = DAT_14c868258, DAT_14c86825c == -1)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14c868258 = FUN_14054d46e(&DAT_14c846b20,L"PostForkThreading");
      _Init_thread_footer(&DAT_14c86825c);
      uVar2 = DAT_14c868258;
    }
  }
  return uVar2;
}



// FUNCTION 146811cfa FUN_146811cfa body=54 status=ok
// SIG undefined FUN_146811cfa(void)

double FUN_146811cfa(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  return ((double)((lVar1 >> 0x20) * 0x7fffffff) +
         (double)((ulonglong)(double)(int)((ulonglong)lVar1 >> 0x20) & 0x8000000000000000)) /
         (double)(int)lVar1;
}



// FUNCTION 146811d30 FUN_146811d30 body=1272 status=ok
// SIG undefined FUN_146811d30(void)

undefined8 FUN_146811d30(int *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  double dVar4;
  undefined8 uVar5;
  undefined1 auStack_148 [40];
  undefined8 local_120;
  longlong *local_118;
  undefined8 local_110;
  longlong *local_108;
  undefined1 local_100 [4];
  undefined1 local_fc [4];
  longlong *local_f8 [2];
  undefined8 local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong *plStack_d0;
  longlong *local_c0 [2];
  undefined8 local_b0;
  longlong *local_a8;
  wchar_t **local_a0;
  ulonglong *local_98;
  longlong local_90;
  undefined4 local_88;
  wchar_t *local_80;
  double local_78;
  longlong *plStack_70;
  undefined4 local_68;
  ulonglong local_60 [5];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_148;
  dVar4 = (double)*param_1 / (double)param_1[1];
  if (dVar4 <= 1.0) {
    if (dVar4 <= 9.999999747378752e-05) {
      local_80 = L"FPS_Format";
      local_78._0_4_ = 10;
      FUN_1446e940c(local_f8,&local_80);
      local_80 = L"FFrameRate";
      local_78 = (double)CONCAT44(local_78._4_4_,10);
      FUN_1446e940c(local_fc,&local_80);
      FUN_140208bae(&local_d8,local_fc,local_f8,L"{0} fps");
      FUN_14023409e(&local_120,&local_d8,1);
      local_80 = (wchar_t *)((ulonglong)local_80 & 0xffffffff00000000);
      local_78 = 0.0;
      plStack_70 = (longlong *)0x0;
      local_68 = 0;
      local_98 = local_60;
      local_a0 = &local_80;
      FUN_14010d304(&local_90);
      local_b0 = local_120;
      local_a8 = local_118;
      if (local_118 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_118 + 1) = (int)local_118[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(param_2,&local_b0,&local_90);
      FUN_14007f2db(local_90,local_88);
      if (local_90 != 0) {
        FUN_1400020a8();
      }
      if (plStack_70 != (longlong *)0x0) {
        (**(code **)(*plStack_70 + 0x10))();
      }
    }
    else {
      local_80 = L"Seconds_Format";
      local_78._0_4_ = 0xe;
      FUN_1446e940c(local_f8,&local_80);
      local_80 = L"FFrameRate";
      local_78 = (double)CONCAT44(local_78._4_4_,10);
      FUN_1446e940c(local_fc,&local_80);
      FUN_140208bae(&local_d8,local_fc,local_f8,L"{0} s");
      FUN_14023409e(&local_110,&local_d8,1);
      local_80 = (wchar_t *)CONCAT44(local_80._4_4_,3);
      plStack_70 = (longlong *)0x0;
      local_68 = 0;
      local_98 = local_60;
      local_a0 = &local_80;
      local_78 = 1.0 / dVar4;
      FUN_14010d304(&local_90);
      local_b0 = local_110;
      local_a8 = local_108;
      if (local_108 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_108 + 1) = (int)local_108[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(param_2,&local_b0,&local_90);
      FUN_14007f2db(local_90,local_88);
      if (local_90 != 0) {
        FUN_1400020a8();
      }
      local_118 = local_108;
      if (plStack_70 != (longlong *)0x0) {
        (**(code **)(*plStack_70 + 0x10))();
        local_118 = local_108;
      }
    }
    if (local_118 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_118 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_118)(local_118);
        LOCK();
        piVar2 = (int *)((longlong)local_118 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_118 + 0x10))(local_118);
        }
      }
    }
    if (local_d8 != (longlong *)0x0) {
      (**(code **)(*local_d8 + 0x10))();
    }
  }
  else {
    local_d8 = (longlong *)0x0;
    plStack_d0 = (longlong *)0x0;
    uVar5 = FUN_145a19d3c();
    FUN_1413ea578(local_c0,dVar4,uVar5,&local_d8);
    local_80 = L"FPS_Format";
    local_78._0_4_ = 10;
    FUN_1446e940c(local_fc,&local_80);
    local_80 = L"FFrameRate";
    local_78 = (double)CONCAT44(local_78._4_4_,10);
    FUN_1446e940c(local_100,&local_80);
    FUN_140208bae(local_f8,local_100,local_fc,L"{0} fps");
    FUN_14023409e(&local_e8,local_f8,1);
    local_80 = (wchar_t *)CONCAT44(local_80._4_4_,4);
    FUN_14023423e(&plStack_70,local_c0);
    local_98 = local_60;
    local_a0 = &local_80;
    FUN_14010d304(&local_90);
    local_b0 = local_e8;
    local_a8 = local_e0;
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(param_2,&local_b0,&local_90);
    FUN_14007f2db(local_90,local_88);
    if (local_90 != 0) {
      FUN_1400020a8();
    }
    if (plStack_70 != (longlong *)0x0) {
      (**(code **)(*plStack_70 + 0x10))();
    }
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_e0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar2 = (int *)((longlong)local_e0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_e0 + 0x10))(local_e0);
        }
      }
    }
    if (local_c0[0] != (longlong *)0x0) {
      (**(code **)(*local_c0[0] + 0x10))();
    }
    if (local_f8[0] != (longlong *)0x0) {
      (**(code **)(*local_f8[0] + 0x10))();
    }
    plVar1 = plStack_d0;
    if (plStack_d0 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_d0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_d0)(plStack_d0);
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
  if ((local_60[0] ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146812229 FUN_146812229 body=41 status=ok
// SIG undefined FUN_146812229(void)

undefined8 FUN_146812229(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140f5b0a6();
  FUN_140f5b112(uVar1,param_1,param_2);
  return param_1;
}



// FUNCTION 146812252 FUN_146812252 body=155 status=ok
// SIG undefined FUN_146812252(void)

undefined8 FUN_146812252(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  uVar1 = *param_1;
  local_28 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = param_1[1];
  local_24 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = param_1[2];
  local_20 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = param_1[3];
  local_1c = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  FUN_1407c8a86(&local_28,0x10,&local_38);
  iVar2 = (int)uStack_30 + -1;
  if ((int)uStack_30 == 0) {
    iVar2 = 0;
  }
  FUN_1400020e8(param_2,local_38,iVar2);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468122ee FUN_1468122ee body=143 status=ok
// SIG undefined FUN_1468122ee(void)

void FUN_1468122ee(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_a8 [40];
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  char local_68;
  undefined1 local_60 [70];
  undefined1 local_1a [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = local_60;
  local_68 = '\0';
  local_70 = local_1a;
  local_78 = local_80;
  FUN_1411a4b72(param_1,&local_80);
  FUN_14170b110(param_2,local_80,(int)local_78 - (int)local_80);
  if (local_68 == '\x01') {
    FUN_1400020a8(local_80);
  }
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14681237e FUN_14681237e body=58 status=ok
// SIG undefined FUN_14681237e(void)

void FUN_14681237e(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_2[3];
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar2 & 0xffff0fff | 0x3000;
  param_1[2] = uVar3 & 0x3fffffff | 0x80000000;
  param_1[3] = uVar1;
  return;
}



// FUNCTION 1468123b8 FUN_1468123b8 body=150 status=ok
// SIG undefined FUN_1468123b8(void)

bool FUN_1468123b8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 != 0) {
    if ((longlong *)(lVar1 + 8) != param_2) {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = *(longlong *)(lVar1 + 8);
      *(undefined8 *)(lVar1 + 8) = 0;
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar1 + 0x10);
      *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)(lVar1 + 0x14);
      *(undefined8 *)(lVar1 + 0x10) = 0;
    }
    lVar2 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar1;
    if (*(longlong *)(lVar1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(lVar1 + 8) = 0;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    if (lVar2 != 0) {
      if (*(longlong *)(lVar2 + 8) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(lVar2);
    }
  }
  return lVar1 != 0;
}



// FUNCTION 14681244e FUN_14681244e body=193 status=ok
// SIG undefined FUN_14681244e(void)

undefined8 FUN_14681244e(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined1 auStack_138 [32];
  undefined1 local_118 [128];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  uint uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  ulonglong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_38 = *param_2;
  uStack_30 = param_2[2];
  local_28 = *(ulonglong *)(param_2 + 4) ^ 0x8000000000000000;
  local_98 = 0x3ff0000000000000;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0x3ff0000000000000;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0x3ff0000000000000;
  local_40 = 0;
  uStack_34 = param_2[1] ^ 0x80000000;
  uStack_2c = param_2[3] ^ 0x80000000;
  local_20 = 0x3ff0000000000000;
  FUN_1447fea8d(local_118,param_3);
  FUN_144a928e2(param_1,local_118);
  if ((local_18 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146812510 FUN_146812510 body=38 status=ok
// SIG undefined FUN_146812510(void)

undefined8 FUN_146812510(undefined8 param_1,int param_2)

{
  FUN_14680e182();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146812536 FUN_146812536 body=38 status=ok
// SIG undefined FUN_146812536(void)

undefined8 FUN_146812536(undefined8 param_1,int param_2)

{
  FUN_1410c966c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14681255c FUN_14681255c body=38 status=ok
// SIG undefined FUN_14681255c(void)

undefined8 FUN_14681255c(undefined8 param_1,int param_2)

{
  FUN_1410c966c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146812582 FUN_146812582 body=38 status=ok
// SIG undefined FUN_146812582(void)

undefined8 FUN_146812582(undefined8 param_1,int param_2)

{
  FUN_145a3576c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468125f2 FUN_1468125f2 body=17 status=ok
// SIG undefined FUN_1468125f2(void)

void FUN_1468125f2(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146812600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x60))();
  return;
}



// FUNCTION 14681262a FUN_14681262a body=54 status=ok
// SIG undefined FUN_14681262a(void)

void FUN_14681262a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1400e9450();
                    /* WARNING: Could not recover jumptable at 0x00014681265d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x90))
            (*(longlong **)(param_1 + 0x90),param_2,param_3);
  return;
}



// FUNCTION 146812660 FUN_146812660 body=33 status=ok
// SIG undefined FUN_146812660(void)

longlong FUN_146812660(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x120))();
  return param_1;
}



// FUNCTION 146812682 FUN_146812682 body=33 status=ok
// SIG undefined FUN_146812682(void)

longlong FUN_146812682(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x128))();
  return param_1;
}



// FUNCTION 1468126a4 FUN_1468126a4 body=33 status=ok
// SIG undefined FUN_1468126a4(void)

longlong FUN_1468126a4(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x130))();
  return param_1;
}



// FUNCTION 1468126c6 FUN_1468126c6 body=33 status=ok
// SIG undefined FUN_1468126c6(void)

longlong FUN_1468126c6(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x140))();
  return param_1;
}



// FUNCTION 1468126e8 FUN_1468126e8 body=33 status=ok
// SIG undefined FUN_1468126e8(void)

longlong FUN_1468126e8(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x148))();
  return param_1;
}



// FUNCTION 14681270a FUN_14681270a body=33 status=ok
// SIG undefined FUN_14681270a(void)

longlong FUN_14681270a(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x158))();
  return param_1;
}



// FUNCTION 1468128ac FUN_1468128ac body=444 status=ok
// SIG undefined FUN_1468128ac(void)

undefined8 * FUN_1468128ac(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  uVar2 = param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_140b856de(param_1 + 1,iVar1,0);
    FUN_140b8566a(param_1[1],uVar2,iVar1);
  }
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar3 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar3,(longlong)iVar1 * 2);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  uVar2 = param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_140b856de(param_1 + 6,iVar1,0);
    FUN_140b8566a(param_1[6],uVar2,iVar1);
  }
  uVar4 = *(undefined4 *)(param_2 + 8);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x44);
  uVar6 = *(undefined4 *)(param_2 + 9);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x4c);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x4e);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x52);
  uVar10 = *(undefined4 *)((longlong)param_2 + 0x56);
  *(undefined4 *)((longlong)param_1 + 0x4a) = *(undefined4 *)((longlong)param_2 + 0x4a);
  *(undefined4 *)((longlong)param_1 + 0x4e) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x52) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x56) = uVar10;
  *(undefined4 *)(param_1 + 8) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar5;
  *(undefined4 *)(param_1 + 9) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar7;
  param_1[0xc] = 0;
  iVar1 = *(int *)(param_2 + 0xd);
  pvVar3 = (void *)param_2[0xc];
  *(int *)(param_1 + 0xd) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xc,iVar1,0);
    memcpy((void *)param_1[0xc],pvVar3,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  param_1[0xf] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  pvVar3 = (void *)param_2[0xf];
  *(int *)(param_1 + 0x10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xf,iVar1,0);
    memcpy((void *)param_1[0xf],pvVar3,(longlong)iVar1 * 2);
  }
  param_1[0x11] = param_2[0x11];
  return param_1;
}



// FUNCTION 146812a68 FUN_146812a68 body=109 status=ok
// SIG undefined FUN_146812a68(void)

void FUN_146812a68(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,4);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x38,4);
  }
  return;
}



// FUNCTION 146812ad6 FUN_146812ad6 body=143 status=ok
// SIG undefined FUN_146812ad6(void)

void FUN_146812ad6(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0x38,4);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146812b66 FUN_146812b66 body=132 status=ok
// SIG undefined FUN_146812b66(void)

void FUN_146812b66(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 7,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 7)) {
      uVar5 = uVar3 >> 7 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x80,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146812bec FUN_146812bec body=143 status=ok
// SIG undefined FUN_146812bec(void)

void FUN_146812bec(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0x70,0x10);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x70,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146812c7c FUN_146812c7c body=38 status=ok
// SIG undefined FUN_146812c7c(void)

undefined8 FUN_146812c7c(undefined8 param_1,int param_2)

{
  FUN_14681a5f2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146812ca2 FUN_146812ca2 body=32 status=ok
// SIG undefined FUN_146812ca2(void)

undefined8 FUN_146812ca2(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FBufferReaderWithSHA");
  return param_2;
}



// FUNCTION 146812cca FUN_146812cca body=32 status=ok
// SIG undefined FUN_146812cca(void)

undefined8 FUN_146812cca(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FBufferReaderBase");
  return param_2;
}



// FUNCTION 146812cea FUN_146812cea body=53 status=ok
// SIG undefined FUN_146812cea(void)

bool FUN_146812cea(longlong param_1)

{
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    FUN_1400020a8(*(undefined8 *)(param_1 + 0x90));
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  return (*(byte *)(param_1 + 0x29) & 2) == 0;
}



// FUNCTION 146812d20 FUN_146812d20 body=25 status=ok
// SIG undefined FUN_146812d20(void)

undefined8 FUN_146812d20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_146812d56(param_1,param_3);
  return param_1;
}



// FUNCTION 146812d56 FUN_146812d56 body=295 status=ok
// SIG undefined FUN_146812d56(void)

longlong FUN_146812d56(longlong param_1,int *param_2)

{
  double dVar1;
  double *pdVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined **local_58;
  longlong local_50;
  byte local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  pdVar2 = (double *)0x0;
  if (param_2[3] == DAT_14c758c50 &&
      (param_2[2] == DAT_14c758c4c && (param_2[1] == DAT_14c758c48 && *param_2 == DAT_14c758c44))) {
    pdVar2 = (double *)(param_2 + 6);
  }
  dVar1 = *pdVar2;
  if ((dVar1 < 2147483647.0) && (0.0 < dVar1)) {
    auVar3._0_8_ = dVar1 + 0.5;
    auVar3._8_8_ = 0;
    auVar3 = roundpd(auVar3,auVar3,1);
    if ((auVar3._0_8_ == dVar1) && (!NAN(auVar3._0_8_) && !NAN(dVar1))) {
      local_50 = ((ulonglong)(uint)(int)dVar1 << 0x20) + 1;
      local_68 = 0xb75e4b9e4edaa92f;
      uStack_60 = 0x8d981fcbb7e0abc2;
      local_58 = &PTR_FUN_149e301f0;
      local_28 = 0;
      goto LAB_146812e1e;
    }
  }
  FUN_146812e7e(&local_68);
LAB_146812e1e:
  *(byte *)(param_1 + 0x40) = local_28;
  (*(code *)(&PTR_thunk_FUN_141151bf0_149e1d9a0)[local_28])(param_1,&local_68);
  (*(code *)(&PTR_LAB_149e1d9c0)[local_28])(&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146812e7e FUN_146812e7e body=540 status=ok
// SIG undefined FUN_146812e7e(void)

undefined8 * FUN_146812e7e(undefined8 *param_1,double param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [4];
  undefined1 local_c4 [4];
  longlong *local_c0 [2];
  undefined8 local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  longlong *local_88;
  wchar_t **local_80;
  ulonglong *local_78;
  longlong local_70;
  undefined4 local_68;
  wchar_t *local_60;
  double local_58;
  longlong *local_50;
  undefined4 local_48;
  ulonglong local_40 [3];
  
  local_40[0] = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_2 <= 0.0) {
    local_60 = L"InvalidInterval";
    local_58._0_4_ = 0xf;
    FUN_1446e940c(local_c4,&local_60);
    local_60 = L"FFrameRate";
    local_58 = (double)CONCAT44(local_58._4_4_,10);
    FUN_1446e940c(local_c8,&local_60);
    FUN_140208bae(local_c0,local_c8,local_c4,L"Invalid interval specified: {0}");
    FUN_14023409e(&local_b0,local_c0,1);
    local_60 = (wchar_t *)CONCAT44(local_60._4_4_,3);
    local_50 = (longlong *)0x0;
    local_48 = 0;
    local_78 = local_40;
    local_80 = &local_60;
    local_58 = param_2;
    FUN_14010d304(&local_70);
    local_90 = local_b0;
    local_88 = local_a8;
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(&local_a0,&local_90,&local_70);
    FUN_14007f2db(local_70,local_68);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x10))();
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
    *param_1 = local_a0;
    if (local_a0 == (longlong *)0x0) {
      *(undefined4 *)(param_1 + 1) = local_98;
      *(undefined1 *)(param_1 + 8) = 1;
    }
    else {
      (**(code **)(*local_a0 + 8))();
      *(undefined4 *)(param_1 + 1) = local_98;
      *(undefined1 *)(param_1 + 8) = 1;
      if (local_a0 != (longlong *)0x0) {
        (**(code **)(*local_a0 + 0x10))();
      }
    }
    if (local_c0[0] != (longlong *)0x0) {
      (**(code **)(*local_c0[0] + 0x10))();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40[0] ^ (ulonglong)auStack_e8);
  }
  FUN_14110c29e(param_1,1.0 / param_2);
  if ((local_40[0] ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1468130bc FUN_1468130bc body=25 status=ok
// SIG undefined FUN_1468130bc(void)

undefined8 FUN_1468130bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1468130f2(param_1,param_3);
  return param_1;
}



// FUNCTION 1468130f2 FUN_1468130f2 body=171 status=ok
// SIG undefined FUN_1468130f2(void)

longlong FUN_1468130f2(longlong param_1,int *param_2)

{
  int *piVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [64];
  byte local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  piVar1 = (int *)0x0;
  if (param_2[3] == DAT_14c758c50 &&
      (param_2[2] == DAT_14c758c4c && (param_2[1] == DAT_14c758c48 && *param_2 == DAT_14c758c44))) {
    piVar1 = param_2 + 6;
  }
  FUN_14110c29e(local_68,*(undefined8 *)piVar1);
  *(byte *)(param_1 + 0x40) = local_28;
  (*(code *)(&PTR_thunk_FUN_141151bf0_149e1d9a0)[local_28])(param_1,local_68);
  (*(code *)(&PTR_LAB_149e1d9c0)[local_28])(local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14681319e FUN_14681319e body=25 status=ok
// SIG undefined FUN_14681319e(void)

undefined8 FUN_14681319e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1468131d4(param_1,param_3);
  return param_1;
}



// FUNCTION 1468131d4 FUN_1468131d4 body=171 status=ok
// SIG undefined FUN_1468131d4(void)

longlong FUN_1468131d4(longlong param_1,int *param_2)

{
  int *piVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [64];
  byte local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  piVar1 = (int *)0x0;
  if (param_2[3] == DAT_14c758c50 &&
      (param_2[2] == DAT_14c758c4c && (param_2[1] == DAT_14c758c48 && *param_2 == DAT_14c758c44))) {
    piVar1 = param_2 + 6;
  }
  FUN_146813280(local_68,*(undefined8 *)piVar1);
  *(byte *)(param_1 + 0x40) = local_28;
  (*(code *)(&PTR_thunk_FUN_141151bf0_149e1d9a0)[local_28])(param_1,local_68);
  (*(code *)(&PTR_LAB_149e1d9c0)[local_28])(local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146813280 FUN_146813280 body=668 status=ok
// SIG undefined FUN_146813280(void)

undefined8 * FUN_146813280(undefined8 *param_1,double param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_128 [32];
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  longlong *local_100 [2];
  undefined8 local_f0;
  longlong *local_e8;
  longlong *local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  wchar_t **local_c0;
  ulonglong *local_b8;
  longlong local_b0;
  undefined4 local_a8;
  wchar_t *local_a0;
  double local_98 [2];
  undefined4 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40 [3];
  
  local_40[0] = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((0.0001 < ABS(param_2 + -29.97)) && (0.0001 < ABS(param_2 + -59.94))) {
    local_a0 = L"InvalidDropFrameFPS";
    local_98[0]._0_4_ = 0x13;
    FUN_1446e940c(local_104,&local_a0);
    local_a0 = L"FFrameRate";
    local_98[0] = (double)CONCAT44(local_98[0]._4_4_,10);
    FUN_1446e940c(local_108,&local_a0);
    FUN_140208bae(local_100,local_108,local_104,
                  L"Drop frame not supported for FPS specified: {0}.\nDrop frame timecode is only supported for NTSC_30 ({1}fps) and NTSC_60 ({2}fps) frame rates."
                 );
    FUN_14023409e(&local_f0,local_100,1);
    local_a0 = (wchar_t *)CONCAT44(local_a0._4_4_,3);
    local_98[1] = 0.0;
    local_88 = 0;
    local_80 = 3;
    local_70 = 0;
    local_68 = 0;
    local_78 = 0x403df851eb851eb8;
    local_60 = 3;
    local_50 = 0;
    local_48 = 0;
    local_58 = 0x404df851eb851eb8;
    local_b8 = local_40;
    local_c0 = &local_a0;
    local_98[0] = param_2;
    FUN_14010d304(&local_b0);
    local_d0 = local_f0;
    local_c8 = local_e8;
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_e8 + 1) = (int)local_e8[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(&local_e0,&local_d0,&local_b0);
    FUN_14007f2db(local_b0,local_a8);
    if (local_b0 != 0) {
      FUN_1400020a8();
    }
    lVar3 = 0x50;
    do {
      if (*(longlong **)((longlong)&local_a0 + lVar3) != (longlong *)0x0) {
        (**(code **)(**(longlong **)((longlong)&local_a0 + lVar3) + 0x10))();
        *(undefined8 *)((longlong)&local_a0 + lVar3) = 0;
        *(undefined4 *)((longlong)local_98 + lVar3) = 0;
      }
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != -0x10);
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_e8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_e8)(local_e8);
        LOCK();
        piVar2 = (int *)((longlong)local_e8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_e8 + 0x10))(local_e8);
        }
      }
    }
    *param_1 = local_e0;
    if (local_e0 == (longlong *)0x0) {
      *(undefined4 *)(param_1 + 1) = local_d8;
      *(undefined1 *)(param_1 + 8) = 1;
    }
    else {
      (**(code **)(*local_e0 + 8))();
      *(undefined4 *)(param_1 + 1) = local_d8;
      *(undefined1 *)(param_1 + 8) = 1;
      if (local_e0 != (longlong *)0x0) {
        (**(code **)(*local_e0 + 0x10))();
      }
    }
    if (local_100[0] != (longlong *)0x0) {
      (**(code **)(*local_100[0] + 0x10))();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40[0] ^ (ulonglong)auStack_128);
  }
  FUN_14110c29e(param_1,param_2);
  if ((local_40[0] ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146813520 FUN_146813520 body=28 status=ok
// SIG undefined FUN_146813520(void)

undefined8
FUN_146813520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_146813558(param_1,param_3,param_4);
  return param_1;
}



// FUNCTION 146813558 FUN_146813558 body=227 status=ok
// SIG undefined FUN_146813558(void)

longlong FUN_146813558(longlong param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78 [64];
  byte local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  piVar2 = param_3 + 6;
  if (param_3[3] != DAT_14c758c50 ||
      (param_3[2] != DAT_14c758c4c || (param_3[1] != DAT_14c758c48 || *param_3 != DAT_14c758c44))) {
    piVar2 = (int *)0x0;
  }
  piVar1 = param_2 + 6;
  if (DAT_14c758c50 != param_2[3] ||
      (DAT_14c758c4c != param_2[2] || (DAT_14c758c48 != param_2[1] || DAT_14c758c44 != *param_2))) {
    piVar1 = (int *)0x0;
  }
  FUN_14681363c(local_78,*(undefined8 *)piVar1,*(undefined8 *)piVar2);
  *(byte *)(param_1 + 0x40) = local_38;
  (*(code *)(&PTR_thunk_FUN_141151bf0_149e1d9a0)[local_38])(param_1,local_78);
  (*(code *)(&PTR_LAB_149e1d9c0)[local_38])(local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14681363c FUN_14681363c body=1037 status=ok
// SIG undefined FUN_14681363c(void)

undefined8 * FUN_14681363c(undefined8 *param_1,double param_2,double param_3)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  longlong *local_100;
  undefined1 local_f8 [4];
  undefined1 local_f4 [4];
  longlong *local_f0 [2];
  undefined8 local_e0;
  longlong *local_d8;
  longlong *local_d0;
  undefined4 local_c8;
  double local_c0;
  double local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  wchar_t **local_a0;
  ulonglong *local_98;
  longlong local_90;
  undefined4 local_88;
  wchar_t *local_80;
  double local_78;
  longlong *local_70;
  undefined4 local_68;
  ulonglong local_60 [7];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_b8 = 0.0;
  local_c0 = 0.0;
  if (param_2 <= 0.0) {
LAB_146813745:
    local_80 = L"InvalidNumerator";
    local_78._0_4_ = 0x10;
    FUN_1446e940c(local_f4,&local_80);
    local_80 = L"FFrameRate";
    local_78 = (double)CONCAT44(local_78._4_4_,10);
    FUN_1446e940c(local_f8,&local_80);
    FUN_140208bae(local_f0,local_f8,local_f4,L"Invalid framerate numerator: {0}");
    FUN_14023409e(&local_e0,local_f0,1);
    local_80 = (wchar_t *)CONCAT44(local_80._4_4_,3);
    local_70 = (longlong *)0x0;
    local_68 = 0;
    local_98 = local_60;
    local_a0 = &local_80;
    local_78 = param_2;
    FUN_14010d304(&local_90);
    local_b0 = local_e0;
    local_a8 = local_d8;
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(&local_d0,&local_b0,&local_90);
    FUN_14007f2db(local_90,local_88);
    if (local_90 != 0) {
      FUN_1400020a8();
    }
    if (local_70 != (longlong *)0x0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  else {
    dVar4 = modf(param_2,&local_b8);
    dVar3 = local_b8;
    if (((dVar4 != 0.0) || (NAN(dVar4))) || (2147483647.0 < local_b8)) goto LAB_146813745;
    if (0.0 < param_3) {
      dVar4 = modf(param_3,&local_c0);
      if (((dVar4 == 0.0) && (!NAN(dVar4))) && (local_c0 <= 2147483647.0)) {
        *param_1 = 0xb75e4b9e4edaa92f;
        param_1[1] = 0x8d981fcbb7e0abc2;
        param_1[2] = &PTR_FUN_149e301f0;
        param_1[3] = CONCAT44((int)local_c0,(int)dVar3);
        *(undefined1 *)(param_1 + 8) = 0;
        goto LAB_1468138cc;
      }
    }
    local_80 = L"InvalidDenominator";
    local_78._0_4_ = 0x12;
    FUN_1446e940c(local_f4,&local_80);
    local_80 = L"FFrameRate";
    local_78 = (double)CONCAT44(local_78._4_4_,10);
    FUN_1446e940c(local_f8,&local_80);
    FUN_140208bae(local_f0,local_f8,local_f4,L"Invalid framerate denominator: {0}");
    FUN_14023409e(&local_108,local_f0,1);
    local_80 = (wchar_t *)CONCAT44(local_80._4_4_,3);
    local_70 = (longlong *)0x0;
    local_68 = 0;
    local_98 = local_60;
    local_a0 = &local_80;
    local_78 = param_3;
    FUN_14010d304(&local_90);
    local_b0 = local_108;
    local_a8 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_100 + 1) = (int)local_100[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(&local_d0,&local_b0,&local_90);
    FUN_14007f2db(local_90,local_88);
    if (local_90 != 0) {
      FUN_1400020a8();
    }
    local_d8 = local_100;
    if (local_70 != (longlong *)0x0) {
      (**(code **)(*local_70 + 0x10))();
      local_d8 = local_100;
    }
  }
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_d8)(local_d8);
      LOCK();
      piVar2 = (int *)((longlong)local_d8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_d8 + 0x10))(local_d8);
      }
    }
  }
  *param_1 = local_d0;
  if (local_d0 == (longlong *)0x0) {
    *(undefined4 *)(param_1 + 1) = local_c8;
    *(undefined1 *)(param_1 + 8) = 1;
  }
  else {
    (**(code **)(*local_d0 + 8))();
    *(undefined4 *)(param_1 + 1) = local_c8;
    *(undefined1 *)(param_1 + 8) = 1;
    if (local_d0 != (longlong *)0x0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  if (local_f0[0] != (longlong *)0x0) {
    (**(code **)(*local_f0[0] + 0x10))();
  }
LAB_1468138cc:
  if ((local_60[0] ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146813a5c FUN_146813a5c body=147 status=ok
// SIG undefined FUN_146813a5c(void)

void FUN_146813a5c(longlong param_1,int param_2)

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



// FUNCTION 146813af0 FUN_146813af0 body=114 status=ok
// SIG undefined FUN_146813af0(void)

void FUN_146813af0(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x48) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x48);
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



// FUNCTION 146813b62 FUN_146813b62 body=328 status=ok
// SIG undefined FUN_146813b62(void)

undefined4 * FUN_146813b62(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_14680cdd8(param_1,local_48);
  FUN_146813d38(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 0x1b) = 0xffffffff;
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
  cVar3 = FUN_146813cac(param_1,uVar4,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0xdc) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x1b) =
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
      FUN_14680b8e6(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146813cac FUN_146813cac body=139 status=ok
// SIG undefined FUN_146813cac(void)

undefined8 FUN_146813cac(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar3 = FUN_146813efc(), iVar3 != -1)) {
    lVar2 = *param_1;
    plVar1 = (longlong *)(lVar2 + (longlong)iVar3 * 0xe0);
    FUN_14626ac20(plVar1 + 2);
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    memmove((void *)(lVar2 + (longlong)iVar3 * 0xe0),param_3,0xd8);
    FUN_146813fce(param_1,*param_4);
    *param_4 = iVar3;
    return 1;
  }
  return 0;
}



// FUNCTION 146813d38 FUN_146813d38 body=203 status=ok
// SIG undefined FUN_146813d38(void)

undefined8 * FUN_146813d38(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
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
  FUN_146813e04(param_1 + 2,param_3);
  FUN_146813e80(param_1 + 0xc,param_3 + 0x50);
  uVar2 = *(undefined8 *)(param_3 + 0xa8);
  param_1[0x16] = *(undefined8 *)(param_3 + 0xa0);
  param_1[0x17] = uVar2;
  *(undefined8 *)((longlong)param_1 + 0xbe) = *(undefined8 *)(param_3 + 0xae);
  param_1[0x19] = 0;
  param_1[0x19] = *(undefined8 *)(param_3 + 0xb8);
  *(undefined8 *)(param_3 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_3 + 0xc0);
  *(undefined4 *)((longlong)param_1 + 0xd4) = *(undefined4 *)(param_3 + 0xc4);
  *(undefined8 *)(param_3 + 0xc0) = 0;
  return param_1;
}



// FUNCTION 146813e04 FUN_146813e04 body=123 status=ok
// SIG undefined FUN_146813e04(void)

undefined8 * FUN_146813e04(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_145aac34a();
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



// FUNCTION 146813e80 FUN_146813e80 body=123 status=ok
// SIG undefined FUN_146813e80(void)

undefined8 * FUN_146813e80(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_145aac19c();
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


