// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145eeb7d0 FUN_145eeb7d0 body=226 status=ok
// SIG undefined FUN_145eeb7d0(void)

longlong * FUN_145eeb7d0(longlong *param_1)

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
  pcVar13 = FUN_146308b4c;
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



// FUNCTION 145eeb8b4 FUN_145eeb8b4 body=132 status=ok
// SIG undefined FUN_145eeb8b4(void)

undefined1 * FUN_145eeb8b4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"WorldToShadowMatrix";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x586;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1472fef1e;
}



// FUNCTION 145eeb938 FUN_145eeb938 body=138 status=ok
// SIG undefined FUN_145eeb938(void)

code * FUN_145eeb938(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Transmission1";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x780000058b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472fee0a;
}



// FUNCTION 145eeb9c2 FUN_145eeb9c2 body=138 status=ok
// SIG undefined FUN_145eeb9c2(void)

code * FUN_145eeb9c2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShadowUVMinMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000587;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145eeb8b4;
}



// FUNCTION 145eeba4c FUN_145eeba4c body=205 status=ok
// SIG undefined FUN_145eeba4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eeba4c(void)

{
  if ((DAT_14caefac7 & 2) == 0) {
    DAT_14caefac7 = DAT_14caefac7 | 2;
    _DAT_14caefa68 = L"FMaterialNumericParameterInfo";
    _DAT_14caefa80 = FUN_146826540;
    _DAT_14caefa88 = FUN_146825d77;
    _DAT_14caefa90 = FUN_146825fd6;
    _DAT_14caefa98 = FUN_1407e02ea;
    _DAT_14caefaa0 = FUN_146826273;
    _DAT_14caefa78 = &LAB_147bc0096;
    _DAT_14caefab8 = 0xffffffff0000001c;
    _DAT_14caefac0 = 4;
    DAT_14caefac4 = 0;
    _DAT_14caefaa8 = &LAB_147bc00a6;
    FUN_145eebb1a();
    FUN_1407e00cc(&DAT_14caefa60);
    return;
  }
  return;
}



// FUNCTION 145eebb1a FUN_145eebb1a body=128 status=ok
// SIG undefined FUN_145eebb1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eebb1a(void)

{
  FUN_145eebc62();
  _DAT_14caf0e68 = L"ParameterInfo";
  DAT_14caf0e92 = FUN_140850cc5();
  FUN_145eebb9a();
  _DAT_14caf0e70 = &DAT_14caef6e0;
  _DAT_14caf0e80 = &LAB_14682652b;
  _DAT_14caf0e88 = 0x100000000;
  _DAT_14caf0e90 = 0;
  _DAT_14caf0e78 = DAT_14caefa70;
  DAT_14caefa70 = &DAT_14caf0e68;
  return;
}



// FUNCTION 145eebb9a FUN_145eebb9a body=200 status=ok
// SIG undefined FUN_145eebb9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eebb9a(void)

{
  if ((DAT_14caef747 & 2) != 0) {
    return;
  }
  DAT_14caef747 = DAT_14caef747 | 2;
  _DAT_14caef6e8 = L"FHashedMaterialParameterInfo";
  DAT_14caef700 = FUN_146826540;
  _DAT_14caef708 = FUN_146825d77;
  _DAT_14caef710 = FUN_146825fd6;
  _DAT_14caef718 = FUN_1407e02ea;
  _DAT_14caef720 = FUN_146826273;
  _DAT_14caef6f8 = &LAB_147bbff46;
  _DAT_14caef738 = 0xffffffff00000014;
  _DAT_14caef740 = 4;
  DAT_14caef744 = 0;
  _DAT_14caef728 = &LAB_147bbff58;
  FUN_145eebe86();
  FUN_1407e00cc(&DAT_14caef6e0);
  return;
}



// FUNCTION 145eebc62 FUN_145eebc62 body=275 status=ok
// SIG undefined FUN_145eebc62(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eebc62(void)

{
  FUN_145eebd76();
  _DAT_14caf0e98 = L"ParameterType";
  DAT_14caf0ec2 = FUN_140850cc5();
  if ((DAT_14caf0f5f & 2) == 0) {
    DAT_14caf0f5f = DAT_14caf0f5f | 3;
    _DAT_14caf0f00 = L"EMaterialParameterType";
    _DAT_14caf0f18 = &LAB_147bc4f86;
    _DAT_14caf0f20 = &LAB_147bc4f92;
    _DAT_14caf0f28 = &LAB_147bc4f9e;
    _DAT_14caf0f30 = &LAB_147bc4fa4;
    _DAT_14caf0f38 = &LAB_147bc4fa8;
    _DAT_14caf0f10 = &LAB_147bc4fae;
    _DAT_14caf0f50 = &DAT_100000001;
    _DAT_14caf0f58 = 1;
    DAT_14caf0f5c = 0;
  }
  _DAT_14caf0ea0 = &DAT_14caf0ef8;
  _DAT_14caf0eb0 = &LAB_14682652b;
  _DAT_14caf0eb8 = &DAT_100000014;
  _DAT_14caf0ec0 = 0;
  _DAT_14caf0ea8 = DAT_14caefa70;
  DAT_14caefa70 = &DAT_14caf0e98;
  return;
}



// FUNCTION 145eebd76 FUN_145eebd76 body=271 status=ok
// SIG undefined FUN_145eebd76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eebd76(void)

{
  _DAT_14caf0ec8 = L"DefaultValueOffset";
  DAT_14caf0ef2 = FUN_140850cc5();
  if ((DAT_14c87e69f & 2) == 0) {
    DAT_14c87e69f = DAT_14c87e69f | 3;
    _DAT_14c87e640 = L"unsigned int";
    _DAT_14c87e658 = FUN_146828f04;
    _DAT_14c87e660 = &LAB_146828f34;
    _DAT_14c87e668 = &LAB_146828f40;
    _DAT_14c87e670 = &LAB_1407e0362;
    _DAT_14c87e678 = FUN_146828f46;
    _DAT_14c87e650 = &LAB_146828f62;
    _DAT_14c87e690 = 0x400000004;
    _DAT_14c87e698 = 4;
    DAT_14c87e69c = 0;
  }
  _DAT_14caf0ed0 = &DAT_14c87e638;
  _DAT_14caf0ee0 = &LAB_14682652b;
  _DAT_14caf0ee8 = &DAT_100000018;
  _DAT_14caf0ef0 = 0;
  _DAT_14caf0ed8 = DAT_14caefa70;
  DAT_14caefa70 = &DAT_14caf0ec8;
  return;
}



// FUNCTION 145eebe86 FUN_145eebe86 body=276 status=ok
// SIG undefined FUN_145eebe86(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eebe86(void)

{
  FUN_145eebf9a();
  _DAT_14caeff38 = L"Name";
  DAT_14caeff62 = FUN_140850cc5();
  if ((DAT_14caf1377 & 2) == 0) {
    DAT_14caf1377 = DAT_14caf1377 | 3;
    _DAT_14caf1318 = L"FScriptName";
    _DAT_14caf1330 = &LAB_147bc254a;
    _DAT_14caf1338 = &LAB_147bc2550;
    _DAT_14caf1340 = &LAB_147bc2564;
    _DAT_14caf1348 = &LAB_147bc256a;
    _DAT_14caf1350 = &LAB_147bc256e;
    _DAT_14caf1328 = &LAB_147bc2574;
    _DAT_14caf1368 = 0xc0000000c;
    _DAT_14caf1370 = 4;
    DAT_14caf1374 = 0;
  }
  _DAT_14caeff40 = &DAT_14caf1310;
  _DAT_14caeff50 = &LAB_14682652b;
  _DAT_14caeff58 = 0x100000000;
  _DAT_14caeff60 = 0;
  _DAT_14caeff48 = DAT_14caef6f0;
  DAT_14caef6f0 = &DAT_14caeff38;
  return;
}



// FUNCTION 145eebf9a FUN_145eebf9a body=276 status=ok
// SIG undefined FUN_145eebf9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eebf9a(void)

{
  FUN_145eec0ae();
  _DAT_14caeff68 = L"Index";
  DAT_14caeff92 = FUN_140850cc5();
  if ((DAT_14c951c5f & 2) == 0) {
    DAT_14c951c5f = DAT_14c951c5f | 3;
    _DAT_14c951c00 = &DAT_149e97ffe;
    _DAT_14c951c18 = &LAB_1468cb2bc;
    _DAT_14c951c20 = &LAB_1468cb2c8;
    _DAT_14c951c28 = &LAB_1468cb2d4;
    _DAT_14c951c30 = &LAB_14280d956;
    _DAT_14c951c38 = &LAB_1468cb2da;
    _DAT_14c951c10 = &LAB_1468cb2e2;
    _DAT_14c951c50 = 0x400000004;
    _DAT_14c951c58 = 4;
    DAT_14c951c5c = 0;
  }
  _DAT_14caeff70 = &DAT_14c951bf8;
  _DAT_14caeff80 = &LAB_14682652b;
  _DAT_14caeff88 = &DAT_10000000c;
  _DAT_14caeff90 = 0;
  _DAT_14caeff78 = DAT_14caef6f0;
  DAT_14caef6f0 = &DAT_14caeff68;
  return;
}



// FUNCTION 145eec0ae FUN_145eec0ae body=270 status=ok
// SIG undefined FUN_145eec0ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eec0ae(void)

{
  _DAT_14caeff98 = L"Association";
  DAT_14caeffc2 = FUN_140850cc5();
  if ((DAT_14caf002f & 2) == 0) {
    DAT_14caf002f = DAT_14caf002f | 3;
    _DAT_14caeffd0 = L"TEnumAsByte<T>";
    _DAT_14caeffe8 = &LAB_147bc251e;
    _DAT_14caefff0 = &LAB_147bc252a;
    _DAT_14caefff8 = &LAB_147bc2536;
    _DAT_14caf0000 = &LAB_147bc253c;
    _DAT_14caf0008 = &LAB_147bc2540;
    _DAT_14caeffe0 = &LAB_147bc2546;
    _DAT_14caf0020 = &DAT_100000001;
    _DAT_14caf0028 = 1;
    DAT_14caf002c = 0;
  }
  _DAT_14caeffa0 = &DAT_14caeffc8;
  _DAT_14caeffb0 = &LAB_14682652b;
  _DAT_14caeffb8 = &DAT_100000010;
  _DAT_14caeffc0 = 0;
  _DAT_14caeffa8 = DAT_14caef6f0;
  DAT_14caef6f0 = &DAT_14caeff98;
  return;
}



// FUNCTION 145eec1bc FUN_145eec1bc body=161 status=ok
// SIG undefined FUN_145eec1bc(void)

