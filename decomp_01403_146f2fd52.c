// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146f2fd52 FUN_146f2fd52 body=36 status=ok
// SIG undefined FUN_146f2fd52(void)

void FUN_146f2fd52(int param_1)

{
  if (param_1 <= DAT_14c9997a8) {
    DAT_14c9997ac = 8;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f2fd78 FUN_146f2fd78 body=79 status=ok
// SIG undefined FUN_146f2fd78(void)

longlong * FUN_146f2fd78(longlong *param_1,longlong *param_2)

{
  if (param_2 != param_1) {
    FUN_146f2b298(param_1,0);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 146f2fdc8 FUN_146f2fdc8 body=79 status=ok
// SIG undefined FUN_146f2fdc8(void)

longlong * FUN_146f2fdc8(longlong *param_1,longlong *param_2)

{
  if (param_2 != param_1) {
    FUN_146f2b374(param_1,0);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 146f2fe18 FUN_146f2fe18 body=79 status=ok
// SIG undefined FUN_146f2fe18(void)

longlong * FUN_146f2fe18(longlong *param_1,longlong *param_2)

{
  if (param_2 != param_1) {
    FUN_146f2b306(param_1,0);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 146f2fe68 FUN_146f2fe68 body=79 status=ok
// SIG undefined FUN_146f2fe68(void)

longlong * FUN_146f2fe68(longlong *param_1,longlong *param_2)

{
  if (param_2 != param_1) {
    FUN_146f2b3e2(param_1,0);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 146f2feb8 FUN_146f2feb8 body=48 status=ok
// SIG undefined FUN_146f2feb8(void)

void FUN_146f2feb8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 146f2fee8 FUN_146f2fee8 body=132 status=ok
// SIG undefined FUN_146f2fee8(void)

void FUN_146f2fee8(longlong param_1,int param_2)

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



// FUNCTION 146f2ff6e FUN_146f2ff6e body=125 status=ok
// SIG undefined FUN_146f2ff6e(void)

void FUN_146f2ff6e(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar1 = ((int)param_1[2] + param_2 + 99) / 100;
  *(int *)(param_1 + 2) = (int)param_1[2] + param_2;
  iVar3 = iVar1 - (int)param_1[1];
  if (iVar3 != 0 && (int)param_1[1] <= iVar1) {
    do {
      uVar2 = FUN_14001cc68(200,0x10);
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1456bd870(param_1,iVar1);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}



// FUNCTION 146f2ffec FUN_146f2ffec body=125 status=ok
// SIG undefined FUN_146f2ffec(void)

void FUN_146f2ffec(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar1 = ((int)param_1[2] + param_2 + 99) / 100;
  *(int *)(param_1 + 2) = (int)param_1[2] + param_2;
  iVar3 = iVar1 - (int)param_1[1];
  if (iVar3 != 0 && (int)param_1[1] <= iVar1) {
    do {
      uVar2 = FUN_14001cc68(800,0x10);
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1456bd870(param_1,iVar1);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}



// FUNCTION 146f3006a FUN_146f3006a body=141 status=ok
// SIG undefined FUN_146f3006a(void)

void FUN_146f3006a(longlong *param_1,int param_2)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  
  iVar1 = ((int)param_1[2] + param_2 + 99) / 100;
  *(int *)(param_1 + 2) = (int)param_1[2] + param_2;
  iVar2 = iVar1 - (int)param_1[1];
  if (iVar2 != 0 && (int)param_1[1] <= iVar1) {
    do {
      _Dst = (void *)FUN_14001cc68(800);
      memset(_Dst,0,800);
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1456bd870(param_1,iVar1);
      }
      *(void **)(*param_1 + (longlong)iVar1 * 8) = _Dst;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}



// FUNCTION 146f300f8 FUN_146f300f8 body=182 status=ok
// SIG undefined FUN_146f300f8(void)

void FUN_146f300f8(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  iVar6 = (int)param_1[1];
  iVar3 = ((int)param_1[2] + param_2 + 99) / 100;
  *(int *)(param_1 + 2) = (int)param_1[2] + param_2;
  if (iVar6 < iVar3) {
    do {
      lVar4 = FUN_14001cc68(0x15e0,0x10);
      lVar5 = 0x32;
      do {
        puVar1 = (undefined8 *)(lVar4 + -0x12 + lVar5);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(lVar4 + -0x22 + lVar5);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(lVar4 + -0x32 + lVar5);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined1 *)(lVar4 + -2 + lVar5) = 0xff;
        *(undefined2 *)(lVar4 + lVar5) = 0;
        lVar5 = lVar5 + 0x38;
      } while (lVar5 != 0x1612);
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_1456bd870(param_1,iVar2);
      }
      *(longlong *)(*param_1 + (longlong)iVar2 * 8) = lVar4;
      iVar6 = iVar6 + 1;
    } while (iVar6 != iVar3);
  }
  return;
}



// FUNCTION 146f301ae FUN_146f301ae body=330 status=ok
// SIG undefined FUN_146f301ae(void)

undefined4 *
FUN_146f301ae(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_146f302fa(param_1,local_50);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_48 = uVar2;
  *(undefined4 *)(local_48 + 1) = *puVar1;
  *(undefined4 *)(local_48 + 2) = 0xffffffff;
  local_54 = local_50[0];
  uVar6 = ((uint)((ulonglong)uVar2 >> 0x20) & 0xfffffff) * 0x17 + (int)uVar2;
  local_68 = param_4;
  cVar3 = FUN_146f303e0(param_1,uVar6,local_48);
  if (cVar3 == '\0') {
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
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_48 + 0x14) = uVar6;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_146f30502(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f302fa FUN_146f302fa body=230 status=ok
// SIG undefined FUN_146f302fa(void)

int * FUN_146f302fa(longlong *param_1,int *param_2)

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



// FUNCTION 146f303e0 FUN_146f303e0 body=152 status=ok
// SIG undefined FUN_146f303e0(void)

void FUN_146f303e0(longlong *param_1,uint param_2,ulonglong *param_3,int *param_4,
                  undefined1 *param_5)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        puVar1 = (ulonglong *)(*param_1 + (longlong)iVar8 * 0x18);
        if (((*puVar1 ^ *param_3) & 0xfffffffffffffff) == 0) {
          uVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          uVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)puVar1 = (int)uVar4;
          *(undefined4 *)((longlong)puVar1 + 4) = uVar2;
          *(int *)(puVar1 + 1) = (int)uVar5;
          *(undefined4 *)((longlong)puVar1 + 0xc) = uVar3;
          FUN_146f30478((int)uVar4,*param_4,1);
          *param_4 = iVar8;
          uVar6 = 1;
          goto LAB_146f3044e;
        }
        iVar8 = (int)puVar1[2];
      } while (iVar8 != -1);
    }
  }
  uVar6 = 0;
LAB_146f3044e:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 146f30478 FUN_146f30478 body=138 status=ok
// SIG undefined FUN_146f30478(void)

void FUN_146f30478(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 146f30502 FUN_146f30502 body=454 status=ok
// SIG undefined FUN_146f30502(void)

void FUN_146f30502(longlong *param_1)

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
        uVar10 = (longlong)(int)(((uint)((ulonglong)uVar4 >> 0x20) & 0xfffffff) * 0x17 + (int)uVar4)
                 & (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 146f306ca FUN_146f306ca body=301 status=ok
// SIG undefined FUN_146f306ca(void)

undefined4 * FUN_146f306ca(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
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
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146f307f8(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = FUN_144a78877(uVar6,uVar6 >> 0x20);
  cVar3 = FUN_146f308de(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
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
      *(uint *)(local_40 + 2) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_146f309d4(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f307f8 FUN_146f307f8 body=230 status=ok
// SIG undefined FUN_146f307f8(void)

int * FUN_146f307f8(longlong *param_1,int *param_2)

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



// FUNCTION 146f308de FUN_146f308de body=131 status=ok
// SIG undefined FUN_146f308de(void)

undefined8 FUN_146f308de(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  undefined8 uVar2;
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
        piVar1 = (int *)(*param_1 + (longlong)iVar4 * 0x14);
        if (*piVar1 == *param_3) {
          uVar2 = *(undefined8 *)param_3;
          piVar1[2] = param_3[2];
          *(undefined8 *)piVar1 = uVar2;
          FUN_146f30962(param_1,*param_4);
          *param_4 = iVar4;
          return 1;
        }
        iVar4 = piVar1[3];
      } while (iVar4 != -1);
    }
  }
  return 0;
}



// FUNCTION 146f30962 FUN_146f30962 body=114 status=ok
// SIG undefined FUN_146f30962(void)

void FUN_146f30962(longlong *param_1,int param_2)

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



// FUNCTION 146f309d4 FUN_146f309d4 body=448 status=ok
// SIG undefined FUN_146f309d4(void)

void FUN_146f309d4(longlong *param_1)

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
        lVar10 = (longlong)iVar5;
        uVar7 = *(ulonglong *)(lVar3 + lVar10 * 0x14);
        iVar6 = FUN_144a78877(uVar7,uVar7 >> 0x20);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x10 + lVar10 * 0x14) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xc + lVar10 * 0x14) =
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



// FUNCTION 146f30b96 FUN_146f30b96 body=188 status=ok
// SIG undefined FUN_146f30b96(void)

longlong FUN_146f30b96(longlong *param_1,uint param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  int *local_30;
  undefined8 local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x10;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x10) == *param_3) {
          if (lVar3 != 0) goto LAB_146f30c35;
          break;
        }
        iVar1 = *(int *)(lVar3 + 8);
      } while (iVar1 != -1);
    }
  }
  local_30 = param_3;
  local_28 = param_4;
  FUN_146f30c54(param_1,&local_1c,param_2,&local_30);
  lVar3 = (longlong)local_1c * 0x10 + *param_1;
LAB_146f30c35:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 4;
}



// FUNCTION 146f30c54 FUN_146f30c54 body=279 status=ok
// SIG undefined FUN_146f30c54(void)

undefined4 * FUN_146f30c54(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_144a49c02(param_1,local_48);
  puVar1 = (undefined4 *)param_4[1];
  *local_40 = *(undefined4 *)*param_4;
  local_40[1] = *puVar1;
  local_40[2] = 0xffffffff;
  local_58 = 0;
  cVar2 = FUN_144b079a6(param_1,param_3,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      local_40[3] = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      local_40[2] = *(undefined4 *)
                     (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4
                     );
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_14499e768(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f30d6c FUN_146f30d6c body=127 status=ok
// SIG undefined FUN_146f30d6c(void)

void FUN_146f30d6c(longlong *param_1,int *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = *param_3;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)param_1[9] - 1U & (int)uVar1 + ((uint)(uVar1 >> 0x20) & 0xfffffff) * 0x17)
                    * 4);
    if (iVar2 != -1) {
      do {
        if (((*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x18) ^ uVar1) & 0xfffffffffffffff) == 0)
        goto LAB_146f30d7d;
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_146f30d7d:
  *param_2 = iVar2;
  return;
}



// FUNCTION 146f30dec FUN_146f30dec body=93 status=ok
// SIG undefined FUN_146f30dec(void)

void FUN_146f30dec(longlong *param_1,int param_2)

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
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_146f30478(param_1,param_2,1);
  return;
}



// FUNCTION 146f30e4a FUN_146f30e4a body=128 status=ok
// SIG undefined FUN_146f30e4a(void)

undefined8 FUN_146f30e4a(longlong *param_1,ulonglong *param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar1 = FUN_144a78877(*param_2,*param_2 >> 0x20);
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)iVar1 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x14) == (int)*param_2) {
          FUN_146f30eca(param_1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x14 + 0xc);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 146f30eca FUN_146f30eca body=87 status=ok
// SIG undefined FUN_146f30eca(void)

void FUN_146f30eca(longlong *param_1,int param_2)

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
  FUN_146f30962();
  return;
}



// FUNCTION 146f30f22 FUN_146f30f22 body=208 status=ok
// SIG undefined FUN_146f30f22(void)

void FUN_146f30f22(int *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  bool bVar10;
  
  iVar1 = param_1[10];
  lVar3 = (longlong)iVar1;
  if (lVar3 != 0) {
    piVar9 = *(int **)(param_1 + 8);
    if (*(int **)(param_1 + 8) == (int *)0x0) {
      piVar9 = param_1;
    }
    iVar4 = 0;
    bVar10 = *piVar9 == *(int *)*param_2;
    iVar6 = 0;
    do {
      iVar2 = iVar6 + 1;
      if (iVar6 + 1 < iVar1) {
        iVar2 = iVar1;
      }
      iVar7 = iVar6;
      lVar5 = (longlong)iVar6;
      do {
        lVar5 = lVar5 + 1;
        iVar8 = iVar2;
        if (lVar3 <= lVar5) break;
        iVar7 = iVar7 + 1;
        iVar8 = iVar7;
      } while (bVar10 == (piVar9[lVar5] == *(int *)*param_2));
      if (bVar10 == false) {
        if (iVar4 != iVar6) {
          memmove(piVar9 + iVar4,piVar9 + iVar6,(longlong)(iVar8 - iVar6) << 2);
        }
        iVar4 = iVar4 + (iVar8 - iVar6);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      iVar6 = iVar8;
    } while (lVar5 < lVar3);
    param_1[10] = iVar4;
  }
  return;
}



// FUNCTION 146f30ff2 FUN_146f30ff2 body=59 status=ok
// SIG undefined FUN_146f30ff2(void)

void FUN_146f30ff2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f3102e(param_1,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
  if (iVar1 == *(int *)(param_1 + 0x2c)) {
    return;
  }
  *(int *)(param_1 + 0x2c) = iVar1;
  FUN_140694960(param_1,*(undefined4 *)(param_1 + 0x28),iVar1,4);
  return;
}



// FUNCTION 146f3102e FUN_146f3102e body=105 status=ok
// SIG undefined FUN_146f3102e(void)

ulonglong FUN_146f3102e(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 8;
  if (8 < param_2) {
    iVar2 = param_3 - param_2;
    if (((longlong)iVar2 & 0x3ffffffffffff000U) == 0) {
      if (iVar2 < 0x41 || (int)(param_3 * 2) <= (int)(param_2 * 3)) {
        return (ulonglong)param_3;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_3;
    }
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,0);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 146f31098 FUN_146f31098 body=110 status=ok
// SIG undefined FUN_146f31098(void)

void FUN_146f31098(longlong param_1,int param_2)

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
    FUN_146f31108(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146f31108 FUN_146f31108 body=132 status=ok
// SIG undefined FUN_146f31108(void)

void FUN_146f31108(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 146f3118c FUN_146f3118c body=52 status=ok
// SIG undefined FUN_146f3118c(void)

void FUN_146f3118c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f311c0(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
  if (iVar1 == *(int *)(param_1 + 0x4c)) {
    return;
  }
  *(int *)(param_1 + 0x4c) = iVar1;
  FUN_146f31108(param_1,*(undefined4 *)(param_1 + 0x48),iVar1);
  return;
}



// FUNCTION 146f311c0 FUN_146f311c0 body=108 status=ok
// SIG undefined FUN_146f311c0(void)

ulonglong FUN_146f311c0(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 8;
  if (8 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0x1ffffffffffff800U) == 0) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,0);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146f3122c FUN_146f3122c body=75 status=ok
// SIG undefined FUN_146f3122c(void)

void FUN_146f3122c(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x4c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
    if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x40),
              (longlong)*(int *)((longlong)param_1 + 0x48) << 3);
      FUN_1446efa72((longlong)param_1 + 0x40,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 146f31278 FUN_146f31278 body=331 status=ok
// SIG undefined FUN_146f31278(void)

void FUN_146f31278(longlong *param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar3 = (int)param_1[2] - *(int *)((longlong)param_1 + 0xc);
  if (iVar3 == 0 || param_2 == 0) {
    local_58 = 4;
    FUN_1446f8d3c(param_1,0,param_2,4);
  }
  else {
    lVar1 = *param_1;
    lVar5 = param_1[1];
    local_48 = 0;
    local_58 = 4;
    FUN_1446f8d3c(&local_48,0,param_2,4);
    uVar4 = *(uint *)((longlong)param_1 + 0xc) & *(uint *)(param_1 + 1);
    uVar2 = *(uint *)(param_1 + 1) & *(uint *)(param_1 + 2);
    if (uVar2 < uVar4 || uVar2 - uVar4 == 0) {
      uVar8 = (int)lVar5 + 1;
      iVar9 = uVar8 - uVar4;
      iVar7 = 0;
      if (uVar4 <= uVar8 && iVar9 != 0) {
        lVar5 = 0;
        do {
          *(undefined4 *)(local_48 + lVar5 * 4) =
               *(undefined4 *)(lVar1 + (ulonglong)uVar4 * 4 + lVar5 * 4);
          lVar5 = lVar5 + 1;
          iVar7 = iVar9;
        } while (iVar9 != (int)lVar5);
      }
      if (uVar2 != 0) {
        uVar6 = 0;
        do {
          *(undefined4 *)(local_48 + (ulonglong)(uint)(iVar7 + (int)uVar6) * 4) =
               *(undefined4 *)(lVar1 + uVar6 * 4);
          uVar6 = uVar6 + 1;
        } while (uVar2 != uVar6);
      }
    }
    else {
      uVar6 = 0;
      do {
        *(undefined4 *)(local_48 + uVar6 * 4) =
             *(undefined4 *)(lVar1 + (ulonglong)uVar4 * 4 + uVar6 * 4);
        uVar6 = uVar6 + 1;
      } while (uVar2 - uVar4 != uVar6);
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_48;
  }
  *(int *)(param_1 + 1) = param_2 + -1;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(int *)(param_1 + 2) = iVar3;
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f313c4 FUN_146f313c4 body=69 status=ok
// SIG undefined FUN_146f313c4(void)

void FUN_146f313c4(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc);
  uVar1 = (ulonglong)(iVar4 + (uint)(iVar4 == -1)) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar3 = 0;
  if (iVar4 != -1) {
    uVar3 = 1 << ((byte)lVar2 & 0x1f);
  }
  if (uVar3 <= *(int *)(param_1 + 8) + 1U) {
    return;
  }
  FUN_146f31278(param_1);
  return;
}



// FUNCTION 146f3140a FUN_146f3140a body=62 status=ok
// SIG undefined FUN_146f3140a(void)

void FUN_146f3140a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f31448(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146f31448 FUN_146f31448 body=93 status=ok
// SIG undefined FUN_146f31448(void)

ulonglong FUN_146f31448(uint param_1,uint param_2)

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



// FUNCTION 146f314a6 FUN_146f314a6 body=116 status=ok
// SIG undefined FUN_146f314a6(void)

void FUN_146f314a6(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    uVar4 = 4;
    if (4 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x2c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x2c) = (int)uVar4;
    FUN_146f3151c(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146f3151c FUN_146f3151c body=133 status=ok
// SIG undefined FUN_146f3151c(void)

void FUN_146f3151c(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,param_4);
  return;
}



// FUNCTION 146f315a2 FUN_146f315a2 body=133 status=ok
// SIG undefined FUN_146f315a2(void)

void FUN_146f315a2(longlong param_1,ulonglong *param_2)

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
      if (((*(ulonglong *)(lVar3 + uVar4) ^ *param_2) & 0xfffffffffffffff) == 0) {
        if ((int)(~uVar4 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar4 = uVar4 + 8;
    } while (lVar5 * 8 - uVar4 != 0);
  }
  *(uint *)(param_1 + 0x28) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar1 + 1U) {
    FUN_146f314a6(param_1,iVar1);
    lVar2 = *(longlong *)(param_1 + 0x20);
  }
  if (lVar2 != 0) {
    param_1 = lVar2;
  }
  *(ulonglong *)(param_1 + lVar5 * 8) = *param_2;
  return;
}



// FUNCTION 146f31628 FUN_146f31628 body=132 status=ok
// SIG undefined FUN_146f31628(void)

void FUN_146f31628(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x18) == param_2) {
          FUN_146f316ac(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 146f316ac FUN_146f316ac body=87 status=ok
// SIG undefined FUN_146f316ac(void)

void FUN_146f316ac(longlong *param_1,int param_2)

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
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_146f31704();
  return;
}



// FUNCTION 146f31704 FUN_146f31704 body=114 status=ok
// SIG undefined FUN_146f31704(void)

void FUN_146f31704(longlong *param_1,int param_2)

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



// FUNCTION 146f31776 FUN_146f31776 body=116 status=ok
// SIG undefined FUN_146f31776(void)

void FUN_146f31776(longlong *param_1,ulonglong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = *param_2;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(((uint)(uVar2 >> 0x20) & 0xfffffff) * 0x17 + (int)uVar2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (((*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x40) ^ uVar2) & 0xfffffffffffffff) == 0)
        {
          FUN_146f317ea();
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x40 + *param_1 + 0x38);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 146f317ea FUN_146f317ea body=90 status=ok
// SIG undefined FUN_146f317ea(void)

void FUN_146f317ea(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x3c + (longlong)param_2 * 0x40);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x38 + lVar5 * 0x40);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x40 + 0x38);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x40 + 0x38);
  FUN_146f31844();
  return;
}



// FUNCTION 146f31844 FUN_146f31844 body=114 status=ok
// SIG undefined FUN_146f31844(void)

void FUN_146f31844(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40 + 4) = uVar4;
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



// FUNCTION 146f318b6 FUN_146f318b6 body=328 status=ok
// SIG undefined FUN_146f318b6(void)

undefined4 * FUN_146f318b6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
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
  char cVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146f31a00(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  uVar6 = puVar1[4];
  uVar7 = puVar1[5];
  uVar8 = puVar1[6];
  uVar9 = puVar1[7];
  uVar10 = puVar1[8];
  uVar11 = puVar1[9];
  uVar12 = puVar1[10];
  uVar13 = puVar1[0xb];
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = uVar3;
  *(undefined4 *)(local_40 + 2) = uVar4;
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar5;
  *(undefined4 *)(local_40 + 3) = uVar6;
  *(undefined4 *)((longlong)local_40 + 0x1c) = uVar7;
  *(undefined4 *)(local_40 + 4) = uVar8;
  *(undefined4 *)((longlong)local_40 + 0x24) = uVar9;
  *(undefined4 *)(local_40 + 5) = uVar10;
  *(undefined4 *)((longlong)local_40 + 0x2c) = uVar11;
  *(undefined4 *)(local_40 + 6) = uVar12;
  *(undefined4 *)((longlong)local_40 + 0x34) = uVar13;
  *(undefined4 *)(local_40 + 7) = 0xffffffff;
  local_4c = local_48[0];
  uVar19 = ((uint)((ulonglong)uVar2 >> 0x20) & 0xfffffff) * 0x17 + (int)uVar2;
  cVar14 = FUN_146f31ae6(param_1,uVar19,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar14 == '\0') {
    uVar15 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar17 = 1;
    if (3 < uVar15) {
      uVar16 = (ulonglong)(uVar15 & 0xfffffffe) + 0xf;
      lVar18 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      iVar17 = 1 << ((byte)lVar18 & 0x1f);
    }
    if (((int)uVar15 < 1) || (iVar17 <= *(int *)(param_1 + 0x48))) {
      uVar19 = *(int *)(param_1 + 0x48) - 1U & uVar19;
      *(uint *)((longlong)local_40 + 0x3c) = uVar19;
      lVar18 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar18 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 7) =
           *(undefined4 *)
            (lVar18 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar19) * 4);
      lVar18 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar18 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar18 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar19) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar17;
      FUN_146f31b88(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f31a00 FUN_146f31a00 body=229 status=ok
// SIG undefined FUN_146f31a00(void)

int * FUN_146f31a00(longlong *param_1,int *param_2)

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
      FUN_1406cd6a8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x40);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x40) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 146f31ae6 FUN_146f31ae6 body=161 status=ok
// SIG undefined FUN_146f31ae6(void)

undefined8 FUN_146f31ae6(longlong *param_1,uint param_2,ulonglong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  int iVar15;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar15 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar15 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar15 * 0x40);
        if (((*(ulonglong *)(*param_1 + (longlong)iVar15 * 0x40) ^ *param_3) & 0xfffffffffffffff) ==
            0) {
          uVar8 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          uVar9 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          uVar10 = param_3[2];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
          uVar11 = param_3[3];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
          uVar12 = param_3[4];
          uVar6 = *(undefined4 *)((longlong)param_3 + 0x24);
          uVar13 = param_3[5];
          uVar7 = *(undefined4 *)((longlong)param_3 + 0x2c);
          *(ulonglong *)(puVar1 + 0xc) = param_3[6];
          puVar1[8] = (int)uVar12;
          puVar1[9] = uVar6;
          puVar1[10] = (int)uVar13;
          puVar1[0xb] = uVar7;
          puVar1[4] = (int)uVar10;
          puVar1[5] = uVar4;
          puVar1[6] = (int)uVar11;
          puVar1[7] = uVar5;
          *puVar1 = (int)uVar8;
          puVar1[1] = uVar2;
          puVar1[2] = (int)uVar9;
          puVar1[3] = uVar3;
          FUN_146f31844((int)uVar8,*param_4);
          *param_4 = iVar15;
          return 1;
        }
        iVar15 = puVar1[0xe];
      } while (iVar15 != -1);
    }
  }
  return 0;
}



// FUNCTION 146f31b88 FUN_146f31b88 body=457 status=ok
// SIG undefined FUN_146f31b88(void)

void FUN_146f31b88(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x40;
        uVar10 = (longlong)
                 (int)(((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) & 0xfffffff) *
                       0x17 + (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x3c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x38 + lVar7) =
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



// FUNCTION 146f31d52 FUN_146f31d52 body=326 status=ok
// SIG undefined FUN_146f31d52(void)

undefined4 * FUN_146f31d52(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
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
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146f31e9a(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_146f31f80(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
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
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_146f32000(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f31e9a FUN_146f31e9a body=230 status=ok
// SIG undefined FUN_146f31e9a(void)

int * FUN_146f31e9a(longlong *param_1,int *param_2)

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



// FUNCTION 146f31f80 FUN_146f31f80 body=128 status=ok
// SIG undefined FUN_146f31f80(void)

undefined8 FUN_146f31f80(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_146f31704((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 146f32000 FUN_146f32000 body=474 status=ok
// SIG undefined FUN_146f32000(void)

void FUN_146f32000(longlong *param_1)

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



// FUNCTION 146f321dc FUN_146f321dc body=416 status=ok
// SIG undefined FUN_146f321dc(void)

undefined4 * FUN_146f321dc(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146f3237e(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  local_40[5] = 0;
  lVar8 = puVar1[4];
  if (lVar8 == 0) {
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    uVar4 = puVar1[3];
    local_40[3] = puVar1[2];
    local_40[4] = uVar4;
    local_40[1] = uVar2;
    local_40[2] = uVar3;
    lVar8 = puVar1[4];
  }
  local_40[5] = lVar8;
  puVar1[4] = 0;
  *(undefined4 *)(local_40 + 6) = *(undefined4 *)(puVar1 + 5);
  *(undefined4 *)((longlong)local_40 + 0x34) = *(undefined4 *)((longlong)puVar1 + 0x2c);
  puVar1[5] = 0x400000000;
  local_40[7] = puVar1[6];
  *(undefined4 *)(local_40 + 8) = 0xffffffff;
  local_4c = local_48[0];
  uVar2 = *local_40;
  uVar11 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar7 = (uint)uVar2 & 0xffff;
  uVar11 = ((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar7 >> 4);
  cVar6 = FUN_146f32464(param_1,uVar11,local_40,&local_4c);
  uVar5 = local_4c;
  if (cVar6 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar7) {
      uVar9 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar11 = *(int *)(param_1 + 0x48) - 1U & uVar11;
      *(uint *)((longlong)local_40 + 0x44) = uVar11;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 8) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_146f3258a(param_1);
    }
  }
  *param_2 = uVar5;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f3237e FUN_146f3237e body=230 status=ok
// SIG undefined FUN_146f3237e(void)

int * FUN_146f3237e(longlong *param_1,int *param_2)

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
      FUN_14021b4e8(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x48);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x48) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x48 + *param_1;
  return param_2;
}



// FUNCTION 146f32464 FUN_146f32464 body=179 status=ok
// SIG undefined FUN_146f32464(void)

undefined8 FUN_146f32464(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  int iVar17;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar16 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar16 = (longlong *)param_1[8];
    }
    iVar17 = *(int *)((longlong)plVar16 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar17 != -1) {
      do {
        plVar16 = (longlong *)(*param_1 + (longlong)iVar17 * 0x48);
        if (*plVar16 == *param_3) {
          if (plVar16[5] != 0) {
            FUN_1400020a8();
          }
          lVar9 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar10 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar11 = param_3[2];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar12 = param_3[3];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
          lVar13 = param_3[4];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x24);
          lVar14 = param_3[5];
          uVar6 = *(undefined4 *)((longlong)param_3 + 0x2c);
          uVar7 = *(undefined4 *)((longlong)param_3 + 0x34);
          lVar15 = param_3[7];
          uVar8 = *(undefined4 *)((longlong)param_3 + 0x3c);
          *(int *)(plVar16 + 6) = (int)param_3[6];
          *(undefined4 *)((longlong)plVar16 + 0x34) = uVar7;
          *(int *)(plVar16 + 7) = (int)lVar15;
          *(undefined4 *)((longlong)plVar16 + 0x3c) = uVar8;
          *(int *)(plVar16 + 4) = (int)lVar13;
          *(undefined4 *)((longlong)plVar16 + 0x24) = uVar5;
          *(int *)(plVar16 + 5) = (int)lVar14;
          *(undefined4 *)((longlong)plVar16 + 0x2c) = uVar6;
          *(int *)(plVar16 + 2) = (int)lVar11;
          *(undefined4 *)((longlong)plVar16 + 0x14) = uVar3;
          *(int *)(plVar16 + 3) = (int)lVar12;
          *(undefined4 *)((longlong)plVar16 + 0x1c) = uVar4;
          *(int *)plVar16 = (int)lVar9;
          *(undefined4 *)((longlong)plVar16 + 4) = uVar1;
          *(int *)(plVar16 + 1) = (int)lVar10;
          *(undefined4 *)((longlong)plVar16 + 0xc) = uVar2;
          FUN_146f32518(param_1,*param_4);
          *param_4 = iVar17;
          return 1;
        }
        iVar17 = (int)plVar16[8];
      } while (iVar17 != -1);
    }
  }
  return 0;
}



// FUNCTION 146f32518 FUN_146f32518 body=114 status=ok
// SIG undefined FUN_146f32518(void)

void FUN_146f32518(longlong *param_1,int param_2)

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



// FUNCTION 146f3258a FUN_146f3258a body=473 status=ok
// SIG undefined FUN_146f3258a(void)

void FUN_146f3258a(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x48);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x44 + lVar6 * 0x48) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x40 + lVar6 * 0x48) =
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



// FUNCTION 146f32764 FUN_146f32764 body=132 status=ok
// SIG undefined FUN_146f32764(void)

void FUN_146f32764(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x48) == param_2) {
          FUN_146f327e8(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x48 + 0x40);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 146f327e8 FUN_146f327e8 body=87 status=ok
// SIG undefined FUN_146f327e8(void)

void FUN_146f327e8(longlong *param_1,int param_2)

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
  lVar1 = lVar2 + (longlong)param_2 * 0x48;
  lVar6 = (longlong)*(int *)(lVar1 + 0x44);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x40 + lVar6 * 0x48);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x48 + 0x40);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x40);
  FUN_146f32840();
  return;
}



// FUNCTION 146f32840 FUN_146f32840 body=52 status=ok
// SIG undefined FUN_146f32840(void)

void FUN_146f32840(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 0x28 + (longlong)param_2 * 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_146f32518(param_1,param_2);
  return;
}



// FUNCTION 146f32874 FUN_146f32874 body=120 status=ok
// SIG undefined FUN_146f32874(void)

longlong FUN_146f32874(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_146f328ee();
  if (lVar1 == 0) {
    local_30 = param_3;
    FUN_146f32944(param_1,&local_24,param_2);
    lVar1 = (longlong)local_24 * 0x20 + *param_1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1 + 8;
}



// FUNCTION 146f328ee FUN_146f328ee body=86 status=ok
// SIG undefined FUN_146f328ee(void)

longlong FUN_146f328ee(longlong *param_1,uint param_2,ulonglong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *param_1 + (longlong)iVar2 * 0x20;
        if (((*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x20) ^ *param_3) & 0xfffffffffffffff) ==
            0) {
          return lVar1;
        }
        iVar2 = *(int *)(lVar1 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 146f32944 FUN_146f32944 body=285 status=ok
// SIG undefined FUN_146f32944(void)

undefined4 * FUN_146f32944(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_146f32a62(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  *(undefined4 *)(local_40 + 2) = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_146f32b48(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
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
      FUN_146f32c48(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f32a62 FUN_146f32a62 body=229 status=ok
// SIG undefined FUN_146f32a62(void)

int * FUN_146f32a62(longlong *param_1,int *param_2)

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



// FUNCTION 146f32b48 FUN_146f32b48 body=141 status=ok
// SIG undefined FUN_146f32b48(void)

undefined8 FUN_146f32b48(longlong *param_1,uint param_2,ulonglong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
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
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (((*(ulonglong *)(*param_1 + (longlong)iVar7 * 0x20) ^ *param_3) & 0xfffffffffffffff) ==
            0) {
          uVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          uVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(ulonglong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)uVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)uVar5;
          puVar1[3] = uVar3;
          FUN_146f32bd6((int)uVar4,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 146f32bd6 FUN_146f32bd6 body=114 status=ok
// SIG undefined FUN_146f32bd6(void)

void FUN_146f32bd6(longlong *param_1,int param_2)

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



// FUNCTION 146f32c48 FUN_146f32c48 body=457 status=ok
// SIG undefined FUN_146f32c48(void)

void FUN_146f32c48(longlong *param_1)

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
        uVar10 = (longlong)
                 (int)(((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) & 0xfffffff) *
                       0x17 + (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 146f32e12 FUN_146f32e12 body=90 status=ok
// SIG undefined FUN_146f32e12(void)

void FUN_146f32e12(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_146f32bd6();
  return;
}



// FUNCTION 146f32e6c FUN_146f32e6c body=75 status=ok
// SIG undefined FUN_146f32e6c(void)

void FUN_146f32e6c(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 0x30);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar2 + 4;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 0x20))(plVar2,1);
    }
  }
  FUN_146f23312(param_1);
  return;
}



// FUNCTION 146f32eb8 FUN_146f32eb8 body=75 status=ok
// SIG undefined FUN_146f32eb8(void)

void FUN_146f32eb8(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 0x28);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar2 + 4;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 0x20))(plVar2,1);
    }
  }
  FUN_146f23312(param_1);
  return;
}



// FUNCTION 146f32f03 FUN_146f32f03 body=73 status=ok
// SIG undefined FUN_146f32f03(void)

void FUN_146f32f03(longlong *param_1,longlong param_2)

{
  (**(code **)(*param_1 + 0x1f0))(param_1,param_2,0);
  if ((*(int *)(param_2 + 0x308) < 1) && ((*(byte *)(param_2 + 0x324) & 1) == 0)) {
    FUN_142a85ac8(param_1,param_2,0,0);
    return;
  }
  return;
}



// FUNCTION 146f32f4c FUN_146f32f4c body=68 status=ok
// SIG undefined FUN_146f32f4c(void)

void FUN_146f32f4c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  if (*param_2 != 0) {
    FUN_145aaa3d4(param_1 + 0x330);
    if (*param_2 != 0) {
      plVar1 = param_2 + 4;
      if ((longlong *)param_2[2] != (longlong *)0x0) {
        plVar1 = (longlong *)param_2[2];
      }
                    /* WARNING: Could not recover jumptable at 0x000146f32f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x10))(plVar1);
      return;
    }
  }
  return;
}



// FUNCTION 146f32f90 FUN_146f32f90 body=68 status=ok
// SIG undefined FUN_146f32f90(void)

void FUN_146f32f90(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  if (*param_2 != 0) {
    FUN_145aaa512(param_1 + 0x370);
    if (*param_2 != 0) {
      plVar1 = param_2 + 4;
      if ((longlong *)param_2[2] != (longlong *)0x0) {
        plVar1 = (longlong *)param_2[2];
      }
                    /* WARNING: Could not recover jumptable at 0x000146f32fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x10))(plVar1);
      return;
    }
  }
  return;
}



// FUNCTION 146f32fd4 FUN_146f32fd4 body=153 status=ok
// SIG undefined FUN_146f32fd4(void)

void FUN_146f32fd4(longlong param_1)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146f3306e();
  uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0xc);
  FUN_146f296e2(*(undefined8 *)(param_1 + 0x1e8),uVar1);
  FUN_146f14ba4(param_1 + 0x540,uVar1);
  FUN_146f14ba4(param_1 + 0x558,uVar1);
  FUN_146f33198(*(longlong *)(param_1 + 0x40) + 0x400,local_20,param_1);
  FUN_146f332ca(param_1);
  FUN_146f3370a(param_1);
  FUN_146f3388a(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f3306e FUN_146f3306e body=297 status=ok
// SIG undefined FUN_146f3306e(void)

void FUN_146f3306e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_388 [32];
  undefined8 *local_368;
  undefined8 local_358;
  undefined8 local_350;
  undefined1 local_348;
  undefined4 local_344;
  undefined1 local_340 [768];
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_388;
  lVar1 = *(longlong *)(param_2 + 0x28);
  *(longlong *)(param_1 + 0x28) = param_2;
  *(longlong *)(param_1 + 0x30) = lVar1 + 0x60;
  *(longlong *)(param_1 + 0x38) = lVar1 + 0x7b0;
  *(longlong *)(param_1 + 0x40) = lVar1 + 0x160;
  *(longlong *)(param_1 + 0x48) = lVar1 + 0xd38;
  *(longlong *)(param_1 + 0x50) = lVar1 + 0xb68;
  local_40 = 0;
  local_38 = 0x2000000000;
  local_350 = 0;
  local_348 = 0;
  lVar1 = *(longlong *)(param_2 + 0x28);
  FUN_1446ddc76(&local_358,"DestructionInfo",1);
  local_344 = FUN_146f6019a(lVar1 + 0x12a0,local_358);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = FUN_146f41d8a(local_340);
  local_368 = &local_350;
  uVar3 = FUN_142a95bfc(uVar3,uVar2,local_340,L"InternalDestructionInfo");
  *(undefined8 *)(param_1 + 0xa8) = uVar3;
  FUN_146f41c34(uVar3);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_388) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f33198 FUN_146f33198 body=244 status=ok
// SIG undefined FUN_146f33198(void)

undefined8 FUN_146f33198(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_149e41aa0;
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
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_149f9c250;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_146f3328e;
  FUN_145ff191a(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f3328e FUN_146f3328e body=60 status=ok
// SIG undefined FUN_146f3328e(void)

void FUN_146f3328e(longlong param_1,undefined4 param_2)

{
  FUN_146f29778(*(undefined8 *)(param_1 + 0x1e8));
  FUN_146efc8cc(param_1 + 0x540,param_2);
  FUN_146efc8cc(param_1 + 0x558,param_2);
  return;
}



// FUNCTION 146f332ca FUN_146f332ca body=1087 status=ok
// SIG undefined FUN_146f332ca(void)

void FUN_146f332ca(longlong param_1)

{
  byte bVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  float *pfVar9;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  float local_84;
  ulonglong local_80;
  undefined1 local_78;
  undefined1 local_74 [4];
  float *local_70;
  float *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(undefined2 *)(param_1 + 0x598) = 0;
  FUN_146f3e914(param_1 + 0x1f0);
  FUN_146f3e914(param_1 + 0x240);
  FUN_1408d9e0e(param_1 + 0x290,0);
  local_98 = param_1 + 0x2e0;
  FUN_146f3ea9e();
  local_90 = param_1 + 0x3b0;
  FUN_146f3ec26();
  local_a0 = param_1 + 0x400;
  FUN_146efefd8(local_a0,0);
  local_a8 = param_1 + 0x450;
  FUN_146efefd8(local_a8,0);
  FUN_146f3edaa(param_1 + 400);
  plVar3 = (longlong *)FUN_145b0a4d4();
  lVar5 = plVar3[0x22];
  if (lVar5 == 0) {
    (**(code **)(*plVar3 + 1000))(plVar3);
    lVar5 = plVar3[0x22];
  }
  FUN_1401a700c(&local_70,100);
  uVar6 = (ulonglong)local_70 & 0xffffffff;
  FUN_1401a700c(&local_70,0x66);
  uVar8 = (ulonglong)local_70 & 0xffffffff;
  if ((longlong)*(int *)(lVar5 + 0x30) != 0) {
    pfVar9 = *(float **)(lVar5 + 0x28);
    lVar7 = (longlong)*(int *)(lVar5 + 0x30) << 4;
    do {
      if (*(ulonglong *)pfVar9 != uVar8 && *(ulonglong *)pfVar9 != uVar6) {
        *(undefined1 *)(param_1 + 0x598) = 1;
        local_80 = 0;
        local_84 = pfVar9[2];
        if (local_84 <= 0.0) {
          local_84 = 0.0;
        }
        lVar4 = param_1 + 0x240;
        if (*(char *)(pfVar9 + 3) == '\x01') {
          *(undefined1 *)(param_1 + 0x599) = 1;
          lVar4 = param_1 + 0x1f0;
        }
        local_68 = &local_84;
        local_70 = pfVar9;
        FUN_146f3ef2e(lVar4,local_74,&local_70);
      }
      pfVar9 = pfVar9 + 4;
      lVar7 = lVar7 + -0x10;
    } while (lVar7 != 0);
  }
  if (*(char *)(param_1 + 0x599) != '\0') {
    FUN_146f35a68(param_1);
  }
  uVar2 = FUN_146f2158c(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28) + 0x880,
                        *(undefined8 *)(lVar5 + 0x90));
  *(undefined4 *)(param_1 + 0x570) = uVar2;
  if ((longlong)*(int *)(lVar5 + 0x40) != 0) {
    pfVar9 = *(float **)(lVar5 + 0x38);
    lVar7 = (longlong)*(int *)(lVar5 + 0x40) * 0x1c;
    do {
      local_78 = 0;
      local_80 = 0;
      local_84 = (float)FUN_146f2158c(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28) + 0x880,
                                      *(longlong *)(pfVar9 + 2));
      local_80 = *(ulonglong *)(pfVar9 + 4);
      local_78 = *(undefined1 *)(pfVar9 + 6);
      local_68 = &local_84;
      local_70 = pfVar9;
      FUN_146f3df02(local_98,local_74,&local_70);
      pfVar9 = pfVar9 + 7;
      lVar7 = lVar7 + -0x1c;
    } while (lVar7 != 0);
  }
  if ((longlong)*(int *)(lVar5 + 0x50) != 0) {
    pfVar9 = *(float **)(lVar5 + 0x48);
    lVar7 = (longlong)*(int *)(lVar5 + 0x50) * 0x14;
    do {
      local_80 = local_80 & 0xffffffffffffff00;
      local_84 = (float)FUN_146f45806(*(undefined8 *)(param_1 + 0x28),*(longlong *)(pfVar9 + 2));
      local_80 = CONCAT71(local_80._1_7_,*(undefined1 *)(pfVar9 + 4));
      local_68 = &local_84;
      local_70 = pfVar9;
      FUN_146f3e412(local_90,local_74,&local_70);
      pfVar9 = pfVar9 + 5;
      lVar7 = lVar7 + -0x14;
    } while (lVar7 != 0);
  }
  if ((longlong)*(int *)(lVar5 + 0x60) != 0) {
    pfVar9 = *(float **)(lVar5 + 0x58);
    lVar7 = (longlong)*(int *)(lVar5 + 0x60) * 0xc;
    do {
      if (*(ulonglong *)pfVar9 != uVar8 && *(ulonglong *)pfVar9 != uVar6) {
        local_68 = pfVar9 + 2;
        local_70 = pfVar9;
        FUN_146eff18a(local_a0,&local_84,&local_70,0);
      }
      pfVar9 = pfVar9 + 3;
      lVar7 = lVar7 + -0xc;
    } while (lVar7 != 0);
  }
  if ((*(char *)(lVar5 + 0x78) == '\0') && ((longlong)*(int *)(lVar5 + 0x70) != 0)) {
    pfVar9 = *(float **)(lVar5 + 0x68);
    lVar7 = (longlong)*(int *)(lVar5 + 0x70) * 0xc;
    do {
      if (*(ulonglong *)pfVar9 != uVar8 && *(ulonglong *)pfVar9 != uVar6) {
        local_68 = pfVar9 + 2;
        local_70 = pfVar9;
        FUN_146eff18a(local_a8,&local_84,&local_70,0);
      }
      pfVar9 = pfVar9 + 3;
      lVar7 = lVar7 + -0xc;
    } while (lVar7 != 0);
  }
  if ((longlong)*(int *)(lVar5 + 0x88) != 0) {
    lVar7 = (longlong)*(int *)(lVar5 + 0x88) * 0x14;
    pfVar9 = (float *)(*(longlong *)(lVar5 + 0x80) + 8);
    bVar1 = DAT_14c999840;
    do {
      if (((bVar1 & 1) != 0) || (*(char *)(pfVar9 + 2) == '\x01')) {
        local_70 = pfVar9 + -2;
        local_68 = pfVar9;
        FUN_140906722(param_1 + 0x4a0,&local_84,&local_70,0);
        bVar1 = DAT_14c999840;
      }
      pfVar9 = pfVar9 + 5;
      lVar7 = lVar7 + -0x14;
    } while (lVar7 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f3370a FUN_146f3370a body=383 status=ok
// SIG undefined FUN_146f3370a(void)

void FUN_146f3370a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  local_30 = 2;
  *local_38 = &PTR_LAB_149f9c330;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_149f9c2c0;
  local_38[3] = param_1;
  FUN_146f3f084(&local_40,&local_38);
  FUN_1449db362(&local_38);
  *(undefined8 *)(param_1 + 0x578) = local_40;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  local_30 = 2;
  *local_38 = &PTR_LAB_149f9c410;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_149f9c3a0;
  local_38[3] = param_1;
  FUN_146f3f186(&local_40,&local_38);
  FUN_1449db362(&local_38);
  *(undefined8 *)(param_1 + 0x580) = local_40;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f3388a FUN_146f3388a body=211 status=ok
// SIG undefined FUN_146f3388a(void)

void FUN_146f3388a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = (longlong)DAT_14c9997a8;
  if (0 < lVar2) {
    lVar4 = 0;
    do {
      lVar3 = FUN_146f33b70(param_1,*(undefined8 *)((longlong)&DAT_14c9996f0 + lVar4));
      if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar3);
      }
      iVar1 = *(int *)(param_1 + 0x590);
      *(uint *)(param_1 + 0x590) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x594) < iVar1 + 1U) {
        FUN_146f3cc4a((longlong *)(param_1 + 0x588),iVar1);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x588) + (longlong)iVar1 * 8) = lVar3;
      if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar3);
      }
      FUN_146f27012(lVar3,(&DAT_14c9996f8)[lVar4],param_1);
      lVar4 = lVar4 + 0x18;
    } while (lVar2 * 0x18 != lVar4);
  }
  return;
}



// FUNCTION 146f3395e FUN_146f3395e body=121 status=ok
// SIG undefined FUN_146f3395e(void)

void FUN_146f3395e(longlong param_1)

{
  FUN_140457ffc(*(longlong *)(param_1 + 0x40) + 0x400,param_1);
  FUN_146f339d8(param_1);
  if (*(longlong *)(param_1 + 0x578) != 0) {
    FUN_14480f766(&DAT_14c997f60);
  }
  if (*(longlong *)(param_1 + 0x580) != 0) {
    FUN_14480f766(&DAT_14c997f78);
  }
  *(undefined8 *)(param_1 + 0x578) = 0;
  *(undefined8 *)(param_1 + 0x580) = 0;
  FUN_146f2971e(*(undefined8 *)(param_1 + 0x1e8));
  FUN_146f33a46(param_1);
  return;
}



// FUNCTION 146f339d8 FUN_146f339d8 body=109 status=ok
// SIG undefined FUN_146f339d8(void)

void FUN_146f339d8(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x590);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x588);
    lVar3 = 0;
    do {
      FUN_146f27024(*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  *(undefined4 *)(param_1 + 0x590) = 0;
  if (*(int *)(param_1 + 0x594) == 0) {
    return;
  }
  FUN_146f3ccd0(param_1 + 0x588);
  return;
}



// FUNCTION 146f33a46 FUN_146f33a46 body=298 status=ok
// SIG undefined FUN_146f33a46(void)

void FUN_146f33a46(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x160);
  if (iVar2 != 0) {
    if (0x1f < iVar2 + 0x1fU) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x150);
      uVar8 = iVar2 + 0x1fU >> 5;
      uVar11 = 0;
      iVar9 = 0;
      do {
        uVar12 = 0xffffffff;
        if (uVar11 == uVar8 - 1) {
          uVar12 = 0xffffffff >> (-(char)iVar2 & 0x1fU);
        }
        uVar12 = uVar12 & *(uint *)(lVar3 + uVar11 * 4);
        iVar10 = iVar9;
        if (uVar12 != 0) {
          do {
            if (iVar10 != 0 && (uVar12 & 1) != 0) {
              lVar4 = *(longlong *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x270) +
                       (longlong)(iVar10 / 100) * 8);
              lVar7 = (ulonglong)(uint)(iVar10 % 100) * 0x38;
              if (*(longlong *)(lVar4 + 0x18 + lVar7) != 0) {
                puVar6 = (undefined8 *)(lVar4 + lVar7);
                pbVar1 = (byte *)((longlong)puVar6 + 0x33);
                *pbVar1 = *pbVar1 | 1;
                FUN_142a8cbe2(param_1,*puVar6);
              }
            }
            bVar5 = 1 < uVar12;
            uVar12 = uVar12 >> 1;
            iVar10 = iVar10 + 1;
          } while (bVar5);
        }
        uVar11 = uVar11 + 1;
        iVar9 = iVar9 + 0x20;
      } while (uVar11 != uVar8);
    }
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_146f41c3a();
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}



// FUNCTION 146f33b70 FUN_146f33b70 body=175 status=ok
// SIG undefined FUN_146f33b70(void)

undefined8 FUN_146f33b70(undefined8 param_1,undefined8 param_2)

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



// FUNCTION 146f33c20 FUN_146f33c20 body=116 status=ok
// SIG undefined FUN_146f33c20(void)

void FUN_146f33c20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  longlong local_30;
  uint local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_142a83af0(*(undefined8 *)(param_1 + 0x48),&local_30,param_2,param_3);
  if ((local_30 != 0) || ((local_28 & 0xfffff) != 0)) {
    FUN_142a85c76(param_1,local_38,local_30,param_4);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f33c96 FUN_146f33c96 body=66 status=ok
// SIG undefined FUN_146f33c96(void)

undefined8 FUN_146f33c96(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    cVar1 = FUN_146f45a10(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28) + 0x160);
    if (cVar1 != '\0') {
      uVar2 = FUN_146f299be(*(undefined8 *)(param_1 + 0x48),param_2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 146f33cd8 FUN_146f33cd8 body=26 status=ok
// SIG undefined FUN_146f33cd8(void)

undefined8 FUN_146f33cd8(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = FUN_146f45a10(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28) + 0x160);
  return uVar1;
}



// FUNCTION 146f33cf2 FUN_146f33cf2 body=120 status=ok
// SIG undefined FUN_146f33cf2(void)

longlong * FUN_146f33cf2(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_142a7e072(*(undefined8 *)(param_1 + 0x48),&local_28);
  if ((local_28 == 0) ||
     (cVar1 = FUN_146f45a10(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28) + 0x160),
     cVar1 == '\0')) {
    local_28 = 0;
  }
  *param_2 = local_28;
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146f33d6c FUN_146f33d6c body=147 status=ok
// SIG undefined FUN_146f33d6c(void)

undefined8 * FUN_146f33d6c(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_3;
  iVar1 = FUN_146f1808a(*(undefined8 *)(param_1 + 0x40));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)
             (*(longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x270) + (longlong)(iVar1 / 100) * 8)
             + (ulonglong)(uint)(iVar1 % 100) * 0x38);
  }
  *param_2 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f33e00 FUN_146f33e00 body=324 status=ok
// SIG undefined FUN_146f33e00(void)

undefined4 FUN_146f33e00(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = 0;
  if ((*(int *)(param_1 + 0x4d4) < *(int *)(param_1 + 0x4a8)) && (param_2 != 0)) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28);
    do {
      FUN_146f35c16(param_1,&local_40,param_2);
      if (*(int *)(param_1 + 0x4a8) != *(int *)(param_1 + 0x4d4)) {
        uVar3 = (uint)((ulonglong)local_40 >> 0x10);
        uVar7 = (uint)local_40 & 0xffff;
        lVar6 = *(longlong *)(param_1 + 0x4e0);
        if (*(longlong *)(param_1 + 0x4e0) == 0) {
          lVar6 = param_1 + 0x4d8;
        }
        iVar5 = *(int *)(lVar6 + (ulonglong)
                                 (*(int *)(param_1 + 0x4e8) - 1U &
                                 (int)((ulonglong)local_40 >> 0x20) +
                                 ((uint)local_40 << 0x10 | uVar7) + (uVar3 << 0x13 | uVar3 & 0xffff)
                                 + (uVar7 >> 4)) * 4);
        if (iVar5 != -1) {
          do {
            plVar1 = (longlong *)(*(longlong *)(param_1 + 0x4a0) + (longlong)iVar5 * 0x18);
            if (*plVar1 == local_40) {
              if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
                uVar4 = FUN_146f6019a(lVar2 + 0x12a0,plVar1[1]);
                goto LAB_146f33f1e;
              }
              break;
            }
            iVar5 = (int)plVar1[2];
          } while (iVar5 != -1);
        }
      }
      param_2 = *(longlong *)(param_2 + 0x40);
    } while (param_2 != 0);
  }
LAB_146f33f1e:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 146f33f46 FUN_146f33f46 body=290 status=ok
// SIG undefined FUN_146f33f46(void)

undefined1 FUN_146f33f46(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined1 uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = 0;
  if ((param_2 != 0) && (*(int *)(param_1 + 0x434) < *(int *)(param_1 + 0x408))) {
    do {
      FUN_146f35c16(param_1,&local_30,param_2);
      if (*(int *)(param_1 + 0x408) != *(int *)(param_1 + 0x434)) {
        uVar2 = (uint)((ulonglong)local_30 >> 0x10);
        uVar5 = (uint)local_30 & 0xffff;
        lVar4 = *(longlong *)(param_1 + 0x440);
        if (*(longlong *)(param_1 + 0x440) == 0) {
          lVar4 = param_1 + 0x438;
        }
        iVar6 = *(int *)(lVar4 + (ulonglong)
                                 (*(int *)(param_1 + 0x448) - 1U &
                                 (int)((ulonglong)local_30 >> 0x20) +
                                 ((uint)local_30 << 0x10 | uVar5) + (uVar2 << 0x13 | uVar2 & 0xffff)
                                 + (uVar5 >> 4)) * 4);
        if (iVar6 != -1) {
          do {
            plVar1 = (longlong *)(*(longlong *)(param_1 + 0x400) + (longlong)iVar6 * 0x14);
            if (*plVar1 == local_30) {
              if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
                uVar3 = (undefined1)plVar1[1];
                goto LAB_146f34048;
              }
              break;
            }
            iVar6 = *(int *)((longlong)plVar1 + 0xc);
          } while (iVar6 != -1);
        }
      }
      param_2 = *(longlong *)(param_2 + 0x40);
    } while (param_2 != 0);
    uVar3 = 0;
  }
LAB_146f34048:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 146f3406a FUN_146f3406a body=1264 status=ok
// SIG undefined FUN_146f3406a(void)

void FUN_146f3406a(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  longlong *local_b8;
  undefined4 *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((DAT_14c75f46e & *(byte *)(param_1 + 0x598)) != 0) {
    lVar9 = *(longlong *)(param_2 + 0x18);
    plVar1 = (longlong *)(param_1 + 0x240);
    uVar10 = (uint)lVar9;
    iVar11 = (int)((ulonglong)lVar9 >> 0x20);
    uVar5 = (uint)((ulonglong)lVar9 >> 0x10);
    if (*(int *)(param_1 + 0x248) != *(int *)(param_1 + 0x274)) {
      lVar8 = param_1 + 0x278;
      if (*(longlong *)(param_1 + 0x280) != 0) {
        lVar8 = *(longlong *)(param_1 + 0x280);
      }
      iVar6 = *(int *)(lVar8 + (ulonglong)
                               (*(int *)(param_1 + 0x288) - 1U &
                               iVar11 + (uVar10 << 0x10 | uVar10 & 0xffff) +
                               (uVar5 << 0x13 | uVar5 & 0xffff) + ((uVar10 & 0xffff) >> 4)) * 4);
      if (iVar6 != -1) {
        do {
          lVar8 = *plVar1 + (longlong)iVar6 * 0x1c;
          if (*(longlong *)(*plVar1 + (longlong)iVar6 * 0x1c) == lVar9) {
            if ((undefined4 *)(lVar8 + 8) != (undefined4 *)0x0 && lVar8 != 0) {
              *param_3 = *(undefined4 *)(lVar8 + 8);
              goto LAB_146f340ea;
            }
            break;
          }
          iVar6 = *(int *)(lVar8 + 0x14);
        } while (iVar6 != -1);
      }
    }
    plVar2 = (longlong *)(param_1 + 0x290);
    if (*(int *)(param_1 + 0x298) != *(int *)(param_1 + 0x2c4)) {
      lVar8 = param_1 + 0x2c8;
      if (*(longlong *)(param_1 + 0x2d0) != 0) {
        lVar8 = *(longlong *)(param_1 + 0x2d0);
      }
      iVar11 = *(int *)(lVar8 + (ulonglong)
                                (*(int *)(param_1 + 0x2d8) - 1U &
                                iVar11 + (uVar10 << 0x10 | uVar10 & 0xffff) +
                                (uVar5 << 0x13 | uVar5 & 0xffff) + ((uVar10 & 0xffff) >> 4)) * 4);
      if (iVar11 != -1) {
        do {
          lVar8 = *plVar2 + (longlong)iVar11 * 0x10;
          if (*(longlong *)(*plVar2 + (longlong)iVar11 * 0x10) == lVar9) {
            if (lVar8 != 0) goto LAB_146f340ea;
            break;
          }
          iVar11 = *(int *)(lVar8 + 8);
        } while (iVar11 != -1);
      }
    }
    if (*(int *)(param_1 + 0x1f8) != *(int *)(param_1 + 0x224)) {
      local_b8 = plVar1;
      local_a8 = plVar2;
      if (*(char *)(param_1 + 0x599) == '\x01') {
        FUN_146f35a68(param_1);
      }
      plVar1 = (longlong *)(param_1 + 0x1f0);
      local_78 = 0;
      uStack_74 = 0;
      iVar11 = 0;
      local_70 = 0;
      lVar9 = param_1 + 0x200;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_60 = lVar9;
      if (*(int *)(param_1 + 0x218) != 0) {
        FUN_1449c0562(&local_68);
        iVar11 = *(int *)(param_1 + 0x218);
      }
      local_88 = local_58;
      uVar4 = local_88;
      local_80 = local_50;
      local_7c = local_4c;
      local_98 = local_68;
      local_90 = local_60;
      local_88._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      local_a0 = plVar1;
      if ((local_88._4_4_ != iVar11) || (local_60 != lVar9)) {
        local_c0 = 0;
        iVar6 = local_88._4_4_;
        local_b0 = param_3;
        local_88 = uVar4;
        do {
          lVar8 = *local_a0;
          lVar7 = FUN_14479d2ce(lVar8 + (longlong)iVar6 * 0x1c + 0xc);
          if (lVar7 != 0) {
            iVar3 = *(int *)(lVar7 + 0x38);
            if (((iVar3 <= *(int *)(param_2 + 0x38)) &&
                (*(longlong **)(*(longlong *)(param_2 + 0x30) + (longlong)iVar3 * 8) ==
                 (longlong *)(lVar7 + 0x30))) &&
               ((local_c0 == 0 ||
                ((*(int *)(local_c0 + 0x38) <= iVar3 &&
                 (*(longlong *)
                   (*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(local_c0 + 0x38) * 8) ==
                  local_c0 + 0x30)))))) {
              lVar8 = lVar8 + (longlong)iVar6 * 0x1c;
              local_70 = *(undefined4 *)(lVar8 + 0x10);
              uVar4 = *(undefined8 *)(lVar8 + 8);
              local_78 = (undefined4)uVar4;
              uStack_74 = (undefined4)((ulonglong)uVar4 >> 0x20);
              local_c0 = lVar7;
            }
          }
          local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~local_98._4_4_);
          FUN_1449c0562(&local_98);
          plVar2 = local_b8;
          iVar6 = local_88._4_4_;
        } while (local_a0 != plVar1 || (local_90 != lVar9 || local_88._4_4_ != iVar11));
        uVar4 = local_88;
        if (local_c0 != 0) {
          uStack_74 = 0;
          local_70 = 0;
          if (param_2 != 0) {
            do {
              local_a0 = *(longlong **)(param_2 + 0x18);
              uVar5 = (uint)((ulonglong)local_a0 >> 0x10);
              uVar10 = (uint)local_a0 & 0xffff;
              FUN_146f3d44e(plVar2,((uint)local_a0 << 0x10 | uVar10) +
                                   (int)((ulonglong)local_a0 >> 0x20) +
                                   (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar10 >> 4),&local_a0,
                            &local_78);
              param_2 = *(longlong *)(param_2 + 0x40);
            } while (param_2 != 0);
          }
          *local_b0 = local_78;
          goto LAB_146f340ea;
        }
      }
      local_88 = uVar4;
      plVar2 = local_a8;
      plVar1 = local_b8;
      if (param_2 != 0) {
        do {
          local_a0 = *(longlong **)(param_2 + 0x18);
          if (*(int *)(param_1 + 0x248) != *(int *)(param_1 + 0x274)) {
            uVar5 = (uint)((ulonglong)local_a0 >> 0x10);
            uVar10 = (uint)local_a0 & 0xffff;
            lVar9 = *(longlong *)(param_1 + 0x280);
            if (*(longlong *)(param_1 + 0x280) == 0) {
              lVar9 = param_1 + 0x278;
            }
            iVar11 = *(int *)(lVar9 + (ulonglong)
                                      (*(int *)(param_1 + 0x288) - 1U &
                                      (int)((ulonglong)local_a0 >> 0x20) +
                                      ((uint)local_a0 << 0x10 | uVar10) +
                                      (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar10 >> 4)) * 4);
            if (iVar11 != -1) {
              do {
                if (*(longlong **)(*plVar1 + (longlong)iVar11 * 0x1c) == local_a0)
                goto LAB_146f34344;
                iVar11 = *(int *)((longlong)iVar11 * 0x1c + *plVar1 + 0x14);
              } while (iVar11 != -1);
            }
          }
          FUN_144a13f80(plVar2,&local_68,&local_a0,0);
LAB_146f34344:
          param_2 = *(longlong *)(param_2 + 0x40);
        } while (param_2 != 0);
      }
    }
  }
LAB_146f340ea:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f3455c FUN_146f3455c body=575 status=ok
// SIG undefined FUN_146f3455c(void)

undefined4 FUN_146f3455c(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  longlong local_70;
  longlong local_68;
  longlong *local_60;
  ulonglong *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar8 = 0xffffffff;
  if (*(int *)(param_1 + 0x3e4) < *(int *)(param_1 + 0x3b8)) {
    plVar1 = (longlong *)(param_1 + 0x3b0);
    FUN_146f35c16(param_1,&local_68,param_2);
    if (*(int *)(param_1 + 0x3b8) != *(int *)(param_1 + 0x3e4)) {
      uVar3 = (uint)((ulonglong)local_68 >> 0x10);
      uVar6 = (uint)local_68 & 0xffff;
      lVar5 = param_1 + 1000;
      if (*(longlong *)(param_1 + 0x3f0) != 0) {
        lVar5 = *(longlong *)(param_1 + 0x3f0);
      }
      iVar7 = *(int *)(lVar5 + (ulonglong)
                               (*(int *)(param_1 + 0x3f8) - 1U &
                               (int)((ulonglong)local_68 >> 0x20) + ((uint)local_68 << 0x10 | uVar6)
                               + (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
      if (iVar7 != -1) {
        do {
          plVar2 = (longlong *)(*plVar1 + (longlong)iVar7 * 0x18);
          if (*plVar2 == local_68) {
            if (plVar2 + 1 != (longlong *)0x0 && plVar2 != (longlong *)0x0) {
              if ((param_3 == '\0') ||
                 (uVar8 = 0xffffffff, *(char *)((longlong)plVar2 + 0xc) == '\x01')) {
                uVar8 = (int)plVar2[1];
              }
              goto LAB_146f3458e;
            }
            break;
          }
          iVar7 = (int)plVar2[2];
        } while (iVar7 != -1);
      }
    }
    lVar5 = *(longlong *)(param_2 + 0x40);
    if (lVar5 != 0) {
      do {
        FUN_146f35c16(param_1,&local_70,lVar5);
        if (*(int *)(param_1 + 0x3b8) != *(int *)(param_1 + 0x3e4)) {
          uVar3 = (uint)((ulonglong)local_70 >> 0x10);
          uVar6 = (uint)local_70 & 0xffff;
          lVar4 = *(longlong *)(param_1 + 0x3f0);
          if (*(longlong *)(param_1 + 0x3f0) == 0) {
            lVar4 = param_1 + 1000;
          }
          iVar7 = *(int *)(lVar4 + (ulonglong)
                                   (*(int *)(param_1 + 0x3f8) - 1U &
                                   (int)((ulonglong)local_70 >> 0x20) +
                                   ((uint)local_70 << 0x10 | uVar6) +
                                   (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
          if (iVar7 != -1) {
            do {
              plVar2 = (longlong *)(*plVar1 + (longlong)iVar7 * 0x18);
              if (*plVar2 == local_70) {
                if ((ulonglong *)(plVar2 + 1) != (ulonglong *)0x0 && plVar2 != (longlong *)0x0) {
                  local_78 = plVar2[1];
                  local_58 = &local_78;
                  local_60 = &local_68;
                  FUN_146f3e412(plVar1,local_4c);
                  uVar8 = 0xffffffff;
                  if ((local_78 & 0x100000000) != 0) {
                    uVar8 = (undefined4)local_78;
                  }
                  if (param_3 == '\0') {
                    uVar8 = (undefined4)local_78;
                  }
                  goto LAB_146f3458e;
                }
                break;
              }
              iVar7 = (int)plVar2[2];
            } while (iVar7 != -1);
          }
        }
        lVar5 = *(longlong *)(lVar5 + 0x40);
      } while (lVar5 != 0);
    }
  }
LAB_146f3458e:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 146f3479c FUN_146f3479c body=136 status=ok
// SIG undefined FUN_146f3479c(void)

void FUN_146f3479c(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28);
  uVar3 = FUN_146f18900(lVar1 + 0x160);
  uVar5 = 1 << ((byte)uVar3 & 0x1f);
  uVar6 = (ulonglong)(uVar3 >> 5);
  if ((*(uint *)(*(longlong *)(lVar1 + 0x1080) + uVar6 * 4) >> (uVar3 & 0x1f) & 1) != 0) {
    uVar4 = 0;
    if (param_3 != '\0') {
      cVar2 = FUN_146f2155e(lVar1 + 0x880,uVar3);
      uVar3 = 0;
      if ((*(uint *)(*(longlong *)(lVar1 + 0x1080) + uVar6 * 4) & uVar5) != 0) {
        uVar3 = uVar5;
      }
      uVar4 = 0;
      if (cVar2 != '\0') {
        uVar4 = uVar3;
      }
    }
    *(uint *)(*(longlong *)(lVar1 + 0x10b0) + uVar6 * 4) =
         ~uVar5 & *(uint *)(*(longlong *)(lVar1 + 0x10b0) + uVar6 * 4) | uVar4;
  }
  return;
}



// FUNCTION 146f34824 FUN_146f34824 body=849 status=ok
// SIG undefined FUN_146f34824(void)

undefined4 FUN_146f34824(longlong param_1,longlong *param_2,char param_3,undefined8 *param_4)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  longlong local_70;
  longlong local_68;
  undefined1 local_5c [4];
  longlong *local_58;
  undefined4 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_1 + 0x2e8) == *(int *)(param_1 + 0x314)) {
    pcVar1 = *(code **)(param_1 + 0x330);
    plVar9 = (longlong *)(param_1 + 0x350);
    if (*(longlong **)(param_1 + 0x340) != (longlong *)0x0) {
      plVar9 = *(longlong **)(param_1 + 0x340);
    }
    local_58 = param_2;
    uVar5 = (**(code **)(*plVar9 + 8))();
    cVar3 = (*pcVar1)(uVar5,&local_58);
    uVar4 = 0;
    if (cVar3 != '\0') {
      uVar4 = *(undefined4 *)(param_1 + 0x570);
    }
  }
  else {
    plVar9 = (longlong *)(param_1 + 0x2e0);
    FUN_146f35c16(param_1,&local_68,param_2);
    if (*(int *)(param_1 + 0x2e8) != *(int *)(param_1 + 0x314)) {
      uVar2 = (uint)((ulonglong)local_68 >> 0x10);
      uVar10 = (uint)local_68 & 0xffff;
      lVar7 = param_1 + 0x318;
      if (*(longlong *)(param_1 + 800) != 0) {
        lVar7 = *(longlong *)(param_1 + 800);
      }
      iVar6 = *(int *)(lVar7 + (ulonglong)
                               (*(int *)(param_1 + 0x328) - 1U &
                               (int)((ulonglong)local_68 >> 0x20) +
                               ((uint)local_68 << 0x10 | uVar10) + (uVar2 << 0x13 | uVar2 & 0xffff)
                               + (uVar10 >> 4)) * 4);
      if (iVar6 != -1) {
        do {
          lVar7 = *plVar9 + (longlong)iVar6 * 0x20;
          if (*(longlong *)(*plVar9 + (longlong)iVar6 * 0x20) == local_68) {
            if ((lVar7 != 0) && (lVar7 != -8)) {
              if ((param_3 == '\0') || (uVar4 = 0, *(char *)(lVar7 + 0x14) == '\x01')) {
                *param_4 = *(undefined8 *)(lVar7 + 0xc);
                uVar4 = *(undefined4 *)(lVar7 + 8);
              }
              goto LAB_146f34897;
            }
            break;
          }
          iVar6 = *(int *)(lVar7 + 0x18);
        } while (iVar6 != -1);
      }
    }
    lVar7 = param_2[8];
    local_90 = plVar9;
    if (lVar7 != 0) {
      do {
        FUN_146f35c16(param_1,&local_70,lVar7);
        if (*(int *)(param_1 + 0x2e8) != *(int *)(param_1 + 0x314)) {
          uVar2 = (uint)((ulonglong)local_70 >> 0x10);
          uVar10 = (uint)local_70 & 0xffff;
          lVar8 = *(longlong *)(param_1 + 800);
          if (*(longlong *)(param_1 + 800) == 0) {
            lVar8 = param_1 + 0x318;
          }
          iVar6 = *(int *)(lVar8 + (ulonglong)
                                   (*(int *)(param_1 + 0x328) - 1U &
                                   (int)((ulonglong)local_70 >> 0x20) +
                                   ((uint)local_70 << 0x10 | uVar10) +
                                   (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar10 >> 4)) * 4);
          if (iVar6 != -1) {
            do {
              lVar8 = *local_90 + (longlong)iVar6 * 0x20;
              if (*(longlong *)(*local_90 + (longlong)iVar6 * 0x20) == local_70) {
                if ((undefined4 *)(lVar8 + 8) != (undefined4 *)0x0 && lVar8 != 0) {
                  local_88 = (undefined4)lVar7;
                  uStack_84 = (undefined4)((ulonglong)lVar7 >> 0x20);
                  pcVar1 = *(code **)(param_1 + 0x370);
                  plVar9 = (longlong *)(param_1 + 0x390);
                  if (*(longlong **)(param_1 + 0x380) != (longlong *)0x0) {
                    plVar9 = *(longlong **)(param_1 + 0x380);
                  }
                  local_58 = param_2;
                  uVar5 = (**(code **)(*plVar9 + 8))();
                  cVar3 = (*pcVar1)(uVar5,&local_88,&local_58);
                  if (cVar3 == '\0') goto LAB_146f34975;
                  local_88 = *(undefined4 *)(lVar8 + 8);
                  uStack_84 = *(undefined4 *)(lVar8 + 0xc);
                  uStack_80 = *(undefined4 *)(lVar8 + 0x10);
                  uStack_7c = *(uint *)(lVar8 + 0x14);
                  local_58 = &local_68;
                  local_50 = &local_88;
                  FUN_146f3df02(local_90,local_5c);
                  if ((param_3 == '\0') || (uVar4 = 0, (uStack_7c & 1) != 0)) {
                    *param_4 = CONCAT44(uStack_80,uStack_84);
                    uVar4 = local_88;
                  }
                  goto LAB_146f34897;
                }
                break;
              }
              iVar6 = *(int *)(lVar8 + 0x18);
            } while (iVar6 != -1);
          }
        }
        lVar7 = *(longlong *)(lVar7 + 0x40);
      } while (lVar7 != 0);
    }
LAB_146f34975:
    uStack_84 = 0;
    uStack_80 = 0;
    pcVar1 = *(code **)(param_1 + 0x330);
    plVar9 = (longlong *)(param_1 + 0x350);
    if (*(longlong **)(param_1 + 0x340) != (longlong *)0x0) {
      plVar9 = *(longlong **)(param_1 + 0x340);
    }
    local_58 = param_2;
    uVar5 = (**(code **)(*plVar9 + 8))();
    cVar3 = (*pcVar1)(uVar5,&local_58);
    local_88 = 0;
    if (cVar3 != '\0') {
      local_88 = *(undefined4 *)(param_1 + 0x570);
    }
    local_50 = &local_88;
    uStack_7c = uStack_7c & 0xffffff00;
    local_58 = &local_68;
    FUN_146f3df02(local_90,&local_70);
    uVar4 = local_88;
  }
LAB_146f34897:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 146f34b76 FUN_146f34b76 body=105 status=ok
// SIG undefined FUN_146f34b76(void)

void FUN_146f34b76(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  char param_5)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_146f285d8(*(undefined8 *)(param_1 + 0x40),param_2,param_3,param_4,
                        (param_5 != '\0') * '\b' + '\x05');
  if (cVar1 == '\0') {
    return;
  }
  uVar2 = FUN_146f18900(*(undefined8 *)(param_1 + 0x40),param_3);
  FUN_142a769ba(*(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x48),uVar2);
  FUN_146f45776(*(undefined8 *)(param_1 + 0x28),param_3,0x3f800000);
  return;
}



// FUNCTION 146f34be0 FUN_146f34be0 body=177 status=ok
// SIG undefined FUN_146f34be0(void)

void FUN_146f34be0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_58 [40];
  int *local_30;
  uint local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x40);
  uVar2 = FUN_146f18900(lVar1);
  uVar3 = FUN_146f18900(lVar1,param_3);
  local_24 = *(int *)(lVar1 + 0x1d8);
  local_30 = *(int **)(lVar1 + 0x1c8);
  local_28 = local_24 + 0x1fU >> 5;
  if (local_24 == 0) {
    local_30 = &local_24;
  }
  uVar4 = 0;
  if (((uint)local_30[uVar3 >> 5] >> (uVar3 & 0x1f) & 1) != 0) {
    uVar4 = 1 << ((byte)uVar2 & 0x1f);
  }
  local_30[uVar2 >> 5] = local_30[uVar2 >> 5] & ~(1 << (uVar2 & 0x1f)) | uVar4;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f34c92 FUN_146f34c92 body=116 status=ok
// SIG undefined FUN_146f34c92(void)

void FUN_146f34c92(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146f33cf2(param_1,&local_30,param_2,1);
  if (local_30 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f34d1e FUN_146f34d1e body=67 status=ok
// SIG undefined FUN_146f34d1e(void)

void FUN_146f34d1e(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  if ((param_2 & 1) != 0 || param_2 == 0) {
    return;
  }
  uVar1 = FUN_146f299be(*(undefined8 *)(param_1 + 0x48),param_2);
  FUN_142a824a0(*(undefined8 *)(param_1 + 0x48),param_2,uVar1);
  return;
}



// FUNCTION 146f34d64 FUN_146f34d64 body=84 status=ok
// SIG undefined FUN_146f34d64(void)

void FUN_146f34d64(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  FUN_146f34d1e();
  FUN_146f3d206(param_1 + 0x4f0,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f34dca FUN_146f34dca body=187 status=ok
// SIG undefined FUN_146f34dca(void)

void FUN_146f34dca(longlong param_1,int param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar4 = param_2 % 100;
  lVar2 = *(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x270) + (longlong)(param_2 / 100) * 8);
  bVar1 = *(byte *)(lVar2 + 0x30 + (ulonglong)uVar4 * 0x38);
  plVar3 = (longlong *)0x0;
  if ((bVar1 != 0xff) &&
     (*(uint *)(param_1 + 0x590) != (uint)bVar1 &&
      (int)(uint)bVar1 <= (int)*(uint *)(param_1 + 0x590))) {
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x588) + (ulonglong)bVar1 * 8);
  }
  local_18 = *(undefined8 *)
              (*(longlong *)
                (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x2d0) +
                (longlong)(param_2 / 100) * 8) + (longlong)(int)uVar4 * 8);
  local_10 = *(undefined8 *)(lVar2 + (longlong)(int)uVar4 * 0x38);
  (**(code **)(*plVar3 + 0x2b0))(plVar3);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f34e94 FUN_146f34e94 body=472 status=ok
// SIG undefined FUN_146f34e94(void)

void FUN_146f34e94(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int *_Dst;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 uStack_104;
  uint uStack_100;
  int iStack_fc;
  int *local_f8;
  uint local_f0;
  int local_ec;
  undefined8 local_e8;
  uint uStack_e0;
  int iStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  uint uStack_d0;
  int iStack_cc;
  void *local_c8;
  uint local_c0;
  int local_bc;
  void *local_b8;
  undefined8 uStack_b0;
  int local_a8;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28);
  iVar1 = *(int *)(lVar2 + 0x290);
  local_b8 = (void *)0x0;
  uStack_b0 = 0;
  local_a8 = iVar1;
  FUN_146f14ba4(&local_b8,iVar1);
  local_38 = local_b8;
  local_c0 = local_a8 + 0x1fU >> 5;
  uStack_30._4_4_ = local_a8;
  if (local_a8 == 0) {
    local_38 = (void *)((longlong)&uStack_30 + 4);
  }
  local_c8 = local_38;
  local_bc = local_a8;
  uStack_30._0_4_ = local_c0;
  FUN_142a87116(param_1);
  local_d8 = (undefined4)local_38;
  uStack_d4 = local_38._4_4_;
  uStack_d0 = (uint)uStack_30;
  iStack_cc = uStack_30._4_4_;
  FUN_142a8792e(param_1);
  if (*(int *)(lVar2 + 0x290) == 0) {
    _Dst = &iStack_dc;
  }
  else {
    _Dst = *(int **)(lVar2 + 0x280);
  }
  if (((iVar1 != 0) && (0x1f < iVar1 + 0x1fU)) && ((int)uStack_b0 != 0)) {
    memcpy(_Dst,local_b8,(ulonglong)(iVar1 + 0x1fU >> 3 & 0xfffffffc));
  }
  if (local_b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_146f1811e(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28) + 0x5b0);
  local_ec = *(int *)(lVar2 + 0x290);
  local_e8 = *(int **)(lVar2 + 0x280);
  local_f0 = local_ec + 0x1fU >> 5;
  if (local_ec == 0) {
    local_e8 = &iStack_dc;
  }
  local_f8 = local_e8;
  uStack_e0 = local_f0;
  iStack_dc = local_ec;
  FUN_142a87bf6(param_1);
  local_108 = (undefined4)local_e8;
  uStack_104 = local_e8._4_4_;
  uStack_100 = uStack_e0;
  iStack_fc = iStack_dc;
  local_38 = (void *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28) + 0x60);
  uStack_30 = param_1;
  FUN_146f35076(&local_b8);
  FUN_146f35244(&local_b8,&local_108);
  if ((local_28 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f35076 FUN_146f35076 body=301 status=ok
// SIG undefined FUN_146f35076(void)

longlong * FUN_146f35076(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  int *local_18;
  uint local_10;
  int local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar2 = param_2[1];
  *param_1 = lVar2;
  lVar3 = *param_2;
  param_1[1] = lVar3;
  param_1[2] = lVar3 + 0x100;
  param_1[3] = 0;
  param_1[4] = lVar3 + 0x3d0;
  iVar1 = *(int *)(lVar3 + 0x560);
  param_1[5] = *(longlong *)(lVar3 + 0x550);
  *(uint *)(param_1 + 6) = iVar1 + 0x1fU >> 5;
  *(int *)((longlong)param_1 + 0x34) = iVar1;
  if (iVar1 == 0) {
    param_1[5] = (longlong)param_1 + 0x34;
  }
  iVar1 = *(int *)(lVar3 + 0x248);
  param_1[7] = *(longlong *)(lVar3 + 0x238);
  *(uint *)(param_1 + 8) = iVar1 + 0x1fU >> 5;
  *(int *)((longlong)param_1 + 0x44) = iVar1;
  if (iVar1 == 0) {
    param_1[7] = (longlong)param_1 + 0x44;
  }
  param_1[9] = (longlong)param_1 + 0x54;
  param_1[10] = 0;
  param_1[0xb] = (longlong)param_1 + 100;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  local_c = *(int *)(lVar2 + 0x568);
  local_18 = *(int **)(lVar2 + 0x558);
  local_10 = local_c + 0x1fU >> 5;
  if (local_c == 0) {
    local_18 = &local_c;
  }
  param_1[0xb] = (longlong)local_18;
  *(uint *)(param_1 + 0xc) = local_10;
  *(int *)((longlong)param_1 + 100) = local_c;
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
}



// FUNCTION 146f351a4 FUN_146f351a4 body=159 status=ok
// SIG undefined FUN_146f351a4(void)

void FUN_146f351a4(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar2 = *(int *)(*(longlong *)(param_1 + 8) + 0x590);
  lVar1 = (longlong)&local_20 + 4;
  local_20 = CONCAT44(iVar2,iVar2 + 0x1fU >> 5);
  local_28 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x580);
  if (iVar2 == 0) {
    local_28 = lVar1;
  }
  *(longlong *)(param_1 + 0x48) = local_28;
  *(undefined8 *)(param_1 + 0x50) = local_20;
  FUN_142a887bc(param_1);
  local_20 = 0;
  *(longlong *)(param_1 + 0x48) = lVar1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
  local_28 = lVar1;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f35244 FUN_146f35244 body=402 status=ok
// SIG undefined FUN_146f35244(void)

void FUN_146f35244(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  int *local_58;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 8);
  local_4c = *(int *)(lVar1 + 0x590);
  local_58 = *(int **)(lVar1 + 0x580);
  local_50 = local_4c + 0x1fU >> 5;
  if (local_4c == 0) {
    local_58 = &local_4c;
  }
  *(int **)(param_1 + 0x48) = local_58;
  *(uint *)(param_1 + 0x50) = local_50;
  *(int *)(param_1 + 0x54) = local_4c;
  if (*(char *)(lVar1 + 0x1260) == '\x01') {
    uVar3 = *(undefined8 *)(lVar1 + 0x1240);
  }
  else {
    uVar3 = 0;
  }
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  uVar4 = 0xffffffff >> (-*(char *)((longlong)param_2 + 0xc) & 0x1fU);
  uVar7 = *(uint *)(param_2 + 1);
  uVar9 = (ulonglong)uVar7;
  lVar1 = *param_2;
  if ((DAT_14c998208 == '\x01') && (0 < DAT_14c75f468 || DAT_14c9997b0 != '\0')) {
    if (uVar9 != 0) {
      local_60 = (ulonglong)(uVar7 - 1);
      uVar8 = 0;
      iVar5 = 0;
      do {
        uVar7 = 0xffffffff;
        if (uVar8 == local_60) {
          uVar7 = uVar4;
        }
        uVar7 = uVar7 & *(uint *)(lVar1 + uVar8 * 4);
        iVar6 = iVar5;
        if (uVar7 != 0) {
          do {
            if ((uVar7 & 1) != 0) {
              FUN_142a888e6(param_1,iVar6);
            }
            bVar2 = 1 < uVar7;
            uVar7 = uVar7 >> 1;
            iVar6 = iVar6 + 1;
          } while (bVar2);
        }
        uVar8 = uVar8 + 1;
        iVar5 = iVar5 + 0x20;
      } while (uVar8 != uVar9);
    }
  }
  else if (uVar9 != 0) {
    local_60 = (ulonglong)(uVar7 - 1);
    uVar8 = 0;
    iVar5 = 0;
    do {
      uVar7 = 0xffffffff;
      if (uVar8 == local_60) {
        uVar7 = uVar4;
      }
      uVar7 = uVar7 & *(uint *)(lVar1 + uVar8 * 4);
      iVar6 = iVar5;
      if (uVar7 != 0) {
        do {
          if ((uVar7 & 1) != 0) {
            FUN_142a887bc(param_1,iVar6);
          }
          bVar2 = 1 < uVar7;
          uVar7 = uVar7 >> 1;
          iVar6 = iVar6 + 1;
        } while (bVar2);
      }
      uVar8 = uVar8 + 1;
      iVar5 = iVar5 + 0x20;
    } while (uVar8 != uVar9);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f353d8 FUN_146f353d8 body=619 status=ok
// SIG undefined FUN_146f353d8(void)

void FUN_146f353d8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_118 [32];
  longlong local_f8;
  uint local_ec;
  int *local_e8;
  int *local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  longlong *local_c8;
  longlong local_c0;
  int *local_b8;
  uint local_b0;
  int local_ac;
  int *local_a8;
  uint local_a0;
  int local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined8 uStack_84;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(longlong *)(param_1 + 0x150) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28);
    local_9c = *(int *)(lVar1 + 0x5f0);
    local_a8 = *(int **)(lVar1 + 0x5e0);
    local_a0 = local_9c + 0x1fU >> 5;
    if (local_9c == 0) {
      local_a8 = &local_9c;
    }
    local_ac = *(int *)(lVar1 + 0x10c0);
    local_b8 = *(int **)(lVar1 + 0x10b0);
    local_b0 = local_ac + 0x1fU >> 5;
    if (local_ac == 0) {
      local_b8 = &local_ac;
    }
    local_ec = 0xffffffff >> (-(char)local_9c & 0x1fU);
    local_e8 = local_b8;
    local_e0 = local_a8;
    if (0x1f < local_9c + 0x1fU) {
      local_c0 = lVar1 + 0x1080;
      local_d0 = (ulonglong)(local_a0 - 1);
      local_c8 = (longlong *)(param_1 + 0x170);
      uVar8 = 0;
      iVar12 = 0;
      local_d8 = (ulonglong)local_a0;
      do {
        uVar10 = 0xffffffff;
        if (uVar8 == local_d0) {
          uVar10 = local_ec;
        }
        uVar10 = uVar10 & (local_e8[uVar8] | local_e0[uVar8]);
        iVar9 = iVar12;
        if (uVar10 != 0) {
          do {
            if ((uVar10 & 1) != 0) {
              lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x3d0) + (longlong)(iVar9 / 100) * 8);
              lVar11 = (longlong)(iVar9 % 100) * 0x38;
              lVar3 = *(longlong *)(lVar2 + 0x18 + lVar11);
              if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x12) & 0x10) != 0)) {
                uStack_88 = 0;
                uStack_84 = 0;
                local_98 = 0;
                uStack_90 = 0;
                uStack_8c = 0;
                local_70 = *(undefined8 *)
                            (*(longlong *)
                              (*(longlong *)(lVar1 + 0x430) + (longlong)(iVar9 / 100) * 8) +
                            (longlong)(iVar9 % 100) * 8);
                local_68 = *(undefined8 *)(lVar2 + lVar11);
                pcVar4 = *(code **)(param_1 + 0x150);
                plVar7 = *(longlong **)(param_1 + 0x160);
                if (*(longlong **)(param_1 + 0x160) == (longlong *)0x0) {
                  plVar7 = local_c8;
                }
                uVar6 = (**(code **)(*plVar7 + 8))();
                local_f8 = (longlong)&uStack_84 + 4;
                (*pcVar4)(uVar6,&local_68,&local_70,&local_98);
                FUN_146f54004(local_c0,iVar9,&local_98);
              }
            }
            bVar5 = 1 < uVar10;
            uVar10 = uVar10 >> 1;
            iVar9 = iVar9 + 1;
          } while (bVar5);
        }
        uVar8 = uVar8 + 1;
        iVar12 = iVar12 + 0x20;
      } while (uVar8 != local_d8);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f35644 FUN_146f35644 body=229 status=ok
// SIG undefined FUN_146f35644(void)

void FUN_146f35644(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  ulonglong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = &local_50;
  local_50 = 0;
  local_58 = 0x100000000;
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar1 = *param_1;
    lVar6 = 0;
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar6);
      if ((*(byte *)((longlong)plVar2 + 9) & 8) != 0) {
        local_58 = local_58 & 0xffffffff00000000;
        (**(code **)(*plVar2 + 0x10))(plVar2,&local_60);
        if (((int)local_58 != 0) && (lVar3 = *local_60, lVar3 != lVar5 && lVar3 != 0)) {
          local_68 = *param_2;
          FUN_146f22f92(lVar3,&local_68);
          lVar5 = lVar3;
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f3572a FUN_146f3572a body=828 status=ok
// SIG undefined FUN_146f3572a(void)

undefined8 FUN_146f3572a(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined4 uVar13;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  undefined4 *local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  uint uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar8 = local_90;
  if ((DAT_14c75f46e & *(byte *)(param_1 + 0x598)) != 0) {
    lVar3 = *(longlong *)(param_2 + 0x18);
    uVar9 = (uint)lVar3;
    iVar12 = (int)((ulonglong)lVar3 >> 0x20);
    uVar5 = (uint)((ulonglong)lVar3 >> 0x10);
    if (*(int *)(param_1 + 0x248) != *(int *)(param_1 + 0x274)) {
      lVar10 = param_1 + 0x278;
      if (*(longlong *)(param_1 + 0x280) != 0) {
        lVar10 = *(longlong *)(param_1 + 0x280);
      }
      iVar6 = *(int *)(lVar10 + (ulonglong)
                                (*(int *)(param_1 + 0x288) - 1U &
                                iVar12 + (uVar9 << 0x10 | uVar9 & 0xffff) +
                                (uVar5 << 0x13 | uVar5 & 0xffff) + ((uVar9 & 0xffff) >> 4)) * 4);
      if (iVar6 != -1) {
        do {
          lVar10 = *(longlong *)(param_1 + 0x240) + (longlong)iVar6 * 0x1c;
          if (*(longlong *)(*(longlong *)(param_1 + 0x240) + (longlong)iVar6 * 0x1c) == lVar3) {
            if ((undefined4 *)(lVar10 + 8) != (undefined4 *)0x0 && lVar10 != 0) {
              *param_3 = *(undefined4 *)(lVar10 + 8);
              goto LAB_146f35a2a;
            }
            break;
          }
          iVar6 = *(int *)(lVar10 + 0x14);
        } while (iVar6 != -1);
      }
    }
    if (*(int *)(param_1 + 0x298) != *(int *)(param_1 + 0x2c4)) {
      lVar10 = param_1 + 0x2c8;
      if (*(longlong *)(param_1 + 0x2d0) != 0) {
        lVar10 = *(longlong *)(param_1 + 0x2d0);
      }
      iVar12 = *(int *)(lVar10 + (ulonglong)
                                 (*(int *)(param_1 + 0x2d8) - 1U &
                                 iVar12 + (uVar9 << 0x10 | uVar9 & 0xffff) +
                                 (uVar5 << 0x13 | uVar5 & 0xffff) + ((uVar9 & 0xffff) >> 4)) * 4);
      if (iVar12 != -1) {
        do {
          lVar10 = *(longlong *)(param_1 + 0x290) + (longlong)iVar12 * 0x10;
          if (*(longlong *)(*(longlong *)(param_1 + 0x290) + (longlong)iVar12 * 0x10) == lVar3) {
            if (lVar10 != 0) goto LAB_146f35818;
            break;
          }
          iVar12 = *(int *)(lVar10 + 8);
        } while (iVar12 != -1);
      }
    }
    plVar1 = (longlong *)(param_1 + 0x1f0);
    lVar3 = param_1 + 0x200;
    local_80 = 0x100000000;
    local_70 = 0xffffffff;
    uStack_68 = 0;
    uStack_78 = lVar3;
    if (*(int *)(param_1 + 0x218) == 0) {
      iVar12 = 0;
    }
    else {
      FUN_1449c0562(&local_80);
      iVar12 = *(int *)(param_1 + 0x218);
    }
    uStack_88 = CONCAT44(uStack_64,uStack_68);
    local_90 = local_70;
    uVar8 = local_90;
    local_a0 = (undefined4)local_80;
    uStack_9c = local_80._4_4_;
    uStack_98 = (undefined4)uStack_78;
    uStack_94 = uStack_78._4_4_;
    local_90._4_4_ = (int)((ulonglong)local_70 >> 0x20);
    local_a8 = plVar1;
    if ((local_90._4_4_ != iVar12) || (uStack_78 != lVar3)) {
      uVar13 = 0;
      local_b8 = 0;
      lVar10 = 0;
      iVar6 = local_90._4_4_;
      local_b0 = param_3;
      local_90 = uVar8;
      do {
        lVar4 = *local_a8;
        lVar7 = FUN_14479d2ce(lVar4 + (longlong)iVar6 * 0x1c + 0xc);
        if (lVar7 != 0) {
          iVar2 = *(int *)(lVar7 + 0x38);
          lVar11 = (longlong)iVar2;
          if (((iVar2 <= *(int *)(param_2 + 0x38)) &&
              (*(longlong **)(*(longlong *)(param_2 + 0x30) + lVar11 * 8) ==
               (longlong *)(lVar7 + 0x30))) &&
             ((lVar10 == 0 ||
              ((*(int *)(lVar10 + 0x38) <= iVar2 &&
               (lVar11 = lVar10 + 0x30,
               *(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
               lVar11)))))) {
            uVar13 = *(undefined4 *)(lVar4 + (longlong)iVar6 * 0x1c + 8);
            local_b8 = CONCAT71((int7)((ulonglong)lVar11 >> 8),1);
            lVar10 = lVar7;
          }
        }
        local_90 = CONCAT44(local_90._4_4_,(uint)local_90 & ~uStack_9c);
        FUN_1449c0562(&local_a0);
        iVar6 = local_90._4_4_;
      } while (local_a8 != plVar1 ||
               (CONCAT44(uStack_94,uStack_98) != lVar3 || local_90._4_4_ != iVar12));
      uVar8 = local_90;
      if ((local_b8 & 1) != 0) {
        *local_b0 = uVar13;
LAB_146f35a2a:
        uVar8 = 1;
        goto LAB_146f3581a;
      }
    }
  }
LAB_146f35818:
  local_90 = uVar8;
  uVar8 = 0;
LAB_146f3581a:
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 146f35a68 FUN_146f35a68 body=428 status=ok
// SIG undefined FUN_146f35a68(void)

void FUN_146f35a68(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  byte bVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined1 auStack_b8 [32];
  longlong local_98;
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
  plVar1 = (longlong *)(param_1 + 0x1f0);
  lVar2 = param_1 + 0x200;
  local_68 = (undefined2 *)0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x218) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar7 = *(int *)(param_1 + 0x218);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (int)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 == iVar7) && (uStack_60 == lVar2)) {
    bVar8 = 0;
  }
  else {
    bVar8 = 0;
    local_98 = param_1;
    do {
      lVar6 = *local_90;
      lVar4 = (longlong)iStack_74;
      lVar9 = lVar6 + lVar4 * 0x1c + 0xc;
      cVar3 = FUN_144729dda(lVar9);
      if (cVar3 == '\0') {
        FUN_1400021e4(lVar6 + lVar4 * 0x1c,&local_68);
        puVar10 = &DAT_149dfb77a;
        if ((int)uStack_60 != 0) {
          puVar10 = local_68;
        }
        uVar5 = FUN_144a797b2();
        lVar6 = FUN_140277b32(uVar5,0,puVar10,1);
        if (local_68 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        bVar8 = bVar8 | lVar6 == 0;
        FUN_14485c47a(lVar9,lVar6);
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
      param_1 = local_98;
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar7));
  }
  *(byte *)(param_1 + 0x599) = bVar8;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f35c16 FUN_146f35c16 body=305 status=ok
// SIG undefined FUN_146f35c16(void)

ulonglong * FUN_146f35c16(longlong param_1,ulonglong *param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  ulonglong *local_40;
  ulonglong *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = param_3;
  if (*(int *)(param_1 + 0x198) != *(int *)(param_1 + 0x1c4)) {
    uVar2 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar3 = param_1 + 0x1c8;
    if (*(longlong *)(param_1 + 0x1d0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x1d0);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x1d8) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar4 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 400) + (longlong)iVar4 * 0x18);
        if (*puVar1 == param_3) {
          if ((puVar1 != (ulonglong *)0x0) && (puVar1 + 1 != (ulonglong *)0x0)) {
            *param_2 = puVar1[1];
            goto LAB_146f35d24;
          }
          break;
        }
        iVar4 = (int)puVar1[2];
      } while (iVar4 != -1);
    }
  }
  FUN_14010318a(param_3,&local_40,0);
  iVar4 = (int)local_38 + -1;
  if ((int)local_38 == 0) {
    iVar4 = 0;
  }
  FUN_1446f82e2(param_2,iVar4,local_40,1);
  if (local_40 != (ulonglong *)0x0) {
    FUN_1400020a8();
  }
  local_40 = &local_48;
  local_38 = param_2;
  FUN_146f3da06((longlong *)(param_1 + 400),local_2c);
LAB_146f35d24:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f35d48 FUN_146f35d48 body=330 status=ok
// SIG undefined FUN_146f35d48(void)

undefined1 FUN_146f35d48(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = (longlong *)FUN_145b0a4d4();
  lVar4 = plVar3[0x22];
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 1000))(plVar3);
    lVar4 = plVar3[0x22];
  }
  uVar2 = 1;
  if (((*(char *)(lVar4 + 0x78) == '\0') && (uVar2 = 0, param_2 != 0)) &&
     (*(int *)(param_1 + 0x484) < *(int *)(param_1 + 0x458))) {
    do {
      FUN_146f35c16(param_1,&local_30,param_2);
      if (*(int *)(param_1 + 0x458) != *(int *)(param_1 + 0x484)) {
        uVar1 = (uint)((ulonglong)local_30 >> 0x10);
        uVar5 = (uint)local_30 & 0xffff;
        lVar4 = *(longlong *)(param_1 + 0x490);
        if (*(longlong *)(param_1 + 0x490) == 0) {
          lVar4 = param_1 + 0x488;
        }
        iVar6 = *(int *)(lVar4 + (ulonglong)
                                 (*(int *)(param_1 + 0x498) - 1U &
                                 (int)((ulonglong)local_30 >> 0x20) +
                                 ((uint)local_30 << 0x10 | uVar5) + (uVar1 << 0x13 | uVar1 & 0xffff)
                                 + (uVar5 >> 4)) * 4);
        if (iVar6 != -1) {
          do {
            plVar3 = (longlong *)(*(longlong *)(param_1 + 0x450) + (longlong)iVar6 * 0x14);
            if (*plVar3 == local_30) {
              if (plVar3 + 1 != (longlong *)0x0 && plVar3 != (longlong *)0x0) {
                uVar2 = (undefined1)plVar3[1];
                goto LAB_146f35d95;
              }
              break;
            }
            iVar6 = *(int *)((longlong)plVar3 + 0xc);
          } while (iVar6 != -1);
        }
      }
      param_2 = *(longlong *)(param_2 + 0x40);
      uVar2 = 0;
    } while (param_2 != 0);
  }
LAB_146f35d95:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 146f35ec6 FUN_146f35ec6 body=32 status=ok
// SIG undefined FUN_146f35ec6(void)

undefined8 FUN_146f35ec6(undefined8 param_1,undefined8 param_2)

{
  FUN_140002266(param_2,L"ConnectionId:%u");
  return param_2;
}



// FUNCTION 146f35ee6 FUN_146f35ee6 body=75 status=ok
// SIG undefined FUN_146f35ee6(void)

void FUN_146f35ee6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_146f3572a(param_1,*(undefined8 *)(param_2 + 0x10),&local_14);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_14);
}



// FUNCTION 146f35f32 FUN_146f35f32 body=693 status=ok
// SIG undefined FUN_146f35f32(void)

void FUN_146f35f32(longlong *param_1)

{
  longlong lVar1;
  uint *puVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  char cVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_e8 [32];
  int *local_c8;
  int *local_c0;
  longlong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  int *local_a0;
  uint local_98;
  int local_94;
  int *local_90;
  uint local_88;
  int local_84;
  longlong local_80;
  int local_78;
  ulonglong local_70;
  int iVar7;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar1 = *(longlong *)(param_1[5] + 0x28);
  local_84 = *(int *)(lVar1 + 0x228);
  local_90 = *(int **)(lVar1 + 0x218);
  local_88 = local_84 + 0x1fU >> 5;
  if (local_84 == 0) {
    local_90 = &local_84;
  }
  local_94 = *(int *)(lVar1 + 0x2d8);
  local_a0 = *(int **)(lVar1 + 0x2c8);
  local_98 = local_94 + 0x1fU >> 5;
  if (local_94 == 0) {
    local_a0 = &local_94;
  }
  cVar8 = (char)local_84;
  local_c8 = local_a0;
  local_c0 = local_90;
  if (0x1f < local_84 + 0x1fU) {
    local_a8 = (ulonglong)(local_88 - 1);
    local_b8 = lVar1 + 0x460;
    uVar13 = 0;
    uVar11 = 0;
    local_b0 = (ulonglong)local_88;
    do {
      uVar14 = 0xffffffff;
      if (uVar13 == local_a8) {
        uVar14 = 0xffffffff >> (-cVar8 & 0x1fU);
      }
      uVar14 = uVar14 & local_c0[uVar13] & ~local_c8[uVar13];
      uVar10 = uVar11;
      if (uVar14 != 0) {
        do {
          if (((uVar14 & 1) != 0) &&
             (lVar15 = (longlong)(int)uVar10,
             *(longlong *)
              (*(longlong *)(*(longlong *)(lVar1 + 0x430) + (longlong)((int)uVar10 / 100) * 8) +
              (longlong)((int)uVar10 % 100) * 8) != 0)) {
            fVar16 = (float)(**(code **)(*param_1 + 0x368))(param_1);
            if (fVar16 <= 0.0) {
              bVar4 = 0;
            }
            else {
              fVar17 = 0.001;
              if (0.001 <= fVar16) {
                fVar17 = fVar16;
              }
              iVar7 = (int)(longlong)(*(float *)(param_1 + 0x3c) / fVar17);
              uVar6 = iVar7 - 1;
              if (iVar7 == 0) {
                uVar6 = 0;
              }
              if (0xfe < uVar6) {
                uVar6 = 0xff;
              }
              bVar4 = (byte)uVar6;
            }
            puVar2 = (uint *)param_1[0x3d];
            uVar6 = *puVar2;
            if (*puVar2 < uVar10) {
              uVar6 = uVar10;
            }
            *puVar2 = uVar6;
            *(byte *)(*(longlong *)(puVar2 + 0x42) + lVar15) = bVar4;
            bVar5 = *(char *)((longlong)puVar2 + (ulonglong)bVar4 + 8) - 1;
            *(byte *)((longlong)puVar2 + (ulonglong)bVar4 + 8) = bVar5;
            *(char *)(*(longlong *)(puVar2 + 0x46) + lVar15) =
                 (char)(~((uint)bVar5 + puVar2[1]) % (bVar4 + 1));
            FUN_146f1b984(local_b8,&local_80,uVar10);
            if ((longlong)local_78 != 0) {
              lVar9 = 0;
              do {
                uVar6 = *(uint *)(local_80 + lVar9);
                puVar2 = (uint *)param_1[0x3d];
                uVar12 = *puVar2;
                if (*puVar2 < uVar6) {
                  uVar12 = uVar6;
                }
                *puVar2 = uVar12;
                *(undefined1 *)(*(longlong *)(puVar2 + 0x42) + (longlong)(int)uVar6) =
                     *(undefined1 *)(*(longlong *)(puVar2 + 0x42) + lVar15);
                *(undefined1 *)(*(longlong *)(puVar2 + 0x46) + (longlong)(int)uVar6) =
                     *(undefined1 *)(*(longlong *)(puVar2 + 0x46) + lVar15);
                lVar9 = lVar9 + 4;
              } while ((longlong)local_78 * 4 != lVar9);
            }
          }
          bVar3 = 1 < uVar14;
          uVar14 = uVar14 >> 1;
          uVar10 = uVar10 + 1;
        } while (bVar3);
      }
      uVar13 = uVar13 + 1;
      uVar11 = uVar11 + 0x20;
    } while (uVar13 != local_b0);
  }
  if ((local_70 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f361e8 FUN_146f361e8 body=346 status=ok
// SIG undefined FUN_146f361e8(void)

void FUN_146f361e8(longlong param_1,undefined8 param_2,float param_3)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  float fVar9;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28);
  uVar3 = FUN_146f18900(lVar6 + 0x160);
  if (uVar3 != 0) {
    uVar7 = 0;
    if (0.0 < param_3) {
      fVar9 = 0.001;
      if (0.001 <= param_3) {
        fVar9 = param_3;
      }
      iVar4 = (int)(longlong)(*(float *)(param_1 + 0x1e0) / fVar9);
      uVar7 = iVar4 - 1;
      if (iVar4 == 0) {
        uVar7 = 0;
      }
      if (0xfe < uVar7) {
        uVar7 = 0xff;
      }
    }
    puVar1 = *(uint **)(param_1 + 0x1e8);
    uVar5 = *puVar1;
    if (*puVar1 < uVar3) {
      uVar5 = uVar3;
    }
    *puVar1 = uVar5;
    lVar8 = (longlong)(int)uVar3;
    *(char *)(*(longlong *)(puVar1 + 0x42) + lVar8) = (char)uVar7;
    uVar7 = uVar7 & 0xff;
    bVar2 = *(char *)((longlong)puVar1 + (ulonglong)uVar7 + 8) - 1;
    *(byte *)((longlong)puVar1 + (ulonglong)uVar7 + 8) = bVar2;
    *(char *)(*(longlong *)(puVar1 + 0x46) + lVar8) =
         (char)(~((uint)bVar2 + puVar1[1]) % (uVar7 + 1));
    FUN_146f1b984(lVar6 + 0x460);
    if ((longlong)local_48 != 0) {
      lVar6 = 0;
      do {
        uVar3 = *(uint *)(local_50 + lVar6);
        puVar1 = *(uint **)(param_1 + 0x1e8);
        uVar7 = *puVar1;
        if (*puVar1 < uVar3) {
          uVar7 = uVar3;
        }
        *puVar1 = uVar7;
        *(undefined1 *)(*(longlong *)(puVar1 + 0x42) + (longlong)(int)uVar3) =
             *(undefined1 *)(*(longlong *)(puVar1 + 0x42) + lVar8);
        *(undefined1 *)(*(longlong *)(puVar1 + 0x46) + (longlong)(int)uVar3) =
             *(undefined1 *)(*(longlong *)(puVar1 + 0x46) + lVar8);
        lVar6 = lVar6 + 4;
      } while ((longlong)local_48 * 4 != lVar6);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f36344 FUN_146f36344 body=411 status=ok
// SIG undefined FUN_146f36344(void)

undefined8 * FUN_146f36344(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  wchar_t *_Str;
  undefined2 *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined4 local_80;
  int local_6c;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58 [3];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_2 = 0;
  param_2[1] = 0;
  if ((longlong)*(int *)(param_3 + 1) != 0) {
    puVar5 = (undefined8 *)*param_3;
    lVar6 = (longlong)*(int *)(param_3 + 1) << 4;
    do {
      local_80 = 0xffffffff;
      local_88 = local_88 & 0xffffffff00000000;
      iVar2 = FUN_1447ee042(puVar5,L"ConnectionId=",0xd,1);
      if (iVar2 != -1) {
        if (puVar5 != (undefined8 *)0x0) {
          local_58[0] = 0;
          local_58[1] = 0;
          if (*(int *)(puVar5 + 1) == 0) {
            puVar3 = &DAT_149dfb77a;
          }
          else {
            puVar3 = (undefined2 *)*puVar5;
          }
          local_88 = 0;
          cVar1 = FUN_14063337c(puVar3,L"ConnectionId=",local_58,0);
          if (cVar1 != '\0') {
            local_68 = 0;
            uStack_60 = 0;
            FUN_1403de9f2(local_58,&local_68,&DAT_149e06196,1);
            lVar6 = local_68;
            lVar7 = (longlong)(int)uStack_60;
            uVar4 = 0;
            if (lVar7 != 0) {
              lVar8 = 0;
              do {
                _Str = L"";
                if (*(int *)(lVar6 + 8 + lVar8) != 0) {
                  _Str = *(wchar_t **)(lVar6 + lVar8);
                }
                iVar2 = _wtoi(_Str);
                if (-1 < iVar2) {
                  local_6c = iVar2;
                  FUN_141733646(param_2,&local_6c);
                }
                lVar8 = lVar8 + 0x10;
              } while (lVar7 * 0x10 != lVar8);
              uVar4 = (int)uStack_60;
            }
            FUN_1447a1747(local_68,uVar4);
            if (local_68 != 0) {
              FUN_1400020a8();
            }
          }
          if (local_58[0] != 0) {
            FUN_1400020a8();
          }
        }
        break;
      }
      puVar5 = puVar5 + 2;
      lVar6 = lVar6 + -0x10;
    } while (lVar6 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f364e0 FUN_146f364e0 body=307 status=ok
// SIG undefined FUN_146f364e0(void)

uint FUN_146f364e0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  
  if ((longlong)(int)param_1[1] == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = *param_1;
    lVar4 = (longlong)(int)param_1[1] << 4;
    do {
      iVar1 = FUN_1447ee042(lVar2,L"WithSubObjects",0xe,1,0,0xffffffff);
      if (iVar1 != -1) goto LAB_146f36541;
      lVar2 = lVar2 + 0x10;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
    lVar2 = 0;
LAB_146f36541:
    bVar5 = lVar2 != 0;
    uVar3 = (uint)bVar5;
    if ((longlong)(int)param_1[1] != 0) {
      lVar2 = *param_1;
      lVar4 = (longlong)(int)param_1[1] << 4;
      do {
        iVar1 = FUN_1447ee042(lVar2,L"SortByClass",0xb,1,0,0xffffffff);
        if (iVar1 != -1) {
          if (lVar2 != 0) {
            return bVar5 | 0x100;
          }
          break;
        }
        lVar2 = lVar2 + 0x10;
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != 0);
    }
    if ((longlong)(int)param_1[1] != 0) {
      lVar2 = *param_1;
      lVar4 = (longlong)(int)param_1[1] << 4;
      do {
        iVar1 = FUN_1447ee042(lVar2,L"SortByNetRefHandle",0x12,1,0,0xffffffff);
        if (iVar1 != -1) {
          if (lVar2 != 0) {
            return bVar5 + 0x200;
          }
          return (uint)bVar5;
        }
        lVar2 = lVar2 + 0x10;
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != 0);
    }
  }
  return uVar3;
}



// FUNCTION 146f36613 FUN_146f36613 body=337 status=ok
// SIG undefined FUN_146f36613(void)

void FUN_146f36613(longlong *param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  bool bVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined8 uVar14;
  
  uVar2 = *(uint *)(param_2 + 1);
  iVar11 = 0;
  cVar1 = *(char *)((longlong)param_2 + 0xc);
  if ((ulonglong)uVar2 != 0) {
    lVar4 = *param_2;
    uVar10 = 0;
    do {
      uVar12 = 0xffffffff;
      if (uVar10 == uVar2 - 1) {
        uVar12 = 0xffffffff >> (-cVar1 & 0x1fU);
      }
      uVar12 = uVar12 & *(uint *)(lVar4 + uVar10 * 4);
      iVar13 = iVar11;
      if (uVar12 != 0) {
        do {
          if ((uVar12 & 1) != 0) {
            lVar5 = *(longlong *)
                     (*(longlong *)(*(longlong *)(param_3 + 0x2d0) + (longlong)(iVar13 / 100) * 8) +
                     (longlong)(iVar13 % 100) * 8);
            if (lVar5 == 0) {
              uVar14 = 0;
            }
            else {
              uVar14 = *(undefined8 *)(lVar5 + 0x10);
            }
            uVar6 = *(undefined8 *)
                     (*(longlong *)(*(longlong *)(param_3 + 0x270) + (longlong)(iVar13 / 100) * 8) +
                     (longlong)(iVar13 % 100) * 0x38);
            iVar3 = (int)param_1[1];
            *(uint *)(param_1 + 1) = iVar3 + 1U;
            if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
              FUN_146f3f288(param_1,iVar3);
            }
            lVar7 = *param_1;
            lVar9 = (longlong)iVar3 * 0x20;
            *(int *)(lVar7 + lVar9) = iVar13;
            *(undefined8 *)(lVar7 + 8 + lVar9) = uVar6;
            *(longlong *)(lVar7 + 0x10 + lVar9) = lVar5;
            *(undefined8 *)(lVar7 + 0x18 + lVar9) = uVar14;
          }
          bVar8 = 1 < uVar12;
          uVar12 = uVar12 >> 1;
          iVar13 = iVar13 + 1;
        } while (bVar8);
      }
      uVar10 = uVar10 + 1;
      iVar11 = iVar11 + 0x20;
    } while (uVar10 != uVar2);
  }
  return;
}



// FUNCTION 146f36764 FUN_146f36764 body=1451 status=ok
// SIG undefined FUN_146f36764(void)

void FUN_146f36764(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  int iVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  uint uVar24;
  ulonglong uVar25;
  undefined8 *puVar26;
  bool bVar27;
  float fVar28;
  undefined1 auStack_3a8 [40];
  longlong *local_380;
  int local_374;
  undefined8 *local_370;
  longlong local_368;
  longlong local_360;
  undefined4 local_358 [188];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  iVar13 = (int)param_1[1];
  if (1 < (longlong)iVar13) {
    lVar2 = *param_1;
    memset(local_358,0,0x2f0);
    local_360 = (longlong)iVar13 * 0x20 + lVar2 + -0x20;
    local_368 = lVar2;
    fVar28 = logf((float)iVar13);
    local_358[0] = (int)(longlong)(fVar28 + fVar28);
    plVar15 = &local_368;
    do {
      puVar21 = (undefined8 *)*plVar15;
      puVar19 = (undefined8 *)plVar15[1];
      iVar13 = (int)plVar15[2];
      iVar12 = (int)((ulonglong)((longlong)puVar19 - (longlong)puVar21) >> 5);
      uVar24 = iVar12 + 1;
      puVar22 = puVar19;
      puVar26 = puVar21;
      local_380 = plVar15;
      if (iVar13 != 0) {
LAB_146f3680a:
        if (8 < (int)uVar24) {
          uVar25 = (ulonglong)(uVar24 >> 1);
          uVar3 = puVar21[uVar25 * 4];
          uVar4 = (puVar21 + uVar25 * 4)[1];
          local_58 = puVar21[uVar25 * 4 + 2];
          uStack_50 = (puVar21 + uVar25 * 4 + 2)[1];
          uVar5 = *puVar21;
          uVar6 = puVar21[1];
          uVar7 = puVar21[3];
          puVar21[uVar25 * 4 + 2] = puVar21[2];
          (puVar21 + uVar25 * 4 + 2)[1] = uVar7;
          puVar21[uVar25 * 4] = uVar5;
          (puVar21 + uVar25 * 4)[1] = uVar6;
          local_68._0_4_ = (undefined4)uVar3;
          local_68._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          uStack_60._0_4_ = (undefined4)uVar4;
          uStack_60._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          puVar21[2] = local_58;
          puVar21[3] = uStack_50;
          *(undefined4 *)puVar21 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar21 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar21 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar21 + 0xc) = uStack_60._4_4_;
          puVar18 = puVar22 + 4;
          puVar20 = puVar21;
          local_374 = iVar13;
          local_370 = puVar26;
          local_68 = uVar3;
          uStack_60 = uVar4;
          do {
            puVar10 = puVar20 + 4;
            puVar23 = puVar20 + 4;
            do {
              puVar20 = puVar23;
              puVar26 = puVar10;
              if (puVar22 < puVar20) break;
              cVar11 = FUN_142a9028e(puVar21,puVar20);
              puVar10 = puVar26 + 4;
              puVar23 = puVar20 + 4;
            } while (cVar11 == '\0');
            puVar10 = puVar18 + -8;
            do {
              puVar23 = puVar18;
              puVar14 = puVar10;
              puVar18 = puVar23 + -4;
              if (puVar18 <= puVar21) break;
              cVar11 = FUN_142a9028e(puVar18,puVar21);
              puVar10 = puVar14 + -4;
            } while (cVar11 == '\0');
            if (puVar18 < puVar20) goto LAB_146f3690f;
            uVar3 = *puVar20;
            uVar4 = puVar20[1];
            local_58 = puVar20[2];
            uStack_50 = puVar20[3];
            uVar5 = *puVar18;
            uVar6 = puVar23[-3];
            uVar7 = puVar23[-1];
            puVar20[2] = puVar23[-2];
            puVar20[3] = uVar7;
            *puVar20 = uVar5;
            puVar20[1] = uVar6;
            local_68._0_4_ = (undefined4)uVar3;
            local_68._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
            uStack_60._0_4_ = (undefined4)uVar4;
            uStack_60._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
            puVar23[-2] = local_58;
            puVar23[-1] = uStack_50;
            *(undefined4 *)puVar18 = (undefined4)local_68;
            *(undefined4 *)((longlong)puVar23 + -0x1c) = local_68._4_4_;
            *(undefined4 *)(puVar23 + -3) = (undefined4)uStack_60;
            *(undefined4 *)((longlong)puVar23 + -0x14) = uStack_60._4_4_;
            local_68 = uVar3;
            uStack_60 = uVar4;
          } while( true );
        }
        for (; plVar15 = local_380, puVar26 = puVar21, puVar19 = puVar21, puVar21 < puVar22;
            puVar22 = puVar22 + -4) {
          while (puVar18 = puVar26, puVar19 = puVar19 + 4, puVar19 <= puVar22) {
            cVar11 = FUN_142a9028e(puVar18,puVar19);
            puVar26 = puVar19;
            if (cVar11 == '\0') {
              puVar26 = puVar18;
            }
          }
          local_68 = *puVar18;
          uStack_60 = puVar18[1];
          local_58 = puVar18[2];
          uStack_50 = puVar18[3];
          uVar6 = local_68;
          uVar7 = uStack_60;
          uVar3 = *puVar22;
          uVar4 = puVar22[1];
          uVar5 = puVar22[3];
          puVar18[2] = puVar22[2];
          puVar18[3] = uVar5;
          *puVar18 = uVar3;
          puVar18[1] = uVar4;
          local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
          uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
          puVar22[2] = local_58;
          puVar22[3] = uStack_50;
          *(undefined4 *)puVar22 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar22 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar22 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar22 + 0xc) = uStack_60._4_4_;
          local_68 = uVar6;
          uStack_60 = uVar7;
        }
        goto LAB_146f36cd0;
      }
LAB_146f369f6:
      plVar15 = local_380;
      if (uVar24 != 0) {
        iVar13 = (iVar12 - (iVar12 + -1 >> 0x1f)) + -1 >> 1;
        iVar12 = iVar13;
joined_r0x000146f36a1b:
        do {
          iVar17 = iVar13 * 2 + 1;
          if (iVar17 < (int)uVar24) {
            iVar16 = iVar13 * 2 + 2;
            if ((iVar16 < (int)uVar24) &&
               (cVar11 = FUN_142a9028e(puVar21 + (longlong)iVar16 * 4,puVar21 + (longlong)iVar17 * 4
                                      ), cVar11 == '\0')) {
              iVar17 = iVar16;
            }
            puVar19 = puVar21 + (longlong)iVar13 * 4;
            puVar22 = puVar21 + (longlong)iVar17 * 4;
            cVar11 = FUN_142a9028e(puVar19,puVar22);
            if (cVar11 != '\0') {
              local_68 = *puVar19;
              uStack_60 = puVar19[1];
              local_58 = puVar19[2];
              uStack_50 = puVar19[3];
              uVar6 = local_68;
              uVar7 = uStack_60;
              uVar3 = *puVar22;
              uVar4 = puVar22[1];
              uVar5 = puVar22[3];
              puVar19[2] = puVar22[2];
              puVar19[3] = uVar5;
              *puVar19 = uVar3;
              puVar19[1] = uVar4;
              local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
              uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
              puVar22[2] = local_58;
              puVar22[3] = uStack_50;
              *(undefined4 *)puVar22 = (undefined4)local_68;
              *(undefined4 *)((longlong)puVar22 + 4) = local_68._4_4_;
              *(undefined4 *)(puVar22 + 1) = (undefined4)uStack_60;
              *(undefined4 *)((longlong)puVar22 + 0xc) = uStack_60._4_4_;
              iVar13 = iVar17;
              local_68 = uVar6;
              uStack_60 = uVar7;
              goto joined_r0x000146f36a1b;
            }
          }
          bVar27 = iVar12 != 0;
          iVar13 = iVar12 + -1;
          iVar12 = iVar13;
        } while (bVar27);
        plVar15 = local_380;
        if (1 < (int)uVar24) {
          uVar25 = (ulonglong)uVar24 - 1;
          local_68 = *puVar21;
          uStack_60 = puVar21[1];
          local_58 = puVar21[2];
          uStack_50 = puVar21[3];
          uVar8 = local_58;
          uVar9 = uStack_50;
          uVar6 = local_68;
          uVar7 = uStack_60;
          uVar3 = puVar21[uVar25 * 4];
          uVar4 = (puVar21 + uVar25 * 4)[1];
          uVar5 = (puVar21 + uVar25 * 4 + 2)[1];
          puVar21[2] = puVar21[uVar25 * 4 + 2];
          puVar21[3] = uVar5;
          *puVar21 = uVar3;
          puVar21[1] = uVar4;
          local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
          uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          puVar22 = puVar21 + uVar25 * 4 + 2;
          *(undefined4 *)puVar22 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar22 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar22 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar22 + 0xc) = uStack_50._4_4_;
          puVar22 = puVar21 + uVar25 * 4;
          *(undefined4 *)puVar22 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar22 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar22 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar22 + 0xc) = uStack_60._4_4_;
          local_68 = uVar6;
          uStack_60 = uVar7;
          local_58 = uVar8;
          uStack_50 = uVar9;
          if (uVar24 != 2) {
            do {
              iVar13 = 0;
              iVar17 = 1;
              iVar12 = 0;
              do {
                iVar13 = iVar13 + 2;
                iVar16 = iVar17;
                if (((longlong)iVar13 < (longlong)uVar25) &&
                   (cVar11 = FUN_142a9028e(puVar21 + (longlong)iVar13 * 4,
                                           puVar21 + (longlong)iVar17 * 4), cVar11 == '\0')) {
                  iVar16 = iVar13;
                }
                puVar19 = puVar21 + (longlong)iVar12 * 4;
                puVar22 = puVar21 + (longlong)iVar16 * 4;
                cVar11 = FUN_142a9028e(puVar19,puVar22);
                if (cVar11 == '\0') break;
                uVar3 = *puVar19;
                uVar4 = puVar19[1];
                uVar5 = puVar19[2];
                uVar6 = puVar19[3];
                uVar7 = *puVar22;
                uVar8 = puVar22[1];
                uVar9 = puVar22[3];
                puVar19[2] = puVar22[2];
                puVar19[3] = uVar9;
                *puVar19 = uVar7;
                puVar19[1] = uVar8;
                local_68._0_4_ = (undefined4)uVar3;
                local_68._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
                uStack_60._0_4_ = (undefined4)uVar4;
                uStack_60._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
                local_58._0_4_ = (undefined4)uVar5;
                local_58._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
                uStack_50._0_4_ = (undefined4)uVar6;
                uStack_50._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
                *(undefined4 *)(puVar22 + 2) = (undefined4)local_58;
                *(undefined4 *)((longlong)puVar22 + 0x14) = local_58._4_4_;
                *(undefined4 *)(puVar22 + 3) = (undefined4)uStack_50;
                *(undefined4 *)((longlong)puVar22 + 0x1c) = uStack_50._4_4_;
                *(undefined4 *)puVar22 = (undefined4)local_68;
                *(undefined4 *)((longlong)puVar22 + 4) = local_68._4_4_;
                *(undefined4 *)(puVar22 + 1) = (undefined4)uStack_60;
                *(undefined4 *)((longlong)puVar22 + 0xc) = uStack_60._4_4_;
                iVar13 = iVar16 * 2;
                iVar17 = iVar16 * 2 + 1;
                local_68 = uVar3;
                uStack_60 = uVar4;
                local_58 = uVar5;
                uStack_50 = uVar6;
                iVar12 = iVar16;
              } while ((longlong)iVar17 < (longlong)uVar25);
              uVar1 = uVar25 - 1;
              local_68 = *puVar21;
              uStack_60 = puVar21[1];
              local_58 = puVar21[2];
              uStack_50 = puVar21[3];
              uVar8 = local_58;
              uVar9 = uStack_50;
              uVar6 = local_68;
              uVar7 = uStack_60;
              uVar3 = puVar21[uVar1 * 4];
              uVar4 = (puVar21 + uVar1 * 4)[1];
              uVar5 = (puVar21 + uVar1 * 4 + 2)[1];
              puVar21[2] = puVar21[uVar1 * 4 + 2];
              puVar21[3] = uVar5;
              *puVar21 = uVar3;
              puVar21[1] = uVar4;
              local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
              uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
              local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
              uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
              puVar22 = puVar21 + uVar1 * 4 + 2;
              *(undefined4 *)puVar22 = (undefined4)local_58;
              *(undefined4 *)((longlong)puVar22 + 4) = local_58._4_4_;
              *(undefined4 *)(puVar22 + 1) = (undefined4)uStack_50;
              *(undefined4 *)((longlong)puVar22 + 0xc) = uStack_50._4_4_;
              puVar22 = puVar21 + uVar1 * 4;
              *(undefined4 *)puVar22 = (undefined4)local_68;
              *(undefined4 *)((longlong)puVar22 + 4) = local_68._4_4_;
              *(undefined4 *)(puVar22 + 1) = (undefined4)uStack_60;
              *(undefined4 *)((longlong)puVar22 + 0xc) = uStack_60._4_4_;
              bVar27 = 2 < uVar25;
              plVar15 = local_380;
              uVar25 = uVar1;
              local_68 = uVar6;
              uStack_60 = uVar7;
              local_58 = uVar8;
              uStack_50 = uVar9;
            } while (bVar27);
          }
        }
      }
LAB_146f36cd0:
      plVar15 = plVar15 + -3;
    } while (&local_368 <= plVar15);
  }
  if ((local_48 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146f3690f:
  local_68 = *puVar21;
  uStack_60 = puVar21[1];
  local_58 = puVar21[2];
  uStack_50 = puVar21[3];
  uVar6 = local_68;
  uVar7 = uStack_60;
  uVar3 = *puVar18;
  uVar4 = puVar23[-3];
  uVar5 = puVar23[-1];
  puVar21[2] = puVar23[-2];
  puVar21[3] = uVar5;
  *puVar21 = uVar3;
  puVar21[1] = uVar4;
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  puVar23[-2] = local_58;
  puVar23[-1] = uStack_50;
  *(undefined4 *)puVar18 = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar23 + -0x1c) = local_68._4_4_;
  *(undefined4 *)(puVar23 + -3) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)puVar23 + -0x14) = uStack_60._4_4_;
  iVar13 = local_374 + -1;
  puVar23 = puVar23 + -8;
  local_68 = uVar6;
  uStack_60 = uVar7;
  if ((longlong)puVar14 - (longlong)local_370 < (longlong)puVar19 - (longlong)puVar26) {
    plVar15 = local_380;
    if (puVar20 < puVar22) {
      *local_380 = (longlong)puVar20;
      local_380[1] = (longlong)puVar22;
      *(int *)(local_380 + 2) = iVar13;
      plVar15 = local_380 + 3;
    }
    puVar19 = puVar14;
    puVar26 = puVar21;
    if (puVar18 <= puVar21 + 4) goto LAB_146f36cd0;
  }
  else {
    if (puVar21 + 4 < puVar18) {
      *local_380 = (longlong)puVar21;
      local_380[1] = (longlong)puVar23;
      *(int *)(local_380 + 2) = iVar13;
      local_380 = local_380 + 3;
    }
    plVar15 = local_380;
    puVar21 = puVar20;
    puVar23 = puVar22;
    puVar19 = puVar22;
    if (puVar22 <= puVar20) goto LAB_146f36cd0;
  }
  local_380 = plVar15;
  iVar12 = (int)((ulonglong)((longlong)puVar19 - (longlong)puVar26) >> 5);
  uVar24 = iVar12 + 1;
  puVar22 = puVar23;
  if (iVar13 == 0) goto LAB_146f369f6;
  goto LAB_146f3680a;
}



// FUNCTION 146f36d10 FUN_146f36d10 body=1451 status=ok
// SIG undefined FUN_146f36d10(void)

void FUN_146f36d10(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  int iVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  uint uVar24;
  ulonglong uVar25;
  undefined8 *puVar26;
  bool bVar27;
  float fVar28;
  undefined1 auStack_3a8 [40];
  longlong *local_380;
  int local_374;
  undefined8 *local_370;
  longlong local_368;
  longlong local_360;
  undefined4 local_358 [188];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  iVar13 = (int)param_1[1];
  if (1 < (longlong)iVar13) {
    lVar2 = *param_1;
    memset(local_358,0,0x2f0);
    local_360 = (longlong)iVar13 * 0x20 + lVar2 + -0x20;
    local_368 = lVar2;
    fVar28 = logf((float)iVar13);
    local_358[0] = (int)(longlong)(fVar28 + fVar28);
    plVar15 = &local_368;
    do {
      puVar21 = (undefined8 *)*plVar15;
      puVar19 = (undefined8 *)plVar15[1];
      iVar13 = (int)plVar15[2];
      iVar12 = (int)((ulonglong)((longlong)puVar19 - (longlong)puVar21) >> 5);
      uVar24 = iVar12 + 1;
      puVar22 = puVar19;
      puVar26 = puVar21;
      local_380 = plVar15;
      if (iVar13 != 0) {
LAB_146f36db6:
        if (8 < (int)uVar24) {
          uVar25 = (ulonglong)(uVar24 >> 1);
          uVar3 = puVar21[uVar25 * 4];
          uVar4 = (puVar21 + uVar25 * 4)[1];
          local_58 = puVar21[uVar25 * 4 + 2];
          uStack_50 = (puVar21 + uVar25 * 4 + 2)[1];
          uVar5 = *puVar21;
          uVar6 = puVar21[1];
          uVar7 = puVar21[3];
          puVar21[uVar25 * 4 + 2] = puVar21[2];
          (puVar21 + uVar25 * 4 + 2)[1] = uVar7;
          puVar21[uVar25 * 4] = uVar5;
          (puVar21 + uVar25 * 4)[1] = uVar6;
          local_68._0_4_ = (undefined4)uVar3;
          local_68._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          uStack_60._0_4_ = (undefined4)uVar4;
          uStack_60._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          puVar21[2] = local_58;
          puVar21[3] = uStack_50;
          *(undefined4 *)puVar21 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar21 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar21 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar21 + 0xc) = uStack_60._4_4_;
          puVar18 = puVar22 + 4;
          puVar20 = puVar21;
          local_374 = iVar13;
          local_370 = puVar26;
          local_68 = uVar3;
          uStack_60 = uVar4;
          do {
            puVar10 = puVar20 + 4;
            puVar23 = puVar20 + 4;
            do {
              puVar20 = puVar23;
              puVar26 = puVar10;
              if (puVar22 < puVar20) break;
              cVar11 = FUN_142a903b0(puVar21,puVar20);
              puVar10 = puVar26 + 4;
              puVar23 = puVar20 + 4;
            } while (cVar11 == '\0');
            puVar10 = puVar18 + -8;
            do {
              puVar23 = puVar18;
              puVar14 = puVar10;
              puVar18 = puVar23 + -4;
              if (puVar18 <= puVar21) break;
              cVar11 = FUN_142a903b0(puVar18,puVar21);
              puVar10 = puVar14 + -4;
            } while (cVar11 == '\0');
            if (puVar18 < puVar20) goto LAB_146f36ebb;
            uVar3 = *puVar20;
            uVar4 = puVar20[1];
            local_58 = puVar20[2];
            uStack_50 = puVar20[3];
            uVar5 = *puVar18;
            uVar6 = puVar23[-3];
            uVar7 = puVar23[-1];
            puVar20[2] = puVar23[-2];
            puVar20[3] = uVar7;
            *puVar20 = uVar5;
            puVar20[1] = uVar6;
            local_68._0_4_ = (undefined4)uVar3;
            local_68._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
            uStack_60._0_4_ = (undefined4)uVar4;
            uStack_60._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
            puVar23[-2] = local_58;
            puVar23[-1] = uStack_50;
            *(undefined4 *)puVar18 = (undefined4)local_68;
            *(undefined4 *)((longlong)puVar23 + -0x1c) = local_68._4_4_;
            *(undefined4 *)(puVar23 + -3) = (undefined4)uStack_60;
            *(undefined4 *)((longlong)puVar23 + -0x14) = uStack_60._4_4_;
            local_68 = uVar3;
            uStack_60 = uVar4;
          } while( true );
        }
        for (; plVar15 = local_380, puVar26 = puVar21, puVar19 = puVar21, puVar21 < puVar22;
            puVar22 = puVar22 + -4) {
          while (puVar18 = puVar26, puVar19 = puVar19 + 4, puVar19 <= puVar22) {
            cVar11 = FUN_142a903b0(puVar18,puVar19);
            puVar26 = puVar19;
            if (cVar11 == '\0') {
              puVar26 = puVar18;
            }
          }
          local_68 = *puVar18;
          uStack_60 = puVar18[1];
          local_58 = puVar18[2];
          uStack_50 = puVar18[3];
          uVar6 = local_68;
          uVar7 = uStack_60;
          uVar3 = *puVar22;
          uVar4 = puVar22[1];
          uVar5 = puVar22[3];
          puVar18[2] = puVar22[2];
          puVar18[3] = uVar5;
          *puVar18 = uVar3;
          puVar18[1] = uVar4;
          local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
          uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
          puVar22[2] = local_58;
          puVar22[3] = uStack_50;
          *(undefined4 *)puVar22 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar22 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar22 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar22 + 0xc) = uStack_60._4_4_;
          local_68 = uVar6;
          uStack_60 = uVar7;
        }
        goto LAB_146f3727c;
      }
LAB_146f36fa2:
      plVar15 = local_380;
      if (uVar24 != 0) {
        iVar13 = (iVar12 - (iVar12 + -1 >> 0x1f)) + -1 >> 1;
        iVar12 = iVar13;
joined_r0x000146f36fc7:
        do {
          iVar17 = iVar13 * 2 + 1;
          if (iVar17 < (int)uVar24) {
            iVar16 = iVar13 * 2 + 2;
            if ((iVar16 < (int)uVar24) &&
               (cVar11 = FUN_142a903b0(puVar21 + (longlong)iVar16 * 4,puVar21 + (longlong)iVar17 * 4
                                      ), cVar11 == '\0')) {
              iVar17 = iVar16;
            }
            puVar19 = puVar21 + (longlong)iVar13 * 4;
            puVar22 = puVar21 + (longlong)iVar17 * 4;
            cVar11 = FUN_142a903b0(puVar19,puVar22);
            if (cVar11 != '\0') {
              local_68 = *puVar19;
              uStack_60 = puVar19[1];
              local_58 = puVar19[2];
              uStack_50 = puVar19[3];
              uVar6 = local_68;
              uVar7 = uStack_60;
              uVar3 = *puVar22;
              uVar4 = puVar22[1];
              uVar5 = puVar22[3];
              puVar19[2] = puVar22[2];
              puVar19[3] = uVar5;
              *puVar19 = uVar3;
              puVar19[1] = uVar4;
              local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
              uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
              puVar22[2] = local_58;
              puVar22[3] = uStack_50;
              *(undefined4 *)puVar22 = (undefined4)local_68;
              *(undefined4 *)((longlong)puVar22 + 4) = local_68._4_4_;
              *(undefined4 *)(puVar22 + 1) = (undefined4)uStack_60;
              *(undefined4 *)((longlong)puVar22 + 0xc) = uStack_60._4_4_;
              iVar13 = iVar17;
              local_68 = uVar6;
              uStack_60 = uVar7;
              goto joined_r0x000146f36fc7;
            }
          }
          bVar27 = iVar12 != 0;
          iVar13 = iVar12 + -1;
          iVar12 = iVar13;
        } while (bVar27);
        plVar15 = local_380;
        if (1 < (int)uVar24) {
          uVar25 = (ulonglong)uVar24 - 1;
          local_68 = *puVar21;
          uStack_60 = puVar21[1];
          local_58 = puVar21[2];
          uStack_50 = puVar21[3];
          uVar8 = local_58;
          uVar9 = uStack_50;
          uVar6 = local_68;
          uVar7 = uStack_60;
          uVar3 = puVar21[uVar25 * 4];
          uVar4 = (puVar21 + uVar25 * 4)[1];
          uVar5 = (puVar21 + uVar25 * 4 + 2)[1];
          puVar21[2] = puVar21[uVar25 * 4 + 2];
          puVar21[3] = uVar5;
          *puVar21 = uVar3;
          puVar21[1] = uVar4;
          local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
          uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          puVar22 = puVar21 + uVar25 * 4 + 2;
          *(undefined4 *)puVar22 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar22 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar22 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar22 + 0xc) = uStack_50._4_4_;
          puVar22 = puVar21 + uVar25 * 4;
          *(undefined4 *)puVar22 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar22 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar22 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar22 + 0xc) = uStack_60._4_4_;
          local_68 = uVar6;
          uStack_60 = uVar7;
          local_58 = uVar8;
          uStack_50 = uVar9;
          if (uVar24 != 2) {
            do {
              iVar13 = 0;
              iVar17 = 1;
              iVar12 = 0;
              do {
                iVar13 = iVar13 + 2;
                iVar16 = iVar17;
                if (((longlong)iVar13 < (longlong)uVar25) &&
                   (cVar11 = FUN_142a903b0(puVar21 + (longlong)iVar13 * 4,
                                           puVar21 + (longlong)iVar17 * 4), cVar11 == '\0')) {
                  iVar16 = iVar13;
                }
                puVar19 = puVar21 + (longlong)iVar12 * 4;
                puVar22 = puVar21 + (longlong)iVar16 * 4;
                cVar11 = FUN_142a903b0(puVar19,puVar22);
                if (cVar11 == '\0') break;
                uVar3 = *puVar19;
                uVar4 = puVar19[1];
                uVar5 = puVar19[2];
                uVar6 = puVar19[3];
                uVar7 = *puVar22;
                uVar8 = puVar22[1];
                uVar9 = puVar22[3];
                puVar19[2] = puVar22[2];
                puVar19[3] = uVar9;
                *puVar19 = uVar7;
                puVar19[1] = uVar8;
                local_68._0_4_ = (undefined4)uVar3;
                local_68._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
                uStack_60._0_4_ = (undefined4)uVar4;
                uStack_60._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
                local_58._0_4_ = (undefined4)uVar5;
                local_58._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
                uStack_50._0_4_ = (undefined4)uVar6;
                uStack_50._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
                *(undefined4 *)(puVar22 + 2) = (undefined4)local_58;
                *(undefined4 *)((longlong)puVar22 + 0x14) = local_58._4_4_;
                *(undefined4 *)(puVar22 + 3) = (undefined4)uStack_50;
                *(undefined4 *)((longlong)puVar22 + 0x1c) = uStack_50._4_4_;
                *(undefined4 *)puVar22 = (undefined4)local_68;
                *(undefined4 *)((longlong)puVar22 + 4) = local_68._4_4_;
                *(undefined4 *)(puVar22 + 1) = (undefined4)uStack_60;
                *(undefined4 *)((longlong)puVar22 + 0xc) = uStack_60._4_4_;
                iVar13 = iVar16 * 2;
                iVar17 = iVar16 * 2 + 1;
                local_68 = uVar3;
                uStack_60 = uVar4;
                local_58 = uVar5;
                uStack_50 = uVar6;
                iVar12 = iVar16;
              } while ((longlong)iVar17 < (longlong)uVar25);
              uVar1 = uVar25 - 1;
              local_68 = *puVar21;
              uStack_60 = puVar21[1];
              local_58 = puVar21[2];
              uStack_50 = puVar21[3];
              uVar8 = local_58;
              uVar9 = uStack_50;
              uVar6 = local_68;
              uVar7 = uStack_60;
              uVar3 = puVar21[uVar1 * 4];
              uVar4 = (puVar21 + uVar1 * 4)[1];
              uVar5 = (puVar21 + uVar1 * 4 + 2)[1];
              puVar21[2] = puVar21[uVar1 * 4 + 2];
              puVar21[3] = uVar5;
              *puVar21 = uVar3;
              puVar21[1] = uVar4;
              local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
              uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
              local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
              uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
              puVar22 = puVar21 + uVar1 * 4 + 2;
              *(undefined4 *)puVar22 = (undefined4)local_58;
              *(undefined4 *)((longlong)puVar22 + 4) = local_58._4_4_;
              *(undefined4 *)(puVar22 + 1) = (undefined4)uStack_50;
              *(undefined4 *)((longlong)puVar22 + 0xc) = uStack_50._4_4_;
              puVar22 = puVar21 + uVar1 * 4;
              *(undefined4 *)puVar22 = (undefined4)local_68;
              *(undefined4 *)((longlong)puVar22 + 4) = local_68._4_4_;
              *(undefined4 *)(puVar22 + 1) = (undefined4)uStack_60;
              *(undefined4 *)((longlong)puVar22 + 0xc) = uStack_60._4_4_;
              bVar27 = 2 < uVar25;
              plVar15 = local_380;
              uVar25 = uVar1;
              local_68 = uVar6;
              uStack_60 = uVar7;
              local_58 = uVar8;
              uStack_50 = uVar9;
            } while (bVar27);
          }
        }
      }
LAB_146f3727c:
      plVar15 = plVar15 + -3;
    } while (&local_368 <= plVar15);
  }
  if ((local_48 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146f36ebb:
  local_68 = *puVar21;
  uStack_60 = puVar21[1];
  local_58 = puVar21[2];
  uStack_50 = puVar21[3];
  uVar6 = local_68;
  uVar7 = uStack_60;
  uVar3 = *puVar18;
  uVar4 = puVar23[-3];
  uVar5 = puVar23[-1];
  puVar21[2] = puVar23[-2];
  puVar21[3] = uVar5;
  *puVar21 = uVar3;
  puVar21[1] = uVar4;
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  puVar23[-2] = local_58;
  puVar23[-1] = uStack_50;
  *(undefined4 *)puVar18 = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar23 + -0x1c) = local_68._4_4_;
  *(undefined4 *)(puVar23 + -3) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)puVar23 + -0x14) = uStack_60._4_4_;
  iVar13 = local_374 + -1;
  puVar23 = puVar23 + -8;
  local_68 = uVar6;
  uStack_60 = uVar7;
  if ((longlong)puVar14 - (longlong)local_370 < (longlong)puVar19 - (longlong)puVar26) {
    plVar15 = local_380;
    if (puVar20 < puVar22) {
      *local_380 = (longlong)puVar20;
      local_380[1] = (longlong)puVar22;
      *(int *)(local_380 + 2) = iVar13;
      plVar15 = local_380 + 3;
    }
    puVar19 = puVar14;
    puVar26 = puVar21;
    if (puVar18 <= puVar21 + 4) goto LAB_146f3727c;
  }
  else {
    if (puVar21 + 4 < puVar18) {
      *local_380 = (longlong)puVar21;
      local_380[1] = (longlong)puVar23;
      *(int *)(local_380 + 2) = iVar13;
      local_380 = local_380 + 3;
    }
    plVar15 = local_380;
    puVar21 = puVar20;
    puVar23 = puVar22;
    puVar19 = puVar22;
    if (puVar22 <= puVar20) goto LAB_146f3727c;
  }
  local_380 = plVar15;
  iVar12 = (int)((ulonglong)((longlong)puVar19 - (longlong)puVar26) >> 5);
  uVar24 = iVar12 + 1;
  puVar22 = puVar23;
  if (iVar13 == 0) goto LAB_146f36fa2;
  goto LAB_146f36db6;
}



// FUNCTION 146f372bc FUN_146f372bc body=210 status=ok
// SIG undefined FUN_146f372bc(void)

undefined8 FUN_146f372bc(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_2c = 0;
  uVar4 = 0;
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    puVar5 = (undefined8 *)*param_1;
    lVar6 = (longlong)*(int *)(param_1 + 1) << 4;
    do {
      local_40 = 0xffffffff;
      local_48 = 0;
      iVar1 = FUN_1447ee042(puVar5,L"RepSystemId=",0xc,1);
      if (iVar1 != -1) {
        if (puVar5 != (undefined8 *)0x0) {
          if (*(int *)(puVar5 + 1) == 0) {
            puVar3 = &DAT_149dfb77a;
          }
          else {
            puVar3 = (undefined2 *)*puVar5;
          }
          FUN_1409887c6(puVar3,L"RepSystemId=",&local_2c);
          uVar4 = (ulonglong)local_2c;
          if (0xf < local_2c) {
            uVar2 = 0;
            goto LAB_146f37338;
          }
        }
        break;
      }
      puVar5 = puVar5 + 2;
      lVar6 = lVar6 + -0x10;
    } while (lVar6 != 0);
  }
  uVar2 = (&DAT_14c999ae0)[uVar4];
LAB_146f37338:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f37390 FUN_146f37390 body=89 status=ok
// SIG undefined FUN_146f37390(void)

void FUN_146f37390(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    FUN_1401924dc(lVar1);
  }
  if ((*(longlong *)(param_1 + 0x60) != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48();
  }
  *(longlong *)(param_1 + 0x60) = lVar1;
  FUN_146f14ba4(param_1 + 0x40,*(undefined4 *)((longlong)param_2 + 0x14));
  uVar2 = FUN_146f46348(*param_2);
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  return;
}



// FUNCTION 146f373ea FUN_146f373ea body=43 status=ok
// SIG undefined FUN_146f373ea(void)

void FUN_146f373ea(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_146f14ba4(param_1 + 0x40,*(undefined4 *)((longlong)param_2 + 0x14));
  uVar1 = FUN_146f46348(*param_2);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  return;
}



// FUNCTION 146f37416 FUN_146f37416 body=53 status=ok
// SIG undefined FUN_146f37416(void)

void FUN_146f37416(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  return;
}



// FUNCTION 146f37456 FUN_146f37456 body=265 status=ok
// SIG undefined FUN_146f37456(void)

void FUN_146f37456(undefined8 param_1,longlong param_2,longlong param_3,uint param_4,
                  ulonglong *param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  size_t _Size;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 + 0x1e0 != param_3 + 0x28) {
    lVar2 = param_3 + 0x28;
    if (*(longlong *)(param_3 + 0x148) != 0) {
      lVar2 = *(longlong *)(param_3 + 0x148);
    }
    FUN_146f2a024(param_2 + 0x1e0,lVar2,*(undefined4 *)(param_3 + 0x150),
                  *(undefined4 *)(param_2 + 0x30c));
  }
  *(undefined4 *)(param_2 + 0x310) = *(undefined4 *)(param_3 + 0x20);
  uVar3 = (ulonglong)param_4;
  _Size = uVar3 * 0x20;
  uVar1 = *param_5 + 0xf & 0xfffffffffffffff0;
  uVar4 = uVar1 + _Size;
  if (param_5[1] < uVar4) {
    FUN_140023dd8(param_5,(uint)_Size | 0x10);
    uVar1 = *param_5 + 0xf & 0xfffffffffffffff0;
    uVar4 = uVar1 + _Size;
  }
  *param_5 = uVar4;
  *(ulonglong *)(param_2 + 0x318) = uVar1;
  uVar1 = *param_5 + 0xf & 0xfffffffffffffff0;
  uVar4 = uVar1 + uVar3 * 4;
  if (param_5[1] < uVar4) {
    FUN_140023dd8(param_5,(int)(uVar3 * 4) + 0x10);
    uVar1 = *param_5 + 0xf & 0xfffffffffffffff0;
    uVar4 = uVar3 * 4 + uVar1;
  }
  *param_5 = uVar4;
  *(ulonglong *)(param_2 + 800) = uVar1;
  FUN_146f37560(param_1);
  memset(*(void **)(param_2 + 0x318),0,_Size);
  return;
}



// FUNCTION 146f37560 FUN_146f37560 body=581 status=ok
// SIG undefined FUN_146f37560(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f37560(longlong param_1,undefined1 (*param_2) [16])

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  float fVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  float fVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  double dVar42;
  double dVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined1 auVar50 [16];
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  
  lVar1 = *(longlong *)(param_1 + 0x60);
  dVar17 = (double)*(float *)(lVar1 + 0x3c);
  dVar35 = (double)*(float *)(lVar1 + 0x3c);
  uVar34 = (undefined4)((ulonglong)dVar35 >> 0x20);
  fVar39 = *(float *)(lVar1 + 0x40);
  dVar24 = (double)fVar39;
  dVar25 = (double)fVar39;
  uVar51 = SUB84(dVar25,0);
  uVar52 = (undefined4)((ulonglong)dVar25 >> 0x20);
  dVar38 = dVar24 - dVar17;
  uVar48 = SUB84(dVar25 - dVar35,0);
  uVar49 = (undefined4)((ulonglong)(dVar25 - dVar35) >> 0x20);
  auVar18._8_4_ = uVar48;
  auVar18._0_8_ = dVar38;
  auVar18._12_4_ = uVar49;
  auVar50 = divpd(_DAT_149934d80,auVar18);
  fVar32 = tanf(*(float *)(lVar1 + 0x38) * 0.017453292 * 0.5);
  auVar36._0_8_ = (double)(fVar32 * fVar39);
  auVar36._8_8_ = (double)(fVar32 * fVar39);
  lVar1 = *(longlong *)(param_1 + 0x60);
  dVar25 = (double)*(float *)(lVar1 + 0x48);
  dVar4 = (double)*(float *)(lVar1 + 0x48);
  uVar33 = (undefined4)((ulonglong)dVar4 >> 0x20);
  dVar42 = (double)*(float *)(lVar1 + 0x44);
  dVar43 = (double)*(float *)(lVar1 + 0x44);
  fVar39 = *(float *)(lVar1 + 0x28) * *(float *)(lVar1 + 0x28);
  dVar7 = (double)fVar39;
  dVar8 = (double)fVar39;
  uVar40 = SUB84(dVar8,0);
  uVar41 = (undefined4)((ulonglong)dVar8 >> 0x20);
  auVar21._8_4_ = uVar51;
  auVar21._0_8_ = dVar24;
  auVar21._12_4_ = uVar52;
  auVar37 = divpd(auVar36,auVar21);
  fVar39 = *(float *)(lVar1 + 0x30) * *(float *)(lVar1 + 0x30);
  dVar11 = (double)fVar39;
  dVar8 = (double)fVar39;
  uVar44 = SUB84(dVar8,0);
  uVar45 = (undefined4)((ulonglong)dVar8 >> 0x20);
  dVar14 = (double)*(float *)(lVar1 + 0x2c);
  dVar8 = (double)*(float *)(lVar1 + 0x2c);
  uVar46 = SUB84(dVar8,0);
  uVar47 = (undefined4)((ulonglong)dVar8 >> 0x20);
  dVar31 = (double)*(float *)(lVar1 + 0x34);
  dVar8 = (double)*(float *)(lVar1 + 0x34);
  uVar55 = SUB84(dVar8,0);
  uVar56 = (undefined4)((ulonglong)dVar8 >> 0x20);
  fVar39 = *(float *)(lVar1 + 0x4c) * 0.5;
  fVar39 = fVar39 * fVar39;
  dVar28 = (double)fVar39;
  dVar8 = (double)fVar39;
  uVar53 = SUB84(dVar8,0);
  uVar54 = (undefined4)((ulonglong)dVar8 >> 0x20);
  fVar39 = *(float *)(lVar1 + 0x50);
  fVar32 = *(float *)(lVar1 + 0x54);
  auVar15._8_4_ = SUB84(dVar35,0);
  auVar15._0_8_ = dVar17;
  auVar15._12_4_ = uVar34;
  *param_2 = auVar15;
  auVar16._8_4_ = SUB84(dVar35,0);
  auVar16._0_8_ = dVar17;
  auVar16._12_4_ = uVar34;
  param_2[1] = auVar16;
  auVar22._8_4_ = uVar51;
  auVar22._0_8_ = dVar24;
  auVar22._12_4_ = uVar52;
  param_2[2] = auVar22;
  auVar23._8_4_ = uVar51;
  auVar23._0_8_ = dVar24;
  auVar23._12_4_ = uVar52;
  param_2[3] = auVar23;
  auVar19._8_4_ = uVar48;
  auVar19._0_8_ = dVar38;
  auVar19._12_4_ = uVar49;
  param_2[4] = auVar19;
  auVar20._8_4_ = uVar48;
  auVar20._0_8_ = dVar38;
  auVar20._12_4_ = uVar49;
  param_2[5] = auVar20;
  param_2[6] = auVar50;
  param_2[7] = auVar50;
  param_2[8] = auVar37;
  param_2[9] = auVar37;
  auVar37._8_4_ = SUB84(dVar4,0);
  auVar37._0_8_ = dVar25;
  auVar37._12_4_ = uVar33;
  param_2[10] = auVar37;
  auVar50._8_4_ = SUB84(dVar4,0);
  auVar50._0_8_ = dVar25;
  auVar50._12_4_ = uVar33;
  param_2[0xb] = auVar50;
  *(double *)param_2[0xc] = dVar42;
  *(double *)(param_2[0xc] + 8) = dVar43;
  *(double *)param_2[0xd] = dVar42;
  *(double *)(param_2[0xd] + 8) = dVar43;
  dVar35 = (double)fVar39;
  dVar38 = (double)fVar39;
  dVar8 = (double)fVar32;
  dVar17 = (double)fVar32;
  uVar33 = SUB84(dVar17,0);
  uVar34 = (undefined4)((ulonglong)dVar17 >> 0x20);
  *(double *)param_2[0xe] = dVar42 - dVar25;
  *(double *)(param_2[0xe] + 8) = dVar43 - dVar4;
  *(double *)param_2[0xf] = dVar42 - dVar25;
  *(double *)(param_2[0xf] + 8) = dVar43 - dVar4;
  auVar5._8_4_ = uVar40;
  auVar5._0_8_ = dVar7;
  auVar5._12_4_ = uVar41;
  param_2[0x10] = auVar5;
  auVar6._8_4_ = uVar40;
  auVar6._0_8_ = dVar7;
  auVar6._12_4_ = uVar41;
  param_2[0x11] = auVar6;
  auVar9._8_4_ = uVar44;
  auVar9._0_8_ = dVar11;
  auVar9._12_4_ = uVar45;
  param_2[0x12] = auVar9;
  auVar10._8_4_ = uVar44;
  auVar10._0_8_ = dVar11;
  auVar10._12_4_ = uVar45;
  param_2[0x13] = auVar10;
  auVar12._8_4_ = uVar46;
  auVar12._0_8_ = dVar14;
  auVar12._12_4_ = uVar47;
  param_2[0x14] = auVar12;
  auVar13._8_4_ = uVar46;
  auVar13._0_8_ = dVar14;
  auVar13._12_4_ = uVar47;
  param_2[0x15] = auVar13;
  auVar29._8_4_ = uVar55;
  auVar29._0_8_ = dVar31;
  auVar29._12_4_ = uVar56;
  param_2[0x16] = auVar29;
  auVar30._8_4_ = uVar55;
  auVar30._0_8_ = dVar31;
  auVar30._12_4_ = uVar56;
  param_2[0x17] = auVar30;
  auVar26._8_4_ = uVar53;
  auVar26._0_8_ = dVar28;
  auVar26._12_4_ = uVar54;
  param_2[0x18] = auVar26;
  auVar27._8_4_ = uVar53;
  auVar27._0_8_ = dVar28;
  auVar27._12_4_ = uVar54;
  param_2[0x19] = auVar27;
  *(double *)param_2[0x1a] = dVar35;
  *(double *)(param_2[0x1a] + 8) = dVar38;
  *(double *)param_2[0x1b] = dVar35;
  *(double *)(param_2[0x1b] + 8) = dVar38;
  auVar2._8_4_ = uVar33;
  auVar2._0_8_ = dVar8;
  auVar2._12_4_ = uVar34;
  param_2[0x1c] = auVar2;
  auVar3._8_4_ = uVar33;
  auVar3._0_8_ = dVar8;
  auVar3._12_4_ = uVar34;
  param_2[0x1d] = auVar3;
  return;
}



// FUNCTION 146f377b0 FUN_146f377b0 body=210 status=ok
// SIG undefined FUN_146f377b0(void)

undefined8 FUN_146f377b0(longlong param_1,uint param_2,longlong *param_3)

{
  undefined2 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(uint *)(**(longlong **)(param_1 + 0x58) + (ulonglong)(param_2 >> 5) * 4) >>
       (param_2 & 0x1f) & 1) == 0) {
    cVar2 = FUN_146f4a31a(param_3[2],0x719e9e9e02f8b16,&local_48);
    if (cVar2 == '\0') {
      uVar4 = 0;
      goto LAB_146f3781c;
    }
    uVar4 = 0;
    if ((0xfffe < local_48._4_4_) || (0xfffe < (uint)local_48)) goto LAB_146f3781c;
  }
  else {
    local_48 = 0xffff0000ffff;
    local_48._4_4_ = 0xffff;
  }
  puVar1 = (undefined2 *)*param_3;
  *puVar1 = (short)local_48._4_4_;
  puVar1[1] = (undefined2)local_48;
  uVar3 = FUN_146f37884(param_1);
  *(undefined4 *)(puVar1 + 2) = uVar3;
  FUN_146f3790c(param_1,param_2,puVar1,param_3[1]);
  uVar4 = 1;
LAB_146f3781c:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 146f37884 FUN_146f37884 body=136 status=ok
// SIG undefined FUN_146f37884(void)

void FUN_146f37884(longlong param_1)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar4 = 0xffffffff;
  if ((ulonglong)*(uint *)(param_1 + 0x48) == 0) {
LAB_146f378bd:
    FUN_146f37a32(param_1 + 0x28);
    lVar3 = *(longlong *)(param_1 + 0x40);
    uVar7 = uVar4;
LAB_146f378ea:
    puVar1 = (uint *)(lVar3 + (ulonglong)(uVar7 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar7 & 0x1f);
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x40);
  iVar5 = 0;
  uVar6 = 0;
LAB_146f378a7:
  uVar7 = *(uint *)(lVar3 + uVar6 * 4);
  if (uVar7 == 0xffffffff) goto code_r0x000146f378b1;
  uVar7 = uVar7 ^ 0xffffffff;
  if (uVar7 == 0) {
    iVar2 = 0x20;
  }
  else {
    iVar2 = 0;
    if (uVar7 != 0) {
      for (; (uVar7 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
      }
    }
  }
  uVar7 = iVar2 - iVar5;
  uVar4 = 0xffffffff;
  if (uVar7 < *(uint *)(param_1 + 0x50)) {
    uVar4 = uVar7;
  }
  if (uVar4 < *(uint *)(param_1 + 0x38)) goto LAB_146f378ea;
  goto LAB_146f378bd;
code_r0x000146f378b1:
  uVar6 = uVar6 + 1;
  iVar5 = iVar5 + -0x20;
  if (*(uint *)(param_1 + 0x48) == uVar6) goto LAB_146f378bd;
  goto LAB_146f378a7;
}



// FUNCTION 146f3790c FUN_146f3790c body=178 status=ok
// SIG undefined FUN_146f3790c(void)

void FUN_146f3790c(longlong param_1,uint param_2,ushort *param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  
  if ((ulonglong)param_3[1] == 0xffff) {
    if ((*(uint *)(**(longlong **)(param_1 + 0x58) + (ulonglong)(param_2 >> 5) * 4) >>
         (param_2 & 0x1f) & 1) == 0) {
      puVar6 = &DAT_14c8464e0;
    }
    else {
      uVar9 = param_2 + 0x7ff;
      if (-1 < (int)param_2) {
        uVar9 = param_2;
      }
      puVar6 = (undefined8 *)
               ((longlong)((int)param_2 % 0x800) * 0x20 +
               *(longlong *)
                ((*(longlong **)(param_1 + 0x58))[9] + (longlong)((int)uVar9 >> 0xb) * 8));
    }
  }
  else {
    puVar6 = (undefined8 *)
             ((ulonglong)*param_3 + *(longlong *)(*param_4 + (ulonglong)param_3[1] * 8));
  }
  uVar5 = puVar6[1];
  uVar2 = puVar6[2];
  iVar3 = *(int *)(param_3 + 2);
  iVar8 = iVar3 + 0x7ff;
  if (-1 < iVar3) {
    iVar8 = iVar3;
  }
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)(iVar8 >> 0xb) * 8);
  lVar7 = (ulonglong)(uint)(iVar3 % 0x800) * 0x20;
  puVar1 = (undefined8 *)(lVar4 + lVar7);
  *puVar1 = *puVar6;
  puVar1[1] = uVar5;
  puVar6 = (undefined8 *)(lVar4 + 0x10 + lVar7);
  *puVar6 = uVar2;
  puVar6[1] = 0;
  return;
}



// FUNCTION 146f379e4 FUN_146f379e4 body=78 status=ok
// SIG undefined FUN_146f379e4(void)

void FUN_146f379e4(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((ulonglong)uVar1 != 0) {
    uVar3 = 0;
    do {
      uVar2 = (ulonglong)*(uint *)(*param_2 + uVar3 * 4);
      FUN_146f3790c(param_1,uVar2,uVar2 * 8 + param_2[4],*(undefined8 *)(param_2[2] + uVar3 * 8));
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  return;
}



// FUNCTION 146f37a32 FUN_146f37a32 body=123 status=ok
// SIG undefined FUN_146f37a32(void)

void FUN_146f37a32(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = (int)param_1[2];
  iVar1 = iVar3 + 0x17fe;
  if (-1 < iVar3 + 0xfff) {
    iVar1 = iVar3 + 0xfff;
  }
  *(int *)(param_1 + 2) = iVar3 + 0x800;
  iVar3 = (iVar1 >> 0xb) - (int)param_1[1];
  if (iVar3 != 0 && (int)param_1[1] <= iVar1 >> 0xb) {
    do {
      uVar2 = FUN_14001cc68(0x10000,0x10);
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1456bd870(param_1,iVar1);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}



// FUNCTION 146f37aae FUN_146f37aae body=130 status=ok
// SIG undefined FUN_146f37aae(void)

void FUN_146f37aae(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0x14);
  lVar1 = *(longlong *)(param_2 + 8);
  if (lVar1 != 0) {
    FUN_1401924dc(lVar1);
  }
  if ((*(longlong *)(param_1 + 0x60) != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48();
  }
  *(longlong *)(param_1 + 0x60) = lVar1;
  uVar2 = (uint)*(ushort *)(lVar1 + 0x28);
  if (*(uint *)(param_2 + 0x10) < (uint)*(ushort *)(lVar1 + 0x28)) {
    uVar2 = *(uint *)(param_2 + 0x10);
  }
  FUN_146f14ba4(param_1 + 0x88,uVar2);
  FUN_1402d2c96(param_1 + 0x68,uVar2,1);
  FUN_146f37b30(param_1 + 0x78,*(int *)(param_2 + 0x18) + 1);
  return;
}



// FUNCTION 146f37b30 FUN_146f37b30 body=122 status=ok
// SIG undefined FUN_146f37b30(void)

void FUN_146f37b30(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f3fe0a(param_1,iVar1);
    }
    FUN_146f3fdef((longlong)iVar1 * 0x18 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_146f3fe9e(param_1,param_2,iVar1 - param_2);
    FUN_146f3ff00(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f37bac FUN_146f37bac body=114 status=ok
// SIG undefined FUN_146f37bac(void)

void FUN_146f37bac(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x60) != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48();
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(int *)(param_1 + 0x94) != 0) {
    FUN_14480809c(param_1 + 0x88,0);
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(int *)(param_1 + 0x74) != 0) {
    FUN_14480809c(param_1 + 0x68,0);
    return;
  }
  return;
}



// FUNCTION 146f37c3c FUN_146f37c3c body=52 status=ok
// SIG undefined FUN_146f37c3c(void)

void FUN_146f37c3c(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x78) + (longlong)param_2 * 0x18);
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  *plVar1 = 0;
  plVar1[1] = 0;
  *(undefined4 *)(plVar1 + 2) = 0;
  return;
}



// FUNCTION 146f37c70 FUN_146f37c70 body=187 status=ok
// SIG undefined FUN_146f37c70(void)

void FUN_146f37c70(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  if (*(char *)(param_1 + 0xa4) == '\x01') {
    iVar11 = 0;
    *(undefined1 *)(param_1 + 0xa4) = 0;
    uVar3 = *(uint *)(param_2 + 1);
    cVar2 = *(char *)((longlong)param_2 + 0xc);
    if ((ulonglong)uVar3 != 0) {
      lVar4 = *param_2;
      uVar12 = 0;
      do {
        uVar9 = 0xffffffff;
        if (uVar12 == uVar3 - 1) {
          uVar9 = 0xffffffff >> (-cVar2 & 0x1fU);
        }
        uVar9 = uVar9 & *(uint *)(lVar4 + uVar12 * 4);
        iVar10 = iVar11;
        if (uVar9 != 0) {
          do {
            if ((uVar9 & 1) != 0) {
              uVar8 = (ulonglong)
                      *(uint *)(*(longlong *)(param_1 + 0x78) + 8 + (longlong)iVar10 * 0x18);
              if (uVar8 != 0) {
                lVar5 = *(longlong *)(param_1 + 0x88);
                lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar10 * 0x18);
                uVar13 = 0;
                do {
                  puVar1 = (uint *)(lVar6 + uVar13 * 4);
                  *puVar1 = *puVar1 & *(uint *)(lVar5 + uVar13 * 4);
                  uVar13 = uVar13 + 1;
                } while (uVar8 != uVar13);
              }
            }
            bVar7 = 1 < uVar9;
            uVar9 = uVar9 >> 1;
            iVar10 = iVar10 + 1;
          } while (bVar7);
        }
        uVar12 = uVar12 + 1;
        iVar11 = iVar11 + 0x20;
      } while (uVar12 != uVar3);
    }
  }
  return;
}



// FUNCTION 146f37d2c FUN_146f37d2c body=126 status=ok
// SIG undefined FUN_146f37d2c(void)

void FUN_146f37d2c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    FUN_1401924dc(lVar1);
  }
  if ((*(longlong *)(param_1 + 0x30) != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48();
  }
  *(longlong *)(param_1 + 0x30) = lVar1;
  FUN_146f14ba4(param_1 + 0x48,0x40);
  FUN_146f37daa(param_1 + 0x38,(int)param_2[3] + 1);
  lVar1 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *param_2;
    }
  }
  *(longlong *)(param_1 + 0x28) = lVar1;
  return;
}



// FUNCTION 146f37daa FUN_146f37daa body=121 status=ok
// SIG undefined FUN_146f37daa(void)

void FUN_146f37daa(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f3ffc2(param_1,iVar1);
    }
    FUN_146f3ffae((longlong)iVar1 * 0x10 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_146f40048(param_1,param_2,iVar1 - param_2);
    FUN_146f400a2(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f37e24 FUN_146f37e24 body=86 status=ok
// SIG undefined FUN_146f37e24(void)

void FUN_146f37e24(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x28) = 0;
  if ((*(longlong *)(param_1 + 0x30) != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48();
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    FUN_14480809c(param_1 + 0x48,0);
    return;
  }
  return;
}



// FUNCTION 146f37e98 FUN_146f37e98 body=106 status=ok
// SIG undefined FUN_146f37e98(void)

void FUN_146f37e98(longlong *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  
  if (-1 < param_3) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_3) {
      FUN_14480809c(param_1,param_3);
    }
    for (; param_3 != 0; param_3 = param_3 + -1) {
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447808da(param_1,iVar1);
      }
      *(undefined4 *)(*param_1 + (longlong)iVar1 * 4) = *param_2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_3);
}



// FUNCTION 146f37f04 FUN_146f37f04 body=46 status=ok
// SIG undefined FUN_146f37f04(void)

void FUN_146f37f04(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x38) + (longlong)param_2 * 0x10);
  if (*(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)param_2 * 0x10) != 0) {
    FUN_1400020a8();
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  return;
}



// FUNCTION 146f37f32 FUN_146f37f32 body=24 status=ok
// SIG undefined FUN_146f37f32(void)

undefined2 FUN_146f37f32(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  puVar1 = (undefined2 *)*param_3;
  uVar2 = FUN_146f37f4a();
  *puVar1 = uVar2;
  return 1;
}



// FUNCTION 146f37f4a FUN_146f37f4a body=122 status=ok
// SIG undefined FUN_146f37f4a(void)

void FUN_146f37f4a(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar2 = *(uint *)(param_1 + 0x58);
  if ((ulonglong)*(uint *)(param_1 + 0x50) == 0) {
LAB_146f37f7c:
    FUN_146efc8cc((longlong *)(param_1 + 0x48),uVar2 + 0x40);
    lVar5 = *(longlong *)(param_1 + 0x48);
    uVar7 = uVar2;
LAB_146f37fa2:
    puVar1 = (uint *)(lVar5 + (ulonglong)(uVar7 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar7 & 0x1f);
    return;
  }
  lVar5 = *(longlong *)(param_1 + 0x48);
  iVar4 = 0;
  uVar6 = 0;
LAB_146f37f67:
  uVar7 = *(uint *)(lVar5 + uVar6 * 4);
  if (uVar7 == 0xffffffff) goto code_r0x000146f37f71;
  uVar7 = uVar7 ^ 0xffffffff;
  if (uVar7 == 0) {
    iVar3 = 0x20;
  }
  else {
    iVar3 = 0;
    if (uVar7 != 0) {
      for (; (uVar7 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
      }
    }
  }
  uVar7 = iVar3 - iVar4;
  if (uVar7 < uVar2) goto LAB_146f37fa2;
  goto LAB_146f37f7c;
code_r0x000146f37f71:
  uVar6 = uVar6 + 1;
  iVar4 = iVar4 + -0x20;
  if (*(uint *)(param_1 + 0x50) == uVar6) goto LAB_146f37f7c;
  goto LAB_146f37f67;
}



// FUNCTION 146f37fe0 FUN_146f37fe0 body=136 status=ok
// SIG undefined FUN_146f37fe0(void)

void FUN_146f37fe0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined2 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = FUN_146f453e8(*(undefined8 *)(param_1 + 0x28));
  lVar4 = param_2[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_2;
    lVar7 = 0;
    do {
      uVar1 = *(uint *)(lVar2 + lVar7);
      lVar3 = param_2[4];
      if ((*(byte *)(lVar6 + 0xb00) & 8) == 0) {
        uVar5 = *(undefined2 *)(*(longlong *)(lVar6 + 0x8e0) + (longlong)(int)uVar1 * 2);
      }
      else {
        uVar5 = FUN_146f2180c(lVar6 + 0x820,(ulonglong)uVar1);
      }
      *(undefined2 *)(lVar3 + 2 + (ulonglong)uVar1 * 8) = uVar5;
      lVar7 = lVar7 + 4;
    } while ((longlong)(int)lVar4 * 4 != lVar7);
  }
  return;
}



// FUNCTION 146f380a0 FUN_146f380a0 body=160 status=ok
// SIG undefined FUN_146f380a0(void)

void FUN_146f380a0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar1) {
    FUN_146f4013e(param_2);
    iVar1 = *(int *)(param_1 + 0x30);
  }
  if (iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar3 = (longlong)iVar1 * 0x28;
    do {
      if ((*(longlong *)(lVar2 + 0x10) != 0) &&
         ((*(longlong *)(lVar2 + 0x18) == 0 || (*(longlong *)(lVar2 + 0x20) != 0)))) {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_146f40216(param_2,iVar1);
        }
        FUN_146f401ae((longlong)iVar1 * 0x28 + *param_2,lVar2);
      }
      lVar2 = lVar2 + 0x28;
      lVar3 = lVar3 + -0x28;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 146f3814e FUN_146f3814e body=48 status=ok
// SIG undefined FUN_146f3814e(void)

void * FUN_146f3814e(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  memset(param_1,0,0x84);
  *(byte *)((longlong)param_1 + 0x90) = *(byte *)((longlong)param_1 + 0x90) & 0xfe;
  return param_1;
}



// FUNCTION 146f3817e FUN_146f3817e body=126 status=ok
// SIG undefined FUN_146f3817e(void)

void FUN_146f3817e(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  *param_1 = lVar2;
  param_1[1] = param_2[2];
  param_1[2] = param_2[1];
  *(int *)(param_1 + 0x11) = (int)param_2[3];
  FUN_146f381fe(param_1);
  iVar1 = *(int *)(param_2[2] + 0x30);
  if (-1 < iVar1) {
    if (*(int *)((longlong)param_1 + 0x5c) < iVar1) {
      FUN_146f402aa(param_1 + 10);
    }
    FUN_142a8a94e(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar1);
}



// FUNCTION 146f381fe FUN_146f381fe body=136 status=ok
// SIG undefined FUN_146f381fe(void)

void FUN_146f381fe(longlong param_1,ulonglong param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar4 = param_2 & 0xffffffff;
  FUN_146f3837a(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x38);
  iVar3 = (int)param_2;
  uVar2 = uVar4;
  FUN_140393c76(param_1 + 0x30,uVar4,0);
  memset((void *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1),
         (int)CONCAT71((int7)(uVar2 >> 8),0xff),(longlong)iVar3 - (longlong)iVar1);
  iVar1 = *(int *)(param_1 + 0x68);
  lVar5 = (longlong)iVar1;
  FUN_144a12820((longlong *)(param_1 + 0x60),param_2 & 0xffffffff,0);
  if (iVar1 < iVar3) {
    do {
      *(undefined4 *)(*(longlong *)(param_1 + 0x60) + lVar5 * 4) = 0x3f800000;
      lVar5 = lVar5 + 1;
    } while (iVar3 != lVar5);
  }
  FUN_146efc8cc(param_1 + 0x70,uVar4);
  return;
}



// FUNCTION 146f38286 FUN_146f38286 body=244 status=ok
// SIG undefined FUN_146f38286(void)

void FUN_146f38286(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 9);
  if ((longlong)iVar1 != 0) {
    lVar2 = param_1[8];
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(lVar2 + lVar3) + 0x2a8))();
      if ((*(longlong *)(lVar2 + lVar3) != 0) && (DAT_14c872a72 == '\0')) {
        FUN_140113f48();
      }
      *(undefined8 *)(lVar2 + lVar3) = 0;
      lVar3 = lVar3 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar3);
  }
  if ((param_1[3] != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48();
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    FUN_146f4031a(param_1 + 4);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if (*(int *)((longlong)param_1 + 0x3c) != 0) {
    FUN_144893a1c(param_1 + 6,0);
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (*(int *)((longlong)param_1 + 0x6c) != 0) {
    FUN_14482f6fa(param_1 + 0xc,0);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (*(int *)((longlong)param_1 + 0x7c) != 0) {
    FUN_14480809c(param_1 + 0xe,0);
    return;
  }
  return;
}



// FUNCTION 146f3837a FUN_146f3837a body=64 status=ok
// SIG undefined FUN_146f3837a(void)

void FUN_146f3837a(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f4034a();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
    }
  }
  return;
}



// FUNCTION 146f383bc FUN_146f383bc body=167 status=ok
// SIG undefined FUN_146f383bc(void)

void FUN_146f383bc(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *(int *)(param_1 + 0x88) = param_2;
  FUN_146f381fe();
  iVar1 = *(int *)(param_1 + 0x48);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x40);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      (**(code **)(*plVar3 + 0x2b0))(plVar3,param_2);
      lVar5 = lVar5 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar5);
  }
  if ((longlong)*(int *)(param_1 + 0x58) != 0) {
    plVar4 = *(longlong **)(param_1 + 0x50);
    plVar3 = plVar4 + (longlong)*(int *)(param_1 + 0x58) * 3;
    do {
      if ((*(byte *)((longlong)plVar4 + 0x14) & 1) != 0) {
        lVar2 = plVar4[1];
        lVar5 = (longlong)(int)lVar2;
        FUN_144a12820(plVar4,param_2,0);
        if ((int)lVar2 < param_2) {
          do {
            *(undefined4 *)(*plVar4 + lVar5 * 4) = 0x3f800000;
            lVar5 = lVar5 + 1;
          } while (param_2 != lVar5);
        }
      }
      plVar4 = plVar4 + 3;
    } while (plVar4 != plVar3);
  }
  return;
}



// FUNCTION 146f38464 FUN_146f38464 body=144 status=ok
// SIG undefined FUN_146f38464(void)

void FUN_146f38464(longlong param_1,uint param_2,float param_3)

{
  uint *puVar1;
  int *piVar2;
  float fVar3;
  char cVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  
  if (0.0 <= param_3) {
    lVar6 = *(longlong *)(param_1 + 0x30);
    lVar9 = (longlong)(int)param_2;
    cVar4 = *(char *)(lVar6 + lVar9);
    if (cVar4 == -1) {
      fVar3 = *(float *)(*(longlong *)(param_1 + 0x60) + lVar9 * 4);
      if ((fVar3 == param_3) && (!NAN(fVar3) && !NAN(param_3))) {
        return;
      }
    }
    *(float *)(*(longlong *)(param_1 + 0x60) + lVar9 * 4) = param_3;
    if (cVar4 != -1) {
      bVar5 = *(byte *)(lVar6 + lVar9);
      lVar7 = *(longlong *)(param_1 + 0x40);
      piVar2 = (int *)(lVar7 + 0x10 + (ulonglong)bVar5 * 0x18);
      *piVar2 = *piVar2 + -1;
      plVar8 = *(longlong **)(lVar7 + (ulonglong)bVar5 * 0x18);
      (**(code **)(*plVar8 + 0x2d0))(plVar8,param_2,lVar9 * 8 + *(longlong *)(param_1 + 0x20));
      *(undefined1 *)(lVar6 + lVar9) = 0xff;
    }
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)param_2 & 0x1f);
  }
  return;
}



// FUNCTION 146f384f4 FUN_146f384f4 body=59 status=ok
// SIG undefined FUN_146f384f4(void)

int FUN_146f384f4(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x48) != 0) {
    lVar2 = 0;
    iVar1 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x40) + 8 + lVar2) == param_2) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + 0x18;
    } while ((longlong)*(int *)(param_1 + 0x48) * 0x18 != lVar2);
  }
  return -(uint)(DAT_14c9998b8 != param_2);
}



// FUNCTION 146f38530 FUN_146f38530 body=722 status=ok
// SIG undefined FUN_146f38530(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_146f38530(longlong param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 *puVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  undefined1 *puVar19;
  ulonglong uVar20;
  undefined1 auStack_1f8 [7];
  undefined1 local_1f1;
  undefined8 local_1f0;
  uint local_1e8;
  int local_1e4;
  undefined1 local_1e0 [104];
  undefined1 local_178 [280];
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)local_178;
  FUN_142a8ad46();
  FUN_142a8b1c2(param_1);
  puVar13 = auStack_1f8;
  if ((ulonglong)*(uint *)(param_2 + 1) != 0) {
    uVar11 = 0;
    do {
      if (*(int *)(*param_2 + uVar11 * 4) != 0) {
        iVar16 = *(int *)(param_1 + 0x48);
        if ((longlong)iVar16 != 0) {
          lVar15 = *(longlong *)(param_1 + 0x40);
          lVar18 = 0;
          do {
            if (*(int *)(lVar15 + 0x10 + lVar18) != 0) {
              plVar4 = *(longlong **)(lVar15 + lVar18);
              (**(code **)(*plVar4 + 0x2e0))(plVar4,local_1e0);
            }
            lVar18 = lVar18 + 0x18;
          } while ((longlong)iVar16 * 0x18 != lVar18);
        }
        uVar1 = *(uint *)((longlong)param_2 + 0xc);
        uVar12 = 0;
        if ((uVar1 & 0x3fffffff) == 0) {
          puVar19 = (undefined1 *)0x0;
          puVar13 = auStack_1f8;
        }
        else {
          lVar15 = -((ulonglong)(uVar1 * 4 + 0xf) + 0xf & 0xfffffffffffffff0);
          puVar13 = auStack_1f8 + lVar15;
          puVar19 = auStack_1f8 + lVar15;
        }
        uVar2 = *(uint *)(param_2 + 1);
        if ((ulonglong)uVar2 != 0) {
          lVar15 = *param_2;
          uVar11 = 0;
          iVar16 = 0;
          uVar12 = 0;
          do {
            uVar17 = 0xffffffff;
            if (uVar11 == uVar2 - 1) {
              uVar17 = 0xffffffff >> (-(char)uVar1 & 0x1fU);
            }
            uVar17 = uVar17 & *(uint *)(lVar15 + uVar11 * 4);
            iVar14 = iVar16;
            if (uVar17 != 0) {
              do {
                if ((uVar17 & 1) != 0) {
                  uVar20 = (ulonglong)uVar12;
                  uVar12 = uVar12 + 1;
                  *(int *)(puVar19 + uVar20 * 4) = iVar14;
                }
                bVar8 = 1 < uVar17;
                uVar17 = uVar17 >> 1;
                iVar14 = iVar14 + 1;
              } while (bVar8);
            }
            uVar11 = uVar11 + 1;
            iVar16 = iVar16 + 0x20;
          } while (uVar11 != uVar2);
        }
        uVar3 = *(undefined4 *)(param_1 + 0x48);
        local_60 = 0;
        local_58 = 0x1000000000;
        local_50 = 0;
        *(undefined8 *)(puVar13 + -0x28) = 0x146f386d6;
        FUN_146f3bd9a(local_1e0,uVar3);
        if (uVar12 != 0) {
          lVar15 = 0;
          do {
            uVar1 = *(uint *)(puVar19 + lVar15);
            lVar18 = (longlong)(int)uVar1;
            plVar4 = *(longlong **)(param_1 + 8);
            if (0 < *(int *)(plVar4[2] + 0x128 + lVar18 * 0x130)) {
              if ((*(uint *)(plVar4[4] + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) == 0) {
                lVar10 = 0;
              }
              else {
                lVar10 = lVar18 * 0x28 + *plVar4;
              }
              uVar6 = *(undefined8 *)(lVar10 + 8);
              *(undefined8 *)(puVar13 + -0x28) = 0x146f3879d;
              puVar9 = (undefined8 *)FUN_146f48028(uVar6);
              iVar16 = *(int *)(puVar9 + 2);
              if (iVar16 != 0) {
                local_1f0 = *puVar9;
                local_1e8 = iVar16 + 0x1fU >> 5;
                local_1e4 = iVar16;
                *(undefined8 *)(puVar13 + -0x28) = 0x146f387d1;
                FUN_142a8b290(param_1,uVar1,local_1e0,&local_1f0);
                uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x50) + lVar18 * 0x18);
                *(undefined8 *)(puVar13 + -0x28) = 0x146f387ed;
                FUN_142a9df56(uVar6,uVar7);
              }
            }
            lVar15 = lVar15 + 4;
          } while ((longlong)(int)uVar12 * 4 != lVar15);
        }
        iVar16 = *(int *)(param_1 + 0x48);
        if ((longlong)iVar16 != 0) {
          lVar15 = *(longlong *)(param_1 + 0x40);
          lVar18 = 0;
          do {
            if (*(int *)(lVar15 + 0x10 + lVar18) != 0) {
              plVar4 = *(longlong **)(lVar15 + lVar18);
              pcVar5 = *(code **)(*plVar4 + 0x2f0);
              *(undefined8 *)(puVar13 + -0x28) = 0x146f38716;
              (*pcVar5)(plVar4,&local_1f1);
            }
            lVar18 = lVar18 + 0x18;
          } while ((longlong)iVar16 * 0x18 != lVar18);
        }
        *(undefined8 *)(puVar13 + -0x28) = 0x146f38730;
        FUN_146f3c150(local_1e0);
        break;
      }
      uVar11 = uVar11 + 1;
      puVar13 = auStack_1f8;
    } while (*(uint *)(param_2 + 1) != uVar11);
  }
  if ((local_48 ^ (ulonglong)local_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar13 + -0x28) = &UNK_146f385c8;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f38808 FUN_146f38808 body=138 status=ok
// SIG undefined FUN_146f38808(void)

void FUN_146f38808(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*(uint *)(param_1 + 0x58) <= param_2) {
    FUN_146f38892(param_1 + 0x50,param_2 + 1,0);
  }
  *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
  lVar1 = *(longlong *)(param_1 + 0x50) + (longlong)(int)param_2 * 0x18;
  FUN_144a67f5c(lVar1,param_1 + 0x60);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(byte *)(lVar1 + 0x14) = *(byte *)(lVar1 + 0x14) | 1;
  iVar2 = *(int *)(param_1 + 0x48);
  if ((longlong)iVar2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x40);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar1 + lVar4);
      (**(code **)(*plVar3 + 0x2b8))(plVar3,param_2);
      lVar4 = lVar4 + 0x18;
    } while ((longlong)iVar2 * 0x18 != lVar4);
  }
  return;
}



// FUNCTION 146f38892 FUN_146f38892 body=135 status=ok
// SIG undefined FUN_146f38892(void)

void FUN_146f38892(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f403ee(param_1,iVar1);
    }
    FUN_146f403cf((longlong)iVar1 * 0x18 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146f40482(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146f404e4(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f3891a FUN_146f3891a body=120 status=ok
// SIG undefined FUN_146f3891a(void)

void FUN_146f3891a(longlong param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + -1;
  lVar3 = *(longlong *)(param_1 + 0x50);
  lVar5 = (longlong)param_2;
  puVar1 = (uint *)(lVar3 + 0x14 + lVar5 * 0x18);
  *puVar1 = *puVar1 & 0xfffffffe;
  *(undefined4 *)(lVar3 + 8 + lVar5 * 0x18) = 0;
  if (*(int *)(lVar3 + 0xc + lVar5 * 0x18) != 0) {
    FUN_14482f6fa(lVar3 + lVar5 * 0x18,0);
  }
  iVar2 = *(int *)(param_1 + 0x48);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x40);
    lVar5 = 0;
    do {
      plVar4 = *(longlong **)(lVar3 + lVar5);
      (**(code **)(*plVar4 + 0x2c0))(plVar4,param_2);
      lVar5 = lVar5 + 0x18;
    } while ((longlong)iVar2 * 0x18 != lVar5);
  }
  return;
}



// FUNCTION 146f38992 FUN_146f38992 body=472 status=ok
// SIG undefined FUN_146f38992(void)

void FUN_146f38992(longlong param_1,longlong *param_2,longlong param_3)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined1 local_d0 [128];
  undefined1 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_50 = (undefined1 *)0x0;
  local_48 = 0x1000000000;
  lVar8 = *(longlong *)(param_3 + 0x120);
  if (*(longlong *)(param_3 + 0x120) == 0) {
    lVar8 = param_3;
  }
  iVar3 = *(int *)(param_3 + 0x128);
  if ((longlong)iVar3 != 0) {
    lVar6 = 0;
    do {
      uVar5 = local_48;
      if ((*(int *)(lVar8 + lVar6) != 0) || (*(int *)(lVar8 + 4 + lVar6) != 0)) {
        lVar7 = (longlong)(int)local_48;
        uVar2 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,uVar2);
        if (local_48._4_4_ < uVar2) {
          FUN_146f40654(local_d0,uVar5 & 0xffffffff);
        }
        puVar4 = local_50;
        if (local_50 == (undefined1 *)0x0) {
          puVar4 = local_d0;
        }
        *(undefined8 *)(puVar4 + lVar7 * 8) = *(undefined8 *)(lVar8 + lVar6);
      }
      uVar1 = local_48;
      uVar5 = *(ulonglong *)(lVar8 + 8 + lVar6);
      if (((int)uVar5 != *(int *)(lVar8 + lVar6)) && (uVar5 >> 0x20 != 0 || (int)uVar5 != 0)) {
        lVar7 = (longlong)(int)local_48;
        uVar2 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,uVar2);
        if (local_48._4_4_ < uVar2) {
          FUN_146f40654(local_d0,uVar1 & 0xffffffff);
          uVar5 = *(ulonglong *)(lVar8 + 8 + lVar6);
        }
        puVar4 = local_50;
        if (local_50 == (undefined1 *)0x0) {
          puVar4 = local_d0;
        }
        *(ulonglong *)(puVar4 + lVar7 * 8) = uVar5;
      }
      lVar6 = lVar6 + 0x48;
    } while ((longlong)iVar3 * 0x48 != lVar6);
    lVar8 = (longlong)(int)local_48;
    puVar4 = local_d0;
    if (local_50 != (undefined1 *)0x0) {
      puVar4 = local_50;
    }
    if (lVar8 != 0) {
      lVar6 = 0;
      do {
        local_d8 = *(undefined8 *)(puVar4 + lVar6);
        iVar3 = FUN_146f1808a(*(undefined8 *)(param_1 + 0x10),&local_d8);
        if (iVar3 != 0) {
          *(undefined4 *)(*param_2 + (longlong)iVar3 * 4) = 0x4b189680;
        }
        lVar6 = lVar6 + 8;
      } while (lVar8 * 8 != lVar6);
    }
    if (local_50 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f38b6c FUN_146f38b6c body=205 status=ok
// SIG undefined FUN_146f38b6c(void)

longlong * FUN_146f38b6c(longlong *param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  
  param_1[0x30] = 0;
  param_1[0x31] = 0x1000000000;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = param_2;
  FUN_146f3c26e(0,param_3);
  FUN_14017c08a(param_1 + 0x32,param_3 << 9,1);
  FUN_146f3c2c2(param_1 + 0x34);
  plVar2 = (longlong *)param_1[0x30];
  if ((longlong *)param_1[0x30] == (longlong *)0x0) {
    plVar2 = param_1;
  }
  if ((longlong)(int)param_1[0x31] != 0) {
    plVar1 = plVar2 + (longlong)(int)param_1[0x31] * 3;
    uVar3 = 0;
    do {
      *plVar2 = (ulonglong)uVar3 * 4 + param_1[0x32];
      plVar2[2] = (ulonglong)uVar3 * 8 + param_1[0x34];
      plVar2 = plVar2 + 3;
      uVar3 = uVar3 + 0x200;
    } while (plVar2 != plVar1);
  }
  return param_1;
}



// FUNCTION 146f38c3a FUN_146f38c3a body=254 status=ok
// SIG undefined FUN_146f38c3a(void)

void FUN_146f38c3a(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  int local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_146f38d82(param_2,param_3,param_4,*(undefined8 *)(param_1 + 0x30));
  local_48 = *(longlong *)(param_1 + 0x10) + 0x290;
  local_40 = *(undefined8 *)(param_1 + 0x20);
  lVar6 = *(longlong *)(param_2 + 0x180);
  if (*(longlong *)(param_2 + 0x180) == 0) {
    lVar6 = param_2;
  }
  iVar1 = *(int *)(param_2 + 0x188);
  if ((longlong)iVar1 != 0) {
    lVar5 = 0;
    do {
      iVar2 = *(int *)(lVar6 + 8 + lVar5);
      if (iVar2 != 0) {
        local_60 = *(undefined8 *)(lVar6 + lVar5);
        local_50 = *(undefined8 *)(lVar6 + 0x10 + lVar5);
        lVar4 = *(longlong *)(param_2 + 0x180);
        if (*(longlong *)(param_2 + 0x180) == 0) {
          lVar4 = param_2;
        }
        plVar3 = *(longlong **)
                  (*(longlong *)(param_1 + 0x40) +
                  (longlong)((int)((ulonglong)((lVar6 + lVar5) - lVar4) >> 3) * -0x55555555) * 0x18)
        ;
        local_58 = iVar2;
        (**(code **)(*plVar3 + 0x2d8))(plVar3,&local_60);
      }
      lVar5 = lVar5 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar5);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f38d3a FUN_146f38d3a body=71 status=ok
// SIG undefined FUN_146f38d3a(void)

void FUN_146f38d3a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f38d82 FUN_146f38d82 body=476 status=ok
// SIG undefined FUN_146f38d82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f38d82(longlong param_1,longlong param_2,int param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar12;
  undefined1 auVar11 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar13 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  auVar4 = _DAT_149931e80;
  lVar6 = *(longlong *)(param_1 + 0x180);
  lVar8 = lVar6;
  if (lVar6 == 0) {
    lVar8 = param_1;
  }
  if ((longlong)*(int *)(param_1 + 0x188) != 0) {
    uVar7 = (longlong)*(int *)(param_1 + 0x188) * 0x18 - 0x18;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar7;
    uVar10 = SUB164(auVar13 * ZEXT816(0xaaaaaaaaaaaaaaab),8);
    uVar12 = (undefined4)(uVar7 / 0x180000000);
    auVar14._0_8_ = CONCAT44(uVar12,uVar10);
    auVar14._8_4_ = uVar10;
    auVar14._12_4_ = uVar12;
    auVar11._0_8_ = auVar14._0_8_ >> 4;
    auVar11._8_8_ = auVar14._8_8_ >> 4;
    puVar9 = (undefined4 *)(lVar8 + 0x50);
    uVar5 = 0;
    auVar13 = pmovsxbq(in_XMM1,0x302);
    auVar14 = pmovsxbq(in_XMM2,0x100);
    auVar11 = auVar11 | _DAT_149931e80;
    do {
      lVar6 = auVar11._0_8_;
      lVar8 = auVar11._8_8_;
      if ((bool)(~(lVar6 < (longlong)(uVar5 ^ auVar4._0_8_)) & 1)) {
        puVar9[-0x12] = 0;
      }
      auVar15._8_4_ = (int)uVar5;
      auVar15._0_8_ = uVar5;
      auVar15._12_4_ = (int)(uVar5 >> 0x20);
      if ((longlong)((auVar15._8_8_ | auVar14._8_8_) ^ auVar4._8_8_) <= lVar8) {
        puVar9[-0xc] = 0;
      }
      auVar15 = (auVar15 | auVar13) ^ auVar4;
      if (auVar15._0_8_ <= lVar6) {
        puVar9[-6] = 0;
      }
      if (auVar15._8_8_ <= lVar8) {
        *puVar9 = 0;
      }
      uVar5 = uVar5 + 4;
      puVar9 = puVar9 + 0x18;
    } while ((uVar7 / 0x18 + 4 & 0xfffffffffffffffc) != uVar5);
    lVar6 = *(longlong *)(param_1 + 0x180);
  }
  if (lVar6 == 0) {
    lVar6 = param_1;
  }
  lVar8 = 0;
  do {
    uVar2 = *(uint *)(param_2 + lVar8);
    uVar7 = (ulonglong)*(byte *)(param_4 + (ulonglong)uVar2);
    if ((uVar7 != 0xff) &&
       (lVar3 = *(longlong *)
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x270) +
                   (longlong)((int)uVar2 / 100) * 8) + 0x18 + (longlong)((int)uVar2 % 100) * 0x38),
       lVar3 != 0)) {
      *(uint *)(*(longlong *)(lVar6 + uVar7 * 0x18) +
               (ulonglong)*(uint *)(lVar6 + 8 + uVar7 * 0x18) * 4) = uVar2;
      *(longlong *)
       (*(longlong *)(lVar6 + 0x10 + uVar7 * 0x18) +
       (ulonglong)*(uint *)(lVar6 + 8 + uVar7 * 0x18) * 8) = lVar3;
      piVar1 = (int *)(lVar6 + 8 + uVar7 * 0x18);
      *piVar1 = *piVar1 + 1;
    }
    lVar8 = lVar8 + 4;
  } while ((longlong)param_3 * 4 != lVar8);
  return;
}



// FUNCTION 146f38f5e FUN_146f38f5e body=148 status=ok
// SIG undefined FUN_146f38f5e(void)

undefined8 FUN_146f38f5e(undefined8 param_1)

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
  uVar1 = FUN_145b0a3f0();
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



// FUNCTION 146f38ff3 FUN_146f38ff3 body=196 status=ok
// SIG undefined FUN_146f38ff3(void)

undefined8 FUN_146f38ff3(undefined8 param_1,undefined8 param_2,longlong param_3)

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
  local_a0 = 0;
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



// FUNCTION 146f390b8 FUN_146f390b8 body=175 status=ok
// SIG undefined FUN_146f390b8(void)

undefined8 FUN_146f390b8(undefined8 param_1,undefined8 param_2)

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



// FUNCTION 146f39168 FUN_146f39168 body=89 status=ok
// SIG undefined FUN_146f39168(void)

void FUN_146f39168(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    FUN_1401924dc(lVar1);
  }
  if ((*(longlong *)(param_1 + 0x60) != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48();
  }
  *(longlong *)(param_1 + 0x60) = lVar1;
  FUN_146f14ba4(param_1 + 0x40,*(undefined4 *)((longlong)param_2 + 0x14));
  uVar2 = FUN_146f46348(*param_2);
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  return;
}



// FUNCTION 146f391c2 FUN_146f391c2 body=53 status=ok
// SIG undefined FUN_146f391c2(void)

void FUN_146f391c2(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x58) = 0;
  if ((*(longlong *)(param_1 + 0x60) != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48();
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}



// FUNCTION 146f391f8 FUN_146f391f8 body=265 status=ok
// SIG undefined FUN_146f391f8(void)

void FUN_146f391f8(undefined8 param_1,longlong param_2,longlong param_3,uint param_4,
                  ulonglong *param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  size_t _Size;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 + 0x100 != param_3 + 0x28) {
    lVar2 = param_3 + 0x28;
    if (*(longlong *)(param_3 + 0x148) != 0) {
      lVar2 = *(longlong *)(param_3 + 0x148);
    }
    FUN_146f2a024(param_2 + 0x100,lVar2,*(undefined4 *)(param_3 + 0x150),
                  *(undefined4 *)(param_2 + 0x22c));
  }
  *(undefined4 *)(param_2 + 0x230) = *(undefined4 *)(param_3 + 0x20);
  uVar3 = (ulonglong)param_4;
  _Size = uVar3 * 0x20;
  uVar1 = *param_5 + 0xf & 0xfffffffffffffff0;
  uVar4 = uVar1 + _Size;
  if (param_5[1] < uVar4) {
    FUN_140023dd8(param_5,(uint)_Size | 0x10);
    uVar1 = *param_5 + 0xf & 0xfffffffffffffff0;
    uVar4 = uVar1 + _Size;
  }
  *param_5 = uVar4;
  *(ulonglong *)(param_2 + 0x238) = uVar1;
  uVar1 = *param_5 + 0xf & 0xfffffffffffffff0;
  uVar4 = uVar1 + uVar3 * 4;
  if (param_5[1] < uVar4) {
    FUN_140023dd8(param_5,(int)(uVar3 * 4) + 0x10);
    uVar1 = *param_5 + 0xf & 0xfffffffffffffff0;
    uVar4 = uVar3 * 4 + uVar1;
  }
  *param_5 = uVar4;
  *(ulonglong *)(param_2 + 0x240) = uVar1;
  FUN_146f39320(param_1);
  memset(*(void **)(param_2 + 0x238),0,_Size);
  return;
}



// FUNCTION 146f39302 FUN_146f39302 body=29 status=ok
// SIG undefined FUN_146f39302(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f39302(double *param_1)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  uint uVar14;
  double *pdVar15;
  double *pdVar16;
  longlong lVar17;
  ulonglong uVar18;
  double *pdVar19;
  longlong lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar41;
  undefined1 auVar40 [16];
  double dVar42;
  double dVar43;
  double dVar47;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar48;
  double dVar49;
  undefined1 auVar46 [16];
  double dVar50;
  double dVar54;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar55;
  double dVar56;
  double dVar60;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  double dVar61;
  undefined1 auVar59 [16];
  double dVar62;
  double dVar65;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  double dVar66;
  double dVar67;
  double dVar70;
  undefined1 auVar68 [16];
  double dVar71;
  undefined1 auVar69 [16];
  undefined1 auStack_258 [32];
  double dStack_238;
  double dStack_230;
  double dStack_228;
  double dStack_220;
  double dStack_218;
  double dStack_210;
  double adStack_208 [32];
  double *pdStack_108;
  undefined8 uStack_f8;
  ulonglong uStack_e0;
  
  if (*(int *)(param_1 + 0x45) == 2) {
    pdVar16 = param_1 + 0x20;
    if ((double *)param_1[0x44] != (double *)0x0) {
      pdVar16 = (double *)param_1[0x44];
    }
    uVar14 = *(uint *)((longlong)param_1 + 0x234);
    if ((ulonglong)uVar14 != 0) {
      dVar61 = pdVar16[2];
      dVar12 = pdVar16[3];
      dVar8 = pdVar16[4];
      dVar13 = pdVar16[0xb];
      dVar43 = pdVar16[0xc];
      dVar9 = pdVar16[0xd];
      dVar56 = param_1[0x48];
      pdVar16 = (double *)((longlong)param_1[0x47] + 0x70);
      uVar18 = 0;
      do {
        dVar41 = pdVar16[-0xe] - dVar61;
        dVar42 = pdVar16[-0xd] - dVar12;
        dVar49 = pdVar16[-0xc] - dVar8;
        dVar36 = pdVar16[-0xb] - 0.0;
        dVar50 = dVar49 * dVar49 + dVar41 * dVar41;
        dVar54 = dVar36 * dVar36 + dVar42 * dVar42;
        dVar49 = pdVar16[-10] - dVar61;
        dVar36 = pdVar16[-9] - dVar12;
        dVar41 = pdVar16[-8] - dVar8;
        dVar42 = pdVar16[-7] - 0.0;
        dVar55 = dVar41 * dVar41 + dVar49 * dVar49;
        dVar60 = dVar42 * dVar42 + dVar36 * dVar36;
        dVar41 = pdVar16[-0xe] - dVar13;
        dVar42 = pdVar16[-0xd] - dVar43;
        dVar49 = pdVar16[-0xc] - dVar9;
        dVar36 = pdVar16[-0xb] - 0.0;
        dVar48 = dVar49 * dVar49 + dVar41 * dVar41;
        dVar67 = dVar36 * dVar36 + dVar42 * dVar42;
        dVar49 = pdVar16[-6] - dVar61;
        dVar36 = pdVar16[-5] - dVar12;
        dVar41 = pdVar16[-4] - dVar8;
        dVar42 = pdVar16[-3] - 0.0;
        dVar66 = dVar41 * dVar41 + dVar49 * dVar49;
        dVar70 = dVar42 * dVar42 + dVar36 * dVar36;
        dVar41 = pdVar16[-10] - dVar13;
        dVar42 = pdVar16[-9] - dVar43;
        dVar49 = pdVar16[-8] - dVar9;
        dVar36 = pdVar16[-7] - 0.0;
        dVar71 = dVar49 * dVar49 + dVar41 * dVar41;
        dVar47 = dVar36 * dVar36 + dVar42 * dVar42;
        dVar49 = pdVar16[-2] - dVar61;
        dVar36 = pdVar16[-1] - dVar12;
        dVar41 = *pdVar16 - dVar8;
        dVar42 = pdVar16[1] - 0.0;
        dVar62 = dVar41 * dVar41 + dVar49 * dVar49;
        dVar65 = dVar42 * dVar42 + dVar36 * dVar36;
        dVar49 = pdVar16[-6] - dVar13;
        dVar36 = pdVar16[-5] - dVar43;
        dVar41 = pdVar16[-4] - dVar9;
        dVar42 = pdVar16[-3] - 0.0;
        dVar41 = dVar41 * dVar41 + dVar49 * dVar49;
        dVar42 = dVar42 * dVar42 + dVar36 * dVar36;
        auVar37._0_8_ = dVar48 + dVar67;
        auVar37._8_8_ = dVar48 + dVar67;
        dVar49 = pdVar16[-2] - dVar13;
        dVar36 = pdVar16[-1] - dVar43;
        auVar44._0_8_ = dVar71 + dVar47;
        auVar44._8_8_ = dVar71 + dVar47;
        dVar48 = *pdVar16 - dVar9;
        dVar67 = pdVar16[1] - 0.0;
        auVar22._0_8_ = dVar41 + dVar42;
        auVar22._8_8_ = dVar41 + dVar42;
        auVar51._0_8_ = dVar50 + dVar54;
        auVar51._8_8_ = dVar50 + dVar54;
        auVar57._0_8_ = dVar55 + dVar60;
        auVar57._8_8_ = dVar55 + dVar60;
        dVar49 = dVar48 * dVar48 + dVar49 * dVar49;
        dVar36 = dVar67 * dVar67 + dVar36 * dVar36;
        auVar26._0_8_ = dVar49 + dVar36;
        auVar26._8_8_ = dVar49 + dVar36;
        auVar30 = minpd(auVar51,auVar37);
        auVar68._0_8_ = dVar66 + dVar70;
        auVar68._8_8_ = dVar66 + dVar70;
        auVar34 = minpd(auVar57,auVar44);
        auVar63._0_8_ = dVar62 + dVar65;
        auVar63._8_8_ = dVar62 + dVar65;
        auVar58._8_8_ = auVar34._8_8_;
        auVar58._0_8_ = auVar30._8_8_;
        auVar34 = minpd(auVar68,auVar22);
        auVar22 = minpd(auVar63,auVar26);
        auVar64._8_8_ = auVar22._8_8_;
        auVar64._0_8_ = auVar34._8_8_;
        auVar30 = sqrtpd(auVar30,auVar64);
        auVar22 = sqrtpd(auVar26,auVar58);
        auVar27._0_8_ = auVar22._0_8_ - *param_1;
        auVar27._8_8_ = auVar22._8_8_ - param_1[1];
        auVar52._0_8_ = auVar30._0_8_ - param_1[2];
        auVar52._8_8_ = auVar30._8_8_ - param_1[3];
        auVar22 = maxpd(auVar27,ZEXT816(0));
        auVar53 = maxpd(auVar52,ZEXT816(0));
        auVar30._8_8_ = -(ulonglong)(param_1[9] < auVar22._8_8_);
        auVar30._0_8_ = -(ulonglong)(param_1[8] < auVar22._0_8_);
        auVar38._0_8_ = param_1[0xc] * auVar22._0_8_ * param_1[0x1c] + param_1[0x10];
        auVar38._8_8_ = param_1[0xd] * auVar22._8_8_ * param_1[0x1d] + param_1[0x11];
        auVar22 = blendvpd(auVar38,*(undefined1 (*) [16])(param_1 + 0x18),auVar30);
        auVar45._0_8_ = param_1[0xe] * auVar53._0_8_ * param_1[0x1e] + param_1[0x12];
        auVar45._8_8_ = param_1[0xf] * auVar53._8_8_ * param_1[0x1f] + param_1[0x13];
        auVar34._8_8_ = -(ulonglong)(param_1[0xb] < auVar53._8_8_);
        auVar34._0_8_ = -(ulonglong)(param_1[10] < auVar53._0_8_);
        auVar30 = blendvpd(auVar45,*(undefined1 (*) [16])(param_1 + 0x1a),auVar34);
        uVar5 = *(undefined8 *)((longlong)dVar56 + 8 + uVar18 * 4);
        auVar53._0_8_ = (double)(float)uVar5;
        auVar53._8_8_ = (double)(float)((ulonglong)uVar5 >> 0x20);
        auVar30 = maxpd(auVar30,auVar53);
        uVar5 = *(undefined8 *)((longlong)dVar56 + uVar18 * 4);
        auVar21._0_8_ = (double)(float)uVar5;
        auVar21._8_8_ = (double)(float)((ulonglong)uVar5 >> 0x20);
        auVar22 = maxpd(auVar22,auVar21);
        puVar4 = (undefined8 *)((longlong)dVar56 + uVar18 * 4);
        *puVar4 = CONCAT44((float)auVar22._8_8_,(float)auVar22._0_8_);
        puVar4[1] = CONCAT44((float)auVar30._8_8_,(float)auVar30._0_8_);
        uVar18 = uVar18 + 4;
        pdVar16 = pdVar16 + 0x10;
      } while (uVar18 < uVar14);
    }
    return;
  }
  if (*(int *)(param_1 + 0x45) != 1) {
    uStack_e0 = DAT_14c707940 ^ (ulonglong)auStack_258;
    pdStack_108 = (double *)0x0;
    uStack_f8 = 0x800000000;
    pdVar16 = param_1 + 0x20;
    if ((double *)param_1[0x44] != (double *)0x0) {
      pdVar16 = (double *)param_1[0x44];
    }
    iVar7 = *(int *)(param_1 + 0x45);
    if ((longlong)iVar7 != 0) {
      lVar20 = 0;
      do {
        uVar18 = uStack_f8;
        pdVar15 = (double *)((longlong)pdVar16 + lVar20 + 0x10);
        dVar8 = *pdVar15;
        dVar9 = pdVar15[1];
        auVar39._8_8_ = 0;
        auVar39._0_8_ = *(ulonglong *)((longlong)pdVar16 + lVar20 + 0x20);
        lVar17 = (longlong)(int)uStack_f8;
        uVar14 = (int)uStack_f8 + 1;
        uStack_f8 = CONCAT44(uStack_f8._4_4_,uVar14);
        if (uStack_f8._4_4_ < uVar14) {
          FUN_146f4085e(adStack_208,uVar18 & 0xffffffff);
        }
        pdVar15 = pdStack_108;
        if (pdStack_108 == (double *)0x0) {
          pdVar15 = adStack_208;
        }
        pdVar15[lVar17 * 4] = dVar8;
        (pdVar15 + lVar17 * 4)[1] = dVar9;
        *(undefined1 (*) [16])(pdVar15 + lVar17 * 4 + 2) = auVar39;
        lVar20 = lVar20 + 0x48;
      } while ((longlong)iVar7 * 0x48 != lVar20);
    }
    uVar14 = *(uint *)((longlong)param_1 + 0x234);
    if ((ulonglong)uVar14 != 0) {
      dVar8 = param_1[0x47];
      dVar9 = param_1[0x48];
      uVar18 = 0;
      do {
        pdVar16 = pdStack_108;
        if (pdStack_108 == (double *)0x0) {
          pdVar16 = adStack_208;
        }
        auVar22 = _DAT_149934db0;
        auVar30 = _DAT_149934db0;
        auVar34 = _DAT_149934db0;
        auVar53 = _DAT_149934db0;
        if ((longlong)(int)uStack_f8 != 0) {
          lVar20 = uVar18 * 0x20;
          dStack_218 = *(double *)((longlong)dVar8 + lVar20);
          dStack_210 = ((double *)((longlong)dVar8 + lVar20))[1];
          pdVar15 = (double *)((longlong)dVar8 + 0x10 + lVar20);
          dStack_228 = *pdVar15;
          dStack_220 = pdVar15[1];
          pdVar15 = (double *)((longlong)dVar8 + 0x20 + lVar20);
          dStack_238 = *pdVar15;
          dStack_230 = pdVar15[1];
          pdVar15 = (double *)((longlong)dVar8 + 0x30 + lVar20);
          pdVar1 = (double *)((longlong)dVar8 + 0x40 + lVar20);
          in_XMM5 = *(undefined1 (*) [16])((longlong)dVar8 + 0x50 + lVar20);
          pdVar2 = (double *)((longlong)dVar8 + 0x60 + lVar20);
          pdVar3 = (double *)((longlong)dVar8 + 0x70 + lVar20);
          pdVar19 = pdVar16 + (longlong)(int)uStack_f8 * 4;
          do {
            dVar43 = *pdVar16;
            dVar49 = pdVar16[1];
            dVar36 = pdVar16[2];
            dVar41 = pdVar16[3];
            dVar56 = *pdVar1 - dVar43;
            dVar61 = pdVar1[1] - dVar49;
            dVar12 = *pdVar2 - dVar43;
            dVar13 = pdVar2[1] - dVar49;
            dVar42 = *pdVar15 - dVar36;
            dVar48 = pdVar15[1] - dVar41;
            dVar67 = (dStack_228 - dVar36) * (dStack_228 - dVar36) +
                     (dStack_218 - dVar43) * (dStack_218 - dVar43);
            dVar71 = (dStack_220 - dVar41) * (dStack_220 - dVar41) +
                     (dStack_210 - dVar49) * (dStack_210 - dVar49);
            auVar69._0_8_ = dVar67 + dVar71;
            auVar69._8_8_ = dVar67 + dVar71;
            dVar67 = in_XMM5._0_8_ - dVar36;
            dVar71 = in_XMM5._8_8_ - dVar41;
            dVar43 = dVar42 * dVar42 + (dStack_238 - dVar43) * (dStack_238 - dVar43);
            dVar49 = dVar48 * dVar48 + (dStack_230 - dVar49) * (dStack_230 - dVar49);
            auVar46._0_8_ = dVar43 + dVar49;
            auVar46._8_8_ = dVar43 + dVar49;
            dVar36 = *pdVar3 - dVar36;
            dVar41 = pdVar3[1] - dVar41;
            dVar56 = dVar67 * dVar67 + dVar56 * dVar56;
            dVar61 = dVar71 * dVar71 + dVar61 * dVar61;
            auVar59._0_8_ = dVar56 + dVar61;
            auVar59._8_8_ = dVar56 + dVar61;
            auVar34 = minpd(auVar34,auVar69);
            auVar22 = minpd(auVar22,auVar46);
            dVar56 = dVar36 * dVar36 + dVar12 * dVar12;
            dVar61 = dVar41 * dVar41 + dVar13 * dVar13;
            auVar40._0_8_ = dVar56 + dVar61;
            auVar40._8_8_ = dVar56 + dVar61;
            auVar53 = minpd(auVar53,auVar59);
            auVar30 = minpd(auVar30,auVar40);
            pdVar16 = pdVar16 + 4;
          } while (pdVar16 != pdVar19);
        }
        auVar31._8_8_ = auVar30._8_8_;
        auVar31._0_8_ = auVar53._8_8_;
        auVar23._8_8_ = auVar22._8_8_;
        auVar23._0_8_ = auVar34._8_8_;
        uVar5 = *(undefined8 *)((longlong)dVar9 + uVar18 * 4);
        puVar4 = (undefined8 *)((longlong)dVar9 + 8 + uVar18 * 4);
        uVar6 = *puVar4;
        auVar28._8_8_ = *puVar4;
        auVar28._0_8_ = uVar6;
        auVar22 = sqrtpd(auVar28,auVar31);
        auVar30 = sqrtpd(in_XMM5,auVar23);
        auVar33._0_8_ = auVar30._0_8_ - *param_1;
        auVar33._8_8_ = auVar30._8_8_ - param_1[1];
        auVar29._0_8_ = auVar22._0_8_ - param_1[2];
        auVar29._8_8_ = auVar22._8_8_ - param_1[3];
        in_XMM5 = maxpd(auVar33,ZEXT816(0));
        auVar22 = maxpd(auVar29,ZEXT816(0));
        auVar32._0_8_ = param_1[0xc] * in_XMM5._0_8_ * param_1[0x1c] + param_1[0x10];
        auVar32._8_8_ = param_1[0xd] * in_XMM5._8_8_ * param_1[0x1d] + param_1[0x11];
        auVar35._0_8_ = param_1[0xe] * auVar22._0_8_ * param_1[0x1e] + param_1[0x12];
        auVar35._8_8_ = param_1[0xf] * auVar22._8_8_ * param_1[0x1f] + param_1[0x13];
        auVar24._8_8_ = -(ulonglong)(param_1[9] < in_XMM5._8_8_);
        auVar24._0_8_ = -(ulonglong)(param_1[8] < in_XMM5._0_8_);
        auVar30 = blendvpd(auVar32,*(undefined1 (*) [16])(param_1 + 0x18),auVar24);
        auVar25._8_8_ = -(ulonglong)(param_1[0xb] < auVar22._8_8_);
        auVar25._0_8_ = -(ulonglong)(param_1[10] < auVar22._0_8_);
        auVar10._8_8_ = (double)(float)((ulonglong)uVar5 >> 0x20);
        auVar10._0_8_ = (double)(float)uVar5;
        auVar22 = maxpd(auVar30,auVar10);
        auVar30 = blendvpd(auVar35,*(undefined1 (*) [16])(param_1 + 0x1a),auVar25);
        auVar11._8_8_ = (double)(float)((ulonglong)uVar6 >> 0x20);
        auVar11._0_8_ = (double)(float)uVar6;
        auVar30 = maxpd(auVar30,auVar11);
        puVar4 = (undefined8 *)((longlong)dVar9 + uVar18 * 4);
        *puVar4 = CONCAT44((float)auVar22._8_8_,(float)auVar22._0_8_);
        puVar4[1] = CONCAT44((float)auVar30._8_8_,(float)auVar30._0_8_);
        uVar18 = uVar18 + 4;
      } while (uVar18 < uVar14);
    }
    if (pdStack_108 != (double *)0x0) {
      FUN_1400020a8();
    }
    if ((uStack_e0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  FUN_142a8ba3e();
  return;
}



// FUNCTION 146f39320 FUN_146f39320 body=186 status=ok
// SIG undefined FUN_146f39320(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f39320(longlong param_1,double *param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar24;
  undefined1 auVar23 [16];
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  
  lVar1 = *(longlong *)(param_1 + 0x60);
  dVar22 = (double)*(float *)(lVar1 + 0x28);
  dVar24 = (double)*(float *)(lVar1 + 0x28);
  dVar6 = (double)*(float *)(lVar1 + 0x2c);
  dVar7 = (double)*(float *)(lVar1 + 0x2c);
  uVar25 = (undefined4)((ulonglong)dVar7 >> 0x20);
  dVar10 = (double)*(float *)(lVar1 + 0x30);
  dVar11 = (double)*(float *)(lVar1 + 0x30);
  uVar27 = (undefined4)((ulonglong)dVar11 >> 0x20);
  dVar16 = (double)*(float *)(lVar1 + 0x34);
  dVar17 = (double)*(float *)(lVar1 + 0x34);
  uVar28 = (undefined4)((ulonglong)dVar17 >> 0x20);
  dVar20 = (double)*(float *)(lVar1 + 0x38);
  dVar21 = (double)*(float *)(lVar1 + 0x38);
  uVar29 = SUB84(dVar21,0);
  uVar30 = (undefined4)((ulonglong)dVar21 >> 0x20);
  *param_2 = dVar22;
  param_2[1] = dVar24;
  param_2[2] = dVar22;
  param_2[3] = dVar24;
  auVar23._8_4_ = SUB84(dVar7,0);
  auVar23._0_8_ = dVar6;
  auVar23._12_4_ = uVar25;
  *(undefined1 (*) [16])(param_2 + 4) = auVar23;
  auVar2._8_4_ = SUB84(dVar7,0);
  auVar2._0_8_ = dVar6;
  auVar2._12_4_ = uVar25;
  *(undefined1 (*) [16])(param_2 + 6) = auVar2;
  dVar6 = dVar6 - dVar22;
  uVar25 = SUB84(dVar7 - dVar24,0);
  uVar26 = (undefined4)((ulonglong)(dVar7 - dVar24) >> 0x20);
  auVar3._8_4_ = uVar25;
  auVar3._0_8_ = dVar6;
  auVar3._12_4_ = uVar26;
  *(undefined1 (*) [16])(param_2 + 8) = auVar3;
  auVar4._8_4_ = uVar25;
  auVar4._0_8_ = dVar6;
  auVar4._12_4_ = uVar26;
  *(undefined1 (*) [16])(param_2 + 10) = auVar4;
  auVar5._8_4_ = uVar25;
  auVar5._0_8_ = dVar6;
  auVar5._12_4_ = uVar26;
  auVar23 = divpd(_DAT_149934d80,auVar5);
  *(undefined1 (*) [16])(param_2 + 0xc) = auVar23;
  *(undefined1 (*) [16])(param_2 + 0xe) = auVar23;
  auVar8._8_4_ = SUB84(dVar11,0);
  auVar8._0_8_ = dVar10;
  auVar8._12_4_ = uVar27;
  *(undefined1 (*) [16])(param_2 + 0x10) = auVar8;
  auVar9._8_4_ = SUB84(dVar11,0);
  auVar9._0_8_ = dVar10;
  auVar9._12_4_ = uVar27;
  *(undefined1 (*) [16])(param_2 + 0x12) = auVar9;
  auVar12._8_4_ = SUB84(dVar17,0);
  auVar12._0_8_ = dVar16;
  auVar12._12_4_ = uVar28;
  *(undefined1 (*) [16])(param_2 + 0x14) = auVar12;
  auVar13._8_4_ = SUB84(dVar17,0);
  auVar13._0_8_ = dVar16;
  auVar13._12_4_ = uVar28;
  *(undefined1 (*) [16])(param_2 + 0x16) = auVar13;
  uVar25 = SUB84(dVar17 - dVar11,0);
  uVar26 = (undefined4)((ulonglong)(dVar17 - dVar11) >> 0x20);
  auVar18._8_4_ = uVar29;
  auVar18._0_8_ = dVar20;
  auVar18._12_4_ = uVar30;
  *(undefined1 (*) [16])(param_2 + 0x18) = auVar18;
  auVar19._8_4_ = uVar29;
  auVar19._0_8_ = dVar20;
  auVar19._12_4_ = uVar30;
  *(undefined1 (*) [16])(param_2 + 0x1a) = auVar19;
  auVar14._8_4_ = uVar25;
  auVar14._0_8_ = dVar16 - dVar10;
  auVar14._12_4_ = uVar26;
  *(undefined1 (*) [16])(param_2 + 0x1c) = auVar14;
  auVar15._8_4_ = uVar25;
  auVar15._0_8_ = dVar16 - dVar10;
  auVar15._12_4_ = uVar26;
  *(undefined1 (*) [16])(param_2 + 0x1e) = auVar15;
  return;
}



// FUNCTION 146f393da FUN_146f393da body=74 status=ok
// SIG undefined FUN_146f393da(void)

void FUN_146f393da(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  FUN_146f39168();
  lVar1 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *param_2;
    }
  }
  *(longlong *)(param_1 + 0x98) = lVar1;
  FUN_146f14ba4(param_1 + 0x80,(int)param_2[2]);
  return;
}



// FUNCTION 146f39424 FUN_146f39424 body=110 status=ok
// SIG undefined FUN_146f39424(void)

void FUN_146f39424(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x58) = 0;
  if ((*(longlong *)(param_1 + 0x60) != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48();
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(int *)(param_1 + 0x8c) != 0) {
    FUN_14480809c(param_1 + 0x80,0);
  }
  FUN_145c53d04(param_1 + 0x68,0);
  *(undefined4 *)(param_1 + 0x78) = 0;
  return;
}



// FUNCTION 146f39492 FUN_146f39492 body=39 status=ok
// SIG undefined FUN_146f39492(void)

undefined4 FUN_146f39492(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_146f377b0();
  if ((char)uVar1 != '\0') {
    FUN_146f394ba(param_1);
  }
  return uVar1;
}



// FUNCTION 146f394ba FUN_146f394ba body=141 status=ok
// SIG undefined FUN_146f394ba(void)

void FUN_146f394ba(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar4 = 0xffffffff;
  if ((ulonglong)*(uint *)(param_1 + 0x88) == 0) {
LAB_146f394fc:
    FUN_146f39768(param_1 + 0x68);
    lVar2 = *(longlong *)(param_1 + 0x80);
    uVar7 = uVar4;
LAB_146f3952c:
    puVar1 = (uint *)(lVar2 + (ulonglong)(uVar7 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar7 & 0x1f);
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x80);
  iVar5 = 0;
  uVar6 = 0;
LAB_146f394e6:
  uVar7 = *(uint *)(lVar2 + uVar6 * 4);
  if (uVar7 == 0xffffffff) goto code_r0x000146f394f0;
  uVar7 = uVar7 ^ 0xffffffff;
  if (uVar7 == 0) {
    iVar3 = 0x20;
  }
  else {
    iVar3 = 0;
    if (uVar7 != 0) {
      for (; (uVar7 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
      }
    }
  }
  uVar7 = iVar3 - iVar5;
  uVar4 = 0xffffffff;
  if (uVar7 < *(uint *)(param_1 + 0x90)) {
    uVar4 = uVar7;
  }
  if (uVar4 < *(uint *)(param_1 + 0x78)) goto LAB_146f3952c;
  goto LAB_146f394fc;
code_r0x000146f394f0:
  uVar6 = uVar6 + 1;
  iVar5 = iVar5 + -0x20;
  if (*(uint *)(param_1 + 0x88) == uVar6) goto LAB_146f394fc;
  goto LAB_146f394e6;
}



// FUNCTION 146f395cc FUN_146f395cc body=239 status=ok
// SIG undefined FUN_146f395cc(void)

void FUN_146f395cc(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 uVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((ulonglong)uVar1 != 0) {
    uVar11 = 0;
    do {
      uVar9 = (ulonglong)*(uint *)(*param_2 + uVar11 * 4);
      FUN_146f3790c(param_1,uVar9,uVar9 * 8 + param_2[4],*(undefined8 *)(param_2[2] + uVar11 * 8));
      uVar11 = uVar11 + 1;
    } while (uVar1 != uVar11);
  }
  lVar7 = FUN_146f453e8(*(undefined8 *)(param_1 + 0x98));
  lVar5 = param_2[1];
  if ((longlong)(int)lVar5 != 0) {
    lVar3 = *param_2;
    lVar10 = 0;
    do {
      uVar1 = *(uint *)(lVar3 + lVar10);
      lVar4 = param_2[4];
      if ((*(byte *)(lVar7 + 0xb00) & 8) == 0) {
        uVar6 = *(undefined2 *)(*(longlong *)(lVar7 + 0x8e0) + (longlong)(int)uVar1 * 2);
      }
      else {
        uVar6 = FUN_146f2180c(lVar7 + 0x820,(ulonglong)uVar1);
      }
      iVar2 = *(int *)(lVar4 + 4 + (ulonglong)uVar1 * 8);
      iVar8 = iVar2 + 0x3ff;
      if (-1 < iVar2) {
        iVar8 = iVar2;
      }
      *(undefined2 *)
       (*(longlong *)(*(longlong *)(param_1 + 0x68) + (longlong)(iVar8 >> 10) * 8) +
       (ulonglong)(uint)(iVar2 % 0x400) * 2) = uVar6;
      lVar10 = lVar10 + 4;
    } while ((longlong)(int)lVar5 * 4 != lVar10);
  }
  return;
}



// FUNCTION 146f396bc FUN_146f396bc body=171 status=ok
// SIG undefined FUN_146f396bc(void)

void FUN_146f396bc(longlong param_1,longlong param_2,undefined8 param_3,uint param_4,
                  ulonglong *param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  FUN_146f391f8();
  uVar1 = *param_5 + 3 & 0xfffffffffffffffc;
  uVar4 = uVar1 + (ulonglong)param_4 * 4;
  if (param_5[1] < uVar4) {
    lVar3 = (ulonglong)param_4 * 4;
    FUN_140023dd8(param_5,(int)lVar3 + 4);
    uVar1 = *param_5 + 3 & 0xfffffffffffffffc;
    uVar4 = lVar3 + uVar1;
  }
  *param_5 = uVar4;
  *(ulonglong *)(param_2 + 0x248) = uVar1;
  lVar3 = *(longlong *)(param_1 + 0x60);
  if (lVar3 != 0) {
    lVar2 = FUN_145b2dbd6();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_146f3974f;
  }
  lVar3 = 0;
LAB_146f3974f:
  *(undefined4 *)(param_2 + 0x254) = *(undefined4 *)(lVar3 + 0x40);
  return;
}



// FUNCTION 146f39768 FUN_146f39768 body=123 status=ok
// SIG undefined FUN_146f39768(void)

void FUN_146f39768(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = (int)param_1[2];
  iVar1 = iVar3 + 0xbfe;
  if (-1 < iVar3 + 0x7ff) {
    iVar1 = iVar3 + 0x7ff;
  }
  *(int *)(param_1 + 2) = iVar3 + 0x400;
  iVar3 = (iVar1 >> 10) - (int)param_1[1];
  if (iVar3 != 0 && (int)param_1[1] <= iVar1 >> 10) {
    do {
      uVar2 = FUN_14001cc68(0x800,0x10);
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1456bd870(param_1,iVar1);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}



// FUNCTION 146f397e4 FUN_146f397e4 body=376 status=ok
// SIG undefined FUN_146f397e4(void)

undefined8 * FUN_146f397e4(undefined8 *param_1,uint param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  *(uint *)(param_1 + 1) = param_2;
  *param_1 = &PTR_FUN_149f9b9f0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_4;
  FUN_146f1190e(param_4);
  param_1[5] = param_3;
  if ((param_2 & 0x20) != 0) {
    lVar3 = FUN_14001cc68(0x18,0x10);
    FUN_146f10f20(lVar3,param_4);
    lVar1 = param_1[2];
    param_1[2] = lVar3;
    if (lVar1 != 0) {
      FUN_146f11042(lVar1);
      FUN_1400020a8(lVar1);
    }
  }
  if ((param_2 & 0x40) != 0) {
    if ((*(uint *)(param_4 + 0xb8) & 0x10) == 0) {
      uVar2 = *(uint *)(param_1 + 1);
    }
    else {
      if (((*(uint *)(param_4 + 0xb8) & 0x20) == 0) && (DAT_14c9998d0 != '\0')) {
        uVar2 = *(uint *)(param_1 + 1);
      }
      else {
        uVar4 = FUN_14001cc68(0x18,0x10);
        FUN_146f10f20(uVar4,param_4);
        lVar1 = param_1[3];
        param_1[3] = uVar4;
        if (lVar1 != 0) {
          FUN_146f11042(lVar1);
          FUN_1400020a8(lVar1);
          uVar4 = param_1[3];
        }
        FUN_142a6ee22(uVar4,param_3,0);
        uVar2 = *(uint *)(param_1 + 1) | 4;
      }
      uVar2 = uVar2 | 2;
    }
    *(uint *)(param_1 + 1) = uVar2 | 0x100;
  }
  if ((param_2 & 0x20) == 0) {
    uVar2 = *(uint *)(param_1 + 1);
  }
  else {
    uVar2 = *(uint *)(param_1 + 1);
    if (*(short *)(param_4 + 0x7e) == 0) {
      uVar2 = uVar2 | 0x80;
      *(uint *)(param_1 + 1) = uVar2;
    }
  }
  uVar5 = *(uint *)(param_4 + 0xb8);
  if ((uVar5 >> 0xd & 1) != 0) {
    uVar2 = uVar2 | 0x800;
    *(uint *)(param_1 + 1) = uVar2;
    uVar5 = *(uint *)(param_4 + 0xb8);
  }
  *(uint *)(param_1 + 1) = (uVar5 & 4) << 0xb | uVar2 | 0x5000;
  return param_1;
}



// FUNCTION 146f3995c FUN_146f3995c body=98 status=ok
// SIG undefined FUN_146f3995c(void)

void FUN_146f3995c(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_149f9b9f0;
  if (param_1[4] != 0) {
    FUN_146f11920();
  }
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    FUN_146f11042(lVar1);
    FUN_1400020a8(lVar1);
  }
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    return;
  }
  FUN_146f11042(lVar1);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 146f399be FUN_146f399be body=119 status=ok
// SIG undefined FUN_146f399be(void)

void FUN_146f399be(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  iVar1 = *(int *)(param_2 + 0x308);
  lVar4 = (longlong)iVar1;
  *(uint *)(param_2 + 0x308) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x30c) < iVar1 + 1U) {
    FUN_146f1bace(param_2,iVar1);
  }
  lVar3 = *(longlong *)(param_2 + 0x300);
  if (*(longlong *)(param_2 + 0x300) == 0) {
    lVar3 = param_2;
  }
  *(undefined8 *)(lVar3 + lVar4 * 0x18) = uVar2;
  *(undefined8 *)(lVar3 + 8 + lVar4 * 0x18) = uVar5;
  *(longlong *)(lVar3 + 0x10 + lVar4 * 0x18) = param_1;
  return;
}



// FUNCTION 146f39a8a FUN_146f39a8a body=105 status=ok
// SIG undefined FUN_146f39a8a(void)

void FUN_146f39a8a(undefined8 param_1,undefined8 param_2,undefined8 *param_3,uint param_4)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146f10eb6(local_38,*param_3,param_3[2]);
  FUN_146f11726(local_38,param_2,(param_4 & 1) == 0);
  FUN_146f11042(local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f39af4 FUN_146f39af4 body=102 status=ok
// SIG undefined FUN_146f39af4(void)

longlong FUN_146f39af4(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  if ((param_2 == 0) || ((*(byte *)(param_2 + 0xb9) & 4) != 0)) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_14001cc68(0x30,0x10);
    FUN_146f397e4(lVar1,*(undefined4 *)(param_3 + 800),param_1,param_2);
    *(byte *)(lVar1 + 8) = *(byte *)(lVar1 + 8) | 8;
    FUN_146f399be(lVar1,param_3);
  }
  return lVar1;
}



// FUNCTION 146f39b7c FUN_146f39b7c body=459 status=ok
// SIG undefined FUN_146f39b7c(void)

void FUN_146f39b7c(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  char cVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ushort *puVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  
  uVar8 = FUN_146f18900(*(undefined8 *)(param_1 + 0x40));
  if (uVar8 != 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28);
    FUN_146f262c6(lVar4 + 0x1050,uVar8);
    bVar7 = (byte)uVar8 & 0x1f;
    uVar9 = -2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7;
    uVar11 = (ulonglong)(uVar8 >> 5);
    puVar1 = (uint *)(*(longlong *)(lVar4 + 0x1080) + uVar11 * 4);
    *puVar1 = *puVar1 & uVar9;
    puVar1 = (uint *)(*(longlong *)(lVar4 + 0x1098) + uVar11 * 4);
    *puVar1 = *puVar1 & uVar9;
    puVar1 = (uint *)(*(longlong *)(lVar4 + 0x10b0) + uVar11 * 4);
    *puVar1 = *puVar1 & uVar9;
    lVar5 = *(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x270) +
             (longlong)((int)uVar8 / 100) * 8);
    lVar13 = (ulonglong)(uint)((int)uVar8 % 100) * 0x38;
    uVar3 = *(ushort *)(lVar5 + 0x32 + lVar13);
    if (((uVar3 >> 9 & 1) != 0) &&
       (*(short *)(*(longlong *)
                    (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x2b0) +
                    (longlong)((int)uVar8 / 100) * 8) + (longlong)((int)uVar8 % 100) * 2) != 0)) {
      puVar12 = (ushort *)(lVar5 + lVar13 + 0x32);
      uVar9 = *(uint *)(lVar4 + 0x870);
      uVar15 = 0;
      cVar2 = *(char *)(lVar4 + 0x878);
      if ((ulonglong)uVar9 != 0) {
        lVar5 = *(longlong *)(lVar4 + 0x868);
        uVar11 = 0;
        do {
          uVar14 = 0xffffffff;
          if (uVar11 == uVar9 - 1) {
            uVar14 = 0xffffffff >> (-cVar2 & 0x1fU);
          }
          uVar14 = uVar14 & *(uint *)(lVar5 + uVar11 * 4);
          uVar10 = uVar15;
          if (uVar14 != 0) {
            do {
              if ((uVar14 & 1) != 0) {
                if ((*(uint *)(*(longlong *)(lVar4 + 0x868) + (ulonglong)(uVar10 >> 5) * 4) >>
                     (uVar10 & 0x1f) & 1) == 0) {
                  lVar13 = 0;
                }
                else {
                  lVar13 = (longlong)(int)uVar10 * 0x28 + *(longlong *)(lVar4 + 0x848);
                }
                FUN_146f48000(*(undefined8 *)(lVar13 + 8),uVar8);
              }
              bVar6 = 1 < uVar14;
              uVar14 = uVar14 >> 1;
              uVar10 = uVar10 + 1;
            } while (bVar6);
          }
          uVar11 = uVar11 + 1;
          uVar15 = uVar15 + 0x20;
        } while (uVar11 != uVar9);
        uVar3 = *puVar12;
      }
      *puVar12 = uVar3 & 0xfdff;
    }
  }
  FUN_146f284c6(*(undefined8 *)(param_1 + 0x40),param_2);
  return;
}



// FUNCTION 146f39d48 FUN_146f39d48 body=89 status=ok
// SIG undefined FUN_146f39d48(void)

void FUN_146f39d48(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1[0x21];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = param_1[0x20];
    lVar3 = 0;
    do {
      if ((*(byte *)(lVar1 + 8 + lVar3) & 2) != 0) {
        FUN_142a8d08c(param_1,*(undefined8 *)(lVar1 + lVar3));
      }
      lVar3 = lVar3 + 0x10;
    } while ((longlong)(int)lVar2 * 0x10 != lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x000146f39d9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2b0))(param_1);
  return;
}



// FUNCTION 146f39da2 FUN_146f39da2 body=92 status=ok
// SIG undefined FUN_146f39da2(void)

longlong *
FUN_146f39da2(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  (**(code **)(*param_1 + 0x2e8))();
  if (param_3 != 0 && *param_2 != 0) {
    FUN_146f285d8(param_1[8],param_3,*param_2,0,CONCAT44(param_5._4_4_,5));
  }
  return param_2;
}



// FUNCTION 146f39e02 FUN_146f39e02 body=136 status=ok
// SIG undefined FUN_146f39e02(void)

void FUN_146f39e02(uint *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ushort uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar4 = *(ushort *)(param_2 + 2);
  if ((ulonglong)uVar4 != 0) {
    lVar1 = *param_2;
    lVar2 = *param_3;
    uVar6 = 0;
    do {
      lVar3 = *(longlong *)(lVar1 + uVar6 * 8);
      if (lVar3 != 0) {
        lVar5 = *(longlong *)(lVar2 + uVar6 * 8);
        if ((*(byte *)(lVar5 + 0xb9) & 8) == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = (ulonglong)*(uint *)(lVar5 + 0x88) - 4;
        }
        *(uint *)(lVar3 + lVar5) = *(uint *)(lVar3 + lVar5) & 0xc0000000 | *param_1 & 0x3fffffff;
      }
      uVar6 = uVar6 + 1;
    } while (uVar4 != uVar6);
  }
  if ((*param_1 == 0) && (param_1[1] == 0)) {
    uVar4 = *(ushort *)((longlong)param_2 + 0x12) & 0xfffb;
  }
  else {
    uVar4 = *(ushort *)((longlong)param_2 + 0x12) | 4;
  }
  *(ushort *)((longlong)param_2 + 0x12) = uVar4;
  return;
}



// FUNCTION 146f39e8a FUN_146f39e8a body=135 status=ok
// SIG undefined FUN_146f39e8a(void)

void FUN_146f39e8a(longlong param_1,int param_2)

{
  longlong lVar1;
  int *piVar2;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x270) + (longlong)(param_2 / 100) * 8) +
          (ulonglong)(uint)(param_2 % 100) * 0x38;
  piVar2 = (int *)(lVar1 + 8);
  if ((*piVar2 != 0) || (*(int *)(lVar1 + 0xc) != 0)) {
    local_10 = *(undefined8 *)piVar2;
    FUN_146efd4d0();
  }
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f39f12 FUN_146f39f12 body=141 status=ok
// SIG undefined FUN_146f39f12(void)

void FUN_146f39f12(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  uint local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x270) + (longlong)(param_2 / 100) * 8)
            + 0x18 + (ulonglong)(uint)(param_2 % 100) * 0x38);
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x12) & 0x60) != 0)) {
    local_18 = *(undefined8 *)(lVar1 + 8);
    local_10 = (uint)*(ushort *)(lVar1 + 0x10);
    FUN_146f3a1b2();
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f39fa0 FUN_146f39fa0 body=160 status=ok
// SIG undefined FUN_146f39fa0(void)

void FUN_146f39fa0(longlong param_1,ulonglong param_2,uint param_3,undefined1 param_4)

{
  int iVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong *puVar4;
  longlong lVar5;
  
  if ((param_3 & 6) != 0) {
    puVar2 = *(ulonglong **)(param_1 + 0x100);
    iVar1 = *(int *)(param_1 + 0x108);
    lVar5 = (longlong)iVar1;
    if (lVar5 != 0) {
      lVar3 = lVar5 << 4;
      puVar4 = puVar2;
      do {
        if (((*puVar4 ^ param_2) & 0xfffffffffffffff) == 0) {
          if (puVar4 != (ulonglong *)0x0) {
            return;
          }
          break;
        }
        puVar4 = puVar4 + 2;
        lVar3 = lVar3 + -0x10;
      } while (lVar3 != 0);
    }
    *(uint *)(param_1 + 0x108) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x10c) < iVar1 + 1U) {
      FUN_146f4127c((undefined8 *)(param_1 + 0x100),iVar1);
      puVar2 = *(ulonglong **)(param_1 + 0x100);
    }
    puVar2[lVar5 * 2] = param_2;
    *(uint *)(puVar2 + lVar5 * 2 + 1) = param_3;
    *(undefined1 *)((longlong)puVar2 + lVar5 * 0x10 + 0xc) = param_4;
  }
  return;
}



// FUNCTION 146f3a040 FUN_146f3a040 body=123 status=ok
// SIG undefined FUN_146f3a040(void)

void FUN_146f3a040(undefined8 *param_1,void *param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar1 + param_3;
  if (*(int *)((longlong)param_1 + 0xc) - uVar1 < param_3) {
    FUN_146f4127c(param_1,uVar1);
  }
  memmove((void *)((longlong)*param_1 + (longlong)(int)param_3 * 0x10),(void *)*param_1,
          (ulonglong)uVar1 << 4);
  if (param_3 != 0) {
    memcpy((void *)*param_1,param_2,(longlong)(int)param_3 * 0x10);
    return;
  }
  return;
}



// FUNCTION 146f3a0bc FUN_146f3a0bc body=245 status=ok
// SIG undefined FUN_146f3a0bc(void)

undefined8 * FUN_146f3a0bc(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == 0) {
    iVar7 = 0;
    iVar6 = 0;
  }
  else {
    local_30 = 0;
    FUN_14485c47a(&local_30,param_3);
    iVar6 = (int)local_30;
    iVar7 = local_30._4_4_;
  }
  uVar2 = FUN_144a78877(iVar6,iVar7);
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    lVar4 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x98);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0xa0) - 1U & uVar2) * 4);
    if (iVar5 != -1) {
      uVar3 = 0;
      do {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar5 * 0x18);
        if ((*piVar1 == iVar6) &&
           (*(int *)(*(longlong *)(param_1 + 0x58) + 4 + (longlong)iVar5 * 0x18) == iVar7)) {
          if (piVar1 + 2 == (int *)0x0 || piVar1 == (int *)0x0) goto LAB_146f3a115;
          uVar3 = *(undefined8 *)(piVar1 + 2);
          break;
        }
        iVar5 = piVar1[4];
      } while (iVar5 != -1);
      goto LAB_146f3a117;
    }
  }
LAB_146f3a115:
  uVar3 = 0;
LAB_146f3a117:
  *param_2 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146f3a1b2 FUN_146f3a1b2 body=214 status=ok
// SIG undefined FUN_146f3a1b2(void)

void FUN_146f3a1b2(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  longlong *local_50;
  ulonglong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = &local_40;
  local_40 = 0;
  local_48 = 0x100000000;
  lVar4 = param_2[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar6);
      if ((*(byte *)((longlong)plVar2 + 9) & 8) != 0) {
        local_48 = local_48 & 0xffffffff00000000;
        (**(code **)(*plVar2 + 0x10))(plVar2,&local_50);
        if ((((int)local_48 != 0) && (lVar3 = *local_50, lVar3 != lVar5 && lVar3 != 0)) &&
           (lVar5 = lVar3, (*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0)) {
          FUN_146f22fa2(lVar3);
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar6);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f3a28a FUN_146f3a28a body=177 status=ok
// SIG undefined FUN_146f3a28a(void)

void FUN_146f3a28a(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  if (param_2 != 0) {
    local_28 = 0;
    FUN_14485c47a(&local_28);
    local_30 = local_28;
  }
  FUN_146f415ea(param_1 + 0x58,&local_28,&local_30);
  if ((longlong)(int)local_28 != -1) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 8 + (longlong)(int)local_28 * 0x18);
    FUN_146f4166a(param_1 + 0x58);
    FUN_142a8d816(param_1,uVar1);
    FUN_146f45f86(*(undefined8 *)(param_1 + 0x28),uVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f3a33c FUN_146f3a33c body=184 status=ok
// SIG undefined FUN_146f3a33c(void)

longlong * FUN_146f3a33c(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 *local_40;
  longlong *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_142a9d5a2(*(undefined8 *)(param_1 + 0x28),param_2,param_4);
  if (*param_2 != 0) {
    FUN_146f45ffa(*(undefined8 *)(param_1 + 0x28));
    local_48 = (undefined8 *)0x0;
    if (param_3 != 0) {
      local_40 = (undefined8 *)0x0;
      FUN_14485c47a(&local_40,param_3);
      local_48 = local_40;
    }
    local_40 = &local_48;
    local_38 = param_2;
    FUN_146f41734(param_1 + 0x58,local_2c,&local_40,0);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f3a3f6 FUN_146f3a3f6 body=149 status=ok
// SIG undefined FUN_146f3a3f6(void)

void FUN_146f3a3f6(longlong param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *(uint *)(param_1 + 0x28);
  iVar8 = 0;
  cVar1 = *(char *)(param_1 + 0x30);
  if ((ulonglong)uVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x20);
    uVar7 = 0;
    do {
      uVar5 = 0xffffffff;
      if (uVar7 == uVar2 - 1) {
        uVar5 = 0xffffffff >> (-cVar1 & 0x1fU);
      }
      uVar5 = uVar5 & *(uint *)(lVar3 + uVar7 * 4);
      iVar6 = iVar8;
      if (uVar5 != 0) {
        do {
          if ((uVar5 & 1) != 0) {
            FUN_146f3a5e6(param_1,iVar6);
          }
          bVar4 = 1 < uVar5;
          uVar5 = uVar5 >> 1;
          iVar6 = iVar6 + 1;
        } while (bVar4);
      }
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 0x20;
    } while (uVar7 != uVar2);
  }
  return;
}



// FUNCTION 146f3a48c FUN_146f3a48c body=285 status=ok
// SIG undefined FUN_146f3a48c(void)

void FUN_146f3a48c(longlong *param_1,undefined4 param_2,uint param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  uint local_4c;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(uint *)(param_1[4] + (ulonglong)(param_3 >> 5) * 4) >> (param_3 & 0x1f) & 1) != 0) &&
     (lVar4 = (longlong)(int)param_3 * 0x28 + *param_1, lVar4 != 0)) {
    FUN_1446ddc76(&local_40,"NetToken",1);
    lVar2 = FUN_146f081dc(param_4,local_40);
    if (lVar2 != 0) {
      local_50 = param_2;
      local_4c = param_3;
      local_48 = FUN_146f08236(param_4);
      FUN_146f28ed8(lVar2,&local_50);
    }
    uVar1 = *(undefined8 *)(lVar4 + 8);
    uVar3 = FUN_146f08236(param_4);
    FUN_146f4a06c(uVar1,uVar3);
    FUN_1446ddc76(&local_58,"Replication",1);
    lVar2 = FUN_146f081dc(param_4,local_58);
    if (lVar2 != 0) {
      uVar1 = *(undefined8 *)(lVar4 + 8);
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar4 + 0x10);
      *(undefined8 *)(lVar2 + 0x30) = uVar1;
      FUN_14485c47a(lVar4,lVar2);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f3a5aa FUN_146f3a5aa body=59 status=ok
// SIG undefined FUN_146f3a5aa(void)

void FUN_146f3a5aa(longlong param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (longlong)param_2 * 0x130 + *(longlong *)(param_1 + 0x10);
  if (lVar1 == param_3) {
    return;
  }
  lVar2 = *(longlong *)(param_3 + 0x120);
  if (*(longlong *)(param_3 + 0x120) == 0) {
    lVar2 = param_3;
  }
  FUN_146f2a024(lVar1,lVar2,*(undefined4 *)(param_3 + 0x128),*(undefined4 *)(lVar1 + 300));
  return;
}



// FUNCTION 146f3a5e6 FUN_146f3a5e6 body=212 status=ok
// SIG undefined FUN_146f3a5e6(void)

void FUN_146f3a5e6(longlong *param_1,uint param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  byte bVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined1 auStack_178 [40];
  undefined1 local_150 [288];
  longlong local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_178;
  memset(local_150,0,0x130);
  local_24 = 4;
  lVar6 = (longlong)(int)param_2;
  puVar5 = (undefined1 *)(lVar6 * 0x130 + param_1[2]);
  if (puVar5 != local_150) {
    FUN_146f2a024(puVar5,local_150,0,*(undefined4 *)(puVar5 + 300));
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_146f3a6bc(param_1,param_2);
  lVar3 = *param_1;
  puVar2 = (undefined8 *)(lVar3 + 0x10 + lVar6 * 0x28);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar3 + lVar6 * 0x28);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined1 *)(lVar3 + 0x20 + lVar6 * 0x28) = 0;
  bVar4 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)(param_1[4] + (ulonglong)(param_2 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  if ((local_20 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f3a6bc FUN_146f3a6bc body=155 status=ok
// SIG undefined FUN_146f3a6bc(void)

void FUN_146f3a6bc(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*(uint *)(param_1[4] + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (longlong)(int)param_2 * 0x28 + *param_1;
  }
  lVar1 = FUN_14479d2ce(lVar2);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *(undefined8 *)(lVar1 + 0x30) = 0;
  }
  FUN_142a9625e(*(undefined8 *)(lVar2 + 0x10));
  FUN_146f46d3c(*(undefined8 *)(lVar2 + 8));
  lVar1 = *(longlong *)(lVar2 + 0x10);
  if (lVar1 != 0) {
    FUN_146f42a0e(lVar1);
    FUN_1400020a8(lVar1);
  }
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar1 = *(longlong *)(lVar2 + 8);
  if (lVar1 != 0) {
    FUN_146f465ac(lVar1);
    FUN_1400020a8(lVar1);
  }
  *(undefined8 *)(lVar2 + 8) = 0;
  return;
}



// FUNCTION 146f3a758 FUN_146f3a758 body=121 status=ok
// SIG undefined FUN_146f3a758(void)

longlong * FUN_146f3a758(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar4 = param_1[6];
  *param_2 = 0;
  param_2[1] = 0;
  *(int *)(param_2 + 2) = (int)lVar4;
  FUN_146f14ba4();
  iVar2 = (int)param_1[1];
  if (0 < iVar2) {
    lVar4 = 0x20;
    uVar3 = 0;
    do {
      uVar5 = uVar3 >> 5 & 0x7ffffff;
      if (((*(uint *)(param_1[4] + uVar5 * 4) >> ((uint)uVar3 & 0x1f) & 1) != 0) &&
         (*(char *)(*param_1 + lVar4) == '\0')) {
        puVar1 = (uint *)(*param_2 + uVar5 * 4);
        *puVar1 = *puVar1 | 1 << ((byte)uVar3 & 0x1f);
        iVar2 = (int)param_1[1];
      }
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x28;
    } while ((longlong)uVar3 < (longlong)iVar2);
  }
  return param_2;
}



// FUNCTION 146f3a82c FUN_146f3a82c body=183 status=ok
// SIG undefined FUN_146f3a82c(void)

void FUN_146f3a82c(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *(ushort *)((longlong)param_4 + 0x7c);
  if (uVar1 != 0) {
    lVar2 = *param_4;
    lVar3 = param_4[2];
    lVar4 = 0;
    do {
      local_60 = 0;
      local_68 = 0;
      local_70 = *(undefined8 *)(lVar3 + 8 + lVar4 * 2);
      local_58 = (ulonglong)*(uint *)(lVar2 + lVar4) + param_3;
      local_50 = (ulonglong)*(uint *)(lVar2 + 4 + lVar4) + param_2;
      (**(code **)(*(longlong *)(lVar3 + lVar4 * 2) + 0x28))(param_1,&local_70);
      lVar4 = lVar4 + 8;
    } while ((ulonglong)uVar1 * 8 != lVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f3a8e4 FUN_146f3a8e4 body=301 status=ok
// SIG undefined FUN_146f3a8e4(void)

void FUN_146f3a8e4(undefined8 param_1,longlong *param_2,longlong param_3,longlong param_4,
                  longlong *param_5)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong local_80;
  longlong local_78;
  undefined8 local_70;
  ulonglong local_68;
  undefined4 local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(ushort *)((longlong)param_5 + 0x7c);
  local_88 = param_1;
  local_80 = param_3;
  local_78 = param_4;
  if (uVar1 != 0) {
    lVar3 = *param_5;
    lVar4 = param_5[2];
    uVar7 = 0;
    do {
      lVar5 = param_5[1];
      uVar2 = *(ushort *)(lVar5 + uVar7 * 2);
      uVar8 = (uint)uVar2;
      if (*(short *)(lVar5 + 2 + uVar7 * 2) == 1) {
        if ((*(uint *)(*param_2 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar8 & 0x1f) & 1) != 0) {
LAB_146f3a971:
          local_60 = 0;
          local_70 = *(undefined8 *)(lVar4 + 8 + uVar7 * 8);
          local_58 = (ulonglong)*(uint *)(lVar3 + uVar7 * 4) + local_78;
          local_50 = (ulonglong)*(uint *)(lVar3 + 4 + uVar7 * 4) + local_80;
          local_68 = (ulonglong)CONCAT24(*(undefined2 *)(lVar5 + 2 + uVar7 * 2),uVar8);
          (**(code **)(*(longlong *)(lVar4 + uVar7 * 8) + 0x28))(local_88,&local_70);
        }
      }
      else {
        cVar6 = FUN_146f0ff32(*param_2,*(undefined4 *)((longlong)param_2 + 0xc),uVar8);
        if (cVar6 != '\0') goto LAB_146f3a971;
      }
      uVar7 = uVar7 + 2;
    } while ((uint)uVar1 * 2 != uVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f3aa12 FUN_146f3aa12 body=320 status=ok
// SIG undefined FUN_146f3aa12(void)

void FUN_146f3aa12(undefined8 param_1,longlong *param_2,int param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  ulonglong local_68;
  undefined4 local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(ushort *)((longlong)param_6 + 0x7c);
  local_80 = param_1;
  local_78 = param_4;
  if (uVar1 != 0) {
    lVar2 = *param_6;
    lVar3 = param_6[2];
    uVar7 = 0;
    do {
      lVar4 = param_6[1];
      uVar6 = (uint)*(ushort *)(lVar4 + uVar7 * 2) + param_3;
      if (*(short *)(lVar4 + 2 + uVar7 * 2) == 1) {
        if ((*(uint *)(*param_2 + (ulonglong)(uVar6 >> 5) * 4) >> (uVar6 & 0x1f) & 1) != 0) {
LAB_146f3aa8f:
          local_60 = 0;
          local_68 = 0;
          local_70 = *(undefined8 *)(lVar3 + 8 + uVar7 * 8);
          local_50 = (ulonglong)*(uint *)(lVar2 + uVar7 * 4) + local_78;
          local_58 = (ulonglong)*(uint *)(lVar2 + 4 + uVar7 * 4) + param_5;
          if ((*(byte *)((longlong)param_6 + 0xb9) & 4) != 0) {
            local_68 = (ulonglong)CONCAT24(*(undefined2 *)(lVar4 + 2 + uVar7 * 2),uVar6);
          }
          (**(code **)(*(longlong *)(lVar3 + uVar7 * 8) + 0x30))(local_80,&local_70);
        }
      }
      else {
        cVar5 = FUN_146f0ff32(*param_2,*(undefined4 *)((longlong)param_2 + 0xc),uVar6);
        if (cVar5 != '\0') goto LAB_146f3aa8f;
      }
      uVar7 = uVar7 + 2;
    } while ((uint)uVar1 * 2 != uVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f3ab54 FUN_146f3ab54 body=183 status=ok
// SIG undefined FUN_146f3ab54(void)

void FUN_146f3ab54(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *(ushort *)((longlong)param_4 + 0x7c);
  if (uVar1 != 0) {
    lVar2 = *param_4;
    lVar3 = param_4[2];
    lVar4 = 0;
    do {
      local_60 = 0;
      local_68 = 0;
      local_70 = *(undefined8 *)(lVar3 + 8 + lVar4 * 2);
      local_50 = (ulonglong)*(uint *)(lVar2 + lVar4) + param_2;
      local_58 = (ulonglong)*(uint *)(lVar2 + 4 + lVar4) + param_3;
      (**(code **)(*(longlong *)(lVar3 + lVar4 * 2) + 0x30))(param_1,&local_70);
      lVar4 = lVar4 + 8;
    } while ((ulonglong)uVar1 * 8 != lVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f3ac0c thunk_FUN_146f3ac12 body=5 status=ok
// SIG undefined thunk_FUN_146f3ac12(void)

void thunk_FUN_146f3ac12(undefined8 param_1,longlong param_2,longlong *param_3)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_88 [32];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  longlong lStack_50;
  ulonglong uStack_48;
  
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *(ushort *)((longlong)param_3 + 0x7c);
  if (uVar1 != 0) {
    lVar2 = *param_3;
    lVar3 = param_3[2];
    lVar4 = param_3[3];
    uVar5 = 0;
    do {
      if ((*(byte *)(lVar4 + uVar5) & 1) != 0) {
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_68 = *(undefined8 *)(lVar3 + 8 + uVar5 * 8);
        lStack_50 = (ulonglong)*(uint *)(lVar2 + 4 + uVar5 * 4) + param_2;
        (**(code **)(*(longlong *)(lVar3 + uVar5 * 8) + 0x50))(param_1,&uStack_68);
      }
      uVar5 = uVar5 + 2;
    } while ((uint)uVar1 * 2 != uVar5);
  }
  if ((uStack_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f3ac12 FUN_146f3ac12 body=177 status=ok
// SIG undefined FUN_146f3ac12(void)

void FUN_146f3ac12(undefined8 param_1,longlong param_2,longlong *param_3)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *(ushort *)((longlong)param_3 + 0x7c);
  if (uVar1 != 0) {
    lVar2 = *param_3;
    lVar3 = param_3[2];
    lVar4 = param_3[3];
    uVar5 = 0;
    do {
      if ((*(byte *)(lVar4 + uVar5) & 1) != 0) {
        local_58 = 0;
        local_60 = 0;
        local_68 = *(undefined8 *)(lVar3 + 8 + uVar5 * 8);
        local_50 = (ulonglong)*(uint *)(lVar2 + 4 + uVar5 * 4) + param_2;
        (**(code **)(*(longlong *)(lVar3 + uVar5 * 8) + 0x50))(param_1,&local_68);
      }
      uVar5 = uVar5 + 2;
    } while ((uint)uVar1 * 2 != uVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f3acc4 FUN_146f3acc4 body=283 status=ok
// SIG undefined FUN_146f3acc4(void)

bool FUN_146f3acc4(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  undefined4 local_68;
  longlong local_60;
  longlong local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar6 = (ulonglong)*(ushort *)((longlong)param_4 + 0x7c);
  if (uVar6 == 0) {
    bVar7 = true;
  }
  else {
    lVar1 = *param_4;
    plVar5 = (longlong *)param_4[2];
    local_68 = 0;
    local_78[1] = 0;
    local_78[0] = plVar5[1];
    uVar3 = (ulonglong)*(uint *)(lVar1 + 4);
    local_60 = param_2 + uVar3;
    local_58 = uVar3 + param_3;
    local_50 = 1;
    cVar2 = (**(code **)(*plVar5 + 0x38))(param_1);
    if (cVar2 == '\0') {
      bVar7 = false;
    }
    else {
      plVar5 = plVar5 + 3;
      uVar3 = 1;
      do {
        uVar4 = uVar3;
        if (uVar6 == uVar4) break;
        local_68 = 0;
        local_78[1] = 0;
        local_78[0] = *plVar5;
        uVar3 = (ulonglong)*(uint *)(lVar1 + 4 + uVar4 * 8);
        local_60 = param_2 + uVar3;
        local_58 = uVar3 + param_3;
        local_50 = 1;
        cVar2 = (**(code **)(plVar5[-1] + 0x38))(param_1,local_78);
        plVar5 = plVar5 + 2;
        uVar3 = uVar4 + 1;
      } while (cVar2 != '\0');
      bVar7 = uVar6 <= uVar4;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f3ade0 FUN_146f3ade0 body=198 status=ok
// SIG undefined FUN_146f3ade0(void)

undefined8 FUN_146f3ade0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar1 = *(ushort *)((longlong)param_3 + 0x7c);
    if ((ulonglong)uVar1 == 0) {
      uVar4 = CONCAT71((uint7)(byte)(uVar1 >> 8),1);
    }
    else {
      lVar2 = *param_3;
      lVar3 = param_3[2];
      lVar5 = 0;
      do {
        local_58 = 0;
        local_60 = 0;
        local_68 = *(undefined8 *)(lVar3 + 8 + lVar5 * 2);
        local_50 = (ulonglong)*(uint *)(lVar2 + lVar5) + param_2;
        uVar4 = (**(code **)(*(longlong *)(lVar3 + lVar5 * 2) + 0x40))(param_1,&local_68);
        if ((char)uVar4 == '\0') break;
        bVar6 = (ulonglong)uVar1 * 8 + -8 != lVar5;
        lVar5 = lVar5 + 8;
      } while (bVar6);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 146f3aea8 FUN_146f3aea8 body=612 status=ok
// SIG undefined FUN_146f3aea8(void)

void FUN_146f3aea8(undefined8 param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  uint **ppuVar10;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  ulonglong local_d0;
  longlong *local_c8;
  uint **local_c0;
  longlong local_b8;
  longlong *local_b0;
  uint *local_a8;
  ulonglong uStack_a0;
  undefined8 local_98;
  ulonglong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d8 = *param_4;
  local_b8 = *param_5;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = (uint *)0x0;
  uStack_a0 = 0;
  if ((*(byte *)((longlong)param_5 + 0x3c) & 4) == 0) {
    ppuVar10 = (uint **)0x0;
  }
  else {
    uVar5 = *(int *)((longlong)param_5 + 0x24) + 0x1f;
    ppuVar10 = &local_a8;
    local_a8 = (uint *)((ulonglong)*(uint *)(param_5 + 5) + param_2);
    uStack_a0 = (ulonglong)uVar5 & 0xffffffffffffffe0;
    uStack_90 = 0;
    if (0x1f < uVar5) {
      local_98 = (ulonglong)*(uint *)((ulonglong)*(uint *)(param_5 + 5) + param_2) << 0x20;
    }
  }
  uStack_90 = 0;
  if ((int)param_5[1] != 0) {
    uVar6 = 0;
    local_c8 = param_3;
    local_c0 = ppuVar10;
    do {
      local_b0 = *(longlong **)(local_b8 + uVar6 * 8);
      uVar7 = -(ulonglong)*(ushort *)((longlong)local_b0 + 0x7a) &
              (param_2 + (ulonglong)*(ushort *)((longlong)local_b0 + 0x7a)) - 1;
      lVar8 = *(longlong *)(local_d8 + uVar6 * 8);
      uVar1 = *(ushort *)((longlong)local_b0 + 0x7c);
      local_d0 = uVar6;
      if (uVar1 != 0) {
        lVar2 = *local_b0;
        lVar3 = local_b0[2];
        lVar9 = 0;
        do {
          uStack_80 = 0;
          local_78 = 0;
          local_88 = *(undefined8 *)(lVar3 + 8 + lVar9 * 2);
          local_70 = (ulonglong)*(uint *)(lVar2 + lVar9) + lVar8;
          local_68 = *(uint *)(lVar2 + 4 + lVar9) + uVar7;
          (**(code **)(*(longlong *)(lVar3 + lVar9 * 2) + 0x28))(param_1,&local_88);
          lVar9 = lVar9 + 8;
        } while ((ulonglong)uVar1 * 8 != lVar9);
        lVar8 = *(longlong *)(local_d8 + local_d0 * 8);
        param_3 = local_c8;
        ppuVar10 = local_c0;
      }
      plVar4 = local_b0;
      uVar6 = local_d0;
      FUN_142a8f033(param_3,ppuVar10,lVar8,local_b0);
      param_2 = uVar7 + *(uint *)((longlong)plVar4 + 0x74);
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_5 + 1));
  }
  if ((*(uint *)(param_3 + 2) < ((int)param_3[1] + 0x1fU & 0xffffffe0)) &&
     ((*(uint *)((longlong)param_3 + 0x1c) & 4) == 0)) {
    *(undefined4 *)(*param_3 + (ulonglong)(*(uint *)(param_3 + 2) >> 5) * 4) =
         *(undefined4 *)((longlong)param_3 + 0x14);
  }
  if (((ppuVar10 != (uint **)0x0) &&
      (*(uint *)(ppuVar10 + 2) < (*(int *)(ppuVar10 + 1) + 0x1fU & 0xffffffe0))) &&
     ((*(uint *)((longlong)ppuVar10 + 0x1c) & 4) == 0)) {
    (*ppuVar10)[*(uint *)(ppuVar10 + 2) >> 5] = *(uint *)((longlong)ppuVar10 + 0x14);
  }
  if (((uint)local_98 < ((int)uStack_a0 + 0x1fU & 0xffffffe0)) && ((uStack_90 & 0x400000000) == 0))
  {
    local_a8[(uint)local_98 >> 5] = local_98._4_4_;
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f3b10e FUN_146f3b10e body=200 status=ok
// SIG undefined FUN_146f3b10e(void)

void FUN_146f3b10e(longlong *param_1,longlong *param_2)

{
  byte *pbVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [40];
  uint *local_50;
  uint local_48;
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *(uint *)(param_2 + 1);
  if ((ulonglong)uVar2 != 0) {
    lVar3 = *param_1;
    lVar4 = *param_2;
    uVar7 = 0;
    do {
      lVar6 = *(longlong *)(lVar4 + uVar7 * 8);
      lVar5 = *(longlong *)(lVar3 + uVar7 * 8);
      local_48 = *(ushort *)(lVar6 + 0x86) + 0x1f >> 5;
      local_44 = (uint)*(ushort *)(lVar6 + 0x86);
      local_50 = (uint *)((ulonglong)*(uint *)(lVar6 + 0x88) + lVar5);
      if (local_44 == 0) {
        local_50 = &local_44;
      }
      memset(local_50,0,(ulonglong)(local_48 << 2));
      if ((*(byte *)(lVar6 + 0xb9) & 8) == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = (ulonglong)*(uint *)(lVar6 + 0x88) - 4;
      }
      pbVar1 = (byte *)(lVar5 + 3 + lVar6);
      *pbVar1 = *pbVar1 & 0x3f;
      uVar7 = uVar7 + 1;
    } while (uVar2 != uVar7);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f3b1d8 FUN_146f3b1d8 body=42 status=ok
// SIG undefined FUN_146f3b1d8(void)

void FUN_146f3b1d8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142a75fac();
  FUN_142a766de(uVar1,param_1);
  FUN_146f17d52(uVar1);
  return;
}



// FUNCTION 146f3b202 FUN_146f3b202 body=127 status=ok
// SIG undefined FUN_146f3b202(void)

void FUN_146f3b202(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (((*(byte *)((longlong)param_3 + 0x3c) & 1) != 0) &&
     (uVar3 = *(uint *)(param_3 + 1), uVar3 != 0)) {
    lVar1 = *param_3;
    uVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + uVar5 * 8);
      uVar4 = -(ulonglong)*(ushort *)(lVar2 + 0x7a) &
              (param_2 + (ulonglong)*(ushort *)(lVar2 + 0x7a)) - 1;
      if ((*(byte *)(lVar2 + 0xb8) & 0x40) != 0) {
        FUN_146f3ac12(param_1,uVar4,lVar2);
        uVar3 = *(uint *)(param_3 + 1);
      }
      param_2 = uVar4 + *(uint *)(lVar2 + 0x74);
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  return;
}



// FUNCTION 146f3b282 FUN_146f3b282 body=81 status=ok
// SIG undefined FUN_146f3b282(void)

void FUN_146f3b282(undefined8 param_1,void *param_2,void *param_3,longlong param_4)

{
  memcpy(param_2,param_3,(ulonglong)*(uint *)(param_4 + 0x74));
  if ((*(byte *)(param_4 + 0xb8) & 0x40) == 0) {
    return;
  }
  FUN_146f3b482(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 146f3b2d4 FUN_146f3b2d4 body=161 status=ok
// SIG undefined FUN_146f3b2d4(void)

void FUN_146f3b2d4(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  void *_Src;
  void *_Dst;
  ulonglong uVar3;
  
  if ((*(int *)((longlong)param_3 + 0xc) != 0) && ((int)param_3[1] != 0)) {
    lVar1 = *param_3;
    uVar3 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + uVar3 * 8);
      _Dst = (void *)(-(ulonglong)*(ushort *)(lVar2 + 0x7a) &
                     (param_2 + (ulonglong)*(ushort *)(lVar2 + 0x7a)) - 1);
      if ((ulonglong)*(uint *)(lVar2 + 0x74) != 0) {
        _Src = *(void **)(lVar2 + 0xc0);
        memcpy(_Dst,_Src,(ulonglong)*(uint *)(lVar2 + 0x74));
        if ((*(byte *)(lVar2 + 0xb8) & 0x40) != 0) {
          FUN_146f3b482(param_1,_Dst,_Src,lVar2);
        }
      }
      param_2 = (longlong)_Dst + (ulonglong)*(uint *)(lVar2 + 0x74);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_3 + 1));
  }
  return;
}



// FUNCTION 146f3b376 FUN_146f3b376 body=167 status=ok
// SIG undefined FUN_146f3b376(void)

void FUN_146f3b376(longlong param_1,ulonglong param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  uVar4 = param_3 + 0x1fU >> 5;
  *(uint *)(param_1 + 0x28) = uVar1 + uVar4;
  if (*(int *)(param_1 + 0x2c) - uVar1 < uVar4) {
    FUN_146f3c7b6(param_1 + 0x18);
  }
  lVar3 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x20);
  }
  memset((void *)(lVar3 + (longlong)(int)uVar1 * 4),0,(ulonglong)(uVar4 << 2));
  iVar2 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar2 + 1U) {
    FUN_146f3c6ac(param_1,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar3 = param_1;
  }
  *(ulonglong *)(lVar3 + (longlong)iVar2 * 8) =
       param_2 & 0xffffffff | (ulonglong)(uVar1 & 0xffffff) << 0x20;
  return;
}



// FUNCTION 146f3b41e FUN_146f3b41e body=99 status=ok
// SIG undefined FUN_146f3b41e(void)

void FUN_146f3b41e(longlong param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [40];
  uint *puStack_50;
  uint uStack_48;
  uint uStack_44;
  ulonglong uStack_40;
  
  if ((*(uint *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f)
      & 1) != 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x270) + (longlong)((int)param_2 / 100) * 8);
    lVar8 = (ulonglong)(uint)((int)param_2 % 100) * 0x38;
    plVar5 = *(longlong **)(lVar4 + 0x18 + lVar8);
    if ((plVar5 != (longlong *)0x0) &&
       (plVar6 = *(longlong **)(lVar4 + lVar8 + 0x10), *(int *)((longlong)plVar6 + 0xc) != 0)) {
      uStack_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
      uVar2 = *(uint *)(plVar6 + 1);
      if ((ulonglong)uVar2 != 0) {
        lVar4 = *plVar5;
        lVar8 = *plVar6;
        uVar9 = 0;
        do {
          lVar7 = *(longlong *)(lVar8 + uVar9 * 8);
          lVar3 = *(longlong *)(lVar4 + uVar9 * 8);
          uStack_48 = *(ushort *)(lVar7 + 0x86) + 0x1f >> 5;
          uStack_44 = (uint)*(ushort *)(lVar7 + 0x86);
          puStack_50 = (uint *)((ulonglong)*(uint *)(lVar7 + 0x88) + lVar3);
          if (uStack_44 == 0) {
            puStack_50 = &uStack_44;
          }
          memset(puStack_50,0,(ulonglong)(uStack_48 << 2));
          if ((*(byte *)(lVar7 + 0xb9) & 8) == 0) {
            lVar7 = 0;
          }
          else {
            lVar7 = (ulonglong)*(uint *)(lVar7 + 0x88) - 4;
          }
          pbVar1 = (byte *)(lVar3 + 3 + lVar7);
          *pbVar1 = *pbVar1 & 0x3f;
          uVar9 = uVar9 + 1;
        } while (uVar2 != uVar9);
      }
      if ((uStack_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
  return;
}



// FUNCTION 146f3b482 FUN_146f3b482 body=195 status=ok
// SIG undefined FUN_146f3b482(void)

void FUN_146f3b482(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *(ushort *)((longlong)param_4 + 0x7c);
  local_78 = param_3;
  if (uVar1 != 0) {
    lVar2 = *param_4;
    lVar3 = param_4[2];
    lVar4 = param_4[3];
    uVar6 = 0;
    do {
      if ((*(byte *)(lVar4 + uVar6) & 1) != 0) {
        local_60 = 0;
        local_68 = 0;
        local_70 = *(undefined8 *)(lVar3 + 8 + uVar6 * 8);
        uVar5 = (ulonglong)*(uint *)(lVar2 + 4 + uVar6 * 4);
        local_58 = local_78 + uVar5;
        local_50 = uVar5 + param_2;
        (**(code **)(*(longlong *)(lVar3 + uVar6 * 8) + 0x48))(param_1,&local_70);
      }
      uVar6 = uVar6 + 2;
    } while ((uint)uVar1 * 2 != uVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f3b546 FUN_146f3b546 body=204 status=ok
// SIG undefined FUN_146f3b546(void)

void FUN_146f3b546(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined5 uStack_160;
  undefined3 uStack_15b;
  undefined5 uStack_158;
  undefined8 uStack_153;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138 [26];
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 *puStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  byte local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_138[0] = 0;
  local_138[1] = 0;
  lVar1 = 0x18;
  do {
    *(undefined8 *)((longlong)local_138 + lVar1) = 0;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0xd8);
  local_68 = 0;
  local_50 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0xffffffff00000000;
  local_18 = local_18 & 0xfc;
  puStack_48 = &local_168;
  local_148 = 0;
  local_140 = 0;
  local_168 = 0;
  uStack_160 = 0;
  uStack_15b = 0;
  uStack_158 = 0;
  uStack_153 = 0;
  FUN_146f3ac12(local_138,param_1,param_2);
  if ((local_8 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f3b614 FUN_146f3b614 body=357 status=ok
// SIG undefined FUN_146f3b614(void)

void FUN_146f3b614(undefined8 param_1,undefined8 param_2,undefined8 *param_3,longlong param_4,
                  longlong *param_5)

{
  ushort uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  uint *puVar5;
  ushort uVar6;
  uint *puVar7;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((ulonglong)*(ushort *)((longlong)param_5 + 0x82) != 0) {
    puVar7 = (uint *)param_5[6];
    puVar5 = puVar7 + (ulonglong)*(ushort *)((longlong)param_5 + 0x82) * 3;
    do {
      if ((char)puVar7[1] == '\0') {
        plVar3 = (longlong *)((ulonglong)*(ushort *)((longlong)puVar7 + 6) * 0x10 + param_5[2]);
        lVar4 = (ulonglong)*(ushort *)((longlong)puVar7 + 6) * 8 + *param_5;
        local_70 = param_4;
        for (uVar6 = (ushort)puVar7[2]; uVar6 != 0xffff;
            uVar6 = *(ushort *)(plVar2[6] + 8 + (ulonglong)uVar6 * 0xc)) {
          plVar2 = *(longlong **)(plVar3[1] + 0x10);
          local_70 = local_70 + (ulonglong)*(uint *)(lVar4 + 4);
          uVar1 = *(ushort *)(plVar2[6] + 6 + (ulonglong)uVar6 * 0xc);
          plVar3 = (longlong *)((ulonglong)uVar1 * 0x10 + plVar2[2]);
          lVar4 = (ulonglong)uVar1 * 8 + *plVar2;
        }
        local_70 = (ulonglong)*(uint *)(lVar4 + 4) + local_70;
        local_88 = plVar3[1];
        uStack_80 = *param_3;
        local_78 = 0;
        uStack_68 = param_2;
        (**(code **)(*plVar3 + 0x58))(param_1,&local_88);
      }
      else {
        FUN_146f3b77a(param_2,puVar7 + 1,(ulonglong)*puVar7 + param_4,param_3);
      }
      puVar7 = puVar7 + 3;
    } while (puVar7 != puVar5);
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f3b77a FUN_146f3b77a body=171 status=ok
// SIG undefined FUN_146f3b77a(void)

void FUN_146f3b77a(longlong param_1,undefined2 *param_2,longlong *param_3,undefined8 *param_4)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar5 = *param_3;
  uVar2 = *(uint *)(param_3 + 1);
  if ((((uVar2 & 0xfffff) != 0 || lVar5 != 0) || ((*(byte *)(param_1 + 0x410) & 1) != 0)) &&
     ((uVar3 = *(uint *)((longlong)param_3 + 0xc), (uVar3 & 1) != 0 ||
      ((*(byte *)(param_1 + 0x410) & 2) == 0)))) {
    uVar1 = *param_2;
    uVar6 = *param_4;
    iVar4 = *(int *)(param_1 + 0x408);
    *(uint *)(param_1 + 0x408) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x40c) < iVar4 + 1U) {
      FUN_146f3c89c(param_1,iVar4);
    }
    lVar7 = *(longlong *)(param_1 + 0x400);
    if (*(longlong *)(param_1 + 0x400) == 0) {
      lVar7 = param_1;
    }
    lVar8 = (longlong)iVar4 * 0x20;
    *(undefined2 *)(lVar7 + lVar8) = uVar1;
    *(longlong *)(lVar7 + 8 + lVar8) = lVar5;
    *(uint *)(lVar7 + 0x10 + lVar8) = uVar2;
    *(uint *)(lVar7 + 0x14 + lVar8) = uVar3;
    *(undefined8 *)(lVar7 + 0x18 + lVar8) = uVar6;
  }
  return;
}



// FUNCTION 146f3b826 FUN_146f3b826 body=480 status=ok
// SIG undefined FUN_146f3b826(void)

void FUN_146f3b826(longlong param_1,undefined8 param_2,short param_3,longlong param_4,
                  longlong *param_5)

{
  uint *puVar1;
  ushort uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  longlong *plVar7;
  ushort uVar8;
  longlong lVar9;
  uint *puVar10;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  longlong local_80;
  undefined8 uStack_78;
  uint local_68;
  uint uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = param_1;
  if ((ulonglong)*(ushort *)((longlong)param_5 + 0x82) != 0) {
    lVar3 = param_5[1];
    puVar10 = (uint *)param_5[6];
    plVar4 = *(longlong **)(param_1 + 0x108);
    puVar1 = puVar10 + (ulonglong)*(ushort *)((longlong)param_5 + 0x82) * 3;
    do {
      uVar8 = *(short *)(lVar3 + (ulonglong)*(ushort *)((longlong)puVar10 + 6) * 4) + param_3;
      local_68 = (uint)uVar8;
      uStack_64 = (uint)*(ushort *)(lVar3 + 2 + (ulonglong)*(ushort *)((longlong)puVar10 + 6) * 4);
      if (plVar4 == (longlong *)0x0) {
LAB_146f3b8dc:
        if ((char)puVar10[1] == '\0') {
          plVar7 = (longlong *)((ulonglong)*(ushort *)((longlong)puVar10 + 6) * 0x10 + param_5[2]);
          lVar9 = (ulonglong)*(ushort *)((longlong)puVar10 + 6) * 8 + *param_5;
          local_80 = param_4;
          for (uVar8 = (ushort)puVar10[2]; uVar8 != 0xffff;
              uVar8 = *(ushort *)(plVar5[6] + 8 + (ulonglong)uVar8 * 0xc)) {
            plVar5 = *(longlong **)(plVar7[1] + 0x10);
            local_80 = local_80 + (ulonglong)*(uint *)(lVar9 + 4);
            uVar2 = *(ushort *)(plVar5[6] + 6 + (ulonglong)uVar8 * 0xc);
            plVar7 = (longlong *)((ulonglong)uVar2 * 0x10 + plVar5[2]);
            lVar9 = (ulonglong)uVar2 * 8 + *plVar5;
          }
          local_80 = (ulonglong)*(uint *)(lVar9 + 4) + local_80;
          local_98 = plVar7[1];
          uStack_90 = CONCAT44(uStack_64,local_68);
          local_88 = 0;
          uStack_78 = param_2;
          (**(code **)(*plVar7 + 0x58))(local_a0,&local_98);
        }
        else {
          FUN_146f3b77a(param_2,puVar10 + 1,(ulonglong)*puVar10 + param_4,&local_68);
        }
      }
      else if (uStack_64 == 1) {
        if ((*(uint *)(*plVar4 + (ulonglong)(uVar8 >> 5) * 4) >> (uVar8 & 0x1f) & 1) != 0)
        goto LAB_146f3b8dc;
      }
      else {
        cVar6 = FUN_146f0ff32(*plVar4,*(undefined4 *)((longlong)plVar4 + 0xc));
        if (cVar6 != '\0') goto LAB_146f3b8dc;
      }
      puVar10 = puVar10 + 3;
    } while (puVar10 != puVar1);
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f3ba08 FUN_146f3ba08 body=135 status=ok
// SIG undefined FUN_146f3ba08(void)

void FUN_146f3ba08(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar1 = *(uint *)(param_4 + 1);
  if ((ulonglong)uVar1 != 0) {
    lVar2 = *param_4;
    uVar6 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + uVar6 * 8);
      uVar4 = (ulonglong)*(ushort *)(lVar3 + 0x7a);
      uVar5 = (param_2 + uVar4) - 1 & -uVar4;
      uVar4 = -uVar4 & (uVar4 + param_3) - 1;
      if ((*(byte *)(lVar3 + 0xb8) & 0x40) != 0) {
        FUN_146f3b482(param_1,uVar5,uVar4,lVar3);
      }
      param_2 = uVar5 + *(uint *)(lVar3 + 0x74);
      param_3 = uVar4 + *(uint *)(lVar3 + 0x74);
      uVar6 = uVar6 + 1;
    } while (uVar1 != uVar6);
  }
  return;
}



// FUNCTION 146f3ba90 FUN_146f3ba90 body=110 status=ok
// SIG undefined FUN_146f3ba90(void)

void FUN_146f3ba90(undefined8 param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_3 + 1);
  if ((ulonglong)uVar1 != 0) {
    lVar2 = *param_3;
    uVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + uVar5 * 8);
      uVar4 = -(ulonglong)*(ushort *)(lVar3 + 0x7a) &
              (param_2 + (ulonglong)*(ushort *)(lVar3 + 0x7a)) - 1;
      if ((*(byte *)(lVar3 + 0xb8) & 0x40) != 0) {
        FUN_146f3ac12(param_1,uVar4,lVar3);
      }
      param_2 = uVar4 + *(uint *)(lVar3 + 0x74);
      uVar5 = uVar5 + 1;
    } while (uVar1 != uVar5);
  }
  return;
}



// FUNCTION 146f3bafe FUN_146f3bafe body=247 status=ok
// SIG undefined FUN_146f3bafe(void)

void FUN_146f3bafe(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = 0;
  lVar4 = param_4[1];
  local_58 = param_2;
  if ((longlong)(int)lVar4 != 0) {
    uVar1 = *(uint *)(param_1 + 0x120);
    lVar2 = *param_4;
    lVar7 = 0;
    iVar6 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar7);
      uVar5 = -(ulonglong)*(ushort *)(lVar3 + 0x7a) &
              (param_3 + (ulonglong)*(ushort *)(lVar3 + 0x7a)) - 1;
      if ((*(uint *)(lVar3 + 0xb8) & 4) != 0) {
        if ((*(uint *)(lVar3 + 0xb8) & 1) == 0) {
          local_68 = lVar3;
          FUN_146f3b826(param_1,local_58,iVar6,uVar5);
        }
        else if ((uVar1 & 1) != 0) {
          local_68 = lVar3;
          FUN_146f3b614(param_1,local_58,&local_50,uVar5);
        }
      }
      param_3 = uVar5 + *(uint *)(lVar3 + 0x74);
      iVar6 = iVar6 + (uint)*(ushort *)(lVar3 + 0x86);
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f3bbf6 FUN_146f3bbf6 body=38 status=ok
// SIG undefined FUN_146f3bbf6(void)

undefined8 FUN_146f3bbf6(undefined8 param_1,int param_2)

{
  FUN_146f3995c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146f3bc1c FUN_146f3bc1c body=122 status=ok
// SIG undefined FUN_146f3bc1c(void)

longlong FUN_146f3bc1c(longlong param_1,longlong param_2)

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
    FUN_146f3bc96(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 146f3bc96 FUN_146f3bc96 body=117 status=ok
// SIG undefined FUN_146f3bc96(void)

undefined8 * FUN_146f3bc96(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145a41e6a(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1405b363e(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 5);
    }
  }
  return param_1;
}



// FUNCTION 146f3bd0c FUN_146f3bd0c body=52 status=ok
// SIG undefined FUN_146f3bd0c(void)

void FUN_146f3bd0c(longlong *param_1)

{
  FUN_146f3bd40();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f3bd40 FUN_146f3bd40 body=89 status=ok
// SIG undefined FUN_146f3bd40(void)

void FUN_146f3bd40(longlong param_1)

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



// FUNCTION 146f3bd9a FUN_146f3bd9a body=142 status=ok
// SIG undefined FUN_146f3bd9a(void)

void FUN_146f3bd9a(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x188);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x188) = param_2;
    if ((uint)(*(int *)(param_1 + 0x18c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f3be66(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x180);
    if (*(longlong *)(param_1 + 0x180) == 0) {
      lVar2 = param_1;
    }
    FUN_146f3be29(lVar2 + (longlong)iVar1 * 0x18,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_146f3bfe2(param_1,param_2,iVar1 - param_2);
    FUN_146f3c058(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f3be29 FUN_146f3be29 body=61 status=ok
// SIG undefined FUN_146f3be29(void)

void FUN_146f3be29(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    FUN_146f3bf86(param_1);
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 146f3be66 FUN_146f3be66 body=136 status=ok
// SIG undefined FUN_146f3be66(void)

void FUN_146f3be66(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x188);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x18c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x18,0);
      iVar4 = (int)(uVar3 / 0x18);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x18c) = iVar5;
    FUN_146f3bef0(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146f3bef0 FUN_146f3bef0 body=149 status=ok
// SIG undefined FUN_146f3bef0(void)

void FUN_146f3bef0(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x180);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x180,0,param_3,0x18);
    memmove(*(void **)((longlong)param_1 + 0x180),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x180,param_2,param_3,0x18);
  return;
}



// FUNCTION 146f3bf86 FUN_146f3bf86 body=91 status=ok
// SIG undefined FUN_146f3bf86(void)

void FUN_146f3bf86(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1[1];
  if ((int)lVar2 != 0) {
    lVar1 = *param_1;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar3 * 8) != 0) {
        FUN_1400020a8();
      }
      lVar3 = lVar3 + 1;
    } while ((int)lVar2 != (int)lVar3);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447ab16c(param_1,0);
    return;
  }
  return;
}



// FUNCTION 146f3bfe2 FUN_146f3bfe2 body=118 status=ok
// SIG undefined FUN_146f3bfe2(void)

void FUN_146f3bfe2(longlong param_1,uint param_2,int param_3)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x180);
  if (*(longlong *)(param_1 + 0x180) == 0) {
    lVar2 = param_1;
  }
  _Dst = (void *)(lVar2 + (ulonglong)param_2 * 0x18);
  FUN_146f3c09b(_Dst,param_3);
  iVar1 = *(int *)(param_1 + 0x188);
  iVar3 = iVar1 - (param_2 + param_3);
  if (iVar3 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x18),(longlong)iVar3 * 0x18);
    iVar1 = *(int *)(param_1 + 0x188);
  }
  *(int *)(param_1 + 0x188) = iVar1 - param_3;
  return;
}



// FUNCTION 146f3c058 FUN_146f3c058 body=67 status=ok
// SIG undefined FUN_146f3c058(void)

void FUN_146f3c058(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f3c0ce(*(undefined4 *)(param_1 + 0x188),*(undefined4 *)(param_1 + 0x18c));
  if (iVar1 == *(int *)(param_1 + 0x18c)) {
    return;
  }
  *(int *)(param_1 + 0x18c) = iVar1;
  FUN_146f3bef0(param_1,*(undefined4 *)(param_1 + 0x188),iVar1);
  return;
}



// FUNCTION 146f3c09b FUN_146f3c09b body=51 status=ok
// SIG undefined FUN_146f3c09b(void)

void FUN_146f3c09b(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146f3bf86(param_1);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 146f3c0ce FUN_146f3c0ce body=129 status=ok
// SIG undefined FUN_146f3c0ce(void)

ulonglong FUN_146f3c0ce(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 0x10;
  if (0x10 < param_1) {
    iVar2 = param_2 - param_1;
    if ((ulonglong)((longlong)iVar2 * 0x18) < 0x4000) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x18,0);
      uVar1 = uVar1 / 0x18;
    }
  }
  return uVar1;
}



// FUNCTION 146f3c150 FUN_146f3c150 body=62 status=ok
// SIG undefined FUN_146f3c150(void)

void FUN_146f3c150(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x180);
  if (*(longlong *)(param_1 + 0x180) == 0) {
    lVar1 = param_1;
  }
  FUN_146f3c09b(lVar1,*(undefined4 *)(param_1 + 0x188));
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f3c18e FUN_146f3c18e body=90 status=ok
// SIG undefined FUN_146f3c18e(void)

void FUN_146f3c18e(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1[1];
  if ((int)lVar2 != 0) {
    lVar1 = *param_1;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar3 * 8) != 0) {
        FUN_1400020a8();
      }
      lVar3 = lVar3 + 1;
    } while ((int)lVar2 != (int)lVar3);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    return;
  }
  FUN_1447ab16c(param_1,0);
  return;
}



// FUNCTION 146f3c1e8 FUN_146f3c1e8 body=133 status=ok
// SIG undefined FUN_146f3c1e8(void)

longlong FUN_146f3c1e8(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 0x3ff) == 0) {
    *(uint *)(param_1 + 2) = uVar1 | 1;
    lVar4 = FUN_14001cc68(0x1000,0x10);
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
      FUN_1456bd870(param_1,iVar2);
    }
    *(longlong *)(*param_1 + (longlong)iVar2 * 8) = lVar4;
  }
  else {
    *(uint *)(param_1 + 2) = uVar1 + 1;
    uVar3 = uVar1 + 0x3ff;
    if (-1 < (int)uVar1) {
      uVar3 = uVar1;
    }
    lVar4 = (ulonglong)(uint)((int)uVar1 % 0x400) * 4 +
            *(longlong *)(*param_1 + (longlong)((int)uVar3 >> 10) * 8);
  }
  return lVar4;
}



// FUNCTION 146f3c26e FUN_146f3c26e body=83 status=ok
// SIG undefined FUN_146f3c26e(void)

void FUN_146f3c26e(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x188);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x188) = param_2;
    if ((uint)(*(int *)(param_1 + 0x18c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f3c30a();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 0x188) = param_2;
      FUN_146f3c42a();
      return;
    }
  }
  return;
}



// FUNCTION 146f3c2c2 FUN_146f3c2c2 body=71 status=ok
// SIG undefined FUN_146f3c2c2(void)

void FUN_146f3c2c2(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f3c4f0();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
      FUN_146f3c576();
      return;
    }
  }
  return;
}



// FUNCTION 146f3c30a FUN_146f3c30a body=136 status=ok
// SIG undefined FUN_146f3c30a(void)

void FUN_146f3c30a(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x188);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x18c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x18,0);
      iVar4 = (int)(uVar3 / 0x18);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x18c) = iVar5;
    FUN_146f3c394(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146f3c394 FUN_146f3c394 body=149 status=ok
// SIG undefined FUN_146f3c394(void)

void FUN_146f3c394(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x180);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x180,0,param_3,0x18);
    memmove(*(void **)((longlong)param_1 + 0x180),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x180,param_2,param_3,0x18);
  return;
}



// FUNCTION 146f3c42a FUN_146f3c42a body=67 status=ok
// SIG undefined FUN_146f3c42a(void)

void FUN_146f3c42a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f3c46e(*(undefined4 *)(param_1 + 0x188),*(undefined4 *)(param_1 + 0x18c));
  if (iVar1 == *(int *)(param_1 + 0x18c)) {
    return;
  }
  *(int *)(param_1 + 0x18c) = iVar1;
  FUN_146f3c394(param_1,*(undefined4 *)(param_1 + 0x188),iVar1);
  return;
}


