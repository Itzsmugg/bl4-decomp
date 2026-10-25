// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146fa2e20 FUN_146fa2e20 body=21 status=ok
// SIG undefined FUN_146fa2e20(void)

undefined8 FUN_146fa2e20(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146fa2e36 FUN_146fa2e36 body=29 status=ok
// SIG undefined FUN_146fa2e36(void)

undefined8 FUN_146fa2e36(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fa2e54 FUN_146fa2e54 body=98 status=ok
// SIG undefined FUN_146fa2e54(void)

void FUN_146fa2e54(void)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_144a52528();
  FUN_1446ddc76(&local_20,"GeometryProcessingInterfaces",1);
  FUN_1405f3750(uVar1,local_20,0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fa2eba FUN_146fa2eba body=180 status=ok
// SIG undefined FUN_146fa2eba(void)

void FUN_146fa2eba(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) +
                    ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uVar2 << 0x13 | uVar2) +
                    (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (*plVar4 == param_3) {
          if (((plVar4 + 1 != (longlong *)0x0 && plVar4 != (longlong *)0x0) &&
              (lVar1 = plVar4[1], *(int *)(lVar1 + 8) == 1)) && (*(int *)(lVar1 + 0xc) == 1))
          goto LAB_146fa2ec7;
          break;
        }
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  lVar1 = 0;
LAB_146fa2ec7:
  *param_2 = lVar1;
  return;
}



// FUNCTION 146fa2f6e FUN_146fa2f6e body=209 status=ok
// SIG undefined FUN_146fa2f6e(void)

void FUN_146fa2f6e(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146f92b68(param_1 + 0x1a8,&local_40,param_2,0);
  FUN_146fa3040(param_3,local_38);
  FUN_146f716d6(param_1 + 0x1a8,&local_40,param_2,0);
  if ((longlong)local_38 != 0) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x30);
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0xb0) + 0x18);
      if (plVar1 != (longlong *)0x0) {
        plVar2 = plVar1;
      }
      FUN_146fa3156(param_3,(longlong)((int)plVar2[2] * *(int *)(local_40 + lVar3)) * 4 + *plVar2);
      lVar3 = lVar3 + 4;
    } while ((longlong)local_38 * 4 != lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fa3040 FUN_146fa3040 body=41 status=ok
// SIG undefined FUN_146fa3040(void)

void FUN_146fa3040(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_2 <= *(int *)(param_1 + 0x14)) {
    return;
  }
  FUN_146fa306a();
  return;
}



// FUNCTION 146fa306a FUN_146fa306a body=101 status=ok
// SIG undefined FUN_146fa306a(void)

void FUN_146fa306a(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 2;
    if (2 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 << 2,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 2)) {
        uVar2 = uVar1 >> 2 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0x14)) {
    *(int *)(param_1 + 0x14) = (int)uVar2;
    FUN_146fa30d0(param_1,*(undefined4 *)(param_1 + 0x10),uVar2,4);
    return;
  }
  return;
}



// FUNCTION 146fa30d0 FUN_146fa30d0 body=133 status=ok
// SIG undefined FUN_146fa30d0(void)

void FUN_146fa30d0(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 8,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,param_3,param_4);
  return;
}



// FUNCTION 146fa3156 FUN_146fa3156 body=122 status=ok
// SIG undefined FUN_146fa3156(void)

ulonglong FUN_146fa3156(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar2 = *(longlong *)(param_1 + 8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = param_1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  uVar5 = (ulonglong)iVar1;
  if (uVar5 != 0) {
    lVar6 = uVar5 * 4;
    uVar4 = 0;
    do {
      if (*(int *)(lVar3 + uVar4 * 4) == *param_2) {
        if ((int)uVar4 != -1) {
          uVar5 = uVar4 & 0xffffffff;
          goto LAB_146fa31ad;
        }
        break;
      }
      uVar4 = uVar4 + 1;
      lVar6 = lVar6 + -4;
    } while (lVar6 != 0);
  }
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_146fa31d0(param_1,iVar1);
    lVar2 = *(longlong *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    param_1 = lVar2;
  }
  *(int *)(param_1 + uVar5 * 4) = *param_2;
LAB_146fa31ad:
  return uVar5 & 0xffffffff;
}



// FUNCTION 146fa31d0 FUN_146fa31d0 body=130 status=ok
// SIG undefined FUN_146fa31d0(void)

void FUN_146fa31d0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (param_2 <= (int)uVar1) {
    uVar5 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x14) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar4 = (longlong)(int)uVar2;
      }
      else {
        lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 2,0);
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 >> 2)) {
        uVar5 = uVar3 >> 2 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x14) = (int)uVar5;
    FUN_146fa30d0(param_1,param_2,uVar5,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146fa3254 FUN_146fa3254 body=305 status=ok
// SIG undefined FUN_146fa3254(void)

undefined4 *
FUN_146fa3254(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  uint *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_146fa3386(param_1,local_50);
  puVar1 = (uint *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_48 = uVar4;
  local_48[1] = *puVar1;
  local_48[2] = 0xffffffff;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar2 = FUN_146fa346c(param_1,uVar4,local_48);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_48[3] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_48[2] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_146fa358a(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fa3386 FUN_146fa3386 body=229 status=ok
// SIG undefined FUN_146fa3386(void)

int * FUN_146fa3386(longlong *param_1,int *param_2)

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
      FUN_144869a3c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 146fa346c FUN_146fa346c body=147 status=ok
// SIG undefined FUN_146fa346c(void)

void FUN_146fa346c(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  longlong *plVar3;
  int iVar4;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar4 * 0x10);
        if (*(int *)(*param_1 + (longlong)iVar4 * 0x10) == *param_3) {
          *puVar1 = *(undefined8 *)param_3;
          FUN_146fa3500(param_1,*param_4,1);
          *param_4 = iVar4;
          uVar2 = 1;
          goto LAB_146fa34d7;
        }
        iVar4 = *(int *)(puVar1 + 1);
      } while (iVar4 != -1);
    }
  }
  uVar2 = 0;
LAB_146fa34d7:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar2;
  }
  return;
}



// FUNCTION 146fa3500 FUN_146fa3500 body=138 status=ok
// SIG undefined FUN_146fa3500(void)

void FUN_146fa3500(longlong *param_1,int param_2,int param_3)

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
      puVar7 = puVar7 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146fa358a FUN_146fa358a body=422 status=ok
// SIG undefined FUN_146fa358a(void)

void FUN_146fa358a(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x10;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xc + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 8 + lVar7) =
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



// FUNCTION 146fa3732 FUN_146fa3732 body=405 status=ok
// SIG undefined FUN_146fa3732(void)

void FUN_146fa3732(longlong *param_1,uint param_2)

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
      FUN_14472eb64(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_144869a3c(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar6 * 0x10 + lVar2 + -0xc);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = iVar9 + -1;
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
        puVar5 = puVar5 + -4;
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



// FUNCTION 146fa38c8 FUN_146fa38c8 body=422 status=ok
// SIG undefined FUN_146fa38c8(void)

void FUN_146fa38c8(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x10;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xc + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 8 + lVar7) =
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



// FUNCTION 146fa3a70 FUN_146fa3a70 body=405 status=ok
// SIG undefined FUN_146fa3a70(void)

void FUN_146fa3a70(longlong *param_1,uint param_2)

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
      FUN_14472eb64(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_144869a3c(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar6 * 0x10 + lVar2 + -0xc);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = iVar9 + -1;
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
        puVar5 = puVar5 + -4;
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



// FUNCTION 146fa3c06 FUN_146fa3c06 body=422 status=ok
// SIG undefined FUN_146fa3c06(void)

void FUN_146fa3c06(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x10;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xc + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 8 + lVar7) =
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



// FUNCTION 146fa3dae FUN_146fa3dae body=108 status=ok
// SIG undefined FUN_146fa3dae(void)

void FUN_146fa3dae(longlong param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 1;
  if (3 < param_2) {
    uVar1 = (param_2 | 1) + 0xe;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar2 = 1 << ((byte)iVar2 & 0x1f);
  }
  if (*(int *)(param_1 + 0x48) < iVar2 && 0 < (int)param_2 || iVar2 < *(int *)(param_1 + 0x48)) {
    FUN_146fa2742(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar2;
    FUN_146fa3f5e(param_1);
    return;
  }
  FUN_146fa3e1a(param_1);
  FUN_146fa2742(param_1,param_2);
  return;
}



// FUNCTION 146fa3e1a FUN_146fa3e1a body=322 status=ok
// SIG undefined FUN_146fa3e1a(void)

void FUN_146fa3e1a(longlong *param_1)

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



// FUNCTION 146fa3f5e FUN_146fa3f5e body=422 status=ok
// SIG undefined FUN_146fa3f5e(void)

void FUN_146fa3f5e(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x10;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xc + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 8 + lVar7) =
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



// FUNCTION 146fa4106 FUN_146fa4106 body=305 status=ok
// SIG undefined FUN_146fa4106(void)

undefined4 *
FUN_146fa4106(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  uint *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_146fa4238(param_1,local_50);
  puVar1 = (uint *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_48 = uVar4;
  local_48[1] = *puVar1;
  local_48[2] = 0xffffffff;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar2 = FUN_146fa431e(param_1,uVar4,local_48);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_48[3] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_48[2] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_146fa3f5e(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fa4238 FUN_146fa4238 body=229 status=ok
// SIG undefined FUN_146fa4238(void)

int * FUN_146fa4238(longlong *param_1,int *param_2)

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
      FUN_144869a3c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 146fa431e FUN_146fa431e body=144 status=ok
// SIG undefined FUN_146fa431e(void)

void FUN_146fa431e(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  longlong *plVar3;
  int iVar4;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar4 * 0x10);
        if (*(int *)(*param_1 + (longlong)iVar4 * 0x10) == *param_3) {
          *puVar1 = *(undefined8 *)param_3;
          FUN_146fa43ae(param_1,*param_4,1);
          *param_4 = iVar4;
          uVar2 = 1;
          goto LAB_146fa4386;
        }
        iVar4 = *(int *)(puVar1 + 1);
      } while (iVar4 != -1);
    }
  }
  uVar2 = 0;
LAB_146fa4386:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar2;
  }
  return;
}



// FUNCTION 146fa43ae FUN_146fa43ae body=138 status=ok
// SIG undefined FUN_146fa43ae(void)

void FUN_146fa43ae(longlong *param_1,int param_2,int param_3)

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
      puVar7 = puVar7 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146fa4438 FUN_146fa4438 body=285 status=ok
// SIG undefined FUN_146fa4438(void)

undefined4 * FUN_146fa4438(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
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
  FUN_146fa4556(param_1,local_48);
  puVar1 = (uint *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_40 = uVar5;
  local_40[1] = *puVar1;
  local_40[2] = 0xffffffff;
  local_4c = local_48[0];
  cVar3 = FUN_146fa463c(param_1,uVar5,local_40,&local_4c);
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
      local_40[3] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[2] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
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
      FUN_146fa38c8(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fa4556 FUN_146fa4556 body=229 status=ok
// SIG undefined FUN_146fa4556(void)

int * FUN_146fa4556(longlong *param_1,int *param_2)

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
      FUN_144869a3c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 146fa463c FUN_146fa463c body=124 status=ok
// SIG undefined FUN_146fa463c(void)

undefined8 FUN_146fa463c(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(int *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *puVar1 = *(undefined8 *)param_3;
          FUN_146fa46b8(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)(puVar1 + 1);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 146fa46b8 FUN_146fa46b8 body=114 status=ok
// SIG undefined FUN_146fa46b8(void)

void FUN_146fa46b8(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
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



// FUNCTION 146fa472a FUN_146fa472a body=285 status=ok
// SIG undefined FUN_146fa472a(void)

undefined4 * FUN_146fa472a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
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
  FUN_146fa4848(param_1,local_48);
  puVar1 = (uint *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_40 = uVar5;
  local_40[1] = *puVar1;
  local_40[2] = 0xffffffff;
  local_4c = local_48[0];
  cVar3 = FUN_146fa492e(param_1,uVar5,local_40,&local_4c);
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
      local_40[3] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[2] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
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
      FUN_146fa3c06(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fa4848 FUN_146fa4848 body=229 status=ok
// SIG undefined FUN_146fa4848(void)

int * FUN_146fa4848(longlong *param_1,int *param_2)

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
      FUN_144869a3c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 146fa492e FUN_146fa492e body=124 status=ok
// SIG undefined FUN_146fa492e(void)

undefined8 FUN_146fa492e(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(int *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *puVar1 = *(undefined8 *)param_3;
          FUN_146fa49aa(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)(puVar1 + 1);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 146fa49aa FUN_146fa49aa body=114 status=ok
// SIG undefined FUN_146fa49aa(void)

void FUN_146fa49aa(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
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



// FUNCTION 146fa4a1c FUN_146fa4a1c body=132 status=ok
// SIG undefined FUN_146fa4a1c(void)

void FUN_146fa4a1c(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 4) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,4);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,4);
  return;
}



// FUNCTION 146fa4aa0 FUN_146fa4aa0 body=110 status=ok
// SIG undefined FUN_146fa4aa0(void)

void FUN_146fa4aa0(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    iVar5 = 3;
    if (3 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (3 < *(uint *)(param_1 + 0x1c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 2,0);
      iVar2 = (int)(uVar3 >> 2);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x1c) = iVar5;
    FUN_146fa4a1c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146fa4b10 FUN_146fa4b10 body=98 status=ok
// SIG undefined FUN_146fa4b10(void)

void FUN_146fa4b10(longlong param_1,int param_2,int param_3)

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



// FUNCTION 146fa4b72 FUN_146fa4b72 body=68 status=ok
// SIG undefined FUN_146fa4b72(void)

void FUN_146fa4b72(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_146fa56f2();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_1447a08a2(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 146fa4bb6 FUN_146fa4bb6 body=372 status=ok
// SIG undefined FUN_146fa4bb6(void)

void FUN_146fa4bb6(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong *plVar4;
  byte bVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < 0x14) {
    uVar8 = 0x14 - iVar1;
    iVar11 = *(int *)((longlong)param_1 + 0xc);
    iVar7 = iVar1;
    if (iVar11 < 0x14) {
      FUN_144748838(param_1,0x14);
      iVar7 = (int)param_1[1];
      iVar11 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar7 + uVar8;
    if ((uint)(iVar11 - iVar7) < uVar8) {
      FUN_1447030e2(param_1,iVar7);
    }
    if (iVar7 < 0x14) {
      lVar2 = *param_1;
      iVar11 = *(int *)((longlong)param_1 + 0x34);
      puVar6 = (undefined4 *)(lVar2 + 0x42c);
      lVar10 = 0x14;
      do {
        iVar9 = (int)lVar10;
        if (iVar11 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = iVar9 + -1;
        }
        puVar6[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        lVar10 = lVar10 + -1;
        *puVar6 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar11 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar11;
        puVar6 = puVar6 + -0xe;
      } while (iVar7 < lVar10);
    }
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 5) = 0x14;
      if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0x20) {
        if (param_1[4] != 0) {
          FUN_1446efa72(param_1 + 4,0,0,4);
        }
        *(undefined4 *)((longlong)param_1 + 0x2c) = 0x20;
      }
      plVar4 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar4 = param_1 + 2;
      }
      *(undefined4 *)plVar4 = 0;
      iVar1 = (int)param_1[5];
      iVar11 = iVar1 + 0x1f;
      if (-1 < iVar1) {
        iVar11 = iVar1;
      }
      if (iVar1 % 0x20 != 0) {
        plVar4 = param_1 + 2;
        if ((longlong *)param_1[4] != (longlong *)0x0) {
          plVar4 = (longlong *)param_1[4];
        }
        bVar5 = -(char)(iVar1 % 0x20);
        *(uint *)((longlong)plVar4 + (longlong)(iVar11 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar4 + (longlong)(iVar11 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
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



// FUNCTION 146fa4d2a FUN_146fa4d2a body=419 status=ok
// SIG undefined FUN_146fa4d2a(void)

void FUN_146fa4d2a(longlong *param_1)

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



// FUNCTION 146fa4ece FUN_146fa4ece body=322 status=ok
// SIG undefined FUN_146fa4ece(void)

void FUN_146fa4ece(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x34 + (longlong)iVar4 * 0x38) * 4) =
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



// FUNCTION 146fa5012 FUN_146fa5012 body=285 status=ok
// SIG undefined FUN_146fa5012(void)

void FUN_146fa5012(longlong *param_1)

{
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      if (*(longlong *)(*local_60 + 0x20 + (longlong)iStack_44 * 0x38) != 0) {
        FUN_1400020a8();
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_144748838(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fa5130 FUN_146fa5130 body=180 status=ok
// SIG undefined FUN_146fa5130(void)

longlong FUN_146fa5130(longlong *param_1,uint param_2,int *param_3)

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
        lVar3 = *param_1 + (longlong)iVar1 * 0x38;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x38) == *param_3) {
          if (lVar3 != 0) goto LAB_146fa51c7;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x30);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_146fa51e6(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x38 + *param_1;
LAB_146fa51c7:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 146fa51e6 FUN_146fa51e6 body=302 status=ok
// SIG undefined FUN_146fa51e6(void)

undefined4 * FUN_146fa51e6(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146fa5316(param_1,local_48);
  *local_40 = *(undefined4 *)*param_4;
  *(undefined8 *)(local_40 + 2) = 0xffffffffffffffff;
  *(undefined8 *)(local_40 + 4) = 0;
  *(undefined8 *)(local_40 + 8) = 0;
  *(undefined8 *)(local_40 + 10) = 0x200000000;
  local_40[0xc] = 0xffffffff;
  cVar1 = FUN_146fa53f8(param_1,param_3,local_40,local_48);
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
      local_40[0xd] = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      local_40[0xc] =
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
      FUN_146fa4d2a(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fa5316 FUN_146fa5316 body=226 status=ok
// SIG undefined FUN_146fa5316(void)

int * FUN_146fa5316(longlong *param_1,int *param_2)

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



// FUNCTION 146fa53f8 FUN_146fa53f8 body=167 status=ok
// SIG undefined FUN_146fa53f8(void)

undefined8 FUN_146fa53f8(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar13 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[8];
    }
    iVar14 = *(int *)((longlong)plVar13 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar14 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar14 * 0x38);
        if (*(int *)(*param_1 + (longlong)iVar14 * 0x38) == *param_3) {
          if (*(longlong *)(piVar1 + 8) != 0) {
            FUN_1400020a8();
          }
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
          FUN_146fa54a0(param_1,*param_4);
          *param_4 = iVar14;
          return 1;
        }
        iVar14 = piVar1[0xc];
      } while (iVar14 != -1);
    }
  }
  return 0;
}



// FUNCTION 146fa54a0 FUN_146fa54a0 body=116 status=ok
// SIG undefined FUN_146fa54a0(void)

void FUN_146fa54a0(longlong *param_1,int param_2)

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



// FUNCTION 146fa5514 FUN_146fa5514 body=124 status=ok
// SIG undefined FUN_146fa5514(void)

void FUN_146fa5514(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_1 + 8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = param_1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    uVar4 = 0;
    do {
      if (*(int *)(lVar3 + uVar4) == *param_2) {
        if ((int)(~uVar4 >> 2) != 0) {
          return;
        }
        break;
      }
      uVar4 = uVar4 + 4;
    } while (lVar5 * 4 - uVar4 != 0);
  }
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_146fa5590(param_1,iVar1);
    lVar2 = *(longlong *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    param_1 = lVar2;
  }
  *(int *)(param_1 + lVar5 * 4) = *param_2;
  return;
}



// FUNCTION 146fa5590 FUN_146fa5590 body=124 status=ok
// SIG undefined FUN_146fa5590(void)

void FUN_146fa5590(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x14) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 2,0);
      iVar3 = (int)(uVar4 >> 2);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x14) = iVar6;
    FUN_146fa560e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146fa560e FUN_146fa560e body=132 status=ok
// SIG undefined FUN_146fa560e(void)

void FUN_146fa560e(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 8,0,param_3,4);
    memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,param_3,4);
  return;
}



// FUNCTION 146fa5692 FUN_146fa5692 body=47 status=ok
// SIG undefined FUN_146fa5692(void)

void FUN_146fa5692(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146fa56c2 FUN_146fa56c2 body=48 status=ok
// SIG undefined FUN_146fa56c2(void)

void FUN_146fa56c2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x30,8);
  }
  return;
}



// FUNCTION 146fa56f2 FUN_146fa56f2 body=322 status=ok
// SIG undefined FUN_146fa56f2(void)

void FUN_146fa56f2(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 8 + (longlong)iVar4 * 0xc) * 4) =
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



// FUNCTION 146fa5836 FUN_146fa5836 body=118 status=ok
// SIG undefined FUN_146fa5836(void)

undefined4 * FUN_146fa5836(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *_Src;
  
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *(undefined8 *)(param_1 + 6) = 0;
  iVar1 = param_2[8];
  puVar5 = *(undefined4 **)(param_2 + 6);
  param_1[8] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[9] = 2;
  }
  else {
    _Src = param_2 + 4;
    if (puVar5 != (undefined4 *)0x0) {
      _Src = puVar5;
    }
    FUN_146fa58ac(param_1 + 4,iVar1);
    puVar5 = *(undefined4 **)(param_1 + 6);
    if (*(undefined4 **)(param_1 + 6) == (undefined4 *)0x0) {
      puVar5 = param_1 + 4;
    }
    memcpy(puVar5,_Src,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 146fa58ac FUN_146fa58ac body=90 status=ok
// SIG undefined FUN_146fa58ac(void)

void FUN_146fa58ac(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 3) {
    iVar3 = 2;
  }
  else {
    iVar2 = 0;
    uVar1 = FUN_144a3809e((longlong)(int)param_2 << 2,0);
    iVar3 = (int)(uVar1 >> 2);
    if (iVar3 < (int)param_2) {
      iVar3 = 0x7fffffff;
    }
    else if (iVar3 < 1) goto LAB_146fa58dd;
  }
  iVar2 = iVar3;
  FUN_146fa560e(param_1,0,iVar2);
LAB_146fa58dd:
  *(int *)(param_1 + 0x14) = iVar2;
  return;
}



// FUNCTION 146fa5906 FUN_146fa5906 body=147 status=ok
// SIG undefined FUN_146fa5906(void)

void FUN_146fa5906(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146fa599a FUN_146fa599a body=124 status=ok
// SIG undefined FUN_146fa599a(void)

void FUN_146fa599a(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = param_1;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    uVar4 = 0;
    do {
      if (*(int *)(lVar3 + uVar4) == *param_2) {
        if ((int)(~uVar4 >> 2) != 0) {
          return;
        }
        break;
      }
      uVar4 = uVar4 + 4;
    } while (lVar5 * 4 - uVar4 != 0);
  }
  *(uint *)(param_1 + 0x28) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar1 + 1U) {
    FUN_146fa5a16(param_1,iVar1);
    lVar2 = *(longlong *)(param_1 + 0x20);
  }
  if (lVar2 != 0) {
    param_1 = lVar2;
  }
  *(int *)(param_1 + lVar5 * 4) = *param_2;
  return;
}



// FUNCTION 146fa5a16 FUN_146fa5a16 body=110 status=ok
// SIG undefined FUN_146fa5a16(void)

void FUN_146fa5a16(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x2c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 2,0);
      iVar2 = (int)(uVar3 >> 2);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x2c) = iVar5;
    FUN_146fa5a86(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146fa5a86 FUN_146fa5a86 body=132 status=ok
// SIG undefined FUN_146fa5a86(void)

void FUN_146fa5a86(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,4);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,4);
  return;
}



// FUNCTION 146fa5b0a FUN_146fa5b0a body=274 status=ok
// SIG undefined FUN_146fa5b0a(void)

undefined4 * FUN_146fa5b0a(longlong param_1,undefined4 *param_2,uint *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146fa5c1e(param_1,local_48);
  uVar4 = *param_3;
  *local_40 = uVar4;
  local_40[1] = 0xffffffff;
  local_4c = local_48[0];
  cVar2 = FUN_146fa5d04(param_1,uVar4,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar3) {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_40[2] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[1] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_146fa5dec(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fa5c1e FUN_146fa5c1e body=230 status=ok
// SIG undefined FUN_146fa5c1e(void)

int * FUN_146fa5c1e(longlong *param_1,int *param_2)

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
      FUN_1447cc1b4(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0xc);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0xc) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0xc + *param_1;
  return param_2;
}



// FUNCTION 146fa5d04 FUN_146fa5d04 body=118 status=ok
// SIG undefined FUN_146fa5d04(void)

undefined8 FUN_146fa5d04(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  longlong *plVar1;
  int iVar2;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar2 * 0xc) == *param_3) {
          FUN_146fa5d7a(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0xc + 4);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 146fa5d7a FUN_146fa5d7a body=114 status=ok
// SIG undefined FUN_146fa5d7a(void)

void FUN_146fa5d7a(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0xc) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0xc);
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



// FUNCTION 146fa5dec FUN_146fa5dec body=419 status=ok
// SIG undefined FUN_146fa5dec(void)

void FUN_146fa5dec(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0xc);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 8 + lVar6 * 0xc) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 4 + lVar6 * 0xc) =
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



// FUNCTION 146fa5f90 FUN_146fa5f90 body=68 status=ok
// SIG undefined FUN_146fa5f90(void)

void FUN_146fa5f90(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_146fa5fd4();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_140411364(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 146fa5fd4 FUN_146fa5fd4 body=329 status=ok
// SIG undefined FUN_146fa5fd4(void)

void FUN_146fa5fd4(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x18 + (longlong)iVar4 * 0x1c) * 4) =
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



// FUNCTION 146fa611e FUN_146fa611e body=128 status=ok
// SIG undefined FUN_146fa611e(void)

longlong FUN_146fa611e(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_146fa61a0();
  if (lVar1 == 0) {
    local_30 = param_3;
    FUN_146fa6210(param_1,&local_24,param_2);
    lVar1 = *param_1 + (longlong)local_24 * 0x1c;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1 + 8;
}



// FUNCTION 146fa61a0 FUN_146fa61a0 body=112 status=ok
// SIG undefined FUN_146fa61a0(void)

longlong FUN_146fa61a0(longlong *param_1,uint param_2,float *param_3)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar2 = *param_1;
      do {
        lVar3 = (longlong)iVar4 * 0x1c;
        if ((*(float *)(lVar2 + lVar3) == *param_3) &&
           (!NAN(*(float *)(lVar2 + lVar3)) && !NAN(*param_3))) {
          fVar1 = *(float *)(lVar2 + 4 + lVar3);
          if ((fVar1 == param_3[1]) && (!NAN(fVar1) && !NAN(param_3[1]))) {
            return lVar2 + lVar3;
          }
        }
        iVar4 = *(int *)(lVar2 + lVar3 + 0x14);
      } while (iVar4 != -1);
    }
  }
  return 0;
}



// FUNCTION 146fa6210 FUN_146fa6210 body=285 status=ok
// SIG undefined FUN_146fa6210(void)

undefined4 * FUN_146fa6210(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146fa632e(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[2] = 0xffffffff00000000;
  local_40[1] = 0;
  cVar1 = FUN_146fa642a(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 3) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0x14) =
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
      FUN_146fa6558(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fa632e FUN_146fa632e body=251 status=ok
// SIG undefined FUN_146fa632e(void)

int * FUN_146fa632e(longlong *param_1,int *param_2)

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
      FUN_1406245f8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x1c);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x1c) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x1c + *param_1;
  return param_2;
}



// FUNCTION 146fa642a FUN_146fa642a body=174 status=ok
// SIG undefined FUN_146fa642a(void)

undefined8 FUN_146fa642a(longlong *param_1,uint param_2,undefined8 *param_3,int *param_4)

{
  undefined8 *puVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar10 != -1) {
      lVar3 = *param_1;
      fVar8 = (float)*param_3;
      fVar9 = (float)((ulonglong)*param_3 >> 0x20);
      do {
        lVar4 = (longlong)iVar10 * 0x1c;
        puVar1 = (undefined8 *)(lVar3 + lVar4);
        if ((*(float *)(lVar3 + lVar4) == fVar8) && (!NAN(*(float *)(lVar3 + lVar4)) && !NAN(fVar8))
           ) {
          fVar2 = *(float *)(lVar3 + 4 + lVar4);
          if ((fVar2 == fVar9) && (!NAN(fVar2) && !NAN(fVar9))) {
            uVar5 = *param_3;
            uVar6 = param_3[1];
            *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_3 + 2);
            *puVar1 = uVar5;
            puVar1[1] = uVar6;
            FUN_146fa64d8(param_1,*param_4);
            *param_4 = iVar10;
            return 1;
          }
        }
        iVar10 = *(int *)((longlong)puVar1 + 0x14);
      } while (iVar10 != -1);
    }
  }
  return 0;
}



// FUNCTION 146fa64d8 FUN_146fa64d8 body=128 status=ok
// SIG undefined FUN_146fa64d8(void)

void FUN_146fa64d8(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x1c) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c + 4) = uVar4;
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



// FUNCTION 146fa6558 FUN_146fa6558 body=565 status=ok
// SIG undefined FUN_146fa6558(void)

void FUN_146fa6558(longlong *param_1)

