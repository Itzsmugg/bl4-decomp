// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1484572e3 FUN_1484572e3 body=175 status=ok
// SIG undefined FUN_1484572e3(void)

undefined8 FUN_1484572e3(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_145b74a30();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484573a4 FUN_1484573a4 body=124 status=ok
// SIG undefined FUN_1484573a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1484573a4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb4ba78) {
    FUN_144b3d300(&DAT_14cb4ba78);
    if (DAT_14cb4ba78 == -1) {
      DAT_14cb4ba68 = 0;
      _DAT_14cb4ba70 = 0x500000000;
      atexit((_func_5014 *)&LAB_143b56329);
      _Init_thread_footer(&DAT_14cb4ba78);
    }
  }
  return &DAT_14cb4ba40;
}



// FUNCTION 148457440 FUN_148457440 body=45 status=ok
// SIG undefined FUN_148457440(void)

longlong FUN_148457440(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_146071bf8(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14845747e FUN_14845747e body=77 status=ok
// SIG undefined FUN_14845747e(void)

undefined8 FUN_14845747e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  
  iVar1 = *(int *)(param_1 + 0xa8);
  if ((longlong)iVar1 == 0) {
    uVar3 = CONCAT71((int7)(int3)((uint)iVar1 >> 8),1);
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0xa0);
    lVar4 = 0;
    do {
      uVar3 = (**(code **)(**(longlong **)(lVar2 + lVar4) + 0x2a0))();
      if ((char)uVar3 == '\0') {
        return uVar3;
      }
      bVar5 = (longlong)iVar1 * 8 + -8 != lVar4;
      lVar4 = lVar4 + 8;
    } while (bVar5);
  }
  return uVar3;
}



// FUNCTION 1484574f8 FUN_1484574f8 body=60 status=ok
// SIG undefined FUN_1484574f8(void)

undefined8 * FUN_1484574f8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aede560;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148457534 FUN_148457534 body=45 status=ok
// SIG undefined FUN_148457534(void)

longlong FUN_148457534(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148457568 FUN_148457568 body=42 status=ok
// SIG undefined FUN_148457568(void)

undefined8 FUN_148457568(void)

{
  FUN_140033559("Runtime\\InteractiveToolsFramework\\Public\\ToolTargets/ToolTarget.h",0x2d,
                L"Pure virtual not implemented (%s)",L"UToolTarget::IsValid");
  return 0;
}



// FUNCTION 148457592 FUN_148457592 body=42 status=ok
// SIG undefined FUN_148457592(void)

undefined8 FUN_148457592(void)

{
  FUN_140033559("Runtime\\InteractiveToolsFramework\\Public\\ToolTargets/ToolTarget.h",0x61,
                L"Pure virtual not implemented (%s)",L"UToolTargetFactory::CanBuildTarget");
  return 0;
}



// FUNCTION 1484575bc FUN_1484575bc body=42 status=ok
// SIG undefined FUN_1484575bc(void)

undefined8 FUN_1484575bc(void)

{
  FUN_140033559("Runtime\\InteractiveToolsFramework\\Public\\ToolTargets/ToolTarget.h",99,
                L"Pure virtual not implemented (%s)",L"UToolTargetFactory::BuildTarget");
  return 0;
}



// FUNCTION 1484575e6 FUN_1484575e6 body=164 status=ok
// SIG undefined FUN_1484575e6(void)

void FUN_1484575e6(longlong *param_1,undefined8 param_2)

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
        goto LAB_148457666;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148457666:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14845768a FUN_14845768a body=255 status=ok
// SIG undefined FUN_14845768a(void)

undefined8 * FUN_14845768a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  _Src = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 * 2);
  }
  plVar2 = (longlong *)param_2[4];
  param_1[4] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  plVar2 = (longlong *)param_2[6];
  param_1[6] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  lVar3 = param_2[0xb];
  param_1[0xb] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  lVar3 = param_2[0xc];
  param_1[0xc] = lVar3;
  param_1[0xe] = 0;
  if (lVar3 != 0) {
    puVar4 = param_2 + 0x10;
    if ((undefined8 *)param_2[0xe] != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)param_2[0xe];
    }
    (**(code **)*puVar4)(puVar4,param_1 + 0xe);
  }
  return param_1;
}



// FUNCTION 14845778a FUN_14845778a body=147 status=ok
// SIG undefined FUN_14845778a(void)

void FUN_14845778a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xa0,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xa0)) {
      uVar5 = uVar4 / 0xa0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xa0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14845781e FUN_14845781e body=227 status=ok
// SIG undefined FUN_14845781e(void)

void FUN_14845781e(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4,param_5,param_6),
           cVar4 != '\0'))) {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1484578d3;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1484578d3:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148457902 FUN_148457902 body=193 status=ok
// SIG undefined FUN_148457902(void)

void FUN_148457902(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_148457999;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148457999:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1484579c4 FUN_1484579c4 body=139 status=ok
// SIG undefined FUN_1484579c4(void)

int FUN_1484579c4(longlong *param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      do {
        lVar5 = (longlong)iVar1 * 0x20;
        iVar2 = *(int *)(lVar4 + 8 + lVar5);
        if (iVar2 == *(int *)(param_3 + 1)) {
          if (iVar2 < 2) {
            return iVar1;
          }
          iVar2 = FUN_144a80a00(*(undefined8 *)(lVar4 + lVar5),*param_3);
          if (iVar2 == 0) {
            return iVar1;
          }
          lVar4 = *param_1;
        }
        else if (*(int *)(param_3 + 1) + iVar2 == 1) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar4 + 0x18 + lVar5);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 148457a50 FUN_148457a50 body=319 status=ok
// SIG undefined FUN_148457a50(void)

undefined4 * FUN_148457a50(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_148457b90(param_1,local_48);
  FUN_148457ce8(local_40,*param_3,param_3[1]);
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
  cVar3 = FUN_148457c76(param_1,uVar4,local_40,&local_4c);
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
      FUN_148457dd2(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148457b90 FUN_148457b90 body=229 status=ok
// SIG undefined FUN_148457b90(void)

int * FUN_148457b90(longlong *param_1,int *param_2)

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



// FUNCTION 148457c76 FUN_148457c76 body=114 status=ok
// SIG undefined FUN_148457c76(void)

undefined8 FUN_148457c76(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar6 = FUN_1484579c4(), iVar6 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x20);
    if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x20) != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 4);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_148457d60(param_1,*param_4);
    *param_4 = iVar6;
    return 1;
  }
  return 0;
}



// FUNCTION 148457ce8 FUN_148457ce8 body=119 status=ok
// SIG undefined FUN_148457ce8(void)

undefined8 * FUN_148457ce8(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
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
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 148457d60 FUN_148457d60 body=114 status=ok
// SIG undefined FUN_148457d60(void)

void FUN_148457d60(longlong *param_1,int param_2)

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



// FUNCTION 148457dd2 FUN_148457dd2 body=476 status=ok
// SIG undefined FUN_148457dd2(void)

void FUN_148457dd2(longlong *param_1)

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
        lVar11 = (longlong)iVar12 * 0x20;
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
        *(int *)(lVar3 + 0x1c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar11) =
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



// FUNCTION 148457fb0 FUN_148457fb0 body=198 status=ok
// SIG undefined FUN_148457fb0(void)

void FUN_148457fb0(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  int *piVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar3 = *(int *)(param_2 + 1);
    if (iVar3 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = (undefined2 *)*param_2;
    }
    iVar2 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    iVar3 = FUN_144a49b4a(iVar2,puVar6);
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    uVar4 = (longlong)iVar3 & (longlong)(int)param_1[9] - 1U;
    iVar3 = *(int *)((longlong)plVar5 + uVar4 * 4);
    if (iVar3 != -1) {
      piVar7 = (int *)((longlong)plVar5 + uVar4 * 4);
      do {
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar3 * 0x20);
        iVar2 = *(int *)(*param_1 + 8 + (longlong)iVar3 * 0x20);
        if (iVar2 == *(int *)(param_2 + 1)) {
          if (iVar2 < 2) {
LAB_148458065:
            FUN_148458076(param_1,iVar3);
            return;
          }
          iVar3 = FUN_144a80a00(*puVar1,*param_2);
          if (iVar3 == 0) {
            iVar3 = *piVar7;
            goto LAB_148458065;
          }
        }
        else if (*(int *)(param_2 + 1) + iVar2 == 1) goto LAB_148458065;
        iVar3 = *(int *)(puVar1 + 3);
        piVar7 = (int *)(puVar1 + 3);
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 148458076 FUN_148458076 body=90 status=ok
// SIG undefined FUN_148458076(void)

void FUN_148458076(longlong *param_1,int param_2)

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
  FUN_1484580d0();
  return;
}



// FUNCTION 1484580d0 FUN_1484580d0 body=51 status=ok
// SIG undefined FUN_1484580d0(void)

void FUN_1484580d0(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + (longlong)param_2 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_148457d60(param_1,param_2);
  return;
}



// FUNCTION 148458104 FUN_148458104 body=132 status=ok
// SIG undefined FUN_148458104(void)

undefined8 * FUN_148458104(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = &PTR_LAB_14aedfb80;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  iVar1 = (int)param_2[1];
  _Src = (void *)*param_2;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 4) = 0;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 148458188 FUN_148458188 body=57 status=ok
// SIG undefined FUN_148458188(void)

undefined8 * FUN_148458188(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14aedfb80;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484581c2 FUN_1484581c2 body=29 status=ok
// SIG undefined FUN_1484581c2(void)

undefined8 FUN_1484581c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484581e0 FUN_1484581e0 body=175 status=ok
// SIG undefined FUN_1484581e0(void)

void FUN_1484581e0(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
        goto LAB_148458269;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148458269:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148458290 FUN_148458290 body=145 status=ok
// SIG undefined FUN_148458290(void)

undefined8 * FUN_148458290(undefined8 *param_1,longlong *param_2,undefined1 param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = &PTR_LAB_14aedfb80;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  iVar1 = (int)param_2[1];
  _Src = (void *)*param_2;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 4) = 1;
  *(undefined1 *)((longlong)param_1 + 0x21) = param_3;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 148458322 FUN_148458322 body=193 status=ok
// SIG undefined FUN_148458322(void)

void FUN_148458322(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1484583b9;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1484583b9:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1484583e4 FUN_1484583e4 body=63 status=ok
// SIG undefined FUN_1484583e4(void)

undefined8 * FUN_1484583e4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14aedfc20;
  plVar1 = (longlong *)param_1[3];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x40))(plVar1,1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148458424 FUN_148458424 body=211 status=ok
// SIG undefined FUN_148458424(void)

void FUN_148458424(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar8 = false;
  do {
    lVar6 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar6) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar6), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4,param_5),
           cVar4 != '\0'))) {
      lVar6 = lVar6 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar8) {
          return;
        }
        goto LAB_1484584c9;
      }
    }
    uVar5 = uVar7 - 1;
    bVar8 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1484584c9:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1484584f7 FUN_1484584f7 body=175 status=ok
// SIG undefined FUN_1484584f7(void)

undefined8 FUN_1484584f7(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1459d752a();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484585cf FUN_1484585cf body=185 status=ok
// SIG undefined FUN_1484585cf(void)

undefined8 FUN_1484585cf(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14845869d FUN_14845869d body=175 status=ok
// SIG undefined FUN_14845869d(void)

undefined8 FUN_14845869d(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1459d760e();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148458775 FUN_148458775 body=175 status=ok
// SIG undefined FUN_148458775(void)

undefined8 FUN_148458775(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_14594ba2c();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14845884d FUN_14845884d body=175 status=ok
// SIG undefined FUN_14845884d(void)

undefined8 FUN_14845884d(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1459d7446();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148458926 FUN_148458926 body=34 status=ok
// SIG undefined FUN_148458926(void)

void FUN_148458926(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14aedfe20;
  return;
}



// FUNCTION 148458948 FUN_148458948 body=31 status=ok
// SIG undefined FUN_148458948(void)

undefined8 FUN_148458948(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148458984 FUN_148458984 body=93 status=ok
// SIG undefined FUN_148458984(void)

void FUN_148458984(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14aedfdb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1484589e2 FUN_1484589e2 body=123 status=ok
// SIG undefined FUN_1484589e2(void)

void FUN_1484589e2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14aedfdb0;
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



// FUNCTION 148458a6a FUN_148458a6a body=21 status=ok
// SIG undefined FUN_148458a6a(void)

undefined8 FUN_148458a6a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148458a80 FUN_148458a80 body=29 status=ok
// SIG undefined FUN_148458a80(void)

undefined8 FUN_148458a80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148458a9e FUN_148458a9e body=178 status=ok
// SIG undefined FUN_148458a9e(void)

undefined8 * FUN_148458a9e(undefined8 *param_1,longlong *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    puVar5 = (undefined8 *)*param_1;
    lVar6 = (longlong)*(int *)(param_1 + 1) << 3;
    do {
      local_40 = *puVar5;
      pcVar1 = (code *)*param_2;
      plVar4 = (longlong *)param_2[2];
      if ((longlong *)param_2[2] == (longlong *)0x0) {
        plVar4 = param_2 + 4;
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      cVar2 = (*pcVar1)(uVar3,&local_40);
      if (cVar2 != '\0') goto LAB_148458b0b;
      puVar5 = puVar5 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  puVar5 = (undefined8 *)0x0;
LAB_148458b0b:
  if (*param_2 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148458b51 FUN_148458b51 body=358 status=ok
// SIG undefined FUN_148458b51(void)

longlong FUN_148458b51(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
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
  plVar7 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = plVar7;
  if ((int)param_1[5] == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar6 = (int)param_1[5];
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = param_1;
  if ((iStack_54 != iVar6) || (uStack_60 != plVar7)) {
    do {
      lVar5 = *local_90;
      lVar8 = (longlong)iStack_74;
      local_68 = *(undefined8 *)(lVar5 + lVar8 * 0x10);
      pcVar1 = (code *)*param_2;
      plVar4 = (longlong *)param_2[2];
      if ((longlong *)param_2[2] == (longlong *)0x0) {
        plVar4 = param_2 + 4;
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      cVar2 = (*pcVar1)(uVar3,&local_68);
      if (cVar2 != '\0') {
        lVar5 = lVar5 + lVar8 * 0x10;
        goto LAB_148458be1;
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != param_1 ||
             ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar7 || iStack_74 != iVar6));
  }
  lVar5 = 0;
LAB_148458be1:
  if (*param_2 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 148458cb8 FUN_148458cb8 body=245 status=ok
// SIG undefined FUN_148458cb8(void)

longlong * FUN_148458cb8(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  lVar8 = *(longlong *)(param_1 + 0xc0);
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    lVar8 = param_1;
  }
  iVar1 = *(int *)(param_1 + 200);
  if ((longlong)iVar1 != 0) {
    lVar7 = 0;
    do {
      local_50 = *(undefined8 *)(lVar8 + lVar7);
      pcVar3 = (code *)*param_3;
      plVar6 = (longlong *)param_3[2];
      if ((longlong *)param_3[2] == (longlong *)0x0) {
        plVar6 = param_3 + 4;
      }
      uVar5 = (**(code **)(*plVar6 + 8))();
      cVar4 = (*pcVar3)(uVar5,&local_50);
      if (cVar4 != '\0') {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1406ca8e4(param_2,iVar2);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = *(undefined8 *)(lVar8 + lVar7);
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar1 * 8 != lVar7);
  }
  if (*param_3 != 0) {
    plVar6 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148458dae FUN_148458dae body=178 status=ok
// SIG undefined FUN_148458dae(void)

undefined8 * FUN_148458dae(undefined8 *param_1,longlong *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    puVar5 = (undefined8 *)*param_1;
    lVar6 = (longlong)*(int *)(param_1 + 1) << 3;
    do {
      local_40 = *puVar5;
      pcVar1 = (code *)*param_2;
      plVar4 = (longlong *)param_2[2];
      if ((longlong *)param_2[2] == (longlong *)0x0) {
        plVar4 = param_2 + 4;
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      cVar2 = (*pcVar1)(uVar3,&local_40);
      if (cVar2 != '\0') goto LAB_148458e1b;
      puVar5 = puVar5 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  puVar5 = (undefined8 *)0x0;
LAB_148458e1b:
  if (*param_2 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148458e62 FUN_148458e62 body=48 status=ok
// SIG undefined FUN_148458e62(void)

void FUN_148458e62(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 148458e92 FUN_148458e92 body=132 status=ok
// SIG undefined FUN_148458e92(void)

void FUN_148458e92(longlong param_1,int param_2)

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



// FUNCTION 148458f18 FUN_148458f18 body=86 status=ok
// SIG undefined FUN_148458f18(void)

void FUN_148458f18(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 148458f6e FUN_148458f6e body=132 status=ok
// SIG undefined FUN_148458f6e(void)

void FUN_148458f6e(longlong param_1,int param_2)

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



// FUNCTION 148459003 FUN_148459003 body=41 status=ok
// SIG undefined FUN_148459003(void)

byte FUN_148459003(int param_1,undefined4 param_2,byte param_3)

{
  byte bVar1;
  
  if ((param_1 == 7) || (param_1 == 0)) {
    bVar1 = FUN_14287fa46(param_2);
    param_3 = 1 < bVar1 | param_3;
  }
  else {
    param_3 = 0;
  }
  return param_3;
}



// FUNCTION 148459030 FUN_148459030 body=97 status=ok
// SIG undefined FUN_148459030(void)

undefined8 FUN_148459030(int *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if ((char)param_1[3] == '\x01') {
    lVar3 = (longlong)param_1[2] * (longlong)param_1[1] * (longlong)*param_1;
    if (0 < lVar3) {
      lVar2 = *(longlong *)(param_1 + 4);
      lVar5 = 0;
      do {
        if (((*(char *)(lVar2 + 3 + lVar5 * 4) != -1) ||
            (cVar1 = *(char *)(lVar2 + 2 + lVar5 * 4), cVar1 != *(char *)(lVar2 + lVar5 * 4))) ||
           (*(char *)(lVar2 + 1 + lVar5 * 4) != cVar1)) goto LAB_14845908a;
        lVar5 = lVar5 + 1;
      } while (lVar3 - lVar5 != 0);
    }
    FUN_146987826(param_1,0,*(undefined1 *)((longlong)param_1 + 0xd));
    uVar4 = 1;
  }
  else {
LAB_14845908a:
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 148459091 FUN_148459091 body=117 status=ok
// SIG undefined FUN_148459091(void)

ulonglong FUN_148459091(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  
  if ((char)param_1[5] == '\x01') {
    lVar2 = *param_1;
    lVar3 = param_1[1];
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    lVar4 = FUN_146987ac9(1);
    if (0 < lVar3 / lVar4) {
      lVar5 = 0;
      do {
        if (*(char *)(lVar2 + 3 + lVar5 * 4) != -1) goto LAB_1484590f8;
        cVar1 = *(char *)(lVar2 + 2 + lVar5 * 4);
        if ((cVar1 != *(char *)(lVar2 + lVar5 * 4)) || (*(char *)(lVar2 + 1 + lVar5 * 4) != cVar1))
        goto LAB_1484590f8;
        lVar5 = lVar5 + 1;
      } while (lVar3 / lVar4 != lVar5);
    }
    FUN_146987ae0(param_1,0,*(undefined1 *)((longlong)param_1 + 0x29));
  }
  else {
LAB_1484590f8:
    uVar6 = 0;
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 148459106 FUN_148459106 body=147 status=ok
// SIG undefined FUN_148459106(void)

void FUN_148459106(uint param_1,uint param_2,int param_3,undefined8 param_4,undefined1 param_5)

{
  undefined8 unaff_RBX;
  ulonglong uVar1;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [136];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (-1 < (int)(param_2 | param_1)) {
    uVar1 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5);
    if (param_3 == 4) {
      FUN_148459248(local_a0,param_1,param_2);
      FUN_143b5673c(local_a0,uVar1 & 0xffffffff);
    }
    else if (param_3 == 2) {
      FUN_14845919a(local_a0,param_1,param_2);
      FUN_143b565ca(local_a0,uVar1 & 0xffffffff);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14845919a FUN_14845919a body=173 status=ok
// SIG undefined FUN_14845919a(void)

undefined8 * FUN_14845919a(undefined8 *param_1,int param_2,int param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  float fVar5;
  
  *param_1 = param_4;
  param_1[1] = (longlong)param_2;
  param_1[2] = (longlong)param_3;
  *(undefined4 *)(param_1 + 3) = 0xffffff;
  lVar2 = 0;
  puVar4 = (undefined4 *)((longlong)param_1 + 0x1c);
  do {
    lVar3 = 0;
    do {
      lVar1 = lVar3 * lVar3 + lVar2 * lVar2;
      if (lVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
      }
      else {
        fVar5 = expf(SQRT((float)(int)lVar1) * -1.1);
        puVar4[lVar3] = fVar5;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != 5);
    lVar2 = lVar2 + 1;
    puVar4 = puVar4 + 5;
  } while (lVar2 != 5);
  return param_1;
}



// FUNCTION 148459248 FUN_148459248 body=180 status=ok
// SIG undefined FUN_148459248(void)

undefined8 * FUN_148459248(undefined8 *param_1,int param_2,int param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  float fVar5;
  
  *param_1 = param_4;
  param_1[1] = (longlong)param_2;
  param_1[2] = (longlong)param_3;
  param_1[3] = 0xffffffffffff;
  lVar2 = 0;
  puVar4 = param_1 + 4;
  do {
    lVar3 = 0;
    do {
      lVar1 = lVar3 * lVar3 + lVar2 * lVar2;
      if (lVar1 == 0) {
        *(undefined4 *)(param_1 + 4) = 0;
      }
      else {
        fVar5 = expf(SQRT((float)(int)lVar1) * -1.1);
        *(float *)((longlong)puVar4 + lVar3 * 4) = fVar5;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != 5);
    lVar2 = lVar2 + 1;
    puVar4 = (undefined8 *)((longlong)puVar4 + 0x14);
  } while (lVar2 != 5);
  return param_1;
}



// FUNCTION 1484592fc FUN_1484592fc body=1725 status=ok
// SIG undefined FUN_1484592fc(void)

bool FUN_1484592fc(ulonglong param_1,ulonglong param_2,char param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  char extraout_AL;
  int iVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_238 [40];
  undefined1 local_210 [4];
  undefined1 local_20c [4];
  longlong *local_208 [2];
  undefined8 local_1f8;
  longlong *local_1f0;
  undefined8 local_1e8;
  longlong *plStack_1e0;
  longlong *local_1d8 [2];
  undefined8 local_1c8;
  longlong *plStack_1c0;
  longlong *local_1b8 [2];
  undefined8 local_1a8;
  longlong *plStack_1a0;
  longlong *local_198 [2];
  undefined8 local_188;
  longlong *plStack_180;
  longlong *local_170 [2];
  longlong *local_160;
  undefined4 local_158;
  longlong *local_150 [2];
  longlong *local_140;
  undefined4 local_138;
  undefined8 local_130;
  longlong *local_128;
  wchar_t **local_120;
  ulonglong *local_118;
  longlong local_110;
  undefined4 local_108;
  wchar_t *local_100;
  undefined4 local_f8 [2];
  undefined1 local_f0 [16];
  undefined4 local_e0;
  undefined1 local_d0 [16];
  undefined4 local_c0;
  undefined1 local_b0 [16];
  undefined4 local_a0;
  undefined1 local_90 [16];
  undefined4 local_80;
  undefined1 local_70 [16];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_238;
  iVar5 = FUN_147d6e11a();
  if (param_1 == 0 || param_2 == 0) {
    if (param_4 != 0) {
      local_100 = L"Warning_TextureSizeZero";
      local_f8[0] = 0x17;
      FUN_1446e940c(&local_110,&local_100);
      local_100 = L"Interchange";
      local_f8[0] = 0xb;
      FUN_1446e940c(&local_120,&local_100);
      pwVar6 = L"Texture has zero width or height";
LAB_1484593b6:
      FUN_140208bae(&local_100,&local_120,&local_110,pwVar6);
      FUN_140008f88(param_4,&local_100);
      if (local_100 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_100 + 0x10))();
      }
    }
  }
  else {
    cVar4 = FUN_14287fa1f(param_1,param_2);
    if (cVar4 == '\0') {
      if (param_4 != 0) {
        local_100 = L"Warning_TextureSizeTooLargeOrInvalid";
        local_f8[0] = 0x24;
        FUN_1446e940c(&local_110,&local_100);
        local_100 = L"Interchange";
        local_f8[0] = 0xb;
        FUN_1446e940c(&local_120,&local_100);
        pwVar6 = L"Texture is too large to import or it has an invalid resolution.";
        goto LAB_1484593b6;
      }
    }
    else {
      lVar7 = (longlong)iVar5;
      if ((lVar7 < (longlong)param_1 || lVar7 < (longlong)param_2) &&
         (FUN_147d6dcd8(0), extraout_AL == '\0')) {
        local_100 = L"Warning_LargeTextureVTDisabled";
        local_f8[0] = 0x1e;
        FUN_1446e940c(&local_110,&local_100);
        local_100 = L"Interchange";
        local_f8[0] = 0xb;
        FUN_1446e940c(&local_120,&local_100);
        FUN_140208bae(&local_140,&local_120,&local_110,
                      L"\nWarning: Virtual Textures are disabled in this project.");
        local_160 = local_140;
        if (local_140 != (longlong *)0x0) {
          (**(code **)(*local_140 + 8))();
        }
        local_158 = local_138;
        local_188 = 0;
        plStack_180 = (longlong *)0x0;
        FUN_1456e1912(local_170,lVar7,0);
        local_1a8 = 0;
        plStack_1a0 = (longlong *)0x0;
        FUN_1456e1912(local_198,lVar7,0);
        local_1c8 = 0;
        plStack_1c0 = (longlong *)0x0;
        FUN_1456e1912(local_1b8,param_2,0);
        local_1e8 = 0;
        plStack_1e0 = (longlong *)0x0;
        FUN_1456e1912(local_1d8,param_1,0);
        local_100 = L"Warning_LargeTextureImport";
        local_f8[0] = 0x1a;
        FUN_1446e940c(local_20c,&local_100);
        local_100 = L"Interchange";
        local_f8[0] = 0xb;
        FUN_1446e940c(local_210,&local_100);
        FUN_140208bae(local_208,local_210,local_20c,
                      L"Attempting to import {0} x {1} texture, proceed?\nLargest supported non-VT texture size: {2} x {3}{4}"
                     );
        FUN_14023409e(&local_1f8,local_208,1);
        local_100 = (wchar_t *)CONCAT44(local_100._4_4_,4);
        FUN_14023423e(local_f0,local_1d8);
        local_e0 = 4;
        FUN_14023423e(local_d0,local_1b8);
        local_c0 = 4;
        FUN_14023423e(local_b0,local_198);
        local_a0 = 4;
        FUN_14023423e(local_90,local_170);
        local_80 = 4;
        FUN_14023423e(local_70,&local_160);
        local_118 = local_60;
        local_120 = &local_100;
        FUN_14010d304(&local_110);
        local_130 = local_1f8;
        local_128 = local_1f0;
        if (local_1f0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_1f0 + 1) = (int)local_1f0[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(local_150,&local_130,&local_110);
        FUN_14007f2db(local_110,local_108);
        if (local_110 != 0) {
          FUN_1400020a8();
        }
        lVar7 = 0x90;
        do {
          plVar3 = *(longlong **)((longlong)local_f8 + lVar7 + -8);
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x10))();
            *(undefined8 *)((longlong)local_f8 + lVar7 + -8) = 0;
            *(undefined4 *)((longlong)local_f8 + lVar7) = 0;
          }
          lVar7 = lVar7 + -0x20;
        } while (lVar7 != -0x10);
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
        if (local_1d8[0] != (longlong *)0x0) {
          (**(code **)(*local_1d8[0] + 0x10))();
        }
        if (local_1b8[0] != (longlong *)0x0) {
          (**(code **)(*local_1b8[0] + 0x10))();
        }
        if (local_198[0] != (longlong *)0x0) {
          (**(code **)(*local_198[0] + 0x10))();
        }
        if (local_170[0] != (longlong *)0x0) {
          (**(code **)(*local_170[0] + 0x10))();
        }
        if (local_160 != (longlong *)0x0) {
          (**(code **)(*local_160 + 0x10))();
        }
        iVar5 = FUN_14681555a(1,1,local_150);
        if (local_150[0] != (longlong *)0x0) {
          (**(code **)(*local_150[0] + 0x10))();
        }
        if (local_208[0] != (longlong *)0x0) {
          (**(code **)(*local_208[0] + 0x10))();
        }
        plVar3 = plStack_1e0;
        if (plStack_1e0 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_1e0 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plStack_1e0)(plStack_1e0);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        plVar3 = plStack_1c0;
        if (plStack_1c0 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_1c0 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plStack_1c0)(plStack_1c0);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        plVar3 = plStack_1a0;
        if (plStack_1a0 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_1a0 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plStack_1a0)(plStack_1a0);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        plVar3 = plStack_180;
        if (plStack_180 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_180 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plStack_180)(plStack_180);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        if (local_140 != (longlong *)0x0) {
          (**(code **)(*local_140 + 0x10))();
        }
        bVar8 = iVar5 == 1;
        if (!bVar8 || param_3 != '\0') goto LAB_1484593e7;
      }
      else {
        bVar8 = true;
        if (param_3 != '\0') goto LAB_1484593e7;
      }
      bVar8 = true;
      if ((param_2 - 1 & param_2) == 0 && (param_1 - 1 & param_1) == 0) goto LAB_1484593e7;
      if (param_4 != 0) {
        local_100 = L"Warning_TextureNotAPowerOfTwo";
        local_f8[0] = 0x1d;
        FUN_1446e940c(&local_110,&local_100);
        local_100 = L"Interchange";
        local_f8[0] = 0xb;
        FUN_1446e940c(&local_120,&local_100);
        pwVar6 = L"Cannot import texture with non-power of two dimensions";
        goto LAB_1484593b6;
      }
    }
  }
  bVar8 = false;
LAB_1484593e7:
  if ((local_60[0] ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar8;
}



// FUNCTION 1484599ba FUN_1484599ba body=12 status=ok
// SIG undefined FUN_1484599ba(void)

int FUN_1484599ba(int param_1,int param_2)

{
  return param_1 + param_2 * 10 + 0x3e9;
}



// FUNCTION 1484599c6 FUN_1484599c6 body=183 status=ok
// SIG undefined FUN_1484599c6(void)

void FUN_1484599c6(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_a8 [40];
  undefined4 local_80;
  undefined8 *local_78;
  undefined1 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined1 local_4c [4];
  undefined8 local_48;
  undefined1 *local_40;
  undefined1 **local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = *param_1;
  uVar1 = FUN_14698767a(local_4c,param_1[1]);
  local_38 = &local_68;
  local_78 = &local_30;
  local_30 = 0;
  local_28 = 0;
  local_40 = &LAB_148459e08;
  local_80 = 0;
  local_68 = local_4c;
  local_60 = param_1;
  local_58 = &local_48;
  FUN_1411ca36e(L"TextureImportUtils.FillFromNearNeighbors.PF",uVar1,1);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148459a7e FUN_148459a7e body=905 status=ok
// SIG undefined FUN_148459a7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_148459a7e(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  uint *puVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  uint *puVar17;
  undefined1 in_XMM0 [16];
  undefined1 in_XMM1 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  auVar4 = _DAT_149931e80;
  lVar5 = *param_1;
  param_2 = param_2 * param_1[1];
  puVar2 = (uint *)(lVar5 + param_2 * 4);
  if (*puVar2 == *(uint *)(param_1 + 3)) {
    lVar10 = 0;
    while (puVar2[lVar10] == *puVar2) {
      lVar10 = lVar10 + 1;
      if (param_1[1] == lVar10) {
                    /* WARNING: Read-only address (ram,0x000149931e80) is written */
        return 0;
      }
    }
    if (lVar10 != 0) {
      uVar13 = puVar2[lVar10] & 0xffffff;
      lVar14 = lVar10 + -1;
      auVar20._8_4_ = (int)lVar14;
      auVar20._0_8_ = lVar14;
      auVar20._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
      lVar14 = lVar5 + param_2 * 4;
      in_XMM1 = pmovsxbq(in_XMM1,0x302);
      auVar18 = pmovsxbq(in_XMM2,0x100);
      uVar12 = 0;
      in_XMM0 = auVar20 ^ _DAT_149931e80;
      auVar20 = pmovsxbq(in_XMM5,0x404);
      do {
        auVar23 = auVar18 ^ auVar4;
        if ((bool)(~(in_XMM0._0_8_ < auVar23._0_8_) & 1)) {
          *(uint *)(lVar14 + uVar12 * 4) = uVar13;
        }
        if (auVar23._8_8_ <= in_XMM0._8_8_) {
          *(uint *)(lVar14 + 4 + uVar12 * 4) = uVar13;
        }
        auVar23 = in_XMM1 ^ auVar4;
        if (auVar23._0_8_ <= in_XMM0._0_8_) {
          *(uint *)(lVar14 + 8 + uVar12 * 4) = uVar13;
        }
        if (auVar23._8_8_ <= in_XMM0._8_8_) {
          *(uint *)(lVar14 + 0xc + uVar12 * 4) = uVar13;
        }
        uVar12 = uVar12 + 4;
        lVar9 = auVar18._8_8_;
        auVar18._0_8_ = auVar18._0_8_ + auVar20._0_8_;
        auVar18._8_8_ = lVar9 + auVar20._8_8_;
        lVar9 = in_XMM1._8_8_;
        in_XMM1._0_8_ = in_XMM1._0_8_ + auVar20._0_8_;
        in_XMM1._8_8_ = lVar9 + auVar20._8_8_;
      } while ((lVar10 + 3U & 0xfffffffffffffffc) != uVar12);
      goto LAB_148459b9a;
    }
  }
  lVar10 = 0;
LAB_148459b9a:
  auVar4 = _DAT_149931e80;
  lVar5 = lVar5 + param_2 * 4 + 0xc;
  auVar20 = pmovsxbq(in_XMM0,0x302);
  auVar18 = pmovsxbq(in_XMM1,0x100);
LAB_148459bc6:
  uVar13 = *(uint *)(param_1 + 3);
  lVar9 = lVar10 * 2;
  lVar6 = 3 - lVar10;
  puVar17 = (uint *)(lVar5 + lVar10 * 4);
  lVar14 = lVar10 + 3;
  lVar16 = 0;
  lVar15 = lVar10;
  while (lVar1 = lVar15, puVar2[lVar15] != uVar13) {
    lVar15 = lVar15 + 1;
    lVar16 = lVar16 + 1;
    lVar9 = lVar9 + 2;
    lVar6 = lVar6 + -1;
    puVar17 = puVar17 + 1;
    lVar14 = lVar14 + 1;
    if (lVar15 == param_1[1]) goto LAB_148459df0;
  }
LAB_148459c0c:
  lVar7 = lVar1;
  uVar3 = puVar2[lVar7];
  if (uVar3 == uVar13) goto code_r0x000148459c18;
  uVar12 = lVar9 / 2;
  if (lVar15 < (longlong)uVar12) {
    uVar8 = puVar2[lVar15 + -1] & 0xffffff;
    lVar10 = ~(lVar10 + lVar16) + uVar12;
    auVar23._8_4_ = (int)lVar10;
    auVar23._0_8_ = lVar10;
    auVar23._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
    uVar11 = 0;
    do {
      lVar10 = SUB168(auVar23 ^ auVar4,0);
      lVar9 = SUB168(auVar23 ^ auVar4,8);
      if ((bool)(~(lVar10 < (longlong)(uVar11 ^ auVar4._0_8_)) & 1)) {
        puVar17[-3] = uVar8;
      }
      auVar21._8_4_ = (int)uVar11;
      auVar21._0_8_ = uVar11;
      auVar21._12_4_ = (int)(uVar11 >> 0x20);
      if ((longlong)((auVar21._8_8_ | auVar18._8_8_) ^ auVar4._8_8_) <= lVar9) {
        puVar17[-2] = uVar8;
      }
      auVar21 = (auVar21 | auVar20) ^ auVar4;
      if (auVar21._0_8_ <= lVar10) {
        puVar17[-1] = uVar8;
      }
      if (auVar21._8_8_ <= lVar9) {
        *puVar17 = uVar8;
      }
      uVar11 = uVar11 + 4;
      puVar17 = puVar17 + 4;
    } while ((lVar6 + uVar12 & 0xfffffffffffffffc) != uVar11);
  }
  lVar10 = lVar7;
  if ((longlong)uVar12 < lVar7) {
    uVar8 = uVar3 & 0xffffff;
    lVar7 = ~uVar12 + lVar7;
    auVar19._8_4_ = (int)lVar7;
    auVar19._0_8_ = lVar7;
    auVar19._12_4_ = (int)((ulonglong)lVar7 >> 0x20);
    lVar9 = lVar5 + uVar12 * 4;
    uVar11 = 0;
    do {
      lVar15 = SUB168(auVar19 ^ auVar4,0);
      lVar6 = SUB168(auVar19 ^ auVar4,8);
      if ((bool)(~(lVar15 < (longlong)(uVar11 ^ auVar4._0_8_)) & 1)) {
        *(uint *)(lVar9 + -0xc + uVar11 * 4) = uVar8;
      }
      auVar22._8_4_ = (int)uVar11;
      auVar22._0_8_ = uVar11;
      auVar22._12_4_ = (int)(uVar11 >> 0x20);
      if ((longlong)((auVar22._8_8_ | auVar18._8_8_) ^ auVar4._8_8_) <= lVar6) {
        *(uint *)(lVar9 + -8 + uVar11 * 4) = uVar8;
      }
      auVar23 = (auVar22 | auVar20) ^ auVar4;
      if (auVar23._0_8_ <= lVar15) {
        *(uint *)(lVar9 + -4 + uVar11 * 4) = uVar8;
      }
      if (auVar23._8_8_ <= lVar6) {
        *(uint *)(lVar9 + uVar11 * 4) = uVar8;
      }
      uVar11 = uVar11 + 4;
    } while ((lVar14 - uVar12 & 0xfffffffffffffffc) != uVar11);
  }
  goto LAB_148459c49;
code_r0x000148459c18:
  lVar1 = lVar7 + 1;
  lVar9 = lVar9 + 1;
  lVar14 = lVar14 + 1;
  if (lVar1 == param_1[1]) goto code_r0x000148459c28;
  goto LAB_148459c0c;
code_r0x000148459c28:
  if (lVar7 < lVar15) goto LAB_148459df0;
  uVar8 = puVar2[lVar15 + -1];
  do {
    puVar2[lVar15] = uVar8 & 0xffffff;
    lVar15 = lVar15 + 1;
    lVar10 = lVar1;
  } while (lVar15 < param_1[1]);
LAB_148459c49:
  if (uVar3 == uVar13) {
LAB_148459df0:
    return CONCAT71((int7)((ulonglong)puVar2 >> 8),1);
  }
  goto LAB_148459bc6;
}



// FUNCTION 148459e10 FUN_148459e10 body=295 status=ok
// SIG undefined FUN_148459e10(void)

void FUN_148459e10(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  void *_Src;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 *local_60;
  void *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = param_1[1];
  lVar5 = (longlong)(param_2 * *(int *)*param_1);
  lVar6 = *(int *)*param_1 + lVar5;
  if (*(longlong *)(lVar1 + 0x10) <= lVar6) {
    lVar6 = *(longlong *)(lVar1 + 0x10);
  }
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_60 = param_1;
  FUN_14478085e(&local_58,*(undefined4 *)(lVar1 + 8),1);
  _Src = local_58;
  local_68 = lVar6;
  if (lVar5 < lVar6) {
    lVar6 = lVar5 * 4;
    do {
      lVar2 = *(longlong *)local_60[2];
      lVar3 = *(longlong *)(lVar1 + 8);
      lVar7 = lVar3;
      if (0 < lVar3) {
        lVar8 = 0;
        do {
          iVar4 = *(int *)(lVar3 * lVar6 + lVar2 + lVar8 * 4);
          if (iVar4 == *(int *)(lVar1 + 0x18)) {
            iVar4 = FUN_148459f38(lVar1,lVar8,lVar5);
          }
          *(int *)((longlong)_Src + lVar8 * 4) = iVar4;
          lVar8 = lVar8 + 1;
          lVar7 = *(longlong *)(lVar1 + 8);
        } while (lVar8 < lVar7);
      }
      memcpy((void *)(lVar3 * lVar5 * 4 + lVar2),_Src,lVar7 << 2);
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 4;
    } while (lVar5 != local_68);
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8(local_58);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148459f38 FUN_148459f38 body=593 status=ok
// SIG undefined FUN_148459f38(void)

undefined4 FUN_148459f38(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  float local_94;
  float local_90;
  float local_8c;
  undefined4 local_88;
  undefined4 local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar11 = 4;
  if (4 < param_2) {
    lVar11 = param_2;
  }
  lVar9 = 4;
  if (4 < param_3) {
    lVar9 = param_3;
  }
  lVar9 = lVar9 + -4;
  lVar10 = param_1[2] + -1;
  if (param_3 + 4 <= param_1[2] + -1) {
    lVar10 = param_3 + 4;
  }
  local_a0 = param_3;
  if (lVar9 <= lVar10) {
    local_a8 = lVar11 + -4;
    local_b0 = param_1[1];
    lVar8 = param_2 + 4;
    if (local_b0 + -1 < param_2 + 4) {
      lVar8 = local_b0 + -1;
    }
    local_c0 = (longlong)param_1 + 0x1c;
    lVar6 = *param_1 + local_b0 * lVar9 * 4 + -0x10;
    local_b0 = local_b0 * 4;
    fVar15 = 0.0;
    fVar12 = 0.0;
    fVar13 = 0.0;
    fVar14 = 0.0;
    do {
      lVar4 = -(lVar9 - param_3);
      if (lVar4 < 0) {
        lVar4 = lVar9 - param_3;
      }
      if (local_a8 <= lVar8) {
        lVar5 = lVar11;
        do {
          uVar2 = *(uint *)(lVar6 + lVar5 * 4);
          fVar16 = (float)(uVar2 >> 0x18) * 0.003921569;
          if ((fVar16 != 0.0) || (NAN(fVar16))) {
            lVar1 = (-4 - param_2) + lVar5;
            lVar7 = -lVar1;
            if (lVar7 < 0) {
              lVar7 = lVar1;
            }
            fVar16 = fVar16 * *(float *)(local_c0 + lVar4 * 0x14 + lVar7 * 4);
            fVar15 = fVar15 + fVar16;
            fVar12 = fVar12 + fVar16 * *(float *)((longlong)&DAT_14c758c60 +
                                                 (ulonglong)(uVar2 >> 0xe & 0x3fc));
            fVar13 = fVar13 + (float)(&DAT_14c758c60)[uVar2 >> 8 & 0xff] * fVar16;
            fVar14 = fVar14 + (float)(&DAT_14c758c60)[uVar2 & 0xff] * fVar16;
          }
          lVar5 = lVar5 + 1;
        } while (lVar8 + 5 != lVar5);
      }
      lVar6 = lVar6 + local_b0;
      bVar3 = lVar9 < lVar10;
      lVar9 = lVar9 + 1;
    } while (bVar3);
    local_c8 = param_1;
    local_b8 = lVar11;
    if ((fVar15 != 0.0) || (NAN(fVar15))) {
      fVar15 = 1.0 / fVar15;
      local_94 = fVar12 * fVar15;
      local_90 = fVar13 * fVar15;
      local_8c = fVar14 * fVar15;
      local_88 = 0;
      FUN_1411ab38a(&local_94,&local_84);
      goto LAB_148459fb3;
    }
  }
  local_84 = (undefined4)param_1[3];
LAB_148459fb3:
  if ((local_80 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return local_84;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14845a18a FUN_14845a18a body=183 status=ok
// SIG undefined FUN_14845a18a(void)

void FUN_14845a18a(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_a8 [40];
  undefined4 local_80;
  undefined8 *local_78;
  undefined1 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined1 local_4c [4];
  undefined8 local_48;
  undefined1 *local_40;
  undefined1 **local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = *param_1;
  uVar1 = FUN_14698767a(local_4c,param_1[1]);
  local_38 = &local_68;
  local_78 = &local_30;
  local_30 = 0;
  local_28 = 0;
  local_40 = &LAB_14845a4fc;
  local_80 = 0;
  local_68 = local_4c;
  local_60 = param_1;
  local_58 = &local_48;
  FUN_1411ca36e(L"TextureImportUtils.FillFromNearNeighbors.PF",uVar1,1);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14845a242 FUN_14845a242 body=697 status=ok
// SIG undefined FUN_14845a242(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14845a242(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 in_XMM0 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  auVar3 = _DAT_149931e80;
  lVar4 = *param_1;
  param_2 = param_2 * param_1[1];
  puVar2 = (ulonglong *)(lVar4 + param_2 * 8);
  if (*puVar2 == param_1[3]) {
    lVar11 = 0;
    while (puVar2[lVar11] == *puVar2) {
      lVar11 = lVar11 + 1;
      if (param_1[1] == lVar11) {
                    /* WARNING: Read-only address (ram,0x000149931e80) is written */
        return 0;
      }
    }
    if (lVar11 != 0) {
      uVar9 = puVar2[lVar11] & 0xffffffffffff;
      lVar7 = lVar11 + -1;
      auVar21._8_4_ = (int)lVar7;
      auVar21._0_8_ = lVar7;
      auVar21._12_4_ = (int)((ulonglong)lVar7 >> 0x20);
      lVar7 = lVar4 + param_2 * 8;
      auVar18 = pmovsxbq(in_XMM1,0x100);
      uVar5 = 0;
      in_XMM0 = auVar21 ^ _DAT_149931e80;
      auVar21 = pmovsxbq(in_XMM4,0x202);
      do {
        if ((bool)(~(in_XMM0._0_8_ < SUB168(auVar18 ^ auVar3,0)) & 1)) {
          *(ulonglong *)(lVar7 + uVar5 * 8) = uVar9;
        }
        if (SUB168(auVar18 ^ auVar3,8) <= in_XMM0._8_8_) {
          *(ulonglong *)(lVar7 + 8 + uVar5 * 8) = uVar9;
        }
        uVar5 = uVar5 + 2;
        lVar10 = auVar18._8_8_;
        auVar18._0_8_ = auVar18._0_8_ + auVar21._0_8_;
        auVar18._8_8_ = lVar10 + auVar21._8_8_;
      } while ((lVar11 + 1U & 0xfffffffffffffffe) != uVar5);
      goto LAB_14845a321;
    }
  }
  lVar11 = 0;
LAB_14845a321:
  auVar3 = _DAT_149931e80;
  lVar4 = lVar4 + param_2 * 8 + 8;
  auVar21 = pmovsxbq(in_XMM0,0x100);
LAB_14845a33e:
  uVar5 = param_1[3];
  lVar7 = lVar11 * 2;
  lVar6 = 1 - lVar11;
  puVar15 = (ulonglong *)(lVar4 + lVar11 * 8);
  lVar14 = 0;
  lVar13 = lVar11;
  lVar10 = lVar11;
  while (lVar10 = lVar10 + 1, lVar1 = lVar13, puVar2[lVar13] != uVar5) {
    lVar13 = lVar13 + 1;
    lVar14 = lVar14 + 1;
    lVar7 = lVar7 + 2;
    lVar6 = lVar6 + -1;
    puVar15 = puVar15 + 1;
    if (lVar13 == param_1[1]) goto LAB_14845a4ec;
  }
LAB_14845a384:
  lVar8 = lVar1;
  uVar9 = puVar2[lVar8];
  if (uVar9 == uVar5) goto code_r0x00014845a390;
  uVar17 = lVar7 / 2;
  if (lVar13 < (longlong)uVar17) {
    uVar16 = puVar2[lVar13 + -1];
    lVar11 = ~(lVar11 + lVar14) + uVar17;
    auVar19._8_4_ = (int)lVar11;
    auVar19._0_8_ = lVar11;
    auVar19._12_4_ = (int)((ulonglong)lVar11 >> 0x20);
    uVar12 = 0;
    do {
      if ((bool)(~(SUB168(auVar19 ^ auVar3,0) < (longlong)(uVar12 ^ auVar3._0_8_)) & 1)) {
        puVar15[-1] = uVar16 & 0xffffffffffff;
      }
      auVar22._8_4_ = (int)uVar12;
      auVar22._0_8_ = uVar12;
      auVar22._12_4_ = (int)(uVar12 >> 0x20);
      if ((longlong)((auVar22._8_8_ | auVar21._8_8_) ^ auVar3._8_8_) <= SUB168(auVar19 ^ auVar3,8))
      {
        *puVar15 = uVar16 & 0xffffffffffff;
      }
      uVar12 = uVar12 + 2;
      puVar15 = puVar15 + 2;
    } while ((lVar6 + uVar17 & 0xfffffffffffffffe) != uVar12);
  }
  if ((longlong)uVar17 < lVar8) {
    lVar11 = ~uVar17 + lVar8;
    auVar20._8_4_ = (int)lVar11;
    auVar20._0_8_ = lVar11;
    auVar20._12_4_ = (int)((ulonglong)lVar11 >> 0x20);
    lVar11 = lVar4 + uVar17 * 8;
    uVar16 = 0;
    do {
      if ((bool)(~(SUB168(auVar20 ^ auVar3,0) < (longlong)(uVar16 ^ auVar3._0_8_)) & 1)) {
        *(ulonglong *)(lVar11 + -8 + uVar16 * 8) = uVar9 & 0xffffffffffff;
      }
      auVar23._8_4_ = (int)uVar16;
      auVar23._0_8_ = uVar16;
      auVar23._12_4_ = (int)(uVar16 >> 0x20);
      if ((longlong)((auVar23._8_8_ | auVar21._8_8_) ^ auVar3._8_8_) <= SUB168(auVar20 ^ auVar3,8))
      {
        *(ulonglong *)(lVar11 + uVar16 * 8) = uVar9 & 0xffffffffffff;
      }
      uVar16 = uVar16 + 2;
    } while ((lVar10 - uVar17 & 0xfffffffffffffffe) != uVar16);
  }
  goto LAB_14845a3c1;
code_r0x00014845a390:
  lVar1 = lVar8 + 1;
  lVar7 = lVar7 + 1;
  lVar10 = lVar10 + 1;
  if (lVar1 == param_1[1]) goto code_r0x00014845a3a0;
  goto LAB_14845a384;
code_r0x00014845a3a0:
  if (lVar8 < lVar13) goto LAB_14845a4ec;
  uVar17 = puVar2[lVar13 + -1];
  do {
    puVar2[lVar13] = uVar17 & 0xffffffffffff;
    lVar13 = lVar13 + 1;
    lVar8 = lVar1;
  } while (lVar13 < param_1[1]);
LAB_14845a3c1:
  lVar11 = lVar8;
  if (uVar9 == uVar5) {
LAB_14845a4ec:
    return CONCAT71((int7)((ulonglong)puVar2 >> 8),1);
  }
  goto LAB_14845a33e;
}



// FUNCTION 14845a504 FUN_14845a504 body=296 status=ok
// SIG undefined FUN_14845a504(void)

void FUN_14845a504(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 *local_60;
  void *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = param_1[1];
  lVar5 = (longlong)(param_2 * *(int *)*param_1);
  lVar6 = *(int *)*param_1 + lVar5;
  if (*(longlong *)(lVar1 + 0x10) <= lVar6) {
    lVar6 = *(longlong *)(lVar1 + 0x10);
  }
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_60 = param_1;
  FUN_14171b6d4(&local_58,*(undefined4 *)(lVar1 + 8),1);
  _Src = local_58;
  local_68 = lVar6;
  if (lVar5 < lVar6) {
    lVar6 = lVar5 * 8;
    do {
      lVar2 = *(longlong *)local_60[2];
      lVar3 = *(longlong *)(lVar1 + 8);
      lVar4 = lVar3;
      if (0 < lVar3) {
        lVar7 = 0;
        do {
          lVar4 = *(longlong *)(lVar3 * lVar6 + lVar2 + lVar7 * 8);
          if (lVar4 == *(longlong *)(lVar1 + 0x18)) {
            lVar4 = FUN_14845a62e(lVar1,lVar7,lVar5);
          }
          *(longlong *)((longlong)_Src + lVar7 * 8) = lVar4;
          lVar7 = lVar7 + 1;
          lVar4 = *(longlong *)(lVar1 + 8);
        } while (lVar7 < lVar4);
      }
      memcpy((void *)(lVar3 * lVar5 * 8 + lVar2),_Src,lVar4 << 3);
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 8;
    } while (lVar5 != local_68);
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8(local_58);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14845a62e FUN_14845a62e body=580 status=ok
// SIG undefined FUN_14845a62e(void)

longlong FUN_14845a62e(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  longlong *local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  undefined4 local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar5 = 4;
  if (4 < param_2) {
    lVar5 = param_2;
  }
  lVar10 = 4;
  if (4 < param_3) {
    lVar10 = param_3;
  }
  lVar10 = lVar10 + -4;
  lVar11 = param_1[2] + -1;
  if (param_3 + 4 <= param_1[2] + -1) {
    lVar11 = param_3 + 4;
  }
  if (lVar10 <= lVar11) {
    lVar2 = param_1[1];
    lVar9 = param_2 + 4;
    if (lVar2 + -1 < param_2 + 4) {
      lVar9 = lVar2 + -1;
    }
    local_a8 = param_1 + 4;
    lVar6 = *param_1 + lVar2 * lVar10 * 8 + -0x20;
    fVar16 = 0.0;
    fVar13 = 0.0;
    fVar14 = 0.0;
    fVar15 = 0.0;
    do {
      lVar7 = -(lVar10 - param_3);
      if (lVar7 < 0) {
        lVar7 = lVar10 - param_3;
      }
      if (lVar5 + -4 <= lVar9) {
        lVar12 = lVar5;
        do {
          uVar3 = *(undefined8 *)(lVar6 + lVar12 * 8);
          fVar17 = (float)(ushort)((ulonglong)uVar3 >> 0x30) * 1.5259022e-05;
          if ((fVar17 != 0.0) || (NAN(fVar17))) {
            lVar1 = (-4 - param_2) + lVar12;
            lVar8 = -lVar1;
            if (lVar8 < 0) {
              lVar8 = lVar1;
            }
            fVar17 = fVar17 * *(float *)((longlong)local_a8 + lVar8 * 4 + lVar7 * 0x14);
            fVar16 = fVar16 + fVar17;
            fVar13 = fVar13 + fVar17 * (float)((uint)uVar3 & 0xffff) * 1.5259022e-05;
            fVar14 = fVar14 + (float)((uint)((ulonglong)uVar3 >> 0x10) & 0xffff) * 1.5259022e-05 *
                              fVar17;
            fVar15 = fVar15 + (float)((uint)((ulonglong)uVar3 >> 0x20) & 0xffff) * 1.5259022e-05 *
                              fVar17;
          }
          lVar12 = lVar12 + 1;
        } while (lVar9 + 5 != lVar12);
      }
      lVar6 = lVar6 + lVar2 * 8;
      bVar4 = lVar10 < lVar11;
      lVar10 = lVar10 + 1;
    } while (bVar4);
    local_b0 = param_1;
    if ((fVar16 != 0.0) || (NAN(fVar16))) {
      fVar16 = 1.0 / fVar16;
      local_a0 = fVar13 * fVar16;
      local_9c = fVar14 * fVar16;
      local_98 = fVar15 * fVar16;
      local_94 = 0;
      lVar5 = FUN_14845a874();
      goto LAB_14845a6a8;
    }
  }
  lVar5 = param_1[3];
LAB_14845a6a8:
  if ((local_90 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14845a874 FUN_14845a874 body=160 status=ok
// SIG undefined FUN_14845a874(void)

ulonglong FUN_14845a874(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *param_1;
  fVar4 = param_1[1];
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  if (1.0 <= fVar4) {
    fVar4 = 1.0;
  }
  fVar2 = param_1[2];
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  if (1.0 <= fVar2) {
    fVar2 = 1.0;
  }
  fVar3 = param_1[3];
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  if (1.0 <= fVar3) {
    fVar3 = 1.0;
  }
  return (ulonglong)((int)(fVar1 * 65535.0 + 0.5) & 0xffff) |
         (ulonglong)(uint)((int)(fVar4 * 65535.0 + 0.5) << 0x10) |
         (ulonglong)((int)(fVar2 * 65535.0 + 0.5) & 0xffff) << 0x20 |
         (ulonglong)(uint)(int)(fVar3 * 65535.0 + 0.5) << 0x30;
}



// FUNCTION 14845a964 FUN_14845a964 body=226 status=ok
// SIG undefined FUN_14845a964(void)

void FUN_14845a964(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined8 *local_68;
  longlong *local_60;
  longlong local_58;
  code *local_50;
  longlong **local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24);
  FUN_1448c4dd6(param_1,uVar2,1);
  local_48 = &local_60;
  local_68 = &local_40;
  local_40 = 0;
  local_38 = 0;
  local_50 = FUN_143b5a742;
  local_70 = 0;
  local_60 = param_1;
  local_58 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",uVar2,1);
  if (0 < (int)uVar2) {
    uVar3 = 0;
    do {
      if (*(char *)(*param_1 + uVar3) == '\x01') {
        iVar1 = (int)param_1[3];
        *(uint *)(param_1 + 3) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0x1c) < iVar1 + 1U) {
          FUN_1446f48e2(param_1 + 2,iVar1);
        }
        *(int *)(param_1[2] + (longlong)iVar1 * 4) = (int)uVar3;
      }
      uVar3 = uVar3 + 1;
    } while (uVar2 != uVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14845aa48 FUN_14845aa48 body=371 status=ok
// SIG undefined FUN_14845aa48(void)

undefined8 * FUN_14845aa48(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  FUN_14845abbc();
  *param_1 = &PTR_LAB_14aee2a60;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  FUN_146c005f0(param_1[1],param_2,1,1,1,1);
  FUN_14051b394(param_1 + 0x11,*(int *)(param_1[1] + 0x20) * 0x200 + *(int *)(param_1[1] + 0x24),1);
  lVar2 = param_1[1];
  uVar7 = *(int *)(lVar2 + 0x20) * 0x200 + *(int *)(lVar2 + 0x24);
  uVar10 = 0;
  if ((uVar7 != 0) &&
     (uVar10 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar2 + 0x28) - 1U))) {
    uVar8 = 1;
    uVar9 = 1;
    if (1 < (int)uVar7) {
      uVar8 = uVar7;
    }
    do {
      uVar10 = uVar8;
      if (uVar8 == uVar9) break;
      uVar11 = uVar9 >> 9;
      uVar12 = uVar9 & 0x1ff;
      uVar10 = uVar9;
      uVar9 = uVar9 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar2 + 0x28))[uVar11] +
                                         (ulonglong)uVar12 * 2) - 1U));
  }
  do {
    if (uVar10 == uVar7) {
      return param_1;
    }
    lVar3 = param_1[0x11];
    lVar4 = *(longlong *)(*(longlong *)(param_1[1] + 0x10) + (ulonglong)(uVar10 >> 9) * 8);
    puVar1 = (undefined8 *)(lVar4 + (ulonglong)(uVar10 & 0x1ff) * 0x18);
    uVar5 = *puVar1;
    uVar6 = puVar1[1];
    *(undefined8 *)(lVar3 + 0x10 + (longlong)(int)uVar10 * 0x18) =
         *(undefined8 *)(lVar4 + 0x10 + (ulonglong)(uVar10 & 0x1ff) * 0x18);
    puVar1 = (undefined8 *)(lVar3 + (longlong)(int)uVar10 * 0x18);
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    uVar8 = uVar10 + 1;
    if ((int)(uVar10 + 1) < (int)uVar7) {
      uVar8 = uVar7;
    }
    uVar9 = uVar10;
    do {
      uVar10 = uVar8;
      if (uVar8 - 1 == uVar9) break;
      uVar10 = uVar9 + 1;
      uVar9 = uVar10;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(lVar2 + 0x28) +
                                           (ulonglong)(uVar10 >> 9) * 8) +
                                         (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
  } while( true );
}



// FUNCTION 14845abbc FUN_14845abbc body=345 status=ok
// SIG undefined FUN_14845abbc(void)

undefined8 * FUN_14845abbc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = &PTR_LAB_14aee4ae0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x3ff0000000000000;
  uVar9 = DAT_14c8464e8;
  param_1[6] = DAT_14c8464e0;
  param_1[7] = uVar9;
  param_1[8] = DAT_14c8464f0;
  uVar6 = DAT_14c846518._4_4_;
  uVar5 = (undefined4)DAT_14c846518;
  uVar4 = DAT_14c846510._4_4_;
  *(undefined4 *)(param_1 + 9) = (undefined4)DAT_14c846510;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar4;
  *(undefined4 *)(param_1 + 10) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar6;
  param_1[0xb] = DAT_14c846520;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  uVar9 = FUN_14001cc68(0x220,0x10);
  local_88 = 0;
  FUN_1411b354a(uVar9,0,0,0);
  puVar1 = (undefined8 *)param_1[1];
  param_1[1] = uVar9;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  uVar8 = DAT_14c846520;
  uVar7 = DAT_14c846518._4_4_;
  uVar6 = (undefined4)DAT_14c846518;
  uVar5 = DAT_14c846510._4_4_;
  uVar4 = (undefined4)DAT_14c846510;
  uVar3 = DAT_14c8464f0;
  uVar2 = DAT_14c8464e8;
  uVar9 = DAT_14c8464e0;
  local_68 = DAT_14c846520;
  local_78 = CONCAT44(DAT_14c846510._4_4_,(undefined4)DAT_14c846510);
  uStack_70 = CONCAT44(DAT_14c846518._4_4_,(undefined4)DAT_14c846518);
  local_58 = DAT_14c8464e0;
  uStack_50 = DAT_14c8464e8;
  local_48 = DAT_14c8464f0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x3ff0000000000000;
  param_1[8] = uVar3;
  param_1[6] = uVar9;
  param_1[7] = uVar2;
  param_1[0xb] = uVar8;
  *(undefined4 *)(param_1 + 9) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar5;
  *(undefined4 *)(param_1 + 10) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar7;
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14845ad16 FUN_14845ad16 body=20 status=ok
// SIG undefined FUN_14845ad16(void)

void FUN_14845ad16(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_1 + 0x10);
  for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}



// FUNCTION 14845ad2a FUN_14845ad2a body=375 status=ok
// SIG undefined FUN_14845ad2a(void)

void FUN_14845ad2a(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *(longlong *)(param_1 + 8);
  uVar8 = *(int *)(lVar2 + 0x20) * 0x200 + *(int *)(lVar2 + 0x24);
  uVar10 = 0;
  if ((uVar8 != 0) &&
     (uVar10 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar2 + 0x28) - 1U))) {
    uVar11 = 1;
    uVar6 = 1;
    if (1 < (int)uVar8) {
      uVar11 = uVar8;
    }
    do {
      uVar10 = uVar11;
      if (uVar11 == uVar6) break;
      uVar7 = uVar6 >> 9;
      uVar9 = uVar6 & 0x1ff;
      uVar10 = uVar6;
      uVar6 = uVar6 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar2 + 0x28))[uVar7] +
                                         (ulonglong)uVar9 * 2) - 1U));
  }
  if (uVar10 != uVar8) {
    do {
      local_48 = *(undefined8 *)
                  (*(longlong *)(param_1 + 0x88) + 0x10 + (longlong)(int)uVar10 * 0x18);
      puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x88) + (longlong)(int)uVar10 * 0x18);
      local_58 = *puVar1;
      uStack_54 = puVar1[1];
      uStack_50 = puVar1[2];
      uStack_4c = puVar1[3];
      lVar3 = *(longlong *)(param_1 + 8);
      cVar5 = FUN_146bfed03(&local_58);
      if (cVar5 != '\0') {
        lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + (ulonglong)(uVar10 >> 9) * 8);
        *(undefined8 *)(lVar4 + 0x10 + (ulonglong)(uVar10 & 0x1ff) * 0x18) = local_48;
        puVar1 = (undefined4 *)(lVar4 + (ulonglong)(uVar10 & 0x1ff) * 0x18);
        *puVar1 = local_58;
        puVar1[1] = uStack_54;
        puVar1[2] = uStack_50;
        puVar1[3] = uStack_4c;
        if (*(char *)(lVar3 + 0x210) == '\x01') {
          LOCK();
          *(int *)(lVar3 + 0x214) = *(int *)(lVar3 + 0x214) + 1;
          UNLOCK();
        }
      }
      uVar11 = uVar10 + 1;
      if ((int)(uVar10 + 1) < (int)uVar8) {
        uVar11 = uVar8;
      }
      do {
        uVar6 = uVar11;
        if (uVar11 - 1 == uVar10) break;
        uVar10 = uVar10 + 1;
        uVar6 = uVar10;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar2 + 0x28) +
                                             (ulonglong)(uVar10 >> 9) * 8) +
                                           (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
      uVar10 = uVar6;
    } while (uVar10 != uVar8);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14845aea2 FUN_14845aea2 body=166 status=ok
// SIG undefined FUN_14845aea2(void)

void FUN_14845aea2(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *(longlong *)(param_1 + 8);
  lVar1 = *(longlong *)(local_30 + 0x208);
  if (((lVar1 != 0) && (0 < *(int *)(lVar1 + 0x38))) &&
     (lVar1 = **(longlong **)(lVar1 + 0x30), lVar1 != 0)) {
    local_28 = 0;
    uStack_20 = 0;
    FUN_146c383fc(&local_30,lVar1,1,1);
    FUN_146c378c6(&local_30,lVar1,0);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_146c38c5e(local_30,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 14845af52 FUN_14845af52 body=980 status=ok
// SIG undefined FUN_14845af52(void)

void FUN_14845af52(longlong param_1,char *param_2,double param_3)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  char cVar8;
  char cVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 auStack_328 [32];
  undefined4 local_308;
  undefined8 local_300;
  undefined1 local_2f8;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  longlong local_260;
  longlong *local_258;
  char *local_1c8;
  undefined4 local_1a0;
  undefined2 local_19c;
  undefined4 local_198;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_328;
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_14845b027;
    pcVar3 = *(code **)(param_2 + 0x70);
    plVar12 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar12 = *(longlong **)(param_2 + 0x80);
    }
    uVar10 = (**(code **)(*plVar12 + 8))();
    cVar8 = (*pcVar3)(uVar10);
    *param_2 = cVar8;
    if (cVar8 != '\0') goto LAB_14845b027;
  }
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    local_300 = 0x3fe0000000000000;
    local_2f8 = 1;
    local_308 = 0;
    FUN_148328d62(*(undefined8 *)(param_1 + 8),1,0,0);
  }
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_14845b027;
    pcVar3 = *(code **)(param_2 + 0x70);
    plVar12 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar12 = *(longlong **)(param_2 + 0x80);
    }
    uVar10 = (**(code **)(*plVar12 + 8))();
    cVar8 = (*pcVar3)(uVar10);
    *param_2 = cVar8;
    if (cVar8 != '\0') goto LAB_14845b027;
  }
  cVar8 = *(char *)(param_1 + 0x98);
  FUN_1482c3c14(&local_2e8,*(undefined8 *)(param_1 + 8));
  local_308 = 0;
  local_1c8 = param_2;
  FUN_1482c5686(&local_2e8,param_3 * 0.5,3,1);
  if (*(char *)(param_1 + 0x98) == '\x01') {
    FUN_1482c3e2e(&local_2e8,
                  *(double *)(param_1 + 0xa0) * *(double *)(param_1 + 0xa0) * param_3 * param_3);
  }
  FUN_1482fed12(&local_2e8);
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_14845b027;
    pcVar3 = *(code **)(param_2 + 0x70);
    plVar12 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar12 = *(longlong **)(param_2 + 0x80);
    }
    uVar10 = (**(code **)(*plVar12 + 8))();
    cVar9 = (*pcVar3)(uVar10);
    *param_2 = cVar9;
    if (cVar9 != '\0') goto LAB_14845b027;
  }
  lVar4 = *(longlong *)(param_1 + 8);
  if (cVar8 == '\0') {
    lVar5 = *(longlong *)(lVar4 + 0x208);
    if (lVar5 == 0) {
      FUN_146c38c5e(lVar4,0);
    }
    else {
      if (*(int *)(lVar5 + 0x38) < 1) {
        uVar10 = 0;
      }
      else {
        uVar10 = **(undefined8 **)(lVar5 + 0x30);
      }
      FUN_146c39810(uVar10,0);
    }
  }
  else {
    *(undefined8 *)(param_1 + 8) = 0;
    plVar11 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar11[1] = (longlong)&DAT_100000001;
    *plVar11 = (longlong)&PTR_FUN_14aee51a0;
    plVar11[2] = lVar4;
    FUN_14582ed12(lVar4);
    FUN_14845b328(&local_2e8);
    plVar12 = local_258;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    local_260 = lVar4;
    plVar7 = plVar11;
    if (local_258 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_258 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        puVar6 = (undefined8 *)*local_258;
        local_258 = plVar11;
        (*(code *)*puVar6)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plVar7 = local_258;
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          plVar7 = local_258;
        }
      }
    }
    local_258 = plVar7;
    local_1a0 = 0x2010000;
    local_19c = 1;
    local_198 = 0x42700000;
    local_290 = *(undefined8 *)(param_1 + 0x58);
    local_2a8 = *(undefined8 *)(param_1 + 0x40);
    local_2d8 = *(undefined8 *)(param_1 + 0x10);
    uStack_2d0 = *(undefined8 *)(param_1 + 0x18);
    local_2c8 = *(undefined4 *)(param_1 + 0x20);
    uStack_2c4 = *(undefined4 *)(param_1 + 0x24);
    uStack_2c0 = *(undefined4 *)(param_1 + 0x28);
    uStack_2bc = *(undefined4 *)(param_1 + 0x2c);
    local_2b8 = *(undefined8 *)(param_1 + 0x30);
    uStack_2b0 = *(undefined8 *)(param_1 + 0x38);
    local_2a0 = *(undefined8 *)(param_1 + 0x48);
    uStack_298 = *(undefined8 *)(param_1 + 0x50);
    FUN_14845b3d6(&local_2e8,param_2);
    uVar10 = local_2e0;
    local_2e0 = 0;
    puVar6 = *(undefined8 **)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uVar10;
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6,1);
    }
    FUN_14845b4d0(&local_2e8);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar11 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
  }
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_14845b027;
    pcVar3 = *(code **)(param_2 + 0x70);
    plVar12 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar12 = *(longlong **)(param_2 + 0x80);
    }
    uVar10 = (**(code **)(*plVar12 + 8))();
    cVar8 = (*pcVar3)(uVar10);
    *param_2 = cVar8;
    if (cVar8 != '\0') goto LAB_14845b027;
  }
  if ((0.0 < *(double *)(param_1 + 0x88)) || (0.0 < *(double *)(param_1 + 0x90))) {
    local_2e8 = *(undefined8 *)(param_1 + 8);
    FUN_146bc6318(&local_2e8,*(double *)(param_1 + 0x88),*(double *)(param_1 + 0x90),0);
  }
LAB_14845b027:
  if ((local_50 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14845b328 FUN_14845b328 body=153 status=ok
// SIG undefined FUN_14845b328(void)

undefined8 * FUN_14845b328(undefined8 *param_1)

{
  FUN_14845abbc();
  *param_1 = &PTR_FUN_14aee4b00;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
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
  return param_1;
}



// FUNCTION 14845b3c2 FUN_14845b3c2 body=20 status=ok
// SIG undefined FUN_14845b3c2(void)

void FUN_14845b3c2(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_1 + 0x10);
  for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}



// FUNCTION 14845b3d6 FUN_14845b3d6 body=249 status=ok
// SIG undefined FUN_14845b3d6(void)

void FUN_14845b3d6(longlong param_1,char *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') {
      return;
    }
    pcVar1 = *(code **)(param_2 + 0x70);
    plVar4 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar4 = *(longlong **)(param_2 + 0x80);
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    cVar2 = (*pcVar1)(uVar3);
    *param_2 = cVar2;
    if (cVar2 != '\0') {
      return;
    }
  }
  FUN_146c005f0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x88),1,1,1,1);
  if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x208) == 0) {
    FUN_14582ed12();
  }
  if (param_2 == (char *)0x0) {
LAB_14845b485:
    if ((*(int *)(param_1 + 0xb0) == *(int *)(param_1 + 0xdc)) &&
       (*(int *)(param_1 + 0x100) == *(int *)(param_1 + 300))) {
      FUN_14845b5c2(param_1,param_2);
      return;
    }
    FUN_14845bd1e(param_1,param_2);
    return;
  }
  if (*param_2 == '\0') {
    pcVar1 = *(code **)(param_2 + 0x70);
    plVar4 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar4 = *(longlong **)(param_2 + 0x80);
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    cVar2 = (*pcVar1)(uVar3);
    *param_2 = cVar2;
    if (cVar2 == '\0') goto LAB_14845b485;
  }
  return;
}



// FUNCTION 14845b4d0 FUN_14845b4d0 body=241 status=ok
// SIG undefined FUN_14845b4d0(void)

void FUN_14845b4d0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14aee4b00;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x1f);
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x15);
  plVar3 = (longlong *)param_1[0x14];
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
  plVar3 = (longlong *)param_1[0x12];
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
  *param_1 = &PTR_LAB_14aee4ae0;
  FUN_146c81a14(param_1 + 0xc);
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014845b5b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)(puVar4,1);
    return;
  }
  return;
}



// FUNCTION 14845b5c2 FUN_14845b5c2 body=1882 status=ok
// SIG undefined FUN_14845b5c2(void)

void FUN_14845b5c2(float **param_1,char *param_2)

{
  ulonglong uVar1;
  char cVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  float *pfVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  undefined1 auStack_1a8 [40];
  code *local_180;
  float ***local_178;
  undefined1 *local_170;
  float ***local_168;
  float **local_160;
  float ***local_158;
  undefined8 local_150;
  float ***local_148;
  undefined8 local_140;
  float ***local_138;
  undefined1 local_12c [4];
  float **local_128;
  undefined8 local_120;
  float *pfStack_118;
  ulonglong local_110;
  float **local_108;
  float *local_100;
  undefined8 uStack_f8;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  bVar16 = true;
  if (*(char *)((longlong)param_1 + 0x14a) == '\0') {
    bVar16 = *(char *)((longlong)param_1 + 0x14c) != '\0';
  }
  if (*(char *)(param_1 + 0x29) == '\x01') {
    local_120 = (float ***)param_1[1];
    local_128 = (float **)&PTR_FUN_14aee4ca8;
    pfStack_118 = (float *)0x0;
    local_110 = 0;
    FUN_148329528();
    if (param_2 == (char *)0x0) {
LAB_14845b98b:
      FUN_146ba21d6(&local_108,param_1[1],1);
      FUN_148329cfa(&local_128,&local_108);
      FUN_1457e5b52(&local_108);
      local_128 = (float **)&PTR_FUN_14aee4ca8;
      FUN_148360edd(pfStack_118,local_110 & 0xffffffff);
      if (pfStack_118 != (float *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_14845b60d;
    }
    if (*param_2 == '\0') {
      pcVar4 = *(code **)(param_2 + 0x70);
      plVar9 = (longlong *)(param_2 + 0x90);
      if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
        plVar9 = *(longlong **)(param_2 + 0x80);
      }
      uVar3 = (**(code **)(*plVar9 + 8))();
      cVar2 = (*pcVar4)(uVar3);
      *param_2 = cVar2;
      if (cVar2 == '\0') goto LAB_14845b98b;
    }
    local_128 = (float **)&PTR_FUN_14aee4ca8;
    FUN_148360edd(pfStack_118,local_110 & 0xffffffff);
    pfVar10 = pfStack_118;
    goto LAB_14845bc10;
  }
LAB_14845b60d:
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_14845bc1a;
    pcVar4 = *(code **)(param_2 + 0x70);
    plVar9 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar9 = *(longlong **)(param_2 + 0x80);
    }
    (**(code **)(*plVar9 + 8))();
    cVar2 = (*pcVar4)();
    *param_2 = cVar2;
    if (cVar2 != '\0') goto LAB_14845bc1a;
  }
  if (*(char *)((longlong)param_1 + 0x149) == '\x01') {
    pfVar10 = param_1[1];
    uVar15 = (int)pfVar10[0x50] * 0x200 + (int)pfVar10[0x51];
    uVar14 = 0;
    if ((uVar15 != 0) &&
       (uVar14 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(pfVar10 + 0x52) - 1U))) {
      uVar8 = 1;
      uVar7 = 1;
      if (1 < (int)uVar15) {
        uVar7 = uVar15;
      }
      do {
        uVar6 = (uint)uVar8;
        uVar14 = uVar7;
        if (uVar7 == uVar6) break;
        uVar1 = uVar8 >> 9;
        uVar8 = (ulonglong)(uVar6 + 1);
        uVar14 = uVar6;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(pfVar10 + 0x52))[uVar1] +
                                           (ulonglong)(uVar6 & 0x1ff) * 2) - 1U));
    }
LAB_14845b716:
    if (uVar14 != uVar15) {
      FUN_146c0adfe(param_1[1],uVar14);
      uVar7 = uVar14 + 1;
      if ((int)(uVar14 + 1) < (int)uVar15) {
        uVar7 = uVar15;
      }
      uVar6 = uVar14;
      do {
        uVar14 = uVar7;
        if (uVar7 - 1 == uVar6) break;
        uVar14 = uVar6 + 1;
        uVar6 = uVar14;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(pfVar10 + 0x52) +
                                             (ulonglong)(uVar14 >> 9) * 8) +
                                           (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
      goto LAB_14845b716;
    }
    if (!bVar16) {
      if (*(int *)(*(longlong *)(param_1[1] + 0x82) + 0x38) < 1) {
        lVar5 = 0;
      }
      else {
        lVar5 = **(longlong **)(*(longlong *)(param_1[1] + 0x82) + 0x30);
      }
      uVar15 = *(int *)(lVar5 + 8) * 0x200 + *(int *)(lVar5 + 0xc);
      uVar14 = 0;
      if ((uVar15 != 0) &&
         (uVar14 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar5 + 0x10) - 1U))) {
        uVar8 = 1;
        uVar7 = 1;
        if (1 < (int)uVar15) {
          uVar7 = uVar15;
        }
        do {
          uVar6 = (uint)uVar8;
          uVar14 = uVar7;
          if (uVar7 == uVar6) break;
          uVar1 = uVar8 >> 9;
          uVar8 = (ulonglong)(uVar6 + 1);
          uVar14 = uVar6;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar5 + 0x10))[uVar1] +
                                             (ulonglong)(uVar6 & 0x1ff) * 2) - 1U));
      }
joined_r0x00014845b852:
      uVar7 = uVar14;
      if (uVar7 != uVar15) {
        lVar12 = *(longlong *)(lVar5 + 0x48);
        lVar13 = 0;
        do {
          uVar14 = uVar7 * 3 + (int)lVar13;
          *(undefined4 *)((longlong)&local_108 + lVar13 * 4) =
               *(undefined4 *)
                (*(longlong *)(lVar12 + (ulonglong)(uVar14 >> 9) * 8) +
                (ulonglong)(uVar14 & 0x1ff) * 4);
          lVar13 = lVar13 + 1;
        } while (lVar13 != 3);
        local_128 = (float **)((ulonglong)local_108 ^ 0x8000000080000000);
        local_120._4_4_ = (undefined4)((ulonglong)local_120 >> 0x20);
        local_120 = (float ***)(CONCAT44(local_120._4_4_,local_100._0_4_) ^ 0x80000000);
        lVar12 = 0;
        do {
          uVar14 = uVar7 * 3 + (int)lVar12;
          *(undefined4 *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x48) + (ulonglong)(uVar14 >> 9) * 8) +
           (ulonglong)(uVar14 & 0x1ff) * 4) = *(undefined4 *)((longlong)&local_128 + lVar12 * 4);
          lVar12 = lVar12 + 1;
        } while (lVar12 != 3);
        uVar6 = uVar7 + 1;
        if ((int)(uVar7 + 1) < (int)uVar15) {
          uVar6 = uVar15;
        }
        do {
          uVar14 = uVar6;
          if (uVar6 - 1 == uVar7) break;
          uVar7 = uVar7 + 1;
          uVar14 = uVar7;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar5 + 0x10) +
                                               (ulonglong)(uVar7 >> 9) * 8) +
                                             (ulonglong)(uVar7 & 0x1ff) * 2) - 1U));
        goto joined_r0x00014845b852;
      }
    }
  }
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_14845bc1a;
    pcVar4 = *(code **)(param_2 + 0x70);
    plVar9 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar9 = *(longlong **)(param_2 + 0x80);
    }
    uVar3 = (**(code **)(*plVar9 + 8))();
    cVar2 = (*pcVar4)(uVar3);
    *param_2 = cVar2;
    if (cVar2 != '\0') goto LAB_14845bc1a;
  }
  local_12c = (undefined1  [4])cosf(*(float *)(param_1 + 0x2a) * 0.017453292);
  local_108 = (float **)param_1[1];
  local_100 = (float *)0x0;
  uStack_f8 = 0;
  switch(*(undefined1 *)((longlong)param_1 + 0x14c)) {
  case 0:
    break;
  case 1:
    FUN_146c38358(&local_108);
    if (*(int *)(*(longlong *)(param_1[1] + 0x82) + 0x38) < 1) {
      uVar3 = 0;
    }
    else {
      uVar3 = **(undefined8 **)(*(longlong *)(param_1[1] + 0x82) + 0x30);
    }
    local_138 = &local_128;
    local_120 = (float ***)local_12c;
    puVar11 = &local_140;
    pcVar4 = (code *)&LAB_143b5a7b6;
    local_128 = &local_100;
    goto LAB_14845ba68;
  default:
    FUN_1483769fe(&local_128);
    local_158 = (float ***)param_1[0x13];
    if ((float ***)param_1[0x13] == (float ***)0x0) {
      local_158 = &local_128;
    }
    if (*(int *)(*(longlong *)(param_1[1] + 0x82) + 0x38) < 1) {
      uVar3 = 0;
    }
    else {
      uVar3 = **(undefined8 **)(*(longlong *)(param_1[1] + 0x82) + 0x30);
    }
    local_148 = &local_160;
    puVar11 = &local_150;
    pcVar4 = FUN_143b5a80e;
    local_160 = param_1;
LAB_14845ba68:
    *puVar11 = pcVar4;
    FUN_146c2fed0(uVar3,puVar11,0);
    break;
  case 3:
    FUN_146c39da8(local_108);
    break;
  case 4:
    if ((int)local_108[0x41][0xe] < 1) {
      uVar3 = 0;
    }
    else {
      uVar3 = **(undefined8 **)(local_108[0x41] + 0xc);
    }
    FUN_146c39810(uVar3,0);
  }
  if (param_2 == (char *)0x0) {
LAB_14845baaf:
    if (bVar16) {
      local_128 = (float **)param_1[1];
      local_120 = (float ***)0x0;
      pfStack_118 = (float *)0x0;
      if ((int)local_128[0x41][0xe] < 1) {
        uVar3 = 0;
      }
      else {
        uVar3 = **(undefined8 **)(local_128[0x41] + 0xc);
      }
      FUN_146c383fc(&local_128,uVar3,(*(byte *)((longlong)param_1 + 0x14b) & 0xfd) == 0,
                    (byte)(*(byte *)((longlong)param_1 + 0x14b) - 1) < 2);
      if (*(int *)(*(longlong *)(param_1[1] + 0x82) + 0x38) < 1) {
        uVar3 = 0;
      }
      else {
        uVar3 = **(undefined8 **)(*(longlong *)(param_1[1] + 0x82) + 0x30);
      }
      FUN_146c378c6(&local_128,uVar3,0);
      if (local_120 != (float ***)0x0) {
        FUN_1400020a8();
      }
    }
    if (param_2 == (char *)0x0) {
LAB_14845bb83:
      pfVar10 = local_100;
      if ((*(char *)((longlong)param_1 + 0x14c) == '\x01') &&
         (*(char *)((longlong)param_1 + 0x14d) == '\x01')) {
        if (*(int *)(*(longlong *)(param_1[1] + 0x82) + 0x38) < 1) {
          uVar3 = 0;
        }
        else {
          uVar3 = **(undefined8 **)(*(longlong *)(param_1[1] + 0x82) + 0x30);
        }
        local_168 = &local_160;
        local_158 = &local_108;
        local_170 = &LAB_143b5a95e;
        local_178 = &local_128;
        pfStack_118 = (float *)local_12c;
        local_180 = FUN_143b5a88a;
        local_160 = param_1;
        local_128 = param_1;
        local_120 = local_158;
        FUN_146c304b4(uVar3);
        pfVar10 = local_100;
      }
    }
    else {
      pfVar10 = local_100;
      if (*param_2 == '\0') {
        pcVar4 = *(code **)(param_2 + 0x70);
        plVar9 = (longlong *)(param_2 + 0x90);
        if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
          plVar9 = *(longlong **)(param_2 + 0x80);
        }
        uVar3 = (**(code **)(*plVar9 + 8))();
        cVar2 = (*pcVar4)(uVar3);
        *param_2 = cVar2;
        pfVar10 = local_100;
        if (cVar2 == '\0') goto LAB_14845bb83;
      }
    }
  }
  else {
    pfVar10 = local_100;
    if (*param_2 == '\0') {
      pcVar4 = *(code **)(param_2 + 0x70);
      plVar9 = (longlong *)(param_2 + 0x90);
      if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
        plVar9 = *(longlong **)(param_2 + 0x80);
      }
      uVar3 = (**(code **)(*plVar9 + 8))();
      cVar2 = (*pcVar4)(uVar3);
      *param_2 = cVar2;
      pfVar10 = local_100;
      if (cVar2 == '\0') goto LAB_14845baaf;
    }
  }
LAB_14845bc10:
  if (pfVar10 != (float *)0x0) {
    FUN_1400020a8();
  }
LAB_14845bc1a:
  if ((local_38 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14845bd1e FUN_14845bd1e body=2620 status=ok
// SIG undefined FUN_14845bd1e(void)

void FUN_14845bd1e(undefined8 *param_1,char *param_2)

{
  uint *puVar1;
  undefined8 **ppuVar2;
  uint *puVar3;
  float *pfVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  code *pcVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  uint *puVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  char cVar23;
  bool bVar24;
  float fVar25;
  undefined1 auStack_1d8 [32];
  uint **local_1b8;
  longlong local_1b0;
  char local_199;
  undefined8 *local_198;
  longlong local_190;
  char *local_188;
  undefined8 *local_180;
  code *local_178;
  undefined8 **local_170;
  undefined1 *local_168;
  undefined8 **local_160;
  float local_154;
  undefined8 *local_150;
  undefined8 **local_148;
  undefined8 local_140;
  undefined8 **local_138;
  undefined8 local_130;
  undefined8 **local_128;
  undefined8 *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  uint *local_108;
  undefined8 uStack_100;
  undefined8 **local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 *local_80;
  undefined8 **local_78;
  float *pfStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  cVar23 = true;
  if (*(char *)((longlong)param_1 + 0x14a) == '\0') {
    cVar23 = *(char *)((longlong)param_1 + 0x14c) != '\0';
  }
  if (*(int *)(*(longlong *)(param_1[1] + 0x208) + 0x38) < 1) {
    lVar18 = 0;
  }
  else {
    lVar18 = **(longlong **)(*(longlong *)(param_1[1] + 0x208) + 0x30);
  }
  if (*(char *)((longlong)param_1 + 0x149) == '\x01') {
    if (param_2 != (char *)0x0) {
      if (*param_2 != '\0') goto LAB_14845bdc7;
      pcVar8 = *(code **)(param_2 + 0x70);
      plVar13 = (longlong *)(param_2 + 0x90);
      if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
        plVar13 = *(longlong **)(param_2 + 0x80);
      }
      uVar7 = (**(code **)(*plVar13 + 8))();
      cVar5 = (*pcVar8)(uVar7);
      *param_2 = cVar5;
      if (cVar5 != '\0') goto LAB_14845bdc7;
    }
    puVar1 = (uint *)(param_1 + 0x15);
    ppuVar2 = (undefined8 **)(param_1 + 0x17);
    local_80 = (undefined8 *)&DAT_100000000;
    pfStack_70 = (float *)&DAT_ffffffff;
    local_68 = (uint **)((ulonglong)local_68 & 0xffffffff00000000);
    iVar17 = 0;
    local_199 = cVar23;
    local_188 = param_2;
    local_78 = ppuVar2;
    if (*(int *)(param_1 + 0x1a) != 0) {
      FUN_1449c0562(&local_80);
      iVar17 = *(int *)(param_1 + 0x1a);
    }
    local_f0 = pfStack_70;
    pfVar4 = local_f0;
    local_e8 = (undefined4)local_68;
    local_e4 = local_68._4_4_;
    uStack_100 = local_80;
    local_f8 = local_78;
    local_f0._4_4_ = (int)((ulonglong)pfStack_70 >> 0x20);
    local_108 = puVar1;
    if ((local_f0._4_4_ != iVar17) || (local_78 != ppuVar2)) {
      local_180 = param_1 + 0x26;
      iVar6 = local_f0._4_4_;
      local_198 = param_1;
      local_190 = lVar18;
      local_f0 = pfVar4;
      do {
        uVar22 = *(uint *)(*(longlong *)local_108 + (longlong)iVar6 * 0xc);
        cVar5 = '\0';
        cVar23 = '\0';
        if (*(int *)(param_1 + 0x20) != *(int *)((longlong)param_1 + 300)) {
          lVar18 = *(longlong *)(*(longlong *)(param_1[1] + 0x130) + (ulonglong)(uVar22 >> 9) * 8);
          uVar9 = (ulonglong)(uVar22 & 0x1ff);
          puVar10 = (undefined8 *)param_1[0x27];
          if ((undefined8 *)param_1[0x27] == (undefined8 *)0x0) {
            puVar10 = local_180;
          }
          uVar22 = *(uint *)(lVar18 + uVar9 * 0xc);
          uVar21 = *(int *)(param_1 + 0x28) - 1;
          iVar6 = *(int *)((longlong)puVar10 + (ulonglong)(uVar21 & uVar22) * 4);
          cVar5 = '\0';
          if (iVar6 == -1) {
            bVar24 = false;
          }
          else {
            do {
              bVar24 = *(uint *)(param_1[0x1f] + (longlong)iVar6 * 0xc) == uVar22;
              if (bVar24) break;
              iVar6 = *(int *)((longlong)iVar6 * 0xc + param_1[0x1f] + 4);
            } while (iVar6 != -1);
          }
          uVar22 = *(uint *)(lVar18 + 4 + uVar9 * 0xc);
          uVar19 = *(uint *)(lVar18 + 8 + uVar9 * 0xc);
          iVar6 = *(int *)((longlong)puVar10 + (ulonglong)(uVar21 & uVar22) * 4);
          param_1 = local_198;
          lVar18 = local_190;
          if (iVar6 != -1) {
            do {
              if (*(uint *)(local_198[0x1f] + (longlong)iVar6 * 0xc) == uVar22) {
                cVar5 = '\x01';
                if (bVar24 != false) goto LAB_14845c181;
                break;
              }
              iVar6 = *(int *)(local_198[0x1f] + (longlong)iVar6 * 0xc + 4);
            } while (iVar6 != -1);
          }
          cVar5 = bVar24 + cVar5;
          iVar6 = *(int *)((longlong)puVar10 + (ulonglong)(uVar21 & uVar19) * 4);
          cVar23 = '\0';
          if (iVar6 != -1) {
            do {
              if (*(uint *)(local_198[0x1f] + (longlong)iVar6 * 0xc) == uVar19) {
                cVar23 = '\x01';
                break;
              }
              iVar6 = *(int *)(local_198[0x1f] + (longlong)iVar6 * 0xc + 4);
            } while (iVar6 != -1);
          }
        }
        if (1 < (byte)(cVar5 + cVar23)) {
LAB_14845c181:
          FUN_146c0adfe();
        }
        local_f0 = (float *)CONCAT44(local_f0._4_4_,(uint)local_f0 & ~uStack_100._4_4_);
        FUN_1449c0562(&uStack_100);
        iVar6 = local_f0._4_4_;
        pfVar4 = local_f0;
      } while (local_108 != puVar1 || (local_f8 != ppuVar2 || local_f0._4_4_ != iVar17));
    }
    local_f0 = pfVar4;
    param_2 = local_188;
    cVar23 = local_199;
    if (local_199 == '\0') {
      local_108 = (uint *)0x0;
      uStack_100 = (undefined8 *)0x0;
      uVar21 = *(int *)(lVar18 + 8) * 0x200 + *(int *)(lVar18 + 0xc);
      uVar22 = 0;
      if ((uVar21 != 0) &&
         (uVar22 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar18 + 0x10) - 1U))) {
        uVar19 = 1;
        uVar14 = 1;
        if (1 < (int)uVar21) {
          uVar19 = uVar21;
        }
        do {
          uVar22 = uVar19;
          if (uVar19 == uVar14) break;
          uVar15 = uVar14 >> 9;
          uVar20 = uVar14 & 0x1ff;
          uVar22 = uVar14;
          uVar14 = uVar14 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar18 + 0x10))[uVar15] +
                                             (ulonglong)uVar20 * 2) - 1U));
      }
      if (uVar22 != uVar21) {
        do {
          if (*(int *)(param_1 + 0x20) != *(int *)((longlong)param_1 + 300)) {
            uVar19 = *(uint *)(*(longlong *)
                                (*(longlong *)(lVar18 + 0x60) + (ulonglong)(uVar22 >> 9) * 8) +
                              (ulonglong)(uVar22 & 0x1ff) * 4);
            puVar10 = (undefined8 *)param_1[0x27];
            if ((undefined8 *)param_1[0x27] == (undefined8 *)0x0) {
              puVar10 = param_1 + 0x26;
            }
            uVar14 = *(uint *)((longlong)puVar10 +
                              (ulonglong)(*(int *)(param_1 + 0x28) - 1U & uVar19) * 4);
            if (uVar14 != 0xffffffff) {
              do {
                puVar11 = (uint *)(param_1[0x1f] + (longlong)(int)uVar14 * 0xc);
                if (*puVar11 == uVar19) {
                  if (puVar11 != (uint *)0x0) {
                    bVar24 = (longlong)uStack_100 < 0;
                    uStack_100 = (undefined8 *)((ulonglong)uStack_100 & 0xffffffff00000000);
                    if (bVar24) {
                      FUN_14481578e(&local_108,0);
                    }
                    FUN_146c31a60(lVar18,uVar22,&local_108);
                    if ((longlong)(int)uStack_100 != 0) {
                      puVar11 = local_108;
                      do {
                        if (*(int *)(param_1 + 0x16) != *(int *)((longlong)param_1 + 0xdc)) {
                          puVar10 = (undefined8 *)param_1[0x1d];
                          if ((undefined8 *)param_1[0x1d] == (undefined8 *)0x0) {
                            puVar10 = param_1 + 0x1c;
                          }
                          uVar19 = *(uint *)((longlong)puVar10 +
                                            (ulonglong)(*(int *)(param_1 + 0x1e) - 1U & *puVar11) *
                                            4);
                          if (uVar19 != 0xffffffff) {
LAB_14845c4d7:
                            puVar3 = (uint *)(*(longlong *)puVar1 + (longlong)(int)uVar19 * 0xc);
                            if (*puVar3 != *puVar11) goto code_r0x00014845c4e7;
                            if (puVar3 != (uint *)0x0) {
                              lVar12 = *(longlong *)(lVar18 + 0x48);
                              lVar16 = 0;
                              do {
                                uVar19 = uVar22 * 3 + (int)lVar16;
                                *(undefined4 *)((longlong)&local_80 + lVar16 * 4) =
                                     *(undefined4 *)
                                      (*(longlong *)(lVar12 + (ulonglong)(uVar19 >> 9) * 8) +
                                      (ulonglong)(uVar19 & 0x1ff) * 4);
                                lVar16 = lVar16 + 1;
                              } while (lVar16 != 3);
                              local_120 = (undefined8 *)((ulonglong)local_80 ^ 0x8000000080000000);
                              local_118 = CONCAT44(local_118._4_4_,local_78._0_4_) ^ 0x80000000;
                              lVar12 = 0;
                              do {
                                uVar19 = uVar22 * 3 + (int)lVar12;
                                *(undefined4 *)
                                 (*(longlong *)
                                   (*(longlong *)(lVar18 + 0x48) + (ulonglong)(uVar19 >> 9) * 8) +
                                 (ulonglong)(uVar19 & 0x1ff) * 4) =
                                     *(undefined4 *)((longlong)&local_120 + lVar12 * 4);
                                lVar12 = lVar12 + 1;
                              } while (lVar12 != 3);
                              break;
                            }
                          }
                        }
LAB_14845c49e:
                        puVar11 = puVar11 + 1;
                      } while (puVar11 != local_108 + (int)uStack_100);
                    }
                  }
                  break;
                }
                uVar14 = puVar11[1];
              } while (uVar14 != 0xffffffff);
            }
          }
          param_2 = local_188;
          cVar23 = local_199;
          uVar19 = uVar22 + 1;
          if ((int)(uVar22 + 1) < (int)uVar21) {
            uVar19 = uVar21;
          }
          do {
            uVar14 = uVar19;
            if (uVar19 - 1 == uVar22) break;
            uVar22 = uVar22 + 1;
            uVar14 = uVar22;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(lVar18 + 0x10) +
                                                 (ulonglong)(uVar22 >> 9) * 8) +
                                               (ulonglong)(uVar22 & 0x1ff) * 2) - 1U));
          uVar22 = uVar14;
        } while (uVar22 != uVar21);
        if (local_108 != (uint *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  FUN_14582f100(&local_108,param_1[1]);
  if (*(int *)(*(longlong *)(param_1[1] + 0x208) + 0x38) < 1) {
    uVar7 = 0;
  }
  else {
    uVar7 = **(undefined8 **)(*(longlong *)(param_1[1] + 0x208) + 0x30);
  }
  FUN_146c17e98(&local_108,uVar7);
  local_120 = (undefined8 *)param_1[1];
  local_118 = 0;
  uStack_110 = 0;
  cVar5 = *(char *)((longlong)param_1 + 0x14c);
  if (cVar5 != '\0') {
    if (param_2 == (char *)0x0) {
LAB_14845c0b4:
      if (cVar5 == '\x04') {
        FUN_146c39810(&local_108,0);
      }
      else if (cVar5 == '\x03') {
        FUN_146c39b56(&local_108);
      }
      else {
        if (cVar5 == '\x01') {
          FUN_146c38358(&local_120);
          fVar25 = cosf(*(float *)(param_1 + 0x2a) * 0.017453292);
          local_78 = &local_150;
          local_150 = (undefined8 *)CONCAT44(local_150._4_4_,fVar25);
          local_128 = &local_80;
          puVar10 = &local_130;
          pcVar8 = (code *)&LAB_143b5a990;
          local_80 = &local_118;
        }
        else {
          FUN_1483769fe(&local_80,param_1[1]);
          local_148 = (undefined8 **)param_1[0x13];
          if ((undefined8 **)param_1[0x13] == (undefined8 **)0x0) {
            local_148 = &local_80;
          }
          local_138 = &local_150;
          puVar10 = &local_140;
          pcVar8 = FUN_143b5a9e8;
          local_150 = param_1;
        }
        *puVar10 = pcVar8;
        FUN_146c2fed0(&local_108,puVar10,0);
      }
      goto LAB_14845bf4f;
    }
    if (*param_2 == '\0') {
      pcVar8 = *(code **)(param_2 + 0x70);
      plVar13 = (longlong *)(param_2 + 0x90);
      if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
        plVar13 = *(longlong **)(param_2 + 0x80);
      }
      uVar7 = (**(code **)(*plVar13 + 8))();
      cVar5 = (*pcVar8)(uVar7);
      *param_2 = cVar5;
      if (cVar5 == '\0') {
        cVar5 = *(char *)((longlong)param_1 + 0x14c);
        goto LAB_14845c0b4;
      }
    }
    goto LAB_14845c087;
  }
LAB_14845bf4f:
  if (cVar23 != '\0') {
    if (param_2 == (char *)0x0) {
LAB_14845bf5d:
      local_80 = (undefined8 *)param_1[1];
      local_78 = (undefined8 **)0x0;
      pfStack_70 = (float *)0x0;
      FUN_146c383fc(&local_80,&local_108,(*(byte *)((longlong)param_1 + 0x14b) & 0xfd) == 0,
                    (byte)(*(byte *)((longlong)param_1 + 0x14b) - 1) < 2);
      FUN_146c378c6(&local_80,&local_108,0);
      if (local_78 != (undefined8 **)0x0) {
        FUN_1400020a8();
      }
      goto LAB_14845bfb7;
    }
    if (*param_2 == '\0') {
      pcVar8 = *(code **)(param_2 + 0x70);
      plVar13 = (longlong *)(param_2 + 0x90);
      if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
        plVar13 = *(longlong **)(param_2 + 0x80);
      }
      uVar7 = (**(code **)(*plVar13 + 8))();
      cVar23 = (*pcVar8)(uVar7);
      *param_2 = cVar23;
      if (cVar23 == '\0') goto LAB_14845bf5d;
    }
    goto LAB_14845c087;
  }
LAB_14845bfb7:
  if ((*(char *)((longlong)param_1 + 0x14c) == '\x01') &&
     (*(char *)((longlong)param_1 + 0x14d) == '\x01')) {
    if (param_2 == (char *)0x0) {
LAB_14845bfda:
      local_154 = cosf(*(float *)(param_1 + 0x2a) * 0.017453292);
      pfStack_70 = &local_154;
      local_160 = &local_150;
      local_148 = &local_120;
      local_168 = &LAB_143b5ab1a;
      local_170 = &local_80;
      local_178 = FUN_143b5aa64;
      local_150 = param_1;
      local_80 = param_1;
      local_78 = local_148;
      local_68 = &local_108;
      FUN_146c304b4(&local_108);
      goto LAB_14845c058;
    }
    if (*param_2 == '\0') {
      pcVar8 = *(code **)(param_2 + 0x70);
      plVar13 = (longlong *)(param_2 + 0x90);
      if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
        plVar13 = *(longlong **)(param_2 + 0x80);
      }
      uVar7 = (**(code **)(*plVar13 + 8))();
      cVar23 = (*pcVar8)(uVar7);
      *param_2 = cVar23;
      if (cVar23 == '\0') goto LAB_14845bfda;
    }
  }
  else {
LAB_14845c058:
    local_80 = (undefined8 *)param_1[1];
    local_1b8 = &local_108;
    local_1b0 = lVar18;
    FUN_146bd08ce(&local_80,local_80,param_1 + 0x15,param_1 + 0x1f);
  }
LAB_14845c087:
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  FUN_1457ed45a(&local_108);
LAB_14845bdc7:
  if ((local_60 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x00014845c4e7:
  uVar19 = puVar3[1];
  if (uVar19 == 0xffffffff) goto LAB_14845c49e;
  goto LAB_14845c4d7;
}



// FUNCTION 14845c75c FUN_14845c75c body=1701 status=ok
// SIG undefined FUN_14845c75c(void)

ulonglong FUN_14845c75c(longlong param_1,float param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  uint *puVar14;
  longlong in_RDX;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  uint uStack_f0;
  undefined8 local_ec;
  uint local_e4 [7];
  float local_c8;
  float local_c4;
  undefined8 local_c0;
  int local_b8;
  uint local_b4 [3];
  undefined8 local_a8;
  int iStack_a0;
  int iStack_9c;
  undefined8 local_98;
  undefined8 local_90;
  float local_88;
  float local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  iVar12 = *(int *)(*(longlong *)(param_1 + 8) + 0x1b0);
  *(int *)(*(longlong *)(param_1 + 8) + 0x1b0) = iVar12 + 1;
  *param_3 = iVar12;
  piVar8 = *(int **)(in_RDX + 8);
  iVar12 = *piVar8;
  iVar2 = piVar8[1];
  local_e4[4] = iVar12;
  local_e4[5] = iVar2;
  local_e4[6] = piVar8[2];
  local_e4[1] = 0xffffffff;
  local_e4[2] = 0xffffffff;
  local_e4[3] = 0xffffffff;
  lVar22 = *(longlong *)(param_1 + 8);
  lVar23 = 1;
  do {
    lVar16 = lVar23;
    if (lVar23 == 3) {
      lVar16 = 0;
    }
    uVar10 = FUN_146c061e0(lVar22,local_e4[lVar23 + 3],local_e4[lVar16 + 4]);
    lVar22 = *(longlong *)(param_1 + 8);
    local_e4[lVar23] =
         *(uint *)(*(longlong *)(*(longlong *)(lVar22 + 0x1c0) + (ulonglong)(uVar10 >> 9) * 8) + 8 +
                  (ulonglong)((uVar10 & 0x1ff) << 4));
    uVar11 = local_e4[2];
    uVar10 = local_e4[1];
    lVar23 = lVar23 + 1;
  } while (lVar23 != 4);
  lVar23 = *(longlong *)(*(longlong *)(lVar22 + 0x130) + (ulonglong)(local_e4[1] >> 9) * 8);
  uVar13 = (ulonglong)(local_e4[1] & 0x1ff);
  iVar3 = *(int *)(lVar23 + uVar13 * 0xc);
  iVar4 = *(int *)(lVar23 + 4 + uVar13 * 0xc);
  if (((iVar4 == iVar2 && iVar3 == iVar12) ||
      (iVar5 = *(int *)(lVar23 + 8 + uVar13 * 0xc), iVar5 == iVar2 && iVar4 == iVar12)) ||
     (iVar3 == iVar2 && iVar5 == iVar12)) {
    local_e4[2] = local_e4[3];
    local_e4[3] = uVar11;
    local_e4[4] = iVar2;
    local_e4[5] = iVar12;
  }
  uVar11 = FUN_146c01152(lVar22,local_e4 + 4,*param_3);
  if ((int)uVar11 < 0) {
LAB_14845cb30:
    uVar13 = 0;
  }
  else {
    lVar22 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x208);
    if (((lVar22 != 0) && (0 < *(int *)(lVar22 + 0x28))) &&
       (plVar9 = (longlong *)**(longlong **)(lVar22 + 0x20), plVar9 != (longlong *)0x0)) {
      fVar24 = -NAN;
      local_a8 = (uint *)0xffffffffffffffff;
      iStack_a0 = -1;
      iStack_9c = -1;
      local_98 = 0xffffffffffffffff;
      lVar22 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x130);
      lVar23 = plVar9[0xf];
      lVar16 = 1;
      do {
        uVar17 = local_e4[lVar16];
        uVar20 = uVar17 * 3 + 2;
        uVar15 = uVar17 * 3 + 1;
        lVar21 = *(longlong *)(lVar22 + (ulonglong)(uVar17 >> 9) * 8);
        uVar13 = (ulonglong)(uVar17 & 0x1ff);
        uVar18 = *(uint *)(lVar21 + uVar13 * 0xc);
        uVar6 = *(uint *)(lVar21 + 4 + uVar13 * 0xc);
        uVar7 = *(uint *)(lVar21 + 8 + uVar13 * 0xc);
        local_90 = CONCAT44(*(undefined4 *)
                             (*(longlong *)(lVar23 + (ulonglong)(uVar15 >> 9) * 8) +
                             (ulonglong)(uVar15 & 0x1ff) * 4),
                            *(undefined4 *)
                             (*(longlong *)(lVar23 + (ulonglong)(uVar17 * 3 >> 9) * 8) +
                             (ulonglong)(uVar17 * 3 & 0x1ff) * 4));
        local_88 = *(float *)(*(longlong *)(lVar23 + (ulonglong)(uVar20 >> 9) * 8) +
                             (ulonglong)(uVar20 & 0x1ff) * 4);
        uVar17 = local_e4[lVar16 + 3];
        if (uVar18 == uVar17) {
          lVar21 = 0;
        }
        else {
          lVar21 = 1;
          if (uVar6 != uVar17) {
            lVar21 = (ulonglong)(uVar7 == uVar17) * 3 + -1;
          }
        }
        lVar19 = lVar16;
        if (lVar16 == 3) {
          lVar19 = 0;
        }
        local_b4[lVar16 * 2 + 2] = *(uint *)((longlong)&local_90 + lVar21 * 4);
        uVar17 = local_e4[lVar19 + 4];
        lVar21 = 0;
        if ((uVar18 != uVar17) && (lVar21 = 1, uVar6 != uVar17)) {
          lVar21 = (ulonglong)(uVar7 == uVar17) * 3 + -1;
        }
        *(undefined4 *)(&local_a8 + lVar19) = *(undefined4 *)((longlong)&local_90 + lVar21 * 4);
        lVar16 = lVar16 + 1;
      } while (lVar16 != 4);
      local_ec = 0xffffffffffffffff;
      local_e4[0] = 0xffffffff;
      local_f8 = plVar9;
      if ((uint)local_a8 == local_a8._4_4_) {
        local_e4[0] = local_98._4_4_;
        uVar17 = (uint)local_a8;
        uVar18 = local_e4[0];
LAB_14845ca57:
        local_e4[0] = uVar18;
        local_ec = CONCAT44(iStack_a0,uVar17);
      }
      else {
        uVar17 = local_a8._4_4_;
        uVar18 = (uint)local_98;
        if (iStack_a0 == iStack_9c) goto LAB_14845ca57;
        if ((uint)local_98 == local_98._4_4_) {
          local_ec = CONCAT44(iStack_9c,(uint)local_a8);
          uVar17 = (uint)local_a8;
          local_e4[0] = (uint)local_98;
        }
        else {
          uVar17 = uVar10 * 3 + 2;
          uVar18 = uVar10 * 3 + 1;
          local_b4[0] = *(uint *)(*(longlong *)(lVar23 + (ulonglong)(uVar10 * 3 >> 9) * 8) +
                                 (ulonglong)(uVar10 * 3 & 0x1ff) * 4);
          local_b4[1] = *(undefined4 *)
                         (*(longlong *)(lVar23 + (ulonglong)(uVar18 >> 9) * 8) +
                         (ulonglong)(uVar18 & 0x1ff) * 4);
          local_b4[2] = *(undefined4 *)
                         (*(longlong *)(lVar23 + (ulonglong)(uVar17 >> 9) * 8) +
                         (ulonglong)(uVar17 & 0x1ff) * 4);
          piVar8 = (int *)(*(longlong *)
                            (*(longlong *)(*plVar9 + 0x130) + (ulonglong)(uVar11 >> 9) * 8) +
                          (ulonglong)(uVar11 & 0x1ff) * 0xc);
          iVar12 = *piVar8;
          iVar2 = piVar8[2];
          lVar22 = plVar9[0xc];
          lVar23 = 0;
          uVar10 = 0;
          do {
            uVar17 = local_b4[lVar23];
            iVar3 = *(int *)(*(longlong *)(lVar22 + (ulonglong)(uVar17 >> 9) * 8) +
                            (ulonglong)(uVar17 & 0x1ff) * 4);
            puVar14 = (uint *)&local_ec;
            if (((iVar12 == iVar3) ||
                (puVar14 = (uint *)((longlong)&local_ec + 4), piVar8[1] == iVar3)) ||
               (puVar14 = local_e4, iVar2 == iVar3)) {
              *puVar14 = uVar17;
              lVar16 = *(longlong *)(plVar9[9] + (ulonglong)(uVar17 >> 5 & 0x3fffff8));
              uVar13 = (ulonglong)((uVar17 & 0xff) << 3);
              uVar1 = *(undefined4 *)(lVar16 + 4 + uVar13);
              *(undefined4 *)(&local_90 + uVar10) = *(undefined4 *)(lVar16 + uVar13);
              *(undefined4 *)((longlong)&local_90 + (ulonglong)uVar10 * 8 + 4) = uVar1;
              uVar10 = uVar10 + 1;
            }
            else {
              lVar16 = *(longlong *)(plVar9[9] + (ulonglong)(uVar17 >> 5 & 0x3fffff8));
              uVar13 = (ulonglong)((uVar17 & 0xff) << 3);
              fVar24 = *(float *)(lVar16 + uVar13);
              param_2 = *(float *)(lVar16 + 4 + uVar13);
            }
            lVar23 = lVar23 + 1;
          } while (lVar23 != 3);
          local_b8 = piVar8[2];
          local_c0 = *(undefined8 *)piVar8;
          local_c4 = (local_90._4_4_ + local_84) * 0.5;
          local_c8 = ((float)local_90 + local_88) * 0.5;
          fVar25 = SQRT((local_88 - (float)local_90) * (local_88 - (float)local_90) +
                        (local_84 - local_90._4_4_) * (local_84 - local_90._4_4_));
          if ((fVar25 != 0.0) || (NAN(fVar25))) {
            param_2 = local_c4 - param_2;
            fVar24 = local_c8 - fVar24;
            fVar25 = SQRT(fVar24 * fVar24 + param_2 * param_2);
            if (0.0 < fVar25) {
              fVar25 = 1.0 / fVar25;
              local_c8 = local_c8 + fVar24 * fVar25 * 0.0001;
              local_c4 = local_c4 + param_2 * fVar25 * 0.0001;
            }
          }
          if ((uint)local_ec == 0xffffffff) {
            lVar22 = 0;
          }
          else {
            lVar22 = 1;
            if (local_ec._4_4_ != -1) {
              lVar22 = (ulonglong)(local_e4[0] == 0xffffffff) * 3 + -1;
            }
          }
          uVar10 = FUN_146c2d0a4(plVar9,&local_c8);
          *(uint *)((longlong)&local_ec + lVar22 * 4) = uVar10;
          *(undefined4 *)
           (*(longlong *)(plVar9[0xc] + (ulonglong)(uVar10 >> 9) * 8) +
           (ulonglong)(uVar10 & 0x1ff) * 4) = *(undefined4 *)((longlong)&local_c0 + lVar22 * 4);
          uVar17 = (uint)local_ec;
        }
      }
      if ((uVar17 != 0xffffffff) && (iVar12 = FUN_146c01486(plVar9,uVar11,&local_ec,1), iVar12 != 0)
         ) goto LAB_14845cb30;
    }
    uVar13 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x208) != 0) {
      local_a8 = (uint *)0x0;
      iStack_a0 = 1;
      local_90 = *(longlong *)(param_1 + 8);
      FUN_144a06ca8(&local_a8,1,0);
      *local_a8 = uVar11;
      FUN_146bc9e14(&local_90,&local_a8);
      if (local_a8 != (uint *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13 & 0xffffffff;
}



// FUNCTION 14845ce02 FUN_14845ce02 body=2737 status=ok
// SIG undefined FUN_14845ce02(void)

void FUN_14845ce02(longlong param_1,char *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  uint *puVar4;
  void *_Src;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  longlong *plVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong *plVar25;
  undefined1 auStack_1e8 [32];
  undefined8 *local_1c8;
  undefined8 *local_1c0;
  undefined4 local_1b8;
  longlong local_1b0;
  undefined8 *local_1a8;
  ulonglong uStack_1a0;
  undefined4 local_198;
  uint uStack_194;
  undefined4 uStack_190;
  uint uStack_18c;
  double local_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  longlong local_168 [3];
  int local_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  int local_d4;
  undefined1 local_d0 [8];
  undefined1 *local_c8;
  int local_c0;
  code *local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined **ppuStack_98;
  code *local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  *(undefined4 *)(param_1 + 0x100) = 0;
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_14845d262;
    pcVar3 = *(code **)(param_2 + 0x70);
    plVar25 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar25 = *(longlong **)(param_2 + 0x80);
    }
    uVar13 = (**(code **)(*plVar25 + 8))();
    cVar10 = (*pcVar3)(uVar13);
    *param_2 = cVar10;
    if (cVar10 != '\0') goto LAB_14845d262;
  }
  local_1c0 = (undefined8 *)CONCAT71(local_1c0._1_7_,1);
  local_1c8 = (undefined8 *)CONCAT71(local_1c8._1_7_,1);
  FUN_146c005f0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x88),1,1);
  iVar11 = *(int *)(param_1 + 0xb0);
  if (iVar11 == 0) goto LAB_14845d262;
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_14845d262;
    pcVar3 = *(code **)(param_2 + 0x70);
    plVar25 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar25 = *(longlong **)(param_2 + 0x80);
    }
    (**(code **)(*plVar25 + 8))();
    cVar10 = (*pcVar3)();
    *param_2 = cVar10;
    if (cVar10 != '\0') goto LAB_14845d262;
    iVar11 = *(int *)(param_1 + 0xb0);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_c8 = (undefined1 *)0x0;
  local_c0 = 0;
  if (iVar11 != 0) {
    lVar20 = *(longlong *)(param_1 + 0xa8);
    lVar24 = (longlong)iVar11 * 0x40 + lVar20;
    do {
      if ((longlong)*(int *)(lVar20 + 0x20) == 0) {
LAB_14845d162:
        *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
        goto LAB_14845d168;
      }
      pcVar3 = *(code **)(param_1 + 8);
      plVar25 = (longlong *)(lVar20 + 0x18);
      lVar23 = 0;
      do {
        if (*(int *)(*(longlong *)
                      (*(longlong *)(pcVar3 + 0x1c0) +
                      (ulonglong)(*(uint *)(*plVar25 + lVar23) >> 9) * 8) + 0xc +
                    (ulonglong)((*(uint *)(*plVar25 + lVar23) & 0x1ff) << 4)) != -1)
        goto LAB_14845d162;
        lVar23 = lVar23 + 4;
      } while ((longlong)*(int *)(lVar20 + 0x20) * 4 != lVar23);
      local_90 = (code *)0x0;
      uStack_88 = 0;
      local_a0 = 0;
      ppuStack_98 = (undefined **)0x0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      local_80 = 0;
      local_b8 = pcVar3;
      FUN_14054c6c4(&uStack_b0,lVar20 + 8);
      FUN_14054c6c4(&local_a0,plVar25);
      cVar10 = FUN_146c5d770(&local_b8,0);
      if (cVar10 == '\0') {
        FUN_146bc7c1a(&local_b8);
        goto LAB_14845d162;
      }
      iVar11 = *(int *)(lVar20 + 0x10);
      local_1b0 = lVar24;
      if ((longlong)iVar11 != 0) {
        lVar24 = *(longlong *)(lVar20 + 8);
        lVar23 = 0;
        do {
          FUN_146c0b51e(pcVar3,*(undefined4 *)(lVar24 + lVar23));
          lVar23 = lVar23 + 4;
        } while ((longlong)iVar11 * 4 != lVar23);
      }
      FUN_146bc7c1a(&local_b8);
      if ((*(char *)(param_1 + 0xb8) == '\x01') && (*(int *)(lVar20 + 0x20) == 3)) {
        lVar24 = *(longlong *)(param_1 + 8);
        puVar4 = (uint *)*plVar25;
        lVar23 = *(longlong *)(lVar24 + 0x1c0);
        uVar19 = *(uint *)(*(longlong *)(lVar23 + (ulonglong)(*puVar4 >> 9) * 8) + 8 +
                          (ulonglong)((*puVar4 & 0x1ff) << 4));
        if ((uVar19 != *(uint *)(*(longlong *)(lVar23 + (ulonglong)(puVar4[1] >> 9) * 8) + 8 +
                                (ulonglong)((puVar4[1] & 0x1ff) << 4))) ||
           (uVar19 != *(uint *)(*(longlong *)(lVar23 + (ulonglong)(puVar4[2] >> 9) * 8) + 8 +
                               (ulonglong)((puVar4[2] & 0x1ff) << 4)))) goto LAB_14845d177;
        lVar23 = *(longlong *)(*(longlong *)(lVar24 + 0x130) + (ulonglong)(uVar19 >> 9) * 8);
        uVar15 = (ulonglong)(uVar19 & 0x1ff);
        uVar1 = *(undefined4 *)(lVar23 + 4 + uVar15 * 0xc);
        uVar2 = *(undefined4 *)(lVar23 + 8 + uVar15 * 0xc);
        iVar11 = FUN_146c12dbe(lVar24,*(undefined4 *)(lVar23 + uVar15 * 0xc));
        if (((iVar11 != 1) || (iVar11 = FUN_146c12dbe(lVar24,uVar1), iVar11 != 1)) ||
           (iVar11 = FUN_146c12dbe(lVar24,uVar2), iVar11 != 1)) goto LAB_14845d177;
        FUN_146c0b65a(*(undefined8 *)(param_1 + 8),uVar19,1,0);
        lVar24 = local_1b0;
        goto LAB_14845d168;
      }
LAB_14845d177:
      lVar24 = local_1b0;
      if (((*(char *)(param_1 + 0xb9) == '\x01') && (*(int *)(lVar20 + 0x20) == 3)) &&
         (cVar10 = FUN_14845c75c(param_1,lVar20,&local_b8), cVar10 != '\0')) {
        FUN_1447cbafe(&local_108,&local_128,&local_b8,0);
        goto LAB_14845d168;
      }
      local_14c = *(int *)(*(longlong *)(param_1 + 8) + 0x1b0);
      *(int *)(*(longlong *)(param_1 + 8) + 0x1b0) = local_14c + 1;
      FUN_1447cbafe(&local_108,&local_b8,&local_14c,0);
      local_168[0] = 0;
      local_168[1] = 0;
      FUN_14845d8b4(lVar20,local_168);
      FUN_146bd1842(local_168,&local_198);
      uStack_194 = uStack_194 ^ 0x80000000;
      uStack_18c = uStack_18c ^ 0x80000000;
      local_188 = -local_188;
      local_1a8 = (undefined8 *)0x0;
      uStack_1a0 = 0;
      plVar25 = (longlong *)0x0;
      switch(*(undefined1 *)(param_1 + 0x98)) {
      case 0:
        lVar23 = *(longlong *)(param_1 + 8);
        plVar25 = (longlong *)FUN_14001cc68(0x68,0x10);
        FUN_146c7f310(&local_b8,lVar20);
        plVar25[1] = 0;
        plVar25[2] = 0;
        *plVar25 = (longlong)&PTR_FUN_14ae72d10;
        plVar25[3] = lVar23;
        FUN_146c7f310(plVar25 + 4,&local_b8);
        lVar23 = -0x100000000;
        goto LAB_14845d7da;
      case 1:
        lVar23 = *(longlong *)(param_1 + 8);
        plVar25 = (longlong *)FUN_14001cc68(0x68,0x10);
        FUN_146c7f310(&local_b8,lVar20);
        plVar25[1] = 0;
        plVar25[2] = 0;
        *plVar25 = (longlong)&PTR_FUN_14ae72d10;
        plVar25[3] = lVar23;
        FUN_146c7f310(plVar25 + 4,&local_b8);
        lVar23 = -0xffffffff;
LAB_14845d7da:
        plVar25[0xc] = lVar23;
        FUN_146bc7c1a(&local_b8);
        break;
      case 2:
        uStack_1a0 = 1;
        FUN_140bfc2d4(&local_1a8,0);
        puVar9 = local_1a8;
        *local_1a8 = 0;
        iVar11 = *(int *)(lVar20 + 0x10);
        _Src = *(void **)(lVar20 + 8);
        *(int *)(local_1a8 + 1) = iVar11;
        if ((longlong)iVar11 == 0) {
          *(undefined4 *)((longlong)local_1a8 + 0xc) = 0;
        }
        else {
          FUN_144a06ca8(local_1a8,iVar11,0);
          memcpy((void *)*puVar9,_Src,(longlong)iVar11 << 2);
        }
        uVar13 = *(undefined8 *)(param_1 + 8);
        plVar25 = (longlong *)FUN_14001cc68(0xa0,0x10);
        local_128 = CONCAT44(uStack_194,local_198);
        uStack_120 = CONCAT44(uStack_18c,uStack_190);
        local_118 = local_188;
        local_1c8 = &local_148;
        local_148 = CONCAT44(uStack_17c,local_180);
        uStack_140 = uStack_178;
        uStack_13c = uStack_174;
        local_138 = local_170;
        uStack_a8 = 0;
        ppuStack_98 = &PTR_LAB_14aee5540;
        local_90 = FUN_148266949;
        local_b8 = FUN_148483c38;
        local_1c0 = &local_128;
        FUN_1483164cc(plVar25,uVar13);
        break;
      case 3:
        uVar13 = *(undefined8 *)(param_1 + 8);
        plVar25 = (longlong *)FUN_14001cc68(0x130,0x10);
        FUN_146c7f310(&local_b8,lVar20);
        lVar24 = local_1b0;
        FUN_1483150ae(plVar25,uVar13);
        break;
      case 4:
        uVar13 = *(undefined8 *)(param_1 + 8);
        plVar25 = (longlong *)FUN_14001cc68(0x60,0x10);
        FUN_1483311ce(plVar25,uVar13);
        uVar1 = *(undefined4 *)(param_1 + 0xc4);
        uVar2 = *(undefined4 *)(param_1 + 200);
        uVar5 = *(undefined4 *)(param_1 + 0xcc);
        lVar23 = *(longlong *)(param_1 + 0xd0);
        lVar6 = *(longlong *)(param_1 + 0xd8);
        lVar7 = *(longlong *)(param_1 + 0xe0);
        lVar8 = *(longlong *)(param_1 + 0xe8);
        *(undefined4 *)(plVar25 + 3) = *(undefined4 *)(param_1 + 0xc0);
        *(undefined4 *)((longlong)plVar25 + 0x1c) = uVar1;
        *(undefined4 *)(plVar25 + 4) = uVar2;
        *(undefined4 *)((longlong)plVar25 + 0x24) = uVar5;
        plVar25[5] = lVar23;
        plVar25[6] = lVar6;
        plVar25[7] = lVar7;
        plVar25[8] = lVar8;
      }
      cVar10 = (**(code **)(*plVar25 + 8))(plVar25,local_14c);
      if (cVar10 == '\0') {
        *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
        iVar11 = 3;
      }
      else {
        if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x208) != 0) {
          local_a0 = 0;
          ppuStack_98 = (undefined **)0x0;
          local_90 = (code *)0x0;
          uStack_88 = 0x3ff0000000000000;
          local_b8 = (code *)CONCAT44(uStack_17c,local_180);
          uStack_b0 = CONCAT44(uStack_174,uStack_178);
          uStack_a8 = local_170;
          local_118 = DAT_14c8463c8;
          local_128 = CONCAT44(DAT_14c8463b8._4_4_,(undefined4)DAT_14c8463b8);
          uStack_120._0_4_ = (undefined4)DAT_14c8463c0;
          uStack_120._4_4_ = DAT_14c8463c0._4_4_;
          local_148 = *(longlong *)(param_1 + 8);
          FUN_146bfb7f2(&local_a0,&local_128,&local_198);
          local_128 = CONCAT44((float)(double)CONCAT44(uStack_18c,uStack_190),
                               (float)(double)CONCAT44(uStack_194,local_198));
          uStack_120 = CONCAT44(uStack_120._4_4_,(float)local_188);
          FUN_146bc9b9c(&local_148,plVar25 + 1,&local_128);
          lVar24 = local_1b0;
          local_128 = DAT_14c84635c;
          local_1b8 = 0;
          local_1c0 = (undefined8 *)CONCAT71(local_1c0._1_7_,1);
          local_1c8 = &local_128;
          FUN_146bca23e(&local_148,plVar25 + 1,&local_b8,(float)*(double *)(param_1 + 0xa0));
        }
        if (param_2 == (char *)0x0) {
LAB_14845d52e:
          iVar11 = 0;
        }
        else {
          iVar11 = 1;
          if (*param_2 == '\0') {
            pcVar3 = *(code **)(param_2 + 0x70);
            plVar17 = (longlong *)(param_2 + 0x90);
            if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
              plVar17 = *(longlong **)(param_2 + 0x80);
            }
            uVar13 = (**(code **)(*plVar17 + 8))();
            cVar10 = (*pcVar3)(uVar13);
            *param_2 = cVar10;
            if (cVar10 == '\0') goto LAB_14845d52e;
          }
        }
      }
      FUN_144716727(local_1a8,uStack_1a0 & 0xffffffff);
      if (local_1a8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if (plVar25 != (longlong *)0x0) {
        (**(code **)*plVar25)(plVar25,1);
      }
      if (local_168[0] != 0) {
        FUN_1400020a8();
      }
      if ((iVar11 != 3) && (iVar11 != 0)) goto LAB_14845d238;
LAB_14845d168:
      lVar20 = lVar20 + 0x40;
    } while (lVar20 != lVar24);
  }
  plVar25 = (longlong *)(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if (*(int *)(param_1 + 0xfc) != 0) {
    FUN_14481578e(plVar25,0);
  }
  lVar20 = *(longlong *)(param_1 + 8);
  uVar21 = *(int *)(lVar20 + 0x140) * 0x200 + *(int *)(lVar20 + 0x144);
  uVar19 = 0;
  if ((uVar21 != 0) &&
     (uVar19 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar20 + 0x148) - 1U))) {
    uVar12 = 1;
    uVar14 = 1;
    if (1 < (int)uVar21) {
      uVar12 = uVar21;
    }
    do {
      uVar19 = uVar12;
      if (uVar12 == uVar14) break;
      uVar18 = uVar14 >> 9;
      uVar22 = uVar14 & 0x1ff;
      uVar19 = uVar14;
      uVar14 = uVar14 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar20 + 0x148))[uVar18] +
                                         (ulonglong)uVar22 * 2) - 1U));
  }
  if (uVar19 != uVar21) {
    do {
      uVar12 = FUN_146bc96d4(*(undefined8 *)(param_1 + 8),uVar19);
      if ((int)uStack_100 != local_d4) {
        puVar16 = local_c8;
        if (local_c8 == (undefined1 *)0x0) {
          puVar16 = local_d0;
        }
        for (iVar11 = *(int *)(puVar16 + (ulonglong)(local_c0 - 1U & uVar12) * 4); iVar11 != -1;
            iVar11 = *(int *)(local_108 + (longlong)iVar11 * 0xc + 4)) {
          if (*(uint *)(local_108 + (longlong)iVar11 * 0xc) == uVar12) {
            iVar11 = *(int *)(param_1 + 0xf8);
            *(uint *)(param_1 + 0xf8) = iVar11 + 1U;
            if (*(uint *)(param_1 + 0xfc) < iVar11 + 1U) {
              FUN_1446f48e2(plVar25,iVar11);
            }
            *(uint *)(*plVar25 + (longlong)iVar11 * 4) = uVar19;
            break;
          }
        }
      }
      uVar12 = uVar19 + 1;
      if ((int)(uVar19 + 1) < (int)uVar21) {
        uVar12 = uVar21;
      }
      do {
        uVar14 = uVar12;
        if (uVar12 - 1 == uVar19) break;
        uVar19 = uVar19 + 1;
        uVar14 = uVar19;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar20 + 0x148) +
                                             (ulonglong)(uVar19 >> 9) * 8) +
                                           (ulonglong)(uVar19 & 0x1ff) * 2) - 1U));
      uVar19 = uVar14;
    } while (uVar19 != uVar21);
  }
LAB_14845d238:
  local_c0 = 0;
  if (local_c8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_108);
LAB_14845d262:
  if ((local_70 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14845d8b4 FUN_14845d8b4 body=190 status=ok
// SIG undefined FUN_14845d8b4(void)

void FUN_14845d8b4(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = param_1[2];
  if (0 < (longlong)(int)lVar5) {
    lVar7 = 0;
    do {
      uVar2 = *(uint *)(param_1[1] + lVar7 * 4);
      lVar4 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
      uVar6 = (ulonglong)(uVar2 & 0x1ff);
      local_38 = *(undefined8 *)(lVar4 + 0x10 + uVar6 * 0x18);
      puVar1 = (undefined4 *)(lVar4 + uVar6 * 0x18);
      local_48 = *puVar1;
      uStack_44 = puVar1[1];
      uStack_40 = puVar1[2];
      uStack_3c = puVar1[3];
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1403e3958(param_2,iVar3);
      }
      lVar4 = *param_2;
      *(undefined8 *)(lVar4 + 0x10 + (longlong)iVar3 * 0x18) = local_38;
      puVar1 = (undefined4 *)(lVar4 + (longlong)iVar3 * 0x18);
      *puVar1 = local_48;
      puVar1[1] = uStack_44;
      puVar1[2] = uStack_40;
      puVar1[3] = uStack_3c;
      lVar7 = lVar7 + 1;
    } while ((int)lVar5 != lVar7);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14845d974 FUN_14845d974 body=387 status=ok
// SIG undefined FUN_14845d974(void)

undefined8 * FUN_14845d974(longlong param_1,undefined8 *param_2,char param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)0x0;
  if (param_3 == '\x02') {
    puVar1 = (undefined8 *)FUN_14001cc68(0x430,0x10);
    FUN_14831e922(puVar1,param_4);
    *puVar1 = &PTR_FUN_14aee51c0;
    *(undefined1 *)(puVar1 + 0x7e) = 1;
    puVar1[0x7f] = 0;
    puVar1[0x80] = 0;
    puVar1[0x81] = 0;
    puVar1[0x82] = 0;
    puVar1[0x83] = 0;
    puVar1[0x84] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x2a4) = *(undefined4 *)(param_1 + 0xb0);
    puVar1[0x55] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x3cc) = *(undefined4 *)(param_1 + 0xc0);
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0xc4)) {
      iVar2 = *(int *)(param_1 + 0xc4);
    }
    *(int *)((longlong)puVar1 + 0x3ec) = iVar2;
    *(undefined4 *)(puVar1 + 0x79) = *(undefined4 *)(param_1 + 0x200);
    puVar1[0x7a] = *(undefined8 *)(param_1 + 0x208);
    puVar1[0x7b] = *(undefined8 *)(param_1 + 0x210);
    *(undefined1 *)(puVar1 + 0x7c) = *(undefined1 *)(param_1 + 0x218);
    *(undefined4 *)((longlong)puVar1 + 0x3e4) = *(undefined4 *)(param_1 + 0x21c);
    *(undefined4 *)(puVar1 + 0x7d) = *(undefined4 *)(param_1 + 0x220);
  }
  else if (param_3 == '\x01') {
    puVar1 = (undefined8 *)FUN_14001cc68(0x2a0,0x10);
    FUN_14831cbe4(puVar1,param_4);
  }
  else if (param_3 == '\0') {
    puVar1 = (undefined8 *)FUN_14001cc68(0x3d0,0x10);
    FUN_14831e922(puVar1,param_4);
    *(undefined4 *)((longlong)puVar1 + 0x2a4) = *(undefined4 *)(param_1 + 0xb0);
    puVar1[0x55] = *(undefined8 *)(param_1 + 0xb8);
  }
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 14845daf8 FUN_14845daf8 body=20 status=ok
// SIG undefined FUN_14845daf8(void)

void FUN_14845daf8(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_1 + 0x10);
  for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}



// FUNCTION 14845db0c FUN_14845db0c body=158 status=ok
// SIG undefined FUN_14845db0c(void)

undefined8 * FUN_14845db0c(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1484716ec();
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  FUN_1482f5d54(param_1 + 10,param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xa0);
  FUN_148471870(param_1 + 0x15,param_2 + 0xa8);
  return param_1;
}



// FUNCTION 14845dbaa FUN_14845dbaa body=290 status=ok
// SIG undefined FUN_14845dbaa(void)

longlong * FUN_14845dbaa(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14845dcce FUN_14845dcce body=191 status=ok
// SIG undefined FUN_14845dcce(void)

void FUN_14845dcce(undefined8 param_1,int param_2,double param_3)

{
  double dVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 <= 0.0) {
    FUN_1482e1672(local_40,param_1);
    param_3 = local_38;
  }
  dVar1 = ((param_3 / (double)param_2) * 4.0) / 1.7320508075688772;
  if (dVar1 < 0.0) {
    dVar1 = sqrt(dVar1);
  }
  else {
    dVar1 = SQRT(dVar1);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0((double)((longlong)ROUND(dVar1 * 100.0 + dVar1 * 100.0 + 0.5) >> 1) / 100.0);
}



// FUNCTION 14845dd8e FUN_14845dd8e body=52 status=ok
// SIG undefined FUN_14845dd8e(void)

void FUN_14845dd8e(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = param_2[4];
  uVar7 = param_2[5];
  uVar1 = param_2[6];
  uVar8 = param_2[8];
  uVar9 = param_2[9];
  uVar2 = param_2[10];
  *(undefined8 *)(param_1 + 0x10) = *param_2;
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  *(undefined8 *)(param_1 + 0x30) = uVar6;
  *(undefined8 *)(param_1 + 0x38) = uVar7;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined8 *)(param_1 + 0x48) = uVar8;
  *(undefined8 *)(param_1 + 0x50) = uVar9;
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  return;
}



// FUNCTION 14845ddc2 FUN_14845ddc2 body=1410 status=ok
// SIG undefined FUN_14845ddc2(void)

void FUN_14845ddc2(longlong param_1,char *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_1e8 [32];
  undefined8 *local_1c8;
  undefined1 local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  longlong local_1a8;
  undefined4 local_1a0;
  longlong local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined4 local_180;
  longlong local_178;
  undefined8 uStack_170;
  longlong local_168;
  undefined8 uStack_160;
  undefined **local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  int local_108;
  undefined4 uStack_104;
  undefined1 local_100;
  longlong local_f8 [2];
  longlong *local_e8;
  longlong local_d8 [4];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  longlong local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_14845def9;
    pcVar1 = *(code **)(param_2 + 0x70);
    plVar7 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar7 = *(longlong **)(param_2 + 0x80);
    }
    uVar4 = (**(code **)(*plVar7 + 8))();
    cVar2 = (*pcVar1)(uVar4);
    *param_2 = cVar2;
    if (cVar2 != '\0') goto LAB_14845def9;
  }
  local_1c0 = 1;
  local_1c8 = (undefined8 *)CONCAT71(local_1c8._1_7_,1);
  FUN_146c005f0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x88),1,1);
  local_148 = *(undefined8 *)(param_1 + 8);
  local_150 = &PTR_FUN_14ae73d90;
  local_140 = 1;
  local_138 = 0x3e45798ee2308c3a;
  local_130 = 0x3fe0000000000000;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  uStack_10f = 0;
  local_108 = 0;
  uStack_104 = 0;
  local_100 = 0;
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_14845def9;
    pcVar1 = *(code **)(param_2 + 0x70);
    plVar7 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar7 = *(longlong **)(param_2 + 0x80);
    }
    uVar4 = (**(code **)(*plVar7 + 8))();
    cVar2 = (*pcVar1)(uVar4);
    *param_2 = cVar2;
    if (cVar2 != '\0') goto LAB_14845def9;
  }
  local_140 = *(undefined4 *)(param_1 + 0xd8);
  local_130 = *(undefined8 *)(param_1 + 0xe8);
  local_138 = *(undefined8 *)(param_1 + 0xe0);
  local_128 = CONCAT44(*(undefined4 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0x11c));
  local_120 = *(undefined4 *)(param_1 + 0xf4);
  local_168 = 0;
  uStack_160 = 0;
  FUN_14845e346(&local_168,*(undefined4 *)(param_1 + 0xa0));
  local_178 = 0;
  uStack_170 = 0;
  FUN_14845e3be(&local_178,*(undefined4 *)(param_1 + 0xb0));
  if (0 < *(int *)(param_1 + 0xa0)) {
    lVar5 = 0;
    lVar6 = 0;
    do {
      *(undefined8 *)(local_168 + lVar6 * 8) =
           *(undefined8 *)(*(longlong *)(param_1 + 0x98) + lVar5);
      *(undefined8 *)(local_178 + lVar6 * 8) =
           *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar6 < *(int *)(param_1 + 0xa0));
  }
  local_188 = *(undefined8 *)(param_1 + 0xb8);
  local_1c8 = &local_188;
  local_180 = *(undefined4 *)(param_1 + 0xc0);
  local_198 = local_178;
  local_190 = (undefined4)uStack_170;
  local_1a8 = local_168;
  local_1a0 = (undefined4)uStack_160;
  local_1b8 = *(undefined8 *)(param_1 + 200);
  local_1b0 = *(undefined4 *)(param_1 + 0xd0);
  local_1c0 = 0;
  FUN_14835ec30(&local_150);
  iVar8 = *(int *)(param_1 + 0xf8);
  if (0 < iVar8) {
    local_b8 = *(undefined8 *)(param_1 + 8);
    local_90 = 0;
    local_88 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_84 = 0xffffffff00000080;
    local_7c = 0;
    local_70 = 0;
    local_68 = 0;
    FUN_148331be6(&local_b8,&uStack_110);
    local_f8[0] = 0;
    local_e8 = (longlong *)0x0;
    FUN_146c83692(&local_b8,iVar8,0,local_f8);
    if (local_f8[0] != 0) {
      plVar7 = local_e8;
      if (local_e8 == (longlong *)0x0) {
        plVar7 = local_d8;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    FUN_140619b9c(&local_b0,local_f8);
    if (CONCAT71(uStack_10f,uStack_110) != 0) {
      FUN_1400020a8();
    }
    uStack_110 = (undefined1)local_f8[0];
    uStack_10f = (undefined7)((ulonglong)local_f8[0] >> 8);
    local_108 = (int)local_f8[1];
    uStack_104 = (undefined4)((ulonglong)local_f8[1] >> 0x20);
    local_68 = 0;
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    FUN_1447a082e(&local_b0);
  }
  if (*(char *)(param_1 + 0x10c) == '\x01') {
    if (local_108 == 0) {
      uVar3 = 0xffffffff;
      iVar8 = -1;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 8);
      if (*(char *)(param_1 + 0x118) == '\0') {
        FUN_148376cfe(&local_b8,uVar4,*(undefined8 *)(param_1 + 0x110));
        iVar8 = uStack_a8._4_4_;
        uStack_a8 = CONCAT44(uStack_a8._4_4_ + 1,(undefined4)uStack_a8);
        lVar5 = (longlong)local_108;
        if (lVar5 != 0) {
          lVar6 = CONCAT71(uStack_10f,uStack_110);
          lVar9 = 0;
          do {
            FUN_14837b7e4(&local_b8,*(undefined4 *)(lVar6 + lVar9),iVar8,uVar4);
            lVar9 = lVar9 + 4;
          } while (lVar5 * 4 != lVar9);
        }
      }
      else {
        FUN_1483769fe(&local_b8,uVar4);
        iVar8 = uStack_a8._4_4_;
        uStack_a8 = CONCAT44(uStack_a8._4_4_ + 1,(undefined4)uStack_a8);
        lVar5 = (longlong)local_108;
        if (lVar5 != 0) {
          lVar6 = CONCAT71(uStack_10f,uStack_110);
          lVar9 = 0;
          do {
            FUN_14837b7e4(&local_b8,*(undefined4 *)(lVar6 + lVar9),iVar8,uVar4);
            lVar9 = lVar9 + 4;
          } while (lVar5 * 4 != lVar9);
        }
      }
      uVar3 = (undefined4)uStack_a8;
    }
    *(int *)(param_1 + 0x120) = iVar8;
    *(undefined4 *)(param_1 + 0x124) = uVar3;
  }
  else if (0 < local_108) {
    local_b8 = local_148;
    cVar2 = FUN_146bc603c(&local_b8,&uStack_110,1);
    if (cVar2 == '\0') {
      local_100 = 1;
    }
  }
  if ((0 < *(int *)(param_1 + 0x108)) || (0.0 < *(double *)(param_1 + 0x100))) {
    local_b8 = *(undefined8 *)(param_1 + 8);
    FUN_146bc6318(&local_b8,0xffefffffffffffff);
  }
  if (local_178 != 0) {
    FUN_1400020a8();
  }
  if (local_168 != 0) {
    FUN_1400020a8();
  }
  local_150 = &PTR_FUN_14ae73d90;
  if (CONCAT71(uStack_10f,uStack_110) != 0) {
    FUN_1400020a8();
  }
LAB_14845def9:
  if ((local_60 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14845e346 FUN_14845e346 body=118 status=ok
// SIG undefined FUN_14845e346(void)

void FUN_14845e346(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148474558(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1484745de(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14845e3be FUN_14845e3be body=118 status=ok
// SIG undefined FUN_14845e3be(void)

void FUN_14845e3be(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14847467a(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_148474700(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14845e436 FUN_14845e436 body=2783 status=ok
// SIG undefined FUN_14845e436(void)

void FUN_14845e436(longlong param_1,char *param_2)

{
  void **ppvVar1;
  uint uVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  void *_Src;
  char cVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined ***pppuVar12;
  longlong *plVar13;
  byte bVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  int iVar17;
  longlong lVar18;
  bool bVar19;
  ulonglong uVar20;
  undefined1 auStack_648 [32];
  undefined8 *local_628;
  undefined1 local_620;
  undefined4 local_618;
  void **local_610;
  longlong local_608;
  undefined8 local_600;
  undefined4 local_5f8;
  uint uStack_5f4;
  undefined4 uStack_5f0;
  uint uStack_5ec;
  double local_5e8;
  void *local_5e0;
  double dStack_5d8;
  undefined ***local_5d0;
  undefined1 local_5c8 [64];
  undefined8 local_588;
  float fStack_580;
  undefined4 uStack_57c;
  undefined8 local_578;
  void *local_568;
  undefined8 uStack_560;
  undefined ***local_558;
  double dStack_550;
  undefined **local_548;
  undefined8 *puStack_540;
  undefined4 local_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  void *local_438;
  double dStack_430;
  undefined ***local_428;
  double dStack_420;
  undefined **local_418;
  undefined8 *puStack_410;
  undefined8 local_408;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3d8;
  undefined4 local_3d0;
  undefined8 local_3cc;
  undefined4 local_3c4;
  longlong local_3b8;
  undefined4 local_3b0;
  longlong local_3a8;
  longlong lStack_3a0;
  undefined8 local_398;
  undefined3 uStack_390;
  undefined5 uStack_38d;
  undefined3 uStack_388;
  undefined8 uStack_385;
  undefined1 *local_37c;
  undefined1 *local_368;
  double dStack_360;
  undefined ***local_358;
  double dStack_350;
  undefined **local_348;
  undefined8 *puStack_340;
  undefined8 local_338;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined **local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0 [10];
  undefined8 local_2a0 [10];
  int local_250;
  undefined8 local_248;
  undefined1 local_240;
  undefined8 local_238;
  undefined8 local_230;
  ushort local_228;
  undefined1 local_226;
  char *local_220;
  undefined1 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined2 local_200;
  undefined1 local_1fe;
  undefined4 local_1fc;
  undefined1 local_1f8;
  undefined8 local_1f4;
  longlong local_1e8;
  undefined8 local_1e0 [5];
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  void *local_190;
  ulonglong uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_154;
  undefined4 local_14c;
  undefined8 local_140;
  undefined4 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_98;
  undefined4 local_90;
  undefined2 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_648;
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_14845e4b0;
    pcVar3 = *(code **)(param_2 + 0x70);
    plVar13 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar13 = *(longlong **)(param_2 + 0x80);
    }
    uVar9 = (**(code **)(*plVar13 + 8))();
    cVar7 = (*pcVar3)(uVar9);
    *param_2 = cVar7;
    if (cVar7 != '\0') goto LAB_14845e4b0;
  }
  if (*(char *)(param_1 + 0x8b) == '\0') {
    bVar14 = *(byte *)(param_1 + 0x88);
    iVar17 = 0;
    if ((ulonglong)bVar14 < 4) {
      iVar17 = *(int *)(&DAT_14aee5990 + (ulonglong)bVar14 * 4);
    }
  }
  else {
    bVar14 = *(byte *)(param_1 + 0x89);
    iVar17 = (*(char *)(param_1 + 0x8a) == '\x01') + 3;
  }
  bVar19 = bVar14 == 1;
  lVar11 = *(longlong *)(param_1 + 0xa0);
  lVar18 = *(longlong *)(param_1 + 8);
  local_2f8 = *(undefined8 *)(*(longlong *)(param_1 + 0x90) + (ulonglong)!bVar19 * 0x10);
  local_300 = *(undefined8 *)(*(longlong *)(param_1 + 0x90) + (ulonglong)bVar19 * 0x10);
  local_308 = &PTR_FUN_149f64a58;
  puVar15 = (undefined8 *)((ulonglong)((uint)bVar19 * 0x50) + lVar11);
  puVar16 = local_2f0;
  for (lVar10 = 10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar16 = *puVar15;
    puVar15 = puVar15 + 1;
    puVar16 = puVar16 + 1;
  }
  puVar15 = (undefined8 *)((ulonglong)((uint)!bVar19 * 0x50) + lVar11);
  puVar16 = local_2a0;
  for (lVar10 = 10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar16 = *puVar15;
    puVar15 = puVar15 + 1;
    puVar16 = puVar16 + 1;
  }
  local_248 = 0x3eb0c6f7a0000000;
  local_240 = 1;
  local_238 = 0x3ff8000000000000;
  local_230 = 0x3fe0000000000000;
  local_228 = 0x101;
  local_226 = 0;
  local_220 = (char *)0x0;
  local_218 = 0;
  local_210 = 0x3fb999999999999a;
  local_208 = 0x3fe0000000000000;
  local_200 = 0x101;
  local_1fe = 1;
  local_1fc = 0x358637bd;
  local_1f8 = 1;
  local_1f4 = 0xffffffff3c23d70a;
  local_1e0[2] = 0;
  local_1e0[0] = 0;
  local_1e0[1] = 0;
  local_1e0[3] = 0x3ff0000000000000;
  local_1e0[4] = DAT_14c8464e0;
  uStack_1b8 = DAT_14c8464e8;
  local_1b0 = DAT_14c8464f0;
  local_1a8 = DAT_14c846510;
  uStack_1a0 = DAT_14c846518;
  local_198 = DAT_14c846520;
  local_160 = 0;
  local_158 = 0;
  local_190 = (void *)0x0;
  uStack_188 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_154 = 0xffffffff00000080;
  local_14c = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_108 = 0;
  local_100 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_fc = 0xffffffff00000080;
  local_f4 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_ac = 0xffffffff00000080;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0x101;
  local_250 = iVar17;
  local_1e8 = lVar18;
  if (param_2 == (char *)0x0) {
LAB_14845e754:
    local_228 = local_228 & 0xff00;
    local_218 = *(undefined1 *)(param_1 + 0xc0);
    local_230 = *(undefined8 *)(param_1 + 0xb8);
    local_220 = param_2;
    FUN_146c6fae2(&local_308);
    puVar15 = local_1e0;
    puVar16 = (undefined8 *)(param_1 + 0x10);
    for (lVar11 = 10; lVar11 != 0; lVar11 = lVar11 + -1) {
      *puVar16 = *puVar15;
      puVar15 = puVar15 + 1;
      puVar16 = puVar16 + 1;
    }
    if (param_2 == (char *)0x0) {
LAB_14845e79c:
      _Src = local_190;
      ppvVar1 = (void **)(param_1 + 200);
      if (ppvVar1 != &local_190) {
        iVar17 = (int)uStack_188;
        lVar11 = (longlong)(int)uStack_188;
        *(int *)(param_1 + 0xd0) = (int)uStack_188;
        if ((int)uStack_188 == 0 && *(int *)(param_1 + 0xd4) == 0) {
          *(undefined4 *)(param_1 + 0xd4) = 0;
        }
        else {
          FUN_144a06ca8(ppvVar1,uStack_188 & 0xffffffff);
          if (iVar17 != 0) {
            memcpy(*ppvVar1,_Src,lVar11 << 2);
          }
        }
      }
      if ((0 < *(int *)(param_1 + 0xd0)) && (*(char *)(param_1 + 0xb0) == '\x01')) {
        lStack_3a0 = 0;
        local_398 = 0;
        uStack_390 = 0;
        uStack_38d = 0;
        uStack_388 = 0;
        uStack_385 = 0;
        local_37c = &DAT_100000002;
        local_368 = (void *)0x0;
        local_358 = (undefined ***)0x0;
        local_328 = 0;
        uStack_320 = 0;
        local_318 = 0;
        uStack_310 = 0;
        local_3a8 = local_1e8;
        local_568 = *ppvVar1;
        local_3d8 = 0;
        local_3d0 = 0;
        local_3f8 = 0;
        uStack_3f0 = 0;
        local_3cc = 0xffffffff00000080;
        local_3c4 = 0;
        local_3b8 = 0;
        local_3b0 = 0;
        uStack_560 = (double)CONCAT44(uStack_560._4_4_,*(int *)(param_1 + 0xd0));
        FUN_146bc855c(&local_3f8,&local_568);
        uVar9 = local_338;
        puStack_410 = puStack_340;
        local_418 = local_348;
        dVar5 = dStack_350;
        local_428 = local_358;
        dVar4 = dStack_360;
        local_438 = local_368;
        local_538 = (undefined4)local_338;
        uStack_534 = local_338._4_4_;
        uStack_530 = uStack_330;
        uStack_52c = uStack_32c;
        local_548 = local_348;
        puStack_540 = puStack_340;
        local_558 = local_358;
        dStack_550 = dStack_350;
        local_568 = local_368;
        uStack_560 = dStack_360;
        local_338 = local_408;
        local_368 = &LAB_143b5ab4c;
        dStack_360 = dStack_430;
        local_358 = (undefined ***)0x0;
        dStack_350 = dStack_420;
        local_348 = &PTR_LAB_14aee5320;
        puStack_340 = &local_3f8;
        dStack_430 = dVar4;
        local_408 = uVar9;
        uStack_400 = uStack_330;
        uStack_3fc = uStack_32c;
        dStack_420 = dVar5;
        if (local_438 != (void *)0x0) {
          pppuVar12 = local_428;
          if (local_428 == (undefined ***)0x0) {
            pppuVar12 = &local_418;
          }
          (*(code *)(*pppuVar12)[2])();
        }
        FUN_146c68b4c(&local_3a8);
        if (param_2 == (char *)0x0) {
LAB_14845e98a:
          local_608 = *(longlong *)(local_1e8 + 0x208);
          local_610 = ppvVar1;
          FUN_145c688c4(local_1e8,&local_568,0);
          if ((longlong)(int)local_398 != 0) {
            dVar4 = (double)(-(ulonglong)(0.0 <= dStack_550 - (double)local_568) &
                            (ulonglong)(dStack_550 - (double)local_568));
            dVar5 = (double)(-(ulonglong)(0.0 <= (double)local_548 - uStack_560) &
                            (ulonglong)((double)local_548 - uStack_560));
            dVar6 = (double)(-(ulonglong)(0.0 <= (double)puStack_540 - (double)local_558) &
                            (ulonglong)((double)puStack_540 - (double)local_558));
            uVar20 = -(ulonglong)(dVar6 <= dVar5);
            dVar5 = (double)(~uVar20 & (ulonglong)dVar6 | uVar20 & (ulonglong)dVar5);
            uVar20 = -(ulonglong)(dVar5 <= dVar4);
            lVar18 = (longlong)(int)local_398 << 6;
            lVar11 = lStack_3a0;
            do {
              iVar17 = *(int *)(local_1e8 + 0x1b0);
              *(int *)(local_1e8 + 0x1b0) = iVar17 + 1;
              FUN_146c7f310(local_5c8,lVar11);
              FUN_1483150ae(&local_568,local_1e8,local_5c8);
              cVar7 = FUN_148315182(&local_568,iVar17);
              if ((local_608 != 0) && (cVar7 != '\0')) {
                local_438 = (void *)0x0;
                dStack_430 = 0.0;
                FUN_14845d8b4(lVar11,&local_438);
                FUN_146bd1842(&local_438,&local_5f8,&local_5e0);
                uStack_5f4 = uStack_5f4 ^ 0x80000000;
                uStack_5ec = uStack_5ec ^ 0x80000000;
                local_5e8 = -local_5e8;
                if (local_438 != (void *)0x0) {
                  FUN_1400020a8();
                }
                local_600 = *(undefined8 *)(param_1 + 8);
                dStack_420 = 0.0;
                local_418 = (undefined **)0x0;
                puStack_410 = (undefined8 *)0x0;
                local_408 = 0x3ff0000000000000;
                local_438 = local_5e0;
                dStack_430 = dStack_5d8;
                local_428 = local_5d0;
                local_578 = DAT_14c8463c8;
                local_588 = CONCAT44(DAT_14c8463b8._4_4_,(undefined4)DAT_14c8463b8);
                fStack_580 = (float)(undefined4)DAT_14c8463c0;
                uStack_57c = DAT_14c8463c0._4_4_;
                FUN_146bfb7f2(&dStack_420,&local_588,&local_5f8);
                fStack_580 = (float)local_5e8;
                local_588 = CONCAT44((float)(double)CONCAT44(uStack_5ec,uStack_5f0),
                                     (float)(double)CONCAT44(uStack_5f4,local_5f8));
                FUN_146bc9b9c(&local_600,&uStack_560,&local_588);
                local_588 = DAT_14c84635c;
                local_618 = 0;
                local_620 = 1;
                local_628 = &local_588;
                FUN_146bca23e(&local_600,&uStack_560,&local_438,
                              (float)(1.0 / (double)(uVar20 & (ulonglong)dVar4 |
                                                    ~uVar20 & (ulonglong)dVar5)));
              }
              FUN_148315ddc(&local_568);
              lVar11 = lVar11 + 0x40;
              lVar18 = lVar18 + -0x40;
            } while (lVar18 != 0);
          }
          local_568 = (void *)0x0;
          uStack_560 = 0.0;
          iVar17 = *(int *)(param_1 + 0xd0);
          if ((longlong)iVar17 != 0) {
            lVar11 = *(longlong *)(param_1 + 200);
            lVar18 = 0;
            do {
              dVar4 = uStack_560;
              uVar2 = *(uint *)(lVar11 + lVar18);
              if ((-1 < (int)uVar2) &&
                 ((int)uVar2 < *(int *)(local_1e8 + 0x1d0) * 0x200 + *(int *)(local_1e8 + 0x1d4))) {
                if (((ushort)(*(short *)(*(longlong *)
                                          (*(longlong *)(local_1e8 + 0x1d8) +
                                          (ulonglong)(uVar2 >> 9) * 8) +
                                        (ulonglong)(uVar2 & 0x1ff) * 2) - 1U) < 0xfffe) &&
                   (*(int *)(*(longlong *)
                              (*(longlong *)(local_1e8 + 0x1c0) + (ulonglong)(uVar2 >> 9) * 8) + 0xc
                            + (ulonglong)((uVar2 & 0x1ff) << 4)) == -1)) {
                  lVar10 = (longlong)(int)uStack_560;
                  uVar8 = (int)uStack_560 + 1;
                  uStack_560 = (double)CONCAT44(uStack_560._4_4_,uVar8);
                  if (uStack_560._4_4_ < uVar8) {
                    FUN_1446f48e2(&local_568,(ulonglong)dVar4 & 0xffffffff);
                  }
                  *(uint *)((longlong)local_568 + lVar10 * 4) = uVar2;
                }
              }
              lVar18 = lVar18 + 4;
            } while ((longlong)iVar17 * 4 != lVar18);
          }
          if (local_610 == &local_568) {
            if (local_568 != (void *)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            if (*(longlong *)(param_1 + 200) != 0) {
              FUN_1400020a8();
            }
            *(void **)(param_1 + 200) = local_568;
            local_568 = (void *)0x0;
            *(int *)(param_1 + 0xd0) = (int)uStack_560;
            *(uint *)(param_1 + 0xd4) = uStack_560._4_4_;
          }
        }
        else if (*param_2 == '\0') {
          pcVar3 = *(code **)(param_2 + 0x70);
          plVar13 = (longlong *)(param_2 + 0x90);
          if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
            plVar13 = *(longlong **)(param_2 + 0x80);
          }
          uVar9 = (**(code **)(*plVar13 + 8))();
          cVar7 = (*pcVar3)(uVar9);
          *param_2 = cVar7;
          if (cVar7 == '\0') goto LAB_14845e98a;
        }
        local_3b0 = 0;
        if (local_3b8 != 0) {
          FUN_1400020a8();
        }
        FUN_1447a082e(&local_3f8);
        FUN_1482f1656(&local_3a8);
      }
    }
    else if (*param_2 == '\0') {
      pcVar3 = *(code **)(param_2 + 0x70);
      plVar13 = (longlong *)(param_2 + 0x90);
      if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
        plVar13 = *(longlong **)(param_2 + 0x80);
      }
      uVar9 = (**(code **)(*plVar13 + 8))();
      cVar7 = (*pcVar3)(uVar9);
      *param_2 = cVar7;
      if (cVar7 == '\0') goto LAB_14845e79c;
    }
  }
  else if (*param_2 == '\0') {
    pcVar3 = *(code **)(param_2 + 0x70);
    plVar13 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar13 = *(longlong **)(param_2 + 0x80);
    }
    uVar9 = (**(code **)(*plVar13 + 8))();
    cVar7 = (*pcVar3)(uVar9);
    *param_2 = cVar7;
    if (cVar7 == '\0') goto LAB_14845e754;
  }
  FUN_146ec7826(&local_308);
LAB_14845e4b0:
  if ((local_80 ^ (ulonglong)auStack_648) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14845ef16 FUN_14845ef16 body=1097 status=ok
// SIG undefined FUN_14845ef16(void)

void FUN_14845ef16(longlong param_1,longlong param_2,longlong *param_3)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [4];
  uint local_9c;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar14 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  uVar11 = *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24);
  if ((uVar11 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x28) - 1U))) {
    uVar14 = 1;
    uVar13 = 1;
    if (1 < (int)uVar11) {
      uVar14 = (ulonglong)uVar11;
    }
    do {
      uVar15 = uVar13;
      if ((uint)uVar14 == uVar15) goto LAB_14845ef9a;
      uVar13 = uVar15 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x28))[uVar15 >> 9] +
                                         (ulonglong)(uVar15 & 0x1ff) * 2) - 1U));
    uVar14 = (ulonglong)uVar15;
  }
LAB_14845ef9a:
  if ((uint)uVar14 != uVar11) {
    do {
      uVar13 = (uint)uVar14;
      local_9c = uVar13;
      if (((int)uVar13 < 0) ||
         (*(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24) <= (int)uVar13)) {
LAB_14845f035:
        FUN_1447cbafe(&local_98,local_a0,&local_9c,0);
      }
      else {
        if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                          (*(longlong *)(param_2 + 0x28) + (uVar14 >> 9) * 8) +
                                        (ulonglong)(uVar13 & 0x1ff) * 2) - 1U)) goto LAB_14845f035;
        uVar7 = (ulonglong)(uint)((int)(uVar14 >> 9) << 3);
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar7);
        lVar6 = (ulonglong)((uVar13 & 0x1ff) << 3) * 3;
        lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x10) + uVar7);
        if ((((*(double *)(lVar4 + lVar6) != *(double *)(lVar5 + lVar6)) ||
             (NAN(*(double *)(lVar4 + lVar6)) || NAN(*(double *)(lVar5 + lVar6)))) ||
            (dVar2 = *(double *)(lVar4 + 8 + lVar6), pdVar1 = (double *)(lVar5 + 8 + lVar6),
            dVar2 != *pdVar1)) || (NAN(dVar2) || NAN(*pdVar1))) goto LAB_14845f035;
        dVar2 = *(double *)(lVar4 + 0x10 + lVar6);
        pdVar1 = (double *)(lVar5 + 0x10 + lVar6);
        if ((dVar2 != *pdVar1) || (NAN(dVar2) || NAN(*pdVar1))) goto LAB_14845f035;
      }
      uVar15 = uVar13 + 1;
      if ((int)(uVar13 + 1) < (int)uVar11) {
        uVar15 = uVar11;
      }
      do {
        if (uVar15 - 1 == (int)uVar14) {
          uVar14 = (ulonglong)uVar15;
          break;
        }
        uVar13 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar13;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_1 + 0x28) +
                                             (ulonglong)(uVar13 >> 9) * 8) +
                                           (ulonglong)(uVar13 & 0x1ff) * 2) - 1U));
    } while ((uint)uVar14 != uVar11);
  }
  uVar13 = *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144);
  uVar11 = 0;
  if ((uVar13 != 0) &&
     (uVar11 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x148) - 1U))) {
    uVar15 = 1;
    uVar8 = 1;
    if (1 < (int)uVar13) {
      uVar15 = uVar13;
    }
    do {
      uVar11 = uVar15;
      if (uVar15 == uVar8) break;
      uVar9 = uVar8 >> 9;
      uVar12 = uVar8 & 0x1ff;
      uVar11 = uVar8;
      uVar8 = uVar8 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x148))[uVar9] +
                                         (ulonglong)uVar12 * 2) - 1U));
  }
  if (uVar11 != uVar13) {
    do {
      if (((int)uVar11 < 0) ||
         (*(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144) <= (int)uVar11)) {
LAB_14845f211:
        iVar3 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
          FUN_1446f48e2(param_3,iVar3);
        }
        *(uint *)(*param_3 + (longlong)iVar3 * 4) = uVar11;
      }
      else {
        if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                          (*(longlong *)(param_2 + 0x148) +
                                          (ulonglong)(uVar11 >> 9) * 8) +
                                        (ulonglong)(uVar11 & 0x1ff) * 2) - 1U)) goto LAB_14845f211;
        uVar14 = (ulonglong)((uVar11 >> 9) << 3);
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x130) + uVar14);
        lVar6 = (ulonglong)((uVar11 & 0x1ff) << 2) * 3;
        uVar15 = *(uint *)(lVar4 + lVar6);
        lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x130) + uVar14);
        if (((uVar15 != *(uint *)(lVar5 + lVar6)) ||
            (uVar8 = *(uint *)(lVar4 + 4 + lVar6), uVar8 != *(uint *)(lVar5 + 4 + lVar6))) ||
           (uVar9 = *(uint *)(lVar4 + 8 + lVar6), uVar9 != *(uint *)(lVar5 + 8 + lVar6)))
        goto LAB_14845f211;
        if ((int)uStack_90 != local_64) {
          puVar10 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar10 = local_60;
          }
          uVar12 = local_50 - 1;
          for (iVar3 = *(int *)(puVar10 + (ulonglong)(uVar12 & uVar15) * 4); iVar3 != -1;
              iVar3 = *(int *)(local_98 + (longlong)iVar3 * 0xc + 4)) {
            if (*(uint *)(local_98 + (longlong)iVar3 * 0xc) == uVar15) goto LAB_14845f211;
          }
          for (iVar3 = *(int *)(puVar10 + (ulonglong)(uVar12 & uVar8) * 4); iVar3 != -1;
              iVar3 = *(int *)(local_98 + (longlong)iVar3 * 0xc + 4)) {
            if (*(uint *)(local_98 + (longlong)iVar3 * 0xc) == uVar8) goto LAB_14845f211;
          }
          for (iVar3 = *(int *)(puVar10 + (ulonglong)(uVar12 & uVar9) * 4); iVar3 != -1;
              iVar3 = *(int *)(local_98 + (longlong)iVar3 * 0xc + 4)) {
            if (*(uint *)(local_98 + (longlong)iVar3 * 0xc) == uVar9) goto LAB_14845f211;
          }
        }
      }
      uVar15 = uVar11 + 1;
      if ((int)(uVar11 + 1) < (int)uVar13) {
        uVar15 = uVar13;
      }
      do {
        uVar8 = uVar15;
        if (uVar15 - 1 == uVar11) break;
        uVar11 = uVar11 + 1;
        uVar8 = uVar11;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_1 + 0x148) +
                                             (ulonglong)(uVar11 >> 9) * 8) +
                                           (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
      uVar11 = uVar8;
    } while (uVar11 != uVar13);
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_98);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14845f360 FUN_14845f360 body=3195 status=ok
// SIG undefined FUN_14845f360(void)

void FUN_14845f360(longlong param_1,char *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  code *pcVar5;
  longlong lVar6;
  double dVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  char cVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined **ppuVar16;
  int *piVar17;
  longlong *plVar18;
  int iVar19;
  longlong lVar20;
  undefined1 *puVar21;
  uint uVar22;
  int *piVar23;
  uint uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  longlong *plVar28;
  uint uVar29;
  uint uVar30;
  ulonglong uVar31;
  uint uVar32;
  float fVar33;
  double dVar34;
  undefined1 auStack_4f8 [32];
  undefined1 *local_4d8;
  undefined1 local_4d0;
  int *local_4c0;
  int *local_4b8;
  undefined1 local_4ac [4];
  double local_4a8;
  double dStack_4a0;
  double local_498;
  double local_490;
  double local_488;
  undefined4 local_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  int local_474;
  undefined1 local_470 [8];
  undefined1 *local_468;
  int local_460;
  undefined **local_450;
  undefined8 local_448;
  undefined **local_440;
  undefined8 local_438 [10];
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  double local_3a0;
  uint local_398;
  undefined8 local_390;
  undefined1 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined1 local_370;
  undefined2 local_36f;
  undefined8 local_368;
  undefined1 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined2 local_348;
  undefined1 local_346;
  undefined4 local_344;
  undefined1 local_340;
  undefined8 local_33c;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  double local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined8 local_29c;
  undefined4 local_294;
  undefined8 local_288;
  undefined4 local_280;
  undefined1 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_250;
  undefined4 local_248;
  undefined8 local_244;
  undefined4 local_23c;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1f4;
  undefined4 local_1ec;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined2 local_1d0;
  undefined1 local_1c8 [80];
  undefined1 local_178;
  undefined **local_170;
  undefined1 local_168 [152];
  undefined8 local_d0 [10];
  undefined4 local_80;
  undefined1 local_7c;
  undefined1 local_78 [24];
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_4f8;
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_14845f42f;
    pcVar5 = *(code **)(param_2 + 0x70);
    plVar18 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar18 = *(longlong **)(param_2 + 0x80);
    }
    uVar15 = (**(code **)(*plVar18 + 8))();
    cVar13 = (*pcVar5)(uVar15);
    *param_2 = cVar13;
    if (cVar13 != '\0') goto LAB_14845f42f;
  }
  local_4d0 = 1;
  local_4d8 = (undefined1 *)CONCAT71(local_4d8._1_7_,1);
  FUN_146c005f0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x88),1,1);
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x1a8) == '\0') {
    FUN_14582eef4();
  }
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_14845f42f;
    pcVar5 = *(code **)(param_2 + 0x70);
    plVar18 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar18 = *(longlong **)(param_2 + 0x80);
    }
    uVar15 = (**(code **)(*plVar18 + 8))();
    cVar13 = (*pcVar5)(uVar15);
    *param_2 = cVar13;
    if (cVar13 != '\0') goto LAB_14845f42f;
  }
  memset(local_168,0,0x91);
  local_170 = &PTR_FUN_14aee4f78;
  local_60 = 0x600000000;
  local_80 = 0;
  puVar25 = (undefined8 *)(param_1 + 0xe8);
  puVar26 = local_d0;
  for (lVar20 = 10; lVar20 != 0; lVar20 = lVar20 + -1) {
    *puVar26 = *puVar25;
    puVar25 = puVar25 + 1;
    puVar26 = puVar26 + 1;
  }
  if (*(undefined4 **)(param_1 + 0x138) != (undefined4 *)0x0) {
    local_80 = **(undefined4 **)(param_1 + 0x138);
  }
  local_7c = *(undefined1 *)(param_1 + 0x14a);
  local_58 = *(undefined8 *)(param_1 + 0x170);
  local_50 = *(undefined1 *)(param_1 + 0x148);
  if (local_78 != (undefined1 *)(param_1 + 0x150)) {
    iVar19 = *(int *)(param_1 + 0x168);
    local_60 = CONCAT44(local_60._4_4_,iVar19);
    FUN_14847479c(local_78,iVar19,6);
    if ((longlong)iVar19 != 0) {
      memcpy(local_78,(undefined1 *)(param_1 + 0x150),(longlong)iVar19 << 2);
    }
  }
  FUN_14845ffdc(&local_170);
  ppuVar16 = (undefined **)FUN_14001cc68(0x220,0x10);
  FUN_146c00d92(ppuVar16,&local_170);
  if (ppuVar16[0x41] != (undefined *)0x0) {
    FUN_14582ed9a();
    uVar32 = *(int *)(ppuVar16 + 0x28) * 0x200 + *(int *)((longlong)ppuVar16 + 0x144);
    uVar24 = 0;
    if ((uVar32 != 0) && (uVar24 = 0, 0xfffd < (ushort)(**(short **)ppuVar16[0x29] - 1U))) {
      uVar31 = 1;
      uVar14 = 1;
      if (1 < (int)uVar32) {
        uVar14 = uVar32;
      }
      do {
        uVar29 = (uint)uVar31;
        uVar24 = uVar14;
        if (uVar14 == uVar29) break;
        uVar8 = uVar31 >> 9;
        uVar31 = (ulonglong)(uVar29 + 1);
        uVar24 = uVar29;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)((longlong)ppuVar16[0x29] + uVar8 * 8) +
                                           (ulonglong)(uVar29 & 0x1ff) * 2) - 1U));
    }
    if (uVar24 != uVar32) {
      lVar20 = *(longlong *)(ppuVar16[0x41] + 0x48);
      uVar4 = *(undefined4 *)(param_1 + 0x14c);
      do {
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(lVar20 + 0x20) + (ulonglong)(uVar24 >> 9) * 8) +
         (ulonglong)(uVar24 & 0x1ff) * 4) = uVar4;
        uVar14 = uVar24 + 1;
        if ((int)(uVar24 + 1) < (int)uVar32) {
          uVar14 = uVar32;
        }
        do {
          uVar29 = uVar14;
          if (uVar14 - 1 == uVar24) break;
          uVar24 = uVar24 + 1;
          uVar29 = uVar24;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (ppuVar16[0x29] + (ulonglong)(uVar24 >> 9) * 8) +
                                             (ulonglong)(uVar24 & 0x1ff) * 2) - 1U));
        uVar24 = uVar29;
      } while (uVar24 != uVar32);
    }
    fVar33 = *(float *)(param_1 + 0x178);
    if (*(char *)(param_1 + 0x17c) != '\0') {
      fVar33 = fVar33 * 0.01;
    }
    local_4d8 = local_1c8;
    local_178 = 0;
    local_450 = ppuVar16;
    FUN_146bcad02(&local_450,fVar33,*(char *)(param_1 + 0x17c),0);
    if (*(int *)(ppuVar16[0x41] + 0x28) < 1) {
      lVar20 = 0;
    }
    else {
      lVar20 = **(longlong **)(ppuVar16[0x41] + 0x20);
    }
    uVar32 = *(int *)(lVar20 + 8) * 0x200 + *(int *)(lVar20 + 0xc);
    uVar24 = 0;
    if ((uVar32 != 0) &&
       (uVar24 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar20 + 0x10) - 1U))) {
      uVar14 = 1;
      uVar29 = 1;
      if (1 < (int)uVar32) {
        uVar14 = uVar32;
      }
      do {
        uVar22 = uVar29;
        uVar24 = uVar14;
        if (uVar14 == uVar22) break;
        uVar29 = uVar22 + 1;
        uVar24 = uVar22;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar20 + 0x10))[uVar22 >> 9] +
                                           (ulonglong)(uVar22 & 0x1ff) * 2) - 1U));
    }
joined_r0x00014845f9d1:
    uVar14 = uVar24;
    if (uVar14 != uVar32) {
      lVar2 = *(longlong *)(*(longlong *)(lVar20 + 0x48) + (ulonglong)(uVar14 >> 5 & 0x3fffff8));
      uVar31 = (ulonglong)((uVar14 & 0xff) << 3);
      *(float *)(lVar2 + 4 + uVar31) = 1.0 - *(float *)(lVar2 + 4 + uVar31);
      uVar29 = uVar14 + 1;
      if ((int)(uVar14 + 1) < (int)uVar32) {
        uVar29 = uVar32;
      }
      do {
        uVar24 = uVar29;
        if (uVar29 - 1 == uVar14) break;
        uVar14 = uVar14 + 1;
        uVar24 = uVar14;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar20 + 0x10) +
                                             (ulonglong)(uVar14 >> 9) * 8) +
                                           (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
      goto joined_r0x00014845f9d1;
    }
  }
  lVar20 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x208);
  if (lVar20 == 0) {
    FUN_14582ed12(*(longlong *)(param_1 + 8));
    lVar20 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x208);
  }
  if (*(longlong *)(lVar20 + 0x48) == 0) {
    FUN_14582ed9a();
  }
  if (param_2 == (char *)0x0) {
LAB_14845f5b5:
    bVar3 = *(byte *)(param_1 + 0x148);
    local_448 = *(undefined8 *)(param_1 + 8);
    local_3a0 = DAT_14c846520;
    local_3b0 = CONCAT44(DAT_14c846510._4_4_,(undefined4)DAT_14c846510);
    uStack_3a8 = CONCAT44(DAT_14c846518._4_4_,(undefined4)DAT_14c846518);
    local_3c8 = DAT_14c8464e0;
    uStack_3c0 = DAT_14c8464e8;
    local_3b8 = DAT_14c8464f0;
    puVar25 = (undefined8 *)(param_1 + 0x98);
    local_450 = &PTR_FUN_149f64a58;
    puVar26 = puVar25;
    puVar27 = local_438;
    for (lVar20 = 10; lVar20 != 0; lVar20 = lVar20 + -1) {
      *puVar27 = *puVar26;
      puVar26 = puVar26 + 1;
      puVar27 = puVar27 + 1;
    }
    local_3d8 = 0;
    local_3e8 = 0;
    uStack_3e0 = 0;
    local_3d0 = 0x3ff0000000000000;
    local_398 = (uint)bVar3;
    local_390 = 0x3eb0c6f7a0000000;
    local_388 = 1;
    local_380 = 0x3ff8000000000000;
    local_378 = 0x3fe0000000000000;
    local_36f = 1;
    local_368 = 0;
    local_358 = 0x3fb999999999999a;
    local_350 = 0x3fe0000000000000;
    local_348 = 0x101;
    local_346 = 1;
    local_344 = 0x358637bd;
    local_340 = 1;
    local_33c = 0xffffffff3c23d70a;
    local_318 = 0;
    local_328 = 0;
    uStack_320 = 0;
    local_310 = 0x3ff0000000000000;
    local_308 = DAT_14c8464e0;
    uStack_300 = DAT_14c8464e8;
    local_2f8 = DAT_14c8464f0;
    local_2f0 = (undefined4)DAT_14c846510;
    uStack_2ec = DAT_14c846510._4_4_;
    uStack_2e8 = (undefined4)DAT_14c846518;
    uStack_2e4 = DAT_14c846518._4_4_;
    local_2e0 = DAT_14c846520;
    local_2a8 = 0;
    local_2a0 = 0;
    local_2d8 = 0;
    uStack_2d0 = 0;
    local_2c8 = 0;
    uStack_2c0 = 0;
    local_29c = 0xffffffff00000080;
    local_294 = 0;
    local_288 = 0;
    local_280 = 0;
    local_250 = 0;
    local_248 = 0;
    local_270 = 0;
    uStack_268 = 0;
    local_244 = 0xffffffff00000080;
    local_23c = 0;
    local_230 = 0;
    local_228 = 0;
    local_200 = 0;
    local_1f8 = 0;
    local_220 = 0;
    uStack_218 = 0;
    local_1f4 = 0xffffffff00000080;
    local_1ec = 0;
    local_1e0 = 0;
    local_1d8 = 0;
    local_1d0 = 0x101;
    local_370 = 1;
    local_360 = 1;
    local_278 = 1;
    local_440 = ppuVar16;
    local_330 = local_448;
    FUN_146c6fae2(&local_450);
    if (param_2 == (char *)0x0) {
LAB_14845f7fc:
      if (*(char *)(param_1 + 0x149) == '\x01') {
        puVar26 = puVar25;
        puVar27 = (undefined8 *)(param_1 + 0x10);
        for (lVar20 = 10; lVar20 != 0; lVar20 = lVar20 + -1) {
          *puVar27 = *puVar26;
          puVar26 = puVar26 + 1;
          puVar27 = puVar27 + 1;
        }
      }
      else {
        FUN_145c688c4(*(undefined8 *)(param_1 + 8),&local_4a8,0);
        dVar12 = DAT_14c846520;
        uVar11 = DAT_14c846518._4_4_;
        uVar10 = (undefined4)DAT_14c846518;
        uVar9 = DAT_14c846510._4_4_;
        uVar4 = (undefined4)DAT_14c846510;
        dVar7 = local_498 + (double)CONCAT44(uStack_47c,local_480);
        dVar34 = dStack_4a0 + local_488;
        local_490 = local_4a8 + local_490;
        local_498 = DAT_14c846520;
        local_4a8 = (double)CONCAT44(DAT_14c846510._4_4_,(undefined4)DAT_14c846510);
        dStack_4a0 = (double)CONCAT44(DAT_14c846518._4_4_,(undefined4)DAT_14c846518);
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(undefined8 *)(param_1 + 0x20) = 0;
        *(undefined8 *)(param_1 + 0x28) = 0x3ff0000000000000;
        *(double *)(param_1 + 0x30) = local_490 * 0.5;
        *(double *)(param_1 + 0x38) = dVar34 * 0.5;
        *(double *)(param_1 + 0x40) = dVar7 * 0.5;
        *(undefined4 *)(param_1 + 0x48) = uVar4;
        *(undefined4 *)(param_1 + 0x4c) = uVar9;
        *(undefined4 *)(param_1 + 0x50) = uVar10;
        *(undefined4 *)(param_1 + 0x54) = uVar11;
        *(double *)(param_1 + 0x58) = dVar12;
      }
      FUN_146c3cfa5(*(undefined8 *)(param_1 + 8),puVar25,1);
      if (param_2 == (char *)0x0) {
LAB_14845faf9:
        local_488 = 0.0;
        local_480 = 0;
        local_4a8 = 0.0;
        dStack_4a0 = 0.0;
        uStack_47c = 0x80;
        uStack_478 = 0xffffffff;
        local_474 = 0;
        local_468 = (undefined1 *)0x0;
        local_460 = 0;
        if (*(int *)(param_1 + 400) == 4) {
          piVar23 = (int *)(param_1 + 0x180);
          lVar20 = -4;
          do {
            piVar17 = (int *)FUN_146bcd17e(&local_270,(int)lVar20 + 5);
            if (piVar17 != (int *)0x0) {
              if (*piVar23 == -1) {
                *piVar23 = *piVar17;
              }
              else {
                local_4c0 = piVar17;
                local_4b8 = piVar23;
                FUN_140263e2a(&local_4a8,local_4ac,&local_4c0,0);
              }
            }
            piVar23 = piVar23 + 1;
            lVar20 = lVar20 + 1;
          } while (lVar20 != 0);
          if (dStack_4a0._0_4_ == local_474) goto LAB_14845fc85;
          lVar20 = *(longlong *)(param_1 + 8);
          uVar32 = *(int *)(lVar20 + 0x140) * 0x200 + *(int *)(lVar20 + 0x144);
          uVar24 = 0;
          if ((uVar32 != 0) &&
             (uVar24 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar20 + 0x148) - 1U))) {
            uVar14 = 1;
            uVar29 = 1;
            if (1 < (int)uVar32) {
              uVar14 = uVar32;
            }
            do {
              uVar24 = uVar14;
              if (uVar14 == uVar29) break;
              uVar22 = uVar29 >> 9;
              uVar30 = uVar29 & 0x1ff;
              uVar24 = uVar29;
              uVar29 = uVar29 + 1;
            } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar20 + 0x148))[uVar22] +
                                                 (ulonglong)uVar30 * 2) - 1U));
          }
          if (uVar24 != uVar32) {
            do {
              uVar14 = FUN_146bc96d4(*(undefined8 *)(param_1 + 8),uVar24);
              if (dStack_4a0._0_4_ != local_474) {
                puVar21 = local_468;
                if (local_468 == (undefined1 *)0x0) {
                  puVar21 = local_470;
                }
                iVar19 = *(int *)(puVar21 + (ulonglong)(local_460 - 1U & uVar14) * 4);
                while (iVar19 != -1) {
                  lVar2 = (longlong)local_4a8 + (longlong)iVar19 * 0x10;
                  if (*(uint *)((longlong)local_4a8 + (longlong)iVar19 * 0x10) == uVar14) {
                    if (((int *)(lVar2 + 4) != (int *)0x0 && lVar2 != 0) &&
                       (lVar6 = *(longlong *)(param_1 + 8), *(char *)(lVar6 + 0x1a8) == '\x01')) {
                      iVar19 = *(int *)(lVar2 + 4);
                      *(int *)(*(longlong *)
                                (*(longlong *)(lVar6 + 0x198) + (ulonglong)(uVar24 >> 9) * 8) +
                              (ulonglong)(uVar24 & 0x1ff) * 4) = iVar19;
                      iVar19 = iVar19 + 1;
                      if (iVar19 <= *(int *)(lVar6 + 0x1b0)) {
                        iVar19 = *(int *)(lVar6 + 0x1b0);
                      }
                      *(int *)(lVar6 + 0x1b0) = iVar19;
                    }
                    break;
                  }
                  iVar19 = *(int *)(lVar2 + 8);
                }
              }
              uVar14 = uVar24 + 1;
              if ((int)(uVar24 + 1) < (int)uVar32) {
                uVar14 = uVar32;
              }
              do {
                uVar29 = uVar14;
                if (uVar14 - 1 == uVar24) break;
                uVar24 = uVar24 + 1;
                uVar29 = uVar24;
              } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                     (*(longlong *)(lVar20 + 0x148) +
                                                     (ulonglong)(uVar24 >> 9) * 8) +
                                                   (ulonglong)(uVar24 & 0x1ff) * 2) - 1U));
              uVar24 = uVar29;
            } while (uVar24 != uVar32);
          }
          if (param_2 == (char *)0x0) goto LAB_14845fc85;
          if (*param_2 == '\0') {
            pcVar5 = *(code **)(param_2 + 0x70);
            plVar18 = (longlong *)(param_2 + 0x90);
            if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
              plVar18 = *(longlong **)(param_2 + 0x80);
            }
            uVar15 = (**(code **)(*plVar18 + 8))();
            cVar13 = (*pcVar5)(uVar15);
            *param_2 = cVar13;
            if (cVar13 == '\0') goto LAB_14845fc85;
          }
        }
        else {
LAB_14845fc85:
          if (*(char *)(param_1 + 0x1a8) == '\x01') {
            plVar18 = (longlong *)FUN_14001cc68(0x20,0x10);
            plVar18[1] = (longlong)&DAT_100000001;
            *plVar18 = (longlong)&PTR_FUN_14aee5340;
            plVar18[2] = 0;
            plVar18[3] = 0;
            if (plVar18 == (longlong *)0x0) {
              *(undefined8 *)(param_1 + 0x198) = 0x10;
              plVar28 = *(longlong **)(param_1 + 0x1a0);
              if (plVar28 != (longlong *)0x0) {
                *(undefined8 *)(param_1 + 0x1a0) = 0;
LAB_14845fcf2:
                LOCK();
                plVar1 = plVar28 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plVar28)(plVar28);
                  LOCK();
                  piVar23 = (int *)((longlong)plVar28 + 0xc);
                  *piVar23 = *piVar23 + -1;
                  UNLOCK();
                  if (*piVar23 == 0) {
                    (**(code **)(*plVar28 + 0x10))(plVar28);
                  }
                }
                if (plVar18 != (longlong *)0x0) goto LAB_14845fefd;
              }
            }
            else {
              LOCK();
              *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
              UNLOCK();
              *(longlong **)(param_1 + 0x198) = plVar18 + 2;
              plVar28 = *(longlong **)(param_1 + 0x1a0);
              if (plVar18 == plVar28) {
                LOCK();
                plVar28 = plVar18 + 1;
                *(int *)plVar28 = (int)*plVar28 + -1;
                UNLOCK();
                if ((int)*plVar28 == 0) {
                  (**(code **)*plVar18)(plVar18);
                  LOCK();
                  piVar23 = (int *)((longlong)plVar18 + 0xc);
                  *piVar23 = *piVar23 + -1;
                  UNLOCK();
                  if (*piVar23 == 0) {
                    (**(code **)(*plVar18 + 0x10))(plVar18);
                  }
                }
              }
              else {
                *(longlong **)(param_1 + 0x1a0) = plVar18;
                if (plVar28 != (longlong *)0x0) goto LAB_14845fcf2;
              }
LAB_14845fefd:
              LOCK();
              plVar28 = plVar18 + 1;
              *(int *)plVar28 = (int)*plVar28 + -1;
              UNLOCK();
              if ((int)*plVar28 == 0) {
                (**(code **)*plVar18)(plVar18);
                LOCK();
                piVar23 = (int *)((longlong)plVar18 + 0xc);
                *piVar23 = *piVar23 + -1;
                UNLOCK();
                if (*piVar23 == 0) {
                  (**(code **)(*plVar18 + 0x10))(plVar18);
                }
              }
            }
            FUN_14845ef16(*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 8),
                          *(undefined8 *)(param_1 + 0x198));
          }
        }
        local_460 = 0;
        if (local_468 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        FUN_144a6bfa8(&local_4a8);
      }
      else if (*param_2 == '\0') {
        pcVar5 = *(code **)(param_2 + 0x70);
        plVar18 = (longlong *)(param_2 + 0x90);
        if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
          plVar18 = *(longlong **)(param_2 + 0x80);
        }
        uVar15 = (**(code **)(*plVar18 + 8))();
        cVar13 = (*pcVar5)(uVar15);
        *param_2 = cVar13;
        if (cVar13 == '\0') goto LAB_14845faf9;
      }
    }
    else if (*param_2 == '\0') {
      pcVar5 = *(code **)(param_2 + 0x70);
      plVar18 = (longlong *)(param_2 + 0x90);
      if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
        plVar18 = *(longlong **)(param_2 + 0x80);
      }
      uVar15 = (**(code **)(*plVar18 + 8))();
      cVar13 = (*pcVar5)(uVar15);
      *param_2 = cVar13;
      if (cVar13 == '\0') goto LAB_14845f7fc;
    }
    FUN_146ec7826(&local_450);
  }
  else if (*param_2 == '\0') {
    pcVar5 = *(code **)(param_2 + 0x70);
    plVar18 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar18 = *(longlong **)(param_2 + 0x80);
    }
    uVar15 = (**(code **)(*plVar18 + 8))();
    cVar13 = (*pcVar5)(uVar15);
    *param_2 = cVar13;
    if (cVar13 == '\0') goto LAB_14845f5b5;
  }
  local_170 = &PTR_FUN_14aee4f78;
  FUN_146bd8050();
  if (ppuVar16 != (undefined **)0x0) {
    (**(code **)*ppuVar16)(ppuVar16,1);
  }
LAB_14845f42f:
  if ((local_48 ^ (ulonglong)auStack_4f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14845ffdc FUN_14845ffdc body=221 status=ok
// SIG undefined FUN_14845ffdc(void)

longlong FUN_14845ffdc(longlong param_1)

{
  uint *puVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  FUN_1484718ee();
  iVar3 = *(int *)(param_1 + 0x110);
  if ((longlong)iVar3 != 0) {
    lVar5 = 0;
    do {
      puVar1 = (uint *)(param_1 + 0xf8 + lVar5);
      *puVar1 = *puVar1 & 3;
      lVar5 = lVar5 + 4;
    } while ((longlong)iVar3 * 4 != lVar5);
  }
  if ((*(char *)(param_1 + 0xf4) == '\0') ||
     (((((*(char *)(param_1 + 0xf0) != '\x01' || (*(char *)(param_1 + 0xf2) != '\x01')) ||
        (*(char *)(param_1 + 0xf1) != '\0')) || (uVar4 = 1, *(char *)(param_1 + 0xf3) == '\x01')) &&
      (((*(char *)(param_1 + 0xf1) != '\x01' || (*(char *)(param_1 + 0xf0) != '\0')) ||
       ((*(char *)(param_1 + 0xf3) == '\0' || (uVar4 = 0, *(char *)(param_1 + 0xf2) != '\0'))))))))
  {
    FUN_14847195e(param_1);
  }
  else {
    uVar6 = (ulonglong)uVar4;
    *(undefined1 *)(param_1 + 0xf0 + uVar6) = 1;
    FUN_14847195e(param_1);
    uVar2 = *(undefined1 *)(param_1 + 0xf0 + uVar6);
    *(undefined1 *)(param_1 + 0xf0 + uVar6) = *(undefined1 *)(param_1 + 0xf2 + uVar6);
    *(undefined1 *)(param_1 + 0xf2 + uVar6) = uVar2;
    FUN_14847195e(param_1);
    *(undefined1 *)(param_1 + 0xf2 + uVar6) = 0;
  }
  return param_1;
}



// FUNCTION 1484600ba FUN_1484600ba body=3291 status=ok
// SIG undefined FUN_1484600ba(void)

void FUN_1484600ba(longlong param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  double dVar8;
  undefined8 *puVar9;
  void *_Src;
  undefined1 auVar10 [16];
  bool bVar11;
  char cVar12;
  undefined8 uVar13;
  uint *puVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined8 uVar17;
  longlong lVar18;
  float *pfVar19;
  longlong lVar20;
  float fVar21;
  undefined1 auStack_388 [32];
  float *local_368;
  undefined8 *local_360;
  undefined1 local_358;
  undefined1 local_350;
  longlong *local_348;
  undefined1 *local_340;
  undefined1 **local_338;
  float local_330;
  float local_32c;
  undefined8 *local_328;
  ulonglong uStack_320;
  undefined4 local_318;
  uint uStack_314;
  undefined4 uStack_310;
  uint uStack_30c;
  ulonglong local_308;
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  double local_2f0;
  longlong local_2e8 [2];
  undefined1 *local_2d8;
  uint *local_2d0;
  ulonglong uStack_2c8;
  uint *local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined1 local_2a0;
  void *local_298;
  ulonglong uStack_290;
  undefined8 local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  double local_278;
  undefined8 local_268;
  undefined8 uStack_260;
  ulonglong local_258;
  undefined **local_250;
  undefined1 local_248 [152];
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_154;
  undefined4 local_14c;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 local_110;
  undefined8 local_10c;
  undefined1 local_104;
  undefined8 local_100;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined8 auStack_e8 [4];
  undefined1 local_c8 [12];
  undefined4 uStack_bc;
  double dStack_b8;
  double local_b0;
  undefined **ppuStack_a8;
  code *local_a0;
  undefined8 local_98;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_148460133;
    pcVar3 = *(code **)(param_2 + 0x70);
    plVar16 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar16 = *(longlong **)(param_2 + 0x80);
    }
    uVar13 = (**(code **)(*plVar16 + 8))();
    cVar12 = (*pcVar3)(uVar13);
    *param_2 = cVar12;
    if (cVar12 != '\0') goto LAB_148460133;
  }
  if (((*(int *)(param_1 + 0xa0) < (int)(*(byte *)(param_1 + 0xf9) | 2)) ||
      (*(int *)(param_1 + 0x90) < (int)(*(byte *)(param_1 + 0xf8) | 2))) ||
     (*(int *)(param_1 + 0x90) <= *(int *)(param_1 + 0xb0) - *(int *)(param_1 + 0xdc))) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_388);
  }
  memset(local_248,0,0x91);
  local_250 = &PTR_FUN_149f3c638;
  local_160 = 0;
  local_158 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_154 = 0xffffffff00000080;
  local_14c = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0x3ff0000000000000;
  uStack_128 = 0x3ff0000000000000;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  local_10c = 0x101000042c80000;
  local_104 = 1;
  local_100 = 0x3f847ae147ae147b;
  local_f8 = 1;
  auStack_e8[3] = 0;
  auStack_e8[1] = 0;
  auStack_e8[2] = 0;
  local_f0 = 0;
  auStack_e8[0] = 0;
  FUN_1405b70a4(&local_1b0,param_1 + 0x88);
  FUN_148460dca(&local_1a0,param_1 + 0x98);
  FUN_145c3f772(&local_180,param_1 + 0xa8);
  local_130 = *(undefined8 *)(param_1 + 0x110);
  uStack_128 = *(undefined8 *)(param_1 + 0x118);
  local_110 = *(undefined1 *)(param_1 + 0x130);
  local_120 = *(undefined8 *)(param_1 + 0x120);
  uStack_118 = *(undefined8 *)(param_1 + 0x128);
  local_10c = CONCAT17(*(undefined1 *)(param_1 + 0x10c),
                       CONCAT34(CONCAT12(*(undefined1 *)(param_1 + 0xfa),
                                         CONCAT11(*(undefined1 *)(param_1 + 0xf8),
                                                  *(undefined1 *)(param_1 + 0xf9))),
                                (float)*(double *)(param_1 + 0x138)));
  local_f8 = *(undefined1 *)(param_1 + 0x140);
  local_104 = *(undefined1 *)(param_1 + 0x141);
  local_100 = *(undefined8 *)(param_1 + 0x148);
  FUN_142979d82(&local_250);
  if (param_2 != (char *)0x0) {
    if (*param_2 == '\0') {
      pcVar3 = *(code **)(param_2 + 0x70);
      plVar16 = (longlong *)(param_2 + 0x90);
      if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
        plVar16 = *(longlong **)(param_2 + 0x80);
      }
      uVar13 = (**(code **)(*plVar16 + 8))();
      cVar12 = (*pcVar3)(uVar13);
      *param_2 = cVar12;
      if (cVar12 == '\0') goto LAB_1484603a3;
    }
    goto LAB_148460d83;
  }
LAB_1484603a3:
  FUN_146c00e98(*(undefined8 *)(param_1 + 8),&local_250);
  if (((*(char *)(param_1 + 0xf8) == '\x01') && (*(char *)(param_1 + 0xf9) == '\0')) &&
     (*(int *)(param_1 + 0x108) != 0)) {
    plVar16 = (longlong *)(param_2 + 0x90);
    lVar20 = 0;
    local_348 = plVar16;
    bVar11 = true;
    do {
      bVar7 = bVar11;
      if (param_2 != (char *)0x0) {
        if (*param_2 != '\0') goto LAB_148460d83;
        pcVar3 = *(code **)(param_2 + 0x70);
        plVar15 = *(longlong **)(param_2 + 0x80);
        if (*(longlong **)(param_2 + 0x80) == (longlong *)0x0) {
          plVar15 = plVar16;
        }
        uVar13 = (**(code **)(*plVar15 + 8))();
        cVar12 = (*pcVar3)(uVar13);
        *param_2 = cVar12;
        if (cVar12 != '\0') goto LAB_148460d83;
      }
      local_298 = (void *)0x0;
      uStack_290 = 0;
      FUN_146c5ddfc(*(undefined8 *)(param_1 + 8),auStack_e8 + lVar20 * 2,&local_298);
      local_2d8 = *(undefined1 **)(param_1 + 8);
      local_2b0 = 0;
      uStack_2a8 = 0;
      local_2c0 = (uint *)0x0;
      uStack_2b8 = 0;
      local_2d0 = (uint *)0x0;
      uStack_2c8 = 0;
      local_2a0 = 0;
      FUN_14054c6c4(&local_2d0,auStack_e8 + lVar20 * 2);
      _Src = local_298;
      iVar2 = (int)uStack_290;
      lVar20 = (longlong)(int)uStack_290;
      uStack_2b8 = CONCAT44(uStack_2b8._4_4_,(int)uStack_290);
      if ((int)uStack_290 == 0 && uStack_2b8._4_4_ == 0) {
        uStack_2b8 = uStack_290 & 0xffffffff;
      }
      else {
        FUN_144a06ca8(&local_2c0,uStack_290 & 0xffffffff);
        if (iVar2 != 0) {
          memcpy(local_2c0,_Src,lVar20 << 2);
        }
      }
      if (bVar7) {
        lVar20 = (longlong)(int)(uint)uStack_2c8;
        if (1 < lVar20) {
          lVar18 = 0;
          puVar14 = local_2d0;
          do {
            uVar1 = *puVar14;
            *puVar14 = local_2d0[lVar20 + lVar18 + -1];
            local_2d0[lVar20 + lVar18 + -1] = uVar1;
            lVar18 = lVar18 + -1;
            puVar14 = puVar14 + 1;
          } while (-lVar18 != (ulonglong)((uint)uStack_2c8 >> 1));
        }
        lVar20 = (longlong)(int)(uint)uStack_2b8;
        if (1 < lVar20) {
          lVar18 = 0;
          puVar14 = local_2c0;
          do {
            uVar1 = *puVar14;
            *puVar14 = local_2c0[lVar20 + lVar18 + -1];
            local_2c0[lVar20 + lVar18 + -1] = uVar1;
            lVar18 = lVar18 + -1;
            puVar14 = puVar14 + 1;
          } while (-lVar18 != (ulonglong)((uint)uStack_2b8 >> 1));
        }
      }
      local_2e8[0] = 0;
      local_2e8[1] = 0;
      FUN_14845d8b4(&local_2d8,local_2e8);
      FUN_146bd1842(local_2e8,&local_318,&local_300);
      uStack_314 = uStack_314 ^ 0x80000000;
      uStack_30c = uStack_30c ^ 0x80000000;
      local_308 = local_308 ^ 0x8000000000000000;
      local_328 = (undefined8 *)0x0;
      uStack_320 = 0;
      iVar2 = *(int *)(param_1 + 0x108);
      if (iVar2 == 1) {
        uStack_320 = 1;
        FUN_140bfc2d4(&local_328,0);
        puVar14 = local_2d0;
        puVar9 = local_328;
        *local_328 = 0;
        lVar20 = (longlong)(int)(uint)uStack_2c8;
        *(uint *)(local_328 + 1) = (uint)uStack_2c8;
        if (lVar20 == 0) {
          *(undefined4 *)((longlong)local_328 + 0xc) = 0;
        }
        else {
          FUN_144a06ca8(local_328,uStack_2c8 & 0xffffffff,0);
          memcpy((void *)*puVar9,puVar14,lVar20 << 2);
        }
        uVar13 = *(undefined8 *)(param_1 + 8);
        plVar15 = (longlong *)FUN_14001cc68(0xa0,0x10);
        local_268 = CONCAT44(uStack_314,local_318);
        uStack_260 = CONCAT44(uStack_30c,uStack_310);
        local_258 = local_308;
        local_288 = CONCAT44(uStack_2fc,local_300);
        uStack_280 = uStack_2f8;
        uStack_27c = uStack_2f4;
        local_278 = local_2f0;
        dStack_b8 = 0.0;
        ppuStack_a8 = &PTR_LAB_14aee5540;
        local_a0 = FUN_148266949;
        local_c8._0_8_ = FUN_148483c38;
        local_360 = &local_268;
        local_368 = (float *)&local_288;
        FUN_1483164cc(plVar15,uVar13,&local_328,local_c8);
        plVar16 = local_348;
      }
      else {
        if (iVar2 == 2) {
          lVar20 = *(longlong *)(param_1 + 8);
          plVar15 = (longlong *)FUN_14001cc68(0x68,0x10);
          FUN_146c7f310(local_c8,&local_2d8);
          plVar15[1] = 0;
          plVar15[2] = 0;
          *plVar15 = (longlong)&PTR_FUN_14ae72d10;
          plVar15[3] = lVar20;
          FUN_146c7f310(plVar15 + 4,local_c8);
          lVar20 = -0xffffffff;
        }
        else {
          if (iVar2 != 3) {
            plVar15 = (longlong *)0x0;
            goto LAB_148460816;
          }
          lVar20 = *(longlong *)(param_1 + 8);
          plVar15 = (longlong *)FUN_14001cc68(0x68,0x10);
          FUN_146c7f310(local_c8,&local_2d8);
          plVar15[1] = 0;
          plVar15[2] = 0;
          *plVar15 = (longlong)&PTR_FUN_14ae72d10;
          plVar15[3] = lVar20;
          FUN_146c7f310(plVar15 + 4,local_c8);
          lVar20 = -0x100000000;
        }
        plVar15[0xc] = lVar20;
        FUN_146bc7c1a(local_c8);
      }
LAB_148460816:
      *(int *)(*(longlong *)(param_1 + 8) + 0x1b0) =
           *(int *)(*(longlong *)(param_1 + 8) + 0x1b0) + 1;
      (**(code **)(*plVar15 + 8))(plVar15);
      lVar20 = *(longlong *)(param_1 + 8);
      if (*(longlong *)(lVar20 + 0x208) != 0) {
        local_288 = lVar20;
        if (*(char *)(param_1 + 0xfa) == '\0') {
          FUN_146bc9e14(&local_288,plVar15 + 1);
        }
        local_b0 = 0.0;
        ppuStack_a8 = (undefined **)0x0;
        local_a0 = (code *)0x0;
        local_98 = 0x3ff0000000000000;
        local_c8._4_4_ = uStack_2fc;
        local_c8._0_4_ = local_300;
        uStack_bc = uStack_2f4;
        local_c8._8_4_ = uStack_2f8;
        dStack_b8 = local_2f0;
        local_258 = DAT_14c8463c8;
        local_268 = CONCAT44(DAT_14c8463b8._4_4_,(undefined4)DAT_14c8463b8);
        uStack_260 = CONCAT44(DAT_14c8463c0._4_4_,(undefined4)DAT_14c8463c0);
        FUN_146bfb7f2(&local_b0,&local_268,&local_318);
        local_350 = *(char *)(param_1 + 0x130) != '\x01';
        if ((bool)local_350) {
          local_268 = CONCAT44((float)*(double *)(param_1 + 0x128),
                               (float)*(double *)(param_1 + 0x120));
          dVar4 = *(double *)(param_1 + 0x118);
          dVar5 = *(double *)(param_1 + 0x110);
          pfVar19 = &local_330;
          local_368 = (float *)&local_268;
        }
        else {
          local_268 = CONCAT44((1.0 / (float)local_10c) * (float)*(double *)(param_1 + 0x118),
                               (float)*(double *)(param_1 + 0x110) * (1.0 / (float)local_10c));
          dVar4 = *(double *)(param_1 + 0x128);
          dVar5 = *(double *)(param_1 + 0x120);
          pfVar19 = (float *)&local_268;
          local_368 = &local_330;
        }
        local_32c = (float)dVar4;
        local_330 = (float)dVar5;
        local_358 = 1;
        local_360 = (undefined8 *)((ulonglong)local_360 & 0xffffffff00000000);
        FUN_146bca2ae(&local_288,plVar15 + 1,local_c8,pfVar19);
      }
      FUN_144716727(local_328,uStack_320 & 0xffffffff);
      if (local_328 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if (plVar15 != (longlong *)0x0) {
        (**(code **)*plVar15)(plVar15,1);
      }
      if (local_2e8[0] != 0) {
        FUN_1400020a8();
      }
      FUN_146bc7c1a(&local_2d8);
      if (local_298 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar20 = 1;
      bVar11 = false;
    } while (bVar7);
  }
  if (*(char *)(param_1 + 0xfa) == '\x01') {
    if (param_2 == (char *)0x0) {
LAB_1484603e9:
      dStack_b8 = 0.0;
      stack0xffffffffffffff40 = 0.0;
      local_c8._0_8_ = *(ulonglong *)(param_1 + 8);
      FUN_146c38358();
      if (param_2 == (char *)0x0) {
LAB_14846040d:
        fVar21 = cosf((float)(*(double *)(param_1 + 0x100) * 0.01745329238474369));
        local_268 = CONCAT44(local_268._4_4_,fVar21);
        lVar20 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x208);
        if (*(int *)(lVar20 + 0x38) < 1) {
          uVar13 = 0;
        }
        else {
          uVar13 = **(undefined8 **)(lVar20 + 0x30);
        }
        local_338 = &local_2d8;
        local_2d0 = (uint *)&local_268;
        local_340 = &LAB_143b5abea;
        local_2d8 = local_c8 + 8;
        FUN_146c2fed0(uVar13,&local_340,0);
        if (param_2 == (char *)0x0) {
LAB_148460bed:
          lVar20 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x208);
          if (*(int *)(lVar20 + 0x38) < 1) {
            uVar13 = 0;
          }
          else {
            uVar13 = **(undefined8 **)(lVar20 + 0x30);
          }
          uVar17 = 0;
          FUN_146c383fc(local_c8,uVar13,0,1);
          lVar20 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x208);
          if (0 < *(int *)(lVar20 + 0x38)) {
            uVar17 = **(undefined8 **)(lVar20 + 0x30);
          }
          FUN_146c378c6(local_c8,uVar17,0);
          if (stack0xffffffffffffff40 != 0.0) {
            FUN_1400020a8();
          }
          goto LAB_148460ca4;
        }
        if (*param_2 == '\0') {
          pcVar3 = *(code **)(param_2 + 0x70);
          plVar16 = (longlong *)(param_2 + 0x90);
          if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
            plVar16 = *(longlong **)(param_2 + 0x80);
          }
          uVar13 = (**(code **)(*plVar16 + 8))();
          cVar12 = (*pcVar3)(uVar13);
          *param_2 = cVar12;
          if (cVar12 == '\0') goto LAB_148460bed;
        }
      }
      else if (*param_2 == '\0') {
        pcVar3 = *(code **)(param_2 + 0x70);
        plVar16 = (longlong *)(param_2 + 0x90);
        if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
          plVar16 = *(longlong **)(param_2 + 0x80);
        }
        uVar13 = (**(code **)(*plVar16 + 8))();
        cVar12 = (*pcVar3)(uVar13);
        *param_2 = cVar12;
        if (cVar12 == '\0') goto LAB_14846040d;
      }
      if (stack0xffffffffffffff40 != 0.0) {
        FUN_1400020a8();
      }
    }
    else if (*param_2 == '\0') {
      pcVar3 = *(code **)(param_2 + 0x70);
      plVar16 = (longlong *)(param_2 + 0x90);
      if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
        plVar16 = *(longlong **)(param_2 + 0x80);
      }
      uVar13 = (**(code **)(*plVar16 + 8))();
      cVar12 = (*pcVar3)(uVar13);
      *param_2 = cVar12;
      if (cVar12 == '\0') goto LAB_1484603e9;
    }
  }
  else {
LAB_148460ca4:
    if (param_2 == (char *)0x0) {
LAB_148460cad:
      FUN_145c688c4(*(undefined8 *)(param_1 + 8),local_c8,1);
      dVar4 = (dStack_b8 + (double)local_a0) * 0.5;
      dVar5 = (stack0xffffffffffffff40 + (double)ppuStack_a8) * 0.5;
      dVar6 = ((double)local_c8._0_8_ + local_b0) * 0.5;
      dStack_b8 = -dVar4;
      local_c8._8_4_ = SUB84(dVar5,0);
      local_c8._0_8_ = -dVar6;
      uStack_bc = (uint)((ulonglong)dVar5 >> 0x20) ^ 0x80000000;
      FUN_146c3c4e4(*(undefined8 *)(param_1 + 8),local_c8);
      dVar8 = DAT_14c846520;
      uVar17 = DAT_14c846518;
      uVar13 = DAT_14c846510;
      dStack_b8 = DAT_14c846520;
      stack0xffffffffffffff40 = (double)DAT_14c846518;
      local_c8._0_8_ = DAT_14c846510;
      auVar10 = _local_c8;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0x3ff0000000000000;
      local_c8._0_4_ = (undefined4)uVar13;
      local_c8._4_4_ = (undefined4)((ulonglong)uVar13 >> 0x20);
      local_c8._8_4_ = (undefined4)uVar17;
      uStack_bc = (undefined4)((ulonglong)uVar17 >> 0x20);
      *(undefined4 *)(param_1 + 0x48) = local_c8._0_4_;
      *(undefined4 *)(param_1 + 0x4c) = local_c8._4_4_;
      *(undefined4 *)(param_1 + 0x50) = local_c8._8_4_;
      *(undefined4 *)(param_1 + 0x54) = uStack_bc;
      *(double *)(param_1 + 0x58) = dVar8;
      *(double *)(param_1 + 0x30) = dVar6;
      *(double *)(param_1 + 0x38) = dVar5;
      *(double *)(param_1 + 0x40) = dVar4;
      _local_c8 = auVar10;
    }
    else if (*param_2 == '\0') {
      pcVar3 = *(code **)(param_2 + 0x70);
      plVar16 = (longlong *)(param_2 + 0x90);
      if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
        plVar16 = *(longlong **)(param_2 + 0x80);
      }
      uVar13 = (**(code **)(*plVar16 + 8))();
      cVar12 = (*pcVar3)(uVar13);
      *param_2 = cVar12;
      if (cVar12 == '\0') goto LAB_148460cad;
    }
  }
LAB_148460d83:
  FUN_146c611c0(&local_250);
LAB_148460133:
  if ((local_80 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148460dca FUN_148460dca body=85 status=ok
// SIG undefined FUN_148460dca(void)

undefined8 * FUN_148460dca(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_146c7ebe6(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x38);
      }
    }
  }
  return param_1;
}



// FUNCTION 148460e20 FUN_148460e20 body=20 status=ok
// SIG undefined FUN_148460e20(void)

void FUN_148460e20(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_1 + 0x10);
  for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}



// FUNCTION 148460e34 FUN_148460e34 body=798 status=ok
// SIG undefined FUN_148460e34(void)

void FUN_148460e34(longlong param_1,char *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_1a8 [32];
  undefined1 local_188;
  undefined1 local_180;
  undefined **local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 local_130;
  undefined1 local_12f;
  undefined8 local_128;
  undefined1 local_f8;
  undefined1 local_f7;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined2 local_d0;
  undefined1 local_ce;
  undefined4 local_cc;
  undefined1 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (param_2 == (char *)0x0) {
    local_180 = 1;
    local_188 = 1;
    FUN_146c005f0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x88),1,1);
  }
  else {
    if (*param_2 != '\0') goto LAB_148460fa7;
    pcVar1 = *(code **)(param_2 + 0x70);
    plVar4 = *(longlong **)(param_2 + 0x80);
    if (*(longlong **)(param_2 + 0x80) == (longlong *)0x0) {
      plVar4 = (longlong *)(param_2 + 0x90);
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    cVar2 = (*pcVar1)(uVar3);
    *param_2 = cVar2;
    if (cVar2 != '\0') goto LAB_148460fa7;
    local_180 = 1;
    local_188 = 1;
    FUN_146c005f0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x88),1,1);
    if (*param_2 != '\0') goto LAB_148460fa7;
    pcVar1 = *(code **)(param_2 + 0x70);
    plVar4 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar4 = *(longlong **)(param_2 + 0x80);
    }
    uVar3 = (**(code **)(*plVar4 + 8))(plVar4);
    cVar2 = (*pcVar1)(uVar3);
    *param_2 = cVar2;
    if (cVar2 != '\0') goto LAB_148460fa7;
  }
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    local_140 = *(undefined8 *)(param_1 + 0xc0);
    local_150 = *(undefined8 *)(param_1 + 0xb0);
    uStack_148 = *(undefined8 *)(param_1 + 0xb8);
    local_168 = *(undefined8 *)(param_1 + 0x98);
    uStack_160 = *(undefined8 *)(param_1 + 0xa0);
    local_158 = *(undefined8 *)(param_1 + 0xa8);
    local_170 = *(undefined8 *)(param_1 + 8);
    local_178 = &PTR_FUN_14ae97770;
    local_138 = 0;
    local_128 = 0;
    local_f7 = 1;
    local_f4 = 0x3f800000;
    local_f0 = 0x3e45798ee2308c3a;
    local_e0 = 0x3fb999999999999a;
    local_d8 = 0x3fd0000000000000;
    local_d0 = 0x101;
    local_ce = 1;
    local_cc = 0x358637bd;
    local_c8 = 1;
    local_c4 = 0x3c23d70a;
    local_60 = 0;
    local_58 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_54 = 0xffffffff00000080;
    local_4c = 0;
    local_40 = 0;
    local_38 = 0;
    local_e8 = *(undefined8 *)(param_1 + 200);
    local_f8 = *(undefined1 *)(param_1 + 0xd1);
    FUN_148313ca8();
    if (param_2 != (char *)0x0) {
      if (*param_2 == '\0') {
        pcVar1 = *(code **)(param_2 + 0x70);
        plVar4 = (longlong *)(param_2 + 0x90);
        if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
          plVar4 = *(longlong **)(param_2 + 0x80);
        }
        uVar3 = (**(code **)(*plVar4 + 8))();
        cVar2 = (*pcVar1)(uVar3);
        *param_2 = cVar2;
        if (cVar2 == '\0') goto LAB_148461106;
      }
      FUN_1483f9eac(&local_178);
      goto LAB_148460fa7;
    }
LAB_148461106:
    FUN_1483f9eac(&local_178);
  }
  local_140 = *(undefined8 *)(param_1 + 0xc0);
  local_150 = *(undefined8 *)(param_1 + 0xb0);
  uStack_148 = *(undefined8 *)(param_1 + 0xb8);
  local_168 = *(undefined8 *)(param_1 + 0x98);
  uStack_160 = *(undefined8 *)(param_1 + 0xa0);
  local_158 = *(undefined8 *)(param_1 + 0xa8);
  local_170 = *(undefined8 *)(param_1 + 8);
  local_178 = &PTR_FUN_14aee4fc0;
  local_130 = *(undefined1 *)(param_1 + 0xd3);
  local_12f = *(undefined1 *)(param_1 + 0xd4);
  local_138 = *(undefined8 *)(param_1 + 200);
  if (*(char *)(param_1 + 0xd2) == '\x01') {
    FUN_148310196(&local_178,param_2);
  }
  else {
    FUN_14830faea(&local_178,param_2);
  }
LAB_148460fa7:
  if ((local_28 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148461154 FUN_148461154 body=1665 status=ok
// SIG undefined FUN_148461154(void)

void FUN_148461154(longlong param_1,char *param_2)

{
  void **ppvVar1;
  uint uVar2;
  code *pcVar3;
  ulonglong uVar4;
  void *pvVar5;
  int iVar6;
  char cVar7;
  char cVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_3e8 [32];
  undefined1 local_3c8;
  undefined1 local_3c0;
  undefined1 local_3b8 [64];
  void *local_378;
  undefined8 uStack_370;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  void *local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  longlong *local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  longlong local_228 [2];
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1dc;
  undefined4 local_1d4;
  longlong local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  longlong lStack_1b0;
  undefined8 local_1a8;
  undefined3 uStack_1a0;
  undefined5 uStack_19d;
  undefined3 uStack_198;
  undefined8 uStack_195;
  undefined1 *local_18c;
  undefined1 *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined **local_118;
  undefined1 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined2 local_e7;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined2 local_c0;
  undefined1 local_be;
  undefined4 local_bc;
  undefined1 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  void *local_a8;
  ulonglong uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  if (param_2 == (char *)0x0) {
    local_3c0 = 1;
    local_3c8 = 1;
    FUN_146c005f0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x88),1,1);
  }
  else {
    if (*param_2 != '\0') goto LAB_148461208;
    pcVar3 = *(code **)(param_2 + 0x70);
    plVar11 = *(longlong **)(param_2 + 0x80);
    if (*(longlong **)(param_2 + 0x80) == (longlong *)0x0) {
      plVar11 = (longlong *)(param_2 + 0x90);
    }
    uVar10 = (**(code **)(*plVar11 + 8))();
    cVar7 = (*pcVar3)(uVar10);
    *param_2 = cVar7;
    if (cVar7 != '\0') goto LAB_148461208;
    local_3c0 = 1;
    local_3c8 = 1;
    FUN_146c005f0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x88),1,1);
    if (*param_2 != '\0') goto LAB_148461208;
    pcVar3 = *(code **)(param_2 + 0x70);
    plVar11 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar11 = *(longlong **)(param_2 + 0x80);
    }
    uVar10 = (**(code **)(*plVar11 + 8))(plVar11);
    cVar7 = (*pcVar3)(uVar10);
    *param_2 = cVar7;
    if (cVar7 != '\0') goto LAB_148461208;
  }
  local_b0 = *(undefined8 *)(param_1 + 8);
  local_118 = &PTR_FUN_149f64a48;
  local_110 = 1;
  local_108 = 0x3ff8000000000000;
  local_100 = 0x3eb0c6f7a0000000;
  local_f8 = 0x3eb0c6f7a0000000;
  local_e7 = 1;
  local_e0 = 0;
  local_d0 = 0x3fb999999999999a;
  local_c8 = 0x3fd0000000000000;
  local_c0 = 0x101;
  local_be = 1;
  local_bc = 0x358637bd;
  local_b8 = 1;
  local_b4 = 0x3c23d70a;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = (void *)0x0;
  uStack_a0 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_f0 = *(undefined8 *)(param_1 + 0xa0);
  local_e8 = *(undefined1 *)(param_1 + 0xa8);
  local_d8 = *(undefined1 *)(param_1 + 0xa9);
  cVar7 = FUN_146c7648e();
  if (param_2 == (char *)0x0) {
LAB_14846134d:
    pvVar5 = local_a8;
    ppvVar1 = (void **)(param_1 + 0xb0);
    if (ppvVar1 != &local_a8) {
      iVar6 = (int)uStack_a0;
      lVar12 = (longlong)(int)uStack_a0;
      *(int *)(param_1 + 0xb8) = (int)uStack_a0;
      if ((int)uStack_a0 == 0 && *(int *)(param_1 + 0xbc) == 0) {
        *(undefined4 *)(param_1 + 0xbc) = 0;
      }
      else {
        FUN_144a06ca8(ppvVar1,uStack_a0 & 0xffffffff);
        if (iVar6 != 0) {
          memcpy(*ppvVar1,pvVar5,lVar12 << 2);
        }
      }
    }
    if ((cVar7 == '\0') && (*(char *)(param_1 + 0x98) == '\x01')) {
      local_1b8 = *(undefined8 *)(param_1 + 8);
      lStack_1b0 = 0;
      uStack_198 = 0;
      uStack_195 = 0;
      local_1a8 = 0;
      uStack_1a0 = 0;
      uStack_19d = 0;
      local_18c = &DAT_100000002;
      local_178 = (void *)0x0;
      local_168 = (longlong *)0x0;
      local_138 = 0;
      uStack_130 = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_378 = *(void **)(param_1 + 0xb0);
      local_1e8 = 0;
      local_1e0 = 0;
      local_208 = 0;
      uStack_200 = 0;
      local_1dc = 0xffffffff00000080;
      local_1d4 = 0;
      local_1c8 = 0;
      local_1c0 = 0;
      uStack_370 = CONCAT44(uStack_370._4_4_,*(undefined4 *)(param_1 + 0xb8));
      FUN_146bc855c(&local_208,&local_378);
      local_238 = local_168;
      local_248 = local_178;
      local_348 = local_148;
      uStack_344 = uStack_144;
      uStack_340 = uStack_140;
      uStack_33c = uStack_13c;
      local_358 = (undefined4)local_158;
      uStack_354 = local_158._4_4_;
      uStack_350 = (undefined4)uStack_150;
      uStack_34c = uStack_150._4_4_;
      local_368 = (undefined4)local_168;
      uStack_364 = local_168._4_4_;
      uStack_360 = uStack_160;
      uStack_35c = uStack_15c;
      local_378 = local_178;
      uStack_370 = uStack_170;
      local_178 = &LAB_143b5ac42;
      local_168 = (longlong *)0x0;
      local_158 = &PTR_LAB_14aee5360;
      uStack_150 = &local_208;
      uStack_240 = (undefined4)uStack_170;
      uStack_23c = uStack_170._4_4_;
      local_218 = local_148;
      uStack_214 = uStack_144;
      uStack_210 = uStack_140;
      uStack_20c = uStack_13c;
      uStack_230 = uStack_160;
      uStack_22c = uStack_15c;
      if (local_248 != (void *)0x0) {
        plVar11 = local_238;
        if (local_238 == (longlong *)0x0) {
          plVar11 = local_228;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      FUN_146c68b4c(&local_1b8);
      if (param_2 == (char *)0x0) {
LAB_14846152f:
        if ((longlong)(int)local_1a8 != 0) {
          lVar13 = (longlong)(int)local_1a8 << 6;
          lVar12 = lStack_1b0;
          do {
            FUN_146c7f310(local_3b8,lVar12);
            FUN_1483150ae(&local_378,*(longlong *)(param_1 + 8),local_3b8);
            FUN_148315182(&local_378,0xffffffff);
            FUN_148315ddc(&local_378);
            lVar12 = lVar12 + 0x40;
            lVar13 = lVar13 + -0x40;
          } while (lVar13 != 0);
        }
        pvVar5 = local_a8;
        local_378 = (void *)0x0;
        uStack_370 = 0;
        lVar12 = (longlong)(int)uStack_a0;
        if (lVar12 != 0) {
          lVar13 = 0;
          do {
            uVar4 = uStack_370;
            uVar2 = *(uint *)((longlong)pvVar5 + lVar13);
            if ((-1 < (int)uVar2) &&
               (lVar14 = *(longlong *)(param_1 + 8),
               (int)uVar2 < *(int *)(lVar14 + 0x1d0) * 0x200 + *(int *)(lVar14 + 0x1d4))) {
              if (((ushort)(*(short *)(*(longlong *)
                                        (*(longlong *)(lVar14 + 0x1d8) + (ulonglong)(uVar2 >> 9) * 8
                                        ) + (ulonglong)(uVar2 & 0x1ff) * 2) - 1U) < 0xfffe) &&
                 (*(int *)(*(longlong *)
                            (*(longlong *)(lVar14 + 0x1c0) + (ulonglong)(uVar2 >> 9) * 8) + 0xc +
                          (ulonglong)((uVar2 & 0x1ff) << 4)) == -1)) {
                lVar14 = (longlong)(int)uStack_370;
                uVar9 = (int)uStack_370 + 1;
                uStack_370 = CONCAT44(uStack_370._4_4_,uVar9);
                if (uStack_370._4_4_ < uVar9) {
                  FUN_1446f48e2(&local_378,uVar4 & 0xffffffff);
                }
                *(uint *)((longlong)local_378 + lVar14 * 4) = uVar2;
              }
            }
            lVar13 = lVar13 + 4;
          } while (lVar12 * 4 != lVar13);
        }
        if (ppvVar1 == &local_378) {
          if (local_378 != (void *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(param_1 + 0xb0) != 0) {
            FUN_1400020a8();
          }
          *(void **)(param_1 + 0xb0) = local_378;
          local_378 = (void *)0x0;
          *(int *)(param_1 + 0xb8) = (int)uStack_370;
          *(uint *)(param_1 + 0xbc) = uStack_370._4_4_;
        }
      }
      else if (*param_2 == '\0') {
        pcVar3 = *(code **)(param_2 + 0x70);
        plVar11 = (longlong *)(param_2 + 0x90);
        if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
          plVar11 = *(longlong **)(param_2 + 0x80);
        }
        uVar10 = (**(code **)(*plVar11 + 8))();
        cVar7 = (*pcVar3)(uVar10);
        *param_2 = cVar7;
        if (cVar7 == '\0') goto LAB_14846152f;
      }
      local_1c0 = 0;
      if (local_1c8 != 0) {
        FUN_1400020a8();
      }
      FUN_1447a082e(&local_208);
      FUN_1482f1656(&local_1b8);
    }
  }
  else if (*param_2 == '\0') {
    pcVar3 = *(code **)(param_2 + 0x70);
    plVar11 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar11 = *(longlong **)(param_2 + 0x80);
    }
    uVar10 = (**(code **)(*plVar11 + 8))();
    cVar8 = (*pcVar3)(uVar10);
    *param_2 = cVar8;
    if (cVar8 == '\0') goto LAB_14846134d;
  }
  FUN_146ec77cc(&local_118);
LAB_148461208:
  if ((local_48 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484617d6 FUN_1484617d6 body=4365 status=ok
// SIG undefined FUN_1484617d6(void)

void FUN_1484617d6(longlong *param_1,char *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  double *pdVar3;
  double dVar4;
  int iVar5;
  code *pcVar6;
  longlong lVar7;
  code **ppcVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code **ppcVar13;
  char **ppcVar14;
  char cVar15;
  uint uVar16;
  undefined8 uVar17;
  longlong *plVar18;
  undefined ***pppuVar19;
  code ***pppcVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined1 auStack_a98 [32];
  undefined4 local_a78;
  undefined8 local_a70;
  undefined1 local_a68;
  double local_a60;
  undefined8 local_a58;
  longlong local_a50;
  undefined8 local_a48;
  undefined8 uStack_a40;
  undefined8 local_a38;
  undefined8 uStack_a30;
  double local_a28;
  double dStack_a20;
  double local_a18;
  undefined4 local_a10;
  undefined4 uStack_a0c;
  undefined4 uStack_a08;
  undefined4 uStack_a04;
  undefined8 local_a00;
  longlong local_9f8;
  undefined8 uStack_9f0;
  char *local_9e0;
  code *local_9d8;
  undefined8 uStack_9d0;
  undefined ***local_9c8;
  undefined4 uStack_9c0;
  undefined4 uStack_9bc;
  undefined **local_9b8;
  undefined1 *puStack_9b0;
  undefined4 local_9a8;
  undefined4 uStack_9a4;
  undefined4 uStack_9a0;
  undefined4 uStack_99c;
  undefined8 local_998;
  undefined8 uStack_990;
  code ***local_988;
  double dStack_980;
  code **local_978;
  undefined8 uStack_970;
  double local_968;
  undefined4 uStack_960;
  undefined4 uStack_95c;
  code *local_958;
  undefined8 uStack_950;
  undefined ***local_948;
  undefined8 uStack_940;
  undefined **local_938;
  char **ppcStack_930;
  undefined8 local_928;
  undefined8 uStack_920;
  undefined **local_918;
  undefined1 local_910 [152];
  undefined8 local_878;
  undefined8 local_868;
  undefined8 local_838;
  double local_830;
  double local_828;
  double local_820;
  double local_818;
  double local_810;
  double local_808;
  undefined8 local_800;
  undefined1 local_7f8;
  undefined1 local_7f7;
  undefined8 local_7f4;
  undefined4 local_7ec;
  code *local_7e8;
  undefined8 local_7d8;
  undefined **local_7c8;
  undefined1 *local_7c0;
  undefined8 local_7a8;
  undefined8 uStack_7a0;
  undefined8 local_798;
  undefined8 uStack_790;
  undefined8 local_788;
  undefined8 uStack_780;
  undefined8 local_778;
  undefined4 local_770;
  undefined8 local_768;
  undefined8 local_760;
  undefined8 local_758;
  undefined8 local_750;
  undefined8 local_748;
  undefined8 uStack_740;
  undefined8 local_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined4 uStack_720;
  undefined4 local_71c;
  undefined4 uStack_718;
  undefined8 uStack_714;
  undefined8 local_708;
  undefined8 uStack_700;
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  undefined1 local_6e8;
  undefined8 uStack_6e0;
  undefined4 uStack_6d8;
  undefined4 local_6d4;
  undefined4 uStack_6d0;
  undefined8 uStack_6cc;
  undefined8 local_6c0;
  undefined8 uStack_6b8;
  undefined8 local_6b0;
  undefined8 uStack_6a8;
  undefined4 local_6a0;
  undefined8 local_698;
  undefined8 local_690;
  undefined8 uStack_688;
  undefined8 local_680;
  undefined8 uStack_678;
  undefined8 local_670;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined8 local_658;
  undefined8 uStack_650;
  code **local_648;
  undefined8 local_640;
  undefined8 uStack_638;
  undefined8 local_620;
  undefined4 local_618;
  undefined8 local_614;
  undefined4 local_60c;
  longlong local_600;
  undefined4 local_5f8;
  undefined8 local_5f0;
  undefined8 local_5e8;
  undefined4 local_5e0;
  code *local_5d8;
  code **ppcStack_5d0;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  code **local_5b8;
  char **ppcStack_5b0;
  undefined4 local_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  longlong local_550;
  longlong local_538;
  uint local_50c;
  undefined1 local_508 [16];
  longlong local_4f8;
  uint local_4f0;
  uint local_4ec;
  longlong local_4e8;
  uint local_4e0;
  uint local_4dc;
  longlong local_4d8;
  double local_4d0;
  double local_4c8;
  double local_4c0;
  undefined1 local_4b8;
  code *local_4a8;
  code **ppcStack_4a0;
  code ***local_498;
  undefined8 uStack_490;
  code **local_488;
  char **ppcStack_480;
  undefined8 local_478;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  code *local_138;
  undefined8 uStack_130;
  undefined ***local_128;
  undefined8 uStack_120;
  undefined **local_118;
  undefined1 *puStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_a98;
  local_9e0 = param_2;
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_1484618b1;
    pcVar6 = *(code **)(param_2 + 0x70);
    plVar18 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar18 = *(longlong **)(param_2 + 0x80);
    }
    uVar17 = (**(code **)(*plVar18 + 8))();
    cVar15 = (*pcVar6)(uVar17);
    *param_2 = cVar15;
    if (cVar15 != '\0') goto LAB_1484618b1;
  }
  iVar5 = (int)param_1[0x1a];
  if (iVar5 != (int)param_1[0x18]) goto LAB_1484618b1;
  FUN_1484628e6(local_508);
  pppcVar20 = DAT_14c846520;
  ppcVar8 = DAT_14c846518;
  pcVar6 = DAT_14c846510;
  local_4b8 = (char)param_1[0x1f];
  if (iVar5 == 0) {
    local_a60 = DAT_14c8464e0;
    dVar32 = DAT_14c8464f0;
    dVar31 = DAT_14c8464e8;
  }
  else {
    lVar23 = param_1[0x19];
    dVar32 = 0.0;
    lVar24 = 0;
    dVar31 = 0.0;
    dVar28 = 0.0;
    do {
      dVar28 = dVar28 + *(double *)(lVar23 + 0x20 + lVar24);
      dVar31 = dVar31 + *(double *)(lVar23 + 0x28 + lVar24);
      dVar32 = dVar32 + *(double *)(lVar23 + 0x30 + lVar24);
      lVar24 = lVar24 + 0x60;
    } while ((longlong)iVar5 * 0x60 != lVar24);
    local_a60 = 1.0 / (double)iVar5;
    dVar32 = dVar32 * local_a60;
    dVar31 = dVar31 * local_a60;
    local_a60 = local_a60 * dVar28;
  }
  local_988 = DAT_14c846520;
  local_998 = DAT_14c846510;
  uStack_990 = DAT_14c846518;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x3ff0000000000000;
  param_1[6] = (longlong)local_a60;
  param_1[7] = (longlong)dVar31;
  param_1[8] = (longlong)dVar32;
  local_998._0_4_ = SUB84(pcVar6,0);
  local_998._4_4_ = (undefined4)((ulonglong)pcVar6 >> 0x20);
  uStack_990._0_4_ = SUB84(ppcVar8,0);
  uStack_990._4_4_ = (undefined4)((ulonglong)ppcVar8 >> 0x20);
  *(undefined4 *)(param_1 + 9) = (undefined4)local_998;
  *(undefined4 *)((longlong)param_1 + 0x4c) = local_998._4_4_;
  *(undefined4 *)(param_1 + 10) = (undefined4)uStack_990;
  *(undefined4 *)((longlong)param_1 + 0x54) = uStack_990._4_4_;
  param_1[0xb] = (longlong)pppcVar20;
  local_9f8 = 0;
  uStack_9f0 = 0;
  local_998 = pcVar6;
  uStack_990 = ppcVar8;
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  uVar33 = 0xffffffff;
  uVar34 = 0xffefffff;
  uVar35 = 0xffffffff;
  uVar36 = 0x7fefffff;
  uVar37 = uVar33;
  uVar38 = uVar34;
  uVar39 = uVar35;
  uVar40 = uVar36;
  uVar41 = uVar33;
  uVar42 = uVar34;
  uVar43 = uVar35;
  uVar44 = uVar36;
  if ((iVar5 != 0) && (FUN_146bfda82(&local_9f8,iVar5), 0 < (int)param_1[0x18])) {
    uVar35 = 0xffffffff;
    uVar36 = 0x7fefffff;
    uVar33 = 0xffffffff;
    uVar34 = 0xffefffff;
    lVar25 = 0x50;
    lVar24 = 0;
    lVar23 = 0;
    lVar26 = 0;
    uVar37 = uVar33;
    uVar38 = uVar34;
    uVar39 = uVar35;
    uVar40 = uVar36;
    uVar41 = uVar33;
    uVar42 = uVar34;
    uVar43 = uVar35;
    uVar44 = uVar36;
    do {
      uVar27 = uStack_9f0;
      uVar17 = *(undefined8 *)(param_1[0x17] + lVar24);
      lVar22 = (longlong)(int)uStack_9f0;
      uVar16 = (int)uStack_9f0 + 1;
      uStack_9f0 = CONCAT44(uStack_9f0._4_4_,uVar16);
      if (uStack_9f0._4_4_ < uVar16) {
        FUN_146bfdb28(&local_9f8,uVar27 & 0xffffffff);
      }
      FUN_146bff712(lVar22 * 0x220 + local_9f8,uVar17);
      if (*(int *)(local_9f8 + 0x170 + lVar23) != 0) {
        lVar22 = param_1[0x19];
        puVar1 = (undefined8 *)(lVar22 + -0x50 + lVar25);
        local_a48 = *puVar1;
        uStack_a40 = puVar1[1];
        puVar1 = (undefined8 *)(lVar22 + -0x40 + lVar25);
        local_a38 = *puVar1;
        uStack_a30 = puVar1[1];
        puVar2 = (undefined4 *)(lVar22 + -0x10 + lVar25);
        local_a10 = *puVar2;
        uStack_a0c = puVar2[1];
        uStack_a08 = puVar2[2];
        uStack_a04 = puVar2[3];
        local_a00 = *(undefined8 *)(lVar22 + lVar25);
        local_a18 = *(double *)(lVar22 + -0x20 + lVar25) - dVar32;
        dStack_a20 = *(double *)(lVar22 + -0x28 + lVar25) - dVar31;
        local_a28 = *(double *)(lVar22 + -0x30 + lVar25) - local_a60;
        FUN_146c3cd49(local_9f8 + lVar23,&local_a48,1);
        if ((char)param_1[0x1d] == '\x01') {
          if ((0.0 < (double)param_1[0x1e]) &&
             (cVar15 = FUN_146c047ec(local_9f8 + lVar23), cVar15 == '\0')) {
            FUN_145c688c4(local_9f8 + lVar23,&local_998,1);
            dVar28 = (double)(-(ulonglong)(0.0 <= (double)uStack_970 - (double)local_988) &
                             (ulonglong)((double)uStack_970 - (double)local_988));
            dVar29 = (double)(-(ulonglong)(0.0 <= (double)local_978 - (double)uStack_990) &
                             (ulonglong)((double)local_978 - (double)uStack_990));
            uVar27 = -(ulonglong)(dVar28 <= dVar29);
            dVar29 = (double)(~uVar27 & (ulonglong)dVar28 | uVar27 & (ulonglong)dVar29);
            dVar28 = (double)(-(ulonglong)(0.0 <= dStack_980 - (double)local_998) &
                             (ulonglong)(dStack_980 - (double)local_998));
            uVar27 = -(ulonglong)(dVar29 <= dVar28);
            dVar29 = (double)(uVar27 & (ulonglong)dVar28 | ~uVar27 & (ulonglong)dVar29) /
                     (double)*(int *)((longlong)param_1 + 0xac);
            dVar28 = (double)param_1[0x1e];
            dVar29 = dVar29 + dVar29;
            uVar27 = -(ulonglong)(dVar28 <= dVar29);
            FUN_146c38c5e(local_9f8 + lVar23,0);
            FUN_1482d2c96(&local_998,local_9f8 + lVar23);
            local_948 = (undefined ***)
                        ((~uVar27 & (ulonglong)dVar28 | (ulonglong)dVar29 & uVar27) ^
                        0x8000000000000000);
            uStack_940 = CONCAT62(uStack_940._2_6_,0x100);
            FUN_1482d2df4(&local_998);
            FUN_14830cf42(&local_998);
          }
          FUN_146ba21d6(&local_5d8,local_9f8 + lVar23,1);
          local_620 = 0;
          local_618 = 0;
          local_640 = 0;
          uStack_638 = 0;
          local_614 = 0xffffffff00000080;
          local_60c = 0;
          local_600 = 0;
          local_5f8 = 0;
          local_5f0 = 0;
          local_5e8 = 0x4000000000000000;
          local_5e0 = 2;
          local_648 = &local_5d8;
          FUN_146bef8a8(&local_648);
          local_a50 = local_9f8;
          local_998 = (code *)(local_9f8 + lVar23);
          dStack_980 = 0.5;
          local_978 = (code **)0x3ff0000000000000;
          uStack_970 = (char **)CONCAT71(uStack_970._1_7_,1);
          uStack_970 = (char **)CONCAT44(4,(undefined4)uStack_970);
          local_968 = 1.0;
          local_948 = (undefined ***)0x0;
          local_938 = &PTR_LAB_149f36510;
          ppcStack_930 = (char **)&LAB_148474896;
          local_958 = FUN_146bd3274;
          uStack_990 = &local_5d8;
          local_988 = &local_648;
          memset(local_910,0,0x91);
          uVar12 = uStack_920;
          uVar11 = local_928;
          puStack_9b0 = (undefined1 *)ppcStack_930;
          local_9b8 = local_938;
          uVar10 = uStack_940;
          local_9c8 = local_948;
          uVar17 = uStack_950;
          local_9d8 = local_958;
          local_918 = &PTR_FUN_149f361f0;
          local_878 = 0;
          local_868 = 0;
          local_838 = 0;
          local_7f8 = 1;
          local_7f7 = 1;
          local_7f4 = 0x1000;
          local_7ec = 5;
          local_7d8 = 0;
          local_7c8 = &PTR_LAB_149f36510;
          local_7c0 = &LAB_146bd3270;
          local_7e8 = FUN_146bd3274;
          local_7a8 = 0;
          uStack_7a0 = 0x7fffffff00000000;
          local_798 = 0x7fffffff7fffffff;
          uStack_790 = 0x8000000180000001;
          local_788 = 0x7fffffff80000001;
          uStack_780 = 0x7fffffff7fffffff;
          local_778 = 0x8000000180000001;
          local_770 = 0x80000001;
          local_768 = 0x1000000000000000;
          local_760 = 0x2000000000000000;
          local_758 = 0x4000000000000000;
          local_750 = 0x40;
          uStack_718 = 0;
          uStack_714 = 0;
          uStack_728 = 0;
          uStack_720 = 0;
          local_71c = 0;
          local_738 = 0;
          uStack_730 = 0;
          local_748 = 0;
          uStack_740 = 0;
          local_6f8 = 0;
          uStack_6f0 = 0;
          local_708 = 0;
          uStack_700 = 0;
          local_6e8 = 0;
          uStack_6d0 = 0;
          uStack_6cc = 0;
          uStack_6e0 = 0;
          uStack_6d8 = 0;
          local_6d4 = 0;
          local_6a0 = 0;
          local_6b0 = 0;
          uStack_6a8 = 0;
          local_6c0 = 0;
          uStack_6b8 = 0;
          local_698 = 0x40;
          local_680 = 0;
          uStack_678 = 0;
          local_690 = 0;
          uStack_688 = 0;
          local_670 = 0x40;
          local_658 = 0;
          uStack_650 = 0;
          local_668 = 0;
          uStack_660 = 0;
          local_830 = DAT_14c8464e0 + -8.0;
          local_828 = DAT_14c8464e8 + -8.0;
          local_820 = DAT_14c8464f0 + -8.0;
          local_818 = DAT_14c8464e0 + 8.0;
          local_810 = DAT_14c8464e8 + 8.0;
          local_808 = DAT_14c8464f0 + 8.0;
          local_800 = 0x3fd0000000000000;
          dVar30 = -INFINITY;
          dVar28 = -INFINITY;
          dVar29 = -INFINITY;
          if (-1 < (int)local_50c) {
            lVar22 = *(longlong *)(local_550 + (ulonglong)(local_50c >> 9) * 8);
            lVar7 = (ulonglong)((local_50c & 0x1ff) << 3) * 3;
            lVar21 = *(longlong *)(local_538 + (ulonglong)(local_50c >> 9) * 8);
            dVar28 = *(double *)(lVar22 + 0x10 + lVar7);
            dVar29 = *(double *)(lVar21 + 0x10 + lVar7);
            dVar30 = *(double *)(lVar22 + 8 + lVar7);
            dVar4 = *(double *)(lVar21 + 8 + lVar7);
            local_a58 = CONCAT44(uVar36,uVar35);
            dVar28 = (dVar28 + dVar29) - (dVar28 - dVar29);
            dVar29 = (dVar30 + dVar4) - (dVar30 - dVar4);
            dVar30 = (*(double *)(lVar22 + lVar7) + *(double *)(lVar21 + lVar7)) -
                     (*(double *)(lVar22 + lVar7) - *(double *)(lVar21 + lVar7));
          }
          local_978 = (code **)0x0;
          dVar28 = (double)(-(ulonglong)(0.0 <= dVar28) & (ulonglong)dVar28);
          dVar29 = (double)(-(ulonglong)(0.0 <= dVar29) & (ulonglong)dVar29);
          uVar27 = -(ulonglong)(dVar28 <= dVar29);
          dVar28 = (double)(~uVar27 & (ulonglong)dVar28 | uVar27 & (ulonglong)dVar29);
          dVar30 = (double)(-(ulonglong)(0.0 <= dVar30) & (ulonglong)dVar30);
          uVar27 = -(ulonglong)(dVar28 <= dVar30);
          local_968 = ((double)(uVar27 & (ulonglong)dVar30 | ~uVar27 & (ulonglong)dVar28) + 0.0) /
                      (double)*(int *)((longlong)param_1 + 0xac);
          local_108 = local_928;
          uStack_100 = uStack_920;
          local_118 = local_938;
          puStack_110 = (undefined1 *)ppcStack_930;
          local_128 = local_948;
          uStack_120 = uStack_940;
          local_138 = local_958;
          uStack_130 = uStack_950;
          local_928 = CONCAT44(uStack_9a4,local_9a8);
          uStack_920 = CONCAT44(uStack_99c,uStack_9a0);
          local_938 = &PTR_LAB_14aee5380;
          ppcStack_930 = &local_9e0;
          local_948 = (undefined ***)0x0;
          uStack_940 = CONCAT44(uStack_9bc,uStack_9c0);
          local_958 = FUN_143b5ace0;
          uStack_950 = uStack_9d0;
          uStack_120._0_4_ = (undefined4)uVar10;
          uStack_120._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
          local_108._0_4_ = (undefined4)uVar11;
          local_108._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
          uStack_100._0_4_ = (undefined4)uVar12;
          uStack_100._4_4_ = (undefined4)((ulonglong)uVar12 >> 0x20);
          local_9a8 = (undefined4)local_108;
          uStack_9a4 = local_108._4_4_;
          uStack_9a0 = (undefined4)uStack_100;
          uStack_99c = uStack_100._4_4_;
          uStack_9c0 = (undefined4)uStack_120;
          uStack_9bc = uStack_120._4_4_;
          uStack_9d0 = uVar17;
          lVar22 = local_a50;
          uStack_120 = uVar10;
          local_108 = uVar11;
          uStack_100 = uVar12;
          if (local_9d8 != (code *)0x0) {
            pppuVar19 = local_9c8;
            if (local_9c8 == (undefined ***)0x0) {
              pppuVar19 = &local_9b8;
            }
            (*(code *)(*pppuVar19)[2])();
            lVar22 = local_9f8;
          }
          uVar17 = FUN_1484629d6(&local_998);
          FUN_146c00e98(lVar22 + lVar23,uVar17);
          pcVar9 = local_9e0;
          if (local_9e0 != (char *)0x0) {
            if (*local_9e0 == '\0') {
              pcVar6 = *(code **)(local_9e0 + 0x70);
              plVar18 = (longlong *)(local_9e0 + 0x90);
              if (*(longlong **)(local_9e0 + 0x80) != (longlong *)0x0) {
                plVar18 = *(longlong **)(local_9e0 + 0x80);
              }
              uVar17 = (**(code **)(*plVar18 + 8))();
              cVar15 = (*pcVar6)(uVar17);
              *pcVar9 = cVar15;
              if (cVar15 == '\0') goto LAB_1484624fa;
            }
            FUN_146ba0c6a(&local_918);
            if (local_958 != (code *)0x0) {
              pppuVar19 = &local_938;
              if (local_948 != (undefined ***)0x0) {
                pppuVar19 = local_948;
              }
              (*(code *)(*pppuVar19)[2])();
            }
            local_5f8 = 0;
            if (local_600 != 0) {
              FUN_1400020a8();
            }
            FUN_146bddd50(&local_640);
            FUN_1457e5b52(&local_5d8);
            goto LAB_148461a88;
          }
LAB_1484624fa:
          if (*(char *)((longlong)param_1 + 0xe9) == '\x01') {
            local_a70 = 0x3fe0000000000000;
            local_a68 = 1;
            local_a78 = 0;
            FUN_148328d62(local_9f8 + lVar23,1,0,0);
          }
          FUN_146ba0c6a(&local_918);
          if (local_958 != (code *)0x0) {
            pppuVar19 = local_948;
            if (local_948 == (undefined ***)0x0) {
              pppuVar19 = &local_938;
            }
            (*(code *)(*pppuVar19)[2])();
          }
          local_5f8 = 0;
          if (local_600 != 0) {
            FUN_1400020a8();
          }
          FUN_146bddd50(&local_640);
          FUN_1457e5b52(&local_5d8);
        }
        uVar16 = local_4f0;
        lVar22 = local_9f8;
        if (*(int *)(local_9f8 + 0x170 + lVar23) != 0) {
          lVar21 = (longlong)(int)local_4f0;
          local_4f0 = local_4f0 + 1;
          if (local_4ec < local_4f0) {
            FUN_148474b36(&local_4f8,uVar16);
          }
          *(longlong *)(local_4f8 + lVar21 * 8) = lVar22 + lVar23;
          FUN_145c688c4(local_9f8 + lVar23,&local_998,1);
          uVar16 = local_4e0;
          lVar22 = (longlong)(int)local_4e0;
          local_4e0 = local_4e0 + 1;
          if (local_4dc < local_4e0) {
            FUN_146bf26b8(&local_4e8,uVar16);
          }
          lVar22 = lVar22 * 0x30;
          pdVar3 = (double *)(local_4e8 + 0x20 + lVar22);
          *pdVar3 = (double)local_978;
          pdVar3[1] = (double)uStack_970;
          plVar18 = (longlong *)(local_4e8 + 0x10 + lVar22);
          *plVar18 = (longlong)local_988;
          plVar18[1] = (longlong)dStack_980;
          *(double *)(local_4e8 + lVar22) = (double)local_998;
          ((double *)(local_4e8 + lVar22))[1] = (double)uStack_990;
          dVar28 = *(double *)(local_4e8 + lVar22);
          if (dVar28 <= (double)CONCAT44(uVar40,uVar39)) {
            uVar39 = SUB84(dVar28,0);
            uVar40 = (undefined4)((ulonglong)dVar28 >> 0x20);
          }
          dVar28 = *(double *)(local_4e8 + 8 + lVar22);
          if (dVar28 <= (double)CONCAT44(uVar44,uVar43)) {
            uVar43 = SUB84(dVar28,0);
            uVar44 = (undefined4)((ulonglong)dVar28 >> 0x20);
          }
          dVar28 = *(double *)(local_4e8 + 0x10 + lVar22);
          if (dVar28 <= (double)CONCAT44(uVar36,uVar35)) {
            uVar35 = SUB84(dVar28,0);
            uVar36 = (undefined4)((ulonglong)dVar28 >> 0x20);
          }
          dVar28 = *(double *)(local_4e8 + 0x18 + lVar22);
          if ((double)CONCAT44(uVar34,uVar33) <= dVar28) {
            uVar33 = SUB84(dVar28,0);
            uVar34 = (undefined4)((ulonglong)dVar28 >> 0x20);
          }
          dVar28 = *(double *)(local_4e8 + 0x20 + lVar22);
          if ((double)CONCAT44(uVar42,uVar41) <= dVar28) {
            uVar41 = SUB84(dVar28,0);
            uVar42 = (undefined4)((ulonglong)dVar28 >> 0x20);
          }
          dVar28 = *(double *)(local_4e8 + 0x28 + lVar22);
          if ((double)CONCAT44(uVar38,uVar37) <= dVar28) {
            uVar37 = SUB84(dVar28,0);
            uVar38 = (undefined4)((ulonglong)dVar28 >> 0x20);
          }
        }
      }
      lVar26 = lVar26 + 1;
      lVar23 = lVar23 + 0x220;
      lVar25 = lVar25 + 0x60;
      lVar24 = lVar24 + 0x10;
    } while (lVar26 < (int)param_1[0x18]);
  }
  ppcVar14 = ppcStack_480;
  ppcVar13 = local_488;
  pppcVar20 = local_498;
  ppcVar8 = ppcStack_4a0;
  pcVar6 = local_4a8;
  if (local_4f0 != 0) {
    local_4d0 = (double)param_1[0x1b];
    dVar31 = (double)CONCAT44(uVar38,uVar37) - (double)CONCAT44(uVar36,uVar35);
    dVar31 = (double)(-(ulonglong)(0.0 <= dVar31) & (ulonglong)dVar31);
    dVar32 = (double)CONCAT44(uVar42,uVar41) - (double)CONCAT44(uVar44,uVar43);
    dVar32 = (double)(-(ulonglong)(0.0 <= dVar32) & (ulonglong)dVar32);
    uVar27 = -(ulonglong)(dVar31 <= dVar32);
    dVar32 = (double)(~uVar27 & (ulonglong)dVar31 | uVar27 & (ulonglong)dVar32);
    dVar31 = (double)CONCAT44(uVar34,uVar33) - (double)CONCAT44(uVar40,uVar39);
    dVar31 = (double)(-(ulonglong)(0.0 <= dVar31) & (ulonglong)dVar31);
    uVar27 = -(ulonglong)(dVar32 <= dVar31);
    dVar31 = local_4d0 + local_4d0 +
             (double)(uVar27 & (ulonglong)dVar31 | ~uVar27 & (ulonglong)dVar32);
    local_4c8 = dVar31 / (double)*(int *)((longlong)param_1 + 0xac);
    local_4c0 = dVar31 / (double)(int)param_1[0x15];
    local_4d8 = param_1[0x1c];
    local_968 = local_478;
    uStack_960 = uStack_470;
    uStack_95c = uStack_46c;
    local_978 = local_488;
    uStack_970 = ppcStack_480;
    local_988 = local_498;
    dStack_980 = uStack_490;
    local_998 = local_4a8;
    uStack_990 = ppcStack_4a0;
    local_4a8 = FUN_143b5ad72;
    ppcStack_4a0 = ppcStack_5d0;
    local_498 = (code ***)0x0;
    local_488 = (code **)&PTR_LAB_14aee53e0;
    ppcStack_480 = &local_9e0;
    local_5d8 = pcVar6;
    ppcStack_5d0 = ppcVar8;
    local_5b8 = ppcVar13;
    ppcStack_5b0 = ppcVar14;
    local_5a8 = (undefined4)local_478;
    uStack_5a4 = local_478._4_4_;
    uStack_5a0 = uStack_470;
    uStack_59c = uStack_46c;
    uStack_5c0 = (undefined4)uStack_490;
    uStack_5bc = uStack_490._4_4_;
    if (pcVar6 != (code *)0x0) {
      if (pppcVar20 == (code ***)0x0) {
        pppcVar20 = &local_5b8;
      }
      (*(*pppcVar20)[2])();
    }
    pcVar9 = local_9e0;
    if (local_9e0 == (char *)0x0) {
LAB_148462869:
      lVar23 = param_1[1];
      uVar17 = FUN_148463004(local_508);
      FUN_146c00e98(lVar23,uVar17);
      (**(code **)(*param_1 + 0x20))(param_1,local_9e0,local_4c0);
    }
    else if (*local_9e0 == '\0') {
      pcVar6 = *(code **)(local_9e0 + 0x70);
      plVar18 = (longlong *)(local_9e0 + 0x90);
      if (*(longlong **)(local_9e0 + 0x80) != (longlong *)0x0) {
        plVar18 = *(longlong **)(local_9e0 + 0x80);
      }
      uVar17 = (**(code **)(*plVar18 + 8))();
      cVar15 = (*pcVar6)(uVar17);
      *pcVar9 = cVar15;
      if (cVar15 == '\0') goto LAB_148462869;
    }
  }
LAB_148461a88:
  FUN_1461a8f9d(local_9f8,uStack_9f0 & 0xffffffff);
  if (local_9f8 != 0) {
    FUN_1400020a8();
  }
  FUN_148463044(local_508);
LAB_1484618b1:
  if ((local_f0 ^ (ulonglong)auStack_a98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484628e6 FUN_1484628e6 body=240 status=ok
// SIG undefined FUN_1484628e6(void)

undefined8 * FUN_1484628e6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aee4fc8;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0x4000000000000000;
  param_1[7] = 0x4014000000000000;
  param_1[8] = 0x3ff0000000000000;
  param_1[9] = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xe] = 0;
  param_1[0x10] = &PTR_LAB_149f36510;
  param_1[0x11] = &LAB_148473402;
  param_1[0xc] = FUN_146bd3274;
  FUN_1484731a8(param_1 + 0x14);
  param_1[0x6e] = 0x7fefffffffffffff;
  param_1[0x6f] = 0x7fefffffffffffff;
  param_1[0x70] = 0x7fefffffffffffff;
  param_1[0x71] = 0xffefffffffffffff;
  param_1[0x72] = 0xffefffffffffffff;
  param_1[0x73] = 0xffefffffffffffff;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  return param_1;
}



// FUNCTION 1484629d6 FUN_1484629d6 body=1580 status=ok
// SIG undefined FUN_1484629d6(void)

longlong * FUN_1484629d6(longlong *param_1)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 auStack_188 [32];
  longlong local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong local_d8;
  longlong lStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong *local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  longlong lStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_188;
  plVar1 = param_1 + 0x10;
  FUN_146c6544c(plVar1);
  cVar7 = FUN_14847489a(param_1);
  if (cVar7 != '\0') {
    FUN_146ba0128(param_1[1],&local_128);
    dVar2 = (double)param_1[4];
    uStack_110 = uStack_110 + dVar2;
    local_108 = local_108 + dVar2;
    uStack_100 = uStack_100 + dVar2;
    local_128 = local_128 - dVar2;
    uStack_120 = uStack_120 - dVar2;
    local_118 = local_118 - dVar2;
    param_1[0x33] = param_1[6];
    param_1[0x2d] = (longlong)local_128;
    param_1[0x2e] = (longlong)uStack_120;
    param_1[0x2f] = (longlong)local_118;
    param_1[0x30] = (longlong)uStack_110;
    param_1[0x31] = (longlong)local_108;
    param_1[0x32] = (longlong)uStack_100;
    if ((char)param_1[5] == '\x01') {
      dVar2 = (double)param_1[6] * 0.1;
      param_1[0x30] = (longlong)((double)param_1[0x30] + dVar2);
      param_1[0x31] = (longlong)((double)param_1[0x31] + dVar2);
      param_1[0x32] = (longlong)((double)param_1[0x32] + dVar2);
      param_1[0x2d] = (longlong)((double)param_1[0x2d] - dVar2);
      param_1[0x2e] = (longlong)((double)param_1[0x2e] - dVar2);
      param_1[0x2f] = (longlong)((double)param_1[0x2f] - dVar2);
    }
    *(undefined4 *)(param_1 + 0x35) = 2;
    *(undefined4 *)((longlong)param_1 + 0x1ac) = *(undefined4 *)((longlong)param_1 + 0x2c);
    param_1[0x2c] = param_1[3];
    FUN_146ffcba0(param_1 + 0x36,param_1 + 8);
    if ((char)param_1[5] == '\x01') {
      local_138 = (undefined4)local_108;
      uStack_134 = local_108._4_4_;
      uStack_130 = (undefined4)uStack_100;
      uStack_12c = uStack_100._4_4_;
      local_148 = (undefined4)local_118;
      uStack_144 = local_118._4_4_;
      uStack_140 = (undefined4)uStack_110;
      uStack_13c = uStack_110._4_4_;
      local_158 = (undefined4)local_128;
      uStack_154 = local_128._4_4_;
      uStack_150 = (undefined4)uStack_120;
      uStack_14c = uStack_120._4_4_;
      local_f8 = (undefined1 *)0x0;
      puVar9 = (undefined8 *)FUN_14001cc68(0x40,8);
      *puVar9 = &PTR_FUN_14aee53a0;
      puVar9[1] = param_1;
      puVar9[6] = CONCAT44(uStack_134,local_138);
      puVar9[7] = CONCAT44(uStack_12c,uStack_130);
      puVar9[4] = CONCAT44(uStack_144,local_148);
      puVar9[5] = CONCAT44(uStack_13c,uStack_140);
      puVar9[2] = CONCAT44(uStack_154,local_158);
      puVar9[3] = CONCAT44(uStack_14c,uStack_150);
      if (puVar9 + 1 != (undefined8 *)0x0) {
        local_f8 = &LAB_14847491a;
      }
      local_88 = param_1[0x2a];
      uStack_80 = param_1[0x2b];
      local_98 = param_1[0x28];
      lStack_90 = param_1[0x29];
      local_a8 = (longlong *)param_1[0x26];
      uStack_a0 = param_1[0x27];
      local_b8 = param_1[0x24];
      uStack_b0 = param_1[0x25];
      param_1[0x2a] = CONCAT44(uStack_c4,local_c8);
      param_1[0x2b] = CONCAT44(uStack_bc,uStack_c0);
      param_1[0x28] = local_d8;
      param_1[0x29] = lStack_d0;
      param_1[0x26] = (longlong)puVar9;
      param_1[0x27] = CONCAT44(uStack_dc,uStack_e0);
      param_1[0x24] = (longlong)local_f8;
      param_1[0x25] = CONCAT44(uStack_ec,uStack_f0);
    }
    else {
      local_88 = param_1[0x2a];
      uStack_80 = param_1[0x2b];
      local_98 = param_1[0x28];
      lStack_90 = param_1[0x29];
      local_a8 = (longlong *)param_1[0x26];
      uStack_a0 = param_1[0x27];
      local_b8 = param_1[0x24];
      uStack_b0 = param_1[0x25];
      param_1[0x2a] = CONCAT44(uStack_c4,local_c8);
      param_1[0x2b] = CONCAT44(uStack_bc,uStack_c0);
      param_1[0x28] = (longlong)&PTR_LAB_14aee53c0;
      param_1[0x29] = (longlong)param_1;
      param_1[0x26] = 0;
      param_1[0x27] = CONCAT44(uStack_dc,uStack_e0);
      param_1[0x24] = (longlong)FUN_148474a82;
      param_1[0x25] = CONCAT44(uStack_ec,uStack_f0);
    }
    local_c8 = (undefined4)local_88;
    uStack_c4 = local_88._4_4_;
    uStack_c0 = (undefined4)uStack_80;
    uStack_bc = uStack_80._4_4_;
    local_d8 = local_98;
    lStack_d0 = lStack_90;
    local_e8 = local_a8;
    uStack_e0 = (undefined4)uStack_a0;
    uStack_dc = uStack_a0._4_4_;
    local_f8 = (undefined1 *)local_b8;
    uStack_f0 = (int)uStack_b0;
    uStack_ec = uStack_b0._4_4_;
    if (local_b8 != 0) {
      plVar10 = local_a8;
      if (local_a8 == (longlong *)0x0) {
        plVar10 = &local_d8;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    local_b8 = 0;
    uStack_b0 = 0;
    lVar5 = *param_1;
    uStack_b0._0_4_ = 0;
    uVar13 = *(int *)(lVar5 + 0x20) * 0x200 + *(int *)(lVar5 + 0x24);
    uVar16 = 0;
    if (uVar13 != 0) {
      uVar16 = 0;
      if (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar5 + 0x28) - 1U)) {
        uVar8 = 1;
        uVar12 = 1;
        if (1 < (int)uVar13) {
          uVar8 = uVar13;
        }
        do {
          uVar16 = uVar8;
          if (uVar8 == uVar12) break;
          uVar14 = uVar12 >> 9;
          uVar15 = uVar12 & 0x1ff;
          uVar16 = uVar12;
          uVar12 = uVar12 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar5 + 0x28))[uVar14] +
                                             (ulonglong)uVar15 * 2) - 1U));
      }
    }
    if (uVar16 != uVar13) {
      do {
        uVar6 = uStack_b0;
        lVar17 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + (ulonglong)(uVar16 >> 9) * 8);
        uVar11 = (ulonglong)(uVar16 & 0x1ff);
        dVar2 = *(double *)(lVar17 + uVar11 * 0x18);
        if (((((double)param_1[0x2d] <= dVar2) &&
             (dVar3 = *(double *)(lVar17 + 8 + uVar11 * 0x18), (double)param_1[0x2e] <= dVar3)) &&
            (dVar4 = *(double *)(lVar17 + 0x10 + uVar11 * 0x18), (double)param_1[0x2f] <= dVar4)) &&
           (((dVar2 <= (double)param_1[0x30] && (dVar3 <= (double)param_1[0x31])) &&
            (dVar4 <= (double)param_1[0x32])))) {
          lVar17 = (longlong)(int)uStack_b0;
          uVar8 = (int)uStack_b0 + 1;
          uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar8);
          if (uStack_b0._4_4_ < uVar8) {
            FUN_1403e3958(&local_b8,uVar6 & 0xffffffff);
          }
          *(double *)(local_b8 + lVar17 * 0x18) = dVar2;
          *(double *)(local_b8 + 8 + lVar17 * 0x18) = dVar3;
          *(double *)(local_b8 + 0x10 + lVar17 * 0x18) = dVar4;
        }
        uVar8 = uVar16 + 1;
        if ((int)(uVar16 + 1) < (int)uVar13) {
          uVar8 = uVar13;
        }
        do {
          uVar12 = uVar8;
          if (uVar8 - 1 == uVar16) break;
          uVar16 = uVar16 + 1;
          uVar12 = uVar16;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar5 + 0x28) +
                                               (ulonglong)(uVar16 >> 9) * 8) +
                                             (ulonglong)(uVar16 & 0x1ff) * 2) - 1U));
        uVar16 = uVar12;
      } while (uVar16 != uVar13);
    }
    local_168 = local_b8;
    local_160 = (int)uStack_b0;
    FUN_14295d4ee(plVar1);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_70 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar1;
}



// FUNCTION 148463004 FUN_148463004 body=64 status=ok
// SIG undefined FUN_148463004(void)

longlong FUN_148463004(longlong param_1)

{
  char cVar1;
  
  FUN_146c6544c(param_1 + 0xa0);
  cVar1 = FUN_148474bbc(param_1);
  if (cVar1 != '\0') {
    FUN_148474c50(param_1);
    FUN_148474d22(param_1);
  }
  return param_1 + 0xa0;
}



// FUNCTION 148463044 FUN_148463044 body=188 status=ok
// SIG undefined FUN_148463044(void)

void FUN_148463044(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aee4fc8;
  if (param_1[0x78] != 0) {
    FUN_1400020a8();
  }
  FUN_1484747dd(param_1[0x76],*(undefined4 *)(param_1 + 0x77));
  if (param_1[0x76] != 0) {
    FUN_1400020a8();
  }
  FUN_14847486d(param_1[0x74],*(undefined4 *)(param_1 + 0x75));
  if (param_1[0x74] != 0) {
    FUN_1400020a8();
  }
  FUN_146ba0c6a(param_1 + 0x14);
  if (param_1[0xc] != 0) {
    plVar1 = param_1 + 0x10;
    if ((longlong *)param_1[0xe] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xe];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148463100 FUN_148463100 body=5240 status=ok
// SIG undefined FUN_148463100(void)

void FUN_148463100(longlong *param_1,char *param_2)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  double dVar3;
  int iVar4;
  code *pcVar5;
  double dVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  char cVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  undefined ***pppuVar17;
  longlong *plVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auStack_c78 [32];
  undefined8 *local_c58;
  ulonglong local_c50;
  undefined1 local_c48;
  double local_c38;
  double local_c30;
  double local_c28;
  double local_c20;
  double local_c18;
  double local_c10;
  undefined **local_c08;
  char *local_c00;
  code *local_bf8;
  ulonglong uStack_bf0;
  undefined ***local_be8;
  undefined8 uStack_be0;
  undefined **local_bd8;
  undefined1 *puStack_bd0;
  undefined4 local_bc8;
  undefined4 uStack_bc4;
  undefined4 uStack_bc0;
  undefined4 uStack_bbc;
  undefined **local_bb8;
  undefined **ppuStack_bb0;
  undefined ***local_ba8;
  double dStack_ba0;
  undefined **local_b98;
  undefined4 uStack_b90;
  undefined4 uStack_b8c;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  code *local_b78;
  ulonglong uStack_b70;
  undefined ***local_b68;
  undefined8 uStack_b60;
  undefined **local_b58;
  char **ppcStack_b50;
  undefined8 local_b48;
  undefined4 uStack_b40;
  undefined4 uStack_b3c;
  undefined4 uStack_b38;
  undefined4 local_b34;
  undefined1 local_b30 [8];
  undefined8 local_b28;
  undefined4 local_b20;
  undefined2 local_b18;
  undefined8 local_b10;
  undefined8 uStack_b08;
  undefined8 local_af0;
  undefined4 local_ae8;
  undefined8 local_ae4;
  undefined4 local_adc;
  undefined8 local_ad0;
  undefined4 local_ac8;
  undefined8 local_ac0;
  undefined8 uStack_ab8;
  undefined8 local_aa0;
  undefined4 local_a98;
  undefined4 uStack_a94;
  undefined4 uStack_a90;
  undefined4 local_a8c;
  undefined8 local_a88;
  undefined8 local_a80;
  undefined4 local_a78;
  undefined2 local_a70;
  undefined8 local_a68;
  undefined8 uStack_a60;
  undefined8 local_a58;
  double local_a50;
  double local_a48;
  undefined8 local_a40;
  undefined8 uStack_a38;
  double local_a30;
  double local_a28;
  ulonglong local_a20;
  undefined2 local_a18;
  undefined2 uStack_a16;
  undefined4 uStack_a14;
  undefined4 uStack_a10;
  undefined4 uStack_a0c;
  code *local_a08;
  undefined8 local_9f8;
  undefined4 local_9f0;
  undefined4 local_9ec;
  undefined4 uStack_9e8;
  undefined4 local_9e4;
  undefined1 *local_9e0;
  undefined8 local_9d8;
  undefined4 local_9d0;
  undefined8 local_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 local_9a8;
  undefined8 uStack_9a0;
  undefined4 local_998;
  undefined4 uStack_994;
  undefined4 uStack_990;
  undefined4 local_98c;
  undefined8 local_988;
  undefined8 local_980;
  ulonglong local_978;
  undefined8 local_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 local_958;
  undefined8 uStack_950;
  undefined4 local_948;
  undefined4 uStack_944;
  undefined4 uStack_940;
  undefined4 uStack_93c;
  undefined4 uStack_938;
  undefined4 uStack_934;
  undefined4 uStack_930;
  undefined4 uStack_92c;
  ulonglong local_928;
  undefined8 uStack_920;
  undefined8 local_918;
  undefined8 uStack_910;
  ulonglong local_908;
  undefined8 uStack_900;
  undefined4 uStack_8f8;
  undefined4 local_8f4;
  undefined4 uStack_8f0;
  undefined8 uStack_8ec;
  undefined8 local_8e0;
  undefined8 uStack_8d8;
  undefined8 local_8d0;
  undefined8 uStack_8c8;
  undefined4 local_8c0;
  undefined8 local_8b8;
  undefined8 local_8b0;
  undefined8 uStack_8a8;
  undefined8 local_8a0;
  undefined8 uStack_898;
  undefined8 local_890;
  undefined8 local_888;
  undefined8 uStack_880;
  undefined8 local_878;
  undefined8 uStack_870;
  undefined **local_868;
  undefined **ppuStack_860;
  undefined ***pppuStack_858;
  double dStack_850;
  undefined **local_848;
  char **ppcStack_840;
  undefined4 local_838;
  undefined4 uStack_834;
  undefined4 uStack_830;
  undefined4 uStack_82c;
  longlong local_820;
  undefined4 local_818;
  undefined8 local_810;
  undefined8 local_808;
  undefined4 local_800;
  undefined *local_7f8;
  longlong lStack_7f0;
  ulonglong local_7e8;
  ulonglong uStack_7e0;
  undefined8 local_7d8;
  undefined8 uStack_7d0;
  undefined8 local_7c8;
  longlong local_770;
  longlong local_758;
  uint local_72c;
  code *local_728 [2];
  undefined8 *local_718;
  undefined8 local_6e8 [2];
  undefined8 local_6d8;
  undefined *local_6a8 [46];
  int local_538;
  undefined **local_488;
  undefined **ppuStack_480;
  uint local_478;
  double local_470;
  double local_468;
  double local_460;
  undefined **local_458;
  undefined **ppuStack_450;
  undefined ***local_448;
  double dStack_440;
  undefined **local_438;
  char **ppcStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined **local_418;
  undefined1 local_410 [152];
  undefined8 local_378;
  undefined8 local_368;
  undefined8 local_338;
  double local_330;
  double local_328;
  double local_320;
  double local_318;
  double local_310;
  double local_308;
  undefined8 local_300;
  undefined1 local_2f8;
  undefined1 local_2f7;
  undefined8 local_2f4;
  undefined4 local_2ec;
  code *local_2e8;
  undefined8 local_2d8;
  undefined **local_2c8;
  undefined1 *local_2c0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined4 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined4 uStack_220;
  undefined4 local_21c;
  undefined4 uStack_218;
  undefined8 uStack_214;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8;
  undefined8 local_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined8 uStack_1cc;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  code *local_138;
  ulonglong uStack_130;
  undefined ***local_128;
  undefined8 uStack_120;
  undefined **local_118;
  undefined1 *puStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_c78;
  local_c00 = param_2;
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_1484631cd;
    pcVar5 = *(code **)(param_2 + 0x70);
    plVar18 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar18 = *(longlong **)(param_2 + 0x80);
    }
    uVar15 = (**(code **)(*plVar18 + 8))();
    cVar13 = (*pcVar5)(uVar15);
    *param_2 = cVar13;
    if (cVar13 != '\0') goto LAB_1484631cd;
  }
  local_478 = 0;
  local_488 = (undefined **)0x0;
  ppuStack_480 = (undefined **)0x0;
  local_470 = 1.0;
  local_468 = 1.0;
  local_460 = 1.0;
  local_448 = (undefined ***)0x0;
  local_438 = &PTR_LAB_149f36510;
  ppcStack_430 = (char **)&LAB_148473406;
  local_458 = (undefined **)FUN_146bd3274;
  memset(local_410,0,0x91);
  local_418 = &PTR_FUN_149f361f0;
  local_378 = 0;
  local_368 = 0;
  local_338 = 0;
  local_2f8 = 1;
  local_2f7 = 1;
  local_2f4 = 0x1000;
  local_2ec = 5;
  local_2d8 = 0;
  local_2c8 = &PTR_LAB_149f36510;
  local_2c0 = &LAB_146bd3270;
  local_2e8 = FUN_146bd3274;
  local_2a8 = 0;
  uStack_2a0 = 0x7fffffff00000000;
  local_298 = 0x7fffffff7fffffff;
  uStack_290 = 0x8000000180000001;
  local_288 = 0x7fffffff80000001;
  uStack_280 = 0x7fffffff7fffffff;
  local_278 = 0x8000000180000001;
  local_270 = 0x80000001;
  local_268 = 0x1000000000000000;
  local_260 = 0x2000000000000000;
  local_258 = 0x4000000000000000;
  local_250 = 0x40;
  uStack_218 = 0;
  uStack_214 = 0;
  uStack_228 = 0;
  uStack_220 = 0;
  local_21c = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  uStack_1d4 = 0;
  uStack_1d0 = 0;
  uStack_1cc = 0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0x40;
  local_190 = 0;
  uStack_188 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_170 = 0x40;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_320 = DAT_14c8464f0 + -8.0;
  local_328 = DAT_14c8464e8 + -8.0;
  local_330 = DAT_14c8464e0 + -8.0;
  local_308 = DAT_14c8464f0 + 8.0;
  local_310 = DAT_14c8464e8 + 8.0;
  local_318 = DAT_14c8464e0 + 8.0;
  local_300 = 0x3fd0000000000000;
  if (*(byte *)(param_1 + 0x1c) < 4) {
    local_478 = (uint)*(byte *)(param_1 + 0x1c);
  }
  if ((int)param_1[0x1a] == (int)param_1[0x18]) {
    local_c58 = (undefined8 *)((ulonglong)local_c58 & 0xffffffffffffff00);
    FUN_1411b354a(local_6a8,0,0,0);
    pppuVar17 = DAT_14c846520;
    ppuVar9 = DAT_14c846518;
    ppuVar8 = DAT_14c846510;
    iVar4 = (int)param_1[0x1a];
    dVar6 = DAT_14c8464f0;
    dVar29 = DAT_14c8464e8;
    dVar30 = DAT_14c8464e0;
    if ((longlong)iVar4 != 0) {
      lVar21 = param_1[0x19];
      dVar30 = 0.0;
      lVar26 = 0;
      dVar29 = 0.0;
      dVar6 = 0.0;
      do {
        dVar30 = dVar30 + *(double *)(lVar21 + 0x20 + lVar26);
        dVar29 = dVar29 + *(double *)(lVar21 + 0x28 + lVar26);
        dVar6 = dVar6 + *(double *)(lVar21 + 0x30 + lVar26);
        lVar26 = lVar26 + 0x50;
      } while ((longlong)iVar4 * 0x50 != lVar26);
      dVar31 = 1.0 / (double)iVar4;
      dVar6 = dVar6 * dVar31;
      dVar29 = dVar29 * dVar31;
      dVar30 = dVar31 * dVar30;
    }
    local_ba8 = DAT_14c846520;
    local_bb8 = DAT_14c846510;
    ppuStack_bb0 = DAT_14c846518;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0x3ff0000000000000;
    param_1[6] = (longlong)dVar30;
    param_1[7] = (longlong)dVar29;
    param_1[8] = (longlong)dVar6;
    param_1[9] = (longlong)ppuVar8;
    param_1[10] = (longlong)ppuVar9;
    param_1[0xb] = (longlong)pppuVar17;
    local_c08 = local_6a8;
    if (0 < (int)param_1[0x18]) {
      lVar21 = 0;
      do {
        lVar26 = param_1[0x19];
        lVar16 = lVar21 * 0x50;
        local_7c8 = *(undefined8 *)(lVar26 + 0x30 + lVar16);
        local_7f8 = *(undefined **)(lVar26 + lVar16);
        lStack_7f0 = ((undefined8 *)(lVar26 + lVar16))[1];
        puVar1 = (ulonglong *)(lVar26 + 0x10 + lVar16);
        local_7e8 = *puVar1;
        uStack_7e0 = puVar1[1];
        puVar2 = (undefined8 *)(lVar26 + 0x20 + lVar16);
        local_7d8 = *puVar2;
        uStack_7d0 = puVar2[1];
        dVar31 = *(double *)(lVar26 + 0x38 + lVar16);
        dVar32 = *(double *)(lVar26 + 0x40 + lVar16);
        dVar3 = *(double *)(lVar26 + 0x48 + lVar16);
        local_b98 = (undefined **)0x0;
        uStack_b90 = 0;
        local_bb8 = (undefined **)0x0;
        ppuStack_bb0 = (undefined **)0x0;
        uStack_b8c = 0x80;
        uStack_b88._0_4_ = 0xffffffff;
        uStack_b88._4_4_ = 0;
        local_b78 = (code *)0x0;
        uStack_b70 = uStack_b70 & 0xffffffff00000000;
        local_b48 = 0;
        uStack_b40 = 0;
        local_b68 = (undefined ***)0x0;
        uStack_b60 = 0;
        uStack_b3c = 0x80;
        uStack_b38 = 0xffffffff;
        local_b34 = 0;
        local_b28 = 0;
        local_b20 = 0;
        local_b18 = 0x101;
        local_af0 = 0;
        local_ae8 = 0;
        local_b10 = 0;
        uStack_b08 = 0;
        local_ae4 = 0xffffffff00000080;
        local_adc = 0;
        local_ad0 = 0;
        local_ac8 = 0;
        local_aa0 = 0;
        local_a98 = 0;
        local_ac0 = 0;
        uStack_ab8 = 0;
        uStack_a94 = 0x80;
        uStack_a90 = 0xffffffff;
        local_a8c = 0;
        local_a80 = 0;
        local_a78 = 0;
        local_a70 = 0x101;
        local_a48 = 0.0;
        local_a40._0_4_ = 0;
        local_a68 = 0;
        uStack_a60 = 0;
        local_a40._4_4_ = 0x80;
        uStack_a38._0_4_ = 0xffffffff;
        uStack_a38._4_4_ = 0;
        local_a28 = 0.0;
        local_a20 = local_a20 & 0xffffffff00000000;
        local_9f8 = 0;
        local_9f0 = 0;
        local_a18 = 0;
        uStack_a16 = 0;
        uStack_a14 = 0;
        uStack_a10 = 0;
        uStack_a0c = 0;
        local_9ec = 0x80;
        uStack_9e8 = 0xffffffff;
        local_9e4 = 0;
        local_9d8 = 0;
        local_9d0 = 0;
        local_9c8 = CONCAT62(local_9c8._2_6_,0x101);
        uStack_9a0 = 0;
        local_998 = 0;
        uStack_9c0 = 0;
        uStack_9b8 = 0;
        uStack_994 = 0x80;
        uStack_990 = 0xffffffff;
        local_98c = 0;
        local_980 = 0;
        local_978 = local_978 & 0xffffffff00000000;
        uStack_950 = 0;
        local_948 = 0;
        local_970 = 0;
        uStack_968 = 0;
        uStack_944 = 0x80;
        uStack_940 = 0xffffffff;
        uStack_93c = 0;
        uStack_930 = 0;
        uStack_92c = 0;
        local_928 = local_928 & 0xffffffff00000000;
        uStack_920 = CONCAT62(uStack_920._2_6_,0x101);
        local_908 = 0;
        uStack_900 = 0;
        local_918 = 0;
        uStack_910 = 0;
        local_6e8[0] = 0;
        local_6d8 = 0;
        local_728[0] = (code *)0x0;
        local_718 = (undefined8 *)0x0;
        local_718 = (undefined8 *)FUN_14001cc68(0x70,8);
        *local_718 = &PTR_FUN_14aee5420;
        local_718[7] = local_7c8;
        local_718[5] = local_7d8;
        local_718[6] = uStack_7d0;
        local_718[3] = local_7e8;
        local_718[4] = uStack_7e0;
        local_718[1] = local_7f8;
        local_718[2] = lStack_7f0;
        local_718[8] = dVar31;
        local_718[9] = dVar32;
        local_718[10] = dVar3;
        local_718[0xb] = dVar30;
        local_718[0xc] = dVar29;
        local_718[0xd] = dVar6;
        if (local_718 + 1 != (undefined8 *)0x0) {
          local_728[0] = FUN_143b5ae04;
        }
        local_c58 = local_6e8;
        local_c50 = local_c50 & 0xffffffffffffff00;
        FUN_146bcbbdc(&local_c08,*(undefined8 *)(param_1[0x17] + lVar21 * 0x10),&local_bb8,local_728
                     );
        if (dVar31 * dVar32 * dVar3 < 0.0) {
          lVar26 = *(longlong *)(param_1[0x17] + lVar21 * 0x10);
          uVar20 = *(int *)(lVar26 + 0x140) * 0x200 + *(int *)(lVar26 + 0x144);
          uVar24 = 0;
          if ((uVar20 != 0) &&
             (uVar24 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar26 + 0x148) - 1U))) {
            uVar22 = 1;
            uVar23 = 1;
            if (1 < (int)uVar20) {
              uVar22 = uVar20;
            }
            do {
              uVar24 = uVar22;
              if (uVar22 == uVar23) break;
              uVar19 = uVar23 >> 9;
              uVar25 = uVar23 & 0x1ff;
              uVar24 = uVar23;
              uVar23 = uVar23 + 1;
            } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar26 + 0x148))[uVar19] +
                                                 (ulonglong)uVar25 * 2) - 1U));
          }
LAB_148463a6a:
          if (uVar24 != uVar20) {
            uVar14 = FUN_146bcd1d8(&local_b10,uVar24);
            FUN_146c0adfe(local_6a8,uVar14);
            uVar22 = uVar24 + 1;
            if ((int)(uVar24 + 1) < (int)uVar20) {
              uVar22 = uVar20;
            }
            uVar23 = uVar24;
            do {
              uVar24 = uVar22;
              if (uVar22 - 1 == uVar23) break;
              uVar24 = uVar23 + 1;
              uVar23 = uVar24;
            } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                   (*(longlong *)(lVar26 + 0x148) +
                                                   (ulonglong)(uVar24 >> 9) * 8) +
                                                 (ulonglong)(uVar24 & 0x1ff) * 2) - 1U));
            goto LAB_148463a6a;
          }
        }
        FUN_146bfdcfe(&local_bb8);
        lVar21 = lVar21 + 1;
      } while (lVar21 < (int)param_1[0x18]);
    }
    if (local_538 != 0) {
      if ((*(char *)((longlong)param_1 + 0xe1) == '\x01') && (0.0 < (double)param_1[0x1d])) {
        FUN_145c688c4(local_6a8,&local_bb8,1);
        dVar29 = (double)CONCAT44(uStack_b8c,uStack_b90) - (double)local_ba8;
        dVar29 = (double)(-(ulonglong)(0.0 <= dVar29) & (ulonglong)dVar29);
        dVar6 = (double)(-(ulonglong)(0.0 <= (double)local_b98 - (double)ppuStack_bb0) &
                        (ulonglong)((double)local_b98 - (double)ppuStack_bb0));
        uVar27 = -(ulonglong)(dVar29 <= dVar6);
        dVar6 = (double)(~uVar27 & (ulonglong)dVar29 | uVar27 & (ulonglong)dVar6);
        dVar29 = (double)(-(ulonglong)(0.0 <= dStack_ba0 - (double)local_bb8) &
                         (ulonglong)(dStack_ba0 - (double)local_bb8));
        uVar27 = -(ulonglong)(dVar6 <= dVar29);
        dVar29 = (double)(uVar27 & (ulonglong)dVar29 | ~uVar27 & (ulonglong)dVar6) /
                 (double)*(int *)((longlong)param_1 + 0xac);
        dVar6 = (double)param_1[0x1d];
        dVar29 = dVar29 + dVar29;
        uVar27 = -(ulonglong)(dVar6 <= dVar29);
        FUN_146c38c5e(local_6a8,0);
        FUN_1482d2c96(&local_bb8,local_6a8);
        local_b68 = (undefined ***)
                    ((~uVar27 & (ulonglong)dVar6 | (ulonglong)dVar29 & uVar27) ^ 0x8000000000000000)
        ;
        uStack_b60 = CONCAT62(uStack_b60._2_6_,0x100);
        FUN_1482d2df4(&local_bb8);
        FUN_14830cf42(&local_bb8);
      }
      local_488 = local_6a8;
      FUN_146ba21d6(&local_7f8,local_6a8,1);
      if (*(char *)((longlong)param_1 + 0xe1) == '\x01') {
        ppcStack_840 = (char **)0x0;
        local_838 = 0;
        ppuStack_860 = (undefined **)0x0;
        pppuStack_858 = (undefined ***)0x0;
        uStack_834 = 0x80;
        uStack_830 = 0xffffffff;
        uStack_82c = 0;
        local_820 = 0;
        local_818 = 0;
        local_810 = 0;
        local_808 = 0x4000000000000000;
        local_800 = 2;
        local_868 = &local_7f8;
        FUN_146bef8a8(&local_868);
        dStack_ba0 = 0.5;
        local_b98 = (undefined **)0x3ff0000000000000;
        uStack_b90 = CONCAT31(uStack_b90._1_3_,1);
        uStack_b8c = 4;
        uStack_b88._0_4_ = 0;
        uStack_b88._4_4_ = 0x3ff00000;
        local_b68 = (undefined ***)0x0;
        local_b58 = &PTR_LAB_149f36510;
        ppcStack_b50 = (char **)&LAB_148474896;
        local_b78 = FUN_146bd3274;
        local_bb8 = local_6a8;
        ppuStack_bb0 = &local_7f8;
        local_ba8 = &local_868;
        memset(local_b30,0,0x91);
        uVar11 = uStack_b3c;
        uVar14 = uStack_b40;
        puStack_bd0 = (undefined1 *)ppcStack_b50;
        local_bd8 = local_b58;
        uVar15 = uStack_b60;
        local_be8 = local_b68;
        uVar27 = uStack_b70;
        local_bf8 = local_b78;
        uStack_b38 = 0x49f361f0;
        local_b34 = 1;
        local_a98 = 0;
        uStack_a94 = 0;
        local_a88 = 0;
        local_a58 = 0;
        local_a18 = 0x101;
        uStack_a14 = 0x1000;
        uStack_a10 = 0;
        uStack_a0c = 5;
        local_9f8 = 0;
        uStack_9e8 = 0x49f36510;
        local_9e4 = 1;
        local_9e0 = &LAB_146bd3270;
        local_a08 = FUN_146bd3274;
        local_9c8 = 0;
        uStack_9c0 = 0x7fffffff00000000;
        uStack_9b8 = 0x7fffffff7fffffff;
        uStack_9b0 = 0x8000000180000001;
        local_9a8 = 0x7fffffff80000001;
        uStack_9a0 = 0x7fffffff7fffffff;
        local_998 = 0x80000001;
        uStack_994 = 0x80000001;
        uStack_990 = 0x80000001;
        local_988 = 0x1000000000000000;
        local_980 = 0x2000000000000000;
        local_978 = 0x4000000000000000;
        local_970 = 0x40;
        uStack_938 = 0;
        uStack_934 = 0;
        uStack_930 = 0;
        local_948 = 0;
        uStack_944 = 0;
        uStack_940 = 0;
        uStack_93c = 0;
        local_958 = 0;
        uStack_950 = 0;
        uStack_968 = 0;
        uStack_960 = 0;
        local_928 = 0;
        uStack_920 = 0;
        local_918 = 0;
        uStack_910 = 0;
        local_908 = local_908 & 0xffffffffffffff00;
        uStack_900 = 0;
        uStack_8f8 = 0;
        local_8f4 = 0;
        uStack_8f0 = 0;
        uStack_8ec = 0;
        local_8e0 = 0;
        uStack_8d8 = 0;
        local_8d0 = 0;
        uStack_8c8 = 0;
        local_8c0 = 0;
        local_8b8 = 0x40;
        local_8b0 = 0;
        uStack_8a8 = 0;
        local_8a0 = 0;
        uStack_898 = 0;
        local_890 = 0x40;
        local_888 = 0;
        uStack_880 = 0;
        local_878 = 0;
        uStack_870 = 0;
        dVar6 = DAT_14c8464f0 + -8.0;
        dVar29 = DAT_14c8464e0 + 8.0;
        local_a50 = DAT_14c8464e0 + -8.0;
        local_a48 = DAT_14c8464e8 + -8.0;
        local_a40._0_4_ = SUB84(dVar6,0);
        local_a40._4_4_ = (undefined4)((ulonglong)dVar6 >> 0x20);
        uStack_a38._0_4_ = SUB84(dVar29,0);
        uStack_a38._4_4_ = (undefined4)((ulonglong)dVar29 >> 0x20);
        local_a30 = DAT_14c8464e8 + 8.0;
        local_a28 = DAT_14c8464f0 + 8.0;
        local_a20 = 0x3fd0000000000000;
        if ((int)local_72c < 0) {
          dVar31 = -INFINITY;
          dVar32 = -INFINITY;
          dVar30 = -INFINITY;
        }
        else {
          lVar21 = *(longlong *)(local_770 + (ulonglong)(local_72c >> 9) * 8);
          lVar16 = (ulonglong)((local_72c & 0x1ff) << 3) * 3;
          lVar26 = *(longlong *)(local_758 + (ulonglong)(local_72c >> 9) * 8);
          dVar30 = *(double *)(lVar21 + 0x10 + lVar16);
          dVar31 = *(double *)(lVar26 + 0x10 + lVar16);
          dVar32 = *(double *)(lVar21 + 8 + lVar16);
          dVar3 = *(double *)(lVar26 + 8 + lVar16);
          dVar31 = (dVar30 + dVar31) - (dVar30 - dVar31);
          dVar32 = (dVar32 + dVar3) - (dVar32 - dVar3);
          dVar30 = (*(double *)(lVar21 + lVar16) + *(double *)(lVar26 + lVar16)) -
                   (*(double *)(lVar21 + lVar16) - *(double *)(lVar26 + lVar16));
        }
        local_b98 = (undefined **)0x0;
        dVar31 = (double)(-(ulonglong)(0.0 <= dVar31) & (ulonglong)dVar31);
        dVar32 = (double)(-(ulonglong)(0.0 <= dVar32) & (ulonglong)dVar32);
        uVar28 = -(ulonglong)(dVar31 <= dVar32);
        dVar31 = (double)(~uVar28 & (ulonglong)dVar31 | uVar28 & (ulonglong)dVar32);
        dVar30 = (double)(-(ulonglong)(0.0 <= dVar30) & (ulonglong)dVar30);
        uVar28 = -(ulonglong)(dVar31 <= dVar30);
        dVar30 = ((double)(uVar28 & (ulonglong)dVar30 | ~uVar28 & (ulonglong)dVar31) + 0.0) /
                 (double)*(int *)((longlong)param_1 + 0xac);
        uStack_b88._0_4_ = SUB84(dVar30,0);
        uStack_b88._4_4_ = (undefined4)((ulonglong)dVar30 >> 0x20);
        local_108 = local_b48;
        uVar12 = local_108;
        uStack_100 = CONCAT44(uStack_b3c,uStack_b40);
        local_118 = local_b58;
        puStack_110 = (undefined1 *)ppcStack_b50;
        local_128 = local_b68;
        uStack_120 = uStack_b60;
        local_138 = local_b78;
        uStack_130 = uStack_b70;
        uVar7 = CONCAT44(uStack_bc4,local_bc8);
        uStack_b40 = uStack_bc0;
        uStack_b3c = uStack_bbc;
        local_b58 = &PTR_LAB_14aee5440;
        ppcStack_b50 = &local_c00;
        local_b68 = (undefined ***)0x0;
        uStack_b60 = uStack_be0;
        local_b78 = FUN_143b5af0a;
        uStack_b70 = uStack_bf0;
        local_108._0_4_ = (undefined4)local_b48;
        local_108._4_4_ = (undefined4)((ulonglong)local_b48 >> 0x20);
        local_bc8 = (undefined4)local_108;
        uStack_bc4 = local_108._4_4_;
        uStack_bc0 = uVar14;
        uStack_bbc = uVar11;
        uStack_be0 = uVar15;
        uStack_bf0 = uVar27;
        local_b48 = uVar7;
        local_108 = uVar12;
        local_a40 = dVar6;
        uStack_a38 = dVar29;
        uStack_b88 = dVar30;
        if (local_bf8 != (code *)0x0) {
          pppuVar17 = local_be8;
          if (local_be8 == (undefined ***)0x0) {
            pppuVar17 = &local_bd8;
          }
          (*(code *)(*pppuVar17)[2])();
        }
        uVar15 = FUN_1484629d6(&local_bb8);
        FUN_146c00e98(local_6a8,uVar15);
        pcVar10 = local_c00;
        if (local_c00 == (char *)0x0) {
LAB_148464156:
          if (*(char *)((longlong)param_1 + 0xe2) == '\x01') {
            local_c50 = 0x3fe0000000000000;
            local_c48 = 1;
            local_c58 = (undefined8 *)((ulonglong)local_c58 & 0xffffffff00000000);
            FUN_148328d62(local_6a8,1,0,0);
          }
          FUN_146bee918(&local_7f8,0);
          local_7e8 = (ulonglong)(uint)(*(int *)(lStack_7f0 + 0x214) + *(int *)(lStack_7f0 + 0x218))
          ;
          FUN_146ba0c6a(&uStack_b38);
          if (local_b78 != (code *)0x0) {
            pppuVar17 = &local_b58;
            if (local_b68 != (undefined ***)0x0) {
              pppuVar17 = local_b68;
            }
            (*(code *)(*pppuVar17)[2])(pppuVar17);
          }
          local_818 = 0;
          if (local_820 != 0) {
            FUN_1400020a8();
          }
          FUN_146bddd50(&ppuStack_860);
          goto LAB_148464213;
        }
        if (*local_c00 == '\0') {
          pcVar5 = *(code **)(local_c00 + 0x70);
          plVar18 = (longlong *)(local_c00 + 0x90);
          if (*(longlong **)(local_c00 + 0x80) != (longlong *)0x0) {
            plVar18 = *(longlong **)(local_c00 + 0x80);
          }
          uVar15 = (**(code **)(*plVar18 + 8))();
          cVar13 = (*pcVar5)(uVar15);
          *pcVar10 = cVar13;
          if (cVar13 == '\0') goto LAB_148464156;
        }
        FUN_146ba0c6a(&uStack_b38);
        if (local_b78 != (code *)0x0) {
          pppuVar17 = &local_b58;
          if (local_b68 != (undefined ***)0x0) {
            pppuVar17 = local_b68;
          }
          (*(code *)(*pppuVar17)[2])(pppuVar17);
        }
        local_818 = 0;
        if (local_820 != 0) {
          FUN_1400020a8();
        }
        FUN_146bddd50(&ppuStack_860);
      }
      else {
LAB_148464213:
        if (local_538 != 0) {
          dVar6 = (double)param_1[0x1b];
          iVar4 = *(int *)((longlong)param_1 + 0xac);
          lVar21 = param_1[0x15];
          ppuStack_480 = &local_7f8;
          FUN_145c688c4(local_6a8,&local_c38,1);
          uVar15 = uStack_420;
          ppcStack_840 = ppcStack_430;
          local_848 = local_438;
          dVar30 = dStack_440;
          pppuStack_858 = local_448;
          ppuVar8 = ppuStack_450;
          local_868 = local_458;
          local_470 = dVar6;
          dVar31 = (double)(-(ulonglong)(0.0 <= local_c10 - local_c28) &
                           (ulonglong)(local_c10 - local_c28));
          dVar29 = (double)(-(ulonglong)(0.0 <= local_c18 - local_c30) &
                           (ulonglong)(local_c18 - local_c30));
          uVar27 = -(ulonglong)(dVar31 <= dVar29);
          dVar29 = (double)(~uVar27 & (ulonglong)dVar31 | uVar27 & (ulonglong)dVar29);
          dVar31 = (double)(-(ulonglong)(0.0 <= local_c20 - local_c38) &
                           (ulonglong)(local_c20 - local_c38));
          uVar27 = -(ulonglong)(dVar29 <= dVar31);
          dVar6 = dVar6 + dVar6 + (double)(uVar27 & (ulonglong)dVar31 | ~uVar27 & (ulonglong)dVar29)
          ;
          local_468 = dVar6 / (double)iVar4;
          local_460 = dVar6 / (double)(int)lVar21;
          uStack_b88._0_4_ = (undefined4)local_428;
          uStack_b88._4_4_ = (undefined4)((ulonglong)local_428 >> 0x20);
          uStack_b80 = uStack_420;
          local_b98 = local_438;
          uStack_b90 = SUB84(ppcStack_430,0);
          uStack_b8c = (undefined4)((ulonglong)ppcStack_430 >> 0x20);
          local_ba8 = local_448;
          dStack_ba0 = dStack_440;
          local_bb8 = local_458;
          ppuStack_bb0 = ppuStack_450;
          local_428 = CONCAT44(uStack_834,local_838);
          uStack_420 = CONCAT44(uStack_82c,uStack_830);
          local_438 = &PTR_LAB_14aee5460;
          ppcStack_430 = &local_c00;
          local_448 = (undefined ***)0x0;
          dStack_440 = dStack_850;
          local_458 = (undefined **)FUN_143b5af9c;
          ppuStack_450 = ppuStack_860;
          uStack_b80._0_4_ = (undefined4)uVar15;
          uStack_b80._4_4_ = (undefined4)((ulonglong)uVar15 >> 0x20);
          local_838 = (undefined4)uStack_b88;
          uStack_834 = uStack_b88._4_4_;
          uStack_830 = (undefined4)uStack_b80;
          uStack_82c = uStack_b80._4_4_;
          dStack_850 = dVar30;
          ppuStack_860 = ppuVar8;
          uStack_b80 = uVar15;
          if (local_868 != (undefined **)0x0) {
            pppuVar17 = pppuStack_858;
            if (pppuStack_858 == (undefined ***)0x0) {
              pppuVar17 = &local_848;
            }
            (*(code *)(*pppuVar17)[2])();
          }
          pcVar10 = local_c00;
          if (local_c00 == (char *)0x0) {
LAB_14846447b:
            lVar21 = param_1[1];
            uVar15 = FUN_14846457a(&local_488);
            FUN_146c00e98(lVar21,uVar15);
            (**(code **)(*param_1 + 0x20))(param_1,local_c00,local_460);
          }
          else if (*local_c00 == '\0') {
            pcVar5 = *(code **)(local_c00 + 0x70);
            plVar18 = (longlong *)(local_c00 + 0x90);
            if (*(longlong **)(local_c00 + 0x80) != (longlong *)0x0) {
              plVar18 = *(longlong **)(local_c00 + 0x80);
            }
            uVar15 = (**(code **)(*plVar18 + 8))();
            cVar13 = (*pcVar5)(uVar15);
            *pcVar10 = cVar13;
            if (cVar13 == '\0') goto LAB_14846447b;
          }
        }
      }
      FUN_1457e5b52(&local_7f8);
    }
    FUN_141082778(local_6a8);
  }
  FUN_146ba0c6a(&local_418);
  if (local_458 != (undefined **)0x0) {
    pppuVar17 = local_448;
    if (local_448 == (undefined ***)0x0) {
      pppuVar17 = &local_438;
    }
    (*(code *)(*pppuVar17)[2])();
  }
LAB_1484631cd:
  if ((local_f0 ^ (ulonglong)auStack_c78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14846457a FUN_14846457a body=179 status=ok
// SIG undefined FUN_14846457a(void)

longlong FUN_14846457a(longlong param_1)

{
  double dVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  
  FUN_146c6544c(param_1 + 0x70);
  cVar2 = FUN_148477cce(param_1);
  if (cVar2 != '\0') {
    dVar1 = *(double *)(param_1 + 0x18);
    uVar3 = -(ulonglong)(-dVar1 <= dVar1);
    uVar3 = ~uVar3 & (ulonglong)-dVar1 | (ulonglong)dVar1 & uVar3;
    uVar4 = (uint)(uVar3 >> 0x20);
    if ((*(uint *)(param_1 + 0x10) & 0xfffffffd) == 0) {
      uVar4 = uVar4 ^ 0x80000000;
    }
    FUN_143b5b02e(param_1,uVar3,CONCAT44(uVar4,(int)uVar3));
    if ((*(uint *)(param_1 + 0x10) & 0xfffffffe) == 2) {
      FUN_143b5b622(param_1,uVar3,CONCAT44(uVar4,(int)uVar3) ^ 0x8000000000000000);
    }
  }
  return param_1 + 0x70;
}



// FUNCTION 14846462e FUN_14846462e body=3658 status=ok
// SIG undefined FUN_14846462e(void)

void FUN_14846462e(longlong *param_1,char *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  double dVar3;
  int iVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined4 **ppuVar7;
  char *pcVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  uint uVar11;
  char cVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  uint uVar15;
  longlong lVar16;
  undefined ***pppuVar17;
  longlong *plVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auStack_8c8 [32];
  undefined8 *local_8a8;
  undefined1 local_8a0;
  undefined1 *local_898;
  char *local_890;
  code *local_888;
  undefined4 uStack_880;
  undefined4 uStack_87c;
  undefined ***local_878;
  undefined8 uStack_870;
  undefined **local_868;
  undefined1 *puStack_860;
  undefined8 local_858;
  undefined8 uStack_850;
  undefined8 local_848;
  undefined8 uStack_840;
  undefined4 **local_838;
  double local_830;
  double local_828;
  undefined4 local_820;
  undefined4 uStack_81c;
  undefined8 uStack_818;
  code *local_808;
  ulonglong uStack_800;
  undefined ***local_7f8;
  undefined8 uStack_7f0;
  undefined **local_7e8;
  char **ppcStack_7e0;
  undefined8 local_7d8;
  undefined4 uStack_7d0;
  undefined4 uStack_7cc;
  undefined4 uStack_7c8;
  undefined4 local_7c4;
  undefined1 local_7c0 [8];
  undefined8 local_7b8;
  undefined4 local_7b0;
  undefined2 local_7a8;
  undefined8 local_7a0;
  undefined8 uStack_798;
  undefined8 local_780;
  undefined4 local_778;
  undefined8 local_774;
  undefined4 local_76c;
  undefined8 local_760;
  undefined4 local_758;
  undefined8 local_750;
  undefined8 uStack_748;
  undefined8 local_730;
  undefined4 local_728;
  undefined4 uStack_724;
  undefined4 uStack_720;
  undefined4 local_71c;
  undefined8 local_718;
  undefined8 local_710;
  undefined4 local_708;
  undefined2 local_700;
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  undefined8 local_6e8;
  double local_6e0;
  double local_6d8;
  undefined8 local_6d0;
  undefined8 uStack_6c8;
  double local_6c0;
  double local_6b8;
  ulonglong local_6b0;
  undefined1 local_6a8;
  undefined1 uStack_6a7;
  undefined2 uStack_6a6;
  undefined4 uStack_6a4;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  code *local_698;
  undefined8 local_688;
  undefined4 local_680;
  undefined4 local_67c;
  undefined4 uStack_678;
  undefined4 local_674;
  undefined1 *local_670;
  undefined8 local_668;
  undefined4 local_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined4 local_628;
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 local_61c;
  undefined8 local_618;
  undefined8 local_610;
  ulonglong local_608;
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined4 local_5d8;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined4 uStack_5c8;
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  ulonglong local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  ulonglong local_598;
  undefined8 uStack_590;
  undefined4 uStack_588;
  undefined4 local_584;
  undefined4 uStack_580;
  undefined8 uStack_57c;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined4 local_550;
  undefined8 local_548;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined8 local_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined4 *local_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4d0;
  undefined4 local_4c8;
  undefined8 local_4c4;
  undefined4 local_4bc;
  longlong local_4b0;
  undefined4 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined4 local_490;
  undefined4 local_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined4 local_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined8 local_458;
  longlong local_400;
  longlong local_3e8;
  uint local_3bc;
  code *local_3b8 [2];
  undefined8 *local_3a8;
  undefined8 local_378 [2];
  undefined8 local_368;
  undefined1 local_338 [368];
  int local_1c8;
  code *local_118;
  undefined8 uStack_110;
  undefined ***local_108;
  undefined8 uStack_100;
  undefined **local_f8;
  undefined1 *puStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_8c8;
  local_890 = param_2;
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_148464c96;
    pcVar5 = *(code **)(param_2 + 0x70);
    plVar18 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar18 = *(longlong **)(param_2 + 0x80);
    }
    uVar14 = (**(code **)(*plVar18 + 8))();
    cVar12 = (*pcVar5)(uVar14);
    *param_2 = cVar12;
    if (cVar12 != '\0') goto LAB_148464c96;
  }
  if ((int)param_1[0x1a] != (int)param_1[0x18]) goto LAB_148464c96;
  local_8a8 = (undefined8 *)((ulonglong)local_8a8 & 0xffffffffffffff00);
  FUN_1411b354a(local_338,0,0,0);
  ppuVar7 = DAT_14c846520;
  puVar1 = DAT_14c846518;
  puVar6 = DAT_14c846510;
  iVar4 = (int)param_1[0x1a];
  dVar29 = DAT_14c8464e8;
  dVar25 = DAT_14c8464f0;
  dVar27 = DAT_14c8464e0;
  if ((longlong)iVar4 != 0) {
    lVar23 = param_1[0x19];
    dVar27 = 0.0;
    lVar21 = 0;
    dVar29 = 0.0;
    dVar25 = 0.0;
    do {
      dVar27 = dVar27 + *(double *)(lVar23 + 0x20 + lVar21);
      dVar29 = dVar29 + *(double *)(lVar23 + 0x28 + lVar21);
      dVar25 = dVar25 + *(double *)(lVar23 + 0x30 + lVar21);
      lVar21 = lVar21 + 0x50;
    } while ((longlong)iVar4 * 0x50 != lVar21);
    dVar26 = 1.0 / (double)iVar4;
    dVar29 = dVar29 * dVar26;
    dVar25 = dVar25 * dVar26;
    dVar27 = dVar26 * dVar27;
  }
  local_838 = DAT_14c846520;
  local_848 = DAT_14c846510;
  uStack_840 = DAT_14c846518;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x3ff0000000000000;
  param_1[6] = (longlong)dVar27;
  param_1[7] = (longlong)dVar29;
  param_1[8] = (longlong)dVar25;
  local_848._0_4_ = SUB84(puVar6,0);
  local_848._4_4_ = (undefined4)((ulonglong)puVar6 >> 0x20);
  uStack_840._0_4_ = SUB84(puVar1,0);
  uStack_840._4_4_ = (undefined4)((ulonglong)puVar1 >> 0x20);
  *(undefined4 *)(param_1 + 9) = (undefined4)local_848;
  *(undefined4 *)((longlong)param_1 + 0x4c) = local_848._4_4_;
  *(undefined4 *)(param_1 + 10) = (undefined4)uStack_840;
  *(undefined4 *)((longlong)param_1 + 0x54) = uStack_840._4_4_;
  param_1[0xb] = (longlong)ppuVar7;
  local_898 = local_338;
  local_848 = puVar6;
  uStack_840 = puVar1;
  if (0 < (int)param_1[0x18]) {
    lVar23 = 0;
    do {
      lVar21 = param_1[0x19];
      lVar16 = lVar23 * 0x50;
      local_458 = *(undefined8 *)(lVar21 + 0x30 + lVar16);
      puVar1 = (undefined4 *)(lVar21 + lVar16);
      local_488 = *puVar1;
      uStack_484 = puVar1[1];
      uStack_480 = puVar1[2];
      uStack_47c = puVar1[3];
      puVar2 = (undefined8 *)(lVar21 + 0x10 + lVar16);
      local_478 = *puVar2;
      uStack_470 = puVar2[1];
      puVar1 = (undefined4 *)(lVar21 + 0x20 + lVar16);
      local_468 = *puVar1;
      uStack_464 = puVar1[1];
      uStack_460 = puVar1[2];
      uStack_45c = puVar1[3];
      dVar26 = *(double *)(lVar21 + 0x38 + lVar16);
      dVar28 = *(double *)(lVar21 + 0x40 + lVar16);
      dVar3 = *(double *)(lVar21 + 0x48 + lVar16);
      local_828 = 0.0;
      local_820 = 0;
      local_848 = (undefined1 *)0x0;
      uStack_840 = (undefined4 *)0x0;
      uStack_81c = 0x80;
      uStack_818._0_4_ = 0xffffffff;
      uStack_818._4_4_ = 0;
      local_808 = (code *)0x0;
      uStack_800 = uStack_800 & 0xffffffff00000000;
      local_7d8 = 0;
      uStack_7d0 = 0;
      local_7f8 = (undefined ***)0x0;
      uStack_7f0 = 0;
      uStack_7cc = 0x80;
      uStack_7c8 = 0xffffffff;
      local_7c4 = 0;
      local_7b8 = 0;
      local_7b0 = 0;
      local_7a8 = 0x101;
      local_780 = 0;
      local_778 = 0;
      local_7a0 = 0;
      uStack_798 = 0;
      local_774 = 0xffffffff00000080;
      local_76c = 0;
      local_760 = 0;
      local_758 = 0;
      local_730 = 0;
      local_728 = 0;
      local_750 = 0;
      uStack_748 = 0;
      uStack_724 = 0x80;
      uStack_720 = 0xffffffff;
      local_71c = 0;
      local_710 = 0;
      local_708 = 0;
      local_700 = 0x101;
      local_6d8 = 0.0;
      local_6d0._0_4_ = 0;
      local_6f8 = 0;
      uStack_6f0 = 0;
      local_6d0._4_4_ = 0x80;
      uStack_6c8._0_4_ = 0xffffffff;
      uStack_6c8._4_4_ = 0;
      local_6b8 = 0.0;
      local_6b0 = local_6b0 & 0xffffffff00000000;
      local_688 = 0;
      local_680 = 0;
      local_6a8 = 0;
      uStack_6a7 = 0;
      uStack_6a6 = 0;
      uStack_6a4 = 0;
      uStack_6a0 = 0;
      uStack_69c = 0;
      local_67c = 0x80;
      uStack_678 = 0xffffffff;
      local_674 = 0;
      local_668 = 0;
      local_660 = 0;
      local_658 = CONCAT62(local_658._2_6_,0x101);
      uStack_630 = 0;
      local_628 = 0;
      uStack_650 = 0;
      uStack_648 = 0;
      uStack_624 = 0x80;
      uStack_620 = 0xffffffff;
      local_61c = 0;
      local_610 = 0;
      local_608 = local_608 & 0xffffffff00000000;
      uStack_5e0 = 0;
      local_5d8 = 0;
      local_600 = 0;
      uStack_5f8 = 0;
      uStack_5d4 = 0x80;
      uStack_5d0 = 0xffffffff;
      uStack_5cc = 0;
      uStack_5c0 = 0;
      uStack_5bc = 0;
      local_5b8 = local_5b8 & 0xffffffff00000000;
      uStack_5b0 = CONCAT62(uStack_5b0._2_6_,0x101);
      local_598 = 0;
      uStack_590 = 0;
      local_5a8 = 0;
      uStack_5a0 = 0;
      local_378[0] = 0;
      local_368 = 0;
      local_3b8[0] = (code *)0x0;
      local_3a8 = (undefined8 *)0x0;
      local_3a8 = (undefined8 *)FUN_14001cc68(0x70,8);
      *local_3a8 = &PTR_FUN_14aee54c0;
      local_3a8[7] = local_458;
      *(undefined4 *)(local_3a8 + 5) = local_468;
      *(undefined4 *)((longlong)local_3a8 + 0x2c) = uStack_464;
      *(undefined4 *)(local_3a8 + 6) = uStack_460;
      *(undefined4 *)((longlong)local_3a8 + 0x34) = uStack_45c;
      local_3a8[3] = local_478;
      local_3a8[4] = uStack_470;
      *(undefined4 *)(local_3a8 + 1) = local_488;
      *(undefined4 *)((longlong)local_3a8 + 0xc) = uStack_484;
      *(undefined4 *)(local_3a8 + 2) = uStack_480;
      *(undefined4 *)((longlong)local_3a8 + 0x14) = uStack_47c;
      local_3a8[8] = dVar26;
      local_3a8[9] = dVar28;
      local_3a8[10] = dVar3;
      local_3a8[0xb] = dVar27;
      local_3a8[0xc] = dVar29;
      local_3a8[0xd] = dVar25;
      if (local_3a8 + 1 != (undefined8 *)0x0) {
        local_3b8[0] = FUN_143b5be76;
      }
      local_8a8 = local_378;
      local_8a0 = 0;
      FUN_146bcbbdc(&local_898,*(undefined8 *)(param_1[0x17] + lVar23 * 0x10),&local_848,local_3b8);
      if (dVar26 * dVar28 * dVar3 < 0.0) {
        lVar21 = *(longlong *)(param_1[0x17] + lVar23 * 0x10);
        uVar22 = *(int *)(lVar21 + 0x140) * 0x200 + *(int *)(lVar21 + 0x144);
        uVar20 = 0;
        if ((uVar22 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar21 + 0x148) - 1U)))
        {
          uVar11 = 1;
          uVar19 = 1;
          if (1 < (int)uVar22) {
            uVar19 = uVar22;
          }
          do {
            uVar15 = uVar11;
            uVar20 = uVar19;
            if (uVar19 == uVar15) break;
            uVar11 = uVar15 + 1;
            uVar20 = uVar15;
          } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar21 + 0x148))[uVar15 >> 9] +
                                               (ulonglong)(uVar15 & 0x1ff) * 2) - 1U));
        }
LAB_148464c53:
        if (uVar20 != uVar22) {
          uVar13 = FUN_146bcd1d8(&local_7a0,uVar20);
          FUN_146c0adfe(local_338,uVar13);
          uVar11 = uVar20 + 1;
          if ((int)(uVar20 + 1) < (int)uVar22) {
            uVar11 = uVar22;
          }
          uVar19 = uVar20;
          do {
            uVar20 = uVar11;
            if (uVar11 - 1 == uVar19) break;
            uVar20 = uVar19 + 1;
            uVar19 = uVar20;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(lVar21 + 0x148) +
                                                 (ulonglong)(uVar20 >> 9) * 8) +
                                               (ulonglong)(uVar20 & 0x1ff) * 2) - 1U));
          goto LAB_148464c53;
        }
      }
      FUN_146bfdcfe(&local_848);
      lVar23 = lVar23 + 1;
    } while (lVar23 < (int)param_1[0x18]);
  }
  if (local_1c8 != 0) {
    if ((char)param_1[0x1e] == '\x01') {
      FUN_145c688c4(local_338,&local_848,1);
      dVar25 = (double)CONCAT44(uStack_81c,local_820) - (double)local_838;
      dVar25 = (double)(-(ulonglong)(0.0 <= dVar25) & (ulonglong)dVar25);
      dVar27 = (double)(-(ulonglong)(0.0 <= local_828 - (double)uStack_840) &
                       (ulonglong)(local_828 - (double)uStack_840));
      uVar24 = -(ulonglong)(dVar25 <= dVar27);
      dVar27 = (double)(~uVar24 & (ulonglong)dVar25 | uVar24 & (ulonglong)dVar27);
      dVar25 = (double)(-(ulonglong)(0.0 <= local_830 - (double)local_848) &
                       (ulonglong)(local_830 - (double)local_848));
      uVar24 = -(ulonglong)(dVar27 <= dVar25);
      dVar27 = (double)(uVar24 & (ulonglong)dVar25 | ~uVar24 & (ulonglong)dVar27) /
               (double)*(int *)((longlong)param_1 + 0xac);
      dVar25 = (double)param_1[0x1f];
      dVar27 = dVar27 + dVar27;
      uVar24 = -(ulonglong)(dVar25 <= dVar27);
      FUN_146c38c5e(local_338,0);
      FUN_1482d2c96(&local_848,local_338);
      local_7f8 = (undefined ***)
                  ((~uVar24 & (ulonglong)dVar25 | (ulonglong)dVar27 & uVar24) ^ 0x8000000000000000);
      uStack_7f0 = CONCAT62(uStack_7f0._2_6_,0x100);
      FUN_1482d2df4(&local_848);
      FUN_14830cf42(&local_848);
    }
    FUN_146ba21d6(&local_488,local_338,1);
    local_4d0 = 0;
    local_4c8 = 0;
    local_4f0 = 0;
    uStack_4e8 = 0;
    local_4c4 = 0xffffffff00000080;
    local_4bc = 0;
    local_4b0 = 0;
    local_4a8 = 0;
    local_4a0 = 0;
    local_498 = 0x4000000000000000;
    local_490 = 2;
    local_4f8 = &local_488;
    FUN_146bef8a8(&local_4f8);
    local_830 = 0.5;
    local_828 = 1.0;
    local_820._0_1_ = 1;
    uStack_81c = 4;
    uStack_818._0_4_ = 0;
    uStack_818._4_4_ = 0x3ff00000;
    local_7f8 = (undefined ***)0x0;
    local_7e8 = &PTR_LAB_149f36510;
    ppcStack_7e0 = (char **)&LAB_148474896;
    local_808 = FUN_146bd3274;
    local_848 = local_338;
    uStack_840 = &local_488;
    local_838 = &local_4f8;
    memset(local_7c0,0,0x91);
    uVar9 = local_7d8;
    puStack_860 = (undefined1 *)ppcStack_7e0;
    local_868 = local_7e8;
    uVar14 = uStack_7f0;
    local_878 = local_7f8;
    local_888 = local_808;
    uStack_7c8 = 0x49f361f0;
    local_7c4 = 1;
    local_728 = 0;
    uStack_724 = 0;
    local_718 = 0;
    local_6e8 = 0;
    local_6a8 = 1;
    uStack_6a7 = 1;
    uStack_6a4 = 0x1000;
    uStack_6a0 = 0;
    uStack_69c = 5;
    local_688 = 0;
    uStack_678 = 0x49f36510;
    local_674 = 1;
    local_670 = &LAB_146bd3270;
    local_698 = FUN_146bd3274;
    local_658 = 0;
    uStack_650 = 0x7fffffff00000000;
    uStack_648 = 0x7fffffff7fffffff;
    uStack_640 = 0x8000000180000001;
    local_638 = 0x7fffffff80000001;
    uStack_630 = 0x7fffffff7fffffff;
    local_628 = 0x80000001;
    uStack_624 = 0x80000001;
    uStack_620 = 0x80000001;
    local_618 = 0x1000000000000000;
    local_610 = 0x2000000000000000;
    local_608 = 0x4000000000000000;
    local_600 = 0x40;
    uStack_5c8 = 0;
    uStack_5c4 = 0;
    uStack_5c0 = 0;
    local_5d8 = 0;
    uStack_5d4 = 0;
    uStack_5d0 = 0;
    uStack_5cc = 0;
    local_5e8 = 0;
    uStack_5e0 = 0;
    uStack_5f8 = 0;
    uStack_5f0 = 0;
    local_5b8 = 0;
    uStack_5b0 = 0;
    local_5a8 = 0;
    uStack_5a0 = 0;
    local_598 = local_598 & 0xffffffffffffff00;
    uStack_590 = 0;
    uStack_588 = 0;
    local_584 = 0;
    uStack_580 = 0;
    uStack_57c = 0;
    local_570 = 0;
    uStack_568 = 0;
    local_560 = 0;
    uStack_558 = 0;
    local_550 = 0;
    local_548 = 0x40;
    local_540 = 0;
    uStack_538 = 0;
    local_530 = 0;
    uStack_528 = 0;
    local_520 = 0x40;
    local_518 = 0;
    uStack_510 = 0;
    local_508 = 0;
    uStack_500 = 0;
    dVar27 = DAT_14c8464f0 + -8.0;
    dVar25 = DAT_14c8464e0 + 8.0;
    local_6e0 = DAT_14c8464e0 + -8.0;
    local_6d8 = DAT_14c8464e8 + -8.0;
    local_6d0._0_4_ = SUB84(dVar27,0);
    local_6d0._4_4_ = (undefined4)((ulonglong)dVar27 >> 0x20);
    uStack_6c8._0_4_ = SUB84(dVar25,0);
    uStack_6c8._4_4_ = (undefined4)((ulonglong)dVar25 >> 0x20);
    local_6c0 = DAT_14c8464e8 + 8.0;
    local_6b8 = DAT_14c8464f0 + 8.0;
    local_6b0 = 0x3fd0000000000000;
    local_828 = (double)param_1[0x1c];
    if ((int)local_3bc < 0) {
      dVar29 = -INFINITY;
      dVar26 = -INFINITY;
      dVar28 = dVar29;
    }
    else {
      lVar23 = *(longlong *)(local_400 + (ulonglong)(local_3bc >> 9) * 8);
      lVar16 = (ulonglong)((local_3bc & 0x1ff) << 3) * 3;
      lVar21 = *(longlong *)(local_3e8 + (ulonglong)(local_3bc >> 9) * 8);
      dVar28 = *(double *)(lVar23 + 0x10 + lVar16);
      dVar3 = *(double *)(lVar21 + 0x10 + lVar16);
      dVar29 = *(double *)(lVar23 + 8 + lVar16);
      dVar26 = *(double *)(lVar21 + 8 + lVar16);
      dVar29 = (dVar29 + dVar26) - (dVar29 - dVar26);
      dVar26 = (*(double *)(lVar23 + lVar16) + *(double *)(lVar21 + lVar16)) -
               (*(double *)(lVar23 + lVar16) - *(double *)(lVar21 + lVar16));
      dVar28 = (dVar28 + dVar3) - (dVar28 - dVar3);
    }
    dVar28 = (double)(-(ulonglong)(0.0 <= dVar28) & (ulonglong)dVar28);
    dVar29 = (double)(-(ulonglong)(0.0 <= dVar29) & (ulonglong)dVar29);
    uVar24 = -(ulonglong)(dVar28 <= dVar29);
    dVar29 = (double)(~uVar24 & (ulonglong)dVar28 | uVar24 & (ulonglong)dVar29);
    dVar26 = (double)(-(ulonglong)(0.0 <= dVar26) & (ulonglong)dVar26);
    uVar24 = -(ulonglong)(dVar29 <= dVar26);
    dVar29 = (local_828 + local_828 +
             (double)(uVar24 & (ulonglong)dVar26 | ~uVar24 & (ulonglong)dVar29)) /
             (double)(int)param_1[0x15];
    uStack_818._0_4_ = SUB84(dVar29,0);
    uStack_818._4_4_ = (undefined4)((ulonglong)dVar29 >> 0x20);
    local_830 = (double)param_1[0x1b];
    uStack_81c = *(undefined4 *)((longlong)param_1 + 0xec);
    local_820 = CONCAT31(local_820._1_3_,(char)param_1[0x1d]);
    uStack_e0 = CONCAT44(uStack_7cc,uStack_7d0);
    local_e8 = local_7d8;
    local_f8 = local_7e8;
    puStack_f0 = (undefined1 *)ppcStack_7e0;
    local_108 = local_7f8;
    uStack_100 = uStack_7f0;
    local_118 = local_808;
    uStack_110 = uStack_800;
    uVar10 = uStack_110;
    local_7d8 = local_858;
    uStack_7d0 = (undefined4)uStack_850;
    uStack_7cc = (undefined4)((ulonglong)uStack_850 >> 0x20);
    local_7e8 = &PTR_LAB_14aee54e0;
    ppcStack_7e0 = &local_890;
    local_7f8 = (undefined ***)0x0;
    uStack_7f0 = uStack_870;
    local_808 = FUN_143b5bf7c;
    uVar24 = CONCAT44(uStack_87c,uStack_880);
    uStack_110._0_4_ = (undefined4)uStack_800;
    uStack_110._4_4_ = (undefined4)(uStack_800 >> 0x20);
    local_858 = uVar9;
    uStack_850 = uStack_e0;
    uStack_870 = uVar14;
    uStack_880 = (undefined4)uStack_110;
    uStack_87c = uStack_110._4_4_;
    uStack_800 = uVar24;
    uStack_110 = uVar10;
    local_6d0 = dVar27;
    uStack_6c8 = dVar25;
    uStack_818 = dVar29;
    if (local_888 != (code *)0x0) {
      pppuVar17 = local_878;
      if (local_878 == (undefined ***)0x0) {
        pppuVar17 = &local_868;
      }
      (*(code *)(*pppuVar17)[2])();
    }
    pcVar8 = local_890;
    if (local_890 == (char *)0x0) {
LAB_1484653aa:
      lVar23 = param_1[1];
      uVar14 = FUN_1484629d6(&local_848);
      FUN_146c00e98(lVar23,uVar14);
      (**(code **)(*param_1 + 0x20))(param_1,local_890,(undefined4)uStack_818);
    }
    else if (*local_890 == '\0') {
      pcVar5 = *(code **)(local_890 + 0x70);
      plVar18 = (longlong *)(local_890 + 0x90);
      if (*(longlong **)(local_890 + 0x80) != (longlong *)0x0) {
        plVar18 = *(longlong **)(local_890 + 0x80);
      }
      uVar14 = (**(code **)(*plVar18 + 8))();
      cVar12 = (*pcVar5)(uVar14);
      *pcVar8 = cVar12;
      if (cVar12 == '\0') goto LAB_1484653aa;
    }
    FUN_146ba0c6a(&uStack_7c8);
    if (local_808 != (code *)0x0) {
      pppuVar17 = local_7f8;
      if (local_7f8 == (undefined ***)0x0) {
        pppuVar17 = &local_7e8;
      }
      (*(code *)(*pppuVar17)[2])();
    }
    local_4a8 = 0;
    if (local_4b0 != 0) {
      FUN_1400020a8();
    }
    FUN_146bddd50(&local_4f0);
    FUN_1457e5b52(&local_488);
  }
  FUN_141082778(local_338);
LAB_148464c96:
  if ((local_d0 ^ (ulonglong)auStack_8c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14846547a FUN_14846547a body=149 status=ok
// SIG undefined FUN_14846547a(void)

void FUN_14846547a(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  iVar1 = *(int *)(param_1 + 200);
  *(uint *)(param_1 + 200) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xcc) < iVar1 + 1U) {
    FUN_148483b30(param_1 + 0xc0,iVar1);
  }
  puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar1 * 0x18);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  FUN_1483adaae(puVar3 + 1,param_2);
  *(undefined1 *)puVar3 = param_3;
  if (*(int *)(param_1 + 200) == 1) {
    puVar3 = (undefined8 *)(param_1 + 0xd0);
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = *param_4;
      param_4 = param_4 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}



// FUNCTION 148465510 FUN_148465510 body=2428 status=ok
// SIG undefined FUN_148465510(void)

void FUN_148465510(longlong *param_1,char *param_2)

{
  double *pdVar1;
  code *pcVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  double *pdVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined1 auVar38 [16];
  undefined4 uVar39;
  undefined4 uVar40;
  undefined1 auStack_268 [32];
  undefined4 local_248;
  undefined4 *local_240;
  undefined1 local_238;
  char *local_230;
  ulonglong local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  longlong local_1f8;
  int local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  double local_1d8;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  longlong local_1b0;
  undefined4 local_1a8;
  undefined1 local_19a;
  undefined1 local_199;
  undefined8 local_198;
  undefined8 uStack_190;
  double local_188;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined1 *local_168;
  double local_158;
  double local_150;
  double local_148;
  longlong *local_140;
  double local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 *local_120;
  longlong **pplStack_118;
  longlong local_110;
  longlong lStack_108;
  longlong local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_268;
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_1484655cb;
    pcVar2 = *(code **)(param_2 + 0x70);
    plVar9 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar9 = *(longlong **)(param_2 + 0x80);
    }
    uVar7 = (**(code **)(*plVar9 + 8))();
    cVar4 = (*pcVar2)(uVar7);
    *param_2 = cVar4;
    if (cVar4 != '\0') goto LAB_1484655cb;
  }
  FUN_14582ed12(param_1[1]);
  FUN_14582eef4(param_1[1],0);
  FUN_146c01e94(param_1[1],&DAT_14c846364);
  local_130 = (longlong *)param_1[0x1a];
  uStack_128 = (undefined1 *)param_1[0x1b];
  local_120 = (undefined1 *)param_1[0x1c];
  pplStack_118 = (longlong **)param_1[0x1d];
  local_110 = param_1[0x1e];
  lStack_108 = param_1[0x1f];
  local_100 = param_1[0x20];
  local_f8 = (undefined4)param_1[0x22];
  uStack_f4 = *(undefined4 *)((longlong)param_1 + 0x114);
  uStack_f0 = (undefined4)param_1[0x23];
  uStack_ec = *(undefined4 *)((longlong)param_1 + 0x11c);
  local_e8 = param_1[0x24];
  (**(code **)(*param_1 + 8))(param_1);
  lVar10 = param_1[0x18];
  iVar5 = (int)param_1[0x19];
  uVar8 = (ulonglong)iVar5;
  if (uVar8 == 0) {
    uVar6 = 0xffffffff;
    uVar14 = 0xffefffff;
    uVar29 = 0xffffffff;
    uVar30 = 0x7fefffff;
    dVar19 = -1.79769313486232e+308;
    uVar15 = uVar6;
    uVar16 = uVar14;
    uVar31 = uVar29;
    uVar32 = uVar30;
    uVar34 = uVar29;
    uVar35 = uVar30;
  }
  else {
    auVar22 = ZEXT816(0x7fefffffffffffff);
    dVar19 = -1.79769313486232e+308;
    auVar25 = ZEXT816(0xffefffffffffffff);
    uVar6 = 0xffffffff;
    uVar14 = 0xffefffff;
    auVar38 = ZEXT816(0x7fefffffffffffff);
    uVar29 = 0xffffffff;
    uVar30 = 0x7fefffff;
    lVar12 = lVar10;
    do {
      if ((longlong)*(int *)(lVar12 + 0x10) == 0) {
        uVar31 = auVar38._0_4_;
        uVar32 = auVar38._4_4_;
        uVar34 = auVar22._0_4_;
        uVar35 = auVar22._4_4_;
        uVar36 = auVar22._8_4_;
        uVar37 = auVar22._12_4_;
        uVar15 = auVar25._0_4_;
        uVar16 = auVar25._4_4_;
        uVar17 = auVar25._8_4_;
        uVar18 = auVar25._12_4_;
        uVar27 = auVar38._8_4_;
        uVar33 = auVar38._12_4_;
      }
      else {
        pdVar11 = *(double **)(lVar12 + 8);
        pdVar1 = pdVar11 + (longlong)*(int *)(lVar12 + 0x10) * 3;
        dVar20 = dVar19;
        uVar26 = uVar6;
        uVar28 = uVar14;
        uVar39 = uVar29;
        uVar40 = uVar30;
        do {
          dVar19 = *pdVar11;
          uVar14 = (undefined4)((ulonglong)dVar19 >> 0x20);
          dVar21 = pdVar11[1];
          uVar15 = SUB84(dVar21,0);
          uVar16 = (undefined4)((ulonglong)dVar21 >> 0x20);
          uVar17 = 0;
          uVar18 = 0;
          uVar29 = SUB84(dVar19,0);
          uVar30 = uVar14;
          if ((double)CONCAT44(uVar40,uVar39) <= dVar19) {
            uVar29 = uVar39;
            uVar30 = uVar40;
          }
          uVar6 = SUB84(dVar19,0);
          if (dVar19 <= (double)CONCAT44(uVar28,uVar26)) {
            uVar6 = uVar26;
            uVar14 = uVar28;
          }
          uVar31 = uVar15;
          uVar32 = uVar16;
          if (auVar38._0_8_ <= dVar21) {
            uVar31 = auVar38._0_4_;
            uVar32 = auVar38._4_4_;
          }
          if (dVar21 <= auVar25._0_8_) {
            uVar15 = auVar25._0_4_;
            uVar16 = auVar25._4_4_;
          }
          dVar19 = pdVar11[2];
          uVar34 = SUB84(dVar19,0);
          uVar35 = (undefined4)((ulonglong)dVar19 >> 0x20);
          uVar36 = 0;
          uVar37 = 0;
          if (auVar22._0_8_ <= dVar19) {
            uVar34 = auVar22._0_4_;
            uVar35 = auVar22._4_4_;
          }
          if (dVar19 <= dVar20) {
            dVar19 = dVar20;
          }
          pdVar11 = pdVar11 + 3;
          auVar25._4_4_ = uVar16;
          auVar25._0_4_ = uVar15;
          auVar25._8_8_ = 0;
          auVar22._4_4_ = uVar35;
          auVar22._0_4_ = uVar34;
          auVar22._8_8_ = 0;
          auVar38._4_4_ = uVar32;
          auVar38._0_4_ = uVar31;
          auVar38._8_8_ = 0;
          dVar20 = dVar19;
          uVar26 = uVar6;
          uVar28 = uVar14;
          uVar27 = uVar17;
          uVar33 = uVar18;
          uVar39 = uVar29;
          uVar40 = uVar30;
        } while (pdVar11 != pdVar1);
      }
      lVar12 = lVar12 + 0x18;
      auVar25._4_4_ = uVar16;
      auVar25._0_4_ = uVar15;
      auVar25._12_4_ = uVar18;
      auVar25._8_4_ = uVar17;
      auVar22._4_4_ = uVar35;
      auVar22._0_4_ = uVar34;
      auVar22._12_4_ = uVar37;
      auVar22._8_4_ = uVar36;
      auVar38._4_4_ = uVar32;
      auVar38._0_4_ = uVar31;
      auVar38._12_4_ = uVar33;
      auVar38._8_4_ = uVar27;
    } while (lVar12 != lVar10 + uVar8 * 0x18);
  }
  if ((char)param_1[0x12] == '\0') {
    dVar21 = dVar19 - (double)CONCAT44(uVar35,uVar34);
    dVar21 = (double)(-(ulonglong)(0.0 <= dVar21) & (ulonglong)dVar21);
    dVar20 = (double)CONCAT44(uVar16,uVar15) - (double)CONCAT44(uVar32,uVar31);
    dVar20 = (double)(-(ulonglong)(0.0 <= dVar20) & (ulonglong)dVar20);
    uVar13 = -(ulonglong)(dVar21 <= dVar20);
    dVar20 = (double)(~uVar13 & (ulonglong)dVar21 | uVar13 & (ulonglong)dVar20);
    dVar21 = (double)CONCAT44(uVar14,uVar6) - (double)CONCAT44(uVar30,uVar29);
    dVar21 = (double)(-(ulonglong)(0.0 <= dVar21) & (ulonglong)dVar21);
    uVar13 = -(ulonglong)(dVar20 <= dVar21);
    local_138 = (double)(uVar13 & (ulonglong)dVar21 | ~uVar13 & (ulonglong)dVar20);
  }
  else {
    local_138 = 100.0;
  }
  local_138 = (double)param_1[0x11] / local_138;
  uVar27 = SUB84(local_138,0);
  cVar4 = (char)param_1[0x14];
  local_140 = param_1;
  if (cVar4 == '\0') {
    if (0 < iVar5) {
      lVar12 = 8;
      lVar10 = 0;
      do {
        if (2 < *(int *)(param_1[0x18] + 8 + lVar12)) {
          FUN_146bd1842(param_1[0x18] + lVar12,&local_130,&local_158);
          if ((char)param_1[0x17] == '\x01') {
            local_130 = (longlong *)((ulonglong)local_130 ^ 0x8000000000000000);
            uStack_128 = (undefined1 *)((ulonglong)uStack_128 ^ 0x8000000000000000);
            local_120 = (undefined1 *)((ulonglong)local_120 ^ 0x8000000000000000);
          }
          local_198 = 0.0;
          uStack_190 = 0.0;
          FUN_146bd1a1a(param_1[0x18] + lVar12,&local_198,0);
          local_238 = (undefined1)param_1[0x17];
          local_168 = local_120;
          local_178 = (undefined4)local_130;
          uStack_174 = local_130._4_4_;
          uStack_170 = (undefined4)uStack_128;
          uStack_16c = uStack_128._4_4_;
          local_248 = (undefined4)lVar10;
          local_240 = &local_178;
          FUN_143b573e0(&local_140,param_1[1],param_1[0x18] + lVar12,&local_198);
          if (local_198 != 0.0) {
            FUN_1400020a8();
          }
          uVar8 = (ulonglong)*(uint *)(param_1 + 0x19);
        }
        lVar10 = lVar10 + 1;
        lVar12 = lVar12 + 0x18;
      } while (lVar10 < (int)uVar8);
    }
    FUN_148465e8e(param_1,uVar27);
  }
  else {
    local_230 = param_2;
    if (cVar4 == '\x01') {
      dVar21 = DAT_14c8463c8;
      dVar20 = DAT_14c8463c0;
      uVar8 = DAT_14c8463b8;
      if (*(char *)((longlong)param_1 + 0xa1) != '\0') {
        FUN_146bd1842(lVar10 + 8,&local_158,&local_130);
        iVar5 = (int)param_1[0x19];
        if (1 < iVar5) {
          lVar10 = 1;
          lVar12 = 0x20;
          do {
            FUN_146bd1842(param_1[0x18] + lVar12,&local_198,&local_130);
            dVar23 = local_188 * local_148 + local_198 * local_158 + uStack_190 * local_150;
            dVar20 = uStack_190;
            dVar21 = local_198;
            if (dVar23 < 0.0) {
              dVar20 = -uStack_190;
              dVar21 = -local_198;
            }
            uVar8 = -(ulonglong)(dVar23 < 0.0);
            local_158 = local_158 + dVar21;
            local_150 = local_150 + dVar20;
            local_148 = local_148 +
                        (double)(~uVar8 & (ulonglong)local_188 | (ulonglong)-local_188 & uVar8);
            lVar10 = lVar10 + 1;
            iVar5 = (int)param_1[0x19];
            lVar12 = lVar12 + 0x18;
          } while (lVar10 < iVar5);
        }
        dVar23 = SQRT(local_148 * local_148 + local_158 * local_158 + local_150 * local_150);
        dVar21 = 0.0;
        dVar24 = 1.0 / dVar23;
        if (0.0 < dVar23) {
          dVar20 = local_150 * dVar24;
        }
        else {
          dVar20 = 0.0;
        }
        uVar8 = -(ulonglong)(0.0 < dVar23) & (ulonglong)(local_158 * dVar24);
        if (0.0 < dVar23) {
          dVar21 = dVar24 * local_148;
        }
      }
    }
    else {
      dVar21 = DAT_14c846398;
      dVar20 = DAT_14c846390;
      uVar8 = DAT_14c846388;
      if ((cVar4 != '\x03') &&
         (dVar21 = DAT_14c8463c8, dVar20 = DAT_14c8463c0, uVar8 = DAT_14c8463b8, cVar4 == '\x02')) {
        dVar21 = DAT_14c8463b0;
        dVar20 = DAT_14c8463a8;
        uVar8 = DAT_14c8463a0;
      }
    }
    dVar24 = ((double)CONCAT44(uVar35,uVar34) + dVar19) * 0.5;
    dVar23 = ((double)CONCAT44(uVar32,uVar31) + (double)CONCAT44(uVar16,uVar15)) * 0.5;
    dVar19 = ((double)CONCAT44(uVar30,uVar29) + (double)CONCAT44(uVar14,uVar6)) * 0.5;
    uStack_128 = &local_19a;
    local_120 = &local_199;
    pplStack_118 = &local_140;
    local_130 = param_1;
    if (*(char *)((longlong)param_1 + 0xa1) == '\0') {
      if (0 < iVar5) {
        uVar6 = 1;
        lVar10 = 0;
        lVar12 = 0;
        do {
          FUN_146bd1842(param_1[0x18] + lVar10 + 8,&local_198,&local_158);
          dVar20 = (local_188 * dVar24 + local_198 * dVar19 + dVar23 * uStack_190) -
                   (local_148 * local_188 + local_158 * local_198 + local_150 * uStack_190);
          local_1b8 = dVar24 - local_188 * dVar20;
          local_1c0 = dVar23 - uStack_190 * dVar20;
          local_1c8 = dVar19 - dVar20 * local_198;
          local_1b0 = param_1[0x18] + lVar10;
          local_1a8 = 1;
          local_1e8 = (undefined4)local_198;
          uStack_1e4 = local_198._4_4_;
          uStack_1e0 = (undefined4)uStack_190;
          uStack_1dc = uStack_190._4_4_;
          local_1d8 = local_188;
          local_248 = uVar6;
          uVar6 = FUN_143b5779a(&local_130,&local_1e8,&local_1c8,&local_1b0);
          lVar12 = lVar12 + 1;
          lVar10 = lVar10 + 0x18;
        } while (lVar12 < (int)param_1[0x19]);
      }
    }
    else {
      local_1f8 = param_1[0x18];
      local_248 = 1;
      local_228 = uVar8;
      local_220 = dVar20;
      local_218 = dVar21;
      local_210 = dVar19;
      local_208 = dVar23;
      local_200 = dVar24;
      local_1f0 = iVar5;
      FUN_143b5779a(&local_130);
    }
    FUN_148465e8e(param_1,uVar27);
    pcVar3 = local_230;
    if ((local_230 != (char *)0x0) && (*local_230 == '\0')) {
      pcVar2 = *(code **)(local_230 + 0x70);
      plVar9 = (longlong *)(local_230 + 0x90);
      if (*(longlong **)(local_230 + 0x80) != (longlong *)0x0) {
        plVar9 = *(longlong **)(local_230 + 0x80);
      }
      uVar7 = (**(code **)(*plVar9 + 8))();
      cVar4 = (*pcVar2)(uVar7);
      *pcVar3 = cVar4;
    }
  }
LAB_1484655cb:
  if ((local_e0 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148465e8e FUN_148465e8e body=163 status=ok
// SIG undefined FUN_148465e8e(void)

void FUN_148465e8e(longlong param_1,double param_2)

{
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [80];
  undefined8 local_58;
  float local_4c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (0.0 < *(double *)(param_1 + 0x98)) {
    FUN_1482d2c96(local_a8,*(undefined8 *)(param_1 + 8));
    local_58 = *(undefined8 *)(param_1 + 0x98);
    local_4c = (float)param_2;
    FUN_1482d2df4(local_a8);
    FUN_14830cf42(local_a8);
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148465f32 FUN_148465f32 body=20 status=ok
// SIG undefined FUN_148465f32(void)

void FUN_148465f32(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_1 + 0x10);
  for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}



// FUNCTION 148465f46 FUN_148465f46 body=531 status=ok
// SIG undefined FUN_148465f46(void)

void FUN_148465f46(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  longlong *local_70;
  undefined4 local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_146c94d7e(param_2,0);
  }
  plVar1 = (longlong *)(param_1 + 0xd8);
  lVar2 = param_1 + 0xe8;
  local_a8 = 0x100000000;
  local_98 = 0xffffffff;
  uStack_90 = 0;
  uStack_a0 = lVar2;
  if (*(int *)(param_1 + 0x100) == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_a8);
    iVar11 = *(int *)(param_1 + 0x100);
  }
  uStack_50 = CONCAT44(uStack_8c,uStack_90);
  local_58 = local_98;
  uVar7 = local_58;
  local_68 = (undefined4)local_a8;
  uStack_64 = local_a8._4_4_;
  uStack_60 = (undefined4)uStack_a0;
  uStack_5c = uStack_a0._4_4_;
  local_58._4_4_ = (int)((ulonglong)local_98 >> 0x20);
  iVar8 = local_58._4_4_;
  local_70 = plVar1;
  if ((local_58._4_4_ != iVar11) || (local_58 = uVar7, uStack_a0 != lVar2)) {
    do {
      local_58 = uVar7;
      uVar5 = *(uint *)(*local_70 + (longlong)iVar8 * 0xc);
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
      uVar9 = *(ulonglong *)
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1c0) + (ulonglong)(uVar5 >> 9) * 8) +
               (ulonglong)((uVar5 & 0x1ff) << 4));
      lVar10 = *(longlong *)(lVar6 + (uVar9 >> 9 & 0x7fffff) * 8);
      local_98 = *(undefined8 *)(lVar10 + 0x10 + (uVar9 & 0x1ff) * 0x18);
      puVar3 = (undefined8 *)(lVar10 + (uVar9 & 0x1ff) * 0x18);
      local_a8 = *puVar3;
      uStack_a0 = puVar3[1];
      lVar6 = *(longlong *)(lVar6 + (uVar9 >> 0x29) * 8);
      uVar9 = uVar9 >> 0x20 & 0x1ff;
      uStack_80 = *(undefined8 *)(lVar6 + 0x10 + uVar9 * 0x18);
      puVar4 = (undefined4 *)(lVar6 + uVar9 * 0x18);
      uStack_90 = *puVar4;
      uStack_8c = puVar4[1];
      local_88 = puVar4[2];
      uStack_84 = puVar4[3];
      iVar8 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar8 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar8 + 1U) {
        FUN_146c94cea(param_2,iVar8);
      }
      lVar6 = *param_2;
      lVar10 = (longlong)iVar8 * 0x30;
      puVar4 = (undefined4 *)(lVar6 + 0x20 + lVar10);
      *puVar4 = local_88;
      puVar4[1] = uStack_84;
      puVar4[2] = (undefined4)uStack_80;
      puVar4[3] = uStack_80._4_4_;
      puVar4 = (undefined4 *)(lVar6 + 0x10 + lVar10);
      *puVar4 = (undefined4)local_98;
      puVar4[1] = local_98._4_4_;
      puVar4[2] = uStack_90;
      puVar4[3] = uStack_8c;
      puVar4 = (undefined4 *)(lVar6 + lVar10);
      *puVar4 = (undefined4)local_a8;
      puVar4[1] = local_a8._4_4_;
      puVar4[2] = (undefined4)uStack_a0;
      puVar4[3] = uStack_a0._4_4_;
      local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~uStack_64);
      FUN_1449c0562(&local_68);
      iVar8 = local_58._4_4_;
      uVar7 = local_58;
    } while (local_70 != plVar1 ||
             (CONCAT44(uStack_5c,uStack_60) != lVar2 || local_58._4_4_ != iVar11));
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14846615a FUN_14846615a body=987 status=ok
// SIG undefined FUN_14846615a(void)

void FUN_14846615a(longlong param_1,char *param_2)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 local_90;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  undefined1 local_69;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  longlong local_50;
  undefined1 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined1 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined1 *)(param_1 + 0x198) = 0;
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_1484661bb;
    pcVar3 = *(code **)(param_2 + 0x70);
    plVar7 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar7 = *(longlong **)(param_2 + 0x80);
    }
    uVar6 = (**(code **)(*plVar7 + 8))();
    cVar4 = (*pcVar3)(uVar6);
    *param_2 = cVar4;
    if (cVar4 != '\0') goto LAB_1484661bb;
  }
  local_90 = 1;
  local_98 = 1;
  FUN_146c005f0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x88),1,1);
  plVar7 = (longlong *)FUN_14001cc68(0x180,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14aee5500;
  FUN_146013ede(plVar7 + 2);
  if (plVar7 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x188) = 0x10;
    plVar8 = *(longlong **)(param_1 + 400);
    if (plVar8 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 400) = 0;
LAB_148466261:
      LOCK();
      plVar1 = plVar8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      if (plVar7 != (longlong *)0x0) goto LAB_1484662c9;
    }
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x188) = plVar7 + 2;
    plVar8 = *(longlong **)(param_1 + 400);
    if (plVar7 == plVar8) {
      LOCK();
      plVar8 = plVar7 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    else {
      *(longlong **)(param_1 + 400) = plVar7;
      if (plVar8 != (longlong *)0x0) goto LAB_148466261;
    }
LAB_1484662c9:
    LOCK();
    plVar8 = plVar7 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  FUN_148466536(*(undefined8 *)(param_1 + 0x188),*(undefined8 *)(param_1 + 0x98));
  FUN_1482ab8e4(*(undefined8 *)(param_1 + 0x188),*(undefined8 *)(param_1 + 8));
  plVar7 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14aee5520;
  plVar7[6] = 0;
  *(undefined4 *)(plVar7 + 7) = 0;
  plVar7[2] = 0;
  plVar7[3] = 0;
  *(undefined8 *)((longlong)plVar7 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)plVar7 + 0x44) = 0;
  plVar7[10] = 0;
  *(undefined4 *)(plVar7 + 0xb) = 0;
  if (plVar7 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x128) = 0x10;
    plVar8 = *(longlong **)(param_1 + 0x130);
    if (plVar8 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x130) = 0;
LAB_148466385:
      LOCK();
      plVar1 = plVar8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      if (plVar7 != (longlong *)0x0) goto LAB_1484663a9;
    }
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x128) = plVar7 + 2;
    plVar8 = *(longlong **)(param_1 + 0x130);
    if (plVar7 == plVar8) {
      LOCK();
      plVar8 = plVar7 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    else {
      *(longlong **)(param_1 + 0x130) = plVar7;
      if (plVar8 != (longlong *)0x0) goto LAB_148466385;
    }
LAB_1484663a9:
    LOCK();
    plVar8 = plVar7 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  FUN_1402226aa(param_1 + 0xd8);
  FUN_1402226aa();
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_1484661bb;
    pcVar3 = *(code **)(param_2 + 0x70);
    plVar7 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar7 = *(longlong **)(param_2 + 0x80);
    }
    (**(code **)(*plVar7 + 8))();
    cVar4 = (*pcVar3)();
    *param_2 = cVar4;
    if (cVar4 != '\0') goto LAB_1484661bb;
  }
  if (0 < *(int *)(param_1 + 200)) {
    local_50 = param_1 + 0xc0;
    local_38 = 1;
    local_68 = *(undefined8 *)(param_1 + 8);
    local_60 = *(undefined8 *)(param_1 + 0x188);
    local_58 = *(undefined4 *)(param_1 + 0xb8);
    local_34 = *(undefined4 *)(param_1 + 0xa8);
    local_48 = *(undefined1 *)(param_1 + 0xd0);
    local_44 = *(undefined4 *)(param_1 + 0xd4);
    local_40 = *(undefined8 *)(param_1 + 0xb0);
    local_80 = *(undefined8 *)(param_1 + 0x128);
    local_88 = param_1 + 0xd8;
    local_78 = param_1 + 0x138;
    uVar5 = FUN_1482d821e(&local_69,&local_68,&local_88,param_2);
    *(undefined1 *)(param_1 + 0x198) = uVar5;
  }
LAB_1484661bb:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148466536 FUN_148466536 body=181 status=ok
// SIG undefined FUN_148466536(void)

longlong FUN_148466536(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_14847387c(param_1 + 0x10,param_2 + 0x10);
  FUN_1484739a0(param_1 + 0x50,param_2 + 0x50);
  FUN_148473a00(param_1 + 0x60,param_2 + 0x60);
  FUN_148473a60(param_1 + 0x70,param_2 + 0x70);
  uVar1 = *(undefined4 *)(param_2 + 0x84);
  uVar2 = *(undefined4 *)(param_2 + 0x88);
  uVar3 = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  *(undefined4 *)(param_1 + 0x88) = uVar2;
  *(undefined4 *)(param_1 + 0x8c) = uVar3;
  FUN_14054c6c4(param_1 + 0x90,param_2 + 0x90);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0xa0,param_2 + 0xa0);
  }
  FUN_14054c6c4(param_1 + 0xc0,param_2 + 0xc0);
  FUN_140cae46a(param_1 + 0xd0,param_2 + 0xd0);
  FUN_145c3f772(param_1 + 0x120,param_2 + 0x120);
  return param_1;
}



// FUNCTION 1484665ec FUN_1484665ec body=20 status=ok
// SIG undefined FUN_1484665ec(void)

void FUN_1484665ec(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_1 + 0x10);
  for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}



// FUNCTION 148466600 FUN_148466600 body=531 status=ok
// SIG undefined FUN_148466600(void)

void FUN_148466600(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  longlong *local_70;
  undefined4 local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_146c94d7e(param_2,0);
  }
  plVar1 = (longlong *)(param_1 + 0x118);
  lVar2 = param_1 + 0x128;
  local_a8 = 0x100000000;
  local_98 = 0xffffffff;
  uStack_90 = 0;
  uStack_a0 = lVar2;
  if (*(int *)(param_1 + 0x140) == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_a8);
    iVar11 = *(int *)(param_1 + 0x140);
  }
  uStack_50 = CONCAT44(uStack_8c,uStack_90);
  local_58 = local_98;
  uVar7 = local_58;
  local_68 = (undefined4)local_a8;
  uStack_64 = local_a8._4_4_;
  uStack_60 = (undefined4)uStack_a0;
  uStack_5c = uStack_a0._4_4_;
  local_58._4_4_ = (int)((ulonglong)local_98 >> 0x20);
  iVar8 = local_58._4_4_;
  local_70 = plVar1;
  if ((local_58._4_4_ != iVar11) || (local_58 = uVar7, uStack_a0 != lVar2)) {
    do {
      local_58 = uVar7;
      uVar5 = *(uint *)(*local_70 + (longlong)iVar8 * 0xc);
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
      uVar9 = *(ulonglong *)
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1c0) + (ulonglong)(uVar5 >> 9) * 8) +
               (ulonglong)((uVar5 & 0x1ff) << 4));
      lVar10 = *(longlong *)(lVar6 + (uVar9 >> 9 & 0x7fffff) * 8);
      local_98 = *(undefined8 *)(lVar10 + 0x10 + (uVar9 & 0x1ff) * 0x18);
      puVar3 = (undefined8 *)(lVar10 + (uVar9 & 0x1ff) * 0x18);
      local_a8 = *puVar3;
      uStack_a0 = puVar3[1];
      lVar6 = *(longlong *)(lVar6 + (uVar9 >> 0x29) * 8);
      uVar9 = uVar9 >> 0x20 & 0x1ff;
      uStack_80 = *(undefined8 *)(lVar6 + 0x10 + uVar9 * 0x18);
      puVar4 = (undefined4 *)(lVar6 + uVar9 * 0x18);
      uStack_90 = *puVar4;
      uStack_8c = puVar4[1];
      local_88 = puVar4[2];
      uStack_84 = puVar4[3];
      iVar8 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar8 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar8 + 1U) {
        FUN_146c94cea(param_2,iVar8);
      }
      lVar6 = *param_2;
      lVar10 = (longlong)iVar8 * 0x30;
      puVar4 = (undefined4 *)(lVar6 + 0x20 + lVar10);
      *puVar4 = local_88;
      puVar4[1] = uStack_84;
      puVar4[2] = (undefined4)uStack_80;
      puVar4[3] = uStack_80._4_4_;
      puVar4 = (undefined4 *)(lVar6 + 0x10 + lVar10);
      *puVar4 = (undefined4)local_98;
      puVar4[1] = local_98._4_4_;
      puVar4[2] = uStack_90;
      puVar4[3] = uStack_8c;
      puVar4 = (undefined4 *)(lVar6 + lVar10);
      *puVar4 = (undefined4)local_a8;
      puVar4[1] = local_a8._4_4_;
      puVar4[2] = (undefined4)uStack_a0;
      puVar4[3] = uStack_a0._4_4_;
      local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~uStack_64);
      FUN_1449c0562(&local_68);
      iVar8 = local_58._4_4_;
      uVar7 = local_58;
    } while (local_70 != plVar1 ||
             (CONCAT44(uStack_5c,uStack_60) != lVar2 || local_58._4_4_ != iVar11));
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148466814 FUN_148466814 body=999 status=ok
// SIG undefined FUN_148466814(void)

void FUN_148466814(longlong param_1,char *param_2)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined1 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined4 local_3c;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(undefined1 *)(param_1 + 0x188) = 0;
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_148466875;
    pcVar3 = *(code **)(param_2 + 0x70);
    plVar7 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar7 = *(longlong **)(param_2 + 0x80);
    }
    uVar6 = (**(code **)(*plVar7 + 8))();
    cVar4 = (*pcVar3)(uVar6);
    *param_2 = cVar4;
    if (cVar4 != '\0') goto LAB_148466875;
  }
  local_d0 = 1;
  local_d8 = 1;
  FUN_146c005f0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x88),1,1);
  plVar7 = (longlong *)FUN_14001cc68(0x180,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14aee5500;
  FUN_146013ede(plVar7 + 2);
  if (plVar7 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x178) = 0x10;
    plVar8 = *(longlong **)(param_1 + 0x180);
    if (plVar8 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x180) = 0;
LAB_14846691b:
      LOCK();
      plVar1 = plVar8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      if (plVar7 != (longlong *)0x0) goto LAB_148466983;
    }
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x178) = plVar7 + 2;
    plVar8 = *(longlong **)(param_1 + 0x180);
    if (plVar7 == plVar8) {
      LOCK();
      plVar8 = plVar7 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    else {
      *(longlong **)(param_1 + 0x180) = plVar7;
      if (plVar8 != (longlong *)0x0) goto LAB_14846691b;
    }
LAB_148466983:
    LOCK();
    plVar8 = plVar7 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  FUN_148466536(*(undefined8 *)(param_1 + 0x178),*(undefined8 *)(param_1 + 0x98));
  FUN_1482ab8e4(*(undefined8 *)(param_1 + 0x178),*(undefined8 *)(param_1 + 8));
  plVar7 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14aee5520;
  plVar7[6] = 0;
  *(undefined4 *)(plVar7 + 7) = 0;
  plVar7[2] = 0;
  plVar7[3] = 0;
  *(undefined8 *)((longlong)plVar7 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)plVar7 + 0x44) = 0;
  plVar7[10] = 0;
  *(undefined4 *)(plVar7 + 0xb) = 0;
  if (plVar7 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x168) = 0x10;
    plVar8 = *(longlong **)(param_1 + 0x170);
    if (plVar8 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x170) = 0;
LAB_148466a3f:
      LOCK();
      plVar1 = plVar8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      if (plVar7 != (longlong *)0x0) goto LAB_148466a63;
    }
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x168) = plVar7 + 2;
    plVar8 = *(longlong **)(param_1 + 0x170);
    if (plVar7 == plVar8) {
      LOCK();
      plVar8 = plVar7 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    else {
      *(longlong **)(param_1 + 0x170) = plVar7;
      if (plVar8 != (longlong *)0x0) goto LAB_148466a3f;
    }
LAB_148466a63:
    LOCK();
    plVar8 = plVar7 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (*(char *)(param_1 + 0x110) != '\0') goto LAB_148466875;
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_148466875;
    pcVar3 = *(code **)(param_2 + 0x70);
    plVar7 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar7 = *(longlong **)(param_2 + 0x80);
    }
    uVar6 = (**(code **)(*plVar7 + 8))();
    cVar4 = (*pcVar3)(uVar6);
    *param_2 = cVar4;
    if (cVar4 != '\0') goto LAB_148466875;
  }
  local_40 = 1;
  local_b0 = *(undefined8 *)(param_1 + 8);
  local_a8 = *(undefined8 *)(param_1 + 0x178);
  local_3c = *(undefined4 *)(param_1 + 0xa8);
  local_48 = *(undefined8 *)(param_1 + 0xb0);
  local_78 = *(undefined8 *)(param_1 + 0xd8);
  local_98 = *(undefined8 *)(param_1 + 0xb8);
  uStack_90 = *(undefined8 *)(param_1 + 0xc0);
  local_88 = *(undefined8 *)(param_1 + 200);
  uStack_80 = *(undefined8 *)(param_1 + 0xd0);
  local_70 = *(undefined4 *)(param_1 + 0xe0);
  uStack_6c = *(undefined4 *)(param_1 + 0xe4);
  uStack_68 = *(undefined4 *)(param_1 + 0xe8);
  uStack_64 = *(undefined4 *)(param_1 + 0xec);
  local_60 = *(undefined4 *)(param_1 + 0xf0);
  uStack_5c = *(undefined4 *)(param_1 + 0xf4);
  uStack_58 = *(undefined4 *)(param_1 + 0xf8);
  uStack_54 = *(undefined4 *)(param_1 + 0xfc);
  local_50 = *(undefined8 *)(param_1 + 0x100);
  local_a0 = *(undefined8 *)(param_1 + 0x108);
  local_c8 = param_1 + 0x118;
  local_c0 = *(undefined8 *)(param_1 + 0x168);
  local_b8 = 0;
  uVar5 = FUN_1482dcac4(&local_31,&local_b0,&local_c8,param_2);
  *(undefined1 *)(param_1 + 0x188) = uVar5;
LAB_148466875:
  if ((local_30 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148466bfc FUN_148466bfc body=20 status=ok
// SIG undefined FUN_148466bfc(void)

void FUN_148466bfc(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_1 + 0x10);
  for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}



// FUNCTION 148466c10 FUN_148466c10 body=2093 status=ok
// SIG undefined FUN_148466c10(void)

void FUN_148466c10(longlong param_1,char *param_2)

{
  double dVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  undefined7 uVar12;
  ulonglong uVar11;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  undefined1 auStack_218 [32];
  int local_1f8;
  undefined1 local_1f0;
  undefined1 local_1e8;
  code *local_1d8 [2];
  undefined8 local_1c8;
  undefined **local_1b8;
  code *local_1b0;
  undefined **local_198;
  undefined8 local_190;
  double local_188;
  double dStack_180;
  double local_178;
  double local_170;
  double dStack_168;
  double local_160;
  undefined8 local_158;
  undefined8 local_148;
  undefined2 local_118;
  float local_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined2 local_f0;
  undefined1 local_ee;
  undefined4 local_ec;
  undefined1 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_218;
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_148466c6f;
    pcVar2 = *(code **)(param_2 + 0x70);
    plVar8 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar8 = *(longlong **)(param_2 + 0x80);
    }
    uVar5 = (**(code **)(*plVar8 + 8))();
    cVar4 = (*pcVar2)(uVar5);
    *param_2 = cVar4;
    if (cVar4 != '\0') goto LAB_148466c6f;
  }
  local_1f0 = 1;
  local_1f8 = CONCAT31(local_1f8._1_3_,1);
  FUN_146c005f0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0xd0),1,1);
  *(ulonglong *)(param_1 + 0xc0) = *(ulonglong *)(param_1 + 0xc0) & 0x7fffffffffffffff;
  local_160 = *(double *)(param_1 + 0xb0);
  local_170 = *(double *)(param_1 + 0xa0);
  dStack_168 = *(double *)(param_1 + 0xa8);
  local_188 = *(double *)(param_1 + 0x88);
  dStack_180 = *(double *)(param_1 + 0x90);
  local_178 = *(double *)(param_1 + 0x98);
  local_190 = *(undefined8 *)(param_1 + 8);
  local_198 = &PTR_FUN_14ae97770;
  local_158 = 0;
  local_148 = 0;
  local_118 = 0x100;
  local_114 = 1.0;
  local_110 = 0x3e45798ee2308c3a;
  local_108 = 0x3ee4f8b588000000;
  local_100 = 0x3fb999999999999a;
  local_f8 = 0x3fd0000000000000;
  local_f0 = 0x101;
  local_ee = 1;
  local_ec = 0x358637bd;
  local_e8 = 1;
  local_e4 = 0x3c23d70a;
  local_80 = 0;
  local_78 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_74 = 0xffffffff00000080;
  local_6c = 0;
  local_60 = 0;
  local_58 = 0;
  if (param_2 == (char *)0x0) {
    local_114 = (float)*(double *)(param_1 + 200);
    local_118 = CONCAT11(1,*(undefined1 *)(param_1 + 0xbb));
LAB_148466e53:
    if (*(char *)(param_1 + 0xba) == '\x01') {
      lVar6 = FUN_146bce3f6(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x208));
      lVar3 = *(longlong *)(param_1 + 8);
      uVar11 = 0;
      uVar7 = *(int *)(lVar3 + 0x140) * 0x200 + *(int *)(lVar3 + 0x144);
      if ((uVar7 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar3 + 0x148) - 1U))) {
        uVar11 = 1;
        uVar15 = 1;
        if (1 < (int)uVar7) {
          uVar11 = (ulonglong)uVar7;
        }
        do {
          uVar9 = uVar15;
          if ((uint)uVar11 == uVar9) goto LAB_148466ead;
          uVar15 = uVar9 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar3 + 0x148))[uVar9 >> 9] +
                                             (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
        uVar11 = (ulonglong)uVar9;
      }
LAB_148466ead:
      iVar18 = -1;
      if ((uint)uVar11 != uVar7) {
        iVar18 = -1;
        do {
          iVar13 = *(int *)(*(longlong *)(*(longlong *)(lVar6 + 0x20) + (uVar11 >> 9) * 8) +
                           (ulonglong)((uint)uVar11 & 0x1ff) * 4);
          if (iVar18 < iVar13) {
            iVar18 = iVar13;
          }
          uVar15 = (uint)uVar11 + 1;
          if ((int)uVar15 < (int)uVar7) {
            uVar15 = uVar7;
          }
          do {
            iVar13 = (int)uVar11;
            uVar11 = (ulonglong)uVar15;
            if (uVar15 - 1 == iVar13) break;
            uVar9 = iVar13 + 1;
            uVar11 = (ulonglong)uVar9;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(lVar3 + 0x148) +
                                                 (ulonglong)(uVar9 >> 9) * 8) +
                                               (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
        } while ((uint)uVar11 != uVar7);
      }
      dVar1 = *(double *)(param_1 + 0xc0);
      uVar12 = (undefined7)(uVar11 >> 8);
      if (dVar1 <= 9.999999974752427e-06) {
        local_1f8 = iVar18 + 1;
        local_1e8 = 1;
        local_1f0 = 1;
        FUN_14831208c(&local_198,CONCAT71(uVar12,1),0,lVar6);
      }
      else {
        local_188 = local_188 - dVar1 * local_170;
        dStack_180 = dStack_180 - dStack_168 * dVar1;
        local_178 = local_178 - local_160 * dVar1;
        iVar13 = iVar18 + 1;
        local_1e8 = 0;
        local_1f0 = 1;
        local_1f8 = iVar13;
        FUN_14831208c(&local_198,CONCAT71(uVar12,1),0,lVar6);
        lVar3 = *(longlong *)(param_1 + 8);
        uVar11 = 0;
        uVar7 = *(int *)(lVar3 + 0x140) * 0x200 + *(int *)(lVar3 + 0x144);
        if ((uVar7 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar3 + 0x148) - 1U))) {
          uVar11 = 1;
          uVar15 = 1;
          if (1 < (int)uVar7) {
            uVar11 = (ulonglong)uVar7;
          }
          do {
            uVar9 = uVar15;
            if ((uint)uVar11 == uVar9) goto LAB_148466fe1;
            uVar15 = uVar9 + 1;
          } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar3 + 0x148))[uVar9 >> 9] +
                                               (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
          uVar11 = (ulonglong)uVar9;
        }
LAB_148466fe1:
        iVar16 = iVar18;
        if ((uint)uVar11 != uVar7) {
          do {
            iVar13 = *(int *)(*(longlong *)(*(longlong *)(lVar6 + 0x20) + (uVar11 >> 9) * 8) +
                             (ulonglong)((uint)uVar11 & 0x1ff) * 4);
            if (iVar16 < iVar13) {
              iVar16 = iVar13;
            }
            uVar15 = (uint)uVar11 + 1;
            if ((int)uVar15 < (int)uVar7) {
              uVar15 = uVar7;
            }
            do {
              iVar13 = (int)uVar11;
              uVar11 = (ulonglong)uVar15;
              if (uVar15 - 1 == iVar13) break;
              uVar9 = iVar13 + 1;
              uVar11 = (ulonglong)uVar9;
            } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                   (*(longlong *)(lVar3 + 0x148) +
                                                   (ulonglong)(uVar9 >> 9) * 8) +
                                                 (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
          } while ((uint)uVar11 != uVar7);
          iVar13 = iVar16 + 1;
        }
        dVar1 = *(double *)(param_1 + 0xc0) + *(double *)(param_1 + 0xc0);
        local_188 = dVar1 * local_170 + local_188;
        dStack_180 = dStack_168 * dVar1 + dStack_180;
        local_178 = local_160 * dVar1 + local_178;
        local_1e8 = 1;
        local_1f0 = 0;
        local_1f8 = iVar13;
        FUN_14831208c(&local_198,CONCAT71((int7)(uVar11 >> 8),1),0,lVar6);
        lVar3 = *(longlong *)(param_1 + 8);
        uVar15 = *(int *)(lVar3 + 0x140) * 0x200 + *(int *)(lVar3 + 0x144);
        uVar7 = 0;
        if ((uVar15 != 0) &&
           (uVar7 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar3 + 0x148) - 1U))) {
          uVar9 = 1;
          uVar17 = 1;
          if (1 < (int)uVar15) {
            uVar9 = uVar15;
          }
          do {
            uVar7 = uVar9;
            if (uVar9 == uVar17) break;
            uVar10 = uVar17 >> 9;
            uVar14 = uVar17 & 0x1ff;
            uVar7 = uVar17;
            uVar17 = uVar17 + 1;
          } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar3 + 0x148))[uVar10] +
                                               (ulonglong)uVar14 * 2) - 1U));
        }
LAB_1484671b6:
        if (uVar7 != uVar15) {
          iVar13 = *(int *)(*(longlong *)(*(longlong *)(lVar6 + 0x20) + (ulonglong)(uVar7 >> 9) * 8)
                           + (ulonglong)(uVar7 & 0x1ff) * 4);
          if ((iVar18 < iVar13) && (iVar13 <= iVar16)) {
            FUN_146c0b65a(*(undefined8 *)(param_1 + 8),uVar7,1,0);
          }
          uVar9 = uVar7 + 1;
          if ((int)(uVar7 + 1) < (int)uVar15) {
            uVar9 = uVar15;
          }
          uVar17 = uVar7;
          do {
            uVar7 = uVar9;
            if (uVar9 - 1 == uVar17) break;
            uVar7 = uVar17 + 1;
            uVar17 = uVar7;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(lVar3 + 0x148) +
                                                 (ulonglong)(uVar7 >> 9) * 8) +
                                               (ulonglong)(uVar7 & 0x1ff) * 2) - 1U));
          goto LAB_1484671b6;
        }
      }
    }
    else {
      FUN_148313ca8(&local_198);
    }
    if (param_2 == (char *)0x0) {
LAB_14846725f:
      if (*(char *)(param_1 + 0xb8) == '\x01') {
        local_1c8 = 0;
        local_1b8 = &PTR_LAB_14aee5540;
        local_1b0 = FUN_148266949;
        local_1d8[0] = FUN_148483c38;
        local_1f8 = -1;
        FUN_148315e9c(&local_198,local_1d8,*(undefined1 *)(param_1 + 0xb9),0xffffffff);
      }
      if (param_2 == (char *)0x0) {
LAB_1484672bc:
        if ((*(char *)(param_1 + 0xb8) == '\x01') && (*(char *)(param_1 + 0xba) == '\x01')) {
          uVar5 = FUN_146bce3f6(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x208),DAT_14cb4bd28);
          FUN_148316afa(&local_198,uVar5);
        }
      }
      else if (*param_2 == '\0') {
        pcVar2 = *(code **)(param_2 + 0x70);
        plVar8 = (longlong *)(param_2 + 0x90);
        if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
          plVar8 = *(longlong **)(param_2 + 0x80);
        }
        uVar5 = (**(code **)(*plVar8 + 8))();
        cVar4 = (*pcVar2)(uVar5);
        *param_2 = cVar4;
        if (cVar4 == '\0') goto LAB_1484672bc;
      }
    }
    else if (*param_2 == '\0') {
      pcVar2 = *(code **)(param_2 + 0x70);
      plVar8 = (longlong *)(param_2 + 0x90);
      if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
        plVar8 = *(longlong **)(param_2 + 0x80);
      }
      uVar5 = (**(code **)(*plVar8 + 8))();
      cVar4 = (*pcVar2)(uVar5);
      *param_2 = cVar4;
      if (cVar4 == '\0') goto LAB_14846725f;
    }
  }
  else if (*param_2 == '\0') {
    pcVar2 = *(code **)(param_2 + 0x70);
    plVar8 = *(longlong **)(param_2 + 0x80);
    if (*(longlong **)(param_2 + 0x80) == (longlong *)0x0) {
      plVar8 = (longlong *)(param_2 + 0x90);
    }
    uVar5 = (**(code **)(*plVar8 + 8))();
    cVar4 = (*pcVar2)(uVar5);
    *param_2 = cVar4;
    if (cVar4 == '\0') {
      local_114 = (float)*(double *)(param_1 + 200);
      local_118 = CONCAT11(local_118._1_1_,*(undefined1 *)(param_1 + 0xbb));
      pcVar2 = *(code **)(param_2 + 0x70);
      plVar8 = (longlong *)(param_2 + 0x90);
      if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
        plVar8 = *(longlong **)(param_2 + 0x80);
      }
      uVar5 = (**(code **)(*plVar8 + 8))(plVar8);
      cVar4 = (*pcVar2)(uVar5);
      *param_2 = cVar4;
      if (cVar4 == '\0') goto LAB_148466e53;
    }
  }
  FUN_1483f9eac(&local_198);
LAB_148466c6f:
  if ((local_48 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14846743e FUN_14846743e body=610 status=ok
// SIG undefined FUN_14846743e(void)

void FUN_14846743e(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  uint *puVar6;
  uint *puVar7;
  undefined1 auStack_d8 [32];
  int local_b8;
  uint local_b4;
  uint *local_b0;
  int *local_a8;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(char *)(param_1 + 0x1a8) == '\x01') {
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    if ((longlong)(int)param_2[1] != 0) {
      puVar6 = (uint *)*param_2;
      puVar7 = puVar6 + (int)param_2[1];
      do {
        uVar2 = *puVar6;
        local_b4 = FUN_146bc96d4(param_1,uVar2);
        if ((int)uStack_90 != local_64) {
          puVar5 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar5 = local_60;
          }
          iVar3 = *(int *)(puVar5 + (ulonglong)(local_50 - 1U & local_b4) * 4);
          while (iVar3 != -1) {
            lVar1 = local_98 + (longlong)iVar3 * 0x10;
            if (*(uint *)(local_98 + (longlong)iVar3 * 0x10) == local_b4) {
              if ((int *)(lVar1 + 4) != (int *)0x0 && lVar1 != 0) {
                if (*(char *)(param_1 + 0x1a8) == '\x01') {
                  iVar3 = *(int *)(lVar1 + 4);
                  *(int *)(*(longlong *)
                            (*(longlong *)(param_1 + 0x198) + (ulonglong)(uVar2 >> 9) * 8) +
                          (ulonglong)(uVar2 & 0x1ff) * 4) = iVar3;
                  iVar3 = iVar3 + 1;
                  if (iVar3 <= *(int *)(param_1 + 0x1b0)) {
                    iVar3 = *(int *)(param_1 + 0x1b0);
                  }
                  *(int *)(param_1 + 0x1b0) = iVar3;
                }
                goto LAB_14846758b;
              }
              break;
            }
            iVar3 = *(int *)(lVar1 + 8);
          }
        }
        local_b8 = *(int *)(param_1 + 0x1b0);
        iVar3 = local_b8 + 1;
        *(int *)(param_1 + 0x1b0) = iVar3;
        if (*(char *)(param_1 + 0x1a8) == '\x01') {
          *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x198) + (ulonglong)(uVar2 >> 9) * 8) +
                  (ulonglong)(uVar2 & 0x1ff) * 4) = local_b8;
          iVar4 = *(int *)(param_1 + 0x1b0);
          if (*(int *)(param_1 + 0x1b0) < iVar3) {
            iVar4 = iVar3;
          }
          *(int *)(param_1 + 0x1b0) = iVar4;
        }
        local_b0 = &local_b4;
        local_a8 = &local_b8;
        FUN_140263e2a(&local_98,local_9c,&local_b0,0);
        iVar3 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
          FUN_1446f48e2(param_3,iVar3);
        }
        *(int *)(*param_3 + (longlong)iVar3 * 4) = local_b8;
LAB_14846758b:
        puVar6 = puVar6 + 1;
      } while (puVar6 != puVar7);
      local_50 = 0;
      if (local_58 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_144a6bfa8(&local_98);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484676a2 FUN_1484676a2 body=171 status=ok
// SIG undefined FUN_1484676a2(void)

void FUN_1484676a2(longlong *param_1,char *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (9.999999747378752e-05 <= ABS((double)param_1[0x15])) {
    if (param_2 == (char *)0x0) {
LAB_148467709:
      FUN_146c005f0(param_1[1],param_1[0x11],1,1,1,1);
                    /* WARNING: Could not recover jumptable at 0x00014846774a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x20 + (ulonglong)((int)param_1[0x16] != 1) * 8))(param_1,param_2);
      return;
    }
    if (*param_2 == '\0') {
      pcVar1 = *(code **)(param_2 + 0x70);
      plVar4 = (longlong *)(param_2 + 0x90);
      if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
        plVar4 = *(longlong **)(param_2 + 0x80);
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      cVar2 = (*pcVar1)(uVar3);
      *param_2 = cVar2;
      if (cVar2 == '\0') goto LAB_148467709;
    }
  }
  return;
}



// FUNCTION 14846774e FUN_14846774e body=2771 status=ok
// SIG undefined FUN_14846774e(void)

undefined4 FUN_14846774e(longlong param_1,char *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  void *_Src;
  uint *puVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined ***pppuVar11;
  undefined **ppuVar12;
  longlong *plVar13;
  uint uVar14;
  undefined8 *puVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  undefined1 auStack_4e8 [32];
  undefined1 local_4c8;
  longlong *local_4b8;
  longlong local_4b0;
  void *local_4a8;
  int local_4a0;
  undefined4 local_49c;
  longlong local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined4 local_480;
  undefined **local_478;
  undefined8 *puStack_470;
  undefined ***local_468;
  undefined8 uStack_460;
  undefined **local_458;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  int iStack_444;
  undefined8 uStack_440;
  undefined8 *local_438;
  undefined8 local_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  uint local_3c0;
  undefined8 local_3b8;
  undefined1 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined1 local_398;
  undefined2 local_397;
  char *local_390;
  undefined1 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined2 local_370;
  undefined1 local_36e;
  undefined4 local_36c;
  undefined1 local_368;
  undefined8 local_364;
  undefined8 *local_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2d0;
  undefined4 local_2c8;
  undefined8 local_2c4;
  undefined4 local_2bc;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined1 local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_278;
  undefined4 local_270;
  undefined8 local_26c;
  undefined4 local_264;
  undefined8 local_258;
  undefined4 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_21c;
  undefined4 local_214;
  undefined8 local_208;
  undefined4 local_200;
  undefined1 local_1f8;
  undefined1 local_1f7;
  undefined8 local_1e8;
  undefined8 local_1d8;
  undefined **local_1a8;
  undefined8 *puStack_1a0;
  undefined ***local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined **local_188 [2];
  longlong local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined1 local_168 [16];
  longlong local_158;
  uint local_150;
  uint local_14c;
  undefined **local_148;
  undefined8 *puStack_140;
  undefined ***local_138;
  undefined8 uStack_130;
  undefined **local_128;
  longlong lStack_120;
  longlong local_118;
  undefined8 uStack_110;
  int local_100;
  code *local_f8;
  undefined8 *puStack_f0;
  undefined ***local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined **local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined1 local_b3;
  undefined8 local_b0;
  undefined1 local_80 [32];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_4e8;
  if (param_2 != (char *)0x0) {
    if (*param_2 == '\0') {
      pcVar2 = *(code **)(param_2 + 0x70);
      plVar13 = (longlong *)(param_2 + 0x90);
      if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
        plVar13 = *(longlong **)(param_2 + 0x80);
      }
      uVar7 = (**(code **)(*plVar13 + 8))();
      cVar5 = (*pcVar2)(uVar7);
      *param_2 = cVar5;
      if (cVar5 == '\0') goto LAB_1484677ef;
    }
    uVar6 = 0;
    goto LAB_1484677b7;
  }
LAB_1484677ef:
  local_498 = 0;
  uStack_490 = 0;
  local_4a8 = (void *)0x0;
  local_4a0 = *(int *)(param_1 + 0xa0);
  lVar24 = (longlong)local_4a0;
  _Src = *(void **)(param_1 + 0x98);
  if (lVar24 == 0) {
    local_49c = 0;
  }
  else {
    FUN_144a06ca8(&local_4a8,local_4a0,0);
    memcpy(local_4a8,_Src,lVar24 << 2);
  }
  FUN_14846743e(*(undefined8 *)(param_1 + 8),&local_4a8,&local_498);
  uVar7 = *(undefined8 *)(param_1 + 8);
  lVar8 = FUN_14001cc68(0x5e0,0x10);
  local_4c8 = 1;
  FUN_1482e14f4(lVar8,uVar7,param_1 + 0x98,0xf);
  lVar24 = local_498;
  lVar25 = (longlong)(int)uStack_490;
  local_4b0 = lVar8;
  if (0 < lVar25) {
    lVar23 = 0;
    do {
      uVar6 = FUN_146bcd1d8(lVar8 + 0x378,*(undefined4 *)(lVar24 + lVar23 * 4));
      *(undefined4 *)(lVar24 + lVar23 * 4) = uVar6;
      lVar23 = lVar23 + 1;
    } while (lVar25 != lVar23);
  }
  if (param_2 == (char *)0x0) {
LAB_148467928:
    FUN_14831ea78(local_168,local_4b0 + 8);
    iVar19 = *(int *)(param_1 + 0xa0);
    if (iVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar19);
    }
    if ((int)local_14c < iVar19) {
      FUN_14481578e(&local_158);
    }
    lVar24 = local_4b0;
    uVar16 = *(int *)(local_4b0 + 0x148) * 0x200 + *(int *)(local_4b0 + 0x14c);
    uVar22 = 0;
    if ((uVar16 != 0) &&
       (uVar22 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(local_4b0 + 0x150) - 1U))) {
      uVar20 = 1;
      uVar21 = 1;
      if (1 < (int)uVar16) {
        uVar20 = uVar16;
      }
      do {
        uVar22 = uVar20;
        if (uVar20 == uVar21) break;
        uVar14 = uVar21 >> 9;
        uVar17 = uVar21 & 0x1ff;
        uVar22 = uVar21;
        uVar21 = uVar21 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(local_4b0 + 0x150))[uVar14] +
                                           (ulonglong)uVar17 * 2) - 1U));
    }
LAB_148467a57:
    local_178 = local_c8;
    pppuVar11 = local_e8;
    puVar1 = puStack_f0;
    pcVar2 = local_f8;
    uVar20 = local_150;
    if (uVar22 != uVar16) {
      lVar8 = (longlong)(int)local_150;
      local_150 = local_150 + 1;
      if (local_14c < local_150) {
        FUN_1446f48e2(&local_158,uVar20);
      }
      *(uint *)(local_158 + lVar8 * 4) = uVar22;
      uVar20 = uVar22 + 1;
      if ((int)(uVar22 + 1) < (int)uVar16) {
        uVar20 = uVar16;
      }
      uVar21 = uVar22;
      do {
        uVar22 = uVar20;
        if (uVar20 - 1 == uVar21) break;
        uVar22 = uVar21 + 1;
        uVar21 = uVar22;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar24 + 0x150) +
                                             (ulonglong)(uVar22 >> 9) * 8) +
                                           (ulonglong)(uVar22 & 0x1ff) * 2) - 1U));
      goto LAB_148467a57;
    }
    uStack_448 = (undefined4)local_c8;
    iStack_444 = local_c8._4_4_;
    uStack_450 = (undefined4)uStack_d0;
    uStack_44c = uStack_d0._4_4_;
    local_f8 = FUN_143b5c00e;
    puStack_f0 = puStack_1a0;
    local_e8 = (undefined ***)0x0;
    local_d8 = &PTR_LAB_14aee5560;
    uStack_d0 = &local_4b0;
    local_c8 = param_1;
    puStack_1a0 = puVar1;
    uStack_170 = uStack_c0;
    uStack_16c = uStack_bc;
    uStack_190 = uStack_e0;
    uStack_18c = uStack_dc;
    if (pcVar2 != (code *)0x0) {
      if (pppuVar11 == (undefined ***)0x0) {
        pppuVar11 = local_188;
      }
      (*(code *)(*pppuVar11)[2])();
    }
    uVar4 = uStack_110;
    uVar7 = uStack_130;
    local_198 = local_138;
    puVar1 = puStack_140;
    local_1a8 = local_148;
    local_b8 = *(undefined4 *)(param_1 + 0xdc);
    if (*(int *)(param_1 + 0xb4) == 3) {
      local_188[0] = &PTR_LAB_14aee5580;
      ppuVar12 = (undefined **)&LAB_143b5c1d6;
    }
    else {
      local_188[0] = &PTR_LAB_14aee55a0;
      ppuVar12 = (undefined **)&LAB_143b5c26c;
    }
    uStack_448 = (undefined4)local_118;
    iStack_444 = (int)((ulonglong)local_118 >> 0x20);
    uStack_440 = uStack_110;
    local_458 = local_128;
    uStack_450 = (undefined4)lStack_120;
    uStack_44c = (undefined4)((ulonglong)lStack_120 >> 0x20);
    local_468 = local_138;
    uStack_460 = uStack_130;
    local_478 = local_148;
    puStack_470 = puStack_140;
    local_118 = local_178;
    uStack_110 = CONCAT44(uStack_16c,uStack_170);
    local_128 = local_188[0];
    lStack_120 = param_1;
    local_138 = (undefined ***)0x0;
    uStack_130 = CONCAT44(uStack_18c,uStack_190);
    local_148 = ppuVar12;
    puStack_140 = puStack_1a0;
    uStack_460._0_4_ = (undefined4)uVar7;
    uStack_460._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
    uStack_440._0_4_ = (undefined4)uVar4;
    uStack_440._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
    uStack_170 = (undefined4)uStack_440;
    uStack_16c = uStack_440._4_4_;
    uStack_190 = (undefined4)uStack_460;
    uStack_18c = uStack_460._4_4_;
    puStack_1a0 = puVar1;
    uStack_460 = uVar7;
    uStack_440 = uVar4;
    if (local_1a8 != (undefined **)0x0) {
      pppuVar11 = local_188;
      if (local_198 != (undefined ***)0x0) {
        pppuVar11 = local_198;
      }
      (*(code *)(*pppuVar11)[2])(pppuVar11);
    }
    iVar19 = *(int *)(param_1 + 0xb4);
    if (iVar19 == 0) {
      local_100 = 2;
    }
    else {
      local_100 = 1;
      if (iVar19 != 2) {
        local_100 = (uint)(iVar19 == 1) * 3;
      }
    }
    local_b0 = *(undefined8 *)(param_1 + 0xb8);
    local_b3 = 0.0 < *(double *)(param_1 + 0xa8);
    local_b4 = 1;
    FUN_14831eb48();
    local_4c8 = 0;
    FUN_146c38f66(*(undefined8 *)(param_1 + 8),local_80,1,1);
    if (param_2 == (char *)0x0) {
LAB_148467d2a:
      if (*(char *)(param_1 + 0xe0) == '\x01') {
        local_1a8 = *(undefined ***)(param_1 + 8);
        puStack_1a0 = (undefined8 *)0x0;
        local_198 = (undefined ***)0x0;
        local_1e8 = 0;
        local_1d8 = 0;
        FUN_14298451c(&local_1a8,param_1 + 0x98);
        local_488 = *(undefined8 *)(param_1 + 0x98);
        local_480 = *(undefined4 *)(param_1 + 0xa0);
        local_458 = (undefined **)0x0;
        uStack_450 = 0;
        local_478 = (undefined **)0x0;
        puStack_470 = (undefined8 *)0x0;
        uStack_44c = 0x80;
        uStack_448 = 0xffffffff;
        iStack_444 = 0;
        local_438 = (undefined8 *)0x0;
        local_430 = (ulonglong)local_430._4_4_ << 0x20;
        FUN_146bc855c();
        if ((longlong)(int)local_198 != 0) {
          puVar1 = puStack_1a0 + (int)local_198;
          puVar15 = puStack_1a0;
          do {
            lVar24 = (longlong)*(int *)((undefined8 *)*puVar15 + 1);
            if (lVar24 != 0) {
              puVar10 = local_438;
              if (local_438 == (undefined8 *)0x0) {
                puVar10 = &uStack_440;
              }
              if ((int)puStack_470 != iStack_444) {
                puVar3 = *(uint **)*puVar15;
                puVar18 = puVar3;
                do {
                  iVar19 = *(int *)((longlong)puVar10 +
                                   (ulonglong)(*puVar18 & (int)local_430 - 1U) * 4);
                  while( true ) {
                    if (iVar19 == -1) goto LAB_148468191;
                    if (*(uint *)((longlong)local_478 + (longlong)iVar19 * 0xc) == *puVar18) break;
                    iVar19 = *(int *)((longlong)local_478 + (longlong)iVar19 * 0xc + 4);
                  }
                  puVar18 = puVar18 + 1;
                } while (puVar18 != puVar3 + lVar24);
                lVar8 = 0;
                do {
                  FUN_146c0b65a(*(undefined8 *)(param_1 + 8),
                                *(undefined4 *)((longlong)puVar3 + lVar8),1,0);
                  lVar8 = lVar8 + 4;
                } while (lVar24 * 4 != lVar8);
              }
            }
LAB_148468191:
            puVar15 = puVar15 + 1;
          } while (puVar15 != puVar1);
        }
        local_430 = local_430 & 0xffffffff00000000;
        if (local_438 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        FUN_1447a082e(&local_478);
        FUN_146be9400(&puStack_1a0);
      }
      puStack_470 = *(undefined8 **)(param_1 + 8);
      local_3c8 = DAT_14c846520;
      local_428 = CONCAT44(DAT_14c846510._4_4_,(undefined4)DAT_14c846510);
      uStack_420 = CONCAT44(DAT_14c846518._4_4_,(undefined4)DAT_14c846518);
      local_3f0 = DAT_14c8464e0;
      uStack_3e8 = DAT_14c8464e8;
      local_3e0 = DAT_14c8464f0;
      local_468 = (undefined ***)(local_4b0 + 8);
      local_418 = DAT_14c846520;
      uStack_440 = DAT_14c8464e0;
      local_438 = (undefined8 *)DAT_14c8464e8;
      local_430 = DAT_14c8464f0;
      local_478 = &PTR_FUN_149f64a58;
      uStack_450 = 0;
      uStack_44c = 0;
      uStack_460 = 0;
      local_458 = (undefined **)0x0;
      uStack_448 = 0;
      iStack_444 = 0x3ff00000;
      local_410 = 0;
      uStack_408 = 0;
      local_400 = 0;
      local_3f8 = 0x3ff0000000000000;
      local_3c0 = (uint)(*(double *)(param_1 + 0xa8) <= 0.0);
      local_3b8 = 0x3eb0c6f7a0000000;
      local_3b0 = 1;
      local_3a8 = 0x3ff8000000000000;
      local_3a0 = 0x3fe0000000000000;
      local_397 = 1;
      local_380 = 0x3fb999999999999a;
      local_378 = 0x3fe0000000000000;
      local_370 = 0x101;
      local_36e = 1;
      local_36c = 0x358637bd;
      local_368 = 1;
      local_364 = 0xffffffff3c23d70a;
      local_340 = 0;
      local_350 = 0;
      uStack_348 = 0;
      local_338 = 0x3ff0000000000000;
      local_330 = DAT_14c8464e0;
      uStack_328 = DAT_14c8464e8;
      local_320 = DAT_14c8464f0;
      local_308 = DAT_14c846520;
      local_318 = (undefined4)DAT_14c846510;
      uStack_314 = DAT_14c846510._4_4_;
      uStack_310 = (undefined4)DAT_14c846518;
      uStack_30c = DAT_14c846518._4_4_;
      local_2d0 = 0;
      local_2c8 = 0;
      local_300 = 0;
      uStack_2f8 = 0;
      local_2f0 = 0;
      uStack_2e8 = 0;
      local_2c4 = 0xffffffff00000080;
      local_2bc = 0;
      local_2b0 = 0;
      local_2a8 = 0;
      local_278 = 0;
      local_270 = 0;
      local_298 = 0;
      uStack_290 = 0;
      local_26c = 0xffffffff00000080;
      local_264 = 0;
      local_258 = 0;
      local_250 = 0;
      local_228 = 0;
      local_220 = 0;
      local_248 = 0;
      uStack_240 = 0;
      local_21c = 0xffffffff00000080;
      local_214 = 0;
      local_208 = 0;
      local_200 = 0;
      local_1f7 = 1;
      local_1f8 = 1;
      local_398 = 1;
      local_388 = 1;
      local_2a0 = 1;
      local_3d8 = local_428;
      uStack_3d0 = uStack_420;
      local_390 = param_2;
      local_358 = puStack_470;
      uVar6 = FUN_146c6fae2();
      local_4b8 = (longlong *)(param_1 + 0xe8);
      *(undefined4 *)(param_1 + 0xf0) = 0;
      if (*(int *)(param_1 + 0xf4) != 0) {
        FUN_14481578e(local_4b8,0);
      }
      lVar24 = local_498;
      lVar8 = (longlong)(int)uStack_490;
      if (lVar8 != 0) {
        lVar25 = 0;
        do {
          puVar9 = (undefined4 *)FUN_146bcd17e(&local_298,*(undefined4 *)(lVar24 + lVar25));
          if (puVar9 != (undefined4 *)0x0) {
            iVar19 = *(int *)(param_1 + 0xf0);
            *(uint *)(param_1 + 0xf0) = iVar19 + 1U;
            if (*(uint *)(param_1 + 0xf4) < iVar19 + 1U) {
              FUN_1446f48e2(local_4b8,iVar19);
            }
            *(undefined4 *)(*local_4b8 + (longlong)iVar19 * 4) = *puVar9;
          }
          lVar25 = lVar25 + 4;
        } while (lVar8 * 4 != lVar25);
      }
      FUN_146ec7826(&local_478);
    }
    else {
      if (*param_2 == '\0') {
        pcVar2 = *(code **)(param_2 + 0x70);
        plVar13 = (longlong *)(param_2 + 0x90);
        if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
          plVar13 = *(longlong **)(param_2 + 0x80);
        }
        uVar7 = (**(code **)(*plVar13 + 8))();
        cVar5 = (*pcVar2)(uVar7);
        *param_2 = cVar5;
        if (cVar5 == '\0') goto LAB_148467d2a;
      }
      uVar6 = 0;
    }
    FUN_1483768e0(local_168);
  }
  else {
    if (*param_2 == '\0') {
      pcVar2 = *(code **)(param_2 + 0x70);
      plVar13 = (longlong *)(param_2 + 0x90);
      if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
        plVar13 = *(longlong **)(param_2 + 0x80);
      }
      uVar7 = (**(code **)(*plVar13 + 8))();
      cVar5 = (*pcVar2)(uVar7);
      *param_2 = cVar5;
      if (cVar5 == '\0') goto LAB_148467928;
    }
    uVar6 = 0;
  }
  lVar24 = local_4b0;
  if (local_4b0 != 0) {
    FUN_1482e1868(local_4b0);
    FUN_1400020a8(lVar24);
  }
  if (local_498 != 0) {
    FUN_1400020a8();
  }
LAB_1484677b7:
  if ((local_60 ^ (ulonglong)auStack_4e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 148468224 FUN_148468224 body=1117 status=ok
// SIG undefined FUN_148468224(void)

ulonglong FUN_148468224(longlong param_1,char *param_2)

{
  int iVar1;
  code *pcVar2;
  void *pvVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  undefined8 uVar9;
  undefined ***pppuVar10;
  undefined1 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined ***pppuVar15;
  void **ppvVar16;
  undefined1 auStack_208 [32];
  undefined1 local_1e8;
  void *local_1d8;
  int local_1d0;
  undefined4 local_1cc;
  void *local_1c8;
  ulonglong uStack_1c0;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined **local_198 [2];
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 *local_158;
  undefined8 uStack_150;
  undefined ***local_148;
  undefined8 uStack_140;
  undefined **local_138;
  longlong lStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  int local_110;
  undefined1 *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined ***local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined **local_e8;
  longlong lStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined1 local_c3;
  undefined8 local_c0;
  undefined4 local_a4;
  undefined1 auStack_90 [24];
  undefined1 *local_78;
  undefined8 uStack_70;
  undefined ***local_68;
  undefined8 uStack_60;
  undefined **local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if (param_2 != (char *)0x0) {
    if (*param_2 == '\0') {
      pcVar2 = *(code **)(param_2 + 0x70);
      plVar12 = (longlong *)(param_2 + 0x90);
      if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
        plVar12 = *(longlong **)(param_2 + 0x80);
      }
      uVar9 = (**(code **)(*plVar12 + 8))();
      cVar8 = (*pcVar2)(uVar9);
      *param_2 = cVar8;
      if (cVar8 == '\0') goto LAB_1484682af;
    }
    uVar14 = 0;
    goto LAB_148468282;
  }
LAB_1484682af:
  local_1c8 = (void *)0x0;
  uStack_1c0 = 0;
  local_1d8 = (void *)0x0;
  local_1d0 = *(int *)(param_1 + 0xa0);
  lVar13 = (longlong)local_1d0;
  pvVar3 = *(void **)(param_1 + 0x98);
  if (lVar13 == 0) {
    local_1cc = 0;
  }
  else {
    FUN_144a06ca8(&local_1d8,local_1d0,0);
    memcpy(local_1d8,pvVar3,lVar13 << 2);
  }
  FUN_14846743e(*(undefined8 *)(param_1 + 8),&local_1d8,&local_1c8);
  FUN_14831ea78(local_178,*(undefined8 *)(param_1 + 8));
  local_a4 = 1;
  FUN_14054c6c4(local_168,param_1 + 0x98);
  pppuVar10 = local_f8;
  puVar4 = local_108;
  local_108 = &LAB_143b5c2fc;
  local_f8 = (undefined ***)0x0;
  local_e8 = &PTR_LAB_14aee55c0;
  lStack_e0 = param_1;
  uStack_1b0 = uStack_100;
  uStack_1ac = uStack_fc;
  local_188 = local_d8;
  uStack_184 = uStack_d4;
  uStack_180 = uStack_d0;
  uStack_17c = uStack_cc;
  uStack_1a0 = uStack_f0;
  uStack_19c = uStack_ec;
  if (puVar4 != (undefined1 *)0x0) {
    if (pppuVar10 == (undefined ***)0x0) {
      pppuVar10 = local_198;
    }
    (*(code *)(*pppuVar10)[2])();
  }
  uVar7 = uStack_120;
  uVar6 = local_128;
  uVar5 = uStack_140;
  pppuVar10 = local_148;
  uVar9 = uStack_150;
  puVar4 = local_158;
  local_c8 = *(undefined4 *)(param_1 + 0xdc);
  if (*(int *)(param_1 + 0xb4) == 3) {
    local_198[0] = &PTR_LAB_14aee55e0;
    puVar11 = &LAB_143b5c35c;
  }
  else {
    local_198[0] = &PTR_LAB_14aee5600;
    puVar11 = &LAB_143b5c3f2;
  }
  local_48 = local_128;
  uStack_40 = uStack_120;
  local_58 = local_138;
  lStack_50 = lStack_130;
  local_68 = local_148;
  uStack_60 = uStack_140;
  local_78 = local_158;
  uStack_70 = uStack_150;
  local_128 = CONCAT44(uStack_184,local_188);
  uStack_120 = CONCAT44(uStack_17c,uStack_180);
  local_138 = local_198[0];
  lStack_130 = param_1;
  local_148 = (undefined ***)0x0;
  uStack_140 = CONCAT44(uStack_19c,uStack_1a0);
  local_158 = puVar11;
  uStack_150 = CONCAT44(uStack_1ac,uStack_1b0);
  uStack_70._0_4_ = (undefined4)uVar9;
  uStack_70._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
  uStack_60._0_4_ = (undefined4)uVar5;
  uStack_60._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  local_48._0_4_ = (undefined4)uVar6;
  local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar7;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  local_188 = (undefined4)local_48;
  uStack_184 = local_48._4_4_;
  uStack_180 = (undefined4)uStack_40;
  uStack_17c = uStack_40._4_4_;
  uStack_1a0 = (undefined4)uStack_60;
  uStack_19c = uStack_60._4_4_;
  uStack_1b0 = (undefined4)uStack_70;
  uStack_1ac = uStack_70._4_4_;
  uStack_70 = uVar9;
  uStack_60 = uVar5;
  local_48 = uVar6;
  uStack_40 = uVar7;
  if (puVar4 != (undefined1 *)0x0) {
    pppuVar15 = local_198;
    if (pppuVar10 != (undefined ***)0x0) {
      pppuVar15 = pppuVar10;
    }
    (*(code *)(*pppuVar15)[2])(pppuVar15);
  }
  iVar1 = *(int *)(param_1 + 0xb4);
  if (iVar1 == 0) {
    local_110 = 2;
  }
  else {
    local_110 = 1;
    if (iVar1 != 2) {
      local_110 = (uint)(iVar1 == 1) * 3;
    }
  }
  local_c0 = *(undefined8 *)(param_1 + 0xb8);
  local_c3 = 0.0 < *(double *)(param_1 + 0xa8);
  local_c4 = *(undefined1 *)(param_1 + 0xe0);
  FUN_14831eb48(local_178);
  if (param_2 == (char *)0x0) {
LAB_1484685b0:
    local_1e8 = 0;
    uVar14 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    FUN_146c38f66(*(undefined8 *)(param_1 + 8),auStack_90,1,1);
    pvVar3 = local_1c8;
    ppvVar16 = (void **)(param_1 + 0xe8);
    if (ppvVar16 != &local_1c8) {
      iVar1 = (int)uStack_1c0;
      lVar13 = (longlong)(int)uStack_1c0;
      *(int *)(param_1 + 0xf0) = (int)uStack_1c0;
      if ((int)uStack_1c0 == 0 && *(int *)(param_1 + 0xf4) == 0) {
        *(undefined4 *)(param_1 + 0xf4) = 0;
      }
      else {
        FUN_144a06ca8(ppvVar16,uStack_1c0 & 0xffffffff);
        if (iVar1 != 0) {
          memcpy(*ppvVar16,pvVar3,lVar13 << 2);
        }
      }
    }
  }
  else {
    if (*param_2 == '\0') {
      pcVar2 = *(code **)(param_2 + 0x70);
      plVar12 = (longlong *)(param_2 + 0x90);
      if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
        plVar12 = *(longlong **)(param_2 + 0x80);
      }
      uVar9 = (**(code **)(*plVar12 + 8))();
      cVar8 = (*pcVar2)(uVar9);
      *param_2 = cVar8;
      if (cVar8 == '\0') goto LAB_1484685b0;
    }
    uVar14 = 0;
  }
  FUN_1483768e0(local_178);
  if (local_1c8 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_148468282:
  if ((local_38 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return uVar14 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148468682 FUN_148468682 body=3625 status=ok
// SIG undefined FUN_148468682(void)

void FUN_148468682(longlong param_1,char *param_2)

{
  undefined4 *puVar1;
  double *pdVar2;
  double dVar3;
  code *pcVar4;
  longlong lVar5;
  double dVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  char cVar14;
  int iVar15;
  undefined8 uVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong *plVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  longlong *plVar26;
  uint uVar27;
  longlong lVar28;
  undefined4 *puVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  char *local_120;
  char *local_118;
  longlong local_110;
  longlong *local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  double local_c8;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a0;
  undefined4 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (param_2 == (char *)0x0) {
    local_120 = (char *)CONCAT71(local_120._1_7_,1);
    local_128 = CONCAT71(local_128._1_7_,1);
    FUN_146c005f0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x98),1,1);
  }
  else {
    if (*param_2 != '\0') goto LAB_1484690a8;
    pcVar4 = *(code **)(param_2 + 0x70);
    plVar26 = *(longlong **)(param_2 + 0x80);
    if (*(longlong **)(param_2 + 0x80) == (longlong *)0x0) {
      plVar26 = (longlong *)(param_2 + 0x90);
    }
    uVar16 = (**(code **)(*plVar26 + 8))();
    cVar14 = (*pcVar4)(uVar16);
    *param_2 = cVar14;
    if (cVar14 != '\0') goto LAB_1484690a8;
    local_120 = (char *)CONCAT71(local_120._1_7_,1);
    local_128 = CONCAT71(local_128._1_7_,1);
    FUN_146c005f0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x98),1,1);
    if (*param_2 != '\0') goto LAB_1484690a8;
    pcVar4 = *(code **)(param_2 + 0x70);
    plVar26 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar26 = *(longlong **)(param_2 + 0x80);
    }
    uVar16 = (**(code **)(*plVar26 + 8))(plVar26);
    cVar14 = (*pcVar4)(uVar16);
    *param_2 = cVar14;
    if (cVar14 != '\0') goto LAB_1484690a8;
  }
  plVar26 = (longlong *)(param_1 + 8);
  local_b8 = 0;
  uStack_b0 = 0;
  lVar25 = *(longlong *)(param_1 + 0xa8);
  lVar17 = param_1 + 0x120;
  local_128 = 0x186a000000001;
  local_120 = param_2;
  FUN_1482d4624(*(undefined8 *)(param_1 + 0x88),lVar17,&local_b8,*(undefined1 *)(param_1 + 0x130));
  if (param_2 == (char *)0x0) {
LAB_148468817:
    local_f8 = lVar17;
    local_f0 = lVar25;
    if (lVar25 == 0) {
      lVar17 = *plVar26;
      uVar22 = *(int *)(lVar17 + 0x20) * 0x200 + *(int *)(lVar17 + 0x24);
      uVar27 = 0;
      if ((uVar22 != 0) &&
         (uVar27 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar17 + 0x28) - 1U))) {
        uVar19 = 1;
        uVar24 = 1;
        if (1 < (int)uVar22) {
          uVar24 = uVar22;
        }
        do {
          uVar18 = (uint)uVar19;
          uVar27 = uVar24;
          if (uVar24 == uVar18) break;
          uVar7 = uVar19 >> 9;
          uVar19 = (ulonglong)(uVar18 + 1);
          uVar27 = uVar18;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar17 + 0x28))[uVar7] +
                                             (ulonglong)(uVar18 & 0x1ff) * 2) - 1U));
      }
LAB_148468c60:
      if (uVar27 != uVar22) {
        lVar25 = *plVar26;
        puVar29 = (undefined4 *)((longlong)(int)uVar27 * 0x18 + local_b8);
        cVar14 = FUN_146bfed03(puVar29);
        if (cVar14 != '\0') {
          lVar28 = *(longlong *)(*(longlong *)(lVar25 + 0x10) + (ulonglong)(uVar27 >> 9) * 8);
          *(undefined8 *)(lVar28 + 0x10 + (ulonglong)(uVar27 & 0x1ff) * 0x18) =
               *(undefined8 *)(puVar29 + 4);
          uVar8 = puVar29[1];
          uVar9 = puVar29[2];
          uVar10 = puVar29[3];
          puVar1 = (undefined4 *)(lVar28 + (ulonglong)(uVar27 & 0x1ff) * 0x18);
          *puVar1 = *puVar29;
          puVar1[1] = uVar8;
          puVar1[2] = uVar9;
          puVar1[3] = uVar10;
          if (*(char *)(lVar25 + 0x210) == '\x01') {
            LOCK();
            *(int *)(lVar25 + 0x214) = *(int *)(lVar25 + 0x214) + 1;
            UNLOCK();
          }
        }
        uVar24 = uVar27 + 1;
        if ((int)(uVar27 + 1) < (int)uVar22) {
          uVar24 = uVar22;
        }
        uVar18 = uVar27;
        do {
          uVar27 = uVar24;
          if (uVar24 - 1 == uVar18) break;
          uVar27 = uVar18 + 1;
          uVar18 = uVar27;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar17 + 0x28) +
                                               (ulonglong)(uVar27 >> 9) * 8) +
                                             (ulonglong)(uVar27 & 0x1ff) * 2) - 1U));
        goto LAB_148468c60;
      }
    }
    else {
      lVar17 = *(longlong *)(param_1 + 0xa8);
      uVar22 = *(int *)(lVar17 + 0x28) * 0x200 + *(int *)(lVar17 + 0x2c);
      uVar27 = 0;
      local_108 = plVar26;
      if ((uVar22 != 0) &&
         (uVar27 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar17 + 0x30) - 1U))) {
        uVar19 = 1;
        uVar24 = 1;
        if (1 < (int)uVar22) {
          uVar24 = uVar22;
        }
        do {
          uVar18 = (uint)uVar19;
          uVar27 = uVar24;
          if (uVar24 == uVar18) break;
          uVar7 = uVar19 >> 9;
          uVar19 = (ulonglong)(uVar18 + 1);
          uVar27 = uVar18;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar17 + 0x30))[uVar7] +
                                             (ulonglong)(uVar18 & 0x1ff) * 2) - 1U));
      }
LAB_14846895f:
      if (uVar27 != uVar22) {
        uVar24 = FUN_146be9b2a(*(longlong *)(param_1 + 0xa8) + 0x228,uVar27);
        lVar25 = *(longlong *)(param_1 + 8);
        puVar29 = (undefined4 *)((longlong)(int)uVar27 * 0x18 + local_b8);
        cVar14 = FUN_146bfed03(puVar29);
        if (cVar14 != '\0') {
          lVar28 = *(longlong *)(*(longlong *)(lVar25 + 0x10) + (ulonglong)(uVar24 >> 9) * 8);
          *(undefined8 *)(lVar28 + 0x10 + (ulonglong)(uVar24 & 0x1ff) * 0x18) =
               *(undefined8 *)(puVar29 + 4);
          uVar8 = puVar29[1];
          uVar9 = puVar29[2];
          uVar10 = puVar29[3];
          puVar1 = (undefined4 *)(lVar28 + (ulonglong)(uVar24 & 0x1ff) * 0x18);
          *puVar1 = *puVar29;
          puVar1[1] = uVar8;
          puVar1[2] = uVar9;
          puVar1[3] = uVar10;
          if (*(char *)(lVar25 + 0x210) == '\x01') {
            LOCK();
            *(int *)(lVar25 + 0x214) = *(int *)(lVar25 + 0x214) + 1;
            UNLOCK();
          }
        }
        uVar24 = uVar27 + 1;
        if ((int)(uVar27 + 1) < (int)uVar22) {
          uVar24 = uVar22;
        }
        uVar18 = uVar27;
        do {
          uVar27 = uVar24;
          if (uVar24 - 1 == uVar18) break;
          uVar27 = uVar18 + 1;
          uVar18 = uVar27;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar17 + 0x30) +
                                               (ulonglong)(uVar27 >> 9) * 8) +
                                             (ulonglong)(uVar27 & 0x1ff) * 2) - 1U));
        goto LAB_14846895f;
      }
      lVar17 = *local_108;
      uVar22 = *(int *)(lVar17 + 0x20) * 0x200 + *(int *)(lVar17 + 0x24);
      uVar27 = 0;
      if ((uVar22 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar17 + 0x28) - 1U))) {
        uVar19 = 1;
        uVar24 = 1;
        if (1 < (int)uVar22) {
          uVar24 = uVar22;
        }
        do {
          uVar18 = (uint)uVar19;
          uVar27 = uVar24;
          if (uVar24 == uVar18) break;
          uVar7 = uVar19 >> 9;
          uVar19 = (ulonglong)(uVar18 + 1);
          uVar27 = uVar18;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar17 + 0x28))[uVar7] +
                                             (ulonglong)(uVar18 & 0x1ff) * 2) - 1U));
      }
      plVar26 = local_108;
      if (uVar27 != uVar22) {
        do {
          iVar15 = FUN_146bcd1d8(*(longlong *)(param_1 + 0xa8) + 0x228,uVar27);
          if (iVar15 == -1) {
            local_110 = *(longlong *)(param_1 + 8);
            lVar25 = *(longlong *)(*(longlong *)(local_110 + 0x10) + (ulonglong)(uVar27 >> 9) * 8);
            uVar19 = (ulonglong)(uVar27 & 0x1ff);
            local_100 = uVar19 * 3;
            pdVar2 = (double *)(lVar25 + uVar19 * 0x18);
            dVar30 = *pdVar2 * *(double *)(param_1 + 0x100);
            dVar31 = pdVar2[1] * *(double *)(param_1 + 0x108);
            dVar6 = *(double *)(lVar25 + 0x10 + uVar19 * 0x18) * *(double *)(param_1 + 0x110);
            dVar11 = *(double *)(param_1 + 0xc0);
            dVar12 = *(double *)(param_1 + 200);
            dVar13 = *(double *)(param_1 + 0xd0);
            dVar3 = *(double *)(param_1 + 0xd8);
            dVar32 = dVar31 * dVar11 - dVar30 * dVar12;
            dVar33 = dVar6 * dVar12 - dVar31 * dVar13;
            dVar34 = dVar30 * dVar13 - dVar11 * dVar6;
            dVar33 = dVar33 + dVar33;
            dVar34 = dVar34 + dVar34;
            dVar32 = dVar32 + dVar32;
            dVar31 = (dVar13 * dVar33 - dVar11 * dVar32) +
                     *(double *)(param_1 + 0xd8) * dVar34 + dVar31 + *(double *)(param_1 + 0xe8);
            local_c8 = dVar32 * dVar3 + dVar6 + (dVar34 * dVar11 - dVar33 * dVar12) +
                       *(double *)(param_1 + 0xf0);
            local_d8._8_4_ = SUB84(dVar31,0);
            local_d8._0_8_ =
                 (dVar32 * dVar12 - dVar34 * dVar13) + dVar3 * dVar33 + dVar30 +
                 *(double *)(param_1 + 0xe0);
            local_d8._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
            cVar14 = FUN_146bfed03(local_d8);
            plVar26 = local_108;
            if (cVar14 != '\0') {
              lVar25 = *(longlong *)(*(longlong *)(local_110 + 0x10) + (ulonglong)(uVar27 >> 9) * 8)
              ;
              *(double *)(lVar25 + 0x10 + local_100 * 8) = local_c8;
              puVar29 = (undefined4 *)(lVar25 + local_100 * 8);
              *puVar29 = local_d8._0_4_;
              puVar29[1] = local_d8._4_4_;
              puVar29[2] = local_d8._8_4_;
              puVar29[3] = local_d8._12_4_;
              if (*(char *)(local_110 + 0x210) == '\x01') {
                LOCK();
                *(int *)(local_110 + 0x214) = *(int *)(local_110 + 0x214) + 1;
                UNLOCK();
              }
            }
          }
          uVar24 = uVar27 + 1;
          if ((int)(uVar27 + 1) < (int)uVar22) {
            uVar24 = uVar22;
          }
          do {
            uVar18 = uVar24;
            if (uVar24 - 1 == uVar27) break;
            uVar27 = uVar27 + 1;
            uVar18 = uVar27;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(lVar17 + 0x28) +
                                                 (ulonglong)(uVar27 >> 9) * 8) +
                                               (ulonglong)(uVar27 & 0x1ff) * 2) - 1U));
          uVar27 = uVar18;
        } while (uVar27 != uVar22);
      }
    }
    lVar25 = local_f0;
    lVar17 = local_f8;
    if (*(char *)(param_1 + 0x131) == '\x01') {
      if (local_f0 == 0) {
        lVar28 = *plVar26;
      }
      else {
        lVar28 = *(longlong *)(param_1 + 0xa8) + 8;
      }
      local_e8 = 0;
      uStack_e0 = 0;
      lVar5 = *(longlong *)(lVar28 + 0x208);
      if (lVar5 == 0) {
        if (*(char *)(lVar28 + 0x70) == '\x01') {
          local_d8 = ZEXT816(0);
          FUN_146bca1c8(local_d8,*(int *)(lVar28 + 0x20) * 0x200 + *(int *)(lVar28 + 0x24),1);
          uVar22 = *(int *)(lVar28 + 0x20) * 0x200 + *(int *)(lVar28 + 0x24);
          uVar27 = 0;
          if ((uVar22 != 0) &&
             (uVar27 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar28 + 0x28) - 1U))) {
            uVar24 = 1;
            uVar18 = 1;
            if (1 < (int)uVar22) {
              uVar24 = uVar22;
            }
            do {
              uVar27 = uVar24;
              if (uVar24 == uVar18) break;
              uVar21 = uVar18 >> 9;
              uVar23 = uVar18 & 0x1ff;
              uVar27 = uVar18;
              uVar18 = uVar18 + 1;
            } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar28 + 0x28))[uVar21] +
                                                 (ulonglong)uVar23 * 2) - 1U));
          }
LAB_148468f96:
          if (uVar27 != uVar22) {
            if (*(char *)(lVar28 + 0x70) == '\0') {
              local_98 = DAT_14c846378;
              local_a0 = DAT_14c846370;
            }
            else {
              lVar5 = *(longlong *)(*(longlong *)(lVar28 + 0x60) + (ulonglong)(uVar27 >> 9) * 8);
              local_98 = *(undefined4 *)(lVar5 + 8 + (ulonglong)(uVar27 & 0x1ff) * 0xc);
              local_a0 = *(undefined8 *)(lVar5 + (ulonglong)(uVar27 & 0x1ff) * 0xc);
            }
            *(undefined4 *)(local_d8._0_8_ + 8 + (longlong)(int)uVar27 * 0xc) = local_98;
            *(undefined8 *)(local_d8._0_8_ + (longlong)(int)uVar27 * 0xc) = local_a0;
            uVar24 = uVar27 + 1;
            if ((int)(uVar27 + 1) < (int)uVar22) {
              uVar24 = uVar22;
            }
            uVar18 = uVar27;
            do {
              uVar27 = uVar24;
              if (uVar24 - 1 == uVar18) break;
              uVar27 = uVar18 + 1;
              uVar18 = uVar27;
            } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                   (*(longlong *)(lVar28 + 0x28) +
                                                   (ulonglong)(uVar27 >> 9) * 8) +
                                                 (ulonglong)(uVar27 & 0x1ff) * 2) - 1U));
            goto LAB_148468f96;
          }
          local_120 = (char *)0x186a000000001;
          local_128 = CONCAT71(local_128._1_7_,*(undefined1 *)(param_1 + 0x130));
          local_118 = param_2;
          FUN_1482d486c(*(undefined8 *)(param_1 + 0x88),lVar17,local_d8,&local_e8);
          if (local_d8._0_8_ != 0) {
            FUN_1400020a8();
          }
        }
      }
      else {
        if (*(int *)(lVar5 + 0x38) < 1) {
          uVar16 = 0;
        }
        else {
          uVar16 = **(undefined8 **)(lVar5 + 0x30);
        }
        local_120 = (char *)0x186a000000001;
        local_128 = CONCAT71(local_128._1_7_,*(undefined1 *)(param_1 + 0x130));
        local_118 = param_2;
        FUN_1482d473c(*(undefined8 *)(param_1 + 0x88),local_f8,uVar16,&local_e8);
      }
      if ((int)uStack_e0 != 0) {
        if (param_2 == (char *)0x0) {
LAB_148468d38:
          lVar17 = *plVar26;
          lVar28 = *(longlong *)(lVar17 + 0x208);
          if (lVar25 == 0) {
            if (lVar28 == 0) {
              if (*(char *)(lVar17 + 0x70) == '\x01') {
                uVar22 = *(int *)(lVar17 + 0x20) * 0x200 + *(int *)(lVar17 + 0x24);
                uVar27 = 0;
                if ((uVar22 != 0) &&
                   (uVar27 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar17 + 0x28) - 1U)))
                {
                  uVar24 = 1;
                  uVar18 = 1;
                  if (1 < (int)uVar22) {
                    uVar24 = uVar22;
                  }
                  do {
                    uVar27 = uVar24;
                    if (uVar24 == uVar18) break;
                    uVar21 = uVar18 >> 9;
                    uVar23 = uVar18 & 0x1ff;
                    uVar27 = uVar18;
                    uVar18 = uVar18 + 1;
                  } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar17 + 0x28))[uVar21] +
                                                       (ulonglong)uVar23 * 2) - 1U));
                }
LAB_148469455:
                if (uVar27 != uVar22) {
                  if (*(char *)(*plVar26 + 0x70) == '\x01') {
                    lVar25 = *(longlong *)
                              (*(longlong *)(*plVar26 + 0x60) + (ulonglong)(uVar27 >> 9) * 8);
                    *(undefined4 *)(lVar25 + 8 + (ulonglong)(uVar27 & 0x1ff) * 0xc) =
                         *(undefined4 *)(local_e8 + 8 + (longlong)(int)uVar27 * 0xc);
                    *(undefined8 *)(lVar25 + (ulonglong)(uVar27 & 0x1ff) * 0xc) =
                         *(undefined8 *)(local_e8 + (longlong)(int)uVar27 * 0xc);
                  }
                  uVar24 = uVar27 + 1;
                  if ((int)(uVar27 + 1) < (int)uVar22) {
                    uVar24 = uVar22;
                  }
                  uVar18 = uVar27;
                  do {
                    uVar27 = uVar24;
                    if (uVar24 - 1 == uVar18) break;
                    uVar27 = uVar18 + 1;
                    uVar18 = uVar27;
                  } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                         (*(longlong *)(lVar17 + 0x28) +
                                                         (ulonglong)(uVar27 >> 9) * 8) +
                                                       (ulonglong)(uVar27 & 0x1ff) * 2) - 1U));
                  goto LAB_148469455;
                }
              }
            }
            else {
              if (*(int *)(lVar28 + 0x38) < 1) {
                lVar17 = 0;
              }
              else {
                lVar17 = **(longlong **)(lVar28 + 0x30);
              }
              uVar22 = *(int *)(lVar17 + 8) * 0x200 + *(int *)(lVar17 + 0xc);
              uVar27 = 0;
              if ((uVar22 != 0) &&
                 (uVar27 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar17 + 0x10) - 1U))) {
                uVar24 = 1;
                uVar18 = 1;
                if (1 < (int)uVar22) {
                  uVar24 = uVar22;
                }
                do {
                  uVar27 = uVar24;
                  if (uVar24 == uVar18) break;
                  uVar21 = uVar18 >> 9;
                  uVar23 = uVar18 & 0x1ff;
                  uVar27 = uVar18;
                  uVar18 = uVar18 + 1;
                } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar17 + 0x10))[uVar21] +
                                                     (ulonglong)uVar23 * 2) - 1U));
              }
LAB_148469210:
              if (uVar27 != uVar22) {
                lVar25 = 0;
                do {
                  uVar24 = uVar27 * 3 + (int)lVar25;
                  *(undefined4 *)
                   (*(longlong *)(*(longlong *)(lVar17 + 0x48) + (ulonglong)(uVar24 >> 9) * 8) +
                   (ulonglong)(uVar24 & 0x1ff) * 4) =
                       *(undefined4 *)((longlong)(int)uVar27 * 0xc + local_e8 + lVar25 * 4);
                  lVar25 = lVar25 + 1;
                } while (lVar25 != 3);
                uVar24 = uVar27 + 1;
                if ((int)(uVar27 + 1) < (int)uVar22) {
                  uVar24 = uVar22;
                }
                uVar18 = uVar27;
                do {
                  uVar27 = uVar24;
                  if (uVar24 - 1 == uVar18) break;
                  uVar27 = uVar18 + 1;
                  uVar18 = uVar27;
                } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                       (*(longlong *)(lVar17 + 0x10) +
                                                       (ulonglong)(uVar27 >> 9) * 8) +
                                                     (ulonglong)(uVar27 & 0x1ff) * 2) - 1U));
                goto LAB_148469210;
              }
            }
          }
          else if (lVar28 == 0) {
            if (*(char *)(lVar17 + 0x70) == '\x01') {
              lVar17 = *(longlong *)(param_1 + 0xa8);
              uVar22 = *(int *)(lVar17 + 0x28) * 0x200 + *(int *)(lVar17 + 0x2c);
              uVar27 = 0;
              if ((uVar22 != 0) &&
                 (uVar27 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar17 + 0x30) - 1U))) {
                uVar24 = 1;
                uVar18 = 1;
                if (1 < (int)uVar22) {
                  uVar24 = uVar22;
                }
                do {
                  uVar21 = uVar18;
                  uVar27 = uVar24;
                  if (uVar24 == uVar21) break;
                  uVar18 = uVar21 + 1;
                  uVar27 = uVar21;
                } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar17 + 0x30))[uVar21 >> 9]
                                                     + (ulonglong)(uVar21 & 0x1ff) * 2) - 1U));
              }
joined_r0x000148469253:
              uVar24 = uVar27;
              if (uVar24 != uVar22) {
                uVar27 = FUN_146be9b2a(*(longlong *)(param_1 + 0xa8) + 0x228,uVar24);
                if (*(char *)(*(longlong *)(param_1 + 8) + 0x70) == '\x01') {
                  lVar25 = *(longlong *)
                            (*(longlong *)(*(longlong *)(param_1 + 8) + 0x60) +
                            (ulonglong)(uVar27 >> 9) * 8);
                  *(undefined4 *)(lVar25 + 8 + (ulonglong)(uVar27 & 0x1ff) * 0xc) =
                       *(undefined4 *)(local_e8 + 8 + (longlong)(int)uVar24 * 0xc);
                  *(undefined8 *)(lVar25 + (ulonglong)(uVar27 & 0x1ff) * 0xc) =
                       *(undefined8 *)(local_e8 + (longlong)(int)uVar24 * 0xc);
                }
                uVar18 = uVar24 + 1;
                if ((int)(uVar24 + 1) < (int)uVar22) {
                  uVar18 = uVar22;
                }
                do {
                  uVar27 = uVar18;
                  if (uVar18 - 1 == uVar24) break;
                  uVar24 = uVar24 + 1;
                  uVar27 = uVar24;
                } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                       (*(longlong *)(lVar17 + 0x30) +
                                                       (ulonglong)(uVar24 >> 9) * 8) +
                                                     (ulonglong)(uVar24 & 0x1ff) * 2) - 1U));
                goto joined_r0x000148469253;
              }
            }
          }
          else {
            lVar17 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x210);
            if (*(int *)(lVar17 + 0x38) < 1) {
              lVar17 = 0;
            }
            else {
              lVar17 = **(longlong **)(lVar17 + 0x30);
            }
            if (*(int *)(lVar28 + 0x38) < 1) {
              lVar25 = 0;
            }
            else {
              lVar25 = **(longlong **)(lVar28 + 0x30);
            }
            uVar22 = *(int *)(lVar17 + 8) * 0x200 + *(int *)(lVar17 + 0xc);
            uVar27 = 0;
            if ((uVar22 != 0) &&
               (uVar27 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar17 + 0x10) - 1U))) {
              uVar24 = 1;
              uVar18 = 1;
              if (1 < (int)uVar22) {
                uVar24 = uVar22;
              }
              do {
                uVar27 = uVar24;
                if (uVar24 == uVar18) break;
                uVar21 = uVar18 >> 9;
                uVar23 = uVar18 & 0x1ff;
                uVar27 = uVar18;
                uVar18 = uVar18 + 1;
              } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar17 + 0x10))[uVar21] +
                                                   (ulonglong)uVar23 * 2) - 1U));
            }
LAB_14846907f:
            if (uVar27 != uVar22) {
              iVar15 = FUN_146be9b2a(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x4d8));
              lVar28 = 0;
              do {
                uVar24 = iVar15 * 3 + (int)lVar28;
                *(undefined4 *)
                 (*(longlong *)(*(longlong *)(lVar25 + 0x48) + (ulonglong)(uVar24 >> 9) * 8) +
                 (ulonglong)(uVar24 & 0x1ff) * 4) =
                     *(undefined4 *)((longlong)(int)uVar27 * 0xc + local_e8 + lVar28 * 4);
                lVar28 = lVar28 + 1;
              } while (lVar28 != 3);
              uVar24 = uVar27 + 1;
              if ((int)(uVar27 + 1) < (int)uVar22) {
                uVar24 = uVar22;
              }
              uVar18 = uVar27;
              do {
                uVar27 = uVar24;
                if (uVar24 - 1 == uVar18) break;
                uVar27 = uVar18 + 1;
                uVar18 = uVar27;
              } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                     (*(longlong *)(lVar17 + 0x10) +
                                                     (ulonglong)(uVar27 >> 9) * 8) +
                                                   (ulonglong)(uVar27 & 0x1ff) * 2) - 1U));
              goto LAB_14846907f;
            }
          }
        }
        else if (*param_2 == '\0') {
          pcVar4 = *(code **)(param_2 + 0x70);
          plVar20 = (longlong *)(param_2 + 0x90);
          if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
            plVar20 = *(longlong **)(param_2 + 0x80);
          }
          (**(code **)(*plVar20 + 8))();
          cVar14 = (*pcVar4)();
          *param_2 = cVar14;
          if (cVar14 == '\0') goto LAB_148468d38;
        }
      }
      if (local_e8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  else if (*param_2 == '\0') {
    pcVar4 = *(code **)(param_2 + 0x70);
    plVar20 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar20 = *(longlong **)(param_2 + 0x80);
    }
    (**(code **)(*plVar20 + 8))();
    cVar14 = (*pcVar4)();
    *param_2 = cVar14;
    if (cVar14 == '\0') goto LAB_148468817;
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
LAB_1484690a8:
  if ((local_90 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484694ac FUN_1484694ac body=393 status=ok
// SIG undefined FUN_1484694ac(void)

undefined8 *
FUN_1484694ac(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined1 param_5,undefined1 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  void *_Src;
  longlong *plVar5;
  
  FUN_14845abbc();
  *param_1 = &PTR_FUN_14aee3000;
  param_1[0x11] = *param_3;
  lVar4 = param_3[1];
  param_1[0x12] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  param_1[0x13] = *param_2;
  lVar4 = param_2[1];
  param_1[0x14] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x3ff00000;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x3ff00000;
  param_1[0x22] = 0x3ff0000000000000;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  iVar3 = *(int *)(param_4 + 1);
  _Src = (void *)*param_4;
  *(int *)(param_1 + 0x25) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 300) = 0;
  }
  else {
    FUN_1405b70fe(param_1 + 0x24,iVar3,0);
    memcpy((void *)param_1[0x24],_Src,(longlong)iVar3 * 0x18);
  }
  *(undefined1 *)(param_1 + 0x26) = param_5;
  *(undefined1 *)((longlong)param_1 + 0x131) = param_6;
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
  plVar5 = (longlong *)param_3[1];
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



// FUNCTION 148469636 FUN_148469636 body=422 status=ok
// SIG undefined FUN_148469636(void)

undefined8 *
FUN_148469636(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined1 param_7,undefined1 param_8)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  FUN_14845abbc();
  *param_1 = &PTR_FUN_14aee3000;
  param_1[0x11] = *param_5;
  lVar5 = param_5[1];
  param_1[0x12] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  param_1[0x13] = *param_2;
  lVar5 = param_2[1];
  param_1[0x14] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  param_1[0x15] = *param_3;
  lVar5 = param_3[1];
  param_1[0x16] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  puVar6 = param_1 + 0x18;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *param_4;
    param_4 = param_4 + 1;
    puVar6 = puVar6 + 1;
  }
  param_1[0x24] = 0;
  iVar3 = *(int *)(param_6 + 1);
  _Src = (void *)*param_6;
  *(int *)(param_1 + 0x25) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 300) = 0;
  }
  else {
    FUN_1405b70fe(param_1 + 0x24,iVar3,0);
    memcpy((void *)param_1[0x24],_Src,(longlong)iVar3 * 0x18);
  }
  *(undefined1 *)(param_1 + 0x26) = param_7;
  *(undefined1 *)((longlong)param_1 + 0x131) = param_8;
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
  plVar4 = (longlong *)param_3[1];
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
  plVar4 = (longlong *)param_5[1];
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
  return param_1;
}



// FUNCTION 1484697dc FUN_1484697dc body=1218 status=ok
// SIG undefined FUN_1484697dc(void)

void FUN_1484697dc(longlong param_1,char *param_2)

{
  double dVar1;
  double *pdVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  undefined8 uVar7;
  double *pdVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  byte bVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_2f8 [40];
  undefined4 local_2d0;
  undefined8 *local_2c8;
  longlong local_2b8;
  double *local_2b0;
  double *local_2a8;
  double *local_2a0;
  double *local_298;
  double *local_290;
  double local_288;
  double local_280;
  byte local_278;
  double local_270;
  code *local_268;
  longlong *local_260;
  undefined8 local_258;
  undefined4 local_250;
  double local_248 [16];
  double local_1c8 [33];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  FUN_148469ca0();
  if (*(longlong *)(param_1 + 0x88) == 0) goto LAB_148469a0c;
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_148469a0c;
    pcVar3 = *(code **)(param_2 + 0x70);
    plVar9 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar9 = *(longlong **)(param_2 + 0x80);
    }
    uVar7 = (**(code **)(*plVar9 + 8))();
    cVar6 = (*pcVar3)(uVar7);
    *param_2 = cVar6;
    if (cVar6 != '\0') goto LAB_148469a0c;
  }
  pdVar8 = local_1c8 + 0x10;
  local_1c8[0x11] = 0.0;
  local_1c8[0x17] = 0.0;
  local_1c8[0x18] = 0.0;
  local_1c8[0x1e] = 0.0;
  local_1c8[0x1c] = 0.0;
  local_1c8[0x1d] = 0.0;
  local_1c8[0x1a] = 0.0;
  local_1c8[0x1b] = 0.0;
  local_1c8[0x14] = 0.0;
  local_1c8[0x15] = 0.0;
  local_1c8[0x12] = 0.0;
  local_1c8[0x13] = 0.0;
  local_1c8[0x10] = 1.0;
  local_1c8[0x16] = 1.0;
  local_1c8[0x19] = -1.0;
  local_1c8[0x1f] = 1.0;
  local_1c8[0xe] = 0.0;
  local_1c8[0xf] = 0.0;
  local_1c8[0xc] = 0.0;
  local_1c8[0xd] = 0.0;
  local_1c8[10] = 0.0;
  local_1c8[0xb] = 0.0;
  local_1c8[8] = 0.0;
  local_1c8[9] = 0.0;
  local_1c8[6] = 0.0;
  local_1c8[7] = 0.0;
  local_1c8[4] = 0.0;
  local_1c8[5] = 0.0;
  local_1c8[2] = 0.0;
  local_1c8[3] = 0.0;
  local_1c8[0] = 0.0;
  local_1c8[1] = 0.0;
  lVar10 = 0;
  do {
    lVar13 = 0;
    lVar12 = param_1 + 0xe0;
    do {
      dVar1 = local_1c8[lVar10 * 4 + lVar13];
      lVar11 = 0;
      do {
        dVar1 = dVar1 + *(double *)((longlong)pdVar8 + lVar11) * *(double *)(lVar12 + lVar11 * 4);
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0x20);
      local_1c8[lVar10 * 4 + lVar13] = dVar1;
      lVar13 = lVar13 + 1;
      lVar12 = lVar12 + 8;
    } while (lVar13 != 4);
    lVar10 = lVar10 + 1;
    pdVar8 = pdVar8 + 4;
  } while (lVar10 != 4);
  dVar1 = (double)FUN_144a91046(local_1c8);
  if (0.0001 <= ABS((float)dVar1)) {
    FUN_14494412e(local_1c8,local_248);
    dVar1 = *(double *)(param_1 + 0x160) * -0.017453292519943295;
    if (9.999999747378752e-05 <= ABS(dVar1)) {
      pdVar8 = *(double **)(param_1 + 0xd0);
      pdVar2 = *(double **)(param_1 + 0xd8);
      dVar4 = (double)pdVar2 - (double)pdVar8;
      uVar15 = SUB84(pdVar8,0);
      uVar16 = (undefined4)((ulonglong)pdVar8 >> 0x20);
      if (*(char *)(param_1 + 0x168) == '\0') {
        uVar15 = 0;
        uVar16 = 0;
      }
      dVar5 = dVar1 / dVar4;
      if ((dVar4 == 0.0) && (!NAN(dVar4))) {
        dVar5 = 1.0;
      }
      if (param_2 != (char *)0x0) {
        if (*param_2 != '\0') goto LAB_148469a0c;
        pcVar3 = *(code **)(param_2 + 0x70);
        plVar9 = (longlong *)(param_2 + 0x90);
        if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
          plVar9 = *(longlong **)(param_2 + 0x80);
        }
        uVar7 = (**(code **)(*plVar9 + 8))();
        cVar6 = (*pcVar3)(uVar7);
        *param_2 = cVar6;
        if (cVar6 != '\0') goto LAB_148469a0c;
      }
      bVar14 = -(dVar4 == 0.0) & 1;
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x208);
      if (lVar10 != 0) {
        if (*(int *)(lVar10 + 0x38) < 1) {
          local_2b0 = (double *)0x0;
        }
        else {
          local_2b0 = (double *)**(double **)(lVar10 + 0x30);
        }
        local_260 = &local_2b8;
        local_288 = (double)CONCAT44(uVar16,uVar15);
        local_2c8 = &local_258;
        local_258 = 0;
        local_250 = 0;
        local_268 = FUN_143b5c482;
        local_2d0 = 0;
        local_2b8 = param_1;
        local_2a8 = local_1c8;
        local_2a0 = local_248;
        local_298 = pdVar8;
        local_290 = pdVar2;
        local_280 = dVar5;
        local_278 = bVar14;
        local_270 = dVar1;
        FUN_1401f8d10(L"ParallelFor Task",
                      *(int *)(local_2b0 + 1) * 0x200 + *(int *)((longlong)local_2b0 + 0xc));
      }
      if (param_2 != (char *)0x0) {
        if (*param_2 != '\0') goto LAB_148469a0c;
        pcVar3 = *(code **)(param_2 + 0x70);
        plVar9 = (longlong *)(param_2 + 0x90);
        if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
          plVar9 = *(longlong **)(param_2 + 0x80);
        }
        uVar7 = (**(code **)(*plVar9 + 8))();
        cVar6 = (*pcVar3)(uVar7);
        *param_2 = cVar6;
        if (cVar6 != '\0') goto LAB_148469a0c;
      }
      local_280 = 1.0 / dVar5;
      local_260 = &local_2b8;
      local_290 = (double *)CONCAT44(uVar16,uVar15);
      local_2c8 = &local_258;
      local_258 = 0;
      local_250 = 0;
      local_268 = FUN_143b5c8ac;
      local_2d0 = 0;
      local_2b8 = param_1;
      local_2b0 = local_1c8;
      local_2a8 = local_248;
      local_2a0 = pdVar8;
      local_298 = pdVar2;
      local_288 = dVar5;
      local_278 = bVar14;
      local_270 = dVar1;
      FUN_1401f8d10(L"ParallelFor Task",
                    *(int *)(*(longlong *)(param_1 + 8) + 0x20) * 0x200 +
                    *(int *)(*(longlong *)(param_1 + 8) + 0x24),1);
    }
  }
LAB_148469a0c:
  if ((local_c0 ^ (ulonglong)auStack_2f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148469ca0 FUN_148469ca0 body=1384 status=ok
// SIG undefined FUN_148469ca0(void)

void FUN_148469ca0(longlong param_1,char *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  char cVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 *puVar18;
  double *pdVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  double local_190;
  undefined1 local_188 [16];
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  double dStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  double dStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  double dStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_14846a19e;
    pcVar5 = *(code **)(param_2 + 0x70);
    plVar14 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar14 = *(longlong **)(param_2 + 0x80);
    }
    uVar12 = (**(code **)(*plVar14 + 8))();
    cVar11 = (*pcVar5)(uVar12);
    *param_2 = cVar11;
    if (cVar11 != '\0') goto LAB_14846a19e;
  }
  if (*(longlong *)(param_1 + 0x88) == 0) goto LAB_14846a19e;
  local_1b0 = 1;
  local_1b8 = 1;
  FUN_146c005f0(*(undefined8 *)(param_1 + 8),*(longlong *)(param_1 + 0x88),1,1);
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_14846a19e;
    pcVar5 = *(code **)(param_2 + 0x70);
    plVar14 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar14 = *(longlong **)(param_2 + 0x80);
    }
    uVar12 = (**(code **)(*plVar14 + 8))();
    cVar11 = (*pcVar5)(uVar12);
    *param_2 = cVar11;
    if (cVar11 != '\0') goto LAB_14846a19e;
  }
  puVar13 = &local_128;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  dStack_d0 = 0.0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  dStack_f0 = 0.0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  dStack_110 = 0.0;
  local_128 = 0;
  uStack_120 = 0;
  dVar1 = *(double *)(param_1 + 0xb0);
  dVar2 = *(double *)(param_1 + 0xb8);
  dVar20 = dVar2 + dVar2;
  dVar3 = *(double *)(param_1 + 0xc0);
  dVar7 = dVar3 + dVar3;
  dVar4 = *(double *)(param_1 + 200);
  dVar6 = dVar1 * (dVar1 + dVar1);
  local_188._8_8_ = (dVar1 + dVar1) * dVar4;
  local_168 = 1.0 - (dVar6 + dVar2 * dVar20);
  local_170 = dVar2 * dVar7 - (double)local_188._8_8_;
  local_178 = dVar1 * dVar7 + dVar20 * dVar4;
  local_188._8_8_ = dVar2 * dVar7 + (double)local_188._8_8_;
  local_188._0_8_ = 1.0 - (dVar6 + dVar7 * dVar3);
  local_190 = dVar20 * dVar1 - dVar4 * dVar7;
  local_198 = dVar1 * dVar7 - dVar20 * dVar4;
  local_1a8._8_8_ = dVar20 * dVar1 + dVar4 * dVar7;
  local_1a8._0_8_ = 1.0 - (dVar7 * dVar3 + dVar2 * dVar20);
  lVar16 = 0;
  do {
    lVar17 = 0;
    do {
      pdVar19 = (double *)local_1a8;
      if (((int)lVar16 != 0) && (pdVar19 = &local_190, (int)lVar16 != 1)) {
        pdVar19 = &local_178;
      }
      puVar13[lVar17] = pdVar19[lVar17];
      lVar17 = lVar17 + 1;
    } while (lVar17 != 3);
    lVar16 = lVar16 + 1;
    puVar13 = puVar13 + 4;
  } while (lVar16 != 3);
  dVar1 = *(double *)(param_1 + 0x98);
  dVar2 = *(double *)(param_1 + 0xa0);
  dVar3 = *(double *)(param_1 + 0xa8);
  puVar13 = &local_128;
  dStack_110 = -(local_198 * dVar3 +
                (double)local_1a8._0_8_ * dVar1 + (double)local_1a8._8_8_ * dVar2);
  dStack_f0 = -((double)local_188._8_8_ * dVar3 +
               local_190 * dVar1 + (double)local_188._0_8_ * dVar2);
  dStack_d0 = -(local_168 * dVar3 + local_178 * dVar1 + local_170 * dVar2);
  uStack_b0 = 0x3ff0000000000000;
  dVar1 = *(double *)(param_1 + 0x28);
  dVar9 = *(double *)(param_1 + 0x10);
  dVar10 = *(double *)(param_1 + 0x18);
  dVar21 = dVar10 + dVar10;
  dVar4 = *(double *)(param_1 + 0x20) + *(double *)(param_1 + 0x20);
  dVar2 = dVar9 * (dVar9 + dVar9);
  dVar7 = *(double *)(param_1 + 0x20) * dVar4;
  dVar6 = (1.0 - (dVar7 + dVar2)) * *(double *)(param_1 + 0x50);
  dVar20 = *(double *)(param_1 + 0x10) * dVar4;
  dVar8 = dVar1 * (dVar9 + dVar9);
  dVar3 = (dVar21 * dVar9 - dVar1 * dVar4) * *(double *)(param_1 + 0x50);
  local_1a8._8_4_ = SUB84(dVar3,0);
  local_1a8._0_8_ = (1.0 - (dVar7 + dVar10 * dVar21)) * *(double *)(param_1 + 0x48);
  local_1a8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_198 = (dVar21 * dVar1 + dVar20) * *(double *)(param_1 + 0x58);
  local_190 = *(double *)(param_1 + 0x30);
  local_188._8_4_ = SUB84(dVar6,0);
  local_188._0_8_ = (dVar21 * dVar9 + dVar1 * dVar4) * *(double *)(param_1 + 0x48);
  local_188._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  local_178 = (dVar4 * dVar10 - dVar8) * *(double *)(param_1 + 0x58);
  local_170 = (double)*(undefined8 *)(param_1 + 0x38);
  local_168 = (dVar20 - dVar21 * dVar1) * *(double *)(param_1 + 0x48);
  local_160 = (dVar4 * dVar10 + dVar8) * *(double *)(param_1 + 0x50);
  local_158 = (1.0 - (dVar2 + dVar10 * dVar21)) * *(double *)(param_1 + 0x58);
  local_150 = *(undefined8 *)(param_1 + 0x40);
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  local_130 = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  lVar16 = 0;
  do {
    lVar17 = 0;
    puVar18 = local_1a8;
    do {
      pdVar19 = (double *)(lVar16 * 0x20 + param_1 + 0xe0 + lVar17 * 8);
      dVar1 = *pdVar19;
      lVar15 = 0;
      do {
        dVar1 = dVar1 + *(double *)((longlong)puVar13 + lVar15) * *(double *)(puVar18 + lVar15 * 4);
        lVar15 = lVar15 + 8;
      } while (lVar15 != 0x20);
      *pdVar19 = dVar1;
      lVar17 = lVar17 + 1;
      puVar18 = puVar18 + 8;
    } while (lVar17 != 4);
    lVar16 = lVar16 + 1;
    puVar13 = puVar13 + 4;
  } while (lVar16 != 4);
LAB_14846a19e:
  if ((local_a0 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14846a20a FUN_14846a20a body=667 status=ok
// SIG undefined FUN_14846a20a(void)

void FUN_14846a20a(longlong param_1,char *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  char cVar7;
  undefined8 uVar8;
  longlong *plVar9;
  double dVar10;
  undefined1 auStack_188 [40];
  undefined4 local_160;
  undefined8 *local_158;
  longlong local_150;
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  undefined1 *local_120;
  code *local_118;
  longlong *local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined1 local_f8 [136];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_148469ca0();
  if (*(longlong *)(param_1 + 0x88) == 0) goto LAB_14846a2c1;
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_14846a2c1;
    pcVar3 = *(code **)(param_2 + 0x70);
    plVar9 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar9 = *(longlong **)(param_2 + 0x80);
    }
    uVar8 = (**(code **)(*plVar9 + 8))();
    cVar7 = (*pcVar3)(uVar8);
    *param_2 = cVar7;
    if (cVar7 != '\0') goto LAB_14846a2c1;
  }
  dVar10 = (double)FUN_144a91046(param_1 + 0xe0);
  if (ABS((float)dVar10) < 0.0001) goto LAB_14846a2c1;
  FUN_14494412e(param_1 + 0xe0,local_f8);
  puVar1 = *(undefined1 **)(param_1 + 0xd0);
  puVar2 = *(undefined1 **)(param_1 + 0xd8);
  puVar5 = (undefined1 *)(*(double *)(param_1 + 0x160) / 100.0);
  puVar6 = (undefined1 *)(*(double *)(param_1 + 0x168) / 100.0);
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x208);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x38) < 1) {
      local_148 = (undefined1 *)0x0;
    }
    else {
      local_148 = (undefined1 *)**(double **)(lVar4 + 0x30);
    }
    local_110 = &local_150;
    local_158 = &local_108;
    local_108 = 0;
    local_100 = 0;
    local_118 = FUN_143b5cb42;
    local_160 = 0;
    local_150 = param_1;
    local_140 = local_f8;
    local_138 = puVar1;
    local_130 = puVar2;
    local_128 = puVar5;
    local_120 = puVar6;
    FUN_1401f8d10(L"ParallelFor Task",*(int *)(local_148 + 8) * 0x200 + *(int *)(local_148 + 0xc));
  }
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_14846a2c1;
    pcVar3 = *(code **)(param_2 + 0x70);
    plVar9 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar9 = *(longlong **)(param_2 + 0x80);
    }
    uVar8 = (**(code **)(*plVar9 + 8))();
    cVar7 = (*pcVar3)(uVar8);
    *param_2 = cVar7;
    if (cVar7 != '\0') goto LAB_14846a2c1;
  }
  local_110 = &local_150;
  local_158 = &local_108;
  local_108 = 0;
  local_100 = 0;
  local_118 = FUN_143b5d258;
  local_160 = 0;
  local_150 = param_1;
  local_148 = local_f8;
  local_140 = puVar1;
  local_138 = puVar2;
  local_130 = puVar5;
  local_128 = puVar6;
  FUN_1401f8d10(L"ParallelFor Task",
                *(int *)(*(longlong *)(param_1 + 8) + 0x20) * 0x200 +
                *(int *)(*(longlong *)(param_1 + 8) + 0x24),1);
LAB_14846a2c1:
  if ((local_70 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14846a4a6 FUN_14846a4a6 body=20 status=ok
// SIG undefined FUN_14846a4a6(void)

void FUN_14846a4a6(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_1 + 0x10);
  for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}



// FUNCTION 14846a4ba FUN_14846a4ba body=613 status=ok
// SIG undefined FUN_14846a4ba(void)

void FUN_14846a4ba(longlong param_1,char *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  longlong lVar4;
  undefined1 *puVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  double dVar9;
  undefined1 auStack_178 [40];
  undefined4 local_150;
  undefined8 *local_148;
  longlong local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined1 *local_110;
  code *local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined1 local_e8 [136];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_148469ca0();
  if (*(longlong *)(param_1 + 0x88) == 0) goto LAB_14846a567;
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_14846a567;
    pcVar3 = *(code **)(param_2 + 0x70);
    plVar8 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar8 = *(longlong **)(param_2 + 0x80);
    }
    uVar7 = (**(code **)(*plVar8 + 8))();
    cVar6 = (*pcVar3)(uVar7);
    *param_2 = cVar6;
    if (cVar6 != '\0') goto LAB_14846a567;
  }
  dVar9 = (double)FUN_144a91046(param_1 + 0xe0);
  if (ABS((float)dVar9) < 0.0001) goto LAB_14846a567;
  FUN_14494412e(param_1 + 0xe0,local_e8);
  puVar1 = *(undefined1 **)(param_1 + 0xd0);
  puVar5 = (undefined1 *)(*(double *)(param_1 + 0x160) * 0.017453292519943295);
  puVar2 = *(undefined1 **)(param_1 + 0xd8);
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x208);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x38) < 1) {
      local_130 = (undefined1 *)0x0;
    }
    else {
      local_130 = (undefined1 *)**(double **)(lVar4 + 0x30);
    }
    local_100 = &local_138;
    local_148 = &local_f8;
    local_f8 = 0;
    local_f0 = 0;
    local_108 = FUN_143b5d520;
    local_150 = 0;
    local_138 = param_1;
    local_128 = local_e8;
    local_120 = puVar1;
    local_118 = puVar2;
    local_110 = puVar5;
    FUN_1401f8d10(L"ParallelFor Task",*(int *)(local_130 + 8) * 0x200 + *(int *)(local_130 + 0xc));
  }
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_14846a567;
    pcVar3 = *(code **)(param_2 + 0x70);
    plVar8 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar8 = *(longlong **)(param_2 + 0x80);
    }
    uVar7 = (**(code **)(*plVar8 + 8))();
    cVar6 = (*pcVar3)(uVar7);
    *param_2 = cVar6;
    if (cVar6 != '\0') goto LAB_14846a567;
  }
  local_100 = &local_138;
  local_148 = &local_f8;
  local_f8 = 0;
  local_f0 = 0;
  local_108 = FUN_143b5d95c;
  local_150 = 0;
  local_138 = param_1;
  local_130 = local_e8;
  local_128 = puVar1;
  local_120 = puVar2;
  local_118 = puVar5;
  FUN_1401f8d10(L"ParallelFor Task",
                *(int *)(*(longlong *)(param_1 + 8) + 0x20) * 0x200 +
                *(int *)(*(longlong *)(param_1 + 8) + 0x24),1);
LAB_14846a567:
  if ((local_60 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14846a728 FUN_14846a728 body=302 status=ok
// SIG undefined FUN_14846a728(void)

void FUN_14846a728(longlong *param_1,char *param_2)

{
  code *pcVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_88 [40];
  undefined4 local_60 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_60[0] = 1;
  *(undefined4 *)(param_1 + 0x2a) = 1;
  FUN_146c8b436(param_1 + 0x2b,&local_58);
  FUN_146c8b486(param_1 + 0x2d,&local_48);
  FUN_146c81a14(local_60);
  if (*(char *)((longlong)param_1 + 0xa9) == '\0') {
    lVar4 = (ulonglong)(*(byte *)(param_1 + 0x1b) & 1) * 8 + 0x20;
LAB_14846a7c6:
    bVar2 = (**(code **)(*param_1 + lVar4))(param_1,param_2);
    iVar7 = (uint)(bVar2 ^ 1) << 2;
  }
  else {
    iVar7 = 4;
    if (((*(byte *)(param_1 + 0x1b) & 1) == 0) &&
       (lVar4 = 0x20, *(int *)((longlong)param_1 + 0xc4) != 0)) goto LAB_14846a7c6;
  }
  if (param_2 != (char *)0x0) {
    iVar8 = 2;
    if (*param_2 != '\0') goto LAB_14846a820;
    pcVar1 = *(code **)(param_2 + 0x70);
    plVar6 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar6 = *(longlong **)(param_2 + 0x80);
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    cVar3 = (*pcVar1)(uVar5);
    *param_2 = cVar3;
    if (cVar3 != '\0') goto LAB_14846a820;
  }
  iVar8 = iVar7;
LAB_14846a820:
  *(int *)(param_1 + 0x2a) = iVar8;
  (**(code **)(*param_1 + 0x10))(param_1,param_1 + 0x2a);
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14846a858 FUN_14846a858 body=1682 status=ok
// SIG undefined FUN_14846a858(void)

void FUN_14846a858(longlong param_1,undefined8 param_2,longlong *param_3,undefined1 *param_4)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code **ppcVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_2d8 [36];
  undefined4 local_2b4;
  longlong local_2b0;
  void *local_2a8;
  undefined8 local_2a0;
  longlong *local_298;
  undefined1 *local_290;
  undefined8 *local_288;
  undefined8 uStack_280;
  longlong local_278;
  undefined8 uStack_270;
  undefined8 *local_268;
  undefined8 uStack_260;
  undefined1 *local_258 [2];
  undefined8 local_248;
  undefined **local_238;
  undefined8 local_230;
  undefined1 *local_218 [2];
  undefined8 local_208;
  undefined **local_1f8;
  undefined8 local_1f0;
  code *local_1d8 [2];
  undefined8 local_1c8;
  undefined **local_1b8;
  longlong local_1b0;
  code *local_198 [2];
  undefined8 local_188;
  undefined **local_178;
  longlong local_170;
  code *local_158 [2];
  undefined8 local_148;
  undefined **local_138;
  longlong local_130;
  code *local_118 [2];
  undefined8 local_108;
  undefined **local_f8;
  longlong local_f0;
  void *local_d8;
  ulonglong local_d0;
  void *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0 [80];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  *param_4 = 0;
  FUN_148483dd7(*param_3,(int)param_3[1]);
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) != 0) {
    FUN_148483e10(param_3);
  }
  local_268 = (undefined8 *)0x0;
  uStack_260 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_2b0 = param_1;
  if (*(char *)(param_1 + 0xf8) != '\x01') {
    if (*(int *)(param_1 + 0x10c) == -1) {
      uStack_260 = 1;
      FUN_148306f12(&local_268,0);
      uVar2 = uStack_270;
      *local_268 = 0;
      lVar9 = (longlong)(int)uStack_270;
      uVar3 = (int)uStack_270 + 1;
      uStack_270 = CONCAT44(uStack_270._4_4_,uVar3);
      if (uStack_270._4_4_ < uVar3) {
        FUN_148483e86(&local_278,uVar2 & 0xffffffff);
      }
      *(undefined8 *)(local_278 + lVar9 * 8) = 0;
    }
    else {
      uStack_260 = 1;
      FUN_148306f12(&local_268,0);
      *local_268 = 0;
      FUN_140619b9c(param_1 + 0x100,&local_c8);
      puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      uVar2 = uStack_270;
      *puVar5 = local_c8;
      local_c8 = (void *)0x0;
      *(int *)(puVar5 + 1) = (int)local_c0;
      *(int *)((longlong)puVar5 + 0xc) = local_c0._4_4_;
      local_c0 = 0;
      lVar9 = (longlong)(int)uStack_270;
      uVar3 = (int)uStack_270 + 1;
      uStack_270 = CONCAT44(uStack_270._4_4_,uVar3);
      if (uStack_270._4_4_ < uVar3) {
        FUN_148483e86(&local_278,uVar2 & 0xffffffff);
      }
      *(undefined8 **)(local_278 + lVar9 * 8) = puVar5;
      param_1 = local_2b0;
      if (local_c8 != (void *)0x0) {
        FUN_1400020a8();
        param_1 = local_2b0;
      }
    }
    goto LAB_14846abd2;
  }
  if (*(int *)(param_1 + 0x10c) == -1) {
    local_2a8 = (void *)0x0;
LAB_14846a8eb:
    local_d8 = (void *)0x0;
    local_d0 = 0xffffffff00000000;
    local_2b4 = 1;
  }
  else {
    FUN_140619b9c(param_1 + 0x100,&local_c8);
    local_2a8 = local_c8;
    if (local_c0._4_4_ == -1) goto LAB_14846a8eb;
    local_d8 = (void *)0x0;
    local_d0 = CONCAT44(local_d0._4_4_,(int)local_c0);
    if ((int)local_c0 == 0) {
      local_d0 = local_c0 & 0xffffffff;
      local_2b4 = 0;
    }
    else {
      lVar9 = (longlong)(int)local_c0;
      local_2b4 = 0;
      FUN_144a06ca8(&local_d8,local_c0 & 0xffffffff,0);
      memcpy(local_d8,local_2a8,lVar9 << 2);
    }
  }
  local_2a0 = param_2;
  local_298 = param_3;
  local_290 = param_4;
  FUN_148342a4c(&local_c8,param_2,&local_d8);
  local_288 = (undefined8 *)0x0;
  uStack_280 = 0;
  FUN_148342d16(local_b0);
  if (local_268 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  puVar5 = local_288;
  local_268 = local_288;
  lVar9 = (longlong)(int)uStack_280;
  uStack_260 = uStack_280;
  if (lVar9 != 0) {
    lVar10 = 0;
    do {
      FUN_148342ff8(&local_c8,&local_288,*(undefined8 *)((longlong)puVar5 + lVar10));
      puVar4 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      uVar2 = uStack_270;
      *puVar4 = local_288;
      local_288 = (undefined8 *)0x0;
      *(int *)(puVar4 + 1) = (int)uStack_280;
      *(undefined4 *)((longlong)puVar4 + 0xc) = uStack_280._4_4_;
      uStack_280 = 0;
      lVar8 = (longlong)(int)uStack_270;
      uVar3 = (int)uStack_270 + 1;
      uStack_270 = CONCAT44(uStack_270._4_4_,uVar3);
      if (uStack_270._4_4_ < uVar3) {
        FUN_148483e86(&local_278,uVar2 & 0xffffffff);
      }
      *(undefined8 **)(local_278 + lVar8 * 8) = puVar4;
      if (local_288 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      lVar10 = lVar10 + 8;
    } while (lVar9 * 8 != lVar10);
  }
  FUN_14846aeec(&local_c8);
  param_4 = local_290;
  param_3 = local_298;
  param_2 = local_2a0;
  param_1 = local_2b0;
  if ((char)local_2b4 == '\0' && local_2a8 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_14846abd2:
  if (0 < (int)uStack_260) {
    lVar9 = 0;
    do {
      local_c8 = *(void **)(param_1 + 8);
      local_c0 = 0;
      uStack_b8 = 0;
      if (*(int *)(param_1 + 0xc4) == 0) {
        lVar10 = *(longlong *)(local_278 + lVar9 * 8);
        if (*(longlong *)(param_1 + 0x98) == 0) {
          if (lVar10 != 0) {
            local_188 = 0;
            local_178 = &PTR_LAB_14aee5730;
            local_198[0] = FUN_143b5e550;
            uVar7 = *(undefined8 *)(local_278 + lVar9 * 8);
            ppcVar6 = local_198;
            local_170 = param_1;
LAB_14846ae4a:
            FUN_142984384(&local_c8,uVar7,ppcVar6);
            goto LAB_14846ad5b;
          }
          local_1c8 = 0;
          local_1b8 = &PTR_LAB_14aee5750;
          local_1d8[0] = FUN_143b5e5ca;
          ppcVar6 = local_1d8;
          local_1b0 = param_1;
        }
        else {
          if (lVar10 != 0) {
            local_108 = 0;
            local_f8 = &PTR_LAB_14aee56f0;
            local_118[0] = FUN_143b5e3c0;
            uVar7 = *(undefined8 *)(local_278 + lVar9 * 8);
            ppcVar6 = local_118;
            local_f0 = param_1;
            goto LAB_14846ae4a;
          }
          local_148 = 0;
          local_138 = &PTR_LAB_14aee5710;
          local_158[0] = FUN_143b5e488;
          ppcVar6 = local_158;
          local_130 = param_1;
        }
        FUN_142984024(&local_c8,ppcVar6);
      }
      else {
        if (*(longlong *)(local_278 + lVar9 * 8) == 0) {
          local_248 = 0;
          local_238 = &PTR_LAB_14aee5790;
          local_258[0] = &LAB_143b5e69a;
          local_230 = param_2;
          FUN_142984024(&local_c8,local_258);
        }
        else {
          local_208 = 0;
          local_1f8 = &PTR_LAB_14aee5770;
          local_218[0] = &LAB_143b5e644;
          local_1f0 = param_2;
          FUN_142984384(&local_c8,*(undefined8 *)(local_278 + lVar9 * 8),local_218);
        }
        *param_4 = 1;
      }
LAB_14846ad5b:
      if ((int)uStack_b8 != 0) {
        puVar5 = local_268 + lVar9;
        iVar1 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
          FUN_148483fb8(param_3,iVar1);
        }
        FUN_148483f0c((longlong)iVar1 * 0x30 + *param_3,&local_c8,puVar5);
        param_1 = local_2b0;
      }
      FUN_146be9400(&local_c0);
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)uStack_260);
  }
  FUN_148483e40(local_278,uStack_270 & 0xffffffff);
  if (local_278 != 0) {
    FUN_1400020a8();
  }
  if (local_268 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14846aeec FUN_14846aeec body=91 status=ok
// SIG undefined FUN_14846aeec(void)

void FUN_14846aeec(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_148473d28(param_1 + 0x18);
  if (*(int *)(param_1 + 0x14) != -1) {
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0xffffffff00000000;
  }
  return;
}



// FUNCTION 14846af48 FUN_14846af48 body=2685 status=ok
// SIG undefined FUN_14846af48(void)

ulonglong FUN_14846af48(longlong param_1,char *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  code *pcVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  char *pcVar15;
  char cVar16;
  undefined1 uVar17;
  undefined8 uVar18;
  float *pfVar19;
  longlong *plVar20;
  undefined8 unaff_RBP;
  ulonglong uVar21;
  char **ppcVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_1c8 [32];
  char **local_1a8;
  undefined4 local_1a0;
  undefined8 *local_198;
  longlong local_188;
  longlong local_180;
  char **local_178;
  undefined4 local_170 [2];
  char **local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  char **local_140;
  longlong *local_138;
  char **local_130;
  longlong *local_128;
  longlong *local_120;
  longlong local_118 [4];
  char **local_f8;
  ulonglong uStack_f0;
  undefined1 local_e1;
  longlong local_e0;
  longlong local_d8;
  char *local_c8;
  longlong local_c0;
  undefined4 local_b4;
  code *local_b0;
  char ***local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar24 = *(longlong *)(param_1 + 0x88);
  local_c8 = param_2;
  if (lVar24 != 0) {
    uVar18 = FUN_14001cc68(0x220,0x10);
    FUN_146bff712(uVar18,lVar24);
    puVar10 = *(undefined8 **)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uVar18;
    if (puVar10 != (undefined8 *)0x0) {
      (**(code **)*puVar10)(puVar10,1);
      uVar18 = *(undefined8 *)(param_1 + 8);
    }
    FUN_148328bf2(&local_e0,uVar18,*(undefined4 *)(param_1 + 0xb0),1);
    pcVar15 = local_c8;
    if (local_d8 != 0) {
      if (local_c8 == (char *)0x0) {
LAB_14846b0a1:
        local_e1 = 0;
        local_f8 = (char **)0x0;
        uStack_f0 = 0;
        FUN_14846a858(param_1,local_d8);
        pcVar15 = local_c8;
        if (local_c8 == (char *)0x0) {
LAB_14846b0d8:
          uVar21 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
          if ((longlong)(int)uStack_f0 != 0) {
            local_178 = local_f8 + (longlong)(int)uStack_f0 * 6;
            ppcVar22 = local_f8;
            local_188 = param_1;
            do {
              lVar24 = local_188;
              iVar6 = *(int *)(ppcVar22 + 4);
              lVar25 = (longlong)iVar6;
              local_118[2] = 0;
              local_118[3] = 0;
              local_140 = (char **)((ulonglong)local_140 & 0xffffffffffffff00);
              FUN_14475e60e(local_118 + 2,&local_140);
              local_118[0] = 0;
              local_118[1] = 0;
              FUN_14846b9c6(local_118,iVar6);
              local_180 = lVar25;
              if (0 < lVar25) {
                lVar25 = 0;
                do {
                  plVar20 = *(longlong **)(ppcVar22[3] + lVar25 * 8);
                  if ((*(char *)(lVar24 + 0xa9) == '\x01') &&
                     (lVar24 = plVar20[1], (longlong)(int)lVar24 != 0)) {
                    pfVar19 = (float *)(lVar25 * 0x10 + local_118[0]);
                    lVar12 = *plVar20;
                    lVar23 = 0;
                    do {
                      uVar9 = *(int *)(lVar12 + lVar23) * 3;
                      lVar13 = *(longlong *)(local_d8 + 0x78);
                      uVar7 = *(uint *)(*(longlong *)(lVar13 + (ulonglong)(uVar9 >> 9) * 8) +
                                       (ulonglong)(uVar9 & 0x1ff) * 4);
                      if (-1 < (int)uVar7) {
                        uVar8 = *(uint *)(*(longlong *)(lVar13 + (ulonglong)(uVar9 + 2 >> 9) * 8) +
                                         (ulonglong)(uVar9 + 2 & 0x1ff) * 4);
                        uVar9 = *(uint *)(*(longlong *)(lVar13 + (ulonglong)(uVar9 + 1 >> 9) * 8) +
                                         (ulonglong)(uVar9 + 1 & 0x1ff) * 4);
                        lVar13 = *(longlong *)(local_d8 + 0x48);
                        lVar14 = *(longlong *)(lVar13 + (ulonglong)(uVar7 >> 8) * 8);
                        uVar21 = (ulonglong)((uVar7 & 0xff) << 3);
                        fVar28 = *(float *)(lVar14 + uVar21);
                        fVar1 = *(float *)(lVar14 + 4 + uVar21);
                        lVar14 = *(longlong *)(lVar13 + (ulonglong)(uVar9 >> 5 & 0x3fffff8));
                        uVar21 = (ulonglong)((uVar9 & 0xff) << 3);
                        fVar2 = *(float *)(lVar14 + uVar21);
                        fVar3 = *(float *)(lVar14 + 4 + uVar21);
                        lVar13 = *(longlong *)(lVar13 + (ulonglong)(uVar8 >> 5 & 0x3fffff8));
                        uVar21 = (ulonglong)((uVar8 & 0xff) << 3);
                        fVar4 = *(float *)(lVar13 + uVar21);
                        fVar5 = *(float *)(lVar13 + uVar21 + 4);
                        fVar26 = *pfVar19;
                        if (fVar28 < *pfVar19) {
                          *pfVar19 = fVar28;
                          fVar26 = fVar28;
                        }
                        fVar27 = pfVar19[2];
                        if (pfVar19[2] < fVar28) {
                          pfVar19[2] = fVar28;
                          fVar27 = fVar28;
                        }
                        fVar28 = pfVar19[1];
                        if (fVar1 < pfVar19[1]) {
                          pfVar19[1] = fVar1;
                          fVar28 = fVar1;
                        }
                        fVar29 = pfVar19[3];
                        if (pfVar19[3] < fVar1) {
                          pfVar19[3] = fVar1;
                          fVar29 = fVar1;
                        }
                        if (fVar2 < fVar26) {
                          *pfVar19 = fVar2;
                          fVar26 = fVar2;
                        }
                        if (fVar27 < fVar2) {
                          pfVar19[2] = fVar2;
                          fVar27 = fVar2;
                        }
                        if (fVar3 < fVar28) {
                          pfVar19[1] = fVar3;
                          fVar28 = fVar3;
                        }
                        if (fVar29 < fVar3) {
                          pfVar19[3] = fVar3;
                          fVar29 = fVar3;
                        }
                        if (fVar4 < fVar26) {
                          *pfVar19 = fVar4;
                        }
                        if (fVar27 < fVar4) {
                          pfVar19[2] = fVar4;
                        }
                        if (fVar5 < fVar28) {
                          pfVar19[1] = fVar5;
                        }
                        if (fVar29 < fVar5) {
                          pfVar19[3] = fVar5;
                        }
                      }
                      lVar23 = lVar23 + 4;
                    } while ((longlong)(int)lVar24 * 4 != lVar23);
                  }
                  *(undefined1 *)(local_118[2] + lVar25) = 0;
                  iVar6 = *(int *)(local_188 + 0xc0);
                  if (iVar6 == 2) {
                    local_1a8 = (char **)0x0;
                    uVar17 = FUN_14833aaea(&local_e0,plVar20,local_e1,
                                           *(undefined1 *)(local_188 + 200));
LAB_14846b3e4:
                    *(undefined1 *)(local_118[2] + lVar25) = uVar17;
                    if (*(char *)(local_118[2] + lVar25) == '\x01') {
                      FUN_14833c41c(&local_e0,plVar20);
                    }
                  }
                  else {
                    if (iVar6 == 1) {
                      uVar17 = FUN_148339b10(&local_e0,plVar20,local_e1,0);
                      goto LAB_14846b3e4;
                    }
                    if (iVar6 == 0) {
                      local_140 = (char **)CONCAT44(local_140._4_4_,
                                                    *(undefined4 *)(local_188 + 0xcc));
                      local_138 = *(longlong **)(local_188 + 0xd0);
                      uVar17 = FUN_148325c62(&local_e0,plVar20);
                      *(undefined1 *)(local_118[2] + lVar25) = uVar17;
                    }
                  }
                  pcVar15 = local_c8;
                  if (local_c8 != (char *)0x0) {
                    if (*local_c8 != '\0') goto LAB_14846b85c;
                    pcVar11 = *(code **)(local_c8 + 0x70);
                    plVar20 = (longlong *)(local_c8 + 0x90);
                    if (*(longlong **)(local_c8 + 0x80) != (longlong *)0x0) {
                      plVar20 = *(longlong **)(local_c8 + 0x80);
                    }
                    (**(code **)(*plVar20 + 8))();
                    cVar16 = (*pcVar11)();
                    *pcVar15 = cVar16;
                    if (cVar16 != '\0') goto LAB_14846b85c;
                  }
                  lVar25 = lVar25 + 1;
                  lVar24 = local_188;
                } while (lVar25 != local_180);
              }
              if (*(char *)(lVar24 + 0xa8) == '\x01') {
                local_140 = &local_c8;
                local_138 = local_118 + 2;
                local_128 = &local_e0;
                local_a0 = 0;
                local_98 = 0;
                local_b0 = FUN_143b5e6f0;
                local_a8 = &local_140;
                local_198 = &local_a0;
                local_1a0 = 0;
                local_130 = ppcVar22;
                FUN_1401f8d10(L"ParallelFor Task",local_180,1);
              }
              pcVar15 = local_c8;
              if (local_c8 != (char *)0x0) {
                if (*local_c8 == '\0') {
                  pcVar11 = *(code **)(local_c8 + 0x70);
                  plVar20 = (longlong *)(local_c8 + 0x90);
                  if (*(longlong **)(local_c8 + 0x80) != (longlong *)0x0) {
                    plVar20 = *(longlong **)(local_c8 + 0x80);
                  }
                  (**(code **)(*plVar20 + 8))();
                  cVar16 = (*pcVar11)();
                  *pcVar15 = cVar16;
                  if (cVar16 == '\0') goto LAB_14846b52e;
                }
LAB_14846b85c:
                if (local_118[0] != 0) {
                  FUN_1400020a8();
                }
                if (local_118[2] != 0) {
                  FUN_1400020a8();
                }
                goto LAB_14846b8b6;
              }
LAB_14846b52e:
              if (*(char *)(local_188 + 0xa9) == '\x01') {
                local_140 = &local_c8;
                local_138 = local_118 + 2;
                local_128 = local_118;
                local_120 = &local_e0;
                local_a0 = 0;
                local_98 = 0;
                local_b0 = FUN_143b5e770;
                local_a8 = &local_140;
                local_198 = &local_a0;
                local_1a0 = 0;
                local_130 = ppcVar22;
                FUN_1401f8d10(L"ParallelFor Task",local_180,1);
              }
              pcVar15 = local_c8;
              if (local_c8 != (char *)0x0) {
                if (*local_c8 == '\0') {
                  pcVar11 = *(code **)(local_c8 + 0x70);
                  plVar20 = (longlong *)(local_c8 + 0x90);
                  if (*(longlong **)(local_c8 + 0x80) != (longlong *)0x0) {
                    plVar20 = *(longlong **)(local_c8 + 0x80);
                  }
                  uVar18 = (**(code **)(*plVar20 + 8))();
                  cVar16 = (*pcVar11)(uVar18);
                  *pcVar15 = cVar16;
                  if (cVar16 == '\0') goto LAB_14846b5fd;
                }
                goto LAB_14846b85c;
              }
LAB_14846b5fd:
              if (*(char *)(local_188 + 0xaa) == '\x01') {
                local_b4 = *(undefined4 *)(local_188 + 0xac);
                local_130 = *(char ***)(local_188 + 8);
                local_c0 = local_d8;
                local_138 = &local_c0;
                local_128 = (longlong *)&local_b4;
                local_a0 = 0;
                local_98 = 0;
                local_b0 = FUN_143b5dbc2;
                local_a8 = &local_140;
                local_198 = &local_a0;
                local_1a0 = 0;
                local_140 = ppcVar22;
                FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(ppcVar22 + 4),1);
              }
              pcVar15 = local_c8;
              if (local_c8 != (char *)0x0) {
                if (*local_c8 == '\0') {
                  pcVar11 = *(code **)(local_c8 + 0x70);
                  plVar20 = (longlong *)(local_c8 + 0x90);
                  if (*(longlong **)(local_c8 + 0x80) != (longlong *)0x0) {
                    plVar20 = *(longlong **)(local_c8 + 0x80);
                  }
                  uVar18 = (**(code **)(*plVar20 + 8))();
                  cVar16 = (*pcVar11)(uVar18);
                  *pcVar15 = cVar16;
                  if (cVar16 == '\0') goto LAB_14846b6cf;
                }
                goto LAB_14846b85c;
              }
LAB_14846b6cf:
              lVar24 = local_188;
              if ((*(char *)(local_188 + 0xb4) == '\x01') && (0 < *(int *)(ppcVar22 + 1))) {
                local_1a8 = ppcVar22;
                cVar16 = FUN_14833d8d6(&local_e0,*(undefined4 *)(local_188 + 0xb8),
                                       *(undefined4 *)(local_188 + 0xbc));
                if (cVar16 == '\0') {
                  local_140 = (char **)0x14ae733cc;
                  local_138._0_4_ = 0x13;
                  FUN_1446e940c(&local_a0,&local_140);
                  local_140 = (char **)0x14aee33f8;
                  local_138 = (longlong *)CONCAT44(local_138._4_4_,0xe);
                  FUN_1446e940c(&local_b0,&local_140);
                  FUN_140208bae(&local_140,&local_b0,&local_a0,L"Failed to pack UV islands");
                  local_170[0] = 0;
                  local_168 = local_140;
                  if (local_140 != (char **)0x0) {
                    (**(code **)(*local_140 + 8))();
                  }
                  local_160 = local_138._0_4_;
                  local_158 = 0;
                  uStack_150 = 0;
                  local_148 = 0;
                  FUN_1402160b8();
                  FUN_14846ba34(lVar24 + 0x150,local_170);
                  if (local_140 != (char **)0x0) {
                    (**(code **)(*local_140 + 0x10))();
                  }
                  goto LAB_14846b85c;
                }
              }
              pcVar15 = local_c8;
              if (local_c8 != (char *)0x0) {
                if (*local_c8 == '\0') {
                  pcVar11 = *(code **)(local_c8 + 0x70);
                  plVar20 = (longlong *)(local_c8 + 0x90);
                  if (*(longlong **)(local_c8 + 0x80) != (longlong *)0x0) {
                    plVar20 = *(longlong **)(local_c8 + 0x80);
                  }
                  uVar18 = (**(code **)(*plVar20 + 8))();
                  cVar16 = (*pcVar11)(uVar18);
                  *pcVar15 = cVar16;
                  if (cVar16 == '\0') goto LAB_14846b720;
                }
                goto LAB_14846b85c;
              }
LAB_14846b720:
              if (local_118[0] != 0) {
                FUN_1400020a8();
              }
              if (local_118[2] != 0) {
                FUN_1400020a8();
              }
              ppcVar22 = ppcVar22 + 6;
              uVar21 = CONCAT71((int7)((ulonglong)ppcVar22 >> 8),1);
            } while (ppcVar22 != local_178);
          }
        }
        else {
          if (*local_c8 == '\0') {
            pcVar11 = *(code **)(local_c8 + 0x70);
            plVar20 = (longlong *)(local_c8 + 0x90);
            if (*(longlong **)(local_c8 + 0x80) != (longlong *)0x0) {
              plVar20 = *(longlong **)(local_c8 + 0x80);
            }
            uVar18 = (**(code **)(*plVar20 + 8))();
            cVar16 = (*pcVar11)(uVar18);
            *pcVar15 = cVar16;
            if (cVar16 == '\0') goto LAB_14846b0d8;
          }
LAB_14846b8b6:
          uVar21 = 0;
        }
        FUN_148483dd7(local_f8,uStack_f0 & 0xffffffff);
        if (local_f8 != (char **)0x0) {
          FUN_1400020a8();
        }
        goto LAB_14846b04f;
      }
      if (*local_c8 == '\0') {
        pcVar11 = *(code **)(local_c8 + 0x70);
        plVar20 = (longlong *)(local_c8 + 0x90);
        if (*(longlong **)(local_c8 + 0x80) != (longlong *)0x0) {
          plVar20 = *(longlong **)(local_c8 + 0x80);
        }
        uVar18 = (**(code **)(*plVar20 + 8))();
        cVar16 = (*pcVar11)(uVar18);
        *pcVar15 = cVar16;
        if (cVar16 == '\0') goto LAB_14846b0a1;
      }
    }
  }
  uVar21 = 0;
LAB_14846b04f:
  if ((local_90 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar21 & 0xffffffff;
}



// FUNCTION 14846b9c6 FUN_14846b9c6 body=109 status=ok
// SIG undefined FUN_14846b9c6(void)

void FUN_14846b9c6(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148484064(param_1,iVar1);
    }
    FUN_14848404c((longlong)iVar1 * 0x10 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1484840ea(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14846ba34 FUN_14846ba34 body=104 status=ok
// SIG undefined FUN_14846ba34(void)

void FUN_14846ba34(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_14834e770((longlong *)(param_1 + 8),iVar1);
  }
  FUN_148473e96((longlong)iVar1 * 0x30 + *(longlong *)(param_1 + 8),param_2);
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong **)(param_2 + 8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014846ba8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_2 + 8) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14846ba9c FUN_14846ba9c body=2481 status=ok
// SIG undefined FUN_14846ba9c(void)

ulonglong FUN_14846ba9c(longlong param_1,char *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_248 [32];
  char **local_228;
  char *local_220;
  undefined8 *local_218;
  longlong local_208;
  code *local_200;
  undefined4 local_1f8 [2];
  char **local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8 [2];
  char **local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  char *local_198;
  undefined8 uStack_190;
  undefined4 local_188 [2];
  char **local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  char *local_158;
  ulonglong uStack_150;
  undefined8 local_140;
  undefined4 local_138;
  undefined1 local_134;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined2 local_f8;
  undefined8 local_f4;
  longlong local_e8;
  ulonglong uStack_e0;
  undefined1 local_d1;
  undefined1 local_d0 [8];
  char *local_c8;
  char *local_b8;
  char **local_b0;
  char **local_a8;
  undefined1 *local_a0;
  char **local_98;
  char *local_90;
  undefined4 local_84;
  code *local_80;
  char ***local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_248;
  lVar11 = *(longlong *)(param_1 + 0x88);
  local_b8 = param_2;
  if (lVar11 != 0) {
    uVar6 = FUN_14001cc68(0x220,0x10);
    FUN_146bff712(uVar6,lVar11);
    puVar1 = *(undefined8 **)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uVar6;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
      uVar6 = *(undefined8 *)(param_1 + 8);
    }
    FUN_148328bf2(local_d0,uVar6,*(undefined4 *)(param_1 + 0xb0),1);
    pcVar8 = local_b8;
    if (local_c8 != (char *)0x0) {
      if (local_b8 == (char *)0x0) {
LAB_14846bbb9:
        local_d1 = 0;
        local_e8 = 0;
        uStack_e0 = 0;
        FUN_14846a858(param_1,local_c8);
        pcVar8 = local_b8;
        if (local_b8 == (char *)0x0) {
LAB_14846bbf0:
          uVar10 = CONCAT71((int7)((ulonglong)pcVar8 >> 8),1);
          if ((longlong)(int)uStack_e0 != 0) {
            local_208 = param_1 + 0x150;
            lVar11 = (longlong)(int)uStack_e0 * 0x30;
            lVar12 = local_e8 + 0x28;
            do {
              lVar11 = lVar11 + -0x30;
              local_140 = 0;
              local_138 = 100;
              local_134 = 1;
              local_130 = 0x3ff0000000000000;
              local_128 = 2;
              local_f8 = 0x101;
              local_f4 = 0x3f80000000000200;
              local_120 = *(undefined8 *)(param_1 + 0xe0);
              local_118 = *(undefined8 *)(param_1 + 0xe8);
              local_110 = *(undefined8 *)(param_1 + 0xf0);
              local_108 = *(undefined4 *)(param_1 + 0xcc);
              local_100 = *(undefined8 *)(param_1 + 0xd0);
              local_158 = (char *)0x0;
              uStack_150 = 0;
              local_220 = local_b8;
              local_228 = &local_158;
              cVar4 = FUN_148344402(&local_140,uVar6,local_c8,lVar12 + -0x18);
              pcVar8 = local_b8;
              if (cVar4 == '\0') {
                local_b0 = (char **)0x14ae732f4;
                local_a8._0_4_ = 0x13;
                FUN_1446e940c(&local_80,&local_b0);
                local_b0 = (char **)0x14aee33f8;
                local_a8 = (char **)CONCAT44(local_a8._4_4_,0xe);
                FUN_1446e940c(&local_198,&local_b0);
                FUN_140208bae(&local_b0,&local_198,&local_80,L"Failed to merge UV islands");
                local_188[0] = 0;
                local_180 = local_b0;
                if (local_b0 != (char **)0x0) {
                  (**(code **)(*local_b0 + 8))();
                }
                local_178 = local_a8._0_4_;
                local_170 = 0;
                uStack_168 = 0;
                local_160 = 0;
                FUN_1402160b8(&local_70);
                local_170 = local_70;
                FUN_14846ba34(local_208,local_188);
                if (local_b0 != (char **)0x0) {
                  (**(code **)(*local_b0 + 0x10))();
                }
                bVar3 = true;
              }
              else if (local_b8 == (char *)0x0) {
                pcVar8 = (char *)0x0;
LAB_14846bd6d:
                local_198 = (char *)0x0;
                uStack_190 = 0;
                local_228 = &local_198;
                local_220 = pcVar8;
                iVar5 = FUN_148345c42(&local_140,uVar6,local_c8,&local_158);
                if (0 < iVar5) {
                  local_b0 = (char **)0x14ae73370;
                  local_a8._0_4_ = 0x13;
                  FUN_1446e940c(&local_80,&local_b0);
                  local_b0 = (char **)0x14aee33f8;
                  local_a8 = (char **)CONCAT44(local_a8._4_4_,0xe);
                  FUN_1446e940c(&local_90,&local_b0);
                  FUN_140208bae(&local_b0,&local_90,&local_80,
                                L"Failed to compute UVs for some UV islands");
                  local_1c8[0] = 0;
                  local_1c0 = local_b0;
                  if (local_b0 != (char **)0x0) {
                    (**(code **)(*local_b0 + 8))();
                  }
                  local_1b8 = local_a8._0_4_;
                  local_1b0 = 0;
                  uStack_1a8 = 0;
                  local_1a0 = 0;
                  FUN_1402160b8(&local_70);
                  local_1b0 = local_70;
                  FUN_148345df2(local_208,local_1c8);
                  if (local_b0 != (char **)0x0) {
                    (**(code **)(*local_b0 + 0x10))();
                  }
                }
                pcVar8 = local_b8;
                if (local_b8 == (char *)0x0) {
LAB_14846bdf6:
                  if (*(char *)(param_1 + 0xa8) == '\x01') {
                    local_b0 = &local_b8;
                    local_a8 = &local_198;
                    local_a0 = local_d0;
                    local_98 = &local_158;
                    local_70 = 0;
                    local_68 = 0;
                    local_80 = FUN_143b5e7fe;
                    local_78 = &local_b0;
                    local_218 = &local_70;
                    local_220 = (char *)((ulonglong)local_220 & 0xffffffff00000000);
                    FUN_1401f8d10(L"ParallelFor Task",uStack_150 & 0xffffffff,1,&local_80);
                  }
                  pcVar8 = local_b8;
                  if (local_b8 == (char *)0x0) {
LAB_14846bef5:
                    if (*(char *)(param_1 + 0xaa) == '\x01') {
                      local_84 = *(undefined4 *)(param_1 + 0xac);
                      local_a0 = *(undefined1 **)(param_1 + 8);
                      local_90 = local_c8;
                      local_a8 = &local_90;
                      local_98 = (char **)&local_84;
                      local_70 = 0;
                      local_68 = 0;
                      local_80 = FUN_143b5dbc2;
                      local_78 = &local_b0;
                      local_218 = &local_70;
                      local_220 = (char *)((ulonglong)local_220 & 0xffffffff00000000);
                      local_b0 = (char **)(lVar12 + -0x28);
                      FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(lVar12 + -8),1,&local_80);
                    }
                    pcVar8 = local_b8;
                    if (local_b8 == (char *)0x0) {
LAB_14846c006:
                      if ((*(char *)(param_1 + 0xb4) == '\x01') &&
                         (local_228 = (char **)(lVar12 + -0x28),
                         cVar4 = FUN_14833d8d6(local_d0,*(undefined4 *)(param_1 + 0xb8),
                                               *(undefined4 *)(param_1 + 0xbc),lVar12),
                         cVar4 == '\0')) {
                        local_b0 = (char **)0x14ae733cc;
                        local_a8._0_4_ = 0x13;
                        FUN_1446e940c(&local_80,&local_b0);
                        local_b0 = (char **)0x14aee33f8;
                        local_a8 = (char **)CONCAT44(local_a8._4_4_,0xe);
                        FUN_1446e940c(&local_90,&local_b0);
                        FUN_140208bae(&local_b0,&local_90,&local_80,L"Failed to pack UV islands");
                        local_1f8[0] = 0;
                        local_1f0 = local_b0;
                        if (local_b0 != (char **)0x0) {
                          (**(code **)(*local_b0 + 8))();
                        }
                        local_1e8 = local_a8._0_4_;
                        local_1e0 = 0;
                        uStack_1d8 = 0;
                        local_1d0 = 0;
                        FUN_1402160b8(&local_70);
                        local_1e0 = local_70;
                        FUN_14846ba34(local_208,local_1f8);
                        if (local_b0 != (char **)0x0) {
                          (**(code **)(*local_b0 + 0x10))();
                        }
                        bVar3 = true;
                      }
                      else {
                        pcVar8 = local_b8;
                        if (local_b8 == (char *)0x0) {
LAB_14846c07f:
                          bVar3 = false;
                        }
                        else {
                          bVar3 = true;
                          if (*local_b8 == '\0') {
                            pcVar2 = *(code **)(local_b8 + 0x70);
                            plVar9 = (longlong *)(local_b8 + 0x90);
                            if (*(longlong **)(local_b8 + 0x80) != (longlong *)0x0) {
                              plVar9 = *(longlong **)(local_b8 + 0x80);
                            }
                            uVar7 = (**(code **)(*plVar9 + 8))();
                            cVar4 = (*pcVar2)(uVar7);
                            *pcVar8 = cVar4;
                            if (cVar4 == '\0') goto LAB_14846c07f;
                          }
                        }
                      }
                    }
                    else {
                      bVar3 = true;
                      if (*local_b8 == '\0') {
                        local_200 = *(code **)(local_b8 + 0x70);
                        plVar9 = (longlong *)(local_b8 + 0x90);
                        if (*(longlong **)(local_b8 + 0x80) != (longlong *)0x0) {
                          plVar9 = *(longlong **)(local_b8 + 0x80);
                        }
                        uVar7 = (**(code **)(*plVar9 + 8))();
                        cVar4 = (*local_200)(uVar7);
                        *pcVar8 = cVar4;
                        if (cVar4 == '\0') goto LAB_14846c006;
                      }
                    }
                  }
                  else {
                    bVar3 = true;
                    if (*local_b8 == '\0') {
                      pcVar2 = *(code **)(local_b8 + 0x70);
                      plVar9 = (longlong *)(local_b8 + 0x90);
                      if (*(longlong **)(local_b8 + 0x80) != (longlong *)0x0) {
                        plVar9 = *(longlong **)(local_b8 + 0x80);
                      }
                      uVar7 = (**(code **)(*plVar9 + 8))();
                      cVar4 = (*pcVar2)(uVar7);
                      *pcVar8 = cVar4;
                      if (cVar4 == '\0') goto LAB_14846bef5;
                    }
                  }
                }
                else {
                  bVar3 = true;
                  if (*local_b8 == '\0') {
                    pcVar2 = *(code **)(local_b8 + 0x70);
                    plVar9 = (longlong *)(local_b8 + 0x90);
                    if (*(longlong **)(local_b8 + 0x80) != (longlong *)0x0) {
                      plVar9 = *(longlong **)(local_b8 + 0x80);
                    }
                    uVar7 = (**(code **)(*plVar9 + 8))();
                    cVar4 = (*pcVar2)(uVar7);
                    *pcVar8 = cVar4;
                    if (cVar4 == '\0') goto LAB_14846bdf6;
                  }
                }
                if (local_198 != (char *)0x0) {
                  FUN_1400020a8();
                }
              }
              else {
                bVar3 = true;
                if (*local_b8 == '\0') {
                  pcVar2 = *(code **)(local_b8 + 0x70);
                  plVar9 = (longlong *)(local_b8 + 0x90);
                  if (*(longlong **)(local_b8 + 0x80) != (longlong *)0x0) {
                    plVar9 = *(longlong **)(local_b8 + 0x80);
                  }
                  uVar7 = (**(code **)(*plVar9 + 8))();
                  cVar4 = (*pcVar2)(uVar7);
                  *pcVar8 = cVar4;
                  pcVar8 = local_b8;
                  if (cVar4 == '\0') goto LAB_14846bd6d;
                }
              }
              FUN_144716727(local_158,uStack_150 & 0xffffffff);
              if (local_158 != (char *)0x0) {
                FUN_1400020a8();
              }
              uVar10 = (ulonglong)!bVar3;
            } while ((!bVar3) && (lVar12 = lVar12 + 0x30, lVar11 != 0));
          }
        }
        else {
          if (*local_b8 == '\0') {
            pcVar2 = *(code **)(local_b8 + 0x70);
            plVar9 = (longlong *)(local_b8 + 0x90);
            if (*(longlong **)(local_b8 + 0x80) != (longlong *)0x0) {
              plVar9 = *(longlong **)(local_b8 + 0x80);
            }
            uVar7 = (**(code **)(*plVar9 + 8))();
            cVar4 = (*pcVar2)(uVar7);
            *pcVar8 = cVar4;
            if (cVar4 == '\0') goto LAB_14846bbf0;
          }
          uVar10 = 0;
        }
        FUN_148483dd7(local_e8,uStack_e0 & 0xffffffff);
        if (local_e8 != 0) {
          FUN_1400020a8();
        }
        goto LAB_14846bb81;
      }
      if (*local_b8 == '\0') {
        pcVar2 = *(code **)(local_b8 + 0x70);
        plVar9 = (longlong *)(local_b8 + 0x90);
        if (*(longlong **)(local_b8 + 0x80) != (longlong *)0x0) {
          plVar9 = *(longlong **)(local_b8 + 0x80);
        }
        uVar7 = (**(code **)(*plVar9 + 8))();
        cVar4 = (*pcVar2)(uVar7);
        *pcVar8 = cVar4;
        if (cVar4 == '\0') goto LAB_14846bbb9;
      }
    }
  }
  uVar10 = 0;
LAB_14846bb81:
  if ((local_60 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 14846c44e FUN_14846c44e body=885 status=ok
// SIG undefined FUN_14846c44e(void)

undefined8 * FUN_14846c44e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  uint uVar4;
  code *pcVar5;
  undefined4 uVar6;
  void *_Dst;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_a8 [40];
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  _Dst = (void *)FUN_14001cc68(0x178);
  memset(_Dst,0,0x178);
  FUN_148484186(_Dst);
  uVar7 = *(undefined8 *)(param_1 + 0x70);
  lVar9 = *(longlong *)(param_1 + 0x78);
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    UNLOCK();
  }
  plVar8 = *(longlong **)((longlong)_Dst + 0x90);
  *(undefined8 *)((longlong)_Dst + 0x88) = uVar7;
  *(longlong *)((longlong)_Dst + 0x90) = lVar9;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  uVar7 = *(undefined8 *)(param_1 + 0x60);
  lVar9 = *(longlong *)(param_1 + 0x68);
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    UNLOCK();
  }
  plVar8 = *(longlong **)((longlong)_Dst + 0xa0);
  *(undefined8 *)((longlong)_Dst + 0x98) = uVar7;
  *(longlong *)((longlong)_Dst + 0xa0) = lVar9;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  pcVar5 = *(code **)(param_1 + 0x88);
  plVar8 = (longlong *)(param_1 + 0xa8);
  if (*(longlong **)(param_1 + 0x98) != (longlong *)0x0) {
    plVar8 = *(longlong **)(param_1 + 0x98);
  }
  uVar7 = (**(code **)(*plVar8 + 8))();
  uVar6 = (*pcVar5)(uVar7);
  *(undefined4 *)((longlong)_Dst + 0xb0) = uVar6;
  lVar9 = *(longlong *)(param_1 + 8);
  *(undefined4 *)((longlong)_Dst + 0xc4) = *(undefined4 *)(lVar9 + 0xac);
  uVar4 = *(uint *)(lVar9 + 0xb0);
  if ((ulonglong)uVar4 < 4) {
    *(undefined4 *)((longlong)_Dst + 0xc0) = *(undefined4 *)(&DAT_14aee59a0 + (ulonglong)uVar4 * 4);
    *(char *)((longlong)_Dst + 0xd8) = (char)(0x1000000 >> ((char)uVar4 * '\b' & 0x1fU));
  }
  *(bool *)((longlong)_Dst + 0xa8) = *(int *)(lVar9 + 0xb4) == 1;
  *(undefined4 *)((longlong)_Dst + 0xcc) = *(undefined4 *)(lVar9 + 0xbc);
  *(double *)((longlong)_Dst + 0xd0) = (double)*(float *)(lVar9 + 0xc0);
  *(undefined1 *)((longlong)_Dst + 200) = *(undefined1 *)(lVar9 + 0xb8);
  *(double *)((longlong)_Dst + 0xe0) = (double)*(float *)(lVar9 + 0xc4);
  *(double *)((longlong)_Dst + 0xf0) = (double)*(float *)(lVar9 + 200);
  *(undefined1 *)((longlong)_Dst + 0xb4) = 0;
  *(undefined1 *)((longlong)_Dst + 0xaa) = 0;
  *(undefined1 *)((longlong)_Dst + 0xf8) = *(undefined1 *)(lVar9 + 0xd8);
  switch(*(undefined4 *)(lVar9 + 0xcc)) {
  case 1:
    *(undefined1 *)((longlong)_Dst + 0xb4) = 1;
    *(undefined4 *)((longlong)_Dst + 0xb8) = *(undefined4 *)(lVar9 + 0xd0);
    break;
  case 2:
    *(undefined2 *)((longlong)_Dst + 0xa9) = 1;
    *(undefined1 *)((longlong)_Dst + 0xb4) = 0;
    break;
  case 3:
    *(undefined1 *)((longlong)_Dst + 0xaa) = 1;
    fVar3 = *(float *)(lVar9 + 0xd4);
    FUN_145c688c4(*(undefined8 *)(param_1 + 0x70),&local_80,0);
    dVar13 = (double)(-(ulonglong)(0.0 <= local_58 - local_70) & (ulonglong)(local_58 - local_70));
    dVar14 = (double)(-(ulonglong)(0.0 <= local_60 - local_78) & (ulonglong)(local_60 - local_78));
    uVar12 = -(ulonglong)(dVar13 <= dVar14);
    dVar13 = (double)(~uVar12 & (ulonglong)dVar13 | uVar12 & (ulonglong)dVar14);
    dVar14 = (double)(-(ulonglong)(0.0 <= local_68 - local_80) & (ulonglong)(local_68 - local_80));
    uVar12 = -(ulonglong)(dVar13 <= dVar14);
    *(float *)((longlong)_Dst + 0xac) =
         fVar3 / (float)(double)(uVar12 & (ulonglong)dVar14 | ~uVar12 & (ulonglong)dVar13);
    break;
  case 4:
    *(undefined1 *)((longlong)_Dst + 0xaa) = 1;
    *(undefined4 *)((longlong)_Dst + 0xac) = *(undefined4 *)(lVar9 + 0xd4);
  }
  puVar10 = (undefined8 *)(param_1 + 200);
  puVar11 = (undefined8 *)((longlong)_Dst + 0x10);
  for (lVar9 = 10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  lVar9 = (longlong)_Dst + 0x100;
  if (param_1 + 0x10 != lVar9) {
    if (*(int *)(param_1 + 0x1c) == -1) {
      FUN_145a22d80(lVar9);
    }
    else {
      FUN_146bee56a(lVar9);
    }
  }
  *param_2 = _Dst;
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14846c7c8 FUN_14846c7c8 body=41 status=ok
// SIG undefined FUN_14846c7c8(void)

void FUN_14846c7c8(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2b8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14846c800 FUN_14846c800 body=1565 status=ok
// SIG undefined FUN_14846c800(void)

void FUN_14846c800(void *param_1,undefined8 param_2,longlong param_3,longlong *param_4,char param_5)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_1d8 [44];
  undefined4 local_1ac;
  longlong *local_1a8;
  undefined8 local_1a0;
  void *local_198;
  void *local_190;
  undefined8 *local_188;
  undefined8 uStack_180;
  longlong *local_178;
  undefined8 uStack_170;
  undefined8 *local_168;
  undefined8 uStack_160;
  undefined1 *local_158 [2];
  undefined8 local_148;
  undefined **local_138;
  undefined8 local_130;
  undefined1 *local_118 [2];
  undefined8 local_108;
  undefined **local_f8;
  undefined8 local_f0;
  void *local_d8;
  ulonglong local_d0;
  void *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0 [80];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_1a0 = param_2;
  FUN_14848437d(*param_4,(int)param_4[1]);
  *(undefined4 *)(param_4 + 1) = 0;
  if (*(int *)((longlong)param_4 + 0xc) != 0) {
    FUN_1484843b6(param_4);
  }
  uVar10 = local_1a0;
  local_168 = (undefined8 *)0x0;
  uStack_160 = 0;
  local_178 = (longlong *)0x0;
  uStack_170 = 0;
  iVar1 = *(int *)(param_3 + 0xc);
  local_1a8 = param_4;
  if (param_5 == '\0') {
    uStack_160 = 1;
    FUN_148306f12(&local_168,0);
    uVar10 = local_1a0;
    *local_168 = 0;
    if (iVar1 == -1) {
      puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      uVar2 = uStack_170;
      plVar11 = local_1a8;
      *puVar5 = 0;
      puVar5[1] = 0;
      lVar14 = (longlong)(int)uStack_170;
      uVar4 = (int)uStack_170 + 1;
      uStack_170 = CONCAT44(uStack_170._4_4_,uVar4);
      if (uStack_170._4_4_ < uVar4) {
        FUN_148483e86(&local_178,uVar2 & 0xffffffff);
      }
      local_178[lVar14] = (longlong)puVar5;
      iVar1 = *(int *)((longlong)param_1 + 0x170);
      if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar1);
      }
      if (*(int *)(*local_178 + 0xc) < iVar1) {
        FUN_14481578e();
      }
      uVar12 = *(int *)((longlong)param_1 + 0x140) * 0x200 + *(int *)((longlong)param_1 + 0x144);
      uVar4 = 0;
      if ((uVar12 != 0) &&
         (0xfffd < (ushort)(*(short *)**(undefined8 **)((longlong)param_1 + 0x148) - 1U))) {
        uVar3 = 1;
        uVar13 = 1;
        if (1 < (int)uVar12) {
          uVar13 = uVar12;
        }
        do {
          uVar8 = uVar3;
          uVar4 = uVar13;
          if (uVar13 == uVar8) break;
          uVar3 = uVar8 + 1;
          uVar4 = uVar8;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)((longlong)param_1 + 0x148))
                                              [uVar8 >> 9] + (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
      }
LAB_14846cad8:
      if (uVar4 != uVar12) {
        plVar7 = (longlong *)*local_178;
        iVar1 = (int)plVar7[1];
        *(uint *)(plVar7 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)plVar7 + 0xc) < iVar1 + 1U) {
          FUN_1446f48e2(plVar7,iVar1);
        }
        *(uint *)(*plVar7 + (longlong)iVar1 * 4) = uVar4;
        uVar3 = uVar4 + 1;
        if ((int)(uVar4 + 1) < (int)uVar12) {
          uVar3 = uVar12;
        }
        uVar13 = uVar4;
        do {
          uVar4 = uVar3;
          if (uVar3 - 1 == uVar13) break;
          uVar4 = uVar13 + 1;
          uVar13 = uVar4;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)((longlong)param_1 + 0x148) +
                                               (ulonglong)(uVar4 >> 9) * 8) +
                                             (ulonglong)(uVar4 & 0x1ff) * 2) - 1U));
        goto LAB_14846cad8;
      }
      goto LAB_14846cc5d;
    }
    FUN_140619b9c(param_3,&local_c8);
    plVar7 = (longlong *)FUN_14001cc68(0x10,0x10);
    uVar2 = uStack_170;
    plVar11 = local_1a8;
    *plVar7 = (longlong)local_c8;
    local_c8 = (void *)0x0;
    *(int *)(plVar7 + 1) = (int)local_c0;
    *(int *)((longlong)plVar7 + 0xc) = local_c0._4_4_;
    local_c0 = 0;
    lVar14 = (longlong)(int)uStack_170;
    uVar4 = (int)uStack_170 + 1;
    uStack_170 = CONCAT44(uStack_170._4_4_,uVar4);
    if (uStack_170._4_4_ < uVar4) {
      FUN_148483e86(&local_178,uVar2 & 0xffffffff);
    }
    local_178[lVar14] = (longlong)plVar7;
    if (local_c8 == (void *)0x0) goto LAB_14846cc5d;
  }
  else {
    if (iVar1 == -1) {
      local_198 = (void *)0x0;
LAB_14846c891:
      local_d8 = (void *)0x0;
      local_d0 = 0xffffffff00000000;
      local_1ac = 1;
    }
    else {
      FUN_140619b9c(param_3,&local_c8);
      local_198 = local_c8;
      if (local_c0._4_4_ == -1) goto LAB_14846c891;
      local_d8 = (void *)0x0;
      local_d0 = CONCAT44(local_d0._4_4_,(int)local_c0);
      if ((int)local_c0 == 0) {
        local_d0 = local_c0 & 0xffffffff;
        local_1ac = 0;
      }
      else {
        lVar14 = (longlong)(int)local_c0;
        local_1ac = 0;
        FUN_144a06ca8(&local_d8,local_c0 & 0xffffffff,0);
        memcpy(local_d8,local_198,lVar14 << 2);
      }
    }
    local_190 = param_1;
    FUN_148342a4c(&local_c8,uVar10,&local_d8);
    local_188 = (undefined8 *)0x0;
    uStack_180 = 0;
    FUN_148342d16(local_b0);
    if (local_168 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    puVar5 = local_188;
    local_168 = local_188;
    lVar14 = (longlong)(int)uStack_180;
    uStack_160 = uStack_180;
    if (lVar14 != 0) {
      lVar9 = 0;
      do {
        FUN_148342ff8(&local_c8,&local_188,*(undefined8 *)((longlong)puVar5 + lVar9));
        puVar6 = (undefined8 *)FUN_14001cc68(0x10,0x10);
        uVar2 = uStack_170;
        *puVar6 = local_188;
        local_188 = (undefined8 *)0x0;
        *(int *)(puVar6 + 1) = (int)uStack_180;
        *(undefined4 *)((longlong)puVar6 + 0xc) = uStack_180._4_4_;
        uStack_180 = 0;
        lVar15 = (longlong)(int)uStack_170;
        uVar4 = (int)uStack_170 + 1;
        uStack_170 = CONCAT44(uStack_170._4_4_,uVar4);
        if (uStack_170._4_4_ < uVar4) {
          FUN_148483e86(&local_178,uVar2 & 0xffffffff);
        }
        local_178[lVar15] = (longlong)puVar6;
        if (local_188 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        lVar9 = lVar9 + 8;
      } while (lVar14 * 8 != lVar9);
    }
    FUN_14846aeec(&local_c8);
    uVar10 = local_1a0;
    plVar11 = local_1a8;
    param_1 = local_190;
    if ((char)local_1ac != '\0' || local_198 == (void *)0x0) goto LAB_14846cc5d;
  }
  FUN_1400020a8();
LAB_14846cc5d:
  if (0 < (int)uStack_160) {
    lVar14 = 0;
    do {
      local_c0 = 0;
      uStack_b8 = 0;
      local_c8 = param_1;
      if (local_178[lVar14] == 0) {
        local_148 = 0;
        local_138 = &PTR_LAB_14aee5800;
        local_158[0] = &LAB_143b5e8d6;
        local_130 = uVar10;
        FUN_142984024(&local_c8,local_158);
      }
      else {
        local_108 = 0;
        local_f8 = &PTR_LAB_14aee57e0;
        local_118[0] = &LAB_143b5e880;
        local_f0 = uVar10;
        FUN_142984384(&local_c8,local_178[lVar14],local_118);
      }
      if ((int)uStack_b8 != 0) {
        puVar5 = local_168 + lVar14;
        iVar1 = (int)plVar11[1];
        *(uint *)(plVar11 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)plVar11 + 0xc) < iVar1 + 1U) {
          FUN_148484492(plVar11,iVar1);
        }
        FUN_1484843e6((longlong)iVar1 * 0x30 + *plVar11,&local_c8,puVar5);
      }
      FUN_146be9400(&local_c0);
      lVar14 = lVar14 + 1;
    } while (lVar14 < (int)uStack_160);
  }
  FUN_148483e40(local_178,uStack_170 & 0xffffffff);
  if (local_178 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_168 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14846ce24 FUN_14846ce24 body=619 status=ok
// SIG undefined FUN_14846ce24(void)

void FUN_14846ce24(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  float fVar16;
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
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar8 = param_3[1];
  if ((longlong)(int)lVar8 == 0) {
    dVar7 = 0.0;
  }
  else {
    lVar4 = *param_3;
    lVar14 = 0;
    dVar7 = 0.0;
    iVar15 = 0;
    do {
      lVar12 = (longlong)*(int *)(param_1 + 0x9c);
      if (lVar12 < 0) {
        lVar9 = 0;
      }
      else {
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x208);
        lVar9 = 0;
        if (*(int *)(param_1 + 0x9c) < *(int *)(lVar5 + 0x28)) {
          lVar9 = *(longlong *)(*(longlong *)(lVar5 + 0x20) + lVar12 * 8);
        }
      }
      uVar11 = *(int *)(lVar4 + lVar14) * 3;
      if (-1 < *(int *)(*(longlong *)(*(longlong *)(lVar9 + 0x78) + (ulonglong)(uVar11 >> 9) * 8) +
                       (ulonglong)(uVar11 & 0x1ff) * 4)) {
        dVar6 = (double)FUN_14826ab62(*(longlong *)(param_1 + 8),lVar12,*(int *)(lVar4 + lVar14),
                                      param_5);
        dVar7 = dVar7 + dVar6;
        iVar15 = iVar15 + 1;
      }
      lVar14 = lVar14 + 4;
    } while ((longlong)(int)lVar8 * 4 != lVar14);
    if (iVar15 != 0) {
      dVar7 = dVar7 / (double)iVar15;
    }
  }
  iVar15 = *(int *)(param_1 + 0xa8);
  iVar3 = *(int *)(param_1 + 0xa4);
  plVar1 = param_4 + 2;
  local_a0 = 0x100000000;
  local_90 = 0xffffffff;
  iStack_8c = 0;
  uStack_88 = 0;
  uStack_98 = plVar1;
  if ((int)param_4[5] == 0) {
    iVar13 = 0;
  }
  else {
    FUN_1449c0562(&local_a0);
    iVar13 = (int)param_4[5];
  }
  uStack_a8 = CONCAT44(uStack_84,uStack_88);
  local_b0 = local_90;
  iStack_ac = iStack_8c;
  local_c0 = (undefined4)local_a0;
  uStack_bc = local_a0._4_4_;
  uStack_b8 = (undefined4)uStack_98;
  uStack_b4 = uStack_98._4_4_;
  local_c8 = param_4;
  if ((iStack_8c != iVar13) || (uStack_98 != plVar1)) {
    fVar16 = (float)(((double)iVar15 / (double)iVar3) / dVar7);
    do {
      uVar11 = *(uint *)(*local_c8 + (longlong)iStack_ac * 0xc);
      uVar10 = (ulonglong)(uVar11 >> 5 & 0x3fffff8);
      lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x48) + uVar10);
      uVar11 = (uVar11 & 0xff) << 3;
      fVar2 = *(float *)(lVar8 + (ulonglong)(uVar11 | 4));
      *(float *)(lVar8 + (ulonglong)uVar11) = *(float *)(lVar8 + (ulonglong)uVar11) * fVar16;
      *(float *)(*(longlong *)(*(longlong *)(param_2 + 0x48) + uVar10) + (ulonglong)(uVar11 | 4)) =
           1.0 - (1.0 - fVar2) * fVar16;
      local_b0 = local_b0 & ~uStack_bc;
      FUN_1449c0562(&local_c0);
    } while (local_c8 != param_4 ||
             ((longlong *)CONCAT44(uStack_b4,uStack_b8) != plVar1 || iStack_ac != iVar13));
  }
  if ((local_80 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14846d090 FUN_14846d090 body=119 status=ok
// SIG undefined FUN_14846d090(void)

undefined8 * FUN_14846d090(undefined8 *param_1,undefined8 *param_2)

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
    FUN_144a06ca8(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
  }
  param_1[2] = param_2[2];
  FUN_148473f18(param_1 + 3,param_2 + 3);
  param_1[5] = param_2[5];
  return param_1;
}



// FUNCTION 14846d108 FUN_14846d108 body=468 status=ok
// SIG undefined FUN_14846d108(void)

undefined8 * FUN_14846d108(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  void *_Dst;
  undefined8 uVar18;
  longlong *plVar19;
  longlong lVar20;
  
  _Dst = (void *)FUN_14001cc68(0x158);
  memset(_Dst,0,0x158);
  FUN_148484526(_Dst);
  uVar18 = *(undefined8 *)(param_1 + 0x60);
  lVar20 = *(longlong *)(param_1 + 0x68);
  if (lVar20 != 0) {
    LOCK();
    *(int *)(lVar20 + 8) = *(int *)(lVar20 + 8) + 1;
    UNLOCK();
  }
  plVar19 = *(longlong **)((longlong)_Dst + 0x90);
  *(undefined8 *)((longlong)_Dst + 0x88) = uVar18;
  *(longlong *)((longlong)_Dst + 0x90) = lVar20;
  if (plVar19 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar19 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar19)(plVar19);
      LOCK();
      piVar2 = (int *)((longlong)plVar19 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
    }
  }
  lVar20 = *(longlong *)(param_1 + 8);
  if ((ulonglong)*(uint *)(lVar20 + 0xa8) < 3) {
    *(undefined4 *)((longlong)_Dst + 0x98) =
         *(undefined4 *)(&DAT_14aee59b0 + (ulonglong)*(uint *)(lVar20 + 0xa8) * 4);
  }
  *(int *)((longlong)_Dst + 0xa0) = (int)*(float *)(lVar20 + 0xb4);
  *(int *)((longlong)_Dst + 0xa4) = (int)*(float *)(lVar20 + 0xac);
  *(int *)((longlong)_Dst + 0xa8) = (int)*(float *)(lVar20 + 0xb0);
  pcVar4 = *(code **)(param_1 + 0x78);
  plVar19 = (longlong *)(param_1 + 0x98);
  if (*(longlong **)(param_1 + 0x88) != (longlong *)0x0) {
    plVar19 = *(longlong **)(param_1 + 0x88);
  }
  uVar18 = (**(code **)(*plVar19 + 8))();
  uVar17 = (*pcVar4)(uVar18);
  *(undefined4 *)((longlong)_Dst + 0x9c) = uVar17;
  lVar20 = *(longlong *)(param_1 + 8);
  *(int *)((longlong)_Dst + 0xa0) = (int)*(float *)(lVar20 + 0xb4);
  uVar17 = *(undefined4 *)(param_1 + 0xbc);
  uVar5 = *(undefined4 *)(param_1 + 0xc0);
  uVar6 = *(undefined4 *)(param_1 + 0xc4);
  uVar7 = *(undefined4 *)(param_1 + 200);
  uVar8 = *(undefined4 *)(param_1 + 0xcc);
  uVar9 = *(undefined4 *)(param_1 + 0xd0);
  uVar10 = *(undefined4 *)(param_1 + 0xd4);
  uVar11 = *(undefined4 *)(param_1 + 0xd8);
  uVar12 = *(undefined4 *)(param_1 + 0xdc);
  uVar13 = *(undefined4 *)(param_1 + 0xe0);
  uVar14 = *(undefined4 *)(param_1 + 0xe4);
  uVar18 = *(undefined8 *)(param_1 + 0xe8);
  uVar15 = *(undefined8 *)(param_1 + 0xf8);
  uVar16 = *(undefined8 *)(param_1 + 0x100);
  uVar3 = *(undefined8 *)(param_1 + 0x108);
  *(undefined4 *)((longlong)_Dst + 0x10) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)((longlong)_Dst + 0x14) = uVar17;
  *(undefined4 *)((longlong)_Dst + 0x18) = uVar5;
  *(undefined4 *)((longlong)_Dst + 0x1c) = uVar6;
  *(undefined4 *)((longlong)_Dst + 0x20) = uVar7;
  *(undefined4 *)((longlong)_Dst + 0x24) = uVar8;
  *(undefined4 *)((longlong)_Dst + 0x28) = uVar9;
  *(undefined4 *)((longlong)_Dst + 0x2c) = uVar10;
  *(undefined4 *)((longlong)_Dst + 0x30) = uVar11;
  *(undefined4 *)((longlong)_Dst + 0x34) = uVar12;
  *(undefined4 *)((longlong)_Dst + 0x38) = uVar13;
  *(undefined4 *)((longlong)_Dst + 0x3c) = uVar14;
  *(undefined8 *)((longlong)_Dst + 0x40) = uVar18;
  *(undefined8 *)((longlong)_Dst + 0x48) = uVar15;
  *(undefined8 *)((longlong)_Dst + 0x50) = uVar16;
  *(undefined8 *)((longlong)_Dst + 0x58) = uVar3;
  *(undefined1 *)((longlong)_Dst + 0xac) = *(undefined1 *)(lVar20 + 0xb8);
  if (param_1 + 0x10 != (longlong)_Dst + 0xb0) {
    if (*(int *)(param_1 + 0x1c) == -1) {
      FUN_145a22d80();
    }
    else {
      FUN_146bee56a();
    }
  }
  lVar20 = (longlong)_Dst + 0x100;
  if (param_1 + 0x118 != lVar20) {
    if (*(int *)(param_1 + 0x124) == -1) {
      FUN_145c21604(lVar20);
    }
    else {
      FUN_14848469e(lVar20);
    }
  }
  *param_2 = _Dst;
  return param_2;
}



// FUNCTION 14846d2e0 FUN_14846d2e0 body=82 status=ok
// SIG undefined FUN_14846d2e0(void)

void FUN_14846d2e0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_1 + 0xac);
  *(undefined1 *)(param_2 + 0x1a) = *(undefined1 *)(param_1 + 0xa6);
  *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)(param_1 + 0xa4);
  *(undefined1 *)(param_2 + 0x19) = *(undefined1 *)(param_1 + 0xa5);
  iVar1 = *(int *)(param_1 + 0x98);
  if (iVar1 == 3) {
    *(undefined1 *)(param_2 + 0x1b) = 1;
  }
  else {
    if (iVar1 == 2) {
      FUN_143b0a1f0(param_2);
      return;
    }
    if (iVar1 != 1) {
      return;
    }
  }
  FUN_143b09a9c(param_2);
  return;
}



// FUNCTION 14846d332 FUN_14846d332 body=514 status=ok
// SIG undefined FUN_14846d332(void)

undefined8 * FUN_14846d332(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  void *_Dst;
  ulonglong uVar19;
  undefined8 uVar20;
  longlong *plVar21;
  longlong lVar22;
  
  _Dst = (void *)FUN_14001cc68(0x160);
  memset(_Dst,0,0x160);
  FUN_148484708(_Dst);
  uVar20 = *(undefined8 *)(param_1 + 0x60);
  lVar22 = *(longlong *)(param_1 + 0x68);
  if (lVar22 != 0) {
    LOCK();
    *(int *)(lVar22 + 8) = *(int *)(lVar22 + 8) + 1;
    UNLOCK();
  }
  plVar21 = *(longlong **)((longlong)_Dst + 0x90);
  *(undefined8 *)((longlong)_Dst + 0x88) = uVar20;
  *(longlong *)((longlong)_Dst + 0x90) = lVar22;
  if (plVar21 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar21 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar21)(plVar21);
      LOCK();
      piVar2 = (int *)((longlong)plVar21 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
  }
  uVar19 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 8) + 0xa8);
  if (uVar19 < 4) {
    *(undefined4 *)((longlong)_Dst + 0x98) = *(undefined4 *)(&DAT_14aee59bc + uVar19 * 4);
  }
  pcVar5 = *(code **)(param_1 + 0x78);
  plVar21 = (longlong *)(param_1 + 0x98);
  if (*(longlong **)(param_1 + 0x88) != (longlong *)0x0) {
    plVar21 = *(longlong **)(param_1 + 0x88);
  }
  uVar20 = (**(code **)(*plVar21 + 8))();
  uVar18 = (*pcVar5)(uVar20);
  *(undefined4 *)((longlong)_Dst + 0x9c) = uVar18;
  lVar22 = *(longlong *)(param_1 + 8);
  *(undefined4 *)((longlong)_Dst + 0xa0) = *(undefined4 *)(lVar22 + 0xac);
  *(undefined1 *)((longlong)_Dst + 0xa4) = *(undefined1 *)(lVar22 + 200);
  *(undefined1 *)((longlong)_Dst + 0xa5) = *(undefined1 *)(lVar22 + 0xc9);
  *(undefined1 *)((longlong)_Dst + 0xa6) = *(undefined1 *)(lVar22 + 0xca);
  *(undefined4 *)((longlong)_Dst + 0xa8) = *(undefined4 *)(lVar22 + 0xb0);
  dVar3 = *(double *)(lVar22 + 0xc0);
  *(float *)((longlong)_Dst + 0x158) = (float)*(double *)(lVar22 + 0xb8);
  *(float *)((longlong)_Dst + 0x15c) = (float)dVar3;
  uVar18 = *(undefined4 *)(param_1 + 0xbc);
  uVar6 = *(undefined4 *)(param_1 + 0xc0);
  uVar7 = *(undefined4 *)(param_1 + 0xc4);
  uVar8 = *(undefined4 *)(param_1 + 200);
  uVar9 = *(undefined4 *)(param_1 + 0xcc);
  uVar10 = *(undefined4 *)(param_1 + 0xd0);
  uVar11 = *(undefined4 *)(param_1 + 0xd4);
  uVar12 = *(undefined4 *)(param_1 + 0xd8);
  uVar13 = *(undefined4 *)(param_1 + 0xdc);
  uVar14 = *(undefined4 *)(param_1 + 0xe0);
  uVar15 = *(undefined4 *)(param_1 + 0xe4);
  uVar20 = *(undefined8 *)(param_1 + 0xe8);
  uVar16 = *(undefined8 *)(param_1 + 0xf8);
  uVar17 = *(undefined8 *)(param_1 + 0x100);
  uVar4 = *(undefined8 *)(param_1 + 0x108);
  *(undefined4 *)((longlong)_Dst + 0x10) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)((longlong)_Dst + 0x14) = uVar18;
  *(undefined4 *)((longlong)_Dst + 0x18) = uVar6;
  *(undefined4 *)((longlong)_Dst + 0x1c) = uVar7;
  *(undefined4 *)((longlong)_Dst + 0x20) = uVar8;
  *(undefined4 *)((longlong)_Dst + 0x24) = uVar9;
  *(undefined4 *)((longlong)_Dst + 0x28) = uVar10;
  *(undefined4 *)((longlong)_Dst + 0x2c) = uVar11;
  *(undefined4 *)((longlong)_Dst + 0x30) = uVar12;
  *(undefined4 *)((longlong)_Dst + 0x34) = uVar13;
  *(undefined4 *)((longlong)_Dst + 0x38) = uVar14;
  *(undefined4 *)((longlong)_Dst + 0x3c) = uVar15;
  *(undefined8 *)((longlong)_Dst + 0x40) = uVar20;
  *(undefined8 *)((longlong)_Dst + 0x48) = uVar16;
  *(undefined8 *)((longlong)_Dst + 0x50) = uVar17;
  *(undefined8 *)((longlong)_Dst + 0x58) = uVar4;
  *(undefined1 *)((longlong)_Dst + 0xb0) = *(undefined1 *)(lVar22 + 0xcb);
  if (param_1 + 0x10 != (longlong)_Dst + 0xb8) {
    if (*(int *)(param_1 + 0x1c) == -1) {
      FUN_145a22d80();
    }
    else {
      FUN_146bee56a();
    }
  }
  lVar22 = (longlong)_Dst + 0x108;
  if (param_1 + 0x118 != lVar22) {
    if (*(int *)(param_1 + 0x124) == -1) {
      FUN_145c21604(lVar22);
    }
    else {
      FUN_14848469e(lVar22);
    }
  }
  *param_2 = _Dst;
  return param_2;
}



// FUNCTION 14846d534 FUN_14846d534 body=212 status=ok
// SIG undefined FUN_14846d534(void)

void FUN_14846d534(longlong *param_1,char *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') {
      return;
    }
    pcVar1 = *(code **)(param_2 + 0x70);
    plVar5 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_2 + 0x80);
    }
    uVar3 = (**(code **)(*plVar5 + 8))();
    cVar2 = (*pcVar1)(uVar3);
    *param_2 = cVar2;
    if (cVar2 != '\0') {
      return;
    }
  }
  FUN_146c005f0(param_1[1],param_1[0x11],1,1,1,1);
  if (*(longlong *)(param_1[1] + 0x208) == 0) {
    FUN_14582ed12();
  }
  cVar2 = (char)param_1[0x20];
  if (cVar2 == '\x02') {
    (**(code **)(*param_1 + 0x28))(param_1,param_2);
    cVar2 = (char)param_1[0x20];
  }
  if (cVar2 == '\x03') {
    lVar4 = 0x30;
  }
  else if (cVar2 == '\x01') {
    lVar4 = 0x38;
  }
  else {
    if (cVar2 != '\0') {
      return;
    }
    lVar4 = 0x20;
  }
                    /* WARNING: Could not recover jumptable at 0x00014846d5fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + lVar4))(param_1,param_2);
  return;
}



// FUNCTION 14846d608 FUN_14846d608 body=927 status=ok
// SIG undefined FUN_14846d608(void)

void FUN_14846d608(undefined1 *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_148 [32];
  ulonglong **local_128;
  undefined4 local_120;
  longlong *local_118;
  code *local_108;
  undefined1 **local_100;
  code *local_f8;
  undefined1 **local_f0;
  longlong local_e8 [3];
  undefined1 local_d0 [24];
  undefined1 **local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined1 *local_98;
  ulonglong **local_90;
  undefined1 *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_148328bf2(local_d0,*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xa8),1);
  local_e8[0] = 0;
  local_e8[1] = 0;
  lVar1 = *(longlong *)(param_1 + 0x98);
  if ((lVar1 == 0) || (*(int *)(lVar1 + 8) == 0)) {
    local_88 = (undefined1 *)0x0;
    uStack_80 = 0;
    lVar1 = *(longlong *)(param_1 + 8);
    uVar7 = *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144);
    uVar9 = 0;
    if ((uVar7 != 0) &&
       (uVar9 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x148) - 1U))) {
      uVar3 = 1;
      uVar4 = 1;
      if (1 < (int)uVar7) {
        uVar3 = uVar7;
      }
      do {
        uVar9 = uVar3;
        if (uVar3 == uVar4) break;
        uVar5 = uVar4 >> 9;
        uVar8 = uVar4 & 0x1ff;
        uVar9 = uVar4;
        uVar4 = uVar4 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x148))[uVar5] +
                                           (ulonglong)uVar8 * 2) - 1U));
    }
    if (uVar9 != uVar7) {
      do {
        uVar2 = uStack_80;
        lVar6 = (longlong)(int)uStack_80;
        uVar3 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar3);
        if (uStack_80._4_4_ < uVar3) {
          FUN_1446f48e2(&local_88,uVar2 & 0xffffffff);
        }
        *(uint *)(local_88 + lVar6 * 4) = uVar9;
        uVar3 = uVar9 + 1;
        if ((int)(uVar9 + 1) < (int)uVar7) {
          uVar3 = uVar7;
        }
        do {
          uVar4 = uVar3;
          if (uVar3 - 1 == uVar9) break;
          uVar9 = uVar9 + 1;
          uVar4 = uVar9;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar1 + 0x148) +
                                               (ulonglong)(uVar9 >> 9) * 8) +
                                             (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
        uVar9 = uVar4;
      } while (uVar9 != uVar7);
    }
    local_120 = *(undefined4 *)(param_1 + 0x158);
    local_a8 = (undefined8 *)(*(double *)(param_1 + 0x150) + *(double *)(param_1 + 0x150));
    local_b0 = (undefined8 *)(*(double *)(param_1 + 0x148) + *(double *)(param_1 + 0x148));
    local_b8 = (undefined1 **)(*(double *)(param_1 + 0x140) + *(double *)(param_1 + 0x140));
    local_128 = (ulonglong **)&local_b8;
    local_f0 = &local_98;
    local_f8 = FUN_143b5e92c;
    local_118 = local_e8;
    local_98 = param_1;
    FUN_14833ab42(local_d0,&local_88,&local_f8,param_1 + 0x108);
    if (local_88 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    local_120 = *(undefined4 *)(param_1 + 0x158);
    local_a8 = (undefined8 *)(*(double *)(param_1 + 0x150) + *(double *)(param_1 + 0x150));
    local_b0 = (undefined8 *)(*(double *)(param_1 + 0x148) + *(double *)(param_1 + 0x148));
    local_b8 = (undefined1 **)(*(double *)(param_1 + 0x140) + *(double *)(param_1 + 0x140));
    local_128 = (ulonglong **)&local_b8;
    local_100 = &local_88;
    local_108 = FUN_143b5e98a;
    local_118 = local_e8;
    local_88 = param_1;
    FUN_14833ab42(local_d0,lVar1,&local_108,param_1 + 0x108);
  }
  local_78 = *(undefined8 *)(param_1 + 0x18c);
  local_70 = *(undefined8 *)(param_1 + 0x184);
  fVar11 = *(float *)(param_1 + 0x180);
  local_68 = *(undefined8 *)(param_1 + 0x178);
  fVar10 = cosf(fVar11 * 0.017453292);
  fVar11 = sinf(fVar11 * 0.017453292);
  local_b8 = &local_88;
  local_88 = (undefined1 *)(CONCAT44(fVar11,fVar10) ^ 0x8000000000000000);
  uStack_80 = CONCAT44(fVar10,fVar11);
  local_90 = (ulonglong **)&local_b8;
  local_98 = &LAB_143b5a6da;
  local_b0 = &local_70;
  local_a8 = &local_68;
  local_a0 = &local_78;
  FUN_1483261e8(local_d0,local_e8);
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14846d9a8 FUN_14846d9a8 body=906 status=ok
// SIG undefined FUN_14846d9a8(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14846d9a8(ulonglong ***param_1)

{
  float fVar1;
  ulonglong **ppuVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  undefined1 auStack_188 [32];
  double *local_168;
  longlong *local_160;
  code *local_158;
  ulonglong ****local_150;
  code *local_148;
  undefined8 ****local_140;
  longlong local_138 [3];
  undefined1 local_120 [24];
  double local_108;
  double local_100;
  ulonglong **local_f8;
  ulonglong **ppuStack_f0;
  ulonglong **local_e8;
  ulonglong **ppuStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong **local_c8;
  undefined8 ****local_b8;
  undefined8 uStack_b0;
  undefined8 ***local_a8;
  undefined8 *local_a0;
  undefined1 *local_98;
  ulonglong ****local_90;
  ulonglong ***local_88;
  float local_80;
  float local_7c;
  undefined8 local_78;
  undefined8 local_70;
  ulonglong **local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_c8 = param_1[0x27];
  local_f8 = param_1[0x21];
  ppuStack_f0 = param_1[0x22];
  local_e8 = param_1[0x23];
  ppuStack_e0 = param_1[0x24];
  local_d8 = *(undefined4 *)(param_1 + 0x25);
  uStack_d4 = *(undefined4 *)((longlong)param_1 + 300);
  uStack_d0 = *(undefined4 *)(param_1 + 0x26);
  uStack_cc = *(undefined4 *)((longlong)param_1 + 0x134);
  local_100 = (double)param_1[0x29] + (double)param_1[0x29];
  local_108 = (double)param_1[0x28] + (double)param_1[0x28];
  FUN_148328bf2(local_120,param_1[1],*(undefined4 *)(param_1 + 0x15),1);
  local_138[0] = 0;
  local_138[1] = 0;
  ppuVar2 = param_1[0x13];
  if ((ppuVar2 == (ulonglong **)0x0) || (*(int *)(ppuVar2 + 1) == 0)) {
    local_b8 = (undefined8 ****)0x0;
    uStack_b0 = (undefined8 *)0x0;
    ppuVar2 = param_1[1];
    uVar8 = *(int *)(ppuVar2 + 0x28) * 0x200 + *(int *)((longlong)ppuVar2 + 0x144);
    uVar10 = 0;
    if ((uVar8 != 0) && (uVar10 = 0, 0xfffd < (ushort)(*(short *)*ppuVar2[0x29] - 1U))) {
      uVar4 = 1;
      uVar5 = 1;
      if (1 < (int)uVar8) {
        uVar4 = uVar8;
      }
      do {
        uVar10 = uVar4;
        if (uVar4 == uVar5) break;
        uVar6 = uVar5 >> 9;
        uVar9 = uVar5 & 0x1ff;
        uVar10 = uVar5;
        uVar5 = uVar5 + 1;
      } while (0xfffd < (ushort)(*(short *)(ppuVar2[0x29][uVar6] + (ulonglong)uVar9 * 2) - 1U));
    }
    if (uVar10 != uVar8) {
      do {
        uVar3 = (ulonglong)uStack_b0;
        lVar7 = (longlong)(int)uStack_b0;
        uVar4 = (int)uStack_b0 + 1;
        uStack_b0 = (undefined8 *)CONCAT44(uStack_b0._4_4_,uVar4);
        if (uStack_b0._4_4_ < uVar4) {
          FUN_1446f48e2(&local_b8,uVar3 & 0xffffffff);
        }
        *(uint *)((longlong)local_b8 + lVar7 * 4) = uVar10;
        uVar4 = uVar10 + 1;
        if ((int)(uVar10 + 1) < (int)uVar8) {
          uVar4 = uVar8;
        }
        do {
          uVar5 = uVar4;
          if (uVar4 - 1 == uVar10) break;
          uVar10 = uVar10 + 1;
          uVar5 = uVar10;
        } while (0xfffd < (ushort)(*(short *)(ppuVar2[0x29][uVar10 >> 9] +
                                             (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
        uVar10 = uVar5;
      } while (uVar10 != uVar8);
    }
    local_140 = &local_88;
    local_148 = FUN_143b5e9e8;
    local_160 = local_138;
    local_168 = &local_108;
    local_88 = param_1;
    FUN_148337f42(local_120,&local_b8,&local_148,&local_f8);
    if (local_b8 != (undefined8 ****)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    local_150 = (ulonglong ****)&local_b8;
    local_158 = FUN_143b5ea46;
    local_160 = local_138;
    local_168 = &local_108;
    local_b8 = (undefined8 ****)param_1;
    FUN_148337f42(local_120,ppuVar2,&local_158,&local_f8);
  }
  local_78 = *(undefined8 *)((longlong)param_1 + 0x18c);
  local_70 = *(undefined8 *)((longlong)param_1 + 0x184);
  fVar1 = *(float *)(param_1 + 0x30);
  local_68 = param_1[0x2f];
  fVar11 = cosf(fVar1 * 0.017453292);
  local_80 = sinf(fVar1 * 0.017453292);
  local_b8 = &local_88;
  local_88 = (ulonglong ***)(CONCAT44(local_80,fVar11) ^ 0x8000000000000000);
  local_90 = (ulonglong ****)&local_b8;
  local_98 = &LAB_143b5a6da;
  uStack_b0 = &local_70;
  local_a8 = &local_68;
  local_a0 = &local_78;
  local_7c = fVar11;
  FUN_1483261e8(local_120,local_138);
  if (local_138[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14846dd34 FUN_14846dd34 body=994 status=ok
// SIG undefined FUN_14846dd34(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14846dd34(ulonglong ***param_1)

{
  float fVar1;
  ulonglong **ppuVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  undefined1 auStack_1a8 [32];
  double *local_188;
  undefined4 local_180;
  ulonglong **local_178;
  ulonglong **local_170;
  longlong *local_168;
  code *local_158;
  ulonglong ****local_150;
  code *local_148;
  undefined8 ****local_140;
  longlong local_138 [3];
  undefined1 local_120 [24];
  double local_108;
  double local_100;
  ulonglong **local_f8;
  ulonglong **ppuStack_f0;
  ulonglong **local_e8;
  ulonglong **ppuStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong **local_c8;
  undefined8 ****local_b8;
  undefined8 uStack_b0;
  undefined8 ***local_a8;
  undefined8 *local_a0;
  undefined1 *local_98;
  ulonglong ****local_90;
  ulonglong ***local_88;
  float local_80;
  float local_7c;
  undefined8 local_78;
  undefined8 local_70;
  ulonglong **local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_c8 = param_1[0x27];
  local_f8 = param_1[0x21];
  ppuStack_f0 = param_1[0x22];
  local_e8 = param_1[0x23];
  ppuStack_e0 = param_1[0x24];
  local_d8 = *(undefined4 *)(param_1 + 0x25);
  uStack_d4 = *(undefined4 *)((longlong)param_1 + 300);
  uStack_d0 = *(undefined4 *)(param_1 + 0x26);
  uStack_cc = *(undefined4 *)((longlong)param_1 + 0x134);
  local_100 = (double)param_1[0x29] + (double)param_1[0x29];
  local_108 = (double)param_1[0x28] + (double)param_1[0x28];
  FUN_148328bf2(local_120,param_1[1],*(undefined4 *)(param_1 + 0x15),1);
  local_138[0] = 0;
  local_138[1] = 0;
  ppuVar2 = param_1[0x13];
  if ((ppuVar2 == (ulonglong **)0x0) || (*(int *)(ppuVar2 + 1) == 0)) {
    local_b8 = (undefined8 ****)0x0;
    uStack_b0 = (undefined8 *)0x0;
    ppuVar2 = param_1[1];
    uVar8 = *(int *)(ppuVar2 + 0x28) * 0x200 + *(int *)((longlong)ppuVar2 + 0x144);
    uVar10 = 0;
    if ((uVar8 != 0) && (uVar10 = 0, 0xfffd < (ushort)(*(short *)*ppuVar2[0x29] - 1U))) {
      uVar4 = 1;
      uVar5 = 1;
      if (1 < (int)uVar8) {
        uVar4 = uVar8;
      }
      do {
        uVar10 = uVar4;
        if (uVar4 == uVar5) break;
        uVar6 = uVar5 >> 9;
        uVar9 = uVar5 & 0x1ff;
        uVar10 = uVar5;
        uVar5 = uVar5 + 1;
      } while (0xfffd < (ushort)(*(short *)(ppuVar2[0x29][uVar6] + (ulonglong)uVar9 * 2) - 1U));
    }
    if (uVar10 != uVar8) {
      do {
        uVar3 = (ulonglong)uStack_b0;
        lVar7 = (longlong)(int)uStack_b0;
        uVar4 = (int)uStack_b0 + 1;
        uStack_b0 = (undefined8 *)CONCAT44(uStack_b0._4_4_,uVar4);
        if (uStack_b0._4_4_ < uVar4) {
          FUN_1446f48e2(&local_b8,uVar3 & 0xffffffff);
        }
        *(uint *)((longlong)local_b8 + lVar7 * 4) = uVar10;
        uVar4 = uVar10 + 1;
        if ((int)(uVar10 + 1) < (int)uVar8) {
          uVar4 = uVar8;
        }
        do {
          uVar5 = uVar4;
          if (uVar4 - 1 == uVar10) break;
          uVar10 = uVar10 + 1;
          uVar5 = uVar10;
        } while (0xfffd < (ushort)(*(short *)(ppuVar2[0x29][uVar10 >> 9] +
                                             (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
        uVar10 = uVar5;
      } while (uVar10 != uVar8);
    }
    local_170 = param_1[0x2c];
    local_178 = param_1[0x2e];
    local_180 = *(undefined4 *)(param_1 + 0x2d);
    local_140 = &local_88;
    local_148 = FUN_143b5eaa4;
    local_168 = local_138;
    local_188 = &local_108;
    local_88 = param_1;
    FUN_148338ee0(local_120,&local_b8,&local_148,&local_f8);
    if (local_b8 != (undefined8 ****)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    local_170 = param_1[0x2c];
    local_178 = param_1[0x2e];
    local_180 = *(undefined4 *)(param_1 + 0x2d);
    local_150 = (ulonglong ****)&local_b8;
    local_158 = FUN_143b5eb02;
    local_168 = local_138;
    local_188 = &local_108;
    local_b8 = (undefined8 ****)param_1;
    FUN_148338ee0(local_120,ppuVar2,&local_158,&local_f8);
  }
  local_78 = *(undefined8 *)((longlong)param_1 + 0x18c);
  local_70 = *(undefined8 *)((longlong)param_1 + 0x184);
  fVar1 = *(float *)(param_1 + 0x30);
  local_68 = param_1[0x2f];
  fVar11 = cosf(fVar1 * 0.017453292);
  local_80 = sinf(fVar1 * 0.017453292);
  local_b8 = &local_88;
  local_88 = (ulonglong ***)(CONCAT44(local_80,fVar11) ^ 0x8000000000000000);
  local_90 = (ulonglong ****)&local_b8;
  local_98 = &LAB_143b5a6da;
  uStack_b0 = &local_70;
  local_a8 = &local_68;
  local_a0 = &local_78;
  local_7c = fVar11;
  FUN_1483261e8(local_120,local_138);
  if (local_138[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14846e118 FUN_14846e118 body=935 status=ok
// SIG undefined FUN_14846e118(void)

void FUN_14846e118(undefined1 *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_148 [32];
  ulonglong **local_128;
  undefined4 local_120;
  longlong *local_118;
  code *local_108;
  undefined1 **local_100;
  code *local_f8;
  undefined1 **local_f0;
  longlong local_e8 [3];
  undefined1 local_d0 [24];
  undefined1 **local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined1 *local_98;
  ulonglong **local_90;
  undefined1 *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_148328bf2(local_d0,*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xa8),1);
  local_e8[0] = 0;
  local_e8[1] = 0;
  lVar1 = *(longlong *)(param_1 + 0x98);
  if ((lVar1 == 0) || (*(int *)(lVar1 + 8) == 0)) {
    local_88 = (undefined1 *)0x0;
    uStack_80 = 0;
    lVar1 = *(longlong *)(param_1 + 8);
    uVar7 = *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144);
    uVar9 = 0;
    if ((uVar7 != 0) &&
       (uVar9 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x148) - 1U))) {
      uVar3 = 1;
      uVar4 = 1;
      if (1 < (int)uVar7) {
        uVar3 = uVar7;
      }
      do {
        uVar9 = uVar3;
        if (uVar3 == uVar4) break;
        uVar5 = uVar4 >> 9;
        uVar8 = uVar4 & 0x1ff;
        uVar9 = uVar4;
        uVar4 = uVar4 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x148))[uVar5] +
                                           (ulonglong)uVar8 * 2) - 1U));
    }
    if (uVar9 != uVar7) {
      do {
        uVar2 = uStack_80;
        lVar6 = (longlong)(int)uStack_80;
        uVar3 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar3);
        if (uStack_80._4_4_ < uVar3) {
          FUN_1446f48e2(&local_88,uVar2 & 0xffffffff);
        }
        *(uint *)(local_88 + lVar6 * 4) = uVar9;
        uVar3 = uVar9 + 1;
        if ((int)(uVar9 + 1) < (int)uVar7) {
          uVar3 = uVar7;
        }
        do {
          uVar4 = uVar3;
          if (uVar3 - 1 == uVar9) break;
          uVar9 = uVar9 + 1;
          uVar4 = uVar9;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar1 + 0x148) +
                                               (ulonglong)(uVar9 >> 9) * 8) +
                                             (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
        uVar9 = uVar4;
      } while (uVar9 != uVar7);
    }
    local_120 = *(undefined4 *)(param_1 + 0x15c);
    local_a8 = (undefined8 *)(*(double *)(param_1 + 0x150) + *(double *)(param_1 + 0x150));
    local_b0 = (undefined8 *)(*(double *)(param_1 + 0x148) + *(double *)(param_1 + 0x148));
    local_b8 = (undefined1 **)(*(double *)(param_1 + 0x140) + *(double *)(param_1 + 0x140));
    local_128 = (ulonglong **)&local_b8;
    local_f0 = &local_98;
    local_f8 = FUN_143b5eb60;
    local_118 = local_e8;
    local_98 = param_1;
    FUN_14833bba6(local_d0,&local_88,&local_f8,param_1 + 0x108);
    if (local_88 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    local_120 = *(undefined4 *)(param_1 + 0x15c);
    local_a8 = (undefined8 *)(*(double *)(param_1 + 0x150) + *(double *)(param_1 + 0x150));
    local_b0 = (undefined8 *)(*(double *)(param_1 + 0x148) + *(double *)(param_1 + 0x148));
    local_b8 = (undefined1 **)(*(double *)(param_1 + 0x140) + *(double *)(param_1 + 0x140));
    local_128 = (ulonglong **)&local_b8;
    local_100 = &local_88;
    local_108 = FUN_143b5ebbe;
    local_118 = local_e8;
    local_88 = param_1;
    FUN_14833bba6(local_d0,lVar1,&local_108,param_1 + 0x108);
  }
  local_78 = *(undefined8 *)(param_1 + 0x18c);
  local_70 = *(undefined8 *)(param_1 + 0x184);
  fVar11 = *(float *)(param_1 + 0x180);
  local_68 = *(undefined8 *)(param_1 + 0x178);
  fVar10 = cosf(fVar11 * 0.017453292);
  fVar11 = sinf(fVar11 * 0.017453292);
  local_b8 = &local_88;
  local_88 = (undefined1 *)(CONCAT44(fVar11,fVar10) ^ 0x8000000000000000);
  uStack_80 = CONCAT44(fVar10,fVar11);
  local_90 = (ulonglong **)&local_b8;
  local_98 = &LAB_143b5a6da;
  local_b0 = &local_70;
  local_a8 = &local_68;
  local_a0 = &local_78;
  FUN_1483261e8(local_d0,local_e8);
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14846e4c0 FUN_14846e4c0 body=115 status=ok
// SIG undefined FUN_14846e4c0(void)

void FUN_14846e4c0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_58 [40];
  longlong *local_30;
  code *local_28;
  longlong **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = &local_30;
  local_28 = FUN_143b5ec1c;
  local_30 = param_1;
  cVar1 = FUN_14846e534(param_1[0x11]);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x20))(param_1,param_1[1],param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14846e534 FUN_14846e534 body=94 status=ok
// SIG undefined FUN_14846e534(void)

undefined8 FUN_14846e534(longlong *param_1,undefined8 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x47);
  EnterCriticalSection(lpCriticalSection);
  if ((*param_1 == 0) && (param_1[1] == 0)) {
    LeaveCriticalSection(lpCriticalSection);
    (*(code *)*param_2)(param_2[1],param_1 + 3);
    uVar1 = 0;
  }
  else {
    (*(code *)*param_2)(param_2[1]);
    LeaveCriticalSection(lpCriticalSection);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 14846e592 FUN_14846e592 body=1233 status=ok
// SIG undefined FUN_14846e592(void)

ulonglong FUN_14846e592(longlong param_1,undefined8 param_2,char *param_3)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char cVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  undefined ***pppuVar17;
  longlong *plVar18;
  ulonglong uVar19;
  undefined7 uVar20;
  undefined1 auStack_218 [40];
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined **local_1d8 [2];
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  code *local_198;
  undefined8 uStack_190;
  undefined ***local_188;
  undefined8 uStack_180;
  undefined **local_178;
  longlong lStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_150;
  undefined1 *local_148;
  undefined8 uStack_140;
  undefined ***local_138;
  undefined8 uStack_130;
  undefined **local_128;
  longlong lStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  float local_108;
  undefined1 local_104;
  undefined1 local_103;
  undefined4 local_f8;
  byte local_f4;
  undefined1 local_f3;
  undefined1 local_f2;
  undefined1 local_f1;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined1 local_d0 [24];
  undefined1 *local_b8;
  undefined8 uStack_b0;
  undefined ***local_a8;
  undefined8 uStack_a0;
  undefined **local_98;
  longlong lStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  uVar20 = (undefined7)((ulonglong)param_3 >> 8);
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_218;
  if (param_3 != (char *)0x0) {
    if (*param_3 == '\0') {
      pcVar3 = *(code **)(param_3 + 0x70);
      plVar18 = (longlong *)(param_3 + 0x90);
      if (*(longlong **)(param_3 + 0x80) != (longlong *)0x0) {
        plVar18 = *(longlong **)(param_3 + 0x80);
      }
      uVar15 = (**(code **)(*plVar18 + 8))();
      cVar14 = (*pcVar3)(uVar15);
      *param_3 = cVar14;
      if (cVar14 == '\0') goto LAB_14846e665;
    }
    uVar19 = 0;
    goto LAB_14846e618;
  }
LAB_14846e665:
  FUN_14831ea78(local_1b8,param_2);
  FUN_14054c6c4(local_1a8,param_1 + 0x98);
  local_1c8 = local_118;
  pppuVar17 = local_138;
  puVar11 = local_148;
  local_f8 = *(undefined4 *)(param_1 + 0x144);
  if (*(char *)(param_1 + 0x148) == '\x01') {
    local_1d8[0] = &PTR_LAB_14aee5860;
    puVar16 = &LAB_143b5ec42;
  }
  else {
    local_1d8[0] = &PTR_LAB_14aee5880;
    puVar16 = &LAB_143b5eca2;
  }
  local_88 = local_118;
  uStack_80 = uStack_110;
  uVar13 = uStack_80;
  local_98 = local_128;
  lStack_90 = lStack_120;
  local_a8 = local_138;
  uStack_a0 = uStack_130;
  uVar12 = uStack_a0;
  local_b8 = local_148;
  uStack_b0 = uStack_140;
  uVar15 = uStack_b0;
  local_118 = param_2;
  local_128 = local_1d8[0];
  lStack_120 = param_1;
  local_138 = (undefined ***)0x0;
  local_148 = puVar16;
  uStack_b0._0_4_ = (undefined4)uStack_140;
  uStack_b0._4_4_ = (undefined4)((ulonglong)uStack_140 >> 0x20);
  uStack_a0._0_4_ = (undefined4)uStack_130;
  uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_130 >> 0x20);
  uStack_80._0_4_ = (undefined4)uStack_110;
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_110 >> 0x20);
  uStack_1c0 = (undefined4)uStack_80;
  uStack_1bc = uStack_80._4_4_;
  uStack_1e0 = (undefined4)uStack_a0;
  uStack_1dc = uStack_a0._4_4_;
  uStack_1f0 = (undefined4)uStack_b0;
  uStack_1ec = uStack_b0._4_4_;
  if (puVar11 != (undefined1 *)0x0) {
    if (pppuVar17 == (undefined ***)0x0) {
      pppuVar17 = local_1d8;
    }
    uStack_b0 = uVar15;
    uStack_a0 = uVar12;
    uStack_80 = uVar13;
    (*(code *)(*pppuVar17)[2])();
  }
  pppuVar17 = local_188;
  pcVar3 = local_198;
  local_f3 = *(undefined1 *)(param_1 + 0x149);
  local_f4 = *(byte *)(param_1 + 0x14a) ^ 1;
  local_f0 = *(undefined8 *)(param_1 + 0x150);
  local_108 = (float)*(double *)(param_1 + 0x158);
  local_f2 = *(undefined1 *)(param_1 + 0x160);
  local_e8 = *(undefined4 *)(param_1 + 0x164);
  local_f1 = *(undefined1 *)(param_1 + 0x168);
  local_150 = 0;
  uVar5 = (undefined4)uStack_190;
  uVar6 = uStack_190._4_4_;
  uVar7 = (undefined4)uStack_180;
  uVar8 = uStack_180._4_4_;
  uVar9 = (undefined4)uStack_160;
  uVar10 = uStack_160._4_4_;
  local_198 = FUN_143b5ecee;
  uStack_190 = CONCAT44(uStack_1ec,uStack_1f0);
  local_188 = (undefined ***)0x0;
  uStack_180 = CONCAT44(uStack_1dc,uStack_1e0);
  local_178 = &PTR_LAB_14aee58a0;
  lStack_170 = param_1;
  local_168 = local_1c8;
  uStack_160 = CONCAT44(uStack_1bc,uStack_1c0);
  uStack_1f0 = uVar5;
  uStack_1ec = uVar6;
  uStack_1c0 = uVar9;
  uStack_1bc = uVar10;
  uStack_1e0 = uVar7;
  uStack_1dc = uVar8;
  if (pcVar3 != (code *)0x0) {
    if (pppuVar17 == (undefined ***)0x0) {
      pppuVar17 = local_1d8;
    }
    (*(code *)(*pppuVar17)[2])();
  }
  dVar1 = *(double *)(param_1 + 0xc0);
  dVar2 = *(double *)(param_1 + 200);
  dVar4 = *(double *)(param_1 + 0xd0) + *(double *)(param_1 + 0xd0);
  local_103 = 0.0 < (1.0 - ((dVar2 + dVar2) * dVar2 + dVar1 * (dVar1 + dVar1))) *
                    (*(double *)(param_1 + 0xf0) - *(double *)(param_1 + 0xb8)) +
                    (dVar4 * dVar2 - (dVar1 + dVar1) * *(double *)(param_1 + 0xd8)) *
                    (*(double *)(param_1 + 0xe8) - *(double *)(param_1 + 0xb0)) +
                    (dVar1 * dVar4 + *(double *)(param_1 + 0xd8) * (dVar2 + dVar2)) *
                    (*(double *)(param_1 + 0xe0) - *(double *)(param_1 + 0xa8));
  local_104 = *(undefined1 *)(param_1 + 0x140);
  FUN_14831eb48();
  if (param_3 == (char *)0x0) {
LAB_14846e9fe:
    uVar19 = CONCAT71(uVar20,1);
    if (*(char *)(param_1 + 0x169) == '\x01') {
      uVar19 = CONCAT71(uVar20,1);
      FUN_146c390fc(param_2,local_d0,1,1);
    }
  }
  else {
    if (*param_3 == '\0') {
      pcVar3 = *(code **)(param_3 + 0x70);
      plVar18 = (longlong *)(param_3 + 0x90);
      if (*(longlong **)(param_3 + 0x80) != (longlong *)0x0) {
        plVar18 = *(longlong **)(param_3 + 0x80);
      }
      uVar15 = (**(code **)(*plVar18 + 8))();
      cVar14 = (*pcVar3)(uVar15);
      *param_3 = cVar14;
      if (cVar14 == '\0') goto LAB_14846e9fe;
    }
    uVar19 = 0;
  }
  FUN_1483768e0(local_1b8);
LAB_14846e618:
  if ((local_70 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return uVar19 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14846ea64 FUN_14846ea64 body=115 status=ok
// SIG undefined FUN_14846ea64(void)

void FUN_14846ea64(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_58 [40];
  longlong *local_30;
  code *local_28;
  longlong **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = &local_30;
  local_28 = FUN_143b5f13e;
  local_30 = param_1;
  cVar1 = FUN_14846e534(param_1[0x11]);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x20))(param_1,param_1[1],param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14846ead8 FUN_14846ead8 body=1082 status=ok
// SIG undefined FUN_14846ead8(void)

ulonglong FUN_14846ead8(longlong param_1,undefined8 param_2,char *param_3)

{
  double dVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char cVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  undefined ***pppuVar16;
  longlong *plVar17;
  undefined8 unaff_RBP;
  ulonglong uVar18;
  ulonglong uVar20;
  undefined1 auStack_1d8 [40];
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined **local_198;
  longlong lStack_190;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 *local_158;
  undefined8 uStack_150;
  undefined ***local_148;
  undefined8 uStack_140;
  undefined **local_138;
  longlong lStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_110;
  undefined1 *local_108;
  undefined8 uStack_100;
  undefined ***local_f8;
  undefined8 uStack_f0;
  undefined **local_e8;
  longlong lStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  float local_c8;
  undefined1 local_c4;
  undefined1 local_c3;
  undefined4 local_b8;
  byte local_b4;
  undefined1 local_b3;
  undefined1 local_b2;
  undefined1 local_b1;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 local_90 [24];
  undefined1 *local_78;
  undefined8 uStack_70;
  undefined ***local_68;
  undefined8 uStack_60;
  undefined **local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  undefined7 uVar19;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if (param_3 != (char *)0x0) {
    if (*param_3 == '\0') {
      pcVar2 = *(code **)(param_3 + 0x70);
      plVar17 = (longlong *)(param_3 + 0x90);
      if (*(longlong **)(param_3 + 0x80) != (longlong *)0x0) {
        plVar17 = *(longlong **)(param_3 + 0x80);
      }
      uVar14 = (**(code **)(*plVar17 + 8))();
      cVar13 = (*pcVar2)(uVar14);
      *param_3 = cVar13;
      if (cVar13 == '\0') goto LAB_14846eb3b;
    }
    uVar18 = 0;
    goto LAB_14846eb75;
  }
LAB_14846eb3b:
  dVar1 = *(double *)(param_1 + 0xa8);
  uVar20 = -(ulonglong)(-dVar1 <= dVar1);
  uVar19 = (undefined7)((ulonglong)unaff_RBP >> 8);
  uVar18 = CONCAT71(uVar19,1);
  if ((double)(~uVar20 & (ulonglong)-dVar1 | (ulonglong)dVar1 & uVar20) < 1e-08) goto LAB_14846eb75;
  FUN_14831ea78(local_178,param_2);
  FUN_14054c6c4(local_168,param_1 + 0x98);
  local_188 = local_d8;
  lStack_190 = lStack_e0;
  ppuVar10 = local_e8;
  pppuVar16 = local_f8;
  puVar3 = local_108;
  local_b8 = *(undefined4 *)(param_1 + 0xb8);
  if (*(char *)(param_1 + 0xbc) == '\x01') {
    local_198 = &PTR_LAB_14aee58c0;
    puVar15 = &LAB_143b5f164;
  }
  else {
    local_198 = &PTR_LAB_14aee58e0;
    puVar15 = &LAB_143b5f1c4;
  }
  local_48 = local_d8;
  uStack_40 = uStack_d0;
  uVar12 = uStack_40;
  local_58 = local_e8;
  lStack_50 = lStack_e0;
  local_68 = local_f8;
  uStack_60 = uStack_f0;
  uVar11 = uStack_60;
  local_78 = local_108;
  uStack_70 = uStack_100;
  uVar14 = uStack_70;
  local_d8 = param_2;
  local_e8 = local_198;
  lStack_e0 = param_1;
  local_f8 = (undefined ***)0x0;
  local_108 = puVar15;
  uStack_70._0_4_ = (undefined4)uStack_100;
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_100 >> 0x20);
  uStack_60._0_4_ = (undefined4)uStack_f0;
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_f0 >> 0x20);
  uStack_40._0_4_ = (undefined4)uStack_d0;
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_d0 >> 0x20);
  uStack_180 = (undefined4)uStack_40;
  uStack_17c = uStack_40._4_4_;
  local_198 = ppuVar10;
  uStack_1a0 = (undefined4)uStack_60;
  uStack_19c = uStack_60._4_4_;
  uStack_1b0 = (undefined4)uStack_70;
  uStack_1ac = uStack_70._4_4_;
  if (puVar3 != (undefined1 *)0x0) {
    if (pppuVar16 == (undefined ***)0x0) {
      pppuVar16 = &local_198;
    }
    uStack_70 = uVar14;
    uStack_60 = uVar11;
    uStack_40 = uVar12;
    (*(code *)(*pppuVar16)[2])();
  }
  lStack_190 = lStack_130;
  local_198 = local_138;
  pppuVar16 = local_148;
  puVar3 = local_158;
  local_b3 = *(undefined1 *)(param_1 + 0xbd);
  local_b4 = *(byte *)(param_1 + 0xbe) ^ 1;
  local_b0 = *(undefined8 *)(param_1 + 0xc0);
  local_c8 = (float)*(double *)(param_1 + 200);
  local_b2 = *(undefined1 *)(param_1 + 0xd0);
  local_a8 = *(undefined4 *)(param_1 + 0xd4);
  local_b1 = *(undefined1 *)(param_1 + 0xd8);
  local_110 = 1;
  if (*(int *)(param_1 + 0xb0) == 1) {
    local_110 = 2;
LAB_14846ed93:
  }
  else if (*(int *)(param_1 + 0xb0) == 2) {
    local_110 = 3;
    goto LAB_14846ed93;
  }
  uVar4 = (undefined4)uStack_150;
  uVar5 = uStack_150._4_4_;
  uVar6 = (undefined4)uStack_140;
  uVar7 = uStack_140._4_4_;
  uVar8 = (undefined4)uStack_120;
  uVar9 = uStack_120._4_4_;
  local_58 = local_138;
  lStack_50 = lStack_130;
  local_128 = local_188;
  uStack_120 = CONCAT44(uStack_17c,uStack_180);
  local_158 = &LAB_143b5f210;
  uStack_150 = CONCAT44(uStack_1ac,uStack_1b0);
  local_148 = (undefined ***)0x0;
  uStack_140 = CONCAT44(uStack_19c,uStack_1a0);
  local_138 = &PTR_LAB_14aee5900;
  lStack_130 = param_1;
  uStack_1b0 = uVar4;
  uStack_1ac = uVar5;
  uStack_180 = uVar8;
  uStack_17c = uVar9;
  uStack_1a0 = uVar6;
  uStack_19c = uVar7;
  if (puVar3 != (undefined1 *)0x0) {
    if (pppuVar16 == (undefined ***)0x0) {
      pppuVar16 = &local_198;
    }
    (*(code *)(*pppuVar16)[2])();
  }
  local_c3 = 0.0 < *(double *)(param_1 + 0xa8);
  local_c4 = *(undefined1 *)(param_1 + 0xb4);
  FUN_14831eb48();
  if (param_3 == (char *)0x0) {
LAB_14846eeab:
    uVar18 = CONCAT71(uVar19,1);
    if (*(char *)(param_1 + 0xd9) == '\x01') {
      uVar18 = CONCAT71(uVar19,1);
      FUN_146c390fc(param_2,local_90,1,1);
    }
  }
  else {
    if (*param_3 == '\0') {
      pcVar2 = *(code **)(param_3 + 0x70);
      plVar17 = (longlong *)(param_3 + 0x90);
      if (*(longlong **)(param_3 + 0x80) != (longlong *)0x0) {
        plVar17 = *(longlong **)(param_3 + 0x80);
      }
      uVar14 = (**(code **)(*plVar17 + 8))();
      cVar13 = (*pcVar2)(uVar14);
      *param_3 = cVar13;
      if (cVar13 == '\0') goto LAB_14846eeab;
    }
    uVar18 = 0;
  }
  FUN_1483768e0(local_178);
LAB_14846eb75:
  if ((local_38 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return uVar18 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14846ef14 FUN_14846ef14 body=254 status=ok
// SIG undefined FUN_14846ef14(void)

void FUN_14846ef14(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 auStack_d8 [32];
  undefined8 local_b8 [12];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar1 = (longlong *)(param_1 + 0x98);
  FUN_14846f014(plVar1,(int)param_2[1]);
  if (0 < (int)param_2[1]) {
    lVar5 = 0;
    lVar8 = 0;
    do {
      lVar4 = *param_2;
      puVar6 = (undefined8 *)(lVar5 * 8 + param_2[2]);
      puVar7 = local_b8;
      for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      local_50 = *(undefined4 *)(lVar4 + 8 + lVar5);
      local_58 = *(undefined8 *)(lVar4 + lVar5);
      iVar2 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
        FUN_148484aca(plVar1,iVar2);
      }
      puVar6 = local_b8;
      puVar7 = (undefined8 *)((longlong)iVar2 * 0x70 + *plVar1);
      for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      lVar8 = lVar8 + 1;
      lVar5 = lVar5 + 0xc;
    } while (lVar8 < (int)param_2[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14846f014 FUN_14846f014 body=41 status=ok
// SIG undefined FUN_14846f014(void)

void FUN_14846f014(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_148484a5e();
  return;
}



// FUNCTION 14846f03e FUN_14846f03e body=524 status=ok
// SIG undefined FUN_14846f03e(void)

void FUN_14846f03e(longlong param_1,char *param_2)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined2 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == (char *)0x0) {
    local_40 = 1;
    local_48 = 1;
    FUN_146c005f0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x88),1,1);
  }
  else {
    if (*param_2 != '\0') goto LAB_14846f1fe;
    pcVar2 = *(code **)(param_2 + 0x70);
    plVar8 = *(longlong **)(param_2 + 0x80);
    if (*(longlong **)(param_2 + 0x80) == (longlong *)0x0) {
      plVar8 = (longlong *)(param_2 + 0x90);
    }
    uVar7 = (**(code **)(*plVar8 + 8))();
    cVar6 = (*pcVar2)(uVar7);
    *param_2 = cVar6;
    if (cVar6 != '\0') goto LAB_14846f1fe;
    local_40 = 1;
    local_48 = 1;
    FUN_146c005f0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x88),1,1);
    if (*param_2 != '\0') goto LAB_14846f1fe;
    pcVar2 = *(code **)(param_2 + 0x70);
    plVar8 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar8 = *(longlong **)(param_2 + 0x80);
    }
    uVar7 = (**(code **)(*plVar8 + 8))(plVar8);
    cVar6 = (*pcVar2)(uVar7);
    *param_2 = cVar6;
    if (cVar6 != '\0') goto LAB_14846f1fe;
  }
  fVar15 = *(float *)(param_1 + 0xb4);
  if (1.0 <= fVar15) {
    fVar15 = 1.0;
  }
  local_38 = 2;
  local_30 = 1;
  local_2c = 0x100;
  local_34 = 1;
  if (1 < *(int *)(param_1 + 0xb8)) {
    local_34 = *(int *)(param_1 + 0xb8);
  }
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    FUN_14846f3d0(param_1,*(undefined8 *)(param_1 + 8),fVar15,&local_38);
  }
  else if (*(char *)(param_1 + 0xb0) == '\0') {
    FUN_14846f24c(param_1,*(undefined8 *)(param_1 + 8),fVar15,&local_38);
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x208);
  iVar1 = *(int *)(param_1 + 0xa0);
  FUN_146c26078(lVar3,iVar1);
  if (0 < (longlong)iVar1) {
    lVar4 = *(longlong *)(lVar3 + 0xd0);
    lVar5 = *(longlong *)(lVar3 + 0xc0);
    lVar3 = *(longlong *)(lVar3 + 200);
    lVar12 = 0;
    lVar13 = 0;
    lVar14 = 0;
    do {
      *(undefined8 *)(*(longlong *)(lVar5 + 0x18) + lVar12 * 2) =
           *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x60 + lVar14);
      *(undefined4 *)(*(longlong *)(lVar3 + 0x18) + lVar12) =
           *(undefined4 *)(*(longlong *)(param_1 + 0x98) + 0x68 + lVar14);
      puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x98) + lVar14);
      puVar11 = (undefined8 *)(*(longlong *)(lVar4 + 0x18) + lVar13);
      for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      lVar14 = lVar14 + 0x70;
      lVar13 = lVar13 + 0x60;
      lVar12 = lVar12 + 4;
    } while ((longlong)iVar1 * 0x70 - lVar14 != 0);
  }
LAB_14846f1fe:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14846f24c FUN_14846f24c body=387 status=ok
// SIG undefined FUN_14846f24c(void)

void FUN_14846f24c(longlong param_1,double param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_108 [40];
  undefined4 local_e0;
  undefined8 *local_d8;
  double local_c8;
  double local_c0;
  longlong *local_b8;
  float *local_b0;
  undefined4 *local_a8;
  double local_a0;
  undefined8 *local_98;
  longlong local_90;
  undefined4 local_88;
  float local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  code *local_68;
  double *local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_6c = param_3;
  local_78 = FUN_14846f658(param_2,*(undefined8 *)(param_1 + 0xa8));
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x50);
  FUN_145c688c4(param_2,&local_c8,1);
  local_7c = (float)SQRT((local_a0 - (double)local_b8) * (local_a0 - (double)local_b8) +
                         ((double)local_b0 - local_c8) * ((double)local_b0 - local_c8) +
                         ((double)local_a8 - local_c0) * ((double)local_a8 - local_c0));
  FUN_14846f718(&local_90,param_1 + 0x98);
  local_a8 = &local_6c;
  local_d8 = &local_58;
  local_58 = 0;
  local_50 = 0;
  local_68 = FUN_143b5f2a0;
  local_e0 = 0;
  local_c8 = param_2;
  local_c0 = (double)param_1;
  local_b8 = &local_90;
  local_b0 = &local_7c;
  local_a0 = (double)param_4;
  local_98 = &local_78;
  local_60 = &local_c8;
  FUN_1401f8d10(L"ParallelFor Task",uVar1,1);
  FUN_14847406e(local_90,local_88);
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14846f3d0 FUN_14846f3d0 body=647 status=ok
// SIG undefined FUN_14846f3d0(void)

void FUN_14846f3d0(double param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auStack_188 [40];
  undefined4 local_160;
  undefined8 *local_158;
  undefined8 local_148;
  double local_140;
  longlong *local_138;
  longlong *local_130;
  float *local_128;
  longlong *local_120;
  int *local_118;
  longlong local_110;
  undefined4 *local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  longlong local_e8 [2];
  undefined8 local_d8;
  undefined4 local_d0;
  longlong local_a8 [3];
  longlong local_90;
  undefined4 local_88;
  float local_80;
  int local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  code *local_68;
  double *local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_148 = param_4;
  local_6c = param_3;
  local_78 = FUN_14846f658(param_2,*(undefined8 *)((longlong)param_1 + 0xa8));
  iVar1 = *(int *)(param_2 + 0x50);
  local_7c = iVar1;
  FUN_145c688c4(param_2,&local_140,1);
  local_80 = (float)SQRT(((double)local_118 - (double)local_130) *
                         ((double)local_118 - (double)local_130) +
                         ((double)local_128 - local_140) * ((double)local_128 - local_140) +
                         ((double)local_120 - (double)local_138) *
                         ((double)local_120 - (double)local_138));
  FUN_14846f718(&local_90,(longlong)param_1 + 0x98);
  local_a8[0] = 0;
  local_a8[1] = 0;
  FUN_144a12820(local_a8,iVar1 * *(int *)((longlong)param_1 + 0xa0),1);
  FUN_14846fff2(local_e8,param_2,*(undefined4 *)((longlong)param_1 + 0xbc));
  local_130 = &local_f8;
  local_f0 = local_d0;
  local_f8 = local_d8;
  local_118 = &local_7c;
  local_108 = &local_6c;
  local_58 = 0;
  local_50 = 0;
  local_68 = FUN_143b5fb6e;
  local_160 = 0;
  local_158 = &local_58;
  local_140 = param_1;
  local_138 = &local_90;
  local_128 = &local_80;
  local_120 = local_e8;
  local_110 = param_2;
  local_100 = local_a8;
  local_60 = &local_140;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)((longlong)param_1 + 0xa0),1,&local_68);
  local_138 = &local_90;
  local_128 = (float *)local_148;
  local_120 = &local_78;
  local_58 = 0;
  local_50 = 0;
  local_68 = FUN_143b60456;
  local_160 = 0;
  local_158 = &local_58;
  local_140 = param_1;
  local_130 = local_a8;
  local_60 = &local_140;
  FUN_1401f8d10(L"ParallelFor Task",local_7c,1,&local_68);
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_14847406e(local_90,local_88);
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14846f658 FUN_14846f658 body=191 status=ok
// SIG undefined FUN_14846f658(void)

undefined8 * FUN_14846f658(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)FUN_146bcdc68(*(undefined8 *)(param_1 + 0x208));
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    puVar1[1] = 0;
    *puVar1 = &PTR_FUN_149f36420;
    puVar1[2] = param_1;
    FUN_146be9ba2(puVar1 + 3);
    local_38 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    uStack_30 = 0xc00000000;
    FUN_146bea236(puVar1);
    FUN_146c18154(*(undefined8 *)(param_1 + 0x208),param_2,puVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14846f718 FUN_14846f718 body=2264 status=ok
// SIG undefined FUN_14846f718(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_14846f718(longlong *param_1,longlong *param_2,double *param_3)

{
  double *pdVar1;
  undefined8 *puVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  double *pdVar17;
  longlong *plVar18;
  longlong lVar19;
  undefined1 (*pauVar20) [16];
  uint uVar21;
  longlong lVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar36;
  double dVar37;
  undefined1 auVar35 [16];
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar44;
  double dVar45;
  double dVar46;
  undefined1 auVar47 [16];
  double dVar48;
  undefined1 auStack_2e8 [32];
  undefined1 local_2c8 [16];
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  undefined1 local_208 [16];
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  *param_1 = 0;
  param_1[1] = 0;
  if (0 < (int)param_2[1]) {
    lVar19 = 0;
    do {
      lVar22 = *param_2;
      lVar16 = lVar19 * 0x70;
      pdVar17 = (double *)(lVar22 + 0x20 + lVar16);
      dVar37 = *pdVar17;
      dVar27 = pdVar17[1];
      dVar34 = *(double *)(lVar22 + 0x30 + lVar16);
      iVar13 = *(int *)(lVar22 + 0x68 + lVar16);
      if (iVar13 != -1) {
        pdVar17 = (double *)(lVar16 + lVar22);
        dVar28 = *pdVar17;
        dVar30 = pdVar17[1];
        auVar26 = *(undefined1 (*) [16])(pdVar17 + 2);
        auVar47 = *(undefined1 (*) [16])(pdVar17 + 10);
        auVar39 = *(undefined1 (*) [16])(pdVar17 + 8);
        do {
          auVar40 = _DAT_149934d80;
          lVar16 = (longlong)iVar13 * 0x70;
          pdVar1 = (double *)(lVar22 + lVar16);
          auVar42 = *(undefined1 (*) [16])(lVar22 + 0x40 + lVar16);
          dVar4 = auVar42._0_8_;
          dVar9 = auVar42._8_8_;
          auVar23 = *(undefined1 (*) [16])(lVar22 + 0x50 + lVar16);
          dVar7 = auVar23._0_8_;
          auVar42 = minpd(auVar39,auVar42);
          dVar25 = auVar47._0_8_;
          dVar41 = auVar47._8_8_;
          auVar47 = minpd(auVar47,auVar23);
          auVar43._8_8_ = -(ulonglong)(auVar42._8_8_ < 0.0);
          auVar43._0_8_ = -(ulonglong)(auVar42._0_8_ < 0.0);
          uVar15 = movmskpd((int)pdVar17,auVar43);
          pdVar17 = (double *)(ulonglong)uVar15;
          auVar42._8_8_ = -(ulonglong)(auVar47._8_8_ < 0.0);
          auVar42._0_8_ = -(ulonglong)(auVar47._0_8_ < 0.0);
          uVar21 = movmskpd((int)param_3,auVar42);
          dVar33 = auVar26._0_8_;
          dVar36 = auVar26._8_8_;
          local_2c8._0_8_ = auVar39._0_8_;
          local_2c8._8_8_ = auVar39._8_8_;
          local_2c8 = auVar39;
          local_2b8 = dVar37;
          dStack_2b0 = dVar27;
          if ((uVar21 & 0x3fffffff) == 0 && uVar15 == 0) {
            dVar10 = *pdVar1;
            dVar11 = pdVar1[1];
            dVar12 = pdVar1[2];
            dVar5 = pdVar1[3];
            dVar45 = pdVar1[3];
            dVar46 = *pdVar1 * dVar30;
            dVar48 = *pdVar1 * dVar28;
            dVar32 = pdVar1[1];
            dVar29 = pdVar1[1];
            dVar44 = dVar28 * dVar32;
            dVar31 = dVar30 * dVar29;
            dVar8 = pdVar1[2];
            dVar6 = pdVar1[2];
            dVar38 = dVar28 * dVar6;
            dVar28 = dVar30 * dVar8 * -1.0 +
                     dVar33 * dVar32 + dVar36 * *pdVar1 * 1.0 + dVar28 * dVar5;
            dVar30 = dVar38 * 1.0 + dVar36 * dVar29 + dVar33 * *pdVar1 * -1.0 + dVar30 * dVar45;
            dVar37 = dVar37 * dVar4;
            dVar27 = dVar27 * dVar9;
            dVar34 = dVar34 * dVar7;
            dVar29 = dVar27 * dVar10 - dVar37 * dVar11;
            dVar32 = dVar34 * dVar11 - dVar27 * dVar12;
            dVar38 = dVar37 * dVar12 - dVar34 * dVar10;
            dVar32 = dVar32 + dVar32;
            dVar38 = dVar38 + dVar38;
            dVar29 = dVar29 + dVar29;
            dVar37 = (dVar29 * dVar11 - dVar12 * dVar38) + dVar5 * dVar32 + dVar37 + pdVar1[4];
            dVar27 = (dVar32 * dVar12 - dVar29 * dVar10) + dVar45 * dVar38 + dVar27 + pdVar1[5];
            dVar34 = (dVar38 * dVar10 - dVar11 * dVar32) + dVar5 * dVar29 + dVar34 + pdVar1[6];
            auVar47._0_8_ = dVar25 * dVar7;
            auVar47._8_8_ = dVar41 * auVar23._8_8_;
            auVar26._8_8_ = dVar33 * dVar6 * -1.0 + ((dVar48 * -1.0 + dVar36 * dVar45) - dVar31);
            auVar26._0_8_ = dVar36 * dVar8 * 1.0 + ((dVar46 * 1.0 + dVar33 * dVar5) - dVar44);
            auVar39._8_8_ = (double)local_2c8._8_8_ * dVar9;
            auVar39._0_8_ = (double)local_2c8._0_8_ * dVar4;
            param_3 = (double *)0x0;
          }
          else {
            local_2a8 = dVar25 * dVar7;
            dStack_2a0 = dVar41 * auVar23._8_8_;
            dVar10 = *pdVar1;
            dVar11 = pdVar1[1];
            dVar12 = pdVar1[2];
            dVar44 = dVar11 + dVar11;
            dVar29 = dVar12 + dVar12;
            dVar5 = dVar10 * (dVar10 + dVar10);
            local_1a8 = (1.0 - (dVar5 + dVar11 * dVar44)) * dVar7;
            dVar41 = pdVar1[3];
            dVar32 = dVar29 * dVar41;
            dVar6 = (dVar10 + dVar10) * pdVar1[3];
            dVar41 = dVar44 * dVar41;
            dVar45 = (dVar29 * dVar11 - dVar6) * dVar7;
            dVar8 = (double)local_2c8._0_8_ * dVar4;
            dVar38 = (double)local_2c8._8_8_ * dVar9;
            local_1f8 = (1.0 - (dVar12 * dVar29 + dVar11 * dVar44)) * dVar4;
            dVar5 = (1.0 - (dVar12 * dVar29 + dVar5)) * dVar9;
            dStack_1f0 = (dVar44 * dVar10 + dVar32) * dVar4;
            local_1c8 = (dVar29 * dVar11 + dVar6) * dVar9;
            local_1e8 = (*pdVar1 * dVar29 - dVar41) * dVar4;
            uStack_1e0 = 0;
            local_1d8._8_4_ = SUB84(dVar5,0);
            local_1d8._0_8_ = (dVar44 * dVar10 - dVar32) * dVar9;
            local_1d8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
            uStack_1c0 = 0;
            local_1b8._8_4_ = SUB84(dVar45,0);
            local_1b8._0_8_ = (dVar41 + *pdVar1 * dVar29) * dVar7;
            local_1b8._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
            uStack_1a0 = 0;
            local_198 = pdVar1[4];
            dStack_190 = pdVar1[5];
            local_188 = pdVar1[6];
            uStack_180 = 0x3ff0000000000000;
            dVar4 = dVar30 + dVar30;
            dVar9 = dVar33 + dVar33;
            dVar45 = dVar28 * (dVar28 + dVar28);
            local_228 = (1.0 - (dVar45 + dVar30 * dVar4)) * dVar25;
            dVar41 = (dVar28 + dVar28) * dVar36;
            local_258 = (dVar4 * dVar28 - dVar9 * dVar36) * (double)local_2c8._8_8_;
            dVar7 = (dVar9 * dVar30 - dVar41) * dVar25;
            local_278 = ((double)DAT_149934d80 - (dVar33 * dVar9 + dVar30 * dVar4)) *
                        (double)local_2c8._0_8_;
            dStack_250 = (DAT_149934d80._8_8_ - (dVar33 * dVar9 + dVar45)) * (double)local_2c8._8_8_
            ;
            dStack_270 = (dVar4 * dVar28 + dVar9 * dVar36) * (double)local_2c8._0_8_;
            local_248 = (dVar9 * dVar30 + dVar41) * (double)local_2c8._8_8_;
            local_268 = (dVar28 * dVar9 - dVar4 * dVar36) * (double)local_2c8._0_8_;
            uStack_260 = 0;
            uStack_240 = 0;
            local_238._8_4_ = SUB84(dVar7,0);
            local_238._0_8_ = (dVar4 * dVar36 + dVar28 * dVar9) * dVar25;
            local_238._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
            uStack_220 = 0;
            local_208._8_4_ = 0;
            local_208._0_8_ = dVar34;
            local_208._12_4_ = 0x3ff00000;
            param_3 = &local_1f8;
            local_218 = dVar37;
            dStack_210 = dVar27;
            FUN_1447fea8d(&local_178,&local_278);
            FUN_144a1c686(&local_178,0x3e45798ee0000000);
            auVar23._8_8_ = -(ulonglong)(0.0 <= dVar38);
            auVar23._0_8_ = -(ulonglong)(0.0 <= dVar8);
            auVar26 = blendvpd(_DAT_149936790,auVar40,auVar23);
            auVar47._8_8_ = dStack_2a0;
            auVar47._0_8_ = local_2a8;
            dVar34 = (double)(~-(ulonglong)(0.0 <= local_2a8) & 0xbff0000000000000 |
                             -(ulonglong)(0.0 <= local_2a8) & 0x3ff0000000000000);
            dVar37 = auVar26._0_8_;
            local_168 = local_168 * dVar37;
            local_170 = local_170 * dVar37;
            local_178 = local_178 * dVar37;
            dVar37 = auVar26._8_8_;
            local_148 = local_148 * dVar37;
            local_150 = local_150 * dVar37;
            local_158 = dVar37 * local_158;
            local_128 = local_128 * dVar34;
            local_130 = local_130 * dVar34;
            local_138 = dVar34 * local_138;
            pdVar17 = &local_178;
            FUN_14481fd10(&local_298);
            dVar34 = local_288 * local_288 + local_298 * local_298;
            dVar37 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
            auVar35._0_8_ = dVar34 + dVar37;
            auVar35._8_8_ = dVar34 + dVar37;
            auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_);
            auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_);
            auVar26 = sqrtpd(auVar35,auVar35);
            auVar39 = divpd(auVar40,auVar26);
            auVar40._0_8_ = auVar39._0_8_ * local_288;
            auVar40._8_8_ = auVar39._8_8_ * dStack_280;
            auVar26 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar40,auVar24);
            dVar28 = (double)((ulonglong)(local_298 * auVar39._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_));
            dVar30 = (double)((ulonglong)(dStack_290 * auVar39._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_));
            lVar22 = *param_2;
            auVar39._8_8_ = dVar38;
            auVar39._0_8_ = dVar8;
            dVar34 = local_108;
            dVar37 = local_118;
            dVar27 = dStack_110;
          }
          iVar13 = *(int *)(lVar22 + 0x68 + lVar16);
        } while (iVar13 != -1);
      }
      iVar13 = (int)param_1[1];
      lVar22 = (longlong)iVar13;
      *(uint *)(param_1 + 1) = iVar13 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar13 + 1U) {
        FUN_148473fda(param_1,iVar13);
      }
      lVar16 = *param_1;
      pdVar17 = (double *)(lVar16 + lVar22 * 0x28);
      *pdVar17 = dVar37;
      pdVar17[1] = dVar27;
      *(double *)(lVar16 + 0x10 + lVar22 * 0x28) = dVar34;
      lVar19 = lVar19 + 1;
      puVar2 = (undefined8 *)(lVar16 + 0x18 + lVar22 * 0x28);
      *puVar2 = 0;
      puVar2[1] = 0;
      uVar14 = (ulonglong)(int)param_2[1];
    } while (lVar19 < (longlong)uVar14);
    if (0 < (int)param_2[1]) {
      lVar16 = 0x68;
      lVar19 = 0;
      lVar22 = 0;
      do {
        if ((longlong)*(int *)(*param_2 + lVar16) != -1) {
          lVar3 = *param_1;
          plVar18 = (longlong *)((longlong)*(int *)(*param_2 + lVar16) * 0x28 + 0x18 + lVar3);
          iVar13 = (int)plVar18[1];
          *(uint *)(plVar18 + 1) = iVar13 + 1U;
          if (*(uint *)((longlong)plVar18 + 0xc) < iVar13 + 1U) {
            FUN_1403e3958(plVar18,iVar13);
          }
          pauVar20 = (undefined1 (*) [16])(lVar3 + lVar19);
          lVar3 = *plVar18;
          *(undefined8 *)(lVar3 + 0x10 + (longlong)iVar13 * 0x18) = *(undefined8 *)pauVar20[1];
          *(undefined1 (*) [16])(lVar3 + (longlong)iVar13 * 0x18) = *pauVar20;
          uVar14 = (ulonglong)*(uint *)(param_2 + 1);
        }
        lVar22 = lVar22 + 1;
        lVar19 = lVar19 + 0x28;
        lVar16 = lVar16 + 0x70;
      } while (lVar22 < (int)uVar14);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14846fff2 FUN_14846fff2 body=1480 status=ok
// SIG undefined FUN_14846fff2(void)

longlong * FUN_14846fff2(longlong *param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  double dVar15;
  float fVar16;
  double dVar17;
  float fVar18;
  double dVar19;
  undefined1 auStack_3f8 [40];
  undefined4 local_3d0;
  longlong *local_3c8;
  longlong *local_3b8;
  longlong *local_3b0;
  longlong local_3a8;
  undefined4 local_3a0;
  undefined4 local_39c;
  longlong local_398;
  undefined4 local_390;
  undefined1 *local_388;
  longlong **local_380;
  longlong local_378;
  undefined1 **local_370;
  double local_368;
  undefined1 *local_360;
  undefined4 local_358;
  undefined1 local_354;
  code *local_348;
  undefined8 local_338;
  undefined **local_328;
  undefined1 *local_320;
  float local_308;
  float local_304;
  float local_300;
  undefined8 local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  int local_2e8;
  undefined8 local_2e4;
  longlong local_2d8;
  undefined1 *local_2d0;
  float local_2c8;
  undefined4 local_2c4;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined1 local_2a8;
  undefined8 local_2a4;
  undefined8 local_298;
  undefined1 local_290;
  undefined4 local_28c;
  undefined2 local_288;
  code *local_278;
  undefined8 local_268;
  undefined **local_258;
  undefined1 *local_250;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined8 uStack_214;
  undefined8 uStack_208;
  undefined4 uStack_200;
  undefined4 local_1fc;
  undefined4 uStack_1f8;
  undefined8 uStack_1f4;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined4 local_1dc;
  undefined4 uStack_1d8;
  undefined8 uStack_1d4;
  undefined1 *local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined8 local_194;
  undefined4 local_18c;
  longlong local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined1 local_158 [136];
  longlong local_d0;
  longlong local_b8;
  uint local_8c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_146ba21d6(local_158,param_2,1);
  local_1a0 = 0;
  local_198 = 0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_194 = 0xffffffff00000080;
  local_18c = 0;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0x4000000000000000;
  local_160 = 2;
  local_1c8 = local_158;
  FUN_146bef8a8(&local_1c8,1);
  if ((int)local_8c < 0) {
    dVar17 = -INFINITY;
    dVar15 = -INFINITY;
    dVar19 = dVar17;
  }
  else {
    lVar10 = *(longlong *)(local_d0 + (ulonglong)(local_8c >> 9) * 8);
    lVar4 = (ulonglong)((local_8c & 0x1ff) << 3) * 3;
    lVar3 = *(longlong *)(local_b8 + (ulonglong)(local_8c >> 9) * 8);
    dVar19 = *(double *)(lVar10 + 0x10 + lVar4);
    dVar2 = *(double *)(lVar3 + 0x10 + lVar4);
    dVar17 = *(double *)(lVar10 + 8 + lVar4);
    dVar15 = *(double *)(lVar3 + 8 + lVar4);
    dVar17 = (dVar17 + dVar15) - (dVar17 - dVar15);
    dVar15 = (*(double *)(lVar10 + lVar4) + *(double *)(lVar3 + lVar4)) -
             (*(double *)(lVar10 + lVar4) - *(double *)(lVar3 + lVar4));
    dVar19 = (dVar19 + dVar2) - (dVar19 - dVar2);
  }
  dVar19 = (double)(-(ulonglong)(0.0 <= dVar19) & (ulonglong)dVar19);
  dVar17 = (double)(-(ulonglong)(0.0 <= dVar17) & (ulonglong)dVar17);
  uVar14 = -(ulonglong)(dVar19 <= dVar17);
  dVar17 = (double)(~uVar14 & (ulonglong)dVar19 | uVar14 & (ulonglong)dVar17);
  dVar15 = (double)(-(ulonglong)(0.0 <= dVar15) & (ulonglong)dVar15);
  uVar14 = -(ulonglong)(dVar17 <= dVar15);
  local_2c8 = (float)((double)(uVar14 & (ulonglong)dVar15 | ~uVar14 & (ulonglong)dVar17) /
                     (double)param_3);
  plVar1 = param_1 + 2;
  *(float *)(param_1 + 4) = local_2c8;
  fVar16 = local_2c8 * 0.5;
  *(float *)(param_1 + 6) = fVar16;
  *(float *)((longlong)param_1 + 0x34) = fVar16;
  *(float *)(param_1 + 7) = fVar16;
  local_368 = (double)local_2c8;
  local_360 = &DAT_100000001;
  local_358 = 0x3f000000;
  local_354 = 1;
  local_338 = 0;
  local_328 = &PTR_LAB_149f36510;
  local_320 = &LAB_148485290;
  local_348 = FUN_146bd3274;
  local_2f8 = 0;
  uStack_2f0 = 0;
  uStack_2ec = 0;
  local_2e8 = 0;
  local_2e4 = 0;
  local_2d0 = local_1c8;
  local_2c4 = 1;
  local_2c0 = DAT_14c8464e0;
  uStack_2b8 = DAT_14c8464e8;
  local_2b0 = DAT_14c8464f0;
  local_2a8 = 1;
  local_2a4 = 0x100001000;
  local_298 = 0;
  local_290 = 1;
  local_28c = 1;
  local_288 = 0;
  local_268 = 0;
  local_258 = &PTR_LAB_149f36510;
  local_250 = &LAB_1483ba7bc;
  local_278 = FUN_146bd3274;
  local_238 = 0;
  local_230 = 0;
  local_228 = 0;
  uStack_220 = 0;
  uStack_21c = 0;
  uStack_218 = 0;
  uStack_214 = 0;
  uStack_1f8 = 0;
  uStack_1f4 = 0;
  uStack_208 = 0;
  uStack_200 = 0;
  local_1fc = 0;
  uStack_1d8 = 0;
  uStack_1d4 = 0;
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  local_1dc = 0;
  local_378 = param_2;
  local_370 = &local_1c8;
  local_2d8 = param_2;
  FUN_148484fcc(&local_378);
  FUN_1484851de(&local_3a8,local_2e8 + -1,(int)local_2e4 + -1,local_2e4._4_4_ + -1);
  if (&local_3a8 == param_1) {
    *(undefined4 *)(param_1 + 3) = local_390;
    *plVar1 = local_398;
    if (local_3a8 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_3a8;
    *(undefined4 *)(param_1 + 1) = local_3a0;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_39c;
    *(undefined4 *)(param_1 + 3) = local_390;
    *plVar1 = local_398;
  }
  *(float *)((longlong)param_1 + 0x24) = local_308 + *(float *)(param_1 + 6);
  *(float *)(param_1 + 5) = local_304 + *(float *)((longlong)param_1 + 0x34);
  *(float *)((longlong)param_1 + 0x2c) = local_300 + *(float *)(param_1 + 7);
  local_380 = &local_3b8;
  local_3a8 = 0;
  uVar11 = 0;
  local_3a0 = 0;
  local_388 = &LAB_148486428;
  local_3d0 = 0;
  local_3c8 = &local_3a8;
  local_3b8 = param_1;
  local_3b0 = &local_378;
  FUN_1401f8d10(L"ParallelFor Task",
                *(int *)((longlong)param_1 + 0x14) * (int)param_1[2] * (int)param_1[3],1);
  iVar5 = *(int *)(param_2 + 0x50);
  if (0 < iVar5) {
    do {
      lVar10 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar11 >> 9) * 8);
      uVar14 = (ulonglong)(uVar11 & 0x1ff);
      fVar16 = *(float *)(param_1 + 4);
      fVar18 = ((float)*(double *)(lVar10 + uVar14 * 0x18) - *(float *)((longlong)param_1 + 0x24)) /
               fVar16;
      uVar6 = (uint)ROUND(fVar18 + fVar18 + -0.5);
      iVar7 = (int)uVar6 >> 1;
      fVar18 = ((float)*(double *)(lVar10 + 8 + uVar14 * 0x18) - *(float *)(param_1 + 5)) / fVar16;
      uVar8 = (uint)ROUND(fVar18 + fVar18 + -0.5);
      iVar9 = (int)uVar8 >> 1;
      fVar16 = ((float)*(double *)(lVar10 + 0x10 + uVar14 * 0x18) -
               *(float *)((longlong)param_1 + 0x2c)) / fVar16;
      uVar12 = (uint)ROUND(fVar16 + fVar16 + -0.5);
      iVar13 = (int)uVar12 >> 1;
      if ((((-1 < (int)(uVar8 | uVar6 | uVar12) >> 1) && (iVar7 < (int)*plVar1)) &&
          (iVar9 < *(int *)((longlong)param_1 + 0x14))) && (iVar13 < (int)param_1[3])) {
        lVar10 = (longlong)
                 ((*(int *)((longlong)param_1 + 0x14) * iVar13 + iVar9) * (int)*plVar1 + iVar7);
        if (*(int *)(*param_1 + lVar10 * 4) == 0) {
          *(undefined4 *)(*param_1 + lVar10 * 4) = 1;
          iVar5 = *(int *)(param_2 + 0x50);
        }
      }
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < iVar5);
  }
  FUN_14848523e(&local_378);
  local_178 = 0;
  if (local_180 != 0) {
    FUN_1400020a8();
  }
  FUN_146bddd50(&local_1c0);
  FUN_1457e5b52(local_158);
  if ((local_80 ^ (ulonglong)auStack_3f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1484705bc FUN_1484705bc body=32 status=ok
// SIG undefined FUN_1484705bc(void)

undefined8 * FUN_1484705bc(undefined8 *param_1)

{
  FUN_1484705dc();
  *param_1 = &PTR_FUN_14aee42e0;
  return param_1;
}



// FUNCTION 1484705dc FUN_1484705dc body=499 status=ok
// SIG undefined FUN_1484705dc(void)

undefined8 * FUN_1484705dc(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  
  FUN_14845abbc();
  *param_1 = &PTR_LAB_14aee4320;
  uVar9 = param_3[1];
  uVar5 = *(undefined4 *)(param_3 + 2);
  uVar6 = *(undefined4 *)((longlong)param_3 + 0x14);
  uVar7 = *(undefined4 *)(param_3 + 3);
  uVar8 = *(undefined4 *)((longlong)param_3 + 0x1c);
  param_1[0x11] = *param_3;
  param_1[0x12] = uVar9;
  *(undefined4 *)(param_1 + 0x13) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar6;
  *(undefined4 *)(param_1 + 0x14) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar8;
  param_1[0x15] = param_3[4];
  lVar2 = param_3[5];
  param_1[0x16] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[0x17] = param_3[6];
  param_1[0x18] = param_3[7];
  lVar2 = param_3[8];
  param_1[0x19] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[0x1a] = param_3[9];
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  FUN_146c005f0(param_1[1],param_2,1,1,1,1);
  FUN_14051b394(param_1 + 0x1b,*(int *)(param_1[1] + 0x20) * 0x200 + *(int *)(param_1[1] + 0x24),1);
  lVar2 = param_1[1];
  uVar11 = *(int *)(lVar2 + 0x20) * 0x200 + *(int *)(lVar2 + 0x24);
  uVar14 = 0;
  if ((uVar11 != 0) &&
     (uVar14 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar2 + 0x28) - 1U))) {
    uVar12 = 1;
    uVar13 = 1;
    if (1 < (int)uVar11) {
      uVar12 = uVar11;
    }
    do {
      uVar14 = uVar12;
      if (uVar12 == uVar13) break;
      uVar15 = uVar13 >> 9;
      uVar16 = uVar13 & 0x1ff;
      uVar14 = uVar13;
      uVar13 = uVar13 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar2 + 0x28))[uVar15] +
                                         (ulonglong)uVar16 * 2) - 1U));
  }
  do {
    if (uVar14 == uVar11) {
      return param_1;
    }
    lVar3 = param_1[0x1b];
    lVar4 = *(longlong *)(*(longlong *)(param_1[1] + 0x10) + (ulonglong)(uVar14 >> 9) * 8);
    puVar1 = (undefined8 *)(lVar4 + (ulonglong)(uVar14 & 0x1ff) * 0x18);
    uVar9 = *puVar1;
    uVar10 = puVar1[1];
    *(undefined8 *)(lVar3 + 0x10 + (longlong)(int)uVar14 * 0x18) =
         *(undefined8 *)(lVar4 + 0x10 + (ulonglong)(uVar14 & 0x1ff) * 0x18);
    puVar1 = (undefined8 *)(lVar3 + (longlong)(int)uVar14 * 0x18);
    *puVar1 = uVar9;
    puVar1[1] = uVar10;
    uVar12 = uVar14 + 1;
    if ((int)(uVar14 + 1) < (int)uVar11) {
      uVar12 = uVar11;
    }
    uVar13 = uVar14;
    do {
      uVar14 = uVar12;
      if (uVar12 - 1 == uVar13) break;
      uVar14 = uVar13 + 1;
      uVar13 = uVar14;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(lVar2 + 0x28) +
                                           (ulonglong)(uVar14 >> 9) * 8) +
                                         (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
  } while( true );
}



// FUNCTION 1484707d0 FUN_1484707d0 body=32 status=ok
// SIG undefined FUN_1484707d0(void)

undefined8 * FUN_1484707d0(undefined8 *param_1)

{
  FUN_1484707f0();
  *param_1 = &PTR_FUN_14aee42e0;
  return param_1;
}



// FUNCTION 1484707f0 FUN_1484707f0 body=650 status=ok
// SIG undefined FUN_1484707f0(void)

undefined8 *
FUN_1484707f0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  
  FUN_14845abbc();
  *param_1 = &PTR_LAB_14aee4320;
  uVar9 = param_3[1];
  uVar8 = *(undefined4 *)(param_3 + 2);
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x14);
  uVar6 = *(undefined4 *)(param_3 + 3);
  uVar7 = *(undefined4 *)((longlong)param_3 + 0x1c);
  param_1[0x11] = *param_3;
  param_1[0x12] = uVar9;
  *(undefined4 *)(param_1 + 0x13) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar5;
  *(undefined4 *)(param_1 + 0x14) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar7;
  param_1[0x15] = param_3[4];
  lVar10 = param_3[5];
  param_1[0x16] = lVar10;
  if (lVar10 != 0) {
    LOCK();
    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
    UNLOCK();
  }
  param_1[0x17] = param_3[6];
  param_1[0x18] = param_3[7];
  lVar10 = param_3[8];
  param_1[0x19] = lVar10;
  if (lVar10 != 0) {
    LOCK();
    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
    UNLOCK();
  }
  param_1[0x1a] = param_3[9];
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  uVar9 = FUN_14001cc68(0x220,0x10);
  FUN_146bff712(uVar9,param_2);
  puVar2 = (undefined8 *)param_1[0x1d];
  param_1[0x1d] = uVar9;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  lVar10 = FUN_14001cc68(0x220,0x10);
  FUN_146bff712(lVar10,param_4 + 8);
  puVar2 = (undefined8 *)param_1[1];
  param_1[1] = lVar10;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
    lVar10 = param_1[1];
  }
  iVar14 = *(int *)(lVar10 + 0x20) * 0x200 + *(int *)(lVar10 + 0x24);
  FUN_14051b394(param_1 + 0x1b,iVar14,1);
  FUN_144a1a59e(param_1 + 0x1e,iVar14,1);
  lVar10 = param_1[1];
  uVar15 = *(int *)(lVar10 + 0x20) * 0x200 + *(int *)(lVar10 + 0x24);
  uVar17 = 0;
  if ((uVar15 != 0) &&
     (uVar17 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar10 + 0x28) - 1U))) {
    uVar18 = 1;
    uVar11 = 1;
    if (1 < (int)uVar15) {
      uVar18 = uVar15;
    }
    do {
      uVar17 = uVar18;
      if (uVar18 == uVar11) break;
      uVar12 = uVar11 >> 9;
      uVar16 = uVar11 & 0x1ff;
      uVar17 = uVar11;
      uVar11 = uVar11 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar10 + 0x28))[uVar12] +
                                         (ulonglong)uVar16 * 2) - 1U));
  }
  if (uVar17 != uVar15) {
    do {
      lVar3 = param_1[0x1b];
      lVar4 = *(longlong *)(*(longlong *)(param_1[1] + 0x10) + (ulonglong)(uVar17 >> 9) * 8);
      lVar13 = (longlong)(int)uVar17;
      puVar1 = (undefined4 *)(lVar4 + (ulonglong)(uVar17 & 0x1ff) * 0x18);
      uVar8 = *puVar1;
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      *(undefined8 *)(lVar3 + 0x10 + lVar13 * 0x18) =
           *(undefined8 *)(lVar4 + 0x10 + (ulonglong)(uVar17 & 0x1ff) * 0x18);
      puVar1 = (undefined4 *)(lVar3 + lVar13 * 0x18);
      *puVar1 = uVar8;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
      uVar8 = FUN_146be9b2a(param_4 + 0x228,uVar17);
      *(undefined4 *)(param_1[0x1e] + lVar13 * 4) = uVar8;
      uVar18 = uVar17 + 1;
      if ((int)(uVar17 + 1) < (int)uVar15) {
        uVar18 = uVar15;
      }
      do {
        uVar11 = uVar18;
        if (uVar18 - 1 == uVar17) break;
        uVar17 = uVar17 + 1;
        uVar11 = uVar17;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar10 + 0x28) +
                                             (ulonglong)(uVar17 >> 9) * 8) +
                                           (ulonglong)(uVar17 & 0x1ff) * 2) - 1U));
      uVar17 = uVar11;
    } while (uVar17 != uVar15);
  }
  return param_1;
}



// FUNCTION 148470a7a FUN_148470a7a body=125 status=ok
// SIG undefined FUN_148470a7a(void)

double FUN_148470a7a(longlong param_1,uint param_2)

{
  float *pfVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = (double)*(float *)(param_1 + 0x94);
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    pfVar1 = *(float **)(param_1 + 0xc0);
    if ((-1 < (int)param_2) && ((int)param_2 < (int)pfVar1[4])) {
      pfVar1 = (float *)((ulonglong)param_2 * 4 + *(longlong *)(pfVar1 + 2));
    }
    dVar3 = 0.0;
    if (0.0 <= *pfVar1) {
      dVar4 = (double)*pfVar1;
      dVar3 = 1.0;
      if (dVar4 <= 1.0) {
        dVar3 = dVar4;
      }
    }
    dVar4 = 0.0;
    if (0.0 <= dVar3) {
      dVar4 = dVar3;
    }
    dVar2 = dVar4 * dVar2 + (1.0 - dVar4) * (double)*(float *)(param_1 + 0xd4) * dVar2;
  }
  return dVar2;
}



// FUNCTION 148470af8 FUN_148470af8 body=93 status=ok
// SIG undefined FUN_148470af8(void)

void FUN_148470af8(undefined8 param_1,char *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  FUN_148470b56();
  if (param_2 != (char *)0x0) {
    if (*param_2 == '\0') {
      pcVar1 = *(code **)(param_2 + 0x70);
      plVar4 = (longlong *)(param_2 + 0x90);
      if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
        plVar4 = *(longlong **)(param_2 + 0x80);
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      cVar2 = (*pcVar1)(uVar3);
      *param_2 = cVar2;
      if (cVar2 == '\0') goto LAB_148470b46;
    }
    return;
  }
LAB_148470b46:
  FUN_148470fd2(param_1);
  return;
}



// FUNCTION 148470b56 FUN_148470b56 body=1146 status=ok
// SIG undefined FUN_148470b56(void)

void FUN_148470b56(longlong param_1,char *param_2)

{
  undefined4 *puVar1;
  double *pdVar2;
  double dVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char cVar12;
  undefined8 uVar13;
  uint uVar14;
  longlong lVar15;
  longlong *plVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  double dVar22;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  double local_a8;
  double dStack_a0;
  double local_98;
  longlong *local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar7 = (*(byte *)(param_1 + 0x9a) ^ 1) * 5;
  if (param_2 == (char *)0x0) {
    FUN_14839842a(&local_88,iVar7,*(undefined8 *)(param_1 + 8));
LAB_148470c45:
    if (0.0001 <= *(float *)(param_1 + 0x94)) {
      if (*(float *)(param_1 + 0x94) <= 10000.0) {
        lVar5 = *(longlong *)(param_1 + 8);
        uVar14 = *(int *)(lVar5 + 0x20) * 0x200 + *(int *)(lVar5 + 0x24);
        uVar19 = 0;
        if ((uVar14 != 0) &&
           (uVar19 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar5 + 0x28) - 1U))) {
          uVar17 = 1;
          uVar18 = 1;
          if (1 < (int)uVar14) {
            uVar17 = uVar14;
          }
          do {
            uVar19 = uVar17;
            if (uVar17 == uVar18) break;
            uVar20 = uVar18 >> 9;
            uVar21 = uVar18 & 0x1ff;
            uVar19 = uVar18;
            uVar18 = uVar18 + 1;
          } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar5 + 0x28))[uVar20] +
                                               (ulonglong)uVar21 * 2) - 1U));
        }
        if (uVar19 != uVar14) {
          do {
            lVar6 = *(longlong *)
                     (*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) +
                     (ulonglong)(uVar19 >> 9) * 8);
            local_98 = *(double *)(lVar6 + 0x10 + (ulonglong)(uVar19 & 0x1ff) * 0x18);
            pdVar2 = (double *)(lVar6 + (ulonglong)(uVar19 & 0x1ff) * 0x18);
            local_a8 = *pdVar2;
            dStack_a0 = pdVar2[1];
            dVar22 = (double)FUN_148470a7a(param_1,uVar19);
            dVar3 = *(double *)(param_1 + 0xb8);
            if ((dVar3 != 0.0) || (NAN(dVar3))) {
              lVar6 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 8);
              lVar15 = (longlong)(int)uVar19;
              local_a8 = dVar3 * *(double *)(lVar6 + lVar15 * 0x18) + local_a8;
              dStack_a0 = *(double *)(lVar6 + 8 + lVar15 * 0x18) * dVar3 + dStack_a0;
              local_98 = *(double *)(lVar6 + 0x10 + lVar15 * 0x18) * dVar3 + local_98;
            }
            local_b8 = 0;
            (**(code **)(*local_88 + 8))
                      (local_88,uVar19,
                       -(ulonglong)(dVar22 < 9.999999974752427e-07) & 0x412e847e00000000 |
                       ~-(ulonglong)(dVar22 < 9.999999974752427e-07) & (ulonglong)(1.0 / dVar22),
                       &local_a8);
            uVar17 = uVar19 + 1;
            if ((int)(uVar19 + 1) < (int)uVar14) {
              uVar17 = uVar14;
            }
            do {
              uVar18 = uVar17;
              if (uVar17 - 1 == uVar19) break;
              uVar19 = uVar19 + 1;
              uVar18 = uVar19;
            } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                   (*(longlong *)(lVar5 + 0x28) +
                                                   (ulonglong)(uVar19 >> 9) * 8) +
                                                 (ulonglong)(uVar19 & 0x1ff) * 2) - 1U));
            uVar19 = uVar18;
          } while (uVar19 != uVar14);
        }
        if (param_2 != (char *)0x0) {
          if (*param_2 == '\0') {
            pcVar4 = *(code **)(param_2 + 0x70);
            plVar16 = (longlong *)(param_2 + 0x90);
            if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
              plVar16 = *(longlong **)(param_2 + 0x80);
            }
            uVar13 = (**(code **)(*plVar16 + 8))();
            cVar12 = (*pcVar4)(uVar13);
            *param_2 = cVar12;
            if (cVar12 == '\0') goto LAB_148470dc9;
          }
          goto LAB_148470d69;
        }
      }
LAB_148470dc9:
      (**(code **)(*local_88 + 0x40))(local_88,param_1 + 0xd8);
    }
    else {
      lVar5 = *(longlong *)(param_1 + 8);
      uVar14 = *(int *)(lVar5 + 0x20) * 0x200 + *(int *)(lVar5 + 0x24);
      uVar19 = 0;
      if ((uVar14 != 0) &&
         (uVar19 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar5 + 0x28) - 1U))) {
        uVar17 = 1;
        uVar18 = 1;
        if (1 < (int)uVar14) {
          uVar17 = uVar14;
        }
        do {
          uVar19 = uVar17;
          if (uVar17 == uVar18) break;
          uVar20 = uVar18 >> 9;
          uVar21 = uVar18 & 0x1ff;
          uVar19 = uVar18;
          uVar18 = uVar18 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar5 + 0x28))[uVar20] +
                                             (ulonglong)uVar21 * 2) - 1U));
      }
LAB_148470d61:
      if (uVar19 != uVar14) {
        lVar6 = *(longlong *)(param_1 + 0xd8);
        lVar15 = *(longlong *)
                  (*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + (ulonglong)(uVar19 >> 9) * 8);
        puVar1 = (undefined4 *)(lVar15 + (ulonglong)(uVar19 & 0x1ff) * 0x18);
        uVar8 = *puVar1;
        uVar9 = puVar1[1];
        uVar10 = puVar1[2];
        uVar11 = puVar1[3];
        *(undefined8 *)(lVar6 + 0x10 + (longlong)(int)uVar19 * 0x18) =
             *(undefined8 *)(lVar15 + 0x10 + (ulonglong)(uVar19 & 0x1ff) * 0x18);
        puVar1 = (undefined4 *)(lVar6 + (longlong)(int)uVar19 * 0x18);
        *puVar1 = uVar8;
        puVar1[1] = uVar9;
        puVar1[2] = uVar10;
        puVar1[3] = uVar11;
        uVar17 = uVar19 + 1;
        if ((int)(uVar19 + 1) < (int)uVar14) {
          uVar17 = uVar14;
        }
        uVar18 = uVar19;
        do {
          uVar19 = uVar17;
          if (uVar17 - 1 == uVar18) break;
          uVar19 = uVar18 + 1;
          uVar18 = uVar19;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar5 + 0x28) +
                                               (ulonglong)(uVar19 >> 9) * 8) +
                                             (ulonglong)(uVar19 & 0x1ff) * 2) - 1U));
        goto LAB_148470d61;
      }
    }
  }
  else {
    if (*param_2 != '\0') goto LAB_148470d7d;
    pcVar4 = *(code **)(param_2 + 0x70);
    plVar16 = *(longlong **)(param_2 + 0x80);
    if (*(longlong **)(param_2 + 0x80) == (longlong *)0x0) {
      plVar16 = (longlong *)(param_2 + 0x90);
    }
    uVar13 = (**(code **)(*plVar16 + 8))();
    cVar12 = (*pcVar4)(uVar13);
    *param_2 = cVar12;
    if (cVar12 != '\0') goto LAB_148470d7d;
    FUN_14839842a(&local_88,iVar7,*(undefined8 *)(param_1 + 8));
    if (*param_2 == '\0') {
      pcVar4 = *(code **)(param_2 + 0x70);
      plVar16 = (longlong *)(param_2 + 0x90);
      if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
        plVar16 = *(longlong **)(param_2 + 0x80);
      }
      uVar13 = (**(code **)(*plVar16 + 8))(plVar16);
      cVar12 = (*pcVar4)(uVar13);
      *param_2 = cVar12;
      if (cVar12 == '\0') goto LAB_148470c45;
    }
  }
LAB_148470d69:
  if (local_88 != (longlong *)0x0) {
    (**(code **)*local_88)(local_88,1);
  }
LAB_148470d7d:
  if ((local_80 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148470fd2 FUN_148470fd2 body=933 status=ok
// SIG undefined FUN_148470fd2(void)

void FUN_148470fd2(longlong param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar9 = *(longlong *)(param_1 + 0xe8);
  if (lVar9 == 0) {
    lVar9 = *(longlong *)(param_1 + 8);
    uVar10 = *(int *)(lVar9 + 0x20) * 0x200 + *(int *)(lVar9 + 0x24);
    uVar13 = 0;
    if ((uVar10 != 0) &&
       (uVar13 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar9 + 0x28) - 1U))) {
      uVar14 = 1;
      uVar6 = 1;
      if (1 < (int)uVar10) {
        uVar14 = uVar10;
      }
      do {
        uVar13 = uVar14;
        if (uVar14 == uVar6) break;
        uVar7 = uVar6 >> 9;
        uVar12 = uVar6 & 0x1ff;
        uVar13 = uVar6;
        uVar6 = uVar6 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar9 + 0x28))[uVar7] +
                                           (ulonglong)uVar12 * 2) - 1U));
    }
    if (uVar13 != uVar10) {
      do {
        uStack_48 = *(undefined8 *)
                     (*(longlong *)(param_1 + 0xd8) + 0x10 + (longlong)(int)uVar13 * 0x18);
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0xd8) + (longlong)(int)uVar13 * 0x18);
        local_58 = *plVar1;
        uStack_50 = plVar1[1];
        lVar5 = *(longlong *)(param_1 + 8);
        cVar4 = FUN_146bfed03(&local_58);
        if (cVar4 != '\0') {
          lVar8 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + (ulonglong)(uVar13 >> 9) * 8);
          *(undefined8 *)(lVar8 + 0x10 + (ulonglong)(uVar13 & 0x1ff) * 0x18) = uStack_48;
          puVar2 = (undefined4 *)(lVar8 + (ulonglong)(uVar13 & 0x1ff) * 0x18);
          *puVar2 = (undefined4)local_58;
          puVar2[1] = local_58._4_4_;
          puVar2[2] = (undefined4)uStack_50;
          puVar2[3] = uStack_50._4_4_;
          if (*(char *)(lVar5 + 0x210) == '\x01') {
            LOCK();
            *(int *)(lVar5 + 0x214) = *(int *)(lVar5 + 0x214) + 1;
            UNLOCK();
          }
        }
        uVar14 = uVar13 + 1;
        if ((int)(uVar13 + 1) < (int)uVar10) {
          uVar14 = uVar10;
        }
        do {
          uVar6 = uVar14;
          if (uVar14 - 1 == uVar13) break;
          uVar13 = uVar13 + 1;
          uVar6 = uVar13;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar9 + 0x28) +
                                               (ulonglong)(uVar13 >> 9) * 8) +
                                             (ulonglong)(uVar13 & 0x1ff) * 2) - 1U));
        uVar13 = uVar6;
      } while (uVar13 != uVar10);
    }
    goto LAB_148471256;
  }
  uVar10 = *(int *)(lVar9 + 0x20) * 0x200 + *(int *)(lVar9 + 0x24);
  uVar13 = 0;
  if ((uVar10 != 0) &&
     (uVar13 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar9 + 0x28) - 1U))) {
    uVar14 = 1;
    uVar6 = 1;
    if (1 < (int)uVar10) {
      uVar14 = uVar10;
    }
    do {
      uVar13 = uVar14;
      if (uVar14 == uVar6) break;
      uVar7 = uVar6 >> 9;
      uVar12 = uVar6 & 0x1ff;
      uVar13 = uVar6;
      uVar6 = uVar6 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar9 + 0x28))[uVar7] +
                                         (ulonglong)uVar12 * 2) - 1U));
  }
  if (uVar13 != uVar10) {
LAB_148471032:
    if ((longlong)*(int *)(param_1 + 0xf8) != 0) {
      lVar5 = (longlong)*(int *)(param_1 + 0xf8) * 4;
      lVar8 = 0;
      do {
        if (*(uint *)(*(longlong *)(param_1 + 0xf0) + lVar8) == uVar13) {
          lVar8 = 0;
          goto LAB_1484710a5;
        }
        lVar8 = lVar8 + 4;
      } while (lVar5 != lVar8);
    }
    goto LAB_14847105a;
  }
  goto LAB_148471234;
  while( true ) {
    lVar8 = lVar8 + 1;
    lVar5 = lVar5 + -4;
    if (lVar5 == 0) break;
LAB_1484710a5:
    if (*(uint *)(*(longlong *)(param_1 + 0xf0) + lVar8 * 4) == uVar13) goto LAB_1484710bb;
  }
  lVar8 = -1;
LAB_1484710bb:
  uStack_48 = *(undefined8 *)(*(longlong *)(param_1 + 0xd8) + 0x10 + (longlong)(int)lVar8 * 0x18);
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0xd8) + (longlong)(int)lVar8 * 0x18);
  local_58 = *plVar1;
  uStack_50 = plVar1[1];
  lVar5 = *(longlong *)(param_1 + 0xe8);
  cVar4 = FUN_146bfed03(&local_58);
  if (cVar4 != '\0') {
    lVar8 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + (ulonglong)(uVar13 >> 9) * 8);
    *(undefined8 *)(lVar8 + 0x10 + (ulonglong)(uVar13 & 0x1ff) * 0x18) = uStack_48;
    puVar2 = (undefined4 *)(lVar8 + (ulonglong)(uVar13 & 0x1ff) * 0x18);
    *puVar2 = (undefined4)local_58;
    puVar2[1] = local_58._4_4_;
    puVar2[2] = (undefined4)uStack_50;
    puVar2[3] = uStack_50._4_4_;
    if (*(char *)(lVar5 + 0x210) == '\x01') {
      LOCK();
      *(int *)(lVar5 + 0x214) = *(int *)(lVar5 + 0x214) + 1;
      UNLOCK();
    }
  }
LAB_14847105a:
  uVar14 = uVar13 + 1;
  if ((int)(uVar13 + 1) < (int)uVar10) {
    uVar14 = uVar10;
  }
  do {
    uVar6 = uVar14;
    if (uVar14 - 1 == uVar13) break;
    uVar13 = uVar13 + 1;
    uVar6 = uVar13;
  } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                         (*(longlong *)(lVar9 + 0x28) + (ulonglong)(uVar13 >> 9) * 8
                                         ) + (ulonglong)(uVar13 & 0x1ff) * 2) - 1U));
  uVar13 = uVar6;
  if (uVar13 == uVar10) goto LAB_14847122d;
  goto LAB_148471032;
LAB_14847122d:
  lVar9 = *(longlong *)(param_1 + 0xe8);
LAB_148471234:
  puVar3 = *(undefined8 **)(param_1 + 8);
  *(longlong *)(param_1 + 8) = lVar9;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
LAB_148471256:
  lVar9 = *(longlong *)(param_1 + 8);
  lVar5 = *(longlong *)(lVar9 + 0x208);
  if (lVar5 == 0) {
    FUN_146c38c5e(lVar9,0);
  }
  else {
    uStack_50 = 0;
    uStack_48 = 0;
    if (*(int *)(lVar5 + 0x38) < 1) {
      uVar11 = 0;
    }
    else {
      uVar11 = **(undefined8 **)(lVar5 + 0x30);
    }
    local_58 = lVar9;
    FUN_146c383fc(&local_58,uVar11,1,1);
    FUN_146c378c6(&local_58,uVar11,0);
    if (uStack_50 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148471378 FUN_148471378 body=32 status=ok
// SIG undefined FUN_148471378(void)

undefined8 * FUN_148471378(undefined8 *param_1)

{
  FUN_1484705dc();
  *param_1 = &PTR_FUN_14aee4300;
  return param_1;
}



// FUNCTION 148471398 FUN_148471398 body=32 status=ok
// SIG undefined FUN_148471398(void)

undefined8 * FUN_148471398(undefined8 *param_1)

{
  FUN_1484707f0();
  *param_1 = &PTR_FUN_14aee4300;
  return param_1;
}



// FUNCTION 1484713b8 FUN_1484713b8 body=222 status=ok
// SIG undefined FUN_1484713b8(void)

void FUN_1484713b8(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  longlong local_30;
  longlong local_28;
  undefined1 *local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x98) == '\x01') {
    local_30 = param_1 + 0xd8;
    local_38 = *(undefined4 *)(param_1 + 0x90);
    if (*(char *)(param_1 + 0x9a) == '\0') {
      uVar1 = 5;
    }
    else {
      uVar1 = 3;
    }
    FUN_1483a1c49(uVar1,*(undefined8 *)(param_1 + 8),(double)*(float *)(param_1 + 0x88),
                  0x3ff0000000000000);
  }
  else {
    local_30 = param_1 + 0xd8;
    local_38 = *(undefined4 *)(param_1 + 0x90);
    local_18 = &local_28;
    local_20 = &LAB_143b6070e;
    local_28 = param_1;
    FUN_1483a1e68(*(char *)(param_1 + 0x9a),CONCAT71(0x143b607,*(undefined1 *)(param_1 + 0x99)),
                  *(undefined8 *)(param_1 + 8));
  }
  FUN_148470fd2(param_1);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14847151a FUN_14847151a body=20 status=ok
// SIG undefined FUN_14847151a(void)

void FUN_14847151a(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_1 + 0x10);
  for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}



// FUNCTION 148471530 FUN_148471530 body=20 status=ok
// SIG undefined FUN_148471530(void)

void FUN_148471530(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_1 + 0x10);
  for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}



// FUNCTION 148471544 FUN_148471544 body=55 status=ok
// SIG undefined FUN_148471544(void)

void FUN_148471544(longlong param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x60) = *param_2;
  FUN_148486ad2(param_1 + 0x68,param_2 + 2);
  FUN_148486b32(param_1 + 0x78,param_2 + 6);
  return;
}



// FUNCTION 14847157c FUN_14847157c body=38 status=ok
// SIG undefined FUN_14847157c(void)

undefined8 FUN_14847157c(undefined8 param_1,int param_2)

{
  FUN_148486ce2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484715a2 FUN_1484715a2 body=45 status=ok
// SIG undefined FUN_1484715a2(void)

longlong FUN_1484715a2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14594956a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484715d0 FUN_1484715d0 body=45 status=ok
// SIG undefined FUN_1484715d0(void)

longlong FUN_1484715d0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c21572(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484715fe FUN_1484715fe body=45 status=ok
// SIG undefined FUN_1484715fe(void)

longlong FUN_1484715fe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145e099d6(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14847162c FUN_14847162c body=38 status=ok
// SIG undefined FUN_14847162c(void)

undefined8 FUN_14847162c(undefined8 param_1,int param_2)

{
  FUN_148486e1e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148471652 FUN_148471652 body=38 status=ok
// SIG undefined FUN_148471652(void)

undefined8 FUN_148471652(undefined8 param_1,int param_2)

{
  FUN_148486e1e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14847167c FUN_14847167c body=38 status=ok
// SIG undefined FUN_14847167c(void)

undefined8 FUN_14847167c(undefined8 param_1,int param_2)

{
  FUN_14845b4d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484716a2 FUN_1484716a2 body=69 status=ok
// SIG undefined FUN_1484716a2(void)

undefined8 * FUN_1484716a2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aee4ca8;
  FUN_148360edd(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484716ec FUN_1484716ec body=122 status=ok
// SIG undefined FUN_1484716ec(void)

longlong FUN_1484716ec(longlong param_1,longlong param_2)

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
    FUN_148471766(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148471766 FUN_148471766 body=121 status=ok
// SIG undefined FUN_148471766(void)

undefined8 * FUN_148471766(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1482f6082(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140549c28(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x28);
    }
  }
  return param_1;
}



// FUNCTION 1484717e0 FUN_1484717e0 body=98 status=ok
// SIG undefined FUN_1484717e0(void)

void FUN_1484717e0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148471842 FUN_148471842 body=45 status=ok
// SIG undefined FUN_148471842(void)

void FUN_148471842(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      lVar1 = *(longlong *)(param_2 + 8 + lVar2);
      *(longlong *)(param_1 + 8 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148471870 FUN_148471870 body=77 status=ok
// SIG undefined FUN_148471870(void)

undefined8 * FUN_148471870(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1484717e0(param_1,iVar1,0);
    FUN_148471842(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1484718be FUN_1484718be body=48 status=ok
// SIG undefined FUN_1484718be(void)

undefined8 * FUN_1484718be(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aee4f78;
  FUN_146bd8050();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484718ee FUN_1484718ee body=111 status=ok
// SIG undefined FUN_1484718ee(void)

void FUN_1484718ee(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar1 < 6) {
    *(undefined4 *)(param_1 + 0x18) = 6;
    if ((uint)(*(int *)(param_1 + 0x1c) - iVar1) < 6U - iVar1) {
      FUN_148472e8a(param_1);
    }
    memset((void *)(param_1 + (longlong)iVar1 * 4),0,(ulonglong)(6U - iVar1) << 2);
    return;
  }
  if (iVar1 == 6) {
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 6;
  FUN_148472eaa(param_1);
  return;
}



// FUNCTION 14847195e FUN_14847195e body=5419 status=ok
// SIG undefined FUN_14847195e(void)

void FUN_14847195e(longlong param_1)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  double dVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  undefined4 uVar13;
  char *pcVar14;
  ulonglong uVar15;
  uint uVar16;
  int *piVar17;
  char *pcVar18;
  ulonglong uVar19;
  undefined4 uVar20;
  uint *puVar21;
  ulonglong uVar22;
  char cVar23;
  undefined8 *puVar24;
  longlong lVar25;
  undefined8 uVar26;
  longlong lVar27;
  ulonglong uVar28;
  double dVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auStack_298 [32];
  float local_278;
  undefined4 local_270;
  ulonglong local_260;
  ulonglong local_258;
  ulonglong local_250;
  char *local_248;
  longlong local_240;
  longlong local_238;
  int *local_230;
  int *local_228;
  int *local_220;
  int *local_218;
  longlong local_210;
  int *local_208;
  int *local_200;
  int *local_1f8;
  double *local_1f0;
  double *local_1e8;
  double local_1e0;
  double local_1d8;
  int local_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  double dStack_1b8;
  char local_1ac [4];
  undefined8 local_1a8;
  float fStack_1a0;
  undefined4 uStack_19c;
  double local_198 [4];
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  uint local_148;
  uint uStack_144;
  uint uStack_140;
  uint uStack_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  int local_118 [4];
  int local_108 [4];
  int local_f8 [4];
  int local_e8 [10];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  local_e8[4] = 0xffffffff;
  local_e8[5] = 0xffffffff;
  local_e8[6] = 0xffffffff;
  local_e8[7] = 0xffffffff;
  local_e8[0] = -1;
  local_e8[1] = 0xffffffff;
  local_e8[2] = 0xffffffff;
  local_e8[3] = 0xffffffff;
  local_218 = &local_1cc;
  local_230 = local_f8;
  local_228 = local_108;
  local_220 = local_118;
  local_1f0 = &local_1d8;
  local_1e8 = &local_1e0;
  local_260 = param_1 + 0xa0;
  local_240 = param_1 + 0xb8;
  dVar2 = *(double *)(param_1 + 0xb8);
  dVar3 = *(double *)(param_1 + 0xc0);
  dVar38 = *(double *)(param_1 + 200);
  dVar37 = dVar38 + dVar38;
  dVar6 = dVar3 + dVar3;
  dVar4 = *(double *)(param_1 + 0xd0);
  dVar29 = dVar37 * dVar2 - dVar6 * dVar4;
  local_128 = (float)dVar29;
  local_12c = (float)(dVar37 * dVar4 + dVar6 * dVar2);
  local_130 = (float)(1.0 - (dVar3 * dVar6 + dVar38 * dVar37));
  auVar39._4_4_ = unaff_XMM8_Db;
  auVar39._0_4_ = local_12c;
  auVar39._8_4_ = unaff_XMM8_Dc;
  auVar39._12_4_ = unaff_XMM8_Dd;
  auVar39 = insertps(ZEXT416((uint)local_130),auVar39,0x10);
  auVar40._4_4_ = (int)((ulonglong)dVar29 >> 0x20);
  auVar40._0_4_ = local_128;
  auVar40._8_8_ = 0;
  auVar40 = insertps(auVar39,auVar40,0x20);
  local_124 = (float)(dVar6 * dVar2 - dVar37 * dVar4);
  auVar40 = insertps(auVar40,ZEXT416((uint)local_124),0x30);
  puVar21 = &local_148;
  local_148 = auVar40._0_4_ ^ 0x80000000;
  uStack_144 = auVar40._4_4_ ^ 0x80000000;
  uStack_140 = auVar40._8_4_ ^ 0x80000000;
  uStack_13c = auVar40._12_4_ ^ 0x80000000;
  local_11c = (float)(dVar37 * dVar3 + dVar4 * (dVar2 + dVar2));
  local_120 = (float)(1.0 - ((dVar2 + dVar2) * dVar2 + dVar38 * dVar37));
  local_138 = -local_120;
  local_134 = -local_11c;
  pcVar14 = (char *)(param_1 + 0xf0);
  local_258 = param_1 + 8;
  piVar17 = &DAT_14aee4f90;
  uVar15 = 0;
  local_248 = pcVar14;
  local_238 = param_1;
  local_210 = param_1;
  local_208 = local_230;
  local_200 = local_228;
  local_1f8 = local_220;
  do {
    iVar12 = (int)uVar15;
    uVar20 = *(undefined4 *)(param_1 + 0xf8 + (longlong)*piVar17 * 4);
    uVar28 = (ulonglong)(iVar12 + 3U & 3);
    if ((*(char *)(param_1 + 0xf0 + uVar15) != '\x01') || (pcVar14[uVar28] == '\0')) {
      local_1cc = iVar12;
      if (local_e8[uVar15] < 0) {
        FUN_1483ad9de(local_260,&local_1a8,uVar15 & 0xffffffff);
        iVar5 = *(int *)(param_1 + 0x10);
        *(uint *)(param_1 + 0x10) = iVar5 + 1U;
        if (*(uint *)(param_1 + 0x14) < iVar5 + 1U) {
          FUN_1403e3958(local_258,iVar5);
        }
        lVar25 = *(longlong *)(param_1 + 8);
        *(double *)(lVar25 + 0x10 + (longlong)iVar5 * 0x18) = local_198[0];
        puVar1 = (undefined4 *)(lVar25 + (longlong)iVar5 * 0x18);
        *puVar1 = (float)local_1a8;
        puVar1[1] = local_1a8._4_4_;
        puVar1[2] = fStack_1a0;
        puVar1[3] = uStack_19c;
        local_e8[uVar15] = *(int *)(param_1 + 0x10) + -1;
        pcVar14 = local_248;
      }
      if (local_e8[uVar28] < 0) {
        FUN_1483ad9de(local_260,&local_1a8,uVar28);
        iVar5 = *(int *)(param_1 + 0x10);
        *(uint *)(param_1 + 0x10) = iVar5 + 1U;
        if (*(uint *)(param_1 + 0x14) < iVar5 + 1U) {
          FUN_1403e3958(local_258,iVar5);
        }
        lVar25 = *(longlong *)(param_1 + 8);
        *(double *)(lVar25 + 0x10 + (longlong)iVar5 * 0x18) = local_198[0];
        puVar1 = (undefined4 *)(lVar25 + (longlong)iVar5 * 0x18);
        *puVar1 = (float)local_1a8;
        puVar1[1] = local_1a8._4_4_;
        puVar1[2] = fStack_1a0;
        puVar1[3] = uStack_19c;
        local_e8[uVar28] = *(int *)(param_1 + 0x10) + -1;
        pcVar14 = local_248;
      }
      if ((pcVar14[uVar15] == '\0') && (local_e8[uVar15 + 4] < 0)) {
        FUN_1483ad9de(local_260,&local_1a8,iVar12 + 4);
        iVar5 = *(int *)(param_1 + 0x10);
        *(uint *)(param_1 + 0x10) = iVar5 + 1U;
        if (*(uint *)(param_1 + 0x14) < iVar5 + 1U) {
          FUN_1403e3958(local_258,iVar5);
        }
        lVar25 = *(longlong *)(param_1 + 8);
        *(double *)(lVar25 + 0x10 + (longlong)iVar5 * 0x18) = local_198[0];
        puVar1 = (undefined4 *)(lVar25 + (longlong)iVar5 * 0x18);
        *puVar1 = (float)local_1a8;
        puVar1[1] = local_1a8._4_4_;
        puVar1[2] = fStack_1a0;
        puVar1[3] = uStack_19c;
        local_e8[uVar15 + 4] = *(int *)(param_1 + 0x10) + -1;
        pcVar14 = local_248;
      }
      uVar16 = iVar12 + 3U | 4;
      local_250 = (ulonglong)uVar16;
      if ((pcVar14[uVar28] == '\0') && (local_e8[local_250] < 0)) {
        FUN_1483ad9de(local_260,&local_1a8,uVar16);
        iVar5 = *(int *)(param_1 + 0x10);
        *(uint *)(param_1 + 0x10) = iVar5 + 1U;
        if (*(uint *)(param_1 + 0x14) < iVar5 + 1U) {
          FUN_1403e3958(local_258,iVar5);
        }
        lVar25 = *(longlong *)(param_1 + 8);
        *(double *)(lVar25 + 0x10 + (longlong)iVar5 * 0x18) = local_198[0];
        puVar1 = (undefined4 *)(lVar25 + (longlong)iVar5 * 0x18);
        *puVar1 = (float)local_1a8;
        puVar1[1] = local_1a8._4_4_;
        puVar1[2] = fStack_1a0;
        puVar1[3] = uStack_19c;
        local_e8[local_250] = *(int *)(param_1 + 0x10) + -1;
      }
      uVar19 = local_260;
      FUN_1483ad9de(local_260,&local_1a8,uVar28);
      FUN_1483ad9de(uVar19,&local_1c8,uVar15 & 0xffffffff);
      dVar2 = (double)CONCAT44(local_1a8._4_4_,(float)local_1a8) - local_1c8;
      dVar3 = (double)CONCAT44(uStack_19c,fStack_1a0) - uStack_1c0;
      local_1d8 = SQRT((local_198[0] - dStack_1b8) * (local_198[0] - dStack_1b8) +
                       dVar2 * dVar2 + dVar3 * dVar3);
      FUN_1483ad9de(uVar19,&local_1a8,iVar12 + 4);
      FUN_1483ad9de(uVar19,&local_1c8,uVar15 & 0xffffffff);
      dVar2 = (double)CONCAT44(local_1a8._4_4_,(float)local_1a8) - local_1c8;
      dVar3 = (double)CONCAT44(uStack_19c,fStack_1a0) - uStack_1c0;
      local_1e0 = SQRT((local_198[0] - dStack_1b8) * (local_198[0] - dStack_1b8) +
                       dVar2 * dVar2 + dVar3 * dVar3);
      local_278 = (float)*(double *)(param_1 + 0x118);
      uVar26 = 0;
      local_270 = uVar20;
      FUN_148472eb8(&local_210,0,puVar21,local_e8[uVar15]);
      local_278 = (float)*(double *)(param_1 + 0x118);
      local_270 = uVar20;
      FUN_148472eb8(&local_210,1,puVar21,local_e8[uVar28]);
      local_278 = (float)*(double *)(param_1 + 0x118);
      if (*(char *)(param_1 + 0xf0 + uVar15) == '\0') {
        local_270 = uVar20;
        FUN_148472eb8(&local_210,3,puVar21,local_e8[uVar15 + 4]);
        FUN_148472ff0(&local_238,0,1,3);
        pcVar14 = local_248;
        if (local_248[uVar28] != '\0') goto LAB_148471bf5;
        local_278 = (float)*(double *)(param_1 + 0x118);
        uVar26 = 3;
      }
      pcVar14 = local_248;
      local_270 = uVar20;
      FUN_148472eb8(&local_210,2,puVar21,local_e8[local_250]);
      FUN_148472ff0(&local_238,uVar26,1,2);
    }
LAB_148471bf5:
    uVar15 = uVar15 + 1;
    puVar21 = puVar21 + 3;
    piVar17 = piVar17 + 1;
  } while (uVar15 != 4);
  local_1cc = 4;
  if (*(char *)(param_1 + 0xf1) == *(char *)(param_1 + 0xf3)) {
    uVar16 = 0;
    if (((*(char *)(param_1 + 0xf1) == '\0') && (uVar16 = 0, *pcVar14 == '\x01')) &&
       (uVar16 = 0, *(char *)(param_1 + 0xf2) == '\x01')) goto LAB_148472039;
  }
  else {
LAB_148472039:
    uVar16 = 1;
  }
  uVar16 = *(byte *)(param_1 + 0xf4) ^ uVar16;
  uVar15 = (ulonglong)uVar16;
  lVar25 = uVar15 + 2;
  if (local_e8[uVar15] < 0) {
    FUN_1483ad9de(local_260,&local_1a8,uVar15);
    iVar12 = *(int *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x10) = iVar12 + 1U;
    if (*(uint *)(param_1 + 0x14) < iVar12 + 1U) {
      FUN_1403e3958(local_258,iVar12);
    }
    lVar27 = *(longlong *)(param_1 + 8);
    *(double *)(lVar27 + 0x10 + (longlong)iVar12 * 0x18) = local_198[0];
    puVar1 = (undefined4 *)(lVar27 + (longlong)iVar12 * 0x18);
    *puVar1 = (float)local_1a8;
    puVar1[1] = local_1a8._4_4_;
    puVar1[2] = fStack_1a0;
    puVar1[3] = uStack_19c;
    local_e8[uVar15] = *(int *)(param_1 + 0x10) + -1;
  }
  if (local_e8[lVar25] < 0) {
    FUN_1483ad9de(local_260,&local_1a8,lVar25);
    iVar12 = *(int *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x10) = iVar12 + 1U;
    if (*(uint *)(param_1 + 0x14) < iVar12 + 1U) {
      FUN_1403e3958(local_258,iVar12);
    }
    lVar27 = *(longlong *)(param_1 + 8);
    *(double *)(lVar27 + 0x10 + (longlong)iVar12 * 0x18) = local_198[0];
    puVar24 = (undefined8 *)(lVar27 + (longlong)iVar12 * 0x18);
    *puVar24 = CONCAT44(local_1a8._4_4_,(float)local_1a8);
    puVar24[1] = CONCAT44(uStack_19c,fStack_1a0);
    local_e8[lVar25] = *(int *)(param_1 + 0x10) + -1;
  }
  lVar27 = local_240;
  local_258 = uVar15 + 1;
  uVar28 = (ulonglong)(uVar16 - 1 & 3);
  local_1c8 = *(double *)(param_1 + 0xd8);
  uStack_1c0 = (double)(*(ulonglong *)(param_1 + 0xe0) ^ 0x8000000000000000);
  dStack_1b8 = -(double)*(ulonglong *)(param_1 + 0xe8);
  local_250 = uVar15;
  FUN_146bed047(&local_1a8,local_240,&local_1c8);
  dVar38 = local_198[0] + *(double *)(param_1 + 0xb0);
  dVar4 = (double)CONCAT44(local_1a8._4_4_,(float)local_1a8);
  dVar37 = (double)CONCAT44(uStack_19c,fStack_1a0);
  dVar2 = *(double *)(param_1 + 0xa8);
  dVar3 = *(double *)(param_1 + 0xa0);
  local_1c8 = (double)(*(ulonglong *)(param_1 + 0xd8) ^ 0x8000000000000000);
  uStack_1c0 = (double)(*(ulonglong *)(param_1 + 0xe0) ^ 0x8000000000000000);
  dStack_1b8 = (double)(*(ulonglong *)(param_1 + 0xe8) ^ 0x8000000000000000);
  FUN_146bed047(&local_1a8,lVar27,&local_1c8);
  dVar38 = dVar38 - (local_198[0] + *(double *)(param_1 + 0xb0));
  dVar37 = (dVar37 + dVar2) -
           ((double)CONCAT44(uStack_19c,fStack_1a0) + *(double *)(param_1 + 0xa8));
  dVar2 = (dVar4 + dVar3) -
          ((double)CONCAT44(local_1a8._4_4_,(float)local_1a8) + *(double *)(param_1 + 0xa0));
  local_1d8 = SQRT(dVar38 * dVar38 + dVar2 * dVar2 + dVar37 * dVar37);
  uStack_1c0 = *(double *)(param_1 + 0xe0);
  dStack_1b8 = (double)(*(ulonglong *)(param_1 + 0xe8) ^ 0x8000000000000000);
  local_1c8 = (double)(*(ulonglong *)(param_1 + 0xd8) ^ 0x8000000000000000);
  FUN_146bed047(&local_1a8,lVar27,&local_1c8);
  dVar38 = local_198[0] + *(double *)(param_1 + 0xb0);
  dVar4 = (double)CONCAT44(local_1a8._4_4_,(float)local_1a8);
  dVar37 = (double)CONCAT44(uStack_19c,fStack_1a0);
  dVar2 = *(double *)(param_1 + 0xa8);
  dVar3 = *(double *)(param_1 + 0xa0);
  local_1c8 = (double)(*(ulonglong *)(param_1 + 0xd8) ^ 0x8000000000000000);
  uStack_1c0 = (double)(*(ulonglong *)(param_1 + 0xe0) ^ 0x8000000000000000);
  dStack_1b8 = (double)(*(ulonglong *)(param_1 + 0xe8) ^ 0x8000000000000000);
  FUN_146bed047(&local_1a8,lVar27,&local_1c8);
  dVar38 = dVar38 - (local_198[0] + *(double *)(param_1 + 0xb0));
  dVar37 = (dVar37 + dVar2) -
           ((double)CONCAT44(uStack_19c,fStack_1a0) + *(double *)(param_1 + 0xa8));
  dVar2 = (dVar4 + dVar3) -
          ((double)CONCAT44(local_1a8._4_4_,(float)local_1a8) + *(double *)(param_1 + 0xa0));
  local_1e0 = SQRT(dVar38 * dVar38 + dVar2 * dVar2 + dVar37 * dVar37);
  uVar20 = *(undefined4 *)(param_1 + 0xf8);
  dVar2 = *(double *)(param_1 + 0xb8);
  dVar3 = *(double *)(param_1 + 0xc0);
  dVar38 = *(double *)(param_1 + 200) + *(double *)(param_1 + 200);
  fStack_1a0 = -(float)(1.0 - ((dVar3 + dVar3) * dVar3 + dVar2 * (dVar2 + dVar2)));
  local_1a8._4_4_ = -(float)(dVar38 * dVar3 - (dVar2 + dVar2) * *(double *)(param_1 + 0xd0));
  local_1a8._0_4_ = -(float)(dVar2 * dVar38 + *(double *)(param_1 + 0xd0) * (dVar3 + dVar3));
  bVar7 = false;
  local_278 = 0.0;
  local_270 = uVar20;
  FUN_148472eb8(&local_210,local_250,&local_1a8,local_e8[local_250]);
  uVar15 = local_250;
  dVar2 = *(double *)(param_1 + 0xb8);
  dVar3 = *(double *)(param_1 + 0xc0);
  dVar38 = *(double *)(param_1 + 200) + *(double *)(param_1 + 200);
  fStack_1a0 = -(float)(1.0 - ((dVar3 + dVar3) * dVar3 + dVar2 * (dVar2 + dVar2)));
  local_1a8._4_4_ = -(float)(dVar38 * dVar3 - (dVar2 + dVar2) * *(double *)(param_1 + 0xd0));
  local_1a8._0_4_ = -(float)(dVar2 * dVar38 + *(double *)(param_1 + 0xd0) * (dVar3 + dVar3));
  local_278 = 0.0;
  puVar24 = &local_1a8;
  local_270 = uVar20;
  FUN_148472eb8(&local_210,lVar25,puVar24,local_e8[lVar25]);
  if (*(char *)(param_1 + 0xf0 + uVar15) == '\x01') {
    if (pcVar14[lVar25] != '\x01') {
      bVar7 = false;
      goto LAB_148472a98;
    }
    if (pcVar14[local_258] == '\0') {
      bVar7 = true;
      goto LAB_148472a98;
    }
LAB_148472521:
    if (pcVar14[uVar28] == '\0') goto LAB_148472b7b;
  }
  else {
LAB_148472a98:
    dVar2 = *(double *)(param_1 + 0xb8);
    dVar3 = *(double *)(param_1 + 0xc0);
    dVar38 = *(double *)(param_1 + 200) + *(double *)(param_1 + 200);
    fStack_1a0 = -(float)(1.0 - ((dVar3 + dVar3) * dVar3 + dVar2 * (dVar2 + dVar2)));
    local_1a8._4_4_ = -(float)(dVar38 * dVar3 - (dVar2 + dVar2) * *(double *)(param_1 + 0xd0));
    local_1a8._0_4_ = -(float)(dVar2 * dVar38 + *(double *)(param_1 + 0xd0) * (dVar3 + dVar3));
    local_278 = 0.0;
    local_270 = uVar20;
    FUN_148472eb8(&local_210,local_258,&local_1a8,local_e8[local_258 & 0xffffffff]);
    FUN_148472ff0(&local_238,uVar15 & 0xffffffff,local_258,lVar25);
    if (bVar7) goto LAB_148472521;
LAB_148472b7b:
    dVar2 = *(double *)(param_1 + 0xb8);
    dVar3 = *(double *)(param_1 + 0xc0);
    dVar38 = *(double *)(param_1 + 200) + *(double *)(param_1 + 200);
    fStack_1a0 = -(float)(1.0 - ((dVar3 + dVar3) * dVar3 + dVar2 * (dVar2 + dVar2)));
    local_1a8._4_4_ = -(float)(dVar38 * dVar3 - (dVar2 + dVar2) * *(double *)(param_1 + 0xd0));
    local_1a8._0_4_ = -(float)(dVar2 * dVar38 + *(double *)(param_1 + 0xd0) * (dVar3 + dVar3));
    local_278 = 0.0;
    local_270 = uVar20;
    FUN_148472eb8(&local_210,uVar28,&local_1a8,local_e8[uVar28]);
    FUN_148472ff0(&local_238,uVar15 & 0xffffffff,lVar25,uVar28);
  }
  local_1cc = local_1cc + 1;
  pcVar18 = local_1ac;
  local_1ac[0] = '\0';
  local_1ac[1] = '\0';
  local_1ac[2] = '\0';
  local_1ac[3] = '\0';
  lVar25 = 0;
  do {
    lVar27 = (longlong)*(int *)((longlong)&DAT_14aee4fa0 + lVar25);
    if (pcVar14[lVar27 + -4] == '\x01') {
      iVar12 = local_f8[lVar27];
      local_e8[lVar27] = iVar12;
      FUN_1483ad9de(local_260,&local_1c8,lVar27 - 4U & 0xffffffff);
      puVar24[2] = dStack_1b8;
      *(undefined4 *)puVar24 = (undefined4)local_1c8;
      *(undefined4 *)((longlong)puVar24 + 4) = local_1c8._4_4_;
      *(float *)(puVar24 + 1) = (float)uStack_1c0;
      *(undefined4 *)((longlong)puVar24 + 0xc) = uStack_1c0._4_4_;
      *pcVar18 = '\x01';
    }
    else {
      FUN_1483ad9de(local_260,&local_1c8,*(int *)((longlong)&DAT_14aee4fa0 + lVar25));
      puVar24[2] = dStack_1b8;
      *(undefined4 *)puVar24 = (undefined4)local_1c8;
      *(undefined4 *)((longlong)puVar24 + 4) = local_1c8._4_4_;
      *(float *)(puVar24 + 1) = (float)uStack_1c0;
      *(undefined4 *)((longlong)puVar24 + 0xc) = uStack_1c0._4_4_;
      iVar12 = local_e8[lVar27];
    }
    *(int *)((longlong)local_118 + lVar25) = iVar12;
    lVar25 = lVar25 + 4;
    puVar24 = puVar24 + 3;
    pcVar18 = pcVar18 + 1;
    pcVar14 = local_248;
  } while (lVar25 != 0x10);
  dVar2 = SQRT((local_150 - local_168) * (local_150 - local_168) +
               (local_158 - local_170) * (local_158 - local_170) +
               (local_160 - local_178) * (local_160 - local_178));
  dVar3 = local_198[1] - (double)CONCAT44(local_1a8._4_4_,(float)local_1a8);
  dVar38 = local_198[2] - (double)CONCAT44(uStack_19c,fStack_1a0);
  local_1d8 = SQRT((local_198[3] - local_198[0]) * (local_198[3] - local_198[0]) +
                   dVar38 * dVar38 + dVar3 * dVar3);
  if (local_1d8 <= dVar2) {
    local_1d8 = dVar2;
  }
  dVar2 = SQRT((local_168 - local_198[3]) * (local_168 - local_198[3]) +
               (local_170 - local_198[2]) * (local_170 - local_198[2]) +
               (local_178 - local_198[1]) * (local_178 - local_198[1]));
  local_160 = local_160 - (double)CONCAT44(local_1a8._4_4_,(float)local_1a8);
  local_158 = local_158 - (double)CONCAT44(uStack_19c,fStack_1a0);
  local_1e0 = SQRT((local_150 - local_198[0]) * (local_150 - local_198[0]) +
                   local_158 * local_158 + local_160 * local_160);
  if (local_1e0 <= dVar2) {
    local_1e0 = dVar2;
  }
  uVar15 = local_250 ^ 1;
  uVar28 = local_250 ^ 3;
  if (local_1ac[uVar15] == '\0') {
    cVar23 = '\0';
  }
  else {
    cVar23 = local_1ac[uVar28];
  }
  bVar7 = local_1ac[2] != local_1ac[3];
  bVar8 = local_1ac[0] != local_1ac[1];
  bVar9 = local_1ac[3] != local_1ac[0];
  bVar10 = local_1ac[1] != local_1ac[2];
  uVar22 = -local_250 + 2;
  uVar19 = (ulonglong)(-(int)local_250 & 3);
  uVar20 = *(undefined4 *)(param_1 + 0xfc);
  if ((cVar23 == '\0') || (local_1ac[-local_250 + 2] == '\0')) {
    local_260 = uVar28 & 0xffffffff;
    fVar30 = (float)(local_198[local_260 * 3] - local_198[uVar15 * 3]);
    fVar34 = (float)(*(double *)(&fStack_1a0 + local_260 * 6) -
                    *(double *)(&fStack_1a0 + uVar15 * 6));
    fVar31 = (float)((double)(&local_1a8)[local_260 * 3] - (double)(&local_1a8)[uVar15 * 3]);
    fVar33 = (float)(local_198[uVar22 * 3] - local_198[uVar15 * 3]);
    fVar35 = (float)(*(double *)(&fStack_1a0 + uVar22 * 6) - *(double *)(&fStack_1a0 + uVar15 * 6));
    fVar36 = (float)((double)(&local_1a8)[uVar22 * 3] - (double)(&local_1a8)[uVar15 * 3]);
    fVar32 = fVar31 * fVar35 - fVar34 * fVar36;
    fVar36 = fVar36 * fVar30 - fVar31 * fVar33;
    fVar34 = fVar34 * fVar33 - fVar30 * fVar35;
    local_1c8 = (double)CONCAT44(fVar36,fVar34);
    fVar30 = fVar32 * fVar32 + fVar34 * fVar34 + fVar36 * fVar36;
    if (1e-08 < fVar30) {
      fVar30 = 1.0 / SQRT(fVar30);
      local_1c8 = (double)CONCAT44(fVar36 * fVar30,fVar34 * fVar30);
      fVar32 = fVar32 * fVar30;
    }
    uStack_1c0 = (double)CONCAT44(uStack_1c0._4_4_,fVar32);
    local_278 = 0.0;
    local_270 = uVar20;
    FUN_148472eb8(&local_210,uVar15 & 0xffffffff,&local_1c8,local_118[uVar15]);
    local_278 = 0.0;
    local_270 = uVar20;
    FUN_148472eb8(&local_210,uVar22 & 0xffffffff,&local_1c8,local_118[uVar22]);
    piVar17 = local_118 + local_260;
    local_260 = CONCAT44(local_260._4_4_,uVar20);
    local_278 = 0.0;
    local_270 = uVar20;
    FUN_148472eb8(&local_210,uVar28 & 0xffffffff,&local_1c8,*piVar17);
    FUN_148472ff0(&local_238,uVar15 & 0xffffffff,uVar22 & 0xffffffff,uVar28 & 0xffffffff);
    if ((bVar7 || bVar8) && (bVar9 || bVar10)) {
      local_1cc = local_1cc + 1;
    }
    bVar11 = true;
    uVar20 = (undefined4)local_260;
    if (cVar23 != '\0') goto LAB_1484727cd;
    bVar11 = true;
  }
  else {
    bVar11 = false;
LAB_1484727cd:
    if (local_1ac[uVar19] != '\0') goto LAB_1484727de;
  }
  if ((bVar7 || bVar8) && (bVar9 || bVar10)) {
    dVar4 = local_198[uVar19 * 3] - local_198[uVar15 * 3];
    dVar2 = *(double *)(&fStack_1a0 + uVar19 * 6) - *(double *)(&fStack_1a0 + uVar15 * 6);
    dVar3 = (double)(&local_1a8)[uVar19 * 3] - (double)(&local_1a8)[uVar15 * 3];
    uVar22 = uVar28 & 0xffffffff;
    dVar37 = local_198[uVar22 * 3] - local_198[uVar15 * 3];
    dVar6 = *(double *)(&fStack_1a0 + uVar22 * 6) - *(double *)(&fStack_1a0 + uVar15 * 6);
    dVar29 = (double)(&local_1a8)[uVar22 * 3] - (double)(&local_1a8)[uVar15 * 3];
    dVar38 = dVar3 * dVar6 - dVar29 * dVar2;
    dVar29 = dVar4 * dVar29 - dVar37 * dVar3;
    dVar2 = dVar2 * dVar37 - dVar6 * dVar4;
    dVar3 = dVar38 * dVar38 + dVar2 * dVar2 + dVar29 * dVar29;
    if (9.99999993922529e-09 < dVar3) {
      dVar3 = 1.0 / SQRT(dVar3);
      dVar2 = dVar2 * dVar3;
      dVar29 = dVar29 * dVar3;
      dVar38 = dVar38 * dVar3;
    }
    fVar32 = (float)dVar38;
    fVar34 = (float)dVar29;
    fVar36 = (float)dVar2;
    uStack_1c0._0_4_ = fVar32;
    if (bVar11) {
      local_1c8 = (double)CONCAT44(fVar34,fVar36);
      iVar12 = FUN_1484730ac(param_1,&local_1c8,local_118[uVar15]);
      local_108[uVar15] = iVar12;
      uVar22 = (ulonglong)(uint)((int)uVar28 << 2);
      local_1c8 = (double)CONCAT44(fVar34,fVar36);
      uStack_1c0 = (double)CONCAT44(uStack_1c0._4_4_,fVar32);
      uVar13 = FUN_1484730ac(param_1,&local_1c8,*(undefined4 *)((longlong)local_118 + uVar22));
      *(undefined4 *)((longlong)local_108 + uVar22) = uVar13;
    }
    else {
      local_1c8 = (double)CONCAT44(fVar34,fVar36);
      local_278 = 0.0;
      local_270 = uVar20;
      FUN_148472eb8(&local_210,uVar15 & 0xffffffff,&local_1c8);
      local_1c8 = (double)CONCAT44(fVar34,fVar36);
      uStack_1c0 = (double)CONCAT44(uStack_1c0._4_4_,fVar32);
      local_278 = 0.0;
      local_270 = uVar20;
      FUN_148472eb8(&local_210,uVar28 & 0xffffffff,&local_1c8,local_118[uVar22]);
    }
    iVar12 = local_118[uVar19];
    local_1c8 = (double)CONCAT44(fVar34,fVar36);
    uStack_1c0 = (double)CONCAT44(uStack_1c0._4_4_,fVar32);
  }
  else {
    iVar12 = local_118[uVar19];
    local_1c8 = *(double *)(*(longlong *)(param_1 + 0x38) + (longlong)local_108[uVar15] * 0xc);
    uStack_1c0 = (double)CONCAT44(uStack_1c0._4_4_,
                                  *(undefined4 *)
                                   (*(longlong *)(param_1 + 0x38) + 8 +
                                   (longlong)local_108[uVar15] * 0xc));
  }
  local_278 = 0.0;
  local_270 = uVar20;
  FUN_148472eb8(&local_210,uVar19,&local_1c8,iVar12);
  FUN_148472ff0(&local_238,uVar15 & 0xffffffff,uVar28 & 0xffffffff,uVar19);
LAB_1484727de:
  if ((local_c0 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148472e8a FUN_148472e8a body=31 status=ok
// SIG undefined FUN_148472e8a(void)

void FUN_148472e8a(longlong param_1,int param_2)

{
  if (param_2 <= *(int *)(param_1 + 0x18)) {
    *(undefined4 *)(param_1 + 0x1c) = 6;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148472eaa FUN_148472eaa body=14 status=ok
// SIG undefined FUN_148472eaa(void)

void FUN_148472eaa(longlong param_1)

{
  if (*(int *)(param_1 + 0x1c) != 6) {
    *(undefined4 *)(param_1 + 0x1c) = 6;
  }
  return;
}



// FUNCTION 148472eb8 FUN_148472eb8 body=310 status=ok
// SIG undefined FUN_148472eb8(void)

void FUN_148472eb8(longlong *param_1,uint param_2,undefined8 param_3,undefined4 param_4,
                  float param_5,uint param_6)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_68 [40];
  float local_40;
  float local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *param_1;
  iVar3 = param_2 - param_6;
  uVar4 = iVar3 + 7;
  if (-1 < (int)(iVar3 + 4U)) {
    uVar4 = iVar3 + 4U;
  }
  iVar3 = (iVar3 - (uVar4 & 0xfffffffc)) + 4;
  if (*(char *)(lVar1 + 0x120) == '\x01') {
    iVar3 = *(int *)(&DAT_14aee4fb0 + (longlong)iVar3 * 4) + iVar3;
  }
  if ((param_6 & 1) == 0) {
    dVar6 = (double)(int)(&DAT_149f3c5d0)[(longlong)iVar3 * 2] * *(double *)param_1[4];
    dVar7 = (double)(int)(&DAT_149f3c5d4)[(longlong)iVar3 * 2] * *(double *)param_1[5] +
            (double)param_5;
  }
  else {
    dVar6 = (double)(int)(&DAT_149f3c5d0)[(longlong)iVar3 * 2] * *(double *)param_1[5] +
            (double)param_5;
    dVar7 = (double)(int)(&DAT_149f3c5d4)[(longlong)iVar3 * 2] * *(double *)param_1[4];
  }
  local_40 = (float)dVar6;
  local_3c = (float)dVar7;
  uVar2 = FUN_148473120(lVar1,&local_40,param_4);
  uVar5 = (ulonglong)param_2;
  *(undefined4 *)(param_1[1] + uVar5 * 4) = uVar2;
  uVar2 = FUN_1484730ac(lVar1,param_3,param_4);
  *(undefined4 *)(param_1[2] + uVar5 * 4) = uVar2;
  *(undefined4 *)(param_1[3] + uVar5 * 4) = param_4;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148472ff0 FUN_148472ff0 body=187 status=ok
// SIG undefined FUN_148472ff0(void)

void FUN_148472ff0(longlong *param_1,uint param_2,uint param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  bool bVar11;
  
  lVar5 = *param_1;
  lVar6 = param_1[3];
  param_4 = param_4 & 0xffffffff;
  uVar9 = (ulonglong)param_3;
  uVar10 = (ulonglong)param_2;
  iVar8 = FUN_146bd77a2(lVar5,*(undefined4 *)(lVar6 + uVar10 * 4),*(undefined4 *)(lVar6 + uVar9 * 4)
                        ,*(undefined4 *)(lVar6 + param_4 * 4));
  *(undefined4 *)(*(longlong *)(lVar5 + 0x88) + (longlong)iVar8 * 4) = *(undefined4 *)param_1[4];
  lVar6 = param_1[1];
  uVar1 = *(undefined4 *)(lVar6 + param_4 * 4);
  bVar11 = *(char *)(lVar5 + 0x98) != '\0';
  uVar2 = *(undefined4 *)(lVar6 + uVar10 * 4);
  uVar4 = uVar1;
  if (bVar11) {
    uVar4 = uVar2;
  }
  uVar3 = *(undefined4 *)(lVar6 + uVar9 * 4);
  if (bVar11) {
    uVar2 = uVar1;
  }
  lVar6 = *(longlong *)(lVar5 + 0x68);
  lVar7 = (longlong)iVar8 * 0xc;
  *(undefined4 *)(lVar6 + lVar7) = uVar2;
  *(undefined4 *)(lVar6 + 4 + lVar7) = uVar3;
  *(undefined4 *)(lVar6 + 8 + lVar7) = uVar4;
  lVar6 = param_1[2];
  uVar1 = *(undefined4 *)(lVar6 + param_4 * 4);
  uVar2 = *(undefined4 *)(lVar6 + uVar9 * 4);
  uVar4 = *(undefined4 *)(lVar6 + uVar10 * 4);
  uVar3 = uVar4;
  if (*(char *)(lVar5 + 0x98) != '\0') {
    uVar3 = uVar1;
    uVar1 = uVar4;
  }
  lVar5 = *(longlong *)(lVar5 + 0x78);
  *(undefined4 *)(lVar5 + lVar7) = uVar3;
  *(undefined4 *)(lVar5 + 4 + lVar7) = uVar2;
  *(undefined4 *)(lVar5 + 8 + lVar7) = uVar1;
  return;
}



// FUNCTION 1484730ac FUN_1484730ac body=116 status=ok
// SIG undefined FUN_1484730ac(void)

int FUN_1484730ac(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x40);
  *(uint *)(param_1 + 0x40) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x44) < iVar1 + 1U) {
    FUN_140c0b6f2(param_1 + 0x38,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x38);
  *(undefined4 *)(lVar2 + 8 + (longlong)iVar1 * 0xc) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 0xc) = *param_2;
  iVar1 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar1 + 1U) {
    FUN_1446f48e2(param_1 + 0x48,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar1 * 4) = param_3;
  return *(int *)(param_1 + 0x40) + -1;
}



// FUNCTION 148473120 FUN_148473120 body=105 status=ok
// SIG undefined FUN_148473120(void)

int FUN_148473120(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_140752556(param_1 + 0x18,iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 8) = *param_2;
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1446f48e2(param_1 + 0x28,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 4) = param_3;
  return *(int *)(param_1 + 0x20) + -1;
}



// FUNCTION 14847318a FUN_14847318a body=29 status=ok
// SIG undefined FUN_14847318a(void)

undefined8 FUN_14847318a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484731a8 FUN_1484731a8 body=564 status=ok
// SIG undefined FUN_1484731a8(void)

undefined8 * FUN_1484731a8(undefined8 *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  memset(param_1 + 1,0,0x91);
  *param_1 = &PTR_FUN_149f361f0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x24) = 1;
  *(undefined1 *)((longlong)param_1 + 0x121) = 1;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0x1000;
  *(undefined4 *)((longlong)param_1 + 300) = 5;
  param_1[0x28] = 0;
  param_1[0x2a] = &PTR_LAB_149f36510;
  param_1[0x2b] = &LAB_146bd3270;
  param_1[0x26] = FUN_146bd3274;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0x7fffffff00000000;
  param_1[0x30] = 0x7fffffff7fffffff;
  param_1[0x31] = 0x8000000180000001;
  param_1[0x32] = 0x7fffffff80000001;
  param_1[0x33] = 0x7fffffff7fffffff;
  param_1[0x34] = 0x8000000180000001;
  *(undefined4 *)(param_1 + 0x35) = 0x80000001;
  param_1[0x36] = 0x1000000000000000;
  param_1[0x37] = 0x2000000000000000;
  param_1[0x38] = 0x4000000000000000;
  param_1[0x39] = 0x40;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  *(undefined8 *)((longlong)param_1 + 0x244) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24c) = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x50] = 0x40;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x55] = 0x40;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  dVar4 = DAT_14c8464f0 + -8.0;
  dVar5 = DAT_14c8464e8 + -8.0;
  dVar3 = DAT_14c8464f0 + 8.0;
  dVar2 = DAT_14c8464e8 + 8.0;
  dVar1 = DAT_14c8464e0 + 8.0;
  param_1[0x1d] = DAT_14c8464e0 + -8.0;
  param_1[0x1e] = dVar5;
  param_1[0x1f] = dVar4;
  param_1[0x20] = dVar1;
  param_1[0x21] = dVar2;
  param_1[0x22] = dVar3;
  param_1[0x23] = 0x3fd0000000000000;
  return param_1;
}



// FUNCTION 1484733dc FUN_1484733dc body=38 status=ok
// SIG undefined FUN_1484733dc(void)

undefined8 FUN_1484733dc(undefined8 param_1,int param_2)

{
  FUN_148463044();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14847340a FUN_14847340a body=95 status=ok
// SIG undefined FUN_14847340a(void)

void FUN_14847340a(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_148279fb6(param_1,iVar2);
  }
  FUN_14827a155((longlong)iVar2 * 0x28 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 14847346a FUN_14847346a body=59 status=ok
// SIG undefined FUN_14847346a(void)

void FUN_14847346a(longlong *param_1)

{
  FUN_148273bb4(param_1[7],(int)param_1[8]);
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1484734a6 FUN_1484734a6 body=612 status=ok
// SIG undefined FUN_1484734a6(void)

undefined4
FUN_1484734a6(undefined8 param_1,longlong param_2,longlong *param_3,longlong *param_4,byte param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_108 [32];
  int local_e8;
  longlong local_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined4 local_90;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_68 = 0;
  uStack_60 = 0;
  local_80 = &local_78;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = &local_68;
  FUN_1484737be();
  if (0 < *(int *)(param_2 + 0x20)) {
    lVar3 = 0;
    lVar2 = 0;
    do {
      FUN_1484737be(&local_88,*(longlong *)(param_2 + 0x18) + lVar3);
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 0x10;
    } while (lVar2 < *(int *)(param_2 + 0x20));
  }
  local_98 = local_78;
  local_90 = (undefined4)uStack_70;
  local_a8 = local_68;
  local_a0 = (undefined4)uStack_60;
  uVar1 = FUN_146baf7ca(param_1);
  if (param_3 != (longlong *)0x0) {
    if ((byte)(param_5 ^ 1 | (byte)uVar1) == 1) {
      local_b8 = 0;
      uStack_b0 = 0;
      local_58 = local_78;
      local_50 = (undefined4)uStack_70;
      FUN_146bb114a(param_1,&local_b8);
      if (&local_b8 == param_3) {
        if (local_b8 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_3 != 0) {
          FUN_1400020a8();
        }
        *param_3 = local_b8;
        local_b8 = 0;
        *(undefined4 *)(param_3 + 1) = (undefined4)uStack_b0;
        *(undefined4 *)((longlong)param_3 + 0xc) = uStack_b0._4_4_;
      }
    }
    else {
      local_c8 = local_78;
      local_c0 = (undefined4)uStack_70;
      local_d8 = local_68;
      local_d0 = (undefined4)uStack_60;
      local_e8 = (uint)*(byte *)(param_2 + 0x10) * 2 + 1;
      FUN_146bb1a42(param_1,param_3,&local_d8,&local_c8);
    }
  }
  if (&local_68 != param_4 && param_4 != (longlong *)0x0) {
    if (*param_4 != 0) {
      FUN_1400020a8();
    }
    *param_4 = local_68;
    local_68 = 0;
    *(undefined4 *)(param_4 + 1) = (undefined4)uStack_60;
    *(undefined4 *)((longlong)param_4 + 0xc) = uStack_60._4_4_;
    uStack_60 = 0;
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14847370c FUN_14847370c body=42 status=ok
// SIG undefined FUN_14847370c(void)

void FUN_14847370c(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < param_2) {
    FUN_1408652ee();
    return;
  }
  return;
}



// FUNCTION 148473738 FUN_148473738 body=132 status=ok
// SIG undefined FUN_148473738(void)

void FUN_148473738(longlong param_1,int param_2)

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



// FUNCTION 1484737be FUN_1484737be body=189 status=ok
// SIG undefined FUN_1484737be(void)

void FUN_1484737be(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  if (*(int *)(param_2 + 8) != 0) {
    iVar1 = *(int *)(*param_1 + 8);
    FUN_14702e4fe();
    iVar6 = *(int *)(param_1[1] + 8);
    uVar5 = *(uint *)(param_2 + 8);
    iVar3 = uVar5 + iVar6 + -1;
    if ((int)(uVar5 + iVar6) < 1) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar3);
    }
    if (*(int *)(param_1[1] + 0xc) < iVar3) {
      FUN_146be5458();
      uVar5 = *(uint *)(param_2 + 8);
    }
    if (0 < (int)uVar5) {
      iVar6 = uVar5 - 1;
      uVar4 = 0;
      do {
        plVar2 = (longlong *)param_1[1];
        iVar3 = (int)plVar2[1];
        *(uint *)(plVar2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)plVar2 + 0xc) < iVar3 + 1U) {
          FUN_146be54b8(plVar2,iVar3);
        }
        iVar7 = iVar6 + iVar1;
        iVar6 = (int)uVar4;
        *(ulonglong *)(*plVar2 + (longlong)iVar3 * 8) = CONCAT44(iVar1 + iVar6,iVar7);
        uVar4 = uVar4 + 1;
      } while (uVar5 != uVar4);
    }
  }
  return;
}



// FUNCTION 14847387c FUN_14847387c body=290 status=ok
// SIG undefined FUN_14847387c(void)

longlong * FUN_14847387c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484739a0 FUN_1484739a0 body=95 status=ok
// SIG undefined FUN_1484739a0(void)

undefined8 * FUN_1484739a0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145aba23b(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148473ac0(param_1,iVar1);
      FUN_148473b33(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148473a00 FUN_148473a00 body=95 status=ok
// SIG undefined FUN_148473a00(void)

undefined8 * FUN_148473a00(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145aba1e7(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148473bc4(param_1,iVar1);
      FUN_148473c33(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148473a60 FUN_148473a60 body=95 status=ok
// SIG undefined FUN_148473a60(void)

undefined8 * FUN_148473a60(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145aba20f(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148473c68(param_1,iVar1);
      FUN_148473cdb(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148473ac0 FUN_148473ac0 body=115 status=ok
// SIG undefined FUN_148473ac0(void)

void FUN_148473ac0(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148473b33 FUN_148473b33 body=145 status=ok
// SIG undefined FUN_148473b33(void)

void FUN_148473b33(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined4 *)(param_1 + lVar2) = *(undefined4 *)(param_2 + lVar2);
      *(undefined8 *)(param_1 + 8 + lVar2) = 0;
      iVar1 = *(int *)(param_2 + 0x10 + lVar2);
      _Src = *(void **)(param_2 + 8 + lVar2);
      *(int *)(param_1 + 0x10 + lVar2) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x14 + lVar2) = 0;
      }
      else {
        FUN_144a06ca8(param_1 + 8 + lVar2,iVar1,0);
        memcpy(*(void **)(param_1 + 8 + lVar2),_Src,(longlong)iVar1 << 2);
      }
      lVar2 = lVar2 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148473bc4 FUN_148473bc4 body=111 status=ok
// SIG undefined FUN_148473bc4(void)

void FUN_148473bc4(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x38,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148473c33 FUN_148473c33 body=52 status=ok
// SIG undefined FUN_148473c33(void)

void FUN_148473c33(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1482ff156(param_1,param_2);
    param_1 = param_1 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return;
}



// FUNCTION 148473c68 FUN_148473c68 body=115 status=ok
// SIG undefined FUN_148473c68(void)

void FUN_148473c68(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,8);
    iVar2 = (int)(uVar1 / 0x50);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x50,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148473cdb FUN_148473cdb body=76 status=ok
// SIG undefined FUN_148473cdb(void)

void FUN_148473cdb(longlong param_1,longlong param_2,int param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined8 *)(param_1 + -8) = *(undefined8 *)(param_2 + -8);
      FUN_146c7f210(param_1,param_2);
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
      param_1 = param_1 + 0x50;
      param_2 = param_2 + 0x50;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148473d28 FUN_148473d28 body=52 status=ok
// SIG undefined FUN_148473d28(void)

void FUN_148473d28(longlong *param_1)

{
  FUN_148473d5c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148473d5c FUN_148473d5c body=313 status=ok
// SIG undefined FUN_148473d5c(void)

void FUN_148473d5c(longlong *param_1)

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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148473e96 FUN_148473e96 body=129 status=ok
// SIG undefined FUN_148473e96(void)

undefined4 * FUN_148473e96(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  longlong *plVar2;
  void *_Src;
  
  *param_1 = *param_2;
  plVar2 = *(longlong **)(param_2 + 2);
  *(longlong **)(param_1 + 2) = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  param_1[4] = param_2[4];
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = param_2[10];
  _Src = *(void **)(param_2 + 8);
  param_1[10] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xb] = 0;
  }
  else {
    FUN_1447a127e(param_1 + 8,iVar1,0);
    memcpy(*(void **)(param_1 + 8),_Src,(longlong)iVar1);
  }
  return param_1;
}



// FUNCTION 148473f18 FUN_148473f18 body=193 status=ok
// SIG undefined FUN_148473f18(void)

longlong * FUN_148473f18(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  void *_Src;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar4 = param_2[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_2;
    lVar6 = 0;
    do {
      puVar3 = *(undefined8 **)(lVar2 + lVar6);
      puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      *puVar5 = 0;
      iVar1 = *(int *)(puVar3 + 1);
      _Src = (void *)*puVar3;
      *(int *)(puVar5 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      }
      else {
        FUN_144a06ca8(puVar5,iVar1,0);
        memcpy((void *)*puVar5,_Src,(longlong)iVar1 << 2);
      }
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1456bd870(param_1,iVar1);
      }
      *(undefined8 **)(*param_1 + (longlong)iVar1 * 8) = puVar5;
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar6);
  }
  return param_1;
}



// FUNCTION 148473fda FUN_148473fda body=147 status=ok
// SIG undefined FUN_148473fda(void)

void FUN_148473fda(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14847406e FUN_14847406e body=47 status=ok
// SIG undefined FUN_14847406e(void)

void FUN_14847406e(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14847409e FUN_14847409e body=24 status=ok
// SIG undefined FUN_14847409e(void)

void FUN_14847409e(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001484740b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1484740b6 FUN_1484740b6 body=29 status=ok
// SIG undefined FUN_1484740b6(void)

undefined8 FUN_1484740b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484740d4 FUN_1484740d4 body=38 status=ok
// SIG undefined FUN_1484740d4(void)

undefined8 FUN_1484740d4(undefined8 param_1,int param_2)

{
  FUN_148474170();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148474100 FUN_148474100 body=110 status=ok
// SIG undefined FUN_148474100(void)

void FUN_148474100(longlong param_1,char param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (0 < *(int *)(param_1 + 0x3c8)) {
    iVar1 = 0;
    do {
      if (param_2 == '\0') {
        FUN_1482cdc86(param_1,local_30,0);
      }
      else {
        FUN_1482cd6a4();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x3c8));
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148474170 FUN_148474170 body=82 status=ok
// SIG undefined FUN_148474170(void)

void FUN_148474170(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aee51c0;
  if (param_1[0x83] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x81] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7f] != 0) {
    FUN_1400020a8();
  }
  FUN_14831e9f0(param_1);
  return;
}



// FUNCTION 1484741c2 FUN_1484741c2 body=48 status=ok
// SIG undefined FUN_1484741c2(void)

void FUN_1484741c2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1484741f2 FUN_1484741f2 body=29 status=ok
// SIG undefined FUN_1484741f2(void)

undefined8 FUN_1484741f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148474210 FUN_148474210 body=371 status=ok
// SIG undefined FUN_148474210(void)

undefined4 * FUN_148474210(longlong param_1,undefined4 *param_2,double *param_3,undefined4 param_4)

{
  undefined1 auStack_a8 [32];
  double local_88;
  double dStack_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = param_3[2];
  local_88 = *param_3;
  dStack_80 = param_3[1];
  local_60 = *(double *)(param_1 + 0xb0) * local_78;
  local_68 = *(double *)(param_1 + 0xa8) * dStack_80;
  local_70 = *(double *)(param_1 + 0xa0) * local_88;
  FUN_146bed047(&local_58,param_1 + 0x68);
  local_78 = local_48 + *(double *)(param_1 + 0x98);
  dStack_80 = (double)CONCAT44(uStack_4c,uStack_50) + *(double *)(param_1 + 0x90);
  local_88 = (double)CONCAT44(uStack_54,local_58) + *(double *)(param_1 + 0x88);
  FUN_146ba22f0(param_1 + 0x18,&local_58,&local_88);
  local_78 = local_48;
  FUN_14837bbfe(param_1,param_2,&local_88,param_4);
  FUN_146bcb256(param_1 + 0x18,&local_58,param_2);
  *(double *)(param_2 + 4) = local_48;
  *param_2 = local_58;
  param_2[1] = uStack_54;
  param_2[2] = uStack_50;
  param_2[3] = uStack_4c;
  FUN_146ba22f0(param_1 + 0x68,&local_58,param_2);
  *(double *)(param_2 + 4) = local_48;
  *param_2 = local_58;
  param_2[1] = uStack_54;
  param_2[2] = uStack_50;
  param_2[3] = uStack_4c;
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148474384 FUN_148474384 body=466 status=ok
// SIG undefined FUN_148474384(void)

undefined4 *
FUN_148474384(longlong param_1,undefined4 *param_2,double *param_3,undefined4 *param_4,
             undefined4 param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  double local_78;
  double local_70;
  double local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  double local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_88 = param_3[2];
  local_98 = *param_3;
  dStack_90 = param_3[1];
  lVar1 = param_1 + 0x68;
  local_68 = *(double *)(param_1 + 0xb0) * local_88;
  local_70 = *(double *)(param_1 + 0xa8) * dStack_90;
  local_78 = *(double *)(param_1 + 0xa0) * local_98;
  FUN_146bed047(&local_60,lVar1);
  local_88 = local_50 + *(double *)(param_1 + 0x98);
  dStack_90 = (double)CONCAT44(uStack_54,uStack_58) + *(double *)(param_1 + 0x90);
  local_98 = (double)CONCAT44(uStack_5c,local_60) + *(double *)(param_1 + 0x88);
  lVar2 = param_1 + 0x18;
  FUN_146ba22f0(lVar2,&local_60,&local_98);
  local_88 = local_50;
  local_a8 = param_5;
  FUN_14837bdb6(param_1,param_2,&local_98,param_4);
  FUN_146bcb256(lVar2,&local_60,param_2);
  *(double *)(param_2 + 4) = local_50;
  *param_2 = local_60;
  param_2[1] = uStack_5c;
  param_2[2] = uStack_58;
  param_2[3] = uStack_54;
  FUN_146ba22f0(lVar1,&local_60,param_2);
  *(double *)(param_2 + 4) = local_50;
  *param_2 = local_60;
  param_2[1] = uStack_5c;
  param_2[2] = uStack_58;
  param_2[3] = uStack_54;
  FUN_146c5cfa8(lVar2,&local_60,param_4);
  *(double *)(param_4 + 4) = local_50;
  *param_4 = local_60;
  param_4[1] = uStack_5c;
  param_4[2] = uStack_58;
  param_4[3] = uStack_54;
  FUN_146c5d0c4(lVar1,&local_60,param_4);
  *(double *)(param_4 + 4) = local_50;
  *param_4 = local_60;
  param_4[1] = uStack_5c;
  param_4[2] = uStack_58;
  param_4[3] = uStack_54;
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148474558 FUN_148474558 body=132 status=ok
// SIG undefined FUN_148474558(void)

void FUN_148474558(longlong param_1,int param_2)

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



// FUNCTION 1484745de FUN_1484745de body=62 status=ok
// SIG undefined FUN_1484745de(void)

void FUN_1484745de(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14847461c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 14847461c FUN_14847461c body=93 status=ok
// SIG undefined FUN_14847461c(void)

ulonglong FUN_14847461c(uint param_1,uint param_2)

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



// FUNCTION 14847467a FUN_14847467a body=132 status=ok
// SIG undefined FUN_14847467a(void)

void FUN_14847467a(longlong param_1,int param_2)

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



// FUNCTION 148474700 FUN_148474700 body=62 status=ok
// SIG undefined FUN_148474700(void)

void FUN_148474700(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14847473e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 14847473e FUN_14847473e body=93 status=ok
// SIG undefined FUN_14847473e(void)

ulonglong FUN_14847473e(uint param_1,uint param_2)

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



// FUNCTION 14847479c FUN_14847479c body=21 status=ok
// SIG undefined FUN_14847479c(void)

void FUN_14847479c(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 6;
  if (param_2 == 0) {
    iVar1 = 0;
  }
  if (iVar1 <= param_3) {
    iVar1 = param_3;
  }
  *(int *)(param_1 + 0x1c) = iVar1;
  return;
}



// FUNCTION 1484747b2 FUN_1484747b2 body=14 status=ok
// SIG undefined FUN_1484747b2(void)

void FUN_1484747b2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 1484747c0 FUN_1484747c0 body=29 status=ok
// SIG undefined FUN_1484747c0(void)

undefined8 FUN_1484747c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484747dd FUN_1484747dd body=41 status=ok
// SIG undefined FUN_1484747dd(void)

void FUN_1484747dd(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148474806(param_1);
    param_1 = param_1 + 0x110;
  }
  return;
}



// FUNCTION 148474806 FUN_148474806 body=103 status=ok
// SIG undefined FUN_148474806(void)

void FUN_148474806(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    plVar1 = (longlong *)(param_1 + 0x70);
    if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x60);
    }
                    /* WARNING: Could not recover jumptable at 0x000148474862. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 14847486d FUN_14847486d body=41 status=ok
// SIG undefined FUN_14847486d(void)

void FUN_14847486d(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1457e5b52(param_1);
    param_1 = param_1 + 0xd0;
  }
  return;
}



// FUNCTION 14847489a FUN_14847489a body=127 status=ok
// SIG undefined FUN_14847489a(void)

byte FUN_14847489a(longlong *param_1)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  
  if (((*param_1 == 0) || (lVar1 = param_1[1], lVar1 == 0)) || (*(int *)(lVar1 + 0xcc) < 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = *(ulonglong *)(lVar1 + 0x10) ==
            (ulonglong)
            (uint)(*(int *)(*(longlong *)(lVar1 + 8) + 0x214) +
                  *(int *)(*(longlong *)(lVar1 + 8) + 0x218));
  }
  lVar1 = param_1[2];
  if ((*(int *)((longlong)param_1 + 0x2c) < 0) || ((double)param_1[6] <= 0.0)) {
    bVar5 = false;
  }
  else {
    iVar3 = _finite((double)param_1[6]);
    bVar5 = iVar3 != 0;
  }
  if (bVar4) {
    bVar2 = lVar1 != 0 & bVar5;
  }
  else {
    bVar2 = 0;
  }
  return bVar2;
}


