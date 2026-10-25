// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145dc5743 FUN_145dc5743 body=43 status=ok
// SIG undefined FUN_145dc5743(void)

void FUN_145dc5743(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148b51f52(param_1);
    param_1 = param_1 + 0xf0;
  }
  return;
}



// FUNCTION 145dc576e FUN_145dc576e body=53 status=ok
// SIG undefined FUN_145dc576e(void)

void FUN_145dc576e(longlong *param_1)

{
  FUN_145dc57a4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145dc57a4 FUN_145dc57a4 body=346 status=ok
// SIG undefined FUN_145dc57a4(void)

void FUN_145dc57a4(longlong *param_1)

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
      FUN_148b51f52(*local_68 + (longlong)iStack_4c * 0x110 + 0x10);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1403c5a5e(param_1,0);
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



// FUNCTION 145dc590a FUN_145dc590a body=163 status=ok
// SIG undefined FUN_145dc590a(void)

undefined8 * FUN_145dc590a(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14bcb0100;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc13c50) {
    FUN_144b3d300(&DAT_14cc13c50);
    if (DAT_14cc13c50 == -1) {
      FUN_1415516e2();
      atexit((_func_5014 *)&LAB_1444f2296);
      _Init_thread_footer(&DAT_14cc13c50);
    }
  }
  return param_1;
}



// FUNCTION 145dc59ba FUN_145dc59ba body=58 status=ok
// SIG undefined FUN_145dc59ba(void)

undefined8 FUN_145dc59ba(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x18))();
  if (lVar1 == 0) {
    uVar2 = 1;
  }
  else {
    FUN_1415518d0(lVar1,param_2,param_3,param_4);
    uVar2 = 2;
  }
  return uVar2;
}



// FUNCTION 145dc59f4 FUN_145dc59f4 body=489 status=ok
// SIG undefined FUN_145dc59f4(void)

int * FUN_145dc59f4(int *param_1,undefined8 param_2,undefined8 param_3,int param_4,longlong *param_5
                   ,int *param_6)

{
  void **ppvVar1;
  longlong lVar2;
  longlong lVar3;
  void *_Src;
  int iVar4;
  size_t sVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_b8 [40];
  int *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  void *local_78;
  ulonglong uStack_70;
  undefined1 local_5c [4];
  int *local_58;
  int **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = param_4;
  FUN_1446ddc76(param_1 + 1,param_2,1);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)(param_1 + 0xe) = param_3;
  *(longlong *)(param_1 + 0x10) = *param_5;
  *(longlong *)(param_1 + 0x14) = param_5[2];
  param_5[2] = 0;
  lVar7 = param_5[4];
  lVar2 = param_5[5];
  lVar3 = param_5[7];
  *(longlong *)(param_1 + 0x1c) = param_5[6];
  *(longlong *)(param_1 + 0x1e) = lVar3;
  *(longlong *)(param_1 + 0x18) = lVar7;
  *(longlong *)(param_1 + 0x1a) = lVar2;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    *param_5 = 0;
  }
  if (param_6 != (int *)0x0) {
    ppvVar1 = (void **)(param_1 + 10);
    local_88 = 0;
    uStack_80 = 0;
    local_78 = (void *)0x0;
    uStack_70 = 0;
    local_58 = param_6;
    sVar5 = strlen((char *)param_6);
    local_50 = (int **)CONCAT44(local_50._4_4_,(int)sVar5);
    FUN_14475bea4(&local_88,&local_58);
    _Src = local_78;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = (int)local_88;
    param_1[7] = local_88._4_4_;
    param_1[8] = (int)uStack_80;
    param_1[9] = uStack_80._4_4_;
    if (ppvVar1 != &local_78) {
      iVar4 = (int)uStack_70;
      lVar7 = (longlong)(int)uStack_70;
      param_1[0xc] = (int)uStack_70;
      if ((int)uStack_70 == 0 && param_1[0xd] == 0) {
        param_1[0xd] = 0;
      }
      else {
        FUN_1446dd670(ppvVar1,uStack_70 & 0xffffffff);
        if (iVar4 != 0) {
          memcpy(*ppvVar1,_Src,lVar7 * 2);
        }
      }
    }
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((-1 < *param_1) && ((DAT_14cb890d0 == (int *)0x0 || (*DAT_14cb890d0 < *param_1)))) {
    DAT_14cb890d0 = param_1;
  }
  FUN_145dc5bde();
  local_50 = &local_90;
  local_90 = param_1;
  local_58 = param_1 + 1;
  FUN_145dc5c7c(&DAT_14cb890d8,local_5c,&local_58,0);
  if (*param_5 != 0) {
    plVar6 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_5[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dc5bde FUN_145dc5bde body=157 status=ok
// SIG undefined FUN_145dc5bde(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_145dc5bde(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb89128) {
    FUN_144b3d300(&DAT_14cb89128);
    if (DAT_14cb89128 == -1) {
      DAT_14cb890f8 = 0;
      _DAT_14cb89100 = 0;
      DAT_14cb890d8 = 0;
      _DAT_14cb890e0 = 0;
      _DAT_14cb89104 = 0xffffffff00000080;
      _DAT_14cb8910c = 0;
      DAT_14cb89118 = 0;
      _DAT_14cb89120 = 0;
      atexit(FUN_143e053ee);
      _Init_thread_footer(&DAT_14cb89128);
    }
  }
  return &DAT_14cb890d8;
}



// FUNCTION 145dc5c7c FUN_145dc5c7c body=352 status=ok
// SIG undefined FUN_145dc5c7c(void)

undefined4 *
FUN_145dc5c7c(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

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
  FUN_145dc5e76(param_1,local_48);
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
  cVar3 = FUN_145dc5dde(param_1,uVar8,local_40);
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
      FUN_145dc5f5e(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dc5dde FUN_145dc5dde body=152 status=ok
// SIG undefined FUN_145dc5dde(void)

void FUN_145dc5dde(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
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
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar6 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)lVar3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar1;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar2;
          FUN_145bda6ca((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          break;
        }
        iVar7 = (int)plVar6[2];
        uVar5 = 0;
      } while (iVar7 != -1);
      goto LAB_145dc5e4b;
    }
  }
  uVar5 = 0;
LAB_145dc5e4b:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 145dc5e76 FUN_145dc5e76 body=231 status=ok
// SIG undefined FUN_145dc5e76(void)

int * FUN_145dc5e76(longlong *param_1,int *param_2)

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



// FUNCTION 145dc5f5e FUN_145dc5f5e body=482 status=ok
// SIG undefined FUN_145dc5f5e(void)

void FUN_145dc5f5e(longlong *param_1)

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
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
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



// FUNCTION 145dc6142 FUN_145dc6142 body=92 status=ok
// SIG undefined FUN_145dc6142(void)

void FUN_145dc6142(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a9c41e0;
  FUN_145dc61d4();
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_145dc619e(param_1 + 1);
  return;
}



// FUNCTION 145dc619e FUN_145dc619e body=53 status=ok
// SIG undefined FUN_145dc619e(void)

void FUN_145dc619e(longlong *param_1)

{
  FUN_145dc6294();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145dc61d4 FUN_145dc61d4 body=127 status=ok
// SIG undefined FUN_145dc61d4(void)

void FUN_145dc61d4(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x3c);
  FUN_145dc6254(param_1 + 8);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if (iVar1 <= iVar2) {
    return;
  }
  FUN_140f93338(&DAT_14c9647b8,param_1);
  return;
}



// FUNCTION 145dc6254 FUN_145dc6254 body=63 status=ok
// SIG undefined FUN_145dc6254(void)

void FUN_145dc6254(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145dc63f0(param_1);
    FUN_145dc6294(param_1);
    return;
  }
  FUN_145dc6294(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_147458802(param_1);
  return;
}



// FUNCTION 145dc6294 FUN_145dc6294 body=346 status=ok
// SIG undefined FUN_145dc6294(void)

void FUN_145dc6294(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
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
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145dc63f0 FUN_145dc63f0 body=335 status=ok
// SIG undefined FUN_145dc63f0(void)

void FUN_145dc63f0(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 145dc6540 FUN_145dc6540 body=40 status=ok
// SIG undefined FUN_145dc6540(void)

undefined8 FUN_145dc6540(undefined8 param_1,int param_2)

{
  FUN_145dc6568();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145dc6568 FUN_145dc6568 body=69 status=ok
// SIG undefined FUN_145dc6568(void)

void FUN_145dc6568(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ad01410;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_145dc65ae(param_1 + 8);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145dc65ae FUN_145dc65ae body=53 status=ok
// SIG undefined FUN_145dc65ae(void)

void FUN_145dc65ae(longlong *param_1)

{
  FUN_145dc65e4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145dc65e4 FUN_145dc65e4 body=346 status=ok
// SIG undefined FUN_145dc65e4(void)

void FUN_145dc65e4(longlong *param_1)

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



// FUNCTION 145dc6740 FUN_145dc6740 body=40 status=ok
// SIG undefined FUN_145dc6740(void)

undefined8 FUN_145dc6740(undefined8 param_1,int param_2)

{
  FUN_145dc6768();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145dc6768 FUN_145dc6768 body=69 status=ok
// SIG undefined FUN_145dc6768(void)

void FUN_145dc6768(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ad017b0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_145dc67ae(param_1 + 8);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145dc67ae FUN_145dc67ae body=53 status=ok
// SIG undefined FUN_145dc67ae(void)

void FUN_145dc67ae(longlong *param_1)

{
  FUN_145dc67e4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145dc67e4 FUN_145dc67e4 body=346 status=ok
// SIG undefined FUN_145dc67e4(void)

void FUN_145dc67e4(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 0x30 + (longlong)iStack_4c * 0x48) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1403af08a(param_1,0);
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



// FUNCTION 145dc6940 FUN_145dc6940 body=818 status=ok
// SIG undefined FUN_145dc6940(void)

void FUN_145dc6940(longlong param_1,uint param_2)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong *puVar7;
  int iVar8;
  ulonglong *puVar9;
  longlong lVar10;
  undefined1 auStack_398 [32];
  undefined1 *local_378;
  ulonglong *local_370;
  int local_368;
  undefined4 local_364;
  undefined1 local_360 [792];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_398;
  local_360[0] = 0x18;
  puVar3 = (undefined8 *)FUN_145dc6c74(param_1 + 0x1a0,0x18,local_360);
  local_370 = (ulonglong *)0x0;
  local_368 = *(int *)(puVar3 + 1);
  lVar10 = (longlong)local_368;
  _Src = (void *)*puVar3;
  if (lVar10 == 0) {
    local_364 = 0;
  }
  else {
    FUN_14144d01c(&local_370,local_368);
    memcpy(local_370,_Src,lVar10 << 3);
    if (((longlong)local_368 != 0) && (*(int *)(param_1 + 0x3e0) != *(int *)(param_1 + 0x40c))) {
      lVar10 = param_1 + 0x410;
      lVar4 = *(longlong *)(param_1 + 0x418);
      if (*(longlong *)(param_1 + 0x418) == 0) {
        lVar4 = lVar10;
      }
      iVar8 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x420) - 1U & param_2) * 4);
      if (iVar8 != -1) {
        do {
          if (*(uint *)(*(longlong *)(param_1 + 0x3d8) + (longlong)iVar8 * 0x60) == param_2) {
            puVar1 = local_370 + local_368;
            puVar9 = local_370;
            goto LAB_145dc6a36;
          }
          iVar8 = *(int *)((longlong)iVar8 * 0x60 + *(longlong *)(param_1 + 0x3d8) + 0x58);
        } while (iVar8 != -1);
      }
    }
  }
  goto LAB_145dc6be0;
  while( true ) {
    iVar8 = *(int *)(lVar4 + 0x58);
    lVar4 = 0;
    if (iVar8 == -1) break;
LAB_145dc6b51:
    lVar4 = *(longlong *)(param_1 + 0x3d8) + (longlong)iVar8 * 0x60;
    if (*(uint *)(*(longlong *)(param_1 + 0x3d8) + (longlong)iVar8 * 0x60) == param_2) break;
  }
LAB_145dc6b69:
  if (*(int *)(lVar4 + 0x10) != *(int *)(lVar4 + 0x3c)) {
    lVar6 = lVar4 + 0x40;
    if (*(longlong *)(lVar4 + 0x48) != 0) {
      lVar6 = *(longlong *)(lVar4 + 0x48);
    }
    iVar8 = *(int *)(lVar6 + (ulonglong)(*(int *)(lVar4 + 0x50) - 1U & uVar5) * 4);
    if (iVar8 != -1) {
      do {
        puVar7 = (ulonglong *)(*(longlong *)(lVar4 + 8) + (longlong)iVar8 * 0x18);
        if (*puVar7 == uVar2) goto LAB_145dc6bb5;
        iVar8 = (int)puVar7[2];
      } while (iVar8 != -1);
    }
  }
  puVar7 = (ulonglong *)0x0;
LAB_145dc6bb5:
  local_378 = local_360;
  FUN_140d1c8e8(param_1,param_2,uVar2,puVar7[1]);
  FUN_140d17bd8(local_360);
  while (puVar9 = puVar9 + 1, puVar9 != puVar1) {
LAB_145dc6a36:
    if (*(int *)(param_1 + 0x3e0) == *(int *)(param_1 + 0x40c)) {
LAB_145dc6c21:
      lVar4 = 0;
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x418);
      if (*(longlong *)(param_1 + 0x418) == 0) {
        lVar4 = lVar10;
      }
      iVar8 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x420) - 1U & param_2) * 4);
      if (iVar8 == -1) goto LAB_145dc6c21;
      do {
        lVar4 = *(longlong *)(param_1 + 0x3d8) + (longlong)iVar8 * 0x60;
        if (*(uint *)(*(longlong *)(param_1 + 0x3d8) + (longlong)iVar8 * 0x60) == param_2) break;
        iVar8 = *(int *)(lVar4 + 0x58);
        lVar4 = 0;
      } while (iVar8 != -1);
    }
    if (*(int *)(lVar4 + 0x10) != *(int *)(lVar4 + 0x3c)) {
      uVar2 = *puVar9;
      uVar5 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
      uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
      uVar5 = uVar5 >> 0x10 ^ uVar5;
      lVar6 = lVar4 + 0x40;
      if (*(longlong *)(lVar4 + 0x48) != 0) {
        lVar6 = *(longlong *)(lVar4 + 0x48);
      }
      iVar8 = *(int *)(lVar6 + (ulonglong)(*(int *)(lVar4 + 0x50) - 1U & uVar5) * 4);
      if (iVar8 != -1) {
        do {
          if (*(ulonglong *)(*(longlong *)(lVar4 + 8) + (longlong)iVar8 * 0x18) == uVar2) {
            FUN_141551abe(local_360);
            local_360[0] = 0x18;
            if (*(int *)(param_1 + 0x3e0) != *(int *)(param_1 + 0x40c)) {
              lVar4 = *(longlong *)(param_1 + 0x418);
              if (*(longlong *)(param_1 + 0x418) == 0) {
                lVar4 = lVar10;
              }
              iVar8 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x420) - 1U & param_2) * 4);
              if (iVar8 != -1) {
                goto LAB_145dc6b51;
              }
            }
            lVar4 = 0;
            goto LAB_145dc6b69;
          }
          iVar8 = *(int *)(*(longlong *)(lVar4 + 8) + (longlong)iVar8 * 0x18 + 0x10);
        } while (iVar8 != -1);
      }
    }
  }