{
  longlong *plVar1;
  float fVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar6 = local_a0;
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
    local_88 = param_1 + 2;
    local_90 = 0x100000000;
    local_80 = 0xffffffff;
    local_78 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_90);
    }
    local_b0 = local_90;
    local_a8 = local_88;
    local_a0 = local_80;
    uVar6 = local_a0;
    local_98 = local_78;
    local_94 = local_74;
    local_a0._4_4_ = (int)((ulonglong)local_80 >> 0x20);
    local_b8 = param_1;
    if (local_a0._4_4_ < (int)local_88[3]) {
      iVar7 = local_a0._4_4_;
      local_a0 = uVar6;
      do {
        lVar4 = *local_b8;
        lVar5 = (longlong)iVar7 * 0x1c;
        fVar2 = *(float *)(lVar4 + 4 + lVar5);
        local_90 = CONCAT44(~-(uint)(ABS(fVar2) <= 1e-08) & (uint)fVar2,
                            ~-(uint)(ABS(*(float *)(lVar4 + lVar5)) <= 1e-08) &
                            (uint)*(float *)(lVar4 + lVar5));
        iVar8 = (*(code *)PTR_FUN_14c75b148)(&local_90,8,0);
        uVar9 = (longlong)iVar8 & (longlong)(int)param_1[9] - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar4 + 0x18 + lVar5) = iVar8;
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0x14 + lVar5) =
             *(undefined4 *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(int *)((longlong)plVar10 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7
        ;
        local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 & ~local_b0._4_4_);
        FUN_1449c0562(&local_b0);
        iVar7 = local_a0._4_4_;
        uVar6 = local_a0;
      } while (local_a0._4_4_ < (int)local_a8[3]);
    }
  }
  local_a0 = uVar6;
  if ((local_70 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146fa678e FUN_146fa678e body=52 status=ok
// SIG undefined FUN_146fa678e(void)

void FUN_146fa678e(longlong *param_1)

{
  FUN_146fa67c2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146fa67c2 FUN_146fa67c2 body=89 status=ok
// SIG undefined FUN_146fa67c2(void)

void FUN_146fa67c2(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1447a08a2(param_1,0);
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



// FUNCTION 146fa681c FUN_146fa681c body=52 status=ok
// SIG undefined FUN_146fa681c(void)

void FUN_146fa681c(longlong *param_1)

{
  FUN_146fa6850();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146fa6850 FUN_146fa6850 body=313 status=ok
// SIG undefined FUN_146fa6850(void)

void FUN_146fa6850(longlong *param_1)

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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fa698a FUN_146fa698a body=52 status=ok
// SIG undefined FUN_146fa698a(void)

void FUN_146fa698a(longlong *param_1)

{
  FUN_146fa69be();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146fa69be FUN_146fa69be body=89 status=ok
// SIG undefined FUN_146fa69be(void)

void FUN_146fa69be(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140411364(param_1,0);
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



// FUNCTION 146fa6a18 FUN_146fa6a18 body=413 status=ok
// SIG undefined FUN_146fa6a18(void)

void FUN_146fa6a18(longlong *param_1,uint param_2)

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
      FUN_1446f4a44(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_1447711aa(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar9 * 0x20 + lVar2 + -0x1c);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = iVar8 + -1;
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
        puVar5 = puVar5 + -8;
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



// FUNCTION 146fa6bb6 FUN_146fa6bb6 body=422 status=ok
// SIG undefined FUN_146fa6bb6(void)

void FUN_146fa6bb6(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x20;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
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



// FUNCTION 146fa6d5e FUN_146fa6d5e body=287 status=ok
// SIG undefined FUN_146fa6d5e(void)

undefined4 * FUN_146fa6d5e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146fa6e7e(param_1,local_48);
  puVar1 = (uint *)param_3[1];
  uVar7 = *(uint *)*param_3;
  *local_40 = uVar7;
  uVar6 = puVar1[1];
  uVar2 = puVar1[2];
  uVar3 = puVar1[3];
  local_40[2] = *puVar1;
  local_40[3] = uVar6;
  local_40[4] = uVar2;
  local_40[5] = uVar3;
  local_40[6] = 0xffffffff;
  local_4c = local_48[0];
  cVar5 = FUN_146fa6f64(param_1,uVar7,local_40,&local_4c);
  uVar4 = local_4c;
  if (cVar5 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      local_40[7] = uVar7;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      local_40[6] = *(uint *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                       (longlong)(int)uVar7) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_146fa6bb6(param_1);
    }
  }
  *param_2 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fa6e7e FUN_146fa6e7e body=229 status=ok
// SIG undefined FUN_146fa6e7e(void)

int * FUN_146fa6e7e(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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



// FUNCTION 146fa6f64 FUN_146fa6f64 body=134 status=ok
// SIG undefined FUN_146fa6f64(void)

undefined8 FUN_146fa6f64(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_146fa6fea(iVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 146fa6fea FUN_146fa6fea body=114 status=ok
// SIG undefined FUN_146fa6fea(void)

void FUN_146fa6fea(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 146fa705c FUN_146fa705c body=147 status=ok
// SIG undefined FUN_146fa705c(void)

void FUN_146fa705c(longlong param_1,int param_2)

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



// FUNCTION 146fa70f0 FUN_146fa70f0 body=424 status=ok
// SIG undefined FUN_146fa70f0(void)

undefined8 * FUN_146fa70f0(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_149fa9f00;
  FUN_146fa7298(param_1 + 2);
  *param_1 = &PTR_FUN_149faa200;
  param_1[5] = 0;
  param_1[6] = 0;
  plVar4 = (longlong *)param_1[1];
  iVar5 = (int)plVar4[1];
  iVar8 = *(int *)((longlong)plVar4 + 0x34);
  if (iVar5 == iVar8) {
    return param_1;
  }
  uVar2 = (uint)((ulonglong)DAT_14c99c788 >> 0x10);
  uVar9 = (uint)DAT_14c99c788 & 0xffff;
  plVar3 = (longlong *)plVar4[8];
  if ((longlong *)plVar4[8] == (longlong *)0x0) {
    plVar3 = plVar4 + 7;
  }
  iVar7 = *(int *)((longlong)plVar3 +
                  (ulonglong)
                  ((int)plVar4[9] - 1U &
                  (int)((ulonglong)DAT_14c99c788 >> 0x20) + ((uint)DAT_14c99c788 << 0x10 | uVar9) +
                  (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar9 >> 4)) * 4);
  if (iVar7 != -1) {
    lVar1 = *plVar4;
    iVar6 = iVar7;
    do {
      if (*(longlong *)(lVar1 + (longlong)iVar6 * 0x18) == DAT_14c99c788) goto LAB_146fa71c2;
      iVar6 = *(int *)(lVar1 + (longlong)iVar6 * 0x18 + 0x10);
    } while (iVar6 != -1);
  }
  goto LAB_146fa71e4;
  while (iVar5 = (int)plVar4[2], iVar5 != -1) {
LAB_146fa7277:
    plVar4 = (longlong *)(lVar1 + (longlong)iVar5 * 0x18);
    if (*plVar4 == DAT_14c99c790) goto LAB_146fa728b;
  }
  plVar4 = (longlong *)0x0;
LAB_146fa728b:
  param_1[6] = plVar4[1];
  return param_1;
  while (iVar7 = (int)plVar3[2], iVar7 != -1) {
LAB_146fa71c2:
    plVar3 = (longlong *)(lVar1 + (longlong)iVar7 * 0x18);
    if (*plVar3 == DAT_14c99c788) goto LAB_146fa71d6;
  }
  plVar3 = (longlong *)0x0;
LAB_146fa71d6:
  param_1[5] = plVar3[1];
  iVar5 = (int)plVar4[1];
  iVar8 = *(int *)((longlong)plVar4 + 0x34);
LAB_146fa71e4:
  if (iVar5 != iVar8) {
    uVar2 = (uint)((ulonglong)DAT_14c99c790 >> 0x10);
    uVar9 = (uint)DAT_14c99c790 & 0xffff;
    plVar3 = plVar4 + 7;
    if ((longlong *)plVar4[8] != (longlong *)0x0) {
      plVar3 = (longlong *)plVar4[8];
    }
    iVar5 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)plVar4[9] - 1U &
                    (int)((ulonglong)DAT_14c99c790 >> 0x20) + ((uint)DAT_14c99c790 << 0x10 | uVar9)
                    + (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar9 >> 4)) * 4);
    if (iVar5 != -1) {
      lVar1 = *plVar4;
      iVar8 = iVar5;
      do {
        if (*(longlong *)(lVar1 + (longlong)iVar8 * 0x18) == DAT_14c99c790) goto LAB_146fa7277;
        iVar8 = *(int *)(lVar1 + (longlong)iVar8 * 0x18 + 0x10);
      } while (iVar8 != -1);
    }
  }
  return param_1;
}



// FUNCTION 146fa7298 FUN_146fa7298 body=371 status=ok
// SIG undefined FUN_146fa7298(void)

void FUN_146fa7298(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = (longlong)param_2;
  iVar6 = (int)param_2[1];
  iVar7 = *(int *)((longlong)param_2 + 0x34);
  if (iVar6 == iVar7) {
    return;
  }
  uVar2 = (uint)((ulonglong)DAT_14c99c788 >> 0x10);
  uVar8 = (uint)DAT_14c99c788 & 0xffff;
  plVar3 = (longlong *)param_2[8];
  if ((longlong *)param_2[8] == (longlong *)0x0) {
    plVar3 = param_2 + 7;
  }
  iVar4 = *(int *)((longlong)plVar3 +
                  (ulonglong)
                  ((int)param_2[9] - 1U &
                  (int)((ulonglong)DAT_14c99c788 >> 0x20) + ((uint)DAT_14c99c788 << 0x10 | uVar8) +
                  (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) * 4);
  if (iVar4 != -1) {
    lVar1 = *param_2;
    iVar5 = iVar4;
    do {
      if (*(longlong *)(lVar1 + (longlong)iVar5 * 0x18) == DAT_14c99c788) goto LAB_146fa7332;
      iVar5 = *(int *)(lVar1 + (longlong)iVar5 * 0x18 + 0x10);
    } while (iVar5 != -1);
  }
  goto LAB_146fa7356;
  while (iVar6 = (int)plVar3[2], iVar6 != -1) {
LAB_146fa73ea:
    plVar3 = (longlong *)(lVar1 + (longlong)iVar6 * 0x18);
    if (*plVar3 == DAT_14c99c790) goto LAB_146fa73fe;
  }
  plVar3 = (longlong *)0x0;
LAB_146fa73fe:
  param_1[1] = plVar3[1];
  return;
  while (iVar4 = (int)plVar3[2], iVar4 != -1) {
LAB_146fa7332:
    plVar3 = (longlong *)(lVar1 + (longlong)iVar4 * 0x18);
    if (*plVar3 == DAT_14c99c788) goto LAB_146fa7347;
  }
  plVar3 = (longlong *)0x0;
LAB_146fa7347:
  *param_1 = plVar3[1];
  iVar6 = (int)param_2[1];
  iVar7 = *(int *)((longlong)param_2 + 0x34);
LAB_146fa7356:
  if (iVar6 != iVar7) {
    uVar2 = (uint)((ulonglong)DAT_14c99c790 >> 0x10);
    uVar8 = (uint)DAT_14c99c790 & 0xffff;
    plVar3 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_2[8];
    }
    iVar6 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)param_2[9] - 1U &
                    (int)((ulonglong)DAT_14c99c790 >> 0x20) + ((uint)DAT_14c99c790 << 0x10 | uVar8)
                    + (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar6 != -1) {
      lVar1 = *param_2;
      iVar7 = iVar6;
      do {
        if (*(longlong *)(lVar1 + (longlong)iVar7 * 0x18) == DAT_14c99c790) goto LAB_146fa73ea;
        iVar7 = *(int *)(lVar1 + (longlong)iVar7 * 0x18 + 0x10);
      } while (iVar7 != -1);
    }
  }
  return;
}



// FUNCTION 146fa740c FUN_146fa740c body=544 status=ok
// SIG undefined FUN_146fa740c(void)

void FUN_146fa740c(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_78 [32];
  undefined8 **local_58;
  undefined4 local_50;
  int local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x50);
  lVar6 = *(longlong *)(lVar4 + 0x80);
  if (lVar6 == 0) {
    lVar6 = lVar4;
  }
  bVar3 = FUN_146f787ac(lVar6 + 0x20,DAT_14c99c740);
  if ((bVar3 & (byte)param_2) == 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x50);
    lVar6 = *(longlong *)(lVar4 + 0x80);
    if (lVar6 == 0) {
      lVar6 = lVar4;
    }
    local_40[0] = 0;
    local_58 = (undefined8 **)CONCAT44(local_58._4_4_,0x20);
    FUN_146fa989a(lVar6 + 0x20,&local_38,DAT_14c99c740);
  }
  plVar1 = *(longlong **)(param_1 + 8);
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    uVar2 = (uint)((ulonglong)DAT_14c99c788 >> 0x10);
    uVar7 = (uint)DAT_14c99c788 & 0xffff;
    plVar5 = plVar1 + 7;
    if ((longlong *)plVar1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)plVar1[8];
    }
    iVar8 = *(int *)((longlong)plVar5 +
                    (ulonglong)
                    ((int)plVar1[9] - 1U &
                    (int)((ulonglong)DAT_14c99c788 >> 0x20) + ((uint)DAT_14c99c788 << 0x10 | uVar7)
                    + (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar8 != -1) {
      do {
        if (*(longlong *)(*plVar1 + (longlong)iVar8 * 0x18) == DAT_14c99c788) {
          lVar4 = *(longlong *)(param_1 + 0x28);
          goto LAB_146fa752e;
        }
        iVar8 = *(int *)(*plVar1 + (longlong)iVar8 * 0x18 + 0x10);
      } while (iVar8 != -1);
    }
  }
  local_38 = &DAT_14c99c788;
  FUN_1412e6a90(plVar1,local_40,&local_38,0);
  lVar4 = *(longlong *)(*plVar1 + 8 + (longlong)local_40[0] * 0x18);
  *(longlong *)(param_1 + 0x28) = lVar4;
  *(longlong *)(param_1 + 0x10) = lVar4;
LAB_146fa752e:
  lVar6 = *(longlong *)(lVar4 + 0x80);
  if (*(longlong *)(lVar4 + 0x80) == 0) {
    lVar6 = lVar4;
  }
  local_58 = &local_38;
  local_38 = (undefined8 *)0x0;
  local_50 = 0x20;
  FUN_146f97abe(lVar6 + 0x20,local_40,DAT_14c99c750,1);
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x80);
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(param_1 + 0x28);
  }
  local_40[0] = -1;
  local_50 = 0x20;
  local_58 = (undefined8 **)local_40;
  FUN_146f96702(lVar4 + 0x20,&local_38,DAT_14c99c758,1);
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x80);
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(param_1 + 0x28);
  }
  FUN_146fa9a2a(lVar4 + 0x20,&local_38,DAT_14c99c760);
  FUN_146f9f256(param_1,param_2);
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146fa762e FUN_146fa762e body=23 status=ok
// SIG undefined FUN_146fa762e(void)

longlong FUN_146fa762e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x28);
  }
  return lVar1 + 0x20;
}



// FUNCTION 146fa7646 FUN_146fa7646 body=119 status=ok
// SIG undefined FUN_146fa7646(void)

void FUN_146fa7646(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  undefined4 local_30;
  undefined1 local_20 [8];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x28);
  }
  local_38 = &local_18;
  local_18 = 0x3f800000;
  uStack_14 = 0x3f800000;
  uStack_10 = 0x3f800000;
  uStack_c = 0x3f800000;
  local_30 = 0x20;
  FUN_146f9423a(lVar1 + 0x20,local_20,DAT_14c99c768,1);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fa76be FUN_146fa76be body=38 status=ok
// SIG undefined FUN_146fa76be(void)

void FUN_146fa76be(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x50);
  lVar2 = *(longlong *)(lVar1 + 0x80);
  if (lVar2 == 0) {
    lVar2 = lVar1;
  }
  FUN_146f91306(lVar2 + 0x20,DAT_14c99c748);
  return;
}



// FUNCTION 146fa76e4 FUN_146fa76e4 body=222 status=ok
// SIG undefined FUN_146fa76e4(void)

bool FUN_146fa76e4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_2c;
  longlong local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 != 0) &&
     (((int)DAT_14c99c780 != (int)param_2 ||
      (DAT_14c99c780._4_4_ != (int)((ulonglong)param_2 >> 0x20))))) {
    FUN_146fa77c4(&local_20);
    cVar2 = FUN_144a846f6(local_20);
    if (cVar2 != '\0') {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x50);
      lVar3 = *(longlong *)(lVar1 + 0x80);
      if (lVar3 == 0) {
        lVar3 = lVar1;
      }
      cVar2 = FUN_146f787ac(lVar3 + 0x20,CONCAT44(uStack_1c,local_20));
      bVar4 = true;
      if (cVar2 == '\0') {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x50);
        lVar3 = *(longlong *)(lVar1 + 0x80);
        if (lVar3 == 0) {
          lVar3 = lVar1;
        }
        local_2c = 0;
        local_38 = 0;
        FUN_146fa989a(lVar3 + 0x20,&local_28,CONCAT44(uStack_1c,local_20));
        bVar4 = local_28 != 0;
      }
      goto LAB_146fa771a;
    }
  }
  bVar4 = false;
LAB_146fa771a:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fa77c4 FUN_146fa77c4 body=233 status=ok
// SIG undefined FUN_146fa77c4(void)

undefined8 * FUN_146fa77c4(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  longlong local_50 [2];
  longlong local_40;
  int local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_2;
  if ((param_2 == 0) ||
     (((int)DAT_14c99c780 == (int)param_2 &&
      (DAT_14c99c780._4_4_ == (int)((ulonglong)param_2 >> 0x20))))) {
    *param_1 = DAT_14c99c740;
  }
  else {
    FUN_1400021e4(&local_30,local_50);
    FUN_142ab5691(local_60);
    FUN_1401c7f3e(&local_40,local_60,local_50);
    iVar1 = local_38 + -1;
    if (local_38 == 0) {
      iVar1 = 0;
    }
    FUN_1446f82e2(param_1,iVar1,local_40,1);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fa78ae FUN_146fa78ae body=114 status=ok
// SIG undefined FUN_146fa78ae(void)

undefined8 FUN_146fa78ae(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x50);
  lVar2 = *(longlong *)(lVar1 + 0x80);
  if (lVar2 == 0) {
    lVar2 = lVar1;
  }
  FUN_146fa77c4(&local_28,param_3);
  FUN_146fa7922(lVar2 + 0x20,param_2,local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fa7922 FUN_146fa7922 body=180 status=ok
// SIG undefined FUN_146fa7922(void)

void FUN_146fa7922(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) +
                    ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uVar2 << 0x13 | uVar2) +
                    (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (*plVar4 == param_3) {
          if (((plVar4 + 1 != (longlong *)0x0 && plVar4 != (longlong *)0x0) &&
              (lVar1 = plVar4[1], *(int *)(lVar1 + 8) == 4)) && (*(int *)(lVar1 + 0xc) == 0))
          goto LAB_146fa792f;
          break;
        }
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  lVar1 = 0;
LAB_146fa792f:
  *param_2 = lVar1;
  return;
}



// FUNCTION 146fa79d6 FUN_146fa79d6 body=190 status=ok
// SIG undefined FUN_146fa79d6(void)

ulonglong FUN_146fa79d6(longlong param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  longlong local_38 [2];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  local_28 = param_1;
  if (DAT_14c99c740 != param_1) {
    FUN_1400021e4(&local_28,local_38);
    FUN_142ab5691(&local_48);
    iVar4 = local_40 + -1;
    puVar2 = local_48;
    if (local_40 == 0) {
      puVar2 = &DAT_149dfb77a;
      iVar4 = 0;
    }
    uVar1 = FUN_144a791f8(local_38,puVar2,iVar4,1);
    uVar3 = (ulonglong)uVar1;
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fa7a96 FUN_146fa7a96 body=23 status=ok
// SIG undefined FUN_146fa7a96(void)

void FUN_146fa7a96(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x28);
  }
  FUN_1456bd906(lVar1);
  return;
}



// FUNCTION 146fa7aae FUN_146fa7aae body=42 status=ok
// SIG undefined FUN_146fa7aae(void)

undefined4 * FUN_146fa7aae(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x80);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
  }
  uVar1 = FUN_146f70732(lVar2);
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 146fa7ad8 FUN_146fa7ad8 body=51 status=ok
// SIG undefined FUN_146fa7ad8(void)

undefined8 FUN_146fa7ad8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x28);
  }
  FUN_146fa7b0c(lVar1 + 0x20,param_2,DAT_14c99c750);
  return param_2;
}



// FUNCTION 146fa7b0c FUN_146fa7b0c body=180 status=ok
// SIG undefined FUN_146fa7b0c(void)

void FUN_146fa7b0c(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) +
                    ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uVar2 << 0x13 | uVar2) +
                    (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (*plVar4 == param_3) {
          if (((plVar4 + 1 != (longlong *)0x0 && plVar4 != (longlong *)0x0) &&
              (lVar1 = plVar4[1], *(int *)(lVar1 + 8) == 6)) && (*(int *)(lVar1 + 0xc) == 1))
          goto LAB_146fa7b19;
          break;
        }
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  lVar1 = 0;
LAB_146fa7b19:
  *param_2 = lVar1;
  return;
}



// FUNCTION 146fa7bc0 FUN_146fa7bc0 body=51 status=ok
// SIG undefined FUN_146fa7bc0(void)

undefined8 FUN_146fa7bc0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x28);
  }
  FUN_146fa7bf4(lVar1 + 0x20,param_2,DAT_14c99c758);
  return param_2;
}



// FUNCTION 146fa7bf4 FUN_146fa7bf4 body=180 status=ok
// SIG undefined FUN_146fa7bf4(void)

void FUN_146fa7bf4(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) +
                    ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uVar2 << 0x13 | uVar2) +
                    (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (*plVar4 == param_3) {
          if (((plVar4 + 1 != (longlong *)0x0 && plVar4 != (longlong *)0x0) &&
              (lVar1 = plVar4[1], *(int *)(lVar1 + 8) == 4)) && (*(int *)(lVar1 + 0xc) == 1))
          goto LAB_146fa7c01;
          break;
        }
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  lVar1 = 0;
LAB_146fa7c01:
  *param_2 = lVar1;
  return;
}



// FUNCTION 146fa7ca8 FUN_146fa7ca8 body=51 status=ok
// SIG undefined FUN_146fa7ca8(void)

undefined8 FUN_146fa7ca8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x28);
  }
  FUN_146fa7cdc(lVar1 + 0x20,param_2,DAT_14c99c760);
  return param_2;
}



// FUNCTION 146fa7cdc FUN_146fa7cdc body=180 status=ok
// SIG undefined FUN_146fa7cdc(void)

void FUN_146fa7cdc(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) +
                    ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uVar2 << 0x13 | uVar2) +
                    (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (*plVar4 == param_3) {
          if (((plVar4 + 1 != (longlong *)0x0 && plVar4 != (longlong *)0x0) &&
              (lVar1 = plVar4[1], *(int *)(lVar1 + 8) == 7)) && (*(int *)(lVar1 + 0xc) == 1))
          goto LAB_146fa7ce9;
          break;
        }
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  lVar1 = 0;
LAB_146fa7ce9:
  *param_2 = lVar1;
  return;
}



// FUNCTION 146fa7d90 FUN_146fa7d90 body=51 status=ok
// SIG undefined FUN_146fa7d90(void)

undefined8 FUN_146fa7d90(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x28);
  }
  FUN_146fa7dc4(lVar1 + 0x20,param_2,DAT_14c99c768);
  return param_2;
}



// FUNCTION 146fa7dc4 FUN_146fa7dc4 body=180 status=ok
// SIG undefined FUN_146fa7dc4(void)

void FUN_146fa7dc4(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) +
                    ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uVar2 << 0x13 | uVar2) +
                    (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (*plVar4 == param_3) {
          if (((plVar4 + 1 != (longlong *)0x0 && plVar4 != (longlong *)0x0) &&
              (lVar1 = plVar4[1], *(int *)(lVar1 + 8) == 0)) && (*(int *)(lVar1 + 0xc) == 1))
          goto LAB_146fa7dd1;
          break;
        }
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  lVar1 = 0;
LAB_146fa7dd1:
  *param_2 = lVar1;
  return;
}



// FUNCTION 146fa7e78 FUN_146fa7e78 body=180 status=ok
// SIG undefined FUN_146fa7e78(void)

void FUN_146fa7e78(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) +
                    ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uVar2 << 0x13 | uVar2) +
                    (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (*plVar4 == param_3) {
          if (((plVar4 + 1 != (longlong *)0x0 && plVar4 != (longlong *)0x0) &&
              (lVar1 = plVar4[1], *(int *)(lVar1 + 8) == 4)) && (*(int *)(lVar1 + 0xc) == 0))
          goto LAB_146fa7e85;
          break;
        }
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  lVar1 = 0;
LAB_146fa7e85:
  *param_2 = lVar1;
  return;
}



// FUNCTION 146fa7f2c FUN_146fa7f2c body=128 status=ok
// SIG undefined FUN_146fa7f2c(void)

undefined8 * FUN_146fa7f2c(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar2 = FUN_146fa79d6(param_3);
  if (cVar2 == '\0') {
    local_28 = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x50);
    lVar3 = *(longlong *)(lVar1 + 0x80);
    if (lVar3 == 0) {
      lVar3 = lVar1;
    }
    FUN_146fa7e78(lVar3 + 0x20,&local_28,param_3);
  }
  *param_2 = local_28;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fa7fae FUN_146fa7fae body=376 status=ok
// SIG undefined FUN_146fa7fae(void)

undefined8 * FUN_146fa7fae(undefined8 *param_1,longlong param_2)

