// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1446a9098 FUN_1446a9098 body=12 status=ok
// SIG undefined FUN_1446a9098(void)

void FUN_1446a9098(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001446a90a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1446a90a4 FUN_1446a90a4 body=29 status=ok
// SIG undefined FUN_1446a90a4(void)

undefined8 FUN_1446a90a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446a90c1 FUN_1446a90c1 body=445 status=ok
// SIG undefined FUN_1446a90c1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446a90c1(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined *local_40;
  undefined8 local_38;
  undefined4 local_2c;
  
  local_40 = (undefined *)0x800000014bef8e32;
  local_2c = 8;
  uVar2 = FUN_14577453c();
  local_38._0_5_ = CONCAT14(1,uVar2);
  FUN_1460233f4(&local_40);
  FUN_1400b22c2(&local_40,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_40,&DAT_14cc318e0);
  if (cVar1 == '\0') {
    _DAT_14cc318e0 = 0;
    uRam000000014cc318e8 = 0;
  }
  if (local_40 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  local_38 = FUN_145cfcef2;
  local_40 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc31a08,&local_40);
  local_38 = FUN_14611c6ce;
  local_40 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc31b30,&local_40);
  local_38 = FUN_14611c978;
  local_40 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc31c58,&local_40);
  local_38 = FUN_14611cc22;
  local_40 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc31d80,&local_40);
  local_38 = FUN_14611cecc;
  local_40 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc31ea8,&local_40);
  local_38 = FUN_14611d176;
  local_40 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc31fd0,&local_40);
  DAT_14cc31fe0 = 0x7fffffffffffffff;
  DAT_14cc31fe8 = 0;
  _DAT_14cc31ff0 = 0;
  atexit((_func_5014 *)&LAB_1446a6f10);
  DAT_14cc31ff8 = 0;
  _DAT_14cc32000 = 0;
  atexit((_func_5014 *)&LAB_1446a6f1c);
  DAT_14cc32008 = 0;
  _DAT_14cc32010 = 0;
  atexit((_func_5014 *)&LAB_1446a6f28);
  DAT_14cc32018 = 0;
  _DAT_14cc32020 = 0;
  atexit((_func_5014 *)&LAB_1446a6f34);
  return;
}



// FUNCTION 1446a9280 FUN_1446a9280 body=147 status=ok
// SIG undefined FUN_1446a9280(void)

void FUN_1446a9280(void)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0x800000014bef95f8;
  local_14 = 0xf;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146771412(&local_28);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_14282b410(L"/Script/WmfMediaFactory",&PTR_FUN_14bef9ab0,1,0);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446a9314 FUN_1446a9314 body=599 status=ok
// SIG undefined FUN_1446a9314(void)

longlong * FUN_1446a9314(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  longlong local_80 [2];
  longlong *local_70;
  longlong *local_68;
  longlong local_60;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140056680(local_80,L"FTcpMessageTransport.RemoteConnection");
  FUN_1498ecce2(&local_70,local_80);
  plVar4 = (longlong *)FUN_1498ee466(&local_70);
  plVar5 = plVar4;
  if (local_60 != 0) {
    plVar5 = (longlong *)FUN_1400020a8();
  }
  if (local_80[0] != 0) {
    plVar5 = (longlong *)FUN_1400020a8();
  }
  if (plVar4 == (longlong *)0x0) goto LAB_1446a9425;
  (**(code **)(*DAT_14c990958 + 0x90))(DAT_14c990958,&local_70);
  (**(code **)(*local_70 + 0x18))(local_70,*param_2);
  (**(code **)(*local_70 + 0x28))(local_70,*(undefined2 *)(param_2 + 1));
  cVar3 = (**(code **)(*plVar4 + 0x20))(plVar4,local_70);
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_68 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
  if (cVar3 == '\0') {
    FUN_1446f470e(&local_70,L"WINDOWS",1);
    plVar5 = (longlong *)FUN_140272950(&local_70);
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x38))(plVar5,plVar4);
    goto LAB_1446a9425;
  }
  lVar6 = FUN_14001cc68(0x100,0x10);
  local_88 = *(undefined4 *)(param_1 + 0x2c);
  FUN_1498ecd64(lVar6,plVar4,param_2,*(undefined4 *)(param_1 + 0x28));
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14befaec0;
  plVar5[2] = lVar6;
  if ((lVar6 != 0) &&
     (((*(longlong *)(lVar6 + 8) == 0 || (*(longlong *)(lVar6 + 0x10) == 0)) ||
      (*(int *)(*(longlong *)(lVar6 + 0x10) + 8) < 1)))) {
    if (plVar5 == (longlong *)0x0) {
      *(longlong *)(lVar6 + 8) = lVar6;
      plVar4 = *(longlong **)(lVar6 + 0x10);
      if (plVar4 != (longlong *)0x0) {
LAB_1446a9502:
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
        *(longlong **)(lVar6 + 0x10) = plVar5;
        if (plVar5 != (longlong *)0x0) goto LAB_1446a9516;
      }
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      *(longlong *)(lVar6 + 8) = lVar6;
      if (*(longlong **)(lVar6 + 0x10) != plVar5) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        plVar4 = *(longlong **)(lVar6 + 0x10);
        if (plVar4 != (longlong *)0x0) goto LAB_1446a9502;
        *(longlong **)(lVar6 + 0x10) = plVar5;
      }
LAB_1446a9516:
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
  }
  puVar7 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar7 = 0;
  puVar7[1] = lVar6;
  puVar7[2] = plVar5;
  plVar5 = (longlong *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    LOCK();
    puVar2 = *(undefined8 **)(param_1 + 0xc0);
    *(undefined8 **)(param_1 + 0xc0) = puVar7;
    UNLOCK();
    LOCK();
    plVar5 = (longlong *)*puVar2;
    *puVar2 = puVar7;
    UNLOCK();
  }
LAB_1446a9425:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar5;
}



// FUNCTION 1446a956c FUN_1446a956c body=1589 status=ok
// SIG undefined FUN_1446a956c(void)

ulonglong FUN_1446a956c(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined8 uVar15;
  uint uVar16;
  uint *puVar17;
  longlong lVar18;
  undefined8 **ppuVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined8 *puVar22;
  bool bVar23;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  ulonglong uStack_c0;
  char local_b0 [4];
  undefined8 local_ac;
  undefined8 uStack_a4;
  longlong local_98;
  longlong *plStack_90;
  longlong local_88;
  longlong *local_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar10 = (**(code **)(*(longlong *)*param_2 + 0x30))();
  if (*(int *)(lVar10 + 8) < 0x401) {
    local_b0[0] = '\0';
    ppuVar19 = (undefined8 **)(param_1 + 0x50);
    local_ac = 0;
    uStack_a4 = 0;
    local_98 = 0;
    plStack_90 = (longlong *)0x0;
    cVar7 = FUN_1498ecfe4(param_1 + 0xa8);
    if (cVar7 != '\0') {
      do {
        if (local_b0[0] == '\x01') {
          local_88 = 0;
          local_80 = plStack_90;
          if (plStack_90 == (longlong *)0x0) {
LAB_1446a9682:
            plVar12 = (longlong *)0x0;
          }
          else {
            iVar9 = (int)plStack_90[1];
            do {
              if (iVar9 == 0) {
                local_80 = (longlong *)0x0;
                goto LAB_1446a9682;
              }
              LOCK();
              iVar6 = (int)plStack_90[1];
              bVar23 = iVar9 == iVar6;
              if (bVar23) {
                *(int *)(plStack_90 + 1) = iVar9 + 1;
                iVar6 = iVar9;
              }
              iVar9 = iVar6;
              UNLOCK();
            } while (!bVar23);
            if (plStack_90 == (longlong *)0x0) goto LAB_1446a9682;
            local_88 = local_98;
            plVar12 = plStack_90;
          }
          if (local_88 != 0) {
            uStack_70 = &local_88;
            local_78 = &local_ac;
            FUN_1498ef1ea(ppuVar19,&local_c8,&local_78);
            plVar12 = local_80;
          }
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
        }
        else {
          FUN_1498ef748(ppuVar19,&local_ac);
        }
        cVar7 = FUN_1498ecfe4(param_1 + 0xa8,local_b0);
      } while (cVar7 != '\0');
    }
    local_c8 = 0;
    uStack_c0 = 0;
    if ((longlong)(int)param_3[1] == 0) {
      local_78 = (undefined8 *)0x0;
      uStack_70 = (longlong *)0x0;
      iVar9 = *(int *)(param_1 + 0x48);
      if ((longlong)iVar9 != 0) {
        lVar10 = *(longlong *)(param_1 + 0x40);
        lVar21 = 0;
        do {
          plVar12 = uStack_70;
          if (*(int *)(*(longlong *)(lVar10 + lVar21) + 0x28) == 1) {
            lVar18 = (longlong)(int)uStack_70;
            uVar16 = (int)uStack_70 + 1;
            uStack_70 = (longlong *)CONCAT44(uStack_70._4_4_,uVar16);
            if (uStack_70._4_4_ < uVar16) {
              FUN_1498efe6e(&local_78,(ulonglong)plVar12 & 0xffffffff);
            }
            local_78[lVar18 * 2] = *(undefined8 *)(lVar10 + lVar21);
            lVar5 = *(longlong *)(lVar10 + 8 + lVar21);
            local_78[lVar18 * 2 + 1] = lVar5;
            if (lVar5 != 0) {
              LOCK();
              *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
              UNLOCK();
            }
          }
          lVar21 = lVar21 + 0x10;
        } while ((longlong)iVar9 * 0x10 != lVar21);
      }
      ppuVar19 = &local_78;
      FUN_1498ed0a0(&local_c8,ppuVar19);
      FUN_1498eee7f(local_78,(ulonglong)uStack_70 & 0xffffffff);
      if (local_78 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      lVar10 = *param_3;
      lVar21 = (longlong)(int)param_3[1] << 4;
      do {
        uVar8 = FUN_1447addd0(lVar10,0x10);
        iVar9 = FUN_1498ef4a6(ppuVar19,uVar8,lVar10);
        if (((iVar9 != -1) &&
            (puVar3 = *ppuVar19 + (longlong)iVar9 * 5,
            puVar3 + 2 != (longlong *)0x0 && puVar3 != (undefined8 *)0x0)) &&
           (*(int *)(puVar3[2] + 0x28) == 1)) {
          FUN_1498ef886(&local_c8);
        }
        lVar10 = lVar10 + 0x10;
        lVar21 = lVar21 + -0x10;
      } while (lVar21 != 0);
    }
    uVar20 = CONCAT71((int7)((ulonglong)ppuVar19 >> 8),(int)uStack_c0 != 0);
    if ((int)uStack_c0 != 0) {
      puVar11 = (undefined8 *)FUN_14001cc68(0xb8,0x10);
      FUN_1498ed0f0(puVar11);
      plVar12 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar12[1] = (longlong)&DAT_100000001;
      *plVar12 = (longlong)&PTR_FUN_14befaee0;
      plVar12[2] = (longlong)puVar11;
      puVar3 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar14 = (uint *)*puVar3;
      if (puVar14 != (uint *)0x0) goto LAB_1446a989c;
      while( true ) {
        uVar16 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar16 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar16 | 1;
          __tlregdtor(&LAB_1446abe16);
        }
        lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar13 = *(undefined4 **)(lVar10 + 0x310);
        *(undefined8 *)(lVar10 + 0x310) = 0;
        if (puVar13 == (undefined4 *)0x0) {
          puVar13 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar13 = 0xffffffff;
        *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
        puVar13[0x12] = 0;
        *puVar3 = puVar13;
        FUN_140217a48(puVar3);
        puVar14 = (uint *)*puVar3;
LAB_1446a989c:
        puVar22 = (undefined8 *)(*(longlong *)(puVar14 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar17 = (uint *)(puVar22 + 0x1b);
        uVar16 = puVar14[0x12];
        if (puVar17 <= puVar14 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
          LOCK();
          uVar4 = *puVar14;
          *puVar14 = *puVar14 + uVar16 + 1;
          UNLOCK();
          if ((uVar4 ^ uVar16) != 0xffffffff) break;
          puVar14 = (uint *)*puVar3;
          *puVar14 = 0xffffffff;
          *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar3 = puVar14;
          puVar22 = (undefined8 *)((longlong)puVar14 + 0x5fU & 0xfffffffffffffff8);
          puVar17 = (uint *)(puVar22 + 0x1b);
          uVar16 = 0;
          if (puVar17 <= puVar14 + 0x4000) {
            uVar16 = 1;
            goto LAB_1446a991e;
          }
        }
      }
      uVar16 = uVar16 + 1;
LAB_1446a991e:
      *(uint **)(puVar14 + 0x10) = puVar17;
      puVar14[0x12] = uVar16;
      FUN_1447247dc(puVar22,0);
      *puVar22 = &PTR_FUN_14befaef8;
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
      }
      local_88 = *param_2;
      local_80 = (longlong *)param_2[1];
      if (local_80 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_80 + 1) = (int)local_80[1] + 1;
        UNLOCK();
      }
      local_78 = puVar11;
      uStack_70 = plVar12;
      FUN_1498ef93c(puVar22 + 0x15,&local_88,&local_78,&local_c8);
      if (*(code **)(puVar22[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar22[0xe] + 0x18))(puVar22 + 0xe,puVar22 + 9);
      }
      puVar22[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar22[9] = puVar22;
      puVar22[10] = puVar22;
      lVar10 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar10 == 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = *(undefined8 *)(lVar10 + 0x30);
      }
      puVar22[0xf] = uVar15;
      puVar22[0x10] = 0xc80000527800b400;
      *(undefined4 *)((longlong)puVar22 + 0x1c) = 0;
      if (puVar22 == (undefined8 *)0x0) {
        local_78 = (undefined8 *)CONCAT71(local_78._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar22 + 1) = *(int *)(puVar22 + 1) + 1;
        UNLOCK();
        local_78 = (undefined8 *)CONCAT71(local_78._1_7_,1);
        FUN_1447439e4(puVar22);
        LOCK();
        piVar2 = (int *)(puVar22 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar22)(puVar22,1);
        }
      }
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
    }
    FUN_1498eee7f(local_c8,uStack_c0 & 0xffffffff);
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
    if (plStack_90 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plStack_90 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plStack_90 + 0x10))();
      }
    }
  }
  else {
    uVar20 = 0;
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar20 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446a9ba2 FUN_1446a9ba2 body=946 status=ok
// SIG undefined FUN_1446a9ba2(void)

undefined8 FUN_1446a9ba2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  char cVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  longlong *plVar14;
  longlong lVar15;
  int iVar16;
  longlong *plVar17;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  longlong *plStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 0x30) == '\0') {
    local_a0 = param_1 + 0xc0;
    plVar1 = (longlong *)(param_1 + 0x48);
    do {
      lVar15 = local_a0;
      local_78 = 0;
      plStack_70 = (longlong *)0x0;
      while (cVar10 = FUN_1498ed15a(lVar15,&local_78), plVar14 = plStack_70, lVar6 = local_78,
            cVar10 != '\0') {
        plVar14 = (longlong *)(local_78 + 0x18);
        if (*(int *)(local_78 + 0x20) != 4) {
          FUN_1446efa72(plVar14,0,4,0x10);
          *(undefined4 *)(lVar6 + 0x20) = 4;
        }
        puVar5 = (undefined8 *)*plVar14;
        *puVar5 = &PTR_LAB_14befaf80;
        puVar5[1] = local_78;
        puVar5[2] = plStack_70;
        if (plStack_70 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
          UNLOCK();
        }
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 1;
        lVar6 = DAT_14c758608 + 1;
        if (lVar12 == 0) {
          LOCK();
          UNLOCK();
          lVar12 = DAT_14c758608 + 2;
          lVar6 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar6;
        puVar5[3] = lVar12;
        *puVar5 = &PTR_FUN_14befaf10;
        puVar5[4] = param_1;
        puVar5[5] = FUN_1446a9f56;
        *(undefined4 *)(puVar5 + 6) = 0;
        FUN_1498ed246(local_78);
        iVar11 = *(int *)(param_1 + 0x50);
        *(uint *)(param_1 + 0x50) = iVar11 + 1U;
        if (*(uint *)(param_1 + 0x54) < iVar11 + 1U) {
          FUN_1498efe6e(plVar1,iVar11);
        }
        lVar6 = *plVar1;
        *(longlong *)(lVar6 + (longlong)iVar11 * 0x10) = local_78;
        *(longlong **)(lVar6 + 8 + (longlong)iVar11 * 0x10) = plStack_70;
        if (plStack_70 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
          UNLOCK();
        }
      }
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        plVar17 = plStack_70 + 1;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)*plVar17 == 0) {
          (**(code **)*plStack_70)(plStack_70);
          LOCK();
          piVar2 = (int *)((longlong)plVar14 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
      }
LAB_1446a9d7f:
      lVar15 = **(longlong **)(param_1 + 0xd8);
      if (lVar15 != 0) {
        uVar7 = *(ulonglong *)(lVar15 + 8);
        lVar6 = *(longlong *)(param_1 + 0xd8);
        *(longlong *)(param_1 + 0xd8) = lVar15;
        if (lVar6 != 0) {
          FUN_1400020a8();
        }
        if (0 < (longlong)*(int *)(param_1 + 0x50)) {
          lVar15 = 0;
          do {
            if ((uVar7 & 0xffffffffffff) ==
                (*(ulonglong *)(*(longlong *)(*plVar1 + lVar15) + 0x58) & 0xffffffffffff)) {
              FUN_1498ecf82();
              break;
            }
            lVar15 = lVar15 + 0x10;
          } while ((longlong)*(int *)(param_1 + 0x50) * 0x10 != lVar15);
        }
        goto LAB_1446a9d7f;
      }
      iVar11 = *(int *)(param_1 + 0x50);
      iVar16 = 0;
      if (0 < iVar11) {
        iVar13 = 0;
        do {
          iVar4 = *(int *)(*(longlong *)(*plVar1 + (longlong)iVar13 * 0x10) + 0x28);
          if (iVar4 == 1) {
            iVar16 = iVar16 + 1;
          }
          else if (iVar4 == 3) {
            FUN_1498efef4(plVar1,iVar13);
            FUN_1498eff7c(plVar1);
            iVar13 = iVar13 + -1;
            iVar11 = *(int *)(param_1 + 0x50);
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < iVar11);
      }
      if (iVar11 != 0) {
        plVar14 = (longlong *)*plVar1;
        plVar17 = plVar14 + (longlong)iVar11 * 2;
        do {
          local_78 = 0;
          plStack_70 = (longlong *)0x0;
          local_88 = 0;
          uStack_80 = 0;
          while( true ) {
            lVar15 = *plVar14;
            cVar10 = FUN_1498ed492(lVar15 + 0x40,&local_78);
            plVar9 = plStack_70;
            if (cVar10 == '\0') break;
            local_88 = *(undefined8 *)(lVar15 + 0x70);
            uStack_80 = *(undefined8 *)(lVar15 + 0x78);
            plVar8 = *(longlong **)(param_1 + 0xe8);
            if (plStack_70 == (longlong *)0x0) {
              local_90 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
              UNLOCK();
              local_90 = plStack_70;
              LOCK();
              *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
              UNLOCK();
            }
            local_98 = local_78;
            (**(code **)(*plVar8 + 0x10))(plVar8,&local_98);
            plVar8 = local_90;
            if (local_90 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_90 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*local_90)(local_90);
                LOCK();
                piVar2 = (int *)((longlong)plVar8 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar8 + 0x10))(plVar8);
                }
              }
            }
            if (plVar9 != (longlong *)0x0) {
              LOCK();
              plVar8 = plVar9 + 1;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)*plVar8 == 0) {
                (**(code **)*plVar9)(plVar9);
                LOCK();
                piVar2 = (int *)((longlong)plVar9 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar9 + 0x10))(plVar9);
                }
              }
            }
          }
          if (plStack_70 != (longlong *)0x0) {
            LOCK();
            plVar8 = plStack_70 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
              (**(code **)*plStack_70)(plStack_70);
              LOCK();
              piVar2 = (int *)((longlong)plVar9 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
          }
          plVar14 = plVar14 + 2;
        } while (plVar14 != plVar17);
      }
      FUN_14000f986((&DAT_14bef9d68)[0 < iVar16]);
    } while (*(char *)(param_1 + 0x30) == '\0');
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 1446a9f56 FUN_1446a9f56 body=433 status=ok
// SIG undefined FUN_1446a9f56(void)

void FUN_1446a9f56(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined3 uVar6;
  undefined3 uVar7;
  undefined3 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined3 uVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined1 auStack_78 [32];
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined4 uStack_3b;
  undefined4 uStack_37;
  undefined4 uStack_33;
  undefined4 uStack_2f;
  undefined3 uStack_2b;
  ulonglong local_28;
  
  uVar12 = uStack_2b;
  uVar11 = uStack_2f;
  uVar10 = uStack_33;
  uVar9 = uStack_37;
  uVar5 = uStack_3b;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = *param_2;
  local_58 = *(int *)(lVar4 + 0x70);
  iStack_54 = *(int *)(lVar4 + 0x74);
  iStack_50 = *(int *)(lVar4 + 0x78);
  iStack_4c = *(int *)(lVar4 + 0x7c);
  uStack_3b._3_1_ = (undefined1)local_58;
  uStack_37._3_1_ = (undefined1)iStack_54;
  uStack_33._3_1_ = (undefined1)iStack_50;
  uStack_2f._3_1_ = (undefined1)iStack_4c;
  uStack_2b = (undefined3)((uint)iStack_4c >> 8);
  uVar6 = (undefined3)((uint)local_58 >> 8);
  uVar7 = (undefined3)((uint)iStack_54 >> 8);
  uVar8 = (undefined3)((uint)iStack_50 >> 8);
  if (*(int *)(lVar4 + 0x28) == 1) {
    plVar14 = (longlong *)param_2[1];
    if (plVar14 == (longlong *)0x0) {
      uVar5 = *(undefined4 *)(lVar4 + 0x70);
      uStack_3b._3_1_ = (undefined1)uVar5;
      uStack_37._3_1_ = (undefined1)*(undefined4 *)(lVar4 + 0x74);
      uStack_37 = CONCAT13(uStack_37._3_1_,(int3)((uint)uVar5 >> 8));
      uStack_33._3_1_ = (undefined1)*(undefined4 *)(lVar4 + 0x78);
      uStack_33 = CONCAT13(uStack_33._3_1_,(int3)((uint)*(undefined4 *)(lVar4 + 0x74) >> 8));
      uStack_2f._3_1_ = (undefined1)*(undefined4 *)(lVar4 + 0x7c);
      uStack_2f = CONCAT13(uStack_2f._3_1_,(int3)((uint)*(undefined4 *)(lVar4 + 0x78) >> 8));
      uStack_2b = (undefined3)((uint)*(undefined4 *)(lVar4 + 0x7c) >> 8);
    }
    else {
      LOCK();
      *(int *)((longlong)plVar14 + 0xc) = *(int *)((longlong)plVar14 + 0xc) + 1;
      UNLOCK();
      uStack_37 = CONCAT13(uStack_37._3_1_,uVar6);
      uStack_33 = CONCAT13(uStack_33._3_1_,uVar7);
      uStack_2f = CONCAT13(uStack_2f._3_1_,uVar8);
      LOCK();
      *(int *)((longlong)plVar14 + 0xc) = *(int *)((longlong)plVar14 + 0xc) + 1;
      UNLOCK();
    }
    puVar13 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *puVar13 = 0;
    *(undefined1 *)(puVar13 + 1) = 1;
    *(undefined4 *)((longlong)puVar13 + 9) = uStack_3b;
    *(undefined4 *)((longlong)puVar13 + 0xd) = uStack_37;
    *(undefined4 *)((longlong)puVar13 + 0x11) = uStack_33;
    *(undefined4 *)((longlong)puVar13 + 0x15) = uStack_2f;
    *(uint *)(puVar13 + 3) = CONCAT31(uStack_2b,uStack_2f._3_1_);
    puVar13[4] = lVar4;
    puVar13[5] = plVar14;
    if (puVar13 != (undefined8 *)0x0) {
      LOCK();
      puVar3 = *(undefined8 **)(param_1 + 0xb0);
      *(undefined8 **)(param_1 + 0xb0) = puVar13;
      UNLOCK();
      LOCK();
      *puVar3 = puVar13;
      UNLOCK();
    }
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
    plVar14 = *(longlong **)(param_1 + 0xe8);
    puVar13 = (undefined8 *)*plVar14;
  }
  else {
    if (((iStack_54 == 0 && local_58 == 0) && iStack_50 == 0) && iStack_4c == 0) goto LAB_1446aa0c1;
    plVar14 = (longlong *)param_2[1];
    if (plVar14 == (longlong *)0x0) {
      uVar5 = *(undefined4 *)(lVar4 + 0x70);
      uStack_3b._3_1_ = (undefined1)uVar5;
      uStack_37._3_1_ = (undefined1)*(undefined4 *)(lVar4 + 0x74);
      uStack_37 = CONCAT13(uStack_37._3_1_,(int3)((uint)uVar5 >> 8));
      uStack_33._3_1_ = (undefined1)*(undefined4 *)(lVar4 + 0x78);
      uStack_33 = CONCAT13(uStack_33._3_1_,(int3)((uint)*(undefined4 *)(lVar4 + 0x74) >> 8));
      uStack_2f._3_1_ = (undefined1)*(undefined4 *)(lVar4 + 0x7c);
      uStack_2f = CONCAT13(uStack_2f._3_1_,(int3)((uint)*(undefined4 *)(lVar4 + 0x78) >> 8));
      uStack_2b = (undefined3)((uint)*(undefined4 *)(lVar4 + 0x7c) >> 8);
    }
    else {
      LOCK();
      *(int *)((longlong)plVar14 + 0xc) = *(int *)((longlong)plVar14 + 0xc) + 1;
      UNLOCK();
      uStack_37 = CONCAT13(uStack_37._3_1_,uVar6);
      uStack_33 = CONCAT13(uStack_33._3_1_,uVar7);
      uStack_2f = CONCAT13(uStack_2f._3_1_,uVar8);
      LOCK();
      *(int *)((longlong)plVar14 + 0xc) = *(int *)((longlong)plVar14 + 0xc) + 1;
      UNLOCK();
    }
    puVar13 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *puVar13 = 0;
    *(undefined1 *)(puVar13 + 1) = 0;
    *(undefined4 *)((longlong)puVar13 + 9) = uStack_3b;
    *(undefined4 *)((longlong)puVar13 + 0xd) = uStack_37;
    *(undefined4 *)((longlong)puVar13 + 0x11) = uStack_33;
    *(undefined4 *)((longlong)puVar13 + 0x15) = uStack_2f;
    *(uint *)(puVar13 + 3) = CONCAT31(uStack_2b,uStack_2f._3_1_);
    puVar13[4] = lVar4;
    puVar13[5] = plVar14;
    if (puVar13 != (undefined8 *)0x0) {
      LOCK();
      puVar3 = *(undefined8 **)(param_1 + 0xb0);
      *(undefined8 **)(param_1 + 0xb0) = puVar13;
      UNLOCK();
      LOCK();
      *puVar3 = puVar13;
      UNLOCK();
    }
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
    plVar14 = *(longlong **)(param_1 + 0xe8);
    puVar13 = (undefined8 *)(*plVar14 + 8);
  }
  (*(code *)*puVar13)(plVar14,&local_58);
  uVar5 = uStack_3b;
  uVar9 = uStack_37;
  uVar10 = uStack_33;
  uVar11 = uStack_2f;
  uVar12 = uStack_2b;
LAB_1446aa0c1:
  uStack_2b = uVar12;
  uStack_2f = uVar11;
  uStack_33 = uVar10;
  uStack_37 = uVar9;
  uStack_3b = uVar5;
  plVar14 = (longlong *)param_2[1];
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar14 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446aa108 FUN_1446aa108 body=759 status=ok
// SIG undefined FUN_1446aa108(void)

void FUN_1446aa108(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 auStack_148 [36];
  undefined4 local_124;
  undefined **local_120;
  ulonglong *local_118;
  byte local_f8;
  byte local_f7;
  byte local_f6;
  longlong *local_c8;
  longlong local_a8;
  longlong local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78 [2];
  undefined1 local_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd0));
  if ((*(int *)(param_1 + 0x28) != 1) || (*(char *)(param_1 + 0x80) != '\x01')) goto LAB_1446aa15a;
  lVar5 = *param_2;
  memset(&local_120,0,0x90);
  FUN_144869430(&local_120);
  local_90 = 0;
  local_80 = 0;
  local_f8 = local_f8 | 4;
  local_f7 = local_f7 | 1;
  local_78[0] = 0;
  local_78[1] = 0;
  local_120 = &PTR_FUN_149e5da80;
  uVar4 = *(undefined4 *)(lVar5 + 0xb0);
  puVar3 = (undefined4 *)*local_118 + 1;
  local_88 = local_78;
  if ((undefined4 *)local_118[1] < puVar3) {
    local_124 = uVar4;
    if ((local_f6 & 2) == 0) {
      local_78[1] = 4;
      FUN_1447403be(local_78,0);
      *(undefined4 *)(*local_88 + (longlong)(int)local_90) = uVar4;
      local_90 = local_90 + 4;
    }
    else {
      FUN_14572512c(&local_120,&local_124);
    }
  }
  else {
    local_124 = *(undefined4 *)*local_118;
    *local_118 = (ulonglong)puVar3;
  }
  cVar6 = FUN_1498ed57e(param_1,local_78[0],4);
  if (cVar6 != '\0') {
    *(longlong *)(param_1 + 0xa0) = *(longlong *)(param_1 + 0xa0) + 4;
    cVar6 = FUN_1498ed57e(param_1,*(undefined8 *)(lVar5 + 0xa8),*(undefined4 *)(lVar5 + 0xb0));
    if (cVar6 == '\0') {
      FUN_1446f470e(local_68,L"WINDOWS",1);
      plVar8 = (longlong *)FUN_140272950(local_68);
      iVar7 = (**(code **)(*plVar8 + 0xb8))(plVar8);
      if (iVar7 != 0x1b) goto LAB_1446aa29f;
      FUN_14000f986(0x3f800000);
      uVar12 = *(uint *)(lVar5 + 0xb0);
      if (0 < (int)uVar12) {
        lVar11 = *(longlong *)(lVar5 + 0xa8);
        uVar10 = 0;
        do {
          uVar9 = 0x10000;
          if (uVar12 < 0x10000) {
            uVar9 = uVar12;
          }
          cVar6 = FUN_1498ed57e(param_1,lVar11,uVar9);
          if (cVar6 == '\0') {
            if (0xf < uVar10) goto LAB_1446aa29f;
            FUN_14000f986(0x3f800000);
            uVar10 = uVar10 + 1;
          }
          else {
            lVar11 = lVar11 + (ulonglong)uVar9;
            uVar12 = uVar12 - uVar9;
          }
        } while (0 < (int)uVar12);
      }
    }
    *(longlong *)(param_1 + 0xa0) = *(longlong *)(param_1 + 0xa0) + (longlong)*(int *)(lVar5 + 0xb0)
    ;
  }
LAB_1446aa29f:
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  local_120 = &PTR__purecall_149e35f70;
  if (local_c8 != (longlong *)0x0) {
    if (*local_c8 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_c8);
  }
  if (local_a8 != 0) {
    if (*(longlong *)(local_a8 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_a8);
  }
LAB_1446aa15a:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd0));
  plVar8 = (longlong *)param_2[1];
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
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446aa400 FUN_1446aa400 body=5452 status=ok
// SIG undefined FUN_1446aa400(void)

undefined8 FUN_1446aa400(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint *puVar3;
  int *piVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  ulonglong *puVar7;
  byte *pbVar8;
  ulonglong uVar9;
  void *pvVar10;
  char cVar11;
  int iVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined8 uVar17;
  longlong *plVar18;
  uint uVar19;
  longlong lVar20;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar21;
  code *pcVar22;
  bool bVar23;
  undefined1 auVar24 [16];
  undefined1 unaff_XMM8 [16];
  float fVar25;
  undefined1 auStack_2a8 [32];
  wchar_t *local_288;
  undefined4 local_280;
  undefined8 local_278;
  wchar_t *local_270;
  wchar_t *local_268;
  code *local_260;
  undefined1 *local_258;
  code ****local_250;
  code *local_248;
  code *local_240;
  longlong *local_238;
  LPCRITICAL_SECTION local_230;
  longlong *local_228;
  longlong *local_220;
  undefined8 *local_218;
  longlong *local_210;
  longlong *local_208;
  longlong local_200;
  int local_1f8;
  undefined4 uStack_1f4;
  code ****local_1e8;
  undefined4 local_1e0;
  void *local_1d8;
  int local_1d0;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  int local_190;
  undefined4 local_18c;
  undefined8 uStack_188;
  ulonglong uStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  code ****local_168;
  longlong *plStack_160;
  void *local_158;
  int local_150;
  undefined4 local_14c;
  undefined8 local_148;
  ulonglong uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  longlong *local_110;
  longlong local_f0;
  undefined8 local_d8;
  longlong alStack_d0 [2];
  longlong local_c0;
  int local_b0;
  uint local_ac;
  code ***local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xd0);
    local_228 = (longlong *)(param_1 + 0x70);
    local_210 = (longlong *)(param_1 + 0x60);
    local_218 = &local_d8;
    local_220 = alStack_d0;
    piVar4 = (int *)(param_1 + 200);
    auVar24 = roundpd(ZEXT816(0x416312d010000000),ZEXT816(0x416312d010000000),1);
    local_200 = (longlong)auVar24._0_8_;
    auVar24 = roundpd(unaff_XMM8,ZEXT816(0x4187d78404000000),1);
    pcVar22 = EnterCriticalSection_exref;
    local_230 = lpCriticalSection;
    do {
      if (*(char *)(param_1 + 0x80) == '\0') {
        (*pcVar22)(lpCriticalSection);
        FUN_1446f470e(&local_168,L"WINDOWS",1);
        FUN_140272950(&local_168);
        cVar11 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x78))
                           (*(longlong **)(param_1 + 0x88),1,(longlong)auVar24._0_8_);
        if (cVar11 == '\0') {
          LeaveCriticalSection(lpCriticalSection);
          goto LAB_1446aa551;
        }
        FUN_146866eea(&local_168);
        local_1a8 = (code *****)0x245504943;
        uStack_1a0 = (longlong *)*local_210;
        local_198 = (void *)local_210[1];
        FUN_1498ed6e2(&local_168,&local_1a8);
        cVar11 = FUN_1498ed57e(param_1,local_c0,0x18);
        if (cVar11 != '\0') {
          *(undefined1 *)(param_1 + 0x80) = 1;
          *(longlong *)(param_1 + 0xa0) = *(longlong *)(param_1 + 0xa0) + 0x18;
        }
        if (local_c0 != 0) {
          FUN_1400020a8();
        }
        plVar18 = local_110;
        local_168 = (code ****)&PTR__purecall_149e35f70;
        if (local_110 != (longlong *)0x0) {
          if (*local_110 != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(plVar18);
        }
        lVar15 = local_f0;
        if (local_f0 != 0) {
          if (*(longlong *)(local_f0 + 0x40) != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(lVar15);
        }
        LeaveCriticalSection(lpCriticalSection);
        if (cVar11 != '\0') goto LAB_1446aa551;
LAB_1446ab1e7:
        if (*(char *)(param_1 + 0xa8) == '\x01') {
          iVar12 = *(int *)(param_1 + 0xac);
          if (iVar12 < 1) {
            *(undefined1 *)(param_1 + 0xa8) = 0;
          }
          else {
            (*pcVar22)(lpCriticalSection);
            (**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))();
            FUN_1446f470e(&local_168,L"WINDOWS",1);
            plVar18 = (longlong *)FUN_140272950(&local_168);
            (**(code **)(*plVar18 + 0x38))(plVar18,*(undefined8 *)(param_1 + 0x88));
            *(undefined8 *)(param_1 + 0x88) = 0;
            if (*(char *)(param_1 + 0xa8) == '\x01') {
              fVar25 = 0.0;
              bVar23 = false;
              while (fVar25 <= (float)*(int *)(param_1 + 0xb0)) {
                FUN_14000f986((float)*(int *)(param_1 + 0xac));
                FUN_140056680(&local_1f8,L"FTcpMessageTransport.RemoteConnection");
                FUN_1498ecce2(&local_1e8,&local_1f8);
                pvVar10 = local_1d8;
                local_1b0 = 0x200000;
                local_1a8 = (code *****)local_1e8;
                uStack_1a0 = (longlong *)CONCAT44(uStack_1a0._4_4_,local_1e0);
                local_198 = (void *)0x0;
                lVar15 = (longlong)local_1d0;
                local_190 = local_1d0;
                if (lVar15 == 0) {
                  local_18c = 0;
                  iVar21 = 0;
                }
                else {
                  FUN_1446dd670(&local_198,local_1d0,0);
                  memcpy(local_198,pvVar10,lVar15 * 2);
                  iVar21 = local_190;
                }
                pvVar10 = local_198;
                uStack_180 = CONCAT44(uStack_1bc,uStack_1c0);
                uStack_174 = uStack_1b4;
                uStack_170 = local_1b0;
                uStack_188 = local_1c8;
                uStack_178 = 0x200000;
                local_168 = (code ****)local_1a8;
                plStack_160 = (longlong *)CONCAT44(plStack_160._4_4_,(int)uStack_1a0);
                local_158 = (void *)0x0;
                local_150 = iVar21;
                if (iVar21 == 0) {
                  local_14c = 0;
                }
                else {
                  FUN_1446dd670(&local_158,iVar21,0);
                  memcpy(local_158,pvVar10,(longlong)iVar21 * 2);
                }
                lpCriticalSection = local_230;
                uStack_138 = uStack_178;
                uStack_134 = uStack_174;
                uStack_130 = uStack_170;
                local_148 = uStack_188;
                uStack_140 = uStack_180;
                uVar17 = FUN_1498ee466(&local_168);
                *(undefined8 *)(param_1 + 0x88) = uVar17;
                if (local_158 != (void *)0x0) {
                  FUN_1400020a8();
                }
                if (local_198 != (void *)0x0) {
                  FUN_1400020a8();
                }
                if (local_1d8 != (void *)0x0) {
                  FUN_1400020a8();
                }
                if (CONCAT44(uStack_1f4,local_1f8) != 0) {
                  FUN_1400020a8();
                }
                plVar18 = *(longlong **)(param_1 + 0x88);
                if (plVar18 != (longlong *)0x0) {
                  (**(code **)(*DAT_14c990958 + 0x90))(DAT_14c990958,&local_168);
                  (*(code *)(*local_168)[3])(local_168,*(undefined4 *)(param_1 + 0x58));
                  (*(code *)(*local_168)[5])(local_168,*(undefined2 *)(param_1 + 0x5c));
                  cVar11 = (**(code **)(*plVar18 + 0x20))(plVar18,local_168);
                  plVar18 = plStack_160;
                  if (plStack_160 != (longlong *)0x0) {
                    LOCK();
                    plVar14 = plStack_160 + 1;
                    *(int *)plVar14 = (int)*plVar14 + -1;
                    UNLOCK();
                    if ((int)*plVar14 == 0) {
                      (**(code **)*plStack_160)(plStack_160);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar18 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)(*plVar18 + 0x10))(plVar18);
                      }
                    }
                  }
                  if (cVar11 == '\0') {
                    if (*(longlong *)(param_1 + 0x88) != 0) {
                      FUN_1446f470e(&local_168,L"WINDOWS",1);
                      plVar18 = (longlong *)FUN_140272950(&local_168);
                      (**(code **)(*plVar18 + 0x38))(plVar18,*(undefined8 *)(param_1 + 0x88));
                      *(undefined8 *)(param_1 + 0x88) = 0;
                      *(undefined1 *)(param_1 + 0xa8) = 0;
                    }
                  }
                  else {
                    *(undefined2 *)(param_1 + 0x80) = 0;
                    *(undefined4 *)(param_1 + 0x28) = 2;
                    *local_228 = 0;
                    local_228[1] = 0;
                    bVar23 = true;
                  }
                }
                if ((*(char *)(param_1 + 0xa8) == '\0') ||
                   (fVar25 = fVar25 + (float)iVar12, *(longlong *)(param_1 + 0x88) != 0)) break;
              }
              LeaveCriticalSection(lpCriticalSection);
              pcVar22 = EnterCriticalSection_exref;
              if ((bVar23) &&
                 ((*(int *)(param_1 + 0x20) != 0 &&
                  (*(longlong **)(param_1 + 0x18) != (longlong *)0x0)))) {
                (**(code **)(**(longlong **)(param_1 + 0x18) + 0x60))();
              }
            }
            else {
              LeaveCriticalSection(lpCriticalSection);
            }
          }
        }
      }
      else {
LAB_1446aa551:
        FUN_1446f470e(&local_168,L"WINDOWS",1);
        FUN_140272950(&local_168);
        local_ac = 0;
        local_288 = (wchar_t *)CONCAT44(local_288._4_4_,2);
        cVar11 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x68))
                           (*(longlong **)(param_1 + 0x88),&local_1a8,1);
        if (cVar11 == '\0') goto LAB_1446ab1e7;
        cVar11 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x78))
                           (*(longlong **)(param_1 + 0x88),0,local_200);
        if (cVar11 != '\0') {
          if (*(char *)(param_1 + 0x81) != '\0') {
LAB_1446aa5cf:
            do {
              local_b0 = 0;
              iVar12 = *piVar4;
              if (iVar12 == 0) {
                cVar11 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x38))();
                if ((cVar11 == '\0') || (local_ac < 4)) goto LAB_1446ab0c9;
                bVar23 = false;
                memset(&local_168,0,0x90);
                FUN_144869430(&local_168);
                *local_218 = 0;
                local_218[1] = 0;
                local_218[2] = 0;
                local_168 = (code ****)&PTR_FUN_149f22c90;
                uStack_140 = uStack_140 | 0x101;
                FUN_140393c76(local_220,4,1);
                local_b0 = 0;
                local_288 = (wchar_t *)((ulonglong)local_288 & 0xffffffff00000000);
                cVar11 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x68))
                                   (*(longlong **)(param_1 + 0x88),alStack_d0[0],4);
                if (cVar11 != '\0') {
                  *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x98) + (longlong)local_b0
                  ;
                  if ((int *)plStack_160[1] < (int *)*plStack_160 + 1) {
                    if ((uStack_140 & 0x20000) == 0) {
                      (*(code *)local_168[0x2e])(&local_168,piVar4,4);
                    }
                    else {
                      FUN_14572512c(&local_168,piVar4);
                    }
                  }
                  else {
                    *piVar4 = *(int *)*plStack_160;
                    *plStack_160 = *plStack_160 + 4;
                  }
                  if (*piVar4 < 1) {
                    bVar23 = false;
                  }
                  else {
                    puVar13 = (undefined8 *)FUN_14001cc68(0xa8);
                    memset(puVar13,0,0x90);
                    FUN_144869430(puVar13);
                    puVar13[0x12] = 0;
                    puVar13[0x13] = 0;
                    puVar13[0x14] = 0;
                    *puVar13 = &PTR_FUN_149f22c90;
                    *(byte *)(puVar13 + 5) = *(byte *)(puVar13 + 5) | 1;
                    *(byte *)((longlong)puVar13 + 0x29) = *(byte *)((longlong)puVar13 + 0x29) | 1;
                    plVar14 = (longlong *)FUN_14001cc68(0x18,0x10);
                    plVar14[1] = (longlong)&DAT_100000001;
                    *plVar14 = (longlong)&PTR_FUN_14bef8e10;
                    plVar14[2] = (longlong)puVar13;
                    *(undefined8 **)(param_1 + 0xb8) = puVar13;
                    plVar18 = *(longlong **)(param_1 + 0xc0);
                    if (plVar14 == plVar18) {
                      if (plVar14 != (longlong *)0x0) {
                        LOCK();
                        plVar18 = plVar14 + 1;
                        *(int *)plVar18 = (int)*plVar18 + -1;
                        UNLOCK();
                        if ((int)*plVar18 == 0) {
                          (**(code **)*plVar14)(plVar14);
                          LOCK();
                          piVar1 = (int *)((longlong)plVar14 + 0xc);
                          *piVar1 = *piVar1 + -1;
                          iVar12 = *piVar1;
                          UNLOCK();
                          plVar18 = plVar14;
                          goto joined_r0x0001446aa7dc;
                        }
                      }
                    }
                    else {
                      *(longlong **)(param_1 + 0xc0) = plVar14;
                      if (plVar18 != (longlong *)0x0) {
                        LOCK();
                        plVar14 = plVar18 + 1;
                        *(int *)plVar14 = (int)*plVar14 + -1;
                        UNLOCK();
                        if ((int)*plVar14 == 0) {
                          (**(code **)*plVar18)(plVar18);
                          LOCK();
                          piVar1 = (int *)((longlong)plVar18 + 0xc);
                          *piVar1 = *piVar1 + -1;
                          iVar12 = *piVar1;
                          UNLOCK();
joined_r0x0001446aa7dc:
                          if (iVar12 == 0) {
                            (**(code **)(*plVar18 + 0x10))(plVar18);
                          }
                        }
                      }
                    }
                    bVar23 = true;
                    FUN_140393c76(*(longlong *)(param_1 + 0xb8) + 0x98,
                                  *(undefined4 *)(param_1 + 200),1);
                  }
                }
                if (alStack_d0[0] != 0) {
                  FUN_1400020a8();
                }
                plVar18 = local_110;
                local_168 = (code ****)&PTR__purecall_149e35f70;
                if (local_110 != (longlong *)0x0) {
                  if (*local_110 != 0) {
                    FUN_1400020a8();
                  }
                  FUN_1400020a8(plVar18);
                }
                lVar15 = local_f0;
                if (local_f0 != 0) {
                  if (*(longlong *)(local_f0 + 0x40) != 0) {
                    FUN_1400020a8();
                  }
                  FUN_1400020a8(lVar15);
                }
                if (!bVar23) goto LAB_1446ab1e7;
                iVar12 = *piVar4;
              }
              local_b0 = 0;
              local_288 = (wchar_t *)((ulonglong)local_288 & 0xffffffff00000000);
              cVar11 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x68))
                                 (*(longlong **)(param_1 + 0x88),
                                  ((longlong)*(int *)(*(longlong *)(param_1 + 0xb8) + 0xa0) +
                                  *(longlong *)(*(longlong *)(param_1 + 0xb8) + 0x98)) -
                                  (longlong)iVar12);
              if (cVar11 == '\0') goto LAB_1446ab1e7;
              if ((longlong)local_b0 < 1) goto LAB_1446ab0c9;
              *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x98) + (longlong)local_b0;
              piVar1 = (int *)(param_1 + 200);
              *piVar1 = *piVar1 - local_b0;
              if (*piVar1 == 0) {
                lVar15 = FUN_14001cc68(0xb0,0x10);
                local_168 = (code ****)0x0;
                plStack_160 = (longlong *)0x0;
                FUN_1498ec55a(lVar15,&local_168);
                plVar16 = (longlong *)FUN_14001cc68(0x18,0x10);
                plVar16[1] = (longlong)&DAT_100000001;
                *plVar16 = (longlong)&PTR_FUN_14befaff0;
                plVar16[2] = lVar15;
                plVar18 = *(longlong **)(param_1 + 0xb8);
                plVar14 = *(longlong **)(param_1 + 0xc0);
                if (plVar14 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
                  UNLOCK();
                  LOCK();
                  plVar2 = plVar14 + 1;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)*plVar2 == 0) {
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
                plVar18[7] = 0x400;
                local_1a8 = (code *****)0x0;
                uStack_1a0 = (longlong *)0x0;
                plVar14 = (longlong *)(**(code **)(*plVar18 + 0x160))(plVar18,&local_1a8);
                (**(code **)(*plVar14 + 0x160))(plVar14,&uStack_1a0);
                while ((DAT_14c949800 & 1) != 0) {
                  FUN_14000f986(0x3dcccccd);
                }
                local_168 = (code ****)local_1a8;
                plStack_160 = uStack_1a0;
                if (DAT_14c948fa0 == 0) {
                  local_a8 = (code ***)&DAT_1427db2a2;
                  local_238 = plVar16;
                  lVar20 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
                  DAT_14c948fa0 = lVar20;
                  FUN_1446f470e(&local_1f8,L"ScriptStruct",1);
                  local_250 = &local_a8;
                  local_258 = &LAB_1468915ce;
                  local_260 = FUN_1427dc742;
                  local_270 = L"Engine";
                  local_268 = (wchar_t *)CONCAT44(local_268._4_4_,199);
                  local_278 = 0x10;
                  local_280 = 0x10000020;
                  local_288._0_4_ = 8;
                  FUN_14574b4b2(lVar20);
                  DAT_14c948fa0 = lVar20;
                  if (DAT_14c927740 == 0) {
                    local_1e8 = (code ****)FUN_1449e2820;
                    local_240 = FUN_14081d0ea;
                    local_248 = FUN_14081d0ea;
                    local_250 = (code ****)&local_1e8;
                    local_258 = &LAB_146856450;
                    local_260 = FUN_1427b121c;
                    local_268 = L"Engine";
                    local_270 = (wchar_t *)0x0;
                    local_278 = CONCAT44(local_278._4_4_,0x10000021);
                    local_280 = 8;
                    local_288._0_4_ = 0x28;
                    FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
                  }
                  lVar20 = DAT_14c948fa0;
                  uVar17 = FUN_1449e2fb2();
                  local_288 = L"ScriptStruct";
                  FUN_14574b446(uVar17,lVar20);
                  plVar16 = local_238;
                }
                plVar14 = (longlong *)FUN_146900d4f(DAT_14c948fa0,&local_168);
                if (plVar14 == (longlong *)0x0) {
                  *(undefined8 *)(lVar15 + 0xa8) = 0;
                }
                else {
                  uVar19 = *(uint *)((longlong)plVar14 + 0xc);
                  *(uint *)(lVar15 + 0xa8) = uVar19;
                  if ((int)uVar19 < DAT_14c9647dc) {
                    lVar20 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
                  }
                  else {
                    lVar20 = 0;
                  }
                  iVar12 = *(int *)(lVar20 + 0x10);
                  local_208 = plVar14;
                  if (iVar12 == 0) {
                    LOCK();
                    iVar12 = DAT_14c964868 + 1;
                    UNLOCK();
                    iVar21 = DAT_14c964868 + 1;
                    bVar23 = DAT_14c964868 < 1000;
                    DAT_14c964868 = iVar12;
                    local_238 = plVar16;
                    if (bVar23) {
                      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d)
                      ;
                    }
                    LOCK();
                    iVar12 = *(int *)(lVar20 + 0x10);
                    bVar23 = iVar12 == 0;
                    if (bVar23) {
                      *(int *)(lVar20 + 0x10) = iVar21;
                      iVar12 = 0;
                    }
                    UNLOCK();
                    if (bVar23) {
                      iVar12 = iVar21;
                    }
                    *(int *)(lVar15 + 0xac) = iVar12;
                    plVar16 = local_238;
                    if (iVar12 == 0) goto LAB_1446aac39;
                  }
                  else {
                    *(int *)(lVar15 + 0xac) = iVar12;
                  }
                  uVar19 = *(uint *)(lVar15 + 0xa8);
                  if ((((-1 < (int)uVar19) && ((int)uVar19 < DAT_14c9647dc)) &&
                      (lVar20 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8),
                      lVar20 != 0)) && (*(int *)(lVar20 + 0x10) == iVar12)) {
                    FUN_1402ac1b3(plVar18,lVar15 + 0x8c);
                    uVar9 = (ulonglong)local_168 >> 0x20;
                    local_168 = (code ****)((ulonglong)local_168 & 0xffffffff00000000);
                    puVar7 = (ulonglong *)plVar18[1];
                    puVar3 = (uint *)*puVar7 + 1;
                    if ((uint *)puVar7[1] < puVar3) {
                      if ((*(byte *)((longlong)plVar18 + 0x2a) & 2) == 0) {
                        (**(code **)(*plVar18 + 0x170))(plVar18,&local_168);
                      }
                      else {
                        FUN_14572512c(plVar18,&local_168);
                      }
                      uVar19 = (uint)local_168;
                    }
                    else {
                      uVar19 = *(uint *)*puVar7;
                      local_168 = (code ****)CONCAT44((int)uVar9,uVar19);
                      *puVar7 = (ulonglong)puVar3;
                    }
                    if (uVar19 < 0x401) {
                      plVar14 = (longlong *)(lVar15 + 0x78);
                      *(undefined4 *)(lVar15 + 0x80) = 0;
                      local_238 = plVar16;
                      if (*(uint *)(lVar15 + 0x84) != uVar19) {
                        FUN_14706f710(plVar14);
                        uVar19 = (uint)local_168;
                      }
                      local_168 = (code ****)CONCAT44(local_168._4_4_,uVar19 - 1);
                      while (0 < (int)uVar19) {
                        iVar12 = *(int *)(lVar15 + 0x80);
                        *(uint *)(lVar15 + 0x80) = iVar12 + 1U;
                        if (*(uint *)(lVar15 + 0x84) < iVar12 + 1U) {
                          FUN_14706f770(plVar14,iVar12);
                        }
                        lVar20 = *plVar14;
                        puVar13 = (undefined8 *)(lVar20 + (longlong)iVar12 * 0x10);
                        *puVar13 = 0;
                        puVar13[1] = 0;
                        FUN_1402ac1b3(plVar18,lVar20 + (longlong)iVar12 * 0x10);
                        uVar19 = (uint)local_168;
                        local_168 = (code ****)CONCAT44(local_168._4_4_,(uint)local_168 - 1);
                      }
                      pbVar5 = (byte *)(lVar15 + 0x88);
                      pbVar8 = *(byte **)plVar18[1];
                      if ((byte *)((undefined8 *)plVar18[1])[1] < pbVar8 + 1) {
                        (**(code **)(*plVar18 + 0x170))(plVar18,pbVar5);
                      }
                      else {
                        *pbVar5 = *pbVar8;
                        *(longlong *)plVar18[1] = *(longlong *)plVar18[1] + 1;
                      }
                      plVar16 = local_238;
                      if (*pbVar5 < 4) {
                        FUN_1408383eb(plVar18,lVar15 + 0xa0);
                        FUN_1408383eb(plVar18,lVar15 + 0x68);
                        local_a8 = (code ***)((ulonglong)local_a8 & 0xffffffff00000000);
                        puVar7 = (ulonglong *)plVar18[1];
                        piVar1 = (int *)*puVar7 + 1;
                        if ((int *)puVar7[1] < piVar1) {
                          if ((*(byte *)((longlong)plVar18 + 0x2a) & 2) == 0) {
                            (**(code **)(*plVar18 + 0x170))(plVar18,&local_a8);
                          }
                          else {
                            FUN_14572512c(plVar18,&local_a8);
                          }
                          iVar12 = (int)local_a8;
                        }
                        else {
                          iVar12 = *(int *)*puVar7;
                          *puVar7 = (ulonglong)piVar1;
                        }
                        if (iVar12 < 0x81) {
                          local_a8 = (code ***)CONCAT44(local_a8._4_4_,iVar12 + -1);
                          if (0 < iVar12) {
                            do {
                              local_1e8 = (code ****)0x0;
                              local_1a8 = (code *****)0x0;
                              uStack_1a0 = (longlong *)0x0;
                              FUN_140bb5ffe(plVar18,&local_1e8);
                              FUN_14021219d(plVar18,&local_1a8);
                              local_168 = (code ****)&local_1e8;
                              plStack_160 = &local_1a8;
                              FUN_1406e263c(lVar15 + 8,&local_1f8,&local_168,0);
                              if (local_1a8 != (code *****)0x0) {
                                FUN_1400020a8();
                              }
                              iVar12 = (int)local_a8;
                              local_a8 = (code ***)CONCAT44(local_a8._4_4_,(int)local_a8 + -1);
                            } while (0 < iVar12);
                          }
                          plVar14 = local_208;
                          uVar17 = FUN_14001cc68((longlong)
                                                 (int)(-*(int *)((longlong)local_208 + 0x5c) &
                                                      ((int)local_208[0xb] +
                                                      *(int *)((longlong)local_208 + 0x5c)) - 1U),0)
                          ;
                          *(undefined8 *)(lVar15 + 0x70) = uVar17;
                          (**(code **)(*plVar14 + 0x2e8))(plVar14,uVar17,1);
                          local_168 = (code ****)&PTR_LAB_14ba6ce70;
                          plStack_160 = (longlong *)0x0;
                          local_158 = (void *)0x0;
                          FUN_14904501e(&local_148,plVar18);
                          cVar11 = FUN_14902ace4(*(undefined8 *)(lVar15 + 0x70),plVar14);
                          FUN_149044fa2(&local_168);
                          plVar16 = local_238;
                          pcVar22 = EnterCriticalSection_exref;
                          if (cVar11 != '\0') {
                            puVar13 = (undefined8 *)FUN_14001cc68(0x18,0x10);
                            *puVar13 = 0;
                            puVar13[1] = lVar15;
                            puVar13[2] = plVar16;
                            if (plVar16 != (longlong *)0x0) {
                              LOCK();
                              *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
                              UNLOCK();
                            }
                            if (puVar13 != (undefined8 *)0x0) {
                              LOCK();
                              puVar6 = *(undefined8 **)(param_1 + 0x40);
                              *(undefined8 **)(param_1 + 0x40) = puVar13;
                              UNLOCK();
                              LOCK();
                              *puVar6 = puVar13;
                              UNLOCK();
                            }
                          }
                        }
                      }
                    }
                  }
                }
LAB_1446aac39:
                *(undefined8 *)(param_1 + 0xb8) = 0;
                plVar18 = *(longlong **)(param_1 + 0xc0);
                if (plVar18 != (longlong *)0x0) {
                  *(undefined8 *)(param_1 + 0xc0) = 0;
                  LOCK();
                  plVar14 = plVar18 + 1;
                  *(int *)plVar14 = (int)*plVar14 + -1;
                  UNLOCK();
                  if ((int)*plVar14 == 0) {
                    (**(code **)*plVar18)(plVar18);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar18 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar18 + 0x10))(plVar18);
                    }
                  }
                }
                lpCriticalSection = local_230;
                if (plVar16 != (longlong *)0x0) {
                  LOCK();
                  plVar18 = plVar16 + 1;
                  *(int *)plVar18 = (int)*plVar18 + -1;
                  UNLOCK();
                  if ((int)*plVar18 == 0) {
                    (**(code **)*plVar16)(plVar16);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar16 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar16 + 0x10))(plVar16);
                    }
                  }
                }
              }
            } while( true );
          }
          cVar11 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x38))();
          if ((cVar11 == '\0') || (local_ac < 0x18)) goto LAB_1446ab0c9;
          memset(&local_168,0,0x90);
          FUN_144869430(&local_168);
          *local_218 = 0;
          local_218[1] = 0;
          local_218[2] = 0;
          local_168 = (code ****)&PTR_FUN_149f22c90;
          uStack_140 = uStack_140 | 0x101;
          FUN_140393c76(local_220,0x18);
          local_1f8 = 0;
          local_288 = (wchar_t *)((ulonglong)local_288 & 0xffffffff00000000);
          cVar11 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x68))
                             (*(longlong **)(param_1 + 0x88),alStack_d0[0],0x18);
          if (cVar11 != '\0') {
            *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x98) + (longlong)local_1f8;
            local_1a8 = (code *****)0x0;
            uStack_1a0 = (longlong *)0x0;
            local_198 = (void *)0x0;
            FUN_1498ed6e2(&local_168,&local_1a8);
            if (local_1a8._4_4_ != 0 && (int)local_1a8 == 0x45504943) {
              if (((uStack_1a0._4_4_ != 0 || (int)uStack_1a0 != 0) || (int)local_198 != 0) ||
                  local_198._4_4_ != 0) {
                *local_228 = (longlong)uStack_1a0;
                local_228[1] = (longlong)local_198;
                *(int *)(param_1 + 0x84) = local_1a8._4_4_;
                *(undefined1 *)(param_1 + 0x81) = 1;
                FUN_140212f8e(&local_1e8);
                *(code *****)(param_1 + 0x50) = local_1e8;
                (*pcVar22)(lpCriticalSection);
                *(undefined4 *)(param_1 + 0x28) = 1;
                LeaveCriticalSection(lpCriticalSection);
                if ((*(int *)(param_1 + 0x20) != 0) &&
                   (*(longlong **)(param_1 + 0x18) != (longlong *)0x0)) {
                  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x60))();
                }
                if (alStack_d0[0] != 0) {
                  FUN_1400020a8();
                }
                plVar18 = local_110;
                local_168 = (code ****)&PTR__purecall_149e35f70;
                if (local_110 != (longlong *)0x0) {
                  if (*local_110 != 0) {
                    FUN_1400020a8();
                  }
                  FUN_1400020a8(plVar18);
                }
                lVar15 = local_f0;
                if (local_f0 != 0) {
                  if (*(longlong *)(local_f0 + 0x40) != 0) {
                    FUN_1400020a8();
                  }
                  FUN_1400020a8(lVar15);
                  lpCriticalSection = local_230;
                }
                goto LAB_1446aa5cf;
              }
            }
          }
          if (alStack_d0[0] != 0) {
            FUN_1400020a8();
          }
          plVar18 = local_110;
          local_168 = (code ****)&PTR__purecall_149e35f70;
          if (local_110 != (longlong *)0x0) {
            if (*local_110 != 0) {
              FUN_1400020a8();
            }
            FUN_1400020a8(plVar18);
          }
          lVar15 = local_f0;
          if (local_f0 != 0) {
            if (*(longlong *)(local_f0 + 0x40) != 0) {
              FUN_1400020a8();
            }
            FUN_1400020a8(lVar15);
          }
          goto LAB_1446ab1e7;
        }
        iVar12 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x80))();
        if (iVar12 == 2) goto LAB_1446ab1e7;
LAB_1446ab0c9:
        iVar12 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x80))();
        if (iVar12 == 2) goto LAB_1446ab1e7;
      }
      SwitchToThread();
    } while (*(char *)(param_1 + 0xa8) != '\0');
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd0));
  *(undefined4 *)(param_1 + 0x28) = 3;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd0));
  plVar18 = (longlong *)(param_1 + 0x18);
  if ((*(int *)(param_1 + 0x20) != 0) && ((longlong *)*plVar18 != (longlong *)0x0)) {
    (**(code **)(*(longlong *)*plVar18 + 0x60))();
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  FUN_140212f8e(&local_168);
  *(code *****)(param_1 + 0x30) = local_168;
  if ((*(int *)(param_1 + 0x20) != 0) &&
     (puVar13 = (undefined8 *)*plVar18, puVar13 != (undefined8 *)0x0)) {
    (**(code **)*puVar13)(puVar13,0);
    FUN_1446efa72(plVar18,0,0,0x10);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if ((local_a0 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446ab950 FUN_1446ab950 body=1221 status=ok
// SIG undefined FUN_1446ab950(void)

void FUN_1446ab950(longlong param_1)

{
  int *piVar1;
  code *pcVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  longlong local_f0;
  longlong *local_e8;
  longlong *local_e0;
  int local_d8;
  undefined8 local_a8;
  longlong *local_a0;
  longlong local_98 [2];
  longlong local_88;
  ulonglong uStack_80;
  longlong local_78 [2];
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_145d6cc0e();
  plVar8 = (longlong *)FUN_145b157d8();
  lVar12 = plVar8[0x22];
  if (lVar12 == 0) {
    (**(code **)(*plVar8 + 1000))(plVar8);
    lVar12 = plVar8[0x22];
  }
  local_68 = 0;
  uStack_60 = 0;
  FUN_1498ec3bc(lVar12,local_78);
  cVar6 = FUN_146b137c6(local_78,&local_58);
  if (cVar6 == '\0') {
    local_58 = CONCAT26(uRam000000014c990952,CONCAT24(DAT_14c990950,DAT_14c99094c));
  }
  local_88 = 0;
  uStack_80 = 0;
  FUN_1498ec432(lVar12,&local_88);
  if ((longlong)(int)uStack_80 != 0) {
    lVar14 = (longlong)(int)uStack_80 << 4;
    lVar11 = local_88;
    do {
      cVar6 = FUN_146b137c6(lVar11,&local_e0);
      if ((cVar6 != '\0') || (cVar6 = FUN_146b13880(lVar11,&local_e0), cVar6 != '\0')) {
        uVar5 = uStack_60;
        lVar13 = (longlong)(int)uStack_60;
        uVar7 = (int)uStack_60 + 1;
        uStack_60 = CONCAT44(uStack_60._4_4_,uVar7);
        if (uStack_60._4_4_ < uVar7) {
          FUN_1498eebce(&local_68,uVar5 & 0xffffffff);
        }
        *(longlong **)(local_68 + lVar13 * 8) = local_e0;
      }
      lVar11 = lVar11 + 0x10;
      lVar14 = lVar14 + -0x10;
    } while (lVar14 != 0);
  }
  FUN_140056680(local_98,L"Initializing TcpMessaging bridge");
  if ((int)uStack_60 != 0) {
    FUN_140002266(&local_e0,L" for %d outgoing connections");
    iVar4 = local_d8 + -1;
    if (local_d8 == 0) {
      iVar4 = 0;
    }
    FUN_1400020e8(local_98,local_e0,iVar4);
    if (local_e0 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if (((int)local_58 != DAT_14c99094c) || (local_58._4_2_ != DAT_14c990950)) {
    FUN_1400020e8(local_98,L", listening on ",0xf);
    FUN_1498ed684(&local_58,&local_e0);
    plVar8 = local_e0;
    if (*(code **)(*local_e0 + 0x50) != FUN_144828418) {
      plVar8 = (longlong *)(**(code **)(*local_e0 + 0x50))();
    }
    FUN_1447a1fc0(plVar8);
    pcVar2 = *(code **)(*local_e0 + 0x28);
    if (pcVar2 == FUN_14482841c) {
      plVar8 = local_e0 + 3;
      if (local_e0[5] != 0) {
        plVar8 = (longlong *)(local_e0[5] + 8);
      }
    }
    else if (pcVar2 == (code *)&LAB_14010c34c) {
      plVar8 = local_e0 + 2;
    }
    else {
      plVar8 = (longlong *)(*pcVar2)(local_e0);
    }
    iVar4 = (int)plVar8[1] + -1;
    if ((int)plVar8[1] == 0) {
      iVar4 = 0;
    }
    FUN_1400020e8(local_98,*plVar8,iVar4);
    if (local_e0 != (longlong *)0x0) {
      (**(code **)(*local_e0 + 0x10))();
    }
  }
  lVar11 = FUN_14001cc68(0xf0,0x10);
  local_f8 = *(undefined4 *)(lVar12 + 0x54);
  FUN_1498ec6e4(lVar11,&local_58,&local_68,*(undefined4 *)(lVar12 + 0x50));
  plVar9 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14befadc0;
  plVar9[2] = lVar11;
  *(longlong *)(param_1 + 0x20) = lVar11;
  plVar8 = *(longlong **)(param_1 + 0x28);
  if (plVar8 != plVar9) {
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
      UNLOCK();
      plVar8 = *(longlong **)(param_1 + 0x28);
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x28) = plVar9;
  }
  FUN_1498eea10(&local_e0);
  local_f0 = lVar11 + 8;
  if (lVar11 == 0) {
    local_f0 = 0;
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  local_e8 = plVar9;
  uVar10 = FUN_1498eeaf2(&local_e0,&local_f0);
  FUN_1498eec8c(uVar10,&local_a8);
  plVar8 = local_a0;
  if ((undefined8 *)(param_1 + 0x10) != &local_a8) {
    *(undefined8 *)(param_1 + 0x10) = local_a8;
    local_a8 = 0;
    plVar3 = *(longlong **)(param_1 + 0x18);
    if (local_a0 != plVar3) {
      local_a0 = (longlong *)0x0;
      *(longlong **)(param_1 + 0x18) = plVar8;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar3 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
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
  }
  plVar8 = local_a0;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_a0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  plVar8 = local_e8;
  if (local_e8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_e8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_e8)(local_e8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  FUN_1498eeb7a(&local_e0);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar9 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_88,uStack_80 & 0xffffffff);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1446abe3e FUN_1446abe3e body=282 status=ok
// SIG undefined FUN_1446abe3e(void)

undefined8 * FUN_1446abe3e(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_1446abe16);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 1446abf58 FUN_1446abf58 body=147 status=ok
// SIG undefined FUN_1446abf58(void)

void FUN_1446abf58(void)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_14282b410(L"/Script/TcpMessaging",&PTR_FUN_14befa360,1,0);
  local_28 = 0x800000014befa388;
  local_14 = 0xc;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_1467716b6(&local_28);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446abfec FUN_1446abfec body=57 status=ok
// SIG undefined FUN_1446abfec(void)

void FUN_1446abfec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc322b8 == 0) {
    uVar1 = FUN_145c5c31b();
    DAT_14cc322b8 = FUN_14171c317(FUN_1467717fb,uVar1,L"EUdpMessageFormat");
  }
  return;
}



// FUNCTION 1446ac026 FUN_1446ac026 body=2588 status=ok
// SIG undefined FUN_1446ac026(void)

ulonglong FUN_1446ac026(longlong param_1,longlong *param_2,undefined1 param_3)

{
  uint *puVar1;
  int *piVar2;
  undefined1 *puVar3;
  uint *puVar4;
  byte *pbVar5;
  ulonglong *puVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  longlong lVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  undefined8 uVar15;
  longlong lVar16;
  undefined1 uVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  int iVar20;
  undefined **ppuVar21;
  bool bVar22;
  undefined1 auStack_168 [32];
  wchar_t *local_148;
  undefined4 local_140;
  undefined8 local_138;
  wchar_t *local_130;
  wchar_t *local_128;
  code *local_120;
  undefined1 *local_118;
  code **local_110;
  code *local_108;
  code *local_100;
  undefined1 local_e9;
  undefined **local_e8;
  code **local_e0;
  undefined8 uStack_d8;
  undefined1 local_c8 [8];
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined5 uStack_a0;
  undefined3 uStack_9b;
  undefined5 uStack_98;
  undefined8 uStack_93;
  undefined1 local_8b;
  code *local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  code *local_70;
  undefined *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_78 = 0;
  (**(code **)(*param_2 + 0x160))(param_2);
  puVar4 = (uint *)(param_1 + 0xa8);
  cVar10 = FUN_1498f0ac0(puVar4);
  if (cVar10 != '\0') {
    FUN_1400021e4(&local_78,&local_e8);
    ppuVar21 = local_e8;
    if ((int)local_e0 == 0) {
      ppuVar21 = (undefined **)&DAT_149dfb77a;
    }
    if (DAT_14c948fa0 == 0) {
      local_70 = (code *)&DAT_1427db2a2;
      lVar16 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c948fa0 = lVar16;
      FUN_1446f470e(&local_68,L"ScriptStruct",1);
      local_118 = &LAB_1468915ce;
      local_120 = FUN_1427dc742;
      local_130 = L"Engine";
      local_128 = (wchar_t *)CONCAT44(local_128._4_4_,199);
      local_138 = 0x10;
      local_140 = 0x10000020;
      local_148._0_4_ = 8;
      local_110 = &local_70;
      FUN_14574b4b2(lVar16);
      DAT_14c948fa0 = lVar16;
      if (DAT_14c927740 == 0) {
        local_110 = &local_88;
        local_88 = FUN_1449e2820;
        local_100 = FUN_14081d0ea;
        local_108 = FUN_14081d0ea;
        local_118 = &LAB_146856450;
        local_120 = FUN_1427b121c;
        local_128 = L"Engine";
        local_130 = (wchar_t *)0x0;
        local_138 = CONCAT44(local_138._4_4_,0x10000021);
        local_140 = 8;
        local_148._0_4_ = 0x28;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
      }
      lVar9 = DAT_14c948fa0;
      lVar16 = DAT_14c927740;
      uVar13 = FUN_1449e2fb2();
      local_148 = L"ScriptStruct";
      FUN_14574b446(uVar13,lVar9,lVar16,L"/Script/CoreUObject");
    }
    local_148 = (wchar_t *)0x0;
    lVar16 = FUN_146900dcf(DAT_14c948fa0,ppuVar21,8,0);
    if (lVar16 == 0) {
      *puVar4 = 0;
      iVar11 = 0;
    }
    else {
      uVar12 = *(uint *)(lVar16 + 0xc);
      *puVar4 = uVar12;
      if ((int)uVar12 < DAT_14c9647dc) {
        lVar16 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
      }
      else {
        lVar16 = 0;
      }
      iVar11 = *(int *)(lVar16 + 0x10);
      if (*(int *)(lVar16 + 0x10) == 0) {
        LOCK();
        iVar11 = DAT_14c964868 + 1;
        UNLOCK();
        iVar20 = DAT_14c964868 + 1;
        bVar22 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar11;
        if (bVar22) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar20);
        }
        LOCK();
        iVar11 = *(int *)(lVar16 + 0x10);
        bVar22 = iVar11 == 0;
        if (bVar22) {
          *(int *)(lVar16 + 0x10) = iVar20;
          iVar11 = 0;
        }
        UNLOCK();
        if (bVar22) {
          iVar11 = iVar20;
        }
      }
    }
    *(int *)(param_1 + 0xac) = iVar11;
    if (local_e8 != (undefined **)0x0) {
      FUN_1400020a8();
    }
  }
  if ((((*(int *)(param_1 + 0xac) != 0) && (uVar12 = *puVar4, -1 < (int)uVar12)) &&
      ((int)uVar12 < DAT_14c9647dc)) &&
     ((lVar16 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8), lVar16 != 0 &&
      (*(int *)(lVar16 + 0x10) == *(int *)(param_1 + 0xac))))) {
    FUN_1402ac1b3(param_2,param_1 + 0x90);
    uVar18 = (ulonglong)local_e8 >> 0x20;
    local_e8 = (undefined **)((ulonglong)local_e8 & 0xffffffff00000000);
    puVar6 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar6 + 1;
    if ((uint *)puVar6[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_e8,4);
      }
      else {
        FUN_14572512c(param_2,&local_e8);
      }
      uVar12 = (uint)local_e8;
    }
    else {
      uVar12 = *(uint *)*puVar6;
      local_e8 = (undefined **)CONCAT44((int)uVar18,uVar12);
      *puVar6 = (ulonglong)puVar1;
    }
    if (uVar12 < 0x401) {
      *(undefined4 *)(param_1 + 0x80) = 0;
      if (*(uint *)(param_1 + 0x84) != uVar12) {
        FUN_14706f710(param_1 + 0x78);
        uVar12 = (uint)local_e8;
      }
      local_e8 = (undefined **)CONCAT44(local_e8._4_4_,uVar12 - 1);
      while (0 < (int)uVar12) {
        uVar13 = FUN_1498f01c2(param_1 + 0x78);
        FUN_1402ac1b3(param_2,uVar13);
        uVar12 = (uint)local_e8;
        local_e8 = (undefined **)CONCAT44(local_e8._4_4_,(uint)local_e8 - 1);
      }
      pbVar5 = (byte *)(param_1 + 0x88);
      pbVar7 = *(byte **)param_2[1];
      if ((byte *)((undefined8 *)param_2[1])[1] < pbVar7 + 1) {
        (**(code **)(*param_2 + 0x170))(param_2,pbVar5,1);
      }
      else {
        *pbVar5 = *pbVar7;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
      }
      if (*pbVar5 < 4) {
        puVar8 = *(undefined4 **)param_2[1];
        if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar8 + 1) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x8c),4);
          }
          else {
            FUN_14572512c(param_2);
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x8c) = *puVar8;
          *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
        }
        FUN_1408383eb(param_2,param_1 + 0xa0);
        FUN_1408383eb(param_2,param_1 + 0x68);
        local_78 = local_78 & 0xffffffff00000000;
        puVar6 = (ulonglong *)param_2[1];
        piVar2 = (int *)*puVar6 + 1;
        if ((int *)puVar6[1] < piVar2) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,&local_78,4);
          }
          else {
            FUN_14572512c(param_2,&local_78);
          }
          iVar11 = (int)local_78;
        }
        else {
          iVar11 = *(int *)*puVar6;
          *puVar6 = (ulonglong)piVar2;
        }
        if (iVar11 < 0x81) {
          local_78 = CONCAT44(local_78._4_4_,iVar11 + -1);
          local_e9 = param_3;
          if (0 < iVar11) {
            do {
              local_68 = (undefined *)0x0;
              local_88 = (code *)0x0;
              uStack_80 = 0;
              (**(code **)(*param_2 + 0x160))(param_2,&local_68);
              FUN_14021219d(param_2,&local_88);
              local_e8 = &local_68;
              local_e0 = &local_88;
              FUN_1406e263c(param_1 + 8,&local_70,&local_e8,0);
              if (local_88 != (code *)0x0) {
                FUN_1400020a8();
              }
              iVar11 = (int)local_78;
              local_78 = CONCAT44(local_78._4_4_,(int)local_78 + -1);
            } while (0 < iVar11);
          }
          puVar6 = (ulonglong *)param_2[1];
          puVar3 = (undefined1 *)*puVar6 + 1;
          if ((undefined1 *)puVar6[1] < puVar3) {
            (**(code **)(*param_2 + 0x170))(param_2,&local_88,1);
            uVar17 = local_88._0_1_;
          }
          else {
            uVar17 = *(undefined1 *)*puVar6;
            local_88 = (code *)CONCAT71(local_88._1_7_,uVar17);
            *puVar6 = (ulonglong)puVar3;
          }
          if (*(int *)(param_1 + 0xac) == 0) {
LAB_1446ac83c:
            lVar16 = 0;
          }
          else {
            uVar12 = *puVar4;
            lVar16 = 0;
            if ((-1 < (int)uVar12) && ((int)uVar12 < DAT_14c9647dc)) {
              plVar14 = (longlong *)
                        ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8));
              if ((plVar14 == (longlong *)0x0) ||
                 (((int)plVar14[2] != *(int *)(param_1 + 0xac) ||
                  ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)))) goto LAB_1446ac83c;
              lVar16 = *plVar14;
            }
          }
          plVar14 = (longlong *)0x0;
          uVar13 = FUN_14001cc68((longlong)
                                 (int)(-*(int *)(lVar16 + 0x5c) &
                                      (*(int *)(lVar16 + 0x58) + *(int *)(lVar16 + 0x5c)) - 1U),0);
          *(undefined8 *)(param_1 + 0x70) = uVar13;
          if (*(int *)(param_1 + 0xac) != 0) {
            uVar12 = *puVar4;
            plVar14 = (longlong *)0x0;
            if ((-1 < (int)uVar12) && ((int)uVar12 < DAT_14c9647dc)) {
              puVar19 = (undefined8 *)
                        ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8));
              if ((puVar19 == (undefined8 *)0x0) ||
                 ((*(int *)(puVar19 + 2) != *(int *)(param_1 + 0xac) ||
                  ((*(uint *)(puVar19 + 1) & 0x10200000) != 0)))) {
                plVar14 = (longlong *)0x0;
              }
              else {
                plVar14 = (longlong *)*puVar19;
              }
            }
          }
          (**(code **)(*plVar14 + 0x2e8))(plVar14,uVar13,1);
          switch(uVar17) {
          case 1:
            local_e8 = &PTR_LAB_14ba6ce70;
            local_e0 = (code **)0x0;
            uStack_d8 = 0;
            FUN_14904501e(local_c8,param_2);
            if (*(int *)(param_1 + 0xac) == 0) {
LAB_1446ac881:
              uVar13 = 0;
            }
            else {
              uVar12 = *puVar4;
              uVar13 = 0;
              if ((-1 < (int)uVar12) && ((int)uVar12 < DAT_14c9647dc)) {
                puVar19 = (undefined8 *)
                          ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8));
                if ((puVar19 == (undefined8 *)0x0) ||
                   ((*(int *)(puVar19 + 2) != *(int *)(param_1 + 0xac) ||
                    ((*(uint *)(puVar19 + 1) & 0x10200000) != 0)))) goto LAB_1446ac881;
                uVar13 = *puVar19;
              }
            }
            uVar12 = FUN_14902ace4(*(undefined8 *)(param_1 + 0x70),uVar13,&local_e8);
            uVar18 = (ulonglong)uVar12;
            FUN_149044fa2(&local_e8);
            goto LAB_1446ac4f8;
          case 2:
            if (*(int *)(param_1 + 0xac) == 0) {
LAB_1446ac843:
              uVar13 = 0;
            }
            else {
              uVar12 = *puVar4;
              uVar13 = 0;
              if ((-1 < (int)uVar12) && ((int)uVar12 < DAT_14c9647dc)) {
                puVar19 = (undefined8 *)
                          ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8));
                if ((puVar19 == (undefined8 *)0x0) ||
                   ((*(int *)(puVar19 + 2) != *(int *)(param_1 + 0xac) ||
                    ((*(uint *)(puVar19 + 1) & 0x10200000) != 0)))) goto LAB_1446ac843;
                uVar13 = *puVar19;
              }
            }
            FUN_14047320e(uVar13,param_2,*(undefined8 *)(param_1 + 0x70),0);
            uVar18 = CONCAT71((int7)((ulonglong)param_1 >> 8),
                              (*(byte *)((longlong)param_2 + 0x29) & 2) == 0);
            goto LAB_1446ac4f8;
          case 3:
            local_e8 = &PTR_LAB_14ab31f70;
            uVar13 = 0;
            FUN_147ddc9c4(&local_e0,param_2,0);
            if (*(int *)(param_1 + 0xac) != 0) {
              uVar12 = *puVar4;
              uVar13 = 0;
              if ((-1 < (int)uVar12) && ((int)uVar12 < DAT_14c9647dc)) {
                puVar19 = (undefined8 *)
                          ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8));
                if ((puVar19 == (undefined8 *)0x0) ||
                   ((*(int *)(puVar19 + 2) != *(int *)(param_1 + 0xac) ||
                    ((*(uint *)(puVar19 + 1) & 0x10200000) != 0)))) {
                  uVar13 = 0;
                }
                else {
                  uVar13 = *puVar19;
                }
              }
            }
            uVar15 = *(undefined8 *)(param_1 + 0x70);
            break;
          case 4:
            local_e8 = &PTR_LAB_14ab31f70;
            FUN_147ddc9c4(&local_e0,param_2,1);
            if (*(int *)(param_1 + 0xac) == 0) {
LAB_1446ac888:
              uVar13 = 0;
            }
            else {
              uVar12 = *puVar4;
              uVar13 = 0;
              if ((-1 < (int)uVar12) && ((int)uVar12 < DAT_14c9647dc)) {
                puVar19 = (undefined8 *)
                          ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8));
                if ((puVar19 == (undefined8 *)0x0) ||
                   ((*(int *)(puVar19 + 2) != *(int *)(param_1 + 0xac) ||
                    ((*(uint *)(puVar19 + 1) & 0x10200000) != 0)))) goto LAB_1446ac888;
                uVar13 = *puVar19;
              }
            }
            uVar15 = *(undefined8 *)(param_1 + 0x70);
            break;
          default:
            goto switchD_1446ac485_default;
          }
          uStack_93 = 0;
          uStack_98 = 0;
          uStack_9b = 0;
          uStack_a0 = 0;
          local_a8 = 0;
          uStack_b0 = 0;
          local_b8 = 0;
          local_c0 = 0x1c;
          local_8b = local_e9;
          uVar12 = FUN_14902ace4(uVar15,uVar13,&local_e8);
          uVar18 = (ulonglong)uVar12;
          FUN_147dde11c(&local_e8);
          goto LAB_1446ac4f8;
        }
      }
    }
  }
switchD_1446ac485_default:
  uVar18 = 0;
LAB_1446ac4f8:
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return uVar18 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446aca44 FUN_1446aca44 body=421 status=ok
// SIG undefined FUN_1446aca44(void)

undefined8 * FUN_1446aca44(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined **local_d8 [5];
  byte local_b0;
  longlong *local_80;
  longlong local_60;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  memset(local_d8,0,0x90);
  FUN_144869430(local_d8);
  local_48 = 0;
  local_d8[0] = &PTR_FUN_149e1e050;
  local_38 = 0x7fffffffffffffff;
  local_b0 = local_b0 | 1;
  local_40 = param_2 + 0x10;
  FUN_1449c2eca(local_d8,0);
  if (*(byte *)(param_2 + 8) - 10 < 6) {
    local_e8 = 0;
    (*(code *)local_d8[0][0x2c])(local_d8,&local_e8);
    (*(code *)(&PTR_LAB_14befd400)[*(byte *)(param_1 + 2)])(param_1);
    *param_1 = local_e8;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  else if (*(byte *)(param_2 + 8) - 0x10 < 2) {
    local_e8 = 0;
    uStack_e0 = 0;
    plVar1 = (longlong *)(*(code *)local_d8[0][0x2c])(local_d8,&local_e8);
    (**(code **)(*plVar1 + 0x160))(plVar1,&uStack_e0);
    (*(code *)(&PTR_LAB_14befd400)[*(byte *)(param_1 + 2)])(param_1);
    *(undefined4 *)param_1 = (undefined4)local_e8;
    *(undefined4 *)((longlong)param_1 + 4) = local_e8._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_e0;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_e0._4_4_;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  local_d8[0] = &PTR__purecall_149e35f70;
  if (local_80 != (longlong *)0x0) {
    if (*local_80 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_80);
  }
  if (local_60 != 0) {
    if (*(longlong *)(local_60 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_60);
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446acbea FUN_1446acbea body=69 status=ok
// SIG undefined FUN_1446acbea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446acbea(void)

{
  _DAT_14cc32310 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001446acc2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc32318,1);
  return;
}



// FUNCTION 1446acc2f FUN_1446acc2f body=69 status=ok
// SIG undefined FUN_1446acc2f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446acc2f(void)

{
  _DAT_14cc32328 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001446acc71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc32330,1);
  return;
}



// FUNCTION 1446acc74 FUN_1446acc74 body=69 status=ok
// SIG undefined FUN_1446acc74(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446acc74(void)

{
  _DAT_14cc32340 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001446accb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc32348,1);
  return;
}



// FUNCTION 1446accb9 FUN_1446accb9 body=59 status=ok
// SIG undefined FUN_1446accb9(void)

void FUN_1446accb9(void)

{
  FUN_144760e21(DAT_14cc32380,DAT_14cc32388);
  if (DAT_14cc32380 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x0001446acce6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14cc32358);
  return;
}



// FUNCTION 1446accf4 FUN_1446accf4 body=59 status=ok
// SIG undefined FUN_1446accf4(void)

void FUN_1446accf4(void)

{
  FUN_144760e21(DAT_14cc323c8,DAT_14cc323d0);
  if (DAT_14cc323c8 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x0001446acd21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14cc323a0);
  return;
}



// FUNCTION 1446acd30 FUN_1446acd30 body=3512 status=ok
// SIG undefined FUN_1446acd30(void)

void FUN_1446acd30(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  byte bVar12;
  uint uVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  int iVar17;
  size_t _Size;
  longlong *plVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_268 [32];
  longlong *local_248;
  longlong *local_238;
  ulonglong *local_230;
  longlong *local_228;
  longlong *local_220;
  ulonglong local_218;
  longlong *local_210;
  ulonglong local_208;
  undefined4 *local_200;
  longlong local_1f8;
  undefined1 local_1f0 [4];
  undefined8 local_1ec;
  undefined8 uStack_1e4;
  undefined8 local_1dc;
  undefined8 uStack_1d4;
  undefined1 local_1cc;
  longlong local_1c8;
  longlong *plStack_1c0;
  longlong local_1b8 [2];
  uint local_1a8 [2];
  longlong local_1a0;
  undefined4 local_198;
  uint local_194;
  undefined8 local_190;
  uint local_188;
  longlong local_180;
  void *local_178;
  undefined8 uStack_170;
  longlong *local_168;
  longlong *local_160;
  undefined1 local_158 [4];
  uint local_154;
  undefined1 local_150 [4];
  ulonglong local_14c;
  ulonglong uStack_144;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined1 local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 local_110;
  undefined4 local_108;
  longlong *local_d0;
  longlong local_b0;
  longlong local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_268;
  local_1c8 = 0;
  plStack_1c0 = (longlong *)0x0;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10);
  cVar5 = FUN_1498f3574(param_1 + 0x10);
  if (cVar5 == '\0') {
LAB_1446ada81:
    plVar1 = plStack_1c0;
    if (plStack_1c0 != (longlong *)0x0) {
      LOCK();
      plVar8 = plStack_1c0 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plStack_1c0)(plStack_1c0);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    if ((local_70 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  local_1f8 = param_1 + 0x148;
  plVar1 = (longlong *)(param_1 + 0x38);
  local_200 = (undefined4 *)(param_1 + 0x19c);
LAB_1446acdd5:
  if (local_1c8 == 0) goto LAB_1446ace3b;
  local_1dc = 0;
  uStack_1d4 = 0;
  local_1ec = 0;
  uStack_1e4 = 0;
  FUN_1498f12d6(local_1c8,local_1f0);
  cVar5 = FUN_1498f3652(param_1,local_1f0,local_1b8);
  if (cVar5 == '\0') goto switchD_1446acf01_default;
  uVar6 = FUN_1447addd0(&local_1dc,0x10);
  plVar8 = (longlong *)FUN_1498fcb0c(local_1f8,uVar6,&local_1dc);
  puVar14 = (ulonglong *)(plVar8 + 2);
  if (((*(int *)((longlong)plVar8 + 0x14) == 0 && (int)plVar8[2] == 0) && (int)plVar8[3] == 0) &&
      *(int *)((longlong)plVar8 + 0x1c) == 0) {
    *(undefined4 *)puVar14 = (undefined4)local_1dc;
    *(undefined4 *)((longlong)plVar8 + 0x14) = local_1dc._4_4_;
    *(undefined4 *)(plVar8 + 3) = (undefined4)uStack_1d4;
    *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_1d4._4_4_;
    *(undefined1 *)(plVar8 + 4) = local_1f0[0];
    if ((*(int *)(param_1 + 0x200) != 0) &&
       (plVar9 = *(longlong **)(param_1 + 0x1f8), plVar9 != (longlong *)0x0)) {
      local_230 = puVar14;
      (**(code **)(*plVar9 + 0x60))(plVar9,puVar14);
      puVar14 = local_230;
    }
    *(undefined1 *)(param_1 + 0x198) = 1;
  }
  *(undefined1 *)(plVar8 + 4) = local_1f0[0];
  *plVar8 = local_1b8[0];
  plVar8[1] = *plVar1;
  switch(local_1cc) {
  case 1:
    FUN_1498f3db0(&local_128,local_1c8);
    plVar9 = plVar8 + 0xf;
    uVar15 = (ulonglong)local_128 & 0xffffffff;
    goto LAB_1446ad1d5;
  case 2:
    local_230 = puVar14;
    FUN_1498f3528(local_1a8,local_1c8);
    plVar9 = plVar8 + 0xf;
    uVar15 = (ulonglong)local_1a8[0];
    if ((int)plVar8[0x10] != *(int *)((longlong)plVar8 + 0xac)) {
      plVar18 = plVar8 + 0x16;
      if ((longlong *)plVar8[0x17] != (longlong *)0x0) {
        plVar18 = (longlong *)plVar8[0x17];
      }
      iVar17 = *(int *)((longlong)plVar18 + (ulonglong)((int)plVar8[0x18] - 1U & local_1a8[0]) * 4);
      if (iVar17 != -1) {
        do {
          lVar11 = *plVar9 + (longlong)iVar17 * 0x20;
          if (*(uint *)(*plVar9 + (longlong)iVar17 * 0x20) == local_1a8[0]) {
            plVar18 = (longlong *)(lVar11 + 8);
            if (plVar18 != (longlong *)0x0 && lVar11 != 0) {
              local_238 = plVar9;
              if ((*(byte *)(*(longlong *)(*plVar18 + 0x60) + 0xbc) & 1) != 0) {
                FUN_1498f3dfc(plVar8,uVar15,plVar1);
                uVar15 = (ulonglong)local_1a8[0];
              }
              local_128 = (undefined **)*local_230;
              uStack_120 = (longlong *)local_230[1];
              FUN_1498f2ba8(uVar15,&local_128,plVar18);
              uVar15 = (ulonglong)local_1a8[0];
              plVar9 = local_238;
            }
            break;
          }
          iVar17 = *(int *)(lVar11 + 0x18);
        } while (iVar17 != -1);
      }
    }
LAB_1446ad1d5:
    FUN_1498fae48(plVar9,uVar15);
    break;
  case 3:
    FUN_1498f36e2(param_1,&local_1c8,plVar8);
    break;
  case 4:
    local_178 = (void *)0x0;
    uStack_170 = 0;
    local_230 = puVar14;
    FUN_1498f41f8(local_1a8,local_1c8);
    if ((*(byte *)(local_1c8 + 0x29) & 2) == 0) {
      local_210 = plVar8 + 5;
      local_238 = (longlong *)FUN_1498fdcc2(local_210,local_1a8[0],local_1a8);
      local_228 = plVar8;
      if (*local_238 == 0) {
        uVar16 = 0;
        plVar9 = (longlong *)FUN_14001cc68(0x98,0x10);
        uVar7 = local_188;
        plVar9[1] = (longlong)&DAT_100000001;
        *plVar9 = (longlong)&PTR_FUN_14befd580;
        lVar11 = plVar8[4];
        uVar16 = CONCAT71((int7)((ulonglong)uVar16 >> 8),(char)lVar11);
        plVar9[2] = 0;
        *(char *)(plVar9 + 3) = (char)lVar11;
        *(undefined4 *)((longlong)plVar9 + 0x1c) = local_198;
        plVar9[9] = 0;
        plVar9[10] = 0x8000000000;
        plVar9[6] = 0;
        plVar9[4] = 0;
        plVar9[5] = 0;
        *(uint *)(plVar9 + 0xb) = local_188;
        *(undefined4 *)(plVar9 + 0xf) = 0;
        *(undefined8 *)((longlong)plVar9 + 0x6d) = 0;
        plVar9[0xc] = 0;
        plVar9[0xd] = 0;
        *(longlong *)((longlong)plVar9 + 0x7c) = local_1b8[0];
        plVar9[0x11] = local_180;
        local_220 = (longlong *)local_1a0;
        bVar20 = local_1a0 - 0x80000000U < 0xffffffff80000001;
        *(bool *)(plVar9 + 0x12) = (int)local_188 < 1 || bVar20;
        if ((int)local_188 >= 1 && !bVar20) {
          puStack_118 = (undefined8 *)0x0;
          local_110 = CONCAT44(0x80,local_188);
          local_208 = (ulonglong)local_188 + 0x1f;
          local_218 = local_208 >> 5;
          puVar10 = &local_128;
          if (local_188 < 0x81) {
LAB_1446ad402:
            _Size = (ulonglong)((int)local_218 - 1) * 4 + 4;
          }
          else {
            uVar16 = 0;
            FUN_1446efa72(&puStack_118,0,local_218,4);
            local_110 = CONCAT44((int)local_208,(int)local_110) & 0xffffffe0ffffffff;
            puVar10 = puStack_118;
            if (puStack_118 == (undefined8 *)0x0) {
              puVar10 = &local_128;
            }
            if (uVar7 < 0x101) goto LAB_1446ad402;
            _Size = (size_t)(uint)((int)local_218 << 2);
          }
          memset(puVar10,(int)CONCAT71((int7)((ulonglong)uVar16 >> 8),0xff),_Size);
          iVar17 = (int)local_110 + 0x1f;
          if (-1 < (int)local_110) {
            iVar17 = (int)local_110;
          }
          if ((int)local_110 % 0x20 != 0) {
            puVar10 = puStack_118;
            if (puStack_118 == (undefined8 *)0x0) {
              puVar10 = &local_128;
            }
            bVar12 = -(char)((int)local_110 % 0x20);
            *(uint *)((longlong)puVar10 + (longlong)(iVar17 >> 5) * 4) =
                 (uint)(*(int *)((longlong)puVar10 + (longlong)(iVar17 >> 5) * 4) << (bVar12 & 0x1f)
                       ) >> (bVar12 & 0x1f);
          }
          if (puStack_118 == (undefined8 *)0x0) {
            *(uint *)(plVar9 + 7) = (uint)local_128;
            *(undefined4 *)((longlong)plVar9 + 0x3c) = local_128._4_4_;
            *(undefined4 *)(plVar9 + 8) = (undefined4)uStack_120;
            *(undefined4 *)((longlong)plVar9 + 0x44) = uStack_120._4_4_;
          }
          if (plVar9[9] != 0) {
            FUN_1400020a8();
          }
          plVar9[9] = (longlong)puStack_118;
          puStack_118 = (undefined8 *)0x0;
          *(int *)(plVar9 + 10) = (int)local_110;
          *(undefined4 *)((longlong)plVar9 + 0x54) = local_110._4_4_;
          lVar11 = plVar9[5];
          *(uint *)(plVar9 + 5) = (int)lVar11 + (uint)local_220;
          if ((uint)(*(int *)((longlong)plVar9 + 0x2c) - (int)lVar11) < (uint)local_220) {
            FUN_1447403be(plVar9 + 4);
          }
        }
        if (plVar9 == (longlong *)0x0) {
          *local_238 = 0x10;
          local_220 = local_238 + 1;
          plVar8 = (longlong *)local_238[1];
          if (plVar8 != (longlong *)0x0) {
            *local_220 = 0;
LAB_1446ad55f:
            local_220 = local_238 + 1;
            LOCK();
            plVar18 = plVar8 + 1;
            *(int *)plVar18 = (int)*plVar18 + -1;
            UNLOCK();
            if ((int)*plVar18 == 0) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar2 = (int *)((longlong)plVar8 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
              }
            }
            if (plVar9 != (longlong *)0x0) goto LAB_1446ad583;
          }
        }
        else {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
          *local_238 = (longlong)(plVar9 + 2);
          local_220 = local_238 + 1;
          plVar8 = (longlong *)local_238[1];
          if (plVar9 == plVar8) {
            LOCK();
            plVar8 = plVar9 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
              (**(code **)*plVar9)(plVar9);
              LOCK();
              piVar2 = (int *)((longlong)plVar9 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
          }
          else {
            *local_220 = (longlong)plVar9;
            if (plVar8 != (longlong *)0x0) goto LAB_1446ad55f;
          }
LAB_1446ad583:
          LOCK();
          plVar8 = plVar9 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
        if (*(char *)(*local_238 + 0x80) == '\x01') {
          FUN_1498fe2b0(local_210,local_1a8[0]);
          *local_238 = 0;
          plVar8 = (longlong *)local_238[1];
          if (plVar8 != (longlong *)0x0) {
            *local_220 = 0;
            LOCK();
            plVar9 = plVar8 + 1;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)*plVar9 == 0) {
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
          goto LAB_1446acf95;
        }
      }
      uVar7 = local_194;
      local_228[0x30] = local_228[0x30] + (longlong)(int)uStack_170;
      local_228[0x35] = local_228[0x35] + 1;
      lVar11 = *local_238;
      if ((((*(char *)(lVar11 + 0x80) == '\0') && (0 < *(int *)(lVar11 + 0x18))) &&
          ((int)uStack_170 != 0)) &&
         ((-1 < (int)local_194 && ((int)local_194 < *(int *)(lVar11 + 0x40))))) {
        local_210 = (longlong *)(lVar11 + 0x28);
        local_220 = (longlong *)CONCAT44(local_220._4_4_,1 << ((byte)local_194 & 0x1f));
        plVar8 = *(longlong **)(lVar11 + 0x38);
        if (*(longlong **)(lVar11 + 0x38) == (longlong *)0x0) {
          plVar8 = local_210;
        }
        local_218 = (ulonglong)(local_194 >> 5);
        if ((*(uint *)((longlong)plVar8 + local_218 * 4) >> (local_194 & 0x1f) & 1) != 0) {
          uVar13 = (uint)local_190;
          if (((int)uVar13 < 0) || (*(int *)(lVar11 + 0x18) - (int)uStack_170 < (int)uVar13))
          goto LAB_1446ad64e;
          memcpy((void *)((ulonglong)(uVar13 & 0x7fffffff) + *(longlong *)(lVar11 + 0x10)),local_178
                 ,(longlong)(int)uStack_170);
          plVar8 = local_210;
          if (*(longlong **)(lVar11 + 0x38) != (longlong *)0x0) {
            plVar8 = *(longlong **)(lVar11 + 0x38);
          }
          puVar3 = (uint *)((longlong)plVar8 + local_218 * 4);
          *puVar3 = *puVar3 & ~(uint)local_220;
          *(int *)(lVar11 + 0x48) = *(int *)(lVar11 + 0x48) + -1;
          *(int *)(lVar11 + 0x60) = *(int *)(lVar11 + 0x60) + (int)uStack_170;
        }
        *(longlong *)(lVar11 + 0x20) = *plVar1;
        if ((*(byte *)(lVar11 + 0xc) & 1) != 0) {
          local_128 = (undefined **)CONCAT44(local_128._4_4_,uVar7);
          FUN_141733646(lVar11 + 0x50);
        }
      }
LAB_1446ad64e:
      FUN_1498f1a23();
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cc323a0);
      if ((longlong)DAT_14cc323d0 != 0) {
        lVar11 = 0;
        do {
          if ((*(int *)(DAT_14cc323c8 + 8 + lVar11) != 0) &&
             (*(longlong *)(DAT_14cc323c8 + lVar11) != 0)) {
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cc323a0);
            local_108 = *(undefined4 *)(*local_238 + 0x60);
            local_110 = (ulonglong)(uint)(*(int *)(*local_238 + 0x48) << 10);
            local_128 = (undefined **)*local_230;
            uStack_120 = (longlong *)local_230[1];
            puStack_118 = (undefined8 *)CONCAT44(puStack_118._4_4_,local_1a8[0]);
            FUN_1498fe3aa(&local_128);
            goto LAB_1446ad67d;
          }
          lVar11 = lVar11 + 0x10;
        } while ((longlong)DAT_14cc323d0 * 0x10 != lVar11);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cc323a0);
LAB_1446ad67d:
      plVar8 = local_228;
      if ((*(int *)(*local_238 + 0x48) == 0) && (*(char *)(*local_238 + 100) == '\0')) {
        local_150[0] = (undefined1)local_228[4];
        local_14c = *local_230;
        uStack_144 = local_230[1];
        local_13c = *local_200;
        uStack_138 = local_200[1];
        uStack_134 = local_200[2];
        uStack_130 = local_200[3];
        local_12c = 2;
        local_154 = local_1a8[0];
        FUN_146866eea(&local_128);
        FUN_1498f12d6(&local_128,local_150);
        FUN_1498f3528(&local_154,&local_128);
        plVar9 = *(longlong **)(param_1 + 0x1b8);
        (**(code **)(*DAT_14c990958 + 0x90))(DAT_14c990958,&local_168);
        (**(code **)(*local_168 + 0x18))(local_168,(int)*plVar8);
        (**(code **)(*local_168 + 0x28))(local_168,*(undefined2 *)((longlong)plVar8 + 4));
        local_248 = local_168;
        (**(code **)(*plVar9 + 0x50))(plVar9,local_80,local_78,local_158);
        plVar8 = local_160;
        if (local_160 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_160 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*local_160)(local_160);
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
        if (local_80 != 0) {
          FUN_1400020a8();
        }
        plVar8 = local_d0;
        local_128 = &PTR__purecall_149e35f70;
        if (local_d0 != (longlong *)0x0) {
          if (*local_d0 != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(plVar8);
        }
        lVar11 = local_b0;
        if (local_b0 != 0) {
          if (*(longlong *)(local_b0 + 0x40) != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(lVar11);
        }
        FUN_1446af4da(param_1,local_238,local_228);
      }
    }
LAB_1446acf95:
    if (local_178 != (void *)0x0) {
      FUN_1400020a8();
    }
    break;
  case 5:
    FUN_1498f3798(&local_1c8,plVar8);
    break;
  case 6:
    uStack_120 = (longlong *)0x0;
    puStack_118 = (undefined8 *)0x0;
    uVar7 = FUN_1498f44ce(local_1c8);
    if ((int)plVar8[0x10] != *(int *)((longlong)plVar8 + 0xac)) {
      plVar9 = (longlong *)plVar8[0x17];
      if ((longlong *)plVar8[0x17] == (longlong *)0x0) {
        plVar9 = plVar8 + 0x16;
      }
      iVar17 = *(int *)((longlong)plVar9 + (ulonglong)((int)plVar8[0x18] - 1U & uVar7) * 4);
      if (iVar17 != -1) {
        do {
          if (*(uint *)(plVar8[0xf] + (longlong)iVar17 * 0x20) == uVar7) {
            FUN_1498f4544(&local_128,local_1c8);
            if ((int)plVar8[0x10] != *(int *)((longlong)plVar8 + 0xac)) {
              plVar9 = plVar8 + 0x16;
              if ((longlong *)plVar8[0x17] != (longlong *)0x0) {
                plVar9 = (longlong *)plVar8[0x17];
              }
              iVar17 = *(int *)((longlong)plVar9 +
                               (ulonglong)((int)plVar8[0x18] - 1U & (uint)local_128) * 4);
              if (iVar17 != -1) {
                goto LAB_1446ad3e0;
              }
            }
            break;
          }
          iVar17 = *(int *)((longlong)iVar17 * 0x20 + plVar8[0xf] + 0x18);
        } while (iVar17 != -1);
      }
    }
    goto LAB_1446ad109;
  case 7:
    FUN_1498f3a94(&local_1c8,plVar8);
    break;
  case 8:
    uStack_120 = (longlong *)0x0;
    puStack_118 = (undefined8 *)0x0;
    FUN_1498f3eec(&local_128,local_1c8);
    FUN_1498f3fc4(plVar8,(ulonglong)local_128 & 0xffffffff,&uStack_120,plVar1);
    if (uStack_120 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    break;
  case 9:
    FUN_1498f3800(param_1,&local_1c8,plVar8);
    break;
  case 10:
    FUN_1498f3a2c(&local_1c8,plVar8);
    break;
  case 0xb:
    FUN_1498f3b96(param_1,&local_1c8);
  }
  goto switchD_1446acf01_default;
  while (iVar17 = *(int *)(lVar11 + 0x18), iVar17 != -1) {
LAB_1446ad3e0:
    lVar11 = plVar8[0xf] + (longlong)iVar17 * 0x20;
    if (*(uint *)(plVar8[0xf] + (longlong)iVar17 * 0x20) == (uint)local_128) {
      if (lVar11 != 0) {
        local_230 = *(ulonglong **)(lVar11 + 8);
        local_228 = *(longlong **)(lVar11 + 0x10);
        if (local_228 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_228 + 1) = (int)local_228[1] + 1;
          UNLOCK();
        }
        if (local_230 != (ulonglong *)0x0) {
          lVar11 = (longlong)(int)puStack_118;
          if (lVar11 != 0) {
            local_238 = uStack_120;
            lVar19 = 0;
            do {
              FUN_1446afd6a(local_230,*(undefined2 *)((longlong)local_238 + lVar19));
              lVar19 = lVar19 + 2;
            } while (lVar11 * 2 != lVar19);
          }
        }
        plVar8 = local_228;
        if (local_228 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_228 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*local_228)(local_228);
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_228 + 0x10))();
            }
          }
        }
      }
      break;
    }
  }
LAB_1446ad109:
  if (uStack_120 != (longlong *)0x0) {
    FUN_1400020a8();
  }
switchD_1446acf01_default:
  lVar11 = *plVar1;
  FUN_140212f8e(&local_128);
  if (lVar11 + (longlong)((double)lVar4 * 1.25) <= (longlong)local_128) goto LAB_1446ada81;
LAB_1446ace3b:
  cVar5 = FUN_1498f3574(param_1 + 0x10,&local_1c8);
  if (cVar5 == '\0') goto LAB_1446ada81;
  goto LAB_1446acdd5;
}



// FUNCTION 1446adaea FUN_1446adaea body=218 status=ok
// SIG undefined FUN_1446adaea(void)

void FUN_1446adaea(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)(param_1 + 0x250);
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  if (*(char *)(param_1 + 0x278) == '\x01') {
    cVar2 = FUN_1446af12e(param_1,puVar1);
    if (cVar2 == '\0') goto LAB_1446adb9a;
    if (*(char *)(param_1 + 0x278) == '\x01') {
      FUN_1498f2a72(puVar1);
      *(undefined1 *)(param_1 + 0x278) = 0;
    }
  }
  do {
    cVar2 = FUN_1498f3d10(param_1 + 0x20,&local_58);
    if (cVar2 == '\0') goto LAB_1446adb9a;
    cVar2 = FUN_1446af12e(param_1,&local_58);
  } while (cVar2 != '\0');
  if (&local_58 != puVar1) {
    if (*(char *)(param_1 + 0x278) == '\x01') {
      FUN_1498f2a72(puVar1);
    }
    FUN_1498fdc40(puVar1,&local_58);
    *(undefined1 *)(param_1 + 0x278) = 1;
  }
LAB_1446adb9a:
  FUN_1498f2a72(&local_58);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446adbc6 FUN_1446adbc6 body=5478 status=ok
// SIG undefined FUN_1446adbc6(void)

void FUN_1446adbc6(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  byte bVar8;
  DWORD DVar9;
  DWORD DVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint *puVar19;
  longlong *plVar20;
  undefined8 *puVar21;
  uint uVar22;
  longlong lVar23;
  uint *puVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined8 *puVar27;
  longlong **pplVar28;
  uint uVar29;
  undefined4 *puVar30;
  ulonglong uVar31;
  int iVar32;
  int iVar33;
  longlong *plVar34;
  longlong **pplVar35;
  longlong *_Dst;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar36 [16];
  undefined1 auStack_7e8 [32];
  longlong *local_7c8;
  longlong *local_7b8;
  longlong *local_7b0;
  longlong local_7a8;
  longlong **local_7a0;
  longlong *local_798;
  int local_78c;
  uint local_788;
  int local_784;
  uint *local_780;
  ulonglong local_778;
  ulonglong local_770;
  undefined8 *local_768;
  ulonglong local_760;
  ulonglong local_758;
  undefined8 *local_750;
  int local_744;
  ulonglong local_740;
  int *local_738;
  longlong *local_730;
  longlong *local_728;
  undefined1 local_71c [4];
  void *local_718;
  undefined8 uStack_710;
  longlong *local_708;
  undefined8 uStack_700;
  undefined4 local_6f0;
  undefined4 local_6ec;
  undefined4 uStack_6e8;
  undefined4 uStack_6e4;
  undefined4 uStack_6e0;
  undefined8 local_6dc;
  undefined8 uStack_6d4;
  undefined1 local_6cc;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  longlong *local_6b8;
  longlong *local_6a8;
  undefined8 uStack_6a0;
  undefined4 local_690;
  undefined4 uStack_68c;
  undefined4 uStack_688;
  undefined4 uStack_684;
  undefined4 uStack_680;
  undefined4 local_67c;
  undefined4 uStack_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined1 local_66c;
  longlong *local_638;
  longlong local_618;
  longlong local_5e8;
  undefined4 local_5e0;
  undefined4 *local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_7e8;
  plVar20 = (longlong *)(param_1 + 0x148);
  puVar2 = (uint *)(param_1 + 0x158);
  iVar33 = *(int *)(param_1 + 0x170);
  if (iVar33 == 0) {
    uVar25 = 1;
    uVar26 = 0;
    iVar32 = 0;
    iVar16 = 0;
  }
  else {
    puVar24 = *(uint **)(param_1 + 0x168);
    if (*(uint **)(param_1 + 0x168) == (uint *)0x0) {
      puVar24 = puVar2;
    }
    uVar29 = *puVar24;
    if (uVar29 == 0) {
      iVar32 = iVar33 + 0x1e;
      if (-1 < iVar33 + -1) {
        iVar32 = iVar33 + -1;
      }
      uVar26 = 0;
      uVar31 = (ulonglong)(uint)(iVar32 >> 5);
      if (iVar32 >> 5 < 1) {
        uVar31 = uVar26;
      }
      iVar32 = 0;
      do {
        if (uVar31 == uVar26) goto LAB_1446added;
        iVar32 = iVar32 + 0x20;
        uVar29 = puVar24[uVar26 + 1];
        uVar26 = uVar26 + 1;
      } while (uVar29 == 0);
    }
    else {
      uVar26 = 0;
      iVar32 = 0;
    }
    uVar25 = (ulonglong)(-uVar29 & uVar29);
    uVar31 = uVar25 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar31 != 0) {
      for (; uVar31 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    iVar16 = (iVar32 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
    if (iVar33 <= iVar16) {
      iVar16 = iVar33;
    }
  }
  if (iVar16 < iVar33) {
    uVar29 = 0xffffffff;
    auVar36 = roundpd(unaff_XMM6,ZEXT816(0x416312d010000000),1);
    do {
      lVar23 = *plVar20;
      lVar17 = (longlong)iVar16 * 0x1f0;
      if ((((*(int *)(lVar23 + 4 + lVar17) != 0 || *(int *)(lVar23 + lVar17) != 0) ||
           *(int *)(lVar23 + 8 + lVar17) != 0) || *(int *)(lVar23 + 0xc + lVar17) != 0) &&
         ((longlong)((double)(longlong)auVar36._0_8_ * 5.0) + *(longlong *)(lVar23 + lVar17 + 0x18)
          < *(longlong *)(param_1 + 0x38))) {
        if ((*(int *)(param_1 + 0x210) != 0) && (*(longlong **)(param_1 + 0x208) != (longlong *)0x0)
           ) {
          (**(code **)(**(longlong **)(param_1 + 0x208) + 0x60))();
        }
        FUN_1498feb72(plVar20,iVar16);
        iVar33 = *(int *)(param_1 + 0x170);
      }
      uVar29 = uVar29 & ~(uint)uVar25;
      puVar24 = *(uint **)(param_1 + 0x168);
      if (*(uint **)(param_1 + 0x168) == (uint *)0x0) {
        puVar24 = puVar2;
      }
      iVar16 = (int)uVar26;
      lVar23 = (longlong)iVar16;
      uVar13 = puVar24[lVar23] & uVar29;
      if (uVar13 == 0) {
        iVar14 = iVar33 + 0x1e;
        if (-1 < iVar33 + -1) {
          iVar14 = iVar33 + -1;
        }
        iVar14 = iVar14 >> 5;
        iVar15 = iVar14;
        if (iVar14 < iVar16) {
          iVar15 = iVar16;
        }
        if (iVar14 <= iVar16) break;
        lVar17 = 0;
        while( true ) {
          iVar32 = iVar32 + 0x20;
          uVar13 = puVar24[lVar23 + lVar17 + 1];
          if (uVar13 != 0) break;
          lVar17 = lVar17 + 1;
          if (iVar15 - lVar23 == lVar17) goto LAB_1446added;
        }
        uVar26 = (ulonglong)(iVar16 + (int)lVar17 + 1);
        uVar29 = 0xffffffff;
      }
      uVar25 = (ulonglong)(-uVar13 & uVar13);
      uVar31 = uVar25 * 2 + 1;
      lVar23 = 0x3f;
      if (uVar31 != 0) {
        for (; uVar31 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      iVar16 = (iVar32 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
    } while (iVar16 < iVar33);
  }
LAB_1446added:
  FUN_1498f4872(param_1);
  FUN_1498f0fc0(*(undefined8 *)(param_1 + 0x30),
                (*(int *)(param_1 + 0x150) - *(int *)(param_1 + 0x17c)) + 1);
  if ((*(char *)(param_1 + 0x1c8) != '\x01') || (*(char *)(param_1 + 0x198) != '\x01'))
  goto LAB_1446ae384;
  local_6ec = 0;
  uStack_6e8 = 0;
  uStack_6e4 = 0;
  uStack_6e0 = 0;
  local_6dc = *(undefined8 *)(param_1 + 0x19c);
  uStack_6d4 = *(undefined8 *)(param_1 + 0x1a4);
  local_6f0 = CONCAT31(local_6f0._1_3_,0x11);
  local_6cc = 0xb;
  local_6c8 = (longlong **)0x0;
  uStack_6c0 = 0;
  local_6a8 = (longlong *)0x0;
  uStack_6a0 = (longlong *)0x0;
  local_708 = (longlong *)0x0;
  uStack_700 = 0;
  local_718 = (void *)0x0;
  uStack_710 = (longlong *)0x0;
  uVar29 = *(uint *)(param_1 + 0x170);
  plVar11 = (longlong *)(ulonglong)uVar29;
  if (uVar29 == 0) {
    uVar26 = 1;
    uVar31 = 0;
    iVar33 = 0;
    uVar13 = 0;
  }
  else {
    puVar24 = *(uint **)(param_1 + 0x168);
    if (*(uint **)(param_1 + 0x168) == (uint *)0x0) {
      puVar24 = puVar2;
    }
    uVar13 = *puVar24;
    if (uVar13 == 0) {
      iVar33 = uVar29 + 0x1e;
      if (-1 < (int)(uVar29 - 1)) {
        iVar33 = uVar29 - 1;
      }
      uVar31 = 0;
      uVar26 = (ulonglong)(uint)(iVar33 >> 5);
      if (iVar33 >> 5 < 1) {
        uVar26 = uVar31;
      }
      iVar33 = 0;
      do {
        if (uVar26 == uVar31) goto LAB_1446ae321;
        iVar33 = iVar33 + 0x20;
        uVar13 = puVar24[uVar31 + 1];
        uVar31 = uVar31 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar31 = 0;
      iVar33 = 0;
    }
    uVar26 = (ulonglong)(-uVar13 & uVar13);
    uVar25 = uVar26 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    uVar13 = (iVar33 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
    if ((int)uVar29 <= (int)uVar13) {
      uVar13 = uVar29;
    }
  }
  if (uVar13 == uVar29) {
LAB_1446ae321:
    *(undefined1 *)(param_1 + 0x198) = 0;
  }
  else {
    uVar29 = 0xffffffff;
    local_7b8 = plVar11;
    do {
      uVar25 = uStack_700;
      local_798 = (longlong *)CONCAT44(local_798._4_4_,iVar33);
      puVar30 = (undefined4 *)((longlong)(int)uVar13 * 0x1f0 + *plVar20);
      lVar23 = (longlong)(int)uStack_700;
      uVar13 = (int)uStack_700 + 1;
      uStack_700 = CONCAT44(uStack_700._4_4_,uVar13);
      if (uStack_700._4_4_ < uVar13) {
        FUN_140c60952(&local_708,uVar25 & 0xffffffff);
        plVar11 = local_7b8;
      }
      uVar25 = uStack_6c0;
      uVar3 = puVar30[1];
      uVar5 = puVar30[2];
      uVar6 = puVar30[3];
      plVar34 = local_708 + lVar23 * 2;
      *(undefined4 *)plVar34 = *puVar30;
      *(undefined4 *)((longlong)plVar34 + 4) = uVar3;
      *(undefined4 *)(plVar34 + 1) = uVar5;
      *(undefined4 *)((longlong)plVar34 + 0xc) = uVar6;
      lVar23 = (longlong)(int)uStack_6c0;
      uVar13 = (int)uStack_6c0 + 1;
      uStack_6c0 = CONCAT44(uStack_6c0._4_4_,uVar13);
      if (uStack_6c0._4_4_ < uVar13) {
        FUN_1498eebce(&local_6c8,uVar25 & 0xffffffff);
        plVar11 = local_7b8;
      }
      local_6c8[lVar23] = *(longlong **)(puVar30 + 4);
      uVar29 = uVar29 & ~(uint)uVar26;
      puVar24 = *(uint **)(param_1 + 0x168);
      if (*(uint **)(param_1 + 0x168) == (uint *)0x0) {
        puVar24 = puVar2;
      }
      uVar22 = *(uint *)(param_1 + 0x170);
      iVar32 = (int)uVar31;
      lVar23 = (longlong)iVar32;
      uVar13 = puVar24[lVar23] & uVar29;
      iVar33 = (int)local_798;
      if (uVar13 == 0) {
        iVar16 = uVar22 + 0x1e;
        if (-1 < (int)(uVar22 - 1)) {
          iVar16 = uVar22 - 1;
        }
        iVar16 = iVar16 >> 5;
        iVar33 = (int)local_798 + 0x20;
        iVar14 = iVar16;
        if (iVar16 < iVar32) {
          iVar14 = iVar32;
        }
        if (iVar32 < iVar16) {
          lVar17 = 0;
          do {
            uVar13 = puVar24[lVar23 + lVar17 + 1];
            if (uVar13 != 0) {
              uVar31 = (ulonglong)(iVar32 + (int)lVar17 + 1);
              uVar29 = 0xffffffff;
              goto LAB_1446ae02e;
            }
            iVar33 = iVar33 + 0x20;
            lVar17 = lVar17 + 1;
          } while (iVar14 - lVar23 != lVar17);
          uVar29 = 0xffffffff;
          iVar32 = iVar14;
        }
        uVar31 = (ulonglong)(iVar32 + 1);
        plVar11 = local_7b8;
        uVar13 = uVar22;
      }
      else {
LAB_1446ae02e:
        uVar26 = (ulonglong)(-uVar13 & uVar13);
        uVar25 = uVar26 * 2 + 1;
        lVar23 = 0x3f;
        if (uVar25 != 0) {
          for (; uVar25 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        uVar13 = (iVar33 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
        if ((int)uVar22 <= (int)uVar13) {
          uVar13 = uVar22;
        }
      }
    } while (uVar13 != (uint)plVar11);
    if ((longlong)(int)uStack_6c0 < 1) goto LAB_1446ae321;
    local_7a0 = local_6c8;
    local_7b0 = local_708;
    plVar11 = (longlong *)0x0;
    local_7b8 = (longlong *)(longlong)(int)uStack_6c0;
    do {
      local_798 = plVar11 + 5;
      uVar29 = (int)local_7b8 - (int)plVar11;
      plVar34 = (longlong *)(ulonglong)uVar29;
      if ((uint)local_798 < uVar29) {
        plVar34 = (longlong *)((ulonglong)local_798 & 0xffffffff);
      }
      iVar33 = (int)plVar34;
      uStack_6a0 = (longlong *)CONCAT44(uStack_6a0._4_4_,iVar33);
      plVar12 = plVar34;
      if (iVar33 != 0 || uStack_6a0._4_4_ != 0) {
        pplVar28 = local_7a0 + (longlong)plVar11;
        FUN_1498eeec8(&local_6a8,plVar34);
        memcpy(local_6a8,pplVar28,(longlong)plVar34 << 3);
        plVar12 = uStack_6a0;
      }
      uStack_6a0 = plVar12;
      uStack_710 = (longlong *)CONCAT44(uStack_710._4_4_,iVar33);
      if (uStack_710._4_4_ != 0 || iVar33 != 0) {
        plVar11 = local_7b0 + (longlong)plVar11 * 2;
        FUN_1417246d8(&local_718,plVar34);
        memcpy(local_718,plVar11,(longlong)plVar34 << 4);
        plVar34 = uStack_710;
      }
      uStack_710 = plVar34;
      FUN_146866eea(&local_690);
      FUN_1498f12d6(&local_690,&local_6f0);
      FUN_1498febfc(&local_690,&local_6a8);
      FUN_146ed6908(&local_690,&local_718);
      if ((longlong)(int)uStack_6c0 != 0) {
        pplVar28 = local_6c8 + (int)uStack_6c0;
        pplVar35 = local_6c8;
        do {
          plVar11 = *(longlong **)(param_1 + 0x1b8);
          (**(code **)(*DAT_14c990958 + 0x90))(DAT_14c990958,&local_730);
          (**(code **)(*local_730 + 0x18))(local_730,*(uint *)pplVar35);
          (**(code **)(*local_730 + 0x28))(local_730,*(undefined2 *)((longlong)pplVar35 + 4));
          local_7c8 = local_730;
          (**(code **)(*plVar11 + 0x50))(plVar11,local_5e8,local_5e0,local_71c);
          plVar11 = local_728;
          if (local_728 != (longlong *)0x0) {
            LOCK();
            plVar34 = local_728 + 1;
            *(int *)plVar34 = (int)*plVar34 + -1;
            UNLOCK();
            if ((int)*plVar34 == 0) {
              (**(code **)*local_728)(local_728);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
              }
            }
          }
          pplVar35 = pplVar35 + 1;
        } while (pplVar35 != pplVar28);
      }
      if (local_5e8 != 0) {
        FUN_1400020a8();
      }
      plVar11 = local_638;
      local_690 = 0x49e35f70;
      uStack_68c = 1;
      if (local_638 != (longlong *)0x0) {
        if (*local_638 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar11);
      }
      lVar23 = local_618;
      if (local_618 != 0) {
        if (*(longlong *)(local_618 + 0x40) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(lVar23);
      }
      plVar11 = local_798;
    } while (local_798 < local_7b8);
    *(undefined1 *)(param_1 + 0x198) = 0;
    if (local_718 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_708 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_6a8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_6c8 != (longlong **)0x0) {
    FUN_1400020a8();
  }
LAB_1446ae384:
  uVar29 = *(uint *)(param_1 + 0x170);
  if (uVar29 == 0) {
    uVar31 = 1;
    uVar26 = 0;
    iVar33 = 0;
    uVar13 = 0;
  }
  else {
    puVar24 = *(uint **)(param_1 + 0x168);
    if (*(uint **)(param_1 + 0x168) == (uint *)0x0) {
      puVar24 = puVar2;
    }
    uVar13 = *puVar24;
    if (uVar13 == 0) {
      iVar33 = uVar29 + 0x1e;
      if (-1 < (int)(uVar29 - 1)) {
        iVar33 = uVar29 - 1;
      }
      uVar26 = 0;
      uVar31 = (ulonglong)(uint)(iVar33 >> 5);
      if (iVar33 >> 5 < 1) {
        uVar31 = uVar26;
      }
      iVar33 = 0;
      do {
        if (uVar31 == uVar26) goto LAB_1446ae415;
        iVar33 = iVar33 + 0x20;
        uVar13 = puVar24[uVar26 + 1];
        uVar26 = uVar26 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar26 = 0;
      iVar33 = 0;
    }
    uVar31 = (ulonglong)(-uVar13 & uVar13);
    uVar25 = uVar31 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    uVar13 = (iVar33 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
    if ((int)uVar29 <= (int)uVar13) {
      uVar13 = uVar29;
    }
  }
  if (uVar13 == uVar29) {
LAB_1446ae415:
    if (*(char *)(*(longlong *)(param_1 + 0x30) + 0x81) != '\0') {
LAB_1446af0ae:
      *(undefined1 *)(param_1 + 0x1c9) = 1;
      if ((*(int *)(param_1 + 0x220) != 0) && (*(longlong **)(param_1 + 0x218) != (longlong *)0x0))
      {
        (**(code **)(**(longlong **)(param_1 + 0x218) + 0x60))();
      }
    }
    if ((local_80 ^ (ulonglong)auStack_7e8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  puVar27 = (undefined8 *)(param_1 + 0x19c);
  local_738 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
  local_788 = 0xffffffff;
  local_768 = puVar27;
  local_740 = (ulonglong)uVar29;
LAB_1446ae492:
  local_7b0 = (longlong *)*plVar20;
  lVar23 = (longlong)(int)uVar13;
  local_7a8 = lVar23 * 0x1f0;
  local_7b8 = local_7b0 + lVar23 * 0x3e + 2;
  local_6f0 = CONCAT31(local_6f0._1_3_,(char)local_7b0[lVar23 * 0x3e + 6]);
  local_6ec = (undefined4)local_7b0[lVar23 * 0x3e + 4];
  uStack_6e8 = (undefined4)((ulonglong)local_7b0[lVar23 * 0x3e + 4] >> 0x20);
  uStack_6e4 = (undefined4)local_7b0[lVar23 * 0x3e + 5];
  uStack_6e0 = (undefined4)((ulonglong)local_7b0[lVar23 * 0x3e + 5] >> 0x20);
  local_6dc = *puVar27;
  uStack_6d4 = puVar27[1];
  local_6cc = 4;
  local_90 = (undefined4 *)0x0;
  local_88 = 0x4000000000;
  local_798 = local_7b0 + lVar23 * 0x3e + 0x1f;
  uVar18 = (longlong)(int)local_7b0[lVar23 * 0x3e + 0x24] -
           (longlong)*(int *)((longlong)local_7b0 + local_7a8 + 0x14c);
  uVar25 = local_7b0[lVar23 * 0x3e + 0x2f];
  local_784 = iVar33;
  local_760 = uVar31;
  local_758 = uVar26;
  if (uVar18 < uVar25) {
    iVar33 = (int)local_7b0[lVar23 * 0x3e + 0x20];
    if (iVar33 == 0) {
      local_88._0_4_ = 0;
    }
    else {
      do {
        plVar11 = local_7b8;
        uVar3 = *(undefined4 *)(*local_798 + -4 + (longlong)iVar33 * 4);
        *(int *)(local_7b8 + 0x1e) = iVar33 + -1;
        FUN_14479f406();
        local_7c8 = (longlong *)CONCAT44(local_7c8._4_4_,uVar3);
        FUN_1446af684(param_1,&local_6c8,plVar11);
        uVar26 = local_88;
        lVar23 = (longlong)(int)local_88;
        uVar29 = (int)local_88 + 1;
        local_88 = CONCAT44(local_88._4_4_,uVar29);
        if (local_88._4_4_ < uVar29) {
          FUN_1498f9d70(&local_690,uVar26 & 0xffffffff);
        }
        puVar30 = local_90;
        if (local_90 == (undefined4 *)0x0) {
          puVar30 = &local_690;
        }
        *(longlong **)(puVar30 + lVar23 * 6 + 4) = local_6b8;
        puVar30 = puVar30 + lVar23 * 6;
        *puVar30 = (undefined4)local_6c8;
        puVar30[1] = local_6c8._4_4_;
        puVar30[2] = (int)uStack_6c0;
        puVar30[3] = uStack_6c0._4_4_;
        puVar30 = local_90;
        if (local_90 == (undefined4 *)0x0) {
          puVar30 = &local_690;
        }
        if (*(char *)((longlong)puVar30 + (longlong)((int)local_88 + -1) * 0x18 + 0x16) != '\0')
        goto LAB_1446ae77d;
        uVar18 = (longlong)(int)local_7b8[0x22] - (longlong)*(int *)((longlong)local_7b8 + 0x13c);
        uVar25 = local_7b8[0x2d];
      } while ((uVar18 < uVar25) && (iVar33 = (int)local_7b8[0x1e], iVar33 != 0));
    }
  }
  else {
    local_88._0_4_ = 0;
  }
  local_7a0 = (longlong **)((longlong)local_7b0 + local_7a8 + 0xf0);
  iVar33 = (int)local_88;
  if (uVar18 < uVar25) {
    do {
      uVar29 = *(uint *)local_7a0;
      if (uVar29 == *(uint *)((longlong)local_7a0 + 4)) break;
      uVar3 = *(undefined4 *)
               ((longlong)local_7a0[-2] + (longlong)(int)(*(uint *)(local_7a0 + -3) & uVar29) * 4);
      *(uint *)local_7a0 = uVar29 + 1 & *(uint *)(local_7a0 + -3);
      local_7c8 = (longlong *)CONCAT44(local_7c8._4_4_,uVar3);
      FUN_1446af684(param_1,&local_6c8);
      uVar26 = local_88;
      lVar23 = (longlong)(int)local_88;
      uVar29 = (int)local_88 + 1;
      local_88 = CONCAT44(local_88._4_4_,uVar29);
      if (local_88._4_4_ < uVar29) {
        FUN_1498f9d70(&local_690,uVar26 & 0xffffffff);
      }
      puVar30 = local_90;
      if (local_90 == (undefined4 *)0x0) {
        puVar30 = &local_690;
      }
      *(longlong **)(puVar30 + lVar23 * 6 + 4) = local_6b8;
      puVar30 = puVar30 + lVar23 * 6;
      *puVar30 = (undefined4)local_6c8;
      puVar30[1] = local_6c8._4_4_;
      puVar30[2] = (int)uStack_6c0;
      puVar30[3] = uStack_6c0._4_4_;
      puVar30 = local_90;
      if (local_90 == (undefined4 *)0x0) {
        puVar30 = &local_690;
      }
      if (*(char *)((longlong)puVar30 + (longlong)((int)local_88 + -1) * 0x18 + 0x16) != '\0')
      goto LAB_1446ae77d;
      iVar33 = (int)local_88;
    } while ((ulonglong)
             ((longlong)(int)local_7b8[0x22] - (longlong)*(int *)((longlong)local_7b8 + 0x13c)) <
             (ulonglong)local_7b8[0x2d]);
  }
  puVar30 = local_90;
  if (local_90 == (undefined4 *)0x0) {
    puVar30 = &local_690;
  }
  plVar11 = local_7b8;
  pplVar28 = local_7a0;
  if (iVar33 == 0) {
    iVar33 = 0;
  }
  else {
    puVar24 = (uint *)((longlong)local_7b0 + local_7a8 + 0x104);
    puVar27 = (undefined8 *)((longlong)iVar33 * 0x18);
    puVar21 = (undefined8 *)0x0;
    iVar33 = 0;
    local_750 = puVar27;
    do {
      bVar8 = *(byte *)((longlong)puVar30 + 0x15 + (longlong)puVar21);
      if (*(char *)((longlong)puVar30 + 0x17 + (longlong)puVar21) == '\x01') {
        if ((bVar8 & 1) != 0) {
LAB_1446ae804:
          iVar32 = (int)plVar11[0x1e];
          *(uint *)(plVar11 + 0x1e) = iVar32 + 1U;
          if (*puVar24 < iVar32 + 1U) {
            FUN_1446f48e2(local_798,iVar32);
            plVar11 = local_7b8;
            pplVar28 = local_7a0;
            puVar27 = local_750;
          }
          *(undefined4 *)(*local_798 + (longlong)iVar32 * 4) =
               *(undefined4 *)((longlong)puVar30 + (longlong)puVar21);
        }
      }
      else if ((bVar8 & 1) != 0) {
        uVar29 = *(uint *)((longlong)pplVar28 + 4) + 1 & *(uint *)(pplVar28 + -3);
        if (uVar29 == *(uint *)pplVar28) goto LAB_1446ae804;
        *(undefined4 *)
         ((longlong)pplVar28[-2] +
         (longlong)(int)(*(uint *)(pplVar28 + -3) & *(uint *)((longlong)pplVar28 + 4)) * 4) =
             *(undefined4 *)((longlong)puVar30 + (longlong)puVar21);
        *(uint *)((longlong)pplVar28 + 4) = uVar29;
      }
      iVar33 = iVar33 + *(int *)((longlong)(puVar30 + 4) + (longlong)puVar21);
      puVar21 = puVar21 + 3;
    } while (puVar27 != puVar21);
  }
  lVar23 = local_7a8;
  plVar34 = local_7b0;
  lVar17 = DAT_14cc32350;
  iVar32 = *local_738;
  if ((iVar32 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) {
    uVar26 = 0;
  }
  else if (iVar32 == 2) {
    uVar26 = 0;
  }
  else if (iVar32 == 1) {
    DVar9 = FUN_140ad26c0();
    DVar10 = GetCurrentThreadId();
    uVar26 = (ulonglong)(DVar9 != DVar10);
    plVar11 = local_7b8;
    pplVar28 = local_7a0;
  }
  else {
    uVar26 = 1;
  }
  iVar32 = (int)plVar11[0x22];
  iVar16 = *(int *)((longlong)plVar11 + 0x13c);
  if (((0 < *(int *)(lVar17 + uVar26 * 4)) &&
      ((ulonglong)plVar11[0x2d] <= (ulonglong)(longlong)(iVar32 - iVar16))) &&
     ((*(uint *)((longlong)pplVar28 + 4) + 1 & *(uint *)(pplVar28 + -3)) == *(uint *)pplVar28)) {
    local_6a8 = (longlong *)((ulonglong)local_6a8 & 0xffffffff00000000);
    local_6c8 = &local_6a8;
    uStack_6c0 = *(ulonglong *)(param_1 + 0x38);
    local_6b8 = plVar11;
    FUN_1498f9e90(plVar11,&local_6c8);
    plVar11 = (longlong *)((longlong)plVar34 + lVar23 + 0x188);
    *plVar11 = *plVar11 + (ulonglong)(uint)((int)local_6a8 << 10);
    plVar11 = (longlong *)((longlong)plVar34 + lVar23 + 0x1a8);
    *plVar11 = *plVar11 + ((ulonglong)local_6a8 & 0xffffffff);
    iVar32 = (int)local_7b8[0x22];
    iVar16 = *(int *)((longlong)local_7b8 + 0x13c);
    plVar11 = local_7b8;
  }
  *(longlong *)((longlong)plVar34 + lVar23 + 0x1c0) = (longlong)(iVar32 - iVar16);
  *(longlong *)((longlong)plVar34 + lVar23 + 0x198) = (longlong)((iVar32 - iVar16) * 0x400);
  goto LAB_1446ae924;
LAB_1446ae77d:
  iVar33 = -1;
  plVar11 = local_7b8;
  lVar23 = local_7a8;
  plVar34 = local_7b0;
LAB_1446ae924:
  if (local_90 != (undefined4 *)0x0) {
    FUN_1400020a8();
    plVar11 = local_7b8;
  }
  puVar21 = (undefined8 *)((longlong)plVar34 + lVar23 + 0x20);
  if ((iVar33 < 0) ||
     (cVar7 = FUN_1498f185d(), puVar27 = local_768, plVar11 = local_7b8, cVar7 != '\0')) {
    iVar33 = *(int *)(param_1 + 0x230);
joined_r0x0001446af082:
    if (iVar33 == 0) {
      plVar20 = (longlong *)0x0;
    }
    else {
      plVar20 = *(longlong **)(param_1 + 0x228);
    }
    (**(code **)(*plVar20 + 0x58))(plVar20,puVar21,plVar11);
    goto LAB_1446af0ae;
  }
  bVar8 = (byte)*(undefined4 *)((longlong)plVar34 + lVar23 + 0x30);
  if (bVar8 < 0xc) {
    bVar8 = 0xb;
  }
  local_690 = CONCAT31(local_690._1_3_,bVar8);
  uVar4 = *(undefined8 *)((longlong)plVar34 + lVar23 + 0x28);
  uStack_68c = (undefined4)*puVar21;
  uStack_688 = (undefined4)((ulonglong)*puVar21 >> 0x20);
  uStack_684 = (undefined4)uVar4;
  uStack_680 = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_67c = *(undefined4 *)local_768;
  uStack_678 = *(undefined4 *)((longlong)local_768 + 4);
  uStack_674 = *(undefined4 *)(local_768 + 1);
  uStack_670 = *(undefined4 *)((longlong)local_768 + 0xc);
  local_66c = 8;
  local_750 = puVar21;
  plVar11 = (longlong *)FUN_145b17d02();
  lVar17 = plVar11[0x22];
  if (lVar17 == 0) {
    (**(code **)(*plVar11 + 1000))(plVar11);
    lVar17 = plVar11[0x22];
  }
  local_798 = (longlong *)
              CONCAT44(local_798._4_4_,
                       (int)((double)((longlong)(*(float *)(lVar17 + 0x2c) * 1.25e+08) & 0xffffffff)
                            * ((double)*(longlong *)(param_1 + 0x40) / 10000000.0)) /
                       (*(int *)(param_1 + 0x150) - *(int *)(param_1 + 0x17c)));
  puVar24 = (uint *)((longlong)plVar34 + lVar23 + 0x48);
  iVar32 = *(int *)((longlong)plVar34 + lVar23 + 0x60);
  uVar29 = (uint)local_760;
  iVar33 = local_784;
  uVar26 = local_758;
  if (iVar32 == 0) {
    uVar25 = 1;
    uVar31 = 0;
    local_78c = 0;
    iVar16 = 0;
  }
  else {
    puVar19 = *(uint **)((longlong)plVar34 + lVar23 + 0x58);
    if (puVar19 == (uint *)0x0) {
      puVar19 = puVar24;
    }
    uVar13 = *puVar19;
    if (uVar13 == 0) {
      iVar16 = iVar32 + 0x1e;
      if (-1 < iVar32 + -1) {
        iVar16 = iVar32 + -1;
      }
      uVar31 = 0;
      uVar25 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
        uVar25 = uVar31;
      }
      iVar14 = 0;
      do {
        if (uVar25 == uVar31) goto LAB_1446aeeb3;
        iVar14 = iVar14 + 0x20;
        uVar13 = puVar19[uVar31 + 1];
        uVar31 = uVar31 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar31 = 0;
      iVar14 = 0;
    }
    uVar25 = (ulonglong)(-uVar13 & uVar13);
    uVar18 = uVar25 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    iVar16 = (iVar14 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
    local_78c = iVar14;
    if (iVar32 <= iVar16) {
      iVar16 = iVar32;
    }
  }
  if (iVar16 < iVar32) {
    lVar23 = local_7a8 + 0x38;
    local_7a8 = CONCAT44(local_7a8._4_4_,0xffffffff);
    plVar11 = (longlong *)((longlong)local_7b0 + lVar23);
    local_780 = puVar24;
    do {
      local_744 = iVar16;
      local_7b0 = (longlong *)((longlong)local_744 * 0x20);
      pplVar28 = (longlong **)((longlong)local_7b0 + *plVar11 + 8);
      iVar33 = 0;
      local_7a0 = pplVar28;
      local_778 = uVar25;
      local_770 = uVar31;
      while ((0 < (int)(*pplVar28)[0xb] && (iVar33 < (int)local_798))) {
        FUN_1498f4bf4(*pplVar28,&local_6c8);
        local_6f0 = *(undefined4 *)(*plVar11 + (longlong)local_7b0);
        uStack_6e8 = (undefined4)local_6c8;
        uStack_6e4 = local_6c8._4_4_;
        uStack_6e0 = (int)uStack_6c0;
        local_6dc = CONCAT44(local_6dc._4_4_,uStack_6c0._4_4_);
        local_6c8 = (longlong **)0x0;
        uStack_6c0 = 0;
        plVar12 = (longlong *)FUN_14001cc68(200);
        plVar12[1] = (longlong)&DAT_100000001;
        *plVar12 = (longlong)&PTR_FUN_14befd5a0;
        _Dst = plVar12 + 2;
        plVar34 = (longlong *)0x0;
        if (_Dst != (longlong *)0x0) {
          plVar34 = plVar12 + 0x17;
        }
        memset(_Dst,0,0xb8);
        FUN_146866eea(_Dst);
        FUN_1498f12d6(_Dst,&local_690);
        FUN_1498f3eec(&local_6f0,_Dst,(undefined1)local_690);
        iVar33 = iVar33 + (int)plVar12[0x18];
        uVar4 = *(undefined8 *)(param_1 + 0x1c0);
        local_6a8 = plVar34;
        uStack_6a0 = plVar12;
        if (plVar12 == (longlong *)0x0) {
          cVar7 = FUN_1498f4b84(uVar4,&local_6a8,local_7b8);
        }
        else {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
          cVar7 = FUN_1498f4b84(uVar4,&local_6a8,local_7b8);
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            plVar34 = plVar12 + 1;
            *(int *)plVar34 = (int)*plVar34 + -1;
            UNLOCK();
            if ((int)*plVar34 == 0) {
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
          LOCK();
          plVar34 = plVar12 + 1;
          *(int *)plVar34 = (int)*plVar34 + -1;
          UNLOCK();
          if ((int)*plVar34 == 0) {
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
        pplVar28 = local_7a0;
        if (CONCAT44(uStack_6e4,uStack_6e8) != 0) {
          FUN_1400020a8();
        }
        if (local_6c8 != (longlong **)0x0) {
          FUN_1400020a8();
        }
        if (cVar7 == '\0') {
          iVar33 = *(int *)(param_1 + 0x230);
          puVar21 = local_750;
          plVar11 = local_7b8;
          goto joined_r0x0001446af082;
        }
      }
      local_7b0 = plVar11;
      FUN_1498f45f8(param_1,pplVar28);
      uVar26 = local_758;
      uVar31 = local_760;
      puVar27 = local_768;
      iVar33 = local_784;
      plVar11 = *pplVar28;
      uVar13 = (uint)local_778;
      uVar22 = (uint)local_7a8;
      if (((int)plVar11[9] == 0) && (*(char *)((longlong)plVar11 + 100) == '\0')) {
        FUN_1446af4da(param_1,pplVar28,local_7b8);
        uVar22 = (uint)local_7a8;
        uVar13 = (uint)local_778;
        plVar11 = *local_7a0;
      }
      uVar29 = (uint)uVar31;
      if ((DAT_14cc323e8 + plVar11[4] <= *(longlong *)(param_1 + 0x38)) &&
         (((*(byte *)((longlong)plVar11 + 0xc) & 1) == 0 ||
          (*(char *)((longlong)plVar11 + 100) == '\x01')))) {
        FUN_1498fe302(local_7b0,local_744);
        uVar22 = (uint)local_7a8;
        uVar13 = (uint)local_778;
      }
      uVar22 = uVar22 & ~uVar13;
      puVar24 = (uint *)local_7b0[4];
      if ((uint *)local_7b0[4] == (uint *)0x0) {
        puVar24 = local_780;
      }
      iVar32 = (int)local_7b0[5];
      iVar16 = (int)local_770;
      lVar23 = (longlong)iVar16;
      uVar13 = puVar24[lVar23] & uVar22;
      uVar31 = local_770;
      if (uVar13 == 0) {
        iVar14 = iVar32 + 0x1e;
        if (-1 < iVar32 + -1) {
          iVar14 = iVar32 + -1;
        }
        iVar14 = iVar14 >> 5;
        iVar15 = iVar14;
        if (iVar14 < iVar16) {
          iVar15 = iVar16;
        }
        if (iVar14 <= iVar16) break;
        local_78c = local_78c + 0x20;
        lVar17 = 0;
        while (uVar13 = puVar24[lVar23 + lVar17 + 1], uVar13 == 0) {
          local_78c = local_78c + 0x20;
          lVar17 = lVar17 + 1;
          if (iVar15 - lVar23 == lVar17) goto LAB_1446aeeb3;
        }
        uVar31 = (ulonglong)(iVar16 + (int)lVar17 + 1);
        uVar22 = 0xffffffff;
      }
      local_7a8 = CONCAT44(local_7a8._4_4_,uVar22);
      uVar25 = (ulonglong)(-uVar13 & uVar13);
      uVar18 = uVar25 * 2 + 1;
      lVar23 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      iVar16 = (local_78c - ((uint)lVar23 ^ 0x3f)) + 0x3e;
      plVar11 = local_7b0;
    } while (iVar16 < iVar32);
  }
LAB_1446aeeb3:
  local_690 = (undefined4)*(undefined8 *)(param_1 + 0x38);
  uStack_68c = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x38) >> 0x20);
  uStack_688 = SUB84(local_7b8,0);
  uStack_684 = (undefined4)((ulonglong)local_7b8 >> 0x20);
  FUN_1498f9c0e(local_7b8,&local_690);
  local_788 = local_788 & ~uVar29;
  puVar24 = *(uint **)(param_1 + 0x168);
  if (*(uint **)(param_1 + 0x168) == (uint *)0x0) {
    puVar24 = puVar2;
  }
  uVar29 = *(uint *)(param_1 + 0x170);
  iVar32 = (int)uVar26;
  lVar23 = (longlong)iVar32;
  uVar13 = puVar24[lVar23] & local_788;
  if (uVar13 == 0) {
    iVar16 = uVar29 + 0x1e;
    if (-1 < (int)(uVar29 - 1)) {
      iVar16 = uVar29 - 1;
    }
    iVar16 = iVar16 >> 5;
    iVar33 = iVar33 + 0x20;
    iVar14 = iVar16;
    if (iVar16 < iVar32) {
      iVar14 = iVar32;
    }
    if (iVar32 < iVar16) {
      lVar17 = 0;
      do {
        uVar13 = puVar24[lVar23 + lVar17 + 1];
        if (uVar13 != 0) {
          uVar26 = (ulonglong)(iVar32 + (int)lVar17 + 1);
          local_788 = 0xffffffff;
          goto LAB_1446aef69;
        }
        iVar33 = iVar33 + 0x20;
        lVar17 = lVar17 + 1;
      } while (iVar14 - lVar23 != lVar17);
      local_788 = 0xffffffff;
      iVar32 = iVar14;
    }
    uVar26 = (ulonglong)(iVar32 + 1);
    uVar31 = local_760;
    puVar27 = local_768;
    uVar13 = uVar29;
  }
  else {
LAB_1446aef69:
    uVar31 = (ulonglong)(-uVar13 & uVar13);
    uVar25 = uVar31 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    uVar13 = (iVar33 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
    if ((int)uVar29 <= (int)uVar13) {
      uVar13 = uVar29;
    }
  }
  if (uVar13 == (uint)local_740) goto LAB_1446ae415;
  goto LAB_1446ae492;
}



// FUNCTION 1446af12e FUN_1446af12e body=938 status=ok
// SIG undefined FUN_1446af12e(void)

ulonglong FUN_1446af12e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  bool bVar4;
  longlong **pplVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  undefined4 *puVar12;
  longlong lVar13;
  byte bVar14;
  undefined8 unaff_RSI;
  undefined7 uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong *plVar19;
  byte bVar20;
  undefined1 auStack_c8 [47];
  byte local_99;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  undefined8 uStack_70;
  undefined4 *local_60;
  longlong **local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = (longlong *)0x0;
  uStack_70 = 0;
  uVar15 = (undefined7)((ulonglong)unaff_RSI >> 8);
  bVar14 = 1;
  if ((longlong)*(int *)(param_2 + 3) == 0) {
    bVar4 = true;
    plVar19 = (longlong *)0x0;
  }
  else {
    lVar17 = param_2[2];
    plVar19 = (longlong *)(param_1 + 0x148);
    lVar16 = (longlong)*(int *)(param_2 + 3) << 4;
    do {
      uVar6 = FUN_1447addd0(lVar17,0x10);
      iVar7 = FUN_1498fcb98(plVar19,uVar6,lVar17);
      if ((iVar7 != -1) && (((longlong)iVar7 * 0x1f0 + *plVar19 + 0x10U & 0xffffffffffffffef) != 0))
      {
        uVar6 = FUN_1447addd0(lVar17,0x10);
        iVar7 = FUN_1498fcb98(plVar19,uVar6,lVar17);
        if (iVar7 == -1) {
          lVar9 = 0;
        }
        else {
          lVar9 = (longlong)iVar7 * 0x1f0 + *plVar19;
        }
        lVar13 = lVar9 + 0x10;
        if (lVar9 == 0) {
          lVar13 = 0;
        }
        lVar9 = (longlong)(int)uStack_70;
        uVar8 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar8);
        if (uStack_70._4_4_ < uVar8) {
          FUN_1498fd5fc(&local_78);
        }
        local_78[lVar9] = lVar13;
      }
      lVar17 = lVar17 + 0x10;
      lVar16 = lVar16 + -0x10;
    } while (lVar16 != 0);
    lVar17 = (longlong)(int)uStack_70;
    plVar19 = local_78 + lVar17;
    if (lVar17 == 0) {
      bVar4 = true;
    }
    else {
      lVar16 = 0;
      do {
        lVar9 = *(longlong *)((longlong)local_78 + lVar16);
        if ((*(int *)(lVar9 + 0xe4) + 1U & *(uint *)(lVar9 + 200)) == *(uint *)(lVar9 + 0xe0)) {
          dVar3 = (double)(*(longlong *)(param_1 + 0x38) - *(longlong *)(lVar9 + 0xf8)) / 10000000.0
          ;
          if (1.0 < dVar3) {
            *(double *)(lVar9 + 0x100) = dVar3 + *(double *)(lVar9 + 0x100);
            *(undefined8 *)(lVar9 + 0xf8) = *(undefined8 *)(param_1 + 0x38);
          }
          bVar14 = 0;
          uVar15 = 0;
          bVar20 = (*(byte *)(param_2 + 4) & 1) == 0;
          goto LAB_1446af499;
        }
        *(longlong *)(lVar9 + 0xf8) = *(longlong *)(param_1 + 0x38);
        *(undefined8 *)(lVar9 + 0x100) = 0;
        lVar16 = lVar16 + 8;
      } while (lVar17 * 8 != lVar16);
      bVar4 = false;
    }
  }
  uVar8 = *(uint *)(param_2 + 4);
  bVar20 = (uVar8 & 1) == 0;
  iVar7 = *(int *)(param_1 + 0x1ac) + 1;
  if (*(int *)(param_1 + 0x1ac) < -1) {
    iVar7 = 0;
  }
  *(int *)(param_1 + 0x1ac) = iVar7;
  if (!bVar4) {
    puVar12 = (undefined4 *)(param_1 + 0x1ac);
    plVar18 = local_78;
    local_99 = bVar20;
    do {
      lVar17 = *plVar18;
      if (((uVar8 & 1) != 0) ||
         ((ulonglong)((longlong)*(int *)(lVar17 + 0x110) - (longlong)*(int *)(lVar17 + 0x13c)) <
          *(ulonglong *)(lVar17 + 0x168))) {
        local_4c = 0x400;
        local_60 = (undefined4 *)*param_2;
        local_58 = (longlong **)param_2[1];
        if (local_58 != (longlong **)0x0) {
          LOCK();
          *(int *)(local_58 + 1) = (int)local_58[1] + 1;
          UNLOCK();
        }
        plVar10 = (longlong *)FUN_1498fd681(&local_60,&local_4c);
        local_88 = plVar10 + 2;
        local_80 = plVar10;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
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
        pplVar5 = local_58;
        if (local_58 != (longlong **)0x0) {
          LOCK();
          plVar10 = (longlong *)(local_58 + 1);
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (*(code *)**local_58)(local_58);
            LOCK();
            piVar2 = (int *)((longlong)pplVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)((longlong)*pplVar5 + 0x10))(pplVar5);
            }
          }
        }
        local_58 = &local_88;
        local_60 = puVar12;
        FUN_1498fd72c(lVar17 + 0x78,&local_4c,&local_60);
        uVar11 = *(uint *)(lVar17 + 0xe4) + 1 & *(uint *)(lVar17 + 200);
        if (uVar11 != *(uint *)(lVar17 + 0xe0)) {
          *(undefined4 *)
           (*(longlong *)(lVar17 + 0xd0) +
           (longlong)(int)(*(uint *)(lVar17 + 200) & *(uint *)(lVar17 + 0xe4)) * 4) = *puVar12;
          *(uint *)(lVar17 + 0xe4) = uVar11;
        }
        local_98 = *(undefined4 *)(lVar17 + 0x10);
        uStack_94 = *(undefined4 *)(lVar17 + 0x14);
        uStack_90 = *(undefined4 *)(lVar17 + 0x18);
        uStack_8c = *(undefined4 *)(lVar17 + 0x1c);
        FUN_1498f2ba8(*puVar12,&local_98,&local_88);
        plVar10 = local_80;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_80 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar2 = (int *)((longlong)plVar10 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
        }
      }
      plVar18 = plVar18 + 1;
      bVar20 = local_99;
    } while (plVar18 != plVar19);
  }
LAB_1446af499:
  if (local_78 != (longlong *)0x0) {
    FUN_1400020a8(local_78);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar15,bVar14 | bVar20) & 0xffffffff;
}



// FUNCTION 1446af4da FUN_1446af4da body=205 status=ok
// SIG undefined FUN_1446af4da(void)

void FUN_1446af4da(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *(undefined8 *)*param_2;
  cVar4 = FUN_1498f0ac0();
  if ((cVar4 == '\0') || (DAT_14c950c28 == '\0')) {
    lVar5 = *param_2;
    if (((*(int *)(param_3 + 0x14) != 0 || *(int *)(param_3 + 0x10) != 0) ||
        *(int *)(param_3 + 0x18) != 0) || *(int *)(param_3 + 0x1c) != 0) {
      local_38 = 0;
      plStack_30 = (longlong *)0x0;
      if ((*(int *)(param_1 + 0x1f0) != 0) &&
         (plVar3 = *(longlong **)(param_1 + 0x1e8), plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x60))(plVar3,lVar5,&local_38,param_3 + 0x10);
        plVar3 = plStack_30;
        if (plStack_30 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_30 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_30)(plStack_30);
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
      lVar5 = *param_2;
    }
    *(undefined1 *)(lVar5 + 100) = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446af5a8 FUN_1446af5a8 body=219 status=ok
// SIG undefined FUN_1446af5a8(void)

void FUN_1446af5a8(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  void *pvVar4;
  int iVar5;
  undefined7 uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar2 = *(int *)(param_1 + 0x20);
  uVar1 = iVar2 + 0x1f;
  if (0x1f < uVar1) {
    uVar7 = uVar1 >> 5;
    if (*(int *)(param_1 + 0x24) + 0x1fU >> 5 < uVar7) {
      if ((0x9f < uVar1) || (*(longlong *)(param_1 + 0x18) != 0)) {
        uVar8 = 0;
        if (0x9f < uVar1) {
          uVar8 = uVar7;
        }
        param_2 = 0;
        FUN_1446efa72(param_1 + 0x18,0,uVar8,4);
      }
      *(uint *)(param_1 + 0x24) = uVar1 & 0xffffffe0;
    }
    pvVar4 = *(void **)(param_1 + 0x18);
    if (*(void **)(param_1 + 0x18) == (void *)0x0) {
      pvVar4 = (void *)(param_1 + 8);
    }
    uVar6 = (undefined7)((ulonglong)param_2 >> 8);
    if (uVar1 < 0x120) {
      uVar7 = uVar1 >> 3 & 0x3c;
      iVar2 = (int)CONCAT71(uVar6,0xff);
    }
    else {
      uVar7 = uVar7 << 2;
      iVar2 = (int)CONCAT71(uVar6,0xff);
    }
    memset(pvVar4,iVar2,(ulonglong)uVar7);
    iVar2 = *(int *)(param_1 + 0x20);
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    if (iVar2 % 0x20 != 0) {
      pvVar4 = (void *)(param_1 + 8);
      if (*(void **)(param_1 + 0x18) != (void *)0x0) {
        pvVar4 = *(void **)(param_1 + 0x18);
      }
      bVar3 = -(char)(iVar2 % 0x20);
      *(uint *)((longlong)pvVar4 + (longlong)(iVar5 >> 5) * 4) =
           (uint)(*(int *)((longlong)pvVar4 + (longlong)(iVar5 >> 5) * 4) << (bVar3 & 0x1f)) >>
           (bVar3 & 0x1f);
      iVar2 = *(int *)(param_1 + 0x20);
    }
  }
  *(int *)(param_1 + 0x48) = iVar2;
  return;
}



// FUNCTION 1446af684 FUN_1446af684 body=1255 status=ok
// SIG undefined FUN_1446af684(void)

uint * FUN_1446af684(longlong param_1,uint *param_2,longlong param_3,undefined1 *param_4,
                    uint param_5)

{
  longlong *plVar1;
  uint *puVar2;
  int *piVar3;
  undefined8 uVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 uVar11;
  uint uVar12;
  uint uVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined1 uVar16;
  bool bVar17;
  undefined1 auStack_118 [36];
  uint local_f4;
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined4 local_94;
  uint local_8c;
  longlong local_70;
  ulonglong *local_60;
  undefined8 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(int *)(param_3 + 0x80) != *(int *)(param_3 + 0xac)) {
    lVar7 = param_3 + 0xb0;
    if (*(longlong *)(param_3 + 0xb8) != 0) {
      lVar7 = *(longlong *)(param_3 + 0xb8);
    }
    iVar8 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_3 + 0xc0) - 1U & param_5) * 4);
    if (iVar8 != -1) {
      plVar15 = (longlong *)(param_3 + 0x78);
      do {
        lVar7 = *plVar15 + (longlong)iVar8 * 0x20;
        if (*(uint *)(*plVar15 + (longlong)iVar8 * 0x20) == param_5) {
          if (lVar7 != 0) {
            plVar14 = (longlong *)(lVar7 + 8);
            plVar9 = (longlong *)*plVar14;
            if (*plVar9 == 0) {
              FUN_1498f0242();
              plVar9 = (longlong *)*plVar14;
            }
            lVar7 = plVar9[0xc];
            if (*(int *)(lVar7 + 0xb8) == 2) {
              FUN_1498fae48(plVar15,param_5);
            }
            else if (plVar14 != (longlong *)0x0) {
              if (*plVar9 == 0) {
LAB_1446af954:
                bVar17 = (int)plVar9[9] == 0;
                local_f4 = (uint)CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
                local_f0 = (longlong *)0x0;
                uVar12 = 0;
                plVar15 = (longlong *)0x0;
                uVar16 = 0;
              }
              else {
                lVar7 = FUN_1446afb6c(plVar9,(undefined8 *)(param_1 + 0x38));
                if ((char)lVar7 == '\0') {
                  plVar9 = (longlong *)*plVar14;
                  goto LAB_1446af954;
                }
                local_e8 = (undefined8 *)(param_1 + 0x38);
                FUN_1498f49c6(&local_a0,plVar14,param_5);
                local_e0 = (longlong *)FUN_14001cc68(200);
                local_e0[1] = (longlong)&DAT_100000001;
                *local_e0 = (longlong)&PTR_FUN_14befd5a0;
                plVar9 = local_e0 + 2;
                local_f0 = (longlong *)0x0;
                if (plVar9 != (longlong *)0x0) {
                  local_f0 = local_e0 + 0x17;
                }
                memset(plVar9,0,0xb8);
                FUN_146866eea(plVar9);
                FUN_1498f12d6(plVar9,param_4);
                FUN_1498f41f8(&local_a0,plVar9,*param_4);
                plVar9 = local_e0;
                uVar4 = *(undefined8 *)(param_1 + 0x1c0);
                local_c0 = local_f0;
                local_b8 = local_e0;
                if (local_e0 == (longlong *)0x0) {
                  cVar6 = FUN_1498f4b84(uVar4,&local_c0,param_3);
                  if (cVar6 == '\0') goto LAB_1446afa4f;
LAB_1446af86b:
                  lVar7 = *plVar14;
                  if (local_8c < *(uint *)(lVar7 + 0x20)) {
                    lVar10 = lVar7 + 8;
                    if (*(longlong *)(lVar7 + 0x18) != 0) {
                      lVar10 = *(longlong *)(lVar7 + 0x18);
                    }
                    uVar12 = local_8c + 0x1f;
                    if (-1 < (int)local_8c) {
                      uVar12 = local_8c;
                    }
                    if ((*(uint *)(lVar10 + (longlong)((int)uVar12 >> 5) * 4) >> (local_8c & 0x1f) &
                        1) != 0) {
                      *(int *)(lVar7 + 0x48) = *(int *)(lVar7 + 0x48) + -1;
                      puVar2 = (uint *)(lVar10 + (longlong)((int)uVar12 >> 5) * 4);
                      *puVar2 = *puVar2 & ~(1 << ((byte)local_8c & 0x1f));
                    }
                  }
                  *(longlong *)(param_3 + 400) = *(longlong *)(param_3 + 400) + 1;
                  uVar12 = *(uint *)(local_e0 + 0x18);
                  local_b8 = (longlong *)(*(longlong *)(param_3 + 0x158) + 1);
                  *(longlong **)(param_3 + 0x158) = local_b8;
                  lVar7 = *plVar14;
                  uVar13 = *(uint *)(*(longlong *)(lVar7 + 0x60) + 0xbc) & 1;
                  local_f0 = (longlong *)(ulonglong)uVar13;
                  bVar17 = *(int *)(lVar7 + 0x48) == 0;
                  local_f4 = 1;
                  if (bVar17) {
                    local_f4 = uVar13;
                  }
                  local_a8 = *local_e8;
                  *(undefined8 *)(lVar7 + 0x58) = local_a8;
                  local_c0 = (longlong *)CONCAT44(local_8c,param_5);
                  local_b0 = (undefined1)uVar13;
                  if (param_5 < local_8c) {
                    local_8c = local_8c * local_8c + param_5;
                  }
                  else {
                    local_8c = local_8c + (param_5 + 1) * param_5;
                  }
                  local_c8 = (ulonglong)local_8c;
                  local_60 = &local_c8;
                  local_58 = &local_c0;
                  local_e8 = local_b8;
                  FUN_1498feeee(param_3 + 0x108,local_4c);
                  local_d8 = *(undefined4 *)(param_3 + 0x10);
                  uStack_d4 = *(undefined4 *)(param_3 + 0x14);
                  uStack_d0 = *(undefined4 *)(param_3 + 0x18);
                  uStack_cc = *(undefined4 *)(param_3 + 0x1c);
                  FUN_1498f2ba8(param_5,&local_d8,plVar14);
                  bVar5 = true;
                  if ((*(int *)(*plVar14 + 0x48) == 0) && ((int)local_f0 == 0)) {
                    FUN_1498fae48(plVar15,param_5);
                    local_f0 = (longlong *)0x0;
                  }
                  uVar16 = 0;
                }
                else {
                  LOCK();
                  *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
                  UNLOCK();
                  cVar6 = FUN_1498f4b84(uVar4,&local_c0,param_3);
                  if (plVar9 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = plVar9 + 1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)*plVar1 == 0) {
                      (**(code **)*plVar9)(plVar9);
                      LOCK();
                      piVar3 = (int *)((longlong)plVar9 + 0xc);
                      *piVar3 = *piVar3 + -1;
                      UNLOCK();
                      if (*piVar3 == 0) {
                        (**(code **)(*plVar9 + 0x10))(plVar9);
                      }
                    }
                  }
                  if (cVar6 != '\0') goto LAB_1446af86b;
LAB_1446afa4f:
                  *param_2 = param_5;
                  bVar5 = false;
                  param_2[2] = 0;
                  param_2[3] = 0;
                  *(undefined8 *)((longlong)param_2 + 0xe) = 0;
                  *(undefined2 *)((longlong)param_2 + 0x16) = 1;
                  uVar16 = 1;
                  local_f0 = (longlong *)0x0;
                  uVar12 = 0;
                  local_e8 = (longlong *)0x0;
                  local_f4 = 0;
                  bVar17 = false;
                }
                plVar15 = local_e0;
                if (local_e0 != (longlong *)0x0) {
                  LOCK();
                  plVar9 = local_e0 + 1;
                  *(int *)plVar9 = (int)*plVar9 + -1;
                  UNLOCK();
                  if ((int)*plVar9 == 0) {
                    (**(code **)*local_e0)(local_e0);
                    LOCK();
                    piVar3 = (int *)((longlong)plVar15 + 0xc);
                    *piVar3 = *piVar3 + -1;
                    UNLOCK();
                    if (*piVar3 == 0) {
                      (**(code **)(*plVar15 + 0x10))(plVar15);
                    }
                  }
                }
                if (local_70 != 0) {
                  FUN_1400020a8();
                }
                plVar15 = local_e8;
                if (!bVar5) goto LAB_1446afad1;
              }
              *(longlong *)(param_3 + 0x170) = *(longlong *)(param_3 + 0x170) + (ulonglong)uVar12;
              FUN_146b13724(param_3,&local_a0);
              if ((longlong *)(param_3 + 0x1c8) == &local_a0) {
                uVar11 = (undefined1)local_f4;
                if (local_a0 != 0) {
                  FUN_1400020a8();
                }
              }
              else {
                if (*(longlong *)(param_3 + 0x1c8) != 0) {
                  FUN_1400020a8();
                }
                *(longlong *)(param_3 + 0x1c8) = local_a0;
                *(undefined4 *)(param_3 + 0x1d0) = local_98;
                *(undefined4 *)(param_3 + 0x1d4) = local_94;
                uVar11 = (undefined1)local_f4;
              }
              *param_2 = param_5;
              *(longlong **)(param_2 + 2) = plVar15;
              param_2[4] = uVar12;
              *(char *)(param_2 + 5) = (char)local_f0;
              *(undefined1 *)((longlong)param_2 + 0x15) = uVar11;
              *(undefined1 *)((longlong)param_2 + 0x16) = uVar16;
              *(bool *)((longlong)param_2 + 0x17) = bVar17;
LAB_1446afad1:
              if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
                return param_2;
              }
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0();
            }
          }
          break;
        }
        iVar8 = *(int *)(lVar7 + 0x18);
      } while (iVar8 != -1);
    }
  }
  *param_2 = param_5;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_118);
}



// FUNCTION 1446afb6c FUN_1446afb6c body=510 status=ok
// SIG undefined FUN_1446afb6c(void)

ulonglong FUN_1446afb6c(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  DWORD DVar5;
  DWORD DVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  undefined8 unaff_RSI;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  
  lVar9 = DAT_14cc32418;
  uVar12 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(int *)(param_1 + 0x48) != 0) goto LAB_1446afc9e;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar4 = *(int *)(lVar2 + 0xc60);
  if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
    uVar11 = 0;
  }
  else if (iVar4 == 1) {
    DVar5 = FUN_140ad26c0();
    DVar6 = GetCurrentThreadId();
    uVar11 = (ulonglong)(DVar5 != DVar6);
  }
  else {
    uVar11 = 1;
  }
  lVar3 = DAT_14cc32400;
  iVar4 = *(int *)(param_1 + 0x40);
  iVar7 = *(int *)(param_1 + 0x4c);
  if (iVar7 == iVar4) {
LAB_1446afc18:
    iVar10 = *(int *)(lVar2 + 0xc60);
    if (((iVar10 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar10 == 2)) {
      uVar11 = 0;
    }
    else if (iVar10 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar11 = (ulonglong)(DVar5 != DVar6);
      iVar4 = *(int *)(param_1 + 0x40);
      iVar7 = *(int *)(param_1 + 0x4c);
    }
    else {
      uVar11 = 1;
    }
    if (iVar7 != iVar4) {
      iVar7 = *(int *)(lVar3 + uVar11 * 4);
      iVar10 = 5000;
      if (iVar7 < 5000) {
        iVar10 = iVar7;
      }
      iVar7 = 10;
      if (10 < iVar10) {
        iVar7 = iVar10;
      }
      auVar15._0_8_ = (double)iVar7 * 10000.0 + 0.5;
      auVar15._8_8_ = 0;
      auVar15 = roundpd(auVar15,auVar15,1);
      lVar9 = *param_2;
      if ((longlong)auVar15._0_8_ + *(longlong *)(param_1 + 0x58) <= lVar9) {
        if (0 < iVar4) {
          uVar13 = 1;
          uVar8 = 0;
          uVar14 = 0;
          do {
            lVar9 = *(longlong *)(param_1 + 0x38);
            if (*(longlong *)(param_1 + 0x38) == 0) {
              lVar9 = param_1 + 0x28;
            }
            if ((*(uint *)(lVar9 + (ulonglong)uVar14 * 4) & uVar13) == 0) {
              lVar9 = *(longlong *)(param_1 + 0x18);
              if (*(longlong *)(param_1 + 0x18) == 0) {
                lVar9 = param_1 + 8;
              }
              uVar1 = *(uint *)(lVar9 + (ulonglong)(uVar8 >> 5) * 4);
              if ((uVar1 >> (uVar8 & 0x1f) & 1) == 0) {
                *(uint *)(lVar9 + (ulonglong)(uVar8 >> 5) * 4) = uVar1 | 1 << ((byte)uVar8 & 0x1f);
                *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
                iVar4 = *(int *)(param_1 + 0x40);
              }
            }
            iVar7 = uVar13 * 2;
            uVar14 = uVar14 + (iVar7 == 0);
            uVar13 = iVar7 + (uint)(iVar7 == 0);
            uVar8 = uVar8 + 1;
          } while ((int)uVar8 < iVar4);
          lVar9 = *param_2;
        }
        *(longlong *)(param_1 + 0x58) = lVar9;
        *(short *)(param_1 + 0x52) = *(short *)(param_1 + 0x52) + 1;
        goto LAB_1446afc9e;
      }
    }
  }
  else {
    uVar8 = *(uint *)(lVar9 + uVar11 * 4);
    uVar13 = 100;
    if ((int)uVar8 < 100) {
      uVar13 = uVar8;
    }
    uVar8 = 1;
    if (1 < (int)uVar13) {
      uVar8 = uVar13;
    }
    if (*(ushort *)(param_1 + 0x52) <= uVar8) goto LAB_1446afc18;
    *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0xb8) = 2;
  }
  uVar12 = 0;
LAB_1446afc9e:
  return uVar12 & 0xffffffff;
}



// FUNCTION 1446afd6a FUN_1446afd6a body=67 status=ok
// SIG undefined FUN_1446afd6a(void)

void FUN_1446afd6a(longlong param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  if (param_2 < *(uint *)(param_1 + 0x20)) {
    lVar3 = param_1 + 8;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x18);
    }
    uVar2 = param_2 + 0x1f;
    if (-1 < (int)param_2) {
      uVar2 = param_2;
    }
    if ((*(uint *)(lVar3 + (longlong)((int)uVar2 >> 5) * 4) >> (param_2 & 0x1f) & 1) == 0) {
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
      puVar1 = (uint *)(lVar3 + (longlong)((int)uVar2 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)param_2 & 0x1f);
      return;
    }
  }
  return;
}



// FUNCTION 1446afdad FUN_1446afdad body=69 status=ok
// SIG undefined FUN_1446afdad(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446afdad(void)

{
  _DAT_14cc323f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001446afdef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc323f8,1);
  return;
}



// FUNCTION 1446afdf2 FUN_1446afdf2 body=69 status=ok
// SIG undefined FUN_1446afdf2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446afdf2(void)

{
  _DAT_14cc32408 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001446afe34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc32410,1);
  return;
}



// FUNCTION 1446afe37 FUN_1446afe37 body=69 status=ok
// SIG undefined FUN_1446afe37(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446afe37(void)

{
  _DAT_14cc32420 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001446afe79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc32428,1);
  return;
}



// FUNCTION 1446afe7c FUN_1446afe7c body=69 status=ok
// SIG undefined FUN_1446afe7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446afe7c(void)

{
  _DAT_14cc32438 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001446afebe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc32440,1);
  return;
}



// FUNCTION 1446afec1 FUN_1446afec1 body=69 status=ok
// SIG undefined FUN_1446afec1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446afec1(void)

{
  _DAT_14cc32450 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001446aff03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc32458,1);
  return;
}



// FUNCTION 1446aff0c FUN_1446aff0c body=3321 status=ok
// SIG undefined FUN_1446aff0c(void)

bool FUN_1446aff0c(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  uint *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined2 *puVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  int iVar19;
  longlong *plVar20;
  ulonglong uVar21;
  int iVar22;
  ulonglong uVar23;
  undefined1 auVar24 [16];
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined1 local_f0;
  longlong local_e0;
  ulonglong local_d8;
  longlong *local_d0;
  GUID local_c8;
  longlong local_b8;
  undefined4 local_a8;
  longlong local_a0;
  undefined1 local_90;
  undefined1 local_8f;
  undefined4 local_8c;
  undefined1 local_88;
  undefined1 local_78 [8];
  longlong local_70;
  longlong *local_68;
  undefined1 local_59;
  longlong *local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *(undefined8 *)(param_1 + 0x68) = param_2;
  FUN_140056680(&local_58,L"UdpMessageUnicastSocket");
  FUN_1470b245e(&local_c8,&local_58);
  local_c8.Data1._1_1_ = 0;
  local_c8._4_4_ = SUB84(*(undefined8 *)(param_1 + 0x70),0);
  local_c8.Data4._0_4_ = SUB84((ulonglong)*(undefined8 *)(param_1 + 0x70) >> 0x20,0);
  local_c8.Data1._2_1_ = 1;
  local_90 = 1;
  local_8f = *(undefined1 *)(param_1 + 0x58);
  local_8c = 0x200000;
  uVar7 = FUN_1470b24f2(&local_c8);
  *(undefined8 *)(param_1 + 0x80) = uVar7;
  local_e0 = param_1;
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  lVar13 = local_e0;
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  plVar20 = *(longlong **)(lVar13 + 0x80);
  if (plVar20 == (longlong *)0x0) goto LAB_1446affd4;
  (**(code **)(*plVar20 + 0x118))(plVar20);
  FUN_140056680(&local_58,L"UdpMessageMulticastSocket");
  lVar13 = local_e0;
  FUN_1470b245e(&local_c8,&local_58);
  local_c8.Data1._1_1_ = 0;
  local_88 = 1;
  local_c8._4_4_ = *(undefined4 *)(lVar13 + 0x70);
  local_c8.Data4[2] = '\0';
  local_c8.Data4[3] = '\0';
  local_c8.Data4._0_2_ = *(ushort *)(lVar13 + 0x44);
  local_c8.Data1._2_1_ = 1;
  local_90 = 1;
  local_8f = *(undefined1 *)(lVar13 + 0x58);
  local_8c = 0x200000;
  local_a8 = local_c8._4_4_;
  uVar7 = FUN_1470b24f2(&local_c8);
  *(undefined8 *)(lVar13 + 0x50) = uVar7;
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  plVar11 = *(longlong **)(lVar13 + 0x50);
  lVar18 = lVar13;
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*DAT_14c990958 + 0x90))(DAT_14c990958,&local_c8);
    plVar8 = (longlong *)
             CONCAT44(local_c8._4_4_,
                      CONCAT13(local_c8.Data1._3_1_,
                               CONCAT12(local_c8.Data1._2_1_,
                                        CONCAT11(local_c8.Data1._1_1_,(undefined1)local_c8.Data1))))
    ;
    (**(code **)(*plVar8 + 0x18))(plVar8,*(undefined4 *)(lVar13 + 0x40));
    plVar8 = (longlong *)
             CONCAT44(local_c8._4_4_,
                      CONCAT13(local_c8.Data1._3_1_,
                               CONCAT12(local_c8.Data1._2_1_,
                                        CONCAT11(local_c8.Data1._1_1_,(undefined1)local_c8.Data1))))
    ;
    (**(code **)(*plVar8 + 0x28))(plVar8,*(undefined2 *)(lVar13 + 0x44));
    if (*(int *)(lVar13 + 0x70) == DAT_14c990940) {
      local_58 = (longlong *)0x0;
      plStack_50 = (longlong *)0x0;
      FUN_1446f470e(&local_70,L"WINDOWS",1);
      plVar8 = (longlong *)FUN_140272950(&local_70);
      (**(code **)(*plVar8 + 200))(plVar8,&local_58);
      plVar8 = local_58;
      lVar18 = (longlong)(int)plStack_50;
      if (lVar18 == 0) {
LAB_1446b0192:
        local_59 = 0;
        FUN_1446f470e(local_78,L"WINDOWS",1);
        plVar8 = (longlong *)FUN_140272950(local_78);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c872ef8) &&
           (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
          FUN_1459825b0(&DAT_14c872ee0);
          atexit(FUN_1427868a5);
          _Init_thread_footer(&DAT_14c872ef8);
        }
        (**(code **)(*plVar8 + 0xe0))(plVar8,&local_70,&DAT_14c872ee0,&local_59);
        plVar8 = local_68;
        if (local_68 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_68 + 1) = (int)local_68[1] + 1;
          UNLOCK();
        }
        if (local_70 != 0) {
          (**(code **)(*plVar11 + 0xb0))
                    (plVar11,CONCAT44(local_c8._4_4_,
                                      CONCAT13(local_c8.Data1._3_1_,
                                               CONCAT12(local_c8.Data1._2_1_,
                                                        CONCAT11(local_c8.Data1._1_1_,
                                                                 (undefined1)local_c8.Data1)))));
        }
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar11 = plVar8 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
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
        if (local_68 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_68 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*local_68)(local_68);
            LOCK();
            piVar1 = (int *)((longlong)local_68 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_68 + 0x10))(local_68);
            }
          }
        }
      }
      else {
        lVar16 = 0;
        do {
          if (*(longlong *)((longlong)plVar8 + lVar16) != 0) {
            (**(code **)(*plVar11 + 0xb0))
                      (plVar11,CONCAT44(local_c8._4_4_,
                                        CONCAT13(local_c8.Data1._3_1_,
                                                 CONCAT12(local_c8.Data1._2_1_,
                                                          CONCAT11(local_c8.Data1._1_1_,
                                                                   (undefined1)local_c8.Data1)))));
          }
          lVar16 = lVar16 + 0x10;
        } while (lVar18 * 0x10 != lVar16);
        if ((int)plStack_50 == 0) goto LAB_1446b0192;
      }
      FUN_146b12a16(local_58,(int)plStack_50);
      if (local_58 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      (**(code **)(*DAT_14c990958 + 0x90))(DAT_14c990958,&local_58);
      (**(code **)(*local_58 + 0x18))(local_58,*(undefined4 *)(lVar13 + 0x70));
      (**(code **)(*local_58 + 0x28))(local_58,*(undefined2 *)(lVar13 + 0x74));
      plVar8 = plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
        UNLOCK();
      }
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0xb0))
                  (plVar11,CONCAT44(local_c8._4_4_,
                                    CONCAT13(local_c8.Data1._3_1_,
                                             CONCAT12(local_c8.Data1._2_1_,
                                                      CONCAT11(local_c8.Data1._1_1_,
                                                               (undefined1)local_c8.Data1)))));
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar8 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
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
      plVar11 = plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        plVar8 = plStack_50 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plStack_50)(plStack_50);
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
    plVar11 = (longlong *)CONCAT44(local_c8.Data4._4_4_,local_c8.Data4._0_4_);
    lVar18 = local_e0;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar11 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        lVar18 = local_e0;
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          lVar18 = local_e0;
        }
      }
    }
  }
  auVar24 = roundpd(ZEXT816(0x412e848100000000),ZEXT816(0x412e848100000000),1);
  local_58 = (longlong *)(longlong)auVar24._0_8_;
  lVar16 = FUN_14001cc68(0x2d0,0x10);
  local_c8.Data1._0_1_ = 0;
  local_c8.Data1._1_1_ = 0;
  local_c8.Data1._2_1_ = 0;
  local_c8.Data1._3_1_ = 0;
  local_c8.Data2 = 0;
  local_c8.Data3 = 0;
  local_c8.Data4[0] = '\0';
  local_c8.Data4[1] = '\0';
  local_c8.Data4[2] = '\0';
  local_c8.Data4[3] = '\0';
  local_c8.Data4[4] = '\0';
  local_c8.Data4[5] = '\0';
  local_c8.Data4[6] = '\0';
  local_c8.Data4[7] = '\0';
  CoCreateGuid(&local_c8);
  FUN_1498f1c18(lVar16,*(undefined8 *)(lVar18 + 0x80),&local_c8,lVar13 + 0x40);
  *(longlong *)(lVar18 + 0x38) = lVar16;
  puVar2 = (uint *)(lVar18 + 0x98);
  uVar17 = *(uint *)(lVar18 + 0xb0);
  local_d0 = plVar20;
  if (uVar17 == 0) {
    uVar21 = 1;
    uVar23 = 0;
    iVar19 = 0;
    uVar4 = 0;
  }
  else {
    puVar9 = *(uint **)(lVar18 + 0xa8);
    if (*(uint **)(lVar18 + 0xa8) == (uint *)0x0) {
      puVar9 = puVar2;
    }
    uVar4 = *puVar9;
    if (uVar4 == 0) {
      iVar19 = uVar17 + 0x1e;
      if (-1 < (int)(uVar17 - 1)) {
        iVar19 = uVar17 - 1;
      }
      uVar23 = 0;
      uVar12 = (ulonglong)(uint)(iVar19 >> 5);
      if (iVar19 >> 5 < 1) {
        uVar12 = uVar23;
      }
      iVar19 = 0;
      do {
        if (uVar12 == uVar23) goto LAB_1446b05c7;
        iVar19 = iVar19 + 0x20;
        uVar4 = puVar9[uVar23 + 1];
        uVar23 = uVar23 + 1;
      } while (uVar4 == 0);
    }
    else {
      uVar23 = 0;
      iVar19 = 0;
    }
    uVar21 = (ulonglong)(-uVar4 & uVar4);
    uVar12 = uVar21 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar4 = (iVar19 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if ((int)uVar17 <= (int)uVar4) {
      uVar4 = uVar17;
    }
  }
  if (uVar4 != uVar17) {
    uVar15 = 0xffffffff;
    local_d8 = (ulonglong)uVar17;
    do {
      lVar13 = *(longlong *)(*(longlong *)(lVar18 + 0x38) + 0x30);
      if (lVar13 != 0) {
        uVar7 = *(undefined8 *)(*(longlong *)(lVar18 + 0x88) + (longlong)(int)uVar4 * 0x10);
        puVar10 = (undefined8 *)FUN_14001cc68(0x18,0x10);
        *puVar10 = 0;
        puVar10[1] = uVar7;
        *(undefined1 *)(puVar10 + 2) = 1;
        lVar18 = local_e0;
        if (puVar10 != (undefined8 *)0x0) {
          puVar3 = *(undefined8 **)(lVar13 + 0x40);
          *(undefined8 **)(lVar13 + 0x40) = puVar10;
          *puVar3 = puVar10;
          uVar17 = *(uint *)(local_e0 + 0xb0);
        }
      }
      uVar15 = uVar15 & ~(uint)uVar21;
      puVar9 = *(uint **)(lVar18 + 0xa8);
      if (*(uint **)(lVar18 + 0xa8) == (uint *)0x0) {
        puVar9 = puVar2;
      }
      iVar22 = (int)uVar23;
      lVar13 = (longlong)iVar22;
      uVar4 = puVar9[lVar13] & uVar15;
      if (uVar4 == 0) {
        iVar5 = uVar17 + 0x1e;
        if (-1 < (int)(uVar17 - 1)) {
          iVar5 = uVar17 - 1;
        }
        iVar5 = iVar5 >> 5;
        iVar19 = iVar19 + 0x20;
        iVar6 = iVar5;
        if (iVar5 < iVar22) {
          iVar6 = iVar22;
        }
        if (iVar22 < iVar5) {
          lVar16 = 0;
          do {
            uVar4 = puVar9[lVar13 + lVar16 + 1];
            if (uVar4 != 0) {
              uVar23 = (ulonglong)(iVar22 + (int)lVar16 + 1);
              uVar15 = 0xffffffff;
              goto LAB_1446b057c;
            }
            iVar19 = iVar19 + 0x20;
            lVar16 = lVar16 + 1;
          } while (iVar6 - lVar13 != lVar16);
          uVar15 = 0xffffffff;
          iVar22 = iVar6;
        }
        uVar23 = (ulonglong)(iVar22 + 1);
        lVar18 = local_e0;
        uVar4 = uVar17;
      }
      else {
LAB_1446b057c:
        uVar21 = (ulonglong)(-uVar4 & uVar4);
        uVar12 = uVar21 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        uVar4 = (iVar19 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if ((int)uVar17 <= (int)uVar4) {
          uVar4 = uVar17;
        }
      }
    } while (uVar4 != (uint)local_d8);
    lVar16 = *(longlong *)(lVar18 + 0x38);
  }
LAB_1446b05c7:
  if (*(int *)(lVar16 + 0x1f0) != 3) {
    FUN_1446efa72((longlong *)(lVar16 + 0x1e8),0,3,0x10);
    *(undefined4 *)(lVar16 + 0x1f0) = 3;
  }
  puVar10 = *(undefined8 **)(lVar16 + 0x1e8);
  *puVar10 = &PTR_LAB_14befd630;
  LOCK();
  UNLOCK();
  lVar18 = DAT_14c758608 + 1;
  lVar13 = DAT_14c758608 + 1;
  if (lVar18 == 0) {
    LOCK();
    UNLOCK();
    lVar18 = DAT_14c758608 + 2;
    lVar13 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar13;
  puVar10[2] = lVar18;
  *puVar10 = &PTR_FUN_14befd5c0;
  puVar10[3] = local_e0;
  puVar10[4] = FUN_1446b0c06;
  *(undefined4 *)(puVar10 + 5) = 0;
  lVar13 = *(longlong *)(local_e0 + 0x38);
  if (*(int *)(lVar13 + 0x200) != 3) {
    FUN_1446efa72((longlong *)(lVar13 + 0x1f8),0,3,0x10);
    *(undefined4 *)(lVar13 + 0x200) = 3;
  }
  plVar20 = local_d0;
  puVar10 = *(undefined8 **)(lVar13 + 0x1f8);
  *puVar10 = &PTR_LAB_14befd710;
  LOCK();
  UNLOCK();
  lVar18 = DAT_14c758608 + 1;
  lVar13 = DAT_14c758608 + 1;
  if (lVar18 == 0) {
    LOCK();
    UNLOCK();
    lVar18 = DAT_14c758608 + 2;
    lVar13 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar13;
  puVar10[2] = lVar18;
  *puVar10 = &PTR_FUN_14befd6a0;
  puVar10[3] = local_e0;
  puVar10[4] = &LAB_1498f5048;
  *(undefined4 *)(puVar10 + 5) = 0;
  lVar13 = *(longlong *)(local_e0 + 0x38);
  if (*(int *)(lVar13 + 0x210) != 3) {
    FUN_1446efa72((longlong *)(lVar13 + 0x208),0,3,0x10);
    *(undefined4 *)(lVar13 + 0x210) = 3;
  }
  puVar10 = *(undefined8 **)(lVar13 + 0x208);
  *puVar10 = &PTR_LAB_14befd710;
  LOCK();
  UNLOCK();
  lVar18 = DAT_14c758608 + 1;
  lVar13 = DAT_14c758608 + 1;
  if (lVar18 == 0) {
    LOCK();
    UNLOCK();
    lVar18 = DAT_14c758608 + 2;
    lVar13 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar13;
  puVar10[2] = lVar18;
  *puVar10 = &PTR_FUN_14befd6a0;
  puVar10[3] = local_e0;
  puVar10[4] = &LAB_1498f5056;
  *(undefined4 *)(puVar10 + 5) = 0;
  lVar13 = *(longlong *)(local_e0 + 0x38);
  if (*(int *)(lVar13 + 0x220) != 3) {
    FUN_1446efa72((longlong *)(lVar13 + 0x218),0,3,0x10);
    *(undefined4 *)(lVar13 + 0x220) = 3;
  }
  puVar10 = *(undefined8 **)(lVar13 + 0x218);
  *puVar10 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar18 = DAT_14c758608 + 1;
  lVar13 = DAT_14c758608 + 1;
  if (lVar18 == 0) {
    LOCK();
    UNLOCK();
    lVar18 = DAT_14c758608 + 2;
    lVar13 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar13;
  puVar10[2] = lVar18;
  *puVar10 = &PTR_FUN_14befd780;
  puVar10[3] = local_e0;
  puVar10[4] = FUN_1446b184e;
  *(undefined4 *)(puVar10 + 5) = 0;
  lVar13 = *(longlong *)(local_e0 + 0x38);
  if (*(int *)(lVar13 + 0x230) != 3) {
    FUN_1446efa72((longlong *)(lVar13 + 0x228),0,3,0x10);
    *(undefined4 *)(lVar13 + 0x230) = 3;
  }
  puVar10 = *(undefined8 **)(lVar13 + 0x228);
  *puVar10 = &PTR_LAB_14befd860;
  LOCK();
  UNLOCK();
  lVar18 = DAT_14c758608 + 1;
  lVar13 = DAT_14c758608 + 1;
  if (lVar18 == 0) {
    LOCK();
    UNLOCK();
    lVar18 = DAT_14c758608 + 2;
    lVar13 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar13;
  puVar10[2] = lVar18;
  *puVar10 = &PTR_FUN_14befd7f0;
  puVar10[3] = local_e0;
  puVar10[4] = &LAB_1498f5064;
  *(undefined4 *)(puVar10 + 5) = 0;
  lVar13 = *(longlong *)(local_e0 + 0x38);
  if (*(int *)(lVar13 + 0x240) != 3) {
    FUN_1446efa72((longlong *)(lVar13 + 0x238),0,3,0x10);
    *(undefined4 *)(lVar13 + 0x240) = 3;
  }
  puVar10 = *(undefined8 **)(lVar13 + 0x238);
  *puVar10 = &PTR_LAB_14befd940;
  LOCK();
  UNLOCK();
  lVar18 = DAT_14c758608 + 1;
  lVar13 = DAT_14c758608 + 1;
  if (lVar18 == 0) {
    LOCK();
    UNLOCK();
    lVar18 = DAT_14c758608 + 2;
    lVar13 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar13;
  puVar10[2] = lVar18;
  *puVar10 = &PTR_FUN_14befd8d0;
  puVar10[3] = local_e0;
  puVar10[4] = FUN_1498f506c;
  *(undefined4 *)(puVar10 + 5) = 0;
  plVar11 = (longlong *)FUN_145b17d02();
  lVar13 = plVar11[0x22];
  if (lVar13 == 0) {
    (**(code **)(*plVar11 + 1000))(plVar11);
    lVar13 = plVar11[0x22];
  }
  lVar18 = local_e0;
  *(undefined1 *)(*(longlong *)(local_e0 + 0x38) + 0x1c8) = *(undefined1 *)(lVar13 + 0x80);
  lVar13 = *(longlong *)(local_e0 + 0x50);
  if (lVar13 != 0) {
    lVar16 = FUN_14001cc68(0x60,0x10);
    FUN_1498f5114(lVar16,lVar13,&local_58,L"UdpMessageMulticastReceiver");
    *(longlong *)(lVar18 + 0x48) = lVar16;
    if (*(int *)(lVar16 + 0x58) != 3) {
      FUN_1446efa72((longlong *)(lVar16 + 0x50),0,3,0x10);
      *(undefined4 *)(lVar16 + 0x58) = 3;
    }
    puVar10 = *(undefined8 **)(lVar16 + 0x50);
    *puVar10 = &PTR_LAB_14befda20;
    LOCK();
    UNLOCK();
    lVar18 = DAT_14c758608 + 1;
    lVar13 = DAT_14c758608 + 1;
    if (lVar18 == 0) {
      LOCK();
      UNLOCK();
      lVar18 = DAT_14c758608 + 2;
      lVar13 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar13;
    puVar10[2] = lVar18;
    *puVar10 = &PTR_FUN_14befd9b0;
    puVar10[3] = local_e0;
    puVar10[4] = &LAB_1498f51c0;
    *(undefined4 *)(puVar10 + 5) = 0;
    *(undefined4 *)(*(longlong *)(local_e0 + 0x48) + 0x48) = 0x800;
    lVar13 = *(longlong *)(local_e0 + 0x48);
    if (*(int *)(lVar13 + 0x38) == 0) {
      puVar14 = &DAT_149dfb77a;
    }
    else {
      puVar14 = *(undefined2 **)(lVar13 + 0x30);
    }
    local_f0 = 0;
    local_f8 = 0xffffffffffffffff;
    uVar7 = FUN_1411b1052(lVar13,puVar14,0x20000,1);
    *(undefined8 *)(lVar13 + 0x28) = uVar7;
  }
  lVar13 = local_e0;
  lVar18 = FUN_14001cc68(0x60,0x10);
  FUN_1498f5114(lVar18,*(undefined8 *)(lVar13 + 0x80),&local_58,L"UdpMessageUnicastReceiver");
  *(longlong *)(lVar13 + 0x78) = lVar18;
  if (*(int *)(lVar18 + 0x58) != 3) {
    FUN_1446efa72((longlong *)(lVar18 + 0x50),0,3,0x10);
    *(undefined4 *)(lVar18 + 0x58) = 3;
  }
  puVar10 = *(undefined8 **)(lVar18 + 0x50);
  *puVar10 = &PTR_LAB_14befda20;
  LOCK();
  UNLOCK();
  lVar18 = DAT_14c758608 + 1;
  lVar13 = DAT_14c758608 + 1;
  if (lVar18 == 0) {
    LOCK();
    UNLOCK();
    lVar18 = DAT_14c758608 + 2;
    lVar13 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar13;
  puVar10[2] = lVar18;
  *puVar10 = &PTR_FUN_14befd9b0;
  puVar10[3] = local_e0;
  puVar10[4] = &LAB_1498f51c0;
  *(undefined4 *)(puVar10 + 5) = 0;
  *(undefined4 *)(*(longlong *)(local_e0 + 0x78) + 0x48) = 0x800;
  lVar13 = *(longlong *)(local_e0 + 0x78);
  if (*(int *)(lVar13 + 0x38) == 0) {
    puVar14 = &DAT_149dfb77a;
  }
  else {
    puVar14 = *(undefined2 **)(lVar13 + 0x30);
  }
  local_f0 = 0;
  local_f8 = 0xffffffffffffffff;
  uVar7 = FUN_1411b1052(lVar13,puVar14,0x20000,1);
  *(undefined8 *)(lVar13 + 0x28) = uVar7;
LAB_1446affd4:
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar20 != (longlong *)0x0;
}



// FUNCTION 1446b0c06 FUN_1446b0c06 body=3143 status=ok
// SIG undefined FUN_1446b0c06(void)

void FUN_1446b0c06(longlong param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  ulonglong *puVar2;
  int *piVar3;
  ulonglong *puVar4;
  uint *puVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  longlong lVar8;
  char cVar9;
  int iVar10;
  ulonglong *puVar11;
  longlong *plVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  undefined8 *puVar17;
  int iVar18;
  bool bVar19;
  undefined1 auStack_208 [32];
  wchar_t *local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  wchar_t *local_1d0;
  wchar_t *local_1c8;
  code *local_1c0;
  undefined1 *local_1b8;
  code **local_1b0;
  code *local_1a8;
  code *local_1a0;
  ulonglong *local_198;
  undefined **local_190;
  ulonglong *local_188;
  byte local_168;
  byte local_167;
  byte local_166;
  undefined8 local_158;
  longlong *local_138;
  longlong local_118;
  undefined8 local_100;
  ulonglong *local_f8;
  undefined8 local_f0;
  code **local_e8;
  code ***pppcStack_e0;
  undefined8 uStack_d8;
  undefined1 local_c8 [8];
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined6 uStack_a0;
  undefined2 uStack_9a;
  undefined6 uStack_98;
  undefined8 uStack_92;
  code **local_88;
  code ***pppcStack_80;
  code *local_78;
  undefined1 local_70 [8];
  code *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  puVar11 = (ulonglong *)FUN_14001cc68(0xc0,0x10);
  puVar11[1] = (ulonglong)&DAT_100000001;
  *puVar11 = (ulonglong)&PTR_FUN_14befda90;
  ppuVar1 = (undefined **)(puVar11 + 2);
  FUN_1498f0544(ppuVar1);
  cVar9 = '\0';
  memset(&local_190,0,0x90);
  FUN_144869430(&local_190);
  local_100 = 0;
  local_190 = &PTR_FUN_149e1e050;
  local_f0 = 0x7fffffffffffffff;
  local_168 = local_168 | 1;
  local_f8 = param_2 + 2;
  FUN_1449c2eca(&local_190,0);
  local_158 = 0x400;
  puVar11[0x17] = *param_2;
  switch((char)param_2[1]) {
  case '\n':
    cVar9 = FUN_1498f06e6(ppuVar1,&local_190);
    break;
  case '\v':
  case '\f':
  case '\r':
  case '\x0e':
    uVar13 = 1;
    goto LAB_1446b0d17;
  case '\x0f':
    uVar13 = 0;
LAB_1446b0d17:
    cVar9 = FUN_1446ac026(ppuVar1,&local_190,uVar13);
    break;
  case '\x10':
  case '\x11':
    puVar4 = puVar11 + 0x17;
    local_88 = (code **)0x0;
    pppcStack_80 = (code ***)0x0;
    plVar12 = (longlong *)(*(code *)local_190[0x2c])(&local_190,&local_88);
    (**(code **)(*plVar12 + 0x160))(plVar12,&pppcStack_80);
    cVar9 = FUN_1498f0ac0(puVar4);
    if (cVar9 == '\0') {
      iVar10 = *(int *)((longlong)puVar11 + 0xbc);
    }
    else {
      local_e8 = local_88;
      pppcStack_e0 = pppcStack_80;
      if (DAT_14c948fa0 == 0) {
        local_78 = (code *)&DAT_1427db2a2;
        lVar15 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        DAT_14c948fa0 = lVar15;
        FUN_1446f470e(local_70,L"ScriptStruct",1);
        local_1b8 = &LAB_1468915ce;
        local_1c0 = FUN_1427dc742;
        local_1d0 = L"Engine";
        local_1c8 = (wchar_t *)CONCAT44(local_1c8._4_4_,199);
        local_1d8 = 0x10;
        local_1e0 = 0x10000020;
        local_1e8._0_4_ = 8;
        local_1b0 = &local_78;
        FUN_14574b4b2(lVar15);
        DAT_14c948fa0 = lVar15;
        if (DAT_14c927740 == 0) {
          local_1b0 = &local_68;
          local_68 = FUN_1449e2820;
          local_1a0 = FUN_14081d0ea;
          local_1a8 = FUN_14081d0ea;
          local_1b8 = &LAB_146856450;
          local_1c0 = FUN_1427b121c;
          local_1c8 = L"Engine";
          local_1d0 = (wchar_t *)0x0;
          local_1d8 = CONCAT44(local_1d8._4_4_,0x10000021);
          local_1e0 = 8;
          local_1e8._0_4_ = 0x28;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
        }
        lVar8 = DAT_14c948fa0;
        lVar15 = DAT_14c927740;
        uVar13 = FUN_1449e2fb2();
        local_1e8 = L"ScriptStruct";
        FUN_14574b446(uVar13,lVar8,lVar15,L"/Script/CoreUObject");
      }
      lVar15 = FUN_146900d4f(DAT_14c948fa0,&local_e8,0);
      if (lVar15 == 0) {
        *(undefined4 *)puVar4 = 0;
        iVar10 = 0;
      }
      else {
        uVar16 = *(uint *)(lVar15 + 0xc);
        *(uint *)puVar4 = uVar16;
        if ((int)uVar16 < DAT_14c9647dc) {
          lVar15 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
        }
        else {
          lVar15 = 0;
        }
        iVar10 = *(int *)(lVar15 + 0x10);
        if (*(int *)(lVar15 + 0x10) == 0) {
          LOCK();
          iVar10 = DAT_14c964868 + 1;
          UNLOCK();
          iVar18 = DAT_14c964868 + 1;
          bVar19 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar10;
          if (bVar19) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar18);
          }
          LOCK();
          iVar10 = *(int *)(lVar15 + 0x10);
          bVar19 = iVar10 == 0;
          if (bVar19) {
            *(int *)(lVar15 + 0x10) = iVar18;
            iVar10 = 0;
          }
          UNLOCK();
          if (bVar19) {
            iVar10 = iVar18;
          }
        }
      }
      *(int *)((longlong)puVar11 + 0xbc) = iVar10;
    }
    if ((((iVar10 != 0) && (uVar16 = (uint)*puVar4, -1 < (int)uVar16)) &&
        ((int)uVar16 < DAT_14c9647dc)) &&
       ((lVar15 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8), lVar15 != 0 &&
        (*(int *)(lVar15 + 0x10) == iVar10)))) {
      FUN_1402ac1b3(&local_190,puVar11 + 0x14);
      uVar14 = (ulonglong)local_e8 >> 0x20;
      local_e8 = (code **)((ulonglong)local_e8 & 0xffffffff00000000);
      puVar5 = (uint *)*local_188 + 1;
      if ((uint *)local_188[1] < puVar5) {
        if ((local_166 & 2) == 0) {
          (*(code *)local_190[0x2e])(&local_190,&local_e8,4);
        }
        else {
          FUN_14572512c(&local_190,&local_e8);
        }
        uVar16 = (uint)local_e8;
      }
      else {
        uVar16 = *(uint *)*local_188;
        local_e8 = (code **)CONCAT44((int)uVar14,uVar16);
        *local_188 = (ulonglong)puVar5;
      }
      if (uVar16 < 0x401) {
        *(undefined4 *)(puVar11 + 0x12) = 0;
        if (*(uint *)((longlong)puVar11 + 0x94) != uVar16) {
          FUN_14706f710(puVar11 + 0x11);
          uVar16 = (uint)local_e8;
        }
        local_e8 = (code **)CONCAT44(local_e8._4_4_,uVar16 - 1);
        if (0 < (int)uVar16) {
          do {
            uVar13 = FUN_1498f01c2(puVar11 + 0x11);
            FUN_1402ac1b3(&local_190,uVar13);
            iVar10 = (uint)local_e8;
            local_e8 = (code **)CONCAT44(local_e8._4_4_,(uint)local_e8 + -1);
          } while (0 < iVar10);
        }
        puVar2 = puVar11 + 0x13;
        if ((undefined1 *)local_188[1] < (undefined1 *)*local_188 + 1) {
          (*(code *)local_190[0x2e])(&local_190,puVar2,1);
        }
        else {
          *(undefined1 *)puVar2 = *(undefined1 *)*local_188;
          *local_188 = *local_188 + 1;
        }
        if ((byte)*puVar2 < 4) {
          if ((undefined4 *)local_188[1] < (undefined4 *)*local_188 + 1) {
            if ((local_166 & 2) == 0) {
              (*(code *)local_190[0x2e])(&local_190,(undefined4 *)((longlong)puVar11 + 0x9c),4);
            }
            else {
              FUN_14572512c(&local_190);
            }
          }
          else {
            *(undefined4 *)((longlong)puVar11 + 0x9c) = *(undefined4 *)*local_188;
            *local_188 = *local_188 + 4;
          }
          FUN_1408383eb(&local_190,puVar11 + 0x16);
          FUN_1408383eb(&local_190,puVar11 + 0xf);
          local_78 = (code *)((ulonglong)local_78 & 0xffffffff00000000);
          piVar3 = (int *)*local_188 + 1;
          local_198 = puVar4;
          if ((int *)local_188[1] < piVar3) {
            if ((local_166 & 2) == 0) {
              (*(code *)local_190[0x2e])(&local_190,&local_78,4);
            }
            else {
              FUN_14572512c(&local_190,&local_78);
            }
            iVar10 = (int)local_78;
          }
          else {
            iVar10 = *(int *)*local_188;
            *local_188 = (ulonglong)piVar3;
          }
          if (iVar10 < 0x81) {
            local_78 = (code *)CONCAT44(local_78._4_4_,iVar10 + -1);
            if (0 < iVar10) {
              do {
                local_68 = (code *)0x0;
                local_88 = (code **)0x0;
                pppcStack_80 = (code ***)0x0;
                (*(code *)local_190[0x2c])(&local_190,&local_68);
                FUN_14021219d(&local_190,&local_88);
                local_e8 = &local_68;
                pppcStack_e0 = &local_88;
                FUN_1406e263c(puVar11 + 3,local_70,&local_e8,0);
                if (local_88 != (code **)0x0) {
                  FUN_1400020a8();
                }
                iVar10 = (int)local_78;
                local_78 = (code *)CONCAT44(local_78._4_4_,(int)local_78 + -1);
              } while (0 < iVar10);
            }
            puVar6 = (undefined1 *)*local_188 + 1;
            if ((undefined1 *)local_188[1] < puVar6) {
              (*(code *)local_190[0x2e])(&local_190,&local_88,1);
              uVar7 = local_88._0_1_;
            }
            else {
              uVar7 = *(undefined1 *)*local_188;
              local_88 = (code **)CONCAT71(local_88._1_7_,uVar7);
              *local_188 = (ulonglong)puVar6;
            }
            puVar4 = local_198;
            if (*(int *)((longlong)puVar11 + 0xbc) == 0) {
LAB_1446b1639:
              lVar15 = 0;
            }
            else {
              uVar16 = (uint)*local_198;
              lVar15 = 0;
              if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c9647dc)) {
                plVar12 = (longlong *)
                          ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8));
                if ((plVar12 == (longlong *)0x0) ||
                   (((int)plVar12[2] != *(int *)((longlong)puVar11 + 0xbc) ||
                    ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)))) goto LAB_1446b1639;
                lVar15 = *plVar12;
              }
            }
            plVar12 = (longlong *)0x0;
            uVar14 = FUN_14001cc68((longlong)
                                   (int)(-*(int *)(lVar15 + 0x5c) &
                                        (*(int *)(lVar15 + 0x58) + *(int *)(lVar15 + 0x5c)) - 1U),0)
            ;
            puVar11[0x10] = uVar14;
            if (*(int *)((longlong)puVar11 + 0xbc) != 0) {
              uVar16 = (uint)*puVar4;
              plVar12 = (longlong *)0x0;
              if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c9647dc)) {
                puVar17 = (undefined8 *)
                          ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8));
                if ((puVar17 == (undefined8 *)0x0) ||
                   ((*(int *)(puVar17 + 2) != *(int *)((longlong)puVar11 + 0xbc) ||
                    ((*(uint *)(puVar17 + 1) & 0x10200000) != 0)))) {
                  plVar12 = (longlong *)0x0;
                }
                else {
                  plVar12 = (longlong *)*puVar17;
                }
              }
            }
            (**(code **)(*plVar12 + 0x2e8))(plVar12,uVar14,1);
            switch(uVar7) {
            case 1:
              local_e8 = (code **)&PTR_LAB_14ba6ce70;
              pppcStack_e0 = (code ***)0x0;
              uStack_d8 = 0;
              FUN_14904501e(local_c8,&local_190);
              if (*(int *)((longlong)puVar11 + 0xbc) == 0) {
LAB_1446b1689:
                uVar13 = 0;
              }
              else {
                uVar16 = (uint)*puVar4;
                uVar13 = 0;
                if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c9647dc)) {
                  puVar17 = (undefined8 *)
                            ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8));
                  if ((puVar17 == (undefined8 *)0x0) ||
                     ((*(int *)(puVar17 + 2) != *(int *)((longlong)puVar11 + 0xbc) ||
                      ((*(uint *)(puVar17 + 1) & 0x10200000) != 0)))) goto LAB_1446b1689;
                  uVar13 = *puVar17;
                }
              }
              cVar9 = FUN_14902ace4(puVar11[0x10],uVar13,&local_e8);
              FUN_149044fa2(&local_e8);
              goto switchD_1446b0d0a_default;
            case 2:
              if (*(int *)((longlong)puVar11 + 0xbc) == 0) {
LAB_1446b1640:
                uVar13 = 0;
              }
              else {
                uVar16 = (uint)*puVar4;
                uVar13 = 0;
                if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c9647dc)) {
                  puVar17 = (undefined8 *)
                            ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8));
                  if ((puVar17 == (undefined8 *)0x0) ||
                     ((*(int *)(puVar17 + 2) != *(int *)((longlong)puVar11 + 0xbc) ||
                      ((*(uint *)(puVar17 + 1) & 0x10200000) != 0)))) goto LAB_1446b1640;
                  uVar13 = *puVar17;
                }
              }
              FUN_14047320e(uVar13,&local_190,puVar11[0x10],0);
              cVar9 = (local_167 & 2) == 0;
              goto switchD_1446b0d0a_default;
            case 3:
              local_e8 = (code **)&PTR_LAB_14ab31f70;
              uVar13 = 0;
              FUN_147ddc9c4(&pppcStack_e0,&local_190,0);
              if (*(int *)((longlong)puVar11 + 0xbc) != 0) {
                uVar16 = (uint)*puVar4;
                uVar13 = 0;
                if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c9647dc)) {
                  puVar17 = (undefined8 *)
                            ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8));
                  if ((puVar17 == (undefined8 *)0x0) ||
                     ((*(int *)(puVar17 + 2) != *(int *)((longlong)puVar11 + 0xbc) ||
                      ((*(uint *)(puVar17 + 1) & 0x10200000) != 0)))) {
                    uVar13 = 0;
                  }
                  else {
                    uVar13 = *puVar17;
                  }
                }
              }
              uVar14 = puVar11[0x10];
              break;
            case 4:
              local_e8 = (code **)&PTR_LAB_14ab31f70;
              FUN_147ddc9c4(&pppcStack_e0,&local_190,1);
              if (*(int *)((longlong)puVar11 + 0xbc) == 0) {
LAB_1446b1690:
                uVar13 = 0;
              }
              else {
                uVar16 = (uint)*puVar4;
                uVar13 = 0;
                if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c9647dc)) {
                  puVar17 = (undefined8 *)
                            ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8));
                  if ((puVar17 == (undefined8 *)0x0) ||
                     ((*(int *)(puVar17 + 2) != *(int *)((longlong)puVar11 + 0xbc) ||
                      ((*(uint *)(puVar17 + 1) & 0x10200000) != 0)))) goto LAB_1446b1690;
                  uVar13 = *puVar17;
                }
              }
              uVar14 = puVar11[0x10];
              break;
            default:
              goto switchD_1446b12d7_default;
            }
            uStack_92 = 0;
            uStack_98 = 0;
            uStack_9a = 0;
            uStack_a0 = 0;
            local_a8 = 0;
            uStack_b0 = 0;
            local_b8 = 0;
            local_c0 = 0x1c;
            cVar9 = FUN_14902ace4(uVar14,uVar13,&local_e8);
            FUN_147dde11c(&local_e8);
            break;
          }
        }
      }
    }
switchD_1446b12d7_default:
    cVar9 = '\0';
  }
switchD_1446b0d0a_default:
  local_190 = &PTR__purecall_149e35f70;
  if (local_138 != (longlong *)0x0) {
    if (*local_138 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_138);
  }
  if (local_118 != 0) {
    if (*(longlong *)(local_118 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_118);
  }
  if (cVar9 != '\0') {
    plVar12 = *(longlong **)(param_1 + 0x68);
    if (puVar11 != (ulonglong *)0x0) {
      LOCK();
      *(int *)(puVar11 + 1) = (int)puVar11[1] + 1;
      UNLOCK();
    }
    local_190 = ppuVar1;
    local_188 = puVar11;
    (**(code **)(*plVar12 + 0x10))(plVar12,&local_190,param_4);
    puVar4 = local_188;
    if (local_188 != (ulonglong *)0x0) {
      LOCK();
      puVar2 = local_188 + 1;
      *(int *)puVar2 = (int)*puVar2 + -1;
      UNLOCK();
      if ((int)*puVar2 == 0) {
        (**(code **)*local_188)(local_188);
        LOCK();
        piVar3 = (int *)((longlong)puVar4 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*puVar4 + 0x10))(puVar4);
        }
      }
    }
  }
  if (puVar11 != (ulonglong *)0x0) {
    LOCK();
    puVar4 = puVar11 + 1;
    *(int *)puVar4 = (int)*puVar4 + -1;
    UNLOCK();
    if ((int)*puVar4 == 0) {
      (**(code **)*puVar11)(puVar11);
      LOCK();
      piVar3 = (int *)((longlong)puVar11 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*puVar11 + 0x10))(puVar11);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1446b184e FUN_1446b184e body=1315 status=ok
// SIG undefined FUN_1446b184e(void)

void FUN_1446b184e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  uint uVar11;
  longlong *plVar12;
  uint *puVar13;
  undefined8 uVar14;
  undefined ***pppuVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  bool bVar18;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  longlong *plStack_e0;
  undefined1 local_d8;
  undefined1 local_c9;
  longlong local_c8 [2];
  longlong *local_b8;
  longlong local_a8 [4];
  code *local_88;
  undefined ***local_78;
  undefined **local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(longlong *)(param_1 + 0x18) == 0) {
    plVar16 = *(longlong **)(param_1 + 0x10);
    if (plVar16 == (longlong *)0x0) {
LAB_1446b18b4:
      plVar16 = (longlong *)0x0;
      bVar18 = true;
      uVar14 = 0;
    }
    else {
      iVar7 = (int)plVar16[1];
      do {
        if (iVar7 == 0) goto LAB_1446b18b4;
        LOCK();
        iVar6 = (int)plVar16[1];
        bVar18 = iVar7 == iVar6;
        if (bVar18) {
          *(int *)(plVar16 + 1) = iVar7 + 1;
          iVar6 = iVar7;
        }
        iVar7 = iVar6;
        UNLOCK();
      } while (!bVar18);
      uVar14 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)((longlong)plVar16 + 0xc) = *(int *)((longlong)plVar16 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar12 = plVar16 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
      bVar18 = false;
      LOCK();
      *(int *)((longlong)plVar16 + 0xc) = *(int *)((longlong)plVar16 + 0xc) + 1;
      UNLOCK();
    }
    local_b8 = (longlong *)0x0;
    local_c8[0] = 0;
    local_78 = (undefined ***)0x0;
    local_68 = &PTR_LAB_14befdab0;
    local_88 = FUN_1446b2c82;
    uStack_60 = uVar14;
    local_58 = plVar16;
    FUN_14170b918(&local_e8,local_c8);
    plVar12 = plStack_e0;
    uVar14 = local_e8;
    local_d8 = 1;
    if (plStack_e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_e0 + 1) = (int)plStack_e0[1] + 1;
      UNLOCK();
    }
    puVar3 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar9 = (uint *)*puVar3;
    if (puVar9 != (uint *)0x0) goto LAB_1446b1a1a;
    while( true ) {
      uVar11 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar11 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar11 | 1;
        __tlregdtor(&LAB_1446b26e4);
      }
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar8 = *(undefined4 **)(lVar5 + 0x310);
      *(undefined8 *)(lVar5 + 0x310) = 0;
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar8 = 0xffffffff;
      *(undefined4 **)(puVar8 + 0x10) = puVar8 + 0x16;
      puVar8[0x12] = 0;
      *puVar3 = puVar8;
      FUN_140217a48(puVar3);
      puVar9 = (uint *)*puVar3;
LAB_1446b1a1a:
      puVar17 = (undefined8 *)(*(longlong *)(puVar9 + 0x10) + 0xfU & 0xfffffffffffffff0);
      puVar13 = (uint *)(puVar17 + 0x22);
      uVar11 = puVar9[0x12];
      if (puVar13 <= puVar9 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar9 + 0x10) = puVar9 + 0x4000;
        LOCK();
        uVar4 = *puVar9;
        *puVar9 = *puVar9 + uVar11 + 1;
        UNLOCK();
        if ((uVar4 ^ uVar11) != 0xffffffff) break;
        puVar9 = (uint *)*puVar3;
        *puVar9 = 0xffffffff;
        *(uint **)(puVar9 + 0x10) = puVar9 + 0x16;
        puVar9[0x12] = 0;
        *puVar3 = puVar9;
        puVar17 = (undefined8 *)((longlong)puVar9 + 0x67U & 0xfffffffffffffff0);
        puVar13 = (uint *)(puVar17 + 0x22);
        uVar11 = 0;
        if (puVar13 <= puVar9 + 0x4000) {
          uVar11 = 1;
          goto LAB_1446b1a9a;
        }
      }
    }
    uVar11 = uVar11 + 1;
LAB_1446b1a9a:
    *(uint **)(puVar9 + 0x10) = puVar13;
    puVar9[0x12] = uVar11;
    FUN_1447247dc(puVar17,0);
    *puVar17 = TGraphTask<TAsyncGraphTask<void>_>::vftable;
    puVar17[0x16] = local_88;
    puVar17[0x18] = local_78;
    local_78 = (undefined ***)0x0;
    *(undefined4 *)(puVar17 + 0x1c) = (undefined4)local_58;
    *(undefined4 *)((longlong)puVar17 + 0xe4) = local_58._4_4_;
    *(undefined4 *)(puVar17 + 0x1d) = uStack_50;
    *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_4c;
    puVar17[0x1a] = local_68;
    puVar17[0x1b] = uStack_60;
    if (local_88 != (code *)0x0) {
      local_88 = (code *)0x0;
    }
    puVar17[0x1e] = local_e8;
    puVar17[0x1f] = plStack_e0;
    local_e8 = 0;
    plStack_e0 = (longlong *)0x0;
    *(undefined1 *)(puVar17 + 0x20) = 0;
    *(undefined4 *)(puVar17 + 0x21) = 1;
    if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
    }
    puVar17[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar17[9] = puVar17;
    puVar17[10] = puVar17;
    lVar5 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar5 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(lVar5 + 0x30);
    }
    puVar17[0xf] = uVar10;
    puVar17[0x10] = 0xe80000527800b400;
    *(undefined4 *)((longlong)puVar17 + 0x1c) = 3;
    if (puVar17 == (undefined8 *)0x0) {
      local_c9 = 1;
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
      UNLOCK();
      local_c9 = 1;
      FUN_1447439e4(puVar17);
      LOCK();
      piVar1 = (int *)(puVar17 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar17)(puVar17,1);
      }
    }
    plVar2 = plStack_e0;
    local_f8 = uVar14;
    local_f0 = plVar12;
    if (plStack_e0 != (longlong *)0x0) {
      LOCK();
      plVar12 = plStack_e0 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plStack_e0)(plStack_e0);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (local_88 != (code *)0x0) {
      pppuVar15 = &local_68;
      if (local_78 != (undefined ***)0x0) {
        pppuVar15 = local_78;
      }
      (*(code *)(*pppuVar15)[2])(pppuVar15);
    }
    if (local_c8[0] != 0) {
      plVar12 = local_b8;
      if (local_b8 == (longlong *)0x0) {
        plVar12 = local_a8;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    FUN_14614a64a(param_1 + 0x18,&local_f8);
    plVar12 = local_f0;
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_f0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    if (!bVar18) {
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446b1d72 FUN_1446b1d72 body=182 status=ok
// SIG undefined FUN_1446b1d72(void)

void FUN_1446b1d72(longlong param_1)

{
  longlong *plVar1;
  
  FUN_1498f51ce();
  plVar1 = *(longlong **)(param_1 + 0x48);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  plVar1 = *(longlong **)(param_1 + 0x78);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  plVar1 = *(longlong **)(param_1 + 0x38);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x38))();
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x38))();
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  FUN_1489bee20(param_1 + 0x18);
  return;
}



// FUNCTION 1446b1e28 FUN_1446b1e28 body=1804 status=ok
// SIG undefined FUN_1446b1e28(void)

ulonglong FUN_1446b1e28(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined1 auStack_168 [32];
  int local_148;
  uint local_144;
  undefined8 *local_140;
  ulonglong local_138;
  ulonglong local_130;
  undefined8 local_128;
  longlong *local_120;
  longlong local_118;
  ulonglong local_110;
  longlong *local_108;
  longlong *local_100;
  undefined8 local_f8;
  longlong lStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong local_b0 [2];
  uint local_a0 [4];
  uint *local_90;
  uint local_88;
  longlong local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((*(longlong *)(param_1 + 0x38) == 0) ||
     (lVar9 = (**(code **)(*(longlong *)*param_2 + 0x30))(), 0x400 < *(int *)(lVar9 + 8))) {
    uVar23 = 0;
  }
  else {
    lVar9 = *(longlong *)(param_1 + 0x38);
    uVar22 = 0;
    uVar23 = 0;
    if (*(char *)(lVar9 + 0x1c9) == '\0') {
      FUN_1498f26b8(lVar9,local_b0,param_3);
      uVar19 = 1;
      iVar20 = 0;
      uVar7 = 0;
      if (local_88 != 0) {
        puVar12 = local_90;
        if (local_90 == (uint *)0x0) {
          puVar12 = local_a0;
        }
        uVar7 = *puVar12;
        if (uVar7 == 0) {
          iVar20 = local_88 + 0x1e;
          if (-1 < (int)(local_88 - 1)) {
            iVar20 = local_88 - 1;
          }
          uVar22 = 0;
          uVar23 = (ulonglong)(uint)(iVar20 >> 5);
          if (iVar20 >> 5 < 1) {
            uVar23 = uVar22;
          }
          iVar20 = 0;
          do {
            if (uVar23 == uVar22) {
              uVar23 = 1;
              goto LAB_1446b24f6;
            }
            iVar20 = iVar20 + 0x20;
            uVar7 = puVar12[uVar22 + 1];
            uVar22 = uVar22 + 1;
          } while (uVar7 == 0);
        }
        else {
          uVar22 = 0;
        }
        uVar19 = (ulonglong)(-uVar7 & uVar7);
        uVar23 = uVar19 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        uVar7 = (iVar20 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if ((int)local_88 <= (int)uVar7) {
          uVar7 = local_88;
        }
      }
      uVar23 = 1;
      if (uVar7 != local_88) {
        lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar3 = (undefined8 *)(lVar18 + 0x308);
        local_140 = (undefined8 *)(lVar18 + 0x310);
        local_120 = (longlong *)(lVar18 + 0x2b8);
        local_128 = 0xc80000527800b400;
        uVar16 = 0xffffffff;
        local_138 = (ulonglong)local_88;
        local_118 = lVar9;
LAB_1446b1ff7:
        lVar6 = local_b0[0];
        lVar9 = local_b0[0] + (longlong)(int)uVar7 * 0x20;
        local_148 = iVar20;
        local_144 = uVar16;
        local_130 = uVar19;
        local_110 = uVar22;
        uVar8 = (**(code **)(*(longlong *)*param_2 + 0x40))();
        plVar10 = (longlong *)FUN_14001cc68(0xd8,0x10);
        lVar18 = local_118;
        plVar10[1] = (longlong)&DAT_100000001;
        *plVar10 = (longlong)&PTR_FUN_14befd010;
        plVar1 = plVar10 + 2;
        FUN_1498f851e(plVar1,*(undefined1 *)(local_118 + 0x248),
                      *(undefined1 *)(lVar6 + (longlong)(int)uVar7 * 0x20),uVar8);
        puVar12 = (uint *)*puVar3;
        if (puVar12 != (uint *)0x0) goto LAB_1446b20e5;
        do {
          uVar7 = *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318);
          if ((uVar7 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar7 | 1;
            __tlregdtor(&LAB_1446b26e4);
          }
          puVar11 = (undefined4 *)*local_140;
          *local_140 = 0;
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar11 = 0xffffffff;
          *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar3 = puVar11;
          FUN_140217a48(puVar3);
          puVar12 = (uint *)*puVar3;
LAB_1446b20e5:
          uVar23 = *(longlong *)(puVar12 + 0x10) + 7;
          uVar7 = puVar12[0x12];
          while( true ) {
            puVar17 = (undefined8 *)(uVar23 & 0xfffffffffffffff8);
            if (puVar17 + 0x1b <= puVar12 + 0x4000) {
              *(undefined8 **)(puVar12 + 0x10) = puVar17 + 0x1b;
              puVar12[0x12] = uVar7 + 1;
              FUN_1447247dc(puVar17,0);
              *puVar17 = &PTR_FUN_14befd290;
              local_f8 = *(undefined8 *)(lVar18 + 0x1d8);
              lStack_f0 = *(longlong *)(lVar18 + 0x1e0);
              if (lStack_f0 != 0) {
                LOCK();
                *(int *)(lStack_f0 + 8) = *(int *)(lStack_f0 + 8) + 1;
                UNLOCK();
              }
              if (plVar10 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
                UNLOCK();
              }
              local_d0 = *param_2;
              local_c8 = param_2[1];
              if (local_c8 != 0) {
                LOCK();
                *(int *)(local_c8 + 8) = *(int *)(local_c8 + 8) + 1;
                UNLOCK();
              }
              local_c0 = plVar1;
              local_b8 = plVar10;
              FUN_1498f83ca(puVar17 + 0x15,&local_d0,&local_c0,&local_f8);
              if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
                (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
              }
              puVar17[0xe] = LowLevelTasks::
                             TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                             TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                             ::vftable;
              puVar17[9] = puVar17;
              puVar17[10] = puVar17;
              if (*local_120 == 0) {
                uVar13 = 0;
              }
              else {
                uVar13 = *(undefined8 *)(*local_120 + 0x30);
              }
              puVar17[0xf] = uVar13;
              puVar17[0x10] = local_128;
              *(undefined4 *)((longlong)puVar17 + 0x1c) = 0;
              if (puVar17 == (undefined8 *)0x0) {
                local_f8 = CONCAT71(local_f8._1_7_,1);
                FUN_1447439e4(0,&local_f8);
              }
              else {
                LOCK();
                *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
                UNLOCK();
                local_f8 = CONCAT71(local_f8._1_7_,1);
                FUN_1447439e4(puVar17,&local_f8);
                LOCK();
                piVar2 = (int *)(puVar17 + 1);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)*puVar17)(puVar17,1);
                }
              }
              uVar8 = (**(code **)(*(longlong *)*param_2 + 0x40))();
              if (plVar10 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
                UNLOCK();
              }
              lVar9 = lVar9 + 8;
              local_108 = plVar1;
              local_100 = plVar10;
              FUN_1498f29c4(&local_f8,&local_108,lVar9,uVar8);
              puVar17 = (undefined8 *)FUN_14001cc68(0x30,0x10);
              *puVar17 = 0;
              puVar17[1] = local_f8;
              puVar17[2] = lStack_f0;
              local_f8 = 0;
              lStack_f0 = 0;
              puVar17[3] = local_e8;
              local_e8 = 0;
              *(undefined4 *)(puVar17 + 4) = (undefined4)local_e0;
              *(undefined4 *)((longlong)puVar17 + 0x24) = local_e0._4_4_;
              local_e0 = 0;
              *(undefined4 *)(puVar17 + 5) = local_d8;
              uVar23 = CONCAT71((int7)((ulonglong)lVar9 >> 8),puVar17 != (undefined8 *)0x0);
              if (puVar17 != (undefined8 *)0x0) {
                LOCK();
                puVar5 = *(undefined8 **)(lVar18 + 0x20);
                *(undefined8 **)(lVar18 + 0x20) = puVar17;
                UNLOCK();
                LOCK();
                *puVar5 = puVar17;
                UNLOCK();
              }
              FUN_1498f2a72(&local_f8);
              if (plVar10 != (longlong *)0x0) {
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
              if (puVar17 == (undefined8 *)0x0) {
                uVar23 = 0;
                goto LAB_1446b24f6;
              }
              uVar16 = local_144 & ~(uint)local_130;
              puVar12 = local_90;
              if (local_90 == (uint *)0x0) {
                puVar12 = local_a0;
              }
              iVar21 = (int)local_110;
              lVar9 = (longlong)iVar21;
              uVar7 = puVar12[lVar9] & uVar16;
              uVar22 = local_110;
              iVar20 = local_148;
              if (uVar7 != 0) goto LAB_1446b245f;
              iVar14 = local_88 + 0x1e;
              if (-1 < (int)(local_88 - 1)) {
                iVar14 = local_88 - 1;
              }
              iVar14 = iVar14 >> 5;
              iVar20 = local_148 + 0x20;
              iVar15 = iVar14;
              if (iVar14 < iVar21) {
                iVar15 = iVar21;
              }
              if (iVar14 <= iVar21) goto LAB_1446b24d5;
              lVar18 = 0;
              goto LAB_1446b2436;
            }
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
            LOCK();
            uVar16 = *puVar12;
            *puVar12 = *puVar12 + uVar7 + 1;
            UNLOCK();
            if ((uVar16 ^ uVar7) != 0xffffffff) break;
            puVar12 = (uint *)*puVar3;
            *puVar12 = 0xffffffff;
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
            puVar12[0x12] = 0;
            *puVar3 = puVar12;
            uVar23 = (longlong)puVar12 + 0x5f;
            uVar7 = 0;
          }
        } while( true );
      }
LAB_1446b24f6:
      local_68 = 0;
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      FUN_1498f900e(local_b0);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return uVar23 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1446b2436:
  uVar7 = puVar12[lVar18 + lVar9 + 1];
  if (uVar7 == 0) goto code_r0x0001446b243e;
  uVar16 = 0xffffffff;
  uVar22 = (ulonglong)(iVar21 + (int)lVar18 + 1);
LAB_1446b245f:
  uVar19 = (ulonglong)(-uVar7 & uVar7);
  uVar4 = uVar19 * 2 + 1;
  lVar9 = 0x3f;
  if (uVar4 != 0) {
    for (; uVar4 >> lVar9 == 0; lVar9 = lVar9 + -1) {
    }
  }
  uVar7 = (iVar20 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
  if ((int)local_88 <= (int)uVar7) {
    uVar7 = local_88;
  }
  goto LAB_1446b248b;
code_r0x0001446b243e:
  iVar20 = iVar20 + 0x20;
  lVar18 = lVar18 + 1;
  if (iVar15 - lVar9 == lVar18) goto code_r0x0001446b244a;
  goto LAB_1446b2436;
code_r0x0001446b244a:
  uVar16 = 0xffffffff;
  iVar21 = iVar15;
LAB_1446b24d5:
  uVar22 = (ulonglong)(iVar21 + 1);
  uVar19 = local_130;
  uVar7 = local_88;
LAB_1446b248b:
  if (uVar7 == (uint)local_138) goto LAB_1446b24f6;
  goto LAB_1446b1ff7;
}



// FUNCTION 1446b2536 FUN_1446b2536 body=416 status=ok
// SIG undefined FUN_1446b2536(void)

void FUN_1446b2536(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  uint *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  bool bVar12;
  
  plVar4 = (longlong *)param_1[2];
  lVar7 = (**(code **)(*plVar4 + 0x18))(plVar4);
  if (lVar7 == 0) {
LAB_1446b25b0:
    *(undefined4 *)(param_1[4] + 0xb8) = 2;
    goto LAB_1446b2682;
  }
  puVar8 = (uint *)(**(code **)(*plVar4 + 0x20))(plVar4);
  if ((((puVar8[1] == 0) || (uVar3 = *puVar8, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3)) ||
     ((lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar7 == 0 ||
      (*(uint *)(lVar7 + 0x10) != puVar8[1])))) goto LAB_1446b25b0;
  lVar7 = param_1[4];
  if (7 < *(byte *)(lVar7 + 0xc1) - 10) goto LAB_1446b25a1;
  plVar4 = param_1 + 2;
  switch((uint)*(byte *)(lVar7 + 0xc1)) {
  case 10:
    FUN_1498f5644();
    goto LAB_1446b263e;
  case 0xb:
    FUN_1498f5973(lVar7,plVar4,(longlong)L"-UDPMESSAGING_WORK_QUEUE_SIZE=" + 1,0);
LAB_1446b263e:
    lVar10 = 0x3fffc00;
    goto LAB_1446b2661;
  case 0xc:
    lVar9 = (longlong)L"-UDPMESSAGING_WORK_QUEUE_SIZE=" + 1;
    uVar11 = 1;
    break;
  case 0xd:
    lVar9 = (longlong)L"-UDPMESSAGING_WORK_QUEUE_SIZE=" + 1;
    goto LAB_1446b2624;
  case 0xe:
    lVar9 = CONCAT71(0x14befe5,*(undefined1 *)(lVar7 + 0xc0));
LAB_1446b2624:
    uVar11 = 0xb;
    break;
  case 0xf:
    lVar9 = CONCAT71(0x14befe5,*(undefined1 *)(lVar7 + 0xc0));
    uVar11 = 3;
    break;
  default:
    lVar10 = 0x1fffffffc00;
    FUN_1498f5d17(lVar7,plVar4,CONCAT71(0x14befe5,*(undefined1 *)(lVar7 + 0xc0)));
    goto LAB_1446b2661;
  }
  lVar10 = 0x1fffffffc00;
  FUN_1498f5973(lVar7,plVar4,lVar9,uVar11);
LAB_1446b2661:
  lVar9 = (**(code **)(*(longlong *)param_1[4] + 0x30))();
  lVar7 = param_1[4];
  if (lVar10 < lVar9) {
LAB_1446b25a1:
    *(undefined4 *)(lVar7 + 0xb8) = 2;
  }
  else {
    *(undefined4 *)(lVar7 + 0xb8) = 0;
  }
LAB_1446b2682:
  plVar4 = (longlong *)param_1[1];
  if (plVar4 != (longlong *)0x0) {
    iVar6 = (int)plVar4[1];
    do {
      if (iVar6 == 0) {
        return;
      }
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar12 = iVar6 == iVar5;
      if (bVar12) {
        *(int *)(plVar4 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar12);
    if ((longlong *)*param_1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_1 + 0x10))();
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
                    /* WARNING: Could not recover jumptable at 0x0001446b26ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1446b270c FUN_1446b270c body=282 status=ok
// SIG undefined FUN_1446b270c(void)

undefined8 * FUN_1446b270c(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_1446b26e4);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 1446b2826 FUN_1446b2826 body=426 status=ok
// SIG undefined FUN_1446b2826(void)

longlong *
FUN_1446b2826(longlong param_1,longlong *param_2,uint param_3,longlong *param_4,undefined8 *param_5)

{
  longlong lVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac)) {
    lVar5 = param_1 + 0xb0;
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      lVar5 = *(longlong *)(param_1 + 0xb8);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0xc0) - 1U & param_3) * 4);
    if (iVar6 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x78);
      do {
        lVar1 = lVar5 + (longlong)iVar6 * 0x20;
        if (*(uint *)(lVar5 + (longlong)iVar6 * 0x20) == param_3) {
          if (lVar1 != 0) {
            lVar5 = *(longlong *)(lVar1 + 8);
            *param_2 = lVar5;
            lVar1 = *(longlong *)(lVar1 + 0x10);
            param_2[1] = lVar1;
            if (lVar1 != 0) {
              LOCK();
              *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
              UNLOCK();
              lVar5 = *param_2;
            }
            if (lVar5 == 0) {
              return param_2;
            }
            if (((*(byte *)(*(longlong *)(lVar5 + 0x60) + 0xbc) & 1) != 0) &&
               (lVar1 = param_4[1], (longlong)(int)lVar1 != 0)) {
              lVar4 = *param_4;
              lVar8 = 0;
              do {
                uVar3 = *(uint *)(lVar4 + lVar8);
                if (uVar3 < *(uint *)(lVar5 + 0x40)) {
                  lVar9 = *(longlong *)(lVar5 + 0x38);
                  if (*(longlong *)(lVar5 + 0x38) == 0) {
                    lVar9 = lVar5 + 0x28;
                  }
                  uVar7 = uVar3 + 0x1f;
                  if (-1 < (int)uVar3) {
                    uVar7 = uVar3;
                  }
                  if ((*(uint *)(lVar9 + (longlong)((int)uVar7 >> 5) * 4) >> (uVar3 & 0x1f) & 1) ==
                      0) {
                    *(int *)(lVar5 + 0x4c) = *(int *)(lVar5 + 0x4c) + 1;
                    puVar2 = (uint *)(lVar9 + (longlong)((int)uVar7 >> 5) * 4);
                    *puVar2 = *puVar2 | 1 << ((byte)uVar3 & 0x1f);
                  }
                }
                if (uVar3 < *(uint *)(lVar5 + 0x20)) {
                  lVar9 = *(longlong *)(lVar5 + 0x18);
                  if (*(longlong *)(lVar5 + 0x18) == 0) {
                    lVar9 = lVar5 + 8;
                  }
                  uVar7 = uVar3 + 0x1f;
                  if (-1 < (int)uVar3) {
                    uVar7 = uVar3;
                  }
                  if ((*(uint *)(lVar9 + (longlong)((int)uVar7 >> 5) * 4) >> (uVar3 & 0x1f) & 1) !=
                      0) {
                    *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + -1;
                    puVar2 = (uint *)(lVar9 + (longlong)((int)uVar7 >> 5) * 4);
                    *puVar2 = *puVar2 & ~(1 << ((byte)uVar3 & 0x1f));
                  }
                }
                lVar8 = lVar8 + 4;
              } while ((longlong)(int)lVar1 * 4 != lVar8);
            }
            *(undefined8 *)(lVar5 + 0x58) = *param_5;
            if (*(int *)(lVar5 + 0x48) != 0) {
              return param_2;
            }
            if (*(int *)(lVar5 + 0x4c) != *(int *)(lVar5 + 0x40)) {
              return param_2;
            }
            FUN_1498fae48((longlong *)(param_1 + 0x78),param_3);
            return param_2;
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x18);
      } while (iVar6 != -1);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1446b29d0 FUN_1446b29d0 body=28 status=ok
// SIG undefined FUN_1446b29d0(void)

undefined8 FUN_1446b29d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1400021e4(param_3,param_1);
  return param_1;
}



// FUNCTION 1446b29ec FUN_1446b29ec body=28 status=ok
// SIG undefined FUN_1446b29ec(void)

undefined8 FUN_1446b29ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140ba791a(param_3,param_1);
  return param_1;
}



// FUNCTION 1446b2a08 FUN_1446b2a08 body=592 status=ok
// SIG undefined FUN_1446b2a08(void)

void FUN_1446b2a08(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined4 local_90;
  undefined1 local_84 [4];
  undefined2 local_80;
  int local_7c;
  longlong *local_78;
  longlong *local_70;
  uint local_64;
  longlong *local_60;
  longlong *local_58;
  undefined2 local_4c [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x78))
                    (*(longlong **)(param_1 + 0x10),0,*param_2);
  if (cVar4 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x90))(*(longlong **)(param_1 + 0x18),&local_60);
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x38))
                      (*(longlong **)(param_1 + 0x10),&local_64);
    if (cVar4 != '\0') {
      do {
        local_84[0] = 1;
        plVar5 = (longlong *)FUN_14001cc68(0xb8,0x10);
        FUN_1498fa4c0(plVar5,local_84);
        local_78 = plVar5 + 2;
        local_70 = plVar5;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
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
        uVar3 = *(uint *)(param_1 + 0x48);
        if (local_64 < *(uint *)(param_1 + 0x48)) {
          uVar3 = local_64;
        }
        FUN_140393c76(local_78 + 0x13,uVar3,1);
        local_7c = 0;
        local_90 = 0;
        local_98 = local_60;
        cVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x60))
                          (*(longlong **)(param_1 + 0x10),local_78[0x13],(int)local_78[0x14],
                           &local_7c);
        plVar1 = local_58;
        plVar5 = local_60;
        if (cVar4 != '\0') {
          if ((int)local_78[0x14] != local_7c) {
            *(int *)(local_78 + 0x14) = local_7c;
          }
          if (local_58 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_58 + 1) = (int)local_58[1] + 1;
            UNLOCK();
          }
          (**(code **)(*local_60 + 0x20))(local_60,local_84);
          (**(code **)(*plVar5 + 0x40))(plVar5,local_4c);
          local_80 = local_4c[0];
          if ((*(int *)(param_1 + 0x58) != 0) &&
             (plVar5 = *(longlong **)(param_1 + 0x50), plVar5 != (longlong *)0x0)) {
            (**(code **)(*plVar5 + 0x60))(plVar5,&local_78,local_84);
          }
          if (plVar1 != (longlong *)0x0) {
            LOCK();
            plVar5 = plVar1 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
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
        }
        plVar5 = local_70;
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_70 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_70)(local_70);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        cVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x38))
                          (*(longlong **)(param_1 + 0x10),&local_64);
      } while (cVar4 != '\0');
    }
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_58 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446b2c5a FUN_1446b2c5a body=9 status=ok
// SIG undefined FUN_1446b2c5a(void)

void FUN_1446b2c5a(longlong param_1)

{
  FUN_14018802a(*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 1446b2c64 FUN_1446b2c64 body=29 status=ok
// SIG undefined FUN_1446b2c64(void)

undefined8 FUN_1446b2c64(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446b2c82 FUN_1446b2c82 body=756 status=ok
// SIG undefined FUN_1446b2c82(void)

void FUN_1446b2c82(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 local_88;
  longlong *plStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 *local_60;
  int local_58;
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((DAT_14c963ff1 != '\x01') || (puVar4 = (undefined8 *)param_1[1], puVar4 == (undefined8 *)0x0))
  goto LAB_1446b2d0c;
  iVar8 = *(int *)(puVar4 + 1);
  do {
    if (iVar8 == 0) goto LAB_1446b2d0c;
    LOCK();
    iVar2 = *(int *)(puVar4 + 1);
    bVar13 = iVar8 == iVar2;
    if (bVar13) {
      *(int *)(puVar4 + 1) = iVar8 + 1;
      iVar2 = iVar8;
    }
    iVar8 = iVar2;
    UNLOCK();
  } while (!bVar13);
  lVar5 = *param_1;
  if (lVar5 != 0) {
    plVar9 = (longlong *)FUN_145b17d02();
    lVar10 = plVar9[0x22];
    if (lVar10 == 0) {
      (**(code **)(*plVar9 + 1000))(plVar9);
      lVar10 = plVar9[0x22];
    }
    if (*(char *)(lVar10 + 0x2a) == '\x01') {
      uVar3 = *(undefined4 *)(lVar10 + 0x30);
      FUN_1498f51ce(lVar5);
      plVar9 = *(longlong **)(lVar5 + 0x10);
      if (plVar9 == (longlong *)0x0) {
LAB_1446b2dcb:
        uVar11 = FUN_1401cb356();
        local_88 = 0;
        plStack_80 = (longlong *)0x0;
        bVar13 = true;
      }
      else {
        iVar8 = (int)plVar9[1];
        do {
          if (iVar8 == 0) goto LAB_1446b2dcb;
          LOCK();
          iVar2 = (int)plVar9[1];
          bVar13 = iVar8 == iVar2;
          if (bVar13) {
            *(int *)(plVar9 + 1) = iVar8 + 1;
            iVar2 = iVar8;
          }
          iVar8 = iVar2;
          UNLOCK();
        } while (!bVar13);
        uVar6 = *(undefined8 *)(lVar5 + 8);
        LOCK();
        *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
        UNLOCK();
        LOCK();
        plVar7 = plVar9 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
        uVar11 = FUN_1401cb356();
        LOCK();
        *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
        UNLOCK();
        bVar13 = false;
        local_88 = uVar6;
        plStack_80 = plVar9;
      }
      plVar9 = plStack_80;
      FUN_140212f8e(&local_78);
      uStack_70 = 10000000;
      local_68 = 1;
      local_60 = (undefined8 *)0x0;
      local_58 = 0;
      uStack_64 = uVar3;
      FUN_1446efa72(&local_60,0,4,0x10);
      local_58 = 4;
      *local_60 = &PTR_LAB_149e02020;
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 1;
      lVar10 = DAT_14c758608 + 1;
      if (lVar12 == 0) {
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 2;
        lVar10 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar10;
      local_60[2] = lVar12;
      *local_60 = &PTR_FUN_14befdad0;
      local_60[3] = local_88;
      local_60[4] = plStack_80;
      local_88 = 0;
      plStack_80 = (longlong *)0x0;
      local_60[7] = CONCAT44(uStack_64,local_68);
      *(undefined4 *)(local_60 + 5) = local_78;
      *(undefined4 *)((longlong)local_60 + 0x2c) = uStack_74;
      *(undefined4 *)(local_60 + 6) = (undefined4)uStack_70;
      *(undefined4 *)((longlong)local_60 + 0x34) = uStack_70._4_4_;
      local_98 = 0x3f800000;
      FUN_1405f67fc(uVar11,&local_50,&local_60,L"FUdpMessageTransport_StartAutoRepairRoutine");
      *(undefined8 *)(lVar5 + 0x28) = local_50;
      local_50 = 0;
      plVar7 = *(longlong **)(lVar5 + 0x30);
      *(longlong **)(lVar5 + 0x30) = local_48;
      local_48 = (longlong *)0x0;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
        if (local_48 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_48 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_48 + 0x10))();
          }
        }
      }
      if (local_58 == 0) {
LAB_1446b2f36:
        if (local_60 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_60 != (undefined8 *)0x0) {
        (**(code **)*local_60)(local_60,0);
        FUN_1446efa72(&local_60,0,0,0x10);
        local_58 = 0;
        goto LAB_1446b2f36;
      }
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plStack_80 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plStack_80 + 0x10))();
        }
      }
      if (!bVar13) {
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  LOCK();
  piVar1 = (int *)(puVar4 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)*puVar4)(puVar4);
    LOCK();
    piVar1 = (int *)((longlong)puVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
    }
  }
LAB_1446b2d0c:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1446b2f9c FUN_1446b2f9c body=12 status=ok
// SIG undefined FUN_1446b2f9c(void)

void FUN_1446b2f9c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001446b2fa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1446b2fa8 FUN_1446b2fa8 body=64 status=ok
// SIG undefined FUN_1446b2fa8(void)

undefined8 * FUN_1446b2fa8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14befdab0;
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446b2fe8 FUN_1446b2fe8 body=64 status=ok
// SIG undefined FUN_1446b2fe8(void)

undefined8 * FUN_1446b2fe8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14befdad0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446b303c FUN_1446b303c body=126 status=ok
// SIG undefined FUN_1446b303c(void)

void FUN_1446b303c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14befdad0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1446b30ba FUN_1446b30ba body=126 status=ok
// SIG undefined FUN_1446b30ba(void)

void FUN_1446b30ba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14befdad0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1446b3138 FUN_1446b3138 body=164 status=ok
// SIG undefined FUN_1446b3138(void)

void FUN_1446b3138(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14befdad0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  p_Var1[1].CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001446b31cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1446b31e6 FUN_1446b31e6 body=20 status=ok
// SIG undefined FUN_1446b31e6(void)

undefined1 FUN_1446b31e6(longlong param_1)

{
  FUN_1446b31fa(param_1 + 0x18);
  return 1;
}



// FUNCTION 1446b31fa FUN_1446b31fa body=229 status=ok
// SIG undefined FUN_1446b31fa(void)

ulonglong FUN_1446b31fa(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 unaff_RBX;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140212f8e(&local_30);
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (local_30 < (longlong)((double)param_1[3] * (double)*(uint *)(param_1 + 4)) + param_1[2])
  goto LAB_1446b3295;
  plVar2 = (longlong *)param_1[1];
  if (plVar2 == (longlong *)0x0) {
LAB_1446b3287:
    uVar8 = 0;
  }
  else {
    iVar7 = (int)plVar2[1];
    do {
      if (iVar7 == 0) goto LAB_1446b3287;
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar9 = iVar7 == iVar5;
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar9);
    plVar3 = (longlong *)*param_1;
    if (plVar3 == (longlong *)0x0) {
LAB_1446b3283:
      uVar8 = 0;
    }
    else {
      lVar4 = plVar3[0xd];
      (**(code **)(*plVar3 + 0x10))(plVar3);
      cVar6 = (**(code **)(*plVar3 + 8))(plVar3,lVar4);
      if (cVar6 != '\0') goto LAB_1446b3283;
      uVar8 = CONCAT71((int7)((ulonglong)plVar3 >> 8),
                       *(uint *)(param_1 + 4) <= *(uint *)((longlong)param_1 + 0x24));
    }
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
  *(int *)(param_1 + 4) = (int)param_1[4] + 1;
  param_1[2] = local_30;
LAB_1446b3295:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 1446b32e4 FUN_1446b32e4 body=587 status=ok
// SIG undefined FUN_1446b32e4(void)

void FUN_1446b32e4(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  undefined1 auStack_68 [40];
  int local_40;
  ushort uStack_3c;
  undefined2 uStack_3a;
  undefined1 local_38 [7];
  char local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 != (longlong *)0x0) {
    iVar8 = (int)plVar3[1];
    do {
      if (iVar8 == 0) goto LAB_1446b3344;
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar16 = iVar8 == iVar6;
      if (bVar16) {
        *(int *)(plVar3 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar16);
    lVar4 = *(longlong *)(param_1 + 0x20);
    if (lVar4 != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
      cVar7 = FUN_146b137c6(param_2,&local_40);
      if ((cVar7 != '\0') || (cVar7 = FUN_146b13880(param_2,&local_40), cVar7 != '\0')) {
        if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
          uVar10 = (uint)(uStack_3c >> 0xd) ^ local_40 - (uint)uStack_3c;
          uVar12 = uVar10 << 8 ^ (-0x61c88647 - uVar10) - (uint)uStack_3c;
          uVar14 = uVar12 >> 0xd ^ (uStack_3c - uVar10) - uVar12;
          uVar15 = uVar14 >> 0xc ^ (uVar10 - uVar12) - uVar14;
          uVar10 = uVar15 << 0x10 ^ (uVar12 - uVar14) - uVar15;
          uVar12 = uVar10 >> 5 ^ (uVar14 - uVar15) - uVar10;
          uVar14 = uVar12 >> 3 ^ (uVar15 - uVar10) - uVar12;
          uVar10 = uVar14 << 10 ^ (uVar10 - uVar12) - uVar14;
          lVar11 = param_1 + 0x90;
          if (*(longlong *)(param_1 + 0x98) != 0) {
            lVar11 = *(longlong *)(param_1 + 0x98);
          }
          iVar8 = *(int *)(lVar11 + (ulonglong)
                                    (*(int *)(param_1 + 0xa0) - 1U &
                                    (uVar10 >> 0xf ^ uVar12 - (uVar14 + uVar10))) * 4);
          if (iVar8 != -1) {
            lVar11 = *(longlong *)(param_1 + 0x58);
            do {
              lVar13 = (longlong)iVar8 * 0x10;
              if ((*(int *)(lVar11 + lVar13) == local_40) &&
                 (*(ushort *)(lVar11 + 4 + lVar13) == uStack_3c)) goto LAB_1446b3522;
              iVar8 = *(int *)(lVar13 + lVar11 + 8);
            } while (iVar8 != -1);
          }
        }
        FUN_1498fff88((longlong *)(param_1 + 0x58),local_38,&local_40,0);
        local_31 = '\0';
        FUN_1498fff88(lVar4 + 0x88,local_38,&local_40);
        if (((*(longlong *)(lVar4 + 0x38) != 0) && (local_31 == '\0')) &&
           (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x38) + 0x30), lVar4 != 0)) {
          puVar9 = (undefined8 *)FUN_14001cc68(0x18,0x10);
          *puVar9 = 0;
          puVar9[1] = CONCAT26(uStack_3a,CONCAT24(uStack_3c,local_40));
          *(undefined1 *)(puVar9 + 2) = 1;
          if (puVar9 != (undefined8 *)0x0) {
            puVar5 = *(undefined8 **)(lVar4 + 0x40);
            *(undefined8 **)(lVar4 + 0x40) = puVar9;
            *puVar5 = puVar9;
          }
        }
      }
LAB_1446b3522:
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
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
LAB_1446b3344:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1446b3530 FUN_1446b3530 body=569 status=ok
// SIG undefined FUN_1446b3530(void)

void FUN_1446b3530(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  undefined1 auStack_58 [32];
  int local_38;
  ushort uStack_34;
  undefined2 uStack_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 != (longlong *)0x0) {
    iVar8 = (int)plVar3[1];
    do {
      if (iVar8 == 0) goto LAB_1446b3590;
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar16 = iVar8 == iVar6;
      if (bVar16) {
        *(int *)(plVar3 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar16);
    lVar4 = *(longlong *)(param_1 + 0x20);
    if (lVar4 != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
      cVar7 = FUN_146b137c6(param_2,&local_38);
      if (((cVar7 != '\0') || (cVar7 = FUN_146b13880(param_2,&local_38), cVar7 != '\0')) &&
         (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c))) {
        uVar10 = (uint)(uStack_34 >> 0xd) ^ local_38 - (uint)uStack_34;
        uVar12 = uVar10 << 8 ^ (-0x61c88647 - uVar10) - (uint)uStack_34;
        uVar14 = uVar12 >> 0xd ^ (uStack_34 - uVar10) - uVar12;
        uVar15 = uVar14 >> 0xc ^ (uVar10 - uVar12) - uVar14;
        uVar10 = uVar15 << 0x10 ^ (uVar12 - uVar14) - uVar15;
        uVar12 = uVar10 >> 5 ^ (uVar14 - uVar15) - uVar10;
        uVar14 = uVar12 >> 3 ^ (uVar15 - uVar10) - uVar12;
        uVar10 = uVar14 << 10 ^ (uVar10 - uVar12) - uVar14;
        lVar11 = param_1 + 0x90;
        if (*(longlong *)(param_1 + 0x98) != 0) {
          lVar11 = *(longlong *)(param_1 + 0x98);
        }
        iVar8 = *(int *)(lVar11 + (ulonglong)
                                  (*(int *)(param_1 + 0xa0) - 1U &
                                  (uVar10 >> 0xf ^ uVar12 - (uVar14 + uVar10))) * 4);
        if (iVar8 != -1) {
          lVar11 = *(longlong *)(param_1 + 0x58);
          do {
            lVar13 = (longlong)iVar8 * 0x10;
            if ((*(int *)(lVar11 + lVar13) == local_38) &&
               (*(ushort *)(lVar11 + 4 + lVar13) == uStack_34)) {
              FUN_1498f4f38((longlong *)(param_1 + 0x58),&local_38);
              iVar8 = FUN_1498f4f38(lVar4 + 0x88,&local_38);
              if ((iVar8 != 0 && *(longlong *)(lVar4 + 0x38) != 0) &&
                 (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x38) + 0x30), lVar4 != 0)) {
                puVar9 = (undefined8 *)FUN_14001cc68(0x18,0x10);
                *puVar9 = 0;
                puVar9[1] = CONCAT26(uStack_32,CONCAT24(uStack_34,local_38));
                *(undefined1 *)(puVar9 + 2) = 0;
                if (puVar9 != (undefined8 *)0x0) {
                  puVar5 = *(undefined8 **)(lVar4 + 0x40);
                  *(undefined8 **)(lVar4 + 0x40) = puVar9;
                  *puVar5 = puVar9;
                }
              }
              break;
            }
            iVar8 = *(int *)(lVar13 + lVar11 + 8);
          } while (iVar8 != -1);
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
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
LAB_1446b3590:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1446b376a FUN_1446b376a body=965 status=ok
// SIG undefined FUN_1446b376a(void)

void FUN_1446b376a(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  ulonglong uStack_80;
  code *local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + -8);
  cVar2 = (**(code **)(*(longlong *)(param_1 + -8) + 8))(plVar1);
  if (cVar2 == '\0') goto LAB_1446b37fe;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  FUN_1446f470e(&local_90,L"Networking",1);
  lVar3 = FUN_1402c9134(&DAT_14c874628,local_90,&local_78,0);
  if (lVar3 == 0) goto LAB_1446b37fe;
  lVar3 = param_1 + -0x10;
  local_78 = FUN_145d35844;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  FUN_14990212a(&DAT_14c8673d8,&local_88,lVar3);
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  plVar4 = (longlong *)FUN_145b17d02();
  lVar5 = plVar4[0x22];
  if (lVar5 == 0) {
    (**(code **)(*plVar4 + 1000))(plVar4);
    lVar5 = plVar4[0x22];
    if (lVar5 != 0) goto LAB_1446b3897;
  }
  else {
LAB_1446b3897:
    FUN_140751e3e(&DAT_14c846b20,L"-UDPMESSAGING_TRANSPORT_ENABLE=",lVar5 + 0x29);
    FUN_140751e3e(&DAT_14c846b20,L"-UDPMESSAGING_SHARE_KNOWN_NODES=",lVar5 + 0x80);
    uVar8 = 0;
    local_98 = 0;
    FUN_14063337c(&DAT_14c846b20,L"-UDPMESSAGING_TRANSPORT_UNICAST=",lVar5 + 0x38,1);
    local_98 = 0;
    FUN_14063337c(&DAT_14c846b20,L"-UDPMESSAGING_TRANSPORT_MULTICAST=",lVar5 + 0x48,1);
    FUN_14626beb2(&DAT_14c846b20,L"-UDPMESSAGING_WORK_QUEUE_SIZE=",lVar5 + 0x34);
    local_78 = (code *)0x0;
    uStack_70 = 0;
    local_98 = 0;
    FUN_14063337c(&DAT_14c846b20,L"-UDPMESSAGING_TRANSPORT_STATIC=",&local_78,0);
    local_88 = 0;
    uStack_80 = 0;
    FUN_1403de9f2(&local_78,&local_88,&DAT_149e06196,1);
    if ((longlong)(int)uStack_80 != 0) {
      lVar7 = (longlong)(int)uStack_80 << 4;
      lVar6 = local_88;
      do {
        FUN_1412fabe8(lVar5 + 0x60,lVar6);
        lVar6 = lVar6 + 0x10;
        lVar7 = lVar7 + -0x10;
      } while (lVar7 != 0);
      uVar8 = uStack_80 & 0xffffffff;
    }
    FUN_1447a1747(local_88,uVar8);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_78 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  plVar4 = (longlong *)FUN_145b17d02();
  lVar5 = plVar4[0x22];
  if (lVar5 == 0) {
    (**(code **)(*plVar4 + 1000))(plVar4);
    lVar5 = plVar4[0x22];
  }
  if (*(char *)(lVar5 + 0x36) == '\x01') {
    local_78 = (code *)&LAB_149902218;
    uStack_70 = uStack_70 & 0xffffffff00000000;
    FUN_14990212a(&DAT_14c872bf8,&local_88,lVar3,&local_78);
    local_78 = (code *)&LAB_149902224;
    uStack_70 = uStack_70 & 0xffffffff00000000;
    FUN_14990212a(&DAT_14c867518,&local_88,lVar3,&local_78);
  }
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8338a0) {
    FUN_144b3d300(&DAT_14c8338a0);
    if (DAT_14c8338a0 == -1) {
      FUN_1456d85e6(&DAT_14c8337f0);
      atexit((_func_5014 *)&LAB_142748837);
      _Init_thread_footer(&DAT_14c8338a0);
    }
  }
  (**(code **)(DAT_14c8337f0 + 0x28))(&DAT_14c8337f0,DAT_14c99fa00,param_1);
LAB_1446b37fe:
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446b3b30 FUN_1446b3b30 body=1461 status=ok
// SIG undefined FUN_1446b3b30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446b3b30(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  void *pvVar4;
  bool bVar5;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_108 [32];
  longlong local_e8;
  undefined1 *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  undefined8 uStack_c0;
  undefined8 local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong local_68;
  int local_60;
  int local_5c;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_145d3590e();
  plVar10 = (longlong *)FUN_145b17d02();
  lVar15 = plVar10[0x22];
  if (lVar15 == 0) {
    (**(code **)(*plVar10 + 1000))(plVar10);
    lVar15 = plVar10[0x22];
  }
  plVar10 = (longlong *)(lVar15 + 0x38);
  cVar7 = FUN_146b137c6(plVar10,&local_50);
  if ((cVar7 == '\0') && (cVar7 = FUN_146b13880(plVar10,&local_50), cVar7 == '\0')) {
    local_50 = _DAT_14c99094c;
    FUN_1498ed684(&local_50,&local_c8);
    plVar13 = local_c8;
    if (*(code **)(*local_c8 + 0x50) != FUN_144828418) {
      plVar13 = (longlong *)(**(code **)(*local_c8 + 0x50))();
    }
    FUN_1447a1fc0(plVar13);
    pcVar3 = *(code **)(*local_c8 + 0x28);
    if (pcVar3 == FUN_14482841c) {
      plVar13 = local_c8 + 3;
      if (local_c8[5] != 0) {
        plVar13 = (longlong *)(local_c8[5] + 8);
      }
    }
    else if (pcVar3 == (code *)&LAB_14010c34c) {
      plVar13 = local_c8 + 2;
    }
    else {
      plVar13 = (longlong *)(*pcVar3)(local_c8);
    }
    if (plVar10 != plVar13) {
      iVar2 = (int)plVar13[1];
      pvVar4 = (void *)*plVar13;
      *(int *)(lVar15 + 0x40) = iVar2;
      if (iVar2 == 0 && *(int *)(lVar15 + 0x44) == 0) {
        *(undefined4 *)(lVar15 + 0x44) = 0;
      }
      else {
        FUN_1446dd670(plVar10,iVar2);
        if (iVar2 != 0) {
          memcpy((void *)*plVar10,pvVar4,(longlong)iVar2 * 2);
        }
      }
    }
    if (local_c8 != (longlong *)0x0) {
      (**(code **)(*local_c8 + 0x10))();
    }
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  plVar10 = (longlong *)(lVar15 + 0x48);
  cVar7 = FUN_146b137c6(plVar10,&local_58);
  if (cVar7 == '\0') {
    local_58 = 0x1a0ae6000001;
    FUN_1498ed684(&local_58,&local_c8);
    plVar13 = local_c8;
    if (*(code **)(*local_c8 + 0x50) != FUN_144828418) {
      plVar13 = (longlong *)(**(code **)(*local_c8 + 0x50))();
    }
    FUN_1447a1fc0(plVar13);
    pcVar3 = *(code **)(*local_c8 + 0x28);
    if (pcVar3 == FUN_14482841c) {
      plVar13 = local_c8 + 3;
      if (local_c8[5] != 0) {
        plVar13 = (longlong *)(local_c8[5] + 8);
      }
    }
    else if (pcVar3 == (code *)&LAB_14010c34c) {
      plVar13 = local_c8 + 2;
    }
    else {
      plVar13 = (longlong *)(*pcVar3)(local_c8);
    }
    if (plVar10 != plVar13) {
      iVar2 = (int)plVar13[1];
      pvVar4 = (void *)*plVar13;
      *(int *)(lVar15 + 0x50) = iVar2;
      if (iVar2 == 0 && *(int *)(lVar15 + 0x54) == 0) {
        *(undefined4 *)(lVar15 + 0x54) = 0;
      }
      else {
        FUN_1446dd670(plVar10,iVar2);
        if (iVar2 != 0) {
          memcpy((void *)*plVar10,pvVar4,(longlong)iVar2 * 2);
        }
      }
    }
    if (local_c8 != (longlong *)0x0) {
      (**(code **)(*local_c8 + 0x10))();
    }
    bVar5 = true;
  }
  FUN_149901d22(param_1 + 0x60,&local_68);
  local_c8 = (longlong *)0x0;
  uStack_c0 = 0;
  if ((longlong)*(int *)(lVar15 + 0x68) != 0) {
    lVar14 = *(longlong *)(lVar15 + 0x60);
    lVar17 = (longlong)*(int *)(lVar15 + 0x68) << 4;
    do {
      cVar7 = FUN_146b137c6(lVar14,&local_78);
      if ((cVar7 != '\0') || (cVar7 = FUN_146b13880(lVar14,&local_78), cVar7 != '\0')) {
        uVar6 = uStack_c0;
        lVar16 = (longlong)(int)(uint)uStack_c0;
        uVar8 = (uint)uStack_c0 + 1;
        uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar8);
        if (uStack_c0._4_4_ < uVar8) {
          FUN_1498eebce(&local_c8,uVar6 & 0xffffffff);
        }
        local_c8[lVar16] = (longlong)local_78;
      }
      iVar2 = local_60;
      lVar14 = lVar14 + 0x10;
      lVar17 = lVar17 + -0x10;
    } while (lVar17 != 0);
    lVar14 = (longlong)(int)(uint)uStack_c0;
    if (lVar14 != 0) {
      lVar17 = (longlong)local_60;
      iVar9 = local_60 + (uint)uStack_c0;
      uVar8 = local_5c - local_60;
      local_60 = iVar9;
      if (uVar8 < (uint)uStack_c0) {
        FUN_1498eebce(&local_68,iVar2);
      }
      memmove((void *)(lVar17 * 8 + local_68),local_c8,lVar14 << 3);
      uStack_c0 = uStack_c0 & 0xffffffff00000000;
    }
  }
  if (local_c8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (*(char *)(lVar15 + 0x59) == '\0') {
    *(undefined1 *)(lVar15 + 0x59) = 1;
  }
  else if (!bVar5) goto LAB_1446b3ebc;
  local_e8 = CONCAT71(local_e8._1_7_,1);
  FUN_140d6793a(lVar15,0x4000,0,DAT_14c872ce0);
LAB_1446b3ebc:
  plVar11 = (longlong *)FUN_14001cc68(0xf8,0x10);
  local_e8 = lVar15 + 0x70;
  local_e0 = (undefined1 *)(lVar15 + 0x59);
  FUN_149901e68(plVar11,&local_50,&local_58,&local_68);
  plVar10 = plVar11 + 2;
  local_78 = plVar10;
  local_70 = plVar11;
  FUN_1498f8322(&local_78,plVar10);
  *(longlong **)(param_1 + 0x28) = plVar10;
  plVar13 = *(longlong **)(param_1 + 0x30);
  if (plVar13 != plVar11) {
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
      UNLOCK();
      plVar13 = *(longlong **)(param_1 + 0x30);
    }
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x30) = plVar11;
    plVar11 = local_70;
    plVar10 = local_78;
  }
  FUN_1498eea10(&local_c8);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  local_d8 = plVar10;
  local_d0 = plVar11;
  uVar12 = FUN_1498eeaf2(&local_c8,&local_d8);
  FUN_1498eec8c(uVar12,&local_88);
  plVar10 = local_80;
  if ((undefined8 *)(param_1 + 0x18) != &local_88) {
    *(undefined8 *)(param_1 + 0x18) = local_88;
    local_88 = 0;
    plVar13 = *(longlong **)(param_1 + 0x20);
    if (local_80 != plVar13) {
      local_80 = (longlong *)0x0;
      *(longlong **)(param_1 + 0x20) = plVar10;
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar13 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
    }
  }
  plVar10 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_80 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  plVar10 = local_d0;
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_d0 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  FUN_1498eeb7a(&local_c8);
  plVar10 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_70 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1446b40e6 FUN_1446b40e6 body=1431 status=ok
// SIG undefined FUN_1446b40e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446b40e6(longlong param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined1 local_c0;
  ulonglong local_b8;
  longlong local_b0;
  longlong local_a8 [2];
  undefined1 local_98;
  undefined2 uStack_97;
  undefined1 uStack_95;
  undefined4 uStack_94;
  uint uStack_90;
  undefined4 local_8c;
  longlong local_88;
  undefined4 local_78;
  longlong local_70;
  uint local_68;
  uint local_64;
  undefined2 local_60;
  undefined4 local_5c;
  undefined1 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_145d358a6();
  plVar7 = (longlong *)FUN_145b17d02();
  lVar12 = plVar7[0x22];
  if (lVar12 == 0) {
    (**(code **)(*plVar7 + 1000))(plVar7);
    lVar12 = plVar7[0x22];
  }
  puVar2 = (undefined1 *)(lVar12 + 0x88);
  cVar6 = FUN_146b137c6(puVar2,&local_b0);
  if ((cVar6 == '\0') && (cVar6 = FUN_146b13880(puVar2,&local_b0), cVar6 == '\0')) {
    local_b0 = _DAT_14c99094c;
    FUN_146b13724(&local_b0,&local_98);
    if (puVar2 == &local_98) {
      if (CONCAT44(uStack_94,CONCAT13(uStack_95,CONCAT21(uStack_97,local_98))) != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(lVar12 + 0x88) != 0) {
        FUN_1400020a8();
      }
      *(ulonglong *)(lVar12 + 0x88) =
           CONCAT44(uStack_94,CONCAT13(uStack_95,CONCAT21(uStack_97,local_98)));
      local_98 = 0;
      uStack_97 = 0;
      uStack_95 = 0;
      uStack_94 = 0;
      *(uint *)(lVar12 + 0x90) = uStack_90;
      *(undefined4 *)(lVar12 + 0x94) = local_8c;
    }
    cVar6 = FUN_146b137c6(lVar12 + 0x98,&local_b8);
    if (cVar6 == '\0') {
LAB_1446b420f:
      local_b8 = 0x1a0ae6000001;
      FUN_146b13724(&local_b8,&local_98);
      if ((undefined1 *)(lVar12 + 0x98) == &local_98) {
        if (CONCAT44(uStack_94,CONCAT13(uStack_95,CONCAT21(uStack_97,local_98))) != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(lVar12 + 0x98) != 0) {
          FUN_1400020a8();
        }
        *(ulonglong *)(lVar12 + 0x98) =
             CONCAT44(uStack_94,CONCAT13(uStack_95,CONCAT21(uStack_97,local_98)));
        local_98 = 0;
        uStack_97 = 0;
        uStack_95 = 0;
        uStack_94 = 0;
        *(uint *)(lVar12 + 0xa0) = uStack_90;
        *(undefined4 *)(lVar12 + 0xa4) = local_8c;
      }
    }
    local_c8 = CONCAT71(local_c8._1_7_,1);
    FUN_140d6793a(lVar12,0x4000,0,DAT_14c872ce0);
  }
  else {
    cVar6 = FUN_146b137c6(lVar12 + 0x98,&local_b8);
    if (cVar6 == '\0') goto LAB_1446b420f;
  }
  puVar8 = (undefined8 *)FUN_14001cc68(0x160,0x10);
  *puVar8 = &PTR_FUN_14befcbe0;
  puVar8[1] = &PTR_FUN_14befcc10;
  puVar8[2] = &PTR_FUN_14befcc58;
  puVar8[3] = 0;
  puVar8[4] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(puVar8 + 5));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar8 + 5),4000);
  uVar4 = local_b8;
  puVar8[0x10] = 0;
  *(undefined4 *)(puVar8 + 0x11) = 0;
  puVar8[10] = 0;
  puVar8[0xb] = 0;
  puVar8[0xc] = 0;
  puVar8[0xd] = 0;
  *(undefined8 *)((longlong)puVar8 + 0x8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar8 + 0x94) = 0;
  puVar8[0x14] = 0;
  *(undefined4 *)(puVar8 + 0x15) = 0;
  puVar8[0x16] = local_b8;
  puVar9 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar9[2] = 0;
  puVar8[0x19] = puVar9;
  puVar8[0x18] = puVar9;
  puVar8[0x1e] = 0;
  *(undefined4 *)(puVar8 + 0x1f) = 0;
  puVar8[0x1a] = 0;
  puVar8[0x1b] = 0;
  *(undefined8 *)((longlong)puVar8 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar8 + 0x104) = 0;
  puVar8[0x22] = 0;
  *(undefined4 *)(puVar8 + 0x23) = 0;
  *(undefined1 *)(puVar8 + 0x24) = 0;
  puVar8[0x29] = 0;
  *(undefined4 *)(puVar8 + 0x2a) = 0;
  puVar8[0x25] = 0;
  puVar8[0x26] = 0;
  puVar8[0x27] = 0;
  FUN_140056680(local_a8,L"UdpMessageUnicastSocket");
  FUN_1470b245e(&local_98,local_a8);
  uStack_97 = 0x100;
  uStack_94 = (undefined4)local_b0;
  uStack_90 = (uint)((ulonglong)local_b0 >> 0x20);
  local_5c = 0x200000;
  uVar10 = FUN_1470b24f2(&local_98);
  puVar8[0x28] = uVar10;
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if (puVar8[0x28] == 0) {
    *(undefined1 *)(puVar8 + 0x24) = 1;
  }
  FUN_140056680(local_a8,L"UdpMessageMulticastSocket");
  FUN_1470b245e(&local_98,local_a8);
  uVar5 = local_68;
  lVar13 = local_b0;
  uStack_97 = 0x100;
  local_58 = 1;
  uStack_90 = (uint)(uVar4 >> 0x20) & 0xffff;
  uStack_94 = (undefined4)local_b0;
  lVar14 = (longlong)(int)local_68;
  local_68 = local_68 + 1;
  if (local_64 < local_68) {
    FUN_1498fac02(&local_70,uVar5);
  }
  *(ulonglong *)(local_70 + lVar14 * 8) = uVar4 & 0xffffffff | lVar13 << 0x20;
  local_60 = 0x101;
  local_78 = (undefined4)local_b0;
  local_5c = 0x200000;
  uVar10 = FUN_1470b24f2(&local_98);
  puVar8[0x17] = uVar10;
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  puVar9 = puVar8 + 1;
  if (puVar8[0x17] == 0) {
    *(undefined1 *)(puVar8 + 0x24) = 1;
  }
  else if ((*(byte *)(puVar8 + 0x24) & 1) == 0) {
    local_c0 = 0;
    local_c8 = 0xffffffffffffffff;
    uVar10 = FUN_1411b1052(puVar8,L"FUdpMessageTunnel",0x20000,1);
    puVar8[0x25] = uVar10;
  }
  if (puVar8 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  plVar11 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar11[1] = (longlong)&DAT_100000001;
  *plVar11 = (longlong)&PTR_FUN_14befe370;
  plVar11[2] = (longlong)puVar8;
  *(undefined8 **)(param_1 + 0xb0) = puVar9;
  plVar7 = *(longlong **)(param_1 + 0xb8);
  if (plVar11 == plVar7) {
    if (plVar11 == (longlong *)0x0) goto LAB_1446b45eb;
    LOCK();
    plVar7 = plVar11 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 != 0) goto LAB_1446b45eb;
    (**(code **)*plVar11)(plVar11);
    LOCK();
    piVar1 = (int *)((longlong)plVar11 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
    plVar7 = plVar11;
  }
  else {
    *(longlong **)(param_1 + 0xb8) = plVar11;
    if (plVar7 == (longlong *)0x0) goto LAB_1446b45eb;
    LOCK();
    plVar11 = plVar7 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 != 0) goto LAB_1446b45eb;
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
LAB_1446b45eb:
  if (0 < *(int *)(lVar12 + 0xb0)) {
    lVar14 = 0;
    lVar13 = 0;
    do {
      lVar15 = *(longlong *)(lVar12 + 0xa8) + lVar14;
      cVar6 = FUN_146b137c6(lVar15,&local_98);
      if ((cVar6 != '\0') || (cVar6 = FUN_146b13880(lVar15,&local_98), cVar6 != '\0')) {
        (**(code **)**(undefined8 **)(param_1 + 0xb0))(*(undefined8 **)(param_1 + 0xb0),&local_98);
      }
      lVar13 = lVar13 + 1;
      lVar14 = lVar14 + 0x10;
    } while (lVar13 < *(int *)(lVar12 + 0xb0));
  }
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446b467e FUN_1446b467e body=808 status=ok
// SIG undefined FUN_1446b467e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446b467e(void)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined **local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_48 = 1;
  local_50 = &PTR_FUN_14befbba0;
  local_58 = 0;
  FUN_14282b410(L"/Script/UdpMessaging",&PTR_FUN_14befbbc0,1,0);
  local_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/UdpMessaging",0,0,&PTR_FUN_14befbce0);
  auVar2 = roundpd(ZEXT816(0x413e848080000000),ZEXT816(0x413e848080000000),1);
  _DAT_14cc32300 = (longlong)auVar2._0_8_;
  auVar2 = roundpd(ZEXT816(0x416312d010000000),ZEXT816(0x416312d010000000),1);
  DAT_14cc32308 = (longlong)auVar2._0_8_;
  _DAT_14cc322f8 = 100000000;
  local_38 = (char *)((ulonglong)local_38._4_4_ << 0x20);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cc32310,L"MessageBus.UDP.InduceSocketError",&local_38,
                L"This CVar can be used to induce a socket failure on outbound communication.\nAny non zero value will force the output socket connection to fail if the IP address matches\none of the values in MessageBus.UDP.ConnectionsToError. The list can be cleared by invoking\nMessageBus.UDP.ClearDenyList."
               );
  atexit(FUN_1446acbea);
  FUN_140056680(&local_38,&DAT_149dfb77a);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_140f510cc(&DAT_14cc32328,L"MessageBus.UDP.ConnectionsToError",&local_38,
                L"Connections to error out on when MessageBus.UDP.InduceSocketError is enabled.\nThis can be a comma separated list in the form IPAddr2:port,IPAddr3:port"
               );
  if (local_38 != (char *)0x0) {
    FUN_1400020a8();
  }
  atexit(FUN_1446acc2f);
  local_38 = (char *)((ulonglong)local_38 & 0xffffffff00000000);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cc32340,L"MessageBus.UDP.CheckForExpiredWithFullQueue",&local_38,
                L"Attempts to release pressure on the work queue by checking if inflight segments have expired with no acknowledgement.\n"
               );
  atexit(FUN_1446acc74);
  auVar2 = roundpd(ZEXT816(0x41b1e1a300800000),ZEXT816(0x41b1e1a300800000),1);
  DAT_14cc323e8 = (longlong)auVar2._0_8_;
  local_38._0_4_ = 100;
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cc323f0,L"MessageBus.UDP.SegmenterTimeout",&local_38,
                L"The number of milliseconds to wait for a segment to be acknowledge before attempting to resend. Values are clamped between 10 and 1000"
               );
  atexit(FUN_1446afdad);
  local_38._0_4_ = 0x10;
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cc32408,L"MessageBus.UDP.SegmenterMaxResends",&local_38,
                L"The number of attempts to resend data to an endpoint. Values are clamped between 1 and 100."
               );
  atexit(FUN_1446afdf2);
  local_38._0_4_ = 5;
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cc32420,L"MessageBus.UDP.MaxRetriesForBadEndpoint",&local_38,
                L"The maximum number of retries that will be attempted when a socket connection fails to reach an endpoint."
               );
  atexit(FUN_1446afe37);
  local_38 = (char *)CONCAT44(local_38._4_4_,0x3c);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cc32438,L"MessageBus.UDP.BadEndpointPeriod",&local_38,
                L"The period of time, in seconds, between endpoint socket errors to be considered a bad endpoint."
               );
  atexit(FUN_1446afe7c);
  local_38 = (char *)CONCAT71(local_38._1_7_,1);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_140bd5914(&DAT_14cc32450,L"MessageBus.UDP.EndpointDenyListEnabled",&local_38,
                L"Specifies if the endpoint deny list is enabled. If enabled, a problematic endpoint will be tagged for possible exclusion from communication.The maximum attempts allowed is determined by MessageBus.UDP.MaxRetriesForBadEndpoint"
               );
  atexit(FUN_1446afec1);
  FUN_1467718b8();
  atexit((_func_5014 *)&LAB_1446aff06);
  local_38 = "UdpMessaging";
  local_30 = 0xc;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  DAT_14cc324f0 = (ulonglong)uVar1;
  local_38 = (char *)0x800000014befcd8e;
  local_24 = 0xc;
  local_30 = FUN_14577453c();
  local_2c = 1;
  FUN_1467719f4(&local_38);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446b49a8 FUN_1446b49a8 body=57 status=ok
// SIG undefined FUN_1446b49a8(void)

void FUN_1446b49a8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc32570 == 0) {
    uVar1 = FUN_14596efd9();
    DAT_14cc32570 = FUN_14171c317(FUN_146771cfd,uVar1,L"EActorSequenceObjectReferenceType");
  }
  return;
}



// FUNCTION 1446b49e1 FUN_1446b49e1 body=69 status=ok
// SIG undefined FUN_1446b49e1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446b49e1(void)

{
  _DAT_14cc325e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001446b4a23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc325f0,1);
  return;
}



// FUNCTION 1446b4a26 FUN_1446b4a26 body=69 status=ok
// SIG undefined FUN_1446b4a26(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446b4a26(void)

{
  _DAT_14cc32600 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001446b4a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc32608,1);
  return;
}



// FUNCTION 1446b4a6b FUN_1446b4a6b body=69 status=ok
// SIG undefined FUN_1446b4a6b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446b4a6b(void)

{
  _DAT_14cc32618 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001446b4aad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc32620,1);
  return;
}



// FUNCTION 1446b4ada FUN_1446b4ada body=510 status=ok
// SIG undefined FUN_1446b4ada(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446b4ada(void)

{
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  ulonglong local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  _DAT_14cc324fc = 0xffffffff;
  _DAT_14cc32500 = 0;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ActorSequence",&PTR_FUN_14befeab0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ActorSequence",&PTR_FUN_14beff310,1,0);
  ppuStack_60 = &PTR_FUN_14beff850;
  local_58 = 1;
  local_68 = 3;
  FUN_14282b410(L"/Script/ActorSequence",0,0,&PTR_FUN_14beff870);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ActorSequence",&PTR_FUN_14beffde0,1,0);
  local_48 = 0x800000014beffe08;
  local_34 = 0xd;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_14171c728(&DAT_14cc325e0,&local_48);
  local_48 = local_48 & 0xffffffff00000000;
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cc325e8,L"ActorSequence.DefaultEvaluationType",&local_48,
                L"0: Playback locked to playback frames\n1: Unlocked playback with sub frame interpolation"
               );
  atexit(FUN_1446b49e1);
  FUN_140056680(&local_48,L"24000fps");
  local_68 = local_68 & 0xffffffff00000000;
  FUN_140f510cc(&DAT_14cc32600,L"ActorSequence.DefaultTickResolution",&local_48,
                L"Specifies default a tick resolution for newly created level sequences. Examples: 30 fps, 120/1 (120 fps), 30000/1001 (29.97), 0.01s (10ms)."
               );
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  atexit(FUN_1446b4a26);
  FUN_140056680(&local_48,L"30fps");
  local_68 = local_68 & 0xffffffff00000000;
  FUN_140f510cc(&DAT_14cc32618,L"ActorSequence.DefaultDisplayRate",&local_48,
                L"Specifies default a display frame rate for newly created level sequences; also defines frame locked frame rate where sequences are set to be frame locked. Examples: 30 fps, 120/1 (120 fps), 30000/1001 (29.97), 0.01s (10ms)."
               );
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  atexit(FUN_1446b4a6b);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446b4cdc FUN_1446b4cdc body=128 status=ok
// SIG undefined FUN_1446b4cdc(void)

void FUN_1446b4cdc(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  
  plVar1 = (longlong *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x20) != 0) {
    puVar4 = (undefined8 *)*plVar1;
    if (puVar4 == (undefined8 *)0x0) goto LAB_1446b4d20;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1446b4d20:
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001446b4d49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x10))(plVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1446b4d5c FUN_1446b4d5c body=1668 status=ok
// SIG undefined FUN_1446b4d5c(void)

bool FUN_1446b4d5c(longlong param_1,uint param_2,longlong param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong **pplVar4;
  longlong **pplVar5;
  longlong lVar6;
  longlong **pplVar7;
  int iVar8;
  undefined4 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  wchar_t *pwVar12;
  longlong lVar13;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  undefined4 local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  longlong *plStack_70;
  uint local_60;
  undefined1 local_5c [4];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  local_60 = param_2;
  if (3 < param_2) {
    FUN_140002266(&local_58,L"Invalid LocalUserNum=%d",param_2);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    local_78 = (longlong)local_58;
    plStack_70 = (longlong *)uStack_50;
    plVar10 = (longlong *)0x0;
    plVar11 = (longlong *)0x0;
    iVar8 = (int)uStack_50;
    goto LAB_1446b4e5c;
  }
  if (DAT_14cc3263a == '\x01') {
    local_c0 = 0xffffffff;
    local_c8 = (longlong *)((ulonglong)local_c8 & 0xffffffff00000000);
    iVar8 = FUN_1447ee042(param_3,L"LoginUI",7,1);
    if (iVar8 != -1) goto LAB_1446b4e2c;
    pwVar12 = L"Only supports login using ShowLoginUI";
LAB_1446b4e4a:
    FUN_14020fad6(&local_78,pwVar12);
    plVar10 = (longlong *)0x0;
    plVar11 = (longlong *)0x0;
  }
  else {
LAB_1446b4e2c:
    if ((DAT_14cc3263b == '\x01') && (*(int *)(param_3 + 0x18) < 2)) {
      pwVar12 = L"Invalid account id, string empty";
      goto LAB_1446b4e4a;
    }
    if (*(int *)(param_1 + 0x198) != *(int *)(param_1 + 0x1c4)) {
      lVar13 = param_1 + 0x1c8;
      if (*(longlong *)(param_1 + 0x1d0) != 0) {
        lVar13 = *(longlong *)(param_1 + 0x1d0);
      }
      iVar8 = *(int *)(lVar13 + (ulonglong)(*(int *)(param_1 + 0x1d8) + 3U & param_2) * 4);
      if (iVar8 != -1) {
        lVar13 = *(longlong *)(param_1 + 400);
        do {
          lVar6 = lVar13 + (longlong)iVar8 * 0x20;
          if (*(uint *)(lVar13 + (longlong)iVar8 * 0x20) == param_2) {
            if ((lVar6 + 8U & 0xfffffffffffffff7) != 0) {
              local_58 = *(longlong ***)(lVar6 + 8);
              pplVar7 = *(longlong ***)(lVar6 + 0x10);
              if (pplVar7 == (longlong **)0x0) {
                uStack_50 = (longlong **)0x0;
              }
              else {
                LOCK();
                *(int *)(pplVar7 + 1) = *(int *)(pplVar7 + 1) + 1;
                UNLOCK();
                LOCK();
                *(int *)(pplVar7 + 1) = *(int *)(pplVar7 + 1) + 1;
                UNLOCK();
                uStack_50 = pplVar7;
              }
              uVar9 = (**(code **)((longlong)*local_58 + 0x40))();
              iVar8 = FUN_14990d5fc((longlong *)(param_1 + 0x1e0),uVar9,&local_58);
              pplVar5 = uStack_50;
              if (iVar8 == -1) {
                lVar13 = 0;
              }
              else {
                lVar13 = (longlong)iVar8 * 0x28 + *(longlong *)(param_1 + 0x1e0);
              }
              if (uStack_50 != (longlong **)0x0) {
                LOCK();
                pplVar4 = uStack_50 + 1;
                *(int *)pplVar4 = *(int *)pplVar4 + -1;
                UNLOCK();
                if (*(int *)pplVar4 == 0) {
                  (*(code *)**uStack_50)(uStack_50);
                  LOCK();
                  piVar1 = (int *)((longlong)pplVar5 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (*(code *)(*pplVar5)[2])(pplVar5);
                  }
                }
              }
              if (pplVar7 != (longlong **)0x0) {
                LOCK();
                pplVar5 = pplVar7 + 1;
                *(int *)pplVar5 = *(int *)pplVar5 + -1;
                UNLOCK();
                if (*(int *)pplVar5 == 0) {
                  (*(code *)**pplVar7)(pplVar7);
                  LOCK();
                  piVar1 = (int *)((longlong)pplVar7 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (*(code *)(*pplVar7)[2])(pplVar7);
                  }
                }
              }
              plVar10 = *(longlong **)(lVar13 + 0x10);
              plVar11 = *(longlong **)(lVar13 + 0x18);
              if (plVar11 == (longlong *)0x0) {
                plVar11 = (longlong *)0x0;
              }
              else {
                LOCK();
                *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
                UNLOCK();
              }
              goto LAB_1446b5215;
            }
            break;
          }
          iVar8 = *(int *)(lVar6 + 0x18);
        } while (iVar8 != -1);
      }
    }
    FUN_149905034(&local_88,param_2);
    FUN_1499053c2(&local_58,&local_88);
    local_98 = (longlong)local_58;
    local_90 = (longlong *)uStack_50;
    if (uStack_50 != (longlong **)0x0) {
      LOCK();
      *(int *)(uStack_50 + 1) = (int)uStack_50[1] + 1;
      UNLOCK();
      if (uStack_50 != (longlong **)0x0) {
        LOCK();
        plVar10 = (longlong *)(uStack_50 + 1);
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (*(code *)**uStack_50)(uStack_50);
          LOCK();
          piVar1 = (int *)((longlong)uStack_50 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)((longlong)*uStack_50 + 0x10))(uStack_50);
          }
        }
      }
    }
    plVar10 = (longlong *)FUN_14001cc68(0xb8,0x10);
    FUN_1499054b8(plVar10,&local_88);
    plVar11 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar11[1] = (longlong)&DAT_100000001;
    *plVar11 = (longlong)&PTR_FUN_14bf02a80;
    plVar11[2] = (longlong)plVar10;
    FUN_140056680(&local_a8,&DAT_149f0f4f8);
    local_58 = &local_a8;
    uStack_50 = (longlong **)&local_88;
    FUN_1413216f2(plVar10 + 0xd,&local_b8,&local_58,0);
    if (local_a8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    local_58 = (longlong **)&local_98;
    local_a8 = plVar10;
    local_a0 = plVar11;
    uStack_50 = &local_a8;
    FUN_14990d2a0(param_1 + 0x1e0,&local_b8);
    plVar3 = local_a0;
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_a0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    (**(code **)(*plVar10 + 8))(plVar10,&local_b8);
    local_a8 = local_b8;
    local_a0 = local_b0;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
      UNLOCK();
    }
    local_58 = (longlong **)&local_60;
    uStack_50 = &local_a8;
    FUN_14990d916((longlong *)(param_1 + 400),local_5c);
    plVar3 = local_a0;
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_a0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_b0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    plVar3 = local_90;
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_90 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
    if (CONCAT44(uStack_84,local_88) != 0) {
      FUN_1400020a8();
    }
LAB_1446b5215:
    FUN_140056680(&local_58,&DAT_149e25dfc);
    FUN_140056680(&local_88,L"null:logincount");
    (**(code **)(*plVar10 + 0x20))(plVar10,&local_88,&local_58);
    if (CONCAT44(uStack_84,local_88) != 0) {
      FUN_1400020a8();
    }
    pwVar12 = (wchar_t *)local_58;
    if ((int)uStack_50 == 0) {
      pwVar12 = L"";
    }
    iVar8 = _wtoi(pwVar12);
    FUN_140002266(&local_88,&DAT_149e063bc,iVar8 + 1);
    if (local_58 != (longlong **)0x0) {
      FUN_1400020a8();
    }
    local_58 = (longlong **)CONCAT44(uStack_84,local_88);
    uStack_50 = (longlong **)CONCAT44(uStack_7c,uStack_80);
    FUN_140056680(&local_88,L"null:logincount");
    (**(code **)(*plVar10 + 0x48))(plVar10,&local_88,&local_58);
    if (CONCAT44(uStack_84,local_88) != 0) {
      FUN_1400020a8();
    }
    if (local_58 != (longlong **)0x0) {
      FUN_1400020a8();
    }
  }
  iVar8 = (int)plStack_70;
LAB_1446b4e5c:
  if (iVar8 < 2) {
    (**(code **)(*plVar10 + 8))(plVar10,&local_58);
    if (*(int *)(param_4 + 1) == 0) {
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar10 = (longlong *)*param_4;
    }
    local_c8 = &local_78;
    (**(code **)(*plVar10 + 0x58))
              (plVar10,local_60,CONCAT71((int7)((ulonglong)local_c8 >> 8),1),local_58);
    if (uStack_50 != (longlong **)0x0) {
      LOCK();
      plVar10 = (longlong *)(uStack_50 + 1);
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (*(code *)**uStack_50)(uStack_50);
        LOCK();
        piVar1 = (int *)((longlong)uStack_50 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)((longlong)*uStack_50 + 0x10))(uStack_50);
        }
      }
    }
  }
  else {
    FUN_14990559a();
    if (*(int *)(param_4 + 1) == 0) {
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar10 = (longlong *)*param_4;
    }
    local_c8 = &local_78;
    (**(code **)(*plVar10 + 0x58))(plVar10,local_60,0,DAT_14cc326f0);
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar11 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar8 < 2;
}



// FUNCTION 1446b53e2 FUN_1446b53e2 body=268 status=ok
// SIG undefined FUN_1446b53e2(void)

bool FUN_1446b53e2(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x110))(param_1,&local_48,param_2);
  plVar1 = local_40;
  if (local_48 != 0) {
    if (local_40 == (longlong *)0x0) {
      local_38 = local_48;
      local_30 = (longlong *)0x0;
      FUN_14990de04(param_1 + 0x3c);
    }
    else {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
      local_38 = local_48;
      local_30 = local_40;
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
      FUN_14990de04(param_1 + 0x3c);
      LOCK();
      plVar3 = plVar1 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    FUN_14990df88(param_1 + 0x32,param_2);
  }
  (**(code **)(*param_1 + 0xd0))(param_1,param_2,local_48 != 0);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return local_48 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446b54f0 FUN_1446b54f0 body=590 status=ok
// SIG undefined FUN_1446b54f0(void)

undefined4 FUN_1446b54f0(longlong *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  longlong local_98 [6];
  undefined1 local_68;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  local_a8 = 0;
  FUN_14063337c(&DAT_14c846b20,L"AUTH_LOGIN=",&local_38,1);
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  local_a8 = 0;
  FUN_14063337c(&DAT_14c846b20,L"AUTH_PASSWORD=",&local_48,1);
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  local_a8 = 0;
  FUN_14063337c(&DAT_14c846b20,L"AUTH_TYPE=",&local_58,1);
  if ((int)uStack_30 < 2) {
    if (DAT_14cc3263b != '\0') {
      uVar1 = 0;
      goto LAB_1446b5671;
    }
    local_98[4] = 0;
    local_98[5] = 0;
    local_98[2] = 0;
    local_98[3] = 0;
    local_98[0] = 0;
    local_98[1] = 0;
    local_68 = 0;
  }
  else {
    uVar1 = 0;
    if (((int)uStack_40 < 2) || ((int)uStack_50 < 2)) goto LAB_1446b5671;
    local_a8 = local_a8 & 0xffffffffffffff00;
    FUN_1489ba396(local_98,&local_58,&local_38,&local_48);
  }
  uVar1 = (**(code **)(*param_1 + 0x88))(param_1,param_2,local_98);
  if (local_98[4] != 0) {
    FUN_1400020a8();
  }
  if (local_98[2] != 0) {
    FUN_1400020a8();
  }
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
LAB_1446b5671:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446b5740 FUN_1446b5740 body=579 status=ok
// SIG undefined FUN_1446b5740(void)

void FUN_1446b5740(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 *local_58;
  int local_50;
  undefined8 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plStack_60 = *(longlong **)(param_2 + 0x10);
  if (plStack_60 == (longlong *)0x0) {
LAB_1446b5764:
    uVar9 = *(undefined8 *)(param_1 + 0x188);
    local_68 = 0;
    plStack_60 = (longlong *)0x0;
    bVar10 = true;
  }
  else {
    iVar7 = (int)plStack_60[1];
    do {
      if (iVar7 == 0) goto LAB_1446b5764;
      LOCK();
      iVar5 = (int)plStack_60[1];
      bVar10 = iVar7 == iVar5;
      if (bVar10) {
        *(int *)(plStack_60 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar10);
    local_68 = *(undefined8 *)(param_2 + 8);
    uVar9 = *(undefined8 *)(param_1 + 0x188);
    LOCK();
    *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
    UNLOCK();
    bVar10 = false;
  }
  plVar4 = plStack_60;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_148dbc940(&local_58,param_3);
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,4,0x10);
  local_40 = 4;
  *local_48 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_48[2] = lVar8;
  *local_48 = &PTR_FUN_14bf02aa0;
  local_48[3] = local_68;
  local_48[4] = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
    UNLOCK();
  }
  local_48[5] = 0;
  *(undefined4 *)(local_48 + 6) = 0;
  FUN_148dbc940(local_48 + 5,&local_58);
  FUN_145c398c4(uVar9,&local_48);
  if (local_40 == 0) {
LAB_1446b58a0:
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
    goto LAB_1446b58a0;
  }
  if (local_50 != 0) {
    if (local_58 == (undefined8 *)0x0) goto LAB_1446b58ef;
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1446b58ef:
  plVar3 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (!bVar10) {
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
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1446b5988 FUN_1446b5988 body=51 status=ok
// SIG undefined FUN_1446b5988(void)

undefined8 FUN_1446b5988(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
  return 0;
}



// FUNCTION 1446b59bc FUN_1446b59bc body=115 status=ok
// SIG undefined FUN_1446b59bc(void)

void FUN_1446b59bc(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x20) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1446b5a00;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1446b5a00:
  FUN_1447a1747(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1446b5a30 FUN_1446b5a30 body=475 status=ok
// SIG undefined FUN_1446b5a30(void)

void FUN_1446b5a30(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  int local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined8 *)(*param_1 + 0x78);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_148fba690(&local_58,param_1[1]);
  local_48 = *param_2;
  *param_2 = 0;
  local_40._0_4_ = *(undefined4 *)(param_2 + 1);
  local_40._4_4_ = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,4,0x10);
  puVar2 = local_38;
  local_30 = 4;
  *local_38 = &PTR_LAB_149e020b0;
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
  local_38[2] = lVar4;
  *local_38 = &PTR_FUN_14bf01fc0;
  local_38[3] = 0;
  *(undefined4 *)(local_38 + 4) = 0;
  FUN_148fba690(local_38 + 3,&local_58);
  puVar2[5] = local_48;
  local_48 = 0;
  *(undefined4 *)(puVar2 + 6) = (undefined4)local_40;
  *(undefined4 *)((longlong)puVar2 + 0x34) = local_40._4_4_;
  local_40 = 0;
  FUN_145c398c4(uVar1,&local_38);
  if (local_30 == 0) {
LAB_1446b5b68:
    if (local_38 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
    goto LAB_1446b5b68;
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_50 != 0) {
    if (local_58 == (undefined8 *)0x0) goto LAB_1446b5bc6;
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1446b5bc6:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446b5c0c FUN_1446b5c0c body=128 status=ok
// SIG undefined FUN_1446b5c0c(void)

void FUN_1446b5c0c(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[9];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[7];
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
  *param_1 = &PTR_FUN_14b4ce010;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001446b5c80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1446b5c8c FUN_1446b5c8c body=459 status=ok
// SIG undefined FUN_1446b5c8c(void)

longlong FUN_1446b5c8c(longlong param_1,void **param_2,void **param_3)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined **local_88;
  void *pvStack_80;
  undefined8 local_78;
  void *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = (undefined **)0x0;
  pvStack_80 = (void *)0x0;
  FUN_1419050b0(param_1,&local_88,param_2,1);
  if (local_88 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  local_88 = &PTR_FUN_14b438e00;
  pvStack_80 = (void *)0x0;
  local_78 = 0;
  local_70 = (void *)0x0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  if (&pvStack_80 != param_3) {
    uVar1 = *(uint *)(param_3 + 1);
    pvVar3 = *param_3;
    local_78 = (ulonglong)uVar1;
    if ((longlong)(int)uVar1 != 0) {
      FUN_1446dd670(&pvStack_80,uVar1,0);
      memcpy(pvStack_80,pvVar3,(longlong)(int)uVar1 * 2);
    }
  }
  if (&local_70 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    pvVar3 = *param_2;
    uStack_68 = CONCAT44(uStack_68._4_4_,uVar1);
    if (uVar1 == 0 && uStack_68._4_4_ == 0) {
      uStack_68 = (ulonglong)uVar1;
    }
    else {
      FUN_1446dd670(&local_70,uVar1);
      if (uVar1 != 0) {
        memcpy(local_70,pvVar3,(longlong)(int)uVar1 * 2);
      }
    }
  }
  iVar2 = *(int *)(param_1 + 0x38);
  *(uint *)(param_1 + 0x38) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x3c) < iVar2 + 1U) {
    FUN_1489bd476((longlong *)(param_1 + 0x30),iVar2);
  }
  lVar4 = *(longlong *)(param_1 + 0x30);
  lVar5 = (longlong)iVar2 * 0x38;
  *(undefined ***)(lVar4 + lVar5) = &PTR_FUN_14b438e00;
  *(undefined8 *)(lVar4 + 8 + lVar5) = 0;
  *(void **)(lVar4 + 8 + lVar5) = pvStack_80;
  pvStack_80 = (void *)0x0;
  *(undefined4 *)(lVar4 + 0x10 + lVar5) = (undefined4)local_78;
  *(undefined4 *)(lVar4 + 0x14 + lVar5) = local_78._4_4_;
  local_78 = 0;
  *(undefined8 *)(lVar4 + 0x18 + lVar5) = 0;
  *(void **)(lVar4 + 0x18 + lVar5) = local_70;
  local_70 = (void *)0x0;
  *(undefined4 *)(lVar4 + 0x20 + lVar5) = (undefined4)uStack_68;
  *(int *)(lVar4 + 0x24 + lVar5) = uStack_68._4_4_;
  uStack_68 = 0;
  *(undefined8 *)(lVar4 + 0x28 + lVar5) = 0;
  *(undefined8 *)(lVar4 + 0x28 + lVar5) = local_60;
  local_60 = 0;
  *(undefined4 *)(lVar4 + 0x30 + lVar5) = (undefined4)uStack_58;
  *(undefined4 *)(lVar4 + 0x34 + lVar5) = uStack_58._4_4_;
  uStack_58 = 0;
  FUN_1489bd2dc();
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446b5e58 FUN_1446b5e58 body=475 status=ok
// SIG undefined FUN_1446b5e58(void)

void FUN_1446b5e58(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  int local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined8 *)(*param_1 + 0x78);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_14666fadc(&local_58,param_1[1]);
  local_48 = *param_2;
  *param_2 = 0;
  local_40._0_4_ = *(undefined4 *)(param_2 + 1);
  local_40._4_4_ = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,4,0x10);
  puVar2 = local_38;
  local_30 = 4;
  *local_38 = &PTR_LAB_149e020b0;
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
  local_38[2] = lVar4;
  *local_38 = &PTR_FUN_14bf02030;
  local_38[3] = 0;
  *(undefined4 *)(local_38 + 4) = 0;
  FUN_14666fadc(local_38 + 3,&local_58);
  puVar2[5] = local_48;
  local_48 = 0;
  *(undefined4 *)(puVar2 + 6) = (undefined4)local_40;
  *(undefined4 *)((longlong)puVar2 + 0x34) = local_40._4_4_;
  local_40 = 0;
  FUN_145c398c4(uVar1,&local_38);
  if (local_30 == 0) {
LAB_1446b5f90:
    if (local_38 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
    goto LAB_1446b5f90;
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_50 != 0) {
    if (local_58 == (undefined8 *)0x0) goto LAB_1446b5fee;
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1446b5fee:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446b6034 FUN_1446b6034 body=156 status=ok
// SIG undefined FUN_1446b6034(void)

void FUN_1446b6034(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  plVar3 = param_1 + 8;
  if (*(int *)(param_1 + 9) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1446b6078;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 9) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_1446b6078:
  plVar3 = (longlong *)param_1[7];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  *param_1 = &PTR_FUN_14b4ce010;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001446b60bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1446b60d0 FUN_1446b60d0 body=492 status=ok
// SIG undefined FUN_1446b60d0(void)

void FUN_1446b60d0(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  undefined2 *puVar5;
  longlong *plVar6;
  int iVar7;
  ushort uVar8;
  uint uVar9;
  ulonglong uVar10;
  ushort uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar4;
  
  iVar3 = *(int *)(param_2 + 0x20);
  uVar14 = 0;
  iVar7 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar7 = 0;
  }
  if (0 < iVar7) {
    if (iVar3 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = *(undefined2 **)(param_2 + 0x18);
    }
    lVar12 = 0;
    do {
      uVar9 = ((uint)(0x19 < (ushort)puVar5[lVar12] - 0x61) * 0x20 + (uint)(ushort)puVar5[lVar12]) -
              0x20;
      uVar14 = uVar14 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar14 ^ uVar9) & 0xff) * 4);
      uVar14 = uVar14 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar14 & 0xff ^ uVar9 >> 8 & 0xff) * 4);
      lVar12 = lVar12 + 1;
    } while (iVar7 != (int)lVar12);
  }
  if ((int)param_1[0x11] != *(int *)((longlong)param_1 + 0xb4)) {
    plVar6 = param_1 + 0x17;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[0x18];
    }
    iVar3 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[0x19] - 1U & uVar14) * 4);
    if (iVar3 != -1) {
      lVar12 = param_1[0x10];
      do {
        lVar4 = (longlong)iVar3;
        puVar1 = (undefined8 *)(lVar12 + lVar4 * 0x48);
        cVar2 = (**(code **)*puVar1)(puVar1,param_2);
        lVar12 = param_1[0x10];
        if (cVar2 != '\0') {
          lVar12 = lVar12 + lVar4 * 0x48;
          if (lVar12 == -0x30 || lVar12 == 0) {
            return;
          }
          if ((longlong)*(int *)(lVar12 + 0x38) == 0) {
            return;
          }
          lVar4 = *(longlong *)(lVar12 + 0x30);
          lVar12 = (longlong)*(int *)(lVar12 + 0x38) * 0x30 + lVar4;
          iVar3 = (int)param_3[1];
          while ((longlong)*(int *)(lVar4 + 0x28) == 0) {
LAB_1446b628d:
            lVar4 = lVar4 + 0x30;
            if (lVar4 == lVar12) {
              return;
            }
          }
          lVar15 = *(longlong *)(lVar4 + 0x20);
          lVar13 = (longlong)*(int *)(lVar4 + 0x28) * 0x40 + lVar15;
LAB_1446b622a:
          if (*(int *)(lVar15 + 0x20) == iVar3) {
            if (1 < iVar3) {
              lVar16 = 0;
              do {
                uVar8 = *(ushort *)(*(longlong *)(lVar15 + 0x18) + lVar16);
                uVar10 = (ulonglong)uVar8;
                uVar11 = *(ushort *)(*param_3 + lVar16);
                if (uVar8 == uVar11) {
                  if (uVar8 == 0) break;
                }
                else {
                  if (0x7f < (uVar11 | uVar8)) goto LAB_1446b6275;
                  uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
                  uVar17 = (ulonglong)uVar11;
                  uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
                  if ((&DAT_149e05da0)[uVar10] != (&DAT_149e05da0)[uVar17]) goto LAB_1446b6275;
                }
                lVar16 = lVar16 + 2;
              } while( true );
            }
            goto LAB_1446b62a3;
          }
          if (*(int *)(lVar15 + 0x20) + iVar3 == 1) goto LAB_1446b62a3;
          goto LAB_1446b6284;
        }
        iVar3 = *(int *)(lVar12 + 0x40 + lVar4 * 0x48);
      } while (iVar3 != -1);
    }
  }
  return;
LAB_1446b6275:
  if (uVar8 == uVar11) {
LAB_1446b62a3:
                    /* WARNING: Could not recover jumptable at 0x0001446b62b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xd0))(param_1);
    return;
  }
LAB_1446b6284:
  lVar15 = lVar15 + 0x40;
  if (lVar15 == lVar13) goto LAB_1446b628d;
  goto LAB_1446b622a;
}



// FUNCTION 1446b62bc FUN_1446b62bc body=165 status=ok
// SIG undefined FUN_1446b62bc(void)

void FUN_1446b62bc(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  plVar3 = param_1 + 0xe;
  if (*(int *)(param_1 + 0xf) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1446b6300;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0xf) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_1446b6300:
  FUN_14990c4da(param_1 + 8);
  plVar3 = (longlong *)param_1[7];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  *param_1 = &PTR_FUN_14b4ce010;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001446b634e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1446b6362 FUN_1446b6362 body=1102 status=ok
// SIG undefined FUN_1446b6362(void)

undefined4 FUN_1446b6362(longlong *param_1,undefined4 param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  longlong local_60;
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = (**(code **)(*param_1 + 0x20))(param_1,param_3);
  if (lVar5 != 0) {
    uVar8 = 0;
    goto LAB_1446b639a;
  }
  lVar5 = (**(code **)(*param_1 + 8))(param_1,param_3,param_4);
  *(undefined1 *)(lVar5 + 0x124) = 1;
  *(undefined4 *)(lVar5 + 0x148) = 1;
  *(undefined4 *)(lVar5 + 0x110) = *(undefined4 *)(param_4 + 0xc);
  *(undefined4 *)(lVar5 + 0x114) = *(undefined4 *)(param_4 + 8);
  *(undefined4 *)(lVar5 + 0x120) = param_2;
  (**(code **)(*(longlong *)param_1[0x4f] + 0x80))((longlong *)param_1[0x4f],&local_50);
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x110))(local_50,&local_60,param_2);
    plVar2 = local_58;
    if ((longlong *)(lVar5 + 8) != &local_60) {
      *(longlong *)(lVar5 + 8) = local_60;
      local_60 = 0;
      plVar7 = *(longlong **)(lVar5 + 0x10);
      if (local_58 != plVar7) {
        local_58 = (longlong *)0x0;
        *(longlong **)(lVar5 + 0x10) = plVar2;
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
    }
    plVar2 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_58 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    (**(code **)(*local_50 + 0x148))(local_50,&local_60,param_2);
    if ((longlong *)(lVar5 + 0x18) == &local_60) {
      if (local_60 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(lVar5 + 0x18) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(lVar5 + 0x18) = local_60;
      local_60 = 0;
      *(undefined4 *)(lVar5 + 0x20) = (undefined4)local_58;
      *(undefined4 *)(lVar5 + 0x24) = local_58._4_4_;
    }
  }
  if (*(longlong *)(lVar5 + 8) == 0) {
    FUN_140002266(local_70,&DAT_149e063bc,param_2);
    FUN_149908a76(&local_60,local_70);
    plVar2 = local_58;
    if (local_58 == (longlong *)0x0) {
      *(longlong *)(lVar5 + 8) = local_60;
      plVar7 = *(longlong **)(lVar5 + 0x10);
      if (plVar7 != (longlong *)0x0) {
        *(undefined8 *)(lVar5 + 0x10) = 0;
LAB_1446b65b4:
        LOCK();
        plVar2 = plVar7 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar4 = *piVar1;
          UNLOCK();
joined_r0x0001446b65a7:
          if (iVar4 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
      *(longlong *)(lVar5 + 8) = local_60;
      plVar7 = *(longlong **)(lVar5 + 0x10);
      if (local_58 == plVar7) {
        LOCK();
        plVar7 = local_58 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar4 = *piVar1;
          UNLOCK();
          plVar7 = plVar2;
          goto joined_r0x0001446b65a7;
        }
      }
      else {
        *(longlong **)(lVar5 + 0x10) = local_58;
        if (plVar7 != (longlong *)0x0) goto LAB_1446b65b4;
      }
    }
    plVar2 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_58 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
    FUN_140056680(&local_60,L"NullUser");
    if ((longlong *)(lVar5 + 0x18) == &local_60) {
      if (local_60 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(lVar5 + 0x18) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(lVar5 + 0x18) = local_60;
      local_60 = 0;
      *(undefined4 *)(lVar5 + 0x20) = (undefined4)local_58;
      *(undefined4 *)(lVar5 + 0x24) = local_58._4_4_;
    }
  }
  puVar6 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar6 = &PTR_FUN_14bf01110;
  puVar6[1] = 0;
  puVar6[2] = 0;
  FUN_14990559a();
  puVar6[3] = DAT_14cc326f0;
  lVar3 = DAT_14cc326f8;
  puVar6[4] = DAT_14cc326f8;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_14990882e(puVar6,param_1[0x4f]);
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14bf02e40;
  plVar7[2] = (longlong)puVar6;
  *(undefined8 **)(lVar5 + 0x100) = puVar6;
  plVar2 = *(longlong **)(lVar5 + 0x108);
  if (plVar7 == plVar2) {
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
        iVar4 = *piVar1;
        UNLOCK();
joined_r0x0001446b673d:
        if (iVar4 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  else {
    *(longlong **)(lVar5 + 0x108) = plVar7;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar2 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar4 = *piVar1;
        UNLOCK();
        plVar7 = plVar2;
        goto joined_r0x0001446b673d;
      }
    }
  }
  iVar4 = FUN_149908b66(param_1);
  *(undefined4 *)(lVar5 + 0x148) = 2;
  uVar8 = (undefined4)CONCAT71((int7)((ulonglong)lVar5 >> 8),iVar4 == 0);
  if (iVar4 == 0) {
    FUN_149908c9c(param_1);
  }
  else {
    (**(code **)(*param_1 + 0x28))(param_1,param_3);
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_48 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
LAB_1446b639a:
  (**(code **)(*param_1 + 0x68))(param_1,param_3,uVar8);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446b67b2 FUN_1446b67b2 body=318 status=ok
// SIG undefined FUN_1446b67b2(void)

void FUN_1446b67b2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  undefined4 local_50;
  char local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x378));
  iVar3 = *(int *)(param_1 + 0x3a8);
  if (0 < iVar3) {
    lVar5 = 0;
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x3a0);
      if (((lVar1 + lVar5 != 0) &&
          (((*(char *)(lVar1 + 0x38 + lVar5) != '\0' || ((*(byte *)(lVar1 + 0x3a + lVar5) & 1) != 0)
            ) && (*(int *)(lVar1 + 0x148 + lVar5) != 4 || (*(byte *)(lVar1 + 0x39 + lVar5) & 1) != 0
                 )))) && (0 < *(int *)(lVar1 + 0x114 + lVar5))) {
        FUN_1489bb0ca(local_60,0x400);
        FUN_1489b67aa(param_1 + 0x280,local_60,param_4);
        FUN_149909a18(param_1,local_60,lVar1 + lVar5);
        if ((local_4c == '\0') &&
           (plVar2 = *(longlong **)(param_1 + 0x2a0), plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x18))(plVar2,local_60[0],local_50);
        }
        if (local_60[0] != 0) {
          FUN_1400020a8(local_60[0]);
        }
        iVar3 = *(int *)(param_1 + 0x3a8);
      }
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0x150;
    } while (lVar4 < iVar3);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x378));
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1446b68f2 FUN_1446b68f2 body=96 status=ok
// SIG undefined FUN_1446b68f2(void)

undefined4 FUN_1446b68f2(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x20))();
  if ((lVar2 == 0) || ((*(uint *)(lVar2 + 0x148) | 4) != 6)) {
    uVar3 = 0;
  }
  else {
    iVar1 = FUN_149908b66(param_1);
    *(undefined4 *)(lVar2 + 0x148) = 4;
    uVar3 = (undefined4)CONCAT71((int7)((ulonglong)lVar2 >> 8),iVar1 == 0);
  }
  (**(code **)(*param_1 + 0x90))(param_1,param_2,uVar3);
  return uVar3;
}



// FUNCTION 1446b6952 FUN_1446b6952 body=108 status=ok
// SIG undefined FUN_1446b6952(void)

undefined4 FUN_1446b6952(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 unaff_RBP;
  
  lVar2 = (**(code **)(*param_1 + 0x20))();
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    if (*(int *)(lVar2 + 0x148) == 4) {
      *(undefined4 *)(lVar2 + 0x148) = 6;
      iVar1 = FUN_149908b66(param_1);
      uVar3 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),iVar1 == 0);
    }
    else {
      uVar3 = 0;
    }
    *(undefined4 *)(lVar2 + 0x148) = 6;
  }
  (**(code **)(*param_1 + 0xe0))(param_1,param_2,uVar3);
  return uVar3;
}



// FUNCTION 1446b69be FUN_1446b69be body=314 status=ok
// SIG undefined FUN_1446b69be(void)

ulonglong FUN_1446b69be(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 unaff_RBP;
  ulonglong uVar6;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = (**(code **)(*param_1 + 0x20))();
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    (**(code **)(*param_1 + 0x28))(param_1,*(undefined8 *)(lVar5 + 0x118));
    iVar4 = FUN_149908b66(param_1);
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),iVar4 == 0);
  }
  iVar4 = (**(code **)(*param_1 + 0x448))(param_1);
  if (iVar4 == 0) {
    (**(code **)(*(longlong *)param_1[0x4f] + 0x68))((longlong *)param_1[0x4f],&local_40);
    if (local_40 != (longlong *)0x0) {
      cVar3 = (**(code **)(*(longlong *)param_1[0x4f] + 0x120))();
      if (cVar3 == '\0') {
        (**(code **)(*local_40 + 0x50))();
      }
      (**(code **)(*local_40 + 0x68))();
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_38 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar1 = (int *)((longlong)local_38 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_38 + 0x10))(local_38);
        }
      }
    }
  }
  plVar2 = (longlong *)*param_3;
  if (plVar2 != (longlong *)0x0 && (int)param_3[1] != 0) {
    (**(code **)(*plVar2 + 0x60))(plVar2,param_2,uVar6 & 0xffffffff);
  }
  (**(code **)(*param_1 + 0x108))(param_1,param_2,uVar6 & 0xffffffff);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446b6afa FUN_1446b6afa body=26 status=ok
// SIG undefined FUN_1446b6afa(void)

undefined8 FUN_1446b6afa(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(*param_1 + 0x140))(param_1,param_3,0);
  return 0;
}



// FUNCTION 1446b6b14 FUN_1446b6b14 body=26 status=ok
// SIG undefined FUN_1446b6b14(void)

undefined8 FUN_1446b6b14(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(*param_1 + 0x170))(param_1,param_3,0);
  return 0;
}



// FUNCTION 1446b6b2e FUN_1446b6b2e body=26 status=ok
// SIG undefined FUN_1446b6b2e(void)

undefined8 FUN_1446b6b2e(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(*param_1 + 0x170))(param_1,param_3,0);
  return 0;
}



// FUNCTION 1446b6b48 FUN_1446b6b48 body=358 status=ok
// SIG undefined FUN_1446b6b48(void)

bool FUN_1446b6b48(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar4 = 0x3e5;
  if ((*(longlong *)(param_1 + 0x3b0) != 0) || (lVar2 = *param_3, *(int *)(lVar2 + 0x18) == 1))
  goto LAB_1446b6b7b;
  FUN_145fee2f2(*(undefined8 *)(lVar2 + 8),*(undefined4 *)(lVar2 + 0x10));
  *(undefined4 *)(lVar2 + 0x10) = 0;
  if (*(int *)(lVar2 + 0x14) != 0) {
    FUN_148fa5a02(lVar2 + 8,0);
  }
  lVar2 = *param_3;
  plVar3 = (longlong *)param_3[1];
  if (plVar3 == (longlong *)0x0) {
    *(longlong *)(param_1 + 0x3b0) = lVar2;
    plVar5 = *(longlong **)(param_1 + 0x3b8);
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x3b8) = 0;
LAB_1446b6c40:
      LOCK();
      plVar3 = plVar5 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar4 = *piVar1;
        UNLOCK();
joined_r0x0001446b6c30:
        if (iVar4 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong *)(param_1 + 0x3b0) = lVar2;
    plVar5 = *(longlong **)(param_1 + 0x3b8);
    if (plVar3 == plVar5) {
      LOCK();
      plVar5 = plVar3 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar4 = *piVar1;
        UNLOCK();
        plVar5 = plVar3;
        goto joined_r0x0001446b6c30;
      }
    }
    else {
      *(longlong **)(param_1 + 0x3b8) = plVar3;
      if (plVar5 != (longlong *)0x0) goto LAB_1446b6c40;
    }
  }
  QueryPerformanceCounter(&local_30);
  *(double *)(param_1 + 0x3c0) = (double)local_30.QuadPart * DAT_14c83f420 + 16777216.0;
  iVar4 = FUN_149908fa0(param_1);
  if (iVar4 == 0x3e5) {
    *(undefined4 *)(*param_3 + 0x18) = 1;
    iVar4 = 0x3e5;
  }
LAB_1446b6b7b:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar4 == 0x3e5 || iVar4 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446b6cb0 FUN_1446b6cb0 body=484 status=ok
// SIG undefined FUN_1446b6cb0(void)

void FUN_1446b6cb0(longlong param_1,LARGE_INTEGER param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_1a8 [32];
  LARGE_INTEGER local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined1 local_178;
  undefined **local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined **local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  int local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (*(longlong *)(param_1 + 0x3b0) != 0) {
    local_170 = &PTR_FUN_14b4c3b18;
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_148 = &PTR_FUN_14b4c3b20;
    local_140 = 0;
    uStack_138 = 0;
    local_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = FUN_1414a827a();
    local_f0 = 0;
    local_e8 = 0;
    local_110 = 0;
    uStack_108 = 0;
    local_e4 = 0xffffffff00000080;
    local_dc = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_94 = 0xffffffff00000080;
    local_8c = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    QueryPerformanceCounter(&local_188);
    local_58 = (int)((((double)local_188.QuadPart * DAT_14c83f420 + 16777216.0) -
                     *(double *)(param_1 + 0x3c0)) * 1000.0);
    local_17c = 0;
    local_178 = 0;
    local_188 = param_2;
    local_180 = param_3;
    FUN_149909f7a(&local_188,&local_170);
    iVar2 = FUN_1414a827a();
    if (local_118 == iVar2) {
      lVar1 = *(longlong *)(param_1 + 0x3b0);
      iVar2 = *(int *)(lVar1 + 0x10);
      *(uint *)(lVar1 + 0x10) = iVar2 + 1U;
      if (*(uint *)(lVar1 + 0x14) < iVar2 + 1U) {
        FUN_145fee31c((longlong *)(lVar1 + 8),iVar2);
      }
      lVar1 = *(longlong *)(lVar1 + 8);
      FUN_148da0cf6(lVar1 + (longlong)iVar2 * 0x120,&local_170);
      *(int *)(lVar1 + 0x118 + (longlong)iVar2 * 0x120) = local_58;
    }
    FUN_14124efea(&local_170);
  }
  if ((local_50 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446b6e96 FUN_1446b6e96 body=168 status=ok
// SIG undefined FUN_1446b6e96(void)

ulonglong FUN_1446b6e96(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 unaff_RDI;
  ulonglong uVar4;
  
  if ((param_1[0x76] == 0) || (*(int *)(param_1[0x76] + 0x18) != 1)) {
    uVar4 = 0;
  }
  else {
    if ((int)param_1[0x55] == 2) {
      FUN_145e3ad82(param_1 + 0x50);
    }
    FUN_149908b66(param_1);
    *(undefined4 *)(param_1[0x76] + 0x18) = 3;
    param_1[0x76] = 0;
    plVar3 = (longlong *)param_1[0x77];
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if (plVar3 != (longlong *)0x0) {
      param_1[0x77] = 0;
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
  (**(code **)(*param_1 + 0x1d8))(param_1,1);
  return uVar4 & 0xffffffff;
}



// FUNCTION 1446b6f3e FUN_1446b6f3e body=385 status=ok
// SIG undefined FUN_1446b6f3e(void)

undefined8 FUN_1446b6f3e(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  lVar4 = (**(code **)(*param_1 + 0x20))(param_1,param_3);
  uVar8 = 5;
  if (lVar4 == 0) {
    lVar5 = (**(code **)*param_1)(param_1,param_3,param_4);
    *(undefined4 *)(lVar5 + 0x120) = param_2;
    puVar6 = (undefined8 *)FUN_14001cc68(0x28,0x10);
    *puVar6 = &PTR_FUN_14bf01110;
    puVar6[1] = 0;
    puVar6[2] = 0;
    FUN_14990559a();
    puVar6[3] = DAT_14cc326f0;
    lVar4 = DAT_14cc326f8;
    puVar6[4] = DAT_14cc326f8;
    if (lVar4 != 0) {
      LOCK();
      piVar1 = (int *)(lVar4 + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar7[1] = (longlong)&DAT_100000001;
    *plVar7 = (longlong)&PTR_FUN_14bf02e40;
    plVar7[2] = (longlong)puVar6;
    *(undefined8 **)(lVar5 + 0x100) = puVar6;
    plVar2 = *(longlong **)(lVar5 + 0x108);
    if (plVar7 == plVar2) {
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
          iVar3 = *piVar1;
          UNLOCK();
joined_r0x0001446b707c:
          if (iVar3 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
    }
    else {
      *(longlong **)(lVar5 + 0x108) = plVar7;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar2 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar3 = *piVar1;
          UNLOCK();
          plVar7 = plVar2;
          goto joined_r0x0001446b707c;
        }
      }
    }
    iVar3 = FUN_1499093c0(lVar5,param_4);
    *(undefined1 *)(lVar5 + 0x38) = 0;
    if (iVar3 == 0) {
      FUN_149908c9c(param_1);
      uVar8 = 0;
      uVar9 = CONCAT71((uint7)(uint3)((uint)param_2 >> 8),1);
      goto LAB_1446b6f6e;
    }
    (**(code **)(*param_1 + 0x28))(param_1,param_3);
  }
  uVar9 = 0;
LAB_1446b6f6e:
  (**(code **)(*param_1 + 0x230))(param_1,param_3,uVar8);
  return uVar9;
}



// FUNCTION 1446b70c0 FUN_1446b70c0 body=240 status=ok
// SIG undefined FUN_1446b70c0(void)

undefined4 FUN_1446b70c0(longlong *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar6 = (**(code **)(*param_1 + 0x20))();
  if (lVar6 == 0) {
    uVar4 = 0;
    goto LAB_1446b7180;
  }
  local_30 = *(undefined8 *)(lVar6 + 0x100);
  local_28 = *(longlong **)(lVar6 + 0x108);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (DAT_14c892fc8 == param_4) {
    uVar5 = FUN_1489b8e3b(lVar6 + 0x28);
LAB_1446b7143:
    uVar4 = FUN_1446b71b1(&local_30,param_3,uVar5);
  }
  else {
    uVar4 = 0;
    uVar5 = 0;
    if (DAT_14c892fc4 == param_4) goto LAB_1446b7143;
  }
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_1446b7180:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446b71b1 FUN_1446b71b1 body=330 status=ok
// SIG undefined FUN_1446b71b1(void)

undefined8 FUN_1446b71b1(longlong *param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*param_1 == 0) || (plVar1 = *(longlong **)(*param_1 + 8), plVar1 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar1 + 0x98))(), cVar2 == '\0')) {
    uVar3 = 0;
    goto LAB_1446b721c;
  }
  if (param_3 == 0) {
    (**(code **)(**(longlong **)(*param_1 + 8) + 0x80))(*(longlong **)(*param_1 + 8),&local_40,1);
    puVar4 = local_40;
    if (local_38 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_30,&DAT_149e0625e,puVar4);
    if (&local_30 != param_2) goto LAB_1446b7286;
LAB_1446b72d7:
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    (**(code **)(**(longlong **)(*param_1 + 8) + 0x80))(*(longlong **)(*param_1 + 8),&local_40,0);
    puVar4 = local_40;
    if (local_38 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_30,L"%s:%d",puVar4,param_3);
    if (&local_30 == param_2) goto LAB_1446b72d7;
LAB_1446b7286:
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_30;
    local_30 = 0;
    *(undefined4 *)(param_2 + 1) = (undefined4)local_28;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_28._4_4_;
    local_28 = 0;
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = 1;
LAB_1446b721c:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1446b72fc FUN_1446b72fc body=234 status=ok
// SIG undefined FUN_1446b72fc(void)

undefined4 FUN_1446b72fc(undefined8 param_1,longlong param_2,ulonglong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_2 + 0x100);
  if (lVar3 == 0) {
    uVar5 = 0;
    goto LAB_1446b73b6;
  }
  local_28 = *(longlong **)(param_2 + 0x108);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_30 = lVar3;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (DAT_14c892fc8 == param_3) {
    uVar6 = FUN_1489b8e3b(param_2 + 0x28);
LAB_1446b7379:
    uVar5 = FUN_1446b71b1(&local_30,param_4,uVar6);
  }
  else {
    uVar5 = 0;
    uVar6 = 0;
    if (DAT_14c892fc4 == param_3) goto LAB_1446b7379;
  }
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
LAB_1446b73b6:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446b73e8 FUN_1446b73e8 body=383 status=ok
// SIG undefined FUN_1446b73e8(void)

ulonglong FUN_1446b73e8(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *unaff_RBP;
  ulonglong uVar7;
  longlong lVar8;
  
  lVar6 = (**(code **)(*param_1 + 0x20))();
  if ((lVar6 != 0) && (0 < (int)param_3[1])) {
    lVar8 = 0;
    do {
      unaff_RBP = (undefined8 *)(*param_3 + lVar8 * 0x10);
      iVar1 = *(int *)(lVar6 + 0x140);
      if ((longlong)iVar1 != 0) {
        puVar2 = *(undefined8 **)(*param_3 + lVar8 * 0x10);
        lVar3 = *(longlong *)(lVar6 + 0x138);
        uVar7 = 0;
        do {
          cVar5 = (**(code **)*puVar2)(puVar2,*(undefined8 *)(lVar3 + uVar7));
          if (cVar5 != '\0') {
            if ((int)(~uVar7 >> 4) != 0) {
              FUN_149909696(param_1,*unaff_RBP);
              goto LAB_1446b7526;
            }
            break;
          }
          uVar7 = uVar7 + 0x10;
        } while ((longlong)iVar1 * 0x10 != uVar7);
      }
      iVar1 = *(int *)(lVar6 + 0x140);
      *(uint *)(lVar6 + 0x140) = iVar1 + 1U;
      if (*(uint *)(lVar6 + 0x144) < iVar1 + 1U) {
        FUN_1413eac7e((longlong *)(lVar6 + 0x138),iVar1);
      }
      lVar3 = *(longlong *)(lVar6 + 0x138);
      *(undefined8 *)(lVar3 + (longlong)iVar1 * 0x10) = *unaff_RBP;
      lVar4 = unaff_RBP[1];
      *(longlong *)(lVar3 + 8 + (longlong)iVar1 * 0x10) = lVar4;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      FUN_149909696(param_1,*unaff_RBP);
      if (*(int *)(lVar6 + 0x114) < 1) {
        if (0 < *(int *)(lVar6 + 0x110)) {
          *(int *)(lVar6 + 0x110) = *(int *)(lVar6 + 0x110) + -1;
        }
      }
      else {
        *(int *)(lVar6 + 0x114) = *(int *)(lVar6 + 0x114) + -1;
      }
LAB_1446b7526:
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)param_3[1]);
  }
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),lVar6 != 0);
  (**(code **)(*param_1 + 0x3b8))(param_1,param_2,param_3,uVar7 & 0xffffffff);
  return uVar7 & 0xffffffff;
}



// FUNCTION 1446b7568 FUN_1446b7568 body=314 status=ok
// SIG undefined FUN_1446b7568(void)

ulonglong FUN_1446b7568(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  int iVar7;
  ulonglong unaff_RBP;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar6 = (**(code **)(*param_1 + 0x20))();
  if ((lVar6 != 0) && (0 < (int)param_3[1])) {
    lVar9 = 0;
    do {
      iVar1 = *(int *)(lVar6 + 0x140);
      if ((longlong)iVar1 != 0) {
        lVar2 = *param_3;
        puVar3 = *(undefined8 **)(lVar2 + lVar9 * 0x10);
        lVar4 = *(longlong *)(lVar6 + 0x138);
        lVar10 = 0;
        unaff_RBP = 0;
        do {
          cVar5 = (**(code **)*puVar3)(puVar3,*(undefined8 *)(lVar4 + lVar10));
          iVar7 = (int)unaff_RBP;
          if (cVar5 != '\0') {
            if (iVar7 != 1) {
              unaff_RBP = (ulonglong)(uint)-iVar7;
              FUN_14666d71e(lVar6 + 0x138,unaff_RBP);
              FUN_146036114(lVar6 + 0x138);
              FUN_149909740(param_1,*(undefined8 *)(lVar2 + lVar9 * 0x10));
              if (*(int *)(lVar6 + 0x114) < *(int *)(lVar6 + 0x30)) {
                *(int *)(lVar6 + 0x114) = *(int *)(lVar6 + 0x114) + 1;
              }
              else if (*(int *)(lVar6 + 0x110) < *(int *)(lVar6 + 0x34)) {
                *(int *)(lVar6 + 0x110) = *(int *)(lVar6 + 0x110) + 1;
              }
            }
            break;
          }
          unaff_RBP = (ulonglong)(iVar7 - 1);
          lVar10 = lVar10 + 0x10;
        } while ((longlong)iVar1 * 0x10 != lVar10);
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)param_3[1]);
  }
  uVar8 = CONCAT71((int7)(unaff_RBP >> 8),lVar6 != 0);
  (**(code **)(*param_1 + 1000))(param_1,param_2,param_3,uVar8 & 0xffffffff);
  return uVar8 & 0xffffffff;
}



// FUNCTION 1446b76a2 FUN_1446b76a2 body=758 status=ok
// SIG undefined FUN_1446b76a2(void)

void FUN_1446b76a2(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [8];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined1 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_145d1b8b4(param_2 + 0x38,0);
  uVar3 = FUN_1489b6cee(param_1,param_2 + 8);
  FUN_1489b6cee(uVar3,param_2 + 0xc);
  if ((char)param_1[2] == '\0') {
    iVar2 = *(int *)((longlong)param_1 + 0xc);
    if ((int)param_1[1] <= iVar2) goto LAB_1446b770f;
    *(int *)((longlong)param_1 + 0xc) = iVar2 + 1;
    cVar1 = *(char *)(*param_1 + (longlong)iVar2);
  }
  else {
LAB_1446b770f:
    *(undefined1 *)(param_1 + 2) = 1;
    cVar1 = '\0';
  }
  *(bool *)(param_2 + 0x10) = cVar1 != '\0';
  if ((char)param_1[2] == '\0') {
    iVar2 = *(int *)((longlong)param_1 + 0xc);
    if ((int)param_1[1] <= iVar2) goto LAB_1446b7738;
    *(int *)((longlong)param_1 + 0xc) = iVar2 + 1;
    cVar1 = *(char *)(*param_1 + (longlong)iVar2);
  }
  else {
LAB_1446b7738:
    *(undefined1 *)(param_1 + 2) = 1;
  }
  *(bool *)(param_2 + 0x12) = cVar1 != '\0';
  if ((char)param_1[2] == '\0') {
    iVar2 = *(int *)((longlong)param_1 + 0xc);
    if ((int)param_1[1] <= iVar2) goto LAB_1446b775f;
    *(int *)((longlong)param_1 + 0xc) = iVar2 + 1;
    cVar1 = *(char *)(*param_1 + (longlong)iVar2);
  }
  else {
LAB_1446b775f:
    *(undefined1 *)(param_1 + 2) = 1;
  }
  *(bool *)(param_2 + 0x13) = cVar1 != '\0';
  if ((char)param_1[2] == '\0') {
    iVar2 = *(int *)((longlong)param_1 + 0xc);
    if ((int)param_1[1] <= iVar2) goto LAB_1446b7786;
    *(int *)((longlong)param_1 + 0xc) = iVar2 + 1;
    cVar1 = *(char *)(*param_1 + (longlong)iVar2);
  }
  else {
LAB_1446b7786:
    *(undefined1 *)(param_1 + 2) = 1;
  }
  *(bool *)(param_2 + 0x14) = cVar1 != '\0';
  if ((char)param_1[2] == '\0') {
    iVar2 = *(int *)((longlong)param_1 + 0xc);
    if ((int)param_1[1] <= iVar2) goto LAB_1446b77ad;
    *(int *)((longlong)param_1 + 0xc) = iVar2 + 1;
    cVar1 = *(char *)(*param_1 + (longlong)iVar2);
  }
  else {
LAB_1446b77ad:
    *(undefined1 *)(param_1 + 2) = 1;
  }
  *(bool *)(param_2 + 0x11) = cVar1 != '\0';
  if ((char)param_1[2] == '\0') {
    iVar2 = *(int *)((longlong)param_1 + 0xc);
    if ((int)param_1[1] <= iVar2) goto LAB_1446b77d4;
    *(int *)((longlong)param_1 + 0xc) = iVar2 + 1;
    cVar1 = *(char *)(*param_1 + (longlong)iVar2);
  }
  else {
LAB_1446b77d4:
    *(undefined1 *)(param_1 + 2) = 1;
  }
  *(bool *)(param_2 + 0x15) = cVar1 != '\0';
  if ((char)param_1[2] == '\0') {
    iVar2 = *(int *)((longlong)param_1 + 0xc);
    if ((int)param_1[1] <= iVar2) goto LAB_1446b77fb;
    *(int *)((longlong)param_1 + 0xc) = iVar2 + 1;
    cVar1 = *(char *)(*param_1 + (longlong)iVar2);
  }
  else {
LAB_1446b77fb:
    *(undefined1 *)(param_1 + 2) = 1;
  }
  *(bool *)(param_2 + 0x16) = cVar1 != '\0';
  if ((char)param_1[2] == '\0') {
    iVar2 = *(int *)((longlong)param_1 + 0xc);
    if ((int)param_1[1] <= iVar2) goto LAB_1446b7822;
    *(int *)((longlong)param_1 + 0xc) = iVar2 + 1;
    cVar1 = *(char *)(*param_1 + (longlong)iVar2);
  }
  else {
LAB_1446b7822:
    *(undefined1 *)(param_1 + 2) = 1;
  }
  *(bool *)(param_2 + 0x17) = cVar1 != '\0';
  if ((char)param_1[2] == '\0') {
    iVar2 = *(int *)((longlong)param_1 + 0xc);
    if ((int)param_1[1] <= iVar2) goto LAB_1446b7849;
    *(int *)((longlong)param_1 + 0xc) = iVar2 + 1;
    cVar1 = *(char *)(*param_1 + (longlong)iVar2);
  }
  else {
LAB_1446b7849:
    *(undefined1 *)(param_1 + 2) = 1;
  }
  *(bool *)(param_2 + 0x18) = cVar1 != '\0';
  if ((char)param_1[2] == '\0') {
    iVar2 = *(int *)((longlong)param_1 + 0xc);
    if ((int)param_1[1] <= iVar2) goto LAB_1446b7870;
    *(int *)((longlong)param_1 + 0xc) = iVar2 + 1;
    cVar1 = *(char *)(*param_1 + (longlong)iVar2);
  }
  else {
LAB_1446b7870:
    *(undefined1 *)(param_1 + 2) = 1;
  }
  *(bool *)(param_2 + 0x19) = cVar1 != '\0';
  FUN_1489b6cee(param_1,param_2 + 0x30);
  if ((char)param_1[2] == '\0') {
    iVar2 = *(int *)((longlong)param_1 + 0xc) + 4;
    if ((int)param_1[1] < iVar2) goto LAB_1446b795e;
    uVar5 = *(uint *)(*param_1 + (longlong)*(int *)((longlong)param_1 + 0xc));
    uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    *(int *)((longlong)param_1 + 0xc) = iVar2;
    local_68 = 0;
    if ((int)uVar5 < 1) goto LAB_1446b796c;
    do {
      if ((char)param_1[2] == '\x01') goto LAB_1446b7962;
      local_90[0] = 0;
      local_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      local_6c = 0xffffffff;
      FUN_148f9a68e(param_1,&local_68);
      FUN_1489bbadf(param_1,local_90);
      if ((char)param_1[2] == '\0') {
        iVar2 = *(int *)((longlong)param_1 + 0xc);
        uVar4 = (ulonglong)iVar2;
        if (iVar2 < (int)param_1[1]) {
          *(int *)((longlong)param_1 + 0xc) = iVar2 + 1;
          uVar4 = (ulonglong)*(byte *)(*param_1 + uVar4);
        }
        else {
          *(undefined1 *)(param_1 + 2) = 1;
        }
        local_70 = (undefined1)uVar4;
      }
      FUN_145b2079c(param_2,local_68,local_90);
      FUN_140c3a2ac(local_90);
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    if ((*(byte *)(param_1 + 2) & 1) == 0) goto LAB_1446b796c;
  }
  else {
LAB_1446b795e:
    *(undefined1 *)(param_1 + 2) = 1;
  }
LAB_1446b7962:
  FUN_145d1b8b4(param_2 + 0x38,0);
LAB_1446b796c:
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1446b799a FUN_1446b799a body=113 status=ok
// SIG undefined FUN_1446b799a(void)

undefined4 FUN_1446b799a(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_140347020();
  if ((char)uVar2 != '\0') {
    if (*(longlong *)(param_1 + 0x100) != 0) {
      FUN_143e6b15c();
    }
    if (*(longlong *)(param_1 + 0x68) != 0) {
      FUN_143e6aa14(*(longlong *)(param_1 + 0x68) + 0x280,param_2);
    }
    plVar1 = *(longlong **)(param_1 + 0x78);
    if ((plVar1 != (longlong *)0x0) && (*(char *)(param_1 + 0x88) == '\x01')) {
      (**(code **)(*plVar1 + 0xe0))(plVar1,param_2);
    }
  }
  return uVar2;
}



// FUNCTION 1446b7a0b FUN_1446b7a0b body=69 status=ok
// SIG undefined FUN_1446b7a0b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446b7a0b(void)

{
  _DAT_14cc32648 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001446b7a4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc32650,1);
  return;
}



// FUNCTION 1446b7a50 FUN_1446b7a50 body=69 status=ok
// SIG undefined FUN_1446b7a50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446b7a50(void)

{
  _DAT_14cc32660 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001446b7a92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc32668,1);
  return;
}



// FUNCTION 1446b7a95 FUN_1446b7a95 body=69 status=ok
// SIG undefined FUN_1446b7a95(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446b7a95(void)

{
  _DAT_14cc32670 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001446b7ad7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc32678,1);
  return;
}



// FUNCTION 1446b7ada FUN_1446b7ada body=69 status=ok
// SIG undefined FUN_1446b7ada(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446b7ada(void)

{
  _DAT_14cc32688 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001446b7b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc32690,1);
  return;
}



// FUNCTION 1446b7b1f FUN_1446b7b1f body=69 status=ok
// SIG undefined FUN_1446b7b1f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446b7b1f(void)

{
  _DAT_14cc32698 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001446b7b61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc326a0,1);
  return;
}



// FUNCTION 1446b7b64 FUN_1446b7b64 body=69 status=ok
// SIG undefined FUN_1446b7b64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446b7b64(void)

{
  _DAT_14cc326a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001446b7ba6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc326b0,1);
  return;
}



// FUNCTION 1446b7ba9 FUN_1446b7ba9 body=69 status=ok
// SIG undefined FUN_1446b7ba9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446b7ba9(void)

{
  _DAT_14cc326b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001446b7beb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc326c0,1);
  return;
}



// FUNCTION 1446b7bee FUN_1446b7bee body=69 status=ok
// SIG undefined FUN_1446b7bee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446b7bee(void)

{
  _DAT_14cc326c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001446b7c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc326d0,1);
  return;
}



// FUNCTION 1446b7c33 FUN_1446b7c33 body=69 status=ok
// SIG undefined FUN_1446b7c33(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446b7c33(void)

{
  _DAT_14cc326d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001446b7c75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc326e0,1);
  return;
}



// FUNCTION 1446b7c78 FUN_1446b7c78 body=2859 status=ok
// SIG undefined FUN_1446b7c78(void)

undefined8 FUN_1446b7c78(longlong param_1)

{
  int *piVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14cc326e8 == '\0') {
    DAT_14cc326e8 = '\x01';
    local_88 = &DAT_14c872ce8;
    FUN_14052bb08(DAT_14c872ce0,L"OnlineSubsystemNull",L"bAutoLoginAtStartup",&DAT_14c767fd0);
    local_88 = &DAT_14c872ce8;
    FUN_14052bb08(DAT_14c872ce0,L"OnlineSubsystemNull",L"bSupportExternalUI",&DAT_14cc32658);
    local_88 = &DAT_14c872ce8;
    FUN_14052bb08(DAT_14c872ce0,L"OnlineSubsystemNull",L"bRequireShowLoginUI",&DAT_14cc3263a);
    local_88 = &DAT_14c872ce8;
    FUN_14052bb08(DAT_14c872ce0,L"OnlineSubsystemNull",L"bForceShowLoginUIUserChange",&DAT_14cc32680
                 );
    local_88 = &DAT_14c872ce8;
    FUN_14052bb08(DAT_14c872ce0,L"OnlineSubsystemNull",L"bRequireLoginCredentials",&DAT_14cc3263b);
    local_88 = &DAT_14c872ce8;
    FUN_14052bb08(DAT_14c872ce0,L"OnlineSubsystemNull",L"bAddUserNumToNullId",&DAT_14cc32639);
    local_88 = &DAT_14c872ce8;
    FUN_14052bb08(DAT_14c872ce0,L"OnlineSubsystemNull",L"bForceStableNullId",&DAT_14cc32638);
    local_88 = &DAT_14c872ce8;
    FUN_14052bb08(DAT_14c872ce0,L"OnlineSubsystemNull",L"bForceOfflineMode",&DAT_14cc3263c);
    local_88 = &DAT_14c872ce8;
    FUN_14052bb08(DAT_14c872ce0,L"OnlineSubsystemNull",L"bOnlineRequiresSecondLogin",&DAT_14cc3263d)
    ;
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar2 = FUN_14054d46e(&DAT_14c846b20,L"StableNullID");
    if (cVar2 != '\0') {
      DAT_14cc32638 = 1;
    }
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0x180,0x10);
  FUN_145e22948(puVar3);
  *puVar3 = &PTR_LAB_14bf02310;
  puVar3[1] = &PTR_FUN_14bf02348;
  puVar3[0x2f] = param_1;
  *(undefined8 **)(param_1 + 0x170) = puVar3;
  LOCK();
  UNLOCK();
  iVar8 = DAT_14cc32640 + 1;
  DAT_14cc32640 = DAT_14cc32640 + 1;
  FUN_1400021e4(param_1 + 0x90,&local_70);
  puVar9 = &DAT_149dfb77a;
  if (local_68 != 0) {
    puVar9 = local_70;
  }
  FUN_140002266(&local_60,L"OnlineAsyncTaskThreadNull %s(%d)",puVar9,iVar8);
  puVar9 = &DAT_149dfb77a;
  if (local_58 != 0) {
    puVar9 = local_60;
  }
  local_78 = 0;
  local_80 = 0;
  local_88 = (undefined8 *)0xffffffffffffffff;
  uVar4 = FUN_14275bfaa(*(undefined8 *)(param_1 + 0x170),puVar9,0x20000,0);
  *(undefined8 *)(param_1 + 0x178) = uVar4;
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_70 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  lVar5 = FUN_14001cc68(0x3c8,0x10);
  FUN_14990b4b2(lVar5,param_1);
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14bf033d0;
  plVar6[2] = lVar5;
  *(longlong *)(param_1 + 0xd8) = lVar5;
  plVar7 = *(longlong **)(param_1 + 0xe0);
  if (plVar6 == plVar7) {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar6 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar8 = *piVar1;
        UNLOCK();
joined_r0x0001446b7f9d:
        if (iVar8 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  else {
    *(longlong **)(param_1 + 0xe0) = plVar6;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar7 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar8 = *piVar1;
        UNLOCK();
        plVar6 = plVar7;
        goto joined_r0x0001446b7f9d;
      }
    }
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0x90,0x10);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *(undefined4 *)(puVar3 + 3) = 2;
  *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x2c) = 0;
  puVar3[6] = 2;
  *puVar3 = &PTR_FUN_14bf027c0;
  puVar3[7] = param_1;
  puVar3[0xc] = 0;
  *(undefined4 *)(puVar3 + 0xd) = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar3 + 0x74) = 0;
  puVar3[0x10] = 0;
  *(undefined4 *)(puVar3 + 0x11) = 0;
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14bf033f0;
  plVar6[2] = (longlong)puVar3;
  *(undefined8 **)(param_1 + 0x100) = puVar3;
  plVar7 = *(longlong **)(param_1 + 0x108);
  if (plVar6 == plVar7) {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar6 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar8 = *piVar1;
        UNLOCK();
joined_r0x0001446b8083:
        if (iVar8 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  else {
    *(longlong **)(param_1 + 0x108) = plVar6;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar7 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar8 = *piVar1;
        UNLOCK();
        plVar6 = plVar7;
        goto joined_r0x0001446b8083;
      }
    }
  }
  lVar5 = FUN_14001cc68(0x230,0x10);
  FUN_149905fa6(lVar5,param_1);
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14bf03410;
  plVar6[2] = lVar5;
  *(longlong *)(param_1 + 0x110) = lVar5;
  plVar7 = *(longlong **)(param_1 + 0x118);
  if (plVar6 == plVar7) {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar6 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar8 = *piVar1;
        UNLOCK();
joined_r0x0001446b811e:
        if (iVar8 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  else {
    *(longlong **)(param_1 + 0x118) = plVar6;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar7 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar8 = *piVar1;
        UNLOCK();
        plVar6 = plVar7;
        goto joined_r0x0001446b811e;
      }
    }
  }
  if (DAT_14cc32658 == '\x01') {
    puVar3 = (undefined8 *)FUN_14001cc68(0x58,0x10);
    puVar3[1] = 0;
    puVar3[2] = 0;
    *(undefined4 *)(puVar3 + 3) = 2;
    *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x2c) = 0x200000000;
    *(undefined8 *)((longlong)puVar3 + 0x34) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x3c) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x44) = 0;
    puVar3[9] = 2;
    *puVar3 = &PTR_FUN_14bf00730;
    puVar3[10] = param_1;
    plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar6[1] = (longlong)&DAT_100000001;
    *plVar6 = (longlong)&PTR_FUN_14bf03430;
    plVar6[2] = (longlong)puVar3;
    *(undefined8 **)(param_1 + 0x120) = puVar3;
    plVar7 = *(longlong **)(param_1 + 0x128);
    if (plVar6 == plVar7) {
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar6 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar8 = *piVar1;
          UNLOCK();
joined_r0x0001446b81fc:
          if (iVar8 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
    }
    else {
      *(longlong **)(param_1 + 0x128) = plVar6;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar7 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar8 = *piVar1;
          UNLOCK();
          plVar6 = plVar7;
          goto joined_r0x0001446b81fc;
        }
      }
    }
  }
  lVar5 = FUN_14001cc68(0xd8,0x10);
  FUN_1499038f6(lVar5,param_1);
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14bf03450;
  plVar6[2] = lVar5;
  *(longlong *)(param_1 + 0x130) = lVar5;
  plVar7 = *(longlong **)(param_1 + 0x138);
  if (plVar6 == plVar7) {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar6 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar8 = *piVar1;
        UNLOCK();
joined_r0x0001446b8297:
        if (iVar8 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  else {
    *(longlong **)(param_1 + 0x138) = plVar6;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar7 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar8 = *piVar1;
        UNLOCK();
        plVar6 = plVar7;
        goto joined_r0x0001446b8297;
      }
    }
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0xe8,0x10);
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 2;
  *puVar3 = &PTR_FUN_14b4cee50;
  puVar3[4] = param_1;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  FUN_14608756e(puVar3 + 0x13);
  puVar3[0x1b] = 0;
  puVar3[0x1c] = 0;
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14bf03470;
  plVar6[2] = (longlong)puVar3;
  *(undefined8 **)(param_1 + 0xe8) = puVar3;
  plVar7 = *(longlong **)(param_1 + 0xf0);
  if (plVar6 == plVar7) {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar6 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar8 = *piVar1;
        UNLOCK();
joined_r0x0001446b836e:
        if (iVar8 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  else {
    *(longlong **)(param_1 + 0xf0) = plVar6;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar7 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar8 = *piVar1;
        UNLOCK();
        plVar6 = plVar7;
        goto joined_r0x0001446b836e;
      }
    }
  }
  lVar5 = FUN_14001cc68(0x88,0x10);
  FUN_14990a60e(lVar5,param_1);
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14bf03490;
  plVar7[2] = lVar5;
  if ((lVar5 != 0) &&
     (((*(longlong *)(lVar5 + 0x20) == 0 || (*(longlong *)(lVar5 + 0x28) == 0)) ||
      (*(int *)(*(longlong *)(lVar5 + 0x28) + 8) < 1)))) {
    if (plVar7 == (longlong *)0x0) {
      *(longlong *)(lVar5 + 0x20) = lVar5;
      plVar6 = *(longlong **)(lVar5 + 0x28);
      if (plVar6 != (longlong *)0x0) {
LAB_1446b8744:
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
        *(longlong **)(lVar5 + 0x28) = plVar7;
        if (plVar7 != (longlong *)0x0) goto LAB_1446b875d;
      }
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      *(longlong *)(lVar5 + 0x20) = lVar5;
      if (*(longlong **)(lVar5 + 0x28) != plVar7) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        plVar6 = *(longlong **)(lVar5 + 0x28);
        if (plVar6 != (longlong *)0x0) goto LAB_1446b8744;
        *(longlong **)(lVar5 + 0x28) = plVar7;
      }
LAB_1446b875d:
      LOCK();
      plVar6 = plVar7 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
  *(longlong *)(param_1 + 0x140) = lVar5;
  plVar6 = *(longlong **)(param_1 + 0x148);
  if (plVar7 == plVar6) {
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar7 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar8 = *piVar1;
        UNLOCK();
joined_r0x0001446b8446:
        if (iVar8 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  else {
    *(longlong **)(param_1 + 0x148) = plVar7;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar6 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar8 = *piVar1;
        UNLOCK();
        plVar7 = plVar6;
        goto joined_r0x0001446b8446;
      }
    }
  }
  lVar5 = FUN_14001cc68(0x100,0x10);
  FUN_14990760c(lVar5,param_1);
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14bf034b0;
  plVar7[2] = lVar5;
  if ((lVar5 != 0) &&
     (((*(longlong *)(lVar5 + 0x68) == 0 || (*(longlong *)(lVar5 + 0x70) == 0)) ||
      (*(int *)(*(longlong *)(lVar5 + 0x70) + 8) < 1)))) {
    if (plVar7 == (longlong *)0x0) {
      *(longlong *)(lVar5 + 0x68) = lVar5;
      plVar6 = *(longlong **)(lVar5 + 0x70);
      if (plVar6 != (longlong *)0x0) {
LAB_1446b8529:
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
        *(longlong **)(lVar5 + 0x70) = plVar7;
        if (plVar7 != (longlong *)0x0) goto LAB_1446b853e;
      }
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      *(longlong *)(lVar5 + 0x68) = lVar5;
      if (*(longlong **)(lVar5 + 0x70) != plVar7) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        plVar6 = *(longlong **)(lVar5 + 0x70);
        if (plVar6 != (longlong *)0x0) goto LAB_1446b8529;
        *(longlong **)(lVar5 + 0x70) = plVar7;
      }
LAB_1446b853e:
      LOCK();
      plVar6 = plVar7 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
  *(longlong *)(param_1 + 0x150) = lVar5;
  plVar6 = *(longlong **)(param_1 + 0x158);
  if (plVar7 == plVar6) {
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar7 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar8 = *piVar1;
        UNLOCK();
        plVar6 = plVar7;
        goto joined_r0x0001446b85aa;
      }
    }
  }
  else {
    *(longlong **)(param_1 + 0x158) = plVar7;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar6 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar8 = *piVar1;
        UNLOCK();
joined_r0x0001446b85aa:
        if (iVar8 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_LAB_14bf01f90;
  FUN_140056680(puVar3 + 3,&DAT_14bf01fb8);
  *puVar3 = &PTR_FUN_14bf00b30;
  *(undefined4 *)(puVar3 + 5) = 0;
  puVar3[10] = 0;
  *(undefined4 *)(puVar3 + 0xb) = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar3 + 100) = 0;
  puVar3[0xe] = 0;
  *(undefined4 *)(puVar3 + 0xf) = 0;
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14bf034d0;
  plVar7[2] = (longlong)puVar3;
  if ((puVar3 != (undefined8 *)0x0) &&
     (((puVar3[1] == 0 || (puVar3[2] == 0)) || (*(int *)(puVar3[2] + 8) < 1)))) {
    if (plVar7 == (longlong *)0x0) {
      puVar3[1] = puVar3;
      plVar6 = (longlong *)puVar3[2];
      if (plVar6 != (longlong *)0x0) {
LAB_1446b868c:
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
        puVar3[2] = plVar7;
        if (plVar7 != (longlong *)0x0) goto LAB_1446b86a1;
      }
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      puVar3[1] = puVar3;
      if ((longlong *)puVar3[2] != plVar7) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        plVar6 = (longlong *)puVar3[2];
        if (plVar6 != (longlong *)0x0) goto LAB_1446b868c;
        puVar3[2] = plVar7;
      }
LAB_1446b86a1:
      LOCK();
      plVar6 = plVar7 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
  *(undefined8 **)(param_1 + 0x160) = puVar3;
  plVar6 = *(longlong **)(param_1 + 0x168);
  if (plVar7 == plVar6) {
    if (plVar7 == (longlong *)0x0) goto LAB_1446b8718;
    LOCK();
    plVar6 = plVar7 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_1446b8718;
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar8 = *piVar1;
    UNLOCK();
    plVar6 = plVar7;
  }
  else {
    *(longlong **)(param_1 + 0x168) = plVar7;
    if (plVar6 == (longlong *)0x0) goto LAB_1446b8718;
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 != 0) goto LAB_1446b8718;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar8 = *piVar1;
    UNLOCK();
  }
  if (iVar8 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
LAB_1446b8718:
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446b87a4 FUN_1446b87a4 body=724 status=ok
// SIG undefined FUN_1446b87a4(void)

undefined8 FUN_1446b87a4(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  FUN_145857cae();
  plVar3 = *(longlong **)(param_1 + 0x178);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x30))(plVar3,1);
    *(undefined8 *)(param_1 + 0x178) = 0;
  }
  plVar3 = *(longlong **)(param_1 + 0x170);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,1);
    *(undefined8 *)(param_1 + 0x170) = 0;
  }
  if ((*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) && (*(char *)(param_1 + 0xf8) == '\x01'))
  {
    (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x150) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x158);
    if (plVar3 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x150) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x150) = 0;
      *(undefined8 *)(param_1 + 0x158) = 0;
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
  plVar3 = (longlong *)(param_1 + 0xe8);
  if (*(longlong *)(param_1 + 0x140) != 0) {
    plVar4 = *(longlong **)(param_1 + 0x148);
    if (plVar4 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x140) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x140) = 0;
      *(undefined8 *)(param_1 + 0x148) = 0;
      LOCK();
      plVar2 = plVar4 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  }
  if (*plVar3 != 0) {
    plVar4 = *(longlong **)(param_1 + 0xf0);
    if (plVar4 == (longlong *)0x0) {
      *plVar3 = 0;
    }
    else {
      *plVar3 = 0;
      *(undefined8 *)(param_1 + 0xf0) = 0;
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  }
  if (*(longlong *)(param_1 + 0x130) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x138);
    if (plVar3 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x130) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x130) = 0;
      *(undefined8 *)(param_1 + 0x138) = 0;
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
  if (*(longlong *)(param_1 + 0x110) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x118);
    if (plVar3 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x110) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x110) = 0;
      *(undefined8 *)(param_1 + 0x118) = 0;
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
  if (*(longlong *)(param_1 + 0x100) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x108);
    if (plVar3 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x100) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x100) = 0;
      *(undefined8 *)(param_1 + 0x108) = 0;
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
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    plVar3 = *(longlong **)(param_1 + 0xe0);
    if (plVar3 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xd8) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0xd8) = 0;
      *(undefined8 *)(param_1 + 0xe0) = 0;
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
  if (*(longlong *)(param_1 + 0x160) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x168);
    if (plVar3 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x160) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x160) = 0;
      *(undefined8 *)(param_1 + 0x168) = 0;
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
  return 1;
}



// FUNCTION 1446b8a78 FUN_1446b8a78 body=103 status=ok
// SIG undefined FUN_1446b8a78(void)

longlong * FUN_1446b8a78(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_2;
  *param_1 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  plVar1 = (longlong *)param_2[2];
  param_1[2] = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 3) = (int)param_2[3];
  plVar1 = (longlong *)param_2[4];
  param_1[4] = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 5) = (int)param_2[5];
  lVar2 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = lVar2;
  return param_1;
}



// FUNCTION 1446b8adf FUN_1446b8adf body=59 status=ok
// SIG undefined FUN_1446b8adf(void)

void FUN_1446b8adf(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cc326f8;
  if (DAT_14cc326f8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cc326f8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001446b8b0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1446b8b1a FUN_1446b8b1a body=125 status=ok
// SIG undefined FUN_1446b8b1a(void)

undefined8 * FUN_1446b8b1a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14bf01fc0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1446b8b79;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1446b8b79:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446b8bac FUN_1446b8bac body=181 status=ok
// SIG undefined FUN_1446b8bac(void)

void FUN_1446b8bac(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14bf01fc0;
  puVar2[3] = 0;
  *(undefined4 *)(puVar2 + 4) = 0;
  FUN_148fba690(puVar2 + 3,param_1 + 0x18);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 5,iVar1,0);
    memcpy((void *)puVar2[5],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  return;
}



// FUNCTION 1446b8c62 FUN_1446b8c62 body=181 status=ok
// SIG undefined FUN_1446b8c62(void)

void FUN_1446b8c62(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14bf01fc0;
  puVar2[3] = 0;
  *(undefined4 *)(puVar2 + 4) = 0;
  FUN_148fba690(puVar2 + 3,param_1 + 0x18);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 5,iVar1,0);
    memcpy((void *)puVar2[5],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  return;
}



// FUNCTION 1446b8d18 FUN_1446b8d18 body=221 status=ok
// SIG undefined FUN_1446b8d18(void)

void FUN_1446b8d18(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_149e020b0;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14bf01fc0;
  (p_Var2->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  p_Var2->EntryCount = 0;
  FUN_148fba690(&(p_Var2->ProcessLocksList).Blink,param_1 + 0x18);
  p_Var2->Flags = 0;
  p_Var2->CreatorBackTraceIndexHigh = 0;
  p_Var2->SpareWORD = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  p_Var2[1].Type = (short)iVar1;
  p_Var2[1].CreatorBackTraceIndex = (short)((uint)iVar1 >> 0x10);
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)&p_Var2[1].field_0x4 = 0;
  }
  else {
    FUN_1446dd670(&p_Var2->Flags,iVar1,0);
    memcpy(*(void **)&p_Var2->Flags,_Src,(longlong)iVar1 * 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001446b8de3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1446b8e00 FUN_1446b8e00 body=20 status=ok
// SIG undefined FUN_1446b8e00(void)

undefined1 FUN_1446b8e00(longlong param_1)

{
  FUN_1446b8e14(param_1 + 0x18);
  return 1;
}



// FUNCTION 1446b8e14 FUN_1446b8e14 body=235 status=ok
// SIG undefined FUN_1446b8e14(void)

void FUN_1446b8e14(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [40];
  undefined1 local_60 [64];
  longlong *local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_18 = (longlong *)FUN_14001cc68(0x40,0x10);
  local_18[1] = (longlong)&DAT_100000001;
  *local_18 = (longlong)&PTR_FUN_14b4c2410;
  local_20 = local_18 + 2;
  local_18[2] = (longlong)&PTR_FUN_14b438d60;
  local_18[3] = 0;
  local_18[4] = 0;
  local_18[6] = 0;
  local_18[7] = 0;
  *(undefined1 *)(local_18 + 5) = 3;
  FUN_1489b73bc(local_60,param_1 + 2);
  plVar3 = (longlong *)*param_1;
  if (plVar3 != (longlong *)0x0 && (int)param_1[1] != 0) {
    (**(code **)(*plVar3 + 0x60))(plVar3,local_60,&local_20);
  }
  FUN_145c8db80(local_60);
  plVar3 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446b8f00 FUN_1446b8f00 body=125 status=ok
// SIG undefined FUN_1446b8f00(void)

undefined8 * FUN_1446b8f00(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14bf02030;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1446b8f5f;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1446b8f5f:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446b8f92 FUN_1446b8f92 body=181 status=ok
// SIG undefined FUN_1446b8f92(void)

void FUN_1446b8f92(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14bf02030;
  puVar2[3] = 0;
  *(undefined4 *)(puVar2 + 4) = 0;
  FUN_14666fadc(puVar2 + 3,param_1 + 0x18);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 5,iVar1,0);
    memcpy((void *)puVar2[5],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  return;
}



// FUNCTION 1446b9048 FUN_1446b9048 body=181 status=ok
// SIG undefined FUN_1446b9048(void)

void FUN_1446b9048(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14bf02030;
  puVar2[3] = 0;
  *(undefined4 *)(puVar2 + 4) = 0;
  FUN_14666fadc(puVar2 + 3,param_1 + 0x18);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 5,iVar1,0);
    memcpy((void *)puVar2[5],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  return;
}



// FUNCTION 1446b90fe FUN_1446b90fe body=221 status=ok
// SIG undefined FUN_1446b90fe(void)

void FUN_1446b90fe(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_149e020b0;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14bf02030;
  (p_Var2->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  p_Var2->EntryCount = 0;
  FUN_14666fadc(&(p_Var2->ProcessLocksList).Blink,param_1 + 0x18);
  p_Var2->Flags = 0;
  p_Var2->CreatorBackTraceIndexHigh = 0;
  p_Var2->SpareWORD = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  p_Var2[1].Type = (short)iVar1;
  p_Var2[1].CreatorBackTraceIndex = (short)((uint)iVar1 >> 0x10);
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)&p_Var2[1].field_0x4 = 0;
  }
  else {
    FUN_1446dd670(&p_Var2->Flags,iVar1,0);
    memcpy(*(void **)&p_Var2->Flags,_Src,(longlong)iVar1 * 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001446b91c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1446b91e6 FUN_1446b91e6 body=20 status=ok
// SIG undefined FUN_1446b91e6(void)

undefined1 FUN_1446b91e6(longlong param_1)

{
  FUN_1446b91fa(param_1 + 0x18);
  return 1;
}



// FUNCTION 1446b91fa FUN_1446b91fa body=106 status=ok
// SIG undefined FUN_1446b91fa(void)

void FUN_1446b91fa(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_78 [40];
  undefined1 local_50 [64];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1489b73bc(local_50,param_1 + 2);
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0 && (int)param_1[1] != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,local_50);
  }
  FUN_145c8db80(local_50);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446b9266 FUN_1446b9266 body=375 status=ok
// SIG undefined FUN_1446b9266(void)

longlong * FUN_1446b9266(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  char cVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)FUN_14001cc68(400,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14bf020b0;
  plVar1 = plVar5 + 2;
  FUN_145aa403c(plVar1,DAT_14cb8e198,param_3);
  plVar5[2] = (longlong)&PTR_FUN_14bf020d0;
  plVar5[0x10] = (longlong)&PTR_FUN_14bf022f8;
  plVar5[0x1d] = 0;
  plVar5[0x1e] = 0;
  plVar5[0x1f] = 0;
  plVar5[0x20] = 0;
  *(undefined1 *)(plVar5 + 0x21) = 0;
  plVar5[0x22] = 0;
  plVar5[0x23] = 0;
  plVar5[0x24] = 0;
  plVar5[0x25] = 0;
  plVar5[0x26] = 0;
  plVar5[0x27] = 0;
  plVar5[0x28] = 0;
  plVar5[0x29] = 0;
  plVar5[0x2a] = 0;
  plVar5[0x2b] = 0;
  plVar5[0x2c] = 0;
  plVar5[0x2d] = 0;
  plVar5[0x2e] = 0;
  plVar5[0x2f] = 0;
  plVar5[0x30] = 0;
  plVar5[0x31] = 0;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  cVar4 = (**(code **)(*plVar1 + 8))(plVar1);
  if (cVar4 == '\0') {
    (**(code **)(*plVar1 + 0x150))(plVar1);
  }
  else {
    cVar4 = (**(code **)(*plVar1 + 0x140))(plVar1);
    if (cVar4 != '\0') {
      *param_2 = (longlong)plVar1;
      param_2[1] = (longlong)plVar5;
      if (plVar5 == (longlong *)0x0) {
        return param_2;
      }
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 != 0) {
        return param_2;
      }
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 != 0) {
        return param_2;
      }
      (**(code **)(*plVar5 + 0x10))(plVar5);
      return param_2;
    }
    (**(code **)(plVar5[2] + 0x150))(plVar1);
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
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1446b93de FUN_1446b93de body=111 status=ok
// SIG undefined FUN_1446b93de(void)

undefined8 * FUN_1446b93de(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14bf02850;
  plVar1 = param_1 + 5;
  if (*(int *)(param_1 + 6) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1446b942f;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1446b942f:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446b9462 FUN_1446b9462 body=129 status=ok
// SIG undefined FUN_1446b9462(void)

void FUN_1446b9462(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bf02850;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  FUN_14990ce40(puVar1 + 5,param_1 + 0x28);
  return;
}



// FUNCTION 1446b94e4 FUN_1446b94e4 body=129 status=ok
// SIG undefined FUN_1446b94e4(void)

void FUN_1446b94e4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bf02850;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  FUN_14990ce40(puVar1 + 5,param_1 + 0x28);
  return;
}



// FUNCTION 1446b9566 FUN_1446b9566 body=163 status=ok
// SIG undefined FUN_1446b9566(void)

void FUN_1446b9566(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bf02850;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = *(DWORD *)(param_1 + 0x20);
  p_Var1->Flags = 0;
  p_Var1->CreatorBackTraceIndexHigh = 0;
  p_Var1->SpareWORD = 0;
  p_Var1[1].Type = 0;
  p_Var1[1].CreatorBackTraceIndex = 0;
  FUN_14990ce40(&p_Var1->Flags,param_1 + 0x28);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001446b95fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1446b9614 FUN_1446b9614 body=20 status=ok
// SIG undefined FUN_1446b9614(void)

undefined1 FUN_1446b9614(longlong param_1)

{
  FUN_1446b9628(param_1 + 0x18);
  return 1;
}



// FUNCTION 1446b9628 FUN_1446b9628 body=934 status=ok
// SIG undefined FUN_1446b9628(void)

void FUN_1446b9628(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  longlong local_c0 [2];
  longlong local_b0 [2];
  longlong local_a0 [2];
  undefined8 *local_90;
  int local_88;
  undefined4 uStack_84;
  longlong local_80;
  longlong local_70;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar3 = *param_1;
  uVar13 = (uint)DAT_14cc32680;
  lVar6 = param_1[1];
  plVar4 = *(longlong **)(lVar3 + 0x50);
  (**(code **)(*plVar4 + 0x80))(plVar4,&local_90);
  puVar7 = local_90;
  plVar4 = (longlong *)CONCAT44(uStack_84,local_88);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    plVar5 = (longlong *)CONCAT44(uStack_84,local_88);
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
  }
  if (puVar7 == (undefined8 *)0x0) goto LAB_1446b96b1;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  local_90 = (undefined8 *)0x0;
  local_88 = 0;
  FUN_1446efa72(&local_90,0,3,0x10);
  puVar8 = local_90;
  local_88 = 3;
  *local_90 = &PTR_LAB_14bf02930;
  local_90[1] = 0;
  *(undefined4 *)(local_90 + 2) = 0;
  FUN_14990ce40(local_90 + 1,param_1 + 2);
  iVar10 = local_88;
  puVar9 = local_90;
  LOCK();
  UNLOCK();
  lVar12 = DAT_14c758608 + 1;
  lVar11 = DAT_14c758608 + 1;
  if (lVar12 == 0) {
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 2;
    lVar11 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar11;
  puVar8[3] = lVar12;
  *puVar8 = &PTR_FUN_14bf028c0;
  puVar8[4] = lVar3;
  puVar8[5] = FUN_149904be4;
  local_90 = (undefined8 *)0x0;
  local_88 = 0;
  if (local_50 == 0) {
LAB_1446b97c4:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_1446b97c4;
  }
  local_58 = puVar9;
  local_50 = iVar10;
  if (local_88 == 0) {
LAB_1446b981f:
    if (local_90 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_90 != (undefined8 *)0x0) {
    (**(code **)*local_90)(local_90,0);
    FUN_1446efa72(&local_90,0,0,0x10);
    local_88 = 0;
    goto LAB_1446b981f;
  }
  FUN_140056680(local_a0,L"DummyId");
  FUN_140056680(local_b0,L"DummyUser");
  FUN_140056680(local_c0,L"ShowLoginUI");
  local_c8 = 0;
  FUN_1489ba396(&local_90,local_c0,local_b0,local_a0);
  FUN_1446b4d5c(puVar7,uVar13 + (int)lVar6,&local_90,&local_58);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if (local_90 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_c0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_b0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50 != 0) {
    if (local_58 == (undefined8 *)0x0) goto LAB_1446b96b1;
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1446b96b1:
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
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446b99d0 FUN_1446b99d0 body=149 status=ok
// SIG undefined FUN_1446b99d0(void)

undefined8 * FUN_1446b99d0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14bf029a0;
  plVar4 = param_1 + 6;
  if (*(int *)(param_1 + 7) != 0) {
    puVar3 = (undefined8 *)*plVar4;
    if (puVar3 == (undefined8 *)0x0) goto LAB_1446b9a21;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar4,0,0,0x10);
    *(undefined4 *)(param_1 + 7) = 0;
  }
  if (*plVar4 != 0) {
    FUN_1400020a8();
  }
LAB_1446b9a21:
  plVar4 = (longlong *)param_1[4];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446b9a7a FUN_1446b9a7a body=152 status=ok
// SIG undefined FUN_1446b9a7a(void)

void FUN_1446b9a7a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bf029a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)((longlong)puVar1 + 0x2c) = *(undefined1 *)(param_1 + 0x2c);
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  FUN_14990ce40(puVar1 + 6,param_1 + 0x30);
  return;
}



// FUNCTION 1446b9b12 FUN_1446b9b12 body=152 status=ok
// SIG undefined FUN_1446b9b12(void)

void FUN_1446b9b12(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bf029a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)((longlong)puVar1 + 0x2c) = *(undefined1 *)(param_1 + 0x2c);
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  FUN_14990ce40(puVar1 + 6,param_1 + 0x30);
  return;
}



// FUNCTION 1446b9baa FUN_1446b9baa body=191 status=ok
// SIG undefined FUN_1446b9baa(void)

void FUN_1446b9baa(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bf029a0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)&p_Var1->CreatorBackTraceIndexHigh = *(undefined1 *)(param_1 + 0x2c);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1[1].Type = 0;
  p_Var1[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var1[1].field_0x4 = 0;
  *(undefined4 *)&p_Var1[1].CriticalSection = 0;
  FUN_14990ce40(p_Var1 + 1,param_1 + 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001446b9c59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1446b9c74 FUN_1446b9c74 body=20 status=ok
// SIG undefined FUN_1446b9c74(void)

undefined1 FUN_1446b9c74(longlong param_1)

{
  FUN_1446b9c88(param_1 + 0x18);
  return 1;
}



// FUNCTION 1446b9c88 FUN_1446b9c88 body=150 status=ok
// SIG undefined FUN_1446b9c88(void)

void FUN_1446b9c88(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_60;
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30 [16];
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58[0] = *(undefined1 *)((longlong)param_1 + 0x14);
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  FUN_144a5dc74(local_30);
  local_20 = 0x13;
  uVar1 = *(undefined4 *)(param_1 + 2);
  local_68 = *param_1;
  local_60 = param_1[1];
  if (local_60 != 0) {
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
  }
  FUN_14990d1e2(param_1 + 3,&local_68,uVar1,local_58);
  FUN_145c8db80(local_58);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446b9d20 FUN_1446b9d20 body=29 status=ok
// SIG undefined FUN_1446b9d20(void)

undefined8 FUN_1446b9d20(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446b9d52 FUN_1446b9d52 body=93 status=ok
// SIG undefined FUN_1446b9d52(void)

void FUN_1446b9d52(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438870;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bf02a10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1446b9db0 FUN_1446b9db0 body=93 status=ok
// SIG undefined FUN_1446b9db0(void)

void FUN_1446b9db0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438870;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bf02a10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1446b9e0e FUN_1446b9e0e body=126 status=ok
// SIG undefined FUN_1446b9e0e(void)

void FUN_1446b9e0e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b438870;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bf02a10;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001446b9e7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1446b9e9e FUN_1446b9e9e body=35 status=ok
// SIG undefined FUN_1446b9e9e(void)

undefined8 FUN_1446b9e9e(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0xa8))();
  return 1;
}



// FUNCTION 1446b9ec2 FUN_1446b9ec2 body=149 status=ok
// SIG undefined FUN_1446b9ec2(void)

undefined8 * FUN_1446b9ec2(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14bf02aa0;
  plVar4 = param_1 + 5;
  if (*(int *)(param_1 + 6) != 0) {
    puVar3 = (undefined8 *)*plVar4;
    if (puVar3 == (undefined8 *)0x0) goto LAB_1446b9f13;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar4,0,0,0x10);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  if (*plVar4 != 0) {
    FUN_1400020a8();
  }
LAB_1446b9f13:
  plVar4 = (longlong *)param_1[4];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446b9f6c FUN_1446b9f6c body=140 status=ok
// SIG undefined FUN_1446b9f6c(void)

void FUN_1446b9f6c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bf02aa0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  FUN_148dbc940(puVar1 + 5,param_1 + 0x28);
  return;
}



// FUNCTION 1446b9ff8 FUN_1446b9ff8 body=140 status=ok
// SIG undefined FUN_1446b9ff8(void)

void FUN_1446b9ff8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bf02aa0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  FUN_148dbc940(puVar1 + 5,param_1 + 0x28);
  return;
}



// FUNCTION 1446ba084 FUN_1446ba084 body=179 status=ok
// SIG undefined FUN_1446ba084(void)

void FUN_1446ba084(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bf02aa0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  p_Var1->Flags = 0;
  p_Var1->CreatorBackTraceIndexHigh = 0;
  p_Var1->SpareWORD = 0;
  p_Var1[1].Type = 0;
  p_Var1[1].CreatorBackTraceIndex = 0;
  FUN_148dbc940(&p_Var1->Flags,param_1 + 0x28);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001446ba127. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1446ba142 FUN_1446ba142 body=20 status=ok
// SIG undefined FUN_1446ba142(void)

undefined1 FUN_1446ba142(longlong param_1)

{
  FUN_1446ba156(param_1 + 0x18);
  return 1;
}



// FUNCTION 1446ba156 FUN_1446ba156 body=146 status=ok
// SIG undefined FUN_1446ba156(void)

void FUN_1446ba156(undefined8 *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140056680(local_68,L"RevokeAuthToken not implemented");
  FUN_1489b73bc(local_58,local_68);
  plVar1 = (longlong *)param_1[2];
  if (plVar1 != (longlong *)0x0 && *(int *)(param_1 + 3) != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,*param_1,local_58);
  }
  FUN_145c8db80(local_58);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446ba1ea FUN_1446ba1ea body=125 status=ok
// SIG undefined FUN_1446ba1ea(void)

undefined8 * FUN_1446ba1ea(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14bf02b10;
  plVar1 = param_1 + 6;
  if (*(int *)(param_1 + 7) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1446ba23b;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 7) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1446ba23b:
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446ba27c FUN_1446ba27c body=208 status=ok
// SIG undefined FUN_1446ba27c(void)

void FUN_1446ba27c(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e02020;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14bf02b10;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
  }
  puVar2[6] = 0;
  *(undefined4 *)(puVar2 + 7) = 0;
  FUN_147ca3f96(puVar2 + 6,param_1 + 0x30);
  *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(param_1 + 0x40);
  return;
}



// FUNCTION 1446ba34c FUN_1446ba34c body=208 status=ok
// SIG undefined FUN_1446ba34c(void)

void FUN_1446ba34c(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e02020;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14bf02b10;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
  }
  puVar2[6] = 0;
  *(undefined4 *)(puVar2 + 7) = 0;
  FUN_147ca3f96(puVar2 + 6,param_1 + 0x30);
  *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(param_1 + 0x40);
  return;
}



// FUNCTION 1446ba41c FUN_1446ba41c body=266 status=ok
// SIG undefined FUN_1446ba41c(void)

void FUN_1446ba41c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_149e02020;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14bf02b10;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var2->EntryCount = 0;
  p_Var2->ContentionCount = 0;
  DVar1 = *(DWORD *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  p_Var2->Flags = DVar1;
  if ((longlong)(int)DVar1 == 0) {
    p_Var2->CreatorBackTraceIndexHigh = 0;
    p_Var2->SpareWORD = 0;
  }
  else {
    FUN_1446dd670(&p_Var2->EntryCount,DVar1,0);
    memcpy(*(void **)&p_Var2->EntryCount,_Src,(longlong)(int)DVar1 * 2);
  }
  p_Var2[1].Type = 0;
  p_Var2[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var2[1].field_0x4 = 0;
  *(undefined4 *)&p_Var2[1].CriticalSection = 0;
  FUN_147ca3f96(p_Var2 + 1,param_1 + 0x30);
  *(undefined4 *)&p_Var2[1].ProcessLocksList.Flink = *(undefined4 *)(param_1 + 0x40);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001446ba510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1446ba526 FUN_1446ba526 body=20 status=ok
// SIG undefined FUN_1446ba526(void)

undefined8 FUN_1446ba526(longlong param_1)

{
  FUN_1446ba54e(param_1 + 0x18);
  return 0;
}



// FUNCTION 1446ba53a FUN_1446ba53a body=20 status=ok
// SIG undefined FUN_1446ba53a(void)

undefined1 FUN_1446ba53a(longlong param_1)

{
  FUN_1446ba54e(param_1 + 0x18);
  return 1;
}



// FUNCTION 1446ba54e FUN_1446ba54e body=140 status=ok
// SIG undefined FUN_1446ba54e(void)

void FUN_1446ba54e(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *param_1;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_1499074ee(param_1 + 1);
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0 && (int)param_1[4] != 0) {
    (**(code **)(*plVar2 + 0x60))(plVar2,1,local_28);
  }
  FUN_14990ea1a(lVar1 + 0x30,(int)param_1[5]);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446ba5dc FUN_1446ba5dc body=137 status=ok
// SIG undefined FUN_1446ba5dc(void)

undefined8 * FUN_1446ba5dc(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14bf02b80;
  plVar1 = param_1 + 6;
  if (*(int *)(param_1 + 7) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1446ba62d;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 7) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1446ba62d:
  FUN_1447a1747(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446ba67a FUN_1446ba67a body=203 status=ok
// SIG undefined FUN_1446ba67a(void)

void FUN_1446ba67a(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e02020;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14bf02b80;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  }
  else {
    FUN_140b856de(puVar2 + 4,iVar1,0);
    FUN_140b8566a(puVar2[4],uVar3,iVar1);
  }
  puVar2[6] = 0;
  *(undefined4 *)(puVar2 + 7) = 0;
  FUN_14990efd8(puVar2 + 6,param_1 + 0x30);
  *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(param_1 + 0x40);
  return;
}



// FUNCTION 1446ba746 FUN_1446ba746 body=203 status=ok
// SIG undefined FUN_1446ba746(void)

void FUN_1446ba746(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e02020;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14bf02b80;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  }
  else {
    FUN_140b856de(puVar2 + 4,iVar1,0);
    FUN_140b8566a(puVar2[4],uVar3,iVar1);
  }
  puVar2[6] = 0;
  *(undefined4 *)(puVar2 + 7) = 0;
  FUN_14990efd8(puVar2 + 6,param_1 + 0x30);
  *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(param_1 + 0x40);
  return;
}



// FUNCTION 1446ba812 FUN_1446ba812 body=261 status=ok
// SIG undefined FUN_1446ba812(void)

void FUN_1446ba812(longlong param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_149e02020;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14bf02b80;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var2->EntryCount = 0;
  p_Var2->ContentionCount = 0;
  DVar1 = *(DWORD *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  p_Var2->Flags = DVar1;
  if (DVar1 == 0) {
    p_Var2->CreatorBackTraceIndexHigh = 0;
    p_Var2->SpareWORD = 0;
  }
  else {
    FUN_140b856de(&p_Var2->EntryCount,DVar1,0);
    uVar4._0_4_ = p_Var2->EntryCount;
    uVar4._4_4_ = p_Var2->ContentionCount;
    FUN_140b8566a(uVar4,uVar3,DVar1);
  }
  p_Var2[1].Type = 0;
  p_Var2[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var2[1].field_0x4 = 0;
  *(undefined4 *)&p_Var2[1].CriticalSection = 0;
  FUN_14990efd8(p_Var2 + 1,param_1 + 0x30);
  *(undefined4 *)&p_Var2[1].ProcessLocksList.Flink = *(undefined4 *)(param_1 + 0x40);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001446ba901. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1446ba918 FUN_1446ba918 body=20 status=ok
// SIG undefined FUN_1446ba918(void)

undefined8 FUN_1446ba918(longlong param_1)

{
  FUN_1446ba940(param_1 + 0x18);
  return 0;
}



// FUNCTION 1446ba92c FUN_1446ba92c body=20 status=ok
// SIG undefined FUN_1446ba92c(void)

undefined1 FUN_1446ba92c(longlong param_1)

{
  FUN_1446ba940(param_1 + 0x18);
  return 1;
}



// FUNCTION 1446ba940 FUN_1446ba940 body=327 status=ok
// SIG undefined FUN_1446ba940(void)

/* WARNING: Removing unreachable block (ram,0x0001446ba9fe) */

void FUN_1446ba940(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *param_1;
  local_78 = 0;
  uStack_70 = 0;
  if ((longlong)(int)param_1[2] != 0) {
    lVar5 = param_1[1];
    lVar7 = (longlong)(int)param_1[2] << 4;
    do {
      local_88 = 0;
      uStack_80 = 0;
      FUN_1499074ee(lVar5,&local_88);
      uVar3 = uStack_70;
      lVar6 = (longlong)(int)uStack_70;
      uVar4 = (int)uStack_70 + 1;
      uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
      if (uStack_70._4_4_ < uVar4) {
        FUN_1447a1bd6(&local_78,uVar3 & 0xffffffff);
      }
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(local_78 + lVar6) = 0;
      *(undefined8 *)(local_78 + lVar6) = local_88;
      *(undefined4 *)(local_78 + 8 + lVar6) = (undefined4)uStack_80;
      *(undefined4 *)(local_78 + 0xc + lVar6) = uStack_80._4_4_;
      uStack_80 = 0;
      local_88 = 0;
      lVar5 = lVar5 + 0x10;
      lVar7 = lVar7 + -0x10;
    } while (lVar7 != 0);
  }
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0 && (int)param_1[4] != 0) {
    (**(code **)(*plVar2 + 0x60))(plVar2,1,&local_78);
  }
  FUN_14990ea1a(lVar1 + 0x30,(int)param_1[5]);
  FUN_1447a1747(local_78,uStack_70 & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1446baa88 FUN_1446baa88 body=150 status=ok
// SIG undefined FUN_1446baa88(void)

undefined8 * FUN_1446baa88(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bf02bf0;
  plVar3 = (longlong *)param_1[0xc];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[10];
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
  param_1[3] = &PTR_FUN_14b4ce010;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[5];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446bab32 FUN_1446bab32 body=159 status=ok
// SIG undefined FUN_1446bab32(void)

void FUN_1446bab32(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 7) {
    FUN_1446efa72(param_2,0,7,0x10);
    *(undefined4 *)(param_2 + 1) = 7;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bf02bf0;
  FUN_14990c3da(puVar1 + 3,param_1 + 0x18);
  puVar1[3] = &PTR_FUN_14bf01f20;
  puVar1[9] = *(undefined8 *)(param_1 + 0x48);
  lVar2 = *(longlong *)(param_1 + 0x50);
  puVar1[10] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar1[0xb] = *(undefined8 *)(param_1 + 0x58);
  lVar2 = *(longlong *)(param_1 + 0x60);
  puVar1[0xc] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1446babd2 FUN_1446babd2 body=159 status=ok
// SIG undefined FUN_1446babd2(void)

void FUN_1446babd2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 7) {
    FUN_1446efa72(param_2,0,7,0x10);
    *(undefined4 *)(param_2 + 1) = 7;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bf02bf0;
  FUN_14990c3da(puVar1 + 3,param_1 + 0x18);
  puVar1[3] = &PTR_FUN_14bf01f20;
  puVar1[9] = *(undefined8 *)(param_1 + 0x48);
  lVar2 = *(longlong *)(param_1 + 0x50);
  puVar1[10] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar1[0xb] = *(undefined8 *)(param_1 + 0x58);
  lVar2 = *(longlong *)(param_1 + 0x60);
  puVar1[0xc] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1446bac72 FUN_1446bac72 body=197 status=ok
// SIG undefined FUN_1446bac72(void)

void FUN_1446bac72(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 7) {
    FUN_1446efa72(param_2 + 1,0,7,0x10);
    param_2[1].LockCount = 7;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bf02bf0;
  FUN_14990c3da(&(p_Var1->ProcessLocksList).Blink,param_1 + 0x18);
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)&PTR_FUN_14bf01f20;
  p_Var1[1].ProcessLocksList.Blink = *(_LIST_ENTRY **)(param_1 + 0x48);
  lVar2 = *(longlong *)(param_1 + 0x50);
  p_Var1[1].EntryCount = (int)lVar2;
  p_Var1[1].ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  p_Var1[1].Flags = (int)uVar3;
  p_Var1[1].CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1[1].SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  lVar2 = *(longlong *)(param_1 + 0x60);
  p_Var1[2].Type = (short)lVar2;
  p_Var1[2].CreatorBackTraceIndex = (short)((ulonglong)lVar2 >> 0x10);
  *(int *)&p_Var1[2].field_0x4 = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001446bad27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1446bad42 FUN_1446bad42 body=20 status=ok
// SIG undefined FUN_1446bad42(void)

undefined1 FUN_1446bad42(longlong param_1)

{
  FUN_1446bad56(param_1 + 0x18);
  return 1;
}



// FUNCTION 1446bad56 FUN_1446bad56 body=163 status=ok
// SIG undefined FUN_1446bad56(void)

void FUN_1446bad56(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar3 = *(undefined8 **)(param_1 + 0x48);
  if (puVar3 != (undefined8 *)0x0) {
    iVar5 = *(int *)(puVar3 + 1);
    do {
      if (iVar5 == 0) goto LAB_1446badc5;
      LOCK();
      iVar2 = *(int *)(puVar3 + 1);
      bVar6 = iVar5 == iVar2;
      if (bVar6) {
        *(int *)(puVar3 + 1) = iVar5 + 1;
        iVar2 = iVar5;
      }
      iVar5 = iVar2;
      UNLOCK();
    } while (!bVar6);
    lVar4 = *(longlong *)(param_1 + 0x40);
    if (lVar4 != 0) {
      local_28 = *(undefined8 *)(param_1 + 0x30);
      local_20 = *(longlong *)(param_1 + 0x38);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
        UNLOCK();
      }
      FUN_149907b2c(lVar4,param_1,&local_28);
    }
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3);
      LOCK();
      piVar1 = (int *)((longlong)puVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
LAB_1446badc5:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1446bae0a FUN_1446bae0a body=178 status=ok
// SIG undefined FUN_1446bae0a(void)

undefined8 * FUN_1446bae0a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bf02c60;
  plVar3 = param_1 + 0xb;
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1446bae5b;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_1446bae5b:
  plVar3 = (longlong *)param_1[10];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  param_1[3] = &PTR_FUN_14b4ce010;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[5];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446baed0 FUN_1446baed0 body=164 status=ok
// SIG undefined FUN_1446baed0(void)

void FUN_1446baed0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 7) {
    FUN_1446efa72(param_2,0,7,0x10);
    *(undefined4 *)(param_2 + 1) = 7;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bf02c60;
  FUN_14990c3da(puVar1 + 3,param_1 + 0x18);
  puVar1[3] = &PTR_FUN_14bf01f20;
  puVar1[9] = *(undefined8 *)(param_1 + 0x48);
  lVar2 = *(longlong *)(param_1 + 0x50);
  puVar1[10] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[0xb] = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  FUN_14666fadc(puVar1 + 0xb,param_1 + 0x58);
  return;
}



// FUNCTION 1446baf74 FUN_1446baf74 body=164 status=ok
// SIG undefined FUN_1446baf74(void)

void FUN_1446baf74(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 7) {
    FUN_1446efa72(param_2,0,7,0x10);
    *(undefined4 *)(param_2 + 1) = 7;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bf02c60;
  FUN_14990c3da(puVar1 + 3,param_1 + 0x18);
  puVar1[3] = &PTR_FUN_14bf01f20;
  puVar1[9] = *(undefined8 *)(param_1 + 0x48);
  lVar2 = *(longlong *)(param_1 + 0x50);
  puVar1[10] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[0xb] = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  FUN_14666fadc(puVar1 + 0xb,param_1 + 0x58);
  return;
}



// FUNCTION 1446bb018 FUN_1446bb018 body=203 status=ok
// SIG undefined FUN_1446bb018(void)

void FUN_1446bb018(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 7) {
    FUN_1446efa72(param_2 + 1,0,7,0x10);
    param_2[1].LockCount = 7;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bf02c60;
  FUN_14990c3da(&(p_Var1->ProcessLocksList).Blink,param_1 + 0x18);
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)&PTR_FUN_14bf01f20;
  p_Var1[1].ProcessLocksList.Blink = *(_LIST_ENTRY **)(param_1 + 0x48);
  lVar2 = *(longlong *)(param_1 + 0x50);
  p_Var1[1].EntryCount = (int)lVar2;
  p_Var1[1].ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  p_Var1[1].Flags = 0;
  p_Var1[1].CreatorBackTraceIndexHigh = 0;
  p_Var1[1].SpareWORD = 0;
  p_Var1[2].Type = 0;
  p_Var1[2].CreatorBackTraceIndex = 0;
  FUN_14666fadc(&p_Var1[1].Flags,param_1 + 0x58);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001446bb0d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1446bb0ee FUN_1446bb0ee body=20 status=ok
// SIG undefined FUN_1446bb0ee(void)

undefined1 FUN_1446bb0ee(longlong param_1)

{
  FUN_1446bb102(param_1 + 0x18);
  return 1;
}



// FUNCTION 1446bb102 FUN_1446bb102 body=163 status=ok
// SIG undefined FUN_1446bb102(void)

void FUN_1446bb102(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x38);
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1446bb15b;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    lVar4 = *(longlong *)(param_1 + 0x30);
    if (lVar4 != 0) {
      local_30 = 0;
      local_28 = 0;
      FUN_14666fadc(&local_30,param_1 + 0x40);
      FUN_1499081b4(lVar4,&local_30);
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
LAB_1446bb15b:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1446bb1a6 FUN_1446bb1a6 body=196 status=ok
// SIG undefined FUN_1446bb1a6(void)

undefined8 * FUN_1446bb1a6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bf02cd0;
  plVar3 = param_1 + 0x11;
  if (*(int *)(param_1 + 0x12) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1446bb200;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x12) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_1446bb200:
  FUN_14990c4da(param_1 + 0xb);
  plVar3 = (longlong *)param_1[10];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  param_1[3] = &PTR_FUN_14b4ce010;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[5];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446bb27e FUN_1446bb27e body=184 status=ok
// SIG undefined FUN_1446bb27e(void)

void FUN_1446bb27e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 10) {
    FUN_1446efa72(param_2,0,10,0x10);
    *(undefined4 *)(param_2 + 1) = 10;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bf02cd0;
  FUN_14990c3da(puVar1 + 3,param_1 + 0x18);
  puVar1[3] = &PTR_FUN_14bf01f20;
  puVar1[9] = *(undefined8 *)(param_1 + 0x48);
  lVar2 = *(longlong *)(param_1 + 0x50);
  puVar1[10] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  FUN_1499084ba(puVar1 + 0xb,param_1 + 0x58);
  puVar1[0x11] = 0;
  *(undefined4 *)(puVar1 + 0x12) = 0;
  FUN_148fba690(puVar1 + 0x11,param_1 + 0x88);
  return;
}



// FUNCTION 1446bb336 FUN_1446bb336 body=184 status=ok
// SIG undefined FUN_1446bb336(void)

void FUN_1446bb336(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 10) {
    FUN_1446efa72(param_2,0,10,0x10);
    *(undefined4 *)(param_2 + 1) = 10;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bf02cd0;
  FUN_14990c3da(puVar1 + 3,param_1 + 0x18);
  puVar1[3] = &PTR_FUN_14bf01f20;
  puVar1[9] = *(undefined8 *)(param_1 + 0x48);
  lVar2 = *(longlong *)(param_1 + 0x50);
  puVar1[10] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  FUN_1499084ba(puVar1 + 0xb,param_1 + 0x58);
  puVar1[0x11] = 0;
  *(undefined4 *)(puVar1 + 0x12) = 0;
  FUN_148fba690(puVar1 + 0x11,param_1 + 0x88);
  return;
}



// FUNCTION 1446bb3ee FUN_1446bb3ee body=223 status=ok
// SIG undefined FUN_1446bb3ee(void)

void FUN_1446bb3ee(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 10) {
    FUN_1446efa72(param_2 + 1,0,10,0x10);
    param_2[1].LockCount = 10;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bf02cd0;
  FUN_14990c3da(&(p_Var1->ProcessLocksList).Blink,param_1 + 0x18);
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)&PTR_FUN_14bf01f20;
  p_Var1[1].ProcessLocksList.Blink = *(_LIST_ENTRY **)(param_1 + 0x48);
  lVar2 = *(longlong *)(param_1 + 0x50);
  p_Var1[1].EntryCount = (int)lVar2;
  p_Var1[1].ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  FUN_1499084ba(&p_Var1[1].Flags,param_1 + 0x58);
  p_Var1[2].Flags = 0;
  p_Var1[2].CreatorBackTraceIndexHigh = 0;
  p_Var1[2].SpareWORD = 0;
  p_Var1[3].Type = 0;
  p_Var1[3].CreatorBackTraceIndex = 0;
  FUN_148fba690(&p_Var1[2].Flags,param_1 + 0x88);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001446bb4bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1446bb4d8 FUN_1446bb4d8 body=20 status=ok
// SIG undefined FUN_1446bb4d8(void)

undefined1 FUN_1446bb4d8(longlong param_1)

{
  FUN_1446bb4ec(param_1 + 0x18);
  return 1;
}



// FUNCTION 1446bb4ec FUN_1446bb4ec body=663 status=ok
// SIG undefined FUN_1446bb4ec(void)

void FUN_1446bb4ec(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  bool bVar14;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong *local_80;
  undefined **local_78;
  longlong local_70;
  undefined8 uStack_68;
  longlong local_60;
  undefined8 uStack_58;
  undefined1 local_50 [8];
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar4 = *(longlong **)(param_1 + 0x38);
  if (plVar4 != (longlong *)0x0) {
    iVar5 = (int)plVar4[1];
    do {
      if (iVar5 == 0) goto LAB_1446bb54a;
      LOCK();
      iVar11 = (int)plVar4[1];
      bVar14 = iVar5 == iVar11;
      if (bVar14) {
        *(int *)(plVar4 + 1) = iVar5 + 1;
        iVar11 = iVar5;
      }
      iVar5 = iVar11;
      UNLOCK();
    } while (!bVar14);
    if (*(longlong *)(param_1 + 0x30) != 0) {
      iVar5 = *(int *)(param_1 + 0x20);
      uVar9 = 0;
      iVar11 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar11 = 0;
      }
      if (0 < iVar11) {
        if (iVar5 == 0) {
          puVar6 = &DAT_149dfb77a;
        }
        else {
          puVar6 = *(undefined2 **)(param_1 + 0x18);
        }
        lVar12 = 0;
        uVar9 = 0;
        do {
          uVar10 = ((uint)(ushort)puVar6[lVar12] +
                   (uint)(0x19 < (ushort)puVar6[lVar12] - 0x61) * 0x20) - 0x20;
          uVar13 = (uint)(uVar9 >> 8) ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar9 ^ uVar10) & 0xff) * 4);
          uVar9 = (ulonglong)
                  (uVar13 >> 8 ^
                  *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar13 & 0xff ^ uVar10 >> 8 & 0xff) * 4));
          lVar12 = lVar12 + 1;
        } while (iVar11 != (int)lVar12);
      }
      plVar7 = (longlong *)FUN_14990f05c(*(longlong *)(param_1 + 0x30) + 0x80,uVar9,param_1);
      iVar5 = (int)plVar7[1];
      *(uint *)(plVar7 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)plVar7 + 0xc) < iVar5 + 1U) {
        FUN_14666fb5a(plVar7,iVar5);
      }
      lVar12 = *plVar7;
      lVar8 = (longlong)iVar5 * 0x30;
      *(undefined ***)(lVar12 + lVar8) = &PTR_FUN_14b438d60;
      puVar3 = (undefined8 *)(lVar12 + 8 + lVar8);
      *puVar3 = 0;
      puVar3[1] = 0;
      *(undefined1 *)(lVar12 + 0x18 + lVar8) = 0;
      puVar3 = (undefined8 *)(lVar12 + 0x20 + lVar8);
      *puVar3 = 0;
      puVar3[1] = 0;
      FUN_1446b5c8c(&local_78,param_1 + 0x40,param_1 + 0x40);
      FUN_149907d72(lVar12 + lVar8,&local_78);
      local_78 = &PTR_FUN_14b438dd0;
      FUN_141215b86(local_48,local_40);
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      plVar7 = (longlong *)FUN_14001cc68(0x40,0x10);
      plVar7[1] = (longlong)&DAT_100000001;
      *plVar7 = (longlong)&PTR_FUN_14b4c2410;
      FUN_14584247e(plVar7 + 2,lVar12 + lVar8);
      local_78 = (undefined **)CONCAT71(local_78._1_7_,1);
      local_70 = 0;
      uStack_68 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_88 = plVar7 + 2;
      local_80 = plVar7;
      FUN_144a5dc74(local_50);
      local_40 = CONCAT31(local_40._1_3_,0x13);
      plVar7 = *(longlong **)(param_1 + 0x70);
      if (plVar7 != (longlong *)0x0 && *(int *)(param_1 + 0x78) != 0) {
        (**(code **)(*plVar7 + 0x60))(plVar7,&local_78,&local_88);
      }
      FUN_145c8db80(&local_78);
      plVar7 = local_80;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_80 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_80)(local_80);
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
  }
LAB_1446bb54a:
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1446bb784 FUN_1446bb784 body=111 status=ok
// SIG undefined FUN_1446bb784(void)

undefined8 * FUN_1446bb784(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14bf02d40;
  plVar1 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1446bb7d5;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1446bb7d5:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446bb808 FUN_1446bb808 body=115 status=ok
// SIG undefined FUN_1446bb808(void)

void FUN_1446bb808(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bf02d40;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_14666fadc(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 1446bb87c FUN_1446bb87c body=115 status=ok
// SIG undefined FUN_1446bb87c(void)

void FUN_1446bb87c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bf02d40;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_14666fadc(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 1446bb8f0 FUN_1446bb8f0 body=149 status=ok
// SIG undefined FUN_1446bb8f0(void)

void FUN_1446bb8f0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bf02d40;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  p_Var1->EntryCount = 0;
  FUN_14666fadc(&(p_Var1->ProcessLocksList).Blink,param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001446bb976. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1446bb990 FUN_1446bb990 body=20 status=ok
// SIG undefined FUN_1446bb990(void)

undefined1 FUN_1446bb990(longlong param_1)

{
  FUN_1446bb9a4(param_1 + 0x18);
  return 1;
}



// FUNCTION 1446bb9a4 FUN_1446bb9a4 body=109 status=ok
// SIG undefined FUN_1446bb9a4(void)

void FUN_1446bb9a4(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_78 [40];
  undefined1 local_50 [64];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1489b7342(local_50,L"User is invalid");
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0 && (int)param_1[1] != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,local_50);
  }
  FUN_145c8db80(local_50);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446bba12 FUN_1446bba12 body=111 status=ok
// SIG undefined FUN_1446bba12(void)

undefined8 * FUN_1446bba12(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14bf02dd0;
  plVar1 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1446bba63;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1446bba63:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446bba96 FUN_1446bba96 body=115 status=ok
// SIG undefined FUN_1446bba96(void)

void FUN_1446bba96(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bf02dd0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_14666fadc(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 1446bbb0a FUN_1446bbb0a body=115 status=ok
// SIG undefined FUN_1446bbb0a(void)

void FUN_1446bbb0a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bf02dd0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_14666fadc(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 1446bbb7e FUN_1446bbb7e body=149 status=ok
// SIG undefined FUN_1446bbb7e(void)

void FUN_1446bbb7e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bf02dd0;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  p_Var1->EntryCount = 0;
  FUN_14666fadc(&(p_Var1->ProcessLocksList).Blink,param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001446bbc04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1446bbc1e FUN_1446bbc1e body=20 status=ok
// SIG undefined FUN_1446bbc1e(void)

undefined1 FUN_1446bbc1e(longlong param_1)

{
  FUN_1446bbc32(param_1 + 0x18);
  return 1;
}



// FUNCTION 1446bbc32 FUN_1446bbc32 body=126 status=ok
// SIG undefined FUN_1446bbc32(void)

void FUN_1446bbc32(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30 [16];
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[0] = 1;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  FUN_144a5dc74(local_30);
  local_20 = 0x13;
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0 && (int)param_1[1] != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,local_58);
  }
  FUN_145c8db80(local_58);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446bbcb2 FUN_1446bbcb2 body=111 status=ok
// SIG undefined FUN_1446bbcb2(void)

undefined8 * FUN_1446bbcb2(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14bf02fb0;
  plVar1 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1446bbd03;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1446bbd03:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446bbd36 FUN_1446bbd36 body=115 status=ok
// SIG undefined FUN_1446bbd36(void)

void FUN_1446bbd36(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bf02fb0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_147ca3f96(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 1446bbdaa FUN_1446bbdaa body=115 status=ok
// SIG undefined FUN_1446bbdaa(void)

void FUN_1446bbdaa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bf02fb0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_147ca3f96(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 1446bbe1e FUN_1446bbe1e body=149 status=ok
// SIG undefined FUN_1446bbe1e(void)

void FUN_1446bbe1e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bf02fb0;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  p_Var1->EntryCount = 0;
  FUN_147ca3f96(&(p_Var1->ProcessLocksList).Blink,param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001446bbea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1446bbebe FUN_1446bbebe body=20 status=ok
// SIG undefined FUN_1446bbebe(void)

undefined1 FUN_1446bbebe(longlong param_1)

{
  FUN_1446bbed2(param_1 + 0x18);
  return 1;
}



// FUNCTION 1446bbed2 FUN_1446bbed2 body=116 status=ok
// SIG undefined FUN_1446bbed2(void)

void FUN_1446bbed2(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140056680(local_20,L"FOnlineStoreV2Null::QueryCategories Not Implemented");
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0 && (int)param_1[1] != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,0,local_20);
  }
  if (local_20[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446bbf48 FUN_1446bbf48 body=111 status=ok
// SIG undefined FUN_1446bbf48(void)

undefined8 * FUN_1446bbf48(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14bf03080;
  plVar1 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1446bbf99;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1446bbf99:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446bbfcc FUN_1446bbfcc body=115 status=ok
// SIG undefined FUN_1446bbfcc(void)

void FUN_1446bbfcc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bf03080;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_14990fb90(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 1446bc040 FUN_1446bc040 body=115 status=ok
// SIG undefined FUN_1446bc040(void)

void FUN_1446bc040(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bf03080;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_14990fb90(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 1446bc0b4 FUN_1446bc0b4 body=149 status=ok
// SIG undefined FUN_1446bc0b4(void)

void FUN_1446bc0b4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bf03080;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  p_Var1->EntryCount = 0;
  FUN_14990fb90(&(p_Var1->ProcessLocksList).Blink,param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001446bc13a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1446bc154 FUN_1446bc154 body=20 status=ok
// SIG undefined FUN_1446bc154(void)

undefined1 FUN_1446bc154(longlong param_1)

{
  FUN_1446bc168(param_1 + 0x18);
  return 1;
}



// FUNCTION 1446bc168 FUN_1446bc168 body=164 status=ok
// SIG undefined FUN_1446bc168(void)

void FUN_1446bc168(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140056680(local_20,L"FOnlineStoreV2Null::QueryOffersByFilter User invalid");
  local_38 = 0;
  uStack_30 = 0;
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0 || (int)param_1[1] == 0) {
    uVar2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x60))(plVar1,0,&local_38,local_20);
    uVar2 = uStack_30 & 0xffffffff;
  }
  FUN_1447a1747(local_38,uVar2);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_20[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446bc20e FUN_1446bc20e body=111 status=ok
// SIG undefined FUN_1446bc20e(void)

undefined8 * FUN_1446bc20e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14bf03160;
  plVar1 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1446bc25f;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1446bc25f:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446bc292 FUN_1446bc292 body=115 status=ok
// SIG undefined FUN_1446bc292(void)

void FUN_1446bc292(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bf03160;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_14990fb90(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 1446bc306 FUN_1446bc306 body=115 status=ok
// SIG undefined FUN_1446bc306(void)

void FUN_1446bc306(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bf03160;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_14990fb90(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 1446bc37a FUN_1446bc37a body=149 status=ok
// SIG undefined FUN_1446bc37a(void)

void FUN_1446bc37a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bf03160;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  p_Var1->EntryCount = 0;
  FUN_14990fb90(&(p_Var1->ProcessLocksList).Blink,param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001446bc400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1446bc41a FUN_1446bc41a body=20 status=ok
// SIG undefined FUN_1446bc41a(void)

undefined1 FUN_1446bc41a(longlong param_1)

{
  FUN_1446bc42e(param_1 + 0x18);
  return 1;
}



// FUNCTION 1446bc42e FUN_1446bc42e body=164 status=ok
// SIG undefined FUN_1446bc42e(void)

void FUN_1446bc42e(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140056680(local_20,L"FOnlineStoreV2Null::QueryOffersByFilter User invalid");
  local_38 = 0;
  uStack_30 = 0;
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0 || (int)param_1[1] == 0) {
    uVar2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x60))(plVar1,0,&local_38,local_20);
    uVar2 = uStack_30 & 0xffffffff;
  }
  FUN_1447a1747(local_38,uVar2);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_20[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446bc4d4 FUN_1446bc4d4 body=111 status=ok
// SIG undefined FUN_1446bc4d4(void)

undefined8 * FUN_1446bc4d4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14bf031d0;
  plVar1 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1446bc525;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1446bc525:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446bc558 FUN_1446bc558 body=115 status=ok
// SIG undefined FUN_1446bc558(void)

void FUN_1446bc558(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bf031d0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_14990fb90(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 1446bc5cc FUN_1446bc5cc body=115 status=ok
// SIG undefined FUN_1446bc5cc(void)

void FUN_1446bc5cc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bf031d0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_14990fb90(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 1446bc640 FUN_1446bc640 body=149 status=ok
// SIG undefined FUN_1446bc640(void)

void FUN_1446bc640(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bf031d0;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  p_Var1->EntryCount = 0;
  FUN_14990fb90(&(p_Var1->ProcessLocksList).Blink,param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001446bc6c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1446bc6e0 FUN_1446bc6e0 body=20 status=ok
// SIG undefined FUN_1446bc6e0(void)

undefined1 FUN_1446bc6e0(longlong param_1)

{
  FUN_1446bc6f4(param_1 + 0x18);
  return 1;
}



// FUNCTION 1446bc6f4 FUN_1446bc6f4 body=164 status=ok
// SIG undefined FUN_1446bc6f4(void)

void FUN_1446bc6f4(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140056680(local_20,L"FOnlineStoreV2Null::No OfferIds requested");
  local_38 = 0;
  uStack_30 = 0;
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0 || (int)param_1[1] == 0) {
    uVar2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x60))(plVar1,0,&local_38,local_20);
    uVar2 = uStack_30 & 0xffffffff;
  }
  FUN_1447a1747(local_38,uVar2);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_20[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446bc79a FUN_1446bc79a body=132 status=ok
// SIG undefined FUN_1446bc79a(void)

undefined8 * FUN_1446bc79a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bf03290;
  plVar3 = param_1 + 5;
  if (*(int *)(param_1 + 6) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1446bc7eb;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_1446bc7eb:
  plVar3 = (longlong *)param_1[4];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446bc832 FUN_1446bc832 body=140 status=ok
// SIG undefined FUN_1446bc832(void)

void FUN_1446bc832(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bf03290;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  FUN_14990fb90(puVar1 + 5,param_1 + 0x28);
  return;
}



// FUNCTION 1446bc8be FUN_1446bc8be body=140 status=ok
// SIG undefined FUN_1446bc8be(void)

void FUN_1446bc8be(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bf03290;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  FUN_14990fb90(puVar1 + 5,param_1 + 0x28);
  return;
}



// FUNCTION 1446bc94a FUN_1446bc94a body=179 status=ok
// SIG undefined FUN_1446bc94a(void)

void FUN_1446bc94a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bf03290;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  p_Var1->Flags = 0;
  p_Var1->CreatorBackTraceIndexHigh = 0;
  p_Var1->SpareWORD = 0;
  p_Var1[1].Type = 0;
  p_Var1[1].CreatorBackTraceIndex = 0;
  FUN_14990fb90(&p_Var1->Flags,param_1 + 0x28);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001446bc9ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1446bca08 FUN_1446bca08 body=20 status=ok
// SIG undefined FUN_1446bca08(void)

undefined1 FUN_1446bca08(longlong param_1)

{
  FUN_1446bca1c(param_1 + 0x18);
  return 1;
}



// FUNCTION 1446bca1c FUN_1446bca1c body=392 status=ok
// SIG undefined FUN_1446bca1c(void)

void FUN_1446bca1c(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_b8 [32];
  longlong local_98;
  ulonglong uStack_90;
  undefined1 local_80 [8];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong *local_58 [2];
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar2 = (longlong *)param_1[1];
  if (plVar2 != (longlong *)0x0) {
    iVar7 = (int)plVar2[1];
    do {
      if (iVar7 == 0) goto LAB_1446bca81;
      LOCK();
      iVar6 = (int)plVar2[1];
      bVar9 = iVar7 == iVar6;
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar9);
    lVar3 = *param_1;
    if (lVar3 != 0) {
      local_80[0] = 1;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      FUN_144a5dc74(local_58);
      local_48 = 0x13;
      local_98 = 0;
      uStack_90 = 0;
      FUN_14990fc14(lVar3 + 0x38);
      plVar8 = local_58[0];
      if (*(code **)(*local_58[0] + 0x50) != FUN_144828418) {
        plVar8 = (longlong *)(**(code **)(*local_58[0] + 0x50))();
      }
      FUN_1447a1fc0(plVar8);
      pcVar4 = *(code **)(*local_58[0] + 0x28);
      if (pcVar4 == FUN_14482841c) {
        plVar8 = local_58[0] + 3;
        if (local_58[0][5] != 0) {
          plVar8 = (longlong *)(local_58[0][5] + 8);
        }
      }
      else if (pcVar4 == (code *)&LAB_14010c34c) {
        plVar8 = local_58[0] + 2;
      }
      else {
        plVar8 = (longlong *)(*pcVar4)(local_58[0]);
      }
      plVar5 = (longlong *)param_1[2];
      if (plVar5 != (longlong *)0x0 && (int)param_1[3] != 0) {
        (**(code **)(*plVar5 + 0x60))(plVar5,local_80[0],&local_98,plVar8);
      }
      FUN_1447a1747(local_98,uStack_90 & 0xffffffff);
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      FUN_145c8db80(local_80);
    }
    LOCK();
    plVar8 = plVar2 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
LAB_1446bca81:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1446bcba5 FUN_1446bcba5 body=585 status=ok
// SIG undefined FUN_1446bcba5(void)

void FUN_1446bcba5(void)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(&DAT_14cc32630,L"UNSET",1);
  local_30 = 0x800000014bf01316;
  local_1c = 0x13;
  local_28 = FUN_14577453c();
  local_24 = 1;
  FUN_146771fc2(&local_30);
  DAT_14cc32640 = 0;
  local_38 = 1;
  FUN_14153156c(&DAT_14cc32648,L"OSSNull.AutoLoginAtStartup",&DAT_14c767fd0,
                L"True if it should login the first user at startup like single-user platforms, false to only login when requested"
               );
  atexit(FUN_1446b7a0b);
  local_38 = 1;
  FUN_14153156c(&DAT_14cc32660,L"OSSNull.SupportExternalUI",&DAT_14cc32658,
                L"True if it should support an external UI interface");
  atexit(FUN_1446b7a50);
  local_38 = 1;
  FUN_14153156c(&DAT_14cc32670,L"OSSNull.RequireShowLoginUI",&DAT_14cc3263a,
                L"True if login requires calling ShowLoginUI on the externalUI, depends on SupportExternalUI"
               );
  atexit(FUN_1446b7a95);
  local_38 = 1;
  FUN_14153156c(&DAT_14cc32688,L"OSSNull.ForceShowLoginUIUserChange",&DAT_14cc32680,
                L"True if the user index should change during login UI to emulate a platform user change"
               );
  atexit(FUN_1446b7ada);
  local_38 = 1;
  FUN_14153156c(&DAT_14cc32698,L"OSSNull.RequireLoginCredentials",&DAT_14cc3263b,
                L"True if login should require a user/pass to act like an external service, false to match most platforms and use the default"
               );
  atexit(FUN_1446b7b1f);
  local_38 = 1;
  FUN_14153156c(&DAT_14cc326a8,L"OSSNull.AddUserNumToNullId",&DAT_14cc32639,
                L"True if login name should include the local user number, which allows different stable Ids per user num"
               );
  atexit(FUN_1446b7b64);
  local_38 = 1;
  FUN_14153156c(&DAT_14cc326b8,L"OSSNull.ForceStableNullId",&DAT_14cc32638,
                L"True if it should use a system-stable null Id for login, same as -StableNullID on command line"
               );
  atexit(FUN_1446b7ba9);
  local_38 = 1;
  FUN_14153156c(&DAT_14cc326c8,L"OSSNull.ForceOfflineMode",&DAT_14cc3263c,
                L"True if it should fail faked network queries and act like an offline system");
  atexit(FUN_1446b7bee);
  local_38 = 1;
  FUN_14153156c(&DAT_14cc326d8,L"OSSNull.OnlineRequiresSecondLogin",&DAT_14cc3263d,
                L"True if the first login only counts as local login, a second is required for online access"
               );
  atexit(FUN_1446b7c33);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446bcdfe FUN_1446bcdfe body=158 status=ok
// SIG undefined FUN_1446bcdfe(void)

void FUN_1446bcdfe(void)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  uStack_38 = 0;
  local_48 = 1;
  FUN_14282b410(L"/Script/ActorLayerUtilities",&PTR_FUN_14bf03d30,1,&PTR_FUN_14bf03d00);
  local_28 = 0x800000014bf03d58;
  local_14 = 0x13;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14171c728(&DAT_14cc32768,&local_28);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446bcea0 FUN_1446bcea0 body=57 status=ok
// SIG undefined FUN_1446bcea0(void)

void FUN_1446bcea0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc32790 == 0) {
    uVar1 = FUN_145c5c383();
    DAT_14cc32790 = FUN_14171c317(FUN_146772397,uVar1,L"ETextureRotationDirection");
  }
  return;
}



// FUNCTION 1446bced9 FUN_1446bced9 body=57 status=ok
// SIG undefined FUN_1446bced9(void)

void FUN_1446bced9(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc327a8 == 0) {
    uVar1 = FUN_145c5c383();
    DAT_14cc327a8 = FUN_14171c317(FUN_1467723c8,uVar1,L"EAppleTextureType");
  }
  return;
}



// FUNCTION 1446bcf28 FUN_1446bcf28 body=208 status=ok
// SIG undefined FUN_1446bcf28(void)

void FUN_1446bcf28(void)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined **local_40;
  undefined8 uStack_38;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = &PTR_FUN_14bf04400;
  uStack_38 = 2;
  local_48 = 0;
  FUN_14282b410(L"/Script/AppleImageUtils",&PTR_FUN_14bf04440,1,0);
  local_40 = (undefined **)0x0;
  uStack_38 = 0;
  local_48 = 1;
  FUN_14282b410(L"/Script/AppleImageUtils",&PTR_FUN_14bf05620,1,&PTR_FUN_14bf055f0);
  local_28 = 0x800000014bf05678;
  local_14 = 0xf;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_1467725ba(&local_28);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446bcffc FUN_1446bcffc body=57 status=ok
// SIG undefined FUN_1446bcffc(void)

void FUN_1446bcffc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc32860 == 0) {
    uVar1 = FUN_146772746();
    DAT_14cc32860 = FUN_14171c317(FUN_146772775,uVar1,L"ECollectionScriptingShareType");
  }
  return;
}



// FUNCTION 1446bd036 FUN_1446bd036 body=350 status=ok
// SIG undefined FUN_1446bd036(void)

undefined8 FUN_1446bd036(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  ushort uVar6;
  ulonglong uVar7;
  ushort uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined2 *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *param_2;
  FUN_1400348e2(&local_38,*param_1);
  iVar1 = *(int *)((undefined8 *)*param_1 + 1);
  uVar10 = iVar1 - 1;
  if (iVar1 == 0) {
    uVar10 = 0;
  }
  uVar2 = *(uint *)((longlong *)param_1[1] + 1);
  uVar4 = (ulonglong)uVar2;
  uVar11 = uVar10;
  if ((int)uVar2 < (int)uVar10) {
    uVar11 = uVar2;
  }
  uVar13 = 0;
  if (0 < (int)uVar11) {
    uVar13 = uVar11;
  }
  if (uVar2 == uVar13) {
    puVar5 = *(undefined2 **)*param_1;
    if ((uVar4 != 0) && (0 < (int)uVar11)) {
      lVar12 = 0;
      uVar9 = uVar4;
      while( true ) {
        uVar6 = *(ushort *)(*(longlong *)param_1[1] + lVar12);
        uVar7 = (ulonglong)uVar6;
        uVar8 = *(ushort *)((longlong)puVar5 + lVar12);
        if (uVar6 != uVar8) break;
        if (uVar6 == 0) goto LAB_1446bd0fa;
LAB_1446bd0cb:
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) goto LAB_1446bd0fa;
        lVar12 = lVar12 + 2;
      }
      if ((uVar8 | uVar6) < 0x80) {
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        uVar14 = (ulonglong)uVar8;
        uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
        if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar14]) goto LAB_1446bd0cb;
      }
      if (uVar6 != uVar8) goto LAB_1446bd171;
    }
LAB_1446bd0fa:
    if (iVar1 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    FUN_14006620a(&local_48,puVar5 + uVar4,uVar10 - uVar2);
    plVar3 = (longlong *)param_1[2];
    puVar5 = &DAT_149dfb77a;
    if (local_40 != 0) {
      puVar5 = local_48;
    }
    FUN_1446f470e(&local_50,puVar5,1);
    iVar1 = (int)plVar3[1];
    *(uint *)(plVar3 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(plVar3,iVar1);
    }
    *(undefined8 *)(*plVar3 + (longlong)iVar1 * 8) = local_50;
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1446bd171:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446bd195 FUN_1446bd195 body=212 status=ok
// SIG undefined FUN_1446bd195(void)

void FUN_1446bd195(void)

{
  uint uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined **local_40;
  undefined8 local_38;
  undefined4 local_24;
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = (char *)0x800000014bf0610e;
  local_24 = 9;
  local_18 = FUN_14577453c();
  local_14 = 1;
  FUN_14171c728(&DAT_14cc32848,&local_20);
  local_20 = "AssetRegistry";
  local_18 = 0xd;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  DAT_14cc32850 = (ulonglong)uVar1;
  local_40 = &PTR_FUN_14bf06d90;
  local_38 = 1;
  local_48 = 0;
  FUN_14282b410(L"/Script/AssetTags",&PTR_FUN_14bf06db0,1,0);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446bd26c FUN_1446bd26c body=287 status=ok
// SIG undefined FUN_1446bd26c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1446bd26c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ushort uVar4;
  ulonglong uVar5;
  ushort uVar6;
  ulonglong uVar7;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc328d8) && (FUN_144b3d300(&DAT_14cc328d8), DAT_14cc328d8 == -1)) {
    DAT_14cc328c8 = 0;
    _DAT_14cc328d0 = 0;
    atexit((_func_5014 *)&LAB_1446bd38b);
    _Init_thread_footer(&DAT_14cc328d8);
  }
  FUN_1400b22c2(param_2);
  iVar3 = (int)param_2[1];
  if (1 < DAT_14cc328d0) {
    if (iVar3 == DAT_14cc328d0) {
      lVar2 = 0;
      while( true ) {
        uVar4 = *(ushort *)(*param_2 + lVar2);
        uVar5 = (ulonglong)uVar4;
        uVar6 = *(ushort *)(DAT_14cc328c8 + lVar2);
        if (uVar4 != uVar6) break;
        if (uVar4 == 0) {
          return param_2;
        }
LAB_1446bd30c:
        lVar2 = lVar2 + 2;
      }
      if ((uVar6 | uVar4) < 0x80) {
        uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
        uVar7 = (ulonglong)uVar6;
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar7]) goto LAB_1446bd30c;
      }
      iVar3 = DAT_14cc328d0;
      if (uVar4 == uVar6) {
        return param_2;
      }
    }
    else if (DAT_14cc328d0 + iVar3 == 1) {
      return param_2;
    }
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  FUN_1402980a2(&DAT_14cc328c8,*param_2,iVar1);
  return param_2;
}



// FUNCTION 1446bd39c FUN_1446bd39c body=102 status=ok
// SIG undefined FUN_1446bd39c(void)

void FUN_1446bd39c(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014bf06e8e;
  local_14 = 0x1c;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146772988(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446bd426 FUN_1446bd426 body=102 status=ok
// SIG undefined FUN_1446bd426(void)

void FUN_1446bd426(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014bf06fca;
  local_14 = 0xd;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146772b68(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446bd490 FUN_1446bd490 body=534 status=ok
// SIG undefined FUN_1446bd490(void)

undefined8 FUN_1446bd490(longlong param_1,char *param_2,ulonglong param_3)

{
  byte bVar1;
  int iVar2;
  void *_Dst;
  undefined8 uVar3;
  byte *pbVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  void *pvVar8;
  ulonglong *puVar9;
  bool bVar10;
  undefined1 local_f8 [32];
  ulonglong local_d8;
  ulonglong local_d0;
  undefined1 local_c8 [32];
  byte *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  byte *pbStack_80;
  ulonglong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  byte *local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)local_f8;
  if ((param_2 != (char *)0x0 && 2 < param_3) && (*param_2 == '\x02')) {
    local_d8 = 0;
    local_d0 = 0;
    uVar7 = 1;
    puVar9 = &local_d8;
    bVar10 = true;
    do {
      bVar5 = bVar10;
      iVar2 = (int)uVar7 - (int)param_3;
      pbVar4 = (byte *)(param_2 + uVar7);
      do {
        if (param_3 <= uVar7) goto LAB_1446bd67e;
        bVar1 = *pbVar4;
        *puVar9 = *puVar9 + (ulonglong)bVar1;
        uVar7 = uVar7 + 1;
        iVar2 = iVar2 + 1;
        pbVar4 = pbVar4 + 1;
      } while ((ulonglong)bVar1 == 0xff);
      puVar9 = &local_d0;
      bVar10 = false;
    } while (bVar5);
    local_88 = 0;
    uStack_70 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_38 = 0;
    local_a0 = (undefined4)local_d8;
    local_9c = 1;
    pbStack_80 = pbVar4 + local_d8;
    local_78 = local_d0 & 0xffffffff;
    local_58 = pbVar4 + local_d8 + local_d0;
    uStack_50 = (ulonglong)(uint)-((int)(local_d8 + local_d0) + iVar2);
    local_a8 = pbVar4;
    _Dst = (void *)FUN_14001cc68(0x138);
    memset(_Dst,0,0x138);
    pvVar8 = *(void **)(param_1 + 8);
    if ((pvVar8 != _Dst) &&
       (*(void **)(param_1 + 8) = _Dst, bVar10 = pvVar8 != (void *)0x0, pvVar8 = _Dst, bVar10)) {
      FUN_1400020a8();
      pvVar8 = *(void **)(param_1 + 8);
    }
    vorbis_info_init(pvVar8);
    vorbis_comment_init(local_c8);
    lVar6 = 0;
    do {
      iVar2 = vorbis_synthesis_headerin
                        (*(undefined8 *)(param_1 + 8),local_c8,(longlong)&local_a8 + lVar6);
      if (iVar2 != 0) {
        vorbis_comment_clear(local_c8);
        goto LAB_1446bd67e;
      }
      lVar6 = lVar6 + 0x28;
    } while (lVar6 != 0x78);
    vorbis_comment_clear(local_c8);
    iVar2 = vorbis_synthesis_init(*(longlong *)(param_1 + 8) + 0x28);
    if ((((iVar2 == 0) &&
         (lVar6 = *(longlong *)(param_1 + 8), *(int *)(lVar6 + 4) == *(int *)(param_1 + 0x44))) &&
        (*(int *)(lVar6 + 8) == *(int *)(param_1 + 0x40))) &&
       (iVar2 = vorbis_block_init(lVar6 + 0x28), iVar2 == 0)) {
      lVar6 = 0x1000 / (longlong)*(int *)(param_1 + 0x44);
      *(int *)(param_1 + 0x3c) = (int)lVar6;
      uVar3 = CONCAT71((uint7)((ulonglong)lVar6 >> 8) & 0xffffff,1);
      goto LAB_1446bd680;
    }
  }
LAB_1446bd67e:
  uVar3 = 0;
LAB_1446bd680:
  if ((local_28 ^ (ulonglong)local_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1446bd6a8 FUN_1446bd6a8 body=75 status=ok
// SIG undefined FUN_1446bd6a8(void)

void FUN_1446bd6a8(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  FUN_14991678f(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001446bd6e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 1446bd6f4 FUN_1446bd6f4 body=399 status=ok
// SIG undefined FUN_1446bd6f4(void)

int FUN_1446bd6f4(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined8 local_78;
  ulonglong local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_60 = 0;
  uStack_58 = 0;
  uStack_68 = 0;
  local_78 = *(undefined8 *)*param_2;
  local_70 = (ulonglong)*(uint *)((undefined8 *)*param_2 + 1);
  iVar4 = vorbis_synthesis(*(longlong *)(param_1 + 8) + 0xa8,&local_78);
  iVar7 = -1;
  if ((iVar4 == 0) &&
     (iVar4 = vorbis_synthesis_blockin
                        (*(longlong *)(param_1 + 8) + 0x28,*(longlong *)(param_1 + 8) + 0xa8),
     iVar4 == 0)) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    uVar5 = vorbis_synthesis_pcmout(*(longlong *)(param_1 + 8) + 0x28,&local_80);
    if ((int)uVar5 < 1) {
      iVar7 = 0;
    }
    else {
      iVar7 = 0;
      do {
        uVar1 = *(uint *)(param_1 + 0x3c);
        iVar4 = *(int *)(param_1 + 0x44);
        if ((int)uVar1 <= (int)uVar5) {
          uVar5 = uVar1;
        }
        if (0 < iVar4) {
          uVar6 = 1;
          if (1 < (int)uVar5) {
            uVar6 = (ulonglong)uVar5;
          }
          uVar8 = 0;
          do {
            if (0 < (int)uVar1) {
              lVar3 = *(longlong *)(local_80 + uVar8 * 8);
              uVar9 = 0;
              uVar10 = uVar8 & 0xffffffff;
              do {
                iVar4 = (int)(*(float *)(lVar3 + uVar9 * 4) * 32767.0);
                if (0x7fff < iVar4) {
                  iVar4 = 0x8000;
                }
                if (iVar4 < -0x7fff) {
                  iVar4 = -0x8000;
                }
                *(short *)(lVar2 + (longlong)((int)uVar10 + iVar7) * 2) = (short)iVar4;
                uVar9 = uVar9 + 1;
                iVar4 = *(int *)(param_1 + 0x44);
                uVar10 = (ulonglong)(uint)((int)uVar10 + iVar4);
              } while (uVar6 != uVar9);
            }
            uVar8 = uVar8 + 1;
          } while ((longlong)uVar8 < (longlong)iVar4);
        }
        vorbis_synthesis_read(*(longlong *)(param_1 + 8) + 0x28,uVar5);
        iVar7 = iVar7 + uVar5;
        uVar5 = vorbis_synthesis_pcmout(*(longlong *)(param_1 + 8) + 0x28,&local_80);
      } while (0 < (int)uVar5);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar7;
}



// FUNCTION 1446bd884 FUN_1446bd884 body=1548 status=ok
// SIG undefined FUN_1446bd884(void)

ulonglong FUN_1446bd884(undefined8 *param_1,undefined8 *param_2)

{
  void *_Src;
  longlong *plVar1;
  undefined8 *puVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char *pcVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ushort uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  ushort uVar23;
  ulonglong uVar24;
  double dVar25;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong local_c0;
  longlong *local_b8;
  undefined2 *local_b0;
  int local_a8;
  longlong local_a0 [7];
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)(param_1 + 0x17) != 1) {
    (**(code **)*param_1)();
    uVar21 = *(uint *)(param_2 + 1);
    if (1 < (int)uVar21) {
      if (param_1 + 0x15 == param_2) {
LAB_1446bd948:
        puVar8 = (undefined2 *)*param_2;
        bVar3 = false;
      }
      else {
        _Src = (void *)*param_2;
        *(uint *)(param_1 + 0x16) = uVar21;
        FUN_1446dd670(param_1 + 0x15,(ulonglong)uVar21,*(undefined4 *)((longlong)param_1 + 0xb4));
        memcpy((void *)param_1[0x15],_Src,(ulonglong)uVar21 * 2);
        uVar21 = *(uint *)(param_2 + 1);
        if (uVar21 != 0) goto LAB_1446bd948;
        puVar8 = &DAT_149dfb77a;
        uVar21 = 0;
        bVar3 = true;
      }
      lVar16 = 7;
      lVar22 = 0;
      while( true ) {
        uVar23 = *(ushort *)((longlong)puVar8 + lVar22);
        uVar17 = (ulonglong)uVar23;
        uVar18 = *(ushort *)((longlong)L"file://" + lVar22);
        if (uVar23 != uVar18) break;
        if (uVar23 == 0) goto LAB_1446bd9ad;
LAB_1446bd978:
        lVar16 = lVar16 + -1;
        if (lVar16 == 0) goto LAB_1446bd9ad;
        lVar22 = lVar22 + 2;
      }
      if ((uVar18 | uVar23) < 0x80) {
        uVar23 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
        uVar24 = (ulonglong)uVar18;
        uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar24];
        if ((&DAT_149e05da0)[uVar17] == (&DAT_149e05da0)[uVar24]) goto LAB_1446bd978;
      }
      if (uVar23 != uVar18) goto LAB_1446bd8cd;
LAB_1446bd9ad:
      if (bVar3) {
        puVar8 = &DAT_149dfb77a;
      }
      else {
        puVar8 = (undefined2 *)*param_2;
      }
      uVar20 = uVar21 - 1;
      if (uVar21 == 0) {
        uVar20 = 0;
      }
      uVar21 = 7;
      if ((int)uVar20 < 7) {
        uVar21 = uVar20;
      }
      uVar17 = (ulonglong)uVar21;
      if ((int)uVar21 < 1) {
        uVar17 = 0;
      }
      FUN_14006620a(&local_b0,puVar8 + uVar17,uVar20 - (int)uVar17);
      FUN_1448097c4(&local_b0,&DAT_149e01f64,&DAT_149e065c6,0);
      plVar9 = (longlong *)FUN_14001cc68(0x10,0x10);
      *plVar9 = (longlong)&PTR_FUN_14bf07740;
      plVar9[1] = 0;
      plVar1 = (longlong *)param_1[0x11];
      plVar13 = plVar1;
      if ((plVar1 != plVar9) &&
         (param_1[0x11] = plVar9, plVar13 = plVar9, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x10))(plVar1,1);
        plVar13 = (longlong *)param_1[0x11];
      }
      puVar8 = local_b0;
      if (local_a8 == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      cVar4 = FUN_1499144dc(plVar13,puVar8);
      if (cVar4 == '\0') {
LAB_1446bdaf3:
        uVar17 = 0;
      }
      else {
        local_68 = 0;
        FUN_144d84db0(local_a0);
        lVar16 = FUN_144d84e00(local_a0,param_1[0x11],&local_68);
        FUN_144d84df0(local_a0);
        if ((lVar16 != 0) || (lVar16 = FUN_144d8c350(param_1[0x11],local_68,local_a0), lVar16 != 0))
        {
LAB_1446bdad1:
          plVar1 = (longlong *)param_1[0x11];
          if (plVar1 != (longlong *)0x0) {
            param_1[0x11] = 0;
            (**(code **)(*plVar1 + 0x10))(plVar1,1);
          }
          goto LAB_1446bdaf3;
        }
        lVar16 = param_1[0x12];
        lVar22 = lVar16;
        if ((lVar16 != local_a0[0]) &&
           (param_1[0x12] = local_a0[0], lVar22 = local_a0[0], lVar16 != 0)) {
          FUN_144d8c5b0(lVar16);
          FUN_1400020a8(lVar16);
          lVar22 = param_1[0x12];
        }
        iVar5 = FUN_144d8c7a0(lVar22);
        if (iVar5 < 0) goto LAB_1446bdad1;
        uVar10 = FUN_144d8ce00(param_1[0x12]);
        iVar5 = FUN_144d88960(uVar10);
        if (iVar5 == 0) goto LAB_1446bdad1;
        if (0 < iVar5) {
          local_b8 = param_1 + 0xf;
          plVar1 = param_1 + 0xd;
          iVar19 = 0;
          do {
            uVar11 = FUN_144d88970(uVar10,iVar19);
            iVar6 = FUN_144d86610(uVar11);
            if (iVar6 == 1) {
              pcVar12 = (char *)FUN_144d86650();
              iVar6 = strcmp(pcVar12,"V_VP8");
              if (iVar6 != 0) {
                pcVar12 = (char *)FUN_144d86650(uVar11);
                iVar6 = strcmp(pcVar12,"V_VP9");
                if (iVar6 != 0) goto LAB_1446bdc55;
              }
              iVar6 = *(int *)(param_1 + 0xe);
              *(uint *)(param_1 + 0xe) = iVar6 + 1U;
              plVar13 = plVar1;
              if (*(uint *)((longlong)param_1 + 0x74) < iVar6 + 1U) {
                FUN_149916bf2(plVar1,iVar6);
              }
LAB_1446bdc4b:
              *(undefined8 *)(*plVar13 + (longlong)iVar6 * 8) = uVar11;
            }
            else {
              iVar6 = FUN_144d86610(uVar11);
              if (iVar6 == 2) {
                pcVar12 = (char *)FUN_144d86650(uVar11);
                iVar6 = strcmp(pcVar12,"A_OPUS");
                if (iVar6 != 0) {
                  pcVar12 = (char *)FUN_144d86650(uVar11);
                  iVar6 = strcmp(pcVar12,"A_VORBIS");
                  if (iVar6 != 0) goto LAB_1446bdc55;
                }
                iVar6 = *(int *)(param_1 + 0x10);
                *(uint *)(param_1 + 0x10) = iVar6 + 1U;
                plVar13 = local_b8;
                if (*(uint *)((longlong)param_1 + 0x84) < iVar6 + 1U) {
                  FUN_149916c78(local_b8,iVar6);
                  plVar13 = local_b8;
                }
                goto LAB_1446bdc4b;
              }
            }
LAB_1446bdc55:
            iVar19 = iVar19 + 1;
          } while (iVar5 != iVar19);
        }
        if ((*(int *)(param_1 + 0xe) == 0) || (*(int *)(param_1 + 0x10) == 0)) goto LAB_1446bdad1;
        lVar22 = FUN_14001cc68(0x70,0x10);
        uVar10 = FUN_14001cc68(0x10,0x10);
        FUN_14991647e(uVar10);
        *(undefined8 *)(lVar22 + 0x38) = uVar10;
        *(undefined8 *)(lVar22 + 0x40) = 0;
        *(undefined8 *)(lVar22 + 0x48) = 0;
        *(undefined8 *)(lVar22 + 0x50) = 0;
        *(undefined8 *)(lVar22 + 0x58) = 0;
        *(undefined8 **)(lVar22 + 0x60) = param_1 + 1;
        *(undefined2 *)(lVar22 + 0x68) = 0;
        lVar16 = param_1[0xb];
        if ((lVar16 != lVar22) && (param_1[0xb] = lVar22, lVar16 != 0)) {
          FUN_149915e54(lVar16);
          FUN_1400020a8(lVar16);
        }
        puVar14 = (undefined8 *)FUN_14001cc68(0x48,0x10);
        uVar10 = FUN_14001cc68(0x10,0x10);
        FUN_14991613e(uVar10);
        *puVar14 = uVar10;
        puVar14[1] = 0;
        puVar14[2] = 0;
        puVar14[3] = 0;
        puVar14[4] = 0;
        puVar14[5] = param_1 + 1;
        puVar14[6] = 0;
        puVar2 = (undefined8 *)param_1[0xc];
        if ((puVar2 != puVar14) && (param_1[0xc] = puVar14, puVar2 != (undefined8 *)0x0)) {
          FUN_1499145d0(puVar2);
          FUN_1400020a8(puVar2);
        }
        if ((longlong)*(int *)((longlong)param_1 + 0xbc) != -1) {
          uVar10 = *(undefined8 *)(param_1[0xf] + (longlong)*(int *)((longlong)param_1 + 0xbc) * 8);
          uVar15 = FUN_144d86660(uVar10,local_a0);
          uVar11 = param_1[0xc];
          uVar7 = FUN_144d886b0(uVar10);
          dVar25 = (double)FUN_144d886a0(uVar10);
          uVar10 = FUN_144d86650(uVar10);
          local_c0 = local_a0[0];
          local_c8 = uVar15;
          FUN_149914654(uVar11,uVar10,(int)dVar25,uVar7);
        }
        if ((longlong)*(int *)(param_1 + 0x18) != -1) {
          uVar10 = param_1[0xb];
          uVar11 = FUN_144d86650(*(undefined8 *)
                                  (param_1[0xd] + (longlong)*(int *)(param_1 + 0x18) * 8));
          FUN_1446bde92(uVar10,uVar11);
        }
        *(undefined4 *)(param_1 + 0x17) = 5;
        *(undefined1 *)(param_1 + 0x1a) = 0;
        plVar1 = param_1 + 6;
        iVar5 = *(int *)(param_1 + 7);
        *(uint *)(param_1 + 7) = iVar5 + 1U;
        if (*(uint *)((longlong)param_1 + 0x3c) < iVar5 + 1U) {
          FUN_1498eb00c(plVar1,iVar5);
        }
        *(undefined4 *)(param_1[6] + (longlong)iVar5 * 4) = 9;
        iVar5 = *(int *)(param_1 + 7);
        *(uint *)(param_1 + 7) = iVar5 + 1U;
        if (*(uint *)((longlong)param_1 + 0x3c) < iVar5 + 1U) {
          FUN_1498eb00c(plVar1,iVar5);
        }
        *(undefined4 *)(*plVar1 + (longlong)iVar5 * 4) = 3;
        uVar17 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      }
      if (local_b0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1446bd8cf;
    }
  }
LAB_1446bd8cd:
  uVar17 = 0;
LAB_1446bd8cf:
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar17 & 0xffffffff;
}



// FUNCTION 1446bde92 FUN_1446bde92 body=165 status=ok
// SIG undefined FUN_1446bde92(void)

undefined8 FUN_1446bde92(longlong param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_149915eee();
  local_20 = 0;
  local_28 = 1;
  iVar1 = strcmp(param_2,"V_VP8");
  if (iVar1 == 0) {
    uVar2 = FUN_144d83730();
  }
  else {
    iVar1 = strcmp(param_2,"V_VP9");
    if (iVar1 != 0) {
      uVar2 = 0;
      goto LAB_1446bdf1a;
    }
    uVar2 = FUN_144d84260();
  }
  local_38 = 0xc;
  FUN_144d82600(param_1,uVar2,&local_28,0);
  *(undefined1 *)(param_1 + 0x69) = 1;
  uVar2 = 1;
LAB_1446bdf1a:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446bdf38 FUN_1446bdf38 body=1645 status=ok
// SIG undefined FUN_1446bdf38(void)

void FUN_1446bdf38(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_128 [40];
  longlong local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(int *)(param_1 + 0xb8) == 3) {
    param_2 = param_2 + *(longlong *)(param_1 + 200);
    *(longlong *)(param_1 + 200) = param_2;
    if (*(char *)(param_1 + 0xd0) == '\x01') {
      iVar6 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x110))();
      if ((iVar6 == 0) &&
         (iVar6 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0xf0))(), iVar6 == 0)) {
        if (*(char *)(param_1 + 0xd1) == '\x01') {
          auVar15 = roundpd(ZEXT816(0x3fe0000000000000),ZEXT816(0x3fe0000000000000),1);
          local_e8 = (longlong)auVar15._0_8_;
          (**(code **)(*(longlong *)(param_1 + 0x18) + 0x40))(param_1 + 0x18);
        }
        else {
          *(undefined4 *)(param_1 + 0xb8) = 5;
          lVar10 = FUN_144d8ce10(*(undefined8 *)(param_1 + 0x90));
          auVar16._0_8_ = ((double)lVar10 / 1000.0) * 10.0 + 0.5;
          auVar16._8_8_ = 0;
          auVar15 = roundpd(auVar16,auVar16,1);
          *(longlong *)(param_1 + 200) = (longlong)auVar15._0_8_;
          plVar1 = (longlong *)(param_1 + 0x30);
          iVar6 = *(int *)(param_1 + 0x38);
          *(uint *)(param_1 + 0x38) = iVar6 + 1U;
          if (*(uint *)(param_1 + 0x3c) < iVar6 + 1U) {
            FUN_1498eb00c(plVar1,iVar6);
          }
          *(undefined4 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar6 * 4) = 5;
          iVar6 = *(int *)(param_1 + 0x38);
          *(uint *)(param_1 + 0x38) = iVar6 + 1U;
          if (*(uint *)(param_1 + 0x3c) < iVar6 + 1U) {
            FUN_1498eb00c(plVar1,iVar6);
          }
          *(undefined4 *)(*plVar1 + (longlong)iVar6 * 4) = 7;
        }
      }
    }
    else {
      auVar15 = roundpd(ZEXT816(0x416312d010000000),ZEXT816(0x416312d010000000),1);
      local_100 = (longlong)auVar15._0_8_;
      local_e8 = 0;
      uStack_e0 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      lVar10 = param_2;
      if ((longlong)((double)local_100 * 0.5) < 0) {
        (**(code **)(**(longlong **)(param_1 + 0x48) + 0x50))();
        lVar10 = *(longlong *)(param_1 + 200);
      }
      if (param_2 < lVar10 + local_100) {
        plVar1 = (longlong *)(param_1 + 0xa0);
LAB_1446be169:
        do {
          lVar10 = *(longlong *)(param_1 + 0x98);
          if (lVar10 == 0) {
            lVar10 = FUN_144d8ce40(*(undefined8 *)(param_1 + 0x90));
            *(longlong *)(param_1 + 0x98) = lVar10;
            *(undefined8 *)(param_1 + 0xa0) = 0;
LAB_1446be1bf:
            iVar6 = FUN_144d8ab60(lVar10,plVar1);
          }
          else {
            plVar13 = (longlong *)*plVar1;
            if (plVar13 == (longlong *)0x0) goto LAB_1446be1bf;
            iVar6 = (**(code **)(*plVar13 + 0x10))(plVar13);
            lVar10 = *(longlong *)(param_1 + 0x98);
            if (iVar6 == 0) goto LAB_1446be1bf;
            iVar6 = FUN_144d8abd0(lVar10,*plVar1,plVar1);
          }
          if (iVar6 != 0) {
LAB_1446be4ae:
            *(undefined1 *)(param_1 + 0xd0) = 1;
LAB_1446be4b5:
            break;
          }
          if (((longlong *)*plVar1 == (longlong *)0x0) ||
             (iVar6 = (**(code **)(*(longlong *)*plVar1 + 0x10))(), iVar6 == 0)) {
            *(undefined8 *)(param_1 + 0xa0) = 0;
            uVar11 = FUN_144d8ce60(*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x98));
            *(undefined8 *)(param_1 + 0x98) = uVar11;
            cVar5 = FUN_144d8ab50(uVar11);
            if (cVar5 != '\0') goto LAB_1446be4ae;
            goto LAB_1446be169;
          }
          if ((*(byte *)(param_1 + 0xd0) & 1) != 0) goto LAB_1446be4b5;
          uVar11 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 8))();
          lVar10 = FUN_144d857e0(uVar11,*(undefined8 *)(param_1 + 0x98));
          auVar15._0_8_ = ((double)lVar10 / 1000.0) * 10.0 + 0.5;
          auVar15._8_8_ = 0;
          auVar15 = roundpd(auVar15,auVar15,1);
          lVar10 = (longlong)auVar15._0_8_;
          uVar11 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 8))();
          iVar6 = FUN_144d85830(uVar11);
          if (0 < iVar6) {
            iVar6 = 0;
            do {
              uVar11 = (**(code **)(*(longlong *)*plVar1 + 8))();
              lVar12 = FUN_144d85860(uVar11,iVar6);
              plVar13 = (longlong *)FUN_14001cc68(0x30,0x10);
              plVar13[1] = (longlong)&DAT_100000001;
              *plVar13 = (longlong)&PTR_FUN_14bf077e0;
              plVar13[2] = 0;
              plVar13[3] = 0;
              plVar13[4] = 0;
              plVar13[5] = 0;
              if (plVar13 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                UNLOCK();
                LOCK();
                plVar2 = plVar13 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*plVar13)(plVar13);
                  LOCK();
                  piVar3 = (int *)((longlong)plVar13 + 0xc);
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (*piVar3 == 0) {
                    (**(code **)(*plVar13 + 0x10))(plVar13);
                  }
                }
              }
              plVar2 = plVar13 + 2;
              plVar13[4] = lVar10;
              FUN_140393c76(plVar2,*(undefined4 *)(lVar12 + 8),1);
              FUN_144d85840(lVar12,*(undefined8 *)(param_1 + 0x88),plVar13[2]);
              uVar11 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 8))();
              iVar7 = FUN_144d85750(uVar11);
              if (((longlong)*(int *)(param_1 + 0xc0) == -1) ||
                 (iVar8 = FUN_144d86620(*(undefined8 *)
                                         (*(longlong *)(param_1 + 0x68) +
                                         (longlong)*(int *)(param_1 + 0xc0) * 8)), iVar8 != iVar7))
              {
                if (((longlong)*(int *)(param_1 + 0xbc) == -1) ||
                   (iVar8 = FUN_144d86620(*(undefined8 *)
                                           (*(longlong *)(param_1 + 0x78) +
                                           (longlong)*(int *)(param_1 + 0xbc) * 8)),
                   uVar4 = uStack_f0, iVar8 != iVar7)) goto LAB_1446be3f5;
                lVar12 = (longlong)(int)uStack_f0;
                uVar9 = (int)uStack_f0 + 1;
                uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar9);
                if (uStack_f0._4_4_ < uVar9) {
                  FUN_149916b3c(&local_f8,uVar4 & 0xffffffff);
                }
                *(longlong **)(local_f8 + lVar12 * 0x10) = plVar2;
                *(longlong **)(local_f8 + 8 + lVar12 * 0x10) = plVar13;
                if (plVar13 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                  UNLOCK();
                  goto LAB_1446be3fa;
                }
              }
              else {
                dVar14 = (double)FUN_144d88150(*(undefined8 *)
                                                (*(longlong *)(param_1 + 0x68) +
                                                (longlong)*(int *)(param_1 + 0xc0) * 8));
                uVar4 = uStack_e0;
                auVar17 = ZEXT816(0x4114585755555555);
                if (0.0 < dVar14) {
                  auVar17._8_8_ = 0;
                  auVar17._0_8_ = (1.0 / dVar14) * 10000000.0 + 0.5;
                }
                auVar15 = roundpd(auVar17,auVar17,1);
                plVar13[5] = (longlong)auVar15._0_8_;
                lVar12 = (longlong)(int)uStack_e0;
                uVar9 = (int)uStack_e0 + 1;
                uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar9);
                if (uStack_e0._4_4_ < uVar9) {
                  FUN_149916b3c(&local_e8,uVar4 & 0xffffffff);
                }
                *(longlong **)(local_e8 + lVar12 * 0x10) = plVar2;
                *(longlong **)(local_e8 + 8 + lVar12 * 0x10) = plVar13;
                if (plVar13 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                  UNLOCK();
                }
                lVar10 = lVar10 + plVar13[5];
LAB_1446be3f5:
                if (plVar13 != (longlong *)0x0) {
LAB_1446be3fa:
                  LOCK();
                  plVar2 = plVar13 + 1;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)*plVar2 == 0) {
                    (**(code **)*plVar13)(plVar13);
                    LOCK();
                    piVar3 = (int *)((longlong)plVar13 + 0xc);
                    *piVar3 = *piVar3 + -1;
                    UNLOCK();
                    if (*piVar3 == 0) {
                      (**(code **)(*plVar13 + 0x10))(plVar13);
                    }
                  }
                }
              }
              iVar6 = iVar6 + 1;
              uVar11 = (**(code **)(*(longlong *)*plVar1 + 8))();
              iVar7 = FUN_144d85830(uVar11);
            } while (iVar6 < iVar7);
          }
          if (0x14 < (int)uStack_e0) goto LAB_1446be4bd;
        } while (lVar10 < *(longlong *)(param_1 + 200) + local_100);
        if (0 < (int)uStack_e0) {
LAB_1446be4bd:
          FUN_149915090(*(undefined8 *)(param_1 + 0x58),&local_e8);
        }
      }
      if (0 < (int)uStack_f0) {
        FUN_149914762(*(undefined8 *)(param_1 + 0x60),&local_f8);
      }
      FUN_14991678f(local_f8,(int)uStack_f0);
      if (local_f8 != 0) {
        FUN_1400020a8();
      }
      FUN_14991678f(local_e8,uStack_e0 & 0xffffffff);
      if (local_e8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1446be5b8 FUN_1446be5b8 body=377 status=ok
// SIG undefined FUN_1446be5b8(void)

undefined8 FUN_1446be5b8(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(uint *)(param_1 + 0xa0) < 5) && ((0x13U >> (*(uint *)(param_1 + 0xa0) & 0x1f) & 1) != 0)) {
    uVar3 = 0;
  }
  else {
    dVar6 = ((double)*param_2 / 10.0) * 1000.0;
    uVar2 = (ulonglong)dVar6;
    uVar3 = FUN_144d8d0d0(*(undefined8 *)(param_1 + 0x78),
                          (longlong)(dVar6 - 9.223372036854776e+18) & (longlong)uVar2 >> 0x3f |
                          uVar2);
    *(undefined8 *)(param_1 + 0x80) = uVar3;
    *(undefined8 *)(param_1 + 0x88) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x50))();
    if ((longlong)*(int *)(param_1 + 0xa8) != -1) {
      uVar3 = *(undefined8 *)(param_1 + 0x40);
      uVar4 = FUN_144d86650(*(undefined8 *)
                             (*(longlong *)(param_1 + 0x50) + (longlong)*(int *)(param_1 + 0xa8) * 8
                             ));
      FUN_1446bde92(uVar3,uVar4);
    }
    if ((longlong)*(int *)(param_1 + 0xa4) != -1) {
      uVar3 = *(undefined8 *)
               (*(longlong *)(param_1 + 0x60) + (longlong)*(int *)(param_1 + 0xa4) * 8);
      uVar5 = FUN_144d86660(uVar3,&local_50);
      uVar4 = *(undefined8 *)(param_1 + 0x48);
      uVar1 = FUN_144d886b0(uVar3);
      dVar6 = (double)FUN_144d886a0(uVar3);
      uVar3 = FUN_144d86650(uVar3);
      local_60 = local_50;
      local_68 = uVar5;
      FUN_149914654(uVar4,uVar3,(int)dVar6,uVar1);
    }
    *(longlong *)(param_1 + 0xb0) = *param_2;
    *(undefined1 *)(param_1 + 0xb8) = 0;
    (**(code **)**(undefined8 **)(param_1 + 0x28))(*(undefined8 **)(param_1 + 0x28),8);
    uVar3 = 1;
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446be732 FUN_1446be732 body=47 status=ok
// SIG undefined FUN_1446be732(void)

void FUN_1446be732(void)

{
  DAT_14cc32920 = &PTR_FUN_14bf07800;
  FUN_144725486(&DAT_14cc32920);
  FUN_1446c0fa4(&DAT_14cc32920);
  return;
}



// FUNCTION 1446be762 FUN_1446be762 body=2950 status=ok
// SIG undefined FUN_1446be762(void)

void FUN_1446be762(undefined **param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined **ppuVar3;
  int *piVar4;
  undefined **ppuVar5;
  uint uVar6;
  longlong lVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined **ppuVar12;
  int iVar13;
  uint uVar14;
  DWORD DVar15;
  DWORD DVar16;
  undefined **ppuVar17;
  undefined4 *puVar18;
  uint *puVar19;
  undefined8 uVar20;
  undefined ***pppuVar21;
  longlong *plVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  byte bVar25;
  longlong *plVar26;
  undefined1 auStack_138 [32];
  undefined1 **local_118;
  DWORD local_104;
  undefined8 *local_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong local_e8;
  undefined **local_e0;
  undefined **local_d8;
  undefined **ppuStack_d0;
  undefined **local_c8;
  undefined **local_c0;
  undefined **local_b8;
  undefined8 local_b0;
  undefined1 *local_a8 [2];
  undefined ***local_98;
  undefined **local_88;
  undefined **local_80;
  undefined **local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((longlong)(int)param_2[1] != 0) {
    plVar22 = (longlong *)*param_2;
    plVar26 = plVar22 + (longlong)(int)param_2[1] * 2;
    lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar1 = (undefined8 *)(lVar7 + 0x308);
    local_100 = (undefined8 *)(lVar7 + 0x310);
    local_e8 = 0x527800b400;
    piVar2 = (int *)(lVar7 + 0xc60);
    local_f0 = (longlong *)(lVar7 + 0x2b8);
    local_f8 = plVar26;
    do {
      local_118 = (undefined1 **)((ulonglong)local_118 & 0xffffffff00000000);
      iVar13 = FUN_144d82720(param_1,*(undefined8 *)*plVar22,
                             *(undefined4 *)((undefined8 *)*plVar22 + 1),0);
      if (iVar13 != 0) break;
      local_b0 = 0;
      ppuVar17 = (undefined **)FUN_144d82790(param_1,&local_b0);
      while (ppuVar17 != (undefined **)0x0) {
        if (*(char *)(param_1 + 0xd) == '\0') {
          *(undefined1 *)(param_1 + 0xd) = 1;
          iVar13 = *piVar2;
          if (DAT_14c86a9fc == 0) {
            if (iVar13 != 2) {
              if (iVar13 != 1) goto LAB_1446be876;
              DVar15 = FUN_140ad26c0();
              DVar16 = GetCurrentThreadId();
              if (DVar15 == DVar16) goto LAB_1446be87f;
              goto LAB_1446bee14;
            }
          }
          else {
LAB_1446be876:
            if (iVar13 != 0x10) {
LAB_1446bee14:
              if (DAT_14ca9a438 == '\0') {
                if ((DAT_14c86a9f8 != '\x01') || (*piVar2 == 2)) goto LAB_1446be87f;
                if (*piVar2 == 1) {
                  DVar15 = FUN_140ad26c0();
                  DVar16 = GetCurrentThreadId();
                  if (DVar15 == DVar16) goto LAB_1446be87f;
                }
              }
              if (DAT_14ca9a43c == 0) {
                puVar19 = (uint *)*puVar1;
                if (puVar19 != (uint *)0x0) goto LAB_1446beebc;
                do {
                  uVar14 = *(uint *)(*(longlong *)
                                      ((longlong)ThreadLocalStoragePointer +
                                      (ulonglong)_tls_index * 8) + 0x318);
                  if ((uVar14 & 1) == 0) {
                    *(uint *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x318) = uVar14 | 1;
                    __tlregdtor(&LAB_1446c09a6);
                  }
                  puVar18 = (undefined4 *)*local_100;
                  *local_100 = 0;
                  if (puVar18 == (undefined4 *)0x0) {
                    puVar18 = _aligned_malloc(0x10000,0x10000);
                  }
                  *puVar18 = 0xffffffff;
                  *(undefined4 **)(puVar18 + 0x10) = puVar18 + 0x16;
                  puVar18[0x12] = 0;
                  *puVar1 = puVar18;
                  FUN_140217a48(puVar1);
                  puVar19 = (uint *)*puVar1;
LAB_1446beebc:
                  uVar23 = *(longlong *)(puVar19 + 0x10) + 7;
                  uVar14 = puVar19[0x12];
                  while( true ) {
                    puVar24 = (undefined8 *)(uVar23 & 0xfffffffffffffff8);
                    if (puVar24 + 0x17 <= puVar19 + 0x4000) {
                      *(undefined8 **)(puVar19 + 0x10) = puVar24 + 0x17;
                      puVar19[0x12] = uVar14 + 1;
                      FUN_1447247dc(puVar24,0);
                      *puVar24 = &PTR_FUN_14bf07910;
                      puVar24[0x15] = param_1;
                      puVar24[0x16] = ppuVar17;
                      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                        uVar14 = DAT_14c7585c8 >> 10 & 3;
                        iVar13 = 0;
                        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
                          bVar25 = (&DAT_149e38edc)[uVar14];
                          iVar13 = 0;
                        }
                        else {
                          bVar25 = 2;
                        }
                      }
                      else {
                        iVar13 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                                 *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                        bVar25 = 5;
                      }
                      if (*(code **)(puVar24[0xe] + 0x18) != FUN_144713626) {
                        (**(code **)(puVar24[0xe] + 0x18))(puVar24 + 0xe,puVar24 + 9);
                      }
                      plVar26 = local_f8;
                      puVar24[0xe] = LowLevelTasks::
                                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                                     ::
                                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                                     ::vftable;
                      puVar24[9] = puVar24;
                      puVar24[10] = puVar24;
                      lVar7 = *local_f0;
                      if (lVar7 == 0) {
                        if (bVar25 == 6) {
                          bVar25 = 1;
                        }
                        uVar20 = 0;
                      }
                      else {
                        if (bVar25 == 6) {
                          bVar25 = (byte)((ulonglong)*(undefined8 *)(lVar7 + 0x38) >> 0x3b);
                        }
                        uVar20 = *(undefined8 *)(lVar7 + 0x30);
                      }
                      puVar24[0xf] = uVar20;
                      puVar24[0x10] =
                           ((ulonglong)(bVar25 & 7) << 0x3b) + local_e8 | 0xc000000000000000;
                      *(int *)((longlong)puVar24 + 0x1c) = iVar13;
                      if (puVar24 == (undefined8 *)0x0) {
                        local_a8[0] = (undefined1 *)CONCAT71(local_a8[0]._1_7_,1);
                        FUN_1447439e4(0,local_a8);
                      }
                      else {
                        LOCK();
                        *(int *)(puVar24 + 1) = *(int *)(puVar24 + 1) + 1;
                        UNLOCK();
                        local_a8[0] = (undefined1 *)CONCAT71(local_a8[0]._1_7_,1);
                        FUN_1447439e4(puVar24,local_a8);
                        LOCK();
                        piVar4 = (int *)(puVar24 + 1);
                        *piVar4 = *piVar4 + -1;
                        UNLOCK();
                        if (*piVar4 == 0) {
                          (**(code **)*puVar24)(puVar24,1);
                        }
                      }
                      goto LAB_1446be88a;
                    }
                    *(uint **)(puVar19 + 0x10) = puVar19 + 0x4000;
                    LOCK();
                    uVar6 = *puVar19;
                    *puVar19 = *puVar19 + uVar14 + 1;
                    UNLOCK();
                    if ((uVar6 ^ uVar14) != 0xffffffff) break;
                    puVar19 = (uint *)*puVar1;
                    *puVar19 = 0xffffffff;
                    *(uint **)(puVar19 + 0x10) = puVar19 + 0x16;
                    puVar19[0x12] = 0;
                    *puVar1 = puVar19;
                    uVar23 = (longlong)puVar19 + 0x5f;
                    uVar14 = 0;
                  }
                } while( true );
              }
              local_98 = (undefined ***)0x0;
              local_88 = &PTR_LAB_14bf078b0;
              local_a8[0] = &LAB_1446c114e;
              local_118 = local_a8;
              local_80 = param_1;
              local_78 = ppuVar17;
              FUN_14005a792(&DAT_14ca9a440,L"WebMMediaPlayerCreateTextures",&DAT_14cc3294c);
              if (local_a8[0] != (undefined1 *)0x0) {
                pppuVar21 = local_98;
                if (local_98 == (undefined ***)0x0) {
                  pppuVar21 = &local_88;
                }
                (*(code *)(*pppuVar21)[2])();
              }
              goto LAB_1446be88a;
            }
          }
LAB_1446be87f:
          FUN_1446bf2ea(param_1,ppuVar17);
        }
LAB_1446be88a:
        FUN_149915f48(param_1[7],&local_c0);
        ppuVar5 = local_b8;
        lVar7 = *plVar22;
        uVar9 = *(undefined4 *)(lVar7 + 0x14);
        uVar10 = *(undefined4 *)(lVar7 + 0x18);
        uVar11 = *(undefined4 *)(lVar7 + 0x1c);
        puVar8 = ppuVar17[3];
        *(undefined4 *)(local_c0 + 3) = *(undefined4 *)(lVar7 + 0x10);
        *(undefined4 *)((longlong)local_c0 + 0x1c) = uVar9;
        *(undefined4 *)(local_c0 + 4) = uVar10;
        *(undefined4 *)((longlong)local_c0 + 0x24) = uVar11;
        local_c0[6] = puVar8;
        local_c0[5] = puVar8;
        if (local_b8 == (undefined **)0x0) {
          ppuStack_d0 = (undefined **)0x0;
        }
        else {
          LOCK();
          *(int *)(local_b8 + 1) = *(int *)(local_b8 + 1) + 1;
          UNLOCK();
          ppuStack_d0 = local_b8;
          LOCK();
          *(int *)(local_b8 + 1) = *(int *)(local_b8 + 1) + 1;
          UNLOCK();
        }
        local_d8 = local_c0;
        iVar13 = *piVar2;
        local_e0 = param_1;
        local_c8 = ppuVar17;
        if (DAT_14c86a9fc == 0) {
          if (iVar13 != 2) {
            if (iVar13 != 1) goto LAB_1446be8ff;
            local_104 = FUN_140ad26c0();
            DVar15 = GetCurrentThreadId();
            if (local_104 == DVar15) goto LAB_1446be904;
            goto LAB_1446be937;
          }
LAB_1446be904:
          FUN_1446bf99c(local_e0,&local_d8);
        }
        else {
LAB_1446be8ff:
          if (iVar13 == 0x10) goto LAB_1446be904;
LAB_1446be937:
          if (DAT_14ca9a438 == '\0') {
            if ((DAT_14c86a9f8 != '\x01') || (*piVar2 == 2)) goto LAB_1446be904;
            if (*piVar2 == 1) {
              local_104 = FUN_140ad26c0();
              DVar15 = GetCurrentThreadId();
              if (local_104 == DVar15) goto LAB_1446be904;
            }
          }
          if (DAT_14ca9a43c == 0) {
            puVar19 = (uint *)*puVar1;
            if (puVar19 != (uint *)0x0) goto LAB_1446beb32;
            do {
              uVar14 = *(uint *)(*(longlong *)
                                  ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                + 0x318);
              if ((uVar14 & 1) == 0) {
                *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         ) = uVar14 | 1;
                __tlregdtor(&LAB_1446c09a6);
              }
              puVar18 = (undefined4 *)*local_100;
              *local_100 = 0;
              if (puVar18 == (undefined4 *)0x0) {
                puVar18 = _aligned_malloc(0x10000,0x10000);
              }
              *puVar18 = 0xffffffff;
              *(undefined4 **)(puVar18 + 0x10) = puVar18 + 0x16;
              puVar18[0x12] = 0;
              *puVar1 = puVar18;
              FUN_140217a48(puVar1);
              puVar19 = (uint *)*puVar1;
LAB_1446beb32:
              uVar23 = *(longlong *)(puVar19 + 0x10) + 7;
              uVar14 = puVar19[0x12];
              while( true ) {
                puVar24 = (undefined8 *)(uVar23 & 0xfffffffffffffff8);
                if (puVar24 + 0x19 <= puVar19 + 0x4000) {
                  *(undefined8 **)(puVar19 + 0x10) = puVar24 + 0x19;
                  puVar19[0x12] = uVar14 + 1;
                  FUN_1447247dc(puVar24,0);
                  *puVar24 = &PTR_FUN_14bf079a0;
                  puVar24[0x15] = local_e0;
                  puVar24[0x16] = local_d8;
                  puVar24[0x17] = ppuStack_d0;
                  local_d8 = (undefined **)0x0;
                  ppuStack_d0 = (undefined **)0x0;
                  puVar24[0x18] = local_c8;
                  if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                    uVar14 = DAT_14c7585c8 >> 10 & 3;
                    iVar13 = 0;
                    if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
                      bVar25 = (&DAT_149e38edc)[uVar14];
                      iVar13 = 0;
                    }
                    else {
                      bVar25 = 2;
                    }
                  }
                  else {
                    iVar13 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                             *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                    bVar25 = 5;
                  }
                  if (*(code **)(puVar24[0xe] + 0x18) != FUN_144713626) {
                    (**(code **)(puVar24[0xe] + 0x18))(puVar24 + 0xe,puVar24 + 9);
                  }
                  plVar26 = local_f8;
                  puVar24[0xe] = LowLevelTasks::
                                 TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                                 ::
                                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                                 ::vftable;
                  puVar24[9] = puVar24;
                  puVar24[10] = puVar24;
                  lVar7 = *local_f0;
                  if (lVar7 == 0) {
                    if (bVar25 == 6) {
                      bVar25 = 1;
                    }
                    uVar20 = 0;
                  }
                  else {
                    if (bVar25 == 6) {
                      bVar25 = (byte)((ulonglong)*(undefined8 *)(lVar7 + 0x38) >> 0x3b);
                    }
                    uVar20 = *(undefined8 *)(lVar7 + 0x30);
                  }
                  puVar24[0xf] = uVar20;
                  puVar24[0x10] = ((ulonglong)(bVar25 & 7) << 0x3b) + local_e8 | 0xc000000000000000;
                  *(int *)((longlong)puVar24 + 0x1c) = iVar13;
                  if (puVar24 == (undefined8 *)0x0) {
                    local_a8[0] = (undefined1 *)CONCAT71(local_a8[0]._1_7_,1);
                    FUN_1447439e4(0,local_a8);
                  }
                  else {
                    LOCK();
                    *(int *)(puVar24 + 1) = *(int *)(puVar24 + 1) + 1;
                    UNLOCK();
                    local_a8[0] = (undefined1 *)CONCAT71(local_a8[0]._1_7_,1);
                    FUN_1447439e4(puVar24,local_a8);
                    LOCK();
                    piVar4 = (int *)(puVar24 + 1);
                    *piVar4 = *piVar4 + -1;
                    UNLOCK();
                    if (*piVar4 == 0) {
                      (**(code **)*puVar24)(puVar24,1);
                    }
                  }
                  goto LAB_1446bea20;
                }
                *(uint **)(puVar19 + 0x10) = puVar19 + 0x4000;
                LOCK();
                uVar6 = *puVar19;
                *puVar19 = *puVar19 + uVar14 + 1;
                UNLOCK();
                if ((uVar6 ^ uVar14) != 0xffffffff) break;
                puVar19 = (uint *)*puVar1;
                *puVar19 = 0xffffffff;
                *(uint **)(puVar19 + 0x10) = puVar19 + 0x16;
                puVar19[0x12] = 0;
                *puVar1 = puVar19;
                uVar23 = (longlong)puVar19 + 0x5f;
                uVar14 = 0;
              }
            } while( true );
          }
          local_a8[0] = (undefined1 *)0x0;
          local_98 = (undefined ***)0x0;
          local_98 = (undefined ***)FUN_14001cc68(0x28,8);
          ppuVar12 = ppuStack_d0;
          ppuVar3 = local_d8;
          *local_98 = &PTR_LAB_14bf07940;
          local_d8 = (undefined **)0x0;
          ppuStack_d0 = (undefined **)0x0;
          local_98[1] = local_e0;
          local_98[2] = ppuVar3;
          local_98[3] = ppuVar12;
          local_98[4] = ppuVar17;
          if (local_98 + 1 != (undefined ***)0x0) {
            local_a8[0] = &LAB_1446c131a;
          }
          local_118 = local_a8;
          FUN_14005a792(&DAT_14ca9a440,L"WebMMediaPlayerConvertYUVToRGB",&DAT_14cc32950);
          if (local_a8[0] != (undefined1 *)0x0) {
            pppuVar21 = local_98;
            if (local_98 == (undefined ***)0x0) {
              pppuVar21 = &local_88;
            }
            (*(code *)(*pppuVar21)[2])();
          }
        }
LAB_1446bea20:
        ppuVar17 = ppuStack_d0;
        if (ppuStack_d0 != (undefined **)0x0) {
          LOCK();
          ppuVar3 = ppuStack_d0 + 1;
          *(int *)ppuVar3 = *(int *)ppuVar3 + -1;
          UNLOCK();
          if (*(int *)ppuVar3 == 0) {
            (**(code **)*ppuStack_d0)(ppuStack_d0);
            LOCK();
            piVar4 = (int *)((longlong)ppuVar17 + 0xc);
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (*piVar4 == 0) {
              (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
            }
          }
        }
        if (ppuVar5 != (undefined **)0x0) {
          LOCK();
          ppuVar17 = ppuVar5 + 1;
          *(int *)ppuVar17 = *(int *)ppuVar17 + -1;
          UNLOCK();
          if (*(int *)ppuVar17 == 0) {
            (**(code **)*ppuVar5)(ppuVar5);
            LOCK();
            piVar4 = (int *)((longlong)ppuVar5 + 0xc);
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (*piVar4 == 0) {
              (**(code **)(*ppuVar5 + 0x10))(ppuVar5);
            }
          }
        }
        ppuVar17 = local_b8;
        if (local_b8 != (undefined **)0x0) {
          LOCK();
          ppuVar5 = local_b8 + 1;
          *(int *)ppuVar5 = *(int *)ppuVar5 + -1;
          UNLOCK();
          if (*(int *)ppuVar5 == 0) {
            (**(code **)*local_b8)(local_b8);
            LOCK();
            piVar4 = (int *)((longlong)ppuVar17 + 0xc);
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (*piVar4 == 0) {
              (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
            }
          }
        }
        ppuVar17 = (undefined **)FUN_144d82790(param_1,&local_b0);
      }
      plVar22 = plVar22 + 2;
    } while (plVar22 != plVar26);
  }
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446bf2ea FUN_1446bf2ea body=1712 status=ok
// SIG undefined FUN_1446bf2ea(void)

void FUN_1446bf2ea(longlong param_1,longlong param_2)

{
  uint *puVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined1 auStack_188 [32];
  longlong local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  uint local_144;
  undefined4 local_140;
  undefined8 local_13c;
  undefined2 local_134;
  undefined2 uStack_132;
  undefined2 local_130;
  undefined1 local_12e;
  undefined2 local_12d;
  undefined1 local_12b;
  int local_128;
  undefined4 uStack_124;
  wchar_t *pwStack_120;
  longlong local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  uint local_e4;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined2 local_d4;
  undefined2 uStack_d2;
  undefined2 local_d0;
  undefined1 local_ce;
  undefined2 local_cd;
  undefined1 local_cb;
  int local_c8;
  undefined4 uStack_c4;
  wchar_t *pwStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  uint local_84;
  undefined4 local_80;
  undefined8 local_7c;
  undefined2 local_74;
  undefined2 uStack_72;
  undefined2 local_70;
  undefined1 local_6e;
  undefined2 local_6d;
  undefined1 local_6b;
  int local_68;
  undefined4 uStack_64;
  wchar_t *pwStack_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_144 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_7c = CONCAT44(*(uint *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x50));
  uStack_50 = 0;
  uStack_48 = 0;
  uVar7 = *(uint *)(param_2 + 0x1c) >> 1;
  local_dc = CONCAT44(uVar7,*(undefined4 *)(param_2 + 0x54));
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  uStack_e8 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_ce = 0;
  local_100 = 0x100;
  local_cd = 3;
  local_d4 = 1;
  uStack_d2 = 1;
  local_d0 = 0x101;
  local_f8 = 1;
  local_e0 = 0;
  local_cb = 0xff;
  local_c8 = 0;
  pwStack_c0 = L"FWebMVideoDecoder_DecodedU";
  local_13c = CONCAT44(uVar7,*(undefined4 *)(param_2 + 0x58));
  uStack_154 = 0;
  uStack_150 = 0;
  uStack_14c = 0;
  uStack_148 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  local_12e = 0;
  local_160 = 0x100;
  local_12d = 3;
  local_134 = 1;
  uStack_132 = 1;
  local_130 = 0x101;
  local_158 = 1;
  local_140 = 0;
  local_12b = 0xff;
  local_128 = 0;
  pwStack_120 = L"FWebMVideoDecoder_DecodedV";
  local_6e = 0;
  local_a0 = 0x100;
  local_6d = 3;
  local_74 = 1;
  uStack_72 = 1;
  local_70 = 0x101;
  local_98 = 1;
  local_80 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  local_6b = 0xff;
  pwStack_60 = L"FWebMVideoDecoder_DecodedY";
  local_58 = 0;
  local_68 = 0x70;
  local_e4 = local_144;
  local_84 = local_144;
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_168,&DAT_14ca85100);
  plVar6 = (longlong *)(param_1 + 0x40);
  if (plVar6 == &local_168) {
LAB_1446bf525:
    lVar4 = local_168;
    if (local_168 != 0) {
      LOCK();
      puVar1 = (uint *)(local_168 + 8);
      uVar7 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar7 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_168 + 8);
        LOCK();
        uVar7 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar7 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(local_168 + 0xd);
          plVar3 = (longlong *)FUN_14001cc68(0x10,8);
          plVar3[1] = lVar4;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar3 = (longlong)plVar6;
              LOCK();
              bVar9 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar3;
              if (bVar9) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar3 = (longlong)plVar5;
              LOCK();
              bVar9 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar3;
              if (bVar9) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
  }
  else {
    lVar4 = *plVar6;
    *plVar6 = local_168;
    local_168 = 0;
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar7 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar7 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar4 + 8);
        LOCK();
        uVar7 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar7 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar4 + 0xd);
          plVar3 = (longlong *)FUN_14001cc68(0x10,8);
          plVar3[1] = lVar4;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar3 = (longlong)plVar6;
              LOCK();
              bVar9 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar3;
              if (bVar9) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar3 = (longlong)plVar5;
              LOCK();
              bVar9 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar3;
              if (bVar9) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
      goto LAB_1446bf525;
    }
  }
  if (local_c8 == 0) {
    puVar8 = &local_a0;
    local_6e = local_ce;
    local_a0 = local_100;
    local_6d = local_cd;
    local_7c = local_dc;
    local_74 = local_d4;
    uStack_72 = uStack_d2;
    local_70 = local_d0;
    local_98 = local_f8;
    uStack_94 = uStack_f4;
    uStack_90 = uStack_f0;
    uStack_8c = uStack_ec;
    uStack_88 = uStack_e8;
    local_80 = local_e0;
    local_6b = local_cb;
    local_84 = local_e4;
    local_68 = local_c8;
    uStack_64 = uStack_c4;
    pwStack_60 = pwStack_c0;
    local_58 = local_b8;
    uStack_50 = uStack_b0;
    uStack_48 = local_a8;
    local_68 = FUN_1431edf91(local_100,local_b8 != 0);
    lVar4 = *DAT_14ca83900;
  }
  else {
    lVar4 = *DAT_14ca83900;
    puVar8 = &local_100;
  }
  (**(code **)(lVar4 + 0x1a0))(DAT_14ca83900,&local_168,&DAT_14ca85100,puVar8);
  plVar6 = (longlong *)(param_1 + 0x48);
  if (plVar6 == &local_168) {
LAB_1446bf6d5:
    lVar4 = local_168;
    if (local_168 != 0) {
      LOCK();
      puVar1 = (uint *)(local_168 + 8);
      uVar7 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar7 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_168 + 8);
        LOCK();
        uVar7 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar7 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(local_168 + 0xd);
          plVar3 = (longlong *)FUN_14001cc68(0x10,8);
          plVar3[1] = lVar4;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar3 = (longlong)plVar6;
              LOCK();
              bVar9 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar3;
              if (bVar9) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar3 = (longlong)plVar5;
              LOCK();
              bVar9 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar3;
              if (bVar9) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
  }
  else {
    lVar4 = *plVar6;
    *plVar6 = local_168;
    local_168 = 0;
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar7 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar7 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar4 + 8);
        LOCK();
        uVar7 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar7 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar4 + 0xd);
          plVar3 = (longlong *)FUN_14001cc68(0x10,8);
          plVar3[1] = lVar4;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar3 = (longlong)plVar6;
              LOCK();
              bVar9 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar3;
              if (bVar9) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar3 = (longlong)plVar5;
              LOCK();
              bVar9 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar3;
              if (bVar9) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
      goto LAB_1446bf6d5;
    }
  }
  if (local_128 == 0) {
    puVar8 = &local_a0;
    local_6e = local_12e;
    local_a0 = local_160;
    local_6d = local_12d;
    local_7c = local_13c;
    local_74 = local_134;
    uStack_72 = uStack_132;
    local_70 = local_130;
    local_98 = local_158;
    uStack_94 = uStack_154;
    uStack_90 = uStack_150;
    uStack_8c = uStack_14c;
    uStack_88 = uStack_148;
    local_80 = local_140;
    local_6b = local_12b;
    local_84 = local_144;
    local_68 = local_128;
    uStack_64 = uStack_124;
    pwStack_60 = pwStack_120;
    local_58 = local_118;
    uStack_50 = uStack_110;
    uStack_48 = local_108;
    local_68 = FUN_1431edf91(local_160,local_118 != 0);
    lVar4 = *DAT_14ca83900;
  }
  else {
    lVar4 = *DAT_14ca83900;
    puVar8 = &local_160;
  }
  (**(code **)(lVar4 + 0x1a0))(DAT_14ca83900,&local_168,&DAT_14ca85100,puVar8);
  plVar6 = (longlong *)(param_1 + 0x50);
  if (plVar6 != &local_168) {
    lVar4 = *plVar6;
    *plVar6 = local_168;
    local_168 = 0;
    if (lVar4 == 0) goto LAB_1446bf8d6;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar7 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar7 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar7 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar7 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(lVar4 + 0xd);
        plVar3 = (longlong *)FUN_14001cc68(0x10,8);
        plVar3[1] = lVar4;
        plVar6 = DAT_14ca843c0;
        plVar5 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar3 = (longlong)plVar6;
            LOCK();
            bVar9 = plVar6 != DAT_14ca843c0;
            plVar5 = plVar3;
            if (bVar9) {
              plVar6 = DAT_14ca843c0;
              plVar5 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar5;
            UNLOCK();
          } while (bVar9);
        }
        else {
          do {
            *plVar3 = (longlong)plVar5;
            LOCK();
            bVar9 = plVar5 != DAT_14ca843c8;
            plVar6 = plVar3;
            if (bVar9) {
              plVar5 = DAT_14ca843c8;
              plVar6 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar6;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
  lVar4 = local_168;
  if (local_168 != 0) {
    LOCK();
    puVar1 = (uint *)(local_168 + 8);
    uVar7 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar7 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_168 + 8);
      LOCK();
      uVar7 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar7 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(local_168 + 0xd);
        plVar3 = (longlong *)FUN_14001cc68(0x10,8);
        plVar3[1] = lVar4;
        plVar6 = DAT_14ca843c0;
        plVar5 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar3 = (longlong)plVar6;
            LOCK();
            bVar9 = plVar6 != DAT_14ca843c0;
            plVar5 = plVar3;
            if (bVar9) {
              plVar6 = DAT_14ca843c0;
              plVar5 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar5;
            UNLOCK();
          } while (bVar9);
        }
        else {
          do {
            *plVar3 = (longlong)plVar5;
            LOCK();
            bVar9 = plVar5 != DAT_14ca843c8;
            plVar6 = plVar3;
            if (bVar9) {
              plVar5 = DAT_14ca843c8;
              plVar6 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar6;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
LAB_1446bf8d6:
  if ((local_40 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1446bf99c FUN_1446bf99c body=4105 status=ok
// SIG undefined FUN_1446bf99c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446bf99c(longlong param_1,longlong *param_2)

{
  ulonglong **ppuVar1;
  ulonglong *puVar2;
  uint *puVar3;
  int *piVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auVar13 [4];
  longlong *plVar14;
  void *pvVar15;
  ulonglong *puVar16;
  longlong lVar17;
  wchar_t *pwVar18;
  undefined8 uVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong *plVar22;
  int iVar23;
  uint uVar24;
  byte bVar25;
  uint uVar26;
  undefined8 *puVar27;
  wchar_t *_Dest;
  bool bVar28;
  undefined1 auStack_3d8 [32];
  longlong *local_3b8;
  ulonglong *local_3b0;
  undefined1 *local_3a8;
  undefined1 *local_3a0;
  undefined8 local_398;
  longlong *local_390;
  longlong *local_388;
  longlong *local_380;
  longlong *local_378;
  longlong local_370;
  longlong local_368;
  longlong local_360;
  undefined1 local_354 [11];
  undefined1 local_349;
  undefined1 local_348 [8];
  undefined1 auStack_340 [8];
  ulonglong *local_338;
  undefined8 local_330;
  undefined4 local_328;
  undefined2 local_324;
  undefined1 local_278 [16];
  undefined1 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined1 local_250 [7];
  undefined1 auStack_249 [5];
  undefined1 auStack_244 [3];
  undefined1 auStack_241 [5];
  byte abStack_23c [3];
  undefined1 uStack_239;
  ulonglong local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  uint uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 local_20c;
  ulonglong local_208;
  undefined8 uStack_200;
  wchar_t *local_1f8;
  undefined1 auStack_1f0 [16];
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined8 uStack_1d4;
  undefined8 local_1cc;
  undefined8 uStack_1c4;
  undefined8 local_1bc;
  undefined8 uStack_1b4;
  undefined8 local_1ac;
  undefined5 uStack_1a4;
  undefined3 uStack_19f;
  undefined5 uStack_19c;
  undefined8 uStack_197;
  undefined1 local_188 [8];
  undefined1 auStack_180 [8];
  undefined1 local_178 [4];
  byte bStack_174;
  undefined3 uStack_173;
  uint local_170;
  undefined8 uStack_168;
  undefined1 local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  ushort local_88;
  undefined8 local_80;
  ushort local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  plVar22 = (longlong *)*param_2;
  plVar21 = (longlong *)param_2[1];
  if (plVar21 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
    UNLOCK();
  }
  lVar7 = param_2[2];
  uStack_21c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_238 = 0x119;
  uStack_214 = (undefined4)plVar22[5];
  uStack_210 = (undefined4)((ulonglong)plVar22[5] >> 0x20);
  local_20c = 0x10001;
  uStack_230 = 1;
  uStack_218 = 0;
  uStack_22c = 0;
  uStack_228 = 0;
  uStack_224 = 0;
  uStack_220 = 0;
  local_208 = CONCAT26(local_208._6_2_,0xff0002000101);
  uStack_200 = CONCAT44(uStack_200._4_4_,0x70);
  local_1f8 = L"FWebMMediaTextureSample_DummyTexture2D";
  auStack_1f0 = (undefined1  [16])0x0;
  local_1e0 = 0;
  uStack_1dc = 0;
  local_390 = plVar22;
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_338,&DAT_14ca85100,&local_238);
  ppuVar1 = (ulonglong **)(plVar22 + 2);
  if (ppuVar1 != &local_338) {
    puVar16 = *ppuVar1;
    *ppuVar1 = local_338;
    local_338 = (ulonglong *)0x0;
    if (puVar16 == (ulonglong *)0x0) goto LAB_1446bfb2f;
    LOCK();
    puVar2 = puVar16 + 1;
    uVar10 = *puVar2;
    *(uint *)puVar2 = (uint)*puVar2 - 1;
    UNLOCK();
    if ((uVar10 & 0x3fffffff) == 1) {
      puVar2 = puVar16 + 1;
      LOCK();
      uVar10 = *puVar2;
      *(uint *)puVar2 = (uint)*puVar2 | 0x40000000;
      UNLOCK();
      if (((uint)uVar10 >> 0x1e & 1) == 0) {
        bVar5 = *(byte *)((longlong)puVar16 + 0xd);
        plVar14 = (longlong *)FUN_14001cc68(0x10,8);
        plVar14[1] = (longlong)puVar16;
        plVar22 = DAT_14ca843c0;
        plVar20 = DAT_14ca843c8;
        if ((bVar5 & 2) == 0) {
          do {
            *plVar14 = (longlong)plVar22;
            LOCK();
            bVar28 = plVar22 != DAT_14ca843c0;
            plVar20 = plVar14;
            if (bVar28) {
              plVar22 = DAT_14ca843c0;
              plVar20 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar20;
            UNLOCK();
          } while (bVar28);
        }
        else {
          do {
            *plVar14 = (longlong)plVar20;
            LOCK();
            bVar28 = plVar20 != DAT_14ca843c8;
            plVar22 = plVar14;
            if (bVar28) {
              plVar20 = DAT_14ca843c8;
              plVar22 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar22;
            UNLOCK();
          } while (bVar28);
        }
      }
    }
  }
  puVar16 = local_338;
  if (local_338 != (ulonglong *)0x0) {
    LOCK();
    puVar2 = local_338 + 1;
    uVar10 = *puVar2;
    *(uint *)puVar2 = (uint)*puVar2 - 1;
    UNLOCK();
    if ((uVar10 & 0x3fffffff) == 1) {
      puVar2 = local_338 + 1;
      LOCK();
      uVar10 = *puVar2;
      *(uint *)puVar2 = (uint)*puVar2 | 0x40000000;
      UNLOCK();
      if (((uint)uVar10 >> 0x1e & 1) == 0) {
        bVar5 = *(byte *)((longlong)local_338 + 0xd);
        plVar14 = (longlong *)FUN_14001cc68(0x10,8);
        plVar14[1] = (longlong)puVar16;
        plVar22 = DAT_14ca843c0;
        plVar20 = DAT_14ca843c8;
        if ((bVar5 & 2) == 0) {
          do {
            *plVar14 = (longlong)plVar22;
            LOCK();
            bVar28 = plVar22 != DAT_14ca843c0;
            plVar20 = plVar14;
            if (bVar28) {
              plVar22 = DAT_14ca843c0;
              plVar20 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar20;
            UNLOCK();
          } while (bVar28);
        }
        else {
          do {
            *plVar14 = (longlong)plVar20;
            LOCK();
            bVar28 = plVar20 != DAT_14ca843c8;
            plVar22 = plVar14;
            if (bVar28) {
              plVar20 = DAT_14ca843c8;
              plVar22 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar22;
            UNLOCK();
          } while (bVar28);
        }
      }
    }
  }
LAB_1446bfb2f:
  iVar6 = *(int *)(lVar7 + 0x1c);
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  local_238 = local_238 & 0xffffffff00000000;
  local_398 = 0;
  local_3a0 = (undefined1 *)CONCAT71(local_3a0._1_7_,1);
  local_3a8 = (undefined1 *)((ulonglong)local_3a8 & 0xffffffffffffff00);
  local_3b8 = (longlong *)CONCAT44(local_3b8._4_4_,1);
  local_3b0 = &local_238;
  pvVar15 = (void *)(**(code **)(*DAT_14ca83900 + 0x430))(DAT_14ca83900,&DAT_14ca85100,uVar8,0);
  if (pvVar15 != (void *)0x0) {
    if ((int)local_238 == *(int *)(lVar7 + 0x50)) {
      memcpy(pvVar15,*(void **)(lVar7 + 0x30),(longlong)((int)local_238 * iVar6));
    }
    else if (0 < iVar6) {
      iVar23 = 0;
      do {
        memcpy((void *)((ulonglong)(uint)((int)local_238 * iVar23) + (longlong)pvVar15),
               (void *)((longlong)*(int *)(lVar7 + 0x50) * (longlong)iVar23 +
                       *(longlong *)(lVar7 + 0x30)),(longlong)*(int *)(lVar7 + 0x50));
        iVar23 = iVar23 + 1;
      } while (iVar6 != iVar23);
    }
    local_3b0 = (ulonglong *)CONCAT71(local_3b0._1_7_,1);
    local_3b8 = (longlong *)((ulonglong)local_3b8 & 0xffffffffffffff00);
    (**(code **)(*DAT_14ca83900 + 0x438))(DAT_14ca83900,&DAT_14ca85100,uVar8,0);
  }
  uVar24 = *(uint *)(lVar7 + 0x1c);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  local_238 = local_238 & 0xffffffff00000000;
  local_398 = 0;
  local_3a0 = (undefined1 *)CONCAT71(local_3a0._1_7_,1);
  local_3a8 = (undefined1 *)((ulonglong)local_3a8 & 0xffffffffffffff00);
  local_3b8 = (longlong *)CONCAT44(local_3b8._4_4_,1);
  local_3b0 = &local_238;
  pvVar15 = (void *)(**(code **)(*DAT_14ca83900 + 0x430))(DAT_14ca83900,&DAT_14ca85100,uVar8,0);
  if (pvVar15 != (void *)0x0) {
    uVar26 = uVar24 >> 1;
    if ((int)local_238 == *(int *)(lVar7 + 0x54)) {
      memcpy(pvVar15,*(void **)(lVar7 + 0x38),(longlong)(int)((int)local_238 * uVar26));
    }
    else if (1 < uVar24) {
      uVar24 = 0;
      do {
        memcpy((void *)((ulonglong)((int)local_238 * uVar24) + (longlong)pvVar15),
               (void *)((longlong)*(int *)(lVar7 + 0x54) * (longlong)(int)uVar24 +
                       *(longlong *)(lVar7 + 0x38)),(longlong)*(int *)(lVar7 + 0x54));
        uVar24 = uVar24 + 1;
      } while (uVar26 != uVar24);
    }
    local_3b0 = (ulonglong *)CONCAT71(local_3b0._1_7_,1);
    local_3b8 = (longlong *)((ulonglong)local_3b8 & 0xffffffffffffff00);
    (**(code **)(*DAT_14ca83900 + 0x438))(DAT_14ca83900,&DAT_14ca85100,uVar8,0);
  }
  uVar24 = *(uint *)(lVar7 + 0x1c);
  uVar8 = *(undefined8 *)(param_1 + 0x50);
  local_238 = local_238 & 0xffffffff00000000;
  local_398 = 0;
  local_3a0 = (undefined1 *)CONCAT71(local_3a0._1_7_,1);
  local_3a8 = (undefined1 *)((ulonglong)local_3a8 & 0xffffffffffffff00);
  local_3b8 = (longlong *)CONCAT44(local_3b8._4_4_,1);
  local_3b0 = &local_238;
  pvVar15 = (void *)(**(code **)(*DAT_14ca83900 + 0x430))(DAT_14ca83900,&DAT_14ca85100,uVar8,0);
  if (pvVar15 != (void *)0x0) {
    uVar26 = uVar24 >> 1;
    if ((int)local_238 == *(int *)(lVar7 + 0x58)) {
      memcpy(pvVar15,*(void **)(lVar7 + 0x40),(longlong)(int)((int)local_238 * uVar26));
    }
    else if (1 < uVar24) {
      uVar24 = 0;
      do {
        memcpy((void *)((ulonglong)((int)local_238 * uVar24) + (longlong)pvVar15),
               (void *)((longlong)*(int *)(lVar7 + 0x58) * (longlong)(int)uVar24 +
                       *(longlong *)(lVar7 + 0x40)),(longlong)*(int *)(lVar7 + 0x58));
        uVar24 = uVar24 + 1;
      } while (uVar26 != uVar24);
    }
    local_3b0 = (ulonglong *)CONCAT71(local_3b0._1_7_,1);
    local_3b8 = (longlong *)((ulonglong)local_3b8 & 0xffffffffffffff00);
    (**(code **)(*DAT_14ca83900 + 0x438))(DAT_14ca83900,&DAT_14ca85100,uVar8,0);
  }
  puVar16 = (ulonglong *)(**(code **)(*local_390 + 0x48))();
  local_238 = 0xffffffffffffffff;
  uStack_230 = 0xffffffff;
  uStack_228 = SUB84(puVar16,0);
  uVar11 = uStack_228;
  uStack_224 = (undefined4)((ulonglong)puVar16 >> 0x20);
  uVar12 = uStack_224;
  uStack_220 = CONCAT31(uStack_220._1_3_,1);
  uStack_21c = 0x60;
  uStack_218 = 0x1000;
  uStack_214 = 0;
  local_208 = local_208 & 0xffffffffffffff00;
  local_330 = CONCAT44(local_330._4_4_,1);
  local_338 = &local_238;
  FUN_144760590(&DAT_14ca85100,&local_338,0);
  lVar17 = 0x15;
  do {
    *(undefined1 (*) [16])(local_354 + lVar17 + 7) = (undefined1  [16])0x0;
    *(undefined4 *)(auStack_340 + lVar17 + 3) = 0xffffffff;
    *(undefined2 *)(auStack_340 + lVar17 + 7) = 0;
    lVar17 = lVar17 + 0x18;
  } while (lVar17 != 0xd5);
  local_264 = 0;
  local_278 = (undefined1  [16])0x0;
  local_268 = 0;
  local_260 = 0xffffffff;
  uStack_25c = 0xffffffff;
  uStack_258 = 0xffffffff;
  uStack_254 = 0xffffffff;
  _local_250 = 0;
  auStack_249._1_4_ = auStack_249._1_4_ & 0xffffff00;
  _auStack_244 = 0;
  auStack_241._1_3_ = 0;
  local_330 = 0;
  local_328 = 0xffffffff;
  local_324 = 0x500;
  _Dest = (wchar_t *)((longlong)DAT_14ca85100 + 1U & 0xfffffffffffffffe);
  pwVar18 = _Dest + 0x11;
  local_388 = plVar21;
  local_338 = puVar16;
  if (DAT_14ca85108 < pwVar18) {
    FUN_140023dd8(&DAT_14ca85100,0x24);
    _Dest = (wchar_t *)((longlong)DAT_14ca85100 + 1U & 0xfffffffffffffffe);
    pwVar18 = _Dest + 0x11;
  }
  DAT_14ca85100 = pwVar18;
  wcscpy(_Dest,L"ConvertYUVtoRGBA");
  puVar27 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
  pwVar18 = (wchar_t *)(puVar27 + 0x23);
  if (DAT_14ca85108 < pwVar18) {
    FUN_140023dd8(&DAT_14ca85100,0x120);
    puVar27 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    pwVar18 = (wchar_t *)(puVar27 + 0x23);
  }
  DAT_14ca85160 = DAT_14ca85160 + 1;
  DAT_14ca85100 = pwVar18;
  *DAT_14ca85130 = puVar27;
  DAT_14ca85130 = puVar27 + 1;
  puVar27[1] = 0;
  *puVar27 = &PTR_FUN_14a217b50;
  memcpy(puVar27 + 2,&local_338,0xe8);
  puVar27[0x1f] = 0;
  puVar27[0x20] = CONCAT44(_auStack_244,auStack_249._1_4_);
  *(uint *)((longlong)puVar27 + 0x107) = CONCAT31(auStack_241._1_3_,auStack_241[0]);
  puVar27[0x22] = _Dest;
  lVar17 = 0x11;
  do {
    *(undefined8 *)(local_250 + lVar17 + 7) = 0;
    *(undefined8 *)(auStack_244 + lVar17 + 3) = 0xffffffff00000000;
    *(undefined2 *)(&uStack_239 + lVar17) = 0;
    lVar17 = lVar17 + 0x18;
  } while (lVar17 != 0xd1);
  _local_178 = _local_178 & 0xffffff0000000000;
  lVar17 = 0xd9;
  do {
    *(undefined8 *)(local_250 + lVar17 + 7) = 0;
    *(undefined8 *)(auStack_244 + lVar17 + 3) = 0xffffffff00000000;
    *(undefined2 *)(&uStack_239 + lVar17) = 0;
    lVar17 = lVar17 + 0x18;
  } while (lVar17 != 0x199);
  local_b0 = 0;
  local_80 = 0;
  local_78 = local_78 & 0xff;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_88 = local_88 & 0xff00;
  lVar17 = 0x15;
  do {
    if (*(longlong *)(local_354 + lVar17 + 7) == 0) break;
    *(longlong *)(local_250 + lVar17 + 3) = *(longlong *)(local_354 + lVar17 + 7);
    bVar5 = *(byte *)((longlong)&local_338 + lVar17);
    bVar25 = bVar5 >> 2;
    auStack_241[lVar17 + 4] = bVar25;
    abStack_23c[lVar17] = bVar5 & 3;
    *(undefined4 *)(auStack_244 + lVar17 + 3) = *(undefined4 *)(auStack_340 + lVar17 + 3);
    *(uint *)(auStack_249 + lVar17 + 4) = (uint)(byte)auStack_340[lVar17 + 7];
    iVar6 = (int)local_178 + 1;
    bVar5 = bStack_174 | bVar25 == 2;
    _local_178 = CONCAT14(bVar5,iVar6);
    if (*(longlong *)(local_348 + lVar17 + 3) != 0) {
      local_b0 = 1;
      uVar8 = *(undefined8 *)(auStack_249 + lVar17 + 4);
      *(undefined8 *)(local_188 + lVar17 + 3) = *(undefined8 *)(local_250 + lVar17 + 3);
      *(undefined8 *)(auStack_180 + lVar17 + 3) = uVar8;
      *(undefined8 *)(local_178 + lVar17 + 3) = *(undefined8 *)(auStack_241 + lVar17 + 4);
      *(longlong *)(local_188 + lVar17 + 3) = *(longlong *)(local_348 + lVar17 + 3);
    }
    lVar17 = lVar17 + 0x18;
  } while (lVar17 != 0xd5);
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_a8 = ZEXT816(0);
  auVar13 = local_178;
  if (0 < (longlong)(int)local_178) {
    memcpy(&DAT_14ca851a8,&local_238,(longlong)(int)local_178 * 0x18);
  }
  _DAT_14ca851a0 = (int)auVar13;
  _DAT_14ca85268 = 0;
  uRam000000014ca85270 = 0;
  DAT_14ca8527a = 0;
  _DAT_14ca85278 = 0;
  DAT_14ca8527b = DAT_14ca8527b & 0xfc | 2;
  uVar8 = *(undefined8 *)
           (&DAT_14ca8c1f0 +
           (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
  uVar19 = FUN_1460af3ae();
  lVar17 = 0;
  FUN_1448e935e(uVar8,&local_238,uVar19,0);
  FUN_1460af3ae();
  auStack_340 = (undefined1  [8])CONCAT44(uStack_22c,uStack_230);
  local_348 = (undefined1  [8])local_238;
  uVar19 = FUN_1460ae50e();
  FUN_1448e935e(uVar8,&local_238,uVar19,0);
  FUN_1460ae50e();
  uVar10 = local_238;
  lVar9 = CONCAT44(uStack_22c,uStack_230);
  local_1f8 = (wchar_t *)0x0;
  auStack_1f0 = ZEXT816(0);
  local_208 = 0;
  uStack_200 = 0;
  uStack_218 = 0;
  uStack_214 = 0;
  uStack_210 = 0;
  local_20c = 0;
  uStack_228 = 0;
  uStack_224 = 0;
  uStack_220 = 0;
  uStack_21c = 0;
  local_238 = 0;
  uStack_230 = 0;
  uStack_22c = 0;
  uStack_1dc = 0;
  uStack_1d8 = 0;
  uStack_1d4 = 0;
  local_1cc = 0;
  uStack_1c4 = 0;
  local_1bc = 0;
  uStack_1b4 = 0;
  local_1ac = 0;
  uStack_1a4 = 0;
  uStack_19f = 0;
  uStack_19c = 0;
  uStack_197 = 0;
  local_188 = (undefined1  [8])0x0;
  auStack_180 = (undefined1  [8])0x0;
  _local_178 = 0;
  local_170 = 1;
  uStack_168 = 0;
  FUN_144b0e33a(&DAT_14ca85100,&local_238);
  local_208 = DAT_14ca111f0;
  uStack_200 = DAT_14c9c0db0;
  local_1f8 = (wchar_t *)DAT_14c9c0d98;
  local_238 = DAT_14cc32930;
  if ((uVar10 != 0) &&
     (lVar17 = *(longlong *)
                (*(longlong *)(*(longlong *)(lVar9 + 8) + 0x50) +
                (longlong)*(int *)(uVar10 + 0xd4) * 8), lVar17 == 0)) {
    lVar17 = FUN_1400bafc2();
  }
  uStack_230 = (undefined4)lVar17;
  uStack_22c = (undefined4)((ulonglong)lVar17 >> 0x20);
  if (local_348 == (undefined1  [8])0x0) {
    lVar17 = 0;
  }
  else {
    lVar17 = *(longlong *)
              (*(longlong *)(*(longlong *)((longlong)auStack_340 + 8) + 0x50) +
              (longlong)*(int *)((longlong)local_348 + 0xd4) * 8);
    if (lVar17 == 0) {
      lVar17 = FUN_1400bafc2();
    }
  }
  uStack_228 = (undefined4)lVar17;
  uStack_224 = (undefined4)((ulonglong)lVar17 >> 0x20);
  local_1e0 = 1;
  lVar17 = FUN_140028f18(&DAT_14ca85100,&local_238);
  plVar22 = local_388;
  if ((lVar17 != 0) && ((local_170 & 0x10000000) == 0)) {
    DAT_14ca85290 = CONCAT44(uStack_22c,uStack_230);
    _DAT_14ca852a8 = uStack_218;
    uRam000000014ca852ac = uStack_214;
    uRam000000014ca852b0 = uStack_210;
    uRam000000014ca852b4 = local_20c;
    DAT_14ca85298._0_4_ = uStack_228;
    DAT_14ca85298._4_4_ = uStack_224;
    uRam000000014ca852a0 = uStack_220;
    uRam000000014ca852a4 = uStack_21c;
    _DAT_14ca85288 = local_238;
    puVar27 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    pwVar18 = (wchar_t *)(puVar27 + 4);
    if (DAT_14ca85108 < pwVar18) {
      FUN_140023dd8(&DAT_14ca85100,0x28);
      puVar27 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      pwVar18 = (wchar_t *)(puVar27 + 4);
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = pwVar18;
    *DAT_14ca85130 = puVar27;
    DAT_14ca85130 = puVar27 + 1;
    puVar27[1] = 0;
    *puVar27 = &PTR_LAB_14a37d348;
    puVar27[2] = lVar17;
    *(undefined4 *)(puVar27 + 3) = 0;
    *(undefined1 *)((longlong)puVar27 + 0x1c) = 1;
  }
  local_349 = 1;
  local_354._0_8_ = *(undefined8 *)(lVar7 + 0x18);
  lVar17 = 0;
  local_360 = *(longlong *)(param_1 + 0x50);
  if (*(char *)(*(longlong *)(param_1 + 0x50) + 0x52) != '\0') {
    local_360 = lVar17;
  }
  local_368 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(*(longlong *)(param_1 + 0x48) + 0x52) != '\0') {
    local_368 = lVar17;
  }
  local_370 = *(longlong *)(param_1 + 0x40);
  if (*(char *)(*(longlong *)(param_1 + 0x40) + 0x52) != '\0') {
    local_370 = lVar17;
  }
  if (local_348 != (undefined1  [8])0x0) {
    lVar17 = *(longlong *)
              (*(longlong *)(*(longlong *)((longlong)auStack_340 + 8) + 0x50) +
              (longlong)*(int *)((longlong)local_348 + 0xd4) * 8);
    if (lVar17 == 0) {
      lVar17 = FUN_1400bafc2(*(longlong *)((longlong)auStack_340 + 8),
                             (longlong)*(int *)((longlong)local_348 + 0xd4),1);
    }
  }
  local_3a0 = &local_349;
  local_3a8 = local_354;
  local_3b0 = (ulonglong *)&local_360;
  local_3b8 = &local_368;
  FUN_149916ff6(&DAT_14ca85100,local_348,lVar17,&local_370);
  uVar24 = *(uint *)(lVar7 + 0x1c);
  uVar26 = *(uint *)(lVar7 + 0x18);
  puVar27 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
  pwVar18 = (wchar_t *)(puVar27 + 5);
  if (DAT_14ca85108 < pwVar18) {
    FUN_140023dd8(&DAT_14ca85100,0x30);
    puVar27 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    pwVar18 = (wchar_t *)(puVar27 + 5);
  }
  DAT_14ca85160 = DAT_14ca85160 + 1;
  DAT_14ca85100 = pwVar18;
  *DAT_14ca85130 = puVar27;
  DAT_14ca85130 = puVar27 + 1;
  puVar27[1] = 0;
  puVar27[2] = 0;
  *puVar27 = &PTR_LAB_14a1e7fc8;
  *(undefined4 *)(puVar27 + 3) = 0;
  *(float *)((longlong)puVar27 + 0x1c) = (float)uVar26;
  *(float *)(puVar27 + 4) = (float)uVar24;
  *(undefined4 *)((longlong)puVar27 + 0x24) = 0x3f800000;
  uVar8 = DAT_14cc32938;
  puVar27 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
  pwVar18 = (wchar_t *)(puVar27 + 5);
  if (DAT_14ca85108 < pwVar18) {
    FUN_140023dd8(&DAT_14ca85100,0x30);
    puVar27 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    pwVar18 = (wchar_t *)(puVar27 + 5);
  }
  DAT_14ca85160 = DAT_14ca85160 + 1;
  DAT_14ca85100 = pwVar18;
  *DAT_14ca85130 = puVar27;
  DAT_14ca85130 = puVar27 + 1;
  puVar27[1] = 0;
  *puVar27 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar27 + 2) = 0;
  puVar27[3] = uVar8;
  *(undefined4 *)(puVar27 + 4) = 0;
  puVar27 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
  pwVar18 = (wchar_t *)(puVar27 + 4);
  if (DAT_14ca85108 < pwVar18) {
    FUN_140023dd8(&DAT_14ca85100,0x28);
    puVar27 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    pwVar18 = (wchar_t *)(puVar27 + 4);
  }
  DAT_14ca85160 = DAT_14ca85160 + 1;
  DAT_14ca85100 = pwVar18;
  *DAT_14ca85130 = puVar27;
  DAT_14ca85130 = puVar27 + 1;
  puVar27[1] = 0;
  *puVar27 = &PTR_LAB_14a1fc200;
  puVar27[2] = 0x200000000;
  *(undefined4 *)(puVar27 + 3) = 1;
  if ((DAT_14ca8527b & 8) != 0) {
    (**(code **)(*DAT_14ca83900 + 0x2a0))(DAT_14ca83900,&DAT_14ca85100,1);
    DAT_14ca8527b = DAT_14ca8527b & 0xf7;
  }
  puVar27 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
  pwVar18 = (wchar_t *)(puVar27 + 2);
  if (DAT_14ca85108 < pwVar18) {
    FUN_140023dd8(&DAT_14ca85100,0x18);
    puVar27 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    pwVar18 = (wchar_t *)(puVar27 + 2);
  }
  DAT_14ca85160 = DAT_14ca85160 + 1;
  DAT_14ca85100 = pwVar18;
  *DAT_14ca85130 = puVar27;
  DAT_14ca85130 = puVar27 + 1;
  puVar27[1] = 0;
  *puVar27 = &PTR_LAB_14a217b58;
  DAT_14ca8527b = DAT_14ca8527b & 0xfd;
  _DAT_14ca85278 = 0;
  local_238 = 0xffffffffffffffff;
  uStack_230 = 0xffffffff;
  uStack_220 = CONCAT31(uStack_220._1_3_,1);
  uStack_21c = 0x1000;
  uStack_218 = 0x60;
  uStack_214 = 0;
  local_208 = local_208 & 0xffffffffffffff00;
  auStack_340._0_4_ = 1;
  local_348 = (undefined1  [8])&local_238;
  uStack_228 = uVar11;
  uStack_224 = uVar12;
  FUN_144760590(&DAT_14ca85100,local_348,0);
  puVar27 = *(undefined8 **)(param_1 + 0x60);
  local_380 = local_390;
  local_378 = plVar22;
  if (plVar22 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
    UNLOCK();
  }
  (**(code **)*puVar27)(puVar27,&local_380);
  lVar7 = _local_250;
  if (_local_250 != 0) {
    LOCK();
    puVar3 = (uint *)(_local_250 + 8);
    uVar24 = *puVar3;
    *puVar3 = *puVar3 - 1;
    UNLOCK();
    if ((uVar24 & 0x3fffffff) == 1) {
      puVar3 = (uint *)(_local_250 + 8);
      LOCK();
      uVar24 = *puVar3;
      *puVar3 = *puVar3 | 0x40000000;
      UNLOCK();
      if ((uVar24 >> 0x1e & 1) == 0) {
        bVar5 = *(byte *)(_local_250 + 0xd);
        plVar14 = (longlong *)FUN_14001cc68(0x10,8);
        plVar14[1] = lVar7;
        plVar21 = DAT_14ca843c0;
        plVar20 = DAT_14ca843c8;
        if ((bVar5 & 2) == 0) {
          do {
            *plVar14 = (longlong)plVar21;
            LOCK();
            bVar28 = plVar21 != DAT_14ca843c0;
            plVar20 = plVar14;
            if (bVar28) {
              plVar21 = DAT_14ca843c0;
              plVar20 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar20;
            UNLOCK();
          } while (bVar28);
        }
        else {
          do {
            *plVar14 = (longlong)plVar20;
            LOCK();
            bVar28 = plVar20 != DAT_14ca843c8;
            plVar21 = plVar14;
            if (bVar28) {
              plVar20 = DAT_14ca843c8;
              plVar21 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar21;
            UNLOCK();
          } while (bVar28);
        }
      }
    }
  }
  if (plVar22 != (longlong *)0x0) {
    LOCK();
    plVar21 = plVar22 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*plVar22)(plVar22);
      LOCK();
      piVar4 = (int *)((longlong)plVar22 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_3d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1446c09ce FUN_1446c09ce body=73 status=ok
// SIG undefined FUN_1446c09ce(void)

void FUN_1446c09ce(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  if ((param_1[1] != 0) && ((*(byte *)(param_1[1] + 0xa0) & 1) == 0)) {
    FUN_14009fd82(DAT_14c82b500,param_1 + 1,0xff);
  }
  FUN_14991494e(uVar1,param_1 + 2);
  return;
}



// FUNCTION 1446c0a22 FUN_1446c0a22 body=29 status=ok
// SIG undefined FUN_1446c0a22(void)

void FUN_1446c0a22(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1446c0a40 FUN_1446c0a40 body=94 status=ok
// SIG undefined FUN_1446c0a40(void)

undefined8 * FUN_1446c0a40(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_LAB_14bf07780;
  FUN_14991678f(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446c0a9e FUN_1446c0a9e body=56 status=ok
// SIG undefined FUN_1446c0a9e(void)

undefined8 * FUN_1446c0a9e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bf07800;
  FUN_144725486();
  FUN_1446c0fa4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