LAB_145dc6be0:
  if (local_370 != (ulonglong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145dc6c74 FUN_145dc6c74 body=181 status=ok
// SIG undefined FUN_145dc6c74(void)

longlong FUN_145dc6c74(longlong *param_1,uint param_2,char *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  char *local_28;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(char *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_145dc6cd6;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_148d00e36(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_145dc6cd6:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 145dc6d2a FUN_145dc6d2a body=21 status=ok
// SIG undefined FUN_145dc6d2a(void)

undefined8 FUN_145dc6d2a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145dc6d40 FUN_145dc6d40 body=71 status=ok
// SIG undefined FUN_145dc6d40(void)

void FUN_145dc6d40(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 8) = 0;
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000145dc6d83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145dc6d88 FUN_145dc6d88 body=24 status=ok
// SIG undefined FUN_145dc6d88(void)

void FUN_145dc6d88(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145dc6d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145dc6da0 FUN_145dc6da0 body=229 status=ok
// SIG undefined FUN_145dc6da0(void)

void FUN_145dc6da0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145dc6e98(&local_30);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 8) = local_30;
    plVar4 = *(longlong **)(param_1 + 0x10);
    if (plVar4 == (longlong *)0x0) goto LAB_145dc6dec;
    *(undefined8 *)(param_1 + 0x10) = 0;
LAB_145dc6e30:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_145dc6dec;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 8) = local_30;
    plVar4 = *(longlong **)(param_1 + 0x10);
    if (local_28 != plVar4) {
      *(longlong **)(param_1 + 0x10) = local_28;
      if (plVar4 == (longlong *)0x0) goto LAB_145dc6dec;
      goto LAB_145dc6e30;
    }
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_145dc6dec;
    (**(code **)*local_28)(local_28);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_145dc6dec:
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



// FUNCTION 145dc6e98 FUN_145dc6e98 body=418 status=ok
// SIG undefined FUN_145dc6e98(void)

longlong * FUN_145dc6e98(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_14001cc68(0x48,0x10);
  FUN_145dc703c(lVar2,&local_30);
  *param_1 = lVar2;
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a3cb400;
  plVar3[2] = lVar2;
  param_1[1] = (longlong)plVar3;
  if (lVar2 == 0) {
    local_30 = 0;
    goto LAB_145dc6f58;
  }
  if (((*(longlong *)(lVar2 + 8) == 0) || (*(longlong *)(lVar2 + 0x10) == 0)) ||
     (*(int *)(*(longlong *)(lVar2 + 0x10) + 8) < 1)) {
    if (plVar3 == (longlong *)0x0) {
      *(longlong *)(lVar2 + 8) = lVar2;
      plVar4 = *(longlong **)(lVar2 + 0x10);
      if (plVar4 != (longlong *)0x0) {
LAB_145dc6fde:
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
        *(longlong **)(lVar2 + 0x10) = plVar3;
        if (plVar3 != (longlong *)0x0) goto LAB_145dc6f47;
      }
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      *(longlong *)(lVar2 + 8) = lVar2;
      if (*(longlong **)(lVar2 + 0x10) != plVar3) {
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        plVar4 = *(longlong **)(lVar2 + 0x10);
        if (plVar4 != (longlong *)0x0) goto LAB_145dc6fde;
        *(longlong **)(lVar2 + 0x10) = plVar3;
      }
LAB_145dc6f47:
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
    }
  }
  local_30 = *param_1;
  plVar3 = (longlong *)param_1[1];
LAB_145dc6f58:
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_28 = plVar3;
  FUN_141332b2e(&local_30);
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145dc703c FUN_145dc703c body=168 status=ok
// SIG undefined FUN_145dc703c(void)

undefined8 * FUN_145dc703c(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  code *local_38;
  undefined4 local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14a3d08f0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  local_38 = (code *)&LAB_1401def3a;
  local_30 = 0;
  FUN_145dc70e6(&DAT_14c867438,local_28,param_1,&local_38);
  local_38 = FUN_1401def48;
  local_30 = 0;
  FUN_145dc70e6(&DAT_14c867450,local_28,param_1,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dc70e6 FUN_145dc70e6 body=237 status=ok
// SIG undefined FUN_145dc70e6(void)

undefined8
FUN_145dc70e6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_FUN_14a3d41d0;
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



// FUNCTION 145dc71d4 FUN_145dc71d4 body=937 status=ok
// SIG undefined FUN_145dc71d4(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_145dc71d4(longlong param_1)

{
  int *piVar1;
  undefined8 *_Dst;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 *******pppppppuVar8;
  undefined1 auStack_f8 [40];
  undefined8 local_d0;
  undefined1 local_c1;
  undefined8 *******local_c0;
  longlong *local_b8;
  ushort local_a8;
  byte local_a0;
  undefined1 local_98 [40];
  undefined4 local_70 [2];
  undefined1 local_68 [40];
  undefined4 local_40 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(int *)(lVar2 + 0x17c) == 0) goto LAB_145dc7390;
  local_68[0] = 0;
  local_40[0] = 0;
  local_c1 = 2;
  local_d0 = FUN_144a7be76();
  FUN_144a7bec8(param_1,&local_c0);
  local_98[0] = 0;
  local_70[0] = 0;
  FUN_144a7bf34(local_98,&local_c0,&local_d0,&local_c1);
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_b8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_b8 + 0x10))();
    }
  }
  if (*(int *)(lVar2 + 0xb8) == 1) {
    FUN_1447c3578(lVar2 + 0xc0,&local_c0,local_98);
    uVar5 = FUN_14070d842(&local_c0);
    FUN_1456bb102(local_68,uVar5);
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
    if (pcVar6 != (code *)0x0) {
      pppppppuVar8 = &local_c0;
      if (0x18 < local_a8) {
        pppppppuVar8 = local_c0;
      }
      (*pcVar6)(pppppppuVar8);
    }
    if (0x18 < local_a8) {
      FUN_1400020a8(local_c0);
    }
  }
  else {
    FUN_1447f8f6a(local_68,local_98);
    FUN_14495544a(local_40,local_70);
  }
  if (*(int *)(lVar2 + 0x17c) == 2) {
    FUN_1414321f6(lVar2 + 0x180,&local_c0,local_68,local_98);
    if (local_a0 == 0) {
      uVar4 = 0;
    }
    else {
      if (*(code **)(&DAT_14c9a8610 + (uint)*(byte *)(lVar2 + 0xa8) * 0x120) != (code *)0x0) {
        (**(code **)(&DAT_14c9a8610 + (uint)*(byte *)(lVar2 + 0xa8) * 0x120))
                  (lVar2 + 0x88,local_68,&local_c0);
      }
      uVar4 = (uint)local_a0;
    }
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar4 * 0x120));
    if (pcVar6 != (code *)0x0) {
      pppppppuVar8 = &local_c0;
      if (0x18 < local_a8) {
        pppppppuVar8 = local_c0;
      }
      (*pcVar6)(pppppppuVar8);
    }
joined_r0x000145dc7547:
    if (0x18 < local_a8) {
      FUN_1400020a8(local_c0);
    }
  }
  else if (*(int *)(lVar2 + 0x17c) == 1) {
    bVar3 = *(byte *)(param_1 + 0xf8);
    if (bVar3 != 0) {
      _Dst = (undefined8 *)(param_1 + 0xd8);
      if (*(code **)(&DAT_14c9a8610 + (uint)*(byte *)(lVar2 + 0xa8) * 0x120) != (code *)0x0) {
        (**(code **)(&DAT_14c9a8610 + (uint)*(byte *)(lVar2 + 0xa8) * 0x120))
                  (lVar2 + 0x88,local_68,_Dst);
        bVar3 = *(byte *)(param_1 + 0xf8);
      }
      local_a8 = 0;
      local_a0 = 0;
      pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
      if (pcVar6 != (code *)0x0) {
        puVar7 = _Dst;
        if (0x18 < *(ushort *)(param_1 + 0xf0)) {
          puVar7 = (undefined8 *)*_Dst;
        }
        (*pcVar6)(puVar7);
      }
      if (0x18 < *(ushort *)(param_1 + 0xf0)) {
        FUN_1400020a8(*_Dst);
      }
      *(undefined2 *)(param_1 + 0xf0) = 0;
      pcVar6 = DAT_14c9a85b8;
      if ((DAT_14c9a85b8 == (code *)0x0) && (pcVar6 = DAT_14c9a85b0, DAT_14c9a85b0 == (code *)0x0))
      {
        memcpy(_Dst,&local_c0,(longlong)DAT_14c9a8510);
      }
      else {
        (*pcVar6)(_Dst,&local_c0);
      }
      *(byte *)(param_1 + 0xf8) = local_a0;
      local_a0 = 0;
      if (DAT_14c9a85d0 != (code *)0x0) {
        pppppppuVar8 = &local_c0;
        if (0x18 < local_a8) {
          pppppppuVar8 = local_c0;
        }
        (*DAT_14c9a85d0)(pppppppuVar8);
      }
      goto joined_r0x000145dc7547;
    }
    FUN_145dc757e(lVar2 + 0x80,local_68);
  }
  FUN_144a5ac3a(local_98);
  FUN_144a5ac3a(local_68);
LAB_145dc7390:
  if ((local_38 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145dc757e FUN_145dc757e body=39 status=ok
// SIG undefined FUN_145dc757e(void)

void FUN_145dc757e(longlong param_1)

{
  if (*(code **)(&DAT_14c9a8618 + (uint)*(byte *)(param_1 + 0x28) * 0x120) != (code *)0x0) {
                    /* WARNING: Jumptable at 0x000145dc75a1 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_14c9a8618 + (uint)*(byte *)(param_1 + 0x28) * 0x120))(param_1 + 8);
    return;
  }
  return;
}



// FUNCTION 145dc75a6 FUN_145dc75a6 body=226 status=ok
// SIG undefined FUN_145dc75a6(void)

longlong * FUN_145dc75a6(longlong *param_1)

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
  pcVar13 = FUN_1462bcdfe;
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



// FUNCTION 145dc768e FUN_145dc768e body=136 status=ok
// SIG undefined FUN_145dc768e(void)

undefined1 * FUN_145dc768e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1411f35ea();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x7d;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145dc768a;
}



// FUNCTION 145dc7716 FUN_145dc7716 body=144 status=ok
// SIG undefined FUN_145dc7716(void)

code * FUN_145dc7716(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1448e5570();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"DigistructDepthParamsUB";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FDigistructDepthUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xa000000080;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462bce86;
}



// FUNCTION 145dc77a6 FUN_145dc77a6 body=226 status=ok
// SIG undefined FUN_145dc77a6(void)

longlong * FUN_145dc77a6(longlong *param_1)

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
  pcVar13 = FUN_14630f812;
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



// FUNCTION 145dc788e FUN_145dc788e body=138 status=ok
// SIG undefined FUN_145dc788e(void)

undefined1 * FUN_145dc788e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1411f35ea();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x5c4;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145dc788a;
}



// FUNCTION 145dc7918 FUN_145dc7918 body=142 status=ok
// SIG undefined FUN_145dc7918(void)

code * FUN_145dc7918(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a8ca7c();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"BasePass";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FTranslucentBasePassUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x30000005c6;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14630fa4a;
}



// FUNCTION 145dc79b2 FUN_145dc79b2 body=159 status=ok
// SIG undefined FUN_145dc79b2(void)

undefined8 * FUN_145dc79b2(undefined8 *param_1)

{
  FUN_14077009c();
  *param_1 = &PTR_FUN_14a61fae0;
  param_1[6] = &PTR_FUN_14a61fd80;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
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
  return param_1;
}



// FUNCTION 145dc7a5c FUN_145dc7a5c body=160 status=ok
// SIG undefined FUN_145dc7a5c(void)

undefined8 * FUN_145dc7a5c(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14a699180;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xfe;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caec118) {
    FUN_144b3d300(&DAT_14caec118);
    if (DAT_14caec118 == -1) {
      FUN_141551cce();
      atexit((_func_5014 *)&LAB_14356f5bc);
      _Init_thread_footer(&DAT_14caec118);
    }
  }
  return param_1;
}



// FUNCTION 145dc7afc FUN_145dc7afc body=54 status=ok
// SIG undefined FUN_145dc7afc(void)

void FUN_145dc7afc(longlong param_1)

{
  longlong lVar1;
  
  FUN_14080c2b4();
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    FUN_141551d78(lVar1);
    FUN_1400020a8(lVar1);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 145dc7b32 FUN_145dc7b32 body=40 status=ok
// SIG undefined FUN_145dc7b32(void)

undefined8 FUN_145dc7b32(undefined8 param_1,int param_2)

{
  FUN_145dc7b5a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145dc7b5a FUN_145dc7b5a body=130 status=ok
// SIG undefined FUN_145dc7b5a(void)

void FUN_145dc7b5a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ae57100;
  param_1[0x1a] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x2e];
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145dc7bdc FUN_145dc7bdc body=40 status=ok
// SIG undefined FUN_145dc7bdc(void)

undefined8 FUN_145dc7bdc(undefined8 param_1,int param_2)

{
  FUN_145dc7c04();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145dc7c04 FUN_145dc7c04 body=130 status=ok
// SIG undefined FUN_145dc7c04(void)

void FUN_145dc7c04(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b0c8e60;
  param_1[0x72] = &PTR_FUN_14b0c94a0;
  param_1[0x73] = &PTR_FUN_14b0c94d0;
  param_1[0x74] = &PTR_FUN_14b0c9540;
  FUN_1403d7b38(param_1 + 0x78);
  plVar3 = (longlong *)param_1[0x77];
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
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145dc7c86 FUN_145dc7c86 body=63 status=ok
// SIG undefined FUN_145dc7c86(void)

undefined1 FUN_145dc7c86(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_145dc7cc6(param_2,param_3);
    param_3 = param_3 + 0x120;
    param_2 = param_2 + 0x120;
  }
  return 1;
}



// FUNCTION 145dc7cc6 FUN_145dc7cc6 body=113 status=ok
// SIG undefined FUN_145dc7cc6(void)

longlong FUN_145dc7cc6(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_140cae46a();
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  FUN_140cae504(param_1 + 0x58,param_2 + 0x58);
  FUN_140cae59e(param_1 + 0xa8,param_2 + 0xa8);
  uVar1 = *(undefined4 *)(param_2 + 0xfc);
  uVar2 = *(undefined4 *)(param_2 + 0x100);
  uVar3 = *(undefined4 *)(param_2 + 0x104);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0xfc) = uVar1;
  *(undefined4 *)(param_1 + 0x100) = uVar2;
  *(undefined4 *)(param_1 + 0x104) = uVar3;
  *(undefined8 *)(param_1 + 0x105) = *(undefined8 *)(param_2 + 0x105);
  FUN_145dc7d38(param_1 + 0x110,param_2 + 0x110);
  return param_1;
}



// FUNCTION 145dc7d38 FUN_145dc7d38 body=79 status=ok
// SIG undefined FUN_145dc7d38(void)

undefined8 * FUN_145dc7d38(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148697f18(param_1,iVar1);
      FUN_148697f87(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145dc7d92 FUN_145dc7d92 body=328 status=ok
// SIG undefined FUN_145dc7d92(void)

undefined8 * FUN_145dc7d92(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145965918();
  *param_1 = &PTR_FUN_14b442cd0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0x2d000000500;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  *(undefined2 *)(param_1 + 0x97) = 1;
  *(undefined8 *)((longlong)param_1 + 0x4bc) = 1;
  *(undefined8 *)((longlong)param_1 + 0x4c4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4cc) = 200;
  param_1[0x9a] = 0;
  *(undefined4 *)(param_1 + 0x9b) = 0x41000000;
  *(undefined2 *)((longlong)param_1 + 0x4dc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4df) = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4f3) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4fb) = 0;
  *(undefined8 *)((longlong)param_1 + 0x504) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x514) = 0;
  param_1[0xa6] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  FUN_1446f470e(&local_28,L"CohtmlHUD",1);
  local_48 = FUN_1458f2bfe();
  local_38 = 0;
  local_40 = 1;
  uVar1 = FUN_140486aac(param_2,param_1,local_28,local_48);
  param_1[0x90] = uVar1;
  param_1[0x93] = &DAT_100000001;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dc7ee6 FUN_145dc7ee6 body=159 status=ok
// SIG undefined FUN_145dc7ee6(void)

undefined8 * FUN_145dc7ee6(undefined8 *param_1)

{
  FUN_144a0768c();
  FUN_145af9302(param_1 + 5);
  *param_1 = &PTR_FUN_14b44b580;
  param_1[5] = &PTR_FUN_14b44b820;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  return param_1;
}



// FUNCTION 145dc7f86 FUN_145dc7f86 body=40 status=ok
// SIG undefined FUN_145dc7f86(void)

undefined8 FUN_145dc7f86(undefined8 param_1,int param_2)

{
  FUN_145dc7fae();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145dc7fae FUN_145dc7fae body=130 status=ok
// SIG undefined FUN_145dc7fae(void)

void FUN_145dc7fae(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4bb970;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0xd];
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
  FUN_1449db362(param_1 + 9);
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145dc8030 FUN_145dc8030 body=269 status=ok
// SIG undefined FUN_145dc8030(void)

undefined8 * FUN_145dc8030(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_FUN_14b504110;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_145dc813e(param_1 + 1,param_2 + 1);
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_145dc81c4(param_1 + 3,param_2 + 3);
  param_1[5] = 0;
  lVar1 = param_2[5];
  if (lVar1 != 0) {
    FUN_1401924dc(lVar1);
    param_1[5] = lVar1;
  }
  FUN_1407b7224(param_1 + 6,param_2 + 6);
  FUN_1407b7224(param_1 + 8,param_2 + 8);
  FUN_1407b7224(param_1 + 10,param_2 + 10);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 2;
  if (param_2 != param_1) {
    FUN_145dc824a(param_1 + 0xd,param_2 + 0xd);
  }
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  FUN_145dc813e(param_1 + 0x10,param_2 + 0x10);
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  FUN_145dc81c4(param_1 + 0x12,param_2 + 0x12);
  uVar2 = param_2[0x14];
  uVar3 = param_2[0x15];
  uVar4 = param_2[0x17];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = uVar4;
  param_1[0x14] = uVar2;
  param_1[0x15] = uVar3;
  return param_1;
}



// FUNCTION 145dc813e FUN_145dc813e body=132 status=ok
// SIG undefined FUN_145dc813e(void)

void FUN_145dc813e(longlong *param_1,longlong *param_2)

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



// FUNCTION 145dc81c4 FUN_145dc81c4 body=132 status=ok
// SIG undefined FUN_145dc81c4(void)

void FUN_145dc81c4(longlong *param_1,longlong *param_2)

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



// FUNCTION 145dc824a FUN_145dc824a body=314 status=ok
// SIG undefined FUN_145dc824a(void)

void FUN_145dc824a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar4 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1447a71f6(&local_58,uVar4 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  FUN_144a3e8f2(param_1,&local_58);
  FUN_144760e21(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145dc8386 FUN_145dc8386 body=40 status=ok
// SIG undefined FUN_145dc8386(void)

undefined8 FUN_145dc8386(undefined8 param_1,int param_2)

{
  FUN_141551dec();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145dc83b8 FUN_145dc83b8 body=114 status=ok
// SIG undefined FUN_145dc83b8(void)

void FUN_145dc83b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b97d850;
  *(undefined4 *)(param_1 + 0x36) = 0;
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_145852fa4(param_1 + 0x2d);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  FUN_145dc842a(param_1 + 0x23);
  FUN_145dc85c6(param_1);
  return;
}



// FUNCTION 145dc842a FUN_145dc842a body=53 status=ok
// SIG undefined FUN_145dc842a(void)

void FUN_145dc842a(longlong *param_1)

{
  FUN_145dc8460();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145dc8460 FUN_145dc8460 body=356 status=ok
// SIG undefined FUN_145dc8460(void)

void FUN_145dc8460(longlong *param_1)

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
      plVar4 = *(longlong **)(*local_70 + 0x18 + (longlong)iStack_54 * 0x28);
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
    FUN_140549ad6(param_1,0);
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



// FUNCTION 145dc85c6 FUN_145dc85c6 body=292 status=ok
// SIG undefined FUN_145dc85c6(void)

void FUN_145dc85c6(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b41df00;
  FUN_145c196fd(param_1[0x21],*(undefined4 *)(param_1 + 0x22));
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_145c196fc(param_1[0x1f],*(undefined4 *)(param_1 + 0x20));
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_145a50286(param_1[0x1d],*(undefined4 *)(param_1 + 0x1e));
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_145dc86ea(param_1 + 0x13);
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_145dc8722(param_1 + 9);
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
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145dc86e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145dc86ea FUN_145dc86ea body=55 status=ok
// SIG undefined FUN_145dc86ea(void)

void FUN_145dc86ea(longlong *param_1)

{
  FUN_14117fd5c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145dc8722 FUN_145dc8722 body=55 status=ok
// SIG undefined FUN_145dc8722(void)

void FUN_145dc8722(longlong *param_1)

{
  FUN_141180298(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145dc875a FUN_145dc875a body=156 status=ok
// SIG undefined FUN_145dc875a(void)

undefined8 * FUN_145dc875a(longlong param_1,undefined8 *param_2,uint param_3,undefined8 param_4)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  if (param_3 < 4) {
    local_38 = 0;
    local_30 = 0;
    FUN_145dc87f8(&local_38,param_4);
    FUN_145dc8876(param_1 + (ulonglong)param_3 * 0x18 + 0xb0,&local_40,&local_38);
    FUN_1449db362(&local_38);
    *param_2 = local_40;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dc87f8 FUN_145dc87f8 body=124 status=ok
// SIG undefined FUN_145dc87f8(void)

void FUN_145dc87f8(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
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



// FUNCTION 145dc8876 FUN_145dc8876 body=216 status=ok
// SIG undefined FUN_145dc8876(void)

undefined8 * FUN_145dc8876(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145dc8966 FUN_145dc8966 body=164 status=ok
// SIG undefined FUN_145dc8966(void)

undefined8 * FUN_145dc8966(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14bcac070;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0x3e8b618f;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x3f2c90a0;
  *(undefined4 *)(param_1 + 0x1c) = 0x3d5be985;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc139c8) {
    FUN_144b3d300(&DAT_14cc139c8);
    if (DAT_14cc139c8 == -1) {
      FUN_141551e6e();
      atexit((_func_5014 *)&LAB_1444f217e);
      _Init_thread_footer(&DAT_14cc139c8);
    }
  }
  return param_1;
}



// FUNCTION 145dc8a0a FUN_145dc8a0a body=460 status=ok
// SIG undefined FUN_145dc8a0a(void)

/* WARNING: Type propagation algorithm not settling */

longlong * FUN_145dc8a0a(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  longlong **local_98;
  longlong *local_90;
  longlong *local_88;
  longlong local_80 [3];
  longlong *local_68;
  longlong *local_60;
  longlong **local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = param_2;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  if ((longlong)DAT_14c760da4 != 0) {
    local_88 = (longlong *)(param_2 + (longlong)DAT_14c760da4 * 8 + 2000);
    plVar2 = (longlong *)(param_2 + 2000);
    do {
      lVar4 = *plVar2;
      lVar3 = lVar4 + 0xb00;
      if (*(longlong *)(lVar4 + 0x1280) != 0) {
        lVar3 = *(longlong *)(lVar4 + 0x1280);
      }
      if ((longlong)*(int *)(lVar4 + 0x12c0) != 0) {
        lVar4 = (longlong)*(int *)(lVar4 + 0x12c0) * 0x280;
        do {
          local_68 = (longlong *)0x0;
          local_98 = &local_68;
          iVar1 = (**(code **)(**(longlong **)(*param_1 + 8) + 0x120))
                            (*(longlong **)(*param_1 + 8),0,0,&DAT_14a34c500);
          if (iVar1 < 0) {
            local_90 = local_80 + 1;
            local_80[1] = 0;
            local_80[2] = 0;
            local_98 = (longlong **)0x0;
            FUN_145763094(iVar1,
                          "Parent->GetD3DDevice()->CreateFence(0, D3D12_FENCE_FLAG_NONE, IID_PPV_ARGS(Fence.GetInitReference()))"
                          ,".\\Runtime/D3D12RHI/Private/D3D12DirectCommandListManager.cpp",0x92);
          }
          (**(code **)(*local_68 + 0x30))(local_68,L"Manual Fence");
          local_60 = local_80;
          local_80[0] = lVar3;
          local_58 = &local_68;
          FUN_145dc8bd8(param_1 + 1,local_4c,&local_60,0);
          if (local_68 != (longlong *)0x0) {
            (**(code **)(*local_68 + 0x10))();
          }
          lVar3 = lVar3 + 0x280;
          lVar4 = lVar4 + -0x280;
        } while (lVar4 != 0);
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != local_88);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dc8bd8 FUN_145dc8bd8 body=347 status=ok
// SIG undefined FUN_145dc8bd8(void)

undefined4 *
FUN_145dc8bd8(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_145dc8de8(param_1,local_50);
  puVar1 = (ulonglong *)param_3[1];
  *local_48 = *(ulonglong *)*param_3;
  local_48[1] = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(local_48 + 2) = 0xffffffff;
  local_54 = local_50[0];
  uVar4 = ((uint)(*local_48 >> 0x14) & 0xffff ^ (uint)(*local_48 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  local_68 = param_4;
  cVar3 = FUN_145dc8d34(param_1,uVar4,local_48,&local_54);
  uVar2 = local_54;
  if (cVar3 == '\0') {
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
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_48 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_145dc8ed0(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dc8d34 FUN_145dc8d34 body=179 status=ok
// SIG undefined FUN_145dc8d34(void)

void FUN_145dc8d34(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 uVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          if ((longlong *)plVar5[1] != (longlong *)0x0) {
            (**(code **)(*(longlong *)plVar5[1] + 0x10))();
          }
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar3 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)*param_3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_147379c36(param_1,*param_4);
          *param_4 = iVar6;
          uVar4 = 1;
          break;
        }
        iVar6 = (int)plVar5[2];
        uVar4 = 0;
      } while (iVar6 != -1);
      goto LAB_145dc8da6;
    }
  }
  uVar4 = 0;
LAB_145dc8da6:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar4;
  }
  return;
}



// FUNCTION 145dc8de8 FUN_145dc8de8 body=231 status=ok
// SIG undefined FUN_145dc8de8(void)

int * FUN_145dc8de8(longlong *param_1,int *param_2)

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



// FUNCTION 145dc8ed0 FUN_145dc8ed0 body=483 status=ok
// SIG undefined FUN_145dc8ed0(void)

void FUN_145dc8ed0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 145dc90b4 FUN_145dc90b4 body=241 status=ok
// SIG undefined FUN_145dc90b4(void)

undefined8 FUN_145dc90b4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14a8ea760;
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
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14a8ea6f0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145dc91a6(param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dc91a6 FUN_145dc91a6 body=233 status=ok
// SIG undefined FUN_145dc91a6(void)

undefined8 * FUN_145dc91a6(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  if (((int)param_2[1] != 0) && ((longlong *)*param_2 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(&DAT_14c967088,1);
      uVar5 = 0;
      if (((int)param_2[1] != 0) && (plVar1 = (longlong *)*param_2, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
        uVar5 = local_28;
      }
      *param_1 = uVar5;
      uVar3 = DAT_14c967090;
      lVar6 = (longlong)(int)DAT_14c967090;
      DAT_14c967090 = DAT_14c967090 + 1;
      if (DAT_14c967094 < DAT_14c967090) {
        FUN_1447a71f6(&DAT_14c967088,uVar3);
      }
      lVar2 = DAT_14c967088;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14c967088 + lVar6) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar6) = 0;
      *(longlong *)(lVar2 + lVar6) = *param_2;
      *param_2 = 0;
      *(int *)(lVar2 + 8 + lVar6) = (int)param_2[1];
      *(undefined4 *)(param_2 + 1) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dc929c FUN_145dc929c body=24 status=ok
// SIG undefined FUN_145dc929c(void)

bool FUN_145dc929c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145dc92b4 FUN_145dc92b4 body=241 status=ok
// SIG undefined FUN_145dc92b4(void)

undefined8 FUN_145dc92b4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14a9eeb90;
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
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14a9eeb20;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145dc93a6(param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dc93a6 FUN_145dc93a6 body=233 status=ok
// SIG undefined FUN_145dc93a6(void)

undefined8 * FUN_145dc93a6(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  if (((int)param_2[1] != 0) && ((longlong *)*param_2 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(&DAT_14caf2750,1);
      uVar5 = 0;
      if (((int)param_2[1] != 0) && (plVar1 = (longlong *)*param_2, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
        uVar5 = local_28;
      }
      *param_1 = uVar5;
      uVar3 = DAT_14caf2758;
      lVar6 = (longlong)(int)DAT_14caf2758;
      DAT_14caf2758 = DAT_14caf2758 + 1;
      if (DAT_14caf275c < DAT_14caf2758) {
        FUN_1447a71f6(&DAT_14caf2750,uVar3);
      }
      lVar2 = DAT_14caf2750;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14caf2750 + lVar6) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar6) = 0;
      *(longlong *)(lVar2 + lVar6) = *param_2;
      *param_2 = 0;
      *(int *)(lVar2 + 8 + lVar6) = (int)param_2[1];
      *(undefined4 *)(param_2 + 1) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dc949c FUN_145dc949c body=24 status=ok
// SIG undefined FUN_145dc949c(void)

bool FUN_145dc949c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145dc94b4 FUN_145dc94b4 body=101 status=ok
// SIG undefined FUN_145dc94b4(void)

void FUN_145dc94b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14acb4cb0;
  param_1[1] = &PTR_FUN_14acb4ce0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_145dc951a(param_1 + 5);
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145dc951a FUN_145dc951a body=53 status=ok
// SIG undefined FUN_145dc951a(void)

void FUN_145dc951a(longlong *param_1)

{
  FUN_145dc9550();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145dc9550 FUN_145dc9550 body=356 status=ok
// SIG undefined FUN_145dc9550(void)

void FUN_145dc9550(longlong *param_1)

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
      plVar4 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20);
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
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 145dc96b6 FUN_145dc96b6 body=99 status=ok
// SIG undefined FUN_145dc96b6(void)

undefined4 FUN_145dc96b6(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141551f14(param_2,local_30);
  uVar1 = FUN_145dc971a(param_1,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dc971a FUN_145dc971a body=323 status=ok
// SIG undefined FUN_145dc971a(void)

ulonglong FUN_145dc971a(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  void *_Src;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined7 uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x50) == 0) {
    param_2 = (longlong *)0x0;
    goto LAB_145dc9815;
  }
  FUN_146048f14(*(longlong *)(param_1 + 0x50),&local_48);
  _Src = local_48;
  local_38 = (void *)0x0;
  local_30 = local_40;
  uVar6 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong)local_40 == 0) {
    local_2c = 0;
    iVar4 = (int)param_2[1];
    param_2 = (longlong *)CONCAT71(uVar6,1);
    if (iVar4 != 0) {
      iVar5 = 0;
      goto LAB_145dc9852;
    }
  }
  else {
    FUN_1446dd670(&local_38,local_40,0);
    memcpy(local_38,_Src,(longlong)local_40 * 2);
    iVar4 = (int)param_2[1];
    iVar5 = local_30;
    if (local_30 == iVar4) {
      if (1 < local_30) {
        lVar7 = 0;
        while( true ) {
          uVar1 = *(ushort *)((longlong)local_38 + lVar7);
          uVar3 = (uint)uVar1;
          uVar2 = *(ushort *)(*param_2 + lVar7);
          uVar8 = (uint)uVar2;
          if (uVar1 != uVar2) {
            if ((uVar2 | uVar1) < 0x80) {
              uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_145dc97cb;
            }
            iVar4 = uVar3 - uVar8;
            goto LAB_145dc97f8;
          }
          if (uVar1 == 0) break;
LAB_145dc97cb:
          lVar7 = lVar7 + 2;
        }
        iVar4 = 0;
        goto LAB_145dc97f8;
      }
      param_2 = (longlong *)CONCAT71(uVar6,1);
    }
    else {
LAB_145dc9852:
      iVar4 = iVar4 + iVar5 + -1;
LAB_145dc97f8:
      param_2 = (longlong *)CONCAT71((int7)((ulonglong)param_2 >> 8),iVar4 == 0);
    }
    if (local_38 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_145dc9815:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)param_2 & 0xffffffff;
}



// FUNCTION 145dc986a FUN_145dc986a body=89 status=ok
// SIG undefined FUN_145dc986a(void)

undefined8 * FUN_145dc986a(undefined8 *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_140da6ea8();
  *param_1 = &PTR_FUN_14a16b060;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_145dc98c4(local_18,param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dc98c4 FUN_145dc98c4 body=239 status=ok
// SIG undefined FUN_145dc98c4(void)

undefined8 FUN_145dc98c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_149e020b0;
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
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14a179540;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_145ea7fe8;
  FUN_1448b6402(&DAT_14c872cf8,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dc99c0 FUN_145dc99c0 body=165 status=ok
// SIG undefined FUN_145dc99c0(void)

undefined8 * FUN_145dc99c0(undefined8 *param_1)

{
  FUN_1459a40ac();
  *param_1 = &PTR_FUN_14a651190;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb200) {
    FUN_144b3d300(&DAT_14caeb200);
    if (DAT_14caeb200 == -1) {
      FUN_141551f6c();
      atexit((_func_5014 *)&LAB_14356dda1);
      _Init_thread_footer(&DAT_14caeb200);
    }
  }
  param_1[0x1b] = 0x3f800000;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  return param_1;
}



// FUNCTION 145dc9a66 FUN_145dc9a66 body=99 status=ok
// SIG undefined FUN_145dc9a66(void)

undefined * FUN_145dc9a66(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae7048) {
    FUN_144b3d300(&DAT_14cae7048);
    if (DAT_14cae7048 == -1) {
      FUN_145dc9aca();
      atexit((_func_5014 *)&LAB_143540bfc);
      _Init_thread_footer(&DAT_14cae7048);
    }
  }
  return &DAT_14cae6f80;
}



// FUNCTION 145dc9aca FUN_145dc9aca body=221 status=ok
// SIG undefined FUN_145dc9aca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dc9aca(void)

{
  _DAT_14cae6f80 = &PTR_LAB_14a9738e0;
  _DAT_14cae6f88 = &PTR_LAB_149e668b0;
  _DAT_14cae6f90 = 0;
  FUN_1405bceb4(&DAT_14cae6f88);
  _DAT_14cae6f80 = &PTR_FUN_14a973880;
  _DAT_14cae6f88 = &PTR_FUN_14a9738c0;
  _DAT_14cae6fb8 = 0;
  _DAT_14cae6fc0 = 0;
  _DAT_14cae6f98 = 0;
  uRam000000014cae6fa0 = 0;
  _DAT_14cae6fc4 = 0xffffffff00000080;
  _DAT_14cae6fcc = 0;
  _DAT_14cae6fd8 = 0;
  _DAT_14cae6fe0 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cae6fe8);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cae6fe8,4000);
  _DAT_14cae7010 = 0;
  uRam000000014cae7018 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cae7020);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cae7020,4000);
  return;
}



// FUNCTION 145dc9bb2 FUN_145dc9bb2 body=146 status=ok
// SIG undefined FUN_145dc9bb2(void)

undefined8 * FUN_145dc9bb2(undefined8 *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140edf546();
  *param_1 = &PTR_FUN_14a9eb690;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_145dc9c46(param_1 + 0xe,0x100);
  *(byte *)(param_1 + 0x412) = *(byte *)(param_1 + 0x412) & 0xf8;
  FUN_1446ddc76(&local_20,"DataStream",1);
  param_1[8] = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dc9c46 FUN_145dc9c46 body=704 status=ok
// SIG undefined FUN_145dc9c46(void)

void FUN_145dc9c46(uint *param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  void *local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = param_2 + -1 + (ulonglong)(param_2 == 0);
  if (uVar3 == 0) {
    bVar1 = 0;
  }
  else {
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    bVar1 = (byte)lVar11 ^ 0x3f;
  }
  uVar6 = 1L << (-bVar1 & 0x3f);
  uVar8 = param_1[6];
  if (uVar6 == (longlong)(int)uVar8) goto LAB_145dc9e6c;
  uVar4 = *param_1;
  uVar10 = param_1[1];
  uVar7 = uVar4 - uVar10;
  if (uVar6 < uVar7) goto LAB_145dc9e6c;
  uVar5 = (uint)uVar6;
  if ((int)uVar8 < 1) {
    param_1[2] = uVar5 - 1;
    param_1[6] = uVar8 + uVar5;
    if (param_1[7] - uVar8 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
    }
    goto LAB_145dc9e6c;
  }
  local_58 = 0;
  uStack_50 = 0;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar6 & 0xffffffff);
  }
  if (uVar3 < 0x80000000) {
    FUN_147bde498(&local_58,uVar6 & 0xffffffff);
    uVar4 = *param_1;
    uVar10 = param_1[1];
    uVar7 = uVar4 - uVar10;
  }
  uVar3 = uStack_50;
  uVar9 = param_1[2] & uVar10;
  uVar8 = param_1[2] & uVar4;
  local_60 = *(void **)(param_1 + 4);
  iVar2 = (uint)uStack_50;
  if (uVar9 < uVar8 || uVar4 == uVar10) {
    local_68 = uStack_50 & 0xffffffff;
    iVar2 = (uint)uStack_50 + uVar7;
    uVar8 = uStack_50._4_4_ - (uint)uStack_50;
    uStack_50._0_4_ = iVar2;
    if (uVar8 < uVar7) {
      FUN_145dc9f24(&local_58,local_68);
    }
    if (uVar4 != uVar10) {
      local_60 = (void *)((longlong)local_60 + (ulonglong)uVar9 * 0x10);
      uVar8 = uVar7;
      goto LAB_145dc9dee;
    }
  }
  else {
    local_68 = CONCAT44(local_68._4_4_,param_1[6]);
    uVar4 = param_1[6] - uVar9;
    lVar11 = (longlong)(int)(uint)uStack_50;
    uStack_50 = CONCAT44(uStack_50._4_4_,(uint)uStack_50 + uVar4);
    if (uStack_50._4_4_ - iVar2 < uVar4) {
      FUN_145dc9f24(&local_58,uVar3 & 0xffffffff);
    }
    if ((uint)local_68 != uVar9) {
      memcpy((void *)(lVar11 * 0x10 + local_58),
             (void *)((ulonglong)uVar9 * 0x10 + (longlong)local_60),(longlong)(int)uVar4 << 4);
    }
    local_68 = uStack_50 & 0xffffffff;
    iVar2 = (uint)uStack_50 + uVar8;
    if (uStack_50._4_4_ - (uint)uStack_50 < uVar8) {
      uStack_50._0_4_ = iVar2;
      FUN_145dc9f24(&local_58,local_68);
    }
    else {
      uStack_50._0_4_ = iVar2;
      if (uVar8 == 0) goto LAB_145dc9e0d;
    }
LAB_145dc9dee:
    memcpy((void *)((longlong)(int)(uint)local_68 * 0x10 + local_58),local_60,
           (longlong)(int)uVar8 << 4);
  }
LAB_145dc9e0d:
  iVar2 = (uint)uStack_50;
  uStack_50 = CONCAT44(uStack_50._4_4_,(uint)uStack_50 + (uVar5 - uVar7));
  if (uStack_50._4_4_ - iVar2 < uVar5 - uVar7) {
    FUN_145dc9f24(&local_58);
  }
  if (param_1 + 4 == (uint *)&local_58) {
    param_1[2] = uVar5 - 1;
    param_1[1] = 0;
    *param_1 = uVar7;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 4) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 4) = local_58;
    param_1[6] = (uint)uStack_50;
    param_1[7] = uStack_50._4_4_;
    param_1[2] = uVar5 - 1;
    param_1[1] = 0;
    *param_1 = uVar7;
  }
LAB_145dc9e6c:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145dc9f24 FUN_145dc9f24 body=132 status=ok
// SIG undefined FUN_145dc9f24(void)

void FUN_145dc9f24(longlong param_1,int param_2)

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



// FUNCTION 145dc9fa8 FUN_145dc9fa8 body=40 status=ok
// SIG undefined FUN_145dc9fa8(void)

undefined8 FUN_145dc9fa8(undefined8 param_1,int param_2)

{
  FUN_145dc9fd0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145dc9fd0 FUN_145dc9fd0 body=228 status=ok
// SIG undefined FUN_145dc9fd0(void)

void FUN_145dc9fd0(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14af027b0;
  param_1[5] = &PTR_FUN_14af02a60;
  param_1[6] = &PTR_FUN_14af02a80;
  param_1[7] = &PTR_FUN_14af02aa0;
  *(undefined4 *)(param_1 + 0x7d) = 0;
  if (param_1[0x7c] != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(param_1 + 0x74);
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x70] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6c] != 0) {
    FUN_1400020a8();
  }
  FUN_141082778(param_1 + 0x28);
  lVar1 = param_1[0x27];
  if (lVar1 != 0) {
    FUN_1482e1868(lVar1);
    FUN_1400020a8(lVar1);
  }
  FUN_145dca0b4(param_1);
  return;
}



// FUNCTION 145dca0b4 FUN_145dca0b4 body=73 status=ok
// SIG undefined FUN_145dca0b4(void)

void FUN_145dca0b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14af13580;
  param_1[5] = &PTR_LAB_14af13830;
  param_1[6] = &PTR_LAB_14af13850;
  param_1[7] = &PTR_LAB_14af13870;
  FUN_1457e5b52(param_1 + 0xc);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145dca0fe FUN_145dca0fe body=209 status=ok
// SIG undefined FUN_145dca0fe(void)

undefined4 FUN_145dca0fe(void)

{
  void *pvVar1;
  undefined4 uVar2;
  void *_Dst;
  ulonglong uVar3;
  undefined1 auStack_98 [32];
  int local_78;
  void *local_68;
  void *pvStack_60;
  void *local_58;
  _SYSTEM_INFO local_48;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  GetSystemInfo(&local_48);
  uVar3 = (ulonglong)local_48.dwNumberOfProcessors;
  local_68 = (void *)0x0;
  pvStack_60 = (void *)0x0;
  local_58 = (void *)0x0;
  if (uVar3 == 0) {
    _Dst = (void *)0x0;
    local_78 = 0;
  }
  else {
    _Dst = (void *)FUN_145dca1d0(uVar3);
    pvVar1 = (void *)((longlong)_Dst + uVar3 * 0x18);
    local_68 = _Dst;
    local_58 = pvVar1;
    memset(_Dst,0,uVar3 * 0x18);
    local_78 = local_48.dwNumberOfProcessors * 0x18;
    pvStack_60 = pvVar1;
  }
  CallNtPowerInformation(0xb,0,0,_Dst);
  uVar2 = *(undefined4 *)((longlong)local_68 + 4);
  FUN_145dca1fe();
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dca1d0 FUN_145dca1d0 body=46 status=ok
// SIG undefined FUN_145dca1d0(void)

void FUN_145dca1d0(ulonglong param_1)

{
  if (param_1 < 0xab) {
    FUN_14001cc68(param_1 * 0x18 + (ulonglong)(param_1 * 0x18 == 0),0x10);
    return;
  }
  FUN_140c1ca1d();
  return;
}



// FUNCTION 145dca1fe FUN_145dca1fe body=84 status=ok
// SIG undefined FUN_145dca1fe(void)

void FUN_145dca1fe(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 145dca254 FUN_145dca254 body=214 status=ok
// SIG undefined FUN_145dca254(void)

undefined8 FUN_145dca254(uint *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [40];
  undefined1 *local_80;
  ulonglong *local_78;
  longlong local_70;
  undefined4 local_68;
  undefined1 local_60 [32];
  undefined1 local_40 [32];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140230a18(local_60,param_1 + 1);
  FUN_140230a18(local_40,(&PTR_DAT_149e1add0)[*param_1]);
  local_78 = &local_20;
  local_80 = local_60;
  FUN_1407adb6e(&local_70);
  FUN_140230a2e(param_2,L"{0} ({1})",&local_70);
  FUN_1407adb3e(local_70,local_68);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  lVar1 = 0x40;
  do {
    if (*(longlong *)((longlong)&local_70 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x20;
  } while (lVar1 != 0);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dca32c FUN_145dca32c body=226 status=ok
// SIG undefined FUN_145dca32c(void)

longlong * FUN_145dca32c(longlong *param_1)

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
  pcVar13 = FUN_1462db068;
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



// FUNCTION 145dca414 FUN_145dca414 body=138 status=ok
// SIG undefined FUN_145dca414(void)

undefined1 * FUN_145dca414(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1411f35ea();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x143;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145dca410;
}



// FUNCTION 145dca49e FUN_145dca49e body=144 status=ok
// SIG undefined FUN_145dca49e(void)

code * FUN_145dca49e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1413d6116();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"InstanceCullingDrawParams";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FInstanceCullingDrawParams";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x3000000145;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_146039cc8;
}



// FUNCTION 145dca52e FUN_145dca52e body=226 status=ok
// SIG undefined FUN_145dca52e(void)

longlong * FUN_145dca52e(longlong *param_1)

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
  pcVar13 = FUN_1462ec1e6;
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



// FUNCTION 145dca616 FUN_145dca616 body=138 status=ok
// SIG undefined FUN_145dca616(void)

undefined1 * FUN_145dca616(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a8b47e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar4) = &DAT_14a1fbb18;
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FPixelShaderUtils::FRasterizeToRectsVS::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x73;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145dca612;
}



// FUNCTION 145dca6a0 FUN_145dca6a0 body=144 status=ok
// SIG undefined FUN_145dca6a0(void)

code * FUN_145dca6a0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14156ae1e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar4) = &DAT_14a1fbb1e;
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FCopyCardCaptureLightingToAtlasPS::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x3000000074;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145dca616;
}



// FUNCTION 145dca730 FUN_145dca730 body=226 status=ok
// SIG undefined FUN_145dca730(void)

longlong * FUN_145dca730(longlong *param_1)

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
  pcVar13 = FUN_1462ec422;
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



// FUNCTION 145dca818 FUN_145dca818 body=138 status=ok
// SIG undefined FUN_145dca818(void)

undefined1 * FUN_145dca818(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1411f35ea();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 299;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145dca814;
}



// FUNCTION 145dca8a2 FUN_145dca8a2 body=144 status=ok
// SIG undefined FUN_145dca8a2(void)

code * FUN_145dca8a2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1413d6116();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"InstanceCullingDrawParams";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FInstanceCullingDrawParams";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x300000012d;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145ffeb2a;
}



// FUNCTION 145dca932 FUN_145dca932 body=226 status=ok
// SIG undefined FUN_145dca932(void)

longlong * FUN_145dca932(longlong *param_1)

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
  pcVar13 = FUN_14631890a;
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



// FUNCTION 145dcaa1a FUN_145dcaa1a body=138 status=ok
// SIG undefined FUN_145dcaa1a(void)

undefined1 * FUN_145dcaa1a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1447e4f80();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x8a;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145dcaa16;
}



// FUNCTION 145dcaaa4 FUN_145dcaaa4 body=144 status=ok
// SIG undefined FUN_145dcaaa4(void)

code * FUN_145dcaaa4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1413d6116();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"InstanceCullingDrawParams";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FInstanceCullingDrawParams";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x200000008c;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_146318992;
}



// FUNCTION 145dcab3e FUN_145dcab3e body=119 status=ok
// SIG undefined FUN_145dcab3e(void)

void FUN_145dcab3e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b633e40;
  plVar3 = (longlong *)param_1[0x33];
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
  plVar3 = (longlong *)param_1[0x2f];
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
  FUN_145a38fa8(param_1);
  return;
}



// FUNCTION 145dcabc0 FUN_145dcabc0 body=119 status=ok
// SIG undefined FUN_145dcabc0(void)

void FUN_145dcabc0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b63f140;
  plVar3 = (longlong *)param_1[0x33];
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
  plVar3 = (longlong *)param_1[0x31];
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
  FUN_145a38fa8(param_1);
  return;
}



// FUNCTION 145dcac42 FUN_145dcac42 body=119 status=ok
// SIG undefined FUN_145dcac42(void)

void FUN_145dcac42(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b63f1f0;
  plVar3 = (longlong *)param_1[0x33];
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
  plVar3 = (longlong *)param_1[0x31];
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
  FUN_145a38fa8(param_1);
  return;
}



// FUNCTION 145dcacc0 FUN_145dcacc0 body=123 status=ok
// SIG undefined FUN_145dcacc0(void)

undefined8 * FUN_145dcacc0(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2f8);
  memset(_Dst,0,0x2f8);
  FUN_140e8cfb8(_Dst);
  *_Dst = &PTR_FUN_14b9d0770;
  _Dst[0x56] = 0;
  _Dst[0x57] = 0;
  *(undefined4 *)(_Dst + 0x58) = 0;
  *(undefined2 *)((longlong)_Dst + 0x2c4) = 0x101;
  *(undefined1 *)((longlong)_Dst + 0x2c6) = 1;
  _Dst[0x59] = 0;
  _Dst[0x5a] = 0;
  _Dst[0x5b] = 0;
  _Dst[0x5c] = 0;
  _Dst[0x5d] = 0;
  _Dst[0x5e] = 0;
  return _Dst;
}



// FUNCTION 145dcad3c FUN_145dcad3c body=40 status=ok
// SIG undefined FUN_145dcad3c(void)

undefined8 FUN_145dcad3c(undefined8 param_1,int param_2)

{
  FUN_145dcad64();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145dcad64 FUN_145dcad64 body=72 status=ok
// SIG undefined FUN_145dcad64(void)

void FUN_145dcad64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bee28c0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  if (param_1[0x7b] != 0) {
    FUN_1400020a8();
  }
  FUN_145dcadac(param_1 + 0x73);
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145dcadac FUN_145dcadac body=53 status=ok
// SIG undefined FUN_145dcadac(void)

void FUN_145dcadac(longlong *param_1)

{
  FUN_145dcade2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145dcade2 FUN_145dcade2 body=346 status=ok
// SIG undefined FUN_145dcade2(void)

void FUN_145dcade2(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 0x20 + (longlong)iStack_4c * 0x38) != 0) {
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



// FUNCTION 145dcaf3e FUN_145dcaf3e body=264 status=ok
// SIG undefined FUN_145dcaf3e(void)

void FUN_145dcaf3e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar7 = DAT_14caca278;
  if (DAT_14caca280 == 0) {
    plVar7 = (longlong *)0x0;
  }
  (**(code **)(*plVar7 + 0x58))(plVar7,param_1);
  FUN_145dcb048(param_1 + 0x390);
  lVar5 = FUN_1447210f0(param_1);
  if ((lVar5 != 0) && ((*(byte *)(lVar5 + 0x155) & 0x20) == 0)) {
    uVar6 = FUN_1447210f0(param_1);
    FUN_1404d1e78(&local_28,uVar6);
    if ((local_28 != 0) && ((local_20 != (longlong *)0x0 && (0 < (int)local_20[1])))) {
      iVar4 = (int)local_20[1];
      do {
        if (iVar4 == 0) {
          plVar7 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_20[1];
        bVar8 = iVar4 == iVar3;
        if (bVar8) {
          *(int *)(local_20 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar7 = local_20;
      } while (!bVar8);
      lVar5 = 0;
      if (plVar7 != (longlong *)0x0) {
        lVar5 = local_28;
      }
      FUN_1486076ca(lVar5,param_1);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar7 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_20 + 0x10))();
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145dcb048 FUN_145dcb048 body=97 status=ok
// SIG undefined FUN_145dcb048(void)

void FUN_145dcb048(undefined8 param_1)

{
  undefined1 auStack_58 [40];
  undefined1 local_30 [16];
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140d3b348(local_30,param_1);
  local_20 = local_30;
  FUN_145dcb0aa();
  FUN_14571d118(&DAT_14cade118,param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dcb0aa FUN_145dcb0aa body=235 status=ok
// SIG undefined FUN_145dcb0aa(void)

void FUN_145dcb0aa(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  iVar4 = DAT_14cade138;
  lVar3 = DAT_14cade130;
  lVar7 = (longlong)DAT_14cade138;
  iVar14 = DAT_14cade138;
  if (lVar7 != 0) {
    lVar1 = DAT_14cade130 + 0x18;
    iVar14 = 0;
    bVar6 = *(longlong *)(DAT_14cade130 + 8) == *(longlong *)(*param_1 + 8);
    iVar11 = 0;
    do {
      lVar10 = (longlong)iVar11;
      iVar8 = iVar11 + 1;
      if (iVar11 + 1 < iVar4) {
        iVar8 = iVar4;
      }
      lVar5 = lVar10 * 0x10;
      plVar9 = (longlong *)(lVar1 + lVar5);
      iVar13 = iVar11;
      do {
        lVar10 = lVar10 + 1;
        iVar12 = iVar8;
        if (lVar7 <= lVar10) break;
        lVar2 = *plVar9;
        iVar13 = iVar13 + 1;
        plVar9 = plVar9 + 2;
        iVar12 = iVar13;
      } while (bVar6 == (lVar2 == *(longlong *)(*param_1 + 8)));
      if (bVar6 == false) {
        if (iVar14 != iVar11) {
          memmove((void *)((longlong)iVar14 * 0x10 + lVar3),(void *)(lVar5 + lVar3),
                  (longlong)(iVar12 - iVar11) << 4);
        }
        iVar14 = iVar14 + (iVar12 - iVar11);
      }
      bVar6 = (bool)(bVar6 ^ 1);
      iVar11 = iVar12;
    } while (lVar10 < lVar7);
  }
  DAT_14cade138 = iVar14;
  return;
}



// FUNCTION 145dcb196 FUN_145dcb196 body=90 status=ok
// SIG undefined FUN_145dcb196(void)

undefined8 * FUN_145dcb196(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a59f650;
  param_1[5] = &PTR_LAB_14a59fb00;
  param_1[0x2d] = &PTR_LAB_14a59fb40;
  FUN_141552110(param_1 + 0x5a);
  FUN_140cdcea6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145dcb1f0 FUN_145dcb1f0 body=50 status=ok
// SIG undefined FUN_145dcb1f0(void)

void FUN_145dcb1f0(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14cacf290;
  if (DAT_14cacf290 != 0) {
    FUN_141552162(DAT_14cacf290);
    FUN_1400020a8(lVar1);
  }
  DAT_14cacf290 = 0;
  return;
}



// FUNCTION 145dcb222 FUN_145dcb222 body=70 status=ok
// SIG undefined FUN_145dcb222(void)

void FUN_145dcb222(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145dcb268(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a894440;
  puVar1[5] = &PTR_FUN_14a8946f0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  *(byte *)(puVar1 + 0x18) = *(byte *)(puVar1 + 0x18) & 0xfe;
  return;
}



// FUNCTION 145dcb268 FUN_145dcb268 body=101 status=ok
// SIG undefined FUN_145dcb268(void)

undefined8 * FUN_145dcb268(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a8a2170;
  param_1[5] = &PTR_FUN_14a8a2420;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 2;
  return param_1;
}



// FUNCTION 145dcb2ce FUN_145dcb2ce body=92 status=ok
// SIG undefined FUN_145dcb2ce(void)

void FUN_145dcb2ce(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  undefined1 *local_28;
  undefined4 local_20;
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a63f30();
  local_28 = &LAB_147d8ffbe;
  local_20 = 0;
  FUN_145dcb32c(local_18,param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dcb32c FUN_145dcb32c body=248 status=ok
// SIG undefined FUN_145dcb32c(void)

undefined8 FUN_145dcb32c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_149e020b0;
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
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14aaf9380;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(&DAT_14cb05a48,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dcb426 FUN_145dcb426 body=32 status=ok
// SIG undefined FUN_145dcb426(void)

void FUN_145dcb426(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1408c3fb8();
  if (lVar1 != 0) {
    FUN_1415521dc(lVar1);
    return;
  }
  return;
}



// FUNCTION 145dcb452 FUN_145dcb452 body=160 status=ok
// SIG undefined FUN_145dcb452(void)

undefined8 * FUN_145dcb452(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b7224f0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0x41200000;
  FUN_144a6ccf8(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  FUN_1400e6e60(param_1 + 0x1e);
  *(undefined1 *)(param_1 + 0x164) = 0;
  return param_1;
}



// FUNCTION 145dcb4f2 FUN_145dcb4f2 body=92 status=ok
// SIG undefined FUN_145dcb4f2(void)

void FUN_145dcb4f2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_145bd62c2();
    *(undefined8 *)(param_1 + 0x30) = 0;
    plVar3 = *(longlong **)(param_1 + 0x38);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x38) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000145dcb542. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 145dcb54e FUN_145dcb54e body=9 status=ok
// SIG undefined FUN_145dcb54e(void)

void FUN_145dcb54e(longlong param_1)

{
  FUN_145dcb558(param_1 + 0x10);
  return;
}



// FUNCTION 145dcb558 FUN_145dcb558 body=241 status=ok
// SIG undefined FUN_145dcb558(void)

void FUN_145dcb558(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined4 *)(param_1 + 0x170) = 0;
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  FUN_141475320(param_1 + 0xd8);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  FUN_141475320(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x28);
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145dcb645. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145dcb652 FUN_145dcb652 body=162 status=ok
// SIG undefined FUN_145dcb652(void)

undefined8 * FUN_145dcb652(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_14007ca06();
  FUN_140da6ea8(param_1,uVar1);
  *param_1 = &PTR_FUN_14bccf400;
  FUN_1446f470e(&local_20,L"Plugins",1);
  param_1[5] = local_20;
  FUN_1446f470e(&local_20,L"Geometry Cache",1);
  param_1[6] = local_20;
  param_1[7] = 0x4580000040800000;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dcb6f6 FUN_145dcb6f6 body=68 status=ok
// SIG undefined FUN_145dcb6f6(void)

void FUN_145dcb6f6(longlong *param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x180))();
  lVar2 = FUN_141552268(uVar1,0);
  if (lVar2 != 0) {
    FUN_145dcb73a(lVar2,param_4,*param_3 != 0);
    return;
  }
  return;
}



// FUNCTION 145dcb73a FUN_145dcb73a body=897 status=ok
// SIG undefined FUN_145dcb73a(void)

void FUN_145dcb73a(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_138 [40];
  void *local_110;
  void *local_108;
  int local_100;
  undefined4 local_fc;
  undefined1 local_f8 [16];
  longlong local_e8;
  longlong *local_e0;
  undefined1 local_d8 [32];
  longlong local_b8;
  longlong *local_b0;
  void *local_a8;
  int local_a0;
  byte *local_98;
  longlong *local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_88 = 0x10100;
  local_84 = 0xffff;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_68 = 0xf;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  plVar3 = (longlong *)(param_1 + 0x98);
  FUN_145dcbabc(*(undefined8 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0xa0));
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(int *)(param_1 + 0xa4) != 0) {
    FUN_1487b8766(plVar3);
  }
  puVar7 = (undefined8 *)FUN_144a06846(param_2,&DAT_14cb70198);
  local_98 = (byte *)*puVar7;
  local_90 = (longlong *)puVar7[1];
  if (local_90 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_90 + 1) = (int)local_90[1] + 1;
    UNLOCK();
  }
  if (((local_98 != (byte *)0x0) && ((*local_98 & 3) != 0)) &&
     (cVar6 = FUN_144a79b3c(&local_98), cVar6 != '\0')) {
    plVar8 = (longlong *)FUN_1407cbaec(&local_98);
    if ((longlong)(int)plVar8[2] != 0) {
      lVar10 = *plVar8;
      lVar12 = (longlong)(int)plVar8[2] << 4;
      do {
        uVar9 = FUN_144a06846(lVar10,&DAT_14cb701c0);
        uVar9 = FUN_144a7cdd6(uVar9,0);
        FUN_1400b22c2(&local_a8,uVar9);
        FUN_1487b2ce8(&local_b8,&local_a8,&local_88);
        lVar5 = local_b8;
        if (local_b8 != 0) {
          local_108 = (void *)0x0;
          local_100 = local_a0;
          lVar11 = (longlong)local_a0;
          local_110 = local_a8;
          if (lVar11 == 0) {
            local_fc = 0;
          }
          else {
            FUN_1446dd670(&local_108,local_a0,0);
            memcpy(local_108,local_110,lVar11 * 2);
          }
          FUN_1459b1bea(local_f8,&local_108,&local_b8);
          plVar8 = local_e0;
          if (local_b0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
            UNLOCK();
          }
          local_e8 = lVar5;
          local_e0 = local_b0;
          if (plVar8 != (longlong *)0x0) {
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
          }
          uVar9 = FUN_144a06846(lVar10,&DAT_14cb701e8);
          FUN_1446dcc2e(local_d8,uVar9);
          iVar4 = *(int *)(param_1 + 0xa0);
          *(uint *)(param_1 + 0xa0) = iVar4 + 1U;
          if (*(uint *)(param_1 + 0xa4) < iVar4 + 1U) {
            FUN_1487b86e0(plVar3,iVar4);
          }
          FUN_1487b863c((longlong)iVar4 * 0x40 + *plVar3,local_f8);
          FUN_1459b1c7c(local_f8);
        }
        plVar8 = local_b0;
        if (local_b0 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_b0 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_b0)(local_b0);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
        if (local_a8 != (void *)0x0) {
          FUN_1400020a8();
        }
        lVar10 = lVar10 + 0x10;
        lVar12 = lVar12 + -0x10;
      } while (lVar12 != 0);
    }
  }
  plVar3 = local_90;
  *(undefined1 *)(param_1 + 0x218) = 1;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_90 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_14151bfc4(&local_88);
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145dcbabc FUN_145dcbabc body=40 status=ok
// SIG undefined FUN_145dcbabc(void)

void FUN_145dcbabc(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1459b1c7c(param_1);
    param_1 = param_1 + 0x40;
  }
  return;
}



// FUNCTION 145dcbae4 FUN_145dcbae4 body=186 status=ok
// SIG undefined FUN_145dcbae4(void)

undefined8 * FUN_145dcbae4(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 != 0) {
    lVar1 = FUN_144a2f878();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_48 = FUN_148ded5c2;
      local_40 = 0;
      FUN_145dcbcbe(local_38,param_1);
      FUN_145dcbba0(param_3 + 0x6e58,param_2,local_38);
      FUN_1449db362(local_38);
      goto LAB_145dcbb72;
    }
  }
  *param_2 = 0;
LAB_145dcbb72:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dcbba0 FUN_145dcbba0 body=216 status=ok
// SIG undefined FUN_145dcbba0(void)

undefined8 * FUN_145dcbba0(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145dcbcbe FUN_145dcbcbe body=428 status=ok
// SIG undefined FUN_145dcbcbe(void)

longlong * FUN_145dcbcbe(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  plVar6 = *(longlong **)(param_2 + 0x48);
  if (plVar6 == (longlong *)0x0) {
LAB_145dcbd9e:
    *puVar5 = &PTR_LAB_14b99d2a0;
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
    *puVar5 = &PTR_FUN_14b99d230;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145dcbd9e;
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
    uVar7 = *(undefined8 *)(param_2 + 0x40);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b99d2a0;
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
    *puVar5 = &PTR_FUN_14b99d230;
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



// FUNCTION 145dcbe6a FUN_145dcbe6a body=16 status=ok
// SIG undefined FUN_145dcbe6a(void)

void FUN_145dcbe6a(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x1b) = 1;
  FUN_145dcbe7a(*(undefined8 *)(param_1 + 8),param_1);
  return;
}



// FUNCTION 145dcbe7a FUN_145dcbe7a body=187 status=ok
// SIG undefined FUN_145dcbe7a(void)

void FUN_145dcbe7a(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  bool bVar7;
  
  if (*(char *)(param_1 + 1) == '\x02') {
    return;
  }
  lVar4 = (longlong)*(int *)(param_1 + 0x1b0);
  if (0 < lVar4) {
    uVar6 = lVar4 + 1;
    lVar4 = lVar4 << 4;
    bVar5 = 1;
    bVar3 = false;
    bVar7 = false;
    do {
      lVar4 = lVar4 + -0x10;
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x1a8) + lVar4);
      bVar1 = *(byte *)((longlong)plVar2 + 0x1b);
      if (bVar7) {
        bVar7 = true;
        if ((((*(byte *)(param_1 + 2) & 2) != 0) && (bVar1 == 0)) &&
           ((~*(byte *)(param_2 + 3) & 1) == 0 && !bVar3)) {
          if ((char)plVar2[3] == '\x01') {
            (**(code **)(*plVar2 + 0x58))();
            bVar7 = true;
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
        }
      }
      else {
        bVar7 = plVar2 == param_2;
      }
      bVar5 = bVar5 & bVar1;
      uVar6 = uVar6 - 1;
    } while (1 < uVar6);
    if (bVar5 == 0) {
      return;
    }
  }
  FUN_1415522a8(param_1);
  return;
}



// FUNCTION 145dcbf36 FUN_145dcbf36 body=226 status=ok
// SIG undefined FUN_145dcbf36(void)

longlong * FUN_145dcbf36(longlong *param_1)

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
  pcVar13 = FUN_1462d3f94;
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



// FUNCTION 145dcc01e FUN_145dcc01e body=140 status=ok
// SIG undefined FUN_145dcc01e(void)

undefined1 * FUN_145dcc01e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_14156a276();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar3) = &DAT_14a1fbb1e;
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FReflectionEnvironmentSkyLightingPS::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1cc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9e6860;
  return &LAB_145dcc01a;
}



// FUNCTION 145dcc0aa FUN_145dcc0aa body=144 status=ok
// SIG undefined FUN_145dcc0aa(void)

code * FUN_145dcc0aa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145cf4068();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar4) = &DAT_14a1fbb18;
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"Substrate::FSubstrateTilePassVS::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1d0000001cd;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145dcc01e;
}



// FUNCTION 145dcc13a FUN_145dcc13a body=226 status=ok
// SIG undefined FUN_145dcc13a(void)

longlong * FUN_145dcc13a(longlong *param_1)

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
  pcVar13 = FUN_1462e71c6;
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



// FUNCTION 145dcc222 FUN_145dcc222 body=138 status=ok
// SIG undefined FUN_145dcc222(void)

undefined1 * FUN_145dcc222(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1447e4f80();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x85d;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145dcc21e;
}



// FUNCTION 145dcc2ac FUN_145dcc2ac body=146 status=ok
// SIG undefined FUN_145dcc2ac(void)

code * FUN_145dcc2ac(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1403b2516();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CardPass";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FLumenCardPassUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000085e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9fba60;
  return FUN_145dcc222;
}



// FUNCTION 145dcc33e FUN_145dcc33e body=226 status=ok
// SIG undefined FUN_145dcc33e(void)

longlong * FUN_145dcc33e(longlong *param_1)

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
  pcVar13 = FUN_14631f6a8;
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



// FUNCTION 145dcc426 FUN_145dcc426 body=138 status=ok
// SIG undefined FUN_145dcc426(void)

undefined1 * FUN_145dcc426(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a8b47e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar4) = &DAT_14a1fbb18;
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FPixelShaderUtils::FRasterizeToRectsVS::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x239;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145dcc422;
}



// FUNCTION 145dcc4b0 FUN_145dcc4b0 body=146 status=ok
// SIG undefined FUN_145dcc4b0(void)

code * FUN_145dcc4b0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_14155d24c();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar3) = &DAT_14a1fbb1e;
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FClearUAVRectsPS::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000023a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca95f58;
  return FUN_145dcc426;
}



// FUNCTION 145dcc548 FUN_145dcc548 body=138 status=ok
// SIG undefined FUN_145dcc548(void)

void FUN_145dcc548(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined1 auStack_48 [40];
  undefined2 *local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8),&local_20);
  plVar1 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2);
  if (plVar1 != (longlong *)0x0) {
    puVar2 = local_20;
    if (local_18 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    (**(code **)(*plVar1 + 0xd0))(plVar1,puVar2);
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  if (local_20 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145dcc5ec FUN_145dcc5ec body=166 status=ok
// SIG undefined FUN_145dcc5ec(void)

undefined8 * FUN_145dcc5ec(undefined8 *param_1)

{
  FUN_144a0768c();
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a689970;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb058) {
    FUN_144b3d300(&DAT_14caeb058);
    if (DAT_14caeb058 == -1) {
      FUN_1415524ee();
      atexit((_func_5014 *)&LAB_14356dc37);
      _Init_thread_footer(&DAT_14caeb058);
    }
  }
  return param_1;
}



// FUNCTION 145dcc692 FUN_145dcc692 body=37 status=ok
// SIG undefined FUN_145dcc692(void)

void FUN_145dcc692(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x648);
  FUN_145dcc6b8(param_2);
  return;
}



// FUNCTION 145dcc6b8 FUN_145dcc6b8 body=536 status=ok
// SIG undefined FUN_145dcc6b8(void)

undefined8 * FUN_145dcc6b8(undefined8 *param_1)

{
  FUN_145dcc8d0();
  *param_1 = &PTR_FUN_14b7390d0;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *(undefined8 *)((longlong)param_1 + 700) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2c4) = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  *(undefined8 *)((longlong)param_1 + 0x324) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x32c) = 0;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  param_1[0x70] = 0;
  *(undefined4 *)(param_1 + 0x71) = 0;
  param_1[0x6d] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x38c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x394) = 0;
  param_1[0x74] = 0;
  *(undefined4 *)(param_1 + 0x75) = 0;
  param_1[0x7d] = 0;
  *(undefined4 *)(param_1 + 0x7e) = 0;
  param_1[0x7a] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3f4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3fc) = 0;
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0;
  FUN_14052b590(param_1 + 0x83);
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  *(undefined4 *)(param_1 + 0x96) = 0x447a0000;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0x42c80000459c4000;
  *(undefined4 *)(param_1 + 0x9b) = 0x447a0000;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  *(undefined1 *)(param_1 + 0xa9) = 1;
  memset(param_1 + 0xaa,0,0xf0);
  *(undefined4 *)(param_1 + 200) = 0x41200000;
  *(undefined1 *)((longlong)param_1 + 0x644) = 0;
  return param_1;
}



