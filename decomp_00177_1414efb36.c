// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1414efb36 FUN_1414efb36 body=165 status=ok
// SIG undefined FUN_1414efb36(void)

void FUN_1414efb36(longlong *param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  FUN_145c191ca(param_1,param_3);
  if (0 < param_3) {
    do {
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_14880dbd8(param_1,iVar2);
      }
      puVar1 = (undefined8 *)(*param_1 + (longlong)iVar2 * 0x18);
      *puVar1 = 0;
      iVar2 = *(int *)(param_2 + 1);
      _Src = (void *)*param_2;
      *(int *)(puVar1 + 1) = iVar2;
      if ((longlong)iVar2 == 0) {
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      }
      else {
        FUN_144a06ca8(puVar1,iVar2,0);
        memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 2);
      }
      puVar1[2] = param_2[2];
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1414efbdb FUN_1414efbdb body=43 status=ok
// SIG undefined FUN_1414efbdb(void)

void FUN_1414efbdb(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 1414efc06 FUN_1414efc06 body=71 status=ok
// SIG undefined FUN_1414efc06(void)

void FUN_1414efc06(char *param_1)

{
  if (*param_1 != '\0') {
    if (DAT_14c844e48 == 2) {
      FUN_142764e0a(param_1);
      return;
    }
    FUN_1467e7b9c(param_1);
    if (DAT_14c844e70 == '\0') {
      FUN_14142fe94(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1414efc4e FUN_1414efc4e body=265 status=ok
// SIG undefined FUN_1414efc4e(void)

undefined8 * FUN_1414efc4e(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  FUN_14480568a();
  *param_1 = &PTR_FUN_14a3f1300;
  param_1[5] = &PTR_FUN_14a3f1d00;
  param_1[6] = &PTR_LAB_14a3f1d40;
  param_1[0x55] = &PTR_FUN_14a3f1d90;
  param_1[0x56] = &PTR_FUN_14a3f1e10;
  param_1[0x57] = &PTR_FUN_14a3f1e20;
  param_1[0xc4] = 0;
  *(undefined2 *)(param_1 + 0xc5) = 0x100;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x699) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6a1) = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  if (((*(byte *)((longlong)param_1 + 0x2d3) & 8) != 0) &&
     (*(byte *)((longlong)param_1 + 0x2d3) = *(byte *)((longlong)param_1 + 0x2d3) & 0xf7,
     puVar2 = param_1, DAT_14c76142c == 1)) {
    do {
      if ((*(byte *)(puVar2 + 0x3f) & 2) == 0) {
        return param_1;
      }
      *(byte *)(puVar2 + 0x3f) = *(byte *)(puVar2 + 0x3f) & 0xfd;
      plVar1 = puVar2 + 0x24;
      puVar2 = (undefined8 *)*plVar1;
    } while ((undefined8 *)*plVar1 != (undefined8 *)0x0);
  }
  return param_1;
}



// FUNCTION 1414efd58 FUN_1414efd58 body=125 status=ok
// SIG undefined FUN_1414efd58(void)

undefined8 * FUN_1414efd58(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1414efdd6();
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



// FUNCTION 1414efdd6 FUN_1414efdd6 body=150 status=ok
// SIG undefined FUN_1414efdd6(void)

longlong * FUN_1414efdd6(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
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
  return param_1;
}



// FUNCTION 1414efe6c FUN_1414efe6c body=341 status=ok
// SIG undefined FUN_1414efe6c(void)

longlong * FUN_1414efe6c(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  uint local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  longlong *local_30;
  code *local_28;
  longlong **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  if (DAT_14cad00c8 == 0) {
    local_50 = &local_28;
    local_28 = FUN_144a7958c;
    local_40 = FUN_14081d0ea;
    local_48 = FUN_14081d0ea;
    local_58 = &LAB_1479b7a0c;
    local_60 = &LAB_1463b464e;
    local_68 = L"Engine";
    local_70 = 0;
    local_78 = 0x10000005;
    local_80 = 8;
    local_88 = 0x110;
    FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
  }
  local_20 = &local_30;
  local_28 = FUN_142840874;
  local_88 = uVar1 | 0x90000000;
  local_30 = param_1;
  FUN_140245161(DAT_14cad00c8,&local_28,1,0x10);
  lVar2 = (longlong)(int)param_1[2];
  do {
    lVar2 = lVar2 + 1;
    *(int *)(param_1 + 2) = (int)lVar2;
    if ((int)param_1[1] <= lVar2) break;
  } while (*(longlong *)(*param_1 + lVar2 * 8) == 0);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414effc2 FUN_1414effc2 body=1448 status=ok
// SIG undefined FUN_1414effc2(void)

void FUN_1414effc2(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  uint *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined1 auStack_118 [32];
  undefined1 **local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_90 [24];
  undefined1 local_78 [16];
  undefined1 *local_68 [2];
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(int *)(param_1 + 8) == *(int *)(param_1 + 0x34)) goto LAB_1414effeb;
  FUN_143222f6a(local_90);
  local_c8 = 0;
  local_c0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  FUN_145d6313c(&local_e8,param_1);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_1414f0091;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_1414f0096;
      goto LAB_1414f00c7;
    }
LAB_1414f0096:
    FUN_1434732e4(&local_e8,&DAT_14ca85100);
  }
  else {
LAB_1414f0091:
    if (iVar6 == 0x10) goto LAB_1414f0096;
LAB_1414f00c7:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
      goto LAB_1414f0096;
      if (iVar6 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 == DVar8) goto LAB_1414f0096;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar11 = (uint *)*puVar2;
      if (puVar11 != (uint *)0x0) goto LAB_1414f027d;
      while( true ) {
        uVar13 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar13 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar13 | 1;
          __tlregdtor(&LAB_1434414af);
        }
        lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar10 = *(undefined4 **)(lVar4 + 0x310);
        *(undefined8 *)(lVar4 + 0x310) = 0;
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar10 = 0xffffffff;
        *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar2 = puVar10;
        FUN_140217a48(puVar2);
        puVar11 = (uint *)*puVar2;
LAB_1414f027d:
        puVar15 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar14 = (uint *)(puVar15 + 0x1f);
        uVar13 = puVar11[0x12];
        if (puVar14 <= puVar11 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
          LOCK();
          uVar3 = *puVar11;
          *puVar11 = *puVar11 + uVar13 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar13) != 0xffffffff) break;
          puVar11 = (uint *)*puVar2;
          *puVar11 = 0xffffffff;
          *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar2 = puVar11;
          puVar15 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar15 + 0x1f);
          uVar13 = 0;
          if (puVar14 <= puVar11 + 0x4000) {
            uVar13 = 1;
            goto LAB_1414f02fd;
          }
        }
      }
      uVar13 = uVar13 + 1;
LAB_1414f02fd:
      *(uint **)(puVar11 + 0x10) = puVar14;
      puVar11[0x12] = uVar13;
      iVar6 = 0;
      FUN_1447247dc(puVar15,0);
      *puVar15 = &PTR_FUN_14a83c060;
      FUN_1414efd58(puVar15 + 0x15,&local_e8);
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar13 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
          uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
          iVar6 = 0;
        }
        else {
          uVar16 = 2;
        }
      }
      else {
        iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar16 = 5;
      }
      if (*(code **)(puVar15[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar15[0xe] + 0x18))(puVar15 + 0xe,puVar15 + 9);
      }
      puVar15[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar15[9] = puVar15;
      puVar15[10] = puVar15;
      lVar4 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar4 == 0) {
        uVar5 = 1;
        if ((char)uVar16 != '\x06') {
          uVar5 = uVar16;
        }
        uVar16 = uVar5;
        uVar12 = 0;
      }
      else {
        if ((char)uVar16 == '\x06') {
          uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
        }
        uVar12 = *(undefined8 *)(lVar4 + 0x30);
      }
      puVar15[0xf] = uVar12;
      puVar15[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar15 + 0x1c) = iVar6;
      if (puVar15 == (undefined8 *)0x0) {
        local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
        UNLOCK();
        local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
        FUN_1447439e4(puVar15);
        LOCK();
        piVar1 = (int *)(puVar15 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar15)(puVar15,1);
        }
      }
    }
    else {
      local_68[0] = (undefined1 *)0x0;
      plVar9 = (longlong *)FUN_14001cc68(0x58,8);
      *plVar9 = (longlong)&PTR_LAB_14a83c040;
      local_58 = plVar9;
      FUN_1414efd58(plVar9 + 1,&local_e8);
      if (plVar9 != (longlong *)&DAT_fffffffffffffff8) {
        local_68[0] = &LAB_143473480;
      }
      local_f8 = local_68;
      FUN_14005a792(&DAT_14ca9a440,L"UpdateAllPrimitiveSceneInfosCmd",&DAT_14cad0e8c);
      if (local_68[0] != (undefined1 *)0x0) {
        plVar9 = local_58;
        if (local_58 == (longlong *)0x0) {
          plVar9 = local_48;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
    }
  }
  local_a0 = 0;
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  FUN_141145f8e(&local_e8);
  FUN_1405ee12c(&DAT_14ca966d0,local_90);
  FUN_14004710c(local_78);
LAB_1414effeb:
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_141145f8e(param_1);
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414f056c FUN_1414f056c body=804 status=ok
// SIG undefined FUN_1414f056c(void)

int * FUN_1414f056c(longlong *param_1,int *param_2,longlong *param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  byte bVar19;
  int iVar20;
  longlong *plVar21;
  longlong *plVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar24 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar24 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar24) {
      FUN_140044672(param_1,iVar24);
    }
    iVar25 = (int)param_1[5];
    if (iVar25 == 0) {
      iVar15 = -1;
    }
    else {
      iVar15 = iVar25 + 0x1e;
      if (-1 < iVar25 + -1) {
        iVar15 = iVar25 + -1;
      }
      iVar15 = iVar15 >> 5;
    }
    plVar21 = param_1 + 2;
    iVar20 = iVar25 + 1;
    iVar23 = iVar25 + 0x1f;
    if (-1 < iVar25) {
      iVar23 = iVar25;
    }
    if (iVar23 >> 5 == iVar15) {
      *(int *)(param_1 + 5) = iVar20;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar25) {
        if (iVar25 + 0x20U < 0xa0) {
          iVar20 = 0x80;
          iVar15 = iVar25;
        }
        else {
          uVar16 = iVar25 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar26 = 4;
            if (4 < uVar16) {
              uVar26 = uVar16;
            }
          }
          else {
            uVar26 = (uVar16 * 3 >> 3) + uVar16 + 0x10;
          }
          uVar18 = FUN_144a3809e(uVar26 << 2,0);
          iVar15 = (int)(uVar18 >> 2);
          iVar20 = -0x20;
          if ((int)uVar16 <= iVar15) {
            iVar20 = iVar15 << 5;
          }
          iVar15 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar20;
        FUN_1446efbd8(plVar21,iVar15);
        iVar20 = (int)param_1[5] + 1;
      }
      iVar15 = iVar20 + 0x1f;
      if (-1 < iVar20) {
        iVar15 = iVar20;
      }
      *(int *)(param_1 + 5) = iVar20;
      if (iVar20 % 0x20 != 0) {
        plVar22 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar22 = plVar21;
        }
        bVar19 = -(char)(iVar20 % 0x20);
        *(uint *)((longlong)plVar22 + (longlong)(iVar15 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar22 + (longlong)(iVar15 >> 5) * 4) << (bVar19 & 0x1f)) >>
             (bVar19 & 0x1f);
      }
    }
    lVar17 = (longlong)iVar24;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar21 = (longlong *)param_1[4];
    }
    bVar19 = (byte)iVar25 & 0x1f;
    puVar1 = (uint *)((longlong)plVar21 + (longlong)(iVar23 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar19 | 0xfffffffeU >> 0x20 - bVar19);
  }
  else {
    iVar24 = (int)param_1[6];
    lVar17 = (longlong)iVar24;
    iVar25 = *(int *)(*param_1 + 4 + lVar17 * 0x30);
    *(int *)(param_1 + 6) = iVar25;
    iVar15 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar15;
    if (iVar15 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar25 * 0x30) = 0xffffffff;
    }
  }
  plVar21 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar21 = (longlong *)param_1[4];
  }
  iVar25 = iVar24 + 0x1f;
  if (-1 < iVar24) {
    iVar25 = iVar24;
  }
  puVar1 = (uint *)((longlong)plVar21 + (longlong)(iVar25 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar24 & 0x1f);
  iVar25 = 1;
  lVar5 = *param_1;
  lVar17 = lVar17 * 0x30;
  puVar2 = (undefined4 *)(lVar5 + lVar17);
  uVar14 = ((undefined8 *)*param_3)[1];
  *(undefined8 *)(lVar5 + lVar17) = *(undefined8 *)*param_3;
  ((undefined8 *)(lVar5 + lVar17))[1] = uVar14;
  *(undefined1 *)(lVar5 + 0x10 + lVar17) = 0;
  puVar4 = (undefined8 *)(lVar5 + 0x18 + lVar17);
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined4 *)(lVar5 + 0x28 + lVar17) = 0xffffffff;
  uVar16 = FUN_1447addd0(puVar2,0x10);
  uVar26 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar26 != 1) {
    iVar15 = FUN_14017c4d2(param_1,uVar16,puVar2);
    if (iVar15 != -1) {
      puVar3 = (undefined4 *)(*param_1 + (longlong)iVar15 * 0x30);
      if (*(longlong *)(*param_1 + 0x18 + (longlong)iVar15 * 0x30) != 0) {
        FUN_1400020a8();
      }
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      uVar10 = puVar2[4];
      uVar11 = puVar2[5];
      uVar12 = puVar2[6];
      uVar13 = puVar2[7];
      *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar2 + 8);
      puVar3[4] = uVar10;
      puVar3[5] = uVar11;
      puVar3[6] = uVar12;
      puVar3[7] = uVar13;
      *puVar3 = uVar6;
      puVar3[1] = uVar7;
      puVar3[2] = uVar8;
      puVar3[3] = uVar9;
      FUN_147dc30ea(param_1,iVar24);
      goto LAB_1414f0708;
    }
    if (3 < uVar26) {
      uVar18 = (ulonglong)(uVar26 & 0xfffffffe) + 0xf;
      lVar17 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar25 = 1 << ((byte)lVar17 & 0x1f);
    }
  }
  iVar15 = iVar24;
  if (((int)uVar26 < 1) || (iVar25 <= (int)param_1[9])) {
    uVar16 = (int)param_1[9] - 1U & uVar16;
    puVar2[0xb] = uVar16;
    plVar21 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar21 = param_1 + 7;
    }
    puVar2[10] = *(undefined4 *)
                  ((longlong)plVar21 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4)
    ;
    plVar21 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar21 = param_1 + 7;
    }
    *(int *)((longlong)plVar21 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4) =
         iVar24;
  }
  else {
    *(int *)(param_1 + 9) = iVar25;
    FUN_1414f0890(param_1);
  }
LAB_1414f0708:
  *param_2 = iVar15;
  return param_2;
}



// FUNCTION 1414f0890 FUN_1414f0890 body=578 status=ok
// SIG undefined FUN_1414f0890(void)

void FUN_1414f0890(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 auStack_98 [36];
  int local_74;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar11 = *(uint *)(param_1 + 9);
  if (uVar11 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar11,4);
    if (0 < (int)uVar11) {
      uVar4 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar11 != uVar4);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_70 = plVar1;
    if ((int)param_1[5] == 0) {
      uVar12 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar12 = local_68 >> 0x20;
    }
    plVar1 = local_60;
    iVar13 = (int)local_68;
    uVar11 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar5 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar10 = *param_1;
        lVar9 = (longlong)iVar7 * 0x30;
        local_74 = iVar5;
        iVar5 = FUN_1447addd0(lVar9 + lVar10,0x10);
        uVar6 = (longlong)iVar5 & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar10 + 0x2c + lVar9) = iVar5;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = local_70;
        }
        *(undefined4 *)(lVar10 + 0x28 + lVar9) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = local_70;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7;
        uVar11 = ~(uint)uVar12 & uVar11;
        plVar8 = (longlong *)plVar1[2];
        if ((longlong *)plVar1[2] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        iVar2 = (int)plVar1[3];
        lVar10 = (longlong)iVar13;
        uVar4 = *(uint *)((longlong)plVar8 + lVar10 * 4) & uVar11;
        iVar5 = local_74;
        if (uVar4 == 0) {
          iVar7 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar7 = iVar2 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar13) {
            iVar3 = iVar13;
          }
          if (iVar7 <= iVar13) break;
          lVar9 = 0;
          while( true ) {
            iVar5 = iVar5 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar9 * 4 + lVar10 * 4 + 4);
            if (uVar4 != 0) break;
            lVar9 = lVar9 + 1;
            if (iVar3 - lVar10 == lVar9) goto LAB_1414f0a95;
          }
          iVar13 = iVar13 + (int)lVar9 + 1;
          uVar11 = 0xffffffff;
        }
        uVar12 = (ulonglong)(-uVar4 & uVar4);
        uVar6 = uVar12 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar7 = (iVar5 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar2);
    }
  }
LAB_1414f0a95:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414f0ad3 FUN_1414f0ad3 body=134 status=ok
// SIG undefined FUN_1414f0ad3(void)

void FUN_1414f0ad3(undefined8 *param_1,uint param_2,longlong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 2) = 0;
  iVar3 = 0;
  uVar1 = param_2;
  if (*(uint *)((longlong)param_1 + 0x14) != param_2) {
    FUN_14482f6fa(param_1 + 1,param_2);
    iVar3 = *(int *)(param_1 + 2);
    uVar1 = *(uint *)((longlong)param_1 + 0x14);
  }
  *(uint *)(param_1 + 2) = iVar3 + param_2;
  if (uVar1 - iVar3 < param_2) {
    FUN_14475e4ac();
  }
  *(undefined2 *)(param_1 + 3) = 0x101;
  *(char *)((longlong)param_1 + 0x1a) = (char)param_2;
  *(undefined1 *)((longlong)param_1 + 0x1b) = 0;
  *param_1 = 0;
  uVar2 = 0;
  do {
    *(undefined4 *)(param_1[1] + uVar2 * 4) = *(undefined4 *)(param_3 + uVar2 * 4);
    uVar2 = uVar2 + 1;
  } while (param_2 != uVar2);
  return;
}



// FUNCTION 1414f0b5a FUN_1414f0b5a body=8 status=ok
// SIG undefined FUN_1414f0b5a(void)

undefined8 FUN_1414f0b5a(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x210);
}



// FUNCTION 1414f0b62 FUN_1414f0b62 body=94 status=ok
// SIG undefined FUN_1414f0b62(void)

void FUN_1414f0b62(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = &local_28;
  local_18 = &local_30;
  local_30 = param_3;
  local_28 = param_2;
  FUN_14627d002(param_1 + 0x218,local_c,&local_20,0);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414f0bc2 FUN_1414f0bc2 body=168 status=ok
// SIG undefined FUN_1414f0bc2(void)

void FUN_1414f0bc2(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b75b7e0;
  FUN_1405d7ab2(param_1[0xf8],*(undefined4 *)(param_1 + 0xf9));
  if (param_1[0xf8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf4] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xf3) = 0;
  if (param_1[0xf2] != 0) {
    FUN_1400020a8();
  }
  FUN_1465da43a(param_1 + 0xea);
  plVar2 = (longlong *)param_1[0xe8];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_1[0xe4] != 0) {
    FUN_1400020a8();
  }
  FUN_1458d8610(param_1);
  return;
}



// FUNCTION 1414f0c6a FUN_1414f0c6a body=162 status=ok
// SIG undefined FUN_1414f0c6a(void)

undefined8 FUN_1414f0c6a(longlong *param_1,int param_2,int *param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_3 < param_2) {
    if (param_4 < param_2) {
      if ((ulonglong)(longlong)param_5 < (ulonglong)(DAT_14c872be0 - param_1[4])) {
        local_38 = DAT_14c872be0 - param_1[4];
        FUN_140002266(local_28,
                      L"Large atlases out of space; %d/%d Textures; frames since last flush: %llu",
                      param_2);
        (**(code **)(*param_1 + 8))(param_1,local_28);
        if (local_28[0] != 0) {
          FUN_1400020a8();
        }
        uVar1 = 1;
        goto LAB_1414f0cef;
      }
      *param_3 = param_2;
    }
    else {
      *param_3 = param_4;
    }
  }
  uVar1 = 0;
LAB_1414f0cef:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414f0d0e FUN_1414f0d0e body=145 status=ok
// SIG undefined FUN_1414f0d0e(void)

void FUN_1414f0d0e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b88b840;
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  FUN_145af1b8c(param_1 + 0x3b);
  FUN_144760e21(param_1[0x38],*(undefined4 *)(param_1 + 0x39));
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x31],*(undefined4 *)(param_1 + 0x32));
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  FUN_146075a12(param_1);
  return;
}



// FUNCTION 1414f0da0 FUN_1414f0da0 body=140 status=ok
// SIG undefined FUN_1414f0da0(void)

void FUN_1414f0da0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_14035c1e0(param_1 + 0x2b58,param_1,*(undefined8 *)(param_1 + 0x1848),param_1 + 0x520);
  plVar1 = *(longlong **)(param_1 + 0x520);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_140355bb6();
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      FUN_1414f0e2c(param_1 + 0x2990,plVar1);
      goto LAB_1414f0e0f;
    }
  }
  FUN_140355ca0(param_1 + 0x2990);
LAB_1414f0e0f:
  FUN_140b50b10(param_1);
  return;
}



// FUNCTION 1414f0e2c FUN_1414f0e2c body=2593 status=ok
// SIG undefined FUN_1414f0e2c(void)

undefined8 FUN_1414f0e2c(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ushort uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong *plVar17;
  undefined8 uVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  ushort uVar22;
  longlong lVar23;
  char *pcVar24;
  ulonglong uVar25;
  char *pcVar26;
  ulonglong uVar27;
  int iVar28;
  ulonglong uVar29;
  undefined1 auStack_d8 [40];
  char *local_b0;
  longlong *local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  undefined8 *local_80;
  longlong *local_78;
  undefined8 **local_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((param_2 == 0) || (pcVar26 = *(char **)(param_2 + 0x68), pcVar26 == (char *)0x0)) {
    if ((*(char *)(param_1 + 0x1c) == '\0') &&
       (((FUN_143ccb8a6(param_1), *(longlong *)(param_1 + 0x148) != 0 &&
         (*(longlong **)(param_1 + 0x140) != (longlong *)0x0)) && (*(int *)(param_1 + 0x13c) != 0)))
       ) {
      uVar19 = *(uint *)(param_1 + 0x138);
      uVar18 = 0;
      if (((int)uVar19 < 0) || (DAT_14c9647dc <= (int)uVar19)) goto LAB_1414f0fb1;
      lVar21 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
      if ((lVar21 != 0) &&
         (((*(int *)(lVar21 + 0x10) == *(int *)(param_1 + 0x13c) &&
           ((*(uint *)(lVar21 + 8) & 0x10200000) == 0)) &&
          (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x140) + 0x40))(), cVar6 != '\0')))) {
        *(undefined1 *)(param_1 + 0x1c) = 5;
      }
    }
  }
  else if (*pcVar26 == '\x02') {
    *(undefined1 *)(param_1 + 0x1c) = 5;
    lVar21 = *(longlong *)(param_1 + 0x148);
    local_b0 = pcVar26;
    local_98 = param_2;
    if ((lVar21 != 0) && (*pcVar26 != '\0')) {
      if (((*(longlong **)(param_1 + 0x140) != (longlong *)0x0) &&
          ((((*(int *)(param_1 + 0x13c) != 0 &&
             (uVar19 = *(uint *)(param_1 + 0x138), -1 < (int)uVar19)) &&
            ((int)uVar19 < DAT_14c9647dc)) &&
           ((lVar23 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8), lVar23 != 0 &&
            (*(int *)(lVar23 + 0x10) == *(int *)(param_1 + 0x13c))))))) &&
         ((*(uint *)(lVar23 + 8) & 0x10200000) == 0)) {
        cVar6 = (**(code **)(**(longlong **)(param_1 + 0x140) + 0x40))();
        if (cVar6 != '\0') {
          puVar8 = (uint *)(local_b0 + 0x18);
          iVar4 = *(int *)(local_b0 + 0x30);
          if (iVar4 == 0) {
            uVar16 = 1;
            uVar27 = 0;
            iVar28 = 0;
            iVar9 = 0;
          }
          else {
            puVar7 = *(uint **)(local_b0 + 0x28);
            if (*(uint **)(local_b0 + 0x28) == (uint *)0x0) {
              puVar7 = puVar8;
            }
            uVar19 = *puVar7;
            if (uVar19 == 0) {
              iVar9 = iVar4 + 0x1e;
              if (-1 < iVar4 + -1) {
                iVar9 = iVar4 + -1;
              }
              uVar27 = 0;
              uVar16 = (ulonglong)(uint)(iVar9 >> 5);
              if (iVar9 >> 5 < 1) {
                uVar16 = uVar27;
              }
              iVar28 = 0;
              do {
                if (uVar16 == uVar27) goto LAB_1414f12b0;
                iVar28 = iVar28 + 0x20;
                uVar19 = puVar7[uVar27 + 1];
                uVar27 = uVar27 + 1;
              } while (uVar19 == 0);
            }
            else {
              uVar27 = 0;
              iVar28 = 0;
            }
            uVar16 = (ulonglong)(-uVar19 & uVar19);
            uVar29 = uVar16 * 2 + 1;
            lVar21 = 0x3f;
            if (uVar29 != 0) {
              for (; uVar29 >> lVar21 == 0; lVar21 = lVar21 + -1) {
              }
            }
            iVar9 = (iVar28 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
            if (iVar4 <= iVar9) {
              iVar9 = iVar4;
            }
          }
          if (iVar9 != iVar4) {
            local_a0 = param_1 + 0x168;
            uVar19 = 0xffffffff;
            pcVar26 = local_b0;
            iVar11 = iVar4;
            do {
              if (*(longlong *)(*(longlong *)(pcVar26 + 8) + (longlong)iVar9 * 0x48) != 0) {
                local_a8 = (longlong *)(*(longlong *)(pcVar26 + 8) + (longlong)iVar9 * 0x48);
                local_80 = (undefined8 *)FUN_1487f158a(param_1);
                if (local_80 == (undefined8 *)0x0) {
                  local_80 = (undefined8 *)FUN_14001cc68(0x78,0x10);
                  *local_80 = 0;
                  local_80[1] = 0;
                  local_80[2] = 0;
                  local_80[3] = 0;
                  local_80[4] = 0;
                  local_80[5] = 0;
                  local_80[6] = 0;
                  local_80[7] = 0;
                  local_80[8] = 0;
                  local_80[9] = 0;
                  local_80[10] = 0;
                  local_80[0xb] = 0;
                  local_80[0xc] = 0;
                  local_80[0xd] = 0;
                  local_80[0xe] = 0;
                  *(undefined4 *)(local_80 + 0xe) = 0xffffffff;
                  local_80[1] = *local_a8;
                  local_80[0xd] = param_1;
                  local_78 = local_a8;
                  local_70 = &local_80;
                  FUN_1487fc5b8(local_a0,local_64);
                }
                lVar21 = *(longlong *)(param_1 + 0x148);
                if ((lVar21 != 0) && ((longlong)*(int *)(lVar21 + 0x118) != 0)) {
                  lVar23 = *(longlong *)(lVar21 + 0x110);
                  lVar15 = (longlong)*(int *)(lVar21 + 0x118) * 0x58;
                  do {
                    if (*(longlong *)(lVar23 + 0xc) == *local_a8) {
                      if (lVar23 != 0) goto LAB_1414f1638;
                      break;
                    }
                    lVar23 = lVar23 + 0x58;
                    lVar15 = lVar15 + -0x58;
                  } while (lVar15 != 0);
                }
                lVar21 = FUN_145ab920e(lVar21 + 0x110);
                *(longlong *)(lVar21 + 0xc) = *local_a8;
                *(int *)(lVar21 + 0x48) = *(int *)(*(longlong *)(param_1 + 0x148) + 0x118) + -1;
                lVar23 = *(longlong *)(*(longlong *)(param_1 + 0x148) + 0x110) +
                         (longlong)*(int *)(*(longlong *)(param_1 + 0x148) + 0x118) * 0x58 + -0x58;
LAB_1414f1638:
                *(undefined4 *)(local_80 + 0xe) = *(undefined4 *)(lVar23 + 0x48);
                if (*(int *)(lVar23 + 0x14) == (int)local_a8[5]) {
                  iVar9 = *(int *)(lVar23 + 0x28);
                  if (iVar9 == (int)local_a8[4]) {
                    if (1 < iVar9) {
                      lVar21 = 0;
                      while( true ) {
                        uVar14 = *(ushort *)(*(longlong *)(lVar23 + 0x20) + lVar21);
                        uVar29 = (ulonglong)uVar14;
                        uVar22 = *(ushort *)(local_a8[3] + lVar21);
                        if (uVar14 != uVar22) break;
                        if (uVar14 == 0) goto LAB_1414f171b;
LAB_1414f168a:
                        lVar21 = lVar21 + 2;
                      }
                      if ((uVar22 | uVar14) < 0x80) {
                        uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar29];
                        uVar25 = (ulonglong)uVar22;
                        uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar25];
                        if ((&DAT_149e05da0)[uVar29] == (&DAT_149e05da0)[uVar25])
                        goto LAB_1414f168a;
                      }
                      if (uVar14 != uVar22) goto LAB_1414f16d4;
                    }
                  }
                  else if ((int)local_a8[4] + iVar9 != 1) goto LAB_1414f16d4;
                }
                else {
LAB_1414f16d4:
                  *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
                  iVar9 = (int)local_a8[4] + -1;
                  if ((int)local_a8[4] == 0) {
                    iVar9 = 0;
                  }
                  FUN_1402980a2(lVar23 + 0x20,local_a8[3],iVar9);
                  *(int *)(lVar23 + 0x14) = (int)local_a8[5];
                  FUN_140705884(*(undefined8 *)(param_1 + 0x148),lVar23);
                }
LAB_1414f171b:
                plVar17 = local_a8 + 1;
                lVar21 = *plVar17;
                if (lVar21 != 0) {
                  local_88 = local_a8[2];
                  if (local_88 != 0) {
                    LOCK();
                    *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
                    UNLOCK();
                  }
                  local_90 = lVar21;
                  FUN_143ccaafe(local_80,&local_90,plVar17,0);
                  if (local_80[2] == *plVar17) {
                    local_a8[1] = 0;
                    plVar17 = (longlong *)local_a8[2];
                    if (plVar17 != (longlong *)0x0) {
                      local_a8[2] = 0;
                      LOCK();
                      plVar3 = plVar17 + 1;
                      *(int *)plVar3 = (int)*plVar3 + -1;
                      UNLOCK();
                      if ((int)*plVar3 == 0) {
                        (**(code **)*plVar17)(plVar17);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar17 + 0xc);
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (*piVar1 == 0) {
                          (**(code **)(*plVar17 + 0x10))(plVar17);
                        }
                      }
                    }
                  }
                }
                iVar11 = *(int *)(local_b0 + 0x30);
                pcVar26 = local_b0;
              }
              uVar19 = uVar19 & ~(uint)uVar16;
              puVar7 = *(uint **)(pcVar26 + 0x28);
              if (*(uint **)(pcVar26 + 0x28) == (uint *)0x0) {
                puVar7 = puVar8;
              }
              iVar9 = (int)uVar27;
              lVar21 = (longlong)iVar9;
              uVar10 = puVar7[lVar21] & uVar19;
              if (uVar10 == 0) {
                iVar12 = iVar11 + 0x1e;
                if (-1 < iVar11 + -1) {
                  iVar12 = iVar11 + -1;
                }
                iVar12 = iVar12 >> 5;
                iVar28 = iVar28 + 0x20;
                iVar13 = iVar12;
                if (iVar12 < iVar9) {
                  iVar13 = iVar9;
                }
                if (iVar9 < iVar12) {
                  lVar23 = 0;
                  do {
                    uVar10 = puVar7[lVar21 + lVar23 + 1];
                    if (uVar10 != 0) {
                      uVar27 = (ulonglong)(iVar9 + (int)lVar23 + 1);
                      uVar19 = 0xffffffff;
                      goto LAB_1414f1553;
                    }
                    iVar28 = iVar28 + 0x20;
                    lVar23 = lVar23 + 1;
                  } while (iVar13 - lVar21 != lVar23);
                  uVar19 = 0xffffffff;
                  lVar21 = (longlong)iVar13;
                }
                uVar27 = lVar21 + 1U & 0xffffffff;
                pcVar26 = local_b0;
                iVar9 = iVar11;
              }
              else {
LAB_1414f1553:
                uVar16 = (ulonglong)(-uVar10 & uVar10);
                uVar29 = uVar16 * 2 + 1;
                lVar21 = 0x3f;
                if (uVar29 != 0) {
                  for (; uVar29 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                  }
                }
                iVar9 = (iVar28 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
                if (iVar11 <= iVar9) {
                  iVar9 = iVar11;
                }
              }
            } while (iVar9 != iVar4);
          }
          goto LAB_1414f12b0;
        }
        lVar21 = *(longlong *)(param_1 + 0x148);
      }
      *(undefined1 *)(param_1 + 0x1bb) = 0;
      if (0 < *(int *)(lVar21 + 0x118)) {
        pcVar26 = local_b0 + 0x40;
        lVar23 = 0;
        pcVar24 = local_b0;
        do {
          if (*(int *)(pcVar24 + 0x10) != *(int *)(pcVar24 + 0x3c)) {
            lVar15 = *(longlong *)(lVar21 + 0x110);
            lVar20 = lVar23 * 0x58;
            lVar5 = *(longlong *)(lVar15 + 0xc + lVar20);
            uVar19 = (uint)((ulonglong)lVar5 >> 0x10);
            uVar10 = (uint)lVar5 & 0xffff;
            pcVar24 = *(char **)(local_b0 + 0x48);
            if (*(char **)(local_b0 + 0x48) == (char *)0x0) {
              pcVar24 = pcVar26;
            }
            iVar4 = *(int *)(pcVar24 +
                            (ulonglong)
                            (*(int *)(local_b0 + 0x50) - 1U &
                            (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar10) +
                            (uVar19 << 0x13 | uVar19 & 0xffff) + (uVar10 >> 4)) * 4);
            pcVar24 = local_b0;
            if (iVar4 != -1) {
              lVar2 = lVar15 + lVar20;
              plVar17 = (longlong *)(lVar15 + lVar20 + 0xc);
              do {
                plVar3 = (longlong *)(*(longlong *)(local_b0 + 8) + (longlong)iVar4 * 0x48);
                if (*plVar3 == lVar5) {
                  if (((plVar3 != (longlong *)0x0) && (plVar3 + 1 != (longlong *)0x0)) &&
                     (lVar5 != 0)) {
                    local_80 = (undefined8 *)FUN_1487f158a(param_1,plVar17);
                    if (local_80 == (undefined8 *)0x0) {
                      local_80 = (undefined8 *)FUN_14001cc68(0x78,0x10);
                      *local_80 = 0;
                      local_80[1] = 0;
                      local_80[2] = 0;
                      local_80[3] = 0;
                      local_80[4] = 0;
                      local_80[5] = 0;
                      local_80[6] = 0;
                      local_80[7] = 0;
                      local_80[8] = 0;
                      local_80[9] = 0;
                      local_80[10] = 0;
                      local_80[0xb] = 0;
                      local_80[0xc] = 0;
                      local_80[0xd] = 0;
                      local_80[0xe] = 0;
                      *(undefined4 *)(local_80 + 0xe) = 0xffffffff;
                      local_80[1] = *(undefined8 *)(lVar2 + 0xc);
                      local_80[0xd] = param_1;
                      *(int *)(local_80 + 0xe) = (int)lVar23;
                      local_70 = &local_80;
                      local_78 = plVar17;
                      FUN_1487fc5b8(param_1 + 0x168,local_64,&local_78);
                      *(undefined8 **)(lVar2 + 0x50) = local_80;
                    }
                    else {
                      *(int *)(local_80 + 0xe) = (int)lVar23;
                    }
                    local_90 = plVar3[1];
                    local_88 = plVar3[2];
                    if (local_88 != 0) {
                      LOCK();
                      *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
                      UNLOCK();
                    }
                    FUN_143ccaafe(local_80,&local_90,0,0);
                    if (local_80[2] == plVar3[1]) {
                      plVar3[1] = 0;
                      plVar17 = (longlong *)plVar3[2];
                      if (plVar17 != (longlong *)0x0) {
                        plVar3[2] = 0;
                        LOCK();
                        plVar3 = plVar17 + 1;
                        *(int *)plVar3 = (int)*plVar3 + -1;
                        UNLOCK();
                        if ((int)*plVar3 == 0) {
                          (**(code **)*plVar17)(plVar17);
                          LOCK();
                          piVar1 = (int *)((longlong)plVar17 + 0xc);
                          *piVar1 = *piVar1 + -1;
                          UNLOCK();
                          if (*piVar1 == 0) {
                            (**(code **)(*plVar17 + 0x10))(plVar17);
                          }
                        }
                      }
                    }
                    *(undefined4 *)local_80 = *(undefined4 *)(lVar2 + 0x1c);
                    lVar21 = *(longlong *)(param_1 + 0x148);
                    pcVar24 = local_b0;
                  }
                  break;
                }
                iVar4 = (int)plVar3[8];
              } while (iVar4 != -1);
            }
          }
          lVar23 = lVar23 + 1;
        } while (lVar23 < *(int *)(lVar21 + 0x118));
      }
    }
LAB_1414f12b0:
    *(undefined1 *)(param_1 + 0x1ba) = 1;
    iVar4 = *(int *)(param_1 + 400);
    if (iVar4 == 0) {
      uVar16 = 1;
      uVar29 = 0;
      uVar27 = 0;
      iVar9 = 0;
    }
    else {
      puVar8 = *(uint **)(param_1 + 0x188);
      if (*(uint **)(param_1 + 0x188) == (uint *)0x0) {
        puVar8 = (uint *)(param_1 + 0x178);
      }
      uVar19 = *puVar8;
      if (uVar19 == 0) {
        iVar9 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar9 = iVar4 + -1;
        }
        uVar29 = 0;
        uVar16 = (ulonglong)(uint)(iVar9 >> 5);
        if (iVar9 >> 5 < 1) {
          uVar16 = uVar29;
        }
        uVar27 = 0;
        do {
          if (uVar16 == uVar29) goto LAB_1414f1349;
          uVar27 = (ulonglong)((int)uVar27 + 0x20);
          uVar19 = puVar8[uVar29 + 1];
          uVar29 = uVar29 + 1;
        } while (uVar19 == 0);
      }
      else {
        uVar29 = 0;
        uVar27 = 0;
      }
      uVar16 = (ulonglong)(-uVar19 & uVar19);
      uVar25 = uVar16 * 2 + 1;
      lVar21 = 0x3f;
      if (uVar25 != 0) {
        for (; uVar25 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      iVar9 = ((int)uVar27 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
      if (iVar4 <= iVar9) {
        iVar9 = iVar4;
      }
    }
    if (iVar9 != iVar4) {
      uVar19 = 0xffffffff;
      iVar28 = iVar4;
      do {
        lVar21 = *(longlong *)(*(longlong *)(param_1 + 0x168) + 8 + (longlong)iVar9 * 0x18);
        if (lVar21 != 0) {
          if ((*(longlong *)(lVar21 + 0x10) != 0) &&
             (*(char *)(*(longlong *)(lVar21 + 0x10) + 0xc0) == '\x04')) {
            FUN_1487ef8c8();
          }
          FUN_143ccafd2(lVar21);
          iVar28 = *(int *)(param_1 + 400);
        }
        uVar19 = uVar19 & ~(uint)uVar16;
        puVar8 = *(uint **)(param_1 + 0x188);
        if (*(uint **)(param_1 + 0x188) == (uint *)0x0) {
          puVar8 = (uint *)(param_1 + 0x178);
        }
        iVar9 = (int)uVar29;
        lVar21 = (longlong)iVar9;
        uVar10 = puVar8[lVar21] & uVar19;
        if (uVar10 == 0) {
          iVar11 = iVar28 + 0x1e;
          if (-1 < iVar28 + -1) {
            iVar11 = iVar28 + -1;
          }
          iVar11 = iVar11 >> 5;
          uVar27 = (ulonglong)((int)uVar27 + 0x20);
          iVar12 = iVar11;
          if (iVar11 < iVar9) {
            iVar12 = iVar9;
          }
          if (iVar9 < iVar11) {
            lVar23 = 0;
            do {
              uVar10 = puVar8[lVar21 + lVar23 + 1];
              if (uVar10 != 0) {
                uVar29 = (ulonglong)(iVar9 + (int)lVar23 + 1);
                uVar19 = 0xffffffff;
                goto LAB_1414f1459;
              }
              uVar27 = (ulonglong)((int)uVar27 + 0x20);
              lVar23 = lVar23 + 1;
            } while (iVar12 - lVar21 != lVar23);
            uVar19 = 0xffffffff;
            lVar21 = (longlong)iVar12;
          }
          uVar29 = lVar21 + 1U & 0xffffffff;
          iVar9 = iVar28;
        }
        else {
LAB_1414f1459:
          uVar16 = (ulonglong)(-uVar10 & uVar10);
          uVar25 = uVar16 * 2 + 1;
          lVar21 = 0x3f;
          if (uVar25 != 0) {
            for (; uVar25 >> lVar21 == 0; lVar21 = lVar21 + -1) {
            }
          }
          iVar9 = ((int)uVar27 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
          if (iVar28 <= iVar9) {
            iVar9 = iVar28;
          }
        }
      } while (iVar9 != iVar4);
    }
LAB_1414f1349:
    uVar18 = CONCAT71((int7)(uVar27 >> 8),1);
    FUN_143ccca3a(param_1,1);
    if (*(char *)(local_98 + 0x18) == '\0') {
      *(undefined8 *)(local_98 + 0x68) = 0;
      local_b0[0x50] = '\0';
      local_b0[0x51] = '\0';
      local_b0[0x52] = '\0';
      local_b0[0x53] = '\0';
      if (*(longlong *)(local_b0 + 0x48) != 0) {
        FUN_1400020a8();
      }
      pcVar26 = local_b0;
      FUN_140e74610(local_b0 + 8);
      FUN_1400020a8(pcVar26);
    }
    goto LAB_1414f0fb1;
  }
  uVar18 = 0;
LAB_1414f0fb1:
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar18;
}



// FUNCTION 1414f184e FUN_1414f184e body=75 status=ok
// SIG undefined FUN_1414f184e(void)

void FUN_1414f184e(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14b4046b0;
  *(undefined2 *)(param_1 + 7) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x51) = 0;
  *(undefined8 *)((longlong)param_1 + 0x59) = 0;
  param_1[8] = &PTR_FUN_14a544b40;
  return;
}



// FUNCTION 1414f189a FUN_1414f189a body=93 status=ok
// SIG undefined FUN_1414f189a(void)

void FUN_1414f189a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x18))(plVar3,param_2,param_3,param_4);
      }
      lVar4 = lVar4 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar4);
  }
  return;
}



// FUNCTION 1414f191c FUN_1414f191c body=862 status=ok
// SIG undefined FUN_1414f191c(void)

void FUN_1414f191c(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  int local_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_80;
  undefined4 local_78;
  ulonglong local_70;
  longlong local_68;
  undefined8 local_60;
  int local_58;
  undefined4 uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 0x150) != '\x03') {
    local_98 = 0;
    uStack_90 = 0;
    lVar8 = param_1 + 0x1e0;
    local_70 = 0x100000000;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_68 = lVar8;
    if (*(int *)(param_1 + 0x1f8) == 0) {
      uVar7 = 1;
      iVar15 = 0;
      local_60._4_4_ = 0;
      uVar10 = 0xffffffff;
      iVar16 = 0;
    }
    else {
      FUN_1449c0562(&local_70);
      uVar7 = local_70 >> 0x20;
      iVar15 = *(int *)(param_1 + 0x1f8);
      uVar10 = (uint)local_60;
      iVar16 = (int)local_70;
    }
    lVar11 = local_68;
    iVar6 = local_60._4_4_;
    iVar17 = local_58;
    if (local_60._4_4_ != iVar15 || local_68 != lVar8) {
      do {
        lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 0x10 + (longlong)iVar6 * 0x20);
        if (0 < *(int *)(lVar14 + 0x18)) {
          puVar9 = (undefined8 *)(lVar14 + 0x10);
          local_80 = *puVar9;
          local_78 = *(undefined4 *)(lVar14 + 0x18);
          local_9c = iVar15;
          FUN_1448075d0(&local_70,&local_80);
          local_a8 = FUN_14060eaf6(&local_70);
          if (CONCAT44(uStack_54,local_58) != 0) {
            FUN_1400020a8();
          }
          iVar15 = local_9c;
          if (local_a8 != 0) {
            local_80 = *puVar9;
            local_78 = *(undefined4 *)(lVar14 + 0x18);
            FUN_1448075d0(&local_70,&local_80);
            local_a8 = FUN_14060eaf6(&local_70);
            if (CONCAT44(uStack_54,local_58) != 0) {
              FUN_1400020a8();
            }
            if ((*(char *)(local_a8 + 0x752) != '\x01') ||
               (iVar15 = local_9c, *(char *)(local_a8 + 0x751) == '\x02')) {
              local_a8 = (longlong)(int)uStack_90;
              uVar5 = (int)uStack_90 + 1;
              uStack_90 = CONCAT44(uStack_90._4_4_,uVar5);
              if (uStack_90._4_4_ < uVar5) {
                FUN_1446dd912(&local_98,local_a8);
              }
              *(undefined4 *)(local_98 + 8 + local_a8 * 0xc) = *(undefined4 *)(lVar14 + 0x18);
              *(undefined8 *)(local_98 + local_a8 * 0xc) = *puVar9;
              iVar15 = local_9c;
            }
          }
        }
        uVar10 = uVar10 & ~(uint)uVar7;
        lVar14 = *(longlong *)(lVar11 + 0x10);
        if (*(longlong *)(lVar11 + 0x10) == 0) {
          lVar14 = lVar11;
        }
        iVar2 = *(int *)(lVar11 + 0x18);
        lVar12 = (longlong)iVar16;
        uVar5 = *(uint *)(lVar14 + lVar12 * 4) & uVar10;
        iVar6 = iVar2;
        if (uVar5 == 0) {
          iVar4 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar4 = iVar2 + -1;
          }
          iVar4 = iVar4 >> 5;
          iVar17 = iVar17 + 0x20;
          iVar3 = iVar4;
          if (iVar4 < iVar16) {
            iVar3 = iVar16;
          }
          if (iVar16 < iVar4) {
            lVar13 = 0;
            do {
              uVar5 = *(uint *)(lVar14 + lVar12 * 4 + 4 + lVar13 * 4);
              if (uVar5 != 0) {
                iVar16 = iVar16 + (int)lVar13 + 1;
                uVar10 = 0xffffffff;
                goto LAB_1414f1a49;
              }
              iVar17 = iVar17 + 0x20;
              lVar13 = lVar13 + 1;
            } while (iVar3 - lVar12 != lVar13);
            uVar10 = 0xffffffff;
            iVar16 = iVar3 + 1;
          }
          else {
            iVar16 = iVar16 + 1;
          }
        }
        else {
LAB_1414f1a49:
          uVar7 = (ulonglong)(-uVar5 & uVar5);
          uVar1 = uVar7 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar6 = (iVar17 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          if (iVar2 <= iVar6) {
            iVar6 = iVar2;
          }
        }
      } while (iVar6 != iVar15 || lVar11 != lVar8);
      if ((longlong)(int)uStack_90 != 0) {
        lVar8 = (longlong)(int)uStack_90 * 0xc;
        lVar11 = local_98;
        do {
          FUN_140d58c30(param_1,lVar11,1);
          lVar11 = lVar11 + 0xc;
          lVar8 = lVar8 + -0xc;
        } while (lVar8 != 0);
      }
      if (local_98 != 0) {
        FUN_1400020a8(local_98);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414f1c7b FUN_1414f1c7b body=56 status=ok
// SIG undefined FUN_1414f1c7b(void)

void FUN_1414f1c7b(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 0x10);
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
      plVar3 = plVar3 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1414f1cb4 FUN_1414f1cb4 body=129 status=ok
// SIG undefined FUN_1414f1cb4(void)

void FUN_1414f1cb4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 5) = 4;
  *(undefined4 *)(param_1 + 2) = 0x3f800000;
  *(undefined1 *)(param_1 + 6) = 3;
  *(char *)(param_1 + 7) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 0xd) = 3;
  *(char *)(param_1 + 0xe) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined2 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7a) = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  return;
}



// FUNCTION 1414f1d42 FUN_1414f1d42 body=1108 status=ok
// SIG undefined FUN_1414f1d42(void)

void FUN_1414f1d42(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  ulonglong uVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined8 uVar11;
  int iVar12;
  ulonglong uVar13;
  undefined2 *puVar14;
  int iVar15;
  code *pcVar16;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  code *local_a8;
  code *local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  undefined4 local_88;
  uint local_84;
  undefined4 local_80;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 local_64;
  code *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(undefined4 *)(param_1 + 0x170) = param_2;
  *(undefined4 *)(param_1 + 0x174) = param_3;
  plVar3 = *(longlong **)(param_1 + 0x148);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x48))(plVar3,param_2,param_3);
  }
  if ((*(char *)(param_1 + 0xf3) != '\0') || (*(longlong *)(param_1 + 0x140) == 0))
  goto LAB_1414f2039;
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (DAT_14c86a9f8 == '\x01') {
    iVar12 = *piVar2;
    if (iVar12 != 2) {
      iVar15 = 0x40000010;
      if (iVar12 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        iVar15 = 0x40000010;
        if (DVar7 == DVar8) {
          iVar15 = 0x40000002;
        }
        goto LAB_1414f2176;
      }
      goto LAB_1414f1ded;
    }
  }
  else {
    iVar15 = 0x40000002;
LAB_1414f2176:
    iVar12 = *piVar2;
    if (iVar12 == 1) {
      FUN_140ad26c0();
      GetCurrentThreadId();
      iVar12 = *piVar2;
    }
LAB_1414f1ded:
    if ((iVar12 == 0x60000000) || (iVar12 == 0)) {
      *piVar2 = iVar15;
    }
  }
  lVar9 = FUN_141545d8e();
  if (lVar9 == 0) {
    local_80 = 0;
    local_7b = 0;
    local_74 = 0;
    uStack_6c = 0;
    local_64 = 0;
    local_90 = (char *)CONCAT44(param_3,param_2);
    local_84 = *(uint *)(param_1 + 0x130);
    local_7c = 1;
    local_88 = 1;
    if (DAT_14cb907b8 == (longlong *)0x0) {
      local_b0 = &local_58;
      local_58 = FUN_1449e2820;
      local_a0 = FUN_14081d0ea;
      local_a8 = FUN_14081d0ea;
      local_b8 = &LAB_1489c8acb;
      local_c0 = &LAB_146027b0e;
      local_c8 = L"Engine";
      local_d0 = 0;
      local_d8 = 0x10000006;
      local_e0 = 8;
      local_e8 = 0x128;
      FUN_14081cfa3(L"/Script/CohtmlPlugin",L"CohtmlSettings",&DAT_14cb907b8,&DAT_1489c8aca);
    }
    plVar3 = DAT_14cb907b8;
    lVar9 = DAT_14cb907b8[0x22];
    if (lVar9 == 0) {
      (**(code **)(*DAT_14cb907b8 + 1000))();
      lVar9 = plVar3[0x22];
    }
    uVar6 = 0x34;
    if (*(char *)(lVar9 + 0x76) != '\x01') {
      uVar6 = 0;
    }
    local_78 = 1;
    if (*(char *)(lVar9 + 0x76) != '\x02') {
      local_78 = uVar6;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x140);
    puVar10 = *(undefined2 **)(param_1 + 0xe0);
    iVar15 = *(int *)(param_1 + 0xe8);
    lVar9 = (longlong)iVar15 << 0x20;
    uVar13 = (longlong)iVar15 * 2;
    do {
      if (uVar13 == 0) {
        puVar14 = &DAT_149dfb77a;
        goto LAB_1414f1f38;
      }
      lVar9 = lVar9 + -0x100000000;
      uVar1 = uVar13 - 2;
      lVar5 = uVar13 - 2;
      uVar13 = uVar1;
    } while (*(short *)((longlong)puVar10 + lVar5) != 0x3d);
    puVar14 = &DAT_149dfb77a;
    if ((int)(~uVar1 >> 1) != 0) {
      if (iVar15 == 0) {
        puVar10 = &DAT_149dfb77a;
      }
      puVar14 = puVar10 + (lVar9 >> 0x20) + 1;
    }
LAB_1414f1f38:
    FUN_140002266(&local_58,L"PrysmViewRT_%s",puVar14);
    pcVar16 = (code *)&DAT_149dfb77a;
    if (local_50 != 0) {
      pcVar16 = local_58;
    }
    FUN_1446f470e(local_98,pcVar16,1);
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
    }
    uVar11 = FUN_143e8757d(*(undefined1 *)(param_1 + 0x104),param_2,param_3,local_98);
    FUN_143e790b0(uVar4,&local_90,uVar11);
  }
  else {
    FUN_1405964be(*(undefined8 *)(param_1 + 0x140),param_2,param_3);
  }
  local_90 = "CohtmlPlugin";
  local_88 = 0xc;
  local_84 = local_84 & 0xffffff00;
  uVar6 = FUN_14001a6c0(&local_90,1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
    FUN_145762954(&DAT_14c874628);
    DAT_14c874a18 = 1;
    atexit(FUN_14278de47);
    _Init_thread_footer(&DAT_14c874a20);
  }
  lVar9 = FUN_1402c9134(&DAT_14c874628,uVar6,&local_90,1);
  plVar3 = *(longlong **)(lVar9 + 0x18);
  if (plVar3 != (longlong *)0x0 && *(int *)(lVar9 + 0x20) != 0) {
    (**(code **)(*plVar3 + 0x60))(plVar3,param_1);
  }
  if ((iVar12 == 0x60000000) || (iVar12 == 0)) {
    *piVar2 = iVar12;
  }
LAB_1414f2039:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414f2198 FUN_1414f2198 body=1370 status=ok
// SIG undefined FUN_1414f2198(void)

undefined4 *
FUN_1414f2198(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 *param_4,
             longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  code *local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xe) = *param_2;
  lVar9 = param_2[1];
  *(longlong *)(param_1 + 0x10) = lVar9;
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x12) = *param_3;
  lVar9 = param_3[1];
  *(longlong *)(param_1 + 0x14) = lVar9;
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0x2d000000500;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined2 *)(param_1 + 0x2a) = 1;
  *(undefined8 *)(param_1 + 0x2b) = 1;
  *(undefined8 *)(param_1 + 0x2d) = 0;
  param_1[0x2f] = 200;
  *(undefined8 *)(param_1 + 0x30) = 0;
  param_1[0x32] = 0x41000000;
  *(undefined2 *)(param_1 + 0x33) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcf) = 0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  param_1[0x3c] = 0x10001;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  param_1[0x40] = 0;
  *(undefined1 *)(param_1 + 0x41) = *param_4;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x46) = 0;
  param_1[0x46] = 8;
  FUN_146569024(param_1 + 0x44);
  puVar4 = *(undefined8 **)(param_1 + 0x44);
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  param_1[0x42] = param_1[0x46] + -1;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x4e) = 0;
  iVar8 = 0;
  if (param_5 != 0) {
    uVar3 = *(uint *)(param_5 + 0xc);
    param_1[0x4e] = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar8 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar8 = *(int *)(lVar9 + 0x10);
      bVar10 = iVar8 == 0;
      if (bVar10) {
        *(int *)(lVar9 + 0x10) = iVar7;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar8 = iVar7;
      }
    }
  }
  param_1[0x4f] = iVar8;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x5e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x183) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x165) = 0;
  if (DAT_14c763a8c == '\0') {
    pcVar6 = (code *)FUN_14001cc68(0x90,0x10);
    *(undefined8 *)pcVar6 = 0;
    *(undefined8 *)(pcVar6 + 8) = 0;
    *(undefined4 *)(pcVar6 + 0x10) = 0;
    *(undefined8 *)(pcVar6 + 0x18) = 0;
    *(undefined8 *)(pcVar6 + 0x20) = 0;
    *(undefined4 *)(pcVar6 + 0x28) = 0;
    *(undefined8 *)(pcVar6 + 0x2c) = 1;
    *(undefined2 *)(pcVar6 + 0x34) = 0;
    *(undefined8 *)(pcVar6 + 0x38) = 0;
    *(undefined8 *)(pcVar6 + 0x40) = 0;
    *(undefined8 *)(pcVar6 + 0x44) = 0;
    *(undefined8 *)(pcVar6 + 0x4c) = 0;
    *(undefined8 *)(pcVar6 + 0x58) = 0;
    *(undefined8 *)(pcVar6 + 0x60) = 0;
    *(undefined8 *)(pcVar6 + 0x61) = 0;
    *(undefined8 *)(pcVar6 + 0x69) = 0;
    FUN_140056680(pcVar6 + 0x78,L"Dummy Texture");
    pcVar6[0x88] = (code)0x0;
    *(undefined1 **)(pcVar6 + 0x20) = &DAT_100000001;
    *(code **)(param_1 + 0x50) = pcVar6;
    local_60 = pcVar6;
    FUN_140596b32(&local_60);
    pcVar6 = local_60;
    if (local_60 != (code *)0x0) {
      FUN_14058c1a6(local_60);
      FUN_1400020a8(pcVar6);
    }
  }
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 0x4d) = 0;
  if (DAT_14cb907b8 == (longlong *)0x0) {
    local_80 = &local_60;
    local_60 = FUN_1449e2820;
    local_70 = FUN_14081d0ea;
    local_78 = FUN_14081d0ea;
    local_88 = &LAB_1489c8acb;
    local_90 = &LAB_146027b0e;
    local_98 = L"Engine";
    local_a0 = 0;
    local_a8 = 0x10000006;
    local_b0 = 8;
    local_b8 = 0x128;
    FUN_14081cfa3(L"/Script/CohtmlPlugin",L"CohtmlSettings",&DAT_14cb907b8,&DAT_1489c8aca);
  }
  plVar5 = DAT_14cb907b8;
  lVar9 = DAT_14cb907b8[0x22];
  if (lVar9 == 0) {
    (**(code **)(*DAT_14cb907b8 + 1000))(DAT_14cb907b8);
    lVar9 = plVar5[0x22];
  }
  if ((ulonglong)*(byte *)(lVar9 + 0x8d) < 3) {
    param_1[0x4c] = *(undefined4 *)(&DAT_14b457630 + (ulonglong)*(byte *)(lVar9 + 0x8d) * 4);
  }
  FUN_1416b5010(&local_60);
  plVar1 = local_58;
  *(code **)(param_1 + 0x16) = local_60;
  local_60 = (code *)0x0;
  plVar5 = *(longlong **)(param_1 + 0x18);
  if (local_58 != plVar5) {
    local_58 = (longlong *)0x0;
    *(longlong **)(param_1 + 0x18) = plVar1;
    if (plVar5 == (longlong *)0x0) goto LAB_1414f252e;
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
  plVar5 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
LAB_1414f252e:
  if (*(longlong *)(param_1 + 0x16) != 0) {
    FUN_1416b4b3c(*(longlong *)(param_1 + 0x16),param_1 + 0x1a);
  }
  if (DAT_14c98e618 != 0) {
    FUN_1458665b6(*(longlong *)(DAT_14c98e618 + 0x20) + 0x60,&local_60,param_1);
    *(code **)(param_1 + 4) = local_60;
  }
  FUN_1465686ec(&local_60,param_1);
  *(code **)(param_1 + 6) = local_60;
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
  if ((local_50 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1414f26f4 FUN_1414f26f4 body=5 status=ok
// SIG undefined FUN_1414f26f4(void)

undefined8 FUN_1414f26f4(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// FUNCTION 1414f26fa FUN_1414f26fa body=792 status=ok
// SIG undefined FUN_1414f26fa(void)

void FUN_1414f26fa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(char *)(param_1 + 0x28) != '\x01') || (*(char *)(param_1 + 0x71) != '\0'))
  goto LAB_1414f2721;
  FUN_1416b5010(&local_38);
  plVar1 = local_30;
  *(undefined8 *)(param_1 + 0x60) = local_38;
  local_38 = 0;
  plVar4 = *(longlong **)(param_1 + 0x68);
  if (local_30 == plVar4) {
LAB_1414f279e:
    plVar4 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
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
    local_30 = (longlong *)0x0;
    *(longlong **)(param_1 + 0x68) = plVar1;
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
      goto LAB_1414f279e;
    }
  }
  FUN_1489df134(param_1);
  if (DAT_14cb90da8 != 3) {
    FUN_1446efa72(&DAT_14cb90da0,0,3,0x10);
    DAT_14cb90da8 = 3;
  }
  puVar5 = DAT_14cb90da0;
  *DAT_14cb90da0 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  puVar5[2] = lVar7;
  *puVar5 = &PTR_FUN_14b456f10;
  puVar5[3] = 0;
  if (param_1 == 0) {
    iVar6 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xc);
    *(uint *)(puVar5 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar6 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar6 = *(int *)(lVar9 + 0x10);
      bVar10 = iVar6 == 0;
      if (bVar10) {
        *(int *)(lVar9 + 0x10) = iVar8;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar6 = iVar8;
      }
    }
  }
  *(int *)((longlong)puVar5 + 0x1c) = iVar6;
  puVar5[4] = FUN_1489df192;
  if (DAT_14cb90d48 != 3) {
    FUN_1446efa72(&DAT_14cb90d40,0,3,0x10);
    DAT_14cb90d48 = 3;
  }
  puVar5 = DAT_14cb90d40;
  *DAT_14cb90d40 = &PTR_LAB_14b456ff0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  puVar5[2] = lVar7;
  *puVar5 = &PTR_FUN_14b456f80;
  puVar5[3] = 0;
  if (param_1 == 0) {
    iVar6 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xc);
    *(uint *)(puVar5 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar6 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar6 = *(int *)(lVar9 + 0x10);
      bVar10 = iVar6 == 0;
      if (bVar10) {
        *(int *)(lVar9 + 0x10) = iVar8;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar6 = iVar8;
      }
    }
  }
  *(int *)((longlong)puVar5 + 0x1c) = iVar6;
  puVar5[4] = FUN_143e964f8;
  *(undefined1 *)(param_1 + 0x71) = 1;
LAB_1414f2721:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414f2a14 FUN_1414f2a14 body=1826 status=ok
// SIG undefined FUN_1414f2a14(void)

void FUN_1414f2a14(longlong param_1)

{
  void *_Src;
  char cVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  size_t sVar7;
  undefined ***pppuVar8;
  int iVar9;
  undefined **ppuVar10;
  undefined2 *puVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  wchar_t *pwVar18;
  undefined1 auStack_178 [32];
  longlong local_158;
  longlong local_150;
  undefined **local_148;
  undefined8 uStack_140;
  longlong local_138;
  undefined8 uStack_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined **local_118;
  undefined8 local_110;
  undefined **local_108;
  ulonglong uStack_100;
  undefined **local_f8;
  undefined ***local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined ***local_78;
  undefined ***local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_158 = param_1;
  if (*(char *)(param_1 + 0x28) != '\x01') {
LAB_1414f2da8:
    if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  plVar4 = (longlong *)FUN_14054d1d4();
  FUN_1410f2562(&local_118);
  iVar3 = (int)local_110;
  iVar2 = ((int)local_110 == 0) + 0x16;
  local_108 = local_118;
  local_118 = (undefined **)0x0;
  iVar16 = local_110._4_4_;
  uStack_100 = local_110;
  local_110 = 0;
  iVar9 = iVar2 + iVar3;
  if (iVar9 < iVar3) {
LAB_1414f3129:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  if (-1 < iVar9) {
    if (iVar16 < iVar9) {
      FUN_1446f8c06(&local_108);
    }
    FUN_1400020e8(&local_108,L"GbxUIPreloaderManifest",0x16);
    local_f8 = local_108;
    iVar3 = (int)uStack_100 + -1;
    if ((int)uStack_100 == 0) {
      iVar3 = 0;
    }
    local_f0 = (undefined ***)CONCAT44(local_f0._4_4_,iVar3);
    FUN_140bee87a(&local_148,&local_f8,1);
    iVar3 = (int)uStack_140;
    iVar2 = ((int)uStack_140 == 0) + 4;
    local_f8 = local_148;
    local_148 = (undefined **)0x0;
    iVar16 = uStack_140._4_4_;
    local_f0 = uStack_140;
    uStack_140 = (undefined ***)0x0;
    iVar9 = iVar2 + iVar3;
    if (iVar9 < iVar3) goto LAB_1414f3129;
    if (-1 < iVar9) {
      if (iVar16 < iVar9) {
        FUN_1446f8c06(&local_f8);
      }
      FUN_1400020e8(&local_f8,L".dat",4);
      ppuVar10 = local_f8;
      if ((int)local_f0 == 0) {
        ppuVar10 = (undefined **)&DAT_149dfb77a;
      }
      puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x18))(plVar4,ppuVar10,0);
      if (local_f8 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      if (local_148 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      if (local_108 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      if (local_118 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      if (puVar5 != (undefined8 *)0x0) {
        local_128 = 0;
        uStack_120 = 0;
        local_138 = 0;
        uStack_130 = 0;
        local_148 = (undefined **)0x0;
        uStack_140 = (undefined ***)0x0;
        uVar6 = FUN_1405d0c38(puVar5,&local_148);
        uVar6 = FUN_1405d0c38(uVar6,&local_138);
        FUN_1405d0c38(uVar6,&local_128);
        (**(code **)*puVar5)(puVar5,1);
        if ((longlong)(int)uStack_140 != 0) {
          lVar15 = local_158 + 0x78;
          lVar14 = (longlong)(int)uStack_140 << 4;
          ppuVar10 = local_148;
          do {
            local_108 = (undefined **)0x0;
            uStack_100 = 0;
            puVar11 = &DAT_149dfb77a;
            if (*(int *)(ppuVar10 + 1) != 0) {
              puVar11 = (undefined2 *)*ppuVar10;
            }
            cVar1 = FUN_14158b496(&local_108,puVar11,0);
            if (cVar1 != '\0') {
              local_f8 = ppuVar10;
              local_f0 = &local_108;
              FUN_1489ecea4(lVar15,&local_118);
            }
            if (local_108 != (undefined **)0x0) {
              FUN_1400020a8();
            }
            lVar13 = local_138;
            ppuVar10 = ppuVar10 + 2;
            lVar14 = lVar14 + -0x10;
          } while (lVar14 != 0);
          *(undefined1 *)(local_158 + 0x70) = 1;
          lVar15 = (longlong)(int)uStack_130;
          if (lVar15 != 0) {
            lVar14 = 0;
            do {
              plVar4 = (longlong *)**(undefined8 **)(local_158 + 0x60);
              if (*(int *)(lVar13 + 8 + lVar14) == 0) {
                pwVar18 = L"";
LAB_1414f2f5d:
                local_78 = (undefined ***)0x0;
                sVar7 = wcslen(pwVar18);
                local_68 = FUN_14475aa65(0,pwVar18,sVar7 & 0xffffffff);
                uVar12 = local_68 + 1;
                pppuVar8 = (undefined ***)0x0;
                if (0x80 < uVar12) {
                  FUN_1446efa72(&local_78,0,uVar12,1);
                  pppuVar8 = local_78;
                }
                local_70 = pppuVar8;
                if (pppuVar8 == (undefined ***)0x0) {
                  local_70 = &local_f8;
                }
                FUN_14475a98a(local_70,uVar12,pwVar18,(int)sVar7 + 1);
              }
              else {
                pwVar18 = *(wchar_t **)(lVar13 + lVar14);
                local_78 = (undefined ***)0x0;
                if (pwVar18 != (wchar_t *)0x0) goto LAB_1414f2f5d;
                local_70 = (undefined ***)0x0;
                local_68 = 0;
              }
              (**(code **)(*plVar4 + 0xb0))(plVar4,local_70);
              if (local_78 != (undefined ***)0x0) {
                FUN_1400020a8();
              }
              lVar14 = lVar14 + 0x10;
            } while (lVar15 * 0x10 != lVar14);
          }
          lVar15 = local_128;
          lVar14 = (longlong)(int)uStack_120;
          if (lVar14 != 0) {
            lVar13 = 0;
            do {
              plVar4 = (longlong *)**(undefined8 **)(local_158 + 0x60);
              if (*(int *)(lVar15 + 8 + lVar13) == 0) {
                pwVar18 = L"";
LAB_1414f3078:
                local_78 = (undefined ***)0x0;
                sVar7 = wcslen(pwVar18);
                local_68 = FUN_14475aa65(0,pwVar18,sVar7 & 0xffffffff);
                uVar12 = local_68 + 1;
                pppuVar8 = (undefined ***)0x0;
                if (0x80 < uVar12) {
                  FUN_1446efa72(&local_78,0,uVar12,1);
                  pppuVar8 = local_78;
                }
                local_70 = pppuVar8;
                if (pppuVar8 == (undefined ***)0x0) {
                  local_70 = &local_f8;
                }
                FUN_14475a98a(local_70,uVar12,pwVar18,(int)sVar7 + 1);
              }
              else {
                pwVar18 = *(wchar_t **)(lVar15 + lVar13);
                local_78 = (undefined ***)0x0;
                if (pwVar18 != (wchar_t *)0x0) goto LAB_1414f3078;
                local_70 = (undefined ***)0x0;
                local_68 = 0;
              }
              (**(code **)(*plVar4 + 200))(plVar4,local_70);
              if (local_78 != (undefined ***)0x0) {
                FUN_1400020a8();
              }
              lVar13 = lVar13 + 0x10;
            } while (lVar14 * 0x10 != lVar13);
          }
          FUN_1489df1f0(&local_148);
          goto LAB_1414f2da8;
        }
        FUN_1489df1f0(&local_148);
      }
      *(undefined1 *)(local_158 + 0x70) = 0;
      *(undefined4 *)(local_158 + 0x74) = 2;
      iVar3 = *(int *)(local_158 + 0x38);
      if ((longlong)iVar3 != 0) {
        lVar14 = *(longlong *)(local_158 + 0x30);
        lVar15 = local_158 + 0x50;
        local_150 = local_158 + 0x40;
        lVar13 = 0;
        do {
          FUN_1410f2562(&local_148);
          iVar16 = *(int *)(lVar14 + 0x18 + lVar13);
          iVar2 = iVar16 + -1;
          if (iVar16 == 0) {
            iVar2 = 0;
          }
          FUN_1400020e8(&local_148,*(undefined8 *)(lVar14 + 0x10 + lVar13),iVar2);
          ppuVar10 = local_148;
          local_108 = (undefined **)0x0;
          lVar17 = (longlong)(int)uStack_140;
          uStack_100 = CONCAT44(uStack_100._4_4_,(int)uStack_140);
          if (lVar17 == 0) {
            uStack_100 = (ulonglong)uStack_140 & 0xffffffff;
          }
          else {
            FUN_1446dd670(&local_108,(ulonglong)uStack_140 & 0xffffffff,0);
            memcpy(local_108,ppuVar10,lVar17 * 2);
          }
          uVar12 = *(uint *)(lVar14 + 8 + lVar13);
          if ((int)uVar12 < 2) {
            FUN_140056680(&local_f8,&DAT_14b457594);
          }
          else {
            local_f8 = (undefined **)0x0;
            _Src = *(void **)(lVar14 + lVar13);
            local_f0 = (undefined ***)CONCAT44(local_f0._4_4_,uVar12);
            FUN_1446dd670(&local_f8,(ulonglong)uVar12,0);
            memcpy(local_f8,_Src,(ulonglong)uVar12 * 2);
          }
          iVar16 = (int)local_f0 + -1;
          if ((int)local_f0 == 0) {
            iVar16 = 0;
          }
          FUN_1402980a2(lVar15,local_f8,iVar16);
          if (local_f8 != (undefined **)0x0) {
            FUN_1400020a8();
          }
          local_f0 = (undefined ***)((ulonglong)local_f0 & 0xffffffffffffff00);
          local_f8 = &PTR_FUN_14b456150;
          local_e8 = local_158;
          local_e0 = local_150;
          plVar4 = (longlong *)FUN_14054d1d4();
          ppuVar10 = (undefined **)&DAT_149dfb77a;
          if ((int)uStack_100 != 0) {
            ppuVar10 = local_108;
          }
          (**(code **)(*plVar4 + 0xa0))(plVar4,ppuVar10,&local_f8);
          if (local_108 != (undefined **)0x0) {
            FUN_1400020a8();
          }
          if (local_148 != (undefined **)0x0) {
            FUN_1400020a8();
          }
          lVar13 = lVar13 + 0x20;
        } while ((longlong)iVar3 * 0x20 != lVar13);
      }
      goto LAB_1414f2da8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar9);
}



// FUNCTION 1414f3138 FUN_1414f3138 body=136 status=ok
// SIG undefined FUN_1414f3138(void)

longlong FUN_1414f3138(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    local_48 = *param_1;
    FUN_1446dcdd4(local_40);
    if (DAT_14cb75728 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_144815d88(DAT_14cb75728,local_40);
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    param_1[2] = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414f31c1 FUN_1414f31c1 body=407 status=ok
// SIG undefined FUN_1414f31c1(void)

longlong FUN_1414f31c1(undefined8 *param_1,undefined4 param_2)

{
  ulonglong uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar3 = (undefined2 *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  lVar10 = (longlong)iVar2;
  if (lVar10 != 0) {
    uVar7 = 0;
    do {
      if (*(short *)((longlong)puVar3 + uVar7) == 0x2e) {
        if ((int)(~uVar7 >> 1) != 0) goto LAB_1414f32a1;
        break;
      }
      uVar7 = uVar7 + 2;
    } while (lVar10 * 2 != uVar7);
  }
  uVar7 = lVar10 * 2;
  do {
    if (uVar7 == 0) goto LAB_1414f32a1;
    uVar1 = uVar7 - 2;
    lVar10 = uVar7 - 2;
    uVar7 = uVar1;
  } while (*(short *)((longlong)puVar3 + lVar10) != 0x2f);
  iVar5 = (int)(uVar1 >> 1);
  if (iVar5 != -1) {
    uVar6 = iVar5 + 1;
    if (iVar2 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    uVar9 = iVar2 - 1;
    if (iVar2 == 0) {
      uVar9 = 0;
    }
    if ((int)uVar9 <= (int)uVar6) {
      uVar6 = uVar9;
    }
    uVar7 = (ulonglong)uVar6;
    if ((int)uVar6 < 1) {
      uVar7 = 0;
    }
    FUN_14006620a(&local_38,puVar3 + uVar7,uVar9 - (int)uVar7);
    FUN_140002184(param_1,0x2e);
    iVar2 = local_30 + -1;
    if (local_30 == 0) {
      iVar2 = 0;
    }
    FUN_1400020e8(param_1,local_38,iVar2);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
LAB_1414f32a1:
  lVar10 = FUN_1406d0862();
  if (*(longlong *)(lVar10 + 0x110) == 0) {
    FUN_140aa6c08();
  }
  if (*(int *)(param_1 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_1;
  }
  uVar4 = FUN_1406d0862();
  local_40 = 0;
  local_50 = 0;
  local_48 = 1;
  local_58 = param_2;
  lVar10 = FUN_1412ecd05(uVar4,0,puVar3,0);
  if (lVar10 != 0) {
    uVar6 = *(uint *)(lVar10 + 0xc);
    if ((int)uVar6 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    FUN_1447f71cc(lVar8,0x40000000);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414f335a FUN_1414f335a body=697 status=ok
// SIG undefined FUN_1414f335a(void)

void FUN_1414f335a(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong local_48;
  
  plVar8 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar8,0,0);
  }
  plVar1 = param_1 + 7;
  uVar12 = *(uint *)(param_1 + 9);
  if (uVar12 == 1) {
    if (*plVar8 != 0) {
      FUN_1446efa72(plVar8,0,0);
    }
  }
  else {
    if (uVar12 == 0) {
      return;
    }
    FUN_1446efa72(plVar8,0,uVar12);
    if ((int)uVar12 < 1) goto LAB_1414f33cf;
  }
  uVar2 = 0;
  do {
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = plVar1;
    }
    *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar12 != uVar2);
LAB_1414f33cf:
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    local_48 = 0;
    uVar13 = 1;
    iVar5 = 0;
    iVar10 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = (uint *)(param_1 + 2);
    }
    uVar12 = *puVar7;
    if (uVar12 == 0) {
      iVar10 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar10 = iVar3 + -1;
      }
      local_48 = 0;
      uVar13 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar13 = local_48;
      }
      iVar10 = 0;
      do {
        if (uVar13 == local_48) {
          return;
        }
        iVar10 = iVar10 + 0x20;
        uVar12 = puVar7[local_48 + 1];
        local_48 = local_48 + 1;
      } while (uVar12 == 0);
    }
    else {
      local_48 = 0;
      iVar10 = 0;
    }
    uVar13 = (ulonglong)(-uVar12 & uVar12);
    uVar4 = uVar13 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar5 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar5) {
      iVar5 = iVar3;
    }
  }
  if (iVar5 < iVar3) {
    uVar12 = 0xffffffff;
    do {
      lVar11 = *param_1;
      lVar14 = (longlong)iVar5 * 0x10;
      iVar3 = *(int *)(*(undefined8 **)(lVar11 + lVar14) + 1);
      iVar9 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar9 = 0;
      }
      iVar3 = FUN_1447053be(**(undefined8 **)(lVar11 + lVar14),iVar9 * 2);
      uVar4 = (longlong)iVar3 & (longlong)(int)param_1[9] - 1U;
      iVar3 = (int)uVar4;
      *(int *)(lVar11 + 0xc + lVar14) = iVar3;
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = plVar1;
      }
      *(undefined4 *)(lVar11 + 8 + lVar14) =
           *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar4) * 4);
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = plVar1;
      }
      *(int *)((longlong)plVar8 + ((longlong)iVar3 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
      uVar12 = ~(uint)uVar13 & uVar12;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 2);
      }
      iVar3 = (int)param_1[5];
      iVar5 = (int)local_48;
      lVar11 = (longlong)iVar5;
      uVar2 = puVar7[lVar11] & uVar12;
      if (uVar2 == 0) {
        iVar9 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar9 = iVar3 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar6 = iVar9;
        if (iVar9 < iVar5) {
          iVar6 = iVar5;
        }
        if (iVar9 <= iVar5) {
          return;
        }
        lVar14 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar2 = puVar7[lVar11 + lVar14 + 1];
          if (uVar2 != 0) break;
          lVar14 = lVar14 + 1;
          if (iVar6 - lVar11 == lVar14) {
            return;
          }
        }
        local_48 = (ulonglong)(iVar5 + (int)lVar14 + 1);
        uVar12 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar2 & uVar2);
      uVar4 = uVar13 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar5 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar3);
  }
  return;
}



// FUNCTION 1414f3614 FUN_1414f3614 body=96 status=ok
// SIG undefined FUN_1414f3614(void)

void FUN_1414f3614(longlong *param_1)

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



// FUNCTION 1414f3674 FUN_1414f3674 body=1 status=ok
// SIG undefined FUN_1414f3674(void)

void FUN_1414f3674(void)

{
  return;
}



// FUNCTION 1414f3676 FUN_1414f3676 body=432 status=ok
// SIG undefined FUN_1414f3676(void)

void FUN_1414f3676(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)(param_1 + -0x10);
  if (lVar3 != 0) {
    if (DAT_14cae9568 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1417de738;
      local_30 = &LAB_145893408;
      local_38 = &LAB_1458cbbd2;
      local_48 = &LAB_147ba21f1;
      local_50 = &LAB_1463e9233;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x1000000c;
      local_70 = 8;
      local_78 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
    }
    if ((*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) == DAT_14cae9568 + 0x30)) {
      if (*(longlong *)(param_1 + 0x160) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
      }
      plVar1 = (longlong *)FUN_14032f648();
      lVar2 = plVar1[0x22];
      if (lVar2 == 0) {
        (**(code **)(*plVar1 + 1000))(plVar1);
        lVar2 = plVar1[0x22];
      }
      if ((*(byte *)(lVar2 + 0xe0) & 2) != 0) {
        lVar3 = FUN_1438c0c2c(lVar3);
        if ((lVar3 == 0) || (DAT_14c950c29 == '\0')) {
          *(longlong *)(param_1 + 0x160) = lVar3;
          if (lVar3 == 0) goto LAB_1414f36c6;
        }
        else {
          FUN_1456cec3c(lVar3);
          *(longlong *)(param_1 + 0x160) = lVar3;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
      }
    }
  }
LAB_1414f36c6:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414f3852 FUN_1414f3852 body=323 status=ok
// SIG undefined FUN_1414f3852(void)

void FUN_1414f3852(longlong *param_1,undefined8 param_2)

{
  size_t sVar1;
  wchar_t *_Str;
  uint uVar2;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [128];
  undefined1 *local_58;
  undefined1 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((int)param_1[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_1;
    local_58 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_50 = (undefined1 *)0x0;
      local_48 = 0;
      goto LAB_1414f392d;
    }
  }
  local_58 = (undefined1 *)0x0;
  sVar1 = wcslen(_Str);
  local_48 = FUN_14475aa65(0,_Str,sVar1 & 0xffffffff);
  uVar2 = local_48 + 1;
  local_50 = (undefined1 *)0x0;
  if (0x80 < uVar2) {
    FUN_1446efa72(&local_58,0,uVar2,1);
    local_50 = local_58;
  }
  if (local_50 == (undefined1 *)0x0) {
    local_50 = local_d8;
  }
  FUN_14475a98a(local_50,uVar2,_Str,(int)sVar1 + 1);
LAB_1414f392d:
  FUN_145b21d84(param_2,local_50,param_1 + 2);
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414f3996 FUN_1414f3996 body=130 status=ok
// SIG undefined FUN_1414f3996(void)

undefined4
FUN_1414f3996(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_38 = *param_2;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  uVar3 = 0;
  if (lVar4 != 0) {
    local_38 = uVar2;
    local_30 = uVar1;
    lVar4 = FUN_145c566d2(param_1,lVar4,param_3);
    uVar3 = *(undefined4 *)(lVar4 + 8);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414f3a1a FUN_1414f3a1a body=164 status=ok
// SIG undefined FUN_1414f3a1a(void)

undefined4
FUN_1414f3a1a(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = (undefined4)param_5[1];
  lVar2 = *param_5;
  local_48 = *param_2;
  lVar1 = FUN_14063edce(&DAT_14cb91658,&local_48);
  uVar3 = 0;
  if (lVar1 != 0) {
    if (lVar2 == 0) {
      uVar4 = 0;
    }
    local_58 = &local_48;
    local_48 = lVar2;
    local_40 = uVar4;
    lVar2 = FUN_145d3fdc2(param_1,lVar1,param_3,param_4);
    uVar3 = *(undefined4 *)(lVar2 + 8);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414f3ac0 FUN_1414f3ac0 body=462 status=ok
// SIG undefined FUN_1414f3ac0(void)

void FUN_1414f3ac0(undefined8 *param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [128];
  undefined1 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((param_4 != 0) && ((longlong)*(int *)(param_1 + 1) != 0)) {
    plVar2 = (longlong *)*param_1;
    lVar5 = (longlong)*(int *)(param_1 + 1) * 0x58;
    do {
      if (*plVar2 == param_4) {
        if (plVar2 != (longlong *)0x0) {
          if (*(longlong *)((longlong)plVar2 + 0x14) == param_2) {
            *(longlong *)((longlong)param_3 + 0xc) = param_4;
            local_50 = (undefined1 *)0x0;
            local_48 = 0x1000000000;
            uVar4 = *(uint *)(param_1 + 1);
            if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(uVar4);
            }
            plVar2 = (longlong *)((longlong)param_3 + 0xc);
            if ((uVar4 < 0x11) || (FUN_140989ea8(local_d0), *plVar2 != 0)) {
              plVar7 = plVar2;
              do {
                uVar1 = local_48;
                puVar3 = local_50;
                if (local_50 == (undefined1 *)0x0) {
                  puVar3 = local_d0;
                }
                lVar5 = (longlong)(int)local_48;
                if (lVar5 != 0) {
                  lVar6 = 0;
                  do {
                    if (*(longlong *)(puVar3 + lVar6) == *param_3) {
                      *plVar2 = 0;
                      goto LAB_1414f3c4e;
                    }
                    lVar6 = lVar6 + 8;
                  } while (lVar5 * 8 - lVar6 != 0);
                }
                uVar4 = (int)local_48 + 1;
                local_48 = CONCAT44(local_48._4_4_,uVar4);
                if (local_48._4_4_ < uVar4) {
                  FUN_1468b3bb8(local_d0,uVar1 & 0xffffffff);
                }
                puVar3 = local_50;
                if (local_50 == (undefined1 *)0x0) {
                  puVar3 = local_d0;
                }
                *(longlong *)(puVar3 + lVar5 * 8) = *param_3;
                if ((longlong)*(int *)(param_1 + 1) != 0) {
                  param_3 = (longlong *)*param_1;
                  lVar5 = (longlong)*(int *)(param_1 + 1) * 0x58;
                  do {
                    if (*param_3 == *plVar7) goto LAB_1414f3bd5;
                    param_3 = param_3 + 0xb;
                    lVar5 = lVar5 + -0x58;
                  } while (lVar5 != 0);
                }
                param_3 = (longlong *)0x0;
LAB_1414f3bd5:
                plVar7 = (longlong *)((longlong)param_3 + 0xc);
              } while (*(longlong *)((longlong)param_3 + 0xc) != 0);
            }
LAB_1414f3c4e:
            if (local_50 != (undefined1 *)0x0) {
              FUN_1400020a8();
            }
          }
          goto LAB_1414f3c5b;
        }
        break;
      }
      plVar2 = plVar2 + 0xb;
      lVar5 = lVar5 + -0x58;
    } while (lVar5 != 0);
  }
  *(undefined8 *)((longlong)param_3 + 0xc) = 0;
LAB_1414f3c5b:
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414f3c90 FUN_1414f3c90 body=141 status=ok
// SIG undefined FUN_1414f3c90(void)

void FUN_1414f3c90(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if (param_2 != 0) {
    *(int *)(param_1 + 0x170) = param_2;
    *(undefined1 *)(param_1 + 0x18) = 1;
    return;
  }
  puVar4 = (undefined8 *)((longlong)*(int *)(param_1 + 0x48) * 0x10 + *(longlong *)(param_1 + 0x38))
  ;
  iVar1 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar1 + 1U) {
    FUN_1413eac7e((longlong *)(param_1 + 0x188),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x188);
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 0x10) = *puVar4;
  lVar3 = puVar4[1];
  *(longlong *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  FUN_146585e88(param_1);
  return;
}



// FUNCTION 1414f3d1e FUN_1414f3d1e body=155 status=ok
// SIG undefined FUN_1414f3d1e(void)

undefined8 * FUN_1414f3d1e(undefined8 *param_1)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = &PTR_FUN_14b942350;
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined4 *)((longlong)param_1 + 0x24) = 3;
  *(undefined4 *)(param_1 + 5) = 3;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  param_1[6] = 0xb;
  local_20 = "VaultCard01";
  local_18 = 0xb;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  param_1[7] = (ulonglong)uVar1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414f3dba FUN_1414f3dba body=248 status=ok
// SIG undefined FUN_1414f3dba(void)

void FUN_1414f3dba(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  code *local_80;
  undefined8 *local_78;
  undefined1 local_70 [16];
  longlong local_60;
  int local_58;
  undefined1 local_50 [16];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1401e7e86(local_50);
  FUN_1401e7e86(local_70,param_3);
  local_90 = *param_4;
  local_78 = &local_90;
  local_88 = param_4[1];
  local_80 = FUN_143efface;
  FUN_14482e566(local_70);
  local_98 = local_58 + local_60;
  local_a0 = local_60;
  FUN_14482e566(local_50);
  local_a8 = local_38 + local_40;
  local_b0 = local_40;
  bifrost::telemetry::raiseEvent(*(undefined8 *)(param_1 + 0x2b8),&local_b0,&local_a0,&local_80);
  FUN_1401e7e48(local_70);
  FUN_1401e7e48(local_50);
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414f3eb3 thunk_FUN_14657de13 body=5 status=ok
// SIG undefined thunk_FUN_14657de13(void)

AccountId thunk_FUN_14657de13(undefined8 param_1)

{
  AccountId AVar1;
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [16];
  longlong lStack_38;
  int iStack_30;
  longlong lStack_28;
  longlong lStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1401e7e86(auStack_48,param_1);
  FUN_14482e566(auStack_48);
  lStack_20 = iStack_30 + lStack_38;
  lStack_28 = lStack_38;
  AVar1 = bifrost::users::findCachedByShiftId();
  FUN_1401e7e48(auStack_48);
  if ((uStack_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return AVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414f3eb8 FUN_1414f3eb8 body=239 status=ok
// SIG undefined FUN_1414f3eb8(void)

undefined8 *
FUN_1414f3eb8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

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
  iVar1 = *(int *)(param_3 + 1);
  pvVar2 = (void *)*param_3;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_4 + 1);
  pvVar2 = (void *)*param_4;
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 1414f3fa8 FUN_1414f3fa8 body=264 status=ok
// SIG undefined FUN_1414f3fa8(void)

void FUN_1414f3fa8(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140619b9c(param_1 + 0x82,&local_50);
  FUN_1402226aa(param_1 + 0x82);
  lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  lVar2 = local_50;
  if ((longlong)local_48 != 0) {
    lVar6 = 0;
    do {
      uVar1 = *(undefined4 *)(lVar2 + lVar6);
      iVar7 = 0;
      if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x1f0) != 0)) {
        lVar5 = FUN_141028a6c();
        iVar7 = 0;
        if (lVar5 != 0) {
          lVar5 = FUN_140d75dd6(lVar5,uVar1);
          iVar7 = 0;
          if (lVar5 != 0) {
            iVar7 = *(int *)(lVar5 + 0x14);
          }
        }
      }
      iVar3 = FUN_1458ff3f0(param_1,uVar1);
      if (iVar7 != iVar3) {
        (**(code **)(*param_1 + 0x370))(param_1,uVar1,iVar7,0);
      }
      lVar6 = lVar6 + 4;
    } while ((longlong)local_48 * 4 != lVar6);
  }
  if (local_50 != 0) {
    FUN_1400020a8(local_50);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414f40b2 FUN_1414f40b2 body=525 status=ok
// SIG undefined FUN_1414f40b2(void)

void FUN_1414f40b2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x180))();
  if ((lVar2 == 0) || (*(longlong *)(lVar2 + 0x1f0) == 0)) goto LAB_1414f40ea;
  plVar3 = (longlong *)FUN_1459a1b72();
  if (plVar3 == (longlong *)0x0) goto LAB_1414f40ea;
  lVar2 = (**(code **)(*plVar3 + 0x2b8))(plVar3);
  if (lVar2 == 0) goto LAB_1414f40ea;
  local_38 = (undefined8 *)&LAB_148a7c7b2;
  local_30 = 0;
  FUN_146580916(lVar2 + 0x60,param_1,&local_38);
  local_38 = (undefined8 *)&LAB_148a7c7c0;
  local_30 = 0;
  FUN_146580abe(lVar2 + 0x90,param_1,&local_38);
  local_38 = (undefined8 *)&LAB_148a7c7ce;
  local_30 = 0;
  FUN_146580c66(lVar2 + 0x70,param_1,&local_38);
  local_38 = (undefined8 *)&LAB_148a7c7dc;
  local_30 = 0;
  FUN_146580e0e(lVar2 + 0x80,param_1,&local_38);
  local_38 = (undefined8 *)&LAB_148a7c7ea;
  local_30 = 0;
  FUN_146580fb6(lVar2 + 0xa0,param_1,&local_38);
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  local_30 = 2;
  *local_38 = &PTR_LAB_14b4e8e10;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_38[2] = lVar4;
  *local_38 = &PTR_FUN_14b4eb1c0;
  local_38[3] = param_1;
  FUN_146031a2c(lVar2 + 0x18,&local_40,&local_38);
  if (local_30 == 0) {
LAB_1414f428a:
    if (local_38 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
    goto LAB_1414f428a;
  }
  *(undefined8 *)(param_1 + 0x88) = local_40;
LAB_1414f40ea:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414f42c0 FUN_1414f42c0 body=226 status=ok
// SIG undefined FUN_1414f42c0(void)

longlong * FUN_1414f42c0(longlong *param_1)

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
  pcVar13 = FUN_1462bfb3e;
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



// FUNCTION 1414f43a4 FUN_1414f43a4 body=583 status=ok
// SIG undefined FUN_1414f43a4(void)

void FUN_1414f43a4(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  undefined1 auStack_98 [32];
  int local_78;
  int local_74;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_78 = param_2;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar9 = 1;
    local_58._4_4_ = 0;
    iVar13 = 0;
    uVar10 = 0xffffffff;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar9 = local_68 >> 0x20;
    iVar13 = (int)local_68;
    uVar10 = (uint)local_58;
  }
  plVar4 = local_60;
  iVar6 = local_58._4_4_;
  iVar12 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar8 = *param_1;
      lVar11 = lVar8 + (longlong)iVar6 * 0x1d8;
      local_74 = iVar12;
      FUN_14494dff0(lVar11 + 0xa0);
      if (*(longlong *)(lVar11 + 0x68) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar8 + (longlong)iVar6 * 0x1d8 + 0x28) != 0) {
        FUN_1400020a8();
      }
      uVar10 = uVar10 & ~(uint)uVar9;
      plVar7 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar7 = plVar4;
      }
      iVar2 = (int)plVar4[3];
      lVar11 = (longlong)iVar13;
      uVar5 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar10;
      iVar12 = local_74;
      if (uVar5 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar3 = iVar6;
        if (iVar6 < iVar13) {
          iVar3 = iVar13;
        }
        if (iVar6 <= iVar13) break;
        lVar8 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar8 * 4 + lVar11 * 4 + 4);
          if (uVar5 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar3 - lVar11 == lVar8) goto LAB_1414f4558;
        }
        iVar13 = iVar13 + (int)lVar8 + 1;
        uVar10 = 0xffffffff;
      }
      uVar9 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar9 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar12 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_1414f4558:
  iVar13 = local_78;
  if (local_78 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_78);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != local_78) {
    FUN_145c2c752(param_1,local_78);
  }
  param_1[6] = 0xffffffff;
  uVar10 = iVar13 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar10) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar5 = 0x80;
    if (0x80 < (int)uVar10) {
      uVar5 = uVar10;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414f45ee FUN_1414f45ee body=299 status=ok
// SIG undefined FUN_1414f45ee(void)

void FUN_1414f45ee(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  lVar2 = DAT_14c9a3328;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = (ulonglong)(int)DAT_14c9a3330;
  if (uVar3 != 0) {
    lVar5 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar5) != 0) {
        *(undefined4 *)(*(longlong *)(lVar2 + lVar5) + 0x108) = 0xffffffff;
      }
      lVar5 = lVar5 + 0x18;
    } while (uVar3 * 0x18 != lVar5);
  }
  iVar4 = (int)param_1[1];
  if (0 < iVar4) {
    lVar5 = 0;
    do {
      if ((int)uVar3 == 0) {
        uVar3 = 0;
      }
      else {
        plVar7 = (longlong *)(lVar5 * 0x20 + *param_1);
        lVar6 = 0;
        do {
          lVar1 = *(longlong *)(lVar2 + lVar6);
          if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x3c) == *plVar7)) {
            FUN_1408d9e0e(lVar1 + 0x68,0);
            local_48 = plVar7[1];
            local_40 = (undefined4)plVar7[2];
            FUN_140ce09a0(lVar1 + 0x68,&local_48);
            *(int *)(lVar1 + 0x108) = (int)lVar5;
            iVar4 = (int)param_1[1];
            uVar3 = (ulonglong)DAT_14c9a3330;
            lVar2 = DAT_14c9a3328;
            break;
          }
          lVar6 = lVar6 + 0x18;
        } while ((longlong)(int)uVar3 * 0x18 != lVar6);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar4);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414f471a FUN_1414f471a body=163 status=ok
// SIG undefined FUN_1414f471a(void)

undefined8 FUN_1414f471a(longlong param_1,longlong param_2)

{
  uint uVar1;
  code *pcVar2;
  longlong lVar3;
  uint *puVar4;
  undefined8 uVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 auStack_68 [40];
  uint uStack_40;
  int iStack_3c;
  ushort uStack_28;
  byte bStack_20;
  ulonglong uStack_18;
  
  if (*(int *)(param_1 + 0xb8) != *(int *)(param_1 + 0xe4)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar7 = (uint)param_2 & 0xffff;
    lVar3 = param_1 + 0xe8;
    if (*(longlong *)(param_1 + 0xf0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xf0);
    }
    iVar8 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0xf8) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar7) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar8 != -1) {
      do {
        lVar10 = (longlong)iVar8 * 0x38;
        lVar3 = *(longlong *)(param_1 + 0xb0) + lVar10;
        if (*(longlong *)(*(longlong *)(param_1 + 0xb0) + lVar10) == param_2) {
          if (lVar3 == 0) {
            return 0;
          }
          puVar4 = (uint *)(lVar3 + 8);
          if (puVar4 == (uint *)0x0) {
            return 0;
          }
          uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
          if (*(char *)(lVar3 + 0x28) == '\a') {
            if (*(int *)(lVar3 + 0xc) != 0) {
              uVar1 = *puVar4;
              uVar5 = 0;
              if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14030a43e;
              puVar9 = (undefined8 *)
                       ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
              if ((puVar9 != (undefined8 *)0x0) &&
                 ((*(int *)(puVar9 + 2) == *(int *)(lVar3 + 0xc) &&
                  ((*(uint *)(puVar9 + 1) & 0x10200000) == 0)))) {
                uVar5 = *puVar9;
                goto LAB_14030a43e;
              }
            }
            uVar5 = 0;
            goto LAB_14030a43e;
          }
          puVar6 = &uStack_40;
          FUN_1400b56fe(puVar6,puVar4,CONCAT71((int7)((ulonglong)lVar10 >> 8),7));
          if ((bStack_20 == 0) || (iStack_3c == 0)) {
LAB_14030a45f:
            uVar5 = 0;
          }
          else {
            uVar5 = 0;
            if ((-1 < (int)uStack_40) && ((int)uStack_40 < DAT_14c9647dc)) {
              puVar9 = (undefined8 *)
                       ((ulonglong)((uStack_40 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uStack_40 >> 0x10) * 8));
              if (((puVar9 == (undefined8 *)0x0) || (*(int *)(puVar9 + 2) != iStack_3c)) ||
                 ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)) goto LAB_14030a45f;
              uVar5 = *puVar9;
            }
          }
          pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bStack_20 * 0x120));
          if (pcVar2 != (code *)0x0) {
            if (0x18 < uStack_28) {
              puVar6 = (uint *)CONCAT44(iStack_3c,uStack_40);
            }
            (*pcVar2)(puVar6);
          }
          if (0x18 < uStack_28) {
            FUN_1400020a8(CONCAT44(iStack_3c,uStack_40));
          }
LAB_14030a43e:
          if ((uStack_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
            return uVar5;
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        iVar8 = *(int *)(lVar3 + 0x30);
      } while (iVar8 != -1);
    }
  }
  return 0;
}



// FUNCTION 1414f47be FUN_1414f47be body=532 status=ok
// SIG undefined FUN_1414f47be(void)

void FUN_1414f47be(longlong param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  float fVar8;
  
  plVar6 = *(longlong **)(param_1 + 0x9b0);
  if ((plVar6 != (longlong *)0x0) && (*(int *)(param_1 + 0x9ac) != 0)) {
    puVar1 = (uint *)(param_1 + 0x9a8);
    uVar3 = *puVar1;
    if (((-1 < (int)uVar3) &&
        ((((int)uVar3 < DAT_14c9647dc &&
          (lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar7 != 0)) &&
         (*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0x9ac))))) &&
       ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)) {
      if (*(code **)(*plVar6 + 0x10) == (code *)&LAB_1447a1f2e) {
        plVar6 = plVar6 + 0xd9;
      }
      else {
        plVar6 = (longlong *)(**(code **)(*plVar6 + 0x10))();
      }
      cVar4 = FUN_14486eb0e(plVar6,puVar1);
      if (((cVar4 != '\0') && (plVar6 = *(longlong **)(param_1 + 0x9f0), plVar6 != (longlong *)0x0))
         && (*(int *)(param_1 + 0x9ec) != 0)) {
        puVar2 = (uint *)(param_1 + 0x9e8);
        uVar3 = *puVar2;
        if (((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) &&
           ((lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar7 != 0 &&
            ((*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0x9ec) &&
             ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))))) {
          if (*(code **)(*plVar6 + 0x10) == (code *)&LAB_1447a1f2e) {
            plVar6 = plVar6 + 0xd9;
          }
          else {
            plVar6 = (longlong *)(**(code **)(*plVar6 + 0x10))();
          }
          cVar4 = FUN_14486eb0e(plVar6,puVar2);
          if (cVar4 != '\0') {
            lVar7 = FUN_14008e0ae(puVar1);
            fVar8 = *(float *)(lVar7 + 0x30) - *(float *)(lVar7 + 0x24);
            if (((fVar8 != 0.0) || (NAN(fVar8))) &&
               (1.0 <= (*(float *)(lVar7 + 200) - *(float *)(lVar7 + 0x24)) / fVar8)) {
              return;
            }
            uVar5 = FUN_14008e0ae(puVar2);
            FUN_1409d461e(uVar5,0,1);
            uVar5 = FUN_14008e0ae(puVar1);
            FUN_1414f49d2(uVar5,0x3f800000,0,1);
            if (*(char *)(param_1 + 0x178) == '\x03') {
              if (*(longlong *)(param_1 + 0xac8) != 0) {
                FUN_1447f69b6(*(longlong *)(param_1 + 0xac8) + 0x5068);
              }
              FUN_1447cd2ec(param_1 + 0x940,0);
              return;
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1414f49d2 FUN_1414f49d2 body=324 status=ok
// SIG undefined FUN_1414f49d2(void)

void FUN_1414f49d2(longlong param_1,float param_2,char param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined8 in_RDX;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_1 + 0x48);
  if (0 < iVar1) {
    if (param_3 == '\0') {
      fVar5 = (float)iVar1;
      fVar6 = (*(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x24)) / fVar5;
      if ((*(longlong *)(param_1 + 0x18) != 0) &&
         (*(char *)(*(longlong *)(param_1 + 0x18) + 0x18) == '\x01')) {
        roundps(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6),3);
        fVar5 = fVar6;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(*(undefined4 *)(param_1 + 200),in_RDX,fVar5);
    }
    iVar3 = (int)ROUND(param_2 + param_2 + -0.5) >> 1;
    if (0 < iVar3) {
      fVar5 = (*(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x24)) / (float)iVar1;
      if ((*(longlong *)(param_1 + 0x18) != 0) &&
         (*(char *)(*(longlong *)(param_1 + 0x18) + 0x18) == '\x01')) {
        auVar4 = roundps(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5),3);
        fVar5 = auVar4._0_4_;
      }
      fVar5 = (*(float *)(param_1 + 200) - *(float *)(param_1 + 0x24)) / fVar5;
      iVar3 = ((int)ROUND(fVar5 + fVar5 + -0.5) >> 1) + iVar3;
      if (iVar1 <= iVar3) {
        iVar3 = iVar1;
      }
      cVar2 = FUN_141022e4c(param_1,iVar3 + -1,local_34,local_38);
      if (cVar2 != '\0') {
        FUN_1409d461e(param_1);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414f4b30 FUN_1414f4b30 body=138 status=ok
// SIG undefined FUN_1414f4b30(void)

void FUN_1414f4b30(longlong param_1)

{
  if (*(int *)(param_1 + 0x120) != 0) {
    FUN_142e5700d(param_1 + 0x118,0x7fffffffffffffff);
    FUN_14473400f(*(undefined8 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x120));
    *(undefined4 *)(param_1 + 0x120) = 0;
    if (*(int *)(param_1 + 0x124) != 0) {
      FUN_14726f4b6(param_1 + 0x118,0);
    }
  }
  *(undefined4 *)(param_1 + 0x110) = 0;
  if (*(int *)(param_1 + 0x114) != 0) {
    FUN_145c2d186(param_1 + 8,0);
  }
  *(byte *)(param_1 + 0x1a1) = *(byte *)(param_1 + 0x1a1) & 0xfe;
  return;
}



// FUNCTION 1414f4bba FUN_1414f4bba body=644 status=ok
// SIG undefined FUN_1414f4bba(void)

void FUN_1414f4bba(longlong *param_1,longlong *param_2,undefined1 *param_3)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  ulonglong *puVar4;
  int iVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  undefined8 unaff_RBP;
  undefined7 uVar10;
  undefined1 auStack_88 [39];
  byte local_61;
  undefined2 *local_60;
  undefined2 *local_58;
  longlong *plStack_50;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_3 = 0;
  if ((*(byte *)(param_2 + 5) & 4) == 0) {
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      local_58 = (undefined2 *)0x0;
      plStack_50 = (longlong *)0x0;
      (**(code **)(*param_1 + 8))(param_1,&local_58);
      plVar7 = plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        plVar8 = plStack_50 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plStack_50)(plStack_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      local_61 = 0;
      puVar4 = (ulonglong *)param_2[1];
      pbVar2 = (byte *)*puVar4 + 1;
      if ((byte *)puVar4[1] < pbVar2) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_61,1);
      }
      else {
        local_61 = *(byte *)*puVar4;
        *puVar4 = (ulonglong)pbVar2;
      }
      if ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) {
        uVar10 = (undefined7)((ulonglong)unaff_RBP >> 8);
        if ((local_61 & 1) == 0) {
          if (local_61 < 8) {
            plVar7 = (longlong *)FUN_140489acc();
            plVar8 = (longlong *)FUN_140489acc();
            (**(code **)(*plVar8 + 0x2c8))(plVar8,&local_40);
            uVar6 = (**(code **)(*plVar7 + 0x2d8))(plVar7,local_40);
          }
          else {
            uVar6 = (undefined4)CONCAT71(uVar10,local_61 >> 3);
          }
          if ((char)uVar6 == '\x1f') {
            local_58 = (undefined2 *)0x0;
            plStack_50 = (longlong *)0x0;
            FUN_14021219d(param_2,&local_58);
            puVar9 = local_58;
            if ((int)plStack_50 == 0) {
              puVar9 = &DAT_149dfb77a;
            }
            FUN_1446f470e(&local_60,puVar9,1);
            bVar3 = *(byte *)((longlong)param_2 + 0x29);
            if (local_58 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            puVar9 = local_60;
            if (local_60 == (undefined2 *)0x0 || (bVar3 & 2) != 0) goto LAB_1414f4c85;
          }
          else {
            plVar7 = (longlong *)FUN_140489acc();
            (**(code **)(*plVar7 + 0x2e0))(plVar7,&local_58,uVar6);
            puVar9 = local_58;
            if ((char)uVar6 == '\0') goto LAB_1414f4c85;
          }
          local_58 = (undefined2 *)0x0;
          plStack_50 = (longlong *)0x0;
          FUN_14021219d(param_2);
          if (puVar9 != (undefined2 *)0x0 && (*(byte *)((longlong)param_2 + 0x29) & 2) == 0) {
            FUN_1463edf88(param_1,puVar9,&local_58);
            *param_3 = 1 < (int)plStack_50;
          }
          if (local_58 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
        else if ((local_61 & 2) == 0) {
          if ((local_61 & 0xf8) == 0xf0) {
            FUN_147be6a70(param_1,param_2);
          }
          else {
            FUN_1435ab074(param_1,param_2,CONCAT71(uVar10,local_61) & 0xffffffff,param_3);
          }
        }
        else {
          *param_3 = 1;
        }
      }
    }
  }
  else {
    iVar5 = (int)param_1[5];
    if (iVar5 == 0) {
      FUN_1461ef85c(param_1);
      iVar5 = (int)param_1[5];
    }
    (**(code **)(*param_2 + 0x170))(param_2,param_1[4],(longlong)iVar5);
    *param_3 = 0 < (int)param_1[5];
  }
LAB_1414f4c85:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414f4e40 FUN_1414f4e40 body=295 status=ok
// SIG undefined FUN_1414f4e40(void)

void FUN_1414f4e40(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b821ac0;
  param_1[6] = &PTR_FUN_14b821d80;
  param_1[7] = &PTR_LAB_14b821e10;
  if (*(char *)(param_1 + 0x52) == '\x01') {
    *(undefined1 *)(param_1 + 0x52) = 0;
  }
  FUN_1418d0b78(param_1[0x42],*(undefined4 *)(param_1 + 0x43));
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x3a) = 0;
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  FUN_145caf05a(param_1 + 0x31);
  plVar3 = (longlong *)param_1[0x2a];
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
  plVar3 = param_1 + 0x22;
  if (*(int *)(param_1 + 0x23) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_1414f4f49;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x23) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_1414f4f49:
  FUN_140af926c(param_1 + 7);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1414f4f68 FUN_1414f4f68 body=26 status=ok
// SIG undefined FUN_1414f4f68(void)

void FUN_1414f4f68(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = puVar1[1];
    *param_2 = *puVar1;
    param_2[1] = uVar2;
    return;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



// FUNCTION 1414f4f82 FUN_1414f4f82 body=235 status=ok
// SIG undefined FUN_1414f4f82(void)

void FUN_1414f4f82(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = DAT_14ca09628;
  uVar2 = 0;
  do {
    uVar4 = uVar2;
    if (DAT_14ca09628 == uVar4) goto LAB_1414f4fb1;
    uVar2 = uVar4 + 1;
  } while (SBORROW4(0,*(int *)(DAT_14ca09630 + (longlong)(int)uVar4 * 4)));
  if (DAT_14ca09628 + 1 != uVar4 + 1) {
    do {
      FUN_1446fbe14((longlong)(int)uVar4 * 0xa8 + DAT_14ca09620);
      uVar2 = uVar4 + 1;
      if (uVar4 + 1 < DAT_14ca09628) {
        uVar2 = DAT_14ca09628;
      }
      do {
        uVar3 = uVar2;
        if (uVar2 - 1 == uVar4) break;
        uVar4 = uVar4 + 1;
        uVar3 = uVar4;
      } while (SBORROW4(0,*(int *)(DAT_14ca09630 + (longlong)(int)uVar4 * 4)));
      uVar4 = uVar3;
    } while (uVar4 != uVar1);
  }
LAB_1414f4fb1:
  DAT_14ca09628 = 0;
  FUN_145c2e9cd(DAT_14ca09620,0);
  DAT_14ca09628 = 0;
  if (DAT_14ca0962c != 0) {
    FUN_145c2e9f8();
  }
  FUN_14473de44(&DAT_14ca09640);
  DAT_14ca09638 = 0;
  if (DAT_14ca0963c == 0) {
    return;
  }
  FUN_1446fb5ec(&DAT_14ca09630,0);
  return;
}



// FUNCTION 1414f506e FUN_1414f506e body=384 status=ok
// SIG undefined FUN_1414f506e(void)

void FUN_1414f506e(longlong param_1,longlong param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  
  if (param_2 == 0) {
    return;
  }
  uVar8 = *(uint *)(param_2 + 0x118);
  if (*(int *)(param_1 + 0x94) == 0) {
LAB_1414f51e3:
    uVar5 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x90);
    uVar5 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(int *)(puVar6 + 2) != *(int *)(param_1 + 0x94) ||
          ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_1414f51e3;
      uVar5 = *puVar6;
    }
  }
  uVar3 = FUN_1415e9ee6(param_2,uVar5,param_1);
  if (uVar8 == uVar3) {
    return;
  }
  if (uVar3 < uVar8) {
    uVar7 = 0x10000;
    if (uVar3 - 1 < 0xb) {
      uVar7 = *(undefined4 *)(&DAT_14b4107d4 + (ulonglong)(uVar3 - 1) * 4);
    }
    FUN_141323fc0(param_1,param_2,uVar7);
    return;
  }
  if (*(int *)(param_1 + 0x94) != 0) {
    uVar1 = *(uint *)(param_1 + 0x90);
    bVar2 = 0;
    if (((int)uVar1 < 0) || (bVar2 = 0, DAT_14c9647dc <= (int)uVar1)) goto LAB_1414f51a1;
    puVar6 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar6 != (undefined8 *)0x0) &&
       ((*(int *)(puVar6 + 2) == *(int *)(param_1 + 0x94) &&
        ((*(uint *)(puVar6 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(puVar6 + 1) & 0x10200000) == 0) {
        plVar4 = (longlong *)*puVar6;
      }
      else {
        plVar4 = (longlong *)0x0;
      }
      bVar2 = (**(code **)(*plVar4 + 0x4a8))();
      bVar2 = bVar2 ^ 1;
      goto LAB_1414f51a1;
    }
  }
  bVar2 = 0;
LAB_1414f51a1:
  do {
    if ((bVar2 & uVar8 - 3 < 5) == 0) {
      uVar7 = 0x10000;
      if (uVar8 < 0xb) {
        uVar7 = *(undefined4 *)(&DAT_14b4107d4 + (ulonglong)uVar8 * 4);
      }
      FUN_141323fc0(param_1,param_2,uVar7);
    }
    uVar8 = uVar8 + 1;
  } while (uVar3 != uVar8);
  return;
}



// FUNCTION 1414f51ee FUN_1414f51ee body=258 status=ok
// SIG undefined FUN_1414f51ee(void)

void FUN_1414f51ee(longlong *param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((param_2 == 0) || ((*(byte *)(param_2 + 0x65) & 2) != 0)) ||
     ((*(uint *)(param_2 + 8) >> 0x1e & 1) != 0)) goto LAB_1414f521d;
  FUN_140056680(local_38,&DAT_149dfb77a);
  lVar3 = FUN_14611d89c(param_1,param_2,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (lVar3 == 0) {
    cVar2 = FUN_14079e1ea((uint *)(param_2 + 0x3a0),0);
    lVar3 = 0;
    if (cVar2 == '\0') {
      if (*(int *)(param_2 + 0x3a4) == 0) {
LAB_1414f52ed:
        lVar3 = 0;
      }
      else {
        uVar1 = *(uint *)(param_2 + 0x3a0);
        lVar3 = 0;
        if ((-1 < (int)uVar1) && (lVar3 = 0, (int)uVar1 < DAT_14c9647dc)) {
          plVar4 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((plVar4 == (longlong *)0x0) ||
             (((int)plVar4[2] != *(int *)(param_2 + 0x3a4) ||
              ((*(uint *)(plVar4 + 1) & 0x10200000) != 0)))) goto LAB_1414f52ed;
          lVar3 = *plVar4;
        }
      }
    }
  }
  (**(code **)(*param_1 + 0x7a8))(param_1,param_2,lVar3);
LAB_1414f521d:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414f52f2 FUN_1414f52f2 body=9 status=ok
// SIG undefined FUN_1414f52f2(void)

undefined4 FUN_1414f52f2(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x2d4);
}



// FUNCTION 1414f52fc FUN_1414f52fc body=9 status=ok
// SIG undefined FUN_1414f52fc(void)

undefined4 FUN_1414f52fc(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x36c);
}



// FUNCTION 1414f5306 FUN_1414f5306 body=9 status=ok
// SIG undefined FUN_1414f5306(void)

undefined4 FUN_1414f5306(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x378);
}



// FUNCTION 1414f5310 FUN_1414f5310 body=9 status=ok
// SIG undefined FUN_1414f5310(void)

undefined4 FUN_1414f5310(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x374);
}



// FUNCTION 1414f531a FUN_1414f531a body=166 status=ok
// SIG undefined FUN_1414f531a(void)

void FUN_1414f531a(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    lVar2 = FUN_14070cc62();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_1409e8532(lVar1,&DAT_14cb8cea0,param_2);
      lVar2 = *(longlong *)(lVar1 + 0x858);
      if (lVar2 != 0) {
        if ((char)param_2 == '\0') {
          FUN_1409df526(lVar2,&DAT_14cb8cea0);
          FUN_145c300fc(lVar2);
        }
        else {
          FUN_140257a06(lVar2,&DAT_14cb8cea0,0);
        }
      }
    }
  }
  FUN_1407ca566(lVar1,DAT_14cb8cea0,param_2,0);
  FUN_1407ca500(lVar1,DAT_14cb8cea0,param_2);
  return;
}



// FUNCTION 1414f53c0 FUN_1414f53c0 body=1890 status=ok
// SIG undefined FUN_1414f53c0(void)

ulonglong FUN_1414f53c0(longlong *param_1,double *param_2,undefined8 *param_3,undefined4 param_4,
                       byte param_5)

{
  double _X;
  double dVar1;
  double dVar2;
  double dVar3;
  double _X_00;
  double _X_01;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  double *pdVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong unaff_RBP;
  undefined7 uVar10;
  longlong *plVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  uint local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  wchar_t *local_1a8;
  code *local_1a0;
  undefined1 *local_198;
  code **local_190;
  code *local_188;
  code *local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  double local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  code *local_140;
  double local_138;
  double local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  double local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if (param_1[0x39] != 0) {
    if ((((*(uint *)(param_1 + 1) & 0x10) == 0) && (lVar8 = param_1[4], lVar8 != 0)) &&
       (-1 < (short)*(undefined4 *)(lVar8 + 8))) {
      uVar4 = *(uint *)(lVar8 + 0xc);
      if ((int)uVar4 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      if ((*(uint *)(lVar8 + 8) >> 0x1c & 1) != 0) goto LAB_1414f5924;
      if (DAT_14cae8b20 == 0) {
        local_190 = (code **)&local_c8;
        local_c8 = (code *)&LAB_14355090c;
        local_180 = FUN_14081d0ea;
        local_188 = FUN_14081d0ea;
        local_198 = &LAB_147b8e16d;
        local_1a0 = (code *)&LAB_140810a38;
        local_1a8 = L"Engine";
        local_1b0 = 0x800000000;
        local_1b8 = 0x10000000;
        local_1c0 = 8;
        local_1c8 = CONCAT44(local_1c8._4_4_,0x3f0);
        FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
      }
      lVar8 = DAT_14cae8b20;
      if (DAT_14c951858 == 0) {
        local_190 = (code **)&local_c8;
        local_c8 = FUN_1449e2820;
        local_180 = FUN_14081d0ea;
        local_188 = FUN_14081d0ea;
        local_198 = &LAB_1468c5283;
        local_1a0 = FUN_142809da0;
        local_1a8 = L"Engine";
        local_1b0 = 0x400000000;
        local_1b8 = 0x10000000;
        local_1c0 = 8;
        local_1c8 = CONCAT44(local_1c8._4_4_,0x50);
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar6 = param_1[4];
      if (lVar6 == 0) goto LAB_1414f5924;
      iVar5 = *(int *)(lVar8 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < iVar5) ||
           (lVar9 = lVar6,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar5 * 8) !=
           lVar8 + 0x30)) {
          lVar9 = 0;
        }
      } while ((lVar9 == 0) && (lVar6 = *(longlong *)(lVar6 + 0x20), lVar6 != 0));
      if (lVar9 == 0) goto LAB_1414f5924;
      lVar8 = *(longlong *)(lVar9 + 0xc0);
    }
    else {
LAB_1414f5924:
      lVar8 = 0;
    }
    plVar11 = (longlong *)param_1[0x39];
    if ((((*(char *)((longlong)plVar11 + 0x1fb) != '\0') || (-1 < *(char *)(lVar8 + 0x154))) ||
        (*(longlong *)(lVar8 + 0x30) == 0)) || (*(int *)(*(longlong *)(lVar8 + 0x30) + 0xa8) == 0))
    {
      if ((byte)param_4 != 0) {
        if (plVar11 == (longlong *)0x0) {
          pdVar7 = (double *)&DAT_14c8464e0;
          uVar12 = (undefined4)DAT_14c8464f0;
          uVar13 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
        }
        else {
          pdVar7 = (double *)(plVar11 + 0x4c);
          uVar12 = (undefined4)plVar11[0x4e];
          uVar13 = (undefined4)((ulonglong)plVar11[0x4e] >> 0x20);
        }
        if ((*pdVar7 == *param_2) && (!NAN(*pdVar7) && !NAN(*param_2))) {
          if ((pdVar7[1] == param_2[1]) && (!NAN(pdVar7[1]) && !NAN(param_2[1]))) {
            unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
            if (((double)CONCAT44(uVar13,uVar12) == param_2[2]) &&
               (!NAN((double)CONCAT44(uVar13,uVar12)) && !NAN(param_2[2]))) goto LAB_1414f5646;
          }
        }
      }
      uVar10 = (undefined7)(unaff_RBP >> 8);
      if (plVar11 != (longlong *)0x0) {
        _X_00 = (double)plVar11[0x4c];
        _X_01 = (double)plVar11[0x4d];
        _X = (double)plVar11[0x4e];
        local_b8 = param_2[2];
        local_c8 = (code *)*param_2;
        uStack_c0 = param_2[1];
        if (DAT_14cac6e60 == 0) {
          local_190 = &local_140;
          local_140 = FUN_144a7958c;
          local_180 = FUN_14081d0ea;
          local_188 = FUN_142b47bc4;
          local_198 = &LAB_1478989f1;
          local_1a0 = (code *)&LAB_146391124;
          local_1a8 = L"Engine";
          local_1b0 = 0x10000000000;
          local_1b8 = 0x10000005;
          local_1c0 = 0x10;
          local_1c8 = CONCAT44(local_1c8._4_4_,0x620);
          FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
          plVar11 = (longlong *)param_1[0x39];
          if (plVar11 == (longlong *)0x0) goto LAB_1414f5643;
        }
        if ((((DAT_14cac6e60 != 0) && (lVar6 = plVar11[2], lVar6 != 0)) &&
            (*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
           (*(longlong *)
             (*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) ==
            DAT_14cac6e60 + 0x30)) {
          unaff_RBP = CONCAT71(uVar10,1);
          if ((param_5 == 0) &&
             (((uVar4 = (**(code **)(*plVar11 + 0x570))(plVar11), uVar4 < 6 &&
               ((0x2aU >> (uVar4 & 0x1f) & 1) != 0)) || (iVar5 = FUN_14487fd02(param_1), iVar5 != 3)
              ))) {
            lVar6 = param_1[0x39];
            dVar2 = *(double *)(lVar6 + 0x170) - _X;
            dVar3 = *(double *)(lVar6 + 0x168) - _X_01;
            dVar1 = *(double *)(lVar6 + 0x160) - _X_00;
            local_b8 = local_b8 + dVar2;
            uStack_c0 = uStack_c0 + dVar3;
            local_c8 = (code *)((double)local_c8 + dVar1);
            local_e8 = *(undefined4 *)param_3;
            uStack_e4 = *(undefined4 *)((longlong)param_3 + 4);
            uStack_e0 = *(undefined4 *)(param_3 + 1);
            uStack_dc = *(undefined4 *)((longlong)param_3 + 0xc);
            local_d8 = param_3[2];
            uVar4 = FUN_140d7405c(lVar8,param_1,&local_c8);
            unaff_RBP = (ulonglong)uVar4;
            local_b8 = local_b8 - dVar2;
            uStack_c0 = uStack_c0 - dVar3;
            local_c8 = (code *)((double)local_c8 - dVar1);
          }
          iVar5 = _finite((double)local_c8);
          if (((iVar5 != 0) && (iVar5 = _finite(uStack_c0), iVar5 != 0)) &&
             ((iVar5 = _finite(local_b8), iVar5 != 0 &&
              (((iVar5 = _finite(_X_00), iVar5 != 0 && (iVar5 = _finite(_X_01), iVar5 != 0)) &&
               (iVar5 = _finite(_X), iVar5 != 0)))))) {
            if ((char)unaff_RBP != '\0') {
              if ((byte)(param_5 | (byte)param_4) == 1) {
                local_f8 = param_3[2];
                local_108 = *param_3;
                uStack_100 = param_3[1];
                local_128 = (undefined4)local_c8;
                uStack_124 = local_c8._4_4_;
                uStack_120 = (undefined4)uStack_c0;
                uStack_11c = uStack_c0._4_4_;
                local_118 = local_b8;
                local_1c0 = local_1c0 & 0xffffff00;
                local_1c8 = 0;
                FUN_14084af84(plVar11,&local_128,&local_108,0);
              }
              else {
                local_130 = local_b8 - _X;
                local_138 = uStack_c0 - _X_01;
                local_140 = (code *)((double)local_c8 - _X_00);
                local_1b8 = CONCAT31(local_1b8._1_3_,1);
                local_1c0 = 0;
                local_1c8 = 0;
                uVar4 = FUN_1407fd932(plVar11,&local_140,param_3,0);
                unaff_RBP = (ulonglong)uVar4;
              }
              if ((char)unaff_RBP != '\0') {
                (**(code **)(*param_1 + 0x4d8))(param_1,param_4);
              }
            }
            goto LAB_1414f5646;
          }
          goto LAB_1414f5544;
        }
        local_148 = param_3[2];
        local_158 = *param_3;
        uStack_150 = param_3[1];
        local_178 = (undefined4)local_c8;
        uStack_174 = local_c8._4_4_;
        uStack_170 = (undefined4)uStack_c0;
        uStack_16c = uStack_c0._4_4_;
        local_168 = local_b8;
        local_1c0 = CONCAT31(local_1c0._1_3_,1);
        local_1c8 = 0;
        FUN_14084af84(plVar11,&local_178,&local_158,0);
      }
LAB_1414f5643:
      unaff_RBP = CONCAT71(uVar10,1);
      goto LAB_1414f5646;
    }
  }
LAB_1414f5544:
  unaff_RBP = 0;
LAB_1414f5646:
  if ((local_b0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 1414f5b24 FUN_1414f5b24 body=164 status=ok
// SIG undefined FUN_1414f5b24(void)

void FUN_1414f5b24(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Parameters";
  local_38 = 10;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Parameters";
  local_38 = 10;
  FUN_140208c1e(&DAT_14caebea0,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414f5bca FUN_1414f5bca body=164 status=ok
// SIG undefined FUN_1414f5bca(void)

void FUN_1414f5bca(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Texture";
  local_38 = 7;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Texture";
  local_38 = 7;
  FUN_140208c1e(&DAT_14caebe88,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414f5c70 FUN_1414f5c70 body=925 status=ok
// SIG undefined FUN_1414f5c70(void)

void FUN_1414f5c70(longlong *param_1)

{
  longlong *plVar1;
  char *pcVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  int local_ac [2];
  int local_a4;
  int local_a0 [2];
  int local_98;
  int local_94 [2];
  int local_8c;
  int local_88 [2];
  int local_80;
  int local_7c [2];
  int local_74;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar4 = local_c0;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_68 = param_1 + 2;
    local_70 = 0x100000000;
    local_60 = 0xffffffff;
    local_58 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_70);
    }
    local_d0 = local_70;
    local_c8 = local_68;
    local_c0 = local_60;
    uVar4 = local_c0;
    local_b8 = local_58;
    local_b4 = uStack_54;
    local_c0._4_4_ = (int)((ulonglong)local_60 >> 0x20);
    local_d8 = param_1;
    if (local_c0._4_4_ < (int)local_68[3]) {
      iVar9 = local_c0._4_4_;
      local_c0 = uVar4;
      do {
        pcVar2 = (char *)(*local_d8 + (longlong)iVar9 * 0x48);
        if (*pcVar2 == '\x01') {
          FUN_1447a97f4(&local_70,pcVar2 + 0x10);
          if (0 < local_70._4_4_) {
            iVar8 = 0;
            do {
              FUN_144a7c8fe(&local_70,local_7c,iVar8,1);
              if ((((((local_7c[0] == DAT_14cb7beb0) && (local_74 == DAT_14cb7beb8)) ||
                    ((FUN_144a7c8fe(&local_70,local_88,iVar8,1), local_88[0] == DAT_14cb7bec8 &&
                     (local_80 == DAT_14cb7bed0)))) ||
                   ((FUN_144a7c8fe(&local_70,local_94,iVar8,1), local_94[0] == DAT_14cb7bee0 &&
                    (local_8c == DAT_14cb7bee8)))) ||
                  ((FUN_144a7c8fe(&local_70,local_a0,iVar8,1), local_a0[0] == DAT_14cb7bef8 &&
                   (local_98 == DAT_14cb7bf00)))) ||
                 ((FUN_144a7c8fe(&local_70,local_ac,iVar8,1), local_ac[0] == DAT_14cb7bf10 &&
                  (local_a4 == DAT_14cb7bf18)))) {
                FUN_1402b5374(&local_70,iVar8,0);
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 < local_70._4_4_);
          }
          iVar8 = (int)local_70;
          if (CONCAT44(uStack_54,local_58) != 0) {
            FUN_1400020a8();
          }
        }
        else {
          iVar8 = *(int *)(pcVar2 + 0x10);
        }
        uVar6 = (longlong)iVar8 & (longlong)(int)param_1[9] - 1U;
        iVar8 = (int)uVar6;
        *(int *)(pcVar2 + 0x44) = iVar8;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(pcVar2 + 0x40) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9;
        local_c0 = CONCAT44(local_c0._4_4_,(uint)local_c0 & ~local_d0._4_4_);
        FUN_1449c0562(&local_d0);
        iVar9 = local_c0._4_4_;
        uVar4 = local_c0;
      } while (local_c0._4_4_ < (int)local_c8[3]);
    }
  }
  local_c0 = uVar4;
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414f600e FUN_1414f600e body=1539 status=ok
// SIG undefined FUN_1414f600e(void)

void FUN_1414f600e(longlong *param_1,undefined1 param_2)

{
  byte bVar1;
  ulonglong uVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined *puVar11;
  longlong *plVar12;
  uint uVar13;
  undefined1 auStack_c8 [32];
  int local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar7 = (longlong *)(**(code **)(*param_1 + 0x5e8))();
  if (plVar7 != (longlong *)0x0) {
    if (DAT_14cbae3d8 == 0) {
      local_70 = &local_50;
      local_50 = FUN_141030f22;
      local_60 = FUN_14081d0ea;
      local_68 = &LAB_1464f5fc4;
      local_78 = &LAB_148c3dd26;
      local_80 = &LAB_1459673ba;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000004;
      local_a0 = 0x10;
      local_a8 = 0x1360;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
    }
    if ((*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(plVar7[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) ==
        DAT_14cbae3d8 + 0x30)) {
      lVar8 = param_1[0x2f];
      if ((char)lVar8 == '\x03') {
        *(undefined1 *)((longlong)param_1 + 0x62f9) = param_2;
        uVar2 = param_1[5];
        if (uVar2 < 0xffffffff00000000) {
          plVar12 = DAT_14c9980d0;
          if (DAT_14c9980d8 == 0) {
            plVar12 = (longlong *)0x0;
          }
          (**(code **)(*plVar12 + 0x58))(plVar12,param_1,uVar2,0x32);
        }
        else {
          uVar13 = (uint)uVar2;
          if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c998088)) {
            puVar11 = &DAT_14c998070;
            if (DAT_14c998080 != (undefined *)0x0) {
              puVar11 = DAT_14c998080;
            }
            if ((*(uint *)(puVar11 + ((uint)(uVar2 >> 3) & 0xffffffc)) >> (uVar13 & 0x1f) & 1) != 0)
            {
              lVar9 = DAT_14c998060 + (ulonglong)(uVar13 & 0x7fffffff) * 0x68;
              lVar10 = *(longlong *)(lVar9 + 0x18);
              if (*(longlong *)(lVar9 + 0x18) == 0) {
                lVar10 = lVar9 + 8;
              }
              *(uint *)(lVar10 + 4) = *(uint *)(lVar10 + 4) | 0x40000;
              *(byte *)(lVar9 + 0x60) = *(byte *)(lVar9 + 0x60) | 1;
            }
          }
        }
        if (*(char *)((longlong)param_1 + 0x62f9) == '\0') {
          bVar1 = *(byte *)((longlong)plVar7 + 0xce4);
          uVar13 = bVar1 - 1;
          bVar3 = FUN_140ae5f1a(uVar13);
          if (((((bVar3 & bVar1 != 0) == 1) && ((int)(uint)bVar1 <= (int)param_1[0xf1e])) &&
              (lVar8 = (ulonglong)uVar13 * 0x48 + param_1[0xf1d], lVar8 != 0)) &&
             ((*(longlong **)(lVar8 + 0x28) != (longlong *)0x0 && *(longlong *)(lVar8 + 0x20) != 0
              && (lVar8 = (**(code **)(**(longlong **)(lVar8 + 0x28) + 8))(), lVar8 != 0)))) {
            if (DAT_14cb939a8 == 0) {
              local_70 = &local_50;
              local_50 = FUN_140940982;
              local_60 = FUN_14081d0ea;
              local_68 = &LAB_146522c26;
              local_78 = &LAB_148a0db91;
              local_80 = &LAB_146572ba7;
              local_88 = L"Engine";
              local_90 = 0;
              local_98 = 0x10000004;
              local_a0 = 8;
              local_a8 = 0xdd8;
              FUN_14081cfa3(L"/Script/GbxWeapon",L"Weapon",&DAT_14cb939a8,FUN_146572b80);
            }
            if (((*(int *)(DAT_14cb939a8 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                  (longlong)*(int *)(DAT_14cb939a8 + 0x38) * 8) == DAT_14cb939a8 + 0x30)) &&
               ((*(longlong *)(lVar8 + 0xd60) == DAT_14cb95120 ||
                ((*(longlong *)(lVar8 + 0xd60) == DAT_14cb94e38 ||
                 (*(longlong *)(lVar8 + 0xba0) != 0)))))) {
LAB_1414f6421:
              if (*(char *)((longlong)param_1 + 0x73eb) == '\x01') {
                lVar10 = FUN_1447210f0(param_1);
                bVar4 = *(double *)(lVar10 + 0x6d0) - (double)*(float *)(param_1 + 0xe90) <
                        0.20000000298023224;
              }
              else {
                bVar4 = false;
              }
              if ((char)param_1[0x2f] == '\x03') {
                local_a8 = CONCAT31(local_a8._1_3_,bVar4);
                FUN_141145750(param_1,lVar8,0,0);
              }
              else {
                local_a8 = CONCAT31(local_a8._1_3_,bVar4);
                local_a0 = 0xffffffff;
                FUN_1465cf5d6(param_1,lVar8,0,0);
              }
              goto LAB_1414f6477;
            }
          }
          iVar5 = FUN_1412993ba();
          if (iVar5 != 0) {
            uVar13 = 0;
            do {
              uVar6 = FUN_1459b76c0(uVar13);
              if ((((-1 < (int)uVar6) && ((int)uVar6 < (int)param_1[0xf1e])) &&
                  (lVar8 = (ulonglong)uVar6 * 0x48 + param_1[0xf1d], lVar8 != 0)) &&
                 ((*(longlong **)(lVar8 + 0x28) != (longlong *)0x0 &&
                   *(longlong *)(lVar8 + 0x20) != 0 &&
                  (lVar8 = (**(code **)(**(longlong **)(lVar8 + 0x28) + 8))(), lVar8 != 0)))) {
                if (DAT_14cb939a8 == 0) {
                  local_50 = FUN_140940982;
                  local_60 = FUN_14081d0ea;
                  local_68 = &LAB_146522c26;
                  local_70 = &local_50;
                  local_78 = &LAB_148a0db91;
                  local_80 = &LAB_146572ba7;
                  local_88 = L"Engine";
                  local_90 = 0;
                  local_98 = 0x10000004;
                  local_a0 = 8;
                  local_a8 = 0xdd8;
                  FUN_14081cfa3(L"/Script/GbxWeapon",L"Weapon",&DAT_14cb939a8,FUN_146572b80);
                }
                if (((*(int *)(DAT_14cb939a8 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)
                     ) && (*(longlong *)
                            (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                            (longlong)*(int *)(DAT_14cb939a8 + 0x38) * 8) == DAT_14cb939a8 + 0x30))
                   && (*(longlong *)(lVar8 + 0xd60) == DAT_14cb95120)) goto LAB_1414f6421;
              }
              uVar13 = uVar13 + 1;
              uVar6 = FUN_1412993ba();
            } while (uVar13 < uVar6);
          }
LAB_1414f6477:
          *(undefined4 *)((longlong)plVar7 + 0xce4) = 0;
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
        }
      }
      else if (*(char *)((longlong)param_1 + 0x62f9) != '\x01') goto LAB_1414f6477;
      lVar10 = plVar7[0x19c];
      iVar5 = FUN_1403ae46b();
      if ((int)lVar10 == iVar5) {
        uVar13 = *(uint *)((longlong)plVar7 + 0xce4) & 0xff;
        if (uVar13 != 0) {
          FUN_141020362(plVar7,uVar13 - 1);
        }
      }
      else {
        *(uint *)((longlong)plVar7 + 0xce4) =
             (int)lVar10 + 1U | *(uint *)((longlong)plVar7 + 0xce4) & 0xffffff00;
        (**(code **)(*plVar7 + 0x578))(plVar7);
      }
      if ((char)lVar8 == '\x03') {
        local_a8._0_1_ = 1;
        FUN_140d78d10(param_1 + 0xc1d,0,0xff,1);
        if ((char)param_1[0x2f] == '\x03') {
          local_a8 = (uint)local_a8._1_3_ << 8;
          FUN_141145750(param_1,0,0,0);
        }
        else {
          local_a0 = 0xffffffff;
          local_a8 = (uint)local_a8._1_3_ << 8;
          FUN_1465cf5d6(param_1,0,0,0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414f6638 FUN_1414f6638 body=116 status=ok
// SIG undefined FUN_1414f6638(void)

void FUN_1414f6638(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = 0x70;
  do {
    *(undefined8 *)(param_1 + -0x48 + lVar2) = 0;
    *(undefined4 *)(param_1 + -0x40 + lVar2) = 0;
    puVar1 = (undefined8 *)(param_1 + -0x68 + lVar2);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(param_1 + -0x3c + lVar2) = 0xffffffff00000080;
    *(undefined4 *)(param_1 + -0x34 + lVar2) = 0;
    *(undefined8 *)(param_1 + -0x28 + lVar2) = 0;
    *(undefined4 *)(param_1 + -0x20 + lVar2) = 0;
    puVar1 = (undefined8 *)(param_1 + -0x18 + lVar2);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(param_1 + -8 + lVar2) = 0x7f7fffff;
    *(undefined2 *)(param_1 + -4 + lVar2) = 0x404;
    *(undefined **)(param_1 + -0x70 + lVar2) = &DAT_14a176f00;
    *(undefined8 *)(param_1 + lVar2) = 0;
    ((undefined8 *)(param_1 + lVar2))[1] = 0;
    lVar2 = lVar2 + 0x80;
  } while (lVar2 != 0x270);
  *(undefined8 *)(param_1 + 0x200) = 0;
  return;
}



// FUNCTION 1414f66ac FUN_1414f66ac body=558 status=ok
// SIG undefined FUN_1414f66ac(void)

void FUN_1414f66ac(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong *plVar18;
  uint uVar19;
  ulonglong uVar20;
  int iVar21;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar14 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar14);
  }
  *(undefined4 *)(param_2 + 0x708) = 0;
  local_78 = param_1;
  if (*(int *)(param_2 + 0x70c) != iVar14) {
    FUN_145c332f6(param_2);
  }
  local_60 = local_78 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  if ((int)local_78[5] == 0) {
    uVar20 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar20 = local_68 >> 0x20;
  }
  plVar18 = local_78;
  iVar14 = (int)local_68;
  uVar19 = (uint)local_58;
  iVar13 = local_58._4_4_;
  iVar21 = local_50;
  local_70 = local_60;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar11 = *plVar18;
      iVar4 = *(int *)(param_2 + 0x708);
      *(uint *)(param_2 + 0x708) = iVar4 + 1U;
      if (*(uint *)(param_2 + 0x70c) < iVar4 + 1U) {
        FUN_147e2891c(param_2,iVar4);
        plVar18 = local_78;
      }
      lVar17 = *(longlong *)(param_2 + 0x700);
      if (*(longlong *)(param_2 + 0x700) == 0) {
        lVar17 = param_2;
      }
      lVar11 = (longlong)iVar13 * 0x58 + lVar11;
      lVar15 = (longlong)iVar4 * 0x38;
      *(undefined8 *)(lVar17 + lVar15) = *(undefined8 *)(lVar11 + 0x18);
      *(undefined8 *)(lVar17 + 8 + lVar15) = *(undefined8 *)(lVar11 + 0x20);
      *(undefined1 *)(lVar17 + 0x14 + lVar15) = *(undefined1 *)(lVar11 + 0x2c);
      *(undefined4 *)(lVar17 + 0x10 + lVar15) = *(undefined4 *)(lVar11 + 0x28);
      uVar6 = *(undefined4 *)(lVar11 + 0x30);
      uVar7 = *(undefined4 *)(lVar11 + 0x34);
      uVar8 = *(undefined4 *)(lVar11 + 0x38);
      uVar9 = *(undefined4 *)(lVar11 + 0x3c);
      uVar10 = *(undefined8 *)(lVar11 + 0x48);
      puVar2 = (undefined8 *)(lVar17 + 0x28 + lVar15);
      *puVar2 = *(undefined8 *)(lVar11 + 0x40);
      puVar2[1] = uVar10;
      puVar3 = (undefined4 *)(lVar17 + 0x18 + lVar15);
      *puVar3 = uVar6;
      puVar3[1] = uVar7;
      puVar3[2] = uVar8;
      puVar3[3] = uVar9;
      uVar19 = uVar19 & ~(uint)uVar20;
      plVar16 = (longlong *)local_70[2];
      if ((longlong *)local_70[2] == (longlong *)0x0) {
        plVar16 = local_70;
      }
      iVar4 = (int)local_70[3];
      lVar11 = (longlong)iVar14;
      uVar12 = *(uint *)((longlong)plVar16 + lVar11 * 4) & uVar19;
      if (uVar12 == 0) {
        iVar13 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar13 = iVar4 + -1;
        }
        iVar13 = iVar13 >> 5;
        iVar5 = iVar13;
        if (iVar13 < iVar14) {
          iVar5 = iVar14;
        }
        if (iVar13 <= iVar14) break;
        lVar17 = 0;
        while( true ) {
          iVar21 = iVar21 + 0x20;
          uVar12 = *(uint *)((longlong)plVar16 + lVar17 * 4 + lVar11 * 4 + 4);
          if (uVar12 != 0) break;
          lVar17 = lVar17 + 1;
          if (iVar5 - lVar11 == lVar17) goto LAB_1414f686d;
        }
        iVar14 = iVar14 + (int)lVar17 + 1;
        uVar19 = 0xffffffff;
      }
      uVar20 = (ulonglong)(-uVar12 & uVar12);
      uVar1 = uVar20 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar13 = (iVar21 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar13 < iVar4);
  }
LAB_1414f686d:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414f68dc FUN_1414f68dc body=457 status=ok
// SIG undefined FUN_1414f68dc(void)

int FUN_1414f68dc(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  bool bVar13;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    while (iVar3 != -1) {
      lVar8 = *param_3;
      plVar7 = (longlong *)param_3[1];
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
      }
      lVar11 = (longlong)iVar3 * 0x38;
      lVar9 = *(longlong *)(*param_1 + lVar11);
      plVar4 = *(longlong **)(*param_1 + 8 + lVar11);
      if (plVar4 == (longlong *)0x0) {
LAB_1414f69f5:
        plVar10 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        iVar6 = (int)plVar4[1];
        do {
          if (iVar6 == 0) goto LAB_1414f69f5;
          LOCK();
          iVar5 = (int)plVar4[1];
          bVar12 = iVar6 == iVar5;
          if (bVar12) {
            *(int *)(plVar4 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
          plVar10 = plVar4;
        } while (!bVar12);
      }
      bVar12 = true;
      if (plVar7 != (longlong *)0x0) {
        iVar6 = (int)plVar7[1];
        do {
          if (iVar6 == 0) goto LAB_1414f698f;
          LOCK();
          iVar5 = (int)plVar7[1];
          bVar13 = iVar6 == iVar5;
          if (bVar13) {
            *(int *)(plVar7 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar13);
        LOCK();
        plVar1 = plVar7 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
          bVar12 = false;
        }
        else {
          bVar12 = false;
        }
      }
LAB_1414f698f:
      if (plVar10 == (longlong *)0x0) {
        lVar9 = 0;
      }
      else {
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
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
      if (bVar12) {
        lVar8 = 0;
      }
      if (lVar9 == lVar8) {
        return iVar3;
      }
      iVar3 = *(int *)(*param_1 + 0x30 + lVar11);
    }
  }
  return -1;
}



// FUNCTION 1414f6aa6 FUN_1414f6aa6 body=521 status=ok
// SIG undefined FUN_1414f6aa6(void)

void FUN_1414f6aa6(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
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
  uVar5 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar5 != uVar9);
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
      iVar10 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar11 = (longlong)iVar10 * 0x38;
        uVar8 = *(ulonglong *)(lVar3 + lVar11);
        plVar6 = *(longlong **)(lVar3 + 8 + lVar11);
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
        uVar5 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar8 = (longlong)(int)(uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar3 + lVar11 + 0x34) = iVar7;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + lVar11 + 0x30) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar10
        ;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar10 = local_70._4_4_;
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



// FUNCTION 1414f6cb0 FUN_1414f6cb0 body=738 status=ok
// SIG undefined FUN_1414f6cb0(void)

void FUN_1414f6cb0(longlong param_1,longlong *param_2,longlong param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined2 local_af;
  undefined1 local_ad;
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (*(longlong *)(param_1 + -0x358) == 0) goto LAB_1414f6e40;
  plVar4 = *(longlong **)(param_1 + 0x268);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x690))(plVar4,0);
  }
  lVar7 = param_1 + -0x520;
  if (param_2 == (longlong *)0x0) {
LAB_1414f6d38:
    bVar1 = *(byte *)(param_1 + 0x448);
    *(byte *)(param_1 + 0x448) = bVar1 | 8;
    FUN_14022e476(lVar7);
    if ((bVar1 & 8) == 0) {
      FUN_14051c90a(lVar7);
    }
    FUN_1414f6f94(lVar7);
    if (param_2 == (longlong *)0x0) goto LAB_1414f6e40;
  }
  else {
    uVar3 = FUN_140ef2452();
    plVar4 = (longlong *)FUN_144718840(param_2,uVar3);
    if ((plVar4 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar4 + 0x28))(plVar4), cVar2 != '\0')) goto LAB_1414f6d38;
    FUN_1414f6f94(lVar7);
  }
  if (param_3 != 0) {
    local_58 = (longlong *)0x0;
    local_50 = 0x1800000000;
    FUN_140a44582(param_2,&local_118,0);
    lVar7 = (longlong)(int)local_50;
    plVar4 = &local_118;
    if (local_58 != (longlong *)0x0) {
      plVar4 = local_58;
    }
    if (lVar7 != 0) {
      lVar6 = 0;
      do {
        plVar5 = *(longlong **)((longlong)plVar4 + lVar6);
        if ((plVar5 != (longlong *)0x0) &&
           (cVar2 = (**(code **)(*plVar5 + 0x4c8))(plVar5,param_3), cVar2 != '\0')) {
          if (local_58 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          goto LAB_1414f6da3;
        }
        lVar6 = lVar6 + 8;
      } while (lVar7 * 8 != lVar6);
    }
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if (*(code **)(*param_2 + 0x3a8) == (code *)&LAB_144a8179a) {
    plVar5 = (longlong *)param_2[0x39];
  }
  else {
    plVar5 = (longlong *)(**(code **)(*param_2 + 0x3a8))(param_2);
  }
  if (plVar5 != (longlong *)0x0) {
LAB_1414f6da3:
    local_108 = 1;
    local_e8 = 0;
    local_e0 = DAT_14c8464f8;
    uStack_d8 = DAT_14c846500;
    local_d0 = DAT_14c846508;
    local_b8 = DAT_14c8464f0;
    local_c8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_c0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    local_af = 1;
    local_ad = 1;
    local_110 = param_5;
    local_118 = param_3;
    if (*(char *)(param_4 + 0xc) == '\x01') {
      local_c8 = param_4[4];
      uStack_c0 = param_4[5];
      local_b8 = param_4[6];
      local_138 = *param_4;
      uStack_130 = param_4[1];
      local_128 = *(undefined4 *)(param_4 + 2);
      uStack_124 = *(undefined4 *)((longlong)param_4 + 0x14);
      uStack_120 = *(undefined4 *)(param_4 + 3);
      uStack_11c = *(undefined4 *)((longlong)param_4 + 0x1c);
      FUN_1448052ee();
      local_158 = param_4[8];
      uStack_150 = param_4[9];
      local_148 = param_4[10];
      (**(code **)(**(longlong **)(param_1 + -0x358) + 0x478))();
    }
    else {
      local_108 = 2;
      lVar7 = *(longlong *)(param_1 + -0x130);
      if (lVar7 != 0) {
        local_d0 = *(undefined8 *)(lVar7 + 0x360);
        local_e0 = *(undefined8 *)(lVar7 + 0x350);
        uStack_d8 = *(undefined8 *)(lVar7 + 0x358);
      }
    }
    local_b0 = 1;
    FUN_1414f70a1(*(undefined8 *)(param_1 + -0x358),plVar5);
  }
LAB_1414f6e40:
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414f6f94 FUN_1414f6f94 body=269 status=ok
// SIG undefined FUN_1414f6f94(void)

void FUN_1414f6f94(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((*(byte *)(param_1 + 0x968) & 1) == 0) {
    *(byte *)(param_1 + 0x968) = *(byte *)(param_1 + 0x968) | 1;
    lVar2 = *(longlong *)(param_1 + 0x1c8);
    uVar3 = *(undefined8 *)(lVar2 + 0x288);
    uVar1 = *(undefined8 *)(lVar2 + 0x290);
    *(undefined8 *)(param_1 + 0x810) = *(undefined8 *)(lVar2 + 0x280);
    *(undefined8 *)(param_1 + 0x818) = uVar3;
    *(undefined8 *)(param_1 + 0x820) = uVar1;
  }
  if (*(char *)(param_1 + 0x7a0) == '\x01') {
    *(double *)(param_1 + 0x7f0) = *(double *)(param_1 + 0x7f0) * *(double *)(param_1 + 0x810);
    *(double *)(param_1 + 0x7f8) = *(double *)(param_1 + 0x7f8) * *(double *)(param_1 + 0x818);
    *(double *)(param_1 + 0x800) = *(double *)(param_1 + 0x820) * *(double *)(param_1 + 0x800);
    *(undefined8 *)(param_1 + 0x808) = 0;
    FUN_1413d4c10(param_1,param_1 + 0x7b0,0,0,0);
    *(undefined1 (*) [16])(param_1 + 0x7b0) = (undefined1  [16])0x0;
    *(undefined8 *)(param_1 + 0x7c0) = 0;
    *(undefined8 *)(param_1 + 0x7c8) = 0x3ff0000000000000;
    *(undefined1 (*) [16])(param_1 + 2000) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x7e0) = (undefined1  [16])0x0;
    *(undefined8 *)(param_1 + 0x7f0) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0x7f8) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0x800) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0x808) = 0;
    *(undefined1 *)(param_1 + 0x7a0) = 0;
  }
  return;
}



// FUNCTION 1414f70a1 FUN_1414f70a1 body=9367 status=ok
// SIG undefined FUN_1414f70a1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1414f70a1(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  double *pdVar9;
  longlong lVar10;
  double *pdVar11;
  uint uVar12;
  longlong *plVar13;
  double *pdVar14;
  undefined4 *puVar15;
  double *pdVar16;
  longlong lVar17;
  undefined8 unaff_R15;
  undefined8 uVar18;
  ulonglong uVar19;
  float fVar20;
  undefined1 auVar39 [12];
  double dVar21;
  double dVar22;
  double dVar23;
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
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  undefined1 auVar54 [16];
  double dVar58;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  double dVar59;
  double dVar60;
  undefined1 auVar61 [16];
  double dVar71;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  double dVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  double dVar90;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  double dVar91;
  double dVar92;
  double dVar93;
  double dVar94;
  undefined4 uVar95;
  undefined4 uVar96;
  double dVar97;
  undefined1 auStack_528 [32];
  ulonglong local_508;
  uint local_500;
  undefined4 local_4f8;
  undefined8 local_4f0;
  wchar_t *local_4e8;
  undefined1 *local_4e0;
  undefined1 *local_4d8;
  code **local_4d0;
  undefined1 *local_4c8;
  code *local_4c0;
  double local_4b0;
  double local_4a8;
  double dStack_4a0;
  undefined8 local_498;
  double dStack_490;
  undefined1 local_488 [16];
  double local_478;
  double dStack_470;
  double local_468;
  double local_460;
  undefined1 local_458 [16];
  undefined1 local_448 [16];
  double local_438;
  double dStack_430;
  double local_428;
  undefined1 local_418 [16];
  longlong *local_400;
  undefined8 local_3f8;
  double local_3f0;
  double local_3e8;
  double local_3e0;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  double local_3c0;
  double dStack_3b8;
  double local_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  double local_390;
  double local_388;
  double local_380;
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  double local_318;
  double dStack_310;
  double local_308;
  double local_300;
  double dStack_2f8;
  double local_2f0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double dStack_2b8;
  double local_2b0;
  char local_2a8;
  undefined1 local_298 [32];
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  code *local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
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
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_528;
  if (param_2 == (longlong *)0x0 || param_1 == (longlong *)0x0) goto LAB_1414f9064;
  dVar22 = (double)param_1[0x39];
  local_4b0 = (double)param_1[0x3a];
  local_460 = (double)param_1[0x3b];
  puVar15 = &DAT_14cadada0;
  if (*(char *)(param_3 + 0xd) != '\0') {
    puVar15 = (undefined4 *)&DAT_14cad8330;
  }
  (**(code **)(*param_1 + 0x490))(param_1,param_2,puVar15,*param_3);
  bVar1 = *(byte *)(param_3 + 2);
  uVar18 = CONCAT71((int7)((ulonglong)unaff_R15 >> 8),bVar1);
  local_468 = dVar22;
  if (bVar1 == 0) {
    dVar38 = 0.0;
    dVar80 = 0.0;
    dStack_2b8 = 0.0;
    local_2b0 = 0.0;
    local_2c8 = 0.0;
    dStack_2c0 = 0.0;
    local_2d8 = 0.0;
    dStack_2d0 = 0.0;
    local_2a8 = '\0';
    dVar71 = 0.0;
    dVar23 = 0.0;
    bVar3 = false;
    cVar4 = '\0';
    dVar52 = 0.0;
    uVar95 = 0;
    uVar96 = 0;
    dVar50 = 0.0;
    dVar51 = 0.0;
  }
  else {
    lVar7 = FUN_14081cebe();
    if ((*(int *)(param_1[2] + 0x38) < *(int *)(lVar7 + 0x38)) ||
       (plVar13 = param_1,
       *(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
       lVar7 + 0x30)) {
      plVar13 = (longlong *)0x0;
    }
    FUN_1418934fd(&local_2d8,plVar13);
    uVar95 = 0;
    uVar96 = 0;
    dVar23 = 0.0;
    dVar38 = dStack_2c0;
    dVar80 = dStack_2b8;
    dVar50 = local_2d8;
    cVar4 = local_2a8;
    dVar71 = local_2b0;
    dVar51 = dStack_2d0;
    dVar52 = local_2c8;
    if (bVar1 < 4) {
      lVar7 = param_1[0x28];
      bVar3 = true;
      if ((longlong)(int)lVar7 != 0) {
        lVar2 = param_1[0x27];
        lVar17 = 0;
        local_400 = param_2;
        local_3f8 = uVar18;
        do {
          lVar10 = *(longlong *)(lVar2 + lVar17);
          if (lVar10 != 0) {
            lVar8 = FUN_14081cebe();
            if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) {
              local_478 = dVar71;
              dStack_470 = dVar23;
              FUN_1418934fd(&local_318,lVar10);
              dVar22 = *(double *)(lVar10 + 0x1c8);
              dVar23 = *(double *)(lVar10 + 0x1d8);
              dVar71 = *(double *)(lVar10 + 0x198);
              dVar93 = *(double *)(lVar10 + 0x1a0);
              auVar40 = *(undefined1 (*) [16])(lVar10 + 0x1b0);
              dVar53 = auVar40._0_8_;
              dVar90 = auVar40._8_8_;
              dVar44 = *(double *)(lVar10 + 0x1c0);
              pdVar11 = *(double **)(lVar10 + 0x230);
              dVar94 = *(double *)(lVar10 + 0x1d0);
              uVar18 = 0;
              dVar21 = 0.0;
              dVar92 = *(double *)(lVar10 + 0x1a8);
              dVar91 = 0.0;
              if (pdVar11 == (double *)0x0) {
                local_488._8_8_ = 0;
                local_488._0_8_ = *(double *)(lVar10 + 0x1d0);
                local_498._0_4_ = SUB84(dVar93,0);
                local_498._4_4_ = (undefined4)((ulonglong)dVar93 >> 0x20);
                dStack_490 = 0.0;
                dStack_430 = 0.0;
                local_438 = *(double *)(lVar10 + 0x1a8);
                pdVar11 = (double *)FUN_14001cc68(0x40,0x10);
                dVar94 = DAT_14c8463d8;
                dVar93 = (double)CONCAT44(local_498._4_4_,(undefined4)local_498);
                *pdVar11 = DAT_14c8463d0;
                pdVar11[1] = dVar94;
                dVar94 = DAT_14c8463e8;
                pdVar11[2] = DAT_14c8463e0;
                pdVar11[3] = dVar94;
                dVar94 = DAT_14c846500;
                pdVar11[4] = DAT_14c8464f8;
                pdVar11[5] = dVar94;
                pdVar11[6] = DAT_14c846508;
                *(double **)(lVar10 + 0x230) = pdVar11;
                dVar94 = (double)local_488._0_8_;
                uVar18 = local_488._8_8_;
                dVar21 = dStack_490;
                dVar92 = local_438;
                dVar91 = dStack_430;
                local_498 = dVar93;
              }
              auVar48 = _DAT_1499387d0;
              local_458._8_4_ = uVar95;
              local_458._0_8_ = dVar52;
              local_458._12_4_ = uVar96;
              local_448._8_8_ = dVar51;
              local_448._0_8_ = dVar50;
              if (((((pdVar11[4] != dVar53) || (NAN(pdVar11[4]) || NAN(dVar53))) ||
                   (pdVar11[5] != dVar90)) ||
                  ((NAN(pdVar11[5]) || NAN(dVar90) || (pdVar11[6] != dVar44)))) ||
                 (NAN(pdVar11[6]) || NAN(dVar44))) {
                local_488._8_8_ = uVar18;
                local_488._0_8_ = dVar94;
                auVar45._8_8_ = 0;
                auVar45._0_8_ = dVar44;
                dVar51 = (double)DAT_1499387d0;
                dVar50 = DAT_1499387d0._8_8_;
                auVar40 = divpd(auVar40,_DAT_1499387d0);
                auVar42 = divpd(auVar45,_DAT_1499387d0);
                auVar40 = roundpd(auVar40,auVar40,3);
                auVar42 = roundpd(auVar42,auVar42,3);
                auVar81._0_8_ = dVar53 - auVar40._0_8_ * dVar51;
                auVar81._8_8_ = dVar90 - auVar40._8_8_ * dVar50;
                auVar46._0_8_ = dVar44 - auVar42._0_8_ * dVar51;
                auVar46._8_8_ = 0.0 - auVar42._8_8_ * dVar50;
                auVar75._0_8_ = auVar81._0_8_ + dVar51;
                auVar75._8_8_ = auVar81._8_8_ + dVar50;
                local_418._8_8_ = 0;
                local_418._0_8_ = dVar23;
                auVar54._0_8_ = auVar46._0_8_ + dVar51;
                auVar54._8_8_ = auVar46._8_8_ + dVar50;
                auVar40._8_8_ = -(ulonglong)(0.0 <= auVar81._8_8_);
                auVar40._0_8_ = -(ulonglong)(0.0 <= auVar81._0_8_);
                auVar76 = blendvpd(auVar75,auVar81,auVar40);
                auVar42._8_8_ = -(ulonglong)(0.0 <= auVar46._8_8_);
                auVar42._0_8_ = -(ulonglong)(0.0 <= auVar46._0_8_);
                auVar40 = blendvpd(auVar54,auVar46,auVar42);
                auVar47._0_8_ = auVar76._0_8_ + -360.0;
                auVar47._8_8_ = auVar76._8_8_ + -360.0;
                local_498._0_4_ = SUB84(dVar93,0);
                local_498._4_4_ = (undefined4)((ulonglong)dVar93 >> 0x20);
                auVar61._0_8_ = auVar40._0_8_ + -360.0;
                auVar61._8_8_ = auVar40._8_8_ + 0.0;
                auVar24._8_8_ = -(ulonglong)(180.0 < auVar76._8_8_);
                auVar24._0_8_ = -(ulonglong)(180.0 < auVar76._0_8_);
                auVar42 = blendvpd(auVar76,auVar47,auVar24);
                auVar76._8_8_ = -(ulonglong)(180.0 < auVar40._8_8_);
                auVar76._0_8_ = -(ulonglong)(180.0 < auVar40._0_8_);
                auVar40 = blendvpd(auVar40,auVar61,auVar76);
                *(undefined1 (*) [16])(pdVar11 + 4) = auVar42;
                dVar52 = auVar40._0_8_;
                pdVar11[6] = dVar52;
                auVar82._8_8_ = 0;
                auVar82._0_8_ = dVar52;
                auVar40 = divpd(auVar42,auVar48);
                auVar48 = divpd(auVar82,auVar48);
                auVar40 = roundpd(auVar40,auVar40,3);
                auVar48 = roundpd(auVar48,auVar48,3);
                dVar93 = (auVar42._0_8_ - auVar40._0_8_ * dVar51) * 0.008726646259971648;
                dVar44 = (auVar42._8_8_ - auVar40._8_8_ * dVar50) * 0.008726646259971648;
                dVar51 = (dVar52 - auVar48._0_8_ * dVar51) * 0.008726646259971648;
                dVar50 = (0.0 - auVar48._8_8_ * dVar50) * 0.008726646259971648;
                dStack_490 = dVar21;
                local_438 = dVar92;
                dStack_430 = dVar91;
                local_428 = sin(dVar93);
                dStack_4a0 = 0.0;
                local_4a8 = dVar71;
                dVar23 = sin(dVar44);
                dVar94 = sin(dVar51);
                sin(dVar50);
                dVar92 = cos(dVar93);
                dVar71 = local_4a8;
                dVar21 = cos(dVar44);
                dVar91 = cos(dVar51);
                cos(dVar50);
                dVar50 = local_448._0_8_;
                dVar51 = local_448._8_8_;
                dVar52 = local_458._0_8_;
                uVar95 = local_458._8_4_;
                uVar96 = local_458._12_4_;
                dVar44 = -(dVar21 * local_428 * dVar94) + dVar23 * dVar92 * dVar91;
                dVar53 = dVar23 * local_428 * dVar94 + dVar21 * dVar92 * dVar91;
                dVar93 = (double)CONCAT44(local_498._4_4_,(undefined4)local_498);
                dVar90 = local_428 * dVar23 * dVar91 - dVar92 * dVar21 * dVar94;
                dVar21 = -(local_428 * dVar21 * dVar91) - dVar92 * dVar23 * dVar94;
                *pdVar11 = dVar90;
                pdVar11[1] = dVar21;
                pdVar11[2] = dVar44;
                pdVar11[3] = dVar53;
                dVar94 = (double)local_488._0_8_;
                dVar92 = local_438;
                dVar23 = (double)local_418._0_8_;
                local_498 = dVar93;
              }
              else {
                dVar90 = *pdVar11;
                dVar21 = pdVar11[1];
                dVar44 = pdVar11[2];
                dVar53 = pdVar11[3];
              }
              auVar83._8_8_ = 0;
              auVar83._0_8_ = dVar23;
              plVar13 = param_1;
              local_4a8 = dVar71;
              dStack_4a0 = dVar93;
              uVar5 = (**(code **)(*param_1 + 0x4a8))
                                (param_1,&local_378,*(undefined8 *)(lVar10 + 0x128),2);
              dVar71 = local_338._0_8_;
              dVar91 = local_338._8_8_;
              dVar93 = local_328._0_8_;
              auVar48._8_8_ = dVar94;
              auVar48._0_8_ = dVar22;
              auVar40 = minpd(auVar48,local_338);
              auVar48 = minpd(auVar83,local_328);
              auVar41._8_8_ = -(ulonglong)(auVar40._8_8_ < 0.0);
              auVar41._0_8_ = -(ulonglong)(auVar40._0_8_ < 0.0);
              iVar6 = movmskpd(uVar5,auVar41);
              auVar49._8_8_ = -(ulonglong)(auVar48._8_8_ < 0.0);
              auVar49._0_8_ = -(ulonglong)(auVar48._0_8_ < 0.0);
              uVar12 = movmskpd((int)plVar13,auVar49);
              local_488 = auVar83;
              if ((uVar12 & 0x3fffffff) == 0 && iVar6 == 0) {
                dVar71 = local_4a8 * dVar71;
                dVar91 = dStack_4a0 * dVar91;
                dVar92 = dVar92 * dVar93;
                dVar94 = local_328._8_8_ * 0.0;
                dVar93 = dVar91 * local_378 - dVar71 * dStack_370;
                dVar44 = dVar92 * dStack_370 - dVar91 * local_368;
                dVar53 = dVar71 * local_368 - dVar92 * local_378;
                dVar90 = dVar94 * dStack_360 - dVar94 * dStack_360;
                dVar44 = dVar44 + dVar44;
                dVar53 = dVar53 + dVar53;
                dVar93 = dVar93 + dVar93;
                dVar90 = dVar90 + dVar90;
                dVar22 = (dVar93 * dStack_370 - local_368 * dVar53) + dStack_360 * dVar44 + dVar71 +
                         local_358;
                dVar23 = (dVar44 * local_368 - dVar93 * local_378) + dStack_360 * dVar53 + dVar91 +
                         dStack_350;
                dVar71 = (dVar53 * local_378 - dStack_370 * dVar44) + dStack_360 * dVar93 + dVar92 +
                         local_348;
                dVar93 = (dVar90 * dStack_360 - dVar90 * dStack_360) + dStack_360 * dVar90 + dVar94
                         + dStack_340;
              }
              else {
                dVar50 = dStack_370 + dStack_370;
                dVar52 = local_368 + local_368;
                dVar51 = local_378 * (local_378 + local_378);
                dVar58 = (local_378 + local_378) * dStack_360;
                local_1d8 = (dVar50 * local_378 - dVar52 * dStack_360) * dVar91;
                dStack_1b0 = (dVar52 * dStack_370 - dVar58) * dVar93;
                local_438 = dVar22 * dVar71;
                dStack_430 = dVar94 * dVar91;
                local_1f8 = (1.0 - (local_368 * dVar52 + dStack_370 * dVar50)) * dVar71;
                dStack_1d0 = (1.0 - (local_368 * dVar52 + dVar51)) * dVar91;
                dStack_1f0 = (dVar50 * local_378 + dVar52 * dStack_360) * dVar71;
                local_1c8 = (dVar52 * dStack_370 + dVar58) * dVar91;
                local_1b8 = (dVar50 * dStack_360 + local_378 * dVar52) * dVar93;
                local_418 = local_328;
                local_1e8 = (local_378 * dVar52 - dVar50 * dStack_360) * dVar71;
                uStack_1e0 = 0;
                local_1a8 = (1.0 - (dVar51 + dStack_370 * dVar50)) * dVar93;
                uStack_1c0 = 0;
                uStack_1a0 = 0;
                local_198 = local_358;
                dStack_190 = dStack_350;
                local_188 = local_348;
                uStack_180 = 0x3ff0000000000000;
                dVar51 = dVar21 + dVar21;
                dVar52 = dVar44 + dVar44;
                dVar50 = dVar90 * (dVar90 + dVar90);
                dVar71 = (dVar90 + dVar90) * dVar53;
                local_258 = (dVar51 * dVar90 - dVar52 * dVar53) * dVar94;
                dStack_230 = (dVar52 * dVar21 - dVar71) * dVar23;
                local_278 = (1.0 - (dVar44 * dVar52 + dVar21 * dVar51)) * dVar22;
                dStack_250 = (1.0 - (dVar44 * dVar52 + dVar50)) * dVar94;
                dStack_270 = (dVar51 * dVar90 + dVar52 * dVar53) * dVar22;
                local_248 = (dVar52 * dVar21 + dVar71) * dVar94;
                local_238 = (dVar51 * dVar53 + dVar90 * dVar52) * dVar23;
                local_268 = (dVar90 * dVar52 - dVar51 * dVar53) * dVar22;
                uStack_260 = 0;
                uStack_240 = 0;
                local_228 = (1.0 - (dVar50 + dVar21 * dVar51)) * dVar23;
                uStack_220 = 0;
                local_218 = local_4a8;
                dStack_210 = dStack_4a0;
                uStack_200 = 0x3ff0000000000000;
                dStack_490 = dVar80;
                local_208 = dVar92;
                local_498 = dVar38;
                FUN_1447fea8d(&local_178,&local_278,&local_1f8);
                dVar80 = dStack_490;
                dVar38 = local_498;
                local_4a8 = local_168;
                dVar51 = local_168 * local_168 +
                         (double)local_178 * (double)local_178 + dStack_170 * dStack_170;
                local_428 = local_148;
                dVar50 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
                dVar22 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
                uVar19 = -(ulonglong)(0.0 <= dVar51 + -9.99999993922529e-09);
                dVar51 = (double)(~uVar19 & 0x3ff0000000000000 |
                                 (ulonglong)(1.0 / SQRT(dVar51)) & uVar19);
                uVar19 = -(ulonglong)(0.0 <= dVar50 + -9.99999993922529e-09);
                dVar50 = (double)(~uVar19 & 0x3ff0000000000000 |
                                 (ulonglong)(1.0 / SQRT(dVar50)) & uVar19);
                uVar19 = -(ulonglong)(0.0 <= dVar22 + -9.99999993922529e-09);
                dVar22 = (double)(~uVar19 & 0x3ff0000000000000 |
                                 (ulonglong)(1.0 / SQRT(dVar22)) & uVar19);
                dVar52 = local_458._0_8_;
                uVar95 = local_458._8_4_;
                uVar96 = local_458._12_4_;
                auVar25._8_8_ = -(ulonglong)(0.0 <= dStack_430);
                auVar25._0_8_ = -(ulonglong)(0.0 <= local_438);
                auVar40 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar25);
                uVar19 = -(ulonglong)(0.0 <= dVar23 * (double)local_418._0_8_);
                dVar23 = (double)(~uVar19 & 0xbff0000000000000 | uVar19 & 0x3ff0000000000000);
                dVar71 = auVar40._0_8_;
                local_178 = (code *)((double)local_178 * dVar51 * dVar71);
                dStack_170 = dStack_170 * dVar51 * dVar71;
                local_168 = dVar51 * local_168 * dVar71;
                dVar51 = auVar40._8_8_;
                local_148 = dVar50 * local_148 * dVar51;
                local_150 = local_150 * dVar50 * dVar51;
                local_158 = dVar51 * local_158 * dVar50;
                local_128 = dVar22 * local_128 * dVar23;
                local_130 = local_130 * dVar22 * dVar23;
                local_138 = dVar23 * local_138 * dVar22;
                dVar50 = local_448._0_8_;
                dVar51 = local_448._8_8_;
                FUN_14481fd10(local_298,&local_178);
                dVar93 = 0.0;
                dVar22 = local_118;
                dVar23 = dStack_110;
                dVar71 = local_108;
              }
              dVar44 = local_2f0 + dVar71;
              dStack_2f8 = dStack_2f8 + dVar23;
              local_300 = local_300 + dVar22;
              local_308 = dVar71 + local_308;
              dStack_310 = dVar23 + dStack_310;
              local_318 = dVar22 + local_318;
              if (cVar4 == '\0') {
                cVar4 = '\x01';
                uVar95 = SUB84(dVar93,0);
                uVar96 = (undefined4)((ulonglong)dVar93 >> 0x20);
                dVar51 = dStack_310;
                dVar80 = dStack_2f8;
                dVar52 = local_308;
                dVar71 = dVar44;
                dVar23 = 0.0;
                dVar50 = local_318;
                dVar38 = local_300;
              }
              else {
                if (local_318 <= dVar50) {
                  dVar50 = local_318;
                }
                if (dStack_310 <= dVar51) {
                  dVar51 = dStack_310;
                }
                if (local_308 <= dVar52) {
                  dVar52 = local_308;
                }
                if (dVar38 <= local_300) {
                  dVar38 = local_300;
                }
                if (dVar80 <= dStack_2f8) {
                  dVar80 = dStack_2f8;
                }
                dVar71 = local_478;
                dVar23 = dStack_470;
                if (local_478 <= dVar44) {
                  dVar71 = dVar44;
                }
              }
            }
          }
          lVar17 = lVar17 + 8;
        } while ((longlong)(int)lVar7 * 8 != lVar17);
        bVar3 = true;
        param_2 = local_400;
        uVar18 = local_3f8;
        dVar22 = local_468;
      }
    }
    else {
      bVar3 = false;
    }
  }
  dVar93 = (double)CONCAT44(uVar96,uVar95);
  if (*(char *)(param_3 + 0xd) == '\x01') {
    dVar50 = dVar22 * dVar50;
    dVar51 = dVar51 * local_4b0;
    dVar52 = dVar52 * local_460;
    dVar38 = dVar22 * dVar38;
    dVar80 = dVar80 * local_4b0;
    dVar71 = dVar71 * local_460;
  }
  dVar22 = (double)FUN_144719204(param_3[7],0x4076800000000000);
  dVar22 = (double)(~-(ulonglong)(dVar22 < 0.0) & (ulonglong)dVar22 |
                   (ulonglong)(dVar22 + 360.0) & -(ulonglong)(dVar22 < 0.0));
  if ((dVar22 != 0.0) || (NAN(dVar22))) {
LAB_1414f7f9b:
    local_448._8_4_ = SUB84(dVar51,0);
    local_448._0_8_ = dVar50;
    local_448._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
    local_458._8_4_ = uVar95;
    local_458._0_8_ = dVar52;
    local_458._12_4_ = uVar96;
    dVar50 = (double)param_3[7];
    dVar22 = (double)param_3[8];
    dVar51 = (double)param_3[9];
    local_478 = dVar71;
    dStack_470 = dVar23;
    dVar52 = sin(dVar50 * 0.01745329238474369);
    dVar23 = sin(dVar22 * 0.01745329238474369);
    dVar71 = sin(dVar51 * 0.01745329238474369);
    sin(0.0);
    dVar44 = cos(dVar50 * 0.01745329238474369);
    dVar22 = cos(dVar22 * 0.01745329238474369);
    dVar53 = cos(dVar51 * 0.01745329238474369);
    cos(0.0);
    if (cVar4 == '\0') {
      dVar38 = 0.0;
      dVar80 = 0.0;
      dVar52 = 0.0;
      dVar93 = 0.0;
      dVar50 = 0.0;
      dVar51 = 0.0;
      dVar23 = 0.0;
      dVar71 = 0.0;
    }
    else {
      dVar50 = -(dVar52 * dVar53 * dVar22 + dVar23 * dVar71);
      dVar59 = dVar22 * dVar71 - dVar23 * dVar52 * dVar53;
      dVar58 = dVar71 * dVar52 * dVar22 - dVar23 * dVar53;
      dVar51 = dVar71 * dVar52 * dVar23 + dVar53 * dVar22;
      dVar91 = (dVar38 + (double)local_448._0_8_) * 0.5;
      dVar93 = (dVar80 + (double)local_448._8_8_) * 0.5;
      dVar60 = (local_478 + (double)local_458._0_8_) * 0.5;
      dVar92 = (dVar38 - (double)local_448._0_8_) * 0.5;
      dVar21 = (dVar80 - (double)local_448._8_8_) * 0.5;
      dVar97 = (local_478 - (double)local_458._0_8_) * 0.5;
      dVar90 = dVar60 * dVar50 + dVar93 * dVar58 + dVar91 * dVar22 * dVar44 + DAT_14c8464e0;
      dVar94 = dVar60 * dVar59 + dVar93 * dVar51 + dVar91 * dVar23 * dVar44 + DAT_14c8464e8;
      dVar38 = ABS(dVar97 * dVar50) + ABS(dVar58 * dVar21) + ABS(dVar92 * dVar22 * dVar44);
      dVar80 = ABS(dVar97 * dVar59) + ABS(dVar51 * dVar21) + ABS(dVar92 * dVar23 * dVar44);
      dVar50 = dVar90 - dVar38;
      dVar51 = dVar94 - dVar80;
      dVar38 = dVar38 + dVar90;
      dVar80 = dVar80 + dVar94;
      dVar22 = ABS(dVar21 * -dVar71 * dVar44) + ABS(dVar92 * dVar52) + ABS(dVar97 * dVar44 * dVar53)
      ;
      dVar71 = dVar91 * dVar52 + dVar93 * -dVar71 * dVar44 + dVar60 * dVar44 * dVar53 +
               DAT_14c8464f0;
      dVar52 = dVar71 - dVar22;
      dVar23 = dVar93;
      dVar71 = dVar71 + dVar22;
    }
  }
  else {
    dVar22 = (double)FUN_144719204(param_3[8],0x4076800000000000);
    dVar22 = (double)(~-(ulonglong)(dVar22 < 0.0) & (ulonglong)dVar22 |
                     (ulonglong)(dVar22 + 360.0) & -(ulonglong)(dVar22 < 0.0));
    if ((dVar22 != 0.0) || (NAN(dVar22))) goto LAB_1414f7f9b;
    dVar22 = (double)FUN_144719204(param_3[9],0x4076800000000000);
    dVar22 = (double)(~-(ulonglong)(dVar22 < 0.0) & (ulonglong)dVar22 |
                     (ulonglong)(dVar22 + 360.0) & -(ulonglong)(dVar22 < 0.0));
    if ((dVar22 != 0.0) || (NAN(dVar22))) goto LAB_1414f7f9b;
  }
  local_458._8_4_ = SUB84(dVar93,0);
  local_458._0_8_ = dVar52;
  local_458._12_4_ = (int)((ulonglong)dVar93 >> 0x20);
  local_448._8_4_ = SUB84(dVar51,0);
  local_448._0_8_ = dVar50;
  local_448._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
  if (*(char *)(param_3 + 0xd) == '\x01') {
    uVar95 = (undefined4)DAT_14c846510;
    uVar96 = (undefined4)((ulonglong)DAT_14c846510 >> 0x20);
    dVar22 = DAT_14c846520;
    dVar93 = DAT_14c846518;
    dVar44 = local_498;
  }
  else {
    (**(code **)(*param_2 + 0x4a8))(param_2,&local_178,*param_3,0);
    uVar95 = SUB84(local_138,0);
    uVar96 = (undefined4)((ulonglong)local_138 >> 0x20);
    dVar22 = local_128;
    dVar93 = local_130;
    dVar44 = local_498;
    if ((*(byte *)(param_3 + 0xd) & 1) == 0) {
      local_460 = local_128;
      local_468 = local_138;
      local_4b0 = local_130;
    }
  }
  dVar53 = (dVar71 + dVar52) * 0.5;
  dVar52 = (dVar80 + dVar51) * 0.5;
  dVar50 = (dVar38 + dVar50) * 0.5;
  if ((byte)((char)uVar18 - 2U) < 3) {
    local_498._0_4_ = SUB84(DAT_14c8464e0,0);
    local_498._4_4_ = (undefined4)((ulonglong)DAT_14c8464e0 >> 0x20);
    dVar94 = DAT_14c8464f0;
    dVar90 = DAT_14c8464e8;
    if (DAT_14cad3688 == 0) {
      local_4d0 = &local_178;
      local_178 = FUN_144b223ce;
      local_4c0 = FUN_14081d0ea;
      local_4c8 = &LAB_1417963e0;
      local_4d8 = &LAB_147a2f4c9;
      local_4e0 = &LAB_1400ea6f8;
      local_4e8 = L"Engine";
      local_4f0 = 0x200000000000;
      local_4f8 = 0x10000004;
      local_500 = 0x10;
      local_508 = CONCAT44(local_508._4_4_,0x720);
      local_4a8 = DAT_14c8464f0;
      local_488._0_8_ = DAT_14c8464e8;
      local_478 = dVar53;
      dStack_470 = dVar23;
      FUN_14081cfa3(L"/Script/Engine",L"StaticMeshComponent",&DAT_14cad3688,FUN_1463bfdc8);
      dVar44 = (double)CONCAT44(local_498._4_4_,(undefined4)local_498);
      dVar94 = local_4a8;
      dVar90 = (double)local_488._0_8_;
      dVar53 = local_478;
      dVar23 = dStack_470;
    }
    lVar7 = param_2[2];
    iVar6 = *(int *)(lVar7 + 0x38);
    if ((iVar6 < *(int *)(DAT_14cad3688 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14cad3688 + 0x38) * 8) !=
        DAT_14cad3688 + 0x30)) {
      if (DAT_14cac7cb8 == 0) {
        local_4d0 = &local_178;
        local_178 = FUN_144a7958c;
        local_4c0 = FUN_14081d0ea;
        local_4c8 = &LAB_1417963e0;
        local_4d8 = &LAB_1478a2d90;
        local_4e0 = &LAB_146395589;
        local_4e8 = L"Engine";
        local_4f0 = 0x20000000000;
        local_4f8 = 0x10000005;
        local_500 = 0x10;
        local_508 = CONCAT44(local_508._4_4_,0xad0);
        local_488._0_8_ = dVar90;
        local_4a8 = dVar94;
        local_478 = dVar53;
        dStack_470 = dVar23;
        FUN_14081cfa3(L"/Script/Engine",L"SkinnedMeshComponent",&DAT_14cac7cb8,FUN_146395562);
        dVar44 = (double)CONCAT44(local_498._4_4_,(undefined4)local_498);
        lVar7 = param_2[2];
        iVar6 = *(int *)(lVar7 + 0x38);
        dVar90 = (double)local_488._0_8_;
        dVar94 = local_4a8;
        dVar53 = local_478;
        dVar23 = dStack_470;
      }
      if ((*(int *)(DAT_14cac7cb8 + 0x38) <= iVar6) &&
         (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14cac7cb8 + 0x38) * 8)
          == DAT_14cac7cb8 + 0x30)) {
        local_488._0_8_ = dVar90;
        local_4a8 = dVar94;
        local_478 = dVar53;
        dStack_470 = dVar23;
        lVar7 = FUN_140229858(param_2,*param_3);
        goto LAB_1414f8409;
      }
    }
    else {
      local_488._0_8_ = dVar90;
      local_4a8 = dVar94;
      local_478 = dVar53;
      dStack_470 = dVar23;
      lVar7 = FUN_147a29a7a(param_2,*param_3);
LAB_1414f8409:
      dVar92 = (double)CONCAT44(local_498._4_4_,(undefined4)local_498);
      dVar94 = local_4a8;
      dVar90 = (double)local_488._0_8_;
      dVar53 = local_478;
      dVar23 = dStack_470;
      dVar44 = (double)CONCAT44(local_498._4_4_,(undefined4)local_498);
      if (lVar7 != 0) {
        local_498._0_4_ = (undefined4)*(undefined8 *)(lVar7 + 0x88);
        local_498._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(lVar7 + 0x88) >> 0x20);
        dVar90 = *(double *)(lVar7 + 0x90);
        dVar94 = *(double *)(lVar7 + 0x98);
        dVar44 = dVar92;
      }
    }
    dVar38 = (dVar38 - (double)local_448._0_8_) * 0.5;
    if (*(char *)(param_3 + 6) != '\0') {
      local_498._0_4_ = (undefined4)param_3[3];
      local_498._4_4_ = (undefined4)((ulonglong)param_3[3] >> 0x20);
      dVar90 = (double)param_3[4];
    }
    dVar71 = (dVar71 - (double)local_458._0_8_) * 0.5;
    dVar80 = (dVar80 - dVar51) * 0.5;
    dVar51 = (double)CONCAT44(uVar96,uVar95) * dVar38;
    if (*(char *)(param_3 + 6) != '\0') {
      dVar94 = (double)param_3[5];
    }
    dVar22 = dVar22 * dVar71;
    dVar93 = dVar93 * dVar80;
    if (((((dVar51 != 0.0) || (NAN(dVar51))) || (dVar93 != 0.0)) ||
        (((NAN(dVar93) || (dVar22 != 0.0)) || (NAN(dVar22))))) &&
       ((((double)CONCAT44(local_498._4_4_,(undefined4)local_498) != 0.0 ||
         (NAN((double)CONCAT44(local_498._4_4_,(undefined4)local_498)))) ||
        ((dVar90 != 0.0 || (((NAN(dVar90) || (dVar94 != 0.0)) || (NAN(dVar94))))))))) {
      if ((((char)uVar18 == '\x03') ||
          ((dVar94 < dVar22 & *(byte *)((longlong)param_3 + 0x6b)) != 0)) ||
         (((dVar90 < dVar93 & *(byte *)((longlong)param_3 + 0x6a)) != 0 ||
          ((((double)CONCAT44(local_498._4_4_,(undefined4)local_498) <= dVar51 &&
            dVar51 != (double)CONCAT44(local_498._4_4_,(undefined4)local_498)) &
           *(byte *)((longlong)param_3 + 0x69)) != 0)))) {
        fVar20 = 3.4028235e+38;
        if (*(byte *)((longlong)param_3 + 0x69) == 0) {
          auVar39 = ZEXT812(0x7f7fffff);
        }
        else {
          auVar39._4_8_ = 0;
          auVar39._0_4_ = (float)((double)CONCAT44(local_498._4_4_,(undefined4)local_498) / dVar38);
        }
        if (*(byte *)((longlong)param_3 + 0x6a) == 0) {
          fVar43 = 3.4028235e+38;
        }
        else {
          fVar43 = (float)(dVar90 / dVar80);
        }
        if (*(byte *)((longlong)param_3 + 0x6b) != 0) {
          fVar20 = (float)(dVar94 / dVar71);
        }
        if (fVar43 <= auVar39._0_4_) {
          auVar39._4_8_ = auVar39._4_8_;
          auVar39._0_4_ = fVar43;
        }
        if (fVar20 <= auVar39._0_4_) {
          auVar39._4_8_ = auVar39._4_8_;
          auVar39._0_4_ = fVar20;
        }
        dVar22 = (double)auVar39._0_4_;
        local_460 = local_460 * dVar22;
        local_4b0 = local_4b0 * dVar22;
        local_468 = local_468 * dVar22;
        dVar50 = dVar50 * dVar22;
        dVar52 = dVar52 * dVar22;
        dVar53 = dVar53 * dVar22;
      }
    }
  }
  local_498 = dVar44;
  if (bVar3) {
    uVar95 = 0;
    uVar12 = 0x80000000;
    if (*(char *)((longlong)param_3 + 0x6b) == '\0') {
      dVar53 = -0.0;
      dVar23 = 0.0;
    }
    else {
      dVar53 = -dVar53;
      dVar23 = -dVar23;
    }
    if (*(char *)((longlong)param_3 + 0x6a) == '\0') {
      dVar52 = -0.0;
    }
    else {
      dVar52 = -dVar52;
    }
    if (*(char *)((longlong)param_3 + 0x69) != '\0') {
      uVar12 = (uint)((ulonglong)dVar50 >> 0x20) ^ 0x80000000;
      uVar95 = SUB84(dVar50,0);
    }
    auVar40 = *(undefined1 (*) [16])(param_1 + 0x36);
    dVar51 = auVar40._0_8_;
    dVar50 = auVar40._8_8_;
    dVar22 = (double)param_1[0x38];
    pdVar11 = (double *)param_1[0x46];
    if (pdVar11 == (double *)0x0) {
      pdVar11 = (double *)FUN_14001cc68(0x40,0x10);
      dVar80 = DAT_14c8463d8;
      *pdVar11 = DAT_14c8463d0;
      pdVar11[1] = dVar80;
      dVar80 = DAT_14c8463e8;
      pdVar11[2] = DAT_14c8463e0;
      pdVar11[3] = dVar80;
      dVar80 = DAT_14c846500;
      pdVar11[4] = DAT_14c8464f8;
      pdVar11[5] = dVar80;
      pdVar11[6] = DAT_14c846508;
      param_1[0x46] = (longlong)pdVar11;
    }
    auVar48 = _DAT_1499387d0;
    if (((pdVar11[4] != dVar51) || (NAN(pdVar11[4]) || NAN(dVar51))) ||
       ((pdVar11[5] != dVar50 || (NAN(pdVar11[5]) || NAN(dVar50))))) {
LAB_1414f8658:
      auVar62._8_8_ = 0;
      auVar62._0_8_ = dVar22;
      dVar80 = (double)DAT_1499387d0;
      dVar71 = DAT_1499387d0._8_8_;
      auVar40 = divpd(auVar40,_DAT_1499387d0);
      auVar42 = divpd(auVar62,_DAT_1499387d0);
      auVar40 = roundpd(auVar40,auVar40,3);
      auVar42 = roundpd(auVar42,auVar42,3);
      auVar84._0_8_ = dVar51 - auVar40._0_8_ * dVar80;
      auVar84._8_8_ = dVar50 - auVar40._8_8_ * dVar71;
      auVar63._0_8_ = dVar22 - auVar42._0_8_ * dVar80;
      auVar63._8_8_ = 0.0 - auVar42._8_8_ * dVar71;
      auVar77._0_8_ = auVar84._0_8_ + dVar80;
      auVar77._8_8_ = auVar84._8_8_ + dVar71;
      auVar55._0_8_ = auVar63._0_8_ + dVar80;
      auVar55._8_8_ = auVar63._8_8_ + dVar71;
      auVar26._8_8_ = -(ulonglong)(0.0 <= auVar84._8_8_);
      auVar26._0_8_ = -(ulonglong)(0.0 <= auVar84._0_8_);
      auVar42 = blendvpd(auVar77,auVar84,auVar26);
      auVar27._8_8_ = -(ulonglong)(0.0 <= auVar63._8_8_);
      auVar27._0_8_ = -(ulonglong)(0.0 <= auVar63._0_8_);
      auVar40 = blendvpd(auVar55,auVar63,auVar27);
      auVar64._0_8_ = auVar42._0_8_ + -360.0;
      auVar64._8_8_ = auVar42._8_8_ + -360.0;
      auVar72._0_8_ = auVar40._0_8_ + -360.0;
      auVar72._8_8_ = auVar40._8_8_ + 0.0;
      auVar28._8_8_ = -(ulonglong)(180.0 < auVar42._8_8_);
      auVar28._0_8_ = -(ulonglong)(180.0 < auVar42._0_8_);
      auVar42 = blendvpd(auVar42,auVar64,auVar28);
      auVar29._8_8_ = -(ulonglong)(180.0 < auVar40._8_8_);
      auVar29._0_8_ = -(ulonglong)(180.0 < auVar40._0_8_);
      auVar40 = blendvpd(auVar40,auVar72,auVar29);
      *(undefined1 (*) [16])(pdVar11 + 4) = auVar42;
      dVar22 = auVar40._0_8_;
      pdVar11[6] = dVar22;
      auVar85._8_8_ = 0;
      auVar85._0_8_ = dVar22;
      auVar40 = divpd(auVar42,auVar48);
      auVar48 = divpd(auVar85,auVar48);
      auVar40 = roundpd(auVar40,auVar40,3);
      auVar48 = roundpd(auVar48,auVar48,3);
      dVar38 = (auVar42._0_8_ - auVar40._0_8_ * dVar80) * 0.008726646259971648;
      dVar93 = (auVar42._8_8_ - auVar40._8_8_ * dVar71) * 0.008726646259971648;
      dVar44 = (dVar22 - auVar48._0_8_ * dVar80) * 0.008726646259971648;
      dVar90 = (0.0 - auVar48._8_8_ * dVar71) * 0.008726646259971648;
      local_478 = dVar53;
      dStack_470 = dVar23;
      dVar22 = sin(dVar38);
      dVar51 = sin(dVar93);
      dVar50 = sin(dVar44);
      sin(dVar90);
      dVar80 = cos(dVar38);
      dVar23 = cos(dVar93);
      dVar71 = cos(dVar44);
      cos(dVar90);
      *pdVar11 = dVar22 * dVar51 * dVar71 - dVar80 * dVar23 * dVar50;
      pdVar11[1] = -(dVar22 * dVar23 * dVar71) - dVar80 * dVar51 * dVar50;
      pdVar11[2] = -(dVar23 * dVar22 * dVar50) + dVar51 * dVar80 * dVar71;
      pdVar11[3] = dVar51 * dVar22 * dVar50 + dVar23 * dVar80 * dVar71;
      dVar53 = local_478;
    }
    else if ((pdVar11[6] != dVar22) || (NAN(pdVar11[6]) || NAN(dVar22))) goto LAB_1414f8658;
    local_178 = (code *)*pdVar11;
    dStack_170 = pdVar11[1];
    local_168 = pdVar11[2];
    dStack_160 = pdVar11[3];
    local_1f8 = (double)CONCAT44(uVar12,uVar95);
    local_500 = CONCAT31(local_500._1_3_,1);
    local_508 = 0;
    dStack_1f0 = dVar52;
    local_1e8 = dVar53;
    FUN_144927ad4(param_1,&local_1f8,&local_178,0);
  }
  dVar22 = (double)param_3[10];
  dVar51 = (double)param_3[0xb];
  dVar50 = (double)param_3[0xc];
  if ((((dVar22 != DAT_14c8464e0) || (NAN(dVar22) || NAN(DAT_14c8464e0))) ||
      (dVar51 != DAT_14c8464e8)) || (NAN(dVar51) || NAN(DAT_14c8464e8))) {
LAB_1414f88c6:
    auVar40 = *(undefined1 (*) [16])(param_1 + 0x36);
    dVar80 = auVar40._0_8_;
    dVar23 = auVar40._8_8_;
    dVar52 = (double)param_1[0x38];
    pdVar11 = (double *)param_1[0x46];
    if (pdVar11 == (double *)0x0) {
      pdVar11 = (double *)FUN_14001cc68(0x40,0x10);
      dVar71 = DAT_14c8463d8;
      *pdVar11 = DAT_14c8463d0;
      pdVar11[1] = dVar71;
      dVar71 = DAT_14c8463e8;
      pdVar11[2] = DAT_14c8463e0;
      pdVar11[3] = dVar71;
      dVar71 = DAT_14c846500;
      pdVar11[4] = DAT_14c8464f8;
      pdVar11[5] = dVar71;
      pdVar11[6] = DAT_14c846508;
      param_1[0x46] = (longlong)pdVar11;
    }
    auVar48 = _DAT_1499387d0;
    if (((pdVar11[4] != dVar80) || (NAN(pdVar11[4]) || NAN(dVar80))) ||
       ((pdVar11[5] != dVar23 || (NAN(pdVar11[5]) || NAN(dVar23))))) {
LAB_1414f8919:
      auVar65._8_8_ = 0;
      auVar65._0_8_ = dVar52;
      dVar71 = (double)DAT_1499387d0;
      dVar38 = DAT_1499387d0._8_8_;
      auVar40 = divpd(auVar40,_DAT_1499387d0);
      auVar42 = divpd(auVar65,_DAT_1499387d0);
      auVar40 = roundpd(auVar40,auVar40,3);
      auVar42 = roundpd(auVar42,auVar42,3);
      auVar86._0_8_ = dVar80 - auVar40._0_8_ * dVar71;
      auVar86._8_8_ = dVar23 - auVar40._8_8_ * dVar38;
      auVar66._0_8_ = dVar52 - auVar42._0_8_ * dVar71;
      auVar66._8_8_ = 0.0 - auVar42._8_8_ * dVar38;
      auVar78._0_8_ = auVar86._0_8_ + dVar71;
      auVar78._8_8_ = auVar86._8_8_ + dVar38;
      auVar56._0_8_ = auVar66._0_8_ + dVar71;
      auVar56._8_8_ = auVar66._8_8_ + dVar38;
      auVar30._8_8_ = -(ulonglong)(0.0 <= auVar86._8_8_);
      auVar30._0_8_ = -(ulonglong)(0.0 <= auVar86._0_8_);
      auVar42 = blendvpd(auVar78,auVar86,auVar30);
      auVar31._8_8_ = -(ulonglong)(0.0 <= auVar66._8_8_);
      auVar31._0_8_ = -(ulonglong)(0.0 <= auVar66._0_8_);
      auVar40 = blendvpd(auVar56,auVar66,auVar31);
      auVar67._0_8_ = auVar42._0_8_ + -360.0;
      auVar67._8_8_ = auVar42._8_8_ + -360.0;
      auVar73._0_8_ = auVar40._0_8_ + -360.0;
      auVar73._8_8_ = auVar40._8_8_ + 0.0;
      auVar32._8_8_ = -(ulonglong)(180.0 < auVar42._8_8_);
      auVar32._0_8_ = -(ulonglong)(180.0 < auVar42._0_8_);
      auVar42 = blendvpd(auVar42,auVar67,auVar32);
      auVar33._8_8_ = -(ulonglong)(180.0 < auVar40._8_8_);
      auVar33._0_8_ = -(ulonglong)(180.0 < auVar40._0_8_);
      auVar40 = blendvpd(auVar40,auVar73,auVar33);
      *(undefined1 (*) [16])(pdVar11 + 4) = auVar42;
      dVar52 = auVar40._0_8_;
      pdVar11[6] = dVar52;
      auVar87._8_8_ = 0;
      auVar87._0_8_ = dVar52;
      auVar40 = divpd(auVar42,auVar48);
      auVar48 = divpd(auVar87,auVar48);
      auVar40 = roundpd(auVar40,auVar40,3);
      auVar48 = roundpd(auVar48,auVar48,3);
      dVar23 = (auVar42._0_8_ - auVar40._0_8_ * dVar71) * 0.008726646259971648;
      dVar93 = (auVar42._8_8_ - auVar40._8_8_ * dVar38) * 0.008726646259971648;
      dVar44 = (dVar52 - auVar48._0_8_ * dVar71) * 0.008726646259971648;
      dVar53 = (0.0 - auVar48._8_8_ * dVar38) * 0.008726646259971648;
      local_458._0_8_ = sin(dVar23);
      local_458._8_8_ = extraout_XMM0_Qb;
      dVar52 = sin(dVar93);
      dVar80 = sin(dVar44);
      sin(dVar53);
      dVar23 = cos(dVar23);
      dVar71 = cos(dVar93);
      dVar38 = cos(dVar44);
      cos(dVar53);
      *pdVar11 = (double)local_458._0_8_ * dVar52 * dVar38 - dVar23 * dVar71 * dVar80;
      pdVar11[1] = -((double)local_458._0_8_ * dVar71 * dVar38) - dVar23 * dVar52 * dVar80;
      pdVar11[2] = -(dVar71 * (double)local_458._0_8_ * dVar80) + dVar52 * dVar23 * dVar38;
      pdVar11[3] = dVar52 * (double)local_458._0_8_ * dVar80 + dVar71 * dVar23 * dVar38;
    }
    else if ((pdVar11[6] != dVar52) || (NAN(pdVar11[6]) || NAN(dVar52))) goto LAB_1414f8919;
    local_178 = (code *)*pdVar11;
    dStack_170 = pdVar11[1];
    local_168 = pdVar11[2];
    dStack_160 = pdVar11[3];
    local_1e8 = dVar50 + (double)param_1[0x35];
    dStack_1f0 = dVar51 + (double)param_1[0x34];
    local_1f8 = dVar22 + (double)param_1[0x33];
    local_500 = local_500 & 0xffffff00;
    local_508 = 0;
    FUN_144927ad4(param_1,&local_1f8,&local_178,0);
  }
  else if ((dVar50 != DAT_14c8464f0) || (NAN(dVar50) || NAN(DAT_14c8464f0))) goto LAB_1414f88c6;
  dVar51 = local_460;
  dVar22 = local_468;
  local_390 = local_468;
  local_388 = local_4b0;
  local_380 = local_460;
  (**(code **)(*param_1 + 0x478))(param_1);
  local_398 = param_3[9];
  local_3a8 = param_3[7];
  uStack_3a0 = param_3[8];
  local_508 = local_508 & 0xffffffffffffff00;
  FUN_14020f75c(param_1,&local_3a8,0,0);
  if (param_3[1] != 0) {
    cVar4 = (**(code **)(*param_1 + 0x4c8))(param_1);
    dVar80 = DAT_14c8464f0;
    dVar52 = DAT_14c8464e8;
    dVar50 = DAT_14c8464e0;
    if (cVar4 != '\0') {
      local_268 = DAT_14c846508;
      local_278 = DAT_14c8464f8;
      dStack_270 = DAT_14c846500;
      if (DAT_14cad3688 == 0) {
        local_4d0 = &local_178;
        local_178 = FUN_144b223ce;
        local_4c0 = FUN_14081d0ea;
        local_4c8 = &LAB_1417963e0;
        local_4d8 = &LAB_147a2f4c9;
        local_4e0 = &LAB_1400ea6f8;
        local_4e8 = L"Engine";
        local_4f0 = 0x200000000000;
        local_4f8 = 0x10000004;
        local_500 = 0x10;
        local_508 = CONCAT44(local_508._4_4_,0x720);
        FUN_14081cfa3(L"/Script/Engine",L"StaticMeshComponent",&DAT_14cad3688,FUN_1463bfdc8);
      }
      lVar7 = param_1[2];
      iVar6 = *(int *)(lVar7 + 0x38);
      if ((iVar6 < *(int *)(DAT_14cad3688 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14cad3688 + 0x38) * 8)
          != DAT_14cad3688 + 0x30)) {
        if (DAT_14cac7cb8 == 0) {
          local_4d0 = &local_178;
          local_178 = FUN_144a7958c;
          local_4c0 = FUN_14081d0ea;
          local_4c8 = &LAB_1417963e0;
          local_4d8 = &LAB_1478a2d90;
          local_4e0 = &LAB_146395589;
          local_4e8 = L"Engine";
          local_4f0 = 0x20000000000;
          local_4f8 = 0x10000005;
          local_500 = 0x10;
          local_508 = CONCAT44(local_508._4_4_,0xad0);
          FUN_14081cfa3(L"/Script/Engine",L"SkinnedMeshComponent",&DAT_14cac7cb8,FUN_146395562);
          lVar7 = param_1[2];
          iVar6 = *(int *)(lVar7 + 0x38);
        }
        if ((*(int *)(DAT_14cac7cb8 + 0x38) <= iVar6) &&
           (*(longlong *)
             (*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14cac7cb8 + 0x38) * 8) ==
            DAT_14cac7cb8 + 0x30)) {
          lVar7 = FUN_140229858(param_1,param_3[1]);
          if (lVar7 != 0) {
            pdVar11 = (double *)(lVar7 + 0x38);
            pdVar14 = (double *)(lVar7 + 0x40);
            pdVar16 = (double *)(lVar7 + 0x48);
            pdVar9 = (double *)(lVar7 + 0x50);
            goto LAB_1414f8cb1;
          }
        }
      }
      else {
        lVar7 = FUN_147a29a7a(param_1,param_3[1]);
        if (lVar7 != 0) {
          pdVar11 = (double *)(lVar7 + 0x30);
          pdVar14 = (double *)(lVar7 + 0x38);
          pdVar16 = (double *)(lVar7 + 0x40);
          pdVar9 = (double *)(lVar7 + 0x48);
LAB_1414f8cb1:
          dVar50 = *pdVar11;
          dVar52 = *pdVar14;
          dVar80 = *pdVar16;
          local_268 = pdVar9[2];
          local_278 = *pdVar9;
          dStack_270 = pdVar9[1];
        }
      }
      local_368 = -dVar80 * dVar51;
      dStack_370 = -dVar52 * local_4b0;
      local_378 = -dVar50 * dVar22;
      FUN_1401c9a0e(&local_278,&local_3c0);
      auVar40 = *(undefined1 (*) [16])(param_1 + 0x36);
      dVar52 = auVar40._0_8_;
      dVar80 = auVar40._8_8_;
      dVar50 = (double)param_1[0x38];
      pdVar11 = (double *)param_1[0x46];
      if (pdVar11 == (double *)0x0) {
        pdVar11 = (double *)FUN_14001cc68(0x40,0x10);
        dVar23 = DAT_14c8463d8;
        *pdVar11 = DAT_14c8463d0;
        pdVar11[1] = dVar23;
        dVar23 = DAT_14c8463e8;
        pdVar11[2] = DAT_14c8463e0;
        pdVar11[3] = dVar23;
        dVar23 = DAT_14c846500;
        pdVar11[4] = DAT_14c8464f8;
        pdVar11[5] = dVar23;
        pdVar11[6] = DAT_14c846508;
        param_1[0x46] = (longlong)pdVar11;
      }
      auVar48 = _DAT_1499387d0;
      if ((((pdVar11[4] != dVar52) || (NAN(pdVar11[4]) || NAN(dVar52))) || (pdVar11[5] != dVar80))
         || (NAN(pdVar11[5]) || NAN(dVar80))) {
LAB_1414f8d7b:
        auVar68._8_8_ = 0;
        auVar68._0_8_ = dVar50;
        dVar23 = (double)DAT_1499387d0;
        dVar71 = DAT_1499387d0._8_8_;
        auVar40 = divpd(auVar40,_DAT_1499387d0);
        auVar42 = divpd(auVar68,_DAT_1499387d0);
        auVar40 = roundpd(auVar40,auVar40,3);
        auVar42 = roundpd(auVar42,auVar42,3);
        auVar88._0_8_ = dVar52 - auVar40._0_8_ * dVar23;
        auVar88._8_8_ = dVar80 - auVar40._8_8_ * dVar71;
        auVar69._0_8_ = dVar50 - auVar42._0_8_ * dVar23;
        auVar69._8_8_ = 0.0 - auVar42._8_8_ * dVar71;
        auVar79._0_8_ = auVar88._0_8_ + dVar23;
        auVar79._8_8_ = auVar88._8_8_ + dVar71;
        auVar57._0_8_ = auVar69._0_8_ + dVar23;
        auVar57._8_8_ = auVar69._8_8_ + dVar71;
        auVar34._8_8_ = -(ulonglong)(0.0 <= auVar88._8_8_);
        auVar34._0_8_ = -(ulonglong)(0.0 <= auVar88._0_8_);
        auVar42 = blendvpd(auVar79,auVar88,auVar34);
        auVar35._8_8_ = -(ulonglong)(0.0 <= auVar69._8_8_);
        auVar35._0_8_ = -(ulonglong)(0.0 <= auVar69._0_8_);
        auVar40 = blendvpd(auVar57,auVar69,auVar35);
        auVar70._0_8_ = auVar42._0_8_ + -360.0;
        auVar70._8_8_ = auVar42._8_8_ + -360.0;
        auVar74._0_8_ = auVar40._0_8_ + -360.0;
        auVar74._8_8_ = auVar40._8_8_ + 0.0;
        auVar36._8_8_ = -(ulonglong)(180.0 < auVar42._8_8_);
        auVar36._0_8_ = -(ulonglong)(180.0 < auVar42._0_8_);
        auVar42 = blendvpd(auVar42,auVar70,auVar36);
        auVar37._8_8_ = -(ulonglong)(180.0 < auVar40._8_8_);
        auVar37._0_8_ = -(ulonglong)(180.0 < auVar40._0_8_);
        auVar40 = blendvpd(auVar40,auVar74,auVar37);
        *(undefined1 (*) [16])(pdVar11 + 4) = auVar42;
        dVar50 = auVar40._0_8_;
        pdVar11[6] = dVar50;
        auVar89._8_8_ = 0;
        auVar89._0_8_ = dVar50;
        auVar40 = divpd(auVar42,auVar48);
        auVar48 = divpd(auVar89,auVar48);
        auVar40 = roundpd(auVar40,auVar40,3);
        auVar48 = roundpd(auVar48,auVar48,3);
        dVar38 = (auVar42._0_8_ - auVar40._0_8_ * dVar23) * 0.008726646259971648;
        dVar93 = (auVar42._8_8_ - auVar40._8_8_ * dVar71) * 0.008726646259971648;
        dVar44 = (dVar50 - auVar48._0_8_ * dVar23) * 0.008726646259971648;
        dVar53 = (0.0 - auVar48._8_8_ * dVar71) * 0.008726646259971648;
        dVar50 = sin(dVar38);
        dVar52 = sin(dVar93);
        dVar80 = sin(dVar44);
        sin(dVar53);
        dVar23 = cos(dVar38);
        dVar71 = cos(dVar93);
        dVar38 = cos(dVar44);
        cos(dVar53);
        *pdVar11 = dVar50 * dVar52 * dVar38 - dVar23 * dVar71 * dVar80;
        pdVar11[1] = -(dVar50 * dVar71 * dVar38) - dVar23 * dVar52 * dVar80;
        pdVar11[2] = -(dVar71 * dVar50 * dVar80) + dVar52 * dVar23 * dVar38;
        pdVar11[3] = dVar52 * dVar50 * dVar80 + dVar71 * dVar23 * dVar38;
      }
      else if ((pdVar11[6] != dVar50) || (NAN(pdVar11[6]) || NAN(dVar50))) goto LAB_1414f8d7b;
      local_178 = (code *)*pdVar11;
      dStack_170 = pdVar11[1];
      local_168 = pdVar11[2];
      dStack_160 = pdVar11[3];
      local_1f8 = local_3c0;
      dStack_1f0 = dStack_3b8;
      local_1e8 = local_3b0;
      local_500 = local_500 & 0xffffff00;
      local_508 = 0;
      FUN_144927ad4(param_1,&local_1f8,&local_178,0);
      local_3d8 = local_278;
      dStack_3d0 = dStack_270;
      local_3c8 = local_268;
      local_508 = local_508 & 0xffffffffffffff00;
      FUN_14020f75c(param_1,&local_3d8,0,0);
    }
  }
  lVar7 = param_1[0x28];
  if ((longlong)(int)lVar7 != 0) {
    lVar2 = param_1[0x27];
    lVar17 = 0;
    do {
      plVar13 = *(longlong **)(lVar2 + lVar17);
      if (plVar13 != (longlong *)0x0) {
        lVar10 = FUN_14081cebe();
        if (((*(int *)(lVar10 + 0x38) <= *(int *)(plVar13[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar13[2] + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
             == lVar10 + 0x30)) && ((*(byte *)(plVar13 + 0x3f) & 0x10) != 0)) {
          local_3f0 = dVar22;
          local_3e8 = local_4b0;
          local_3e0 = dVar51;
          (**(code **)(*plVar13 + 0x478))(plVar13,&local_3f0);
        }
      }
      lVar17 = lVar17 + 8;
    } while ((longlong)(int)lVar7 * 8 != lVar17);
  }
LAB_1414f9064:
  if ((local_f0 ^ (ulonglong)auStack_528) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414f953a FUN_1414f953a body=59 status=ok
// SIG undefined FUN_1414f953a(void)

void FUN_1414f953a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149ec77d0;
  FUN_14691a88e();
  *param_1 = &PTR_LAB_149ec8880;
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1414f9576 FUN_1414f9576 body=334 status=ok
// SIG undefined FUN_1414f9576(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1414f9576(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_14b7a8760;
  FUN_145c19f32(param_1 + 0x80);
  if (param_1[0x7d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x78] != 0) {
    FUN_1400020a8();
  }
  FUN_148c30bcc(param_1[0x5a],*(undefined4 *)(param_1 + 0x5b));
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  lVar2 = 0x2b0;
  do {
    if (*(longlong *)((longlong)param_1 + lVar2) != 0) {
      FUN_1400020a8();
    }
    lVar2 = lVar2 + -0x28;
  } while (lVar2 != 0x170);
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar1 = (undefined8 *)param_1[1], puVar1 != (undefined8 *)0x0)) {
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar1 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x0001414f96b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 1414f96c4 FUN_1414f96c4 body=3309 status=ok
// SIG undefined FUN_1414f96c4(void)

void FUN_1414f96c4(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  char cVar6;
  int *_Src;
  undefined8 *puVar7;
  undefined4 *_Src_00;
  undefined1 *_Src_01;
  undefined1 auStack_198 [32];
  ulonglong local_178;
  undefined8 local_170;
  undefined1 *local_168;
  code *local_160;
  undefined1 local_158 [4];
  undefined4 local_154;
  undefined4 local_b4;
  undefined4 local_88;
  int local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_168 = (undefined1 *)FUN_1446ddbd2();
      local_160 = FUN_1468d96f0;
      local_170 = 0;
      local_178 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_40);
            goto LAB_1414f97c1;
          }
        }
        puVar7 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_40) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_40,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_40,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_40,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_40,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
LAB_1414f97c1:
  local_48 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_168 = (undefined1 *)FUN_1446ddbd2();
      local_160 = FUN_1468d96f0;
      local_170 = 0;
      local_178 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_48);
            goto LAB_1414f9897;
          }
        }
        puVar7 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_48) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_48,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_48,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_48,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_48,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
LAB_1414f9897:
  local_50 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_168 = (undefined1 *)FUN_1446ddbd2();
      local_160 = FUN_1468d96f0;
      local_170 = 0;
      local_178 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_50);
            goto LAB_1414f996d;
          }
        }
        puVar7 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_50) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_50,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_50,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_50,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_50,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
LAB_1414f996d:
  local_54 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_160 = FUN_1405ebbb2;
      local_168 = &DAT_14c9520b8;
      local_170 = 0;
      local_178 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_54);
            goto LAB_1414f9a42;
          }
        }
        _Src_00 = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src_00 != &local_54) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_54,_Src_00,(int)plVar1[6]);
          }
          else {
            memcpy(&local_54,_Src_00,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_54,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_54,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
LAB_1414f9a42:
  local_58 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_168 = (undefined1 *)FUN_1446ddbd2();
      local_160 = FUN_14067a048;
      local_170 = 0;
      local_178 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_58);
            goto LAB_1414f9b15;
          }
        }
        _Src = (int *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_58) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_58,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_58,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_58,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_58,lVar2);
      }
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
LAB_1414f9b15:
  iVar5 = local_58;
  memset(local_158,0,0x100);
  local_88 = 0xffffffff;
  local_154 = 0x3f800000;
  local_b4 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,local_158);
            goto LAB_1414f9bec;
          }
        }
        _Src_01 = (undefined1 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src_01 != local_158) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,local_158,_Src_01,(int)plVar1[6]);
          }
          else {
            memcpy(local_158,_Src_01,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,local_158,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,local_158,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_158);
  }
LAB_1414f9bec:
  local_168 = local_158;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_168 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_170 = CONCAT71(local_170._1_7_,iVar5 != 0);
  local_178 = CONCAT44(local_178._4_4_,local_54);
  FUN_1414fa3b2(param_1,local_40,local_48,local_50);
  if ((local_38 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414fa3b2 FUN_1414fa3b2 body=277 status=ok
// SIG undefined FUN_1414fa3b2(void)

void FUN_1414fa3b2(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined4 param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  
  if ((param_3 != 0) && ((*(byte *)(param_3 + 0x62) & 4) != 0)) {
    iVar3 = *(int *)(param_1 + 0x680);
    *(uint *)(param_1 + 0x680) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x684) < iVar3 + 1U) {
      FUN_1414fa4c8((longlong *)(param_1 + 0x678),iVar3);
    }
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x678) + (longlong)iVar3 * 0x48);
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[8] = 0;
    FUN_140871de8(puVar1,param_3);
    if (param_4 == 0) {
      *(undefined4 *)(puVar1 + 4) = 0;
      iVar3 = 0;
    }
    else {
      uVar2 = *(uint *)(param_4 + 0xc);
      *(uint *)(puVar1 + 4) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      iVar3 = *(int *)(lVar4 + 0x10);
      if (*(int *)(lVar4 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        iVar5 = DAT_14c964868 + 1;
        bVar6 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar6) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar5);
        }
        LOCK();
        iVar3 = *(int *)(lVar4 + 0x10);
        bVar6 = iVar3 == 0;
        if (bVar6) {
          *(int *)(lVar4 + 0x10) = iVar5;
          iVar3 = 0;
        }
        UNLOCK();
        if (bVar6) {
          iVar3 = iVar5;
        }
      }
    }
    *(int *)((longlong)puVar1 + 0x24) = iVar3;
    *(undefined4 *)(puVar1 + 5) = param_5;
  }
  return;
}



// FUNCTION 1414fa4c8 FUN_1414fa4c8 body=373 status=ok
// SIG undefined FUN_1414fa4c8(void)

void FUN_1414fa4c8(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x48;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1414fa551;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_1414fa551:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x48)) {
    uVar7 = uVar5 / 0x48 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x48,8);
  return;
}



// FUNCTION 1414fa63e FUN_1414fa63e body=824 status=ok
// SIG undefined FUN_1414fa63e(void)

int * FUN_1414fa63e(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  byte bVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  longlong *plVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar18 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar18 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar18) {
      FUN_14055df60(param_1,iVar18);
    }
    iVar15 = (int)param_1[5];
    if (iVar15 == 0) {
      iVar9 = -1;
    }
    else {
      iVar9 = iVar15 + 0x1e;
      if (-1 < iVar15 + -1) {
        iVar9 = iVar15 + -1;
      }
      iVar9 = iVar9 >> 5;
    }
    plVar11 = param_1 + 2;
    iVar13 = iVar15 + 1;
    iVar17 = iVar15 + 0x1f;
    if (-1 < iVar15) {
      iVar17 = iVar15;
    }
    if (iVar17 >> 5 == iVar9) {
      *(int *)(param_1 + 5) = iVar13;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar15) {
        if (iVar15 + 0x20U < 0xa0) {
          iVar13 = 0x80;
          iVar9 = iVar15;
        }
        else {
          uVar19 = iVar15 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar20 = 4;
            if (4 < uVar19) {
              uVar20 = uVar19;
            }
          }
          else {
            uVar20 = (uVar19 * 3 >> 3) + uVar19 + 0x10;
          }
          uVar14 = FUN_144a3809e(uVar20 << 2,0);
          iVar9 = (int)(uVar14 >> 2);
          iVar13 = -0x20;
          if ((int)uVar19 <= iVar9) {
            iVar13 = iVar9 << 5;
          }
          iVar9 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar13;
        FUN_1446efbd8(plVar11,iVar9);
        iVar13 = (int)param_1[5] + 1;
      }
      iVar9 = iVar13 + 0x1f;
      if (-1 < iVar13) {
        iVar9 = iVar13;
      }
      *(int *)(param_1 + 5) = iVar13;
      if (iVar13 % 0x20 != 0) {
        plVar16 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar16 = plVar11;
        }
        bVar12 = -(char)(iVar13 % 0x20);
        *(uint *)((longlong)plVar16 + (longlong)(iVar9 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar16 + (longlong)(iVar9 >> 5) * 4) << (bVar12 & 0x1f)) >>
             (bVar12 & 0x1f);
      }
    }
    lVar10 = (longlong)iVar18;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[4];
    }
    bVar12 = (byte)iVar15 & 0x1f;
    puVar1 = (uint *)((longlong)plVar11 + (longlong)(iVar17 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar12 | 0xfffffffeU >> 0x20 - bVar12);
  }
  else {
    iVar18 = (int)param_1[6];
    lVar10 = (longlong)iVar18;
    iVar15 = *(int *)(*param_1 + 4 + lVar10 * 0x28);
    *(int *)(param_1 + 6) = iVar15;
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar15 * 0x28) = 0xffffffff;
    }
  }
  plVar11 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar11 = (longlong *)param_1[4];
  }
  iVar15 = iVar18 + 0x1f;
  if (-1 < iVar18) {
    iVar15 = iVar18;
  }
  puVar1 = (uint *)((longlong)plVar11 + (longlong)(iVar15 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar18 & 0x1f);
  iVar15 = 1;
  plVar11 = (longlong *)(*param_1 + lVar10 * 0x28);
  puVar2 = (undefined4 *)param_3[1];
  lVar10 = *(longlong *)*param_3;
  *plVar11 = lVar10;
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  *(undefined4 *)(plVar11 + 1) = *puVar2;
  *(undefined4 *)((longlong)plVar11 + 0xc) = uVar3;
  *(undefined4 *)(plVar11 + 2) = uVar4;
  *(undefined4 *)((longlong)plVar11 + 0x14) = uVar5;
  plVar11[3] = *(longlong *)(puVar2 + 4);
  *(undefined4 *)(plVar11 + 4) = 0xffffffff;
  uVar19 = (uint)((ulonglong)lVar10 >> 0x10);
  uVar20 = (uint)lVar10 & 0xffff;
  uVar19 = ((uint)lVar10 << 0x10 | uVar20) + (int)((ulonglong)lVar10 >> 0x20) +
           (uVar19 << 0x13 | uVar19 & 0xffff) + (uVar20 >> 4);
  uVar20 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar20 != 0) && (uVar20 != 1)) {
    plVar16 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar16 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar16 + (ulonglong)((int)param_1[9] - 1U & uVar19) * 4);
    if (iVar9 != -1) {
      do {
        plVar16 = (longlong *)(*param_1 + (longlong)iVar9 * 0x28);
        if (*plVar16 == lVar10) {
          lVar10 = *plVar11;
          uVar3 = *(undefined4 *)((longlong)plVar11 + 4);
          lVar7 = plVar11[1];
          uVar4 = *(undefined4 *)((longlong)plVar11 + 0xc);
          uVar5 = *(undefined4 *)((longlong)plVar11 + 0x14);
          lVar8 = plVar11[3];
          uVar6 = *(undefined4 *)((longlong)plVar11 + 0x1c);
          *(int *)(plVar16 + 2) = (int)plVar11[2];
          *(undefined4 *)((longlong)plVar16 + 0x14) = uVar5;
          *(int *)(plVar16 + 3) = (int)lVar8;
          *(undefined4 *)((longlong)plVar16 + 0x1c) = uVar6;
          *(int *)plVar16 = (int)lVar10;
          *(undefined4 *)((longlong)plVar16 + 4) = uVar3;
          *(int *)(plVar16 + 1) = (int)lVar7;
          *(undefined4 *)((longlong)plVar16 + 0xc) = uVar4;
          FUN_147a757fa(param_1,iVar18);
          goto LAB_1414fa827;
        }
        iVar9 = (int)plVar16[4];
      } while (iVar9 != -1);
    }
  }
  if (3 < uVar20) {
    uVar14 = (ulonglong)(uVar20 & 0xfffffffe) + 0xf;
    lVar10 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar15 = 1 << ((byte)lVar10 & 0x1f);
  }
  iVar9 = iVar18;
  if (((int)uVar20 < 1) || (iVar15 <= (int)param_1[9])) {
    uVar19 = (int)param_1[9] - 1U & uVar19;
    *(uint *)((longlong)plVar11 + 0x24) = uVar19;
    plVar16 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar16 = param_1 + 7;
    }
    *(undefined4 *)(plVar11 + 4) =
         *(undefined4 *)
          ((longlong)plVar16 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar19) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar19) * 4) =
         iVar18;
  }
  else {
    *(int *)(param_1 + 9) = iVar15;
    FUN_1414fa976(param_1);
  }
LAB_1414fa827:
  *param_2 = iVar9;
  return param_2;
}



// FUNCTION 1414fa976 FUN_1414fa976 body=611 status=ok
// SIG undefined FUN_1414fa976(void)

void FUN_1414fa976(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar6 = *(uint *)(param_1 + 9);
  if (uVar6 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar6,4);
    if (0 < (int)uVar6) {
      uVar4 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar6 != uVar4);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar9 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar9 = local_68 >> 0x20;
    }
    iVar5 = (int)local_68;
    uVar6 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar12 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar14 = *param_1;
        lVar13 = (longlong)iVar7;
        uVar2 = *(undefined8 *)(lVar14 + lVar13 * 0x28);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x24 + lVar13 * 0x28) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0x20 + lVar13 * 0x28) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7
        ;
        uVar6 = ~(uint)uVar9 & uVar6;
        plVar8 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar8 = local_60;
        }
        iVar10 = (int)local_60[3];
        lVar14 = (longlong)iVar5;
        uVar4 = *(uint *)((longlong)plVar8 + lVar14 * 4) & uVar6;
        if (uVar4 == 0) {
          iVar7 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar7 = iVar10 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar5) {
            iVar3 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar13 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar13 * 4 + lVar14 * 4 + 4);
            if (uVar4 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar3 - lVar14 == lVar13) goto LAB_1414fab73;
          }
          iVar5 = iVar5 + (int)lVar13 + 1;
          uVar6 = 0xffffffff;
        }
        uVar9 = (ulonglong)(-uVar4 & uVar4);
        uVar11 = uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar10);
    }
  }
LAB_1414fab73:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414fabda FUN_1414fabda body=485 status=ok
// SIG undefined FUN_1414fabda(void)

void FUN_1414fabda(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 1414fadc0 FUN_1414fadc0 body=164 status=ok
// SIG undefined FUN_1414fadc0(void)

void FUN_1414fadc0(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"MeshPaintTexture";
  local_38 = 0x10;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"MeshPaintTexture";
  local_38 = 0x10;
  FUN_140208c1e(&DAT_14caeaab8,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414fae66 FUN_1414fae66 body=1509 status=ok
// SIG undefined FUN_1414fae66(void)

undefined4 * FUN_1414fae66(longlong *param_1,undefined4 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  byte bVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined *puVar11;
  longlong *plVar12;
  int iVar13;
  undefined8 ****ppppuVar14;
  int iVar15;
  undefined1 auStack_258 [32];
  undefined4 local_238;
  undefined4 local_230;
  undefined4 local_228;
  undefined8 local_220;
  wchar_t *local_218;
  undefined1 *local_210;
  undefined1 *local_208;
  code **local_200;
  undefined1 *local_1f8;
  code *local_1f0;
  longlong local_1e8;
  int local_1dc;
  longlong local_1d8;
  longlong local_1d0;
  longlong *local_1c8;
  undefined1 local_1c0 [16];
  longlong *local_1b0 [15];
  longlong local_134;
  longlong local_e0;
  code *local_a0 [2];
  longlong *local_90;
  int local_78;
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_258;
  lVar10 = *param_3;
  if (lVar10 == 0) {
LAB_1414faf17:
    lVar9 = FUN_1412095fe(&DAT_14cbd5ed0);
    if (lVar9 == 0) {
      *param_2 = 0xffffffff;
      goto LAB_1414fb0a4;
    }
  }
  else {
    lVar8 = *(longlong *)(lVar10 + 0x50);
    if (lVar8 == 0) {
      uVar7 = FUN_141209660();
      lVar8 = FUN_14477b664(uVar7);
      *(longlong *)(lVar10 + 0x50) = lVar8;
    }
    lVar9 = *(longlong *)(lVar10 + 0x58);
    if (lVar9 == 0) {
      if ((lVar8 != 0) && (*(longlong *)(lVar10 + 0x48) != 0)) {
        plVar12 = *(longlong **)(lVar8 + 0xb8);
        if ((plVar12 == (longlong *)0x0) ||
           (cVar6 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar6 == '\0')) {
          *(undefined8 *)(lVar10 + 0x58) = 0;
        }
        else {
          uVar7 = (**(code **)(*plVar12 + 0x110))(plVar12);
          lVar9 = FUN_144aff482(uVar7,(longlong *)(lVar10 + 0x48));
          *(longlong *)(lVar10 + 0x58) = lVar9;
          if (lVar9 != 0) goto LAB_1414faf2f;
        }
      }
      goto LAB_1414faf17;
    }
  }
LAB_1414faf2f:
  FUN_1412099d2(param_1,&DAT_14cbd5aa8);
  FUN_141209dde(local_1c0,lVar9);
  plVar12 = local_1b0[0];
  if (*(code **)(*local_1b0[0] + 0x50) != FUN_144828418) {
    plVar12 = (longlong *)(**(code **)(*local_1b0[0] + 0x50))();
  }
  FUN_1447a1fc0(plVar12);
  pcVar3 = *(code **)(*local_1b0[0] + 0x28);
  if (pcVar3 == FUN_14482841c) {
    plVar12 = local_1b0[0] + 3;
    if (local_1b0[0][5] != 0) {
      plVar12 = (longlong *)(local_1b0[0][5] + 8);
    }
  }
  else if (pcVar3 == (code *)&LAB_14010c34c) {
    plVar12 = local_1b0[0] + 2;
  }
  else {
    plVar12 = (longlong *)(*pcVar3)(local_1b0[0]);
  }
  if ((int)plVar12[1] < 2) {
    FUN_141302464(param_3,local_70);
    FUN_140233b1a(local_a0,local_70);
    FUN_140008f88(local_1b0,local_a0);
    if (local_a0[0] != (code *)0x0) {
      (**(code **)(*(longlong *)local_a0[0] + 0x10))();
    }
    if ((undefined8 ****)local_70[0] != (undefined8 ****)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_134 == 0) {
    if (*param_3 == 0) {
      local_134 = 0;
    }
    else {
      local_134 = *(longlong *)(*param_3 + 0x3c);
    }
  }
  uVar7 = (**(code **)(*param_1 + 0x180))(param_1);
  lVar10 = FUN_1406f612e(uVar7);
  if ((lVar10 != 0) && (lVar8 = FUN_141356c7a(param_1 + 6), lVar8 != 0)) {
    if (DAT_14cbae3d8 == 0) {
      local_200 = local_a0;
      local_a0[0] = FUN_141030f22;
      local_1f0 = FUN_14081d0ea;
      local_1f8 = &LAB_1464f5fc4;
      local_208 = &LAB_148c3dd26;
      local_210 = &LAB_1459673ba;
      local_218 = L"Engine";
      local_220 = 0;
      local_228 = 0x10000004;
      local_230 = 0x10;
      local_238 = 0x1360;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
    }
    if (((((*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
            (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) == DAT_14cbae3d8 + 0x30)) &&
         (lVar10 = FUN_1403362f0(lVar10,*(undefined4 *)(lVar8 + 0x394),param_3), lVar10 != 0)) &&
        ((lVar8 = *param_3, lVar8 != 0 && (*(byte *)(lVar10 + 0x10) < *(byte *)(lVar8 + 0x4a0)))))
       && (((ulonglong)((uint)*(byte *)(lVar10 + 0x10) * 0x50) + *(longlong *)(lVar8 + 0x498) !=
            -0x10 && ((lVar10 = FUN_1418a5c14(), lVar10 != 0 &&
                      ((longlong)*(int *)(lVar10 + 0x20) != 0)))))) {
      lVar8 = *(longlong *)(lVar10 + 0x18);
      lVar10 = (longlong)*(int *)(lVar10 + 0x20) * 0x18;
      do {
        FUN_145abbe7e(lVar8,&local_1d0);
        if (local_1d0 != 0) {
          lVar9 = local_1d0 + 0x20;
          local_a0[0] = (code *)((ulonglong)local_a0[0] & 0xffffffffffffff00);
          local_78 = 0;
          FUN_14575a19a(local_a0,0);
          FUN_1448729ea(lVar9,local_70,local_a0);
          local_1dc = FUN_14005fbd2(local_70,0);
          pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
          if (pcVar3 != (code *)0x0) {
            ppppuVar14 = local_70;
            if (0x18 < local_58) {
              ppppuVar14 = (undefined8 ****)local_70[0];
            }
            (*pcVar3)(ppppuVar14);
          }
          if (0x18 < local_58) {
            FUN_1400020a8(local_70[0]);
          }
          if ((longlong)local_78 != 0) {
            lVar9 = (longlong)local_78 + -1;
            local_1d8 = DAT_14c9a3da0;
            local_1e8 = lVar9 * 0x10;
            FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + local_1e8),
                          *(undefined4 *)(DAT_14c9a3da0 + 8 + local_1e8));
            if (*(longlong *)(local_1d8 + local_1e8) != 0) {
              FUN_1400020a8();
            }
            lVar5 = DAT_14c9a3da0;
            iVar15 = (int)lVar9;
            if (DAT_14c9a3dd4 != 0) {
              *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar15;
            }
            *(undefined4 *)(lVar5 + local_1e8) = 0xffffffff;
            iVar13 = -1;
            if (0 < DAT_14c9a3dd4) {
              iVar13 = DAT_14c9a3dd0;
            }
            *(int *)(lVar5 + 4 + local_1e8) = iVar13;
            DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
            puVar11 = DAT_14c9a3dc0;
            if (DAT_14c9a3dc0 == (undefined *)0x0) {
              puVar11 = &DAT_14c9a3db0;
            }
            iVar13 = iVar15 + 0x1f;
            if (-1 < iVar15) {
              iVar13 = iVar15;
            }
            bVar4 = (byte)lVar9 & 0x1f;
            DAT_14c9a3dd0 = iVar15;
            *(uint *)(puVar11 + (longlong)(iVar13 >> 5) * 4) =
                 *(uint *)(puVar11 + (longlong)(iVar13 >> 5) * 4) &
                 (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
            local_78 = 0;
          }
          if (((char)local_a0[0] == '\x03') && (local_90 != (longlong *)0x0)) {
            LOCK();
            piVar2 = (int *)((longlong)local_90 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_90 + 0x10))();
            }
          }
          local_e0 = (longlong)local_1dc;
        }
        plVar12 = local_1c8;
        if (local_1c8 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_1c8 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_1c8)(local_1c8);
            LOCK();
            piVar2 = (int *)((longlong)plVar12 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
        }
        lVar8 = lVar8 + 0x18;
        lVar10 = lVar10 + -0x18;
      } while (lVar10 != 0);
    }
  }
  FUN_14120969a(param_1,param_2,local_1c0);
  FUN_140989dc4(local_1c0);
LAB_1414fb0a4:
  if ((local_48 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1414fb44c FUN_1414fb44c body=117 status=ok
// SIG undefined FUN_1414fb44c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1414fb44c(void)

{
  _DAT_14caf7cb0 = &PTR_LAB_149e668b0;
  _DAT_14caf7cb8 = 0;
  FUN_1405bceb4(&DAT_14caf7cb0);
  _DAT_14caf7cb0 = &PTR_FUN_14a3ef500;
  _DAT_14caf7cc0 = 0;
  _DAT_14caf7cc8 = L"/Engine/EditorResources/S_KBSJoint";
  _DAT_14caf7cd0 = 0;
  FUN_1446f470e(&DAT_14caf7cd8,L"Physics",1);
  return;
}



// FUNCTION 1414fb4c2 FUN_1414fb4c2 body=517 status=ok
// SIG undefined FUN_1414fb4c2(void)

void FUN_1414fb4c2(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
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
  uVar5 = *(uint *)(param_1 + 9);
  uVar3 = local_70;
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      do {
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)((longlong)plVar4 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar5 != uVar8);
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
    uVar3 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar9 = local_70._4_4_;
      local_70 = uVar3;
      do {
        lVar2 = *local_88;
        uVar7 = *(ulonglong *)(lVar2 + (longlong)iVar9 * 0x18);
        if ((DAT_14c950c29 == '\x01') && (uVar7 != 0)) {
          FUN_1456cec3c(uVar7);
        }
        lVar2 = lVar2 + (longlong)iVar9 * 0x18;
        uVar5 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar7 = (longlong)(int)(uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x14) = iVar6;
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10) =
             *(undefined4 *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(int *)((longlong)plVar4 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar9 = local_70._4_4_;
        uVar3 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414fb6c8 FUN_1414fb6c8 body=322 status=ok
// SIG undefined FUN_1414fb6c8(void)

void FUN_1414fb6c8(longlong param_1)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_a8 [40];
  char *local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  int local_48;
  code *local_40;
  longlong *local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    lVar2 = FUN_1414fb80c();
    if (lVar2 != 0) {
      lVar3 = FUN_1447210f0(lVar2);
      if (lVar3 != 0) {
        FUN_140212f8e(&local_30);
        auVar1 = SEXT816(local_30 - *(longlong *)(param_1 + 0x80)) * SEXT816(0x346dc5d63886594b);
        local_48 = (int)(auVar1._8_8_ >> 0xb) - (auVar1._12_4_ >> 0x1f);
        local_58 = *(longlong *)(lVar2 + 0x3d0);
        if (local_58 == 0) {
          local_58 = *(longlong *)(lVar2 + 0x7a0);
        }
        local_50 = *(undefined8 *)(lVar2 + 0x608);
        local_38 = &local_60;
        local_40 = FUN_143eecbee;
        local_70 = "map_disconnect";
        local_68 = "";
        local_80 = "bifrost_ue4_content_load";
        local_78 = "";
        local_60 = lVar3;
        bifrost::telemetry::raiseEvent(*(undefined8 *)(param_1 + 0x50));
        *(longlong *)(param_1 + 0x80) = local_30;
        bifrost::telemetry::flush();
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414fb80c FUN_1414fb80c body=104 status=ok
// SIG undefined FUN_1414fb80c(void)

undefined8 FUN_1414fb80c(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (((*(int *)(param_1 + 0x5c) != 0) && (uVar1 = *(uint *)(param_1 + 0x58), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar3 != (undefined8 *)0x0) && (*(int *)(puVar3 + 2) == *(int *)(param_1 + 0x5c))) &&
       (((*(uint *)(puVar3 + 1) & 0x10200000) == 0 && (*(int *)(param_1 + 0x60) != -1)))) {
      if ((*(uint *)(puVar3 + 1) & 0x10200000) == 0) {
        uVar2 = FUN_1414fb874(*puVar3);
        return uVar2;
      }
      uVar2 = FUN_1414fb874(0);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1414fb874 FUN_1414fb874 body=353 status=ok
// SIG undefined FUN_1414fb874(void)

longlong FUN_1414fb874(undefined8 param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  lVar3 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar3 == 0) {
    return 0;
  }
  lVar8 = *(longlong *)(lVar3 + 0x1f0);
  if (lVar8 != 0) {
    uVar7 = 0;
    if (*(longlong *)(lVar8 + 0x30) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(longlong *)(*(longlong *)(lVar8 + 0x30) + 0x360);
    }
    if (lVar6 == lVar3) {
      bVar2 = true;
      if ((longlong)*(int *)(lVar8 + 0x40) != 0) {
        lVar6 = 0;
        uVar7 = 0;
        do {
          lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x38) + lVar6) + 0x30);
          if (lVar4 != 0) {
            if (uVar7 == param_2) {
              return lVar4;
            }
            uVar7 = uVar7 + 1;
          }
          lVar6 = lVar6 + 8;
        } while ((longlong)*(int *)(lVar8 + 0x40) * 8 != lVar6);
      }
      goto LAB_1414fb922;
    }
  }
  uVar7 = 0;
  bVar2 = false;
LAB_1414fb922:
  lVar8 = *(longlong *)(lVar3 + 0x178);
  if ((lVar8 != 0) && (iVar1 = *(int *)(lVar8 + 0x3b0), (longlong)iVar1 != 0)) {
    lVar8 = *(longlong *)(lVar8 + 0x3a8);
    lVar6 = 0;
    do {
      if (((*(longlong *)(lVar8 + lVar6) != 0) && (lVar4 = FUN_1401b2ade(), lVar4 != 0)) &&
         ((!bVar2 || (lVar5 = FUN_144a7ba4c(lVar4), lVar5 == 0)))) {
        if (uVar7 == param_2) {
          return lVar4;
        }
        uVar7 = uVar7 + 1;
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  if ((uVar7 == 0) && (0 < *(int *)(lVar3 + 0x238))) {
    lVar8 = 0;
    uVar9 = 0;
    do {
      lVar6 = FUN_14479d2ce(*(longlong *)(lVar3 + 0x230) + lVar8);
      if (param_2 == uVar9) {
        return lVar6;
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar9 < *(int *)(lVar3 + 0x238));
    return 0;
  }
  return 0;
}



// FUNCTION 1414fb9d6 FUN_1414fb9d6 body=44 status=ok
// SIG undefined FUN_1414fb9d6(void)

void FUN_1414fb9d6(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x30);
  plVar2 = (longlong *)(param_1 + 0x50);
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_1 + 0x40);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001414fb9ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}



// FUNCTION 1414fba02 FUN_1414fba02 body=765 status=ok
// SIG undefined FUN_1414fba02(void)

void FUN_1414fba02(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar7 = DAT_14cbf4b20 + -1;
  if (DAT_14cbf4b20 == 0) {
    iVar7 = 0;
  }
  if (0 < iVar7) {
    iVar10 = 0;
    do {
      iVar10 = iVar10 + 1;
    } while (iVar7 != iVar10);
  }
  uVar8 = FUN_14152bbd0(param_1 + 0x40);
  (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,&local_50);
  local_40 = local_50;
  local_38 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  FUN_146008bf8(uVar8,&local_40);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,&local_60);
  plVar1 = local_58;
  plVar9 = (longlong *)(param_1 + 0x90);
  if (local_58 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
    local_38 = local_58;
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
  }
  uVar6 = (**(code **)(*local_60 + 0x40))();
  iVar7 = FUN_1460361b4(plVar9,uVar6,&local_40);
  plVar4 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
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
  plVar1 = local_58;
  if (iVar7 != -1) {
    lVar5 = *(longlong *)(*param_2 + 0x18);
    if (local_58 == (longlong *)0x0) {
      local_38 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
      local_38 = local_58;
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
    }
    uVar6 = (**(code **)(*local_60 + 0x40))();
    iVar7 = FUN_1460361b4(plVar9,uVar6,&local_40);
    plVar4 = local_38;
    if (iVar7 == -1) {
      lVar11 = 0;
    }
    else {
      lVar11 = (longlong)iVar7 * 0x20 + *plVar9;
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_38 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar1 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar1)(plVar1);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
      LOCK();
      plVar9 = plVar1 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    if (*(longlong *)(lVar11 + 0x10) != 0) {
      FUN_14480f766(lVar5 + 0x188);
    }
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)local_58 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_58 + 0x10))(local_58);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414fbd00 FUN_1414fbd00 body=923 status=ok
// SIG undefined FUN_1414fbd00(void)

void FUN_1414fbd00(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  longlong local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong *plStack_a0;
  undefined1 local_98 [16];
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *plStack_50;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,&local_68);
  local_58 = local_68;
  plStack_50 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
    UNLOCK();
  }
  FUN_145bf707e(param_1 + 0x71,&local_58);
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
      }
    }
  }
  (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,&local_78);
  local_58 = local_78;
  plStack_50 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
  }
  FUN_1459b0790(param_1 + 0x85,&local_58);
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
  (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,&local_88);
  local_58 = local_88;
  plStack_50 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
  }
  iVar3 = FUN_145d234a6(param_1 + 0x8f,&local_58);
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_80 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)local_80 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_80 + 0x10))(local_80);
      }
    }
  }
  (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,local_98);
  iVar4 = FUN_1459b6cd8(param_1 + 0x99,local_98);
  if (0 < iVar4) {
    if (iVar3 != 0) {
      FUN_140056680(&local_58,L"User logged out");
      (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,&local_a8);
      (**(code **)(*param_1 + 0x228))(param_1,local_a8,0,&local_58);
      if (plStack_a0 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_a0 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plStack_a0)(plStack_a0);
          LOCK();
          piVar1 = (int *)((longlong)plStack_a0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
          }
        }
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    param_1 = param_1 + 0xa3;
    local_a8 = 0;
    plStack_a0 = (longlong *)0x0;
    (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,&local_b8);
    local_58 = local_b8;
    plStack_50 = local_b0;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
      UNLOCK();
    }
    FUN_1461c5172(param_1,&local_44,&local_58);
    if ((longlong)local_44 != -1) {
      FUN_145e068c0(&local_a8,*param_1 + (longlong)local_44 * 0x28 + 0x10);
      FUN_1461e1420(param_1,local_44);
    }
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_b0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar1 = (int *)((longlong)local_b0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_b0 + 0x10))(local_b0);
        }
      }
    }
    uVar5 = (ulonglong)plStack_a0 & 0xffffffff;
    if (local_44 != -1) {
      if ((int)plStack_a0 == 0) {
        uVar5 = 0;
      }
      else {
        lVar7 = (longlong)(int)plStack_a0 << 5;
        lVar6 = local_a8;
        do {
          local_58 = 0;
          plStack_50 = (longlong *)0x0;
          if ((*(int *)(lVar6 + 0x18) != 0) &&
             (plVar2 = *(longlong **)(lVar6 + 0x10), plVar2 != (longlong *)0x0)) {
            local_c8 = &local_58;
            (**(code **)(*plVar2 + 0x60))(plVar2,*(undefined4 *)(*param_2 + 0x10),1,lVar6);
            if (local_58 != 0) {
              FUN_1400020a8();
            }
          }
          lVar6 = lVar6 + 0x20;
          lVar7 = lVar7 + -0x20;
        } while (lVar7 != 0);
        uVar5 = (ulonglong)plStack_a0 & 0xffffffff;
      }
    }
    FUN_145e06910(local_a8,uVar5);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414fc09c FUN_1414fc09c body=145 status=ok
// SIG undefined FUN_1414fc09c(void)

undefined8 * FUN_1414fc09c(undefined8 *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  lVar2 = 0;
  *param_1 = 0;
  param_1[0x10] = 0;
  FUN_141358738(param_1 + 0x20);
  puVar1 = (undefined4 *)FUN_14001cc68(0x2018);
  *puVar1 = 0;
  memset(puVar1 + 4,0,0x1ff8);
  *(undefined8 *)(puVar1 + 0x804) = 0;
  *(undefined8 *)(puVar1 + 2) = 0;
  do {
    *(undefined8 *)(puVar1 + 4 + lVar2 * 2) = 0;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x3ff);
  puVar1[0x802] = 0;
  *param_1 = puVar1;
  param_1[0x10] = puVar1;
  return param_1;
}



// FUNCTION 1414fc12e FUN_1414fc12e body=88 status=ok
// SIG undefined FUN_1414fc12e(void)

undefined8 * FUN_1414fc12e(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x630);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0xf8,0x10);
    FUN_145c3adc2(puVar1,param_1 + -0x1e8);
    *puVar1 = &PTR_FUN_14b9640e0;
    *(undefined8 **)(param_1 + 0x630) = puVar1;
  }
  return puVar1;
}



// FUNCTION 1414fc186 FUN_1414fc186 body=715 status=ok
// SIG undefined FUN_1414fc186(void)

undefined8 * FUN_1414fc186(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(byte *)((longlong)param_1 + 0x14) = *(byte *)((longlong)param_1 + 0x14) & 0xf8;
  *param_1 = &PTR_FUN_14a8379b0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  uVar3 = DAT_14c8462f8._4_4_;
  uVar2 = (undefined4)DAT_14c8462f8;
  uVar1 = DAT_14c8462f0._4_4_;
  *(undefined4 *)(param_1 + 0xd) = (undefined4)DAT_14c8462f0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0xe) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar3;
  param_1[0xf] = DAT_14c846300;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x3e000000;
  *(byte *)((longlong)param_1 + 0xb4) = *(byte *)((longlong)param_1 + 0xb4) & 0xfe;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  if (DAT_14cac0fa8 == (longlong *)0x0) {
    local_40 = &local_28;
    local_28 = FUN_141030f22;
    local_30 = FUN_14081d0ea;
    local_38 = (code *)&LAB_141117124;
    local_48 = &LAB_14786c867;
    local_50 = (code *)&LAB_145abcadb;
    local_58 = L"Game";
    local_60 = 0;
    local_68 = 0x10000004;
    local_70 = 8;
    local_78 = 0x438;
    FUN_14081cfa3(L"/Script/Engine",L"GameNetworkManager",&DAT_14cac0fa8,&DAT_14786c866);
  }
  plVar4 = DAT_14cac0fa8;
  lVar5 = DAT_14cac0fa8[0x22];
  if (lVar5 == 0) {
    (**(code **)(*DAT_14cac0fa8 + 1000))(DAT_14cac0fa8);
    lVar5 = plVar4[0x22];
    if (lVar5 != 0) goto LAB_1414fc263;
  }
  else {
LAB_1414fc263:
    *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(lVar5 + 0x3f0);
  }
  lVar5 = *(longlong *)(param_2 + 0xb0);
  if ((lVar5 == 0) &&
     (((*(longlong *)(param_2 + 0xa8) == 0 ||
       ((*(uint *)(*(longlong *)(param_2 + 0xa8) + 8) & 0x10) != 0)) ||
      (lVar5 = FUN_1447210f0(), lVar5 == 0)))) {
    lVar5 = *(longlong *)(param_2 + 0x20);
    if (lVar5 == 0) goto LAB_1414fc2c2;
    if (DAT_14cb10130 == 0) {
      local_40 = &local_28;
      local_28 = FUN_140754f84;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_147da9a76;
      local_50 = FUN_1409f3105;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x990;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(DAT_14cb10130 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) != DAT_14cb10130 + 0x30)) goto LAB_1414fc2c2;
  }
  *(float *)((longlong)param_1 + 0xcc) = (float)*(double *)(lVar5 + 0x6d0);
  *(float *)(param_1 + 1) = (float)*(double *)(lVar5 + 0x6d0);
LAB_1414fc2c2:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1414fc452 FUN_1414fc452 body=226 status=ok
// SIG undefined FUN_1414fc452(void)

void FUN_1414fc452(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x260;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,0x10);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x260)) {
      uVar2 = uVar1 / 0x260 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x260,0x10);
  }
  return;
}



// FUNCTION 1414fc534 FUN_1414fc534 body=96 status=ok
// SIG undefined FUN_1414fc534(void)

void FUN_1414fc534(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 << 6,0x10);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 6)) {
      uVar2 = uVar1 >> 6 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x40,0x10);
  }
  return;
}



// FUNCTION 1414fc594 FUN_1414fc594 body=1885 status=ok
// SIG undefined FUN_1414fc594(void)

void FUN_1414fc594(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  undefined8 local_40;
  undefined1 local_31;
  undefined7 uStack_30;
  undefined1 uStack_29;
  int local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uStack_20 = 0;
  uStack_1c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_20 = (undefined4)uVar2;
      uStack_1c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_20);
    }
  }
  local_24 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_14067a048;
      local_60 = 0;
      local_68 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_24);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_24);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_24 = (int)uVar2;
      uStack_20 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_24);
    }
  }
  iVar4 = local_24;
  uStack_30 = 0;
  uStack_29 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_1409e12a0;
      local_60 = 0;
      local_68 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_30);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_30 = (undefined7)uVar2;
      uStack_29 = (undefined1)((ulonglong)uVar2 >> 0x38);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_30);
    }
  }
  local_31 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_140a4831c;
      local_68 = 0x1000000008001;
      local_60 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_31);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_31);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_31 = (undefined1)uVar2;
      uStack_30 = (undefined7)((ulonglong)uVar2 >> 8);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_31);
    }
  }
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_40);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_40);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_40 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_40);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_40;
  FUN_1414fccf2(CONCAT44(uStack_1c,uStack_20),iVar4 != 0,CONCAT17(uStack_29,uStack_30),local_31);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414fccf2 FUN_1414fccf2 body=211 status=ok
// SIG undefined FUN_1414fccf2(void)

void FUN_1414fccf2(longlong param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 != 0) {
    local_68 = 0;
    uStack_60 = 0;
    local_50 = param_3;
    local_48 = param_4;
    FUN_141270afc(0,&local_68,0);
    lVar2 = local_68;
    lVar4 = (longlong)(int)uStack_60;
    if (lVar4 != 0) {
      lVar5 = 0;
      do {
        plVar1 = *(longlong **)(lVar2 + lVar5);
        if ((plVar1 != (longlong *)0x0) && (cVar3 = FUN_143893b9e(plVar1,&local_50), cVar3 != '\0'))
        {
          (**(code **)(*plVar1 + 0x650))(plVar1,param_2,param_5);
        }
        lVar5 = lVar5 + 8;
      } while (lVar4 * 8 != lVar5);
    }
    if (local_68 != 0) {
      FUN_1400020a8(local_68);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414fcdc6 FUN_1414fcdc6 body=40 status=ok
// SIG undefined FUN_1414fcdc6(void)

undefined8 FUN_1414fcdc6(undefined8 param_1,int param_2)

{
  FUN_1414fcdee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1414fcdee FUN_1414fcdee body=2059 status=ok
// SIG undefined FUN_1414fcdee(void)

void FUN_1414fcdee(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b8ef2f0;
  param_1[0x72] = &PTR_FUN_14b8ef960;
  param_1[0x73] = &PTR_FUN_14b8ef980;
  param_1[0x74] = &PTR_FUN_14b8ef9b0;
  param_1[0x75] = &PTR_FUN_14b8ef9c0;
  param_1[0x76] = &PTR_FUN_14b8efa30;
  param_1[0x77] = &PTR_FUN_14b8efa60;
  param_1[0x78] = &PTR_FUN_14b8efa90;
  param_1[0x7f] = &PTR_FUN_14b8efb40;
  param_1[0x80] = &PTR_FUN_14b8efbb0;
  param_1[0x81] = &PTR_FUN_14b8efc20;
  param_1[0x82] = &PTR_FUN_14b8efc50;
  param_1[0x83] = &PTR_FUN_14b8efc90;
  param_1[0x84] = &PTR_FUN_14b8efd30;
  param_1[0x85] = &PTR_FUN_14b8efd50;
  param_1[0x89] = &PTR_FUN_14b8efd70;
  param_1[0x8a] = &PTR_FUN_14b8efe30;
  param_1[0x8b] = &PTR_FUN_14b8efeb0;
  param_1[0x8c] = &PTR_FUN_14b8eff00;
  param_1[0x8d] = &PTR_FUN_14b8eff40;
  param_1[0x8e] = &PTR_FUN_14b8eff60;
  param_1[0x8f] = &PTR_FUN_14b8eff80;
  param_1[0x90] = &PTR_FUN_14b8effa0;
  param_1[0x91] = &PTR_FUN_14b8effc0;
  param_1[0x92] = &PTR_FUN_14b8effe0;
  param_1[0x93] = &PTR_FUN_14b8f0000;
  param_1[0x94] = &PTR_FUN_14b8f0020;
  param_1[0x95] = &PTR_FUN_14b8f0040;
  param_1[0x96] = &PTR_FUN_14b8f0060;
  param_1[0x34b] = &PTR_FUN_14b8f0080;
  param_1[0x352] = &PTR_FUN_14b8f0090;
  param_1[0x353] = &PTR_FUN_14b8f00d0;
  param_1[0x354] = &PTR_FUN_14b8f0110;
  param_1[0x355] = &PTR_FUN_14b8f0160;
  param_1[0x356] = &PTR_FUN_14b8f0190;
  param_1[0x359] = &PTR_FUN_14b8f01d0;
  param_1[0x35a] = &PTR_FUN_14b8f01e0;
  param_1[0x35b] = &PTR_FUN_14b8f0210;
  param_1[0x35c] = &PTR_FUN_14b8f02b0;
  param_1[0x4bf] = &PTR_FUN_14b8f02d0;
  FUN_144760e21(param_1[0x573],*(undefined4 *)(param_1 + 0x574));
  if (param_1[0x573] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x572) = 0;
  if (param_1[0x571] != 0) {
    FUN_1400020a8();
  }
  FUN_140f8e530(param_1 + 0x569);
  if (param_1[0x567] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[0x563];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_1411b8283(param_1[0x55f],*(undefined4 *)(param_1 + 0x560));
  if (param_1[0x55f] != 0) {
    FUN_1400020a8();
  }
  FUN_14107c533(param_1[0x55d],*(undefined4 *)(param_1 + 0x55e));
  if (param_1[0x55d] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x559],*(undefined4 *)(param_1 + 0x55a));
  if (param_1[0x559] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x555],*(undefined4 *)(param_1 + 0x556));
  if (param_1[0x555] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x552],*(undefined4 *)(param_1 + 0x553));
  if (param_1[0x552] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x54f],*(undefined4 *)(param_1 + 0x550));
  if (param_1[0x54f] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x54c],*(undefined4 *)(param_1 + 0x54d));
  if (param_1[0x54c] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x549],*(undefined4 *)(param_1 + 0x54a));
  if (param_1[0x549] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x546],*(undefined4 *)(param_1 + 0x547));
  if (param_1[0x546] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x543],*(undefined4 *)(param_1 + 0x544));
  if (param_1[0x543] != 0) {
    FUN_1400020a8();
  }
  FUN_14408ecb7(param_1[0x541],*(undefined4 *)(param_1 + 0x542));
  if (param_1[0x541] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x540) = 0;
  if (param_1[0x53f] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x538) = 0;
  if (*(int *)((longlong)param_1 + 0x29c4) != 0) {
    FUN_1401ad22e(param_1 + 0x537,0);
  }
  param_1[0x53d] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x53c) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x29e4)) {
    *(undefined4 *)((longlong)param_1 + 0x29e4) = 0x80;
    FUN_1446efbd8(param_1 + 0x539,0);
  }
  if (param_1[0x53b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x537] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x536) = 0;
  if (param_1[0x535] != 0) {
    FUN_1400020a8();
  }
  FUN_1411b7820(param_1 + 0x52d,0);
  if (param_1[0x531] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x52d] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x52c) = 0;
  if (param_1[0x52b] != 0) {
    FUN_1400020a8();
  }
  FUN_140436268(param_1 + 0x523);
  *(undefined4 *)(param_1 + 0x521) = 0;
  if (param_1[0x520] != 0) {
    FUN_1400020a8();
  }
  FUN_140f8e530(param_1 + 0x518);
  if (param_1[0x512] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x50a) = 0;
  if (param_1[0x509] != 0) {
    FUN_1400020a8();
  }
  FUN_1411b79ea(param_1 + 0x501);
  if (param_1[0x4ff] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4fd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4fb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4f9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4f7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4f5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4f3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4f1] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4ef] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4ed] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4eb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4e9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4e7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x4e4],*(undefined4 *)(param_1 + 0x4e5));
  if (param_1[0x4e4] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x4e1) = 0;
  if (param_1[0x4e0] != 0) {
    FUN_1400020a8();
  }
  FUN_140f8e530(param_1 + 0x4d8);
  FUN_1418d1ed0(param_1 + 0x4d2);
  FUN_1418d1ed0(param_1 + 0x4d0);
  while ((undefined8 *)param_1[0x4cf] != (undefined8 *)0x0) {
    param_1[0x4cf] = *(undefined8 *)param_1[0x4cf];
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[0x4cb];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *(undefined4 *)(param_1 + 0x4c9) = 0;
  if (param_1[0x4c8] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x4c1) = 0;
  if (*(int *)((longlong)param_1 + 0x260c) != 0) {
    FUN_1405357e8(param_1 + 0x4c0,0);
  }
  param_1[0x4c6] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x262c)) {
    *(undefined4 *)((longlong)param_1 + 0x262c) = 0x80;
    FUN_1446efbd8(param_1 + 0x4c2,0);
  }
  if (param_1[0x4c4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4c0] != 0) {
    FUN_1400020a8();
  }
  FUN_140639172(param_1);
  return;
}



// FUNCTION 1414fd5fa FUN_1414fd5fa body=362 status=ok
// SIG undefined FUN_1414fd5fa(void)

undefined8 FUN_1414fd5fa(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  bool bVar12;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  if ((*param_2 == 0) && ((int)param_2[1] == -1)) {
    return 0;
  }
  uVar4 = FUN_140437988();
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar4);
  if (plVar5 == (longlong *)0x0) {
    return 0;
  }
  uVar4 = FUN_140437988();
  plVar6 = (longlong *)FUN_144718840(plVar5,uVar4);
  if (plVar6 == (longlong *)0x0 || plVar5 == plVar6) {
    return 0;
  }
  plVar5 = (longlong *)(**(code **)(*plVar6 + 0x18))(plVar6);
  lVar2 = *param_2;
  uVar7 = *(uint *)(param_2 + 1);
  if (lVar2 == 0 && uVar7 == 0xffffffff) {
    return 0;
  }
  if ((int)uVar7 < 0) {
    lVar9 = *plVar5;
    uVar10 = *(uint *)(plVar5 + 1);
LAB_1414fd693:
    if (uVar10 != 0) {
      uVar8 = (ulonglong)(int)uVar10;
      goto LAB_1414fd6a6;
    }
  }
  else {
    uVar10 = *(uint *)(plVar5 + 1);
    uVar8 = (ulonglong)uVar10;
    lVar9 = *plVar5;
    if ((int)uVar10 <= (int)uVar7) goto LAB_1414fd693;
    if (*(longlong *)(lVar9 + 0x68 + (ulonglong)uVar7 * 0x88) == lVar2) {
      bVar12 = true;
      goto LAB_1414fd6e8;
    }
LAB_1414fd6a6:
    uVar11 = 0;
    do {
      if (*(longlong *)(lVar9 + 0x68 + uVar11) == lVar2) {
        uVar7 = (int)(uVar11 >> 3) * -0xf0f0f0f;
        goto LAB_1414fd6dc;
      }
      lVar1 = lVar9 + uVar11;
      uVar11 = uVar11 + 0x88;
    } while (lVar1 + 0x88 != uVar8 * 0x88 + lVar9);
  }
  uVar7 = 0xffffffff;
LAB_1414fd6dc:
  *(uint *)(param_2 + 1) = uVar7;
  bVar12 = uVar7 != 0xffffffff;
  lVar9 = *plVar5;
LAB_1414fd6e8:
  if (!bVar12) {
    return 0;
  }
  lVar9 = lVar9 + (longlong)(int)uVar7 * 0x88;
  if (lVar9 != 0) {
    cVar3 = FUN_1448ec59e(lVar9,param_3);
    if (cVar3 == '\0') {
      return 0;
    }
    return CONCAT71((int7)((ulonglong)*(longlong *)(lVar9 + 0x78) >> 8),
                    *(longlong *)(lVar9 + 0x78) == *param_3);
  }
  return 0;
}



// FUNCTION 1414fd764 FUN_1414fd764 body=250 status=ok
// SIG undefined FUN_1414fd764(void)

undefined8 *
FUN_1414fd764(undefined8 *param_1,undefined8 param_2,float param_3,undefined8 *param_4,
             undefined4 param_5,undefined8 param_6)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  uStack_50 = 0;
  local_78 = param_6;
  local_80 = 0;
  local_88 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = param_2;
  FUN_1411bc492(param_1,4,0,&local_58);
  *param_1 = &PTR_FUN_149eeb588;
  dVar1 = (double)param_3;
  local_48 = *(undefined4 *)(param_4 + 2);
  uVar2 = *(undefined4 *)param_4;
  uVar3 = *(undefined4 *)((longlong)param_4 + 4);
  local_58 = *param_4;
  uVar4 = *(undefined4 *)(param_4 + 1);
  uVar5 = *(undefined4 *)((longlong)param_4 + 0xc);
  uStack_50 = param_4[1];
  param_1[8] = dVar1;
  param_1[9] = dVar1;
  param_1[10] = dVar1;
  param_1[0xb] = dVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)((longlong)param_1 + 100) = uVar3;
  *(undefined4 *)(param_1 + 0xd) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar5;
  *(undefined4 *)(param_1 + 0xe) = local_48;
  *(undefined4 *)((longlong)param_1 + 0x74) = param_5;
  *(undefined2 *)(param_1 + 0xf) = 0;
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414fd860 FUN_1414fd860 body=257 status=ok
// SIG undefined FUN_1414fd860(void)

void FUN_1414fd860(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  longlong **local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_2;
  plVar4 = (longlong *)FUN_14001cc68(0x380,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149eeb550;
  FUN_141478cf2(plVar4 + 2,param_3);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_40 = &local_48;
  local_38 = &local_58;
  local_58 = plVar4 + 2;
  local_50 = plVar4;
  FUN_141030890(param_1 + 0x30,local_2c,&local_40,0);
  plVar3 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414fd962 FUN_1414fd962 body=487 status=ok
// SIG undefined FUN_1414fd962(void)

void FUN_1414fd962(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  float fVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8 [12];
  undefined8 local_158 [12];
  undefined8 local_f8 [12];
  undefined8 local_98;
  undefined2 local_90;
  undefined8 local_8c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if ((param_2 != (longlong *)0x0) && (lVar1 = *param_1, *(longlong *)(lVar1 + 0xb0) != 0)) {
    iVar13 = 0;
    (**(code **)(*param_2 + 0x4a8))(param_2,local_158,*(undefined8 *)(lVar1 + 0x9c),0);
    puVar11 = local_158;
    puVar12 = local_f8;
    for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
    local_98 = 0x3f800000;
    local_90 = 0;
    local_8c = 0;
    FUN_1400875ba(local_f8,lVar1 + 0x10);
    lVar1 = *(longlong *)(lVar1 + 0xb0);
    puVar11 = local_f8;
    puVar12 = local_1b8;
    for (lVar8 = 0xc; uVar6 = local_8c, lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
    uVar2 = (undefined4)local_98;
    fVar3 = local_98._4_4_;
    uVar4 = (undefined1)local_90;
    uVar5 = local_90._1_1_;
    lVar8 = lVar1 + 0x140;
    uVar7 = *(uint *)(lVar1 + 0x1d4);
    *(undefined4 *)(lVar1 + 0x1d0) = 0;
    if ((int)uVar7 < 0) {
      FUN_147f80112(lVar8,0);
      iVar13 = *(int *)(lVar1 + 0x1d0);
      uVar7 = *(uint *)(lVar1 + 0x1d4);
    }
    *(undefined1 *)(lVar1 + 0x26c) = 0;
    *(uint *)(lVar1 + 0x1d0) = iVar13 + 1U;
    if (uVar7 < iVar13 + 1U) {
      FUN_140089f7a(lVar8,iVar13);
    }
    if (*(longlong *)(lVar1 + 0x1c0) != 0) {
      lVar8 = *(longlong *)(lVar1 + 0x1c0);
    }
    lVar10 = (longlong)iVar13 * 0x80;
    puVar11 = local_1b8;
    puVar12 = (undefined8 *)(lVar8 + lVar10);
    for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
    *(undefined4 *)(lVar8 + 0x60 + lVar10) = uVar2;
    *(float *)(lVar8 + 100 + lVar10) = fVar3;
    *(undefined1 *)(lVar8 + 0x68 + lVar10) = uVar4;
    *(undefined1 *)(lVar8 + 0x69 + lVar10) = uVar5;
    *(undefined8 *)(lVar8 + 0x6c + lVar10) = uVar6;
    if (fVar3 < 0.0) {
      *(undefined4 *)(lVar8 + lVar10 + 100) = *(undefined4 *)(lVar1 + 0x268);
      *(undefined1 *)(lVar1 + 0x26c) = 1;
    }
    FUN_1447906c0(lVar1,0);
  }
  if ((local_70 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414fdb4a FUN_1414fdb4a body=143 status=ok
// SIG undefined FUN_1414fdb4a(void)

void FUN_1414fdb4a(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  bool bVar2;
  double dVar3;
  
  lVar1 = FUN_14620a5eb();
  dVar3 = (double)FUN_1458c5372(&DAT_14c9a4028,*(undefined4 *)(lVar1 + 0x30),
                                *(undefined4 *)(lVar1 + 0x34));
  *(int *)(param_1 + 0xa0) = (int)dVar3;
  dVar3 = (double)FUN_1462a60b8(*(undefined4 *)(lVar1 + 0x2c),*(undefined4 *)(lVar1 + 0x30),
                                *(undefined4 *)(lVar1 + 0x34));
  *(int *)(param_1 + 0xa4) = (int)dVar3;
  bVar2 = true;
  if (*(char *)(param_1 + 0xa8) == '\0') {
    bVar2 = *(int *)(param_1 + 0xa0) != param_2;
  }
  *(bool *)(param_1 + 0xa8) = bVar2;
  *(byte *)(param_1 + 0xa9) = *(byte *)(param_1 + 0xa9) | (int)dVar3 != param_3;
  FUN_14144d8ac(param_1);
  FUN_145a106fc(param_1);
  return;
}



// FUNCTION 1414fdbd9 FUN_1414fdbd9 body=202 status=ok
// SIG undefined FUN_1414fdbd9(void)

void FUN_1414fdbd9(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  byte *pbVar2;
  longlong lVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  
  puVar6 = (undefined8 *)FUN_144a06846(param_1,&DAT_14cbe6078);
  pbVar2 = (byte *)*puVar6;
  puVar7 = &DAT_14c9a1270;
  if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 2) != 0)) {
    puVar7 = *(undefined8 **)(pbVar2 + 8);
  }
  iVar1 = *(int *)(puVar7 + 2);
  if (-1 < iVar1) {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != iVar1) {
      FUN_14481578e(param_2);
    }
    pbVar2 = (byte *)*puVar6;
    plVar8 = &DAT_14c9a1270;
    if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 2) != 0)) {
      plVar8 = *(longlong **)(pbVar2 + 8);
    }
    if ((longlong)(int)plVar8[2] != 0) {
      lVar9 = *plVar8;
      lVar10 = (longlong)(int)plVar8[2] << 4;
      do {
        uVar4 = FUN_140e1edd4(lVar9,0);
        lVar3 = param_2[1];
        uVar5 = (int)lVar3 + 1;
        *(uint *)(param_2 + 1) = uVar5;
        if (*(uint *)((longlong)param_2 + 0xc) < uVar5) {
          FUN_1446f48e2(param_2);
        }
        *(undefined4 *)(*param_2 + (longlong)(int)lVar3 * 4) = uVar4;
        lVar9 = lVar9 + 0x10;
        lVar10 = lVar10 + -0x10;
      } while (lVar10 != 0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar1);
}



// FUNCTION 1414fdca4 FUN_1414fdca4 body=203 status=ok
// SIG undefined FUN_1414fdca4(void)

void FUN_1414fdca4(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined8 *)FUN_144a06846(param_1,&DAT_14cbe60a0);
  pbVar1 = (byte *)*puVar2;
  plVar4 = &DAT_14c9a1270;
  puVar3 = &DAT_14c9a1270;
  if ((pbVar1 != (byte *)0x0) && (puVar3 = &DAT_14c9a1270, (*pbVar1 & 2) != 0)) {
    puVar3 = *(undefined8 **)(pbVar1 + 8);
  }
  FUN_14068ded2(param_2,*(undefined4 *)(puVar3 + 2));
  pbVar1 = (byte *)*puVar2;
  if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 2) != 0)) {
    plVar4 = *(longlong **)(pbVar1 + 8);
  }
  if ((longlong)(int)plVar4[2] != 0) {
    lVar5 = *plVar4;
    lVar6 = (longlong)(int)plVar4[2] << 4;
    do {
      local_34 = FUN_140e1edd4(lVar5,0);
      FUN_144984904(param_2,local_38,&local_34,0);
      lVar5 = lVar5 + 0x10;
      lVar6 = lVar6 + -0x10;
    } while (lVar6 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414fdd70 FUN_1414fdd70 body=2646 status=ok
// SIG undefined FUN_1414fdd70(void)

void FUN_1414fdd70(longlong *param_1,longlong *param_2,int param_3)

{
  code *pcVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined **ppuVar12;
  longlong lVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  undefined1 *local_98;
  code *local_90;
  char local_81;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar8 = param_2[1];
  if (lVar8 == 0) {
    uVar7 = FUN_141218768();
    lVar8 = FUN_14477b664(uVar7);
    param_2[1] = lVar8;
  }
  if (param_2[2] == 0) {
    if ((lVar8 == 0) || (*param_2 == 0)) goto LAB_1414fdf85;
    plVar14 = *(longlong **)(lVar8 + 0xb8);
    if ((plVar14 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar14 + 0x108))(plVar14), cVar3 == '\0')) {
      param_2[2] = 0;
      goto LAB_1414fdf85;
    }
    uVar7 = (**(code **)(*plVar14 + 0x110))(plVar14);
    lVar8 = FUN_144aff482(uVar7,param_2);
    param_2[2] = lVar8;
    if (lVar8 == 0) goto LAB_1414fdf85;
  }
  uVar7 = (**(code **)(*param_1 + 0x180))(param_1);
  lVar8 = FUN_1406f612e(uVar7);
  if ((((*(uint *)(param_1 + 1) & 0x10) != 0) || (lVar13 = param_1[4], lVar13 == 0)) ||
     (lVar10 = *(longlong *)(lVar13 + 0x398), lVar10 == 0)) goto LAB_1414fdf85;
  if (DAT_14cbae3d8 == 0) {
    local_a0 = &local_50;
    local_50 = FUN_141030f22;
    local_90 = FUN_14081d0ea;
    local_98 = &LAB_1464f5fc4;
    local_a8 = &LAB_148c3dd26;
    local_b0 = &LAB_1459673ba;
    local_b8 = L"Engine";
    local_c0 = 0;
    local_c8 = 0x10000004;
    local_d0 = 0x10;
    local_d8 = 0x1360;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
    lVar10 = *(longlong *)(lVar13 + 0x398);
    if (lVar10 == 0) goto LAB_1414fdf85;
  }
  if (((DAT_14cbae3d8 == 0) || (lVar9 = *(longlong *)(lVar10 + 0x10), lVar9 == 0)) ||
     ((*(int *)(lVar9 + 0x38) < *(int *)(DAT_14cbae3d8 + 0x38) ||
      ((lVar8 == 0 ||
       (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) !=
        DAT_14cbae3d8 + 0x30)))))) goto LAB_1414fdf85;
  local_78 = lVar10;
  if (param_3 == 0) {
    if (*(char *)(lVar13 + 0x32b8) == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
    }
    lVar9 = param_2[1];
    if (lVar9 == 0) {
      uVar7 = FUN_141218768();
      lVar9 = FUN_14477b664(uVar7);
      param_2[1] = lVar9;
    }
    if (((param_2[2] == 0) && (lVar9 != 0)) && (*param_2 != 0)) {
      plVar14 = *(longlong **)(lVar9 + 0xb8);
      if ((plVar14 == (longlong *)0x0) || (cVar3 = (**(code **)(*plVar14 + 0x108))(), cVar3 == '\0')
         ) {
        lVar10 = 0;
      }
      else {
        uVar7 = (**(code **)(*plVar14 + 0x110))(plVar14);
        lVar10 = FUN_144aff482(uVar7,param_2);
      }
      param_2[2] = lVar10;
      lVar10 = local_78;
    }
    uVar7 = FUN_14144d9c6();
    cVar3 = FUN_14125be1e(lVar13,uVar7);
    if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
    }
  }
  lVar9 = param_1[0x12];
  if (lVar9 == 0) {
    uVar7 = FUN_141218768();
    lVar9 = FUN_14477b664(uVar7);
    param_1[0x12] = lVar9;
  }
  local_68 = param_1 + 0x11;
  local_70 = lVar8;
  if (param_1[0x13] == 0) {
    if ((lVar9 != 0) && (*local_68 != 0)) {
      plVar14 = *(longlong **)(lVar9 + 0xb8);
      if ((plVar14 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar14 + 0x108))(plVar14), cVar3 == '\0')) {
        param_1[0x13] = 0;
        lVar10 = local_78;
      }
      else {
        uVar7 = (**(code **)(*plVar14 + 0x110))(plVar14);
        lVar9 = FUN_144aff482(uVar7,local_68);
        param_1[0x13] = lVar9;
        lVar10 = local_78;
        if (lVar9 != 0) {
          lVar9 = param_1[0x12];
          goto LAB_1414fe06e;
        }
      }
    }
  }
  else {
LAB_1414fe06e:
    if (lVar9 == 0) {
      uVar7 = FUN_141218768();
      lVar8 = FUN_14477b664(uVar7);
      param_1[0x12] = lVar8;
    }
    lVar8 = param_2[1];
    if (lVar8 == 0) {
      lVar8 = FUN_141218768();
    }
    local_58 = *param_2;
    lVar8 = FUN_14477b664(lVar8);
    iVar5 = 0;
    iVar4 = 0;
    if ((lVar8 != 0) && (plVar14 = *(longlong **)(lVar8 + 0xb8), plVar14 != (longlong *)0x0)) {
      lVar10 = *plVar14;
      pcVar1 = *(code **)(lVar10 + 0x108);
      if (pcVar1 != (code *)&LAB_14478342e && pcVar1 != (code *)&LAB_144783422) {
        cVar3 = (*pcVar1)(plVar14);
        iVar4 = 0;
        if (cVar3 == '\0') goto LAB_1414fe119;
        lVar10 = *plVar14;
      }
      pcVar1 = *(code **)(lVar10 + 0x110);
      if (pcVar1 == (code *)&LAB_144783426) {
        ppuVar12 = &PTR_PTR_14c763408;
      }
      else if (pcVar1 == (code *)&LAB_144783432) {
        ppuVar12 = &PTR_PTR_14c75f798;
      }
      else {
        ppuVar12 = (undefined **)(*pcVar1)(plVar14);
      }
      iVar4 = FUN_144aff48c(ppuVar12);
    }
LAB_1414fe119:
    lVar9 = param_1[0x11];
    lVar11 = param_1[0x12];
    local_80 = lVar8;
    if ((lVar11 != 0) && (plVar14 = *(longlong **)(lVar11 + 0xb8), plVar14 != (longlong *)0x0)) {
      lVar8 = *plVar14;
      pcVar1 = *(code **)(lVar8 + 0x108);
      if (pcVar1 != (code *)&LAB_14478342e && pcVar1 != (code *)&LAB_144783422) {
        cVar3 = (*pcVar1)(plVar14);
        if (cVar3 == '\0') goto LAB_1414fe191;
        lVar8 = *plVar14;
      }
      pcVar1 = *(code **)(lVar8 + 0x110);
      if (pcVar1 == (code *)&LAB_144783426) {
        ppuVar12 = &PTR_PTR_14c763408;
      }
      else if (pcVar1 == (code *)&LAB_144783432) {
        ppuVar12 = &PTR_PTR_14c75f798;
      }
      else {
        ppuVar12 = (undefined **)(*pcVar1)(plVar14);
      }
      iVar5 = FUN_144aff48c(ppuVar12);
    }
LAB_1414fe191:
    lVar10 = local_78;
    if ((iVar5 == iVar4) && (lVar9 == local_58)) {
      lVar8 = local_70;
      if (lVar11 == local_80) goto LAB_1414fe2d5;
      if ((local_80 != 0) && (lVar11 != 0)) {
        iVar4 = *(int *)(local_80 + 0x38);
        iVar5 = *(int *)(lVar11 + 0x38);
        if (((iVar4 <= iVar5) &&
            (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar4 * 8) == local_80 + 0x30))
           || ((iVar5 <= iVar4 &&
               (*(longlong *)(*(longlong *)(local_80 + 0x30) + (longlong)iVar5 * 8) == lVar11 + 0x30
               )))) goto LAB_1414fe2d5;
      }
    }
    lVar8 = param_1[0x12];
    if (lVar8 == 0) {
      uVar7 = FUN_141218768();
      lVar8 = FUN_14477b664(uVar7);
      param_1[0x12] = lVar8;
    }
    lVar9 = param_1[0x13];
    if (((lVar9 == 0) && (lVar9 = 0, lVar8 != 0)) && (*local_68 != 0)) {
      plVar14 = *(longlong **)(lVar8 + 0xb8);
      if ((plVar14 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar14 + 0x108))(plVar14), cVar3 == '\0')) {
        lVar9 = 0;
      }
      else {
        uVar7 = (**(code **)(*plVar14 + 0x110))(plVar14);
        lVar9 = FUN_144aff482(uVar7,local_68);
      }
      param_1[0x13] = lVar9;
      lVar10 = local_78;
    }
    lVar8 = param_2[1];
    if (lVar8 == 0) {
      uVar7 = FUN_141218768();
      lVar8 = FUN_14477b664(uVar7);
      param_2[1] = lVar8;
    }
    lVar11 = param_2[2];
    if (((lVar11 == 0) && (lVar11 = 0, lVar8 != 0)) && (*param_2 != 0)) {
      plVar14 = *(longlong **)(lVar8 + 0xb8);
      if ((plVar14 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar14 + 0x108))(plVar14), cVar3 == '\0')) {
        lVar11 = 0;
      }
      else {
        uVar7 = (**(code **)(*plVar14 + 0x110))(plVar14);
        lVar11 = FUN_144aff482(uVar7,param_2);
      }
      param_2[2] = lVar11;
      lVar10 = local_78;
    }
    FUN_1440ca932(param_1,lVar11,lVar9);
    lVar8 = local_70;
  }
LAB_1414fe2d5:
  FUN_14596e4d8(local_68,param_2);
  uVar6 = FUN_1408966e4(lVar13);
  uVar7 = FUN_145a1089c(param_1);
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    lVar13 = param_1[4];
  }
  else {
    lVar13 = 0;
  }
  cVar3 = FUN_14125be1e(lVar13,uVar7);
  if ((longlong)(int)param_1[0x10] != 0) {
    plVar14 = (longlong *)param_1[0xf];
    lVar13 = (longlong)(int)param_1[0x10] * 0xe8;
    local_80 = CONCAT44(local_80._4_4_,uVar6);
    local_81 = cVar3;
    do {
      if (cVar3 == '\0') {
        bVar15 = false;
      }
      else {
        if (plVar14[1] == 0) {
          uVar7 = FUN_141218768();
          lVar8 = FUN_14477b664(uVar7);
          plVar14[1] = lVar8;
        }
        lVar8 = param_1[0x12];
        if (lVar8 == 0) {
          lVar8 = FUN_141218768();
        }
        local_58 = *local_68;
        lVar8 = FUN_14477b664(lVar8);
        iVar5 = 0;
        iVar4 = 0;
        if ((lVar8 != 0) && (plVar2 = *(longlong **)(lVar8 + 0xb8), plVar2 != (longlong *)0x0)) {
          lVar10 = *plVar2;
          pcVar1 = *(code **)(lVar10 + 0x108);
          if (pcVar1 != (code *)&LAB_14478342e && pcVar1 != (code *)&LAB_144783422) {
            cVar3 = (*pcVar1)(plVar2);
            iVar4 = 0;
            if (cVar3 == '\0') goto LAB_1414fe3f4;
            lVar10 = *plVar2;
          }
          pcVar1 = *(code **)(lVar10 + 0x110);
          ppuVar12 = &PTR_PTR_14c763408;
          if ((pcVar1 != (code *)&LAB_144783426) &&
             (ppuVar12 = &PTR_PTR_14c75f798, pcVar1 != (code *)&LAB_144783432)) {
            ppuVar12 = (undefined **)(*pcVar1)(plVar2);
          }
          iVar4 = FUN_144aff48c(ppuVar12);
        }
LAB_1414fe3f4:
        lVar9 = *plVar14;
        lVar11 = plVar14[1];
        local_60 = lVar8;
        if ((lVar11 != 0) && (plVar2 = *(longlong **)(lVar11 + 0xb8), plVar2 != (longlong *)0x0)) {
          lVar8 = *plVar2;
          pcVar1 = *(code **)(lVar8 + 0x108);
          if (pcVar1 != (code *)&LAB_14478342e && pcVar1 != (code *)&LAB_144783422) {
            cVar3 = (*pcVar1)(plVar2);
            if (cVar3 == '\0') goto LAB_1414fe46a;
            lVar8 = *plVar2;
          }
          pcVar1 = *(code **)(lVar8 + 0x110);
          ppuVar12 = &PTR_PTR_14c763408;
          if ((pcVar1 != (code *)&LAB_144783426) &&
             (ppuVar12 = &PTR_PTR_14c75f798, pcVar1 != (code *)&LAB_144783432)) {
            ppuVar12 = (undefined **)(*pcVar1)(plVar2);
          }
          iVar5 = FUN_144aff48c(ppuVar12);
        }
LAB_1414fe46a:
        bVar15 = false;
        lVar8 = local_70;
        lVar10 = local_78;
        uVar6 = (undefined4)local_80;
        cVar3 = local_81;
        if (((iVar5 == iVar4) && (bVar15 = false, lVar9 == local_58)) &&
           (bVar15 = true, lVar11 != local_60)) {
          bVar15 = false;
          if ((local_60 != 0) && (bVar15 = false, lVar11 != 0)) {
            iVar4 = *(int *)(local_60 + 0x38);
            iVar5 = *(int *)(lVar11 + 0x38);
            if ((iVar5 < iVar4) ||
               (bVar15 = true,
               *(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar4 * 8) != local_60 + 0x30)
               ) {
              if (iVar4 < iVar5) {
                bVar15 = false;
              }
              else {
                bVar15 = *(longlong *)(*(longlong *)(local_60 + 0x30) + (longlong)iVar5 * 8) ==
                         lVar11 + 0x30;
              }
            }
          }
        }
      }
      local_d8 = CONCAT31(local_d8._1_3_,bVar15);
      FUN_141674e64(lVar10,uVar6,lVar8,plVar14);
      plVar14 = plVar14 + 0x1d;
      lVar13 = lVar13 + -0xe8;
    } while (lVar13 != 0);
  }
LAB_1414fdf85:
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414fe800 FUN_1414fe800 body=115 status=ok
// SIG undefined FUN_1414fe800(void)

void FUN_1414fe800(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x148) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x148) + 0x10))();
  }
  FUN_1465f2eca(param_1 + 0x68);
  FUN_140f9a609(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1414fe873 FUN_1414fe873 body=77 status=ok
// SIG undefined FUN_1414fe873(void)

undefined8 * FUN_1414fe873(undefined8 *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_14005eb28(0,param_3);
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      FUN_140002184(param_1,*(byte *)(param_2 + lVar1) + 1);
      lVar1 = lVar1 + 1;
    } while (param_3 != (int)lVar1);
  }
  return param_1;
}



// FUNCTION 1414fe8c0 FUN_1414fe8c0 body=231 status=ok
// SIG undefined FUN_1414fe8c0(void)

undefined8 * FUN_1414fe8c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  int local_a8;
  undefined1 local_a0 [88];
  undefined1 local_48 [24];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_145c422f6(local_a0);
  FUN_145c4230c(local_a0,param_2,param_3);
  FUN_1414fe9a8(local_a0,local_48);
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = 0;
  do {
    FUN_140002266(&local_b0,L"%02x",local_48[lVar2]);
    iVar1 = local_a8 + -1;
    if (local_a8 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(param_1,local_b0,iVar1);
    if (local_b0 != 0) {
      FUN_1400020a8();
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x10);
  FUN_145c422f4(local_a0);
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414fe9a8 FUN_1414fe9a8 body=237 status=ok
// SIG undefined FUN_1414fe9a8(void)

void FUN_1414fe9a8(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  undefined2 local_20;
  undefined1 auStack_1e [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = 4;
  lVar4 = 0;
  do {
    uVar1 = *(undefined4 *)((longlong)param_1 + lVar3 * 4);
    *(short *)((longlong)&local_20 + lVar4) = (short)uVar1;
    auStack_1e[lVar4] = (char)((uint)uVar1 >> 0x10);
    auStack_1e[lVar4 + 1] = (char)((uint)uVar1 >> 0x18);
    lVar3 = lVar3 + 1;
    lVar4 = 4;
  } while (lVar3 != 6);
  uVar2 = *(uint *)(param_1 + 2) >> 3 & 0x3f;
  FUN_145c4230c(param_1,&DAT_149e34680,(longlong)(int)(((uint)(0x37 < uVar2) << 6 | 0x38) - uVar2));
  FUN_145c4230c(param_1,&local_20,8);
  lVar3 = 0;
  do {
    *(undefined1 *)(param_2 + lVar3 * 4) = *(undefined1 *)((longlong)param_1 + lVar3 * 4);
    *(undefined1 *)(param_2 + 1 + lVar3 * 4) = *(undefined1 *)((longlong)param_1 + lVar3 * 4 + 1);
    *(undefined1 *)(param_2 + 2 + lVar3 * 4) = *(undefined1 *)((longlong)param_1 + lVar3 * 4 + 2);
    *(undefined1 *)(param_2 + 3 + lVar3 * 4) = *(undefined1 *)((longlong)param_1 + lVar3 * 4 + 3);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 4);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[10] = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414fea96 FUN_1414fea96 body=233 status=ok
// SIG undefined FUN_1414fea96(void)

ulonglong FUN_1414fea96(longlong *param_1,undefined1 *param_2,uint param_3)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  undefined8 unaff_RBX;
  longlong lVar4;
  ulonglong uVar5;
  bool bVar6;
  undefined1 auStack_78 [32];
  wchar_t *local_58;
  wchar_t local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar3 = (int)param_1[1];
  uVar5 = (ulonglong)(iVar3 - 1);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  bVar1 = (uint)((int)(uVar5 >> 0x1f) + (int)uVar5 >> 1) <= param_3;
  bVar6 = (uVar5 & 1) == 0;
  if (bVar6 && bVar1) {
    local_4a = 0;
    local_58 = (wchar_t *)0x0;
    if (iVar3 - 2U < 0x7fffffff) {
      lVar4 = 0;
      do {
        local_4e = *(wchar_t *)(*param_1 + lVar4 * 2);
        local_4c = *(undefined2 *)(*param_1 + 2 + lVar4 * 2);
        uVar2 = wcstoul(&local_4e,&local_58,0x10);
        *param_2 = (char)uVar2;
        lVar4 = lVar4 + 2;
        iVar3 = (int)param_1[1] + -1;
        if ((int)param_1[1] == 0) {
          iVar3 = 0;
        }
        param_2 = param_2 + 1;
      } while ((int)lVar4 < iVar3);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar6 && bVar1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414feb80 FUN_1414feb80 body=2443 status=ok
// SIG undefined FUN_1414feb80(void)

void FUN_1414feb80(int *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_128 [40];
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  ulonglong local_e8;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  int *local_90;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_c4 = *param_1;
  uVar1 = param_1[1];
  local_a8 = (ulonglong)uVar1;
  uVar2 = param_1[2];
  local_a0 = (ulonglong)uVar2;
  uVar3 = param_1[3];
  local_98 = (ulonglong)uVar3;
  lVar6 = 0;
  do {
    auVar13._8_8_ =
         (ulonglong)*(byte *)(param_2 + 8 + lVar6 * 4) |
         (ulonglong)*(byte *)(param_2 + 0xc + lVar6 * 4) << 0x20;
    auVar13._0_8_ =
         (ulonglong)*(byte *)(param_2 + lVar6 * 4) |
         (ulonglong)*(byte *)(param_2 + 4 + lVar6 * 4) << 0x20;
    auVar12._0_4_ = (uint)*(byte *)(param_2 + 1 + lVar6 * 4) << 8;
    auVar12._4_4_ = (uint)*(byte *)(param_2 + 5 + lVar6 * 4) << 8;
    auVar12._8_4_ = (uint)*(byte *)(param_2 + 9 + lVar6 * 4) << 8;
    auVar12._12_4_ = (uint)*(byte *)(param_2 + 0xd + lVar6 * 4) << 8;
    auVar14._0_4_ = (uint)*(byte *)(param_2 + 2 + lVar6 * 4) << 0x10;
    auVar14._4_4_ = (uint)*(byte *)(param_2 + 6 + lVar6 * 4) << 0x10;
    auVar14._8_4_ = (uint)*(byte *)(param_2 + 10 + lVar6 * 4) << 0x10;
    auVar14._12_4_ = (uint)*(byte *)(param_2 + 0xe + lVar6 * 4) << 0x10;
    auVar4._1_4_ = (uint)*(byte *)(param_2 + 7 + lVar6 * 4) << 0x18;
    auVar4[0] = *(undefined1 *)(param_2 + 3 + lVar6 * 4);
    auVar4._5_4_ = (uint)*(byte *)(param_2 + 0xb + lVar6 * 4) << 0x18;
    auVar4._9_4_ = (uint)*(byte *)(param_2 + 0xf + lVar6 * 4) << 0x18;
    auVar4._13_3_ = 0;
    *(undefined1 (*) [16])(&local_88 + lVar6) = auVar4 << 0x18 | auVar14 | auVar12 | auVar13;
    lVar6 = lVar6 + 4;
  } while (lVar6 != 0x10);
  local_c0 = (ulonglong)local_88;
  local_e8 = (ulonglong)local_84;
  uVar5 = ((uVar2 ^ uVar3) & uVar1 ^ uVar3) + local_c4 + local_88 + 0xd76aa478;
  uVar5 = (uVar5 * 0x80 | uVar5 >> 0x19) + uVar1;
  uVar7 = ((uVar1 ^ uVar2) & uVar5 ^ uVar2) + local_84 + uVar3 + 0xe8c7b756;
  uVar7 = (uVar7 * 0x1000 | uVar7 >> 0x14) + uVar5;
  local_b0 = (ulonglong)local_80;
  uVar8 = ((uVar5 ^ uVar1) & uVar7 ^ uVar1) + uVar2 + local_80 + 0x242070db;
  uVar8 = (uVar8 * 0x20000 | uVar8 >> 0xf) + uVar7;
  local_b8 = (ulonglong)local_7c;
  uVar9 = ((uVar7 ^ uVar5) & uVar8 ^ uVar5) + uVar1 + local_7c + 0xc1bdceee;
  uVar9 = (uVar9 * 0x400000 | uVar9 >> 10) + uVar8;
  local_f4 = local_78;
  uVar5 = uVar5 + local_78 + ((uVar8 ^ uVar7) & uVar9 ^ uVar7) + 0xf57c0faf;
  uVar5 = (uVar5 * 0x80 | uVar5 >> 0x19) + uVar9;
  local_fc = local_74;
  uVar7 = uVar7 + local_74 + ((uVar9 ^ uVar8) & uVar5 ^ uVar8) + 0x4787c62a;
  uVar7 = (uVar7 * 0x1000 | uVar7 >> 0x14) + uVar5;
  local_f0 = local_70;
  uVar8 = ((uVar5 ^ uVar9) & uVar7 ^ uVar9) + uVar8 + local_70 + 0xa8304613;
  uVar8 = (uVar8 * 0x20000 | uVar8 >> 0xf) + uVar7;
  local_c8 = local_6c;
  uVar9 = ((uVar7 ^ uVar5) & uVar8 ^ uVar5) + uVar9 + local_6c + 0xfd469501;
  uVar9 = (uVar9 * 0x400000 | uVar9 >> 10) + uVar8;
  local_f8 = local_68;
  uVar5 = uVar5 + local_68 + ((uVar8 ^ uVar7) & uVar9 ^ uVar7) + 0x698098d8;
  uVar5 = (uVar5 * 0x80 | uVar5 >> 0x19) + uVar9;
  local_100 = local_64;
  uVar7 = ((uVar9 ^ uVar8) & uVar5 ^ uVar8) + uVar7 + local_64 + 0x8b44f7af;
  uVar7 = (uVar7 * 0x1000 | uVar7 >> 0x14) + uVar5;
  local_d8 = local_60;
  uVar8 = (((uVar5 ^ uVar9) & uVar7 ^ uVar9) + uVar8 + local_60) - 0xa44f;
  uVar10 = (uVar8 * 0x20000 | uVar8 >> 0xf) + uVar7;
  local_ec = local_5c;
  uVar8 = ((uVar7 ^ uVar5) & uVar10 ^ uVar5) + uVar9 + local_5c + 0x895cd7be;
  uVar8 = (uVar8 * 0x400000 | uVar8 >> 10) + uVar10;
  local_d4 = local_58;
  uVar5 = ((uVar10 ^ uVar7) & uVar8 ^ uVar7) + uVar5 + local_58 + 0x6b901122;
  uVar9 = (uVar5 * 0x80 | uVar5 >> 0x19) + uVar8;
  uVar5 = uVar7 + local_54 + ((uVar8 ^ uVar10) & uVar9 ^ uVar10) + 0xfd987193;
  uVar5 = (uVar5 * 0x1000 | uVar5 >> 0x14) + uVar9;
  uVar7 = uVar10 + local_50 + (uVar8 & ~uVar5 | uVar5 & uVar9) + 0xa679438e;
  uVar7 = (uVar7 * 0x20000 | uVar7 >> 0xf) + uVar5;
  local_d0 = local_4c;
  uVar8 = uVar8 + local_4c + (uVar9 & ~uVar7 | uVar7 & uVar5) + 0x49b40821;
  uVar8 = (uVar8 * 0x400000 | uVar8 >> 10) + uVar7;
  uVar9 = uVar9 + local_84 + (~uVar5 & uVar7 | uVar8 & uVar5) + 0xf61e2562;
  uVar9 = (uVar9 * 0x20 | uVar9 >> 0x1b) + uVar8;
  uVar5 = uVar5 + local_70 + (~uVar7 & uVar8 | uVar9 & uVar7) + 0xc040b340;
  uVar5 = (uVar5 * 0x200 | uVar5 >> 0x17) + uVar9;
  uVar7 = uVar7 + local_5c + ((uVar5 ^ uVar9) & uVar8 ^ uVar9) + 0x265e5a51;
  uVar7 = (uVar7 * 0x4000 | uVar7 >> 0x12) + uVar5;
  uVar8 = uVar8 + local_88 + ((uVar7 ^ uVar5) & uVar9 ^ uVar5) + 0xe9b6c7aa;
  uVar8 = (uVar8 * 0x100000 | uVar8 >> 0xc) + uVar7;
  uVar9 = uVar9 + local_74 + ((uVar8 ^ uVar7) & uVar5 ^ uVar7) + 0xd62f105d;
  uVar9 = (uVar9 * 0x20 | uVar9 >> 0x1b) + uVar8;
  uVar5 = uVar5 + local_60 + ((uVar9 ^ uVar8) & uVar7 ^ uVar8) + 0x2441453;
  uVar5 = (uVar5 * 0x200 | uVar5 >> 0x17) + uVar9;
  uVar7 = uVar7 + local_4c + ((uVar5 ^ uVar9) & uVar8 ^ uVar9) + 0xd8a1e681;
  uVar7 = (uVar7 * 0x4000 | uVar7 >> 0x12) + uVar5;
  uVar8 = uVar8 + local_78 + ((uVar7 ^ uVar5) & uVar9 ^ uVar5) + 0xe7d3fbc8;
  uVar8 = (uVar8 * 0x100000 | uVar8 >> 0xc) + uVar7;
  uVar9 = uVar9 + local_64 + ((uVar8 ^ uVar7) & uVar5 ^ uVar7) + 0x21e1cde6;
  uVar9 = (uVar9 * 0x20 | uVar9 >> 0x1b) + uVar8;
  local_dc = local_50;
  uVar5 = uVar5 + local_50 + ((uVar9 ^ uVar8) & uVar7 ^ uVar8) + 0xc33707d6;
  uVar5 = (uVar5 * 0x200 | uVar5 >> 0x17) + uVar9;
  uVar7 = uVar7 + local_7c + ((uVar5 ^ uVar9) & uVar8 ^ uVar9) + 0xf4d50d87;
  uVar7 = (uVar7 * 0x4000 | uVar7 >> 0x12) + uVar5;
  uVar8 = uVar8 + local_68 + ((uVar7 ^ uVar5) & uVar9 ^ uVar5) + 0x455a14ed;
  uVar8 = (uVar8 * 0x100000 | uVar8 >> 0xc) + uVar7;
  local_cc = local_54;
  uVar9 = uVar9 + local_54 + ((uVar8 ^ uVar7) & uVar5 ^ uVar7) + 0xa9e3e905;
  uVar9 = (uVar9 * 0x20 | uVar9 >> 0x1b) + uVar8;
  uVar5 = uVar5 + local_80 + ((uVar9 ^ uVar8) & uVar7 ^ uVar8) + 0xfcefa3f8;
  uVar5 = (uVar5 * 0x200 | uVar5 >> 0x17) + uVar9;
  uVar7 = uVar7 + local_6c + ((uVar5 ^ uVar9) & uVar8 ^ uVar9) + 0x676f02d9;
  uVar7 = (uVar7 * 0x4000 | uVar7 >> 0x12) + uVar5;
  uVar8 = uVar8 + local_58 + ((uVar7 ^ uVar5) & uVar9 ^ uVar5) + 0x8d2a4c8a;
  uVar8 = (uVar8 * 0x100000 | uVar8 >> 0xc) + uVar7;
  uVar9 = (uVar9 + local_74 + (uVar8 ^ uVar7 ^ uVar5)) - 0x5c6be;
  uVar9 = (uVar9 * 0x10 | uVar9 >> 0x1c) + uVar8;
  uVar5 = uVar5 + local_68 + (uVar8 ^ uVar7 ^ uVar9) + 0x8771f681;
  uVar5 = (uVar5 * 0x800 | uVar5 >> 0x15) + uVar9;
  uVar7 = (uVar5 ^ uVar9 ^ uVar8) + uVar7 + local_5c + 0x6d9d6122;
  uVar10 = (uVar7 * 0x10000 | uVar7 >> 0x10) + uVar5;
  uVar7 = uVar8 + local_50 + (uVar5 ^ uVar9 ^ uVar10) + 0xfde5380c;
  uVar8 = (uVar7 * 0x800000 | uVar7 >> 9) + uVar10;
  uVar7 = uVar9 + local_84 + (uVar10 ^ uVar5 ^ uVar8) + 0xa4beea44;
  uVar9 = (uVar7 * 0x10 | uVar7 >> 0x1c) + uVar8;
  uVar5 = uVar5 + local_78 + (uVar8 ^ uVar10 ^ uVar9) + 0x4bdecfa9;
  uVar5 = (uVar5 * 0x800 | uVar5 >> 0x15) + uVar9;
  uVar7 = (uVar9 ^ uVar8 ^ uVar5) + uVar10 + local_6c + 0xf6bb4b60;
  uVar7 = (uVar7 * 0x10000 | uVar7 >> 0x10) + uVar5;
  uVar8 = uVar8 + local_60 + (uVar5 ^ uVar9 ^ uVar7) + 0xbebfbc70;
  uVar8 = (uVar8 * 0x800000 | uVar8 >> 9) + uVar7;
  uVar9 = uVar9 + local_54 + (uVar7 ^ uVar5 ^ uVar8) + 0x289b7ec6;
  uVar9 = (uVar9 * 0x10 | uVar9 >> 0x1c) + uVar8;
  uVar5 = uVar5 + local_88 + (uVar8 ^ uVar7 ^ uVar9) + 0xeaa127fa;
  uVar5 = (uVar5 * 0x800 | uVar5 >> 0x15) + uVar9;
  uVar7 = (uVar9 ^ uVar8 ^ uVar5) + uVar7 + local_7c + 0xd4ef3085;
  uVar10 = (uVar7 * 0x10000 | uVar7 >> 0x10) + uVar5;
  uVar7 = uVar8 + local_70 + (uVar5 ^ uVar9 ^ uVar10) + 0x4881d05;
  uVar8 = (uVar7 * 0x800000 | uVar7 >> 9) + uVar10;
  uVar7 = (uVar10 ^ uVar5 ^ uVar8) + uVar9 + local_64 + 0xd9d4d039;
  uVar7 = (uVar7 * 0x10 | uVar7 >> 0x1c) + uVar8;
  uVar5 = uVar5 + local_58 + (uVar8 ^ uVar10 ^ uVar7) + 0xe6db99e5;
  uVar5 = (uVar5 * 0x800 | uVar5 >> 0x15) + uVar7;
  uVar9 = (uVar7 ^ uVar8 ^ uVar5) + uVar10 + local_4c + 0x1fa27cf8;
  uVar10 = (uVar9 * 0x10000 | uVar9 >> 0x10) + uVar5;
  uVar8 = uVar8 + local_80 + (uVar5 ^ uVar7 ^ uVar10) + 0xc4ac5665;
  uVar9 = (uVar8 * 0x800000 | uVar8 >> 9) + uVar10;
  uVar7 = ((~uVar5 | uVar9) ^ uVar10) + uVar7 + local_88 + 0xf4292244;
  uVar11 = (uVar7 * 0x40 | uVar7 >> 0x1a) + uVar9;
  uVar5 = ((~uVar10 | uVar11) ^ uVar9) + uVar5 + local_6c + 0x432aff97;
  uVar8 = (uVar5 * 0x400 | uVar5 >> 0x16) + uVar11;
  uVar5 = ((~uVar9 | uVar8) ^ uVar11) + uVar10 + local_50 + 0xab9423a7;
  uVar5 = (uVar5 * 0x8000 | uVar5 >> 0x11) + uVar8;
  uVar7 = ((~uVar11 | uVar5) ^ uVar8) + uVar9 + local_74 + 0xfc93a039;
  uVar9 = (uVar7 * 0x200000 | uVar7 >> 0xb) + uVar5;
  uVar7 = ((~uVar8 | uVar9) ^ uVar5) + uVar11 + local_58 + 0x655b59c3;
  uVar7 = (uVar7 * 0x40 | uVar7 >> 0x1a) + uVar9;
  uVar8 = uVar8 + local_7c + ((~uVar5 | uVar7) ^ uVar9) + 0x8f0ccc92;
  uVar8 = (uVar8 * 0x400 | uVar8 >> 0x16) + uVar7;
  uVar5 = (uVar5 + local_60 + ((~uVar9 | uVar8) ^ uVar7)) - 0x100b83;
  uVar5 = (uVar5 * 0x8000 | uVar5 >> 0x11) + uVar8;
  uVar9 = ((~uVar7 | uVar5) ^ uVar8) + uVar9 + local_84 + 0x85845dd1;
  uVar9 = (uVar9 * 0x200000 | uVar9 >> 0xb) + uVar5;
  uVar7 = uVar7 + local_68 + ((~uVar8 | uVar9) ^ uVar5) + 0x6fa87e4f;
  uVar7 = (uVar7 * 0x40 | uVar7 >> 0x1a) + uVar9;
  uVar8 = uVar8 + local_4c + ((~uVar5 | uVar7) ^ uVar9) + 0xfe2ce6e0;
  uVar8 = (uVar8 * 0x400 | uVar8 >> 0x16) + uVar7;
  uVar5 = uVar5 + local_70 + ((~uVar9 | uVar8) ^ uVar7) + 0xa3014314;
  uVar5 = (uVar5 * 0x8000 | uVar5 >> 0x11) + uVar8;
  uVar9 = ((~uVar7 | uVar5) ^ uVar8) + uVar9 + local_54 + 0x4e0811a1;
  uVar9 = (uVar9 * 0x200000 | uVar9 >> 0xb) + uVar5;
  uVar7 = uVar7 + local_78 + ((~uVar8 | uVar9) ^ uVar5) + 0xf7537e82;
  uVar7 = (uVar7 * 0x40 | uVar7 >> 0x1a) + uVar9;
  uVar8 = uVar8 + local_5c + ((~uVar5 | uVar7) ^ uVar9) + 0xbd3af235;
  uVar8 = (uVar8 * 0x400 | uVar8 >> 0x16) + uVar7;
  uVar5 = uVar5 + local_80 + ((~uVar9 | uVar8) ^ uVar7) + 0x2ad7d2bb;
  uVar5 = (uVar5 * 0x8000 | uVar5 >> 0x11) + uVar8;
  uVar9 = uVar9 + local_64 + ((~uVar7 | uVar5) ^ uVar8) + 0xeb86d391;
  *param_1 = uVar7 + local_c4;
  param_1[1] = uVar1 + uVar5 + (uVar9 * 0x200000 | uVar9 >> 0xb);
  param_1[2] = uVar5 + uVar2;
  param_1[3] = uVar8 + uVar3;
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
  local_90 = param_1;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414ff50c FUN_1414ff50c body=155 status=ok
// SIG undefined FUN_1414ff50c(void)

void FUN_1414ff50c(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  if ((param_2 != '\0') && (iVar4 = *(int *)(param_1 + 0x170), 0 < iVar4)) {
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x168) + lVar5 * 8);
      if ((plVar3 != (longlong *)0x0) && (plVar3[6] != 0)) {
        (**(code **)(*plVar3 + 0x2a0))(plVar3,1);
        iVar4 = *(int *)(param_1 + 0x170);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar4);
  }
  *(undefined8 *)(param_1 + 0x180) = 0;
  plVar3 = *(longlong **)(param_1 + 0x188);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x188) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001414ff5a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1414ff5a8 FUN_1414ff5a8 body=605 status=ok
// SIG undefined FUN_1414ff5a8(void)

longlong * FUN_1414ff5a8(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_70 = param_2;
    local_60 = plVar1;
    if ((int)param_1[5] == 0) {
      uVar17 = 1;
      iVar11 = 0;
      local_58._4_4_ = 0;
      uVar13 = 0xffffffff;
      iVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar17 = local_68 >> 0x20;
      iVar11 = (int)param_1[5];
      uVar13 = (uint)local_58;
      iVar9 = (int)local_68;
    }
    plVar7 = local_60;
    iVar8 = local_58._4_4_;
    iVar12 = local_50;
    if (local_58._4_4_ != iVar11 || local_60 != plVar1) {
      do {
        if (*(longlong *)(*param_1 + 0x18 + (longlong)iVar8 * 0x38) != 0) {
          FUN_1400020a8();
        }
        uVar13 = uVar13 & ~(uint)uVar17;
        plVar16 = (longlong *)plVar7[2];
        if ((longlong *)plVar7[2] == (longlong *)0x0) {
          plVar16 = plVar7;
        }
        iVar3 = (int)plVar7[3];
        lVar14 = (longlong)iVar9;
        uVar10 = *(uint *)((longlong)plVar16 + lVar14 * 4) & uVar13;
        if (uVar10 == 0) {
          iVar8 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar8 = iVar3 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar12 = iVar12 + 0x20;
          iVar4 = iVar8;
          if (iVar8 < iVar9) {
            iVar4 = iVar9;
          }
          if (iVar9 < iVar8) {
            lVar15 = 0;
            do {
              uVar10 = *(uint *)((longlong)plVar16 + lVar15 * 4 + lVar14 * 4 + 4);
              if (uVar10 != 0) {
                iVar9 = iVar9 + (int)lVar15 + 1;
                uVar13 = 0xffffffff;
                goto LAB_1414ff6bb;
              }
              iVar12 = iVar12 + 0x20;
              lVar15 = lVar15 + 1;
            } while (iVar4 - lVar14 != lVar15);
            uVar13 = 0xffffffff;
            iVar9 = iVar4;
          }
          iVar9 = iVar9 + 1;
          iVar8 = iVar3;
        }
        else {
LAB_1414ff6bb:
          uVar17 = (ulonglong)(-uVar10 & uVar10);
          uVar2 = uVar17 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar8 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar8) {
            iVar8 = iVar3;
          }
        }
      } while (iVar8 != iVar11 || plVar7 != plVar1);
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    plVar7 = local_70;
    *param_1 = *local_70;
    *local_70 = 0;
    *(int *)(param_1 + 1) = (int)local_70[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)local_70 + 0xc);
    local_70[1] = 0;
    if (local_70[4] == 0) {
      uVar5 = *(undefined4 *)((longlong)local_70 + 0x14);
      lVar14 = local_70[3];
      uVar6 = *(undefined4 *)((longlong)local_70 + 0x1c);
      *(int *)plVar1 = (int)local_70[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
      *(int *)(param_1 + 3) = (int)lVar14;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar6;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = plVar7[4];
    plVar7[4] = 0;
    *(int *)(param_1 + 5) = (int)plVar7[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)plVar7 + 0x2c);
    plVar7[5] = 0;
    *(int *)(param_1 + 6) = (int)plVar7[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)plVar7 + 0x34);
    plVar7[6] = 0xffffffff;
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1414ff806 FUN_1414ff806 body=14 status=ok
// SIG undefined FUN_1414ff806(void)

undefined1 * FUN_1414ff806(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  return param_1;
}



// FUNCTION 1414ff814 FUN_1414ff814 body=793 status=ok
// SIG undefined FUN_1414ff814(void)

undefined8 FUN_1414ff814(undefined8 *param_1,uint *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 uVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong *local_48;
  uint local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_3 != 0) {
    lVar9 = FUN_140ed0d96(param_3 + 3);
    if (lVar9 != 0) {
      lVar9 = *param_3;
      plVar3 = (longlong *)param_3[1];
      if (plVar3 == (longlong *)0x0) {
        local_58 = *(undefined8 *)*param_1;
        local_48 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
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
        local_58 = *(undefined8 *)*param_1;
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        local_48 = plVar3;
      }
      uStack_50 = lVar9;
      FUN_140f360c6(lVar9,&local_68,&local_58);
      plVar1 = local_60;
      if (param_2 + 10 != (uint *)&local_68) {
        *(undefined8 *)(param_2 + 10) = local_68;
        local_68 = 0;
        plVar4 = *(longlong **)(param_2 + 0xc);
        if (local_60 != plVar4) {
          local_60 = (longlong *)0x0;
          *(longlong **)(param_2 + 0xc) = plVar1;
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
      }
      plVar1 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_60 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
      plVar1 = local_48;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_48 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
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
      lVar9 = FUN_140ed0d96(param_3 + 3);
      if (lVar9 == 0) {
        param_2[0] = 0;
        param_2[1] = 0;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[8] = 0;
        if ((int)param_2[9] < 0) {
          FUN_1446f8c06(param_2 + 6,0);
        }
        puVar5 = *(undefined2 **)(param_2 + 6);
        uVar10 = 1;
        if (puVar5 != (undefined2 *)0x0) {
          *puVar5 = 0;
        }
        goto LAB_1414ffac5;
      }
      FUN_1400bbfc4(&local_58,lVar9);
      param_2[2] = (uint)local_58;
      param_2[3] = local_58._4_4_;
      param_2[4] = (uint)uStack_50;
      param_2[5] = uStack_50._4_4_;
      if (param_2 + 2 == (uint *)&local_58) {
        if (local_48 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_2 + 6) != 0) {
          FUN_1400020a8();
        }
        *(longlong **)(param_2 + 6) = local_48;
        local_48 = (longlong *)0x0;
        param_2[8] = local_40;
        param_2[9] = local_3c;
      }
      cVar7 = (*(code *)PTR_FUN_14c758760)();
      uVar8 = *(uint *)(lVar9 + 0xc);
      if (cVar7 == '\0') {
LAB_1414ffa97:
        *param_2 = uVar8;
        if ((int)uVar8 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        uVar8 = *(uint *)(lVar9 + 0x10);
        if (*(uint *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar6 = DAT_14c964868 + 1;
          UNLOCK();
          uVar11 = DAT_14c964868 + 1;
          bVar12 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar6;
          if (bVar12) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar11);
          }
          LOCK();
          uVar8 = *(uint *)(lVar9 + 0x10);
          bVar12 = uVar8 == 0;
          if (bVar12) {
            *(uint *)(lVar9 + 0x10) = uVar11;
            uVar8 = 0;
          }
          UNLOCK();
          if (bVar12) {
            uVar8 = uVar11;
          }
        }
        param_2[1] = uVar8;
      }
      else {
        if ((int)uVar8 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        if ((*(uint *)(lVar9 + 8) & 0x8400000) == 0) goto LAB_1414ffa97;
        param_2[0] = 0;
        param_2[1] = 0;
      }
      uVar10 = 1;
      goto LAB_1414ffac5;
    }
  }
  uVar10 = 0;
LAB_1414ffac5:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 1414ffb2e FUN_1414ffb2e body=13 status=ok
// SIG undefined FUN_1414ffb2e(void)

void FUN_1414ffb2e(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2ac) = param_2;
  FUN_1448c6f34();
  return;
}



// FUNCTION 1414ffb3c FUN_1414ffb3c body=435 status=ok
// SIG undefined FUN_1414ffb3c(void)

void FUN_1414ffb3c(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar13 = 1;
    local_50._0_4_ = 0xffffffff;
    local_50._4_4_ = 0;
    local_60._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    uVar13 = local_60 >> 0x20;
  }
  plVar4 = local_58;
  iVar5 = (int)local_58[3];
  iVar14 = (int)local_60;
  uVar11 = (uint)local_50;
  iVar7 = local_50._4_4_;
  iVar10 = local_48;
  if (local_50._4_4_ < iVar5) {
    do {
      if (*(longlong *)(*param_1 + 0x28 + (longlong)iVar7 * 0x48) != 0) {
        FUN_1400020a8();
        iVar5 = (int)plVar4[3];
      }
      uVar11 = uVar11 & ~(uint)uVar13;
      plVar8 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar8 = plVar4;
      }
      lVar12 = (longlong)iVar14;
      uVar6 = *(uint *)((longlong)plVar8 + lVar12 * 4) & uVar11;
      if (uVar6 == 0) {
        iVar7 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar7 = iVar5 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar3 = iVar7;
        if (iVar7 < iVar14) {
          iVar3 = iVar14;
        }
        if (iVar7 <= iVar14) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar6 = *(uint *)((longlong)plVar8 + lVar9 * 4 + lVar12 * 4 + 4);
          if (uVar6 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar3 - lVar12 == lVar9) goto LAB_1414ffc89;
        }
        iVar14 = iVar14 + (int)lVar9 + 1;
        uVar11 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar6 & uVar6);
      uVar2 = uVar13 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar7 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar5);
  }
LAB_1414ffc89:
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
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414ffcf0 FUN_1414ffcf0 body=2231 status=ok
// SIG undefined FUN_1414ffcf0(void)

void FUN_1414ffcf0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined4 *_Src;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined *local_58;
  code *local_50;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = (undefined *)FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_30);
            goto LAB_1414ffddb;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_30) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_30,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_30,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_30,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_30,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
LAB_1414ffddb:
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = (undefined *)FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_38);
            goto LAB_1414ffea8;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_38) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_38,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_38,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_38,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_38,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
LAB_1414ffea8:
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = (undefined *)FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_40);
            goto LAB_1414fff75;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_40) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_40,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_40,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_40,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_40,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
LAB_1414fff75:
  local_44 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_50 = FUN_1405ebbb2;
      local_58 = &DAT_14c9520b8;
      local_60 = 0;
      local_68 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_44);
            goto LAB_141500041;
          }
        }
        _Src = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_44) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_44,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_44,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_44,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_44,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
LAB_141500041:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = CONCAT44(local_68._4_4_,local_44);
  FUN_1415005a8(param_1,local_30,local_38,local_40);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415005a8 FUN_1415005a8 body=216 status=ok
// SIG undefined FUN_1415005a8(void)

void FUN_1415005a8(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  
  if ((param_3 != 0) && (uVar7 = (ulonglong)*(int *)(param_1 + 0x680), 0 < (longlong)uVar7)) {
    lVar5 = uVar7 * 0x48;
    do {
      lVar5 = lVar5 + -0x48;
      lVar3 = FUN_14485cccc(*(longlong *)(param_1 + 0x678) + lVar5);
      if ((lVar3 == param_3) &&
         (lVar3 = FUN_14479d2ce(*(longlong *)(param_1 + 0x678) + lVar5 + 0x20), lVar3 == param_4)) {
        iVar1 = *(int *)(param_1 + 0x680);
        if (iVar1 != (int)uVar7) {
          iVar4 = iVar1 - (int)uVar7;
          iVar6 = 1;
          if (iVar4 < 1) {
            iVar6 = iVar4;
          }
          memmove((void *)(lVar5 + *(longlong *)(param_1 + 0x678)),
                  (void *)(*(longlong *)(param_1 + 0x678) + (longlong)(iVar1 - iVar6) * 0x48),
                  (longlong)iVar6 * 0x48);
          uVar7 = (ulonglong)*(uint *)(param_1 + 0x680);
        }
        *(int *)(param_1 + 0x680) = (int)uVar7 + -1;
        return;
      }
      bVar2 = 1 < uVar7;
      uVar7 = uVar7 - 1;
    } while (bVar2);
  }
  return;
}



// FUNCTION 141500680 FUN_141500680 body=275 status=ok
// SIG undefined FUN_141500680(void)

void FUN_141500680(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined4 local_68;
  undefined1 *local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x2b8) == 0) {
    if ((int)param_3[1] != 0) {
      plVar1 = (longlong *)*param_3;
      if (plVar1 == (longlong *)0x0) goto LAB_14150074e;
      (**(code **)(*plVar1 + 0x60))(plVar1,param_2,3);
    }
  }
  else {
    if (*(int *)(param_1 + 0x110) == (int)param_2) {
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
    local_70 = *param_3;
    *param_3 = 0;
    local_68 = (undefined4)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
    local_30 = &LAB_143efbe48;
    local_28 = &LAB_143efbe6a;
    local_20 = &LAB_143efbe7e;
    local_18 = FUN_143efbea8;
    bifrost::messaging::leaveRoom(*(undefined8 *)(param_1 + 0x2b8));
  }
  puVar2 = (undefined8 *)*param_3;
  if ((int)param_3[1] != 0) {
    if (puVar2 == (undefined8 *)0x0) goto LAB_14150074e;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(param_3,0,0,0x10);
    *(undefined4 *)(param_3 + 1) = 0;
    puVar2 = (undefined8 *)*param_3;
  }
  if (puVar2 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14150074e:
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141500794 FUN_141500794 body=850 status=ok
// SIG undefined FUN_141500794(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_141500794(undefined4 *param_1,undefined8 *param_2,undefined8 param_3)

{
  ushort uVar1;
  undefined1 *puVar2;
  ushort *puVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  ushort *puVar10;
  undefined1 auStack_c38 [40];
  undefined8 local_c10;
  undefined8 local_c08;
  undefined8 uStack_c00;
  undefined8 local_bf8;
  undefined8 uStack_bf0;
  undefined1 *local_be0 [239];
  undefined1 *local_468;
  undefined1 *local_460;
  ulonglong *local_458;
  char local_450;
  undefined1 local_448 [1024];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c38;
  local_468 = local_448;
  local_450 = '\0';
  local_458 = &local_48;
  puVar10 = (ushort *)*param_2;
  iVar9 = *(int *)(param_2 + 1);
  local_c08 = local_c08 & 0xffffffff00000000;
  local_be0[0] = (undefined1 *)CONCAT44(local_be0[0]._4_4_,0x7fffffff);
  puVar8 = puVar10;
  iVar7 = iVar9;
  local_c10 = param_3;
  local_460 = local_468;
  do {
    if (iVar7 < 1) {
LAB_141500885:
      iVar7 = (int)local_c08;
      if (0x3ff < (longlong)(int)local_c08) {
        FUN_1402134d6(&local_468,(longlong)(int)local_c08);
      }
      goto LAB_141500893;
    }
    uVar1 = *puVar8;
    uVar6 = (uint)uVar1;
    puVar3 = puVar8 + 1;
    iVar4 = iVar7 + -1;
    if ((uVar1 & 0xfc00) == 0xd800) {
      if (iVar7 == 1) {
        cVar5 = FUN_140024707(uVar6,&local_c08,local_be0);
        if (cVar5 != '\0') goto LAB_141500885;
        break;
      }
      if ((*puVar3 & 0xfc00) == 0xdc00) {
        uVar6 = (uint)uVar1 * 0x400 + (uint)*puVar3 + 0xfca02400;
        puVar3 = puVar8 + 2;
        iVar4 = iVar7 + -2;
      }
    }
    iVar7 = iVar4;
    puVar8 = puVar3;
    cVar5 = FUN_140024707(uVar6,&local_c08,local_be0);
  } while (cVar5 != '\0');
  iVar7 = -1;
LAB_141500893:
  puVar2 = local_460;
  if (iVar9 != 0) {
    local_be0[0] = local_460;
    local_c08 = CONCAT44(local_c08._4_4_,iVar7);
    do {
      if (iVar9 < 1) {
LAB_141500949:
        local_460 = local_be0[0];
        if ((int)local_be0[0] - (int)puVar2 != -1) goto LAB_141500962;
        break;
      }
      uVar1 = *puVar10;
      uVar6 = (uint)uVar1;
      puVar8 = puVar10 + 1;
      iVar7 = iVar9 + -1;
      if ((uVar1 & 0xfc00) == 0xd800) {
        if (iVar9 == 1) {
          cVar5 = FUN_1400247af(uVar6,local_be0,&local_c08);
          if (cVar5 != '\0') goto LAB_141500949;
          break;
        }
        if ((*puVar8 & 0xfc00) == 0xdc00) {
          uVar6 = (uint)uVar1 * 0x400 + (uint)*puVar8 + 0xfca02400;
          puVar8 = puVar10 + 2;
          iVar7 = iVar9 + -2;
        }
      }
      iVar9 = iVar7;
      cVar5 = FUN_1400247af(uVar6,local_be0,&local_c08);
      puVar10 = puVar8;
    } while (cVar5 != '\0');
    local_460 = (undefined1 *)0x0;
  }
LAB_141500962:
  FUN_144b46480(local_be0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c868270) && (FUN_144b3d300(&DAT_14c868270), DAT_14c868270 == -1)) {
    FUN_140056680(&local_c08,L"182b8dd3-f963-477f-a57d-70a339d922d8");
    cVar5 = FUN_140b10a34(&local_c08,&DAT_14c868260);
    if (cVar5 == '\0') {
      _DAT_14c868260 = 0;
      uRam000000014c868268 = 0;
    }
    if (local_c08 != 0) {
      FUN_1400020a8();
    }
    _Init_thread_footer(&DAT_14c868270);
  }
  FUN_144b47410(local_be0,&DAT_14c868260,0x10);
  FUN_144b47410(local_be0,&local_c10,8);
  FUN_144b47410(local_be0,local_468,(longlong)((int)local_460 - (int)local_468));
  local_bf8 = 0;
  uStack_bf0 = 0;
  local_c08 = 0;
  uStack_c00 = 0;
  FUN_144b45d30(local_be0,&local_c08,0x20);
  *param_1 = (int)local_c08;
  param_1[1] = local_c08._4_4_ & 0xffff0fff | 0x3000;
  param_1[2] = (uint)uStack_c00 & 0x3fffffff | 0x80000000;
  param_1[3] = uStack_c00._4_4_;
  if (local_450 == '\x01') {
    FUN_1400020a8(local_468);
  }
  if ((local_48 ^ (ulonglong)auStack_c38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 141500ae8 FUN_141500ae8 body=589 status=ok
// SIG undefined FUN_141500ae8(void)

void FUN_141500ae8(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 *local_58;
  int local_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *param_1;
  if (((*(longlong *)(lVar3 + 0x450) == 0) || (*(longlong *)(lVar3 + 0x458) == 0)) ||
     (*(int *)(*(longlong *)(lVar3 + 0x458) + 8) < 1)) {
    uVar6 = FUN_1401cb356();
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,3,0x10);
    puVar5 = local_58;
    local_50 = 3;
    *local_58 = &PTR_LAB_149e02020;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    local_58[2] = lVar7;
    *local_58 = &PTR_FUN_14b9713b0;
    local_58[3] = 0;
    iVar9 = 0;
    if (lVar3 != 0) {
      uVar2 = *(uint *)(lVar3 + 0xc);
      *(uint *)(local_58 + 3) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      iVar9 = *(int *)(lVar10 + 0x10);
      if (*(int *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar9 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar9;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar9 = *(int *)(lVar10 + 0x10);
        bVar11 = iVar9 == 0;
        if (bVar11) {
          *(int *)(lVar10 + 0x10) = iVar8;
          iVar9 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar9 = iVar8;
        }
      }
    }
    *(int *)((longlong)puVar5 + 0x1c) = iVar9;
    puVar5[4] = &LAB_145c46262;
    *(undefined4 *)(puVar5 + 5) = 0;
    local_68 = 0x3f000000;
    FUN_1405f67fc(uVar6,&local_48,&local_58,L"UOakGameInstance.CheckCanUnForceLoadingScreen");
    *(undefined8 *)(lVar3 + 0x450) = local_48;
    local_48 = 0;
    plVar4 = *(longlong **)(lVar3 + 0x458);
    *(longlong **)(lVar3 + 0x458) = local_40;
    local_40 = (longlong *)0x0;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
      if (local_40 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_40 + 0x10))();
        }
      }
    }
    if (local_50 != 0) {
      if (local_58 == (undefined8 *)0x0) goto LAB_141500ca7;
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      local_50 = 0;
    }
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_141500ca7:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141500d36 FUN_141500d36 body=212 status=ok
// SIG undefined FUN_141500d36(void)

void FUN_141500d36(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *param_1;
  if (((*(longlong *)(lVar2 + 0x450) != 0) && (*(longlong *)(lVar2 + 0x458) != 0)) &&
     (0 < *(int *)(*(longlong *)(lVar2 + 0x458) + 8))) {
    FUN_1401cb356();
    local_20 = *(undefined8 *)(lVar2 + 0x450);
    local_18 = *(longlong *)(lVar2 + 0x458);
    if (local_18 != 0) {
      LOCK();
      *(int *)(local_18 + 0xc) = *(int *)(local_18 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_20);
    plVar3 = *(longlong **)(lVar2 + 0x458);
    *(undefined8 *)(lVar2 + 0x450) = 0;
    *(undefined8 *)(lVar2 + 0x458) = 0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
  }
  if ((*(float *)(lVar2 + 0x470) != 0.0) || (NAN(*(float *)(lVar2 + 0x470)))) {
    FUN_146010374(lVar2,0,0);
    FUN_145a12516(lVar2);
  }
  *(undefined4 *)(lVar2 + 0x470) = 0xbf800000;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141500e0c FUN_141500e0c body=218 status=ok
// SIG undefined FUN_141500e0c(void)

undefined8 * FUN_141500e0c(undefined8 *param_1)

{
  param_1[1] = 0;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfc;
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  *param_1 = &PTR_FUN_14a1d8490;
  param_1[3] = 0;
  FUN_1409e16e4(param_1 + 4);
  param_1[0x40] = DAT_14caa8578;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x216) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21e) = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined2 *)(param_1 + 0x47) = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined8 *)((longlong)param_1 + 0x27c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x284) = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0xffffffff;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x59) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2cc) = 0;
  return param_1;
}



// FUNCTION 141500ee6 FUN_141500ee6 body=569 status=ok
// SIG undefined FUN_141500ee6(void)

void FUN_141500ee6(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 auStack_98 [36];
  int local_74;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar12 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar12 = local_68 >> 0x20;
  }
  plVar4 = local_60;
  iVar13 = (int)local_68;
  uVar11 = (uint)local_58;
  iVar6 = local_58._4_4_;
  iVar10 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar9 = *param_1;
      lVar8 = (longlong)iVar6 * 0x1d0;
      local_74 = iVar10;
      if (*(longlong *)(lVar9 + 0x1b8 + lVar8) != 0) {
        FUN_1400020a8();
      }
      *(undefined4 *)(lVar9 + 0x1b0 + lVar8) = 0;
      if (*(longlong *)(lVar9 + 0x1a8 + lVar8) != 0) {
        FUN_1400020a8();
      }
      FUN_140e91296(lVar9 + lVar8 + 0x168);
      FUN_141445ca8(lVar9 + lVar8 + 0x10);
      uVar11 = uVar11 & ~(uint)uVar12;
      plVar7 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar7 = plVar4;
      }
      iVar2 = (int)plVar4[3];
      lVar9 = (longlong)iVar13;
      uVar5 = *(uint *)((longlong)plVar7 + lVar9 * 4) & uVar11;
      iVar10 = local_74;
      if (uVar5 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar3 = iVar6;
        if (iVar6 < iVar13) {
          iVar3 = iVar13;
        }
        if (iVar6 <= iVar13) break;
        lVar8 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar8 * 4 + lVar9 * 4 + 4);
          if (uVar5 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar3 - lVar9 == lVar8) goto LAB_1415010b3;
        }
        iVar13 = iVar13 + (int)lVar8 + 1;
        uVar11 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar12 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_1415010b3:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_145c467ea(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141501120 FUN_141501120 body=4 status=ok
// SIG undefined FUN_141501120(void)

void FUN_141501120(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// FUNCTION 141501124 FUN_141501124 body=73 status=ok
// SIG undefined FUN_141501124(void)

undefined8 FUN_141501124(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    if (*(int *)(puVar3 + 2) != *(int *)(param_1 + 0xc)) {
      return 0;
    }
    if ((*(uint *)(puVar3 + 1) & 0x10200000) != 0) {
      return 0;
    }
    uVar2 = *puVar3;
  }
  return uVar2;
}



// FUNCTION 14150116e FUN_14150116e body=593 status=ok
// SIG undefined FUN_14150116e(void)

void FUN_14150116e(longlong param_1,char param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  char local_78;
  longlong *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = FUN_1447210f0();
  if (((lVar4 != 0) && (*(longlong *)(param_1 + 10000) != 0)) &&
     ((longlong)*(int *)(param_1 + 0x2af0) != 0)) {
    lVar8 = (longlong)*(int *)(param_1 + 0x2af0) << 6;
    lVar4 = *(longlong *)(param_1 + 0x2ae8) + 0x20;
    plVar7 = (longlong *)(param_1 + 0x29b8);
    do {
      if ((*(longlong **)(lVar4 + -0x20) != (longlong *)0x0) &&
         (cVar2 = (**(code **)(**(longlong **)(lVar4 + -0x20) + 0x6c8))(), cVar2 != '\0')) {
        if (param_2 == '\0') {
          lVar6 = *(longlong *)(lVar4 + -0x20);
          if ((DAT_14c950c29 == '\x01') && (lVar6 != 0)) {
            FUN_1456cec3c(lVar6);
          }
          local_58 = 0;
          FUN_14485c47a(&local_58,lVar6);
          local_50 = local_58;
          iVar3 = FUN_145c490d8(plVar7,(uint)((ulonglong)local_58 >> 0x20) ^ (uint)local_58,
                                &local_50);
          if (iVar3 != -1) {
            lVar6 = *(longlong *)(lVar4 + -0x20);
            if ((DAT_14c950c29 == '\x01') && (lVar6 != 0)) {
              FUN_1456cec3c(lVar6);
            }
            local_60 = 0;
            FUN_14485c47a(&local_60,lVar6);
            local_50 = local_60;
            iVar3 = FUN_145c490d8(plVar7,(uint)((ulonglong)local_60 >> 0x20) ^ (uint)local_60,
                                  &local_50);
            if (iVar3 == -1) {
              lVar6 = 0;
            }
            else {
              lVar6 = (longlong)iVar3 * 0x14 + *plVar7;
            }
            if (*(int *)(lVar6 + 8) == *(int *)(lVar4 + -0x18)) goto LAB_141501293;
          }
        }
        local_68 = plVar7;
        FUN_1412ea1b8(param_1,*(undefined8 *)(lVar4 + -0x20));
        uVar1 = *(undefined1 *)(lVar4 + 0x14);
        lVar6 = *(longlong *)(lVar4 + -0x20);
        if ((DAT_14c950c29 == '\x01') && (lVar6 != 0)) {
          FUN_1456cec3c(lVar6);
        }
        local_50 = 0;
        FUN_14485c47a(&local_50,lVar6);
        puVar5 = (undefined1 *)
                 FUN_141121064(param_1 + 0x28c0,(uint)((ulonglong)local_50 >> 0x20) ^ (uint)local_50
                               ,&local_50);
        *puVar5 = uVar1;
        local_80 = *(undefined4 *)(lVar4 + 0x10);
        local_88 = *(undefined4 *)(lVar4 + -0x18);
        local_78 = param_2;
        FUN_14088f68a(param_1,*(undefined8 *)(lVar4 + -0x20),lVar4 + -0x10,lVar4);
        plVar7 = local_68;
      }
LAB_141501293:
      lVar4 = lVar4 + 0x40;
      lVar8 = lVar8 + -0x40;
    } while (lVar8 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415013c0 FUN_1415013c0 body=698 status=ok
// SIG undefined FUN_1415013c0(void)

void FUN_1415013c0(longlong param_1,undefined4 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  void *pvVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined1 auStack_a8 [36];
  undefined4 local_84;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong *local_68;
  char local_59;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  uStack_50 = 0;
  lVar7 = param_3[1];
  local_84 = param_2;
  if ((longlong)(int)lVar7 != 0) {
    lVar5 = *param_3;
    local_78 = param_1 + 0x3d8;
    lVar12 = 0;
    local_80 = param_1;
    do {
      local_59 = '\0';
      FUN_14482b35e(local_78,&local_70,lVar5 + 8 + lVar12,&local_59);
      uVar8 = uStack_50;
      if (local_59 == '\0') {
        lVar10 = (longlong)(int)uStack_50;
        uVar9 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar9);
        if (uStack_50._4_4_ < uVar9) {
          FUN_145c69d66(&local_58,uVar8 & 0xffffffff);
        }
        lVar10 = lVar10 * 0x40;
        lVar3 = local_58 + lVar10;
        *(undefined4 *)(local_58 + lVar10) = *(undefined4 *)(lVar5 + lVar12);
        *(undefined8 *)(local_58 + 8 + lVar10) = 0;
        iVar4 = *(int *)(lVar5 + 0x10 + lVar12);
        pvVar6 = *(void **)(lVar5 + 8 + lVar12);
        *(int *)(local_58 + 0x10 + lVar10) = iVar4;
        if ((longlong)iVar4 == 0) {
          *(undefined4 *)(lVar3 + 0x14) = 0;
        }
        else {
          puVar11 = (undefined8 *)(lVar10 + local_58 + 8);
          FUN_1446dd670(puVar11,iVar4,0);
          memcpy((void *)*puVar11,pvVar6,(longlong)iVar4 * 2);
        }
        *(undefined8 *)(lVar3 + 0x18) = 0;
        iVar4 = *(int *)(lVar5 + 0x20 + lVar12);
        pvVar6 = *(void **)(lVar5 + 0x18 + lVar12);
        *(int *)(lVar3 + 0x20) = iVar4;
        if ((longlong)iVar4 == 0) {
          *(undefined4 *)(lVar3 + 0x24) = 0;
        }
        else {
          FUN_1446dd670((undefined8 *)(lVar3 + 0x18),iVar4,0);
          memcpy(*(void **)(lVar3 + 0x18),pvVar6,(longlong)iVar4 * 2);
        }
        *(undefined8 *)(lVar3 + 0x28) = 0;
        iVar4 = *(int *)(lVar5 + 0x30 + lVar12);
        pvVar6 = *(void **)(lVar5 + 0x28 + lVar12);
        *(int *)(lVar3 + 0x30) = iVar4;
        if ((longlong)iVar4 == 0) {
          *(undefined4 *)(lVar3 + 0x34) = 0;
        }
        else {
          FUN_1446dd670((undefined8 *)(lVar3 + 0x28),iVar4,0);
          memcpy(*(void **)(lVar3 + 0x28),pvVar6,(longlong)iVar4 * 2);
        }
        *(undefined2 *)(lVar3 + 0x38) = *(undefined2 *)(lVar5 + 0x38 + lVar12);
      }
      lVar12 = lVar12 + 0x40;
    } while ((longlong)(int)lVar7 * 0x40 != lVar12);
    if (0 < (int)uStack_50) {
      (**(code **)(**(longlong **)(local_80 + 0x380) + 0xb8))
                (*(longlong **)(local_80 + 0x380),&local_70);
      if (local_68 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_68 + 1) = (int)local_68[1] + 1;
        UNLOCK();
        if (local_68 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_68 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_68)(local_68);
            LOCK();
            piVar2 = (int *)((longlong)local_68 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_68 + 0x10))(local_68);
            }
          }
        }
      }
      if (local_70 != 0) {
        FUN_14150169e(local_70,local_84,&local_58);
      }
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_68 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar2 = (int *)((longlong)local_68 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_68 + 0x10))(local_68);
          }
        }
      }
    }
  }
  FUN_141323308(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14150169e FUN_14150169e body=670 status=ok
// SIG undefined FUN_14150169e(void)

void FUN_14150169e(undefined8 param_1,undefined4 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_b8 [36];
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  longlong local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 *local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_3[1];
  local_90 = param_1;
  if ((longlong)(int)lVar3 == 0) {
    local_70 = 0;
    local_80 = param_2;
  }
  else {
    lVar2 = *param_3;
    lVar9 = 0;
    local_94 = param_2;
    do {
      uVar4 = uStack_50;
      lVar10 = (longlong)(int)uStack_50;
      uVar5 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
      if (uStack_50._4_4_ < uVar5) {
        FUN_1447a1bd6(&local_58,uVar4 & 0xffffffff);
      }
      lVar10 = lVar10 * 0x10;
      puVar6 = (undefined8 *)(local_58 + lVar10);
      *(undefined8 *)(local_58 + lVar10) = 0;
      iVar1 = *(int *)(lVar2 + 0x20 + lVar9);
      _Src = *(void **)(lVar2 + 0x18 + lVar9);
      *(int *)(local_58 + 8 + lVar10) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar6,iVar1,0);
        memcpy((void *)*puVar6,_Src,(longlong)iVar1 * 2);
      }
      uVar7 = local_90;
      uVar8 = local_94;
      lVar9 = lVar9 + 0x40;
    } while ((longlong)(int)lVar3 * 0x40 != lVar9);
    iVar1 = (int)param_3[1];
    lVar3 = *param_3;
    local_88 = local_90;
    local_80 = local_94;
    local_78 = 0;
    local_70 = iVar1;
    if (iVar1 != 0) {
      FUN_145c496b4(&local_78,iVar1,0);
      FUN_14150193d(local_78,lVar3,iVar1);
      goto LAB_1415017b1;
    }
  }
  local_78 = 0;
  local_6c = 0;
  uVar7 = local_90;
  local_88 = local_90;
  uVar8 = local_80;
LAB_1415017b1:
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  FUN_1446efa72(&local_68,0,4,0x10);
  iVar1 = local_70;
  lVar3 = local_78;
  local_60 = 4;
  *local_68 = &PTR_LAB_14b4f7950;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_68[2] = lVar9;
  *local_68 = &PTR_FUN_14ba41240;
  local_68[3] = local_88;
  *(undefined4 *)(local_68 + 4) = local_80;
  local_68[5] = 0;
  *(int *)(local_68 + 6) = local_70;
  if (local_70 == 0) {
    *(undefined4 *)((longlong)local_68 + 0x34) = 0;
  }
  else {
    puVar6 = local_68 + 5;
    FUN_145c496b4(puVar6,local_70,0);
    FUN_14150193d(*puVar6,lVar3,iVar1);
  }
  FUN_145c49716(uVar7,uVar8,&local_58,&local_68);
  FUN_1449db362(&local_68);
  FUN_141323308(local_78,local_70);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14150193d FUN_14150193d body=289 status=ok
// SIG undefined FUN_14150193d(void)

void FUN_14150193d(longlong param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x28);
    do {
      *(undefined4 *)(puVar3 + -5) = *param_2;
      puVar3[-4] = 0;
      iVar1 = param_2[4];
      pvVar2 = *(void **)(param_2 + 2);
      *(int *)(puVar3 + -3) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + -0x14) = 0;
      }
      else {
        FUN_1446dd670(puVar3 + -4,iVar1,0);
        memcpy((void *)puVar3[-4],pvVar2,(longlong)iVar1 * 2);
      }
      puVar3[-2] = 0;
      iVar1 = param_2[8];
      pvVar2 = *(void **)(param_2 + 6);
      *(int *)(puVar3 + -1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + -4) = 0;
      }
      else {
        FUN_1446dd670(puVar3 + -2,iVar1,0);
        memcpy((void *)puVar3[-2],pvVar2,(longlong)iVar1 * 2);
      }
      *puVar3 = 0;
      iVar1 = param_2[0xc];
      pvVar2 = *(void **)(param_2 + 10);
      *(int *)(puVar3 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar3,iVar1,0);
        memcpy((void *)*puVar3,pvVar2,(longlong)iVar1 * 2);
      }
      *(undefined2 *)(puVar3 + 2) = *(undefined2 *)(param_2 + 0xe);
      param_2 = param_2 + 0x10;
      puVar3 = puVar3 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 141501a5e FUN_141501a5e body=816 status=ok
// SIG undefined FUN_141501a5e(void)

undefined8 * FUN_141501a5e(undefined8 *param_1,longlong *param_2)

{
  ulonglong uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  uint *puVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_b8 [43];
  byte local_8d;
  uint local_8c;
  undefined8 *local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  param_1[1] = param_2;
  uVar20 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14a4517a0;
  puVar7 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar7 = 0;
  puVar7[1] = &DAT_3f8000003f800000;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  param_1[3] = puVar7;
  fVar22 = (float)(**(code **)(*param_2 + 0x358))(param_2);
  local_80 = param_2;
  fVar23 = (float)(**(code **)(*param_2 + 0x350))(param_2);
  *(ulonglong *)(param_1[3] + 0x18) = CONCAT44((int)fVar22,(int)fVar23);
  *(undefined8 **)(param_1[3] + 0x10) = param_1;
  *(undefined1 *)(param_1 + 2) = 0;
  local_88 = param_1;
  lVar8 = FUN_1410f9d84();
  if (lVar8 != 0) {
    iVar4 = *(int *)(lVar8 + 0x60);
    if (iVar4 == 0) {
      uVar19 = 1;
      iVar14 = 0;
      iVar6 = 0;
    }
    else {
      puVar9 = *(uint **)(lVar8 + 0x58);
      if (*(uint **)(lVar8 + 0x58) == (uint *)0x0) {
        puVar9 = (uint *)(lVar8 + 0x48);
      }
      uVar15 = *puVar9;
      if (uVar15 == 0) {
        iVar6 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar6 = iVar4 + -1;
        }
        uVar20 = 0;
        uVar19 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar19 = uVar20;
        }
        iVar14 = 0;
        do {
          if (uVar19 == uVar20) goto LAB_141501b9f;
          iVar14 = iVar14 + 0x20;
          uVar15 = puVar9[uVar20 + 1];
          uVar20 = uVar20 + 1;
        } while (uVar15 == 0);
      }
      else {
        uVar20 = 0;
        iVar14 = 0;
      }
      uVar19 = (ulonglong)(-uVar15 & uVar15);
      uVar1 = uVar19 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar6 = (iVar14 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
      if (iVar4 <= iVar6) {
        iVar6 = iVar4;
      }
    }
    if (iVar6 != iVar4) {
      uVar15 = 0xffffffff;
      do {
        lVar17 = *(longlong *)(lVar8 + 0x38);
        lVar10 = (longlong)iVar6 * 0x40;
        if ((*(byte *)(lVar17 + 8 + lVar10) & 1) != 0) {
          local_8d = *(byte *)(lVar17 + lVar10);
          local_78 = 0;
          uStack_70 = 0;
          local_8c = uVar15;
          FUN_1401031ac(local_80,0);
          uVar15 = local_8c;
          iVar6 = *(int *)(lVar17 + lVar10 + 0x20);
          if ((int)uStack_70 == iVar6) {
            bVar21 = true;
            if (1 < (int)uStack_70) {
              lVar16 = 0;
              while( true ) {
                uVar2 = *(ushort *)(local_78 + lVar16);
                uVar13 = (uint)uVar2;
                uVar3 = *(ushort *)(*(longlong *)(lVar17 + lVar10 + 0x18) + lVar16);
                uVar18 = (uint)uVar3;
                if (uVar2 != uVar3) {
                  if ((uVar3 | uVar2) < 0x80) {
                    uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    uVar18 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                    if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_141501c61;
                  }
                  iVar6 = uVar13 - uVar18;
                  goto LAB_141501cb2;
                }
                if (uVar2 == 0) break;
LAB_141501c61:
                lVar16 = lVar16 + 2;
              }
              iVar6 = 0;
LAB_141501cb2:
              bVar21 = iVar6 == 0;
            }
          }
          else {
            bVar21 = iVar6 + (int)uStack_70 == 1;
          }
          if (local_78 != 0) {
            FUN_1400020a8();
          }
          if (bVar21) {
            *(byte *)(local_88 + 2) = *(byte *)(local_88 + 2) | local_8d;
          }
        }
        uVar15 = uVar15 & ~(uint)uVar19;
        puVar9 = *(uint **)(lVar8 + 0x58);
        if (*(uint **)(lVar8 + 0x58) == (uint *)0x0) {
          puVar9 = (uint *)(lVar8 + 0x48);
        }
        iVar5 = *(int *)(lVar8 + 0x60);
        iVar6 = (int)uVar20;
        lVar17 = (longlong)iVar6;
        uVar13 = puVar9[lVar17] & uVar15;
        if (uVar13 == 0) {
          iVar11 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar11 = iVar5 + -1;
          }
          iVar11 = iVar11 >> 5;
          iVar14 = iVar14 + 0x20;
          iVar12 = iVar11;
          if (iVar11 < iVar6) {
            iVar12 = iVar6;
          }
          if (iVar6 < iVar11) {
            lVar10 = 0;
            do {
              uVar13 = puVar9[lVar17 + lVar10 + 1];
              if (uVar13 != 0) {
                uVar20 = (ulonglong)(iVar6 + (int)lVar10 + 1);
                uVar15 = 0xffffffff;
                goto LAB_141501d47;
              }
              iVar14 = iVar14 + 0x20;
              lVar10 = lVar10 + 1;
            } while (iVar12 - lVar17 != lVar10);
            uVar15 = 0xffffffff;
            iVar6 = iVar12;
          }
          uVar20 = (ulonglong)(iVar6 + 1);
          iVar6 = iVar5;
        }
        else {
LAB_141501d47:
          uVar19 = (ulonglong)(-uVar13 & uVar13);
          uVar1 = uVar19 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          iVar6 = (iVar14 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
          if (iVar5 <= iVar6) {
            iVar6 = iVar5;
          }
        }
      } while (iVar6 != iVar4);
    }
  }
LAB_141501b9f:
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_88;
}



// FUNCTION 141501d8f FUN_141501d8f body=48 status=ok
// SIG undefined FUN_141501d8f(void)

void FUN_141501d8f(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x10))();
      }
      plVar1 = plVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141501dc0 FUN_141501dc0 body=211 status=ok
// SIG undefined FUN_141501dc0(void)

void FUN_141501dc0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  FUN_145c4b092(param_1 + 0x68,0);
  FUN_145c4b180(param_1 + 0xb8,0);
  iVar1 = *(int *)(param_1 + 0x60);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x58);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (lVar3 != 0) {
        *(undefined4 *)(lVar3 + 0xa0) = 0;
        if (*(longlong *)(lVar3 + 0x98) != 0) {
          FUN_1400020a8();
        }
        FUN_140a1bd72(lVar3 + 0x58);
        *(undefined4 *)(lVar3 + 0x50) = 0;
        if (*(longlong *)(lVar3 + 0x48) != 0) {
          FUN_1400020a8();
        }
        FUN_140a1bdaa(lVar3 + 8);
        FUN_1400020a8(lVar3);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)(param_1 + 100) != 0) {
    FUN_145c4b26e(param_1 + 0x58,0);
  }
  *(undefined1 *)(param_1 + 0x22) = 0;
  return;
}



// FUNCTION 141501e94 FUN_141501e94 body=541 status=ok
// SIG undefined FUN_141501e94(void)

void FUN_141501e94(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar8 = local_58 >> 0x20;
    }
    iVar4 = (int)local_58;
    uVar5 = (uint)local_48;
    iVar6 = local_48._4_4_;
    iVar9 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar11 = *param_1;
        lVar10 = (longlong)iVar6;
        uVar13 = (longlong)(int)param_1[9] - 1U & (longlong)*(short *)(lVar11 + lVar10 * 0x18);
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x14 + lVar10 * 0x18) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x10 + lVar10 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar7 = local_50;
        }
        iVar12 = (int)local_50[3];
        lVar11 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar6 = iVar12 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar2 - lVar11 == lVar10) goto LAB_141502068;
          }
          iVar4 = iVar4 + (int)lVar10 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar13 = uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar12);
    }
  }
LAB_141502068:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415020b2 FUN_1415020b2 body=722 status=ok
// SIG undefined FUN_1415020b2(void)

void FUN_1415020b2(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar11 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar11 = local_68 >> 0x20;
    }
    iVar4 = (int)local_68;
    uVar5 = (uint)local_58;
    iVar6 = local_58._4_4_;
    iVar10 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar13 = *param_1;
        lVar12 = (longlong)iVar6 * 0x20;
        uVar3 = *(uint *)(lVar13 + lVar12);
        uVar14 = *(uint *)(lVar13 + 8 + lVar12);
        if (uVar14 != 0) {
          uVar16 = uVar14 >> 0xd ^ uVar3 - uVar14;
          uVar3 = uVar16 << 8 ^ (-0x61c88647 - uVar14) - uVar16;
          uVar14 = uVar3 >> 0xd ^ (uVar14 - uVar16) - uVar3;
          uVar15 = uVar14 >> 0xc ^ (uVar16 - uVar3) - uVar14;
          uVar3 = uVar15 << 0x10 ^ (uVar3 - uVar14) - uVar15;
          uVar16 = uVar3 >> 5 ^ (uVar14 - uVar15) - uVar3;
          uVar14 = uVar16 >> 3 ^ (uVar15 - uVar3) - uVar16;
          uVar3 = uVar14 << 10 ^ (uVar3 - uVar16) - uVar14;
          uVar3 = uVar3 >> 0xf ^ uVar16 - (uVar14 + uVar3);
        }
        uVar9 = (longlong)(int)uVar3 & (longlong)(int)param_1[9] - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar13 + lVar12 + 0x1c) = iVar8;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar13 + lVar12 + 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6;
        uVar5 = uVar5 & ~(uint)uVar11;
        plVar7 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar7 = local_60;
        }
        iVar8 = (int)local_60[3];
        lVar13 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar13 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar8 + 0x1e;
          if (-1 < iVar8 + -1) {
            iVar6 = iVar8 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar12 = 0;
          while( true ) {
            iVar10 = iVar10 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar12 * 4 + lVar13 * 4 + 4);
            if (uVar3 != 0) break;
            lVar12 = lVar12 + 1;
            if (iVar2 - lVar13 == lVar12) goto LAB_14150235d;
          }
          iVar4 = iVar4 + (int)lVar12 + 1;
          uVar5 = 0xffffffff;
        }
        uVar11 = (ulonglong)(-uVar3 & uVar3);
        uVar9 = uVar11 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar6 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar8);
    }
  }
LAB_14150235d:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141502386 FUN_141502386 body=305 status=ok
// SIG undefined FUN_141502386(void)

void FUN_141502386(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_141502420;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  iVar3 = 0;
  if ((int)param_2[1] == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    param_2 = (longlong *)*param_2;
    puVar2 = (undefined8 *)0x0;
    iVar3 = 0;
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_30);
      puVar2 = local_30;
      iVar3 = local_28;
    }
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_1415023f9:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_1415023f9;
    }
  }
  *param_1 = (longlong)puVar2;
  *(int *)(param_1 + 1) = iVar3;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_141502420;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_141502420:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415024b8 FUN_1415024b8 body=352 status=ok
// SIG undefined FUN_1415024b8(void)

void FUN_1415024b8(undefined8 *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  void *_Src;
  undefined1 auStack_68 [32];
  void *local_48;
  ulonglong uStack_40;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (void *)0x0;
  uVar2 = *(uint *)(param_1 + 1);
  _Src = (void *)*param_1;
  uStack_30 = CONCAT44(uStack_30._4_4_,uVar2);
  if ((longlong)(int)uVar2 == 0) {
    uStack_30 = (ulonglong)uVar2;
    lVar4 = 0;
  }
  else {
    FUN_1446dd670(&local_38,uVar2,0);
    memcpy(local_38,_Src,(longlong)(int)uVar2 * 2);
    _Src = (void *)*param_1;
    lVar4 = (longlong)*(int *)(param_1 + 1);
  }
  uVar5 = lVar4 * 2;
  do {
    if (uVar5 == 0) goto LAB_14150253e;
    uVar1 = uVar5 - 2;
    lVar4 = uVar5 - 2;
    uVar5 = uVar1;
  } while (*(short *)((longlong)_Src + lVar4) != 0x2f);
  iVar6 = (int)(uVar1 >> 1);
  if (iVar6 != -1) {
    FUN_144a49bb4(param_1,&local_48,iVar6 + 1);
    if (local_38 != (void *)0x0) {
      FUN_1400020a8();
    }
    local_38 = local_48;
    uStack_30 = uStack_40;
  }
LAB_14150253e:
  cVar3 = FUN_144a38768(&local_38,L".umap",5,1);
  if (cVar3 != '\0') {
    iVar6 = (int)uStack_30 + -1;
    if ((int)uStack_30 == 0) {
      iVar6 = 0;
    }
    if (iVar6 < 6) {
      iVar6 = 5;
    }
    FUN_14496493a(&local_38,iVar6 + -5,5,1);
  }
  iVar6 = (int)uStack_30 + -1;
  if ((int)uStack_30 == 0) {
    iVar6 = 0;
  }
  FUN_1402980a2(param_1,local_38,iVar6);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14150261a FUN_14150261a body=8 status=ok
// SIG undefined FUN_14150261a(void)

undefined8 FUN_14150261a(void)

{
  return DAT_14cb84f20;
}



// FUNCTION 141502622 FUN_141502622 body=185 status=ok
// SIG undefined FUN_141502622(void)

void FUN_141502622(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = 0;
    do {
      *(undefined4 *)(param_1 + lVar4) = *(undefined4 *)(param_2 + lVar4);
      puVar1 = (undefined8 *)(param_1 + 8 + lVar4);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(param_1 + 0x18 + lVar4) = 0;
      *(undefined8 *)(param_1 + 8 + lVar4) = *(undefined8 *)(param_2 + 8 + lVar4);
      uVar3 = FUN_14477b664(*(undefined8 *)(param_2 + 0x10 + lVar4));
      uVar3 = FUN_14477b664(uVar3);
      *(undefined8 *)(param_1 + 0x10 + lVar4) = uVar3;
      *(undefined8 *)(param_1 + 0x18 + lVar4) = *(undefined8 *)(param_2 + 0x18 + lVar4);
      puVar1 = (undefined8 *)(param_2 + 0x20 + lVar4);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(param_1 + 0x20 + lVar4);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      *(undefined8 *)(param_1 + 0x30 + lVar4) = *(undefined8 *)(param_2 + 0x30 + lVar4);
      *(undefined4 *)(param_1 + 0x38 + lVar4) = *(undefined4 *)(param_2 + 0x38 + lVar4);
      *(undefined8 *)(param_1 + 0x40 + lVar4) = 0;
      *(undefined4 *)(param_1 + 0x48 + lVar4) = *(undefined4 *)(param_2 + 0x48 + lVar4);
      lVar4 = lVar4 + 0x50;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1415026dc FUN_1415026dc body=226 status=ok
// SIG undefined FUN_1415026dc(void)

longlong * FUN_1415026dc(longlong *param_1)

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
  pcVar13 = FUN_1467626da;
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



// FUNCTION 1415027c0 FUN_1415027c0 body=353 status=ok
// SIG undefined FUN_1415027c0(void)

void FUN_1415027c0(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141502845;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_141502845:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 141502922 FUN_141502922 body=865 status=ok
// SIG undefined FUN_141502922(void)

void FUN_141502922(longlong *param_1,undefined8 *param_2,char param_3)

{
  int iVar1;
  code *pcVar2;
  longlong *plVar3;
  void *_Src;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  longlong **pplVar11;
  undefined1 auStack_198 [40];
  ulonglong local_170;
  longlong *local_168;
  undefined4 local_160 [2];
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined1 local_14c;
  longlong *local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  longlong *local_138;
  undefined4 local_130;
  void *local_f0;
  int local_e8;
  int local_e4;
  undefined4 local_e0;
  undefined1 local_dc;
  undefined8 local_cc;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_198;
  plVar6 = (longlong *)FUN_140944864(param_2);
  if (plVar6 == (longlong *)0x0) goto LAB_141502989;
  lVar7 = (**(code **)(*plVar6 + 8))(plVar6);
  lVar8 = FUN_14086ad12();
  if (((lVar8 == 0) || (*(int *)(lVar7 + 0x38) < *(int *)(lVar8 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
      lVar8 + 0x30)) goto LAB_141502989;
  uVar9 = (**(code **)(*param_1 + 0x180))(param_1);
  cVar4 = FUN_14435e60a(plVar6,uVar9);
  if (cVar4 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_198);
  }
  FUN_144256036(param_1,0,0);
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_168);
  FUN_14125b2cc(param_1);
  local_158 = (undefined4)*param_2;
  uStack_154 = (undefined4)((ulonglong)*param_2 >> 0x20);
  cVar4 = FUN_14125b594(param_1);
  if (param_3 == '\0') {
    if (cVar4 == '\0') {
      local_158 = 0x4b9a7560;
      local_150 = 0x10;
      goto LAB_141502a6e;
    }
  }
  else {
    local_158 = 0x4b9a7512;
    local_150 = 0x13;
LAB_141502a6e:
    uStack_154 = 1;
    local_14c = 0;
    uVar5 = FUN_14001a6c0(&local_158,1);
    local_170 = (ulonglong)uVar5;
    FUN_1446dcdd4(&local_158);
    lVar7 = FUN_1412095fe(&local_158);
    if (CONCAT44(uStack_13c,local_140) != 0) {
      FUN_1400020a8();
    }
    if (lVar7 != 0) {
      FUN_1412099d2(param_1,&DAT_14cbd5aa8);
      FUN_14125b7f0(&local_158);
      uStack_154 = (undefined4)*(undefined8 *)(lVar7 + 100);
      local_150 = (undefined4)((ulonglong)*(undefined8 *)(lVar7 + 100) >> 0x20);
      plVar6 = local_168;
      if (*(code **)(*local_168 + 0x50) != FUN_144828418) {
        plVar6 = (longlong *)(**(code **)(*local_168 + 0x50))();
      }
      FUN_1447a1fc0(plVar6);
      pcVar2 = *(code **)(*local_168 + 0x28);
      if (pcVar2 == FUN_14482841c) {
        plVar6 = local_168 + 3;
        if (local_168[5] != 0) {
          plVar6 = (longlong *)(local_168[5] + 8);
        }
      }
      else if (pcVar2 == (code *)&LAB_14010c34c) {
        plVar6 = local_168 + 2;
      }
      else {
        plVar6 = (longlong *)(*pcVar2)(local_168);
      }
      plVar3 = local_148;
      lVar8 = plVar6[1];
      pplVar11 = &local_168;
      if ((int)lVar8 < 2) {
        pplVar11 = (longlong **)(lVar7 + 0x28);
      }
      plVar6 = *pplVar11;
      if (local_148 != plVar6) {
        local_148 = plVar6;
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 8))();
        }
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      plVar6 = local_138;
      puVar10 = local_160;
      if ((int)lVar8 < 2) {
        puVar10 = (undefined4 *)(lVar7 + 0x30);
      }
      local_140 = *puVar10;
      plVar3 = *(longlong **)(lVar7 + 0x18);
      if (local_138 != plVar3) {
        local_138 = plVar3;
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 8))();
        }
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
      local_130 = *(undefined4 *)(lVar7 + 0x20);
      local_cc = *(undefined8 *)(lVar7 + 0xe4);
      local_dc = *(undefined1 *)(lVar7 + 0xd8);
      local_e0 = *(undefined4 *)(lVar7 + 0xdc);
      local_14c = *(undefined1 *)(lVar7 + 0x60);
      if (&local_f0 != (void **)(lVar7 + 200)) {
        iVar1 = *(int *)(lVar7 + 0xd0);
        _Src = *(void **)(lVar7 + 200);
        local_e8 = iVar1;
        if (iVar1 == 0 && local_e4 == 0) {
          local_e4 = 0;
        }
        else {
          FUN_1446dd670(&local_f0,iVar1);
          if (iVar1 != 0) {
            memcpy(local_f0,_Src,(longlong)iVar1 * 2);
          }
        }
      }
      FUN_14120969a(param_1,&local_170,&local_158);
      FUN_140989dc4(&local_158);
    }
  }
  if (local_168 != (longlong *)0x0) {
    (**(code **)(*local_168 + 0x10))();
  }
LAB_141502989:
  if ((local_38 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141502ca2 FUN_141502ca2 body=2128 status=ok
// SIG undefined FUN_141502ca2(void)

undefined8 FUN_141502ca2(longlong param_1,longlong param_2,double param_3,double param_4)

{
  undefined4 *puVar1;
  float *pfVar2;
  float fVar3;
  char cVar4;
  ulonglong *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  ulonglong uVar14;
  bool bVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  int iVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  int iVar29;
  longlong lVar30;
  double *pdVar31;
  undefined1 (*pauVar32) [16];
  undefined8 *puVar33;
  undefined8 *puVar34;
  byte bVar35;
  longlong lVar36;
  longlong in_R9;
  undefined7 uVar38;
  ulonglong uVar37;
  longlong lVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined1 auStack_428 [32];
  longlong *local_408;
  longlong local_400;
  ulonglong local_3f8;
  longlong local_3f0;
  undefined8 local_3e8 [12];
  undefined8 local_388 [12];
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  longlong *local_268 [12];
  double local_208;
  double dStack_200;
  double local_1f8 [2];
  undefined4 auStack_1e8 [4];
  undefined8 auStack_1d8 [6];
  undefined8 local_1a8 [12];
  undefined1 local_148 [104];
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_428;
  if ((param_2 == 0) || (iVar29 = *(int *)(param_2 + 0x20), iVar29 < 1)) {
    uVar24 = 0;
  }
  else {
    dVar13 = (1.0 - param_3) * param_4;
    lVar39 = 0;
    uVar24 = 0;
    iVar25 = DAT_14c75efac;
    do {
      puVar5 = *(ulonglong **)(*(longlong *)(param_2 + 0x18) + lVar39 * 8);
      if (*(int *)((longlong)puVar5 + 0x1c) < iVar25) {
        bVar35 = 1;
        uVar38 = (undefined7)((ulonglong)in_R9 >> 8);
        in_R9 = CONCAT71(uVar38,1);
        if (puVar5[1] != 0) {
          in_R9 = CONCAT71(uVar38,*(undefined1 *)(puVar5[1] + 0x38));
        }
        if (puVar5[2] != 0) {
          bVar35 = *(byte *)(puVar5[2] + 0x38);
        }
        if (((byte)in_R9 & bVar35) == 0) {
          lVar36 = 0x50;
          do {
            *(undefined8 *)((longlong)local_1f8 + lVar36) = 0;
            *(undefined8 *)((longlong)auStack_1e8 + lVar36 + -8) = 0;
            *(undefined4 *)((longlong)auStack_1e8 + lVar36) = 0;
            *(undefined4 *)((longlong)auStack_1e8 + lVar36 + 4) = 0;
            *(undefined4 *)((longlong)auStack_1e8 + lVar36 + 8) = 0;
            *(undefined4 *)((longlong)auStack_1e8 + lVar36 + 0xc) = 0x3ff00000;
            *(undefined8 *)((longlong)auStack_1d8 + lVar36) = 0;
            *(undefined8 *)((longlong)auStack_1d8 + lVar36 + 8) = 0;
            *(undefined8 *)((longlong)auStack_1d8 + lVar36 + 0x10) = 0;
            *(undefined8 *)((longlong)auStack_1d8 + lVar36 + 0x18) = 0;
            *(undefined8 *)((longlong)auStack_1d8 + lVar36 + 0x20) = 0x3ff0000000000000;
            *(undefined8 *)((longlong)auStack_1d8 + lVar36 + 0x28) = 0x3ff0000000000000;
            *(undefined8 *)((longlong)local_1a8 + lVar36) = 0x3ff0000000000000;
            *(undefined8 *)((longlong)local_1a8 + lVar36 + 8) = 0;
            lVar36 = lVar36 + 0x60;
          } while (lVar36 != 0x110);
          uVar37 = CONCAT71((int7)((ulonglong)in_R9 >> 8),1);
          lVar36 = 0;
          pauVar32 = (undefined1 (*) [16])local_1a8;
          do {
            plVar7 = (longlong *)puVar5[lVar36 + 1];
            if (plVar7 == (longlong *)0x0) {
              local_3f8 = CONCAT44(local_3f8._4_4_,(int)uVar37);
              local_268[0] = *(longlong **)(*puVar5 + 0xe0 + lVar36 * 8);
              if (local_268[0] == (longlong *)0x0 || *(byte *)((longlong)local_268[0] + 0xc) == 0) {
                lVar36 = *local_268[0];
                lVar28 = (longlong)(int)local_268[0][1];
LAB_141503349:
                lVar26 = *(longlong *)(lVar36 + 0x48);
                lVar27 = lVar28 * 0x10;
                pdVar31 = (double *)(*(longlong *)(lVar36 + 0x28) + lVar28 * 0x18);
                dVar40 = *pdVar31;
                dVar42 = pdVar31[1];
                dVar41 = *(double *)(*(longlong *)(lVar36 + 0x28) + 0x10 + lVar28 * 0x18);
                dVar16 = (double)*(float *)(lVar26 + 8 + lVar27);
                dVar17 = (double)*(float *)(lVar26 + 4 + lVar27);
                dVar18 = (double)*(float *)(lVar26 + lVar27);
                dVar19 = (double)*(float *)(lVar26 + 0xc + lVar27);
              }
              else {
                if (1 < *(byte *)((longlong)local_268[0] + 0xc)) {
                  lVar36 = *local_268[0];
                  lVar28 = (longlong)(int)local_268[0][1];
                  if (*(char *)(*(longlong *)(lVar36 + 0x2c0) + 0xb + lVar28 * 0x10) != '\x02')
                  goto LAB_141503349;
                }
                FUN_144b017f6(local_268,&local_208);
                lVar36 = *local_268[0];
                lVar28 = (longlong)(int)local_268[0][1];
                if (*(byte *)((longlong)local_268[0] + 0xc) < 2 || local_268[0] == (longlong *)0x0)
                {
LAB_141503420:
                  lVar26 = 0x28;
                }
                else {
                  cVar4 = *(char *)(*(longlong *)(lVar36 + 0x2c0) + 0xb + lVar28 * 0x10);
                  lVar26 = 0x530;
                  if ((cVar4 != '\x01') && (cVar4 != '\x04')) goto LAB_141503420;
                }
                pdVar31 = (double *)(lVar28 * 0x18 + *(longlong *)(lVar36 + lVar26));
                dVar41 = DAT_14c993df8;
                dVar40 = DAT_14c993df0;
                dVar16 = DAT_14c993de8;
                if (*(byte *)((longlong)local_268[0] + 0xc) != 0 && local_268[0] != (longlong *)0x0)
                {
                  lVar36 = *(longlong *)(lVar36 + 0x278);
                  dVar41 = (double)*(float *)(lVar36 + 8 + lVar28 * 0xc);
                  dVar40 = (double)*(float *)(lVar36 + 4 + lVar28 * 0xc);
                  dVar16 = (double)*(float *)(lVar36 + lVar28 * 0xc);
                }
                dVar41 = pdVar31[2] - dVar41 * dVar13;
                dVar42 = pdVar31[1] - dVar40 * dVar13;
                dVar40 = *pdVar31 - dVar16 * dVar13;
                dVar16 = local_1f8[0];
                dVar17 = dStack_200;
                dVar18 = local_208;
                dVar19 = local_1f8[1];
              }
              auVar9._8_4_ = SUB84(dVar17,0);
              auVar9._0_8_ = dVar18;
              auVar9._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
              *pauVar32 = auVar9;
              auVar11._8_4_ = SUB84(dVar19,0);
              auVar11._0_8_ = dVar16;
              auVar11._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
              pauVar32[1] = auVar11;
              auVar12._8_4_ = SUB84(dVar42,0);
              auVar12._0_8_ = dVar40;
              auVar12._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
              pauVar32[2] = auVar12;
              *(double *)pauVar32[3] = dVar41;
              *(undefined8 *)(pauVar32[3] + 8) = 0;
              *(undefined8 *)pauVar32[4] = 0x3ff0000000000000;
              *(undefined8 *)(pauVar32[4] + 8) = 0x3ff0000000000000;
              *(undefined8 *)pauVar32[5] = 0x3ff0000000000000;
              *(undefined8 *)(pauVar32[5] + 8) = 0;
              uVar37 = local_3f8 & 0xffffffff;
            }
            else {
              plVar6 = (longlong *)*plVar7;
              if ((char)plVar7[7] == '\0') {
                uVar37 = uVar37 & 0xffffffff;
                FUN_1415034f4(plVar7,SUB84(param_3,0),SUB84(param_4,0));
              }
              lVar36 = *plVar6;
              lVar26 = (longlong)(int)plVar6[1];
              lVar28 = *(longlong *)(lVar36 + 0x28);
              lVar36 = *(longlong *)(lVar36 + 0x48);
              lVar27 = lVar26 * 0x10;
              dVar41 = (double)*(float *)(lVar36 + 0xc + lVar27);
              fVar3 = *(float *)(lVar36 + 8 + lVar27);
              dVar40 = (double)*(float *)(lVar36 + 4 + lVar27);
              puVar1 = (undefined4 *)(lVar28 + lVar26 * 0x18);
              uVar20 = *puVar1;
              uVar21 = puVar1[1];
              uVar22 = puVar1[2];
              uVar23 = puVar1[3];
              uVar24 = *(undefined8 *)(lVar28 + 0x10 + lVar26 * 0x18);
              auVar8._8_4_ = SUB84(dVar40,0);
              auVar8._0_8_ = (double)*(float *)(lVar36 + lVar27);
              auVar8._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
              *pauVar32 = auVar8;
              auVar10._8_4_ = SUB84(dVar41,0);
              auVar10._0_8_ = (double)fVar3;
              auVar10._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
              pauVar32[1] = auVar10;
              *(undefined4 *)pauVar32[2] = uVar20;
              *(undefined4 *)(pauVar32[2] + 4) = uVar21;
              *(undefined4 *)(pauVar32[2] + 8) = uVar22;
              *(undefined4 *)(pauVar32[2] + 0xc) = uVar23;
              *(undefined8 *)pauVar32[3] = uVar24;
              *(undefined8 *)(pauVar32[3] + 8) = 0;
              *(undefined8 *)pauVar32[4] = 0x3ff0000000000000;
              *(undefined8 *)(pauVar32[4] + 8) = 0x3ff0000000000000;
              *(undefined8 *)pauVar32[5] = 0x3ff0000000000000;
              *(undefined8 *)(pauVar32[5] + 8) = 0;
            }
            lVar36 = 1;
            uVar14 = uVar37 & 1;
            uVar37 = 0;
            pauVar32 = (undefined1 (*) [16])local_148;
          } while (uVar14 != 0);
          uVar37 = *puVar5;
          plVar7 = *(longlong **)(uVar37 + 0xe0);
          local_408 = *(longlong **)(uVar37 + 0xe8);
          local_400 = uVar37 + 0x20;
          FUN_1447dc19e(local_400,&local_208,local_1a8);
          local_3f0 = uVar37 + 0x80;
          local_3f8 = uVar37;
          FUN_1447dc19e(local_3f0,local_268,local_148);
          bVar15 = *(byte *)((longlong)plVar7 + 0xc) < 2 || plVar7 == (longlong *)0x0;
          lVar36 = *plVar7;
          lVar28 = (longlong)(int)plVar7[1];
          if (bVar15) {
            lVar26 = 0x48;
          }
          else {
            cVar4 = *(char *)(*(longlong *)(lVar36 + 0x2c0) + 0xb + lVar28 * 0x10);
            lVar26 = 0x548;
            if ((cVar4 != '\x01') && (cVar4 != '\x04')) {
              lVar26 = 0x48;
            }
          }
          lVar26 = *(longlong *)(lVar36 + lVar26);
          lVar27 = lVar28 * 0x10;
          dVar41 = (double)*(float *)(lVar26 + 0xc + lVar27);
          dVar40 = (double)*(float *)(lVar26 + 4 + lVar27);
          if (bVar15) {
LAB_14150301b:
            lVar30 = 0x28;
          }
          else {
            cVar4 = *(char *)(*(longlong *)(lVar36 + 0x2c0) + 0xb + lVar27);
            lVar30 = 0x530;
            if ((cVar4 != '\x01') && (cVar4 != '\x04')) goto LAB_14150301b;
          }
          local_2c8._8_4_ = SUB84(dVar40,0);
          local_2c8._0_8_ = (double)*(float *)(lVar26 + lVar27);
          local_2c8._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
          local_2b8._8_4_ = SUB84(dVar41,0);
          local_2b8._0_8_ = (double)*(float *)(lVar26 + 8 + lVar27);
          local_2b8._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
          puVar33 = (undefined8 *)(*(longlong *)(lVar36 + lVar30) + lVar28 * 0x18);
          local_2a8 = *puVar33;
          uStack_2a0 = puVar33[1];
          local_298 = *(undefined8 *)(*(longlong *)(lVar36 + lVar30) + 0x10 + lVar28 * 0x18);
          uStack_290 = 0;
          local_288 = 0x3ff0000000000000;
          uStack_280 = 0x3ff0000000000000;
          local_278 = 0x3ff0000000000000;
          uStack_270 = 0;
          bVar15 = *(byte *)((longlong)local_408 + 0xc) < 2 || local_408 == (longlong *)0x0;
          lVar36 = *local_408;
          lVar28 = (longlong)(int)local_408[1];
          if (bVar15) {
LAB_1415030b1:
            lVar26 = 0x48;
          }
          else {
            cVar4 = *(char *)(*(longlong *)(lVar36 + 0x2c0) + 0xb + lVar28 * 0x10);
            lVar26 = 0x548;
            if ((cVar4 != '\x01') && (cVar4 != '\x04')) goto LAB_1415030b1;
          }
          in_R9 = *(longlong *)(lVar36 + lVar26);
          lVar27 = lVar28 * 0x10;
          dVar41 = (double)*(float *)(in_R9 + 0xc + lVar27);
          lVar26 = in_R9 + 8;
          dVar40 = (double)*(float *)(in_R9 + 4 + lVar27);
          pfVar2 = (float *)(in_R9 + lVar27);
          if (bVar15) {
LAB_14150310b:
            lVar30 = 0x28;
          }
          else {
            cVar4 = *(char *)(*(longlong *)(lVar36 + 0x2c0) + 0xb + lVar27);
            in_R9 = 0;
            lVar30 = 0x530;
            if ((cVar4 != '\x01') && (cVar4 != '\x04')) goto LAB_14150310b;
          }
          local_328._8_4_ = SUB84(dVar40,0);
          local_328._0_8_ = (double)*pfVar2;
          local_328._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
          local_318._8_4_ = SUB84(dVar41,0);
          local_318._0_8_ = (double)*(float *)(lVar26 + lVar27);
          local_318._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
          puVar1 = (undefined4 *)(*(longlong *)(lVar36 + lVar30) + lVar28 * 0x18);
          local_308 = *puVar1;
          uStack_304 = puVar1[1];
          uStack_300 = puVar1[2];
          uStack_2fc = puVar1[3];
          local_2f8 = *(undefined8 *)(*(longlong *)(lVar36 + lVar30) + 0x10 + lVar28 * 0x18);
          uStack_2f0 = 0;
          local_2e8 = 0x3ff0000000000000;
          uStack_2e0 = 0x3ff0000000000000;
          local_2d8 = 0x3ff0000000000000;
          uStack_2d0 = 0;
          FUN_1447dc19e(local_400,local_388,local_2c8);
          FUN_1447dc19e(local_3f0,local_3e8,local_328);
          puVar33 = local_388;
          puVar34 = (undefined8 *)(local_3f8 + 0x170);
          for (lVar36 = 0xc; lVar36 != 0; lVar36 = lVar36 + -1) {
            *puVar34 = *puVar33;
            puVar33 = puVar33 + 1;
            puVar34 = puVar34 + 1;
          }
          puVar33 = local_3e8;
          puVar34 = (undefined8 *)(local_3f8 + 0x1d0);
          for (lVar36 = 0xc; lVar36 != 0; lVar36 = lVar36 + -1) {
            *puVar34 = *puVar33;
            puVar33 = puVar33 + 1;
            puVar34 = puVar34 + 1;
          }
          FUN_1400c361d(local_3f8,&local_208,local_268,dVar13);
          iVar25 = DAT_14c75efac;
          uVar37 = *puVar5;
          fVar3 = *(float *)(uVar37 + 0x640);
          if ((0.0 <= fVar3) && (fVar3 < 1.0)) {
            *(float *)(uVar37 + 0x640) = (float)((double)fVar3 * (1.0 - param_3) + param_3);
          }
          iVar29 = *(int *)(param_2 + 0x20);
          uVar24 = CONCAT71((int7)(uVar37 >> 8),1);
        }
      }
      lVar39 = lVar39 + 1;
    } while (lVar39 < iVar29);
  }
  iVar29 = *(int *)(param_1 + 0x98);
  if ((longlong)iVar29 != 0) {
    lVar39 = *(longlong *)(param_1 + 0x90);
    lVar36 = 0;
    do {
      plVar7 = *(longlong **)(lVar39 + lVar36);
      if ((plVar7 != (longlong *)0x0) && (lVar28 = *plVar7, lVar28 != 0)) {
        dVar13 = (double)plVar7[7];
        dVar41 = (double)plVar7[6];
        *(float *)(lVar28 + 0x120) = (float)(double)plVar7[5] + *(float *)(lVar28 + 0x120);
        *(float *)(lVar28 + 0x124) = (float)dVar41 + *(float *)(lVar28 + 0x124);
        *(float *)(lVar28 + 0x128) = (float)dVar13 + *(float *)(lVar28 + 0x128);
      }
      lVar36 = lVar36 + 8;
    } while ((longlong)iVar29 * 8 != lVar36);
  }
  if ((local_e0 ^ (ulonglong)auStack_428) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar24;
}



// FUNCTION 1415034f4 FUN_1415034f4 body=128 status=ok
// SIG undefined FUN_1415034f4(void)

void FUN_1415034f4(longlong *param_1,double param_2,double param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((double)param_1[6] < param_2) {
    param_3 = (param_2 - (double)param_1[6]) * param_3;
    lVar3 = *(longlong *)*param_1;
    lVar5 = (longlong)(int)((longlong *)*param_1)[1];
    lVar4 = *(longlong *)(lVar3 + 0x278);
    fVar1 = *(float *)(lVar4 + 8 + lVar5 * 0xc);
    fVar2 = *(float *)(lVar4 + 4 + lVar5 * 0xc);
    lVar3 = *(longlong *)(lVar3 + 0x28);
    *(double *)(lVar3 + lVar5 * 0x18) =
         (double)*(float *)(lVar4 + lVar5 * 0xc) * param_3 + *(double *)(lVar3 + lVar5 * 0x18);
    *(double *)(lVar3 + 8 + lVar5 * 0x18) =
         (double)fVar2 * param_3 + *(double *)(lVar3 + 8 + lVar5 * 0x18);
    *(double *)(lVar3 + 0x10 + lVar5 * 0x18) =
         (double)fVar1 * param_3 + *(double *)(lVar3 + 0x10 + lVar5 * 0x18);
    param_1[6] = (longlong)param_2;
  }
  return;
}



// FUNCTION 141503574 FUN_141503574 body=81 status=ok
// SIG undefined FUN_141503574(void)

void FUN_141503574(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1[0xb] != 0) {
      FUN_1400020a8();
    }
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    if ((longlong *)*param_1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_1 + 0x10))();
    }
    param_1 = param_1 + 0x14;
  }
  return;
}



// FUNCTION 1415035c6 FUN_1415035c6 body=342 status=ok
// SIG undefined FUN_1415035c6(void)

void FUN_1415035c6(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b525c90;
  FUN_1461588ee();
  FUN_145fdd2cc(param_1 + 0x6e);
  FUN_141478002(param_1 + 0x61);
  if (param_1[0x5c] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x59) = 0;
  if (param_1[0x58] != 0) {
    FUN_1400020a8();
  }
  FUN_145af2b28(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x4f) = 0;
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  FUN_145af2b28(param_1 + 0x46);
  *(undefined4 *)(param_1 + 0x45) = 0;
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  FUN_145af2b28(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x3b) = 0;
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  FUN_146026822(param_1 + 0x32);
  *(undefined4 *)(param_1 + 0x31) = 0;
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  FUN_145ff3e5a(param_1 + 0x28);
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_140d5fbf2(param_1 + 0x18);
  plVar2 = (longlong *)param_1[0x17];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_14658f094(param_1);
  return;
}



// FUNCTION 14150371c FUN_14150371c body=169 status=ok
// SIG undefined FUN_14150371c(void)

void FUN_14150371c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b429420;
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
  *param_1 = &PTR_FUN_14b421610;
  plVar3 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_14150379a;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_14150379a:
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001415037b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1415037c6 FUN_1415037c6 body=169 status=ok
// SIG undefined FUN_1415037c6(void)

void FUN_1415037c6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b99ed80;
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
  *param_1 = &PTR_FUN_14b421610;
  plVar3 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_141503844;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_141503844:
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014150385c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 141503870 FUN_141503870 body=169 status=ok
// SIG undefined FUN_141503870(void)

void FUN_141503870(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b99f930;
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
  *param_1 = &PTR_FUN_14b421610;
  plVar3 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_1415038ee;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_1415038ee:
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141503906. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 141503919 FUN_141503919 body=12 status=ok
// SIG undefined FUN_141503919(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_141503919(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14150392a FUN_14150392a body=164 status=ok
// SIG undefined FUN_14150392a(void)

void FUN_14150392a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b3225c0;
  param_1[0xd] = &PTR_LAB_14b322910;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_145af7798(param_1 + 0x17);
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_140da4884(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_140da4884(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1415039ce FUN_1415039ce body=144 status=ok
// SIG undefined FUN_1415039ce(void)

undefined4 FUN_1415039ce(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = (undefined4)param_3[1];
  lVar2 = *param_3;
  local_38 = DAT_14cb92c18;
  lVar1 = FUN_14063edce();
  uVar3 = 0;
  if (lVar1 != 0) {
    if (lVar2 == 0) {
      uVar4 = 0;
    }
    local_38 = lVar2;
    local_30 = uVar4;
    lVar2 = FUN_145ff4fbe(param_1,lVar1,param_2);
    uVar3 = *(undefined4 *)(lVar2 + 8);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141503a60 FUN_141503a60 body=1815 status=ok
// SIG undefined FUN_141503a60(void)

void FUN_141503a60(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong *plVar9;
  uint *puVar10;
  longlong lVar11;
  uint *puVar12;
  bool bVar13;
  bool bVar14;
  undefined1 auStack_228 [32];
  undefined8 local_208;
  undefined8 *local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  wchar_t *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  uint *local_1d0;
  undefined1 *local_1c8;
  code *local_1c0;
  uint *local_1b0;
  longlong *local_1a8;
  uint *local_1a0;
  uint local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  longlong local_170;
  undefined8 local_168;
  longlong *local_160;
  uint local_158;
  uint uStack_154;
  uint uStack_150;
  uint uStack_14c;
  undefined1 local_148 [4];
  undefined8 local_144;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined2 local_b0;
  undefined8 local_ac;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_228;
  if (((((*(int *)(param_1 + 0x1c) != 0) && (uVar8 = *(uint *)(param_1 + 0x18), -1 < (int)uVar8)) &&
       ((int)uVar8 < DAT_14c9647dc)) &&
      ((plVar9 = (longlong *)
                 ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
       plVar9 != (longlong *)0x0 && ((int)plVar9[2] == *(int *)(param_1 + 0x1c))))) &&
     (((*(uint *)(plVar9 + 1) & 0x10200000) == 0 && (lVar2 = *plVar9, lVar2 != 0)))) {
    if (DAT_14cb939a8 == 0) {
      local_1d0 = &local_198;
      local_198 = 0x40940982;
      uStack_194 = 1;
      local_1c0 = FUN_14081d0ea;
      local_1c8 = &LAB_146522c26;
      local_1d8 = &LAB_148a0db91;
      local_1e0 = &LAB_146572ba7;
      local_1e8 = L"Engine";
      local_1f0 = 0;
      local_1f8 = CONCAT44(local_1f8._4_4_,0x10000004);
      local_200 = (undefined8 *)CONCAT44(local_200._4_4_,8);
      local_208 = CONCAT44(local_208._4_4_,0xdd8);
      FUN_14081cfa3(L"/Script/GbxWeapon",L"Weapon",&DAT_14cb939a8);
    }
    if ((*(int *)(DAT_14cb939a8 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb939a8 + 0x38) * 8) == DAT_14cb939a8 + 0x30)) {
      if ((*(longlong *)(param_1 + 0x758) != *(longlong *)(lVar2 + 0xd60)) ||
         (*(int *)(param_1 + 0x768) != 1 << (*(byte *)(lVar2 + 0xbd8) & 0x1f))) {
        *(longlong *)(param_1 + 0x760) = *(longlong *)(param_1 + 0x758);
        *(undefined8 *)(param_1 + 0x758) = *(undefined8 *)(lVar2 + 0xd60);
        *(int *)(param_1 + 0x76c) = *(int *)(param_1 + 0x768);
        *(int *)(param_1 + 0x768) = 1 << (*(byte *)(lVar2 + 0xbd8) & 0x1f);
        if ((longlong)*(int *)(param_1 + 0x750) != 0) {
          puVar12 = *(uint **)(param_1 + 0x748);
          puVar10 = puVar12 + (longlong)*(int *)(param_1 + 0x750) * 0x1c;
          do {
            if ((longlong)DAT_14cb93bd0 != 0) {
              lVar4 = (longlong)DAT_14cb93bd0 * 8;
              lVar11 = 0;
              uVar8 = 0;
              do {
                if (*(longlong *)(DAT_14cb93bc8 + lVar11) == *(longlong *)(param_1 + 0x758)) {
                  if ((uVar8 < 0xff000000) && ((*puVar12 >> (uVar8 >> 0x18 & 0x1f) & 1) != 0)) {
                    bVar13 = (*(uint *)(param_1 + 0x768) & ~puVar12[1]) == 0;
                    goto LAB_141503c94;
                  }
                  break;
                }
                uVar8 = uVar8 + 0x1000000;
                lVar11 = lVar11 + 8;
              } while (lVar4 != lVar11);
              bVar13 = false;
LAB_141503c94:
              lVar11 = 0;
              uVar8 = 0;
              do {
                if (*(longlong *)(DAT_14cb93bc8 + lVar11) == *(longlong *)(param_1 + 0x760)) {
                  if ((uVar8 < 0xff000000) && ((*puVar12 >> (uVar8 >> 0x18 & 0x1f) & 1) != 0)) {
                    bVar14 = (puVar12[1] & *(uint *)(param_1 + 0x76c)) == *(uint *)(param_1 + 0x76c)
                    ;
                    if (!bVar14 || bVar13) goto LAB_141503cec;
                    local_1b0 = puVar12 + 0x14;
                    cVar3 = FUN_1404fa388();
                    if (cVar3 != '\0') {
                      lVar4 = *(longlong *)(puVar12 + 10);
                      if (lVar4 == 0) {
                        uVar7 = FUN_140067708();
                        lVar4 = FUN_14477b664(uVar7);
                        *(longlong *)(puVar12 + 10) = lVar4;
                      }
                      lVar11 = *(longlong *)(puVar12 + 0xc);
                      if (((lVar11 == 0) && (lVar11 = 0, lVar4 != 0)) &&
                         (local_1a0 = puVar12 + 8, *(longlong *)local_1a0 != 0)) {
                        local_1a8 = *(longlong **)(lVar4 + 0xb8);
                        if ((local_1a8 == (longlong *)0x0) ||
                           (cVar3 = (**(code **)(*local_1a8 + 0x108))(), cVar3 == '\0')) {
                          lVar11 = 0;
                        }
                        else {
                          uVar7 = (**(code **)(*local_1a8 + 0x110))();
                          lVar11 = FUN_144aff482(uVar7,local_1a0);
                        }
                        *(longlong *)(puVar12 + 0xc) = lVar11;
                      }
                      FUN_140bd765a(local_1b0,lVar11,0);
                    }
                    goto LAB_141503cf5;
                  }
                  break;
                }
                uVar8 = uVar8 + 0x1000000;
                lVar11 = lVar11 + 8;
              } while (lVar4 != lVar11);
              bVar14 = false;
LAB_141503cec:
              if ((!bVar14) && (bVar13)) {
                if ((char)puVar12[0x10] == '\x01') {
                  local_1b0 = *(uint **)(puVar12 + 0x11);
                  uVar7 = *(undefined8 *)(puVar12 + 2);
                  uVar5 = FUN_14477b664(*(undefined8 *)(puVar12 + 4));
                  uVar6 = FUN_14477b664(uVar5);
                  uVar5 = *(undefined8 *)(puVar12 + 6);
                  local_148[0] = 0;
                  local_144 = 0;
                  local_130 = 0;
                  uStack_128 = 0;
                  local_138 = uVar7;
                  uVar7 = FUN_14477b664(uVar6);
                  local_130 = FUN_14477b664(uVar7);
                  local_120 = 0;
                  local_208 = 0;
                  uStack_128 = uVar5;
                  FUN_140f7fb5b(&local_198,lVar2,local_148);
                  if (puVar12 + 0x14 != &local_198) {
                    *(ulonglong *)(puVar12 + 0x14) = CONCAT44(uStack_194,local_198);
                    local_198 = 0;
                    uStack_194 = 0;
                    plVar9 = *(longlong **)(puVar12 + 0x16);
                    *(ulonglong *)(puVar12 + 0x16) = CONCAT44(uStack_18c,uStack_190);
                    uStack_190 = 0;
                    uStack_18c = 0;
                    if (plVar9 == (longlong *)0x0) {
                      puVar12[0x18] = (uint)local_188;
                      puVar12[0x19] = local_188._4_4_;
                      puVar12[0x1a] = (uint)uStack_180;
                      puVar12[0x1b] = uStack_180._4_4_;
                      goto LAB_141503cf5;
                    }
                    LOCK();
                    piVar1 = (int *)((longlong)plVar9 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar9 + 0x10))();
                    }
                  }
                  plVar9 = (longlong *)CONCAT44(uStack_18c,uStack_190);
                  puVar12[0x18] = (uint)local_188;
                  puVar12[0x19] = local_188._4_4_;
                  puVar12[0x1a] = (uint)uStack_180;
                  puVar12[0x1b] = uStack_180._4_4_;
                  if (plVar9 != (longlong *)0x0) {
                    LOCK();
                    piVar1 = (int *)((longlong)plVar9 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar9 + 0x10))();
                    }
                  }
                }
                else {
                  local_118 = 0;
                  uStack_110 = 0;
                  local_108 = 0;
                  uStack_104 = 0;
                  uStack_100 = 0;
                  uStack_fc = 0x3ff00000;
                  local_f8 = 0;
                  uStack_f0 = 0;
                  local_e8 = 0;
                  uStack_e0 = 0;
                  local_d8 = 0x3ff0000000000000;
                  uStack_d0 = 0x3ff0000000000000;
                  local_c8 = 0x3ff0000000000000;
                  uStack_c0 = 0;
                  local_b8 = 0x3f800000;
                  local_b0 = 0;
                  local_ac = 0;
                  local_1b0 = puVar12 + 0xe;
                  uVar7 = *(undefined8 *)(puVar12 + 2);
                  uVar5 = FUN_14477b664(*(undefined8 *)(puVar12 + 4));
                  uVar6 = FUN_14477b664(uVar5);
                  uVar5 = *(undefined8 *)(puVar12 + 6);
                  local_198 = local_198 & 0xffffff00;
                  uStack_194 = 0;
                  uStack_190 = 0;
                  uStack_180 = 0;
                  uStack_178 = 0;
                  local_188 = uVar7;
                  uVar7 = FUN_14477b664(uVar6);
                  uStack_180 = FUN_14477b664(uVar7);
                  local_170 = 0;
                  local_1f8 = 0;
                  local_200 = &local_118;
                  local_208 = CONCAT71(local_208._1_7_,1);
                  uStack_178 = uVar5;
                  FUN_141504178(&local_168,lVar2,&local_198);
                  if (puVar12 + 0x14 == (uint *)&local_168) {
LAB_141503e4e:
                    puVar12[0x18] = local_158;
                    puVar12[0x19] = uStack_154;
                    puVar12[0x1a] = uStack_150;
                    puVar12[0x1b] = uStack_14c;
                    if (local_160 != (longlong *)0x0) {
                      LOCK();
                      piVar1 = (int *)((longlong)local_160 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)(*local_160 + 0x10))();
                      }
                    }
                  }
                  else {
                    *(undefined8 *)(puVar12 + 0x14) = local_168;
                    local_168 = 0;
                    plVar9 = *(longlong **)(puVar12 + 0x16);
                    *(longlong **)(puVar12 + 0x16) = local_160;
                    local_160 = (longlong *)0x0;
                    if (plVar9 != (longlong *)0x0) {
                      LOCK();
                      piVar1 = (int *)((longlong)plVar9 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)(*plVar9 + 0x10))();
                      }
                      goto LAB_141503e4e;
                    }
                    puVar12[0x18] = local_158;
                    puVar12[0x19] = uStack_154;
                    puVar12[0x1a] = uStack_150;
                    puVar12[0x1b] = uStack_14c;
                  }
                  if ((local_170 != 0) && ((DAT_14cb26569 & 1) != 0)) {
                    FUN_1400848c0();
                  }
                }
              }
            }
LAB_141503cf5:
            puVar12 = puVar12 + 0x1c;
          } while (puVar12 != puVar10);
        }
      }
    }
  }
  if ((local_90 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141504178 FUN_141504178 body=1437 status=ok
// SIG undefined FUN_141504178(void)

undefined8 *
FUN_141504178(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
             char param_5,undefined8 *param_6,longlong param_7)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  bool bVar4;
  __uint64 *p_Var5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined8 *puVar11;
  __uint64 *p_Var12;
  __uint64 *p_Var13;
  undefined8 *puVar14;
  __uint64 *p_Var15;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  longlong *local_1d8;
  __uint64 *local_1d0;
  __uint64 local_1c8 [12];
  __uint64 local_168 [12];
  longlong local_108 [2];
  __uint64 *local_f8;
  longlong local_f0;
  longlong *local_e8;
  longlong local_e0;
  longlong *local_d8;
  longlong *local_d0;
  undefined8 local_c8 [12];
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined1 local_5f;
  undefined8 local_5c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_218;
  if (param_2 != 0) {
    FUN_14026e798(&local_e0);
    bVar4 = true;
    if (local_e0 != 0) {
      local_f0 = local_e0;
      local_e8 = local_d8;
      if (local_d8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
        UNLOCK();
      }
      lVar7 = FUN_140206ee8(param_3,&local_f0);
      lVar9 = local_e0;
      if (lVar7 != 0) {
        local_f8 = (__uint64 *)0x0;
        if (param_5 == '\0') {
          local_d0 = *(longlong **)(param_2 + 0x18);
          FUN_1400021e4(&local_d0,local_108);
          local_1f8 = (undefined8 *)((ulonglong)local_1f8 & 0xffffffffffffff00);
          FUN_14084a140(lVar9,&local_d0,local_108,0);
          FUN_1403c75f4(&local_f8,&local_d0);
          plVar1 = local_d0;
          if (local_d0 != (longlong *)0x0) {
            *(int *)(local_d0 + 0x21) = (int)local_d0[0x21] + -1;
            if (((int)local_d0[0x26] < 1) &&
               (FUN_1400847bc(local_d0 + 0x17,0), (int)plVar1[0x21] == 0)) {
              FUN_140087e46(plVar1);
              if (*plVar1 != -1) {
                if (DAT_14cb259f8 == 0) goto LAB_1415043b9;
                FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar1);
              }
              if (DAT_14cb259f8 != 0) {
                FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar1);
              }
            }
LAB_1415043b9:
            local_d0 = (longlong *)0x0;
          }
          if (local_108[0] != 0) {
            FUN_1400020a8();
          }
          p_Var5 = local_f8;
          FUN_140a9d2f2(local_e0,local_1c8,*param_4);
          p_Var12 = local_1c8;
          p_Var13 = local_168;
          for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
            *p_Var13 = *p_Var12;
            p_Var12 = p_Var12 + 1;
            p_Var13 = p_Var13 + 1;
          }
          p_Var12 = p_Var5 + 0x28;
          uVar6 = *(uint *)((longlong)p_Var5 + 0x1d4);
          iVar10 = 0;
          *(undefined4 *)(p_Var5 + 0x3a) = 0;
          if ((int)uVar6 < 0) {
            FUN_147f80112(p_Var12,0);
            iVar10 = (int)p_Var5[0x3a];
            uVar6 = *(uint *)((longlong)p_Var5 + 0x1d4);
          }
          *(undefined1 *)((longlong)p_Var5 + 0x26c) = 0;
          *(uint *)(p_Var5 + 0x3a) = iVar10 + 1U;
          if (uVar6 < iVar10 + 1U) {
            FUN_140089f7a(p_Var12,iVar10);
          }
          if ((__uint64 *)p_Var5[0x38] != (__uint64 *)0x0) {
            p_Var12 = (__uint64 *)p_Var5[0x38];
          }
          lVar9 = (longlong)iVar10;
          p_Var13 = local_168;
          p_Var15 = p_Var12 + lVar9 * 0x10;
          for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
            *p_Var15 = *p_Var13;
            p_Var13 = p_Var13 + 1;
            p_Var15 = p_Var15 + 1;
          }
          p_Var12[lVar9 * 0x10 + 0xc] = 0x3f800000;
          *(undefined2 *)(p_Var12 + lVar9 * 0x10 + 0xd) = 0;
          *(undefined8 *)((longlong)p_Var12 + lVar9 * 0x80 + 0x6c) = 0;
          FUN_1447906c0(p_Var5,0);
        }
        else {
          local_1f8 = local_c8;
          puVar11 = param_6;
          puVar14 = local_1f8;
          for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
            *puVar14 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar14 = puVar14 + 1;
          }
          local_68 = *(undefined4 *)(param_6 + 0xc);
          local_64 = *(undefined4 *)((longlong)param_6 + 100);
          local_60 = *(undefined1 *)(param_6 + 0xd);
          local_5f = *(undefined1 *)((longlong)param_6 + 0x69);
          local_5c = *(undefined8 *)((longlong)param_6 + 0x6c);
          uVar3 = *param_4;
          local_d0 = *(longlong **)(param_2 + 0x18);
          local_1e8 = lVar7;
          FUN_1400021e4(&local_d0,local_108);
          local_1f0 = 0;
          FUN_14071b0f2(lVar9,&local_d0,local_108,uVar3);
          FUN_1403c75f4(&local_f8,&local_d0);
          plVar1 = local_d0;
          if (local_d0 != (longlong *)0x0) {
            *(int *)(local_d0 + 0x21) = (int)local_d0[0x21] + -1;
            if (((int)local_d0[0x26] < 1) &&
               (FUN_1400847bc(local_d0 + 0x17,0), (int)plVar1[0x21] == 0)) {
              FUN_140087e46(plVar1);
              if (*plVar1 != -1) {
                if (DAT_14cb259f8 == 0) goto LAB_141504308;
                FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar1);
              }
              if (DAT_14cb259f8 != 0) {
                FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar1);
              }
            }
LAB_141504308:
            local_d0 = (longlong *)0x0;
          }
          lVar7 = local_1e8;
          if (local_108[0] != 0) {
            FUN_1400020a8();
            lVar7 = local_1e8;
          }
        }
        if (local_f8 != (__uint64 *)0x0) {
          if (((param_7 != 0) && (*local_f8 != 0xffffffffffffffff)) && (DAT_14cb25ab0 == '\x01')) {
            AK::SoundEngine::SetSwitch
                      (*(uint *)(param_7 + 0x48),*(uint *)(param_7 + 0x38),*local_f8);
          }
          local_108[0] = lVar7;
          FUN_140942716(local_108);
          local_1d0 = local_f8;
          if (local_f8 != (__uint64 *)0x0) {
            *(int *)(local_f8 + 0x21) = (int)local_f8[0x21] + 1;
          }
          local_1e0 = local_e0;
          local_1d8 = local_d8;
          if (local_d8 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
            UNLOCK();
          }
          FUN_140c72376(param_1,&local_1e0,&local_1d0,local_108[0]);
          if ((local_108[0] != 0) && ((DAT_14cb26569 & 1) != 0)) {
            FUN_1400848c0(*(undefined8 *)(local_108[0] + 0x50));
          }
          p_Var5 = local_f8;
          if (((local_f8 != (__uint64 *)0x0) &&
              (*(int *)(local_f8 + 0x21) = (int)local_f8[0x21] + -1, (int)local_f8[0x26] < 1)) &&
             (FUN_1400847bc(local_f8 + 0x17,0), (int)p_Var5[0x21] == 0)) {
            FUN_140087e46(p_Var5);
            if (*p_Var5 != 0xffffffffffffffff) {
              if (DAT_14cb259f8 == 0) goto LAB_141504587;
              FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),p_Var5);
            }
            if (DAT_14cb259f8 != 0) {
              FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),p_Var5);
            }
          }
LAB_141504587:
          bVar4 = false;
        }
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
    if (!bVar4) goto LAB_1415045c3;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
LAB_1415045c3:
  if ((local_48 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 141504716 FUN_141504716 body=459 status=ok
// SIG undefined FUN_141504716(void)

void FUN_141504716(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar14 = 1;
    local_50._4_4_ = 0;
    uVar12 = 0xffffffff;
    iVar15 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    uVar14 = local_60 >> 0x20;
    uVar12 = (uint)local_50;
    iVar15 = (int)local_60;
  }
  plVar6 = local_58;
  iVar8 = local_50._4_4_;
  iVar11 = local_48;
  if (local_50._4_4_ < (int)local_58[3]) {
    do {
      plVar9 = *(longlong **)(*param_1 + 0x20 + (longlong)iVar8 * 0x30);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      plVar9 = (longlong *)plVar6[2];
      if ((longlong *)plVar6[2] == (longlong *)0x0) {
        plVar9 = plVar6;
      }
      iVar4 = (int)plVar6[3];
      lVar13 = (longlong)iVar15;
      uVar7 = *(uint *)((longlong)plVar9 + lVar13 * 4) & uVar12;
      if (uVar7 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar5 = iVar8;
        if (iVar8 < iVar15) {
          iVar5 = iVar15;
        }
        if (iVar8 <= iVar15) break;
        lVar10 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar7 = *(uint *)((longlong)plVar9 + lVar10 * 4 + lVar13 * 4 + 4);
          if (uVar7 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar5 - lVar13 == lVar10) goto LAB_141504877;
        }
        iVar15 = iVar15 + (int)lVar10 + 1;
        uVar12 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar7 & uVar7);
      uVar3 = uVar14 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar8 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar4);
  }
LAB_141504877:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415048e2 FUN_1415048e2 body=99 status=ok
// SIG undefined FUN_1415048e2(void)

void FUN_1415048e2(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  bVar1 = *(byte *)(param_1 + 0x130);
  *(byte *)(param_1 + 0x130) = bVar1 | 1;
  if (((bVar1 & 2) == 0) && ((longlong)*(int *)(param_1 + 0x118) != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x110);
    lVar2 = (longlong)*(int *)(param_1 + 0x118) * 0x38;
    do {
      FUN_145c531a6(lVar3,param_1,(*(byte *)(param_1 + 0x130) & 2) >> 1);
      lVar3 = lVar3 + 0x38;
      lVar2 = lVar2 + -0x38;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 141504946 FUN_141504946 body=47 status=ok
// SIG undefined FUN_141504946(void)

void FUN_141504946(longlong param_1)

{
  FUN_14498658e(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_1462683c2(param_1);
  return;
}



// FUNCTION 141504976 FUN_141504976 body=921 status=ok
// SIG undefined FUN_141504976(void)

void FUN_141504976(longlong param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  int local_84;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  code *local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_78 = param_1 + 0x250;
  local_68 = (code *)0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_80 = param_3;
  local_70 = param_2;
  local_60 = local_78;
  if (*(int *)(param_1 + 0x268) == 0) {
    uVar8 = 1;
    local_58._0_4_ = 0xffffffff;
    iVar11 = 0;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar8 = (ulonglong)local_68 >> 0x20;
    iVar11 = *(int *)(param_1 + 0x268);
  }
  lVar4 = local_60;
  plVar5 = local_80;
  iVar13 = (int)local_68;
  uVar14 = (uint)local_58;
  iVar12 = local_58._4_4_;
  iVar15 = local_50;
  iVar2 = iVar11;
  if (local_58._4_4_ != iVar11 || local_60 != local_78) {
    do {
      local_84 = iVar2;
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x240) + (longlong)iVar12 * 0x10);
      if (lVar10 != 0) {
        lVar7 = *local_70;
        if ((lVar7 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar7);
          plVar5 = local_80;
          iVar11 = local_84;
LAB_141504a8b:
          if (DAT_14cad00c8 == 0) {
            local_68 = FUN_144a7958c;
            local_90 = FUN_14081d0ea;
            local_98 = FUN_14081d0ea;
            local_a0 = &local_68;
            local_a8 = &LAB_1479b7a0c;
            local_b0 = &LAB_1463b464e;
            local_b8 = L"Engine";
            local_c0 = 0;
            local_c8 = 0x10000005;
            local_d0 = 8;
            local_d8 = 0x110;
            FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
            plVar5 = local_80;
            iVar11 = local_84;
            if (DAT_14cad00c8 == 0) goto LAB_141504ca0;
          }
          if (*(int *)(lVar7 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_141504ca0;
          if (*(longlong *)
               (*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) !=
              DAT_14cad00c8 + 0x30) {
            lVar7 = 0;
          }
        }
        else {
          if (lVar7 != 0) goto LAB_141504a8b;
LAB_141504ca0:
          lVar7 = 0;
        }
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          iVar12 = (int)plVar5[1];
          *(uint *)(plVar5 + 1) = iVar12 + 1U;
          if (*(uint *)((longlong)plVar5 + 0xc) < iVar12 + 1U) {
            FUN_145c55abc(plVar5,iVar12);
            plVar5 = local_80;
            iVar11 = local_84;
          }
          *(longlong *)(*plVar5 + (longlong)iVar12 * 8) = lVar10;
        }
      }
      uVar14 = uVar14 & ~(uint)uVar8;
      lVar10 = *(longlong *)(lVar4 + 0x10);
      if (*(longlong *)(lVar4 + 0x10) == 0) {
        lVar10 = lVar4;
      }
      iVar2 = *(int *)(lVar4 + 0x18);
      lVar7 = (longlong)iVar13;
      uVar6 = *(uint *)(lVar10 + lVar7 * 4) & uVar14;
      if (uVar6 == 0) {
        iVar12 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar12 = iVar2 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar15 = iVar15 + 0x20;
        iVar3 = iVar12;
        if (iVar12 < iVar13) {
          iVar3 = iVar13;
        }
        iVar11 = local_84;
        if (iVar13 < iVar12) {
          lVar9 = 0;
          do {
            uVar6 = *(uint *)(lVar10 + lVar7 * 4 + 4 + lVar9 * 4);
            if (uVar6 != 0) {
              iVar13 = iVar13 + (int)lVar9 + 1;
              uVar14 = 0xffffffff;
              goto LAB_141504b44;
            }
            iVar15 = iVar15 + 0x20;
            lVar9 = lVar9 + 1;
          } while (iVar3 - lVar7 != lVar9);
          uVar14 = 0xffffffff;
          iVar13 = iVar3;
        }
        iVar13 = iVar13 + 1;
        plVar5 = local_80;
        iVar12 = iVar2;
      }
      else {
LAB_141504b44:
        uVar8 = (ulonglong)(-uVar6 & uVar6);
        uVar1 = uVar8 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar12 = (iVar15 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar12) {
          iVar12 = iVar2;
        }
      }
      iVar2 = local_84;
    } while (iVar12 != iVar11 || lVar4 != local_78);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141504d10 FUN_141504d10 body=572 status=ok
// SIG undefined FUN_141504d10(void)

void FUN_141504d10(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_98 = 0;
  uStack_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_88 = 0x100;
  local_78 = 0;
  local_68 = (longlong *)0x0;
  uStack_a0 = *(undefined8 *)(param_1 + 0x1b0);
  local_84 = 0x48;
  lVar1 = *(longlong *)(param_1 + 0x450);
  local_a8 = param_1;
  if ((((lVar1 == 0) || (lVar2 = FUN_14118b53e(), lVar2 == 0)) ||
      (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) ||
     ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
       lVar2 + 0x30 || (*(longlong *)(param_1 + 0x450) == 0)))) {
    uVar3 = FUN_1447210f0(param_1);
    uVar4 = FUN_14118b53e();
  }
  else {
    uVar3 = FUN_1447210f0(param_1);
    lVar1 = *(longlong *)(param_1 + 0x450);
    if (((lVar1 == 0) ||
        ((lVar2 = FUN_14118b53e(), lVar2 == 0 || (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))))
        ) || (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
              lVar2 + 0x30)) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x450);
    }
  }
  uStack_cc = 0x3ff00000;
  uStack_d0 = 0;
  uStack_d4 = 0x3ff00000;
  local_d8 = 0;
  uStack_c0 = 0;
  local_c8 = 0x3ff0000000000000;
  uStack_e0 = 0;
  local_e8 = 0;
  uStack_f0 = 0;
  local_f8 = 0;
  uStack_fc = 0x3ff00000;
  uStack_100 = 0;
  uStack_104 = 0;
  local_108 = 0;
  uStack_110 = 0;
  local_118 = 0;
  plVar5 = (longlong *)FUN_141037e38(uVar3,uVar4,&local_118,&local_b8);
  if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar5);
  }
  *(longlong **)(param_1 + 0x448) = plVar5;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x6e0))(plVar5,param_1);
  }
  if (local_78 != 0) {
    plVar5 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar5 = local_58;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141504f4e FUN_141504f4e body=572 status=ok
// SIG undefined FUN_141504f4e(void)

void FUN_141504f4e(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = (**(code **)(*param_1 + 0x180))();
  if ((((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1f0) != 0)) &&
      (lVar3 = FUN_141060562(), lVar3 != 0)) && (lVar3 = *(longlong *)(lVar3 + 0x30), lVar3 != 0)) {
    lVar7 = *(longlong *)(param_2 + 0x10);
    iVar2 = *(int *)(lVar7 + 0x84);
    FUN_1412823f0(*(undefined8 *)(lVar7 + 0x78),*(undefined4 *)(lVar7 + 0x80));
    *(undefined4 *)(lVar7 + 0x80) = 0;
    if ((iVar2 < 0) && (*(int *)(lVar7 + 0x84) != 0)) {
      FUN_145c9f902(lVar7 + 0x78,0);
    }
    *(int *)(lVar7 + 0x88) = *(int *)(lVar7 + 0x88) + 1;
    FUN_140bad112(*(longlong *)(param_2 + 0x10) + 0x40,&DAT_149dfb77a);
    puVar4 = (undefined8 *)FUN_146580688(lVar3);
    local_58 = (void *)0x0;
    local_50 = *(int *)(puVar4 + 1);
    lVar7 = (longlong)local_50;
    _Src = (void *)*puVar4;
    if (lVar7 == 0) {
      local_4c = 0;
    }
    else {
      FUN_144a06ca8(&local_58,local_50,0);
      memcpy(local_58,_Src,lVar7 << 2);
    }
    if ((longlong)(int)param_1[0xe] != 0) {
      lVar7 = param_1[0xd];
      lVar6 = (longlong)(int)param_1[0xe] * 0x168 + lVar7;
      do {
        if ((longlong)local_50 != 0) {
          lVar5 = 0;
          do {
            if (*(int *)((longlong)local_58 + lVar5) == *(int *)(lVar7 + 0x30)) {
              if (*(int *)(lVar7 + 0x18) < 2) {
                lVar5 = *(longlong *)(param_2 + 0x10);
                piVar1 = (int *)(lVar5 + 0x88);
                *piVar1 = *piVar1 + 1;
                lVar5 = FUN_1411f3330(lVar5 + 0x78);
                FUN_1449a0272(lVar5,lVar7 + 0x38);
                FUN_1449a0272(lVar5 + 0x18,lVar7 + 0xa8);
                FUN_1449a0272(lVar5 + 0x30,lVar7 + 0xb8);
                FUN_144a2b0a4(lVar7 + 0x68,local_68);
                FUN_140775538(lVar5 + 0x48,local_68);
                if (local_68[0] != 0) {
                  FUN_1400020a8();
                }
                if (*(int *)(lVar3 + 0x110) == *(int *)(lVar7 + 0x30)) {
                  FUN_140bb4432(*(longlong *)(param_2 + 0x10) + 0x40,lVar5 + 0x18);
                }
              }
              break;
            }
            lVar5 = lVar5 + 4;
          } while ((longlong)local_50 * 4 != lVar5);
        }
        lVar7 = lVar7 + 0x168;
      } while (lVar7 != lVar6);
    }
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14150518c FUN_14150518c body=1176 status=ok
// SIG undefined FUN_14150518c(void)

void FUN_14150518c(longlong param_1)

{
  ulonglong uVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  undefined8 uVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  int local_8c;
  undefined8 local_88;
  undefined8 *local_80;
  longlong local_78;
  longlong local_70;
  uint *local_68;
  undefined1 local_60 [4];
  undefined8 local_5c;
  uint local_54;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = FUN_1447210f0();
  lVar5 = FUN_1405c673d();
  *(undefined1 *)(param_1 + 0x748) = 0;
  uVar18 = 0;
  if (*(longlong *)(param_1 + 0x3f0) != 0) {
    lVar6 = FUN_14030d660();
    lVar19 = *(longlong *)(param_1 + 0x3f0);
    if (lVar19 != 0) {
      local_90 = 0;
      if ((lVar6 == 0) || (lVar7 = *(longlong *)(lVar19 + 0x10), lVar7 == 0)) goto LAB_14150522a;
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar7 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        local_90 = (undefined4)
                   CONCAT71((int7)((ulonglong)(lVar6 + 0x30) >> 8),*(int *)(lVar19 + 0x5f0) != 0);
        goto LAB_14150522a;
      }
    }
  }
  local_90 = 0;
LAB_14150522a:
  iVar15 = *(int *)(param_1 + 0x778);
  if (iVar15 == 0) {
    uVar22 = 1;
    iVar20 = 0;
    iVar17 = 0;
  }
  else {
    puVar13 = *(uint **)(param_1 + 0x770);
    if (*(uint **)(param_1 + 0x770) == (uint *)0x0) {
      puVar13 = (uint *)(param_1 + 0x760);
    }
    uVar21 = *puVar13;
    if (uVar21 == 0) {
      iVar20 = iVar15 + 0x1e;
      if (-1 < iVar15 + -1) {
        iVar20 = iVar15 + -1;
      }
      uVar18 = 0;
      uVar22 = (ulonglong)(uint)(iVar20 >> 5);
      if (iVar20 >> 5 < 1) {
        uVar22 = uVar18;
      }
      iVar20 = 0;
      do {
        if (uVar22 == uVar18) goto LAB_14150557d;
        iVar20 = iVar20 + 0x20;
        uVar21 = puVar13[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar21 == 0);
    }
    else {
      uVar18 = 0;
      iVar20 = 0;
    }
    uVar22 = (ulonglong)(-uVar21 & uVar21);
    uVar1 = uVar22 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    iVar17 = (iVar20 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
    if (iVar15 <= iVar17) {
      iVar17 = iVar15;
    }
  }
  if (iVar17 < iVar15) {
    local_70 = lVar5 + 0x138;
    local_78 = lVar5 + 0xe0;
    uVar21 = 0xffffffff;
    local_68 = (uint *)(param_1 + 0x760);
    do {
      lVar19 = *(longlong *)(param_1 + 0x750);
      local_8c = iVar20;
      if (DAT_14c947fe0 == 0) {
        lVar6 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar6);
        DAT_14c947fe0 = lVar6;
      }
      lVar6 = (longlong)iVar17 * 0x40;
      local_80 = (undefined8 *)(lVar19 + lVar6 + 0x28);
      FUN_140045924(DAT_14c947fe0,&local_50,lVar19 + lVar6,1);
      if (*(int *)(lVar5 + 0x108) != *(int *)(lVar5 + 0x134)) {
        uVar10 = (uint)((ulonglong)local_50 >> 0x10);
        uVar14 = (uint)local_50 & 0xffff;
        lVar7 = *(longlong *)(lVar5 + 0x140);
        if (*(longlong *)(lVar5 + 0x140) == 0) {
          lVar7 = local_70;
        }
        iVar15 = *(int *)(lVar7 + (ulonglong)
                                  (*(int *)(lVar5 + 0x148) - 1U &
                                  (int)((ulonglong)local_50 >> 0x20) +
                                  ((uint)local_50 << 0x10 | uVar14) +
                                  (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar14 >> 4)) * 4);
        if (iVar15 != -1) {
          do {
            lVar7 = *(longlong *)(lVar5 + 0x100) + (longlong)iVar15 * 0x30;
            if (*(longlong *)(*(longlong *)(lVar5 + 0x100) + (longlong)iVar15 * 0x30) == local_50) {
              lVar8 = lVar7 + 8;
              if ((lVar8 != 0 && lVar7 != 0) && (0 < *(int *)(lVar7 + 0x18))) {
                uVar16 = *local_80;
                goto LAB_14150553b;
              }
              break;
            }
            iVar15 = *(int *)(lVar7 + 0x28);
          } while (iVar15 != -1);
        }
      }
      if (0 < *(int *)(lVar5 + 0xf0)) {
        uVar16 = *local_80;
        lVar8 = local_78;
LAB_14150553b:
        uVar3 = FUN_1458355a0(lVar8,uVar16,1);
        *(undefined1 *)(lVar19 + 0x30 + lVar6) = uVar3;
      }
      if ((char)local_90 != '\0') {
        *(undefined1 *)(lVar19 + 0x30 + lVar6) = *(undefined1 *)(lVar5 + 0xd9);
      }
      if ((DAT_14cb8df08 != 0) &&
         (lVar7 = FUN_144837462(DAT_14cb8df08,*(longlong *)(param_1 + 0x750) + lVar6), lVar7 != 0))
      {
        cVar2 = FUN_140114204(lVar7 + 0x138);
        if (cVar2 != '\0') {
          local_60[0] = 2;
          local_54 = (uint)*(byte *)(lVar19 + 0x30 + lVar6);
          local_5c = 0;
          lVar8 = FUN_140149a73(local_88,0);
          if (lVar8 != 0) {
            FUN_140bc53f1(lVar7 + 0x138,local_60,lVar8,0);
          }
        }
      }
      *(char *)(param_1 + 0x748) = *(char *)(param_1 + 0x748) + *(char *)(lVar19 + 0x30 + lVar6);
      uVar21 = uVar21 & ~(uint)uVar22;
      puVar13 = *(uint **)(param_1 + 0x770);
      if (*(uint **)(param_1 + 0x770) == (uint *)0x0) {
        puVar13 = local_68;
      }
      iVar15 = *(int *)(param_1 + 0x778);
      iVar17 = (int)uVar18;
      lVar19 = (longlong)iVar17;
      uVar10 = puVar13[lVar19] & uVar21;
      iVar20 = local_8c;
      if (uVar10 == 0) {
        iVar11 = iVar15 + 0x1e;
        if (-1 < iVar15 + -1) {
          iVar11 = iVar15 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar17) {
          iVar12 = iVar17;
        }
        if (iVar11 <= iVar17) break;
        lVar6 = 0;
        while( true ) {
          iVar20 = iVar20 + 0x20;
          uVar10 = puVar13[lVar19 + lVar6 + 1];
          if (uVar10 != 0) break;
          lVar6 = lVar6 + 1;
          if (iVar12 - lVar19 == lVar6) goto LAB_14150557d;
        }
        uVar18 = (ulonglong)(iVar17 + (int)lVar6 + 1);
        uVar21 = 0xffffffff;
      }
      uVar22 = (ulonglong)(-uVar10 & uVar10);
      uVar1 = uVar22 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      iVar17 = (iVar20 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
    } while (iVar17 < iVar15);
  }
LAB_14150557d:
  bVar4 = *(byte *)(lVar5 + 0xd8);
  bVar9 = bVar4;
  if ((char)local_90 == '\0') {
    bVar9 = *(byte *)(param_1 + 0x748);
  }
  if (bVar9 < bVar4) {
    bVar4 = bVar9;
  }
  *(byte *)(param_1 + 0x748) = bVar4;
  cVar2 = FUN_140114204(lVar5 + 0x150);
  if (cVar2 != '\0') {
    local_60[0] = 2;
    local_54 = (uint)*(byte *)(param_1 + 0x748);
    local_5c = 0;
    lVar19 = FUN_140149a73(local_88,0);
    if (lVar19 != 0) {
      FUN_140bc53f1(lVar5 + 0x150,local_60,lVar19,0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141505626 FUN_141505626 body=96 status=ok
// SIG undefined FUN_141505626(void)

void FUN_141505626(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c990f00) {
    FUN_144b3d300(&DAT_14c990f00);
    if (DAT_14c990f00 == -1) {
      FUN_145c580a8();
      atexit(FUN_14291dc0e);
      _Init_thread_footer(&DAT_14c990f00);
      return;
    }
  }
  return;
}



// FUNCTION 141505686 FUN_141505686 body=229 status=ok
// SIG undefined FUN_141505686(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141505686(void)

{
  BOOL BVar1;
  undefined1 auStack_1a8 [32];
  DWORD local_188;
  DWORD local_180;
  uint local_178;
  uint local_170;
  wchar_t *local_168;
  _SYSTEM_INFO local_160;
  _OSVERSIONINFOW local_12c;
  ushort local_14;
  byte local_12;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  _DAT_14c8c2a40 = 0;
  GetNativeSystemInfo(&local_160);
  memset(&local_12c.dwMajorVersion,0,0x118);
  local_12c.dwOSVersionInfoSize = 0x11c;
  BVar1 = GetVersionExW(&local_12c);
  if (BVar1 == 0) {
    _DAT_14c8c2a40 = 0;
  }
  else {
    local_168 = L"64bit";
    local_170 = (uint)local_14;
    local_178 = (uint)local_12;
    local_180 = local_12c.dwBuildNumber;
    local_188 = local_12c.dwMinorVersion;
    FUN_144737500(&DAT_14c8c2a40,0x80,L"%d.%d.%d.%d.%d.%s",local_12c.dwMajorVersion);
  }
  if ((local_10 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14150576c FUN_14150576c body=282 status=ok
// SIG undefined FUN_14150576c(void)

undefined8 * FUN_14150576c(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  
  *param_1 = &PTR_FUN_149f29e70;
  param_1[1] = &PTR_LAB_149f29f00;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0x100;
  *(undefined4 *)(param_1 + 5) = 7;
  lVar2 = DAT_14c990e60;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar6 = 0;
  }
  else if (iVar1 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar6 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar6 = 1;
  }
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(lVar2 + uVar6 * 4);
  param_1[6] = 0;
  puVar5 = (undefined8 *)FUN_14001cc68(0x10,8);
  *puVar5 = 0;
  param_1[6] = puVar5;
  param_1[7] = puVar5;
  param_1[8] = 0;
  puVar5 = (undefined8 *)FUN_14001cc68(0x10,8);
  *puVar5 = 0;
  param_1[8] = puVar5;
  param_1[9] = puVar5;
  param_1[0xe] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  puVar5 = (undefined8 *)FUN_14001cc68(0x10,8);
  *puVar5 = 0;
  param_1[0xe] = puVar5;
  param_1[0x11] = puVar5;
  param_1[0x10] = puVar5;
  param_1[0xf] = puVar5;
  return param_1;
}



// FUNCTION 141505886 FUN_141505886 body=61 status=ok
// SIG undefined FUN_141505886(void)

void FUN_141505886(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1415058c4 FUN_1415058c4 body=67 status=ok
// SIG undefined FUN_1415058c4(void)

void FUN_1415058c4(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14ae6bab0;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001415058fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 141505908 FUN_141505908 body=21 status=ok
// SIG undefined FUN_141505908(void)

void FUN_141505908(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 0x108) = *(int *)(lVar1 + 0x108) + 1;
  }
  return;
}



// FUNCTION 14150591e FUN_14150591e body=377 status=ok
// SIG undefined FUN_14150591e(void)

void FUN_14150591e(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  float fVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_f8 [32];
  undefined8 local_d8 [13];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar11 = param_1 + 0x140;
  uVar6 = *(uint *)(param_1 + 0x1d4);
  iVar12 = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  if ((int)uVar6 < 0) {
    FUN_147f80112(lVar11,0);
    iVar12 = *(int *)(param_1 + 0x1d0);
    uVar6 = *(uint *)(param_1 + 0x1d4);
  }
  *(undefined1 *)(param_1 + 0x26c) = 0;
  puVar9 = param_2;
  puVar10 = local_d8;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  fVar2 = *(float *)((longlong)param_2 + 100);
  uVar3 = *(undefined1 *)(param_2 + 0xd);
  uVar4 = *(undefined1 *)((longlong)param_2 + 0x69);
  uVar5 = *(undefined8 *)((longlong)param_2 + 0x6c);
  *(uint *)(param_1 + 0x1d0) = iVar12 + 1U;
  if (uVar6 < iVar12 + 1U) {
    FUN_140089f7a(lVar11,iVar12);
  }
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    lVar11 = *(longlong *)(param_1 + 0x1c0);
  }
  lVar8 = (longlong)iVar12 * 0x80;
  puVar9 = local_d8;
  puVar10 = (undefined8 *)(lVar11 + lVar8);
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  *(undefined4 *)(lVar11 + 0x60 + lVar8) = uVar1;
  *(float *)(lVar11 + 100 + lVar8) = fVar2;
  *(undefined1 *)(lVar11 + 0x68 + lVar8) = uVar3;
  *(undefined1 *)(lVar11 + 0x69 + lVar8) = uVar4;
  *(undefined8 *)(lVar11 + 0x6c + lVar8) = uVar5;
  if (fVar2 < 0.0) {
    *(undefined4 *)(lVar11 + lVar8 + 100) = *(undefined4 *)(param_1 + 0x268);
    *(undefined1 *)(param_1 + 0x26c) = 1;
  }
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    FUN_1447906c0(param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141505a98 FUN_141505a98 body=2382 status=ok
// SIG undefined FUN_141505a98(void)

void FUN_141505a98(longlong param_1,float param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_138 [32];
  undefined2 *local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined8 local_100;
  wchar_t *local_f8;
  code *local_f0;
  undefined1 *local_e8;
  code **local_e0;
  code *local_d8;
  code *local_d0;
  undefined8 *local_c0;
  int local_b8;
  undefined2 local_b0 [2];
  undefined4 local_ac;
  code *local_a8;
  undefined4 local_a0;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  *(float *)(param_1 + 0x6c) = param_2;
  if ((((*(char *)(param_1 + 0x178) != '\x03') && ((*(byte *)(param_1 + 0x61) & 1) == 0)) &&
      ((*(byte *)(param_1 + 0x60) & 1) == 0)) ||
     ((((*(uint *)(param_1 + 8) >> 0x1e & 1) != 0 || ((*(uint *)(param_1 + 8) & 0x10) != 0)) ||
      ((lVar2 = *(longlong *)(param_1 + 0x20), lVar2 == 0 || ((short)*(undefined4 *)(lVar2 + 8) < 0)
       ))))) goto LAB_141505cf9;
  uVar6 = *(uint *)(lVar2 + 0xc);
  if ((int)uVar6 < DAT_14c9647dc) {
    lVar2 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
  }
  else {
    lVar2 = 0;
  }
  if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) != 0) goto LAB_141505cf9;
  if (DAT_14cae8b20 == 0) {
    local_e0 = &local_a8;
    local_a8 = (code *)&LAB_14355090c;
    local_d0 = FUN_14081d0ea;
    local_d8 = FUN_14081d0ea;
    local_e8 = &LAB_147b8e16d;
    local_f0 = (code *)&LAB_140810a38;
    local_f8 = L"Engine";
    local_100 = 0x800000000;
    local_108 = 0x10000000;
    local_110 = 8;
    local_118 = (undefined2 *)CONCAT44(local_118._4_4_,0x3f0);
    FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
  }
  lVar2 = DAT_14cae8b20;
  if (DAT_14c951858 == 0) {
    local_e0 = &local_a8;
    local_a8 = FUN_1449e2820;
    local_d0 = FUN_14081d0ea;
    local_d8 = FUN_14081d0ea;
    local_e8 = &LAB_1468c5283;
    local_f0 = FUN_142809da0;
    local_f8 = L"Engine";
    local_100 = 0x400000000;
    local_108 = 0x10000000;
    local_110 = 8;
    local_118 = (undefined2 *)CONCAT44(local_118._4_4_,0x50);
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 == 0) goto LAB_141505cf9;
  iVar7 = *(int *)(lVar2 + 0x38);
  lVar10 = lVar5;
  do {
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < iVar7) ||
       (lVar9 = lVar10,
       *(longlong *)(*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)iVar7 * 8) !=
       lVar2 + 0x30)) {
      lVar9 = 0;
    }
  } while ((lVar9 == 0) && (lVar10 = *(longlong *)(lVar10 + 0x20), lVar10 != 0));
  if ((lVar9 == 0) || (*(longlong *)(lVar9 + 0xc0) == 0)) goto LAB_141505cf9;
  if (0.0 < param_2) {
    if (((*(uint *)(param_1 + 8) & 0x10) == 0) && (-1 < (short)*(undefined4 *)(lVar5 + 8))) {
      uVar6 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar6 < DAT_14c9647dc) {
        lVar2 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      }
      else {
        lVar2 = 0;
      }
      if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) != 0) goto LAB_141505fd6;
      if (DAT_14cae8b20 == 0) {
        local_e0 = &local_a8;
        local_a8 = (code *)&LAB_14355090c;
        local_d0 = FUN_14081d0ea;
        local_d8 = FUN_14081d0ea;
        local_e8 = &LAB_147b8e16d;
        local_f0 = (code *)&LAB_140810a38;
        local_f8 = L"Engine";
        local_100 = 0x800000000;
        local_108 = 0x10000000;
        local_110 = 8;
        local_118 = (undefined2 *)CONCAT44(local_118._4_4_,0x3f0);
        FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
      }
      lVar2 = DAT_14cae8b20;
      if (DAT_14c951858 == 0) {
        local_e0 = &local_a8;
        local_a8 = FUN_1449e2820;
        local_d0 = FUN_14081d0ea;
        local_d8 = FUN_14081d0ea;
        local_e8 = &LAB_1468c5283;
        local_f0 = FUN_142809da0;
        local_f8 = L"Engine";
        local_100 = 0x400000000;
        local_108 = 0x10000000;
        local_110 = 8;
        local_118 = (undefined2 *)CONCAT44(local_118._4_4_,0x50);
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar5 = *(longlong *)(param_1 + 0x20);
      if (lVar5 == 0) goto LAB_141505fd6;
      iVar7 = *(int *)(lVar2 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < iVar7) ||
           (lVar10 = lVar5,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar7 * 8) !=
           lVar2 + 0x30)) {
          lVar10 = 0;
        }
      } while ((lVar10 == 0) && (lVar5 = *(longlong *)(lVar5 + 0x20), lVar5 != 0));
      if (lVar10 == 0) goto LAB_141505fd6;
      lVar2 = *(longlong *)(lVar10 + 0xc0);
    }
    else {
LAB_141505fd6:
      lVar2 = 0;
    }
    if (*(longlong *)(lVar2 + 0x1f0) == 0) {
      puVar4 = (undefined8 *)(lVar2 + 0x458);
    }
    else {
      puVar4 = (undefined8 *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
    }
    uVar1 = *puVar4;
    local_c0 = (undefined8 *)0x0;
    local_b8 = 0;
    FUN_1446efa72(&local_c0,0,3,0x10);
    puVar4 = local_c0;
    local_b8 = 3;
    *local_c0 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_c0[2] = lVar5;
    *local_c0 = &PTR_FUN_14a78db60;
    local_c0[3] = 0;
    iVar7 = 0;
    if (param_1 != 0) {
      uVar6 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_c0 + 3) = uVar6;
      if ((int)uVar6 < DAT_14c9647dc) {
        lVar2 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      }
      else {
        lVar2 = 0;
      }
      iVar7 = *(int *)(lVar2 + 0x10);
      if (*(int *)(lVar2 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar7 = *(int *)(lVar2 + 0x10);
        bVar11 = iVar7 == 0;
        if (bVar11) {
          *(int *)(lVar2 + 0x10) = iVar8;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar7 = iVar8;
        }
      }
    }
    *(int *)((longlong)puVar4 + 0x1c) = iVar7;
    puVar4[4] = &LAB_140ea08b8;
    local_a8 = (code *)0x0;
    local_a0 = 0;
    FUN_14487d8d8(&local_a8,&local_c0);
    local_68 = 1;
    local_118 = local_b0;
    local_b0[0] = 0;
    local_ac = 0xbf800000;
    FUN_1406f4044(uVar1,param_1 + 0x1d0,&local_a8,param_2);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
    if (local_b8 != 0) {
      if (local_c0 == (undefined8 *)0x0) goto LAB_141505cf9;
      (**(code **)*local_c0)(local_c0,0);
      FUN_1446efa72(&local_c0,0,0,0x10);
      local_b8 = 0;
    }
    if (local_c0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    goto LAB_141505cf9;
  }
  if (((*(uint *)(param_1 + 8) & 0x10) == 0) && (-1 < (short)*(undefined4 *)(lVar5 + 8))) {
    uVar6 = *(uint *)(lVar5 + 0xc);
    if ((int)uVar6 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) != 0) goto LAB_141505f54;
    if (DAT_14cae8b20 == 0) {
      local_e0 = &local_a8;
      local_a8 = (code *)&LAB_14355090c;
      local_d0 = FUN_14081d0ea;
      local_d8 = FUN_14081d0ea;
      local_e8 = &LAB_147b8e16d;
      local_f0 = (code *)&LAB_140810a38;
      local_f8 = L"Engine";
      local_100 = 0x800000000;
      local_108 = 0x10000000;
      local_110 = 8;
      local_118 = (undefined2 *)CONCAT44(local_118._4_4_,0x3f0);
      FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
    }
    lVar2 = DAT_14cae8b20;
    if (DAT_14c951858 == 0) {
      local_e0 = &local_a8;
      local_a8 = FUN_1449e2820;
      local_d0 = FUN_14081d0ea;
      local_d8 = FUN_14081d0ea;
      local_e8 = &LAB_1468c5283;
      local_f0 = FUN_142809da0;
      local_f8 = L"Engine";
      local_100 = 0x400000000;
      local_108 = 0x10000000;
      local_110 = 8;
      local_118 = (undefined2 *)CONCAT44(local_118._4_4_,0x50);
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar5 = *(longlong *)(param_1 + 0x20);
    if (lVar5 == 0) goto LAB_141505f54;
    iVar7 = *(int *)(lVar2 + 0x38);
    do {
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < iVar7) ||
         (lVar10 = lVar5,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar7 * 8) !=
         lVar2 + 0x30)) {
        lVar10 = 0;
      }
    } while ((lVar10 == 0) && (lVar5 = *(longlong *)(lVar5 + 0x20), lVar5 != 0));
    if (lVar10 == 0) goto LAB_141505f54;
    lVar2 = *(longlong *)(lVar10 + 0xc0);
  }
  else {
LAB_141505f54:
    lVar2 = 0;
  }
  if (*(longlong *)(lVar2 + 0x1f0) == 0) {
    plVar3 = (longlong *)(lVar2 + 0x458);
  }
  else {
    plVar3 = (longlong *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
  }
  lVar2 = *(longlong *)(param_1 + 0x1d0);
  if (lVar2 != 0) {
    lVar5 = *plVar3;
    uVar6 = (uint)lVar2;
    if ((int)(uVar6 & 0xffffff) < *(int *)(lVar5 + 0x10)) {
      lVar10 = lVar5 + 0x18;
      if (*(longlong *)(lVar5 + 0x28) != 0) {
        lVar10 = *(longlong *)(lVar5 + 0x28);
      }
      if ((*(uint *)(lVar10 + (ulonglong)((uVar6 & 0xffffff) >> 5) * 4) >> (uVar6 & 0x1f) & 1) != 0)
      {
        lVar5 = *(longlong *)(lVar5 + 8);
        lVar10 = (ulonglong)(uVar6 & 0xffffff) * 0x70;
        if (((lVar5 + lVar10 != 0) && (*(longlong *)(lVar5 + 0x60 + lVar10) == lVar2)) &&
           (*(char *)(lVar5 + 1 + lVar10) != '\x04')) {
          FUN_1405a424c();
        }
      }
    }
  }
  *(undefined8 *)(param_1 + 0x1d0) = 0;
LAB_141505cf9:
  if ((local_50 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415063e8 FUN_1415063e8 body=53 status=ok
// SIG undefined FUN_1415063e8(void)

void FUN_1415063e8(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  FUN_1446f2cc4();
  plVar1 = *(longlong **)(param_1 + 0x70);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141506412. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 14150641e FUN_14150641e body=51 status=ok
// SIG undefined FUN_14150641e(void)

void FUN_14150641e(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x70,0,0);
  FUN_1446f2cc4(param_1,param_2);
  return;
}



// FUNCTION 141506451 FUN_141506451 body=49 status=ok
// SIG undefined FUN_141506451(void)

longlong FUN_141506451(void)

{
  if (DAT_14caa8c18 == 0) {
    FUN_140f50038(&DAT_14caa8c18,&PTR_s__Script_FieldSystemEngine_14a3ef5f8);
  }
  return DAT_14caa8c18;
}



// FUNCTION 141506482 FUN_141506482 body=49 status=ok
// SIG undefined FUN_141506482(void)

longlong FUN_141506482(void)

{
  if (DAT_14cb1ddc0 == 0) {
    FUN_140f50038(&DAT_14cb1ddc0,&PTR_s__Script_GameplayTasks_14abc3698);
  }
  return DAT_14cb1ddc0;
}



// FUNCTION 1415064b3 FUN_1415064b3 body=49 status=ok
// SIG undefined FUN_1415064b3(void)

longlong FUN_1415064b3(void)

{
  if (DAT_14cb4be80 == 0) {
    FUN_140f50038(&DAT_14cb4be80,&PTR_s__Script_GeometryFramework_14aee63a8);
  }
  return DAT_14cb4be80;
}



// FUNCTION 1415064e4 FUN_1415064e4 body=305 status=ok
// SIG undefined FUN_1415064e4(void)

void FUN_1415064e4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[0xc] = 0;
  param_1[0xd] = 0x8000000000;
  param_1[0xe] = 0xffffffff;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0xf;
  *(undefined2 *)(param_1 + 0x18) = 1;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x3ff00000;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0x3ff0000000000000;
  param_1[0x25] = 0x3ff0000000000000;
  param_1[0x26] = 0x3ff0000000000000;
  param_1[0x27] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x29] = DAT_14c8464e0;
  param_1[0x2a] = uVar1;
  param_1[0x2b] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x2c] = DAT_14c8464e0;
  param_1[0x2d] = uVar1;
  param_1[0x2e] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  param_1[0x31] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x44] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x4a] = 2;
  param_1[0x4b] = 0;
  return;
}



// FUNCTION 141506615 FUN_141506615 body=87 status=ok
// SIG undefined FUN_141506615(void)

void FUN_141506615(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0xb0;
    do {
      FUN_145c5b6e4(param_1);
      if (*(longlong *)(param_1 + -0x10) != 0) {
        FUN_1400020a8();
      }
      FUN_1488493ea(param_1 + -0x60);
      if (*(char *)(param_1 + -0x90) == '\x01') {
        *(undefined1 *)(param_1 + -0x90) = 0;
      }
      param_1 = param_1 + 0xe8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14150666c FUN_14150666c body=49 status=ok
// SIG undefined FUN_14150666c(void)

longlong FUN_14150666c(void)

{
  if (DAT_14cbf2a38 == 0) {
    FUN_140f50038(&DAT_14cbf2a38,&PTR_s__Script_SequencerScripting_14b9f17b0);
  }
  return DAT_14cbf2a38;
}



// FUNCTION 14150669d FUN_14150669d body=49 status=ok
// SIG undefined FUN_14150669d(void)

longlong FUN_14150669d(void)

{
  if (DAT_14cc30b88 == 0) {
    FUN_140f50038(&DAT_14cc30b88,&PTR_s__Script_ChaosNiagara_14bee5b10);
  }
  return DAT_14cc30b88;
}



// FUNCTION 1415066ce FUN_1415066ce body=3443 status=ok
// SIG undefined FUN_1415066ce(void)

longlong * FUN_1415066ce(longlong param_1,longlong *param_2)

{
  int *piVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *plVar12;
  ushort uVar13;
  longlong *plVar14;
  undefined *puVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  undefined8 *puVar22;
  undefined8 ****ppppuVar23;
  bool bVar24;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  undefined8 ***local_a0 [3];
  ushort local_88;
  byte local_80;
  char local_78 [8];
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined1 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (((((*(longlong **)(param_1 + 0xe0) == (longlong *)0x0) || (*(int *)(param_1 + 0xdc) == 0)) ||
       (uVar9 = *(uint *)(param_1 + 0xd8), (int)uVar9 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar9 ||
       (lVar20 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8), lVar20 == 0)))) ||
     ((((*(int *)(lVar20 + 0x10) != *(int *)(param_1 + 0xdc) ||
        (((*(uint *)(lVar20 + 8) & 0x10200000) != 0 ||
         (lVar20 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x10))(), lVar20 == 0)))) ||
       (*(int *)(param_1 + 0xec) == 0)) ||
      ((((uVar9 = *(uint *)(param_1 + 0xe8), (int)uVar9 < 0 || (DAT_14c9647dc <= (int)uVar9)) ||
        (plVar14 = (longlong *)
                   ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
        plVar14 == (longlong *)0x0)) ||
       ((((int)plVar14[2] != *(int *)(param_1 + 0xec) ||
         ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)) || (lVar16 = *plVar14, lVar16 == 0)))))))) {
    memset(param_2,0,0x128);
    FUN_141507444(param_2 + 3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
  }
  lVar19 = *(longlong *)(param_1 + 0x48);
  param_2[2] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined2 *)(param_2 + 3) = 0x101;
  param_2[4] = 0;
  *(undefined2 *)(param_2 + 8) = 4;
  *(undefined4 *)(param_2 + 5) = 0;
  *(undefined1 *)(param_2 + 9) = 1;
  bVar5 = DAT_14c9a8634;
  *(bool *)(param_2 + 10) = (DAT_14c9a8634 & 0x20) == 0;
  param_2[0xb] = 0;
  *(undefined2 *)(param_2 + 0xf) = 4;
  *(undefined4 *)(param_2 + 0xc) = 0x40200000;
  *(undefined1 *)(param_2 + 0x10) = 3;
  bVar3 = DAT_14c9a8874 & 0x20;
  *(bool *)(param_2 + 0x18) = (bVar5 & 0x20) == 0;
  cVar6 = (bVar3 == 0) * '\x03';
  *(char *)(param_2 + 0x11) = cVar6;
  param_2[0x12] = 0;
  *(undefined2 *)(param_2 + 0x16) = 4;
  *(undefined4 *)(param_2 + 0x13) = 0;
  *(undefined1 *)(param_2 + 0x17) = 1;
  param_2[0x19] = 0;
  *(undefined2 *)(param_2 + 0x1d) = 4;
  *(undefined4 *)(param_2 + 0x1a) = 0x40200000;
  *(undefined1 *)(param_2 + 0x1e) = 3;
  *(char *)(param_2 + 0x1f) = cVar6;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  *(undefined1 *)(param_2 + 0x24) = 1;
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(lVar16);
  }
  *param_2 = lVar16;
  if (*(int *)(param_1 + 0xf4) == 0) {
LAB_141506e32:
    lVar18 = 0;
  }
  else {
    uVar9 = *(uint *)(param_1 + 0xf0);
    lVar18 = 0;
    if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) {
      plVar14 = (longlong *)
                ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
      if ((plVar14 == (longlong *)0x0) ||
         (((int)plVar14[2] != *(int *)(param_1 + 0xf4) ||
          ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)))) goto LAB_141506e32;
      lVar18 = *plVar14;
      if ((lVar18 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar18);
      }
    }
  }
  plVar14 = param_2 + 5;
  param_2[2] = lVar18;
  *(undefined2 *)(param_2 + 3) = *(undefined2 *)(lVar19 + 0xf0);
  puVar22 = (undefined8 *)(lVar19 + 0x100);
  bVar3 = *(byte *)(param_2 + 9);
  if (bVar3 == *(byte *)(lVar19 + 0x120)) {
    if (0x18 < *(ushort *)(lVar19 + 0x118)) {
      puVar22 = *(undefined8 **)(lVar19 + 0x100);
    }
    if (0x18 < *(ushort *)(param_2 + 8)) {
      plVar14 = (longlong *)*plVar14;
    }
    uVar10 = (ulonglong)((uint)bVar3 * 0x120);
    pcVar2 = *(code **)((longlong)&DAT_14c9a85c0 + uVar10);
    if (pcVar2 == (code *)0x0) {
      memcpy(plVar14,puVar22,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar10));
    }
    else {
      (*pcVar2)(plVar14,puVar22);
    }
  }
  else {
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
    uVar13 = *(ushort *)(param_2 + 8);
    if (pcVar2 != (code *)0x0) {
      plVar11 = plVar14;
      if (0x18 < uVar13) {
        plVar11 = (longlong *)*plVar14;
      }
      (*pcVar2)(plVar11);
      uVar13 = *(ushort *)(param_2 + 8);
    }
    if (0x18 < uVar13) {
      FUN_1400020a8(*plVar14);
    }
    bVar3 = *(byte *)(lVar19 + 0x120);
    uVar13 = *(ushort *)(lVar19 + 0x118);
    *(ushort *)(param_2 + 8) = uVar13;
    plVar11 = plVar14;
    if (0x18 < uVar13) {
      plVar11 = (longlong *)FUN_14001cc68(uVar13,0);
      *plVar14 = (longlong)plVar11;
      puVar22 = (undefined8 *)*puVar22;
    }
    uVar10 = (ulonglong)((uint)bVar3 * 0x120);
    pcVar2 = *(code **)((longlong)&DAT_14c9a85b0 + uVar10);
    if (pcVar2 == (code *)0x0) {
      memcpy(plVar11,puVar22,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar10));
    }
    else {
      (*pcVar2)(plVar11,puVar22);
    }
    *(undefined1 *)(param_2 + 9) = *(undefined1 *)(lVar19 + 0x120);
  }
  plVar14 = param_2 + 0xc;
  *(undefined1 *)(param_2 + 10) = *(undefined1 *)(lVar19 + 0x128);
  puVar22 = (undefined8 *)(lVar19 + 0x138);
  bVar3 = *(byte *)(param_2 + 0x10);
  if (bVar3 == *(byte *)(lVar19 + 0x158)) {
    if (0x18 < *(ushort *)(lVar19 + 0x150)) {
      puVar22 = *(undefined8 **)(lVar19 + 0x138);
    }
    if (0x18 < *(ushort *)(param_2 + 0xf)) {
      plVar14 = (longlong *)*plVar14;
    }
    uVar10 = (ulonglong)((uint)bVar3 * 0x120);
    pcVar2 = *(code **)((longlong)&DAT_14c9a85c0 + uVar10);
    if (pcVar2 == (code *)0x0) {
      memcpy(plVar14,puVar22,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar10));
    }
    else {
      (*pcVar2)(plVar14,puVar22);
    }
  }
  else {
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
    if (pcVar2 != (code *)0x0) {
      plVar11 = plVar14;
      if (0x18 < *(ushort *)(param_2 + 0xf)) {
        plVar11 = (longlong *)*plVar14;
      }
      (*pcVar2)(plVar11);
    }
    if (0x18 < *(ushort *)(param_2 + 0xf)) {
      FUN_1400020a8(*plVar14);
    }
    bVar3 = *(byte *)(lVar19 + 0x158);
    uVar9 = (uint)bVar3;
    uVar13 = *(ushort *)(lVar19 + 0x150);
    *(ushort *)(param_2 + 0xf) = uVar13;
    plVar11 = plVar14;
    if (0x18 < uVar13) {
      local_a8 = (ulonglong)bVar3;
      plVar11 = (longlong *)FUN_14001cc68(uVar13,0);
      *plVar14 = (longlong)plVar11;
      puVar22 = (undefined8 *)*puVar22;
      uVar9 = (uint)local_a8;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar9 * 0x120));
    if (pcVar2 == (code *)0x0) {
      memcpy(plVar11,puVar22,
             (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar9 * 0x120)));
    }
    else {
      (*pcVar2)(plVar11,puVar22);
    }
    *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(lVar19 + 0x158);
  }
  plVar14 = param_2 + 0x13;
  *(undefined1 *)(param_2 + 0x11) = *(undefined1 *)(lVar19 + 0x160);
  puVar22 = (undefined8 *)(lVar19 + 0x170);
  bVar3 = *(byte *)(param_2 + 0x17);
  if (bVar3 == *(byte *)(lVar19 + 400)) {
    if (0x18 < *(ushort *)(lVar19 + 0x188)) {
      puVar22 = *(undefined8 **)(lVar19 + 0x170);
    }
    if (0x18 < *(ushort *)(param_2 + 0x16)) {
      plVar14 = (longlong *)*plVar14;
    }
    uVar10 = (ulonglong)((uint)bVar3 * 0x120);
    pcVar2 = *(code **)((longlong)&DAT_14c9a85c0 + uVar10);
    if (pcVar2 == (code *)0x0) {
      memcpy(plVar14,puVar22,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar10));
    }
    else {
      (*pcVar2)(plVar14,puVar22);
    }
  }
  else {
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
    if (pcVar2 != (code *)0x0) {
      plVar11 = plVar14;
      if (0x18 < *(ushort *)(param_2 + 0x16)) {
        plVar11 = (longlong *)*plVar14;
      }
      (*pcVar2)(plVar11);
    }
    if (0x18 < *(ushort *)(param_2 + 0x16)) {
      FUN_1400020a8(*plVar14);
    }
    bVar3 = *(byte *)(lVar19 + 400);
    uVar9 = (uint)bVar3;
    uVar13 = *(ushort *)(lVar19 + 0x188);
    *(ushort *)(param_2 + 0x16) = uVar13;
    plVar11 = plVar14;
    if (0x18 < uVar13) {
      local_a8 = (ulonglong)bVar3;
      plVar11 = (longlong *)FUN_14001cc68(uVar13,0);
      *plVar14 = (longlong)plVar11;
      puVar22 = (undefined8 *)*puVar22;
      uVar9 = (uint)local_a8;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar9 * 0x120));
    if (pcVar2 == (code *)0x0) {
      memcpy(plVar11,puVar22,
             (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar9 * 0x120)));
    }
    else {
      (*pcVar2)(plVar11,puVar22);
    }
    *(undefined1 *)(param_2 + 0x17) = *(undefined1 *)(lVar19 + 400);
  }
  plVar14 = param_2 + 0x1a;
  plVar11 = param_2 + 0x20;
  *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)(lVar19 + 0x198);
  puVar22 = (undefined8 *)(lVar19 + 0x1a8);
  bVar3 = *(byte *)(param_2 + 0x1e);
  if (bVar3 == *(byte *)(lVar19 + 0x1c8)) {
    if (0x18 < *(ushort *)(lVar19 + 0x1c0)) {
      puVar22 = *(undefined8 **)(lVar19 + 0x1a8);
    }
    if (0x18 < *(ushort *)(param_2 + 0x1d)) {
      plVar14 = (longlong *)*plVar14;
    }
    uVar10 = (ulonglong)((uint)bVar3 * 0x120);
    pcVar2 = *(code **)((longlong)&DAT_14c9a85c0 + uVar10);
    if (pcVar2 == (code *)0x0) {
      memcpy(plVar14,puVar22,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar10));
    }
    else {
      (*pcVar2)(plVar14,puVar22);
    }
  }
  else {
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
    if (pcVar2 != (code *)0x0) {
      plVar12 = plVar14;
      if (0x18 < *(ushort *)(param_2 + 0x1d)) {
        plVar12 = (longlong *)*plVar14;
      }
      (*pcVar2)(plVar12);
    }
    if (0x18 < *(ushort *)(param_2 + 0x1d)) {
      FUN_1400020a8(*plVar14);
    }
    bVar3 = *(byte *)(lVar19 + 0x1c8);
    uVar9 = (uint)bVar3;
    uVar13 = *(ushort *)(lVar19 + 0x1c0);
    *(ushort *)(param_2 + 0x1d) = uVar13;
    plVar12 = plVar14;
    if (0x18 < uVar13) {
      local_a8 = (ulonglong)bVar3;
      plVar12 = (longlong *)FUN_14001cc68(uVar13,0);
      *plVar14 = (longlong)plVar12;
      puVar22 = (undefined8 *)*puVar22;
      uVar9 = (uint)local_a8;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar9 * 0x120));
    if (pcVar2 == (code *)0x0) {
      memcpy(plVar12,puVar22,
             (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar9 * 0x120)));
    }
    else {
      (*pcVar2)(plVar12,puVar22);
    }
    *(undefined1 *)(param_2 + 0x1e) = *(undefined1 *)(lVar19 + 0x1c8);
  }
  *(undefined1 *)(param_2 + 0x1f) = *(undefined1 *)(lVar19 + 0x1d0);
  FUN_1403de7ba(plVar11,lVar19 + 0x1d8);
  *(undefined1 *)(param_2 + 0x24) = *(undefined1 *)(lVar19 + 0x1f8);
  lVar18 = *(longlong *)(param_1 + 0x40);
  if (lVar18 == 0) {
    lVar17 = 0;
    param_1 = 0;
  }
  else {
    if (*(int *)(lVar18 + 0x4c) == 0) {
LAB_141506e3a:
      lVar17 = 0;
    }
    else {
      uVar9 = *(uint *)(lVar18 + 0x48);
      lVar17 = 0;
      if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) {
        plVar14 = (longlong *)
                  ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
        if ((plVar14 == (longlong *)0x0) ||
           (((int)plVar14[2] != *(int *)(lVar18 + 0x4c) ||
            ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)))) goto LAB_141506e3a;
        lVar17 = *plVar14;
      }
    }
    plVar14 = *(longlong **)(lVar18 + 0x118);
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar14 + 0xc) = *(int *)((longlong)plVar14 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar12 = plVar14 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
      LOCK();
      *(int *)((longlong)plVar14 + 0xc) = *(int *)((longlong)plVar14 + 0xc) + 1;
      UNLOCK();
      bVar4 = false;
      local_70 = param_1;
      local_68 = plVar14;
      goto LAB_141506bd8;
    }
  }
  local_68 = (longlong *)0x0;
  bVar4 = true;
  local_70 = param_1;
LAB_141506bd8:
  plVar14 = local_68;
  local_50 = 0;
  local_78[0] = '\x03';
  local_60._0_4_ = 0;
  if (lVar17 == 0) {
    iVar8 = 0;
    uVar9 = (uint)local_60;
  }
  else {
    uVar9 = *(uint *)(lVar17 + 0xc);
    local_60 = (ulonglong)uVar9;
    if ((int)uVar9 < DAT_14c9647dc) {
      lVar18 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
    }
    else {
      lVar18 = 0;
    }
    iVar8 = *(int *)(lVar18 + 0x10);
    if (*(int *)(lVar18 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar21 = DAT_14c964868 + 1;
      bVar24 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar24) {
        local_a8 = CONCAT44(local_a8._4_4_,iVar21);
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar21);
        iVar21 = (int)local_a8;
      }
      LOCK();
      iVar8 = *(int *)(lVar18 + 0x10);
      bVar24 = iVar8 == 0;
      if (bVar24) {
        *(int *)(lVar18 + 0x10) = iVar21;
        iVar8 = 0;
      }
      UNLOCK();
      uVar9 = (uint)local_60;
      if (bVar24) {
        iVar8 = iVar21;
      }
    }
  }
  local_60._0_4_ = uVar9;
  local_60 = CONCAT44(iVar8,(uint)local_60);
  local_58 = 2;
  if (local_50 != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_50 + -1,1);
    local_50 = 0;
  }
  if (!bVar4) {
    LOCK();
    piVar1 = (int *)((longlong)plVar14 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
  FUN_1447c3578(lVar19 + 0x200,local_a0,local_78);
  cVar6 = FUN_140168b7a(local_a0,1);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
  if (pcVar2 != (code *)0x0) {
    ppppuVar23 = local_a0;
    if (0x18 < local_88) {
      ppppuVar23 = (undefined8 ****)local_a0[0];
    }
    (*pcVar2)(ppppuVar23);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(local_a0[0]);
  }
  FUN_1447c3578(lVar19 + 0x238,local_a0,local_78);
  cVar7 = FUN_140168b7a(local_a0,1);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
  if (pcVar2 != (code *)0x0) {
    ppppuVar23 = local_a0;
    if (0x18 < local_88) {
      ppppuVar23 = (undefined8 ****)local_a0[0];
    }
    (*pcVar2)(ppppuVar23);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(local_a0[0]);
  }
  *(char *)(param_2 + 0x24) = cVar7;
  if (cVar6 == '\0') {
    FUN_1403a40a4(plVar11,&DAT_14cb241b8);
  }
  if (cVar7 == '\0') {
    FUN_1403a40a4(plVar11,&DAT_14cb241b0);
  }
  lVar20 = FUN_1404ed488(lVar20,lVar16,param_2[2],param_2 + 3);
  if ((lVar20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar20);
  }
  param_2[1] = lVar20;
  lVar20 = DAT_14c9a3da0;
  if ((longlong)local_50 != 0) {
    lVar19 = (longlong)local_50 + -1;
    lVar16 = lVar19 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar16),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar16));
    if (*(longlong *)(lVar20 + lVar16) != 0) {
      FUN_1400020a8();
    }
    lVar20 = DAT_14c9a3da0;
    iVar8 = (int)lVar19;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar8;
    }
    *(undefined4 *)(lVar20 + lVar16) = 0xffffffff;
    iVar21 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar21 = DAT_14c9a3dd0;
    }
    *(int *)(lVar20 + 4 + lVar16) = iVar21;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar15 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar15 = DAT_14c9a3dc0;
    }
    iVar21 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar21 = iVar8;
    }
    bVar3 = (byte)lVar19 & 0x1f;
    DAT_14c9a3dd0 = iVar8;
    *(uint *)(puVar15 + (longlong)(iVar21 >> 5) * 4) =
         *(uint *)(puVar15 + (longlong)(iVar21 >> 5) * 4) &
         (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
    local_50 = 0;
  }
  if ((local_78[0] == '\x03') && (local_68 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_68 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 141507444 FUN_141507444 body=203 status=ok
// SIG undefined FUN_141507444(void)

void FUN_141507444(undefined2 *param_1)

{
  *param_1 = 0x101;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[0x14] = 4;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(bool *)(param_1 + 0x1c) = (DAT_14c9a8634 & 0x20) == 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0x30] = 4;
  *(undefined4 *)(param_1 + 0x24) = 0x40200000;
  *(undefined1 *)(param_1 + 0x34) = 3;
  *(char *)(param_1 + 0x38) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined8 *)(param_1 + 0x3c) = 0;
  param_1[0x4c] = 4;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x50) = 1;
  *(bool *)(param_1 + 0x54) = (DAT_14c9a8634 & 0x20) == 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  param_1[0x68] = 4;
  *(undefined4 *)(param_1 + 0x5c) = 0x40200000;
  *(undefined1 *)(param_1 + 0x6c) = 3;
  *(char *)(param_1 + 0x70) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x84) = 1;
  return;
}



// FUNCTION 14150750f FUN_14150750f body=1099 status=ok
// SIG undefined FUN_14150750f(void)

void FUN_14150750f(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7,undefined8 param_8)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_288 [32];
  longlong *local_268;
  undefined8 *local_260;
  longlong *local_258;
  int *local_250;
  int *local_248;
  undefined8 local_240;
  undefined8 local_238;
  longlong *local_230;
  undefined8 local_228;
  longlong *local_220;
  int local_218;
  longlong local_210;
  int local_204;
  int local_200;
  undefined4 local_1fc;
  longlong local_1f8 [4];
  undefined1 auStack_1d8 [8];
  longlong local_1d0 [5];
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  longlong local_198;
  undefined1 local_188 [32];
  byte local_168;
  undefined1 local_160 [32];
  undefined1 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  longlong local_128;
  undefined1 local_118 [32];
  byte local_f8;
  longlong local_f0;
  char local_e8;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_288;
  local_240 = param_1;
  local_238 = param_2;
  FUN_140f56c86(param_7,&local_220,param_8);
  lVar1 = *(longlong *)(param_7 + 0xa8);
  if ((lVar1 != 0) && (local_218 != 0)) {
    local_140 = 0;
    FUN_140c379ae(local_160,param_5);
    local_268 = (longlong *)local_160;
    FUN_140d767d6(&local_138,&DAT_14cbc36e8,3,param_4);
    if ((*(longlong *)(local_138 + 0x3c) == 0) || (*(char *)(local_138 + 0x38) < (char)uStack_130))
    {
      plVar5 = local_1f8;
    }
    else {
      plVar5 = (longlong *)(auStack_1d8 + 8);
    }
    *(undefined1 *)(plVar5 + 4) = 0;
    FUN_140c379ae(plVar5,param_5);
    local_268 = plVar5;
    FUN_140d767d6(&local_1a8,&DAT_14cbc36e8,3,param_4);
    FUN_140d76846(&local_f0,&local_1a8);
    (*(code *)(&PTR_FUN_14a1842f0)[local_168])(local_188);
    if (local_198 != 0) {
      FUN_1400020a8();
    }
    (*(code *)(&PTR_FUN_14a1842f0)[local_f8])(local_118);
    if (local_128 != 0) {
      FUN_1400020a8();
    }
    if ((*(longlong *)(local_f0 + 0x3c) != 0) && (local_e8 <= *(char *)(local_f0 + 0x38))) {
      uVar4 = FUN_14497e828(lVar1);
      uVar4 = FUN_140f3f840(&local_f0,uVar4);
      local_228 = 0;
      FUN_14485c47a(&local_228,param_6);
      FUN_145c5d6ca(uVar4,local_228);
      if ((longlong)local_218 != 0) {
        local_230 = local_220 + local_218;
        plVar5 = local_220;
        do {
          lVar1 = *plVar5;
          if ((lVar1 != 0) && ((longlong)*(int *)(lVar1 + 0x140) != 0)) {
            lVar7 = *(longlong *)(lVar1 + 0x138);
            lVar8 = (longlong)*(int *)(lVar1 + 0x140) * 0xa8;
            do {
              local_200 = *(int *)(lVar7 + 0x94);
              lVar2 = *(longlong *)(lVar7 + 0x50);
              if (lVar2 == 0) {
                local_204 = 0;
              }
              else if (*(char *)(lVar2 + 8) == '\x01') {
                local_204 = *(int *)(lVar2 + 0xc);
              }
              else {
                local_204 = 0x7fffffff;
              }
              if (*(int *)(lVar7 + 0x98) < local_204) {
                local_204 = *(int *)(lVar7 + 0x98);
              }
              local_1fc = param_3;
              if (local_200 + local_204 != 0) {
                FUN_140d76a74(&local_f0);
                local_138 = 0;
                uStack_130 = 0;
                if ((*(int *)(lVar7 + 0x88) != 0) &&
                   (lVar2 = **(longlong **)(lVar7 + 0x80), lVar2 != 0)) {
                  FUN_145c5d806(lVar2,&local_1a8);
                  plVar6 = (longlong *)(lVar2 + 0x48);
                  if (CONCAT44(local_1a8._4_4_,(undefined4)local_1a8) != 0) {
                    plVar6 = &local_1a8;
                  }
                  local_210 = *plVar6;
                  FUN_1400021e4(&local_210,&local_1a8);
                  local_138 = CONCAT44(local_1a8._4_4_,(undefined4)local_1a8);
                  uStack_130 = CONCAT44(uStack_19c,uStack_1a0);
                }
                FUN_14150795c(lVar7,&local_1a8);
                local_210 = CONCAT44(local_1a8._4_4_,(undefined4)local_1a8);
                if (local_210 == 0) {
                  local_210 = *(longlong *)(lVar7 + 0x48);
                }
                FUN_1410a6380(lVar1,&local_1a8);
                local_248 = &local_204;
                local_250 = &local_200;
                local_258 = &local_210;
                local_260 = &local_138;
                local_268 = &local_1a8;
                FUN_145c5d826(&local_f0,local_240,local_238,&local_1fc);
                if (CONCAT44(local_1a8._4_4_,(undefined4)local_1a8) != 0) {
                  FUN_1400020a8();
                }
                if (local_138 != 0) {
                  FUN_1400020a8();
                }
              }
              lVar7 = lVar7 + 0xa8;
              lVar8 = lVar8 + -0xa8;
            } while (lVar8 != 0);
          }
          plVar5 = plVar5 + 1;
        } while (plVar5 != local_230);
      }
      iVar3 = FUN_145c5d822(&local_f0);
      if (1 < iVar3) {
        FUN_14027c70a(&local_f0);
      }
    }
    FUN_1404eeb8e(&local_f0);
  }
  if (local_220 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14150795c FUN_14150795c body=27 status=ok
// SIG undefined FUN_14150795c(void)

void FUN_14150795c(longlong param_1,undefined8 *param_2)

{
  if (*(undefined8 **)(param_1 + 0x50) != (undefined8 *)0x0) {
    *param_2 = **(undefined8 **)(param_1 + 0x50);
    return;
  }
  *param_2 = 0;
  return;
}



// FUNCTION 141507978 FUN_141507978 body=271 status=ok
// SIG undefined FUN_141507978(void)

longlong * FUN_141507978(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *_Src;
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(longlong *)(*param_1 + 0x3c) != 0) && ((char)param_1[1] <= *(char *)(*param_1 + 0x38))) {
    plVar2 = (longlong *)FUN_14027bf48();
    lVar5 = plVar2[1];
    uVar1 = (int)lVar5 + 1;
    *(uint *)(plVar2 + 1) = uVar1;
    if (*(uint *)((longlong)plVar2 + 0xc) < uVar1) {
      FUN_140eed74c();
    }
    puVar4 = (undefined8 *)((longlong)(int)lVar5 * 0x30 + *plVar2);
    local_48 = (void *)0x0;
    local_40 = *(int *)(param_3 + 1);
    lVar5 = (longlong)local_40;
    _Src = (void *)*param_3;
    if (lVar5 == 0) {
      local_3c = 0;
      iVar3 = 0;
    }
    else {
      FUN_1446dd670(&local_48,local_40,0);
      memcpy(local_48,_Src,lVar5 * 2);
      iVar3 = local_40;
    }
    *puVar4 = local_48;
    *(int *)(puVar4 + 1) = iVar3;
    *(undefined4 *)((longlong)puVar4 + 0xc) = local_3c;
    *(undefined1 *)(puVar4 + 4) = 4;
    puVar4[5] = *param_2;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141507a88 FUN_141507a88 body=152 status=ok
// SIG undefined FUN_141507a88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141507a88(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc29010) {
    FUN_144b3d300(&DAT_14cc29010);
    if (DAT_14cc29010 == -1) {
      DAT_14cc28fe0 = 0;
      _DAT_14cc28fe8 = 0;
      DAT_14cc28fc0 = 0;
      _DAT_14cc28fc8 = 0;
      _DAT_14cc28fec = 0xffffffff00000080;
      DAT_14cc28ff4 = 0;
      DAT_14cc29000 = 0;
      DAT_14cc29008 = 0;
      atexit(FUN_14464f287);
      _Init_thread_footer(&DAT_14cc29010);
      return;
    }
  }
  return;
}



// FUNCTION 141507b20 FUN_141507b20 body=281 status=ok
// SIG undefined FUN_141507b20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141507b20(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca70368) {
    FUN_144b3d300(&DAT_14ca70368);
    if (DAT_14ca70368 == -1) {
      FUN_145c5f95a();
      FUN_140db5666(&DAT_14ca702c0,0,&DAT_14ca70258,L"TPageTableUpdatePS<PF_R16_UINT>",
                    L"/Engine/Private/PageTableUpdate.usf",L"PageTableUpdatePS_1",3,1,FUN_14734114a,
                    FUN_147341122,&LAB_14734111e,&LAB_14734111a,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca702c0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431225d7);
      _Init_thread_footer(&DAT_14ca70368);
    }
  }
  return &DAT_14ca702c0;
}



// FUNCTION 141507c39 FUN_141507c39 body=87 status=ok
// SIG undefined FUN_141507c39(void)

void FUN_141507c39(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1[9] != 0) {
      FUN_1400020a8();
    }
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[6] + 0x10))();
    }
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if ((longlong *)*param_1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_1 + 0x10))();
    }
    param_1 = param_1 + 0xe;
  }
  return;
}



// FUNCTION 141507c90 FUN_141507c90 body=286 status=ok
// SIG undefined FUN_141507c90(void)

undefined4
FUN_141507c90(longlong param_1,double *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined1 param_6)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  undefined1 local_38;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 0x1c8);
  if (plVar1 == (longlong *)0x0) {
    if (param_5 == (undefined8 *)0x0) {
      uVar2 = 0;
    }
    else {
      *param_5 = 0x3f80000000000000;
      uVar2 = 0;
      memset(param_5 + 1,0,0x9c);
      *(undefined4 *)((longlong)param_5 + 0xa4) = 0xffffffff;
      param_5[0x15] = 0;
      param_5[0x16] = 0;
      param_5[0x17] = 0;
      param_5[0x18] = 0;
      param_5[0x19] = 0;
      *(undefined4 *)(param_5 + 0x1a) = 0xffffffff;
      *(undefined8 *)((longlong)param_5 + 0xd4) = 0;
      *(undefined8 *)((longlong)param_5 + 0xdc) = 0;
      *(undefined8 *)((longlong)param_5 + 0xe4) = 0;
      *(undefined8 *)((longlong)param_5 + 0xec) = 0;
      param_5[0x1e] = 0;
      param_5[0x1f] = 0;
    }
  }
  else {
    local_20 = param_2[2] - (double)plVar1[0x4e];
    local_28 = param_2[1] - (double)plVar1[0x4d];
    local_30 = *param_2 - (double)plVar1[0x4c];
    local_38 = param_6;
    local_48 = param_5;
    local_40 = 0;
    uVar2 = (**(code **)(*plVar1 + 0x510))();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141507db0 FUN_141507db0 body=855 status=ok
// SIG undefined FUN_141507db0(void)

void FUN_141507db0(longlong *param_1,longlong *param_2,double *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  int iVar8;
  double dVar9;
  longlong lVar10;
  double *pdVar11;
  undefined4 uVar12;
  uint uVar13;
  longlong *plVar15;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined2 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined8 *local_c0;
  undefined1 *local_b8;
  code *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  double local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double local_58;
  ulonglong local_50;
  undefined8 *puVar14;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (((param_2 != (longlong *)0x0) && ((*(byte *)((longlong)param_2 + 0x65) & 2) == 0)) &&
     ((*(uint *)(param_2 + 1) >> 0x1e & 1) == 0)) {
    if (DAT_14caf9cd0 == 0) {
      local_c0 = &local_88;
      local_88 = FUN_141030f22;
      local_b0 = FUN_14081d0ea;
      local_b8 = &LAB_1463c0cc2;
      local_c8 = &LAB_147c9db5b;
      local_d0 = &LAB_1463f9c44;
      local_d8 = &DAT_149e063b2;
      local_e0 = 0x2000000000;
      local_e8 = 0x10000004;
      local_f0 = 8;
      local_f8 = 0x958;
      FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
    }
    if ((*(int *)(param_2[2] + 0x38) < *(int *)(DAT_14caf9cd0 + 0x38)) ||
       (plVar15 = param_2,
       *(longlong *)
        (*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8) !=
       DAT_14caf9cd0 + 0x30)) {
      plVar15 = (longlong *)0x0;
    }
    cVar7 = FUN_1414077a0(param_1,plVar15);
    if (cVar7 == '\0') {
      local_88 = (code *)*param_3;
      uStack_80 = param_3[1];
      puVar14 = &local_88;
      local_78 = param_3[2];
      uStack_70 = param_3[3];
      FUN_1448052ee(puVar14,&local_a8);
      uVar12 = SUB84(puVar14,0);
      dVar9 = (double)param_2[0x7a];
      if (dVar9 == 0.0) {
        lVar10 = FUN_14578a612(param_1,param_2);
        if (lVar10 != 0) {
          lVar10 = FUN_1461b2b36(param_1,param_2,param_3);
          if ((lVar10 != 0) && ((*(uint *)(lVar10 + 8) >> 0x1e & 1) == 0)) {
            (**(code **)(*param_2 + 0x6b0))(param_2,lVar10);
          }
        }
      }
      else {
        lVar10 = *(longlong *)((longlong)dVar9 + 0x1c8);
        if (lVar10 == 0) {
          local_58 = DAT_14c846508;
          local_a8 = (undefined4)DAT_14c8464f8;
          uStack_a4 = DAT_14c8464f8._4_4_;
          uStack_a0 = (undefined4)DAT_14c846500;
          uStack_9c = DAT_14c846500._4_4_;
        }
        else {
          pcVar3 = *(code **)(lVar10 + 0x240);
          dVar4 = *(double *)(lVar10 + 0x248);
          dVar5 = *(double *)(lVar10 + 0x250);
          dVar6 = *(double *)(lVar10 + 600);
          pdVar11 = *(double **)(lVar10 + 0x228);
          local_88 = pcVar3;
          uStack_80 = dVar4;
          local_78 = dVar5;
          uStack_70 = dVar6;
          if (pdVar11 == (double *)0x0) {
            uVar12 = 0x40;
            pdVar11 = (double *)FUN_14001cc68(0x40,0x10);
            dVar9 = DAT_14c8463d8;
            *pdVar11 = DAT_14c8463d0;
            pdVar11[1] = dVar9;
            dVar9 = DAT_14c8463e8;
            pdVar11[2] = DAT_14c8463e0;
            pdVar11[3] = dVar9;
            dVar9 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
            pdVar11[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
            pdVar11[5] = dVar9;
            dVar9 = DAT_14c846508;
            pdVar11[6] = DAT_14c846508;
            *(double **)(lVar10 + 0x228) = pdVar11;
          }
          auVar1._8_4_ = (int)-(ulonglong)(dVar4 != pdVar11[1]);
          auVar1._0_8_ = -(ulonglong)((double)pcVar3 != *pdVar11);
          auVar1._12_4_ = (int)(-(ulonglong)(dVar4 != pdVar11[1]) >> 0x20);
          iVar8 = movmskpd(SUB84(dVar9,0),auVar1);
          auVar2._8_4_ = (int)-(ulonglong)(dVar6 != pdVar11[3]);
          auVar2._0_8_ = -(ulonglong)(dVar5 != pdVar11[2]);
          auVar2._12_4_ = (int)(-(ulonglong)(dVar6 != pdVar11[3]) >> 0x20);
          uVar13 = movmskpd(uVar12,auVar2);
          if ((uVar13 & 0x3fffffff) != 0 || iVar8 != 0) {
            *(undefined4 *)(pdVar11 + 2) = (undefined4)local_78;
            *(undefined4 *)((longlong)pdVar11 + 0x14) = local_78._4_4_;
            *(undefined4 *)(pdVar11 + 3) = (undefined4)uStack_70;
            *(undefined4 *)((longlong)pdVar11 + 0x1c) = uStack_70._4_4_;
            *(undefined4 *)pdVar11 = (undefined4)local_88;
            *(undefined4 *)((longlong)pdVar11 + 4) = local_88._4_4_;
            *(undefined4 *)(pdVar11 + 1) = (undefined4)uStack_80;
            *(undefined4 *)((longlong)pdVar11 + 0xc) = uStack_80._4_4_;
            FUN_1448052ee(&local_88,&local_68);
            pdVar11[6] = local_58;
            pdVar11[4] = (double)CONCAT44(uStack_64,local_68);
            pdVar11[5] = (double)CONCAT44(uStack_5c,uStack_60);
          }
          local_58 = pdVar11[6];
          local_a8 = *(undefined4 *)(pdVar11 + 4);
          uStack_a4 = *(undefined4 *)((longlong)pdVar11 + 0x24);
          uStack_a0 = *(undefined4 *)(pdVar11 + 5);
          uStack_9c = *(undefined4 *)((longlong)pdVar11 + 0x2c);
        }
        local_98 = local_58;
        local_68 = local_a8;
        uStack_64 = uStack_a4;
        uStack_60 = uStack_a0;
        uStack_5c = uStack_9c;
      }
      if ((param_2[0x7a] == 0) || ((*(uint *)(param_2[0x7a] + 8) >> 0x1e & 1) != 0)) {
        (**(code **)(*param_1 + 0x818))(param_1,param_2);
      }
      else {
        (**(code **)(*param_1 + 0x810))(param_1,param_2,&local_a8);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141508108 FUN_141508108 body=116 status=ok
// SIG undefined FUN_141508108(void)

undefined8 * FUN_141508108(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4bae0) {
    FUN_144b3d300(&DAT_14ca4bae0);
    if (DAT_14ca4bae0 == -1) {
      DAT_14ca4bad8 = (undefined8 *)FUN_14001cc68(8,0x10);
      *DAT_14ca4bad8 = &PTR_FUN_14a2f9580;
      _Init_thread_footer(&DAT_14ca4bae0);
    }
  }
  return DAT_14ca4bad8;
}



// FUNCTION 14150817c FUN_14150817c body=110 status=ok
// SIG undefined FUN_14150817c(void)

void FUN_14150817c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca444f8) {
    FUN_144b3d300(&DAT_14ca444f8);
    if (DAT_14ca444f8 == -1) {
      FUN_145c60782();
      DAT_14ca444f0 = &DAT_14ca44430;
      atexit(FUN_142fb4987);
      _Init_thread_footer(&DAT_14ca444f8);
      return;
    }
  }
  return;
}



// FUNCTION 1415081ea FUN_1415081ea body=375 status=ok
// SIG undefined FUN_1415081ea(void)

undefined8 * FUN_1415081ea(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14150836e FUN_14150836e body=544 status=ok
// SIG undefined FUN_14150836e(void)

undefined8 * FUN_14150836e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aa66ac0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 1),4000);
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x11));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x11),4000);
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0xffffffff00000080;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0xffffffff00000080;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x30] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x3b] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x204) = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined8 *)((longlong)param_1 + 0x24c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x29c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 0;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  *(undefined8 *)((longlong)param_1 + 0x319) = 0;
  *(undefined8 *)((longlong)param_1 + 0x321) = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  FUN_145de8204(param_1 + 0x62,DAT_14c7619cc);
  return param_1;
}



// FUNCTION 14150858e FUN_14150858e body=1516 status=ok
// SIG undefined FUN_14150858e(void)

undefined4 * FUN_14150858e(undefined4 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0x400;
  memset(param_1 + 1,0,0x9c);
  FUN_145cb7f2a(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x52) = 0;
  param_1[0x54] = 0;
  *(undefined8 *)(param_1 + 0x46) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x55) = 0xffffffff00000080;
  param_1[0x57] = 0;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  param_1[0x5c] = 0;
  *(undefined8 *)(param_1 + 0x6a) = 0;
  param_1[0x6c] = 0;
  *(undefined8 *)(param_1 + 0x5e) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x6d) = 0xffffffff00000080;
  param_1[0x6f] = 0;
  *(undefined8 *)(param_1 + 0x72) = 0;
  param_1[0x74] = 0;
  memset(param_1 + 0x76,0,0x82);
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
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
  local_48[2] = lVar2;
  *local_48 = &PTR_FUN_14a338120;
  local_48[3] = param_1;
  local_48[4] = &LAB_14587d58c;
  local_58 = 0;
  FUN_14152bcb8(param_1 + 0x98,L"r.VT.Flush",L"Flush all the physical caches in the VT system.",
                &local_48);
  if (local_40 == 0) {
LAB_141508739:
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
    goto LAB_141508739;
  }
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
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
  local_48[2] = lVar2;
  *local_48 = &PTR_FUN_14a338120;
  local_48[3] = param_1;
  local_48[4] = &DAT_143122c7a;
  local_58 = 0;
  FUN_14152bcb8(param_1 + 0x9c,L"r.VT.Dump",L"Dump a whole lot of info on the VT system state.",
                &local_48);
  if (local_40 == 0) {
LAB_141508812:
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
    goto LAB_141508812;
  }
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
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
  local_48[2] = lVar2;
  *local_48 = &PTR_FUN_14a338120;
  local_48[3] = param_1;
  local_48[4] = FUN_143122c7c;
  local_58 = 0;
  FUN_14152bcb8(param_1 + 0xa0,L"r.VT.ListPhysicalPools",
                L"Dump a whole lot of info on the VT system state.",&local_48);
  if (local_40 == 0) {
LAB_1415088eb:
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
    goto LAB_1415088eb;
  }
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
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
  local_48[2] = lVar2;
  *local_48 = &PTR_FUN_14a338120;
  local_48[3] = param_1;
  local_48[4] = FUN_143122cfc;
  local_58 = 0;
  FUN_14152bcb8(param_1 + 0xa4,L"r.VT.DumpPoolUsage",L"Dump detailed info about VT pool usage.",
                &local_48);
  if (local_40 != 0) {
    if (local_48 == (undefined8 *)0x0) goto LAB_1415089d2;
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
  }
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1415089d2:
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb2) = 0;
  *(undefined8 *)(param_1 + 0xac) = 0;
  *(undefined8 *)(param_1 + 0xae) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xaa) = 0;
  *(undefined8 *)(param_1 + 0xb4) = 0x400;
  param_1[0xb6] = 0;
  *(undefined **)(param_1 + 0xb8) = &DAT_14c7585e0;
  *(undefined8 *)(param_1 + 0xba) = 0;
  *(undefined8 *)(param_1 + 0xbc) = 0x400;
  param_1[0xbe] = 0;
  *(undefined **)(param_1 + 0xc0) = &DAT_14c7585e0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  param_1[0xda] = 0;
  *(undefined8 *)(param_1 + 0xc2) = 0;
  *(undefined8 *)(param_1 + 0xc4) = 0;
  *(undefined8 *)(param_1 + 0xc6) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xca) = 0;
  *(undefined8 *)(param_1 + 0xcc) = 0;
  *(undefined8 *)(param_1 + 0xce) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd2) = 0;
  *(undefined8 *)(param_1 + 0xdb) = 0xffffffff00000080;
  param_1[0xdd] = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  param_1[0xe2] = 0;
  *(undefined8 *)(param_1 + 0xec) = 0;
  param_1[0xee] = 0;
  *(undefined8 *)(param_1 + 0xe4) = 0;
  *(undefined8 *)(param_1 + 0xe6) = 0;
  *(undefined8 *)(param_1 + 0xef) = 0xffffffff00000080;
  param_1[0xf1] = 0;
  *(undefined8 *)(param_1 + 0xf4) = 0;
  param_1[0xf6] = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  param_1[0x102] = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xfa) = 0;
  *(undefined8 *)(param_1 + 0x103) = 0xffffffff00000080;
  param_1[0x105] = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  param_1[0x10a] = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x112) = 0;
  *(undefined8 *)(param_1 + 0x10c) = 0;
  *(undefined8 *)(param_1 + 0x10e) = 0;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141508b7c FUN_141508b7c body=201 status=ok
// SIG undefined FUN_141508b7c(void)

void FUN_141508b7c(void)

{
  uint uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Landscape";
  local_38 = 9;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"Landscape";
  local_38 = 9;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Landscape";
  local_38 = 9;
  FUN_140208c1e(&DAT_14caa5f20,local_48,local_44,&local_40);
  local_40 = L"Grass";
  local_38 = 5;
  local_34 = 0;
  uVar1 = FUN_14001a6c0(&local_40,1);
  DAT_14caa5f30 = (ulonglong)uVar1;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141508c46 FUN_141508c46 body=1040 status=ok
// SIG undefined FUN_141508c46(void)

void FUN_141508c46(longlong param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 uVar13;
  double dVar14;
  double dVar15;
  
  if (*(int *)(param_1 + 0xcc) == 0) {
    return;
  }
  uVar9 = *(uint *)(param_1 + 200);
  if ((int)uVar9 < 0) {
    return;
  }
  if (DAT_14c9647dc <= (int)uVar9) {
    return;
  }
  plVar10 = (longlong *)
            ((ulonglong)((uVar9 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
  if (plVar10 == (longlong *)0x0) {
    return;
  }
  if ((int)plVar10[2] != *(int *)(param_1 + 0xcc)) {
    return;
  }
  if ((*(uint *)(plVar10 + 1) & 0x10200000) != 0) {
    return;
  }
  lVar12 = *plVar10;
  if (lVar12 == 0) {
    return;
  }
  pdVar1 = (double *)(param_1 + 0xf0);
  dVar2 = *(double *)(param_1 + 0xf0);
  dVar3 = *(double *)(param_1 + 0xf8);
  FUN_14039c14e(lVar12,pdVar1);
  uVar13 = FUN_146567c8e(lVar12);
  *(undefined4 *)(param_1 + 0x114) = uVar13;
  plVar10 = (longlong *)FUN_140495e96(param_1 + 0x30);
  if (plVar10 == (longlong *)0x0) {
    uVar9 = 0xffffffff;
  }
  else {
    uVar9 = (**(code **)(*plVar10 + 0x328))(plVar10);
  }
  iVar6 = *(int *)(param_1 + 0xcc);
  if (iVar6 == 0) {
LAB_141509036:
    lVar12 = 0;
  }
  else {
    uVar7 = *(uint *)(param_1 + 200);
    lVar12 = 0;
    if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
      plVar10 = (longlong *)
                ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
      if ((plVar10 == (longlong *)0x0) ||
         (((int)plVar10[2] != iVar6 || ((*(uint *)(plVar10 + 1) & 0x10200000) != 0))))
      goto LAB_141509036;
      lVar12 = *plVar10;
    }
  }
  iVar8 = *(int *)(param_1 + 0x118);
  if (((longlong)iVar8 < 0) || (*(int *)(lVar12 + 0x60) <= iVar8)) goto LAB_141508eff;
  if (iVar6 == 0) {
LAB_14150903e:
    lVar12 = 0;
  }
  else {
    uVar7 = *(uint *)(param_1 + 200);
    lVar12 = 0;
    if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
      plVar10 = (longlong *)
                ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
      if ((plVar10 == (longlong *)0x0) ||
         (((int)plVar10[2] != iVar6 || ((*(uint *)(plVar10 + 1) & 0x10200000) != 0))))
      goto LAB_14150903e;
      lVar12 = *plVar10;
    }
  }
  if (((int)uVar9 < 0) ||
     (lVar11 = (longlong)iVar8 * 0x10,
     *(int *)(*(longlong *)(lVar12 + 0x58) + 8 + lVar11) <= (int)uVar9)) goto LAB_141508eff;
  if (iVar6 == 0) {
LAB_141509046:
    lVar12 = 0;
  }
  else {
    uVar7 = *(uint *)(param_1 + 200);
    lVar12 = 0;
    if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
      plVar10 = (longlong *)
                ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
      if ((plVar10 == (longlong *)0x0) ||
         (((int)plVar10[2] != iVar6 || ((*(uint *)(plVar10 + 1) & 0x10200000) != 0))))
      goto LAB_141509046;
      lVar12 = *plVar10;
    }
  }
  *(double *)(param_1 + 0xf8) =
       (double)*(float *)(*(longlong *)(*(longlong *)(lVar12 + 0x58) + lVar11) + 4 +
                         (ulonglong)uVar9 * 0x10) * *(double *)(param_1 + 0xf8);
  if (iVar6 == 0) {
LAB_14150904e:
    lVar12 = 0;
  }
  else {
    uVar7 = *(uint *)(param_1 + 200);
    lVar12 = 0;
    if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
      plVar10 = (longlong *)
                ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
      if ((plVar10 == (longlong *)0x0) ||
         (((int)plVar10[2] != iVar6 || ((*(uint *)(plVar10 + 1) & 0x10200000) != 0))))
      goto LAB_14150904e;
      lVar12 = *plVar10;
    }
  }
  *pdVar1 = (double)*(float *)(*(longlong *)(*(longlong *)(lVar12 + 0x58) + lVar11) +
                              (ulonglong)uVar9 * 0x10) * *pdVar1;
LAB_141508eff:
  dVar4 = *(double *)(param_1 + 0xf0);
  if (*(char *)(param_1 + 0xd8) == '\0') {
    dVar2 = *(double *)(param_1 + 0xf8);
    if (0.0 < SQRT(dVar4 * dVar4 + dVar2 * dVar2)) {
      *(double *)(param_1 + 0xe0) = dVar4 * 0.5;
      *(double *)(param_1 + 0xe8) = dVar2 * 0.5;
      *(undefined1 *)(param_1 + 0xd8) = 1;
    }
  }
  else {
    dVar5 = *(double *)(param_1 + 0xf8);
    if ((((9.999999747378752e-05 < ABS(dVar2 - dVar4)) ||
         (9.999999747378752e-05 < ABS(dVar3 - dVar5))) &&
        (dVar14 = 0.0, 0.0 < dVar4 * dVar4 + dVar5 * dVar5)) &&
       (0.0 < dVar2 * dVar2 + dVar3 * dVar3)) {
      dVar15 = 0.0;
      if (0.0 < dVar2) {
        dVar15 = *(double *)(param_1 + 0xe0) / dVar2;
      }
      if (0.0 < dVar3) {
        dVar14 = *(double *)(param_1 + 0xe8) / dVar3;
      }
      *(double *)(param_1 + 0xe0) = dVar4 * dVar15;
      *(double *)(param_1 + 0xe8) = dVar5 * dVar14;
    }
  }
  return;
}



// FUNCTION 141509056 FUN_141509056 body=1601 status=ok
// SIG undefined FUN_141509056(void)

void FUN_141509056(longlong param_1)

{
  byte bVar1;
  byte *pbVar2;
  wchar_t *pwVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  byte bVar10;
  ushort uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  ushort uVar15;
  ulonglong uVar16;
  byte *pbVar17;
  bool bVar18;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined8 *puVar23;
  int iVar24;
  bool bVar25;
  undefined1 auStack_148 [40];
  longlong local_120;
  byte *local_118;
  longlong local_110 [2];
  wchar_t *local_100;
  undefined8 uStack_f8;
  wchar_t *local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0;
  undefined7 uStack_df;
  wchar_t *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  wchar_t *local_98;
  undefined8 uStack_90;
  wchar_t *local_88;
  undefined8 uStack_80;
  longlong *local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  bool bVar19;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_1446ddc76(&local_e0,"CohtmlPlugin",1);
  uVar5 = FUN_144a52528();
  FUN_1402c9134(uVar5,CONCAT71(uStack_df,local_e0),&local_78,1);
  puVar6 = (undefined8 *)FUN_145c622c2();
  *(undefined8 **)(param_1 + 0x100) = puVar6;
  iVar4 = *(int *)(puVar6 + 1);
  lVar12 = (longlong)iVar4;
  local_120 = param_1;
  if (lVar12 != 0) {
    pbVar2 = (byte *)*puVar6;
    local_118 = pbVar2 + 0x68;
    iVar24 = 0;
    iVar20 = 0;
    bVar10 = *pbVar2;
    do {
      lVar14 = (longlong)iVar20;
      iVar9 = iVar20 + 1;
      if (iVar20 + 1 < iVar4) {
        iVar9 = iVar4;
      }
      lVar8 = lVar14 * 0x68;
      pbVar17 = local_118 + lVar8;
      iVar21 = iVar20;
      do {
        lVar14 = lVar14 + 1;
        iVar22 = iVar9;
        if (lVar12 <= lVar14) break;
        iVar21 = iVar21 + 1;
        bVar1 = *pbVar17;
        pbVar17 = pbVar17 + 0x68;
        iVar22 = iVar21;
      } while ((bVar10 & 1) == bVar1);
      iVar9 = iVar22 - iVar20;
      if ((bVar10 & 1) == 0) {
        if (iVar24 != iVar20) {
          memmove(pbVar2 + (longlong)iVar24 * 0x68,pbVar2 + lVar8,(longlong)iVar9 * 0x68);
        }
        iVar24 = iVar24 + iVar9;
      }
      else {
        FUN_14583a633(pbVar2 + lVar8,iVar9);
      }
      iVar20 = iVar22;
      bVar10 = bVar10 ^ 1;
    } while (lVar14 < lVar12);
    *(int *)(puVar6 + 1) = iVar24;
  }
  lVar12 = local_120;
  local_78 = (longlong *)0x0;
  uStack_70 = 0;
  FUN_1412fac7e(&local_78,0,0,0);
  if ((longlong)*(int *)(lVar12 + 0xf8) != 0) {
    puVar6 = *(undefined8 **)(lVar12 + 0xf0);
    puVar23 = puVar6 + (longlong)*(int *)(lVar12 + 0xf8) * 8;
    bVar19 = false;
    bVar18 = false;
    do {
      local_88 = (wchar_t *)0x0;
      uStack_80 = 0;
      local_98 = (wchar_t *)0x0;
      uStack_90 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = (wchar_t *)0x0;
      uStack_d0 = 0;
      local_e0 = 1;
      iVar4 = *(int *)(puVar6 + 1) + -1;
      if (*(int *)(puVar6 + 1) == 0) {
        iVar4 = 0;
      }
      FUN_1402980a2(&local_d8,*puVar6,iVar4);
      iVar4 = *(int *)(puVar6 + 3) + -1;
      if (*(int *)(puVar6 + 3) == 0) {
        iVar4 = 0;
      }
      FUN_1402980a2(&local_c8,puVar6[2],iVar4);
      iVar4 = *(int *)(puVar6 + 5) + -1;
      if (*(int *)(puVar6 + 5) == 0) {
        iVar4 = 0;
      }
      FUN_1402980a2(&local_b8,puVar6[4],iVar4);
      iVar4 = *(int *)(puVar6 + 7) + -1;
      if (*(int *)(puVar6 + 7) == 0) {
        iVar4 = 0;
      }
      FUN_1402980a2(&local_a8,puVar6[6],iVar4);
      FUN_140b1283a(&local_100,&DAT_149e065c6,&local_c8);
      FUN_144a882a8(&local_f0,&local_100,&DAT_149e065c6);
      if (local_100 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (1 < (int)uStack_d0) {
        if ((longlong)(int)uStack_70 != 0) {
          plVar7 = local_78;
LAB_14150921e:
          if ((int)plVar7[1] == (int)uStack_e8) {
            if (1 < (int)uStack_e8) {
              lVar12 = 0;
              do {
                uVar15 = *(ushort *)(*plVar7 + lVar12);
                uVar16 = (ulonglong)uVar15;
                uVar11 = *(ushort *)((longlong)local_f0 + lVar12);
                if (uVar15 == uVar11) {
                  if (uVar15 == 0) break;
                }
                else {
                  if (0x7f < (uVar11 | uVar15)) goto LAB_14150928a;
                  uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
                  uVar13 = (ulonglong)uVar11;
                  uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
                  if ((&DAT_149e05da0)[uVar16] != (&DAT_149e05da0)[uVar13]) goto LAB_14150928a;
                }
                lVar12 = lVar12 + 2;
              } while( true );
            }
            goto LAB_141509292;
          }
          if ((int)plVar7[1] + (int)uStack_e8 == 1) goto LAB_141509292;
          goto LAB_141509230;
        }
      }
LAB_141509387:
      if (local_f0 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      FUN_1411e2dbe(&local_e0);
      puVar6 = puVar6 + 8;
    } while (puVar6 != puVar23);
    lVar12 = local_120;
    if (bVar18) goto LAB_1415093ea;
  }
  local_88 = (wchar_t *)0x0;
  uStack_80 = 0;
  local_98 = (wchar_t *)0x0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = (wchar_t *)0x0;
  uStack_d0 = 0;
  local_e0 = 1;
  FUN_14020fad6(&local_d8,L"coui");
  FUN_14020fad6(&local_c8,&DAT_149e063b2);
  FUN_14020fad6(&local_b8,&DAT_149dfb77a);
  FUN_14020fad6(&local_a8,L"uiresources");
  FUN_140056680(&local_100,&DAT_149dfb77a);
  FUN_140056680(local_110,L"/Game/");
  FUN_141509698(&local_f0,local_110,&local_100);
  if (local_98 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  local_98 = local_f0;
  uStack_90 = uStack_e8;
  local_f0 = (wchar_t *)0x0;
  uStack_e8 = 0;
  if (local_110[0] != 0) {
    FUN_1400020a8();
  }
  if (local_100 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_1401aea18(&local_f0,&local_98);
  if (local_88 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  local_88 = local_f0;
  uStack_80 = uStack_e8;
  plVar7 = *(longlong **)(lVar12 + 0x100);
  iVar4 = (int)plVar7[1];
  *(uint *)(plVar7 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)plVar7 + 0xc) < iVar4 + 1U) {
    FUN_145c624a4(plVar7,iVar4);
  }
  FUN_145c622ca((longlong)iVar4 * 0x68 + *plVar7,&local_e0);
  FUN_1411e2dbe(&local_e0);
LAB_1415093ea:
  FUN_1447f69b6(*(longlong *)(lVar12 + 0x100) + 0x10);
  FUN_1447a1747(local_78,uStack_70 & 0xffffffff);
  if (local_78 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14150928a:
  if (uVar15 == uVar11) {
LAB_141509292:
    FUN_140056680(&local_100,L"coui");
    pwVar3 = local_100;
    if ((int)uStack_d0 == (int)uStack_f8) {
      if ((int)uStack_d0 < 2) {
        bVar25 = true;
      }
      else {
        iVar4 = wcscmp(local_d8,local_100);
        bVar25 = iVar4 == 0;
      }
    }
    else {
      bVar25 = (int)uStack_f8 + (int)uStack_d0 == 1;
    }
    if (pwVar3 != (wchar_t *)0x0) {
      FUN_1400020a8(pwVar3);
    }
    bVar18 = bVar19;
    if (bVar25) {
      bVar18 = true;
    }
    FUN_140056680(local_110,&DAT_149dfb77a);
    FUN_141509698(&local_100,&local_f0,local_110);
    if (local_98 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    local_98 = local_100;
    uStack_90 = uStack_f8;
    local_100 = (wchar_t *)0x0;
    uStack_f8 = 0;
    if (local_110[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1401aea18(&local_100,&local_98);
    if (local_88 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    local_88 = local_100;
    uStack_80 = uStack_f8;
    plVar7 = *(longlong **)(local_120 + 0x100);
    iVar4 = (int)plVar7[1];
    *(uint *)(plVar7 + 1) = iVar4 + 1U;
    if (*(uint *)((longlong)plVar7 + 0xc) < iVar4 + 1U) {
      FUN_145c624a4(plVar7,iVar4);
    }
    FUN_145c622ca((longlong)iVar4 * 0x68 + *plVar7,&local_e0);
    bVar19 = bVar18;
    goto LAB_141509387;
  }
LAB_141509230:
  plVar7 = plVar7 + 2;
  if (plVar7 == local_78 + (longlong)(int)uStack_70 * 2) goto LAB_141509387;
  goto LAB_14150921e;
}



// FUNCTION 141509698 FUN_141509698 body=188 status=ok
// SIG undefined FUN_141509698(void)

undefined8 * FUN_141509698(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int local_30;
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  local_28 = *param_3;
  local_20 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    local_20 = 0;
  }
  local_38 = *param_2;
  local_30 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_30 = 0;
  }
  cVar1 = FUN_1404d3d28(&local_38,param_1,&local_28);
  if (cVar1 != '\0') {
    if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = (undefined2 *)*param_2;
  }
  FUN_140033559(".\\Runtime/CoreUObject/Private/Misc/PackageName.cpp",0x3c7,
                L"LongPackageNameToFilename failed to convert \'%s\'. Path does not map to any roots."
                ,puVar2);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 141509760 FUN_141509760 body=89 status=ok
// SIG undefined FUN_141509760(void)

void FUN_141509760(longlong param_1)

{
  byte bVar1;
  
  if ((((*(longlong *)(param_1 + 0x230) == 0) ||
       (*(char *)(*(longlong *)(param_1 + 0x230) + 0x160) == '\x01')) &&
      (bVar1 = *(byte *)(param_1 + 0x240), (bVar1 & 1) != 0)) &&
     (*(char *)(param_1 + 0x243) == '\x01')) {
    if ((bVar1 & 8) == 0) {
      FUN_1416c1800(param_1,2);
      FUN_1412f7942(param_1);
      return;
    }
    *(byte *)(param_1 + 0x240) = bVar1 | 0x10;
  }
  return;
}



// FUNCTION 1415097ba FUN_1415097ba body=173 status=ok
// SIG undefined FUN_1415097ba(void)

void FUN_1415097ba(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
        goto LAB_141509851;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_141509851:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 141509868 FUN_141509868 body=114 status=ok
// SIG undefined FUN_141509868(void)

void FUN_141509868(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x28));
  FUN_14614c754(param_1 + 0x820,*param_2 + 0xc,*param_2 + 8);
  plVar2 = (longlong *)(param_1 + (ulonglong)*(byte *)(*param_2 + 8) * 8 + 0x28);
  if (plVar2 != param_2) {
    puVar1 = (undefined8 *)*plVar2;
    *plVar2 = *param_2;
    *param_2 = 0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001415098d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x28));
  return;
}



// FUNCTION 1415098da FUN_1415098da body=564 status=ok
// SIG undefined FUN_1415098da(void)

void FUN_1415098da(undefined8 param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  undefined8 local_48;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = param_2;
  lVar6 = FUN_142af9074(param_1,&local_48);
  lVar7 = *param_4;
  uVar10 = 0;
  if (lVar7 == 0) {
LAB_1415099f8:
    lVar7 = 0;
  }
  else {
    if (DAT_14c950d78 == 0) {
      local_60 = &local_40;
      local_40 = FUN_1449e2820;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_14081d0ea;
      local_68 = &LAB_1468b50ee;
      local_70 = FUN_1427f23a3;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10004001;
      local_90 = 8;
      local_98 = 0x28;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Interface",&DAT_14c950d78,&DAT_1468b50f4);
      if (DAT_14c950d78 == 0) goto LAB_1415099f8;
    }
    if ((*(int *)(lVar7 + 0x38) < *(int *)(DAT_14c950d78 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14c950d78 + 0x38) * 8) !=
        DAT_14c950d78 + 0x30)) goto LAB_1415099f8;
    lVar7 = *param_4;
  }
  uVar3 = *(undefined8 *)(lVar7 + 0x18);
  uVar2 = *(uint *)(lVar6 + 0x20);
  lVar7 = *(longlong *)(lVar6 + 0x18);
  if (0 < (int)uVar2) {
    uVar10 = 0;
    uVar9 = uVar2;
    do {
      uVar1 = (uVar9 >> 1) + uVar10;
      lVar11 = (ulonglong)uVar1 * 0x10;
      iVar5 = (int)((ulonglong)uVar3 >> 0x20);
      iVar12 = *(int *)(lVar7 + lVar11) - (int)uVar3;
      if (iVar12 == 0) {
        iVar12 = *(int *)(lVar7 + 4 + lVar11) - iVar5;
      }
      if (iVar12 < 0) {
        uVar10 = uVar1 + (uVar9 & 1);
      }
      bVar4 = 1 < uVar9;
      uVar9 = uVar9 >> 1;
    } while (bVar4);
    if ((int)uVar10 < (int)uVar2) {
      lVar11 = (ulonglong)uVar10 * 0x10;
      iVar12 = (int)uVar3 - *(int *)(lVar7 + lVar11);
      if (iVar12 == 0) {
        iVar12 = iVar5 - *(int *)(lVar7 + 4 + lVar11);
      }
      if (-1 < iVar12) {
        puVar13 = (undefined8 *)(lVar7 + lVar11);
        goto LAB_141509abd;
      }
    }
  }
  plVar8 = (longlong *)(lVar6 + 0x18);
  *(uint *)(lVar6 + 0x20) = uVar2 + 1;
  if (*(uint *)(lVar6 + 0x24) == uVar2) {
    FUN_14629bee8(plVar8,uVar2);
    lVar7 = *plVar8;
  }
  lVar6 = (ulonglong)uVar10 * 0x10;
  memmove((void *)(lVar7 + lVar6 + 0x10),(void *)(lVar7 + lVar6),(ulonglong)(uVar2 - uVar10) << 4);
  puVar13 = (undefined8 *)(lVar6 + *plVar8);
LAB_141509abd:
  *puVar13 = uVar3;
  puVar13[1] = param_3;
  if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_3);
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141509b10 FUN_141509b10 body=305 status=ok
// SIG undefined FUN_141509b10(void)

void FUN_141509b10(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_141509baa;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  iVar3 = 0;
  if ((int)param_2[1] == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    param_2 = (longlong *)*param_2;
    puVar2 = (undefined8 *)0x0;
    iVar3 = 0;
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_30);
      puVar2 = local_30;
      iVar3 = local_28;
    }
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_141509b83:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_141509b83;
    }
  }
  *param_1 = (longlong)puVar2;
  *(int *)(param_1 + 1) = iVar3;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_141509baa;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_141509baa:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141509c42 FUN_141509c42 body=505 status=ok
// SIG undefined FUN_141509c42(void)

void FUN_141509c42(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14b182850;
  param_1[0x1dc] = &DAT_14a176f00;
  if (param_1[0x1ea] != 0) {
    FUN_1400020a8();
  }
  param_1[0x1dc] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0x1dd);
  if (param_1[0x1d9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1ce] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c9] != 0) {
    FUN_1400020a8();
  }
  lVar1 = 0xe00;
  do {
    if (*(longlong *)((longlong)param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x60;
  } while (lVar1 != 0x800);
  lVar1 = 0x800;
  do {
    if (*(longlong *)((longlong)param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x60;
  } while (lVar1 != 0x200);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (param_1[0x47] != 0) {
    FUN_1400020a8();
  }
  FUN_145c6673a(param_1 + 0x3f);
  *(undefined4 *)(param_1 + 0x3e) = 0;
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(param_1 + 0x35);
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  param_1[0xb] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (*(int *)((longlong)param_1 + 0x74) != 0) {
    FUN_140115c12(param_1 + 0xd,0);
  }
  param_1[0xc] = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  FUN_144a659aa(param_1);
  return;
}



// FUNCTION 141509e3c FUN_141509e3c body=66 status=ok
// SIG undefined FUN_141509e3c(void)

void FUN_141509e3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be75700;
  FUN_1497d6bf1(param_1[0x72],*(undefined4 *)(param_1 + 0x73));
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 141509e7e FUN_141509e7e body=1752 status=ok
// SIG undefined FUN_141509e7e(void)

void FUN_141509e7e(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  void *_Src;
  undefined8 ****ppppuVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  code *local_d0;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  void *pvStack_80;
  ulonglong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 ***local_58 [3];
  ushort local_40;
  byte local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_68 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9520b0) && (FUN_144b3d300(&DAT_14c9520b0), DAT_14c9520b0 == -1)) {
    local_d8 = (undefined *)FUN_1446ddbd2();
    local_d0 = FUN_1409e12a0;
    local_e0 = 0;
    local_e8 = 0xa001;
    FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
    atexit(FUN_142816ef9);
    _Init_thread_footer(&DAT_14c9520b0);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_68);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_68);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_68 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_68);
    }
  }
  local_60 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_60);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_60);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_60 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_60);
    }
  }
  puVar6 = &local_60;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(param_2 + 0x38);
  }
  local_70 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
    local_d8 = (undefined *)FUN_1446ddbd2();
    local_d0 = FUN_1468d96f0;
    local_e0 = 0;
    local_e8 = 0x4008001;
    FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
    atexit(FUN_14281144d);
    _Init_thread_footer(&DAT_14c951cc8);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_70);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_70);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_70 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_70);
    }
  }
  local_88 = 0;
  pvStack_80 = (void *)0x0;
  local_98 = 0;
  uStack_90 = 0;
  local_78 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9529b0) && (FUN_144b3d300(&DAT_14c9529b0), DAT_14c9529b0 == -1)) {
    FUN_1446f4b16();
    local_d0 = FUN_140f17fc6;
    local_d8 = &DAT_14c951c78;
    local_e0 = 0;
    local_e8 = 0x24008001;
    FUN_14000176a(&DAT_14c952960,L"FSoftObjectProperty",0x20000000,0);
    atexit(FUN_142818859);
    _Init_thread_footer(&DAT_14c9529b0);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_98);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_98);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_98 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_98);
    }
  }
  _Src = pvStack_80;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_c0 = local_98;
  local_b8 = (undefined4)uStack_90;
  uStack_b4 = uStack_90._4_4_;
  uStack_b0 = (undefined4)local_88;
  uStack_ac = local_88._4_4_;
  local_a8 = (void *)0x0;
  lVar5 = (longlong)(int)local_78;
  local_a0 = (int)local_78;
  if (lVar5 == 0) {
    local_9c = 0;
  }
  else {
    FUN_1446dd670(&local_a8,local_78 & 0xffffffff,0);
    memcpy(local_a8,_Src,lVar5 * 2);
  }
  FUN_14150a558(local_68,puVar6,local_70,&local_c0);
  if (pvStack_80 != (void *)0x0) {
    FUN_1400020a8();
  }
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar3 != (code *)0x0) {
    ppppuVar4 = (undefined8 ****)local_58[0];
    if (local_40 < 0x19) {
      ppppuVar4 = local_58;
    }
    (*pcVar3)(ppppuVar4);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  if ((local_28 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14150a558 FUN_14150a558 body=240 status=ok
// SIG undefined FUN_14150a558(void)

void FUN_14150a558(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 != (longlong *)0x0) {
    uVar2 = FUN_140566488();
    plVar3 = (longlong *)(**(code **)(*param_3 + 0x288))(param_3,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = FUN_140566488();
      plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
      if (((plVar4 != (longlong *)0x0 && plVar3 != plVar4) &&
          (lVar5 = (**(code **)(*plVar4 + 0x20))(plVar4), lVar5 != 0)) &&
         ((*(longlong *)(param_4 + 8) == 0 || (lVar5 = FUN_14886d182(lVar5,param_4), lVar5 != 0))))
      {
        local_30 = 0xffffffff;
        local_38 = param_1;
        cVar1 = FUN_141741e3c(lVar5);
        if (cVar1 != '\0') {
          FUN_1402b8456(lVar5,&local_38,param_2);
        }
      }
    }
  }
  if (*(longlong *)(param_4 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14150a64a FUN_14150a64a body=412 status=ok
// SIG undefined FUN_14150a64a(void)

void FUN_14150a64a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ae40500;
  param_1[5] = &PTR_FUN_14ae40830;
  param_1[0x6e] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x82];
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
  plVar3 = (longlong *)param_1[0x6c];
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
  plVar3 = (longlong *)param_1[0x6a];
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
  plVar3 = (longlong *)param_1[0x68];
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
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  param_1[0x4a] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x5e];
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
  param_1[0x32] = &PTR_FUN_149ed05f0;
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
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_140cdcfea(param_1);
  return;
}



// FUNCTION 14150a7e6 FUN_14150a7e6 body=270 status=ok
// SIG undefined FUN_14150a7e6(void)

void FUN_14150a7e6(short *param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  ushort uVar2;
  ulonglong *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,3);
  uVar2 = *(ushort *)(param_2 + 0xc);
  puVar1 = *(ulonglong **)(param_2 + 0x28);
  if (uVar2 != 0) {
    lVar4 = (ulonglong)uVar2 << 5;
    puVar3 = puVar1;
    do {
      if (*(short *)((longlong)puVar3 + 0x1e) == *param_1) goto LAB_14150a837;
      puVar3 = puVar3 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  puVar3 = (ulonglong *)0x0;
LAB_14150a837:
  lVar4 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar3) {
    *(int *)(lVar4 + lVar6 * 4) = (int)*puVar3 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar4 = *param_3;
    uVar2 = *(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if (uVar2 != 0) {
    lVar5 = (ulonglong)uVar2 << 5;
    puVar3 = puVar1;
    do {
      if (*(short *)((longlong)puVar3 + 0x1e) == param_1[1]) goto LAB_14150a88a;
      puVar3 = puVar3 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar3 = (ulonglong *)0x0;
LAB_14150a88a:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar3) {
    *(int *)(lVar4 + 4 + lVar6 * 4) = (int)*puVar3 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar4 = *param_3;
    uVar2 = *(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if (uVar2 != 0) {
    lVar5 = (ulonglong)uVar2 << 5;
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == param_1[2]) goto LAB_14150a8cf;
      puVar1 = puVar1 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar1 = (ulonglong *)0x0;
LAB_14150a8cf:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
    *(int *)(lVar4 + 8 + lVar6 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
  }
  return;
}



// FUNCTION 14150a8f4 FUN_14150a8f4 body=108 status=ok
// SIG undefined FUN_14150a8f4(void)

undefined * FUN_14150a8f4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c868200) {
    FUN_144b3d300(&DAT_14c868200);
    if (DAT_14c868200 == -1) {
      FUN_145c696f6(&DAT_14c868190);
      atexit((_func_5014 *)&LAB_1427818ac);
      _Init_thread_footer(&DAT_14c868200);
    }
  }
  return &DAT_14c868190;
}



// FUNCTION 14150a960 FUN_14150a960 body=117 status=ok
// SIG undefined FUN_14150a960(void)

undefined8 * FUN_14150a960(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c867358) {
    FUN_144b3d300(&DAT_14c867358);
    if (DAT_14c867358 == -1) {
      DAT_14c867348 = 0;
      DAT_14c867350 = 0;
      atexit(FUN_14277efaf);
      _Init_thread_footer(&DAT_14c867358);
    }
  }
  return &DAT_14c867348;
}



// FUNCTION 14150a9d5 FUN_14150a9d5 body=428 status=ok
// SIG undefined FUN_14150a9d5(void)

longlong * FUN_14150a9d5(longlong *param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar2 = *(int *)(param_2 + 0x360);
  if ((longlong)iVar2 != 0) {
    lVar4 = *(longlong *)(param_2 + 0x358);
    lVar7 = 0;
    do {
      if ((param_3 == '\x04') || (*(char *)(lVar4 + 0x38 + lVar7) == param_3)) {
        iVar3 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
          FUN_145c69d66(param_1,iVar3);
        }
        lVar5 = *param_1;
        lVar8 = (longlong)iVar3 * 0x40;
        lVar1 = lVar5 + lVar8;
        *(undefined4 *)(lVar5 + lVar8) = *(undefined4 *)(lVar4 + lVar7);
        *(undefined8 *)(lVar5 + 8 + lVar8) = 0;
        iVar3 = *(int *)(lVar4 + 0x10 + lVar7);
        pvVar6 = *(void **)(lVar4 + 8 + lVar7);
        *(int *)(lVar5 + 0x10 + lVar8) = iVar3;
        if ((longlong)iVar3 == 0) {
          *(undefined4 *)(lVar1 + 0x14) = 0;
        }
        else {
          puVar9 = (undefined8 *)(lVar8 + lVar5 + 8);
          FUN_1446dd670(puVar9,iVar3,0);
          memcpy((void *)*puVar9,pvVar6,(longlong)iVar3 * 2);
        }
        *(undefined8 *)(lVar1 + 0x18) = 0;
        iVar3 = *(int *)(lVar4 + 0x20 + lVar7);
        pvVar6 = *(void **)(lVar4 + 0x18 + lVar7);
        *(int *)(lVar1 + 0x20) = iVar3;
        if ((longlong)iVar3 == 0) {
          *(undefined4 *)(lVar1 + 0x24) = 0;
        }
        else {
          FUN_1446dd670((undefined8 *)(lVar1 + 0x18),iVar3,0);
          memcpy(*(void **)(lVar1 + 0x18),pvVar6,(longlong)iVar3 * 2);
        }
        *(undefined8 *)(lVar1 + 0x28) = 0;
        iVar3 = *(int *)(lVar4 + 0x30 + lVar7);
        pvVar6 = *(void **)(lVar4 + 0x28 + lVar7);
        *(int *)(lVar1 + 0x30) = iVar3;
        if ((longlong)iVar3 == 0) {
          *(undefined4 *)(lVar1 + 0x34) = 0;
        }
        else {
          FUN_1446dd670((undefined8 *)(lVar1 + 0x28),iVar3,0);
          memcpy(*(void **)(lVar1 + 0x28),pvVar6,(longlong)iVar3 * 2);
        }
        *(undefined2 *)(lVar1 + 0x38) = *(undefined2 *)(lVar4 + 0x38 + lVar7);
      }
      lVar7 = lVar7 + 0x40;
    } while ((longlong)iVar2 << 6 != lVar7);
  }
  return param_1;
}



// FUNCTION 14150ab81 FUN_14150ab81 body=322 status=ok
// SIG undefined FUN_14150ab81(void)

ulonglong FUN_14150ab81(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD dwErrCode;
  ulonglong uVar6;
  undefined2 *puVar7;
  undefined8 unaff_RSI;
  ulonglong uVar8;
  int iVar9;
  undefined2 *puVar10;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_2 + 1) == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*param_2;
  }
  cVar5 = (**(code **)(*param_1 + 0x110))(param_1,puVar7);
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (cVar5 != '\0') goto LAB_14150ac27;
  puVar7 = (undefined2 *)*param_2;
  iVar2 = *(int *)(param_2 + 1);
  uVar6 = (longlong)iVar2 * 2;
  do {
    if (uVar6 == 0) goto LAB_14150abf3;
    uVar1 = uVar6 - 2;
    lVar4 = uVar6 - 2;
    uVar6 = uVar1;
  } while (*(short *)((longlong)puVar7 + lVar4) != 0x2f);
  iVar3 = (int)(uVar1 >> 1);
  if (iVar3 + 1U < 2) {
LAB_14150abf3:
    dwErrCode = GetLastError();
    if (*(int *)(param_2 + 1) == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    else {
      puVar7 = (undefined2 *)*param_2;
    }
    cVar5 = (**(code **)(*param_1 + 0x108))(param_1,puVar7);
    if (cVar5 != '\0') goto LAB_14150ac27;
    SetLastError(dwErrCode);
  }
  else {
    puVar10 = &DAT_149dfb77a;
    if (iVar2 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    iVar9 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar9 = 0;
    }
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
    if (iVar9 < 1) {
      iVar9 = 0;
    }
    FUN_14006620a(local_48,puVar7,iVar9);
    cVar5 = FUN_14150ab81(param_1,local_48);
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    if (cVar5 != '\0') {
      if (*(int *)(param_2 + 1) != 0) {
        puVar10 = (undefined2 *)*param_2;
      }
      cVar5 = (**(code **)(*param_1 + 0x110))(param_1,puVar10);
      if (cVar5 != '\0') goto LAB_14150ac27;
      goto LAB_14150abf3;
    }
  }
  uVar8 = 0;
LAB_14150ac27:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 14150acc4 FUN_14150acc4 body=88 status=ok
// SIG undefined FUN_14150acc4(void)

longlong * FUN_14150acc4(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 14150ad1c FUN_14150ad1c body=57 status=ok
// SIG undefined FUN_14150ad1c(void)

void FUN_14150ad1c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb0b70 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb0b70 = FUN_140002ddd(FUN_1465f20da,uVar1,L"OakMissionTransaction_Fact");
  }
  return;
}



// FUNCTION 14150ad55 FUN_14150ad55 body=203 status=ok
// SIG undefined FUN_14150ad55(void)

undefined8 FUN_14150ad55(byte param_1,char param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0x38) {
    return 0xb;
  }
  if (param_1 < 0x12) {
    switch(param_1) {
    case 1:
      return 2;
    case 2:
switchD_14150ad7d_caseD_2:
      uVar1 = 0x34;
      if (param_2 == '\0') {
        uVar1 = 0;
      }
      return uVar1;
    case 5:
      return 5;
    case 6:
      return 6;
    case 7:
      return 7;
    case 10:
      return 1;
    }
  }
  else if (param_1 < 0x1b) {
    if (param_1 == 0x12) {
      return 0;
    }
    if (param_1 == 0x17) {
      return 9;
    }
  }
  else {
    if (param_1 == 0x1b) {
      return 3;
    }
    switch(param_1) {
    case 0x25:
      goto switchD_14150ad7d_caseD_2;
    case 0x27:
      return 8;
    case 0x2e:
      return 0xd;
    case 0x2f:
      return 0xe;
    case 0x32:
      return 0x17;
    case 0x33:
      return 0x1b;
    case 0x34:
      return 0x1e;
    case 0x35:
      return 0x22;
    case 0x36:
      return 0x24;
    case 0x37:
      return 10;
    }
  }
  return 0x36;
}



// FUNCTION 14150ae20 FUN_14150ae20 body=320 status=ok
// SIG undefined FUN_14150ae20(void)

void FUN_14150ae20(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  longlong *local_28;
  undefined4 *local_20;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((*(longlong *)(param_1 + -0x11a0) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + -0x11a0) + 0x65) & 2) == 0)) &&
      ((*(byte *)(param_1 + -0x11a9) & 0x40) == 0)) &&
     (lVar1 = *param_2, *(longlong *)(param_1 + 0x650) != lVar1)) {
    if (*(int *)(param_1 + 0x6d8) != *(int *)(param_1 + 0x704)) {
      uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
      uVar4 = (uint)lVar1 & 0xffff;
      lVar3 = param_1 + 0x708;
      if (*(longlong *)(param_1 + 0x710) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x710);
      }
      iVar5 = *(int *)(lVar3 + (ulonglong)
                               (*(int *)(param_1 + 0x718) - 1U &
                               (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar4) +
                               (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
      if (iVar5 != -1) {
        do {
          plVar6 = (longlong *)(*(longlong *)(param_1 + 0x6d0) + (longlong)iVar5 * 0x14);
          if (*plVar6 == lVar1) {
            if ((plVar6 != (longlong *)0x0) && (plVar6 = plVar6 + 1, plVar6 != (longlong *)0x0)) {
              *(int *)plVar6 = (int)*plVar6 + 1;
              goto LAB_14150af34;
            }
            break;
          }
          iVar5 = *(int *)((longlong)plVar6 + 0xc);
        } while (iVar5 != -1);
      }
    }
    local_20 = &local_2c;
    local_2c = 1;
    local_28 = param_2;
    FUN_1410b4060((longlong *)(param_1 + 0x6d0),local_14,&local_28,0);
    FUN_14150af62(param_1 + -0x1248);
  }
LAB_14150af34:
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14150af62 FUN_14150af62 body=155 status=ok
// SIG undefined FUN_14150af62(void)

void FUN_14150af62(longlong *param_1)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1[0x2c6] == 0) {
    cVar1 = (**(code **)(*param_1 + 0xbf0))(param_1);
    if (cVar1 == '\0') {
      cVar1 = FUN_140769252(param_1);
      if ((cVar1 == '\0') && (param_1[0x2c7] == 0)) {
        if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
          FUN_14150b006(param_1);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
    }
  }
  FUN_140c89340(local_20,param_1);
  FUN_140f2be08(param_1,1);
  FUN_140c8931a(local_20);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 14150b006 FUN_14150b006 body=2624 status=ok
// SIG undefined FUN_14150b006(void)

void FUN_14150b006(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  bool bVar23;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  undefined1 *local_98;
  code *local_90;
  longlong local_80;
  char local_71;
  longlong *local_70;
  uint *local_68;
  code *local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  cVar4 = *(char *)(param_1 + 0x1910);
  *(undefined1 *)(param_1 + 0x1910) = 0;
  for (lVar15 = param_1; lVar15 != 0; lVar15 = *(longlong *)(lVar15 + 0x20)) {
    if ((*(uint *)(lVar15 + 8) & 0x30) != 0) goto LAB_14150b81f;
  }
  if ((*(longlong *)(param_1 + 0x1898) == 0) ||
     (plVar8 = *(longlong **)(param_1 + 0xa8), plVar8 == (longlong *)0x0)) goto LAB_14150b81f;
  local_80 = param_1;
  uVar7 = FUN_1401fa540();
  plVar8 = (longlong *)(**(code **)(*plVar8 + 0x288))(plVar8,uVar7);
  if (plVar8 == (longlong *)0x0) goto LAB_14150b81f;
  uVar7 = FUN_1401fa540();
  plVar9 = (longlong *)FUN_144718840(plVar8,uVar7);
  if (((plVar8 == plVar9) || (plVar9 == (longlong *)0x0)) ||
     (plVar8 = (longlong *)(**(code **)(*plVar9 + 0x10))(plVar9), lVar15 = local_80,
     plVar8 == (longlong *)0x0)) goto LAB_14150b81f;
  local_71 = cVar4;
  FUN_140457ffc(plVar8);
  local_60 = (code *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  pcVar3 = local_60;
  local_58 = 3;
  *(undefined ***)local_60 = &PTR_LAB_14b3e7b60;
  LOCK();
  UNLOCK();
  lVar13 = DAT_14c758608 + 1;
  lVar22 = DAT_14c758608 + 1;
  if (lVar13 == 0) {
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 2;
    lVar22 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar22;
  *(longlong *)(local_60 + 0x10) = lVar13;
  *(undefined ***)local_60 = &PTR_FUN_14b3f5060;
  *(longlong *)(local_60 + 0x18) = 0;
  iVar18 = 0;
  if (lVar15 != 0) {
    uVar20 = *(uint *)(lVar15 + 0xc);
    *(uint *)(local_60 + 0x18) = uVar20;
    if ((int)uVar20 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar20 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    iVar18 = *(int *)(lVar15 + 0x10);
    if (*(int *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar18 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar23 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar18;
      if (bVar23) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar18 = *(int *)(lVar15 + 0x10);
      bVar23 = iVar18 == 0;
      if (bVar23) {
        *(int *)(lVar15 + 0x10) = iVar6;
        iVar18 = 0;
      }
      UNLOCK();
      if (bVar23) {
        iVar18 = iVar6;
      }
    }
  }
  *(int *)(pcVar3 + 0x1c) = iVar18;
  *(code **)(pcVar3 + 0x20) = FUN_14115c7b4;
  *(undefined4 *)(pcVar3 + 0x28) = 0;
  local_70 = plVar8;
  if (((local_58 == 0) || (local_60 == (code *)0x0)) ||
     (cVar4 = (**(code **)(*(longlong *)local_60 + 0x30))(), cVar4 == '\0')) {
    plVar8 = local_70;
    if (local_58 == 0) goto LAB_14150b2fb;
    if (local_60 != (code *)0x0) {
      (*(code *)**(undefined8 **)local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      goto LAB_14150b2e8;
    }
  }
  else {
    if (*(int *)((longlong)plVar8 + 0x14) < 1) {
      iVar18 = (int)plVar8[1];
      iVar6 = (int)plVar8[2] + -1;
      *(int *)(plVar8 + 2) = iVar6;
      if (iVar6 <= iVar18) {
        iVar6 = iVar18;
        if (0 < iVar18) {
          iVar19 = 0;
          do {
            if (((*(int *)(*plVar8 + 8 + (longlong)iVar19 * 0x10) == 0) ||
                (plVar9 = *(longlong **)(*plVar8 + (longlong)iVar19 * 0x10),
                plVar9 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar9 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(plVar8,iVar19);
              FUN_14005b248(plVar8);
            }
            else {
              iVar19 = iVar19 + 1;
            }
            iVar6 = (int)plVar8[1];
          } while (iVar19 < iVar6);
        }
        iVar19 = 2;
        if (2 < iVar6 * 2) {
          iVar19 = iVar6 * 2;
        }
        *(int *)(plVar8 + 2) = iVar19;
        if ((iVar19 < iVar18) && (*(int *)((longlong)plVar8 + 0xc) != iVar6)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_58 != 0) && (local_60 != (code *)0x0)) {
      (**(code **)(*(longlong *)local_60 + 0x38))(local_60,&local_50);
    }
    iVar18 = (int)plVar8[1];
    *(uint *)(plVar8 + 1) = iVar18 + 1U;
    if (*(uint *)((longlong)plVar8 + 0xc) < iVar18 + 1U) {
      FUN_1447a71f6(plVar8,iVar18);
    }
    lVar15 = *plVar8;
    lVar22 = (longlong)iVar18 * 0x10;
    *(undefined8 *)(lVar15 + lVar22) = 0;
    *(undefined4 *)(lVar15 + 8 + lVar22) = 0;
    *(code **)(lVar15 + lVar22) = local_60;
    local_60 = (code *)0x0;
    *(int *)(lVar15 + 8 + lVar22) = local_58;
LAB_14150b2e8:
    local_58 = 0;
LAB_14150b2fb:
    if (local_60 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  lVar15 = local_80 + 0x1898;
  lVar22 = local_80 + 0x18a0;
  *(undefined4 *)(local_80 + 0x18a8) = 0;
  if (*(int *)(local_80 + 0x18ac) < 0) {
    FUN_140832776(lVar22,0);
  }
  FUN_140818e52(lVar15,plVar8,lVar22);
  lVar15 = local_80;
  if ((DAT_14c950c29 == 1) && (iVar18 = *(int *)(local_80 + 0x18a8), 0 < iVar18)) {
    lVar13 = *(longlong *)(local_80 + 0x18a0);
    lVar16 = 0;
    do {
      if (*(longlong *)(lVar13 + lVar16 * 8) != 0) {
        FUN_1456cec3c();
        iVar18 = *(int *)(local_80 + 0x18a8);
        lVar15 = local_80;
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 < iVar18);
  }
  local_68 = (uint *)(lVar15 + 0x1928);
  iVar18 = *(int *)(lVar15 + 0x1940);
  if (iVar18 == 0) {
    uVar17 = 1;
    uVar21 = 0;
    iVar19 = 0;
    iVar6 = 0;
  }
  else {
    puVar10 = *(uint **)(lVar15 + 0x1938);
    if (*(uint **)(lVar15 + 0x1938) == (uint *)0x0) {
      puVar10 = local_68;
    }
    uVar20 = *puVar10;
    if (uVar20 == 0) {
      iVar6 = iVar18 + 0x1e;
      if (-1 < iVar18 + -1) {
        iVar6 = iVar18 + -1;
      }
      uVar21 = 0;
      uVar17 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar17 = uVar21;
      }
      iVar19 = 0;
      do {
        if (uVar17 == uVar21) goto LAB_14150b423;
        iVar19 = iVar19 + 0x20;
        uVar20 = puVar10[uVar21 + 1];
        uVar21 = uVar21 + 1;
      } while (uVar20 == 0);
    }
    else {
      uVar21 = 0;
      iVar19 = 0;
    }
    uVar17 = (ulonglong)(-uVar20 & uVar20);
    uVar1 = uVar17 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar6 = (iVar19 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar18 <= iVar6) {
      iVar6 = iVar18;
    }
  }
  if (iVar6 != iVar18) {
    uVar20 = 0xffffffff;
    do {
      FUN_140818e52((longlong)iVar6 * 0x14 + *(longlong *)(lVar15 + 0x1918),local_70,lVar22);
      lVar15 = local_80;
      if ((DAT_14c950c29 == 1) && (iVar6 = *(int *)(local_80 + 0x18a8), 0 < iVar6)) {
        lVar13 = *(longlong *)(local_80 + 0x18a0);
        lVar16 = 0;
        do {
          if (*(longlong *)(lVar13 + lVar16 * 8) != 0) {
            FUN_1456cec3c();
            iVar6 = *(int *)(local_80 + 0x18a8);
            lVar15 = local_80;
          }
          lVar16 = lVar16 + 1;
        } while (lVar16 < iVar6);
      }
      uVar20 = uVar20 & ~(uint)uVar17;
      puVar10 = *(uint **)(lVar15 + 0x1938);
      if (*(uint **)(lVar15 + 0x1938) == (uint *)0x0) {
        puVar10 = local_68;
      }
      iVar2 = *(int *)(lVar15 + 0x1940);
      iVar6 = (int)uVar21;
      lVar13 = (longlong)iVar6;
      uVar14 = puVar10[lVar13] & uVar20;
      if (uVar14 == 0) {
        iVar11 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar11 = iVar2 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar19 = iVar19 + 0x20;
        iVar12 = iVar11;
        if (iVar11 < iVar6) {
          iVar12 = iVar6;
        }
        if (iVar6 < iVar11) {
          lVar16 = 0;
          do {
            uVar14 = puVar10[lVar13 + lVar16 + 1];
            if (uVar14 != 0) {
              uVar21 = (ulonglong)(iVar6 + (int)lVar16 + 1);
              uVar20 = 0xffffffff;
              goto LAB_14150b5d1;
            }
            iVar19 = iVar19 + 0x20;
            lVar16 = lVar16 + 1;
          } while (iVar12 - lVar13 != lVar16);
          uVar20 = 0xffffffff;
          iVar6 = iVar12;
        }
        uVar21 = (ulonglong)(iVar6 + 1);
        lVar15 = local_80;
        iVar6 = iVar2;
      }
      else {
LAB_14150b5d1:
        uVar17 = (ulonglong)(-uVar14 & uVar14);
        uVar1 = uVar17 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar6 = (iVar19 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar6) {
          iVar6 = iVar2;
        }
      }
    } while (iVar6 != iVar18);
  }
LAB_14150b423:
  FUN_140831e24(lVar15);
  lVar15 = local_80 + 0x620;
  lVar22 = local_80 + 0x18b0;
  FUN_140c99494(lVar22,lVar15);
  plVar8 = local_70;
  lVar13 = local_80;
  if (*(int *)(local_80 + 0x1660) == 0) {
    lVar13 = *(longlong *)(local_80 + 0x658);
    if (lVar13 == 0) {
      lVar13 = *(longlong *)(local_80 + 0x660);
      if ((DAT_14c950c29 & lVar13 != 0) != 0) goto LAB_14150ba0d;
      if (lVar13 != 0) goto LAB_14150b63e;
LAB_14150b8c7:
      local_50 = 0;
    }
    else {
      if (DAT_14c950c29 == 1) {
LAB_14150ba0d:
        FUN_1456cec3c(lVar13);
      }
LAB_14150b63e:
      if (DAT_14cb06da8 == 0) {
        local_60 = FUN_1449e2820;
        local_90 = FUN_14081d0ea;
        local_98 = &LAB_1464003b0;
        local_a0 = &local_60;
        local_a8 = &LAB_147d17bdf;
        local_b0 = &LAB_1417edf22;
        local_b8 = L"Engine";
        local_c0 = 0;
        local_c8 = 0x10000000;
        local_d0 = 8;
        local_d8 = 0x588;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
      }
      if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30))
      goto LAB_14150b8c7;
      local_50 = lVar13;
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(lVar13);
      }
    }
    local_60 = (code *)0x0;
    local_58 = 1;
    FUN_14184be70(&local_60,1,0);
    FUN_14083266e(local_60,&local_50,1);
    lVar13 = local_80;
    cVar4 = FUN_140f87450(&local_60,plVar8,lVar22,local_80 + 0x1698);
    if ((DAT_14c950c29 == 1) && (iVar18 = *(int *)(lVar13 + 0x18b8), 0 < iVar18)) {
      lVar13 = *(longlong *)(lVar13 + 0x18b0);
      lVar16 = 0;
      do {
        if (*(longlong *)(lVar13 + lVar16 * 8) != 0) {
          FUN_1456cec3c();
          iVar18 = *(int *)(local_80 + 0x18b8);
        }
        lVar16 = lVar16 + 1;
      } while (lVar16 < iVar18);
    }
    if (local_60 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    cVar4 = FUN_140f87450(local_80 + 0x1658,local_70,lVar22,local_80 + 0x1698);
    if ((DAT_14c950c29 == 1) && (iVar18 = *(int *)(lVar13 + 0x18b8), 0 < iVar18)) {
      lVar13 = *(longlong *)(lVar13 + 0x18b0);
      lVar16 = 0;
      do {
        if (*(longlong *)(lVar13 + lVar16 * 8) != 0) {
          FUN_1456cec3c();
          iVar18 = *(int *)(local_80 + 0x18b8);
        }
        lVar16 = lVar16 + 1;
      } while (lVar16 < iVar18);
    }
  }
  lVar13 = FUN_1408c3978(plVar8);
  if ((lVar13 != 0) && (*(longlong *)(local_80 + 0x1640) != lVar13)) {
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar13);
    }
    *(longlong *)(local_80 + 0x1640) = lVar13;
    *(undefined1 *)(local_80 + 0x17fc) = 1;
  }
  lVar13 = local_80;
  if (cVar4 == '\0' && *(int *)(local_80 + 0x18a8) == 0) {
    if (local_71 != '\0') {
      FUN_1406548f2();
      *(byte *)(lVar13 + 0x63c) = *(byte *)(lVar13 + 0x63c) | 2;
    }
    goto LAB_14150b81f;
  }
  FUN_1406548f2();
  *(byte *)(local_80 + 0x63c) = *(byte *)(local_80 + 0x63c) | 2;
  FUN_140c99494(lVar15,lVar22);
  if ((~*(byte *)(local_80 + 0x9c) & 3) == 0) {
    bVar5 = *(byte *)(local_80 + 0x9d);
    if ((bVar5 & 1) != 0) {
      if ((*(longlong *)(local_80 + 0xb0) != 0) || (lVar15 = FUN_1448abda6(), lVar15 != 0))
      goto LAB_14150b7fd;
      bVar5 = *(byte *)(local_80 + 0x9d);
    }
    *(byte *)(local_80 + 0x9d) = bVar5 | 1;
    FUN_1401057d4();
    FUN_14010586c(&DAT_14cad0140,local_80);
  }
LAB_14150b7fd:
  *(undefined1 *)(local_80 + 0x1910) = 1;
LAB_14150b81f:
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14150ba48 FUN_14150ba48 body=184 status=ok
// SIG undefined FUN_14150ba48(void)

void FUN_14150ba48(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  if (param_2[0x12] == 0) {
    return;
  }
  cVar1 = FUN_144729dda(param_1 + 0x1c);
  if ((cVar1 != '\0') && (iVar2 = FUN_140ac16d8(param_1), iVar2 == 3)) {
    return;
  }
  uVar3 = param_2[0xc];
  if (param_2[0xe] != 0) {
    uVar3 = FUN_144a78877(uVar3);
  }
  uVar4 = param_2[0xf];
  if (param_2[0x11] != 0) {
    uVar4 = FUN_144a78877(uVar4);
  }
  uVar5 = param_2[0x12];
  if (param_2[0x14] != 0) {
    uVar5 = FUN_144a78877(uVar5);
  }
  uVar6 = FUN_145c6b2d0(param_1 + 0x4d8,uVar4 ^ uVar3 ^ uVar5,param_2 + 0xc);
  FUN_145c6b35e(uVar6,*param_2);
  FUN_1410b5f9c(param_1,*param_2);
  return;
}



// FUNCTION 14150bb00 FUN_14150bb00 body=1331 status=ok
// SIG undefined FUN_14150bb00(void)

void FUN_14150bb00(longlong param_1,char param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  undefined8 *puVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_1c8 [32];
  undefined1 *local_1a8;
  undefined8 local_198;
  undefined **local_188;
  code *local_180;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)(param_1 + 0xb2) = 1;
  if (param_2 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
    lVar9 = (longlong)*(int *)(param_1 + 0xc0);
    if (0 < lVar9) {
      lVar11 = lVar9 * 8;
      uVar10 = lVar9 + 1;
      do {
        lVar11 = lVar11 + -8;
        FUN_14449d868(param_1,*(longlong *)(param_1 + 0xb8) + lVar11);
        uVar10 = uVar10 - 1;
      } while (1 < uVar10);
    }
    *(undefined4 *)(param_1 + 0xc0) = 0;
    if (*(int *)(param_1 + 0xc4) < 0) {
      FUN_1466d195e(param_1 + 0xb8,0);
    }
    plVar1 = (longlong *)(param_1 + 0xf0);
    iVar4 = *(int *)(param_1 + 0xfc);
    FUN_14128f819(*(undefined8 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xf8));
    *(undefined4 *)(param_1 + 0xf8) = 0;
    if ((iVar4 < 0) && (*(int *)(param_1 + 0xfc) != 0)) {
      FUN_14920c264(plVar1);
    }
    if (DAT_14cc079b0 == 0) {
      uVar8 = FUN_1408c25db();
      DAT_14cc079b0 = FUN_14171c317(FUN_141906a4d,uVar8,L"ERigElementType");
    }
    lVar9 = DAT_14cc079b0;
    if (*(char *)(*(longlong *)(DAT_14cc079b0 + 0x40) + 8) != -1) {
      lVar11 = 0x18;
      do {
        iVar4 = *(int *)(param_1 + 0xf8);
        *(uint *)(param_1 + 0xf8) = iVar4 + 1U;
        if (*(uint *)(param_1 + 0xfc) < iVar4 + 1U) {
          FUN_1466d19be(plVar1,iVar4);
        }
        puVar2 = (undefined8 *)(*plVar1 + (longlong)iVar4 * 0x10);
        *puVar2 = 0;
        puVar2[1] = 0;
        pcVar3 = (char *)(*(longlong *)(lVar9 + 0x40) + lVar11);
        lVar11 = lVar11 + 0x10;
      } while (*pcVar3 != -1);
    }
    FUN_1414a87e6(param_1 + 0x118);
    local_e8 = 0;
    local_d8 = 0;
    FUN_14449dc32(param_1 + 0x1b8);
    local_128 = 0;
    local_118 = 0;
    FUN_14449dd4c(param_1 + 0x1d8);
    local_168 = 0;
    local_158 = 0;
    FUN_14449de5e(param_1 + 0x1f8);
    local_198 = 0;
    local_188 = &PTR_LAB_14bb90310;
    local_180 = FUN_1444aae36;
    local_1a8 = &LAB_14920c294;
    FUN_1410f23cc(param_1 + 0x268);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
  }
  *(undefined4 *)(param_1 + 0x3e0) = 0xffffffff;
  if (*(int *)(param_1 + 0x3f4) < 0) {
    *(undefined4 *)(param_1 + 0x3f0) = 0;
    FUN_14475e67c(param_1 + 1000,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x3f0) = 0;
  }
  if (*(int *)(param_1 + 0x404) < 0) {
    *(undefined4 *)(param_1 + 0x400) = 0;
    FUN_14481578e(param_1 + 0x3f8,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x400) = 0;
  }
  FUN_1444aadf2(param_1 + 0x4d8);
  if (*(int *)(param_1 + 0x324) < 0) {
    *(undefined4 *)(param_1 + 800) = 0;
    FUN_14920a7da(param_1 + 0x318,0);
  }
  else {
    *(undefined4 *)(param_1 + 800) = 0;
  }
  if (*(int *)(param_1 + 0x56c) < 0) {
    *(undefined4 *)(param_1 + 0x568) = 0;
    FUN_14481578e(param_1 + 0x560,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x568) = 0;
  }
  *(undefined4 *)(param_1 + 0x408) = 0;
  local_a0 = 0;
  local_98 = 0xffffffff00000000;
  local_80 = 0;
  local_78 = 0;
  uStack_74 = 0x80;
  uStack_70 = 0xffffffff;
  uStack_6c = 0;
  local_60 = 0;
  local_58 = 0;
  if (&local_a0 != (undefined8 *)(param_1 + 0x410)) {
    FUN_14128f848();
  }
  FUN_14128f848(&local_a0);
  if (*(int *)(param_1 + 0x10c) < 0) {
    *(undefined4 *)(param_1 + 0x108) = 0;
    FUN_14481578e(param_1 + 0x100,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  if (*(int *)(param_1 + 0x294) < 0) {
    *(undefined4 *)(param_1 + 0x290) = 0;
    FUN_145c8ec9a(param_1 + 0x288,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x290) = 0;
  }
  if (*(int *)(param_1 + 0x2a4) < 0) {
    *(undefined4 *)(param_1 + 0x2a0) = 0;
    FUN_1466d195e(param_1 + 0x298,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x2a0) = 0;
  }
  *(undefined4 *)(param_1 + 0x2a8) = 0xffffffff;
  piVar5 = DAT_14c950c20;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar4 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar4 != 2)) {
    if (iVar4 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_14150beab;
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(piVar5 + 4);
    while( true ) {
      if (0 < piVar5[1]) {
        (**(code **)(**(longlong **)(piVar5 + 0xe) + 0x20))
                  (*(longlong **)(piVar5 + 0xe),0xffffffff,0);
      }
      EnterCriticalSection(lpCriticalSection);
      if (piVar5[1] == 0) break;
      LeaveCriticalSection(lpCriticalSection);
    }
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
    LeaveCriticalSection(lpCriticalSection);
  }
LAB_14150beab:
  FUN_140ad4746(param_1,6,0);
  piVar5 = DAT_14c950c20;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar4 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar4 != 2)) {
    if (iVar4 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_14150bef2;
    }
    LOCK();
    *piVar5 = *piVar5 + -1;
    UNLOCK();
  }
LAB_14150bef2:
  if (*(longlong *)(param_1 + 0x4d0) != 0) {
    FUN_14150bb00(*(longlong *)(param_1 + 0x4d0),1);
  }
  if ((local_50 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14150c034 FUN_14150c034 body=574 status=ok
// SIG undefined FUN_14150c034(void)

void FUN_14150c034(longlong param_1)

{
  char cVar1;
  wchar_t *pwVar2;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  char local_89;
  char *local_88;
  double *local_80;
  undefined1 local_74 [4];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_146b22156(param_1 + 0x138);
  cVar1 = '\0';
  do {
    local_98 = 2.0;
    local_a0 = 4.0;
    local_89 = cVar1;
    if (cVar1 == '\x03') {
      local_98 = -1.0;
      local_a0 = -1.0;
      local_b8 = &DAT_14c872ce8;
      FUN_14612afb8(DAT_14c872ce0,L"HTTP",L"FlushSoftTimeLimitFullFlush",&local_98);
      pwVar2 = L"FlushHardTimeLimitFullFlush";
LAB_14150c1da:
      local_b8 = &DAT_14c872ce8;
      FUN_14612afb8(DAT_14c872ce0,L"HTTP",pwVar2,&local_a0);
    }
    else if (cVar1 == '\x02') {
      local_b8 = &DAT_14c872ce8;
      FUN_14612afb8(DAT_14c872ce0,L"HTTP",L"FlushSoftTimeLimitShutdown",&local_98);
      local_b8 = &DAT_14c872ce8;
      FUN_14612afb8(DAT_14c872ce0,L"HTTP",L"FlushHardTimeLimitShutdown",&local_a0);
      if ((0.0 <= local_a0) && ((local_98 < 0.0 || (local_a0 <= local_98)))) {
        if (local_a0 <= 0.0) {
          local_a0 = 0.05;
          local_98 = 0.0;
        }
        else {
          local_98 = local_a0 * 0.5;
        }
      }
    }
    else if (cVar1 == '\0') {
      local_b8 = &DAT_14c872ce8;
      FUN_14612afb8(DAT_14c872ce0,L"HTTP",L"FlushSoftTimeLimitDefault",&local_98);
      pwVar2 = L"FlushHardTimeLimitDefault";
      goto LAB_14150c1da;
    }
    local_b0 = local_98;
    local_a8 = local_a0;
    local_88 = &local_89;
    local_80 = &local_b0;
    FUN_145c70326(param_1 + 0x138,local_74,&local_88);
    cVar1 = cVar1 + '\x01';
    if (cVar1 == '\x04') {
      if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 14150c274 FUN_14150c274 body=1355 status=ok
// SIG undefined FUN_14150c274(void)

void FUN_14150c274(undefined8 param_1,wchar_t *param_2,longlong param_3)

{
  longlong *plVar1;
  wchar_t ***pppwVar2;
  wchar_t ***pppwVar3;
  wchar_t ***pppwVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  wchar_t *pwVar8;
  uint uVar9;
  longlong lVar10;
  wchar_t ****ppppwVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  size_t _MaxCount;
  ulonglong uVar17;
  bool bVar18;
  undefined1 auStack_128 [40];
  undefined8 local_100;
  wchar_t ***local_f8;
  wchar_t *local_f0;
  longlong *local_e8;
  int local_dc;
  wchar_t ***local_d8;
  wchar_t ***pppwStack_d0;
  undefined8 local_c8;
  int local_c0;
  wchar_t ***local_b8;
  wchar_t ***pppwStack_b0;
  undefined8 local_a0;
  wchar_t ***local_98;
  ulonglong uStack_90;
  wchar_t ***local_88;
  wchar_t ***pppwStack_80;
  wchar_t ***local_78;
  wchar_t ***pppwStack_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = param_1;
  local_f0 = param_2;
  if ((1 < *(int *)(param_3 + 8)) && (DAT_14c872ce0 != 0)) {
    FUN_145c6e444(param_1);
    local_e8 = (longlong *)FUN_141348652(DAT_14c872ce0,param_3);
    if (local_e8 != (longlong *)0x0) {
      AcquireSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
      local_f8 = (wchar_t ***)(local_e8 + 2);
      local_d8 = (wchar_t ***)&DAT_100000000;
      local_c8 = 0xffffffff;
      local_c0 = 0;
      pppwStack_d0 = local_f8;
      if ((int)local_e8[5] == 0) {
        uVar17 = 1;
        uVar14 = 0xffffffff;
        iVar5 = 0;
        iVar6 = 0;
      }
      else {
        FUN_1449c0562(&local_d8);
        uVar17 = (ulonglong)local_d8 >> 0x20;
        iVar6 = (int)local_d8;
        uVar14 = (uint)local_c8;
        iVar5 = local_c8._4_4_;
      }
      iVar15 = local_c0;
      pppwVar4 = pppwStack_d0;
      ReleaseSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
      AcquireSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
      iVar7 = (int)local_e8[5];
      ReleaseSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
      local_dc = iVar7;
      if (iVar5 != iVar7 || pppwVar4 != local_f8) {
        do {
          lVar12 = *local_e8;
          lVar10 = (longlong)iVar5 * 0xc0;
          plVar1 = (longlong *)(lVar12 + lVar10);
          uVar9 = *(uint *)(lVar12 + 8 + lVar10);
          if (uVar9 < 2) {
LAB_14150c3f4:
            FUN_140056680(&local_d8,local_f0);
            pppwVar3 = local_d8;
            iVar5 = (int)plVar1[1];
            if (iVar5 == (int)pppwStack_d0) {
              if (iVar5 < 2) {
                bVar18 = true;
              }
              else {
                iVar5 = wcscmp((wchar_t *)*plVar1,(wchar_t *)local_d8);
                bVar18 = iVar5 == 0;
              }
            }
            else {
              bVar18 = (int)pppwStack_d0 + iVar5 == 1;
            }
            if ((wchar_t ****)pppwVar3 != (wchar_t ****)0x0) {
              FUN_1400020a8(pppwVar3);
            }
            if (bVar18) {
              local_78 = (wchar_t ***)0x0;
              pppwStack_70 = (wchar_t ***)0x0;
              local_d8 = (wchar_t ***)&local_88;
              local_88 = (wchar_t ***)0x0;
              pppwStack_80 = (wchar_t ***)0x0;
              pppwStack_d0 = (wchar_t ***)&local_78;
              FUN_146820a0c(local_100,&local_98);
              if ((wchar_t ****)local_88 != (wchar_t ****)0x0) {
                FUN_1400020a8();
              }
              FUN_1447a1747(local_78,(ulonglong)pppwStack_70 & 0xffffffff);
              ppppwVar11 = (wchar_t ****)local_78;
LAB_14150c633:
              if (ppppwVar11 != (wchar_t ****)0x0) {
                FUN_1400020a8();
              }
            }
          }
          else {
            pppwVar3 = *(wchar_t ****)(lVar12 + lVar10);
            uVar13 = (longlong)(int)(uVar9 - 1) * 2;
            do {
              pppwVar2 = (wchar_t ***)((longlong)pppwVar3 + (uVar13 - 2));
              if (pppwVar2 < pppwVar3) goto LAB_14150c3f4;
              uVar13 = uVar13 - 2;
            } while (*(short *)pppwVar2 != 0x20);
            iVar5 = (int)(uVar13 >> 1);
            if (iVar5 == -1) goto LAB_14150c3f4;
            iVar7 = (int)plVar1[1] + -1;
            if ((int)plVar1[1] == 0) {
              iVar7 = 0;
            }
            if (iVar5 < iVar7) {
              iVar7 = iVar5;
            }
            if (iVar7 < 1) {
              iVar7 = 0;
            }
            pppwStack_70 = (wchar_t ***)CONCAT44(pppwStack_70._4_4_,iVar7);
            local_78 = pppwVar3;
            FUN_144a8b87e(&local_78,&local_d8);
            local_78 = local_d8;
            pppwStack_70 = pppwStack_d0;
            _MaxCount = (size_t)(int)pppwStack_d0;
            pwVar8 = local_f0;
            if (_MaxCount == 0) {
LAB_14150c668:
              if (*pwVar8 != L'\0') goto LAB_14150c436;
              iVar7 = (int)plVar1[1] + -1;
              if ((int)plVar1[1] == 0) {
                iVar7 = 0;
              }
              iVar16 = iVar7 - iVar5;
              if (iVar7 <= iVar7 - iVar5) {
                iVar16 = iVar7;
              }
              if (iVar16 < 1) {
                iVar16 = 0;
              }
              local_88 = (wchar_t ***)
                         ((*plVar1 + (longlong)iVar7 * 2) - (ulonglong)(uint)(iVar16 * 2));
              pppwStack_80 = (wchar_t ***)CONCAT44(pppwStack_80._4_4_,iVar16);
              FUN_144a8b87e(&local_88,&local_d8);
              local_88 = local_d8;
              pppwStack_80 = pppwStack_d0;
              local_98 = (wchar_t ***)0x0;
              uStack_90 = 0;
              FUN_1446f470e(&local_a0,L"AllowedDomains",1);
              FUN_14105accc(plVar1 + 2,local_a0,&local_98,1);
              local_b8 = (wchar_t ***)0x0;
              pppwStack_b0 = (wchar_t ***)0x0;
              FUN_14006620a(&local_d8,local_88,(ulonglong)pppwStack_80 & 0xffffffff);
              if (local_b8 != (wchar_t ***)0x0) {
                FUN_1400020a8();
              }
              local_b8 = local_d8;
              pppwStack_b0 = pppwStack_d0;
              local_d8 = (wchar_t ***)&local_b8;
              pppwStack_d0 = (wchar_t ***)&local_98;
              FUN_146820a0c(local_100,local_64);
              if ((wchar_t ****)local_b8 != (wchar_t ****)0x0) {
                FUN_1400020a8();
              }
              FUN_1447a1747(local_98,uStack_90 & 0xffffffff);
              ppppwVar11 = (wchar_t ****)local_98;
              goto LAB_14150c633;
            }
            iVar7 = wcsncmp((wchar_t *)local_d8,local_f0,_MaxCount);
            if (iVar7 == 0) {
              pwVar8 = local_f0 + _MaxCount;
              goto LAB_14150c668;
            }
          }
LAB_14150c436:
          uVar14 = uVar14 & ~(uint)uVar17;
          ppppwVar11 = (wchar_t ****)pppwVar4[2];
          if ((wchar_t ****)pppwVar4[2] == (wchar_t ****)0x0) {
            ppppwVar11 = (wchar_t ****)pppwVar4;
          }
          iVar7 = *(int *)(pppwVar4 + 3);
          lVar12 = (longlong)iVar6;
          uVar9 = *(uint *)((longlong)ppppwVar11 + lVar12 * 4) & uVar14;
          if (uVar9 == 0) {
            iVar5 = iVar7 + 0x1e;
            if (-1 < iVar7 + -1) {
              iVar5 = iVar7 + -1;
            }
            iVar5 = iVar5 >> 5;
            iVar15 = iVar15 + 0x20;
            iVar16 = iVar5;
            if (iVar5 < iVar6) {
              iVar16 = iVar6;
            }
            if (iVar6 < iVar5) {
              lVar10 = 0;
              do {
                uVar9 = *(uint *)((longlong)ppppwVar11 + lVar10 * 4 + lVar12 * 4 + 4);
                if (uVar9 != 0) {
                  iVar6 = iVar6 + (int)lVar10 + 1;
                  uVar14 = 0xffffffff;
                  goto LAB_14150c4a2;
                }
                iVar15 = iVar15 + 0x20;
                lVar10 = lVar10 + 1;
              } while (iVar16 - lVar12 != lVar10);
              uVar14 = 0xffffffff;
              iVar6 = iVar16;
            }
            iVar6 = iVar6 + 1;
            iVar5 = iVar7;
          }
          else {
LAB_14150c4a2:
            uVar17 = (ulonglong)(-uVar9 & uVar9);
            uVar13 = uVar17 * 2 + 1;
            lVar12 = 0x3f;
            if (uVar13 != 0) {
              for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
              }
            }
            iVar5 = (iVar15 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
            if (iVar7 <= iVar5) {
              iVar5 = iVar7;
            }
          }
        } while ((iVar5 != local_dc) || (pppwVar4 != local_f8));
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14150c7c0 FUN_14150c7c0 body=510 status=ok
// SIG undefined FUN_14150c7c0(void)

void FUN_14150c7c0(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  longlong *plVar13;
  int iVar14;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  if ((int)param_1[5] == 0) {
    uVar9 = 1;
    local_58._4_4_ = 0;
    plVar13 = local_60;
    uVar12 = 0xffffffff;
    iVar14 = 0;
  }
  else {
    local_70 = local_60;
    FUN_1449c0562(&local_68);
    uVar9 = local_68 >> 0x20;
    plVar13 = local_70;
    uVar12 = (uint)local_58;
    iVar14 = (int)local_68;
  }
  plVar3 = local_60;
  iVar4 = (int)local_60[3];
  iVar6 = local_58._4_4_;
  iVar10 = local_50;
  if (local_58._4_4_ < iVar4) {
    do {
      if (*(longlong *)(*param_1 + 0x18 + (longlong)iVar6 * 0x40) != 0) {
        FUN_1400020a8();
        iVar4 = (int)plVar3[3];
      }
      uVar12 = uVar12 & ~(uint)uVar9;
      plVar7 = (longlong *)plVar3[2];
      if ((longlong *)plVar3[2] == (longlong *)0x0) {
        plVar7 = plVar3;
      }
      lVar11 = (longlong)iVar14;
      uVar5 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar12;
      if (uVar5 == 0) {
        iVar6 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar6 = iVar4 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar2 = iVar6;
        if (iVar6 < iVar14) {
          iVar2 = iVar14;
        }
        if (iVar6 <= iVar14) break;
        lVar8 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar8 * 4 + lVar11 * 4 + 4);
          if (uVar5 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar2 - lVar11 == lVar8) goto LAB_14150c8db;
        }
        iVar14 = iVar14 + (int)lVar8 + 1;
        uVar12 = 0xffffffff;
      }
      uVar9 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar9 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar4);
  }
LAB_14150c8db:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140b7ce44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar12) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar5 = 0x80;
    if (0x80 < (int)uVar12) {
      uVar5 = uVar12;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(plVar13,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14150c9c0 FUN_14150c9c0 body=2983 status=ok
// SIG undefined FUN_14150c9c0(void)

/* WARNING: Removing unreachable block (ram,0x00014150d37a) */

void FUN_14150c9c0(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  ulonglong *param_5,longlong *param_6)

{
  void *_Dst;
  int iVar1;
  ulonglong uVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  DWORD DVar7;
  DWORD DVar8;
  code *pcVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  code *pcVar16;
  undefined8 *puVar17;
  uint uVar18;
  byte bVar19;
  bool bVar20;
  undefined1 auStack_578 [32];
  uint *local_558;
  undefined1 *local_550;
  undefined1 local_53e;
  byte local_53d;
  uint local_53c;
  undefined8 local_538;
  ulonglong local_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined1 local_4d2 [2];
  undefined8 local_4d0;
  undefined1 local_4c5;
  uint local_4c4 [2];
  undefined4 uStack_4bc;
  undefined4 local_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined1 local_470;
  undefined8 local_468;
  undefined1 local_460;
  undefined1 local_45f;
  undefined2 local_45e;
  undefined4 local_45c;
  undefined4 local_458;
  undefined8 local_450 [6];
  longlong local_420;
  longlong local_418;
  longlong local_410;
  longlong local_408;
  undefined8 local_3c0;
  undefined1 local_3b0 [48];
  longlong local_380;
  longlong local_378;
  longlong local_370;
  longlong local_368;
  undefined8 local_320;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined1 local_268;
  undefined8 local_260;
  undefined1 local_258;
  undefined1 local_257;
  undefined2 local_256;
  undefined1 *local_254;
  undefined2 local_24a;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined1 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  longlong local_208;
  longlong lStack_200;
  longlong local_1f8;
  longlong lStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined1 uStack_1c0;
  undefined7 uStack_1bf;
  undefined1 uStack_1b8;
  undefined8 uStack_1b7;
  undefined2 local_1af;
  uint local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined2 local_190 [4];
  undefined1 local_188 [216];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_80;
  undefined8 local_78;
  uint local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_578;
  if (param_3[2] == 0) {
    uVar15 = 0;
  }
  else {
    uVar12 = CONCAT71((int7)((ulonglong)param_2 >> 8),
                      *(undefined1 *)(*(longlong *)(param_3[2] + 0x28) + 0x247)) &
             0xffffffffffffff08;
    uVar15 = CONCAT71((int7)(uVar12 >> 8),(byte)uVar12 >> 3);
  }
  cVar4 = FUN_1401c269b(param_3,uVar15);
  lVar10 = DAT_14ca97170;
  if ((((cVar4 == '\0') || ((longlong)*(int *)(param_1 + 0x20) < 3)) || (DAT_14c9ac460 == 0)) ||
     ((*(byte *)((longlong)&DAT_14ca814d0 +
                (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_1 + 0x20) * 2) *
                0x3c) & 4) == 0)) goto LAB_14150ca22;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar12 = 0;
  }
  else if (iVar1 == 1) {
    DVar7 = FUN_140ad26c0();
    DVar8 = GetCurrentThreadId();
    uVar12 = (ulonglong)(DVar7 != DVar8);
  }
  else {
    uVar12 = 1;
  }
  if (0 < *(int *)(lVar10 + uVar12 * 4)) goto LAB_14150ca22;
  local_530 = *param_5;
  pcVar9 = *(code **)(*param_3 + 0x38);
  plVar13 = param_3;
  if (pcVar9 == FUN_144765e18) {
    plVar13 = (longlong *)param_3[9];
    if (plVar13 == (longlong *)0x0) {
      plVar13 = (longlong *)param_3[8];
      pcVar9 = *(code **)(*plVar13 + 0x420);
      pcVar16 = (code *)&LAB_144b24e8a;
    }
    else {
      pcVar9 = *(code **)(*plVar13 + 0x420);
      pcVar16 = (code *)&LAB_14497e108;
    }
    if (pcVar9 != pcVar16) goto LAB_14150d529;
  }
  else {
LAB_14150d529:
    (*pcVar9)(plVar13);
  }
  lVar10 = *param_3;
  if (*(code **)(lVar10 + 0x100) == (code *)&LAB_144b25520) {
    local_53d = (*(byte *)(param_3[8] + 0x1d0) & 0x40) >> 6;
  }
  else {
    local_53d = (**(code **)(lVar10 + 0x100))(param_3);
    lVar10 = *param_3;
  }
  if (*(code **)(lVar10 + 0x38) == FUN_144765e18) {
    plVar13 = (longlong *)param_3[9];
    if (plVar13 == (longlong *)0x0) {
      pcVar9 = *(code **)(*(longlong *)param_3[8] + 0x420);
      if (pcVar9 != (code *)&LAB_144b24e8a) goto LAB_14150d544;
      bVar19 = *(byte *)((longlong *)param_3[8] + 0x30);
    }
    else {
      pcVar9 = *(code **)(*plVar13 + 0x420);
      if (pcVar9 != (code *)&LAB_14497e108) {
LAB_14150d544:
        bVar19 = (*pcVar9)();
        goto LAB_14150cba4;
      }
      bVar19 = *(byte *)(plVar13 + 0x2a);
    }
    bVar19 = (bVar19 & 0x10) >> 4;
  }
  else {
    bVar19 = (**(code **)(lVar10 + 0x38))(param_3);
  }
LAB_14150cba4:
  local_4e8 = 0;
  uStack_4e0 = 0;
  local_4f8 = 0;
  uStack_4f0 = 0;
  local_508 = 0;
  uStack_500 = 0;
  local_518 = 0;
  uStack_510 = 0;
  local_528 = 0;
  uStack_520 = 0;
  cVar4 = FUN_1401c2800(param_3,*param_4,&local_528);
  if (cVar4 != '\0') {
    local_4b8 = 0;
    local_4c4[1] = 0;
    uStack_4bc = 0;
    local_4b0 = 0;
    uStack_4a8 = 0;
    local_4a0 = 0;
    uStack_498 = 0;
    local_490 = 0;
    uStack_488 = 0;
    local_480 = 0;
    uStack_478 = 0;
    local_458 = 1;
    uVar5 = FUN_14150d568(&local_4b0);
    uStack_4bc = CONCAT31(uStack_4bc._1_3_,uVar5);
    local_4c4[1] = 1;
    local_538 = *(undefined8 *)(param_2 + 0x38);
    local_470 = 0xb;
    local_460 = 1;
    local_45e = 1;
    local_45c = 1;
    local_53e = ((uint)local_538 >> 0xc & 1) == 0;
    uVar12 = *param_5;
    uVar18 = *(uint *)(param_1 + 8);
    local_190[0] = 0x100;
    local_80 = 0;
    local_78 = 0x300000000;
    local_70 = 0x7fffffff;
    uStack_68 = 0;
    local_468 = local_538;
    local_45f = local_53e;
    cVar4 = FUN_1406917e6();
    if (cVar4 == '\0') {
      uVar6 = (uint)local_530;
      uVar2 = local_530 >> 0x11;
      local_1ac = (uint)uVar12 & 0x3f;
      local_238 = 0;
      uStack_230 = 0;
      local_228 = 0;
      local_220 = 1;
      local_218 = 0;
      uStack_210 = 0;
      local_208 = 0;
      lStack_200 = 0;
      local_1f8 = 0;
      lStack_1f0 = 0;
      local_1e8 = 0xffffffff;
      uStack_1e4 = 0xffffffff;
      uStack_1e0 = 0xffffffff;
      uStack_1dc = 0xffffffff;
      local_1d8 = 0;
      uStack_1d0 = 0;
      local_1c8 = 0;
      uStack_1c0 = 0;
      uStack_1bf = 0;
      uStack_1b8 = 0;
      uStack_1b7 = 0;
      local_1af = 1;
      local_1a8 = 0;
      local_1a0 = 0;
      lVar10 = param_4[1];
      local_53c = uVar18;
      if (lVar10 == 0) {
        local_288 = 0x1100000000;
        (**(code **)(*param_4 + 0x48))(0,&local_310);
        lVar10 = FUN_14486d71a(&local_310);
      }
      bVar20 = (uVar6 >> 0x10 & 1) != 0;
      local_2d0 = 0;
      uStack_2c8 = 0;
      local_310 = local_528;
      uStack_308 = uStack_520;
      local_300 = (undefined4)local_518;
      uStack_2fc = local_518._4_4_;
      uStack_2f8 = (undefined4)uStack_510;
      uStack_2f4 = uStack_510._4_4_;
      local_2f0 = (undefined4)local_508;
      uStack_2ec = local_508._4_4_;
      uStack_2e8 = (undefined4)uStack_500;
      uStack_2e4 = uStack_500._4_4_;
      local_2e0 = (undefined4)local_4f8;
      uStack_2dc = local_4f8._4_4_;
      uStack_2d8 = (undefined4)uStack_4f0;
      uStack_2d4 = uStack_4f0._4_4_;
      local_2c0 = (undefined4)local_4e8;
      uStack_2bc = local_4e8._4_4_;
      uStack_2b8 = (undefined4)uStack_4e0;
      uStack_2b4 = uStack_4e0._4_4_;
      FUN_144765e6c(&local_238,lVar10);
      bVar3 = (uVar2 & 1) == 0;
      puVar14 = &DAT_14c9c0e10;
      if (bVar20 && (bVar3 && bVar19 == 0)) {
        puVar14 = &DAT_14c9c0e28;
      }
      puVar17 = &DAT_14c9c0d68;
      if (bVar20 && (bVar3 && bVar19 == 0)) {
        puVar17 = &DAT_14c9c0df8;
      }
      bVar3 = (uVar2 & 1) == 0;
      if (!bVar3 || bVar19 != 0) {
        puVar14 = &DAT_14c9c0e40;
      }
      puVar11 = &DAT_14c9c0db0;
      if (bVar3 && bVar19 == 0) {
        puVar11 = puVar17;
      }
      if (local_53d != 0) {
        puVar11 = puVar14;
      }
      uStack_1d0 = *puVar11;
      local_1d8 = *(undefined8 *)(param_1 + 0x40);
      local_1c8 = *(undefined8 *)(param_1 + 0x48);
      uVar6 = (**(code **)(*param_3 + 0x490))(param_3);
      uVar18 = local_53c;
      if (uVar6 < 4) {
        uVar5 = (undefined1)(0x5010400 >> ((byte)(uVar6 << 3) & 0x1f));
      }
      else {
        uVar5 = 0;
        if ((uVar6 < 7) && (DAT_14ca84f33 != '\0')) {
          uVar5 = (undefined1)(0xa060900000000 >> ((byte)(uVar6 << 3) & 0x3f));
        }
      }
      local_1af = CONCAT11(uVar5,(undefined1)local_1af);
      cVar4 = (**(code **)(*param_3 + 0x4a0))(param_3);
      if (cVar4 == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_144a12f44(DAT_14ca85550);
      }
      local_1af = CONCAT11(local_1af._1_1_,uVar5);
      FUN_144a1fecc(&local_238,&local_310);
      if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
         (DAT_14cafb358 == 2)) {
        local_1a8 = local_240;
        FUN_14573402d(local_3b0);
        if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
           (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 - 1U < 2)))) {
          lVar10 = *param_4;
          local_450[0] = local_320;
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
          local_558 = local_4c4;
          local_4c4[0] = local_4c4[0] & 0xffff0000;
          local_550 = local_4d2;
          FUN_14573482a(&DAT_14cafccf8,&local_4d0,
                        (int)((ulonglong)local_450[0] >> 0x20) * 0x17 + (int)local_450[0] &
                        0x7fffffff,local_450);
          if (*(char *)(DAT_14cafccf8 + 8 + (longlong)(int)local_4d0 * 0x10) == '\x01') {
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
          }
          else {
            *(undefined1 *)((longlong)(int)local_4d0 * 0x10 + DAT_14cafccf8 + 8) = 1;
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
            FUN_140691a2a(&DAT_14cafc0a0,uVar18,lVar10);
          }
        }
        FUN_1457340f6(local_450,&local_238);
        if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
           (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 - 1U < 2)))) {
          lVar10 = *param_4;
          local_4d0 = local_3c0;
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
          local_558 = (uint *)local_4d2;
          local_4d2 = (undefined1  [2])0x0;
          local_550 = &local_4c5;
          FUN_14573482a(&DAT_14cafd9c8,local_4c4,
                        (int)((ulonglong)local_4d0 >> 0x20) * 0x17 + (int)local_4d0 & 0x7fffffff,
                        &local_4d0);
          if (*(char *)(DAT_14cafd9c8 + 8 + (longlong)(int)local_4c4[0] * 0x10) == '\x01') {
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
            uVar18 = local_53c;
          }
          else {
            *(undefined1 *)((longlong)(int)local_4c4[0] * 0x10 + DAT_14cafd9c8 + 8) = 1;
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
            FUN_140691a2a(&DAT_14cafcd70,local_53c,lVar10);
            uVar18 = local_53c;
          }
        }
        if (local_408 != 0) {
          FUN_140021284();
        }
        if (local_410 != 0) {
          FUN_140021284();
        }
        if (local_418 != 0) {
          FUN_140021284();
        }
        if (local_420 != 0) {
          FUN_140021284();
        }
        if (local_368 != 0) {
          FUN_140021284();
        }
        if (local_370 != 0) {
          FUN_140021284();
        }
        if (local_378 != 0) {
          FUN_140021284();
        }
        if (local_380 != 0) {
          FUN_140021284();
        }
      }
      uStack_2b4 = 1;
      local_2b0 = CONCAT44(local_4b8,uStack_4bc);
      local_2a8 = local_4b0;
      uStack_2a0 = uStack_4a8;
      local_298 = local_4a0;
      uStack_290 = uStack_498;
      local_288 = local_490;
      uStack_280 = uStack_488;
      local_278 = local_480;
      uStack_270 = uStack_478;
      local_268 = 0xb;
      local_260 = local_538;
      local_258 = 1;
      local_257 = local_53e;
      local_256 = 1;
      local_254 = &DAT_100000001;
      local_24a = 0;
      memcpy(local_188,&local_310,0xd8);
      if (lStack_1f0 != 0) {
        FUN_140021284();
      }
      if (local_1f8 != 0) {
        FUN_140021284();
      }
      if (lStack_200 != 0) {
        FUN_140021284();
      }
      if (local_208 != 0) {
        FUN_140021284();
      }
      local_70 = 0;
    }
    else {
      local_2d0 = 0;
      uStack_2c8 = 0;
      local_310 = local_528;
      uStack_308 = uStack_520;
      local_300 = (undefined4)local_518;
      uStack_2fc = local_518._4_4_;
      uStack_2f8 = (undefined4)uStack_510;
      uStack_2f4 = uStack_510._4_4_;
      local_2f0 = (undefined4)local_508;
      uStack_2ec = local_508._4_4_;
      uStack_2e8 = (undefined4)uStack_500;
      uStack_2e4 = uStack_500._4_4_;
      local_2e0 = (undefined4)local_4f8;
      uStack_2dc = local_4f8._4_4_;
      uStack_2d8 = (undefined4)uStack_4f0;
      uStack_2d4 = uStack_4f0._4_4_;
      local_2c0 = (undefined4)local_4e8;
      uStack_2bc = local_4e8._4_4_;
      uStack_2b8 = (undefined4)uStack_4e0;
      uStack_2b4 = uStack_4e0._4_4_;
      FUN_145734aa6(&local_310,&local_238);
      FUN_1457347b6(&local_b0,&local_238);
      if (local_208 != 0) {
        FUN_1400020a8();
      }
      local_70 = local_70 & 0x80000000;
    }
    local_190[0] = 0x100;
    local_70 = uVar18 & 0x7fffffff | local_70;
    uStack_68 = *param_4;
    if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
       (DAT_14cafb358 == 2)) {
      bVar19 = (**(code **)(*param_3 + 0x400))(param_3);
      local_70 = local_70 & 0x7fffffff | (uint)bVar19 << 0x1f;
      FUN_1406918b2();
    }
    iVar1 = (int)param_6[1];
    *(uint *)(param_6 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_6 + 0xc) < iVar1 + 1U) {
      FUN_14069191a(param_6,iVar1);
    }
    lVar10 = *param_6;
    _Dst = (void *)(lVar10 + (longlong)iVar1 * 0x130);
    memcpy(_Dst,local_190,0xe0);
    *(undefined8 *)(lVar10 + 0x110 + (longlong)iVar1 * 0x130) = 0;
    if (local_80 == 0) {
      *(undefined8 *)((longlong)_Dst + 0x100) = local_90;
      *(undefined8 *)((longlong)_Dst + 0x108) = uStack_88;
      *(undefined8 *)((longlong)_Dst + 0xf0) = local_a0;
      *(undefined8 *)((longlong)_Dst + 0xf8) = uStack_98;
      *(undefined8 *)((longlong)_Dst + 0xe0) = local_b0;
      *(undefined8 *)((longlong)_Dst + 0xe8) = uStack_a8;
    }
    *(longlong *)((longlong)_Dst + 0x110) = local_80;
    local_80 = 0;
    *(undefined4 *)((longlong)_Dst + 0x118) = (undefined4)local_78;
    *(undefined4 *)((longlong)_Dst + 0x11c) = local_78._4_4_;
    local_78 = 0x300000000;
    *(uint *)((longlong)_Dst + 0x120) = local_70;
    *(undefined4 *)((longlong)_Dst + 0x124) = uStack_6c;
    *(undefined4 *)((longlong)_Dst + 0x128) = (undefined4)uStack_68;
    *(undefined4 *)((longlong)_Dst + 300) = uStack_68._4_4_;
  }
LAB_14150ca22:
  if ((local_60 ^ (ulonglong)auStack_578) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14150d568 FUN_14150d568 body=150 status=ok
// SIG undefined FUN_14150d568(void)

byte FUN_14150d568(ulonglong *param_1)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  DWORD DVar4;
  DWORD DVar5;
  ulonglong uVar6;
  
  lVar2 = DAT_14ca4b298;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar6 = 0;
  }
  else if (iVar1 == 1) {
    DVar4 = FUN_140ad26c0();
    DVar5 = GetCurrentThreadId();
    uVar6 = (ulonglong)(DVar4 != DVar5);
  }
  else {
    uVar6 = 1;
  }
  iVar1 = *(int *)(lVar2 + uVar6 * 4);
  bVar3 = 10;
  if (iVar1 != 3) {
    bVar3 = (4 < iVar1) << 3 | 2;
  }
  *param_1 = DAT_14ca4ae38 | 9;
  return bVar3;
}



// FUNCTION 14150d5fe FUN_14150d5fe body=232 status=ok
// SIG undefined FUN_14150d5fe(void)

undefined8 * FUN_14150d5fe(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446f470e(local_48,L"FGbxTerritoryAreaDataCache::AABBTree",1);
  param_1[1] = 0;
  *param_1 = &PTR_LAB_14a1e3c98;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_1446f470e(local_48,L"FGbxTerritoryAreaDataCache::ExclusionAABBTree",1);
  param_1[8] = 0;
  param_1[7] = &PTR_LAB_14a1e3c98;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x15) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar1;
  *(undefined4 *)(param_1 + 0x16) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xb4) = uVar3;
  param_1[0x17] = DAT_14c8464f0;
  param_1[0x18] = 0x7f7fffff00000000;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14150d6e8 FUN_14150d6e8 body=340 status=ok
// SIG undefined FUN_14150d6e8(void)

void FUN_14150d6e8(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  void *_Src;
  char cVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined1 auStack_78 [36];
  undefined1 local_54 [4];
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(uint *)(param_2 + 0x20);
  if (*(int *)(param_1 + 6) != *(int *)((longlong)param_1 + 0x5c)) {
    puVar3 = param_1 + 0xc;
    if ((undefined8 *)param_1[0xd] != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)param_1[0xd];
    }
    iVar4 = *(int *)((longlong)puVar3 + (ulonglong)(*(int *)(param_1 + 0xe) - 1U & uVar1) * 4);
    if (iVar4 != -1) {
      lVar6 = param_1[5];
      do {
        if (*(uint *)(lVar6 + (longlong)iVar4 * 0xc) == uVar1) goto LAB_14150d7ac;
        iVar4 = *(int *)(lVar6 + (longlong)iVar4 * 0xc + 4);
      } while (iVar4 != -1);
    }
  }
  if (uVar1 == 0xffffffff) {
    local_50 = (void *)0x0;
    local_48 = *(int *)(param_1 + 1);
    lVar6 = (longlong)local_48;
    _Src = (void *)*param_1;
    if (lVar6 == 0) {
      local_44 = 0;
    }
    else {
      FUN_1446dd670(&local_50,local_48,0);
      memcpy(local_50,_Src,lVar6 * 2);
    }
  }
  else {
    if (*(int *)(param_1 + 1) == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*param_1;
    }
    FUN_140002266(&local_50,L"%s_Chunk%d",puVar5);
  }
  cVar2 = FUN_14150d83e(param_1,param_3,&local_50);
  if (cVar2 != '\0') {
    FUN_1447cbafe(param_1 + 5,local_54,param_2 + 0x20,0);
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_14150d7ac:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14150d83e FUN_14150d83e body=2637 status=ok
// SIG undefined FUN_14150d83e(void)

ulonglong FUN_14150d83e(longlong param_1,void **param_2,undefined8 *param_3)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  void *pvVar4;
  ulonglong *puVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  int iVar16;
  longlong *unaff_RDI;
  ulonglong uVar17;
  undefined2 *puVar18;
  int iVar19;
  longlong lVar20;
  PSRWLOCK SRWLock;
  longlong lVar21;
  longlong lVar22;
  bool bVar23;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  PSRWLOCK local_f8;
  longlong local_f0;
  longlong *local_e8;
  int local_e0;
  int local_dc;
  longlong local_d8;
  int local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  int local_a0;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  int local_80;
  int local_7c;
  longlong *local_78;
  undefined8 uStack_70;
  undefined1 local_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  SRWLock = (PSRWLOCK)(param_1 + 0x78);
  AcquireSRWLockExclusive(SRWLock);
  iVar19 = *(int *)(param_1 + 0x88);
  if ((longlong)iVar19 != 0) {
    unaff_RDI = *(longlong **)(param_1 + 0x80);
    lVar21 = 0;
    do {
      cVar6 = FUN_14323393c(*(undefined8 *)((longlong)unaff_RDI + lVar21),param_2,param_3);
      if (cVar6 != '\0') {
        uVar17 = 0;
        goto LAB_14150e057;
      }
      lVar21 = lVar21 + 8;
    } while ((longlong)iVar19 * 8 != lVar21);
  }
  local_f8 = SRWLock;
  ReleaseSRWLockExclusive(SRWLock);
  plVar15 = (longlong *)(ulonglong)*(ushort *)(param_1 + 0x10);
  lVar21 = (longlong)plVar15 * 0x3c;
  local_b8 = (void *)0x0;
  uStack_b0 = 0;
  local_f0 = param_1;
  if (*(longlong *)(&DAT_14ca814b0 + lVar21) == DAT_14ca838f8) {
    local_108 = param_3;
    (**(code **)(*DAT_14ca83900 + 0xb0))
              (DAT_14ca83900,&local_78,*(ushort *)(param_1 + 0x10),param_2);
    plVar10 = local_78;
    if (&local_b8 != param_2) {
      uVar9 = *(uint *)(param_2 + 1);
      pvVar4 = *param_2;
      uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar9);
      if (uVar9 == 0 && uStack_b0._4_4_ == 0) {
        uStack_b0 = (ulonglong)uVar9;
      }
      else {
        FUN_1446dd670(&local_b8,uVar9);
        if (uVar9 != 0) {
          memcpy(local_b8,pvVar4,(longlong)(int)uVar9 * 2);
        }
      }
    }
    unaff_RDI = plVar15;
    if (plVar10 == (longlong *)0x0) goto LAB_14150d990;
LAB_14150de44:
    puVar12 = (undefined8 *)FUN_14001cc68(0xb30,0x10);
    FUN_143235256(puVar12);
    plVar14 = (longlong *)*puVar12;
    if (plVar14 != plVar10) {
      *puVar12 = plVar10;
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        puVar2 = (uint *)(plVar14 + 1);
        uVar9 = *puVar2;
        *puVar2 = *puVar2 - 1;
        UNLOCK();
        if ((uVar9 & 0x3fffffff) == 1) {
          puVar2 = (uint *)(plVar14 + 1);
          LOCK();
          uVar9 = *puVar2;
          *puVar2 = *puVar2 | 0x40000000;
          UNLOCK();
          if ((uVar9 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)((longlong)plVar14 + 0xd);
            plVar15 = (longlong *)CONCAT71((int7)((ulonglong)plVar15 >> 8),bVar3);
            plVar13 = (longlong *)FUN_14001cc68(0x10,8);
            plVar13[1] = (longlong)plVar14;
            plVar14 = DAT_14ca843c0;
            plVar11 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar13 = (longlong)plVar14;
                LOCK();
                bVar23 = plVar14 != DAT_14ca843c0;
                plVar11 = plVar13;
                if (bVar23) {
                  plVar14 = DAT_14ca843c0;
                  plVar11 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar11;
                UNLOCK();
              } while (bVar23);
            }
            else {
              do {
                *plVar13 = (longlong)plVar11;
                LOCK();
                bVar23 = plVar11 != DAT_14ca843c8;
                plVar14 = plVar13;
                if (bVar23) {
                  plVar11 = DAT_14ca843c8;
                  plVar14 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar14;
                UNLOCK();
              } while (bVar23);
            }
          }
        }
      }
    }
    iVar19 = (int)uStack_b0 + -1;
    if ((int)uStack_b0 == 0) {
      iVar19 = 0;
    }
    FUN_1402980a2(puVar12 + 0x164,local_b8,iVar19);
    uVar9 = (**(code **)(*plVar10 + 0x10))(plVar10);
    iVar19 = *(int *)(puVar12 + 0x142);
    *(uint *)(puVar12 + 0x142) = uVar9 + iVar19;
    if ((uint)(*(int *)((longlong)puVar12 + 0xa14) - iVar19) < uVar9) {
      FUN_146320c34(puVar12 + 0x141);
    }
    bVar23 = false;
    memset((void *)((longlong)iVar19 * 8 + puVar12[0x141]),0,(longlong)(int)uVar9 << 3);
    unaff_RDI = plVar15;
  }
  else {
LAB_14150d990:
    cVar6 = FUN_1415c28c2();
    if (cVar6 != '\0') {
      plVar10 = (longlong *)FUN_14322836c(plVar15,param_3,DAT_14c844ed8);
      uVar9 = uStack_b0._4_4_;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
        uStack_b0 = (ulonglong)uStack_b0._4_4_ << 0x20;
        plVar15 = unaff_RDI;
        if (uVar9 != 0) {
          FUN_1446f8c06(&local_b8,0);
        }
        goto LAB_14150de44;
      }
      uStack_b0 = (ulonglong)uStack_b0._4_4_ << 0x20;
      if (uVar9 != 0) {
        FUN_1446f8c06(&local_b8,0);
      }
    }
    cVar6 = FUN_14179071c();
    if ((cVar6 != '\0') || (cVar6 = FUN_1415c28c2(), cVar6 == '\0')) {
      local_c0 = *(undefined8 *)(&DAT_14ca814a0 + lVar21);
      local_c8 = *(undefined8 *)(&DAT_14ca814bc + lVar21);
      FUN_1400021e4(&local_c0,&local_78);
      FUN_1400021e4(&local_c8);
      iVar19 = (int)local_90;
      iVar7 = ((int)local_90 == 0) + 1;
      local_88 = local_98;
      local_98 = (void *)0x0;
      local_80 = (int)local_90;
      iVar8 = local_90._4_4_;
      local_7c = local_90._4_4_;
      local_90 = 0;
      iVar16 = iVar7 + iVar19;
      if (iVar16 < iVar19) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar7);
      }
      if (iVar16 < 0) {
LAB_14150e1bd:
        local_98 = (void *)0x0;
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar16);
      }
      if (iVar8 < iVar16) {
        FUN_1446f8c06(&local_88);
      }
      FUN_1400020e8(&local_88,&DAT_149e1419a,1);
      FUN_1401c7f3e(&local_d8,&local_88,&local_78);
      if (local_88 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_98 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_78 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      iVar19 = local_d0 + -1;
      if (local_d0 == 0) {
        iVar19 = 0;
      }
      FUN_1446f82e2(local_68,iVar19,local_d8,1);
      FUN_1400021e4(local_68,&local_88);
      if (*(int *)(param_3 + 1) == 0) {
        puVar18 = &DAT_149dfb77a;
      }
      else {
        puVar18 = (undefined2 *)*param_3;
      }
      FUN_140002266(&local_a8,L"ShaderArchive-%s-",puVar18);
      iVar19 = local_a0 + -1;
      if (local_a0 == 0) {
        iVar19 = 0;
      }
      uVar9 = *(uint *)(param_2 + 1);
      iVar8 = iVar19 + 1 + (uint)((longlong)(int)uVar9 == 0);
      local_98 = (void *)0x0;
      pvVar4 = *param_2;
      local_90 = CONCAT44(local_90._4_4_,uVar9);
      if (iVar8 == 0 && uVar9 == 0) {
        local_90 = (ulonglong)uVar9;
      }
      else {
        iVar16 = iVar8 + uVar9;
        if (iVar8 < 0) goto LAB_14150e1bd;
        FUN_1446dd670(&local_98,iVar16,0);
        if (uVar9 != 0) {
          memcpy(local_98,pvVar4,(longlong)(int)uVar9 * 2);
        }
      }
      FUN_1401aebe8(&local_98,local_a8,iVar19);
      FUN_1401c7f3e(&local_78,&local_98,&local_88);
      pvVar4 = DAT_14ca9a470;
      local_e0 = (int)uStack_70;
      if ((int)uStack_70 < 2) {
        local_e8 = (longlong *)0x0;
        lVar21 = (longlong)DAT_14ca9a478;
        local_e0 = DAT_14ca9a478;
        if (lVar21 == 0) {
          local_dc = 0;
        }
        else {
          FUN_1446dd670(&local_e8,DAT_14ca9a478,0);
          memcpy(local_e8,pvVar4,lVar21 * 2);
        }
      }
      else {
        iVar19 = DAT_14ca9a478 + -1;
        if (DAT_14ca9a478 == 0) {
          iVar19 = 0;
        }
        local_e8 = local_78;
        local_dc = uStack_70._4_4_;
        local_78 = (longlong *)0x0;
        uStack_70 = 0;
        if (iVar19 + local_e0 < local_e0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4((longlong)iVar19);
        }
        if (local_dc < iVar19 + local_e0) {
          FUN_1446f8c06(&local_e8);
        }
        FUN_1400020e8(&local_e8,DAT_14ca9a470,iVar19);
      }
      if (local_78 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_98 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      if (local_88 != (void *)0x0) {
        FUN_1400020a8();
      }
      plVar14 = local_e8;
      if (local_e0 == 0) {
        plVar14 = (longlong *)&DAT_149dfb77a;
      }
      plVar11 = (longlong *)FUN_14054d1d4();
      plVar10 = (longlong *)0x0;
      plVar14 = (longlong *)(**(code **)(*plVar11 + 0x18))(plVar11,plVar14,0);
      if (plVar14 != (longlong *)0x0) {
        uVar17 = (ulonglong)local_88 >> 0x20;
        local_88 = (void *)((ulonglong)local_88 & 0xffffffff00000000);
        puVar5 = (ulonglong *)plVar14[1];
        piVar1 = (int *)*puVar5 + 1;
        if ((int *)puVar5[1] < piVar1) {
          if ((*(byte *)((longlong)plVar14 + 0x2a) & 2) == 0) {
            (**(code **)(*plVar14 + 0x170))(plVar14,&local_88,4);
          }
          else {
            FUN_14572512c(plVar14,&local_88);
          }
          iVar19 = (int)local_88;
        }
        else {
          iVar19 = *(int *)*puVar5;
          local_88 = (void *)CONCAT44((int)uVar17,iVar19);
          *puVar5 = (ulonglong)piVar1;
        }
        if ((iVar19 == 2) &&
           (local_108 = param_3,
           plVar10 = (longlong *)FUN_1432272d8(plVar15,plVar14,&local_e8,param_2),
           plVar10 != (longlong *)0x0)) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
          if (&local_b8 != param_2) {
            uVar9 = *(uint *)(param_2 + 1);
            pvVar4 = *param_2;
            uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar9);
            if (uVar9 == 0 && uStack_b0._4_4_ == 0) {
              uStack_b0 = (ulonglong)uVar9;
            }
            else {
              FUN_1446dd670(&local_b8,uVar9);
              if (uVar9 != 0) {
                memcpy(local_b8,pvVar4,(longlong)(int)uVar9 * 2);
              }
            }
          }
          if (DAT_14c846b14 == '\0') {
            FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                          L"Attempting to get the command line but it hasn\'t been initialized yet."
                         );
          }
          cVar6 = FUN_14054d46e(&DAT_14c846b20,L"ShaderCodeLibrarySeparateLoadingCache");
          if ((cVar6 != '\0') || (DAT_14ca9a4e0 != 0)) {
            local_78 = (longlong *)0x0;
            uStack_70 = 1;
            FUN_14626976c(&local_78,0);
            plVar11 = local_78;
            *local_78 = 0;
            local_78[1] = 0;
            iVar19 = (int)local_78[1];
            *(uint *)(local_78 + 1) = iVar19 + 1U;
            if (*(uint *)((longlong)local_78 + 0xc) < iVar19 + 1U) {
              FUN_1447a1bd6(local_78,iVar19);
            }
            plVar15 = local_e8;
            lVar21 = *plVar11;
            lVar22 = (longlong)iVar19 * 0x10;
            puVar12 = (undefined8 *)(lVar21 + lVar22);
            *(undefined8 *)(lVar21 + lVar22) = 0;
            lVar20 = (longlong)local_e0;
            *(int *)(lVar21 + 8 + lVar22) = local_e0;
            if (lVar20 == 0) {
              *(undefined4 *)((longlong)puVar12 + 0xc) = 0;
            }
            else {
              FUN_1446dd670(puVar12,local_e0,0);
              memcpy((void *)*puVar12,plVar15,lVar20 * 2);
            }
            plVar13 = (longlong *)FUN_1400dbadc();
            plVar11 = (longlong *)*plVar13;
            if (plVar11 == (longlong *)0x0) {
              plVar11 = (longlong *)FUN_140e92164();
              *plVar13 = (longlong)plVar11;
            }
            (**(code **)(*plVar11 + 0x38))(plVar11,&local_78);
            FUN_1417024e3(local_78,uStack_70 & 0xffffffff);
            if (local_78 != (longlong *)0x0) {
              FUN_1400020a8();
            }
          }
        }
        else {
          plVar10 = (longlong *)0x0;
        }
        (**(code **)*plVar14)(plVar14,1);
      }
      if (local_e8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_d8 != 0) {
        FUN_1400020a8();
      }
      unaff_RDI = plVar15;
      if (plVar10 != (longlong *)0x0) goto LAB_14150de44;
    }
    bVar23 = true;
    plVar10 = (longlong *)0x0;
    puVar12 = (undefined8 *)0x0;
  }
  if (local_b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  lVar21 = local_f0;
  if (!bVar23) {
    LOCK();
    puVar2 = (uint *)(plVar10 + 1);
    uVar9 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar9 & 0x3fffffff) == 1) {
      puVar2 = (uint *)(plVar10 + 1);
      LOCK();
      uVar9 = *puVar2;
      *puVar2 = *puVar2 | 0x40000000;
      UNLOCK();
      if ((uVar9 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)((longlong)plVar10 + 0xd);
        plVar14 = (longlong *)FUN_14001cc68(0x10,8);
        plVar14[1] = (longlong)plVar10;
        plVar15 = DAT_14ca843c0;
        plVar10 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar14 = (longlong)plVar15;
            LOCK();
            bVar23 = plVar15 != DAT_14ca843c0;
            plVar10 = plVar14;
            if (bVar23) {
              plVar15 = DAT_14ca843c0;
              plVar10 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar10;
            UNLOCK();
          } while (bVar23);
        }
        else {
          do {
            *plVar14 = (longlong)plVar10;
            LOCK();
            bVar23 = plVar10 != DAT_14ca843c8;
            plVar15 = plVar14;
            if (bVar23) {
              plVar10 = DAT_14ca843c8;
              plVar15 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar15;
            UNLOCK();
          } while (bVar23);
        }
      }
    }
  }
  if (puVar12 == (undefined8 *)0x0) {
    uVar17 = 0;
  }
  else {
    AcquireSRWLockExclusive(local_f8);
    iVar19 = *(int *)(lVar21 + 0x88);
    if ((longlong)iVar19 != 0) {
      unaff_RDI = *(longlong **)(lVar21 + 0x80);
      lVar20 = 0;
      do {
        cVar6 = FUN_14323393c(*(undefined8 *)((longlong)unaff_RDI + lVar20),param_2,param_3);
        if (cVar6 != '\0') {
          FUN_14120f1d0(puVar12);
          FUN_1400020a8(puVar12);
          uVar17 = 0;
          SRWLock = local_f8;
          goto LAB_14150e057;
        }
        lVar20 = lVar20 + 8;
      } while ((longlong)iVar19 * 8 != lVar20);
    }
    (**(code **)(*(longlong *)*puVar12 + 8))();
    iVar19 = *(int *)(lVar21 + 0x88);
    *(uint *)(lVar21 + 0x88) = iVar19 + 1U;
    if (*(uint *)(lVar21 + 0x8c) < iVar19 + 1U) {
      FUN_146320cf8((longlong *)(lVar21 + 0x80),iVar19);
    }
    *(undefined8 **)(*(longlong *)(lVar21 + 0x80) + (longlong)iVar19 * 8) = puVar12;
    uVar17 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    SRWLock = local_f8;
LAB_14150e057:
    ReleaseSRWLockExclusive(SRWLock);
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar17 & 0xffffffff;
}



// FUNCTION 14150e28c FUN_14150e28c body=422 status=ok
// SIG undefined FUN_14150e28c(void)

void FUN_14150e28c(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
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
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar6 = (longlong)iVar4 * 0x20;
        uVar8 = (int)param_1[9] - 1U & (uint)*(byte *)(lVar2 + lVar6);
        *(uint *)(lVar2 + 0x1c + lVar6) = uVar8;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4) = iVar4;
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



// FUNCTION 14150e434 FUN_14150e434 body=852 status=ok
// SIG undefined FUN_14150e434(void)

void FUN_14150e434(short *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  short *psVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined1 auStack_138 [32];
  longlong local_118;
  char local_109;
  int local_108;
  int local_104;
  short *local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  longlong local_d0;
  longlong *local_c8;
  int local_c0;
  longlong local_b8;
  longlong *local_b0;
  int local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88;
  longlong *local_80;
  undefined8 local_78;
  int local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (((*param_1 != -1) && (param_1[1] != -1)) && (param_1[3] != -1)) {
    local_e8 = *(undefined8 *)(param_2 + 0x248);
    local_109 = *(char *)(param_2 + 0x270);
    FUN_14150e78a(&local_60);
    iVar2 = *(int *)(param_2 + 0x10);
    psVar6 = param_1;
    uVar7 = param_4;
    if (local_50 != *(int *)(param_2 + 0x10)) {
      do {
        local_f8 = uVar7;
        local_100 = psVar6;
        local_108 = iVar2;
        psVar6 = local_100;
        lVar14 = *(longlong *)(*(longlong *)(local_58 + 0x60) + (longlong)local_50 * 8);
        if (local_109 == '\0') {
          *(undefined4 *)(lVar14 + 0x14) = 0;
          local_f0 = lVar14;
        }
        else {
          local_f0 = 0;
        }
        if (*(ushort *)(lVar14 + 0xc) != 0) {
          plVar15 = *(longlong **)(lVar14 + 0x28);
          lVar8 = (ulonglong)*(ushort *)(lVar14 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar15 + 0x1e) == local_100[3]) goto LAB_14150e524;
            plVar15 = plVar15 + 4;
            lVar8 = lVar8 + -0x20;
          } while (lVar8 != 0);
        }
        plVar15 = (longlong *)0x0;
LAB_14150e524:
        iVar2 = *(int *)(lVar14 + 0x14);
        if (iVar2 == 1) {
          AcquireSRWLockExclusive((PSRWLOCK)(plVar15 + 1));
        }
        LOCK();
        *(int *)(plVar15 + 3) = (int)plVar15[3] + 1;
        UNLOCK();
        lVar8 = *plVar15;
        FUN_140b325e4(lVar14,&local_e0,psVar6[2]);
        if (*(ushort *)(lVar14 + 0xc) != 0) {
          plVar11 = *(longlong **)(lVar14 + 0x28);
          lVar9 = (ulonglong)*(ushort *)(lVar14 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar11 + 0x1e) == psVar6[1]) goto LAB_14150e57d;
            plVar11 = plVar11 + 4;
            lVar9 = lVar9 + -0x20;
          } while (lVar9 != 0);
        }
        plVar11 = (longlong *)0x0;
LAB_14150e57d:
        iVar3 = *(int *)(lVar14 + 0x14);
        if (iVar3 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar11 + 1));
        }
        LOCK();
        *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
        UNLOCK();
        lVar9 = *plVar11;
        if (*(ushort *)(lVar14 + 0xc) != 0) {
          plVar13 = *(longlong **)(lVar14 + 0x28);
          lVar10 = (ulonglong)*(ushort *)(lVar14 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar13 + 0x1e) == *psVar6) goto LAB_14150e5c6;
            plVar13 = plVar13 + 4;
            lVar10 = lVar10 + -0x20;
          } while (lVar10 != 0);
        }
        plVar13 = (longlong *)0x0;
LAB_14150e5c6:
        iVar4 = *(int *)(lVar14 + 0x14);
        local_104 = iVar2;
        if (iVar4 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar13 + 1));
        }
        lVar5 = local_d0;
        uVar7 = local_f8;
        LOCK();
        *(int *)(plVar13 + 3) = (int)plVar13[3] + 1;
        UNLOCK();
        lVar10 = *plVar13;
        local_98 = local_e0;
        local_90 = local_d8;
        local_88 = local_d0;
        local_78 = local_e8;
        local_70 = local_104;
        uVar1 = *(ushort *)(lVar14 + 0xe);
        local_c8 = plVar13;
        local_c0 = iVar4;
        local_b8 = lVar10;
        local_b0 = plVar11;
        local_a8 = iVar3;
        local_a0 = lVar9;
        local_80 = plVar15;
        local_68 = lVar8;
        if (uVar1 != 0) {
          uVar12 = 0;
          do {
            lVar14 = lVar5 + uVar12;
            if (lVar5 == 0) {
              lVar14 = 0;
            }
            local_118 = lVar8;
            FUN_145c708a0(uVar7,*(undefined8 *)(lVar10 + uVar12 * 4),lVar9,lVar14);
            uVar12 = uVar12 + 2;
            lVar9 = lVar9 + 0x14;
            lVar8 = lVar8 + 0x10;
          } while ((uint)uVar1 * 2 != uVar12);
        }
        FUN_145c707ec(&local_c8);
        if (local_f0 != 0) {
          *(undefined4 *)(local_f0 + 0x14) = 1;
        }
        local_50 = FUN_1403b8464(&local_60);
        iVar2 = local_108;
        psVar6 = local_100;
        uVar7 = local_f8;
      } while (local_50 != local_108);
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
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14150e78a FUN_14150e78a body=61 status=ok
// SIG undefined FUN_14150e78a(void)

undefined8 * FUN_14150e78a(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  *param_1 = param_3;
  param_1[1] = param_2;
  if (*(char *)(param_2 + 0x270) == '\0') {
    *(int *)(param_2 + 0x264) = *(int *)(param_2 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(param_2 + 0x264) = *(int *)(param_2 + 0x264) + 1;
    UNLOCK();
  }
  uVar1 = FUN_1403b8464(param_1,0);
  *(undefined4 *)(param_1 + 2) = uVar1;
  return param_1;
}



// FUNCTION 14150e7c8 FUN_14150e7c8 body=655 status=ok
// SIG undefined FUN_14150e7c8(void)

void FUN_14150e7c8(undefined1 *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  int *piVar12;
  longlong *plVar13;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar7 = *(longlong *)(param_1 + 0x20);
  if (lVar7 == 0) {
    uVar8 = FUN_140c52150();
    lVar7 = FUN_14477b664(uVar8);
    *(longlong *)(param_1 + 0x20) = lVar7;
  }
  lVar9 = *(longlong *)(param_1 + 0x28);
  if (((lVar9 != 0) || (lVar9 = 0, lVar7 == 0)) || (*(longlong *)(param_1 + 0x18) == 0))
  goto LAB_14150e80f;
  plVar2 = *(longlong **)(lVar7 + 0xb8);
  if (plVar2 == (longlong *)0x0) {
LAB_14150ea54:
    lVar9 = 0;
  }
  else {
    cVar6 = (**(code **)(*plVar2 + 0x108))(plVar2);
    if (cVar6 == '\0') goto LAB_14150ea54;
    uVar8 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar9 = FUN_144aff482(uVar8,param_1 + 0x18);
  }
  *(longlong *)(param_1 + 0x28) = lVar9;
LAB_14150e80f:
  if ((longlong)*(int *)(lVar9 + 0x20) == 0) {
    lVar7 = 0;
    uVar10 = 0;
  }
  else {
    plVar13 = *(longlong **)(lVar9 + 0x18);
    plVar2 = plVar13 + (longlong)*(int *)(lVar9 + 0x20) * 3;
    iVar11 = 0;
    local_60 = (longlong *)(param_1 + 0x30);
    do {
      if ((longlong *)*plVar13 != (longlong *)0x0) {
        bVar4 = (**(code **)(*(longlong *)*plVar13 + 0x40))();
        bVar5 = (**(code **)(*(longlong *)*plVar13 + 0x38))((longlong *)*plVar13,param_2);
        if ((longlong)*(int *)(param_2 + 0x30) != 0) {
          piVar12 = *(int **)(param_2 + 0x28);
          lVar7 = (longlong)*(int *)(param_2 + 0x30) * 0x18;
          do {
            if (*piVar12 == iVar11) {
              if ((bVar4 == 1 && piVar12 != (int *)0x0) && (piVar12[4] != 0)) {
                iVar1 = *(int *)(param_1 + 0x38);
                *(uint *)(param_1 + 0x38) = iVar1 + 1U;
                if (*(uint *)(param_1 + 0x3c) < iVar1 + 1U) {
                  FUN_145c70f7e(local_60,iVar1);
                }
                FUN_145c70f24((longlong)iVar1 * 0x18 + *local_60,iVar11,piVar12 + 2);
                goto LAB_14150e89c;
              }
              break;
            }
            piVar12 = piVar12 + 6;
            lVar7 = lVar7 + -0x18;
          } while (lVar7 != 0);
        }
        (**(code **)(*(longlong *)*plVar13 + 0x48))((longlong *)*plVar13,param_2,&local_58);
        if ((int)uStack_50 == 0) {
          if ((bVar5 & (bVar4 ^ 1)) != 1) goto LAB_14150e89f;
        }
        else {
          iVar1 = *(int *)(param_1 + 0x38);
          *(uint *)(param_1 + 0x38) = iVar1 + 1U;
          if (*(uint *)(param_1 + 0x3c) < iVar1 + 1U) {
            FUN_145c70f7e(local_60,iVar1);
          }
          FUN_145c70f24((longlong)iVar1 * 0x18 + *local_60,iVar11,&local_58);
          uVar3 = uStack_50;
          FUN_1447a1747(local_58,uStack_50 & 0xffffffff);
          uVar10 = uStack_50 >> 0x20;
          uStack_50 = uStack_50 & 0xffffffff00000000;
          if (((longlong)uVar3 < 0) && ((int)uVar10 != 0)) {
            FUN_1408be2c4(&local_58,0);
          }
        }
LAB_14150e89c:
        *param_1 = 1;
      }
LAB_14150e89f:
      iVar11 = iVar11 + 1;
      plVar13 = plVar13 + 3;
    } while (plVar13 != plVar2);
    uVar10 = uStack_50 & 0xffffffff;
    lVar7 = local_58;
  }
  FUN_1447a1747(lVar7,uVar10);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14150ea58 FUN_14150ea58 body=538 status=ok
// SIG undefined FUN_14150ea58(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_14150ea58(longlong param_1,longlong *param_2)

{
  int *piVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  lVar3 = *(longlong *)(param_1 + 0x308);
  if (lVar3 != 0) goto LAB_14150ea76;
  plVar4 = (longlong *)FUN_14001cc68(0x98);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b9a00d0;
  memset(plVar4 + 2,0,0x88);
  *(undefined4 *)(plVar4 + 6) = 2;
  *(undefined8 *)((longlong)plVar4 + 0x34) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x3c) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x41) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x49) = 0;
  *(undefined1 *)((longlong)plVar4 + 0x91) = 0;
  plVar4[0xb] = 0;
  plVar4[0xc] = 0;
  plVar4[0xd] = 0;
  plVar4[0xe] = 0;
  plVar4[0xf] = 0;
  plVar4[0x10] = 0;
  *(undefined4 *)(plVar4 + 0x11) = 0;
  plVar6 = plVar4 + 2;
  if (plVar6 == (longlong *)0x0) {
    if (plVar4 == (longlong *)0x0) goto LAB_14150ebba;
LAB_14150eb3e:
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x308) = plVar6;
    plVar6 = *(longlong **)(param_1 + 0x310);
    if (plVar4 == plVar6) {
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
    else {
      *(longlong **)(param_1 + 0x310) = plVar4;
      if (plVar6 != (longlong *)0x0) {
        bVar2 = false;
        goto LAB_14150ec25;
      }
    }
LAB_14150eb69:
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
  else {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      plVar4[2] = (longlong)plVar6;
      if ((longlong *)plVar4[3] != plVar4) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        if ((longlong *)plVar4[3] != (longlong *)0x0) {
          plVar7 = plVar4 + 3;
          plVar5 = (longlong *)plVar4[3];
          goto LAB_14150eba2;
        }
        plVar4[3] = (longlong)plVar4;
      }
LAB_14150eb34:
      LOCK();
      plVar7 = plVar4 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      goto LAB_14150eb3e;
    }
    _DAT_00000010 = 0x10;
    plVar7 = (longlong *)&DAT_00000018;
    plVar5 = _DAT_00000018;
    if (_DAT_00000018 != (longlong *)0x0) {
LAB_14150eba2:
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      *plVar7 = (longlong)plVar4;
      if (plVar4 != (longlong *)0x0) goto LAB_14150eb34;
    }
LAB_14150ebba:
    *(longlong **)(param_1 + 0x308) = plVar6;
    plVar6 = *(longlong **)(param_1 + 0x310);
    if (plVar6 != (longlong *)0x0) {
      *(longlong **)(param_1 + 0x310) = plVar4;
      bVar2 = true;
LAB_14150ec25:
      LOCK();
      plVar7 = plVar6 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
      if (!bVar2) goto LAB_14150eb69;
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x308);
LAB_14150ea76:
  *param_2 = lVar3;
  lVar3 = *(longlong *)(param_1 + 0x310);
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 14150ec72 FUN_14150ec72 body=265 status=ok
// SIG undefined FUN_14150ec72(void)

undefined8 FUN_14150ec72(longlong param_1,uint param_2,undefined1 *param_3,char param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  
  uVar4 = (ulonglong)param_2 + 1;
  do {
    uVar2 = 1;
    if (uVar4 == 1) {
      return 1;
    }
    uVar8 = uVar4 - 1;
    pcVar1 = (char *)(param_1 + -2 + uVar4);
    uVar4 = uVar8;
  } while (*pcVar1 == '=');
  if (((uint)uVar8 & 3) == 1) {
LAB_14150ed72:
    uVar2 = 0;
  }
  else {
    puVar5 = &DAT_149e27230;
    if (param_4 == '\x01') {
      puVar5 = &DAT_149e271b0;
    }
    lVar9 = param_1;
    if (3 < uVar8) {
      do {
        param_1 = lVar9 + 4;
        lVar10 = 0;
        uVar11 = 0;
        do {
          if (((longlong)*(char *)(lVar9 + lVar10) < 0) ||
             ((byte)puVar5[*(char *)(lVar9 + lVar10)] == 0xff)) goto LAB_14150ed72;
          uVar6 = uVar11 << 6;
          uVar11 = (byte)puVar5[*(char *)(lVar9 + lVar10)] | uVar6;
          lVar10 = lVar10 + 1;
        } while ((int)lVar10 != 4);
        param_3[2] = (char)uVar11;
        param_3[1] = (char)(uVar6 >> 8);
        *param_3 = (char)(uVar6 >> 0x10);
        param_3 = param_3 + 3;
        uVar11 = (int)uVar8 - 4;
        uVar8 = (ulonglong)uVar11;
        lVar9 = param_1;
      } while (3 < uVar11);
    }
    iVar7 = (int)uVar8;
    if (iVar7 != 0) {
      lVar9 = 0;
      uVar11 = 0;
      do {
        if (((longlong)*(char *)(param_1 + lVar9) < 0) ||
           ((byte)puVar5[*(char *)(param_1 + lVar9)] == 0xff)) goto LAB_14150ed72;
        uVar11 = uVar11 << 6 | (uint)(byte)puVar5[*(char *)(param_1 + lVar9)];
        lVar9 = lVar9 + 1;
      } while (iVar7 != (int)lVar9);
      iVar3 = 4;
      do {
        uVar11 = uVar11 << 6;
        iVar3 = iVar3 + -1;
      } while (iVar7 != iVar3);
      if (iVar7 == 3) {
        param_3[1] = (char)(uVar11 >> 8);
      }
      *param_3 = (char)(uVar11 >> 0x10);
    }
  }
  return uVar2;
}



// FUNCTION 14150ed7c FUN_14150ed7c body=255 status=ok
// SIG undefined FUN_14150ed7c(void)

void FUN_14150ed7c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14150ee7c FUN_14150ee7c body=45 status=ok
// SIG undefined FUN_14150ee7c(void)

void FUN_14150ee7c(longlong *param_1,int param_2)

{
  if (param_2 != 0) {
    (**(code **)(*param_1 + 0x738))(param_1);
  }
  FUN_1403d8a98(param_1,param_2);
  return;
}



// FUNCTION 14150eeaa FUN_14150eeaa body=118 status=ok
// SIG undefined FUN_14150eeaa(void)

void FUN_14150eeaa(longlong param_1,ulonglong param_2,ulonglong param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  lVar1 = FUN_14001cc68((param_2 / param_3) * param_3,param_4);
  *(longlong *)(param_1 + 0x10) = lVar1;
  *(ulonglong *)(param_1 + 8) = param_3;
  if (param_3 <= param_2) {
    uVar3 = 0;
    do {
      puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      puVar2[1] = lVar1;
      *puVar2 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 **)(param_1 + 0x40) = puVar2;
      uVar3 = uVar3 + 1;
      lVar1 = lVar1 + param_3;
    } while (uVar3 < param_2 / param_3);
  }
  return;
}



// FUNCTION 14150ef20 FUN_14150ef20 body=404 status=ok
// SIG undefined FUN_14150ef20(void)

void FUN_14150ef20(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  local_40 = 0;
  if ((int)param_1[5] == 0) {
    uVar13 = 1;
    local_48._0_4_ = 0xffffffff;
    local_48._4_4_ = 0;
    local_58._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    uVar13 = local_58 >> 0x20;
  }
  plVar3 = local_50;
  iVar4 = (int)local_50[3];
  iVar12 = (int)local_58;
  uVar9 = (uint)local_48;
  iVar6 = local_48._4_4_;
  iVar10 = local_40;
  if (local_48._4_4_ < iVar4) {
    do {
      if (*(longlong *)(*param_1 + 8 + (longlong)iVar6 * 0x20) != 0) {
        FUN_1400020a8();
        iVar4 = (int)plVar3[3];
      }
      uVar9 = uVar9 & ~(uint)uVar13;
      plVar7 = (longlong *)plVar3[2];
      if ((longlong *)plVar3[2] == (longlong *)0x0) {
        plVar7 = plVar3;
      }
      lVar11 = (longlong)iVar12;
      uVar5 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar9;
      if (uVar5 == 0) {
        iVar6 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar6 = iVar4 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar2 = iVar6;
        if (iVar6 < iVar12) {
          iVar2 = iVar12;
        }
        if (iVar6 <= iVar12) break;
        lVar8 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar8 * 4 + lVar11 * 4 + 4);
          if (uVar5 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar2 - lVar11 == lVar8) goto LAB_14150f040;
        }
        iVar12 = iVar12 + (int)lVar8 + 1;
        uVar9 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar13 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar4);
  }
LAB_14150f040:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14150f0b6 FUN_14150f0b6 body=534 status=ok
// SIG undefined FUN_14150f0b6(void)

void FUN_14150f0b6(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar8 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar8 = (longlong *)param_1[8];
  }
  iVar5 = (int)param_1[9];
  iVar12 = iVar5 + 3;
  if (-1 < iVar5) {
    iVar12 = iVar5;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar12 >> 2) {
    plVar1 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = plVar1;
    if ((int)param_1[5] == 0) {
      uVar10 = 1;
      local_58._0_4_ = 0xffffffff;
      iVar5 = 0;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar10 = local_68 >> 0x20;
      iVar5 = (int)param_1[5];
    }
    iVar15 = (int)local_68;
    uVar9 = (uint)local_58;
    iVar12 = local_58._4_4_;
    iVar7 = local_50;
    if (local_58._4_4_ != iVar5 || local_60 != plVar1) {
      do {
        *(undefined4 *)
         ((longlong)plVar8 + (longlong)*(int *)(*param_1 + 0x1c + (longlong)iVar12 * 0x20) * 4) =
             0xffffffff;
        uVar9 = ~(uint)uVar10 & uVar9;
        plVar14 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar14 = local_60;
        }
        iVar3 = (int)local_60[3];
        lVar6 = (longlong)iVar15;
        uVar11 = *(uint *)((longlong)plVar14 + lVar6 * 4) & uVar9;
        if (uVar11 == 0) {
          iVar12 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar12 = iVar3 + -1;
          }
          iVar12 = iVar12 >> 5;
          iVar7 = iVar7 + 0x20;
          iVar4 = iVar12;
          if (iVar12 < iVar15) {
            iVar4 = iVar15;
          }
          if (iVar15 < iVar12) {
            lVar13 = 0;
            do {
              uVar11 = *(uint *)((longlong)plVar14 + lVar13 * 4 + lVar6 * 4 + 4);
              if (uVar11 != 0) {
                iVar15 = iVar15 + (int)lVar13 + 1;
                uVar9 = 0xffffffff;
                goto LAB_14150f21e;
              }
              iVar7 = iVar7 + 0x20;
              lVar13 = lVar13 + 1;
            } while (iVar4 - lVar6 != lVar13);
            uVar9 = 0xffffffff;
            iVar15 = iVar4;
          }
          iVar15 = iVar15 + 1;
          iVar12 = iVar3;
        }
        else {
LAB_14150f21e:
          uVar10 = (ulonglong)(-uVar11 & uVar11);
          uVar2 = uVar10 * 2 + 1;
          lVar6 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          iVar12 = (iVar7 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar12) {
            iVar12 = iVar3;
          }
        }
      } while (iVar12 != iVar5 || local_60 != plVar1);
    }
  }
  else if (0 < iVar5) {
    lVar6 = 0;
    do {
      *(undefined4 *)((longlong)plVar8 + lVar6 * 4) = 0xffffffff;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_1[9]);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14150f2ce FUN_14150f2ce body=534 status=ok
// SIG undefined FUN_14150f2ce(void)

void FUN_14150f2ce(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar8 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar8 = (longlong *)param_1[8];
  }
  iVar5 = (int)param_1[9];
  iVar12 = iVar5 + 3;
  if (-1 < iVar5) {
    iVar12 = iVar5;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar12 >> 2) {
    plVar1 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = plVar1;
    if ((int)param_1[5] == 0) {
      uVar10 = 1;
      local_58._0_4_ = 0xffffffff;
      iVar5 = 0;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar10 = local_68 >> 0x20;
      iVar5 = (int)param_1[5];
    }
    iVar15 = (int)local_68;
    uVar9 = (uint)local_58;
    iVar12 = local_58._4_4_;
    iVar7 = local_50;
    if (local_58._4_4_ != iVar5 || local_60 != plVar1) {
      do {
        *(undefined4 *)
         ((longlong)plVar8 + (longlong)*(int *)(*param_1 + 0x14 + (longlong)iVar12 * 0x18) * 4) =
             0xffffffff;
        uVar9 = ~(uint)uVar10 & uVar9;
        plVar14 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar14 = local_60;
        }
        iVar3 = (int)local_60[3];
        lVar6 = (longlong)iVar15;
        uVar11 = *(uint *)((longlong)plVar14 + lVar6 * 4) & uVar9;
        if (uVar11 == 0) {
          iVar12 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar12 = iVar3 + -1;
          }
          iVar12 = iVar12 >> 5;
          iVar7 = iVar7 + 0x20;
          iVar4 = iVar12;
          if (iVar12 < iVar15) {
            iVar4 = iVar15;
          }
          if (iVar15 < iVar12) {
            lVar13 = 0;
            do {
              uVar11 = *(uint *)((longlong)plVar14 + lVar13 * 4 + lVar6 * 4 + 4);
              if (uVar11 != 0) {
                iVar15 = iVar15 + (int)lVar13 + 1;
                uVar9 = 0xffffffff;
                goto LAB_14150f436;
              }
              iVar7 = iVar7 + 0x20;
              lVar13 = lVar13 + 1;
            } while (iVar4 - lVar6 != lVar13);
            uVar9 = 0xffffffff;
            iVar15 = iVar4;
          }
          iVar15 = iVar15 + 1;
          iVar12 = iVar3;
        }
        else {
LAB_14150f436:
          uVar10 = (ulonglong)(-uVar11 & uVar11);
          uVar2 = uVar10 * 2 + 1;
          lVar6 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          iVar12 = (iVar7 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar12) {
            iVar12 = iVar3;
          }
        }
      } while (iVar12 != iVar5 || local_60 != plVar1);
    }
  }
  else if (0 < iVar5) {
    lVar6 = 0;
    do {
      *(undefined4 *)((longlong)plVar8 + lVar6 * 4) = 0xffffffff;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_1[9]);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14150f4e6 FUN_14150f4e6 body=164 status=ok
// SIG undefined FUN_14150f4e6(void)

void FUN_14150f4e6(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Constants";
  local_38 = 9;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Constants";
  local_38 = 9;
  FUN_140208c1e(&DAT_14caeac80,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14150f58b FUN_14150f58b body=97 status=ok
// SIG undefined FUN_14150f58b(void)

void FUN_14150f58b(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      plVar1[-2] = (longlong)&DAT_14a171d50;
      *(undefined4 *)(plVar1 + 1) = 0;
      if (*(int *)((longlong)plVar1 + 0xc) != 0) {
        FUN_140115c12(plVar1,0);
      }
      plVar1[-1] = 0;
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14150f5ec FUN_14150f5ec body=118 status=ok
// SIG undefined FUN_14150f5ec(void)

void FUN_14150f5ec(undefined8 *param_1,longlong param_2,int param_3)

{
  if (param_3 != 0) {
    param_2 = param_2 + 0x10;
    do {
      *param_1 = &DAT_14a171d50;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = *(undefined8 *)(param_2 + -8);
      FUN_1406022fe(param_1 + 2,param_2);
      *param_1 = &PTR_FUN_14b1828b0;
      param_2 = param_2 + 0x20;
      param_1 = param_1 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14150f662 FUN_14150f662 body=1395 status=ok
// SIG undefined FUN_14150f662(void)

void FUN_14150f662(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint *puVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  longlong *plVar8;
  bool bVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  int *piVar17;
  int iVar18;
  bool bVar19;
  undefined4 uVar20;
  longlong lVar21;
  bool bVar22;
  longlong *plVar23;
  
  puVar4 = *(undefined8 **)(param_2 + 8);
  if (puVar4 != (undefined8 *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x1b0) + 0x18));
    plVar8 = (longlong *)puVar4[2];
    if (plVar8 == (longlong *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x1b0) + 0x18));
    }
    else {
      bVar9 = true;
      do {
        while( true ) {
          lVar5 = plVar8[1];
          plVar8 = (longlong *)*plVar8;
          if (*(char *)(lVar5 + 0xc6) != '\0') break;
          if (*(int *)(lVar5 + 200) < 2) {
            plVar15 = (longlong *)(lVar5 + 0x40);
            if (*(longlong **)(lVar5 + 0x80) != (longlong *)0x0) {
              plVar15 = *(longlong **)(lVar5 + 0x80);
            }
            if ((longlong)*(int *)(lVar5 + 0x88) != 0) {
              plVar23 = plVar15 + *(int *)(lVar5 + 0x88);
              bVar22 = true;
LAB_14150f766:
              do {
                lVar12 = *plVar15;
                if (*(char *)(lVar12 + 0xe9) == '\0') {
                  puVar10 = (undefined8 *)(lVar12 + 0x58);
                  if (*(undefined8 **)(lVar12 + 0x98) != (undefined8 *)0x0) {
                    puVar10 = *(undefined8 **)(lVar12 + 0x98);
                  }
                  if ((longlong)*(int *)(lVar12 + 0xa0) != 0) {
                    puVar13 = puVar10 + (longlong)*(int *)(lVar12 + 0xa0) * 4;
                    bVar19 = true;
                    do {
                      while ((puVar10[3] != 0 && ((undefined8 *)*puVar10 != puVar4))) {
                        puVar10 = puVar10 + 4;
                        bVar19 = false;
                        bVar22 = false;
                        if (puVar10 == puVar13) {
                          plVar15 = plVar15 + 1;
                          bVar22 = false;
                          if (plVar15 == plVar23) goto LAB_14150f715;
                          goto LAB_14150f766;
                        }
                      }
                      puVar10[3] = 0;
                      puVar10 = puVar10 + 4;
                    } while (puVar10 != puVar13);
                    if (!bVar19) goto LAB_14150f773;
                  }
                  *(undefined1 *)(lVar12 + 0xe9) = 1;
                  if (*(int *)(param_1 + 0x1c0) != *(int *)(param_1 + 0x1ec)) {
                    lVar12 = *(longlong *)(lVar12 + 8);
                    lVar11 = *(longlong *)(param_1 + 0x1f8);
                    if (*(longlong *)(param_1 + 0x1f8) == 0) {
                      lVar11 = param_1 + 0x1f0;
                    }
                    plVar14 = (longlong *)
                              (lVar11 + ((longlong)
                                         ((int)((ulonglong)lVar12 >> 0x20) * 0x17 + (int)lVar12) &
                                        (longlong)*(int *)(param_1 + 0x200) - 1U) * 4);
                    do {
                      iVar3 = (int)*plVar14;
                      lVar11 = (longlong)iVar3;
                      if (lVar11 == -1) break;
                      lVar6 = *(longlong *)(param_1 + 0x1b8);
                      plVar1 = (longlong *)(lVar6 + lVar11 * 0x18);
                      lVar16 = *plVar1;
                      if (lVar16 == lVar12) {
                        lVar21 = *(longlong *)(param_1 + 0x1f8);
                        if (*(longlong *)(param_1 + 0x1f8) == 0) {
                          lVar21 = param_1 + 0x1f0;
                        }
                        iVar18 = *(int *)(lVar21 + (longlong)*(int *)((longlong)plVar1 + 0x14) * 4);
                        if (iVar18 == iVar3) {
                          piVar17 = (int *)(lVar21 + (longlong)*(int *)((longlong)plVar1 + 0x14) * 4
                                           );
                        }
                        else {
                          do {
                            piVar17 = (int *)(lVar6 + (longlong)iVar18 * 0x18 + 0x10);
                            iVar18 = *piVar17;
                          } while (iVar18 != iVar3);
                        }
                        *piVar17 = (int)plVar1[2];
                        lVar6 = *(longlong *)(param_1 + 0x1b8);
                        if (*(int *)(param_1 + 0x1ec) != 0) {
                          *(int *)(lVar6 + (longlong)*(int *)(param_1 + 0x1e8) * 0x18) = iVar3;
                        }
                        *(undefined4 *)(lVar6 + lVar11 * 0x18) = 0xffffffff;
                        if (*(int *)(param_1 + 0x1ec) < 1) {
                          uVar20 = 0xffffffff;
                        }
                        else {
                          uVar20 = *(undefined4 *)(param_1 + 0x1e8);
                        }
                        *(undefined4 *)(lVar6 + lVar11 * 0x18 + 4) = uVar20;
                        *(int *)(param_1 + 0x1e8) = iVar3;
                        *(int *)(param_1 + 0x1ec) = *(int *)(param_1 + 0x1ec) + 1;
                        lVar11 = *(longlong *)(param_1 + 0x1d8);
                        if (*(longlong *)(param_1 + 0x1d8) == 0) {
                          lVar11 = param_1 + 0x1c8;
                        }
                        iVar18 = iVar3 + 0x1f;
                        if (-1 < iVar3) {
                          iVar18 = iVar3;
                        }
                        bVar7 = (byte)iVar3 & 0x1f;
                        puVar2 = (uint *)(lVar11 + (longlong)(iVar18 >> 5) * 4);
                        *puVar2 = *puVar2 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
                      }
                      else {
                        plVar14 = plVar1 + 2;
                      }
                    } while (lVar16 != lVar12);
                    if (*(int *)(param_1 + 0x1c0) != *(int *)(param_1 + 0x1ec)) goto LAB_14150f773;
                  }
                  FUN_1402a4b52((longlong *)(param_1 + 0x1b8));
                }
LAB_14150f773:
                plVar15 = plVar15 + 1;
              } while (plVar15 != plVar23);
              if (!bVar22) break;
            }
            *(undefined1 *)(lVar5 + 0xc6) = 1;
            if (*(longlong *)(lVar5 + 0xa0) == 0) {
              if (*(int *)(param_1 + 0x210) != *(int *)(param_1 + 0x23c)) {
                lVar5 = *(longlong *)(lVar5 + 0x28);
                lVar12 = *(longlong *)(param_1 + 0x248);
                if (*(longlong *)(param_1 + 0x248) == 0) {
                  lVar12 = param_1 + 0x240;
                }
                plVar15 = (longlong *)
                          (lVar12 + ((longlong)((int)((ulonglong)lVar5 >> 0x20) * 0x17 + (int)lVar5)
                                    & (longlong)*(int *)(param_1 + 0x250) - 1U) * 4);
                do {
                  iVar3 = (int)*plVar15;
                  lVar12 = (longlong)iVar3;
                  if (lVar12 == -1) break;
                  lVar11 = *(longlong *)(param_1 + 0x208);
                  plVar23 = (longlong *)(lVar11 + lVar12 * 0x18);
                  lVar6 = *plVar23;
                  if (lVar6 == lVar5) {
                    lVar16 = *(longlong *)(param_1 + 0x248);
                    if (*(longlong *)(param_1 + 0x248) == 0) {
                      lVar16 = param_1 + 0x240;
                    }
                    iVar18 = *(int *)(lVar16 + (longlong)*(int *)((longlong)plVar23 + 0x14) * 4);
                    if (iVar18 == iVar3) {
                      piVar17 = (int *)(lVar16 + (longlong)*(int *)((longlong)plVar23 + 0x14) * 4);
                    }
                    else {
                      do {
                        piVar17 = (int *)(lVar11 + (longlong)iVar18 * 0x18 + 0x10);
                        iVar18 = *piVar17;
                      } while (iVar18 != iVar3);
                    }
                    *piVar17 = (int)plVar23[2];
                    lVar11 = *(longlong *)(param_1 + 0x208);
                    if (*(int *)(param_1 + 0x23c) != 0) {
                      *(int *)(lVar11 + (longlong)*(int *)(param_1 + 0x238) * 0x18) = iVar3;
                    }
                    *(undefined4 *)(lVar11 + lVar12 * 0x18) = 0xffffffff;
                    if (*(int *)(param_1 + 0x23c) < 1) {
                      uVar20 = 0xffffffff;
                    }
                    else {
                      uVar20 = *(undefined4 *)(param_1 + 0x238);
                    }
                    *(undefined4 *)(lVar11 + lVar12 * 0x18 + 4) = uVar20;
                    *(int *)(param_1 + 0x238) = iVar3;
                    *(int *)(param_1 + 0x23c) = *(int *)(param_1 + 0x23c) + 1;
                    lVar12 = *(longlong *)(param_1 + 0x228);
                    if (*(longlong *)(param_1 + 0x228) == 0) {
                      lVar12 = param_1 + 0x218;
                    }
                    iVar18 = iVar3 + 0x1f;
                    if (-1 < iVar3) {
                      iVar18 = iVar3;
                    }
                    bVar7 = (byte)iVar3 & 0x1f;
                    puVar2 = (uint *)(lVar12 + (longlong)(iVar18 >> 5) * 4);
                    *puVar2 = *puVar2 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
                  }
                  else {
                    plVar15 = plVar23 + 2;
                  }
                } while (lVar6 != lVar5);
                if (*(int *)(param_1 + 0x210) != *(int *)(param_1 + 0x23c)) break;
              }
              FUN_1403f0f7e((longlong *)(param_1 + 0x208));
            }
            break;
          }
          bVar9 = false;
          if (plVar8 == (longlong *)0x0) {
            LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x1b0) + 0x18));
LAB_14150fbae:
                    /* WARNING: Could not recover jumptable at 0x00014150fbc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(**(longlong **)(param_1 + 600) + 0x38))();
            return;
          }
        }
LAB_14150f715:
      } while (plVar8 != (longlong *)0x0);
      LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x1b0) + 0x18));
      if (!bVar9) goto LAB_14150fbae;
    }
    *(undefined1 *)((longlong)puVar4 + 0x39) = 1;
    puVar10 = (undefined8 *)*puVar4;
    *puVar4 = 0;
    if (*(char *)(puVar4 + 7) == '\x01') {
      *(undefined1 *)((longlong)puVar10 + 0xb9) = 1;
    }
    puVar10[1] = 0;
    if (*(undefined8 **)(param_1 + 0x308) == (undefined8 *)0x0) {
      *(undefined8 **)(param_1 + 0x300) = puVar10;
    }
    else {
      **(undefined8 **)(param_1 + 0x308) = puVar10;
    }
    *(undefined8 **)(param_1 + 0x308) = puVar10;
    *puVar10 = 0;
  }
  return;
}


