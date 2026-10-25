// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14618b8b6 FUN_14618b8b6 body=338 status=ok
// SIG undefined FUN_14618b8b6(void)

undefined4 * FUN_14618b8b6(undefined4 *param_1,undefined8 *param_2)

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
  FUN_14618ba9c(local_40);
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
  cVar5 = FUN_14618ba0a(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cbc8c80 - DAT_14cbc8cac;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cbc8cc0)) {
      uVar10 = DAT_14cbc8cc0 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cbc8cb8;
      if (DAT_14cbc8cb8 == (undefined *)0x0) {
        puVar7 = &DAT_14cbc8cb0;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cbc8cc0 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cbc8cb8;
      if (DAT_14cbc8cb8 == (undefined *)0x0) {
        puVar7 = &DAT_14cbc8cb0;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cbc8cc0 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cbc8cc0 = iVar9;
      FUN_14618bbaa();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14618ba0a FUN_14618ba0a body=145 status=ok
// SIG undefined FUN_14618ba0a(void)

undefined8 FUN_14618ba0a(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cbc8c80 - DAT_14cbc8cac != 1) && (DAT_14cbc8c80 != DAT_14cbc8cac)) {
    puVar6 = &DAT_14cbc8cb0;
    if (DAT_14cbc8cb8 != (undefined *)0x0) {
      puVar6 = DAT_14cbc8cb8;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cbc8cc0 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cbc8c78 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9e138(*param_3);
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



// FUNCTION 14618ba9c FUN_14618ba9c body=270 status=ok
// SIG undefined FUN_14618ba9c(void)

int * FUN_14618ba9c(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cbc8ca8;
  iVar3 = DAT_14cbc8c80;
  if (DAT_14cbc8cac == 0) {
    iVar2 = DAT_14cbc8c80 + 1;
    bVar7 = DAT_14cbc8c84 == DAT_14cbc8c80;
    DAT_14cbc8c80 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cbc8c78,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cbc8c88,1);
    puVar4 = DAT_14cbc8c98;
    if (DAT_14cbc8c98 == (undefined *)0x0) {
      puVar4 = &DAT_14cbc8c88;
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
    lVar6 = (longlong)DAT_14cbc8ca8;
    DAT_14cbc8ca8 = *(int *)(DAT_14cbc8c78 + 4 + lVar6 * 0x18);
    DAT_14cbc8cac = DAT_14cbc8cac + -1;
    if (DAT_14cbc8cac != 0) {
      *(undefined4 *)(DAT_14cbc8c78 + (longlong)DAT_14cbc8ca8 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cbc8c88;
  if (DAT_14cbc8c98 != (undefined *)0x0) {
    puVar4 = DAT_14cbc8c98;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cbc8c78;
  return param_1;
}



// FUNCTION 14618bbaa FUN_14618bbaa body=523 status=ok
// SIG undefined FUN_14618bbaa(void)

void FUN_14618bbaa(void)

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
  if (DAT_14cbc8cb8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cbc8cb8,0,0,4);
  }
  uVar3 = DAT_14cbc8cc0;
  uVar2 = local_50;
  if (DAT_14cbc8cc0 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cbc8cb0,0,DAT_14cbc8cc0,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cbc8cb8;
        if (DAT_14cbc8cb8 == (undefined *)0x0) {
          puVar6 = &DAT_14cbc8cb0;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cbc8cc0 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cbc8c88;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cbc8ca0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cbc8c78;
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
                (longlong)(int)DAT_14cbc8cc0 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cbc8cb8;
        if (DAT_14cbc8cb8 == (undefined *)0x0) {
          puVar6 = &DAT_14cbc8cb0;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cbc8cc0 - 1U & uVar9) * 4);
        puVar6 = DAT_14cbc8cb8;
        if (DAT_14cbc8cb8 == (undefined *)0x0) {
          puVar6 = &DAT_14cbc8cb0;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cbc8cc0 - 1U) * 4) = iVar4;
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



// FUNCTION 14618bdb6 FUN_14618bdb6 body=507 status=ok
// SIG undefined FUN_14618bdb6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14618bdb6(longlong *param_1)

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
  DAT_14cbcb160 = 0;
  FUN_1446ddc76(&DAT_14cbcb164,"Grapple",1);
  _DAT_14cbcb170 = 0;
  _DAT_14cbcb178 = 0;
  _DAT_14cbcb180 = 0;
  DAT_14cbcb188 = (void *)0x0;
  _DAT_14cbcb190 = 0;
  _DAT_14cbcb198 = FUN_14597fccc;
  DAT_14cbcb1a0 = *param_1;
  DAT_14cbcb1b0 = param_1[2];
  param_1[2] = 0;
  DAT_14cbcb1c0._0_4_ = (undefined4)param_1[4];
  DAT_14cbcb1c0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cbcb1c8 = (undefined4)param_1[5];
  uRam000000014cbcb1cc = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cbcb1d0 = (undefined4)param_1[6];
  uRam000000014cbcb1d4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cbcb1d8 = (undefined4)param_1[7];
  uRam000000014cbcb1dc = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cbcb1a0 != 0) {
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
  _DAT_14cbcb170 = 0;
  _DAT_14cbcb178 = local_68;
  _DAT_14cbcb180 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cbcb190 = CONCAT44(DAT_14cbcb194,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cbcb194 == 0) {
    _DAT_14cbcb190 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cbcb188,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cbcb188,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cbcb160) && ((DAT_14cbcb0e8 == (int *)0x0 || (*DAT_14cbcb0e8 < DAT_14cbcb160)))) {
    DAT_14cbcb0e8 = &DAT_14cbcb160;
  }
  FUN_14597fda2();
  local_30 = &local_70;
  local_70 = &DAT_14cbcb160;
  local_38 = &DAT_14cbcb164;
  FUN_14618bfb2(local_3c);
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



// FUNCTION 14618bfb2 FUN_14618bfb2 body=338 status=ok
// SIG undefined FUN_14618bfb2(void)

undefined4 * FUN_14618bfb2(undefined4 *param_1,undefined8 *param_2)

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
  FUN_14618c198(local_40);
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
  cVar5 = FUN_14618c106(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cbcb0f8 - DAT_14cbcb124;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cbcb138)) {
      uVar10 = DAT_14cbcb138 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cbcb130;
      if (DAT_14cbcb130 == (undefined *)0x0) {
        puVar7 = &DAT_14cbcb128;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cbcb138 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cbcb130;
      if (DAT_14cbcb130 == (undefined *)0x0) {
        puVar7 = &DAT_14cbcb128;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cbcb138 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cbcb138 = iVar9;
      FUN_14618c2a6();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14618c106 FUN_14618c106 body=145 status=ok
// SIG undefined FUN_14618c106(void)

undefined8 FUN_14618c106(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cbcb0f8 - DAT_14cbcb124 != 1) && (DAT_14cbcb0f8 != DAT_14cbcb124)) {
    puVar6 = &DAT_14cbcb128;
    if (DAT_14cbcb130 != (undefined *)0x0) {
      puVar6 = DAT_14cbcb130;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cbcb138 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cbcb0f0 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9e6fc(*param_3);
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



// FUNCTION 14618c198 FUN_14618c198 body=270 status=ok
// SIG undefined FUN_14618c198(void)

int * FUN_14618c198(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cbcb120;
  iVar3 = DAT_14cbcb0f8;
  if (DAT_14cbcb124 == 0) {
    iVar2 = DAT_14cbcb0f8 + 1;
    bVar7 = DAT_14cbcb0fc == DAT_14cbcb0f8;
    DAT_14cbcb0f8 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cbcb0f0,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cbcb100,1);
    puVar4 = DAT_14cbcb110;
    if (DAT_14cbcb110 == (undefined *)0x0) {
      puVar4 = &DAT_14cbcb100;
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
    lVar6 = (longlong)DAT_14cbcb120;
    DAT_14cbcb120 = *(int *)(DAT_14cbcb0f0 + 4 + lVar6 * 0x18);
    DAT_14cbcb124 = DAT_14cbcb124 + -1;
    if (DAT_14cbcb124 != 0) {
      *(undefined4 *)(DAT_14cbcb0f0 + (longlong)DAT_14cbcb120 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cbcb100;
  if (DAT_14cbcb110 != (undefined *)0x0) {
    puVar4 = DAT_14cbcb110;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cbcb0f0;
  return param_1;
}



// FUNCTION 14618c2a6 FUN_14618c2a6 body=523 status=ok
// SIG undefined FUN_14618c2a6(void)

void FUN_14618c2a6(void)

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
  if (DAT_14cbcb130 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cbcb130,0,0,4);
  }
  uVar3 = DAT_14cbcb138;
  uVar2 = local_50;
  if (DAT_14cbcb138 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cbcb128,0,DAT_14cbcb138,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cbcb130;
        if (DAT_14cbcb130 == (undefined *)0x0) {
          puVar6 = &DAT_14cbcb128;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cbcb138 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cbcb100;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cbcb118 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cbcb0f0;
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
                (longlong)(int)DAT_14cbcb138 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cbcb130;
        if (DAT_14cbcb130 == (undefined *)0x0) {
          puVar6 = &DAT_14cbcb128;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cbcb138 - 1U & uVar9) * 4);
        puVar6 = DAT_14cbcb130;
        if (DAT_14cbcb130 == (undefined *)0x0) {
          puVar6 = &DAT_14cbcb128;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cbcb138 - 1U) * 4) = iVar4;
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



// FUNCTION 14618c4b2 FUN_14618c4b2 body=507 status=ok
// SIG undefined FUN_14618c4b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14618c4b2(longlong *param_1)

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
  DAT_14cbd0070 = 0;
  FUN_1446ddc76(&DAT_14cbd0074,"puppet",1);
  _DAT_14cbd0080 = 0;
  _DAT_14cbd0088 = 0;
  _DAT_14cbd0090 = 0;
  DAT_14cbd0098 = (void *)0x0;
  _DAT_14cbd00a0 = 0;
  _DAT_14cbd00a8 = FUN_14597fed4;
  DAT_14cbd00b0 = *param_1;
  DAT_14cbd00c0 = param_1[2];
  param_1[2] = 0;
  DAT_14cbd00d0._0_4_ = (undefined4)param_1[4];
  DAT_14cbd00d0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cbd00d8 = (undefined4)param_1[5];
  uRam000000014cbd00dc = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cbd00e0 = (undefined4)param_1[6];
  uRam000000014cbd00e4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cbd00e8 = (undefined4)param_1[7];
  uRam000000014cbd00ec = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cbd00b0 != 0) {
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
  _DAT_14cbd0080 = 0;
  _DAT_14cbd0088 = local_68;
  _DAT_14cbd0090 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cbd00a0 = CONCAT44(DAT_14cbd00a4,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cbd00a4 == 0) {
    _DAT_14cbd00a0 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cbd0098,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cbd0098,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cbd0070) && ((DAT_14cbcfff8 == (int *)0x0 || (*DAT_14cbcfff8 < DAT_14cbd0070)))) {
    DAT_14cbcfff8 = &DAT_14cbd0070;
  }
  FUN_14597ffaa();
  local_30 = &local_70;
  local_70 = &DAT_14cbd0070;
  local_38 = &DAT_14cbd0074;
  FUN_14618c6ae(local_3c);
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



// FUNCTION 14618c6ae FUN_14618c6ae body=338 status=ok
// SIG undefined FUN_14618c6ae(void)

undefined4 * FUN_14618c6ae(undefined4 *param_1,undefined8 *param_2)

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
  FUN_14618c894(local_40);
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
  cVar5 = FUN_14618c802(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cbd0008 - DAT_14cbd0034;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cbd0048)) {
      uVar10 = DAT_14cbd0048 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cbd0040;
      if (DAT_14cbd0040 == (undefined *)0x0) {
        puVar7 = &DAT_14cbd0038;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cbd0048 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cbd0040;
      if (DAT_14cbd0040 == (undefined *)0x0) {
        puVar7 = &DAT_14cbd0038;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cbd0048 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cbd0048 = iVar9;
      FUN_14618c9a2();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14618c802 FUN_14618c802 body=145 status=ok
// SIG undefined FUN_14618c802(void)

undefined8 FUN_14618c802(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cbd0008 - DAT_14cbd0034 != 1) && (DAT_14cbd0008 != DAT_14cbd0034)) {
    puVar6 = &DAT_14cbd0038;
    if (DAT_14cbd0040 != (undefined *)0x0) {
      puVar6 = DAT_14cbd0040;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cbd0048 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cbd0000 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9e8e8(*param_3);
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



// FUNCTION 14618c894 FUN_14618c894 body=270 status=ok
// SIG undefined FUN_14618c894(void)

int * FUN_14618c894(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cbd0030;
  iVar3 = DAT_14cbd0008;
  if (DAT_14cbd0034 == 0) {
    iVar2 = DAT_14cbd0008 + 1;
    bVar7 = DAT_14cbd000c == DAT_14cbd0008;
    DAT_14cbd0008 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cbd0000,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cbd0010,1);
    puVar4 = DAT_14cbd0020;
    if (DAT_14cbd0020 == (undefined *)0x0) {
      puVar4 = &DAT_14cbd0010;
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
    lVar6 = (longlong)DAT_14cbd0030;
    DAT_14cbd0030 = *(int *)(DAT_14cbd0000 + 4 + lVar6 * 0x18);
    DAT_14cbd0034 = DAT_14cbd0034 + -1;
    if (DAT_14cbd0034 != 0) {
      *(undefined4 *)(DAT_14cbd0000 + (longlong)DAT_14cbd0030 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cbd0010;
  if (DAT_14cbd0020 != (undefined *)0x0) {
    puVar4 = DAT_14cbd0020;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cbd0000;
  return param_1;
}



// FUNCTION 14618c9a2 FUN_14618c9a2 body=523 status=ok
// SIG undefined FUN_14618c9a2(void)

void FUN_14618c9a2(void)

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
  if (DAT_14cbd0040 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cbd0040,0,0,4);
  }
  uVar3 = DAT_14cbd0048;
  uVar2 = local_50;
  if (DAT_14cbd0048 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cbd0038,0,DAT_14cbd0048,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cbd0040;
        if (DAT_14cbd0040 == (undefined *)0x0) {
          puVar6 = &DAT_14cbd0038;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cbd0048 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cbd0010;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cbd0028 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cbd0000;
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
                (longlong)(int)DAT_14cbd0048 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cbd0040;
        if (DAT_14cbd0040 == (undefined *)0x0) {
          puVar6 = &DAT_14cbd0038;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cbd0048 - 1U & uVar9) * 4);
        puVar6 = DAT_14cbd0040;
        if (DAT_14cbd0040 == (undefined *)0x0) {
          puVar6 = &DAT_14cbd0038;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cbd0048 - 1U) * 4) = iVar4;
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



// FUNCTION 14618cbae FUN_14618cbae body=507 status=ok
// SIG undefined FUN_14618cbae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14618cbae(longlong *param_1)

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
  DAT_14cbd8f80 = 0;
  FUN_1446ddc76(&DAT_14cbd8f84,"OakNewsImagesDef",1);
  _DAT_14cbd8f90 = 0;
  _DAT_14cbd8f98 = 0;
  _DAT_14cbd8fa0 = 0;
  DAT_14cbd8fa8 = (void *)0x0;
  _DAT_14cbd8fb0 = 0;
  _DAT_14cbd8fb8 = FUN_145b2700e;
  DAT_14cbd8fc0 = *param_1;
  DAT_14cbd8fd0 = param_1[2];
  param_1[2] = 0;
  DAT_14cbd8fe0._0_4_ = (undefined4)param_1[4];
  DAT_14cbd8fe0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cbd8fe8 = (undefined4)param_1[5];
  uRam000000014cbd8fec = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cbd8ff0 = (undefined4)param_1[6];
  uRam000000014cbd8ff4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cbd8ff8 = (undefined4)param_1[7];
  uRam000000014cbd8ffc = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cbd8fc0 != 0) {
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
  _DAT_14cbd8f90 = 0;
  _DAT_14cbd8f98 = local_68;
  _DAT_14cbd8fa0 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cbd8fb0 = CONCAT44(DAT_14cbd8fb4,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cbd8fb4 == 0) {
    _DAT_14cbd8fb0 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cbd8fa8,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cbd8fa8,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cbd8f80) && ((DAT_14cbd8f08 == (int *)0x0 || (*DAT_14cbd8f08 < DAT_14cbd8f80)))) {
    DAT_14cbd8f08 = &DAT_14cbd8f80;
  }
  FUN_145b26f76();
  local_30 = &local_70;
  local_70 = &DAT_14cbd8f80;
  local_38 = &DAT_14cbd8f84;
  FUN_14618cdaa(local_3c);
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



// FUNCTION 14618cdaa FUN_14618cdaa body=338 status=ok
// SIG undefined FUN_14618cdaa(void)

undefined4 * FUN_14618cdaa(undefined4 *param_1,undefined8 *param_2)

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
  FUN_14618cf90(local_40);
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
  cVar5 = FUN_14618cefe(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cbd8f18 - DAT_14cbd8f44;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cbd8f58)) {
      uVar10 = DAT_14cbd8f58 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cbd8f50;
      if (DAT_14cbd8f50 == (undefined *)0x0) {
        puVar7 = &DAT_14cbd8f48;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cbd8f58 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cbd8f50;
      if (DAT_14cbd8f50 == (undefined *)0x0) {
        puVar7 = &DAT_14cbd8f48;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cbd8f58 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cbd8f58 = iVar9;
      FUN_14618d09e();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14618cefe FUN_14618cefe body=145 status=ok
// SIG undefined FUN_14618cefe(void)

undefined8 FUN_14618cefe(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cbd8f18 - DAT_14cbd8f44 != 1) && (DAT_14cbd8f18 != DAT_14cbd8f44)) {
    puVar6 = &DAT_14cbd8f48;
    if (DAT_14cbd8f50 != (undefined *)0x0) {
      puVar6 = DAT_14cbd8f50;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cbd8f58 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cbd8f10 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9ecc0(*param_3);
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



// FUNCTION 14618cf90 FUN_14618cf90 body=270 status=ok
// SIG undefined FUN_14618cf90(void)

int * FUN_14618cf90(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cbd8f40;
  iVar3 = DAT_14cbd8f18;
  if (DAT_14cbd8f44 == 0) {
    iVar2 = DAT_14cbd8f18 + 1;
    bVar7 = DAT_14cbd8f1c == DAT_14cbd8f18;
    DAT_14cbd8f18 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cbd8f10,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cbd8f20,1);
    puVar4 = DAT_14cbd8f30;
    if (DAT_14cbd8f30 == (undefined *)0x0) {
      puVar4 = &DAT_14cbd8f20;
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
    lVar6 = (longlong)DAT_14cbd8f40;
    DAT_14cbd8f40 = *(int *)(DAT_14cbd8f10 + 4 + lVar6 * 0x18);
    DAT_14cbd8f44 = DAT_14cbd8f44 + -1;
    if (DAT_14cbd8f44 != 0) {
      *(undefined4 *)(DAT_14cbd8f10 + (longlong)DAT_14cbd8f40 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cbd8f20;
  if (DAT_14cbd8f30 != (undefined *)0x0) {
    puVar4 = DAT_14cbd8f30;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cbd8f10;
  return param_1;
}



// FUNCTION 14618d09e FUN_14618d09e body=523 status=ok
// SIG undefined FUN_14618d09e(void)

void FUN_14618d09e(void)

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
  if (DAT_14cbd8f50 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cbd8f50,0,0,4);
  }
  uVar3 = DAT_14cbd8f58;
  uVar2 = local_50;
  if (DAT_14cbd8f58 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cbd8f48,0,DAT_14cbd8f58,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cbd8f50;
        if (DAT_14cbd8f50 == (undefined *)0x0) {
          puVar6 = &DAT_14cbd8f48;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cbd8f58 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cbd8f20;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cbd8f38 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cbd8f10;
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
                (longlong)(int)DAT_14cbd8f58 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cbd8f50;
        if (DAT_14cbd8f50 == (undefined *)0x0) {
          puVar6 = &DAT_14cbd8f48;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cbd8f58 - 1U & uVar9) * 4);
        puVar6 = DAT_14cbd8f50;
        if (DAT_14cbd8f50 == (undefined *)0x0) {
          puVar6 = &DAT_14cbd8f48;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cbd8f58 - 1U) * 4) = iVar4;
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



// FUNCTION 14618d2aa FUN_14618d2aa body=507 status=ok
// SIG undefined FUN_14618d2aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14618d2aa(longlong *param_1)

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
  DAT_14cbe4130 = 0;
  FUN_1446ddc76(&DAT_14cbe4134,"ThumbnailScene",1);
  _DAT_14cbe4140 = 0;
  _DAT_14cbe4148 = 0;
  _DAT_14cbe4150 = 0;
  DAT_14cbe4158 = (void *)0x0;
  _DAT_14cbe4160 = 0;
  _DAT_14cbe4168 = FUN_1459668de;
  DAT_14cbe4170 = *param_1;
  DAT_14cbe4180 = param_1[2];
  param_1[2] = 0;
  DAT_14cbe4190._0_4_ = (undefined4)param_1[4];
  DAT_14cbe4190._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cbe4198 = (undefined4)param_1[5];
  uRam000000014cbe419c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cbe41a0 = (undefined4)param_1[6];
  uRam000000014cbe41a4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cbe41a8 = (undefined4)param_1[7];
  uRam000000014cbe41ac = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cbe4170 != 0) {
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
  _DAT_14cbe4140 = 0;
  _DAT_14cbe4148 = local_68;
  _DAT_14cbe4150 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cbe4160 = CONCAT44(DAT_14cbe4164,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cbe4164 == 0) {
    _DAT_14cbe4160 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cbe4158,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cbe4158,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cbe4130) && ((DAT_14cbe40b8 == (int *)0x0 || (*DAT_14cbe40b8 < DAT_14cbe4130)))) {
    DAT_14cbe40b8 = &DAT_14cbe4130;
  }
  FUN_145966846();
  local_30 = &local_70;
  local_70 = &DAT_14cbe4130;
  local_38 = &DAT_14cbe4134;
  FUN_14618d4a6(local_3c);
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



// FUNCTION 14618d4a6 FUN_14618d4a6 body=338 status=ok
// SIG undefined FUN_14618d4a6(void)

undefined4 * FUN_14618d4a6(undefined4 *param_1,undefined8 *param_2)

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
  FUN_14618d68c(local_40);
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
  cVar5 = FUN_14618d5fa(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cbe40c8 - DAT_14cbe40f4;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cbe4108)) {
      uVar10 = DAT_14cbe4108 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cbe4100;
      if (DAT_14cbe4100 == (undefined *)0x0) {
        puVar7 = &DAT_14cbe40f8;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cbe4108 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cbe4100;
      if (DAT_14cbe4100 == (undefined *)0x0) {
        puVar7 = &DAT_14cbe40f8;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cbe4108 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cbe4108 = iVar9;
      FUN_14618d79a();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14618d5fa FUN_14618d5fa body=145 status=ok
// SIG undefined FUN_14618d5fa(void)

undefined8 FUN_14618d5fa(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cbe40c8 - DAT_14cbe40f4 != 1) && (DAT_14cbe40c8 != DAT_14cbe40f4)) {
    puVar6 = &DAT_14cbe40f8;
    if (DAT_14cbe4100 != (undefined *)0x0) {
      puVar6 = DAT_14cbe4100;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cbe4108 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cbe40c0 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9eeac(*param_3);
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



// FUNCTION 14618d68c FUN_14618d68c body=270 status=ok
// SIG undefined FUN_14618d68c(void)

int * FUN_14618d68c(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cbe40f0;
  iVar3 = DAT_14cbe40c8;
  if (DAT_14cbe40f4 == 0) {
    iVar2 = DAT_14cbe40c8 + 1;
    bVar7 = DAT_14cbe40cc == DAT_14cbe40c8;
    DAT_14cbe40c8 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cbe40c0,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cbe40d0,1);
    puVar4 = DAT_14cbe40e0;
    if (DAT_14cbe40e0 == (undefined *)0x0) {
      puVar4 = &DAT_14cbe40d0;
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
    lVar6 = (longlong)DAT_14cbe40f0;
    DAT_14cbe40f0 = *(int *)(DAT_14cbe40c0 + 4 + lVar6 * 0x18);
    DAT_14cbe40f4 = DAT_14cbe40f4 + -1;
    if (DAT_14cbe40f4 != 0) {
      *(undefined4 *)(DAT_14cbe40c0 + (longlong)DAT_14cbe40f0 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cbe40d0;
  if (DAT_14cbe40e0 != (undefined *)0x0) {
    puVar4 = DAT_14cbe40e0;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cbe40c0;
  return param_1;
}



// FUNCTION 14618d79a FUN_14618d79a body=523 status=ok
// SIG undefined FUN_14618d79a(void)

void FUN_14618d79a(void)

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
  if (DAT_14cbe4100 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cbe4100,0,0,4);
  }
  uVar3 = DAT_14cbe4108;
  uVar2 = local_50;
  if (DAT_14cbe4108 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cbe40f8,0,DAT_14cbe4108,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cbe4100;
        if (DAT_14cbe4100 == (undefined *)0x0) {
          puVar6 = &DAT_14cbe40f8;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cbe4108 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cbe40d0;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cbe40e8 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cbe40c0;
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
                (longlong)(int)DAT_14cbe4108 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cbe4100;
        if (DAT_14cbe4100 == (undefined *)0x0) {
          puVar6 = &DAT_14cbe40f8;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cbe4108 - 1U & uVar9) * 4);
        puVar6 = DAT_14cbe4100;
        if (DAT_14cbe4100 == (undefined *)0x0) {
          puVar6 = &DAT_14cbe40f8;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cbe4108 - 1U) * 4) = iVar4;
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



// FUNCTION 14618d9a6 FUN_14618d9a6 body=507 status=ok
// SIG undefined FUN_14618d9a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14618d9a6(longlong *param_1)

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
  DAT_14cbe4810 = 0;
  FUN_1446ddc76(&DAT_14cbe4814,"UIChallengeList",1);
  _DAT_14cbe4820 = 0;
  _DAT_14cbe4828 = 0;
  _DAT_14cbe4830 = 0;
  DAT_14cbe4838 = (void *)0x0;
  _DAT_14cbe4840 = 0;
  _DAT_14cbe4848 = FUN_145982e92;
  DAT_14cbe4850 = *param_1;
  DAT_14cbe4860 = param_1[2];
  param_1[2] = 0;
  DAT_14cbe4870._0_4_ = (undefined4)param_1[4];
  DAT_14cbe4870._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cbe4878 = (undefined4)param_1[5];
  uRam000000014cbe487c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cbe4880 = (undefined4)param_1[6];
  uRam000000014cbe4884 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cbe4888 = (undefined4)param_1[7];
  uRam000000014cbe488c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cbe4850 != 0) {
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
  _DAT_14cbe4820 = 0;
  _DAT_14cbe4828 = local_68;
  _DAT_14cbe4830 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cbe4840 = CONCAT44(DAT_14cbe4844,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cbe4844 == 0) {
    _DAT_14cbe4840 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cbe4838,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cbe4838,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cbe4810) && ((DAT_14cbe47a0 == (int *)0x0 || (*DAT_14cbe47a0 < DAT_14cbe4810)))) {
    DAT_14cbe47a0 = &DAT_14cbe4810;
  }
  FUN_145982f7c();
  local_30 = &local_70;
  local_70 = &DAT_14cbe4810;
  local_38 = &DAT_14cbe4814;
  FUN_14618dba2(local_3c);
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



// FUNCTION 14618dba2 FUN_14618dba2 body=338 status=ok
// SIG undefined FUN_14618dba2(void)

undefined4 * FUN_14618dba2(undefined4 *param_1,undefined8 *param_2)

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
  FUN_14618dd88(local_40);
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
  cVar5 = FUN_14618dcf6(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cbe47b0 - DAT_14cbe47dc;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cbe47f0)) {
      uVar10 = DAT_14cbe47f0 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cbe47e8;
      if (DAT_14cbe47e8 == (undefined *)0x0) {
        puVar7 = &DAT_14cbe47e0;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cbe47f0 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cbe47e8;
      if (DAT_14cbe47e8 == (undefined *)0x0) {
        puVar7 = &DAT_14cbe47e0;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cbe47f0 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cbe47f0 = iVar9;
      FUN_14618de96();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14618dcf6 FUN_14618dcf6 body=145 status=ok
// SIG undefined FUN_14618dcf6(void)

undefined8 FUN_14618dcf6(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cbe47b0 - DAT_14cbe47dc != 1) && (DAT_14cbe47b0 != DAT_14cbe47dc)) {
    puVar6 = &DAT_14cbe47e0;
    if (DAT_14cbe47e8 != (undefined *)0x0) {
      puVar6 = DAT_14cbe47e8;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cbe47f0 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cbe47a8 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9f65c(*param_3);
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



// FUNCTION 14618dd88 FUN_14618dd88 body=270 status=ok
// SIG undefined FUN_14618dd88(void)

int * FUN_14618dd88(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cbe47d8;
  iVar3 = DAT_14cbe47b0;
  if (DAT_14cbe47dc == 0) {
    iVar2 = DAT_14cbe47b0 + 1;
    bVar7 = DAT_14cbe47b4 == DAT_14cbe47b0;
    DAT_14cbe47b0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cbe47a8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cbe47b8,1);
    puVar4 = DAT_14cbe47c8;
    if (DAT_14cbe47c8 == (undefined *)0x0) {
      puVar4 = &DAT_14cbe47b8;
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
    lVar6 = (longlong)DAT_14cbe47d8;
    DAT_14cbe47d8 = *(int *)(DAT_14cbe47a8 + 4 + lVar6 * 0x18);
    DAT_14cbe47dc = DAT_14cbe47dc + -1;
    if (DAT_14cbe47dc != 0) {
      *(undefined4 *)(DAT_14cbe47a8 + (longlong)DAT_14cbe47d8 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cbe47b8;
  if (DAT_14cbe47c8 != (undefined *)0x0) {
    puVar4 = DAT_14cbe47c8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cbe47a8;
  return param_1;
}



// FUNCTION 14618de96 FUN_14618de96 body=523 status=ok
// SIG undefined FUN_14618de96(void)

void FUN_14618de96(void)

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
  if (DAT_14cbe47e8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cbe47e8,0,0,4);
  }
  uVar3 = DAT_14cbe47f0;
  uVar2 = local_50;
  if (DAT_14cbe47f0 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cbe47e0,0,DAT_14cbe47f0,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cbe47e8;
        if (DAT_14cbe47e8 == (undefined *)0x0) {
          puVar6 = &DAT_14cbe47e0;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cbe47f0 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cbe47b8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cbe47d0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cbe47a8;
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
                (longlong)(int)DAT_14cbe47f0 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cbe47e8;
        if (DAT_14cbe47e8 == (undefined *)0x0) {
          puVar6 = &DAT_14cbe47e0;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cbe47f0 - 1U & uVar9) * 4);
        puVar6 = DAT_14cbe47e8;
        if (DAT_14cbe47e8 == (undefined *)0x0) {
          puVar6 = &DAT_14cbe47e0;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cbe47f0 - 1U) * 4) = iVar4;
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



// FUNCTION 14618e0a2 FUN_14618e0a2 body=507 status=ok
// SIG undefined FUN_14618e0a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14618e0a2(longlong *param_1)

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
  DAT_14cbe6b00 = 0;
  FUN_1446ddc76(&DAT_14cbe6b04,"HoverDrive",1);
  _DAT_14cbe6b10 = 0;
  _DAT_14cbe6b18 = 0;
  _DAT_14cbe6b20 = 0;
  DAT_14cbe6b28 = (void *)0x0;
  _DAT_14cbe6b30 = 0;
  _DAT_14cbe6b38 = FUN_140fadac2;
  DAT_14cbe6b40 = *param_1;
  DAT_14cbe6b50 = param_1[2];
  param_1[2] = 0;
  DAT_14cbe6b60._0_4_ = (undefined4)param_1[4];
  DAT_14cbe6b60._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cbe6b68 = (undefined4)param_1[5];
  uRam000000014cbe6b6c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cbe6b70 = (undefined4)param_1[6];
  uRam000000014cbe6b74 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cbe6b78 = (undefined4)param_1[7];
  uRam000000014cbe6b7c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cbe6b40 != 0) {
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
  _DAT_14cbe6b10 = 0;
  _DAT_14cbe6b18 = local_68;
  _DAT_14cbe6b20 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cbe6b30 = CONCAT44(DAT_14cbe6b34,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cbe6b34 == 0) {
    _DAT_14cbe6b30 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cbe6b28,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cbe6b28,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cbe6b00) && ((DAT_14cbe6a90 == (int *)0x0 || (*DAT_14cbe6a90 < DAT_14cbe6b00)))) {
    DAT_14cbe6a90 = &DAT_14cbe6b00;
  }
  FUN_140d476dc();
  local_30 = &local_70;
  local_70 = &DAT_14cbe6b00;
  local_38 = &DAT_14cbe6b04;
  FUN_14618e29e(local_3c);
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



// FUNCTION 14618e29e FUN_14618e29e body=338 status=ok
// SIG undefined FUN_14618e29e(void)

undefined4 * FUN_14618e29e(undefined4 *param_1,undefined8 *param_2)

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
  FUN_14618e484(local_40);
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
  cVar5 = FUN_14618e3f2(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cbe6aa0 - DAT_14cbe6acc;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cbe6ae0)) {
      uVar10 = DAT_14cbe6ae0 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cbe6ad8;
      if (DAT_14cbe6ad8 == (undefined *)0x0) {
        puVar7 = &DAT_14cbe6ad0;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cbe6ae0 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cbe6ad8;
      if (DAT_14cbe6ad8 == (undefined *)0x0) {
        puVar7 = &DAT_14cbe6ad0;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cbe6ae0 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cbe6ae0 = iVar9;
      FUN_14618e592();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14618e3f2 FUN_14618e3f2 body=145 status=ok
// SIG undefined FUN_14618e3f2(void)

undefined8 FUN_14618e3f2(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cbe6aa0 - DAT_14cbe6acc != 1) && (DAT_14cbe6aa0 != DAT_14cbe6acc)) {
    puVar6 = &DAT_14cbe6ad0;
    if (DAT_14cbe6ad8 != (undefined *)0x0) {
      puVar6 = DAT_14cbe6ad8;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cbe6ae0 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cbe6a98 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9f848(*param_3);
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



// FUNCTION 14618e484 FUN_14618e484 body=270 status=ok
// SIG undefined FUN_14618e484(void)

int * FUN_14618e484(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cbe6ac8;
  iVar3 = DAT_14cbe6aa0;
  if (DAT_14cbe6acc == 0) {
    iVar2 = DAT_14cbe6aa0 + 1;
    bVar7 = DAT_14cbe6aa4 == DAT_14cbe6aa0;
    DAT_14cbe6aa0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cbe6a98,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cbe6aa8,1);
    puVar4 = DAT_14cbe6ab8;
    if (DAT_14cbe6ab8 == (undefined *)0x0) {
      puVar4 = &DAT_14cbe6aa8;
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
    lVar6 = (longlong)DAT_14cbe6ac8;
    DAT_14cbe6ac8 = *(int *)(DAT_14cbe6a98 + 4 + lVar6 * 0x18);
    DAT_14cbe6acc = DAT_14cbe6acc + -1;
    if (DAT_14cbe6acc != 0) {
      *(undefined4 *)(DAT_14cbe6a98 + (longlong)DAT_14cbe6ac8 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cbe6aa8;
  if (DAT_14cbe6ab8 != (undefined *)0x0) {
    puVar4 = DAT_14cbe6ab8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cbe6a98;
  return param_1;
}



// FUNCTION 14618e592 FUN_14618e592 body=523 status=ok
// SIG undefined FUN_14618e592(void)

void FUN_14618e592(void)

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
  if (DAT_14cbe6ad8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cbe6ad8,0,0,4);
  }
  uVar3 = DAT_14cbe6ae0;
  uVar2 = local_50;
  if (DAT_14cbe6ae0 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cbe6ad0,0,DAT_14cbe6ae0,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cbe6ad8;
        if (DAT_14cbe6ad8 == (undefined *)0x0) {
          puVar6 = &DAT_14cbe6ad0;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cbe6ae0 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cbe6aa8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cbe6ac0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cbe6a98;
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
                (longlong)(int)DAT_14cbe6ae0 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cbe6ad8;
        if (DAT_14cbe6ad8 == (undefined *)0x0) {
          puVar6 = &DAT_14cbe6ad0;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cbe6ae0 - 1U & uVar9) * 4);
        puVar6 = DAT_14cbe6ad8;
        if (DAT_14cbe6ad8 == (undefined *)0x0) {
          puVar6 = &DAT_14cbe6ad0;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cbe6ae0 - 1U) * 4) = iVar4;
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



// FUNCTION 14618e79e FUN_14618e79e body=507 status=ok
// SIG undefined FUN_14618e79e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14618e79e(longlong *param_1)

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
  DAT_14cbe6c10 = 0;
  FUN_1446ddc76(&DAT_14cbe6c14,"HoverDrive",1);
  _DAT_14cbe6c20 = 0;
  _DAT_14cbe6c28 = 0;
  _DAT_14cbe6c30 = 0;
  DAT_14cbe6c38 = (void *)0x0;
  _DAT_14cbe6c40 = 0;
  _DAT_14cbe6c48 = FUN_140f0f966;
  DAT_14cbe6c50 = *param_1;
  DAT_14cbe6c60 = param_1[2];
  param_1[2] = 0;
  DAT_14cbe6c70._0_4_ = (undefined4)param_1[4];
  DAT_14cbe6c70._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cbe6c78 = (undefined4)param_1[5];
  uRam000000014cbe6c7c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cbe6c80 = (undefined4)param_1[6];
  uRam000000014cbe6c84 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cbe6c88 = (undefined4)param_1[7];
  uRam000000014cbe6c8c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cbe6c50 != 0) {
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
  _DAT_14cbe6c20 = 0;
  _DAT_14cbe6c28 = local_68;
  _DAT_14cbe6c30 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cbe6c40 = CONCAT44(DAT_14cbe6c44,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cbe6c44 == 0) {
    _DAT_14cbe6c40 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cbe6c38,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cbe6c38,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cbe6c10) && ((DAT_14cbe6ba0 == (int *)0x0 || (*DAT_14cbe6ba0 < DAT_14cbe6c10)))) {
    DAT_14cbe6ba0 = &DAT_14cbe6c10;
  }
  FUN_140f0fa3c();
  local_30 = &local_70;
  local_70 = &DAT_14cbe6c10;
  local_38 = &DAT_14cbe6c14;
  FUN_14618e99a(local_3c);
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



// FUNCTION 14618e99a FUN_14618e99a body=338 status=ok
// SIG undefined FUN_14618e99a(void)

undefined4 * FUN_14618e99a(undefined4 *param_1,undefined8 *param_2)

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
  FUN_14618eb80(local_40);
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
  cVar5 = FUN_14618eaee(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cbe6bb0 - DAT_14cbe6bdc;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cbe6bf0)) {
      uVar10 = DAT_14cbe6bf0 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cbe6be8;
      if (DAT_14cbe6be8 == (undefined *)0x0) {
        puVar7 = &DAT_14cbe6be0;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cbe6bf0 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cbe6be8;
      if (DAT_14cbe6be8 == (undefined *)0x0) {
        puVar7 = &DAT_14cbe6be0;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cbe6bf0 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cbe6bf0 = iVar9;
      FUN_14618ec8e();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14618eaee FUN_14618eaee body=145 status=ok
// SIG undefined FUN_14618eaee(void)

undefined8 FUN_14618eaee(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cbe6bb0 - DAT_14cbe6bdc != 1) && (DAT_14cbe6bb0 != DAT_14cbe6bdc)) {
    puVar6 = &DAT_14cbe6be0;
    if (DAT_14cbe6be8 != (undefined *)0x0) {
      puVar6 = DAT_14cbe6be8;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cbe6bf0 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cbe6ba8 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9fa34(*param_3);
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



// FUNCTION 14618eb80 FUN_14618eb80 body=270 status=ok
// SIG undefined FUN_14618eb80(void)

int * FUN_14618eb80(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cbe6bd8;
  iVar3 = DAT_14cbe6bb0;
  if (DAT_14cbe6bdc == 0) {
    iVar2 = DAT_14cbe6bb0 + 1;
    bVar7 = DAT_14cbe6bb4 == DAT_14cbe6bb0;
    DAT_14cbe6bb0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cbe6ba8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cbe6bb8,1);
    puVar4 = DAT_14cbe6bc8;
    if (DAT_14cbe6bc8 == (undefined *)0x0) {
      puVar4 = &DAT_14cbe6bb8;
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
    lVar6 = (longlong)DAT_14cbe6bd8;
    DAT_14cbe6bd8 = *(int *)(DAT_14cbe6ba8 + 4 + lVar6 * 0x18);
    DAT_14cbe6bdc = DAT_14cbe6bdc + -1;
    if (DAT_14cbe6bdc != 0) {
      *(undefined4 *)(DAT_14cbe6ba8 + (longlong)DAT_14cbe6bd8 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cbe6bb8;
  if (DAT_14cbe6bc8 != (undefined *)0x0) {
    puVar4 = DAT_14cbe6bc8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cbe6ba8;
  return param_1;
}



// FUNCTION 14618ec8e FUN_14618ec8e body=523 status=ok
// SIG undefined FUN_14618ec8e(void)

void FUN_14618ec8e(void)

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
  if (DAT_14cbe6be8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cbe6be8,0,0,4);
  }
  uVar3 = DAT_14cbe6bf0;
  uVar2 = local_50;
  if (DAT_14cbe6bf0 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cbe6be0,0,DAT_14cbe6bf0,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cbe6be8;
        if (DAT_14cbe6be8 == (undefined *)0x0) {
          puVar6 = &DAT_14cbe6be0;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cbe6bf0 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cbe6bb8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cbe6bd0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cbe6ba8;
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
                (longlong)(int)DAT_14cbe6bf0 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cbe6be8;
        if (DAT_14cbe6be8 == (undefined *)0x0) {
          puVar6 = &DAT_14cbe6be0;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cbe6bf0 - 1U & uVar9) * 4);
        puVar6 = DAT_14cbe6be8;
        if (DAT_14cbe6be8 == (undefined *)0x0) {
          puVar6 = &DAT_14cbe6be0;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cbe6bf0 - 1U) * 4) = iVar4;
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



// FUNCTION 14618ee9a FUN_14618ee9a body=507 status=ok
// SIG undefined FUN_14618ee9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14618ee9a(longlong *param_1)

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
  DAT_14cbe6e70 = 0;
  FUN_1446ddc76(&DAT_14cbe6e74,"OakVehicleInteraction",1);
  _DAT_14cbe6e80 = 0;
  _DAT_14cbe6e88 = 0;
  _DAT_14cbe6e90 = 0;
  DAT_14cbe6e98 = (void *)0x0;
  _DAT_14cbe6ea0 = 0;
  _DAT_14cbe6ea8 = FUN_1458ef7b2;
  DAT_14cbe6eb0 = *param_1;
  DAT_14cbe6ec0 = param_1[2];
  param_1[2] = 0;
  DAT_14cbe6ed0._0_4_ = (undefined4)param_1[4];
  DAT_14cbe6ed0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cbe6ed8 = (undefined4)param_1[5];
  uRam000000014cbe6edc = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cbe6ee0 = (undefined4)param_1[6];
  uRam000000014cbe6ee4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cbe6ee8 = (undefined4)param_1[7];
  uRam000000014cbe6eec = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cbe6eb0 != 0) {
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
  _DAT_14cbe6e80 = 0;
  _DAT_14cbe6e88 = local_68;
  _DAT_14cbe6e90 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cbe6ea0 = CONCAT44(DAT_14cbe6ea4,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cbe6ea4 == 0) {
    _DAT_14cbe6ea0 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cbe6e98,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cbe6e98,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cbe6e70) && ((DAT_14cbe6e00 == (int *)0x0 || (*DAT_14cbe6e00 < DAT_14cbe6e70)))) {
    DAT_14cbe6e00 = &DAT_14cbe6e70;
  }
  FUN_1458ef888();
  local_30 = &local_70;
  local_70 = &DAT_14cbe6e70;
  local_38 = &DAT_14cbe6e74;
  FUN_14618f096(local_3c);
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



// FUNCTION 14618f096 FUN_14618f096 body=338 status=ok
// SIG undefined FUN_14618f096(void)

undefined4 * FUN_14618f096(undefined4 *param_1,undefined8 *param_2)

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
  FUN_14618f27c(local_40);
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
  cVar5 = FUN_14618f1ea(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cbe6e10 - DAT_14cbe6e3c;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cbe6e50)) {
      uVar10 = DAT_14cbe6e50 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cbe6e48;
      if (DAT_14cbe6e48 == (undefined *)0x0) {
        puVar7 = &DAT_14cbe6e40;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cbe6e50 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cbe6e48;
      if (DAT_14cbe6e48 == (undefined *)0x0) {
        puVar7 = &DAT_14cbe6e40;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cbe6e50 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cbe6e50 = iVar9;
      FUN_14618f38a();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14618f1ea FUN_14618f1ea body=145 status=ok
// SIG undefined FUN_14618f1ea(void)

undefined8 FUN_14618f1ea(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cbe6e10 - DAT_14cbe6e3c != 1) && (DAT_14cbe6e10 != DAT_14cbe6e3c)) {
    puVar6 = &DAT_14cbe6e40;
    if (DAT_14cbe6e48 != (undefined *)0x0) {
      puVar6 = DAT_14cbe6e48;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cbe6e50 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cbe6e08 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9fc20(*param_3);
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



// FUNCTION 14618f27c FUN_14618f27c body=270 status=ok
// SIG undefined FUN_14618f27c(void)

int * FUN_14618f27c(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cbe6e38;
  iVar3 = DAT_14cbe6e10;
  if (DAT_14cbe6e3c == 0) {
    iVar2 = DAT_14cbe6e10 + 1;
    bVar7 = DAT_14cbe6e14 == DAT_14cbe6e10;
    DAT_14cbe6e10 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cbe6e08,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cbe6e18,1);
    puVar4 = DAT_14cbe6e28;
    if (DAT_14cbe6e28 == (undefined *)0x0) {
      puVar4 = &DAT_14cbe6e18;
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
    lVar6 = (longlong)DAT_14cbe6e38;
    DAT_14cbe6e38 = *(int *)(DAT_14cbe6e08 + 4 + lVar6 * 0x18);
    DAT_14cbe6e3c = DAT_14cbe6e3c + -1;
    if (DAT_14cbe6e3c != 0) {
      *(undefined4 *)(DAT_14cbe6e08 + (longlong)DAT_14cbe6e38 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cbe6e18;
  if (DAT_14cbe6e28 != (undefined *)0x0) {
    puVar4 = DAT_14cbe6e28;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cbe6e08;
  return param_1;
}



// FUNCTION 14618f38a FUN_14618f38a body=523 status=ok
// SIG undefined FUN_14618f38a(void)

void FUN_14618f38a(void)

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
  if (DAT_14cbe6e48 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cbe6e48,0,0,4);
  }
  uVar3 = DAT_14cbe6e50;
  uVar2 = local_50;
  if (DAT_14cbe6e50 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cbe6e40,0,DAT_14cbe6e50,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cbe6e48;
        if (DAT_14cbe6e48 == (undefined *)0x0) {
          puVar6 = &DAT_14cbe6e40;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cbe6e50 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cbe6e18;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cbe6e30 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cbe6e08;
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
                (longlong)(int)DAT_14cbe6e50 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cbe6e48;
        if (DAT_14cbe6e48 == (undefined *)0x0) {
          puVar6 = &DAT_14cbe6e40;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cbe6e50 - 1U & uVar9) * 4);
        puVar6 = DAT_14cbe6e48;
        if (DAT_14cbe6e48 == (undefined *)0x0) {
          puVar6 = &DAT_14cbe6e40;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cbe6e50 - 1U) * 4) = iVar4;
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



// FUNCTION 14618f596 FUN_14618f596 body=107 status=ok
// SIG undefined FUN_14618f596(void)

void FUN_14618f596(longlong param_1,uint param_2)

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
LAB_14618f5e5:
      FUN_1415c72b6(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_140068282(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_14618f5e5;
  FUN_14618f602(param_1);
  FUN_1415c72b6(param_1,param_2);
  return;
}



// FUNCTION 14618f602 FUN_14618f602 body=339 status=ok
// SIG undefined FUN_14618f602(void)

void FUN_14618f602(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x2c + (longlong)iVar4 * 0x30) * 4) =
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



// FUNCTION 14618f756 FUN_14618f756 body=122 status=ok
// SIG undefined FUN_14618f756(void)

longlong FUN_14618f756(longlong param_1,longlong param_2)

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
    FUN_14618f7d0(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14618f7d0 FUN_14618f7d0 body=325 status=ok
// SIG undefined FUN_14618f7d0(void)

longlong * FUN_14618f7d0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if (param_1 != param_2) {
    uVar2 = *(uint *)(param_2 + 1);
    FUN_145d6b49a(param_1,(ulonglong)uVar2);
    lVar5 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar5 + uVar2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar5) < uVar2) {
      FUN_14488f93c(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar2) {
      lVar5 = *param_1;
      lVar4 = *param_2;
      lVar8 = 0;
      uVar7 = 0;
      do {
        plVar6 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar6 = param_2 + 2;
        }
        uVar3 = *(uint *)((longlong)plVar6 + (uVar7 >> 5 & 0x7ffffff) * 4);
        *(undefined4 *)(lVar5 + lVar8) = *(undefined4 *)(lVar4 + lVar8);
        if ((uVar3 >> ((uint)uVar7 & 0x1f) & 1) == 0) {
          *(undefined4 *)(lVar5 + 4 + lVar8) = *(undefined4 *)(lVar4 + 4 + lVar8);
        }
        else {
          *(undefined8 *)(lVar5 + 0x28 + lVar8) = 0;
          *(undefined4 *)(lVar5 + 0x30 + lVar8) = 0;
          puVar1 = (undefined8 *)(lVar5 + 8 + lVar8);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar5 + 0x34 + lVar8) = 0xffffffff00000080;
          *(undefined4 *)(lVar5 + 0x3c + lVar8) = 0;
          *(undefined8 *)(lVar5 + 0x48 + lVar8) = 0;
          *(undefined4 *)(lVar5 + 0x50 + lVar8) = 0;
          FUN_145c3f772(lVar5 + 8 + lVar8,lVar4 + 8 + lVar8);
          *(undefined8 *)(lVar5 + 0x58 + lVar8) = *(undefined8 *)(lVar4 + 0x58 + lVar8);
        }
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 0x60;
      } while (uVar2 != uVar7);
    }
  }
  return param_1;
}



// FUNCTION 14618f915 FUN_14618f915 body=266 status=ok
// SIG undefined FUN_14618f915(void)

undefined4 FUN_14618f915(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  void *_Src;
  undefined4 uVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = (undefined2 *)0x0;
  local_60 = *(int *)(param_2 + 1);
  lVar3 = (longlong)local_60;
  _Src = (void *)*param_2;
  if (lVar3 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,local_60,0);
    memcpy(local_68,_Src,lVar3 * 2);
    puVar2 = local_68;
    if (local_60 != 0) goto LAB_14618f9a0;
  }
  puVar2 = &DAT_149dfb77a;
LAB_14618f9a0:
  uVar1 = FUN_140fa62e0(puVar2,&local_58);
  if ((char)uVar1 != '\0') {
    local_78 = local_58;
    local_70 = (int)uStack_50 + -1;
    if ((int)uStack_50 == 0) {
      local_70 = 0;
    }
    FUN_141603380(param_1,&local_78,param_3,param_2);
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 14618fa20 FUN_14618fa20 body=1134 status=ok
// SIG undefined FUN_14618fa20(void)

void FUN_14618fa20(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_1c8 [32];
  undefined4 *local_1a8;
  undefined1 local_1a0;
  undefined8 *local_198;
  undefined8 local_190;
  undefined8 local_188 [12];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  int local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  longlong lStack_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined4 local_94;
  undefined1 local_90 [16];
  undefined2 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_90[0] = 0;
  local_90._4_8_ = 0;
  local_80 = 0;
  local_78 = DAT_14c8464f8;
  uStack_70 = DAT_14c846500;
  local_68 = DAT_14c846508;
  local_60 = 0;
  local_5c = 0;
  local_50 = 0;
  local_48 = (undefined4)DAT_14c8464e0;
  uStack_44 = DAT_14c8464e0._4_4_;
  uStack_40 = (undefined4)DAT_14c8464e8;
  uStack_3c = DAT_14c8464e8._4_4_;
  local_38 = DAT_14c8464f0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_90);
  }
  local_94 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_94);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_94);
  }
  local_a0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  local_a8 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  plVar6 = &local_a8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x38);
  }
  local_c0 = 0xffffffffffffffff;
  uStack_b8 = 0;
  lStack_b0 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  local_c4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c4);
  }
  iVar2 = local_c4;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e0);
  }
  local_e8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e8);
  }
  uVar1 = local_e8;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_108 = local_e0;
  uStack_100 = uStack_d8;
  local_f8 = local_d0;
  local_128 = (undefined4)local_c0;
  uStack_124 = local_c0._4_4_;
  uStack_120 = (undefined4)uStack_b8;
  uStack_11c = uStack_b8._4_4_;
  local_118 = lStack_b0;
  if ((lStack_b0 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  uVar4 = local_94;
  uVar3 = local_a0;
  puVar7 = (undefined8 *)local_90;
  puVar8 = local_188;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  local_1a0 = iVar2 != 0;
  local_190 = uVar1;
  local_198 = &local_108;
  local_1a8 = &local_128;
  FUN_14618fe90(local_188,uVar4,uVar3,plVar6);
  if ((DAT_14c950c29 == 1) && (*plVar6 != 0)) {
    FUN_14689c22e();
  }
  if ((local_30 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14618fe90 FUN_14618fe90 body=435 status=ok
// SIG undefined FUN_14618fe90(void)

void FUN_14618fe90(undefined8 param_1,undefined4 param_2,longlong param_3,undefined8 param_4,
                  undefined4 *param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_3 != 0) {
    local_68 = param_8;
    local_70 = param_7;
    local_78 = param_6;
    FUN_146190044(param_3 + 0x4ea0,&local_58,param_1,param_2);
    lVar5 = FUN_1447210f0(param_3);
    if ((lVar5 == 0) || (local_58 == 0)) {
      lVar5 = FUN_1400796d0(*(undefined8 *)(*(longlong *)(param_5 + 4) + 0x10),
                            *(undefined8 *)(param_5 + 2),1);
      if (lVar5 != 0) {
        (**(code **)(**(longlong **)(param_5 + 4) + 0x248))
                  (*(longlong **)(param_5 + 4),lVar5,param_5);
      }
    }
    else {
      uVar6 = FUN_14119d0a4(lVar5);
      puVar7 = (undefined8 *)FUN_14001cc68(0x38,0x10);
      uVar3 = *param_5;
      uVar4 = *(undefined8 *)(param_5 + 2);
      lVar5 = *(longlong *)(param_5 + 4);
      if ((lVar5 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar5);
      }
      *puVar7 = &PTR_FUN_14b95e830;
      puVar7[1] = param_4;
      *(undefined4 *)(puVar7 + 2) = uVar3;
      *(undefined8 *)((longlong)puVar7 + 0x14) = uVar4;
      *(undefined8 *)((longlong)puVar7 + 0x1c) = 0;
      FUN_14485c47a((longlong)puVar7 + 0x1c,lVar5);
      puVar7[5] = local_58;
      puVar7[6] = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
      }
      FUN_140b1330e(uVar6,*(undefined8 *)(param_5 + 4),param_5[1],puVar7);
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_50 + 0x10))(local_50);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146190044 FUN_146190044 body=408 status=ok
// SIG undefined FUN_146190044(void)

undefined8
FUN_146190044(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined1 param_5,undefined8 param_6,longlong param_7)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((param_7 == 0) && (param_7 = FUN_14479d2ce(param_1 + 0x58), param_7 == 0)) {
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
  }
  else {
    FUN_14030a482(param_3,&local_68,param_7,0);
  }
  local_80 = local_68;
  local_78 = local_60;
  local_70 = local_58;
  lVar3 = FUN_1403ca227();
  lVar4 = *(longlong *)(lVar3 + 0x28);
  if (lVar4 == 0) {
    uVar5 = FUN_14121240e();
    lVar4 = FUN_14477b664(uVar5);
    *(longlong *)(lVar3 + 0x28) = lVar4;
  }
  lVar6 = *(longlong *)(lVar3 + 0x30);
  if (((lVar6 == 0) && (lVar6 = 0, lVar4 != 0)) && (*(longlong *)(lVar3 + 0x20) != 0)) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      lVar6 = 0;
    }
    else {
      uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar3 + 0x20));
    }
    *(longlong *)(lVar3 + 0x30) = lVar6;
  }
  local_88 = param_6;
  local_90 = param_5;
  local_98 = param_4;
  FUN_1461901de(param_1,param_2,lVar6,&local_80);
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1461901de FUN_1461901de body=950 status=ok
// SIG undefined FUN_1461901de(void)

longlong *
FUN_1461901de(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4,
             undefined4 param_5,char param_6,undefined4 *param_7)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong **local_a0;
  undefined4 *local_98;
  undefined1 local_90 [8];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68 = param_3;
  plVar7 = (longlong *)FUN_14479d2ce(param_1 + 0x58);
  local_70 = plVar7;
  if (((plVar7 == (longlong *)0x0) || (cVar5 = FUN_1457baa60(plVar7 + 0x9d4), cVar5 == '\0')) ||
     (*(char *)(param_1 + 0x69) != '\0')) {
    *param_2 = 0;
    param_2[1] = 0;
    if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  local_78 = *(undefined8 *)(param_7 + 4);
  local_88 = *param_7;
  uStack_84 = param_7[1];
  uStack_80 = param_7[2];
  uStack_7c = param_7[3];
  if (param_6 == '\0') {
    (**(code **)(*plVar7 + 0x720))(plVar7,&local_88);
  }
  local_60 = (longlong *)CONCAT44(local_60._4_4_,0x3f800000);
  plVar7 = (longlong *)FUN_14001cc68(0x1e0,0x10);
  local_98 = &local_88;
  local_a8 = param_4;
  local_a0 = &local_60;
  FUN_14619067c(plVar7,&local_68,&local_70,&local_70);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar11 = plVar7 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  plVar11 = local_70;
  if (((*(byte *)(local_68 + 0x590) & 1) == 0) || ((char)local_70[0x2f] == '\x03')) {
    local_60 = (longlong *)0x0;
    local_58 = (longlong *)((ulonglong)local_58 & 0xffffffff00000000);
    FUN_1446efa72(&local_60,0,3,0x10);
    plVar3 = local_60;
    local_58 = (longlong *)CONCAT44(local_58._4_4_,3);
    *local_60 = (longlong)&PTR_LAB_14b95eb30;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    local_60[2] = lVar10;
    *local_60 = (longlong)&PTR_FUN_14b95eac0;
    local_60[3] = 0;
    FUN_14485c47a(local_60 + 3,plVar11);
    plVar3[4] = (longlong)plVar11;
    FUN_146190596(plVar7 + 3,local_90,&local_60);
    FUN_1449db362(&local_60);
    uVar8 = FUN_1447210f0(local_70);
    FUN_140e67fb0(&local_60,uVar8);
    if (local_58 != (longlong *)0x0) {
      iVar6 = (int)local_58[1];
      do {
        if (iVar6 == 0) {
          plVar11 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar4 = (int)local_58[1];
        bVar12 = iVar6 == iVar4;
        if (bVar12) {
          *(int *)(local_58 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
        plVar11 = local_58;
      } while (!bVar12);
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_58 + 0x10))();
      }
      plVar3 = local_60;
      if (plVar11 != (longlong *)0x0) {
        if (local_60 != (longlong *)0x0) {
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
            UNLOCK();
          }
          local_60 = plVar7 + 2;
          local_58 = plVar7;
          FUN_140e67c44(plVar3,&local_60);
          plVar3 = local_58;
          if (local_58 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_58 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_58)(local_58);
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
        LOCK();
        plVar3 = plVar11 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
    }
    cVar5 = FUN_144729dda(param_1 + 0x50);
    if ((cVar5 != '\0') && (lVar9 = FUN_14479d2ce(param_1 + 0x48), lVar9 != 0)) {
      *(undefined1 *)(param_1 + 0x73) = 1;
      FUN_148beb391(lVar9 + 0x100);
    }
    *(undefined1 *)(param_1 + 0x69) = 1;
    *(undefined4 *)(param_1 + 0x6c) = param_5;
    *param_2 = (longlong)(plVar7 + 2);
    param_2[1] = (longlong)plVar7;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar7 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
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
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_c8);
}



// FUNCTION 146190596 FUN_146190596 body=216 status=ok
// SIG undefined FUN_146190596(void)

undefined8 * FUN_146190596(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 14619067c FUN_14619067c body=276 status=ok
// SIG undefined FUN_14619067c(void)

undefined8 *
FUN_14619067c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5,undefined4 *param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined4 *local_180;
  undefined8 *local_178;
  undefined1 *local_170;
  undefined1 local_168 [8];
  undefined4 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined1 local_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined1 local_130;
  undefined1 local_120 [208];
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14b95eaa0;
  local_50 = 0;
  local_148 = *param_7;
  uStack_140 = param_7[1];
  local_138 = param_7[2];
  local_130 = 1;
  local_150 = *param_6;
  local_14c = 1;
  uVar1 = *param_4;
  uVar2 = *param_3;
  FUN_144a79b68(local_168,*param_2);
  local_160 = 0x4000;
  local_158 = 0;
  local_188 = param_5;
  local_180 = &local_150;
  local_178 = &local_148;
  local_170 = local_120;
  FUN_146190792(param_1 + 2,local_168,uVar2,uVar1);
  if ((local_48 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146190792 FUN_146190792 body=365 status=ok
// SIG undefined FUN_146190792(void)

undefined8 *
FUN_146190792(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 *param_6,undefined4 *param_7,longlong param_8)

{
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined8 local_170;
  undefined8 *local_168;
  undefined4 *local_160;
  undefined4 *local_158;
  undefined1 *local_150;
  undefined4 local_140;
  char local_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  char local_120;
  undefined1 local_118 [208];
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_48 = *(char *)(param_8 + 0xd0);
  if (local_48 == '\x01') {
    FUN_1418a644c(local_118,param_8);
  }
  local_120 = *(char *)(param_7 + 6);
  if (local_120 == '\x01') {
    local_128 = *(undefined8 *)(param_7 + 4);
    local_138 = *param_7;
    uStack_134 = param_7[1];
    uStack_130 = param_7[2];
    uStack_12c = param_7[3];
  }
  local_13c = *(char *)(param_6 + 1);
  if (local_13c == '\x01') {
    local_140 = *param_6;
  }
  local_150 = local_118;
  local_158 = &local_138;
  local_160 = &local_140;
  local_168 = &DAT_14c8464e0;
  local_170 = param_5;
  local_178 = 0;
  FUN_1415e3b80(param_1,param_2,param_3,param_4);
  *param_1 = &PTR_FUN_14b95d090;
  if (*(char *)(param_6 + 1) == '\x01') {
    *(undefined1 *)(param_6 + 1) = 0;
  }
  if (*(char *)(param_7 + 6) == '\x01') {
    *(undefined1 *)(param_7 + 6) = 0;
  }
  if (*(char *)(param_8 + 0xd0) == '\x01') {
    FUN_1414dc478(param_8);
    *(undefined1 *)(param_8 + 0xd0) = 0;
  }
  if ((local_40 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146190900 FUN_146190900 body=281 status=ok
// SIG undefined FUN_146190900(void)

void FUN_146190900(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined4 local_60;
  undefined4 *local_58;
  undefined1 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined1 local_38 [8];
  undefined **local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = FUN_141603f8e();
  lVar2 = FUN_14572ad1a(uVar1,1);
  param_1[6] = lVar2;
  if ((param_1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_1);
  }
  *(longlong **)(lVar2 + 0x2a8) = param_1;
  local_30 = &PTR_FUN_14b403190;
  FUN_14572a0e8(local_38);
  local_58 = local_48;
  local_40 = 0;
  local_48[0] = 0x567f;
  local_50 = 0;
  local_60 = 5;
  local_68 = 1;
  lVar2 = FUN_141603f94(1,0,param_2,param_3);
  if ((param_1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_1);
  }
  *(longlong **)(lVar2 + 0x1f0) = param_1;
  FUN_14572aa80(param_1[6],lVar2);
  FUN_14572a0dc(local_38);
  (**(code **)(*param_1 + 0x2c0))(param_1);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146190a26 FUN_146190a26 body=40 status=ok
// SIG undefined FUN_146190a26(void)

undefined8 FUN_146190a26(undefined8 param_1,int param_2)

{
  FUN_146190a4e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146190a4e FUN_146190a4e body=409 status=ok
// SIG undefined FUN_146190a4e(void)

void FUN_146190a4e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bd80030;
  param_1[5] = &PTR_FUN_14bd80410;
  param_1[0x13] = &PTR_FUN_14bd80430;
  param_1[0x14] = &PTR_FUN_14bd80470;
  param_1[0x15] = &PTR_FUN_14bd804a0;
  param_1[0x16] = &PTR_FUN_14bd804b0;
  param_1[0x17] = &PTR_FUN_14bd804f0;
  FUN_145a45466(param_1 + 0xaa);
  FUN_14008cd94(param_1 + 0x86);
  plVar3 = (longlong *)param_1[0x72];
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
  if (param_1[0x67] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x66];
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
  plVar3 = (longlong *)param_1[0x5a];
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
  plVar3 = (longlong *)param_1[0x58];
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
  plVar3 = (longlong *)param_1[0x26];
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
  FUN_1411412f4(param_1);
  return;
}



// FUNCTION 146190be8 FUN_146190be8 body=364 status=ok
// SIG undefined FUN_146190be8(void)

undefined4 * FUN_146190be8(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146190e3c(param_1,local_48);
  *local_40 = *param_3;
  local_40[1] = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = *local_40;
  plVar2 = (longlong *)local_40[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar2 + 0xcU) = *(int *)((longlong)plVar2 + 0xcU) + 1;
    UNLOCK();
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  uVar5 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  cVar4 = FUN_146190d56(param_1,uVar5,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_40 + 0x14) = uVar5;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_146190f24(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146190d56 FUN_146190d56 body=229 status=ok
// SIG undefined FUN_146190d56(void)

undefined8 FUN_146190d56(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_40 = *param_3;
    plVar3 = (longlong *)param_3[1];
    local_38 = plVar3;
    if (plVar3 == (longlong *)0x0) {
      iVar7 = FUN_14692c01c(param_1,param_2,&local_40);
    }
    else {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      iVar7 = FUN_14692c01c(param_1);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (iVar7 != -1) {
      puVar2 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x18);
      plVar3 = *(longlong **)(puVar2 + 2);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      uVar4 = *(undefined4 *)((longlong)param_3 + 4);
      uVar5 = *(undefined4 *)(param_3 + 1);
      uVar6 = *(undefined4 *)((longlong)param_3 + 0xc);
      *puVar2 = *(undefined4 *)param_3;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      FUN_14692bfaa(param_1,*param_4);
      *param_4 = iVar7;
      uVar8 = 1;
      goto LAB_146190d7c;
    }
  }
  uVar8 = 0;
LAB_146190d7c:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146190e3c FUN_146190e3c body=231 status=ok
// SIG undefined FUN_146190e3c(void)

int * FUN_146190e3c(longlong *param_1,int *param_2)

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



// FUNCTION 146190f24 FUN_146190f24 body=521 status=ok
// SIG undefined FUN_146190f24(void)

void FUN_146190f24(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
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
  uVar7 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar7 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar7,4);
    if (0 < (int)uVar7) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar7 != uVar10);
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
      iVar11 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar5 = (longlong)iVar11;
        uVar9 = *(ulonglong *)(lVar3 + lVar5 * 0x18);
        plVar6 = *(longlong **)(lVar3 + 8 + lVar5 * 0x18);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
          UNLOCK();
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))();
          }
        }
        lVar3 = lVar3 + lVar5 * 0x18;
        uVar7 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar9 = (longlong)(int)(uVar7 >> 0x10 ^ uVar7) & (longlong)(int)param_1[9] - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar3 + 0x14) = iVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) = iVar11
        ;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar11 = local_70._4_4_;
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



// FUNCTION 14619112e FUN_14619112e body=255 status=ok
// SIG undefined FUN_14619112e(void)

longlong * FUN_14619112e(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar4 = (longlong *)FUN_14001cc68(0x50,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b429050;
  plVar1 = plVar4 + 2;
  *(undefined1 *)(plVar4 + 7) = 0;
  plVar4[3] = 0;
  plVar4[4] = 0;
  *(undefined8 *)((longlong)plVar4 + 0x24) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x2c) = 0;
  plVar4[2] = (longlong)&PTR_FUN_14b429070;
  plVar4[8] = param_1;
  plVar4[9] = 0;
  local_40 = plVar1;
  local_38 = plVar4;
  FUN_14619129a(&local_40,plVar1);
  FUN_146191230(plVar1,param_3);
  plVar3 = local_38;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146191230 FUN_146191230 body=106 status=ok
// SIG undefined FUN_146191230(void)

void FUN_146191230(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = (**(code **)(*(longlong *)*param_2 + 0x18))();
  FUN_14485c47a(param_1 + 0x38,uVar4);
  lVar2 = *(longlong *)(param_1 + 0x30);
  lVar1 = lVar2 + 0x10;
  FUN_1416043ac(param_1,lVar1,uVar4);
  FUN_1416043ac(param_1,lVar2 + 0x58,uVar4);
  uVar3 = FUN_14619133c(lVar1,uVar4);
  FUN_1402a7054(param_1,uVar3);
  return;
}



// FUNCTION 14619129a FUN_14619129a body=162 status=ok
// SIG undefined FUN_14619129a(void)

void FUN_14619129a(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1461912d9;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1461912d9;
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
LAB_1461912d9:
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
                    /* WARNING: Could not recover jumptable at 0x000146191338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14619133c FUN_14619133c body=434 status=ok
// SIG undefined FUN_14619133c(void)

ulonglong FUN_14619133c(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined7 uVar6;
  ulonglong uVar5;
  undefined8 ****ppppuVar7;
  bool bVar8;
  undefined1 auStack_98 [32];
  undefined8 ***local_78 [3];
  ushort local_60;
  byte local_58;
  undefined8 ***local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1416045bc(local_50,param_1,param_2);
  FUN_1416045bc(local_78,param_1 + 0x48,param_2);
  cVar2 = FUN_1461914f0(local_50,local_78);
  if (cVar2 == '\0') {
switchD_146191479_default:
    uVar5 = 0;
    goto LAB_1461913b1;
  }
  if (*(char *)(param_1 + 0x40) == '\0') {
    uVar3 = FUN_144a43716(local_50,local_78);
    uVar5 = (ulonglong)uVar3;
    goto LAB_1461913b1;
  }
  uVar6 = (undefined7)((ulonglong)param_1 >> 8);
  switch(*(char *)(param_1 + 0x40)) {
  case '\x01':
    uVar3 = FUN_144a43716(local_50,local_78);
    uVar5 = (ulonglong)uVar3 ^ 1;
    goto LAB_1461913b1;
  case '\x02':
    iVar4 = FUN_148971add(local_50,local_78);
    bVar8 = iVar4 == -1;
    break;
  case '\x03':
    iVar4 = FUN_148971add(local_50,local_78);
    uVar3 = iVar4 + 1;
    goto LAB_1461914e4;
  case '\x04':
    iVar4 = FUN_148971add(local_50,local_78);
    bVar8 = iVar4 == 1;
    break;
  case '\x05':
    uVar3 = FUN_148971add(local_50,local_78);
LAB_1461914e4:
    uVar5 = CONCAT71(uVar6,uVar3 < 2);
    goto LAB_1461913b1;
  default:
    goto switchD_146191479_default;
  }
  uVar5 = CONCAT71(uVar6,bVar8);
LAB_1461913b1:
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
  if (pcVar1 != (code *)0x0) {
    ppppuVar7 = local_78;
    if (0x18 < local_60) {
      ppppuVar7 = (undefined8 ****)local_78[0];
    }
    (*pcVar1)(ppppuVar7);
  }
  if (0x18 < local_60) {
    FUN_1400020a8(local_78[0]);
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
  if (pcVar1 != (code *)0x0) {
    ppppuVar7 = local_50;
    if (0x18 < local_38) {
      ppppuVar7 = (undefined8 ****)local_50[0];
    }
    (*pcVar1)(ppppuVar7);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(local_50[0]);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 1461914f0 FUN_1461914f0 body=681 status=ok
// SIG undefined FUN_1461914f0(void)

undefined8 FUN_1461914f0(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 ****ppppuVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [32];
  undefined8 ***local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120);
  uVar7 = (ulonglong)((uint)*(byte *)(param_2 + 4) * 0x120);
  iVar2 = FUN_14619179a(*(byte *)(param_1 + 4),*(byte *)(param_2 + 4),
                        (longlong)&DAT_14c9a8508 + uVar4,(longlong)&DAT_14c9a8508 + uVar7);
  if (iVar2 != 1) {
    if (iVar2 == 0) {
      uVar3 = 0;
      goto LAB_146191546;
    }
    if (iVar2 == 2) {
      (**(code **)(&DAT_14c9a8570 + uVar7))(local_58,param_2,(char)param_1[4]);
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(param_2 + 4) * 0x120));
      if (pcVar1 != (code *)0x0) {
        plVar5 = param_2;
        if (0x18 < *(ushort *)(param_2 + 3)) {
          plVar5 = (longlong *)*param_2;
        }
        (*pcVar1)(plVar5);
      }
      if (0x18 < *(ushort *)(param_2 + 3)) {
        FUN_1400020a8(*param_2);
      }
      *(ushort *)(param_2 + 3) = local_40;
      if (local_40 < 0x19) {
        uVar4 = (ulonglong)((uint)local_38 * 0x120);
        if (*(code **)((longlong)&DAT_14c9a85b8 + uVar4) == (code *)0x0) {
          if (*(code **)((longlong)&DAT_14c9a85b0 + uVar4) == (code *)0x0) {
            memcpy(param_2,local_58,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
          }
          else {
            (**(code **)((longlong)&DAT_14c9a85b0 + uVar4))(param_2,local_58);
          }
        }
        else {
          (**(code **)((longlong)&DAT_14c9a85b8 + uVar4))(param_2,local_58);
        }
      }
      else {
        *param_2 = (longlong)local_58[0];
        local_58[0] = (undefined8 ****)0x0;
        local_40 = 0;
      }
      *(byte *)(param_2 + 4) = local_38;
      local_38 = 0;
      if (DAT_14c9a85d0 != (code *)0x0) {
        ppppuVar6 = local_58;
        if (0x18 < local_40) {
          ppppuVar6 = (undefined8 ****)local_58[0];
        }
LAB_1461916ca:
        local_38 = 0;
        (*DAT_14c9a85d0)(ppppuVar6);
      }
    }
    else {
      (**(code **)(&DAT_14c9a8570 + uVar4))(local_58,param_1,(char)param_2[4]);
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120));
      if (pcVar1 != (code *)0x0) {
        plVar5 = param_1;
        if (0x18 < *(ushort *)(param_1 + 3)) {
          plVar5 = (longlong *)*param_1;
        }
        (*pcVar1)(plVar5);
      }
      if (0x18 < *(ushort *)(param_1 + 3)) {
        FUN_1400020a8(*param_1);
      }
      *(ushort *)(param_1 + 3) = local_40;
      if (local_40 < 0x19) {
        uVar4 = (ulonglong)((uint)local_38 * 0x120);
        if (*(code **)((longlong)&DAT_14c9a85b8 + uVar4) == (code *)0x0) {
          if (*(code **)((longlong)&DAT_14c9a85b0 + uVar4) == (code *)0x0) {
            memcpy(param_1,local_58,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
          }
          else {
            (**(code **)((longlong)&DAT_14c9a85b0 + uVar4))(param_1,local_58);
          }
        }
        else {
          (**(code **)((longlong)&DAT_14c9a85b8 + uVar4))(param_1,local_58);
        }
      }
      else {
        *param_1 = (longlong)local_58[0];
        local_58[0] = (undefined8 ****)0x0;
        local_40 = 0;
      }
      *(byte *)(param_1 + 4) = local_38;
      local_38 = 0;
      if (DAT_14c9a85d0 != (code *)0x0) {
        ppppuVar6 = local_58;
        if (0x18 < local_40) {
          ppppuVar6 = (undefined8 ****)local_58[0];
        }
        goto LAB_1461916ca;
      }
    }
    if (0x18 < local_40) {
      FUN_1400020a8(local_58[0]);
    }
  }
  uVar3 = 1;
LAB_146191546:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 14619179a FUN_14619179a body=214 status=ok
// SIG undefined FUN_14619179a(void)

uint FUN_14619179a(uint param_1,uint param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  
  cVar4 = (char)param_1;
  uVar3 = 1;
  if (cVar4 != (char)param_2) {
    lVar6 = (longlong)&DAT_14c9a8508 + (ulonglong)((param_1 & 0xff) * 0x120);
    if (param_3 != 0) {
      lVar6 = param_3;
    }
    lVar7 = (longlong)&DAT_14c9a8508 + (ulonglong)((param_2 & 0xff) * 0x120);
    if (param_4 != 0) {
      lVar7 = param_4;
    }
    uVar5 = 0;
    if (*(code **)(lVar6 + 0x58) == (code *)0x0) {
      bVar1 = 0;
    }
    else {
      bVar1 = (**(code **)(lVar6 + 0x58))(param_2);
    }
    if (*(code **)(lVar7 + 0x58) != (code *)0x0) {
      bVar2 = (**(code **)(lVar7 + 0x58))(param_1);
      if ((bVar1 & bVar2) == 1) {
        if (*(int *)(lVar7 + 8) < *(int *)(lVar6 + 8)) {
          return 2;
        }
        if (*(int *)(lVar6 + 8) < *(int *)(lVar7 + 8)) {
          return 3;
        }
        return ((char)param_2 == '\x01' || (cVar4 == '\x15' || cVar4 == '\x03')) ^ 3;
      }
      uVar5 = (uint)bVar2 * 2;
    }
    uVar3 = 3;
    if (bVar1 == 0) {
      uVar3 = uVar5;
    }
  }
  return uVar3;
}



// FUNCTION 146191870 FUN_146191870 body=54 status=ok
// SIG undefined FUN_146191870(void)

void FUN_146191870(void)

{
  FUN_1461918a6();
  if (DAT_14ca76500 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14ca764e0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1461918a6 FUN_1461918a6 body=395 status=ok
// SIG undefined FUN_1461918a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461918a6(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14ca764f0;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14ca76508 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14ca764e0;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      lVar3 = *(longlong *)(*local_58 + 0x250 + (longlong)iStack_3c * 0x260);
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
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  DAT_14ca764e8 = 0;
  if (DAT_14ca764ec != 0) {
    FUN_1473663c8();
  }
  _DAT_14ca76510 = 0xffffffff;
  DAT_14ca76508 = 0;
  if (0x80 < DAT_14ca7650c) {
    DAT_14ca7650c = 0x80;
    FUN_1446efbd8(&DAT_14ca764f0,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146191a40 FUN_146191a40 body=435 status=ok
// SIG undefined FUN_146191a40(void)

void FUN_146191a40(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  byte *pbVar3;
  bool bVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_2 + 0x10) == '\0') {
    puVar5 = (undefined8 *)FUN_1408db39c(param_3,"option");
    pbVar3 = (byte *)*puVar5;
    if ((pbVar3 == (byte *)0x0) || ((*pbVar3 & 3) != 1)) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(pbVar3 + 8);
    }
    FUN_1446ddc76(&local_38,uVar7,1);
    *(longlong *)(param_1 + 1000) = local_38;
    if (local_38 != 0) {
      if ((longlong)*(int *)(param_1 + 0x398) != 0) {
        plVar8 = *(longlong **)(param_1 + 0x390);
        lVar6 = (longlong)*(int *)(param_1 + 0x398) * 0x18;
        do {
          if ((*plVar8 != 0) && (*(longlong *)(*plVar8 + 8) == local_38)) {
            if (plVar8 != (longlong *)0x0) {
              FUN_1401f3da4(&local_38);
              bVar4 = false;
              goto LAB_146191b77;
            }
            break;
          }
          plVar8 = plVar8 + 3;
          lVar6 = lVar6 + -0x18;
        } while (lVar6 != 0);
      }
      local_40 = (longlong *)FUN_14001cc68(0x38,0x10);
      local_40[1] = (longlong)&DAT_100000001;
      *local_40 = (longlong)&PTR_FUN_14b403910;
      local_48 = local_40 + 2;
      local_40[2] = (longlong)&PTR_FUN_14b162f88;
      local_40[3] = *(longlong *)(param_1 + 1000);
      local_40[4] = 0;
      local_40[5] = 0;
      local_40[6] = 0;
      FUN_1457861ac(&local_38);
      bVar4 = true;
LAB_146191b77:
      FUN_14029d0b6(param_1 + 0x378,&local_38);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_30 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar1 = (int *)((longlong)local_30 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_30 + 0x10))(local_30);
          }
        }
      }
      plVar8 = local_40;
      if ((bVar4) && (local_40 != (longlong *)0x0)) {
        LOCK();
        plVar2 = local_40 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146191bf4 FUN_146191bf4 body=54 status=ok
// SIG undefined FUN_146191bf4(void)

void FUN_146191bf4(void)

{
  FUN_146191c2a();
  if (DAT_14caf1918 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14caf18f8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146191c2a FUN_146191c2a body=396 status=ok
// SIG undefined FUN_146191c2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146191c2a(void)

{
  longlong *plVar1;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  undefined *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0x100000000;
  local_30 = &DAT_14caf1908;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if (DAT_14caf1920 != 0) {
    FUN_1449c0562(&local_38);
  }
  local_60 = &DAT_14caf18f8;
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  if (iStack_24 < *(int *)(local_30 + 0x18)) {
    do {
      plVar1 = (longlong *)(*local_60 + (longlong)iStack_44 * 0x20 + 8);
      FUN_1458c3e46(plVar1,0);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < *(int *)(local_50 + 0x18));
  }
  _DAT_14caf1900 = 0;
  if (DAT_14caf1904 != 0) {
    FUN_1446f4a44(&DAT_14caf18f8,0);
  }
  _DAT_14caf1928 = 0xffffffff;
  DAT_14caf1920 = 0;
  if (0x80 < DAT_14caf1924) {
    DAT_14caf1924 = 0x80;
    FUN_1446efbd8(&DAT_14caf1908,0);
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146191db8 FUN_146191db8 body=54 status=ok
// SIG undefined FUN_146191db8(void)

void FUN_146191db8(void)

{
  FUN_146191dee();
  if (DAT_14cb84e00 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb84de0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146191dee FUN_146191dee body=396 status=ok
// SIG undefined FUN_146191dee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146191dee(void)

{
  longlong lVar1;
  longlong lVar2;
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
  local_38 = &DAT_14cb84df0;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if (DAT_14cb84e08 != 0) {
    FUN_1449c0562(&local_40);
  }
  local_68 = &DAT_14cb84de0;
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  if (iStack_2c < *(int *)(local_38 + 0x18)) {
    do {
      lVar1 = *local_68;
      lVar2 = (longlong)iStack_4c;
      FUN_1488e2815(*(undefined8 *)(lVar1 + 0x10 + lVar2 * 0x28),
                    *(undefined4 *)(lVar1 + 0x18 + lVar2 * 0x28));
      if (*(longlong *)(lVar1 + 0x10 + lVar2 * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < *(int *)(local_58 + 0x18));
  }
  _DAT_14cb84de8 = 0;
  if (DAT_14cb84dec != 0) {
    FUN_140549ad6(&DAT_14cb84de0,0);
  }
  _DAT_14cb84e10 = 0xffffffff;
  DAT_14cb84e08 = 0;
  if (0x80 < DAT_14cb84e0c) {
    DAT_14cb84e0c = 0x80;
    FUN_1446efbd8(&DAT_14cb84df0,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146191f7c FUN_146191f7c body=74 status=ok
// SIG undefined FUN_146191f7c(void)

void FUN_146191f7c(void)

{
  if (DAT_14cadc0e8 < 2) {
    FUN_146191fc6();
    FUN_1414e2bf4(&DAT_14cadc0a0);
    return;
  }
  FUN_1414e2bf4(&DAT_14cadc0a0);
  DAT_14cadc0e8 = 1;
  FUN_141346600(&DAT_14cadc0a0);
  return;
}



// FUNCTION 146191fc6 FUN_146191fc6 body=377 status=ok
// SIG undefined FUN_146191fc6(void)

void FUN_146191fc6(void)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
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
  puVar5 = &DAT_14cadc0d8;
  if (DAT_14cadc0e0 != (undefined *)0x0) {
    puVar5 = DAT_14cadc0e0;
  }
  iVar4 = DAT_14cadc0e8 + 3;
  if (-1 < DAT_14cadc0e8) {
    iVar4 = DAT_14cadc0e8;
  }
  if (DAT_14cadc0a8 - DAT_14cadc0d4 < iVar4 >> 2) {
    local_50 = 0x100000000;
    uStack_48 = &DAT_14cadc0b0;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    if (DAT_14cadc0c8 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar4 = DAT_14cadc0c8;
    }
    local_78 = &DAT_14cadc0a0;
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if ((local_60._4_4_ != iVar4) || (uStack_48 != &DAT_14cadc0b0)) {
      iVar2 = local_60._4_4_;
      local_60 = uVar1;
      do {
        *(undefined4 *)(puVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar2 * 0x20) * 4)
             = 0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar2 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != &DAT_14cadc0a0 ||
               ((undefined *)CONCAT44(uStack_64,uStack_68) != &DAT_14cadc0b0 ||
               local_60._4_4_ != iVar4));
    }
  }
  else {
    uVar1 = local_60;
    if (0 < DAT_14cadc0e8) {
      lVar3 = 0;
      do {
        *(undefined4 *)(puVar5 + lVar3 * 4) = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < DAT_14cadc0e8);
    }
  }
  local_60 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146192140 FUN_146192140 body=54 status=ok
// SIG undefined FUN_146192140(void)

void FUN_146192140(void)

{
  FUN_146192176();
  if (DAT_14cb08af0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb08ad0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146192176 FUN_146192176 body=397 status=ok
// SIG undefined FUN_146192176(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146192176(void)

{
  longlong lVar1;
  longlong lVar2;
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
  local_38 = &DAT_14cb08ae0;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if (DAT_14cb08af8 != 0) {
    FUN_1449c0562(&local_40);
  }
  local_68 = &DAT_14cb08ad0;
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  if (iStack_2c < *(int *)(local_38 + 0x18)) {
    do {
      lVar1 = *local_68;
      lVar2 = (longlong)iStack_4c * 0x20;
      FUN_147d44589(*(undefined8 *)(lVar1 + 8 + lVar2),*(undefined4 *)(lVar1 + 0x10 + lVar2));
      if (*(longlong *)(lVar1 + 8 + lVar2) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < *(int *)(local_58 + 0x18));
  }
  DAT_14cb08ad8 = 0;
  if (DAT_14cb08adc != 0) {
    FUN_1446f4a44(&DAT_14cb08ad0,0);
  }
  _DAT_14cb08b00 = 0xffffffff;
  DAT_14cb08af8 = 0;
  if (0x80 < DAT_14cb08afc) {
    DAT_14cb08afc = 0x80;
    FUN_1446efbd8(&DAT_14cb08ae0,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146192304 FUN_146192304 body=54 status=ok
// SIG undefined FUN_146192304(void)

void FUN_146192304(void)

{
  FUN_14619233a();
  if (DAT_14cc06f50 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cc06f30 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14619233a FUN_14619233a body=397 status=ok
// SIG undefined FUN_14619233a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14619233a(void)

{
  longlong lVar1;
  longlong lVar2;
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
  local_38 = &DAT_14cc06f40;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if (DAT_14cc06f58 != 0) {
    FUN_1449c0562(&local_40);
  }
  local_68 = &DAT_14cc06f30;
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  if (iStack_2c < *(int *)(local_38 + 0x18)) {
    do {
      lVar1 = *local_68;
      lVar2 = (longlong)iStack_4c * 0x20;
      FUN_1491c3557(*(undefined8 *)(lVar1 + 8 + lVar2),*(undefined4 *)(lVar1 + 0x10 + lVar2));
      if (*(longlong *)(lVar1 + 8 + lVar2) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < *(int *)(local_58 + 0x18));
  }
  DAT_14cc06f38 = 0;
  if (DAT_14cc06f3c != 0) {
    FUN_1446f4a44(&DAT_14cc06f30,0);
  }
  _DAT_14cc06f60 = 0xffffffff;
  DAT_14cc06f58 = 0;
  if (0x80 < DAT_14cc06f5c) {
    DAT_14cc06f5c = 0x80;
    FUN_1446efbd8(&DAT_14cc06f40,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461924c8 FUN_1461924c8 body=423 status=ok
// SIG undefined FUN_1461924c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1461924c8(undefined8 *param_1)

{
  BOOL BVar1;
  DWORD iDevNum;
  void *_Src;
  int iVar2;
  undefined1 auStack_388 [32];
  _DISPLAY_DEVICEW local_368;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8c2838) && (FUN_144b3d300(&DAT_14c8c2838), DAT_14c8c2838 == -1)) {
    DAT_14c8c2828 = (void *)0x0;
    _DAT_14c8c2830 = 0;
    atexit((_func_5014 *)&LAB_142797d07);
    _Init_thread_footer(&DAT_14c8c2838);
  }
  iVar2 = DAT_14c8c2830;
  if (DAT_14c8c2830 < 2) {
    FUN_146192670(&local_368);
    if (DAT_14c8c2828 != (void *)0x0) {
      FUN_1400020a8();
    }
    DAT_14c8c2828 = (void *)CONCAT44(local_368.DeviceName._0_4_,local_368.cb);
    _DAT_14c8c2830 = CONCAT44(local_368.DeviceName._8_4_,local_368.DeviceName._4_4_);
    local_368.cb = 0x348;
    BVar1 = EnumDisplayDevicesW((LPCWSTR)0x0,0,&local_368,0);
    if (BVar1 != 0) {
      iDevNum = 1;
      do {
        if (((byte)local_368.StateFlags & 5) != 0) {
          FUN_14020fad6(&DAT_14c8c2828,local_368.DeviceString);
          break;
        }
        memset(local_368.DeviceName,0,0x344);
        local_368.cb = 0x348;
        BVar1 = EnumDisplayDevicesW((LPCWSTR)0x0,iDevNum,&local_368,0);
        iDevNum = iDevNum + 1;
      } while (BVar1 != 0);
    }
    iVar2 = DAT_14c8c2830;
    *param_1 = 0;
    _Src = DAT_14c8c2828;
    *(int *)(param_1 + 1) = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      goto LAB_146192546;
    }
  }
  else {
    *param_1 = 0;
    _Src = DAT_14c8c2828;
    *(int *)(param_1 + 1) = iVar2;
  }
  FUN_1446dd670(param_1,iVar2,0);
  memcpy((void *)*param_1,_Src,(longlong)iVar2 * 2);
LAB_146192546:
  if ((local_20 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146192670 FUN_146192670 body=29 status=ok
// SIG undefined FUN_146192670(void)

undefined8 FUN_146192670(undefined8 param_1)

{
  FUN_140056680(param_1,L"GenericGPUBrand");
  return param_1;
}



// FUNCTION 14619268e FUN_14619268e body=54 status=ok
// SIG undefined FUN_14619268e(void)

void FUN_14619268e(void)

{
  FUN_1461926c4();
  if (DAT_14ca78640 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14ca78620 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1461926c4 FUN_1461926c4 body=398 status=ok
// SIG undefined FUN_1461926c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461926c4(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14ca78630;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14ca78648 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14ca78620;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      lVar3 = *(longlong *)(*local_58 + 8 + (longlong)iStack_3c * 0x18);
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
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  DAT_14ca78628 = 0;
  if (DAT_14ca7862c != 0) {
    FUN_144727cd0(&DAT_14ca78620,0);
  }
  _DAT_14ca78650 = 0xffffffff;
  DAT_14ca78648 = 0;
  if (0x80 < DAT_14ca7864c) {
    DAT_14ca7864c = 0x80;
    FUN_1446efbd8(&DAT_14ca78630,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14619285c FUN_14619285c body=444 status=ok
// SIG undefined FUN_14619285c(void)

undefined8 * FUN_14619285c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 uStack_90;
  longlong *local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14130a082();
  *param_1 = &PTR_FUN_14aeab700;
  param_1[8] = 0;
  param_1[10] = 0;
  local_98 = param_1[8];
  local_50 = param_1[9];
  local_88 = (longlong *)param_1[10];
  local_40 = param_1[0xb];
  local_38 = param_1[0xc];
  uStack_30 = param_1[0xd];
  local_28 = param_1[0xe];
  uStack_20 = param_1[0xf];
  uVar1 = local_28;
  uVar2 = uStack_20;
  local_48 = local_88;
  local_58 = local_98;
  param_1[0xe] = CONCAT44(uStack_64,local_68);
  param_1[0xf] = CONCAT44(uStack_5c,uStack_60);
  param_1[0xc] = &PTR_LAB_14aeb56e0;
  param_1[0xd] = &LAB_143b4de1a;
  param_1[10] = 0;
  param_1[0xb] = uStack_80;
  param_1[8] = FUN_14841bf2a;
  param_1[9] = uStack_90;
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = local_38;
  uStack_70 = uStack_30;
  uStack_90 = local_50;
  uStack_80 = local_40;
  local_28 = uVar1;
  uStack_20 = uVar2;
  if (local_98 != 0) {
    plVar3 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar3 = &local_78;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  *param_1 = &PTR_FUN_14aeae060;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146192a1a FUN_146192a1a body=30 status=ok
// SIG undefined FUN_146192a1a(void)

void FUN_146192a1a(longlong param_1)

{
  char cVar1;
  
  do {
    cVar1 = FUN_146192a38(param_1 + 0x40);
  } while (cVar1 != '\0');
  return;
}



// FUNCTION 146192a38 FUN_146192a38 body=422 status=ok
// SIG undefined FUN_146192a38(void)

bool FUN_146192a38(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_2a8 [32];
  undefined1 local_288 [108];
  undefined4 local_21c;
  undefined4 local_218;
  undefined8 local_208;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8;
  undefined8 local_1c4;
  undefined8 uStack_1bc;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar1;
    memset(local_288,0,0x230);
    local_21c = 0x80;
    local_218 = 0xffffffff;
    local_208 = 0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_1e8 = 0;
    uStack_1e0 = 0;
    local_1d8 = 0;
    local_1d0 = 0xf;
    local_1c8 = 1;
    local_1c4 = 0;
    uStack_1bc = 0;
    local_198 = 0;
    uStack_194 = 0;
    uStack_190 = 0;
    uStack_18c = 0x3ff00000;
    local_188 = 0;
    uStack_180 = 0;
    local_178 = 0;
    uStack_170 = 0;
    local_168 = 0;
    uStack_164 = 0x3ff00000;
    uStack_160 = 0;
    uStack_15c = 0x3ff00000;
    local_158 = 0x3ff0000000000000;
    uStack_150 = 0;
    local_140 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_138 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    local_130 = DAT_14c8464f0;
    local_118 = DAT_14c8464f0;
    local_128 = (undefined4)DAT_14c8464e0;
    uStack_124 = DAT_14c8464e0._4_4_;
    uStack_120 = (undefined4)DAT_14c8464e8;
    uStack_11c = DAT_14c8464e8._4_4_;
    local_110 = 0;
    uStack_108 = 0;
    local_100 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_38 = 2;
    local_30 = 0;
    FUN_14129dff4(lVar1 + 0x10,local_288);
    FUN_14129df96(local_288);
    if (lVar2 != 0) {
      FUN_14129df96(lVar2 + 0x10);
      FUN_1400020a8(lVar2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146192be6 FUN_146192be6 body=167 status=ok
// SIG undefined FUN_146192be6(void)

void FUN_146192be6(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,0);
  FUN_140f67fee(uVar2,&local_28);
  plVar3 = (longlong *)(**(code **)(*param_2 + 8))(param_2,1);
  (**(code **)(*plVar3 + 0x238))(plVar3,&local_29);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),&local_28,local_29);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146192c8e FUN_146192c8e body=280 status=ok
// SIG undefined FUN_146192c8e(void)

void FUN_146192c8e(longlong param_1,longlong *param_2,byte param_3)

{
  undefined8 *puVar1;
  ushort *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  
  lVar3 = FUN_140391552();
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)FUN_14001cc68(0xb8,0x10);
    *puVar4 = &PTR_FUN_14b9c6ed8;
    puVar4[1] = *param_2;
    lVar6 = 0x14;
    do {
      *(undefined1 *)((longlong)puVar4 + lVar6 + -4) = 0;
      *(undefined8 *)((longlong)puVar4 + lVar6) = 0;
      ((undefined8 *)((longlong)puVar4 + lVar6))[1] = 0;
      puVar1 = (undefined8 *)((longlong)puVar4 + lVar6 + 0x10);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((longlong)puVar4 + lVar6 + 0x20);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined4 *)((longlong)puVar4 + lVar6 + 0x30) = 0;
      lVar6 = lVar6 + 0x38;
    } while (lVar6 != 0xbc);
    *(uint *)((longlong)puVar4 + 0x14) = (uint)param_3;
    FUN_14039144e(lVar3,puVar4);
  }
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 == 0) {
    return;
  }
  lVar6 = *param_2;
  if (lVar6 == DAT_14cbe0c80) {
    *(byte *)(lVar3 + 0xf7) = param_3;
  }
  else if (lVar6 == DAT_14cbe0c88) {
    *(byte *)(lVar3 + 0xf8) = param_3;
  }
  else if (lVar6 == DAT_14cbe0c90) {
    *(byte *)(lVar3 + 0xf9) = param_3;
  }
  else {
    if (lVar6 != DAT_14cbe0c98) {
      return;
    }
    if (*(byte *)(lVar3 + 0x150) == param_3) {
      if (*(int *)(lVar3 + 0x154) != 0) goto LAB_146192d61;
      iVar5 = 1;
    }
    else {
      iVar5 = *(int *)(lVar3 + 0x154) + 1;
    }
    *(byte *)(lVar3 + 0x150) = param_3;
    *(int *)(lVar3 + 0x154) = iVar5;
  }
LAB_146192d61:
  puVar2 = *(ushort **)(lVar3 + 0x80);
  if (puVar2 != (ushort *)0x0) {
    *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
  }
  return;
}



// FUNCTION 146192da6 FUN_146192da6 body=297 status=ok
// SIG undefined FUN_146192da6(void)

void FUN_146192da6(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined8 local_38;
  undefined1 local_29;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140be4ae0();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_29 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = local_28;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar2 = &local_29;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  local_38 = uStack_20;
  FUN_146192ed0(&local_40,puVar2);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146192ed0 FUN_146192ed0 body=42 status=ok
// SIG undefined FUN_146192ed0(void)

void FUN_146192ed0(longlong *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  *param_2 = 0;
  if ((*param_1 != 0) && ((longlong *)param_1[1] != (longlong *)0x0)) {
    uVar1 = (**(code **)(*(longlong *)param_1[1] + 0x40))();
    *param_2 = uVar1;
  }
  return;
}



// FUNCTION 146192f02 FUN_146192f02 body=1117 status=ok
// SIG undefined FUN_146192f02(void)

undefined8 * FUN_146192f02(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  void *_Src;
  longlong lVar5;
  undefined1 auStack_78 [40];
  void *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1410832cc();
  *param_1 = &PTR_FUN_14bc51230;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_14020fad6(param_1 + 0xc,L"LocalTransform");
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_14020fad6(param_1 + 0xe,L"BindPoseLocalTransform");
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_14020fad6(param_1 + 0x10,L"TimeZeroLocalTransform");
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_14020fad6(param_1 + 0x12,L"GeometricTransform");
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  FUN_14020fad6(param_1 + 0x14,L"PivotNodeTransform");
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  FUN_14020fad6(param_1 + 0x16,L"AssetInstanceUid");
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  FUN_14020fad6(param_1 + 0x18,L"HasBindPose");
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x3d] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
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
  param_1[0x54] = 0;
  FUN_14020fad6(param_1 + 0x53,L"AnimationAssetUidToPlay");
  *(undefined1 *)(param_1 + 0x62) = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x7e) = 0;
  FUN_146193590();
  _Src = DAT_14cc0d550;
  local_50 = (void *)0x0;
  lVar5 = (longlong)(int)DAT_14cc0d558;
  local_48 = (longlong *)CONCAT44(local_48._4_4_,DAT_14cc0d558);
  if (lVar5 == 0) {
    local_48 = (longlong *)(ulonglong)DAT_14cc0d558;
  }
  else {
    FUN_1446dd670(&local_50,DAT_14cc0d558,0);
    memcpy(local_50,_Src,lVar5 * 2);
  }
  puVar1 = param_1 + 5;
  FUN_1410835a0(param_1 + 0x1a,puVar1,&local_50);
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1461933d0();
  local_50 = (void *)param_1[5];
  plVar4 = (longlong *)param_1[6];
  local_48 = plVar4;
  if (plVar4 == (longlong *)0x0) {
    FUN_141604848(param_1 + 0x3c,&local_50);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    FUN_141604848(param_1 + 0x3c);
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
  }
  FUN_146193360();
  local_50 = (void *)param_1[5];
  local_48 = (longlong *)param_1[6];
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  FUN_1414dec20(param_1 + 0x1e,&local_50,&DAT_14cc0d5b0);
  plVar4 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_48 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  FUN_146193440();
  local_50 = (void *)param_1[5];
  plVar4 = (longlong *)param_1[6];
  local_48 = plVar4;
  if (plVar4 == (longlong *)0x0) {
    FUN_141604cbe(param_1 + 0x2d,&local_50);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    FUN_141604cbe(param_1 + 0x2d);
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
  }
  FUN_1461934b0();
  FUN_1410835a0(param_1 + 0x4b,puVar1,&DAT_14cc0d5f8);
  FUN_146193520();
  FUN_1410835a0(param_1 + 0x4f,puVar1,&DAT_14cc0d610);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146193360 FUN_146193360 body=111 status=ok
// SIG undefined FUN_146193360(void)

void FUN_146193360(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0d5c0) {
    FUN_144b3d300(&DAT_14cc0d5c0);
    if (DAT_14cc0d5c0 == -1) {
      FUN_140056680(&DAT_14cc0d5b0,L"__SlotMaterialDependencies__");
      atexit((_func_5014 *)&LAB_1444c4eca);
      _Init_thread_footer(&DAT_14cc0d5c0);
      return;
    }
  }
  return;
}



// FUNCTION 1461933d0 FUN_1461933d0 body=111 status=ok
// SIG undefined FUN_1461933d0(void)

void FUN_1461933d0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0d5d8) {
    FUN_144b3d300(&DAT_14cc0d5d8);
    if (DAT_14cc0d5d8 == -1) {
      FUN_140056680(&DAT_14cc0d5c8,L"__MeshToGlobalBindPoseReferences__");
      atexit((_func_5014 *)&LAB_1444c4edb);
      _Init_thread_footer(&DAT_14cc0d5d8);
      return;
    }
  }
  return;
}



// FUNCTION 146193440 FUN_146193440 body=111 status=ok
// SIG undefined FUN_146193440(void)

void FUN_146193440(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0d5f0) {
    FUN_144b3d300(&DAT_14cc0d5f0);
    if (DAT_14cc0d5f0 == -1) {
      FUN_140056680(&DAT_14cc0d5e0,L"__MorphTargetCurveWeights__Key");
      atexit((_func_5014 *)&LAB_1444c4eec);
      _Init_thread_footer(&DAT_14cc0d5f0);
      return;
    }
  }
  return;
}



// FUNCTION 1461934b0 FUN_1461934b0 body=111 status=ok
// SIG undefined FUN_1461934b0(void)

void FUN_1461934b0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0d608) {
    FUN_144b3d300(&DAT_14cc0d608);
    if (DAT_14cc0d608 == -1) {
      FUN_140056680(&DAT_14cc0d5f8,L"__LayerNames__Key");
      atexit((_func_5014 *)&LAB_1444c4efd);
      _Init_thread_footer(&DAT_14cc0d608);
      return;
    }
  }
  return;
}



// FUNCTION 146193520 FUN_146193520 body=111 status=ok
// SIG undefined FUN_146193520(void)

void FUN_146193520(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0d620) {
    FUN_144b3d300(&DAT_14cc0d620);
    if (DAT_14cc0d620 == -1) {
      FUN_140056680(&DAT_14cc0d610,L"__Tags__Key");
      atexit((_func_5014 *)&LAB_1444c4f0e);
      _Init_thread_footer(&DAT_14cc0d620);
      return;
    }
  }
  return;
}



// FUNCTION 146193590 FUN_146193590 body=121 status=ok
// SIG undefined FUN_146193590(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146193590(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0d560) {
    FUN_144b3d300(&DAT_14cc0d560);
    if (DAT_14cc0d560 == -1) {
      DAT_14cc0d550 = 0;
      _DAT_14cc0d558 = 0;
      FUN_14020fad6(&DAT_14cc0d550,L"SceneNodeSpecializeType");
      atexit((_func_5014 *)&LAB_1444c4e86);
      _Init_thread_footer(&DAT_14cc0d560);
      return;
    }
  }
  return;
}



// FUNCTION 14619360a FUN_14619360a body=54 status=ok
// SIG undefined FUN_14619360a(void)

void FUN_14619360a(void)

{
  FUN_146193640();
  if (DAT_14cac9ee8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cac9ed0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146193640 FUN_146193640 body=399 status=ok
// SIG undefined FUN_146193640(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146193640(void)

{
  longlong lVar1;
  undefined *puVar2;
  undefined1 auStack_88 [32];
  undefined *local_68;
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
  local_38 = &DAT_14cac9ee0;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if (DAT_14cac9ef0 != 0) {
    FUN_144a81a4c(&local_40);
  }
  local_68 = &DAT_14cac9d50;
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  if (iStack_2c < *(int *)(local_38 + 0x10)) {
    do {
      puVar2 = *(undefined **)(local_68 + 0x180);
      if (*(undefined **)(local_68 + 0x180) == (undefined *)0x0) {
        puVar2 = local_68;
      }
      lVar1 = (longlong)iStack_4c * 0x60;
      *(undefined4 *)(puVar2 + lVar1 + 0x50) = 0;
      if (*(longlong *)(puVar2 + lVar1 + 0x48) != 0) {
        FUN_1400020a8();
      }
      FUN_140f9dba8(puVar2 + lVar1 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_144a81a4c(&local_60);
    } while (iStack_4c < *(int *)(local_58 + 0x10));
  }
  DAT_14cac9ed8 = 0;
  if (DAT_14cac9edc != 0) {
    FUN_144729344(&DAT_14cac9d50,0);
  }
  _DAT_14cac9ef8 = 0xffffffff;
  DAT_14cac9ef0 = 0;
  if (0x20 < DAT_14cac9ef4) {
    DAT_14cac9ef4 = 0x20;
    FUN_14008f53c(&DAT_14cac9ee0,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461937d0 FUN_1461937d0 body=537 status=ok
// SIG undefined FUN_1461937d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461937d0(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [40];
  undefined4 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  void *local_68;
  ulonglong uStack_60;
  undefined1 local_54 [4];
  undefined8 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  DAT_14cb8d850 = 0;
  FUN_1446ddc76(&DAT_14cb8d854,"usability",1);
  _DAT_14cb8d860 = 0;
  _DAT_14cb8d868 = 0;
  _DAT_14cb8d870 = 0;
  DAT_14cb8d878 = (void *)0x0;
  _DAT_14cb8d880 = 0;
  FUN_1446f8bcc(&DAT_14cb8d878,0);
  _DAT_14cb8d888 = FUN_1411934cc;
  DAT_14cb8d890 = *param_1;
  DAT_14cb8d8a0 = param_1[2];
  param_1[2] = 0;
  DAT_14cb8d8b0._0_4_ = (undefined4)param_1[4];
  DAT_14cb8d8b0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb8d8b8 = (undefined4)param_1[5];
  uRam000000014cb8d8bc = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb8d8c0 = (undefined4)param_1[6];
  uRam000000014cb8d8c4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb8d8c8 = (undefined4)param_1[7];
  uRam000000014cb8d8cc = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb8d890 != 0) {
    *param_1 = 0;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = (void *)0x0;
  uStack_60 = 0;
  local_50 = (undefined8 *)&DAT_149e02088;
  local_48 = (undefined4 **)((ulonglong)local_48._4_4_ << 0x20);
  FUN_14475bea4(&local_78);
  _Src = local_68;
  _DAT_14cb8d860 = 0;
  _DAT_14cb8d868 = local_78;
  _DAT_14cb8d870 = uStack_70;
  iVar1 = (int)uStack_60;
  lVar2 = (longlong)(int)uStack_60;
  _DAT_14cb8d880 = CONCAT44(DAT_14cb8d884,(int)uStack_60);
  if ((int)uStack_60 == 0 && DAT_14cb8d884 == 0) {
    _DAT_14cb8d880 = uStack_60 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb8d878,uStack_60 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb8d878,_Src,lVar2 * 2);
    }
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb8d850) && ((DAT_14cb8d7e0 == (int *)0x0 || (*DAT_14cb8d7e0 < DAT_14cb8d850)))) {
    DAT_14cb8d7e0 = &DAT_14cb8d850;
  }
  FUN_14107dd82();
  local_48 = &local_80;
  local_80 = &DAT_14cb8d850;
  local_50 = &DAT_14cb8d854;
  FUN_1461939ea(local_54);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461939ea FUN_1461939ea body=338 status=ok
// SIG undefined FUN_1461939ea(void)

undefined4 * FUN_1461939ea(undefined4 *param_1,undefined8 *param_2)

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
  FUN_146193bd0(local_40);
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
  cVar5 = FUN_146193b3e(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb8d7f0 - DAT_14cb8d81c;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb8d830)) {
      uVar10 = DAT_14cb8d830 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb8d828;
      if (DAT_14cb8d828 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8d820;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8d830 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb8d828;
      if (DAT_14cb8d828 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8d820;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8d830 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb8d830 = iVar9;
      FUN_146193cde();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146193b3e FUN_146193b3e body=145 status=ok
// SIG undefined FUN_146193b3e(void)

undefined8 FUN_146193b3e(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb8d7f0 - DAT_14cb8d81c != 1) && (DAT_14cb8d7f0 != DAT_14cb8d81c)) {
    puVar6 = &DAT_14cb8d820;
    if (DAT_14cb8d828 != (undefined *)0x0) {
      puVar6 = DAT_14cb8d828;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb8d830 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb8d7e8 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9c83c(*param_3);
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



// FUNCTION 146193bd0 FUN_146193bd0 body=270 status=ok
// SIG undefined FUN_146193bd0(void)

int * FUN_146193bd0(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb8d818;
  iVar3 = DAT_14cb8d7f0;
  if (DAT_14cb8d81c == 0) {
    iVar2 = DAT_14cb8d7f0 + 1;
    bVar7 = DAT_14cb8d7f4 == DAT_14cb8d7f0;
    DAT_14cb8d7f0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb8d7e8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb8d7f8,1);
    puVar4 = DAT_14cb8d808;
    if (DAT_14cb8d808 == (undefined *)0x0) {
      puVar4 = &DAT_14cb8d7f8;
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
    lVar6 = (longlong)DAT_14cb8d818;
    DAT_14cb8d818 = *(int *)(DAT_14cb8d7e8 + 4 + lVar6 * 0x18);
    DAT_14cb8d81c = DAT_14cb8d81c + -1;
    if (DAT_14cb8d81c != 0) {
      *(undefined4 *)(DAT_14cb8d7e8 + (longlong)DAT_14cb8d818 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb8d7f8;
  if (DAT_14cb8d808 != (undefined *)0x0) {
    puVar4 = DAT_14cb8d808;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb8d7e8;
  return param_1;
}



// FUNCTION 146193cde FUN_146193cde body=523 status=ok
// SIG undefined FUN_146193cde(void)

void FUN_146193cde(void)

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
  if (DAT_14cb8d828 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb8d828,0,0,4);
  }
  uVar3 = DAT_14cb8d830;
  uVar2 = local_50;
  if (DAT_14cb8d830 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb8d820,0,DAT_14cb8d830,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb8d828;
        if (DAT_14cb8d828 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8d820;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb8d830 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb8d7f8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb8d810 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb8d7e8;
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
                (longlong)(int)DAT_14cb8d830 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb8d828;
        if (DAT_14cb8d828 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8d820;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb8d830 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb8d828;
        if (DAT_14cb8d828 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8d820;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb8d830 - 1U) * 4) = iVar4;
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



// FUNCTION 146193eea FUN_146193eea body=537 status=ok
// SIG undefined FUN_146193eea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146193eea(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [40];
  undefined4 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  void *local_68;
  ulonglong uStack_60;
  undefined1 local_54 [4];
  undefined8 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  DAT_14cb8da00 = 0;
  FUN_1446ddc76(&DAT_14cb8da04,"usability_prompt",1);
  _DAT_14cb8da10 = 0;
  _DAT_14cb8da18 = 0;
  _DAT_14cb8da20 = 0;
  DAT_14cb8da28 = (void *)0x0;
  _DAT_14cb8da30 = 0;
  FUN_1446f8bcc(&DAT_14cb8da28,0);
  _DAT_14cb8da38 = FUN_141074090;
  DAT_14cb8da40 = *param_1;
  DAT_14cb8da50 = param_1[2];
  param_1[2] = 0;
  DAT_14cb8da60._0_4_ = (undefined4)param_1[4];
  DAT_14cb8da60._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb8da68 = (undefined4)param_1[5];
  uRam000000014cb8da6c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb8da70 = (undefined4)param_1[6];
  uRam000000014cb8da74 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb8da78 = (undefined4)param_1[7];
  uRam000000014cb8da7c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb8da40 != 0) {
    *param_1 = 0;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = (void *)0x0;
  uStack_60 = 0;
  local_50 = (undefined8 *)&DAT_149e02088;
  local_48 = (undefined4 **)((ulonglong)local_48._4_4_ << 0x20);
  FUN_14475bea4(&local_78);
  _Src = local_68;
  _DAT_14cb8da10 = 0;
  _DAT_14cb8da18 = local_78;
  _DAT_14cb8da20 = uStack_70;
  iVar1 = (int)uStack_60;
  lVar2 = (longlong)(int)uStack_60;
  _DAT_14cb8da30 = CONCAT44(DAT_14cb8da34,(int)uStack_60);
  if ((int)uStack_60 == 0 && DAT_14cb8da34 == 0) {
    _DAT_14cb8da30 = uStack_60 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb8da28,uStack_60 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb8da28,_Src,lVar2 * 2);
    }
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb8da00) && ((DAT_14cb8d990 == (int *)0x0 || (*DAT_14cb8d990 < DAT_14cb8da00)))) {
    DAT_14cb8d990 = &DAT_14cb8da00;
  }
  FUN_140de97ca();
  local_48 = &local_80;
  local_80 = &DAT_14cb8da00;
  local_50 = &DAT_14cb8da04;
  FUN_146194104(local_54);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146194104 FUN_146194104 body=338 status=ok
// SIG undefined FUN_146194104(void)

undefined4 * FUN_146194104(undefined4 *param_1,undefined8 *param_2)

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
  FUN_1461942ea(local_40);
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
  cVar5 = FUN_146194258(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb8d9a0 - DAT_14cb8d9cc;
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
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb8d9e0)) {
      uVar10 = DAT_14cb8d9e0 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb8d9d8;
      if (DAT_14cb8d9d8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8d9d0;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8d9e0 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb8d9d8;
      if (DAT_14cb8d9d8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8d9d0;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8d9e0 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb8d9e0 = iVar9;
      FUN_1461943f8();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146194258 FUN_146194258 body=145 status=ok
// SIG undefined FUN_146194258(void)

undefined8 FUN_146194258(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb8d9a0 - DAT_14cb8d9cc != 1) && (DAT_14cb8d9a0 != DAT_14cb8d9cc)) {
    puVar6 = &DAT_14cb8d9d0;
    if (DAT_14cb8d9d8 != (undefined *)0x0) {
      puVar6 = DAT_14cb8d9d8;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb8d9e0 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb8d998 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9ca28(*param_3);
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



// FUNCTION 1461942ea FUN_1461942ea body=270 status=ok
// SIG undefined FUN_1461942ea(void)

int * FUN_1461942ea(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb8d9c8;
  iVar3 = DAT_14cb8d9a0;
  if (DAT_14cb8d9cc == 0) {
    iVar2 = DAT_14cb8d9a0 + 1;
    bVar7 = DAT_14cb8d9a4 == DAT_14cb8d9a0;
    DAT_14cb8d9a0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb8d998,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb8d9a8,1);
    puVar4 = DAT_14cb8d9b8;
    if (DAT_14cb8d9b8 == (undefined *)0x0) {
      puVar4 = &DAT_14cb8d9a8;
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
    lVar6 = (longlong)DAT_14cb8d9c8;
    DAT_14cb8d9c8 = *(int *)(DAT_14cb8d998 + 4 + lVar6 * 0x18);
    DAT_14cb8d9cc = DAT_14cb8d9cc + -1;
    if (DAT_14cb8d9cc != 0) {
      *(undefined4 *)(DAT_14cb8d998 + (longlong)DAT_14cb8d9c8 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb8d9a8;
  if (DAT_14cb8d9b8 != (undefined *)0x0) {
    puVar4 = DAT_14cb8d9b8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb8d998;
  return param_1;
}



// FUNCTION 1461943f8 FUN_1461943f8 body=523 status=ok
// SIG undefined FUN_1461943f8(void)

void FUN_1461943f8(void)

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
  if (DAT_14cb8d9d8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb8d9d8,0,0,4);
  }
  uVar3 = DAT_14cb8d9e0;
  uVar2 = local_50;
  if (DAT_14cb8d9e0 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb8d9d0,0,DAT_14cb8d9e0,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb8d9d8;
        if (DAT_14cb8d9d8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8d9d0;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb8d9e0 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb8d9a8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb8d9c0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb8d998;
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
                (longlong)(int)DAT_14cb8d9e0 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb8d9d8;
        if (DAT_14cb8d9d8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8d9d0;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb8d9e0 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb8d9d8;
        if (DAT_14cb8d9d8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8d9d0;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb8d9e0 - 1U) * 4) = iVar4;
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



// FUNCTION 146194604 FUN_146194604 body=356 status=ok
// SIG undefined FUN_146194604(void)

void FUN_146194604(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = FUN_14619476a();
  if ((lVar3 == 0) || (*(char *)(lVar3 + 8) != '\0')) goto LAB_1461946cb;
  local_24 = FUN_14607687a(param_1,lVar3);
  uVar5 = *(uint *)(param_1 + 800);
  if (uVar5 == 0xffffffff) {
    uVar5 = *(uint *)(param_1 + 0x2f8);
  }
  if (uVar5 == local_24) goto LAB_1461946cb;
  if (*(int *)(param_1 + 0x2d8) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(uint *)(*(longlong *)(param_1 + 0x2d0) +
                     (longlong)(*(int *)(param_1 + 0x2d8) + -1) * 4);
    if ((int)uVar5 < 0) goto LAB_1461946cb;
  }
  if ((*(int *)(param_1 + 0x2b8) <= (int)uVar5) || ((int)local_24 < 0)) goto LAB_1461946cb;
  if ((*(int *)(*(longlong *)(param_1 + 0x2b0) + 0x18 + (ulonglong)uVar5 * 0x30) <= (int)local_24)
     || (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x10 + (ulonglong)uVar5 * 0x30) +
                   8 + (ulonglong)local_24 * 0xb0) != '\0')) goto LAB_1461946cb;
  FUN_1460768f0(param_1,&local_24);
  cVar1 = FUN_141605134(param_1);
  if ((cVar1 == '\0') || (*(int *)(param_1 + 0x2f8) == *(int *)(param_1 + 800))) goto LAB_1461946cb;
  plVar4 = (longlong *)FUN_140714ba2(param_1);
  lVar3 = *plVar4;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0xa0));
  *(int *)(lVar3 + 0x98) = *(int *)(lVar3 + 0x98) + 1;
  if (*(int *)(lVar3 + 0x60) == *(int *)(param_1 + 800)) {
    if (*(int *)(lVar3 + 100) == 0) {
      iVar2 = 1;
      goto LAB_146194738;
    }
  }
  else {
    iVar2 = *(int *)(lVar3 + 100) + 1;
LAB_146194738:
    *(int *)(lVar3 + 0x60) = *(int *)(param_1 + 800);
    *(int *)(lVar3 + 100) = iVar2;
  }
  if (*(char *)(lVar3 + 8) == '\0') {
    iVar2 = *(int *)(lVar3 + 0xc) + 1;
LAB_146194754:
    *(undefined1 *)(lVar3 + 8) = 1;
    *(int *)(lVar3 + 0xc) = iVar2;
  }
  else if (*(int *)(lVar3 + 0xc) == 0) {
    iVar2 = 1;
    goto LAB_146194754;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0xa0));
LAB_1461946cb:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14619476a FUN_14619476a body=44 status=ok
// SIG undefined FUN_14619476a(void)

longlong FUN_14619476a(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (((lVar1 != 0) && (-1 < (int)param_2)) && ((int)param_2 < *(int *)(lVar1 + 200))) {
    return (ulonglong)param_2 * 0xb0 + *(longlong *)(lVar1 + 0xc0);
  }
  return 0;
}



// FUNCTION 146194796 FUN_146194796 body=54 status=ok
// SIG undefined FUN_146194796(void)

void FUN_146194796(void)

{
  FUN_1461947cc();
  if (DAT_14cc28808 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cc287e8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1461947cc FUN_1461947cc body=399 status=ok
// SIG undefined FUN_1461947cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461947cc(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14cc287f8;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14cc28810 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14cc287e8;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      if (*(longlong *)(*local_58 + 0x10 + (longlong)iStack_3c * 0x60) != 0) {
        lVar2 = *local_58 + (longlong)iStack_3c * 0x60;
        plVar1 = *(longlong **)(lVar2 + 0x20);
        plVar3 = (longlong *)(lVar2 + 0x30);
        if (plVar1 != (longlong *)0x0) {
          plVar3 = plVar1;
        }
        (**(code **)(*plVar3 + 0x10))();
      }
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  _DAT_14cc287f0 = 0;
  if (DAT_14cc287f4 != 0) {
    FUN_1401283f4(&DAT_14cc287e8,0);
  }
  _DAT_14cc28818 = 0xffffffff;
  DAT_14cc28810 = 0;
  if (0x80 < DAT_14cc28814) {
    DAT_14cc28814 = 0x80;
    FUN_1446efbd8(&DAT_14cc287f8,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14619495c FUN_14619495c body=208 status=ok
// SIG undefined FUN_14619495c(void)

void FUN_14619495c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1416071c8(&local_20,*(longlong *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x10));
    lVar3 = *(longlong *)(param_1 + 0x18);
    *(longlong *)(param_1 + 0x18) = local_20;
    local_20 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_20 != 0) {
        LOCK();
        puVar1 = (uint *)(local_20 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
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



// FUNCTION 146194a2e FUN_146194a2e body=208 status=ok
// SIG undefined FUN_146194a2e(void)

void FUN_146194a2e(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1416072be(&local_20,*(longlong *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x10));
    lVar3 = *(longlong *)(param_1 + 0x18);
    *(longlong *)(param_1 + 0x18) = local_20;
    local_20 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_20 != 0) {
        LOCK();
        puVar1 = (uint *)(local_20 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
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



// FUNCTION 146194b00 FUN_146194b00 body=142 status=ok
// SIG undefined FUN_146194b00(void)

code * FUN_146194b00(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a96f7c();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"InstancedView";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FInstancedViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1000000586;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14583d8ae;
}



// FUNCTION 146194ba6 FUN_146194ba6 body=205 status=ok
// SIG undefined FUN_146194ba6(void)

void FUN_146194ba6(short *param_1,ulonglong param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  ushort uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar1 = param_3[1];
  FUN_1403f967c(param_3,2);
  uVar3 = *(ushort *)(param_2 + 0xc);
  puVar2 = *(ulonglong **)(param_2 + 0x28);
  if (uVar3 != 0) {
    lVar5 = (ulonglong)uVar3 << 5;
    puVar4 = puVar2;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == *param_1) goto LAB_146194bf7;
      puVar4 = puVar4 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_146194bf7:
  lVar5 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + (longlong)(int)lVar1 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar3 = *(ushort *)(param_2 + 0xc);
    puVar2 = *(ulonglong **)(param_2 + 0x28);
  }
  if (uVar3 != 0) {
    lVar6 = 0x1e;
    puVar4 = (ulonglong *)0x0;
    do {
      if (*(short *)((longlong)puVar2 + lVar6) == param_1[1]) {
        if (puVar2 == puVar4) {
          return;
        }
        if ((ulonglong)((longlong)puVar2 - (longlong)puVar4) < param_2) {
          return;
        }
        *(int *)(lVar5 + 4 + (longlong)(int)lVar1 * 4) = ((int)puVar2 - (int)param_2) - (int)puVar4;
        return;
      }
      puVar4 = puVar4 + -4;
      lVar6 = lVar6 + 0x20;
    } while (-(longlong)puVar4 != (ulonglong)uVar3 << 5);
  }
  return;
}



// FUNCTION 146194c74 FUN_146194c74 body=77 status=ok
// SIG undefined FUN_146194c74(void)

void FUN_146194c74(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1406d14fa();
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_1416073b4(lVar1 + 0x3c28);
      return;
    }
  }
  return;
}



// FUNCTION 146194cc2 FUN_146194cc2 body=318 status=ok
// SIG undefined FUN_146194cc2(void)

byte FUN_146194cc2(longlong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  byte bVar3;
  char *pcVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  
  if (DAT_14caf22f8 == 0) {
    FUN_14160744b();
  }
  uVar2 = param_1[0x40];
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar2 == DAT_14c892fac) {
    pcVar4 = (char *)FUN_146194e04(DAT_14cb0d2b0,param_1);
  }
  else if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) == 0) {
    pcVar4 = (char *)0x0;
  }
  else {
    lVar5 = 0;
    do {
      pcVar4 = *(char **)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar5);
      if (*(longlong *)(pcVar4 + 0x360) == param_1[0x35]) break;
      lVar5 = lVar5 + 8;
      pcVar4 = (char *)0x0;
    } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar5);
  }
  iVar1 = *DAT_14caf2798;
  (**(code **)(*param_1 + 0x3c0))(param_1);
  if (pcVar4 == (char *)0x0) {
    bVar6 = true;
  }
  else {
    bVar6 = *pcVar4 != '\x03';
  }
  if ((longlong)DAT_14caf22f8 == 0) {
    bVar7 = false;
  }
  else {
    lVar5 = 0;
    do {
      bVar7 = *(longlong *)(DAT_14caf22f0 + lVar5) == param_1[0x4f];
      if (bVar7) break;
      lVar5 = lVar5 + 8;
    } while ((longlong)DAT_14caf22f8 * 8 != lVar5);
  }
  bVar3 = (**(code **)(*param_1 + 0x498))(param_1);
  return bVar3 & iVar1 == 2 & bVar7 & bVar6;
}



// FUNCTION 146194e04 FUN_146194e04 body=62 status=ok
// SIG undefined FUN_146194e04(void)

longlong FUN_146194e04(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x1150) != 0) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1148) + lVar3);
      lVar2 = *(longlong *)(lVar1 + 0x230);
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x30) == param_2)) {
        return lVar1;
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)*(int *)(param_1 + 0x1150) * 8 != lVar3);
  }
  return 0;
}



// FUNCTION 146194e42 FUN_146194e42 body=27 status=ok
// SIG undefined FUN_146194e42(void)

void FUN_146194e42(longlong param_1)

{
  FUN_141237e82();
  FUN_146194e5e(param_1 + -0x30);
  return;
}



// FUNCTION 146194e5e FUN_146194e5e body=1723 status=ok
// SIG undefined FUN_146194e5e(void)

/* WARNING: Removing unreachable block (ram,0x000146195298) */

void FUN_146194e5e(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 auStack_1d8 [32];
  PSRWLOCK local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong *local_198;
  undefined8 local_190;
  longlong *local_188;
  undefined4 local_180;
  longlong local_178;
  undefined8 uStack_170;
  code *local_168 [2];
  undefined8 local_158;
  undefined **local_148;
  longlong local_140;
  undefined1 local_120;
  undefined7 uStack_11f;
  undefined4 local_f8;
  longlong local_f0;
  int local_e8;
  undefined4 uStack_e4;
  undefined1 local_b0 [24];
  undefined1 local_98 [24];
  undefined1 local_80 [32];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar6 = FUN_1405c673d();
  local_1a8 = param_1;
  FUN_1402815f4(param_1,&local_f0);
  puVar2 = *(undefined8 **)(local_f0 + 0x400);
  local_1b8 = (PSRWLOCK)(puVar2 + 0xb);
  AcquireSRWLockExclusive(local_1b8);
  *(int *)(puVar2 + 10) = *(int *)(puVar2 + 10) + 1;
  plVar14 = (longlong *)CONCAT44(uStack_e4,local_e8);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar14 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  iVar10 = *(int *)((longlong)puVar2 + 0xc);
  FUN_140dd8e91(*puVar2,*(undefined4 *)(puVar2 + 1));
  *(undefined4 *)(puVar2 + 1) = 0;
  if ((iVar10 < 0) && (*(int *)((longlong)puVar2 + 0xc) != 0)) {
    FUN_148e536da(puVar2,0);
  }
  *(int *)(puVar2 + 2) = *(int *)(puVar2 + 2) + 1;
  local_1b0 = lVar6;
  if ((longlong)*(int *)(lVar6 + 0x30) != 0) {
    plVar14 = *(longlong **)(lVar6 + 0x28);
    plVar11 = plVar14 + (longlong)*(int *)(lVar6 + 0x30) * 0x2e;
    local_1a0 = local_1a8 + 0x44;
    do {
      if ((char)plVar14[5] == '\0') {
        FUN_14130dac8(&local_f0);
        if (local_e8 == 0 || *plVar14 != local_f0) {
          local_e8 = local_e8 + 1;
          local_f0 = *plVar14;
        }
        lVar6 = plVar14[10];
        if (lVar6 == 0) {
          uVar8 = FUN_1465f8f8a();
          lVar6 = FUN_14477b664(uVar8);
          plVar14[10] = lVar6;
        }
        plVar12 = plVar14 + 9;
        lVar13 = plVar14[0xb];
        if (lVar13 == 0) {
          if ((lVar6 != 0) && (*plVar12 != 0)) {
            plVar7 = *(longlong **)(lVar6 + 0xb8);
            if ((plVar7 == (longlong *)0x0) ||
               (cVar4 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar4 == '\0')) {
              plVar14[0xb] = 0;
            }
            else {
              uVar8 = (**(code **)(*plVar7 + 0x110))(plVar7);
              lVar13 = FUN_144aff482(uVar8,plVar12);
              plVar14[0xb] = lVar13;
              if (lVar13 != 0) {
                lVar6 = plVar14[10];
                goto LAB_146194fb8;
              }
            }
          }
        }
        else {
LAB_146194fb8:
          if (lVar6 == 0) {
            uVar8 = FUN_1465f8f8a();
            lVar6 = FUN_14477b664(uVar8);
            plVar14[10] = lVar6;
            lVar13 = plVar14[0xb];
            if (((lVar13 == 0) && (lVar13 = 0, lVar6 != 0)) && (*plVar12 != 0)) {
              plVar7 = *(longlong **)(lVar6 + 0xb8);
              if ((plVar7 == (longlong *)0x0) ||
                 (cVar4 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar4 == '\0')) {
                lVar13 = 0;
              }
              else {
                uVar8 = (**(code **)(*plVar7 + 0x110))(plVar7);
                lVar13 = FUN_144aff482(uVar8,plVar12);
              }
              plVar14[0xb] = lVar13;
            }
          }
          FUN_1410e88ee(local_b0,lVar13 + 0x18);
          lVar6 = plVar14[10];
          if (lVar6 == 0) {
            uVar8 = FUN_1465f8f8a();
            lVar6 = FUN_14477b664(uVar8);
            plVar14[10] = lVar6;
          }
          lVar13 = plVar14[0xb];
          if (((lVar13 == 0) && (lVar13 = 0, lVar6 != 0)) && (*plVar12 != 0)) {
            plVar7 = *(longlong **)(lVar6 + 0xb8);
            if ((plVar7 == (longlong *)0x0) ||
               (cVar4 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar4 == '\0')) {
              lVar13 = 0;
            }
            else {
              uVar8 = (**(code **)(*plVar7 + 0x110))(plVar7);
              lVar13 = FUN_144aff482(uVar8,plVar12);
            }
            plVar14[0xb] = lVar13;
          }
          FUN_1410e88ee(local_80,lVar13 + 0x38);
          local_178 = 0;
          uStack_170 = 0;
          plVar7 = (longlong *)FUN_140e82300();
          local_188 = (longlong *)*plVar7;
          if (local_188 != (longlong *)0x0) {
            (**(code **)(*local_188 + 8))();
          }
          local_180 = (undefined4)plVar7[1];
          lVar6 = plVar14[10];
          if (lVar6 == 0) {
            uVar8 = FUN_1465f8f8a();
            lVar6 = FUN_14477b664(uVar8);
            plVar14[10] = lVar6;
          }
          lVar13 = plVar14[0xb];
          if (((lVar13 == 0) && (lVar13 = 0, lVar6 != 0)) && (*plVar12 != 0)) {
            plVar7 = *(longlong **)(lVar6 + 0xb8);
            if ((plVar7 == (longlong *)0x0) ||
               (cVar4 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar4 == '\0')) {
              lVar13 = 0;
            }
            else {
              uVar8 = (**(code **)(*plVar7 + 0x110))(plVar7);
              lVar13 = FUN_144aff482(uVar8,plVar12);
            }
            plVar14[0xb] = lVar13;
          }
          if ((longlong)*(int *)(lVar13 + 0x50) != 0) {
            plVar12 = *(longlong **)(lVar13 + 0x48);
            lVar6 = (longlong)*(int *)(lVar13 + 0x50) * 0x18;
            do {
              if (*plVar12 != 0) {
                local_120 = 0;
                local_f8 = 0;
                uVar8 = FUN_140059518(local_1a0);
                FUN_1456bb102(&local_120,uVar8);
                plVar7 = (longlong *)FUN_144a792bc(plVar12);
                local_158 = 0;
                local_148 = &PTR_LAB_14b9b4a20;
                local_140 = local_1a8;
                local_168[0] = FUN_14428da5e;
                (**(code **)(*plVar7 + 0x10))(plVar7,&local_198,&local_120,local_168);
                uVar3 = uStack_170;
                lVar13 = (longlong)(int)uStack_170;
                uVar5 = (int)uStack_170 + 1;
                uStack_170 = CONCAT44(uStack_170._4_4_,uVar5);
                if (uStack_170._4_4_ < uVar5) {
                  FUN_1447a1bd6(&local_178,uVar3 & 0xffffffff);
                }
                lVar13 = lVar13 * 0x10;
                *(undefined8 *)(local_178 + lVar13) = 0;
                *(longlong **)(local_178 + lVar13) = local_198;
                *(undefined4 *)(local_178 + 8 + lVar13) = (undefined4)local_190;
                *(undefined4 *)(local_178 + 0xc + lVar13) = local_190._4_4_;
                local_190 = 0;
                local_198 = (longlong *)0x0;
                FUN_144a5ac3a(&local_120);
              }
              plVar12 = plVar12 + 3;
              lVar6 = lVar6 + -0x18;
            } while (lVar6 != 0);
          }
          if ((int)uStack_170 == 0) {
            puVar9 = (undefined8 *)FUN_140e82300();
            plVar7 = local_188;
            plVar12 = (longlong *)*puVar9;
            if (local_188 != plVar12) {
              local_188 = plVar12;
              if (plVar12 != (longlong *)0x0) {
                (**(code **)(*plVar12 + 8))();
              }
              if (plVar7 != (longlong *)0x0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
              }
            }
            local_180 = *(undefined4 *)(puVar9 + 1);
          }
          else {
            FUN_144a8b2a0(&local_120,&local_178,L"[newline]");
            FUN_140009b9a(&local_198,&local_120);
            FUN_140008f88(&local_188,&local_198);
            if (local_198 != (longlong *)0x0) {
              (**(code **)(*local_198 + 0x10))();
            }
            if (CONCAT71(uStack_11f,local_120) != 0) {
              FUN_1400020a8();
            }
          }
          FUN_1456bab4c(local_98,&local_188);
          if (local_188 != (longlong *)0x0) {
            (**(code **)(*local_188 + 0x10))();
          }
          FUN_1447a1747(local_178,uStack_170 & 0xffffffff);
          if (local_178 != 0) {
            FUN_1400020a8();
          }
        }
        FUN_14130d9cc(puVar2,&local_f0);
        FUN_1416076d0(&local_f0);
      }
      plVar14 = plVar14 + 0x2e;
    } while (plVar14 != plVar11);
  }
  if (*(longlong *)(local_1b0 + 0x38) == puVar2[6]) {
    if (*(int *)(puVar2 + 7) != 0) goto LAB_14619525c;
    iVar10 = 1;
  }
  else {
    iVar10 = *(int *)(puVar2 + 7) + 1;
  }
  puVar2[6] = *(longlong *)(local_1b0 + 0x38);
  *(int *)(puVar2 + 7) = iVar10;
LAB_14619525c:
  ReleaseSRWLockExclusive(local_1b8);
  if ((local_60 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14619551a FUN_14619551a body=524 status=ok
// SIG undefined FUN_14619551a(void)

void FUN_14619551a(longlong *param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  undefined2 *local_a8;
  undefined8 *local_a0;
  undefined4 local_98;
  undefined2 local_90 [2];
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar2 = (**(code **)(*param_1 + 0x810))();
  if (cVar2 != '\0') {
    *(undefined1 *)(param_1 + 0x16a) = 1;
    cVar2 = FUN_1406f1180(param_1);
    if (cVar2 == '\0') {
      if ((char)param_1[0x2f] == '\x03') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_c8);
      }
    }
    else {
      FUN_14619575c(param_1,param_1 + 0x16b);
      cVar2 = (**(code **)(*param_1 + 0x830))(param_1,(char)param_1[0x17b],0);
      if (cVar2 != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_c8);
      }
      lVar3 = FUN_1447210f0(param_1);
      if (*(longlong *)(lVar3 + 0x1f0) == 0) {
        puVar4 = (undefined8 *)(lVar3 + 0x458);
      }
      else {
        puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
      }
      uVar1 = *puVar4;
      local_a0 = (undefined8 *)0x0;
      local_98 = 0;
      FUN_1446efa72(&local_a0,0,3,0x10);
      puVar4 = local_a0;
      local_98 = 3;
      *local_a0 = &PTR_LAB_14a1c8830;
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
      local_a0[2] = lVar5;
      *local_a0 = &PTR_FUN_14b4ab980;
      local_a0[3] = 0;
      FUN_14485c47a(local_a0 + 3,param_1);
      *(undefined4 *)(puVar4 + 5) = 0;
      puVar4[4] = FUN_146577b7e;
      local_88 = 0;
      local_80 = 0;
      FUN_14487d8d8(&local_88,&local_a0);
      local_48 = 1;
      local_a8 = local_90;
      local_90[0] = 1;
      local_8c = 0xbf800000;
      FUN_1406f4044(uVar1,param_1 + 0x19b,&local_88,0x3f800000);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
      FUN_1449db362(&local_a0);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14619575c FUN_14619575c body=109 status=ok
// SIG undefined FUN_14619575c(void)

void FUN_14619575c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = *(int *)(param_1 + 0xbf0);
  if (0 < iVar3) {
    uVar5 = 0;
    do {
      uVar4 = uVar5 & 0xff;
      if ((((int)uVar4 < iVar3) &&
          (lVar1 = *(longlong *)
                    (*(longlong *)(param_1 + 0xbe8) + 0x10 +
                    (ulonglong)(uVar4 << 7) + (ulonglong)uVar4 * 8), lVar1 != 0)) && (*param_2 != 0)
         ) {
        cVar2 = FUN_14480f766(lVar1 + 0x40);
        if (cVar2 != '\0') {
          *param_2 = 0;
          return;
        }
        iVar3 = *(int *)(param_1 + 0xbf0);
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < iVar3);
  }
  return;
}



// FUNCTION 1461957ca FUN_1461957ca body=154 status=ok
// SIG undefined FUN_1461957ca(void)

void FUN_1461957ca(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  local_38 = *param_2;
  local_30 = (longlong *)param_2[1];
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
    UNLOCK();
  }
  local_28 = &local_38;
  FUN_146195866(param_1 + 0x38);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146195866 FUN_146195866 body=303 status=ok
// SIG undefined FUN_146195866(void)

void FUN_146195866(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  byte local_62;
  int local_60;
  
  iVar1 = (int)param_1[1];
  lVar9 = (longlong)iVar1;
  if (lVar9 != 0) {
    lVar2 = *param_1;
    local_62 = FUN_1477fdb30(param_2,lVar2);
    local_60 = 0;
    iVar6 = 0;
    do {
      lVar4 = (longlong)iVar6;
      iVar10 = iVar6 + 1;
      if (iVar6 + 1 < iVar1) {
        iVar10 = iVar1;
      }
      lVar5 = lVar4 * 0x10;
      lVar11 = lVar2 + 0x10 + lVar5;
      iVar7 = iVar6;
      do {
        lVar4 = lVar4 + 1;
        iVar8 = iVar10;
        if (lVar9 <= lVar4) break;
        bVar3 = FUN_1477fdb30(param_2,lVar11);
        iVar7 = iVar7 + 1;
        lVar11 = lVar11 + 0x10;
        iVar8 = iVar7;
      } while ((local_62 & 1) == bVar3);
      iVar10 = iVar8 - iVar6;
      if ((local_62 & 1) == 0) {
        if (local_60 != iVar6) {
          memmove((void *)((longlong)local_60 * 0x10 + lVar2),(void *)(lVar5 + lVar2),
                  (longlong)iVar10 << 4);
        }
        local_60 = local_60 + iVar10;
      }
      else {
        FUN_145c4257d(lVar5 + lVar2,iVar10);
      }
      iVar6 = iVar8;
      local_62 = local_62 ^ 1;
    } while (lVar4 < lVar9);
    *(int *)(param_1 + 1) = local_60;
  }
  return;
}



// FUNCTION 146195996 FUN_146195996 body=129 status=ok
// SIG undefined FUN_146195996(void)

undefined4 FUN_146195996(longlong *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [39];
  char local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = (**(code **)(*param_1 + 0x2b8))();
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    local_21 = '\0';
    uVar1 = FUN_14160771e(lVar2,&local_21,param_2,param_1);
    if (local_21 == '\x01') {
      FUN_14589d3aa(param_1,0);
      FUN_14282b7b8(param_1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146195a18 FUN_146195a18 body=54 status=ok
// SIG undefined FUN_146195a18(void)

void FUN_146195a18(void)

{
  FUN_146195a4e();
  if (DAT_14cb0f310 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb0f2f0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146195a4e FUN_146195a4e body=403 status=ok
// SIG undefined FUN_146195a4e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146195a4e(void)

{
  undefined8 *puVar1;
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
  local_38 = &DAT_14cb0f300;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if (DAT_14cb0f318 != 0) {
    FUN_1449c0562(&local_40);
  }
  local_68 = &DAT_14cb0f2f0;
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  if (iStack_2c < *(int *)(local_38 + 0x18)) {
    do {
      puVar1 = (undefined8 *)(*local_68 + (longlong)iStack_4c * 0x30);
      *puVar1 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(puVar1 + 3)])();
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < *(int *)(local_58 + 0x18));
  }
  DAT_14cb0f2f8 = 0;
  if (DAT_14cb0f2fc != 0) {
    FUN_14494313c(&DAT_14cb0f2f0,0);
  }
  _DAT_14cb0f320 = 0xffffffff;
  DAT_14cb0f318 = 0;
  if (0x80 < DAT_14cb0f31c) {
    DAT_14cb0f31c = 0x80;
    FUN_1446efbd8(&DAT_14cb0f300,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146195bf8 FUN_146195bf8 body=396 status=ok
// SIG undefined FUN_146195bf8(void)

void FUN_146195bf8(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = *(longlong *)(param_1 + 0x84c8);
  if ((local_50 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_48 = *(undefined8 *)(param_1 + 34000);
  local_40 = *(undefined4 *)(param_1 + 0x84d8);
  FUN_1409ca47e(&local_58);
  FUN_1409ca370(param_1 + 0x578,param_1,local_58);
  FUN_144a7b126(param_1 + 0x578,&local_31,1);
  FUN_141607782(param_1 + 0x83b0);
  cVar1 = FUN_144a7e912(&local_50);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_1412c3498(&local_50);
    plVar2 = (longlong *)*plVar2;
    if (plVar2 != (longlong *)0x0) {
      uVar3 = FUN_140437b04();
      plVar4 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar3);
      if (plVar4 != (longlong *)0x0) {
        uVar3 = FUN_140437b04();
        plVar5 = (longlong *)FUN_144718840(plVar4,uVar3);
        if ((plVar4 != plVar5) && (plVar5 != (longlong *)0x0)) {
          (**(code **)(*plVar5 + 0x50))(plVar5,param_1,&local_50);
        }
      }
      goto LAB_146195cfe;
    }
  }
  plVar2 = (longlong *)0x0;
LAB_146195cfe:
  uVar3 = FUN_1412c3498(&local_50);
  FUN_14136a5f7(param_1 + 0x86e8,plVar2,uVar3);
  if ((*(longlong *)(param_1 + 0x430) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x430) + 0x291) == '\x03')) {
    FUN_1409ca53e(&local_60);
    FUN_146195ddc(param_1 + 0x598,param_1,local_60);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146195d86 FUN_146195d86 body=85 status=ok
// SIG undefined FUN_146195d86(void)

void FUN_146195d86(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1412c3498(param_3);
  FUN_141123d8e(param_1 + 0xb20,param_2,uVar1);
  uVar1 = FUN_1412c3498(param_3);
  FUN_141123ce0(param_1 + 0xb30,param_2,uVar1);
  return;
}



// FUNCTION 146195ddc FUN_146195ddc body=125 status=ok
// SIG undefined FUN_146195ddc(void)

void FUN_146195ddc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_14485c47a(&local_48);
  uStack_40 = param_3;
  FUN_14113f0c0(&local_48);
  local_38 = (undefined4)local_48;
  uStack_34 = local_48._4_4_;
  uStack_30 = (undefined4)uStack_40;
  uStack_2c = uStack_40._4_4_;
  FUN_1403350f6(param_1);
  FUN_144a7b126(param_1,&local_21,1);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146195e5a FUN_146195e5a body=72 status=ok
// SIG undefined FUN_146195e5a(void)

void FUN_146195e5a(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140a1dfd8();
  uVar1 = FUN_1412ecd05(uVar1,0,L"/ControlRig/M_Manip.M_Manip",0,0,0,1,0);
  *(undefined8 *)(param_1 + 8) = uVar1;
  FUN_146195ea2();
  return;
}



// FUNCTION 146195ea2 FUN_146195ea2 body=385 status=ok
// SIG undefined FUN_146195ea2(void)

void FUN_146195ea2(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_148 [32];
  undefined1 *local_128 [2];
  undefined8 local_118;
  undefined **local_108;
  code *local_100;
  undefined1 *local_e8 [2];
  undefined8 local_d8;
  undefined **local_c8;
  code *local_c0;
  code *local_a8 [2];
  undefined8 local_98;
  undefined **local_88;
  code *local_68 [2];
  undefined8 local_58;
  undefined **local_48;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc07110) {
    FUN_144b3d300(&DAT_14cc07110);
    if (DAT_14cc07110 == -1) {
      FUN_1446f470e(&DAT_14cc07108,L"Constraints",1);
      _Init_thread_footer(&DAT_14cc07110);
    }
  }
  uVar1 = FUN_144a52528();
  FUN_1405f3750(uVar1,DAT_14cc07108,0);
  uVar1 = FUN_1459c92ae();
  local_58 = 0;
  local_48 = &PTR_LAB_14bb769f0;
  local_68[0] = FUN_144496c0a;
  local_98 = 0;
  local_88 = &PTR_LAB_14bb769d0;
  local_a8[0] = FUN_144496b00;
  uVar2 = FUN_1459f6026();
  FUN_1459c934a(uVar1,uVar2,local_a8,local_68);
  local_d8 = 0;
  local_c8 = &PTR_LAB_14a49f9f0;
  local_c0 = FUN_144496e22;
  local_e8[0] = &LAB_1475a0f84;
  local_118 = 0;
  local_108 = &PTR_LAB_14a49f9d0;
  local_100 = FUN_144496dd6;
  local_128[0] = &LAB_1475a0f72;
  uVar2 = FUN_1401242c6();
  FUN_1459c934a(uVar1,uVar2,local_128,local_e8);
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146196024 FUN_146196024 body=1276 status=ok
// SIG undefined FUN_146196024(void)

void FUN_146196024(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  double *pdVar12;
  longlong lVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  int local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  int local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_14485c47a(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = 0;
  plVar10 = *(longlong **)(param_1 + 0x70);
  if (plVar10 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x70) = 0;
    LOCK();
    plVar11 = plVar10 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  lVar7 = FUN_145795626(param_1);
  if ((lVar7 != 0) && ((*(byte *)(lVar7 + 0x155) & 0x20) == 0)) {
    local_d0 = param_2;
    if (param_3 == (longlong *)0x0) {
      param_3 = (longlong *)FUN_14479d2ce(param_1 + 0x48);
      if (param_3 == (longlong *)0x0) goto LAB_1461962ff;
      lVar13 = param_2[0x39];
      if (lVar13 == 0) {
        pdVar12 = (double *)&DAT_14c8464e0;
        uVar20 = (undefined4)DAT_14c8464f0;
        uVar21 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      }
      else {
        uVar20 = (undefined4)*(undefined8 *)(lVar13 + 0x270);
        uVar21 = (undefined4)((ulonglong)*(undefined8 *)(lVar13 + 0x270) >> 0x20);
        pdVar12 = (double *)(lVar13 + 0x260);
      }
      dVar4 = *pdVar12;
      dVar5 = pdVar12[1];
      plVar10 = (longlong *)FUN_14048bbc8(param_3 + 0xeb);
      plVar11 = (longlong *)FUN_14048bbc8(param_3 + 0xeb);
      if ((plVar11 == (longlong *)0x0) ||
         (lVar13 = (**(code **)(*plVar11 + 0xa00))(plVar11), lVar13 == 0)) {
        plVar11 = (longlong *)0x0;
      }
      if (plVar10 != (longlong *)0x0) {
        fVar22 = 3.4028235e+38;
        do {
          dVar19 = (double)plVar10[0x4e] - (double)CONCAT44(uVar21,uVar20);
          fVar23 = (float)(dVar19 * dVar19 +
                          ((double)plVar10[0x4c] - dVar4) * ((double)plVar10[0x4c] - dVar4) +
                          ((double)plVar10[0x4d] - dVar5) * ((double)plVar10[0x4d] - dVar5));
          if (fVar23 < fVar22) {
            param_3 = plVar10;
          }
          plVar10 = (longlong *)(**(code **)(*plVar10 + 0x9f8))(plVar10);
          if (plVar10 == plVar11) break;
          if (fVar22 <= fVar23) {
            fVar23 = fVar22;
          }
          fVar22 = fVar23;
        } while (plVar10 != (longlong *)0x0);
        if (param_3 == (longlong *)0x0) goto LAB_1461962ff;
      }
    }
    iVar16 = *(int *)(param_1 + 0xb0);
    local_d8 = lVar7;
    if (iVar16 == 0) {
      (**(code **)(param_3[0xd2] + 0x80))(param_3 + 0xd2,&local_c8);
      iVar17 = (int)local_c8;
      local_e4 = local_c8._4_4_;
      local_e8 = local_c0._0_4_;
      (**(code **)(param_3[0xd2] + 0x78))(param_3 + 0xd2,&local_c8);
      local_dc = local_c8._4_4_;
      local_e0 = local_c0._0_4_;
      puVar8 = &DAT_14c948618;
      puVar14 = (undefined4 *)((longlong)&DAT_14c948618 + 4);
      puVar15 = &DAT_14c948620;
      iVar16 = (int)local_c8;
    }
    else {
      puVar8 = (undefined8 *)(param_1 + 0x98);
      local_dc = *(undefined4 *)(param_1 + 0xb4);
      local_e0 = *(undefined4 *)(param_1 + 0xb8);
      iVar17 = *(int *)(param_1 + 0xa4);
      local_e4 = *(undefined4 *)(param_1 + 0xa8);
      local_e8 = *(undefined4 *)(param_1 + 0xac);
      puVar14 = (undefined4 *)(param_1 + 0x9c);
      puVar15 = (undefined4 *)(param_1 + 0xa0);
    }
    uVar20 = *(undefined4 *)puVar8;
    uVar21 = *puVar14;
    uVar3 = *puVar15;
    if ((iVar17 != 0) || (iVar16 != 0)) {
      uVar9 = FUN_140427846();
      plVar10 = (longlong *)(**(code **)(*local_d0 + 0x288))(local_d0,uVar9);
      if (plVar10 != (longlong *)0x0) {
        uVar9 = FUN_140427846();
        plVar11 = (longlong *)FUN_144718840(plVar10,uVar9);
        if (((plVar10 != plVar11) && (plVar11 != (longlong *)0x0)) &&
           (lVar7 = (**(code **)(*plVar11 + 0x10))(plVar11), lVar7 != 0)) {
          local_9c = uVar20;
          local_98 = uVar21;
          local_94 = uVar3;
          FUN_146196522(lVar7,&local_9c,local_d8);
          local_a4 = local_e4;
          local_a0 = local_e8;
          local_a8 = iVar17;
          FUN_141607fca(lVar7);
          local_b0 = local_dc;
          local_ac = local_e0;
          local_b4 = iVar16;
          FUN_141607fd8(lVar7);
        }
      }
    }
    plVar10 = local_d0;
    (**(code **)(*param_3 + 0xa30))(param_3,local_d0);
    FUN_140937dea(&local_c8);
    if (local_c0 != (longlong *)0x0) {
      iVar16 = (int)local_c0[1];
      do {
        if (iVar16 == 0) {
          plVar11 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar17 = (int)local_c0[1];
        bVar18 = iVar16 == iVar17;
        if (bVar18) {
          *(int *)(local_c0 + 1) = iVar16 + 1;
          iVar17 = iVar16;
        }
        iVar16 = iVar17;
        UNLOCK();
        plVar11 = local_c0;
      } while (!bVar18);
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_c0 + 0x10))();
      }
      if (plVar11 != (longlong *)0x0) {
        if (local_c8 != (longlong *)0x0) {
          uVar6 = FUN_146196610(param_3,plVar10);
          (**(code **)(*local_c8 + 0x40))(local_c8,plVar10,param_3,uVar6 ^ 1);
        }
        LOCK();
        plVar2 = plVar11 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
    }
    local_c0 = *(longlong **)(param_1 + 0x10);
    if (local_c0 == (longlong *)0x0) {
      local_c0 = (longlong *)0x0;
      local_c8 = (longlong *)0x0;
    }
    else {
      iVar16 = (int)local_c0[1];
      local_c8 = (longlong *)0x0;
      do {
        if (iVar16 == 0) {
          local_c0 = (longlong *)0x0;
          goto LAB_1461962ca;
        }
        LOCK();
        iVar17 = (int)local_c0[1];
        bVar18 = iVar16 == iVar17;
        if (bVar18) {
          *(int *)(local_c0 + 1) = iVar16 + 1;
          iVar17 = iVar16;
        }
        iVar16 = iVar17;
        UNLOCK();
      } while (!bVar18);
      local_c8 = *(longlong **)(param_1 + 8);
    }
LAB_1461962ca:
    FUN_146196562(param_1 + 0x30,&local_c8,plVar10);
    plVar10 = local_c0;
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_c0 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    FUN_1448a8284(param_1 + 0x30);
  }
LAB_1461962ff:
  if ((local_90 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146196522 FUN_146196522 body=64 status=ok
// SIG undefined FUN_146196522(void)

void FUN_146196522(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (param_3 == 0) {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xf);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x180))(plVar2);
    }
  }
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = uVar1;
  return;
}



// FUNCTION 146196562 FUN_146196562 body=173 status=ok
// SIG undefined FUN_146196562(void)

void FUN_146196562(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
        goto LAB_1461965f9;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1461965f9:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 146196610 FUN_146196610 body=175 status=ok
// SIG undefined FUN_146196610(void)

bool FUN_146196610(longlong param_1,longlong *param_2)

{
  double dVar1;
  bool bVar2;
  double *pdVar3;
  double dVar4;
  undefined1 auStack_48 [32];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == (longlong *)0x0) {
    bVar2 = false;
  }
  else {
    pdVar3 = (double *)&DAT_14c8464e0;
    if (param_2[0x39] != 0) {
      pdVar3 = (double *)(param_2[0x39] + 0x260);
    }
    dVar1 = *pdVar3;
    dVar4 = pdVar3[1];
    (**(code **)(*param_2 + 0x528))(param_2,local_24,local_28);
    dVar1 = *(double *)(param_1 + 0x260) - dVar1;
    dVar4 = *(double *)(param_1 + 0x268) - dVar4;
    bVar2 = (float)(dVar1 * dVar1 + dVar4 * dVar4) <
            *(float *)(param_1 + 0x658) * *(float *)(param_1 + 0x658);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461966c0 FUN_1461966c0 body=148 status=ok
// SIG undefined FUN_1461966c0(void)

undefined8 * FUN_1461966c0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_LAB_14b52a910;
  FUN_1409e1656(param_1 + 1);
  *param_1 = &PTR_FUN_14b52a830;
  param_1[1] = &PTR_FUN_14b52a8a0;
  param_1[2] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = &PTR_FUN_14b52aa30;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_14485c47a(param_1 + 2,param_2);
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0x417000003f4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  FUN_146196754(param_1);
  return param_1;
}



// FUNCTION 146196754 FUN_146196754 body=309 status=ok
// SIG undefined FUN_146196754(void)

void FUN_146196754(longlong param_1)

{
  float fVar1;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  char local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = &DAT_14c872ce8;
  FUN_14153841e(DAT_14c872ce0,L"LagCompensation",L"FrameHistoryTime",param_1 + 0x1c);
  local_38 = &DAT_14c872ce8;
  FUN_14153841e(DAT_14c872ce0,L"LagCompensation",L"SampleRate",param_1 + 0x20);
  local_38 = &DAT_14c872ce8;
  FUN_14153841e(DAT_14c872ce0,L"LagCompensation",L"RewindTimeBias",param_1 + 0x24);
  fVar1 = *(float *)(param_1 + 0x20);
  *(float *)(param_1 + 0x28) = 1.0 / fVar1;
  if (*(int *)(param_1 + 0x7c) < 0x100) {
    FUN_14619689a(param_1 + 0x70,0x100);
    fVar1 = *(float *)(param_1 + 0x20);
  }
  fVar1 = fVar1 * *(float *)(param_1 + 0x1c);
  FUN_1461968f8(param_1,-((int)ROUND(-0.5 - (fVar1 + fVar1)) >> 1));
  local_21 = '\0';
  local_38 = &DAT_14c872ce8;
  FUN_14052bb08(DAT_14c872ce0,L"LagCompensation",L"Enabled",&local_21);
  if (local_21 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14619689a FUN_14619689a body=93 status=ok
// SIG undefined FUN_14619689a(void)

void FUN_14619689a(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1461968f8 FUN_1461968f8 body=152 status=ok
// SIG undefined FUN_1461968f8(void)

void FUN_1461968f8(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  plVar1 = (longlong *)(param_1 + 0x70);
  if (*(int *)(param_1 + 0x7c) < param_2) {
    FUN_14619689a(plVar1,param_2);
  }
  for (; param_2 != 0; param_2 = param_2 + -1) {
    puVar3 = (undefined8 *)FUN_14001cc68(0x28,0x10);
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined4 *)puVar3 = 0xbf800000;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    iVar2 = *(int *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x78) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x7c) < iVar2 + 1U) {
      FUN_148af28fa(plVar1,iVar2);
    }
    *(undefined8 **)(*plVar1 + (longlong)iVar2 * 8) = puVar3;
  }
  return;
}



// FUNCTION 146196a40 FUN_146196a40 body=207 status=ok
// SIG undefined FUN_146196a40(void)

undefined8
FUN_146196a40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar3 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_14b52aab0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14b52aa40;
  puVar3[3] = param_3;
  puVar3[4] = uVar2;
  *(undefined4 *)(puVar3 + 5) = uVar1;
  FUN_146196b10(param_1,param_2,&local_50);
  FUN_1449db362(&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146196b10 FUN_146196b10 body=216 status=ok
// SIG undefined FUN_146196b10(void)

undefined8 * FUN_146196b10(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 146196cbe FUN_146196cbe body=191 status=ok
// SIG undefined FUN_146196cbe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_146196cbe(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  LOCK();
  _DAT_14cae3c28 = _DAT_14cae3c28 + 1;
  UNLOCK();
  param_1[1] = DAT_14cae3c20;
  param_1[2] = &DAT_14cae3bf0;
  LOCK();
  _DAT_14cae3c28 = _DAT_14cae3c28 + 1;
  UNLOCK();
  param_1[3] = param_1;
  lVar2 = param_1[1];
  while (lVar2 != 0) {
    plVar1 = (longlong *)param_1[3];
    lVar2 = FUN_140d8d9ac(*(undefined8 *)(lVar2 + 0x10));
    if (lVar2 == *plVar1) break;
    lVar2 = *(longlong *)param_1[1];
    param_1[1] = lVar2;
  }
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  param_1[4] = 0;
  param_1[5] = &DAT_14cae3bf0;
  LOCK();
  _DAT_14cae3c28 = _DAT_14cae3c28 + 1;
  UNLOCK();
  param_1[6] = param_1;
  lVar2 = param_1[4];
  while (lVar2 != 0) {
    plVar1 = (longlong *)param_1[6];
    lVar2 = FUN_140d8d9ac(*(undefined8 *)(lVar2 + 0x10));
    if (lVar2 == *plVar1) break;
    lVar2 = *(longlong *)param_1[4];
    param_1[4] = lVar2;
  }
  LOCK();
  _DAT_14cae3c28 = _DAT_14cae3c28 + -1;
  UNLOCK();
  return param_1;
}



// FUNCTION 146196d7e FUN_146196d7e body=71 status=ok
// SIG undefined FUN_146196d7e(void)

void FUN_146196d7e(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_144729dda(param_1 + 0x7a0);
  if (cVar2 != '\0') {
    uVar1 = FUN_14479d2ce(param_1 + 0x7a0);
    FUN_141607fe6(uVar1,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 146196dc6 FUN_146196dc6 body=54 status=ok
// SIG undefined FUN_146196dc6(void)

void FUN_146196dc6(void)

{
  FUN_146196dfc();
  if (DAT_14ca78c30 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14ca78c10 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146196dfc FUN_146196dfc body=404 status=ok
// SIG undefined FUN_146196dfc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146196dfc(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14ca78c20;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14ca78c38 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14ca78c10;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      lVar3 = *(longlong *)(*local_58 + 0x98 + (longlong)iStack_3c * 0xa8);
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
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  DAT_14ca78c18 = 0;
  if (DAT_14ca78c1c != 0) {
    FUN_14099029e(&DAT_14ca78c10,0);
  }
  _DAT_14ca78c40 = 0xffffffff;
  DAT_14ca78c38 = 0;
  if (0x80 < DAT_14ca78c3c) {
    DAT_14ca78c3c = 0x80;
    FUN_1446efbd8(&DAT_14ca78c20,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146196f92 FUN_146196f92 body=54 status=ok
// SIG undefined FUN_146196f92(void)

void FUN_146196f92(void)

{
  FUN_146196fc8();
  if (DAT_14ca7f310 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14ca7f2f0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146196fc8 FUN_146196fc8 body=404 status=ok
// SIG undefined FUN_146196fc8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146196fc8(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14ca7f300;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14ca7f318 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14ca7f2f0;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      lVar3 = *(longlong *)(*local_58 + 0x210 + (longlong)iStack_3c * 0x220);
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
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  DAT_14ca7f2f8 = 0;
  if (DAT_14ca7f2fc != 0) {
    FUN_14178cb18(&DAT_14ca7f2f0,0);
  }
  _DAT_14ca7f320 = 0xffffffff;
  DAT_14ca7f318 = 0;
  if (0x80 < DAT_14ca7f31c) {
    DAT_14ca7f31c = 0x80;
    FUN_1446efbd8(&DAT_14ca7f300,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146197168 FUN_146197168 body=447 status=ok
// SIG undefined FUN_146197168(void)

undefined8 * FUN_146197168(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1446f470e(&local_70,L"Sprite",1);
  FUN_140486538(param_2,local_70);
  FUN_14048646a(param_2 + 0x20,local_70,0,0);
  FUN_1446f470e(&local_78,L"ArrowComponent0",1);
  FUN_140486538(param_2,local_78);
  FUN_14048646a(param_2 + 0x20,local_78,0,0);
  FUN_145d11370(param_1,param_2);
  *param_1 = &PTR_FUN_14a5ea000;
  param_1[0x7c] = &PTR_LAB_14a5ea650;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x41200000;
  *(undefined4 *)(param_1 + 0x8c) = 0x42a00000;
  *(byte *)(param_1 + 0x73) = *(byte *)(param_1 + 0x73) | 1;
  local_90 = 0;
  local_88 = 0x4066800000000000;
  local_80 = 0;
  FUN_144a7484c(&local_90,&local_68);
  param_1[0x80] = local_68;
  param_1[0x81] = uStack_60;
  *(undefined4 *)(param_1 + 0x82) = local_58;
  *(undefined4 *)((longlong)param_1 + 0x414) = uStack_54;
  *(undefined4 *)(param_1 + 0x83) = uStack_50;
  *(undefined4 *)((longlong)param_1 + 0x41c) = uStack_4c;
  param_1[0x84] = 0x4056800000000000;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0x3ff0000000000000;
  param_1[0x89] = 0x3ff0000000000000;
  param_1[0x8a] = 0x3ff0000000000000;
  param_1[0x8b] = 0;
  *(byte *)(param_1[0x72] + 0x2d5) = *(byte *)(param_1[0x72] + 0x2d5) | 4;
  *(undefined4 *)(param_1[0x72] + 0x734) = 0;
  *(undefined4 *)(param_1 + 0x8f) = 0x7f7fffff;
  *(byte *)((longlong)param_1 + 0x464) = *(byte *)((longlong)param_1 + 0x464) & 0xfd;
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146197328 FUN_146197328 body=473 status=ok
// SIG undefined FUN_146197328(void)

void FUN_146197328(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong lStack_38;
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_29 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_48 = 0xffffffffffffffff;
  uStack_40 = 0;
  lStack_38 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = (undefined4)local_48;
  uStack_64 = local_48._4_4_;
  uStack_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  local_58 = lStack_38;
  if ((lStack_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar2 = &local_29;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  FUN_146197502(local_20,local_28,puVar2,&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146197502 FUN_146197502 body=242 status=ok
// SIG undefined FUN_146197502(void)

void FUN_146197502(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_1 != 0) && (lVar1 = FUN_1447210f0(), lVar1 != 0)) {
    uVar2 = FUN_14001cc68(0x48,0x10);
    local_58 = *param_4;
    uStack_54 = param_4[1];
    uStack_50 = param_4[2];
    uStack_4c = param_4[3];
    local_48 = *(longlong *)(param_4 + 4);
    if ((local_48 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_68 = &local_58;
    FUN_146197614(uVar2,param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146197614 FUN_146197614 body=171 status=ok
// SIG undefined FUN_146197614(void)

undefined8 *
FUN_146197614(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_14b4324e0;
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[2] = param_4;
  *(undefined4 *)(param_1 + 3) = *param_5;
  *(undefined8 *)((longlong)param_1 + 0x1c) = *(undefined8 *)(param_5 + 2);
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  FUN_14485c47a((longlong)param_1 + 0x24,*(undefined8 *)(param_5 + 4));
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  FUN_14485c47a((longlong)param_1 + 0x2c,param_3);
  uVar1 = FUN_1407ca880();
  lVar2 = (**(code **)(*param_2 + 0x288))(param_2,uVar1);
  if (lVar2 != 0) {
    uVar1 = FUN_1407ca880();
    lVar3 = FUN_144718840(lVar2,uVar1);
    if (lVar2 != lVar3) goto LAB_1461976a2;
  }
  lVar3 = 0;
LAB_1461976a2:
  FUN_1407be368(param_1 + 7,lVar3);
  return param_1;
}



// FUNCTION 1461976c8 FUN_1461976c8 body=68 status=ok
// SIG undefined FUN_1461976c8(void)

void FUN_1461976c8(undefined8 param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x4e8);
  memset(_Dst,0,0x4e8);
  FUN_14619770c(_Dst);
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 14619770c FUN_14619770c body=497 status=ok
// SIG undefined FUN_14619770c(void)

undefined8 * FUN_14619770c(undefined8 *param_1)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b896de0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  FUN_1461978fe(param_1 + 0x23);
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x364) = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  FUN_144a5dc74(param_1 + 0x73);
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3cc) = 0;
  FUN_144a5dc74(param_1 + 0x7b);
  *(undefined4 *)(param_1 + 0x7d) = 0;
  *(undefined2 *)(param_1 + 0x7e) = 0;
  FUN_144a5dc74(param_1 + 0x7f);
  *(undefined2 *)(param_1 + 0x81) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x40c) = 1;
  *(undefined4 *)(param_1 + 0x82) = 0;
  FUN_140056680(&local_40,&DAT_149dfb77a);
  param_1[0x83] = local_40;
  *(undefined4 *)(param_1 + 0x84) = local_38;
  *(undefined4 *)((longlong)param_1 + 0x424) = local_34;
  *(undefined4 *)(param_1 + 0x85) = 0;
  *(undefined4 *)(param_1 + 0x86) = 0x10100;
  *(undefined1 *)((longlong)param_1 + 0x434) = 0;
  FUN_144a5dc74(param_1 + 0x87);
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  *(undefined4 *)(param_1 + 0x8b) = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  *(undefined4 *)(param_1 + 0x8e) = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  *(undefined8 *)((longlong)param_1 + 0x485) = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  FUN_144a5dc74(param_1 + 0x94);
  *(undefined4 *)(param_1 + 0x96) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x4cc) = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  *(undefined1 *)(param_1 + 0x99) = 0;
  FUN_144a5dc74(param_1 + 0x9b);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461978fe FUN_1461978fe body=353 status=ok
// SIG undefined FUN_1461978fe(void)

undefined8 * FUN_1461978fe(undefined8 *param_1)

{
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b896c50;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 1;
  FUN_1400b22c2(param_1 + 0x1c,&DAT_149e02088);
  *(undefined2 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  FUN_1400b22c2(param_1 + 0x21,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x23,&DAT_149e02088);
  FUN_144a5dc74(param_1 + 0x25);
  *(undefined1 *)(param_1 + 0x27) = 0;
  FUN_1400b22c2(param_1 + 0x28,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x2a,&DAT_149e02088);
  *(undefined2 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x162) = 0;
  FUN_144a5dc74(param_1 + 0x2d);
  *(undefined4 *)(param_1 + 0x2f) = 8;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) & 0xf8 | 5;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined1 *)(param_1 + 0x35) = 1;
  *(undefined2 *)(param_1 + 0x36) = 0;
  FUN_1400b22c2(param_1 + 0x37,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x39,&DAT_149e02088);
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  return param_1;
}



// FUNCTION 146197a60 FUN_146197a60 body=427 status=ok
// SIG undefined FUN_146197a60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146197a60(void)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  _DAT_14ca63ca0 = 0xffffffff;
  _DAT_14ca63ca4 = 0x105;
  DAT_14ca63ca6 = 0;
  DAT_14ca63c98 = &PTR_FUN_14a3181c0;
  _DAT_14ca63ca8 = 0;
  DAT_14ca63cb0 = 0;
  _DAT_14ca63cb8 = 0;
  uRam000000014ca63cc0 = 0;
  _DAT_14ca63cc8 = 0;
  DAT_14ca63cd0 = 0;
  _DAT_14ca63cd8 = 0;
  InitializeSRWLock((PSRWLOCK)&DAT_14ca63ce0);
  _DAT_14ca63ce8 = 0;
  _DAT_14ca63cec = 0xffffffff;
  DAT_14ca63cf0 = 0;
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = &PTR_FUN_14a31a830;
  puVar4[1] = 0;
  *(undefined4 *)(puVar4 + 2) = 0x3f800000;
  puVar4[3] = 0;
  puVar4[4] = 0;
  lVar7 = (longlong)(int)DAT_14ca63cd8;
  uVar2 = DAT_14ca63cd8 + 1;
  if (DAT_14ca63cdc < uVar2) {
    uVar5 = _DAT_14ca63cd8 & 0xffffffff;
    DAT_14ca63cd8 = uVar2;
    FUN_146197c0c(uVar5);
    uVar2 = DAT_14ca63cd8;
  }
  DAT_14ca63cd8 = uVar2;
  *(undefined8 **)(DAT_14ca63cd0 + lVar7 * 8) = puVar4;
  puVar4 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar4 = &PTR_FUN_14a31a870;
  uVar2 = DAT_14ca63cd8;
  lVar7 = (longlong)(int)DAT_14ca63cd8;
  uVar3 = DAT_14ca63cd8 + 1;
  _DAT_14ca63cd8 = CONCAT44(DAT_14ca63cdc,uVar3);
  if (DAT_14ca63cdc < uVar3) {
    FUN_146197c0c(uVar2);
  }
  *(undefined8 **)(DAT_14ca63cd0 + lVar7 * 8) = puVar4;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14ca63ce0);
  lVar7 = DAT_14ca63cd0;
  lVar6 = (longlong)(int)DAT_14ca63cd8;
  if (lVar6 != 0) {
    lVar9 = 0;
    do {
      uVar5 = _DAT_14ca63cb8;
      uVar1 = *(undefined8 *)(lVar7 + lVar9);
      lVar8 = (longlong)DAT_14ca63cb8;
      uVar2 = DAT_14ca63cb8 + 1;
      _DAT_14ca63cb8 = CONCAT44(DAT_14ca63cbc,uVar2);
      if (DAT_14ca63cbc < uVar2) {
        FUN_141608a58(&DAT_14ca63cb0,uVar5 & 0xffffffff);
      }
      *(undefined8 *)(DAT_14ca63cb0 + lVar8 * 8) = uVar1;
      lVar9 = lVar9 + 8;
    } while (lVar6 * 8 != lVar9);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14ca63ce0);
  return;
}



// FUNCTION 146197c0c FUN_146197c0c body=140 status=ok
// SIG undefined FUN_146197c0c(void)

void FUN_146197c0c(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14ca63cd8;
  if (param_1 <= (int)DAT_14ca63cd8) {
    if (DAT_14ca63cdc == 0) {
      uVar2 = 4;
      if (4 < DAT_14ca63cd8) {
        uVar2 = DAT_14ca63cd8;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)DAT_14ca63cd8 + ((ulonglong)((longlong)(int)DAT_14ca63cd8 * 3) >> 3) +
              0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    DAT_14ca63cdc = (int)uVar5;
    FUN_1446f8d3c(&DAT_14ca63cd0,param_1,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146197c98 FUN_146197c98 body=9 status=ok
// SIG undefined FUN_146197c98(void)

void FUN_146197c98(longlong param_1)

{
  FUN_146197ca2(param_1 + 0x10);
  return;
}



// FUNCTION 146197ca2 FUN_146197ca2 body=135 status=ok
// SIG undefined FUN_146197ca2(void)

void FUN_146197ca2(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a4e0ed0;
  FUN_146197d29(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_146197d44(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_146197d7a(param_1 + 3);
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146197d25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 146197d29 FUN_146197d29 body=27 status=ok
// SIG undefined FUN_146197d29(void)

void FUN_146197d29(longlong param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 != 0) {
    pcVar1 = (char *)(param_1 + 0x20);
    do {
      if (*pcVar1 == '\x01') {
        *pcVar1 = '\0';
      }
      pcVar1 = pcVar1 + 0x24;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146197d44 FUN_146197d44 body=53 status=ok
// SIG undefined FUN_146197d44(void)

void FUN_146197d44(longlong *param_1)

{
  FUN_146197e08();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146197d7a FUN_146197d7a body=53 status=ok
// SIG undefined FUN_146197d7a(void)

void FUN_146197d7a(longlong *param_1)

{
  FUN_146197db0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146197db0 FUN_146197db0 body=88 status=ok
// SIG undefined FUN_146197db0(void)

void FUN_146197db0(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14472eb64(param_1,0);
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



// FUNCTION 146197e08 FUN_146197e08 body=324 status=ok
// SIG undefined FUN_146197e08(void)

void FUN_146197e08(longlong *param_1)

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
      if (*(char *)(*local_68 + 0x20 + (longlong)iStack_4c * 0x28) == '\x01') {
        *(undefined1 *)(*local_68 + (longlong)iStack_4c * 0x28 + 0x20) = 0;
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140957390(param_1,0);
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



// FUNCTION 146197f58 FUN_146197f58 body=448 status=ok
// SIG undefined FUN_146197f58(void)

undefined8 * FUN_146197f58(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1413f708e();
  *param_1 = &PTR_FUN_14abf58d0;
  param_1[5] = &PTR_LAB_14abf5bf0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0xbf800000;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  uVar3 = FUN_1459eb64a();
  FUN_1446f470e(&local_30,L"ReceiveTickAI",1);
  FUN_1446f470e(&local_38,L"ReceiveTick",1);
  iVar2 = FUN_145acc604(local_38,local_30,param_1,uVar3);
  *(uint *)(param_1 + 0x14) = (*(uint *)(param_1 + 0x14) & 0xfffffff9) + iVar2 * 2;
  FUN_1446f470e(&local_40,L"ReceiveExecuteAI",1);
  FUN_1446f470e(&local_48,L"ReceiveExecute",1);
  iVar2 = FUN_145acc604(local_48,local_40,param_1,uVar3);
  *(uint *)(param_1 + 0x14) = (*(uint *)(param_1 + 0x14) & 0xffffffe7) + iVar2 * 8;
  FUN_1446f470e(&local_50,L"ReceiveAbortAI",1);
  FUN_1446f470e(&local_58,L"ReceiveAbort",1);
  iVar2 = FUN_145acc604(local_58,local_50,param_1,uVar3);
  uVar1 = (*(uint *)(param_1 + 0xd) | 6) & 0xfffffffd;
  if ((*(uint *)(param_1 + 0x14) & 6) != 0) {
    uVar1 = *(uint *)(param_1 + 0xd) | 6;
  }
  *(uint *)(param_1 + 0xd) = uVar1;
  *(uint *)(param_1 + 0x14) = iVar2 * 0x20 + (*(uint *)(param_1 + 0x14) & 0xffffff1e) + 1;
  *(byte *)((longlong)param_1 + 0x55) = *(byte *)((longlong)param_1 + 0x55) | 4;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    FUN_14156e8b3(param_1,uVar3,param_1 + 0x12);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14619811a FUN_14619811a body=51 status=ok
// SIG undefined FUN_14619811a(void)

void FUN_14619811a(longlong param_1,undefined8 param_2)

{
  FUN_141608bba();
  if (*(longlong *)(param_1 + 0x778) != 0) {
    FUN_14619814e(*(longlong *)(param_1 + 0x778),param_2);
    return;
  }
  return;
}



// FUNCTION 14619814e FUN_14619814e body=146 status=ok
// SIG undefined FUN_14619814e(void)

void FUN_14619814e(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined8 *)*param_2;
  puVar2 = (undefined8 *)((undefined8 *)*param_2)[1];
  local_20 = puVar2;
  if (puVar2 == (undefined8 *)0x0) {
    FUN_141608bbc(param_1,&local_28);
  }
  else {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
    FUN_141608bbc();
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2);
        LOCK();
        piVar1 = (int *)((longlong)puVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
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



// FUNCTION 1461981f2 FUN_1461981f2 body=3729 status=ok
// SIG undefined FUN_1461981f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461981f2(void)

{
  undefined8 uVar1;
  undefined1 auStack_428 [32];
  undefined8 *local_408;
  undefined8 local_400;
  undefined4 local_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  longlong local_3e0;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  longlong local_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  longlong local_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  longlong local_398;
  undefined8 local_390;
  undefined8 local_388;
  longlong local_380;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  longlong local_368;
  undefined4 local_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  longlong local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  longlong local_338;
  undefined8 local_330;
  undefined8 uStack_328;
  longlong local_320;
  undefined8 local_318;
  undefined8 local_310;
  longlong local_308;
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  longlong local_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  longlong local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  longlong local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  longlong local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  longlong local_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  longlong local_278;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  longlong local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  longlong local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  longlong local_230;
  undefined8 local_228;
  undefined8 local_220;
  longlong local_218;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  longlong local_200;
  longlong local_1f8 [2];
  longlong *local_1e8 [2];
  longlong *local_1d8 [2];
  undefined1 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  longlong local_1b0 [2];
  longlong *local_1a0 [2];
  longlong *local_190 [2];
  undefined1 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  longlong local_168 [22];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_428;
  if (DAT_14cb7ff68 == '\0') {
    DAT_14cb7ff68 = '\x01';
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb7ff78) {
      FUN_144b3d300(&DAT_14cb7ff78);
      if (DAT_14cb7ff78 == -1) {
        FUN_1446ddc76(&DAT_14cb7ff70,"GbxChorded",1);
        _Init_thread_footer(&DAT_14cb7ff78);
      }
    }
    FUN_1446f470e(&local_48,L"GraphEditor.PadEvent_16x",1);
    FUN_140056680(local_168,L"(Gearbox) Chorded");
    FUN_140233b1a(local_58,local_168);
    FUN_1413a4fa6(DAT_14cb7ff70,local_58,local_48);
    if (local_168[0] != 0) {
      FUN_1400020a8();
    }
    local_70 = DAT_14c966e80;
    local_68 = DAT_14c966e88;
    local_60 = DAT_14c966e90;
    if (DAT_14c966e90 == 0) {
      local_88 = DAT_14c966e80;
      uStack_80 = DAT_14c966e88;
      local_78 = 0;
    }
    else {
      LOCK();
      *(int *)(DAT_14c966e90 + 8) = *(int *)(DAT_14c966e90 + 8) + 1;
      UNLOCK();
      local_78 = DAT_14c966e90;
      local_88 = DAT_14c966e80;
      uStack_80 = DAT_14c966e88;
      if (DAT_14c966e90 != 0) {
        LOCK();
        *(int *)(DAT_14c966e90 + 8) = *(int *)(DAT_14c966e90 + 8) + 1;
        UNLOCK();
      }
    }
    local_a0 = DAT_14c9658a8;
    uStack_98 = DAT_14c9658b0;
    local_90 = DAT_14c9658b8;
    if (DAT_14c9658b8 != 0) {
      LOCK();
      *(int *)(DAT_14c9658b8 + 8) = *(int *)(DAT_14c9658b8 + 8) + 1;
      UNLOCK();
    }
    local_b8 = (undefined4)DAT_14c9658d8;
    uStack_b4 = DAT_14c9658d8._4_4_;
    uStack_b0 = (undefined4)DAT_14c9658e0;
    uStack_ac = DAT_14c9658e0._4_4_;
    local_a8 = DAT_14c9658e8;
    if (DAT_14c9658e8 != 0) {
      LOCK();
      *(int *)(DAT_14c9658e8 + 8) = *(int *)(DAT_14c9658e8 + 8) + 1;
      UNLOCK();
    }
    uVar1 = DAT_14cb7ff70;
    FUN_140056680(local_1b0,L"Gamepad_Chord_FaceLeft_FaceBottom");
    FUN_140233b1a(local_1a0,local_1b0);
    FUN_14023423e(local_190,local_1a0);
    local_180 = 1;
    local_178 = 0;
    uStack_170 = 0;
    FUN_140056680(local_1f8,L"Gamepad_Chord_FaceLeft_FaceBottom");
    FUN_140233b1a(local_1e8,local_1f8);
    FUN_14023423e(local_1d8,local_1e8);
    local_1c8 = 1;
    local_1c0 = 0;
    uStack_1b8 = 0;
    local_210 = _DAT_14cb7ff20;
    uStack_20c = uRam000000014cb7ff24;
    uStack_208 = _DAT_14cb7ff28;
    uStack_204 = uRam000000014cb7ff2c;
    local_200 = DAT_14cb7ff30;
    if (DAT_14cb7ff30 != 0) {
      LOCK();
      *(int *)(DAT_14cb7ff30 + 8) = *(int *)(DAT_14cb7ff30 + 8) + 1;
      UNLOCK();
    }
    local_400 = uVar1;
    local_408 = (undefined8 *)CONCAT44(local_408._4_4_,1);
    FUN_1413a4e76(local_168,&local_210,local_1d8,local_190);
    local_408 = &local_70;
    FUN_146199084(local_168,&local_b8,&local_a0,&local_88);
    FUN_140cac0f2(local_168);
    FUN_1449db362(&local_1c0);
    if (local_1d8[0] != (longlong *)0x0) {
      (**(code **)(*local_1d8[0] + 0x10))();
    }
    if (local_1e8[0] != (longlong *)0x0) {
      (**(code **)(*local_1e8[0] + 0x10))();
    }
    if (local_1f8[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1449db362(&local_178);
    if (local_190[0] != (longlong *)0x0) {
      (**(code **)(*local_190[0] + 0x10))();
    }
    if (local_1a0[0] != (longlong *)0x0) {
      (**(code **)(*local_1a0[0] + 0x10))();
    }
    if (local_1b0[0] != 0) {
      FUN_1400020a8();
    }
    local_228 = DAT_14c966e80;
    local_220 = DAT_14c966e88;
    local_218 = DAT_14c966e90;
    if (DAT_14c966e90 == 0) {
      local_240 = DAT_14c966e80;
      uStack_238 = DAT_14c966e88;
      local_230 = 0;
    }
    else {
      LOCK();
      *(int *)(DAT_14c966e90 + 8) = *(int *)(DAT_14c966e90 + 8) + 1;
      UNLOCK();
      local_230 = DAT_14c966e90;
      local_240 = DAT_14c966e80;
      uStack_238 = DAT_14c966e88;
      if (DAT_14c966e90 != 0) {
        LOCK();
        *(int *)(DAT_14c966e90 + 8) = *(int *)(DAT_14c966e90 + 8) + 1;
        UNLOCK();
      }
    }
    local_258 = DAT_14c9658a8;
    uStack_250 = DAT_14c9658b0;
    local_248 = DAT_14c9658b8;
    if (DAT_14c9658b8 != 0) {
      LOCK();
      *(int *)(DAT_14c9658b8 + 8) = *(int *)(DAT_14c9658b8 + 8) + 1;
      UNLOCK();
    }
    local_270 = (undefined4)DAT_14c9658c0;
    uStack_26c = DAT_14c9658c0._4_4_;
    uStack_268 = _DAT_14c9658c8;
    uStack_264 = uRam000000014c9658cc;
    local_260 = DAT_14c9658d0;
    if (DAT_14c9658d0 != 0) {
      LOCK();
      *(int *)(DAT_14c9658d0 + 8) = *(int *)(DAT_14c9658d0 + 8) + 1;
      UNLOCK();
    }
    uVar1 = DAT_14cb7ff70;
    FUN_140056680(local_1b0,L"Gamepad_Chord_FaceRight_FaceBottom");
    FUN_140233b1a(local_1a0,local_1b0);
    FUN_14023423e(local_190,local_1a0);
    local_180 = 1;
    local_178 = 0;
    uStack_170 = 0;
    FUN_140056680(local_1f8,L"Gamepad_Chord_FaceRight_FaceBottom");
    FUN_140233b1a(local_1e8,local_1f8);
    FUN_14023423e(local_1d8,local_1e8);
    local_1c8 = 1;
    local_1c0 = 0;
    uStack_1b8 = 0;
    local_288 = _DAT_14cb7ff08;
    uStack_284 = uRam000000014cb7ff0c;
    uStack_280 = _DAT_14cb7ff10;
    uStack_27c = uRam000000014cb7ff14;
    local_278 = DAT_14cb7ff18;
    if (DAT_14cb7ff18 != 0) {
      LOCK();
      *(int *)(DAT_14cb7ff18 + 8) = *(int *)(DAT_14cb7ff18 + 8) + 1;
      UNLOCK();
    }
    local_400 = uVar1;
    local_408 = (undefined8 *)CONCAT44(local_408._4_4_,1);
    FUN_1413a4e76(local_168,&local_288,local_1d8,local_190);
    local_408 = &local_228;
    FUN_146199084(local_168,&local_270,&local_258,&local_240);
    FUN_140cac0f2(local_168);
    FUN_1449db362(&local_1c0);
    if (local_1d8[0] != (longlong *)0x0) {
      (**(code **)(*local_1d8[0] + 0x10))();
    }
    if (local_1e8[0] != (longlong *)0x0) {
      (**(code **)(*local_1e8[0] + 0x10))();
    }
    if (local_1f8[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1449db362(&local_178);
    if (local_190[0] != (longlong *)0x0) {
      (**(code **)(*local_190[0] + 0x10))();
    }
    if (local_1a0[0] != (longlong *)0x0) {
      (**(code **)(*local_1a0[0] + 0x10))();
    }
    if (local_1b0[0] != 0) {
      FUN_1400020a8();
    }
    local_2a0 = DAT_14c966e80;
    local_298 = DAT_14c966e88;
    local_290 = DAT_14c966e90;
    if (DAT_14c966e90 == 0) {
      local_2b8 = DAT_14c966e80;
      uStack_2b0 = DAT_14c966e88;
      local_2a8 = 0;
    }
    else {
      LOCK();
      *(int *)(DAT_14c966e90 + 8) = *(int *)(DAT_14c966e90 + 8) + 1;
      UNLOCK();
      local_2a8 = DAT_14c966e90;
      local_2b8 = DAT_14c966e80;
      uStack_2b0 = DAT_14c966e88;
      if (DAT_14c966e90 != 0) {
        LOCK();
        *(int *)(DAT_14c966e90 + 8) = *(int *)(DAT_14c966e90 + 8) + 1;
        UNLOCK();
      }
    }
    local_2d0 = CONCAT44(DAT_14c9658d8._4_4_,(undefined4)DAT_14c9658d8);
    uStack_2c8 = CONCAT44(DAT_14c9658e0._4_4_,(undefined4)DAT_14c9658e0);
    local_2c0 = DAT_14c9658e8;
    if (DAT_14c9658e8 != 0) {
      LOCK();
      *(int *)(DAT_14c9658e8 + 8) = *(int *)(DAT_14c9658e8 + 8) + 1;
      UNLOCK();
    }
    local_2e8 = (undefined4)DAT_14c9658f0;
    uStack_2e4 = DAT_14c9658f0._4_4_;
    uStack_2e0 = (undefined4)DAT_14c9658f8;
    uStack_2dc = DAT_14c9658f8._4_4_;
    local_2d8 = DAT_14c965900;
    if (DAT_14c965900 != 0) {
      LOCK();
      *(int *)(DAT_14c965900 + 8) = *(int *)(DAT_14c965900 + 8) + 1;
      UNLOCK();
    }
    uVar1 = DAT_14cb7ff70;
    FUN_140056680(local_1b0,L"Gamepad_Chord_FaceTop_FaceLeft");
    FUN_140233b1a(local_1a0,local_1b0);
    FUN_14023423e(local_190,local_1a0);
    local_180 = 1;
    local_178 = 0;
    uStack_170 = 0;
    FUN_140056680(local_1f8,L"Gamepad_Chord_FaceTop_FaceLeft");
    FUN_140233b1a(local_1e8,local_1f8);
    FUN_14023423e(local_1d8,local_1e8);
    local_1c8 = 1;
    local_1c0 = 0;
    uStack_1b8 = 0;
    local_300 = _DAT_14cb7ff38;
    uStack_2fc = uRam000000014cb7ff3c;
    uStack_2f8 = _DAT_14cb7ff40;
    uStack_2f4 = uRam000000014cb7ff44;
    local_2f0 = DAT_14cb7ff48;
    if (DAT_14cb7ff48 != 0) {
      LOCK();
      *(int *)(DAT_14cb7ff48 + 8) = *(int *)(DAT_14cb7ff48 + 8) + 1;
      UNLOCK();
    }
    local_400 = uVar1;
    local_408 = (undefined8 *)CONCAT44(local_408._4_4_,1);
    FUN_1413a4e76(local_168,&local_300,local_1d8,local_190);
    local_408 = &local_2a0;
    FUN_146199084(local_168,&local_2e8,&local_2d0,&local_2b8);
    FUN_140cac0f2(local_168);
    FUN_1449db362(&local_1c0);
    if (local_1d8[0] != (longlong *)0x0) {
      (**(code **)(*local_1d8[0] + 0x10))();
    }
    if (local_1e8[0] != (longlong *)0x0) {
      (**(code **)(*local_1e8[0] + 0x10))();
    }
    if (local_1f8[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1449db362(&local_178);
    if (local_190[0] != (longlong *)0x0) {
      (**(code **)(*local_190[0] + 0x10))();
    }
    if (local_1a0[0] != (longlong *)0x0) {
      (**(code **)(*local_1a0[0] + 0x10))();
    }
    if (local_1b0[0] != 0) {
      FUN_1400020a8();
    }
    local_318 = DAT_14c966e80;
    local_310 = DAT_14c966e88;
    local_308 = DAT_14c966e90;
    if (DAT_14c966e90 == 0) {
      local_330 = DAT_14c966e80;
      uStack_328 = DAT_14c966e88;
      local_320 = 0;
    }
    else {
      LOCK();
      *(int *)(DAT_14c966e90 + 8) = *(int *)(DAT_14c966e90 + 8) + 1;
      UNLOCK();
      local_320 = DAT_14c966e90;
      local_330 = DAT_14c966e80;
      uStack_328 = DAT_14c966e88;
      if (DAT_14c966e90 != 0) {
        LOCK();
        *(int *)(DAT_14c966e90 + 8) = *(int *)(DAT_14c966e90 + 8) + 1;
        UNLOCK();
      }
    }
    local_348 = CONCAT44(DAT_14c9658c0._4_4_,(undefined4)DAT_14c9658c0);
    uStack_340 = CONCAT44(uRam000000014c9658cc,_DAT_14c9658c8);
    local_338 = DAT_14c9658d0;
    if (DAT_14c9658d0 != 0) {
      LOCK();
      *(int *)(DAT_14c9658d0 + 8) = *(int *)(DAT_14c9658d0 + 8) + 1;
      UNLOCK();
    }
    local_360 = (undefined4)DAT_14c9658f0;
    uStack_35c = DAT_14c9658f0._4_4_;
    uStack_358 = (undefined4)DAT_14c9658f8;
    uStack_354 = DAT_14c9658f8._4_4_;
    local_350 = DAT_14c965900;
    if (DAT_14c965900 != 0) {
      LOCK();
      *(int *)(DAT_14c965900 + 8) = *(int *)(DAT_14c965900 + 8) + 1;
      UNLOCK();
    }
    uVar1 = DAT_14cb7ff70;
    FUN_140056680(local_1b0,L"Gamepad_Chord_FaceTop_FaceRight");
    FUN_140233b1a(local_1a0,local_1b0);
    FUN_14023423e(local_190,local_1a0);
    local_180 = 1;
    local_178 = 0;
    uStack_170 = 0;
    FUN_140056680(local_1f8,L"Gamepad_Chord_FaceTop_FaceRight");
    FUN_140233b1a(local_1e8,local_1f8);
    FUN_14023423e(local_1d8,local_1e8);
    local_1c8 = 1;
    local_1c0 = 0;
    uStack_1b8 = 0;
    local_378 = _DAT_14cb7fef0;
    uStack_374 = uRam000000014cb7fef4;
    uStack_370 = _DAT_14cb7fef8;
    uStack_36c = uRam000000014cb7fefc;
    local_368 = DAT_14cb7ff00;
    if (DAT_14cb7ff00 != 0) {
      LOCK();
      *(int *)(DAT_14cb7ff00 + 8) = *(int *)(DAT_14cb7ff00 + 8) + 1;
      UNLOCK();
    }
    local_400 = uVar1;
    local_408 = (undefined8 *)CONCAT44(local_408._4_4_,1);
    FUN_1413a4e76(local_168,&local_378,local_1d8,local_190);
    local_408 = &local_318;
    FUN_146199084(local_168,&local_360,&local_348,&local_330);
    FUN_140cac0f2(local_168);
    FUN_1449db362(&local_1c0);
    if (local_1d8[0] != (longlong *)0x0) {
      (**(code **)(*local_1d8[0] + 0x10))();
    }
    if (local_1e8[0] != (longlong *)0x0) {
      (**(code **)(*local_1e8[0] + 0x10))();
    }
    if (local_1f8[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1449db362(&local_178);
    if (local_190[0] != (longlong *)0x0) {
      (**(code **)(*local_190[0] + 0x10))();
    }
    if (local_1a0[0] != (longlong *)0x0) {
      (**(code **)(*local_1a0[0] + 0x10))();
    }
    if (local_1b0[0] != 0) {
      FUN_1400020a8();
    }
    local_390 = DAT_14c966e80;
    local_388 = DAT_14c966e88;
    local_380 = DAT_14c966e90;
    if (DAT_14c966e90 == 0) {
      local_3a8 = DAT_14c966e80;
      uStack_3a0 = DAT_14c966e88;
      local_398 = 0;
    }
    else {
      LOCK();
      *(int *)(DAT_14c966e90 + 8) = *(int *)(DAT_14c966e90 + 8) + 1;
      UNLOCK();
      local_398 = DAT_14c966e90;
      local_3a8 = DAT_14c966e80;
      uStack_3a0 = DAT_14c966e88;
      if (DAT_14c966e90 != 0) {
        LOCK();
        *(int *)(DAT_14c966e90 + 8) = *(int *)(DAT_14c966e90 + 8) + 1;
        UNLOCK();
      }
    }
    local_3c0 = DAT_14c965920;
    uStack_3b8 = DAT_14c965928;
    local_3b0 = DAT_14c965930;
    if (DAT_14c965930 != 0) {
      LOCK();
      *(int *)(DAT_14c965930 + 8) = *(int *)(DAT_14c965930 + 8) + 1;
      UNLOCK();
    }
    local_3d8 = (undefined4)DAT_14c965908;
    uStack_3d4 = DAT_14c965908._4_4_;
    uStack_3d0 = (undefined4)DAT_14c965910;
    uStack_3cc = DAT_14c965910._4_4_;
    local_3c8 = DAT_14c965918;
    if (DAT_14c965918 != 0) {
      LOCK();
      *(int *)(DAT_14c965918 + 8) = *(int *)(DAT_14c965918 + 8) + 1;
      UNLOCK();
    }
    uVar1 = DAT_14cb7ff70;
    FUN_140056680(local_1b0,L"Gamepad_Chord_LeftShoulder_RightShoulder");
    FUN_140233b1a(local_1a0,local_1b0);
    FUN_14023423e(local_190,local_1a0);
    local_180 = 1;
    local_178 = 0;
    uStack_170 = 0;
    FUN_140056680(local_1f8,L"Gamepad_Chord_LeftShoulder_RightShoulder");
    FUN_140233b1a(local_1e8,local_1f8);
    FUN_14023423e(local_1d8,local_1e8);
    local_1c8 = 1;
    local_1c0 = 0;
    uStack_1b8 = 0;
    local_3f0 = _DAT_14cb7ff50;
    uStack_3ec = uRam000000014cb7ff54;
    uStack_3e8 = _DAT_14cb7ff58;
    uStack_3e4 = uRam000000014cb7ff5c;
    local_3e0 = DAT_14cb7ff60;
    if (DAT_14cb7ff60 != 0) {
      LOCK();
      *(int *)(DAT_14cb7ff60 + 8) = *(int *)(DAT_14cb7ff60 + 8) + 1;
      UNLOCK();
    }
    local_400 = uVar1;
    local_408 = (undefined8 *)CONCAT44(local_408._4_4_,1);
    FUN_1413a4e76(local_168,&local_3f0,local_1d8,local_190);
    local_408 = &local_390;
    FUN_146199084(local_168,&local_3d8,&local_3c0,&local_3a8);
    FUN_140cac0f2(local_168);
    FUN_1449db362(&local_1c0);
    if (local_1d8[0] != (longlong *)0x0) {
      (**(code **)(*local_1d8[0] + 0x10))();
    }
    if (local_1e8[0] != (longlong *)0x0) {
      (**(code **)(*local_1e8[0] + 0x10))();
    }
    if (local_1f8[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1449db362(&local_178);
    if (local_190[0] != (longlong *)0x0) {
      (**(code **)(*local_190[0] + 0x10))();
    }
    if (local_1a0[0] != (longlong *)0x0) {
      (**(code **)(*local_1a0[0] + 0x10))();
    }
    if (local_1b0[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_428) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146199084 FUN_146199084 body=2916 status=ok
// SIG undefined FUN_146199084(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146199084(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong lVar4;
  uint uVar5;
  char cVar6;
  longlong lVar7;
  undefined *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  bool bVar14;
  bool bVar15;
  
  cVar6 = FUN_141608d98(param_2);
  if ((((cVar6 == '\0') || (cVar6 = FUN_141608d98(param_3), cVar6 == '\0')) ||
      ((*param_4 != 0 &&
       ((FUN_1413a51d4(param_4), param_4[1] != 0 && (cVar6 = FUN_141608d98(param_4), cVar6 == '\0'))
       )))) || ((*param_5 != 0 &&
                ((FUN_1413a51d4(param_5), param_5[1] != 0 &&
                 (cVar6 = FUN_141608d98(param_5), cVar6 == '\0')))))) goto LAB_146199429;
  if (*param_2 != 0) {
    FUN_1413a51d4(param_2);
    if (((param_2[1] == 0) || (*param_3 == 0)) || (FUN_1413a51d4(param_3), param_3[1] == 0)) {
LAB_146199563:
      lVar7 = *param_2;
    }
    else {
      lVar7 = *param_2;
      if (lVar7 == *param_3) {
        FUN_1413a51d4(param_2);
        if (param_2[1] == 0) {
          FUN_1413a51d4(param_3);
          if ((param_3[1] == 0) || ((*(byte *)(param_3[1] + 0x40) & 2) == 0)) goto LAB_146199429;
        }
        else {
          bVar3 = *(byte *)(param_2[1] + 0x40);
          FUN_1413a51d4(param_3);
          if (param_3[1] == 0) {
            bVar14 = (bVar3 & 2) == 0;
          }
          else {
            bVar14 = (bVar3 & 2) >> 1 == (*(byte *)(param_3[1] + 0x40) & 2) >> 1;
          }
          if (bVar14) goto LAB_146199429;
        }
        goto LAB_146199563;
      }
    }
    if (((lVar7 == 0) || (FUN_1413a51d4(param_2), param_2[1] == 0)) ||
       ((*param_4 == 0 || (FUN_1413a51d4(param_4), param_4[1] == 0)))) {
LAB_146199142:
      lVar7 = *param_2;
    }
    else {
      lVar7 = *param_2;
      if (lVar7 == *param_4) {
        FUN_1413a51d4(param_2);
        if (param_2[1] == 0) {
          FUN_1413a51d4(param_4);
          if ((param_4[1] == 0) || ((*(byte *)(param_4[1] + 0x40) & 2) == 0)) goto LAB_146199429;
        }
        else {
          bVar3 = *(byte *)(param_2[1] + 0x40);
          FUN_1413a51d4(param_4);
          if (param_4[1] == 0) {
            bVar14 = (bVar3 & 2) == 0;
          }
          else {
            bVar14 = (bVar3 & 2) >> 1 == (*(byte *)(param_4[1] + 0x40) & 2) >> 1;
          }
          if (bVar14) goto LAB_146199429;
        }
        goto LAB_146199142;
      }
    }
    if ((((lVar7 != 0) && (FUN_1413a51d4(param_2), param_2[1] != 0)) && (*param_5 != 0)) &&
       ((FUN_1413a51d4(param_5), param_5[1] != 0 && (*param_2 == *param_5)))) {
      FUN_1413a51d4(param_2);
      if (param_2[1] == 0) {
        FUN_1413a51d4(param_5);
        if ((param_5[1] == 0) || ((*(byte *)(param_5[1] + 0x40) & 2) == 0)) goto LAB_146199429;
      }
      else {
        bVar3 = *(byte *)(param_2[1] + 0x40);
        FUN_1413a51d4(param_5);
        if (param_5[1] == 0) {
          bVar14 = (bVar3 & 2) == 0;
        }
        else {
          bVar14 = (bVar3 & 2) >> 1 == (*(byte *)(param_5[1] + 0x40) & 2) >> 1;
        }
        if (bVar14) goto LAB_146199429;
      }
    }
  }
  if (*param_3 != 0) {
    FUN_1413a51d4(param_3);
    if (((param_3[1] == 0) || (*param_4 == 0)) || (FUN_1413a51d4(param_4), param_4[1] == 0)) {
LAB_146199183:
      lVar7 = *param_3;
    }
    else {
      lVar7 = *param_3;
      if (lVar7 == *param_4) {
        FUN_1413a51d4(param_3);
        if (param_3[1] == 0) {
          FUN_1413a51d4(param_4);
          if ((param_4[1] == 0) || ((*(byte *)(param_4[1] + 0x40) & 2) == 0)) goto LAB_146199429;
        }
        else {
          bVar3 = *(byte *)(param_3[1] + 0x40);
          FUN_1413a51d4(param_4);
          if (param_4[1] == 0) {
            bVar14 = (bVar3 & 2) == 0;
          }
          else {
            bVar14 = (bVar3 & 2) >> 1 == (*(byte *)(param_4[1] + 0x40) & 2) >> 1;
          }
          if (bVar14) goto LAB_146199429;
        }
        goto LAB_146199183;
      }
    }
    if (((lVar7 != 0) && (FUN_1413a51d4(param_3), param_3[1] != 0)) &&
       ((*param_5 != 0 && ((FUN_1413a51d4(param_5), param_5[1] != 0 && (*param_3 == *param_5)))))) {
      FUN_1413a51d4(param_3);
      if (param_3[1] == 0) {
        FUN_1413a51d4(param_5);
        if ((param_5[1] == 0) || ((*(byte *)(param_5[1] + 0x40) & 2) == 0)) goto LAB_146199429;
      }
      else {
        bVar3 = *(byte *)(param_3[1] + 0x40);
        FUN_1413a51d4(param_5);
        if (param_5[1] == 0) {
          bVar14 = (bVar3 & 2) == 0;
        }
        else {
          bVar14 = (bVar3 & 2) >> 1 == (*(byte *)(param_5[1] + 0x40) & 2) >> 1;
        }
        if (bVar14) goto LAB_146199429;
      }
    }
  }
  if (*param_4 == 0) {
    bVar14 = false;
  }
  else {
    FUN_1413a51d4(param_4);
    if (((param_4[1] == 0) || (*param_5 == 0)) || (FUN_1413a51d4(param_5), param_5[1] == 0)) {
LAB_1461995ea:
      lVar7 = *param_4;
    }
    else {
      lVar7 = *param_4;
      if (lVar7 == *param_5) {
        FUN_1413a51d4(param_4);
        if (param_4[1] == 0) {
          FUN_1413a51d4(param_5);
          if ((param_5[1] == 0) || ((*(byte *)(param_5[1] + 0x40) & 2) == 0)) goto LAB_146199429;
        }
        else {
          bVar3 = *(byte *)(param_4[1] + 0x40);
          FUN_1413a51d4(param_5);
          if (param_5[1] == 0) {
            bVar14 = (bVar3 & 2) == 0;
          }
          else {
            bVar14 = (bVar3 & 2) >> 1 == (*(byte *)(param_5[1] + 0x40) & 2) >> 1;
          }
          if (bVar14) goto LAB_146199429;
        }
        goto LAB_1461995ea;
      }
    }
    if (lVar7 == 0) {
      bVar14 = false;
    }
    else {
      FUN_1413a51d4(param_4);
      bVar14 = param_4[1] != 0;
    }
  }
  if (*param_5 == 0) {
    bVar15 = false;
  }
  else {
    FUN_1413a51d4(param_5);
    bVar15 = param_5[1] != 0;
  }
  FUN_1413a47ae(param_1);
  if (DAT_14c966da8 == DAT_14c966dd4) {
    *(byte *)(_DAT_00000018 + 0x98) = *(byte *)(_DAT_00000018 + 0x98) | 1;
LAB_146199623:
    lVar13 = 0;
  }
  else {
    lVar7 = *param_1;
    uVar5 = (uint)((ulonglong)lVar7 >> 0x10);
    uVar9 = (uint)lVar7 & 0xffff;
    puVar8 = &DAT_14c966dd8;
    if (DAT_14c966de0 != (undefined *)0x0) {
      puVar8 = DAT_14c966de0;
    }
    uVar10 = DAT_14c966de8 - 1;
    iVar11 = *(int *)(puVar8 + (ulonglong)
                               ((int)((ulonglong)lVar7 >> 0x20) + ((uint)lVar7 << 0x10 | uVar9) +
                                (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar9 >> 4) & uVar10) * 4);
    if (iVar11 == -1) {
      plVar12 = (longlong *)&DAT_00000018;
    }
    else {
      do {
        lVar13 = DAT_14c966da0 + (longlong)iVar11 * 0x30;
        if (*(longlong *)(DAT_14c966da0 + (longlong)iVar11 * 0x30) == lVar7) goto LAB_146199255;
        iVar11 = *(int *)(lVar13 + 0x28);
      } while (iVar11 != -1);
      lVar13 = 0;
LAB_146199255:
      plVar12 = (longlong *)(lVar13 + 0x18);
    }
    *(byte *)(*plVar12 + 0x98) = *(byte *)(*plVar12 + 0x98) | 1;
    lVar7 = *param_1;
    uVar5 = (uint)((ulonglong)lVar7 >> 0x10);
    uVar9 = (uint)lVar7 & 0xffff;
    iVar11 = *(int *)(puVar8 + (ulonglong)
                               ((int)((ulonglong)lVar7 >> 0x20) + ((uint)lVar7 << 0x10 | uVar9) +
                                (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar9 >> 4) & uVar10) * 4);
    if (iVar11 == -1) goto LAB_146199623;
    do {
      lVar13 = DAT_14c966da0 + (longlong)iVar11 * 0x30;
      if (*(longlong *)(DAT_14c966da0 + (longlong)iVar11 * 0x30) == lVar7) break;
      iVar11 = *(int *)(lVar13 + 0x28);
      lVar13 = 0;
    } while (iVar11 != -1);
  }
  lVar7 = *(longlong *)(lVar13 + 0x18);
  iVar11 = *(int *)(lVar7 + 0xa8);
  lVar13 = (longlong)iVar11;
  *(uint *)(lVar7 + 0xa8) = iVar11 + 1U;
  if (*(uint *)(lVar7 + 0xac) < iVar11 + 1U) {
    FUN_14011bb82((longlong *)(lVar7 + 0xa0),iVar11);
  }
  lVar7 = *(longlong *)(lVar7 + 0xa0);
  *(longlong *)(lVar7 + lVar13 * 0x18) = *param_2;
  *(longlong *)(lVar7 + 8 + lVar13 * 0x18) = param_2[1];
  lVar4 = param_2[2];
  *(longlong *)(lVar7 + 0x10 + lVar13 * 0x18) = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  if (DAT_14c966da8 == DAT_14c966dd4) {
LAB_146199474:
    lVar13 = 0;
  }
  else {
    lVar7 = *param_1;
    uVar5 = (uint)((ulonglong)lVar7 >> 0x10);
    uVar9 = (uint)lVar7 & 0xffff;
    puVar8 = &DAT_14c966dd8;
    if (DAT_14c966de0 != (undefined *)0x0) {
      puVar8 = DAT_14c966de0;
    }
    iVar11 = *(int *)(puVar8 + (ulonglong)
                               (DAT_14c966de8 - 1U &
                               (int)((ulonglong)lVar7 >> 0x20) + ((uint)lVar7 << 0x10 | uVar9) +
                               (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar9 >> 4)) * 4);
    if (iVar11 == -1) goto LAB_146199474;
    do {
      lVar13 = DAT_14c966da0 + (longlong)iVar11 * 0x30;
      if (*(longlong *)(DAT_14c966da0 + (longlong)iVar11 * 0x30) == lVar7) break;
      iVar11 = *(int *)(lVar13 + 0x28);
      lVar13 = 0;
    } while (iVar11 != -1);
  }
  lVar7 = *(longlong *)(lVar13 + 0x18);
  iVar11 = *(int *)(lVar7 + 0xa8);
  lVar13 = (longlong)iVar11;
  *(uint *)(lVar7 + 0xa8) = iVar11 + 1U;
  if (*(uint *)(lVar7 + 0xac) < iVar11 + 1U) {
    FUN_14011bb82((longlong *)(lVar7 + 0xa0),iVar11);
  }
  lVar7 = *(longlong *)(lVar7 + 0xa0);
  *(longlong *)(lVar7 + lVar13 * 0x18) = *param_3;
  *(longlong *)(lVar7 + 8 + lVar13 * 0x18) = param_3[1];
  lVar4 = param_3[2];
  *(longlong *)(lVar7 + 0x10 + lVar13 * 0x18) = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  if (bVar14) {
    if (DAT_14c966da8 != DAT_14c966dd4) {
      lVar7 = *param_1;
      uVar5 = (uint)((ulonglong)lVar7 >> 0x10);
      uVar9 = (uint)lVar7 & 0xffff;
      puVar8 = &DAT_14c966dd8;
      if (DAT_14c966de0 != (undefined *)0x0) {
        puVar8 = DAT_14c966de0;
      }
      iVar11 = *(int *)(puVar8 + (ulonglong)
                                 (DAT_14c966de8 - 1U &
                                 (int)((ulonglong)lVar7 >> 0x20) + ((uint)lVar7 << 0x10 | uVar9) +
                                 (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar9 >> 4)) * 4);
      while (iVar11 != -1) {
        lVar13 = DAT_14c966da0 + (longlong)iVar11 * 0x30;
        if (*(longlong *)(DAT_14c966da0 + (longlong)iVar11 * 0x30) == lVar7) goto LAB_146199699;
        iVar11 = *(int *)(lVar13 + 0x28);
      }
    }
    lVar13 = 0;
LAB_146199699:
    lVar7 = *(longlong *)(lVar13 + 0x18);
    iVar11 = *(int *)(lVar7 + 0xa8);
    lVar13 = (longlong)iVar11;
    *(uint *)(lVar7 + 0xa8) = iVar11 + 1U;
    if (*(uint *)(lVar7 + 0xac) < iVar11 + 1U) {
      FUN_14011bb82((longlong *)(lVar7 + 0xa0),iVar11);
    }
    lVar7 = *(longlong *)(lVar7 + 0xa0);
    *(longlong *)(lVar7 + lVar13 * 0x18) = *param_4;
    *(longlong *)(lVar7 + 8 + lVar13 * 0x18) = param_4[1];
    lVar4 = param_4[2];
    *(longlong *)(lVar7 + 0x10 + lVar13 * 0x18) = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
  }
  if (bVar15) {
    if (DAT_14c966da8 != DAT_14c966dd4) {
      lVar7 = *param_1;
      uVar5 = (uint)((ulonglong)lVar7 >> 0x10);
      uVar9 = (uint)lVar7 & 0xffff;
      puVar8 = &DAT_14c966dd8;
      if (DAT_14c966de0 != (undefined *)0x0) {
        puVar8 = DAT_14c966de0;
      }
      iVar11 = *(int *)(puVar8 + (ulonglong)
                                 (DAT_14c966de8 - 1U &
                                 (int)((ulonglong)lVar7 >> 0x20) + ((uint)lVar7 << 0x10 | uVar9) +
                                 (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar9 >> 4)) * 4);
      while (iVar11 != -1) {
        lVar13 = DAT_14c966da0 + (longlong)iVar11 * 0x30;
        if (*(longlong *)(DAT_14c966da0 + (longlong)iVar11 * 0x30) == lVar7) goto LAB_14619971b;
        iVar11 = *(int *)(lVar13 + 0x28);
      }
    }
    lVar13 = 0;
LAB_14619971b:
    lVar7 = *(longlong *)(lVar13 + 0x18);
    iVar11 = *(int *)(lVar7 + 0xa8);
    lVar13 = (longlong)iVar11;
    *(uint *)(lVar7 + 0xa8) = iVar11 + 1U;
    if (*(uint *)(lVar7 + 0xac) < iVar11 + 1U) {
      FUN_14011bb82((longlong *)(lVar7 + 0xa0),iVar11);
    }
    lVar7 = *(longlong *)(lVar7 + 0xa0);
    *(longlong *)(lVar7 + lVar13 * 0x18) = *param_5;
    *(longlong *)(lVar7 + 8 + lVar13 * 0x18) = param_5[1];
    lVar4 = param_5[2];
    *(longlong *)(lVar7 + 0x10 + lVar13 * 0x18) = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
  }
LAB_146199429:
  plVar12 = (longlong *)param_2[2];
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar12 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  plVar12 = (longlong *)param_3[2];
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar12 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  plVar12 = (longlong *)param_4[2];
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar12 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  plVar12 = (longlong *)param_5[2];
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar12 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001461994c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar12 + 0x10))(plVar12);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146199be8 FUN_146199be8 body=54 status=ok
// SIG undefined FUN_146199be8(void)

void FUN_146199be8(void)

{
  FUN_146199c1e();
  if (DAT_14c98d850 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c98d830 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146199c1e FUN_146199c1e body=406 status=ok
// SIG undefined FUN_146199c1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146199c1e(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  undefined *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0x100000000;
  local_30 = &DAT_14c98d840;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if (DAT_14c98d858 != 0) {
    FUN_1449c0562(&local_38);
  }
  local_60 = &DAT_14c98d830;
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  if (iStack_24 < *(int *)(local_30 + 0x18)) {
    do {
      plVar3 = *(longlong **)(*local_60 + 0x10 + (longlong)iStack_44 * 0x20);
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
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < *(int *)(local_50 + 0x18));
  }
  DAT_14c98d838 = 0;
  if (DAT_14c98d83c != 0) {
    FUN_1446f4a44(&DAT_14c98d830,0);
  }
  _DAT_14c98d860 = 0xffffffff;
  DAT_14c98d858 = 0;
  if (0x80 < DAT_14c98d85c) {
    DAT_14c98d85c = 0x80;
    FUN_1446efbd8(&DAT_14c98d840,0);
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146199db6 FUN_146199db6 body=54 status=ok
// SIG undefined FUN_146199db6(void)

void FUN_146199db6(void)

{
  FUN_146199dec();
  if (DAT_14c98d8a0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c98d880 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146199dec FUN_146199dec body=406 status=ok
// SIG undefined FUN_146199dec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146199dec(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  undefined *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0x100000000;
  local_30 = &DAT_14c98d890;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if (DAT_14c98d8a8 != 0) {
    FUN_1449c0562(&local_38);
  }
  local_60 = &DAT_14c98d880;
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  if (iStack_24 < *(int *)(local_30 + 0x18)) {
    do {
      plVar3 = *(longlong **)(*local_60 + 0x10 + (longlong)iStack_44 * 0x20);
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
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < *(int *)(local_50 + 0x18));
  }
  DAT_14c98d888 = 0;
  if (DAT_14c98d88c != 0) {
    FUN_1446f4a44(&DAT_14c98d880,0);
  }
  _DAT_14c98d8b0 = 0xffffffff;
  DAT_14c98d8a8 = 0;
  if (0x80 < DAT_14c98d8ac) {
    DAT_14c98d8ac = 0x80;
    FUN_1446efbd8(&DAT_14c98d890,0);
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146199f84 FUN_146199f84 body=54 status=ok
// SIG undefined FUN_146199f84(void)

void FUN_146199f84(void)

{
  FUN_146199fba();
  if (DAT_14c99ff98 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c99ff78 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146199fba FUN_146199fba body=406 status=ok
// SIG undefined FUN_146199fba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146199fba(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  undefined *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0x100000000;
  local_30 = &DAT_14c99ff88;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if (DAT_14c99ffa0 != 0) {
    FUN_1449c0562(&local_38);
  }
  local_60 = &DAT_14c99ff78;
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  if (iStack_24 < *(int *)(local_30 + 0x18)) {
    do {
      plVar3 = *(longlong **)(*local_60 + 0x10 + (longlong)iStack_44 * 0x20);
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
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < *(int *)(local_50 + 0x18));
  }
  DAT_14c99ff80 = 0;
  if (DAT_14c99ff84 != 0) {
    FUN_1446f4a44(&DAT_14c99ff78,0);
  }
  _DAT_14c99ffa8 = 0xffffffff;
  DAT_14c99ffa0 = 0;
  if (0x80 < DAT_14c99ffa4) {
    DAT_14c99ffa4 = 0x80;
    FUN_1446efbd8(&DAT_14c99ff88,0);
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14619a152 FUN_14619a152 body=54 status=ok
// SIG undefined FUN_14619a152(void)

void FUN_14619a152(void)

{
  FUN_14619a188();
  if (DAT_14ca75eb0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14ca75e90 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14619a188 FUN_14619a188 body=406 status=ok
// SIG undefined FUN_14619a188(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14619a188(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  undefined *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0x100000000;
  local_30 = &DAT_14ca75ea0;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if (DAT_14ca75eb8 != 0) {
    FUN_1449c0562(&local_38);
  }
  local_60 = &DAT_14ca75e90;
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  if (iStack_24 < *(int *)(local_30 + 0x18)) {
    do {
      plVar3 = *(longlong **)(*local_60 + 0x10 + (longlong)iStack_44 * 0x20);
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
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < *(int *)(local_50 + 0x18));
  }
  _DAT_14ca75e98 = 0;
  if (DAT_14ca75e9c != 0) {
    FUN_1446f4a44(&DAT_14ca75e90,0);
  }
  _DAT_14ca75ec0 = 0xffffffff;
  DAT_14ca75eb8 = 0;
  if (0x80 < DAT_14ca75ebc) {
    DAT_14ca75ebc = 0x80;
    FUN_1446efbd8(&DAT_14ca75ea0,0);
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14619a320 FUN_14619a320 body=54 status=ok
// SIG undefined FUN_14619a320(void)

void FUN_14619a320(void)

{
  FUN_14619a356();
  if (DAT_14cb9d9f8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb9d9d8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14619a356 FUN_14619a356 body=406 status=ok
// SIG undefined FUN_14619a356(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14619a356(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  undefined *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0x100000000;
  local_30 = &DAT_14cb9d9e8;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if (DAT_14cb9da00 != 0) {
    FUN_1449c0562(&local_38);
  }
  local_60 = &DAT_14cb9d9d8;
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  if (iStack_24 < *(int *)(local_30 + 0x18)) {
    do {
      plVar3 = *(longlong **)(*local_60 + 0x10 + (longlong)iStack_44 * 0x20);
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
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < *(int *)(local_50 + 0x18));
  }
  DAT_14cb9d9e0 = 0;
  if (DAT_14cb9d9e4 != 0) {
    FUN_1446f4a44(&DAT_14cb9d9d8,0);
  }
  _DAT_14cb9da08 = 0xffffffff;
  DAT_14cb9da00 = 0;
  if (0x80 < DAT_14cb9da04) {
    DAT_14cb9da04 = 0x80;
    FUN_1446efbd8(&DAT_14cb9d9e8,0);
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14619a4ee FUN_14619a4ee body=404 status=ok
// SIG undefined FUN_14619a4ee(void)

undefined4 * FUN_14619a4ee(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14619a684(param_1,local_40);
  puVar2 = (undefined8 *)*param_3;
  puVar3 = (undefined8 *)param_3[1];
  *local_38 = *puVar2;
  lVar12 = puVar2[1];
  local_38[1] = lVar12;
  if (lVar12 != 0) {
    LOCK();
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    UNLOCK();
  }
  local_38[2] = *puVar3;
  lVar12 = puVar3[1];
  local_38[3] = lVar12;
  if (lVar12 != 0) {
    LOCK();
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(local_38 + 4) = 0xffffffff;
  local_44 = local_40[0];
  plVar4 = (longlong *)*local_38;
  plVar5 = (longlong *)local_38[1];
  if (plVar5 == (longlong *)0x0) {
    uVar8 = (**(code **)(*plVar4 + 0x40))();
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    uVar8 = (**(code **)(*plVar4 + 0x40))();
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  cVar7 = FUN_14619a76c(param_1,uVar8,local_38,&local_44);
  uVar6 = local_44;
  if (cVar7 == '\0') {
    uVar9 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar11 = 1;
    if (3 < uVar9) {
      uVar10 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_38 + 0x24) = uVar8;
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 4) =
           *(undefined4 *)
            (lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar11;
      FUN_14619a862(param_1);
    }
  }
  *param_2 = uVar6;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14619a684 FUN_14619a684 body=231 status=ok
// SIG undefined FUN_14619a684(void)

int * FUN_14619a684(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 14619a76c FUN_14619a76c body=244 status=ok
// SIG undefined FUN_14619a76c(void)

undefined8 FUN_14619a76c(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 uVar13;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_40 = *param_3;
    plVar4 = (longlong *)param_3[1];
    local_38 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      iVar12 = FUN_140cdda76(param_1,param_2,&local_40);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      iVar12 = FUN_140cdda76(param_1);
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
    }
    if (iVar12 != -1) {
      puVar3 = (undefined4 *)(*param_1 + (longlong)iVar12 * 0x28);
      FUN_145c39dac(puVar3);
      uVar5 = *(undefined4 *)param_3;
      uVar6 = *(undefined4 *)((longlong)param_3 + 4);
      uVar7 = *(undefined4 *)(param_3 + 1);
      uVar8 = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar9 = *(undefined4 *)((longlong)param_3 + 0x14);
      uVar10 = *(undefined4 *)(param_3 + 3);
      uVar11 = *(undefined4 *)((longlong)param_3 + 0x1c);
      puVar3[4] = *(undefined4 *)(param_3 + 2);
      puVar3[5] = uVar9;
      puVar3[6] = uVar10;
      puVar3[7] = uVar11;
      *puVar3 = uVar5;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      FUN_145c39e12(param_1,*param_4);
      *param_4 = iVar12;
      uVar13 = 1;
      goto LAB_14619a792;
    }
  }
  uVar13 = 0;
LAB_14619a792:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14619a862 FUN_14619a862 body=501 status=ok
// SIG undefined FUN_14619a862(void)

void FUN_14619a862(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar6 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)((longlong)plVar10 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar3 != uVar11);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar6 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar12 = local_68._4_4_;
      local_68 = uVar6;
      do {
        lVar4 = *local_80;
        lVar9 = (longlong)iVar12;
        plVar10 = *(longlong **)(lVar4 + lVar9 * 0x28);
        plVar5 = *(longlong **)(lVar4 + 8 + lVar9 * 0x28);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        lVar4 = lVar4 + lVar9 * 0x28;
        iVar7 = (**(code **)(*plVar10 + 0x40))();
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar4 + 0x24) = iVar7;
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0x20) =
             *(undefined4 *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(int *)((longlong)plVar10 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar12;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar5 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
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
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar12 = local_68._4_4_;
        uVar6 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar6;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14619aa60 FUN_14619aa60 body=40 status=ok
// SIG undefined FUN_14619aa60(void)

undefined8 FUN_14619aa60(undefined8 param_1,int param_2)

{
  FUN_141608ff2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14619aa88 FUN_14619aa88 body=86 status=ok
// SIG undefined FUN_14619aa88(void)

void FUN_14619aa88(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
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
                    /* WARNING: Could not recover jumptable at 0x00014619aada. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14619aade FUN_14619aade body=55 status=ok
// SIG undefined FUN_14619aade(void)

void FUN_14619aade(longlong *param_1)

{
  FUN_14619ab16(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14619ab16 FUN_14619ab16 body=407 status=ok
// SIG undefined FUN_14619ab16(void)

void FUN_14619ab16(longlong *param_1,int param_2)

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
      FUN_144760e21(*(undefined8 *)(lVar2 + 8 + lVar4 * 0x28),
                    *(undefined4 *)(lVar2 + 0x10 + lVar4 * 0x28));
      if (*(longlong *)(lVar2 + 8 + lVar4 * 0x28) != 0) {
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
    FUN_140549ad6(param_1,param_2);
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



// FUNCTION 14619acba FUN_14619acba body=452 status=ok
// SIG undefined FUN_14619acba(void)

undefined8 * FUN_14619acba(undefined8 *param_1)

{
  FUN_14135b052();
  *param_1 = &PTR_FUN_14b0f99e0;
  param_1[0x72] = &PTR_FUN_14b0fa030;
  param_1[0x73] = &PTR_FUN_14b0fa050;
  param_1[0x74] = &PTR_FUN_14b0fa080;
  param_1[0x75] = &PTR_FUN_14b0fa090;
  param_1[0x76] = &PTR_FUN_14b0fa100;
  param_1[0x77] = &PTR_FUN_14b0fa130;
  param_1[0x78] = &PTR_FUN_14b0fa160;
  param_1[0x7f] = &PTR_FUN_14b0fa210;
  param_1[0x80] = &PTR_FUN_14b0fa280;
  param_1[0x81] = &PTR_FUN_14b0fa2f0;
  param_1[0x82] = &PTR_FUN_14b0fa320;
  param_1[0x83] = &PTR_FUN_14b0fa360;
  param_1[0x84] = &PTR_FUN_14b0fa400;
  param_1[0x85] = &PTR_FUN_14b0fa420;
  param_1[0x89] = &PTR_FUN_14b0fa440;
  param_1[0x8a] = &PTR_FUN_14b0fa500;
  param_1[0x8b] = &PTR_FUN_14b0fa580;
  param_1[0x8c] = &PTR_FUN_14b0fa5d0;
  param_1[0x8d] = &PTR_FUN_14b0fa610;
  param_1[0x8e] = &PTR_FUN_14b0fa630;
  param_1[0x8f] = &PTR_FUN_14b0fa650;
  param_1[0x90] = &PTR_FUN_14b0fa670;
  param_1[0x91] = &PTR_FUN_14b0fa690;
  param_1[0x92] = &PTR_FUN_14b0fa6b0;
  param_1[0x93] = &PTR_FUN_14b0fa6d0;
  param_1[0x94] = &PTR_FUN_14b0fa6f0;
  param_1[0x95] = &PTR_FUN_14b0fa710;
  param_1[0x96] = &PTR_FUN_14b0fa730;
  param_1[0x34b] = &PTR_FUN_14b0fa750;
  param_1[0x34c] = &PTR_FUN_14b0fa830;
  return param_1;
}



// FUNCTION 14619ae8a FUN_14619ae8a body=452 status=ok
// SIG undefined FUN_14619ae8a(void)

undefined8 * FUN_14619ae8a(undefined8 *param_1)

{
  FUN_14135b052();
  *param_1 = &PTR_FUN_14b1906c0;
  param_1[0x72] = &PTR_FUN_14b190d10;
  param_1[0x73] = &PTR_FUN_14b190d30;
  param_1[0x74] = &PTR_FUN_14b190d60;
  param_1[0x75] = &PTR_FUN_14b190d70;
  param_1[0x76] = &PTR_FUN_14b190de0;
  param_1[0x77] = &PTR_FUN_14b190e10;
  param_1[0x78] = &PTR_FUN_14b190e40;
  param_1[0x7f] = &PTR_FUN_14b190ef0;
  param_1[0x80] = &PTR_FUN_14b190f60;
  param_1[0x81] = &PTR_FUN_14b190fd0;
  param_1[0x82] = &PTR_FUN_14b191000;
  param_1[0x83] = &PTR_FUN_14b191040;
  param_1[0x84] = &PTR_FUN_14b1910e0;
  param_1[0x85] = &PTR_FUN_14b191100;
  param_1[0x89] = &PTR_FUN_14b191120;
  param_1[0x8a] = &PTR_FUN_14b1911e0;
  param_1[0x8b] = &PTR_FUN_14b191260;
  param_1[0x8c] = &PTR_FUN_14b1912b0;
  param_1[0x8d] = &PTR_FUN_14b1912f0;
  param_1[0x8e] = &PTR_FUN_14b191310;
  param_1[0x8f] = &PTR_FUN_14b191330;
  param_1[0x90] = &PTR_FUN_14b191350;
  param_1[0x91] = &PTR_FUN_14b191370;
  param_1[0x92] = &PTR_FUN_14b191390;
  param_1[0x93] = &PTR_FUN_14b1913b0;
  param_1[0x94] = &PTR_FUN_14b1913d0;
  param_1[0x95] = &PTR_FUN_14b1913f0;
  param_1[0x96] = &PTR_FUN_14b191410;
  param_1[0x34b] = &PTR_FUN_14b191430;
  param_1[0x34c] = &PTR_FUN_14b191510;
  return param_1;
}



// FUNCTION 14619b04e FUN_14619b04e body=351 status=ok
// SIG undefined FUN_14619b04e(void)

void FUN_14619b04e(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  uVar3 = FUN_1400b465c();
  plVar4 = (longlong *)FUN_14001cc68(0x308,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b4e0610;
  plVar5 = plVar4 + 2;
  FUN_14619b55e(plVar5,uVar3);
  local_38 = plVar5;
  local_30 = plVar4;
  FUN_14619b1c0(&local_38,plVar5);
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x30) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0x38);
    if (plVar5 == (longlong *)0x0) goto LAB_14619b0ec;
    *(undefined8 *)(param_1 + 0x38) = 0;
LAB_14619b156:
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14619b0ec;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar4 = plVar5;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x30) = plVar5;
    plVar5 = *(longlong **)(param_1 + 0x38);
    if (plVar4 != plVar5) {
      *(longlong **)(param_1 + 0x38) = plVar4;
      if (plVar5 == (longlong *)0x0) goto LAB_14619b0ec;
      goto LAB_14619b156;
    }
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_14619b0ec;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_14619b0ec:
  plVar5 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 14619b1c0 FUN_14619b1c0 body=162 status=ok
// SIG undefined FUN_14619b1c0(void)

void FUN_14619b1c0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x10) != 0) && (*(longlong *)(param_2 + 0x18) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x18) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x10) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x18);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x10) = param_2;
    if (*(longlong **)(param_2 + 0x18) == plVar2) goto LAB_14619b1ff;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x18);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x18) = plVar2;
      goto LAB_14619b1ff;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x18) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14619b1ff:
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
                    /* WARNING: Could not recover jumptable at 0x00014619b25e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14619b3b2 FUN_14619b3b2 body=428 status=ok
// SIG undefined FUN_14619b3b2(void)

longlong * FUN_14619b3b2(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  plVar6 = *(longlong **)(param_2 + 0x18);
  if (plVar6 == (longlong *)0x0) {
LAB_14619b492:
    *puVar5 = &PTR_LAB_149e063e0;
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
    *puVar5 = &PTR_FUN_14b4e0630;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14619b492;
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
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e063e0;
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
    *puVar5 = &PTR_FUN_14b4e0630;
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



// FUNCTION 14619b55e FUN_14619b55e body=558 status=ok
// SIG undefined FUN_14619b55e(void)

undefined8 * FUN_14619b55e(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b4df3a0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 2;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x200000000;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  FUN_14485c47a(param_1 + 0x14);
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined8 *)((longlong)param_1 + 0x224) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x274) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x27c) = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2cc) = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14b4e49b0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 2;
  puVar1[2] = &PTR_FUN_14b4e49d0;
  param_1[0x5d] = puVar1 + 2;
  param_1[0x5e] = puVar1;
  return param_1;
}



// FUNCTION 14619b78c FUN_14619b78c body=37 status=ok
// SIG undefined FUN_14619b78c(void)

void FUN_14619b78c(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x580);
  FUN_14619b7b2(param_2);
  return;
}



// FUNCTION 14619b7b2 FUN_14619b7b2 body=890 status=ok
// SIG undefined FUN_14619b7b2(void)

undefined8 * FUN_14619b7b2(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_1 + 1);
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = &PTR_FUN_14b70f9c0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x29) = 0;
  *(undefined8 *)((longlong)param_1 + 0x31) = 0;
  uVar1 = DAT_14c846500;
  param_1[10] = DAT_14c8464f8;
  param_1[0xb] = uVar1;
  param_1[0xc] = DAT_14c846508;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x10] = DAT_14c8464e0;
  param_1[0x11] = uVar1;
  param_1[0x12] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined2 *)(param_1 + 0x15) = 0;
  param_1[0x18] = DAT_14c846508;
  uVar1 = DAT_14c846500;
  param_1[0x16] = DAT_14c8464f8;
  param_1[0x17] = uVar1;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1e] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x1c] = DAT_14c8464e0;
  param_1[0x1d] = uVar1;
  param_1[0x1f] = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 10;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0x3dcccccd47435000;
  *(undefined4 *)(param_1 + 0x2a) = 0x41700000;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0xf00000d0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0xf00000d0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3e) = 0x45160000;
  *(undefined4 *)(param_1 + 0x3f) = 0x41f00000;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0xf00000d0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x49) = 0x41200000;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0xf00000d0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x53) = 0x41a00000;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0xf00000d0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
  param_1[0x61] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x62] = 0x4110000045fa0000;
  param_1[99] = 0x3f00000040e00000;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  memset(param_1 + 0x6d,0,0xd0);
  param_1[0x87] = 0x3f19999a41f00000;
  param_1[0x88] = 0x42c8000042340000;
  param_1[0x89] = 0x3f0000003f000000;
  param_1[0x93] = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4ac) = 0;
  param_1[0x97] = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  param_1[0x9d] = 0;
  *(undefined4 *)(param_1 + 0x9e) = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4f4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4fc) = 0;
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  param_1[0xa7] = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x544) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54c) = 0;
  param_1[0xab] = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  param_1[0xaf] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  return param_1;
}



// FUNCTION 14619bb2c FUN_14619bb2c body=54 status=ok
// SIG undefined FUN_14619bb2c(void)

void FUN_14619bb2c(void)

{
  FUN_14619bb62();
  if (DAT_14c8446b0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c844690 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14619bb62 FUN_14619bb62 body=409 status=ok
// SIG undefined FUN_14619bb62(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14619bb62(void)

{
  longlong lVar1;
  longlong lVar2;
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
  local_38 = &DAT_14c8446a0;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if (DAT_14c8446b8 != 0) {
    FUN_1449c0562(&local_40);
  }
  local_68 = &DAT_14c844690;
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  if (iStack_2c < *(int *)(local_38 + 0x18)) {
    do {
      lVar1 = *local_68;
      lVar2 = (longlong)iStack_4c * 0x60;
      *(undefined4 *)(lVar1 + 0x50 + lVar2) = 0;
      if (*(longlong *)(lVar1 + 0x48 + lVar2) != 0) {
        FUN_1400020a8();
      }
      FUN_1467d6392(lVar1 + lVar2 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < *(int *)(local_58 + 0x18));
  }
  DAT_14c844698 = 0;
  if (DAT_14c84469c != 0) {
    FUN_1448fc38a(&DAT_14c844690,0);
  }
  _DAT_14c8446c0 = 0xffffffff;
  DAT_14c8446b8 = 0;
  if (0x80 < DAT_14c8446bc) {
    DAT_14c8446bc = 0x80;
    FUN_1446efbd8(&DAT_14c8446a0,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14619bcfc FUN_14619bcfc body=90 status=ok
// SIG undefined FUN_14619bcfc(void)

void FUN_14619bcfc(uint param_1)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    iVar3 = 0;
  }
  else if (param_1 < 0x41) {
    iVar3 = 0x40;
  }
  else {
    uVar2 = FUN_144a3809e((ulonglong)param_1 << 4,0);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if ((int)param_1 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (iVar3 != DAT_14cb8287c) {
    DAT_14cb8287c = iVar3;
    FUN_14619bd56(DAT_14cb82878);
    return;
  }
  return;
}



// FUNCTION 14619bd56 FUN_14619bd56 body=142 status=ok
// SIG undefined FUN_14619bd56(void)

void FUN_14619bd56(int param_1,uint param_2)

{
  if (param_2 < 0x41) {
    if (DAT_14cb82870 == (void *)0x0) {
      return;
    }
    memmove(&DAT_14cb82470,DAT_14cb82870,(longlong)param_1 << 4);
    param_1 = 0;
    param_2 = 0;
  }
  else if (DAT_14cb82870 == (void *)0x0) {
    FUN_1446efa72(&DAT_14cb82870,0,param_2,0x10);
    memmove(DAT_14cb82870,&DAT_14cb82470,(longlong)param_1 << 4);
    return;
  }
  FUN_1446efa72(&DAT_14cb82870,param_1,param_2,0x10);
  return;
}



// FUNCTION 14619bde4 FUN_14619bde4 body=54 status=ok
// SIG undefined FUN_14619bde4(void)

void FUN_14619bde4(void)

{
  FUN_14619be1a();
  if (DAT_14cb8cb50 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb8cb30 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14619be1a FUN_14619be1a body=409 status=ok
// SIG undefined FUN_14619be1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14619be1a(void)

{
  longlong lVar1;
  longlong lVar2;
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
  local_38 = &DAT_14cb8cb40;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if (DAT_14cb8cb58 != 0) {
    FUN_1449c0562(&local_40);
  }
  local_68 = &DAT_14cb8cb30;
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  if (iStack_2c < *(int *)(local_38 + 0x18)) {
    do {
      lVar1 = *local_68;
      lVar2 = (longlong)iStack_4c * 0x60;
      *(undefined4 *)(lVar1 + 0x50 + lVar2) = 0;
      if (*(longlong *)(lVar1 + 0x48 + lVar2) != 0) {
        FUN_1400020a8();
      }
      FUN_14472eaf0(lVar1 + lVar2 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < *(int *)(local_58 + 0x18));
  }
  _DAT_14cb8cb38 = 0;
  if (DAT_14cb8cb3c != 0) {
    FUN_1448fc38a(&DAT_14cb8cb30,0);
  }
  _DAT_14cb8cb60 = 0xffffffff;
  DAT_14cb8cb58 = 0;
  if (0x80 < DAT_14cb8cb5c) {
    DAT_14cb8cb5c = 0x80;
    FUN_1446efbd8(&DAT_14cb8cb40,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14619bfb4 FUN_14619bfb4 body=776 status=ok
// SIG undefined FUN_14619bfb4(void)

ulonglong FUN_14619bfb4(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  ushort uVar1;
  ushort uVar2;
  void *pvVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  void *_Src;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  int local_88;
  longlong local_80;
  int local_78;
  undefined4 local_74;
  void *local_70;
  uint local_68;
  undefined4 local_64;
  void *local_60;
  uint local_58;
  undefined8 local_50;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_98 = 0;
  local_50 = param_1;
  cVar4 = FUN_14063337c(0,L"project=",&local_48,1);
  FUN_14619c2be(&local_60,&local_50);
  FUN_140ded312(&local_60);
  FUN_14020fad6(param_2,&DAT_149dfb77a);
  FUN_14020fad6(param_3,&DAT_149dfb77a);
  if (local_58 < 2) {
    if (cVar4 != '\0') {
LAB_14619c0b9:
      _Src = local_48;
      pvVar3 = local_60;
      uVar8 = uStack_40 & 0xffffffff;
      local_70 = (void *)0x0;
      if ((int)(uint)uStack_40 < 2) {
        uVar8 = (ulonglong)(int)local_58;
        local_68 = local_58;
        if (uVar8 != 0) {
          FUN_1446dd670(&local_70,local_58,0);
          _Src = pvVar3;
          goto LAB_14619c125;
        }
        local_64 = 0;
      }
      else {
        local_68 = (uint)uStack_40;
        FUN_1446dd670(&local_70,uVar8,0);
LAB_14619c125:
        memcpy(local_70,_Src,uVar8 * 2);
      }
      FUN_144a06df0(&local_80,&local_70);
      FUN_14626f112(&local_90);
      if (local_78 == local_88) {
        bVar11 = true;
        if (1 < local_78) {
          lVar9 = 0;
          while( true ) {
            uVar1 = *(ushort *)(local_80 + lVar9);
            uVar6 = (uint)uVar1;
            uVar2 = *(ushort *)(local_90 + lVar9);
            uVar10 = (uint)uVar2;
            if (uVar1 != uVar2) {
              if ((uVar2 | uVar1) < 0x80) {
                uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14619c18b;
              }
              iVar7 = uVar6 - uVar10;
              goto LAB_14619c2a1;
            }
            if (uVar1 == 0) break;
LAB_14619c18b:
            lVar9 = lVar9 + 2;
          }
          iVar7 = 0;
LAB_14619c2a1:
          bVar11 = iVar7 == 0;
        }
      }
      else {
        bVar11 = local_88 + local_78 == 1;
      }
      if (local_90 != 0) {
        FUN_1400020a8();
      }
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      if (bVar11) {
        iVar7 = local_68 - 1;
        if (local_68 == 0) {
          iVar7 = 0;
        }
        FUN_1402980a2(param_2,local_70,iVar7);
        FUN_140c50e86(&local_80,param_2,1);
        if (&local_80 == param_3) {
          if (local_80 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*param_3 != 0) {
            FUN_1400020a8();
          }
          *param_3 = local_80;
          local_80 = 0;
          *(int *)(param_3 + 1) = local_78;
          *(undefined4 *)((longlong)param_3 + 0xc) = local_74;
        }
        if (local_70 != (void *)0x0) {
          FUN_1400020a8();
        }
        uVar8 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
        goto LAB_14619c04e;
      }
      FUN_1401aeb9c(&local_70);
      if (local_70 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    cVar5 = FUN_144a791f8(&local_60,&DAT_149e1419a,1,1);
    if (cVar4 != '\0' || cVar5 != '\x01') goto LAB_14619c0b9;
  }
  uVar8 = 0;
LAB_14619c04e:
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14619c2be FUN_14619c2be body=138 status=ok
// SIG undefined FUN_14619c2be(void)

undefined8 * FUN_14619c2be(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  FUN_1446f8c06(&local_38,0x400);
  FUN_140ffc744(param_2,&local_38,param_3,0);
  FUN_14619c34a(&local_38);
  *param_1 = local_38;
  *(undefined4 *)(param_1 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_30._4_4_;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14619c34a FUN_14619c34a body=13 status=ok
// SIG undefined FUN_14619c34a(void)

void FUN_14619c34a(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  iVar3 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 0xc) == iVar3) {
    return;
  }
  if (iVar3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar4 = (longlong)iVar3 * 2;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar6 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
        }
        else {
          if ((uVar6 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar6 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar7 = 0x32 - (ulonglong)bVar2;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_1446f8c6f;
              lVar1 = uVar5 + 1 + uVar7;
              uVar7 = uVar7 - 1;
            } while (lVar1 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar6 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,2);
      }
    }
LAB_1446f8c6f:
    uVar6 = 0x7fffffff;
    if (iVar3 <= (int)(uVar4 >> 1)) {
      uVar6 = uVar4 >> 1 & 0xffffffff;
    }
  }
  if ((int)uVar6 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar6;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar6,2,2);
  }
  return;
}



// FUNCTION 14619c358 FUN_14619c358 body=55 status=ok
// SIG undefined FUN_14619c358(void)

void FUN_14619c358(longlong *param_1)

{
  FUN_14619c390(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14619c390 FUN_14619c390 body=409 status=ok
// SIG undefined FUN_14619c390(void)

void FUN_14619c390(longlong *param_1,int param_2)

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
      if (*(longlong *)(lVar2 + 0x10 + lVar4 * 0x28) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + lVar4 * 0x28) != 0) {
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
    FUN_140549ad6(param_1,param_2);
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



// FUNCTION 14619c52a FUN_14619c52a body=55 status=ok
// SIG undefined FUN_14619c52a(void)

void FUN_14619c52a(longlong *param_1)

{
  FUN_14619c562(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14619c562 FUN_14619c562 body=409 status=ok
// SIG undefined FUN_14619c562(void)

void FUN_14619c562(longlong *param_1,int param_2)

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
      if (*(longlong *)(lVar2 + 0x10 + lVar4 * 0x28) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + lVar4 * 0x28) != 0) {
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
    FUN_140549ad6(param_1,param_2);
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



// FUNCTION 14619c6fc FUN_14619c6fc body=40 status=ok
// SIG undefined FUN_14619c6fc(void)

undefined8 FUN_14619c6fc(undefined8 param_1,int param_2)

{
  FUN_14619c724();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14619c724 FUN_14619c724 body=425 status=ok
// SIG undefined FUN_14619c724(void)

void FUN_14619c724(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14aec9910;
  param_1[5] = &PTR_FUN_14aec9c50;
  if (param_1[0x38] != 0) {
    plVar3 = param_1 + 0x3c;
    if ((longlong *)param_1[0x3a] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x3a];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x30] != 0) {
    plVar3 = param_1 + 0x34;
    if ((longlong *)param_1[0x32] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x32];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x28] != 0) {
    plVar3 = param_1 + 0x2c;
    if ((longlong *)param_1[0x2a] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x2a];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x20] != 0) {
    plVar3 = param_1 + 0x24;
    if ((longlong *)param_1[0x22] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x22];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = (longlong *)param_1[0x1e];
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
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14619c8d8 FUN_14619c8d8 body=454 status=ok
// SIG undefined FUN_14619c8d8(void)

undefined8 * FUN_14619c8d8(undefined8 *param_1)

{
  undefined1 auStack_1b8 [40];
  undefined1 local_190 [296];
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_1400ead26();
  *param_1 = &PTR_FUN_14a546960;
  param_1[5] = &PTR_FUN_14a546f80;
  param_1[6] = &PTR_LAB_14a546fc0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0x43fa0000;
  *(undefined2 *)(param_1 + 0x5b) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x2da) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2dc) = 0x3f80000040000000;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0x3f800000;
  local_190[0] = DAT_14c96b238;
  local_68 = 0;
  local_60 = 0x400000000;
  local_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  FUN_1403d040a(param_1 + 0x5f);
  FUN_1447fa21a(local_190);
  *(ushort *)(param_1 + 99) = *(ushort *)(param_1 + 99) & 0xfe00;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x354) = 0;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  memset(param_1 + 0x6e,0,0x100);
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x374) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x414) = 0xffffffff;
  memset(param_1 + 0x92,0,0x108);
  *(undefined4 *)(param_1 + 0xad) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x49c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x53c) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) | 3;
  *(undefined1 *)(param_1 + 0x5a) = 3;
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) | 8;
  if ((local_30 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14619caa0 FUN_14619caa0 body=141 status=ok
// SIG undefined FUN_14619caa0(void)

void FUN_14619caa0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    lVar1 = FUN_140ebc504();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_30 = 0;
      FUN_14485c47a(&local_30,param_2);
      local_28 = &local_30;
      FUN_14619cb2e(param_1 + 0x2678);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14619cb2e FUN_14619cb2e body=269 status=ok
// SIG undefined FUN_14619cb2e(void)

void FUN_14619cb2e(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  
  iVar1 = (int)param_1[1];
  lVar13 = (longlong)iVar1;
  if (lVar13 != 0) {
    lVar2 = *param_1;
    bVar5 = FUN_14619cc3c(lVar2,*param_2);
    lVar9 = lVar2 + 8;
    iVar7 = 0;
    iVar11 = 0;
    do {
      lVar12 = (longlong)iVar11;
      iVar3 = iVar11 + 1;
      if (iVar11 + 1 < iVar1) {
        iVar3 = iVar1;
      }
      lVar8 = lVar9 + lVar12 * 8;
      lVar10 = lVar12;
      iVar14 = iVar11;
      do {
        lVar10 = lVar10 + 1;
        iVar4 = iVar3;
        if (lVar13 <= lVar10) break;
        bVar6 = FUN_14619cc3c(lVar8,*param_2,iVar14,lVar10,lVar9,iVar14,lVar8);
        iVar11 = iVar11 + 1;
        lVar8 = lVar8 + 8;
        iVar4 = iVar11;
      } while ((bVar5 & 1) == bVar6);
      iVar11 = iVar4;
      if ((bVar5 & 1) == 0) {
        if (iVar7 != iVar14) {
          memmove((void *)(lVar2 + (longlong)iVar7 * 8),(void *)(lVar2 + lVar12 * 8),
                  (longlong)(iVar11 - iVar14) << 3);
        }
        iVar7 = iVar7 + (iVar11 - iVar14);
      }
      bVar5 = bVar5 ^ 1;
    } while (lVar10 < lVar13);
    *(int *)(param_1 + 1) = iVar7;
  }
  return;
}



// FUNCTION 14619cc3c FUN_14619cc3c body=55 status=ok
// SIG undefined FUN_14619cc3c(void)

ulonglong FUN_14619cc3c(int *param_1,int *param_2)

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



// FUNCTION 14619cc74 FUN_14619cc74 body=346 status=ok
// SIG undefined FUN_14619cc74(void)

undefined4 * FUN_14619cc74(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  undefined4 local_58 [2];
  undefined8 *local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14619ce36(param_1,local_58);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  *(undefined4 *)(local_50 + 1) = *(undefined4 *)(puVar1 + 1);
  *local_50 = *puVar1;
  *(undefined8 *)((longlong)local_50 + 0xc) = *puVar2;
  *(undefined2 *)((longlong)local_50 + 0x14) = *(undefined2 *)(puVar2 + 1);
  *(undefined4 *)(local_50 + 3) = 0xffffffff;
  local_5c = local_58[0];
  local_40 = *(undefined4 *)(local_50 + 1);
  local_48 = *local_50;
  uVar9 = 0x1505;
  lVar6 = 0;
  do {
    uVar9 = (uint)*(byte *)((longlong)&local_48 + lVar6) + uVar9 * 0x21;
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0xc);
  cVar4 = FUN_14619cdd0(param_1,uVar9,local_50,&local_5c);
  uVar3 = local_5c;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar5) {
      uVar7 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_50 + 0x1c) = uVar9;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 3) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_5c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_14619cf1c(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14619cdd0 FUN_14619cdd0 body=102 status=ok
// SIG undefined FUN_14619cdd0(void)

undefined8 FUN_14619cdd0(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar8 = FUN_14015af38(), iVar8 != -1)) {
    lVar3 = *param_1;
    lVar9 = (longlong)iVar8 * 0x20;
    uVar4 = *param_3;
    uVar5 = param_3[1];
    uVar6 = param_3[2];
    uVar7 = param_3[3];
    uVar2 = param_3[4];
    *(undefined2 *)(lVar3 + 0x14 + lVar9) = *(undefined2 *)(param_3 + 5);
    *(undefined4 *)(lVar3 + 0x10 + lVar9) = uVar2;
    puVar1 = (undefined4 *)(lVar3 + lVar9);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
    FUN_147081582(param_1,*param_4);
    *param_4 = iVar8;
    return 1;
  }
  return 0;
}



// FUNCTION 14619ce36 FUN_14619ce36 body=230 status=ok
// SIG undefined FUN_14619ce36(void)

int * FUN_14619ce36(longlong *param_1,int *param_2)

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
      FUN_1405b363e(param_1,iVar6);
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



// FUNCTION 14619cf1c FUN_14619cf1c body=487 status=ok
// SIG undefined FUN_14619cf1c(void)

void FUN_14619cf1c(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
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
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
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
        lVar10 = (longlong)iVar5 * 0x20;
        local_40 = (longlong *)CONCAT44(local_40._4_4_,*(undefined4 *)(lVar3 + 8 + lVar10));
        local_48 = *(undefined8 *)(lVar3 + lVar10);
        iVar7 = 0x1505;
        lVar11 = 0;
        do {
          iVar7 = (uint)*(byte *)((longlong)&local_48 + lVar11) + iVar7 * 0x21;
          lVar11 = lVar11 + 1;
        } while (lVar11 != 0xc);
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar3 + lVar10 + 0x1c) = iVar7;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + lVar10 + 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 14619d104 FUN_14619d104 body=419 status=ok
// SIG undefined FUN_14619d104(void)

void FUN_14619d104(longlong param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar8 = *(longlong *)(param_1 + 0x2c0);
  if (lVar8 != 0) {
    *(undefined8 *)(param_1 + 0x2c0) = 0;
    LOCK();
    puVar1 = (uint *)(lVar8 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  puVar5 = *(undefined8 **)(param_1 + 0x188);
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x188) = 0;
    LOCK();
    piVar2 = (int *)(puVar5 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  if (*(char *)(param_1 + 0x2cf) == '\x01') {
    *(undefined1 *)(param_1 + 0x2cf) = 0;
    puVar5 = *(undefined8 **)(param_1 + 0x270);
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x270) = 0;
      LOCK();
      piVar2 = (int *)(puVar5 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
    puVar5 = *(undefined8 **)(param_1 + 0x278);
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x278) = 0;
      LOCK();
      piVar2 = (int *)(puVar5 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
    lVar8 = *(longlong *)(param_1 + 0x280);
    iVar4 = *(int *)(param_1 + 0x288);
    if ((longlong)iVar4 == 0) {
      uVar7 = 0;
    }
    else {
      lVar9 = 0;
      do {
        lVar6 = *(longlong *)(lVar8 + lVar9);
        if (lVar6 != 0) {
          FUN_14003821a(lVar6);
          FUN_1400020a8(lVar6);
        }
        *(undefined8 *)(lVar8 + lVar9) = 0;
        lVar9 = lVar9 + 0x20;
      } while ((longlong)iVar4 * 0x20 != lVar9);
      uVar7 = *(undefined4 *)(param_1 + 0x288);
      lVar8 = *(longlong *)(param_1 + 0x280);
    }
    FUN_145dfc6a5(lVar8,uVar7);
    *(undefined4 *)(param_1 + 0x288) = 0;
    if (*(int *)(param_1 + 0x28c) != 0) {
      FUN_14619d2a8(param_1 + 0x280);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x268);
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x268) = 0;
      LOCK();
      piVar2 = (int *)(puVar5 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014619d24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar5)(puVar5,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14619d2a8 FUN_14619d2a8 body=48 status=ok
// SIG undefined FUN_14619d2a8(void)

void FUN_14619d2a8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 14619d2e0 FUN_14619d2e0 body=458 status=ok
// SIG undefined FUN_14619d2e0(void)

undefined8 * FUN_14619d2e0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_78 [44];
  undefined8 local_4c;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140e3eac6();
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
  *param_1 = &PTR_FUN_14ad6e2b0;
  *(undefined4 *)(param_1 + 6) = 0;
  local_4c = 0;
  local_44 = 0x42c80000;
  param_1[7] = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_1 + 8) = 1;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  uVar3 = FUN_144830b78((longlong)param_1 + 0x4c,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar3;
  param_1[7] = &PTR_FUN_14ad6b060;
  param_1[10] = DAT_14c846330;
  *(undefined4 *)(param_1 + 0xb) = DAT_14c846338;
  *(undefined8 *)((longlong)param_1 + 0x5c) = DAT_14c846330;
  *(undefined4 *)((longlong)param_1 + 100) = DAT_14c846338;
  FUN_1459ac994(param_1 + 7,&local_4c);
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  param_1[0xe] = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_1 + 0xf) = 1;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  uVar3 = FUN_144830b78((longlong)param_1 + 0x84,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  param_1[0xe] = &PTR_FUN_14ad6ad70;
  *(undefined4 *)(param_1 + 0xf) = 1;
  param_1[0x11] = 0x43fa000043fa0000;
  uVar2 = DAT_14c846500._4_4_;
  uVar1 = (undefined4)DAT_14c846500;
  uVar3 = DAT_14c8464f8._4_4_;
  *(undefined4 *)(param_1 + 0x12) = (undefined4)DAT_14c8464f8;
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar3;
  *(undefined4 *)(param_1 + 0x13) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar2;
  param_1[0x14] = DAT_14c846508;
  param_1[0x15] = 0x42340000;
  param_1[0x16] = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_1 + 0x17) = 1;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  uVar3 = FUN_144830b78((longlong)param_1 + 0xc4,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_1 + 0xc4) = uVar3;
  param_1[0x16] = &PTR_FUN_14ad6ad70;
  *(undefined4 *)(param_1 + 0x17) = 1;
  param_1[0x19] = 0x42c8000042c80000;
  param_1[0x1a] = DAT_14c846330;
  *(undefined4 *)(param_1 + 0x1b) = DAT_14c846338;
  *(undefined1 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1c] = 0x200000000;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14619d4ac FUN_14619d4ac body=171 status=ok
// SIG undefined FUN_14619d4ac(void)

void FUN_14619d4ac(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (((*(longlong *)(param_1 + 0x20) != 0) &&
      (cVar4 = FUN_144729dda((undefined8 *)(param_1 + 0x18)), cVar4 != '\0')) &&
     (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x20))(), cVar4 != '\0')) {
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))();
    FUN_140d714a4(uVar5);
    iVar1 = *(int *)(param_1 + 0x290);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x288);
      lVar6 = 0;
      do {
        lVar3 = *(longlong *)(lVar2 + lVar6);
        if (lVar3 != 0) {
          *(undefined1 *)(lVar3 + 0x58) = 1;
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar1 * 8 != lVar6);
    }
    FUN_14619d558(param_1);
  }
  if (*(int *)(param_1 + 0x34) < 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    FUN_14882c108(param_1 + 0x28,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 14619d558 FUN_14619d558 body=413 status=ok
// SIG undefined FUN_14619d558(void)

void FUN_14619d558(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  bool local_41;
  
  if ((*(longlong *)(param_1 + 0x20) != 0) && (cVar4 = FUN_144729dda(param_1 + 0x18), cVar4 != '\0')
     ) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x20))();
  }
  iVar8 = *(int *)(param_1 + 0x290);
  if ((longlong)iVar8 == 0) {
    bVar6 = false;
    uVar7 = 0;
  }
  else {
    lVar12 = *(longlong *)(param_1 + 0x288);
    lVar13 = 0;
    bVar6 = false;
    do {
      lVar5 = *(longlong *)(lVar12 + lVar13);
      if (lVar5 != 0) {
        if (*(char *)(lVar5 + 0x58) == '\0') {
          cVar4 = FUN_144729dda(lVar5 + 0x30);
          if (cVar4 != '\0') goto LAB_14619d600;
          lVar5 = *(longlong *)(lVar12 + lVar13);
        }
        FUN_14882f4d2(lVar5);
        bVar6 = true;
        if (*(longlong *)(lVar12 + lVar13) != 0) {
          if (DAT_14c872a72 == '\0') {
            FUN_140113f48();
          }
          *(undefined8 *)(lVar12 + lVar13) = 0;
        }
      }
LAB_14619d600:
      lVar13 = lVar13 + 8;
    } while ((longlong)iVar8 * 8 != lVar13);
    uVar1 = *(uint *)(param_1 + 0x290);
    lVar12 = (longlong)(int)uVar1;
    uVar7 = 0;
    if (lVar12 != 0) {
      plVar2 = *(longlong **)(param_1 + 0x288);
      uVar9 = 0;
      local_41 = *plVar2 == 0;
      do {
        lVar5 = (longlong)(int)uVar9;
        uVar10 = uVar9;
        lVar13 = lVar5;
        uVar3 = uVar9 + 1;
        if ((int)(uVar9 + 1) < (int)uVar1) {
          uVar3 = uVar1;
        }
        do {
          lVar13 = lVar13 + 1;
          uVar11 = uVar3;
          if (lVar12 <= lVar13) break;
          uVar11 = uVar10 + 1;
          uVar10 = uVar11;
        } while (local_41 == (plVar2[lVar13] == 0));
        iVar8 = uVar11 - uVar9;
        if (local_41 == false) {
          if (uVar7 != uVar9) {
            memmove(plVar2 + (int)uVar7,plVar2 + lVar5,(longlong)iVar8 << 3);
          }
          uVar7 = uVar7 + iVar8;
        }
        else {
          FUN_145c97e16(plVar2 + lVar5,iVar8);
        }
        uVar9 = uVar11;
        local_41 = (bool)(local_41 ^ 1);
      } while (lVar13 < lVar12);
      *(uint *)(param_1 + 0x290) = uVar7;
      uVar7 = (uint)((int)uVar7 < (int)uVar1);
    }
  }
  if ((!bVar6) && ((char)uVar7 == '\0')) {
    return;
  }
  FUN_14654bc7a(param_1);
  return;
}



// FUNCTION 14619d6f5 FUN_14619d6f5 body=30 status=ok
// SIG undefined FUN_14619d6f5(void)

void FUN_14619d6f5(longlong param_1)

{
  FUN_14619d714(param_1 + 0x10);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14619d714 FUN_14619d714 body=951 status=ok
// SIG undefined FUN_14619d714(void)

void FUN_14619d714(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140628abc(param_1,3);
  if (((param_1[0xf] != 0) && (param_1[0x10] != 0)) && (0 < *(int *)(param_1[0x10] + 8))) {
    FUN_1401cb356();
    local_30 = param_1[0xf];
    local_28 = param_1[0x10];
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 0xc) = *(int *)(local_28 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_30);
    plVar2 = (longlong *)param_1[0x10];
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
  }
  if (((param_1[0x11] != 0) && (param_1[0x12] != 0)) && (0 < *(int *)(param_1[0x12] + 8))) {
    FUN_1401cb356();
    local_40 = param_1[0x11];
    local_38 = param_1[0x12];
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 0xc) = *(int *)(local_38 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_40);
    plVar2 = (longlong *)param_1[0x12];
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
  }
  if (param_1[0x15] != 0) {
    lVar5 = FUN_1411c1a08();
    if (param_1[0x15] != 0) {
      FUN_14480f766(lVar5 + 0x90);
    }
    param_1[0x15] = 0;
  }
  cVar4 = FUN_144729dda((longlong)param_1 + 100);
  if (cVar4 != '\0') {
    lVar5 = FUN_14479d2ce((longlong)param_1 + 100);
    if (*(longlong *)(lVar5 + 0x30) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(*(longlong *)(lVar5 + 0x30) + 0x360);
    }
    lVar5 = FUN_141221176(uVar6);
    if ((lVar5 != 0) && (*(int *)(lVar5 + 0x78) != 0)) {
      puVar3 = *(undefined8 **)(lVar5 + 0x70);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,0);
        FUN_1446efa72((longlong *)(lVar5 + 0x70),0,0,0x10);
        *(undefined4 *)(lVar5 + 0x78) = 0;
      }
    }
  }
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  if ((char)param_1[0x27] == '\x01') {
    *(undefined1 *)(param_1 + 0x27) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x11c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x11c) = 0;
  }
  *(undefined4 *)(param_1 + 0x22) = 0;
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_14619dadc(param_1 + 0x19);
  plVar2 = (longlong *)param_1[0x14];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = (longlong *)param_1[0x12];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = (longlong *)param_1[0x10];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_144760e21(param_1[9],(int)param_1[10]);
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[6],(int)param_1[7]);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[3],(int)param_1[4]);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
}



// FUNCTION 14619dadc FUN_14619dadc body=55 status=ok
// SIG undefined FUN_14619dadc(void)

void FUN_14619dadc(longlong *param_1)

{
  FUN_1459ff716(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14619db14 FUN_14619db14 body=103 status=ok
// SIG undefined FUN_14619db14(void)

ulonglong FUN_14619db14(longlong param_1)

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
LAB_14619db5e:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14619db5e;
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



// FUNCTION 14619db82 FUN_14619db82 body=169 status=ok
// SIG undefined FUN_14619db82(void)

bool FUN_14619db82(longlong param_1,undefined8 param_2,undefined4 param_3)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
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



// FUNCTION 14619dc2c FUN_14619dc2c body=297 status=ok
// SIG undefined FUN_14619dc2c(void)

void FUN_14619dc2c(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  PSRWLOCK local_48;
  int local_40;
  longlong local_38;
  undefined1 local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_21 = param_3;
  lVar3 = FUN_1400f3ad8(param_1 + 0x44);
  if (lVar3 != 0) {
    lVar4 = FUN_144a5dd5e();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      lVar4 = FUN_1409f28d0(param_2);
      if (lVar3 == lVar4) {
        FUN_1402815f4(param_1,&local_58);
        lVar3 = *(longlong *)(local_58 + 0x3e0);
        local_48 = (PSRWLOCK)(lVar3 + 0xc0);
        local_40 = 1;
        AcquireSRWLockExclusive(local_48);
        *(int *)(lVar3 + 0xb8) = *(int *)(lVar3 + 0xb8) + 1;
        local_30 = 1;
        local_38 = lVar3;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_50 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar2 = (int *)((longlong)local_50 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_50 + 0x10))(local_50);
            }
          }
        }
        uVar5 = FUN_1405c673d();
        FUN_1458e1c14(param_1,&local_48,uVar5,&local_21);
        if (local_40 == 0) {
          ReleaseSRWLockShared(local_48);
        }
        else {
          ReleaseSRWLockExclusive(local_48);
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



// FUNCTION 14619dd5e FUN_14619dd5e body=459 status=ok
// SIG undefined FUN_14619dd5e(void)

undefined8 * FUN_14619dd5e(undefined8 *param_1)

{
  wchar_t *pwVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140fe66fa();
  *param_1 = &PTR_FUN_14ba17db0;
  param_1[5] = &PTR_FUN_14ba18170;
  param_1[0x13] = &PTR_FUN_14ba18190;
  param_1[0x2a] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x2b) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x15c) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x164) = uVar4;
  param_1[0x2d] = DAT_14c8464f0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0x3ff0000000000000;
  *(undefined1 *)((longlong)param_1 + 0x191) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  FUN_145b2578e(param_1 + 0x42);
  *(undefined4 *)(param_1 + 0xa7) = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  *(undefined4 *)(param_1 + 0xb0) = 1;
  *(undefined2 *)(param_1 + 0xab) = 0;
  local_50 = L"ToolName";
  local_48 = 8;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"UDrawPolygonTool";
  local_48 = 0x10;
  FUN_1446e940c(local_58,&local_50);
  FUN_140208bae(&local_50,local_58,local_54,L"Polygon Extrude");
  pwVar1 = (wchar_t *)param_1[0x11];
  if (pwVar1 != local_50) {
    param_1[0x11] = local_50;
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 8))();
    }
    if (pwVar1 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)pwVar1 + 0x10))(pwVar1);
    }
  }
  *(undefined4 *)(param_1 + 0x12) = local_48;
  if (local_50 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_50 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14619df2a FUN_14619df2a body=40 status=ok
// SIG undefined FUN_14619df2a(void)

undefined8 FUN_14619df2a(undefined8 param_1,int param_2)

{
  FUN_141609ad4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14619df52 FUN_14619df52 body=40 status=ok
// SIG undefined FUN_14619df52(void)

undefined8 FUN_14619df52(undefined8 param_1,int param_2)

{
  FUN_14619df7a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14619df7a FUN_14619df7a body=430 status=ok
// SIG undefined FUN_14619df7a(void)

void FUN_14619df7a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a567a60;
  param_1[6] = &PTR_FUN_14a567d20;
  FUN_144760e21(param_1[0x22],*(undefined4 *)(param_1 + 0x23));
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x1d],*(undefined4 *)(param_1 + 0x1e));
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x13],*(undefined4 *)(param_1 + 0x14));
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 14619e128 FUN_14619e128 body=116 status=ok
// SIG undefined FUN_14619e128(void)

undefined8 FUN_14619e128(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = FUN_14619e1b0();
  if (lVar2 != 0) {
    local_28 = param_2;
    iVar1 = FUN_14619e204(param_1 + 0x3a0);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14619e1b0 FUN_14619e1b0 body=83 status=ok
// SIG undefined FUN_14619e1b0(void)

longlong FUN_14619e1b0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x3b0);
  if (lVar1 == 0) {
    lVar1 = FUN_1447210f0(param_1);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_14011c706(lVar1);
    }
    FUN_14485c47a(param_1 + 0x3b0,lVar1);
  }
  return lVar1;
}



// FUNCTION 14619e204 FUN_14619e204 body=252 status=ok
// SIG undefined FUN_14619e204(void)

int FUN_14619e204(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  int iVar13;
  
  iVar7 = (int)param_1[1];
  lVar8 = (longlong)iVar7;
  if (lVar8 == 0) {
    iVar7 = 0;
  }
  else {
    plVar1 = (longlong *)*param_1;
    iVar13 = 0;
    bVar12 = *plVar1 == *(longlong *)*param_2;
    iVar3 = 0;
    do {
      lVar10 = (longlong)iVar3;
      iVar6 = iVar3 + 1;
      if (iVar3 + 1 < iVar7) {
        iVar6 = iVar7;
      }
      plVar9 = plVar1 + lVar10 * 2 + 2;
      iVar5 = iVar3;
      lVar11 = lVar10;
      do {
        lVar11 = lVar11 + 1;
        iVar4 = iVar6;
        if (lVar8 <= lVar11) break;
        lVar2 = *plVar9;
        iVar5 = iVar5 + 1;
        plVar9 = plVar9 + 2;
        iVar4 = iVar5;
      } while (bVar12 == (lVar2 == *(longlong *)*param_2));
      iVar6 = iVar4 - iVar3;
      if (bVar12 == false) {
        if (iVar13 != iVar3) {
          memmove(plVar1 + (longlong)iVar13 * 2,plVar1 + lVar10 * 2,(longlong)iVar6 << 4);
        }
        iVar13 = iVar13 + iVar6;
      }
      else {
        FUN_145ae14bd(plVar1 + lVar10 * 2,iVar6);
      }
      bVar12 = (bool)(bVar12 ^ 1);
      iVar3 = iVar4;
    } while (lVar11 < lVar8);
    *(int *)(param_1 + 1) = iVar13;
    iVar7 = iVar7 - iVar13;
  }
  return iVar7;
}



// FUNCTION 14619e308 FUN_14619e308 body=462 status=ok
// SIG undefined FUN_14619e308(void)

undefined8 * FUN_14619e308(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_1412c18ae();
  *param_1 = &PTR_FUN_14bd6ba20;
  param_1[5] = &PTR_FUN_14bd6bdc0;
  param_1[0x13] = &PTR_FUN_14bd6bde0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x33) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x19c) = uVar1;
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = uVar3;
  param_1[0x35] = DAT_14c8464f0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0x3ff0000000000000;
  param_1[0x3d] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  FUN_141300fc0(param_1 + 0x3e);
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0x7fefffffffffffff;
  param_1[0x65] = 0x7fefffffffffffff;
  param_1[0x66] = 0x7fefffffffffffff;
  param_1[0x67] = 0xffefffffffffffff;
  param_1[0x68] = 0xffefffffffffffff;
  param_1[0x69] = 0xffefffffffffffff;
  *(undefined2 *)(param_1 + 0x6a) = 0x100;
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3ac) = 0;
  param_1[0x77] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  param_1[0x7d] = 0;
  *(undefined4 *)(param_1 + 0x7e) = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3f4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3fc) = 0;
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0;
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  *(undefined8 *)((longlong)param_1 + 0x444) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44c) = 0;
  param_1[0x8b] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  param_1[0x8d] = 0;
  return param_1;
}



// FUNCTION 14619e4d6 FUN_14619e4d6 body=68 status=ok
// SIG undefined FUN_14619e4d6(void)

void FUN_14619e4d6(undefined8 param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x218);
  memset(_Dst,0,0x218);
  FUN_14619e51a(_Dst);
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 14619e51a FUN_14619e51a body=402 status=ok
// SIG undefined FUN_14619e51a(void)

undefined8 * FUN_14619e51a(undefined8 *param_1)

{
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b8a1270;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  FUN_1400b22c2(param_1 + 0x19,&DAT_149e02088);
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  FUN_1403de7ba(param_1 + 0x2a,&DAT_14caa8558);
  *(undefined4 *)(param_1 + 0x2e) = 0xffffffff;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x3c] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  FUN_1408226d0(&DAT_14cbb7ad0,local_50,1);
  FUN_144a6c01e(local_50,param_1 + 0x3d);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  *(undefined1 *)(param_1 + 0x3f) = 0;
  FUN_1400b22c2(param_1 + 0x40,&DAT_149e02088);
  *(undefined4 *)(param_1 + 0x42) = 0;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14619e6ae FUN_14619e6ae body=877 status=ok
// SIG undefined FUN_14619e6ae(void)

void FUN_14619e6ae(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  wchar_t *local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14619ea1c();
  local_30 = 0;
  local_40 = 3;
  local_38 = 1;
  local_48 = 0;
  local_58 = 2;
  local_50 = 1;
  local_68 = L"bIsGliding";
  local_60 = (undefined1 *)0x100000011;
  FUN_140c2c993(&local_68,param_2,&local_40);
  local_68 = L"GroundSlamHeightScalar";
  local_60 = &DAT_100000014;
  FUN_140c2c993(&local_68,param_2,&local_58);
  local_68 = L"GroundSlamDamage";
  local_60 = (undefined1 *)0x100000015;
  FUN_140c2c993(&local_68,param_2,&local_58);
  local_68 = L"GroundSlamRange";
  local_60 = (undefined1 *)0x100000016;
  FUN_140c2c993(&local_68,param_2,&local_58);
  local_68 = L"DashSpeed";
  local_60 = &DAT_100000017;
  FUN_140c2c993(&local_68,param_2,&local_58);
  local_68 = L"bIsSlidingDownLadder";
  local_60 = (undefined1 *)0x100000012;
  FUN_140c2c993(&local_68,param_2,&local_40);
  local_68 = L"GlidingAirControl";
  local_60 = &DAT_100000018;
  FUN_140c2c993(&local_68,param_2,&local_58);
  local_68 = L"GlidingSpeed";
  local_60 = (undefined1 *)0x100000019;
  FUN_140c2c993(&local_68,param_2,&local_58);
  local_68 = L"GlidingSpeedBoost";
  local_60 = (undefined1 *)0x10000001a;
  FUN_140c2c993(&local_68,param_2,&local_58);
  local_68 = L"GlidingAcceleration";
  local_60 = (undefined1 *)0x10000001b;
  FUN_140c2c993(&local_68,param_2,&local_58);
  local_68 = L"GlidingDeceleration";
  local_60 = &DAT_10000001c;
  FUN_140c2c993(&local_68,param_2,&local_58);
  local_68 = L"VaultPowerCost_Dash";
  local_60 = (undefined1 *)0x10000001d;
  FUN_140c2c993(&local_68,param_2,&local_58);
  local_68 = L"VaultPowerCost_DoubleJump";
  local_60 = (undefined1 *)0x10000001e;
  FUN_140c2c993(&local_68,param_2,&local_58);
  local_68 = L"VaultPowerCost_Glide";
  local_60 = &DAT_10000001f;
  FUN_140c2c993(&local_68,param_2,&local_58);
  local_68 = L"VaultPowerCost_Grapple";
  local_60 = &DAT_100000020;
  FUN_140c2c993(&local_68,param_2,&local_58);
  local_68 = L"VaultPowerCost_GroundSlam";
  local_60 = (undefined1 *)0x100000021;
  FUN_140c2c993(&local_68,param_2,&local_58);
  local_68 = L"VaultPower_Forgiveness";
  local_60 = (undefined1 *)0x100000022;
  FUN_140c2c993(&local_68,param_2,&local_58);
  local_68 = L"ReplicatedCurrentZipline";
  local_60 = (undefined1 *)0x100000013;
  FUN_140c2c993(&local_68,param_2,&local_40);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14619ea1c FUN_14619ea1c body=726 status=ok
// SIG undefined FUN_14619ea1c(void)

void FUN_14619ea1c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14619ecf4();
  local_40 = 0;
  local_50 = 0;
  local_48 = 1;
  local_58 = 0;
  local_68 = 2;
  local_60 = 1;
  local_70 = 0;
  local_80 = 4;
  local_78 = 1;
  local_88 = 0;
  local_98 = 3;
  local_90 = 1;
  local_a8 = L"MaxGroundSpeedScale";
  local_a0 = &DAT_100000004;
  FUN_140c2c993(&local_a8,param_2,&local_68);
  local_a8 = L"MaxLadderAscendSpeed";
  local_a0 = (undefined1 *)0x100000006;
  FUN_140c2c993(&local_a8,param_2,&local_68);
  local_a8 = L"MaxLadderDescendSpeed";
  local_a0 = &DAT_100000007;
  FUN_140c2c993(&local_a8,param_2,&local_68);
  local_a8 = L"ReplicatedMantleState";
  local_a0 = (undefined1 *)0x100000009;
  FUN_140c2c993(&local_a8,param_2,&local_98);
  local_a8 = L"ReplicatedLadderState";
  local_a0 = (undefined1 *)0x100000005;
  FUN_140c2c993(&local_a8,param_2,&local_98);
  local_a8 = L"ReplicatedSwimmingState";
  local_a0 = &DAT_100000008;
  FUN_140c2c993(&local_a8,param_2,&local_98);
  local_a8 = L"ControlledMoveReplicationData";
  local_a0 = (undefined1 *)0x10000000d;
  FUN_140c2c993(&local_a8,param_2,&local_50);
  local_a8 = L"bIsSprinting";
  local_a0 = &DAT_10000000f;
  FUN_140c2c993(&local_a8,param_2,&local_98);
  local_a8 = L"JumpedCount";
  local_a0 = &DAT_10000000a;
  FUN_140c2c993(&local_a8,param_2,&local_80);
  local_a8 = L"CurrentJump";
  local_a0 = &DAT_10000000b;
  FUN_140c2c993(&local_a8,param_2,&local_98);
  local_a8 = L"bRepInDelayedFall";
  local_a0 = &DAT_10000000c;
  FUN_140c2c993(&local_a8,param_2,&local_98);
  local_a8 = L"MovementGrantedExternallyBits";
  local_a0 = (undefined1 *)0x10000000e;
  FUN_140c2c993(&local_a8,param_2,&local_50);
  local_a8 = L"TurnState";
  local_a0 = &DAT_100000010;
  FUN_140c2c993(&local_a8,param_2,&local_80);
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14619ecf4 FUN_14619ecf4 body=161 status=ok
// SIG undefined FUN_14619ecf4(void)

void FUN_14619ecf4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  wchar_t *local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1412aab56();
  local_28 = 0;
  local_38 = 0;
  local_30 = 1;
  local_48 = L"ReplicatedNavType";
  local_40 = &DAT_100000002;
  FUN_140c2c993(&local_48,param_2,&local_38);
  local_48 = L"MinTurnAngle";
  local_40 = &DAT_100000003;
  FUN_140c2c993(&local_48,param_2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14619ed96 FUN_14619ed96 body=146 status=ok
// SIG undefined FUN_14619ed96(void)

void FUN_14619ed96(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0x1c0,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 6;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x1c0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14619ee29 FUN_14619ee29 body=25 status=ok
// SIG undefined FUN_14619ee29(void)

void FUN_14619ee29(void)

{
  FUN_14619ee42();
  atexit(FUN_142989336);
  return;
}



// FUNCTION 14619ee42 FUN_14619ee42 body=463 status=ok
// SIG undefined FUN_14619ee42(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14619ee42(void)

{
  longlong lVar1;
  undefined1 auStack_c8 [32];
  undefined4 **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined4 *local_88;
  undefined4 local_80;
  undefined4 *local_78;
  undefined4 local_70;
  undefined4 *local_68;
  undefined4 local_60;
  undefined4 *local_58;
  undefined4 local_50;
  undefined4 *local_48;
  undefined4 local_40;
  undefined4 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_88 = (undefined4 *)0x0;
  local_80 = 4;
  FUN_144a06ca8(&local_88,4,0);
  *local_88 = 0;
  local_88[1] = 4;
  local_88[2] = 6;
  local_88[3] = 2;
  local_78 = (undefined4 *)0x0;
  local_70 = 4;
  FUN_144a06ca8(&local_78,4,0);
  *local_78 = 0;
  local_78[1] = 1;
  local_78[2] = 5;
  local_78[3] = 4;
  local_68 = (undefined4 *)0x0;
  local_60 = 4;
  FUN_144a06ca8(&local_68,4,0);
  *local_68 = 0;
  local_68[1] = 2;
  local_68[2] = 3;
  local_68[3] = 1;
  local_58 = (undefined4 *)0x0;
  local_50 = 4;
  FUN_144a06ca8(&local_58,4,0);
  *local_58 = 1;
  local_58[1] = 3;
  local_58[2] = 7;
  local_58[3] = 5;
  local_48 = (undefined4 *)0x0;
  local_40 = 4;
  FUN_144a06ca8(&local_48,4,0);
  *local_48 = 2;
  local_48[1] = 6;
  local_48[2] = 7;
  local_48[3] = 3;
  local_38 = (undefined4 *)0x0;
  local_30 = 4;
  FUN_144a06ca8(&local_38,4,0);
  *local_38 = 4;
  local_38[1] = 5;
  local_38[2] = 7;
  local_38[3] = 6;
  local_a0 = &local_28;
  local_a8 = &local_88;
  FUN_14619f012(&local_98);
  lVar1 = 0x60;
  do {
    if (*(longlong *)((longlong)&local_98 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  DAT_14c992a40 = 0;
  uRam000000014c992a48 = 0;
  DAT_14c992a50 = 0;
  uRam000000014c992a58 = 0;
  DAT_14c992a60 = 0;
  uRam000000014c992a68 = 0;
  DAT_14c992a70 = 0;
  _DAT_14c992a78 = 0;
  DAT_14c992a80 = 0;
  uRam000000014c992a88 = 0;
  FUN_14160ad6a(&DAT_14c992a40,&local_98,8);
  FUN_144716727(local_98,local_90);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