longlong * FUN_145eec1bc(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  
  plVar5 = *(longlong **)(param_1 + 0x158);
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else if (*(char *)(param_1 + 0x168) == '\0') {
    cVar4 = (**(code **)(*plVar5 + 0x18))();
    if (cVar4 == '\0') {
      *(undefined8 *)(param_1 + 0x158) = 0;
      plVar5 = *(longlong **)(param_1 + 0x160);
      if (plVar5 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x160) = 0;
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
    }
    *(undefined1 *)(param_1 + 0x168) = 1;
    plVar5 = *(longlong **)(param_1 + 0x158);
  }
  *param_2 = (longlong)plVar5;
  lVar3 = *(longlong *)(param_1 + 0x160);
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 145eec25e FUN_145eec25e body=25 status=ok
// SIG undefined FUN_145eec25e(void)

void FUN_145eec25e(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145eec273. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 145eec278 FUN_145eec278 body=38 status=ok
// SIG undefined FUN_145eec278(void)

undefined8 FUN_145eec278(undefined8 param_1,int param_2)

{
  FUN_145eec29e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145eec29e FUN_145eec29e body=430 status=ok
// SIG undefined FUN_145eec29e(void)

void FUN_145eec29e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4cee50;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (*(int *)((longlong)param_1 + 0x5c) != 0) {
    FUN_148a56dc2(param_1 + 10,0);
  }
  FUN_145eec44c(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (*(int *)((longlong)param_1 + 0x6c) != 0) {
    FUN_148a56e32(param_1 + 0xc,0);
  }
  param_1[7] = 0;
  plVar3 = (longlong *)param_1[8];
  if (plVar3 != (longlong *)0x0) {
    param_1[8] = 0;
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
  FUN_145eec49a(param_1 + 0x13);
  FUN_14127bbf3(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_14127bbf3(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_145eec44c(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[8];
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
  *param_1 = &PTR__purecall_14b4d0080;
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145eec44c FUN_145eec44c body=77 status=ok
// SIG undefined FUN_145eec44c(void)

void FUN_145eec44c(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145eec49a FUN_145eec49a body=49 status=ok
// SIG undefined FUN_145eec49a(void)

void FUN_145eec49a(longlong param_1)

{
  FUN_141359731(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145eec4cc(param_1);
  return;
}



// FUNCTION 145eec4cc FUN_145eec4cc body=82 status=ok
// SIG undefined FUN_145eec4cc(void)

void FUN_145eec4cc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4cf1b0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[2];
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
                    /* WARNING: Could not recover jumptable at 0x000145eec51a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145eec51e FUN_145eec51e body=40 status=ok
// SIG undefined FUN_145eec51e(void)

undefined8 FUN_145eec51e(undefined8 param_1,int param_2)

{
  FUN_145eec546();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145eec546 FUN_145eec546 body=194 status=ok
// SIG undefined FUN_145eec546(void)

void FUN_145eec546(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4cd2a0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_145eec608(param_1 + 0xe);
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
  plVar3 = (longlong *)param_1[0xb];
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
  plVar3 = (longlong *)param_1[9];
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



// FUNCTION 145eec608 FUN_145eec608 body=53 status=ok
// SIG undefined FUN_145eec608(void)

void FUN_145eec608(longlong *param_1)

{
  FUN_145eec63e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145eec63e FUN_145eec63e body=346 status=ok
// SIG undefined FUN_145eec63e(void)

void FUN_145eec63e(longlong *param_1)

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



// FUNCTION 145eec79a FUN_145eec79a body=144 status=ok
// SIG undefined FUN_145eec79a(void)

void FUN_145eec79a(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x200);
  if ((uint)param_3 < 0x81) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x200,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x200),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x200,param_2,param_3,param_4);
  return;
}



// FUNCTION 145eec82a FUN_145eec82a body=514 status=ok
// SIG undefined FUN_145eec82a(void)

void FUN_145eec82a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1447f69b6(&DAT_14c872d10);
  FUN_1446ddc76(&local_20,"MovieSceneCapture",1);
  plVar3 = (longlong *)FUN_1447c1074(local_20);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x68))(plVar3);
  }
  FUN_145eeca4c();
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0x60))(DAT_14c8407a8,DAT_14cb0ce18);
  FUN_145eeca9c(1);
  plVar3 = *(longlong **)(param_1 + 0x10c0);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x10))(plVar3,0);
    plVar3 = *(longlong **)(param_1 + 0x10c0);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))(plVar3,1);
    }
    *(undefined8 *)(param_1 + 0x10c0) = 0;
  }
  plVar3 = *(longlong **)(param_1 + 0x10c8);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,1);
  }
  if ((*(char *)(param_1 + 0xcc8) == '\x01') &&
     (plVar3 = *(longlong **)(param_1 + 0xca8), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x2c8))(plVar3,param_1);
  }
  *(undefined8 *)(param_1 + 0xca8) = 0;
  if ((*(char *)(param_1 + 0xc80) == '\x01') &&
     (plVar3 = *(longlong **)(param_1 + 0xc60), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x2a8))(plVar3,param_1);
  }
  *(undefined8 *)(param_1 + 0xc60) = 0;
  FUN_145eece20(param_1);
  *(undefined8 *)(param_1 + 0xf28) = 0;
  plVar3 = *(longlong **)(param_1 + 0xf30);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xf30) = 0;
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
  *(undefined8 *)(param_1 + 0xf38) = 0;
  plVar3 = *(longlong **)(param_1 + 0xf40);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xf40) = 0;
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
  FUN_140790e84(param_1 + 0x1160);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eeca2e FUN_145eeca2e body=29 status=ok
// SIG undefined FUN_145eeca2e(void)

undefined8 FUN_145eeca2e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145eeca4c FUN_145eeca4c body=42 status=ok
// SIG undefined FUN_145eeca4c(void)

void FUN_145eeca4c(void)

{
  if (DAT_14cad3738 != (undefined8 *)0x0) {
    (**(code **)*DAT_14cad3738)(DAT_14cad3738,1);
  }
  DAT_14cad3738 = (undefined8 *)0x0;
  return;
}



// FUNCTION 145eeca76 FUN_145eeca76 body=38 status=ok
// SIG undefined FUN_145eeca76(void)

undefined8 FUN_145eeca76(undefined8 param_1,int param_2)

{
  FUN_145eecb0c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145eeca9c FUN_145eeca9c body=111 status=ok
// SIG undefined FUN_145eeca9c(void)

void FUN_145eeca9c(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cad8290;
  if (DAT_14cad8288 == 0) {
    if (DAT_14cad8290 == (longlong *)0x0) {
      return;
    }
  }
  else {
    if (DAT_14cad8290 == (longlong *)0x0) {
      DAT_14cad8288 = 0;
      return;
    }
    DAT_14cad8288 = 0;
  }
  DAT_14cad8290 = (longlong *)0x0;
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
                    /* WARNING: Could not recover jumptable at 0x000145eecafa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))(plVar3);
      return;
    }
  }
  return;
}



// FUNCTION 145eecb0c FUN_145eecb0c body=317 status=ok
// SIG undefined FUN_145eecb0c(void)

void FUN_145eecb0c(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14a8994f0;
  FUN_1401cb356();
  local_28 = param_1[7];
  local_20 = param_1[8];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
    UNLOCK();
  }
  FUN_140d61352(&local_28);
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_1410d7eee(param_1 + 0x15);
  FUN_145eecc7f(param_1[0x13],*(undefined4 *)(param_1 + 0x14));
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_145eecc4a(param_1 + 9);
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
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  *param_1 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (*(char *)((longlong)param_1 + 9) == '\x01')) {
    FUN_14019e20a(DAT_14c948580,param_1);
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eecc4a FUN_145eecc4a body=53 status=ok
// SIG undefined FUN_145eecc4a(void)

void FUN_145eecc4a(longlong *param_1)

{
  FUN_145eeccb8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145eecc7f FUN_145eecc7f body=56 status=ok
// SIG undefined FUN_145eecc7f(void)

void FUN_145eecc7f(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145eeccb8 FUN_145eeccb8 body=358 status=ok
// SIG undefined FUN_145eeccb8(void)

void FUN_145eeccb8(longlong *param_1)

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
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eece20 FUN_145eece20 body=383 status=ok
// SIG undefined FUN_145eece20(void)

void FUN_145eece20(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar3 = *(longlong **)(param_1 + 0xfd8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0xfe8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0xff8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  FUN_14080c2b4();
  *(undefined8 *)(param_1 + 0xfd0) = 0;
  plVar6 = *(longlong **)(param_1 + 0xfd8);
  if (plVar6 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xfd8) = 0;
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
  *(undefined8 *)(param_1 + 0xfe0) = 0;
  plVar6 = *(longlong **)(param_1 + 0xfe8);
  if (plVar6 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xfe8) = 0;
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
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145eecf7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145eecfa0 FUN_145eecfa0 body=284 status=ok
// SIG undefined FUN_145eecfa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145eecfa0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6bcc0) {
    FUN_144b3d300(&DAT_14ca6bcc0);
    if (DAT_14ca6bcc0 == -1) {
      FUN_145eed0bc();
      FUN_140db5666(&DAT_14ca6bc18,2,&DAT_14ca6bbb0,L"TVoxelizeVolumeVS<VMode_Primitive_Sphere>",
                    L"/Engine/Private/VolumetricFogVoxelization.usf",L"VoxelizeVS",0,1,FUN_14733514c
                    ,FUN_1473350ee,FUN_14310b2aa,&LAB_1473350ea,&LAB_14712ac0c,&LAB_14712ac08,0x110,
                    0);
      _DAT_14ca6bc18 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_14310b34d);
      _Init_thread_footer(&DAT_14ca6bcc0);
    }
  }
  return &DAT_14ca6bc18;
}



// FUNCTION 145eed0bc FUN_145eed0bc body=205 status=ok
// SIG undefined FUN_145eed0bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eed0bc(void)

{
  if ((DAT_14ca6bc17 & 2) == 0) {
    DAT_14ca6bc17 = DAT_14ca6bc17 | 2;
    _DAT_14ca6bbb8 = L"TVoxelizeVolumeVS<VMode_Primitive_Sphere>";
    _DAT_14ca6bbd0 = FUN_146826540;
    _DAT_14ca6bbd8 = FUN_146825d77;
    _DAT_14ca6bbe0 = FUN_146825fd6;
    _DAT_14ca6bbe8 = FUN_1407e02ea;
    _DAT_14ca6bbf0 = FUN_146826273;
    _DAT_14ca6bbc8 = FUN_1473350b0;
    _DAT_14ca6bc08 = 0xffffffff00000110;
    _DAT_14ca6bc10 = 8;
    DAT_14ca6bc14 = 0;
    _DAT_14ca6bbf8 = &LAB_1473350e6;
    FUN_145eed18a();
    FUN_1407e00cc(&DAT_14ca6bbb0);
    return;
  }
  return;
}



// FUNCTION 145eed18a FUN_145eed18a body=133 status=ok
// SIG undefined FUN_145eed18a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eed18a(void)

{
  _DAT_14ca6d6f8 = L"BASE";
  DAT_14ca6d722 = 4;
  FUN_145eed210();
  _DAT_14ca6d708 = DAT_14ca6bbc0;
  _DAT_14ca6d700 = &DAT_14ca6d728;
  _DAT_14ca6d710 = &LAB_14682652b;
  DAT_14ca6bbc0 = &DAT_14ca6d6f8;
  DAT_14ca6bc15 = DAT_14ca6bc15 + '\x01';
  _DAT_14ca6d718 = 0x100000000;
  if (DAT_14ca6d78c != '\0') {
    DAT_14ca6bc16 = DAT_14ca6bc16 + '\x01';
  }
  return;
}



// FUNCTION 145eed210 FUN_145eed210 body=313 status=ok
// SIG undefined FUN_145eed210(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eed210(void)

{
  if ((DAT_14ca6d78f & 2) == 0) {
    DAT_14ca6d78f = DAT_14ca6d78f | 2;
    _DAT_14ca6d730 = L"FVoxelizeVolumeVS";
    _DAT_14ca6d748 = FUN_146826540;
    _DAT_14ca6d750 = FUN_146825d77;
    _DAT_14ca6d758 = FUN_146825fd6;
    _DAT_14ca6d760 = FUN_1407e02ea;
    _DAT_14ca6d768 = FUN_146826273;
    _DAT_14ca6d740 = FUN_14733f52e;
    _DAT_14ca6d780 = 0xffffffff00000110;
    _DAT_14ca6d788 = 8;
    DAT_14ca6d78c = 0;
    _DAT_14ca6d770 = &LAB_14733f564;
    _DAT_14ca6d790 = L"VoxelizationPassIndex";
    DAT_14ca6d7ba = FUN_140850cc5();
    _DAT_14ca6d798 = FUN_140ec6960();
    _DAT_14ca6d7a8 = &LAB_14682652b;
    _DAT_14ca6d7b0 = &DAT_100000108;
    _DAT_14ca6d7b8 = 0;
    _DAT_14ca6d7a0 = DAT_14ca6d738;
    DAT_14ca6d738 = &DAT_14ca6d790;
    FUN_145eed34a();
    FUN_1407e00cc(&DAT_14ca6d728);
    return;
  }
  return;
}



// FUNCTION 145eed34a FUN_145eed34a body=123 status=ok
// SIG undefined FUN_145eed34a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eed34a(void)

{
  _DAT_14ca6d7c0 = L"BASE";
  DAT_14ca6d7ea = 4;
  _DAT_14ca6d7c8 = FUN_141092e92();
  _DAT_14ca6d7d0 = DAT_14ca6d738;
  _DAT_14ca6d7d8 = &LAB_14682652b;
  DAT_14ca6d738 = &DAT_14ca6d7c0;
  DAT_14ca6d78d = DAT_14ca6d78d + '\x01';
  _DAT_14ca6d7e0 = 0x100000000;
  if (*(char *)(_DAT_14ca6d7c8 + 100) != '\0') {
    DAT_14ca6d78e = DAT_14ca6d78e + '\x01';
  }
  return;
}



// FUNCTION 145eed3c6 FUN_145eed3c6 body=284 status=ok
// SIG undefined FUN_145eed3c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145eed3c6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6bf10) {
    FUN_144b3d300(&DAT_14ca6bf10);
    if (DAT_14ca6bf10 == -1) {
      FUN_145eed4e2();
      FUN_140db5666(&DAT_14ca6be68,2,&DAT_14ca6be00,L"TVoxelizeVolumeGS<VMode_Primitive_Sphere>",
                    L"/Engine/Private/VolumetricFogVoxelization.usf",L"VoxelizeGS",4,1,FUN_147335344
                    ,FUN_1473352e6,&LAB_1407e0366,&LAB_1473352e2,&LAB_14712ac0c,&LAB_14712ac08,0x110
                    ,0);
      _DAT_14ca6be68 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_14310b409);
      _Init_thread_footer(&DAT_14ca6bf10);
    }
  }
  return &DAT_14ca6be68;
}



// FUNCTION 145eed4e2 FUN_145eed4e2 body=205 status=ok
// SIG undefined FUN_145eed4e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eed4e2(void)

{
  if ((DAT_14ca6be67 & 2) == 0) {
    DAT_14ca6be67 = DAT_14ca6be67 | 2;
    _DAT_14ca6be08 = L"TVoxelizeVolumeGS<VMode_Primitive_Sphere>";
    _DAT_14ca6be20 = FUN_146826540;
    _DAT_14ca6be28 = FUN_146825d77;
    _DAT_14ca6be30 = FUN_146825fd6;
    _DAT_14ca6be38 = FUN_1407e02ea;
    _DAT_14ca6be40 = FUN_146826273;
    _DAT_14ca6be18 = FUN_1473352a8;
    _DAT_14ca6be58 = 0xffffffff00000110;
    _DAT_14ca6be60 = 8;
    DAT_14ca6be64 = 0;
    _DAT_14ca6be48 = &LAB_1473352de;
    FUN_145eed5b0();
    FUN_1407e00cc(&DAT_14ca6be00);
    return;
  }
  return;
}



// FUNCTION 145eed5b0 FUN_145eed5b0 body=133 status=ok
// SIG undefined FUN_145eed5b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eed5b0(void)

{
  _DAT_14ca6d820 = L"BASE";
  DAT_14ca6d84a = 4;
  FUN_145eed636();
  _DAT_14ca6d830 = DAT_14ca6be10;
  _DAT_14ca6d828 = &DAT_14ca6d850;
  _DAT_14ca6d838 = &LAB_14682652b;
  DAT_14ca6be10 = &DAT_14ca6d820;
  DAT_14ca6be65 = DAT_14ca6be65 + '\x01';
  _DAT_14ca6d840 = 0x100000000;
  if (DAT_14ca6d8b4 != '\0') {
    DAT_14ca6be66 = DAT_14ca6be66 + '\x01';
  }
  return;
}



// FUNCTION 145eed636 FUN_145eed636 body=313 status=ok
// SIG undefined FUN_145eed636(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eed636(void)

{
  if ((DAT_14ca6d8b7 & 2) == 0) {
    DAT_14ca6d8b7 = DAT_14ca6d8b7 | 2;
    _DAT_14ca6d858 = L"FVoxelizeVolumeGS";
    _DAT_14ca6d870 = FUN_146826540;
    _DAT_14ca6d878 = FUN_146825d77;
    _DAT_14ca6d880 = FUN_146825fd6;
    _DAT_14ca6d888 = FUN_1407e02ea;
    _DAT_14ca6d890 = FUN_146826273;
    _DAT_14ca6d868 = FUN_14733f568;
    _DAT_14ca6d8a8 = 0xffffffff00000110;
    _DAT_14ca6d8b0 = 8;
    DAT_14ca6d8b4 = 0;
    _DAT_14ca6d898 = &LAB_14733f59e;
    _DAT_14ca6d8b8 = L"VoxelizationPassIndex";
    DAT_14ca6d8e2 = FUN_140850cc5();
    _DAT_14ca6d8c0 = FUN_140ec6960();
    _DAT_14ca6d8d0 = &LAB_14682652b;
    _DAT_14ca6d8d8 = &DAT_100000108;
    _DAT_14ca6d8e0 = 0;
    _DAT_14ca6d8c8 = DAT_14ca6d860;
    DAT_14ca6d860 = &DAT_14ca6d8b8;
    FUN_145eed770();
    FUN_1407e00cc(&DAT_14ca6d850);
    return;
  }
  return;
}



// FUNCTION 145eed770 FUN_145eed770 body=123 status=ok
// SIG undefined FUN_145eed770(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eed770(void)

{
  _DAT_14ca6d8e8 = L"BASE";
  DAT_14ca6d912 = 4;
  _DAT_14ca6d8f0 = FUN_141092e92();
  _DAT_14ca6d8f8 = DAT_14ca6d860;
  _DAT_14ca6d900 = &LAB_14682652b;
  DAT_14ca6d860 = &DAT_14ca6d8e8;
  DAT_14ca6d8b5 = DAT_14ca6d8b5 + '\x01';
  _DAT_14ca6d908 = 0x100000000;
  if (*(char *)(_DAT_14ca6d8f0 + 100) != '\0') {
    DAT_14ca6d8b6 = DAT_14ca6d8b6 + '\x01';
  }
  return;
}



// FUNCTION 145eed7f6 FUN_145eed7f6 body=201 status=ok
// SIG undefined FUN_145eed7f6(void)

undefined8 * FUN_145eed7f6(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x17 | 0x80;
  *param_1 = &PTR_FUN_14a6d8830;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf5150) {
    FUN_144b3d300(&DAT_14caf5150);
    if (DAT_14caf5150 == -1) {
      FUN_1446f470e(&DAT_14caf5148,L"BoneSocketActor",1);
      _Init_thread_footer(&DAT_14caf5150);
    }
  }
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 0x4f;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined8 *)((longlong)param_1 + 0x6c) = DAT_14caf5148;
  *(byte *)((longlong)param_1 + 100) = *(byte *)((longlong)param_1 + 100) | 2;
  *(undefined1 *)(param_1 + 0xf) = 2;
  *(undefined4 *)((longlong)param_1 + 0x74) = 10;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  return param_1;
}



// FUNCTION 145eed8c0 FUN_145eed8c0 body=38 status=ok
// SIG undefined FUN_145eed8c0(void)

undefined8 FUN_145eed8c0(undefined8 param_1,int param_2)

{
  FUN_141589a68();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145eed8e6 FUN_145eed8e6 body=87 status=ok
// SIG undefined FUN_145eed8e6(void)

undefined8 * FUN_145eed8e6(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  FUN_145eed93e((longlong *)(param_1 + 0x18),param_3);
  if ((*(int *)(param_1 + 0x20) == 0) ||
     (plVar1 = *(longlong **)(param_1 + 0x18), plVar1 == (longlong *)0x0)) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  FUN_1449db362(param_3);
  return param_2;
}



// FUNCTION 145eed93e FUN_145eed93e body=124 status=ok
// SIG undefined FUN_145eed93e(void)

void FUN_145eed93e(longlong *param_1,longlong *param_2)

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



// FUNCTION 145eed9c4 FUN_145eed9c4 body=204 status=ok
// SIG undefined FUN_145eed9c4(void)

undefined8 * FUN_145eed9c4(undefined8 *param_1)

{
  FUN_1412202b0();
  *param_1 = &PTR_FUN_14af0a250;
  param_1[6] = &PTR_FUN_14af0a530;
  param_1[7] = &PTR_FUN_14af0a570;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 2;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x10] = 2;
  param_1[0x11] = 0x4000000040000000;
  param_1[0x12] = 0x3f800000;
  param_1[0x13] = 0x3f80000000000000;
  param_1[0x14] = 0x3f0c8c8d3f800000;
  param_1[0x15] = 0x3f80000000000000;
  *(undefined2 *)(param_1 + 0x16) = 0x101;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x24) = 100;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  return param_1;
}



// FUNCTION 145eeda98 FUN_145eeda98 body=204 status=ok
// SIG undefined FUN_145eeda98(void)

undefined8 * FUN_145eeda98(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_14584580a();
  *param_1 = &PTR_FUN_14ba29a40;
  param_1[6] = &PTR_FUN_14ba29d68;
  param_1[7] = &PTR_FUN_14ba29d80;
  param_1[8] = &PTR_FUN_14ba29da0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  FUN_1458d302c(param_1 + 0x14);
  uVar1 = DAT_14c8464e8;
  param_1[0x32] = DAT_14c8464e0;
  param_1[0x33] = uVar1;
  param_1[0x34] = DAT_14c8464f0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0x3ff0000000000000;
  *(undefined4 *)(param_1 + 0x39) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x1cc) = 0;
  return param_1;
}



// FUNCTION 145eedb64 FUN_145eedb64 body=39 status=ok
// SIG undefined FUN_145eedb64(void)

void FUN_145eedb64(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x950,0x10);
  FUN_145eedb8c(uVar1,param_1);
  return;
}



// FUNCTION 145eedb8c FUN_145eedb8c body=173 status=ok
// SIG undefined FUN_145eedb8c(void)

undefined8 * FUN_145eedb8c(undefined8 *param_1)

{
  FUN_140e14124();
  *param_1 = &PTR_FUN_14bb86ac0;
  param_1[0x116] = 0;
  *(byte *)(param_1 + 0x117) = *(byte *)(param_1 + 0x117) & 0xfc;
  *(undefined1 *)((longlong)param_1 + 0x8b9) = 0;
  param_1[0x115] = &PTR_FUN_14bb8f550;
  param_1[0x118] = 0;
  *(undefined4 *)(param_1 + 0x119) = 0xffffffff;
  param_1[0x123] = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  *(undefined8 *)((longlong)param_1 + 0x924) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x92c) = 0;
  param_1[0x127] = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  param_1[0x129] = 0;
  return param_1;
}



// FUNCTION 145eedc44 FUN_145eedc44 body=200 status=ok
// SIG undefined FUN_145eedc44(void)

undefined8 * FUN_145eedc44(undefined8 *param_1)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140efea2e();
  *param_1 = &PTR_FUN_14bce57c0;
  param_1[5] = 0;
  FUN_1446f470e(&local_30,L"Root",1);
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 1;
  FUN_1401b309e(param_1 + 6,1,0);
  *(undefined8 *)param_1[6] = local_30;
  param_1[8] = 0x3e700000000;
  *(undefined1 *)(param_1 + 9) = 1;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0xff00ff00;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eedd0e FUN_145eedd0e body=146 status=ok
// SIG undefined FUN_145eedd0e(void)

code * FUN_145eedd0e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145eedda0();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"cbSPD";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FFXLumaPyramidParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000077;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14cc2a0e0;
  return FUN_145da96aa;
}



// FUNCTION 145eedda0 FUN_145eedda0 body=278 status=ok
// SIG undefined FUN_145eedda0(void)

undefined * FUN_145eedda0(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc2a160) {
    FUN_144b3d300(&DAT_14cc2a160);
    if (DAT_14cc2a160 == -1) {
      FUN_145eedeb8(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"cbSPD";
      local_78 = L"FFXLumaPyramidParameters";
      local_50 = 0x20;
      local_58 = 0x52;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc2a0e0,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144655cf7);
      _Init_thread_footer(&DAT_14cc2a160);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cc2a0e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eedeb8 FUN_145eedeb8 body=226 status=ok
// SIG undefined FUN_145eedeb8(void)

longlong * FUN_145eedeb8(longlong *param_1)

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
  pcVar13 = FUN_146762a9c;
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



// FUNCTION 145eedf9c FUN_145eedf9c body=132 status=ok
// SIG undefined FUN_145eedf9c(void)

undefined1 * FUN_145eedf9c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"mips";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x53;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_149821bbe;
}



// FUNCTION 145eee020 FUN_145eee020 body=138 status=ok
// SIG undefined FUN_145eee020(void)

code * FUN_145eee020(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"numWorkGroups";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000054;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145eedf9c;
}



// FUNCTION 145eee0aa FUN_145eee0aa body=138 status=ok
// SIG undefined FUN_145eee0aa(void)

code * FUN_145eee0aa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"workGroupOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000055;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145eee020;
}



// FUNCTION 145eee134 FUN_145eee134 body=140 status=ok
// SIG undefined FUN_145eee134(void)

undefined1 * FUN_145eee134(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145eee1c0();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"cbFI";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FFXFrameInterpolationParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14cc2bc88;
  return &LAB_14982cc1c;
}



// FUNCTION 145eee1c0 FUN_145eee1c0 body=278 status=ok
// SIG undefined FUN_145eee1c0(void)

undefined * FUN_145eee1c0(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc2bd08) {
    FUN_144b3d300(&DAT_14cc2bd08);
    if (DAT_14cc2bd08 == -1) {
      FUN_141589bea(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"cbFI";
      local_78 = L"FFXFrameInterpolationParameters";
      local_50 = 0xb0;
      local_58 = 0x29;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc2bc88,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14465d603);
      _Init_thread_footer(&DAT_14cc2bd08);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cc2bc88;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eee2d8 FUN_145eee2d8 body=138 status=ok
// SIG undefined FUN_145eee2d8(void)

code * FUN_145eee2d8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"deltaTime";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000033;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982da5c;
}



// FUNCTION 145eee362 FUN_145eee362 body=138 status=ok
// SIG undefined FUN_145eee362(void)

code * FUN_145eee362(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"upscalerTargetSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000002f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982dbfa;
}



// FUNCTION 145eee3ec FUN_145eee3ec body=138 status=ok
// SIG undefined FUN_145eee3ec(void)

code * FUN_145eee3ec(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"opticalFlowHalfResMode";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x680000003a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982d720;
}



// FUNCTION 145eee476 FUN_145eee476 body=38 status=ok
// SIG undefined FUN_145eee476(void)

undefined8 FUN_145eee476(undefined8 param_1,int param_2)

{
  FUN_145eee49c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145eee49c FUN_145eee49c body=174 status=ok
// SIG undefined FUN_145eee49c(void)

void FUN_145eee49c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bef1500;
  FUN_1447a1747(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[7];
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
  plVar3 = (longlong *)param_1[5];
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
  *param_1 = &PTR_LAB_14bef1550;
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145eee54a FUN_145eee54a body=907 status=ok
// SIG undefined FUN_145eee54a(void)

void FUN_145eee54a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  void *_Src;
  char cVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_88 [40];
  void *local_60;
  longlong *local_58;
  code *local_50;
  longlong *local_48;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_145eee8d6();
  puVar4 = (undefined8 *)*param_2;
  if (*(int *)((longlong)puVar4 + 0x14) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x50);
    local_50 = (code *)*puVar4;
    local_48 = (longlong *)puVar4[1];
    if (local_48 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      UNLOCK();
    }
    iVar9 = FUN_145ce2ae6(uVar6,&local_50);
    plVar5 = local_48;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar3 = (int *)((longlong)plVar5 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    local_3c = iVar9;
    cVar7 = FUN_148aa731e(*(undefined8 *)(param_1 + 0x50));
    if (cVar7 != '\0') {
      iVar10 = FUN_145c29b62(param_1);
      if (iVar10 != iVar9) {
        FUN_1447cbafe(param_1 + 0x1a0,&local_50,&local_3c,0);
        if (*(longlong *)(param_1 + 0x198) == 0) {
          lVar11 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2d0))();
          if (lVar11 != 0) {
            lVar12 = FUN_144a79464();
            if ((*(int *)(lVar12 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar12 + 0x38) * 8) == lVar12 + 0x30)) {
              local_50 = FUN_148d8fe0e;
              local_48 = (longlong *)((ulonglong)local_48 & 0xffffffff00000000);
              FUN_148d8fd20(lVar11 + 0x1c8,&local_60,param_1);
              *(void **)(param_1 + 0x198) = local_60;
            }
          }
        }
      }
    }
  }
  else {
    lVar11 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2d0))();
    if (lVar11 != 0) {
      lVar11 = FUN_140b64196(lVar11);
      if (lVar11 != 0) {
        FUN_146048f14(*(undefined8 *)(param_1 + 0x50),&local_60);
        _Src = local_60;
        local_50 = (code *)0x0;
        local_48 = (longlong *)CONCAT44(local_48._4_4_,(int)local_58);
        if ((longlong)(int)local_58 == 0) {
          local_48 = (longlong *)((ulonglong)local_58 & 0xffffffff);
        }
        else {
          FUN_1446dd670(&local_50,(ulonglong)local_58 & 0xffffffff,0);
          memcpy(local_50,_Src,(longlong)(int)local_58 * 2);
        }
        if (local_60 != (void *)0x0) {
          FUN_1400020a8(local_60);
        }
        local_60 = *(void **)*param_2;
        local_58 = (longlong *)((undefined8 *)*param_2)[1];
        if (local_58 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_58 + 1) = (int)local_58[1] + 1;
          UNLOCK();
        }
        FUN_141589d22(lVar11,&local_50,&local_60);
        plVar5 = local_58;
        if (local_58 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_58 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_58)(local_58);
            LOCK();
            piVar3 = (int *)((longlong)plVar5 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        if (local_50 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    cVar7 = FUN_1414e62ca();
    if (cVar7 != '\0') {
      FUN_145c29b92(param_1 + 0x1f8,param_2);
      uVar8 = FUN_145c29970(*(undefined8 *)(param_1 + 0x50));
      *(undefined1 *)(param_1 + 0x22c) = uVar8;
      local_50 = *(code **)*param_2;
      plVar5 = (longlong *)((undefined8 *)*param_2)[1];
      if (plVar5 == (longlong *)0x0) {
        local_48 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        local_48 = plVar5;
      }
      FUN_140056680(&local_60,L"player_joined");
      FUN_145c29a14(param_1,&local_60,&local_50);
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
      plVar1 = local_48;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_48 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar3 = (int *)((longlong)plVar1 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
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
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eee8d6 FUN_145eee8d6 body=75 status=ok
// SIG undefined FUN_145eee8d6(void)

void FUN_145eee8d6(longlong param_1,longlong *param_2,char param_3)

{
  FUN_141589cce();
  if (*(int *)(*param_2 + 0x14) != 0) {
    FUN_145eee92e(param_1,param_2);
    if (param_3 == '\0') {
      FUN_145eeedcc(param_1,*param_2,0);
    }
  }
  FUN_145eee922(*(undefined8 *)(param_1 + 0x30));
  return;
}



// FUNCTION 145eee922 FUN_145eee922 body=12 status=ok
// SIG undefined FUN_145eee922(void)

void FUN_145eee922(longlong param_1)

{
  FUN_1447f69b6(param_1 + 0x1e0);
  return;
}



// FUNCTION 145eee92e FUN_145eee92e body=1180 status=ok
// SIG undefined FUN_145eee92e(void)

void FUN_145eee92e(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  longlong *local_b8;
  longlong *local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined1 local_88 [8];
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  longlong *local_70;
  undefined **local_68;
  longlong *local_60;
  longlong *local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar2 = *(longlong **)*param_2;
  plVar3 = (longlong *)((undefined8 *)*param_2)[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  uVar5 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x180))();
  uVar9 = FUN_140b6e166(&local_78,uVar5,plVar2);
  if ((local_78 == (longlong *)0x0) || (cVar4 = FUN_14101cfac(uVar9,*param_2), cVar4 == '\0')) {
    local_b8 = plVar2;
    plVar8 = plVar3;
    if (plVar3 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
      goto LAB_145eee9c2;
    }
  }
  else {
    local_b8 = local_78;
    plVar8 = local_70;
    if (local_70 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
      goto LAB_145eee9c2;
    }
  }
  LOCK();
  *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
  UNLOCK();
LAB_145eee9c2:
  uVar5 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2d0))();
  lVar6 = FUN_14119d4d6(uVar5);
  if ((((lVar6 != 0) &&
       (lVar7 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x180))(), lVar7 != 0)) &&
      (lVar7 = FUN_1400f6f32(lVar7), lVar7 != 0)) &&
     (lVar7 = *(longlong *)(lVar7 + 0x68), lVar7 != 0)) {
    local_68 = &PTR_FUN_14a184370;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    local_50 = 0;
    local_b0 = plVar8;
    local_60 = plVar2;
    local_58 = plVar3;
    FUN_1413d931e(lVar7,&local_7c,&local_68,1);
    local_68 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_50])(&local_60);
    plVar8 = local_b0;
    if (-1 < (short)local_7c) {
      uVar5 = FUN_140b6de3c();
      FUN_140b6df48(uVar5,&local_68,lVar6,plVar2);
      if (local_68 != (undefined **)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,local_88);
        local_a8 = 0;
        uStack_a0 = 0;
        (**(code **)(*local_68 + 0x18))(local_68,&local_98);
        local_c8 = local_88;
        FUN_141589eda(lVar7,&local_80,&local_7c,&local_98);
        local_7c = local_80;
        if (CONCAT44(uStack_94,local_98) != 0) {
          FUN_1400020a8();
        }
        if (local_a8 != 0) {
          FUN_1400020a8();
        }
      }
      plVar2 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_60 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      if (local_78 != (longlong *)0x0) {
        local_68 = &PTR_FUN_14a184370;
        local_60 = local_78;
        local_58 = local_70;
        if (local_70 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_70 + 1) = (int)local_70[1] + 1;
          UNLOCK();
        }
        local_50 = 0;
        local_c8 = (undefined1 *)((ulonglong)local_c8 & 0xffffffffffffff00);
        FUN_1414c1098(lVar7,&local_98,&local_7c,&local_68);
        local_7c = local_98;
        local_68 = &PTR_FUN_14a184370;
        (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_50])(&local_60);
        uVar5 = FUN_140b6de3c();
        FUN_140b6df48(uVar5,&local_68,lVar6,local_78);
        if (local_68 != (undefined **)0x0) {
          (**(code **)(*local_78 + 0x10))(local_78,local_88);
          local_a8 = 0;
          uStack_a0 = 0;
          (**(code **)(*local_68 + 0x18))(local_68,&local_98);
          local_c8 = local_88;
          FUN_141589eda(lVar7,&local_80,&local_7c,&local_98);
          local_7c = local_80;
          if (CONCAT44(uStack_94,local_98) != 0) {
            FUN_1400020a8();
          }
          if (local_a8 != 0) {
            FUN_1400020a8();
          }
        }
        plVar2 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_60 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
            }
          }
        }
      }
      (**(code **)(*local_b8 + 0x10))(local_b8,&local_68);
      FUN_141589e20(lVar7,&local_98,&local_7c,&local_68);
      plVar8 = local_b0;
    }
  }
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
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_70 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_70 + 0x10))(local_70);
      }
    }
  }
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
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145eeedcc FUN_145eeedcc body=1865 status=ok
// SIG undefined FUN_145eeedcc(void)

void FUN_145eeedcc(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  undefined8 uVar7;
  wchar_t *pwVar8;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  undefined8 local_150;
  longlong *local_148;
  longlong *local_140 [2];
  undefined1 local_130 [4];
  undefined1 local_12c [4];
  wchar_t *local_128 [2];
  undefined8 local_118;
  longlong *local_110;
  longlong *local_108 [2];
  longlong *local_f8 [2];
  longlong *local_e8 [2];
  longlong *local_d8 [2];
  undefined8 local_c8;
  longlong *plStack_c0;
  longlong local_b8 [3];
  undefined8 uStack_a0;
  undefined8 local_90;
  longlong *local_88;
  wchar_t **local_80;
  ulonglong *local_78;
  longlong local_70;
  undefined4 local_68;
  wchar_t *local_60;
  undefined4 local_58;
  longlong *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_b8[2] = 0;
  uStack_a0 = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_c8 = 0;
  plStack_c0 = (longlong *)0x0;
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  uVar7 = (**(code **)(*(longlong *)param_1[6] + 0x180))();
  local_158 = &local_c8;
  cVar6 = FUN_145eef516(uVar7,uVar3,local_b8 + 2,local_b8);
  if (cVar6 == '\0') {
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
  else {
    iVar5 = (int)uStack_a0;
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
    if (1 < iVar5) {
      (**(code **)(*param_1 + 0x108))(param_1,local_b8,local_b8 + 2);
    }
  }
  FUN_144a5dc74(local_d8);
  FUN_144a5dc74(local_e8);
  if (param_3 == 0) {
    local_60 = L"PlayerJoinedPartyHeader";
    local_58 = 0x17;
    FUN_1446e940c(&local_70,&local_60);
    local_60 = L"GbxNetwork";
    local_58 = 10;
    FUN_1446e940c(&local_80,&local_60);
    FUN_140208bae(&local_60,&local_80,&local_70,L"Player Joined!");
    FUN_140008f88(local_d8,&local_60);
    if (local_60 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_60 + 0x10))();
    }
    if ((int)uStack_a0 < 2) {
      local_60 = L"PlayerJoinedPartyMessage_NoName";
      local_58 = 0x1f;
      FUN_1446e940c(&local_70,&local_60);
      local_60 = L"GbxNetwork";
      local_58 = 10;
      FUN_1446e940c(&local_80,&local_60);
      pwVar8 = L"A player joined the party.";
LAB_145eef494:
      FUN_140208bae(&local_60,&local_80,&local_70,pwVar8);
      FUN_140008f88(local_e8,&local_60);
      local_128[0] = local_60;
      goto LAB_145eef2c3;
    }
    FUN_140009b9a(local_108,local_b8 + 2);
    local_60 = L"PlayerJoinedPartyMessage";
    local_58 = 0x18;
    FUN_1446e940c(local_12c,&local_60);
    local_60 = L"GbxNetwork";
    local_58 = 10;
    FUN_1446e940c(local_130,&local_60);
    FUN_140208bae(local_128,local_130,local_12c,L"{0} has joined the party.");
    FUN_14023409e(&local_118,local_128,1);
    local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
    FUN_14023423e(local_50,local_108);
    local_78 = &local_40;
    local_80 = &local_60;
    FUN_14010d304(&local_70);
    local_90 = local_118;
    local_88 = local_110;
    if (local_110 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_110 + 1) = (int)local_110[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_f8,&local_90,&local_70);
    FUN_14007f2db(local_70,local_68);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    local_140[0] = local_108[0];
    if (local_110 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_110 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_110)(local_110);
        LOCK();
        piVar2 = (int *)((longlong)local_110 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        local_140[0] = local_108[0];
        if (*piVar2 == 0) {
          (**(code **)(*local_110 + 0x10))(local_110);
          local_140[0] = local_108[0];
        }
      }
    }
  }
  else {
    local_60 = L"PlayerLeftPartyHeader";
    local_58 = 0x15;
    FUN_1446e940c(&local_70,&local_60);
    local_60 = L"GbxNetwork";
    local_58 = 10;
    FUN_1446e940c(&local_80,&local_60);
    FUN_140208bae(&local_60,&local_80,&local_70,L"Player Left!");
    FUN_140008f88(local_d8,&local_60);
    if (local_60 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_60 + 0x10))();
    }
    if ((int)uStack_a0 < 2) {
      local_60 = L"PlayerLeftPartyMessage_NoName";
      local_58 = 0x1d;
      FUN_1446e940c(&local_70,&local_60);
      local_60 = L"GbxNetwork";
      local_58 = 10;
      FUN_1446e940c(&local_80,&local_60);
      pwVar8 = L"A player left the party.";
      goto LAB_145eef494;
    }
    FUN_140009b9a(local_140,local_b8 + 2);
    local_60 = L"PlayerLeftPartyMessage";
    local_58 = 0x16;
    FUN_1446e940c(local_12c,&local_60);
    local_60 = L"GbxNetwork";
    local_58 = 10;
    FUN_1446e940c(local_130,&local_60);
    FUN_140208bae(local_128,local_130,local_12c,L"{0} has left the party.");
    FUN_14023409e(&local_150,local_128,1);
    local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
    FUN_14023423e(local_50,local_140);
    local_78 = &local_40;
    local_80 = &local_60;
    FUN_14010d304(&local_70);
    local_90 = local_150;
    local_88 = local_148;
    if (local_148 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_148 + 1) = (int)local_148[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_f8,&local_90,&local_70);
    FUN_14007f2db(local_70,local_68);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    if (local_148 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_148 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_148)(local_148);
        LOCK();
        piVar2 = (int *)((longlong)local_148 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_148 + 0x10))(local_148);
        }
      }
    }
  }
  if (local_140[0] != (longlong *)0x0) {
    (**(code **)(*local_140[0] + 0x10))();
  }
  FUN_140008f88(local_e8,local_f8);
  if (local_f8[0] != (longlong *)0x0) {
    (**(code **)(*local_f8[0] + 0x10))();
  }
LAB_145eef2c3:
  if (local_128[0] != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_128[0] + 0x10))();
  }
  (**(code **)(*param_1 + 0x118))(param_1,local_d8,local_e8);
  if (local_e8[0] != (longlong *)0x0) {
    (**(code **)(*local_e8[0] + 0x10))();
  }
  if (local_d8[0] != (longlong *)0x0) {
    (**(code **)(*local_d8[0] + 0x10))();
  }
  plVar4 = plStack_c0;
  if (plStack_c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_c0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_c0)(plStack_c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_b8[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145eef516 FUN_145eef516 body=233 status=ok
// SIG undefined FUN_145eef516(void)

byte FUN_145eef516(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte bVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  short local_5c [2];
  undefined **local_58;
  undefined1 local_50 [16];
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((param_1 == 0) || (lVar2 = FUN_1400f6f32(), lVar2 == 0)) ||
     (lVar2 = *(longlong *)(lVar2 + 0x68), lVar2 == 0)) {
    bVar1 = 0;
  }
  else {
    FUN_140b6e6be(&local_58,param_2);
    FUN_140b6e764(lVar2,local_5c,&local_58);
    local_58 = &PTR_FUN_14a184370;
    bVar1 = (byte)local_50;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_40])();
    if (-1 < local_5c[0]) {
      local_70 = param_5;
      local_78 = param_4;
      bVar1 = FUN_140b673b8(lVar2,local_5c,0,param_3);
    }
    bVar1 = -1 < local_5c[0] & bVar1;
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar1;
}



// FUNCTION 145eef600 FUN_145eef600 body=615 status=ok
// SIG undefined FUN_145eef600(void)

void FUN_145eef600(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_b8 [32];
  byte *local_98;
  longlong *local_90;
  code *local_88;
  undefined1 *local_80;
  longlong local_78;
  char local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = *(longlong *)(param_1 + 0x168);
  if (lVar5 != 0) {
    lVar4 = FUN_144a5dd5e();
    lVar5 = *(longlong *)(lVar5 + 0x10);
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar5 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30)) {
      FUN_14119e5ee(param_1,0);
      if (*(char *)(param_1 + 0xce8) == '\0') {
        FUN_14119eb2c(param_1,0);
      }
      FUN_145eef868(param_1,*(char *)(param_1 + 0x178) == '\x03',0);
      local_80 = local_50;
      local_88 = FUN_140036a08;
      lVar5 = FUN_144a773aa(&local_88,&DAT_14c7585d0);
      local_88 = (code *)(lVar5 + 0x10);
      local_80 = *(undefined1 **)(lVar5 + 0x10);
      local_78 = *(longlong *)(lVar5 + 0x20);
      local_70 = '\0';
      local_68 = *(undefined8 *)(lVar5 + 0x28);
      *(code ***)(lVar5 + 0x28) = &local_88;
      *(int *)(lVar5 + 0x30) = *(int *)(lVar5 + 0x30) + 1;
      FUN_14011c349();
      if (((byte *)*param_2 != (byte *)0x0) && ((~*(byte *)*param_2 & 3) == 0)) {
        local_90 = (longlong *)CONCAT44(local_90._4_4_,DAT_14cbd02f0);
        local_98 = DAT_14cbd02e8;
        FUN_1448075d0(local_50,&local_98);
        puVar6 = (undefined8 *)FUN_144a06846(param_2,local_50);
        local_98 = (byte *)*puVar6;
        local_90 = (longlong *)puVar6[1];
        if (local_90 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_90 + 1) = (int)local_90[1] + 1;
          UNLOCK();
        }
        if (local_38 != 0) {
          FUN_1400020a8();
        }
        if ((local_98 != (byte *)0x0) && ((~*local_98 & 3) == 0)) {
          local_58 = DAT_14cbd0308;
          local_60 = DAT_14cbd0300;
          FUN_1448075d0(local_50);
          uVar7 = FUN_144a06846(&local_98,local_50);
          FUN_14158a13a(param_1,uVar7);
          if (local_38 != 0) {
            FUN_1400020a8();
          }
        }
        plVar3 = local_90;
        if (local_90 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_90 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_90)(local_90);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
      }
      if (local_70 == '\0') {
        local_70 = '\x01';
        *(int *)(local_88 + 0x20) = *(int *)(local_88 + 0x20) + -1;
        if (local_78 != *(longlong *)(local_88 + 0x10)) {
          FUN_14004673c();
        }
        *(undefined1 **)local_88 = local_80;
        *(undefined8 *)(local_88 + 0x18) = local_68;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eef868 FUN_145eef868 body=162 status=ok
// SIG undefined FUN_145eef868(void)

void FUN_145eef868(undefined8 param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_14011c349();
  iVar1 = *(int *)(lVar2 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(lVar2 + 0x38);
    lVar4 = 0;
    do {
      local_48 = *(undefined8 *)(lVar2 + lVar4);
      lVar3 = FUN_140255092(param_1,&local_48);
      if ((lVar3 != 0) && (*(char *)(lVar3 + 0x146) != param_3)) {
        FUN_145eef90c(lVar3,param_2);
      }
      lVar4 = lVar4 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar4);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eef90c FUN_145eef90c body=32 status=ok
// SIG undefined FUN_145eef90c(void)

void FUN_145eef90c(longlong param_1,char param_2)

{
  byte bVar1;
  byte bVar2;
  
  if (param_2 != '\0') {
    bVar1 = *(char *)(param_1 + 0x144) + 1;
    bVar2 = 1;
    if (1 < bVar1) {
      bVar2 = bVar1;
    }
    *(byte *)(param_1 + 0x144) = bVar2;
  }
  return;
}



// FUNCTION 145eef92c FUN_145eef92c body=336 status=ok
// SIG undefined FUN_145eef92c(void)

void FUN_145eef92c(longlong param_1)

{
  undefined1 auStack_a8 [32];
  longlong local_88;
  int local_80;
  longlong local_78;
  undefined8 local_70;
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    if (*(int *)(param_1 + 0xa8) < 2) {
      FUN_145eefa7e(&local_88);
      FUN_1412cfe60(&local_78,&local_88,(local_80 == 0) + '\r');
      FUN_1401aebe8(&local_78,L"GbxAnalytics",0xc);
      if ((longlong *)(param_1 + 0xa0) == &local_78) {
        if (local_78 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0xa0) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0xa0) = local_78;
        local_78 = 0;
        *(undefined4 *)(param_1 + 0xa8) = (undefined4)local_70;
        *(undefined4 *)(param_1 + 0xac) = local_70._4_4_;
        local_70 = 0;
      }
      if (local_88 != 0) {
        FUN_1400020a8();
      }
    }
    local_58 = 0;
    local_48 = &PTR_LAB_14a1836a0;
    local_68 = FUN_142b2eaf4;
    local_40 = param_1;
    FUN_145eefaa6();
    FUN_141237793();
    DAT_14c9a3320 = 1;
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eefa7e FUN_145eefa7e body=40 status=ok
// SIG undefined FUN_145eefa7e(void)

undefined8 FUN_145eefa7e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14047ac8c();
  FUN_1449b8608(param_1,uVar1,L"Profiling/");
  return param_1;
}



// FUNCTION 145eefaa6 FUN_145eefaa6 body=203 status=ok
// SIG undefined FUN_145eefaa6(void)

void FUN_145eefaa6(longlong *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  code *local_58 [2];
  longlong local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145eefb72();
  pcVar1 = (code *)*param_1;
  if (((DAT_14c9a3c08 & 1) == 0) && (DAT_14c9a3be8 != 0)) {
    local_48 = param_1[2];
    param_1[2] = 0;
    local_38 = (undefined4)param_1[4];
    uStack_34 = *(undefined4 *)((longlong)param_1 + 0x24);
    uStack_30 = (undefined4)param_1[5];
    uStack_2c = *(undefined4 *)((longlong)param_1 + 0x2c);
    local_28 = (undefined4)param_1[6];
    uStack_24 = *(undefined4 *)((longlong)param_1 + 0x34);
    uStack_20 = (undefined4)param_1[7];
    uStack_1c = *(undefined4 *)((longlong)param_1 + 0x3c);
    if (pcVar1 != (code *)0x0) {
      *param_1 = 0;
    }
    local_58[0] = pcVar1;
    FUN_145eefbd4(local_58);
  }
  else {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(uVar2);
  }
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eefb72 FUN_145eefb72 body=97 status=ok
// SIG undefined FUN_145eefb72(void)

void FUN_145eefb72(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a3c10) {
    FUN_144b3d300(&DAT_14c9a3c10);
    if (DAT_14c9a3c10 == -1) {
      FUN_145eefc72();
      atexit((_func_5014 *)&LAB_142b2ca72);
      _Init_thread_footer(&DAT_14c9a3c10);
      return;
    }
  }
  return;
}



// FUNCTION 145eefbd4 FUN_145eefbd4 body=158 status=ok
// SIG undefined FUN_145eefbd4(void)

void FUN_145eefbd4(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  
  if ((DAT_14c9a3c08 & 1) == 0) {
    puVar9 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    *puVar9 = 0;
    lVar1 = *param_1;
    puVar9[2] = lVar1;
    puVar9[4] = param_1[2];
    param_1[2] = 0;
    lVar6 = param_1[4];
    uVar2 = *(undefined4 *)((longlong)param_1 + 0x24);
    lVar7 = param_1[5];
    uVar3 = *(undefined4 *)((longlong)param_1 + 0x2c);
    uVar4 = *(undefined4 *)((longlong)param_1 + 0x34);
    lVar8 = param_1[7];
    uVar5 = *(undefined4 *)((longlong)param_1 + 0x3c);
    *(int *)(puVar9 + 8) = (int)param_1[6];
    *(undefined4 *)((longlong)puVar9 + 0x44) = uVar4;
    *(int *)(puVar9 + 9) = (int)lVar8;
    *(undefined4 *)((longlong)puVar9 + 0x4c) = uVar5;
    *(int *)(puVar9 + 6) = (int)lVar6;
    *(undefined4 *)((longlong)puVar9 + 0x34) = uVar2;
    *(int *)(puVar9 + 7) = (int)lVar7;
    *(undefined4 *)((longlong)puVar9 + 0x3c) = uVar3;
    if (lVar1 != 0) {
      *param_1 = 0;
    }
    if (puVar9 != (undefined8 *)0x0) {
      LOCK();
      UNLOCK();
      LOCK();
      *DAT_14c9a3bf0 = puVar9;
      DAT_14c9a3bf0 = puVar9;
      UNLOCK();
    }
    (**(code **)(*DAT_14c9a3c00 + 0x10))();
  }
  if (*param_1 == 0) {
    return;
  }
  plVar10 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar10 = (longlong *)param_1[2];
  }
                    /* WARNING: Could not recover jumptable at 0x000145eefc6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar10 + 0x10))(plVar10);
  return;
}



// FUNCTION 145eefc72 FUN_145eefc72 body=210 status=ok
// SIG undefined FUN_145eefc72(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eefc72(void)

{
  char cVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20;
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  _DAT_14c9a3be0 = &PTR_LAB_14a1831f0;
  DAT_14c9a3be8 = 0;
  DAT_14c9a3bf0 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *DAT_14c9a3bf0 = 0;
  DAT_14c9a3bf0[2] = 0;
  DAT_14c9a3bf0[4] = 0;
  DAT_14c9a3c00 = 0;
  DAT_14c9a3c08 = 0;
  _DAT_14c9a3bf8 = DAT_14c9a3bf0;
  cVar1 = FUN_144a53f06();
  if (cVar1 != '\0') {
    DAT_14c9a3c00 = FUN_1405d8a54(0);
    local_20 = 0;
    local_28 = 0xffffffffffffffff;
    DAT_14c9a3be8 = FUN_1411b1052(&DAT_14c9a3be0,L"AnalyticsWriterHelper",0x10000,2);
    FUN_145eefd46(local_18);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eefd46 FUN_145eefd46 body=225 status=ok
// SIG undefined FUN_145eefd46(void)

undefined8 FUN_145eefd46(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,3,0x10);
  local_20 = 3;
  *local_28 = &PTR_LAB_149e020b0;
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
  local_28[2] = lVar2;
  *local_28 = &PTR_FUN_14a183250;
  local_28[3] = &DAT_14c9a3be0;
  local_28[4] = FUN_145b08548;
  FUN_1448b6402(&DAT_14c8673d8,param_1,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eefe28 FUN_145eefe28 body=287 status=ok
// SIG undefined FUN_145eefe28(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145eefe28(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca60d58) {
    FUN_144b3d300(&DAT_14ca60d58);
    if (DAT_14ca60d58 == -1) {
      FUN_145eeff48();
      FUN_140db5666(&DAT_14ca60cb0,2,&DAT_14ca60c48,
                    L"TTranslucencyShadowDepthPS<TranslucencyShadowDepth_PerspectiveCorrect>",
                    L"/Engine/Private/TranslucentShadowDepthShaders.usf",L"MainOpacityPS",3,1,
                    FUN_147322138,FUN_1473220da,&LAB_1430abb62,&LAB_1473220d6,&LAB_14712ac0c,
                    &LAB_14712ac08,0x110,0);
      _DAT_14ca60cb0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_1430abb8c);
      _Init_thread_footer(&DAT_14ca60d58);
    }
  }
  return &DAT_14ca60cb0;
}



// FUNCTION 145eeff48 FUN_145eeff48 body=205 status=ok
// SIG undefined FUN_145eeff48(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eeff48(void)

{
  if ((DAT_14ca60caf & 2) == 0) {
    DAT_14ca60caf = DAT_14ca60caf | 2;
    _DAT_14ca60c50 = L"TTranslucencyShadowDepthPS<TranslucencyShadowDepth_PerspectiveCorrect>";
    _DAT_14ca60c68 = FUN_146826540;
    _DAT_14ca60c70 = FUN_146825d77;
    _DAT_14ca60c78 = FUN_146825fd6;
    _DAT_14ca60c80 = FUN_1407e02ea;
    _DAT_14ca60c88 = FUN_146826273;
    _DAT_14ca60c60 = FUN_14732209c;
    _DAT_14ca60ca0 = 0xffffffff00000110;
    _DAT_14ca60ca8 = 8;
    DAT_14ca60cac = 0;
    _DAT_14ca60c90 = &LAB_1473220d2;
    FUN_145ef0016();
    FUN_1407e00cc(&DAT_14ca60c48);
    return;
  }
  return;
}



// FUNCTION 145ef0016 FUN_145ef0016 body=133 status=ok
// SIG undefined FUN_145ef0016(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ef0016(void)

{
  _DAT_14ca635d0 = L"BASE";
  DAT_14ca635fa = 4;
  FUN_145ef009c();
  _DAT_14ca635e0 = DAT_14ca60c58;
  _DAT_14ca635d8 = &DAT_14ca63600;
  _DAT_14ca635e8 = &LAB_14682652b;
  DAT_14ca60c58 = &DAT_14ca635d0;
  DAT_14ca60cad = DAT_14ca60cad + '\x01';
  _DAT_14ca635f0 = 0x100000000;
  if (DAT_14ca63664 != '\0') {
    DAT_14ca60cae = DAT_14ca60cae + '\x01';
  }
  return;
}



// FUNCTION 145ef009c FUN_145ef009c body=313 status=ok
// SIG undefined FUN_145ef009c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ef009c(void)

{
  if ((DAT_14ca63667 & 2) == 0) {
    DAT_14ca63667 = DAT_14ca63667 | 2;
    _DAT_14ca63608 = L"FTranslucencyShadowDepthPS";
    _DAT_14ca63620 = FUN_146826540;
    _DAT_14ca63628 = FUN_146825d77;
    _DAT_14ca63630 = FUN_146825fd6;
    _DAT_14ca63638 = FUN_1407e02ea;
    _DAT_14ca63640 = FUN_146826273;
    _DAT_14ca63618 = FUN_147328c62;
    _DAT_14ca63658 = 0xffffffff00000110;
    _DAT_14ca63660 = 8;
    DAT_14ca63664 = 0;
    _DAT_14ca63648 = &LAB_147328c98;
    _DAT_14ca63668 = L"TranslucentShadowStartOffset";
    DAT_14ca63692 = FUN_140850cc5();
    _DAT_14ca63670 = FUN_140ec6960();
    _DAT_14ca63680 = &LAB_14682652b;
    _DAT_14ca63688 = &DAT_100000108;
    _DAT_14ca63690 = 0;
    _DAT_14ca63678 = DAT_14ca63610;
    DAT_14ca63610 = &DAT_14ca63668;
    FUN_145ef01d6();
    FUN_1407e00cc(&DAT_14ca63600);
    return;
  }
  return;
}



// FUNCTION 145ef01d6 FUN_145ef01d6 body=123 status=ok
// SIG undefined FUN_145ef01d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ef01d6(void)

{
  _DAT_14ca63698 = L"BASE";
  DAT_14ca636c2 = 4;
  _DAT_14ca636a0 = FUN_141092e92();
  _DAT_14ca636a8 = DAT_14ca63610;
  _DAT_14ca636b0 = &LAB_14682652b;
  DAT_14ca63610 = &DAT_14ca63698;
  DAT_14ca63665 = DAT_14ca63665 + '\x01';
  _DAT_14ca636b8 = 0x100000000;
  if (*(char *)(_DAT_14ca636a0 + 100) != '\0') {
    DAT_14ca63666 = DAT_14ca63666 + '\x01';
  }
  return;
}



// FUNCTION 145ef025c FUN_145ef025c body=782 status=ok
// SIG undefined FUN_145ef025c(void)

undefined8 * FUN_145ef025c(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14ab5ce80;
  *(undefined4 *)(param_1 + 0x16) = 0x12a51212;
  param_1[0x17] = "spawner_style";
  lVar4 = FUN_145ef056c();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145ef0333;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145ef0333:
  lVar4 = FUN_140cd38ec();
  if (lVar4 == 0) {
    param_1[0x5f] = 0;
    param_1[0x60] = 0;
    param_1[0x61] = 0;
    *(undefined4 *)(param_1 + 99) = 0;
    if (*(int *)((longlong)param_1 + 0x31c) < 0) {
      FUN_1446f8c06(param_1 + 0x62,0);
    }
    puVar2 = (undefined2 *)param_1[0x62];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x60) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x304) = uStack_44;
    *(undefined4 *)(param_1 + 0x61) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x30c) = uStack_3c;
    if (param_1 + 0x60 == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x62] != 0) {
        FUN_1400020a8();
      }
      param_1[0x62] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 99) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x31c) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5f] = 0;
        goto LAB_145ef03c8;
      }
    }
    FUN_14485c47a(param_1 + 0x5f,lVar4);
  }
LAB_145ef03c8:
  FUN_1400b22c2(local_58,"AI.Spawner Style ");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ef056c FUN_145ef056c body=55 status=ok
// SIG undefined FUN_145ef056c(void)

void FUN_145ef056c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1a9d8 == 0) {
    uVar1 = FUN_140eca898();
    DAT_14cb1a9d8 = FUN_140002ddd(FUN_146419307,uVar1,L"SpawnerStyleDef");
  }
  return;
}



// FUNCTION 145ef05ae FUN_145ef05ae body=782 status=ok
// SIG undefined FUN_145ef05ae(void)

undefined8 * FUN_145ef05ae(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14ab9f3e0;
  *(undefined4 *)(param_1 + 0x16) = 0xc;
  param_1[0x17] = "stance";
  FUN_1400b22c2(local_58,"Stance");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_140bed5ca();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145ef06a6;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145ef06a6:
  lVar4 = FUN_145ef08be();
  if (lVar4 == 0) {
    param_1[0x5f] = 0;
    param_1[0x60] = 0;
    param_1[0x61] = 0;
    *(undefined4 *)(param_1 + 99) = 0;
    if (*(int *)((longlong)param_1 + 0x31c) < 0) {
      FUN_1446f8c06(param_1 + 0x62,0);
    }
    puVar2 = (undefined2 *)param_1[0x62];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x60) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x304) = uStack_44;
    *(undefined4 *)(param_1 + 0x61) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x30c) = uStack_3c;
    if (param_1 + 0x60 == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x62] != 0) {
        FUN_1400020a8();
      }
      param_1[0x62] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 99) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x31c) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5f] = 0;
        goto LAB_145ef073b;
      }
    }
    FUN_14485c47a(param_1 + 0x5f,lVar4);
  }
LAB_145ef073b:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ef08be FUN_145ef08be body=55 status=ok
// SIG undefined FUN_145ef08be(void)

void FUN_145ef08be(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1c3e8 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1c3e8 = FUN_140002ddd(FUN_14642019f,uVar1,L"GbxStanceDef");
  }
  return;
}



// FUNCTION 145ef08f6 FUN_145ef08f6 body=352 status=ok
// SIG undefined FUN_145ef08f6(void)

void FUN_145ef08f6(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *(undefined1 *)(param_1 + 0x51) = 0;
  plVar3 = *(longlong **)(param_1 + 0x110);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x110) = 0;
    (**(code **)(*plVar3 + 0x38))();
  }
  lVar4 = *(longlong *)(param_1 + 0x78);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x78) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x80);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x80) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x88);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x88) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar4 = *(longlong *)(param_1 + -8);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + -8) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_145ef0a56(param_1 + -0x10,&DAT_14ca85100,0);
  return;
}



// FUNCTION 145ef0a56 FUN_145ef0a56 body=250 status=ok
// SIG undefined FUN_145ef0a56(void)

void FUN_145ef0a56(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 != param_3) {
    *(longlong *)(param_1 + 0x20) = param_3;
    if (param_3 != 0) {
      LOCK();
      *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
      UNLOCK();
    }
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  lVar4 = *(longlong *)(param_1 + 8);
  if (lVar4 != param_3) {
    *(longlong *)(param_1 + 8) = param_3;
    if (param_3 != 0) {
      LOCK();
      *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
      UNLOCK();
    }
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  FUN_14158aa12(param_2,*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x128) + 0x10)
                ,param_3);
  if (*(longlong **)(param_1 + 8) == (longlong *)0x0) {
    **(undefined8 **)(param_1 + 0xa8) = DAT_14c967818;
  }
  else {
    lVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 8))();
    uVar3 = *(undefined4 *)(lVar4 + 0x28);
    lVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 8))();
    **(undefined8 **)(param_1 + 0xa8) = CONCAT44(uVar3,*(undefined4 *)(lVar4 + 0x24));
  }
  return;
}



// FUNCTION 145ef0b50 FUN_145ef0b50 body=144 status=ok
// SIG undefined FUN_145ef0b50(void)

code * FUN_145ef0b50(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145ef0be0();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VectorFieldUniformParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FVectorFieldUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x320000004b5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14caf4120;
  return FUN_145ef2148;
}



// FUNCTION 145ef0be0 FUN_145ef0be0 body=278 status=ok
// SIG undefined FUN_145ef0be0(void)

undefined * FUN_145ef0be0(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf41a0) {
    FUN_144b3d300(&DAT_14caf41a0);
    if (DAT_14caf41a0 == -1) {
      FUN_145ef0cf8(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"VectorFields";
      local_78 = L"FVectorFieldUniformParameters";
      local_50 = 0x310;
      local_58 = 0x464;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caf4120,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1435d0840);
      _Init_thread_footer(&DAT_14caf41a0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14caf4120;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ef0cf8 FUN_145ef0cf8 body=226 status=ok
// SIG undefined FUN_145ef0cf8(void)

longlong * FUN_145ef0cf8(longlong *param_1)

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
  pcVar13 = FUN_1463f002a;
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



// FUNCTION 145ef0ddc FUN_145ef0ddc body=136 status=ok
// SIG undefined FUN_145ef0ddc(void)

code * FUN_145ef0ddc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"WorldToVolume";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000467;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c230ca;
}



// FUNCTION 145ef0e64 FUN_145ef0e64 body=138 status=ok
// SIG undefined FUN_145ef0e64(void)

code * FUN_145ef0e64(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VolumeSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2900000046a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c23040;
}



// FUNCTION 145ef0eee FUN_145ef0eee body=138 status=ok
// SIG undefined FUN_145ef0eee(void)

code * FUN_145ef0eee(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VolumeToWorld";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x15000000468;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ef0ddc;
}



// FUNCTION 145ef0f78 FUN_145ef0f78 body=114 status=ok
// SIG undefined FUN_145ef0f78(void)

bool FUN_145ef0f78(void)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145ef0feb();
  uVar1 = FUN_144a52528();
  FUN_1446f470e(&local_28,L"CoreUObject",1);
  lVar2 = FUN_1402c9134(uVar1,local_28,local_1c,0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ef0feb FUN_145ef0feb body=91 status=ok
// SIG undefined FUN_145ef0feb(void)

void FUN_145ef0feb(void)

{
  longlong lVar1;
  undefined1 auStack_38 [40];
  undefined1 local_10 [8];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (DAT_14c963f70 == '\0') {
    DAT_14c963f70 = '\x01';
    lVar1 = FUN_144a52528();
    FUN_145ef1048(lVar1 + 0x350,local_10,FUN_14118da67);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ef1048 FUN_145ef1048 body=217 status=ok
// SIG undefined FUN_145ef1048(void)

undefined8 FUN_145ef1048(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  local_30 = 2;
  *local_38 = &PTR_LAB_149eae4d0;
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
  *local_38 = &PTR_FUN_149eae460;
  local_38[3] = param_3;
  FUN_145941952(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ef1122 FUN_145ef1122 body=293 status=ok
// SIG undefined FUN_145ef1122(void)

void FUN_145ef1122(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  code **local_58;
  code *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *(undefined4 *)(param_5 + 1);
  local_48 = (code *)*param_5;
  plVar1 = (longlong *)(param_1 + 0x138);
  uVar3 = FUN_14158aa36(param_2,param_3,param_4);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  local_48 = (code *)*param_3;
  lVar4 = FUN_14063edce(&DAT_14cb91658,&local_48);
  if (lVar4 != 0) {
    local_48 = FUN_140ed4b7e;
    local_40 = 0;
    local_58 = &local_48;
    lVar4 = FUN_14063efbe(param_2,lVar4,1,param_1);
    uVar3 = *(undefined4 *)(lVar4 + 8);
    iVar2 = *(int *)(param_1 + 0x140);
    *(uint *)(param_1 + 0x140) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
      FUN_1447808da(plVar1,iVar2);
    }
    *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ef1248 FUN_145ef1248 body=146 status=ok
// SIG undefined FUN_145ef1248(void)

void FUN_145ef1248(longlong param_1)

{
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  code *local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined4 *)(param_1 + 0x48) = 0;
  local_48 = FUN_1414f3c90;
  local_40 = 0;
  FUN_145ef159a(local_38,param_1,&local_48);
  local_48 = *(code **)(param_1 + 0x30);
  local_58 = local_38;
  FUN_145ef12dc(param_1 + 0x20,&local_48,*(undefined8 *)(param_1 + 0x38),param_1 + 0x50);
  FUN_1449db362(local_38);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ef12dc FUN_145ef12dc body=340 status=ok
// SIG undefined FUN_145ef12dc(void)

void FUN_145ef12dc(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  longlong **local_78;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar3 = (longlong *)FUN_14001cc68(0x198,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b4f30f0;
  plVar1 = plVar3 + 2;
  local_58 = (longlong *)*param_5;
  local_78 = &local_58;
  *param_5 = 0;
  local_50 = (longlong *)CONCAT44(local_50._4_4_,*(undefined4 *)(param_5 + 1));
  *(undefined4 *)(param_5 + 1) = 0;
  FUN_145ef14d4(plVar1,*param_2,param_3,param_4);
  local_68 = plVar1;
  local_60 = plVar3;
  FUN_145ef1432(&local_68,plVar1);
  local_58 = plVar1;
  local_50 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_145944280(param_1,&local_58);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_145944280(param_1);
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
  }
  plVar1 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_60 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ef1432 FUN_145ef1432 body=162 status=ok
// SIG undefined FUN_145ef1432(void)

void FUN_145ef1432(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145ef1471;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145ef1471;
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
LAB_145ef1471:
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
                    /* WARNING: Could not recover jumptable at 0x000145ef14d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145ef14d4 FUN_145ef14d4 body=198 status=ok
// SIG undefined FUN_145ef14d4(void)

undefined8 *
FUN_145ef14d4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,longlong param_4,
             undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  iVar2 = DAT_14cb970bc + 1;
  *(int *)((longlong)param_1 + 0x1c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar2;
  param_1[5] = 0;
  param_1[6] = param_2;
  *param_1 = &PTR_FUN_14b4f3110;
  param_1[4] = &PTR_FUN_14b4f3138;
  param_1[7] = *param_3;
  lVar1 = param_3[1];
  param_1[8] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  FUN_14589e2aa(param_1 + 9,param_4);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_4 + 0x118);
  *(undefined4 *)(param_1 + 0x2d) = 5;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  FUN_1459dad1c(param_1 + 0x2e,param_5);
  param_1[0x30] = 0;
  FUN_1449db362(param_5);
  return param_1;
}



// FUNCTION 145ef159a FUN_145ef159a body=428 status=ok
// SIG undefined FUN_145ef159a(void)

longlong * FUN_145ef159a(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_145ef167a:
    *puVar5 = &PTR_LAB_14b4edb10;
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
    *puVar5 = &PTR_FUN_14b4f31f0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145ef167a;
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
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b4edb10;
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
    *puVar5 = &PTR_FUN_14b4f31f0;
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



// FUNCTION 145ef1746 FUN_145ef1746 body=144 status=ok
// SIG undefined FUN_145ef1746(void)

code * FUN_145ef1746(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145ef17d6();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GearboxPrimitive";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FGearboxPrimitiveUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3100000004c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14cb02f08;
  return FUN_147cf47ba;
}



// FUNCTION 145ef17d6 FUN_145ef17d6 body=278 status=ok
// SIG undefined FUN_145ef17d6(void)

undefined * FUN_145ef17d6(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb02f88) {
    FUN_144b3d300(&DAT_14cb02f88);
    if (DAT_14cb02f88 == -1) {
      FUN_145ef18ee(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"GearboxPrimitive";
      local_78 = L"FGearboxPrimitiveUniformShaderParameters";
      local_50 = 0x50;
      local_58 = 10;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb02f08,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1436a2702);
      _Init_thread_footer(&DAT_14cb02f88);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb02f08;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ef18ee FUN_145ef18ee body=226 status=ok
// SIG undefined FUN_145ef18ee(void)

longlong * FUN_145ef18ee(longlong *param_1)

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
  pcVar13 = FUN_1463fecf6;
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



// FUNCTION 145ef19d2 FUN_145ef19d2 body=138 status=ok
// SIG undefined FUN_145ef19d2(void)

code * FUN_145ef19d2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bReceiveSecondaryDecals";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc0000000e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ef1ae6;
}



// FUNCTION 145ef1a5c FUN_145ef1a5c body=138 status=ok
// SIG undefined FUN_145ef1a5c(void)

code * FUN_145ef1a5c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceShadowWPODisableDistanceSquared";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000012;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf6084;
}



// FUNCTION 145ef1ae6 FUN_145ef1ae6 body=138 status=ok
// SIG undefined FUN_145ef1ae6(void)

code * FUN_145ef1ae6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bGbxForeground";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000000d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf610e;
}



// FUNCTION 145ef1b70 FUN_145ef1b70 body=87 status=ok
// SIG undefined FUN_145ef1b70(void)

void FUN_145ef1b70(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = 0x68;
  do {
    lVar3 = *(longlong *)(param_1 + lVar4);
    if (lVar3 != 0) {
      *(undefined8 *)(param_1 + lVar4) = 0;
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar4 = lVar4 + 0x60;
  } while (lVar4 != 0x368);
  FUN_145ef1bc8(*(undefined8 *)(param_1 + 0x310));
  return;
}



// FUNCTION 145ef1bc8 FUN_145ef1bc8 body=126 status=ok
// SIG undefined FUN_145ef1bc8(void)

void FUN_145ef1bc8(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0 < (int)param_1[2]) {
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(param_1[1] + lVar4 * 8);
      if (lVar3 != 0) {
        *(undefined8 *)(param_1[1] + lVar4 * 8) = 0;
        LOCK();
        puVar1 = (uint *)(lVar3 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < (int)param_1[2]);
  }
  lVar4 = *param_1;
  if (lVar4 != 0) {
    *param_1 = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



// FUNCTION 145ef1c46 FUN_145ef1c46 body=40 status=ok
// SIG undefined FUN_145ef1c46(void)

undefined8 FUN_145ef1c46(undefined8 param_1,int param_2)

{
  FUN_145ef1c6e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ef1c6e FUN_145ef1c6e body=173 status=ok
// SIG undefined FUN_145ef1c6e(void)

void FUN_145ef1c6e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a546960;
  param_1[5] = &PTR_FUN_14a546f80;
  param_1[6] = &PTR_LAB_14a546fc0;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  if (param_1[0x6c] != 0) {
    FUN_1400020a8();
  }
  FUN_1405535a6(param_1 + 100);
  FUN_1400cab68(param_1 + 0x5f);
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
  if (param_1[0x55] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e79a(param_1);
  return;
}



// FUNCTION 145ef1d24 FUN_145ef1d24 body=205 status=ok
// SIG undefined FUN_145ef1d24(void)

undefined8 * FUN_145ef1d24(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_1400ea892(param_1,uVar1);
  *param_1 = &PTR_FUN_14aefc410;
  param_1[5] = &PTR_LAB_14aefce90;
  param_1[6] = &PTR_LAB_14aefced0;
  param_1[0x55] = &PTR_LAB_14aefcf20;
  param_1[0x56] = &PTR_LAB_14aefcfa0;
  param_1[0x57] = &PTR_LAB_14aefcfb0;
  param_1[0xca] = 0;
  param_1[0xd7] = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6cc) = 0;
  *(byte *)((longlong)param_1 + 0x2d6) = *(byte *)((longlong)param_1 + 0x2d6) & 0xfd;
  *(byte *)((longlong)param_1 + 0x2d5) = *(byte *)((longlong)param_1 + 0x2d5) & 0xdf;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xfd;
  *(undefined1 *)(param_1 + 0xd2) = 1;
  FUN_1400ea934(param_1,DAT_14cad0f30,1);
  return param_1;
}



// FUNCTION 145ef1dfa FUN_145ef1dfa body=205 status=ok
// SIG undefined FUN_145ef1dfa(void)

undefined8 * FUN_145ef1dfa(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_1400ea892(param_1,uVar1);
  *param_1 = &PTR_FUN_14af01b20;
  param_1[5] = &PTR_LAB_14af025a0;
  param_1[6] = &PTR_LAB_14af025e0;
  param_1[0x55] = &PTR_LAB_14af02630;
  param_1[0x56] = &PTR_LAB_14af026b0;
  param_1[0x57] = &PTR_LAB_14af026c0;
  param_1[0xca] = 0;
  param_1[0xd7] = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6cc) = 0;
  *(byte *)((longlong)param_1 + 0x2d6) = *(byte *)((longlong)param_1 + 0x2d6) & 0xfd;
  *(byte *)((longlong)param_1 + 0x2d5) = *(byte *)((longlong)param_1 + 0x2d5) & 0xdf;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xfd;
  *(undefined1 *)(param_1 + 0xd2) = 1;
  FUN_1400ea934(param_1,DAT_14cad0f30,1);
  return param_1;
}



// FUNCTION 145ef1ec8 FUN_145ef1ec8 body=38 status=ok
// SIG undefined FUN_145ef1ec8(void)

undefined8 FUN_145ef1ec8(undefined8 param_1,int param_2)

{
  FUN_145ef1eee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ef1eee FUN_145ef1eee body=175 status=ok
// SIG undefined FUN_145ef1eee(void)

void FUN_145ef1eee(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b504110;
  FUN_1449db362(param_1 + 0x12);
  FUN_1449db362(param_1 + 0x10);
  FUN_144760e21(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    param_1[5] = 0;
  }
  FUN_1449db362(param_1 + 3);
  FUN_1449db362(param_1 + 1);
  return;
}



// FUNCTION 145ef1f9e FUN_145ef1f9e body=40 status=ok
// SIG undefined FUN_145ef1f9e(void)

undefined8 FUN_145ef1f9e(undefined8 param_1,int param_2)

{
  FUN_145ef1fc6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ef1fc6 FUN_145ef1fc6 body=173 status=ok
// SIG undefined FUN_145ef1fc6(void)

void FUN_145ef1fc6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc2c0c0;
  FUN_145936a30(param_1 + 0x1c);
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_140fed60e(param_1);
  return;
}



// FUNCTION 145ef207e FUN_145ef207e body=201 status=ok
// SIG undefined FUN_145ef207e(void)

undefined8 * FUN_145ef207e(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(&local_30,L"RemeshProperties",1);
  uVar1 = FUN_145a979d4();
  FUN_140486538(param_2,local_30);
  FUN_14048646a(param_2 + 0x20,local_30,uVar1,0);
  FUN_145cd02b2(param_1);
  *param_1 = &PTR_FUN_14bdbbd70;
  param_1[5] = &PTR_FUN_14bdbc110;
  param_1[0x13] = &PTR_FUN_14bdbc130;
  param_1[0x17] = &PTR_FUN_14bdbc160;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ef2148 FUN_145ef2148 body=146 status=ok
// SIG undefined FUN_145ef2148(void)

code * FUN_145ef2148(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145ef21da();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ParticleSimulationParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FParticleSimulationParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x310000004b4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14caf4088;
  return FUN_1463f0588;
}



// FUNCTION 145ef21da FUN_145ef21da body=278 status=ok
// SIG undefined FUN_145ef21da(void)

undefined * FUN_145ef21da(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf4108) {
    FUN_144b3d300(&DAT_14caf4108);
    if (DAT_14caf4108 == -1) {
      FUN_14158aaba(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"Simulation";
      local_78 = L"FParticleSimulationParameters";
      local_50 = 0x110;
      local_58 = 0x3f3;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caf4088,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1435d0834);
      _Init_thread_footer(&DAT_14caf4108);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14caf4088;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ef22f2 FUN_145ef22f2 body=138 status=ok
// SIG undefined FUN_145ef22f2(void)

code * FUN_145ef22f2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CollisionTimeBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf400000405;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1463effa2;
}



// FUNCTION 145ef237c FUN_145ef237c body=138 status=ok
// SIG undefined FUN_145ef237c(void)

code * FUN_145ef237c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OrbitPhaseBase";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd000000401;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c22940;
}



// FUNCTION 145ef2406 FUN_145ef2406 body=138 status=ok
// SIG undefined FUN_145ef2406(void)

code * FUN_145ef2406(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OrbitPhaseRange";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe000000402;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ef237c;
}



// FUNCTION 145ef2490 FUN_145ef2490 body=154 status=ok
// SIG undefined FUN_145ef2490(void)

bool FUN_145ef2490(longlong param_1,undefined8 param_2)

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



// FUNCTION 145ef2532 FUN_145ef2532 body=9 status=ok
// SIG undefined FUN_145ef2532(void)

void FUN_145ef2532(longlong param_1)

{
  FUN_145ef253c(param_1 + 0x10);
  return;
}



// FUNCTION 145ef253c FUN_145ef253c body=151 status=ok
// SIG undefined FUN_145ef253c(void)

void FUN_145ef253c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b99e830;
  plVar3 = (longlong *)param_1[0x17];
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
  plVar3 = (longlong *)param_1[0x15];
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
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_1410539fc(param_1);
  return;
}



// FUNCTION 145ef25d4 FUN_145ef25d4 body=55 status=ok
// SIG undefined FUN_145ef25d4(void)

void FUN_145ef25d4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3c268 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3c268 = FUN_140002ddd(FUN_146470b8d,uVar1,L"MeshTriCoordinate");
  }
  return;
}



// FUNCTION 145ef2612 FUN_145ef2612 body=2187 status=ok
// SIG undefined FUN_145ef2612(void)

void FUN_145ef2612(longlong *param_1,undefined8 param_2)

{
  void *pvVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x18))();
  local_58 = param_1[1];
  local_50 = (undefined4)param_1[2];
  uStack_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  uStack_48 = (undefined4)param_1[3];
  uStack_44 = *(undefined4 *)((longlong)param_1 + 0x1c);
  local_40 = (void *)0x0;
  local_38 = (int)param_1[5];
  lVar7 = (longlong)local_38;
  pvVar1 = (void *)param_1[4];
  if (lVar7 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,pvVar1,lVar7 * 2);
  }
  FUN_145ef2e9e(param_2,&local_58);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_58 = param_1[6];
  local_50 = (undefined4)param_1[7];
  uStack_4c = *(undefined4 *)((longlong)param_1 + 0x3c);
  uStack_48 = (undefined4)param_1[8];
  uStack_44 = *(undefined4 *)((longlong)param_1 + 0x44);
  local_40 = (void *)0x0;
  local_38 = (int)param_1[10];
  lVar7 = (longlong)local_38;
  pvVar1 = (void *)param_1[9];
  if (lVar7 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,pvVar1,lVar7 * 2);
  }
  FUN_145ef2e9e(param_2,&local_58);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_58 = param_1[0xb];
  local_50 = (undefined4)param_1[0xc];
  uStack_4c = *(undefined4 *)((longlong)param_1 + 100);
  uStack_48 = (undefined4)param_1[0xd];
  uStack_44 = *(undefined4 *)((longlong)param_1 + 0x6c);
  local_40 = (void *)0x0;
  local_38 = (int)param_1[0xf];
  lVar7 = (longlong)local_38;
  pvVar1 = (void *)param_1[0xe];
  if (lVar7 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,pvVar1,lVar7 * 2);
  }
  FUN_145ef2e9e(param_2,&local_58);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_58 = param_1[0x29];
  local_50 = (undefined4)param_1[0x2a];
  uStack_4c = *(undefined4 *)((longlong)param_1 + 0x154);
  uStack_48 = (undefined4)param_1[0x2b];
  uStack_44 = *(undefined4 *)((longlong)param_1 + 0x15c);
  local_40 = (void *)0x0;
  local_38 = (int)param_1[0x2d];
  lVar7 = (longlong)local_38;
  pvVar1 = (void *)param_1[0x2c];
  if (lVar7 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,pvVar1,lVar7 * 2);
  }
  FUN_145ef2e9e(param_2,&local_58);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_58 = param_1[0x1a];
  local_50 = (undefined4)param_1[0x1b];
  uStack_4c = *(undefined4 *)((longlong)param_1 + 0xdc);
  uStack_48 = (undefined4)param_1[0x1c];
  uStack_44 = *(undefined4 *)((longlong)param_1 + 0xe4);
  local_40 = (void *)0x0;
  local_38 = (int)param_1[0x1e];
  lVar7 = (longlong)local_38;
  pvVar1 = (void *)param_1[0x1d];
  if (lVar7 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,pvVar1,lVar7 * 2);
  }
  FUN_145ef2e9e(param_2,&local_58);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_58 = param_1[0x1f];
  local_50 = (undefined4)param_1[0x20];
  uStack_4c = *(undefined4 *)((longlong)param_1 + 0x104);
  uStack_48 = (undefined4)param_1[0x21];
  uStack_44 = *(undefined4 *)((longlong)param_1 + 0x10c);
  local_40 = (void *)0x0;
  local_38 = (int)param_1[0x23];
  lVar7 = (longlong)local_38;
  pvVar1 = (void *)param_1[0x22];
  if (lVar7 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,pvVar1,lVar7 * 2);
  }
  FUN_145ef2e9e(param_2,&local_58);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_58 = param_1[0x15];
  local_50 = (undefined4)param_1[0x16];
  uStack_4c = *(undefined4 *)((longlong)param_1 + 0xb4);
  uStack_48 = (undefined4)param_1[0x17];
  uStack_44 = *(undefined4 *)((longlong)param_1 + 0xbc);
  local_40 = (void *)0x0;
  local_38 = (int)param_1[0x19];
  lVar7 = (longlong)local_38;
  pvVar1 = (void *)param_1[0x18];
  if (lVar7 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,pvVar1,lVar7 * 2);
  }
  FUN_145ef2e9e(param_2,&local_58);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_58 = param_1[0x24];
  local_50 = (undefined4)param_1[0x25];
  uStack_4c = *(undefined4 *)((longlong)param_1 + 300);
  uStack_48 = (undefined4)param_1[0x26];
  uStack_44 = *(undefined4 *)((longlong)param_1 + 0x134);
  local_40 = (void *)0x0;
  local_38 = (int)param_1[0x28];
  lVar7 = (longlong)local_38;
  pvVar1 = (void *)param_1[0x27];
  if (lVar7 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,pvVar1,lVar7 * 2);
  }
  FUN_145ef2e9e(param_2,&local_58);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_58 = param_1[0x10];
  local_50 = (undefined4)param_1[0x11];
  uStack_4c = *(undefined4 *)((longlong)param_1 + 0x8c);
  uStack_48 = (undefined4)param_1[0x12];
  uStack_44 = *(undefined4 *)((longlong)param_1 + 0x94);
  local_40 = (void *)0x0;
  local_38 = (int)param_1[0x14];
  lVar7 = (longlong)local_38;
  pvVar1 = (void *)param_1[0x13];
  if (lVar7 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,pvVar1,lVar7 * 2);
  }
  FUN_145ef2e9e(param_2,&local_58);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_58 = param_1[0x2e];
  local_50 = (undefined4)param_1[0x2f];
  uStack_4c = *(undefined4 *)((longlong)param_1 + 0x17c);
  uStack_48 = (undefined4)param_1[0x30];
  uStack_44 = *(undefined4 *)((longlong)param_1 + 0x184);
  local_40 = (void *)0x0;
  local_38 = (int)param_1[0x32];
  lVar7 = (longlong)local_38;
  pvVar1 = (void *)param_1[0x31];
  if (lVar7 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,pvVar1,lVar7 * 2);
  }
  FUN_145ef2e9e(param_2,&local_58);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_58 = param_1[0x33];
  local_50 = (undefined4)param_1[0x34];
  uStack_4c = *(undefined4 *)((longlong)param_1 + 0x1a4);
  uStack_48 = (undefined4)param_1[0x35];
  uStack_44 = *(undefined4 *)((longlong)param_1 + 0x1ac);
  local_40 = (void *)0x0;
  local_38 = (int)param_1[0x37];
  lVar7 = (longlong)local_38;
  pvVar1 = (void *)param_1[0x36];
  if (lVar7 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,pvVar1,lVar7 * 2);
  }
  FUN_145ef2e9e(param_2,&local_58);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_58 = param_1[0x38];
  local_50 = (undefined4)param_1[0x39];
  uStack_4c = *(undefined4 *)((longlong)param_1 + 0x1cc);
  uStack_48 = (undefined4)param_1[0x3a];
  uStack_44 = *(undefined4 *)((longlong)param_1 + 0x1d4);
  local_40 = (void *)0x0;
  local_38 = (int)param_1[0x3c];
  lVar7 = (longlong)local_38;
  pvVar1 = (void *)param_1[0x3b];
  if (lVar7 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,pvVar1,lVar7 * 2);
  }
  FUN_145ef2e9e(param_2,&local_58);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  lVar7 = param_1[0x54];
  if (lVar7 == 0) {
    uVar4 = FUN_145c67cd8();
    lVar7 = FUN_14477b664(uVar4);
    param_1[0x54] = lVar7;
  }
  lVar5 = param_1[0x55];
  if (lVar5 == 0) {
    if ((param_1[0x53] == 0) || (lVar7 == 0)) {
      lVar5 = 0;
    }
    else {
      plVar8 = *(longlong **)(lVar7 + 0xb8);
      if ((plVar8 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar3 == '\0')) {
        lVar5 = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar8 + 0x110))(plVar8);
        lVar5 = FUN_144aff482(uVar4,param_1 + 0x53);
      }
      param_1[0x55] = lVar5;
    }
  }
  FUN_145d2ddce(param_2,lVar5);
  if ((longlong)(int)param_1[0x6b] != 0) {
    plVar8 = (longlong *)param_1[0x6a];
    lVar7 = (longlong)(int)param_1[0x6b] * 0x18;
    do {
      lVar5 = plVar8[1];
      if (lVar5 == 0) {
        uVar4 = FUN_140b79a36();
        lVar5 = FUN_14477b664(uVar4);
        plVar8[1] = lVar5;
      }
      lVar6 = plVar8[2];
      if (lVar6 == 0) {
        if (lVar5 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = 0;
          if (*plVar8 != 0) {
            plVar2 = *(longlong **)(lVar5 + 0xb8);
            if ((plVar2 == (longlong *)0x0) ||
               (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
              lVar6 = 0;
            }
            else {
              uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
              lVar6 = FUN_144aff482(uVar4,plVar8);
            }
            plVar8[2] = lVar6;
          }
        }
      }
      FUN_145d2ddce(param_2,lVar6);
      plVar8 = plVar8 + 3;
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != 0);
  }
  plVar8 = (longlong *)param_1[0x56];
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8,param_2);
  }
  FUN_14158ad12(param_1,param_2);
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ef2e9e FUN_145ef2e9e body=274 status=ok
// SIG undefined FUN_145ef2e9e(void)

void FUN_145ef2e9e(longlong param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_14479d2ce(param_2);
  if (lVar3 == 0) {
    if (*(longlong *)(param_2 + 8) == 0) goto LAB_145ef2ebf;
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_2,lVar3);
      if (lVar3 == 0) goto LAB_145ef2ebf;
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_2,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) goto LAB_145ef2ebf;
  }
  lVar4 = FUN_144a797b2();
  if ((((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) && (lVar4 = FUN_1446f8646(), lVar4 != 0)) &&
     ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38) &&
      (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
       lVar4 + 0x30)))) {
    return;
  }
LAB_145ef2ebf:
  if (*(longlong *)(param_2 + 8) == 0) {
    return;
  }
  FUN_144a6c37a(param_1 + 0x18,param_2 + 8);
  return;
}



// FUNCTION 145ef2fb0 FUN_145ef2fb0 body=142 status=ok
// SIG undefined FUN_145ef2fb0(void)

code * FUN_145ef2fb0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14158b208();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"LumenCardOutputs";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FLumenCardOutputs";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x7000000928;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f61eba;
}



// FUNCTION 145ef303e FUN_145ef303e body=226 status=ok
// SIG undefined FUN_145ef303e(void)

longlong * FUN_145ef303e(longlong *param_1)

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
  pcVar13 = FUN_1462e18b0;
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



// FUNCTION 145ef3126 FUN_145ef3126 body=132 status=ok
// SIG undefined FUN_145ef3126(void)

undefined1 * FUN_145ef3126(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutTarget0";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145ef3122;
}



// FUNCTION 145ef31aa FUN_145ef31aa body=138 status=ok
// SIG undefined FUN_145ef31aa(void)

code * FUN_145ef31aa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutTarget1";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000006e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ef3126;
}



// FUNCTION 145ef3234 FUN_145ef3234 body=278 status=ok
// SIG undefined FUN_145ef3234(void)

undefined * FUN_145ef3234(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf3800) {
    FUN_144b3d300(&DAT_14caf3800);
    if (DAT_14caf3800 == -1) {
      FUN_145ef334c(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"ParticleCurveInjection";
      local_78 = L"FParticleCurveInjectionParameters";
      local_50 = 0x10;
      local_58 = 0x27;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caf3780,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1435c606d);
      _Init_thread_footer(&DAT_14caf3800);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14caf3780;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ef334c FUN_145ef334c body=226 status=ok
// SIG undefined FUN_145ef334c(void)

longlong * FUN_145ef334c(longlong *param_1)

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
  pcVar13 = FUN_1463ef12e;
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



// FUNCTION 145ef3434 FUN_145ef3434 body=132 status=ok
// SIG undefined FUN_145ef3434(void)

undefined1 * FUN_145ef3434(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PixelScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145ef3430;
}



// FUNCTION 145ef34b8 FUN_145ef34b8 body=278 status=ok
// SIG undefined FUN_145ef34b8(void)

undefined * FUN_145ef34b8(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf4830) {
    FUN_144b3d300(&DAT_14caf4830);
    if (DAT_14caf4830 == -1) {
      FUN_145ef35d0(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"ParticleInjection";
      local_78 = L"FParticleInjectionParameters";
      local_50 = 0x10;
      local_58 = 0x6c5;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caf47b0,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1435d29e1);
      _Init_thread_footer(&DAT_14caf4830);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14caf47b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ef35d0 FUN_145ef35d0 body=226 status=ok
// SIG undefined FUN_145ef35d0(void)

longlong * FUN_145ef35d0(longlong *param_1)

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
  pcVar13 = FUN_1463f013a;
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



// FUNCTION 145ef36b8 FUN_145ef36b8 body=132 status=ok
// SIG undefined FUN_145ef36b8(void)

undefined1 * FUN_145ef36b8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TexCoordScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6c6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145ef36b4;
}



// FUNCTION 145ef373c FUN_145ef373c body=138 status=ok
// SIG undefined FUN_145ef373c(void)

code * FUN_145ef373c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf00000007f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819f160;
}



// FUNCTION 145ef37c6 FUN_145ef37c6 body=138 status=ok
// SIG undefined FUN_145ef37c6(void)

code * FUN_145ef37c6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ConnectivityBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd80000007c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819f274;
}



// FUNCTION 145ef3850 FUN_145ef3850 body=138 status=ok
// SIG undefined FUN_145ef3850(void)

code * FUN_145ef3850(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceInvDeltaTime";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x19000000083;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819efc2;
}



// FUNCTION 145ef38da FUN_145ef38da body=226 status=ok
// SIG undefined FUN_145ef38da(void)

longlong * FUN_145ef38da(longlong *param_1)

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
  pcVar13 = FUN_145e30ee2;
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



// FUNCTION 145ef39be FUN_145ef39be body=138 status=ok
// SIG undefined FUN_145ef39be(void)

code * FUN_145ef39be(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"EyeAdaptation";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000ba;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ef3ad2;
}



// FUNCTION 145ef3a48 FUN_145ef3a48 body=138 status=ok
// SIG undefined FUN_145ef3a48(void)

code * FUN_145ef3a48(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneVelocityInput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000000bb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ef39be;
}



// FUNCTION 145ef3ad2 FUN_145ef3ad2 body=138 status=ok
// SIG undefined FUN_145ef3ad2(void)

code * FUN_145ef3ad2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneDepthInput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000b9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1485f3cce;
}



// FUNCTION 145ef3b5c FUN_145ef3b5c body=53 status=ok
// SIG undefined FUN_145ef3b5c(void)

void FUN_145ef3b5c(longlong *param_1)

{
  FUN_145ef3b92();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ef3b92 FUN_145ef3b92 body=320 status=ok
// SIG undefined FUN_145ef3b92(void)

void FUN_145ef3b92(longlong *param_1)

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
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0x28) != 0) {
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



// FUNCTION 145ef3cd4 FUN_145ef3cd4 body=477 status=ok
// SIG undefined FUN_145ef3cd4(void)

LPCWSTR * FUN_145ef3cd4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  LPCWSTR *ppWVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  LPCWSTR pWVar6;
  undefined1 auStackY_a8 [32];
  longlong local_78;
  longlong local_70;
  LPCWSTR local_68;
  int local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined2 *local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStackY_a8;
  FUN_1449b8608(&local_30,param_2,L".ani");
  FUN_1449b8608(&local_40,param_2,L".cur");
  local_58 = 0;
  uStack_50 = 0;
  puVar5 = local_30;
  if (local_28 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  cVar1 = FUN_14158b496(&local_58,puVar5,2);
  if (cVar1 == '\0') {
    puVar5 = local_40;
    if (local_38 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    cVar1 = FUN_14158b496(&local_58,puVar5,2);
    if (cVar1 != '\0') goto LAB_145ef3dc6;
  }
  else {
LAB_145ef3dc6:
    uVar2 = FUN_145c83e48();
    ppWVar3 = &local_68;
    FUN_146818d70(ppWVar3,uVar2,L"Cursor-",L".temp");
    uVar2 = FUN_14054d1d4();
    pWVar6 = local_68;
    if (local_60 == 0) {
      pWVar6 = L"";
    }
    local_78 = local_58;
    local_70 = (longlong)(int)uStack_50;
    cVar1 = FUN_146810d90(&local_78,pWVar6,uVar2,0);
    if (cVar1 != '\0') {
      pWVar6 = L"";
      if (local_60 != 0) {
        pWVar6 = local_68;
      }
      ppWVar3 = LoadImageW((HINSTANCE)0x0,pWVar6,2,0,0,0x10);
      plVar4 = (longlong *)FUN_14054d1d4();
      pWVar6 = L"";
      if (local_60 != 0) {
        pWVar6 = local_68;
      }
      (**(code **)(*plVar4 + 0x30))(plVar4,pWVar6,0,0);
    }
    if (local_68 != (LPCWSTR)0x0) {
      FUN_1400020a8();
    }
    if (cVar1 != '\0') goto LAB_145ef3d76;
  }
  ppWVar3 = (LPCWSTR *)0x0;
LAB_145ef3d76:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStackY_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return ppWVar3;
}



// FUNCTION 145ef3ebe FUN_145ef3ebe body=202 status=ok
// SIG undefined FUN_145ef3ebe(void)

undefined8 * FUN_145ef3ebe(undefined8 *param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140553f2a();
  *param_1 = &PTR_FUN_14ad01410;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  lVar2 = FUN_14009d2a0();
  lVar3 = FUN_145e3d254();
  *(undefined1 *)((longlong)param_1 + 0x32) = 4;
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(lVar3 + 2);
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    uVar1 = *(undefined2 *)(lVar2 + 0x4a);
    local_20 = param_1[2];
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e();
    }
    FUN_14118c742(&local_20,uVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ef3f94 FUN_145ef3f94 body=202 status=ok
// SIG undefined FUN_145ef3f94(void)

undefined8 * FUN_145ef3f94(undefined8 *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140751bbe();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14ae30e00;
  *(undefined2 *)(param_1 + 0xf) = 0x101;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  FUN_1446ddc76(&local_20,"NormalizedNotifyProgress",1);
  *(undefined8 *)((longlong)param_1 + 0x7c) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ef405f FUN_145ef405f body=89 status=ok
// SIG undefined FUN_145ef405f(void)

void FUN_145ef405f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145c44374(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b1cf290;
  puVar1[0x80] = &PTR_FUN_14b1cf900;
  puVar1[0xa2] = 0;
  puVar1[0xa3] = 0;
  puVar1[0xa4] = 0;
  FUN_14158b53a(puVar1 + 0xa5);
  puVar1[0xb5] = 0;
  return;
}



// FUNCTION 145ef40b8 FUN_145ef40b8 body=40 status=ok
// SIG undefined FUN_145ef40b8(void)

undefined8 FUN_145ef40b8(undefined8 param_1,int param_2)

{
  FUN_14158b5b8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ef40e8 FUN_145ef40e8 body=205 status=ok
// SIG undefined FUN_145ef40e8(void)

undefined8 * FUN_145ef40e8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_14007ca06();
  FUN_140d2f8ee(param_1,uVar1);
  *param_1 = &PTR_FUN_14ba21150;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb6) = 1;
  FUN_1446f470e(&local_30,L"MATERIAL",1);
  uVar1 = FUN_1402d2740();
  local_48 = 1;
  local_40 = 0;
  uVar1 = FUN_14048696c(param_1,local_30,uVar1,uVar1);
  FUN_14485c47a(param_1 + 0x15,uVar1);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ef41b6 FUN_145ef41b6 body=62 status=ok
// SIG undefined FUN_145ef41b6(void)

void FUN_145ef41b6(undefined8 param_1)

{
  longlong lVar1;
  
  FUN_140206818();
  lVar1 = FUN_1447210f0(param_1);
  if (lVar1 != 0) {
    lVar1 = FUN_145ef41f4(lVar1);
    if (lVar1 != 0) {
      FUN_145ef4390(lVar1,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 145ef41f4 FUN_145ef41f4 body=105 status=ok
// SIG undefined FUN_145ef41f4(void)

void FUN_145ef41f4(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145ef425e();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_145ef4344(param_1 + 0x870,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ef425e FUN_145ef425e body=228 status=ok
// SIG undefined FUN_145ef425e(void)

longlong FUN_145ef425e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc28698 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_141737a50;
    local_38 = &LAB_14980b793;
    local_40 = &LAB_145a2ce98;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x1f0;
    FUN_14081cfa3(L"/Script/GbxWeatherOcclusion",L"GbxWeatherOcclusionSubsystem",&DAT_14cc28698,
                  FUN_14675fd1c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc28698;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ef4344 FUN_145ef4344 body=76 status=ok
// SIG undefined FUN_145ef4344(void)

void FUN_145ef4344(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145ef425e();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_145ef4381;
    }
  }
  lVar2 = 0;
LAB_145ef4381:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 145ef4390 FUN_145ef4390 body=332 status=ok
// SIG undefined FUN_145ef4390(void)

void FUN_145ef4390(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  void *_Src;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    iVar3 = 0;
    if ((longlong)*(int *)(param_1 + 0x58) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x50);
      lVar5 = (longlong)*(int *)(param_1 + 0x58) << 3;
      do {
        cVar2 = FUN_14980c05a(lVar4,param_2);
        if (cVar2 != '\0') goto LAB_145ef446f;
        lVar4 = lVar4 + 8;
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
      iVar3 = *(int *)(param_1 + 0x58);
    }
    *(uint *)(param_1 + 0x58) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x5c) < iVar3 + 1U) {
      FUN_145ef4538(param_1 + 0x50,iVar3);
    }
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar3 * 8);
    *puVar1 = 0;
    FUN_14485c47a(puVar1,param_2);
    local_40 = (void *)0x0;
    local_38 = *(int *)(param_1 + 0x58);
    lVar4 = (longlong)local_38;
    _Src = *(void **)(param_1 + 0x50);
    if (lVar4 == 0) {
      local_34 = 0;
    }
    else {
      FUN_145ef44de(&local_40,local_38);
      memcpy(local_40,_Src,lVar4 << 3);
    }
    FUN_14158b8e5(&local_40);
    if (*(longlong *)(param_2 + 0x390) != 0) {
      FUN_145ef45bc(*(longlong *)(param_2 + 0x390) + 0x200,local_48,param_1);
    }
    cVar2 = FUN_14158b73c(param_1);
    if (cVar2 == '\0') {
      FUN_14158c39a(param_1);
    }
    else {
      FUN_144643e04(param_1,param_2);
      FUN_145e29c0e(param_1);
    }
  }
LAB_145ef446f:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ef44de FUN_145ef44de body=89 status=ok
// SIG undefined FUN_145ef44de(void)

void FUN_145ef44de(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,4);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,4);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 145ef4538 FUN_145ef4538 body=132 status=ok
// SIG undefined FUN_145ef4538(void)

void FUN_145ef4538(longlong param_1,int param_2)

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



// FUNCTION 145ef45bc FUN_145ef45bc body=244 status=ok
// SIG undefined FUN_145ef45bc(void)

undefined8 FUN_145ef45bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_LAB_14a7feda0;
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
  *local_38 = &PTR_FUN_14be8f650;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = &LAB_14980bc3e;
  FUN_1408278de(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ef46b2 FUN_145ef46b2 body=26 status=ok
// SIG undefined FUN_145ef46b2(void)

void FUN_145ef46b2(undefined8 param_1)

{
  FUN_1404d1fb0();
  FUN_145ef46cc(param_1);
  return;
}



// FUNCTION 145ef46cc FUN_145ef46cc body=1423 status=ok
// SIG undefined FUN_145ef46cc(void)

void FUN_145ef46cc(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  void *_Src;
  longlong *plVar3;
  bool bVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  longlong lVar11;
  longlong lVar12;
  double *pdVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  undefined1 auStack_118 [40];
  undefined8 local_f0;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  uint uStack_d4;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((*(longlong *)(param_1 + 0x1a90) == 0) ||
     (lVar11 = FUN_14035f346(*(longlong *)(param_1 + 0x1a90) + 0x388), lVar11 == 0))
  goto LAB_145ef48b8;
  local_e8 = (void *)0x0;
  local_e0 = *(int *)(param_1 + 0x1bc0);
  lVar11 = (longlong)local_e0;
  _Src = *(void **)(param_1 + 0x1bb8);
  if (lVar11 == 0) {
    local_dc = 0;
  }
  else {
    FUN_1457242e8(&local_e8,local_e0,0);
    memcpy(local_e8,_Src,lVar11 << 3);
  }
  plVar1 = (longlong *)(param_1 + 0x1bb8);
  if ((*(longlong *)(param_1 + 0x1b90) == 0) &&
     (((*(char *)(param_1 + 0x1b70) != '\x01' || (lVar11 = FUN_1447210f0(param_1), lVar11 == 0)) ||
      ((double)*(float *)(param_1 + 0x1b6c) < *(double *)(lVar11 + 0x6d0) ||
       (double)*(float *)(param_1 + 0x1b6c) == *(double *)(lVar11 + 0x6d0))))) {
    lVar11 = *(longlong *)(param_1 + 0x1c8);
    if (lVar11 == 0) {
      pdVar13 = (double *)&DAT_14c8464e0;
      uVar23 = SUB84(DAT_14c8464f0,0);
      uVar24 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar23 = (undefined4)*(undefined8 *)(lVar11 + 0x270);
      uVar24 = (undefined4)((ulonglong)*(undefined8 *)(lVar11 + 0x270) >> 0x20);
      pdVar13 = (double *)(lVar11 + 0x260);
    }
    uVar2 = *(uint *)(param_1 + 0x1bc0);
    uVar14 = (ulonglong)(int)uVar2;
    if (uVar14 != 0) {
      dVar8 = *pdVar13;
      dVar9 = pdVar13[1];
      fVar25 = *(float *)(*(longlong *)(param_1 + 0x1a90) + 0x400);
      fVar25 = fVar25 * fVar25;
      plVar3 = (longlong *)*plVar1;
      lVar11 = *plVar3;
      bVar6 = true;
      if ((lVar11 != 0) && ((*(uint *)(lVar11 + 8) >> 0x1e & 1) == 0)) {
        lVar11 = *(longlong *)(lVar11 + 0x1c8);
        if (lVar11 == 0) {
          pdVar13 = (double *)&DAT_14c8464e0;
          dVar18 = DAT_14c8464f0;
        }
        else {
          pdVar13 = (double *)(lVar11 + 0x260);
          dVar18 = *(double *)(lVar11 + 0x270);
        }
        dVar5 = *pdVar13 - dVar8;
        dVar21 = pdVar13[1] - dVar9;
        dVar18 = dVar18 - (double)CONCAT44(uVar24,uVar23);
        bVar6 = fVar25 < (float)(dVar18 * dVar18 + dVar5 * dVar5 + dVar21 * dVar21);
      }
      iVar15 = 0;
      uVar17 = 0;
      dVar18 = DAT_14c8464f0;
LAB_145ef4a0b:
      do {
        iVar7 = (int)uVar17;
        uVar17 = (ulonglong)(iVar7 + 1U);
        if ((int)(iVar7 + 1U) < (int)uVar2) {
          uVar17 = (longlong)iVar7 + 1;
          bVar4 = true;
          do {
            lVar11 = plVar3[uVar17];
            if ((lVar11 == 0) || ((*(uint *)(lVar11 + 8) >> 0x1e & 1) != 0)) {
              if (!bVar6) goto LAB_145ef4bef;
            }
            else {
              lVar11 = *(longlong *)(lVar11 + 0x1c8);
              uVar19 = SUB84(dVar18,0);
              uVar20 = (undefined4)((ulonglong)dVar18 >> 0x20);
              pdVar13 = (double *)&DAT_14c8464e0;
              if (lVar11 != 0) {
                uVar19 = (undefined4)*(undefined8 *)(lVar11 + 0x270);
                uVar20 = (undefined4)((ulonglong)*(undefined8 *)(lVar11 + 0x270) >> 0x20);
                pdVar13 = (double *)(lVar11 + 0x260);
              }
              dVar21 = *pdVar13 - dVar8;
              dVar22 = pdVar13[1] - dVar9;
              dVar5 = (double)CONCAT44(uVar20,uVar19) - (double)CONCAT44(uVar24,uVar23);
              if ((bool)(fVar25 < (float)(dVar5 * dVar5 + dVar21 * dVar21 + dVar22 * dVar22) ^ bVar6
                        )) goto LAB_145ef4bd4;
            }
            uVar17 = uVar17 + 1;
            bVar4 = (longlong)uVar17 < (longlong)uVar14;
          } while (uVar17 != uVar14);
          uVar17 = (ulonglong)uVar2;
LAB_145ef4bd4:
          if (bVar6) {
            bVar6 = false;
            if (!bVar4) break;
            goto LAB_145ef4a0b;
          }
        }
        else {
          if (bVar6) break;
          bVar4 = false;
        }
LAB_145ef4bef:
        iVar16 = (int)uVar17 - iVar7;
        if (iVar15 != iVar7) {
          memmove(plVar3 + iVar15,plVar3 + iVar7,(longlong)iVar16 << 3);
          dVar18 = DAT_14c8464f0;
        }
        iVar15 = iVar15 + iVar16;
        bVar6 = true;
      } while (bVar4);
      *(int *)(param_1 + 0x1bc0) = iVar15;
    }
  }
  lVar11 = (longlong)*(int *)(param_1 + 0x1b54) * 0x60 +
           *(longlong *)(*(longlong *)(param_1 + 0x1a90) + 0x360);
  if ((*(int *)(param_1 + 0x1bc0) == 0) &&
     ((FUN_145d8abce(param_1,5), *(char *)(lVar11 + 0x39) != '\x01' ||
      (cVar10 = FUN_14079e1ea(param_1 + 0x1c18,0), cVar10 != '\0')))) {
    if (*(longlong *)(param_1 + 0x1b90) != 0) {
      FUN_147ac84c0(plVar1,&local_e8);
      goto LAB_145ef47bb;
    }
    uStack_d4 = uStack_d4 & 0xffffff00;
    local_c8 = DAT_14cb71468;
    local_c0 = 0xffffffff;
    FUN_141094e00(param_1 + 0x4d8,&local_c8,0);
    FUN_145ef4d10(param_1,&DAT_14cb71450,0);
    FUN_140cbebe8(param_1 + 0x30,0);
  }
  else {
LAB_145ef47bb:
    local_c8 = DAT_14c9a6400;
    local_c0 = 0xffffffff;
    local_d8 = (undefined4)DAT_14cb71468;
    uStack_d4 = (uint)((ulonglong)DAT_14cb71468 >> 0x20);
    local_d0 = 0xffffffff;
    cVar10 = FUN_1400b1204(param_1 + 0x4d8);
    if (cVar10 == '\0') {
      uStack_d4 = uStack_d4 & 0xffffff00;
      local_c8 = DAT_14cb71468;
      local_c0 = 0xffffffff;
      FUN_141094e00(param_1 + 0x4d8,&local_c8,1);
      FUN_145ef4d10(param_1,&DAT_14cb71450,1);
      FUN_140cbebe8(param_1 + 0x30,1);
    }
    if (*(char *)(lVar11 + 0x39) == '\0') {
      lVar12 = *(longlong *)*plVar1;
    }
    else {
      if (*(char *)(lVar11 + 0x39) != '\x01') goto LAB_145ef48a9;
      lVar12 = FUN_14479d2ce(param_1 + 0x1c18);
    }
    if (lVar12 != 0) {
      local_d8 = CONCAT31(local_d8._1_3_,2);
      uStack_d4 = 0;
      local_d0 = 0;
      local_f0 = 0;
      FUN_14485c47a(&local_f0);
      FUN_145ef4c5c(&local_c8,&local_f0,&local_d8,0);
      cVar10 = *(char *)(lVar11 + 0x3a);
      lVar12 = FUN_144a782da(param_1 + 0xa98,&DAT_14cb72620);
      if (lVar12 != 0) {
        if (cVar10 == '\0') {
          FUN_140c82872(lVar12,5);
        }
        else {
          FUN_1406ebff6(lVar12,5,&local_c8);
        }
      }
      cVar10 = *(char *)(lVar11 + 0x3b);
      lVar11 = FUN_144a782da(param_1 + 0xa98,&DAT_14cb72628);
      if (lVar11 != 0) {
        if (cVar10 == '\0') {
          FUN_140c82872(lVar11,5);
        }
        else {
          FUN_1406ebff6(lVar11,5,&local_c8);
        }
      }
    }
  }
LAB_145ef48a9:
  if (local_e8 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_145ef48b8:
  if ((local_80 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ef4c5c FUN_145ef4c5c body=178 status=ok
// SIG undefined FUN_145ef4c5c(void)

undefined4 *
FUN_145ef4c5c(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = *param_2;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_14485c47a(&uStack_58,param_4);
  local_50 = 0;
  uStack_48 = 0;
  local_40 = *param_3;
  uStack_38 = *(undefined4 *)(param_3 + 1);
  FUN_14070d956(&local_70);
  param_1[0xc] = (undefined4)local_40;
  param_1[0xd] = local_40._4_4_;
  param_1[0xe] = uStack_38;
  param_1[0xf] = uStack_34;
  param_1[8] = (undefined4)local_50;
  param_1[9] = local_50._4_4_;
  param_1[10] = (undefined4)uStack_48;
  param_1[0xb] = uStack_48._4_4_;
  param_1[4] = (undefined4)uStack_60;
  param_1[5] = uStack_60._4_4_;
  param_1[6] = (undefined4)uStack_58;
  param_1[7] = uStack_58._4_4_;
  *param_1 = (undefined4)local_70;
  param_1[1] = local_70._4_4_;
  param_1[2] = (undefined4)uStack_68;
  param_1[3] = uStack_68._4_4_;
  *(undefined1 *)(param_1 + 0x10) = 2;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ef4d10 FUN_145ef4d10 body=190 status=ok
// SIG undefined FUN_145ef4d10(void)

void FUN_145ef4d10(longlong param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  char cVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 *local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = *(char *)(param_1 + 0x1c20);
  if (param_3 == '\0') {
    FUN_1400bc8c2((char *)(param_1 + 0x1c20));
  }
  else {
    FUN_1400bc96c();
  }
  cVar2 = *(char *)(param_1 + 0x1c20);
  if (cVar2 == '\x01' && cVar1 == '\0') {
    local_38 = &LAB_143cbcafc;
  }
  else {
    if (cVar1 != '\x01' || cVar2 != '\0') goto LAB_145ef4daf;
    local_38 = &LAB_143cbcb14;
  }
  local_30 = &local_40;
  local_40 = param_2;
  FUN_1400b7536(param_1 + 0xa98);
LAB_145ef4daf:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ef4dd0 FUN_145ef4dd0 body=139 status=ok
// SIG undefined FUN_145ef4dd0(void)

void FUN_145ef4dd0(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14158cbd4();
  cVar2 = FUN_144729dda(param_1 + 0x30);
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  else {
    local_40 = param_1;
    FUN_145ef4e5c(local_38,param_1);
    uVar1 = *(undefined4 *)(param_1 + 0x48);
    uVar3 = FUN_14479d2ce(param_1 + 0x30);
    FUN_14158ca84(uVar3,uVar1,param_1 + 0x50,local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ef4e5c FUN_145ef4e5c body=422 status=ok
// SIG undefined FUN_145ef4e5c(void)

longlong * FUN_145ef4e5c(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_145ef4f36:
    *puVar3 = &PTR_LAB_14b4f3a00;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b4f0ad0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = *param_3;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_145ef4f36;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14b4f3a00;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b4f0ad0;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = *param_3;
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



// FUNCTION 145ef500a FUN_145ef500a body=279 status=ok
// SIG undefined FUN_145ef500a(void)

undefined8 * FUN_145ef500a(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar4 = FUN_14007ca06();
  FUN_1413d1192(param_1,uVar4);
  *param_1 = &PTR_FUN_14aeba8b0;
  *(undefined2 *)(param_1 + 0x21) = 0x101;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x25) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 300) = uVar1;
  *(undefined4 *)(param_1 + 0x26) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x134) = uVar3;
  param_1[0x27] = DAT_14c8464f0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0x3ff0000000000000;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0x3ff0000000000000;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0x3fc00000;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x2f) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x3f400000;
  param_1[0x30] = 0x20;
  lVar5 = FUN_145ef5121(DAT_14c951640);
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar5);
  }
  param_1[0x22] = lVar5;
  lVar5 = FUN_145ef51d3(DAT_14c951640);
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar5);
  }
  param_1[0x23] = lVar5;
  param_1[0x24] = 0;
  return param_1;
}



// FUNCTION 145ef5121 FUN_145ef5121 body=177 status=ok
// SIG undefined FUN_145ef5121(void)

undefined8 FUN_145ef5121(undefined8 param_1)

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
  local_b8 = FUN_1459954c0();
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



// FUNCTION 145ef51d3 FUN_145ef51d3 body=177 status=ok
// SIG undefined FUN_145ef51d3(void)

undefined8 FUN_145ef51d3(undefined8 param_1)

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
  local_b8 = FUN_1459953d4();
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



// FUNCTION 145ef5286 FUN_145ef5286 body=249 status=ok
// SIG undefined FUN_145ef5286(void)

undefined8 * FUN_145ef5286(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  FUN_145ef53a4();
  *param_1 = &PTR_FUN_14b983950;
  param_1[0x2d] = param_2;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  uVar1 = (**(code **)(*param_2 + 0x2d0))(param_2);
  FUN_145ef5380(param_1 + 0x30,uVar1);
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined8 *)((longlong)param_1 + 0x20a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x212) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x224) = 0;
  *(undefined1 *)((longlong)param_1 + 0x22c) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  return param_1;
}



// FUNCTION 145ef5380 FUN_145ef5380 body=36 status=ok
// SIG undefined FUN_145ef5380(void)

undefined8 * FUN_145ef5380(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_14485c47a();
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 145ef53a4 FUN_145ef53a4 body=357 status=ok
// SIG undefined FUN_145ef53a4(void)

undefined8 * FUN_145ef53a4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_14b4e5b60;
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_144a5dc74(param_1 + 4);
  param_1[6] = param_2;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0xffffffff00000000;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0xffffffff;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0xffffffffffffffff;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x29] = 0xffffffffffffffff;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  FUN_140056680(local_40,L"GameplaySessionTaskQueue");
  uVar1 = FUN_1413da074(local_40);
  param_1[0xe] = uVar1;
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ef550a FUN_145ef550a body=284 status=ok
// SIG undefined FUN_145ef550a(void)

undefined4 * FUN_145ef550a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  byte *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145ef56b0(param_1,local_48);
  puVar2 = (undefined8 *)param_3[1];
  bVar1 = *(byte *)*param_3;
  *local_40 = bVar1;
  *(undefined8 *)(local_40 + 4) = *puVar2;
  local_40[0xc] = 0xff;
  local_40[0xd] = 0xff;
  local_40[0xe] = 0xff;
  local_40[0xf] = 0xff;
  local_4c = local_48[0];
  cVar4 = FUN_145ef5628(param_1,bVar1,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar5 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & (uint)bVar1;
      *(uint *)(local_40 + 0x10) = uVar6;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xc) =
           *(undefined4 *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar6) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar6) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_145ef5798(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ef5628 FUN_145ef5628 body=136 status=ok
// SIG undefined FUN_145ef5628(void)

undefined8 FUN_145ef5628(longlong *param_1,uint param_2,char *param_3,int *param_4)

{
  char *pcVar1;
  undefined8 uVar2;
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
        pcVar1 = (char *)(*param_1 + (longlong)iVar4 * 0x14);
        if (*pcVar1 == *param_3) {
          uVar2 = *(undefined8 *)param_3;
          *(undefined4 *)(pcVar1 + 8) = *(undefined4 *)(param_3 + 8);
          *(undefined8 *)pcVar1 = uVar2;
          FUN_148849dbc(param_1,*param_4);
          *param_4 = iVar4;
          return 1;
        }
        iVar4 = *(int *)(pcVar1 + 0xc);
      } while (iVar4 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145ef56b0 FUN_145ef56b0 body=231 status=ok
// SIG undefined FUN_145ef56b0(void)

int * FUN_145ef56b0(longlong *param_1,int *param_2)

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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x14);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x14) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 145ef5798 FUN_145ef5798 body=419 status=ok
// SIG undefined FUN_145ef5798(void)

void FUN_145ef5798(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
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
        uVar8 = (int)param_1[9] - 1U & (uint)*(byte *)(lVar2 + lVar5 * 0x14);
        *(uint *)(lVar2 + 0x10 + lVar5 * 0x14) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0xc + lVar5 * 0x14) =
             *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4) = iVar4;
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



// FUNCTION 145ef593c FUN_145ef593c body=167 status=ok
// SIG undefined FUN_145ef593c(void)

void FUN_145ef593c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140893b6e();
  local_24 = 0x100;
  lVar1 = FUN_145ef5a0a(DAT_14c951640);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  *(longlong *)(param_1 + 0x68) = lVar1;
  FUN_145ef59e4(lVar1,&local_24);
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x58) + 0x840);
  if (lVar1 != 0) {
    *(byte *)(param_1 + 0x2090) = *(byte *)(param_1 + 0x2090) | 1;
    FUN_146f4595a(lVar1,*(undefined4 *)(param_2 + 0x1d2c),*(undefined8 *)(param_1 + 0x68));
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ef59e4 FUN_145ef59e4 body=38 status=ok
// SIG undefined FUN_145ef59e4(void)

void FUN_145ef59e4(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  *(undefined4 *)(lVar1 + 0x158) = *param_2;
  FUN_14158d190(lVar1);
  FUN_145ef5abc(lVar1);
  return;
}



// FUNCTION 145ef5a0a FUN_145ef5a0a body=177 status=ok
// SIG undefined FUN_145ef5a0a(void)

undefined8 FUN_145ef5a0a(undefined8 param_1)

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
  local_b8 = FUN_145a62b30();
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



// FUNCTION 145ef5abc FUN_145ef5abc body=208 status=ok
// SIG undefined FUN_145ef5abc(void)

void FUN_145ef5abc(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)FUN_145a51278();
  lVar3 = plVar1[0x22];
  if (lVar3 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar3 = plVar1[0x22];
  }
  FUN_14158d09e(lVar3);
  local_38 = 0;
  uStack_30 = 0;
  FUN_1402191ca(&local_38,0x20);
  FUN_145ef5b8e(lVar3,&local_38);
  lVar3 = local_38;
  lVar2 = (longlong)(int)uStack_30;
  if (lVar2 != 0) {
    lVar4 = 0;
    do {
      FUN_14158cf04(param_1,*(undefined8 *)(lVar3 + lVar4));
      lVar4 = lVar4 + 8;
    } while (lVar2 * 8 != lVar4);
  }
  if (local_38 != 0) {
    FUN_1400020a8(local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ef5b8e FUN_145ef5b8e body=101 status=ok
// SIG undefined FUN_145ef5b8e(void)

void FUN_145ef5b8e(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x28);
    lVar4 = 0;
    do {
      if (*(char *)(lVar3 + 0x19 + lVar4) == '\x01') {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1446f84a2(param_2,iVar2);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = *(undefined8 *)(lVar3 + lVar4);
      }
      lVar4 = lVar4 + 0x20;
    } while ((longlong)iVar1 * 0x20 != lVar4);
  }
  return;
}



// FUNCTION 145ef5bf4 FUN_145ef5bf4 body=98 status=ok
// SIG undefined FUN_145ef5bf4(void)

void FUN_145ef5bf4(longlong param_1,int param_2,int param_3)

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



// FUNCTION 145ef5c56 FUN_145ef5c56 body=118 status=ok
// SIG undefined FUN_145ef5c56(void)

void FUN_145ef5c56(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_145ef5cce(param_1,iVar1);
    }
    FUN_14158d317((longlong)iVar1 * 0x58 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_146f1027c(param_1,param_2,iVar1 - param_2);
    FUN_146f102d6(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145ef5cce FUN_145ef5cce body=143 status=ok
// SIG undefined FUN_145ef5cce(void)

void FUN_145ef5cce(longlong param_1,int param_2)

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



// FUNCTION 145ef5d5e FUN_145ef5d5e body=709 status=ok
// SIG undefined FUN_145ef5d5e(void)

void FUN_145ef5d5e(uint *param_1,longlong param_2)

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
  if (uVar6 == (longlong)(int)uVar8) goto LAB_145ef5f89;
  uVar4 = *param_1;
  uVar10 = param_1[1];
  uVar7 = uVar4 - uVar10;
  if (uVar6 < uVar7) goto LAB_145ef5f89;
  uVar5 = (uint)uVar6;
  if ((int)uVar8 < 1) {
    param_1[2] = uVar5 - 1;
    param_1[6] = uVar8 + uVar5;
    if (param_1[7] - uVar8 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
    }
    goto LAB_145ef5f89;
  }
  local_58 = 0;
  uStack_50 = 0;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar6 & 0xffffffff);
  }
  if (uVar3 < 0x80000000) {
    FUN_146f1021c(&local_58,uVar6 & 0xffffffff);
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
      FUN_145ef6040(&local_58,local_68);
    }
    if (uVar4 != uVar10) {
      local_60 = (void *)((longlong)local_60 + (ulonglong)uVar9 * 8);
      uVar8 = uVar7;
      goto LAB_145ef5f0b;
    }
  }
  else {
    local_68 = CONCAT44(local_68._4_4_,param_1[6]);
    uVar4 = param_1[6] - uVar9;
    lVar11 = (longlong)(int)(uint)uStack_50;
    uStack_50 = CONCAT44(uStack_50._4_4_,(uint)uStack_50 + uVar4);
    if (uStack_50._4_4_ - iVar2 < uVar4) {
      FUN_145ef6040(&local_58,uVar3 & 0xffffffff);
    }
    if ((uint)local_68 != uVar9) {
      memcpy((void *)(lVar11 * 8 + local_58),(void *)((longlong)local_60 + (ulonglong)uVar9 * 8),
             (longlong)(int)uVar4 << 3);
    }
    local_68 = uStack_50 & 0xffffffff;
    iVar2 = (uint)uStack_50 + uVar8;
    if (uStack_50._4_4_ - (uint)uStack_50 < uVar8) {
      uStack_50._0_4_ = iVar2;
      FUN_145ef6040(&local_58,local_68);
    }
    else {
      uStack_50._0_4_ = iVar2;
      if (uVar8 == 0) goto LAB_145ef5f2a;
    }
LAB_145ef5f0b:
    memcpy((void *)((longlong)(int)(uint)local_68 * 8 + local_58),local_60,(longlong)(int)uVar8 << 3
          );
  }
LAB_145ef5f2a:
  iVar2 = (uint)uStack_50;
  uStack_50 = CONCAT44(uStack_50._4_4_,(uint)uStack_50 + (uVar5 - uVar7));
  if (uStack_50._4_4_ - iVar2 < uVar5 - uVar7) {
    FUN_145ef6040(&local_58);
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
LAB_145ef5f89:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ef6040 FUN_145ef6040 body=132 status=ok
// SIG undefined FUN_145ef6040(void)

void FUN_145ef6040(longlong param_1,int param_2)

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



// FUNCTION 145ef60c4 FUN_145ef60c4 body=133 status=ok
// SIG undefined FUN_145ef60c4(void)

void FUN_145ef60c4(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (((byte *)*param_4 != (byte *)0x0) && ((*(byte *)*param_4 & 3) != 0)) {
    lVar2 = (**(code **)(*param_1 + 0x180))();
    if (lVar2 != 0) {
      lVar3 = FUN_1411c648e(*(undefined8 *)(lVar2 + 0x1f0));
      lVar2 = FUN_1400f6f32(lVar2);
      if (((lVar2 != 0) && (lVar3 != 0)) && (*(longlong *)(lVar2 + 0x68) != 0)) {
        uVar1 = FUN_140def96c(*(longlong *)(lVar2 + 0x68),param_2 + 0x18);
        FUN_145ef614a(lVar3,param_4,uVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145ef614a FUN_145ef614a body=187 status=ok
// SIG undefined FUN_145ef614a(void)

void FUN_145ef614a(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 auStack_88 [40];
  undefined2 local_60 [2];
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined1 local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined2 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = &local_3c;
  local_30 = local_60;
  local_60[0] = 0;
  local_5c = 0x3f800000;
  uStack_58 = 0x41400000;
  uStack_54 = 0x3dcccccd;
  uStack_50 = 0x3f7d70a4;
  local_4c = 5;
  local_48 = 0x427000003f19999a;
  local_40 = 0;
  local_3c = param_3;
  FUN_145ef62b2(param_1 + 0x60,local_24);
  FUN_145ef6794(param_1,param_2,param_3);
  lVar1 = FUN_1411c6420(param_1,param_3);
  if (lVar1 != 0) {
    FUN_145ef6206(param_1 + 0x48,param_3,lVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ef6206 FUN_145ef6206 body=171 status=ok
// SIG undefined FUN_145ef6206(void)

void FUN_145ef6206(longlong *param_1,undefined4 param_2,undefined8 param_3)

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
        goto LAB_145ef629b;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145ef629b:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145ef62b2 FUN_145ef62b2 body=298 status=ok
// SIG undefined FUN_145ef62b2(void)

undefined4 * FUN_145ef62b2(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_145ef6476(param_1,local_48);
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
  local_40[1] = *puVar1;
  local_40[2] = uVar10;
  local_40[3] = uVar2;
  local_40[4] = uVar3;
  local_40[5] = uVar4;
  local_40[6] = uVar5;
  local_40[7] = uVar6;
  local_40[8] = uVar7;
  local_40[9] = puVar1[8];
  local_40[10] = 0xffffffff;
  local_4c = local_48[0];
  cVar9 = FUN_145ef63de(param_1,uVar11,local_40,&local_4c);
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
      local_40[0xb] = uVar11;
      lVar14 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar14 = param_1 + 0x38;
      }
      local_40[10] = *(uint *)(lVar14 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                        (longlong)(int)uVar11) * 4);
      lVar14 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar14 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar14 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar13;
      FUN_145ef65e2(param_1);
    }
  }
  *param_2 = uVar8;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ef63de FUN_145ef63de body=152 status=ok
// SIG undefined FUN_145ef63de(void)

undefined8 FUN_145ef63de(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
  longlong *plVar10;
  int iVar11;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar10 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[8];
    }
    iVar11 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar11 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar11 * 0x30);
        if (*(int *)(*param_1 + (longlong)iVar11 * 0x30) == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[4];
          iVar7 = param_3[5];
          iVar8 = param_3[6];
          iVar9 = param_3[7];
          *(undefined8 *)(piVar1 + 8) = *(undefined8 *)(param_3 + 8);
          piVar1[4] = iVar6;
          piVar1[5] = iVar7;
          piVar1[6] = iVar8;
          piVar1[7] = iVar9;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_145ef6566(iVar2,*param_4);
          *param_4 = iVar11;
          return 1;
        }
        iVar11 = piVar1[10];
      } while (iVar11 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145ef6476 FUN_145ef6476 body=239 status=ok
// SIG undefined FUN_145ef6476(void)

int * FUN_145ef6476(longlong *param_1,int *param_2)

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
      FUN_145faae12(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x30);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x30) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x30 + *param_1;
  return param_2;
}



// FUNCTION 145ef6566 FUN_145ef6566 body=124 status=ok
// SIG undefined FUN_145ef6566(void)

void FUN_145ef6566(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30 + 4) = uVar4;
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



// FUNCTION 145ef65e2 FUN_145ef65e2 body=432 status=ok
// SIG undefined FUN_145ef65e2(void)

void FUN_145ef65e2(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x30;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x2c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x28 + lVar7) =
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



// FUNCTION 145ef6794 FUN_145ef6794 body=782 status=ok
// SIG undefined FUN_145ef6794(void)

void FUN_145ef6794(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar3 = (undefined1 *)FUN_1411c6420(param_1,param_3);
  if (puVar3 != (undefined1 *)0x0) {
    local_58 = DAT_14cbe48b4;
    local_50 = DAT_14cbe48bc;
    FUN_1448075d0(local_48);
    uVar4 = FUN_144a06846(param_2,local_48);
    uVar1 = FUN_1410c4486(uVar4,*puVar3);
    *puVar3 = uVar1;
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    local_68 = DAT_14cbe48c0;
    local_60 = DAT_14cbe48c8;
    FUN_1448075d0(local_48);
    uVar4 = FUN_144a06846(param_2,local_48);
    uVar1 = FUN_1410c4486(uVar4,puVar3[1]);
    puVar3[1] = uVar1;
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    local_78 = DAT_14cbe48cc;
    local_70 = DAT_14cbe48d4;
    FUN_1448075d0(local_48);
    uVar4 = FUN_144a06846(param_2,local_48);
    uVar7 = FUN_140b963dc(uVar4,*(undefined4 *)(puVar3 + 4));
    *(undefined4 *)(puVar3 + 4) = uVar7;
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    local_88 = DAT_14cbe48d8;
    local_80 = DAT_14cbe48e0;
    FUN_1448075d0(local_48);
    uVar4 = FUN_144a06846(param_2,local_48);
    uVar7 = FUN_140b963dc(uVar4,*(undefined4 *)(puVar3 + 0x18));
    *(undefined4 *)(puVar3 + 0x18) = uVar7;
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    local_98 = DAT_14cbe48fc;
    local_90 = DAT_14cbe4904;
    FUN_1448075d0(local_48);
    uVar4 = FUN_144a06846(param_2,local_48);
    uVar1 = FUN_1410c4486(uVar4,puVar3[0x20]);
    puVar3[0x20] = uVar1;
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    local_a8 = DAT_14cbe48f0;
    local_a0 = DAT_14cbe48f8;
    FUN_1448075d0(local_48);
    uVar4 = FUN_144a06846(param_2,local_48);
    uVar7 = FUN_140b963dc(uVar4,*(undefined4 *)(puVar3 + 0x1c));
    *(undefined4 *)(puVar3 + 0x1c) = uVar7;
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    local_b8 = DAT_14cbe48e4;
    local_b0 = DAT_14cbe48ec;
    FUN_1448075d0(local_48);
    uVar4 = FUN_144a06846(param_2,local_48);
    iVar2 = FUN_140e1edd4(uVar4,*(undefined4 *)(puVar3 + 0x14));
    *(int *)(puVar3 + 0x14) = iVar2;
    if (local_30 != 0) {
      FUN_1400020a8();
      iVar2 = *(int *)(puVar3 + 0x14);
    }
    plVar5 = (longlong *)FUN_144a7d136();
    lVar6 = plVar5[0x22];
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 1000))(plVar5);
      lVar6 = plVar5[0x22];
    }
    *(float *)(lVar6 + 0x6c) = (float)(iVar2 * 10);
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ef6aa4 FUN_145ef6aa4 body=146 status=ok
// SIG undefined FUN_145ef6aa4(void)

code * FUN_145ef6aa4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145ef6b36();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Substrate";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FSubstrateMobileForwardPassUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa3000000033;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca0e758;
  return FUN_145d50b98;
}



// FUNCTION 145ef6b36 FUN_145ef6b36 body=261 status=ok
// SIG undefined FUN_145ef6b36(void)

void FUN_145ef6b36(void)

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
              0x110) < DAT_14ca0e7d8) {
    FUN_144b3d300(&DAT_14ca0e7d8);
    if (DAT_14ca0e7d8 == -1) {
      FUN_145ef6c3c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FSubstrateMobileForwardPassUniformParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x2f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca0e758,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142def7e1);
      _Init_thread_footer(&DAT_14ca0e7d8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ef6c3c FUN_145ef6c3c body=232 status=ok
// SIG undefined FUN_145ef6c3c(void)

longlong * FUN_145ef6c3c(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_1462edfda;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145ef6d2a FUN_145ef6d2a body=113 status=ok
// SIG undefined FUN_145ef6d2a(void)

void FUN_145ef6d2a(longlong param_1)

{
  FUN_145c4ff6d(*(undefined8 *)(param_1 + 0x490),*(undefined4 *)(param_1 + 0x498));
  *(undefined4 *)(param_1 + 0x498) = 0;
  if (*(int *)(param_1 + 0x49c) != 0) {
    FUN_145ef6d9c(param_1 + 0x490);
  }
  *(undefined4 *)(param_1 + 0x488) = 0;
  if (*(int *)(param_1 + 0x48c) != 0) {
    FUN_1446f8c06(param_1 + 0x480,0);
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    vx_uninitialize();
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 145ef6d9c FUN_145ef6d9c body=48 status=ok
// SIG undefined FUN_145ef6d9c(void)

void FUN_145ef6d9c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 145ef6dcc FUN_145ef6dcc body=42 status=ok
// SIG undefined FUN_145ef6dcc(void)

void FUN_145ef6dcc(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0xba0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145ef6df6 FUN_145ef6df6 body=119 status=ok
// SIG undefined FUN_145ef6df6(void)

longlong FUN_145ef6df6(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = FUN_1403ae46b();
  if (((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(param_1 + 0x78f0))) &&
     (lVar2 = (ulonglong)uVar1 * 0x48 + *(longlong *)(param_1 + 0x78e8), lVar2 != 0)) {
    if (*(longlong *)(lVar2 + 0x20) == 0) {
      return 0;
    }
    if (*(longlong **)(lVar2 + 0x28) == (longlong *)0x0) {
      return 0;
    }
    lVar2 = (**(code **)(**(longlong **)(lVar2 + 0x28) + 8))();
    if (lVar2 != 0) {
      lVar3 = FUN_140227782();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        return lVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 145ef6e76 FUN_145ef6e76 body=103 status=ok
// SIG undefined FUN_145ef6e76(void)

undefined8 * FUN_145ef6e76(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14bcd14f0;
  param_1[5] = 0;
  puVar2 = (undefined8 *)FUN_14494321d(0x20);
  *puVar2 = FUN_145d6c4a3;
  puVar2[1] = 0;
  FUN_145ef6ede(puVar2 + 2);
  lVar1 = param_1[5];
  param_1[5] = puVar2 + 2;
  if (lVar1 != 0) {
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
  }
  return param_1;
}



// FUNCTION 145ef6ede FUN_145ef6ede body=96 status=ok
// SIG undefined FUN_145ef6ede(void)

undefined8 * FUN_145ef6ede(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = FUsdInfoCache::vftable;
  param_1[1] = 0;
  uVar2 = FUN_14001cc68(0x208,0x10);
  FUN_14158dc16(uVar2);
  lVar1 = param_1[1];
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    FUN_145d6c4fa(lVar1);
    FUN_1400020a8(lVar1);
  }
  return param_1;
}



// FUNCTION 145ef6f3e FUN_145ef6f3e body=28 status=ok
// SIG undefined FUN_145ef6f3e(void)

undefined8 * FUN_145ef6f3e(undefined8 *param_1)

{
  FUN_14158de80();
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 145ef6f5a FUN_145ef6f5a body=284 status=ok
// SIG undefined FUN_145ef6f5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ef6f5a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca988c0) {
    FUN_144b3d300(&DAT_14ca988c0);
    if (DAT_14ca988c0 == -1) {
      FUN_145ef7076();
      FUN_140db5666(&DAT_14ca98818,0,&DAT_14ca987b0,L"FDispatchShaderBundleCS",
                    L"/Engine/Private/ShaderBundleDispatch.usf",L"DispatchShaderBundleEntry",5,3,
                    FUN_147433a10,FUN_1474339e8,&LAB_1474339d0,&LAB_1474339cc,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf8,0);
      _DAT_14ca98818 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432270a3);
      _Init_thread_footer(&DAT_14ca988c0);
    }
  }
  return &DAT_14ca98818;
}



// FUNCTION 145ef7076 FUN_145ef7076 body=210 status=ok
// SIG undefined FUN_145ef7076(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ef7076(void)

{
  if ((DAT_14ca98817 & 2) == 0) {
    DAT_14ca98817 = DAT_14ca98817 | 2;
    _DAT_14ca987b8 = L"FDispatchShaderBundleCS";
    _DAT_14ca987d0 = FUN_146826540;
    _DAT_14ca987d8 = FUN_146825d77;
    _DAT_14ca987e0 = FUN_146825fd6;
    _DAT_14ca987e8 = FUN_1407e02ea;
    _DAT_14ca987f0 = FUN_146826273;
    _DAT_14ca987c8 = FUN_14743399c;
    _DAT_14ca98808 = 0xffffffff000000f8;
    _DAT_14ca98810 = 8;
    DAT_14ca98814 = 0;
    _DAT_14ca987f8 = &LAB_1474339c8;
    FUN_145ef7148();
    FUN_145ef723c();
    FUN_1407e00cc(&DAT_14ca987b0);
    return;
  }
  return;
}



// FUNCTION 145ef7148 FUN_145ef7148 body=121 status=ok
// SIG undefined FUN_145ef7148(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ef7148(void)

{
  FUN_145ef71c2();
  _DAT_14ca99ea8 = L"RootConstantsParam";
  DAT_14ca99ed2 = FUN_140850cc5();
  _DAT_14ca99eb0 = FUN_140ec6960();
  _DAT_14ca99ec0 = &LAB_14682652b;
  _DAT_14ca99ec8 = 0x1000000e0;
  _DAT_14ca99ed0 = 0;
  _DAT_14ca99eb8 = DAT_14ca987c0;
  DAT_14ca987c0 = &DAT_14ca99ea8;
  return;
}



// FUNCTION 145ef71c2 FUN_145ef71c2 body=121 status=ok
// SIG undefined FUN_145ef71c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ef71c2(void)

{
  FUN_145ef72b8();
  _DAT_14ca99ed8 = L"RecordArgBufferParam";
  DAT_14ca99f02 = FUN_140850cc5();
  _DAT_14ca99ee0 = FUN_140fb78d0();
  _DAT_14ca99ef0 = &LAB_14682652b;
  _DAT_14ca99ef8 = 0x1000000e6;
  _DAT_14ca99f00 = 0;
  _DAT_14ca99ee8 = DAT_14ca987c0;
  DAT_14ca987c0 = &DAT_14ca99ed8;
  return;
}



// FUNCTION 145ef723c FUN_145ef723c body=123 status=ok
// SIG undefined FUN_145ef723c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ef723c(void)

{
  _DAT_14ca9a218 = L"BASE";
  DAT_14ca9a242 = 4;
  _DAT_14ca9a220 = FUN_140b35ae4();
  _DAT_14ca9a228 = DAT_14ca987c0;
  _DAT_14ca9a230 = &LAB_14682652b;
  DAT_14ca987c0 = &DAT_14ca9a218;
  DAT_14ca98815 = DAT_14ca98815 + '\x01';
  _DAT_14ca9a238 = 0x100000000;
  if (*(char *)(_DAT_14ca9a220 + 100) != '\0') {
    DAT_14ca98816 = DAT_14ca98816 + '\x01';
  }
  return;
}



// FUNCTION 145ef72b8 FUN_145ef72b8 body=216 status=ok
// SIG undefined FUN_145ef72b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ef72b8(void)

{
  _DAT_14ca99f38 = L"RWExecutionBufferParam";
  DAT_14ca99f62 = FUN_140850cc5();
  _DAT_14ca99f40 = FUN_140fb78d0();
  _DAT_14ca99f50 = &LAB_14682652b;
  _DAT_14ca99f58 = 0x1000000ee;
  _DAT_14ca99f60 = 0;
  _DAT_14ca99f48 = DAT_14ca987c0;
  DAT_14ca987c0 = &DAT_14ca99f38;
  _DAT_14ca99f08 = L"RecordDataBufferParam";
  DAT_14ca99f32 = FUN_140850cc5();
  _DAT_14ca99f10 = FUN_140fb78d0();
  _DAT_14ca99f20 = &LAB_14682652b;
  _DAT_14ca99f28 = 0x1000000ea;
  _DAT_14ca99f30 = 0;
  _DAT_14ca99f18 = DAT_14ca987c0;
  DAT_14ca987c0 = &DAT_14ca99f08;
  return;
}



// FUNCTION 145ef7390 FUN_145ef7390 body=284 status=ok
// SIG undefined FUN_145ef7390(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ef7390(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa3390) {
    FUN_144b3d300(&DAT_14caa3390);
    if (DAT_14caa3390 == -1) {
      FUN_145ef74ac();
      FUN_140db5666(&DAT_14caa32e8,0,&DAT_14caa3280,L"FLandscapeCopyTexturePS",
                    L"/Engine/Private/LandscapeLayersPS.usf",L"CopyTexturePS",3,1,FUN_14745ea3e,
                    FUN_14745ea1c,&LAB_14632492c,&LAB_14745ea18,&LAB_14712ac0c,&LAB_14712ac08,0xf8,0
                   );
      _DAT_14caa32e8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14324e088);
      _Init_thread_footer(&DAT_14caa3390);
    }
  }
  return &DAT_14caa32e8;
}



// FUNCTION 145ef74ac FUN_145ef74ac body=210 status=ok
// SIG undefined FUN_145ef74ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ef74ac(void)

{
  if ((DAT_14caa32e7 & 2) == 0) {
    DAT_14caa32e7 = DAT_14caa32e7 | 2;
    _DAT_14caa3288 = L"FLandscapeCopyTexturePS";
    _DAT_14caa32a0 = FUN_146826540;
    _DAT_14caa32a8 = FUN_146825d77;
    _DAT_14caa32b0 = FUN_146825fd6;
    _DAT_14caa32b8 = FUN_1407e02ea;
    _DAT_14caa32c0 = FUN_146826273;
    _DAT_14caa3298 = FUN_14745e9ea;
    _DAT_14caa32d8 = 0xffffffff000000f8;
    _DAT_14caa32e0 = 8;
    DAT_14caa32e4 = 0;
    _DAT_14caa32c8 = &LAB_14745ea14;
    FUN_145ef757e();
    FUN_145ef7672();
    FUN_1407e00cc(&DAT_14caa3280);
    return;
  }
  return;
}



// FUNCTION 145ef757e FUN_145ef757e body=121 status=ok
// SIG undefined FUN_145ef757e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ef757e(void)

{
  FUN_145ef75f8();
  _DAT_14caa4d70 = L"ReadTexture1Param";
  DAT_14caa4d9a = FUN_140850cc5();
  _DAT_14caa4d78 = FUN_140fb78d0();
  _DAT_14caa4d88 = &LAB_14682652b;
  _DAT_14caa4d90 = 0x1000000e0;
  _DAT_14caa4d98 = 0;
  _DAT_14caa4d80 = DAT_14caa3290;
  DAT_14caa3290 = &DAT_14caa4d70;
  return;
}



// FUNCTION 145ef75f8 FUN_145ef75f8 body=121 status=ok
// SIG undefined FUN_145ef75f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ef75f8(void)

{
  FUN_145ef76ee();
  _DAT_14caa4da0 = L"ReadTexture1SamplerParam";
  DAT_14caa4dca = FUN_140850cc5();
  _DAT_14caa4da8 = FUN_140fb78d0();
  _DAT_14caa4db8 = &LAB_14682652b;
  _DAT_14caa4dc0 = 0x1000000e4;
  _DAT_14caa4dc8 = 0;
  _DAT_14caa4db0 = DAT_14caa3290;
  DAT_14caa3290 = &DAT_14caa4da0;
  return;
}



// FUNCTION 145ef7672 FUN_145ef7672 body=123 status=ok
// SIG undefined FUN_145ef7672(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ef7672(void)

{
  _DAT_14caa5988 = L"BASE";
  DAT_14caa59b2 = 4;
  _DAT_14caa5990 = FUN_140b35ae4();
  _DAT_14caa5998 = DAT_14caa3290;
  _DAT_14caa59a0 = &LAB_14682652b;
  DAT_14caa3290 = &DAT_14caa5988;
  DAT_14caa32e5 = DAT_14caa32e5 + '\x01';
  _DAT_14caa59a8 = 0x100000000;
  if (*(char *)(_DAT_14caa5990 + 100) != '\0') {
    DAT_14caa32e6 = DAT_14caa32e6 + '\x01';
  }
  return;
}



// FUNCTION 145ef76ee FUN_145ef76ee body=216 status=ok
// SIG undefined FUN_145ef76ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ef76ee(void)

{
  _DAT_14caa4e00 = L"ChannelSwizzleMaskParam";
  DAT_14caa4e2a = FUN_140850cc5();
  _DAT_14caa4e08 = FUN_140ec6960();
  _DAT_14caa4e18 = &LAB_14682652b;
  _DAT_14caa4e20 = 0x1000000ee;
  _DAT_14caa4e28 = 0;
  _DAT_14caa4e10 = DAT_14caa3290;
  DAT_14caa3290 = &DAT_14caa4e00;
  _DAT_14caa4dd0 = L"SourceOffsetAndSizeUVParam";
  DAT_14caa4dfa = FUN_140850cc5();
  _DAT_14caa4dd8 = FUN_140ec6960();
  _DAT_14caa4de8 = &LAB_14682652b;
  _DAT_14caa4df0 = 0x1000000e8;
  _DAT_14caa4df8 = 0;
  _DAT_14caa4de0 = DAT_14caa3290;
  DAT_14caa3290 = &DAT_14caa4dd0;
  return;
}



// FUNCTION 145ef77c6 FUN_145ef77c6 body=284 status=ok
// SIG undefined FUN_145ef77c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ef77c6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa34b8) {
    FUN_144b3d300(&DAT_14caa34b8);
    if (DAT_14caa34b8 == -1) {
      FUN_145ef78e2();
      FUN_140db5666(&DAT_14caa3410,0,&DAT_14caa33a8,
                    L"FLandscapeLayerWeightmapExtractMaterialLayersCS",
                    L"/Engine/Private/LandscapeLayersCS.usf",L"ComputeWeightmapPerPaintLayer",5,1,
                    FUN_14745eaca,FUN_14745eaa8,&LAB_146324934,&LAB_14745eaa4,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf8,0);
      _DAT_14caa3410 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14324e094);
      _Init_thread_footer(&DAT_14caa34b8);
    }
  }
  return &DAT_14caa3410;
}



// FUNCTION 145ef78e2 FUN_145ef78e2 body=210 status=ok
// SIG undefined FUN_145ef78e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ef78e2(void)

{
  if ((DAT_14caa340f & 2) == 0) {
    DAT_14caa340f = DAT_14caa340f | 2;
    _DAT_14caa33b0 = L"FLandscapeLayerWeightmapExtractMaterialLayersCS";
    _DAT_14caa33c8 = FUN_146826540;
    _DAT_14caa33d0 = FUN_146825d77;
    _DAT_14caa33d8 = FUN_146825fd6;
    _DAT_14caa33e0 = FUN_1407e02ea;
    _DAT_14caa33e8 = FUN_146826273;
    _DAT_14caa33c0 = FUN_14745ea76;
    _DAT_14caa3400 = 0xffffffff000000f8;
    _DAT_14caa3408 = 8;
    DAT_14caa340c = 0;
    _DAT_14caa33f0 = &LAB_14745eaa0;
    FUN_145ef79b4();
    FUN_145ef7aa8();
    FUN_1407e00cc(&DAT_14caa33a8);
    return;
  }
  return;
}



// FUNCTION 145ef79b4 FUN_145ef79b4 body=121 status=ok
// SIG undefined FUN_145ef79b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ef79b4(void)

{
  FUN_145ef7a2e();
  _DAT_14caa4e30 = L"ComponentWeightmapParam";
  DAT_14caa4e5a = FUN_140850cc5();
  _DAT_14caa4e38 = FUN_140fb78d0();
  _DAT_14caa4e48 = &LAB_14682652b;
  _DAT_14caa4e50 = 0x1000000e0;
  _DAT_14caa4e58 = 0;
  _DAT_14caa4e40 = DAT_14caa33b8;
  DAT_14caa33b8 = &DAT_14caa4e30;
  return;
}



// FUNCTION 145ef7a2e FUN_145ef7a2e body=121 status=ok
// SIG undefined FUN_145ef7a2e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ef7a2e(void)

{
  FUN_145ef7b24();
  _DAT_14caa4e60 = L"AtlasPaintListsParam";
  DAT_14caa4e8a = FUN_140850cc5();
  _DAT_14caa4e68 = FUN_140fb78d0();
  _DAT_14caa4e78 = &LAB_14682652b;
  _DAT_14caa4e80 = 0x1000000e4;
  _DAT_14caa4e88 = 0;
  _DAT_14caa4e70 = DAT_14caa33b8;
  DAT_14caa33b8 = &DAT_14caa4e60;
  return;
}



// FUNCTION 145ef7aa8 FUN_145ef7aa8 body=123 status=ok
// SIG undefined FUN_145ef7aa8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ef7aa8(void)

{
  _DAT_14caa59b8 = L"BASE";
  DAT_14caa59e2 = 4;
  _DAT_14caa59c0 = FUN_140b35ae4();
  _DAT_14caa59c8 = DAT_14caa33b8;
  _DAT_14caa59d0 = &LAB_14682652b;
  DAT_14caa33b8 = &DAT_14caa59b8;
  DAT_14caa340d = DAT_14caa340d + '\x01';
  _DAT_14caa59d8 = 0x100000000;
  if (*(char *)(_DAT_14caa59c0 + 100) != '\0') {
    DAT_14caa340e = DAT_14caa340e + '\x01';
  }
  return;
}



// FUNCTION 145ef7b24 FUN_145ef7b24 body=216 status=ok
// SIG undefined FUN_145ef7b24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ef7b24(void)

{
  _DAT_14caa4ec0 = L"ComponentSizeParam";
  DAT_14caa4eea = FUN_140850cc5();
  _DAT_14caa4ec8 = FUN_140ec6960();
  _DAT_14caa4ed8 = &LAB_14682652b;
  _DAT_14caa4ee0 = 0x1000000ec;
  _DAT_14caa4ee8 = 0;
  _DAT_14caa4ed0 = DAT_14caa33b8;
  DAT_14caa33b8 = &DAT_14caa4ec0;
  _DAT_14caa4e90 = L"ComponentsDataParam";
  DAT_14caa4eba = FUN_140850cc5();
  _DAT_14caa4e98 = FUN_140fb78d0();
  _DAT_14caa4ea8 = &LAB_14682652b;
  _DAT_14caa4eb0 = 0x1000000e8;
  _DAT_14caa4eb8 = 0;
  _DAT_14caa4ea0 = DAT_14caa33b8;
  DAT_14caa33b8 = &DAT_14caa4e90;
  return;
}



// FUNCTION 145ef7bfc FUN_145ef7bfc body=284 status=ok
// SIG undefined FUN_145ef7bfc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ef7bfc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb06ab8) {
    FUN_144b3d300(&DAT_14cb06ab8);
    if (DAT_14cb06ab8 == -1) {
      FUN_145ef7d18();
      FUN_140db5666(&DAT_14cb06a10,0,&DAT_14cb069a8,L"FSimpleElementColorChannelMaskPS",
                    L"/Engine/Private/SimpleElementColorChannelMaskPixelShader.usf",L"Main",3,1,
                    FUN_147d146ac,FUN_147d14684,&LAB_147d1466c,&LAB_147d14668,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf8,0);
      _DAT_14cb06a10 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1436b0b68);
      _Init_thread_footer(&DAT_14cb06ab8);
    }
  }
  return &DAT_14cb06a10;
}



// FUNCTION 145ef7d18 FUN_145ef7d18 body=210 status=ok
// SIG undefined FUN_145ef7d18(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ef7d18(void)

{
  if ((DAT_14cb06a0f & 2) == 0) {
    DAT_14cb06a0f = DAT_14cb06a0f | 2;
    _DAT_14cb069b0 = L"FSimpleElementColorChannelMaskPS";
    _DAT_14cb069c8 = FUN_146826540;
    _DAT_14cb069d0 = FUN_146825d77;
    _DAT_14cb069d8 = FUN_146825fd6;
    _DAT_14cb069e0 = FUN_1407e02ea;
    _DAT_14cb069e8 = FUN_146826273;
    _DAT_14cb069c0 = FUN_147d1463a;
    _DAT_14cb06a00 = 0xffffffff000000f8;
    _DAT_14cb06a08 = 8;
    DAT_14cb06a0c = 0;
    _DAT_14cb069f0 = &LAB_147d14664;
    FUN_145ef7dea();
    FUN_145ef7ede();
    FUN_1407e00cc(&DAT_14cb069a8);
    return;
  }
  return;
}



// FUNCTION 145ef7dea FUN_145ef7dea body=121 status=ok
// SIG undefined FUN_145ef7dea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ef7dea(void)

{
  FUN_145ef7e64();
  _DAT_14cb073b0 = L"InTexture";
  DAT_14cb073da = FUN_140850cc5();
  _DAT_14cb073b8 = FUN_140fb78d0();
  _DAT_14cb073c8 = &LAB_14682652b;
  _DAT_14cb073d0 = 0x1000000e0;
  _DAT_14cb073d8 = 0;
  _DAT_14cb073c0 = DAT_14cb069b8;
  DAT_14cb069b8 = &DAT_14cb073b0;
  return;
}



// FUNCTION 145ef7e64 FUN_145ef7e64 body=121 status=ok
// SIG undefined FUN_145ef7e64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ef7e64(void)

{
  FUN_145ef7f5a();
  _DAT_14cb073e0 = L"InTextureSampler";
  DAT_14cb0740a = FUN_140850cc5();
  _DAT_14cb073e8 = FUN_140fb78d0();
  _DAT_14cb073f8 = &LAB_14682652b;
  _DAT_14cb07400 = 0x1000000e4;
  _DAT_14cb07408 = 0;
  _DAT_14cb073f0 = DAT_14cb069b8;
  DAT_14cb069b8 = &DAT_14cb073e0;
  return;
}



// FUNCTION 145ef7ede FUN_145ef7ede body=123 status=ok
// SIG undefined FUN_145ef7ede(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ef7ede(void)

{
  _DAT_14cb076d0 = L"BASE";
  DAT_14cb076fa = 4;
  _DAT_14cb076d8 = FUN_140b35ae4();
  _DAT_14cb076e0 = DAT_14cb069b8;
  _DAT_14cb076e8 = &LAB_14682652b;
  DAT_14cb069b8 = &DAT_14cb076d0;
  DAT_14cb06a0d = DAT_14cb06a0d + '\x01';
  _DAT_14cb076f0 = 0x100000000;
  if (*(char *)(_DAT_14cb076d8 + 100) != '\0') {
    DAT_14cb06a0e = DAT_14cb06a0e + '\x01';
  }
  return;
}



// FUNCTION 145ef7f5a FUN_145ef7f5a body=216 status=ok
// SIG undefined FUN_145ef7f5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ef7f5a(void)

{
  _DAT_14cb07440 = L"Gamma";
  DAT_14cb0746a = FUN_140850cc5();
  _DAT_14cb07448 = FUN_140ec6960();
  _DAT_14cb07458 = &LAB_14682652b;
  _DAT_14cb07460 = 0x1000000ee;
  _DAT_14cb07468 = 0;
  _DAT_14cb07450 = DAT_14cb069b8;
  DAT_14cb069b8 = &DAT_14cb07440;
  _DAT_14cb07410 = L"ColorWeights";
  DAT_14cb0743a = FUN_140850cc5();
  _DAT_14cb07418 = FUN_140ec6960();
  _DAT_14cb07428 = &LAB_14682652b;
  _DAT_14cb07430 = 0x1000000e8;
  _DAT_14cb07438 = 0;
  _DAT_14cb07420 = DAT_14cb069b8;
  DAT_14cb069b8 = &DAT_14cb07410;
  return;
}



// FUNCTION 145ef8032 FUN_145ef8032 body=284 status=ok
// SIG undefined FUN_145ef8032(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ef8032(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0a0a8) {
    FUN_144b3d300(&DAT_14cb0a0a8);
    if (DAT_14cb0a0a8 == -1) {
      FUN_145ef814e();
      FUN_140db5666(&DAT_14cb0a000,0,&DAT_14cb09f98,L"FStereoLayerVS",
                    L"/Engine/Private/StereoLayerShader.usf",L"MainVS",0,1,FUN_147d5d64e,
                    FUN_147d5d626,&LAB_147d5d622,&LAB_147d5d61e,&LAB_14712ac0c,&LAB_14712ac08,0xf8,0
                   );
      _DAT_14cb0a000 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14371ad8b);
      _Init_thread_footer(&DAT_14cb0a0a8);
    }
  }
  return &DAT_14cb0a000;
}



// FUNCTION 145ef814e FUN_145ef814e body=210 status=ok
// SIG undefined FUN_145ef814e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ef814e(void)

{
  if ((DAT_14cb09fff & 2) == 0) {
    DAT_14cb09fff = DAT_14cb09fff | 2;
    _DAT_14cb09fa0 = L"FStereoLayerVS";
    _DAT_14cb09fb8 = FUN_146826540;
    _DAT_14cb09fc0 = FUN_146825d77;
    _DAT_14cb09fc8 = FUN_146825fd6;
    _DAT_14cb09fd0 = FUN_1407e02ea;
    _DAT_14cb09fd8 = FUN_146826273;
    _DAT_14cb09fb0 = FUN_147d5d5f0;
    _DAT_14cb09ff0 = 0xffffffff000000f8;
    _DAT_14cb09ff8 = 8;
    DAT_14cb09ffc = 0;
    _DAT_14cb09fe0 = &LAB_147d5d61a;
    FUN_145ef8220();
    FUN_145ef8314();
    FUN_1407e00cc(&DAT_14cb09f98);
    return;
  }
  return;
}



// FUNCTION 145ef8220 FUN_145ef8220 body=121 status=ok
// SIG undefined FUN_145ef8220(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ef8220(void)

{
  FUN_145ef829a();
  _DAT_14cb0a728 = L"InQuadAdjust";
  DAT_14cb0a752 = FUN_140850cc5();
  _DAT_14cb0a730 = FUN_140ec6960();
  _DAT_14cb0a740 = &LAB_14682652b;
  _DAT_14cb0a748 = 0x1000000e0;
  _DAT_14cb0a750 = 0;
  _DAT_14cb0a738 = DAT_14cb09fa8;
  DAT_14cb09fa8 = &DAT_14cb0a728;
  return;
}



// FUNCTION 145ef829a FUN_145ef829a body=121 status=ok
// SIG undefined FUN_145ef829a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ef829a(void)

{
  FUN_145ef8390();
  _DAT_14cb0a758 = L"InUVAdjust";
  DAT_14cb0a782 = FUN_140850cc5();
  _DAT_14cb0a760 = FUN_140ec6960();
  _DAT_14cb0a770 = &LAB_14682652b;
  _DAT_14cb0a778 = 0x1000000e6;
  _DAT_14cb0a780 = 0;
  _DAT_14cb0a768 = DAT_14cb09fa8;
  DAT_14cb09fa8 = &DAT_14cb0a758;
  return;
}



// FUNCTION 145ef8314 FUN_145ef8314 body=123 status=ok
// SIG undefined FUN_145ef8314(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ef8314(void)

{
  _DAT_14cb0a828 = L"BASE";
  DAT_14cb0a852 = 4;
  _DAT_14cb0a830 = FUN_140b35ae4();
  _DAT_14cb0a838 = DAT_14cb09fa8;
  _DAT_14cb0a840 = &LAB_14682652b;
  DAT_14cb09fa8 = &DAT_14cb0a828;
  DAT_14cb09ffd = DAT_14cb09ffd + '\x01';
  _DAT_14cb0a848 = 0x100000000;
  if (*(char *)(_DAT_14cb0a830 + 100) != '\0') {
    DAT_14cb09ffe = DAT_14cb09ffe + '\x01';
  }
  return;
}



// FUNCTION 145ef8390 FUN_145ef8390 body=216 status=ok
// SIG undefined FUN_145ef8390(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ef8390(void)

{
  _DAT_14cb0a7b8 = L"InWorld";
  DAT_14cb0a7e2 = FUN_140850cc5();
  _DAT_14cb0a7c0 = FUN_140ec6960();
  _DAT_14cb0a7d0 = &LAB_14682652b;
  _DAT_14cb0a7d8 = 0x1000000f2;
  _DAT_14cb0a7e0 = 0;
  _DAT_14cb0a7c8 = DAT_14cb09fa8;
  DAT_14cb09fa8 = &DAT_14cb0a7b8;
  _DAT_14cb0a788 = L"InViewProjection";
  DAT_14cb0a7b2 = FUN_140850cc5();
  _DAT_14cb0a790 = FUN_140ec6960();
  _DAT_14cb0a7a0 = &LAB_14682652b;
  _DAT_14cb0a7a8 = 0x1000000ec;
  _DAT_14cb0a7b0 = 0;
  _DAT_14cb0a798 = DAT_14cb09fa8;
  DAT_14cb09fa8 = &DAT_14cb0a788;
  return;
}



// FUNCTION 145ef8468 FUN_145ef8468 body=171 status=ok
// SIG undefined FUN_145ef8468(void)

void FUN_145ef8468(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = '\0';
  local_28 = &DAT_14c872ce8;
  FUN_14052bb08(DAT_14c872ce0,L"Audio",L"DisableUnrealAudio",&local_19);
  if (local_19 == '\0') {
    FUN_14340d9d8();
  }
  lVar1 = FUN_145ef8526();
  *(longlong *)(param_1 + 0xf50) = lVar1;
  if (lVar1 == 0) {
    if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_14340d8b2(lVar1);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 145ef8526 FUN_145ef8526 body=26 status=ok
// SIG undefined FUN_145ef8526(void)

longlong FUN_145ef8526(void)

{
  longlong lVar1;
  
  lVar1 = 0;
  if ((DAT_14cace0c0 != 0) && (*(int *)(DAT_14cace0c0 + 400) == 2)) {
    lVar1 = DAT_14cace0c0;
  }
  return lVar1;
}



// FUNCTION 145ef8540 FUN_145ef8540 body=40 status=ok
// SIG undefined FUN_145ef8540(void)

undefined8 FUN_145ef8540(undefined8 param_1,int param_2)

{
  FUN_145ef8568();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ef8568 FUN_145ef8568 body=175 status=ok
// SIG undefined FUN_145ef8568(void)

void FUN_145ef8568(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14af0a250;
  param_1[6] = &PTR_FUN_14af0a530;
  param_1[7] = &PTR_FUN_14af0a570;
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x25] != 0) {
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
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ef8618 FUN_145ef8618 body=282 status=ok
// SIG undefined FUN_145ef8618(void)

undefined4 * FUN_145ef8618(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
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
  FUN_145ef87b6(param_1,local_48);
  puVar1 = (undefined1 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_40 = uVar5;
  *(undefined1 *)(local_40 + 1) = *puVar1;
  local_40[2] = 0xffffffff;
  local_4c = local_48[0];
  cVar3 = FUN_145ef8734(param_1,uVar5,local_40,&local_4c);
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
      FUN_145ef889c(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ef8734 FUN_145ef8734 body=130 status=ok
// SIG undefined FUN_145ef8734(void)

undefined8 FUN_145ef8734(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
          FUN_148823a58(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)(puVar1 + 1);
      } while (iVar3 != -1);
      return 0;
    }
  }
  return 0;
}