{
  void *pvVar1;
  char cVar2;
  uint uVar3;
  undefined2 *puVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  void *local_48;
  undefined8 uStack_40;
  undefined2 *local_38;
  int local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = param_2;
  if (DAT_14c99c740 == param_2) {
    *param_1 = DAT_14c99c780;
  }
  else {
    FUN_142ab5691(&local_38);
    FUN_1400021e4(&local_28,&local_48);
    iVar6 = local_30 + -1;
    puVar4 = local_38;
    if (local_30 == 0) {
      puVar4 = &DAT_149dfb77a;
      iVar6 = 0;
    }
    cVar2 = FUN_144a791f8(&local_48,puVar4,iVar6,1);
    if (local_48 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (cVar2 == '\0') {
      *param_1 = 0;
    }
    else {
      FUN_1400021e4(&local_28,&local_48);
      uVar5 = local_30 - 1;
      if (local_30 == 0) {
        uVar5 = 0;
      }
      uVar3 = (int)uStack_40 - 1;
      if ((int)uStack_40 == 0) {
        uVar3 = 0;
      }
      if ((int)uVar3 <= (int)uVar5) {
        uVar5 = uVar3;
      }
      if (0 < (int)uVar5) {
        if ((int)uStack_40 - uVar5 != 0) {
          memmove(local_48,(void *)((longlong)local_48 + (ulonglong)uVar5 * 2),
                  (longlong)(int)((int)uStack_40 - uVar5) * 2);
        }
        uVar3 = ((int)uStack_40 - uVar5) - 1;
        if ((int)uStack_40 - uVar5 == 0) {
          uVar3 = 0;
        }
      }
      pvVar1 = local_48;
      local_48 = (void *)0x0;
      uStack_40 = 0;
      FUN_1446f82e2(param_1,uVar3,pvVar1,1);
      if (pvVar1 != (void *)0x0) {
        FUN_1400020a8(pvVar1);
      }
      if (local_48 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146fa8128 FUN_146fa8128 body=146 status=ok
// SIG undefined FUN_146fa8128(void)

undefined4 FUN_146fa8128(undefined8 param_1)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = param_1;
  FUN_1400021e4(&local_20,local_30);
  iVar3 = DAT_14c99c7a0 + -1;
  puVar2 = DAT_14c99c798;
  if (DAT_14c99c7a0 == 0) {
    puVar2 = &DAT_149dfb77a;
    iVar3 = 0;
  }
  uVar1 = FUN_144a791f8(local_30,puVar2,iVar3,1);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fa81bc FUN_146fa81bc body=180 status=ok
// SIG undefined FUN_146fa81bc(void)

void FUN_146fa81bc(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) +
                    ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uVar2 << 0x13 | uVar2) +
                    (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (*plVar4 == param_3) {
          if (((plVar4 + 1 != (longlong *)0x0 && plVar4 != (longlong *)0x0) &&
              (lVar1 = plVar4[1], *(int *)(lVar1 + 8) == 6)) && (*(int *)(lVar1 + 0xc) == 1))
          goto LAB_146fa81c9;
          break;
        }
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  lVar1 = 0;
LAB_146fa81c9:
  *param_2 = lVar1;
  return;
}



// FUNCTION 146fa8270 FUN_146fa8270 body=180 status=ok
// SIG undefined FUN_146fa8270(void)

void FUN_146fa8270(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) +
                    ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uVar2 << 0x13 | uVar2) +
                    (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (*plVar4 == param_3) {
          if (((plVar4 + 1 != (longlong *)0x0 && plVar4 != (longlong *)0x0) &&
              (lVar1 = plVar4[1], *(int *)(lVar1 + 8) == 4)) && (*(int *)(lVar1 + 0xc) == 1))
          goto LAB_146fa827d;
          break;
        }
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  lVar1 = 0;
LAB_146fa827d:
  *param_2 = lVar1;
  return;
}



// FUNCTION 146fa8324 FUN_146fa8324 body=180 status=ok
// SIG undefined FUN_146fa8324(void)

void FUN_146fa8324(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) +
                    ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uVar2 << 0x13 | uVar2) +
                    (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (*plVar4 == param_3) {
          if (((plVar4 + 1 != (longlong *)0x0 && plVar4 != (longlong *)0x0) &&
              (lVar1 = plVar4[1], *(int *)(lVar1 + 8) == 7)) && (*(int *)(lVar1 + 0xc) == 1))
          goto LAB_146fa8331;
          break;
        }
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  lVar1 = 0;
LAB_146fa8331:
  *param_2 = lVar1;
  return;
}



// FUNCTION 146fa83d8 FUN_146fa83d8 body=180 status=ok
// SIG undefined FUN_146fa83d8(void)

void FUN_146fa83d8(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) +
                    ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uVar2 << 0x13 | uVar2) +
                    (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (*plVar4 == param_3) {
          if (((plVar4 + 1 != (longlong *)0x0 && plVar4 != (longlong *)0x0) &&
              (lVar1 = plVar4[1], *(int *)(lVar1 + 8) == 0)) && (*(int *)(lVar1 + 0xc) == 1))
          goto LAB_146fa83e5;
          break;
        }
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  lVar1 = 0;
LAB_146fa83e5:
  *param_2 = lVar1;
  return;
}



// FUNCTION 146fa8490 FUN_146fa8490 body=101 status=ok
// SIG undefined FUN_146fa8490(void)

void FUN_146fa8490(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_14001cc68(0x38,0x10);
  FUN_146fa70f0(plVar2,param_1 + 0x28);
  puVar1 = *(undefined8 **)(param_1 + 0x2e8);
  *(longlong **)(param_1 + 0x2e8) = plVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    plVar2 = *(longlong **)(param_1 + 0x2e8);
  }
                    /* WARNING: Could not recover jumptable at 0x000146fa84f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 8))(plVar2,0);
  return;
}



// FUNCTION 146fa84f6 FUN_146fa84f6 body=312 status=ok
// SIG undefined FUN_146fa84f6(void)

void FUN_146fa84f6(longlong *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_1[5] == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar3 = (int)param_1[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_1;
  if ((iStack_3c != iVar3) || (uStack_48 != plVar1)) {
    do {
      lVar2 = *(longlong *)(*local_78 + 8 + (longlong)iStack_5c * 0x18);
      local_98 = *param_2;
      uStack_94 = param_2[1];
      uStack_90 = param_2[2];
      uStack_8c = param_2[3];
      local_88 = param_2[4];
      uStack_84 = param_2[5];
      uStack_80 = param_2[6];
      uStack_7c = param_2[7];
      if ((*(int *)(lVar2 + 8) == 3) && (*(int *)(lVar2 + 0xc) == 1)) {
        FUN_146fa9da0(&local_98,*(undefined8 *)(*local_78 + (longlong)iStack_5c * 0x18));
      }
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_1 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar3));
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146fa8630 FUN_146fa8630 body=312 status=ok
// SIG undefined FUN_146fa8630(void)

void FUN_146fa8630(longlong *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_1[5] == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar3 = (int)param_1[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_1;
  if ((iStack_3c != iVar3) || (uStack_48 != plVar1)) {
    do {
      lVar2 = *(longlong *)(*local_78 + 8 + (longlong)iStack_5c * 0x18);
      local_98 = *param_2;
      uStack_94 = param_2[1];
      uStack_90 = param_2[2];
      uStack_8c = param_2[3];
      local_88 = param_2[4];
      uStack_84 = param_2[5];
      uStack_80 = param_2[6];
      uStack_7c = param_2[7];
      if ((*(int *)(lVar2 + 8) == 2) && (*(int *)(lVar2 + 0xc) == 1)) {
        FUN_146faa1b6(&local_98,*(undefined8 *)(*local_78 + (longlong)iStack_5c * 0x18));
      }
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_1 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar3));
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146fa876a FUN_146fa876a body=312 status=ok
// SIG undefined FUN_146fa876a(void)

void FUN_146fa876a(longlong *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_1[5] == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar3 = (int)param_1[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_1;
  if ((iStack_3c != iVar3) || (uStack_48 != plVar1)) {
    do {
      lVar2 = *(longlong *)(*local_78 + 8 + (longlong)iStack_5c * 0x18);
      local_98 = *param_2;
      uStack_94 = param_2[1];
      uStack_90 = param_2[2];
      uStack_8c = param_2[3];
      local_88 = param_2[4];
      uStack_84 = param_2[5];
      uStack_80 = param_2[6];
      uStack_7c = param_2[7];
      if ((*(int *)(lVar2 + 8) == 1) && (*(int *)(lVar2 + 0xc) == 1)) {
        FUN_146faa49a(&local_98,*(undefined8 *)(*local_78 + (longlong)iStack_5c * 0x18));
      }
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_1 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar3));
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146fa88a4 FUN_146fa88a4 body=305 status=ok
// SIG undefined FUN_146fa88a4(void)

void FUN_146fa88a4(longlong *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_1[5] == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar3 = (int)param_1[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_1;
  if ((iStack_3c != iVar3) || (uStack_48 != plVar1)) {
    do {
      lVar2 = *(longlong *)(*local_78 + 8 + (longlong)iStack_5c * 0x18);
      local_98 = *param_2;
      uStack_94 = param_2[1];
      uStack_90 = param_2[2];
      uStack_8c = param_2[3];
      local_88 = param_2[4];
      uStack_84 = param_2[5];
      uStack_80 = param_2[6];
      uStack_7c = param_2[7];
      if ((*(int *)(lVar2 + 8) == 0) && (*(int *)(lVar2 + 0xc) == 1)) {
        FUN_146faa6da(&local_98,*(undefined8 *)(*local_78 + (longlong)iStack_5c * 0x18));
      }
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_1 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar3));
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146fa89d6 FUN_146fa89d6 body=64 status=ok
// SIG undefined FUN_146fa89d6(void)

longlong FUN_146fa89d6(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146faa9c8(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 4 + *param_1;
  FUN_146c57221(lVar2,1);
  return lVar2;
}



// FUNCTION 146fa8a16 FUN_146fa8a16 body=134 status=ok
// SIG undefined FUN_146fa8a16(void)

void FUN_146fa8a16(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146c57280(param_1,iVar1);
    }
    FUN_146faaa4d((longlong)iVar1 * 0x40 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146c57306(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146c57366(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146fa8a9e FUN_146fa8a9e body=196 status=ok
// SIG undefined FUN_146fa8a9e(void)

void FUN_146fa8a9e(longlong *param_1,uint param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(*param_1 + 0x30);
  plVar4 = (longlong *)(*param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  local_40 = 0;
  local_48 = 1;
  FUN_146f88320(plVar4,local_30,param_2,*(undefined4 *)(param_3 + 0x38));
  if (0 < *(int *)(param_3 + 0x38)) {
    lVar2 = 0;
    lVar3 = (longlong)((int)param_2 >> 8) * 0xc18;
    do {
      lVar5 = *(longlong *)(param_3 + 0x30);
      if (*(longlong *)(param_3 + 0x30) == 0) {
        lVar5 = param_3;
      }
      *(uint *)((longlong)*(int *)(*plVar4 + lVar3 + 0x10 + ((ulonglong)param_2 & 0xff) * 4) * 4 +
                *(longlong *)(*plVar4 + lVar3) + lVar2 * 4) =
           CONCAT22(*(undefined2 *)(lVar5 + lVar2 * 4),*(undefined2 *)(lVar5 + 2 + lVar2 * 4));
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_3 + 0x38));
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fa8b64 FUN_146fa8b64 body=41 status=ok
// SIG undefined FUN_146fa8b64(void)

void FUN_146fa8b64(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_146faaa74();
  return;
}



// FUNCTION 146fa8b8e FUN_146fa8b8e body=29 status=ok
// SIG undefined FUN_146fa8b8e(void)

undefined8 FUN_146fa8b8e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fa8c28 FUN_146fa8c28 body=64 status=ok
// SIG undefined FUN_146fa8c28(void)

undefined4 FUN_146fa8c28(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fa8d3c FUN_146fa8d3c body=64 status=ok
// SIG undefined FUN_146fa8d3c(void)

undefined4 FUN_146fa8d3c(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fa8de4 FUN_146fa8de4 body=299 status=ok
// SIG undefined FUN_146fa8de4(void)

void FUN_146fa8de4(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_b8 [40];
  undefined1 *local_90;
  undefined4 local_88;
  undefined1 local_80 [48];
  undefined1 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_50 = (undefined1 *)0x0;
  local_48 = 0xc00000000;
  uVar5 = *(uint *)(param_2 + 1);
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar5);
  }
  if (0xc < uVar5) {
    FUN_146c57106(local_80);
    uVar5 = *(uint *)(param_2 + 1);
  }
  if (uVar5 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      uVar2 = local_48;
      if (*(ushort *)(param_3 + 8) <= *(ushort *)(lVar1 + 2 + lVar6)) {
        lVar7 = (longlong)(int)local_48;
        uVar3 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,uVar3);
        if (local_48._4_4_ < uVar3) {
          FUN_146beb76e(local_80,uVar2 & 0xffffffff);
        }
        puVar4 = local_50;
        if (local_50 == (undefined1 *)0x0) {
          puVar4 = local_80;
        }
        *(undefined4 *)(puVar4 + lVar7 * 4) = *(undefined4 *)(lVar1 + lVar6);
      }
      lVar6 = lVar6 + 4;
    } while ((longlong)(int)uVar5 * 4 != lVar6);
  }
  local_90 = local_50;
  if (local_50 == (undefined1 *)0x0) {
    local_90 = local_80;
  }
  local_88 = (int)local_48;
  FUN_146fa8f12(param_1,&local_90,param_3);
  if (local_50 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146fa8f12 FUN_146fa8f12 body=317 status=ok
// SIG undefined FUN_146fa8f12(void)

void FUN_146fa8f12(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146bec140(*param_2,(int)param_2[1],param_3,&LAB_146bebfd2);
  uVar6 = param_3[1];
  if ((int)*(uint *)(param_2 + 1) < (int)param_3[1]) {
    uVar6 = *(uint *)(param_2 + 1);
  }
  if ((uVar6 == 0) && (*(char *)(param_3 + 3) == '\x01')) {
    local_40 = 0;
    local_48 = 1;
    FUN_146f88320(*(undefined8 *)*param_1,local_38,*(undefined4 *)((undefined8 *)*param_1 + 1),1);
    uVar6 = *(uint *)((undefined8 *)*param_1 + 1);
    lVar3 = **(longlong **)*param_1;
    lVar4 = (longlong)((int)uVar6 >> 8) * 0xc18;
    *(uint *)(*(longlong *)(lVar3 + lVar4) +
             (longlong)*(int *)(lVar3 + lVar4 + 0x10 + (ulonglong)(uVar6 & 0xff) * 4) * 4) =
         (uint)*(ushort *)((longlong)param_3 + 10) << 0x10 | 0xffff;
  }
  else {
    local_40 = 0;
    local_48 = 1;
    FUN_146f88320(*(undefined8 *)*param_1,local_38,*(undefined4 *)((undefined8 *)*param_1 + 1),uVar6
                 );
    if (0 < (int)uVar6) {
      uVar5 = 0;
      do {
        uVar1 = *(uint *)(*param_2 + uVar5 * 4);
        uVar2 = *(uint *)((undefined8 *)*param_1 + 1);
        lVar3 = **(longlong **)*param_1;
        lVar4 = (longlong)((int)uVar2 >> 8) * 0xc18;
        *(uint *)((longlong)*(int *)(lVar3 + lVar4 + 0x10 + (ulonglong)(uVar2 & 0xff) * 4) * 4 +
                  *(longlong *)(lVar3 + lVar4) + uVar5 * 4) = uVar1 << 0x10 | uVar1 >> 0x10;
        uVar5 = uVar5 + 1;
      } while (uVar6 != uVar5);
    }
    FUN_146fa9050(param_1,*param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fa9050 FUN_146fa9050 body=479 status=ok
// SIG undefined FUN_146fa9050(void)

void FUN_146fa9050(longlong *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    uVar1 = *(uint *)((undefined8 *)*param_1 + 1);
    uVar6 = uVar1 & 0xff;
    lVar13 = **(longlong **)*param_1;
    lVar11 = (longlong)((int)uVar1 >> 8) * 0xc18;
    lVar8 = lVar13 + lVar11;
    uVar1 = *(uint *)(lVar8 + 0x410 + (ulonglong)uVar6 * 4);
    if (uVar1 != 0) {
      if (uVar1 == 1) {
        if (param_2 == 2) {
          lVar8 = (longlong)*(int *)(lVar8 + 0x10 + (ulonglong)uVar6 * 4);
          *(uint *)(*(longlong *)(lVar13 + lVar11) + lVar8 * 4) =
               (uint)*(ushort *)(*(longlong *)(lVar13 + lVar11) + 2 + lVar8 * 4) << 0x10 | 0xffff;
        }
      }
      else if (0 < (int)uVar1) {
        uVar10 = 0;
        uVar12 = 0;
        do {
          uVar12 = uVar12 + *(ushort *)
                             ((longlong)*(int *)(lVar8 + 0x10 + (ulonglong)uVar6 * 4) * 4 +
                              *(longlong *)(lVar13 + lVar11) + uVar10 * 4);
          uVar10 = uVar10 + 1;
        } while (uVar1 != uVar10);
        if (0xffff < uVar12 || uVar12 != 0 && param_2 == 2) {
          uVar10 = 0;
          lVar8 = 0;
          uVar6 = 0xffff;
          bVar5 = 0;
          do {
            bVar4 = bVar5;
            uVar2 = *(uint *)((undefined8 *)*param_1 + 1);
            lVar13 = **(longlong **)*param_1;
            lVar11 = (longlong)((int)uVar2 >> 8) * 0xc18;
            lVar13 = (longlong)*(int *)(lVar13 + lVar11 + 0x10 + (ulonglong)(uVar2 & 0xff) * 4) * 4
                     + *(longlong *)(lVar13 + lVar11);
            uVar2 = *(uint *)(lVar13 + uVar10 * 4);
            lVar8 = ((ulonglong)(uVar2 << 0x10) - ((ulonglong)uVar2 & 0xffff)) + lVar8;
            uVar9 = lVar8 / (longlong)uVar12;
            if (0xfffe < (longlong)uVar9) {
              uVar9 = 0xffff;
            }
            lVar8 = lVar8 - (uVar9 & 0xffff) * uVar12;
            uVar7 = (uint)uVar9;
            *(uint *)(lVar13 + uVar10 * 4) = uVar2 & 0xffff0000 | uVar7 & 0xffff;
            bVar3 = (uVar6 & 0xffff) < (uVar7 & 0xffff);
            uVar10 = uVar10 + 1;
            uVar6 = uVar7;
            bVar5 = bVar4 | bVar3;
          } while (uVar1 != uVar10);
          if ((bool)(bVar4 | bVar3)) {
            local_40 = &LAB_146bebfd2;
            uVar1 = *(uint *)((undefined8 *)*param_1 + 1);
            uVar10 = (ulonglong)(uVar1 & 0xff);
            lVar13 = **(longlong **)*param_1;
            lVar11 = (longlong)((int)uVar1 >> 8) * 0xc18;
            lVar8 = lVar13 + lVar11;
            FUN_146fa9230((longlong)*(int *)(lVar8 + 0x10 + uVar10 * 4) * 4 +
                          *(longlong *)(lVar13 + lVar11),*(undefined4 *)(lVar8 + 0x410 + uVar10 * 4)
                         );
          }
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fa9230 FUN_146fa9230 body=808 status=ok
// SIG undefined FUN_146fa9230(void)

void FUN_146fa9230(longlong param_1,uint param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  char cVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  float fVar13;
  undefined1 auStack_398 [32];
  longlong *local_378;
  int local_36c;
  uint *local_368;
  uint *local_360;
  uint *local_358;
  uint local_350;
  uint local_34c;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_398;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 4 + -4;
    local_348 = param_1;
    fVar13 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar13 + fVar13);
    plVar7 = &local_348;
    do {
      puVar10 = (uint *)*plVar7;
      puVar3 = (uint *)plVar7[1];
      local_36c = (int)plVar7[2];
      iVar5 = (int)((ulonglong)((longlong)puVar3 - (longlong)puVar10) >> 2);
      puVar8 = puVar3;
      puVar12 = puVar10;
      puVar11 = puVar10;
      local_378 = plVar7;
      if (local_36c != 0) {
LAB_146fa9307:
        if (8 < (int)(iVar5 + 1U)) {
          uVar6 = iVar5 + 1U >> 1;
          uVar1 = puVar11[uVar6];
          puVar11[uVar6] = *puVar11;
          *puVar11 = uVar1;
          puVar9 = puVar8 + 1;
          puVar12 = puVar11;
          local_368 = puVar8;
          local_360 = puVar10;
          local_358 = puVar3;
          do {
            puVar8 = local_368;
            puVar10 = puVar12 + 1;
            puVar3 = puVar12 + 1;
            do {
              puVar12 = puVar3;
              puVar4 = puVar10;
              if (puVar8 < puVar12) break;
              local_34c = *puVar12 >> 0x10 | *puVar12 << 0x10;
              local_350 = *puVar11 >> 0x10 | *puVar11 << 0x10;
              cVar2 = (*(code *)*param_4)(&local_350,&local_34c);
              puVar10 = puVar4 + 1;
              puVar3 = puVar12 + 1;
            } while (cVar2 == '\0');
            puVar8 = puVar9 + -2;
            do {
              puVar10 = puVar9;
              puVar3 = puVar8;
              puVar9 = puVar10 + -1;
              if (puVar9 <= puVar11) break;
              local_34c = *puVar11 >> 0x10 | *puVar11 << 0x10;
              local_350 = *puVar9 >> 0x10 | *puVar9 << 0x10;
              cVar2 = (*(code *)*param_4)(&local_350,&local_34c);
              puVar8 = puVar3 + -1;
            } while (cVar2 == '\0');
            if (puVar9 < puVar12) goto LAB_146fa93e5;
            uVar1 = *puVar12;
            *puVar12 = *puVar9;
            *puVar9 = uVar1;
          } while( true );
        }
        for (; plVar7 = local_378, puVar3 = puVar11, puVar10 = puVar11, puVar11 < puVar8;
            puVar8 = puVar8 + -1) {
          while (puVar10 = puVar10 + 1, puVar10 <= puVar8) {
            local_34c = *puVar10 >> 0x10 | *puVar10 << 0x10;
            local_350 = *puVar3 >> 0x10 | *puVar3 << 0x10;
            cVar2 = (*(code *)*param_4)(&local_350,&local_34c);
            if (cVar2 != '\0') {
              puVar3 = puVar10;
            }
          }
          uVar1 = *puVar3;
          *puVar3 = *puVar8;
          *puVar8 = uVar1;
        }
        goto LAB_146fa9524;
      }
LAB_146fa9546:
      FUN_146fa9559(puVar12);
      plVar7 = local_378;
LAB_146fa9524:
      plVar7 = plVar7 + -3;
    } while (&local_348 <= plVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146fa93e5:
  uVar1 = *puVar11;
  *puVar11 = *puVar9;
  *puVar9 = uVar1;
  local_36c = local_36c + -1;
  puVar10 = puVar10 + -2;
  if ((longlong)puVar3 - (longlong)local_360 < (longlong)local_358 - (longlong)puVar4) {
    plVar7 = local_378;
    if (puVar12 < local_368) {
      *local_378 = (longlong)puVar12;
      local_378[1] = (longlong)local_368;
      *(int *)(local_378 + 2) = local_36c;
      plVar7 = local_378 + 3;
    }
    puVar12 = puVar11;
    if (puVar9 <= puVar11 + 1) goto LAB_146fa9524;
  }
  else {
    if (puVar11 + 1 < puVar9) {
      *local_378 = (longlong)puVar11;
      local_378[1] = (longlong)puVar10;
      *(int *)(local_378 + 2) = local_36c;
      local_378 = local_378 + 3;
    }
    plVar7 = local_378;
    puVar3 = local_368;
    puVar11 = puVar4;
    puVar10 = local_368;
    if (local_368 <= puVar12) goto LAB_146fa9524;
  }
  local_368 = puVar10;
  local_378 = plVar7;
  iVar5 = (int)((ulonglong)((longlong)puVar3 - (longlong)puVar11) >> 2);
  puVar8 = local_368;
  puVar10 = puVar11;
  puVar11 = puVar12;
  if (local_36c == 0) goto LAB_146fa9546;
  goto LAB_146fa9307;
}



// FUNCTION 146fa9559 FUN_146fa9559 body=529 status=ok
// SIG undefined FUN_146fa9559(void)

void FUN_146fa9559(undefined4 *param_1,uint param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_78 [40];
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    iVar6 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar5 = iVar6;
joined_r0x000146fa95b0:
    do {
      iVar3 = iVar6 * 2 + 1;
      if (iVar3 < (int)param_2) {
        iVar4 = iVar6 * 2 + 2;
        if (iVar4 < (int)param_2) {
          local_4c = (uint)param_1[iVar3] >> 0x10 | param_1[iVar3] << 0x10;
          local_50 = (uint)param_1[iVar4] >> 0x10 | param_1[iVar4] << 0x10;
          cVar2 = (*(code *)*param_4)(&local_50,&local_4c);
          if (cVar2 == '\0') {
            iVar3 = iVar4;
          }
        }
        local_4c = (uint)param_1[iVar3] >> 0x10 | param_1[iVar3] << 0x10;
        local_50 = (uint)param_1[iVar6] >> 0x10 | param_1[iVar6] << 0x10;
        cVar2 = (*(code *)*param_4)(&local_50,&local_4c);
        if (cVar2 != '\0') {
          uVar1 = param_1[iVar6];
          param_1[iVar6] = param_1[iVar3];
          param_1[iVar3] = uVar1;
          iVar6 = iVar3;
          goto joined_r0x000146fa95b0;
        }
      }
      bVar9 = iVar5 != 0;
      iVar6 = iVar5 + -1;
      iVar5 = iVar6;
    } while (bVar9);
    if (1 < (int)param_2) {
      uVar7 = (ulonglong)param_2;
      uVar1 = *param_1;
      *param_1 = param_1[uVar7 - 1];
      param_1[uVar7 - 1] = uVar1;
      if (param_2 != 2) {
        do {
          uVar8 = uVar7 - 1;
          iVar6 = 0;
          iVar3 = 1;
          iVar5 = 0;
          do {
            iVar6 = iVar6 + 2;
            iVar4 = iVar3;
            if ((longlong)iVar6 < (longlong)uVar8) {
              local_4c = (uint)param_1[iVar3] >> 0x10 | param_1[iVar3] << 0x10;
              local_50 = (uint)param_1[iVar6] >> 0x10 | param_1[iVar6] << 0x10;
              cVar2 = (*(code *)*param_4)(&local_50,&local_4c);
              if (cVar2 == '\0') {
                iVar4 = iVar6;
              }
            }
            local_4c = (uint)param_1[iVar4] >> 0x10 | param_1[iVar4] << 0x10;
            local_50 = (uint)param_1[iVar5] >> 0x10 | param_1[iVar5] << 0x10;
            cVar2 = (*(code *)*param_4)(&local_50,&local_4c);
            if (cVar2 == '\0') break;
            uVar1 = param_1[iVar5];
            param_1[iVar5] = param_1[iVar4];
            param_1[iVar4] = uVar1;
            iVar6 = iVar4 * 2;
            iVar3 = iVar4 * 2 + 1;
            iVar5 = iVar4;
          } while ((longlong)iVar3 < (longlong)uVar8);
          uVar1 = *param_1;
          *param_1 = param_1[uVar7 - 2];
          param_1[uVar7 - 2] = uVar1;
          uVar7 = uVar8;
        } while (2 < uVar8);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146fa976c FUN_146fa976c body=299 status=ok
// SIG undefined FUN_146fa976c(void)

void FUN_146fa976c(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_b8 [40];
  undefined1 *local_90;
  undefined4 local_88;
  undefined1 local_80 [48];
  undefined1 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_50 = (undefined1 *)0x0;
  local_48 = 0xc00000000;
  uVar5 = *(uint *)(param_2 + 1);
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar5);
  }
  if (0xc < uVar5) {
    FUN_146c57106(local_80);
    uVar5 = *(uint *)(param_2 + 1);
  }
  if (uVar5 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      uVar2 = local_48;
      if (*(ushort *)(param_3 + 8) <= *(ushort *)(lVar1 + 2 + lVar6)) {
        lVar7 = (longlong)(int)local_48;
        uVar3 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,uVar3);
        if (local_48._4_4_ < uVar3) {
          FUN_146beb76e(local_80,uVar2 & 0xffffffff);
        }
        puVar4 = local_50;
        if (local_50 == (undefined1 *)0x0) {
          puVar4 = local_80;
        }
        *(undefined4 *)(puVar4 + lVar7 * 4) = *(undefined4 *)(lVar1 + lVar6);
      }
      lVar6 = lVar6 + 4;
    } while ((longlong)(int)uVar5 * 4 != lVar6);
  }
  local_90 = local_50;
  if (local_50 == (undefined1 *)0x0) {
    local_90 = local_80;
  }
  local_88 = (int)local_48;
  FUN_146beb632(param_1,&local_90,param_3);
  if (local_50 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146fa989a FUN_146fa989a body=399 status=ok
// SIG undefined FUN_146fa989a(void)

longlong *
FUN_146fa989a(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4,
             undefined4 param_5)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined8 *local_58;
  longlong local_50;
  longlong *local_48;
  undefined8 **local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = param_3;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar4 = (uint)param_3 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar4) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar3 = (longlong *)(*param_1 + (longlong)iVar5 * 0x18);
        if (*plVar3 == param_3) {
          plVar6 = plVar3 + 1;
          if (plVar6 != (longlong *)0x0 && plVar3 != (longlong *)0x0) {
            plVar3 = (longlong *)*plVar6;
            if (((int)plVar3[1] == 4) && (*(int *)((longlong)plVar3 + 0xc) == 0)) {
              (**(code **)(*plVar3 + 0x70))(plVar3,1);
              *(undefined4 *)(*plVar6 + 0x14) = param_5;
              goto LAB_146fa9944;
            }
            FUN_146f91306(param_1,param_3);
          }
          break;
        }
        iVar5 = (int)plVar3[2];
      } while (iVar5 != -1);
    }
  }
  local_68 = (undefined4)param_1[10];
  local_60 = 0;
  FUN_1412e701c(&local_58,1,param_4,param_5);
  local_48 = &local_50;
  local_40 = &local_58;
  FUN_1412e71e2(param_1,&local_34,&local_48,0);
  lVar1 = *param_1;
  if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,1);
  }
  plVar6 = (longlong *)(lVar1 + (longlong)local_34 * 0x18 + 8);
LAB_146fa9944:
  *param_2 = *plVar6;
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146fa9a2a FUN_146fa9a2a body=347 status=ok
// SIG undefined FUN_146fa9a2a(void)

longlong * FUN_146fa9a2a(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  longlong local_48;
  longlong *local_40;
  undefined8 **local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_3;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar3 = (uint)((ulonglong)param_3 >> 0x10);
    uVar4 = (uint)param_3 & 0xffff;
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar6 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar4) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar6 = (longlong *)(*param_1 + (longlong)iVar5 * 0x18);
        if (*plVar6 == param_3) {
          if ((plVar6 != (longlong *)0x0) && (plVar6 = plVar6 + 1, plVar6 != (longlong *)0x0)) {
            plVar1 = (longlong *)*plVar6;
            if (((int)plVar1[1] == 7) && (*(int *)((longlong)plVar1 + 0xc) == 1)) {
              (**(code **)(*plVar1 + 0x70))(plVar1,1);
              *(undefined4 *)(*plVar6 + 0x14) = 0x20;
              goto LAB_146fa9af4;
            }
            FUN_146f91306(param_1,param_3);
          }
          break;
        }
        iVar5 = (int)plVar6[2];
      } while (iVar5 != -1);
    }
  }
  FUN_146fa9b86(&local_50,(int)param_1[10]);
  local_40 = &local_48;
  local_38 = &local_50;
  FUN_1412e71e2(param_1,&local_2c,&local_40,0);
  lVar2 = *param_1;
  if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,1);
  }
  plVar6 = (longlong *)(lVar2 + (longlong)local_2c * 0x18 + 8);
LAB_146fa9af4:
  *param_2 = *plVar6;
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146fa9b86 FUN_146fa9b86 body=157 status=ok
// SIG undefined FUN_146fa9b86(void)

longlong * FUN_146fa9b86(longlong *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_1 = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0xa0,0x10);
  puVar1[1] = &DAT_100000007;
  *(undefined4 *)(puVar1 + 2) = param_2;
  *(undefined4 *)((longlong)puVar1 + 0x14) = 0x20;
  *puVar1 = &PTR_FUN_149fa7db0;
  puVar1[6] = 0;
  puVar1[7] = 0x100000000;
  puVar3 = &DAT_14c846480;
  puVar4 = puVar1 + 8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_146f8e0ae(puVar1,1);
  puVar3 = (undefined8 *)*param_1;
  *param_1 = (longlong)puVar1;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  return param_1;
}



// FUNCTION 146fa9c24 FUN_146fa9c24 body=34 status=ok
// SIG undefined FUN_146fa9c24(void)

void FUN_146fa9c24(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_149faa910;
  return;
}



// FUNCTION 146fa9c46 FUN_146fa9c46 body=31 status=ok
// SIG undefined FUN_146fa9c46(void)

undefined8 FUN_146fa9c46(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fa9c82 FUN_146fa9c82 body=93 status=ok
// SIG undefined FUN_146fa9c82(void)

void FUN_146fa9c82(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149faa8a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146fa9ce0 FUN_146fa9ce0 body=123 status=ok
// SIG undefined FUN_146fa9ce0(void)

void FUN_146fa9ce0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149faa8a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146fa9d68 FUN_146fa9d68 body=21 status=ok
// SIG undefined FUN_146fa9d68(void)

undefined8 FUN_146fa9d68(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146fa9d7e FUN_146fa9d7e body=29 status=ok
// SIG undefined FUN_146fa9d7e(void)

undefined8 FUN_146fa9d7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fa9da0 FUN_146fa9da0 body=550 status=ok
// SIG undefined FUN_146fa9da0(void)

void FUN_146fa9da0(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  undefined4 local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar2 = FUN_146fa9fc8(param_2);
  uVar1 = local_78;
  if (cVar2 == '\0') {
    lVar9 = *(longlong *)(*(longlong *)(param_1[1] + 0x50) + 0x80);
    if (lVar9 == 0) {
      lVar9 = *(longlong *)(param_1[1] + 0x50);
    }
    lVar4 = (longlong)(int)((longlong *)param_1[2])[1];
    if (lVar4 != 0) {
      lVar7 = 0;
      do {
        if (*(longlong *)(*(longlong *)param_1[2] + lVar7) == param_2) goto LAB_146fa9e80;
        lVar7 = lVar7 + 8;
      } while (lVar4 * 8 != lVar7);
    }
    local_90 = *(undefined4 *)(param_3 + 0x14);
    local_88 = *(undefined4 *)(param_3 + 0x40);
    local_98 = &local_88;
    FUN_146f95cb4(lVar9 + 0x20,&local_60,param_2,*(undefined4 *)(param_3 + 0x38));
    plVar6 = (longlong *)param_1[2];
    iVar8 = (int)plVar6[1];
    *(uint *)(plVar6 + 1) = iVar8 + 1U;
    if (*(uint *)((longlong)plVar6 + 0xc) < iVar8 + 1U) {
      FUN_1446f84a2(plVar6,iVar8);
    }
    *(longlong *)(*plVar6 + (longlong)iVar8 * 8) = param_2;
LAB_146fa9e80:
    FUN_146faa024(lVar9 + 0x20,&local_68,param_2);
    lVar9 = *(longlong *)(*(longlong *)(*param_1 + 0x50) + 0x80);
    if (lVar9 == 0) {
      lVar9 = *(longlong *)(*param_1 + 0x50);
    }
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    uStack_48 = 0;
    uStack_58 = lVar9;
    if (*(int *)(lVar9 + 0x18) == 0) {
      iVar8 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar8 = *(int *)(lVar9 + 0x18);
    }
    local_88 = (undefined4)local_60;
    uStack_84 = local_60._4_4_;
    uStack_80 = (undefined4)uStack_58;
    uStack_7c = uStack_58._4_4_;
    uStack_70 = CONCAT44(uStack_44,uStack_48);
    local_78 = local_50;
    uVar1 = local_78;
    local_78._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    if (uStack_58 != lVar9 || local_78._4_4_ != iVar8) {
      lVar4 = uStack_58;
      iVar3 = local_78._4_4_;
      local_78 = uVar1;
      do {
        if (*(int *)(lVar4 + 0x18) <= iVar3) {
          iVar3 = -1;
        }
        plVar6 = *(longlong **)(param_3 + 0x30);
        if (*(longlong **)(param_3 + 0x30) == (longlong *)0x0) {
          plVar6 = (longlong *)(param_3 + 0x18);
        }
        plVar5 = (longlong *)(local_68 + 0x18);
        if (*(longlong **)(local_68 + 0x30) != (longlong *)0x0) {
          plVar5 = *(longlong **)(local_68 + 0x30);
        }
        *(undefined4 *)(*plVar5 + (longlong)(((int)param_1[3] + iVar3) * (int)plVar5[2]) * 4) =
             *(undefined4 *)(*plVar6 + (longlong)(iVar3 * (int)plVar6[2]) * 4);
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        lVar4 = CONCAT44(uStack_7c,uStack_80);
        iVar3 = local_78._4_4_;
        uVar1 = local_78;
      } while (lVar4 != lVar9 || local_78._4_4_ != iVar8);
    }
  }
  local_78 = uVar1;
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146fa9fc8 FUN_146fa9fc8 body=92 status=ok
// SIG undefined FUN_146fa9fc8(void)

ulonglong FUN_146fa9fc8(longlong param_1)

{
  char cVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  undefined7 uVar3;
  
  cVar1 = FUN_146faa0d8();
  uVar3 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar2 = CONCAT71(uVar3,1);
  if (cVar1 == '\0') {
    cVar1 = FUN_146fa79d6(param_1);
    if (cVar1 == '\0') {
      cVar1 = FUN_146fa8128(param_1);
      if ((((cVar1 == '\0') && (DAT_14c99c750 != param_1)) && (DAT_14c99c758 != param_1)) &&
         (DAT_14c99c760 != param_1)) {
        uVar2 = CONCAT71(uVar3,DAT_14c99c768 == param_1);
      }
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 146faa024 FUN_146faa024 body=180 status=ok
// SIG undefined FUN_146faa024(void)

void FUN_146faa024(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) +
                    ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uVar2 << 0x13 | uVar2) +
                    (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (*plVar4 == param_3) {
          if (((plVar4 + 1 != (longlong *)0x0 && plVar4 != (longlong *)0x0) &&
              (lVar1 = plVar4[1], *(int *)(lVar1 + 8) == 3)) && (*(int *)(lVar1 + 0xc) == 1))
          goto LAB_146faa031;
          break;
        }
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  lVar1 = 0;
LAB_146faa031:
  *param_2 = lVar1;
  return;
}



// FUNCTION 146faa0d8 FUN_146faa0d8 body=118 status=ok
// SIG undefined FUN_146faa0d8(void)

bool FUN_146faa0d8(longlong param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_146faa14e();
  bVar2 = true;
  if ((((((cVar1 == '\0') && (DAT_14c99c620 != param_1)) && (DAT_14c99c628 != param_1)) &&
       ((DAT_14c99c630 != param_1 && (DAT_14c99c638 != param_1)))) &&
      ((DAT_14c99c640 != param_1 && ((DAT_14c99c648 != param_1 && (DAT_14c99c650 != param_1)))))) &&
     ((DAT_14c99c658 != param_1 && (DAT_14c99c660 != param_1)))) {
    bVar2 = DAT_14c99c688 == param_1;
  }
  return bVar2;
}



// FUNCTION 146faa14e FUN_146faa14e body=103 status=ok
// SIG undefined FUN_146faa14e(void)

bool FUN_146faa14e(longlong param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if ((((((DAT_14c99c0d0 != param_1) && (DAT_14c99c0d8 != param_1)) && (DAT_14c99c0e0 != param_1))
       && ((DAT_14c99c0e8 != param_1 && (DAT_14c99c0f0 != param_1)))) &&
      ((DAT_14c99c0f8 != param_1 && ((DAT_14c99c100 != param_1 && (DAT_14c99c108 != param_1)))))) &&
     ((DAT_14c99c110 != param_1 && (DAT_14c99c118 != param_1)))) {
    bVar1 = DAT_14c99c120 == param_1;
  }
  return bVar1;
}



// FUNCTION 146faa1b6 FUN_146faa1b6 body=558 status=ok
// SIG undefined FUN_146faa1b6(void)

void FUN_146faa1b6(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar2 = FUN_146fa9fc8(param_2);
  uVar1 = local_88;
  if (cVar2 == '\0') {
    lVar9 = *(longlong *)(*(longlong *)(param_1[1] + 0x50) + 0x80);
    if (lVar9 == 0) {
      lVar9 = *(longlong *)(param_1[1] + 0x50);
    }
    lVar4 = (longlong)(int)((longlong *)param_1[2])[1];
    if (lVar4 != 0) {
      lVar7 = 0;
      do {
        if (*(longlong *)(*(longlong *)param_1[2] + lVar7) == param_2) goto LAB_146faa29e;
        lVar7 = lVar7 + 8;
      } while (lVar4 * 8 != lVar7);
    }
    local_a0 = *(undefined4 *)(param_3 + 0x14);
    local_68 = *(undefined8 *)(param_3 + 0x40);
    local_a8 = &local_68;
    FUN_1458c326a(lVar9 + 0x20,&local_98,param_2,*(undefined4 *)(param_3 + 0x38));
    plVar5 = (longlong *)param_1[2];
    iVar8 = (int)plVar5[1];
    *(uint *)(plVar5 + 1) = iVar8 + 1U;
    if (*(uint *)((longlong)plVar5 + 0xc) < iVar8 + 1U) {
      FUN_1446f84a2(plVar5,iVar8);
    }
    *(longlong *)(*plVar5 + (longlong)iVar8 * 8) = param_2;
LAB_146faa29e:
    FUN_146faa3e6(lVar9 + 0x20,&local_70,param_2);
    lVar9 = *(longlong *)(*(longlong *)(*param_1 + 0x50) + 0x80);
    if (lVar9 == 0) {
      lVar9 = *(longlong *)(*param_1 + 0x50);
    }
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = lVar9;
    if (*(int *)(lVar9 + 0x18) == 0) {
      iVar8 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar8 = *(int *)(lVar9 + 0x18);
    }
    local_98 = (undefined4)local_68;
    uStack_94 = local_68._4_4_;
    uStack_90 = (undefined4)uStack_60;
    uStack_8c = uStack_60._4_4_;
    uStack_80 = CONCAT44(uStack_4c,uStack_50);
    local_88 = local_58;
    uVar1 = local_88;
    local_88._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    if (uStack_60 != lVar9 || local_88._4_4_ != iVar8) {
      lVar4 = uStack_60;
      iVar3 = local_88._4_4_;
      local_88 = uVar1;
      do {
        if (*(int *)(lVar4 + 0x18) <= iVar3) {
          iVar3 = -1;
        }
        plVar5 = *(longlong **)(param_3 + 0x30);
        if (*(longlong **)(param_3 + 0x30) == (longlong *)0x0) {
          plVar5 = (longlong *)(param_3 + 0x18);
        }
        plVar6 = *(longlong **)(local_70 + 0x30);
        if (*(longlong **)(local_70 + 0x30) == (longlong *)0x0) {
          plVar6 = (longlong *)(local_70 + 0x18);
        }
        *(undefined8 *)(*plVar6 + (longlong)(((int)param_1[3] + iVar3) * (int)plVar6[2]) * 8) =
             *(undefined8 *)(*plVar5 + (longlong)(iVar3 * (int)plVar5[2]) * 8);
        local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~uStack_94);
        FUN_1449c0562(&local_98);
        lVar4 = CONCAT44(uStack_8c,uStack_90);
        iVar3 = local_88._4_4_;
        uVar1 = local_88;
      } while (lVar4 != lVar9 || local_88._4_4_ != iVar8);
    }
  }
  local_88 = uVar1;
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146faa3e6 FUN_146faa3e6 body=180 status=ok
// SIG undefined FUN_146faa3e6(void)

void FUN_146faa3e6(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) +
                    ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uVar2 << 0x13 | uVar2) +
                    (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (*plVar4 == param_3) {
          if (((plVar4 + 1 != (longlong *)0x0 && plVar4 != (longlong *)0x0) &&
              (lVar1 = plVar4[1], *(int *)(lVar1 + 8) == 2)) && (*(int *)(lVar1 + 0xc) == 1))
          goto LAB_146faa3f3;
          break;
        }
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  lVar1 = 0;
LAB_146faa3f3:
  *param_2 = lVar1;
  return;
}



// FUNCTION 146faa49a FUN_146faa49a body=574 status=ok
// SIG undefined FUN_146faa49a(void)

void FUN_146faa49a(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined4 local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar2 = FUN_146fa9fc8(param_2);
  uVar1 = local_78;
  if (cVar2 == '\0') {
    lVar10 = *(longlong *)(*(longlong *)(param_1[1] + 0x50) + 0x80);
    if (lVar10 == 0) {
      lVar10 = *(longlong *)(param_1[1] + 0x50);
    }
    lVar4 = (longlong)(int)((longlong *)param_1[2])[1];
    if (lVar4 != 0) {
      lVar7 = 0;
      do {
        if (*(longlong *)(*(longlong *)param_1[2] + lVar7) == param_2) goto LAB_146faa57e;
        lVar7 = lVar7 + 8;
      } while (lVar4 * 8 != lVar7);
    }
    local_90 = *(undefined4 *)(param_3 + 0x14);
    local_98 = &local_60;
    uStack_58 = CONCAT44(uStack_58._4_4_,*(undefined4 *)(param_3 + 0x48));
    local_60 = *(undefined8 *)(param_3 + 0x40);
    FUN_1458c2ed2(lVar10 + 0x20,&local_88,param_2,*(undefined4 *)(param_3 + 0x38));
    plVar6 = (longlong *)param_1[2];
    iVar8 = (int)plVar6[1];
    *(uint *)(plVar6 + 1) = iVar8 + 1U;
    if (*(uint *)((longlong)plVar6 + 0xc) < iVar8 + 1U) {
      FUN_1446f84a2(plVar6,iVar8);
    }
    *(longlong *)(*plVar6 + (longlong)iVar8 * 8) = param_2;
LAB_146faa57e:
    FUN_146fa1f1e(lVar10 + 0x20,&local_68,param_2);
    lVar10 = *(longlong *)(*(longlong *)(*param_1 + 0x50) + 0x80);
    if (lVar10 == 0) {
      lVar10 = *(longlong *)(*param_1 + 0x50);
    }
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    uStack_48 = 0;
    uStack_58 = lVar10;
    if (*(int *)(lVar10 + 0x18) == 0) {
      iVar8 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar8 = *(int *)(lVar10 + 0x18);
    }
    local_88 = (undefined4)local_60;
    uStack_84 = local_60._4_4_;
    uStack_80 = (undefined4)uStack_58;
    uStack_7c = uStack_58._4_4_;
    uStack_70 = CONCAT44(uStack_44,uStack_48);
    local_78 = local_50;
    uVar1 = local_78;
    local_78._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    if (uStack_58 != lVar10 || local_78._4_4_ != iVar8) {
      lVar4 = uStack_58;
      iVar3 = local_78._4_4_;
      local_78 = uVar1;
      do {
        if (*(int *)(lVar4 + 0x18) <= iVar3) {
          iVar3 = -1;
        }
        plVar6 = *(longlong **)(param_3 + 0x30);
        if (*(longlong **)(param_3 + 0x30) == (longlong *)0x0) {
          plVar6 = (longlong *)(param_3 + 0x18);
        }
        lVar4 = (longlong)(iVar3 * (int)plVar6[2]);
        plVar9 = (longlong *)(local_68 + 0x18);
        if (*(longlong **)(local_68 + 0x30) != (longlong *)0x0) {
          plVar9 = *(longlong **)(local_68 + 0x30);
        }
        lVar7 = *plVar9;
        lVar5 = (longlong)(((int)param_1[3] + iVar3) * (int)plVar9[2]);
        uVar1 = *(undefined8 *)(*plVar6 + lVar4 * 0xc);
        *(undefined4 *)(lVar7 + 8 + lVar5 * 0xc) = *(undefined4 *)(*plVar6 + 8 + lVar4 * 0xc);
        *(undefined8 *)(lVar7 + lVar5 * 0xc) = uVar1;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        lVar4 = CONCAT44(uStack_7c,uStack_80);
        iVar3 = local_78._4_4_;
        uVar1 = local_78;
      } while (lVar4 != lVar10 || local_78._4_4_ != iVar8);
    }
  }
  local_78 = uVar1;
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146faa6da FUN_146faa6da body=568 status=ok
// SIG undefined FUN_146faa6da(void)

void FUN_146faa6da(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar7 = FUN_146fa9fc8(param_2);
  uVar6 = local_88;
  if (cVar7 == '\0') {
    lVar14 = *(longlong *)(*(longlong *)(param_1[1] + 0x50) + 0x80);
    if (lVar14 == 0) {
      lVar14 = *(longlong *)(param_1[1] + 0x50);
    }
    lVar9 = (longlong)(int)((longlong *)param_1[2])[1];
    if (lVar9 != 0) {
      lVar11 = 0;
      do {
        if (*(longlong *)(*(longlong *)param_1[2] + lVar11) == param_2) goto LAB_146faa7c2;
        lVar11 = lVar11 + 8;
      } while (lVar9 * 8 != lVar11);
    }
    local_a0 = *(undefined4 *)(param_3 + 0x14);
    local_68 = *(undefined8 *)(param_3 + 0x40);
    uStack_60 = *(longlong *)(param_3 + 0x48);
    local_a8 = &local_68;
    FUN_146f9423a(lVar14 + 0x20,&local_98,param_2,*(undefined4 *)(param_3 + 0x38));
    plVar10 = (longlong *)param_1[2];
    iVar12 = (int)plVar10[1];
    *(uint *)(plVar10 + 1) = iVar12 + 1U;
    if (*(uint *)((longlong)plVar10 + 0xc) < iVar12 + 1U) {
      FUN_1446f84a2(plVar10,iVar12);
    }
    *(longlong *)(*plVar10 + (longlong)iVar12 * 8) = param_2;
LAB_146faa7c2:
    FUN_146faa914(lVar14 + 0x20,&local_70,param_2);
    lVar14 = *(longlong *)(*(longlong *)(*param_1 + 0x50) + 0x80);
    if (lVar14 == 0) {
      lVar14 = *(longlong *)(*param_1 + 0x50);
    }
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = lVar14;
    if (*(int *)(lVar14 + 0x18) == 0) {
      iVar12 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar12 = *(int *)(lVar14 + 0x18);
    }
    local_98 = (undefined4)local_68;
    uStack_94 = local_68._4_4_;
    uStack_90 = (undefined4)uStack_60;
    uStack_8c = uStack_60._4_4_;
    uStack_80 = CONCAT44(uStack_4c,uStack_50);
    local_88 = local_58;
    uVar6 = local_88;
    local_88._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    if (uStack_60 != lVar14 || local_88._4_4_ != iVar12) {
      lVar9 = uStack_60;
      iVar8 = local_88._4_4_;
      local_88 = uVar6;
      do {
        if (*(int *)(lVar9 + 0x18) <= iVar8) {
          iVar8 = -1;
        }
        plVar10 = *(longlong **)(param_3 + 0x30);
        if (*(longlong **)(param_3 + 0x30) == (longlong *)0x0) {
          plVar10 = (longlong *)(param_3 + 0x18);
        }
        plVar13 = *(longlong **)(local_70 + 0x30);
        if (*(longlong **)(local_70 + 0x30) == (longlong *)0x0) {
          plVar13 = (longlong *)(local_70 + 0x18);
        }
        puVar1 = (undefined4 *)(*plVar10 + (longlong)(iVar8 * (int)plVar10[2]) * 0x10);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        puVar2 = (undefined4 *)
                 (*plVar13 + (longlong)(((int)param_1[3] + iVar8) * (int)plVar13[2]) * 0x10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar3;
        puVar2[2] = uVar4;
        puVar2[3] = uVar5;
        local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~uStack_94);
        FUN_1449c0562(&local_98);
        lVar9 = CONCAT44(uStack_8c,uStack_90);
        iVar8 = local_88._4_4_;
        uVar6 = local_88;
      } while (lVar9 != lVar14 || local_88._4_4_ != iVar12);
    }
  }
  local_88 = uVar6;
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146faa914 FUN_146faa914 body=180 status=ok
// SIG undefined FUN_146faa914(void)

void FUN_146faa914(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) +
                    ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uVar2 << 0x13 | uVar2) +
                    (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (*plVar4 == param_3) {
          if (((plVar4 + 1 != (longlong *)0x0 && plVar4 != (longlong *)0x0) &&
              (lVar1 = plVar4[1], *(int *)(lVar1 + 8) == 0)) && (*(int *)(lVar1 + 0xc) == 1))
          goto LAB_146faa921;
          break;
        }
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  lVar1 = 0;
LAB_146faa921:
  *param_2 = lVar1;
  return;
}



// FUNCTION 146faa9c8 FUN_146faa9c8 body=132 status=ok
// SIG undefined FUN_146faa9c8(void)

void FUN_146faa9c8(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,2);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146faaa4d FUN_146faaa4d body=39 status=ok
// SIG undefined FUN_146faaa4d(void)

void FUN_146faaa4d(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x3c;
    do {
      *(undefined8 *)(param_1 + -0xc) = 0;
      *(undefined8 *)(param_1 + -4) = 0xc00000000;
      param_1 = param_1 + 0x40;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146faaa74 FUN_146faaa74 body=96 status=ok
// SIG undefined FUN_146faaa74(void)

void FUN_146faaa74(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 2,2);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 2)) {
      uVar2 = uVar1 >> 2 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,4,2);
  }
  return;
}



// FUNCTION 146faaad4 FUN_146faaad4 body=63 status=ok
// SIG undefined FUN_146faaad4(void)

void FUN_146faaad4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146faab14(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x40,0x10);
  }
  return;
}



// FUNCTION 146faab14 FUN_146faab14 body=97 status=ok
// SIG undefined FUN_146faab14(void)

ulonglong FUN_146faab14(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x3ffffffffffff00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 6,0x10);
      uVar1 = uVar1 >> 6;
    }
  }
  return uVar1;
}



// FUNCTION 146faab75 FUN_146faab75 body=1613 status=ok
// SIG undefined FUN_146faab75(void)

void FUN_146faab75(longlong param_1,longlong *param_2,char param_3,longlong *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  undefined1 local_f0 [4];
  uint local_ec;
  undefined1 local_e8 [16];
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  int local_a4;
  undefined1 local_a0 [8];
  undefined1 *local_98;
  int local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_146fab1c4(param_4,*(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24));
  FUN_146c3d520(local_e8,param_1);
  if ((param_3 == '\0') || (cVar6 = FUN_146c3d61c(local_e8), cVar6 == '\0')) {
    lVar15 = *(longlong *)(*(longlong *)(*param_2 + 0x50) + 0x80);
    if (lVar15 == 0) {
      lVar15 = *(longlong *)(*param_2 + 0x50);
    }
    FUN_1456bd906(lVar15,(*(int *)(lVar15 + 0x18) + *(int *)(param_1 + 0x50)) -
                         *(int *)(lVar15 + 0x78));
    uVar14 = *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24);
    uVar20 = 0;
    if ((uVar14 != 0) &&
       (uVar20 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x28) - 1U))) {
      uVar21 = 1;
      uVar19 = 1;
      if (1 < (int)uVar14) {
        uVar21 = uVar14;
      }
      do {
        uVar20 = uVar21;
        if (uVar21 == uVar19) break;
        uVar16 = uVar19 >> 9;
        uVar17 = uVar19 & 0x1ff;
        uVar20 = uVar19;
        uVar19 = uVar19 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x28))[uVar16] +
                                           (ulonglong)uVar17 * 2) - 1U));
    }
LAB_146faaead:
    if (uVar20 != uVar14) {
      lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar20 >> 9) * 8);
      uVar22 = (ulonglong)(uVar20 & 0x1ff);
      lVar13 = *(longlong *)(*(longlong *)(*param_2 + 0x50) + 0x80);
      if (lVar13 == 0) {
        lVar13 = *(longlong *)(*param_2 + 0x50);
      }
      dVar1 = *(double *)(lVar15 + 0x10 + uVar22 * 0x18);
      dVar2 = *(double *)(lVar15 + 8 + uVar22 * 0x18);
      dVar3 = *(double *)(lVar15 + uVar22 * 0x18);
      iVar12 = FUN_146f70732(lVar13);
      plVar4 = *(longlong **)(param_2[1] + 0x30);
      plVar9 = (longlong *)(param_2[1] + 0x18);
      if (plVar4 != (longlong *)0x0) {
        plVar9 = plVar4;
      }
      lVar15 = *plVar9;
      lVar13 = (longlong)((int)plVar9[2] * iVar12);
      *(float *)(lVar15 + lVar13 * 0xc) = (float)dVar3;
      *(float *)(lVar15 + 4 + lVar13 * 0xc) = (float)dVar2;
      *(float *)(lVar15 + 8 + lVar13 * 0xc) = (float)dVar1;
      *(int *)(*param_4 + (longlong)(int)uVar20 * 4) = iVar12;
      uVar21 = uVar20 + 1;
      if ((int)(uVar20 + 1) < (int)uVar14) {
        uVar21 = uVar14;
      }
      uVar19 = uVar20;
      do {
        uVar20 = uVar21;
        if (uVar21 - 1 == uVar19) break;
        uVar20 = uVar19 + 1;
        uVar19 = uVar20;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_1 + 0x28) +
                                             (ulonglong)(uVar20 >> 9) * 8) +
                                           (ulonglong)(uVar20 & 0x1ff) * 2) - 1U));
      goto LAB_146faaead;
    }
  }
  else {
    iVar12 = 0;
    uVar14 = *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24);
    uVar20 = 0;
    if (uVar14 != 0) {
      uVar20 = 0;
      if (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x28) - 1U)) {
        uVar21 = 1;
        uVar19 = 1;
        if (1 < (int)uVar14) {
          uVar21 = uVar14;
        }
        do {
          uVar20 = uVar21;
          if (uVar21 == uVar19) break;
          uVar16 = uVar19 >> 9;
          uVar17 = uVar19 & 0x1ff;
          uVar20 = uVar19;
          uVar19 = uVar19 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x28))[uVar16] +
                                             (ulonglong)uVar17 * 2) - 1U));
      }
    }
    iVar18 = 1;
    local_f8 = param_2;
    if (uVar20 != uVar14) {
      iVar18 = 0;
      iVar12 = 0;
      do {
        iVar7 = FUN_146c3d62c(local_e8,uVar20);
        iVar5 = iVar18;
        if (iVar18 < iVar7) {
          iVar5 = iVar7;
        }
        if (iVar7 == -1) {
          iVar5 = iVar18;
        }
        iVar18 = iVar5;
        iVar12 = (uint)(iVar7 == -1) + iVar12;
        uVar21 = uVar20 + 1;
        if ((int)(uVar20 + 1) < (int)uVar14) {
          uVar21 = uVar14;
        }
        do {
          uVar19 = uVar21;
          if (uVar21 - 1 == uVar20) break;
          uVar20 = uVar20 + 1;
          uVar19 = uVar20;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_1 + 0x28) +
                                               (ulonglong)(uVar20 >> 9) * 8) +
                                             (ulonglong)(uVar20 & 0x1ff) * 2) - 1U));
        uVar20 = uVar19;
      } while (uVar20 != uVar14);
      iVar18 = iVar18 + 1;
    }
    lVar15 = *(longlong *)(*(longlong *)(*local_f8 + 0x50) + 0x80);
    if (lVar15 == 0) {
      lVar15 = *(longlong *)(*local_f8 + 0x50);
    }
    FUN_1456bd906(lVar15,(iVar12 + iVar18 + *(int *)(lVar15 + 0x18)) - *(int *)(lVar15 + 0x78));
    uVar22 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_ac = 0xffffffff00000080;
    local_a4 = 0;
    local_98 = (undefined1 *)0x0;
    local_90 = 0;
    uVar20 = *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24);
    if ((uVar20 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x28) - 1U))) {
      uVar22 = 1;
      uVar14 = 1;
      if (1 < (int)uVar20) {
        uVar22 = (ulonglong)uVar20;
      }
      do {
        uVar21 = uVar14;
        if ((uint)uVar22 == uVar21) goto LAB_146faad35;
        uVar14 = uVar21 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x28))[uVar21 >> 9] +
                                           (ulonglong)(uVar21 & 0x1ff) * 2) - 1U));
      uVar22 = (ulonglong)uVar21;
    }
LAB_146faad35:
    if ((uint)uVar22 != uVar20) {
      do {
        uVar21 = (uint)uVar22;
        lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (uVar22 >> 9) * 8);
        uVar10 = (ulonglong)(uVar21 & 0x1ff);
        dVar1 = *(double *)(lVar15 + uVar10 * 0x18);
        dVar2 = *(double *)(lVar15 + 8 + uVar10 * 0x18);
        dVar3 = *(double *)(lVar15 + 0x10 + uVar10 * 0x18);
        uVar14 = FUN_146c3d62c(local_e8,uVar22);
        plVar4 = local_f8;
        lVar15 = (longlong)(int)uVar21;
        local_ec = uVar14;
        if (uVar14 == 0xffffffff) {
          lVar13 = *(longlong *)(*(longlong *)(*local_f8 + 0x50) + 0x80);
          if (lVar13 == 0) {
            lVar13 = *(longlong *)(*local_f8 + 0x50);
          }
          FUN_146f6e144(lVar13,iVar18);
          lVar13 = plVar4[1];
          plVar4 = *(longlong **)(lVar13 + 0x30);
          plVar9 = (longlong *)(lVar13 + 0x18);
          if (plVar4 != (longlong *)0x0) {
            plVar9 = plVar4;
          }
          lVar13 = *plVar9;
          lVar11 = (longlong)((int)plVar9[2] * iVar18);
          *(float *)(lVar13 + lVar11 * 0xc) = (float)dVar1;
          *(float *)(lVar13 + 4 + lVar11 * 0xc) = (float)dVar2;
          *(float *)(lVar13 + 8 + lVar11 * 0xc) = (float)dVar3;
          *(int *)(*param_4 + lVar15 * 4) = iVar18;
          iVar18 = iVar18 + 1;
        }
        else {
          if ((int)uStack_d0 != local_a4) {
            puVar8 = local_98;
            if (local_98 == (undefined1 *)0x0) {
              puVar8 = local_a0;
            }
            for (iVar12 = *(int *)(puVar8 + (ulonglong)(local_90 - 1U & uVar14) * 4); iVar12 != -1;
                iVar12 = *(int *)(local_d8 + (longlong)iVar12 * 0xc + 4)) {
              if (*(uint *)(local_d8 + (longlong)iVar12 * 0xc) == uVar14) {
                *(uint *)(*param_4 + lVar15 * 4) = uVar14;
                goto LAB_146fab032;
              }
            }
          }
          lVar13 = *(longlong *)(*(longlong *)(*local_f8 + 0x50) + 0x80);
          if (lVar13 == 0) {
            lVar13 = *(longlong *)(*local_f8 + 0x50);
          }
          FUN_146f6e144(lVar13,uVar14);
          lVar13 = plVar4[1];
          plVar4 = *(longlong **)(lVar13 + 0x30);
          plVar9 = (longlong *)(lVar13 + 0x18);
          if (plVar4 != (longlong *)0x0) {
            plVar9 = plVar4;
          }
          lVar13 = *plVar9;
          lVar11 = (longlong)(int)((int)plVar9[2] * uVar14);
          *(float *)(lVar13 + lVar11 * 0xc) = (float)dVar1;
          *(float *)(lVar13 + 4 + lVar11 * 0xc) = (float)dVar2;
          *(float *)(lVar13 + 8 + lVar11 * 0xc) = (float)dVar3;
          *(uint *)(*param_4 + lVar15 * 4) = uVar14;
          FUN_1447cbafe(&local_d8,local_f0,&local_ec,0);
        }
LAB_146fab032:
        uVar14 = uVar21 + 1;
        if ((int)(uVar21 + 1) < (int)uVar20) {
          uVar14 = uVar20;
        }
        do {
          if (uVar14 - 1 == (int)uVar22) {
            uVar22 = (ulonglong)uVar14;
            break;
          }
          uVar21 = (int)uVar22 + 1;
          uVar22 = (ulonglong)uVar21;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_1 + 0x28) +
                                               (ulonglong)(uVar21 >> 9) * 8) +
                                             (ulonglong)(uVar21 & 0x1ff) * 2) - 1U));
      } while ((uint)uVar22 != uVar20);
      local_90 = 0;
      if (local_98 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_1447a082e(&local_d8);
  }
  if ((local_80 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fab1c4 FUN_146fab1c4 body=109 status=ok
// SIG undefined FUN_146fab1c4(void)

void FUN_146fab1c4(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f9d70c(param_1,iVar1);
    }
    FUN_146fafe83((longlong)iVar1 * 4 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_146f9e5d0(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146fab232 FUN_146fab232 body=326 status=ok
// SIG undefined FUN_146fab232(void)

void FUN_146fab232(undefined8 param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 local_b0;
  undefined1 local_a8 [8];
  longlong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  FUN_146fab37a(local_a8,param_3);
  lVar6 = *(longlong *)(*(longlong *)(param_3 + 0x50) + 0x80);
  if (lVar6 == 0) {
    lVar6 = *(longlong *)(param_3 + 0x50);
  }
  iVar3 = *(int *)(lVar6 + 0x18);
  iVar4 = *(int *)(lVar6 + 0x78);
  if (iVar3 != iVar4 && *(int *)(lVar6 + 0x78) <= iVar3) {
    uVar7 = 0;
    do {
      lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar7 >> 9) * 8);
      uVar9 = (ulonglong)(uVar7 & 0x1ff);
      dVar1 = *(double *)(lVar6 + 0x10 + uVar9 * 0x18);
      dVar2 = *(double *)(lVar6 + 8 + uVar9 * 0x18);
      plVar8 = *(longlong **)(local_a0 + 0x30);
      if (*(longlong **)(local_a0 + 0x30) == (longlong *)0x0) {
        plVar8 = (longlong *)(local_a0 + 0x18);
      }
      lVar5 = *plVar8;
      lVar10 = (longlong)(int)((int)plVar8[2] * uVar7);
      *(float *)(lVar5 + lVar10 * 0xc) = (float)*(double *)(lVar6 + uVar9 * 0x18);
      *(float *)(lVar5 + 4 + lVar10 * 0xc) = (float)dVar2;
      *(float *)(lVar5 + 8 + lVar10 * 0xc) = (float)dVar1;
      uVar7 = uVar7 + 1;
      lVar6 = local_a0;
    } while (iVar3 - iVar4 != uVar7);
  }
  local_b0 = param_6;
  local_b8 = param_5;
  FUN_146fab584(lVar6,param_2,param_3,param_4);
  FUN_146fabf38(local_a8);
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fab37a FUN_146fab37a body=520 status=ok
// SIG undefined FUN_146fab37a(void)

void FUN_146fab37a(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x58) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_2 + 0x58);
  }
  FUN_146fa08c6(lVar1 + 0x20,&local_28,DAT_14c99c620);
  if (local_28 == 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x58) + 0x80);
    if (lVar1 == 0) {
      lVar1 = *(longlong *)(param_2 + 0x58);
    }
    local_38 = &DAT_14c84635c;
    local_30 = 0x21;
    FUN_1458c326a(lVar1 + 0x20,&local_28,DAT_14c99c620,1);
  }
  *param_1 = param_2;
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x50) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_2 + 0x50);
  }
  FUN_146fa1f1e(lVar1 + 0x20,&local_28,DAT_14c99c0d0);
  param_1[1] = local_28;
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x58) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_2 + 0x58);
  }
  FUN_146fa08c6(lVar1 + 0x20,&local_28,DAT_14c99c620);
  param_1[2] = local_28;
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x58) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_2 + 0x58);
  }
  FUN_146fa06aa(lVar1 + 0x20,&local_28,DAT_14c99c628);
  param_1[3] = local_28;
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x58) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_2 + 0x58);
  }
  FUN_146fa06aa(lVar1 + 0x20,&local_28,DAT_14c99c630);
  param_1[4] = local_28;
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x58) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_2 + 0x58);
  }
  FUN_146fa075e(lVar1 + 0x20,&local_28,DAT_14c99c638);
  param_1[5] = local_28;
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x58) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_2 + 0x58);
  }
  FUN_146fa0812(lVar1 + 0x20,&local_28,DAT_14c99c640);
  param_1[6] = local_28;
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x80) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_2 + 0x80);
  }
  FUN_146f73238(lVar1 + 0x20,&local_28,DAT_14c99c688);
  param_1[0xe] = local_28;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fab584 FUN_146fab584 body=2483 status=ok
// SIG undefined FUN_146fab584(void)

void FUN_146fab584(undefined8 param_1,longlong param_2,longlong param_3,char param_4,char param_5,
                  char param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  longlong local_130;
  longlong local_128;
  uint local_11c;
  ulonglong local_118;
  longlong local_110;
  longlong local_108;
  undefined8 *local_100;
  uint local_f8;
  longlong local_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  longlong local_c8;
  ulonglong uStack_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  int local_98;
  uint uStack_94;
  uint local_90;
  uint uStack_8c;
  uint local_88;
  undefined4 local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (param_4 != '\0') {
    lVar9 = *(longlong *)(*(longlong *)(param_3 + 0x58) + 0x80);
    if (lVar9 == 0) {
      lVar9 = *(longlong *)(param_3 + 0x58);
    }
    FUN_146fa06aa(lVar9 + 0x20,&local_c8,DAT_14c99c628);
    if (local_c8 != 0) {
      lVar9 = *(longlong *)(param_2 + 0x208);
      if (((lVar9 == 0) || (*(int *)(lVar9 + 0x38) < 1)) || (**(longlong **)(lVar9 + 0x30) == 0)) {
        uVar14 = *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24);
        uVar11 = 0;
        if ((uVar14 != 0) &&
           (uVar11 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x28) - 1U))) {
          uVar12 = 1;
          uVar7 = 1;
          if (1 < (int)uVar14) {
            uVar12 = uVar14;
          }
          do {
            uVar11 = uVar12;
            if (uVar12 == uVar7) break;
            uVar8 = uVar7 >> 9;
            uVar16 = uVar7 & 0x1ff;
            uVar11 = uVar7;
            uVar7 = uVar7 + 1;
          } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x28))[uVar8] +
                                               (ulonglong)uVar16 * 2) - 1U));
        }
        if (uVar11 != uVar14) {
          do {
            local_e8 = DAT_14c846370;
            uVar1 = DAT_14c846378;
            if (*(char *)(param_2 + 0x70) != '\0') {
              lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x60) + (ulonglong)(uVar11 >> 9) * 8);
              local_e8 = *(undefined8 *)(lVar9 + (ulonglong)(uVar11 & 0x1ff) * 0xc);
              uVar1 = *(undefined4 *)(lVar9 + 8 + (ulonglong)(uVar11 & 0x1ff) * 0xc);
            }
            local_e0 = CONCAT44(local_e0._4_4_,uVar1);
            FUN_146f7163e(param_3 + 0x100,&local_a0,uVar11);
            if ((longlong)local_98 != 0) {
              lVar9 = 0;
              do {
                plVar6 = *(longlong **)(local_c8 + 0x30);
                if (*(longlong **)(local_c8 + 0x30) == (longlong *)0x0) {
                  plVar6 = (longlong *)(local_c8 + 0x18);
                }
                lVar13 = *plVar6;
                lVar17 = (longlong)((int)plVar6[2] * *(int *)(local_a0 + lVar9));
                *(undefined4 *)(lVar13 + 8 + lVar17 * 0xc) = (undefined4)local_e0;
                *(undefined8 *)(lVar13 + lVar17 * 0xc) = local_e8;
                lVar9 = lVar9 + 4;
              } while ((longlong)local_98 * 4 != lVar9);
            }
            uVar12 = uVar11 + 1;
            if ((int)(uVar11 + 1) < (int)uVar14) {
              uVar12 = uVar14;
            }
            do {
              uVar7 = uVar12;
              if (uVar12 - 1 == uVar11) break;
              uVar11 = uVar11 + 1;
              uVar7 = uVar11;
            } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                   (*(longlong *)(param_2 + 0x28) +
                                                   (ulonglong)(uVar11 >> 9) * 8) +
                                                 (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
            uVar11 = uVar7;
          } while (uVar11 != uVar14);
        }
      }
      else {
        local_a8 = DAT_14c846338;
        local_b0 = DAT_14c846330;
        FUN_146fabf76(param_3,&local_c8);
      }
    }
  }
  if (param_5 != '\0') {
    FUN_146fac334(param_2,param_3);
  }
  if (param_6 != '\0') {
    lVar9 = *(longlong *)(*(longlong *)(param_3 + 0x58) + 0x80);
    if (lVar9 == 0) {
      lVar9 = *(longlong *)(param_3 + 0x58);
    }
    FUN_146fa08c6(lVar9 + 0x20,&local_b8,DAT_14c99c620);
    if (local_b8 != 0) {
      if (*(longlong *)(param_2 + 0x208) == 0) {
        uVar14 = *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24);
        uVar11 = 0;
        if ((uVar14 != 0) &&
           (uVar11 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x28) - 1U))) {
          uVar12 = 1;
          uVar7 = 1;
          if (1 < (int)uVar14) {
            uVar12 = uVar14;
          }
          do {
            uVar11 = uVar12;
            if (uVar12 == uVar7) break;
            uVar8 = uVar7 >> 9;
            uVar16 = uVar7 & 0x1ff;
            uVar11 = uVar7;
            uVar7 = uVar7 + 1;
          } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x28))[uVar8] +
                                               (ulonglong)uVar16 * 2) - 1U));
        }
        if (uVar11 != uVar14) {
          do {
            puVar5 = &DAT_14c84635c;
            if (*(char *)(param_2 + 0xb0) == '\x01') {
              puVar5 = (undefined8 *)
                       ((ulonglong)((uVar11 & 0x1ff) << 3) +
                       *(longlong *)(*(longlong *)(param_2 + 0xa0) + (ulonglong)(uVar11 >> 9) * 8));
            }
            uVar3 = *puVar5;
            FUN_146f7163e(param_3 + 0x100,&local_a0,uVar11,0);
            if ((longlong)local_98 != 0) {
              lVar9 = 0;
              do {
                plVar6 = (longlong *)(local_b8 + 0x18);
                if (*(longlong **)(local_b8 + 0x30) != (longlong *)0x0) {
                  plVar6 = *(longlong **)(local_b8 + 0x30);
                }
                *(undefined8 *)
                 (*plVar6 + (longlong)((int)plVar6[2] * *(int *)(local_a0 + lVar9)) * 8) = uVar3;
                lVar9 = lVar9 + 4;
              } while ((longlong)local_98 * 4 != lVar9);
            }
            uVar12 = uVar11 + 1;
            if ((int)(uVar11 + 1) < (int)uVar14) {
              uVar12 = uVar14;
            }
            do {
              uVar7 = uVar12;
              if (uVar12 - 1 == uVar11) break;
              uVar11 = uVar11 + 1;
              uVar7 = uVar11;
            } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                   (*(longlong *)(param_2 + 0x28) +
                                                   (ulonglong)(uVar11 >> 9) * 8) +
                                                 (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
            uVar11 = uVar7;
          } while (uVar11 != uVar14);
        }
      }
      else {
        *(undefined1 *)(param_3 + 0x214) = 1;
        uVar11 = (**(code **)(**(longlong **)(param_2 + 0x208) + 0xa0))();
        FUN_146f72d34(param_3,uVar11);
        FUN_1458c3508(local_b8,uVar11);
        if (0 < (int)uVar11) {
          local_118 = (ulonglong)uVar11;
          uVar18 = 0;
          do {
            if ((longlong)uVar18 < (longlong)*(int *)(*(longlong *)(param_2 + 0x208) + 0x28)) {
              lVar9 = *(longlong *)
                       (*(longlong *)(*(longlong *)(param_2 + 0x208) + 0x20) + uVar18 * 8);
            }
            else {
              lVar9 = 0;
            }
            local_138 = (undefined4)uVar18;
            local_130 = lVar9;
            FUN_146fac6bc(param_3,&local_b8,lVar9,DAT_14c84635c);
            lVar13 = *(longlong *)(*(longlong *)(param_3 + 0x60) + 0x80);
            if (lVar13 == 0) {
              lVar13 = *(longlong *)(param_3 + 0x60);
            }
            lVar13 = uVar18 * 0x80 + lVar13;
            FUN_146f91de6(lVar13,0);
            local_128 = lVar13;
            FUN_1456bd906(lVar13,*(undefined4 *)(lVar9 + 0x38));
            uVar11 = *(int *)(lVar9 + 8) * 0x200 + *(int *)(lVar9 + 0xc);
            local_c8 = 0;
            uStack_c0 = (ulonglong)uVar11;
            if ((uVar11 != 0) && (FUN_146fafe96(&local_c8,0), 0 < (int)uVar11)) {
              uVar19 = 0;
              lVar9 = local_130;
              do {
                if (((longlong)uVar19 <
                     (longlong)(*(int *)(lVar9 + 8) * 0x200 + *(int *)(lVar9 + 0xc))) &&
                   ((ushort)(*(short *)(*(longlong *)
                                         (*(longlong *)(lVar9 + 0x10) + (uVar19 >> 9 & 0x7fffff) * 8
                                         ) + (ulonglong)((uint)uVar19 & 0x1ff) * 2) - 1U) < 0xfffe))
                {
                  lVar13 = local_128 + 0x20;
                  lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0x48) + (uVar19 >> 8 & 0xffffff) * 8);
                  uVar10 = (ulonglong)(((uint)uVar19 & 0xff) << 3);
                  uVar1 = *(undefined4 *)(lVar9 + uVar10);
                  uVar2 = *(undefined4 *)(lVar9 + 4 + uVar10);
                  iVar15 = FUN_146f70732();
                  *(int *)(local_c8 + uVar19 * 4) = iVar15;
                  FUN_146fa0a2e(lVar13,&local_a0,DAT_14c99c118);
                  plVar6 = (longlong *)(local_a0 + 0x18);
                  if (*(longlong **)(local_a0 + 0x30) != (longlong *)0x0) {
                    plVar6 = *(longlong **)(local_a0 + 0x30);
                  }
                  lVar9 = *plVar6;
                  lVar13 = (longlong)(iVar15 * (int)plVar6[2]);
                  *(undefined4 *)(lVar9 + lVar13 * 8) = uVar1;
                  *(undefined4 *)(lVar9 + 4 + lVar13 * 8) = uVar2;
                  lVar9 = local_130;
                }
                uVar19 = uVar19 + 1;
              } while (uVar19 != uVar11);
            }
            lVar9 = *(longlong *)(*(longlong *)(param_3 + 0x70) + 0x80);
            if (lVar9 == 0) {
              lVar9 = *(longlong *)(param_3 + 0x70);
            }
            local_a0 = 0x100000000;
            local_98 = (int)lVar9;
            iVar15 = local_98;
            uStack_94 = (uint)((ulonglong)lVar9 >> 0x20);
            uVar11 = uStack_94;
            local_90 = 0xffffffff;
            uStack_8c = 0;
            local_88 = 0;
            if (*(int *)(lVar9 + 0x18) != 0) {
              FUN_1449c0562(&local_a0);
            }
            local_e0 = CONCAT44(uStack_94,local_98);
            local_d8 = CONCAT44(uStack_8c,local_90);
            local_d0 = local_88;
            local_cc = local_84;
            local_e8 = local_a0;
            uStack_8c = *(uint *)(lVar9 + 0x18);
            local_a0 = CONCAT44(1 << ((byte)uStack_8c & 0x1f),(int)uStack_8c >> 5);
            local_90 = -1 << ((byte)uStack_8c & 0x1f);
            local_88 = uStack_8c & 0xffffffe0;
            local_98 = iVar15;
            uStack_94 = uVar11;
            if (*(uint *)(lVar9 + 0x18) != uStack_8c) {
              FUN_1449c0562(&local_a0);
              lVar9 = CONCAT44(uStack_94,local_98);
            }
            if (local_e0 != lVar9 || local_d8._4_4_ != uStack_8c) {
              local_108 = local_128 + 0x20;
              local_11c = uStack_8c;
              local_110 = lVar9;
              do {
                uVar11 = local_d8._4_4_;
                if (*(int *)(local_e0 + 0x18) <= (int)local_d8._4_4_) {
                  uVar11 = 0xffffffff;
                }
                uStack_94 = 0;
                local_90 = 3;
                uVar14 = uVar11 * 3;
                lVar9 = *(longlong *)(local_130 + 0x78);
                lVar13 = (longlong)
                         *(int *)(*(longlong *)(lVar9 + (ulonglong)(uVar14 >> 9) * 8) +
                                 (ulonglong)(uVar14 & 0x1ff) * 4);
                if (lVar13 < 0) {
                  iVar15 = 3;
                  do {
                    iVar4 = FUN_146f70732(local_128);
                    FUN_146fa0a2e(local_108,&local_f0,DAT_14c99c118);
                    uVar14 = uStack_94;
                    plVar6 = (longlong *)(local_f0 + 0x18);
                    if (*(longlong **)(local_f0 + 0x30) != (longlong *)0x0) {
                      plVar6 = *(longlong **)(local_f0 + 0x30);
                    }
                    *(undefined8 *)(*plVar6 + (longlong)((int)plVar6[2] * iVar4) * 8) =
                         DAT_14c84635c;
                    lVar9 = (longlong)(int)uStack_94;
                    uStack_94 = uStack_94 + 1;
                    if (local_90 < uStack_94) {
                      FUN_146faff1c(&local_a0,uVar14);
                    }
                    *(int *)((longlong)&local_a0 + lVar9 * 4) = iVar4;
                    iVar15 = iVar15 + -1;
                  } while (iVar15 != 0);
                }
                else {
                  local_a0 = CONCAT44(*(undefined4 *)
                                       (local_c8 +
                                       (longlong)
                                       *(int *)(*(longlong *)
                                                 (lVar9 + (ulonglong)(uVar14 + 1 >> 9) * 8) +
                                               (ulonglong)(uVar14 + 1 & 0x1ff) * 4) * 4),
                                      *(undefined4 *)(local_c8 + lVar13 * 4));
                  uStack_94 = 3;
                  local_98 = *(int *)(local_c8 +
                                     (longlong)
                                     *(int *)(*(longlong *)
                                               (lVar9 + (ulonglong)(uVar14 + 2 >> 9) * 8) +
                                             (ulonglong)(uVar14 + 2 & 0x1ff) * 4) * 4);
                }
                local_100 = &local_a0;
                local_f8 = uStack_94;
                FUN_146f70828(param_3,uVar11,&local_100,uVar18 & 0xffffffff);
                local_d8 = CONCAT44(local_d8._4_4_,(uint)local_d8 & ~local_e8._4_4_);
                FUN_1449c0562(&local_e8);
              } while (local_e0 != local_110 || local_d8._4_4_ != local_11c);
            }
            if (local_c8 != 0) {
              FUN_1400020a8();
            }
            uVar18 = uVar18 + 1;
          } while (uVar18 != local_118);
        }
        *(undefined2 *)(param_3 + 0x214) = 0x100;
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146fabf38 FUN_146fabf38 body=62 status=ok
// SIG undefined FUN_146fabf38(void)

void FUN_146fabf38(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146fabf76 FUN_146fabf76 body=957 status=ok
// SIG undefined FUN_146fabf76(void)

void FUN_146fabf76(longlong param_1,longlong *param_2,longlong param_3,undefined8 *param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  uint uStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x80);
  if (lVar13 == 0) {
    lVar13 = *(longlong *)(param_1 + 0x70);
  }
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar13;
  if (*(int *)(lVar13 + 0x18) == 0) {
    uVar10 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar10 = *(uint *)(lVar13 + 0x18);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  uStack_74 = uStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  lVar6 = uStack_60;
  if (uStack_60 != lVar13 || uStack_54 != uVar10) {
    do {
      uVar8 = (ulonglong)uStack_74;
      if (*(int *)(lVar6 + 0x18) <= (int)uStack_74) {
        uVar8 = 0xffffffff;
      }
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + 0x30);
      plVar11 = (longlong *)(*(longlong *)(param_1 + 0xa0) + 0x18);
      if (plVar2 != (longlong *)0x0) {
        plVar11 = plVar2;
      }
      iVar7 = (int)uVar8;
      if (*(int *)(param_1 + 0xa8) == 0) {
        plVar11 = (longlong *)((longlong)(iVar7 >> 8) * 0xc18 + *plVar11);
        iVar4 = *(int *)((longlong)plVar11 + (uVar8 & 0xff) * 4 + 0x10);
      }
      else {
        iVar4 = (int)plVar11[2] * iVar7;
      }
      lVar6 = *plVar11;
      lVar5 = (longlong)iVar4;
      uVar14 = iVar7 * 3;
      lVar3 = *(longlong *)(param_3 + 0x78);
      iVar7 = *(int *)(*(longlong *)(lVar3 + (ulonglong)(uVar14 >> 9) * 8) +
                      (ulonglong)(uVar14 & 0x1ff) * 4);
      if (iVar7 < 0) {
        plVar2 = *(longlong **)(*param_2 + 0x30);
        plVar11 = (longlong *)(*param_2 + 0x18);
        if (plVar2 != (longlong *)0x0) {
          plVar11 = plVar2;
        }
        lVar3 = *plVar11;
        lVar12 = (longlong)((int)plVar11[2] * *(int *)(lVar6 + lVar5 * 4));
        *(undefined4 *)(lVar3 + 8 + lVar12 * 0xc) = *(undefined4 *)(param_4 + 1);
        *(undefined8 *)(lVar3 + lVar12 * 0xc) = *param_4;
        plVar2 = *(longlong **)(*param_2 + 0x30);
        plVar11 = (longlong *)(*param_2 + 0x18);
        if (plVar2 != (longlong *)0x0) {
          plVar11 = plVar2;
        }
        lVar3 = *plVar11;
        lVar12 = (longlong)((int)plVar11[2] * *(int *)(lVar6 + 4 + lVar5 * 4));
        *(undefined4 *)(lVar3 + 8 + lVar12 * 0xc) = *(undefined4 *)(param_4 + 1);
        *(undefined8 *)(lVar3 + lVar12 * 0xc) = *param_4;
        plVar2 = *(longlong **)(*param_2 + 0x30);
        plVar11 = (longlong *)(*param_2 + 0x18);
        if (plVar2 != (longlong *)0x0) {
          plVar11 = plVar2;
        }
        lVar3 = *plVar11;
        lVar6 = (longlong)((int)plVar11[2] * *(int *)(lVar6 + 8 + lVar5 * 4));
        *(undefined4 *)(lVar3 + 8 + lVar6 * 0xc) = *(undefined4 *)(param_4 + 1);
        uVar9 = *param_4;
      }
      else {
        iVar4 = *(int *)(*(longlong *)(lVar3 + (ulonglong)(uVar14 + 2 >> 9) * 8) +
                        (ulonglong)(uVar14 + 2 & 0x1ff) * 4);
        iVar1 = *(int *)(*(longlong *)(lVar3 + (ulonglong)(uVar14 + 1 >> 9) * 8) +
                        (ulonglong)(uVar14 + 1 & 0x1ff) * 4);
        lVar3 = *(longlong *)(param_3 + 0x48);
        lVar12 = 0;
        do {
          uVar14 = iVar7 * 3 + (int)lVar12;
          *(undefined4 *)((longlong)&local_68 + lVar12 * 4) =
               *(undefined4 *)
                (*(longlong *)(lVar3 + (ulonglong)(uVar14 >> 9) * 8) +
                (ulonglong)(uVar14 & 0x1ff) * 4);
          lVar12 = lVar12 + 1;
        } while (lVar12 != 3);
        plVar2 = *(longlong **)(*param_2 + 0x30);
        plVar11 = (longlong *)(*param_2 + 0x18);
        if (plVar2 != (longlong *)0x0) {
          plVar11 = plVar2;
        }
        lVar3 = *plVar11;
        lVar12 = (longlong)((int)plVar11[2] * *(int *)(lVar6 + lVar5 * 4));
        *(undefined4 *)(lVar3 + 8 + lVar12 * 0xc) = (undefined4)uStack_60;
        *(undefined8 *)(lVar3 + lVar12 * 0xc) = local_68;
        lVar3 = *(longlong *)(param_3 + 0x48);
        lVar12 = 0;
        do {
          uVar14 = iVar1 * 3 + (int)lVar12;
          *(undefined4 *)((longlong)&local_68 + lVar12 * 4) =
               *(undefined4 *)
                (*(longlong *)(lVar3 + (ulonglong)(uVar14 >> 9) * 8) +
                (ulonglong)(uVar14 & 0x1ff) * 4);
          lVar12 = lVar12 + 1;
        } while (lVar12 != 3);
        plVar2 = *(longlong **)(*param_2 + 0x30);
        plVar11 = (longlong *)(*param_2 + 0x18);
        if (plVar2 != (longlong *)0x0) {
          plVar11 = plVar2;
        }
        lVar3 = *plVar11;
        lVar12 = (longlong)((int)plVar11[2] * *(int *)(lVar6 + 4 + lVar5 * 4));
        *(undefined4 *)(lVar3 + 8 + lVar12 * 0xc) = (undefined4)uStack_60;
        *(undefined8 *)(lVar3 + lVar12 * 0xc) = local_68;
        lVar3 = *(longlong *)(param_3 + 0x48);
        lVar12 = 0;
        do {
          uVar14 = iVar4 * 3 + (int)lVar12;
          *(undefined4 *)((longlong)&local_68 + lVar12 * 4) =
               *(undefined4 *)
                (*(longlong *)(lVar3 + (ulonglong)(uVar14 >> 9) * 8) +
                (ulonglong)(uVar14 & 0x1ff) * 4);
          lVar12 = lVar12 + 1;
        } while (lVar12 != 3);
        plVar2 = *(longlong **)(*param_2 + 0x30);
        plVar11 = (longlong *)(*param_2 + 0x18);
        if (plVar2 != (longlong *)0x0) {
          plVar11 = plVar2;
        }
        lVar3 = *plVar11;
        lVar6 = (longlong)((int)plVar11[2] * *(int *)(lVar6 + 8 + lVar5 * 4));
        *(undefined4 *)(lVar3 + 8 + lVar6 * 0xc) = (undefined4)uStack_60;
        uVar9 = local_68;
      }
      *(undefined8 *)(lVar3 + lVar6 * 0xc) = uVar9;
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
      lVar6 = CONCAT44(uStack_7c,uStack_80);
    } while (lVar6 != lVar13 || uStack_74 != uVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146fac334 FUN_146fac334 body=903 status=ok
// SIG undefined FUN_146fac334(void)

void FUN_146fac334(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  int *piVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong *plVar18;
  uint uVar19;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  longlong local_108;
  longlong local_100;
  float local_f8 [3];
  undefined1 local_ec [12];
  undefined1 local_e0 [24];
  float local_c8 [3];
  undefined1 local_bc [12];
  undefined1 local_b0 [24];
  float local_98 [3];
  undefined1 local_8c [12];
  undefined1 local_80 [16];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(int *)(param_1 + 0x158) * 0x200 + *(int *)(param_1 + 0x15c) == 0) {
    lVar13 = *(longlong *)(*(longlong *)(param_2 + 0x70) + 0x80);
    if (lVar13 == 0) {
      lVar13 = *(longlong *)(param_2 + 0x70);
    }
    if ((((*(int *)(param_1 + 0x170) == *(int *)(lVar13 + 0x18) - *(int *)(lVar13 + 0x78)) &&
         (lVar13 = *(longlong *)(param_1 + 0x208), lVar13 != 0)) &&
        (uVar6 = *(uint *)(lVar13 + 0x38), 0 < (int)uVar6)) && ((uVar6 != 1 && (2 < uVar6)))) {
      plVar16 = *(longlong **)(lVar13 + 0x30);
      lVar13 = *plVar16;
      lVar7 = plVar16[1];
      lVar8 = plVar16[2];
      if (lVar8 != 0 && (lVar7 != 0 && lVar13 != 0)) {
        lVar15 = *(longlong *)(*(longlong *)(param_2 + 0x58) + 0x80);
        if (lVar15 == 0) {
          lVar15 = *(longlong *)(param_2 + 0x58);
        }
        FUN_146fa06aa(lVar15 + 0x20,&local_100,DAT_14c99c630);
        lVar15 = *(longlong *)(*(longlong *)(param_2 + 0x58) + 0x80);
        if (lVar15 == 0) {
          lVar15 = *(longlong *)(param_2 + 0x58);
        }
        FUN_146fa075e(lVar15 + 0x20,&local_108,DAT_14c99c638);
        if (((local_100 != 0) && (local_108 != 0)) &&
           (uVar6 = *(uint *)(param_1 + 0x170), 0 < (int)uVar6)) {
          uVar19 = 0;
          do {
            uVar14 = (ulonglong)(uVar19 * 3 >> 9);
            uVar11 = (ulonglong)(uVar19 * 3 & 0x1ff);
            if (((-1 < *(int *)(*(longlong *)(*(longlong *)(lVar13 + 0x78) + uVar14 * 8) +
                               uVar11 * 4)) &&
                (-1 < *(int *)(*(longlong *)(*(longlong *)(lVar7 + 0x78) + uVar14 * 8) + uVar11 * 4)
                )) && (-1 < *(int *)(*(longlong *)(*(longlong *)(lVar8 + 0x78) + uVar14 * 8) +
                                    uVar11 * 4))) {
              local_118 = local_80;
              FUN_146c3574a(lVar13,uVar19,local_98,local_8c);
              local_118 = local_b0;
              FUN_146c3574a(lVar7,uVar19,local_c8,local_bc);
              local_118 = local_e0;
              FUN_146c3574a(lVar8,uVar19,local_f8,local_ec);
              plVar16 = *(longlong **)(*(longlong *)(param_2 + 0xa0) + 0x30);
              plVar18 = (longlong *)(*(longlong *)(param_2 + 0xa0) + 0x18);
              if (plVar16 != (longlong *)0x0) {
                plVar18 = plVar16;
              }
              if (*(int *)(param_2 + 0xa8) == 0) {
                plVar18 = (longlong *)((ulonglong)(uVar19 >> 8) * 0xc18 + *plVar18);
                iVar10 = *(int *)((longlong)plVar18 + (ulonglong)(uVar19 & 0xff) * 4 + 0x10);
              }
              else {
                iVar10 = (int)plVar18[2] * uVar19;
              }
              piVar12 = (int *)((longlong)iVar10 * 4 + *plVar18);
              lVar15 = 0;
              do {
                fVar1 = *(float *)((longlong)local_f8 + lVar15 + 4);
                fVar2 = *(float *)((longlong)local_98 + lVar15 + 8);
                fVar3 = *(float *)((longlong)local_f8 + lVar15 + 8);
                fVar4 = *(float *)((longlong)local_98 + lVar15 + 4);
                uVar5 = *(undefined4 *)
                         (&DAT_149e1eeb0 +
                         (ulonglong)
                         ((*(float *)((longlong)local_f8 + lVar15) * fVar4 -
                          *(float *)((longlong)local_98 + lVar15) * fVar1) *
                          *(float *)((longlong)local_c8 + lVar15 + 8) +
                          (fVar1 * fVar2 - fVar4 * fVar3) * *(float *)((longlong)local_c8 + lVar15)
                          + (fVar3 * *(float *)((longlong)local_98 + lVar15) -
                            fVar2 * *(float *)((longlong)local_f8 + lVar15)) *
                            *(float *)((longlong)local_c8 + lVar15 + 4) < 0.0) * 4);
                plVar16 = (longlong *)(local_100 + 0x18);
                if (*(longlong **)(local_100 + 0x30) != (longlong *)0x0) {
                  plVar16 = *(longlong **)(local_100 + 0x30);
                }
                lVar9 = *plVar16;
                lVar17 = (longlong)((int)plVar16[2] * *piVar12);
                *(undefined4 *)(lVar9 + 8 + lVar17 * 0xc) =
                     *(undefined4 *)((longlong)local_c8 + lVar15 + 8);
                *(undefined8 *)(lVar9 + lVar17 * 0xc) = *(undefined8 *)((longlong)local_c8 + lVar15)
                ;
                plVar16 = (longlong *)(local_108 + 0x18);
                if (*(longlong **)(local_108 + 0x30) != (longlong *)0x0) {
                  plVar16 = *(longlong **)(local_108 + 0x30);
                }
                *(undefined4 *)(*plVar16 + (longlong)((int)plVar16[2] * *piVar12) * 4) = uVar5;
                lVar15 = lVar15 + 0xc;
                piVar12 = piVar12 + 1;
              } while (lVar15 != 0x24);
            }
            uVar19 = uVar19 + 1;
          } while (uVar19 != uVar6);
        }
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146fac6bc FUN_146fac6bc body=860 status=ok
// SIG undefined FUN_146fac6bc(void)

void FUN_146fac6bc(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                  int param_5)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  uint uStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x80);
  if (lVar17 == 0) {
    lVar17 = *(longlong *)(param_1 + 0x70);
  }
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar17;
  if (*(int *)(lVar17 + 0x18) == 0) {
    uVar14 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar14 = *(uint *)(lVar17 + 0x18);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  uStack_74 = uStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  if (uStack_60 != lVar17 || uStack_54 != uVar14) {
    lVar7 = (longlong)param_5 * 0x18;
    lVar10 = uStack_60;
    do {
      uVar12 = (ulonglong)uStack_74;
      if (*(int *)(lVar10 + 0x18) <= (int)uStack_74) {
        uVar12 = 0xffffffff;
      }
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + 0x30);
      plVar16 = (longlong *)(*(longlong *)(param_1 + 0xa0) + 0x18);
      if (plVar5 != (longlong *)0x0) {
        plVar16 = plVar5;
      }
      iVar11 = (int)uVar12;
      if (*(int *)(param_1 + 0xa8) == 0) {
        plVar16 = (longlong *)((longlong)(iVar11 >> 8) * 0xc18 + *plVar16);
        iVar8 = *(int *)((longlong)plVar16 + (uVar12 & 0xff) * 4 + 0x10);
      }
      else {
        iVar8 = (int)plVar16[2] * iVar11;
      }
      lVar10 = *plVar16;
      lVar9 = (longlong)iVar8;
      uVar4 = iVar11 * 3;
      lVar6 = *(longlong *)(param_3 + 0x78);
      uVar2 = *(uint *)(*(longlong *)(lVar6 + (ulonglong)(uVar4 >> 9) * 8) +
                       (ulonglong)(uVar4 & 0x1ff) * 4);
      if ((int)uVar2 < 0) {
        lVar6 = *(longlong *)(*param_2 + 0x30);
        lVar13 = *param_2 + 0x18;
        if (lVar6 != 0) {
          lVar13 = lVar6;
        }
        *(undefined8 *)
         (*(longlong *)(lVar13 + lVar7) +
         (longlong)(*(int *)(lVar13 + 0x10 + lVar7) * *(int *)(lVar10 + lVar9 * 4)) * 8) = param_4;
        lVar6 = *(longlong *)(*param_2 + 0x30);
        lVar13 = *param_2 + 0x18;
        if (lVar6 != 0) {
          lVar13 = lVar6;
        }
        *(undefined8 *)
         (*(longlong *)(lVar13 + lVar7) +
         (longlong)(*(int *)(lVar13 + 0x10 + lVar7) * *(int *)(lVar10 + 4 + lVar9 * 4)) * 8) =
             param_4;
        lVar6 = *(longlong *)(*param_2 + 0x30);
        lVar13 = *param_2 + 0x18;
        if (lVar6 != 0) {
          lVar13 = lVar6;
        }
        *(undefined8 *)
         (*(longlong *)(lVar13 + lVar7) +
         (longlong)(*(int *)(lVar13 + 0x10 + lVar7) * *(int *)(lVar10 + 8 + lVar9 * 4)) * 8) =
             param_4;
      }
      else {
        uVar3 = *(uint *)(*(longlong *)(lVar6 + (ulonglong)(uVar4 + 2 >> 9) * 8) +
                         (ulonglong)(uVar4 + 2 & 0x1ff) * 4);
        uVar4 = *(uint *)(*(longlong *)(lVar6 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
                         (ulonglong)(uVar4 + 1 & 0x1ff) * 4);
        lVar6 = *(longlong *)(*(longlong *)(param_3 + 0x48) + (ulonglong)(uVar2 >> 8) * 8);
        uVar12 = (ulonglong)((uVar2 & 0xff) << 3);
        lVar13 = *(longlong *)(*param_2 + 0x30);
        lVar15 = *param_2 + 0x18;
        if (lVar13 != 0) {
          lVar15 = lVar13;
        }
        uVar1 = *(undefined4 *)(lVar6 + 4 + uVar12);
        lVar13 = *(longlong *)(lVar15 + lVar7);
        lVar15 = (longlong)(*(int *)(lVar15 + 0x10 + lVar7) * *(int *)(lVar10 + lVar9 * 4));
        *(undefined4 *)(lVar13 + lVar15 * 8) = *(undefined4 *)(lVar6 + uVar12);
        *(undefined4 *)(lVar13 + 4 + lVar15 * 8) = uVar1;
        lVar6 = *(longlong *)(*(longlong *)(param_3 + 0x48) + (ulonglong)(uVar4 >> 5 & 0x3fffff8));
        uVar12 = (ulonglong)((uVar4 & 0xff) << 3);
        uVar1 = *(undefined4 *)(lVar6 + 4 + uVar12);
        lVar13 = *(longlong *)(*param_2 + 0x30);
        lVar15 = *param_2 + 0x18;
        if (lVar13 != 0) {
          lVar15 = lVar13;
        }
        lVar13 = *(longlong *)(lVar15 + lVar7);
        lVar15 = (longlong)(*(int *)(lVar15 + 0x10 + lVar7) * *(int *)(lVar10 + 4 + lVar9 * 4));
        *(undefined4 *)(lVar13 + lVar15 * 8) = *(undefined4 *)(lVar6 + uVar12);
        *(undefined4 *)(lVar13 + 4 + lVar15 * 8) = uVar1;
        lVar6 = *(longlong *)(*(longlong *)(param_3 + 0x48) + (ulonglong)(uVar3 >> 5 & 0x3fffff8));
        uVar12 = (ulonglong)((uVar3 & 0xff) << 3);
        lVar13 = *(longlong *)(*param_2 + 0x30);
        lVar15 = *param_2 + 0x18;
        if (lVar13 != 0) {
          lVar15 = lVar13;
        }
        uVar1 = *(undefined4 *)(lVar6 + 4 + uVar12);
        lVar13 = *(longlong *)(lVar15 + lVar7);
        lVar10 = (longlong)(*(int *)(lVar15 + 0x10 + lVar7) * *(int *)(lVar10 + 8 + lVar9 * 4));
        *(undefined4 *)(lVar13 + lVar10 * 8) = *(undefined4 *)(lVar6 + uVar12);
        *(undefined4 *)(lVar13 + 4 + lVar10 * 8) = uVar1;
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
      lVar10 = CONCAT44(uStack_7c,uStack_80);
    } while (lVar10 != lVar17 || uStack_74 != uVar14);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146faca1a FUN_146faca1a body=1023 status=ok
// SIG undefined FUN_146faca1a(void)

void FUN_146faca1a(longlong param_1,longlong param_2,longlong param_3)

{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint uVar13;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [8];
  undefined1 local_f0 [8];
  float local_e8 [2];
  undefined8 local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar10 = *(longlong *)(*(longlong *)(param_3 + 0x58) + 0x80);
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(param_3 + 0x58);
  }
  FUN_146fa0812(lVar10 + 0x20,local_f0,DAT_14c99c640);
  if (*(int *)(param_2 + 0x158) * 0x200 + *(int *)(param_2 + 0x15c) == 0) {
    uVar2 = *(uint *)(param_2 + 0x170);
    lVar10 = *(longlong *)(*(longlong *)(param_3 + 0x70) + 0x80);
    if (lVar10 == 0) {
      lVar10 = *(longlong *)(param_3 + 0x70);
    }
    if ((((uVar2 == *(int *)(lVar10 + 0x18) - *(int *)(lVar10 + 0x78)) &&
         (*(longlong *)(param_2 + 0x208) != 0)) && (0 < (int)uVar2)) &&
       ((lVar10 = *(longlong *)(*(longlong *)(param_2 + 0x208) + 0x40), lVar10 != 0 &&
        (local_f0 != (undefined1  [8])0x0)))) {
      uVar13 = 0;
      do {
        if (-1 < *(int *)(*(longlong *)
                           (*(longlong *)(lVar10 + 0x78) + (ulonglong)(uVar13 * 3 >> 9) * 8) +
                         (ulonglong)(uVar13 * 3 & 0x1ff) * 4)) {
          lVar7 = 0xc;
          do {
            *(undefined8 *)(local_f8 + lVar7 + 4) = 0;
            *(undefined8 *)(local_f0 + lVar7 + 4) = 0x3f80000000000000;
            lVar7 = lVar7 + 0x10;
          } while (lVar7 != 0x3c);
          local_f8 = (undefined1  [8])&local_c8;
          FUN_146c35c54(lVar10,uVar13,local_e8,&local_d8);
          bVar6 = *(byte *)(param_1 + 7);
          if (bVar6 == 1) {
            if (local_e8[0] <= 0.04045) {
              local_e8[0] = local_e8[0] / 12.92;
            }
            else {
              local_e8[0] = powf((local_e8[0] + 0.055) / 1.055,2.4);
            }
            if (local_e8[1] <= 0.04045) {
              local_e8[1] = local_e8[1] / 12.92;
            }
            else {
              local_e8[1] = powf((local_e8[1] + 0.055) / 1.055,2.4);
            }
            if ((float)local_e0 <= 0.04045) {
              local_e0._0_4_ = (float)local_e0 / 12.92;
            }
            else {
              local_e0._0_4_ = powf(((float)local_e0 + 0.055) / 1.055,2.4);
            }
            bVar6 = *(byte *)(param_1 + 7);
          }
          if ((bVar6 & 1) != 0) {
            if (local_d8 <= 0.04045) {
              local_d8 = local_d8 / 12.92;
            }
            else {
              local_d8 = powf((local_d8 + 0.055) / 1.055,2.4);
            }
            if (local_d4 <= 0.04045) {
              local_d4 = local_d4 / 12.92;
            }
            else {
              local_d4 = powf((local_d4 + 0.055) / 1.055,2.4);
            }
            if (local_d0 <= 0.04045) {
              local_d0 = local_d0 / 12.92;
            }
            else {
              local_d0 = powf((local_d0 + 0.055) / 1.055,2.4);
            }
            bVar6 = *(byte *)(param_1 + 7);
          }
          if ((bVar6 & 1) != 0) {
            if (local_c8 <= 0.04045) {
              local_c8 = local_c8 / 12.92;
            }
            else {
              local_c8 = powf((local_c8 + 0.055) / 1.055,2.4);
            }
            if (local_c4 <= 0.04045) {
              local_c4 = local_c4 / 12.92;
            }
            else {
              local_c4 = powf((local_c4 + 0.055) / 1.055,2.4);
            }
            if (local_c0 <= 0.04045) {
              local_c0 = local_c0 / 12.92;
            }
            else {
              local_c0 = powf((local_c0 + 0.055) / 1.055,2.4);
            }
          }
          plVar11 = *(longlong **)(*(longlong *)(param_3 + 0xa0) + 0x30);
          plVar12 = (longlong *)(*(longlong *)(param_3 + 0xa0) + 0x18);
          if (plVar11 != (longlong *)0x0) {
            plVar12 = plVar11;
          }
          if (*(int *)(param_3 + 0xa8) == 0) {
            plVar12 = (longlong *)((ulonglong)(uVar13 >> 8) * 0xc18 + *plVar12);
            iVar9 = *(int *)((longlong)plVar12 + (ulonglong)(uVar13 & 0xff) * 4 + 0x10);
          }
          else {
            iVar9 = (int)plVar12[2] * uVar13;
          }
          lVar7 = *plVar12;
          lVar8 = 0;
          do {
            fVar3 = local_e8[lVar8 + 1];
            fVar4 = *(float *)((longlong)&local_e0 + lVar8 * 4);
            fVar5 = *(float *)((longlong)&local_e0 + lVar8 * 4 + 4);
            plVar11 = (longlong *)((longlong)local_f0 + 0x18);
            if (*(longlong **)((longlong)local_f0 + 0x30) != (longlong *)0x0) {
              plVar11 = *(longlong **)((longlong)local_f0 + 0x30);
            }
            pfVar1 = (float *)(*plVar11 +
                              (longlong)
                              ((int)plVar11[2] * *(int *)((longlong)iVar9 * 4 + lVar7 + lVar8)) *
                              0x10);
            *pfVar1 = local_e8[lVar8];
            pfVar1[1] = fVar3;
            pfVar1[2] = fVar4;
            pfVar1[3] = fVar5;
            lVar8 = lVar8 + 4;
          } while (lVar8 != 0xc);
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar2);
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146face1a FUN_146face1a body=19 status=ok
// SIG undefined FUN_146face1a(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_146face1a(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_268 [32];
  longlong lStack_248;
  int *piStack_240;
  undefined8 uStack_230;
  uint uStack_224;
  ulonglong uStack_220;
  uint uStack_218;
  int iStack_214;
  uint uStack_210;
  uint uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  undefined8 uStack_1f4;
  undefined4 uStack_1ec;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  int iStack_1dc;
  longlong lStack_1d8;
  undefined8 uStack_1d0;
  longlong alStack_1c8 [7];
  longlong *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  longlong lStack_160;
  longlong lStack_158;
  uint *puStack_150;
  uint *puStack_148;
  undefined1 auStack_13c [4];
  undefined8 uStack_138;
  undefined4 uStack_130;
  uint uStack_128;
  undefined1 auStack_124 [4];
  uint auStack_120 [2];
  longlong lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  int iStack_e4;
  undefined1 auStack_e0 [8];
  undefined1 *puStack_d8;
  int iStack_d0;
  longlong alStack_c8 [4];
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined4 uStack_94;
  longlong lStack_88;
  undefined4 uStack_80;
  ulonglong uStack_70;
  ulonglong uVar12;
  
  if (*(longlong *)(param_2 + 0x208) != 0) {
    FUN_146face2e();
    return;
  }
  uStack_70 = DAT_14c707940 ^ (ulonglong)auStack_268;
  FUN_146f6f3aa(param_3);
  lStack_160 = 0;
  lStack_158 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_180 = 0;
  uStack_178 = 0;
  plStack_190 = (longlong *)0x0;
  uStack_188 = 0;
  alStack_1c8[5] = 0;
  alStack_1c8[6] = 0;
  alStack_1c8[3] = 0;
  alStack_1c8[4] = 0;
  alStack_1c8[1] = 0;
  alStack_1c8[2] = 0;
  FUN_146fab37a(alStack_1c8,param_3);
  *(undefined1 *)(alStack_1c8[0] + 0x1a4) = 1;
  *(undefined1 *)(alStack_1c8[0] + 0x1dc) = 1;
  *(undefined1 *)(alStack_1c8[0] + 0x24c) = 1;
  *(undefined1 *)(alStack_1c8[0] + 700) = 1;
  *(undefined1 *)(alStack_1c8[0] + 0x284) = 1;
  *(undefined1 *)(alStack_1c8[0] + 0x214) = 1;
  FUN_146faf324(alStack_1c8,1);
  lVar15 = *(longlong *)(*(longlong *)(alStack_1c8[0] + 0x60) + 0x80);
  if (lVar15 == 0) {
    lVar15 = *(longlong *)(alStack_1c8[0] + 0x60);
  }
  FUN_1456bd906(lVar15,(*(int *)(lVar15 + 0x18) + *(int *)(param_2 + 0x50)) -
                       *(int *)(lVar15 + 0x78));
  uStack_230 = 0;
  if (*(char *)(param_1 + 1) == '\x01') {
    if (*(char *)(param_2 + 0x1a8) == '\x01') {
      uVar3 = FUN_146faf3e0(alStack_1c8);
      uStack_230 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
    }
    else {
      uStack_230 = 0;
    }
  }
  lStack_1d8 = 0;
  uStack_1d0 = 0;
  FUN_146faab75(param_2,alStack_1c8,*(undefined1 *)(param_1 + 8));
  lVar15 = *(longlong *)(*(longlong *)(alStack_1c8[0] + 0x80) + 0x80);
  if (lVar15 == 0) {
    lVar15 = *(longlong *)(alStack_1c8[0] + 0x80);
  }
  iStack_1dc = FUN_146f70732(lVar15);
  plVar4 = (longlong *)(lStack_158 + 0x18);
  if (*(longlong **)(lStack_158 + 0x30) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lStack_158 + 0x30);
  }
  *(undefined8 *)(*plVar4 + (longlong)(iStack_1dc * (int)plVar4[2]) * 8) = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  alStack_c8[0] = 0;
  alStack_c8[1] = 0;
  uStack_9c = 0xffffffff00000080;
  uStack_94 = 0;
  lStack_88 = 0;
  uStack_80 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_110 = 0;
  uStack_ec = 0xffffffff00000080;
  iStack_e4 = 0;
  puStack_d8 = (undefined1 *)0x0;
  iStack_d0 = 0;
  uVar14 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
  uVar12 = 0;
  if ((uVar14 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
    uVar13 = 1;
    uVar5 = 1;
    if (1 < (int)uVar14) {
      uVar13 = (ulonglong)uVar14;
    }
    do {
      uVar9 = uVar5;
      uVar11 = (uint)uVar9;
      uVar12 = uVar13;
      if ((uint)uVar13 == uVar11) break;
      uVar5 = (ulonglong)(uVar11 + 1);
      uVar12 = uVar9;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar9 >> 9] +
                                         (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
  }
  if ((uint)uVar12 != uVar14) {
    uStack_224 = uVar14;
    do {
      lVar15 = *(longlong *)(*(longlong *)(param_2 + 0x130) + (uVar12 >> 9) * 8);
      uVar5 = (ulonglong)((uint)uVar12 & 0x1ff);
      uStack_1e0 = *(undefined4 *)(lVar15 + 8 + uVar5 * 0xc);
      uStack_1e8 = *(undefined8 *)(lVar15 + uVar5 * 0xc);
      uStack_1f4 = 0xffffffffffffffff;
      uStack_1ec = 0xffffffff;
      uStack_1f8 = *(undefined4 *)(lVar15 + 8 + uVar5 * 0xc);
      uStack_200 = *(undefined8 *)(lVar15 + uVar5 * 0xc);
      auStack_120[0] = 0xffffffff;
      _uStack_128 = 0xffffffffffffffff;
      uStack_130 = 0xffffffff;
      uStack_138 = 0xffffffffffffffff;
      lVar15 = 0;
      do {
        uStack_204 = *(undefined4 *)((longlong)&uStack_200 + lVar15 * 4);
        uStack_208 = *(undefined4 *)((longlong)&uStack_1f4 + lVar15 * 4);
        uVar14 = *(uint *)((longlong)&uStack_1e8 + lVar15 * 4);
        uStack_20c = uVar14;
        uVar1 = FUN_1448eb174(&uStack_20c,0xc,0);
        iVar2 = FUN_146faff3c(alStack_c8,uVar1,&uStack_20c);
        lVar10 = alStack_1c8[0];
        if (iVar2 == -1) {
          uStack_220 = (ulonglong)uVar14;
          uVar1 = *(undefined4 *)(lStack_1d8 + (longlong)(int)uVar14 * 4);
          lVar6 = *(longlong *)(*(longlong *)(alStack_1c8[0] + 0x58) + 0x80);
          if (lVar6 == 0) {
            lVar6 = *(longlong *)(alStack_1c8[0] + 0x58);
          }
          uStack_210 = FUN_146f70732(lVar6);
          FUN_146f70016(lVar10,uStack_210,uVar1);
          puStack_148 = &uStack_210;
          puStack_150 = &uStack_20c;
          FUN_146faffa2(alStack_c8,auStack_13c,&puStack_150);
          dVar16 = DAT_14c8462c0;
          dVar17 = DAT_14c8462c8;
          dVar18 = DAT_14c8462d0;
          if (*(char *)(param_2 + 0x70) == '\x01') {
            lVar10 = *(longlong *)(*(longlong *)(param_2 + 0x60) + (uStack_220 >> 9 & 0x7fffff) * 8)
            ;
            uVar5 = (ulonglong)((uint)uStack_220 & 0x1ff);
            dVar16 = (double)*(float *)(lVar10 + uVar5 * 0xc);
            dVar17 = (double)*(float *)(lVar10 + 4 + uVar5 * 0xc);
            dVar18 = (double)*(float *)(lVar10 + 8 + uVar5 * 0xc);
          }
          if (alStack_1c8[3] != 0) {
            plVar4 = (longlong *)(alStack_1c8[3] + 0x18);
            if (*(longlong **)(alStack_1c8[3] + 0x30) != (longlong *)0x0) {
              plVar4 = *(longlong **)(alStack_1c8[3] + 0x30);
            }
            lVar10 = *plVar4;
            lVar6 = (longlong)(int)((int)plVar4[2] * uStack_210);
            *(float *)(lVar10 + lVar6 * 0xc) = (float)dVar16;
            *(float *)(lVar10 + 4 + lVar6 * 0xc) = (float)dVar17;
            *(float *)(lVar10 + 8 + lVar6 * 0xc) = (float)dVar18;
          }
          dVar16 = DAT_14c8463f8;
          dVar17 = DAT_14c8463f0;
          if (*(char *)(param_2 + 0xb0) == '\x01') {
            lVar10 = *(longlong *)(*(longlong *)(param_2 + 0xa0) + (ulonglong)(uVar14 >> 9) * 8);
            uVar5 = (ulonglong)((uint)uStack_220 & 0x1ff);
            dVar16 = (double)*(float *)(lVar10 + 4 + uVar5 * 8);
            dVar17 = (double)*(float *)(lVar10 + uVar5 * 8);
          }
          lVar10 = *plStack_190;
          lVar6 = *(longlong *)(*(longlong *)(alStack_1c8[0] + 0x60) + 0x80);
          if (lVar6 == 0) {
            lVar6 = *(longlong *)(alStack_1c8[0] + 0x60);
          }
          iStack_214 = FUN_146f70732(lVar6);
          plVar4 = *(longlong **)(lVar10 + 0x30);
          plVar8 = (longlong *)(lVar10 + 0x18);
          if (plVar4 != (longlong *)0x0) {
            plVar8 = plVar4;
          }
          lVar10 = *plVar8;
          lVar6 = (longlong)(iStack_214 * (int)plVar8[2]);
          *(float *)(lVar10 + lVar6 * 8) = (float)dVar17;
          *(float *)(lVar10 + 4 + lVar6 * 8) = (float)dVar16;
          uStack_218 = uStack_210;
          puStack_150 = &uStack_218;
          puStack_148 = (uint *)&iStack_214;
          FUN_146fb0446(&lStack_118,auStack_13c,&puStack_150);
        }
        uVar1 = FUN_1448eb174(&uStack_20c,0xc,0);
        iVar2 = FUN_146faff3c(alStack_c8,uVar1);
        lVar10 = (longlong)iVar2 * 0x18 + alStack_c8[0];
        if (iVar2 == -1) {
          lVar10 = 0;
        }
        uVar14 = *(uint *)(lVar10 + 0xc);
        auStack_120[lVar15 + -2] = uVar14;
        lVar10 = 0;
        if ((int)uStack_110 != iStack_e4) {
          puVar7 = puStack_d8;
          if (puStack_d8 == (undefined1 *)0x0) {
            puVar7 = auStack_e0;
          }
          iVar2 = *(int *)(puVar7 + (ulonglong)(iStack_d0 - 1U & uVar14) * 4);
          while (iVar2 != -1) {
            lVar10 = lStack_118 + (longlong)iVar2 * 0x10;
            if (*(uint *)(lStack_118 + (longlong)iVar2 * 0x10) == uVar14) goto LAB_146faee16;
            iVar2 = *(int *)(lVar10 + 8);
          }
          lVar10 = 0;
        }
LAB_146faee16:
        *(undefined4 *)((longlong)&uStack_138 + lVar15 * 4) = *(undefined4 *)(lVar10 + 4);
        lVar15 = lVar15 + 1;
      } while (lVar15 != 3);
      piStack_240 = &iStack_1dc;
      lStack_248 = (longlong)auStack_120;
      FUN_146faf4d2(alStack_1c8,&puStack_150,&uStack_128,auStack_124);
      lStack_248 = CONCAT44(lStack_248._4_4_,uStack_130);
      piStack_240 = (int *)((ulonglong)piStack_240 & 0xffffffff00000000);
      FUN_146faf61c(alStack_1c8,&puStack_150,uStack_138 & 0xffffffff,uStack_138._4_4_);
      if ((char)uStack_230 != '\0') {
        uVar1 = FUN_146bc96d4(param_2,uVar12);
        plVar4 = *(longlong **)(*(longlong *)(alStack_1c8[0] + 0xb0) + 0x30);
        plVar8 = (longlong *)(*(longlong *)(alStack_1c8[0] + 0xb0) + 0x18);
        if (plVar4 != (longlong *)0x0) {
          plVar8 = plVar4;
        }
        plVar4 = (longlong *)(lStack_160 + 0x18);
        if (*(longlong **)(lStack_160 + 0x30) != (longlong *)0x0) {
          plVar4 = *(longlong **)(lStack_160 + 0x30);
        }
        *(undefined4 *)
         (*plVar4 +
         (longlong)
         ((int)plVar4[2] * *(int *)(*plVar8 + (longlong)((int)plVar8[2] * (int)puStack_150) * 4)) *
         4) = uVar1;
      }
      uVar14 = (uint)uVar12 + 1;
      if ((int)uVar14 < (int)uStack_224) {
        uVar14 = uStack_224;
      }
      do {
        if (uVar14 - 1 == (int)uVar12) {
          uVar12 = (ulonglong)uVar14;
          break;
        }
        uVar11 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar11;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_2 + 0x148) +
                                             (ulonglong)(uVar11 >> 9) * 8) +
                                           (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
    } while ((uint)uVar12 != uStack_224);
  }
  *(undefined2 *)(alStack_1c8[0] + 0x1a4) = 0x100;
  *(undefined2 *)(alStack_1c8[0] + 0x1dc) = 0x100;
  *(undefined2 *)(alStack_1c8[0] + 0x24c) = 0x100;
  *(undefined2 *)(alStack_1c8[0] + 700) = 0x100;
  *(undefined2 *)(alStack_1c8[0] + 0x284) = 0x100;
  *(undefined2 *)(alStack_1c8[0] + 0x214) = 0x100;
  iStack_d0 = 0;
  if (puStack_d8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_146fafcda(&lStack_118);
  uStack_80 = 0;
  if (lStack_88 != 0) {
    FUN_1400020a8();
  }
  FUN_146fafd68(alStack_c8);
  if (lStack_1d8 != 0) {
    FUN_1400020a8();
  }
  FUN_146fabf38(alStack_1c8);
  if ((uStack_70 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146face2e FUN_146face2e body=6796 status=ok
// SIG undefined FUN_146face2e(void)

/* WARNING: Removing unreachable block (ram,0x000146fadb0f) */
/* WARNING: Removing unreachable block (ram,0x000146fae498) */
/* WARNING: Removing unreachable block (ram,0x000146fad8ec) */
/* WARNING: Removing unreachable block (ram,0x000146fad8f7) */
/* WARNING: Removing unreachable block (ram,0x000146fad8fb) */
/* WARNING: Removing unreachable block (ram,0x000146fae4a3) */
/* WARNING: Removing unreachable block (ram,0x000146fadb1a) */
/* WARNING: Removing unreachable block (ram,0x000146fadb1e) */

void FUN_146face2e(undefined *param_1,longlong param_2,undefined8 param_3,char param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  uint uVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined8 uVar17;
  code *pcVar18;
  longlong lVar19;
  longlong lVar20;
  code *pcVar21;
  longlong *plVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  undefined8 *puVar27;
  longlong *plVar28;
  uint uVar29;
  undefined8 *puVar30;
  uint uVar31;
  undefined1 *puVar32;
  longlong lVar33;
  ulonglong uVar34;
  bool bVar35;
  ulonglong uVar36;
  longlong *plVar37;
  float fVar38;
  undefined1 auStack_3c8 [32];
  undefined8 *local_3a8;
  int *local_3a0;
  uint local_390;
  char local_389;
  longlong local_388;
  undefined4 local_37c;
  undefined *local_378;
  longlong local_370;
  undefined8 local_368;
  ulonglong local_360;
  longlong local_358;
  undefined *local_350;
  undefined8 local_348;
  longlong local_340;
  undefined8 local_338;
  ulonglong local_330;
  ulonglong local_328;
  longlong local_320;
  longlong local_318;
  uint local_30c [4];
  int local_2fc;
  longlong local_2f8 [8];
  longlong local_2b8;
  ulonglong uStack_2b0;
  longlong local_2a0 [16];
  undefined8 uStack_220;
  undefined8 local_218;
  int local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  code *local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  longlong local_1d8;
  longlong *plStack_1d0;
  code *local_1c8;
  code *pcStack_1c0;
  longlong *local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  longlong *local_198;
  longlong *plStack_190;
  code *local_188;
  undefined8 uStack_180;
  code *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  longlong *local_158;
  undefined8 uStack_150;
  longlong local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  int local_114;
  undefined1 local_110 [8];
  undefined1 *local_108;
  int local_100;
  code *local_b8;
  code *pcStack_b0;
  undefined8 local_a8;
  uint uStack_a0;
  int iStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  plVar28 = *(longlong **)(param_2 + 0x208);
  local_389 = param_4;
  local_368 = param_3;
  if (plVar28 == (longlong *)0x0) {
    local_2a0[0xf] = 0;
    uStack_220 = 0;
    local_338 = 0;
    local_348 = 0;
    local_328 = 0;
    local_340 = 0;
    local_390 = 0;
    local_370 = 0;
    local_350 = (undefined *)0x0;
    local_388 = 0;
    local_358 = 0;
    local_320 = 0;
    bVar35 = false;
    local_330 = 0;
    local_318 = 0;
  }
  else {
    uVar11 = *(uint *)(plVar28 + 7);
    if ((int)uVar11 < 1) {
      local_358 = 0;
      local_350 = (undefined *)0x0;
LAB_146fae67d:
      local_370 = 0;
    }
    else {
      puVar27 = (undefined8 *)plVar28[6];
      local_350 = (undefined *)*puVar27;
      if (uVar11 == 1) {
        local_358 = 0;
        goto LAB_146fae67d;
      }
      local_358 = puVar27[1];
      if (uVar11 < 3) goto LAB_146fae67d;
      local_370 = puVar27[2];
    }
    local_388 = plVar28[9];
    local_320 = plVar28[8];
    local_390 = (**(code **)(*plVar28 + 0xa0))();
    lVar26 = *(longlong *)(param_2 + 0x208);
    local_340 = *(longlong *)(lVar26 + 0xc0);
    bVar35 = local_340 != 0;
    if (local_340 == 0) {
      local_318 = 0;
      local_330 = 0;
      local_328 = 0;
    }
    else {
      local_330 = *(ulonglong *)(lVar26 + 200);
      local_328 = *(ulonglong *)(lVar26 + 0xd0);
      local_318 = *(longlong *)(lVar26 + 0xd8);
    }
    local_348 = CONCAT71((int7)((ulonglong)lVar26 >> 8),
                         *(int *)(lVar26 + 0x78) != *(int *)(lVar26 + 0xa4));
    local_2a0[0xf] = 0;
    uStack_220 = 0;
    if ((int)local_390 < 1) {
      local_338 = 0;
    }
    else {
      uVar34 = (ulonglong)local_390;
      uVar36 = 0;
      do {
        uVar5 = uStack_220;
        if ((longlong)uVar36 < (longlong)*(int *)(*(longlong *)(param_2 + 0x208) + 0x28)) {
          uVar17 = *(undefined8 *)
                    (*(longlong *)(*(longlong *)(param_2 + 0x208) + 0x20) + uVar36 * 8);
        }
        else {
          uVar17 = 0;
        }
        lVar26 = (longlong)(int)uStack_220;
        uVar11 = (int)uStack_220 + 1;
        uStack_220 = CONCAT44(uStack_220._4_4_,uVar11);
        if (uStack_220._4_4_ < uVar11) {
          FUN_146fb08e4(local_2a0 + 0xf,uVar5 & 0xffffffff);
        }
        *(undefined8 *)(local_2a0[0xf] + lVar26 * 8) = uVar17;
        uVar36 = uVar36 + 1;
      } while (uVar34 != uVar36);
      local_338 = CONCAT71((int7)((ulonglong)local_2a0[0xf] >> 8),1);
    }
  }
  uVar17 = local_368;
  FUN_146f6f3aa(local_368);
  local_2a0[0xd] = 0;
  local_2a0[0xe] = 0;
  local_2a0[0xb] = 0;
  local_2a0[0xc] = 0;
  local_2a0[9] = 0;
  local_2a0[10] = 0;
  local_2a0[7] = 0;
  local_2a0[8] = 0;
  local_2a0[5] = 0;
  local_2a0[6] = 0;
  local_2a0[3] = 0;
  local_2a0[4] = 0;
  local_2a0[1] = 0;
  local_2a0[2] = 0;
  FUN_146fab37a(local_2a0,uVar17);
  if ((param_1[1] == '\0') || (*(char *)(param_2 + 0x1a8) != '\x01')) {
    local_37c = 0;
  }
  else {
    uVar17 = FUN_146faf3e0(local_2a0);
    local_37c = (undefined4)CONCAT71((int7)((ulonglong)uVar17 >> 8),1);
  }
  if ((byte)((byte)local_348 | bVar35) == 1) {
    FUN_146fa70f0(&local_148,local_368);
    FUN_146fa740c(&local_148,0);
    FUN_146fa7646(&local_148);
    FUN_146fa76be(&local_148);
  }
  local_378 = param_1;
  if (bVar35 != false) {
    FUN_146fa70f0(&local_148,local_368);
    uVar11 = FUN_146c27dc2(*(undefined8 *)(param_2 + 0x208));
    FUN_146fa762e(&local_148);
    FUN_146fa7a96(&local_148,uVar11);
    lVar20 = local_318;
    lVar26 = local_340;
    if (0 < (int)uVar11) {
      local_360 = (ulonglong)uVar11 * 0xc;
      lVar25 = 0;
      lVar33 = 0;
      do {
        FUN_146fa7aae(&local_148,&local_188);
        FUN_146fa7ad8(&local_148,&local_b8);
        pcVar18 = local_b8 + 0x18;
        if (*(code **)(local_b8 + 0x30) != (code *)0x0) {
          pcVar18 = *(code **)(local_b8 + 0x30);
        }
        *(undefined8 *)
         (*(longlong *)pcVar18 + (longlong)(*(int *)(pcVar18 + 0x10) * (int)local_188) * 8) =
             *(undefined8 *)(*(longlong *)(lVar26 + 0x18) + lVar25 * 2);
        FUN_146fa7bc0(&local_148,&local_b8);
        pcVar18 = local_b8 + 0x18;
        if (*(code **)(local_b8 + 0x30) != (code *)0x0) {
          pcVar18 = *(code **)(local_b8 + 0x30);
        }
        *(undefined4 *)
         (*(longlong *)pcVar18 + (longlong)(*(int *)(pcVar18 + 0x10) * (int)local_188) * 4) =
             *(undefined4 *)(*(longlong *)(local_330 + 0x18) + lVar25);
        FUN_146fa7ca8(&local_148,&local_b8);
        pcVar18 = local_b8 + 0x18;
        if (*(code **)(local_b8 + 0x30) != (code *)0x0) {
          pcVar18 = *(code **)(local_b8 + 0x30);
        }
        puVar27 = (undefined8 *)(lVar33 * 8 + *(longlong *)(local_328 + 0x18));
        puVar30 = (undefined8 *)
                  ((longlong)(*(int *)(pcVar18 + 0x10) * (int)local_188) * 0x60 +
                  *(longlong *)pcVar18);
        for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
          *puVar30 = *puVar27;
          puVar27 = puVar27 + 1;
          puVar30 = puVar30 + 1;
        }
        FUN_146fa7d90(&local_148,&local_b8);
        pcVar18 = local_b8 + 0x18;
        if (*(code **)(local_b8 + 0x30) != (code *)0x0) {
          pcVar18 = *(code **)(local_b8 + 0x30);
        }
        puVar1 = (undefined4 *)(*(longlong *)(lVar20 + 0x18) + lVar25 * 4);
        uVar15 = puVar1[1];
        uVar14 = puVar1[2];
        uVar3 = puVar1[3];
        puVar2 = (undefined4 *)
                 (*(longlong *)pcVar18 +
                 (longlong)(*(int *)(pcVar18 + 0x10) * (int)local_188) * 0x10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar15;
        puVar2[2] = uVar14;
        puVar2[3] = uVar3;
        lVar33 = lVar33 + 0xc;
        lVar25 = lVar25 + 4;
      } while (local_360 != lVar33);
    }
  }
  local_128 = 0;
  iVar13 = 0;
  local_120 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_11c = 0xffffffff00000080;
  local_114 = 0;
  local_108 = (undefined1 *)0x0;
  local_100 = 0;
  if ((char)local_348 != '\0') {
    FUN_146fa70f0(&local_b8,local_368);
    lVar26 = *(longlong *)(param_2 + 0x208);
    pcVar18 = (code *)(lVar26 + 0x70);
    pcVar21 = (code *)(lVar26 + 0x80);
    local_1c8 = (code *)&DAT_100000000;
    local_1b8 = (longlong *)0xffffffff;
    uStack_1b0 = uStack_1b0 & 0xffffffff00000000;
    pcStack_1c0 = pcVar21;
    if (*(int *)(lVar26 + 0x98) != 0) {
      FUN_1449c0562(&local_1c8);
      iVar13 = *(int *)(lVar26 + 0x98);
    }
    uStack_170 = (ulonglong)local_1b8;
    uVar36 = uStack_170;
    local_168 = (undefined **)uStack_1b0;
    uStack_180 = local_1c8;
    local_178 = pcStack_1c0;
    uStack_170._4_4_ = (int)((ulonglong)local_1b8 >> 0x20);
    iVar12 = uStack_170._4_4_;
    local_188 = pcVar18;
    if ((uStack_170._4_4_ != iVar13) || (uStack_170 = uVar36, pcStack_1c0 != pcVar21)) {
      do {
        uStack_170 = uVar36;
        local_208 = *(longlong **)(*(longlong *)local_188 + (longlong)iVar12 * 0x18);
        FUN_146fa76e4(&local_b8);
        FUN_146fa78ae(&local_b8,local_2f8 + 8,local_208);
        local_1c8 = (code *)&local_208;
        pcStack_1c0 = (code *)(local_2f8 + 8);
        FUN_146fb096a(&local_148,local_2f8 + 6);
        uStack_170 = CONCAT44(uStack_170._4_4_,(uint)uStack_170 & ~uStack_180._4_4_);
        FUN_1449c0562(&uStack_180);
        iVar12 = uStack_170._4_4_;
        uVar36 = uStack_170;
      } while (local_188 != pcVar18 || (local_178 != pcVar21 || uStack_170._4_4_ != iVar13));
    }
  }
  *(undefined1 *)(local_2a0[0] + 0x1a4) = 1;
  *(undefined1 *)(local_2a0[0] + 0x1dc) = 1;
  *(undefined1 *)(local_2a0[0] + 0x24c) = 1;
  *(undefined1 *)(local_2a0[0] + 700) = 1;
  *(undefined1 *)(local_2a0[0] + 0x284) = 1;
  *(undefined1 *)(local_2a0[0] + 0x214) = 1;
  local_2b8 = 0;
  uStack_2b0 = 0;
  FUN_146faab75(param_2,local_2a0,local_378[8]);
  uVar11 = local_390;
  FUN_146faf324(local_2a0,local_390);
  local_2f8[6] = 0;
  local_2f8[7] = 0;
  FUN_146faf79c(local_2f8 + 6,uVar11);
  local_2f8[4] = 0;
  local_2f8[5] = 0;
  local_b8 = (code *)CONCAT44(local_b8._4_4_,0xffffffff);
  FUN_146faf820(local_2f8 + 4,&local_b8,uVar11);
  local_360 = (ulonglong)uVar11;
  if ((char)local_338 != '\0') {
    uVar36 = 0;
    do {
      lVar26 = *(longlong *)(local_2a0[0xf] + uVar36 * 8);
      plVar28 = (longlong *)(uVar36 * 0x10 + local_2f8[6]);
      FUN_146faf892(plVar28,*(int *)(lVar26 + 8) * 0x200 + *(int *)(lVar26 + 0xc),1);
      lVar20 = *(longlong *)(*(longlong *)(local_2a0[0] + 0x60) + 0x80);
      if (lVar20 == 0) {
        lVar20 = *(longlong *)(local_2a0[0] + 0x60);
      }
      lVar25 = uVar36 * 0x80;
      FUN_1456bd906(lVar20 + lVar25,
                    (*(int *)(lVar20 + 0x18 + lVar25) + *(int *)(lVar26 + 0x38)) -
                    *(int *)(lVar20 + 0x78 + lVar25));
      uVar24 = *(int *)(lVar26 + 8) * 0x200 + *(int *)(lVar26 + 0xc);
      uVar11 = 0;
      if ((uVar24 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar26 + 0x10) - 1U))) {
        uVar16 = 1;
        uVar29 = 1;
        if (1 < (int)uVar24) {
          uVar16 = uVar24;
        }
        do {
          uVar11 = uVar16;
          if (uVar16 == uVar29) break;
          uVar23 = uVar29 >> 9;
          uVar31 = uVar29 & 0x1ff;
          uVar11 = uVar29;
          uVar29 = uVar29 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar26 + 0x10))[uVar23] +
                                             (ulonglong)uVar31 * 2) - 1U));
      }