// FUNCTION 145dcc8d0 FUN_145dcc8d0 body=456 status=ok
// SIG undefined FUN_145dcc8d0(void)

undefined8 * FUN_145dcc8d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = &DAT_14b127f00;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_1446f470e(param_1 + 0xd,L"Unlocked",1);
  FUN_1446f470e(param_1 + 0xe,L"Locked",1);
  param_1[0xf] = 0x412000003f800000;
  *(undefined4 *)(param_1 + 0x10) = 0x42c80000;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x4743500042c80000;
  param_1[0x1b] = 0x469c4000461c4000;
  param_1[0x1c] = 0x47c3500047435000;
  *(undefined4 *)(param_1 + 0x1d) = 0x447a0000;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  lVar2 = 0x150;
  do {
    *(undefined1 *)((longlong)param_1 + lVar2 + -0x10) = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0xc);
    *puVar1 = &DAT_100000001;
    puVar1[1] = &DAT_100000001;
    lVar2 = lVar2 + 0x14;
  } while (lVar2 != 0x178);
  *(undefined4 *)(param_1 + 0x2d) = 0x447a0000;
  *(undefined2 *)((longlong)param_1 + 0x16c) = 0x101;
  *(undefined1 *)(param_1 + 0x2e) = 1;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0xc9742400;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x49742400;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = &DAT_3f8000003f800000;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = &DAT_3f8000003f800000;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0x41a00000;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  return param_1;
}



