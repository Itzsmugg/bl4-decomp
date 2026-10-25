// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1493e0cee FUN_1493e0cee body=108 status=ok
// SIG undefined FUN_1493e0cee(void)

undefined8 FUN_1493e0cee(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  int iVar1;
  void *_Dst;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar1 = FUN_1493e09a2(), iVar1 != -1)) {
    _Dst = (void *)((longlong)iVar1 * 0x410 + *param_1);
    FUN_1493e0f52(_Dst);
    memmove(_Dst,param_3,0x400);
    FUN_1493e0ed8(param_1,*param_4);
    *param_4 = iVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 1493e0d5a FUN_1493e0d5a body=190 status=ok
// SIG undefined FUN_1493e0d5a(void)

undefined8 FUN_1493e0d5a(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_438 [32];
  longlong local_418 [2];
  undefined1 local_408 [864];
  char local_a8;
  undefined8 local_98 [12];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_438;
  memset(local_418,0,0x380);
  puVar2 = &DAT_14c846480;
  puVar3 = local_98;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_1493e0e1a(param_2,*param_1,local_418);
  if (local_a8 == '\x01') {
    FUN_1493c6fa6(local_408);
    local_a8 = '\0';
  }
  if (local_418[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_438) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493e0e1a FUN_1493e0e1a body=189 status=ok
// SIG undefined FUN_1493e0e1a(void)

undefined8 * FUN_1493e0e1a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
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
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[4] = 0;
  param_1[4] = *param_3;
  *param_3 = 0;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  cVar1 = *(char *)(param_3 + 0x6e);
  *(char *)(param_1 + 0x72) = cVar1;
  if (cVar1 == '\x01') {
    FUN_1493c7000(param_1 + 6,param_3 + 2);
  }
  puVar4 = param_3 + 0x70;
  puVar5 = param_1 + 0x74;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  return param_1;
}



// FUNCTION 1493e0ed8 FUN_1493e0ed8 body=122 status=ok
// SIG undefined FUN_1493e0ed8(void)

void FUN_1493e0ed8(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x410) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x410) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x410 + 4) = uVar5;
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



// FUNCTION 1493e0f52 FUN_1493e0f52 body=74 status=ok
// SIG undefined FUN_1493e0f52(void)

void FUN_1493e0f52(longlong *param_1)

{
  if ((char)param_1[0x72] == '\x01') {
    FUN_1493c6fa6(param_1 + 6);
    *(undefined1 *)(param_1 + 0x72) = 0;
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1493e0f9c FUN_1493e0f9c body=450 status=ok
// SIG undefined FUN_1493e0f9c(void)

void FUN_1493e0f9c(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
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
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x410;
        iVar6 = FUN_1493494d7(lVar3 + lVar10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x404 + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x400 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
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



// FUNCTION 1493e1160 FUN_1493e1160 body=91 status=ok
// SIG undefined FUN_1493e1160(void)

longlong FUN_1493e1160(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 0x360) == '\x01') {
      if (*(char *)(param_1 + 0x360) != '\0') {
        FUN_1493c6fa6(param_1);
      }
      FUN_1493c7000(param_1,param_2);
      uVar1 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x360) == '\0') {
        return param_1;
      }
      FUN_1493c6fa6(param_1);
      uVar1 = 0;
    }
    *(undefined1 *)(param_1 + 0x360) = uVar1;
  }
  return param_1;
}



// FUNCTION 1493e11bc FUN_1493e11bc body=122 status=ok
// SIG undefined FUN_1493e11bc(void)

longlong FUN_1493e11bc(longlong param_1,longlong param_2)

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
    FUN_1493e1236(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1493e1236 FUN_1493e1236 body=230 status=ok
// SIG undefined FUN_1493e1236(void)

undefined8 * FUN_1493e1236(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1493e131c(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_145a5dc92(param_1);
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
          FUN_1493e147e(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 0x100) = *(undefined8 *)(puVar4 + 0x100);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0x104;
        puVar6 = puVar6 + 0x104;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 1493e131c FUN_1493e131c body=351 status=ok
// SIG undefined FUN_1493e131c(void)

void FUN_1493e131c(longlong *param_1,int param_2)

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
      FUN_1493e0f52((longlong)iStack_54 * 0x410 + *local_70);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_146012ade(param_1,param_2);
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



// FUNCTION 1493e147e FUN_1493e147e body=111 status=ok
// SIG undefined FUN_1493e147e(void)

undefined8 * FUN_1493e147e(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  FUN_1493e14ee(param_1 + 4,param_2 + 4);
  return param_1;
}



// FUNCTION 1493e14ee FUN_1493e14ee body=140 status=ok
// SIG undefined FUN_1493e14ee(void)

undefined8 * FUN_1493e14ee(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
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
  cVar1 = *(char *)(param_2 + 0x6e);
  *(char *)(param_1 + 0x6e) = cVar1;
  if (cVar1 == '\x01') {
    FUN_1493c70d2(param_1 + 2,param_2 + 2);
  }
  puVar4 = param_2 + 0x70;
  puVar5 = param_1 + 0x70;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  return param_1;
}



// FUNCTION 1493e157a FUN_1493e157a body=54 status=ok
// SIG undefined FUN_1493e157a(void)

void FUN_1493e157a(longlong *param_1)

{
  FUN_147d5a2de(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1493e15b0 FUN_1493e15b0 body=192 status=ok
// SIG undefined FUN_1493e15b0(void)

void FUN_1493e15b0(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  
  uVar2 = 1;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar3 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) +
                    ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uVar3 << 0x13 | uVar3) +
                    (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar5 != -1) {
      lVar1 = 0;
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar5 * 0x18);
        if (*plVar4 == param_3) {
          if ((plVar4 + 1 == (longlong *)0x0 || plVar4 == (longlong *)0x0) ||
             (lVar1 = plVar4[1], *(int *)(lVar1 + 8) != 4)) goto LAB_1493e15c3;
          uVar2 = *(undefined4 *)(lVar1 + 0xc);
          break;
        }
        iVar5 = (int)plVar4[2];
      } while (iVar5 != -1);
      goto LAB_1493e15c5;
    }
  }
LAB_1493e15c3:
  lVar1 = 0;
LAB_1493e15c5:
  *param_2 = lVar1;
  *(undefined4 *)(param_2 + 1) = uVar2;
  return;
}



// FUNCTION 1493e1670 FUN_1493e1670 body=54 status=ok
// SIG undefined FUN_1493e1670(void)

void FUN_1493e1670(longlong *param_1)

{
  FUN_1493e131c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1493e16a6 FUN_1493e16a6 body=62 status=ok
// SIG undefined FUN_1493e16a6(void)

undefined8 * FUN_1493e16a6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bcb3bb0;
  if (*(char *)(param_1 + 6) == '\x01') {
    *(undefined1 *)(param_1 + 6) = 0;
  }
  FUN_14152e1c8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493e16e4 FUN_1493e16e4 body=62 status=ok
// SIG undefined FUN_1493e16e4(void)

undefined8 * FUN_1493e16e4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bcb3bb0;
  if (*(char *)(param_1 + 6) == '\x01') {
    *(undefined1 *)(param_1 + 6) = 0;
  }
  FUN_14152e1c8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493e1722 FUN_1493e1722 body=87 status=ok
// SIG undefined FUN_1493e1722(void)

void FUN_1493e1722(longlong *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  pcVar1 = (code *)*param_1;
  if (pcVar1 != (code *)0x0) {
    plVar3 = (longlong *)param_1[2];
    if ((longlong *)param_1[2] == (longlong *)0x0) {
      plVar3 = param_1 + 4;
    }
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(uVar2);
    if (*param_1 != 0) {
      plVar3 = param_1 + 4;
      if ((longlong *)param_1[2] != (longlong *)0x0) {
        plVar3 = (longlong *)param_1[2];
      }
                    /* WARNING: Could not recover jumptable at 0x0001493e176c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))(plVar3);
      return;
    }
  }
  return;
}



// FUNCTION 1493e17a2 FUN_1493e17a2 body=12 status=ok
// SIG undefined FUN_1493e17a2(void)

void FUN_1493e17a2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001493e17ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1493e17ae FUN_1493e17ae body=29 status=ok
// SIG undefined FUN_1493e17ae(void)

undefined8 FUN_1493e17ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493e17cc FUN_1493e17cc body=110 status=ok
// SIG undefined FUN_1493e17cc(void)

void FUN_1493e17cc(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  FUN_1493e183a(param_1 + 2,*(undefined4 *)(*param_1 + 8));
  lVar4 = *param_1;
  if (0 < *(int *)(lVar4 + 8)) {
    iVar3 = 0;
    do {
      iVar1 = (int)param_1[3];
      *(uint *)(param_1 + 3) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0x1c) < iVar1 + 1U) {
        FUN_1493e18c4(param_1 + 2,iVar1);
      }
      lVar2 = param_1[2];
      *(longlong *)(lVar2 + (longlong)iVar1 * 0x10) = lVar4;
      *(int *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = iVar3;
      iVar3 = iVar3 + 1;
      lVar4 = *param_1;
    } while (iVar3 < *(int *)(lVar4 + 8));
  }
  return;
}



// FUNCTION 1493e183a FUN_1493e183a body=41 status=ok
// SIG undefined FUN_1493e183a(void)

void FUN_1493e183a(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_1493e1864();
  return;
}



// FUNCTION 1493e1864 FUN_1493e1864 body=95 status=ok
// SIG undefined FUN_1493e1864(void)

void FUN_1493e1864(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 1493e18c4 FUN_1493e18c4 body=132 status=ok
// SIG undefined FUN_1493e18c4(void)

void FUN_1493e18c4(longlong param_1,int param_2)

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



// FUNCTION 1493e194a FUN_1493e194a body=45 status=ok
// SIG undefined FUN_1493e194a(void)

void FUN_1493e194a(longlong *param_1,int param_2)

{
  if (-1 < param_2) {
    if (*(int *)(*param_1 + 0xc) < param_2) {
      FUN_146406200();
    }
    FUN_1493e17cc(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1493e1978 FUN_1493e1978 body=367 status=ok
// SIG undefined FUN_1493e1978(void)

void FUN_1493e1978(longlong *param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined8 local_68;
  undefined **local_58;
  undefined8 *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar6 = param_3;
  if (param_3 == 0) {
    FUN_14003fbd6();
    lVar6 = DAT_14caea080;
  }
  local_68 = 0;
  local_58 = &PTR_LAB_14bcb8ed0;
  local_78 = &LAB_1493e1d08;
  local_50 = param_2;
  plVar2 = (longlong *)FUN_1493e1b36(*param_1);
  if (plVar2 == (longlong *)0x0) {
    if (0 < (longlong)*(int *)param_1[4]) {
      lVar4 = *(longlong *)param_1[3];
      lVar5 = 8;
      lVar3 = 0;
      do {
        if (*(int *)(lVar4 + lVar3 * 4) == -1) {
          iVar1 = *(int *)(*(longlong *)(*param_1 + 0x10) + lVar5);
          if ((-1 < (longlong)iVar1) &&
             (plVar2 = *(longlong **)(*(longlong *)(*param_1 + 0x10) + -8 + lVar5),
             iVar1 < (int)plVar2[1])) {
            *(undefined8 *)(*plVar2 + 8 + (longlong)iVar1 * 0x30) = *param_2;
            lVar4 = *(longlong *)param_1[3];
          }
          *(int *)(lVar4 + lVar3 * 4) = param_4;
          *(int *)(*(longlong *)param_1[2] + (longlong)param_4 * 4) = (int)lVar3;
          goto LAB_1493e1ac3;
        }
        lVar3 = lVar3 + 1;
        lVar5 = lVar5 + 0x10;
      } while (*(int *)param_1[4] != lVar3);
    }
    FUN_1493e1c1c(*param_1,lVar6,*param_2);
  }
  else {
    if ((char)param_1[1] == '\x01') {
      if (param_3 == 0) goto LAB_1493e1ac3;
      iVar1 = (int)plVar2[1];
      if ((-1 < (longlong)iVar1) && (iVar1 < (int)((longlong *)*plVar2)[1])) {
        lVar4 = *(longlong *)(*(longlong *)*plVar2 + (longlong)iVar1 * 0x30);
        if (lVar4 != 0) {
          FUN_14003fbd6();
          if (lVar4 != DAT_14caea080) goto LAB_1493e1ac3;
        }
      }
    }
    FUN_1493e1bd4(plVar2,lVar6);
  }
LAB_1493e1ac3:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493e1b18 FUN_1493e1b18 body=29 status=ok
// SIG undefined FUN_1493e1b18(void)

undefined8 FUN_1493e1b18(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493e1b36 FUN_1493e1b36 body=156 status=ok
// SIG undefined FUN_1493e1b36(void)

undefined8 FUN_1493e1b36(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined8 local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[0] = *param_2;
  local_48[0] = 0;
  if (local_58[0] != 0) {
    plVar2 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_2[2];
    }
    (**(code **)*plVar2)(plVar2,local_48);
  }
  uVar1 = FUN_1493e1c8c(param_1 + 0x10,local_58);
  if (*param_2 != 0) {
    plVar2 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493e1bd4 FUN_1493e1bd4 body=71 status=ok
// SIG undefined FUN_1493e1bd4(void)

void FUN_1493e1bd4(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  if ((-1 < (longlong)iVar1) && (iVar1 < (int)((longlong *)*param_1)[1])) {
    lVar2 = *(longlong *)*param_1;
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)((longlong)iVar1 * 0x30 + lVar2) = param_2;
  }
  return;
}



// FUNCTION 1493e1c1c FUN_1493e1c1c body=111 status=ok
// SIG undefined FUN_1493e1c1c(void)

void FUN_1493e1c1c(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  plVar3 = (longlong *)FUN_1401c7e14(*param_1);
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *plVar3 = param_2;
  plVar3[1] = param_3;
  puVar1 = (undefined8 *)param_1[1];
  pcVar2 = (code *)*puVar1;
  plVar5 = puVar1 + 4;
  if ((longlong *)puVar1[2] != (longlong *)0x0) {
    plVar5 = (longlong *)puVar1[2];
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar2)(uVar4,plVar3);
  FUN_1493e17cc(param_1);
  return;
}



// FUNCTION 1493e1c8c FUN_1493e1c8c body=124 status=ok
// SIG undefined FUN_1493e1c8c(void)

longlong FUN_1493e1c8c(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar6 = *param_1;
    lVar5 = (longlong)(int)param_1[1] << 4;
    do {
      pcVar1 = (code *)*param_2;
      plVar4 = (longlong *)param_2[2];
      if ((longlong *)param_2[2] == (longlong *)0x0) {
        plVar4 = param_2 + 4;
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      cVar2 = (*pcVar1)(uVar3,lVar6);
      if (cVar2 != '\0') goto LAB_1493e1cdb;
      lVar6 = lVar6 + 0x10;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  lVar6 = 0;
LAB_1493e1cdb:
  if (*param_2 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return lVar6;
}



// FUNCTION 1493e1d62 FUN_1493e1d62 body=29 status=ok
// SIG undefined FUN_1493e1d62(void)

undefined8 FUN_1493e1d62(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493e1d80 FUN_1493e1d80 body=75 status=ok
// SIG undefined FUN_1493e1d80(void)

void FUN_1493e1d80(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x20),
              (longlong)*(int *)((longlong)param_1 + 0x28) << 2);
      FUN_1446efa72((longlong)param_1 + 0x20,0,0,4);
      return;
    }
  }
  return;
}



// FUNCTION 1493e1dcc FUN_1493e1dcc body=287 status=ok
// SIG undefined FUN_1493e1dcc(void)

undefined4 * FUN_1493e1dcc(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1493e1eec(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_40 = uVar5;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  local_40[4] = 0xffffffff;
  local_4c = local_48[0];
  cVar3 = FUN_1493e1fd2(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
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
      local_40[5] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[4] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1493e20c2(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493e1eec FUN_1493e1eec body=230 status=ok
// SIG undefined FUN_1493e1eec(void)

int * FUN_1493e1eec(longlong *param_1,int *param_2)

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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1493e1fd2 FUN_1493e1fd2 body=125 status=ok
// SIG undefined FUN_1493e1fd2(void)

undefined8 FUN_1493e1fd2(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*piVar1 == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1493e2050(iVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[4];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 1493e2050 FUN_1493e2050 body=114 status=ok
// SIG undefined FUN_1493e2050(void)

void FUN_1493e2050(longlong *param_1,int param_2)

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



// FUNCTION 1493e20c2 FUN_1493e20c2 body=419 status=ok
// SIG undefined FUN_1493e20c2(void)

void FUN_1493e20c2(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x18);
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



// FUNCTION 1493e2266 FUN_1493e2266 body=70 status=ok
// SIG undefined FUN_1493e2266(void)

void FUN_1493e2266(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  (*(code *)*param_1)(param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493e22cc FUN_1493e22cc body=12 status=ok
// SIG undefined FUN_1493e22cc(void)

void FUN_1493e22cc(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001493e22d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1493e22d8 FUN_1493e22d8 body=29 status=ok
// SIG undefined FUN_1493e22d8(void)

undefined8 FUN_1493e22d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493e22f6 FUN_1493e22f6 body=410 status=ok
// SIG undefined FUN_1493e22f6(void)

void FUN_1493e22f6(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_1401283f4(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_1401284dc(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar6 * 0x60 + lVar2 + -0x5c);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -0x18;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      plVar7 = param_1 + 2;
      *(uint *)(param_1 + 5) = uVar8;
      uVar12 = uVar8 + 0x1f >> 5;
      if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
        FUN_14499171c(plVar7,0,uVar12,4);
        *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
      }
      _Dst = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        _Dst = plVar7;
      }
      if (uVar8 < 0x101) {
        uVar12 = uVar12 + (uVar12 == 0);
      }
      memset(_Dst,0,(ulonglong)(uVar12 << 2));
      iVar1 = (int)param_1[5];
      iVar10 = iVar1 + 0x1f;
      if (-1 < iVar1) {
        iVar10 = iVar1;
      }
      if (iVar1 % 0x20 != 0) {
        if ((longlong *)param_1[4] != (longlong *)0x0) {
          plVar7 = (longlong *)param_1[4];
        }
        bVar4 = -(char)(iVar1 % 0x20);
        *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 1493e2490 FUN_1493e2490 body=480 status=ok
// SIG undefined FUN_1493e2490(void)

void FUN_1493e2490(longlong *param_1)

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
        lVar11 = (longlong)iVar12 * 0x60;
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
        *(int *)(lVar3 + 0x54 + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x50 + lVar11) =
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



// FUNCTION 1493e2672 FUN_1493e2672 body=319 status=ok
// SIG undefined FUN_1493e2672(void)

undefined4 * FUN_1493e2672(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_1493e27b2(param_1,local_48);
  FUN_1493e2934(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 10) = 0xffffffff;
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
  cVar3 = FUN_1493e28a0(param_1,uVar4,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x54) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 10) =
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
      FUN_1493e2490(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493e27b2 FUN_1493e27b2 body=238 status=ok
// SIG undefined FUN_1493e27b2(void)

int * FUN_1493e27b2(longlong *param_1,int *param_2)

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
      FUN_1401284dc(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 1493e28a0 FUN_1493e28a0 body=148 status=ok
// SIG undefined FUN_1493e28a0(void)

undefined8 FUN_1493e28a0(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  longlong *_Dst;
  int iVar1;
  longlong *plVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar1 = FUN_1493e05d0(), iVar1 != -1)) {
    _Dst = (longlong *)(*param_1 + (longlong)iVar1 * 0x60);
    if (*(longlong *)(*param_1 + 0x10 + (longlong)iVar1 * 0x60) != 0) {
      plVar2 = _Dst + 6;
      if ((longlong *)_Dst[4] != (longlong *)0x0) {
        plVar2 = (longlong *)_Dst[4];
      }
      (**(code **)(*plVar2 + 0x10))();
    }
    if (*_Dst != 0) {
      FUN_1400020a8();
    }
    memmove(_Dst,param_3,0x50);
    FUN_1493e29bc(param_1,*param_4);
    *param_4 = iVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 1493e2934 FUN_1493e2934 body=136 status=ok
// SIG undefined FUN_1493e2934(void)

undefined8 * FUN_1493e2934(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  longlong *plVar3;
  
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
  lVar2 = *param_3;
  param_1[2] = lVar2;
  param_1[4] = 0;
  if (lVar2 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)*plVar3)(plVar3,param_1 + 4);
  }
  return param_1;
}



// FUNCTION 1493e29bc FUN_1493e29bc body=122 status=ok
// SIG undefined FUN_1493e29bc(void)

void FUN_1493e29bc(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
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



// FUNCTION 1493e2a36 FUN_1493e2a36 body=455 status=ok
// SIG undefined FUN_1493e2a36(void)

void FUN_1493e2a36(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_1493e0932(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_1493e2db0(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar6 * 0x1a0 + lVar2 + -0x19c);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x1a0) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -0x68;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar8;
      if (param_2 != 0) {
        plVar7 = param_1 + 2;
        uVar12 = uVar8 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar7,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar7;
        }
        if (uVar8 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar7 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 1493e2bfe FUN_1493e2bfe body=432 status=ok
// SIG undefined FUN_1493e2bfe(void)

void FUN_1493e2bfe(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x1a0;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x19c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x198 + lVar7) =
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



// FUNCTION 1493e2db0 FUN_1493e2db0 body=146 status=ok
// SIG undefined FUN_1493e2db0(void)

void FUN_1493e2db0(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x1a0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x1a0)) {
      uVar5 = uVar4 / 0x1a0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x1a0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1493e2e44 FUN_1493e2e44 body=189 status=ok
// SIG undefined FUN_1493e2e44(void)

longlong FUN_1493e2e44(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  int *local_28;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x1a0;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x1a0) == *param_3) {
          if (lVar3 != 0) goto LAB_1493e2ee4;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x198);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1493e2f02(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x1a0 + *param_1;
LAB_1493e2ee4:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1493e2f02 FUN_1493e2f02 body=281 status=ok
// SIG undefined FUN_1493e2f02(void)

undefined4 * FUN_1493e2f02(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

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
  FUN_1493e301c(param_1,local_48);
  FUN_1493e31ac(param_4,local_40);
  *(undefined4 *)(local_40 + 0x198) = 0xffffffff;
  cVar1 = FUN_1493e310a(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x19c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x198) =
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
      FUN_1493e2bfe(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493e301c FUN_1493e301c body=237 status=ok
// SIG undefined FUN_1493e301c(void)

int * FUN_1493e301c(longlong *param_1,int *param_2)

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
      FUN_1493e2db0(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x1a0);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x1a0) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x1a0 + *param_1;
  return param_2;
}



// FUNCTION 1493e310a FUN_1493e310a body=162 status=ok
// SIG undefined FUN_1493e310a(void)

undefined8 FUN_1493e310a(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x1a0);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x1a0) == *param_3) {
          FUN_1493d6936((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x198);
          FUN_1493e34e6(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x198);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1493e31ac FUN_1493e31ac body=223 status=ok
// SIG undefined FUN_1493e31ac(void)

undefined4 * FUN_1493e31ac(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8 [44];
  undefined8 local_18c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_148;
  undefined8 local_13c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_f8;
  undefined8 local_ec;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_a8;
  undefined8 local_9c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined8 local_4c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  memset(local_1b8,0,400);
  local_18c = 0xffffffff00000080;
  local_148 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_13c = 0xffffffff00000080;
  local_f8 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_ec = 0xffffffff00000080;
  local_a8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_9c = 0xffffffff00000080;
  local_58 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  *param_2 = *(undefined4 *)*param_1;
  FUN_1493e328c(param_2 + 2,local_1b8);
  FUN_1493d6936(local_1b8);
  if ((local_28 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493e328c FUN_1493e328c body=94 status=ok
// SIG undefined FUN_1493e328c(void)

longlong FUN_1493e328c(longlong param_1,longlong param_2)

{
  FUN_1493e32ea();
  FUN_1493e32ea(param_1 + 0x50,param_2 + 0x50);
  FUN_1493e32ea(param_1 + 0xa0,param_2 + 0xa0);
  FUN_1493e32ea(param_1 + 0xf0,param_2 + 0xf0);
  FUN_1493e32ea(param_1 + 0x140,param_2 + 0x140);
  return param_1;
}



// FUNCTION 1493e32ea FUN_1493e32ea body=123 status=ok
// SIG undefined FUN_1493e32ea(void)

undefined8 * FUN_1493e32ea(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1493e3366();
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



// FUNCTION 1493e3366 FUN_1493e3366 body=382 status=ok
// SIG undefined FUN_1493e3366(void)

longlong * FUN_1493e3366(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
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
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar7 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar5 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar7) || (local_60 = uVar5, uStack_48 != plVar1)) {
      do {
        local_60 = uVar5;
        FUN_1493e0f52((longlong)iVar6 * 0x410 + *local_78);
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar6 = local_60._4_4_;
        uVar5 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar7));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar4 = param_2[3];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(int *)(param_1 + 3) = (int)lVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493e34e6 FUN_1493e34e6 body=122 status=ok
// SIG undefined FUN_1493e34e6(void)

void FUN_1493e34e6(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x1a0) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1a0) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1a0 + 4) = uVar5;
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



// FUNCTION 1493e3560 FUN_1493e3560 body=440 status=ok
// SIG undefined FUN_1493e3560(void)

void FUN_1493e3560(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_146012ade(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_145a5dc92(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar9 * 0x410 + lVar2 + -0x40c);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x410) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -0x104;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 1493e3718 FUN_1493e3718 body=41 status=ok
// SIG undefined FUN_1493e3718(void)

void FUN_1493e3718(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1458c1dca(param_1);
    param_1 = param_1 + 0x2c0;
  }
  return;
}



// FUNCTION 1493e3742 FUN_1493e3742 body=101 status=ok
// SIG undefined FUN_1493e3742(void)

void FUN_1493e3742(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x2c0 + *param_1);
  FUN_145cb3fa6(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x2c0 + (longlong)_Dst),(longlong)iVar2 * 0x2c0);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1493e37a8 FUN_1493e37a8 body=63 status=ok
// SIG undefined FUN_1493e37a8(void)

void FUN_1493e37a8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1493e37e8(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x2c0,8);
  }
  return;
}



// FUNCTION 1493e37e8 FUN_1493e37e8 body=115 status=ok
// SIG undefined FUN_1493e37e8(void)

ulonglong FUN_1493e37e8(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x2c0) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x2c0,8);
      uVar1 = uVar1 / 0x2c0;
    }
  }
  return uVar1;
}



// FUNCTION 1493e386a FUN_1493e386a body=128 status=ok
// SIG undefined FUN_1493e386a(void)

int FUN_1493e386a(longlong *param_1,uint param_2,float *param_3)

{
  longlong lVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar4 = *param_1;
      do {
        lVar6 = (longlong)iVar3;
        fVar2 = *(float *)(lVar4 + lVar6 * 0x18);
        if ((fVar2 == *param_3) && (!NAN(fVar2) && !NAN(*param_3))) {
          lVar1 = lVar4 + lVar6 * 0x18;
          fVar2 = *(float *)(lVar1 + 4);
          if ((fVar2 == param_3[1]) && (!NAN(fVar2) && !NAN(param_3[1]))) {
            fVar2 = *(float *)(lVar1 + 8);
            if ((fVar2 == param_3[2]) && (!NAN(fVar2) && !NAN(param_3[2]))) {
              return iVar3;
            }
          }
        }
        iVar3 = *(int *)(lVar4 + 0x10 + lVar6 * 0x18);
      } while (iVar3 != -1);
    }
  }
  return -1;
}



// FUNCTION 1493e38ea FUN_1493e38ea body=62 status=ok
// SIG undefined FUN_1493e38ea(void)

void FUN_1493e38ea(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1493e3928(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1493e3928 FUN_1493e3928 body=93 status=ok
// SIG undefined FUN_1493e3928(void)

ulonglong FUN_1493e3928(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
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



// FUNCTION 1493e3985 FUN_1493e3985 body=246 status=ok
// SIG undefined FUN_1493e3985(void)

undefined8
FUN_1493e3985(undefined8 param_1,longlong param_2,uint param_3,undefined8 param_4,byte param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  ushort local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong lStack_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_d8 = FUN_145a940ac();
  local_88 = (longlong *)0x0;
  local_58 = 0;
  local_a0 = 0;
  lStack_98 = 0;
  uStack_c0 = (ulonglong)param_3;
  local_b8 = (ushort)param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(&local_d8);
  if (lStack_98 != 0) {
    plVar2 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar2 = local_78;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493e3a7c FUN_1493e3a7c body=191 status=ok
// SIG undefined FUN_1493e3a7c(void)

undefined8 * FUN_1493e3a7c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  _Src = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 * 2);
  }
  param_1[7] = param_2[7];
  uVar3 = *(undefined4 *)(param_2 + 3);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar5 = *(undefined4 *)(param_2 + 4);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar8 = *(undefined4 *)(param_2 + 6);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar7;
  *(undefined4 *)(param_1 + 6) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar9;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  *(undefined4 *)(param_1 + 4) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar6;
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 9);
  uVar2 = param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_1402ae8a8(param_1 + 8,iVar1,0);
    FUN_140160884(param_1[8],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1493e3b3b FUN_1493e3b3b body=246 status=ok
// SIG undefined FUN_1493e3b3b(void)

undefined8
FUN_1493e3b3b(undefined8 param_1,longlong param_2,uint param_3,undefined8 param_4,byte param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  ushort local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong lStack_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_d8 = FUN_145a94198();
  local_88 = (longlong *)0x0;
  local_58 = 0;
  local_a0 = 0;
  lStack_98 = 0;
  uStack_c0 = (ulonglong)param_3;
  local_b8 = (ushort)param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(&local_d8);
  if (lStack_98 != 0) {
    plVar2 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar2 = local_78;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493e3c32 FUN_1493e3c32 body=428 status=ok
// SIG undefined FUN_1493e3c32(void)

void FUN_1493e3c32(longlong *param_1,longlong param_2,longlong *param_3,longlong param_4,
                  longlong param_5)

{
  void *_Src;
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_2 + 0x28);
  if (lVar3 == 0) {
    FUN_140056680(&local_58,L"Unknown file");
  }
  else {
    local_58 = (void *)0x0;
    local_50 = *(int *)(lVar3 + 0x30);
    lVar4 = (longlong)local_50;
    _Src = *(void **)(lVar3 + 0x28);
    if (lVar4 == 0) {
      local_4c = 0;
    }
    else {
      FUN_1446dd670(&local_58,local_50,0);
      memcpy(local_58,_Src,lVar4 * 2);
    }
  }
  if ((void **)(param_5 + 0x28) == &local_58) {
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_5 + 0x28) != 0) {
      FUN_1400020a8();
    }
    *(void **)(param_5 + 0x28) = local_58;
    local_58 = (void *)0x0;
    *(int *)(param_5 + 0x30) = local_50;
    *(undefined4 *)(param_5 + 0x34) = local_4c;
  }
  FUN_144a787a6(param_5 + 0x38,param_2 + 8);
  lVar3 = (**(code **)(*param_1 + 0x2a0))(param_1);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  *(longlong *)(param_5 + 0x58) = lVar3;
  plVar1 = (longlong *)*param_3;
  plVar2 = *(longlong **)(param_5 + 0x70);
  if (plVar2 != plVar1) {
    *(longlong **)(param_5 + 0x70) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_5 + 0x78) = (int)param_3[1];
  if (1 < *(int *)(param_4 + 8)) {
    FUN_144a787a6(param_5 + 0x48,param_4);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493e3ddf thunk_FUN_147d6e0f4 body=5 status=ok
// SIG undefined thunk_FUN_147d6e0f4(void)

undefined8 * thunk_FUN_147d6e0f4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 1493e3de4 FUN_1493e3de4 body=147 status=ok
// SIG undefined FUN_1493e3de4(void)

void FUN_1493e3de4(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1493e3e78 FUN_1493e3e78 body=230 status=ok
// SIG undefined FUN_1493e3e78(void)

void FUN_1493e3e78(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined1 param_6,char param_7)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x24) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x14) = param_5;
  *(undefined1 *)(param_1 + 5) = param_6;
  if (param_7 != '\0') {
    uVar5 = (**(code **)(*param_1 + 0x10))(param_1);
    FUN_140e03604(&local_20,uVar5);
    FUN_1467aa942(param_1 + 1,&local_20);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 3;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (((uint)lVar3 & 0x3fffffff) == 1) {
        (**(code **)(*local_20 + 0x10))(local_20);
        local_20[1] = 0;
        local_20[2] = 0;
        LOCK();
        puVar2 = (ulonglong *)(local_20 + 3);
        uVar4 = *puVar2;
        *puVar2 = *puVar2 - 0x40000000;
        UNLOCK();
        if ((uVar4 & 0xfffffffc0000000) == 0x40000000) {
          (**(code **)*local_20)(local_20,1);
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



// FUNCTION 1493e3f60 FUN_1493e3f60 body=158 status=ok
// SIG undefined FUN_1493e3f60(void)

longlong FUN_1493e3f60(longlong *param_1,int param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  lVar3 = 1;
  if (*(char *)((longlong)param_1 + 0x3c) == '\0') {
    lVar3 = (longlong)(int)param_1[7];
  }
  if (param_2 < 1) {
    lVar5 = 0;
    param_2 = 0;
  }
  else {
    iVar4 = 0;
    lVar5 = 0;
    do {
      lVar2 = (**(code **)(*param_1 + 8))(param_1,iVar4);
      lVar5 = lVar5 + lVar2 * lVar3;
      iVar4 = iVar4 + 1;
    } while (param_2 != iVar4);
  }
  if (param_3 != -1) {
    lVar3 = (**(code **)(*param_1 + 8))(param_1,param_2);
    lVar5 = lVar5 + param_3 * lVar3;
  }
  plVar1 = (longlong *)param_1[1];
  if (plVar1 == (longlong *)0x0) {
    lVar3 = 0;
  }
  else {
    if (((ulonglong)plVar1[3] >> 0x3e & 1) == 0) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    lVar3 = plVar1[1];
  }
  return lVar3 + lVar5;
}



// FUNCTION 1493e3ffe FUN_1493e3ffe body=180 status=ok
// SIG undefined FUN_1493e3ffe(void)

longlong FUN_1493e3ffe(longlong param_1,byte param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  
  uVar3 = FUN_147d6e106(*(undefined4 *)(param_1 + 0x14));
  uVar6 = *(int *)(param_1 + 0x20) >> (param_2 & 0x1f);
  if ((int)uVar6 < 2) {
    uVar6 = 1;
  }
  uVar9 = *(int *)(param_1 + 0x24) >> (param_2 & 0x1f);
  if ((int)uVar9 < 2) {
    uVar9 = 1;
  }
  uVar8 = 1;
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    uVar2 = *(int *)(param_1 + 0x38) >> (param_2 & 0x1f);
    uVar8 = 1;
    if (1 < (int)uVar2) {
      uVar8 = (ulonglong)uVar2;
    }
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar8;
  uVar4 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff)) / auVar1,0);
  lVar7 = 0;
  if ((uVar3 != 0) &&
     (uVar5 = (ulonglong)uVar9 * (ulonglong)uVar6, uVar5 < uVar4 || uVar5 - uVar4 == 0)) {
    uVar8 = uVar8 * uVar5;
    uVar4 = -uVar3;
    if ((longlong)-uVar3 < 0) {
      uVar4 = uVar3;
    }
    uVar4 = (0x7fffffffffffffffU - ((longlong)uVar3 >> 0x3f)) / uVar4;
    lVar7 = uVar3 * uVar8;
    if (uVar4 <= uVar8 && uVar8 - uVar4 != 0) {
      lVar7 = 0;
    }
  }
  return lVar7;
}



// FUNCTION 1493e40b2 FUN_1493e40b2 body=80 status=ok
// SIG undefined FUN_1493e40b2(void)

longlong FUN_1493e40b2(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = 1;
  if (*(char *)((longlong)param_1 + 0x3c) == '\0') {
    lVar4 = (longlong)(int)param_1[7];
  }
  iVar3 = 0;
  if (*(int *)((longlong)param_1 + 0x1c) < 1) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    do {
      lVar1 = (**(code **)(*param_1 + 8))(param_1,iVar3);
      lVar2 = lVar2 + lVar1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((longlong)param_1 + 0x1c));
  }
  return lVar2 * lVar4;
}



// FUNCTION 1493e4102 FUN_1493e4102 body=56 status=ok
// SIG undefined FUN_1493e4102(void)

longlong FUN_1493e4102(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(int *)((longlong)param_1 + 0x1c) < 1) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    do {
      lVar1 = (**(code **)(*param_1 + 8))(param_1,iVar3);
      lVar2 = lVar2 + lVar1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((longlong)param_1 + 0x1c));
  }
  return lVar2;
}



// FUNCTION 1493e4148 FUN_1493e4148 body=117 status=ok
// SIG undefined FUN_1493e4148(void)

byte FUN_1493e4148(longlong *param_1)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  if ((int)param_1[2] == 0) {
    lVar3 = (**(code **)(*param_1 + 0x10))(param_1);
    plVar1 = (longlong *)param_1[1];
    if (plVar1 == (longlong *)0x0) {
      lVar4 = 0;
    }
    else {
      if (((ulonglong)plVar1[3] >> 0x3e & 1) == 0) {
        (**(code **)(*plVar1 + 8))(plVar1);
      }
      lVar4 = plVar1[2];
    }
    bVar5 = lVar3 == lVar4;
  }
  else {
    bVar5 = param_1[1] != 0;
  }
  if ((((int)param_1[4] < 1) || (*(int *)((longlong)param_1 + 0x24) < 1)) ||
     (*(int *)((longlong)param_1 + 0x1c) < 1)) {
    bVar2 = 0;
  }
  else {
    bVar2 = *(int *)((longlong)param_1 + 0x14) != 0 & bVar5;
  }
  return bVar2;
}



// FUNCTION 1493e41c2 FUN_1493e41c2 body=292 status=ok
// SIG undefined FUN_1493e41c2(void)

longlong FUN_1493e41c2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar2 = FUN_145ba0bd8();
  lVar3 = FUN_145ba0aee();
  lVar4 = FUN_1459f6786();
  lVar5 = FUN_145a94bbc();
  lVar6 = FUN_145a94ca8();
  lVar7 = FUN_145ba0cc2();
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (((((((lVar5 == 0) || (*(int *)(lVar1 + 0x38) < *(int *)(lVar5 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
          lVar5 + 0x30)) &&
        (((lVar2 == 0 || (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) ||
         (lVar5 = lVar2,
         *(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
         lVar2 + 0x30)))) &&
       (((lVar3 == 0 || (*(int *)(lVar1 + 0x38) < *(int *)(lVar3 + 0x38))) ||
        (lVar5 = lVar3,
        *(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
        lVar3 + 0x30)))) &&
      (((lVar6 == 0 || (*(int *)(lVar1 + 0x38) < *(int *)(lVar6 + 0x38))) ||
       (lVar5 = lVar6,
       *(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
       lVar6 + 0x30)))) &&
     (((lVar7 == 0 || (*(int *)(lVar1 + 0x38) < *(int *)(lVar7 + 0x38))) ||
      (lVar5 = lVar7,
      *(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
      lVar7 + 0x30)))) {
    if ((lVar4 == 0) || (*(int *)(lVar1 + 0x38) < *(int *)(lVar4 + 0x38))) {
      lVar5 = 0;
    }
    else {
      lVar5 = 0;
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30) {
        lVar5 = lVar4;
      }
    }
  }
  return lVar5;
}



// FUNCTION 1493e42e6 FUN_1493e42e6 body=124 status=ok
// SIG undefined FUN_1493e42e6(void)

longlong * FUN_1493e42e6(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
LAB_1493e42f5:
    uVar1 = 0;
  }
  else {
    lVar2 = FUN_1459f6786();
    if (lVar2 == param_3) {
      uVar1 = 1;
    }
    else {
      lVar2 = FUN_145ba0bd8();
      if (lVar2 == param_3) {
        uVar1 = 2;
      }
      else {
        lVar2 = FUN_145ba0aee();
        if (lVar2 == param_3) {
          uVar1 = 3;
        }
        else {
          lVar2 = FUN_145a94bbc();
          if (lVar2 == param_3) {
            uVar1 = 4;
          }
          else {
            lVar2 = FUN_145a94ca8();
            if (lVar2 == param_3) {
              uVar1 = 5;
            }
            else {
              lVar2 = FUN_145ba0cc2();
              if (lVar2 != param_3) goto LAB_1493e42f5;
              uVar1 = 6;
            }
          }
        }
      }
    }
    *param_1 = param_2;
  }
  *(undefined1 *)(param_1 + 1) = uVar1;
  return param_1;
}



// FUNCTION 1493e4362 FUN_1493e4362 body=383 status=ok
// SIG undefined FUN_1493e4362(void)

longlong * FUN_1493e4362(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  if ((param_2 != (undefined8 *)0x0) && (0xf9 < (byte)(*(char *)(param_2 + 1) - 7U))) {
    FUN_1493ae80a(*param_2,local_28);
  }
  lVar2 = FUN_1492f2ba8(param_3,local_28);
  if (lVar2 == 0) {
LAB_1493e4480:
    uVar1 = 0;
  }
  else {
    lVar3 = FUN_145b9fff6();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) {
      lVar3 = FUN_145b9ff0c();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) != lVar3 + 0x30)) {
        lVar3 = FUN_145b9fe22();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) {
          lVar3 = FUN_145ba00e0();
          if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) {
            lVar3 = FUN_1459f64c2();
            if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) {
              lVar3 = FUN_145ba01ca();
              if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) goto LAB_1493e4480;
              uVar1 = 6;
            }
            else {
              uVar1 = 1;
            }
          }
          else {
            uVar1 = 5;
          }
        }
        else {
          uVar1 = 4;
        }
      }
      else {
        uVar1 = 3;
      }
    }
    else {
      uVar1 = 2;
    }
    *param_1 = lVar2;
  }
  *(undefined1 *)(param_1 + 1) = uVar1;
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493e44e2 FUN_1493e44e2 body=256 status=ok
// SIG undefined FUN_1493e44e2(void)

ulonglong FUN_1493e44e2(undefined8 *param_1)

{
  char cVar1;
  undefined8 unaff_RBX;
  undefined7 uVar3;
  ulonglong uVar2;
  byte unaff_SIL;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = *(char *)(param_1 + 1);
  uVar3 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if ((((param_1 == (undefined8 *)0x0 || cVar1 != '\x01') &&
       (cVar1 != '\x02' || param_1 == (undefined8 *)0x0)) &&
      (cVar1 != '\x03' || param_1 == (undefined8 *)0x0)) &&
     ((cVar1 != '\x04' || param_1 == (undefined8 *)0x0 &&
      (cVar1 != '\x05' || param_1 == (undefined8 *)0x0)))) {
    if (param_1 != (undefined8 *)0x0 && cVar1 == '\x06') {
      (**(code **)(*(longlong *)*param_1 + 0x2e8))((longlong *)*param_1,&local_28);
      unaff_SIL = local_1c != -1;
      if (((bool)unaff_SIL) && (local_28 != 0)) {
        FUN_1400020a8();
      }
    }
    uVar2 = CONCAT71(uVar3,(param_1 != (undefined8 *)0x0 && cVar1 == '\x06') & unaff_SIL);
  }
  else {
    (**(code **)(*(longlong *)*param_1 + 0x2e8))((longlong *)*param_1,&local_28);
    uVar2 = CONCAT71(uVar3,local_1c != -1);
    if ((local_1c != -1) && (local_28 != 0)) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493e45e3 FUN_1493e45e3 body=158 status=ok
// SIG undefined FUN_1493e45e3(void)

undefined8 * FUN_1493e45e3(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_2 + 1);
  if ((((param_2 == (undefined8 *)0x0 || cVar1 != '\x01') &&
       (cVar1 != '\x02' || param_2 == (undefined8 *)0x0)) &&
      (cVar1 != '\x03' || param_2 == (undefined8 *)0x0)) &&
     (((cVar1 != '\x04' || param_2 == (undefined8 *)0x0 &&
       (cVar1 != '\x05' || param_2 == (undefined8 *)0x0)) &&
      (cVar1 != '\x06' || param_2 == (undefined8 *)0x0)))) {
    *param_1 = 0;
    param_1[1] = 0xffffffff00000000;
  }
  else {
    (**(code **)(*(longlong *)*param_2 + 0x2e8))((longlong *)*param_2,param_1);
  }
  return param_1;
}



// FUNCTION 1493e4682 FUN_1493e4682 body=299 status=ok
// SIG undefined FUN_1493e4682(void)

longlong * FUN_1493e4682(longlong *param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar8 = FUN_1409ffe1d();
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_3);
  }
  if (*(int *)((longlong)param_1 + 0xc) < param_3) {
    FUN_1493e715e(param_1,param_3);
  }
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    do {
      uVar9 = FUN_1411829b8();
      uVar9 = FUN_1493e70ad(uVar8,uVar9);
      uVar10 = FUN_149362e2d(uVar8,uVar2,0,0,0,0,0,0);
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1493e71be(param_1,iVar1);
      }
      lVar3 = *param_1;
      *(undefined8 *)(lVar3 + (longlong)iVar1 * 0x10) = uVar10;
      *(undefined8 *)(lVar3 + 8 + (longlong)iVar1 * 0x10) = uVar9;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar4 = *param_1;
    lVar11 = 0;
    bVar7 = DAT_14c950c29;
    do {
      lVar5 = *(longlong *)(lVar4 + lVar11);
      lVar6 = *(longlong *)(param_2 + 0x28);
      if ((lVar6 != 0) && ((bVar7 & 1) != 0)) {
        FUN_1456cec3c(lVar6);
        bVar7 = DAT_14c950c29;
      }
      *(longlong *)(lVar5 + 0x28) = lVar6;
      lVar11 = lVar11 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar11);
  }
  return param_1;
}



// FUNCTION 1493e47ae FUN_1493e47ae body=62 status=ok
// SIG undefined FUN_1493e47ae(void)

void FUN_1493e47ae(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_1493e7474(param_1,iVar1);
  }
  FUN_1493e7449((longlong)iVar1 * 0x38 + *param_1,param_2);
  return;
}



// FUNCTION 1493e47ec FUN_1493e47ec body=175 status=ok
// SIG undefined FUN_1493e47ec(void)

void FUN_1493e47ec(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)*param_1;
  if ((longlong)(int)param_1[1] != 0) {
    plVar3 = plVar4 + (longlong)(int)param_1[1] * 2;
    do {
      uVar1 = *(uint *)(*plVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar2 = 0;
      }
      FUN_14482b126(lVar2,0x4000000);
      uVar1 = *(uint *)(plVar4[1] + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar2 = 0;
      }
      FUN_14482b126(lVar2,0x4000000);
      plVar4 = plVar4 + 2;
    } while (plVar4 != plVar3);
    plVar4 = (longlong *)*param_1;
  }
  if (plVar4 != (longlong *)0x0) {
    FUN_1400020a8(plVar4);
    return;
  }
  return;
}



// FUNCTION 1493e489b FUN_1493e489b body=1172 status=ok
// SIG undefined FUN_1493e489b(void)

void FUN_1493e489b(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  byte bVar10;
  char cVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  bool bVar18;
  undefined1 auStack_178 [47];
  byte local_149;
  undefined8 local_148;
  undefined4 local_140;
  byte local_13c;
  char local_13b;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  longlong local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong local_f8;
  longlong local_f0;
  longlong *local_e8;
  byte local_d9;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined5 local_64;
  undefined3 uStack_5f;
  undefined5 uStack_5c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  bVar10 = FUN_148459003((char)param_1[0x1e],*(undefined4 *)(param_2 + 0x14),
                         *(undefined1 *)(param_2 + 0x28));
  *(byte *)((longlong)param_1 + 0xfe) = *(byte *)((longlong)param_1 + 0xfe) & 0xfe | bVar10;
  uVar12 = FUN_14287fa46(*(undefined4 *)(param_2 + 0x14));
  local_149 = FUN_146987fb3(uVar12,&local_d9);
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_78 = 0xffffffffffffffff;
  local_70 = 0;
  local_68 = 0;
  local_64 = 0;
  uStack_5f = 0;
  uStack_5c = 0;
  FUN_146889ec8();
  local_d8 = *param_3;
  *param_3 = 0;
  local_d0 = *(undefined4 *)(param_3 + 1);
  uStack_cc = *(undefined4 *)((longlong)param_3 + 0xc);
  uStack_c8 = *(undefined4 *)(param_3 + 2);
  uStack_c4 = *(undefined4 *)((longlong)param_3 + 0x14);
  local_c0 = *(undefined4 *)(param_3 + 3);
  FUN_14688a25a(&local_b8,&local_d8,0);
  FUN_1427d9616(&local_b8,&local_f0);
  lVar15 = local_f0;
  cVar11 = *(char *)(param_2 + 0x28);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  while( true ) {
    if ((*(byte *)(lVar15 + 0x78) & 1) != 0) break;
    (**(code **)(**(longlong **)(lVar15 + 0x70) + 0x20))(*(longlong **)(lVar15 + 0x70),0xffffffff);
  }
  plVar9 = *(longlong **)(lVar15 + 0x80);
  if (plVar9 == (longlong *)0x0) {
    local_f8 = 0;
  }
  else {
    if ((plVar9[3] & 0x4000000000000000U) == 0) {
      (**(code **)(*plVar9 + 8))(plVar9);
    }
    local_f8 = plVar9[1];
  }
  lVar15 = local_f0;
  uStack_100 = 1;
  uStack_fc._0_2_ = CONCAT11(cVar11 * '\x02',(char)uVar12);
  local_130 = 0;
  uStack_128 = 0;
  uStack_124 = CONCAT22(uStack_124._2_2_,0x201);
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  local_108 = uVar2;
  uStack_104 = uVar3;
  if (*(int *)(param_2 + 0x10) != 0) {
    while ((*(byte *)(lVar15 + 0x78) & 1) == 0) {
      (**(code **)(**(longlong **)(lVar15 + 0x70) + 0x20))(*(longlong **)(lVar15 + 0x70),0xffffffff)
      ;
    }
    plVar9 = *(longlong **)(lVar15 + 0x80);
    if (plVar9 == (longlong *)0x0) {
      lVar15 = 0;
    }
    else {
      if ((plVar9[3] & 0x4000000000000000U) == 0) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
      lVar15 = plVar9[2];
    }
    while ((*(byte *)(local_f0 + 0x78) & 1) == 0) {
      (**(code **)(**(longlong **)(local_f0 + 0x70) + 0x20))
                (*(longlong **)(local_f0 + 0x70),0xffffffff,0);
    }
    plVar9 = *(longlong **)(local_f0 + 0x80);
    if (plVar9 == (longlong *)0x0) {
      lVar16 = 0;
    }
    else {
      if ((plVar9[3] & 0x4000000000000000U) == 0) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
      lVar16 = plVar9[1];
    }
    cVar11 = FUN_147af0424(lVar16,lVar15,&local_130);
    if (cVar11 != '\0') {
      local_108 = (undefined4)local_130;
      uStack_104 = local_130._4_4_;
      uStack_100 = uStack_128;
      uStack_fc = uStack_124;
      local_f8 = local_120;
    }
  }
  uVar13 = FUN_14001cc68(0x38,0x10);
  FUN_147d6e884(uVar13);
  FUN_147d6e292(param_1,uVar13);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  puVar14 = (undefined4 *)FUN_14142e422(param_1);
  *puVar14 = uVar2;
  uVar2 = *(undefined4 *)(param_2 + 0x24);
  lVar15 = FUN_14142e422(param_1);
  *(undefined4 *)(lVar15 + 4) = uVar2;
  lVar15 = FUN_14142e422(param_1);
  *(byte *)(lVar15 + 0xc) = local_149;
  uVar17 = (ulonglong)((uint)local_149 * 0x30);
  iVar4 = *(int *)(param_2 + 0x20);
  iVar5 = *(int *)(param_2 + 0x24);
  iVar6 = *(int *)((longlong)&DAT_14c87341c + uVar17);
  iVar7 = *(int *)((longlong)&DAT_14c873420 + uVar17);
  lVar15 = FUN_14001cc68(0x50,0x10);
  FUN_1478b105e(lVar15,iVar4,iVar5,0);
  lVar16 = FUN_14142e422(param_1);
  iVar8 = *(int *)(lVar16 + 0x20);
  *(uint *)(lVar16 + 0x20) = iVar8 + 1U;
  if (*(uint *)(lVar16 + 0x24) < iVar8 + 1U) {
    FUN_1456bd870((longlong *)(lVar16 + 0x18),iVar8);
  }
  *(longlong *)(*(longlong *)(lVar16 + 0x18) + (longlong)iVar8 * 8) = lVar15;
  lVar15 = lVar15 + 0x20;
  FUN_140fc05d0(lVar15,2);
  FUN_1427d8a06(lVar15,(longlong)((iVar5 / iVar7) * (iVar4 / iVar6)) *
                       (longlong)*(int *)((longlong)&DAT_14c873428 + uVar17),1);
  FUN_1427d8a52(lVar15);
  *(byte *)((longlong)param_1 + 0x104) = *(byte *)((longlong)param_1 + 0x104) | 2;
  bVar18 = local_d9 < 2;
  bVar10 = *(byte *)((longlong)param_1 + 0xfe);
  lVar15 = FUN_14142e422(param_1);
  uVar13 = FUN_140fc05d0(**(longlong **)(lVar15 + 0x18) + 0x20,2);
  lVar15 = FUN_14142e422(param_1);
  FUN_1427d8864(**(longlong **)(lVar15 + 0x18) + 0x20);
  local_148 = *(undefined8 *)(param_2 + 0x20);
  local_140 = 1;
  local_13c = local_d9;
  local_13b = (bVar18 & bVar10) * '\x02';
  local_138 = uVar13;
  FUN_14287def8(&local_108);
  lVar15 = FUN_14142e422(param_1);
  FUN_1427d8a52(**(longlong **)(lVar15 + 0x18) + 0x20);
  (**(code **)(*param_1 + 0x318))(param_1);
  if (local_120 != 0) {
    FUN_1400020a8();
  }
  if (local_e8 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_e8 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_e8)(local_e8);
      LOCK();
      piVar1 = (int *)((longlong)local_e8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_e8 + 0x10))(local_e8);
      }
    }
  }
  FUN_146889ed6(&local_b8);
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493e4d30 FUN_1493e4d30 body=110 status=ok
// SIG undefined FUN_1493e4d30(void)

undefined8 * FUN_1493e4d30(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_2 + 0x48);
  if (param_2 == 0 || cVar1 != '\x02') {
    if (((cVar1 != '\x01' || param_2 == 0) && (cVar1 != '\x03' || param_2 == 0)) &&
       (cVar1 != '\x04' || param_2 == 0)) {
      *param_1 = 0;
      return param_1;
    }
    param_2 = param_2 + 8;
  }
  FUN_14276fde8(param_2,param_1);
  return param_1;
}



// FUNCTION 1493e4d9e FUN_1493e4d9e body=330 status=ok
// SIG undefined FUN_1493e4d9e(void)

undefined8 * FUN_1493e4d9e(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong **pplVar6;
  undefined8 *puVar7;
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [8];
  undefined8 local_c8 [9];
  byte local_80;
  longlong *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 != param_1) {
    local_80 = *(byte *)(param_2 + 9);
    (*(code *)(&PTR_LAB_14bcbb730)[local_80])(local_c8);
    puVar5 = local_c8;
    pplVar6 = &local_78;
    for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *pplVar6 = (longlong *)*puVar5;
      puVar5 = puVar5 + 1;
      pplVar6 = pplVar6 + 1;
    }
    puVar5 = param_1;
    puVar7 = local_c8;
    for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    pplVar6 = &local_78;
    puVar5 = param_1;
    for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *pplVar6;
      pplVar6 = pplVar6 + 1;
      puVar5 = puVar5 + 1;
    }
    (*(code *)(&PTR_FUN_14bcbb6e0)[local_80])(local_c8);
  }
  FUN_1493e4d30(local_d0,param_1);
  FUN_14688a222(&local_78,local_d0);
  FUN_1467aa942(param_1 + 10,&local_78);
  *(undefined4 *)(param_1 + 0xd) = local_60;
  *(undefined4 *)(param_1 + 0xb) = local_70;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uStack_6c;
  *(undefined4 *)(param_1 + 0xc) = uStack_68;
  *(undefined4 *)((longlong)param_1 + 100) = uStack_64;
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_78 + 3;
    lVar4 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (((uint)lVar4 & 0x3fffffff) == 1) {
      (**(code **)(*local_78 + 0x10))(local_78);
      local_78[1] = 0;
      local_78[2] = 0;
      LOCK();
      puVar2 = (ulonglong *)(local_78 + 3);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if ((uVar3 & 0xfffffffc0000000) == 0x40000000) {
        (**(code **)*local_78)(local_78,1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493e4ee9 FUN_1493e4ee9 body=264 status=ok
// SIG undefined FUN_1493e4ee9(void)

void FUN_1493e4ee9(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_14936b1b4(*(undefined8 *)(param_1 + 0x28));
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(lVar1 + 0x58) = param_2;
  FUN_144a787a6(lVar1 + 0x28,param_3);
  FUN_144a787a6(lVar1 + 0x38,param_4);
  local_38 = L"InvalidPayload";
  local_30 = 0xe;
  FUN_1446e940c(local_3c,&local_38);
  local_38 = L"InterchangeTextureFactory";
  local_30 = 0x19;
  FUN_1446e940c(local_40,&local_38);
  FUN_140208bae(&local_38,local_40,local_3c,L"Unable to retrieve the payload from the source file.")
  ;
  FUN_140008f88(lVar1 + 0x70,&local_38);
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493e515d FUN_1493e515d body=196 status=ok
// SIG undefined FUN_1493e515d(void)

undefined8 FUN_1493e515d(undefined8 param_1,undefined8 param_2,longlong param_3)

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
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  FUN_144a5c54a(local_b8,param_2);
  local_a0 = 3;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  local_a8 = param_3;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493e5230 FUN_1493e5230 body=64 status=ok
// SIG undefined FUN_1493e5230(void)

longlong FUN_1493e5230(longlong param_1,byte param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = *(int *)(param_1 + 0x20) >> (param_2 & 0x1f);
  uVar3 = (ulonglong)uVar2;
  if ((int)uVar2 < 2) {
    uVar3 = 1;
  }
  uVar2 = *(int *)(param_1 + 0x24) >> (param_2 & 0x1f);
  if ((int)uVar2 < 2) {
    uVar2 = 1;
  }
  lVar1 = FUN_147d6e106(*(undefined4 *)(param_1 + 0x14));
  return lVar1 * uVar3 * (ulonglong)uVar2;
}



// FUNCTION 1493e5274 FUN_1493e5274 body=470 status=ok
// SIG undefined FUN_1493e5274(void)

/* WARNING: Removing unreachable block (ram,0x0001493e53bc) */
/* WARNING: Removing unreachable block (ram,0x0001493e5319) */
/* WARNING: Removing unreachable block (ram,0x0001493e5425) */

longlong * FUN_1493e5274(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  char local_29;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  if ((DAT_14c765138 != '\0') || (DAT_14c86aa68 == '\x01')) {
    FUN_1408be2c4(param_2,3);
    FUN_140056680(&local_28,L"uej;UEJpeg image");
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_1447a1bd6(param_2,iVar1);
    }
    lVar2 = *param_2;
    lVar3 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar3) = 0;
    *(undefined8 *)(lVar2 + lVar3) = local_28;
    *(undefined4 *)(lVar2 + 8 + lVar3) = (undefined4)local_20;
    *(undefined4 *)(lVar2 + 0xc + lVar3) = local_20._4_4_;
    local_20 = 0;
    local_28 = 0;
    local_29 = '\0';
    local_38 = &DAT_14c872bc8;
    FUN_14052bb08(DAT_14c872ce0,L"TextureImporter",L"EnableUEJpeg",&local_29);
    if (local_29 == '\x01') {
      FUN_140056680(&local_28,L"jpg;JPEG image");
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1447a1bd6(param_2,iVar1);
      }
      lVar2 = *param_2;
      lVar3 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar2 + lVar3) = 0;
      *(undefined8 *)(lVar2 + lVar3) = local_28;
      *(undefined4 *)(lVar2 + 8 + lVar3) = (undefined4)local_20;
      *(undefined4 *)(lVar2 + 0xc + lVar3) = local_20._4_4_;
      local_20 = 0;
      local_28 = 0;
      FUN_140056680(&local_28,L"jpeg;JPEG image");
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1447a1bd6(param_2,iVar1);
      }
      lVar2 = *param_2;
      lVar3 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar2 + lVar3) = 0;
      *(undefined8 *)(lVar2 + lVar3) = local_28;
      local_28 = 0;
      *(undefined4 *)(lVar2 + 8 + lVar3) = (undefined4)local_20;
      *(undefined4 *)(lVar2 + 0xc + lVar3) = local_20._4_4_;
      local_20 = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1493e5456 FUN_1493e5456 body=104 status=ok
// SIG undefined FUN_1493e5456(void)

void FUN_1493e5456(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = FUN_1459f64c2();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  FUN_1493e5faa(param_1,param_2,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493e54c0 FUN_1493e54c0 body=142 status=ok
// SIG undefined FUN_1493e54c0(void)

longlong FUN_1493e54c0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  cVar1 = FUN_1493e5550(param_1 + -0x38,L"UEJPEG");
  if (cVar1 == '\0') {
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  else {
    FUN_1493e580a(param_1 + -0x38,param_2,local_38,0);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493e5550 FUN_1493e5550 body=696 status=ok
// SIG undefined FUN_1493e5550(void)

bool FUN_1493e5550(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  char cVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [4];
  undefined1 local_e4 [4];
  longlong *local_e0 [2];
  undefined8 local_d0;
  longlong *local_c8;
  longlong local_c0 [2];
  longlong *local_b0 [2];
  longlong *local_a0 [2];
  undefined8 local_90;
  longlong *local_88;
  wchar_t **local_80;
  ulonglong *local_78;
  longlong local_70;
  undefined4 local_68;
  wchar_t *local_60;
  int local_58;
  undefined4 local_54;
  longlong *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  cVar3 = FUN_1493e6440();
  if (cVar3 != '\0') {
    local_60 = (wchar_t *)0x0;
    local_58 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x30);
    lVar5 = (longlong)local_58;
    _Src = *(void **)(*(longlong *)(param_1 + 0x30) + 0x28);
    if (lVar5 == 0) {
      local_54 = 0;
LAB_1493e55f3:
      pwVar4 = L"";
    }
    else {
      FUN_1446dd670(&local_60,local_58,0);
      memcpy(local_60,_Src,lVar5 * 2);
      pwVar4 = local_60;
      if (local_58 == 0) goto LAB_1493e55f3;
    }
    cVar3 = FUN_142781902(param_3,pwVar4,0);
    if (local_60 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (cVar3 != '\0') {
      bVar6 = *(longlong *)(param_3 + 8) != 0;
      goto LAB_1493e57dd;
    }
    FUN_140056680(local_c0,param_2);
    FUN_140233b1a(local_b0,local_c0);
    local_60 = L"TextureImportFailure_LoadBuffer";
    local_58 = 0x1f;
    FUN_1446e940c(local_e4,&local_60);
    local_60 = L"InterchangeTextureTranslator";
    local_58 = 0x1c;
    FUN_1446e940c(local_e8,&local_60);
    FUN_140208bae(local_e0,local_e8,local_e4,
                  L"Failed to import {0}, cannot load file content into an array.");
    FUN_14023409e(&local_d0,local_e0,1);
    local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
    FUN_14023423e(local_50,local_b0);
    local_78 = &local_40;
    local_80 = &local_60;
    FUN_14010d304(&local_70);
    local_90 = local_d0;
    local_88 = local_c8;
    if (local_c8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_c8 + 1) = (int)local_c8[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_a0,&local_90,&local_70);
    FUN_14007f2db(local_70,local_68);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    if (local_c8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_c8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_c8)(local_c8);
        LOCK();
        piVar2 = (int *)((longlong)local_c8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_c8 + 0x10))(local_c8);
        }
      }
    }
    if (local_b0[0] != (longlong *)0x0) {
      (**(code **)(*local_b0[0] + 0x10))();
    }
    FUN_1493e5dea(param_1,local_a0);
    if (local_a0[0] != (longlong *)0x0) {
      (**(code **)(*local_a0[0] + 0x10))();
    }
    if (local_e0[0] != (longlong *)0x0) {
      (**(code **)(*local_e0[0] + 0x10))();
    }
    if (local_c0[0] != 0) {
      FUN_1400020a8();
    }
  }
  bVar6 = false;
LAB_1493e57dd:
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar6;
}



// FUNCTION 1493e580a FUN_1493e580a body=1355 status=ok
// SIG undefined FUN_1493e580a(void)

/* WARNING: Removing unreachable block (ram,0x0001493e5aac) */

undefined8 * FUN_1493e580a(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,char param_4)

{
  longlong *plVar1;
  ulonglong *puVar2;
  int *piVar3;
  ulonglong uVar4;
  wchar_t *pwVar5;
  char cVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined1 auStack_e8 [40];
  ulonglong local_c0;
  undefined1 local_b4 [4];
  wchar_t *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  wchar_t *local_98;
  longlong *plStack_90;
  undefined8 local_88;
  undefined1 local_7c [4];
  wchar_t *local_78;
  longlong *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1446ddc76(&local_68,"ImageWrapper",1);
  uVar13 = FUN_144a52528();
  plVar14 = (longlong *)FUN_14493e38c(uVar13,local_68);
  (**(code **)(*plVar14 + 0x58))(plVar14,&local_78,0xb,0);
  if (local_78 == (wchar_t *)0x0) {
LAB_1493e58b0:
    (**(code **)(*plVar14 + 0x58))(plVar14,&local_98,1,0);
    plVar1 = local_70;
    plVar14 = plStack_90;
    local_78 = local_98;
    local_98 = (wchar_t *)0x0;
    if (plStack_90 == local_70) {
LAB_1493e5922:
      plVar14 = plStack_90;
      if (plStack_90 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_90 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_90)(plStack_90);
          LOCK();
          piVar3 = (int *)((longlong)plVar14 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
      }
    }
    else {
      plStack_90 = (longlong *)0x0;
      local_70 = plVar14;
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar1 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*plVar1)(plVar1);
          LOCK();
          piVar3 = (int *)((longlong)plVar1 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
        goto LAB_1493e5922;
      }
    }
    if (local_78 != (wchar_t *)0x0) {
      cVar6 = (*(code *)**(undefined8 **)local_78)(local_78,*param_3,param_3[1]);
      uVar12 = 2;
      if (cVar6 != '\0') goto LAB_1493e596e;
    }
    local_98 = L"DecodingFailed";
    plStack_90._0_4_ = 0xe;
    FUN_1446e940c(&local_b0,&local_98);
    local_98 = L"InterchangeUEJPEGTranslator";
    plStack_90 = (longlong *)CONCAT44(plStack_90._4_4_,0x1b);
    FUN_1446e940c(local_7c,&local_98);
    FUN_140208bae(&local_98,local_7c,&local_b0,L"Failed to decode UEJPEG.");
    FUN_1493e5dea(param_1,&local_98);
    if (local_98 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_98 + 0x10))();
    }
    *(undefined1 *)(param_2 + 7) = 0;
    goto LAB_1493e5b03;
  }
  cVar6 = (*(code *)**(undefined8 **)local_78)(local_78,*param_3,param_3[1]);
  uVar12 = 3;
  if (cVar6 == '\0') goto LAB_1493e58b0;
LAB_1493e596e:
  pwVar5 = local_78;
  uVar8 = (**(code **)(*(longlong *)local_78 + 0x58))(local_78);
  uVar9 = (**(code **)(*(longlong *)pwVar5 + 0x50))(pwVar5);
  uVar16 = 0;
  uVar8 = FUN_142882538(uVar8,uVar9,0);
  uVar8 = FUN_146988004(uVar8);
  pwVar5 = local_78;
  iVar10 = (**(code **)(*(longlong *)local_78 + 0x50))(local_78);
  if (iVar10 == 8) {
    cVar6 = (**(code **)(*(longlong *)pwVar5 + 0x58))(pwVar5);
    uVar16 = (ulonglong)(cVar6 != '\x04');
  }
  uVar9 = (**(code **)(*(longlong *)local_78 + 0x48))();
  uVar11 = (**(code **)(*(longlong *)local_78 + 0x40))();
  pwVar5 = local_78;
  local_98 = (wchar_t *)0x0;
  plStack_90 = (longlong *)0x0;
  local_88 = 0;
  if (param_4 == '\0') {
    uVar12 = (**(code **)(*(longlong *)local_78 + 0x58))(local_78);
    iVar10 = (**(code **)(*(longlong *)pwVar5 + 0x50))(pwVar5);
    if ((((char)uVar12 != -1) && (iVar10 != 0)) &&
       (cVar6 = (**(code **)(*(longlong *)pwVar5 + 0x38))(pwVar5,uVar12,iVar10,&local_98),
       cVar6 != '\0')) {
      puVar15 = (undefined8 *)FUN_14001cc68(0x38,0x10);
      plVar14 = plStack_90;
      pwVar5 = local_98;
      uVar12 = 0;
      puVar15[3] = 0;
      *puVar15 = &PTR_FUN_14a399d10;
      puVar15[4] = local_98;
      local_98 = (wchar_t *)0x0;
      puVar15[5] = plStack_90;
      puVar15[6] = local_88;
      plStack_90 = (longlong *)0x0;
      local_88 = 0;
      puVar15[1] = pwVar5;
      puVar15[2] = plVar14;
      LOCK();
      puVar15[3] = puVar15[3] | 0x4000000000000000;
      UNLOCK();
      LOCK();
      puVar15[3] = puVar15[3] | 0x1000000000000000;
      UNLOCK();
      if (puVar15 == (undefined8 *)0x0) {
        puVar15 = (undefined8 *)0x0;
      }
      else {
        LOCK();
        puVar2 = puVar15 + 3;
        uVar4 = *puVar2;
        *puVar2 = *puVar2 + 1;
        UNLOCK();
        if ((uVar4 & 0x3fffffff) == 0) {
          LOCK();
          puVar15[3] = puVar15[3] + 0x40000000;
          UNLOCK();
        }
      }
      goto LAB_1493e5abc;
    }
    local_b0 = L"DecodingFailed";
    local_a8._0_4_ = 0xe;
    FUN_1446e940c(local_7c,&local_b0);
    local_b0 = L"InterchangeUEJPEGTranslator";
    local_a8 = CONCAT44(local_a8._4_4_,0x1b);
    FUN_1446e940c(local_b4,&local_b0);
    FUN_140208bae(&local_b0,local_b4,local_7c,L"Failed to decode UEJPEG.");
    FUN_1493e5dea(param_1,&local_b0);
    if (local_b0 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_b0 + 0x10))();
    }
    uVar7 = 0;
  }
  else {
    local_c0 = uVar16;
    (**(code **)(*(longlong *)local_78 + 0x20))(local_78,&local_b0,0);
    puVar15 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    puVar15[3] = 0;
    *puVar15 = &PTR_FUN_14a399d10;
    puVar15[4] = local_b0;
    puVar15[5] = local_a8;
    puVar15[6] = uStack_a0;
    puVar15[1] = local_b0;
    puVar15[2] = local_a8;
    LOCK();
    puVar15[3] = puVar15[3] | 0x4000000000000000;
    UNLOCK();
    LOCK();
    puVar15[3] = puVar15[3] | 0x1000000000000000;
    UNLOCK();
    if (puVar15 != (undefined8 *)0x0) {
      LOCK();
      puVar2 = puVar15 + 3;
      uVar16 = *puVar2;
      *puVar2 = *puVar2 + 1;
      UNLOCK();
      if ((uVar16 & 0x3fffffff) == 0) {
        LOCK();
        puVar15[3] = puVar15[3] + 0x40000000;
        UNLOCK();
      }
    }
    uStack_a0 = 0;
    local_a8 = 0;
    local_b0 = (wchar_t *)0x0;
    uVar16 = local_c0;
LAB_1493e5abc:
    *param_2 = &PTR_FUN_14bcb3bb0;
    param_2[1] = puVar15;
    *(undefined4 *)(param_2 + 2) = uVar12;
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar8;
    param_2[3] = 0x100000000;
    *(undefined4 *)(param_2 + 4) = uVar11;
    *(undefined4 *)((longlong)param_2 + 0x24) = uVar9;
    *(char *)(param_2 + 5) = (char)uVar16;
    *(undefined1 *)(param_2 + 6) = 0;
    uVar7 = 1;
  }
  *(undefined1 *)(param_2 + 7) = uVar7;
  if (local_98 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_1493e5b03:
  plVar14 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar3 = (int *)((longlong)plVar14 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493e5d5a FUN_1493e5d5a body=142 status=ok
// SIG undefined FUN_1493e5d5a(void)

longlong FUN_1493e5d5a(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  cVar1 = FUN_1493e5550(param_1 + -0x38,L"UEJPEG");
  if (cVar1 == '\0') {
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  else {
    FUN_1493e580a(param_1 + -0x38,param_2,local_38,1);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493e5dea FUN_1493e5dea body=447 status=ok
// SIG undefined FUN_1493e5dea(void)

void FUN_1493e5dea(longlong param_1,undefined8 param_2)

{
  void **ppvVar1;
  void *pvVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = FUN_1493bccfe();
  if (lVar4 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x10);
    if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar6);
    }
    *(longlong *)(lVar4 + 0x58) = lVar6;
    lVar6 = *(longlong *)(param_1 + 0x30);
    if (lVar6 == 0) {
      FUN_14020fad6(lVar4 + 0x60,L"Undefined");
    }
    else {
      local_40 = (void *)0x0;
      local_38 = *(int *)(lVar6 + 0x30);
      lVar5 = (longlong)local_38;
      pvVar2 = *(void **)(lVar6 + 0x28);
      if (lVar5 == 0) {
        local_34 = 0;
      }
      else {
        FUN_1446dd670(&local_40,local_38,0);
        memcpy(local_40,pvVar2,lVar5 * 2);
      }
      iVar3 = local_38;
      pvVar2 = local_40;
      ppvVar1 = (void **)(lVar4 + 0x28);
      if (ppvVar1 != &local_40) {
        lVar6 = (longlong)local_38;
        *(int *)(lVar4 + 0x30) = local_38;
        if (local_38 == 0 && *(int *)(lVar4 + 0x34) == 0) {
          *(undefined4 *)(lVar4 + 0x34) = 0;
        }
        else {
          FUN_1446dd670(ppvVar1,local_38);
          if (iVar3 != 0) {
            memcpy(*ppvVar1,pvVar2,lVar6 * 2);
          }
        }
      }
      FUN_140c50e86(&local_50,&local_40,1);
      if ((longlong *)(lVar4 + 0x60) == &local_50) {
        if (local_50 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(lVar4 + 0x60) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(lVar4 + 0x60) = local_50;
        local_50 = 0;
        *(undefined4 *)(lVar4 + 0x68) = local_48;
        *(undefined4 *)(lVar4 + 0x6c) = local_44;
      }
      if (local_40 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_140008f88(lVar4 + 0x70,param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493e5faa FUN_1493e5faa body=466 status=ok
// SIG undefined FUN_1493e5faa(void)

ulonglong FUN_1493e5faa(longlong param_1,undefined8 param_2,longlong *param_3)

{
  void *pvVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50 [2];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 0x30);
  lVar6 = (longlong)local_38;
  pvVar1 = *(void **)(param_1 + 0x28);
  if (lVar6 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,pvVar1,lVar6 * 2);
  }
  FUN_140d6dd3e(&local_40);
  cVar3 = FUN_1415258a0(&local_40);
  if ((cVar3 != '\0') && (lVar6 = *param_3, lVar6 != 0)) {
    lVar4 = FUN_1458d6086();
    if ((lVar4 != 0) &&
       ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar6 + 0x38) &&
        (lVar2 = *param_3,
        lVar2 != 0 &&
        *(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30)))) {
      FUN_140c50e86(local_50,&local_40,1);
      pvVar1 = local_40;
      local_60 = (void *)0x0;
      lVar6 = (longlong)local_38;
      local_58 = local_38;
      if (lVar6 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_38,0);
        memcpy(local_60,pvVar1,lVar6 * 2);
      }
      plVar5 = (longlong *)FUN_1493e617d(param_2,lVar2);
      uVar7 = CONCAT71((int7)((ulonglong)lVar2 >> 8),plVar5 != (longlong *)0x0);
      if (plVar5 != (longlong *)0x0) {
        FUN_1444ba64e(plVar5,&local_60,local_50,2);
        (**(code **)(*plVar5 + 0x2f0))(plVar5,&local_40);
        FUN_1492f22b0(param_2,local_70,plVar5);
        if (local_70[0] != 0) {
          FUN_1400020a8();
        }
      }
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_50[0] != 0) {
        FUN_1400020a8();
      }
      goto LAB_1493e605d;
    }
  }
  uVar7 = 0;
LAB_1493e605d:
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493e617d FUN_1493e617d body=175 status=ok
// SIG undefined FUN_1493e617d(void)

undefined8 FUN_1493e617d(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  FUN_144a5c54a(local_b8,param_2);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
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



// FUNCTION 1493e622e FUN_1493e622e body=104 status=ok
// SIG undefined FUN_1493e622e(void)

void FUN_1493e622e(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = FUN_145b9fff6();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  FUN_1493e5faa(param_1,param_2,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493e6298 FUN_1493e6298 body=104 status=ok
// SIG undefined FUN_1493e6298(void)

void FUN_1493e6298(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = FUN_145b9ff0c();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  FUN_1493e5faa(param_1,param_2,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493e6302 FUN_1493e6302 body=104 status=ok
// SIG undefined FUN_1493e6302(void)

void FUN_1493e6302(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = FUN_145b9fe22();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  FUN_1493e5faa(param_1,param_2,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493e636c FUN_1493e636c body=104 status=ok
// SIG undefined FUN_1493e636c(void)

void FUN_1493e636c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = FUN_145ba01ca();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  FUN_1493e5faa(param_1,param_2,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493e63d6 FUN_1493e63d6 body=104 status=ok
// SIG undefined FUN_1493e63d6(void)

void FUN_1493e63d6(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = FUN_145ba00e0();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  FUN_1493e5faa(param_1,param_2,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493e6440 FUN_1493e6440 body=1249 status=ok
// SIG undefined FUN_1493e6440(void)

undefined4 FUN_1493e6440(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  void *_Src;
  longlong *plVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_178 [36];
  undefined1 local_154 [4];
  longlong *local_150 [2];
  undefined8 local_140;
  longlong *local_138;
  longlong *local_130 [2];
  longlong *local_120 [2];
  undefined1 local_10c [4];
  longlong *local_108 [2];
  undefined8 local_f8;
  longlong *local_f0;
  longlong *local_e8 [2];
  longlong *local_d8 [2];
  longlong *local_c8;
  int local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  longlong *local_78 [2];
  undefined4 local_68 [4];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar4 = *(longlong *)(param_1 + 0x30);
  if (lVar4 == 0) {
    FUN_140056680(local_e8,param_2);
    FUN_140233b1a(local_d8,local_e8);
    local_88 = L"TextureImportFailure_BadData";
    local_80[0] = 0x1c;
    FUN_1446e940c(local_150,&local_88);
    local_88 = L"InterchangeTextureTranslator";
    local_80[0] = 0x1c;
    FUN_1446e940c(local_10c,&local_88);
    FUN_140208bae(local_108,local_10c,local_150,L"{0}: Failed to import, bad source data.");
    FUN_14023409e(&local_f8,local_108,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_d8);
    local_a0 = (ulonglong *)local_68;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_f8;
    local_b0 = local_f0;
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(&local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    if (local_78[0] != (longlong *)0x0) {
      (**(code **)(*local_78[0] + 0x10))();
    }
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_f0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar1 = (int *)((longlong)local_f0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_f0 + 0x10))(local_f0);
        }
      }
    }
    if (local_d8[0] != (longlong *)0x0) {
      (**(code **)(*local_d8[0] + 0x10))();
    }
    FUN_1493e5dea(param_1,&local_c8);
    if (local_c8 != (longlong *)0x0) {
      (**(code **)(*local_c8 + 0x10))();
    }
    if (local_108[0] != (longlong *)0x0) {
      (**(code **)(*local_108[0] + 0x10))();
    }
    if (local_e8[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
    uVar3 = 0;
  }
  else {
    local_c8 = (longlong *)0x0;
    local_c0 = *(int *)(lVar4 + 0x30);
    lVar5 = (longlong)local_c0;
    _Src = *(void **)(lVar4 + 0x28);
    if (lVar5 == 0) {
      local_bc = 0;
    }
    else {
      FUN_1446dd670(&local_c8,local_c0,0);
      memcpy(local_c8,_Src,lVar5 * 2);
    }
    uVar3 = FUN_1415258a0(&local_c8);
    if ((char)uVar3 == '\0') {
      FUN_140009b9a(local_120,&local_c8);
      FUN_140056680(local_108,param_2);
      FUN_140233b1a(local_130,local_108);
      local_88 = L"TextureImportFailure_OpenFile";
      local_80[0] = 0x1d;
      FUN_1446e940c(local_10c,&local_88);
      local_88 = L"InterchangeTextureTranslator";
      local_80[0] = 0x1c;
      FUN_1446e940c(local_154,&local_88);
      FUN_140208bae(local_150,local_154,local_10c,
                    L"{0}: Failed to import texture asset, cannot open file [{1}].");
      FUN_14023409e(&local_140,local_150,1);
      local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
      FUN_14023423e(local_78,local_130);
      local_68[0] = 4;
      FUN_14023423e(local_58,local_120);
      local_a0 = &local_48;
      local_a8 = &local_88;
      FUN_14010d304(&local_98);
      local_b8 = local_140;
      local_b0 = local_138;
      if (local_138 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_138 + 1) = (int)local_138[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_e8,&local_b8,&local_98);
      FUN_14007f2db(local_98,local_90);
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      lVar4 = 0x30;
      do {
        plVar2 = *(longlong **)((longlong)local_80 + lVar4 + -8);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))();
          *(undefined8 *)((longlong)local_80 + lVar4 + -8) = 0;
          *(undefined4 *)((longlong)local_80 + lVar4) = 0;
        }
        lVar4 = lVar4 + -0x20;
      } while (lVar4 != -0x10);
      if (local_138 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_138 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_138)(local_138);
          LOCK();
          piVar1 = (int *)((longlong)local_138 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_138 + 0x10))(local_138);
          }
        }
      }
      if (local_130[0] != (longlong *)0x0) {
        (**(code **)(*local_130[0] + 0x10))();
      }
      if (local_120[0] != (longlong *)0x0) {
        (**(code **)(*local_120[0] + 0x10))();
      }
      FUN_1493e5dea(param_1,local_e8);
      if (local_e8[0] != (longlong *)0x0) {
        (**(code **)(*local_e8[0] + 0x10))();
      }
      if (local_150[0] != (longlong *)0x0) {
        (**(code **)(*local_150[0] + 0x10))();
      }
      if (local_108[0] != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_c8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493e6938 FUN_1493e6938 body=40 status=ok
// SIG undefined FUN_1493e6938(void)

undefined8 * FUN_1493e6938(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  if (DAT_14cc149e8 == '\x01') {
    FUN_1490d6b26(param_2);
  }
  return param_2;
}



// FUNCTION 1493e6964 FUN_1493e6964 body=131 status=ok
// SIG undefined FUN_1493e6964(void)

void FUN_1493e6964(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (lVar1 != 0) {
    FUN_1458b0bbe(local_28);
    FUN_14603997e(lVar1,local_28);
    FUN_145d37a3e(local_28);
    *(undefined8 *)(lVar1 + 0x60) = 0;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      FUN_14472eae2(*(longlong *)(param_1 + 0x60),2);
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493e69e8 FUN_1493e69e8 body=236 status=ok
// SIG undefined FUN_1493e69e8(void)

longlong FUN_1493e69e8(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x58) == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x60);
    if (lVar5 == 0) {
      uVar2 = FUN_1409ffe1d();
      lVar3 = FUN_1459f6b36();
      lVar5 = *(longlong *)(lVar3 + 0x110);
      if (lVar5 == 0) {
        FUN_140aa6c08(lVar3);
        lVar5 = *(longlong *)(lVar3 + 0x110);
      }
      uVar4 = FUN_1459f6b36();
      lVar5 = FUN_14092e757(uVar4,lVar5,uVar2,0);
      if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar5);
      }
      *(longlong *)(param_1 + 0x60) = lVar5;
      FUN_1444b9cd0(lVar5);
      FUN_14472eae2(*(undefined8 *)(param_1 + 0x60),0x20);
      FUN_144757f48(*(undefined8 *)(param_1 + 0x60),2);
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x60) + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      FUN_14482b126(lVar5,0x4000000);
      lVar5 = *(longlong *)(param_1 + 0x60);
    }
  }
  return lVar5;
}



// FUNCTION 1493e6ad4 FUN_1493e6ad4 body=276 status=ok
// SIG undefined FUN_1493e6ad4(void)

void FUN_1493e6ad4(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x58) != 0) {
    if (*(longlong *)(param_1 + 0x60) != 0) {
      FUN_14472eae2(*(longlong *)(param_1 + 0x60),2);
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x60) + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      FUN_14482b126(lVar4,0x4000000);
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
    if (param_2 != 0) {
      lVar4 = FUN_1459f6b36();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
        uVar2 = FUN_1409ffe1d();
        uVar3 = FUN_1459f6b36();
        lVar4 = FUN_14092e757(uVar3,param_2,uVar2,0);
        if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar4);
        }
        *(longlong *)(param_1 + 0x60) = lVar4;
        uVar1 = *(uint *)(lVar4 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar4 = 0;
        }
        FUN_14482b126(lVar4,0x4000000);
        FUN_144757f48(*(undefined8 *)(param_1 + 0x60),2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1493e6bf4 FUN_1493e6bf4 body=543 status=ok
// SIG undefined FUN_1493e6bf4(void)

longlong FUN_1493e6bf4(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  undefined4 local_c0;
  uint uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  uint local_b0;
  int iStack_ac;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  uint local_90;
  int iStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  char local_70;
  char local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(undefined1 *)(param_2 + 0x38) = 0;
  lVar6 = *(longlong *)(param_1 + 0x18);
  plVar1 = (longlong *)(lVar6 + 0x68);
  plVar2 = (longlong *)(lVar6 + 0x78);
  local_a0 = (undefined **)0x100000000;
  local_90 = 0xffffffff;
  iStack_8c = 0;
  uStack_88 = 0;
  uStack_98 = plVar2;
  if (*(int *)(lVar6 + 0x90) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_a0);
    iVar9 = *(int *)(lVar6 + 0x90);
  }
  uStack_a8 = CONCAT44(uStack_84,uStack_88);
  local_b0 = local_90;
  iStack_ac = iStack_8c;
  local_c0 = (undefined4)local_a0;
  uStack_bc = local_a0._4_4_;
  uStack_b8 = (undefined4)uStack_98;
  uStack_b4 = uStack_98._4_4_;
  local_c8 = plVar1;
  if ((iStack_8c != iVar9) || (uStack_98 != plVar2)) {
    do {
      lVar6 = *(longlong *)(*local_c8 + 0x10 + (longlong)iStack_ac * 0x20);
      if (lVar6 != 0) {
        uVar7 = FUN_14588b4b2();
        plVar8 = (longlong *)FUN_144718840(lVar6,uVar7);
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x10))(plVar8,&local_a0,param_3,param_4);
          FUN_1493cc988(param_2,&local_a0);
          plVar8 = uStack_98;
          if (local_68 == '\x01') {
            local_a0 = &PTR_FUN_14bcb3bb0;
            if (local_70 == '\x01') {
              local_70 = '\0';
            }
            if (uStack_98 != (longlong *)0x0) {
              LOCK();
              plVar3 = uStack_98 + 3;
              lVar6 = *plVar3;
              *plVar3 = *plVar3 + -1;
              UNLOCK();
              if (((uint)lVar6 & 0x3fffffff) == 1) {
                (**(code **)(*uStack_98 + 0x10))(uStack_98);
                plVar8[1] = 0;
                plVar8[2] = 0;
                LOCK();
                puVar4 = (ulonglong *)(plVar8 + 3);
                uVar5 = *puVar4;
                *puVar4 = *puVar4 - 0x40000000;
                UNLOCK();
                if ((uVar5 & 0xfffffffc0000000) == 0x40000000) {
                  (**(code **)*plVar8)(plVar8,1);
                }
              }
            }
          }
          if (*(char *)(param_2 + 0x38) != '\0') break;
        }
      }
      local_b0 = local_b0 & ~uStack_bc;
      FUN_1449c0562(&local_c0);
    } while (local_c8 != plVar1 ||
             ((longlong *)CONCAT44(uStack_b4,uStack_b8) != plVar2 || iStack_ac != iVar9));
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1493e6e2e FUN_1493e6e2e body=255 status=ok
// SIG undefined FUN_1493e6e2e(void)

undefined8 * FUN_1493e6e2e(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  param_2[1] = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  lVar2 = param_3[1];
  if (0 < (longlong)(int)lVar2) {
    lVar7 = 0x20;
    lVar6 = 0;
    do {
      uVar4 = uStack_50;
      uVar3 = uStack_60;
      if (*(char *)(*param_3 + lVar7) == '\x04') {
        iVar8 = (int)uStack_50;
        uVar1 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar1);
        plVar5 = &local_58;
        if (uStack_50._4_4_ < uVar1) {
          FUN_1446f48e2(&local_58,uVar4 & 0xffffffff);
        }
      }
      else {
        iVar8 = (int)uStack_60;
        uVar1 = (int)uStack_60 + 1;
        uStack_60 = CONCAT44(uStack_60._4_4_,uVar1);
        plVar5 = &local_68;
        if (uStack_60._4_4_ < uVar1) {
          FUN_1446f48e2(&local_68,uVar3 & 0xffffffff);
        }
      }
      *(int *)(*plVar5 + (longlong)iVar8 * 4) = (int)lVar6;
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0x50;
    } while ((int)lVar2 != lVar6);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1493e6f36 FUN_1493e6f36 body=45 status=ok
// SIG undefined FUN_1493e6f36(void)

longlong FUN_1493e6f36(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493e6f6a FUN_1493e6f6a body=45 status=ok
// SIG undefined FUN_1493e6f6a(void)

longlong FUN_1493e6f6a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_145e2b62e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493e6f9e FUN_1493e6f9e body=45 status=ok
// SIG undefined FUN_1493e6f9e(void)

longlong FUN_1493e6f9e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x40;
  FUN_145e2b62e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493e6fd2 FUN_1493e6fd2 body=45 status=ok
// SIG undefined FUN_1493e6fd2(void)

longlong FUN_1493e6fd2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x48;
  FUN_145e2b62e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493e7006 FUN_1493e7006 body=115 status=ok
// SIG undefined FUN_1493e7006(void)

undefined8 FUN_1493e7006(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  int iStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  local_20 = 0xffffffff00000000;
  (**(code **)(*param_1 + 0x10))(param_1,param_2,param_4,&local_28);
  if ((iStack_1c != -1) && (local_28 != 0)) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493e707a FUN_1493e707a body=45 status=ok
// SIG undefined FUN_1493e707a(void)

longlong FUN_1493e707a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x50;
  FUN_145e2b62e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493e70ad FUN_1493e70ad body=175 status=ok
// SIG undefined FUN_1493e70ad(void)

undefined8 FUN_1493e70ad(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  FUN_144a5c54a(local_b8,param_2);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
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



// FUNCTION 1493e715e FUN_1493e715e body=95 status=ok
// SIG undefined FUN_1493e715e(void)

void FUN_1493e715e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 1493e71be FUN_1493e71be body=132 status=ok
// SIG undefined FUN_1493e71be(void)

void FUN_1493e71be(longlong param_1,int param_2)

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



// FUNCTION 1493e7244 FUN_1493e7244 body=53 status=ok
// SIG undefined FUN_1493e7244(void)

void FUN_1493e7244(undefined8 *param_1)

{
  if (*(char *)(param_1 + 7) == '\x01') {
    *param_1 = &PTR_FUN_14bcb3bb0;
    if (*(char *)(param_1 + 6) == '\x01') {
      *(undefined1 *)(param_1 + 6) = 0;
    }
    FUN_14152e1c8(param_1 + 1);
    *(undefined1 *)(param_1 + 7) = 0;
  }
  return;
}



// FUNCTION 1493e7280 FUN_1493e7280 body=53 status=ok
// SIG undefined FUN_1493e7280(void)

void FUN_1493e7280(undefined8 *param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    *param_1 = &PTR_FUN_14bcb3bb0;
    if (*(char *)(param_1 + 6) == '\x01') {
      *(undefined1 *)(param_1 + 6) = 0;
    }
    FUN_14152e1c8(param_1 + 1);
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 1493e72b6 FUN_1493e72b6 body=53 status=ok
// SIG undefined FUN_1493e72b6(void)

void FUN_1493e72b6(undefined8 *param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    *param_1 = &PTR_FUN_14bcb3bb0;
    if (*(char *)(param_1 + 6) == '\x01') {
      *(undefined1 *)(param_1 + 6) = 0;
    }
    FUN_14152e1c8(param_1 + 1);
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 1493e72ec FUN_1493e72ec body=56 status=ok
// SIG undefined FUN_1493e72ec(void)

void FUN_1493e72ec(longlong param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    if (*(char *)(param_1 + 0x28) == '\x01') {
      *(undefined1 *)(param_1 + 0x28) = 0;
    }
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    FUN_14152e1c8(param_1);
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1493e7324 FUN_1493e7324 body=95 status=ok
// SIG undefined FUN_1493e7324(void)

void FUN_1493e7324(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
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



// FUNCTION 1493e7384 FUN_1493e7384 body=132 status=ok
// SIG undefined FUN_1493e7384(void)

void FUN_1493e7384(longlong param_1,int param_2)

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



// FUNCTION 1493e7409 FUN_1493e7409 body=64 status=ok
// SIG undefined FUN_1493e7409(void)

void FUN_1493e7409(longlong param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 != 0) {
    pcVar1 = (char *)(param_1 + 0x30);
    do {
      *(undefined ***)(pcVar1 + -0x30) = &PTR_FUN_14bcb3bb0;
      if (*pcVar1 == '\x01') {
        *pcVar1 = '\0';
      }
      FUN_14152e1c8(pcVar1 + -0x28);
      pcVar1 = pcVar1 + 0x38;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1493e7449 FUN_1493e7449 body=42 status=ok
// SIG undefined FUN_1493e7449(void)

void FUN_1493e7449(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14bcb3bb0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    *(undefined1 *)(param_1 + 5) = 1;
    *(undefined1 *)(param_1 + 6) = 0;
    param_1 = param_1 + 7;
  }
  return;
}



// FUNCTION 1493e7474 FUN_1493e7474 body=143 status=ok
// SIG undefined FUN_1493e7474(void)

void FUN_1493e7474(longlong param_1,int param_2)

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



// FUNCTION 1493e7504 FUN_1493e7504 body=62 status=ok
// SIG undefined FUN_1493e7504(void)

void FUN_1493e7504(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1493e7542(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x38,8);
  }
  return;
}



// FUNCTION 1493e7542 FUN_1493e7542 body=104 status=ok
// SIG undefined FUN_1493e7542(void)

ulonglong FUN_1493e7542(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x38) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1493e7578;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x38,8);
      param_2 = param_2 / 0x38;
    }
  }
LAB_1493e7578:
  return param_2 & 0xffffffff;
}



// FUNCTION 1493e75aa FUN_1493e75aa body=62 status=ok
// SIG undefined FUN_1493e75aa(void)

void FUN_1493e75aa(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1493e75e8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1493e75e8 FUN_1493e75e8 body=93 status=ok
// SIG undefined FUN_1493e75e8(void)

ulonglong FUN_1493e75e8(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
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



// FUNCTION 1493e7646 FUN_1493e7646 body=112 status=ok
// SIG undefined FUN_1493e7646(void)

void FUN_1493e7646(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,4);
  }
  return;
}



// FUNCTION 1493e7806 FUN_1493e7806 body=62 status=ok
// SIG undefined FUN_1493e7806(void)

void FUN_1493e7806(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1493e7844(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,4);
  }
  return;
}



// FUNCTION 1493e7844 FUN_1493e7844 body=112 status=ok
// SIG undefined FUN_1493e7844(void)

ulonglong FUN_1493e7844(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1493e787e;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,4);
      param_2 = param_2 / 0x18;
    }
  }
LAB_1493e787e:
  return param_2 & 0xffffffff;
}



// FUNCTION 1493e78b4 FUN_1493e78b4 body=59 status=ok
// SIG undefined FUN_1493e78b4(void)

void FUN_1493e78b4(longlong *param_1)

{
  FUN_1493e78ef(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1493e78ef FUN_1493e78ef body=43 status=ok
// SIG undefined FUN_1493e78ef(void)

void FUN_1493e78ef(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 1493e791a FUN_1493e791a body=118 status=ok
// SIG undefined FUN_1493e791a(void)

void FUN_1493e791a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
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
  FUN_1490d6eb4(param_1 + 0x20);
  FUN_1490d6e70(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x0001493e7984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1493e7990 FUN_1493e7990 body=128 status=ok
// SIG undefined FUN_1493e7990(void)

void FUN_1493e7990(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cc14a70;
  if (DAT_14cc14aa4 != 0) {
    *(int *)(DAT_14cc14a70 + (longlong)DAT_14cc14aa0 * 0x14) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x14) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cc14aa4) {
    iVar4 = DAT_14cc14aa0;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x14) = iVar4;
  DAT_14cc14aa4 = DAT_14cc14aa4 + 1;
  puVar3 = &DAT_14cc14a80;
  if (DAT_14cc14a90 != (undefined *)0x0) {
    puVar3 = DAT_14cc14a90;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cc14aa0 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 1493e7b1c FUN_1493e7b1c body=356 status=ok
// SIG undefined FUN_1493e7b1c(void)

void FUN_1493e7b1c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
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
  plVar1 = (longlong *)(param_1 + 0x28);
  lVar2 = param_1 + 0x38;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x50) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar9 = *(int *)(param_1 + 0x50);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar9) || (uStack_60 != lVar2)) {
    do {
      lVar3 = *local_90;
      lVar8 = (longlong)iStack_74 * 0x20;
      if (*(longlong *)(lVar3 + 0x10 + lVar8) != 0) {
        plVar10 = (longlong *)(lVar3 + lVar8 + 0x10);
        uVar7 = FUN_145a932d8();
        bVar5 = FUN_144a7ca96(plVar10,uVar7);
        lVar4 = *plVar10;
        if (((lVar4 != 0 & bVar5) == 1) &&
           (local_68 = lVar4, cVar6 = (*(code *)*param_2)(param_2[1],lVar3 + lVar8,&local_68),
           cVar6 != '\0')) break;
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar9));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493e7c82 FUN_1493e7c82 body=356 status=ok
// SIG undefined FUN_1493e7c82(void)

void FUN_1493e7c82(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
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
  plVar1 = (longlong *)(param_1 + 0x28);
  lVar2 = param_1 + 0x38;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x50) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar9 = *(int *)(param_1 + 0x50);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar9) || (uStack_60 != lVar2)) {
    do {
      lVar3 = *local_90;
      lVar8 = (longlong)iStack_74 * 0x20;
      if (*(longlong *)(lVar3 + 0x10 + lVar8) != 0) {
        plVar10 = (longlong *)(lVar3 + lVar8 + 0x10);
        uVar7 = FUN_14599b312();
        bVar5 = FUN_144a7ca96(plVar10,uVar7);
        lVar4 = *plVar10;
        if (((lVar4 != 0 & bVar5) == 1) &&
           (local_68 = lVar4, cVar6 = (*(code *)*param_2)(param_2[1],lVar3 + lVar8,&local_68),
           cVar6 != '\0')) break;
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar9));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493e7de7 FUN_1493e7de7 body=790 status=ok
// SIG undefined FUN_1493e7de7(void)

void FUN_1493e7de7(longlong **param_1,undefined8 param_2,undefined8 *param_3,longlong param_4,
                  undefined8 param_5)

{
  uint uVar1;
  void *_Src;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  longlong **local_d0;
  int local_c4;
  longlong local_c0 [2];
  longlong *local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  code *local_98;
  longlong **local_90;
  longlong local_88 [4];
  longlong local_68 [3];
  char local_49;
  ulonglong local_48;
  
  uVar3 = param_5;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (0 < *(int *)(param_3 + 1)) {
    local_49 = '\0';
    FUN_140056680(&local_b0,L"RenameLikeLegacyFbx");
    FUN_1492ee61c(param_2,&local_b0,&local_49);
    if (local_b0 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_49 == '\x01') {
      local_68[0] = 0;
      local_68[1] = 0;
      FUN_14933871e(param_2,local_68);
      local_b0 = (longlong *)0x0;
      uVar1 = *(uint *)(*(longlong *)*param_3 + 0x30);
      _Src = *(void **)(*(longlong *)*param_3 + 0x28);
      local_a8 = (longlong *)CONCAT44(local_a8._4_4_,uVar1);
      if ((longlong)(int)uVar1 == 0) {
        local_a8 = (longlong *)(ulonglong)uVar1;
      }
      else {
        FUN_1446dd670(&local_b0,uVar1,0);
        memcpy(local_b0,_Src,(longlong)(int)uVar1 * 2);
      }
      FUN_1405f3246(local_88 + 2,&local_b0,1);
      if (local_b0 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      local_88[0] = 0;
      local_88[1] = 0;
      if (param_4 != 0) {
        lVar4 = FUN_145ba3152();
        if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_4 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
           (*(char *)(param_4 + 0x159) == '\0')) {
          local_a8 = local_88;
          local_a0 = &param_5;
          local_98 = FUN_14450f05a;
          local_b0 = local_68;
          local_90 = &local_b0;
          FUN_1493e7c82(uVar3);
        }
      }
      FUN_140474144(local_c0,local_88 + 2,local_88);
      FUN_144a882a8(&local_b0,local_c0,L"_Anim");
      if (&local_b0 == param_1) {
        if (local_b0 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_1 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        *param_1 = local_b0;
        local_b0 = (longlong *)0x0;
        *(int *)(param_1 + 1) = (int)local_a8;
        *(undefined4 *)((longlong)param_1 + 0xc) = local_a8._4_4_;
        local_a8 = (longlong *)0x0;
      }
      if (local_c0[0] != 0) {
        FUN_1400020a8();
      }
      local_b0 = (longlong *)&local_c4;
      local_c4 = 0;
      local_d8 = &LAB_14450f32c;
      local_d0 = &local_b0;
      FUN_1493e7b1c(param_5);
      if (1 < local_c4) {
        FUN_1492ee7cc(param_2,local_c0);
        FUN_140ba7826(&local_b0,&DAT_149e01f60,local_c0);
        iVar2 = (int)local_a8 + -1;
        if ((int)local_a8 == 0) {
          iVar2 = 0;
        }
        FUN_1400020e8(param_1,local_b0,iVar2);
        if (local_b0 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if (local_c0[0] != 0) {
          FUN_1400020a8();
        }
      }
      FUN_1492ea6ec(param_1,0);
      if (local_88[0] != 0) {
        FUN_1400020a8();
      }
      if (local_88[2] != 0) {
        FUN_1400020a8();
      }
      if (local_68[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493e8104 FUN_1493e8104 body=336 status=ok
// SIG undefined FUN_1493e8104(void)

void FUN_1493e8104(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
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
  plVar1 = (longlong *)(param_1 + 0x28);
  lVar2 = param_1 + 0x38;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x50) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar7 = *(int *)(param_1 + 0x50);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar7) || (uStack_60 != lVar2)) {
    do {
      lVar3 = *local_90;
      lVar8 = (longlong)iStack_74 * 0x20;
      if (*(longlong *)(lVar3 + 0x10 + lVar8) != 0) {
        plVar9 = (longlong *)(lVar3 + lVar8 + 0x10);
        uVar6 = FUN_145a93014();
        bVar5 = FUN_144a7ca96(plVar9,uVar6);
        lVar4 = *plVar9;
        if ((lVar4 != 0 & bVar5) == 1) {
          local_68 = lVar4;
          (*(code *)*param_2)(param_2[1],lVar3 + lVar8);
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar7));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493e8256 FUN_1493e8256 body=336 status=ok
// SIG undefined FUN_1493e8256(void)

void FUN_1493e8256(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
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
  plVar1 = (longlong *)(param_1 + 0x28);
  lVar2 = param_1 + 0x38;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x50) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar7 = *(int *)(param_1 + 0x50);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar7) || (uStack_60 != lVar2)) {
    do {
      lVar4 = *local_90;
      lVar8 = (longlong)iStack_74 * 0x20;
      if (*(longlong *)(lVar4 + 0x10 + lVar8) != 0) {
        plVar9 = (longlong *)(lVar4 + lVar8 + 0x10);
        uVar6 = FUN_1459238a6();
        bVar5 = FUN_144a7ca96(plVar9,uVar6);
        lVar3 = *plVar9;
        if ((lVar3 != 0 & bVar5) == 1) {
          local_68 = lVar3;
          (*(code *)*param_2)(param_2[1],lVar4 + lVar8);
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar7));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493e83a8 FUN_1493e83a8 body=336 status=ok
// SIG undefined FUN_1493e83a8(void)

void FUN_1493e83a8(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
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
  plVar1 = (longlong *)(param_1 + 0x28);
  lVar2 = param_1 + 0x38;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x50) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar7 = *(int *)(param_1 + 0x50);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar7) || (uStack_60 != lVar2)) {
    do {
      lVar3 = *local_90;
      lVar8 = (longlong)iStack_74 * 0x20;
      if (*(longlong *)(lVar3 + 0x10 + lVar8) != 0) {
        plVar9 = (longlong *)(lVar3 + lVar8 + 0x10);
        uVar6 = FUN_145a932d8();
        bVar5 = FUN_144a7ca96(plVar9,uVar6);
        lVar4 = *plVar9;
        if ((lVar4 != 0 & bVar5) == 1) {
          local_68 = lVar4;
          (*(code *)*param_2)(param_2[1],lVar3 + lVar8);
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar7));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493e84fa FUN_1493e84fa body=747 status=ok
// SIG undefined FUN_1493e84fa(void)

void FUN_1493e84fa(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_d8 [32];
  longlong local_b8 [2];
  longlong local_a8 [2];
  longlong local_98 [3];
  ulonglong uStack_80;
  longlong local_70 [2];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1492ef9be(param_2,local_98 + 2);
  FUN_140b1283a(local_70,L"Factory_",local_98 + 2);
  if (local_98[2] != 0) {
    FUN_1400020a8();
  }
  lVar2 = FUN_1493ea2e5(*(undefined8 *)(param_1 + 0x1a0));
  FUN_1492ee7cc(param_2,local_98 + 2);
  FUN_1444ba64e(lVar2,local_70,local_98 + 2,3);
  if (local_98[2] != 0) {
    FUN_1400020a8();
  }
  FUN_1492f03f8(lVar2,1);
  local_98[2] = 0;
  uStack_80 = 0;
  FUN_1492f1448(param_2 + 0x70,local_98 + 2);
  if ((longlong)(int)uStack_80 != 0) {
    lVar5 = (longlong)(int)uStack_80 << 4;
    lVar6 = local_98[2];
    do {
      FUN_14938188a(lVar2,lVar6);
      lVar3 = FUN_1492f2ba8(*(undefined8 *)(param_1 + 0x1a0),lVar6);
      if (lVar3 != 0) {
        lVar4 = FUN_14595e668();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          lVar4 = FUN_1459f62ea();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)) {
            lVar4 = FUN_145a93100();
            if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)) goto LAB_1493e86d1;
            local_98[0] = 0;
            local_98[1] = 0;
            cVar1 = FUN_14933853e(lVar3,local_98);
          }
          else {
            local_98[0] = 0;
            local_98[1] = 0;
            cVar1 = FUN_1493374a4(lVar3,local_98);
          }
          if (cVar1 != '\0') {
            FUN_140b1283a(local_a8,L"Factory_",local_98);
            FUN_1444bb06c(lVar2 + 0x60,local_a8);
            if (local_a8[0] != 0) {
              FUN_1400020a8();
            }
          }
          if (local_98[0] != 0) {
            FUN_1400020a8();
          }
        }
      }
LAB_1493e86d1:
      lVar6 = lVar6 + 0x10;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  cVar1 = FUN_14933722c(param_2,local_a8);
  if (cVar1 != '\0') {
    FUN_149381942(lVar2,local_a8);
  }
  FUN_1492f9378(param_2,lVar2,0);
  FUN_1492ef9be(param_2,local_98);
  FUN_1444bb06c(lVar2 + 0x40,local_98);
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1492ef9be(lVar2,local_98);
  FUN_1444bb06c(param_2 + 0x40,local_98);
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1492f22b0(*(undefined8 *)(param_1 + 0x1a0),local_b8,lVar2);
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_98[2],uStack_80 & 0xffffffff);
  if (local_98[2] != 0) {
    FUN_1400020a8();
  }
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493e87e6 FUN_1493e87e6 body=6910 status=ok
// SIG undefined FUN_1493e87e6(void)

void FUN_1493e87e6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  void *pvVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong ***ppplVar8;
  longlong **_Str1;
  char cVar9;
  undefined1 uVar10;
  byte bVar11;
  byte bVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong ***ppplVar16;
  longlong lVar17;
  longlong *plVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined2 *puVar21;
  ulonglong uVar22;
  longlong **pplVar23;
  int iVar24;
  longlong **pplVar25;
  float fVar26;
  undefined1 auVar27 [16];
  float fVar28;
  undefined1 auStack_488 [32];
  undefined8 local_468;
  longlong **local_460;
  int local_458;
  int local_454;
  longlong ***local_450;
  longlong local_448;
  longlong local_440 [2];
  code *local_430;
  longlong **local_428;
  longlong local_420;
  longlong *local_418;
  longlong *local_410 [2];
  longlong *local_400 [2];
  longlong *local_3f0 [2];
  undefined1 local_3e0 [4];
  undefined1 local_3dc [4];
  longlong *local_3d8 [2];
  longlong local_3c8;
  longlong *local_3c0;
  longlong *local_3b8 [2];
  undefined8 local_3a8;
  longlong *plStack_3a0;
  longlong *local_398 [2];
  undefined8 local_388;
  longlong *plStack_380;
  longlong *local_378 [2];
  undefined8 local_368;
  longlong *plStack_360;
  longlong *local_358 [2];
  undefined8 local_348;
  longlong *plStack_340;
  longlong *local_338 [2];
  undefined8 local_328;
  longlong *plStack_320;
  longlong *local_318 [2];
  longlong *local_308;
  longlong *plStack_300;
  longlong *local_2f8 [2];
  longlong local_2e8;
  longlong *plStack_2e0;
  longlong *local_2d8 [2];
  longlong local_2c8;
  longlong *plStack_2c0;
  longlong *local_2b8 [2];
  longlong **local_2a8;
  ulonglong uStack_2a0;
  int local_290;
  float local_28c;
  int local_288;
  float local_284;
  int local_280;
  int local_27c;
  int local_278;
  int local_274;
  double local_270;
  double local_268;
  double local_260;
  longlong local_258 [2];
  code *local_248;
  longlong ***local_240;
  longlong local_238 [2];
  longlong local_228 [3];
  longlong *local_210;
  longlong ***local_208;
  undefined4 *local_200;
  longlong *local_1f8;
  longlong ***ppplStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1cc;
  undefined4 local_1c4;
  longlong local_1b8;
  undefined4 local_1b0;
  longlong **local_1a8;
  undefined8 uStack_1a0;
  longlong local_198;
  undefined1 local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_17c;
  undefined4 local_174;
  longlong local_168;
  undefined4 local_160;
  undefined1 local_158 [16];
  undefined4 local_148 [4];
  undefined1 local_138 [16];
  undefined4 local_128;
  undefined1 local_118 [16];
  undefined4 local_108;
  undefined1 local_f8 [16];
  undefined4 local_e8;
  undefined1 local_d8 [16];
  undefined4 local_c8;
  undefined1 local_b8 [16];
  undefined4 local_a8;
  undefined1 local_98 [16];
  undefined4 local_88 [2];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_488;
  local_228[0] = 0;
  local_228[1] = 0;
  cVar9 = FUN_14933871e(param_2);
  if (cVar9 == '\0') goto LAB_1493e8847;
  lVar17 = param_1 + 0x148;
  lVar14 = FUN_14479d2ce(lVar17);
  cVar9 = *(char *)(lVar14 + 0x148);
  FUN_140b1283a(local_238,L"Factory_",local_228);
  lVar14 = FUN_1492f2702(*(undefined8 *)(param_1 + 0x1a0),local_238);
  if (lVar14 == 0) {
LAB_1493e890c:
    lVar14 = 0;
  }
  else {
    lVar15 = FUN_145a94ad0();
    if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x38) < *(int *)(lVar15 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8
         ) != lVar15 + 0x30)) goto LAB_1493e890c;
  }
  FUN_1492ef9be(param_2,&local_1a8);
  iVar24 = DAT_14cc14c30 + -1;
  puVar21 = DAT_14cc14c28;
  if (DAT_14cc14c30 == 0) {
    puVar21 = &DAT_149dfb77a;
    iVar24 = 0;
  }
  uVar10 = FUN_144a791f8(&local_1a8,puVar21,iVar24,1);
  if (local_1a8 != (longlong **)0x0) {
    FUN_1400020a8();
  }
  if ((lVar14 == 0) && (cVar9 != '\0')) {
    lVar14 = FUN_14479d2ce(lVar17);
    cVar9 = FUN_144729dda(lVar14 + 0x14c);
    if (cVar9 != '\0') {
      lVar14 = FUN_14479d2ce(lVar17);
      local_198 = *(longlong *)(lVar14 + 0x14c);
      local_1a8 = &local_1f8;
      local_1f8 = (longlong *)CONCAT44(local_1f8._4_4_,0xffffffff);
      ppplStack_1f0 = (longlong ***)0x0;
      uStack_1e8 = 0;
      uStack_1a0 = *(undefined8 *)(param_1 + 0x1a0);
      local_248 = FUN_14450f7e2;
      local_240 = &local_1a8;
      local_190 = uVar10;
      FUN_1493e8256();
      local_1a8 = (longlong **)0x0;
      uStack_1a0 = 0;
      if ((int)local_1f8 == -1) {
        lVar14 = 0;
      }
      else {
        if ((int)uStack_1e8 < 2) {
LAB_1493e8a47:
          lVar14 = 0;
        }
        else {
          FUN_1402980a2(&local_1a8,ppplStack_1f0,(int)uStack_1e8 + -1);
          if ((int)uStack_1a0 < 2) goto LAB_1493e8a47;
          uVar20 = FUN_14479d2ce(lVar17);
          lVar14 = FUN_1493ea394(uVar20,*(undefined8 *)(param_1 + 0x1a0),&local_1a8);
        }
        if (local_1a8 != (longlong **)0x0) {
          FUN_1400020a8();
        }
      }
      if (ppplStack_1f0 != (longlong ***)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1493e8a6e;
    }
  }
  else {
LAB_1493e8a6e:
    if (lVar14 != 0) {
      local_258[0] = 0;
      local_258[1] = 0;
      cVar9 = FUN_149377e50(lVar14);
      local_448 = lVar17;
      if ((cVar9 == '\0') ||
         (ppplVar16 = (longlong ***)FUN_1492f2702(*(undefined8 *)(param_1 + 0x1a0),local_258),
         ppplVar16 == (longlong ***)0x0)) {
LAB_1493e8aeb:
        ppplVar16 = (longlong ***)0x0;
      }
      else {
        lVar17 = FUN_145a95408();
        if ((*(int *)(ppplVar16[2] + 7) < *(int *)(lVar17 + 0x38)) ||
           (ppplVar16[2][6][*(int *)(lVar17 + 0x38)] != lVar17 + 0x30)) goto LAB_1493e8aeb;
      }
      local_260 = 30.0;
      bVar11 = 0;
      local_268 = 0.0;
      local_270 = 0.0;
      dVar7 = local_270;
      dVar5 = local_268;
      if (*(char *)(param_1 + 0x159) == '\x01') {
        lVar17 = FUN_1492f8190(*(undefined8 *)(param_1 + 0x1a0));
        if (*(char *)(param_1 + 0x164) == '\0') {
          if (*(int *)(param_1 + 0x168) < 1) {
            if (((lVar17 == 0) || (cVar9 = FUN_1492f6bc4(lVar17,&local_274), cVar9 == '\0')) ||
               (bVar11 = FUN_1492f6a70(lVar17,&local_278),
               (0 < local_274 & 0 < local_278 & bVar11) != 1)) {
              FUN_14933885a(param_2,&local_260);
            }
            else {
              local_260 = (double)local_274 / (double)local_278;
            }
          }
          else {
            local_260 = (double)*(int *)(param_1 + 0x168);
          }
        }
        if (*(char *)(param_1 + 0x15a) == '\x02') {
          local_268 = (double)*(int *)(param_1 + 0x15c) / local_260;
          local_270 = (double)*(int *)(param_1 + 0x160) / local_260;
          bVar11 = 1;
        }
        else {
          if (*(char *)(param_1 + 0x15a) == '\0') {
            FUN_140056680(&local_1a8,L"SourceTimelineAnimationStartTime");
            cVar9 = FUN_1492ee966(param_2,&local_1a8,&local_268);
            if (cVar9 == '\0') {
              bVar11 = 0;
            }
            else {
              FUN_140056680(&local_1f8,L"SourceTimelineAnimationStopTime");
              bVar11 = FUN_1492ee966(param_2,&local_1f8,&local_270);
              if (local_1f8 != (longlong *)0x0) {
                FUN_1400020a8();
              }
            }
            if (local_1a8 != (longlong **)0x0) {
              FUN_1400020a8();
            }
            if (bVar11 != 0) goto LAB_1493e8cf5;
          }
          local_268 = 0.0;
          local_270 = 0.0;
          bVar12 = FUN_149338996(param_2);
          bVar11 = FUN_149338ad6(param_2,&local_270);
          bVar11 = bVar11 & bVar12;
        }
LAB_1493e8cf5:
        FUN_14937fa6c(&local_280,local_260);
        dVar6 = local_270 - local_268;
        if (dVar6 <= 0.03333333507180214) {
          dVar6 = 0.03333333507180214;
        }
        dVar5 = ((double)local_280 * dVar6) / (double)local_27c;
        auVar27._8_8_ = 0;
        auVar27._0_8_ = dVar5;
        auVar27 = roundpd(auVar27,auVar27,1);
        dVar5 = dVar5 - auVar27._0_8_;
        fVar26 = (float)dVar5 - (float)(int)dVar5;
        fVar28 = fVar26;
        if (0.99999994 <= fVar26) {
          fVar28 = 0.99999994;
        }
        fVar28 = (float)(~-(uint)(0.0 < fVar26) & (uint)fVar26 |
                        (uint)fVar28 & -(uint)(0.0 < fVar26)) + 0.5 + -0.5;
        if (0.99999994 <= fVar28) {
          fVar28 = 0.99999994;
        }
        if (fVar28 <= 0.0) {
          fVar28 = 0.0;
        }
        dVar7 = local_270;
        dVar5 = local_268;
        if ((fVar28 <= 0.0001) || (ABS(fVar28 + -1.0) <= 0.0001)) goto LAB_1493e9ad6;
        if (*(char *)(param_1 + 0x16c) == '\x01') {
          local_450 = ppplVar16;
          FUN_148942f18(&local_280,&local_288);
          FUN_148942f18(&local_280,&local_290,local_270);
          if (ABS(local_284) <= 1e-08) {
            local_458 = local_288;
            dVar5 = local_268;
          }
          else {
            local_458 = local_288 + (uint)(0.5 <= local_284);
            dVar5 = ((double)((longlong)local_458 * (longlong)local_27c) +
                    (double)((ulonglong)(double)local_27c & 0x8000000000000000)) / (double)local_280
            ;
          }
          if (ABS(local_28c) <= 1e-08) {
            local_454 = local_290;
            dVar7 = local_270;
          }
          else {
            local_454 = local_290 + (uint)(0.5 <= local_28c);
            dVar7 = ((double)((longlong)local_454 * (longlong)local_27c) +
                    (double)((ulonglong)(double)local_27c & 0x8000000000000000)) / (double)local_280
            ;
          }
          local_460 = (longlong **)FUN_14936b2e4(*(undefined8 *)(param_1 + 0x70));
          local_1a8 = (longlong **)0x0;
          uVar3 = *(uint *)(**(longlong **)(param_1 + 0x1a8) + 0x30);
          pvVar4 = *(void **)(**(longlong **)(param_1 + 0x1a8) + 0x28);
          uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar3);
          if ((longlong)(int)uVar3 == 0) {
            uStack_1a0 = (ulonglong)uVar3;
          }
          else {
            FUN_1446dd670(&local_1a8,uVar3,0);
            memcpy(local_1a8,pvVar4,(longlong)(int)uVar3 * 2);
          }
          if ((longlong ***)(local_460 + 5) == &local_1a8) {
            if (local_1a8 != (longlong **)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            if (local_460[5] != (longlong *)0x0) {
              FUN_1400020a8();
            }
            local_460[5] = (longlong *)local_1a8;
            local_1a8 = (longlong **)0x0;
            *(int *)(local_460 + 6) = (int)uStack_1a0;
            *(undefined4 *)((longlong)local_460 + 0x34) = uStack_1a0._4_4_;
          }
          FUN_1492ee7cc(param_2,&local_1a8);
          if ((longlong ***)(local_460 + 7) == &local_1a8) {
            if (local_1a8 != (longlong **)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            if (local_460[7] != (longlong *)0x0) {
              FUN_1400020a8();
            }
            local_460[7] = (longlong *)local_1a8;
            local_1a8 = (longlong **)0x0;
            *(int *)(local_460 + 8) = (int)uStack_1a0;
            *(undefined4 *)((longlong)local_460 + 0x44) = uStack_1a0._4_4_;
          }
          plVar18 = (longlong *)FUN_1402576f0();
          if ((plVar18 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(plVar18);
          }
          local_460[0xb] = plVar18;
          local_2c8 = 0;
          plStack_2c0 = (longlong *)0x0;
          FUN_1413a4536(local_2b8,local_454,0);
          local_2e8 = 0;
          plStack_2e0 = (longlong *)0x0;
          FUN_1413ea578(local_2d8,dVar7,0);
          local_308 = (longlong *)0x0;
          plStack_300 = (longlong *)0x0;
          FUN_1413a4536(local_2f8,local_458,0);
          local_328 = 0;
          plStack_320 = (longlong *)0x0;
          FUN_1413ea578(local_318,dVar5,0);
          local_348 = 0;
          plStack_340 = (longlong *)0x0;
          FUN_1413ea578(local_338,(double)local_28c + (double)local_290,0);
          local_368 = 0;
          plStack_360 = (longlong *)0x0;
          FUN_1413ea578(local_358,local_270,0);
          local_388 = 0;
          plStack_380 = (longlong *)0x0;
          FUN_1413ea578(local_378,(double)local_284 + (double)local_288,0);
          local_3a8 = 0;
          plStack_3a0 = (longlong *)0x0;
          FUN_1413ea578(local_398,local_268,0);
          FUN_146811d30(&local_280,local_3b8);
          local_1a8 = (longlong **)0x14bcbeec2;
          uStack_1a0._0_4_ = 0x15;
          FUN_1446e940c(local_3dc,&local_1a8);
          local_1a8 = (longlong **)0x14bcbdf50;
          uStack_1a0 = CONCAT44(uStack_1a0._4_4_,0x24);
          FUN_1446e940c(local_3e0,&local_1a8);
          FUN_140208bae(local_3d8,local_3e0,local_3dc,
                        L"Animation length has been adjusted to align with frame borders using import frame-rate {0}.\n\nOriginal timings:\n\t\tStart: {1} ({2})\n\t\tStop: {3} ({4})\nAligned timings:\n\t\tStart: {5} ({6})\n\t\tStop: {7} ({8})"
                       );
          FUN_14023409e(&local_3c8,local_3d8,1);
          local_1a8 = (longlong **)CONCAT44(local_1a8._4_4_,4);
          FUN_14023423e(&local_198,local_3b8);
          local_188 = CONCAT44(local_188._4_4_,4);
          FUN_14023423e((longlong)&local_17c + 4,local_398);
          local_168 = CONCAT44(local_168._4_4_,4);
          FUN_14023423e(local_158,local_378);
          local_148[0] = 4;
          FUN_14023423e(local_138,local_358);
          local_128 = 4;
          FUN_14023423e(local_118,local_338);
          local_108 = 4;
          FUN_14023423e(local_f8,local_318);
          local_e8 = 4;
          FUN_14023423e(local_d8,local_2f8);
          local_c8 = 4;
          FUN_14023423e(local_b8,local_2d8);
          local_a8 = 4;
          FUN_14023423e(local_98,local_2b8);
          local_200 = local_88;
          local_208 = &local_1a8;
          FUN_14010d304(&local_1f8);
          local_228[2] = local_3c8;
          local_210 = local_3c0;
          if (local_3c0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_3c0 + 1) = (int)local_3c0[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(&local_2a8,local_228 + 2,&local_1f8);
          FUN_14007f2db(local_1f8,(ulonglong)ppplStack_1f0 & 0xffffffff);
          if (local_1f8 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          lVar17 = 0x110;
          do {
            if (*(longlong **)((longlong)&local_1a8 + lVar17) != (longlong *)0x0) {
              (**(code **)(**(longlong **)((longlong)&local_1a8 + lVar17) + 0x10))();
              *(undefined8 *)((longlong)&local_1a8 + lVar17) = 0;
              *(undefined4 *)((longlong)&uStack_1a0 + lVar17) = 0;
            }
            lVar17 = lVar17 + -0x20;
          } while (lVar17 != -0x10);
          if (local_3c0 != (longlong *)0x0) {
            LOCK();
            plVar18 = local_3c0 + 1;
            *(int *)plVar18 = (int)*plVar18 + -1;
            UNLOCK();
            if ((int)*plVar18 == 0) {
              (**(code **)*local_3c0)(local_3c0);
              LOCK();
              piVar2 = (int *)((longlong)local_3c0 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_3c0 + 0x10))(local_3c0);
              }
            }
          }
          if (local_3b8[0] != (longlong *)0x0) {
            (**(code **)(*local_3b8[0] + 0x10))();
          }
          if (local_398[0] != (longlong *)0x0) {
            (**(code **)(*local_398[0] + 0x10))();
          }
          if (local_378[0] != (longlong *)0x0) {
            (**(code **)(*local_378[0] + 0x10))();
          }
          if (local_358[0] != (longlong *)0x0) {
            (**(code **)(*local_358[0] + 0x10))();
          }
          if (local_338[0] != (longlong *)0x0) {
            (**(code **)(*local_338[0] + 0x10))();
          }
          if (local_318[0] != (longlong *)0x0) {
            (**(code **)(*local_318[0] + 0x10))();
          }
          if (local_2f8[0] != (longlong *)0x0) {
            (**(code **)(*local_2f8[0] + 0x10))();
          }
          if (local_2d8[0] != (longlong *)0x0) {
            (**(code **)(*local_2d8[0] + 0x10))();
          }
          if (local_2b8[0] != (longlong *)0x0) {
            (**(code **)(*local_2b8[0] + 0x10))();
          }
          FUN_140008f88(local_460 + 0xe,&local_2a8);
          if (local_2a8 != (longlong **)0x0) {
            (*(code *)(*local_2a8)[2])();
          }
          if (local_3d8[0] != (longlong *)0x0) {
            (**(code **)(*local_3d8[0] + 0x10))();
          }
          plVar18 = plStack_3a0;
          if (plStack_3a0 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_3a0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_3a0)(plStack_3a0);
              LOCK();
              piVar2 = (int *)((longlong)plVar18 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar18 + 0x10))(plVar18);
              }
            }
          }
          plVar18 = plStack_380;
          if (plStack_380 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_380 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_380)(plStack_380);
              LOCK();
              piVar2 = (int *)((longlong)plVar18 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar18 + 0x10))(plVar18);
              }
            }
          }
          plVar18 = plStack_360;
          if (plStack_360 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_360 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_360)(plStack_360);
              LOCK();
              piVar2 = (int *)((longlong)plVar18 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar18 + 0x10))(plVar18);
              }
            }
          }
          plVar18 = plStack_340;
          if (plStack_340 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_340 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_340)(plStack_340);
              LOCK();
              piVar2 = (int *)((longlong)plVar18 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar18 + 0x10))(plVar18);
              }
            }
          }
          plVar18 = plStack_320;
          if (plStack_320 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_320 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_320)(plStack_320);
              LOCK();
              piVar2 = (int *)((longlong)plVar18 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar18 + 0x10))(plVar18);
              }
            }
          }
          plVar18 = plStack_300;
          if (plStack_300 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_300 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_300)(plStack_300);
              LOCK();
              piVar2 = (int *)((longlong)plVar18 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar18 + 0x10))(plVar18);
              }
            }
          }
          plVar18 = plStack_2e0;
          if (plStack_2e0 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_2e0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_2e0)(plStack_2e0);
              LOCK();
              piVar2 = (int *)((longlong)plVar18 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar18 + 0x10))(plVar18);
              }
            }
          }
          plVar18 = plStack_2c0;
          ppplVar16 = local_450;
          if (plStack_2c0 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_2c0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_2c0)(plStack_2c0);
              LOCK();
              piVar2 = (int *)((longlong)plVar18 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              ppplVar16 = local_450;
              if (*piVar2 == 0) {
                (**(code **)(*plVar18 + 0x10))(plVar18);
                ppplVar16 = local_450;
              }
            }
          }
          goto LAB_1493e9ad6;
        }
        lVar17 = FUN_14936b1b4(*(undefined8 *)(param_1 + 0x70));
        local_1a8 = (longlong **)0x0;
        uVar3 = *(uint *)(**(longlong **)(param_1 + 0x1a8) + 0x30);
        pvVar4 = *(void **)(**(longlong **)(param_1 + 0x1a8) + 0x28);
        uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar3);
        if ((longlong)(int)uVar3 == 0) {
          uStack_1a0 = (ulonglong)uVar3;
        }
        else {
          FUN_1446dd670(&local_1a8,uVar3,0);
          memcpy(local_1a8,pvVar4,(longlong)(int)uVar3 * 2);
        }
        if ((longlong ***)(lVar17 + 0x28) == &local_1a8) {
          if (local_1a8 != (longlong **)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(lVar17 + 0x28) != 0) {
            FUN_1400020a8();
          }
          *(longlong ***)(lVar17 + 0x28) = local_1a8;
          local_1a8 = (longlong **)0x0;
          *(int *)(lVar17 + 0x30) = (int)uStack_1a0;
          *(undefined4 *)(lVar17 + 0x34) = uStack_1a0._4_4_;
        }
        FUN_1492ee7cc(param_2,&local_1a8);
        if ((longlong ***)(lVar17 + 0x38) == &local_1a8) {
          if (local_1a8 != (longlong **)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(lVar17 + 0x38) != 0) {
            FUN_1400020a8();
          }
          *(longlong ***)(lVar17 + 0x38) = local_1a8;
          local_1a8 = (longlong **)0x0;
          *(int *)(lVar17 + 0x40) = (int)uStack_1a0;
          *(undefined4 *)(lVar17 + 0x44) = uStack_1a0._4_4_;
        }
        lVar14 = FUN_1402576f0();
        if ((lVar14 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar14);
        }
        *(longlong *)(lVar17 + 0x58) = lVar14;
        local_2c8 = 0;
        plStack_2c0 = (longlong *)0x0;
        FUN_140407a00(local_3f0);
        FUN_146811d30(&local_280,local_400);
        local_2e8 = 0;
        plStack_2e0 = (longlong *)0x0;
        FUN_1413ea578(local_410,dVar6,0);
        local_1a8 = (longlong **)0x14bca42b8;
        uStack_1a0._0_4_ = 0x13;
        FUN_1446e940c(&local_328,&local_1a8);
        local_1a8 = (longlong **)0x14bcbdf50;
        uStack_1a0 = CONCAT44(uStack_1a0._4_4_,0x24);
        FUN_1446e940c(&local_348,&local_1a8);
        FUN_140208bae(&local_308,&local_348,&local_328,
                      L"Animation length {0} is not compatible with import frame-rate {1} (sub frame {2}). The animation has to be frame-border aligned."
                     );
        FUN_14023409e(&local_420,&local_308,1);
        local_1a8 = (longlong **)CONCAT44(local_1a8._4_4_,4);
        FUN_14023423e(&local_198,local_410);
        local_188 = CONCAT44(local_188._4_4_,4);
        FUN_14023423e((longlong)&local_17c + 4,local_400);
        local_168 = CONCAT44(local_168._4_4_,4);
        FUN_14023423e(local_158,local_3f0);
        local_200 = local_148;
        local_208 = &local_1a8;
        FUN_14010d304(&local_1f8);
        local_228[2] = local_420;
        local_210 = local_418;
        if (local_418 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_418 + 1) = (int)local_418[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(&local_2a8,local_228 + 2,&local_1f8);
        FUN_14007f2db(local_1f8,(ulonglong)ppplStack_1f0 & 0xffffffff);
        if (local_1f8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        lVar14 = 0x50;
        do {
          if (*(longlong **)((longlong)&local_1a8 + lVar14) != (longlong *)0x0) {
            (**(code **)(**(longlong **)((longlong)&local_1a8 + lVar14) + 0x10))();
            *(undefined8 *)((longlong)&local_1a8 + lVar14) = 0;
            *(undefined4 *)((longlong)&uStack_1a0 + lVar14) = 0;
          }
          lVar14 = lVar14 + -0x20;
        } while (lVar14 != -0x10);
        if (local_418 != (longlong *)0x0) {
          LOCK();
          plVar18 = local_418 + 1;
          *(int *)plVar18 = (int)*plVar18 + -1;
          UNLOCK();
          if ((int)*plVar18 == 0) {
            (**(code **)*local_418)(local_418);
            LOCK();
            piVar2 = (int *)((longlong)local_418 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_418 + 0x10))(local_418);
            }
          }
        }
        if (local_410[0] != (longlong *)0x0) {
          (**(code **)(*local_410[0] + 0x10))();
        }
        if (local_400[0] != (longlong *)0x0) {
          (**(code **)(*local_400[0] + 0x10))();
        }
        if (local_3f0[0] != (longlong *)0x0) {
          (**(code **)(*local_3f0[0] + 0x10))();
        }
        FUN_140008f88(lVar17 + 0x70,&local_2a8);
        if (local_2a8 != (longlong **)0x0) {
          (*(code *)(*local_2a8)[2])();
        }
        if (local_308 != (longlong *)0x0) {
          (**(code **)(*local_308 + 0x10))();
        }
        plVar18 = plStack_2e0;
        if (plStack_2e0 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_2e0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_2e0)(plStack_2e0);
            LOCK();
            piVar2 = (int *)((longlong)plVar18 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar18 + 0x10))(plVar18);
            }
          }
        }
        plVar18 = plStack_2c0;
        if (plStack_2c0 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_2c0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_2c0)(plStack_2c0);
            LOCK();
            piVar2 = (int *)((longlong)plVar18 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar18 + 0x10))(plVar18);
            }
          }
        }
      }
      else {
LAB_1493e9ad6:
        local_268 = dVar5;
        local_270 = dVar7;
        FUN_1492ef9be(param_2,&local_1a8);
        FUN_140ba7826(&local_208,L"\\AnimSequence",&local_1a8);
        if (local_1a8 != (longlong **)0x0) {
          FUN_1400020a8();
        }
        local_2e8 = FUN_1493ea64d(*(undefined8 *)(param_1 + 0x1a0));
        plVar18 = local_228 + 2;
        FUN_1492ee7cc(param_2,plVar18);
        uVar20 = *(undefined8 *)(param_1 + 0x1a0);
        uVar19 = FUN_1492ebf28(param_1);
        local_468 = uVar20;
        FUN_1493e7de7(plVar18,param_2,param_1 + 0x1a8,uVar19);
        thunk_FUN_1444ba64e(local_2e8,&local_208,plVar18);
        lVar17 = local_2e8;
        FUN_1492ef9be(lVar14,&local_1a8);
        FUN_14937f7b4(lVar17,&local_1a8);
        if (local_1a8 != (longlong **)0x0) {
          FUN_1400020a8();
        }
        lVar17 = local_2e8;
        if (ppplVar16 != (longlong ***)0x0) {
          FUN_1492ef9be(ppplVar16,&local_1a8);
          FUN_1444bb06c(lVar17 + 0x60,&local_1a8);
          if (local_1a8 != (longlong **)0x0) {
            FUN_1400020a8();
          }
        }
        FUN_14937efa2(local_2e8,param_1 + 0x159);
        FUN_14937f3aa(local_2e8,&local_260);
        if (bVar11 != 0) {
          FUN_14937f0fa(local_2e8,&local_268);
          FUN_14937f252(local_2e8,&local_270);
        }
        FUN_14937ee4a(local_2e8,param_1 + 0x16d);
        FUN_14937e792(local_2e8,param_1 + 0x16e);
        FUN_14937ecf2(local_2e8,param_1 + 0x181);
        FUN_14937f65a(local_2e8,param_1 + 0x180);
        FUN_14937ea42(local_2e8,param_1 + 0x184);
        FUN_14937e8ea(local_2e8,param_1 + 0x183);
        FUN_14937eb9a(local_2e8,param_1 + 0x182);
        FUN_14937f502(local_2e8,param_1 + 0x16f);
        if ((longlong)*(int *)(param_1 + 0x178) != 0) {
          lVar17 = *(longlong *)(param_1 + 0x170);
          lVar15 = (longlong)*(int *)(param_1 + 0x178) << 4;
          do {
            FUN_14937deba(local_2e8,lVar17);
            lVar17 = lVar17 + 0x10;
            lVar15 = lVar15 + -0x10;
          } while (lVar15 != 0);
        }
        local_2a8 = (longlong **)0x0;
        uStack_2a0 = 0;
        FUN_1492ef9be(lVar14,&local_1a8);
        if (local_2a8 != (longlong **)0x0) {
          FUN_1400020a8();
        }
        local_2a8 = local_1a8;
        uStack_2a0 = uStack_1a0;
        FUN_1444bb06c(local_2e8 + 0x60);
        local_2c8 = 0;
        plStack_2c0 = (longlong *)0x0;
        cVar9 = FUN_149377cec(lVar14);
        if (cVar9 != '\0') {
          plVar18 = (longlong *)FUN_14143f0c0();
          lVar17 = plVar18[0x22];
          if (lVar17 == 0) {
            (**(code **)(*plVar18 + 1000))(plVar18);
            lVar17 = plVar18[0x22];
          }
          FUN_1478d4934(lVar17,&local_1a8);
          local_1f8 = &local_2e8;
          local_428 = &local_1f8;
          local_430 = FUN_14450fa94;
          ppplStack_1f0 = &local_1a8;
          FUN_1493ea6fc(*(undefined8 *)(param_1 + 0x1a0),&local_2c8);
          FUN_1447a1747(local_1a8,uStack_1a0 & 0xffffffff);
          if (local_1a8 != (longlong **)0x0) {
            FUN_1400020a8();
          }
        }
        local_1a8 = (longlong **)0x0;
        uStack_1a0 = 0;
        uVar20 = *(undefined8 *)(param_1 + 0x1a0);
        uVar19 = FUN_145a95408();
        FUN_1492f3382(uVar20,uVar19,&local_1a8);
        uVar22 = 0;
        if ((longlong)(int)uStack_1a0 != 0) {
          pplVar23 = local_1a8 + (longlong)(int)uStack_1a0 * 2;
          pplVar25 = local_1a8;
          local_460 = pplVar23;
          do {
            lVar17 = FUN_1492f2702(*(undefined8 *)(param_1 + 0x1a0),pplVar25);
            if (lVar17 != 0) {
              lVar14 = FUN_145a95408();
              if ((*(int *)(lVar14 + 0x38) <= *(int *)(*(longlong *)(lVar17 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar14 + 0x38) * 8) == lVar14 + 0x30)) {
                local_1f8 = (longlong *)0x0;
                ppplStack_1f0 = (longlong ***)0x0;
                FUN_1492f4df8(lVar17,&local_1f8);
                plVar18 = local_1f8;
                _Str1 = local_2a8;
                ppplVar16 = (longlong ***)(longlong)(int)ppplStack_1f0;
                uVar22 = 0;
                if (ppplVar16 != (longlong ***)0x0) {
                  iVar24 = (int)uStack_2a0;
                  lVar17 = 0;
                  local_450 = ppplVar16;
                  do {
                    iVar13 = *(int *)((longlong)plVar18 + lVar17 + 8);
                    if (iVar24 == iVar13) {
                      if ((iVar24 < 2) ||
                         (iVar13 = wcscmp((wchar_t *)_Str1,*(wchar_t **)((longlong)plVar18 + lVar17)
                                         ), iVar13 == 0)) goto LAB_1493e9f30;
                    }
                    else if (iVar13 + iVar24 == 1) {
LAB_1493e9f30:
                      FUN_1444bb06c(local_2e8 + 0x60,pplVar25);
                      plVar18 = local_1f8;
                      ppplVar8 = ppplStack_1f0;
                      break;
                    }
                    lVar17 = lVar17 + 0x10;
                    ppplVar8 = local_450;
                  } while ((longlong)ppplVar16 * 0x10 != lVar17);
                  uVar22 = (ulonglong)ppplVar8 & 0xffffffff;
                  pplVar23 = local_460;
                }
                FUN_1447a1747(plVar18,uVar22);
                if (local_1f8 != (longlong *)0x0) {
                  FUN_1400020a8();
                }
              }
            }
            pplVar25 = pplVar25 + 2;
          } while (pplVar25 != pplVar23);
          uVar22 = uStack_1a0 & 0xffffffff;
        }
        lVar17 = local_448;
        FUN_1447a1747(local_1a8,uVar22);
        if (local_1a8 != (longlong **)0x0) {
          FUN_1400020a8();
        }
        lVar14 = FUN_14479d2ce(lVar17);
        cVar9 = FUN_144729dda(lVar14 + 0x14c);
        if (cVar9 != '\0') {
          lVar17 = FUN_14479d2ce(lVar17);
          uVar20 = FUN_14479d2ce(lVar17 + 0x14c);
          FUN_1400bbfc4(&local_1a8,uVar20);
          FUN_14937f91e(local_2e8,&local_1a8);
          if (local_198 != 0) {
            FUN_1400020a8();
          }
        }
        local_188 = 0;
        local_180 = 0;
        local_1a8 = (longlong **)0x0;
        uStack_1a0 = 0;
        local_17c = 0xffffffff00000080;
        local_174 = 0;
        local_168 = 0;
        local_160 = 0;
        local_1d8 = 0;
        local_1d0 = 0;
        local_1f8 = (longlong *)0x0;
        ppplStack_1f0 = (longlong ***)0x0;
        local_1cc = 0xffffffff00000080;
        local_1c4 = 0;
        local_1b8 = 0;
        local_1b0 = 0;
        FUN_149338c16(param_2,&local_1a8,&local_1f8);
        FUN_14937e484(local_2e8,&local_1a8,&local_1f8);
        local_1b0 = 0;
        if (local_1b8 != 0) {
          FUN_1400020a8();
        }
        FUN_149330dcc(&local_1f8);
        local_160 = 0;
        if (local_168 != 0) {
          FUN_1400020a8();
        }
        FUN_1407a3a68(&local_1a8);
        local_188 = 0;
        local_180 = 0;
        local_1a8 = (longlong **)0x0;
        uStack_1a0 = 0;
        local_17c = 0xffffffff00000080;
        local_174 = 0;
        local_168 = 0;
        local_160 = 0;
        local_1d8 = 0;
        local_1d0 = 0;
        local_1f8 = (longlong *)0x0;
        ppplStack_1f0 = (longlong ***)0x0;
        local_1cc = 0xffffffff00000080;
        local_1c4 = 0;
        local_1b8 = 0;
        local_1b0 = 0;
        FUN_149338fc2(param_2,&local_1a8,&local_1f8);
        FUN_14937e07a(local_2e8,&local_1a8,&local_1f8);
        local_1b0 = 0;
        if (local_1b8 != 0) {
          FUN_1400020a8();
        }
        FUN_149330dcc(&local_1f8);
        local_160 = 0;
        if (local_168 != 0) {
          FUN_1400020a8();
        }
        FUN_1407a3a68(&local_1a8);
        FUN_1492f9378(param_2,local_2e8,0);
        lVar17 = local_2e8;
        FUN_1492ef9be(param_2,&local_1a8);
        FUN_1444bb06c(lVar17 + 0x40,&local_1a8);
        if (local_1a8 != (longlong **)0x0) {
          FUN_1400020a8();
        }
        FUN_1492ef9be(local_2e8,&local_1a8);
        FUN_1444bb06c(param_2 + 0x40,&local_1a8);
        if (local_1a8 != (longlong **)0x0) {
          FUN_1400020a8();
        }
        FUN_1492f22b0(*(undefined8 *)(param_1 + 0x1a0),local_440,local_2e8);
        if (local_440[0] != 0) {
          FUN_1400020a8();
        }
        if (local_2c8 != 0) {
          FUN_1400020a8();
        }
        if (local_2a8 != (longlong **)0x0) {
          FUN_1400020a8();
        }
        if (local_228[2] != 0) {
          FUN_1400020a8();
        }
        if (local_208 != (longlong ***)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_258[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if (local_238[0] != 0) {
    FUN_1400020a8();
  }
LAB_1493e8847:
  if (local_228[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_488) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ea2e5 FUN_1493ea2e5 body=174 status=ok
// SIG undefined FUN_1493ea2e5(void)

undefined8 FUN_1493ea2e5(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145a94634();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ea394 FUN_1493ea394 body=696 status=ok
// SIG undefined FUN_1493ea394(void)

longlong FUN_1493ea394(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  wchar_t *pwVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined8 uStack_90;
  longlong local_88;
  longlong local_70 [2];
  longlong local_60 [2];
  longlong local_50 [2];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = FUN_1492f2ba8(param_2,param_3);
  if (lVar4 == 0) {
    lVar5 = 0;
    goto LAB_1493ea3d0;
  }
  FUN_1492ee7cc(lVar4,&local_98);
  FUN_144a882a8(local_50,&local_98,L"_Skeleton");
  if (local_98 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_1492ef9be(lVar4,&local_98);
  FUN_140b1283a(local_60,L"Factory_",&local_98);
  if (local_98 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  cVar2 = FUN_1492f3730(param_2,local_60);
  if (cVar2 == '\0') {
    lVar5 = FUN_1493f595a(param_2);
    if (lVar5 == 0) goto LAB_1493ea506;
    lVar6 = FUN_140f5e1c2();
    local_40 = *(undefined8 *)(lVar6 + 0x18);
    FUN_1400021e4(&local_40,&local_98);
    FUN_1493781d2(lVar5,local_60,local_50,&local_98);
    if (local_98 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    FUN_1492ef9be(lVar4,&local_98);
    FUN_14937833c(lVar5,&local_98);
    if (local_98 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    FUN_1493785ee(lVar5,param_1 + 0x155);
    FUN_1492f22b0(param_2,local_70,lVar5);
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
LAB_1493ea5c9:
    cVar2 = FUN_144729dda(param_1 + 0x14c);
    if (cVar2 != '\0') {
      FUN_1492f03f8(lVar5,0);
      uVar7 = FUN_14479d2ce(param_1 + 0x14c);
      FUN_1400bbfc4(&local_98,uVar7);
      FUN_1492f52ea(lVar5,&local_98);
      if (local_88 != 0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    lVar5 = FUN_1492f2702(param_2,local_60);
    if (lVar5 != 0) {
      lVar4 = FUN_145a94ad0();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) {
        local_98 = (wchar_t *)0x0;
        uStack_90 = 0;
        FUN_149377cec(lVar5,&local_98);
        pwVar1 = local_98;
        if ((int)uStack_90 == *(int *)(param_3 + 1)) {
          bVar8 = true;
          if (1 < (int)uStack_90) {
            iVar3 = wcscmp(local_98,(wchar_t *)*param_3);
            bVar8 = iVar3 == 0;
          }
        }
        else {
          bVar8 = *(int *)(param_3 + 1) + (int)uStack_90 == 1;
        }
        if (pwVar1 != (wchar_t *)0x0) {
          FUN_1400020a8(pwVar1);
        }
        if (bVar8) goto LAB_1493ea5c9;
      }
    }
LAB_1493ea506:
    lVar5 = 0;
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
LAB_1493ea3d0:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 1493ea64d FUN_1493ea64d body=174 status=ok
// SIG undefined FUN_1493ea64d(void)

undefined8 FUN_1493ea64d(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145a94d94();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ea6fc FUN_1493ea6fc body=213 status=ok
// SIG undefined FUN_1493ea6fc(void)

void FUN_1493ea6fc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_1492f2ba8();
  if (lVar1 != 0) {
    local_40 = lVar1;
    (*(code *)*param_3)(param_3[1]);
    FUN_1492f2f34(param_1,&local_40,param_2);
    if (0 < local_38) {
      lVar1 = 0;
      lVar2 = 0;
      do {
        local_50 = *param_3;
        local_48 = param_3[1];
        FUN_1493ea6fc(param_1,local_40 + lVar1,&local_50);
        lVar2 = lVar2 + 1;
        lVar1 = lVar1 + 0x10;
      } while (lVar2 < local_38);
    }
    FUN_1447a1747(local_40);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ea7e6 FUN_1493ea7e6 body=253 status=ok
// SIG undefined FUN_1493ea7e6(void)

void FUN_1493ea7e6(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(char *)(param_1 + 0x6b) != '\0') ||
     (*(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0x14c) = 0,
     *(longlong *)(param_1 + 0x1d0) == 0)) goto LAB_1493ea861;
  lVar2 = FUN_140081d40(param_1 + 0x1d0,0);
  if (lVar2 == 0) {
LAB_1493ea84b:
    lVar2 = 0;
  }
  else {
    lVar3 = FUN_140f5e1c2();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_1493ea84b;
  }
  FUN_14485c47a(*(longlong *)(param_1 + 0x1b0) + 0x14c,lVar2);
LAB_1493ea861:
  *(undefined1 *)(*(longlong *)(param_1 + 0x1b0) + 0x148) = *(undefined1 *)(param_1 + 0x1f0);
  plVar1 = *(longlong **)(param_1 + 0x1c8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2c0))(plVar1,param_2);
  }
  plVar1 = *(longlong **)(param_1 + 0x1b8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2c0))(plVar1,param_2);
  }
  plVar1 = *(longlong **)(param_1 + 0x1c0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2c0))(plVar1,param_2);
  }
  lVar2 = FUN_1492ebf28(param_1);
  if (lVar2 != param_1) {
    return;
  }
  FUN_1492eb898(param_1,param_2);
  return;
}



// FUNCTION 1493ea8e4 FUN_1493ea8e4 body=165 status=ok
// SIG undefined FUN_1493ea8e4(void)

undefined8 FUN_1493ea8e4(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x1c8);
  if (plVar1 == (longlong *)0x0) {
LAB_1493ea90c:
    plVar1 = *(longlong **)(param_1 + 0x1a8);
    if (plVar1 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar1 + 0x2c8))(plVar1,param_2);
      if (cVar2 == '\0') goto LAB_1493ea980;
    }
    plVar1 = *(longlong **)(param_1 + 0x1b0);
    if (plVar1 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar1 + 0x2c8))(plVar1,param_2);
      if (cVar2 == '\0') goto LAB_1493ea980;
    }
    plVar1 = *(longlong **)(param_1 + 0x1b8);
    if (plVar1 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar1 + 0x2c8))(plVar1,param_2);
      if (cVar2 == '\0') goto LAB_1493ea980;
    }
    plVar1 = *(longlong **)(param_1 + 0x1c0);
    if (plVar1 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar1 + 0x2c8))(plVar1,param_2);
      if (cVar2 == '\0') goto LAB_1493ea980;
    }
    uVar3 = 1;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x2c8))(plVar1,param_2);
    if (cVar2 != '\0') goto LAB_1493ea90c;
LAB_1493ea980:
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 1493ea98a FUN_1493ea98a body=947 status=ok
// SIG undefined FUN_1493ea98a(void)

void FUN_1493ea98a(longlong param_1,byte *param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined1 auStack_258 [32];
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  longlong local_228;
  undefined4 local_220;
  undefined4 local_21c;
  longlong local_218;
  undefined8 uStack_210;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1cc;
  undefined4 local_1c4;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 *local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  longlong local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_12c;
  undefined4 local_124;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_78;
  undefined4 local_70;
  undefined2 local_68;
  undefined1 local_66;
  undefined8 local_64;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_258;
  FUN_1492ebe2c();
  if (*param_2 - 9 < 2) {
    *(undefined1 *)(param_1 + 0x159) = 1;
  }
  else if (*param_2 == 1) {
    cVar3 = FUN_144729dda(*(longlong *)(param_1 + 0x1b0) + 0x14c);
    if (cVar3 == '\0') {
      local_138 = 0;
      local_130 = 0;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_198 = (undefined8 *)0x0;
      uStack_190 = 0;
      local_188 = 0;
      uStack_180 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_12c = 0xffffffff00000080;
      local_124 = 0;
      local_118 = 0;
      local_110 = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_dc = 0xffffffff00000080;
      local_d4 = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_98 = 0;
      local_90 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_8c = 0xffffffff00000080;
      local_84 = 0;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0;
      local_66 = 0;
      local_64 = 0;
      if (*(int *)(param_1 + 0x40) == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      else {
        puVar7 = *(undefined2 **)(param_1 + 0x38);
      }
      FUN_1446f470e(&local_238,puVar7,1);
      uStack_190 = CONCAT44(uStack_190._4_4_,1);
      FUN_1446f84a2(&local_198,0);
      *local_198 = CONCAT44(uStack_234,local_238);
      uVar5 = FUN_140f5e1c2();
      FUN_1414d7078(uVar5,&local_238);
      uVar2 = uStack_160;
      lVar8 = (longlong)(int)uStack_160;
      uVar4 = (int)uStack_160 + 1;
      uStack_160 = CONCAT44(uStack_160._4_4_,uVar4);
      if (uStack_160._4_4_ < uVar4) {
        FUN_1401d5364(&local_168,uVar2 & 0xffffffff);
      }
      puVar1 = (undefined4 *)(local_168 + lVar8 * 0x10);
      *puVar1 = local_238;
      puVar1[1] = uStack_234;
      puVar1[2] = uStack_230;
      puVar1[3] = uStack_22c;
      FUN_1446ddc76(&local_200,"AssetRegistry",1);
      uVar5 = FUN_144a52528();
      plVar6 = (longlong *)FUN_14493e38c(uVar5,local_200);
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x40))(plVar6);
      local_218 = 0;
      uStack_210 = 0;
      (**(code **)(*plVar6 + 0x50))(plVar6,&local_1a8,&local_218,1);
      if (0 < (int)uStack_210) {
        local_1d8 = 0;
        local_1d0 = 0;
        local_1f8 = 0;
        uStack_1f0 = 0;
        local_1cc = 0xffffffff00000080;
        local_1c4 = 0;
        local_1b8 = 0;
        local_1b0 = 0;
        uVar5 = FUN_14700c192(local_218);
        FUN_14485c47a(*(longlong *)(param_1 + 0x1b0) + 0x14c,uVar5);
        uVar5 = FUN_14479d2ce(*(longlong *)(param_1 + 0x1b0) + 0x14c);
        FUN_1400bbfc4(&local_238,uVar5);
        *(undefined4 *)(param_1 + 0x1d0) = local_238;
        *(undefined4 *)(param_1 + 0x1d4) = uStack_234;
        *(undefined4 *)(param_1 + 0x1d8) = uStack_230;
        *(undefined4 *)(param_1 + 0x1dc) = uStack_22c;
        if ((undefined4 *)(param_1 + 0x1d0) == &local_238) {
          if (local_228 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(param_1 + 0x1e0) != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(param_1 + 0x1e0) = local_228;
          local_228 = 0;
          *(undefined4 *)(param_1 + 0x1e8) = local_220;
          *(undefined4 *)(param_1 + 0x1ec) = local_21c;
        }
      }
      FUN_140195631(local_218,(int)uStack_210);
      if (local_218 != 0) {
        FUN_1400020a8();
      }
      FUN_14019571a(&local_1a8);
    }
  }
  plVar6 = *(longlong **)(param_1 + 0x1c8);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x2b0))(plVar6,param_2);
  }
  plVar6 = *(longlong **)(param_1 + 0x1b8);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x2b0))(plVar6,param_2);
  }
  plVar6 = *(longlong **)(param_1 + 0x1c0);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x2b0))(plVar6,param_2);
  }
  *(undefined1 *)(param_1 + 0x1f0) = *(undefined1 *)(*(longlong *)(param_1 + 0x1b0) + 0x148);
  if ((local_50 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ead3e FUN_1493ead3e body=179 status=ok
// SIG undefined FUN_1493ead3e(void)

undefined8 * FUN_1493ead3e(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  
  cVar3 = FUN_144a61b4f();
  if (cVar3 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x144);
    FUN_1410abb6d(*(undefined8 *)(param_1 + 0x138),*(undefined4 *)(param_1 + 0x140));
    *(undefined4 *)(param_1 + 0x140) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 0x144) != 0)) {
      FUN_14930e98c(param_1 + 0x138,0);
      iVar1 = *(int *)(param_1 + 0x140);
      *param_2 = 0;
      uVar2 = *(undefined8 *)(param_1 + 0x138);
      *(int *)(param_2 + 1) = iVar1;
      if (iVar1 != 0) {
        FUN_14930ea00(param_2,iVar1,0);
        FUN_14930ea76(*param_2,uVar2,iVar1);
        return param_2;
      }
    }
    else {
      *param_2 = 0;
      *(undefined4 *)(param_2 + 1) = 0;
    }
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  return param_2;
}



// FUNCTION 1493eadf2 FUN_1493eadf2 body=3854 status=ok
// SIG undefined FUN_1493eadf2(void)

void FUN_1493eadf2(longlong param_1,int *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  ulonglong uVar6;
  longlong **pplVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong *plVar15;
  int iVar16;
  longlong lVar17;
  undefined2 *puVar18;
  longlong lVar19;
  undefined1 auStack_3a8 [32];
  longlong **local_388;
  longlong *local_378;
  longlong local_370;
  undefined2 *local_368;
  longlong *local_360;
  undefined8 local_358;
  int local_350;
  undefined4 local_34c;
  undefined8 local_348;
  int local_340;
  undefined4 local_33c;
  undefined8 local_338;
  undefined8 local_330;
  longlong **local_328;
  undefined8 uStack_320;
  longlong **local_318;
  undefined8 local_310;
  undefined4 local_308;
  undefined4 local_304;
  longlong **local_2f8;
  int local_2f0;
  undefined4 local_2ec;
  longlong **local_2e8;
  longlong *plStack_2e0;
  void *local_2d8;
  undefined8 uStack_2d0;
  longlong local_2c8;
  undefined8 uStack_2c0;
  longlong local_2b8;
  undefined8 uStack_2b0;
  undefined2 *local_2a8;
  longlong *local_2a0;
  void *local_298;
  int local_290;
  undefined4 local_28c;
  undefined8 local_288;
  int local_280;
  undefined4 local_27c;
  undefined8 local_278;
  int local_270;
  undefined4 local_26c;
  undefined2 *local_268;
  longlong **pplStack_260;
  ulonglong local_258;
  undefined4 local_250;
  undefined4 local_24c;
  longlong *local_248;
  undefined8 uStack_240;
  longlong *local_238;
  undefined8 local_230;
  ulonglong local_228;
  int local_220;
  undefined8 local_21c;
  int local_214;
  longlong local_208;
  undefined4 local_200;
  void *local_80;
  int local_78;
  int local_74;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  if ((longlong)*(int *)(param_1 + 0x140) != 0) {
    lVar19 = *(longlong *)(param_1 + 0x138);
    iVar16 = *param_2;
    iVar9 = param_2[1];
    iVar3 = param_2[2];
    iVar4 = param_2[3];
    lVar17 = 0;
    do {
      if ((((*(int *)(lVar19 + 0x20 + lVar17) == iVar16) &&
           (*(int *)(lVar19 + 0x24 + lVar17) == iVar9)) &&
          (*(int *)(lVar19 + 0x28 + lVar17) == iVar3)) &&
         (*(int *)(lVar19 + 0x2c + lVar17) == iVar4)) {
        if (*(longlong *)(lVar19 + 0x30 + lVar17) == param_1) {
          if (((*(int *)(param_1 + 0x1f8) == iVar16) && (*(int *)(param_1 + 0x1fc) == iVar9)) &&
             ((*(int *)(param_1 + 0x200) == iVar3 && (*(int *)(param_1 + 0x204) == iVar4)))) {
            FUN_1493ebd02(&local_248);
            local_278 = 0;
            iVar16 = *(int *)(param_1 + 0x210);
            uVar14 = *(undefined8 *)(param_1 + 0x208);
            local_270 = iVar16;
            if (iVar16 == 0) {
              local_26c = 0;
            }
            else {
              FUN_140b856de(&local_278,iVar16,0);
              FUN_140b8566a(local_278,uVar14,iVar16);
            }
            FUN_1493ebd3c(&local_248,&local_278);
            local_288 = 0;
            iVar16 = *(int *)(param_1 + 0x220);
            uVar14 = *(undefined8 *)(param_1 + 0x218);
            local_280 = iVar16;
            if (iVar16 == 0) {
              local_27c = 0;
            }
            else {
              FUN_140b856de(&local_288,iVar16,0);
              FUN_140b8566a(local_288,uVar14,iVar16);
            }
            FUN_1493ebd76(&local_248,&local_288);
            local_298 = (void *)0x0;
            local_290 = *(int *)(param_1 + 0x230);
            lVar19 = (longlong)local_290;
            pvVar5 = *(void **)(param_1 + 0x228);
            if (lVar19 == 0) {
              local_28c = 0;
              iVar16 = 0;
            }
            else {
              FUN_144a06ca8(&local_298,local_290,0);
              memcpy(local_298,pvVar5,lVar19 << 2);
              iVar16 = local_290;
            }
            pvVar5 = local_298;
            local_78 = iVar16;
            if (local_74 == 0 && iVar16 == 0) {
              local_74 = 0;
            }
            else {
              FUN_144a06ca8(&local_80,iVar16);
              if (iVar16 != 0) {
                memcpy(local_80,pvVar5,(longlong)iVar16 << 2);
              }
            }
            if (local_298 != (void *)0x0) {
              FUN_1400020a8();
            }
            local_70 = *(undefined8 *)(param_1 + 0x238);
            FUN_1494034aa(&local_328,&local_2b8);
            FUN_1493ebdb0(&local_328,&local_268,&local_248);
            plVar11 = uStack_320;
            if (uStack_320 != (longlong *)0x0) {
              LOCK();
              plVar15 = uStack_320 + 1;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)*plVar15 == 0) {
                (**(code **)*uStack_320)(uStack_320);
                LOCK();
                piVar1 = (int *)((longlong)plVar11 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar11 + 0x10))(plVar11);
                }
              }
            }
            FUN_1493ebe24(&local_248);
            pplVar7 = pplStack_260;
            local_248 = (longlong *)0x407c200000000000;
            uStack_240 = (longlong **)0x4069000000000000;
            local_2a8 = local_268;
            local_2a0 = (longlong *)pplStack_260;
            if (pplStack_260 == (longlong **)0x0) {
              FUN_14943e1cb(&local_2a8,param_1 + 0x240,&local_248);
            }
            else {
              LOCK();
              *(int *)(pplStack_260 + 1) = (int)pplStack_260[1] + 1;
              UNLOCK();
              FUN_14943e1cb(&local_2a8,param_1 + 0x240,&local_248);
              if (pplVar7 != (longlong **)0x0) {
                LOCK();
                plVar11 = (longlong *)(pplVar7 + 1);
                *(int *)plVar11 = (int)*plVar11 + -1;
                UNLOCK();
                if ((int)*plVar11 == 0) {
                  (*(code *)**pplVar7)(pplVar7);
                  LOCK();
                  piVar1 = (int *)((longlong)pplVar7 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)((longlong)*pplVar7 + 0x10))(pplVar7);
                  }
                }
              }
            }
          }
          else if (((*(int *)(param_1 + 0x250) == iVar16) && (*(int *)(param_1 + 0x254) == iVar9))
                  && ((*(int *)(param_1 + 600) == iVar3 && (*(int *)(param_1 + 0x25c) == iVar4)))) {
            plVar11 = (longlong *)(param_1 + 0x260);
            local_2b8 = 0;
            uStack_2b0 = 0;
            iVar16 = *(int *)(param_1 + 0x268) - *(int *)(param_1 + 0x294);
            if (iVar16 < 0) goto LAB_1493ebcfa;
            if (iVar16 != 0) {
              FUN_14940395e(&local_2b8);
            }
            plVar15 = (longlong *)(param_1 + 0x270);
            local_328 = (longlong **)0x100000000;
            local_318 = (longlong **)&DAT_ffffffff;
            local_310 = local_310 & 0xffffffff00000000;
            iVar16 = 0;
            uStack_320 = plVar15;
            if (*(int *)(param_1 + 0x288) != 0) {
              FUN_1449c0562(&local_328);
              iVar16 = *(int *)(param_1 + 0x288);
            }
            local_230 = local_318;
            pplVar7 = local_230;
            local_228 = local_310;
            uStack_240 = local_328;
            local_238 = uStack_320;
            local_230._4_4_ = (int)((ulonglong)local_318 >> 0x20);
            iVar9 = local_230._4_4_;
            local_248 = plVar11;
            if ((local_230._4_4_ != iVar16) || (local_230 = pplVar7, uStack_320 != plVar15)) {
              do {
                local_230 = pplVar7;
                FUN_149402ee6(&local_328,(longlong)iVar9 * 0x28 + *local_248);
                uVar6 = uStack_2b0;
                lVar19 = (longlong)(int)uStack_2b0;
                uVar10 = (int)uStack_2b0 + 1;
                uStack_2b0 = CONCAT44(uStack_2b0._4_4_,uVar10);
                if (uStack_2b0._4_4_ < uVar10) {
                  FUN_1494039be(&local_2b8,uVar6 & 0xffffffff);
                }
                *(longlong ***)(local_2b8 + lVar19 * 0x10) = local_318;
                *(ulonglong *)(local_2b8 + 8 + lVar19 * 0x10) = local_310;
                if (local_310 != 0) {
                  LOCK();
                  *(int *)(local_310 + 8) = *(int *)(local_310 + 8) + 1;
                  UNLOCK();
                }
                FUN_1493ebe90(&local_328);
                local_230 = (longlong **)
                            CONCAT44(local_230._4_4_,(uint)local_230 & ~uStack_240._4_4_);
                FUN_1449c0562(&uStack_240);
                iVar9 = local_230._4_4_;
                pplVar7 = local_230;
              } while (local_248 != plVar11 || (local_238 != plVar15 || local_230._4_4_ != iVar16));
            }
            local_2c8 = 0;
            uStack_2c0 = 0;
            plVar11 = *(longlong **)(param_1 + 0x2b0);
            if (plVar11 == (longlong *)0x0) {
LAB_1493eb151:
              cVar8 = FUN_144729dda(*(longlong *)(param_1 + 0x1b0) + 0x14c);
              if (cVar8 != '\0') {
LAB_1493eb166:
                plVar11 = (longlong *)FUN_14479d2ce(*(longlong *)(param_1 + 0x1b0) + 0x14c);
                goto LAB_1493eb17a;
              }
            }
            else {
              lVar19 = FUN_144a85a6c();
              if ((*(int *)(plVar11[2] + 0x38) < *(int *)(lVar19 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar11[2] + 0x30) + (longlong)*(int *)(lVar19 + 0x38) * 8) !=
                  lVar19 + 0x30)) goto LAB_1493eb151;
              cVar8 = FUN_144729dda(*(longlong *)(param_1 + 0x1b0) + 0x14c);
              if (cVar8 != '\0') goto LAB_1493eb166;
              plVar11 = (longlong *)(**(code **)(*plVar11 + 0x3f8))(plVar11);
LAB_1493eb17a:
              if (plVar11 != (longlong *)0x0) {
                local_2d8 = (void *)0x0;
                uStack_2d0 = 0;
                local_2e8 = (longlong **)0x0;
                plStack_2e0 = (longlong *)&DAT_00000001;
                local_370 = param_1;
                FUN_1447f76d2(&local_2e8,0);
                *local_2e8 = plVar11;
                local_228 = 0;
                local_220 = 0;
                local_248 = (longlong *)0x0;
                uStack_240 = (longlong **)0x0;
                local_21c = 0xffffffff00000080;
                local_214 = 0;
                local_208 = 0;
                local_200 = 0;
                local_378 = plVar11;
                FUN_1468efa88(&local_2f8,&local_2e8,0,0);
                iVar9 = (int)uStack_240;
                do {
                  iVar16 = local_214;
                  pplVar7 = local_2f8;
                  if (local_2f0 != 0) {
                    lVar19 = (longlong)local_2f0;
                    lVar17 = 0;
                    do {
                      local_328 = *(longlong ***)((longlong)pplVar7 + lVar17);
                      lVar12 = FUN_144a79778();
                      lVar13 = FUN_1409ffe1d();
                      if (lVar12 != lVar13) {
                        FUN_1457b12ce(&local_248,&local_268,&local_328,0);
                      }
                      lVar17 = lVar17 + 8;
                    } while (lVar19 * 8 != lVar17);
                  }
                  FUN_1468efa88(&local_328,&local_2f8,0);
                  if (local_2f8 != (longlong **)0x0) {
                    FUN_1400020a8();
                  }
                  plVar11 = local_378;
                  iVar16 = iVar9 - iVar16;
                  local_2f8 = local_328;
                  local_2f0 = (int)uStack_320;
                  local_2ec = uStack_320._4_4_;
                  iVar9 = (int)uStack_240;
                } while (iVar16 != (int)uStack_240 - local_214);
                if (iVar16 < 0) {
LAB_1493ebcfa:
                    /* WARNING: Subroutine does not return */
                  FUN_1456afac4(iVar16);
                }
                if ((int)uStack_2d0._4_4_ < iVar16) {
                  FUN_1402191ca(&local_2d8);
                }
                local_268 = (undefined2 *)0x100000000;
                local_258 = 0xffffffff;
                local_250 = 0;
                iVar16 = 0;
                pplStack_260 = &local_238;
                if (local_220 != 0) {
                  FUN_1449c0562(&local_268);
                  iVar16 = local_220;
                }
                local_310 = local_258;
                uVar6 = local_310;
                local_308 = local_250;
                local_304 = local_24c;
                uStack_320 = (longlong *)local_268;
                local_318 = pplStack_260;
                local_328 = &local_248;
                local_310._4_4_ = (int)(local_258 >> 0x20);
                if ((local_310._4_4_ != iVar16) || (pplStack_260 != &local_238)) {
                  iVar9 = local_310._4_4_;
                  local_310 = uVar6;
                  do {
                    plVar15 = (longlong *)(*local_328)[(longlong)iVar9 * 2];
                    lVar19 = *(longlong *)(plVar15[4] + 0x10);
                    lVar17 = FUN_144a7a812();
                    if ((plVar15 != plVar11) && (lVar19 == lVar17)) {
                      FUN_144750a86(plVar15,&local_268,0,0);
                      puVar18 = &DAT_149dfb77a;
                      if ((int)pplStack_260 != 0) {
                        puVar18 = local_268;
                      }
                      FUN_1446f470e(&local_330,puVar18,1);
                      uVar6 = uStack_2d0;
                      lVar19 = (longlong)(int)uStack_2d0;
                      uVar10 = (int)uStack_2d0 + 1;
                      uStack_2d0 = CONCAT44(uStack_2d0._4_4_,uVar10);
                      if (uStack_2d0._4_4_ < uVar10) {
                        FUN_1446f84a2(&local_2d8,uVar6 & 0xffffffff);
                      }
                      *(undefined8 *)((longlong)local_2d8 + lVar19 * 8) = local_330;
                      if (local_268 != (undefined2 *)0x0) {
                        FUN_1400020a8();
                      }
                    }
                    local_310 = CONCAT44(local_310._4_4_,(uint)local_310 & ~uStack_320._4_4_);
                    FUN_1449c0562(&uStack_320);
                    iVar9 = local_310._4_4_;
                    uVar6 = local_310;
                  } while (local_328 != &local_248 ||
                           (local_318 != &local_238 || local_310._4_4_ != iVar16));
                }
                local_310 = uVar6;
                if (local_2f8 != (longlong **)0x0) {
                  FUN_1400020a8();
                }
                param_1 = local_370;
                local_200 = 0;
                if (local_208 != 0) {
                  FUN_1400020a8();
                }
                FUN_140603fbe(&local_248);
                if (local_2e8 != (longlong **)0x0) {
                  FUN_1400020a8();
                }
                FUN_1446f470e(&local_338,L"AssetRegistry",1);
                uVar14 = FUN_144a52528();
                plVar15 = (longlong *)FUN_14493e38c(uVar14,local_338);
                lVar19 = FUN_144a79778(plVar11);
                uVar14 = *(undefined8 *)(lVar19 + 0x18);
                local_328 = (longlong **)0x0;
                uStack_320 = (longlong *)0x0;
                plVar11 = (longlong *)(**(code **)(*plVar15 + 0x40))(plVar15);
                local_238 = (longlong *)0x0;
                local_230 = (longlong **)0x100000000;
                local_248 = (longlong *)CONCAT62(local_248._2_6_,1);
                local_388 = &local_248;
                (**(code **)(*plVar11 + 0x118))(plVar11,uVar14,&local_328,1);
                if (local_238 != (longlong *)0x0) {
                  FUN_1400020a8();
                }
                local_268 = (undefined2 *)0x0;
                pplStack_260 = (longlong **)0x0;
                plVar11 = (longlong *)(**(code **)(*plVar15 + 0x40))(plVar15);
                local_238 = (longlong *)0x0;
                local_230 = (longlong **)&DAT_100000000;
                local_248 = (longlong *)CONCAT62(local_248._2_6_,0x100);
                local_388 = &local_248;
                (**(code **)(*plVar11 + 0x118))(plVar11,uVar14,&local_268,1);
                if (local_238 != (longlong *)0x0) {
                  FUN_1400020a8();
                }
                pvVar5 = local_2d8;
                local_248 = (longlong *)0x0;
                lVar19 = (longlong)(int)uStack_2d0;
                uStack_240 = (longlong **)CONCAT44(uStack_240._4_4_,(int)uStack_2d0);
                if (lVar19 == 0) {
                  uStack_240 = (longlong **)(uStack_2d0 & 0xffffffff);
                }
                else {
                  FUN_1401b309e(&local_248,uStack_2d0 & 0xffffffff,0);
                  memcpy(local_248,pvVar5,lVar19 << 3);
                }
                local_2e8 = &local_248;
                plStack_2e0 = plVar15;
                FUN_14450d764(&local_2e8,&local_328);
                FUN_14450d764(&local_2e8,&local_268);
                if ((longlong)(int)uStack_240 != 0) {
                  lVar19 = (longlong)(int)uStack_240 << 3;
                  plVar11 = local_248;
                  do {
                    lVar17 = FUN_14001cc68(0x10,0x10);
                    FUN_1400021e4(plVar11,lVar17);
                    plVar15 = (longlong *)FUN_14001cc68(0x18,0x10);
                    uVar6 = uStack_2c0;
                    plVar15[1] = (longlong)&DAT_100000001;
                    *plVar15 = (longlong)&PTR_FUN_149f0ebe0;
                    plVar15[2] = lVar17;
                    lVar12 = (longlong)(int)uStack_2c0;
                    uVar10 = (int)uStack_2c0 + 1;
                    uStack_2c0 = CONCAT44(uStack_2c0._4_4_,uVar10);
                    if (uStack_2c0._4_4_ < uVar10) {
                      FUN_145c1cf0e(&local_2c8,uVar6 & 0xffffffff);
                    }
                    *(longlong *)(local_2c8 + lVar12 * 0x10) = lVar17;
                    *(longlong **)(local_2c8 + 8 + lVar12 * 0x10) = plVar15;
                    if (plVar15 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
                      UNLOCK();
                      LOCK();
                      plVar2 = plVar15 + 1;
                      *(int *)plVar2 = (int)*plVar2 + -1;
                      UNLOCK();
                      if ((int)*plVar2 == 0) {
                        (**(code **)*plVar15)(plVar15);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar15 + 0xc);
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (*piVar1 == 0) {
                          (**(code **)(*plVar15 + 0x10))(plVar15);
                        }
                      }
                    }
                    plVar11 = plVar11 + 1;
                    lVar19 = lVar19 + -8;
                  } while (lVar19 != 0);
                }
                if (local_248 != (longlong *)0x0) {
                  FUN_1400020a8(local_248);
                }
                if (local_268 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                if (local_328 != (longlong **)0x0) {
                  FUN_1400020a8();
                }
                if (local_2d8 != (void *)0x0) {
                  FUN_1400020a8();
                }
              }
            }
            FUN_1493ebeda(&local_248);
            uVar6 = uStack_2b0;
            lVar19 = local_2b8;
            local_348 = 0;
            local_340 = (int)uStack_2b0;
            if ((int)uStack_2b0 == 0) {
              local_33c = 0;
            }
            else {
              FUN_1494031a2(&local_348,uStack_2b0 & 0xffffffff,0);
              FUN_149403204(local_348,lVar19,uVar6 & 0xffffffff);
            }
            FUN_1493ebf0c(&local_248,&local_348);
            uVar6 = uStack_2c0;
            lVar19 = local_2c8;
            local_80 = *(void **)(param_1 + 0x2b0);
            local_358 = 0;
            local_350 = (int)uStack_2c0;
            if ((int)uStack_2c0 == 0) {
              local_34c = 0;
            }
            else {
              FUN_146aae5d2(&local_358,uStack_2c0 & 0xffffffff,0);
              FUN_146aae634(local_358,lVar19,uVar6 & 0xffffffff);
            }
            FUN_1493ebf46(&local_248,&local_358);
            FUN_149403a44(&local_328,&local_2d8);
            FUN_1493ebf80(&local_328,&local_268,&local_248);
            plVar11 = uStack_320;
            if (uStack_320 != (longlong *)0x0) {
              LOCK();
              plVar15 = uStack_320 + 1;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)*plVar15 == 0) {
                (**(code **)*uStack_320)(uStack_320);
                LOCK();
                piVar1 = (int *)((longlong)plVar11 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar11 + 0x10))(plVar11);
                }
              }
            }
            FUN_1493ebff4(&local_248);
            pplVar7 = pplStack_260;
            local_248 = (longlong *)0x4084500000000000;
            uStack_240 = (longlong **)0x4082c00000000000;
            local_368 = local_268;
            local_360 = (longlong *)pplStack_260;
            if (pplStack_260 == (longlong **)0x0) {
              FUN_14943e1cb(&local_368,param_1 + 0x2b8,&local_248);
            }
            else {
              LOCK();
              *(int *)(pplStack_260 + 1) = (int)pplStack_260[1] + 1;
              UNLOCK();
              FUN_14943e1cb(&local_368,param_1 + 0x2b8,&local_248);
              if (pplVar7 != (longlong **)0x0) {
                LOCK();
                plVar11 = (longlong *)(pplVar7 + 1);
                *(int *)plVar11 = (int)*plVar11 + -1;
                UNLOCK();
                if ((int)*plVar11 == 0) {
                  (*(code *)**pplVar7)(pplVar7);
                  LOCK();
                  piVar1 = (int *)((longlong)pplVar7 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)((longlong)*pplVar7 + 0x10))(pplVar7);
                  }
                }
              }
            }
            FUN_145cf7175(local_2c8,uStack_2c0 & 0xffffffff);
            if (local_2c8 != 0) {
              FUN_1400020a8();
            }
            FUN_149403159(local_2b8,uStack_2b0 & 0xffffffff);
            if (local_2b8 != 0) {
              FUN_1400020a8();
            }
          }
        }
        break;
      }
      lVar17 = lVar17 + 0x88;
    } while ((longlong)*(int *)(param_1 + 0x140) * 0x88 != lVar17);
  }
  if ((local_60 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493ebd02 FUN_1493ebd02 body=57 status=ok
// SIG undefined FUN_1493ebd02(void)

longlong FUN_1493ebd02(longlong param_1)

{
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  return param_1;
}



// FUNCTION 1493ebd3c FUN_1493ebd3c body=58 status=ok
// SIG undefined FUN_1493ebd3c(void)

longlong FUN_1493ebd3c(longlong param_1,longlong *param_2)

{
  FUN_140bee9ec(param_1 + 0x1a8);
  FUN_1447a1747(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 1493ebd76 FUN_1493ebd76 body=58 status=ok
// SIG undefined FUN_1493ebd76(void)

longlong FUN_1493ebd76(longlong param_1,longlong *param_2)

{
  FUN_140bee9ec(param_1 + 0x1b8);
  FUN_1447a1747(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 1493ebdb0 FUN_1493ebdb0 body=115 status=ok
// SIG undefined FUN_1493ebdb0(void)

longlong * FUN_1493ebdb0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_1493ee5e8(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 1493ebe24 FUN_1493ebe24 body=108 status=ok
// SIG undefined FUN_1493ebe24(void)

void FUN_1493ebe24(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x1b8),*(undefined4 *)(param_1 + 0x1c0));
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x1b0));
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FUN_1400020a8();
  }
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 1493ebe90 FUN_1493ebe90 body=74 status=ok
// SIG undefined FUN_1493ebe90(void)

void FUN_1493ebe90(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[3];
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



// FUNCTION 1493ebeda FUN_1493ebeda body=50 status=ok
// SIG undefined FUN_1493ebeda(void)

longlong FUN_1493ebeda(longlong param_1)

{
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  return param_1;
}



// FUNCTION 1493ebf0c FUN_1493ebf0c body=58 status=ok
// SIG undefined FUN_1493ebf0c(void)

longlong FUN_1493ebf0c(longlong param_1,longlong *param_2)

{
  FUN_1493f0bf6(param_1 + 0x1b8);
  FUN_149403159(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 1493ebf46 FUN_1493ebf46 body=58 status=ok
// SIG undefined FUN_1493ebf46(void)

longlong FUN_1493ebf46(longlong param_1,longlong *param_2)

{
  FUN_146aae098(param_1 + 0x1a8);
  FUN_145cf7175(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 1493ebf80 FUN_1493ebf80 body=115 status=ok
// SIG undefined FUN_1493ebf80(void)

longlong * FUN_1493ebf80(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_1493efe00(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 1493ebff4 FUN_1493ebff4 body=91 status=ok
// SIG undefined FUN_1493ebff4(void)

void FUN_1493ebff4(longlong param_1)

{
  FUN_149403159(*(undefined8 *)(param_1 + 0x1b8),*(undefined4 *)(param_1 + 0x1c0));
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FUN_1400020a8();
  }
  FUN_145cf7175(*(undefined8 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x1b0));
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FUN_1400020a8();
  }
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 1493ec050 FUN_1493ec050 body=1167 status=ok
// SIG undefined FUN_1493ec050(void)

void FUN_1493ec050(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 auStack_e8 [32];
  void *local_c8;
  int local_c0;
  undefined4 local_bc;
  void *local_b8;
  int local_b0;
  void *local_a8;
  ulonglong uStack_a0;
  longlong local_98;
  ulonglong uStack_90;
  longlong local_88;
  ulonglong uStack_80;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar4 = FUN_145a95408();
  local_78 = 0;
  uStack_70 = 0;
  FUN_1492f3382(param_2,uVar4,&local_78);
  uVar4 = FUN_145a955e0();
  local_88 = 0;
  uStack_80 = 0;
  FUN_1492f3382(param_2,uVar4,&local_88);
  uVar4 = FUN_145a94d94();
  local_98 = 0;
  uStack_90 = 0;
  FUN_1492f3382(param_2,uVar4);
  iVar7 = (int)uStack_80 + (int)uStack_70;
  lVar5 = FUN_1492ebf28(param_1);
  if (lVar5 == param_1) {
    local_a8 = (void *)0x0;
    uVar1 = *(uint *)(param_1 + 0x30);
    pvVar2 = *(void **)(param_1 + 0x28);
    uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar1);
    if ((longlong)(int)uVar1 == 0) {
      uStack_a0 = (ulonglong)uVar1;
      goto LAB_1493ec2ac;
    }
    FUN_1446dd670(&local_a8,uVar1,0);
    memcpy(local_a8,pvVar2,(longlong)(int)uVar1 * 2);
    if ((int)uStack_a0 < 2) goto LAB_1493ec2ac;
  }
  else {
    local_a8 = (void *)0x0;
    uStack_a0 = 0;
LAB_1493ec2ac:
    lVar5 = FUN_1492ebf28(param_1);
    if (lVar5 == param_1) {
      iVar3 = *(int *)(param_1 + 0x168) + -1;
      if (*(int *)(param_1 + 0x168) == 0) {
        iVar3 = 0;
      }
      FUN_1402980a2(&local_a8,*(undefined8 *)(param_1 + 0x160),iVar3);
    }
  }
  FUN_149439c8e(*(undefined8 *)(param_1 + 0x1b8),iVar7,*(undefined1 *)(param_1 + 0x159),&local_a8);
  if ((*(char *)(param_1 + 0x159) == '\0') && ((int)uStack_a0 < 2)) goto LAB_1493ec175;
  if ((iVar7 == 1) && (0 < (int)uStack_80)) {
    lVar5 = FUN_1492f2702(param_2,local_88);
    if (lVar5 == 0) {
LAB_1493ec323:
      lVar5 = 0;
    }
    else {
      lVar6 = FUN_145a955e0();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
           ) != lVar6 + 0x30)) goto LAB_1493ec323;
    }
    pvVar2 = local_a8;
    uVar8 = uStack_a0 & 0xffffffff;
    if ((int)uStack_a0 < 2) {
      local_c8 = (void *)0x0;
      local_c0 = *(int *)(*(longlong *)*param_3 + 0x30);
      lVar6 = (longlong)local_c0;
      pvVar2 = *(void **)(*(longlong *)*param_3 + 0x28);
      if (lVar6 == 0) {
        local_bc = 0;
      }
      else {
        FUN_1446dd670(&local_c8,local_c0,0);
        memcpy(local_c8,pvVar2,lVar6 * 2);
      }
      FUN_1405f3246(&local_b8,&local_c8,1);
      if (local_c8 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      local_b8 = (void *)0x0;
      local_b0 = (int)uStack_a0;
      FUN_1446dd670(&local_b8,uVar8,0);
      memcpy(local_b8,pvVar2,uVar8 * 2);
    }
    FUN_1492f027e(lVar5,&local_b8);
    if (local_b8 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((int)uStack_90 != 1) goto LAB_1493ec175;
  lVar5 = FUN_1492f2702(param_2,local_98);
  if (lVar5 == 0) {
LAB_1493ec25f:
    lVar5 = 0;
  }
  else {
    lVar6 = FUN_145a94d94();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        != lVar6 + 0x30)) goto LAB_1493ec25f;
  }
  pvVar2 = local_a8;
  uVar8 = uStack_a0 & 0xffffffff;
  if ((int)uStack_a0 < 2) {
    local_c8 = (void *)0x0;
    local_c0 = *(int *)(*(longlong *)*param_3 + 0x30);
    lVar6 = (longlong)local_c0;
    pvVar2 = *(void **)(*(longlong *)*param_3 + 0x28);
    if (lVar6 == 0) {
      local_bc = 0;
    }
    else {
      FUN_1446dd670(&local_c8,local_c0,0);
      memcpy(local_c8,pvVar2,lVar6 * 2);
    }
    FUN_1405f3246(&local_b8,&local_c8,1);
    if (local_c8 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    local_b8 = (void *)0x0;
    local_b0 = (int)uStack_a0;
    FUN_1446dd670(&local_b8,uVar8,0);
    memcpy(local_b8,pvVar2,uVar8 * 2);
  }
  if ((*(longlong *)(param_1 + 0x1b0) == 0) ||
     (*(char *)(*(longlong *)(param_1 + 0x1b0) + 0x148) == '\0')) {
    FUN_1400020e8(&local_b8,L"_Anim",5);
  }
  FUN_1492f027e(lVar5,&local_b8);
  if (local_b8 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1493ec175:
  if (local_a8 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_98,uStack_90 & 0xffffffff);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_88,uStack_80 & 0xffffffff);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_78,uStack_70 & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ec4e0 FUN_1493ec4e0 body=140 status=ok
// SIG undefined FUN_1493ec4e0(void)

void FUN_1493ec4e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FUN_1492eb014(*(longlong *)(param_1 + 0x1c8),param_2,param_3,param_4,param_5);
  }
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FUN_1492eb014(*(longlong *)(param_1 + 0x1b8),param_2,param_3,param_4,param_5);
  }
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    FUN_1492eb014(*(longlong *)(param_1 + 0x1c0),param_2,param_3,param_4);
    return;
  }
  return;
}



// FUNCTION 1493ec56c FUN_1493ec56c body=155 status=ok
// SIG undefined FUN_1493ec56c(void)

void FUN_1493ec56c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FUN_1492eb2c8(*(longlong *)(param_1 + 0x1c8),param_2,param_3,param_4,param_5);
  }
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FUN_1492eb2c8(*(longlong *)(param_1 + 0x1b8),param_2,param_3,param_4,param_5);
  }
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    FUN_1492eb2c8(*(longlong *)(param_1 + 0x1c0),param_2,param_3,param_4,param_5);
  }
  uVar1 = FUN_1492f2ba8(param_2,param_3);
  FUN_1493ec608(param_4,uVar1);
  return;
}



// FUNCTION 1493ec608 FUN_1493ec608 body=2781 status=ok
// SIG undefined FUN_1493ec608(void)

void FUN_1493ec608(longlong param_1,longlong param_2)

{
  void *_Src;
  undefined8 **ppuVar1;
  undefined8 *puVar2;
  uint7 uVar3;
  uint uVar4;
  double dVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  int iVar11;
  ulonglong uVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  undefined8 *puVar15;
  bool bVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  undefined1 auStack_198 [32];
  undefined1 *local_178;
  double dStack_170;
  longlong local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 *local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 local_130;
  float fStack_128;
  undefined4 uStack_124;
  longlong local_120 [2];
  undefined1 local_10c [4];
  undefined8 *local_108;
  undefined1 *puStack_100;
  double local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong local_e8;
  undefined8 local_e0;
  int iStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  int local_a0;
  undefined8 local_9c;
  int local_94;
  longlong local_88;
  undefined4 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (param_2 == 0 || param_1 == 0) goto LAB_1493ec6f3;
  FUN_140056680(local_120,L"INTERCHANGE.");
  lVar8 = FUN_144a6c4d8();
  bVar16 = false;
  if (*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) {
    bVar16 = *(longlong *)
              (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30;
  }
  local_a8 = 0;
  local_a0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_9c = 0xffffffff00000080;
  local_94 = 0;
  local_88 = 0;
  local_80 = 0;
  if (bVar16) {
    local_108 = (undefined8 *)0x0;
    puStack_100 = (undefined1 *)0x0;
    FUN_1492fa9ca(param_2,&local_108);
    uVar12 = 0;
    if ((longlong)(int)puStack_100 != 0) {
      lVar8 = (longlong)(int)puStack_100 * 0x30;
      puVar15 = local_108;
      local_160 = param_1;
      do {
        if (*(int *)((longlong)puVar15 + 0x24) == -1) {
          local_d8 = (undefined8 *)0x0;
          uStack_d0 = 0xffffffff00000000;
          local_e8 = 0;
          local_e0 = 0xffffffff00000000;
          uVar3 = local_130._1_7_;
          uVar4 = (uint)local_130._4_4_;
          switch(*(int *)(puVar15 + 2)) {
          case 6:
            local_130 = (undefined8 *)0x0;
            cVar6 = FUN_1492fb7d2(param_2,puVar15,&local_130,&local_e8);
            if (cVar6 != '\0') {
              FUN_149404380(&local_158,&local_130);
LAB_1493ecba9:
              if (local_d8 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
              uVar17 = (float)local_158;
              uVar18 = local_158._4_4_;
              fVar19 = (float)uStack_150;
              uVar20 = uStack_150._4_4_;
LAB_1493eca66:
              local_d8 = (undefined8 *)CONCAT44(uVar18,uVar17);
              uStack_d0 = CONCAT44(uVar20,fVar19);
            }
            break;
          case 7:
          case 9:
          case 0xe:
          case 0xf:
          case 0x10:
          case 0x11:
          case 0x13:
          case 0x14:
          case 0x1a:
          case 0x1b:
          case 0x1c:
          case 0x1e:
          case 0x1f:
          case 0x20:
          case 0x21:
          case 0x22:
          case 0x23:
          case 0x24:
          case 0x25:
          case 0x26:
          case 0x27:
          case 0x28:
          case 0x29:
          case 0x2a:
          case 0x2b:
          case 0x2c:
            break;
          case 8:
            local_130 = (undefined8 *)((ulonglong)uVar4 << 0x20);
            cVar6 = FUN_1492fb640(param_2,puVar15,&local_130,&local_e8);
            if (cVar6 != '\0') {
              FUN_1494041aa(&local_158,&local_130);
              goto LAB_1493ecba9;
            }
            break;
          case 10:
            local_130 = (undefined8 *)((ulonglong)uVar3 << 8);
            cVar6 = FUN_1493ed0e6(param_2,puVar15,&local_130,&local_e8);
            if (cVar6 != '\0') {
              iVar11 = (int)(char)local_130;
LAB_1493ecc91:
              local_158 = (undefined8 **)0x0;
              uStack_150 = (undefined8 *)0x0;
              FUN_144a83b10(&local_158,iVar11);
              if (local_d8 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
              uVar17 = (float)local_158;
              uVar18 = local_158._4_4_;
              fVar19 = (float)uStack_150;
              uVar20 = uStack_150._4_4_;
              goto LAB_1493eca66;
            }
            break;
          case 0xb:
            local_130 = (undefined8 *)((ulonglong)local_130._2_6_ << 0x10);
            cVar6 = FUN_1493ed248(param_2,puVar15,&local_130,&local_e8);
            if (cVar6 != '\0') {
              iVar11 = (int)(short)local_130;
              goto LAB_1493ecc91;
            }
            break;
          case 0xc:
            local_130 = (undefined8 *)((ulonglong)uVar4 << 0x20);
            cVar6 = FUN_1492fb964(param_2,puVar15,&local_130,&local_e8);
            if (cVar6 != '\0') {
              iVar11 = (int)(float)local_130;
              goto LAB_1493ecc91;
            }
            break;
          case 0xd:
            local_130 = (undefined8 *)0x0;
            cVar6 = FUN_1493ed3aa(param_2,puVar15,&local_130,&local_e8);
            if (cVar6 != '\0') {
              FUN_149403df6(&local_158,&local_130);
              goto LAB_1493ecba9;
            }
            break;
          case 0x12:
            local_158 = (undefined8 **)0x0;
            uStack_150 = (undefined8 *)0x0;
            cVar6 = FUN_1492fbaf6(param_2,puVar15,&local_158,&local_e8);
            ppuVar1 = local_158;
            if (cVar6 != '\0') {
              local_130 = (undefined8 *)0x0;
              lVar14 = (longlong)(int)(float)uStack_150;
              fStack_128 = (float)uStack_150;
              if (lVar14 == 0) {
                uStack_124 = 0;
              }
              else {
                FUN_1446dd670(&local_130,(ulonglong)uStack_150 & 0xffffffff,0);
                memcpy(local_130,ppuVar1,lVar14 * 2);
              }
              if (local_d8 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
              local_d8 = local_130;
              uStack_d0 = CONCAT44(uStack_124,fStack_128);
            }
            if (local_158 != (undefined8 **)0x0) {
              FUN_1400020a8(local_158);
            }
            break;
          case 0x15:
            local_130 = (undefined8 *)((ulonglong)uVar3 << 8);
            cVar6 = FUN_1493ed50c(param_2,puVar15,&local_130,&local_e8);
            if (cVar6 != '\0') {
              FUN_149403eb4(&local_158,&local_130);
              goto LAB_1493ecba9;
            }
            break;
          case 0x16:
            local_130 = (undefined8 *)((ulonglong)local_130._2_6_ << 0x10);
            cVar6 = FUN_1493ed66e(param_2,puVar15,&local_130,&local_e8);
            if (cVar6 != '\0') {
              FUN_149403f72(&local_158,&local_130);
              goto LAB_1493ecba9;
            }
            break;
          case 0x17:
            local_130 = (undefined8 *)((ulonglong)uVar4 << 0x20);
            cVar6 = FUN_1493ed7d0(param_2,puVar15,&local_130,&local_e8);
            if (cVar6 != '\0') {
              FUN_149404030(&local_158,&local_130);
              goto LAB_1493ecba9;
            }
            break;
          case 0x18:
            local_130 = (undefined8 *)0x0;
            cVar6 = FUN_1493ed932(param_2,puVar15,&local_130,&local_e8);
            if (cVar6 != '\0') {
              FUN_1494040ec(&local_158,&local_130);
              goto LAB_1493ecba9;
            }
            break;
          case 0x19:
            local_158 = (undefined8 **)0x0;
            uStack_150 = (undefined8 *)0x0;
            cVar6 = FUN_1493ee01c(param_2,puVar15,&local_158,&local_e8);
            if (cVar6 != '\0') {
              pwVar13 = L"X=%3.3f Y=%3.3f";
              ppuVar1 = local_158;
              puVar2 = uStack_150;
LAB_1493eca40:
              FUN_140002266(&local_130,pwVar13,ppuVar1,puVar2);
              if (local_d8 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
              uVar17 = (float)local_130;
              uVar18 = local_130._4_4_;
              fVar19 = fStack_128;
              uVar20 = uStack_124;
              goto LAB_1493eca66;
            }
            break;
          case 0x1d:
            local_130 = (undefined8 *)((ulonglong)local_130._2_6_ << 0x10);
            cVar6 = FUN_1493eda94(param_2,puVar15,&local_130,&local_e8);
            if (cVar6 != '\0') {
              FUN_149404268(&local_158,&local_130);
              goto LAB_1493ecba9;
            }
            break;
          case 0x2d:
            local_130 = (undefined8 *)0x0;
            fStack_128 = 0.0;
            cVar6 = FUN_1493edd58(param_2,puVar15,&local_130,&local_e8);
            if (cVar6 != '\0') {
              local_178 = (undefined1 *)(double)fStack_128;
              pwVar13 = L"X=%3.3f Y=%3.3f Z=%3.3f";
LAB_1493ecb9a:
              FUN_140002266(&local_158,pwVar13,(double)(float)local_130,(double)local_130._4_4_);
              goto LAB_1493ecba9;
            }
            break;
          case 0x2e:
            local_158 = (undefined8 **)0x0;
            uStack_150 = (undefined8 *)0x0;
            local_148 = (undefined1 *)0x0;
            cVar6 = FUN_1493ee17e(param_2,puVar15,&local_158,&local_e8);
            if (cVar6 != '\0') {
              local_178 = local_148;
              pwVar13 = L"X=%3.3f Y=%3.3f Z=%3.3f";
              ppuVar1 = local_158;
              puVar2 = uStack_150;
              goto LAB_1493eca40;
            }
            break;
          case 0x2f:
            local_130 = (undefined8 *)0x0;
            cVar6 = FUN_1493edbf6(param_2,puVar15,&local_130,&local_e8);
            if (cVar6 != '\0') {
              pwVar13 = L"X=%3.3f Y=%3.3f";
              goto LAB_1493ecb9a;
            }
            break;
          case 0x30:
            local_158 = (undefined8 **)0x0;
            uStack_150 = (undefined8 *)0x3f80000000000000;
            cVar6 = FUN_1493edeba(param_2,puVar15,&local_158,&local_e8);
            if (cVar6 != '\0') {
              dStack_170 = (double)uStack_150._4_4_;
              local_178 = (undefined1 *)(double)(float)uStack_150;
              puVar2 = (undefined8 *)(double)local_158._4_4_;
              ppuVar1 = (undefined8 **)(double)(float)local_158;
LAB_1493eca36:
              pwVar13 = L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f";
              goto LAB_1493eca40;
            }
            break;
          case 0x31:
            local_158 = (undefined8 **)0x0;
            uStack_150 = (undefined8 *)0x0;
            local_148 = (undefined1 *)0x0;
            uStack_140 = 1.0;
            cVar6 = FUN_1493ee2e0(param_2,puVar15,&local_158,&local_e8);
            if (cVar6 != '\0') {
              local_178 = local_148;
              dStack_170 = uStack_140;
              puVar2 = uStack_150;
              ppuVar1 = local_158;
              goto LAB_1493eca36;
            }
            break;
          default:
            if (*(int *)(puVar15 + 2) == 1) {
              local_130 = (undefined8 *)((ulonglong)uVar3 << 8);
              cVar6 = FUN_1492fb4ae(param_2,puVar15,&local_130,&local_e8);
              if (cVar6 != '\0') {
                pwVar13 = L"false";
                if ((char)local_130 != '\0') {
                  pwVar13 = L"true";
                }
                FUN_140056680(&local_158,pwVar13);
                goto LAB_1493ecba9;
              }
            }
          }
          if (uStack_d0._4_4_ != -1) {
            local_130 = (undefined8 *)0x0;
            fStack_128 = *(float *)(puVar15 + 1);
            lVar14 = (longlong)(int)fStack_128;
            _Src = (void *)*puVar15;
            if (lVar14 == 0) {
              uStack_124 = 0;
            }
            else {
              FUN_1446dd670(&local_130,fStack_128,0);
              memcpy(local_130,_Src,lVar14 * 2);
            }
            local_158 = (undefined8 **)&local_130;
            uStack_150 = &local_d8;
            FUN_140ac5c08(&local_c8,local_10c,&local_158,0);
            if (local_130 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
          if ((iStack_dc != -1) && (local_e8 != 0)) {
            FUN_1400020a8();
          }
          if ((uStack_d0._4_4_ != -1) && (local_d8 != (undefined8 *)0x0)) {
            FUN_1400020a8();
          }
        }
        puVar15 = puVar15 + 6;
        lVar8 = lVar8 + -0x30;
      } while (lVar8 != 0);
      uVar12 = (ulonglong)puStack_100 & 0xffffffff;
      param_1 = local_160;
    }
    FUN_149306a38(local_108,uVar12);
    if (local_108 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    lVar8 = FUN_144a6c4d8();
    if (((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) &&
       (lVar8 = *(longlong *)(param_1 + 0x1c8), lVar8 != 0)) {
      uVar9 = FUN_1411bc9a6();
      plVar10 = (longlong *)FUN_144718840(lVar8,uVar9);
      if (plVar10 != (longlong *)0x0) {
        lVar8 = FUN_1493ee442(plVar10);
        if (lVar8 == 0) {
          if (local_94 < (int)uStack_c0) {
            lVar8 = FUN_1493ee4d3(*(undefined8 *)(param_1 + 0x1c8));
            (**(code **)(*plVar10 + 0x10))(plVar10,lVar8);
            if (lVar8 != 0) goto LAB_1493ecf6f;
          }
        }
        else {
          if (*(int *)(lVar8 + 0x30) != *(int *)(lVar8 + 0x5c)) {
            FUN_14587c8aa(lVar8 + 0x28);
            FUN_145da4014(lVar8 + 0x28);
          }
LAB_1493ecf6f:
          local_108 = (undefined8 *)&DAT_100000000;
          local_f8 = 2.12199579047121e-314;
          local_f0 = 0;
          iVar11 = 0;
          puStack_100 = local_b8;
          if (local_a0 != 0) {
            FUN_1449c0562(&local_108);
            iVar11 = local_a0;
          }
          uStack_140 = local_f8;
          dVar5 = uStack_140;
          local_138 = local_f0;
          local_134 = local_ec;
          uStack_150 = local_108;
          local_148 = puStack_100;
          uStack_140._4_4_ = (int)((ulonglong)local_f8 >> 0x20);
          if ((uStack_140._4_4_ != iVar11) || (puStack_100 != local_b8)) {
            iVar7 = uStack_140._4_4_;
            local_158 = (undefined8 **)&local_c8;
            uStack_140 = dVar5;
            do {
              local_108 = (undefined8 *)((longlong)*local_158 + (longlong)iVar7 * 0x28);
              puStack_100 = (undefined1 *)((longlong)*local_158 + (longlong)iVar7 * 0x28 + 0x10);
              FUN_140ac5c08(lVar8 + 0x28,&local_d8,&local_108,0);
              uStack_140 = (double)CONCAT44(uStack_140._4_4_,
                                            (uint)uStack_140 & ~(uint)uStack_150._4_4_);
              FUN_1449c0562(&uStack_150);
              iVar7 = uStack_140._4_4_;
              dVar5 = uStack_140;
            } while (local_158 != (undefined8 **)&local_c8 ||
                     (local_148 != local_b8 || uStack_140._4_4_ != iVar11));
          }
          uStack_140 = dVar5;
          local_108 = &local_d8;
          local_158 = &local_108;
          FUN_14940443e(lVar8 + 0x28);
          FUN_140b7fdd8(lVar8 + 0x28);
        }
      }
    }
    local_80 = 0;
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1407a3a68(&local_c8);
  if (local_120[0] != 0) {
    FUN_1400020a8();
  }
LAB_1493ec6f3:
  if ((local_70 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493ed0e6 FUN_1493ed0e6 body=352 status=ok
// SIG undefined FUN_1493ed0e6(void)

undefined8 FUN_1493ed0e6(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  longlong local_78 [3];
  longlong local_60 [2];
  longlong local_50 [2];
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = 0;
  cVar1 = FUN_1492fb34a(param_1,param_2,0,&local_39);
  if (cVar1 != '\0') {
    uVar2 = 0;
    FUN_1492feb62(local_50,param_2,local_39,0);
    cVar1 = FUN_149309af4(param_1,local_50,param_3);
    if (cVar1 != '\0') {
      if (*(int *)((longlong)param_4 + 0xc) != -1) {
        if (*param_4 != 0) {
          FUN_1400020a8();
        }
        *param_4 = 0;
        param_4[1] = -0x100000000;
      }
      uVar2 = 1;
      FUN_1492feb62(local_60,param_2,local_39,1);
      cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_60);
      if (cVar1 != '\0') {
        local_78[0] = 0;
        local_78[1] = 0;
        cVar1 = FUN_149306b82(param_1,local_60,local_78);
        if (cVar1 == '\0') {
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
          uVar2 = 0;
        }
        else {
          if (local_78 != param_4) {
            FUN_14034a368(param_4,local_78);
          }
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
        }
      }
      if (local_60[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ed248 FUN_1493ed248 body=352 status=ok
// SIG undefined FUN_1493ed248(void)

undefined8 FUN_1493ed248(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  longlong local_78 [3];
  longlong local_60 [2];
  longlong local_50 [2];
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = 0;
  cVar1 = FUN_1492fb34a(param_1,param_2,0,&local_39);
  if (cVar1 != '\0') {
    uVar2 = 0;
    FUN_1492feb62(local_50,param_2,local_39,0);
    cVar1 = FUN_149309cde(param_1,local_50,param_3);
    if (cVar1 != '\0') {
      if (*(int *)((longlong)param_4 + 0xc) != -1) {
        if (*param_4 != 0) {
          FUN_1400020a8();
        }
        *param_4 = 0;
        param_4[1] = -0x100000000;
      }
      uVar2 = 1;
      FUN_1492feb62(local_60,param_2,local_39,1);
      cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_60);
      if (cVar1 != '\0') {
        local_78[0] = 0;
        local_78[1] = 0;
        cVar1 = FUN_149306b82(param_1,local_60,local_78);
        if (cVar1 == '\0') {
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
          uVar2 = 0;
        }
        else {
          if (local_78 != param_4) {
            FUN_14034a368(param_4,local_78);
          }
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
        }
      }
      if (local_60[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ed3aa FUN_1493ed3aa body=352 status=ok
// SIG undefined FUN_1493ed3aa(void)

undefined8 FUN_1493ed3aa(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  longlong local_78 [3];
  longlong local_60 [2];
  longlong local_50 [2];
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = 0;
  cVar1 = FUN_1492fb34a(param_1,param_2,0,&local_39);
  if (cVar1 != '\0') {
    uVar2 = 0;
    FUN_1492feb62(local_50,param_2,local_39,0);
    cVar1 = FUN_14930a666(param_1,local_50,param_3);
    if (cVar1 != '\0') {
      if (*(int *)((longlong)param_4 + 0xc) != -1) {
        if (*param_4 != 0) {
          FUN_1400020a8();
        }
        *param_4 = 0;
        param_4[1] = -0x100000000;
      }
      uVar2 = 1;
      FUN_1492feb62(local_60,param_2,local_39,1);
      cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_60);
      if (cVar1 != '\0') {
        local_78[0] = 0;
        local_78[1] = 0;
        cVar1 = FUN_149306b82(param_1,local_60,local_78);
        if (cVar1 == '\0') {
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
          uVar2 = 0;
        }
        else {
          if (local_78 != param_4) {
            FUN_14034a368(param_4,local_78);
          }
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
        }
      }
      if (local_60[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ed50c FUN_1493ed50c body=352 status=ok
// SIG undefined FUN_1493ed50c(void)

undefined8 FUN_1493ed50c(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  longlong local_78 [3];
  longlong local_60 [2];
  longlong local_50 [2];
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = 0;
  cVar1 = FUN_1492fb34a(param_1,param_2,0,&local_39);
  if (cVar1 != '\0') {
    uVar2 = 0;
    FUN_1492feb62(local_50,param_2,local_39,0);
    cVar1 = FUN_14930ab94(param_1,local_50,param_3);
    if (cVar1 != '\0') {
      if (*(int *)((longlong)param_4 + 0xc) != -1) {
        if (*param_4 != 0) {
          FUN_1400020a8();
        }
        *param_4 = 0;
        param_4[1] = -0x100000000;
      }
      uVar2 = 1;
      FUN_1492feb62(local_60,param_2,local_39,1);
      cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_60);
      if (cVar1 != '\0') {
        local_78[0] = 0;
        local_78[1] = 0;
        cVar1 = FUN_149306b82(param_1,local_60,local_78);
        if (cVar1 == '\0') {
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
          uVar2 = 0;
        }
        else {
          if (local_78 != param_4) {
            FUN_14034a368(param_4,local_78);
          }
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
        }
      }
      if (local_60[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ed66e FUN_1493ed66e body=352 status=ok
// SIG undefined FUN_1493ed66e(void)

undefined8 FUN_1493ed66e(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  longlong local_78 [3];
  longlong local_60 [2];
  longlong local_50 [2];
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = 0;
  cVar1 = FUN_1492fb34a(param_1,param_2,0,&local_39);
  if (cVar1 != '\0') {
    uVar2 = 0;
    FUN_1492feb62(local_50,param_2,local_39,0);
    cVar1 = FUN_14930b112(param_1,local_50,param_3);
    if (cVar1 != '\0') {
      if (*(int *)((longlong)param_4 + 0xc) != -1) {
        if (*param_4 != 0) {
          FUN_1400020a8();
        }
        *param_4 = 0;
        param_4[1] = -0x100000000;
      }
      uVar2 = 1;
      FUN_1492feb62(local_60,param_2,local_39,1);
      cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_60);
      if (cVar1 != '\0') {
        local_78[0] = 0;
        local_78[1] = 0;
        cVar1 = FUN_149306b82(param_1,local_60,local_78);
        if (cVar1 == '\0') {
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
          uVar2 = 0;
        }
        else {
          if (local_78 != param_4) {
            FUN_14034a368(param_4,local_78);
          }
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
        }
      }
      if (local_60[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ed7d0 FUN_1493ed7d0 body=352 status=ok
// SIG undefined FUN_1493ed7d0(void)

undefined8 FUN_1493ed7d0(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  longlong local_78 [3];
  longlong local_60 [2];
  longlong local_50 [2];
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = 0;
  cVar1 = FUN_1492fb34a(param_1,param_2,0,&local_39);
  if (cVar1 != '\0') {
    uVar2 = 0;
    FUN_1492feb62(local_50,param_2,local_39,0);
    cVar1 = FUN_14930b2fe(param_1,local_50,param_3);
    if (cVar1 != '\0') {
      if (*(int *)((longlong)param_4 + 0xc) != -1) {
        if (*param_4 != 0) {
          FUN_1400020a8();
        }
        *param_4 = 0;
        param_4[1] = -0x100000000;
      }
      uVar2 = 1;
      FUN_1492feb62(local_60,param_2,local_39,1);
      cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_60);
      if (cVar1 != '\0') {
        local_78[0] = 0;
        local_78[1] = 0;
        cVar1 = FUN_149306b82(param_1,local_60,local_78);
        if (cVar1 == '\0') {
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
          uVar2 = 0;
        }
        else {
          if (local_78 != param_4) {
            FUN_14034a368(param_4,local_78);
          }
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
        }
      }
      if (local_60[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ed932 FUN_1493ed932 body=352 status=ok
// SIG undefined FUN_1493ed932(void)

undefined8 FUN_1493ed932(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  longlong local_78 [3];
  longlong local_60 [2];
  longlong local_50 [2];
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = 0;
  cVar1 = FUN_1492fb34a(param_1,param_2,0,&local_39);
  if (cVar1 != '\0') {
    uVar2 = 0;
    FUN_1492feb62(local_50,param_2,local_39,0);
    cVar1 = FUN_14930b4e8(param_1,local_50,param_3);
    if (cVar1 != '\0') {
      if (*(int *)((longlong)param_4 + 0xc) != -1) {
        if (*param_4 != 0) {
          FUN_1400020a8();
        }
        *param_4 = 0;
        param_4[1] = -0x100000000;
      }
      uVar2 = 1;
      FUN_1492feb62(local_60,param_2,local_39,1);
      cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_60);
      if (cVar1 != '\0') {
        local_78[0] = 0;
        local_78[1] = 0;
        cVar1 = FUN_149306b82(param_1,local_60,local_78);
        if (cVar1 == '\0') {
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
          uVar2 = 0;
        }
        else {
          if (local_78 != param_4) {
            FUN_14034a368(param_4,local_78);
          }
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
        }
      }
      if (local_60[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493eda94 FUN_1493eda94 body=352 status=ok
// SIG undefined FUN_1493eda94(void)

undefined8 FUN_1493eda94(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  longlong local_78 [3];
  longlong local_60 [2];
  longlong local_50 [2];
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = 0;
  cVar1 = FUN_1492fb34a(param_1,param_2,0,&local_39);
  if (cVar1 != '\0') {
    uVar2 = 0;
    FUN_1492feb62(local_50,param_2,local_39,0);
    cVar1 = FUN_14930be74(param_1,local_50,param_3);
    if (cVar1 != '\0') {
      if (*(int *)((longlong)param_4 + 0xc) != -1) {
        if (*param_4 != 0) {
          FUN_1400020a8();
        }
        *param_4 = 0;
        param_4[1] = -0x100000000;
      }
      uVar2 = 1;
      FUN_1492feb62(local_60,param_2,local_39,1);
      cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_60);
      if (cVar1 != '\0') {
        local_78[0] = 0;
        local_78[1] = 0;
        cVar1 = FUN_149306b82(param_1,local_60,local_78);
        if (cVar1 == '\0') {
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
          uVar2 = 0;
        }
        else {
          if (local_78 != param_4) {
            FUN_14034a368(param_4,local_78);
          }
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
        }
      }
      if (local_60[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493edbf6 FUN_1493edbf6 body=352 status=ok
// SIG undefined FUN_1493edbf6(void)

undefined8 FUN_1493edbf6(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  longlong local_78 [3];
  longlong local_60 [2];
  longlong local_50 [2];
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = 0;
  cVar1 = FUN_1492fb34a(param_1,param_2,0,&local_39);
  if (cVar1 != '\0') {
    uVar2 = 0;
    FUN_1492feb62(local_50,param_2,local_39,0);
    cVar1 = FUN_14930c060(param_1,local_50,param_3);
    if (cVar1 != '\0') {
      if (*(int *)((longlong)param_4 + 0xc) != -1) {
        if (*param_4 != 0) {
          FUN_1400020a8();
        }
        *param_4 = 0;
        param_4[1] = -0x100000000;
      }
      uVar2 = 1;
      FUN_1492feb62(local_60,param_2,local_39,1);
      cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_60);
      if (cVar1 != '\0') {
        local_78[0] = 0;
        local_78[1] = 0;
        cVar1 = FUN_149306b82(param_1,local_60,local_78);
        if (cVar1 == '\0') {
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
          uVar2 = 0;
        }
        else {
          if (local_78 != param_4) {
            FUN_14034a368(param_4,local_78);
          }
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
        }
      }
      if (local_60[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493edd58 FUN_1493edd58 body=352 status=ok
// SIG undefined FUN_1493edd58(void)

undefined8 FUN_1493edd58(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  longlong local_78 [3];
  longlong local_60 [2];
  longlong local_50 [2];
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = 0;
  cVar1 = FUN_1492fb34a(param_1,param_2,0,&local_39);
  if (cVar1 != '\0') {
    uVar2 = 0;
    FUN_1492feb62(local_50,param_2,local_39,0);
    cVar1 = FUN_14930c184(param_1,local_50,param_3);
    if (cVar1 != '\0') {
      if (*(int *)((longlong)param_4 + 0xc) != -1) {
        if (*param_4 != 0) {
          FUN_1400020a8();
        }
        *param_4 = 0;
        param_4[1] = -0x100000000;
      }
      uVar2 = 1;
      FUN_1492feb62(local_60,param_2,local_39,1);
      cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_60);
      if (cVar1 != '\0') {
        local_78[0] = 0;
        local_78[1] = 0;
        cVar1 = FUN_149306b82(param_1,local_60,local_78);
        if (cVar1 == '\0') {
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
          uVar2 = 0;
        }
        else {
          if (local_78 != param_4) {
            FUN_14034a368(param_4,local_78);
          }
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
        }
      }
      if (local_60[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493edeba FUN_1493edeba body=352 status=ok
// SIG undefined FUN_1493edeba(void)

undefined8 FUN_1493edeba(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  longlong local_78 [3];
  longlong local_60 [2];
  longlong local_50 [2];
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = 0;
  cVar1 = FUN_1492fb34a(param_1,param_2,0,&local_39);
  if (cVar1 != '\0') {
    uVar2 = 0;
    FUN_1492feb62(local_50,param_2,local_39,0);
    cVar1 = FUN_14930c378(param_1,local_50,param_3);
    if (cVar1 != '\0') {
      if (*(int *)((longlong)param_4 + 0xc) != -1) {
        if (*param_4 != 0) {
          FUN_1400020a8();
        }
        *param_4 = 0;
        param_4[1] = -0x100000000;
      }
      uVar2 = 1;
      FUN_1492feb62(local_60,param_2,local_39,1);
      cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_60);
      if (cVar1 != '\0') {
        local_78[0] = 0;
        local_78[1] = 0;
        cVar1 = FUN_149306b82(param_1,local_60,local_78);
        if (cVar1 == '\0') {
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
          uVar2 = 0;
        }
        else {
          if (local_78 != param_4) {
            FUN_14034a368(param_4,local_78);
          }
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
        }
      }
      if (local_60[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ee01c FUN_1493ee01c body=352 status=ok
// SIG undefined FUN_1493ee01c(void)

undefined8 FUN_1493ee01c(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  longlong local_78 [3];
  longlong local_60 [2];
  longlong local_50 [2];
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = 0;
  cVar1 = FUN_1492fb34a(param_1,param_2,0,&local_39);
  if (cVar1 != '\0') {
    uVar2 = 0;
    FUN_1492feb62(local_50,param_2,local_39,0);
    cVar1 = FUN_14930c564(param_1,local_50,param_3);
    if (cVar1 != '\0') {
      if (*(int *)((longlong)param_4 + 0xc) != -1) {
        if (*param_4 != 0) {
          FUN_1400020a8();
        }
        *param_4 = 0;
        param_4[1] = -0x100000000;
      }
      uVar2 = 1;
      FUN_1492feb62(local_60,param_2,local_39,1);
      cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_60);
      if (cVar1 != '\0') {
        local_78[0] = 0;
        local_78[1] = 0;
        cVar1 = FUN_149306b82(param_1,local_60,local_78);
        if (cVar1 == '\0') {
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
          uVar2 = 0;
        }
        else {
          if (local_78 != param_4) {
            FUN_14034a368(param_4,local_78);
          }
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
        }
      }
      if (local_60[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ee17e FUN_1493ee17e body=352 status=ok
// SIG undefined FUN_1493ee17e(void)

undefined8 FUN_1493ee17e(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  longlong local_78 [3];
  longlong local_60 [2];
  longlong local_50 [2];
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = 0;
  cVar1 = FUN_1492fb34a(param_1,param_2,0,&local_39);
  if (cVar1 != '\0') {
    uVar2 = 0;
    FUN_1492feb62(local_50,param_2,local_39,0);
    cVar1 = FUN_14930c82a(param_1,local_50,param_3);
    if (cVar1 != '\0') {
      if (*(int *)((longlong)param_4 + 0xc) != -1) {
        if (*param_4 != 0) {
          FUN_1400020a8();
        }
        *param_4 = 0;
        param_4[1] = -0x100000000;
      }
      uVar2 = 1;
      FUN_1492feb62(local_60,param_2,local_39,1);
      cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_60);
      if (cVar1 != '\0') {
        local_78[0] = 0;
        local_78[1] = 0;
        cVar1 = FUN_149306b82(param_1,local_60,local_78);
        if (cVar1 == '\0') {
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
          uVar2 = 0;
        }
        else {
          if (local_78 != param_4) {
            FUN_14034a368(param_4,local_78);
          }
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
        }
      }
      if (local_60[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ee2e0 FUN_1493ee2e0 body=352 status=ok
// SIG undefined FUN_1493ee2e0(void)

undefined8 FUN_1493ee2e0(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  longlong local_78 [3];
  longlong local_60 [2];
  longlong local_50 [2];
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = 0;
  cVar1 = FUN_1492fb34a(param_1,param_2,0,&local_39);
  if (cVar1 != '\0') {
    uVar2 = 0;
    FUN_1492feb62(local_50,param_2,local_39,0);
    cVar1 = FUN_14930cc06(param_1,local_50,param_3);
    if (cVar1 != '\0') {
      if (*(int *)((longlong)param_4 + 0xc) != -1) {
        if (*param_4 != 0) {
          FUN_1400020a8();
        }
        *param_4 = 0;
        param_4[1] = -0x100000000;
      }
      uVar2 = 1;
      FUN_1492feb62(local_60,param_2,local_39,1);
      cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_60);
      if (cVar1 != '\0') {
        local_78[0] = 0;
        local_78[1] = 0;
        cVar1 = FUN_149306b82(param_1,local_60,local_78);
        if (cVar1 == '\0') {
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
          uVar2 = 0;
        }
        else {
          if (local_78 != param_4) {
            FUN_14034a368(param_4,local_78);
          }
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
        }
      }
      if (local_60[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ee442 FUN_1493ee442 body=144 status=ok
// SIG undefined FUN_1493ee442(void)

longlong FUN_1493ee442(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145ba1328();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  lVar1 = (**(code **)(*param_1 + 0x18))(param_1,&local_18);
  if (lVar1 != 0) {
    lVar2 = FUN_145ba1328();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_1493ee4a9;
  }
  lVar1 = 0;
LAB_1493ee4a9:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ee4d3 FUN_1493ee4d3 body=174 status=ok
// SIG undefined FUN_1493ee4d3(void)

undefined8 FUN_1493ee4d3(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145ba1328();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 9;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ee582 FUN_1493ee582 body=101 status=ok
// SIG undefined FUN_1493ee582(void)

void FUN_1493ee582(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FUN_1492eb60c(*(longlong *)(param_1 + 0x1c8),param_2,param_3);
  }
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FUN_1492eb60c(*(longlong *)(param_1 + 0x1b8),param_2,param_3);
  }
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    FUN_1492eb60c(*(longlong *)(param_1 + 0x1c0),param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 1493ee5e8 FUN_1493ee5e8 body=3956 status=ok
// SIG undefined FUN_1493ee5e8(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1493ee5e8(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_1bf8 [32];
  undefined1 *local_1bd8;
  longlong *local_1bd0;
  longlong *local_1bc8;
  longlong *local_1bc0;
  longlong *local_1bb8;
  undefined1 local_1ba9;
  undefined1 local_1ba8 [8];
  longlong *local_1ba0;
  undefined1 local_1b89;
  code *local_1b88;
  undefined4 local_1b80;
  undefined4 uStack_1b7c;
  undefined1 local_1b69;
  wchar_t *local_1b68;
  undefined4 local_1b60;
  undefined4 uStack_1b5c;
  undefined1 local_1b50 [4];
  undefined1 local_1b4c [4];
  longlong *local_1b48 [2];
  undefined1 local_1b38 [16];
  undefined1 local_1b28;
  undefined8 local_1b20;
  undefined8 uStack_1b18;
  undefined8 local_1b10;
  longlong *local_1b08;
  undefined8 local_1b00;
  longlong *local_1af8;
  undefined1 local_1ae9;
  undefined1 local_1ae8 [8];
  longlong *local_1ae0;
  undefined1 local_1ac9;
  undefined8 local_1ac8;
  longlong *local_1ac0;
  undefined1 local_1aa9;
  undefined1 local_1aa8 [8];
  longlong *local_1aa0;
  undefined1 local_1a90 [4];
  undefined1 local_1a8c [4];
  longlong *local_1a88 [2];
  undefined1 local_1a78 [16];
  undefined1 local_1a68;
  undefined8 local_1a60;
  undefined8 uStack_1a58;
  undefined4 local_1a50;
  undefined1 local_1a4c;
  undefined8 local_1a48;
  undefined8 uStack_1a40;
  undefined1 local_1a38 [4];
  undefined1 local_1a34 [4];
  longlong *local_1a30 [2];
  undefined1 local_1a20 [16];
  undefined1 local_1a10;
  undefined8 local_1a08;
  undefined8 uStack_1a00;
  undefined4 local_19f8;
  undefined1 local_19f4;
  undefined8 local_19f0;
  undefined8 uStack_19e8;
  undefined8 local_19e0;
  longlong *local_19d8;
  undefined8 local_19d0;
  longlong *local_19c8;
  undefined8 local_19c0;
  longlong *local_19b8;
  undefined8 local_19b0;
  longlong *local_19a8;
  undefined8 local_19a0;
  longlong *local_1998;
  undefined4 local_1990;
  undefined1 local_198c;
  undefined8 local_1988;
  undefined8 uStack_1980;
  undefined8 local_1978;
  longlong *local_1970;
  undefined8 local_1968;
  longlong *local_1960;
  undefined8 local_1958;
  longlong *local_1950;
  wchar_t *local_1948;
  undefined8 uStack_1940;
  undefined1 local_1938;
  undefined8 local_1930;
  undefined8 uStack_1928;
  undefined4 local_1780;
  undefined1 local_15d8 [192];
  undefined1 local_1518 [424];
  undefined8 local_1370;
  undefined4 local_12f0;
  undefined1 local_12ec;
  undefined1 auStack_12e8 [280];
  code *local_11d0;
  undefined4 local_11c8;
  undefined8 local_1028;
  undefined4 local_fa8;
  undefined1 local_fa4;
  undefined1 local_fa0 [280];
  undefined1 local_e88 [528];
  void *local_c78;
  undefined8 uStack_c70;
  undefined1 local_c68;
  undefined8 local_c60;
  undefined8 uStack_c58;
  undefined1 local_ac8 [112];
  longlong local_a58;
  undefined8 uStack_a50;
  undefined8 local_a48;
  longlong *local_a40;
  undefined1 local_8b0 [424];
  undefined8 local_708;
  longlong *local_700;
  undefined1 local_580 [24];
  undefined4 local_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  undefined1 local_558;
  undefined1 local_550 [16];
  undefined4 local_540;
  undefined1 local_53c;
  undefined4 local_538;
  undefined1 local_534;
  undefined1 local_4c0 [440];
  undefined1 local_308 [472];
  undefined8 local_130;
  longlong *local_128;
  ulonglong local_60;
  undefined8 uStack_48;
  
  uStack_48 = 0x1493ee5fe;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1bf8;
  plVar11 = (longlong *)(param_1 + 0x278);
  FUN_140bee9ec(plVar11,param_2 + 0x1a8);
  plVar7 = (longlong *)(param_1 + 0x288);
  FUN_140bee9ec(plVar7,param_2 + 0x1b8);
  plVar3 = (longlong *)(param_1 + 0x298);
  FUN_14054c6c4(plVar3,param_2 + 0x1c8);
  lVar12 = *(longlong *)(param_2 + 0x1d8);
  *(longlong *)(param_1 + 0x2a8) = lVar12;
  if (lVar12 != 0) {
    uVar6 = *(uint *)(param_1 + 0x280);
    if ((int)*(uint *)(param_1 + 0x280) < (int)*(uint *)(param_1 + 0x290)) {
      uVar6 = *(uint *)(param_1 + 0x290);
    }
    local_1bd0 = plVar11;
    local_1bc0 = plVar3;
    local_1bb8 = plVar7;
    if (0 < (int)uVar6) {
      local_1bc8 = (longlong *)(ulonglong)uVar6;
      lVar12 = 8;
      plVar11 = (longlong *)0x0;
      do {
        plVar7 = (longlong *)FUN_14001cc68(0x48,0x10);
        plVar7[1] = (longlong)&DAT_100000001;
        *plVar7 = (longlong)&PTR_FUN_14bcc20f0;
        plVar7[2] = 0;
        plVar7[3] = 0;
        plVar7[4] = 0;
        *(undefined4 *)(plVar7 + 4) = 0xffffffff;
        plVar7[5] = 0;
        plVar7[6] = 0;
        plVar7[7] = 0;
        plVar7[8] = 0;
        if ((longlong)plVar11 < (longlong)*(int *)(param_1 + 0x290)) {
          local_c78 = (void *)0x0;
          iVar4 = *(int *)(*local_1bb8 + lVar12);
          pvVar5 = *(void **)(*local_1bb8 + -8 + lVar12);
          uStack_c70._0_4_ = iVar4;
          if ((longlong)iVar4 == 0) {
            uStack_c70._4_4_ = 0;
          }
          else {
            FUN_1446dd670(&local_c78,iVar4,0);
            memcpy(local_c78,pvVar5,(longlong)iVar4 * 2);
            if (plVar7[2] != 0) {
              FUN_1400020a8();
            }
          }
        }
        else {
          local_c78 = (void *)0x0;
          uStack_c70._0_4_ = 0;
          uStack_c70._4_4_ = 0;
        }
        plVar7[2] = (longlong)local_c78;
        local_c78 = (void *)0x0;
        *(int *)(plVar7 + 3) = (int)uStack_c70;
        *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_c70._4_4_;
        *(undefined4 *)(plVar7 + 4) = 0xffffffff;
        if ((longlong)plVar11 < (longlong)*(int *)(param_1 + 0x2a0)) {
          iVar4 = *(int *)(*local_1bc0 + (longlong)plVar11 * 4);
          *(int *)(plVar7 + 4) = iVar4;
          if ((-1 < (longlong)iVar4) && (iVar4 < *(int *)(param_1 + 0x280))) {
            FUN_1402980a2(plVar7 + 5,*(undefined8 *)(*local_1bd0 + (longlong)iVar4 * 0x10));
          }
        }
        if ((longlong)plVar11 < (longlong)*(int *)(param_1 + 0x280)) {
          local_c78 = (void *)0x0;
          uVar6 = *(uint *)(*local_1bd0 + lVar12);
          pvVar5 = *(void **)(*local_1bd0 + -8 + lVar12);
          uStack_c70 = CONCAT44(uStack_c70._4_4_,uVar6);
          if ((longlong)(int)uVar6 == 0) {
            uStack_c70 = (ulonglong)uVar6;
          }
          else {
            FUN_1446dd670(&local_c78,uVar6,0);
            memcpy(local_c78,pvVar5,(longlong)(int)uVar6 * 2);
          }
        }
        else {
          local_c78 = (void *)0x0;
          uStack_c70 = 0;
        }
        if (plVar7[7] != 0) {
          FUN_1400020a8();
        }
        plVar7[7] = (longlong)local_c78;
        local_c78 = (void *)0x0;
        *(int *)(plVar7 + 8) = (int)uStack_c70;
        *(undefined4 *)((longlong)plVar7 + 0x44) = uStack_c70._4_4_;
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
        }
        iVar4 = *(int *)(param_1 + 0x2b8);
        *(uint *)(param_1 + 0x2b8) = iVar4 + 1U;
        if (*(uint *)(param_1 + 700) < iVar4 + 1U) {
          FUN_149404df6((longlong *)(param_1 + 0x2b0),iVar4);
        }
        lVar10 = *(longlong *)(param_1 + 0x2b0);
        *(longlong **)(lVar10 + (longlong)iVar4 * 0x10) = plVar7 + 2;
        *(longlong **)(lVar10 + 8 + (longlong)iVar4 * 0x10) = plVar7;
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar7 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
        plVar11 = (longlong *)((longlong)plVar11 + 1);
        lVar12 = lVar12 + 0x10;
      } while (local_1bc8 != plVar11);
    }
    FUN_140a53a96(local_308);
    FUN_1407679b0(local_4c0);
    FUN_145aafb3e(local_580);
    local_540 = 0;
    local_53c = 1;
    local_538 = 0;
    local_534 = 1;
    local_c78 = (void *)0x0;
    uStack_c70 = 0x4100000000000000;
    local_c68 = 1;
    local_c60 = 0;
    uStack_c58 = 0;
    local_558 = 1;
    local_568 = 0;
    uStack_564 = 0;
    uStack_560 = 0;
    uStack_55c = 0x41000000;
    FUN_144a450dc(local_550,&local_c60);
    FUN_1449db362(&local_c60);
    local_1990 = 0x3f800000;
    local_198c = 1;
    local_1988 = 0;
    uStack_1980 = 0;
    local_1bd0 = (longlong *)FUN_140767d84(local_580);
    FUN_140a562d0(local_8b0);
    FUN_1493ef55e(&local_c78);
    plVar11 = local_a40;
    local_a58 = 0;
    uStack_a50 = 0;
    local_a48 = 0;
    if (local_a40 != (longlong *)0x0) {
      local_a40 = (longlong *)0x0;
      LOCK();
      plVar7 = plVar11 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
    local_11d0 = FUN_1493ef7c2;
    local_11c8 = 0;
    local_a58 = param_1 + 0x2b0;
    FUN_149413e5e(&local_1948,param_1,&local_11d0);
    FUN_144a450dc(local_ac8,&local_1948);
    FUN_1449db362(&local_1948);
    FUN_147da315a(local_e88);
    FUN_147da3edc(&local_11d0);
    local_1028 = DAT_14cc15478;
    local_19f8 = 0x3f000000;
    local_19f4 = 1;
    local_19f0 = 0;
    uStack_19e8 = 0;
    local_fa8 = 0x3f000000;
    local_fa4 = 1;
    FUN_144a450dc(local_fa0,&local_19f0);
    FUN_1449db362(&local_19f0);
    local_1948 = L"SInterchangeGenericAssetMaterialConflictWidget_ImportName";
    uStack_1940._0_4_ = 0x39;
    FUN_1446e940c(local_1a34,&local_1948);
    local_1948 = L"GenericAssetPipeline";
    uStack_1940._0_4_ = 0x14;
    FUN_1446e940c(local_1a38,&local_1948);
    FUN_140208bae(local_1a30,local_1a38,local_1a34,L"Import");
    FUN_14023423e(local_1a20,local_1a30);
    local_1a10 = 1;
    local_1a08 = 0;
    uStack_1a00 = 0;
    uVar8 = FUN_147da329c(&local_11d0,local_1a20);
    uVar8 = FUN_147da3234(local_e88,uVar8);
    FUN_147da3edc(local_1518);
    local_1370 = DAT_14cc15480;
    local_1a50 = 0x3f000000;
    local_1a4c = 1;
    local_1a48 = 0;
    uStack_1a40 = 0;
    local_12f0 = 0x3f000000;
    local_12ec = 1;
    FUN_144a450dc(auStack_12e8,&local_1a48);
    FUN_1449db362(&local_1a48);
    local_1948 = L"SInterchangeGenericAssetMaterialConflictWidget_AssetName";
    uStack_1940._0_4_ = 0x38;
    FUN_1446e940c(local_1a8c,&local_1948);
    local_1948 = L"GenericAssetPipeline";
    uStack_1940 = CONCAT44(uStack_1940._4_4_,0x14);
    FUN_1446e940c(local_1a90,&local_1948);
    FUN_140208bae(local_1a88,local_1a90,local_1a8c,L"Asset");
    FUN_14023423e(local_1a78,local_1a88);
    local_1a68 = 1;
    local_1a60 = 0;
    uStack_1a58 = 0;
    uVar9 = FUN_147da329c(local_1518,local_1a78);
    uVar8 = FUN_147da3234(uVar8,uVar9);
    local_1bd8 = &local_1aa9;
    FUN_147da4074(local_1aa8,"SHeaderRow",
                  ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                  ,0x6dd);
    FUN_147da32f2(local_1aa8,&local_19e0,uVar8);
    local_19d0 = local_19e0;
    local_19c8 = local_19d8;
    if (local_19d8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_19d8 + 1) = (int)local_19d8[1] + 1;
      UNLOCK();
    }
    FUN_1493ef90a(&local_c78,&local_19d0);
    FUN_149404e7c(&local_1ac8,&local_1ac9);
    if (local_1ac0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1ac0 + 1) = (int)local_1ac0[1] + 1;
      UNLOCK();
    }
    plVar11 = *(longlong **)(param_1 + 0x2c8);
    *(undefined8 *)(param_1 + 0x2c0) = local_1ac8;
    *(longlong **)(param_1 + 0x2c8) = local_1ac0;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar11 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
    FUN_1493ef990(&local_1ac8,&local_19c0,&local_c78);
    plVar7 = local_700;
    plVar11 = local_19b8;
    if (local_19b8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_19b8 + 1) = (int)local_19b8[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_19b8 + 1) = (int)local_19b8[1] + 1;
      UNLOCK();
    }
    local_708 = local_19c0;
    local_700 = local_19b8;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar7 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    local_1bc8 = plVar11;
    local_1bd8 = &local_1ae9;
    FUN_140a55c32(local_1ae8,"SBorder",
                  ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                  ,0x6d6);
    FUN_140a530e4(local_1ae8,&local_19b0,local_8b0);
    local_19a0 = local_19b0;
    local_1998 = local_19a8;
    if (local_19a8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_19a8 + 1) = (int)local_19a8[1] + 1;
      UNLOCK();
    }
    uVar8 = FUN_145aaf878(local_1bd0,&local_19a0);
    uVar8 = FUN_145aaf822(local_4c0,uVar8);
    FUN_145aafb3e(local_15d8);
    lVar12 = FUN_145aaf900(local_15d8);
    *(undefined4 *)(lVar12 + 0x40) = 3;
    *(undefined1 *)(lVar12 + 0x44) = 1;
    *(undefined4 *)(lVar12 + 0x48) = 3;
    *(undefined1 *)(lVar12 + 0x4c) = 1;
    local_1948 = (wchar_t *)0x4000000040000000;
    uStack_1940 = 0x4000000040000000;
    local_1938 = 1;
    local_1930 = 0;
    uStack_1928 = 0;
    *(undefined1 *)(lVar12 + 0x28) = 1;
    *(undefined4 *)(lVar12 + 0x18) = 0x40000000;
    *(undefined4 *)(lVar12 + 0x1c) = 0x40000000;
    *(undefined4 *)(lVar12 + 0x20) = 0x40000000;
    *(undefined4 *)(lVar12 + 0x24) = 0x40000000;
    FUN_144a450dc(lVar12 + 0x30,&local_1930);
    FUN_1449db362(&local_1930);
    FUN_145ab3d24(&local_1948);
    local_1780 = 2;
    local_1b68 = L"SInterchangeGenericAssetMaterialConflictWidget_Done";
    local_1b60 = 0x33;
    FUN_1446e940c(local_1b4c,&local_1b68);
    local_1b68 = L"SInterchangeGenericAssetMaterialConflictWidget";
    local_1b60 = 0x2e;
    FUN_1446e940c(local_1b50,&local_1b68);
    FUN_140208bae(local_1b48,local_1b50,local_1b4c,L"Done");
    FUN_14023423e(local_1b38,local_1b48);
    local_1b28 = 1;
    local_1b20 = 0;
    uStack_1b18 = 0;
    lVar10 = FUN_1469d324e(&local_1948,local_1b38);
    local_1b88 = FUN_1493efa04;
    local_1b80 = 0;
    FUN_149416520(&local_1b68,param_1);
    FUN_144a450dc(lVar10 + 0x220,&local_1b68);
    FUN_1449db362(&local_1b68);
    local_1bd8 = &local_1b69;
    FUN_145ab3730(&local_1b68,"SButton",
                  ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                  ,0x6ef);
    FUN_145ab34ca(&local_1b68,&local_1b10,lVar10);
    local_1b00 = local_1b10;
    local_1af8 = local_1b08;
    if (local_1b08 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1b08 + 1) = (int)local_1b08[1] + 1;
      UNLOCK();
    }
    uVar9 = FUN_145aaf878(lVar12,&local_1b00);
    uVar8 = FUN_145aaf822(uVar8,uVar9);
    local_1bd8 = &local_1b89;
    FUN_14076837c(&local_1b88,"SVerticalBox",
                  ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                  ,0x6cf);
    FUN_14076784c(&local_1b88,&local_1978,uVar8);
    plVar3 = local_128;
    plVar7 = local_1970;
    plVar11 = local_1bc8;
    if (local_1970 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1970 + 1) = (int)local_1970[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_1970 + 1) = (int)local_1970[1] + 1;
      UNLOCK();
    }
    local_130 = local_1978;
    local_128 = local_1970;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar3 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
    local_1bd8 = &local_1ba9;
    FUN_140a53d66(local_1ba8,&DAT_149efe19f,
                  ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                  ,0x6cd);
    FUN_140a50bf4(local_1ba8,&local_1968,local_308);
    local_1958 = local_1968;
    local_1950 = local_1960;
    if (local_1960 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1960 + 1) = (int)local_1960[1] + 1;
      UNLOCK();
    }
    FUN_140a58896(param_1 + 0x1e0,&local_1958);
    plVar3 = local_1950;
    if (local_1950 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_1950 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_1950)(local_1950);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (local_1960 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_1960 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_1960)(local_1960);
        LOCK();
        piVar1 = (int *)((longlong)local_1960 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_1960 + 0x10))(local_1960);
        }
      }
    }
    if (local_1ba0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_1ba0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_1ba0)(local_1ba0);
        LOCK();
        piVar1 = (int *)((longlong)local_1ba0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_1ba0 + 0x10))(local_1ba0);
        }
      }
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar7 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    if (local_1970 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_1970 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_1970)(local_1970);
        LOCK();
        piVar1 = (int *)((longlong)local_1970 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_1970 + 0x10))(local_1970);
        }
      }
    }
    plVar7 = (longlong *)CONCAT44(uStack_1b7c,local_1b80);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar7 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    plVar7 = local_1af8;
    if (local_1af8 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_1af8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_1af8)(local_1af8);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    if (local_1b08 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_1b08 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_1b08)(local_1b08);
        LOCK();
        piVar1 = (int *)((longlong)local_1b08 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_1b08 + 0x10))(local_1b08);
        }
      }
    }
    plVar7 = (longlong *)CONCAT44(uStack_1b5c,local_1b60);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar7 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    if (local_1b48[0] != (longlong *)0x0) {
      (**(code **)(*local_1b48[0] + 0x10))();
    }
    FUN_145ab35f4(&local_1948);
    FUN_140767f30(local_15d8);
    plVar7 = local_1998;
    if (local_1998 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_1998 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_1998)(local_1998);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    if (local_19a8 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_19a8 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_19a8)(local_19a8);
        LOCK();
        piVar1 = (int *)((longlong)local_19a8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_19a8 + 0x10))(local_19a8);
        }
      }
    }
    if (local_1ae0 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_1ae0 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_1ae0)(local_1ae0);
        LOCK();
        piVar1 = (int *)((longlong)local_1ae0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_1ae0 + 0x10))(local_1ae0);
        }
      }
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar11 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
    if (local_19b8 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_19b8 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_19b8)(local_19b8);
        LOCK();
        piVar1 = (int *)((longlong)local_19b8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_19b8 + 0x10))(local_19b8);
        }
      }
    }
    if (local_1ac0 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_1ac0 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_1ac0)(local_1ac0);
        LOCK();
        piVar1 = (int *)((longlong)local_1ac0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_1ac0 + 0x10))(local_1ac0);
        }
      }
    }
    if (local_19d8 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_19d8 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_19d8)(local_19d8);
        LOCK();
        piVar1 = (int *)((longlong)local_19d8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_19d8 + 0x10))(local_19d8);
        }
      }
    }
    if (local_1aa0 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_1aa0 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_1aa0)(local_1aa0);
        LOCK();
        piVar1 = (int *)((longlong)local_1aa0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_1aa0 + 0x10))(local_1aa0);
        }
      }
    }
    if (local_1a88[0] != (longlong *)0x0) {
      (**(code **)(*local_1a88[0] + 0x10))();
    }
    FUN_147da3366(local_1518);
    if (local_1a30[0] != (longlong *)0x0) {
      (**(code **)(*local_1a30[0] + 0x10))();
    }
    FUN_147da3366(&local_11d0);
    FUN_147da34b4(local_e88);
    FUN_1493efa5a(&local_c78);
    FUN_140a59028(local_8b0);
    FUN_140767f30(local_580);
    FUN_14149255e(local_4c0);
    FUN_140a5660c(local_308);
  }
  if ((local_60 ^ (ulonglong)auStack_1bf8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ef55e FUN_1493ef55e body=611 status=ok
// SIG undefined FUN_1493ef55e(void)

longlong FUN_1493ef55e(longlong param_1)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5071c();
  lVar3 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar3 == 0) {
    lVar3 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_30,"ListView",1);
  uVar5 = 0;
  uVar4 = FUN_1458178ee(lVar3,local_30,0,0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar4;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1ec) = 0;
  *(undefined8 *)(param_1 + 500) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x23d) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 600) = 6;
  *(undefined1 *)(param_1 + 0x25c) = 1;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined4 *)(param_1 + 0x2d0) = 3;
  *(undefined1 *)(param_1 + 0x2d4) = 1;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined1 *)(param_1 + 0x2f8) = 1;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined4 *)(param_1 + 0x310) = 1;
  *(undefined1 *)(param_1 + 0x315) = 0;
  *(undefined1 *)(param_1 + 800) = 0;
  *(undefined2 *)(param_1 + 0x328) = 0x19;
  *(undefined8 *)(param_1 + 0x330) = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined2 *)(param_1 + 0x340) = 0;
  lVar3 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar3 == 0) {
    lVar3 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_38,"ScrollBar",1);
  uVar4 = FUN_145817968(lVar3,local_38,0,0);
  *(undefined8 *)(param_1 + 0x348) = uVar4;
  *(undefined2 *)(param_1 + 0x350) = 0;
  lVar3 = DAT_14c96b2f0;
  cVar1 = FUN_144a8728e();
  if (cVar1 == '\0') {
    bVar2 = FUN_144a61b4f();
    uVar5 = (ulonglong)(bVar2 ^ 1);
  }
  *(undefined4 *)(param_1 + 0x354) = *(undefined4 *)(lVar3 + uVar5 * 4);
  *(undefined4 *)(param_1 + 0x358) = 0x3f000000;
  *(undefined8 *)(param_1 + 0x35c) = 0;
  *(undefined8 *)(param_1 + 0x364) = 0;
  *(undefined2 *)(param_1 + 0x36c) = 0x101;
  *(undefined1 *)(param_1 + 0x36e) = 0;
  *(undefined2 *)(param_1 + 0x370) = 0x101;
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(undefined8 *)(param_1 + 0x380) = 0;
  *(undefined1 *)(param_1 + 0x388) = 0;
  *(undefined8 *)(param_1 + 0x390) = 0;
  *(undefined8 *)(param_1 + 0x398) = 0;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  *(undefined8 *)(param_1 + 0x3ac) = 0;
  *(undefined8 *)(param_1 + 0x3b4) = 0;
  *(undefined1 *)(param_1 + 0xa2) = 1;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ef7c2 FUN_1493ef7c2 body=327 status=ok
// SIG undefined FUN_1493ef7c2(void)

undefined8 *
FUN_1493ef7c2(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_248 [32];
  undefined8 local_228;
  undefined1 local_220 [8];
  longlong *local_218;
  undefined8 local_208;
  longlong local_200;
  undefined8 local_1f8;
  longlong *local_1f0;
  undefined1 local_1e8 [440];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_248;
  FUN_1493efbf8(local_1e8);
  local_208 = *param_3;
  local_200 = param_3[1];
  if (local_200 != 0) {
    LOCK();
    *(int *)(local_200 + 8) = *(int *)(local_200 + 8) + 1;
    UNLOCK();
  }
  FUN_1493efc18(local_1e8,&local_208);
  local_228 = param_4;
  FUN_149416a08(local_220);
  FUN_1493efc9e(local_220,&local_1f8,local_1e8);
  *param_2 = local_1f8;
  param_2[1] = local_1f0;
  if (local_1f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1f0 + 1) = (int)local_1f0[1] + 1;
    UNLOCK();
    if (local_1f0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_1f0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_1f0)(local_1f0);
        LOCK();
        piVar1 = (int *)((longlong)local_1f0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_1f0 + 0x10))(local_1f0);
        }
      }
    }
  }
  if (local_218 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_218 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_218)(local_218);
      LOCK();
      piVar1 = (int *)((longlong)local_218 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_218 + 0x10))(local_218);
      }
    }
  }
  FUN_1493efd1e(local_1e8);
  plVar3 = (longlong *)param_3[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ef90a FUN_1493ef90a body=133 status=ok
// SIG undefined FUN_1493ef90a(void)

longlong FUN_1493ef90a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x2f0);
  *(undefined8 *)(param_1 + 0x2e8) = uVar3;
  *(longlong *)(param_1 + 0x2f0) = lVar4;
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
  plVar5 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 1493ef990 FUN_1493ef990 body=115 status=ok
// SIG undefined FUN_1493ef990(void)

longlong * FUN_1493ef990(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_149414450(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 1493efa04 FUN_1493efa04 body=86 status=ok
// SIG undefined FUN_1493efa04(void)

undefined1 * FUN_1493efa04(longlong param_1,undefined1 *param_2)

{
  if (*(longlong *)(param_1 + 0x268) != 0) {
    FUN_14698158e();
  }
  *param_2 = 1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 1493efa5a FUN_1493efa5a body=414 status=ok
// SIG undefined FUN_1493efa5a(void)

void FUN_1493efa5a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1449db362(param_1 + 0x3b0);
  FUN_1449db362(param_1 + 0x3a0);
  FUN_1449db362(param_1 + 0x390);
  FUN_1449db362(param_1 + 0x378);
  FUN_1449db362(param_1 + 0x330);
  if (*(char *)(param_1 + 800) == '\x01') {
    *(undefined1 *)(param_1 + 800) = 0;
  }
  plVar3 = *(longlong **)(param_1 + 0x308);
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
  plVar3 = *(longlong **)(param_1 + 0x2f0);
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
  FUN_1449db362(param_1 + 0x2d8);
  FUN_1449db362(param_1 + 0x2c0);
  FUN_1449db362(param_1 + 0x2b0);
  FUN_1449db362(param_1 + 0x2a0);
  FUN_1449db362(param_1 + 0x290);
  FUN_1449db362(param_1 + 0x280);
  FUN_1449db362(param_1 + 0x270);
  FUN_1449db362(param_1 + 0x260);
  FUN_1449db362(param_1 + 0x248);
  plVar3 = *(longlong **)(param_1 + 0x238);
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
  FUN_1449db362(param_1 + 0x210);
  FUN_1449db362(param_1 + 0x200);
  FUN_1449db362(param_1 + 0x1f0);
  FUN_1449db362(param_1 + 0x1e0);
  FUN_1449db362(param_1 + 0x1d0);
  FUN_1449db362(param_1 + 0x1c0);
  FUN_1449db362(param_1 + 0x1b0);
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 1493efbf8 FUN_1493efbf8 body=32 status=ok
// SIG undefined FUN_1493efbf8(void)

longlong FUN_1493efbf8(longlong param_1)

{
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  return param_1;
}



// FUNCTION 1493efc18 FUN_1493efc18 body=133 status=ok
// SIG undefined FUN_1493efc18(void)

longlong FUN_1493efc18(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar3;
  *(longlong *)(param_1 + 0x1b0) = lVar4;
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
  plVar5 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 1493efc9e FUN_1493efc9e body=128 status=ok
// SIG undefined FUN_1493efc9e(void)

longlong * FUN_1493efc9e(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1 + 8,param_3);
  FUN_14941773e(*param_1,param_3,*(undefined8 *)param_1[2]);
  lVar1 = *param_1;
  bVar4 = *(byte *)(lVar1 + 0x38);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*(longlong *)(lVar1 + 8) + 0x220))(lVar1 + 8);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(lVar1 + 0x38);
  }
  *(byte *)(lVar1 + 0x38) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x39) = *(byte *)(*param_1 + 0x39) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 1493efd1e FUN_1493efd1e body=64 status=ok
// SIG undefined FUN_1493efd1e(void)

void FUN_1493efd1e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x1b0);
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
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 1493efd5e FUN_1493efd5e body=162 status=ok
// SIG undefined FUN_1493efd5e(void)

undefined1 *
FUN_1493efd5e(undefined8 param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar3 = *(longlong *)(param_4 + 0x20);
  plVar4 = *(longlong **)(param_4 + 0x30);
  lVar5 = DAT_14c964dd0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    lVar5 = DAT_14c964dd0;
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
  if (lVar3 == lVar5) {
    FUN_1493efa04(param_1,param_2);
  }
  else {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  return param_2;
}



// FUNCTION 1493efe00 FUN_1493efe00 body=3572 status=ok
// SIG undefined FUN_1493efe00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1493efe00(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_17d8 [32];
  undefined1 *local_17b8;
  undefined8 local_17a8;
  longlong *local_17a0;
  undefined1 local_1791;
  undefined1 local_1790 [8];
  longlong *local_1788;
  undefined1 local_1771;
  undefined1 local_1770 [8];
  longlong *local_1768;
  undefined1 local_1751;
  code *local_1750;
  undefined4 local_1748;
  undefined4 uStack_1744;
  undefined1 local_1731;
  wchar_t *local_1730;
  undefined4 local_1728;
  undefined4 uStack_1724;
  undefined1 local_1718 [4];
  undefined1 local_1714 [4];
  longlong *local_1710 [2];
  undefined1 local_1700 [16];
  undefined1 local_16f0;
  undefined8 local_16e8;
  undefined8 uStack_16e0;
  undefined8 local_16d8;
  longlong *local_16d0;
  undefined8 local_16c8;
  longlong *local_16c0;
  undefined8 local_16b8;
  longlong *local_16b0;
  undefined8 local_16a8;
  longlong *local_16a0;
  undefined1 local_1691;
  undefined1 local_1690 [8];
  longlong *local_1688;
  undefined1 local_1671;
  undefined1 local_1670 [8];
  longlong *local_1668;
  undefined1 local_1651;
  undefined1 local_1650 [8];
  longlong *local_1648;
  undefined8 local_1638;
  longlong *local_1630;
  undefined4 local_1628;
  undefined1 local_1624;
  undefined8 local_1620;
  undefined8 uStack_1618;
  undefined8 local_1610;
  longlong *local_1608;
  undefined4 local_1600;
  undefined1 local_15fc;
  undefined8 local_15f8;
  undefined8 uStack_15f0;
  undefined8 local_15e8;
  longlong *local_15e0;
  undefined8 local_15d8;
  longlong *local_15d0;
  undefined4 local_15c8;
  undefined1 local_15c4;
  undefined8 local_15c0;
  undefined8 uStack_15b8;
  undefined8 local_15b0;
  longlong *local_15a8;
  undefined8 local_15a0;
  undefined8 local_1598;
  undefined1 local_1590;
  undefined8 local_1588;
  undefined8 uStack_1580;
  undefined8 local_1578;
  longlong *local_1570;
  undefined8 local_1568;
  longlong *local_1560;
  undefined4 local_1558;
  undefined1 local_1554;
  undefined8 local_1550;
  undefined8 uStack_1548;
  undefined8 local_1540;
  longlong *local_1538;
  undefined8 local_1530;
  longlong *local_1528;
  undefined8 local_1520;
  longlong *local_1518;
  undefined8 local_1510;
  longlong *local_1508;
  undefined8 local_1500;
  longlong *local_14f8;
  undefined1 local_14f0 [48];
  undefined4 local_14c0;
  undefined1 local_14bc;
  undefined1 local_14b8 [64];
  undefined1 local_1478 [48];
  undefined4 local_1448;
  undefined1 local_1444;
  undefined1 local_1440 [64];
  undefined8 local_1400;
  undefined8 uStack_13f8;
  undefined1 local_13f0;
  undefined8 local_13e8;
  undefined8 uStack_13e0;
  undefined4 local_1238;
  undefined1 local_1090 [192];
  undefined1 local_fd0 [440];
  undefined1 local_e18 [192];
  undefined1 local_d58 [448];
  undefined8 local_b98;
  undefined1 local_b38 [192];
  undefined1 local_a78 [440];
  undefined1 local_8c0 [424];
  undefined8 local_718;
  longlong *local_710;
  undefined8 local_698;
  undefined1 local_690;
  undefined1 local_688 [248];
  undefined1 local_590 [192];
  undefined1 local_4d0 [440];
  undefined1 local_318 [472];
  undefined8 local_140;
  longlong *local_138;
  ulonglong local_70;
  undefined8 uStack_48;
  
  uStack_48 = 0x1493efe16;
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_17d8;
  *(undefined2 *)(param_1 + 0x2a0) = 0x101;
  FUN_146aae098(param_1 + 0x278,param_2 + 0x1a8);
  FUN_1493f0bf6(param_1 + 0x288,param_2 + 0x1b8);
  *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)(param_2 + 0x1c8);
  FUN_1493f0c56(param_1,&local_1500);
  FUN_1493f2b60(param_1,&local_1510);
  FUN_140a53a96(local_318);
  FUN_1407679b0(local_4d0);
  FUN_145aafb3e(local_590);
  local_1558 = 0x3f800000;
  local_1554 = 1;
  local_1550 = 0;
  uStack_1548 = 0;
  uVar4 = FUN_140767d84(local_590);
  FUN_140a562d0(local_8c0);
  FUN_1446ddc76(&local_15a0,"ToolPanel.DarkGroupBorder",1);
  plVar5 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar5 == (longlong *)0x0) {
    plVar5 = DAT_14c96b350;
  }
  local_1598 = (**(code **)(*plVar5 + 0x50))(plVar5,local_15a0,0,0);
  local_1590 = 1;
  local_1588 = 0;
  uStack_1580 = 0;
  local_690 = 1;
  local_698 = local_1598;
  FUN_144a450dc(local_688,&local_1588);
  FUN_1449db362(&local_1588);
  FUN_1407679b0(local_a78);
  FUN_145aafb3e(local_b38);
  local_15c8 = 0x3f800000;
  local_15c4 = 1;
  local_15c0 = 0;
  uStack_15b8 = 0;
  lVar6 = FUN_140767d84(local_b38);
  local_1400 = 0x4000000040000000;
  uStack_13f8 = 0x4000000040000000;
  local_13f0 = 1;
  local_13e8 = 0;
  uStack_13e0 = 0;
  *(undefined1 *)(lVar6 + 0x28) = 1;
  *(undefined4 *)(lVar6 + 0x18) = 0x40000000;
  *(undefined4 *)(lVar6 + 0x1c) = 0x40000000;
  *(undefined4 *)(lVar6 + 0x20) = 0x40000000;
  *(undefined4 *)(lVar6 + 0x24) = 0x40000000;
  FUN_144a450dc(lVar6 + 0x30,&local_13e8);
  FUN_1449db362(&local_13e8);
  FUN_1469c18d8(local_d58);
  local_b98 = 0x200000001;
  FUN_146a9b9c2(local_1478);
  local_1600 = 0x3f4ccccd;
  local_15fc = 1;
  local_15f8 = 0;
  uStack_15f0 = 0;
  local_1448 = 0x3f4ccccd;
  local_1444 = 1;
  FUN_144a450dc(local_1440,&local_15f8);
  FUN_1449db362(&local_15f8);
  local_1610 = local_1500;
  local_1608 = local_14f8;
  if (local_14f8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_14f8 + 1) = (int)local_14f8[1] + 1;
    UNLOCK();
  }
  uVar7 = FUN_1469c8348(local_1478,&local_1610);
  FUN_1493f4418(local_d58,uVar7);
  FUN_146a9b9c2(local_14f0);
  local_1628 = 0x3e4ccccd;
  local_1624 = 1;
  local_1620 = 0;
  uStack_1618 = 0;
  local_14c0 = 0x3e4ccccd;
  local_14bc = 1;
  FUN_144a450dc(local_14b8,&local_1620);
  FUN_1449db362(&local_1620);
  local_1638 = local_1510;
  local_1630 = local_1508;
  if (local_1508 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1508 + 1) = (int)local_1508[1] + 1;
    UNLOCK();
  }
  uVar7 = FUN_1469c8348(local_14f0,&local_1638);
  FUN_1493f4418(local_d58,uVar7);
  local_17b8 = &local_1651;
  FUN_1469edd7a(local_1650,"SSplitter",
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x72e);
  FUN_1469c19be(local_1650,&local_15e8,local_d58);
  local_15d8 = local_15e8;
  local_15d0 = local_15e0;
  if (local_15e0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_15e0 + 1) = (int)local_15e0[1] + 1;
    UNLOCK();
  }
  uVar7 = FUN_145aaf878(lVar6,&local_15d8);
  uVar7 = FUN_145aaf822(local_a78,uVar7);
  local_17b8 = &local_1671;
  FUN_14076837c(local_1670,"SVerticalBox",
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x729);
  FUN_14076784c(local_1670,&local_15b0,uVar7);
  plVar3 = local_710;
  plVar5 = local_15a8;
  if (local_15a8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_15a8 + 1) = (int)local_15a8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_15a8 + 1) = (int)local_15a8[1] + 1;
    UNLOCK();
  }
  local_718 = local_15b0;
  local_710 = local_15a8;
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
  local_17a0 = plVar5;
  local_17b8 = &local_1691;
  FUN_140a55c32(local_1690,"SBorder",
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x726);
  FUN_140a530e4(local_1690,&local_1578,local_8c0);
  local_1568 = local_1578;
  local_1560 = local_1570;
  if (local_1570 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1570 + 1) = (int)local_1570[1] + 1;
    UNLOCK();
  }
  uVar4 = FUN_145aaf878(uVar4,&local_1568);
  local_17a8 = FUN_145aaf822(local_4d0,uVar4);
  FUN_145aafb3e(local_e18);
  lVar6 = FUN_145aaf900(local_e18);
  *(undefined4 *)(lVar6 + 0x40) = 3;
  *(undefined1 *)(lVar6 + 0x44) = 1;
  local_1400 = 0x4000000040000000;
  uStack_13f8 = 0x4000000040000000;
  local_13f0 = 1;
  local_13e8 = 0;
  uStack_13e0 = 0;
  *(undefined1 *)(lVar6 + 0x28) = 1;
  *(undefined4 *)(lVar6 + 0x18) = 0x40000000;
  *(undefined4 *)(lVar6 + 0x1c) = 0x40000000;
  *(undefined4 *)(lVar6 + 0x20) = 0x40000000;
  *(undefined4 *)(lVar6 + 0x24) = 0x40000000;
  FUN_144a450dc(lVar6 + 0x30,&local_13e8);
  FUN_1449db362(&local_13e8);
  FUN_140a5296a(local_fd0);
  FUN_140a50426(local_1090);
  lVar8 = FUN_140a52578(local_1090);
  local_1400 = 0x40000000;
  uStack_13f8 = 0x40000000;
  local_13f0 = 1;
  local_13e8 = 0;
  uStack_13e0 = 0;
  *(undefined1 *)(lVar8 + 0x28) = 1;
  *(undefined4 *)(lVar8 + 0x18) = 0x40000000;
  *(undefined4 *)(lVar8 + 0x1c) = 0;
  *(undefined4 *)(lVar8 + 0x20) = 0x40000000;
  *(undefined4 *)(lVar8 + 0x24) = 0;
  FUN_144a450dc(lVar8 + 0x30,&local_13e8);
  FUN_1449db362(&local_13e8);
  FUN_145ab3d24(&local_1400);
  local_1238 = 2;
  local_1730 = L"ConstructDoneButton";
  local_1728 = 0x13;
  FUN_1446e940c(local_1714,&local_1730);
  local_1730 = L"SInterchangeGenericAssetSkeletonConflictWidget";
  local_1728 = 0x2e;
  FUN_1446e940c(local_1718,&local_1730);
  FUN_140208bae(local_1710,local_1718,local_1714,L"Done");
  FUN_14023423e(local_1700,local_1710);
  local_16f0 = 1;
  local_16e8 = 0;
  uStack_16e0 = 0;
  lVar9 = FUN_1469d324e(&local_1400,local_1700);
  local_1750 = FUN_1493f446a;
  local_1748 = 0;
  FUN_149418d1a(&local_1730,param_1);
  FUN_144a450dc(lVar9 + 0x220,&local_1730);
  FUN_1449db362(&local_1730);
  local_17b8 = &local_1731;
  FUN_145ab3730(&local_1730,"SButton",
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x74a);
  FUN_145ab34ca(&local_1730,&local_16d8,lVar9);
  local_16c8 = local_16d8;
  local_16c0 = local_16d0;
  if (local_16d0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_16d0 + 1) = (int)local_16d0[1] + 1;
    UNLOCK();
  }
  uVar4 = FUN_140a4fe8e(lVar8,&local_16c8);
  uVar4 = FUN_140a52392(local_fd0,uVar4);
  local_17b8 = &local_1751;
  FUN_140a541dc(&local_1750,"SHorizontalBox",
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x745);
  FUN_140a50ec6(&local_1750,&local_16b8,uVar4);
  local_16a8 = local_16b8;
  local_16a0 = local_16b0;
  if (local_16b0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_16b0 + 1) = (int)local_16b0[1] + 1;
    UNLOCK();
  }
  uVar4 = FUN_145aaf878(lVar6,&local_16a8);
  uVar4 = FUN_145aaf822(local_17a8,uVar4);
  local_17b8 = &local_1771;
  FUN_14076837c(local_1770,"SVerticalBox",
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x722);
  FUN_14076784c(local_1770,&local_1540,uVar4);
  plVar3 = local_138;
  plVar5 = local_1538;
  if (local_1538 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1538 + 1) = (int)local_1538[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_1538 + 1) = (int)local_1538[1] + 1;
    UNLOCK();
  }
  local_140 = local_1540;
  local_138 = local_1538;
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
  local_17b8 = &local_1791;
  FUN_140a53d66(local_1790,&DAT_149efe19f,
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x720);
  FUN_140a50bf4(local_1790,&local_1530,local_318);
  local_1520 = local_1530;
  local_1518 = local_1528;
  if (local_1528 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1528 + 1) = (int)local_1528[1] + 1;
    UNLOCK();
  }
  FUN_140a58896(param_1 + 0x1e0,&local_1520);
  plVar3 = local_1518;
  if (local_1518 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1518 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1518)(local_1518);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_17a0;
  if (local_1528 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1528 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1528)(local_1528);
      LOCK();
      piVar2 = (int *)((longlong)local_1528 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1528 + 0x10))(local_1528);
      }
    }
  }
  if (local_1788 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1788 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1788)(local_1788);
      LOCK();
      piVar2 = (int *)((longlong)local_1788 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1788 + 0x10))(local_1788);
      }
    }
  }
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
  if (local_1538 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1538 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_1538)(local_1538);
      LOCK();
      piVar2 = (int *)((longlong)local_1538 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1538 + 0x10))(local_1538);
      }
    }
  }
  if (local_1768 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1768 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_1768)(local_1768);
      LOCK();
      piVar2 = (int *)((longlong)local_1768 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1768 + 0x10))(local_1768);
      }
    }
  }
  plVar5 = local_16a0;
  if (local_16a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_16a0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_16a0)(local_16a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_16b0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_16b0 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_16b0)(local_16b0);
      LOCK();
      piVar2 = (int *)((longlong)local_16b0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_16b0 + 0x10))(local_16b0);
      }
    }
  }
  plVar5 = (longlong *)CONCAT44(uStack_1744,local_1748);
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
  plVar5 = local_16c0;
  if (local_16c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_16c0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_16c0)(local_16c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_16d0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_16d0 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_16d0)(local_16d0);
      LOCK();
      piVar2 = (int *)((longlong)local_16d0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_16d0 + 0x10))(local_16d0);
      }
    }
  }
  plVar5 = (longlong *)CONCAT44(uStack_1724,local_1728);
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
  if (local_1710[0] != (longlong *)0x0) {
    (**(code **)(*local_1710[0] + 0x10))();
  }
  FUN_145ab35f4(&local_1400);
  FUN_140a509a6(local_1090);
  FUN_145ab33da(local_fd0);
  FUN_140767f30(local_e18);
  plVar5 = local_1560;
  if (local_1560 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1560 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1560)(local_1560);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_1570 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1570 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_1570)(local_1570);
      LOCK();
      piVar2 = (int *)((longlong)local_1570 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1570 + 0x10))(local_1570);
      }
    }
  }
  if (local_1688 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1688 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_1688)(local_1688);
      LOCK();
      piVar2 = (int *)((longlong)local_1688 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1688 + 0x10))(local_1688);
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if (local_15a8 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_15a8 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_15a8)(local_15a8);
      LOCK();
      piVar2 = (int *)((longlong)local_15a8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_15a8 + 0x10))(local_15a8);
      }
    }
  }
  if (local_1668 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1668 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_1668)(local_1668);
      LOCK();
      piVar2 = (int *)((longlong)local_1668 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1668 + 0x10))(local_1668);
      }
    }
  }
  plVar5 = local_15d0;
  if (local_15d0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_15d0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_15d0)(local_15d0);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_15e0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_15e0 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_15e0)(local_15e0);
      LOCK();
      piVar2 = (int *)((longlong)local_15e0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_15e0 + 0x10))(local_15e0);
      }
    }
  }
  if (local_1648 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1648 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_1648)(local_1648);
      LOCK();
      piVar2 = (int *)((longlong)local_1648 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1648 + 0x10))(local_1648);
      }
    }
  }
  plVar5 = local_1630;
  if (local_1630 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_1630 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_1630)(local_1630);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  FUN_1469e50f4(local_14f0);
  plVar5 = local_1608;
  if (local_1608 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_1608 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_1608)(local_1608);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  FUN_1469e50f4(local_1478);
  FUN_1469c1b96(local_d58);
  FUN_140767f30(local_b38);
  FUN_14149255e(local_a78);
  FUN_140a59028(local_8c0);
  FUN_140767f30(local_590);
  FUN_14149255e(local_4d0);
  FUN_140a5660c(local_318);
  if (local_1508 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1508 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_1508)(local_1508);
      LOCK();
      piVar2 = (int *)((longlong)local_1508 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1508 + 0x10))(local_1508);
      }
    }
  }
  if (local_14f8 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_14f8 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_14f8)(local_14f8);
      LOCK();
      piVar2 = (int *)((longlong)local_14f8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_14f8 + 0x10))(local_14f8);
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_17d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493f0bf6 FUN_1493f0bf6 body=95 status=ok
// SIG undefined FUN_1493f0bf6(void)

undefined8 * FUN_1493f0bf6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_149403159(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1494031a2(param_1,iVar1);
      FUN_149403204(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1493f0c56 FUN_1493f0c56 body=7945 status=ok
// SIG undefined FUN_1493f0c56(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1493f0c56(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  undefined8 *puVar20;
  undefined1 auStack_3548 [32];
  undefined1 *local_3528;
  undefined8 local_3518;
  undefined8 *local_3510;
  longlong local_3508;
  longlong *local_3500;
  undefined8 *local_34f8;
  longlong *local_34f0;
  undefined1 local_34e1;
  undefined1 local_34e0 [8];
  longlong *local_34d8;
  undefined1 local_34c1;
  undefined1 local_34c0 [8];
  longlong *local_34b8;
  undefined1 local_34a1;
  undefined1 local_34a0 [8];
  longlong *local_3498;
  undefined1 local_3481;
  undefined1 local_3480 [8];
  longlong *local_3478;
  undefined1 local_3461;
  undefined1 local_3460 [8];
  longlong *local_3458;
  undefined1 local_3441;
  undefined8 local_3440;
  longlong *local_3438;
  undefined4 local_3430;
  undefined1 local_342c;
  undefined8 local_3428;
  undefined8 uStack_3420;
  undefined1 local_3411;
  undefined1 local_3410 [8];
  longlong *local_3408;
  undefined8 local_33f8;
  longlong *local_33f0;
  undefined8 local_33e8;
  longlong *local_33e0;
  undefined1 local_33d1;
  undefined1 local_33d0 [8];
  longlong *local_33c8;
  undefined1 local_33b1;
  undefined1 local_33b0 [8];
  longlong *local_33a8;
  undefined4 local_3398;
  undefined4 uStack_3394;
  undefined4 uStack_3390;
  undefined4 uStack_338c;
  undefined4 local_3388;
  undefined1 local_3384;
  undefined8 local_3380;
  undefined8 uStack_3378;
  longlong *local_3368;
  undefined4 local_3360;
  undefined1 local_3358;
  undefined8 local_3350;
  undefined8 uStack_3348;
  undefined8 local_3340;
  undefined1 local_3338 [56];
  longlong *local_3300;
  undefined1 local_32d8 [96];
  undefined1 local_3278;
  undefined8 local_3270;
  undefined8 uStack_3268;
  undefined8 local_3260;
  longlong *local_3258;
  undefined8 local_3250;
  longlong *local_3248;
  undefined4 local_3240;
  undefined1 local_323c;
  undefined8 local_3238;
  undefined8 uStack_3230;
  undefined1 local_3221;
  undefined1 local_3220 [8];
  longlong *local_3218;
  undefined1 local_3208 [4];
  undefined1 local_3204 [4];
  longlong *local_3200 [2];
  undefined1 local_31f0 [16];
  undefined1 local_31e0;
  undefined8 local_31d8;
  undefined8 uStack_31d0;
  undefined8 local_31c8;
  longlong *local_31c0;
  undefined8 local_31b8;
  longlong *local_31b0;
  undefined8 local_31a8;
  longlong *local_31a0;
  undefined8 local_3198;
  longlong *local_3190;
  undefined8 local_3188;
  longlong *local_3180;
  undefined8 local_3178;
  undefined8 local_3170;
  undefined1 local_3168;
  undefined8 local_3160;
  undefined8 uStack_3158;
  undefined8 local_3150;
  undefined8 uStack_3148;
  undefined1 local_3140;
  undefined8 local_3138;
  undefined8 uStack_3130;
  undefined8 local_3128;
  longlong *local_3120;
  undefined4 local_3114;
  undefined1 local_3110 [16];
  undefined2 local_3100;
  undefined8 local_30f8;
  undefined4 local_30f0;
  undefined8 local_30e8;
  longlong *local_30e0;
  undefined8 local_30d8;
  longlong *local_30d0;
  undefined4 local_30c8;
  undefined1 local_30c4;
  undefined8 local_30c0;
  undefined8 uStack_30b8;
  undefined1 local_30a9;
  undefined1 local_30a8 [8];
  longlong *local_30a0;
  undefined1 local_3089;
  undefined1 local_3088 [8];
  longlong *local_3080;
  undefined1 local_3070 [4];
  undefined1 local_306c [4];
  longlong *local_3068 [2];
  undefined1 local_3058 [16];
  undefined1 local_3048;
  undefined8 local_3040;
  undefined8 uStack_3038;
  undefined8 local_3030;
  undefined1 local_3028 [56];
  longlong *local_2ff0;
  undefined1 local_2fc8 [96];
  undefined1 local_2f68;
  undefined8 local_2f60;
  undefined8 uStack_2f58;
  undefined8 local_2f50;
  longlong *local_2f48;
  undefined8 local_2f40;
  longlong *local_2f38;
  undefined1 local_2f29;
  undefined1 local_2f28 [8];
  longlong *local_2f20;
  undefined1 local_2f09;
  undefined1 local_2f08 [8];
  longlong *local_2f00;
  undefined8 local_2ef0;
  longlong *local_2ee8;
  undefined8 local_2ee0;
  undefined8 local_2ed8;
  longlong *local_2ed0;
  undefined8 local_2ec8;
  longlong *local_2ec0;
  undefined8 local_2eb8;
  longlong *local_2eb0;
  undefined8 local_2ea8;
  longlong *local_2ea0;
  undefined8 local_2e98;
  longlong *local_2e90;
  undefined8 local_2e88;
  undefined8 local_2e80;
  undefined1 local_2e78;
  undefined8 local_2e70;
  undefined8 uStack_2e68;
  undefined8 local_2e60;
  undefined8 uStack_2e58;
  undefined1 local_2e50;
  undefined8 local_2e48;
  undefined8 uStack_2e40;
  undefined8 local_2e38;
  longlong *local_2e30;
  undefined8 local_2e28;
  longlong *local_2e20;
  undefined8 local_2e18;
  longlong local_2e10;
  undefined8 local_2e08;
  longlong *local_2e00;
  undefined4 local_2df8;
  undefined1 local_2df4;
  undefined8 local_2df0;
  undefined8 uStack_2de8;
  longlong *local_2de0;
  undefined4 local_2dd8;
  undefined8 local_2dd0;
  longlong *plStack_2dc8;
  undefined1 local_2dc0;
  undefined8 local_2db8;
  undefined8 uStack_2db0;
  undefined1 local_2da8 [192];
  code *local_2ce8;
  undefined8 uStack_2ce0;
  undefined1 local_2cd8;
  undefined8 local_2cd0;
  undefined8 uStack_2cc8;
  undefined4 local_2b38;
  undefined1 local_2b18 [16];
  undefined1 local_2b08 [192];
  code *local_2a48;
  undefined8 uStack_2a40;
  undefined1 local_2a38;
  undefined8 local_2a30;
  undefined8 uStack_2a28;
  undefined1 local_2870 [96];
  undefined1 local_2810;
  undefined1 local_2808 [560];
  undefined1 local_25d8 [192];
  undefined4 local_2518 [114];
  undefined4 local_2350;
  undefined1 local_21a8 [192];
  undefined1 local_20e8 [440];
  undefined1 local_1f30 [192];
  undefined1 local_1e70 [440];
  undefined1 local_1cb8 [424];
  undefined8 local_1b10;
  longlong *local_1b08;
  undefined4 local_1af8;
  undefined4 uStack_1af4;
  undefined4 uStack_1af0;
  undefined4 uStack_1aec;
  undefined1 local_1ae8;
  undefined1 local_1ae0 [80];
  undefined8 local_1a90;
  undefined1 local_1a88;
  undefined1 local_1a80 [248];
  undefined1 local_1988 [112];
  undefined2 local_1918;
  undefined1 local_1910 [352];
  undefined8 local_17b0;
  longlong *local_17a8;
  undefined1 local_16e0 [192];
  code *local_1620;
  ulonglong uStack_1618;
  undefined1 local_1610;
  undefined8 local_1608;
  undefined8 uStack_1600;
  undefined1 local_1470 [40];
  undefined1 local_1448 [40];
  undefined1 local_1420 [32];
  longlong local_1400;
  undefined8 uStack_13f8;
  undefined8 local_13f0;
  longlong *local_13e8;
  undefined1 local_13e0 [160];
  undefined4 local_1340;
  undefined1 local_133c;
  undefined1 local_1338 [392];
  undefined1 local_11b0 [192];
  undefined1 local_10f0 [568];
  code *local_eb8;
  undefined4 local_eb0;
  undefined4 uStack_eac;
  undefined8 local_d10;
  longlong *local_d08;
  undefined8 local_d00;
  undefined1 *local_cf0;
  undefined1 local_c98 [256];
  undefined1 local_b98;
  undefined1 local_b48 [192];
  undefined1 local_a88 [440];
  undefined1 local_8d0 [192];
  undefined1 local_810 [440];
  undefined1 local_658 [424];
  undefined8 local_4b0;
  longlong *local_4a8;
  undefined4 local_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined1 local_488;
  undefined1 local_480 [80];
  undefined8 local_430;
  undefined1 local_428;
  undefined1 local_420 [248];
  undefined1 local_328 [472];
  undefined8 local_150;
  longlong *local_148;
  ulonglong local_80;
  undefined8 uStack_48;
  
  uStack_48 = 0x1493f0c6c;
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_3548;
  local_1620 = (code *)0x14bcbfe06;
  uStack_1618._0_4_ = 0x2a;
  local_3510 = param_2;
  FUN_1446e940c(&local_2a48,&local_1620);
  local_1620 = (code *)0x14bcbfd42;
  uStack_1618 = CONCAT44(uStack_1618._4_4_,0x2e);
  FUN_1446e940c(&local_eb8,&local_1620);
  FUN_140208bae(&local_2de0,&local_eb8,&local_2a48,L"The skeleton has some conflicts");
  FUN_1493f4a74(&local_1620);
  local_2df8 = 0;
  local_2df4 = 1;
  local_2df0 = 0;
  uStack_2de8 = 0;
  local_1340 = 0;
  local_133c = 1;
  FUN_144a450dc(local_1338,&local_2df0);
  FUN_1449db362(&local_2df0);
  plVar12 = local_13e8;
  local_1400 = 0;
  uStack_13f8 = 0;
  local_13f0 = 0;
  if (local_13e8 != (longlong *)0x0) {
    local_13e8 = (longlong *)0x0;
    LOCK();
    plVar19 = plVar12 + 1;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)*plVar19 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  local_eb8 = FUN_1493f4cb6;
  local_eb0 = 0;
  local_1400 = param_1 + 0x288;
  FUN_14942d870(&local_2a48,param_1,&local_eb8);
  FUN_144a450dc(local_1470,&local_2a48);
  FUN_1449db362(&local_2a48);
  local_eb8 = FUN_1493f4dfa;
  local_eb0 = 0;
  FUN_14942de62(&local_2a48,param_1,&local_eb8);
  FUN_144a450dc(local_1420,&local_2a48);
  FUN_1449db362(&local_2a48);
  FUN_149419202(&local_2a48,local_2518);
  FUN_1493f4ef6(&local_2a48,&local_eb8,&local_1620);
  plVar12 = (longlong *)CONCAT44(uStack_eac,local_eb0);
  if (plVar12 == (longlong *)0x0) {
    *(code **)(param_1 + 0x2a8) = local_eb8;
    plVar19 = *(longlong **)(param_1 + 0x2b0);
    if (plVar19 == (longlong *)0x0) goto LAB_1493f0ea0;
    *(undefined8 *)(param_1 + 0x2b0) = 0;
LAB_1493f2b27:
    LOCK();
    plVar12 = plVar19 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 != 0) goto LAB_1493f0ea0;
    (**(code **)*plVar19)(plVar19);
    LOCK();
    piVar1 = (int *)((longlong)plVar19 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar7 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    *(code **)(param_1 + 0x2a8) = local_eb8;
    plVar19 = *(longlong **)(param_1 + 0x2b0);
    if (plVar12 != plVar19) {
      *(longlong **)(param_1 + 0x2b0) = plVar12;
      if (plVar19 == (longlong *)0x0) goto LAB_1493f0ea0;
      goto LAB_1493f2b27;
    }
    LOCK();
    plVar19 = plVar12 + 1;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)*plVar19 != 0) goto LAB_1493f0ea0;
    (**(code **)*plVar12)(plVar12);
    LOCK();
    piVar1 = (int *)((longlong)plVar12 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar7 = *piVar1;
    UNLOCK();
    plVar19 = plVar12;
  }
  if (iVar7 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
  }
LAB_1493f0ea0:
  plVar12 = (longlong *)CONCAT44(uStack_eac,local_eb0);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar19 = plVar12 + 1;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)*plVar19 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  plVar12 = uStack_2a40;
  if (uStack_2a40 != (longlong *)0x0) {
    LOCK();
    plVar19 = uStack_2a40 + 1;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)*plVar19 == 0) {
      (**(code **)*uStack_2a40)(uStack_2a40);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  FUN_1493f4f6a(&local_1620);
  if ((longlong)*(int *)(param_1 + 0x290) != 0) {
    puVar20 = *(undefined8 **)(param_1 + 0x288);
    puVar18 = puVar20 + (longlong)*(int *)(param_1 + 0x290) * 2;
    do {
      local_2e08 = *puVar20;
      plVar12 = (longlong *)puVar20[1];
      if (plVar12 == (longlong *)0x0) {
        local_2e00 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
        local_2e00 = plVar12;
      }
      local_2e18 = *(undefined8 *)(param_1 + 0x2a8);
      local_2e10 = *(longlong *)(param_1 + 0x2b0);
      if (local_2e10 != 0) {
        LOCK();
        *(int *)(local_2e10 + 8) = *(int *)(local_2e10 + 8) + 1;
        UNLOCK();
      }
      FUN_1493f4612(&local_2e18,&local_2e08);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar19 = plVar12 + 1;
        *(int *)plVar19 = (int)*plVar19 + -1;
        UNLOCK();
        if ((int)*plVar19 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
      puVar20 = puVar20 + 2;
    } while (puVar20 != puVar18);
  }
  local_3500 = (longlong *)(param_1 + 0x2b0);
  FUN_140a53a96(local_328);
  FUN_140a562d0(local_658);
  local_2e60 = 0x4040000040400000;
  uStack_2e58 = 0x4040000040400000;
  local_2e50 = 1;
  local_2e48 = 0;
  uStack_2e40 = 0;
  local_488 = 1;
  local_498 = 0x40400000;
  uStack_494 = 0x40400000;
  uStack_490 = 0x40400000;
  uStack_48c = 0x40400000;
  FUN_144a450dc(local_480,&local_2e48);
  FUN_1449db362(&local_2e48);
  FUN_1446ddc76(&local_2e88,"ToolPanel.GroupBorder",1);
  plVar12 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar12 == (longlong *)0x0) {
    plVar12 = DAT_14c96b350;
  }
  local_2e80 = (**(code **)(*plVar12 + 0x50))(plVar12,local_2e88,0,0);
  local_2e78 = 1;
  local_2e70 = 0;
  uStack_2e68 = 0;
  local_428 = 1;
  local_430 = local_2e80;
  FUN_144a450dc(local_420,&local_2e70);
  FUN_1449db362(&local_2e70);
  FUN_1407679b0(local_810);
  FUN_145aafb3e(local_8d0);
  lVar13 = FUN_145aaf900(local_8d0);
  local_1620 = (code *)0x4000000040000000;
  uStack_1618 = 0x4000000040000000;
  local_1610 = 1;
  local_1608 = 0;
  uStack_1600 = 0;
  *(undefined1 *)(lVar13 + 0x28) = 1;
  *(undefined4 *)(lVar13 + 0x18) = 0x40000000;
  *(undefined4 *)(lVar13 + 0x1c) = 0x40000000;
  *(undefined4 *)(lVar13 + 0x20) = 0x40000000;
  *(undefined4 *)(lVar13 + 0x24) = 0x40000000;
  FUN_144a450dc(lVar13 + 0x30,&local_1608);
  FUN_1449db362(&local_1608);
  FUN_140a5296a(local_a88);
  FUN_140a50426(local_b48);
  uVar14 = FUN_140a52578(local_b48);
  FUN_145ab3d24(&local_eb8);
  local_cf0 = &DAT_200000002;
  local_b98 = 0;
  FUN_1446ddc76(&local_2ee0,"NoBorder",1);
  plVar12 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar12 == (longlong *)0x0) {
    plVar12 = DAT_14c96b350;
  }
  local_d00 = FUN_141492734(plVar12,local_2ee0,0,0);
  local_2518[0] = 0;
  local_2a48 = FUN_1493f496a;
  uStack_2a40 = (longlong *)((ulonglong)uStack_2a40._4_4_ << 0x20);
  FUN_1494303ec(&local_1620,param_1);
  FUN_144a450dc(local_c98,&local_1620);
  FUN_1449db362(&local_1620);
  FUN_140a53334(local_10f0);
  local_1620 = FUN_1493f49e0;
  uStack_1618 = uStack_1618 & 0xffffffff00000000;
  FUN_1493f5108(local_10f0,param_1,&local_1620,0);
  local_3528 = &local_2f09;
  FUN_140a554b8(local_2f08,"SImage",
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x7b3);
  FUN_140a52c70(local_2f08,&local_2ef0,local_10f0);
  plVar19 = local_d08;
  plVar12 = local_2ee8;
  if (local_2ee8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2ee8 + 1) = (int)local_2ee8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_2ee8 + 1) = (int)local_2ee8[1] + 1;
    UNLOCK();
  }
  local_d10 = local_2ef0;
  local_d08 = local_2ee8;
  if (plVar19 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar19 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar19)(plVar19);
      LOCK();
      piVar1 = (int *)((longlong)plVar19 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
    }
  }
  local_3528 = &local_2f29;
  local_34f8 = (undefined8 *)(param_1 + 0x2a8);
  FUN_145ab3730(local_2f28,"SButton",
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x7ac);
  FUN_145ab34ca(local_2f28,&local_2ed8,&local_eb8);
  local_2ec8 = local_2ed8;
  local_2ec0 = local_2ed0;
  if (local_2ed0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2ed0 + 1) = (int)local_2ed0[1] + 1;
    UNLOCK();
  }
  local_34f0 = plVar12;
  uVar14 = FUN_140a4fe8e(uVar14,&local_2ec8);
  local_3518 = FUN_140a52392(local_a88,uVar14);
  FUN_140a50426(local_11b0);
  uVar14 = FUN_140a52578(local_11b0);
  FUN_140a570d8(&local_1620);
  FUN_1446ddc76(&local_3030,"DetailsView.CategoryFontStyle",1);
  plVar12 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar12 == (longlong *)0x0) {
    plVar12 = DAT_14c96b350;
  }
  (**(code **)(*plVar12 + 0x88))(plVar12,local_3028,local_3030,0);
  FUN_144a87366(local_2fc8,local_3028);
  local_2f68 = 1;
  local_2f60 = 0;
  uStack_2f58 = 0;
  FUN_1412cc59c(local_1448,local_2fc8);
  local_13e8 = (longlong *)CONCAT71(local_13e8._1_7_,local_2f68);
  FUN_144a450dc(local_13e0,&local_2f60);
  FUN_141515cba(local_2fc8);
  local_2a48 = (code *)0x14bcbfed6;
  uStack_2a40._0_4_ = 0x31;
  FUN_1446e940c(local_306c,&local_2a48);
  local_2a48 = (code *)0x14bcbfd42;
  uStack_2a40 = (longlong *)CONCAT44(uStack_2a40._4_4_,0x2e);
  FUN_1446e940c(local_3070,&local_2a48);
  FUN_140208bae(local_3068,local_3070,local_306c,L"Skeleton");
  FUN_14023423e(local_3058,local_3068);
  local_3048 = 1;
  local_3040 = 0;
  uStack_3038 = 0;
  uVar15 = FUN_140a54906(&local_1620,local_3058);
  local_3528 = &local_3089;
  FUN_140a54526(local_3088,"STextBlock",
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x7b9);
  FUN_140a52852(local_3088,&local_2f50,uVar15);
  local_2f40 = local_2f50;
  local_2f38 = local_2f48;
  if (local_2f48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2f48 + 1) = (int)local_2f48[1] + 1;
    UNLOCK();
  }
  uVar14 = FUN_140a4fe8e(uVar14,&local_2f40);
  uVar14 = FUN_140a52392(local_3518,uVar14);
  local_3528 = &local_30a9;
  FUN_140a541dc(local_30a8,"SHorizontalBox",
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x7a8);
  FUN_140a50ec6(local_30a8,&local_2eb8,uVar14);
  local_2ea8 = local_2eb8;
  local_2ea0 = local_2eb0;
  if (local_2eb0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2eb0 + 1) = (int)local_2eb0[1] + 1;
    UNLOCK();
  }
  uVar14 = FUN_145aaf878(lVar13,&local_2ea8);
  local_3518 = FUN_145aaf822(local_810,uVar14);
  FUN_145aafb3e(local_16e0);
  local_30c8 = 0x3f800000;
  local_30c4 = 1;
  local_30c0 = 0;
  uStack_30b8 = 0;
  local_3508 = FUN_140767d84(local_16e0);
  local_2a48 = (code *)0x4000000040000000;
  uStack_2a40 = (longlong *)0x4000000040000000;
  local_2a38 = 1;
  local_2a30 = 0;
  uStack_2a28 = 0;
  *(undefined1 *)(local_3508 + 0x28) = 1;
  *(undefined4 *)(local_3508 + 0x18) = 0x40000000;
  *(undefined4 *)(local_3508 + 0x1c) = 0x40000000;
  *(undefined4 *)(local_3508 + 0x20) = 0x40000000;
  *(undefined4 *)(local_3508 + 0x24) = 0x40000000;
  FUN_144a450dc(local_3508 + 0x30,&local_2a30);
  FUN_1449db362(&local_2a30);
  FUN_140a53a96(local_1988);
  local_3114 = 0;
  local_2a48 = (code *)&LAB_1493f49ba;
  uStack_2a40 = (longlong *)((ulonglong)uStack_2a40 & 0xffffffff00000000);
  FUN_1493f51c6(local_3110,param_1,&local_2a48);
  local_3100 = 0x119;
  local_30f8 = 0;
  local_30f0 = 0;
  FUN_140fe25fc(&local_30f8,local_3110);
  local_1918 = local_3100;
  FUN_144a450dc(local_1910,&local_30f8);
  FUN_1449db362(&local_30f8);
  FUN_140a562d0(local_1cb8);
  local_3150 = 0x4040000040400000;
  uStack_3148 = 0x4040000040400000;
  local_3140 = 1;
  local_3138 = 0;
  uStack_3130 = 0;
  local_1ae8 = 1;
  local_1af8 = 0x40400000;
  uStack_1af4 = 0x40400000;
  uStack_1af0 = 0x40400000;
  uStack_1aec = 0x40400000;
  FUN_144a450dc(local_1ae0,&local_3138);
  FUN_1449db362(&local_3138);
  FUN_1446ddc76(&local_3178,"ToolPanel.DarkGroupBorder",1);
  plVar12 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar12 == (longlong *)0x0) {
    plVar12 = DAT_14c96b350;
  }
  local_3170 = (**(code **)(*plVar12 + 0x50))(plVar12,local_3178,0,0);
  local_3168 = 1;
  local_3160 = 0;
  uStack_3158 = 0;
  local_1a88 = 1;
  local_1a90 = local_3170;
  FUN_144a450dc(local_1a80,&local_3160);
  FUN_1449db362(&local_3160);
  FUN_1407679b0(local_1e70);
  FUN_145aafb3e(local_1f30);
  lVar13 = FUN_145aaf900(local_1f30);
  local_2a48 = (code *)0x4000000040000000;
  uStack_2a40 = (longlong *)0x4000000040000000;
  local_2a38 = 1;
  local_2a30 = 0;
  uStack_2a28 = 0;
  *(undefined1 *)(lVar13 + 0x28) = 1;
  *(undefined4 *)(lVar13 + 0x18) = 0x40000000;
  *(undefined4 *)(lVar13 + 0x1c) = 0x40000000;
  *(undefined4 *)(lVar13 + 0x20) = 0x40000000;
  *(undefined4 *)(lVar13 + 0x24) = 0x40000000;
  FUN_144a450dc(lVar13 + 0x30,&local_2a30);
  FUN_1449db362(&local_2a30);
  FUN_140a5296a(local_20e8);
  FUN_140a50426(local_21a8);
  uVar14 = FUN_140a52578(local_21a8);
  FUN_145ab3d24(local_2518);
  local_2350 = 2;
  local_2a48 = (code *)0x14bcbff60;
  uStack_2a40._0_4_ = 0x38;
  FUN_1446e940c(local_3204,&local_2a48);
  local_2a48 = (code *)0x14bcbfc8c;
  uStack_2a40 = (longlong *)CONCAT44(uStack_2a40._4_4_,0x2e);
  FUN_1446e940c(local_3208,&local_2a48);
  FUN_140208bae(local_3200,local_3208,local_3204,L"Expand To Conflict");
  FUN_14023423e(local_31f0,local_3200);
  local_31e0 = 1;
  local_31d8 = 0;
  uStack_31d0 = 0;
  lVar16 = FUN_1469d324e(local_2518,local_31f0);
  local_2ce8 = FUN_1493f477e;
  uStack_2ce0 = (ulonglong)uStack_2ce0._4_4_ << 0x20;
  FUN_149418d1a(&local_2a48,param_1);
  FUN_144a450dc(lVar16 + 0x220,&local_2a48);
  FUN_1449db362(&local_2a48);
  local_3528 = &local_3221;
  FUN_145ab3730(local_3220,"SButton",
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x7d2);
  FUN_145ab34ca(local_3220,&local_31c8,lVar16);
  local_31b8 = local_31c8;
  local_31b0 = local_31c0;
  if (local_31c0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_31c0 + 1) = (int)local_31c0[1] + 1;
    UNLOCK();
  }
  uVar14 = FUN_140a4fe8e(uVar14,&local_31b8);
  uVar14 = FUN_140a52392(local_20e8,uVar14);
  FUN_140a50426(local_25d8);
  local_3240 = 0x3f800000;
  local_323c = 1;
  local_3238 = 0;
  uStack_3230 = 0;
  lVar16 = FUN_140a5475a(local_25d8);
  *(undefined4 *)(lVar16 + 0x48) = 2;
  *(undefined1 *)(lVar16 + 0x4c) = 1;
  *(undefined4 *)(lVar16 + 0x40) = 1;
  *(undefined1 *)(lVar16 + 0x44) = 1;
  local_2a48 = (code *)0x40c00000;
  uStack_2a40 = (longlong *)0x40c00000;
  local_2a38 = 1;
  local_2a30 = 0;
  uStack_2a28 = 0;
  *(undefined1 *)(lVar16 + 0x28) = 1;
  *(undefined4 *)(lVar16 + 0x18) = 0x40c00000;
  *(undefined4 *)(lVar16 + 0x1c) = 0;
  *(undefined4 *)(lVar16 + 0x20) = 0x40c00000;
  *(undefined4 *)(lVar16 + 0x24) = 0;
  FUN_144a450dc(lVar16 + 0x30,&local_2a30);
  FUN_1449db362(&local_2a30);
  FUN_140a570d8(&local_2a48);
  FUN_1446ddc76(&local_3340,"DetailsView.CategoryFontStyle",1);
  plVar12 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar12 == (longlong *)0x0) {
    plVar12 = DAT_14c96b350;
  }
  (**(code **)(*plVar12 + 0x88))(plVar12,local_3338,local_3340,0);
  FUN_144a87366(local_32d8,local_3338);
  local_3278 = 1;
  local_3270 = 0;
  uStack_3268 = 0;
  FUN_1412cc59c(local_2870,local_32d8);
  local_2810 = local_3278;
  FUN_144a450dc(local_2808,&local_3270);
  FUN_141515cba(local_32d8);
  local_3368 = local_2de0;
  if (local_2de0 != (longlong *)0x0) {
    (**(code **)(*local_2de0 + 8))();
  }
  local_3360 = local_2dd8;
  local_3358 = 1;
  local_3350 = 0;
  uStack_3348 = 0;
  lVar17 = FUN_140a54906(&local_2a48);
  uVar11 = DAT_14cc15494;
  uVar10 = DAT_14cc15490;
  uVar9 = DAT_14cc1548c;
  uVar8 = DAT_14cc15488;
  local_3388 = _DAT_14cc15498;
  local_3398 = DAT_14cc15488;
  uStack_3394 = DAT_14cc1548c;
  uStack_3390 = DAT_14cc15490;
  uStack_338c = DAT_14cc15494;
  local_3384 = 1;
  local_3380 = 0;
  uStack_3378 = 0;
  *(undefined4 *)(lVar17 + 0x280) = _DAT_14cc15498;
  *(undefined4 *)(lVar17 + 0x270) = uVar8;
  *(undefined4 *)(lVar17 + 0x274) = uVar9;
  *(undefined4 *)(lVar17 + 0x278) = uVar10;
  *(undefined4 *)(lVar17 + 0x27c) = uVar11;
  *(undefined1 *)(lVar17 + 0x284) = 1;
  FUN_144a450dc(lVar17 + 0x288,&local_3380);
  FUN_1449db362(&local_3380);
  local_3528 = &local_33b1;
  FUN_140a54526(local_33b0,"STextBlock",
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x7dd);
  FUN_140a52852(local_33b0,&local_3260,lVar17);
  local_3250 = local_3260;
  local_3248 = local_3258;
  if (local_3258 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_3258 + 1) = (int)local_3258[1] + 1;
    UNLOCK();
  }
  uVar15 = FUN_140a4fe8e(lVar16,&local_3250);
  uVar14 = FUN_140a52392(uVar14,uVar15);
  local_3528 = &local_33d1;
  FUN_140a541dc(local_33d0,"SHorizontalBox",
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x7ce);
  FUN_140a50ec6(local_33d0,&local_31a8,uVar14);
  local_3198 = local_31a8;
  local_3190 = local_31a0;
  if (local_31a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_31a0 + 1) = (int)local_31a0[1] + 1;
    UNLOCK();
  }
  uVar14 = FUN_145aaf878(lVar13,&local_3198);
  uVar14 = FUN_145aaf822(local_1e70,uVar14);
  FUN_145aafb3e(local_2b08);
  lVar13 = FUN_145aaf900(local_2b08);
  local_2ce8 = (code *)0x4000000040000000;
  uStack_2ce0 = 0x4000000040000000;
  local_2cd8 = 1;
  local_2cd0 = 0;
  uStack_2cc8 = 0;
  *(undefined1 *)(lVar13 + 0x28) = 1;
  *(undefined4 *)(lVar13 + 0x18) = 0x40000000;
  *(undefined4 *)(lVar13 + 0x1c) = 0x40000000;
  *(undefined4 *)(lVar13 + 0x20) = 0x40000000;
  *(undefined4 *)(lVar13 + 0x24) = 0x40000000;
  FUN_144a450dc(lVar13 + 0x30,&local_2cd0);
  FUN_1449db362(&local_2cd0);
  FUN_146a11c40(&local_2ce8);
  local_2b38 = 0;
  local_3528 = &local_3411;
  FUN_146a40596(local_3410,"SSeparator",
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x7e7);
  FUN_146a11d06(local_3410,&local_33f8,&local_2ce8);
  puVar20 = local_34f8;
  local_33e8 = local_33f8;
  local_33e0 = local_33f0;
  if (local_33f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_33f0 + 1) = (int)local_33f0[1] + 1;
    UNLOCK();
  }
  uVar15 = FUN_145aaf878(lVar13,&local_33e8);
  uVar14 = FUN_145aaf822(uVar14,uVar15);
  FUN_145aafb3e(local_2da8);
  local_3430 = 0x3f800000;
  local_342c = 1;
  local_3428 = 0;
  uStack_3420 = 0;
  lVar13 = FUN_140767d84(local_2da8);
  local_2dd0 = 0x4000000040000000;
  plStack_2dc8 = (longlong *)0x4000000040000000;
  local_2dc0 = 1;
  local_2db8 = 0;
  uStack_2db0 = 0;
  *(undefined1 *)(lVar13 + 0x28) = 1;
  *(undefined4 *)(lVar13 + 0x18) = 0x40000000;
  *(undefined4 *)(lVar13 + 0x1c) = 0x40000000;
  *(undefined4 *)(lVar13 + 0x20) = 0x40000000;
  *(undefined4 *)(lVar13 + 0x24) = 0x40000000;
  FUN_144a450dc(lVar13 + 0x30,&local_2db8);
  FUN_1449db362(&local_2db8);
  puVar18 = local_3510;
  local_3440 = *puVar20;
  plVar12 = (longlong *)*local_3500;
  if (plVar12 == (longlong *)0x0) {
    local_3438 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    local_3438 = plVar12;
  }
  uVar15 = FUN_145aaf878(lVar13,&local_3440);
  uVar14 = FUN_145aaf822(uVar14,uVar15);
  local_3528 = &local_3441;
  FUN_14076837c(&local_2dd0,"SVerticalBox",
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x7c9);
  FUN_14076784c(&local_2dd0,&local_3188,uVar14);
  plVar2 = local_1b08;
  plVar19 = local_3180;
  if (local_3180 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_3180 + 1) = (int)local_3180[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_3180 + 1) = (int)local_3180[1] + 1;
    UNLOCK();
  }
  local_1b10 = local_3188;
  local_1b08 = local_3180;
  if (plVar2 != (longlong *)0x0) {
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
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  local_3528 = &local_3461;
  FUN_140a55c32(local_3460,"SBorder",
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x7c5);
  FUN_140a530e4(local_3460,&local_3128,local_1cb8);
  plVar3 = local_17a8;
  plVar2 = local_3120;
  if (local_3120 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_3120 + 1) = (int)local_3120[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_3120 + 1) = (int)local_3120[1] + 1;
    UNLOCK();
  }
  local_17b0 = local_3128;
  local_17a8 = local_3120;
  if (plVar3 != (longlong *)0x0) {
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
  local_3528 = &local_3481;
  FUN_140a53d66(local_3480,&DAT_149efe19f,
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x7c2);
  FUN_140a50bf4(local_3480,&local_30e8,local_1988);
  local_30d8 = local_30e8;
  local_30d0 = local_30e0;
  if (local_30e0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30e0 + 1) = (int)local_30e0[1] + 1;
    UNLOCK();
  }
  uVar14 = FUN_145aaf878(local_3508,&local_30d8);
  uVar14 = FUN_145aaf822(local_3518,uVar14);
  local_3528 = &local_34a1;
  FUN_14076837c(local_34a0,"SVerticalBox",
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x7a3);
  FUN_14076784c(local_34a0,&local_2e98,uVar14);
  plVar4 = local_4a8;
  plVar3 = local_2e90;
  if (local_2e90 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2e90 + 1) = (int)local_2e90[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_2e90 + 1) = (int)local_2e90[1] + 1;
    UNLOCK();
  }
  local_4b0 = local_2e98;
  local_4a8 = local_2e90;
  if (plVar4 != (longlong *)0x0) {
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
  local_3528 = &local_34c1;
  FUN_140a55c32(local_34c0,"SBorder",
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x79f);
  FUN_140a530e4(local_34c0,&local_2e38,local_658);
  plVar5 = local_148;
  plVar4 = local_2e30;
  if (local_2e30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2e30 + 1) = (int)local_2e30[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_2e30 + 1) = (int)local_2e30[1] + 1;
    UNLOCK();
  }
  local_150 = local_2e38;
  local_148 = local_2e30;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  local_3528 = &local_34e1;
  FUN_140a53d66(local_34e0,&DAT_149efe19f,
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x79d);
  FUN_140a50bf4(local_34e0,&local_2e28,local_328);
  *puVar18 = local_2e28;
  puVar18[1] = local_2e20;
  if (local_2e20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2e20 + 1) = (int)local_2e20[1] + 1;
    UNLOCK();
    if (local_2e20 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_2e20 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_2e20)(local_2e20);
        LOCK();
        piVar1 = (int *)((longlong)local_2e20 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_2e20 + 0x10))(local_2e20);
        }
      }
    }
  }
  plVar5 = local_34f0;
  if (local_34d8 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_34d8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_34d8)(local_34d8);
      LOCK();
      piVar1 = (int *)((longlong)local_34d8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_34d8 + 0x10))(local_34d8);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar4 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if (local_2e30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_2e30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_2e30)(local_2e30);
      LOCK();
      piVar1 = (int *)((longlong)local_2e30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2e30 + 0x10))(local_2e30);
      }
    }
  }
  if (local_34b8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_34b8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_34b8)(local_34b8);
      LOCK();
      piVar1 = (int *)((longlong)local_34b8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_34b8 + 0x10))(local_34b8);
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
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
  if (local_2e90 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2e90 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_2e90)(local_2e90);
      LOCK();
      piVar1 = (int *)((longlong)local_2e90 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2e90 + 0x10))(local_2e90);
      }
    }
  }
  if (local_3498 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_3498 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_3498)(local_3498);
      LOCK();
      piVar1 = (int *)((longlong)local_3498 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_3498 + 0x10))(local_3498);
      }
    }
  }
  plVar3 = local_30d0;
  if (local_30d0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30d0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_30d0)(local_30d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_30e0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30e0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_30e0)(local_30e0);
      LOCK();
      piVar1 = (int *)((longlong)local_30e0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30e0 + 0x10))(local_30e0);
      }
    }
  }
  if (local_3478 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_3478 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_3478)(local_3478);
      LOCK();
      piVar1 = (int *)((longlong)local_3478 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_3478 + 0x10))(local_3478);
      }
    }
  }
  if (plVar2 != (longlong *)0x0) {
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
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_3120 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_3120 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_3120)(local_3120);
      LOCK();
      piVar1 = (int *)((longlong)local_3120 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_3120 + 0x10))(local_3120);
      }
    }
  }
  if (local_3458 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_3458 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_3458)(local_3458);
      LOCK();
      piVar1 = (int *)((longlong)local_3458 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_3458 + 0x10))(local_3458);
      }
    }
  }
  if (plVar19 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar19 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar19)(plVar19);
      LOCK();
      piVar1 = (int *)((longlong)plVar19 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
    }
  }
  if (local_3180 != (longlong *)0x0) {
    LOCK();
    plVar19 = local_3180 + 1;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)*plVar19 == 0) {
      (**(code **)*local_3180)(local_3180);
      LOCK();
      piVar1 = (int *)((longlong)local_3180 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_3180 + 0x10))(local_3180);
      }
    }
  }
  plVar19 = plStack_2dc8;
  if (plStack_2dc8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_2dc8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_2dc8)(plStack_2dc8);
      LOCK();
      piVar1 = (int *)((longlong)plVar19 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
    }
  }
  plVar19 = local_3438;
  if (local_3438 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_3438 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_3438)(local_3438);
      LOCK();
      piVar1 = (int *)((longlong)plVar19 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
    }
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar19 = plVar12 + 1;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)*plVar19 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  FUN_140767f30(local_2da8);
  plVar12 = local_33e0;
  if (local_33e0 != (longlong *)0x0) {
    LOCK();
    plVar19 = local_33e0 + 1;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)*plVar19 == 0) {
      (**(code **)*local_33e0)(local_33e0);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  if (local_33f0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_33f0 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_33f0)(local_33f0);
      LOCK();
      piVar1 = (int *)((longlong)local_33f0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_33f0 + 0x10))(local_33f0);
      }
    }
  }
  if (local_3408 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_3408 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_3408)(local_3408);
      LOCK();
      piVar1 = (int *)((longlong)local_3408 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_3408 + 0x10))(local_3408);
      }
    }
  }
  FUN_1449db362(local_2b18);
  FUN_140a4ff8c(&local_2ce8);
  FUN_140767f30(local_2b08);
  plVar12 = local_3190;
  if (local_3190 != (longlong *)0x0) {
    LOCK();
    plVar19 = local_3190 + 1;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)*plVar19 == 0) {
      (**(code **)*local_3190)(local_3190);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  if (local_31a0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_31a0 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_31a0)(local_31a0);
      LOCK();
      piVar1 = (int *)((longlong)local_31a0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_31a0 + 0x10))(local_31a0);
      }
    }
  }
  if (local_33c8 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_33c8 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_33c8)(local_33c8);
      LOCK();
      piVar1 = (int *)((longlong)local_33c8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_33c8 + 0x10))(local_33c8);
      }
    }
  }
  plVar12 = local_3248;
  if (local_3248 != (longlong *)0x0) {
    LOCK();
    plVar19 = local_3248 + 1;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)*plVar19 == 0) {
      (**(code **)*local_3248)(local_3248);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  if (local_3258 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_3258 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_3258)(local_3258);
      LOCK();
      piVar1 = (int *)((longlong)local_3258 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_3258 + 0x10))(local_3258);
      }
    }
  }
  if (local_33a8 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_33a8 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_33a8)(local_33a8);
      LOCK();
      piVar1 = (int *)((longlong)local_33a8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_33a8 + 0x10))(local_33a8);
      }
    }
  }
  if (local_3300 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_3300 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_3300)(local_3300);
      LOCK();
      piVar1 = (int *)((longlong)local_3300 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_3300 + 0x10))(local_3300);
      }
    }
  }
  FUN_140a59ae6(&local_2a48);
  FUN_140a509a6(local_25d8);
  plVar12 = local_31b0;
  if (local_31b0 != (longlong *)0x0) {
    LOCK();
    plVar19 = local_31b0 + 1;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)*plVar19 == 0) {
      (**(code **)*local_31b0)(local_31b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  if (local_31c0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_31c0 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_31c0)(local_31c0);
      LOCK();
      piVar1 = (int *)((longlong)local_31c0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_31c0 + 0x10))(local_31c0);
      }
    }
  }
  if (local_3218 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_3218 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_3218)(local_3218);
      LOCK();
      piVar1 = (int *)((longlong)local_3218 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_3218 + 0x10))(local_3218);
      }
    }
  }
  if (local_3200[0] != (longlong *)0x0) {
    (**(code **)(*local_3200[0] + 0x10))();
  }
  FUN_145ab35f4(local_2518);
  FUN_140a509a6(local_21a8);
  FUN_145ab33da(local_20e8);
  FUN_140767f30(local_1f30);
  FUN_14149255e(local_1e70);
  FUN_140a59028(local_1cb8);
  FUN_1449db362(local_3110);
  FUN_140a5660c(local_1988);
  FUN_140767f30(local_16e0);
  plVar12 = local_2ea0;
  if (local_2ea0 != (longlong *)0x0) {
    LOCK();
    plVar19 = local_2ea0 + 1;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)*plVar19 == 0) {
      (**(code **)*local_2ea0)(local_2ea0);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  if (local_2eb0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_2eb0 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_2eb0)(local_2eb0);
      LOCK();
      piVar1 = (int *)((longlong)local_2eb0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2eb0 + 0x10))(local_2eb0);
      }
    }
  }
  if (local_30a0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_30a0 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_30a0)(local_30a0);
      LOCK();
      piVar1 = (int *)((longlong)local_30a0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30a0 + 0x10))(local_30a0);
      }
    }
  }
  plVar12 = local_2f38;
  if (local_2f38 != (longlong *)0x0) {
    LOCK();
    plVar19 = local_2f38 + 1;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)*plVar19 == 0) {
      (**(code **)*local_2f38)(local_2f38);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  if (local_2f48 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_2f48 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_2f48)(local_2f48);
      LOCK();
      piVar1 = (int *)((longlong)local_2f48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2f48 + 0x10))(local_2f48);
      }
    }
  }
  if (local_3080 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_3080 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_3080)(local_3080);
      LOCK();
      piVar1 = (int *)((longlong)local_3080 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_3080 + 0x10))(local_3080);
      }
    }
  }
  if (local_3068[0] != (longlong *)0x0) {
    (**(code **)(*local_3068[0] + 0x10))();
  }
  if (local_2ff0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_2ff0 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_2ff0)(local_2ff0);
      LOCK();
      piVar1 = (int *)((longlong)local_2ff0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2ff0 + 0x10))(local_2ff0);
      }
    }
  }
  FUN_140a59ae6(&local_1620);
  FUN_140a509a6(local_11b0);
  plVar12 = local_2ec0;
  if (local_2ec0 != (longlong *)0x0) {
    LOCK();
    plVar19 = local_2ec0 + 1;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)*plVar19 == 0) {
      (**(code **)*local_2ec0)(local_2ec0);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  if (local_2ed0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_2ed0 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_2ed0)(local_2ed0);
      LOCK();
      piVar1 = (int *)((longlong)local_2ed0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2ed0 + 0x10))(local_2ed0);
      }
    }
  }
  if (local_2f20 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_2f20 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_2f20)(local_2f20);
      LOCK();
      piVar1 = (int *)((longlong)local_2f20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2f20 + 0x10))(local_2f20);
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar5 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
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
  if (local_2ee8 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_2ee8 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_2ee8)(local_2ee8);
      LOCK();
      piVar1 = (int *)((longlong)local_2ee8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2ee8 + 0x10))(local_2ee8);
      }
    }
  }
  if (local_2f00 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_2f00 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_2f00)(local_2f00);
      LOCK();
      piVar1 = (int *)((longlong)local_2f00 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2f00 + 0x10))(local_2f00);
      }
    }
  }
  FUN_140a55a86(local_10f0);
  FUN_145ab35f4(&local_eb8);
  FUN_140a509a6(local_b48);
  FUN_145ab33da(local_a88);
  FUN_140767f30(local_8d0);
  FUN_14149255e(local_810);
  FUN_140a59028(local_658);
  FUN_140a5660c(local_328);
  if (local_2de0 != (longlong *)0x0) {
    (**(code **)(*local_2de0 + 0x10))();
  }
  if ((local_80 ^ (ulonglong)auStack_3548) == DAT_14c707940) {
    return puVar18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493f2b60 FUN_1493f2b60 body=6326 status=ok
// SIG undefined FUN_1493f2b60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_1493f2b60(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined1 auStack_3148 [32];
  undefined1 *local_3128;
  longlong local_3118;
  undefined8 local_3110;
  longlong *local_3108;
  undefined8 *local_3100;
  undefined1 local_30f1;
  undefined1 local_30f0 [8];
  longlong *local_30e8;
  undefined1 local_30d1;
  undefined1 local_30d0 [8];
  longlong *local_30c8;
  undefined1 local_30b1;
  undefined1 local_30b0 [8];
  longlong *local_30a8;
  undefined1 local_3091;
  undefined1 local_3090 [8];
  longlong *local_3088;
  undefined1 local_3071;
  undefined1 local_3070 [8];
  longlong *local_3068;
  undefined1 local_3051;
  code *local_3050;
  undefined4 local_3048;
  undefined4 uStack_3044;
  undefined1 local_3031;
  undefined1 local_3030 [8];
  longlong *local_3028;
  undefined8 local_3018;
  longlong *local_3010;
  undefined8 local_3008;
  longlong *local_3000;
  undefined4 local_2ff8;
  undefined1 local_2ff4;
  undefined8 local_2ff0;
  undefined8 uStack_2fe8;
  undefined1 local_2fd9;
  undefined1 local_2fd8 [8];
  longlong *local_2fd0;
  undefined8 local_2fc0;
  longlong *local_2fb8;
  undefined8 local_2fb0;
  longlong *local_2fa8;
  undefined1 local_2f99;
  undefined1 local_2f98 [8];
  longlong *local_2f90;
  longlong *local_2f80 [2];
  undefined1 local_2f70 [16];
  undefined1 local_2f60;
  undefined8 local_2f58;
  undefined8 uStack_2f50;
  undefined8 local_2f48;
  undefined1 local_2f40 [56];
  longlong *local_2f08;
  undefined1 local_2ee0 [96];
  undefined1 local_2e80;
  undefined8 local_2e78;
  undefined8 uStack_2e70;
  undefined8 local_2e68;
  longlong *local_2e60;
  undefined8 local_2e58;
  longlong *local_2e50;
  undefined8 local_2e48;
  longlong *local_2e40;
  undefined8 local_2e38;
  undefined8 local_2e30;
  undefined1 local_2e28;
  undefined8 local_2e20;
  undefined8 uStack_2e18;
  undefined8 local_2e10;
  undefined8 uStack_2e08;
  undefined1 local_2e00;
  undefined8 local_2df8;
  undefined8 uStack_2df0;
  undefined8 local_2de8;
  longlong *local_2de0;
  undefined4 local_2dd4;
  undefined1 local_2dd0 [16];
  undefined2 local_2dc0;
  undefined8 local_2db8;
  undefined4 local_2db0;
  undefined8 local_2da8;
  longlong *local_2da0;
  undefined8 local_2d98;
  longlong *local_2d90;
  undefined4 local_2d88;
  undefined1 local_2d84;
  undefined8 local_2d80;
  undefined8 uStack_2d78;
  undefined1 local_2d69;
  undefined1 local_2d68 [8];
  longlong *local_2d60;
  undefined1 local_2d49;
  undefined1 local_2d48 [8];
  longlong *plStack_2d40;
  undefined1 local_2d30 [4];
  undefined1 local_2d2c [4];
  longlong *local_2d28 [2];
  undefined1 local_2d18 [16];
  undefined1 local_2d08;
  undefined8 local_2d00;
  undefined8 uStack_2cf8;
  undefined8 local_2cf0;
  undefined1 local_2ce8 [56];
  longlong *plStack_2cb0;
  undefined1 local_2c88 [96];
  undefined1 local_2c28;
  undefined8 local_2c20;
  undefined8 uStack_2c18;
  undefined8 local_2c10;
  longlong *local_2c08;
  undefined8 local_2c00;
  longlong *local_2bf8;
  undefined1 local_2be9;
  undefined1 local_2be8 [8];
  longlong *local_2be0;
  undefined1 local_2bc9;
  undefined1 local_2bc8 [8];
  longlong *local_2bc0;
  undefined8 local_2bb0;
  longlong *local_2ba8;
  undefined8 local_2ba0;
  undefined8 local_2b98;
  longlong *local_2b90;
  undefined8 local_2b88;
  longlong *local_2b80;
  undefined8 local_2b78;
  longlong *local_2b70;
  undefined8 local_2b68;
  longlong *plStack_2b60;
  undefined8 local_2b58;
  longlong *local_2b50;
  undefined8 local_2b48;
  undefined8 local_2b40;
  undefined1 local_2b38;
  undefined8 local_2b30;
  undefined8 uStack_2b28;
  undefined8 local_2b20;
  undefined8 uStack_2b18;
  undefined1 local_2b10;
  undefined8 local_2b08;
  undefined8 uStack_2b00;
  undefined8 local_2af8;
  longlong *local_2af0;
  undefined8 local_2ae8;
  longlong *local_2ae0;
  longlong local_2ad8 [2];
  longlong local_2ac8 [2];
  undefined1 local_2ab8;
  undefined8 local_2ab0;
  undefined8 uStack_2aa8;
  undefined1 local_2918 [112];
  longlong local_28a8;
  undefined8 uStack_28a0;
  undefined8 local_2898;
  longlong *local_2890;
  undefined1 local_2700 [192];
  undefined1 local_2640 [432];
  undefined4 local_2490;
  undefined1 local_2470 [16];
  undefined1 local_2460 [192];
  code *local_23a0;
  undefined8 uStack_2398;
  undefined1 local_2390;
  undefined8 local_2388;
  undefined8 uStack_2380;
  undefined1 auStack_21c8 [96];
  undefined1 local_2168;
  undefined1 local_2160 [560];
  undefined1 local_1f30 [192];
  undefined1 local_1e70 [440];
  undefined1 local_1cb8 [424];
  undefined8 local_1b10;
  longlong *local_1b08;
  undefined4 local_1af8;
  undefined4 uStack_1af4;
  undefined4 uStack_1af0;
  undefined4 uStack_1aec;
  undefined1 local_1ae8;
  undefined1 auStack_1ae0 [80];
  undefined8 local_1a90;
  undefined1 local_1a88;
  undefined1 local_1a80 [248];
  undefined1 local_1988 [112];
  undefined2 local_1918;
  undefined1 local_1910 [352];
  undefined8 local_17b0;
  longlong *local_17a8;
  undefined1 local_16e0 [192];
  code *local_1620;
  ulonglong uStack_1618;
  undefined1 local_1610;
  undefined8 local_1608;
  undefined8 uStack_1600;
  undefined1 local_1448 [96];
  undefined1 local_13e8;
  undefined1 local_13e0 [560];
  undefined1 local_11b0 [192];
  undefined1 local_10f0 [568];
  undefined1 local_eb8 [424];
  undefined8 local_d10;
  longlong *local_d08;
  undefined8 local_d00;
  undefined1 *local_cf0;
  undefined1 local_c98 [256];
  undefined1 local_b98;
  undefined1 local_b48 [192];
  undefined1 local_a88 [440];
  undefined1 local_8d0 [192];
  undefined1 local_810 [440];
  undefined1 local_658 [424];
  undefined8 local_4b0;
  longlong *local_4a8;
  undefined4 local_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined1 local_488;
  undefined1 local_480 [80];
  undefined8 local_430;
  undefined1 local_428;
  undefined1 local_420 [248];
  undefined1 local_328 [472];
  undefined8 local_150;
  longlong *local_148;
  ulonglong local_80;
  undefined8 uStack_48;
  
  uStack_48 = 0x1493f2b76;
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_3148;
  local_2ad8[0] = 0;
  local_2ad8[1] = 0;
  local_3118 = param_1;
  if (0 < *(int *)(param_1 + 0x280)) {
    local_2ac8[0] = 0;
    local_2ac8[1] = 0;
    FUN_144a83b10(local_2ac8);
    FUN_140ba7826(&local_23a0,L"Skeleton is referenced by ",local_2ac8);
    FUN_144a882a8(&local_1620,&local_23a0,L" assets.");
    iVar8 = (int)uStack_1618 + -1;
    if ((int)uStack_1618 == 0) {
      iVar8 = 0;
    }
    FUN_1400020e8(local_2ad8,local_1620,iVar8);
    if (local_1620 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (local_23a0 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (local_2ac8[0] != 0) {
      FUN_1400020a8();
    }
  }
  FUN_140a53a96(local_328);
  FUN_140a562d0(local_658);
  local_2b20 = 0x4040000040400000;
  uStack_2b18 = 0x4040000040400000;
  local_2b10 = 1;
  local_2b08 = 0;
  uStack_2b00 = 0;
  local_488 = 1;
  local_498 = 0x40400000;
  uStack_494 = 0x40400000;
  uStack_490 = 0x40400000;
  uStack_48c = 0x40400000;
  FUN_144a450dc(local_480,&local_2b08);
  FUN_1449db362(&local_2b08);
  FUN_1446ddc76(&local_2b48,"ToolPanel.GroupBorder",1);
  plVar10 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar10 == (longlong *)0x0) {
    plVar10 = DAT_14c96b350;
  }
  local_2b40 = (**(code **)(*plVar10 + 0x50))(plVar10,local_2b48,0,0);
  local_2b38 = 1;
  local_2b30 = 0;
  uStack_2b28 = 0;
  local_428 = 1;
  local_430 = local_2b40;
  FUN_144a450dc(local_420,&local_2b30);
  FUN_1449db362(&local_2b30);
  FUN_1407679b0(local_810);
  FUN_145aafb3e(local_8d0);
  lVar11 = FUN_145aaf900(local_8d0);
  local_1620 = (code *)0x4000000040000000;
  uStack_1618 = 0x4000000040000000;
  local_1610 = 1;
  local_1608 = 0;
  uStack_1600 = 0;
  *(undefined1 *)(lVar11 + 0x28) = 1;
  *(undefined4 *)(lVar11 + 0x18) = 0x40000000;
  *(undefined4 *)(lVar11 + 0x1c) = 0x40000000;
  *(undefined4 *)(lVar11 + 0x20) = 0x40000000;
  *(undefined4 *)(lVar11 + 0x24) = 0x40000000;
  FUN_144a450dc(lVar11 + 0x30,&local_1608);
  FUN_1449db362(&local_1608);
  FUN_140a5296a(local_a88);
  FUN_140a50426(local_b48);
  uVar12 = FUN_140a52578(local_b48);
  FUN_145ab3d24(local_eb8);
  local_cf0 = &DAT_200000002;
  local_b98 = 0;
  FUN_1446ddc76(&local_2ba0,"NoBorder",1);
  plVar10 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar10 == (longlong *)0x0) {
    plVar10 = DAT_14c96b350;
  }
  local_d00 = FUN_141492734(plVar10,local_2ba0,0,0);
  lVar15 = local_3118;
  local_2ac8[0] = CONCAT44(local_2ac8[0]._4_4_,1);
  local_23a0 = FUN_1493f496a;
  uStack_2398 = (ulonglong)uStack_2398._4_4_ << 0x20;
  FUN_1494303ec(&local_1620,local_3118);
  FUN_144a450dc(local_c98,&local_1620);
  FUN_1449db362(&local_1620);
  FUN_140a53334(local_10f0);
  local_1620 = FUN_1493f49e0;
  uStack_1618 = uStack_1618 & 0xffffffff00000000;
  FUN_1493f5108(local_10f0,lVar15,&local_1620,1);
  local_3128 = &local_2bc9;
  FUN_140a554b8(local_2bc8,"SImage",
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x815);
  FUN_140a52c70(local_2bc8,&local_2bb0,local_10f0);
  plVar3 = local_d08;
  plVar10 = local_2ba8;
  if (local_2ba8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2ba8 + 1) = (int)local_2ba8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_2ba8 + 1) = (int)local_2ba8[1] + 1;
    UNLOCK();
  }
  local_d10 = local_2bb0;
  local_d08 = local_2ba8;
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
  local_3128 = &local_2be9;
  local_3100 = param_2;
  FUN_145ab3730(local_2be8,"SButton",
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x80e);
  FUN_145ab34ca(local_2be8,&local_2b98,local_eb8);
  local_2b88 = local_2b98;
  local_2b80 = local_2b90;
  if (local_2b90 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2b90 + 1) = (int)local_2b90[1] + 1;
    UNLOCK();
  }
  local_3108 = plVar10;
  uVar12 = FUN_140a4fe8e(uVar12,&local_2b88);
  uVar12 = FUN_140a52392(local_a88,uVar12);
  FUN_140a50426(local_11b0);
  uVar13 = FUN_140a52578(local_11b0);
  FUN_140a570d8(&local_1620);
  FUN_1446ddc76(&local_2cf0,"DetailsView.CategoryFontStyle",1);
  plVar10 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar10 == (longlong *)0x0) {
    plVar10 = DAT_14c96b350;
  }
  (**(code **)(*plVar10 + 0x88))(plVar10,local_2ce8,local_2cf0,0);
  FUN_144a87366(local_2c88,local_2ce8);
  local_2c28 = 1;
  local_2c20 = 0;
  uStack_2c18 = 0;
  FUN_1412cc59c(local_1448,local_2c88);
  local_13e8 = local_2c28;
  FUN_144a450dc(local_13e0,&local_2c20);
  FUN_141515cba(local_2c88);
  local_23a0 = (code *)0x14bcc0030;
  uStack_2398._0_4_ = 0x18;
  FUN_1446e940c(local_2d2c,&local_23a0);
  local_23a0 = (code *)0x14bcbfd42;
  uStack_2398 = CONCAT44(uStack_2398._4_4_,0x2e);
  FUN_1446e940c(local_2d30,&local_23a0);
  FUN_140208bae(local_2d28,local_2d30,local_2d2c,L"References");
  FUN_14023423e(local_2d18,local_2d28);
  local_2d08 = 1;
  local_2d00 = 0;
  uStack_2cf8 = 0;
  uVar14 = FUN_140a54906(&local_1620,local_2d18);
  local_3128 = &local_2d49;
  FUN_140a54526(local_2d48,"STextBlock",
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x81b);
  FUN_140a52852(local_2d48,&local_2c10,uVar14);
  local_2c00 = local_2c10;
  local_2bf8 = local_2c08;
  if (local_2c08 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2c08 + 1) = (int)local_2c08[1] + 1;
    UNLOCK();
  }
  uVar13 = FUN_140a4fe8e(uVar13,&local_2c00);
  uVar12 = FUN_140a52392(uVar12,uVar13);
  local_3128 = &local_2d69;
  FUN_140a541dc(local_2d68,"SHorizontalBox",
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x80a);
  FUN_140a50ec6(local_2d68,&local_2b78,uVar12);
  local_2b68 = local_2b78;
  plStack_2b60 = local_2b70;
  if (local_2b70 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2b70 + 1) = (int)local_2b70[1] + 1;
    UNLOCK();
  }
  uVar12 = FUN_145aaf878(lVar11,&local_2b68);
  local_3110 = FUN_145aaf822(local_810,uVar12);
  FUN_145aafb3e(local_16e0);
  local_2d88 = 0x3f800000;
  local_2d84 = 1;
  local_2d80 = 0;
  uStack_2d78 = 0;
  lVar11 = FUN_140767d84(local_16e0);
  local_23a0 = (code *)0x4000000040000000;
  uStack_2398 = 0x4000000040000000;
  local_2390 = 1;
  local_2388 = 0;
  uStack_2380 = 0;
  *(undefined1 *)(lVar11 + 0x28) = 1;
  *(undefined4 *)(lVar11 + 0x18) = 0x40000000;
  *(undefined4 *)(lVar11 + 0x1c) = 0x40000000;
  *(undefined4 *)(lVar11 + 0x20) = 0x40000000;
  *(undefined4 *)(lVar11 + 0x24) = 0x40000000;
  FUN_144a450dc(lVar11 + 0x30,&local_2388);
  FUN_1449db362(&local_2388);
  FUN_140a53a96(local_1988);
  local_2dd4 = 1;
  local_23a0 = (code *)&LAB_1493f49ba;
  uStack_2398 = uStack_2398 & 0xffffffff00000000;
  FUN_1493f51c6(local_2dd0,local_3118,&local_23a0);
  local_2dc0 = 0x119;
  local_2db8 = 0;
  local_2db0 = 0;
  FUN_140fe25fc(&local_2db8,local_2dd0);
  local_1918 = local_2dc0;
  FUN_144a450dc(local_1910,&local_2db8);
  FUN_1449db362(&local_2db8);
  FUN_140a562d0(local_1cb8);
  local_2e10 = 0x4040000040400000;
  uStack_2e08 = 0x4040000040400000;
  local_2e00 = 1;
  local_2df8 = 0;
  uStack_2df0 = 0;
  local_1ae8 = 1;
  local_1af8 = 0x40400000;
  uStack_1af4 = 0x40400000;
  uStack_1af0 = 0x40400000;
  uStack_1aec = 0x40400000;
  FUN_144a450dc(auStack_1ae0,&local_2df8);
  FUN_1449db362(&local_2df8);
  FUN_1446ddc76(&local_2e38,"ToolPanel.DarkGroupBorder",1);
  plVar10 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar10 == (longlong *)0x0) {
    plVar10 = DAT_14c96b350;
  }
  local_2e30 = (**(code **)(*plVar10 + 0x50))(plVar10,local_2e38,0,0);
  local_2e28 = 1;
  local_2e20 = 0;
  uStack_2e18 = 0;
  local_1a88 = 1;
  local_1a90 = local_2e30;
  FUN_144a450dc(local_1a80,&local_2e20);
  FUN_1449db362(&local_2e20);
  FUN_1407679b0(local_1e70);
  FUN_145aafb3e(local_1f30);
  lVar15 = FUN_145aaf900(local_1f30);
  local_23a0 = (code *)0x4000000040000000;
  uStack_2398 = 0x4000000040000000;
  local_2390 = 1;
  local_2388 = 0;
  uStack_2380 = 0;
  *(undefined1 *)(lVar15 + 0x28) = 1;
  *(undefined4 *)(lVar15 + 0x18) = 0x40000000;
  *(undefined4 *)(lVar15 + 0x1c) = 0x40000000;
  *(undefined4 *)(lVar15 + 0x20) = 0x40000000;
  *(undefined4 *)(lVar15 + 0x24) = 0x40000000;
  FUN_144a450dc(lVar15 + 0x30,&local_2388);
  FUN_1449db362(&local_2388);
  FUN_140a570d8(&local_23a0);
  FUN_1446ddc76(&local_2f48,"DetailsView.CategoryFontStyle",1);
  plVar10 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar10 == (longlong *)0x0) {
    plVar10 = DAT_14c96b350;
  }
  (**(code **)(*plVar10 + 0x88))(plVar10,local_2f40,local_2f48,0);
  FUN_144a87366(local_2ee0,local_2f40);
  local_2e80 = 1;
  local_2e78 = 0;
  uStack_2e70 = 0;
  FUN_1412cc59c(auStack_21c8,local_2ee0);
  local_2168 = local_2e80;
  FUN_144a450dc(local_2160,&local_2e78);
  FUN_141515cba(local_2ee0);
  FUN_140009b9a(local_2f80,local_2ad8);
  FUN_14023423e(local_2f70,local_2f80);
  local_2f60 = 1;
  local_2f58 = 0;
  uStack_2f50 = 0;
  uVar12 = FUN_140a54906(&local_23a0,local_2f70);
  local_3128 = &local_2f99;
  FUN_140a54526(local_2f98,"STextBlock",
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x830);
  FUN_140a52852(local_2f98,&local_2e68,uVar12);
  local_2e58 = local_2e68;
  local_2e50 = local_2e60;
  if (local_2e60 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2e60 + 1) = (int)local_2e60[1] + 1;
    UNLOCK();
  }
  uVar12 = FUN_145aaf878(lVar15,&local_2e58);
  uVar12 = FUN_145aaf822(local_1e70,uVar12);
  FUN_145aafb3e(local_2460);
  lVar15 = FUN_145aaf900(local_2460);
  local_2ac8[0] = 0x4000000040000000;
  local_2ac8[1] = 0x4000000040000000;
  local_2ab8 = 1;
  local_2ab0 = 0;
  uStack_2aa8 = 0;
  *(undefined1 *)(lVar15 + 0x28) = 1;
  *(undefined4 *)(lVar15 + 0x18) = 0x40000000;
  *(undefined4 *)(lVar15 + 0x1c) = 0x40000000;
  *(undefined4 *)(lVar15 + 0x20) = 0x40000000;
  *(undefined4 *)(lVar15 + 0x24) = 0x40000000;
  FUN_144a450dc(lVar15 + 0x30,&local_2ab0);
  FUN_1449db362(&local_2ab0);
  FUN_146a11c40(local_2640);
  local_2490 = 0;
  local_3128 = &local_2fd9;
  FUN_146a40596(local_2fd8,"SSeparator",
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x838);
  FUN_146a11d06(local_2fd8,&local_2fc0,local_2640);
  local_2fb0 = local_2fc0;
  local_2fa8 = local_2fb8;
  if (local_2fb8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2fb8 + 1) = (int)local_2fb8[1] + 1;
    UNLOCK();
  }
  lVar7 = local_3118 + 0x278;
  uVar13 = FUN_145aaf878(lVar15,&local_2fb0);
  uVar12 = FUN_145aaf822(uVar12,uVar13);
  FUN_145aafb3e(local_2700);
  local_2ff8 = 0x3f800000;
  local_2ff4 = 1;
  local_2ff0 = 0;
  uStack_2fe8 = 0;
  lVar15 = FUN_140767d84(local_2700);
  local_2ac8[0] = 0x4000000040000000;
  local_2ac8[1] = 0x4000000040000000;
  local_2ab8 = 1;
  local_2ab0 = 0;
  uStack_2aa8 = 0;
  *(undefined1 *)(lVar15 + 0x28) = 1;
  *(undefined4 *)(lVar15 + 0x18) = 0x40000000;
  *(undefined4 *)(lVar15 + 0x1c) = 0x40000000;
  *(undefined4 *)(lVar15 + 0x20) = 0x40000000;
  *(undefined4 *)(lVar15 + 0x24) = 0x40000000;
  FUN_144a450dc(lVar15 + 0x30,&local_2ab0);
  FUN_1449db362(&local_2ab0);
  FUN_146a871f6(local_2ac8);
  plVar10 = local_2890;
  local_28a8 = 0;
  uStack_28a0 = 0;
  local_2898 = 0;
  if (local_2890 != (longlong *)0x0) {
    local_2890 = (longlong *)0x0;
    LOCK();
    plVar3 = plVar10 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  local_3050 = FUN_1493f530e;
  local_3048 = 0;
  local_28a8 = lVar7;
  FUN_14943117a(local_3030,local_3118);
  FUN_144a450dc(local_2918,local_3030);
  FUN_1449db362(local_3030);
  local_3128 = &local_3031;
  FUN_146aa8062(local_3030,"SListView<TSharedPtr<FString>>",
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x840);
  FUN_146a8745a(local_3030,&local_3018,local_2ac8);
  local_3008 = local_3018;
  local_3000 = local_3010;
  if (local_3010 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_3010 + 1) = (int)local_3010[1] + 1;
    UNLOCK();
  }
  uVar13 = FUN_145aaf878(lVar15,&local_3008);
  uVar12 = FUN_145aaf822(uVar12,uVar13);
  local_3128 = &local_3051;
  FUN_14076837c(&local_3050,"SVerticalBox",
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x82b);
  FUN_14076784c(&local_3050,&local_2e48,uVar12);
  plVar3 = local_1b08;
  plVar10 = local_2e40;
  puVar9 = local_3100;
  if (local_2e40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2e40 + 1) = (int)local_2e40[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_2e40 + 1) = (int)local_2e40[1] + 1;
    UNLOCK();
  }
  local_1b10 = local_2e48;
  local_1b08 = local_2e40;
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
  local_3128 = &local_3071;
  FUN_140a55c32(local_3070,"SBorder",
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x827);
  FUN_140a530e4(local_3070,&local_2de8,local_1cb8);
  plVar1 = local_17a8;
  plVar3 = local_2de0;
  if (local_2de0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2de0 + 1) = (int)local_2de0[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_2de0 + 1) = (int)local_2de0[1] + 1;
    UNLOCK();
  }
  local_17b0 = local_2de8;
  local_17a8 = local_2de0;
  if (plVar1 != (longlong *)0x0) {
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
  local_3128 = &local_3091;
  FUN_140a53d66(local_3090,&DAT_149efe19f,
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x824);
  FUN_140a50bf4(local_3090,&local_2da8,local_1988);
  local_2d98 = local_2da8;
  local_2d90 = local_2da0;
  if (local_2da0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2da0 + 1) = (int)local_2da0[1] + 1;
    UNLOCK();
  }
  uVar12 = FUN_145aaf878(lVar11,&local_2d98);
  uVar12 = FUN_145aaf822(local_3110,uVar12);
  local_3128 = &local_30b1;
  FUN_14076837c(local_30b0,"SVerticalBox",
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x805);
  FUN_14076784c(local_30b0,&local_2b58,uVar12);
  plVar4 = local_4a8;
  plVar1 = local_2b50;
  if (local_2b50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2b50 + 1) = (int)local_2b50[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_2b50 + 1) = (int)local_2b50[1] + 1;
    UNLOCK();
  }
  local_4b0 = local_2b58;
  local_4a8 = local_2b50;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  local_3128 = &local_30d1;
  FUN_140a55c32(local_30d0,"SBorder",
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x801);
  FUN_140a530e4(local_30d0,&local_2af8,local_658);
  plVar5 = local_148;
  plVar4 = local_2af0;
  if (local_2af0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2af0 + 1) = (int)local_2af0[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_2af0 + 1) = (int)local_2af0[1] + 1;
    UNLOCK();
  }
  local_150 = local_2af8;
  local_148 = local_2af0;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  local_3128 = &local_30f1;
  FUN_140a53d66(local_30f0,&DAT_149efe19f,
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x7ff);
  FUN_140a50bf4(local_30f0,&local_2ae8,local_328);
  *puVar9 = local_2ae8;
  puVar9[1] = local_2ae0;
  if (local_2ae0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2ae0 + 1) = (int)local_2ae0[1] + 1;
    UNLOCK();
    if (local_2ae0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_2ae0 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_2ae0)(local_2ae0);
        LOCK();
        piVar2 = (int *)((longlong)local_2ae0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_2ae0 + 0x10))(local_2ae0);
        }
      }
    }
  }
  plVar5 = local_3108;
  if (local_30e8 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_30e8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_30e8)(local_30e8);
      LOCK();
      piVar2 = (int *)((longlong)local_30e8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30e8 + 0x10))(local_30e8);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar4 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if (local_2af0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_2af0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_2af0)(local_2af0);
      LOCK();
      piVar2 = (int *)((longlong)local_2af0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2af0 + 0x10))(local_2af0);
      }
    }
  }
  if (local_30c8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30c8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_30c8)(local_30c8);
      LOCK();
      piVar2 = (int *)((longlong)local_30c8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30c8 + 0x10))(local_30c8);
      }
    }
  }
  if (plVar1 != (longlong *)0x0) {
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
  if (local_2b50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_2b50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_2b50)(local_2b50);
      LOCK();
      piVar2 = (int *)((longlong)local_2b50 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2b50 + 0x10))(local_2b50);
      }
    }
  }
  if (local_30a8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30a8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30a8)(local_30a8);
      LOCK();
      piVar2 = (int *)((longlong)local_30a8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30a8 + 0x10))(local_30a8);
      }
    }
  }
  plVar1 = local_2d90;
  if (local_2d90 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_2d90 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_2d90)(local_2d90);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (local_2da0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_2da0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_2da0)(local_2da0);
      LOCK();
      piVar2 = (int *)((longlong)local_2da0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2da0 + 0x10))(local_2da0);
      }
    }
  }
  if (local_3088 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_3088 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_3088)(local_3088);
      LOCK();
      piVar2 = (int *)((longlong)local_3088 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_3088 + 0x10))(local_3088);
      }
    }
  }
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
  if (local_2de0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2de0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_2de0)(local_2de0);
      LOCK();
      piVar2 = (int *)((longlong)local_2de0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2de0 + 0x10))(local_2de0);
      }
    }
  }
  if (local_3068 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_3068 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_3068)(local_3068);
      LOCK();
      piVar2 = (int *)((longlong)local_3068 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_3068 + 0x10))(local_3068);
      }
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar10 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if (local_2e40 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_2e40 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_2e40)(local_2e40);
      LOCK();
      piVar2 = (int *)((longlong)local_2e40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2e40 + 0x10))(local_2e40);
      }
    }
  }
  plVar10 = (longlong *)CONCAT44(uStack_3044,local_3048);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar10 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  plVar10 = local_3000;
  if (local_3000 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_3000 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_3000)(local_3000);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if (local_3010 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_3010 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_3010)(local_3010);
      LOCK();
      piVar2 = (int *)((longlong)local_3010 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_3010 + 0x10))(local_3010);
      }
    }
  }
  if (local_3028 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_3028 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_3028)(local_3028);
      LOCK();
      piVar2 = (int *)((longlong)local_3028 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_3028 + 0x10))(local_3028);
      }
    }
  }
  FUN_146a874ce(local_2ac8);
  FUN_140767f30(local_2700);
  plVar10 = local_2fa8;
  if (local_2fa8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2fa8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_2fa8)(local_2fa8);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if (local_2fb8 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_2fb8 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_2fb8)(local_2fb8);
      LOCK();
      piVar2 = (int *)((longlong)local_2fb8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2fb8 + 0x10))(local_2fb8);
      }
    }
  }
  if (local_2fd0 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_2fd0 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_2fd0)(local_2fd0);
      LOCK();
      piVar2 = (int *)((longlong)local_2fd0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2fd0 + 0x10))(local_2fd0);
      }
    }
  }
  FUN_1449db362(local_2470);
  FUN_140a4ff8c(local_2640);
  FUN_140767f30(local_2460);
  plVar10 = local_2e50;
  if (local_2e50 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2e50 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_2e50)(local_2e50);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if (local_2e60 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_2e60 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_2e60)(local_2e60);
      LOCK();
      piVar2 = (int *)((longlong)local_2e60 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2e60 + 0x10))(local_2e60);
      }
    }
  }
  if (local_2f90 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_2f90 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_2f90)(local_2f90);
      LOCK();
      piVar2 = (int *)((longlong)local_2f90 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2f90 + 0x10))(local_2f90);
      }
    }
  }
  if (local_2f80[0] != (longlong *)0x0) {
    (**(code **)(*local_2f80[0] + 0x10))();
  }
  if (local_2f08 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_2f08 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_2f08)(local_2f08);
      LOCK();
      piVar2 = (int *)((longlong)local_2f08 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2f08 + 0x10))(local_2f08);
      }
    }
  }
  FUN_140a59ae6(&local_23a0);
  FUN_140767f30(local_1f30);
  FUN_14149255e(local_1e70);
  FUN_140a59028(local_1cb8);
  FUN_1449db362(local_2dd0);
  FUN_140a5660c(local_1988);
  FUN_140767f30(local_16e0);
  plVar10 = plStack_2b60;
  if (plStack_2b60 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_2b60 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_2b60)(plStack_2b60);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if (local_2b70 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_2b70 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_2b70)(local_2b70);
      LOCK();
      piVar2 = (int *)((longlong)local_2b70 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2b70 + 0x10))(local_2b70);
      }
    }
  }
  if (local_2d60 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_2d60 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_2d60)(local_2d60);
      LOCK();
      piVar2 = (int *)((longlong)local_2d60 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2d60 + 0x10))(local_2d60);
      }
    }
  }
  plVar10 = local_2bf8;
  if (local_2bf8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2bf8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_2bf8)(local_2bf8);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if (local_2c08 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_2c08 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_2c08)(local_2c08);
      LOCK();
      piVar2 = (int *)((longlong)local_2c08 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2c08 + 0x10))(local_2c08);
      }
    }
  }
  if (plStack_2d40 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_2d40 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plStack_2d40)(plStack_2d40);
      LOCK();
      piVar2 = (int *)((longlong)plStack_2d40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plStack_2d40 + 0x10))(plStack_2d40);
      }
    }
  }
  if (local_2d28[0] != (longlong *)0x0) {
    (**(code **)(*local_2d28[0] + 0x10))();
  }
  if (plStack_2cb0 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_2cb0 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plStack_2cb0)(plStack_2cb0);
      LOCK();
      piVar2 = (int *)((longlong)plStack_2cb0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plStack_2cb0 + 0x10))(plStack_2cb0);
      }
    }
  }
  FUN_140a59ae6(&local_1620);
  FUN_140a509a6(local_11b0);
  plVar10 = local_2b80;
  if (local_2b80 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2b80 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_2b80)(local_2b80);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if (local_2b90 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_2b90 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_2b90)(local_2b90);
      LOCK();
      piVar2 = (int *)((longlong)local_2b90 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2b90 + 0x10))(local_2b90);
      }
    }
  }
  if (local_2be0 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_2be0 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_2be0)(local_2be0);
      LOCK();
      piVar2 = (int *)((longlong)local_2be0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2be0 + 0x10))(local_2be0);
      }
    }
  }
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
  if (local_2ba8 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_2ba8 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_2ba8)(local_2ba8);
      LOCK();
      piVar2 = (int *)((longlong)local_2ba8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2ba8 + 0x10))(local_2ba8);
      }
    }
  }
  if (local_2bc0 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_2bc0 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_2bc0)(local_2bc0);
      LOCK();
      piVar2 = (int *)((longlong)local_2bc0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2bc0 + 0x10))(local_2bc0);
      }
    }
  }
  FUN_140a55a86(local_10f0);
  FUN_145ab35f4(local_eb8);
  FUN_140a509a6(local_b48);
  FUN_145ab33da(local_a88);
  FUN_140767f30(local_8d0);
  FUN_14149255e(local_810);
  FUN_140a59028(local_658);
  FUN_140a5660c(local_328);
  if (local_2ad8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_3148) == DAT_14c707940) {
    return puVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493f4418 FUN_1493f4418 body=81 status=ok
// SIG undefined FUN_1493f4418(void)

longlong FUN_1493f4418(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1b0);
  *(uint *)(param_1 + 0x1b0) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1b4) < iVar1 + 1U) {
    FUN_14940303c(param_1 + 0x1a8,iVar1);
  }
  FUN_149402f58((longlong)iVar1 * 0x78 + *(longlong *)(param_1 + 0x1a8),param_2);
  return param_1;
}



// FUNCTION 1493f446a FUN_1493f446a body=86 status=ok
// SIG undefined FUN_1493f446a(void)

undefined1 * FUN_1493f446a(longlong param_1,undefined1 *param_2)

{
  if (*(longlong *)(param_1 + 0x268) != 0) {
    FUN_14698158e();
  }
  *param_2 = 1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 1493f44c0 FUN_1493f44c0 body=337 status=ok
// SIG undefined FUN_1493f44c0(void)

void FUN_1493f44c0(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*(longlong *)*param_1 + 0x2f0))((longlong *)*param_1,param_2,0);
  lVar4 = (longlong)*(int *)(*param_2 + 0x40);
  if (lVar4 != 0) {
    puVar6 = *(undefined8 **)(*param_2 + 0x38);
    puVar5 = puVar6 + lVar4 * 2;
    do {
      local_50 = *puVar6;
      plVar3 = (longlong *)puVar6[1];
      if (plVar3 == (longlong *)0x0) {
        local_48 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        local_48 = plVar3;
      }
      local_60 = *param_1;
      local_58 = param_1[1];
      if (local_58 != 0) {
        LOCK();
        *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
        UNLOCK();
      }
      FUN_1493f44c0(&local_60,&local_50);
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
      puVar6 = puVar6 + 2;
    } while (puVar6 != puVar5);
  }
  plVar3 = (longlong *)param_1[1];
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
  plVar3 = (longlong *)param_2[1];
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
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493f4612 FUN_1493f4612 body=363 status=ok
// SIG undefined FUN_1493f4612(void)

void FUN_1493f4612(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(char *)(*param_2 + 0x22) == '\x01') && (*(char *)(*param_2 + 0x24) == '\x01')) {
    (**(code **)(*(longlong *)*param_1 + 0x2f0))((longlong *)*param_1,param_2,1);
    lVar4 = (longlong)*(int *)(*param_2 + 0x40);
    if (lVar4 != 0) {
      puVar6 = *(undefined8 **)(*param_2 + 0x38);
      puVar5 = puVar6 + lVar4 * 2;
      do {
        local_50 = *puVar6;
        plVar3 = (longlong *)puVar6[1];
        if (plVar3 == (longlong *)0x0) {
          local_48 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          local_48 = plVar3;
        }
        local_60 = *param_1;
        local_58 = param_1[1];
        if (local_58 != 0) {
          LOCK();
          *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
          UNLOCK();
        }
        FUN_1493f4612(&local_60,&local_50);
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
        puVar6 = puVar6 + 2;
      } while (puVar6 != puVar5);
    }
  }
  plVar3 = (longlong *)param_1[1];
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
  plVar3 = (longlong *)param_2[1];
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
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493f477e FUN_1493f477e body=491 status=ok
// SIG undefined FUN_1493f477e(void)

undefined1 * FUN_1493f477e(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((longlong)*(int *)(param_1 + 0x290) != 0) {
    puVar5 = *(undefined8 **)(param_1 + 0x288);
    puVar4 = puVar5 + (longlong)*(int *)(param_1 + 0x290) * 2;
    do {
      local_50 = *puVar5;
      plVar3 = (longlong *)puVar5[1];
      if (plVar3 == (longlong *)0x0) {
        local_48 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        local_48 = plVar3;
      }
      local_60 = *(undefined8 *)(param_1 + 0x2a8);
      local_58 = *(longlong *)(param_1 + 0x2b0);
      if (local_58 != 0) {
        LOCK();
        *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
        UNLOCK();
      }
      FUN_1493f44c0(&local_60);
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
      puVar5 = puVar5 + 2;
    } while (puVar5 != puVar4);
    if ((longlong)*(int *)(param_1 + 0x290) != 0) {
      puVar5 = *(undefined8 **)(param_1 + 0x288);
      puVar4 = puVar5 + (longlong)*(int *)(param_1 + 0x290) * 2;
      do {
        local_70 = *puVar5;
        plVar3 = (longlong *)puVar5[1];
        if (plVar3 == (longlong *)0x0) {
          local_68 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          local_68 = plVar3;
        }
        local_80 = *(undefined8 *)(param_1 + 0x2a8);
        local_78 = *(longlong *)(param_1 + 0x2b0);
        if (local_78 != 0) {
          LOCK();
          *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
          UNLOCK();
        }
        FUN_1493f4612(&local_80);
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
        puVar5 = puVar5 + 2;
      } while (puVar5 != puVar4);
    }
  }
  *param_2 = 1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493f496a FUN_1493f496a body=80 status=ok
// SIG undefined FUN_1493f496a(void)

undefined1 * FUN_1493f496a(longlong param_1,undefined1 *param_2,int param_3)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(param_1 + 0x2a0 + (longlong)param_3);
  *pbVar1 = *pbVar1 ^ 1;
  *param_2 = 1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 1493f49e0 FUN_1493f49e0 body=147 status=ok
// SIG undefined FUN_1493f49e0(void)

void FUN_1493f49e0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x2a0 + (longlong)param_2) == '\x01') {
    pcVar3 = "Symbols.DownArrow";
    puVar4 = &local_18;
  }
  else {
    pcVar3 = "Symbols.RightArrow";
    puVar4 = &local_20;
  }
  FUN_1446ddc76(puVar4,pcVar3,1);
  uVar1 = *puVar4;
  plVar2 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = DAT_14c96b350;
  }
  (**(code **)(*plVar2 + 0x50))(plVar2,uVar1,0,0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493f4a74 FUN_1493f4a74 body=576 status=ok
// SIG undefined FUN_1493f4a74(void)

longlong FUN_1493f4a74(longlong param_1)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5071c();
  lVar3 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar3 == 0) {
    lVar3 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_30,"TreeView",1);
  uVar5 = 0;
  uVar4 = FUN_1458178ee(lVar3,local_30,0,0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar4;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1cc) = 0;
  *(undefined8 *)(param_1 + 0x1d4) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x23d) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 600) = 6;
  *(undefined1 *)(param_1 + 0x25c) = 1;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined4 *)(param_1 + 0x2e0) = 3;
  *(undefined1 *)(param_1 + 0x2e4) = 1;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined1 *)(param_1 + 0x308) = 1;
  *(undefined1 *)(param_1 + 0x330) = 0;
  *(undefined2 *)(param_1 + 0x338) = 0;
  *(undefined1 *)(param_1 + 0x33a) = 0;
  *(undefined8 *)(param_1 + 0x310) = 0;
  *(undefined8 *)(param_1 + 0x318) = 0;
  *(undefined1 *)(param_1 + 800) = 0;
  lVar3 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar3 == 0) {
    lVar3 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_38,"ScrollBar",1);
  uVar4 = FUN_145817968(lVar3,local_38,0,0);
  *(undefined8 *)(param_1 + 0x340) = uVar4;
  *(undefined1 *)(param_1 + 0x348) = 0;
  lVar3 = DAT_14c96b2f0;
  cVar1 = FUN_144a8728e();
  if (cVar1 == '\0') {
    bVar2 = FUN_144a61b4f();
    uVar5 = (ulonglong)(bVar2 ^ 1);
  }
  *(undefined4 *)(param_1 + 0x34c) = *(undefined4 *)(lVar3 + uVar5 * 4);
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 0x358) = 0;
  *(undefined8 *)(param_1 + 0x360) = 0;
  *(undefined8 *)(param_1 + 0x368) = 0;
  *(undefined4 *)(param_1 + 0x370) = 0x101;
  *(undefined1 *)(param_1 + 0x374) = 0;
  *(undefined2 *)(param_1 + 0x378) = 0x100;
  *(undefined8 *)(param_1 + 0x380) = 0;
  *(undefined8 *)(param_1 + 0x388) = 0;
  *(undefined8 *)(param_1 + 0x38c) = 0;
  *(undefined8 *)(param_1 + 0x394) = 0;
  *(undefined1 *)(param_1 + 0xa2) = 1;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493f4cb6 FUN_1493f4cb6 body=322 status=ok
// SIG undefined FUN_1493f4cb6(void)

undefined8 *
FUN_1493f4cb6(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_248 [40];
  undefined8 local_220;
  undefined1 local_218 [8];
  longlong *local_210;
  undefined8 local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  longlong *local_1e8;
  undefined1 local_1e0 [440];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_248;
  FUN_1493f57f4(local_1e0);
  local_200 = *param_3;
  local_1f8 = param_3[1];
  if (local_1f8 != 0) {
    LOCK();
    *(int *)(local_1f8 + 8) = *(int *)(local_1f8 + 8) + 1;
    UNLOCK();
  }
  FUN_1493f5814(local_1e0,&local_200);
  local_220 = param_4;
  FUN_14943175e(local_218);
  FUN_1493f589a(local_218,&local_1f0,local_1e0);
  if (local_210 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_210 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_210)(local_210);
      LOCK();
      piVar1 = (int *)((longlong)local_210 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_210 + 0x10))(local_210);
      }
    }
  }
  FUN_1493f591a(local_1e0);
  *param_2 = local_1f0;
  param_2[1] = local_1e8;
  if (local_1e8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1e8 + 1) = (int)local_1e8[1] + 1;
    UNLOCK();
    if (local_1e8 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_1e8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_1e8)(local_1e8);
        LOCK();
        piVar1 = (int *)((longlong)local_1e8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_1e8 + 0x10))(local_1e8);
        }
      }
    }
  }
  plVar3 = (longlong *)param_3[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493f4dfa FUN_1493f4dfa body=252 status=ok
// SIG undefined FUN_1493f4dfa(void)

void FUN_1493f4dfa(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar6 = *param_2;
  if (0 < *(int *)(lVar6 + 0x40)) {
    lVar8 = 8;
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(lVar6 + 0x38) + -8 + lVar8);
      plVar5 = *(longlong **)(*(longlong *)(lVar6 + 0x38) + lVar8);
      if (plVar5 == (longlong *)0x0) {
        if (lVar4 != 0) goto LAB_1493f4e40;
      }
      else {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        if (lVar4 != 0) {
LAB_1493f4e40:
          iVar3 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
            FUN_1494039be(param_3,iVar3);
          }
          lVar6 = *param_3;
          *(longlong *)(lVar6 + (longlong)iVar3 * 0x10) = lVar4;
          *(longlong **)(lVar6 + 8 + (longlong)iVar3 * 0x10) = plVar5;
          if (plVar5 == (longlong *)0x0) goto LAB_1493f4e86;
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
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
LAB_1493f4e86:
      lVar7 = lVar7 + 1;
      lVar6 = *param_2;
      lVar8 = lVar8 + 0x10;
    } while (lVar7 < *(int *)(lVar6 + 0x40));
  }
  plVar5 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x0001493f4ee1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1493f4ef6 FUN_1493f4ef6 body=115 status=ok
// SIG undefined FUN_1493f4ef6(void)

longlong * FUN_1493f4ef6(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_14942e412(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 1493f4f6a FUN_1493f4f6a body=414 status=ok
// SIG undefined FUN_1493f4f6a(void)

void FUN_1493f4f6a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1449db362(param_1 + 0x390);
  FUN_1449db362(param_1 + 0x380);
  FUN_1449db362(param_1 + 0x360);
  FUN_1449db362(param_1 + 0x350);
  if (*(char *)(param_1 + 0x330) == '\x01') {
    *(undefined1 *)(param_1 + 0x330) = 0;
  }
  plVar3 = *(longlong **)(param_1 + 0x318);
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
  plVar3 = *(longlong **)(param_1 + 0x300);
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
  FUN_1449db362(param_1 + 0x2e8);
  FUN_1449db362(param_1 + 0x2d0);
  FUN_1449db362(param_1 + 0x2c0);
  FUN_1449db362(param_1 + 0x2b0);
  FUN_1449db362(param_1 + 0x2a0);
  FUN_1449db362(param_1 + 0x290);
  FUN_1449db362(param_1 + 0x280);
  FUN_1449db362(param_1 + 0x270);
  FUN_1449db362(param_1 + 0x260);
  FUN_1449db362(param_1 + 0x248);
  plVar3 = *(longlong **)(param_1 + 0x238);
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
  FUN_1449db362(param_1 + 0x210);
  FUN_1449db362(param_1 + 0x200);
  FUN_1449db362(param_1 + 0x1f0);
  FUN_1449db362(param_1 + 0x1e0);
  FUN_1449db362(param_1 + 0x1d0);
  FUN_1449db362(param_1 + 0x1c0);
  FUN_1449db362(param_1 + 0x1b0);
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 1493f5108 FUN_1493f5108 body=189 status=ok
// SIG undefined FUN_1493f5108(void)

longlong FUN_1493f5108(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *(undefined4 *)(param_3 + 1);
  local_48 = *param_3;
  local_24 = param_4;
  FUN_1494308fc(local_58,param_2,&local_48,&local_24);
  local_48 = 0;
  local_40 = CONCAT31(local_40._1_3_,1);
  local_38 = 0;
  local_30 = 0;
  FUN_140a5c3e8(&local_38,local_58);
  *(undefined1 *)(param_1 + 0x1b0) = (undefined1)local_40;
  *(undefined8 *)(param_1 + 0x1a8) = local_48;
  FUN_144a450dc(param_1 + 0x1b8,&local_38);
  FUN_1449db362(&local_38);
  FUN_1449db362(local_58);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493f51c6 FUN_1493f51c6 body=327 status=ok
// SIG undefined FUN_1493f51c6(void)

longlong * FUN_1493f51c6(longlong *param_1,longlong param_2,undefined8 *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar10 = *(longlong **)(param_2 + 0x10);
  bVar6 = true;
  if (plVar10 == (longlong *)0x0) {
LAB_1493f5248:
    uVar11 = 0;
    plVar10 = (longlong *)0x0;
  }
  else {
    iVar8 = (int)plVar10[1];
    do {
      if (iVar8 == 0) goto LAB_1493f5248;
      LOCK();
      iVar7 = (int)plVar10[1];
      bVar12 = iVar8 == iVar7;
      if (bVar12) {
        *(int *)(plVar10 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar12);
    uVar11 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    bVar6 = false;
  }
  *puVar5 = &PTR_LAB_14bcc5140;
  *(undefined4 *)(puVar5 + 1) = *param_4;
  uVar9 = FUN_144a3f946();
  puVar5[2] = uVar9;
  *puVar5 = &PTR_FUN_14bcc50d0;
  puVar5[3] = uVar11;
  puVar5[4] = plVar10;
  if (bVar6) {
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  return param_1;
}



// FUNCTION 1493f530e FUN_1493f530e body=1252 status=ok
// SIG undefined FUN_1493f530e(void)

undefined8 *
FUN_1493f530e(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  char *pcVar7;
  byte bVar8;
  longlong lVar9;
  byte bVar10;
  undefined8 *puVar11;
  undefined1 auStack_b78 [32];
  undefined8 *local_b58;
  undefined8 local_b50;
  undefined1 local_b48 [8];
  longlong *local_b40;
  undefined1 local_b29;
  undefined1 local_b28 [8];
  longlong *local_b20;
  undefined1 local_b09;
  undefined1 local_b08 [8];
  longlong *local_b00;
  longlong *local_af0 [2];
  undefined1 local_ae0 [16];
  undefined1 local_ad0;
  undefined8 local_ac8;
  undefined8 uStack_ac0;
  undefined8 local_ab8;
  longlong *local_ab0;
  undefined8 local_aa8;
  undefined8 local_aa0;
  undefined8 local_a98;
  undefined1 local_a90;
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined8 local_a78;
  longlong *local_a70;
  undefined8 local_a68;
  longlong *local_a60;
  undefined1 local_a58 [1136];
  undefined1 local_5e8 [424];
  undefined8 local_440;
  longlong *local_438;
  undefined8 local_3c0;
  undefined1 local_3b8;
  undefined1 local_3b0 [248];
  undefined1 local_2b8 [600];
  undefined8 local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b78;
  bVar8 = 1;
  if ((longlong)*(int *)(param_1 + 0x280) != 0) {
    lVar9 = 0;
    bVar10 = 0;
    do {
      bVar8 = bVar10;
      if (*(longlong *)(*(longlong *)(param_1 + 0x278) + lVar9) == *param_3) break;
      bVar10 = bVar10 + 1;
      lVar9 = lVar9 + 0x10;
      bVar8 = 1;
    } while ((longlong)*(int *)(param_1 + 0x280) * 0x10 != lVar9);
  }
  FUN_146a878da(local_2b8);
  FUN_140a562d0(local_5e8);
  if ((bool)(bVar8 & 1)) {
    pcVar7 = "ToolPanel.DarkGroupBorder";
    puVar11 = &local_aa8;
  }
  else {
    pcVar7 = "ToolPanel.GroupBorder";
    puVar11 = &local_aa0;
  }
  FUN_1446ddc76(puVar11,pcVar7,1);
  uVar6 = *puVar11;
  plVar5 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar5 == (longlong *)0x0) {
    plVar5 = DAT_14c96b350;
  }
  local_a98 = (**(code **)(*plVar5 + 0x50))(plVar5,uVar6,0,0);
  local_a90 = 1;
  local_a88 = 0;
  uStack_a80 = 0;
  local_3b8 = 1;
  local_3c0 = local_a98;
  FUN_144a450dc(local_3b0,&local_a88);
  FUN_1449db362(&local_a88);
  FUN_140a570d8(local_a58);
  FUN_140009b9a(local_af0,*param_3);
  FUN_14023423e(local_ae0,local_af0);
  local_ad0 = 1;
  local_ac8 = 0;
  uStack_ac0 = 0;
  uVar6 = FUN_140a54906(local_a58,local_ae0);
  local_b58 = (undefined8 *)&local_b09;
  FUN_140a54526(local_b08,"STextBlock",
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x8bf);
  FUN_140a52852(local_b08,&local_ab8,uVar6);
  plVar3 = local_438;
  plVar5 = local_ab0;
  if (local_ab0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_ab0 + 1) = (int)local_ab0[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_ab0 + 1) = (int)local_ab0[1] + 1;
    UNLOCK();
  }
  local_440 = local_ab8;
  local_438 = local_ab0;
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
  local_b58 = (undefined8 *)&local_b29;
  FUN_140a55c32(local_b28,"SBorder",
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x8bc);
  FUN_140a530e4(local_b28,&local_a78,local_5e8);
  plVar1 = local_58;
  plVar3 = local_a70;
  if (local_a70 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_a70 + 1) = (int)local_a70[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_a70 + 1) = (int)local_a70[1] + 1;
    UNLOCK();
  }
  local_60 = local_a78;
  local_58 = local_a70;
  if (plVar1 != (longlong *)0x0) {
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
  local_b58 = &local_b50;
  local_b50 = param_4;
  FUN_146ab8f14(local_b48,"STableRow<TSharedPtr<FString> >",
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x8ba);
  FUN_146a87a42(local_b48,&local_a68,local_2b8);
  *param_2 = local_a68;
  param_2[1] = local_a60;
  if (local_a60 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_a60 + 1) = (int)local_a60[1] + 1;
    UNLOCK();
    if (local_a60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_a60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_a60)(local_a60);
        LOCK();
        piVar2 = (int *)((longlong)local_a60 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_a60 + 0x10))(local_a60);
        }
      }
    }
  }
  if (local_b40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_b40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_b40)(local_b40);
      LOCK();
      piVar2 = (int *)((longlong)local_b40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_b40 + 0x10))(local_b40);
      }
    }
  }
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
  if (local_a70 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_a70 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_a70)(local_a70);
      LOCK();
      piVar2 = (int *)((longlong)local_a70 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_a70 + 0x10))(local_a70);
      }
    }
  }
  if (local_b20 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_b20 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_b20)(local_b20);
      LOCK();
      piVar2 = (int *)((longlong)local_b20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_b20 + 0x10))(local_b20);
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if (local_ab0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_ab0 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_ab0)(local_ab0);
      LOCK();
      piVar2 = (int *)((longlong)local_ab0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_ab0 + 0x10))(local_ab0);
      }
    }
  }
  if (local_b00 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_b00 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_b00)(local_b00);
      LOCK();
      piVar2 = (int *)((longlong)local_b00 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_b00 + 0x10))(local_b00);
      }
    }
  }
  if (local_af0[0] != (longlong *)0x0) {
    (**(code **)(*local_af0[0] + 0x10))();
  }
  FUN_140a59ae6(local_a58);
  FUN_140a59028(local_5e8);
  FUN_146a87af6(local_2b8);
  plVar5 = (longlong *)param_3[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_50 ^ (ulonglong)auStack_b78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1493f57f4 FUN_1493f57f4 body=32 status=ok
// SIG undefined FUN_1493f57f4(void)

longlong FUN_1493f57f4(longlong param_1)

{
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  return param_1;
}



// FUNCTION 1493f5814 FUN_1493f5814 body=133 status=ok
// SIG undefined FUN_1493f5814(void)

longlong FUN_1493f5814(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar3;
  *(longlong *)(param_1 + 0x1b0) = lVar4;
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
  plVar5 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 1493f589a FUN_1493f589a body=128 status=ok
// SIG undefined FUN_1493f589a(void)

longlong * FUN_1493f589a(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1 + 8,param_3);
  FUN_149431a36(*param_1,param_3,*(undefined8 *)param_1[2]);
  lVar1 = *param_1;
  bVar4 = *(byte *)(lVar1 + 0x38);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*(longlong *)(lVar1 + 8) + 0x220))(lVar1 + 8);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(lVar1 + 0x38);
  }
  *(byte *)(lVar1 + 0x38) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x39) = *(byte *)(*param_1 + 0x39) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 1493f591a FUN_1493f591a body=64 status=ok
// SIG undefined FUN_1493f591a(void)

void FUN_1493f591a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x1b0);
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
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 1493f595a FUN_1493f595a body=174 status=ok
// SIG undefined FUN_1493f595a(void)

undefined8 FUN_1493f595a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145a94ad0();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493f5a26 FUN_1493f5a26 body=91 status=ok
// SIG undefined FUN_1493f5a26(void)

undefined8 * FUN_1493f5a26(undefined8 *param_1,undefined1 param_2)

{
  wchar_t *pwVar1;
  
  switch(param_2) {
  case 0:
    pwVar1 = L"Unknown";
    break;
  case 1:
    pwVar1 = L"Color";
    break;
  case 2:
    pwVar1 = L"Vector";
    break;
  case 3:
    pwVar1 = L"Scalar";
    break;
  default:
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
  }
  FUN_140056680(param_1,pwVar1);
  return param_1;
}



// FUNCTION 1493f5a81 FUN_1493f5a81 body=320 status=ok
// SIG undefined FUN_1493f5a81(void)

void FUN_1493f5a81(void)

{
  longlong lVar1;
  undefined1 auStack_a8 [40];
  undefined1 *local_80;
  ulonglong *local_78;
  longlong local_70;
  undefined4 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140056680(local_60,
                L"MaterialFunction\'/Engine/Functions/Engine_MaterialFunctions01/Shading/ConvertFromDiffSpec.ConvertFromDiffSpec\'"
               );
  FUN_140056680(local_50,
                L"MaterialFunction\'/Engine/Functions/Engine_MaterialFunctions01/Texturing/FlattenNormal.FlattenNormal\'"
               );
  FUN_140056680(local_40,
                L"MaterialFunction\'/Engine/Functions/Engine_MaterialFunctions02/Utility/MakeFloat3.MakeFloat3\'"
               );
  FUN_140056680(local_30,
                L"MaterialFunction\'/Engine/Functions/Engine_MaterialFunctions02/Texturing/CustomRotator.CustomRotator\'"
               );
  FUN_140056680(local_20,
                L"MaterialFunction\'/InterchangeAssets/Functions/MF_PhongToMetalRoughness.MF_PhongToMetalRoughness\'"
               );
  local_78 = &local_10;
  local_80 = local_60;
  FUN_141469cae(&local_70);
  lVar1 = 0x50;
  do {
    if (*(longlong *)((longlong)&local_70 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc154fc) {
    FUN_144b3d300(&DAT_14cc154fc);
    if (DAT_14cc154fc == -1) {
      DAT_14cc154f8 = FUN_14450e2c4(&local_70);
      _Init_thread_footer(&DAT_14cc154fc);
    }
  }
  FUN_1447a1747(local_70,local_68);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493f5bc2 FUN_1493f5bc2 body=170 status=ok
// SIG undefined FUN_1493f5bc2(void)

void FUN_1493f5bc2(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_48 [42];
  undefined1 local_1e;
  byte local_1d;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_149347220(param_1,local_1c);
  local_1d = 2;
  if (cVar1 != '\0') {
    local_1d = 1;
    FUN_14938ac06(param_2,local_1c,1);
  }
  cVar1 = FUN_1493888d6(param_2);
  if (cVar1 == '\0') {
    FUN_14938aa16(param_2,&local_1d,1);
  }
  if (local_1d - 1 < 2) {
    local_1e = 4;
    cVar1 = FUN_149388f80(param_2);
    if (cVar1 == '\0') {
      FUN_14938b322(param_2,&local_1e,1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493f5c6d FUN_1493f5c6d body=238 status=ok
// SIG undefined FUN_1493f5c6d(void)

void FUN_1493f5c6d(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446f470e(&local_38,L"MaterialFunction",1);
  lVar1 = FUN_1458f106c();
  local_30 = *(undefined8 *)(lVar1 + 0x18);
  FUN_1400021e4(&local_30,local_48);
  FUN_14938b814(param_1,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400021e4(&local_38,local_48);
  FUN_1492ee142(param_1,local_48,param_2);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400021e4(&local_38,local_48);
  FUN_1492fe782(param_1,local_48,lVar1,local_38);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493f5d5c FUN_1493f5d5c body=263 status=ok
// SIG undefined FUN_1493f5d5c(void)

longlong FUN_1493f5d5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  longlong local_50 [2];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1492ef9be(param_2,local_50);
  FUN_144a7dea0(local_40,local_50,param_3);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  lVar1 = FUN_1493f5e64(param_1);
  if (lVar1 != 0) {
    FUN_1444ba64e(lVar1,local_40,param_3,3);
    FUN_1492f22b0(param_1,local_60,lVar1);
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1492ef9be(param_2,local_50);
    FUN_1492f3e1a(param_1,local_40,local_50);
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1493f5c6d(lVar1,param_4);
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493f5e64 FUN_1493f5e64 body=174 status=ok
// SIG undefined FUN_1493f5e64(void)

undefined8 FUN_1493f5e64(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459f6872();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493f5f13 FUN_1493f5f13 body=1240 status=ok
// SIG undefined FUN_1493f5f13(void)

longlong FUN_1493f5f13(longlong *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined2 *puVar8;
  longlong lVar9;
  longlong lVar10;
  ushort uVar11;
  ulonglong uVar12;
  ushort uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auStack_278 [40];
  longlong local_250;
  longlong *local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  longlong local_228;
  undefined8 uStack_220;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1dc;
  undefined4 local_1d4;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_13c;
  undefined4 local_134;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined4 local_e4;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78;
  undefined2 local_77;
  undefined8 local_74;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_278;
  FUN_1446ddc76(&local_210,"AssetRegistry",1);
  uVar5 = FUN_144a52528();
  plVar6 = (longlong *)FUN_14493e38c(uVar5,local_210);
  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x40))();
  local_228 = 0;
  uStack_220 = 0;
  if (1 < (int)param_1[1]) {
    lVar9 = 0;
    while( true ) {
      uVar11 = *(ushort *)(*param_1 + lVar9);
      uVar12 = (ulonglong)uVar11;
      uVar13 = *(ushort *)((longlong)&DAT_149e065c6 + lVar9);
      if (uVar11 != uVar13) {
        if ((uVar13 | uVar11) < 0x80) {
          uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
          uVar14 = (ulonglong)uVar13;
          uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
          if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar14]) goto LAB_1493f60f9;
        }
        if (uVar11 != uVar13) {
          cVar3 = FUN_144a791f8(param_1,L"/Temp",5,1);
          uVar12 = uStack_220;
          if (cVar3 == '\0') {
            lVar9 = (longlong)(int)uStack_220;
            uVar4 = (int)uStack_220 + 1;
            uStack_220 = CONCAT44(uStack_220._4_4_,uVar4);
            if (uStack_220._4_4_ < uVar4) {
              FUN_1447a1bd6(&local_228,uVar12 & 0xffffffff);
            }
            lVar9 = lVar9 * 0x10;
            puVar1 = (undefined8 *)(local_228 + lVar9);
            *(undefined8 *)(local_228 + lVar9) = 0;
            iVar2 = (int)param_1[1];
            _Src = (void *)*param_1;
            *(int *)(local_228 + 8 + lVar9) = iVar2;
            if ((longlong)iVar2 == 0) {
              *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
            }
            else {
              FUN_1446dd670(puVar1,iVar2,0);
              memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
            }
          }
          goto LAB_1493f5fa6;
        }
        break;
      }
      if (uVar11 == 0) break;
LAB_1493f60f9:
      lVar9 = lVar9 + 2;
    }
  }
  FUN_1412fac7e(&local_228,0,0,0);
LAB_1493f5fa6:
  if ((int)uStack_220 != 0) {
    (**(code **)(*plVar6 + 0x240))(plVar6,&local_228,0,0);
  }
  local_148 = 0;
  local_140 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = (undefined4 *)0x0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_13c = 0xffffffff00000080;
  local_134 = 0;
  local_128 = 0;
  local_120 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_ec = 0xffffffff00000080;
  local_e4 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_9c = 0xffffffff00000080;
  local_94 = 0;
  local_88 = 0;
  local_80 = 0;
  local_74 = 0;
  local_77 = 1;
  local_78 = param_3;
  uVar5 = FUN_1402d2740();
  FUN_1414d7078(uVar5,&local_238);
  uStack_170 = CONCAT44(uStack_170._4_4_,1);
  FUN_1401d5364(&local_178,0);
  *local_178 = (undefined4)local_238;
  local_178[1] = local_238._4_4_;
  local_178[2] = (int)uStack_230;
  local_178[3] = uStack_230._4_4_;
  if ((int)param_1[1] == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*param_1;
  }
  FUN_1446f470e(&local_238,puVar8,1);
  uVar12 = uStack_1a0;
  lVar9 = (longlong)(int)uStack_1a0;
  uVar4 = (int)uStack_1a0 + 1;
  uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar4);
  if (uStack_1a0._4_4_ < uVar4) {
    FUN_1446f84a2(&local_1a8,uVar12 & 0xffffffff);
  }
  *(longlong *)(local_1a8 + lVar9 * 8) = local_238;
  local_238 = 0;
  uStack_230 = 0;
  (**(code **)(*plVar6 + 0x50))(plVar6,&local_1b8,&local_238,1);
  local_248 = (longlong *)0x0;
  uStack_240 = 0;
  if ((longlong)(int)uStack_230 == 0) {
    lVar9 = 0;
  }
  else {
    lVar15 = (longlong)(int)uStack_230 * 0x70;
    lVar9 = 0;
    lVar10 = local_238;
    do {
      puVar8 = &DAT_149dfb77a;
      if (*(int *)(param_2 + 1) != 0) {
        puVar8 = (undefined2 *)*param_2;
      }
      FUN_1446f470e(&local_250,puVar8,1);
      if (*(longlong *)(lVar10 + 0x10) == local_250) {
        local_1e8 = 0;
        local_1e0 = 0;
        local_208 = 0;
        uStack_200 = 0;
        local_1dc = 0xffffffff00000080;
        local_1d4 = 0;
        local_1c8 = 0;
        local_1c0 = 0;
        lVar7 = FUN_14700c192(lVar10,&local_208);
        lVar9 = 0;
        if (lVar7 != 0) {
          lVar9 = FUN_1402d2740();
          uVar12 = uStack_240;
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar9 + 0x38) * 8) != lVar9 + 0x30)) {
            lVar9 = 0;
          }
          else {
            lVar9 = (longlong)(int)uStack_240;
            uVar4 = (int)uStack_240 + 1;
            uStack_240 = CONCAT44(uStack_240._4_4_,uVar4);
            if (uStack_240._4_4_ < uVar4) {
              FUN_144769b64(&local_248,uVar12 & 0xffffffff);
            }
            local_248[lVar9] = lVar7;
            lVar9 = lVar7;
          }
        }
      }
      lVar10 = lVar10 + 0x70;
      lVar15 = lVar15 + -0x70;
    } while (lVar15 != 0);
    if (0 < (int)uStack_240) {
      lVar9 = *local_248;
    }
    if (local_248 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_140195631(local_238,uStack_230 & 0xffffffff);
  if (local_238 != 0) {
    FUN_1400020a8();
  }
  FUN_14019571a(&local_1b8);
  FUN_1447a1747(local_228,uStack_220 & 0xffffffff);
  if (local_228 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return lVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493f63ec FUN_1493f63ec body=751 status=ok
// SIG undefined FUN_1493f63ec(void)

longlong FUN_1493f63ec(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  uint uVar1;
  void *_Src;
  wchar_t *pwVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  wchar_t *pwVar7;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  wchar_t *local_58;
  ulonglong uStack_50;
  wchar_t *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_3 == 4) {
    lVar5 = 0;
    goto LAB_1493f6431;
  }
  if (param_3 == 0) {
    if (*(int *)(param_1 + 1) == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = (undefined2 *)*param_1;
    }
    uVar4 = FUN_1402d2740();
    lVar5 = FUN_140277b32(uVar4,0,puVar6,0);
    if (lVar5 != 0) {
      uVar4 = FUN_144b00ba4(lVar5);
      local_48 = (wchar_t *)0x0;
      uStack_40 = 0;
      FUN_1401031ac(uVar4,0,&local_48);
      pwVar2 = local_48;
      pwVar7 = pwVar2;
      if ((int)uStack_40 == *(int *)(param_2 + 1)) {
        if ((1 < (int)uStack_40) &&
           (iVar3 = wcscmp(local_48,(wchar_t *)*param_2), pwVar7 = local_48, iVar3 != 0)) {
          lVar5 = 0;
          pwVar7 = pwVar2;
        }
      }
      else if (*(int *)(param_2 + 1) + (int)uStack_40 != 1) {
        lVar5 = 0;
      }
      if (pwVar7 != (wchar_t *)0x0) {
        FUN_1400020a8(pwVar7);
      }
      if (lVar5 != 0) goto LAB_1493f6431;
    }
  }
  local_48 = (wchar_t *)0x0;
  uVar1 = *(uint *)(param_2 + 1);
  _Src = (void *)*param_2;
  uStack_40 = CONCAT44(uStack_40._4_4_,uVar1);
  if ((longlong)(int)uVar1 == 0) {
    uStack_40 = (ulonglong)uVar1;
  }
  else {
    FUN_1446dd670(&local_48,uVar1,0);
    memcpy(local_48,_Src,(longlong)(int)uVar1 * 2);
  }
  lVar5 = FUN_1493f5f13(&local_48,param_1,0);
  if (param_3 != 0 && lVar5 == 0) {
    lVar5 = FUN_1493f5f13(&local_48,param_1,1);
  }
  if (lVar5 == 0) {
    if ((byte)(param_3 - 1) < 3) {
      FUN_140bee914(&local_58,&local_48);
      if (local_48 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      local_48 = local_58;
      uStack_40 = uStack_50;
      if ((1 < (int)uStack_50) && (lVar5 = FUN_1493f5f13(&local_48,param_1,1), lVar5 != 0))
      goto LAB_1493f655f;
    }
    if ((param_3 & 0xfe) == 2) {
      local_58 = (wchar_t *)0x0;
      uStack_50 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      FUN_146870ed0(&local_48);
      if ((int)uStack_40 < 2) {
        lVar5 = 0;
      }
      else {
        lVar5 = FUN_1493f5f13(&local_58,param_1,1);
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (local_58 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (param_3 == 3 && lVar5 == 0) {
        FUN_140056680(&local_58,&DAT_149e065c6);
        lVar5 = FUN_1493f5f13(&local_58,param_1,1);
        if (local_58 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    else {
      lVar5 = 0;
    }
  }
LAB_1493f655f:
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_1493f6431:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 1493f66dc FUN_1493f66dc body=73 status=ok
// SIG undefined FUN_1493f66dc(void)

void FUN_1493f66dc(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x198);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2c0))(plVar1,param_2);
  }
  lVar2 = FUN_1492ebf28(param_1);
  if (lVar2 != param_1) {
    return;
  }
  FUN_1492eb898(param_1,param_2);
  return;
}



// FUNCTION 1493f6726 FUN_1493f6726 body=40 status=ok
// SIG undefined FUN_1493f6726(void)

undefined8 FUN_1493f6726(longlong param_1)

{
  char cVar1;
  
  if ((*(longlong **)(param_1 + 0x198) != (longlong *)0x0) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x198) + 0x2c8))(), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 1493f674e FUN_1493f674e body=407 status=ok
// SIG undefined FUN_1493f674e(void)

void FUN_1493f674e(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong *local_a0;
  longlong local_90 [2];
  longlong local_80;
  longlong local_78 [2];
  longlong local_68;
  ulonglong uStack_60;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_50 = FUN_145a95230();
  if ((local_50 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_50);
  }
  lVar1 = FUN_1493f729e(param_1,param_2,&local_50,0);
  if (lVar1 != 0) {
    lVar2 = FUN_145a95230();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_1493f67d6;
  }
  lVar1 = 0;
LAB_1493f67d6:
  local_68 = 0;
  uStack_60 = 0;
  FUN_149345138(param_2,&local_68);
  if ((longlong)(int)uStack_60 == 0) {
    uVar3 = 0;
  }
  else {
    lVar4 = (longlong)(int)uStack_60 << 4;
    lVar2 = local_68;
    do {
      FUN_1492ef9be(lVar1,local_90);
      local_a8 = lVar2;
      local_a0 = local_90;
      FUN_1493f7ac6(param_1,&local_80,lVar1,param_2);
      if (local_90[0] != 0) {
        FUN_1400020a8();
      }
      if (local_80 != 0) {
        FUN_1492ef9be(local_80,local_90);
        FUN_149344f46(lVar1,lVar2,local_90,local_78);
        if (local_90[0] != 0) {
          FUN_1400020a8();
        }
      }
      if (local_78[0] != 0) {
        FUN_1400020a8();
      }
      lVar2 = lVar2 + 0x10;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
    uVar3 = uStack_60 & 0xffffffff;
  }
  FUN_1447a1747(local_68,uVar3);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493f68e6 FUN_1493f68e6 body=377 status=ok
// SIG undefined FUN_1493f68e6(void)

longlong FUN_1493f68e6(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = FUN_145a94f6c();
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_28);
  }
  lVar2 = FUN_1493f729e(param_1,param_2,&local_28,0);
  if (lVar2 != 0) {
    lVar3 = FUN_145a94f6c();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) goto LAB_1493f695f;
  }
  lVar2 = 0;
LAB_1493f695f:
  FUN_1492f9378(param_2,lVar2,0);
  cVar1 = FUN_14940050a(param_1,param_2,lVar2);
  if (cVar1 == '\0') {
    cVar1 = FUN_149400968(param_1,param_2,lVar2);
    if (cVar1 == '\0') {
      cVar1 = FUN_149400b88(param_1,param_2,lVar2);
      if (cVar1 == '\0') {
        cVar1 = FUN_1493f84a4(param_1,param_2,lVar2);
        if (cVar1 == '\0') {
          cVar1 = FUN_1493f759e(param_1,param_2,lVar2);
          if (cVar1 == '\0') {
            cVar1 = FUN_1493f7f2e(param_1,param_2,lVar2);
            if (cVar1 == '\0') {
              FUN_1493f839c(param_1,param_2,lVar2);
            }
          }
        }
        cVar1 = FUN_1493f8e32(param_1,param_2,lVar2);
        if (cVar1 == '\0') {
          cVar1 = FUN_1493f8824(param_1,param_2,lVar2);
          if (cVar1 == '\0') {
            cVar1 = FUN_1493f8c42(param_1,param_2,lVar2);
            if (cVar1 == '\0') {
              FUN_1493f8b16(param_1,param_2,lVar2);
            }
          }
        }
        FUN_1493f904e(param_1,param_2,lVar2);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493f6a60 FUN_1493f6a60 body=191 status=ok
// SIG undefined FUN_1493f6a60(void)

void FUN_1493f6a60(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  
  *(undefined1 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  lVar3 = *(longlong *)(param_1 + 0x58);
  if (lVar3 != 0) {
    FUN_144757f48(lVar3,0x40000000);
    uVar1 = *(uint *)(lVar3 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    do {
      uVar1 = *(uint *)(lVar3 + 8);
      if ((uVar1 >> 0x15 & 1) != 0) break;
      LOCK();
      bVar4 = uVar1 == *(uint *)(lVar3 + 8);
      if (bVar4) {
        *(uint *)(lVar3 + 8) = uVar1 | 0x200000;
      }
      UNLOCK();
    } while (!bVar4);
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  uVar2 = FUN_1409ffe1d();
  uVar2 = FUN_149401972(uVar2);
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  FUN_149307011(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_14930d8a4(param_1 + 0x60,0);
  }
  FUN_149401a08(param_1 + 0x70);
  return;
}



// FUNCTION 1493f6b20 FUN_1493f6b20 body=102 status=ok
// SIG undefined FUN_1493f6b20(void)

void FUN_1493f6b20(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  
  uVar1 = FUN_149401a48();
  *(uint *)(param_1 + 0xc4) = uVar1;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar2 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x48);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & uVar1) * 4);
    if (iVar3 != -1) {
      do {
        if (*(uint *)(*(longlong *)(param_1 + 8) + (longlong)iVar3 * 0x18) == uVar1) {
          *(undefined1 *)(param_1 + 200) = 1;
          return;
        }
        iVar3 = *(int *)(*(longlong *)(param_1 + 8) + (longlong)iVar3 * 0x18 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 1493f6b86 FUN_1493f6b86 body=101 status=ok
// SIG undefined FUN_1493f6b86(void)

void FUN_1493f6b86(longlong param_1,undefined8 param_2,undefined4 param_3,char param_4)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 200) == '\x01') {
    FUN_149402886(param_1,param_2);
    return;
  }
  uVar1 = FUN_149402c0c(param_1,param_2);
  FUN_1492f03f8(uVar1,param_3);
  if (param_4 == '\0') {
    return;
  }
  FUN_149402c8a(param_1,param_2);
  return;
}



// FUNCTION 1493f6bec FUN_1493f6bec body=721 status=ok
// SIG undefined FUN_1493f6bec(void)

longlong FUN_1493f6bec(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined ***pppuVar8;
  undefined *puVar9;
  wchar_t *pwVar10;
  undefined1 auStack_c8 [32];
  longlong local_a8 [3];
  longlong local_90;
  code *local_88;
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_90 = FUN_145a95058();
  if ((local_90 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_90);
  }
  lVar4 = FUN_1493f729e(param_1,param_2,&local_90,0);
  if (lVar4 == 0) {
LAB_1493f6c70:
    lVar4 = 0;
  }
  else {
    lVar5 = FUN_145a95058();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        != lVar5 + 0x30)) goto LAB_1493f6c70;
  }
  FUN_1492f9378(param_2,lVar4,0);
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14bcc5830;
  local_88 = FUN_144510712;
  local_60 = param_1;
  local_58 = lVar4;
  local_50 = param_2;
  lVar5 = FUN_140081d40(param_1 + 0x178,0);
  if (lVar5 != 0) {
    lVar6 = FUN_1402d2740();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        == lVar6 + 0x30)) {
      local_a8[0] = 0;
      local_a8[1] = 0;
      FUN_1401031ac(lVar5,0,local_a8);
      FUN_14938bd94(lVar4,local_a8);
      goto LAB_1493f6d77;
    }
  }
  cVar2 = FUN_14934567c(param_2,&DAT_14cc15150);
  cVar3 = FUN_14934567c(param_2,&DAT_14cc15158);
  if ((cVar2 == '\0') || (cVar3 == '\0')) {
    cVar2 = FUN_14934567c(param_2,&DAT_14cc15160);
    if (cVar2 == '\0') {
      cVar2 = FUN_14934567c(param_2,&DAT_14cc14fc0);
      cVar3 = FUN_14934567c(param_2,&DAT_14cc15130);
      if ((cVar2 == '\0') || (cVar3 == '\0')) {
        cVar2 = FUN_14934567c(param_2,&DAT_14cc14fc0);
        if (cVar2 == '\0') {
          cVar2 = FUN_14934567c(param_2,&DAT_14cc15428);
          if (cVar2 == '\0') {
            pwVar10 = L"/InterchangeAssets/Materials/PBRSurfaceMaterial.PBRSurfaceMaterial";
          }
          else {
            pwVar10 = L"/InterchangeAssets/Materials/UnlitMaterial.UnlitMaterial";
          }
        }
        else {
          pwVar10 = L"/InterchangeAssets/Materials/LambertSurfaceMaterial.LambertSurfaceMaterial";
        }
      }
      else {
        pwVar10 = L"/InterchangeAssets/Materials/PhongSurfaceMaterial.PhongSurfaceMaterial";
      }
      FUN_140056680(local_a8,pwVar10);
      FUN_14938bd94(lVar4,local_a8);
      goto LAB_1493f6d77;
    }
    puVar9 = &DAT_14bcc1214;
  }
  else {
    puVar9 = &DAT_14bcc120e;
  }
  FUN_140056680(local_a8,puVar9);
  pcVar1 = local_88;
  pppuVar8 = local_78;
  if (local_78 == (undefined ***)0x0) {
    pppuVar8 = &local_68;
  }
  uVar7 = (*(code *)(*pppuVar8)[1])();
  (*pcVar1)(uVar7,local_a8);
LAB_1493f6d77:
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  uVar7 = FUN_144a772c4();
  local_a8[0] = 0;
  local_a8[1] = 0;
  FUN_1401031ac(uVar7,0,local_a8);
  FUN_14938bc3a(lVar4,local_a8);
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_149400d7c(param_1,param_2,lVar4);
  if (local_88 != (code *)0x0) {
    pppuVar8 = &local_68;
    if (local_78 != (undefined ***)0x0) {
      pppuVar8 = local_78;
    }
    (*(code *)(*pppuVar8)[2])(pppuVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 1493f6ebe FUN_1493f6ebe body=336 status=ok
// SIG undefined FUN_1493f6ebe(void)

void FUN_1493f6ebe(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
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
  plVar1 = (longlong *)(param_1 + 0x28);
  lVar2 = param_1 + 0x38;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x50) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar7 = *(int *)(param_1 + 0x50);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar7) || (uStack_60 != lVar2)) {
    do {
      lVar3 = *local_90;
      lVar8 = (longlong)iStack_74 * 0x20;
      if (*(longlong *)(lVar3 + 0x10 + lVar8) != 0) {
        plVar9 = (longlong *)(lVar3 + lVar8 + 0x10);
        uVar6 = FUN_145923a7c();
        bVar5 = FUN_144a7ca96(plVar9,uVar6);
        lVar4 = *plVar9;
        if ((lVar4 != 0 & bVar5) == 1) {
          local_68 = lVar4;
          (*(code *)*param_2)(param_2[1],lVar3 + lVar8);
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar7));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493f7010 FUN_1493f7010 body=336 status=ok
// SIG undefined FUN_1493f7010(void)

void FUN_1493f7010(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
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
  plVar1 = (longlong *)(param_1 + 0x28);
  lVar2 = param_1 + 0x38;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x50) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar7 = *(int *)(param_1 + 0x50);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar7) || (uStack_60 != lVar2)) {
    do {
      lVar3 = *local_90;
      lVar8 = (longlong)iStack_74 * 0x20;
      if (*(longlong *)(lVar3 + 0x10 + lVar8) != 0) {
        plVar9 = (longlong *)(lVar3 + lVar8 + 0x10);
        uVar6 = FUN_145a93a38();
        bVar5 = FUN_144a7ca96(plVar9,uVar6);
        lVar4 = *plVar9;
        if ((lVar4 != 0 & bVar5) == 1) {
          local_68 = lVar4;
          (*(code *)*param_2)(param_2[1],lVar3 + lVar8);
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar7));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493f7161 FUN_1493f7161 body=148 status=ok
// SIG undefined FUN_1493f7161(void)

undefined8 FUN_1493f7161(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145a95058();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493f71f6 FUN_1493f71f6 body=113 status=ok
// SIG undefined FUN_1493f71f6(void)

void FUN_1493f71f6(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  FUN_149432964(param_1 + 0x70);
  FUN_149307011(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_1494030cc(param_1 + 8);
  return;
}



// FUNCTION 1493f729e FUN_1493f729e body=591 status=ok
// SIG undefined FUN_1493f729e(void)

longlong FUN_1493f729e(longlong param_1,longlong param_2,longlong *param_3,char param_4)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  longlong local_88 [2];
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58 [2];
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140056680(&local_48,&DAT_14bcc0dd6);
  FUN_1492ee7cc(param_2,local_58);
  FUN_1492ef9be(param_2,local_78);
  FUN_140b1283a(local_68,L"Factory_",local_78);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (param_4 != '\0') {
    iVar1 = local_40 + -1;
    if (local_40 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(local_68,local_48,iVar1);
  }
  cVar2 = FUN_1492f3730(*(undefined8 *)(param_1 + 0x1a0),local_68);
  if (cVar2 == '\0') {
    lVar3 = *param_3;
    if ((((lVar3 == 0) || (lVar4 = FUN_145923a7c(), lVar4 == 0)) ||
        (*(int *)(lVar3 + 0x38) < *(int *)(lVar4 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
        lVar4 + 0x30)) {
      lVar3 = 0;
    }
    else {
      lVar3 = *param_3;
    }
    lVar3 = FUN_1493f74ee(*(undefined8 *)(param_1 + 0x1a0),lVar3);
    if (lVar3 != 0) {
      FUN_1444ba64e(lVar3,local_68,local_58,3);
      FUN_1492f22b0(*(undefined8 *)(param_1 + 0x1a0),local_88,lVar3);
      if (local_88[0] != 0) {
        FUN_1400020a8();
      }
      iVar1 = *(int *)(param_1 + 0x1d0);
      *(uint *)(param_1 + 0x1d0) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x1d4) < iVar1 + 1U) {
        FUN_149432b5e((longlong *)(param_1 + 0x1c8),iVar1);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x1c8) + (longlong)iVar1 * 8) = lVar3;
      FUN_1492ef9be(param_2,local_78);
      FUN_1444bb06c(lVar3 + 0x40,local_78);
      if (local_78[0] != 0) {
        FUN_1400020a8();
      }
      FUN_1492ef9be(lVar3,local_78);
      FUN_1444bb06c(param_2 + 0x40,local_78);
      if (local_78[0] != 0) {
        FUN_1400020a8();
      }
      goto LAB_1493f73cb;
    }
  }
  else {
    lVar3 = FUN_1492f2702(*(undefined8 *)(param_1 + 0x1a0),local_68);
    if (lVar3 != 0) {
      lVar4 = FUN_145923a7c();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) goto LAB_1493f73cb;
    }
  }
  lVar3 = 0;
LAB_1493f73cb:
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}