LAB_146fad59d:
      if (uVar11 != uVar24) {
        lVar20 = *(longlong *)(*(longlong *)(lVar26 + 0x48) + (ulonglong)(uVar11 >> 5 & 0x3fffff8));
        uVar34 = (ulonglong)((uVar11 & 0xff) << 3);
        uVar15 = *(undefined4 *)(lVar20 + uVar34);
        uVar14 = *(undefined4 *)(lVar20 + 4 + uVar34);
        lVar20 = *(longlong *)(local_2a0[7] + uVar36 * 8);
        lVar33 = *(longlong *)(*(longlong *)(local_2a0[0] + 0x60) + 0x80);
        if (lVar33 == 0) {
          lVar33 = *(longlong *)(local_2a0[0] + 0x60);
        }
        iVar13 = FUN_146f70732(lVar33 + lVar25);
        plVar22 = *(longlong **)(lVar20 + 0x30);
        plVar37 = (longlong *)(lVar20 + 0x18);
        if (plVar22 != (longlong *)0x0) {
          plVar37 = plVar22;
        }
        lVar20 = *plVar37;
        lVar33 = (longlong)((int)plVar37[2] * iVar13);
        *(undefined4 *)(lVar20 + lVar33 * 8) = uVar15;
        *(undefined4 *)(lVar20 + 4 + lVar33 * 8) = uVar14;
        *(int *)(*plVar28 + (longlong)(int)uVar11 * 4) = iVar13;
        uVar16 = uVar11 + 1;
        if ((int)(uVar11 + 1) < (int)uVar24) {
          uVar16 = uVar24;
        }
        uVar29 = uVar11;
        do {
          uVar11 = uVar16;
          if (uVar16 - 1 == uVar29) break;
          uVar11 = uVar29 + 1;
          uVar29 = uVar11;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar26 + 0x10) +
                                               (ulonglong)(uVar11 >> 9) * 8) +
                                             (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
        goto LAB_146fad59d;
      }
      uVar36 = uVar36 + 1;
    } while (uVar36 != local_360);
  }
  lVar26 = *(longlong *)(*(longlong *)(local_2a0[0] + 0x80) + 0x80);
  if (lVar26 == 0) {
    lVar26 = *(longlong *)(local_2a0[0] + 0x80);
  }
  iVar13 = FUN_146f70732(lVar26);
  uVar6 = uStack_150;
  plVar28 = local_158;
  uVar17 = uStack_160;
  uVar5 = (ulonglong)local_168;
  uVar34 = uStack_170;
  pcVar21 = uStack_180;
  uVar36 = uStack_1b0;
  pcVar18 = pcStack_1c0;
  lVar25 = local_320;
  puVar10 = local_350;
  lVar20 = local_358;
  lVar26 = local_370;
  puVar4 = local_378;
  uVar11 = local_390;
  plVar22 = (longlong *)(local_2a0[0xe] + 0x18);
  if (*(longlong **)(local_2a0[0xe] + 0x30) != (longlong *)0x0) {
    plVar22 = *(longlong **)(local_2a0[0xe] + 0x30);
  }
  local_340 = CONCAT44(local_340._4_4_,iVar13);
  *(undefined8 *)(*plVar22 + (longlong)((int)plVar22[2] * iVar13) * 8) = 0;
  if (local_389 == '\0') {
LAB_146fad7e7:
    if (local_350 == (undefined *)0x0) {
      local_98 = (undefined4)local_168;
      uStack_94 = local_168._4_4_;
      uStack_90 = (undefined4)uStack_160;
      uStack_8c = uStack_160._4_4_;
      local_a8 = (code *)0x0;
      uStack_a0 = (uint)uStack_170;
      iStack_9c = uStack_170._4_4_;
      local_b8 = (code *)0x0;
      pcStack_b0 = uStack_180;
      local_158 = local_198;
      uStack_150 = plStack_190;
      local_188 = FUN_146fb1122;
      uStack_180 = pcStack_1c0;
      local_178 = (code *)0x0;
      uStack_170 = uStack_1b0;
      local_168 = &PTR_LAB_149faaf70;
      uStack_160 = &DAT_142abb3f6;
      local_1c8 = (code *)0x0;
      pcStack_1c0 = pcVar21;
      local_1a8 = (undefined **)uVar5;
      local_1b8 = (longlong *)0x0;
      uStack_1b0 = uVar34;
      uStack_160 = &DAT_142abb3f6;
      local_168 = &PTR_LAB_149faaf70;
      uStack_170 = uVar36;
      local_178 = (code *)0x0;
      uStack_180 = pcVar18;
      local_188 = FUN_146fb1122;
      plStack_190 = (longlong *)uVar6;
      local_198 = plVar28;
      uStack_1a0 = (undefined *)uVar17;
      uVar36 = uStack_170;
      ppuVar9 = local_168;
      puVar10 = uStack_160;
    }
    else {
      local_98 = (undefined4)local_168;
      uStack_94 = local_168._4_4_;
      uStack_90 = (undefined4)uStack_160;
      uStack_8c = uStack_160._4_4_;
      local_a8 = (code *)0x0;
      uStack_a0 = (uint)uStack_170;
      iStack_9c = uStack_170._4_4_;
      local_b8 = (code *)0x0;
      pcStack_b0 = uStack_180;
      local_188 = FUN_142abb202;
      uStack_180 = pcStack_1c0;
      local_178 = (code *)0x0;
      uStack_170 = uStack_1b0;
      local_168 = &PTR_LAB_149faaf50;
      uStack_160 = local_350;
      local_158 = local_2a0;
      uStack_150 = plStack_190;
      local_1c8 = (code *)0x0;
      pcStack_1c0 = pcVar21;
      local_198 = plVar28;
      plStack_190 = (longlong *)uVar6;
      local_1a8 = (undefined **)uVar5;
      uStack_1a0 = (undefined *)uVar17;
      local_1b8 = (longlong *)0x0;
      uStack_1b0 = uVar34;
      uVar36 = uStack_170;
      ppuVar9 = local_168;
      puVar10 = uStack_160;
    }
  }
  else {
    local_188 = (code *)0x0;
    local_178 = (code *)0x0;
    if (local_370 == 0 || (local_358 == 0 || local_350 == (undefined *)0x0)) goto LAB_146fad7e7;
    local_b8 = (code *)0x0;
    local_a8 = (code *)0x0;
    plVar28 = (longlong *)FUN_14001cc68(0x28,8);
    pcVar7 = pcStack_b0;
    local_a8 = local_178;
    pcVar21 = uStack_180;
    pcVar18 = local_188;
    *plVar28 = (longlong)&PTR_FUN_149faaf30;
    plVar28[1] = (longlong)puVar10;
    plVar28[2] = lVar20;
    plVar28[3] = lVar26;
    plVar28[4] = (longlong)local_2a0;
    if (plVar28 + 1 != (longlong *)0x0) {
      local_b8 = FUN_142abacee;
    }
    local_188 = local_b8;
    uVar36 = CONCAT44(iStack_9c,uStack_a0);
    ppuVar9 = (undefined **)CONCAT44(uStack_94,local_98);
    puVar10 = (undefined *)CONCAT44(uStack_8c,uStack_90);
    uStack_180 = pcStack_b0;
    local_178 = (code *)plVar28;
    local_158 = local_88;
    uStack_150 = uStack_80;
    local_b8 = pcVar18;
    pcStack_b0 = pcVar21;
    uStack_a0 = (uint)uStack_170;
    iStack_9c = uStack_170._4_4_;
    local_98 = (undefined4)local_168;
    uStack_94 = local_168._4_4_;
    uStack_90 = (undefined4)uStack_160;
    uStack_8c = uStack_160._4_4_;
    if (pcVar18 != (code *)0x0) {
      plVar22 = (longlong *)local_a8;
      if (local_a8 == (code *)0x0) {
        plVar22 = (longlong *)&local_98;
      }
      uStack_180 = pcVar7;
      uStack_170 = uVar36;
      local_168 = ppuVar9;
      uStack_160 = puVar10;
      (**(code **)(*plVar22 + 0x10))();
      uVar36 = uStack_170;
      ppuVar9 = local_168;
      puVar10 = uStack_160;
    }
  }
  uStack_160 = puVar10;
  local_168 = ppuVar9;
  uStack_170 = uVar36;
  uStack_80 = plStack_190;
  local_88 = local_198;
  local_1e8 = (ulonglong)local_1a8;
  pcStack_b0 = pcStack_1c0;
  uStack_a0 = (uint)uStack_1b0;
  iStack_9c = uStack_1b0._4_4_;
  local_98 = (undefined4)local_1a8;
  uStack_94 = local_1a8._4_4_;
  uStack_90 = (undefined4)uStack_1a0;
  uStack_8c = uStack_1a0._4_4_;
  if (lVar25 == 0) {
    local_198 = (longlong *)local_1d8;
    plStack_190 = plStack_1d0;
    local_1c8 = FUN_146fb1122;
    pcStack_1c0 = uStack_200;
    local_1b8 = (longlong *)0x0;
    uStack_1b0 = uStack_1f0;
    local_1a8 = &PTR_LAB_149faaf70;
    uStack_1a0 = &DAT_142abb746;
  }
  else {
    local_1c8 = FUN_142abb3f8;
    pcStack_1c0 = uStack_200;
    local_1b8 = (longlong *)0x0;
    uStack_1b0 = uStack_1f0;
    local_1a8 = &PTR_LAB_149faaf90;
    uStack_1a0 = puVar4;
    local_198 = (longlong *)lVar25;
    plStack_190 = local_2a0;
  }
  local_a8._4_4_ = 0;
  local_a8._0_4_ = 0;
  uStack_1f0._4_4_ = iStack_9c;
  uStack_1f0._0_4_ = uStack_a0;
  local_b8 = (code *)0x0;
  local_1b8 = (longlong *)0x0;
  local_1f8 = (code *)0x0;
  uStack_200 = pcStack_b0;
  local_208 = (longlong *)0x0;
  if (local_388 != 0) {
    uVar16 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
    uVar24 = 0;
    if ((uVar16 != 0) &&
       (uVar24 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
      uVar36 = 1;
      uVar29 = 1;
      if (1 < (int)uVar16) {
        uVar29 = uVar16;
      }
      do {
        uVar23 = (uint)uVar36;
        uVar24 = uVar29;
        if (uVar29 == uVar23) break;
        uVar34 = uVar36 >> 9;
        uVar36 = (ulonglong)(uVar23 + 1);
        uVar24 = uVar23;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar34] +
                                           (ulonglong)(uVar23 & 0x1ff) * 2) - 1U));
    }
    if (uVar24 != uVar16) {
      uVar11 = 0;
      do {
        uVar29 = uVar11;
        iVar13 = *(int *)(*(longlong *)
                           (*(longlong *)(local_388 + 0x20) + (ulonglong)(uVar24 >> 9) * 8) +
                         (ulonglong)(uVar24 & 0x1ff) * 4);
        uVar36 = (ulonglong)iVar13;
        if ((-1 < (longlong)uVar36) && (iVar13 < *(int *)(puVar4 + 0x18))) {
          uVar36 = (ulonglong)*(uint *)(*(longlong *)(puVar4 + 0x10) + uVar36 * 4);
        }
        uVar23 = (uint)uVar36;
        uVar11 = uVar23;
        if ((int)uVar23 < (int)uVar29) {
          uVar11 = uVar29;
        }
        uVar31 = uVar24 + 1;
        if ((int)(uVar24 + 1) < (int)uVar16) {
          uVar31 = uVar16;
        }
        do {
          uVar8 = uVar31;
          if (uVar31 - 1 == uVar24) break;
          uVar24 = uVar24 + 1;
          uVar8 = uVar24;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_2 + 0x148) +
                                               (ulonglong)(uVar24 >> 9) * 8) +
                                             (ulonglong)(uVar24 & 0x1ff) * 2) - 1U));
        uVar24 = uVar8;
      } while (uVar24 != uVar16);
      if (uVar11 == 0) {
        local_388 = 0;
        uVar11 = local_390;
      }
      else {
        uVar34 = (ulonglong)uVar29;
        if ((int)uVar29 < (int)uVar23) {
          uVar34 = uVar36 & 0xffffffff;
        }
        do {
          lVar26 = *(longlong *)(*(longlong *)(local_2a0[0] + 0x80) + 0x80);
          if (lVar26 == 0) {
            lVar26 = *(longlong *)(local_2a0[0] + 0x80);
          }
          iVar13 = FUN_146f70732(lVar26);
          plVar28 = (longlong *)(local_2a0[0xe] + 0x18);
          if (*(longlong **)(local_2a0[0xe] + 0x30) != (longlong *)0x0) {
            plVar28 = *(longlong **)(local_2a0[0xe] + 0x30);
          }
          *(undefined8 *)(*plVar28 + (longlong)(iVar13 * (int)plVar28[2]) * 8) = 0;
          uVar24 = (int)uVar34 - 1;
          uVar34 = (ulonglong)uVar24;
          uVar11 = local_390;
        } while (uVar24 != 0);
      }
      goto LAB_146fadb3b;
    }
  }
  local_388 = 0;