// FUNCTION 145dcca98 FUN_145dcca98 body=809 status=ok
// SIG undefined FUN_145dcca98(void)

void FUN_145dcca98(void)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  HRSRC hResInfo;
  ulonglong uVar7;
  HGLOBAL hResData;
  LPVOID pvVar8;
  wchar_t *pwVar9;
  undefined1 auStack_68 [36];
  undefined1 local_44 [4];
  longlong local_40;
  int local_38;
  wchar_t *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  thunk_FUN_1415534f4();
  lVar4 = FUN_141552594();
  puVar5 = (undefined8 *)FUN_144a72ab6(0x20,lVar4 + 0x228);
  *puVar5 = &PTR_LAB_149e41aa0;
  uVar6 = FUN_144a3f946();
  puVar5[2] = uVar6;
  *puVar5 = &PTR_FUN_149e41a30;
  puVar5[3] = &LAB_1467b3f3c;
  lVar4 = FUN_141552594();
  puVar5 = (undefined8 *)FUN_144a72ab6(0x20,lVar4 + 0x238);
  *puVar5 = &PTR_LAB_149e41aa0;
  uVar6 = FUN_144a3f946();
  puVar5[2] = uVar6;
  *puVar5 = &PTR_FUN_149e41a30;
  puVar5[3] = &LAB_1467b3f60;
  cVar1 = FUN_145dccdc7(6,2,0);
  if (cVar1 != '\0') {
    FUN_1401afab0(&local_40);
    FUN_1412cfe60(&local_30,&local_40,(local_38 == 0) + '(');
    FUN_1401aebe8(&local_30,L"Binaries/ThirdParty/DbgHelp/dbghelp.dll",0x27);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    pwVar9 = local_30;
    if (local_28 == 0) {
      pwVar9 = L"";
    }
    FUN_14155261e(pwVar9);
    if (local_30 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  DAT_14c8c2700 = _set_purecall_handler(FUN_142796f12);
  iVar2 = GetSystemMetrics(0);
  if ((iVar2 < 0x280) || (iVar2 = GetSystemMetrics(1), iVar2 < 0x1e0)) {
    local_30 = L"Error_ResolutionTooLow";
    local_28 = 0x16;
    FUN_1446e940c(&local_40,&local_30);
    local_30 = L"Launch";
    local_28 = 6;
    FUN_1446e940c(local_44,&local_30);
    FUN_140208bae(&local_30,local_44,&local_40,
                  L"The current resolution is too low to run this game.");
    FUN_1427863e0();
    FUN_1427864dc(0,0,&local_30,&DAT_14c873210);
    if (local_30 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_30 + 0x10))();
    }
    FUN_142797bc0(0,0);
  }
  hResInfo = FindResourceW((HMODULE)0x0,(LPCWSTR)0x3f2,(LPCWSTR)&DAT_0000000a);
  if (hResInfo != (HRSRC)0x0) {
    hResData = LoadResource((HMODULE)0x0,hResInfo);
    if (hResData == (HGLOBAL)0x0) {
      FUN_1468152e8();
    }
    else {
      DVar3 = SizeofResource((HMODULE)0x0,hResInfo);
      pvVar8 = LockResource(hResData);
      if (pvVar8 != (LPVOID)0x0 && 1 < DVar3) {
        FUN_14681a494(pvVar8,DVar3,0);
      }
    }
  }
  uVar7 = FUN_145dcce92();
  if ((uVar7 & 0x10) == 0) {
    local_30 = L"Error_CPUNotSupported";
    local_28 = 0x15;
    FUN_1446e940c(&local_40,&local_30);
    local_30 = L"Launch";
    local_28 = 6;
    FUN_1446e940c(local_44,&local_30);
    FUN_140208bae(&local_30,local_44,&local_40,
                  L"This CPU does not support a required feature (SSE4.2).");
    FUN_1427863e0();
    FUN_1427864dc(0,0,&local_30,&DAT_14c873210);
    if (local_30 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_30 + 0x10))();
    }
    FUN_142797bc0(0,0);
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145dccdc2 thunk_FUN_1415534f4 body=5 status=ok
// SIG undefined thunk_FUN_1415534f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_1415534f4(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  uint uVar5;
  char cVar6;
  wchar_t *pwVar7;
  undefined8 uVar8;
  char *pcVar9;
  longlong lVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  undefined2 *puVar15;
  undefined1 auStack_218 [32];
  wchar_t *pwStack_1f8;
  undefined1 *puStack_1f0;
  longlong alStack_1e8 [2];
  undefined1 auStack_1d8 [8];
  longlong *plStack_1d0;
  int iStack_1c8;
  undefined4 uStack_1c4;
  int iStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  int iStack_1b0;
  GUID GStack_1a8;
  wchar_t *pwStack_198;
  undefined8 uStack_190;
  wchar_t *pwStack_188;
  undefined8 uStack_180;
  wchar_t *pwStack_178;
  int iStack_170;
  undefined4 uStack_16c;
  undefined1 uStack_161;
  int iStack_160;
  undefined1 uStack_159;
  wchar_t *pwStack_158;
  undefined8 uStack_150;
  longlong lStack_58;
  wchar_t **ppwStack_50;
  undefined4 uStack_48;
  ulonglong uStack_40;
  
  uStack_40 = DAT_14c707940 ^ (ulonglong)auStack_218;
  DAT_14c83bd00 = FUN_14626b8ba();
  DAT_14c83bd01 = FUN_14626b9ae();
  DAT_14c83bd02 = FUN_145818559();
  DAT_14c83bd03 = FUN_14609384a();
  DAT_14c83bd08 = GetCurrentProcessId();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c868710) && (FUN_144b3d300(&DAT_14c868710), DAT_14c868710 == -1)) {
    FUN_145c3c252(&DAT_14c8686c8);
    DAT_14c868708 = &DAT_14c8686c8;
    atexit(thunk_FUN_14626bbac);
    _Init_thread_footer(&DAT_14c868710);
  }
  FUN_14626b538(DAT_14c868708,&pwStack_158,4);
  pwVar7 = pwStack_158;
  if ((int)uStack_150 == 0) {
    pwVar7 = L"";
  }
  wcsncpy((wchar_t *)&DAT_14c83bd38,pwVar7,0x7f);
  _DAT_14c83be36 = 0;
  if (pwStack_158 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c868710) && (FUN_144b3d300(&DAT_14c868710), DAT_14c868710 == -1)) {
    FUN_145c3c252(&DAT_14c8686c8);
    DAT_14c868708 = &DAT_14c8686c8;
    atexit(thunk_FUN_14626bbac);
    _Init_thread_footer(&DAT_14c868710);
  }
  FUN_14626b538(DAT_14c868708,&pwStack_158,4);
  pwVar7 = pwStack_158;
  if ((int)uStack_150 == 0) {
    pwVar7 = L"";
  }
  wcsncpy((wchar_t *)&DAT_14c83be38,pwVar7,0x7f);
  _DAT_14c83bf36 = 0;
  if (pwStack_158 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  pwVar7 = (wchar_t *)FUN_145c581c1();
  wcsncpy((wchar_t *)&DAT_14c83bf38,pwVar7,0x7f);
  _DAT_14c83c036 = 0;
  FUN_140002266(&pwStack_158,L"UE-%s",&DAT_14c764000);
  pwVar7 = pwStack_158;
  if ((int)uStack_150 == 0) {
    pwVar7 = L"";
  }
  wcsncpy((wchar_t *)&DAT_14c83c038,pwVar7,0x3f);
  _DAT_14c83c0b6 = 0;
  if (pwStack_158 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  wcsncpy((wchar_t *)&DAT_14c83cdb8,L"",0x3f);
  _DAT_14c83ce36 = 0;
  wcsncpy((wchar_t *)&DAT_14c83da38,L"",0x3f);
  _DAT_14c83dab6 = 0;
  wcsncpy((wchar_t *)&DAT_14c83cd38,L"",0x3f);
  _DAT_14c83cdb6 = 0;
  wcsncpy((wchar_t *)&DAT_14c83c238,L"Shipping",0x3f);
  _DAT_14c83c2b6 = 0;
  pwVar7 = (wchar_t *)FUN_145789b0e(1);
  wcsncpy((wchar_t *)&DAT_14c83c1b8,pwVar7,0x3f);
  _DAT_14c83c236 = 0;
  pwVar7 = (wchar_t *)FUN_1401aee94();
  wcsncpy((wchar_t *)&DAT_14c83c338,pwVar7,0xff);
  _DAT_14c83c536 = 0;
  pwVar7 = (wchar_t *)FUN_1401af3ae();
  wcsncpy((wchar_t *)&DAT_14c83c538,pwVar7,0xff);
  _DAT_14c83c736 = 0;
  FUN_14606d686(&pwStack_158);
  pwVar7 = L"";
  if ((int)uStack_150 != 0) {
    pwVar7 = pwStack_158;
  }
  wcsncpy((wchar_t *)&DAT_14c83c738,pwVar7,0x3f);
  _DAT_14c83c7b6 = 0;
  if (pwStack_158 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_145fce9ea(&pwStack_158);
  pwVar7 = pwStack_158;
  if ((int)uStack_150 == 0) {
    pwVar7 = L"";
  }
  wcsncpy((wchar_t *)&DAT_14c83c7b8,pwVar7,0x3f);
  _DAT_14c83c836 = 0;
  if (pwStack_158 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  uVar8 = FUN_145c581c1();
  FUN_140002266(&pwStack_178,&DAT_149e0625e,uVar8);
  pwVar7 = pwStack_178;
  if (iStack_170 == 0) {
    pwVar7 = L"";
  }
  pwStack_1f8 = (wchar_t *)&DAT_14c83c238;
  FUN_140002266(&pwStack_158,L"%s-%s-%s",pwVar7,L"Win64");
  FUN_1448097c4(&pwStack_158,&DAT_149e06124,&DAT_149e060b2,1);
  pwVar7 = pwStack_158;
  pwStack_158 = (wchar_t *)0x0;
  iStack_170 = (int)uStack_150;
  uStack_16c = uStack_150._4_4_;
  uStack_150 = 0;
  if (pwStack_178 == (wchar_t *)0x0) {
    pwStack_178 = pwVar7;
  }
  else {
    FUN_1400020a8();
    pwStack_178 = pwVar7;
    if (pwStack_158 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  pwVar7 = pwStack_178;
  if (iStack_170 == 0) {
    pwVar7 = L"";
  }
  wcsncpy((wchar_t *)&DAT_14c83c838,pwVar7,0x7f);
  _DAT_14c83c936 = 0;
  pwStack_188 = (wchar_t *)0x0;
  uStack_180 = 0;
  pwStack_198 = (wchar_t *)0x0;
  uStack_190 = 0;
  FUN_145c232fc(&pwStack_188);
  pwVar7 = L"";
  if ((int)uStack_180 != 0) {
    pwVar7 = pwStack_188;
  }
  wcsncpy((wchar_t *)&DAT_14c83c938,pwVar7,0x3f);
  _DAT_14c83c9b6 = 0;
  pwVar7 = L"";
  if ((int)uStack_190 != 0) {
    pwVar7 = pwStack_198;
  }
  wcsncpy((wchar_t *)&DAT_14c83c9b8,pwVar7,0x3f);
  _DAT_14c83ca36 = 0;
  _DAT_14c83bd10 = FUN_140e55850();
  if (DAT_14c8c27ac < 1) {
    memset(&pwStack_158,0,0x82);
    GStack_1a8._0_8_ = GStack_1a8._0_8_ & 0xffffffff00000000;
    uStack_1b8 = 0;
    iStack_1c8 = 0;
    FUN_140e55932(&pwStack_158,&GStack_1a8,&uStack_1b8,&iStack_1c8);
    iVar14 = iStack_1c8;
    puStack_1f0 = &uStack_161;
    pwStack_1f8 = (wchar_t *)&iStack_160;
    FUN_1457b80ec(uStack_1b8,iStack_1c8,&uStack_159,alStack_1e8);
    DAT_14c8c27ac = iVar14;
    if ((0 < iStack_160) && (DAT_14c8c27ac = iVar14, iStack_160 <= iVar14)) {
      DAT_14c8c27ac = iStack_160;
    }
  }
  _DAT_14c83bd14 = DAT_14c8c27ac;
  FUN_1400b22c2(&pwStack_158,&DAT_14c8c27ca);
  pwVar7 = pwStack_158;
  if ((int)uStack_150 == 0) {
    pwVar7 = L"";
  }
  wcsncpy((wchar_t *)&DAT_14c83ca38,pwVar7,0x3f);
  _DAT_14c83cab6 = 0;
  if (pwStack_158 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(&pwStack_158,&DAT_14c8c27d7);
  pwVar7 = pwStack_158;
  if ((int)uStack_150 == 0) {
    pwVar7 = L"";
  }
  wcsncpy((wchar_t *)&DAT_14c83cab8,pwVar7,0x3f);
  _DAT_14c83cb36 = 0;
  if (pwStack_158 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_1461924c8(&pwStack_158);
  pwVar7 = pwStack_158;
  if ((int)uStack_150 == 0) {
    pwVar7 = L"";
  }
  wcsncpy((wchar_t *)&DAT_14c83cb38,pwVar7,0x3f);
  _DAT_14c83cbb6 = 0;
  if (pwStack_158 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  pwVar7 = (wchar_t *)FUN_1461681e2(1);
  wcsncpy((wchar_t *)&DAT_14c83cbb8,pwVar7,0x3f);
  _DAT_14c83cc36 = 0;
  FUN_14626e212(&pwStack_158);
  pwVar7 = pwStack_158;
  if ((int)uStack_150 == 0) {
    pwVar7 = L"";
  }
  wcsncpy((wchar_t *)&DAT_14c83cc38,pwVar7,0x3f);
  _DAT_14c83ccb6 = 0;
  if (pwStack_158 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  lStack_58 = 0;
  uStack_48 = 7;
  pwStack_158 = (wchar_t *)0x64006e00690057;
  uStack_150._0_2_ = L'o';
  uStack_150._2_2_ = L'w';
  uStack_150._4_2_ = L's';
  uStack_150._6_2_ = L'\0';
  ppwStack_50 = &pwStack_158;
  wcsncpy((wchar_t *)&DAT_14c83dd38,(wchar_t *)&pwStack_158,0x3f);
  _DAT_14c83ddb6 = 0;
  if (lStack_58 != 0) {
    FUN_1400020a8();
  }
  lStack_58 = 0;
  uStack_48 = 7;
  pwStack_158 = (wchar_t *)0x64006e00690057;
  uStack_150._0_2_ = L'o';
  uStack_150._2_2_ = L'w';
  uStack_150._4_2_ = L's';
  uStack_150._6_2_ = L'\0';
  ppwStack_50 = &pwStack_158;
  wcsncpy((wchar_t *)&DAT_14c83ddb8,(wchar_t *)&pwStack_158,0x3f);
  _DAT_14c83de36 = 0;
  if (lStack_58 != 0) {
    FUN_1400020a8();
  }
  wcsncpy((wchar_t *)&DAT_14c83dcb8,L"Unknown",0x3f);
  _DAT_14c83dd36 = 0;
  if (DAT_14c846b14 == '\x01') {
    DAT_14c83bd04 = FUN_145cbeb2e();
    pwVar7 = (wchar_t *)&DAT_14c85eb20;
    if (DAT_14c846b14 == '\0') {
      pwVar7 = L"";
    }
    wcsncpy((wchar_t *)&DAT_14c83ce38,pwVar7,0x3ff);
    _DAT_14c83d636 = 0;
    pwVar7 = L"Game";
    if (DAT_14c872bf0 != '\0') {
      pwVar7 = L"Commandlet";
    }
    wcsncpy((wchar_t *)&DAT_14c83c0b8,pwVar7,0x3f);
    _DAT_14c83c136 = 0;
    wcsncpy((wchar_t *)&DAT_14c83c138,L"Unset",0x3f);
    _DAT_14c83c1b6 = 0;
    FUN_1460119fe(&pwStack_158);
    pwVar7 = L"";
    if ((int)uStack_150 != 0) {
      pwVar7 = pwStack_158;
    }
    wcsncpy((wchar_t *)&DAT_14c83df44,pwVar7,0xff);
    _DAT_14c83e142 = 0;
    if (pwStack_158 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    puStack_1f0 = (undefined1 *)0x0;
    pwStack_1f8 = (wchar_t *)CONCAT71(pwStack_1f8._1_7_,1);
    FUN_140751ea8(&DAT_14c846b20,L"EPICAPP=",&DAT_14c83c2b8,0x40);
    DAT_14c83bd1c = 0;
    if (DAT_14c846b14 == '\x01') {
      cVar6 = FUN_14054d46e(&DAT_14c846b20,L"fullcrashdumpalways");
      uVar11 = 2;
      if (cVar6 == '\0') {
        cVar6 = FUN_14054d46e(&DAT_14c846b20,L"fullcrashdump");
        uVar11 = 1;
        if (cVar6 == '\0') goto LAB_141553dca;
      }
      DAT_14c83bd1c = uVar11;
    }
LAB_141553dca:
    DAT_14c83df40 = FUN_140b3f358();
    pwVar7 = L"Attended";
    if (DAT_14c83df40 != '\0') {
      pwVar7 = L"Unattended";
    }
    wcsncpy((wchar_t *)&DAT_14c83dcb8,pwVar7,0x3f);
  }
  _DAT_14c83dd36 = 0;
  GStack_1a8.Data1 = 0;
  GStack_1a8.Data2 = 0;
  GStack_1a8.Data3 = 0;
  GStack_1a8.Data4[0] = '\0';
  GStack_1a8.Data4[1] = '\0';
  GStack_1a8.Data4[2] = '\0';
  GStack_1a8.Data4[3] = '\0';
  GStack_1a8.Data4[4] = '\0';
  GStack_1a8.Data4[5] = '\0';
  GStack_1a8.Data4[6] = '\0';
  GStack_1a8.Data4[7] = '\0';
  CoCreateGuid(&GStack_1a8);
  FUN_1400b22c2(&uStack_1b8,"Windows");
  pwStack_158 = (wchar_t *)0x0;
  uStack_150._0_4_ = 0;
  uStack_150._4_4_ = 0;
  FUN_1407c869a(&GStack_1a8,&pwStack_158,0);
  puVar15 = &DAT_149dfb77a;
  pwStack_1f8 = L"";
  if ((int)uStack_150 != 0) {
    pwStack_1f8 = pwStack_158;
  }
  if (iStack_1b0 != 0) {
    puVar15 = (undefined2 *)CONCAT44(uStack_1b4,uStack_1b8);
  }
  FUN_140002266(&iStack_1c8,L"%s%s-%s",L"UECC-",puVar15);
  if (pwStack_158 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (iStack_1c0 == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)CONCAT44(uStack_1c4,iStack_1c8);
  }
  wcsncpy((wchar_t *)&DAT_14c83ccb8,pwVar7,0x3f);
  _DAT_14c83cd36 = 0;
  pcVar9 = (char *)FUN_145c2cbb6();
  if ((pcVar9 != (char *)0x0) && (*pcVar9 == '\x01')) {
    lVar10 = FUN_140d5712e();
    puVar3 = *(undefined8 **)(lVar10 + 0x28);
    plVar4 = *(longlong **)(lVar10 + 0x30);
    if (plVar4 == (longlong *)0x0) {
      _DAT_14c83bd0c = (**(code **)(*(longlong *)*puVar3 + 0x20))();
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      _DAT_14c83bd0c = (**(code **)(*(longlong *)*puVar3 + 0x20))();
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
    pwStack_158 = (wchar_t *)0x0;
    uStack_150 = (ulonglong)uStack_150._4_4_ << 0x20;
    FUN_1446efa72(&pwStack_158,0,2,0x10);
    uStack_150._0_4_ = 2;
    *(undefined ***)pwStack_158 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 1;
    lVar13 = DAT_14c758608 + 1;
    if (lVar12 == 0) {
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 2;
      lVar13 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar13;
    *(longlong *)(pwStack_158 + 8) = lVar12;
    *(undefined ***)pwStack_158 = &PTR_FUN_149e05730;
    FUN_1448b6402(lVar10 + 8,alStack_1e8,&pwStack_158);
    if ((int)uStack_150 != 0) {
      if (pwStack_158 == (wchar_t *)0x0) goto LAB_141554007;
      (*(code *)**(undefined8 **)pwStack_158)(pwStack_158,0);
      FUN_1446efa72(&pwStack_158,0,0,0x10);
      uStack_150._0_4_ = 0;
    }
    if (pwStack_158 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_141554007:
  uVar8 = FUN_1401cb356();
  pwStack_158 = (wchar_t *)0x0;
  uStack_150._0_4_ = 0;
  FUN_1446efa72(&pwStack_158,0,2,0x10);
  uStack_150 = CONCAT44(uStack_150._4_4_,2);
  *(undefined ***)pwStack_158 = &PTR_LAB_149e02020;
  LOCK();
  UNLOCK();
  lVar13 = DAT_14c758608 + 1;
  lVar10 = DAT_14c758608 + 1;
  if (lVar13 == 0) {
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 2;
    lVar10 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar10;
  *(longlong *)(pwStack_158 + 8) = lVar13;
  *(undefined ***)pwStack_158 = &PTR_FUN_149e057a0;
  pwStack_1f8 = (wchar_t *)CONCAT44(pwStack_1f8._4_4_,0x3f800000);
  FUN_1405f67fc(uVar8,auStack_1d8,&pwStack_158,L"FGenericCrashContext_Initialize_Lambda");
  if (plStack_1d0 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plStack_1d0 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plStack_1d0 + 0x10))();
    }
  }
  if ((int)uStack_150 == 0) {
LAB_1415540f5:
    if (pwStack_158 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (pwStack_158 != (wchar_t *)0x0) {
    (*(code *)**(undefined8 **)pwStack_158)(pwStack_158,0);
    FUN_1446efa72(&pwStack_158,0,0,0x10);
    uStack_150 = uStack_150 & 0xffffffff00000000;
    goto LAB_1415540f5;
  }
  pwStack_158 = (wchar_t *)0x0;
  uStack_150 = uStack_150 & 0xffffffff00000000;
  FUN_1446efa72(&pwStack_158,0,2,0x10);
  uStack_150._0_4_ = 2;
  *(undefined ***)pwStack_158 = &PTR_LAB_149e063e0;
  LOCK();
  UNLOCK();
  lVar13 = DAT_14c758608 + 1;
  lVar10 = DAT_14c758608 + 1;
  if (lVar13 == 0) {
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 2;
    lVar10 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar10;
  *(longlong *)(pwStack_158 + 8) = lVar13;
  *(undefined ***)pwStack_158 = &PTR_FUN_149e05810;
  FUN_14134bd86(&DAT_14c86a930,alStack_1e8,&pwStack_158);
  if ((int)uStack_150 == 0) {
LAB_1415541c8:
    if (pwStack_158 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (pwStack_158 != (wchar_t *)0x0) {
    (*(code *)**(undefined8 **)pwStack_158)(pwStack_158,0);
    FUN_1446efa72(&pwStack_158,0,0,0x10);
    uStack_150._0_4_ = 0;
    goto LAB_1415541c8;
  }
  pwStack_158 = (wchar_t *)0x0;
  uStack_150._0_4_ = 0;
  FUN_1446efa72(&pwStack_158,0,2,0x10);
  uStack_150._0_4_ = 2;
  *(undefined ***)pwStack_158 = &PTR_LAB_149e063e0;
  LOCK();
  UNLOCK();
  lVar13 = DAT_14c758608 + 1;
  lVar10 = DAT_14c758608 + 1;
  if (lVar13 == 0) {
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 2;
    lVar10 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar10;
  *(longlong *)(pwStack_158 + 8) = lVar13;
  *(undefined ***)pwStack_158 = &PTR_FUN_149e05880;
  FUN_14134bd86(&DAT_14c86a948,alStack_1e8,&pwStack_158);
  if ((int)uStack_150 == 0) {
LAB_141554294:
    if (pwStack_158 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (pwStack_158 != (wchar_t *)0x0) {
    (*(code *)**(undefined8 **)pwStack_158)(pwStack_158,0);
    FUN_1446efa72(&pwStack_158,0,0,0x10);
    uStack_150._0_4_ = 0;
    goto LAB_141554294;
  }
  pwStack_158 = (wchar_t *)0x0;
  uStack_150._0_4_ = 0;
  FUN_1446efa72(&pwStack_158,0,2,0x10);
  uStack_150._0_4_ = 2;
  *(undefined ***)pwStack_158 = &PTR_LAB_149e063e0;
  LOCK();
  UNLOCK();
  lVar13 = DAT_14c758608 + 1;
  lVar10 = DAT_14c758608 + 1;
  if (lVar13 == 0) {
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 2;
    lVar10 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar10;
  *(longlong *)(pwStack_158 + 8) = lVar13;
  *(undefined ***)pwStack_158 = &PTR_FUN_149e058f0;
  FUN_14134bd86(&DAT_14c86a960,alStack_1e8,&pwStack_158);
  if ((int)uStack_150 == 0) {
LAB_141554360:
    if (pwStack_158 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (pwStack_158 != (wchar_t *)0x0) {
    (*(code *)**(undefined8 **)pwStack_158)(pwStack_158,0);
    FUN_1446efa72(&pwStack_158,0,0,0x10);
    uStack_150._0_4_ = 0;
    goto LAB_141554360;
  }
  pwStack_158 = (wchar_t *)0x0;
  uStack_150._0_4_ = 0;
  FUN_1446efa72(&pwStack_158,0,2,0x10);
  uStack_150._0_4_ = 2;
  *(undefined ***)pwStack_158 = &PTR_LAB_149e059d0;
  LOCK();
  UNLOCK();
  lVar13 = DAT_14c758608 + 1;
  lVar10 = DAT_14c758608 + 1;
  if (lVar13 == 0) {
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 2;
    lVar10 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar10;
  *(longlong *)(pwStack_158 + 8) = lVar13;
  *(undefined ***)pwStack_158 = &PTR_FUN_149e05960;
  FUN_145ffd908(alStack_1e8,&pwStack_158);
  if ((int)uStack_150 == 0) {
LAB_14155442c:
    if (pwStack_158 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (pwStack_158 != (wchar_t *)0x0) {
    (*(code *)**(undefined8 **)pwStack_158)(pwStack_158,0);
    FUN_1446efa72(&pwStack_158,0,0,0x10);
    uStack_150._0_4_ = 0;
    goto LAB_14155442c;
  }
  pwStack_158 = (wchar_t *)0x0;
  uStack_150._0_4_ = 0;
  FUN_1446efa72(&pwStack_158,0,2,0x10);
  uStack_150._0_4_ = 2;
  *(undefined ***)pwStack_158 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar13 = DAT_14c758608 + 1;
  lVar10 = DAT_14c758608 + 1;
  if (lVar13 == 0) {
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 2;
    lVar10 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar10;
  *(longlong *)(pwStack_158 + 8) = lVar13;
  *(undefined ***)pwStack_158 = &PTR_FUN_149e05a40;
  FUN_1448b6402(&DAT_14c872cf8,alStack_1e8,&pwStack_158);
  if ((int)uStack_150 == 0) {
LAB_1415544ff:
    if (pwStack_158 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (pwStack_158 != (wchar_t *)0x0) {
    (*(code *)**(undefined8 **)pwStack_158)(pwStack_158,0);
    FUN_1446efa72(&pwStack_158,0,0,0x10);
    uStack_150._0_4_ = 0;
    goto LAB_1415544ff;
  }
  pwStack_158 = (wchar_t *)0x0;
  uStack_150._0_4_ = 0;
  FUN_1446efa72(&pwStack_158,0,2,0x10);
  uStack_150 = CONCAT44(uStack_150._4_4_,2);
  *(undefined ***)pwStack_158 = &PTR_LAB_149e06450;
  LOCK();
  UNLOCK();
  lVar13 = DAT_14c758608 + 1;
  lVar10 = DAT_14c758608 + 1;
  if (lVar13 == 0) {
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 2;
    lVar10 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar10;
  *(longlong *)(pwStack_158 + 8) = lVar13;
  *(undefined ***)pwStack_158 = &PTR_FUN_149e05ab0;
  iVar14 = 2;
  if (pwStack_158 == (wchar_t *)0x0) {
LAB_141554b0d:
    if (iVar14 == 0) goto LAB_1415546d7;
    if (pwStack_158 != (wchar_t *)0x0) {
      (*(code *)**(undefined8 **)pwStack_158)(pwStack_158,0);
      FUN_1446efa72(&pwStack_158,0,0,0x10);
      goto LAB_1415546c4;
    }
  }
  else {
    cVar6 = (**(code **)(*(longlong *)pwStack_158 + 0x30))();
    uVar5 = DAT_14c86a998;
    if (cVar6 == '\0') {
      iVar14 = (int)uStack_150;
      goto LAB_141554b0d;
    }
    if ((DAT_14c86a9a4 < 1) &&
       (DAT_14c86a9a0 = DAT_14c86a9a0 + -1, DAT_14c86a9a0 <= (int)DAT_14c86a998)) {
      if (0 < (int)DAT_14c86a998) {
        iVar14 = 0;
        do {
          if (((*(int *)(DAT_14c86a990 + 8 + (longlong)iVar14 * 0x10) == 0) ||
              (plVar4 = *(longlong **)(DAT_14c86a990 + (longlong)iVar14 * 0x10),
              plVar4 == (longlong *)0x0)) ||
             (cVar6 = (**(code **)(*plVar4 + 0x28))(), cVar6 != '\0')) {
            FUN_14005b288(&DAT_14c86a990,iVar14);
            FUN_14005b248(&DAT_14c86a990);
          }
          else {
            iVar14 = iVar14 + 1;
          }
        } while (iVar14 < (int)DAT_14c86a998);
      }
      DAT_14c86a9a0 = 2;
      if (2 < (int)(DAT_14c86a998 * 2)) {
        DAT_14c86a9a0 = DAT_14c86a998 * 2;
      }
      if ((DAT_14c86a9a0 < (int)uVar5) && (DAT_14c86a99c != DAT_14c86a998)) {
        FUN_14045812c();
      }
    }
    if (((int)uStack_150 != 0) && (pwStack_158 != (wchar_t *)0x0)) {
      (**(code **)(*(longlong *)pwStack_158 + 0x38))(pwStack_158,alStack_1e8);
    }
    uVar5 = DAT_14c86a998;
    lVar10 = (longlong)(int)DAT_14c86a998;
    DAT_14c86a998 = DAT_14c86a998 + 1;
    if (DAT_14c86a99c < DAT_14c86a998) {
      FUN_1447a71f6(&DAT_14c86a990,uVar5);
    }
    lVar13 = DAT_14c86a990;
    lVar10 = lVar10 * 0x10;
    *(undefined8 *)(DAT_14c86a990 + lVar10) = 0;
    *(undefined4 *)(lVar13 + 8 + lVar10) = 0;
    *(wchar_t **)(lVar13 + lVar10) = pwStack_158;
    pwStack_158 = (wchar_t *)0x0;
    *(int *)(lVar13 + 8 + lVar10) = (int)uStack_150;
LAB_1415546c4:
    uStack_150 = uStack_150 & 0xffffffff00000000;
LAB_1415546d7:
    if (pwStack_158 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar8 = FUN_145c3bb50();
  FUN_1462696a8(&pwStack_158);
  FUN_145c73a1e(uVar8,alStack_1e8,&pwStack_158);
  FUN_1401cb1ee(&pwStack_158);
  pwStack_158 = (wchar_t *)0x0;
  uStack_150 = uStack_150 & 0xffffffff00000000;
  FUN_1446efa72(&pwStack_158,0,2,0x10);
  uStack_150._0_4_ = 2;
  *(undefined ***)pwStack_158 = &PTR_LAB_149e05c00;
  LOCK();
  UNLOCK();
  lVar13 = DAT_14c758608 + 1;
  lVar10 = DAT_14c758608 + 1;
  if (lVar13 == 0) {
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 2;
    lVar10 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar10;
  *(longlong *)(pwStack_158 + 8) = lVar13;
  *(undefined ***)pwStack_158 = &PTR_FUN_149e05b90;
  FUN_145f9be62(&DAT_14c86a9a8,alStack_1e8,&pwStack_158);
  if ((int)uStack_150 != 0) {
    if (pwStack_158 == (wchar_t *)0x0) goto LAB_1415547e3;
    (*(code *)**(undefined8 **)pwStack_158)(pwStack_158,0);
    FUN_1446efa72(&pwStack_158,0,0,0x10);
    uStack_150._0_4_ = 0;
  }
  if (pwStack_158 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_1415547e3:
  lVar10 = FUN_145c0d0d2();
  if (lVar10 != 0) {
    FUN_140056680(&pwStack_158,lVar10);
    FUN_140056680(alStack_1e8,L"BuildURL");
    FUN_14152eab6(alStack_1e8,&pwStack_158);
    if (alStack_1e8[0] != 0) {
      FUN_1400020a8();
    }
    if (pwStack_158 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  lVar10 = FUN_1461ab21c();
  if (lVar10 != 0) {
    FUN_140056680(&pwStack_158,lVar10);
    FUN_140056680(alStack_1e8,L"ExecutingJobURL");
    FUN_14152eab6(alStack_1e8,&pwStack_158);
    if (alStack_1e8[0] != 0) {
      FUN_1400020a8();
    }
    if (pwStack_158 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_14577b282();
  FUN_14626d296();
  DAT_14c83f1dd = 1;
  if (CONCAT44(uStack_1c4,iStack_1c8) != 0) {
    FUN_1400020a8();
  }
  if (CONCAT44(uStack_1b4,uStack_1b8) != 0) {
    FUN_1400020a8();
  }
  if (pwStack_198 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (pwStack_188 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (pwStack_178 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((uStack_40 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dccdc7 FUN_145dccdc7 body=202 status=ok
// SIG undefined FUN_145dccdc7(void)

undefined8 FUN_145dccdc7(uint param_1,uint param_2,WORD param_3)

{
  BOOL BVar1;
  undefined8 uVar2;
  DWORDLONG dwlConditionMask;
  undefined4 extraout_var;
  undefined1 auStack_178 [44];
  _OSVERSIONINFOEXW local_14c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_178;
  memset(&local_14c.dwBuildNumber,0,0x110);
  local_14c.dwOSVersionInfoSize = 0x11c;
  uVar2 = VerSetConditionMask(0,2,3);
  uVar2 = VerSetConditionMask(uVar2,1,3);
  dwlConditionMask = VerSetConditionMask(uVar2,0x20,3);
  local_14c.dwMajorVersion = param_1 & 0xffff;
  local_14c.dwMinorVersion = param_2 & 0xffff;
  local_14c.wServicePackMajor = param_3;
  BVar1 = VerifyVersionInfoW(&local_14c,0x23,dwlConditionMask);
  if ((local_30 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return CONCAT71((int7)(CONCAT44(extraout_var,BVar1) >> 8),BVar1 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dcce92 FUN_145dcce92 body=243 status=ok
// SIG undefined FUN_145dcce92(void)

/* WARNING: Removing unreachable block (ram,0x000145dccf05) */
/* WARNING: Removing unreachable block (ram,0x000145dcceb8) */
/* WARNING: Removing unreachable block (ram,0x000145dccea8) */

uint FUN_145dcce92(void)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint in_XCR0;
  
  if (DAT_14c8c452c == 0) {
    puVar1 = (uint *)cpuid_basic_info(0);
    lVar2 = cpuid_Version_info(1);
    uVar4 = *(uint *)(lVar2 + 0xc);
    uVar6 = uVar4 >> 0x17 & 0x20;
    uVar7 = uVar4 >> 0x14 & 0x200 |
            uVar4 >> 0x10 & 0x10 | uVar4 >> 6 & 8 | *(uint *)(lVar2 + 8) >> 0x18 & 4 | uVar6;
    if (6 < *puVar1) {
      lVar2 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar3 = *(uint *)(lVar2 + 4);
      if ((uVar6 != 0) && ((uVar4 & 0x800000) != 0)) {
        uVar7 = (uVar3 >> 1 & 0x80) + (uVar3 & 8) * 8 | uVar7;
        uVar5 = xinuse(0);
        uVar4 = uVar7 | 0x100;
        if ((~(in_XCR0 & (uint)uVar5) & 6) != 0 || (~uVar3 & 0x128) != 0) {
          uVar4 = uVar7;
        }
        uVar7 = uVar4 + 0x400;
        if ((~uVar3 & 0xc0030000) != 0) {
          uVar7 = uVar4;
        }
        uVar7 = (*(uint *)(lVar2 + 0xc) & 0x40) << 5 | uVar7;
      }
    }
    DAT_14c8c452c = uVar7 | 1;
  }
  return DAT_14c8c452c;
}



// FUNCTION 145dccf86 FUN_145dccf86 body=24 status=ok
// SIG undefined FUN_145dccf86(void)

void FUN_145dccf86(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145dccf9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145dccf9e FUN_145dccf9e body=38 status=ok
// SIG undefined FUN_145dccf9e(void)

undefined8 FUN_145dccf9e(undefined8 param_1,int param_2)

{
  FUN_145dccfc4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145dccfc4 FUN_145dccfc4 body=95 status=ok
// SIG undefined FUN_145dccfc4(void)

void FUN_145dccfc4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b981780;
  param_1[4] = &PTR_FUN_14b981830;
  FUN_145adc914(param_1 + 0xf1);
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (param_1[0xef] != 0) {
    FUN_1400020a8();
  }
  FUN_145dcd024(param_1 + 0xe7);
  FUN_145dcd05a(param_1);
  return;
}



// FUNCTION 145dcd024 FUN_145dcd024 body=53 status=ok
// SIG undefined FUN_145dcd024(void)

void FUN_145dcd024(longlong *param_1)

{
  FUN_145dcd144();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145dcd05a FUN_145dcd05a body=125 status=ok
// SIG undefined FUN_145dcd05a(void)

void FUN_145dcd05a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b981890;
  param_1[4] = &PTR_FUN_14b981940;
  *(undefined4 *)(param_1 + 0xe5) = 0;
  if (param_1[0xe4] != 0) {
    FUN_1400020a8();
  }
  FUN_145dcd0d8(param_1 + 0xdc);
  *(undefined4 *)(param_1 + 0xdb) = 0;
  if (param_1[0xda] != 0) {
    FUN_1400020a8();
  }
  FUN_145dcd10e(param_1 + 0xd2);
  FUN_141554f62(param_1);
  return;
}



// FUNCTION 145dcd0d8 FUN_145dcd0d8 body=53 status=ok
// SIG undefined FUN_145dcd0d8(void)

void FUN_145dcd0d8(longlong *param_1)

{
  FUN_141554be2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145dcd10e FUN_145dcd10e body=53 status=ok
// SIG undefined FUN_145dcd10e(void)

void FUN_145dcd10e(longlong *param_1)

{
  FUN_141554da2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145dcd144 FUN_145dcd144 body=315 status=ok
// SIG undefined FUN_145dcd144(void)

void FUN_145dcd144(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 0x18 + (longlong)iStack_4c * 0x38) != 0) {
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dcd280 FUN_145dcd280 body=16 status=ok
// SIG undefined FUN_145dcd280(void)

char FUN_145dcd280(void)

{
  char cVar1;
  
  cVar1 = FUN_1415552fe();
  return cVar1 * '\x02';
}



// FUNCTION 145dcd290 FUN_145dcd290 body=12 status=ok
// SIG undefined FUN_145dcd290(void)

void FUN_145dcd290(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145dcd299. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 145dcd29c FUN_145dcd29c body=31 status=ok
// SIG undefined FUN_145dcd29c(void)

undefined8 FUN_145dcd29c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145dcd2bc FUN_145dcd2bc body=12 status=ok
// SIG undefined FUN_145dcd2bc(void)

void FUN_145dcd2bc(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145dcd2c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 145dcd2c8 FUN_145dcd2c8 body=31 status=ok
// SIG undefined FUN_145dcd2c8(void)

undefined8 FUN_145dcd2c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145dcd2e8 FUN_145dcd2e8 body=12 status=ok
// SIG undefined FUN_145dcd2e8(void)

void FUN_145dcd2e8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145dcd2f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 145dcd2f4 FUN_145dcd2f4 body=31 status=ok
// SIG undefined FUN_145dcd2f4(void)

undefined8 FUN_145dcd2f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145dcd314 FUN_145dcd314 body=12 status=ok
// SIG undefined FUN_145dcd314(void)

void FUN_145dcd314(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145dcd31d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 145dcd320 FUN_145dcd320 body=31 status=ok
// SIG undefined FUN_145dcd320(void)

undefined8 FUN_145dcd320(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145dcd340 FUN_145dcd340 body=12 status=ok
// SIG undefined FUN_145dcd340(void)

void FUN_145dcd340(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145dcd349. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 145dcd34c FUN_145dcd34c body=31 status=ok
// SIG undefined FUN_145dcd34c(void)

undefined8 FUN_145dcd34c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145dcd376 FUN_145dcd376 body=161 status=ok
// SIG undefined FUN_145dcd376(void)

undefined8 * FUN_145dcd376(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_149e736d0;
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
  return param_1;
}



// FUNCTION 145dcd418 FUN_145dcd418 body=42 status=ok
// SIG undefined FUN_145dcd418(void)

void FUN_145dcd418(longlong param_1)

{
  if (*(char *)(param_1 + 0x660) == '\x01') {
    FUN_145dcd442(param_1 + 0xa0);
    *(undefined1 *)(param_1 + 0x660) = 0;
  }
  return;
}



// FUNCTION 145dcd442 FUN_145dcd442 body=130 status=ok
// SIG undefined FUN_145dcd442(void)

void FUN_145dcd442(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_144a80dc3(*(undefined8 *)(param_1 + 0x590),*(undefined4 *)(param_1 + 0x598));
  if (*(longlong *)(param_1 + 0x590) != 0) {
    FUN_1400020a8();
  }
  FUN_145a5b4a0(param_1 + 0x580);
  FUN_145a5b3aa(param_1 + 0x90);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    plVar2 = (longlong *)(param_1 + 0x70);
    if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
      plVar2 = *(longlong **)(param_1 + 0x60);
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145dcd4c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145dcd4c4 FUN_145dcd4c4 body=62 status=ok
// SIG undefined FUN_145dcd4c4(void)

undefined8 * FUN_145dcd4c4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a628960;
  FUN_145dcd502(param_1 + 5);
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145dcd502 FUN_145dcd502 body=110 status=ok
// SIG undefined FUN_145dcd502(void)

void FUN_145dcd502(undefined8 *param_1)

{
  param_1[0x11] = &DAT_14a176f00;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  param_1[0x11] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0x12);
  *param_1 = &DAT_14a176f00;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 1);
  return;
}



// FUNCTION 145dcd570 FUN_145dcd570 body=170 status=ok
// SIG undefined FUN_145dcd570(void)

void FUN_145dcd570(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_d8 [44];
  undefined4 local_ac;
  undefined1 local_a8 [136];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_20 = 0x1100000000;
  local_ac = 0;
  (**(code **)(*param_1 + 0x30))(param_1,local_a8);
  lVar4 = FUN_14486d71a(local_a8);
  lVar3 = param_1[2];
  if (lVar3 != lVar4) {
    param_1[2] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dcd628 FUN_145dcd628 body=161 status=ok
// SIG undefined FUN_145dcd628(void)

undefined8 * FUN_145dcd628(undefined8 *param_1)

{
  FUN_1406ed334();
  *(byte *)(param_1 + 0x21) = *(byte *)(param_1 + 0x21) & 0xfc;
  *param_1 = &PTR_FUN_14b2175a0;
  param_1[0x1f] = &PTR_FUN_14b217910;
  param_1[0x20] = &PTR_FUN_14b217940;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = DAT_14cb8a5dc;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  FUN_140785382(param_1 + 0x2a,10);
  *(undefined2 *)(param_1 + 0x31) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0;
  *(byte *)(param_1 + 0x21) = *(byte *)(param_1 + 0x21) | 1;
  return param_1;
}



// FUNCTION 145dcd6ca FUN_145dcd6ca body=237 status=ok
// SIG undefined FUN_145dcd6ca(void)

void FUN_145dcd6ca(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  local_20 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x7b0))(param_1,local_19,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dcd824 FUN_145dcd824 body=121 status=ok
// SIG undefined FUN_145dcd824(void)

void FUN_145dcd824(longlong param_1)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_141460aa2(local_50);
  FUN_141460ac0(param_1 + -0x19d8,&DAT_14cbcdd28,local_50);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_145dcd89e(param_1 + 0x20);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dcd89e FUN_145dcd89e body=7 status=ok
// SIG undefined FUN_145dcd89e(void)

void FUN_145dcd89e(undefined8 param_1)

{
  FUN_1447cd2ec(param_1,0);
  return;
}



// FUNCTION 145dcd8a6 FUN_145dcd8a6 body=170 status=ok
// SIG undefined FUN_145dcd8a6(void)

ulonglong FUN_145dcd8a6(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_145dcd934:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145dcd934;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      local_20 = *(undefined4 *)(param_2 + 1);
      local_28 = *param_2;
      (**(code **)(param_1 + 0x28))
                (lVar4 + *(int *)(param_1 + 0x30),&local_28,*(undefined8 *)(param_1 + 8));
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 145dcd952 FUN_145dcd952 body=140 status=ok
// SIG undefined FUN_145dcd952(void)

void FUN_145dcd952(longlong param_1,int *param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  *(undefined1 *)(param_1 + 0x18) = 1;
  if (*param_2 == 0) {
    uVar5 = 1;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x20);
    *(undefined8 *)(lVar3 + 0x598) = 0;
    plVar4 = *(longlong **)(lVar3 + 0x5a0);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(lVar3 + 0x5a0) = 0;
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
    if (param_3 == 2) {
      FUN_1416418a4(param_1,&DAT_14cb97820);
      return;
    }
    uVar5 = 0;
  }
  FUN_145dcd9de(param_1,uVar5);
  return;
}



// FUNCTION 145dcd9de FUN_145dcd9de body=300 status=ok
// SIG undefined FUN_145dcd9de(void)

void FUN_145dcd9de(longlong param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_1447f69b6(*(longlong *)(param_1 + 0x20) + 0x1e0);
    FUN_141521da0(*(undefined8 *)(param_1 + 0x20));
    FUN_141521eca(*(undefined8 *)(param_1 + 0x20),0);
    FUN_145dcdb2c(*(undefined8 *)(param_1 + 0x20));
    if (param_2 != '\0') {
      if ((*(longlong **)(param_1 + 0x20))[0x11f] != 0) {
        lVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x180))();
        if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) {
          lVar2 = FUN_14116599c();
          if (lVar2 != 0) {
            lVar3 = *(longlong *)(param_1 + 0x20);
            if (*(longlong *)(lVar3 + 0x8f8) != 0) {
              FUN_14480f766(lVar2 + 0x70);
              lVar3 = *(longlong *)(param_1 + 0x20);
            }
            *(undefined8 *)(lVar3 + 0x8f8) = 0;
          }
        }
      }
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x180))();
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) {
        lVar2 = FUN_14094c9c2();
        if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x30) != 0)) {
          cVar1 = FUN_145dcdb0a();
          if (cVar1 != '\0') {
            lVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x180))();
            if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) {
              lVar2 = FUN_14094c9c2();
              if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x30) != 0)) {
                FUN_148da76c4(*(longlong *)(lVar2 + 0x30),1);
                return;
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 145dcdb0a FUN_145dcdb0a body=33 status=ok
// SIG undefined FUN_145dcdb0a(void)

ulonglong FUN_145dcdb0a(longlong param_1)

{
  if (*(int *)(param_1 + 0xe8) == *(int *)(param_1 + 0x114)) {
    return (ulonglong)
           CONCAT31((int3)((uint)*(int *)(param_1 + 0x138) >> 8),
                    *(int *)(param_1 + 0x138) != *(int *)(param_1 + 0x164));
  }
  return CONCAT71((uint7)(uint3)((uint)*(int *)(param_1 + 0xe8) >> 8),1);
}



// FUNCTION 145dcdb2c FUN_145dcdb2c body=167 status=ok
// SIG undefined FUN_145dcdb2c(void)

void FUN_145dcdb2c(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1[0xb3] == 0) {
    local_28[0] = 0;
    local_28[1] = 0;
  }
  else {
    FUN_1459da7fa(param_1[0xb3],local_28);
  }
  FUN_1411f311e(param_1 + 0x57,local_28);
  lVar1 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_1414ac30e();
    if (lVar1 != 0) {
      FUN_145dcdbd4(lVar1,local_28);
    }
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dcdbd4 FUN_145dcdbd4 body=445 status=ok
// SIG undefined FUN_145dcdbd4(void)

void FUN_145dcdbd4(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_128 [40];
  undefined1 local_100 [192];
  longlong local_40;
  int local_38;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_145dcdd92(&local_30,param_2,&DAT_14cb999f8);
  FUN_145dcdd92(&local_40,param_2,&DAT_14cb999e8);
  iVar1 = *(int *)(param_1 + 0x140);
  if (iVar1 == local_28) {
    iVar2 = 1;
    if ((1 < iVar1) &&
       (iVar1 = FUN_144a80a00(*(undefined8 *)(param_1 + 0x138),local_30), iVar1 != 0))
    goto LAB_145dcdc4a;
  }
  else if (iVar1 + local_28 == 1) {
    iVar2 = 1;
  }
  else {
LAB_145dcdc4a:
    iVar2 = 0;
    iVar1 = local_28 + -1;
    if (local_28 == 0) {
      iVar1 = iVar2;
    }
    FUN_1402980a2((undefined8 *)(param_1 + 0x138),local_30,iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x118);
  if (iVar1 == local_38) {
    if ((iVar1 < 2) ||
       (iVar1 = FUN_144a80a00(*(undefined8 *)(param_1 + 0x110),local_40), iVar1 == 0))
    goto LAB_145dcdd7e;
LAB_145dcdc8e:
    iVar1 = local_38 + -1;
    if (local_38 == 0) {
      iVar1 = 0;
    }
    FUN_1402980a2((undefined8 *)(param_1 + 0x110),local_40,iVar1);
  }
  else {
    if (iVar1 + local_38 != 1) goto LAB_145dcdc8e;
LAB_145dcdd7e:
    if ((char)iVar2 != '\0') goto LAB_145dcdcdf;
  }
  FUN_145dcdf74(local_100,param_1 + 0xa0);
  FUN_140259cf4();
  FUN_1456aff5c(param_1 + 0xa0,local_100);
  FUN_1456b02e2(local_100);
  FUN_1414ac4aa(local_100);
LAB_145dcdcdf:
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145dcdd92 FUN_145dcdd92 body=197 status=ok
// SIG undefined FUN_145dcdd92(void)

longlong * FUN_145dcdd92(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  if (1 < *(int *)(param_2 + 1)) {
    if (*(int *)(param_3 + 1) == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    else {
      puVar1 = (undefined2 *)*param_3;
    }
    FUN_140002266(local_40,L"%s%s",puVar1,*param_2);
    FUN_145dcde58(&local_30,local_40,0);
    if (&local_30 == param_1) {
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      *param_1 = local_30;
      local_30 = 0;
      param_1[1] = local_28;
      local_28 = 0;
    }
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dcde58 FUN_145dcde58 body=282 status=ok
// SIG undefined FUN_145dcde58(void)

undefined8 * FUN_145dcde58(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  size_t sVar2;
  int iVar3;
  wchar_t *_Str;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar3 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar3 = 0;
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
  }
  local_48 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_40 = 0;
    local_38 = 0;
  }
  else {
    sVar2 = wcslen(_Str);
    FUN_1449b853c(local_c8,_Str,sVar2 & 0xffffffff,1);
  }
  uVar1 = local_40;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_14077541c(param_1,((uint)((ulonglong)(iVar3 + 2) * 0xaaaaaaab >> 0x20) & 0xfffffffe) * 2 + 1,1
               );
  FUN_14155584c(uVar1,iVar3,*param_1,param_3);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145dcdf74 FUN_145dcdf74 body=840 status=ok
// SIG undefined FUN_145dcdf74(void)

undefined8 * FUN_145dcdf74(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
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
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 5);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 5) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar5;
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
  param_1[0xc] = 0;
  iVar1 = *(int *)(param_2 + 0xd);
  pvVar2 = (void *)param_2[0xc];
  *(int *)(param_1 + 0xd) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xc,iVar1,0);
    memcpy((void *)param_1[0xc],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0xe] = 0;
  iVar1 = *(int *)(param_2 + 0xf);
  pvVar2 = (void *)param_2[0xe];
  *(int *)(param_1 + 0xf) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xe,iVar1,0);
    memcpy((void *)param_1[0xe],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = 0;
  iVar1 = *(int *)(param_2 + 0x12);
  pvVar2 = (void *)param_2[0x11];
  *(int *)(param_1 + 0x12) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x11,iVar1,0);
    memcpy((void *)param_1[0x11],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x13] = 0;
  iVar1 = *(int *)(param_2 + 0x14);
  pvVar2 = (void *)param_2[0x13];
  *(int *)(param_1 + 0x14) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x13,iVar1,0);
    memcpy((void *)param_1[0x13],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x15] = 0;
  iVar1 = *(int *)(param_2 + 0x16);
  pvVar2 = (void *)param_2[0x15];
  *(int *)(param_1 + 0x16) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x15,iVar1,0);
    memcpy((void *)param_1[0x15],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
  return param_1;
}



// FUNCTION 145dce2bc FUN_145dce2bc body=63 status=ok
// SIG undefined FUN_145dce2bc(void)

void FUN_145dce2bc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14497e828();
  if ((lVar1 != 0) && (*(char *)(param_1 + 0x178) == '\x03')) {
    lVar1 = FUN_140704886(lVar1);
    if (lVar1 != 0) {
      FUN_145dce2fc(lVar1,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 145dce2fc FUN_145dce2fc body=668 status=ok
// SIG undefined FUN_145dce2fc(void)

void FUN_145dce2fc(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_c8 [36];
  int local_a4;
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 != 0) {
    local_90 = (longlong *)0x0;
    FUN_14485c47a(&local_90);
    FUN_145dce59a(param_1 + 0x1f0,&local_90);
    plVar1 = (longlong *)(param_1 + 0x150);
    lVar2 = param_1 + 0x160;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    iVar9 = 0;
    local_60 = lVar2;
    if (*(int *)(param_1 + 0x178) != 0) {
      FUN_1449c0562(&local_68);
      iVar9 = *(int *)(param_1 + 0x178);
    }
    local_78 = local_58;
    uVar7 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_88 = local_68;
    local_80 = local_60;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar5 = local_78._4_4_;
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar9) || (local_78 = uVar7, local_60 != lVar2)) {
      do {
        local_78 = uVar7;
        lVar10 = (longlong)iVar5 * 0x60 + *local_90;
        cVar4 = FUN_144729dda(lVar10);
        if (cVar4 != '\0') {
          local_98 = 0;
          local_a4 = iVar9;
          FUN_14485c47a(&local_98,param_2);
          iVar9 = local_a4;
          local_68 = local_98;
          iVar5 = FUN_1411b8176(lVar10 + 8,(uint)((ulonglong)local_98 >> 0x20) ^ (uint)local_98);
          if (iVar5 == -1) {
            lVar6 = FUN_14479d2ce(lVar10);
            lVar8 = *(longlong *)(lVar6 + 0x26b0);
            if (lVar8 == 0) {
              uVar7 = FUN_1457512de();
              lVar8 = FUN_14477b664(uVar7);
              *(longlong *)(lVar6 + 0x26b0) = lVar8;
            }
            if (*(longlong *)(lVar6 + 0x26b8) == 0) {
              if ((lVar8 != 0) && (local_a0 = (longlong *)(lVar6 + 0x26a8), *local_a0 != 0)) {
                plVar3 = *(longlong **)(lVar8 + 0xb8);
                if ((plVar3 == (longlong *)0x0) ||
                   (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
                  *(undefined8 *)(lVar6 + 0x26b8) = 0;
                  iVar9 = local_a4;
                }
                else {
                  uVar7 = (**(code **)(*plVar3 + 0x110))(plVar3);
                  lVar8 = FUN_144aff482(uVar7,local_a0);
                  *(longlong *)(lVar6 + 0x26b8) = lVar8;
                  iVar9 = local_a4;
                  if (lVar8 != 0) goto LAB_145dce47c;
                }
              }
            }
            else {
LAB_145dce47c:
              uVar7 = FUN_14479d2ce(lVar10);
              FUN_14126eb88(param_1,uVar7,param_2);
            }
          }
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar5 = local_78._4_4_;
        uVar7 = local_78;
      } while (((local_78._4_4_ != iVar9) || (local_80 != lVar2)) || (local_90 != plVar1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145dce59a FUN_145dce59a body=125 status=ok
// SIG undefined FUN_145dce59a(void)

int FUN_145dce59a(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar3 = *param_1;
    lVar4 = (longlong)(int)param_1[1] << 3;
    iVar2 = 0;
    do {
      cVar1 = FUN_140e27ebc(lVar3,param_2);
      if (cVar1 != '\0') {
        if (iVar2 != 1) {
          return -iVar2;
        }
        break;
      }
      lVar3 = lVar3 + 8;
      iVar2 = iVar2 + -1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_145dce618(param_1,iVar2);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = *param_2;
  return iVar2;
}



// FUNCTION 145dce618 FUN_145dce618 body=132 status=ok
// SIG undefined FUN_145dce618(void)

void FUN_145dce618(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145dce69c FUN_145dce69c body=12 status=ok
// SIG undefined FUN_145dce69c(void)

void FUN_145dce69c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145dce6a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 145dce6a8 FUN_145dce6a8 body=31 status=ok
// SIG undefined FUN_145dce6a8(void)

undefined8 FUN_145dce6a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145dce6d2 FUN_145dce6d2 body=161 status=ok
// SIG undefined FUN_145dce6d2(void)

undefined8 * FUN_145dce6d2(undefined8 *param_1)

{
  FUN_1400ead26();
  *param_1 = &PTR_FUN_14ba80380;
  param_1[5] = &PTR_FUN_14ba80960;
  param_1[6] = &PTR_LAB_14ba809a0;
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  *(undefined8 *)((longlong)param_1 + 0x324) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x32c) = 0;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  return param_1;
}



// FUNCTION 145dce774 FUN_145dce774 body=76 status=ok
// SIG undefined FUN_145dce774(void)

void FUN_145dce774(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bbfffc0;
  FUN_145dce7c0(param_1 + 0x44);
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 145dce7c0 FUN_145dce7c0 body=96 status=ok
// SIG undefined FUN_145dce7c0(void)

void FUN_145dce7c0(longlong *param_1)

{
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 145dce820 FUN_145dce820 body=40 status=ok
// SIG undefined FUN_145dce820(void)

undefined8 FUN_145dce820(undefined8 param_1,int param_2)

{
  FUN_145dce848();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145dce848 FUN_145dce848 body=132 status=ok
// SIG undefined FUN_145dce848(void)

void FUN_145dce848(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd3b9b0;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145dce8cc FUN_145dce8cc body=40 status=ok
// SIG undefined FUN_145dce8cc(void)

undefined8 FUN_145dce8cc(undefined8 param_1,int param_2)

{
  FUN_145dce8f4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145dce8f4 FUN_145dce8f4 body=63 status=ok
// SIG undefined FUN_145dce8f4(void)

void FUN_145dce8f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a61d7d0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_145dce934(param_1 + 6);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145dce934 FUN_145dce934 body=53 status=ok
// SIG undefined FUN_145dce934(void)

void FUN_145dce934(longlong *param_1)

{
  FUN_145dce96a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145dce96a FUN_145dce96a body=360 status=ok
// SIG undefined FUN_145dce96a(void)

void FUN_145dce96a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
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
      lVar2 = *local_68 + (longlong)iStack_4c * 0x38;
      if (*(char *)(*local_68 + 0x2c + (longlong)iStack_4c * 0x38) == '\x01') {
        *(undefined1 *)(lVar2 + 0x2c) = 0;
      }
      if (*(longlong *)(lVar2 + 0x18) != 0) {
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



// FUNCTION 145dcead4 FUN_145dcead4 body=292 status=ok
// SIG undefined FUN_145dcead4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145dcead4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d2600) {
    FUN_144b3d300(&DAT_14c9d2600);
    if (DAT_14c9d2600 == -1) {
      FUN_145dcebf8();
      FUN_145dcecfe();
      FUN_140db5666(&DAT_14c9d2558,0,&DAT_14c9d24f0,L"FHairLUTCS",
                    L"/Engine/Private/HairStrands/HairStrandsLUT.usf",L"MainCS",5,2,FUN_14716e0fc,
                    FUN_14716e09c,&LAB_1462c5f78,&LAB_14716e098,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14c9d4ad0);
      _DAT_14c9d2558 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c3f917);
      _Init_thread_footer(&DAT_14c9d2600);
    }
  }
  return &DAT_14c9d2558;
}



// FUNCTION 145dcebf8 FUN_145dcebf8 body=261 status=ok
// SIG undefined FUN_145dcebf8(void)

void FUN_145dcebf8(void)

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
              0x110) < DAT_14c9d4b50) {
    FUN_144b3d300(&DAT_14c9d4b50);
    if (DAT_14c9d4b50 == -1) {
      FUN_145dcee48(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x26;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d4ad0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c4e312);
      _Init_thread_footer(&DAT_14c9d4b50);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dcecfe FUN_145dcecfe body=205 status=ok
// SIG undefined FUN_145dcecfe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dcecfe(void)

{
  if ((DAT_14c9d2557 & 2) == 0) {
    DAT_14c9d2557 = DAT_14c9d2557 | 2;
    _DAT_14c9d24f8 = L"FHairLUTCS";
    _DAT_14c9d2510 = FUN_146826540;
    _DAT_14c9d2518 = FUN_146825d77;
    _DAT_14c9d2520 = FUN_146825fd6;
    _DAT_14c9d2528 = FUN_1407e02ea;
    _DAT_14c9d2530 = FUN_146826273;
    _DAT_14c9d2508 = FUN_14716e068;
    _DAT_14c9d2548 = 0xffffffff000000e0;
    _DAT_14c9d2550 = 8;
    DAT_14c9d2554 = 0;
    _DAT_14c9d2538 = &LAB_14716e094;
    FUN_145dcedcc();
    FUN_1407e00cc(&DAT_14c9d24f0);
    return;
  }
  return;
}



// FUNCTION 145dcedcc FUN_145dcedcc body=123 status=ok
// SIG undefined FUN_145dcedcc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dcedcc(void)

{
  _DAT_14c9d5208 = L"BASE";
  DAT_14c9d5232 = 4;
  _DAT_14c9d5210 = FUN_140b35ae4();
  _DAT_14c9d5218 = DAT_14c9d2500;
  _DAT_14c9d5220 = &LAB_14682652b;
  DAT_14c9d2500 = &DAT_14c9d5208;
  DAT_14c9d2555 = DAT_14c9d2555 + '\x01';
  _DAT_14c9d5228 = 0x100000000;
  if (*(char *)(_DAT_14c9d5210 + 100) != '\0') {
    DAT_14c9d2556 = DAT_14c9d2556 + '\x01';
  }
  return;
}



// FUNCTION 145dcee48 FUN_145dcee48 body=226 status=ok
// SIG undefined FUN_145dcee48(void)

longlong * FUN_145dcee48(longlong *param_1)

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
  pcVar13 = FUN_1462c9d82;
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



// FUNCTION 145dcef30 FUN_145dcef30 body=132 status=ok
// SIG undefined FUN_145dcef30(void)

undefined1 * FUN_145dcef30(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"AbsorptionCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x27;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145dcef2c;
}



// FUNCTION 145dcefb4 FUN_145dcefb4 body=136 status=ok
// SIG undefined FUN_145dcefb4(void)

code * FUN_145dcefb4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RoughnessCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000028;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dcef30;
}



// FUNCTION 145dcf03c FUN_145dcf03c body=138 status=ok
// SIG undefined FUN_145dcf03c(void)

undefined1 * FUN_145dcf03c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145dcf0c6();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Pass";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FHairStransShadowDepthInjectionParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9d4360;
  return &LAB_145f903a8;
}



// FUNCTION 145dcf0c6 FUN_145dcf0c6 body=261 status=ok
// SIG undefined FUN_145dcf0c6(void)

void FUN_145dcf0c6(void)

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
              0x110) < DAT_14c9d43e0) {
    FUN_144b3d300(&DAT_14c9d43e0);
    if (DAT_14c9d43e0 == -1) {
      FUN_145dcf1cc(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FHairStransShadowDepthInjectionParameters";
      local_38 = 0;
      local_50 = 0x160;
      local_58 = 0x1d;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d4360,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c4d6c3);
      _Init_thread_footer(&DAT_14c9d43e0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dcf1cc FUN_145dcf1cc body=226 status=ok
// SIG undefined FUN_145dcf1cc(void)

longlong * FUN_145dcf1cc(longlong *param_1)

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
  pcVar13 = FUN_1462c7e56;
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



// FUNCTION 145dcf2b0 FUN_145dcf2b0 body=132 status=ok
// SIG undefined FUN_145dcf2b0(void)

undefined1 * FUN_145dcf2b0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutputResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14717467e;
}



// FUNCTION 145dcf334 FUN_145dcf334 body=138 status=ok
// SIG undefined FUN_145dcf334(void)

code * FUN_145dcf334(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DeepShadowViewInfoBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FDeepShadowViewInfo>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000026;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462c7ffe;
}



// FUNCTION 145dcf3be FUN_145dcf3be body=138 status=ok
// SIG undefined FUN_145dcf3be(void)

code * FUN_145dcf3be(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LightDirection";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000021;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471745f4;
}



// FUNCTION 145dcf454 FUN_145dcf454 body=169 status=ok
// SIG undefined FUN_145dcf454(void)

undefined8 * FUN_145dcf454(undefined8 *param_1)

{
  FUN_144a0768c();
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a6a6a10;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caead98) {
    FUN_144b3d300(&DAT_14caead98);
    if (DAT_14caead98 == -1) {
      FUN_1415559a6();
      atexit((_func_5014 *)&LAB_14356d8f2);
      _Init_thread_footer(&DAT_14caead98);
    }
  }
  *(undefined1 **)((longlong)param_1 + 0xb4) = &DAT_3f8000003f800000;
  return param_1;
}



// FUNCTION 145dcf508 FUN_145dcf508 body=169 status=ok
// SIG undefined FUN_145dcf508(void)

undefined8 * FUN_145dcf508(undefined8 *param_1)

{
  FUN_144a0768c();
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a6a6cf0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeae40) {
    FUN_144b3d300(&DAT_14caeae40);
    if (DAT_14caeae40 == -1) {
      FUN_141555a4c();
      atexit((_func_5014 *)&LAB_14356d9b3);
      _Init_thread_footer(&DAT_14caeae40);
    }
  }
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) & 0xfd;
  return param_1;
}



// FUNCTION 145dcf5b2 FUN_145dcf5b2 body=40 status=ok
// SIG undefined FUN_145dcf5b2(void)

undefined8 FUN_145dcf5b2(undefined8 param_1,int param_2)

{
  FUN_145dcf5da();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145dcf5da FUN_145dcf5da body=305 status=ok
// SIG undefined FUN_145dcf5da(void)

void FUN_145dcf5da(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ae4ed50;
  param_1[5] = &PTR_FUN_14ae4f050;
  FUN_144760e21(param_1[0x52],*(undefined4 *)(param_1 + 0x53));
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x4f],*(undefined4 *)(param_1 + 0x50));
  if (param_1[0x4f] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x4e];
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
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x46];
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
  param_1[0x2e] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x42];
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
  FUN_140cdcfea(param_1);
  return;
}



// FUNCTION 145dcf70c FUN_145dcf70c body=473 status=ok
// SIG undefined FUN_145dcf70c(void)

ulonglong FUN_145dcf70c(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 *puVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined8 uStack_a0;
  ulonglong *local_90;
  int local_88;
  longlong local_80;
  int local_78;
  int local_4c;
  undefined1 local_48 [8];
  undefined1 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar3 = FUN_145dcff18(*(undefined8 *)(param_1 + 0x10));
  FUN_145dcf974(&local_80,uVar3);
  FUN_141529202(&local_90);
  local_a8 = 0;
  uStack_a0 = 0;
  if ((longlong)local_88 == 0) {
    uVar4 = 0;
  }
  else {
    puVar1 = local_90 + local_88;
    puVar9 = local_90;
    do {
      uVar2 = uStack_a0;
      uVar4 = *puVar9;
      if (local_78 == local_4c) {
LAB_145dcf8ca:
        puVar7 = (ulonglong *)0x0;
      }
      else {
        uVar5 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        puVar6 = local_40;
        if (local_40 == (undefined1 *)0x0) {
          puVar6 = local_48;
        }
        iVar11 = *(int *)(puVar6 + (ulonglong)(local_38 - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
        if (iVar11 == -1) goto LAB_145dcf8ca;
        do {
          puVar7 = (ulonglong *)(local_80 + (longlong)iVar11 * 0x18);
          if (*puVar7 == uVar4) break;
          iVar11 = (int)puVar7[2];
          puVar7 = (ulonglong *)0x0;
        } while (iVar11 != -1);
      }
      puVar8 = puVar7 + 1;
      if (puVar7 == (ulonglong *)0x0) {
        puVar8 = (ulonglong *)0x0;
      }
      if (((puVar8 != (ulonglong *)0x0) && (*(char *)(uVar4 + 0x200) != '\0')) &&
         ((char)*puVar8 == '\x01')) {
        lVar10 = (longlong)(int)uStack_a0;
        uVar5 = (int)uStack_a0 + 1;
        uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar5);
        if (uStack_a0._4_4_ < uVar5) {
          FUN_14585e824(&local_a8,uVar2 & 0xffffffff);
          uVar4 = *puVar9;
        }
        *(ulonglong *)(local_a8 + lVar10 * 8) = uVar4;
      }
      puVar9 = puVar9 + 1;
    } while (puVar9 != puVar1);
    uVar4 = CONCAT71((int7)((ulonglong)&local_a8 >> 8),0 < (int)uStack_a0);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_90 != (ulonglong *)0x0) {
    FUN_1400020a8();
  }
  local_38 = 0;
  if (local_40 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_145dcf8e6(&local_80);
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 145dcf8e6 FUN_145dcf8e6 body=53 status=ok
// SIG undefined FUN_145dcf8e6(void)

void FUN_145dcf8e6(longlong *param_1)

{
  FUN_145dcf91c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145dcf91c FUN_145dcf91c body=88 status=ok
// SIG undefined FUN_145dcf91c(void)

void FUN_145dcf91c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 145dcf974 FUN_145dcf974 body=235 status=ok
// SIG undefined FUN_145dcf974(void)

undefined8 * FUN_145dcf974(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [47];
  undefined1 local_69;
  longlong local_68;
  int local_60;
  longlong local_58;
  undefined1 *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_141529202(&local_68);
  if (0 < local_60) {
    lVar2 = 0;
    lVar1 = 0;
    do {
      local_69 = (param_2 >> ((uint)lVar1 & 0x1f) & 1) != 0;
      local_58 = local_68 + lVar2;
      local_50 = &local_69;
      FUN_145dcfa60(param_1,local_44,&local_58,0);
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + 8;
    } while (lVar1 < local_60);
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dcfa60 FUN_145dcfa60 body=335 status=ok
// SIG undefined FUN_145dcfa60(void)

undefined4 *
FUN_145dcfa60(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_145dcfc40(param_1,local_50);
  puVar1 = (undefined1 *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_48 = uVar6;
  *(undefined1 *)(local_48 + 1) = *puVar1;
  *(undefined4 *)(local_48 + 2) = 0xffffffff;
  local_54 = local_50[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  local_68 = param_4;
  cVar3 = FUN_145dcfbb0(param_1,uVar4,local_48,&local_54);
  uVar2 = local_54;
  if (cVar3 == '\0') {
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
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_48 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_145dcfd34(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dcfbb0 FUN_145dcfbb0 body=144 status=ok
// SIG undefined FUN_145dcfbb0(void)

void FUN_145dcfbb0(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
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
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar6 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)lVar3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar1;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar2;
          FUN_148d17bb0((int)lVar3,*param_4);
          *param_4 = iVar7;
          uVar5 = 1;
          goto LAB_145dcfc1a;
        }
        iVar7 = (int)plVar6[2];
      } while (iVar7 != -1);
    }
  }
  uVar5 = 0;
LAB_145dcfc1a:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 145dcfc40 FUN_145dcfc40 body=243 status=ok
// SIG undefined FUN_145dcfc40(void)

int * FUN_145dcfc40(longlong *param_1,int *param_2)

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



// FUNCTION 145dcfd34 FUN_145dcfd34 body=483 status=ok
// SIG undefined FUN_145dcfd34(void)

void FUN_145dcfd34(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 145dcff18 FUN_145dcff18 body=270 status=ok
// SIG undefined FUN_145dcff18(void)

uint FUN_145dcff18(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  wchar_t *_Str;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  undefined8 uStack_80;
  longlong local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14101cf30(param_1,&local_70);
  lVar1 = local_70;
  lVar6 = (longlong)local_68;
  if (lVar6 == 0) {
    local_68 = 0;
    uVar3 = 0x7fffffff;
  }
  else {
    lVar5 = 0;
    uVar4 = 0x7fffffff;
    do {
      local_88 = (wchar_t *)0x0;
      uStack_80 = 0;
      cVar2 = FUN_14101cdd4(*(longlong *)(lVar1 + lVar5) + 0x20,&DAT_14cbce9f0,&local_88);
      uVar3 = 0;
      if (cVar2 != '\0') {
        _Str = L"";
        if ((int)uStack_80 != 0) {
          _Str = local_88;
        }
        uVar3 = _wtoi(_Str);
        uVar3 = uVar3 & uVar4;
      }
      if (local_88 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      lVar5 = lVar5 + 0x10;
      uVar4 = uVar3;
    } while (lVar6 * 0x10 != lVar5);
  }
  FUN_14101cee4(local_70,local_68);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 145dd0028 FUN_145dd0028 body=292 status=ok
// SIG undefined FUN_145dd0028(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145dd0028(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca26c68) {
    FUN_144b3d300(&DAT_14ca26c68);
    if (DAT_14ca26c68 == -1) {
      FUN_145dd0296();
      FUN_145dd014c();
      FUN_140db5666(&DAT_14ca26bc0,0,&DAT_14ca26b58,L"FDeviceEncodingOnlyPS",
                    L"/Engine/Private/PostProcessDeviceEncodingOnly.usf",L"MainPS",3,2,FUN_14728aff0
                    ,FUN_14728af90,&LAB_14728af8c,&LAB_14728af88,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca29778);
      _DAT_14ca26bc0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142eb8bac);
      _Init_thread_footer(&DAT_14ca26c68);
    }
  }
  return &DAT_14ca26bc0;
}



// FUNCTION 145dd014c FUN_145dd014c body=205 status=ok
// SIG undefined FUN_145dd014c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dd014c(void)

{
  if ((DAT_14ca26bbf & 2) == 0) {
    DAT_14ca26bbf = DAT_14ca26bbf | 2;
    _DAT_14ca26b60 = L"FDeviceEncodingOnlyPS";
    _DAT_14ca26b78 = FUN_146826540;
    _DAT_14ca26b80 = FUN_146825d77;
    _DAT_14ca26b88 = FUN_146825fd6;
    _DAT_14ca26b90 = FUN_1407e02ea;
    _DAT_14ca26b98 = FUN_146826273;
    _DAT_14ca26b70 = FUN_14728af58;
    _DAT_14ca26bb0 = 0xffffffff000000e0;
    _DAT_14ca26bb8 = 8;
    DAT_14ca26bbc = 0;
    _DAT_14ca26ba0 = &LAB_14728af84;
    FUN_145dd021a();
    FUN_1407e00cc(&DAT_14ca26b58);
    return;
  }
  return;
}



// FUNCTION 145dd021a FUN_145dd021a body=123 status=ok
// SIG undefined FUN_145dd021a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dd021a(void)

{
  _DAT_14ca2c060 = L"BASE";
  DAT_14ca2c08a = 4;
  _DAT_14ca2c068 = FUN_140b35ae4();
  _DAT_14ca2c070 = DAT_14ca26b68;
  _DAT_14ca2c078 = &LAB_14682652b;
  DAT_14ca26b68 = &DAT_14ca2c060;
  DAT_14ca26bbd = DAT_14ca26bbd + '\x01';
  _DAT_14ca2c080 = 0x100000000;
  if (*(char *)(_DAT_14ca2c068 + 100) != '\0') {
    DAT_14ca26bbe = DAT_14ca26bbe + '\x01';
  }
  return;
}



// FUNCTION 145dd0296 FUN_145dd0296 body=261 status=ok
// SIG undefined FUN_145dd0296(void)

void FUN_145dd0296(void)

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
              0x110) < DAT_14ca297f8) {
    FUN_144b3d300(&DAT_14ca297f8);
    if (DAT_14ca297f8 == -1) {
      FUN_145dd039c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x290;
      local_58 = 0x72;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca29778,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142edc0c6);
      _Init_thread_footer(&DAT_14ca297f8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dd039c FUN_145dd039c body=226 status=ok
// SIG undefined FUN_145dd039c(void)

longlong * FUN_145dd039c(longlong *param_1)

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
  pcVar13 = FUN_1462f9cca;
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



// FUNCTION 145dd0484 FUN_145dd0484 body=140 status=ok
// SIG undefined FUN_145dd0484(void)

undefined1 * FUN_145dd0484(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145dd0510();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DeviceEncoding";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDeviceEncodingOnlyParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x73;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca29800;
  return &LAB_145dd0480;
}



// FUNCTION 145dd0510 FUN_145dd0510 body=261 status=ok
// SIG undefined FUN_145dd0510(void)

void FUN_145dd0510(void)

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
              0x110) < DAT_14ca29880) {
    FUN_144b3d300(&DAT_14ca29880);
    if (DAT_14ca29880 == -1) {
      FUN_145dd0616(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FDeviceEncodingOnlyParameters";
      local_38 = 0;
      local_50 = 400;
      local_58 = 0x5e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca29800,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142edc0d2);
      _Init_thread_footer(&DAT_14ca29880);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dd0616 FUN_145dd0616 body=226 status=ok
// SIG undefined FUN_145dd0616(void)

longlong * FUN_145dd0616(longlong *param_1)

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
  pcVar13 = FUN_1462f9d52;
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


