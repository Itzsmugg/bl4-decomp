// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1460e7104 FUN_1460e7104 body=153 status=ok
// SIG undefined FUN_1460e7104(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460e7104(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb72f58) {
    FUN_144b3d300(&DAT_14cb72f58);
    if (DAT_14cb72f58 == -1) {
      DAT_14cb72f28 = 0;
      DAT_14cb72f30 = 0;
      DAT_14cb72f08 = 0;
      _DAT_14cb72f10 = 0;
      _DAT_14cb72f34 = 0xffffffff00000080;
      DAT_14cb72f3c = 0;
      DAT_14cb72f48 = 0;
      DAT_14cb72f50 = 0;
      atexit(FUN_143cc6561);
      _Init_thread_footer(&DAT_14cb72f58);
      return;
    }
  }
  return;
}



// FUNCTION 1460e719e FUN_1460e719e body=338 status=ok
// SIG undefined FUN_1460e719e(void)

undefined4 * FUN_1460e719e(undefined4 *param_1,undefined8 *param_2)

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
  FUN_1460e7384(local_40);
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
  cVar5 = FUN_1460e72f2(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb72f10 - DAT_14cb72f3c;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb72f50)) {
      uVar10 = DAT_14cb72f50 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb72f48;
      if (DAT_14cb72f48 == (undefined *)0x0) {
        puVar7 = &DAT_14cb72f40;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb72f50 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb72f48;
      if (DAT_14cb72f48 == (undefined *)0x0) {
        puVar7 = &DAT_14cb72f40;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb72f50 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb72f50 = iVar9;
      FUN_1460e7492();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460e72f2 FUN_1460e72f2 body=145 status=ok
// SIG undefined FUN_1460e72f2(void)

undefined8 FUN_1460e72f2(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb72f10 - DAT_14cb72f3c != 1) && (DAT_14cb72f10 != DAT_14cb72f3c)) {
    puVar6 = &DAT_14cb72f40;
    if (DAT_14cb72f48 != (undefined *)0x0) {
      puVar6 = DAT_14cb72f48;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb72f50 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb72f08 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d92c90(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460e7384 FUN_1460e7384 body=270 status=ok
// SIG undefined FUN_1460e7384(void)

int * FUN_1460e7384(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb72f38;
  iVar3 = DAT_14cb72f10;
  if (DAT_14cb72f3c == 0) {
    iVar2 = DAT_14cb72f10 + 1;
    bVar7 = DAT_14cb72f14 == DAT_14cb72f10;
    DAT_14cb72f10 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb72f08,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb72f18,1);
    puVar4 = DAT_14cb72f28;
    if (DAT_14cb72f28 == (undefined *)0x0) {
      puVar4 = &DAT_14cb72f18;
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
    lVar6 = (longlong)DAT_14cb72f38;
    DAT_14cb72f38 = *(int *)(DAT_14cb72f08 + 4 + lVar6 * 0x18);
    DAT_14cb72f3c = DAT_14cb72f3c + -1;
    if (DAT_14cb72f3c != 0) {
      *(undefined4 *)(DAT_14cb72f08 + (longlong)DAT_14cb72f38 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb72f18;
  if (DAT_14cb72f28 != (undefined *)0x0) {
    puVar4 = DAT_14cb72f28;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb72f08;
  return param_1;
}



// FUNCTION 1460e7492 FUN_1460e7492 body=523 status=ok
// SIG undefined FUN_1460e7492(void)

void FUN_1460e7492(void)

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
  if (DAT_14cb72f48 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb72f48,0,0,4);
  }
  uVar3 = DAT_14cb72f50;
  uVar2 = local_50;
  if (DAT_14cb72f50 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb72f40,0,DAT_14cb72f50,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb72f48;
        if (DAT_14cb72f48 == (undefined *)0x0) {
          puVar6 = &DAT_14cb72f40;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb72f50 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb72f18;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb72f30 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb72f08;
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
                (longlong)(int)DAT_14cb72f50 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb72f48;
        if (DAT_14cb72f48 == (undefined *)0x0) {
          puVar6 = &DAT_14cb72f40;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb72f50 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb72f48;
        if (DAT_14cb72f48 == (undefined *)0x0) {
          puVar6 = &DAT_14cb72f40;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb72f50 - 1U) * 4) = iVar4;
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



// FUNCTION 1460e769e FUN_1460e769e body=507 status=ok
// SIG undefined FUN_1460e769e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460e769e(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb73060 = 0;
  FUN_1446ddc76(&DAT_14cb73064,"GbxAvatarSelectorDefs",1);
  _DAT_14cb73070 = 0;
  _DAT_14cb73078 = 0;
  _DAT_14cb73080 = 0;
  DAT_14cb73088 = (void *)0x0;
  _DAT_14cb73090 = 0;
  _DAT_14cb73098 = FUN_1487e30fa;
  DAT_14cb730a0 = *param_1;
  DAT_14cb730b0 = param_1[2];
  param_1[2] = 0;
  DAT_14cb730c0._0_4_ = (undefined4)param_1[4];
  DAT_14cb730c0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb730c8 = (undefined4)param_1[5];
  uRam000000014cb730cc = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb730d0 = (undefined4)param_1[6];
  uRam000000014cb730d4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb730d8 = (undefined4)param_1[7];
  uRam000000014cb730dc = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb730a0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb73070 = 0;
  _DAT_14cb73078 = local_68;
  _DAT_14cb73080 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb73090 = CONCAT44(DAT_14cb73094,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb73094 == 0) {
    _DAT_14cb73090 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb73088,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb73088,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb73060) && ((DAT_14cb72ff0 == (int *)0x0 || (*DAT_14cb72ff0 < DAT_14cb73060)))) {
    DAT_14cb72ff0 = &DAT_14cb73060;
  }
  FUN_1460e789a();
  local_30 = &local_70;
  local_70 = &DAT_14cb73060;
  local_38 = &DAT_14cb73064;
  FUN_1460e7934(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460e789a FUN_1460e789a body=153 status=ok
// SIG undefined FUN_1460e789a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460e789a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb73048) {
    FUN_144b3d300(&DAT_14cb73048);
    if (DAT_14cb73048 == -1) {
      DAT_14cb73018 = 0;
      DAT_14cb73020 = 0;
      DAT_14cb72ff8 = 0;
      _DAT_14cb73000 = 0;
      _DAT_14cb73024 = 0xffffffff00000080;
      DAT_14cb7302c = 0;
      DAT_14cb73038 = 0;
      DAT_14cb73040 = 0;
      atexit(FUN_143cc658f);
      _Init_thread_footer(&DAT_14cb73048);
      return;
    }
  }
  return;
}



// FUNCTION 1460e7934 FUN_1460e7934 body=338 status=ok
// SIG undefined FUN_1460e7934(void)

undefined4 * FUN_1460e7934(undefined4 *param_1,undefined8 *param_2)

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
  FUN_1460e7b1a(local_40);
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
  cVar5 = FUN_1460e7a88(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb73000 - DAT_14cb7302c;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb73040)) {
      uVar10 = DAT_14cb73040 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb73038;
      if (DAT_14cb73038 == (undefined *)0x0) {
        puVar7 = &DAT_14cb73030;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb73040 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb73038;
      if (DAT_14cb73038 == (undefined *)0x0) {
        puVar7 = &DAT_14cb73030;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb73040 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb73040 = iVar9;
      FUN_1460e7c28();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460e7a88 FUN_1460e7a88 body=145 status=ok
// SIG undefined FUN_1460e7a88(void)

undefined8 FUN_1460e7a88(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb73000 - DAT_14cb7302c != 1) && (DAT_14cb73000 != DAT_14cb7302c)) {
    puVar6 = &DAT_14cb73030;
    if (DAT_14cb73038 != (undefined *)0x0) {
      puVar6 = DAT_14cb73038;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb73040 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb72ff8 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d92e7c(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460e7b1a FUN_1460e7b1a body=270 status=ok
// SIG undefined FUN_1460e7b1a(void)

int * FUN_1460e7b1a(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb73028;
  iVar3 = DAT_14cb73000;
  if (DAT_14cb7302c == 0) {
    iVar2 = DAT_14cb73000 + 1;
    bVar7 = DAT_14cb73004 == DAT_14cb73000;
    DAT_14cb73000 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb72ff8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb73008,1);
    puVar4 = DAT_14cb73018;
    if (DAT_14cb73018 == (undefined *)0x0) {
      puVar4 = &DAT_14cb73008;
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
    lVar6 = (longlong)DAT_14cb73028;
    DAT_14cb73028 = *(int *)(DAT_14cb72ff8 + 4 + lVar6 * 0x18);
    DAT_14cb7302c = DAT_14cb7302c + -1;
    if (DAT_14cb7302c != 0) {
      *(undefined4 *)(DAT_14cb72ff8 + (longlong)DAT_14cb73028 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb73008;
  if (DAT_14cb73018 != (undefined *)0x0) {
    puVar4 = DAT_14cb73018;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb72ff8;
  return param_1;
}



// FUNCTION 1460e7c28 FUN_1460e7c28 body=523 status=ok
// SIG undefined FUN_1460e7c28(void)

void FUN_1460e7c28(void)

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
  if (DAT_14cb73038 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb73038,0,0,4);
  }
  uVar3 = DAT_14cb73040;
  uVar2 = local_50;
  if (DAT_14cb73040 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb73030,0,DAT_14cb73040,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb73038;
        if (DAT_14cb73038 == (undefined *)0x0) {
          puVar6 = &DAT_14cb73030;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb73040 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb73008;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb73020 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb72ff8;
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
                (longlong)(int)DAT_14cb73040 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb73038;
        if (DAT_14cb73038 == (undefined *)0x0) {
          puVar6 = &DAT_14cb73030;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb73040 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb73038;
        if (DAT_14cb73038 == (undefined *)0x0) {
          puVar6 = &DAT_14cb73030;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb73040 - 1U) * 4) = iVar4;
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



// FUNCTION 1460e7e34 FUN_1460e7e34 body=507 status=ok
// SIG undefined FUN_1460e7e34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460e7e34(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb73150 = 0;
  FUN_1446ddc76(&DAT_14cb73154,"GbxAvatarArchetypeDefs",1);
  _DAT_14cb73160 = 0;
  _DAT_14cb73168 = 0;
  _DAT_14cb73170 = 0;
  DAT_14cb73178 = (void *)0x0;
  _DAT_14cb73180 = 0;
  _DAT_14cb73188 = FUN_1487e3252;
  DAT_14cb73190 = *param_1;
  DAT_14cb731a0 = param_1[2];
  param_1[2] = 0;
  DAT_14cb731b0._0_4_ = (undefined4)param_1[4];
  DAT_14cb731b0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb731b8 = (undefined4)param_1[5];
  uRam000000014cb731bc = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb731c0 = (undefined4)param_1[6];
  uRam000000014cb731c4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb731c8 = (undefined4)param_1[7];
  uRam000000014cb731cc = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb73190 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb73160 = 0;
  _DAT_14cb73168 = local_68;
  _DAT_14cb73170 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb73180 = CONCAT44(DAT_14cb73184,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb73184 == 0) {
    _DAT_14cb73180 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb73178,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb73178,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb73150) && ((DAT_14cb730e0 == (int *)0x0 || (*DAT_14cb730e0 < DAT_14cb73150)))) {
    DAT_14cb730e0 = &DAT_14cb73150;
  }
  FUN_1460e8030();
  local_30 = &local_70;
  local_70 = &DAT_14cb73150;
  local_38 = &DAT_14cb73154;
  FUN_1460e80ca(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460e8030 FUN_1460e8030 body=153 status=ok
// SIG undefined FUN_1460e8030(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460e8030(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb73138) {
    FUN_144b3d300(&DAT_14cb73138);
    if (DAT_14cb73138 == -1) {
      DAT_14cb73108 = 0;
      DAT_14cb73110 = 0;
      DAT_14cb730e8 = 0;
      _DAT_14cb730f0 = 0;
      _DAT_14cb73114 = 0xffffffff00000080;
      DAT_14cb7311c = 0;
      DAT_14cb73128 = 0;
      DAT_14cb73130 = 0;
      atexit(FUN_143cc65bd);
      _Init_thread_footer(&DAT_14cb73138);
      return;
    }
  }
  return;
}



// FUNCTION 1460e80ca FUN_1460e80ca body=338 status=ok
// SIG undefined FUN_1460e80ca(void)

undefined4 * FUN_1460e80ca(undefined4 *param_1,undefined8 *param_2)

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
  FUN_1460e82b0(local_40);
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
  cVar5 = FUN_1460e821e(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb730f0 - DAT_14cb7311c;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb73130)) {
      uVar10 = DAT_14cb73130 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb73128;
      if (DAT_14cb73128 == (undefined *)0x0) {
        puVar7 = &DAT_14cb73120;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb73130 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb73128;
      if (DAT_14cb73128 == (undefined *)0x0) {
        puVar7 = &DAT_14cb73120;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb73130 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb73130 = iVar9;
      FUN_1460e83be();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460e821e FUN_1460e821e body=145 status=ok
// SIG undefined FUN_1460e821e(void)

undefined8 FUN_1460e821e(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb730f0 - DAT_14cb7311c != 1) && (DAT_14cb730f0 != DAT_14cb7311c)) {
    puVar6 = &DAT_14cb73120;
    if (DAT_14cb73128 != (undefined *)0x0) {
      puVar6 = DAT_14cb73128;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb73130 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb730e8 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d93068(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460e82b0 FUN_1460e82b0 body=270 status=ok
// SIG undefined FUN_1460e82b0(void)

int * FUN_1460e82b0(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb73118;
  iVar3 = DAT_14cb730f0;
  if (DAT_14cb7311c == 0) {
    iVar2 = DAT_14cb730f0 + 1;
    bVar7 = DAT_14cb730f4 == DAT_14cb730f0;
    DAT_14cb730f0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb730e8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb730f8,1);
    puVar4 = DAT_14cb73108;
    if (DAT_14cb73108 == (undefined *)0x0) {
      puVar4 = &DAT_14cb730f8;
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
    lVar6 = (longlong)DAT_14cb73118;
    DAT_14cb73118 = *(int *)(DAT_14cb730e8 + 4 + lVar6 * 0x18);
    DAT_14cb7311c = DAT_14cb7311c + -1;
    if (DAT_14cb7311c != 0) {
      *(undefined4 *)(DAT_14cb730e8 + (longlong)DAT_14cb73118 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb730f8;
  if (DAT_14cb73108 != (undefined *)0x0) {
    puVar4 = DAT_14cb73108;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb730e8;
  return param_1;
}



// FUNCTION 1460e83be FUN_1460e83be body=523 status=ok
// SIG undefined FUN_1460e83be(void)

void FUN_1460e83be(void)

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
  if (DAT_14cb73128 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb73128,0,0,4);
  }
  uVar3 = DAT_14cb73130;
  uVar2 = local_50;
  if (DAT_14cb73130 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb73120,0,DAT_14cb73130,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb73128;
        if (DAT_14cb73128 == (undefined *)0x0) {
          puVar6 = &DAT_14cb73120;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb73130 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb730f8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb73110 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb730e8;
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
                (longlong)(int)DAT_14cb73130 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb73128;
        if (DAT_14cb73128 == (undefined *)0x0) {
          puVar6 = &DAT_14cb73120;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb73130 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb73128;
        if (DAT_14cb73128 == (undefined *)0x0) {
          puVar6 = &DAT_14cb73120;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb73130 - 1U) * 4) = iVar4;
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



// FUNCTION 1460e85ca FUN_1460e85ca body=507 status=ok
// SIG undefined FUN_1460e85ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460e85ca(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb73240 = 0;
  FUN_1446ddc76(&DAT_14cb73244,"GbxAvatarRequirementsDefs",1);
  _DAT_14cb73250 = 0;
  _DAT_14cb73258 = 0;
  _DAT_14cb73260 = 0;
  DAT_14cb73268 = (void *)0x0;
  _DAT_14cb73270 = 0;
  _DAT_14cb73278 = FUN_1487e33b4;
  DAT_14cb73280 = *param_1;
  DAT_14cb73290 = param_1[2];
  param_1[2] = 0;
  DAT_14cb732a0._0_4_ = (undefined4)param_1[4];
  DAT_14cb732a0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb732a8 = (undefined4)param_1[5];
  uRam000000014cb732ac = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb732b0 = (undefined4)param_1[6];
  uRam000000014cb732b4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb732b8 = (undefined4)param_1[7];
  uRam000000014cb732bc = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb73280 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb73250 = 0;
  _DAT_14cb73258 = local_68;
  _DAT_14cb73260 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb73270 = CONCAT44(DAT_14cb73274,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb73274 == 0) {
    _DAT_14cb73270 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb73268,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb73268,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb73240) && ((DAT_14cb731d0 == (int *)0x0 || (*DAT_14cb731d0 < DAT_14cb73240)))) {
    DAT_14cb731d0 = &DAT_14cb73240;
  }
  FUN_1460e87c6();
  local_30 = &local_70;
  local_70 = &DAT_14cb73240;
  local_38 = &DAT_14cb73244;
  FUN_1460e8860(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460e87c6 FUN_1460e87c6 body=153 status=ok
// SIG undefined FUN_1460e87c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460e87c6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb73228) {
    FUN_144b3d300(&DAT_14cb73228);
    if (DAT_14cb73228 == -1) {
      DAT_14cb731f8 = 0;
      DAT_14cb73200 = 0;
      DAT_14cb731d8 = 0;
      _DAT_14cb731e0 = 0;
      _DAT_14cb73204 = 0xffffffff00000080;
      DAT_14cb7320c = 0;
      DAT_14cb73218 = 0;
      DAT_14cb73220 = 0;
      atexit(FUN_143cc65eb);
      _Init_thread_footer(&DAT_14cb73228);
      return;
    }
  }
  return;
}



// FUNCTION 1460e8860 FUN_1460e8860 body=338 status=ok
// SIG undefined FUN_1460e8860(void)

undefined4 * FUN_1460e8860(undefined4 *param_1,undefined8 *param_2)

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
  FUN_1460e8a46(local_40);
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
  cVar5 = FUN_1460e89b4(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb731e0 - DAT_14cb7320c;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb73220)) {
      uVar10 = DAT_14cb73220 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb73218;
      if (DAT_14cb73218 == (undefined *)0x0) {
        puVar7 = &DAT_14cb73210;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb73220 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb73218;
      if (DAT_14cb73218 == (undefined *)0x0) {
        puVar7 = &DAT_14cb73210;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb73220 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb73220 = iVar9;
      FUN_1460e8b54();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460e89b4 FUN_1460e89b4 body=145 status=ok
// SIG undefined FUN_1460e89b4(void)

undefined8 FUN_1460e89b4(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb731e0 - DAT_14cb7320c != 1) && (DAT_14cb731e0 != DAT_14cb7320c)) {
    puVar6 = &DAT_14cb73210;
    if (DAT_14cb73218 != (undefined *)0x0) {
      puVar6 = DAT_14cb73218;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb73220 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb731d8 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d93254(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460e8a46 FUN_1460e8a46 body=270 status=ok
// SIG undefined FUN_1460e8a46(void)

int * FUN_1460e8a46(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb73208;
  iVar3 = DAT_14cb731e0;
  if (DAT_14cb7320c == 0) {
    iVar2 = DAT_14cb731e0 + 1;
    bVar7 = DAT_14cb731e4 == DAT_14cb731e0;
    DAT_14cb731e0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb731d8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb731e8,1);
    puVar4 = DAT_14cb731f8;
    if (DAT_14cb731f8 == (undefined *)0x0) {
      puVar4 = &DAT_14cb731e8;
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
    lVar6 = (longlong)DAT_14cb73208;
    DAT_14cb73208 = *(int *)(DAT_14cb731d8 + 4 + lVar6 * 0x18);
    DAT_14cb7320c = DAT_14cb7320c + -1;
    if (DAT_14cb7320c != 0) {
      *(undefined4 *)(DAT_14cb731d8 + (longlong)DAT_14cb73208 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb731e8;
  if (DAT_14cb731f8 != (undefined *)0x0) {
    puVar4 = DAT_14cb731f8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb731d8;
  return param_1;
}



// FUNCTION 1460e8b54 FUN_1460e8b54 body=523 status=ok
// SIG undefined FUN_1460e8b54(void)

void FUN_1460e8b54(void)

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
  if (DAT_14cb73218 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb73218,0,0,4);
  }
  uVar3 = DAT_14cb73220;
  uVar2 = local_50;
  if (DAT_14cb73220 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb73210,0,DAT_14cb73220,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb73218;
        if (DAT_14cb73218 == (undefined *)0x0) {
          puVar6 = &DAT_14cb73210;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb73220 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb731e8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb73200 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb731d8;
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
                (longlong)(int)DAT_14cb73220 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb73218;
        if (DAT_14cb73218 == (undefined *)0x0) {
          puVar6 = &DAT_14cb73210;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb73220 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb73218;
        if (DAT_14cb73218 == (undefined *)0x0) {
          puVar6 = &DAT_14cb73210;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb73220 - 1U) * 4) = iVar4;
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



// FUNCTION 1460e8d60 FUN_1460e8d60 body=507 status=ok
// SIG undefined FUN_1460e8d60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460e8d60(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb73330 = 0;
  FUN_1446ddc76(&DAT_14cb73334,"GbxAvatarFeatureDefs",1);
  _DAT_14cb73340 = 0;
  _DAT_14cb73348 = 0;
  _DAT_14cb73350 = 0;
  DAT_14cb73358 = (void *)0x0;
  _DAT_14cb73360 = 0;
  _DAT_14cb73368 = FUN_1487e3480;
  DAT_14cb73370 = *param_1;
  DAT_14cb73380 = param_1[2];
  param_1[2] = 0;
  DAT_14cb73390._0_4_ = (undefined4)param_1[4];
  DAT_14cb73390._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb73398 = (undefined4)param_1[5];
  uRam000000014cb7339c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb733a0 = (undefined4)param_1[6];
  uRam000000014cb733a4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb733a8 = (undefined4)param_1[7];
  uRam000000014cb733ac = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb73370 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb73340 = 0;
  _DAT_14cb73348 = local_68;
  _DAT_14cb73350 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb73360 = CONCAT44(DAT_14cb73364,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb73364 == 0) {
    _DAT_14cb73360 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb73358,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb73358,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb73330) && ((DAT_14cb732c0 == (int *)0x0 || (*DAT_14cb732c0 < DAT_14cb73330)))) {
    DAT_14cb732c0 = &DAT_14cb73330;
  }
  FUN_1460e8f5c();
  local_30 = &local_70;
  local_70 = &DAT_14cb73330;
  local_38 = &DAT_14cb73334;
  FUN_1460e8ff6(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460e8f5c FUN_1460e8f5c body=153 status=ok
// SIG undefined FUN_1460e8f5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460e8f5c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb73318) {
    FUN_144b3d300(&DAT_14cb73318);
    if (DAT_14cb73318 == -1) {
      DAT_14cb732e8 = 0;
      DAT_14cb732f0 = 0;
      DAT_14cb732c8 = 0;
      _DAT_14cb732d0 = 0;
      _DAT_14cb732f4 = 0xffffffff00000080;
      DAT_14cb732fc = 0;
      DAT_14cb73308 = 0;
      DAT_14cb73310 = 0;
      atexit(FUN_143cc6619);
      _Init_thread_footer(&DAT_14cb73318);
      return;
    }
  }
  return;
}



// FUNCTION 1460e8ff6 FUN_1460e8ff6 body=338 status=ok
// SIG undefined FUN_1460e8ff6(void)

undefined4 * FUN_1460e8ff6(undefined4 *param_1,undefined8 *param_2)

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
  FUN_1460e91dc(local_40);
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
  cVar5 = FUN_1460e914a(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb732d0 - DAT_14cb732fc;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb73310)) {
      uVar10 = DAT_14cb73310 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb73308;
      if (DAT_14cb73308 == (undefined *)0x0) {
        puVar7 = &DAT_14cb73300;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb73310 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb73308;
      if (DAT_14cb73308 == (undefined *)0x0) {
        puVar7 = &DAT_14cb73300;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb73310 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb73310 = iVar9;
      FUN_1460e92ea();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460e914a FUN_1460e914a body=145 status=ok
// SIG undefined FUN_1460e914a(void)

undefined8 FUN_1460e914a(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb732d0 - DAT_14cb732fc != 1) && (DAT_14cb732d0 != DAT_14cb732fc)) {
    puVar6 = &DAT_14cb73300;
    if (DAT_14cb73308 != (undefined *)0x0) {
      puVar6 = DAT_14cb73308;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb73310 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb732c8 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d93440(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460e91dc FUN_1460e91dc body=270 status=ok
// SIG undefined FUN_1460e91dc(void)

int * FUN_1460e91dc(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb732f8;
  iVar3 = DAT_14cb732d0;
  if (DAT_14cb732fc == 0) {
    iVar2 = DAT_14cb732d0 + 1;
    bVar7 = DAT_14cb732d4 == DAT_14cb732d0;
    DAT_14cb732d0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb732c8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb732d8,1);
    puVar4 = DAT_14cb732e8;
    if (DAT_14cb732e8 == (undefined *)0x0) {
      puVar4 = &DAT_14cb732d8;
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
    lVar6 = (longlong)DAT_14cb732f8;
    DAT_14cb732f8 = *(int *)(DAT_14cb732c8 + 4 + lVar6 * 0x18);
    DAT_14cb732fc = DAT_14cb732fc + -1;
    if (DAT_14cb732fc != 0) {
      *(undefined4 *)(DAT_14cb732c8 + (longlong)DAT_14cb732f8 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb732d8;
  if (DAT_14cb732e8 != (undefined *)0x0) {
    puVar4 = DAT_14cb732e8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb732c8;
  return param_1;
}



// FUNCTION 1460e92ea FUN_1460e92ea body=523 status=ok
// SIG undefined FUN_1460e92ea(void)

void FUN_1460e92ea(void)

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
  if (DAT_14cb73308 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb73308,0,0,4);
  }
  uVar3 = DAT_14cb73310;
  uVar2 = local_50;
  if (DAT_14cb73310 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb73300,0,DAT_14cb73310,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb73308;
        if (DAT_14cb73308 == (undefined *)0x0) {
          puVar6 = &DAT_14cb73300;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb73310 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb732d8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb732f0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb732c8;
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
                (longlong)(int)DAT_14cb73310 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb73308;
        if (DAT_14cb73308 == (undefined *)0x0) {
          puVar6 = &DAT_14cb73300;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb73310 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb73308;
        if (DAT_14cb73308 == (undefined *)0x0) {
          puVar6 = &DAT_14cb73300;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb73310 - 1U) * 4) = iVar4;
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



// FUNCTION 1460e94f6 FUN_1460e94f6 body=507 status=ok
// SIG undefined FUN_1460e94f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460e94f6(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb75820 = 0;
  FUN_1446ddc76(&DAT_14cb75824,"GbxCapitalDefs",1);
  _DAT_14cb75830 = 0;
  _DAT_14cb75838 = 0;
  _DAT_14cb75840 = 0;
  DAT_14cb75848 = (void *)0x0;
  _DAT_14cb75850 = 0;
  _DAT_14cb75858 = FUN_148804002;
  DAT_14cb75860 = *param_1;
  DAT_14cb75870 = param_1[2];
  param_1[2] = 0;
  DAT_14cb75880._0_4_ = (undefined4)param_1[4];
  DAT_14cb75880._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb75888 = (undefined4)param_1[5];
  uRam000000014cb7588c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb75890 = (undefined4)param_1[6];
  uRam000000014cb75894 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb75898 = (undefined4)param_1[7];
  uRam000000014cb7589c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb75860 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb75830 = 0;
  _DAT_14cb75838 = local_68;
  _DAT_14cb75840 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb75850 = CONCAT44(DAT_14cb75854,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb75854 == 0) {
    _DAT_14cb75850 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb75848,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb75848,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb75820) && ((DAT_14cb757b0 == (int *)0x0 || (*DAT_14cb757b0 < DAT_14cb75820)))) {
    DAT_14cb757b0 = &DAT_14cb75820;
  }
  FUN_1460e96f2();
  local_30 = &local_70;
  local_70 = &DAT_14cb75820;
  local_38 = &DAT_14cb75824;
  FUN_1460e978c(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460e96f2 FUN_1460e96f2 body=153 status=ok
// SIG undefined FUN_1460e96f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460e96f2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb75808) {
    FUN_144b3d300(&DAT_14cb75808);
    if (DAT_14cb75808 == -1) {
      DAT_14cb757d8 = 0;
      DAT_14cb757e0 = 0;
      DAT_14cb757b8 = 0;
      _DAT_14cb757c0 = 0;
      _DAT_14cb757e4 = 0xffffffff00000080;
      DAT_14cb757ec = 0;
      DAT_14cb757f8 = 0;
      DAT_14cb75800 = 0;
      atexit(FUN_143cd9426);
      _Init_thread_footer(&DAT_14cb75808);
      return;
    }
  }
  return;
}



// FUNCTION 1460e978c FUN_1460e978c body=338 status=ok
// SIG undefined FUN_1460e978c(void)

undefined4 * FUN_1460e978c(undefined4 *param_1,undefined8 *param_2)

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
  FUN_1460e9972(local_40);
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
  cVar5 = FUN_1460e98e0(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb757c0 - DAT_14cb757ec;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb75800)) {
      uVar10 = DAT_14cb75800 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb757f8;
      if (DAT_14cb757f8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb757f0;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb75800 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb757f8;
      if (DAT_14cb757f8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb757f0;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb75800 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb75800 = iVar9;
      FUN_1460e9a80();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460e98e0 FUN_1460e98e0 body=145 status=ok
// SIG undefined FUN_1460e98e0(void)

undefined8 FUN_1460e98e0(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb757c0 - DAT_14cb757ec != 1) && (DAT_14cb757c0 != DAT_14cb757ec)) {
    puVar6 = &DAT_14cb757f0;
    if (DAT_14cb757f8 != (undefined *)0x0) {
      puVar6 = DAT_14cb757f8;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb75800 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb757b8 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d93a04(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460e9972 FUN_1460e9972 body=270 status=ok
// SIG undefined FUN_1460e9972(void)

int * FUN_1460e9972(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb757e8;
  iVar3 = DAT_14cb757c0;
  if (DAT_14cb757ec == 0) {
    iVar2 = DAT_14cb757c0 + 1;
    bVar7 = DAT_14cb757c4 == DAT_14cb757c0;
    DAT_14cb757c0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb757b8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb757c8,1);
    puVar4 = DAT_14cb757d8;
    if (DAT_14cb757d8 == (undefined *)0x0) {
      puVar4 = &DAT_14cb757c8;
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
    lVar6 = (longlong)DAT_14cb757e8;
    DAT_14cb757e8 = *(int *)(DAT_14cb757b8 + 4 + lVar6 * 0x18);
    DAT_14cb757ec = DAT_14cb757ec + -1;
    if (DAT_14cb757ec != 0) {
      *(undefined4 *)(DAT_14cb757b8 + (longlong)DAT_14cb757e8 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb757c8;
  if (DAT_14cb757d8 != (undefined *)0x0) {
    puVar4 = DAT_14cb757d8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb757b8;
  return param_1;
}



// FUNCTION 1460e9a80 FUN_1460e9a80 body=523 status=ok
// SIG undefined FUN_1460e9a80(void)

void FUN_1460e9a80(void)

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
  if (DAT_14cb757f8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb757f8,0,0,4);
  }
  uVar3 = DAT_14cb75800;
  uVar2 = local_50;
  if (DAT_14cb75800 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb757f0,0,DAT_14cb75800,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb757f8;
        if (DAT_14cb757f8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb757f0;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb75800 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb757c8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb757e0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb757b8;
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
                (longlong)(int)DAT_14cb75800 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb757f8;
        if (DAT_14cb757f8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb757f0;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb75800 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb757f8;
        if (DAT_14cb757f8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb757f0;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb75800 - 1U) * 4) = iVar4;
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



// FUNCTION 1460e9c8c FUN_1460e9c8c body=507 status=ok
// SIG undefined FUN_1460e9c8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460e9c8c(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb763e0 = 0;
  FUN_1446ddc76(&DAT_14cb763e4,"GbxCurrency",1);
  _DAT_14cb763f0 = 0;
  _DAT_14cb763f8 = 0;
  _DAT_14cb76400 = 0;
  DAT_14cb76408 = (void *)0x0;
  _DAT_14cb76410 = 0;
  _DAT_14cb76418 = FUN_14881548c;
  DAT_14cb76420 = *param_1;
  DAT_14cb76430 = param_1[2];
  param_1[2] = 0;
  DAT_14cb76440._0_4_ = (undefined4)param_1[4];
  DAT_14cb76440._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb76448 = (undefined4)param_1[5];
  uRam000000014cb7644c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb76450 = (undefined4)param_1[6];
  uRam000000014cb76454 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb76458 = (undefined4)param_1[7];
  uRam000000014cb7645c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb76420 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb763f0 = 0;
  _DAT_14cb763f8 = local_68;
  _DAT_14cb76400 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb76410 = CONCAT44(DAT_14cb76414,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb76414 == 0) {
    _DAT_14cb76410 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb76408,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb76408,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb763e0) && ((DAT_14cb76368 == (int *)0x0 || (*DAT_14cb76368 < DAT_14cb763e0)))) {
    DAT_14cb76368 = &DAT_14cb763e0;
  }
  FUN_1460e9e88();
  local_30 = &local_70;
  local_70 = &DAT_14cb763e0;
  local_38 = &DAT_14cb763e4;
  FUN_1460e9f22(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460e9e88 FUN_1460e9e88 body=153 status=ok
// SIG undefined FUN_1460e9e88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460e9e88(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb763c0) {
    FUN_144b3d300(&DAT_14cb763c0);
    if (DAT_14cb763c0 == -1) {
      DAT_14cb76390 = 0;
      DAT_14cb76398 = 0;
      DAT_14cb76370 = 0;
      _DAT_14cb76378 = 0;
      _DAT_14cb7639c = 0xffffffff00000080;
      DAT_14cb763a4 = 0;
      DAT_14cb763b0 = 0;
      DAT_14cb763b8 = 0;
      atexit(FUN_143cf5df4);
      _Init_thread_footer(&DAT_14cb763c0);
      return;
    }
  }
  return;
}



// FUNCTION 1460e9f22 FUN_1460e9f22 body=338 status=ok
// SIG undefined FUN_1460e9f22(void)

undefined4 * FUN_1460e9f22(undefined4 *param_1,undefined8 *param_2)

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
  FUN_1460ea108(local_40);
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
  cVar5 = FUN_1460ea076(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb76378 - DAT_14cb763a4;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb763b8)) {
      uVar10 = DAT_14cb763b8 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb763b0;
      if (DAT_14cb763b0 == (undefined *)0x0) {
        puVar7 = &DAT_14cb763a8;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb763b8 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb763b0;
      if (DAT_14cb763b0 == (undefined *)0x0) {
        puVar7 = &DAT_14cb763a8;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb763b8 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb763b8 = iVar9;
      FUN_1460ea216();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460ea076 FUN_1460ea076 body=145 status=ok
// SIG undefined FUN_1460ea076(void)

undefined8 FUN_1460ea076(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb76378 - DAT_14cb763a4 != 1) && (DAT_14cb76378 != DAT_14cb763a4)) {
    puVar6 = &DAT_14cb763a8;
    if (DAT_14cb763b0 != (undefined *)0x0) {
      puVar6 = DAT_14cb763b0;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb763b8 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb76370 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d941b4(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460ea108 FUN_1460ea108 body=270 status=ok
// SIG undefined FUN_1460ea108(void)

int * FUN_1460ea108(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb763a0;
  iVar3 = DAT_14cb76378;
  if (DAT_14cb763a4 == 0) {
    iVar2 = DAT_14cb76378 + 1;
    bVar7 = DAT_14cb7637c == DAT_14cb76378;
    DAT_14cb76378 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb76370,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb76380,1);
    puVar4 = DAT_14cb76390;
    if (DAT_14cb76390 == (undefined *)0x0) {
      puVar4 = &DAT_14cb76380;
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
    lVar6 = (longlong)DAT_14cb763a0;
    DAT_14cb763a0 = *(int *)(DAT_14cb76370 + 4 + lVar6 * 0x18);
    DAT_14cb763a4 = DAT_14cb763a4 + -1;
    if (DAT_14cb763a4 != 0) {
      *(undefined4 *)(DAT_14cb76370 + (longlong)DAT_14cb763a0 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb76380;
  if (DAT_14cb76390 != (undefined *)0x0) {
    puVar4 = DAT_14cb76390;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb76370;
  return param_1;
}



// FUNCTION 1460ea216 FUN_1460ea216 body=523 status=ok
// SIG undefined FUN_1460ea216(void)

void FUN_1460ea216(void)

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
  if (DAT_14cb763b0 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb763b0,0,0,4);
  }
  uVar3 = DAT_14cb763b8;
  uVar2 = local_50;
  if (DAT_14cb763b8 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb763a8,0,DAT_14cb763b8,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb763b0;
        if (DAT_14cb763b0 == (undefined *)0x0) {
          puVar6 = &DAT_14cb763a8;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb763b8 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb76380;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb76398 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb76370;
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
                (longlong)(int)DAT_14cb763b8 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb763b0;
        if (DAT_14cb763b0 == (undefined *)0x0) {
          puVar6 = &DAT_14cb763a8;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb763b8 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb763b0;
        if (DAT_14cb763b0 == (undefined *)0x0) {
          puVar6 = &DAT_14cb763a8;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb763b8 - 1U) * 4) = iVar4;
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



// FUNCTION 1460ea422 FUN_1460ea422 body=507 status=ok
// SIG undefined FUN_1460ea422(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ea422(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb76520 = 0;
  FUN_1446ddc76(&DAT_14cb76524,"GbxCustomization",1);
  _DAT_14cb76530 = 0;
  _DAT_14cb76538 = 0;
  _DAT_14cb76540 = 0;
  DAT_14cb76548 = (void *)0x0;
  _DAT_14cb76550 = 0;
  _DAT_14cb76558 = FUN_1488159be;
  DAT_14cb76560 = *param_1;
  DAT_14cb76570 = param_1[2];
  param_1[2] = 0;
  DAT_14cb76580._0_4_ = (undefined4)param_1[4];
  DAT_14cb76580._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb76588 = (undefined4)param_1[5];
  uRam000000014cb7658c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb76590 = (undefined4)param_1[6];
  uRam000000014cb76594 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb76598 = (undefined4)param_1[7];
  uRam000000014cb7659c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb76560 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb76530 = 0;
  _DAT_14cb76538 = local_68;
  _DAT_14cb76540 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb76550 = CONCAT44(DAT_14cb76554,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb76554 == 0) {
    _DAT_14cb76550 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb76548,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb76548,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb76520) && ((DAT_14cb764b0 == (int *)0x0 || (*DAT_14cb764b0 < DAT_14cb76520)))) {
    DAT_14cb764b0 = &DAT_14cb76520;
  }
  FUN_1460ea61e();
  local_30 = &local_70;
  local_70 = &DAT_14cb76520;
  local_38 = &DAT_14cb76524;
  FUN_1460ea6b8(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460ea61e FUN_1460ea61e body=153 status=ok
// SIG undefined FUN_1460ea61e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ea61e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb76508) {
    FUN_144b3d300(&DAT_14cb76508);
    if (DAT_14cb76508 == -1) {
      DAT_14cb764d8 = 0;
      DAT_14cb764e0 = 0;
      DAT_14cb764b8 = 0;
      _DAT_14cb764c0 = 0;
      _DAT_14cb764e4 = 0xffffffff00000080;
      DAT_14cb764ec = 0;
      DAT_14cb764f8 = 0;
      DAT_14cb76500 = 0;
      atexit(FUN_143cf6ecf);
      _Init_thread_footer(&DAT_14cb76508);
      return;
    }
  }
  return;
}



// FUNCTION 1460ea6b8 FUN_1460ea6b8 body=338 status=ok
// SIG undefined FUN_1460ea6b8(void)

undefined4 * FUN_1460ea6b8(undefined4 *param_1,undefined8 *param_2)

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
  FUN_1460ea89e(local_40);
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
  cVar5 = FUN_1460ea80c(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb764c0 - DAT_14cb764ec;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb76500)) {
      uVar10 = DAT_14cb76500 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb764f8;
      if (DAT_14cb764f8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb764f0;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb76500 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb764f8;
      if (DAT_14cb764f8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb764f0;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb76500 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb76500 = iVar9;
      FUN_1460ea9ac();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460ea80c FUN_1460ea80c body=145 status=ok
// SIG undefined FUN_1460ea80c(void)

undefined8 FUN_1460ea80c(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb764c0 - DAT_14cb764ec != 1) && (DAT_14cb764c0 != DAT_14cb764ec)) {
    puVar6 = &DAT_14cb764f0;
    if (DAT_14cb764f8 != (undefined *)0x0) {
      puVar6 = DAT_14cb764f8;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb76500 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb764b8 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d943a0(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460ea89e FUN_1460ea89e body=270 status=ok
// SIG undefined FUN_1460ea89e(void)

int * FUN_1460ea89e(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb764e8;
  iVar3 = DAT_14cb764c0;
  if (DAT_14cb764ec == 0) {
    iVar2 = DAT_14cb764c0 + 1;
    bVar7 = DAT_14cb764c4 == DAT_14cb764c0;
    DAT_14cb764c0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb764b8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb764c8,1);
    puVar4 = DAT_14cb764d8;
    if (DAT_14cb764d8 == (undefined *)0x0) {
      puVar4 = &DAT_14cb764c8;
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
    lVar6 = (longlong)DAT_14cb764e8;
    DAT_14cb764e8 = *(int *)(DAT_14cb764b8 + 4 + lVar6 * 0x18);
    DAT_14cb764ec = DAT_14cb764ec + -1;
    if (DAT_14cb764ec != 0) {
      *(undefined4 *)(DAT_14cb764b8 + (longlong)DAT_14cb764e8 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb764c8;
  if (DAT_14cb764d8 != (undefined *)0x0) {
    puVar4 = DAT_14cb764d8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb764b8;
  return param_1;
}



// FUNCTION 1460ea9ac FUN_1460ea9ac body=523 status=ok
// SIG undefined FUN_1460ea9ac(void)

void FUN_1460ea9ac(void)

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
  if (DAT_14cb764f8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb764f8,0,0,4);
  }
  uVar3 = DAT_14cb76500;
  uVar2 = local_50;
  if (DAT_14cb76500 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb764f0,0,DAT_14cb76500,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb764f8;
        if (DAT_14cb764f8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb764f0;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb76500 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb764c8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb764e0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb764b8;
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
                (longlong)(int)DAT_14cb76500 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb764f8;
        if (DAT_14cb764f8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb764f0;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb76500 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb764f8;
        if (DAT_14cb764f8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb764f0;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb76500 - 1U) * 4) = iVar4;
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



// FUNCTION 1460eabb8 FUN_1460eabb8 body=507 status=ok
// SIG undefined FUN_1460eabb8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460eabb8(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb791a0 = 0;
  FUN_1446ddc76(&DAT_14cb791a4,"GbxExperience",1);
  _DAT_14cb791b0 = 0;
  _DAT_14cb791b8 = 0;
  _DAT_14cb791c0 = 0;
  DAT_14cb791c8 = (void *)0x0;
  _DAT_14cb791d0 = 0;
  _DAT_14cb791d8 = FUN_1488330de;
  DAT_14cb791e0 = *param_1;
  DAT_14cb791f0 = param_1[2];
  param_1[2] = 0;
  DAT_14cb79200._0_4_ = (undefined4)param_1[4];
  DAT_14cb79200._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb79208 = (undefined4)param_1[5];
  uRam000000014cb7920c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb79210 = (undefined4)param_1[6];
  uRam000000014cb79214 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb79218 = (undefined4)param_1[7];
  uRam000000014cb7921c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb791e0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb791b0 = 0;
  _DAT_14cb791b8 = local_68;
  _DAT_14cb791c0 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb791d0 = CONCAT44(DAT_14cb791d4,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb791d4 == 0) {
    _DAT_14cb791d0 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb791c8,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb791c8,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb791a0) && ((DAT_14cb79130 == (int *)0x0 || (*DAT_14cb79130 < DAT_14cb791a0)))) {
    DAT_14cb79130 = &DAT_14cb791a0;
  }
  FUN_1460eadb4();
  local_30 = &local_70;
  local_70 = &DAT_14cb791a0;
  local_38 = &DAT_14cb791a4;
  FUN_1460eae4e(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460eadb4 FUN_1460eadb4 body=153 status=ok
// SIG undefined FUN_1460eadb4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460eadb4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb79188) {
    FUN_144b3d300(&DAT_14cb79188);
    if (DAT_14cb79188 == -1) {
      DAT_14cb79158 = 0;
      DAT_14cb79160 = 0;
      DAT_14cb79138 = 0;
      _DAT_14cb79140 = 0;
      _DAT_14cb79164 = 0xffffffff00000080;
      DAT_14cb7916c = 0;
      DAT_14cb79178 = 0;
      DAT_14cb79180 = 0;
      atexit(FUN_143d20220);
      _Init_thread_footer(&DAT_14cb79188);
      return;
    }
  }
  return;
}



// FUNCTION 1460eae4e FUN_1460eae4e body=338 status=ok
// SIG undefined FUN_1460eae4e(void)

undefined4 * FUN_1460eae4e(undefined4 *param_1,undefined8 *param_2)

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
  FUN_1460eb034(local_40);
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
  cVar5 = FUN_1460eafa2(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb79140 - DAT_14cb7916c;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb79180)) {
      uVar10 = DAT_14cb79180 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb79178;
      if (DAT_14cb79178 == (undefined *)0x0) {
        puVar7 = &DAT_14cb79170;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb79180 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb79178;
      if (DAT_14cb79178 == (undefined *)0x0) {
        puVar7 = &DAT_14cb79170;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb79180 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb79180 = iVar9;
      FUN_1460eb142();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460eafa2 FUN_1460eafa2 body=145 status=ok
// SIG undefined FUN_1460eafa2(void)

undefined8 FUN_1460eafa2(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb79140 - DAT_14cb7916c != 1) && (DAT_14cb79140 != DAT_14cb7916c)) {
    puVar6 = &DAT_14cb79170;
    if (DAT_14cb79178 != (undefined *)0x0) {
      puVar6 = DAT_14cb79178;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb79180 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb79138 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d94778(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460eb034 FUN_1460eb034 body=270 status=ok
// SIG undefined FUN_1460eb034(void)

int * FUN_1460eb034(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb79168;
  iVar3 = DAT_14cb79140;
  if (DAT_14cb7916c == 0) {
    iVar2 = DAT_14cb79140 + 1;
    bVar7 = DAT_14cb79144 == DAT_14cb79140;
    DAT_14cb79140 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb79138,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb79148,1);
    puVar4 = DAT_14cb79158;
    if (DAT_14cb79158 == (undefined *)0x0) {
      puVar4 = &DAT_14cb79148;
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
    lVar6 = (longlong)DAT_14cb79168;
    DAT_14cb79168 = *(int *)(DAT_14cb79138 + 4 + lVar6 * 0x18);
    DAT_14cb7916c = DAT_14cb7916c + -1;
    if (DAT_14cb7916c != 0) {
      *(undefined4 *)(DAT_14cb79138 + (longlong)DAT_14cb79168 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb79148;
  if (DAT_14cb79158 != (undefined *)0x0) {
    puVar4 = DAT_14cb79158;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb79138;
  return param_1;
}



// FUNCTION 1460eb142 FUN_1460eb142 body=523 status=ok
// SIG undefined FUN_1460eb142(void)

void FUN_1460eb142(void)

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
  if (DAT_14cb79178 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb79178,0,0,4);
  }
  uVar3 = DAT_14cb79180;
  uVar2 = local_50;
  if (DAT_14cb79180 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb79170,0,DAT_14cb79180,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb79178;
        if (DAT_14cb79178 == (undefined *)0x0) {
          puVar6 = &DAT_14cb79170;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb79180 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb79148;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb79160 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb79138;
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
                (longlong)(int)DAT_14cb79180 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb79178;
        if (DAT_14cb79178 == (undefined *)0x0) {
          puVar6 = &DAT_14cb79170;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb79180 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb79178;
        if (DAT_14cb79178 == (undefined *)0x0) {
          puVar6 = &DAT_14cb79170;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb79180 - 1U) * 4) = iVar4;
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



// FUNCTION 1460eb34e FUN_1460eb34e body=507 status=ok
// SIG undefined FUN_1460eb34e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460eb34e(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb79290 = 0;
  FUN_1446ddc76(&DAT_14cb79294,"GbxExperienceProgressionDefs",1);
  _DAT_14cb792a0 = 0;
  _DAT_14cb792a8 = 0;
  _DAT_14cb792b0 = 0;
  DAT_14cb792b8 = (void *)0x0;
  _DAT_14cb792c0 = 0;
  _DAT_14cb792c8 = FUN_1488332b0;
  DAT_14cb792d0 = *param_1;
  DAT_14cb792e0 = param_1[2];
  param_1[2] = 0;
  DAT_14cb792f0._0_4_ = (undefined4)param_1[4];
  DAT_14cb792f0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb792f8 = (undefined4)param_1[5];
  uRam000000014cb792fc = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb79300 = (undefined4)param_1[6];
  uRam000000014cb79304 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb79308 = (undefined4)param_1[7];
  uRam000000014cb7930c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb792d0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb792a0 = 0;
  _DAT_14cb792a8 = local_68;
  _DAT_14cb792b0 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb792c0 = CONCAT44(DAT_14cb792c4,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb792c4 == 0) {
    _DAT_14cb792c0 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb792b8,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb792b8,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb79290) && ((DAT_14cb79220 == (int *)0x0 || (*DAT_14cb79220 < DAT_14cb79290)))) {
    DAT_14cb79220 = &DAT_14cb79290;
  }
  FUN_1460eb54a();
  local_30 = &local_70;
  local_70 = &DAT_14cb79290;
  local_38 = &DAT_14cb79294;
  FUN_1460eb5e4(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460eb54a FUN_1460eb54a body=153 status=ok
// SIG undefined FUN_1460eb54a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460eb54a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb79278) {
    FUN_144b3d300(&DAT_14cb79278);
    if (DAT_14cb79278 == -1) {
      DAT_14cb79248 = 0;
      DAT_14cb79250 = 0;
      DAT_14cb79228 = 0;
      _DAT_14cb79230 = 0;
      _DAT_14cb79254 = 0xffffffff00000080;
      DAT_14cb7925c = 0;
      DAT_14cb79268 = 0;
      DAT_14cb79270 = 0;
      atexit(FUN_143d2024e);
      _Init_thread_footer(&DAT_14cb79278);
      return;
    }
  }
  return;
}



// FUNCTION 1460eb5e4 FUN_1460eb5e4 body=338 status=ok
// SIG undefined FUN_1460eb5e4(void)

undefined4 * FUN_1460eb5e4(undefined4 *param_1,undefined8 *param_2)

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
  FUN_1460eb7ca(local_40);
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
  cVar5 = FUN_1460eb738(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb79230 - DAT_14cb7925c;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb79270)) {
      uVar10 = DAT_14cb79270 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb79268;
      if (DAT_14cb79268 == (undefined *)0x0) {
        puVar7 = &DAT_14cb79260;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb79270 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb79268;
      if (DAT_14cb79268 == (undefined *)0x0) {
        puVar7 = &DAT_14cb79260;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb79270 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb79270 = iVar9;
      FUN_1460eb8d8();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460eb738 FUN_1460eb738 body=145 status=ok
// SIG undefined FUN_1460eb738(void)

undefined8 FUN_1460eb738(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb79230 - DAT_14cb7925c != 1) && (DAT_14cb79230 != DAT_14cb7925c)) {
    puVar6 = &DAT_14cb79260;
    if (DAT_14cb79268 != (undefined *)0x0) {
      puVar6 = DAT_14cb79268;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb79270 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb79228 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d94964(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460eb7ca FUN_1460eb7ca body=270 status=ok
// SIG undefined FUN_1460eb7ca(void)

int * FUN_1460eb7ca(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb79258;
  iVar3 = DAT_14cb79230;
  if (DAT_14cb7925c == 0) {
    iVar2 = DAT_14cb79230 + 1;
    bVar7 = DAT_14cb79234 == DAT_14cb79230;
    DAT_14cb79230 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb79228,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb79238,1);
    puVar4 = DAT_14cb79248;
    if (DAT_14cb79248 == (undefined *)0x0) {
      puVar4 = &DAT_14cb79238;
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
    lVar6 = (longlong)DAT_14cb79258;
    DAT_14cb79258 = *(int *)(DAT_14cb79228 + 4 + lVar6 * 0x18);
    DAT_14cb7925c = DAT_14cb7925c + -1;
    if (DAT_14cb7925c != 0) {
      *(undefined4 *)(DAT_14cb79228 + (longlong)DAT_14cb79258 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb79238;
  if (DAT_14cb79248 != (undefined *)0x0) {
    puVar4 = DAT_14cb79248;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb79228;
  return param_1;
}



// FUNCTION 1460eb8d8 FUN_1460eb8d8 body=523 status=ok
// SIG undefined FUN_1460eb8d8(void)

void FUN_1460eb8d8(void)

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
  if (DAT_14cb79268 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb79268,0,0,4);
  }
  uVar3 = DAT_14cb79270;
  uVar2 = local_50;
  if (DAT_14cb79270 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb79260,0,DAT_14cb79270,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb79268;
        if (DAT_14cb79268 == (undefined *)0x0) {
          puVar6 = &DAT_14cb79260;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb79270 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb79238;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb79250 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb79228;
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
                (longlong)(int)DAT_14cb79270 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb79268;
        if (DAT_14cb79268 == (undefined *)0x0) {
          puVar6 = &DAT_14cb79260;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb79270 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb79268;
        if (DAT_14cb79268 == (undefined *)0x0) {
          puVar6 = &DAT_14cb79260;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb79270 - 1U) * 4) = iVar4;
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



// FUNCTION 1460ebae4 FUN_1460ebae4 body=507 status=ok
// SIG undefined FUN_1460ebae4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ebae4(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb7daf0 = 0;
  FUN_1446ddc76(&DAT_14cb7daf4,"gamemode_phase",1);
  _DAT_14cb7db00 = 0;
  _DAT_14cb7db08 = 0;
  _DAT_14cb7db10 = 0;
  DAT_14cb7db18 = (void *)0x0;
  _DAT_14cb7db20 = 0;
  _DAT_14cb7db28 = FUN_14885d74e;
  DAT_14cb7db30 = *param_1;
  DAT_14cb7db40 = param_1[2];
  param_1[2] = 0;
  DAT_14cb7db50._0_4_ = (undefined4)param_1[4];
  DAT_14cb7db50._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb7db58 = (undefined4)param_1[5];
  uRam000000014cb7db5c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb7db60 = (undefined4)param_1[6];
  uRam000000014cb7db64 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb7db68 = (undefined4)param_1[7];
  uRam000000014cb7db6c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb7db30 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb7db00 = 0;
  _DAT_14cb7db08 = local_68;
  _DAT_14cb7db10 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb7db20 = CONCAT44(DAT_14cb7db24,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb7db24 == 0) {
    _DAT_14cb7db20 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb7db18,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb7db18,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb7daf0) && ((DAT_14cb7da80 == (int *)0x0 || (*DAT_14cb7da80 < DAT_14cb7daf0)))) {
    DAT_14cb7da80 = &DAT_14cb7daf0;
  }
  FUN_1460ebce0();
  local_30 = &local_70;
  local_70 = &DAT_14cb7daf0;
  local_38 = &DAT_14cb7daf4;
  FUN_1460ebd7a(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460ebce0 FUN_1460ebce0 body=153 status=ok
// SIG undefined FUN_1460ebce0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ebce0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb7dad8) {
    FUN_144b3d300(&DAT_14cb7dad8);
    if (DAT_14cb7dad8 == -1) {
      DAT_14cb7daa8 = 0;
      DAT_14cb7dab0 = 0;
      DAT_14cb7da88 = 0;
      _DAT_14cb7da90 = 0;
      _DAT_14cb7dab4 = 0xffffffff00000080;
      DAT_14cb7dabc = 0;
      DAT_14cb7dac8 = 0;
      DAT_14cb7dad0 = 0;
      atexit(FUN_143d51a38);
      _Init_thread_footer(&DAT_14cb7dad8);
      return;
    }
  }
  return;
}



// FUNCTION 1460ebd7a FUN_1460ebd7a body=338 status=ok
// SIG undefined FUN_1460ebd7a(void)

undefined4 * FUN_1460ebd7a(undefined4 *param_1,undefined8 *param_2)

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
  FUN_1460ebf60(local_40);
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
  cVar5 = FUN_1460ebece(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb7da90 - DAT_14cb7dabc;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb7dad0)) {
      uVar10 = DAT_14cb7dad0 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb7dac8;
      if (DAT_14cb7dac8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb7dac0;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb7dad0 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb7dac8;
      if (DAT_14cb7dac8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb7dac0;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb7dad0 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb7dad0 = iVar9;
      FUN_1460ec06e();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460ebece FUN_1460ebece body=145 status=ok
// SIG undefined FUN_1460ebece(void)

undefined8 FUN_1460ebece(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb7da90 - DAT_14cb7dabc != 1) && (DAT_14cb7da90 != DAT_14cb7dabc)) {
    puVar6 = &DAT_14cb7dac0;
    if (DAT_14cb7dac8 != (undefined *)0x0) {
      puVar6 = DAT_14cb7dac8;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb7dad0 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb7da88 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d95114(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460ebf60 FUN_1460ebf60 body=270 status=ok
// SIG undefined FUN_1460ebf60(void)

int * FUN_1460ebf60(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb7dab8;
  iVar3 = DAT_14cb7da90;
  if (DAT_14cb7dabc == 0) {
    iVar2 = DAT_14cb7da90 + 1;
    bVar7 = DAT_14cb7da94 == DAT_14cb7da90;
    DAT_14cb7da90 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb7da88,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb7da98,1);
    puVar4 = DAT_14cb7daa8;
    if (DAT_14cb7daa8 == (undefined *)0x0) {
      puVar4 = &DAT_14cb7da98;
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
    lVar6 = (longlong)DAT_14cb7dab8;
    DAT_14cb7dab8 = *(int *)(DAT_14cb7da88 + 4 + lVar6 * 0x18);
    DAT_14cb7dabc = DAT_14cb7dabc + -1;
    if (DAT_14cb7dabc != 0) {
      *(undefined4 *)(DAT_14cb7da88 + (longlong)DAT_14cb7dab8 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb7da98;
  if (DAT_14cb7daa8 != (undefined *)0x0) {
    puVar4 = DAT_14cb7daa8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb7da88;
  return param_1;
}



// FUNCTION 1460ec06e FUN_1460ec06e body=523 status=ok
// SIG undefined FUN_1460ec06e(void)

void FUN_1460ec06e(void)

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
  if (DAT_14cb7dac8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb7dac8,0,0,4);
  }
  uVar3 = DAT_14cb7dad0;
  uVar2 = local_50;
  if (DAT_14cb7dad0 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb7dac0,0,DAT_14cb7dad0,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb7dac8;
        if (DAT_14cb7dac8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb7dac0;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb7dad0 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb7da98;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb7dab0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb7da88;
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
                (longlong)(int)DAT_14cb7dad0 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb7dac8;
        if (DAT_14cb7dac8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb7dac0;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb7dad0 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb7dac8;
        if (DAT_14cb7dac8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb7dac0;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb7dad0 - 1U) * 4) = iVar4;
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



// FUNCTION 1460ec27a FUN_1460ec27a body=507 status=ok
// SIG undefined FUN_1460ec27a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ec27a(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb7dd10 = 0;
  FUN_1446ddc76(&DAT_14cb7dd14,"gamemode_module_event",1);
  _DAT_14cb7dd20 = 0;
  _DAT_14cb7dd28 = 0;
  _DAT_14cb7dd30 = 0;
  DAT_14cb7dd38 = (void *)0x0;
  _DAT_14cb7dd40 = 0;
  _DAT_14cb7dd48 = FUN_14886213a;
  DAT_14cb7dd50 = *param_1;
  DAT_14cb7dd60 = param_1[2];
  param_1[2] = 0;
  DAT_14cb7dd70._0_4_ = (undefined4)param_1[4];
  DAT_14cb7dd70._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb7dd78 = (undefined4)param_1[5];
  uRam000000014cb7dd7c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb7dd80 = (undefined4)param_1[6];
  uRam000000014cb7dd84 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb7dd88 = (undefined4)param_1[7];
  uRam000000014cb7dd8c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb7dd50 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb7dd20 = 0;
  _DAT_14cb7dd28 = local_68;
  _DAT_14cb7dd30 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb7dd40 = CONCAT44(DAT_14cb7dd44,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb7dd44 == 0) {
    _DAT_14cb7dd40 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb7dd38,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb7dd38,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb7dd10) && ((DAT_14cb7dc98 == (int *)0x0 || (*DAT_14cb7dc98 < DAT_14cb7dd10)))) {
    DAT_14cb7dc98 = &DAT_14cb7dd10;
  }
  FUN_1460ec476();
  local_30 = &local_70;
  local_70 = &DAT_14cb7dd10;
  local_38 = &DAT_14cb7dd14;
  FUN_1460ec510(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460ec476 FUN_1460ec476 body=153 status=ok
// SIG undefined FUN_1460ec476(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ec476(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb7dcf0) {
    FUN_144b3d300(&DAT_14cb7dcf0);
    if (DAT_14cb7dcf0 == -1) {
      DAT_14cb7dcc0 = 0;
      DAT_14cb7dcc8 = 0;
      DAT_14cb7dca0 = 0;
      _DAT_14cb7dca8 = 0;
      _DAT_14cb7dccc = 0xffffffff00000080;
      DAT_14cb7dcd4 = 0;
      DAT_14cb7dce0 = 0;
      DAT_14cb7dce8 = 0;
      atexit(FUN_143d53048);
      _Init_thread_footer(&DAT_14cb7dcf0);
      return;
    }
  }
  return;
}



// FUNCTION 1460ec510 FUN_1460ec510 body=338 status=ok
// SIG undefined FUN_1460ec510(void)

undefined4 * FUN_1460ec510(undefined4 *param_1,undefined8 *param_2)

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
  FUN_1460ec6f6(local_40);
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
  cVar5 = FUN_1460ec664(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb7dca8 - DAT_14cb7dcd4;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb7dce8)) {
      uVar10 = DAT_14cb7dce8 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb7dce0;
      if (DAT_14cb7dce0 == (undefined *)0x0) {
        puVar7 = &DAT_14cb7dcd8;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb7dce8 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb7dce0;
      if (DAT_14cb7dce0 == (undefined *)0x0) {
        puVar7 = &DAT_14cb7dcd8;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb7dce8 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb7dce8 = iVar9;
      FUN_1460ec804();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460ec664 FUN_1460ec664 body=145 status=ok
// SIG undefined FUN_1460ec664(void)

undefined8 FUN_1460ec664(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb7dca8 - DAT_14cb7dcd4 != 1) && (DAT_14cb7dca8 != DAT_14cb7dcd4)) {
    puVar6 = &DAT_14cb7dcd8;
    if (DAT_14cb7dce0 != (undefined *)0x0) {
      puVar6 = DAT_14cb7dce0;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb7dce8 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb7dca0 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d95300(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460ec6f6 FUN_1460ec6f6 body=270 status=ok
// SIG undefined FUN_1460ec6f6(void)

int * FUN_1460ec6f6(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb7dcd0;
  iVar3 = DAT_14cb7dca8;
  if (DAT_14cb7dcd4 == 0) {
    iVar2 = DAT_14cb7dca8 + 1;
    bVar7 = DAT_14cb7dcac == DAT_14cb7dca8;
    DAT_14cb7dca8 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb7dca0,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb7dcb0,1);
    puVar4 = DAT_14cb7dcc0;
    if (DAT_14cb7dcc0 == (undefined *)0x0) {
      puVar4 = &DAT_14cb7dcb0;
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
    lVar6 = (longlong)DAT_14cb7dcd0;
    DAT_14cb7dcd0 = *(int *)(DAT_14cb7dca0 + 4 + lVar6 * 0x18);
    DAT_14cb7dcd4 = DAT_14cb7dcd4 + -1;
    if (DAT_14cb7dcd4 != 0) {
      *(undefined4 *)(DAT_14cb7dca0 + (longlong)DAT_14cb7dcd0 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb7dcb0;
  if (DAT_14cb7dcc0 != (undefined *)0x0) {
    puVar4 = DAT_14cb7dcc0;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb7dca0;
  return param_1;
}



// FUNCTION 1460ec804 FUN_1460ec804 body=523 status=ok
// SIG undefined FUN_1460ec804(void)

void FUN_1460ec804(void)

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
  if (DAT_14cb7dce0 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb7dce0,0,0,4);
  }
  uVar3 = DAT_14cb7dce8;
  uVar2 = local_50;
  if (DAT_14cb7dce8 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb7dcd8,0,DAT_14cb7dce8,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb7dce0;
        if (DAT_14cb7dce0 == (undefined *)0x0) {
          puVar6 = &DAT_14cb7dcd8;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb7dce8 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb7dcb0;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb7dcc8 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb7dca0;
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
                (longlong)(int)DAT_14cb7dce8 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb7dce0;
        if (DAT_14cb7dce0 == (undefined *)0x0) {
          puVar6 = &DAT_14cb7dcd8;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb7dce8 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb7dce0;
        if (DAT_14cb7dce0 == (undefined *)0x0) {
          puVar6 = &DAT_14cb7dcd8;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb7dce8 - 1U) * 4) = iVar4;
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



// FUNCTION 1460eca10 FUN_1460eca10 body=507 status=ok
// SIG undefined FUN_1460eca10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460eca10(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb7e740 = 0;
  FUN_1446ddc76(&DAT_14cb7e744,"DialogEchoPresentation",1);
  _DAT_14cb7e750 = 0;
  _DAT_14cb7e758 = 0;
  _DAT_14cb7e760 = 0;
  DAT_14cb7e768 = (void *)0x0;
  _DAT_14cb7e770 = 0;
  _DAT_14cb7e778 = FUN_14887abc6;
  DAT_14cb7e780 = *param_1;
  DAT_14cb7e790 = param_1[2];
  param_1[2] = 0;
  DAT_14cb7e7a0._0_4_ = (undefined4)param_1[4];
  DAT_14cb7e7a0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb7e7a8 = (undefined4)param_1[5];
  uRam000000014cb7e7ac = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb7e7b0 = (undefined4)param_1[6];
  uRam000000014cb7e7b4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb7e7b8 = (undefined4)param_1[7];
  uRam000000014cb7e7bc = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb7e780 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb7e750 = 0;
  _DAT_14cb7e758 = local_68;
  _DAT_14cb7e760 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb7e770 = CONCAT44(DAT_14cb7e774,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb7e774 == 0) {
    _DAT_14cb7e770 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb7e768,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb7e768,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb7e740) && ((DAT_14cb7e6d0 == (int *)0x0 || (*DAT_14cb7e6d0 < DAT_14cb7e740)))) {
    DAT_14cb7e6d0 = &DAT_14cb7e740;
  }
  FUN_1460ecc0c();
  local_30 = &local_70;
  local_70 = &DAT_14cb7e740;
  local_38 = &DAT_14cb7e744;
  FUN_1460ecca6(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460ecc0c FUN_1460ecc0c body=153 status=ok
// SIG undefined FUN_1460ecc0c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ecc0c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb7e728) {
    FUN_144b3d300(&DAT_14cb7e728);
    if (DAT_14cb7e728 == -1) {
      DAT_14cb7e6f8 = 0;
      DAT_14cb7e700 = 0;
      DAT_14cb7e6d8 = 0;
      _DAT_14cb7e6e0 = 0;
      _DAT_14cb7e704 = 0xffffffff00000080;
      DAT_14cb7e70c = 0;
      DAT_14cb7e718 = 0;
      DAT_14cb7e720 = 0;
      atexit(FUN_143d63797);
      _Init_thread_footer(&DAT_14cb7e728);
      return;
    }
  }
  return;
}



// FUNCTION 1460ecca6 FUN_1460ecca6 body=338 status=ok
// SIG undefined FUN_1460ecca6(void)

undefined4 * FUN_1460ecca6(undefined4 *param_1,undefined8 *param_2)

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
  FUN_1460ece8c(local_40);
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
  cVar5 = FUN_1460ecdfa(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb7e6e0 - DAT_14cb7e70c;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb7e720)) {
      uVar10 = DAT_14cb7e720 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb7e718;
      if (DAT_14cb7e718 == (undefined *)0x0) {
        puVar7 = &DAT_14cb7e710;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb7e720 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb7e718;
      if (DAT_14cb7e718 == (undefined *)0x0) {
        puVar7 = &DAT_14cb7e710;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb7e720 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb7e720 = iVar9;
      FUN_1460ecf9a();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460ecdfa FUN_1460ecdfa body=145 status=ok
// SIG undefined FUN_1460ecdfa(void)

undefined8 FUN_1460ecdfa(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb7e6e0 - DAT_14cb7e70c != 1) && (DAT_14cb7e6e0 != DAT_14cb7e70c)) {
    puVar6 = &DAT_14cb7e710;
    if (DAT_14cb7e718 != (undefined *)0x0) {
      puVar6 = DAT_14cb7e718;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb7e720 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb7e6d8 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d954ec(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460ece8c FUN_1460ece8c body=270 status=ok
// SIG undefined FUN_1460ece8c(void)

int * FUN_1460ece8c(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb7e708;
  iVar3 = DAT_14cb7e6e0;
  if (DAT_14cb7e70c == 0) {
    iVar2 = DAT_14cb7e6e0 + 1;
    bVar7 = DAT_14cb7e6e4 == DAT_14cb7e6e0;
    DAT_14cb7e6e0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb7e6d8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb7e6e8,1);
    puVar4 = DAT_14cb7e6f8;
    if (DAT_14cb7e6f8 == (undefined *)0x0) {
      puVar4 = &DAT_14cb7e6e8;
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
    lVar6 = (longlong)DAT_14cb7e708;
    DAT_14cb7e708 = *(int *)(DAT_14cb7e6d8 + 4 + lVar6 * 0x18);
    DAT_14cb7e70c = DAT_14cb7e70c + -1;
    if (DAT_14cb7e70c != 0) {
      *(undefined4 *)(DAT_14cb7e6d8 + (longlong)DAT_14cb7e708 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb7e6e8;
  if (DAT_14cb7e6f8 != (undefined *)0x0) {
    puVar4 = DAT_14cb7e6f8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb7e6d8;
  return param_1;
}



// FUNCTION 1460ecf9a FUN_1460ecf9a body=523 status=ok
// SIG undefined FUN_1460ecf9a(void)

void FUN_1460ecf9a(void)

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
  if (DAT_14cb7e718 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb7e718,0,0,4);
  }
  uVar3 = DAT_14cb7e720;
  uVar2 = local_50;
  if (DAT_14cb7e720 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb7e710,0,DAT_14cb7e720,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb7e718;
        if (DAT_14cb7e718 == (undefined *)0x0) {
          puVar6 = &DAT_14cb7e710;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb7e720 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb7e6e8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb7e700 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb7e6d8;
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
                (longlong)(int)DAT_14cb7e720 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb7e718;
        if (DAT_14cb7e718 == (undefined *)0x0) {
          puVar6 = &DAT_14cb7e710;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb7e720 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb7e718;
        if (DAT_14cb7e718 == (undefined *)0x0) {
          puVar6 = &DAT_14cb7e710;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb7e720 - 1U) * 4) = iVar4;
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



// FUNCTION 1460ed1a6 FUN_1460ed1a6 body=507 status=ok
// SIG undefined FUN_1460ed1a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ed1a6(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb7fc40 = 0;
  FUN_1446ddc76(&DAT_14cb7fc44,"input_action",1);
  _DAT_14cb7fc50 = 0;
  _DAT_14cb7fc58 = 0;
  _DAT_14cb7fc60 = 0;
  DAT_14cb7fc68 = (void *)0x0;
  _DAT_14cb7fc70 = 0;
  _DAT_14cb7fc78 = FUN_148887788;
  DAT_14cb7fc80 = *param_1;
  DAT_14cb7fc90 = param_1[2];
  param_1[2] = 0;
  DAT_14cb7fca0._0_4_ = (undefined4)param_1[4];
  DAT_14cb7fca0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb7fca8 = (undefined4)param_1[5];
  uRam000000014cb7fcac = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb7fcb0 = (undefined4)param_1[6];
  uRam000000014cb7fcb4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb7fcb8 = (undefined4)param_1[7];
  uRam000000014cb7fcbc = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb7fc80 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb7fc50 = 0;
  _DAT_14cb7fc58 = local_68;
  _DAT_14cb7fc60 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb7fc70 = CONCAT44(DAT_14cb7fc74,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb7fc74 == 0) {
    _DAT_14cb7fc70 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb7fc68,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb7fc68,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb7fc40) && ((DAT_14cb7fbd0 == (int *)0x0 || (*DAT_14cb7fbd0 < DAT_14cb7fc40)))) {
    DAT_14cb7fbd0 = &DAT_14cb7fc40;
  }
  FUN_1460ed3a2();
  local_30 = &local_70;
  local_70 = &DAT_14cb7fc40;
  local_38 = &DAT_14cb7fc44;
  FUN_1460ed43c(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460ed3a2 FUN_1460ed3a2 body=153 status=ok
// SIG undefined FUN_1460ed3a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ed3a2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb7fc28) {
    FUN_144b3d300(&DAT_14cb7fc28);
    if (DAT_14cb7fc28 == -1) {
      DAT_14cb7fbf8 = 0;
      DAT_14cb7fc00 = 0;
      DAT_14cb7fbd8 = 0;
      _DAT_14cb7fbe0 = 0;
      _DAT_14cb7fc04 = 0xffffffff00000080;
      DAT_14cb7fc0c = 0;
      DAT_14cb7fc18 = 0;
      DAT_14cb7fc20 = 0;
      atexit(FUN_143d713e4);
      _Init_thread_footer(&DAT_14cb7fc28);
      return;
    }
  }
  return;
}



// FUNCTION 1460ed43c FUN_1460ed43c body=338 status=ok
// SIG undefined FUN_1460ed43c(void)

undefined4 * FUN_1460ed43c(undefined4 *param_1,undefined8 *param_2)

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
  FUN_1460ed622(local_40);
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
  cVar5 = FUN_1460ed590(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb7fbe0 - DAT_14cb7fc0c;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb7fc20)) {
      uVar10 = DAT_14cb7fc20 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb7fc18;
      if (DAT_14cb7fc18 == (undefined *)0x0) {
        puVar7 = &DAT_14cb7fc10;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb7fc20 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb7fc18;
      if (DAT_14cb7fc18 == (undefined *)0x0) {
        puVar7 = &DAT_14cb7fc10;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb7fc20 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb7fc20 = iVar9;
      FUN_1460ed730();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460ed590 FUN_1460ed590 body=145 status=ok
// SIG undefined FUN_1460ed590(void)

undefined8 FUN_1460ed590(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb7fbe0 - DAT_14cb7fc0c != 1) && (DAT_14cb7fbe0 != DAT_14cb7fc0c)) {
    puVar6 = &DAT_14cb7fc10;
    if (DAT_14cb7fc18 != (undefined *)0x0) {
      puVar6 = DAT_14cb7fc18;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb7fc20 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb7fbd8 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d95e88(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460ed622 FUN_1460ed622 body=270 status=ok
// SIG undefined FUN_1460ed622(void)

int * FUN_1460ed622(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb7fc08;
  iVar3 = DAT_14cb7fbe0;
  if (DAT_14cb7fc0c == 0) {
    iVar2 = DAT_14cb7fbe0 + 1;
    bVar7 = DAT_14cb7fbe4 == DAT_14cb7fbe0;
    DAT_14cb7fbe0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb7fbd8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb7fbe8,1);
    puVar4 = DAT_14cb7fbf8;
    if (DAT_14cb7fbf8 == (undefined *)0x0) {
      puVar4 = &DAT_14cb7fbe8;
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
    lVar6 = (longlong)DAT_14cb7fc08;
    DAT_14cb7fc08 = *(int *)(DAT_14cb7fbd8 + 4 + lVar6 * 0x18);
    DAT_14cb7fc0c = DAT_14cb7fc0c + -1;
    if (DAT_14cb7fc0c != 0) {
      *(undefined4 *)(DAT_14cb7fbd8 + (longlong)DAT_14cb7fc08 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb7fbe8;
  if (DAT_14cb7fbf8 != (undefined *)0x0) {
    puVar4 = DAT_14cb7fbf8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb7fbd8;
  return param_1;
}



// FUNCTION 1460ed730 FUN_1460ed730 body=523 status=ok
// SIG undefined FUN_1460ed730(void)

void FUN_1460ed730(void)

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
  if (DAT_14cb7fc18 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb7fc18,0,0,4);
  }
  uVar3 = DAT_14cb7fc20;
  uVar2 = local_50;
  if (DAT_14cb7fc20 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb7fc10,0,DAT_14cb7fc20,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb7fc18;
        if (DAT_14cb7fc18 == (undefined *)0x0) {
          puVar6 = &DAT_14cb7fc10;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb7fc20 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb7fbe8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb7fc00 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb7fbd8;
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
                (longlong)(int)DAT_14cb7fc20 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb7fc18;
        if (DAT_14cb7fc18 == (undefined *)0x0) {
          puVar6 = &DAT_14cb7fc10;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb7fc20 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb7fc18;
        if (DAT_14cb7fc18 == (undefined *)0x0) {
          puVar6 = &DAT_14cb7fc10;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb7fc20 - 1U) * 4) = iVar4;
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



// FUNCTION 1460ed93c FUN_1460ed93c body=507 status=ok
// SIG undefined FUN_1460ed93c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ed93c(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb7fd30 = 0;
  FUN_1446ddc76(&DAT_14cb7fd34,"ability_condition_group",1);
  _DAT_14cb7fd40 = 0;
  _DAT_14cb7fd48 = 0;
  _DAT_14cb7fd50 = 0;
  DAT_14cb7fd58 = (void *)0x0;
  _DAT_14cb7fd60 = 0;
  _DAT_14cb7fd68 = FUN_148887dca;
  DAT_14cb7fd70 = *param_1;
  DAT_14cb7fd80 = param_1[2];
  param_1[2] = 0;
  DAT_14cb7fd90._0_4_ = (undefined4)param_1[4];
  DAT_14cb7fd90._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb7fd98 = (undefined4)param_1[5];
  uRam000000014cb7fd9c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb7fda0 = (undefined4)param_1[6];
  uRam000000014cb7fda4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb7fda8 = (undefined4)param_1[7];
  uRam000000014cb7fdac = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb7fd70 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb7fd40 = 0;
  _DAT_14cb7fd48 = local_68;
  _DAT_14cb7fd50 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb7fd60 = CONCAT44(DAT_14cb7fd64,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb7fd64 == 0) {
    _DAT_14cb7fd60 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb7fd58,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb7fd58,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb7fd30) && ((DAT_14cb7fcc0 == (int *)0x0 || (*DAT_14cb7fcc0 < DAT_14cb7fd30)))) {
    DAT_14cb7fcc0 = &DAT_14cb7fd30;
  }
  FUN_1460edb38();
  local_30 = &local_70;
  local_70 = &DAT_14cb7fd30;
  local_38 = &DAT_14cb7fd34;
  FUN_1460edbd2(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460edb38 FUN_1460edb38 body=153 status=ok
// SIG undefined FUN_1460edb38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460edb38(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb7fd18) {
    FUN_144b3d300(&DAT_14cb7fd18);
    if (DAT_14cb7fd18 == -1) {
      DAT_14cb7fce8 = 0;
      DAT_14cb7fcf0 = 0;
      DAT_14cb7fcc8 = 0;
      _DAT_14cb7fcd0 = 0;
      _DAT_14cb7fcf4 = 0xffffffff00000080;
      DAT_14cb7fcfc = 0;
      DAT_14cb7fd08 = 0;
      DAT_14cb7fd10 = 0;
      atexit(FUN_143d71412);
      _Init_thread_footer(&DAT_14cb7fd18);
      return;
    }
  }
  return;
}



// FUNCTION 1460edbd2 FUN_1460edbd2 body=338 status=ok
// SIG undefined FUN_1460edbd2(void)

undefined4 * FUN_1460edbd2(undefined4 *param_1,undefined8 *param_2)

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
  FUN_1460eddb8(local_40);
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
  cVar5 = FUN_1460edd26(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb7fcd0 - DAT_14cb7fcfc;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb7fd10)) {
      uVar10 = DAT_14cb7fd10 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb7fd08;
      if (DAT_14cb7fd08 == (undefined *)0x0) {
        puVar7 = &DAT_14cb7fd00;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb7fd10 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb7fd08;
      if (DAT_14cb7fd08 == (undefined *)0x0) {
        puVar7 = &DAT_14cb7fd00;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb7fd10 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb7fd10 = iVar9;
      FUN_1460edec6();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460edd26 FUN_1460edd26 body=145 status=ok
// SIG undefined FUN_1460edd26(void)

undefined8 FUN_1460edd26(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb7fcd0 - DAT_14cb7fcfc != 1) && (DAT_14cb7fcd0 != DAT_14cb7fcfc)) {
    puVar6 = &DAT_14cb7fd00;
    if (DAT_14cb7fd08 != (undefined *)0x0) {
      puVar6 = DAT_14cb7fd08;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb7fd10 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb7fcc8 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d96074(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460eddb8 FUN_1460eddb8 body=270 status=ok
// SIG undefined FUN_1460eddb8(void)

int * FUN_1460eddb8(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb7fcf8;
  iVar3 = DAT_14cb7fcd0;
  if (DAT_14cb7fcfc == 0) {
    iVar2 = DAT_14cb7fcd0 + 1;
    bVar7 = DAT_14cb7fcd4 == DAT_14cb7fcd0;
    DAT_14cb7fcd0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb7fcc8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb7fcd8,1);
    puVar4 = DAT_14cb7fce8;
    if (DAT_14cb7fce8 == (undefined *)0x0) {
      puVar4 = &DAT_14cb7fcd8;
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
    lVar6 = (longlong)DAT_14cb7fcf8;
    DAT_14cb7fcf8 = *(int *)(DAT_14cb7fcc8 + 4 + lVar6 * 0x18);
    DAT_14cb7fcfc = DAT_14cb7fcfc + -1;
    if (DAT_14cb7fcfc != 0) {
      *(undefined4 *)(DAT_14cb7fcc8 + (longlong)DAT_14cb7fcf8 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb7fcd8;
  if (DAT_14cb7fce8 != (undefined *)0x0) {
    puVar4 = DAT_14cb7fce8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb7fcc8;
  return param_1;
}



// FUNCTION 1460edec6 FUN_1460edec6 body=523 status=ok
// SIG undefined FUN_1460edec6(void)

void FUN_1460edec6(void)

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
  if (DAT_14cb7fd08 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb7fd08,0,0,4);
  }
  uVar3 = DAT_14cb7fd10;
  uVar2 = local_50;
  if (DAT_14cb7fd10 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb7fd00,0,DAT_14cb7fd10,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb7fd08;
        if (DAT_14cb7fd08 == (undefined *)0x0) {
          puVar6 = &DAT_14cb7fd00;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb7fd10 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb7fcd8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb7fcf0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb7fcc8;
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
                (longlong)(int)DAT_14cb7fd10 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb7fd08;
        if (DAT_14cb7fd08 == (undefined *)0x0) {
          puVar6 = &DAT_14cb7fd00;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb7fd10 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb7fd08;
        if (DAT_14cb7fd08 == (undefined *)0x0) {
          puVar6 = &DAT_14cb7fd00;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb7fd10 - 1U) * 4) = iVar4;
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



// FUNCTION 1460ee0d2 FUN_1460ee0d2 body=507 status=ok
// SIG undefined FUN_1460ee0d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ee0d2(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb7fe70 = 0;
  FUN_1446ddc76(&DAT_14cb7fe74,"input_context",1);
  _DAT_14cb7fe80 = 0;
  _DAT_14cb7fe88 = 0;
  _DAT_14cb7fe90 = 0;
  DAT_14cb7fe98 = (void *)0x0;
  _DAT_14cb7fea0 = 0;
  _DAT_14cb7fea8 = FUN_14888e1c4;
  DAT_14cb7feb0 = *param_1;
  DAT_14cb7fec0 = param_1[2];
  param_1[2] = 0;
  DAT_14cb7fed0._0_4_ = (undefined4)param_1[4];
  DAT_14cb7fed0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb7fed8 = (undefined4)param_1[5];
  uRam000000014cb7fedc = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb7fee0 = (undefined4)param_1[6];
  uRam000000014cb7fee4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb7fee8 = (undefined4)param_1[7];
  uRam000000014cb7feec = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb7feb0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb7fe80 = 0;
  _DAT_14cb7fe88 = local_68;
  _DAT_14cb7fe90 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb7fea0 = CONCAT44(DAT_14cb7fea4,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb7fea4 == 0) {
    _DAT_14cb7fea0 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb7fe98,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb7fe98,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb7fe70) && ((DAT_14cb7fdf8 == (int *)0x0 || (*DAT_14cb7fdf8 < DAT_14cb7fe70)))) {
    DAT_14cb7fdf8 = &DAT_14cb7fe70;
  }
  FUN_1460ee2ce();
  local_30 = &local_70;
  local_70 = &DAT_14cb7fe70;
  local_38 = &DAT_14cb7fe74;
  FUN_1460ee368(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460ee2ce FUN_1460ee2ce body=153 status=ok
// SIG undefined FUN_1460ee2ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ee2ce(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb7fe50) {
    FUN_144b3d300(&DAT_14cb7fe50);
    if (DAT_14cb7fe50 == -1) {
      DAT_14cb7fe20 = 0;
      DAT_14cb7fe28 = 0;
      DAT_14cb7fe00 = 0;
      _DAT_14cb7fe08 = 0;
      _DAT_14cb7fe2c = 0xffffffff00000080;
      DAT_14cb7fe34 = 0;
      DAT_14cb7fe40 = 0;
      DAT_14cb7fe48 = 0;
      atexit(FUN_143d71ad9);
      _Init_thread_footer(&DAT_14cb7fe50);
      return;
    }
  }
  return;
}



// FUNCTION 1460ee368 FUN_1460ee368 body=338 status=ok
// SIG undefined FUN_1460ee368(void)

undefined4 * FUN_1460ee368(undefined4 *param_1,undefined8 *param_2)

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
  FUN_1460ee54e(local_40);
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
  cVar5 = FUN_1460ee4bc(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb7fe08 - DAT_14cb7fe34;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb7fe48)) {
      uVar10 = DAT_14cb7fe48 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb7fe40;
      if (DAT_14cb7fe40 == (undefined *)0x0) {
        puVar7 = &DAT_14cb7fe38;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb7fe48 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb7fe40;
      if (DAT_14cb7fe40 == (undefined *)0x0) {
        puVar7 = &DAT_14cb7fe38;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb7fe48 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb7fe48 = iVar9;
      FUN_1460ee65c();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460ee4bc FUN_1460ee4bc body=145 status=ok
// SIG undefined FUN_1460ee4bc(void)

undefined8 FUN_1460ee4bc(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb7fe08 - DAT_14cb7fe34 != 1) && (DAT_14cb7fe08 != DAT_14cb7fe34)) {
    puVar6 = &DAT_14cb7fe38;
    if (DAT_14cb7fe40 != (undefined *)0x0) {
      puVar6 = DAT_14cb7fe40;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb7fe48 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb7fe00 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d96260(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460ee54e FUN_1460ee54e body=270 status=ok
// SIG undefined FUN_1460ee54e(void)

int * FUN_1460ee54e(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb7fe30;
  iVar3 = DAT_14cb7fe08;
  if (DAT_14cb7fe34 == 0) {
    iVar2 = DAT_14cb7fe08 + 1;
    bVar7 = DAT_14cb7fe0c == DAT_14cb7fe08;
    DAT_14cb7fe08 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb7fe00,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb7fe10,1);
    puVar4 = DAT_14cb7fe20;
    if (DAT_14cb7fe20 == (undefined *)0x0) {
      puVar4 = &DAT_14cb7fe10;
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
    lVar6 = (longlong)DAT_14cb7fe30;
    DAT_14cb7fe30 = *(int *)(DAT_14cb7fe00 + 4 + lVar6 * 0x18);
    DAT_14cb7fe34 = DAT_14cb7fe34 + -1;
    if (DAT_14cb7fe34 != 0) {
      *(undefined4 *)(DAT_14cb7fe00 + (longlong)DAT_14cb7fe30 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb7fe10;
  if (DAT_14cb7fe20 != (undefined *)0x0) {
    puVar4 = DAT_14cb7fe20;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb7fe00;
  return param_1;
}



// FUNCTION 1460ee65c FUN_1460ee65c body=523 status=ok
// SIG undefined FUN_1460ee65c(void)

void FUN_1460ee65c(void)

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
  if (DAT_14cb7fe40 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb7fe40,0,0,4);
  }
  uVar3 = DAT_14cb7fe48;
  uVar2 = local_50;
  if (DAT_14cb7fe48 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb7fe38,0,DAT_14cb7fe48,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb7fe40;
        if (DAT_14cb7fe40 == (undefined *)0x0) {
          puVar6 = &DAT_14cb7fe38;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb7fe48 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb7fe10;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb7fe28 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb7fe00;
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
                (longlong)(int)DAT_14cb7fe48 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb7fe40;
        if (DAT_14cb7fe40 == (undefined *)0x0) {
          puVar6 = &DAT_14cb7fe38;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb7fe48 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb7fe40;
        if (DAT_14cb7fe40 == (undefined *)0x0) {
          puVar6 = &DAT_14cb7fe38;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb7fe48 - 1U) * 4) = iVar4;
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



// FUNCTION 1460ee868 FUN_1460ee868 body=507 status=ok
// SIG undefined FUN_1460ee868(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ee868(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb800f0 = 0;
  FUN_1446ddc76(&DAT_14cb800f4,"rebind_key",1);
  _DAT_14cb80100 = 0;
  _DAT_14cb80108 = 0;
  _DAT_14cb80110 = 0;
  DAT_14cb80118 = (void *)0x0;
  _DAT_14cb80120 = 0;
  _DAT_14cb80128 = FUN_14888eaf2;
  DAT_14cb80130 = *param_1;
  DAT_14cb80140 = param_1[2];
  param_1[2] = 0;
  DAT_14cb80150._0_4_ = (undefined4)param_1[4];
  DAT_14cb80150._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb80158 = (undefined4)param_1[5];
  uRam000000014cb8015c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb80160 = (undefined4)param_1[6];
  uRam000000014cb80164 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb80168 = (undefined4)param_1[7];
  uRam000000014cb8016c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb80130 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb80100 = 0;
  _DAT_14cb80108 = local_68;
  _DAT_14cb80110 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb80120 = CONCAT44(DAT_14cb80124,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb80124 == 0) {
    _DAT_14cb80120 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb80118,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb80118,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb800f0) && ((DAT_14cb80078 == (int *)0x0 || (*DAT_14cb80078 < DAT_14cb800f0)))) {
    DAT_14cb80078 = &DAT_14cb800f0;
  }
  FUN_1460eea64();
  local_30 = &local_70;
  local_70 = &DAT_14cb800f0;
  local_38 = &DAT_14cb800f4;
  FUN_1460eeafe(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460eea64 FUN_1460eea64 body=153 status=ok
// SIG undefined FUN_1460eea64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460eea64(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb800d0) {
    FUN_144b3d300(&DAT_14cb800d0);
    if (DAT_14cb800d0 == -1) {
      DAT_14cb800a0 = 0;
      DAT_14cb800a8 = 0;
      DAT_14cb80080 = 0;
      _DAT_14cb80088 = 0;
      _DAT_14cb800ac = 0xffffffff00000080;
      DAT_14cb800b4 = 0;
      DAT_14cb800c0 = 0;
      DAT_14cb800c8 = 0;
      atexit(FUN_143d71d65);
      _Init_thread_footer(&DAT_14cb800d0);
      return;
    }
  }
  return;
}



// FUNCTION 1460eeafe FUN_1460eeafe body=338 status=ok
// SIG undefined FUN_1460eeafe(void)

undefined4 * FUN_1460eeafe(undefined4 *param_1,undefined8 *param_2)

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
  FUN_1460eece4(local_40);
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
  cVar5 = FUN_1460eec52(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb80088 - DAT_14cb800b4;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb800c8)) {
      uVar10 = DAT_14cb800c8 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb800c0;
      if (DAT_14cb800c0 == (undefined *)0x0) {
        puVar7 = &DAT_14cb800b8;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb800c8 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb800c0;
      if (DAT_14cb800c0 == (undefined *)0x0) {
        puVar7 = &DAT_14cb800b8;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb800c8 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb800c8 = iVar9;
      FUN_1460eedf2();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460eec52 FUN_1460eec52 body=145 status=ok
// SIG undefined FUN_1460eec52(void)

undefined8 FUN_1460eec52(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb80088 - DAT_14cb800b4 != 1) && (DAT_14cb80088 != DAT_14cb800b4)) {
    puVar6 = &DAT_14cb800b8;
    if (DAT_14cb800c0 != (undefined *)0x0) {
      puVar6 = DAT_14cb800c0;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb800c8 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb80080 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9644c(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460eece4 FUN_1460eece4 body=270 status=ok
// SIG undefined FUN_1460eece4(void)

int * FUN_1460eece4(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb800b0;
  iVar3 = DAT_14cb80088;
  if (DAT_14cb800b4 == 0) {
    iVar2 = DAT_14cb80088 + 1;
    bVar7 = DAT_14cb8008c == DAT_14cb80088;
    DAT_14cb80088 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb80080,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb80090,1);
    puVar4 = DAT_14cb800a0;
    if (DAT_14cb800a0 == (undefined *)0x0) {
      puVar4 = &DAT_14cb80090;
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
    lVar6 = (longlong)DAT_14cb800b0;
    DAT_14cb800b0 = *(int *)(DAT_14cb80080 + 4 + lVar6 * 0x18);
    DAT_14cb800b4 = DAT_14cb800b4 + -1;
    if (DAT_14cb800b4 != 0) {
      *(undefined4 *)(DAT_14cb80080 + (longlong)DAT_14cb800b0 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb80090;
  if (DAT_14cb800a0 != (undefined *)0x0) {
    puVar4 = DAT_14cb800a0;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb80080;
  return param_1;
}



// FUNCTION 1460eedf2 FUN_1460eedf2 body=523 status=ok
// SIG undefined FUN_1460eedf2(void)

void FUN_1460eedf2(void)

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
  if (DAT_14cb800c0 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb800c0,0,0,4);
  }
  uVar3 = DAT_14cb800c8;
  uVar2 = local_50;
  if (DAT_14cb800c8 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb800b8,0,DAT_14cb800c8,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb800c0;
        if (DAT_14cb800c0 == (undefined *)0x0) {
          puVar6 = &DAT_14cb800b8;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb800c8 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb80090;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb800a8 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb80080;
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
                (longlong)(int)DAT_14cb800c8 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb800c0;
        if (DAT_14cb800c0 == (undefined *)0x0) {
          puVar6 = &DAT_14cb800b8;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb800c8 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb800c0;
        if (DAT_14cb800c0 == (undefined *)0x0) {
          puVar6 = &DAT_14cb800b8;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb800c8 - 1U) * 4) = iVar4;
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



// FUNCTION 1460eeffe FUN_1460eeffe body=507 status=ok
// SIG undefined FUN_1460eeffe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460eeffe(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb80240 = 0;
  FUN_1446ddc76(&DAT_14cb80244,"rebind_cont",1);
  _DAT_14cb80250 = 0;
  _DAT_14cb80258 = 0;
  _DAT_14cb80260 = 0;
  DAT_14cb80268 = (void *)0x0;
  _DAT_14cb80270 = 0;
  _DAT_14cb80278 = FUN_14888f45a;
  DAT_14cb80280 = *param_1;
  DAT_14cb80290 = param_1[2];
  param_1[2] = 0;
  DAT_14cb802a0._0_4_ = (undefined4)param_1[4];
  DAT_14cb802a0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb802a8 = (undefined4)param_1[5];
  uRam000000014cb802ac = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb802b0 = (undefined4)param_1[6];
  uRam000000014cb802b4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb802b8 = (undefined4)param_1[7];
  uRam000000014cb802bc = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb80280 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb80250 = 0;
  _DAT_14cb80258 = local_68;
  _DAT_14cb80260 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb80270 = CONCAT44(DAT_14cb80274,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb80274 == 0) {
    _DAT_14cb80270 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb80268,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb80268,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb80240) && ((DAT_14cb801d0 == (int *)0x0 || (*DAT_14cb801d0 < DAT_14cb80240)))) {
    DAT_14cb801d0 = &DAT_14cb80240;
  }
  FUN_1460ef1fa();
  local_30 = &local_70;
  local_70 = &DAT_14cb80240;
  local_38 = &DAT_14cb80244;
  FUN_1460ef294(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460ef1fa FUN_1460ef1fa body=153 status=ok
// SIG undefined FUN_1460ef1fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ef1fa(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb80228) {
    FUN_144b3d300(&DAT_14cb80228);
    if (DAT_14cb80228 == -1) {
      DAT_14cb801f8 = 0;
      DAT_14cb80200 = 0;
      DAT_14cb801d8 = 0;
      _DAT_14cb801e0 = 0;
      _DAT_14cb80204 = 0xffffffff00000080;
      DAT_14cb8020c = 0;
      DAT_14cb80218 = 0;
      DAT_14cb80220 = 0;
      atexit(FUN_143d71db5);
      _Init_thread_footer(&DAT_14cb80228);
      return;
    }
  }
  return;
}



// FUNCTION 1460ef294 FUN_1460ef294 body=338 status=ok
// SIG undefined FUN_1460ef294(void)

undefined4 * FUN_1460ef294(undefined4 *param_1,undefined8 *param_2)

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
  FUN_1460ef47a(local_40);
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
  cVar5 = FUN_1460ef3e8(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb801e0 - DAT_14cb8020c;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb80220)) {
      uVar10 = DAT_14cb80220 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb80218;
      if (DAT_14cb80218 == (undefined *)0x0) {
        puVar7 = &DAT_14cb80210;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb80220 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb80218;
      if (DAT_14cb80218 == (undefined *)0x0) {
        puVar7 = &DAT_14cb80210;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb80220 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb80220 = iVar9;
      FUN_1460ef588();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460ef3e8 FUN_1460ef3e8 body=145 status=ok
// SIG undefined FUN_1460ef3e8(void)

undefined8 FUN_1460ef3e8(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb801e0 - DAT_14cb8020c != 1) && (DAT_14cb801e0 != DAT_14cb8020c)) {
    puVar6 = &DAT_14cb80210;
    if (DAT_14cb80218 != (undefined *)0x0) {
      puVar6 = DAT_14cb80218;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb80220 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb801d8 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d96638(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460ef47a FUN_1460ef47a body=270 status=ok
// SIG undefined FUN_1460ef47a(void)

int * FUN_1460ef47a(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb80208;
  iVar3 = DAT_14cb801e0;
  if (DAT_14cb8020c == 0) {
    iVar2 = DAT_14cb801e0 + 1;
    bVar7 = DAT_14cb801e4 == DAT_14cb801e0;
    DAT_14cb801e0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb801d8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb801e8,1);
    puVar4 = DAT_14cb801f8;
    if (DAT_14cb801f8 == (undefined *)0x0) {
      puVar4 = &DAT_14cb801e8;
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
    lVar6 = (longlong)DAT_14cb80208;
    DAT_14cb80208 = *(int *)(DAT_14cb801d8 + 4 + lVar6 * 0x18);
    DAT_14cb8020c = DAT_14cb8020c + -1;
    if (DAT_14cb8020c != 0) {
      *(undefined4 *)(DAT_14cb801d8 + (longlong)DAT_14cb80208 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb801e8;
  if (DAT_14cb801f8 != (undefined *)0x0) {
    puVar4 = DAT_14cb801f8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb801d8;
  return param_1;
}



// FUNCTION 1460ef588 FUN_1460ef588 body=523 status=ok
// SIG undefined FUN_1460ef588(void)

void FUN_1460ef588(void)

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
  if (DAT_14cb80218 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb80218,0,0,4);
  }
  uVar3 = DAT_14cb80220;
  uVar2 = local_50;
  if (DAT_14cb80220 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb80210,0,DAT_14cb80220,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb80218;
        if (DAT_14cb80218 == (undefined *)0x0) {
          puVar6 = &DAT_14cb80210;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb80220 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb801e8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb80200 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb801d8;
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
                (longlong)(int)DAT_14cb80220 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb80218;
        if (DAT_14cb80218 == (undefined *)0x0) {
          puVar6 = &DAT_14cb80210;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb80220 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb80218;
        if (DAT_14cb80218 == (undefined *)0x0) {
          puVar6 = &DAT_14cb80210;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb80220 - 1U) * 4) = iVar4;
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



// FUNCTION 1460ef794 FUN_1460ef794 body=507 status=ok
// SIG undefined FUN_1460ef794(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ef794(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb80330 = 0;
  FUN_1446ddc76(&DAT_14cb80334,"input_schema",1);
  _DAT_14cb80340 = 0;
  _DAT_14cb80348 = 0;
  _DAT_14cb80350 = 0;
  DAT_14cb80358 = (void *)0x0;
  _DAT_14cb80360 = 0;
  _DAT_14cb80368 = FUN_148890144;
  DAT_14cb80370 = *param_1;
  DAT_14cb80380 = param_1[2];
  param_1[2] = 0;
  DAT_14cb80390._0_4_ = (undefined4)param_1[4];
  DAT_14cb80390._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb80398 = (undefined4)param_1[5];
  uRam000000014cb8039c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb803a0 = (undefined4)param_1[6];
  uRam000000014cb803a4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb803a8 = (undefined4)param_1[7];
  uRam000000014cb803ac = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb80370 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb80340 = 0;
  _DAT_14cb80348 = local_68;
  _DAT_14cb80350 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb80360 = CONCAT44(DAT_14cb80364,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb80364 == 0) {
    _DAT_14cb80360 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb80358,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb80358,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb80330) && ((DAT_14cb802c0 == (int *)0x0 || (*DAT_14cb802c0 < DAT_14cb80330)))) {
    DAT_14cb802c0 = &DAT_14cb80330;
  }
  FUN_1460ef990();
  local_30 = &local_70;
  local_70 = &DAT_14cb80330;
  local_38 = &DAT_14cb80334;
  FUN_1460efa2a(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460ef990 FUN_1460ef990 body=153 status=ok
// SIG undefined FUN_1460ef990(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ef990(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb80318) {
    FUN_144b3d300(&DAT_14cb80318);
    if (DAT_14cb80318 == -1) {
      DAT_14cb802e8 = 0;
      DAT_14cb802f0 = 0;
      DAT_14cb802c8 = 0;
      _DAT_14cb802d0 = 0;
      _DAT_14cb802f4 = 0xffffffff00000080;
      DAT_14cb802fc = 0;
      DAT_14cb80308 = 0;
      DAT_14cb80310 = 0;
      atexit(FUN_143d723df);
      _Init_thread_footer(&DAT_14cb80318);
      return;
    }
  }
  return;
}



// FUNCTION 1460efa2a FUN_1460efa2a body=338 status=ok
// SIG undefined FUN_1460efa2a(void)

undefined4 * FUN_1460efa2a(undefined4 *param_1,undefined8 *param_2)

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
  FUN_1460efc10(local_40);
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
  cVar5 = FUN_1460efb7e(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb802d0 - DAT_14cb802fc;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb80310)) {
      uVar10 = DAT_14cb80310 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb80308;
      if (DAT_14cb80308 == (undefined *)0x0) {
        puVar7 = &DAT_14cb80300;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb80310 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb80308;
      if (DAT_14cb80308 == (undefined *)0x0) {
        puVar7 = &DAT_14cb80300;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb80310 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb80310 = iVar9;
      FUN_1460efd1e();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460efb7e FUN_1460efb7e body=145 status=ok
// SIG undefined FUN_1460efb7e(void)

undefined8 FUN_1460efb7e(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb802d0 - DAT_14cb802fc != 1) && (DAT_14cb802d0 != DAT_14cb802fc)) {
    puVar6 = &DAT_14cb80300;
    if (DAT_14cb80308 != (undefined *)0x0) {
      puVar6 = DAT_14cb80308;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb80310 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb802c8 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d96824(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460efc10 FUN_1460efc10 body=270 status=ok
// SIG undefined FUN_1460efc10(void)

int * FUN_1460efc10(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb802f8;
  iVar3 = DAT_14cb802d0;
  if (DAT_14cb802fc == 0) {
    iVar2 = DAT_14cb802d0 + 1;
    bVar7 = DAT_14cb802d4 == DAT_14cb802d0;
    DAT_14cb802d0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb802c8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb802d8,1);
    puVar4 = DAT_14cb802e8;
    if (DAT_14cb802e8 == (undefined *)0x0) {
      puVar4 = &DAT_14cb802d8;
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
    lVar6 = (longlong)DAT_14cb802f8;
    DAT_14cb802f8 = *(int *)(DAT_14cb802c8 + 4 + lVar6 * 0x18);
    DAT_14cb802fc = DAT_14cb802fc + -1;
    if (DAT_14cb802fc != 0) {
      *(undefined4 *)(DAT_14cb802c8 + (longlong)DAT_14cb802f8 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb802d8;
  if (DAT_14cb802e8 != (undefined *)0x0) {
    puVar4 = DAT_14cb802e8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb802c8;
  return param_1;
}



// FUNCTION 1460efd1e FUN_1460efd1e body=523 status=ok
// SIG undefined FUN_1460efd1e(void)

void FUN_1460efd1e(void)

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
  if (DAT_14cb80308 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb80308,0,0,4);
  }
  uVar3 = DAT_14cb80310;
  uVar2 = local_50;
  if (DAT_14cb80310 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb80300,0,DAT_14cb80310,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb80308;
        if (DAT_14cb80308 == (undefined *)0x0) {
          puVar6 = &DAT_14cb80300;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb80310 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb802d8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb802f0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb802c8;
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
                (longlong)(int)DAT_14cb80310 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb80308;
        if (DAT_14cb80308 == (undefined *)0x0) {
          puVar6 = &DAT_14cb80300;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb80310 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb80308;
        if (DAT_14cb80308 == (undefined *)0x0) {
          puVar6 = &DAT_14cb80300;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb80310 - 1U) * 4) = iVar4;
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



// FUNCTION 1460eff2a FUN_1460eff2a body=507 status=ok
// SIG undefined FUN_1460eff2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460eff2a(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb81110 = 0;
  FUN_1446ddc76(&DAT_14cb81114,"Gimme",1);
  _DAT_14cb81120 = 0;
  _DAT_14cb81128 = 0;
  _DAT_14cb81130 = 0;
  DAT_14cb81138 = (void *)0x0;
  _DAT_14cb81140 = 0;
  _DAT_14cb81148 = FUN_1488b75e2;
  DAT_14cb81150 = *param_1;
  DAT_14cb81160 = param_1[2];
  param_1[2] = 0;
  DAT_14cb81170._0_4_ = (undefined4)param_1[4];
  DAT_14cb81170._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb81178 = (undefined4)param_1[5];
  uRam000000014cb8117c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb81180 = (undefined4)param_1[6];
  uRam000000014cb81184 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb81188 = (undefined4)param_1[7];
  uRam000000014cb8118c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb81150 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb81120 = 0;
  _DAT_14cb81128 = local_68;
  _DAT_14cb81130 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb81140 = CONCAT44(DAT_14cb81144,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb81144 == 0) {
    _DAT_14cb81140 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb81138,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb81138,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb81110) && ((DAT_14cb810a0 == (int *)0x0 || (*DAT_14cb810a0 < DAT_14cb81110)))) {
    DAT_14cb810a0 = &DAT_14cb81110;
  }
  FUN_1460f0126();
  local_30 = &local_70;
  local_70 = &DAT_14cb81110;
  local_38 = &DAT_14cb81114;
  FUN_1460f01c0(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460f0126 FUN_1460f0126 body=153 status=ok
// SIG undefined FUN_1460f0126(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460f0126(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb810f8) {
    FUN_144b3d300(&DAT_14cb810f8);
    if (DAT_14cb810f8 == -1) {
      DAT_14cb810c8 = 0;
      DAT_14cb810d0 = 0;
      DAT_14cb810a8 = 0;
      _DAT_14cb810b0 = 0;
      _DAT_14cb810d4 = 0xffffffff00000080;
      DAT_14cb810dc = 0;
      DAT_14cb810e8 = 0;
      DAT_14cb810f0 = 0;
      atexit(FUN_143d8fda0);
      _Init_thread_footer(&DAT_14cb810f8);
      return;
    }
  }
  return;
}



// FUNCTION 1460f01c0 FUN_1460f01c0 body=338 status=ok
// SIG undefined FUN_1460f01c0(void)

undefined4 * FUN_1460f01c0(undefined4 *param_1,undefined8 *param_2)

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
  FUN_1460f03a6(local_40);
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
  cVar5 = FUN_1460f0314(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb810b0 - DAT_14cb810dc;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb810f0)) {
      uVar10 = DAT_14cb810f0 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb810e8;
      if (DAT_14cb810e8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb810e0;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb810f0 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb810e8;
      if (DAT_14cb810e8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb810e0;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb810f0 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb810f0 = iVar9;
      FUN_1460f04b4();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460f0314 FUN_1460f0314 body=145 status=ok
// SIG undefined FUN_1460f0314(void)

undefined8 FUN_1460f0314(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb810b0 - DAT_14cb810dc != 1) && (DAT_14cb810b0 != DAT_14cb810dc)) {
    puVar6 = &DAT_14cb810e0;
    if (DAT_14cb810e8 != (undefined *)0x0) {
      puVar6 = DAT_14cb810e8;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb810f0 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb810a8 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d96a10(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460f03a6 FUN_1460f03a6 body=270 status=ok
// SIG undefined FUN_1460f03a6(void)

int * FUN_1460f03a6(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb810d8;
  iVar3 = DAT_14cb810b0;
  if (DAT_14cb810dc == 0) {
    iVar2 = DAT_14cb810b0 + 1;
    bVar7 = DAT_14cb810b4 == DAT_14cb810b0;
    DAT_14cb810b0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb810a8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb810b8,1);
    puVar4 = DAT_14cb810c8;
    if (DAT_14cb810c8 == (undefined *)0x0) {
      puVar4 = &DAT_14cb810b8;
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
    lVar6 = (longlong)DAT_14cb810d8;
    DAT_14cb810d8 = *(int *)(DAT_14cb810a8 + 4 + lVar6 * 0x18);
    DAT_14cb810dc = DAT_14cb810dc + -1;
    if (DAT_14cb810dc != 0) {
      *(undefined4 *)(DAT_14cb810a8 + (longlong)DAT_14cb810d8 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb810b8;
  if (DAT_14cb810c8 != (undefined *)0x0) {
    puVar4 = DAT_14cb810c8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb810a8;
  return param_1;
}



// FUNCTION 1460f04b4 FUN_1460f04b4 body=523 status=ok
// SIG undefined FUN_1460f04b4(void)

void FUN_1460f04b4(void)

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
  if (DAT_14cb810e8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb810e8,0,0,4);
  }
  uVar3 = DAT_14cb810f0;
  uVar2 = local_50;
  if (DAT_14cb810f0 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb810e0,0,DAT_14cb810f0,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb810e8;
        if (DAT_14cb810e8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb810e0;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb810f0 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb810b8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb810d0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb810a8;
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
                (longlong)(int)DAT_14cb810f0 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb810e8;
        if (DAT_14cb810e8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb810e0;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb810f0 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb810e8;
        if (DAT_14cb810e8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb810e0;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb810f0 - 1U) * 4) = iVar4;
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



// FUNCTION 1460f06c0 FUN_1460f06c0 body=507 status=ok
// SIG undefined FUN_1460f06c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460f06c0(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb81200 = 0;
  FUN_1446ddc76(&DAT_14cb81204,"GimmeSet",1);
  _DAT_14cb81210 = 0;
  _DAT_14cb81218 = 0;
  _DAT_14cb81220 = 0;
  DAT_14cb81228 = (void *)0x0;
  _DAT_14cb81230 = 0;
  _DAT_14cb81238 = FUN_1488b7790;
  DAT_14cb81240 = *param_1;
  DAT_14cb81250 = param_1[2];
  param_1[2] = 0;
  DAT_14cb81260._0_4_ = (undefined4)param_1[4];
  DAT_14cb81260._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb81268 = (undefined4)param_1[5];
  uRam000000014cb8126c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb81270 = (undefined4)param_1[6];
  uRam000000014cb81274 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb81278 = (undefined4)param_1[7];
  uRam000000014cb8127c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb81240 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb81210 = 0;
  _DAT_14cb81218 = local_68;
  _DAT_14cb81220 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb81230 = CONCAT44(DAT_14cb81234,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb81234 == 0) {
    _DAT_14cb81230 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb81228,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb81228,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb81200) && ((DAT_14cb81190 == (int *)0x0 || (*DAT_14cb81190 < DAT_14cb81200)))) {
    DAT_14cb81190 = &DAT_14cb81200;
  }
  FUN_1460f08bc();
  local_30 = &local_70;
  local_70 = &DAT_14cb81200;
  local_38 = &DAT_14cb81204;
  FUN_1460f0956(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460f08bc FUN_1460f08bc body=153 status=ok
// SIG undefined FUN_1460f08bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460f08bc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb811e8) {
    FUN_144b3d300(&DAT_14cb811e8);
    if (DAT_14cb811e8 == -1) {
      DAT_14cb811b8 = 0;
      DAT_14cb811c0 = 0;
      DAT_14cb81198 = 0;
      _DAT_14cb811a0 = 0;
      _DAT_14cb811c4 = 0xffffffff00000080;
      DAT_14cb811cc = 0;
      DAT_14cb811d8 = 0;
      DAT_14cb811e0 = 0;
      atexit(FUN_143d8fdce);
      _Init_thread_footer(&DAT_14cb811e8);
      return;
    }
  }
  return;
}



// FUNCTION 1460f0956 FUN_1460f0956 body=338 status=ok
// SIG undefined FUN_1460f0956(void)

undefined4 * FUN_1460f0956(undefined4 *param_1,undefined8 *param_2)

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
  FUN_1460f0b3c(local_40);
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
  cVar5 = FUN_1460f0aaa(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb811a0 - DAT_14cb811cc;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb811e0)) {
      uVar10 = DAT_14cb811e0 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb811d8;
      if (DAT_14cb811d8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb811d0;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb811e0 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb811d8;
      if (DAT_14cb811d8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb811d0;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb811e0 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb811e0 = iVar9;
      FUN_1460f0c4a();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460f0aaa FUN_1460f0aaa body=145 status=ok
// SIG undefined FUN_1460f0aaa(void)

undefined8 FUN_1460f0aaa(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb811a0 - DAT_14cb811cc != 1) && (DAT_14cb811a0 != DAT_14cb811cc)) {
    puVar6 = &DAT_14cb811d0;
    if (DAT_14cb811d8 != (undefined *)0x0) {
      puVar6 = DAT_14cb811d8;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb811e0 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb81198 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d96bfc(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460f0b3c FUN_1460f0b3c body=270 status=ok
// SIG undefined FUN_1460f0b3c(void)

int * FUN_1460f0b3c(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb811c8;
  iVar3 = DAT_14cb811a0;
  if (DAT_14cb811cc == 0) {
    iVar2 = DAT_14cb811a0 + 1;
    bVar7 = DAT_14cb811a4 == DAT_14cb811a0;
    DAT_14cb811a0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb81198,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb811a8,1);
    puVar4 = DAT_14cb811b8;
    if (DAT_14cb811b8 == (undefined *)0x0) {
      puVar4 = &DAT_14cb811a8;
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
    lVar6 = (longlong)DAT_14cb811c8;
    DAT_14cb811c8 = *(int *)(DAT_14cb81198 + 4 + lVar6 * 0x18);
    DAT_14cb811cc = DAT_14cb811cc + -1;
    if (DAT_14cb811cc != 0) {
      *(undefined4 *)(DAT_14cb81198 + (longlong)DAT_14cb811c8 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb811a8;
  if (DAT_14cb811b8 != (undefined *)0x0) {
    puVar4 = DAT_14cb811b8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb81198;
  return param_1;
}



// FUNCTION 1460f0c4a FUN_1460f0c4a body=523 status=ok
// SIG undefined FUN_1460f0c4a(void)

void FUN_1460f0c4a(void)

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
  if (DAT_14cb811d8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb811d8,0,0,4);
  }
  uVar3 = DAT_14cb811e0;
  uVar2 = local_50;
  if (DAT_14cb811e0 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb811d0,0,DAT_14cb811e0,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb811d8;
        if (DAT_14cb811d8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb811d0;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb811e0 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb811a8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb811c0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb81198;
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
                (longlong)(int)DAT_14cb811e0 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb811d8;
        if (DAT_14cb811d8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb811d0;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb811e0 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb811d8;
        if (DAT_14cb811d8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb811d0;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb811e0 - 1U) * 4) = iVar4;
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



// FUNCTION 1460f0e56 FUN_1460f0e56 body=507 status=ok
// SIG undefined FUN_1460f0e56(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460f0e56(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb81360 = 0;
  FUN_1446ddc76(&DAT_14cb81364,"GlobalMissions",1);
  _DAT_14cb81370 = 0;
  _DAT_14cb81378 = 0;
  _DAT_14cb81380 = 0;
  DAT_14cb81388 = (void *)0x0;
  _DAT_14cb81390 = 0;
  _DAT_14cb81398 = FUN_1488b7c2a;
  DAT_14cb813a0 = *param_1;
  DAT_14cb813b0 = param_1[2];
  param_1[2] = 0;
  DAT_14cb813c0._0_4_ = (undefined4)param_1[4];
  DAT_14cb813c0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb813c8 = (undefined4)param_1[5];
  uRam000000014cb813cc = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb813d0 = (undefined4)param_1[6];
  uRam000000014cb813d4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb813d8 = (undefined4)param_1[7];
  uRam000000014cb813dc = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb813a0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb81370 = 0;
  _DAT_14cb81378 = local_68;
  _DAT_14cb81380 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb81390 = CONCAT44(DAT_14cb81394,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb81394 == 0) {
    _DAT_14cb81390 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb81388,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb81388,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb81360) && ((DAT_14cb812e8 == (int *)0x0 || (*DAT_14cb812e8 < DAT_14cb81360)))) {
    DAT_14cb812e8 = &DAT_14cb81360;
  }
  FUN_1460f1052();
  local_30 = &local_70;
  local_70 = &DAT_14cb81360;
  local_38 = &DAT_14cb81364;
  FUN_1460f10ec(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460f1052 FUN_1460f1052 body=153 status=ok
// SIG undefined FUN_1460f1052(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460f1052(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb81340) {
    FUN_144b3d300(&DAT_14cb81340);
    if (DAT_14cb81340 == -1) {
      DAT_14cb81310 = 0;
      DAT_14cb81318 = 0;
      DAT_14cb812f0 = 0;
      _DAT_14cb812f8 = 0;
      _DAT_14cb8131c = 0xffffffff00000080;
      DAT_14cb81324 = 0;
      DAT_14cb81330 = 0;
      DAT_14cb81338 = 0;
      atexit(FUN_143d8fe49);
      _Init_thread_footer(&DAT_14cb81340);
      return;
    }
  }
  return;
}



// FUNCTION 1460f10ec FUN_1460f10ec body=338 status=ok
// SIG undefined FUN_1460f10ec(void)

undefined4 * FUN_1460f10ec(undefined4 *param_1,undefined8 *param_2)

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
  FUN_1460f12d2(local_40);
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
  cVar5 = FUN_1460f1240(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb812f8 - DAT_14cb81324;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb81338)) {
      uVar10 = DAT_14cb81338 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb81330;
      if (DAT_14cb81330 == (undefined *)0x0) {
        puVar7 = &DAT_14cb81328;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb81338 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb81330;
      if (DAT_14cb81330 == (undefined *)0x0) {
        puVar7 = &DAT_14cb81328;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb81338 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb81338 = iVar9;
      FUN_1460f13e0();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460f1240 FUN_1460f1240 body=145 status=ok
// SIG undefined FUN_1460f1240(void)

undefined8 FUN_1460f1240(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb812f8 - DAT_14cb81324 != 1) && (DAT_14cb812f8 != DAT_14cb81324)) {
    puVar6 = &DAT_14cb81328;
    if (DAT_14cb81330 != (undefined *)0x0) {
      puVar6 = DAT_14cb81330;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb81338 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb812f0 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d96de8(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460f12d2 FUN_1460f12d2 body=270 status=ok
// SIG undefined FUN_1460f12d2(void)

int * FUN_1460f12d2(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb81320;
  iVar3 = DAT_14cb812f8;
  if (DAT_14cb81324 == 0) {
    iVar2 = DAT_14cb812f8 + 1;
    bVar7 = DAT_14cb812fc == DAT_14cb812f8;
    DAT_14cb812f8 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb812f0,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb81300,1);
    puVar4 = DAT_14cb81310;
    if (DAT_14cb81310 == (undefined *)0x0) {
      puVar4 = &DAT_14cb81300;
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
    lVar6 = (longlong)DAT_14cb81320;
    DAT_14cb81320 = *(int *)(DAT_14cb812f0 + 4 + lVar6 * 0x18);
    DAT_14cb81324 = DAT_14cb81324 + -1;
    if (DAT_14cb81324 != 0) {
      *(undefined4 *)(DAT_14cb812f0 + (longlong)DAT_14cb81320 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb81300;
  if (DAT_14cb81310 != (undefined *)0x0) {
    puVar4 = DAT_14cb81310;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb812f0;
  return param_1;
}



// FUNCTION 1460f13e0 FUN_1460f13e0 body=523 status=ok
// SIG undefined FUN_1460f13e0(void)

void FUN_1460f13e0(void)

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
  if (DAT_14cb81330 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb81330,0,0,4);
  }
  uVar3 = DAT_14cb81338;
  uVar2 = local_50;
  if (DAT_14cb81338 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb81328,0,DAT_14cb81338,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb81330;
        if (DAT_14cb81330 == (undefined *)0x0) {
          puVar6 = &DAT_14cb81328;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb81338 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb81300;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb81318 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb812f0;
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
                (longlong)(int)DAT_14cb81338 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb81330;
        if (DAT_14cb81330 == (undefined *)0x0) {
          puVar6 = &DAT_14cb81328;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb81338 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb81330;
        if (DAT_14cb81330 == (undefined *)0x0) {
          puVar6 = &DAT_14cb81328;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb81338 - 1U) * 4) = iVar4;
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



// FUNCTION 1460f15ec FUN_1460f15ec body=507 status=ok
// SIG undefined FUN_1460f15ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460f15ec(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb83640 = 0;
  FUN_1446ddc76(&DAT_14cb83644,"GbxItemPoolSelectorStateDefs",1);
  _DAT_14cb83650 = 0;
  _DAT_14cb83658 = 0;
  _DAT_14cb83660 = 0;
  DAT_14cb83668 = (void *)0x0;
  _DAT_14cb83670 = 0;
  _DAT_14cb83678 = FUN_1488d036c;
  DAT_14cb83680 = *param_1;
  DAT_14cb83690 = param_1[2];
  param_1[2] = 0;
  DAT_14cb836a0._0_4_ = (undefined4)param_1[4];
  DAT_14cb836a0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb836a8 = (undefined4)param_1[5];
  uRam000000014cb836ac = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb836b0 = (undefined4)param_1[6];
  uRam000000014cb836b4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb836b8 = (undefined4)param_1[7];
  uRam000000014cb836bc = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb83680 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb83650 = 0;
  _DAT_14cb83658 = local_68;
  _DAT_14cb83660 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb83670 = CONCAT44(DAT_14cb83674,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb83674 == 0) {
    _DAT_14cb83670 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb83668,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb83668,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb83640) && ((DAT_14cb835d0 == (int *)0x0 || (*DAT_14cb835d0 < DAT_14cb83640)))) {
    DAT_14cb835d0 = &DAT_14cb83640;
  }
  FUN_1460f17e8();
  local_30 = &local_70;
  local_70 = &DAT_14cb83640;
  local_38 = &DAT_14cb83644;
  FUN_1460f1882(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460f17e8 FUN_1460f17e8 body=153 status=ok
// SIG undefined FUN_1460f17e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460f17e8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb83628) {
    FUN_144b3d300(&DAT_14cb83628);
    if (DAT_14cb83628 == -1) {
      DAT_14cb835f8 = 0;
      DAT_14cb83600 = 0;
      DAT_14cb835d8 = 0;
      _DAT_14cb835e0 = 0;
      _DAT_14cb83604 = 0xffffffff00000080;
      DAT_14cb8360c = 0;
      DAT_14cb83618 = 0;
      DAT_14cb83620 = 0;
      atexit(FUN_143dae27b);
      _Init_thread_footer(&DAT_14cb83628);
      return;
    }
  }
  return;
}



// FUNCTION 1460f1882 FUN_1460f1882 body=338 status=ok
// SIG undefined FUN_1460f1882(void)

undefined4 * FUN_1460f1882(undefined4 *param_1,undefined8 *param_2)

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
  FUN_1460f1a68(local_40);
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
  cVar5 = FUN_1460f19d6(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb835e0 - DAT_14cb8360c;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb83620)) {
      uVar10 = DAT_14cb83620 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb83618;
      if (DAT_14cb83618 == (undefined *)0x0) {
        puVar7 = &DAT_14cb83610;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb83620 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb83618;
      if (DAT_14cb83618 == (undefined *)0x0) {
        puVar7 = &DAT_14cb83610;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb83620 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb83620 = iVar9;
      FUN_1460f1b76();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460f19d6 FUN_1460f19d6 body=145 status=ok
// SIG undefined FUN_1460f19d6(void)

undefined8 FUN_1460f19d6(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb835e0 - DAT_14cb8360c != 1) && (DAT_14cb835e0 != DAT_14cb8360c)) {
    puVar6 = &DAT_14cb83610;
    if (DAT_14cb83618 != (undefined *)0x0) {
      puVar6 = DAT_14cb83618;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb83620 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb835d8 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d97598(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460f1a68 FUN_1460f1a68 body=270 status=ok
// SIG undefined FUN_1460f1a68(void)

int * FUN_1460f1a68(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb83608;
  iVar3 = DAT_14cb835e0;
  if (DAT_14cb8360c == 0) {
    iVar2 = DAT_14cb835e0 + 1;
    bVar7 = DAT_14cb835e4 == DAT_14cb835e0;
    DAT_14cb835e0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb835d8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb835e8,1);
    puVar4 = DAT_14cb835f8;
    if (DAT_14cb835f8 == (undefined *)0x0) {
      puVar4 = &DAT_14cb835e8;
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
    lVar6 = (longlong)DAT_14cb83608;
    DAT_14cb83608 = *(int *)(DAT_14cb835d8 + 4 + lVar6 * 0x18);
    DAT_14cb8360c = DAT_14cb8360c + -1;
    if (DAT_14cb8360c != 0) {
      *(undefined4 *)(DAT_14cb835d8 + (longlong)DAT_14cb83608 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb835e8;
  if (DAT_14cb835f8 != (undefined *)0x0) {
    puVar4 = DAT_14cb835f8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb835d8;
  return param_1;
}



// FUNCTION 1460f1b76 FUN_1460f1b76 body=523 status=ok
// SIG undefined FUN_1460f1b76(void)

void FUN_1460f1b76(void)

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
  if (DAT_14cb83618 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb83618,0,0,4);
  }
  uVar3 = DAT_14cb83620;
  uVar2 = local_50;
  if (DAT_14cb83620 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb83610,0,DAT_14cb83620,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb83618;
        if (DAT_14cb83618 == (undefined *)0x0) {
          puVar6 = &DAT_14cb83610;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb83620 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb835e8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb83600 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb835d8;
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
                (longlong)(int)DAT_14cb83620 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb83618;
        if (DAT_14cb83618 == (undefined *)0x0) {
          puVar6 = &DAT_14cb83610;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb83620 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb83618;
        if (DAT_14cb83618 == (undefined *)0x0) {
          puVar6 = &DAT_14cb83610;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb83620 - 1U) * 4) = iVar4;
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



// FUNCTION 1460f1d82 FUN_1460f1d82 body=507 status=ok
// SIG undefined FUN_1460f1d82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460f1d82(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb83730 = 0;
  FUN_1446ddc76(&DAT_14cb83734,"GbxItemPoolSelectorDefs",1);
  _DAT_14cb83740 = 0;
  _DAT_14cb83748 = 0;
  _DAT_14cb83750 = 0;
  DAT_14cb83758 = (void *)0x0;
  _DAT_14cb83760 = 0;
  _DAT_14cb83768 = FUN_1488d0444;
  DAT_14cb83770 = *param_1;
  DAT_14cb83780 = param_1[2];
  param_1[2] = 0;
  DAT_14cb83790._0_4_ = (undefined4)param_1[4];
  DAT_14cb83790._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb83798 = (undefined4)param_1[5];
  uRam000000014cb8379c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb837a0 = (undefined4)param_1[6];
  uRam000000014cb837a4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb837a8 = (undefined4)param_1[7];
  uRam000000014cb837ac = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb83770 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb83740 = 0;
  _DAT_14cb83748 = local_68;
  _DAT_14cb83750 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb83760 = CONCAT44(DAT_14cb83764,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb83764 == 0) {
    _DAT_14cb83760 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb83758,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb83758,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb83730) && ((DAT_14cb836c0 == (int *)0x0 || (*DAT_14cb836c0 < DAT_14cb83730)))) {
    DAT_14cb836c0 = &DAT_14cb83730;
  }
  FUN_1460f1f7e();
  local_30 = &local_70;
  local_70 = &DAT_14cb83730;
  local_38 = &DAT_14cb83734;
  FUN_1460f2018(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460f1f7e FUN_1460f1f7e body=153 status=ok
// SIG undefined FUN_1460f1f7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460f1f7e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb83718) {
    FUN_144b3d300(&DAT_14cb83718);
    if (DAT_14cb83718 == -1) {
      DAT_14cb836e8 = 0;
      DAT_14cb836f0 = 0;
      DAT_14cb836c8 = 0;
      _DAT_14cb836d0 = 0;
      _DAT_14cb836f4 = 0xffffffff00000080;
      DAT_14cb836fc = 0;
      DAT_14cb83708 = 0;
      DAT_14cb83710 = 0;
      atexit(FUN_143dae2a9);
      _Init_thread_footer(&DAT_14cb83718);
      return;
    }
  }
  return;
}



// FUNCTION 1460f2018 FUN_1460f2018 body=338 status=ok
// SIG undefined FUN_1460f2018(void)

undefined4 * FUN_1460f2018(undefined4 *param_1,undefined8 *param_2)

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
  FUN_1460f21fe(local_40);
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
  cVar5 = FUN_1460f216c(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb836d0 - DAT_14cb836fc;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb83710)) {
      uVar10 = DAT_14cb83710 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb83708;
      if (DAT_14cb83708 == (undefined *)0x0) {
        puVar7 = &DAT_14cb83700;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb83710 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb83708;
      if (DAT_14cb83708 == (undefined *)0x0) {
        puVar7 = &DAT_14cb83700;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb83710 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb83710 = iVar9;
      FUN_1460f230c();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460f216c FUN_1460f216c body=145 status=ok
// SIG undefined FUN_1460f216c(void)

undefined8 FUN_1460f216c(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb836d0 - DAT_14cb836fc != 1) && (DAT_14cb836d0 != DAT_14cb836fc)) {
    puVar6 = &DAT_14cb83700;
    if (DAT_14cb83708 != (undefined *)0x0) {
      puVar6 = DAT_14cb83708;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb83710 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb836c8 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d97784(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460f21fe FUN_1460f21fe body=270 status=ok
// SIG undefined FUN_1460f21fe(void)

int * FUN_1460f21fe(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb836f8;
  iVar3 = DAT_14cb836d0;
  if (DAT_14cb836fc == 0) {
    iVar2 = DAT_14cb836d0 + 1;
    bVar7 = DAT_14cb836d4 == DAT_14cb836d0;
    DAT_14cb836d0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb836c8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb836d8,1);
    puVar4 = DAT_14cb836e8;
    if (DAT_14cb836e8 == (undefined *)0x0) {
      puVar4 = &DAT_14cb836d8;
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
    lVar6 = (longlong)DAT_14cb836f8;
    DAT_14cb836f8 = *(int *)(DAT_14cb836c8 + 4 + lVar6 * 0x18);
    DAT_14cb836fc = DAT_14cb836fc + -1;
    if (DAT_14cb836fc != 0) {
      *(undefined4 *)(DAT_14cb836c8 + (longlong)DAT_14cb836f8 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb836d8;
  if (DAT_14cb836e8 != (undefined *)0x0) {
    puVar4 = DAT_14cb836e8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb836c8;
  return param_1;
}



// FUNCTION 1460f230c FUN_1460f230c body=523 status=ok
// SIG undefined FUN_1460f230c(void)

void FUN_1460f230c(void)

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
  if (DAT_14cb83708 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb83708,0,0,4);
  }
  uVar3 = DAT_14cb83710;
  uVar2 = local_50;
  if (DAT_14cb83710 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb83700,0,DAT_14cb83710,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb83708;
        if (DAT_14cb83708 == (undefined *)0x0) {
          puVar6 = &DAT_14cb83700;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb83710 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb836d8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb836f0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb836c8;
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
                (longlong)(int)DAT_14cb83710 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb83708;
        if (DAT_14cb83708 == (undefined *)0x0) {
          puVar6 = &DAT_14cb83700;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb83710 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb83708;
        if (DAT_14cb83708 == (undefined *)0x0) {
          puVar6 = &DAT_14cb83700;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb83710 - 1U) * 4) = iVar4;
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



// FUNCTION 1460f2518 FUN_1460f2518 body=507 status=ok
// SIG undefined FUN_1460f2518(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460f2518(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb83820 = 0;
  FUN_1446ddc76(&DAT_14cb83824,"GbxItemPoolListSelectorStateDefs",1);
  _DAT_14cb83830 = 0;
  _DAT_14cb83838 = 0;
  _DAT_14cb83840 = 0;
  DAT_14cb83848 = (void *)0x0;
  _DAT_14cb83850 = 0;
  _DAT_14cb83858 = FUN_1488d079c;
  DAT_14cb83860 = *param_1;
  DAT_14cb83870 = param_1[2];
  param_1[2] = 0;
  DAT_14cb83880._0_4_ = (undefined4)param_1[4];
  DAT_14cb83880._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb83888 = (undefined4)param_1[5];
  uRam000000014cb8388c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb83890 = (undefined4)param_1[6];
  uRam000000014cb83894 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb83898 = (undefined4)param_1[7];
  uRam000000014cb8389c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb83860 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb83830 = 0;
  _DAT_14cb83838 = local_68;
  _DAT_14cb83840 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb83850 = CONCAT44(DAT_14cb83854,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb83854 == 0) {
    _DAT_14cb83850 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb83848,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb83848,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb83820) && ((DAT_14cb837b0 == (int *)0x0 || (*DAT_14cb837b0 < DAT_14cb83820)))) {
    DAT_14cb837b0 = &DAT_14cb83820;
  }
  FUN_1460f2714();
  local_30 = &local_70;
  local_70 = &DAT_14cb83820;
  local_38 = &DAT_14cb83824;
  FUN_1460f27ae(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460f2714 FUN_1460f2714 body=153 status=ok
// SIG undefined FUN_1460f2714(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460f2714(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb83808) {
    FUN_144b3d300(&DAT_14cb83808);
    if (DAT_14cb83808 == -1) {
      DAT_14cb837d8 = 0;
      DAT_14cb837e0 = 0;
      DAT_14cb837b8 = 0;
      _DAT_14cb837c0 = 0;
      _DAT_14cb837e4 = 0xffffffff00000080;
      DAT_14cb837ec = 0;
      DAT_14cb837f8 = 0;
      DAT_14cb83800 = 0;
      atexit(FUN_143dae2d7);
      _Init_thread_footer(&DAT_14cb83808);
      return;
    }
  }
  return;
}



// FUNCTION 1460f27ae FUN_1460f27ae body=338 status=ok
// SIG undefined FUN_1460f27ae(void)

undefined4 * FUN_1460f27ae(undefined4 *param_1,undefined8 *param_2)

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
  FUN_1460f2994(local_40);
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
  cVar5 = FUN_1460f2902(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb837c0 - DAT_14cb837ec;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb83800)) {
      uVar10 = DAT_14cb83800 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb837f8;
      if (DAT_14cb837f8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb837f0;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb83800 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb837f8;
      if (DAT_14cb837f8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb837f0;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb83800 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb83800 = iVar9;
      FUN_1460f2aa2();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460f2902 FUN_1460f2902 body=145 status=ok
// SIG undefined FUN_1460f2902(void)

undefined8 FUN_1460f2902(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb837c0 - DAT_14cb837ec != 1) && (DAT_14cb837c0 != DAT_14cb837ec)) {
    puVar6 = &DAT_14cb837f0;
    if (DAT_14cb837f8 != (undefined *)0x0) {
      puVar6 = DAT_14cb837f8;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb83800 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb837b8 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d97970(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460f2994 FUN_1460f2994 body=270 status=ok
// SIG undefined FUN_1460f2994(void)

int * FUN_1460f2994(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb837e8;
  iVar3 = DAT_14cb837c0;
  if (DAT_14cb837ec == 0) {
    iVar2 = DAT_14cb837c0 + 1;
    bVar7 = DAT_14cb837c4 == DAT_14cb837c0;
    DAT_14cb837c0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb837b8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb837c8,1);
    puVar4 = DAT_14cb837d8;
    if (DAT_14cb837d8 == (undefined *)0x0) {
      puVar4 = &DAT_14cb837c8;
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
    lVar6 = (longlong)DAT_14cb837e8;
    DAT_14cb837e8 = *(int *)(DAT_14cb837b8 + 4 + lVar6 * 0x18);
    DAT_14cb837ec = DAT_14cb837ec + -1;
    if (DAT_14cb837ec != 0) {
      *(undefined4 *)(DAT_14cb837b8 + (longlong)DAT_14cb837e8 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb837c8;
  if (DAT_14cb837d8 != (undefined *)0x0) {
    puVar4 = DAT_14cb837d8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb837b8;
  return param_1;
}



// FUNCTION 1460f2aa2 FUN_1460f2aa2 body=523 status=ok
// SIG undefined FUN_1460f2aa2(void)

void FUN_1460f2aa2(void)

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
  if (DAT_14cb837f8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb837f8,0,0,4);
  }
  uVar3 = DAT_14cb83800;
  uVar2 = local_50;
  if (DAT_14cb83800 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb837f0,0,DAT_14cb83800,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb837f8;
        if (DAT_14cb837f8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb837f0;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb83800 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb837c8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb837e0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb837b8;
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
                (longlong)(int)DAT_14cb83800 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb837f8;
        if (DAT_14cb837f8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb837f0;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb83800 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb837f8;
        if (DAT_14cb837f8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb837f0;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb83800 - 1U) * 4) = iVar4;
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



// FUNCTION 1460f2cae FUN_1460f2cae body=507 status=ok
// SIG undefined FUN_1460f2cae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460f2cae(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb83910 = 0;
  FUN_1446ddc76(&DAT_14cb83914,"GbxItemPoolListSelectorDefs",1);
  _DAT_14cb83920 = 0;
  _DAT_14cb83928 = 0;
  _DAT_14cb83930 = 0;
  DAT_14cb83938 = (void *)0x0;
  _DAT_14cb83940 = 0;
  _DAT_14cb83948 = FUN_1488d0874;
  DAT_14cb83950 = *param_1;
  DAT_14cb83960 = param_1[2];
  param_1[2] = 0;
  DAT_14cb83970._0_4_ = (undefined4)param_1[4];
  DAT_14cb83970._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb83978 = (undefined4)param_1[5];
  uRam000000014cb8397c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb83980 = (undefined4)param_1[6];
  uRam000000014cb83984 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb83988 = (undefined4)param_1[7];
  uRam000000014cb8398c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb83950 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb83920 = 0;
  _DAT_14cb83928 = local_68;
  _DAT_14cb83930 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb83940 = CONCAT44(DAT_14cb83944,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb83944 == 0) {
    _DAT_14cb83940 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb83938,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb83938,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb83910) && ((DAT_14cb838a0 == (int *)0x0 || (*DAT_14cb838a0 < DAT_14cb83910)))) {
    DAT_14cb838a0 = &DAT_14cb83910;
  }
  FUN_1460f2eaa();
  local_30 = &local_70;
  local_70 = &DAT_14cb83910;
  local_38 = &DAT_14cb83914;
  FUN_1460f2f44(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460f2eaa FUN_1460f2eaa body=153 status=ok
// SIG undefined FUN_1460f2eaa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460f2eaa(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb838f8) {
    FUN_144b3d300(&DAT_14cb838f8);
    if (DAT_14cb838f8 == -1) {
      DAT_14cb838c8 = 0;
      DAT_14cb838d0 = 0;
      DAT_14cb838a8 = 0;
      _DAT_14cb838b0 = 0;
      _DAT_14cb838d4 = 0xffffffff00000080;
      DAT_14cb838dc = 0;
      DAT_14cb838e8 = 0;
      DAT_14cb838f0 = 0;
      atexit(FUN_143dae305);
      _Init_thread_footer(&DAT_14cb838f8);
      return;
    }
  }
  return;
}



// FUNCTION 1460f2f44 FUN_1460f2f44 body=338 status=ok
// SIG undefined FUN_1460f2f44(void)

undefined4 * FUN_1460f2f44(undefined4 *param_1,undefined8 *param_2)

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
  FUN_1460f312a(local_40);
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
  cVar5 = FUN_1460f3098(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb838b0 - DAT_14cb838dc;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb838f0)) {
      uVar10 = DAT_14cb838f0 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb838e8;
      if (DAT_14cb838e8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb838e0;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb838f0 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb838e8;
      if (DAT_14cb838e8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb838e0;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb838f0 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb838f0 = iVar9;
      FUN_1460f3238();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460f3098 FUN_1460f3098 body=145 status=ok
// SIG undefined FUN_1460f3098(void)

undefined8 FUN_1460f3098(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb838b0 - DAT_14cb838dc != 1) && (DAT_14cb838b0 != DAT_14cb838dc)) {
    puVar6 = &DAT_14cb838e0;
    if (DAT_14cb838e8 != (undefined *)0x0) {
      puVar6 = DAT_14cb838e8;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb838f0 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb838a8 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d97b5c(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460f312a FUN_1460f312a body=270 status=ok
// SIG undefined FUN_1460f312a(void)

int * FUN_1460f312a(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb838d8;
  iVar3 = DAT_14cb838b0;
  if (DAT_14cb838dc == 0) {
    iVar2 = DAT_14cb838b0 + 1;
    bVar7 = DAT_14cb838b4 == DAT_14cb838b0;
    DAT_14cb838b0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb838a8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb838b8,1);
    puVar4 = DAT_14cb838c8;
    if (DAT_14cb838c8 == (undefined *)0x0) {
      puVar4 = &DAT_14cb838b8;
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
    lVar6 = (longlong)DAT_14cb838d8;
    DAT_14cb838d8 = *(int *)(DAT_14cb838a8 + 4 + lVar6 * 0x18);
    DAT_14cb838dc = DAT_14cb838dc + -1;
    if (DAT_14cb838dc != 0) {
      *(undefined4 *)(DAT_14cb838a8 + (longlong)DAT_14cb838d8 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb838b8;
  if (DAT_14cb838c8 != (undefined *)0x0) {
    puVar4 = DAT_14cb838c8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb838a8;
  return param_1;
}



// FUNCTION 1460f3238 FUN_1460f3238 body=523 status=ok
// SIG undefined FUN_1460f3238(void)

void FUN_1460f3238(void)

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
  if (DAT_14cb838e8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb838e8,0,0,4);
  }
  uVar3 = DAT_14cb838f0;
  uVar2 = local_50;
  if (DAT_14cb838f0 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb838e0,0,DAT_14cb838f0,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb838e8;
        if (DAT_14cb838e8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb838e0;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb838f0 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb838b8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb838d0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb838a8;
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
                (longlong)(int)DAT_14cb838f0 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb838e8;
        if (DAT_14cb838e8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb838e0;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb838f0 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb838e8;
        if (DAT_14cb838e8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb838e0;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb838f0 - 1U) * 4) = iVar4;
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



// FUNCTION 1460f3444 FUN_1460f3444 body=507 status=ok
// SIG undefined FUN_1460f3444(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460f3444(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb844a0 = 0;
  FUN_1446ddc76(&DAT_14cb844a4,"GbxLootConfigSelectorStateDefs",1);
  _DAT_14cb844b0 = 0;
  _DAT_14cb844b8 = 0;
  _DAT_14cb844c0 = 0;
  DAT_14cb844c8 = (void *)0x0;
  _DAT_14cb844d0 = 0;
  _DAT_14cb844d8 = FUN_1488d5c8e;
  DAT_14cb844e0 = *param_1;
  DAT_14cb844f0 = param_1[2];
  param_1[2] = 0;
  DAT_14cb84500._0_4_ = (undefined4)param_1[4];
  DAT_14cb84500._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb84508 = (undefined4)param_1[5];
  uRam000000014cb8450c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb84510 = (undefined4)param_1[6];
  uRam000000014cb84514 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb84518 = (undefined4)param_1[7];
  uRam000000014cb8451c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb844e0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb844b0 = 0;
  _DAT_14cb844b8 = local_68;
  _DAT_14cb844c0 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb844d0 = CONCAT44(DAT_14cb844d4,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb844d4 == 0) {
    _DAT_14cb844d0 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb844c8,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb844c8,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb844a0) && ((DAT_14cb84428 == (int *)0x0 || (*DAT_14cb84428 < DAT_14cb844a0)))) {
    DAT_14cb84428 = &DAT_14cb844a0;
  }
  FUN_1460f3640();
  local_30 = &local_70;
  local_70 = &DAT_14cb844a0;
  local_38 = &DAT_14cb844a4;
  FUN_1460f36da(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460f3640 FUN_1460f3640 body=153 status=ok
// SIG undefined FUN_1460f3640(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460f3640(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb84480) {
    FUN_144b3d300(&DAT_14cb84480);
    if (DAT_14cb84480 == -1) {
      DAT_14cb84450 = 0;
      DAT_14cb84458 = 0;
      DAT_14cb84430 = 0;
      _DAT_14cb84438 = 0;
      _DAT_14cb8445c = 0xffffffff00000080;
      DAT_14cb84464 = 0;
      DAT_14cb84470 = 0;
      DAT_14cb84478 = 0;
      atexit(FUN_143db370d);
      _Init_thread_footer(&DAT_14cb84480);
      return;
    }
  }
  return;
}



// FUNCTION 1460f36da FUN_1460f36da body=338 status=ok
// SIG undefined FUN_1460f36da(void)

undefined4 * FUN_1460f36da(undefined4 *param_1,undefined8 *param_2)

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
  FUN_1460f38c0(local_40);
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
  cVar5 = FUN_1460f382e(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb84438 - DAT_14cb84464;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb84478)) {
      uVar10 = DAT_14cb84478 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb84470;
      if (DAT_14cb84470 == (undefined *)0x0) {
        puVar7 = &DAT_14cb84468;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb84478 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb84470;
      if (DAT_14cb84470 == (undefined *)0x0) {
        puVar7 = &DAT_14cb84468;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb84478 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb84478 = iVar9;
      FUN_1460f39ce();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460f382e FUN_1460f382e body=145 status=ok
// SIG undefined FUN_1460f382e(void)

undefined8 FUN_1460f382e(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb84438 - DAT_14cb84464 != 1) && (DAT_14cb84438 != DAT_14cb84464)) {
    puVar6 = &DAT_14cb84468;
    if (DAT_14cb84470 != (undefined *)0x0) {
      puVar6 = DAT_14cb84470;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb84478 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb84430 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d97d48(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460f38c0 FUN_1460f38c0 body=270 status=ok
// SIG undefined FUN_1460f38c0(void)

int * FUN_1460f38c0(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb84460;
  iVar3 = DAT_14cb84438;
  if (DAT_14cb84464 == 0) {
    iVar2 = DAT_14cb84438 + 1;
    bVar7 = DAT_14cb8443c == DAT_14cb84438;
    DAT_14cb84438 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb84430,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb84440,1);
    puVar4 = DAT_14cb84450;
    if (DAT_14cb84450 == (undefined *)0x0) {
      puVar4 = &DAT_14cb84440;
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
    lVar6 = (longlong)DAT_14cb84460;
    DAT_14cb84460 = *(int *)(DAT_14cb84430 + 4 + lVar6 * 0x18);
    DAT_14cb84464 = DAT_14cb84464 + -1;
    if (DAT_14cb84464 != 0) {
      *(undefined4 *)(DAT_14cb84430 + (longlong)DAT_14cb84460 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb84440;
  if (DAT_14cb84450 != (undefined *)0x0) {
    puVar4 = DAT_14cb84450;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb84430;
  return param_1;
}



// FUNCTION 1460f39ce FUN_1460f39ce body=523 status=ok
// SIG undefined FUN_1460f39ce(void)

void FUN_1460f39ce(void)

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
  if (DAT_14cb84470 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb84470,0,0,4);
  }
  uVar3 = DAT_14cb84478;
  uVar2 = local_50;
  if (DAT_14cb84478 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb84468,0,DAT_14cb84478,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb84470;
        if (DAT_14cb84470 == (undefined *)0x0) {
          puVar6 = &DAT_14cb84468;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb84478 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb84440;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb84458 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb84430;
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
                (longlong)(int)DAT_14cb84478 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb84470;
        if (DAT_14cb84470 == (undefined *)0x0) {
          puVar6 = &DAT_14cb84468;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb84478 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb84470;
        if (DAT_14cb84470 == (undefined *)0x0) {
          puVar6 = &DAT_14cb84468;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb84478 - 1U) * 4) = iVar4;
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



// FUNCTION 1460f3bda FUN_1460f3bda body=507 status=ok
// SIG undefined FUN_1460f3bda(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460f3bda(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb84590 = 0;
  FUN_1446ddc76(&DAT_14cb84594,"GbxLootConfigSelectorDefs",1);
  _DAT_14cb845a0 = 0;
  _DAT_14cb845a8 = 0;
  _DAT_14cb845b0 = 0;
  DAT_14cb845b8 = (void *)0x0;
  _DAT_14cb845c0 = 0;
  _DAT_14cb845c8 = FUN_1488d5d5e;
  DAT_14cb845d0 = *param_1;
  DAT_14cb845e0 = param_1[2];
  param_1[2] = 0;
  DAT_14cb845f0._0_4_ = (undefined4)param_1[4];
  DAT_14cb845f0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb845f8 = (undefined4)param_1[5];
  uRam000000014cb845fc = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb84600 = (undefined4)param_1[6];
  uRam000000014cb84604 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb84608 = (undefined4)param_1[7];
  uRam000000014cb8460c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb845d0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb845a0 = 0;
  _DAT_14cb845a8 = local_68;
  _DAT_14cb845b0 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb845c0 = CONCAT44(DAT_14cb845c4,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb845c4 == 0) {
    _DAT_14cb845c0 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb845b8,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb845b8,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb84590) && ((DAT_14cb84520 == (int *)0x0 || (*DAT_14cb84520 < DAT_14cb84590)))) {
    DAT_14cb84520 = &DAT_14cb84590;
  }
  FUN_1460f3dd6();
  local_30 = &local_70;
  local_70 = &DAT_14cb84590;
  local_38 = &DAT_14cb84594;
  FUN_1460f3e70(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460f3dd6 FUN_1460f3dd6 body=153 status=ok
// SIG undefined FUN_1460f3dd6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460f3dd6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb84578) {
    FUN_144b3d300(&DAT_14cb84578);
    if (DAT_14cb84578 == -1) {
      DAT_14cb84548 = 0;
      DAT_14cb84550 = 0;
      DAT_14cb84528 = 0;
      _DAT_14cb84530 = 0;
      _DAT_14cb84554 = 0xffffffff00000080;
      DAT_14cb8455c = 0;
      DAT_14cb84568 = 0;
      DAT_14cb84570 = 0;
      atexit(FUN_143db373b);
      _Init_thread_footer(&DAT_14cb84578);
      return;
    }
  }
  return;
}



// FUNCTION 1460f3e70 FUN_1460f3e70 body=338 status=ok
// SIG undefined FUN_1460f3e70(void)

undefined4 * FUN_1460f3e70(undefined4 *param_1,undefined8 *param_2)

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
  FUN_1460f4056(local_40);
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
  cVar5 = FUN_1460f3fc4(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb84530 - DAT_14cb8455c;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb84570)) {
      uVar10 = DAT_14cb84570 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb84568;
      if (DAT_14cb84568 == (undefined *)0x0) {
        puVar7 = &DAT_14cb84560;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb84570 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb84568;
      if (DAT_14cb84568 == (undefined *)0x0) {
        puVar7 = &DAT_14cb84560;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb84570 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb84570 = iVar9;
      FUN_1460f4164();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460f3fc4 FUN_1460f3fc4 body=145 status=ok
// SIG undefined FUN_1460f3fc4(void)

undefined8 FUN_1460f3fc4(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb84530 - DAT_14cb8455c != 1) && (DAT_14cb84530 != DAT_14cb8455c)) {
    puVar6 = &DAT_14cb84560;
    if (DAT_14cb84568 != (undefined *)0x0) {
      puVar6 = DAT_14cb84568;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb84570 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb84528 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d97f34(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460f4056 FUN_1460f4056 body=270 status=ok
// SIG undefined FUN_1460f4056(void)

int * FUN_1460f4056(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb84558;
  iVar3 = DAT_14cb84530;
  if (DAT_14cb8455c == 0) {
    iVar2 = DAT_14cb84530 + 1;
    bVar7 = DAT_14cb84534 == DAT_14cb84530;
    DAT_14cb84530 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb84528,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb84538,1);
    puVar4 = DAT_14cb84548;
    if (DAT_14cb84548 == (undefined *)0x0) {
      puVar4 = &DAT_14cb84538;
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
    lVar6 = (longlong)DAT_14cb84558;
    DAT_14cb84558 = *(int *)(DAT_14cb84528 + 4 + lVar6 * 0x18);
    DAT_14cb8455c = DAT_14cb8455c + -1;
    if (DAT_14cb8455c != 0) {
      *(undefined4 *)(DAT_14cb84528 + (longlong)DAT_14cb84558 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb84538;
  if (DAT_14cb84548 != (undefined *)0x0) {
    puVar4 = DAT_14cb84548;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb84528;
  return param_1;
}



// FUNCTION 1460f4164 FUN_1460f4164 body=523 status=ok
// SIG undefined FUN_1460f4164(void)

void FUN_1460f4164(void)

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
  if (DAT_14cb84568 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb84568,0,0,4);
  }
  uVar3 = DAT_14cb84570;
  uVar2 = local_50;
  if (DAT_14cb84570 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb84560,0,DAT_14cb84570,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb84568;
        if (DAT_14cb84568 == (undefined *)0x0) {
          puVar6 = &DAT_14cb84560;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb84570 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb84538;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb84550 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb84528;
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
                (longlong)(int)DAT_14cb84570 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb84568;
        if (DAT_14cb84568 == (undefined *)0x0) {
          puVar6 = &DAT_14cb84560;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb84570 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb84568;
        if (DAT_14cb84568 == (undefined *)0x0) {
          puVar6 = &DAT_14cb84560;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb84570 - 1U) * 4) = iVar4;
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



// FUNCTION 1460f4370 FUN_1460f4370 body=507 status=ok
// SIG undefined FUN_1460f4370(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460f4370(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb85940 = 0;
  FUN_1446ddc76(&DAT_14cb85944,"MissionSource",1);
  _DAT_14cb85950 = 0;
  _DAT_14cb85958 = 0;
  _DAT_14cb85960 = 0;
  DAT_14cb85968 = (void *)0x0;
  _DAT_14cb85970 = 0;
  _DAT_14cb85978 = FUN_1488e8e34;
  DAT_14cb85980 = *param_1;
  DAT_14cb85990 = param_1[2];
  param_1[2] = 0;
  DAT_14cb859a0._0_4_ = (undefined4)param_1[4];
  DAT_14cb859a0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb859a8 = (undefined4)param_1[5];
  uRam000000014cb859ac = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb859b0 = (undefined4)param_1[6];
  uRam000000014cb859b4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb859b8 = (undefined4)param_1[7];
  uRam000000014cb859bc = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb85980 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb85950 = 0;
  _DAT_14cb85958 = local_68;
  _DAT_14cb85960 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb85970 = CONCAT44(DAT_14cb85974,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb85974 == 0) {
    _DAT_14cb85970 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb85968,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb85968,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb85940) && ((DAT_14cb858c8 == (int *)0x0 || (*DAT_14cb858c8 < DAT_14cb85940)))) {
    DAT_14cb858c8 = &DAT_14cb85940;
  }
  FUN_1460f456c();
  local_30 = &local_70;
  local_70 = &DAT_14cb85940;
  local_38 = &DAT_14cb85944;
  FUN_1460f4606(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460f456c FUN_1460f456c body=153 status=ok
// SIG undefined FUN_1460f456c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460f456c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb85920) {
    FUN_144b3d300(&DAT_14cb85920);
    if (DAT_14cb85920 == -1) {
      DAT_14cb858f0 = 0;
      DAT_14cb858f8 = 0;
      DAT_14cb858d0 = 0;
      _DAT_14cb858d8 = 0;
      _DAT_14cb858fc = 0xffffffff00000080;
      DAT_14cb85904 = 0;
      DAT_14cb85910 = 0;
      DAT_14cb85918 = 0;
      atexit(FUN_143dd83ac);
      _Init_thread_footer(&DAT_14cb85920);
      return;
    }
  }
  return;
}



// FUNCTION 1460f4606 FUN_1460f4606 body=338 status=ok
// SIG undefined FUN_1460f4606(void)

undefined4 * FUN_1460f4606(undefined4 *param_1,undefined8 *param_2)

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
  FUN_1460f47ec(local_40);
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
  cVar5 = FUN_1460f475a(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb858d8 - DAT_14cb85904;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb85918)) {
      uVar10 = DAT_14cb85918 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb85910;
      if (DAT_14cb85910 == (undefined *)0x0) {
        puVar7 = &DAT_14cb85908;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb85918 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb85910;
      if (DAT_14cb85910 == (undefined *)0x0) {
        puVar7 = &DAT_14cb85908;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb85918 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb85918 = iVar9;
      FUN_1460f48fa();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460f475a FUN_1460f475a body=145 status=ok
// SIG undefined FUN_1460f475a(void)

undefined8 FUN_1460f475a(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb858d8 - DAT_14cb85904 != 1) && (DAT_14cb858d8 != DAT_14cb85904)) {
    puVar6 = &DAT_14cb85908;
    if (DAT_14cb85910 != (undefined *)0x0) {
      puVar6 = DAT_14cb85910;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb85918 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb858d0 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d984f8(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460f47ec FUN_1460f47ec body=270 status=ok
// SIG undefined FUN_1460f47ec(void)

int * FUN_1460f47ec(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb85900;
  iVar3 = DAT_14cb858d8;
  if (DAT_14cb85904 == 0) {
    iVar2 = DAT_14cb858d8 + 1;
    bVar7 = DAT_14cb858dc == DAT_14cb858d8;
    DAT_14cb858d8 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb858d0,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb858e0,1);
    puVar4 = DAT_14cb858f0;
    if (DAT_14cb858f0 == (undefined *)0x0) {
      puVar4 = &DAT_14cb858e0;
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
    lVar6 = (longlong)DAT_14cb85900;
    DAT_14cb85900 = *(int *)(DAT_14cb858d0 + 4 + lVar6 * 0x18);
    DAT_14cb85904 = DAT_14cb85904 + -1;
    if (DAT_14cb85904 != 0) {
      *(undefined4 *)(DAT_14cb858d0 + (longlong)DAT_14cb85900 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb858e0;
  if (DAT_14cb858f0 != (undefined *)0x0) {
    puVar4 = DAT_14cb858f0;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb858d0;
  return param_1;
}



// FUNCTION 1460f48fa FUN_1460f48fa body=523 status=ok
// SIG undefined FUN_1460f48fa(void)

void FUN_1460f48fa(void)

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
  if (DAT_14cb85910 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb85910,0,0,4);
  }
  uVar3 = DAT_14cb85918;
  uVar2 = local_50;
  if (DAT_14cb85918 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb85908,0,DAT_14cb85918,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb85910;
        if (DAT_14cb85910 == (undefined *)0x0) {
          puVar6 = &DAT_14cb85908;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb85918 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb858e0;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb858f8 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb858d0;
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
                (longlong)(int)DAT_14cb85918 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb85910;
        if (DAT_14cb85910 == (undefined *)0x0) {
          puVar6 = &DAT_14cb85908;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb85918 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb85910;
        if (DAT_14cb85910 == (undefined *)0x0) {
          puVar6 = &DAT_14cb85908;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb85918 - 1U) * 4) = iVar4;
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



// FUNCTION 1460f4b06 FUN_1460f4b06 body=507 status=ok
// SIG undefined FUN_1460f4b06(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460f4b06(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb86030 = 0;
  FUN_1446ddc76(&DAT_14cb86034,"MissionArchetype",1);
  _DAT_14cb86040 = 0;
  _DAT_14cb86048 = 0;
  _DAT_14cb86050 = 0;
  DAT_14cb86058 = (void *)0x0;
  _DAT_14cb86060 = 0;
  _DAT_14cb86068 = FUN_1488ff89e;
  DAT_14cb86070 = *param_1;
  DAT_14cb86080 = param_1[2];
  param_1[2] = 0;
  DAT_14cb86090._0_4_ = (undefined4)param_1[4];
  DAT_14cb86090._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb86098 = (undefined4)param_1[5];
  uRam000000014cb8609c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb860a0 = (undefined4)param_1[6];
  uRam000000014cb860a4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb860a8 = (undefined4)param_1[7];
  uRam000000014cb860ac = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb86070 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb86040 = 0;
  _DAT_14cb86048 = local_68;
  _DAT_14cb86050 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb86060 = CONCAT44(DAT_14cb86064,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb86064 == 0) {
    _DAT_14cb86060 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb86058,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb86058,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb86030) && ((DAT_14cb85fc0 == (int *)0x0 || (*DAT_14cb85fc0 < DAT_14cb86030)))) {
    DAT_14cb85fc0 = &DAT_14cb86030;
  }
  FUN_1460f4d02();
  local_30 = &local_70;
  local_70 = &DAT_14cb86030;
  local_38 = &DAT_14cb86034;
  FUN_1460f4d9c(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460f4d02 FUN_1460f4d02 body=153 status=ok
// SIG undefined FUN_1460f4d02(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460f4d02(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb86018) {
    FUN_144b3d300(&DAT_14cb86018);
    if (DAT_14cb86018 == -1) {
      DAT_14cb85fe8 = 0;
      DAT_14cb85ff0 = 0;
      DAT_14cb85fc8 = 0;
      _DAT_14cb85fd0 = 0;
      _DAT_14cb85ff4 = 0xffffffff00000080;
      DAT_14cb85ffc = 0;
      DAT_14cb86008 = 0;
      DAT_14cb86010 = 0;
      atexit(FUN_143de69ab);
      _Init_thread_footer(&DAT_14cb86018);
      return;
    }
  }
  return;
}



// FUNCTION 1460f4d9c FUN_1460f4d9c body=338 status=ok
// SIG undefined FUN_1460f4d9c(void)

undefined4 * FUN_1460f4d9c(undefined4 *param_1,undefined8 *param_2)

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
  FUN_1460f4f82(local_40);
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
  cVar5 = FUN_1460f4ef0(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb85fd0 - DAT_14cb85ffc;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb86010)) {
      uVar10 = DAT_14cb86010 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb86008;
      if (DAT_14cb86008 == (undefined *)0x0) {
        puVar7 = &DAT_14cb86000;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb86010 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb86008;
      if (DAT_14cb86008 == (undefined *)0x0) {
        puVar7 = &DAT_14cb86000;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb86010 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb86010 = iVar9;
      FUN_1460f5090();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460f4ef0 FUN_1460f4ef0 body=145 status=ok
// SIG undefined FUN_1460f4ef0(void)

undefined8 FUN_1460f4ef0(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb85fd0 - DAT_14cb85ffc != 1) && (DAT_14cb85fd0 != DAT_14cb85ffc)) {
    puVar6 = &DAT_14cb86000;
    if (DAT_14cb86008 != (undefined *)0x0) {
      puVar6 = DAT_14cb86008;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb86010 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb85fc8 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d988d0(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460f4f82 FUN_1460f4f82 body=270 status=ok
// SIG undefined FUN_1460f4f82(void)

int * FUN_1460f4f82(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb85ff8;
  iVar3 = DAT_14cb85fd0;
  if (DAT_14cb85ffc == 0) {
    iVar2 = DAT_14cb85fd0 + 1;
    bVar7 = DAT_14cb85fd4 == DAT_14cb85fd0;
    DAT_14cb85fd0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb85fc8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb85fd8,1);
    puVar4 = DAT_14cb85fe8;
    if (DAT_14cb85fe8 == (undefined *)0x0) {
      puVar4 = &DAT_14cb85fd8;
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
    lVar6 = (longlong)DAT_14cb85ff8;
    DAT_14cb85ff8 = *(int *)(DAT_14cb85fc8 + 4 + lVar6 * 0x18);
    DAT_14cb85ffc = DAT_14cb85ffc + -1;
    if (DAT_14cb85ffc != 0) {
      *(undefined4 *)(DAT_14cb85fc8 + (longlong)DAT_14cb85ff8 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb85fd8;
  if (DAT_14cb85fe8 != (undefined *)0x0) {
    puVar4 = DAT_14cb85fe8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb85fc8;
  return param_1;
}



// FUNCTION 1460f5090 FUN_1460f5090 body=523 status=ok
// SIG undefined FUN_1460f5090(void)

void FUN_1460f5090(void)

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
  if (DAT_14cb86008 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb86008,0,0,4);
  }
  uVar3 = DAT_14cb86010;
  uVar2 = local_50;
  if (DAT_14cb86010 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb86000,0,DAT_14cb86010,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb86008;
        if (DAT_14cb86008 == (undefined *)0x0) {
          puVar6 = &DAT_14cb86000;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb86010 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb85fd8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb85ff0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb85fc8;
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
                (longlong)(int)DAT_14cb86010 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb86008;
        if (DAT_14cb86008 == (undefined *)0x0) {
          puVar6 = &DAT_14cb86000;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb86010 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb86008;
        if (DAT_14cb86008 == (undefined *)0x0) {
          puVar6 = &DAT_14cb86000;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb86010 - 1U) * 4) = iVar4;
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



// FUNCTION 1460f529c FUN_1460f529c body=507 status=ok
// SIG undefined FUN_1460f529c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460f529c(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb88b20 = 0;
  FUN_1446ddc76(&DAT_14cb88b24,"gbxmusic",1);
  _DAT_14cb88b30 = 0;
  _DAT_14cb88b38 = 0;
  _DAT_14cb88b40 = 0;
  DAT_14cb88b48 = (void *)0x0;
  _DAT_14cb88b50 = 0;
  _DAT_14cb88b58 = FUN_148929576;
  DAT_14cb88b60 = *param_1;
  DAT_14cb88b70 = param_1[2];
  param_1[2] = 0;
  DAT_14cb88b80._0_4_ = (undefined4)param_1[4];
  DAT_14cb88b80._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb88b88 = (undefined4)param_1[5];
  uRam000000014cb88b8c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb88b90 = (undefined4)param_1[6];
  uRam000000014cb88b94 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb88b98 = (undefined4)param_1[7];
  uRam000000014cb88b9c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb88b60 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb88b30 = 0;
  _DAT_14cb88b38 = local_68;
  _DAT_14cb88b40 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb88b50 = CONCAT44(DAT_14cb88b54,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb88b54 == 0) {
    _DAT_14cb88b50 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb88b48,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb88b48,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb88b20) && ((DAT_14cb88aa8 == (int *)0x0 || (*DAT_14cb88aa8 < DAT_14cb88b20)))) {
    DAT_14cb88aa8 = &DAT_14cb88b20;
  }
  FUN_1460f5498();
  local_30 = &local_70;
  local_70 = &DAT_14cb88b20;
  local_38 = &DAT_14cb88b24;
  FUN_1460f5532(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460f5498 FUN_1460f5498 body=153 status=ok
// SIG undefined FUN_1460f5498(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460f5498(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb88b00) {
    FUN_144b3d300(&DAT_14cb88b00);
    if (DAT_14cb88b00 == -1) {
      DAT_14cb88ad0 = 0;
      DAT_14cb88ad8 = 0;
      DAT_14cb88ab0 = 0;
      _DAT_14cb88ab8 = 0;
      _DAT_14cb88adc = 0xffffffff00000080;
      DAT_14cb88ae4 = 0;
      DAT_14cb88af0 = 0;
      DAT_14cb88af8 = 0;
      atexit(FUN_143e0338f);
      _Init_thread_footer(&DAT_14cb88b00);
      return;
    }
  }
  return;
}



// FUNCTION 1460f5532 FUN_1460f5532 body=338 status=ok
// SIG undefined FUN_1460f5532(void)

undefined4 * FUN_1460f5532(undefined4 *param_1,undefined8 *param_2)

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
  FUN_1460f5718(local_40);
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
  cVar5 = FUN_1460f5686(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb88ab8 - DAT_14cb88ae4;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb88af8)) {
      uVar10 = DAT_14cb88af8 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb88af0;
      if (DAT_14cb88af0 == (undefined *)0x0) {
        puVar7 = &DAT_14cb88ae8;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb88af8 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb88af0;
      if (DAT_14cb88af0 == (undefined *)0x0) {
        puVar7 = &DAT_14cb88ae8;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb88af8 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb88af8 = iVar9;
      FUN_1460f5826();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460f5686 FUN_1460f5686 body=145 status=ok
// SIG undefined FUN_1460f5686(void)

undefined8 FUN_1460f5686(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb88ab8 - DAT_14cb88ae4 != 1) && (DAT_14cb88ab8 != DAT_14cb88ae4)) {
    puVar6 = &DAT_14cb88ae8;
    if (DAT_14cb88af0 != (undefined *)0x0) {
      puVar6 = DAT_14cb88af0;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb88af8 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb88ab0 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d98abc(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460f5718 FUN_1460f5718 body=270 status=ok
// SIG undefined FUN_1460f5718(void)

int * FUN_1460f5718(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb88ae0;
  iVar3 = DAT_14cb88ab8;
  if (DAT_14cb88ae4 == 0) {
    iVar2 = DAT_14cb88ab8 + 1;
    bVar7 = DAT_14cb88abc == DAT_14cb88ab8;
    DAT_14cb88ab8 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb88ab0,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb88ac0,1);
    puVar4 = DAT_14cb88ad0;
    if (DAT_14cb88ad0 == (undefined *)0x0) {
      puVar4 = &DAT_14cb88ac0;
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
    lVar6 = (longlong)DAT_14cb88ae0;
    DAT_14cb88ae0 = *(int *)(DAT_14cb88ab0 + 4 + lVar6 * 0x18);
    DAT_14cb88ae4 = DAT_14cb88ae4 + -1;
    if (DAT_14cb88ae4 != 0) {
      *(undefined4 *)(DAT_14cb88ab0 + (longlong)DAT_14cb88ae0 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb88ac0;
  if (DAT_14cb88ad0 != (undefined *)0x0) {
    puVar4 = DAT_14cb88ad0;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb88ab0;
  return param_1;
}



// FUNCTION 1460f5826 FUN_1460f5826 body=523 status=ok
// SIG undefined FUN_1460f5826(void)

void FUN_1460f5826(void)

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
  if (DAT_14cb88af0 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb88af0,0,0,4);
  }
  uVar3 = DAT_14cb88af8;
  uVar2 = local_50;
  if (DAT_14cb88af8 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb88ae8,0,DAT_14cb88af8,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb88af0;
        if (DAT_14cb88af0 == (undefined *)0x0) {
          puVar6 = &DAT_14cb88ae8;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb88af8 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb88ac0;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb88ad8 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb88ab0;
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
                (longlong)(int)DAT_14cb88af8 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb88af0;
        if (DAT_14cb88af0 == (undefined *)0x0) {
          puVar6 = &DAT_14cb88ae8;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb88af8 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb88af0;
        if (DAT_14cb88af0 == (undefined *)0x0) {
          puVar6 = &DAT_14cb88ae8;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb88af8 - 1U) * 4) = iVar4;
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



// FUNCTION 1460f5a32 FUN_1460f5a32 body=507 status=ok
// SIG undefined FUN_1460f5a32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460f5a32(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb89030 = 0;
  FUN_1446ddc76(&DAT_14cb89034,"GbxPlayerGroup",1);
  _DAT_14cb89040 = 0;
  _DAT_14cb89048 = 0;
  _DAT_14cb89050 = 0;
  DAT_14cb89058 = (void *)0x0;
  _DAT_14cb89060 = 0;
  _DAT_14cb89068 = FUN_14892ce5e;
  DAT_14cb89070 = *param_1;
  DAT_14cb89080 = param_1[2];
  param_1[2] = 0;
  DAT_14cb89090._0_4_ = (undefined4)param_1[4];
  DAT_14cb89090._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb89098 = (undefined4)param_1[5];
  uRam000000014cb8909c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb890a0 = (undefined4)param_1[6];
  uRam000000014cb890a4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb890a8 = (undefined4)param_1[7];
  uRam000000014cb890ac = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb89070 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb89040 = 0;
  _DAT_14cb89048 = local_68;
  _DAT_14cb89050 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb89060 = CONCAT44(DAT_14cb89064,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb89064 == 0) {
    _DAT_14cb89060 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb89058,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb89058,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb89030) && ((DAT_14cb88fc0 == (int *)0x0 || (*DAT_14cb88fc0 < DAT_14cb89030)))) {
    DAT_14cb88fc0 = &DAT_14cb89030;
  }
  FUN_1460f5c2e();
  local_30 = &local_70;
  local_70 = &DAT_14cb89030;
  local_38 = &DAT_14cb89034;
  FUN_1460f5cc8(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460f5c2e FUN_1460f5c2e body=153 status=ok
// SIG undefined FUN_1460f5c2e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460f5c2e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb89018) {
    FUN_144b3d300(&DAT_14cb89018);
    if (DAT_14cb89018 == -1) {
      DAT_14cb88fe8 = 0;
      DAT_14cb88ff0 = 0;
      DAT_14cb88fc8 = 0;
      _DAT_14cb88fd0 = 0;
      _DAT_14cb88ff4 = 0xffffffff00000080;
      DAT_14cb88ffc = 0;
      DAT_14cb89008 = 0;
      DAT_14cb89010 = 0;
      atexit(FUN_143e05387);
      _Init_thread_footer(&DAT_14cb89018);
      return;
    }
  }
  return;
}



// FUNCTION 1460f5cc8 FUN_1460f5cc8 body=338 status=ok
// SIG undefined FUN_1460f5cc8(void)

undefined4 * FUN_1460f5cc8(undefined4 *param_1,undefined8 *param_2)

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
  FUN_1460f5eae(local_40);
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
  cVar5 = FUN_1460f5e1c(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb88fd0 - DAT_14cb88ffc;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb89010)) {
      uVar10 = DAT_14cb89010 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb89008;
      if (DAT_14cb89008 == (undefined *)0x0) {
        puVar7 = &DAT_14cb89000;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb89010 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb89008;
      if (DAT_14cb89008 == (undefined *)0x0) {
        puVar7 = &DAT_14cb89000;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb89010 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb89010 = iVar9;
      FUN_1460f5fbc();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460f5e1c FUN_1460f5e1c body=145 status=ok
// SIG undefined FUN_1460f5e1c(void)

undefined8 FUN_1460f5e1c(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb88fd0 - DAT_14cb88ffc != 1) && (DAT_14cb88fd0 != DAT_14cb88ffc)) {
    puVar6 = &DAT_14cb89000;
    if (DAT_14cb89008 != (undefined *)0x0) {
      puVar6 = DAT_14cb89008;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb89010 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb88fc8 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d98e94(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460f5eae FUN_1460f5eae body=270 status=ok
// SIG undefined FUN_1460f5eae(void)

int * FUN_1460f5eae(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb88ff8;
  iVar3 = DAT_14cb88fd0;
  if (DAT_14cb88ffc == 0) {
    iVar2 = DAT_14cb88fd0 + 1;
    bVar7 = DAT_14cb88fd4 == DAT_14cb88fd0;
    DAT_14cb88fd0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb88fc8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb88fd8,1);
    puVar4 = DAT_14cb88fe8;
    if (DAT_14cb88fe8 == (undefined *)0x0) {
      puVar4 = &DAT_14cb88fd8;
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
    lVar6 = (longlong)DAT_14cb88ff8;
    DAT_14cb88ff8 = *(int *)(DAT_14cb88fc8 + 4 + lVar6 * 0x18);
    DAT_14cb88ffc = DAT_14cb88ffc + -1;
    if (DAT_14cb88ffc != 0) {
      *(undefined4 *)(DAT_14cb88fc8 + (longlong)DAT_14cb88ff8 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb88fd8;
  if (DAT_14cb88fe8 != (undefined *)0x0) {
    puVar4 = DAT_14cb88fe8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb88fc8;
  return param_1;
}



// FUNCTION 1460f5fbc FUN_1460f5fbc body=523 status=ok
// SIG undefined FUN_1460f5fbc(void)

void FUN_1460f5fbc(void)

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
  if (DAT_14cb89008 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb89008,0,0,4);
  }
  uVar3 = DAT_14cb89010;
  uVar2 = local_50;
  if (DAT_14cb89010 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb89000,0,DAT_14cb89010,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb89008;
        if (DAT_14cb89008 == (undefined *)0x0) {
          puVar6 = &DAT_14cb89000;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb89010 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb88fd8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb88ff0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb88fc8;
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
                (longlong)(int)DAT_14cb89010 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb89008;
        if (DAT_14cb89008 == (undefined *)0x0) {
          puVar6 = &DAT_14cb89000;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb89010 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb89008;
        if (DAT_14cb89008 == (undefined *)0x0) {
          puVar6 = &DAT_14cb89000;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb89010 - 1U) * 4) = iVar4;
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



// FUNCTION 1460f61c8 FUN_1460f61c8 body=507 status=ok
// SIG undefined FUN_1460f61c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460f61c8(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb89af0 = 0;
  FUN_1446ddc76(&DAT_14cb89af4,"rewards",1);
  _DAT_14cb89b00 = 0;
  _DAT_14cb89b08 = 0;
  _DAT_14cb89b10 = 0;
  DAT_14cb89b18 = (void *)0x0;
  _DAT_14cb89b20 = 0;
  _DAT_14cb89b28 = FUN_14893574c;
  DAT_14cb89b30 = *param_1;
  DAT_14cb89b40 = param_1[2];
  param_1[2] = 0;
  DAT_14cb89b50._0_4_ = (undefined4)param_1[4];
  DAT_14cb89b50._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb89b58 = (undefined4)param_1[5];
  uRam000000014cb89b5c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb89b60 = (undefined4)param_1[6];
  uRam000000014cb89b64 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb89b68 = (undefined4)param_1[7];
  uRam000000014cb89b6c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb89b30 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb89b00 = 0;
  _DAT_14cb89b08 = local_68;
  _DAT_14cb89b10 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb89b20 = CONCAT44(DAT_14cb89b24,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb89b24 == 0) {
    _DAT_14cb89b20 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb89b18,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb89b18,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb89af0) && ((DAT_14cb89a78 == (int *)0x0 || (*DAT_14cb89a78 < DAT_14cb89af0)))) {
    DAT_14cb89a78 = &DAT_14cb89af0;
  }
  FUN_1460f63c4();
  local_30 = &local_70;
  local_70 = &DAT_14cb89af0;
  local_38 = &DAT_14cb89af4;
  FUN_1460f645e(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460f63c4 FUN_1460f63c4 body=153 status=ok
// SIG undefined FUN_1460f63c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460f63c4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb89ad0) {
    FUN_144b3d300(&DAT_14cb89ad0);
    if (DAT_14cb89ad0 == -1) {
      DAT_14cb89aa0 = 0;
      DAT_14cb89aa8 = 0;
      DAT_14cb89a80 = 0;
      _DAT_14cb89a88 = 0;
      _DAT_14cb89aac = 0xffffffff00000080;
      DAT_14cb89ab4 = 0;
      DAT_14cb89ac0 = 0;
      DAT_14cb89ac8 = 0;
      atexit(FUN_143e0ae9e);
      _Init_thread_footer(&DAT_14cb89ad0);
      return;
    }
  }
  return;
}



// FUNCTION 1460f645e FUN_1460f645e body=338 status=ok
// SIG undefined FUN_1460f645e(void)

undefined4 * FUN_1460f645e(undefined4 *param_1,undefined8 *param_2)

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
  FUN_1460f6644(local_40);
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
  cVar5 = FUN_1460f65b2(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb89a88 - DAT_14cb89ab4;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb89ac8)) {
      uVar10 = DAT_14cb89ac8 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb89ac0;
      if (DAT_14cb89ac0 == (undefined *)0x0) {
        puVar7 = &DAT_14cb89ab8;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb89ac8 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb89ac0;
      if (DAT_14cb89ac0 == (undefined *)0x0) {
        puVar7 = &DAT_14cb89ab8;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb89ac8 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb89ac8 = iVar9;
      FUN_1460f6752();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460f65b2 FUN_1460f65b2 body=145 status=ok
// SIG undefined FUN_1460f65b2(void)

undefined8 FUN_1460f65b2(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb89a88 - DAT_14cb89ab4 != 1) && (DAT_14cb89a88 != DAT_14cb89ab4)) {
    puVar6 = &DAT_14cb89ab8;
    if (DAT_14cb89ac0 != (undefined *)0x0) {
      puVar6 = DAT_14cb89ac0;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb89ac8 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb89a80 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d99080(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460f6644 FUN_1460f6644 body=270 status=ok
// SIG undefined FUN_1460f6644(void)

int * FUN_1460f6644(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb89ab0;
  iVar3 = DAT_14cb89a88;
  if (DAT_14cb89ab4 == 0) {
    iVar2 = DAT_14cb89a88 + 1;
    bVar7 = DAT_14cb89a8c == DAT_14cb89a88;
    DAT_14cb89a88 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb89a80,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb89a90,1);
    puVar4 = DAT_14cb89aa0;
    if (DAT_14cb89aa0 == (undefined *)0x0) {
      puVar4 = &DAT_14cb89a90;
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
    lVar6 = (longlong)DAT_14cb89ab0;
    DAT_14cb89ab0 = *(int *)(DAT_14cb89a80 + 4 + lVar6 * 0x18);
    DAT_14cb89ab4 = DAT_14cb89ab4 + -1;
    if (DAT_14cb89ab4 != 0) {
      *(undefined4 *)(DAT_14cb89a80 + (longlong)DAT_14cb89ab0 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb89a90;
  if (DAT_14cb89aa0 != (undefined *)0x0) {
    puVar4 = DAT_14cb89aa0;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb89a80;
  return param_1;
}



// FUNCTION 1460f6752 FUN_1460f6752 body=523 status=ok
// SIG undefined FUN_1460f6752(void)

void FUN_1460f6752(void)

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
  if (DAT_14cb89ac0 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb89ac0,0,0,4);
  }
  uVar3 = DAT_14cb89ac8;
  uVar2 = local_50;
  if (DAT_14cb89ac8 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb89ab8,0,DAT_14cb89ac8,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb89ac0;
        if (DAT_14cb89ac0 == (undefined *)0x0) {
          puVar6 = &DAT_14cb89ab8;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb89ac8 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb89a90;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb89aa8 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb89a80;
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
                (longlong)(int)DAT_14cb89ac8 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb89ac0;
        if (DAT_14cb89ac0 == (undefined *)0x0) {
          puVar6 = &DAT_14cb89ab8;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb89ac8 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb89ac0;
        if (DAT_14cb89ac0 == (undefined *)0x0) {
          puVar6 = &DAT_14cb89ab8;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb89ac8 - 1U) * 4) = iVar4;
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



// FUNCTION 1460f695e FUN_1460f695e body=507 status=ok
// SIG undefined FUN_1460f695e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460f695e(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb8a2c0 = 0;
  FUN_1446ddc76(&DAT_14cb8a2c4,"rewards",1);
  _DAT_14cb8a2d0 = 0;
  _DAT_14cb8a2d8 = 0;
  _DAT_14cb8a2e0 = 0;
  DAT_14cb8a2e8 = (void *)0x0;
  _DAT_14cb8a2f0 = 0;
  _DAT_14cb8a2f8 = FUN_148942576;
  DAT_14cb8a300 = *param_1;
  DAT_14cb8a310 = param_1[2];
  param_1[2] = 0;
  DAT_14cb8a320._0_4_ = (undefined4)param_1[4];
  DAT_14cb8a320._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb8a328 = (undefined4)param_1[5];
  uRam000000014cb8a32c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb8a330 = (undefined4)param_1[6];
  uRam000000014cb8a334 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb8a338 = (undefined4)param_1[7];
  uRam000000014cb8a33c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb8a300 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb8a2d0 = 0;
  _DAT_14cb8a2d8 = local_68;
  _DAT_14cb8a2e0 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb8a2f0 = CONCAT44(DAT_14cb8a2f4,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb8a2f4 == 0) {
    _DAT_14cb8a2f0 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb8a2e8,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb8a2e8,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb8a2c0) && ((DAT_14cb8a248 == (int *)0x0 || (*DAT_14cb8a248 < DAT_14cb8a2c0)))) {
    DAT_14cb8a248 = &DAT_14cb8a2c0;
  }
  FUN_1460f6b5a();
  local_30 = &local_70;
  local_70 = &DAT_14cb8a2c0;
  local_38 = &DAT_14cb8a2c4;
  FUN_1460f6bf4(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460f6b5a FUN_1460f6b5a body=153 status=ok
// SIG undefined FUN_1460f6b5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460f6b5a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8a2a0) {
    FUN_144b3d300(&DAT_14cb8a2a0);
    if (DAT_14cb8a2a0 == -1) {
      DAT_14cb8a270 = 0;
      DAT_14cb8a278 = 0;
      DAT_14cb8a250 = 0;
      _DAT_14cb8a258 = 0;
      _DAT_14cb8a27c = 0xffffffff00000080;
      DAT_14cb8a284 = 0;
      DAT_14cb8a290 = 0;
      DAT_14cb8a298 = 0;
      atexit(FUN_143e1096a);
      _Init_thread_footer(&DAT_14cb8a2a0);
      return;
    }
  }
  return;
}



// FUNCTION 1460f6bf4 FUN_1460f6bf4 body=338 status=ok
// SIG undefined FUN_1460f6bf4(void)

undefined4 * FUN_1460f6bf4(undefined4 *param_1,undefined8 *param_2)

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
  FUN_1460f6dda(local_40);
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
  cVar5 = FUN_1460f6d48(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb8a258 - DAT_14cb8a284;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb8a298)) {
      uVar10 = DAT_14cb8a298 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb8a290;
      if (DAT_14cb8a290 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8a288;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8a298 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb8a290;
      if (DAT_14cb8a290 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8a288;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8a298 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb8a298 = iVar9;
      FUN_1460f6ee8();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460f6d48 FUN_1460f6d48 body=145 status=ok
// SIG undefined FUN_1460f6d48(void)

undefined8 FUN_1460f6d48(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb8a258 - DAT_14cb8a284 != 1) && (DAT_14cb8a258 != DAT_14cb8a284)) {
    puVar6 = &DAT_14cb8a288;
    if (DAT_14cb8a290 != (undefined *)0x0) {
      puVar6 = DAT_14cb8a290;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb8a298 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb8a250 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9926c(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460f6dda FUN_1460f6dda body=270 status=ok
// SIG undefined FUN_1460f6dda(void)

int * FUN_1460f6dda(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb8a280;
  iVar3 = DAT_14cb8a258;
  if (DAT_14cb8a284 == 0) {
    iVar2 = DAT_14cb8a258 + 1;
    bVar7 = DAT_14cb8a25c == DAT_14cb8a258;
    DAT_14cb8a258 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb8a250,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb8a260,1);
    puVar4 = DAT_14cb8a270;
    if (DAT_14cb8a270 == (undefined *)0x0) {
      puVar4 = &DAT_14cb8a260;
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
    lVar6 = (longlong)DAT_14cb8a280;
    DAT_14cb8a280 = *(int *)(DAT_14cb8a250 + 4 + lVar6 * 0x18);
    DAT_14cb8a284 = DAT_14cb8a284 + -1;
    if (DAT_14cb8a284 != 0) {
      *(undefined4 *)(DAT_14cb8a250 + (longlong)DAT_14cb8a280 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb8a260;
  if (DAT_14cb8a270 != (undefined *)0x0) {
    puVar4 = DAT_14cb8a270;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb8a250;
  return param_1;
}



// FUNCTION 1460f6ee8 FUN_1460f6ee8 body=523 status=ok
// SIG undefined FUN_1460f6ee8(void)

void FUN_1460f6ee8(void)

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
  if (DAT_14cb8a290 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb8a290,0,0,4);
  }
  uVar3 = DAT_14cb8a298;
  uVar2 = local_50;
  if (DAT_14cb8a298 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb8a288,0,DAT_14cb8a298,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb8a290;
        if (DAT_14cb8a290 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8a288;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb8a298 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb8a260;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb8a278 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb8a250;
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
                (longlong)(int)DAT_14cb8a298 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb8a290;
        if (DAT_14cb8a290 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8a288;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb8a298 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb8a290;
        if (DAT_14cb8a290 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8a288;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb8a298 - 1U) * 4) = iVar4;
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



// FUNCTION 1460f70f4 FUN_1460f70f4 body=507 status=ok
// SIG undefined FUN_1460f70f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460f70f4(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb8a900 = 0;
  FUN_1446ddc76(&DAT_14cb8a904,"skill_action_exec_query",1);
  _DAT_14cb8a910 = 0;
  _DAT_14cb8a918 = 0;
  _DAT_14cb8a920 = 0;
  DAT_14cb8a928 = (void *)0x0;
  _DAT_14cb8a930 = 0;
  _DAT_14cb8a938 = FUN_14895eae8;
  DAT_14cb8a940 = *param_1;
  DAT_14cb8a950 = param_1[2];
  param_1[2] = 0;
  DAT_14cb8a960._0_4_ = (undefined4)param_1[4];
  DAT_14cb8a960._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb8a968 = (undefined4)param_1[5];
  uRam000000014cb8a96c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb8a970 = (undefined4)param_1[6];
  uRam000000014cb8a974 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb8a978 = (undefined4)param_1[7];
  uRam000000014cb8a97c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb8a940 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb8a910 = 0;
  _DAT_14cb8a918 = local_68;
  _DAT_14cb8a920 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb8a930 = CONCAT44(DAT_14cb8a934,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb8a934 == 0) {
    _DAT_14cb8a930 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb8a928,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb8a928,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb8a900) && ((DAT_14cb8a890 == (int *)0x0 || (*DAT_14cb8a890 < DAT_14cb8a900)))) {
    DAT_14cb8a890 = &DAT_14cb8a900;
  }
  FUN_1460f72f0();
  local_30 = &local_70;
  local_70 = &DAT_14cb8a900;
  local_38 = &DAT_14cb8a904;
  FUN_1460f738a(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460f72f0 FUN_1460f72f0 body=153 status=ok
// SIG undefined FUN_1460f72f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460f72f0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8a8e8) {
    FUN_144b3d300(&DAT_14cb8a8e8);
    if (DAT_14cb8a8e8 == -1) {
      DAT_14cb8a8b8 = 0;
      DAT_14cb8a8c0 = 0;
      DAT_14cb8a898 = 0;
      _DAT_14cb8a8a0 = 0;
      _DAT_14cb8a8c4 = 0xffffffff00000080;
      DAT_14cb8a8cc = 0;
      DAT_14cb8a8d8 = 0;
      DAT_14cb8a8e0 = 0;
      atexit(FUN_143e21fda);
      _Init_thread_footer(&DAT_14cb8a8e8);
      return;
    }
  }
  return;
}



// FUNCTION 1460f738a FUN_1460f738a body=338 status=ok
// SIG undefined FUN_1460f738a(void)

undefined4 * FUN_1460f738a(undefined4 *param_1,undefined8 *param_2)

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
  FUN_1460f7570(local_40);
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
  cVar5 = FUN_1460f74de(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb8a8a0 - DAT_14cb8a8cc;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb8a8e0)) {
      uVar10 = DAT_14cb8a8e0 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb8a8d8;
      if (DAT_14cb8a8d8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8a8d0;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8a8e0 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb8a8d8;
      if (DAT_14cb8a8d8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8a8d0;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8a8e0 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb8a8e0 = iVar9;
      FUN_1460f767e();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460f74de FUN_1460f74de body=145 status=ok
// SIG undefined FUN_1460f74de(void)

undefined8 FUN_1460f74de(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb8a8a0 - DAT_14cb8a8cc != 1) && (DAT_14cb8a8a0 != DAT_14cb8a8cc)) {
    puVar6 = &DAT_14cb8a8d0;
    if (DAT_14cb8a8d8 != (undefined *)0x0) {
      puVar6 = DAT_14cb8a8d8;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb8a8e0 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb8a898 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d99458(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460f7570 FUN_1460f7570 body=270 status=ok
// SIG undefined FUN_1460f7570(void)

int * FUN_1460f7570(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb8a8c8;
  iVar3 = DAT_14cb8a8a0;
  if (DAT_14cb8a8cc == 0) {
    iVar2 = DAT_14cb8a8a0 + 1;
    bVar7 = DAT_14cb8a8a4 == DAT_14cb8a8a0;
    DAT_14cb8a8a0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb8a898,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb8a8a8,1);
    puVar4 = DAT_14cb8a8b8;
    if (DAT_14cb8a8b8 == (undefined *)0x0) {
      puVar4 = &DAT_14cb8a8a8;
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
    lVar6 = (longlong)DAT_14cb8a8c8;
    DAT_14cb8a8c8 = *(int *)(DAT_14cb8a898 + 4 + lVar6 * 0x18);
    DAT_14cb8a8cc = DAT_14cb8a8cc + -1;
    if (DAT_14cb8a8cc != 0) {
      *(undefined4 *)(DAT_14cb8a898 + (longlong)DAT_14cb8a8c8 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb8a8a8;
  if (DAT_14cb8a8b8 != (undefined *)0x0) {
    puVar4 = DAT_14cb8a8b8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb8a898;
  return param_1;
}



// FUNCTION 1460f767e FUN_1460f767e body=523 status=ok
// SIG undefined FUN_1460f767e(void)

void FUN_1460f767e(void)

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
  if (DAT_14cb8a8d8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb8a8d8,0,0,4);
  }
  uVar3 = DAT_14cb8a8e0;
  uVar2 = local_50;
  if (DAT_14cb8a8e0 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb8a8d0,0,DAT_14cb8a8e0,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb8a8d8;
        if (DAT_14cb8a8d8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8a8d0;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb8a8e0 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb8a8a8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb8a8c0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb8a898;
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
                (longlong)(int)DAT_14cb8a8e0 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb8a8d8;
        if (DAT_14cb8a8d8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8a8d0;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb8a8e0 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb8a8d8;
        if (DAT_14cb8a8d8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8a8d0;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb8a8e0 - 1U) * 4) = iVar4;
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



// FUNCTION 1460f788a FUN_1460f788a body=507 status=ok
// SIG undefined FUN_1460f788a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460f788a(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb8ac70 = 0;
  FUN_1446ddc76(&DAT_14cb8ac74,"skill_library",1);
  _DAT_14cb8ac80 = 0;
  _DAT_14cb8ac88 = 0;
  _DAT_14cb8ac90 = 0;
  DAT_14cb8ac98 = (void *)0x0;
  _DAT_14cb8aca0 = 0;
  _DAT_14cb8aca8 = FUN_14896fcb6;
  DAT_14cb8acb0 = *param_1;
  DAT_14cb8acc0 = param_1[2];
  param_1[2] = 0;
  DAT_14cb8acd0._0_4_ = (undefined4)param_1[4];
  DAT_14cb8acd0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb8acd8 = (undefined4)param_1[5];
  uRam000000014cb8acdc = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb8ace0 = (undefined4)param_1[6];
  uRam000000014cb8ace4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb8ace8 = (undefined4)param_1[7];
  uRam000000014cb8acec = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb8acb0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb8ac80 = 0;
  _DAT_14cb8ac88 = local_68;
  _DAT_14cb8ac90 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb8aca0 = CONCAT44(DAT_14cb8aca4,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb8aca4 == 0) {
    _DAT_14cb8aca0 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb8ac98,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb8ac98,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb8ac70) && ((DAT_14cb8ac00 == (int *)0x0 || (*DAT_14cb8ac00 < DAT_14cb8ac70)))) {
    DAT_14cb8ac00 = &DAT_14cb8ac70;
  }
  FUN_1460f7a86();
  local_30 = &local_70;
  local_70 = &DAT_14cb8ac70;
  local_38 = &DAT_14cb8ac74;
  FUN_1460f7b20(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460f7a86 FUN_1460f7a86 body=153 status=ok
// SIG undefined FUN_1460f7a86(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460f7a86(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8ac58) {
    FUN_144b3d300(&DAT_14cb8ac58);
    if (DAT_14cb8ac58 == -1) {
      DAT_14cb8ac28 = 0;
      DAT_14cb8ac30 = 0;
      DAT_14cb8ac08 = 0;
      _DAT_14cb8ac10 = 0;
      _DAT_14cb8ac34 = 0xffffffff00000080;
      DAT_14cb8ac3c = 0;
      DAT_14cb8ac48 = 0;
      DAT_14cb8ac50 = 0;
      atexit(FUN_143e28877);
      _Init_thread_footer(&DAT_14cb8ac58);
      return;
    }
  }
  return;
}



// FUNCTION 1460f7b20 FUN_1460f7b20 body=338 status=ok
// SIG undefined FUN_1460f7b20(void)

undefined4 * FUN_1460f7b20(undefined4 *param_1,undefined8 *param_2)

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
  FUN_1460f7d06(local_40);
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
  cVar5 = FUN_1460f7c74(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb8ac10 - DAT_14cb8ac3c;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb8ac50)) {
      uVar10 = DAT_14cb8ac50 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb8ac48;
      if (DAT_14cb8ac48 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8ac40;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8ac50 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb8ac48;
      if (DAT_14cb8ac48 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8ac40;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8ac50 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb8ac50 = iVar9;
      FUN_1460f7e14();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460f7c74 FUN_1460f7c74 body=145 status=ok
// SIG undefined FUN_1460f7c74(void)

undefined8 FUN_1460f7c74(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb8ac10 - DAT_14cb8ac3c != 1) && (DAT_14cb8ac10 != DAT_14cb8ac3c)) {
    puVar6 = &DAT_14cb8ac40;
    if (DAT_14cb8ac48 != (undefined *)0x0) {
      puVar6 = DAT_14cb8ac48;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb8ac50 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb8ac08 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d99644(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460f7d06 FUN_1460f7d06 body=270 status=ok
// SIG undefined FUN_1460f7d06(void)

int * FUN_1460f7d06(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb8ac38;
  iVar3 = DAT_14cb8ac10;
  if (DAT_14cb8ac3c == 0) {
    iVar2 = DAT_14cb8ac10 + 1;
    bVar7 = DAT_14cb8ac14 == DAT_14cb8ac10;
    DAT_14cb8ac10 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb8ac08,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb8ac18,1);
    puVar4 = DAT_14cb8ac28;
    if (DAT_14cb8ac28 == (undefined *)0x0) {
      puVar4 = &DAT_14cb8ac18;
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
    lVar6 = (longlong)DAT_14cb8ac38;
    DAT_14cb8ac38 = *(int *)(DAT_14cb8ac08 + 4 + lVar6 * 0x18);
    DAT_14cb8ac3c = DAT_14cb8ac3c + -1;
    if (DAT_14cb8ac3c != 0) {
      *(undefined4 *)(DAT_14cb8ac08 + (longlong)DAT_14cb8ac38 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb8ac18;
  if (DAT_14cb8ac28 != (undefined *)0x0) {
    puVar4 = DAT_14cb8ac28;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb8ac08;
  return param_1;
}



// FUNCTION 1460f7e14 FUN_1460f7e14 body=523 status=ok
// SIG undefined FUN_1460f7e14(void)

void FUN_1460f7e14(void)

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
  if (DAT_14cb8ac48 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb8ac48,0,0,4);
  }
  uVar3 = DAT_14cb8ac50;
  uVar2 = local_50;
  if (DAT_14cb8ac50 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb8ac40,0,DAT_14cb8ac50,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb8ac48;
        if (DAT_14cb8ac48 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8ac40;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb8ac50 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb8ac18;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb8ac30 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb8ac08;
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
                (longlong)(int)DAT_14cb8ac50 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb8ac48;
        if (DAT_14cb8ac48 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8ac40;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb8ac50 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb8ac48;
        if (DAT_14cb8ac48 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8ac40;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb8ac50 - 1U) * 4) = iVar4;
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



// FUNCTION 1460f8020 FUN_1460f8020 body=507 status=ok
// SIG undefined FUN_1460f8020(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460f8020(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb8af00 = 0;
  FUN_1446ddc76(&DAT_14cb8af04,"skill_alias",1);
  _DAT_14cb8af10 = 0;
  _DAT_14cb8af18 = 0;
  _DAT_14cb8af20 = 0;
  DAT_14cb8af28 = (void *)0x0;
  _DAT_14cb8af30 = 0;
  _DAT_14cb8af38 = FUN_14898354a;
  DAT_14cb8af40 = *param_1;
  DAT_14cb8af50 = param_1[2];
  param_1[2] = 0;
  DAT_14cb8af60._0_4_ = (undefined4)param_1[4];
  DAT_14cb8af60._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb8af68 = (undefined4)param_1[5];
  uRam000000014cb8af6c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb8af70 = (undefined4)param_1[6];
  uRam000000014cb8af74 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb8af78 = (undefined4)param_1[7];
  uRam000000014cb8af7c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb8af40 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb8af10 = 0;
  _DAT_14cb8af18 = local_68;
  _DAT_14cb8af20 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb8af30 = CONCAT44(DAT_14cb8af34,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb8af34 == 0) {
    _DAT_14cb8af30 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb8af28,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb8af28,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb8af00) && ((DAT_14cb8ae88 == (int *)0x0 || (*DAT_14cb8ae88 < DAT_14cb8af00)))) {
    DAT_14cb8ae88 = &DAT_14cb8af00;
  }
  FUN_1460f821c();
  local_30 = &local_70;
  local_70 = &DAT_14cb8af00;
  local_38 = &DAT_14cb8af04;
  FUN_1460f82b6(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460f821c FUN_1460f821c body=153 status=ok
// SIG undefined FUN_1460f821c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460f821c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8aee0) {
    FUN_144b3d300(&DAT_14cb8aee0);
    if (DAT_14cb8aee0 == -1) {
      DAT_14cb8aeb0 = 0;
      DAT_14cb8aeb8 = 0;
      DAT_14cb8ae90 = 0;
      _DAT_14cb8ae98 = 0;
      _DAT_14cb8aebc = 0xffffffff00000080;
      DAT_14cb8aec4 = 0;
      DAT_14cb8aed0 = 0;
      DAT_14cb8aed8 = 0;
      atexit(FUN_143e2e914);
      _Init_thread_footer(&DAT_14cb8aee0);
      return;
    }
  }
  return;
}



// FUNCTION 1460f82b6 FUN_1460f82b6 body=338 status=ok
// SIG undefined FUN_1460f82b6(void)

undefined4 * FUN_1460f82b6(undefined4 *param_1,undefined8 *param_2)

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
  FUN_1460f849c(local_40);
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
  cVar5 = FUN_1460f840a(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb8ae98 - DAT_14cb8aec4;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb8aed8)) {
      uVar10 = DAT_14cb8aed8 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb8aed0;
      if (DAT_14cb8aed0 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8aec8;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8aed8 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb8aed0;
      if (DAT_14cb8aed0 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8aec8;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8aed8 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb8aed8 = iVar9;
      FUN_1460f85aa();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460f840a FUN_1460f840a body=145 status=ok
// SIG undefined FUN_1460f840a(void)

undefined8 FUN_1460f840a(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb8ae98 - DAT_14cb8aec4 != 1) && (DAT_14cb8ae98 != DAT_14cb8aec4)) {
    puVar6 = &DAT_14cb8aec8;
    if (DAT_14cb8aed0 != (undefined *)0x0) {
      puVar6 = DAT_14cb8aed0;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb8aed8 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb8ae90 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d99830(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460f849c FUN_1460f849c body=270 status=ok
// SIG undefined FUN_1460f849c(void)

int * FUN_1460f849c(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb8aec0;
  iVar3 = DAT_14cb8ae98;
  if (DAT_14cb8aec4 == 0) {
    iVar2 = DAT_14cb8ae98 + 1;
    bVar7 = DAT_14cb8ae9c == DAT_14cb8ae98;
    DAT_14cb8ae98 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb8ae90,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb8aea0,1);
    puVar4 = DAT_14cb8aeb0;
    if (DAT_14cb8aeb0 == (undefined *)0x0) {
      puVar4 = &DAT_14cb8aea0;
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
    lVar6 = (longlong)DAT_14cb8aec0;
    DAT_14cb8aec0 = *(int *)(DAT_14cb8ae90 + 4 + lVar6 * 0x18);
    DAT_14cb8aec4 = DAT_14cb8aec4 + -1;
    if (DAT_14cb8aec4 != 0) {
      *(undefined4 *)(DAT_14cb8ae90 + (longlong)DAT_14cb8aec0 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb8aea0;
  if (DAT_14cb8aeb0 != (undefined *)0x0) {
    puVar4 = DAT_14cb8aeb0;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb8ae90;
  return param_1;
}



// FUNCTION 1460f85aa FUN_1460f85aa body=523 status=ok
// SIG undefined FUN_1460f85aa(void)

void FUN_1460f85aa(void)

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
  if (DAT_14cb8aed0 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb8aed0,0,0,4);
  }
  uVar3 = DAT_14cb8aed8;
  uVar2 = local_50;
  if (DAT_14cb8aed8 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb8aec8,0,DAT_14cb8aed8,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb8aed0;
        if (DAT_14cb8aed0 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8aec8;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb8aed8 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb8aea0;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb8aeb8 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb8ae90;
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
                (longlong)(int)DAT_14cb8aed8 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb8aed0;
        if (DAT_14cb8aed0 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8aec8;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb8aed8 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb8aed0;
        if (DAT_14cb8aed0 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8aec8;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb8aed8 - 1U) * 4) = iVar4;
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



// FUNCTION 1460f87b6 FUN_1460f87b6 body=507 status=ok
// SIG undefined FUN_1460f87b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460f87b6(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb8b030 = 0;
  FUN_1446ddc76(&DAT_14cb8b034,"skill_component_identifier",1);
  _DAT_14cb8b040 = 0;
  _DAT_14cb8b048 = 0;
  _DAT_14cb8b050 = 0;
  DAT_14cb8b058 = (void *)0x0;
  _DAT_14cb8b060 = 0;
  _DAT_14cb8b068 = FUN_148985afc;
  DAT_14cb8b070 = *param_1;
  DAT_14cb8b080 = param_1[2];
  param_1[2] = 0;
  DAT_14cb8b090._0_4_ = (undefined4)param_1[4];
  DAT_14cb8b090._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb8b098 = (undefined4)param_1[5];
  uRam000000014cb8b09c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb8b0a0 = (undefined4)param_1[6];
  uRam000000014cb8b0a4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb8b0a8 = (undefined4)param_1[7];
  uRam000000014cb8b0ac = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb8b070 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb8b040 = 0;
  _DAT_14cb8b048 = local_68;
  _DAT_14cb8b050 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb8b060 = CONCAT44(DAT_14cb8b064,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb8b064 == 0) {
    _DAT_14cb8b060 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb8b058,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb8b058,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb8b030) && ((DAT_14cb8afc0 == (int *)0x0 || (*DAT_14cb8afc0 < DAT_14cb8b030)))) {
    DAT_14cb8afc0 = &DAT_14cb8b030;
  }
  FUN_1460f89b2();
  local_30 = &local_70;
  local_70 = &DAT_14cb8b030;
  local_38 = &DAT_14cb8b034;
  FUN_1460f8a4c(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460f89b2 FUN_1460f89b2 body=153 status=ok
// SIG undefined FUN_1460f89b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460f89b2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8b018) {
    FUN_144b3d300(&DAT_14cb8b018);
    if (DAT_14cb8b018 == -1) {
      DAT_14cb8afe8 = 0;
      DAT_14cb8aff0 = 0;
      DAT_14cb8afc8 = 0;
      _DAT_14cb8afd0 = 0;
      _DAT_14cb8aff4 = 0xffffffff00000080;
      DAT_14cb8affc = 0;
      DAT_14cb8b008 = 0;
      DAT_14cb8b010 = 0;
      atexit(FUN_143e305e1);
      _Init_thread_footer(&DAT_14cb8b018);
      return;
    }
  }
  return;
}



// FUNCTION 1460f8a4c FUN_1460f8a4c body=338 status=ok
// SIG undefined FUN_1460f8a4c(void)

undefined4 * FUN_1460f8a4c(undefined4 *param_1,undefined8 *param_2)

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
  FUN_1460f8c32(local_40);
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
  cVar5 = FUN_1460f8ba0(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb8afd0 - DAT_14cb8affc;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb8b010)) {
      uVar10 = DAT_14cb8b010 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb8b008;
      if (DAT_14cb8b008 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8b000;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8b010 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb8b008;
      if (DAT_14cb8b008 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8b000;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8b010 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb8b010 = iVar9;
      FUN_1460f8d40();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460f8ba0 FUN_1460f8ba0 body=145 status=ok
// SIG undefined FUN_1460f8ba0(void)

undefined8 FUN_1460f8ba0(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb8afd0 - DAT_14cb8affc != 1) && (DAT_14cb8afd0 != DAT_14cb8affc)) {
    puVar6 = &DAT_14cb8b000;
    if (DAT_14cb8b008 != (undefined *)0x0) {
      puVar6 = DAT_14cb8b008;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb8b010 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb8afc8 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d99a1c(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460f8c32 FUN_1460f8c32 body=270 status=ok
// SIG undefined FUN_1460f8c32(void)

int * FUN_1460f8c32(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb8aff8;
  iVar3 = DAT_14cb8afd0;
  if (DAT_14cb8affc == 0) {
    iVar2 = DAT_14cb8afd0 + 1;
    bVar7 = DAT_14cb8afd4 == DAT_14cb8afd0;
    DAT_14cb8afd0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb8afc8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb8afd8,1);
    puVar4 = DAT_14cb8afe8;
    if (DAT_14cb8afe8 == (undefined *)0x0) {
      puVar4 = &DAT_14cb8afd8;
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
    lVar6 = (longlong)DAT_14cb8aff8;
    DAT_14cb8aff8 = *(int *)(DAT_14cb8afc8 + 4 + lVar6 * 0x18);
    DAT_14cb8affc = DAT_14cb8affc + -1;
    if (DAT_14cb8affc != 0) {
      *(undefined4 *)(DAT_14cb8afc8 + (longlong)DAT_14cb8aff8 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb8afd8;
  if (DAT_14cb8afe8 != (undefined *)0x0) {
    puVar4 = DAT_14cb8afe8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb8afc8;
  return param_1;
}



// FUNCTION 1460f8d40 FUN_1460f8d40 body=523 status=ok
// SIG undefined FUN_1460f8d40(void)

void FUN_1460f8d40(void)

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
  if (DAT_14cb8b008 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb8b008,0,0,4);
  }
  uVar3 = DAT_14cb8b010;
  uVar2 = local_50;
  if (DAT_14cb8b010 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb8b000,0,DAT_14cb8b010,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb8b008;
        if (DAT_14cb8b008 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8b000;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb8b010 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb8afd8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb8aff0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb8afc8;
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
                (longlong)(int)DAT_14cb8b010 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb8b008;
        if (DAT_14cb8b008 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8b000;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb8b010 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb8b008;
        if (DAT_14cb8b008 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8b000;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb8b010 - 1U) * 4) = iVar4;
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



// FUNCTION 1460f8f4c FUN_1460f8f4c body=507 status=ok
// SIG undefined FUN_1460f8f4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460f8f4c(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb8b120 = 0;
  FUN_1446ddc76(&DAT_14cb8b124,"skill_condition_ref",1);
  _DAT_14cb8b130 = 0;
  _DAT_14cb8b138 = 0;
  _DAT_14cb8b140 = 0;
  DAT_14cb8b148 = (void *)0x0;
  _DAT_14cb8b150 = 0;
  _DAT_14cb8b158 = FUN_148985bcc;
  DAT_14cb8b160 = *param_1;
  DAT_14cb8b170 = param_1[2];
  param_1[2] = 0;
  DAT_14cb8b180._0_4_ = (undefined4)param_1[4];
  DAT_14cb8b180._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb8b188 = (undefined4)param_1[5];
  uRam000000014cb8b18c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb8b190 = (undefined4)param_1[6];
  uRam000000014cb8b194 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb8b198 = (undefined4)param_1[7];
  uRam000000014cb8b19c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb8b160 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb8b130 = 0;
  _DAT_14cb8b138 = local_68;
  _DAT_14cb8b140 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb8b150 = CONCAT44(DAT_14cb8b154,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb8b154 == 0) {
    _DAT_14cb8b150 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb8b148,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb8b148,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb8b120) && ((DAT_14cb8b0b0 == (int *)0x0 || (*DAT_14cb8b0b0 < DAT_14cb8b120)))) {
    DAT_14cb8b0b0 = &DAT_14cb8b120;
  }
  FUN_1460f9148();
  local_30 = &local_70;
  local_70 = &DAT_14cb8b120;
  local_38 = &DAT_14cb8b124;
  FUN_1460f91e2(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460f9148 FUN_1460f9148 body=153 status=ok
// SIG undefined FUN_1460f9148(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460f9148(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8b108) {
    FUN_144b3d300(&DAT_14cb8b108);
    if (DAT_14cb8b108 == -1) {
      DAT_14cb8b0d8 = 0;
      DAT_14cb8b0e0 = 0;
      DAT_14cb8b0b8 = 0;
      _DAT_14cb8b0c0 = 0;
      _DAT_14cb8b0e4 = 0xffffffff00000080;
      DAT_14cb8b0ec = 0;
      DAT_14cb8b0f8 = 0;
      DAT_14cb8b100 = 0;
      atexit(FUN_143e3060f);
      _Init_thread_footer(&DAT_14cb8b108);
      return;
    }
  }
  return;
}



// FUNCTION 1460f91e2 FUN_1460f91e2 body=338 status=ok
// SIG undefined FUN_1460f91e2(void)

undefined4 * FUN_1460f91e2(undefined4 *param_1,undefined8 *param_2)

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
  FUN_1460f93c8(local_40);
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
  cVar5 = FUN_1460f9336(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb8b0c0 - DAT_14cb8b0ec;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb8b100)) {
      uVar10 = DAT_14cb8b100 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb8b0f8;
      if (DAT_14cb8b0f8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8b0f0;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8b100 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb8b0f8;
      if (DAT_14cb8b0f8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8b0f0;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8b100 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb8b100 = iVar9;
      FUN_1460f94d6();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460f9336 FUN_1460f9336 body=145 status=ok
// SIG undefined FUN_1460f9336(void)

undefined8 FUN_1460f9336(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb8b0c0 - DAT_14cb8b0ec != 1) && (DAT_14cb8b0c0 != DAT_14cb8b0ec)) {
    puVar6 = &DAT_14cb8b0f0;
    if (DAT_14cb8b0f8 != (undefined *)0x0) {
      puVar6 = DAT_14cb8b0f8;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb8b100 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb8b0b8 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d99c08(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460f93c8 FUN_1460f93c8 body=270 status=ok
// SIG undefined FUN_1460f93c8(void)

int * FUN_1460f93c8(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb8b0e8;
  iVar3 = DAT_14cb8b0c0;
  if (DAT_14cb8b0ec == 0) {
    iVar2 = DAT_14cb8b0c0 + 1;
    bVar7 = DAT_14cb8b0c4 == DAT_14cb8b0c0;
    DAT_14cb8b0c0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb8b0b8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb8b0c8,1);
    puVar4 = DAT_14cb8b0d8;
    if (DAT_14cb8b0d8 == (undefined *)0x0) {
      puVar4 = &DAT_14cb8b0c8;
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
    lVar6 = (longlong)DAT_14cb8b0e8;
    DAT_14cb8b0e8 = *(int *)(DAT_14cb8b0b8 + 4 + lVar6 * 0x18);
    DAT_14cb8b0ec = DAT_14cb8b0ec + -1;
    if (DAT_14cb8b0ec != 0) {
      *(undefined4 *)(DAT_14cb8b0b8 + (longlong)DAT_14cb8b0e8 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb8b0c8;
  if (DAT_14cb8b0d8 != (undefined *)0x0) {
    puVar4 = DAT_14cb8b0d8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb8b0b8;
  return param_1;
}



// FUNCTION 1460f94d6 FUN_1460f94d6 body=523 status=ok
// SIG undefined FUN_1460f94d6(void)

void FUN_1460f94d6(void)

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
  if (DAT_14cb8b0f8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb8b0f8,0,0,4);
  }
  uVar3 = DAT_14cb8b100;
  uVar2 = local_50;
  if (DAT_14cb8b100 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb8b0f0,0,DAT_14cb8b100,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb8b0f8;
        if (DAT_14cb8b0f8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8b0f0;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb8b100 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb8b0c8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb8b0e0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb8b0b8;
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
                (longlong)(int)DAT_14cb8b100 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb8b0f8;
        if (DAT_14cb8b0f8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8b0f0;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb8b100 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb8b0f8;
        if (DAT_14cb8b0f8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8b0f0;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb8b100 - 1U) * 4) = iVar4;
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



// FUNCTION 1460f96e2 FUN_1460f96e2 body=507 status=ok
// SIG undefined FUN_1460f96e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460f96e2(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb8b210 = 0;
  FUN_1446ddc76(&DAT_14cb8b214,"skill",1);
  _DAT_14cb8b220 = 0;
  _DAT_14cb8b228 = 0;
  _DAT_14cb8b230 = 0;
  DAT_14cb8b238 = (void *)0x0;
  _DAT_14cb8b240 = 0;
  _DAT_14cb8b248 = FUN_148985cc0;
  DAT_14cb8b250 = *param_1;
  DAT_14cb8b260 = param_1[2];
  param_1[2] = 0;
  DAT_14cb8b270._0_4_ = (undefined4)param_1[4];
  DAT_14cb8b270._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb8b278 = (undefined4)param_1[5];
  uRam000000014cb8b27c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb8b280 = (undefined4)param_1[6];
  uRam000000014cb8b284 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb8b288 = (undefined4)param_1[7];
  uRam000000014cb8b28c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb8b250 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb8b220 = 0;
  _DAT_14cb8b228 = local_68;
  _DAT_14cb8b230 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb8b240 = CONCAT44(DAT_14cb8b244,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb8b244 == 0) {
    _DAT_14cb8b240 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb8b238,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb8b238,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb8b210) && ((DAT_14cb8b1a0 == (int *)0x0 || (*DAT_14cb8b1a0 < DAT_14cb8b210)))) {
    DAT_14cb8b1a0 = &DAT_14cb8b210;
  }
  FUN_1460f98de();
  local_30 = &local_70;
  local_70 = &DAT_14cb8b210;
  local_38 = &DAT_14cb8b214;
  FUN_1460f9978(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460f98de FUN_1460f98de body=153 status=ok
// SIG undefined FUN_1460f98de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460f98de(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8b1f8) {
    FUN_144b3d300(&DAT_14cb8b1f8);
    if (DAT_14cb8b1f8 == -1) {
      DAT_14cb8b1c8 = 0;
      DAT_14cb8b1d0 = 0;
      DAT_14cb8b1a8 = 0;
      _DAT_14cb8b1b0 = 0;
      _DAT_14cb8b1d4 = 0xffffffff00000080;
      DAT_14cb8b1dc = 0;
      DAT_14cb8b1e8 = 0;
      DAT_14cb8b1f0 = 0;
      atexit(FUN_143e3063d);
      _Init_thread_footer(&DAT_14cb8b1f8);
      return;
    }
  }
  return;
}



// FUNCTION 1460f9978 FUN_1460f9978 body=338 status=ok
// SIG undefined FUN_1460f9978(void)

undefined4 * FUN_1460f9978(undefined4 *param_1,undefined8 *param_2)

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
  FUN_1460f9b5e(local_40);
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
  cVar5 = FUN_1460f9acc(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb8b1b0 - DAT_14cb8b1dc;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb8b1f0)) {
      uVar10 = DAT_14cb8b1f0 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb8b1e8;
      if (DAT_14cb8b1e8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8b1e0;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8b1f0 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb8b1e8;
      if (DAT_14cb8b1e8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8b1e0;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8b1f0 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb8b1f0 = iVar9;
      FUN_1460f9c6c();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460f9acc FUN_1460f9acc body=145 status=ok
// SIG undefined FUN_1460f9acc(void)

undefined8 FUN_1460f9acc(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb8b1b0 - DAT_14cb8b1dc != 1) && (DAT_14cb8b1b0 != DAT_14cb8b1dc)) {
    puVar6 = &DAT_14cb8b1e0;
    if (DAT_14cb8b1e8 != (undefined *)0x0) {
      puVar6 = DAT_14cb8b1e8;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb8b1f0 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb8b1a8 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d99df4(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460f9b5e FUN_1460f9b5e body=270 status=ok
// SIG undefined FUN_1460f9b5e(void)

int * FUN_1460f9b5e(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb8b1d8;
  iVar3 = DAT_14cb8b1b0;
  if (DAT_14cb8b1dc == 0) {
    iVar2 = DAT_14cb8b1b0 + 1;
    bVar7 = DAT_14cb8b1b4 == DAT_14cb8b1b0;
    DAT_14cb8b1b0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb8b1a8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb8b1b8,1);
    puVar4 = DAT_14cb8b1c8;
    if (DAT_14cb8b1c8 == (undefined *)0x0) {
      puVar4 = &DAT_14cb8b1b8;
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
    lVar6 = (longlong)DAT_14cb8b1d8;
    DAT_14cb8b1d8 = *(int *)(DAT_14cb8b1a8 + 4 + lVar6 * 0x18);
    DAT_14cb8b1dc = DAT_14cb8b1dc + -1;
    if (DAT_14cb8b1dc != 0) {
      *(undefined4 *)(DAT_14cb8b1a8 + (longlong)DAT_14cb8b1d8 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb8b1b8;
  if (DAT_14cb8b1c8 != (undefined *)0x0) {
    puVar4 = DAT_14cb8b1c8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb8b1a8;
  return param_1;
}



// FUNCTION 1460f9c6c FUN_1460f9c6c body=523 status=ok
// SIG undefined FUN_1460f9c6c(void)

void FUN_1460f9c6c(void)

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
  if (DAT_14cb8b1e8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb8b1e8,0,0,4);
  }
  uVar3 = DAT_14cb8b1f0;
  uVar2 = local_50;
  if (DAT_14cb8b1f0 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb8b1e0,0,DAT_14cb8b1f0,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb8b1e8;
        if (DAT_14cb8b1e8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8b1e0;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb8b1f0 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb8b1b8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb8b1d0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb8b1a8;
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
                (longlong)(int)DAT_14cb8b1f0 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb8b1e8;
        if (DAT_14cb8b1e8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8b1e0;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb8b1f0 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb8b1e8;
        if (DAT_14cb8b1e8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8b1e0;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb8b1f0 - 1U) * 4) = iVar4;
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



// FUNCTION 1460f9e78 FUN_1460f9e78 body=507 status=ok
// SIG undefined FUN_1460f9e78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460f9e78(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb8b310 = 0;
  FUN_1446ddc76(&DAT_14cb8b314,"skill_resource_set",1);
  _DAT_14cb8b320 = 0;
  _DAT_14cb8b328 = 0;
  _DAT_14cb8b330 = 0;
  DAT_14cb8b338 = (void *)0x0;
  _DAT_14cb8b340 = 0;
  _DAT_14cb8b348 = FUN_148985dbe;
  DAT_14cb8b350 = *param_1;
  DAT_14cb8b360 = param_1[2];
  param_1[2] = 0;
  DAT_14cb8b370._0_4_ = (undefined4)param_1[4];
  DAT_14cb8b370._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb8b378 = (undefined4)param_1[5];
  uRam000000014cb8b37c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb8b380 = (undefined4)param_1[6];
  uRam000000014cb8b384 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb8b388 = (undefined4)param_1[7];
  uRam000000014cb8b38c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb8b350 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb8b320 = 0;
  _DAT_14cb8b328 = local_68;
  _DAT_14cb8b330 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb8b340 = CONCAT44(DAT_14cb8b344,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb8b344 == 0) {
    _DAT_14cb8b340 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb8b338,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb8b338,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb8b310) && ((DAT_14cb8b298 == (int *)0x0 || (*DAT_14cb8b298 < DAT_14cb8b310)))) {
    DAT_14cb8b298 = &DAT_14cb8b310;
  }
  FUN_1460fa074();
  local_30 = &local_70;
  local_70 = &DAT_14cb8b310;
  local_38 = &DAT_14cb8b314;
  FUN_1460fa10e(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460fa074 FUN_1460fa074 body=153 status=ok
// SIG undefined FUN_1460fa074(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460fa074(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8b2f0) {
    FUN_144b3d300(&DAT_14cb8b2f0);
    if (DAT_14cb8b2f0 == -1) {
      DAT_14cb8b2c0 = 0;
      DAT_14cb8b2c8 = 0;
      DAT_14cb8b2a0 = 0;
      _DAT_14cb8b2a8 = 0;
      _DAT_14cb8b2cc = 0xffffffff00000080;
      DAT_14cb8b2d4 = 0;
      DAT_14cb8b2e0 = 0;
      DAT_14cb8b2e8 = 0;
      atexit(FUN_143e3072c);
      _Init_thread_footer(&DAT_14cb8b2f0);
      return;
    }
  }
  return;
}



// FUNCTION 1460fa10e FUN_1460fa10e body=338 status=ok
// SIG undefined FUN_1460fa10e(void)

undefined4 * FUN_1460fa10e(undefined4 *param_1,undefined8 *param_2)

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
  FUN_1460fa2f4(local_40);
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
  cVar5 = FUN_1460fa262(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb8b2a8 - DAT_14cb8b2d4;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb8b2e8)) {
      uVar10 = DAT_14cb8b2e8 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb8b2e0;
      if (DAT_14cb8b2e0 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8b2d8;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8b2e8 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb8b2e0;
      if (DAT_14cb8b2e0 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8b2d8;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8b2e8 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb8b2e8 = iVar9;
      FUN_1460fa402();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460fa262 FUN_1460fa262 body=145 status=ok
// SIG undefined FUN_1460fa262(void)

undefined8 FUN_1460fa262(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb8b2a8 - DAT_14cb8b2d4 != 1) && (DAT_14cb8b2a8 != DAT_14cb8b2d4)) {
    puVar6 = &DAT_14cb8b2d8;
    if (DAT_14cb8b2e0 != (undefined *)0x0) {
      puVar6 = DAT_14cb8b2e0;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb8b2e8 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb8b2a0 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d99fe0(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460fa2f4 FUN_1460fa2f4 body=270 status=ok
// SIG undefined FUN_1460fa2f4(void)

int * FUN_1460fa2f4(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb8b2d0;
  iVar3 = DAT_14cb8b2a8;
  if (DAT_14cb8b2d4 == 0) {
    iVar2 = DAT_14cb8b2a8 + 1;
    bVar7 = DAT_14cb8b2ac == DAT_14cb8b2a8;
    DAT_14cb8b2a8 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb8b2a0,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb8b2b0,1);
    puVar4 = DAT_14cb8b2c0;
    if (DAT_14cb8b2c0 == (undefined *)0x0) {
      puVar4 = &DAT_14cb8b2b0;
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
    lVar6 = (longlong)DAT_14cb8b2d0;
    DAT_14cb8b2d0 = *(int *)(DAT_14cb8b2a0 + 4 + lVar6 * 0x18);
    DAT_14cb8b2d4 = DAT_14cb8b2d4 + -1;
    if (DAT_14cb8b2d4 != 0) {
      *(undefined4 *)(DAT_14cb8b2a0 + (longlong)DAT_14cb8b2d0 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb8b2b0;
  if (DAT_14cb8b2c0 != (undefined *)0x0) {
    puVar4 = DAT_14cb8b2c0;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb8b2a0;
  return param_1;
}



// FUNCTION 1460fa402 FUN_1460fa402 body=523 status=ok
// SIG undefined FUN_1460fa402(void)

void FUN_1460fa402(void)

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
  if (DAT_14cb8b2e0 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb8b2e0,0,0,4);
  }
  uVar3 = DAT_14cb8b2e8;
  uVar2 = local_50;
  if (DAT_14cb8b2e8 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb8b2d8,0,DAT_14cb8b2e8,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb8b2e0;
        if (DAT_14cb8b2e0 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8b2d8;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb8b2e8 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb8b2b0;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb8b2c8 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb8b2a0;
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
                (longlong)(int)DAT_14cb8b2e8 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb8b2e0;
        if (DAT_14cb8b2e0 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8b2d8;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb8b2e8 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb8b2e0;
        if (DAT_14cb8b2e0 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8b2d8;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb8b2e8 - 1U) * 4) = iVar4;
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



// FUNCTION 1460fa60e FUN_1460fa60e body=507 status=ok
// SIG undefined FUN_1460fa60e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460fa60e(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb8b400 = 0;
  FUN_1446ddc76(&DAT_14cb8b404,"skill_event",1);
  _DAT_14cb8b410 = 0;
  _DAT_14cb8b418 = 0;
  _DAT_14cb8b420 = 0;
  DAT_14cb8b428 = (void *)0x0;
  _DAT_14cb8b430 = 0;
  _DAT_14cb8b438 = FUN_148985e56;
  DAT_14cb8b440 = *param_1;
  DAT_14cb8b450 = param_1[2];
  param_1[2] = 0;
  DAT_14cb8b460._0_4_ = (undefined4)param_1[4];
  DAT_14cb8b460._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb8b468 = (undefined4)param_1[5];
  uRam000000014cb8b46c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb8b470 = (undefined4)param_1[6];
  uRam000000014cb8b474 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb8b478 = (undefined4)param_1[7];
  uRam000000014cb8b47c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb8b440 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb8b410 = 0;
  _DAT_14cb8b418 = local_68;
  _DAT_14cb8b420 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb8b430 = CONCAT44(DAT_14cb8b434,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb8b434 == 0) {
    _DAT_14cb8b430 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb8b428,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb8b428,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb8b400) && ((DAT_14cb8b390 == (int *)0x0 || (*DAT_14cb8b390 < DAT_14cb8b400)))) {
    DAT_14cb8b390 = &DAT_14cb8b400;
  }
  FUN_1460fa80a();
  local_30 = &local_70;
  local_70 = &DAT_14cb8b400;
  local_38 = &DAT_14cb8b404;
  FUN_1460fa8a4(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460fa80a FUN_1460fa80a body=153 status=ok
// SIG undefined FUN_1460fa80a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460fa80a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8b3e8) {
    FUN_144b3d300(&DAT_14cb8b3e8);
    if (DAT_14cb8b3e8 == -1) {
      DAT_14cb8b3b8 = 0;
      DAT_14cb8b3c0 = 0;
      DAT_14cb8b398 = 0;
      _DAT_14cb8b3a0 = 0;
      _DAT_14cb8b3c4 = 0xffffffff00000080;
      DAT_14cb8b3cc = 0;
      DAT_14cb8b3d8 = 0;
      DAT_14cb8b3e0 = 0;
      atexit(FUN_143e3075a);
      _Init_thread_footer(&DAT_14cb8b3e8);
      return;
    }
  }
  return;
}



// FUNCTION 1460fa8a4 FUN_1460fa8a4 body=338 status=ok
// SIG undefined FUN_1460fa8a4(void)

undefined4 * FUN_1460fa8a4(undefined4 *param_1,undefined8 *param_2)

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
  FUN_1460faa8a(local_40);
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
  cVar5 = FUN_1460fa9f8(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb8b3a0 - DAT_14cb8b3cc;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb8b3e0)) {
      uVar10 = DAT_14cb8b3e0 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb8b3d8;
      if (DAT_14cb8b3d8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8b3d0;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8b3e0 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb8b3d8;
      if (DAT_14cb8b3d8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8b3d0;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8b3e0 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb8b3e0 = iVar9;
      FUN_1460fab98();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460fa9f8 FUN_1460fa9f8 body=145 status=ok
// SIG undefined FUN_1460fa9f8(void)

undefined8 FUN_1460fa9f8(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb8b3a0 - DAT_14cb8b3cc != 1) && (DAT_14cb8b3a0 != DAT_14cb8b3cc)) {
    puVar6 = &DAT_14cb8b3d0;
    if (DAT_14cb8b3d8 != (undefined *)0x0) {
      puVar6 = DAT_14cb8b3d8;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb8b3e0 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb8b398 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9a1cc(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460faa8a FUN_1460faa8a body=270 status=ok
// SIG undefined FUN_1460faa8a(void)

int * FUN_1460faa8a(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb8b3c8;
  iVar3 = DAT_14cb8b3a0;
  if (DAT_14cb8b3cc == 0) {
    iVar2 = DAT_14cb8b3a0 + 1;
    bVar7 = DAT_14cb8b3a4 == DAT_14cb8b3a0;
    DAT_14cb8b3a0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb8b398,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb8b3a8,1);
    puVar4 = DAT_14cb8b3b8;
    if (DAT_14cb8b3b8 == (undefined *)0x0) {
      puVar4 = &DAT_14cb8b3a8;
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
    lVar6 = (longlong)DAT_14cb8b3c8;
    DAT_14cb8b3c8 = *(int *)(DAT_14cb8b398 + 4 + lVar6 * 0x18);
    DAT_14cb8b3cc = DAT_14cb8b3cc + -1;
    if (DAT_14cb8b3cc != 0) {
      *(undefined4 *)(DAT_14cb8b398 + (longlong)DAT_14cb8b3c8 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb8b3a8;
  if (DAT_14cb8b3b8 != (undefined *)0x0) {
    puVar4 = DAT_14cb8b3b8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb8b398;
  return param_1;
}