LAB_146fadb3b:
  local_2f8[2] = 0;
  local_2f8[3] = 0;
  FUN_146bd783c(local_2f8 + 2,uVar11,1);
  local_2f8[0] = 0;
  local_2f8[1] = 0;
  FUN_146faf906(local_2f8,*(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144));
  uVar24 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
  uVar11 = 0;
  if ((uVar24 != 0) &&
     (uVar11 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
    uVar16 = 1;
    uVar29 = 1;
    if (1 < (int)uVar24) {
      uVar16 = uVar24;
    }
    do {
      uVar11 = uVar16;
      if (uVar16 == uVar29) break;
      uVar23 = uVar29 >> 9;
      uVar31 = uVar29 & 0x1ff;
      uVar11 = uVar29;
      uVar29 = uVar29 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar23] +
                                         (ulonglong)uVar31 * 2) - 1U));
  }
  if (uVar11 != uVar24) {
    do {
      local_390 = uVar24;
      lVar26 = *(longlong *)(*(longlong *)(param_2 + 0x130) + (ulonglong)(uVar11 >> 9) * 8);
      uVar36 = (ulonglong)(uVar11 & 0x1ff);
      pcStack_b0 = (code *)CONCAT44(pcStack_b0._4_4_,*(undefined4 *)(lVar26 + 8 + uVar36 * 0xc));
      local_b8 = *(code **)(lVar26 + uVar36 * 0xc);
      uStack_200 = (code *)CONCAT44(uStack_200._4_4_,0xffffffff);
      local_208 = (longlong *)0xffffffffffffffff;
      lVar26 = 0;
      do {
        lVar25 = local_2a0[0];
        uVar15 = *(undefined4 *)
                  (local_2b8 + (longlong)*(int *)((longlong)&local_b8 + lVar26 * 4) * 4);
        lVar20 = *(longlong *)(*(longlong *)(local_2a0[0] + 0x58) + 0x80);
        if (lVar20 == 0) {
          lVar20 = *(longlong *)(local_2a0[0] + 0x58);
        }
        uVar14 = FUN_146f70732(lVar20);
        FUN_146f70016(lVar25,uVar14,uVar15);
        uVar34 = local_360;
        *(undefined4 *)((longlong)&local_208 + lVar26 * 4) = uVar14;
        lVar26 = lVar26 + 1;
      } while (lVar26 != 3);
      local_2fc = (int)local_340;
      if (local_388 != 0) {
        local_2fc = *(int *)(*(longlong *)
                              (*(longlong *)(local_388 + 0x20) + (ulonglong)(uVar11 >> 9) * 8) +
                            uVar36 * 4);
        if ((-1 < (longlong)local_2fc) && (local_2fc < *(int *)(local_378 + 0x18))) {
          local_2fc = *(int *)(*(longlong *)(local_378 + 0x10) + (longlong)local_2fc * 4);
        }
      }
      local_3a0 = &local_2fc;
      local_3a8 = &uStack_200;
      FUN_146faf4d2(local_2a0,local_30c + 3,&local_208,(longlong)&local_208 + 4);
      *(uint *)(local_2f8[0] + (longlong)(int)uVar11 * 4) = local_30c[3];
      if ((char)local_338 != '\0') {
        uVar24 = uVar11 * 3 + 2;
        local_330 = (ulonglong)(uVar24 >> 9);
        local_328 = (ulonglong)(uVar24 & 0x1ff);
        uVar24 = uVar11 * 3 + 1;
        uVar36 = 0;
        do {
          local_218 = (undefined8 *)0xffffffffffffffff;
          local_210 = -1;
          lVar26 = *(longlong *)(*(longlong *)(local_2a0[0xf] + uVar36 * 8) + 0x78);
          uVar16 = *(uint *)(*(longlong *)(lVar26 + (ulonglong)(uVar11 * 3 >> 9) * 8) +
                            (ulonglong)(uVar11 * 3 & 0x1ff) * 4);
          if ((int)uVar16 < 0) {
            iVar13 = *(int *)(local_2f8[4] + uVar36 * 4);
            if (iVar13 == -1) {
              lVar26 = *(longlong *)(*(longlong *)(local_2a0[0] + 0x60) + 0x80);
              if (lVar26 == 0) {
                lVar26 = *(longlong *)(local_2a0[0] + 0x60);
              }
              lVar20 = *(longlong *)(local_2a0[7] + uVar36 * 8);
              iVar13 = FUN_146f70732(uVar36 * 0x80 + lVar26);
              fVar38 = (float)DAT_14c8463f8;
              plVar28 = *(longlong **)(lVar20 + 0x30);
              plVar22 = (longlong *)(lVar20 + 0x18);
              if (plVar28 != (longlong *)0x0) {
                plVar22 = plVar28;
              }
              lVar26 = *plVar22;
              lVar20 = (longlong)((int)plVar22[2] * iVar13);
              *(float *)(lVar26 + lVar20 * 8) = (float)DAT_14c8463f0;
              *(float *)(lVar26 + 4 + lVar20 * 8) = fVar38;
              *(int *)(local_2f8[4] + uVar36 * 4) = iVar13;
              iVar13 = *(int *)(local_2f8[4] + uVar36 * 4);
              uVar34 = local_360;
            }
            local_218 = (undefined8 *)CONCAT44(iVar13,iVar13);
            local_210 = iVar13;
          }
          else {
            local_30c[0] = uVar16;
            local_30c[1] = *(undefined4 *)
                            (*(longlong *)(lVar26 + (ulonglong)(uVar24 >> 9) * 8) +
                            (ulonglong)(uVar24 & 0x1ff) * 4);
            local_30c[2] = *(undefined4 *)(*(longlong *)(lVar26 + local_330 * 8) + local_328 * 4);
            lVar26 = *(longlong *)(local_2f8[6] + uVar36 * 0x10);
            lVar20 = 0;
            do {
              *(undefined4 *)((longlong)&local_218 + lVar20 * 4) =
                   *(undefined4 *)(lVar26 + (longlong)(int)local_30c[lVar20] * 4);
              lVar20 = lVar20 + 1;
            } while (lVar20 != 3);
          }
          local_3a0 = (int *)CONCAT44(local_3a0._4_4_,(int)uVar36);
          local_3a8 = (undefined8 *)CONCAT44(local_3a8._4_4_,local_210);
          FUN_146faf61c(local_2a0,local_30c + 3,(ulonglong)local_218 & 0xffffffff,local_218._4_4_);
          uVar36 = uVar36 + 1;
        } while (uVar36 != uVar34);
      }
      pcVar18 = local_188;
      local_30c[0] = uVar11;
      pcVar21 = local_178;
      if (local_178 == (code *)0x0) {
        pcVar21 = (code *)&local_168;
      }
      local_218 = &local_208;
      uVar17 = (**(code **)(*(longlong *)pcVar21 + 8))();
      (*pcVar18)(uVar17,local_30c,&local_218);
      pcVar18 = local_1c8;
      local_30c[0] = uVar11;
      plVar28 = local_1b8;
      if (local_1b8 == (longlong *)0x0) {
        plVar28 = &local_1a8;
      }
      local_218 = &local_208;
      uVar17 = (**(code **)(*plVar28 + 8))();
      (*pcVar18)(uVar17,local_30c,&local_218);
      if ((char)local_37c != '\0') {
        uVar15 = FUN_146bc96d4(param_2,uVar11);
        plVar28 = *(longlong **)(*(longlong *)(local_2a0[0] + 0xb0) + 0x30);
        plVar22 = (longlong *)(*(longlong *)(local_2a0[0] + 0xb0) + 0x18);
        if (plVar28 != (longlong *)0x0) {
          plVar22 = plVar28;
        }
        plVar28 = (longlong *)(local_2a0[0xd] + 0x18);
        if (*(longlong **)(local_2a0[0xd] + 0x30) != (longlong *)0x0) {
          plVar28 = *(longlong **)(local_2a0[0xd] + 0x30);
        }
        *(undefined4 *)
         (*plVar28 +
         (longlong)
         ((int)plVar28[2] * *(int *)(*plVar22 + (longlong)(int)((int)plVar22[2] * local_30c[3]) * 4)
         ) * 4) = uVar15;
      }
      uVar24 = uVar11 + 1;
      if ((int)(uVar11 + 1) < (int)local_390) {
        uVar24 = local_390;
      }
      do {
        uVar16 = uVar24;
        if (uVar24 - 1 == uVar11) break;
        uVar11 = uVar11 + 1;
        uVar16 = uVar11;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_2 + 0x148) +
                                             (ulonglong)(uVar11 >> 9) * 8) +
                                           (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
      uVar11 = uVar16;
      uVar24 = local_390;
    } while (uVar11 != local_390);
  }
  uVar17 = local_368;
  FUN_142ab6008(param_2,local_368,local_2f8);
  FUN_142ab64b2(param_2,uVar17,local_2f8 + 8);
  if ((char)local_348 != '\0') {
    lVar26 = *(longlong *)(param_2 + 0x208);
    plVar28 = (longlong *)(lVar26 + 0x70);
    pcVar18 = (code *)(lVar26 + 0x80);
    local_b8 = (code *)&DAT_100000000;
    pcStack_b0 = pcVar18;
    local_a8._0_4_ = 0xffffffff;
    local_a8._4_4_ = 0;
    uStack_a0 = 0;
    iVar13 = 0;
    if (*(int *)(lVar26 + 0x98) != 0) {
      FUN_1449c0562(&local_b8);
      iVar13 = *(int *)(lVar26 + 0x98);
    }
    uStack_1f0._0_4_ = (uint)local_a8;
    uStack_1f0._4_4_ = local_a8._4_4_;
    local_1e8 = CONCAT44(iStack_9c,uStack_a0);
    uStack_200 = local_b8;
    local_1f8 = pcStack_b0;
    local_208 = plVar28;
    if ((local_a8._4_4_ != iVar13) || (pcStack_b0 != pcVar18)) {
      do {
        if ((int)uStack_140 != local_114) {
          lVar26 = *(longlong *)(*local_208 + (longlong)uStack_1f0._4_4_ * 0x18);
          uVar11 = (uint)((ulonglong)lVar26 >> 0x10);
          uVar24 = (uint)lVar26 & 0xffff;
          puVar32 = local_108;
          if (local_108 == (undefined1 *)0x0) {
            puVar32 = local_110;
          }
          iVar12 = *(int *)(puVar32 +
                           (ulonglong)
                           (local_100 - 1U &
                           (int)((ulonglong)lVar26 >> 0x20) + ((uint)lVar26 << 0x10 | uVar24) +
                           (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar24 >> 4)) * 4);
          while (iVar12 != -1) {
            plVar22 = (longlong *)(local_148 + (longlong)iVar12 * 0x18);
            if (*plVar22 == lVar26) goto LAB_146fae4dd;
            iVar12 = (int)plVar22[2];
          }
        }
        plVar22 = (longlong *)0x0;
LAB_146fae4dd:
        uVar36 = uStack_2b0 & 0xffffffff;
        if (0 < (int)uStack_2b0) {
          lVar26 = *(longlong *)(*local_208 + (longlong)uStack_1f0._4_4_ * 0x18 + 8);
          uVar34 = 0;
          do {
            iVar12 = *(int *)(local_2b8 + uVar34 * 4);
            if (iVar12 != -1) {
              local_88 = (longlong *)0x0;
              uStack_80 = (longlong *)0xc00000000;
              FUN_146bea50a(&local_b8,
                            (ulonglong)(((uint)uVar34 & 0x1ff) << 6) +
                            *(longlong *)
                             (*(longlong *)(lVar26 + 0x20) + (uVar34 >> 9 & 0x7fffff) * 8));
              FUN_146fa8a9e(plVar22 + 1,iVar12,&local_b8);
              if (local_88 != (longlong *)0x0) {
                FUN_1400020a8();
              }
              uVar36 = uStack_2b0 & 0xffffffff;
            }
            uVar34 = uVar34 + 1;
          } while ((longlong)uVar34 < (longlong)(int)uVar36);
        }
        uStack_1f0._0_4_ = (uint)uStack_1f0 & ~uStack_200._4_4_;
        FUN_1449c0562(&uStack_200);
      } while (local_208 != plVar28 || (local_1f8 != pcVar18 || uStack_1f0._4_4_ != iVar13));
    }
  }
  *(undefined2 *)(local_2a0[0] + 0x1a4) = 0x100;
  *(undefined2 *)(local_2a0[0] + 0x1dc) = 0x100;
  *(undefined2 *)(local_2a0[0] + 0x24c) = 0x100;
  *(undefined2 *)(local_2a0[0] + 700) = 0x100;
  *(undefined2 *)(local_2a0[0] + 0x284) = 0x100;
  *(undefined2 *)(local_2a0[0] + 0x214) = 0x100;
  if (local_2f8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_2f8[2] != 0) {
    FUN_1400020a8();
  }
  if (local_1c8 != (code *)0x0) {
    plVar28 = local_1b8;
    if (local_1b8 == (longlong *)0x0) {
      plVar28 = &local_1a8;
    }
    (**(code **)(*plVar28 + 0x10))();
  }
  if (local_188 != (code *)0x0) {
    pcVar18 = local_178;
    if (local_178 == (code *)0x0) {
      pcVar18 = (code *)&local_168;
    }
    (**(code **)(*(longlong *)pcVar18 + 0x10))();
  }
  if (local_2f8[4] != 0) {
    FUN_1400020a8();
  }
  FUN_146fb0e6c(local_2f8[6],local_2f8[7] & 0xffffffff);
  if (local_2f8[6] != 0) {
    FUN_1400020a8();
  }
  if (local_2b8 != 0) {
    FUN_1400020a8();
  }
  local_100 = 0;
  if (local_108 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_146fafdf6(&local_148);
  FUN_146fabf38(local_2a0);
  if (local_2a0[0xf] != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_3c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146fae8bc FUN_146fae8bc body=2076 status=ok
// SIG undefined FUN_146fae8bc(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_146fae8bc(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_268 [32];
  longlong local_248;
  int *local_240;
  undefined8 local_230;
  uint local_224;
  ulonglong local_220;
  uint local_218;
  int local_214;
  uint local_210;
  uint local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1f4;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  int local_1dc;
  longlong local_1d8;
  undefined8 uStack_1d0;
  longlong local_1c8 [7];
  longlong *local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  longlong local_160;
  longlong lStack_158;
  uint *local_150;
  uint *local_148;
  undefined1 local_13c [4];
  undefined8 local_138;
  undefined4 local_130;
  uint local_128;
  undefined1 auStack_124 [4];
  uint local_120 [2];
  longlong local_118;
  undefined8 uStack_110;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  int local_e4;
  undefined1 local_e0 [8];
  undefined1 *local_d8;
  int local_d0;
  longlong local_c8 [4];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  longlong local_88;
  undefined4 local_80;
  ulonglong local_70;
  ulonglong uVar12;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_268;
  FUN_146f6f3aa(param_3);
  local_160 = 0;
  lStack_158 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_190 = (longlong *)0x0;
  uStack_188 = 0;
  local_1c8[5] = 0;
  local_1c8[6] = 0;
  local_1c8[3] = 0;
  local_1c8[4] = 0;
  local_1c8[1] = 0;
  local_1c8[2] = 0;
  FUN_146fab37a(local_1c8,param_3);
  *(undefined1 *)(local_1c8[0] + 0x1a4) = 1;
  *(undefined1 *)(local_1c8[0] + 0x1dc) = 1;
  *(undefined1 *)(local_1c8[0] + 0x24c) = 1;
  *(undefined1 *)(local_1c8[0] + 700) = 1;
  *(undefined1 *)(local_1c8[0] + 0x284) = 1;
  *(undefined1 *)(local_1c8[0] + 0x214) = 1;
  FUN_146faf324(local_1c8,1);
  lVar15 = *(longlong *)(*(longlong *)(local_1c8[0] + 0x60) + 0x80);
  if (lVar15 == 0) {
    lVar15 = *(longlong *)(local_1c8[0] + 0x60);
  }
  FUN_1456bd906(lVar15,(*(int *)(lVar15 + 0x18) + *(int *)(param_2 + 0x50)) -
                       *(int *)(lVar15 + 0x78));
  local_230 = 0;
  if (*(char *)(param_1 + 1) == '\x01') {
    if (*(char *)(param_2 + 0x1a8) == '\x01') {
      uVar3 = FUN_146faf3e0(local_1c8);
      local_230 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
    }
    else {
      local_230 = 0;
    }
  }
  local_1d8 = 0;
  uStack_1d0 = 0;
  FUN_146faab75(param_2,local_1c8,*(undefined1 *)(param_1 + 8));
  lVar15 = *(longlong *)(*(longlong *)(local_1c8[0] + 0x80) + 0x80);
  if (lVar15 == 0) {
    lVar15 = *(longlong *)(local_1c8[0] + 0x80);
  }
  local_1dc = FUN_146f70732(lVar15);
  plVar4 = (longlong *)(lStack_158 + 0x18);
  if (*(longlong **)(lStack_158 + 0x30) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lStack_158 + 0x30);
  }
  *(undefined8 *)(*plVar4 + (longlong)(local_1dc * (int)plVar4[2]) * 8) = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_9c = 0xffffffff00000080;
  local_94 = 0;
  local_88 = 0;
  local_80 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_ec = 0xffffffff00000080;
  local_e4 = 0;
  local_d8 = (undefined1 *)0x0;
  local_d0 = 0;
  uVar14 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
  uVar12 = 0;
  if ((uVar14 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
    uVar13 = 1;
    uVar5 = 1;
    if (1 < (int)uVar14) {
      uVar13 = (ulonglong)uVar14;
    }
    do {
      uVar9 = uVar5;
      uVar11 = (uint)uVar9;
      uVar12 = uVar13;
      if ((uint)uVar13 == uVar11) break;
      uVar5 = (ulonglong)(uVar11 + 1);
      uVar12 = uVar9;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar9 >> 9] +
                                         (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
  }
  if ((uint)uVar12 != uVar14) {
    local_224 = uVar14;
    do {
      lVar15 = *(longlong *)(*(longlong *)(param_2 + 0x130) + (uVar12 >> 9) * 8);
      uVar5 = (ulonglong)((uint)uVar12 & 0x1ff);
      local_1e0 = *(undefined4 *)(lVar15 + 8 + uVar5 * 0xc);
      local_1e8 = *(undefined8 *)(lVar15 + uVar5 * 0xc);
      local_1f4 = 0xffffffffffffffff;
      local_1ec = 0xffffffff;
      local_1f8 = *(undefined4 *)(lVar15 + 8 + uVar5 * 0xc);
      local_200 = *(undefined8 *)(lVar15 + uVar5 * 0xc);
      local_120[0] = 0xffffffff;
      _local_128 = 0xffffffffffffffff;
      local_130 = 0xffffffff;
      local_138 = 0xffffffffffffffff;
      lVar15 = 0;
      do {
        local_204 = *(undefined4 *)((longlong)&local_200 + lVar15 * 4);
        local_208 = *(undefined4 *)((longlong)&local_1f4 + lVar15 * 4);
        uVar14 = *(uint *)((longlong)&local_1e8 + lVar15 * 4);
        local_20c = uVar14;
        uVar1 = FUN_1448eb174(&local_20c,0xc,0);
        iVar2 = FUN_146faff3c(local_c8,uVar1,&local_20c);
        lVar10 = local_1c8[0];
        if (iVar2 == -1) {
          local_220 = (ulonglong)uVar14;
          uVar1 = *(undefined4 *)(local_1d8 + (longlong)(int)uVar14 * 4);
          lVar6 = *(longlong *)(*(longlong *)(local_1c8[0] + 0x58) + 0x80);
          if (lVar6 == 0) {
            lVar6 = *(longlong *)(local_1c8[0] + 0x58);
          }
          local_210 = FUN_146f70732(lVar6);
          FUN_146f70016(lVar10,local_210,uVar1);
          local_148 = &local_210;
          local_150 = &local_20c;
          FUN_146faffa2(local_c8,local_13c,&local_150);
          dVar16 = DAT_14c8462c0;
          dVar17 = DAT_14c8462c8;
          dVar18 = DAT_14c8462d0;
          if (*(char *)(param_2 + 0x70) == '\x01') {
            lVar10 = *(longlong *)(*(longlong *)(param_2 + 0x60) + (local_220 >> 9 & 0x7fffff) * 8);
            uVar5 = (ulonglong)((uint)local_220 & 0x1ff);
            dVar16 = (double)*(float *)(lVar10 + uVar5 * 0xc);
            dVar17 = (double)*(float *)(lVar10 + 4 + uVar5 * 0xc);
            dVar18 = (double)*(float *)(lVar10 + 8 + uVar5 * 0xc);
          }
          if (local_1c8[3] != 0) {
            plVar4 = (longlong *)(local_1c8[3] + 0x18);
            if (*(longlong **)(local_1c8[3] + 0x30) != (longlong *)0x0) {
              plVar4 = *(longlong **)(local_1c8[3] + 0x30);
            }
            lVar10 = *plVar4;
            lVar6 = (longlong)(int)((int)plVar4[2] * local_210);
            *(float *)(lVar10 + lVar6 * 0xc) = (float)dVar16;
            *(float *)(lVar10 + 4 + lVar6 * 0xc) = (float)dVar17;
            *(float *)(lVar10 + 8 + lVar6 * 0xc) = (float)dVar18;
          }
          dVar16 = DAT_14c8463f8;
          dVar17 = DAT_14c8463f0;
          if (*(char *)(param_2 + 0xb0) == '\x01') {
            lVar10 = *(longlong *)(*(longlong *)(param_2 + 0xa0) + (ulonglong)(uVar14 >> 9) * 8);
            uVar5 = (ulonglong)((uint)local_220 & 0x1ff);
            dVar16 = (double)*(float *)(lVar10 + 4 + uVar5 * 8);
            dVar17 = (double)*(float *)(lVar10 + uVar5 * 8);
          }
          lVar10 = *local_190;
          lVar6 = *(longlong *)(*(longlong *)(local_1c8[0] + 0x60) + 0x80);
          if (lVar6 == 0) {
            lVar6 = *(longlong *)(local_1c8[0] + 0x60);
          }
          local_214 = FUN_146f70732(lVar6);
          plVar4 = *(longlong **)(lVar10 + 0x30);
          plVar8 = (longlong *)(lVar10 + 0x18);
          if (plVar4 != (longlong *)0x0) {
            plVar8 = plVar4;
          }
          lVar10 = *plVar8;
          lVar6 = (longlong)(local_214 * (int)plVar8[2]);
          *(float *)(lVar10 + lVar6 * 8) = (float)dVar17;
          *(float *)(lVar10 + 4 + lVar6 * 8) = (float)dVar16;
          local_218 = local_210;
          local_150 = &local_218;
          local_148 = (uint *)&local_214;
          FUN_146fb0446(&local_118,local_13c,&local_150);
        }
        uVar1 = FUN_1448eb174(&local_20c,0xc,0);
        iVar2 = FUN_146faff3c(local_c8,uVar1);
        lVar10 = (longlong)iVar2 * 0x18 + local_c8[0];
        if (iVar2 == -1) {
          lVar10 = 0;
        }
        uVar14 = *(uint *)(lVar10 + 0xc);
        local_120[lVar15 + -2] = uVar14;
        lVar10 = 0;
        if ((int)uStack_110 != local_e4) {
          puVar7 = local_d8;
          if (local_d8 == (undefined1 *)0x0) {
            puVar7 = local_e0;
          }
          iVar2 = *(int *)(puVar7 + (ulonglong)(local_d0 - 1U & uVar14) * 4);
          while (iVar2 != -1) {
            lVar10 = local_118 + (longlong)iVar2 * 0x10;
            if (*(uint *)(local_118 + (longlong)iVar2 * 0x10) == uVar14) goto LAB_146faee16;
            iVar2 = *(int *)(lVar10 + 8);
          }
          lVar10 = 0;
        }
LAB_146faee16:
        *(undefined4 *)((longlong)&local_138 + lVar15 * 4) = *(undefined4 *)(lVar10 + 4);
        lVar15 = lVar15 + 1;
      } while (lVar15 != 3);
      local_240 = &local_1dc;
      local_248 = (longlong)local_120;
      FUN_146faf4d2(local_1c8,&local_150,&local_128,auStack_124);
      local_248 = CONCAT44(local_248._4_4_,local_130);
      local_240 = (int *)((ulonglong)local_240 & 0xffffffff00000000);
      FUN_146faf61c(local_1c8,&local_150,local_138 & 0xffffffff,local_138._4_4_);
      if ((char)local_230 != '\0') {
        uVar1 = FUN_146bc96d4(param_2,uVar12);
        plVar4 = *(longlong **)(*(longlong *)(local_1c8[0] + 0xb0) + 0x30);
        plVar8 = (longlong *)(*(longlong *)(local_1c8[0] + 0xb0) + 0x18);
        if (plVar4 != (longlong *)0x0) {
          plVar8 = plVar4;
        }
        plVar4 = (longlong *)(local_160 + 0x18);
        if (*(longlong **)(local_160 + 0x30) != (longlong *)0x0) {
          plVar4 = *(longlong **)(local_160 + 0x30);
        }
        *(undefined4 *)
         (*plVar4 +
         (longlong)
         ((int)plVar4[2] * *(int *)(*plVar8 + (longlong)((int)plVar8[2] * (int)local_150) * 4)) * 4)
             = uVar1;
      }
      uVar14 = (uint)uVar12 + 1;
      if ((int)uVar14 < (int)local_224) {
        uVar14 = local_224;
      }
      do {
        if (uVar14 - 1 == (int)uVar12) {
          uVar12 = (ulonglong)uVar14;
          break;
        }
        uVar11 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar11;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_2 + 0x148) +
                                             (ulonglong)(uVar11 >> 9) * 8) +
                                           (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
    } while ((uint)uVar12 != local_224);
  }
  *(undefined2 *)(local_1c8[0] + 0x1a4) = 0x100;
  *(undefined2 *)(local_1c8[0] + 0x1dc) = 0x100;
  *(undefined2 *)(local_1c8[0] + 0x24c) = 0x100;
  *(undefined2 *)(local_1c8[0] + 700) = 0x100;
  *(undefined2 *)(local_1c8[0] + 0x284) = 0x100;
  *(undefined2 *)(local_1c8[0] + 0x214) = 0x100;
  local_d0 = 0;
  if (local_d8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_146fafcda(&local_118);
  local_80 = 0;
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  FUN_146fafd68(local_c8);
  if (local_1d8 != 0) {
    FUN_1400020a8();
  }
  FUN_146fabf38(local_1c8);
  if ((local_70 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146faf0da FUN_146faf0da body=163 status=ok
// SIG undefined FUN_146faf0da(void)

void FUN_146faf0da(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  if ((longlong)(int)param_2[1] == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = -1;
    lVar3 = 0;
    do {
      if (iVar2 < *(int *)(*param_2 + lVar3)) {
        iVar2 = *(int *)(*param_2 + lVar3);
      }
      lVar3 = lVar3 + 4;
    } while ((longlong)(int)param_2[1] * 4 != lVar3);
    iVar2 = iVar2 + 1;
  }
  FUN_144a127d2((longlong *)(param_1 + 0x10),iVar2,1);
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar3 = 0;
    do {
      *(int *)(*(longlong *)(param_1 + 0x10) + lVar3 * 4) = (int)lVar3;
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x18));
  }
  iVar2 = (int)param_2[1];
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      iVar1 = *(int *)(*param_2 + lVar3 * 4);
      if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_1 + 0x18))) {
        *(int *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 4) = (int)lVar3;
        iVar2 = (int)param_2[1];
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  return;
}



// FUNCTION 146faf17e FUN_146faf17e body=140 status=ok
// SIG undefined FUN_146faf17e(void)

uint FUN_146faf17e(longlong param_1,longlong param_2,char param_3,char param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  
  if (*(int *)(param_1 + 0x38) * 0x200 + *(int *)(param_1 + 0x3c) == 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x50) + 0x80);
    if (lVar4 == 0) {
      lVar4 = *(longlong *)(param_2 + 0x50);
    }
    iVar1 = *(int *)(lVar4 + 0x18) - *(int *)(lVar4 + 0x78);
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),*(int *)(param_1 + 0x50) == iVar1);
  }
  else {
    uVar2 = 0;
  }
  if (*(int *)(param_1 + 0x158) * 0x200 + *(int *)(param_1 + 0x15c) == 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x70) + 0x80);
    if (lVar4 == 0) {
      lVar4 = *(longlong *)(param_2 + 0x70);
    }
    bVar5 = *(int *)(param_1 + 0x170) == *(int *)(lVar4 + 0x18) - *(int *)(lVar4 + 0x78);
  }
  else {
    bVar5 = false;
  }
  uVar3 = uVar2;
  if (param_3 == '\0') {
    if (param_4 == '\0') {
      uVar3 = CONCAT31((int3)(uVar2 >> 8),(byte)uVar2 & bVar5);
    }
    else {
      uVar3 = (uint)bVar5;
      if (*(longlong *)(param_1 + 0x208) == 0) {
        uVar3 = uVar2 & 0xff;
      }
    }
  }
  return uVar3;
}



// FUNCTION 146faf20a FUN_146faf20a body=281 status=ok
// SIG undefined FUN_146faf20a(void)

void FUN_146faf20a(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 unaff_RBP;
  ulonglong uVar7;
  undefined8 unaff_R14;
  
  bVar3 = *(byte *)(param_1 + 3);
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),bVar3);
  if (bVar3 == 0) {
    uVar6 = CONCAT71((int7)((ulonglong)param_3 >> 8),*(undefined1 *)(param_1 + 5)) ^ 1;
  }
  else {
    uVar6 = 0;
  }
  cVar1 = *(char *)(param_1 + 2);
  lVar5 = param_2;
  cVar2 = FUN_146faf17e(param_2,param_3,uVar6,
                        CONCAT71((int7)((ulonglong)unaff_R14 >> 8),cVar1) & 0xffffffff ^ 1);
  if (cVar2 == '\0') {
    if (*(longlong *)(param_2 + 0x208) == 0) {
      FUN_146fae8bc(param_1,param_2,param_3);
      return;
    }
    FUN_146face2e(param_1,param_2,param_3,0);
    return;
  }
  if (cVar1 == '\0') {
    if ((bVar3 == 0) && ((*(byte *)(param_1 + 4) & 1) == 0)) {
      if (*(char *)(param_1 + 5) != '\x01') goto LAB_146faf269;
      uVar4 = 1;
      bVar3 = 0;
    }
    else {
      bVar3 = bVar3 ^ 1 | *(byte *)(param_1 + 4);
      uVar4 = *(undefined1 *)(param_1 + 5);
    }
    uVar6 = CONCAT71((int7)((ulonglong)lVar5 >> 8),uVar4) & 0xffffffffffffff01;
    FUN_146fab584(uVar6,param_2,param_3,uVar7 & 0xffffffff,bVar3 & 1,(char)uVar6);
  }
  else {
    FUN_146fab232(param_1,param_2,param_3,uVar7 & 0xffffffff,*(undefined1 *)(param_1 + 4),
                  *(undefined1 *)(param_1 + 5));
  }
LAB_146faf269:
  if (*(char *)(param_1 + 6) != '\x01') {
    return;
  }
  FUN_146faca1a(param_1,param_2,param_3);
  return;
}



// FUNCTION 146faf324 FUN_146faf324 body=186 status=ok
// SIG undefined FUN_146faf324(void)

void FUN_146faf324(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1[2] != 0) {
    FUN_1458c3508(param_1[2],param_2);
  }
  FUN_146f72d34(*param_1,param_2);
  FUN_146fafbb8(param_1 + 7,param_2);
  if (0 < (int)param_2) {
    lVar2 = 0x20;
    uVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + 0x80);
      if (lVar1 == 0) {
        lVar1 = *(longlong *)(*param_1 + 0x60);
      }
      FUN_146fa0a2e(lVar1 + lVar2,&local_38,DAT_14c99c118);
      *(undefined8 *)(param_1[7] + uVar3 * 8) = local_38;
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x80;
    } while (param_2 != uVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146faf3e0 FUN_146faf3e0 body=241 status=ok
// SIG undefined FUN_146faf3e0(void)

void FUN_146faf3e0(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  undefined4 local_40;
  undefined4 local_34;
  longlong local_30;
  ulonglong local_28;
  
  uVar1 = DAT_14c99c7c8;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *param_1;
  lVar3 = *(longlong *)(lVar4 + 0x78);
  lVar2 = *(longlong *)(lVar3 + 0x80);
  if (lVar2 == 0) {
    lVar2 = lVar3;
  }
  FUN_146fafa2c(lVar2 + 0x20,&local_30,DAT_14c99c7c8);
  param_1[0xd] = local_30;
  if (local_30 == 0) {
    lVar4 = *(longlong *)(lVar4 + 0x78);
    lVar3 = *(longlong *)(lVar4 + 0x80);
    if (lVar3 == 0) {
      lVar3 = lVar4;
    }
    local_48 = &local_34;
    local_34 = 0;
    local_40 = 2;
    FUN_146f96702(lVar3 + 0x20,&local_30,uVar1,1);
    lVar4 = *(longlong *)(*(longlong *)(*param_1 + 0x78) + 0x80);
    if (lVar4 == 0) {
      lVar4 = *(longlong *)(*param_1 + 0x78);
    }
    FUN_146fafa2c(lVar4 + 0x20,&local_30,DAT_14c99c7c8);
    param_1[0xd] = local_30;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146faf4d2 FUN_146faf4d2 body=329 status=ok
// SIG undefined FUN_146faf4d2(void)

undefined4 *
FUN_146faf4d2(longlong *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 *param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong local_78 [2];
  undefined4 *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined4 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = (undefined4 *)0x0;
  uStack_60 = 1;
  uStack_5c = 0;
  FUN_146f924ea(&local_68,0);
  uVar4 = uStack_60;
  *local_68 = *param_3;
  lVar7 = (longlong)(int)uStack_60;
  uStack_60 = uStack_60 + 1;
  if (uStack_5c < uStack_60) {
    FUN_146f924ea(&local_68,uVar4);
  }
  uVar4 = uStack_60;
  local_68[lVar7] = *param_4;
  lVar7 = (longlong)(int)uStack_60;
  uStack_60 = uStack_60 + 1;
  if (uStack_5c < uStack_60) {
    FUN_146f924ea(&local_68,uVar4);
  }
  puVar3 = local_68;
  local_68[lVar7] = *param_5;
  local_78[0] = 0;
  local_78[1] = 0;
  lVar7 = *param_1;
  uVar4 = uStack_60;
  uVar1 = *param_6;
  lVar2 = *(longlong *)(lVar7 + 0x70);
  lVar6 = *(longlong *)(lVar2 + 0x80);
  if (lVar6 == 0) {
    lVar6 = lVar2;
  }
  uVar5 = FUN_146f70732(lVar6);
  *param_2 = uVar5;
  local_50 = puVar3;
  local_48 = uVar4;
  local_88 = local_78;
  FUN_146f7039a(lVar7,uVar5,uVar1);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146faf61c FUN_146faf61c body=382 status=ok
// SIG undefined FUN_146faf61c(void)

void FUN_146faf61c(longlong *param_1,uint *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,int param_6)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146faf892(param_1 + 0xb,3,0);
  *(undefined4 *)param_1[0xb] = param_3;
  *(undefined4 *)(param_1[0xb] + 4) = param_4;
  *(undefined4 *)(param_1[0xb] + 8) = param_5;
  local_48 = param_1[0xb];
  local_40 = (undefined4)param_1[0xc];
  FUN_146f70828(*param_1,*param_2,&local_48,param_6);
  lVar8 = (longlong)param_6;
  lVar3 = *(longlong *)(param_1[7] + lVar8 * 8);
  uVar2 = *param_2;
  lVar4 = *(longlong *)(*param_1 + 0xa0);
  plVar10 = *(longlong **)(lVar4 + 0x30);
  plVar9 = (longlong *)(lVar4 + 0x18);
  if (plVar10 != (longlong *)0x0) {
    plVar9 = plVar10;
  }
  if (*(int *)(*param_1 + 0xa8) == 0) {
    plVar9 = (longlong *)((longlong)((int)uVar2 >> 8) * 0xc18 + *plVar9);
    iVar6 = *(int *)((longlong)plVar9 + (ulonglong)(uVar2 & 0xff) * 4 + 0x10);
  }
  else {
    iVar6 = uVar2 * (int)plVar9[2];
  }
  lVar4 = *plVar9;
  lVar7 = 0;
  do {
    lVar5 = param_1[2];
    plVar10 = *(longlong **)(lVar3 + 0x30);
    if (plVar10 == (longlong *)0x0) {
      plVar10 = (longlong *)(lVar3 + 0x18);
    }
    if ((lVar5 != 0) && (param_6 < *(int *)(lVar5 + 0x38))) {
      lVar12 = (longlong)((int)plVar10[2] * *(int *)(param_1[0xb] + lVar7 * 4));
      uVar1 = *(undefined4 *)(*plVar10 + 4 + lVar12 * 8);
      lVar11 = lVar5 + 0x18;
      if (*(longlong *)(lVar5 + 0x30) != 0) {
        lVar11 = *(longlong *)(lVar5 + 0x30);
      }
      lVar5 = *(longlong *)(lVar11 + lVar8 * 0x18);
      lVar11 = (longlong)
               (*(int *)((longlong)iVar6 * 4 + lVar4 + lVar7 * 4) *
               *(int *)(lVar11 + 0x10 + lVar8 * 0x18));
      *(undefined4 *)(lVar5 + lVar11 * 8) = *(undefined4 *)(*plVar10 + lVar12 * 8);
      *(undefined4 *)(lVar5 + 4 + lVar11 * 8) = uVar1;
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 3);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146faf79c FUN_146faf79c body=130 status=ok
// SIG undefined FUN_146faf79c(void)

void FUN_146faf79c(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146fb0e98(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_146fb0f1e(param_1,param_2,iVar1 - param_2);
    FUN_146fb0f78(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146faf820 FUN_146faf820 body=112 status=ok
// SIG undefined FUN_146faf820(void)

void FUN_146faf820(longlong *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_3);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_3) {
    FUN_146fb1014(param_1,param_3);
  }
  for (; param_3 != 0; param_3 = param_3 + -1) {
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_146fafe96(param_1,iVar1);
    }
    *(undefined4 *)(*param_1 + (longlong)iVar1 * 4) = *param_2;
  }
  return;
}



// FUNCTION 146faf892 FUN_146faf892 body=115 status=ok
// SIG undefined FUN_146faf892(void)

void FUN_146faf892(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146fafe96(param_1,iVar1);
    }
    FUN_146fb1073((longlong)iVar1 * 4 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146fb1086(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146faf906 FUN_146faf906 body=109 status=ok
// SIG undefined FUN_146faf906(void)

void FUN_146faf906(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f984e2(param_1,iVar1);
    }
    FUN_146fb1177((longlong)iVar1 * 4 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_146fb118a(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146faf974 FUN_146faf974 body=180 status=ok
// SIG undefined FUN_146faf974(void)

void FUN_146faf974(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) +
                    ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uVar2 << 0x13 | uVar2) +
                    (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (*plVar4 == param_3) {
          if (((plVar4 + 1 != (longlong *)0x0 && plVar4 != (longlong *)0x0) &&
              (lVar1 = plVar4[1], *(int *)(lVar1 + 8) == 4)) && (*(int *)(lVar1 + 0xc) == 1))
          goto LAB_146faf981;
          break;
        }
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  lVar1 = 0;
LAB_146faf981:
  *param_2 = lVar1;
  return;
}



// FUNCTION 146fafa2c FUN_146fafa2c body=180 status=ok
// SIG undefined FUN_146fafa2c(void)

void FUN_146fafa2c(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) +
                    ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uVar2 << 0x13 | uVar2) +
                    (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (*plVar4 == param_3) {
          if (((plVar4 + 1 != (longlong *)0x0 && plVar4 != (longlong *)0x0) &&
              (lVar1 = plVar4[1], *(int *)(lVar1 + 8) == 4)) && (*(int *)(lVar1 + 0xc) == 1))
          goto LAB_146fafa39;
          break;
        }
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  lVar1 = 0;
LAB_146fafa39:
  *param_2 = lVar1;
  return;
}



// FUNCTION 146fafae0 FUN_146fafae0 body=215 status=ok
// SIG undefined FUN_146fafae0(void)

void FUN_146fafae0(longlong param_1,int *param_2,double *param_3,double *param_4,undefined4 param_5)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != 0) {
    dVar1 = param_3[2];
    dVar2 = param_3[1];
    plVar4 = (longlong *)(lVar3 + 0x18);
    if (*(longlong **)(lVar3 + 0x30) != (longlong *)0x0) {
      plVar4 = *(longlong **)(lVar3 + 0x30);
    }
    lVar3 = *plVar4;
    lVar5 = (longlong)((int)plVar4[2] * *param_2);
    *(float *)(lVar3 + lVar5 * 0xc) = (float)*param_3;
    *(float *)(lVar3 + 4 + lVar5 * 0xc) = (float)dVar2;
    *(float *)(lVar3 + 8 + lVar5 * 0xc) = (float)dVar1;
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    dVar1 = param_4[2];
    dVar2 = param_4[1];
    plVar4 = (longlong *)(lVar3 + 0x18);
    if (*(longlong **)(lVar3 + 0x30) != (longlong *)0x0) {
      plVar4 = *(longlong **)(lVar3 + 0x30);
    }
    lVar3 = *plVar4;
    lVar5 = (longlong)((int)plVar4[2] * *param_2);
    *(float *)(lVar3 + lVar5 * 0xc) = (float)*param_4;
    *(float *)(lVar3 + 4 + lVar5 * 0xc) = (float)dVar2;
    *(float *)(lVar3 + 8 + lVar5 * 0xc) = (float)dVar1;
  }
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (lVar3 != 0) {
    plVar4 = (longlong *)(lVar3 + 0x18);
    if (*(longlong **)(lVar3 + 0x30) != (longlong *)0x0) {
      plVar4 = *(longlong **)(lVar3 + 0x30);
    }
    *(undefined4 *)(*plVar4 + (longlong)((int)plVar4[2] * *param_2) * 4) = param_5;
  }
  return;
}



// FUNCTION 146fafbb8 FUN_146fafbb8 body=109 status=ok
// SIG undefined FUN_146fafbb8(void)

void FUN_146fafbb8(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146fb13b0(param_1,iVar1);
    }
    FUN_146fb139d((longlong)iVar1 * 8 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_146fb1436(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146fafc26 FUN_146fafc26 body=180 status=ok
// SIG undefined FUN_146fafc26(void)

void FUN_146fafc26(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) +
                    ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uVar2 << 0x13 | uVar2) +
                    (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (*plVar4 == param_3) {
          if (((plVar4 + 1 != (longlong *)0x0 && plVar4 != (longlong *)0x0) &&
              (lVar1 = plVar4[1], *(int *)(lVar1 + 8) == 4)) && (*(int *)(lVar1 + 0xc) == 1))
          goto LAB_146fafc33;
          break;
        }
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  lVar1 = 0;
LAB_146fafc33:
  *param_2 = lVar1;
  return;
}



// FUNCTION 146fafcda FUN_146fafcda body=52 status=ok
// SIG undefined FUN_146fafcda(void)

void FUN_146fafcda(longlong *param_1)

{
  FUN_146fafd0e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146fafd0e FUN_146fafd0e body=89 status=ok
// SIG undefined FUN_146fafd0e(void)

void FUN_146fafd0e(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14472eb64(param_1,0);
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



// FUNCTION 146fafd68 FUN_146fafd68 body=52 status=ok
// SIG undefined FUN_146fafd68(void)

void FUN_146fafd68(longlong *param_1)

{
  FUN_146fafd9c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146fafd9c FUN_146fafd9c body=89 status=ok
// SIG undefined FUN_146fafd9c(void)

void FUN_146fafd9c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405357e8(param_1,0);
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



// FUNCTION 146fafdf6 FUN_146fafdf6 body=52 status=ok
// SIG undefined FUN_146fafdf6(void)

void FUN_146fafdf6(longlong *param_1)

{
  FUN_146fafe2a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146fafe2a FUN_146fafe2a body=89 status=ok
// SIG undefined FUN_146fafe2a(void)

void FUN_146fafe2a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 146fafe83 FUN_146fafe83 body=19 status=ok
// SIG undefined FUN_146fafe83(void)

void FUN_146fafe83(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,CONCAT31((int3)(param_2 >> 8),0xff),(ulonglong)param_2 << 2);
    return;
  }
  return;
}



// FUNCTION 146fafe96 FUN_146fafe96 body=132 status=ok
// SIG undefined FUN_146fafe96(void)

void FUN_146fafe96(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146faff1c FUN_146faff1c body=31 status=ok
// SIG undefined FUN_146faff1c(void)

void FUN_146faff1c(longlong param_1,int param_2)

{
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    *(undefined4 *)(param_1 + 0x10) = 3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146faff3c FUN_146faff3c body=101 status=ok
// SIG undefined FUN_146faff3c(void)

int FUN_146faff3c(longlong *param_1,uint param_2,int *param_3)

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
        lVar5 = (longlong)iVar2;
        if (((*(int *)(lVar3 + lVar5 * 0x18) == *param_3) &&
            (lVar1 = lVar3 + lVar5 * 0x18, *(int *)(lVar1 + 4) == param_3[1])) &&
           (*(int *)(lVar1 + 8) == param_3[2])) {
          return iVar2;
        }
        iVar2 = *(int *)(lVar3 + 0x10 + lVar5 * 0x18);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 146faffa2 FUN_146faffa2 body=311 status=ok
// SIG undefined FUN_146faffa2(void)

undefined4 * FUN_146faffa2(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
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
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146fb00da(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(puVar1 + 1);
  *local_40 = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = *puVar2;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = FUN_1448eb174(local_40,0xc,0);
  cVar4 = FUN_146fb01c0(param_1,uVar5,local_40,&local_4c);
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
      FUN_146fb0286(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb00da FUN_146fb00da body=230 status=ok
// SIG undefined FUN_146fb00da(void)

int * FUN_146fb00da(longlong *param_1,int *param_2)

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



// FUNCTION 146fb01c0 FUN_146fb01c0 body=84 status=ok
// SIG undefined FUN_146fb01c0(void)

undefined8 FUN_146fb01c0(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar5 = FUN_146faff3c(), iVar5 != -1)) {
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar5 * 0x18);
    *puVar1 = *param_3;
    puVar1[1] = uVar2;
    puVar1[2] = uVar3;
    puVar1[3] = uVar4;
    FUN_146fb0214(param_1,*param_4);
    *param_4 = iVar5;
    return 1;
  }
  return 0;
}



// FUNCTION 146fb0214 FUN_146fb0214 body=114 status=ok
// SIG undefined FUN_146fb0214(void)

void FUN_146fb0214(longlong *param_1,int param_2)

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



// FUNCTION 146fb0286 FUN_146fb0286 body=446 status=ok
// SIG undefined FUN_146fb0286(void)

void FUN_146fb0286(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
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
  uVar4 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
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
    uVar4 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar5 = local_68._4_4_;
      local_68 = uVar4;
      do {
        lVar2 = *local_80 + (longlong)iVar5 * 0x18;
        iVar6 = FUN_1448eb174(lVar2,0xc,0);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x14) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar5 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146fb0446 FUN_146fb0446 body=285 status=ok
// SIG undefined FUN_146fb0446(void)

undefined4 * FUN_146fb0446(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
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
  FUN_146fb0564(param_1,local_48);
  puVar1 = (uint *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_40 = uVar5;
  local_40[1] = *puVar1;
  local_40[2] = 0xffffffff;
  local_4c = local_48[0];
  cVar3 = FUN_146fb064a(param_1,uVar5,local_40,&local_4c);
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
      local_40[3] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[2] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
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
      FUN_146fb073c(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb0564 FUN_146fb0564 body=229 status=ok
// SIG undefined FUN_146fb0564(void)

int * FUN_146fb0564(longlong *param_1,int *param_2)

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
      FUN_144869a3c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 146fb064a FUN_146fb064a body=127 status=ok
// SIG undefined FUN_146fb064a(void)

undefined8 FUN_146fb064a(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(int *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *puVar1 = *(undefined8 *)param_3;
          FUN_146fb06ca(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)(puVar1 + 1);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 146fb06ca FUN_146fb06ca body=114 status=ok
// SIG undefined FUN_146fb06ca(void)

void FUN_146fb06ca(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
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



// FUNCTION 146fb073c FUN_146fb073c body=422 status=ok
// SIG undefined FUN_146fb073c(void)

void FUN_146fb073c(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x10;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xc + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 8 + lVar7) =
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



// FUNCTION 146fb08e4 FUN_146fb08e4 body=132 status=ok
// SIG undefined FUN_146fb08e4(void)

void FUN_146fb08e4(longlong param_1,int param_2)

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



// FUNCTION 146fb096a FUN_146fb096a body=335 status=ok
// SIG undefined FUN_146fb096a(void)

undefined4 * FUN_146fb096a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_146fb0aba(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_146fb0ba0(param_1,uVar9,local_40,&local_4c);
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
      FUN_146fb0c92(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb0aba FUN_146fb0aba body=230 status=ok
// SIG undefined FUN_146fb0aba(void)

int * FUN_146fb0aba(longlong *param_1,int *param_2)

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



// FUNCTION 146fb0ba0 FUN_146fb0ba0 body=128 status=ok
// SIG undefined FUN_146fb0ba0(void)

undefined8 FUN_146fb0ba0(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
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
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_146fb0c20((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 146fb0c20 FUN_146fb0c20 body=114 status=ok
// SIG undefined FUN_146fb0c20(void)

void FUN_146fb0c20(longlong *param_1,int param_2)

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



// FUNCTION 146fb0c92 FUN_146fb0c92 body=473 status=ok
// SIG undefined FUN_146fb0c92(void)

void FUN_146fb0c92(longlong *param_1)

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



// FUNCTION 146fb0e6c FUN_146fb0e6c body=43 status=ok
// SIG undefined FUN_146fb0e6c(void)

void FUN_146fb0e6c(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 146fb0e98 FUN_146fb0e98 body=132 status=ok
// SIG undefined FUN_146fb0e98(void)

void FUN_146fb0e98(longlong param_1,int param_2)

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



// FUNCTION 146fb0f1e FUN_146fb0f1e body=89 status=ok
// SIG undefined FUN_146fb0f1e(void)

void FUN_146fb0f1e(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_146fb0e6c(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146fb0f78 FUN_146fb0f78 body=62 status=ok
// SIG undefined FUN_146fb0f78(void)

void FUN_146fb0f78(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146fb0fb6(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 146fb0fb6 FUN_146fb0fb6 body=93 status=ok
// SIG undefined FUN_146fb0fb6(void)

ulonglong FUN_146fb0fb6(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146fb1014 FUN_146fb1014 body=95 status=ok
// SIG undefined FUN_146fb1014(void)

void FUN_146fb1014(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 2)) {
      uVar2 = uVar1 >> 2 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,4,4);
  }
  return;
}



// FUNCTION 146fb1073 FUN_146fb1073 body=19 status=ok
// SIG undefined FUN_146fb1073(void)

void FUN_146fb1073(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,CONCAT31((int3)(param_2 >> 8),0xff),(ulonglong)param_2 << 2);
    return;
  }
  return;
}



// FUNCTION 146fb1086 FUN_146fb1086 body=62 status=ok
// SIG undefined FUN_146fb1086(void)

void FUN_146fb1086(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146fb10c4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,4);
  }
  return;
}



// FUNCTION 146fb10c4 FUN_146fb10c4 body=93 status=ok
// SIG undefined FUN_146fb10c4(void)

ulonglong FUN_146fb10c4(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff000U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 2,4);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 146fb1122 FUN_146fb1122 body=14 status=ok
// SIG undefined FUN_146fb1122(void)

void FUN_146fb1122(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000146fb112d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)(*param_2,*param_3,param_3,(code *)*param_1);
  return;
}



// FUNCTION 146fb115a FUN_146fb115a body=29 status=ok
// SIG undefined FUN_146fb115a(void)

undefined8 FUN_146fb115a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fb1177 FUN_146fb1177 body=19 status=ok
// SIG undefined FUN_146fb1177(void)

void FUN_146fb1177(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,CONCAT31((int3)(param_2 >> 8),0xff),(ulonglong)param_2 << 2);
    return;
  }
  return;
}



// FUNCTION 146fb118a FUN_146fb118a body=62 status=ok
// SIG undefined FUN_146fb118a(void)

void FUN_146fb118a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146fb11c8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,4);
  }
  return;
}



// FUNCTION 146fb11c8 FUN_146fb11c8 body=93 status=ok
// SIG undefined FUN_146fb11c8(void)

ulonglong FUN_146fb11c8(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff000U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 2,4);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 146fb1226 FUN_146fb1226 body=34 status=ok
// SIG undefined FUN_146fb1226(void)

void FUN_146fb1226(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_149fab020;
  return;
}



// FUNCTION 146fb1248 FUN_146fb1248 body=31 status=ok
// SIG undefined FUN_146fb1248(void)

undefined8 FUN_146fb1248(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fb1284 FUN_146fb1284 body=93 status=ok
// SIG undefined FUN_146fb1284(void)

void FUN_146fb1284(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149faafb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146fb12e2 FUN_146fb12e2 body=123 status=ok
// SIG undefined FUN_146fb12e2(void)

void FUN_146fb12e2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149faafb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146fb136a FUN_146fb136a body=21 status=ok
// SIG undefined FUN_146fb136a(void)

undefined8 FUN_146fb136a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146fb1380 FUN_146fb1380 body=29 status=ok
// SIG undefined FUN_146fb1380(void)

undefined8 FUN_146fb1380(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fb139d FUN_146fb139d body=19 status=ok
// SIG undefined FUN_146fb139d(void)

void FUN_146fb139d(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 3);
    return;
  }
  return;
}



// FUNCTION 146fb13b0 FUN_146fb13b0 body=132 status=ok
// SIG undefined FUN_146fb13b0(void)

void FUN_146fb13b0(longlong param_1,int param_2)

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



// FUNCTION 146fb1436 FUN_146fb1436 body=62 status=ok
// SIG undefined FUN_146fb1436(void)

void FUN_146fb1436(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146fb1474(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146fb1474 FUN_146fb1474 body=93 status=ok
// SIG undefined FUN_146fb1474(void)

ulonglong FUN_146fb1474(uint param_1,uint param_2)

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



// FUNCTION 146fb14d2 FUN_146fb14d2 body=132 status=ok
// SIG undefined FUN_146fb14d2(void)

void FUN_146fb14d2(longlong param_1,int param_2)

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



// FUNCTION 146fb1558 FUN_146fb1558 body=169 status=ok
// SIG undefined FUN_146fb1558(void)

undefined8 FUN_146fb1558(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_2 >> 0x20) +
                    ((int)param_2 << 0x10 | (uint)(ushort)param_2) + (uVar2 << 0x13 | uVar2) +
                    (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (*plVar4 == param_2) {
          if (plVar4 + 1 == (longlong *)0x0 || plVar4 == (longlong *)0x0) {
            return 0;
          }
          lVar1 = plVar4[1];
          if (*(int *)(lVar1 + 8) != 4) {
            return 0;
          }
          return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(int *)(lVar1 + 0xc) == 1);
        }
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 146fb1602 FUN_146fb1602 body=180 status=ok
// SIG undefined FUN_146fb1602(void)

void FUN_146fb1602(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) +
                    ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uVar2 << 0x13 | uVar2) +
                    (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (*plVar4 == param_3) {
          if (((plVar4 + 1 != (longlong *)0x0 && plVar4 != (longlong *)0x0) &&
              (lVar1 = plVar4[1], *(int *)(lVar1 + 8) == 4)) && (*(int *)(lVar1 + 0xc) == 1))
          goto LAB_146fb160f;
          break;
        }
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  lVar1 = 0;
LAB_146fb160f:
  *param_2 = lVar1;
  return;
}



// FUNCTION 146fb16b6 FUN_146fb16b6 body=132 status=ok
// SIG undefined FUN_146fb16b6(void)

void FUN_146fb16b6(longlong param_1,int param_2)

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



// FUNCTION 146fb173c FUN_146fb173c body=169 status=ok
// SIG undefined FUN_146fb173c(void)

undefined8 FUN_146fb173c(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_2 >> 0x20) +
                    ((int)param_2 << 0x10 | (uint)(ushort)param_2) + (uVar2 << 0x13 | uVar2) +
                    (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (*plVar4 == param_2) {
          if (plVar4 + 1 == (longlong *)0x0 || plVar4 == (longlong *)0x0) {
            return 0;
          }
          lVar1 = plVar4[1];
          if (*(int *)(lVar1 + 8) != 3) {
            return 0;
          }
          return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(int *)(lVar1 + 0xc) == 1);
        }
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 146fb17e6 FUN_146fb17e6 body=180 status=ok
// SIG undefined FUN_146fb17e6(void)

void FUN_146fb17e6(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) +
                    ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uVar2 << 0x13 | uVar2) +
                    (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (*plVar4 == param_3) {
          if (((plVar4 + 1 != (longlong *)0x0 && plVar4 != (longlong *)0x0) &&
              (lVar1 = plVar4[1], *(int *)(lVar1 + 8) == 3)) && (*(int *)(lVar1 + 0xc) == 1))
          goto LAB_146fb17f3;
          break;
        }
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  lVar1 = 0;
LAB_146fb17f3:
  *param_2 = lVar1;
  return;
}



// FUNCTION 146fb189a FUN_146fb189a body=132 status=ok
// SIG undefined FUN_146fb189a(void)

void FUN_146fb189a(longlong param_1,int param_2)

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



// FUNCTION 146fb1920 FUN_146fb1920 body=218 status=ok
// SIG undefined FUN_146fb1920(void)

undefined4 FUN_146fb1920(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 *local_40;
  undefined4 *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *(undefined4 *)param_2;
  local_44 = *(undefined4 *)((longlong)param_2 + 4);
  local_4c = param_3;
  uVar1 = (*(code *)PTR_FUN_14c75b148)(&local_4c,0xc,0);
  iVar2 = FUN_146fb19fc(param_1,uVar1,&local_4c);
  if (iVar2 != -1) {
    if ((*param_1 + (longlong)iVar2 * 0x18 != 0) &&
       (puVar3 = (undefined4 *)(*param_1 + (longlong)iVar2 * 0x18 + 0xc),
       puVar3 != (undefined4 *)0x0)) {
      uVar1 = *puVar3;
      goto LAB_146fb199d;
    }
  }
  local_40 = (undefined4 *)*param_2;
  local_50 = FUN_146c2d0a4(param_1[10],&local_40);
  local_38 = &local_50;
  local_40 = &local_4c;
  FUN_146fb1a74(param_1,local_2c,&local_40);
  uVar1 = local_50;
LAB_146fb199d:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb19fc FUN_146fb19fc body=119 status=ok
// SIG undefined FUN_146fb19fc(void)

int FUN_146fb19fc(longlong *param_1,uint param_2,int *param_3)

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
        if (*(int *)(lVar4 + lVar6 * 0x18) == *param_3) {
          lVar1 = lVar4 + lVar6 * 0x18;
          fVar2 = *(float *)(lVar1 + 4);
          if ((fVar2 == (float)param_3[1]) && (!NAN(fVar2) && !NAN((float)param_3[1]))) {
            fVar2 = *(float *)(lVar1 + 8);
            if ((fVar2 == (float)param_3[2]) && (!NAN(fVar2) && !NAN((float)param_3[2]))) {
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



// FUNCTION 146fb1a74 FUN_146fb1a74 body=312 status=ok
// SIG undefined FUN_146fb1a74(void)

undefined4 * FUN_146fb1a74(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
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
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146fb1bae(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(puVar1 + 1);
  *local_40 = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = *puVar2;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = (*(code *)PTR_FUN_14c75b148)(local_40,0xc,0);
  cVar4 = FUN_146fb1c94(param_1,uVar5,local_40,&local_4c);
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
      FUN_146fb1d5a(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb1bae FUN_146fb1bae body=230 status=ok
// SIG undefined FUN_146fb1bae(void)

int * FUN_146fb1bae(longlong *param_1,int *param_2)

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



// FUNCTION 146fb1c94 FUN_146fb1c94 body=84 status=ok
// SIG undefined FUN_146fb1c94(void)

undefined8 FUN_146fb1c94(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar5 = FUN_146fb19fc(), iVar5 != -1)) {
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar5 * 0x18);
    *puVar1 = *param_3;
    puVar1[1] = uVar2;
    puVar1[2] = uVar3;
    puVar1[3] = uVar4;
    FUN_146fb1ce8(param_1,*param_4);
    *param_4 = iVar5;
    return 1;
  }
  return 0;
}



// FUNCTION 146fb1ce8 FUN_146fb1ce8 body=114 status=ok
// SIG undefined FUN_146fb1ce8(void)

void FUN_146fb1ce8(longlong *param_1,int param_2)

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



// FUNCTION 146fb1d5a FUN_146fb1d5a body=447 status=ok
// SIG undefined FUN_146fb1d5a(void)

void FUN_146fb1d5a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
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
  uVar4 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
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
    uVar4 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar5 = local_68._4_4_;
      local_68 = uVar4;
      do {
        lVar2 = *local_80 + (longlong)iVar5 * 0x18;
        iVar6 = (*(code *)PTR_FUN_14c75b148)(lVar2,0xc,0);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x14) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar5 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


