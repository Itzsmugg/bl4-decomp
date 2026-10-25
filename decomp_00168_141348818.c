// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141348818 FUN_141348818 body=294 status=ok
// SIG undefined FUN_141348818(void)

void FUN_141348818(longlong param_1,longlong *param_2,ulonglong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((param_3 & 1) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
     (*(char *)(param_1 + 0x48) == '\0')) {
    lVar4 = FUN_14011c349();
    if (param_2 != (longlong *)0x0) {
      uVar5 = FUN_140e1f0aa();
      lVar6 = (**(code **)(*param_2 + 0x288))(param_2,uVar5);
      if (lVar6 != 0) {
        uVar5 = FUN_140e1f0aa();
        lVar7 = FUN_144718840(lVar6,uVar5);
        if ((lVar6 != lVar7) && (lVar7 != 0)) {
          FUN_140db960a(param_1 + 0x30,&local_48);
          local_38 = local_48;
          plStack_30 = plStack_40;
          local_48 = 0;
          plStack_40 = (longlong *)0x0;
          local_60 = 0;
          local_68 = 0;
          local_78 = 0;
          local_58 = 0;
          local_70 = 0x3f800000;
          FUN_141348940(lVar7,&local_38,lVar4 + 0xe0,0);
          plVar3 = plStack_40;
          if (plStack_40 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_40 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_40)(plStack_40);
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
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141348940 FUN_141348940 body=561 status=ok
// SIG undefined FUN_141348940(void)

void FUN_141348940(longlong *param_1,undefined8 *param_2,longlong *param_3,char param_4,
                  float param_5,float param_6,float param_7,float param_8,char param_9)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x10))();
  lVar4 = (**(code **)(*param_1 + 0x18))(param_1);
  plVar5 = (longlong *)FUN_141348b72(param_2);
  if (plVar5 == (longlong *)0x0) goto LAB_141348a75;
  iVar2 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar2 + 1U) {
    FUN_1459087d2(plVar3,iVar2);
  }
  *(longlong **)(*plVar3 + (longlong)iVar2 * 8) = plVar5;
  local_70 = *param_2;
  local_68 = param_2[1];
  if (local_68 != 0) {
    LOCK();
    *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*plVar5 + 0x10))(plVar5,lVar4,&local_70);
  plVar5[0x59] = *param_3;
  if (0.0001 < param_5) {
    FUN_148d4901a(plVar5,param_5);
  }
  if (0.0001 < ABS(param_6 + -1.0)) {
    FUN_148d49086(plVar5,param_6);
  }
  if (0.0001 < param_7) {
    *(float *)((longlong)plVar5 + 0x2dc) = param_7;
  }
  if (0.0001 < param_8) {
    *(float *)(plVar5 + 0x5b) = param_8;
  }
  if (param_9 != '\0') {
    *(undefined1 *)((longlong)plVar5 + 0x2e2) = 1;
  }
  if (param_4 == '\0') goto LAB_141348a75;
  if (lVar4 == 0) {
LAB_141348b59:
    lVar4 = FUN_148d491fc(lVar4);
    if (lVar4 == 0) goto LAB_141348a75;
  }
  else {
    lVar6 = FUN_144a2f878();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        != lVar6 + 0x30)) goto LAB_141348b59;
  }
  (**(code **)(*plVar5 + 0x18))(plVar5,lVar4);
LAB_141348a75:
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141348b72 FUN_141348b72 body=604 status=ok
// SIG undefined FUN_141348b72(void)

undefined8 FUN_141348b72(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined4 local_90;
  undefined8 local_88;
  wchar_t *local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  undefined1 local_40 [8];
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar2 = (longlong *)FUN_1401fe4bc(*param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    if (DAT_14c948fa0 == 0) {
      local_48 = (code *)&DAT_1427db2a2;
      lVar3 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c948fa0 = lVar3;
      FUN_1446f470e(local_40,L"ScriptStruct",1);
      local_68 = &LAB_1468915ce;
      local_70 = FUN_1427dc742;
      local_80 = L"Engine";
      local_78 = (wchar_t *)CONCAT44(local_78._4_4_,199);
      local_88 = 0x10;
      local_90 = 0x10000020;
      local_98._0_4_ = 8;
      local_60 = &local_48;
      FUN_14574b4b2(lVar3);
      DAT_14c948fa0 = lVar3;
      if (DAT_14c927740 == 0) {
        local_60 = &local_38;
        local_38 = FUN_1449e2820;
        local_50 = FUN_14081d0ea;
        local_58 = FUN_14081d0ea;
        local_68 = &LAB_146856450;
        local_70 = FUN_1427b121c;
        local_78 = L"Engine";
        local_80 = (wchar_t *)0x0;
        local_88 = CONCAT44(local_88._4_4_,0x10000021);
        local_90 = 8;
        local_98._0_4_ = 0x28;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
      }
      lVar1 = DAT_14c948fa0;
      lVar3 = DAT_14c927740;
      uVar4 = FUN_1449e2fb2();
      local_98 = L"ScriptStruct";
      FUN_14574b446(uVar4,lVar1,lVar3,L"/Script/CoreUObject");
    }
    if ((*(int *)(DAT_14c948fa0 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(DAT_14c948fa0 + 0x38) * 8) ==
        DAT_14c948fa0 + 0x30)) {
      lVar3 = FUN_1418c5660();
      if ((lVar3 != 0) &&
         ((*(int *)(lVar3 + 0x38) <= (int)plVar2[7] &&
          (*(longlong *)(plVar2[6] + (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)))) {
        uVar4 = FUN_14001cc68((longlong)
                              (int)(-*(int *)((longlong)plVar2 + 0x5c) &
                                   ((int)plVar2[0xb] + *(int *)((longlong)plVar2 + 0x5c)) - 1U));
        (**(code **)(*plVar2 + 0x2e8))(plVar2,uVar4,1);
        goto LAB_141348bd3;
      }
    }
  }
  uVar4 = 0;
LAB_141348bd3:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141348dd0 FUN_141348dd0 body=19 status=ok
// SIG undefined FUN_141348dd0(void)

void FUN_141348dd0(longlong param_1)

{
  if ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0) {
    *(byte *)(param_1 + 100) = *(byte *)(param_1 + 100) | 2;
    FUN_1406ca06e();
    return;
  }
  return;
}



// FUNCTION 141348de4 FUN_141348de4 body=172 status=ok
// SIG undefined FUN_141348de4(void)

void FUN_141348de4(void)

{
  longlong *plVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cadb590) {
    FUN_144b3d300(&DAT_14cadb590);
    if (DAT_14cadb590 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar1 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.DetailMode",1);
      if (plVar1 == (longlong *)0x0) {
        DAT_14cadb588 = (int *)0x0;
      }
      else {
        DAT_14cadb588 = (int *)(**(code **)(*plVar1 + 0x68))(plVar1);
      }
      _Init_thread_footer(&DAT_14cadb590);
    }
  }
  if (DAT_14c761530 < 0) {
    DAT_14c761530 = *DAT_14cadb588;
  }
  return;
}



// FUNCTION 141348e90 FUN_141348e90 body=364 status=ok
// SIG undefined FUN_141348e90(void)

void FUN_141348e90(longlong *param_1,int param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)param_1[0x2d];
  if (plVar1 != (longlong *)0x0) {
    if (DAT_14caf9cd0 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1463c0cc2;
      local_48 = &LAB_147c9db5b;
      local_50 = &LAB_1463f9c44;
      local_58 = &DAT_149e063b2;
      local_60 = 0x2000000000;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0x958;
      FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
    }
    if (((*(int *)(DAT_14caf9cd0 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8) ==
         DAT_14caf9cd0 + 0x30)) && ((*(byte *)(plVar1 + 0x84) & 2) != 0)) {
      cVar2 = (**(code **)(*plVar1 + 0x6c8))(plVar1);
      if ((cVar2 != '\0') && ((int)param_1[0x89] != param_2)) {
        local_28 = (code *)CONCAT44(local_28._4_4_,param_2);
        uVar3 = FUN_14477b072(param_1,DAT_14cafa5e8);
        (**(code **)(*param_1 + 0x248))(param_1,uVar3,&local_28);
        *(int *)(param_1 + 0x89) = param_2;
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141348ffe FUN_141348ffe body=457 status=ok
// SIG undefined FUN_141348ffe(void)

void FUN_141348ffe(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_88 [40];
  longlong *local_60;
  int local_58;
  uint local_54;
  uint *local_50;
  uint local_48;
  int local_44;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)(param_1 + 0x68);
  puVar2 = (uint *)(param_1 + 0x78);
  iVar5 = *(int *)(param_1 + 0x90);
  local_54 = 1;
  if (iVar5 == 0) {
    local_40 = 0;
    local_58 = 0;
    local_44 = 0;
  }
  else {
    puVar3 = *(uint **)(param_1 + 0x88);
    if (*(uint **)(param_1 + 0x88) == (uint *)0x0) {
      puVar3 = puVar2;
    }
    uVar4 = *puVar3;
    if (uVar4 == 0) {
      iVar6 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar6 = iVar5 + -1;
      }
      uVar8 = 0;
      uVar7 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar7 = uVar8;
      }
      local_58 = (int)uVar7 + 1;
      local_40 = (int)uVar7 * 0x20 + 0x20;
      iVar6 = 0;
      do {
        local_44 = iVar5;
        if (uVar7 == uVar8) goto LAB_141349040;
        iVar6 = iVar6 + 0x20;
        uVar4 = puVar3[uVar8 + 1];
        uVar8 = uVar8 + 1;
      } while (uVar4 == 0);
      local_58 = (int)uVar8;
      local_40 = iVar6;
    }
    else {
      local_40 = 0;
      local_58 = 0;
    }
    local_54 = -uVar4 & uVar4;
    uVar7 = (ulonglong)local_54 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_44 = (local_40 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar5 <= local_44) {
      local_44 = iVar5;
    }
  }
LAB_141349040:
  local_48 = 0xffffffff;
  local_60 = plVar1;
  local_50 = puVar2;
  if (local_44 != iVar5) {
    do {
      do {
        FUN_14590ac66(param_2,*local_60 + (longlong)local_44 * 0x50 + 0x18);
        local_48 = local_48 & ~local_54;
        FUN_1449c0562(&local_58);
      } while (local_44 != iVar5);
    } while ((local_50 != puVar2) || (local_60 != plVar1));
  }
  if (0 < *(int *)(param_1 + 0xa8)) {
    iVar5 = 0;
    lVar9 = 8;
    do {
      FUN_14590ac66(param_2,*(longlong *)(param_1 + 0xa0) + lVar9);
      iVar5 = iVar5 + 1;
      lVar9 = lVar9 + 0x38;
    } while (iVar5 < *(int *)(param_1 + 0xa8));
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413491c8 FUN_1413491c8 body=78 status=ok
// SIG undefined FUN_1413491c8(void)

void FUN_1413491c8(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_144904448(param_1 + 0x3a0);
  if (cVar1 != '\0') {
    FUN_14072d42a(param_1 + 0x3a0,*(undefined4 *)(param_1 + 0x380));
    *(undefined8 *)(param_1 + 0x3a0) = 0;
    *(undefined8 *)(param_1 + 0x3a8) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x3b0) = 0;
  }
  return;
}



// FUNCTION 141349216 FUN_141349216 body=214 status=ok
// SIG undefined FUN_141349216(void)

void FUN_141349216(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_140a26446();
    *(undefined8 *)(param_1 + 0x60) = 0;
    plVar3 = *(longlong **)(param_1 + 0x68);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x68) = 0;
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
  *(undefined8 *)(param_1 + 0x50) = 0;
  plVar3 = *(longlong **)(param_1 + 0x58);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x58) = 0;
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
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_140521208();
    *(undefined8 *)(param_1 + 0x40) = 0;
    plVar3 = *(longlong **)(param_1 + 0x48);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x48) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001413492e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1413492ec FUN_1413492ec body=185 status=ok
// SIG undefined FUN_1413492ec(void)

void FUN_1413492ec(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_68 [40];
  undefined4 *local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_1 + 8) = 1;
  local_40 = (undefined4 *)0x0;
  local_38 = 2;
  FUN_1447c510a(&local_40,2,0);
  *local_40 = param_2;
  local_40[1] = param_2;
  if ((undefined4 **)(param_1 + 0x18) == &local_40) {
    if (local_40 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined4 **)(param_1 + 0x18) = local_40;
    *(undefined4 *)(param_1 + 0x20) = local_38;
    *(undefined4 *)(param_1 + 0x24) = local_34;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413493a6 FUN_1413493a6 body=305 status=ok
// SIG undefined FUN_1413493a6(void)

undefined8 * FUN_1413493a6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_14a1b6c40;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  local_38 = (longlong *)FUN_14001cc68(0x98,0x10);
  local_38[1] = (longlong)&DAT_100000001;
  *local_38 = (longlong)&PTR_FUN_14a1b6cc0;
  local_40 = local_38 + 2;
  local_38[2] = (longlong)&PTR_FUN_14a18e458;
  local_38[3] = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  local_38[6] = 0;
  local_38[7] = 0;
  local_38[8] = 0;
  local_38[9] = 0;
  local_38[10] = 0;
  local_38[0xb] = 0;
  local_38[0xc] = 0;
  local_38[0xd] = 0;
  local_38[0xe] = 0;
  local_38[0xf] = 0;
  local_38[0x10] = 0;
  local_38[0x11] = 0;
  local_38[0x12] = 0;
  FUN_1404e24cc(&local_40);
  FUN_1404e256a(param_1 + 0xd,&local_40);
  plVar3 = local_38;
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
      }
    }
  }
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413494d8 FUN_1413494d8 body=234 status=ok
// SIG undefined FUN_1413494d8(void)

longlong *
FUN_1413494d8(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  uVar6 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  *puVar5 = &PTR_LAB_14a83c0e0;
  *(undefined1 *)(puVar5 + 1) = *param_4;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  puVar5[2] = lVar9;
  *puVar5 = &PTR_FUN_14b99fcc0;
  puVar5[3] = uVar6;
  puVar5[4] = plVar7;
  if (plVar7 == (longlong *)0x0) {
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
    }
  }
  return param_1;
}



// FUNCTION 1413495c2 FUN_1413495c2 body=87 status=ok
// SIG undefined FUN_1413495c2(void)

void FUN_1413495c2(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (*param_1 != 0) {
    if ((*(byte *)(*param_1 + 0xa0) & 1) == 0) {
      FUN_14009fd82(DAT_14c82b500,param_1,0xff);
    }
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001413495ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar2)(puVar2,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14134961a FUN_14134961a body=447 status=ok
// SIG undefined FUN_14134961a(void)

void FUN_14134961a(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
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
    local_50._4_4_ = 0;
    uVar12 = 0xffffffff;
    iVar14 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    uVar13 = local_60 >> 0x20;
    uVar12 = (uint)local_50;
    iVar14 = (int)local_60;
  }
  plVar5 = local_58;
  iVar7 = local_50._4_4_;
  iVar10 = local_48;
  if (local_50._4_4_ < (int)local_58[3]) {
    do {
      FUN_1413497da((longlong)iVar7 * 0x230 + *param_1 + 8);
      uVar12 = ~(uint)uVar13 & uVar12;
      plVar8 = (longlong *)plVar5[2];
      if ((longlong *)plVar5[2] == (longlong *)0x0) {
        plVar8 = plVar5;
      }
      iVar3 = (int)plVar5[3];
      lVar11 = (longlong)iVar14;
      uVar6 = *(uint *)((longlong)plVar8 + lVar11 * 4) & uVar12;
      if (uVar6 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar4 = iVar7;
        if (iVar7 < iVar14) {
          iVar4 = iVar14;
        }
        if (iVar7 <= iVar14) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar6 = *(uint *)((longlong)plVar8 + lVar9 * 4 + lVar11 * 4 + 4);
          if (uVar6 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar4 - lVar11 == lVar9) goto LAB_141349739;
        }
        iVar14 = iVar14 + (int)lVar9 + 1;
        uVar12 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar6 & uVar6);
      uVar2 = uVar13 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar7 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar3);
  }
LAB_141349739:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_141349912(param_1);
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



// FUNCTION 1413497da FUN_1413497da body=312 status=ok
// SIG undefined FUN_1413497da(void)

void FUN_1413497da(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x210) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x188) == '\x01') {
    if (*(longlong *)(param_1 + 0x170) != 0) {
      FUN_1400020a8();
    }
    if (*(char *)(param_1 + 0x16c) == '\x01') {
      *(undefined1 *)(param_1 + 0x16c) = 0;
    }
    *(undefined1 *)(param_1 + 0x188) = 0;
  }
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  lVar5 = 0;
  do {
    puVar3 = *(undefined8 **)(param_1 + 0xa8 + lVar5);
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar3 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    lVar5 = lVar5 + -8;
  } while (lVar5 != -0x18);
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x6c) == '\x01') {
    *(undefined1 *)(param_1 + 0x6c) = 0;
  }
  plVar4 = *(longlong **)(param_1 + 0x30);
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
                    /* WARNING: Could not recover jumptable at 0x000141349906. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141349912 FUN_141349912 body=48 status=ok
// SIG undefined FUN_141349912(void)

void FUN_141349912(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x230,8);
  }
  return;
}



// FUNCTION 141349942 FUN_141349942 body=16 status=ok
// SIG undefined FUN_141349942(void)

undefined8 FUN_141349942(longlong param_1,longlong *param_2,byte param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_b8 [32];
  undefined4 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  wchar_t *pwStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined8 *puStack_60;
  code *pcStack_58;
  code *pcStack_50;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined8 uStack_38;
  ulonglong uStack_30;
  
  if (*(char *)(param_1 + 0x243) != '\x01') {
    return 0;
  }
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(longlong *)(param_1 + 0x230) != 0) && ((*(byte *)(param_1 + 0x240) & 1) != 0)) {
    *(undefined1 *)(param_1 + 0x245) = 1;
    *(ushort *)(*(longlong *)(param_1 + 0x238) + 0x7558) =
         (ushort)*(undefined4 *)(*(longlong *)(param_1 + 0x238) + 0x7558) & 0xff3f | 0x40;
    uVar4 = *(ulonglong *)(*(longlong *)(param_1 + 0x238) + 0x28);
    if (uVar4 < 0xffffffff00000000) {
      plVar8 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar8 = (longlong *)0x0;
      }
      (**(code **)(*plVar8 + 0x58))(plVar8,*(longlong *)(param_1 + 0x238),uVar4,0x40);
    }
    else {
      uVar11 = (uint)uVar4;
      if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c998088)) {
        puVar9 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar9 = DAT_14c998080;
        }
        if ((*(uint *)(puVar9 + ((uint)(uVar4 >> 3) & 0xffffffc)) >> (uVar11 & 0x1f) & 1) != 0) {
          lVar7 = DAT_14c998060 + (ulonglong)(uVar11 & 0x7fffffff) * 0x68;
          lVar12 = *(longlong *)(lVar7 + 0x18);
          if (*(longlong *)(lVar7 + 0x18) == 0) {
            lVar12 = lVar7 + 8;
          }
          *(uint *)(lVar12 + 8) = *(uint *)(lVar12 + 8) | 1;
          *(byte *)(lVar7 + 0x60) = *(byte *)(lVar7 + 0x60) | 1;
        }
      }
    }
    *(byte *)(param_1 + 0x241) = *(byte *)(param_1 + 0x241) & 0xfe | param_3;
    iVar2 = *(int *)(param_1 + 0x2f0);
    FUN_141289672(&uStack_48,param_2);
    iVar3 = *(int *)(param_1 + 0x300);
    if (iVar3 < *(int *)(param_1 + 0x2f4)) {
      if (iVar3 != 0) {
        lVar12 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_1 + 0x2f8) + 8 + lVar12) ==
              CONCAT44(uStack_3c,uStack_40)) goto LAB_1440f9a9e;
          lVar12 = lVar12 + 0x10;
        } while ((longlong)iVar3 * 0x10 != lVar12);
      }
      (**(code **)(*param_2 + 0x10))(param_2,*(undefined8 *)(param_1 + 0x238));
      iVar3 = *(int *)(param_1 + 0x300);
      *(uint *)(param_1 + 0x300) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x304) < iVar3 + 1U) {
        FUN_1458797ae((longlong *)(param_1 + 0x2f8),iVar3);
      }
      puVar1 = (uint *)(*(longlong *)(param_1 + 0x2f8) + (longlong)iVar3 * 0x10);
      *puVar1 = uStack_48;
      puVar1[1] = uStack_44;
      puVar1[2] = uStack_40;
      puVar1[3] = uStack_3c;
      FUN_1440f9cf4(param_1);
      uStack_38 = (code *)CONCAT44(uStack_38._4_4_,*(undefined4 *)(param_1 + 0x2f0));
      FUN_1447cd2ec(param_1 + 0xe0,&uStack_38);
      FUN_1409b52ac(*(longlong *)(param_1 + 0x238) + 0x3a90);
      if (*(char *)(*(longlong *)(param_1 + 0x230) + 0x3c) == '\x01') {
        FUN_14142ad0e(param_1,1,&DAT_14cbc67b0);
      }
      if ((((((iVar2 == 0) &&
             (FUN_141289672(&uStack_48,param_2), CONCAT44(uStack_3c,uStack_40) != 0)) &&
            (uStack_44 != 0)) && ((-1 < (int)uStack_48 && ((int)uStack_48 < DAT_14c9647dc)))) &&
          ((plVar8 = (longlong *)
                     ((ulonglong)((uStack_48 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uStack_48 >> 0x10) * 8)),
           plVar8 != (longlong *)0x0 &&
           ((*(uint *)(plVar8 + 2) == uStack_44 && ((*(uint *)(plVar8 + 1) & 0x10200000) == 0))))))
         && (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (lVar12 = *plVar8, lVar12 != 0)))) {
        if (DAT_14cac9ca8 == 0) {
          uStack_38 = FUN_141030f22;
          pcStack_50 = FUN_14081d0ea;
          pcStack_58 = FUN_14081d0ea;
          puStack_68 = &LAB_1478c0a72;
          puStack_70 = &LAB_1417b2375;
          pwStack_78 = L"Engine";
          uStack_80 = 0x1000000000;
          uStack_88 = 0x10000004;
          uStack_90 = 8;
          uStack_98 = 0x390;
          puStack_60 = &uStack_38;
          FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
        }
        lVar12 = *(longlong *)(lVar12 + 0x10);
        if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(lVar12 + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) ==
            DAT_14cac9ca8 + 0x30)) {
          uVar5 = FUN_140843f56(param_1);
          puVar10 = &uStack_38;
          uStack_38 = (code *)(CONCAT71(uStack_38._1_7_,*(undefined1 *)(param_1 + 0x240)) &
                              0xffffffffffffff01);
          uStack_38._0_2_ = CONCAT11((char)uVar5,(undefined1)uStack_38);
          FUN_1447cd2ec(param_1 + 0x90);
          FUN_1440fd31a(param_1 + 0xa0,
                        CONCAT71((int7)((ulonglong)puVar10 >> 8),*(undefined1 *)(param_1 + 0x240)) &
                        0xffffffffffffff01,uVar5);
        }
      }
      FUN_14142ad8e(param_1);
      uVar6 = 1;
      goto LAB_1440f9aa0;
    }
  }
LAB_1440f9a9e:
  uVar6 = 0;
LAB_1440f9aa0:
  if ((uStack_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 141349952 FUN_141349952 body=228 status=ok
// SIG undefined FUN_141349952(void)

longlong FUN_141349952(void)

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
  if (DAT_14cb60058 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14636797c;
    local_38 = &LAB_1486c1071;
    local_40 = &LAB_1464eac8d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x790;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxLevelSequenceActor",&DAT_14cb60058,FUN_1464eac66);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb60058;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141349a38 FUN_141349a38 body=41 status=ok
// SIG undefined FUN_141349a38(void)

void FUN_141349a38(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141349c00();
  FUN_141349a62(param_1 + 0x3ae0,param_3);
  return;
}



// FUNCTION 141349a62 FUN_141349a62 body=413 status=ok
// SIG undefined FUN_141349a62(void)

void FUN_141349a62(longlong param_1,longlong param_2)

{
  longlong lVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  
  if (*(char *)(param_1 + 0x50) != '\x01') {
    return;
  }
  dVar3 = (double)FUN_144719204((double)*(float *)(param_1 + 0x48) + *(double *)(param_2 + 8),
                                0x4076800000000000);
  dVar3 = (double)(~-(ulonglong)(dVar3 < 0.0) & (ulonglong)dVar3 |
                  (ulonglong)(dVar3 + 360.0) & -(ulonglong)(dVar3 < 0.0));
  fVar4 = (float)(double)(~-(ulonglong)(180.0 < dVar3) & (ulonglong)dVar3 |
                         (ulonglong)(dVar3 + -360.0) & -(ulonglong)(180.0 < dVar3));
  dVar3 = (double)FUN_144719204((double)*(float *)(param_1 + 0x48) + *(double *)(param_2 + 8),
                                0x4076800000000000);
  dVar3 = (double)(~-(ulonglong)(dVar3 < 0.0) & (ulonglong)dVar3 |
                  (ulonglong)(dVar3 + 360.0) & -(ulonglong)(dVar3 < 0.0));
  fVar2 = (float)(double)(~-(ulonglong)(180.0 < dVar3) & (ulonglong)dVar3 |
                         (ulonglong)(dVar3 + -360.0) & -(ulonglong)(180.0 < dVar3));
  if ((*(float *)(param_1 + 0x48) != fVar4) || (NAN(*(float *)(param_1 + 0x48)) || NAN(fVar4))) {
    *(float *)(param_1 + 0x48) = fVar4;
    if ((*(float *)(param_1 + 0x4c) == fVar2) && (!NAN(*(float *)(param_1 + 0x4c)) && !NAN(fVar2)))
    goto LAB_141349ba2;
  }
  else if ((*(float *)(param_1 + 0x4c) == fVar2) &&
          (!NAN(*(float *)(param_1 + 0x4c)) && !NAN(fVar2))) {
    return;
  }
  *(float *)(param_1 + 0x4c) = fVar2;
LAB_141349ba2:
  lVar1 = FUN_14479d2ce(param_1 + 0x28);
  if (lVar1 == 0) {
    return;
  }
  FUN_144a62f0c(lVar1,*(undefined8 *)(lVar1 + 0x38),0x10);
  return;
}



// FUNCTION 141349c00 FUN_141349c00 body=598 status=ok
// SIG undefined FUN_141349c00(void)

void FUN_141349c00(longlong *param_1,longlong param_2,double *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  byte bVar10;
  int iVar11;
  double dVar12;
  double *pdVar13;
  undefined4 uVar14;
  uint uVar15;
  longlong *plVar16;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = param_1[0x3e];
  if (lVar1 == 0) {
LAB_141349e35:
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  else {
    plVar2 = *(longlong **)(lVar1 + 0x3c0);
    bVar10 = plVar2 != (longlong *)0x0 & DAT_14c950c29;
    dVar12 = (double)CONCAT71((int7)((ulonglong)lVar1 >> 8),bVar10);
    if (bVar10 == 1) {
      plVar16 = plVar2;
      dVar12 = (double)FUN_1456cec3c();
    }
    else {
      plVar16 = param_1;
      if (plVar2 == (longlong *)0x0) goto LAB_141349e35;
    }
    uVar14 = SUB84(plVar16,0);
    if (*(char *)((longlong)param_1 + 0x5b5) < '\0') {
      dVar3 = 0.0;
    }
    else {
      (**(code **)(*plVar2 + 0x680))(plVar2,&local_98);
      local_68 = local_88 + param_3[2];
      dStack_70 = uStack_90 + param_3[1];
      local_78 = local_98 + *param_3;
      (**(code **)(*plVar2 + 0x688))(plVar2,&local_78,0);
      plVar16 = plVar2;
      dVar12 = (double)(**(code **)(*plVar2 + 0x798))(plVar2,param_3);
      uVar14 = SUB84(plVar16,0);
      dVar3 = (double)(float)local_88;
    }
    *(undefined8 *)(param_2 + 0x10) = 0;
    lVar1 = param_1[0x22];
    dVar6 = *(double *)(lVar1 + 0x240);
    dVar7 = *(double *)(lVar1 + 0x248);
    dVar8 = *(double *)(lVar1 + 0x250);
    dVar9 = *(double *)(lVar1 + 600);
    pdVar13 = *(double **)(lVar1 + 0x228);
    local_98 = dVar6;
    uStack_90 = dVar7;
    local_88 = dVar8;
    dStack_80 = dVar9;
    if (pdVar13 == (double *)0x0) {
      uVar14 = 0x40;
      pdVar13 = (double *)FUN_14001cc68(0x40,0x10);
      dVar12 = DAT_14c8463d8;
      *pdVar13 = DAT_14c8463d0;
      pdVar13[1] = dVar12;
      dVar12 = DAT_14c8463e8;
      pdVar13[2] = DAT_14c8463e0;
      pdVar13[3] = dVar12;
      dVar12 = DAT_14c846500;
      pdVar13[4] = DAT_14c8464f8;
      pdVar13[5] = dVar12;
      dVar12 = DAT_14c846508;
      pdVar13[6] = DAT_14c846508;
      *(double **)(lVar1 + 0x228) = pdVar13;
    }
    auVar4._8_4_ = (int)-(ulonglong)(dVar7 != pdVar13[1]);
    auVar4._0_8_ = -(ulonglong)(dVar6 != *pdVar13);
    auVar4._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar13[1]) >> 0x20);
    iVar11 = movmskpd(SUB84(dVar12,0),auVar4);
    auVar5._8_4_ = (int)-(ulonglong)(dVar9 != pdVar13[3]);
    auVar5._0_8_ = -(ulonglong)(dVar8 != pdVar13[2]);
    auVar5._12_4_ = (int)(-(ulonglong)(dVar9 != pdVar13[3]) >> 0x20);
    uVar15 = movmskpd(uVar14,auVar5);
    if ((uVar15 & 0x3fffffff) != 0 || iVar11 != 0) {
      pdVar13[2] = local_88;
      pdVar13[3] = dStack_80;
      *(undefined4 *)pdVar13 = (undefined4)local_98;
      *(undefined4 *)((longlong)pdVar13 + 4) = local_98._4_4_;
      *(undefined4 *)(pdVar13 + 1) = (undefined4)uStack_90;
      *(undefined4 *)((longlong)pdVar13 + 0xc) = uStack_90._4_4_;
      FUN_1448052ee(&local_98,&local_78);
      pdVar13[6] = local_68;
      pdVar13[4] = local_78;
      pdVar13[5] = dStack_70;
    }
    *(double *)(param_2 + 0x10) = pdVar13[6];
    (**(code **)(*plVar2 + 0x680))(plVar2,&local_98);
    local_88 = dVar3;
    (**(code **)(*plVar2 + 0x688))(plVar2,&local_98,0);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141349e57 FUN_141349e57 body=204 status=ok
// SIG undefined FUN_141349e57(void)

ulonglong FUN_141349e57(longlong *param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar6 = (uint)param_2 & 0xffff;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar6) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *param_1 + (longlong)iVar3 * 0x40;
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x40) == param_2) {
          if (lVar1 + 8 != 0 && lVar1 != 0) {
            uVar5 = (ulonglong)(*(int *)(lVar1 + 0x28) - 2U < 0x7fffffff) * 0x10;
            if (*(int *)(lVar1 + 0x18 + uVar5) == 0) {
              uVar5 = FUN_14052c20c(&DAT_149dfb77a);
              return uVar5;
            }
            uVar5 = FUN_14052c20c(*(undefined8 *)(lVar1 + 8 + (uVar5 | 8)));
            return uVar5;
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x38);
      } while (iVar3 != -1);
    }
  }
  return param_3 & 0xffffffff;
}



// FUNCTION 141349f23 FUN_141349f23 body=208 status=ok
// SIG undefined FUN_141349f23(void)

int FUN_141349f23(longlong *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar6 = (uint)param_2 & 0xffff;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar6) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *param_1 + (longlong)iVar3 * 0x40;
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x40) == param_2) {
          if (lVar1 + 8 == 0 || lVar1 == 0) {
            return param_3;
          }
          uVar5 = (ulonglong)(*(int *)(lVar1 + 0x28) - 2U < 0x7fffffff) * 0x10;
          if (*(int *)(lVar1 + 0x18 + uVar5) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000141349fde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            iVar3 = _wtoi(*(wchar_t **)(lVar1 + 8 + (uVar5 | 8)));
            return iVar3;
          }
                    /* WARNING: Could not recover jumptable at 0x000141349fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar3 = _wtoi(L"");
          return iVar3;
        }
        iVar3 = *(int *)(lVar1 + 0x38);
      } while (iVar3 != -1);
    }
  }
  return param_3;
}



// FUNCTION 141349ff3 FUN_141349ff3 body=225 status=ok
// SIG undefined FUN_141349ff3(void)

undefined8 *
FUN_141349ff3(undefined8 *param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar5 = (uint)param_3 & 0xffff;
    plVar4 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_2[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar5) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *param_2 + (longlong)iVar3 * 0x40;
        if (*(longlong *)(*param_2 + (longlong)iVar3 * 0x40) == param_3) {
          if (lVar1 + 8 != 0 && lVar1 != 0) {
            uVar6 = (ulonglong)(*(int *)(lVar1 + 0x28) - 2U < 0x7fffffff) * 0x10;
            if (*(int *)(lVar1 + 0x18 + uVar6) == 0) {
              puVar7 = &DAT_149dfb77a;
            }
            else {
              puVar7 = *(undefined2 **)(lVar1 + 8 + (uVar6 | 8));
            }
            FUN_1446f470e(param_1,puVar7,1);
            return param_1;
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x38);
      } while (iVar3 != -1);
    }
  }
  *param_1 = param_4;
  return param_1;
}



// FUNCTION 14134a0d4 FUN_14134a0d4 body=604 status=ok
// SIG undefined FUN_14134a0d4(void)

undefined4 FUN_14134a0d4(longlong *param_1,longlong param_2,undefined4 param_3)

{
  void *_Src;
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ushort uVar10;
  ushort uVar11;
  ulonglong uVar12;
  undefined2 *puVar13;
  bool bVar14;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar8 = (uint)param_2 & 0xffff;
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar1 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar8) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *param_1 + (longlong)iVar3 * 0x40;
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x40) == param_2) {
          if ((lVar5 + 8U & 0xfffffffffffffff7) != 0) {
            lVar4 = (ulonglong)(*(int *)(lVar5 + 0x28) - 2U < 0x7fffffff) * 0x10;
            local_40 = (undefined2 *)0x0;
            local_38 = *(int *)(lVar5 + 0x18 + lVar4);
            lVar7 = (longlong)local_38;
            _Src = *(void **)(lVar5 + 0x10 + lVar4);
            puVar13 = &DAT_149dfb77a;
            if (lVar7 == 0) {
              local_34 = 0;
            }
            else {
              FUN_1446dd670(&local_40,local_38,0);
              memcpy(local_40,_Src,lVar7 * 2);
              if (local_38 != 0) {
                puVar13 = local_40;
              }
            }
            lVar5 = 0;
            goto LAB_14134a206;
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x38);
      } while (iVar3 != -1);
    }
  }
  goto LAB_14134a2f5;
LAB_14134a206:
  uVar10 = *(ushort *)((longlong)puVar13 + lVar5);
  uVar9 = (ulonglong)uVar10;
  uVar11 = *(ushort *)((longlong)L"Unsupported" + lVar5);
  if (uVar10 == uVar11) {
    if (uVar10 == 0) goto LAB_14134a2e3;
LAB_14134a21f:
    lVar5 = lVar5 + 2;
    goto LAB_14134a206;
  }
  if ((uVar11 | uVar10) < 0x80) {
    uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
    uVar12 = (ulonglong)uVar11;
    uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
    if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar12]) goto LAB_14134a21f;
  }
  if (uVar10 != uVar11) {
    lVar5 = 0;
    goto LAB_14134a258;
  }
LAB_14134a2e3:
  uVar6 = 0;
  goto LAB_14134a2e5;
LAB_14134a2a7:
  uVar10 = *(ushort *)((longlong)puVar13 + lVar5);
  uVar2 = (uint)uVar10;
  uVar11 = *(ushort *)((longlong)L"RuntimeGuaranteed" + lVar5);
  uVar8 = (uint)uVar11;
  if (uVar10 != uVar11) {
    if ((uVar11 | uVar10) < 0x80) {
      uVar2 = (uint)(byte)(&DAT_149e05da0)[uVar10];
      uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar11];
      if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar11]) goto LAB_14134a2bb;
    }
    iVar3 = uVar2 - uVar8;
    goto LAB_14134a325;
  }
  if (uVar10 == 0) goto LAB_14134a323;
LAB_14134a2bb:
  lVar5 = lVar5 + 2;
  goto LAB_14134a2a7;
LAB_14134a323:
  iVar3 = 0;
LAB_14134a325:
  bVar14 = iVar3 != 0;
  uVar6 = 2;
  goto LAB_14134a2e7;
LAB_14134a258:
  uVar10 = *(ushort *)((longlong)puVar13 + lVar5);
  uVar9 = (ulonglong)uVar10;
  uVar11 = *(ushort *)((longlong)L"RuntimeDependent" + lVar5);
  if (uVar10 == uVar11) {
    if (uVar10 == 0) goto LAB_14134a31c;
LAB_14134a271:
    lVar5 = lVar5 + 2;
    goto LAB_14134a258;
  }
  if ((uVar11 | uVar10) < 0x80) {
    uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
    uVar12 = (ulonglong)uVar11;
    uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
    if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar12]) goto LAB_14134a271;
  }
  if (uVar10 != uVar11) {
    lVar5 = 0;
    goto LAB_14134a2a7;
  }
LAB_14134a31c:
  uVar6 = 1;
LAB_14134a2e5:
  bVar14 = false;
LAB_14134a2e7:
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (bVar14) {
LAB_14134a2f5:
    uVar6 = param_3;
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 14134a331 FUN_14134a331 body=131 status=ok
// SIG undefined FUN_14134a331(void)

ulonglong FUN_14134a331(undefined8 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  wchar_t *_Str2;
  
  if (*(int *)(param_1 + 1) == 0) {
    _Str2 = L"";
  }
  else {
    _Str2 = (wchar_t *)*param_1;
  }
  iVar1 = wcscmp(L"ES2",_Str2);
  uVar2 = CONCAT44(extraout_var,iVar1);
  uVar4 = 0;
  if (iVar1 == 0) {
    uVar2 = CONCAT71((int7)(uVar2 >> 8),1);
  }
  else {
    do {
      uVar3 = uVar4;
      if (uVar3 == 4) {
        uVar2 = uVar2 & 0xffffffffffffff00;
        uVar4 = 5;
        goto LAB_14134a398;
      }
      iVar1 = wcscmp((wchar_t *)(&PTR_u_ES3_1_14a37fcd8)[uVar3],_Str2);
      uVar2 = CONCAT44(extraout_var_00,iVar1);
      uVar4 = uVar3 + 1;
    } while (iVar1 != 0);
    uVar2 = CONCAT71((int7)(uVar3 >> 8),uVar3 < 4);
  }
LAB_14134a398:
  *param_2 = (int)uVar4;
  return uVar2;
}



// FUNCTION 14134a3b4 FUN_14134a3b4 body=118 status=ok
// SIG undefined FUN_14134a3b4(void)

void FUN_14134a3b4(longlong *param_1)

{
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_145e3e385(param_1[8],(int)param_1[9]);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x10))();
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14134a42a FUN_14134a42a body=285 status=ok
// SIG undefined FUN_14134a42a(void)

void FUN_14134a42a(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  FUN_140850e3c();
  lVar6 = *(longlong *)(param_1 + 0x570);
  if (lVar6 == 0) {
    uVar5 = FUN_1405bc036();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x570) = lVar6;
  }
  plVar1 = (longlong *)(param_1 + 0x568);
  if (*(longlong *)(param_1 + 0x578) == 0) {
    if (*plVar1 == 0) {
      return;
    }
    if (lVar6 == 0) {
      return;
    }
    plVar2 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
      *(undefined8 *)(param_1 + 0x578) = 0;
      return;
    }
    uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar5,plVar1);
    *(longlong *)(param_1 + 0x578) = lVar6;
    if (lVar6 == 0) {
      return;
    }
  }
  if (*(int *)(param_1 + 0x560) == 0) {
    *(undefined4 *)(param_1 + 0x560) = 1;
    if (*(int *)(param_1 + 0x564) == 0) {
      FUN_1487c83e8((undefined8 *)(param_1 + 0x558),0);
    }
    puVar3 = *(undefined8 **)(param_1 + 0x558);
    puVar3[2] = 0;
    puVar3[3] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined4 *)(puVar3 + 3) = 0x3f800000;
    FUN_141414bf6(puVar3,plVar1);
    *(undefined4 *)(puVar3 + 3) = 0x3f800000;
    *plVar1 = 0;
    *(longlong *)(param_1 + 0x570) = 0;
    *(undefined8 *)(param_1 + 0x578) = 0;
  }
  return;
}



// FUNCTION 14134a548 FUN_14134a548 body=1539 status=ok
// SIG undefined FUN_14134a548(void)

void FUN_14134a548(undefined8 param_1,longlong param_2)

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
  undefined8 local_48;
  uint local_40;
  undefined8 local_38;
  uint local_30;
  int local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = 0;
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
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  uStack_28 = 0;
  uStack_24 = 0;
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
    FUN_144a5ded6(param_2,&uStack_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_28 = (undefined4)uVar2;
      uStack_24 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_28);
    }
  }
  local_2c = 0;
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
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_2c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_2c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_2c = (int)uVar2;
      uStack_28 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2c);
    }
  }
  iVar4 = local_2c;
  local_30 = local_30 & 0xffffff00;
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_1403a682c;
      local_60 = 0;
      local_68 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_38 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_38);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = local_30;
  local_48 = local_38;
  FUN_14134ab4c(local_20,CONCAT44(uStack_24,uStack_28),iVar4 != 0);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14134ab4c FUN_14134ab4c body=159 status=ok
// SIG undefined FUN_14134ab4c(void)

void FUN_14134ab4c(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_14058c734();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_14058c734();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
        lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
        if (lVar4 != 0) {
          FUN_140dc7008(lVar4,&local_28,param_3,param_4);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14134abec FUN_14134abec body=1138 status=ok
// SIG undefined FUN_14134abec(void)

void FUN_14134abec(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  undefined1 auStack_a8 [40];
  ulonglong local_80;
  undefined8 local_78;
  undefined4 local_6c;
  longlong local_68;
  longlong *local_60;
  undefined4 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar19 = (uint)param_2;
  iVar21 = (int)((ulonglong)param_2 >> 0x20);
  uVar18 = (uint)((ulonglong)param_2 >> 0x10);
  local_68 = param_2;
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
    lVar20 = param_1 + 0x60;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      lVar20 = *(longlong *)(param_1 + 0x68);
    }
    iVar12 = *(int *)(lVar20 + (ulonglong)
                               (*(int *)(param_1 + 0x70) - 1U &
                               iVar21 + (uVar19 << 0x10 | uVar19 & 0xffff) +
                               (uVar18 << 0x13 | uVar18 & 0xffff) + ((uVar19 & 0xffff) >> 4)) * 4);
    if (iVar12 != -1) {
      lVar20 = *(longlong *)(param_1 + 0x28);
      do {
        if (*(longlong *)(lVar20 + (longlong)iVar12 * 0x14) == param_2) goto LAB_14134aec8;
        iVar12 = *(int *)(lVar20 + (longlong)iVar12 * 0x14 + 0xc);
      } while (iVar12 != -1);
    }
  }
  plVar1 = (longlong *)(param_1 + 0x78);
  if (*(int *)(param_1 + 0xac) == 0) {
    iVar12 = *(int *)(param_1 + 0x80);
    *(int *)(param_1 + 0x80) = iVar12 + 1;
    if (*(int *)(param_1 + 0x84) == iVar12) {
      FUN_1447711aa(plVar1,iVar12);
    }
    iVar16 = *(int *)(param_1 + 0xa0);
    if (iVar16 == 0) {
      iVar9 = -1;
    }
    else {
      iVar9 = iVar16 + 0x1e;
      if (-1 < iVar16 + -1) {
        iVar9 = iVar16 + -1;
      }
      iVar9 = iVar9 >> 5;
    }
    lVar10 = param_1 + 0x88;
    iVar13 = iVar16 + 1;
    iVar22 = iVar16 + 0x1f;
    if (-1 < iVar16) {
      iVar22 = iVar16;
    }
    if (iVar22 >> 5 == iVar9) {
      *(int *)(param_1 + 0xa0) = iVar13;
    }
    else {
      if (*(int *)(param_1 + 0xa4) <= iVar16) {
        local_78 = param_3;
        if (iVar16 + 0x20U < 0xa0) {
          iVar13 = 0x80;
          iVar9 = iVar16;
        }
        else {
          uVar17 = iVar16 + 0x20U >> 5;
          local_80 = (ulonglong)uVar17;
          if (*(int *)(param_1 + 0xa4) + 0x1fU < 0xa0) {
            uVar14 = 4;
            if (4 < uVar17) {
              uVar14 = uVar17;
            }
          }
          else {
            uVar14 = (uVar17 * 3 >> 3) + uVar17 + 0x10;
          }
          uVar15 = FUN_144a3809e(uVar14 << 2,0);
          iVar9 = (int)(uVar15 >> 2);
          iVar13 = -0x20;
          if ((int)local_80 <= iVar9) {
            iVar13 = iVar9 << 5;
          }
          iVar9 = *(int *)(param_1 + 0xa0);
        }
        *(int *)(param_1 + 0xa4) = iVar13;
        FUN_1446efbd8(lVar10,iVar9);
        iVar13 = *(int *)(param_1 + 0xa0) + 1;
        param_3 = local_78;
      }
      iVar9 = iVar13 + 0x1f;
      if (-1 < iVar13) {
        iVar9 = iVar13;
      }
      *(int *)(param_1 + 0xa0) = iVar13;
      if (iVar13 % 0x20 != 0) {
        lVar20 = *(longlong *)(param_1 + 0x98);
        if (*(longlong *)(param_1 + 0x98) == 0) {
          lVar20 = lVar10;
        }
        bVar11 = -(char)(iVar13 % 0x20);
        *(uint *)(lVar20 + (longlong)(iVar9 >> 5) * 4) =
             (uint)(*(int *)(lVar20 + (longlong)(iVar9 >> 5) * 4) << (bVar11 & 0x1f)) >>
             (bVar11 & 0x1f);
      }
    }
    lVar20 = (longlong)iVar12;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x98);
    }
    bVar11 = (byte)iVar16 & 0x1f;
    puVar4 = (uint *)(lVar10 + (longlong)(iVar22 >> 5) * 4);
    *puVar4 = *puVar4 & (-2 << bVar11 | 0xfffffffeU >> 0x20 - bVar11);
  }
  else {
    iVar12 = *(int *)(param_1 + 0xa8);
    lVar20 = (longlong)iVar12;
    iVar16 = *(int *)(*(longlong *)(param_1 + 0x78) + 4 + lVar20 * 0x20);
    *(int *)(param_1 + 0xa8) = iVar16;
    iVar9 = *(int *)(param_1 + 0xac) + -1;
    *(int *)(param_1 + 0xac) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar16 * 0x20) = 0xffffffff;
    }
  }
  lVar10 = param_1 + 0x88;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    lVar10 = *(longlong *)(param_1 + 0x98);
  }
  iVar16 = iVar12 + 0x1f;
  if (-1 < iVar12) {
    iVar16 = iVar12;
  }
  puVar4 = (uint *)(lVar10 + (longlong)(iVar16 >> 5) * 4);
  *puVar4 = *puVar4 | 1 << ((byte)iVar12 & 0x1f);
  iVar16 = 1;
  lVar10 = *(longlong *)(param_1 + 0x78);
  lVar20 = lVar20 * 0x20;
  puVar2 = (undefined4 *)(lVar10 + lVar20);
  *(longlong *)(lVar10 + lVar20) = param_2;
  *(longlong *)(lVar10 + 8 + lVar20) = param_2;
  *(undefined8 *)(lVar10 + 0x10 + lVar20) = param_3;
  *(undefined4 *)(lVar10 + 0x18 + lVar20) = 0xffffffff;
  uVar18 = (uVar19 << 0x10 | uVar19 & 0xffff) + iVar21 + (uVar18 << 0x13 | uVar18 & 0xffff) +
           ((uVar19 & 0xffff) >> 4);
  uVar19 = *(int *)(param_1 + 0x80) - *(int *)(param_1 + 0xac);
  if ((uVar19 != 0) && (uVar19 != 1)) {
    lVar20 = param_1 + 0xb0;
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      lVar20 = *(longlong *)(param_1 + 0xb8);
    }
    iVar21 = *(int *)(lVar20 + (ulonglong)(*(int *)(param_1 + 0xc0) - 1U & uVar18) * 4);
    if (iVar21 != -1) {
      do {
        puVar3 = (undefined4 *)(*plVar1 + (longlong)iVar21 * 0x20);
        if (*(longlong *)(*plVar1 + (longlong)iVar21 * 0x20) == param_2) {
          uVar5 = *puVar2;
          uVar6 = puVar2[1];
          uVar7 = puVar2[2];
          uVar8 = puVar2[3];
          *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(puVar2 + 4);
          *puVar3 = uVar5;
          puVar3[1] = uVar6;
          puVar3[2] = uVar7;
          puVar3[3] = uVar8;
          FUN_147bee652(plVar1,iVar12);
          goto LAB_14134ae9f;
        }
        iVar21 = puVar3[6];
      } while (iVar21 != -1);
    }
  }
  if (3 < uVar19) {
    uVar15 = (ulonglong)(uVar19 & 0xfffffffe) + 0xf;
    lVar20 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    iVar16 = 1 << ((byte)lVar20 & 0x1f);
  }
  if (((int)uVar19 < 1) || (iVar16 <= *(int *)(param_1 + 0xc0))) {
    uVar18 = *(int *)(param_1 + 0xc0) - 1U & uVar18;
    puVar2[7] = uVar18;
    lVar20 = *(longlong *)(param_1 + 0xb8);
    if (*(longlong *)(param_1 + 0xb8) == 0) {
      lVar20 = param_1 + 0xb0;
    }
    puVar2[6] = *(undefined4 *)
                 (lVar20 + ((longlong)*(int *)(param_1 + 0xc0) - 1U & (longlong)(int)uVar18) * 4);
    lVar20 = *(longlong *)(param_1 + 0xb8);
    if (*(longlong *)(param_1 + 0xb8) == 0) {
      lVar20 = param_1 + 0xb0;
    }
    *(int *)(lVar20 + ((longlong)*(int *)(param_1 + 0xc0) - 1U & (longlong)(int)uVar18) * 4) =
         iVar12;
  }
  else {
    *(int *)(param_1 + 0xc0) = iVar16;
    FUN_14134b55c(plVar1);
  }
LAB_14134ae9f:
  local_58 = &local_6c;
  local_6c = 0;
  local_60 = &local_68;
  FUN_14134b060((longlong *)(param_1 + 0x28),local_4c);
LAB_14134aec8:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14134b060 FUN_14134b060 body=411 status=ok
// SIG undefined FUN_14134b060(void)

int * FUN_14134b060(longlong *param_1,int *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_68 [40];
  int local_40 [2];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_141046996(param_1,local_40);
  puVar1 = (undefined4 *)param_3[1];
  lVar2 = *(longlong *)*param_3;
  *local_38 = lVar2;
  *(undefined4 *)(local_38 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_38 + 0xc) = 0xffffffff;
  uVar5 = (uint)((ulonglong)lVar2 >> 0x10);
  uVar7 = (uint)lVar2 & 0xffff;
  uVar5 = ((uint)lVar2 << 0x10 | uVar7) + (int)((ulonglong)lVar2 >> 0x20) +
          (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar7 >> 4);
  uVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar7 != 0) && (uVar7 != 1)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & uVar5) * 4);
    if (iVar6 != -1) {
      do {
        plVar3 = (longlong *)(*param_1 + (longlong)iVar6 * 0x14);
        if (*plVar3 == lVar2) {
          lVar2 = *local_38;
          *(int *)(plVar3 + 1) = (int)local_38[1];
          *plVar3 = lVar2;
          FUN_147bee5e0(param_1,local_40[0]);
          goto LAB_14134b1a1;
        }
        iVar6 = *(int *)((longlong)plVar3 + 0xc);
      } while (iVar6 != -1);
    }
  }
  if (uVar7 < 4) {
    iVar8 = 1;
  }
  else {
    uVar4 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
    lVar2 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iVar8 = 1 << ((byte)lVar2 & 0x1f);
  }
  iVar6 = local_40[0];
  if (((int)uVar7 < 1) || (iVar8 <= (int)param_1[9])) {
    uVar5 = (int)param_1[9] - 1U & uVar5;
    *(uint *)(local_38 + 2) = uVar5;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(undefined4 *)((longlong)local_38 + 0xc) =
         *(undefined4 *)
          ((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         local_40[0];
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    FUN_14134b308(param_1);
  }
LAB_14134b1a1:
  *param_2 = iVar6;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14134b1fc FUN_14134b1fc body=267 status=ok
// SIG undefined FUN_14134b1fc(void)

void FUN_14134b1fc(longlong param_1,longlong param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  longlong local_50;
  undefined4 local_48;
  longlong local_40;
  longlong *local_38;
  longlong *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = param_2;
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar3 = (uint)param_2 & 0xffff;
    lVar2 = param_1 + 0x60;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x68);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(param_1 + 0x70) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar3) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar3 >> 4)) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x28);
      do {
        if (*(longlong *)(lVar2 + (longlong)iVar4 * 0x14) == param_2) goto LAB_14134b2e9;
        iVar4 = *(int *)(lVar2 + (longlong)iVar4 * 0x14 + 0xc);
      } while (iVar4 != -1);
    }
  }
  local_30 = &local_50;
  local_50 = param_2;
  local_48 = param_3;
  local_38 = &local_40;
  FUN_145913010(param_1 + 200,local_24,&local_38);
  local_30 = (longlong *)&local_54;
  local_54 = 1;
  local_38 = &local_40;
  FUN_14134b060((longlong *)(param_1 + 0x28),local_24,&local_38);
LAB_14134b2e9:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14134b308 FUN_14134b308 body=594 status=ok
// SIG undefined FUN_14134b308(void)

void FUN_14134b308(longlong *param_1)

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
        uVar2 = *(undefined8 *)(lVar14 + lVar13 * 0x14);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x10 + lVar13 * 0x14) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0xc + lVar13 * 0x14) =
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
            if (iVar3 - lVar14 == lVar13) goto LAB_14134b511;
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
LAB_14134b511:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14134b55c FUN_14134b55c body=597 status=ok
// SIG undefined FUN_14134b55c(void)

void FUN_14134b55c(longlong *param_1)

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
        lVar13 = (longlong)iVar7 * 0x20;
        uVar2 = *(undefined8 *)(lVar14 + lVar13);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x1c + lVar13) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0x18 + lVar13) =
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
            if (iVar3 - lVar14 == lVar13) goto LAB_14134b768;
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
LAB_14134b768:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14134b7b2 FUN_14134b7b2 body=489 status=ok
// SIG undefined FUN_14134b7b2(void)

void FUN_14134b7b2(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
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
      iVar6 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar5 = (longlong)iVar6 * 0x1c;
        uVar4 = *(undefined8 *)(lVar3 + lVar5);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x18 + lVar5) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x14 + lVar5) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar6 = local_58._4_4_;
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



// FUNCTION 14134b99c FUN_14134b99c body=118 status=ok
// SIG undefined FUN_14134b99c(void)

undefined8
FUN_14134b99c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *param_1;
  local_28[0] = *param_5;
  local_38 = local_28;
  local_20 = *(undefined8 *)(param_5 + 8);
  *(undefined8 *)(param_5 + 8) = 0;
  local_18 = *(undefined4 *)(param_5 + 0x10);
  *(undefined4 *)(param_5 + 0x10) = 0;
  FUN_14134ba14(uVar1,param_2);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14134ba14 FUN_14134ba14 body=295 status=ok
// SIG undefined FUN_14134ba14(void)

undefined8 *
FUN_14134ba14(undefined8 *param_1,undefined8 *param_2,longlong param_3,int param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  
  plVar3 = (longlong *)*param_1;
  iVar7 = *(int *)(param_1 + 1);
  lVar8 = (longlong)iVar7;
  if (lVar8 != 0) {
    lVar4 = lVar8 * 0x58;
    plVar6 = plVar3;
    do {
      if (*plVar6 == param_3) {
        if (plVar6 != (longlong *)0x0) {
          iVar7 = -1;
          goto LAB_14134babb;
        }
        break;
      }
      plVar6 = plVar6 + 0xb;
      lVar4 = lVar4 + -0x58;
    } while (lVar4 != 0);
  }
  *(uint *)(param_1 + 1) = iVar7 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar7 + 1U) {
    FUN_14134bc14(param_1,iVar7);
    plVar3 = (longlong *)*param_1;
  }
  uVar1 = *param_5;
  lVar4 = *(longlong *)(param_5 + 8);
  *(undefined8 *)(param_5 + 8) = 0;
  uVar2 = *(undefined4 *)(param_5 + 0x10);
  *(undefined4 *)(param_5 + 0x10) = 0;
  plVar3[lVar8 * 0xb] = param_3;
  *(int *)(plVar3 + lVar8 * 0xb + 1) = param_4;
  puVar5 = (undefined8 *)((longlong)plVar3 + lVar8 * 0x58 + 0xc);
  *puVar5 = 0;
  puVar5[1] = 0;
  *(int *)((longlong)plVar3 + lVar8 * 0x58 + 0x1c) = param_4 * 100;
  *(undefined1 *)(plVar3 + lVar8 * 0xb + 5) = uVar1;
  plVar3[lVar8 * 0xb + 6] = lVar4;
  *(undefined4 *)(plVar3 + lVar8 * 0xb + 7) = uVar2;
  plVar3[lVar8 * 0xb + 8] = 0;
  (plVar3 + lVar8 * 0xb + 8)[1] = 0;
  *(undefined2 *)(plVar3 + lVar8 * 0xb + 10) = 0;
LAB_14134babb:
  *param_2 = param_1;
  *(int *)(param_2 + 1) = iVar7;
  puVar5 = *(undefined8 **)(param_5 + 8);
  if (*(int *)(param_5 + 0x10) != 0) {
    if (puVar5 == (undefined8 *)0x0) {
      return param_2;
    }
    (**(code **)*puVar5)(puVar5,0);
    FUN_1446efa72(param_5 + 8,0,0,0x10);
    *(undefined4 *)(param_5 + 0x10) = 0;
    puVar5 = *(undefined8 **)(param_5 + 8);
  }
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  return param_2;
}



// FUNCTION 14134bb3c FUN_14134bb3c body=216 status=ok
// SIG undefined FUN_14134bb3c(void)

longlong * FUN_14134bb3c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  
  iVar2 = (int)param_1[1];
  if (((longlong)iVar2 < 0) || ((int)((longlong *)*param_1)[1] <= iVar2)) goto LAB_14134bb94;
  lVar1 = *(longlong *)*param_1 + (longlong)iVar2 * 0x58;
  plVar6 = (longlong *)(lVar1 + 0x40);
  lVar3 = *param_2;
  *param_2 = 0;
  lVar5 = param_2[1];
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)(lVar1 + 0x48) == 0) {
LAB_14134bb86:
    if (*plVar6 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar6;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar6,0,0,0x10);
      *(undefined4 *)(lVar1 + 0x48) = 0;
      goto LAB_14134bb86;
    }
  }
  *plVar6 = lVar3;
  *(int *)(lVar1 + 0x48) = (int)lVar5;
LAB_14134bb94:
  if ((int)param_2[1] != 0) {
    puVar4 = (undefined8 *)*param_2;
    if (puVar4 == (undefined8 *)0x0) {
      return param_1;
    }
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(param_2,0,0,0x10);
    *(undefined4 *)(param_2 + 1) = 0;
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 14134bc14 FUN_14134bc14 body=369 status=ok
// SIG undefined FUN_14134bc14(void)

void FUN_14134bc14(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
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
  uVar5 = lVar4 * 0x58;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14134bc9b;
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
LAB_14134bc9b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x58)) {
    uVar7 = uVar5 / 0x58 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x58,8);
  return;
}



// FUNCTION 14134bd86 FUN_14134bd86 body=370 status=ok
// SIG undefined FUN_14134bd86(void)

undefined8 * FUN_14134bd86(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 14134bf06 FUN_14134bf06 body=205 status=ok
// SIG undefined FUN_14134bf06(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14134bf06(void)

{
  if ((DAT_14ca89a77 & 2) != 0) {
    return;
  }
  DAT_14ca89a77 = DAT_14ca89a77 | 2;
  _DAT_14ca89a18 = L"FCopyTextureCS";
  _DAT_14ca89a30 = FUN_146826540;
  _DAT_14ca89a38 = FUN_146825d77;
  _DAT_14ca89a40 = FUN_146825fd6;
  _DAT_14ca89a48 = FUN_1407e02ea;
  _DAT_14ca89a50 = FUN_146826273;
  _DAT_14ca89a28 = FUN_147419d88;
  _DAT_14ca89a68 = 0xffffffff00000100;
  _DAT_14ca89a70 = 8;
  DAT_14ca89a74 = 0;
  _DAT_14ca89a58 = &LAB_147419db4;
  FUN_145914d1c();
  FUN_145914e8a();
  FUN_1407e00cc(&DAT_14ca89a10);
  return;
}



// FUNCTION 14134bfd4 FUN_14134bfd4 body=96 status=ok
// SIG undefined FUN_14134bfd4(void)

void FUN_14134bfd4(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140595974(0xb80,0);
    lVar4 = 0xf;
    plVar1 = plVar2;
    do {
      plVar3 = plVar1 + 0x17;
      *plVar1 = (longlong)plVar3;
      lVar4 = lVar4 + -1;
      plVar1 = plVar3;
    } while (lVar4 != 0);
    *plVar3 = *param_1;
    *param_1 = (longlong)plVar2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 0x10;
  }
  *param_1 = *plVar2;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}



// FUNCTION 14134c034 FUN_14134c034 body=155 status=ok
// SIG undefined FUN_14134c034(void)

void FUN_14134c034(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  code *local_40;
  undefined8 *local_38;
  code **local_30;
  code *local_28;
  undefined8 **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400bc8c2(param_1 + 0x798);
  if (*(char *)(param_1 + 0x798) == '\0') {
    *(char *)(param_1 + 0x7e9) = '\x02' - *(char *)(param_1 + 0x7c0);
  }
  local_38 = &local_48;
  local_30 = &local_40;
  local_40 = FUN_143cba71c;
  local_20 = &local_30;
  local_28 = FUN_14061a336;
  local_48 = param_2;
  FUN_1448fef12(param_1,3);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14134c0d0 FUN_14134c0d0 body=1099 status=ok
// SIG undefined FUN_14134c0d0(void)

undefined8 * FUN_14134c0d0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  size_t sVar6;
  void *pvVar7;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined ***local_c0;
  undefined1 *local_b8;
  code *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  undefined **local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  void *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  undefined **local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_3 == 0) {
LAB_14134c47b:
    param_3 = 0;
  }
  else {
    if (DAT_14cb39ca0 == 0) {
      local_c0 = &local_88;
      local_88 = (undefined **)FUN_144a7958c;
      local_b0 = FUN_14081d0ea;
      local_b8 = &LAB_14638c6c0;
      local_c8 = &LAB_14811044c;
      local_d0 = &LAB_1407f5cf8;
      local_d8 = L"Engine";
      local_e0 = 0;
      local_e8 = 0x10000004;
      local_f0 = 0x10;
      local_f8 = 0x8e0;
      FUN_14081cfa3(L"/Script/Niagara",L"NiagaraComponent",&DAT_14cb39ca0,FUN_14646d392);
    }
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(DAT_14cb39ca0 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb39ca0 + 0x38) * 8) != DAT_14cb39ca0 + 0x30)) goto LAB_14134c47b;
  }
  puVar4 = (undefined8 *)(param_1 + 8);
  piVar3 = (int *)(**(code **)(*(longlong *)(param_3 + 0x678) + 0x58))(param_3 + 0x678,puVar4,0);
  if ((piVar3 == (int *)0x0) || ((longlong)*piVar3 == -1)) {
    local_48 = (undefined **)0x0;
    uStack_40 = 0xffffffff00000000;
  }
  else {
    pvVar7 = (void *)((longlong)*piVar3 + *(longlong *)(param_3 + 0x698));
    local_48 = (undefined **)0x0;
    uStack_40 = 0xffffffff00000000;
    if (pvVar7 != (void *)0x0) {
      local_88 = (undefined **)0x0;
      uStack_80 = 0;
      uVar5 = FUN_144741050(param_1 + 0x10);
      iVar2 = FUN_144a81174(uVar5);
      uStack_80 = CONCAT44(uStack_80._4_4_,iVar2);
      if (iVar2 != 0) {
        FUN_1447403be(&local_88,0);
      }
      uVar5 = FUN_144741050(param_1 + 0x10);
      iVar2 = FUN_144a81174(uVar5);
      memcpy(local_88,pvVar7,(longlong)iVar2);
      local_48 = local_88;
      uStack_40 = uStack_80;
    }
  }
  local_a8 = *puVar4;
  local_a0 = *(undefined4 *)(param_1 + 0x10);
  local_98 = (void *)0x0;
  local_90 = *(int *)(param_1 + 0x20);
  sVar6 = (size_t)local_90;
  pvVar7 = *(void **)(param_1 + 0x18);
  if (sVar6 == 0) {
    local_8c = 0;
    uStack_80 = *puVar4;
    local_78 = *(undefined4 *)(param_1 + 0x10);
    local_68 = 0;
  }
  else {
    FUN_1447a127e(&local_98,local_90,0);
    memcpy(local_98,pvVar7,sVar6);
    pvVar7 = local_98;
    sVar6 = (size_t)local_90;
    local_88 = &PTR_FUN_14ad97308;
    uStack_80 = local_a8;
    local_78 = local_a0;
    local_70 = (void *)0x0;
    local_68 = CONCAT44(local_68._4_4_,local_90);
    if (sVar6 != 0) {
      FUN_1447a127e(&local_70,local_90,0);
      memcpy(local_70,pvVar7,sVar6);
      goto LAB_14134c1f2;
    }
  }
  local_70 = (void *)0x0;
  local_88 = &PTR_FUN_14ad97308;
  local_68 = local_68 & 0xffffffff;
LAB_14134c1f2:
  FUN_14134c51c(&local_60,&local_48);
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  bVar1 = *(byte *)(param_2 + 4);
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,8);
  *param_2 = puVar4;
  *(byte *)(param_2 + 4) = (bVar1 & 0xfc) + 1;
  *puVar4 = &PTR_FUN_14ad97308;
  *(undefined4 *)(puVar4 + 2) = local_78;
  puVar4[1] = uStack_80;
  puVar4[3] = 0;
  puVar4[3] = local_70;
  local_70 = (void *)0x0;
  *(undefined4 *)(puVar4 + 4) = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar4 + 0x24) = local_68._4_4_;
  local_68 = 0;
  if (local_54 == -1) {
    puVar4[5] = 0;
    local_54 = -1;
    local_58 = 0;
  }
  else {
    puVar4[5] = local_60;
    local_60 = 0;
  }
  *(undefined4 *)(puVar4 + 6) = local_58;
  *(int *)((longlong)puVar4 + 0x34) = local_54;
  if (uStack_40._4_4_ != -1) {
    if (local_48 != (undefined **)0x0) {
      FUN_1400020a8();
    }
    uStack_40 = 0xffffffff00000000;
  }
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14134c51c FUN_14134c51c body=101 status=ok
// SIG undefined FUN_14134c51c(void)

undefined8 * FUN_14134c51c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  iVar1 = *(int *)((longlong)param_2 + 0xc);
  *param_1 = 0;
  if (iVar1 == -1) {
    param_1[1] = 0xffffffff00000000;
  }
  else {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1447a127e(param_1,iVar1,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14134c582 FUN_14134c582 body=8 status=ok
// SIG undefined FUN_14134c582(void)

void FUN_14134c582(longlong param_1)

{
  *(byte *)(param_1 + 0x9f) = *(byte *)(param_1 + 0x9f) | 8;
  return;
}



// FUNCTION 14134c58a FUN_14134c58a body=269 status=ok
// SIG undefined FUN_14134c58a(void)

void FUN_14134c58a(longlong param_1,int param_2)

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
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14134c698 FUN_14134c698 body=487 status=ok
// SIG undefined FUN_14134c698(void)

void FUN_14134c698(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 auStack_98 [40];
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
    local_58._4_4_ = 0;
    uVar11 = 0xffffffff;
    iVar13 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar12 = local_68 >> 0x20;
    uVar11 = (uint)local_58;
    iVar13 = (int)local_68;
  }
  plVar4 = local_60;
  iVar6 = local_58._4_4_;
  iVar8 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar10 = *param_1;
      lVar9 = (longlong)iVar6 * 0x60;
      *(undefined4 *)(lVar10 + 0x50 + lVar9) = 0;
      if (*(longlong *)(lVar10 + 0x48 + lVar9) != 0) {
        FUN_1400020a8();
      }
      FUN_1403950f6(lVar10 + lVar9 + 8);
      uVar11 = uVar11 & ~(uint)uVar12;
      plVar7 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar7 = plVar4;
      }
      iVar2 = (int)plVar4[3];
      lVar10 = (longlong)iVar13;
      uVar5 = *(uint *)((longlong)plVar7 + lVar10 * 4) & uVar11;
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
        lVar9 = 0;
        while( true ) {
          iVar8 = iVar8 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar9 * 4 + lVar10 * 4 + 4);
          if (uVar5 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar3 - lVar10 == lVar9) goto LAB_14134c811;
        }
        iVar13 = iVar13 + (int)lVar9 + 1;
        uVar11 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar12 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar6 = (iVar8 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_14134c811:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1448fc38a(param_1,0);
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



// FUNCTION 14134c88c FUN_14134c88c body=1142 status=ok
// SIG undefined FUN_14134c88c(void)

undefined8 * FUN_14134c88c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  ulonglong local_d8;
  undefined4 local_d0;
  undefined3 uStack_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined2 *local_b0;
  int local_a8;
  uint uStack_a4;
  undefined4 local_a0;
  undefined3 uStack_9c;
  longlong local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  longlong *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_140ea0e34();
  *param_1 = &PTR_FUN_14a52e7a0;
  param_1[5] = &PTR_FUN_14a52eaa0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0;
  FUN_14134cd04(param_1 + 0x30);
  *(undefined1 *)((longlong)param_1 + 0x6a9) = 1;
  param_1[0xda] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c7) = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0x3f80000000000000;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0x41c00000;
  *(undefined4 *)(param_1 + 0xe1) = 0;
  *(undefined2 *)((longlong)param_1 + 0x70c) = 2;
  *(undefined1 *)((longlong)param_1 + 0x70e) = 0;
  *(undefined4 *)(param_1 + 0xe2) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x724) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xe5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x72c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xe6) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x734) = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cab87d0) && (FUN_144b3d300(&DAT_14cab87d0), DAT_14cab87d0 == -1)) {
    FUN_140056680(&local_b0,L"/Engine/EngineFonts/Roboto");
    local_e8 = &DAT_14c872ce8;
    FUN_1449da20c(DAT_14c872ce0,L"SlateStyle",L"DefaultFontName",&local_b0);
    puVar7 = local_b0;
    if (local_a8 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    FUN_145b0497c(&DAT_14cab87b8,puVar7,0);
    if (local_b0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    atexit(FUN_143334993);
    _Init_thread_footer(&DAT_14cab87d0);
  }
  local_c8 = 0;
  local_d0 = 0;
  uStack_cc = 0;
  local_c0 = 0;
  uStack_b8 = 0x3f80000000000000;
  local_b0 = (undefined2 *)&DAT_149eea5a7;
  local_a8 = 4;
  uStack_a4 = uStack_a4 & 0xffffff00;
  uVar5 = FUN_14001a6c0(&local_b0,1);
  local_d8 = (ulonglong)uVar5;
  local_e8 = (undefined8 *)&local_d0;
  FUN_140324f46(&local_b0,DAT_14cab87c8,0x41400000);
  puVar7 = local_b0;
  if (DAT_14c950c29 == 1) {
    if (local_b0 == (undefined2 *)0x0) {
      puVar7 = (undefined2 *)0x0;
    }
    else {
      FUN_1456cec3c();
      puVar7 = local_b0;
    }
  }
  bVar4 = DAT_14c950c29;
  param_1[0xd7] = puVar7;
  lVar6 = CONCAT44(uStack_a4,local_a8);
  if ((bVar4 & 1) != 0) {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar6 = CONCAT44(uStack_a4,local_a8);
      bVar4 = DAT_14c950c29;
    }
  }
  param_1[0xd8] = lVar6;
  *(uint *)((longlong)param_1 + 0x6cb) = CONCAT31(uStack_9c,local_a0._3_1_);
  *(undefined4 *)(param_1 + 0xd9) = local_a0;
  if ((bVar4 & 1) != 0) {
    if (local_98 == 0) {
      local_98 = 0;
    }
    else {
      FUN_1456cec3c();
    }
  }
  param_1[0xda] = local_98;
  *(undefined4 *)(param_1 + 0xdb) = local_90;
  *(undefined4 *)((longlong)param_1 + 0x6dc) = uStack_8c;
  *(undefined4 *)(param_1 + 0xdc) = uStack_88;
  *(undefined4 *)((longlong)param_1 + 0x6e4) = uStack_84;
  if (local_78 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_78 + 1) = (int)local_78[1] + 1;
    UNLOCK();
  }
  plVar3 = (longlong *)param_1[0xde];
  param_1[0xdd] = local_80;
  param_1[0xde] = local_78;
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
  *(undefined4 *)((longlong)param_1 + 0x704) = uStack_64;
  *(undefined4 *)(param_1 + 0xe1) = uStack_60;
  *(undefined4 *)((longlong)param_1 + 0x70c) = uStack_5c;
  *(undefined4 *)(param_1 + 0xe2) = uStack_58;
  *(undefined4 *)(param_1 + 0xdf) = local_70;
  *(undefined4 *)((longlong)param_1 + 0x6fc) = uStack_6c;
  *(undefined4 *)(param_1 + 0xe0) = uStack_68;
  *(undefined4 *)((longlong)param_1 + 0x704) = uStack_64;
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_78 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar2 = (int *)((longlong)local_78 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_78 + 0x10))(local_78);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x77c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x784) = 0;
  param_1[0xd4] = 0x600000001;
  *(undefined2 *)(param_1 + 0xd5) = 0x100;
  *(undefined8 *)((longlong)param_1 + 0x6ac) = 0x3f80000000000000;
  *(undefined4 *)((longlong)param_1 + 0x71c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x722) = 1;
  *(undefined2 *)(param_1 + 0xe4) = 1;
  lVar6 = FUN_140bcc93a();
  FUN_14134d094(param_1 + 0x30,lVar6 + 0x34c0);
  *(undefined4 *)((longlong)param_1 + 0x724) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(param_1 + 0xe5) = *(undefined4 *)((longlong)param_1 + 0x664);
  *(undefined4 *)((longlong)param_1 + 0x72c) = *(undefined4 *)(param_1 + 0xcd);
  *(undefined4 *)(param_1 + 0xe6) = *(undefined4 *)((longlong)param_1 + 0x66c);
  *(undefined4 *)((longlong)param_1 + 0x734) = *(undefined4 *)(param_1 + 0xce);
  if ((local_50 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14134cd04 FUN_14134cd04 body=910 status=ok
// SIG undefined FUN_14134cd04(void)

undefined8 * FUN_14134cd04(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_140;
  undefined8 *local_138;
  undefined8 *local_130;
  undefined8 local_128;
  undefined1 local_120;
  undefined8 local_110;
  undefined **local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  longlong local_d0;
  undefined8 local_c8 [10];
  undefined4 local_78;
  byte local_74;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  *param_1 = &PTR_FUN_149ee3570;
  FUN_140ca8f8e(param_1 + 2);
  local_110 = DAT_14c84635c;
  local_58 = 0;
  uStack_50 = 0;
  local_130 = &DAT_149e1e2f8;
  local_140 = 0;
  local_148 = 0;
  local_120 = 0;
  local_128 = 0;
  local_138 = &local_110;
  FUN_1412ce282(&local_108,0,0);
  local_108 = &PTR_FUN_149ee97c0;
  local_74 = local_74 & 0xfb;
  param_1[0x18] = &PTR_FUN_149ed05f0;
  *(undefined4 *)(param_1 + 0x19) = local_100;
  *(undefined4 *)((longlong)param_1 + 0xcc) = uStack_fc;
  *(undefined4 *)(param_1 + 0x1a) = uStack_f8;
  *(undefined4 *)((longlong)param_1 + 0xd4) = uStack_f4;
  *(undefined4 *)(param_1 + 0x1b) = local_f0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = uStack_ec;
  *(undefined4 *)(param_1 + 0x1c) = uStack_e8;
  *(undefined4 *)((longlong)param_1 + 0xe4) = uStack_e4;
  *(undefined4 *)(param_1 + 0x1d) = local_e0;
  *(undefined4 *)((longlong)param_1 + 0xec) = uStack_dc;
  *(undefined4 *)(param_1 + 0x1e) = uStack_d8;
  *(undefined4 *)((longlong)param_1 + 0xf4) = uStack_d4;
  param_1[0x1f] = local_d0;
  if ((local_d0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  plVar2 = local_68;
  puVar5 = local_c8;
  puVar6 = param_1 + 0x20;
  for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(byte *)((longlong)param_1 + 0x154) = local_74;
  *(undefined4 *)(param_1 + 0x2a) = local_78;
  param_1[0x2b] = local_70;
  param_1[0x2c] = local_68;
  if (local_68 == (longlong *)0x0) {
    param_1[0x2d] = local_60;
  }
  else {
    LOCK();
    *(int *)(local_68 + 1) = (int)local_68[1] + 1;
    UNLOCK();
    param_1[0x2d] = local_60;
    local_108 = &PTR_FUN_149ed05f0;
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_68 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  FUN_140ca8f8e(param_1 + 0x2e);
  FUN_140ca8f8e(param_1 + 0x44);
  local_110 = DAT_14c84635c;
  local_58 = 0;
  uStack_50 = 0;
  local_130 = &DAT_149e1e2f8;
  local_140 = 0;
  local_148 = 0;
  local_120 = 0;
  local_128 = 0;
  local_138 = &local_110;
  FUN_1412ce282(&local_108,0,0);
  local_108 = &PTR_FUN_149ee97c0;
  local_74 = local_74 & 0xfb;
  param_1[0x5a] = &PTR_FUN_149ed05f0;
  *(undefined4 *)(param_1 + 0x5b) = local_100;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_fc;
  *(undefined4 *)(param_1 + 0x5c) = uStack_f8;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_f4;
  *(undefined4 *)(param_1 + 0x5d) = local_f0;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = uStack_ec;
  *(undefined4 *)(param_1 + 0x5e) = uStack_e8;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = uStack_e4;
  *(undefined4 *)(param_1 + 0x5f) = local_e0;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = uStack_dc;
  *(undefined4 *)(param_1 + 0x60) = uStack_d8;
  *(undefined4 *)((longlong)param_1 + 0x304) = uStack_d4;
  param_1[0x61] = local_d0;
  if ((local_d0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar5 = local_c8;
  puVar6 = param_1 + 0x62;
  for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(byte *)((longlong)param_1 + 0x364) = local_74;
  *(undefined4 *)(param_1 + 0x6c) = local_78;
  param_1[0x6d] = local_70;
  param_1[0x6e] = local_68;
  if (local_68 == (longlong *)0x0) {
    param_1[0x6f] = local_60;
  }
  else {
    LOCK();
    *(int *)(local_68 + 1) = (int)local_68[1] + 1;
    UNLOCK();
    param_1[0x6f] = local_60;
    local_108 = &PTR_FUN_149ed05f0;
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_68 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar3 = (int *)((longlong)local_68 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_68 + 0x10))(local_68);
        }
      }
    }
  }
  FUN_140ca8f8e(param_1 + 0x70);
  FUN_140ca8f8e(param_1 + 0x86);
  param_1[0x9c] = 0x3f800000;
  param_1[0x9d] = &DAT_3f8000003f800000;
  *(undefined2 *)(param_1 + 0x9e) = 2;
  *(undefined8 *)((longlong)param_1 + 0x4f4) = 0x400000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x4fc) = 0x400000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x504) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50c) = 0;
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14134d094 FUN_14134d094 body=1935 status=ok
// SIG undefined FUN_14134d094(void)

longlong FUN_14134d094(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
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
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  longlong lVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  
  uVar5 = *(undefined4 *)(param_2 + 0x18);
  uVar6 = *(undefined4 *)(param_2 + 0x1c);
  uVar7 = *(undefined4 *)(param_2 + 0x20);
  uVar8 = *(undefined4 *)(param_2 + 0x24);
  uVar9 = *(undefined4 *)(param_2 + 0x28);
  uVar10 = *(undefined4 *)(param_2 + 0x2c);
  uVar11 = *(undefined4 *)(param_2 + 0x30);
  uVar12 = *(undefined4 *)(param_2 + 0x34);
  uVar13 = *(undefined4 *)(param_2 + 0x3c);
  uVar14 = *(undefined4 *)(param_2 + 0x40);
  uVar15 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar13;
  *(undefined4 *)(param_1 + 0x40) = uVar14;
  *(undefined4 *)(param_1 + 0x44) = uVar15;
  *(undefined4 *)(param_1 + 0x28) = uVar9;
  *(undefined4 *)(param_1 + 0x2c) = uVar10;
  *(undefined4 *)(param_1 + 0x30) = uVar11;
  *(undefined4 *)(param_1 + 0x34) = uVar12;
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  *(undefined4 *)(param_1 + 0x1c) = uVar6;
  *(undefined4 *)(param_1 + 0x20) = uVar7;
  *(undefined4 *)(param_1 + 0x24) = uVar8;
  lVar20 = *(longlong *)(param_2 + 0x48);
  if (DAT_14c950c29 == '\x01') {
    if (lVar20 == 0) {
      lVar20 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar20 = *(longlong *)(param_2 + 0x48);
    }
  }
  *(longlong *)(param_1 + 0x48) = lVar20;
  puVar21 = (undefined8 *)(param_2 + 0x50);
  puVar22 = (undefined8 *)(param_1 + 0x50);
  for (lVar20 = 10; lVar20 != 0; lVar20 = lVar20 + -1) {
    *puVar22 = *puVar21;
    puVar21 = puVar21 + 1;
    puVar22 = puVar22 + 1;
  }
  *(undefined1 *)(param_1 + 0xa4) = *(undefined1 *)(param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  uVar3 = *(undefined8 *)(param_2 + 0xa8);
  lVar20 = *(longlong *)(param_2 + 0xb0);
  if (lVar20 != 0) {
    LOCK();
    *(int *)(lVar20 + 8) = *(int *)(lVar20 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xa8) = uVar3;
  *(longlong *)(param_1 + 0xb0) = lVar20;
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
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  uVar5 = *(undefined4 *)(param_2 + 200);
  uVar6 = *(undefined4 *)(param_2 + 0xcc);
  uVar7 = *(undefined4 *)(param_2 + 0xd0);
  uVar8 = *(undefined4 *)(param_2 + 0xd4);
  uVar9 = *(undefined4 *)(param_2 + 0xd8);
  uVar10 = *(undefined4 *)(param_2 + 0xdc);
  uVar11 = *(undefined4 *)(param_2 + 0xe0);
  uVar12 = *(undefined4 *)(param_2 + 0xe4);
  uVar13 = *(undefined4 *)(param_2 + 0xec);
  uVar14 = *(undefined4 *)(param_2 + 0xf0);
  uVar15 = *(undefined4 *)(param_2 + 0xf4);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xec) = uVar13;
  *(undefined4 *)(param_1 + 0xf0) = uVar14;
  *(undefined4 *)(param_1 + 0xf4) = uVar15;
  *(undefined4 *)(param_1 + 0xd8) = uVar9;
  *(undefined4 *)(param_1 + 0xdc) = uVar10;
  *(undefined4 *)(param_1 + 0xe0) = uVar11;
  *(undefined4 *)(param_1 + 0xe4) = uVar12;
  *(undefined4 *)(param_1 + 200) = uVar5;
  *(undefined4 *)(param_1 + 0xcc) = uVar6;
  *(undefined4 *)(param_1 + 0xd0) = uVar7;
  *(undefined4 *)(param_1 + 0xd4) = uVar8;
  lVar20 = *(longlong *)(param_2 + 0xf8);
  if (DAT_14c950c29 == '\x01') {
    if (lVar20 == 0) {
      lVar20 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar20 = *(longlong *)(param_2 + 0xf8);
    }
  }
  *(longlong *)(param_1 + 0xf8) = lVar20;
  puVar21 = (undefined8 *)(param_2 + 0x100);
  puVar22 = (undefined8 *)(param_1 + 0x100);
  for (lVar20 = 10; lVar20 != 0; lVar20 = lVar20 + -1) {
    *puVar22 = *puVar21;
    puVar21 = puVar21 + 1;
    puVar22 = puVar22 + 1;
  }
  *(undefined1 *)(param_1 + 0x154) = *(undefined1 *)(param_2 + 0x154);
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x150);
  uVar3 = *(undefined8 *)(param_2 + 0x158);
  lVar20 = *(longlong *)(param_2 + 0x160);
  if (lVar20 != 0) {
    LOCK();
    *(int *)(lVar20 + 8) = *(int *)(lVar20 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x160);
  *(undefined8 *)(param_1 + 0x158) = uVar3;
  *(longlong *)(param_1 + 0x160) = lVar20;
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
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  uVar5 = *(undefined4 *)(param_2 + 0x178);
  uVar6 = *(undefined4 *)(param_2 + 0x17c);
  uVar7 = *(undefined4 *)(param_2 + 0x180);
  uVar8 = *(undefined4 *)(param_2 + 0x184);
  uVar9 = *(undefined4 *)(param_2 + 0x188);
  uVar10 = *(undefined4 *)(param_2 + 0x18c);
  uVar11 = *(undefined4 *)(param_2 + 400);
  uVar12 = *(undefined4 *)(param_2 + 0x194);
  uVar13 = *(undefined4 *)(param_2 + 0x19c);
  uVar14 = *(undefined4 *)(param_2 + 0x1a0);
  uVar15 = *(undefined4 *)(param_2 + 0x1a4);
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_2 + 0x198);
  *(undefined4 *)(param_1 + 0x19c) = uVar13;
  *(undefined4 *)(param_1 + 0x1a0) = uVar14;
  *(undefined4 *)(param_1 + 0x1a4) = uVar15;
  *(undefined4 *)(param_1 + 0x188) = uVar9;
  *(undefined4 *)(param_1 + 0x18c) = uVar10;
  *(undefined4 *)(param_1 + 400) = uVar11;
  *(undefined4 *)(param_1 + 0x194) = uVar12;
  *(undefined4 *)(param_1 + 0x178) = uVar5;
  *(undefined4 *)(param_1 + 0x17c) = uVar6;
  *(undefined4 *)(param_1 + 0x180) = uVar7;
  *(undefined4 *)(param_1 + 0x184) = uVar8;
  lVar20 = *(longlong *)(param_2 + 0x1a8);
  if (DAT_14c950c29 == '\x01') {
    if (lVar20 == 0) {
      lVar20 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar20 = *(longlong *)(param_2 + 0x1a8);
    }
  }
  *(longlong *)(param_1 + 0x1a8) = lVar20;
  puVar21 = (undefined8 *)(param_2 + 0x1b0);
  puVar22 = (undefined8 *)(param_1 + 0x1b0);
  for (lVar20 = 10; lVar20 != 0; lVar20 = lVar20 + -1) {
    *puVar22 = *puVar21;
    puVar21 = puVar21 + 1;
    puVar22 = puVar22 + 1;
  }
  *(undefined1 *)(param_1 + 0x204) = *(undefined1 *)(param_2 + 0x204);
  *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_2 + 0x200);
  uVar3 = *(undefined8 *)(param_2 + 0x208);
  lVar20 = *(longlong *)(param_2 + 0x210);
  if (lVar20 != 0) {
    LOCK();
    *(int *)(lVar20 + 8) = *(int *)(lVar20 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x210);
  *(undefined8 *)(param_1 + 0x208) = uVar3;
  *(longlong *)(param_1 + 0x210) = lVar20;
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
  *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_2 + 0x218);
  uVar5 = *(undefined4 *)(param_2 + 0x228);
  uVar6 = *(undefined4 *)(param_2 + 0x22c);
  uVar7 = *(undefined4 *)(param_2 + 0x230);
  uVar8 = *(undefined4 *)(param_2 + 0x234);
  uVar9 = *(undefined4 *)(param_2 + 0x238);
  uVar10 = *(undefined4 *)(param_2 + 0x23c);
  uVar11 = *(undefined4 *)(param_2 + 0x240);
  uVar12 = *(undefined4 *)(param_2 + 0x244);
  uVar13 = *(undefined4 *)(param_2 + 0x24c);
  uVar14 = *(undefined4 *)(param_2 + 0x250);
  uVar15 = *(undefined4 *)(param_2 + 0x254);
  *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(param_2 + 0x248);
  *(undefined4 *)(param_1 + 0x24c) = uVar13;
  *(undefined4 *)(param_1 + 0x250) = uVar14;
  *(undefined4 *)(param_1 + 0x254) = uVar15;
  *(undefined4 *)(param_1 + 0x238) = uVar9;
  *(undefined4 *)(param_1 + 0x23c) = uVar10;
  *(undefined4 *)(param_1 + 0x240) = uVar11;
  *(undefined4 *)(param_1 + 0x244) = uVar12;
  *(undefined4 *)(param_1 + 0x228) = uVar5;
  *(undefined4 *)(param_1 + 0x22c) = uVar6;
  *(undefined4 *)(param_1 + 0x230) = uVar7;
  *(undefined4 *)(param_1 + 0x234) = uVar8;
  lVar20 = *(longlong *)(param_2 + 600);
  if (DAT_14c950c29 == '\x01') {
    if (lVar20 == 0) {
      lVar20 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar20 = *(longlong *)(param_2 + 600);
    }
  }
  *(longlong *)(param_1 + 600) = lVar20;
  puVar21 = (undefined8 *)(param_2 + 0x260);
  puVar22 = (undefined8 *)(param_1 + 0x260);
  for (lVar20 = 10; lVar20 != 0; lVar20 = lVar20 + -1) {
    *puVar22 = *puVar21;
    puVar21 = puVar21 + 1;
    puVar22 = puVar22 + 1;
  }
  *(undefined1 *)(param_1 + 0x2b4) = *(undefined1 *)(param_2 + 0x2b4);
  *(undefined4 *)(param_1 + 0x2b0) = *(undefined4 *)(param_2 + 0x2b0);
  uVar3 = *(undefined8 *)(param_2 + 0x2b8);
  lVar20 = *(longlong *)(param_2 + 0x2c0);
  if (lVar20 != 0) {
    LOCK();
    *(int *)(lVar20 + 8) = *(int *)(lVar20 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x2c0);
  *(undefined8 *)(param_1 + 0x2b8) = uVar3;
  *(longlong *)(param_1 + 0x2c0) = lVar20;
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
  *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_2 + 0x2c8);
  uVar5 = *(undefined4 *)(param_2 + 0x2d8);
  uVar6 = *(undefined4 *)(param_2 + 0x2dc);
  uVar7 = *(undefined4 *)(param_2 + 0x2e0);
  uVar8 = *(undefined4 *)(param_2 + 0x2e4);
  uVar9 = *(undefined4 *)(param_2 + 0x2e8);
  uVar10 = *(undefined4 *)(param_2 + 0x2ec);
  uVar11 = *(undefined4 *)(param_2 + 0x2f0);
  uVar12 = *(undefined4 *)(param_2 + 0x2f4);
  uVar13 = *(undefined4 *)(param_2 + 0x2fc);
  uVar14 = *(undefined4 *)(param_2 + 0x300);
  uVar15 = *(undefined4 *)(param_2 + 0x304);
  *(undefined4 *)(param_1 + 0x2f8) = *(undefined4 *)(param_2 + 0x2f8);
  *(undefined4 *)(param_1 + 0x2fc) = uVar13;
  *(undefined4 *)(param_1 + 0x300) = uVar14;
  *(undefined4 *)(param_1 + 0x304) = uVar15;
  *(undefined4 *)(param_1 + 0x2e8) = uVar9;
  *(undefined4 *)(param_1 + 0x2ec) = uVar10;
  *(undefined4 *)(param_1 + 0x2f0) = uVar11;
  *(undefined4 *)(param_1 + 0x2f4) = uVar12;
  *(undefined4 *)(param_1 + 0x2d8) = uVar5;
  *(undefined4 *)(param_1 + 0x2dc) = uVar6;
  *(undefined4 *)(param_1 + 0x2e0) = uVar7;
  *(undefined4 *)(param_1 + 0x2e4) = uVar8;
  lVar20 = *(longlong *)(param_2 + 0x308);
  if (DAT_14c950c29 == '\x01') {
    if (lVar20 == 0) {
      lVar20 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar20 = *(longlong *)(param_2 + 0x308);
    }
  }
  *(longlong *)(param_1 + 0x308) = lVar20;
  puVar21 = (undefined8 *)(param_2 + 0x310);
  puVar22 = (undefined8 *)(param_1 + 0x310);
  for (lVar20 = 10; lVar20 != 0; lVar20 = lVar20 + -1) {
    *puVar22 = *puVar21;
    puVar21 = puVar21 + 1;
    puVar22 = puVar22 + 1;
  }
  *(undefined1 *)(param_1 + 0x364) = *(undefined1 *)(param_2 + 0x364);
  *(undefined4 *)(param_1 + 0x360) = *(undefined4 *)(param_2 + 0x360);
  uVar3 = *(undefined8 *)(param_2 + 0x368);
  lVar20 = *(longlong *)(param_2 + 0x370);
  if (lVar20 != 0) {
    LOCK();
    *(int *)(lVar20 + 8) = *(int *)(lVar20 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x370);
  *(undefined8 *)(param_1 + 0x368) = uVar3;
  *(longlong *)(param_1 + 0x370) = lVar20;
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
  *(undefined8 *)(param_1 + 0x378) = *(undefined8 *)(param_2 + 0x378);
  uVar5 = *(undefined4 *)(param_2 + 0x388);
  uVar6 = *(undefined4 *)(param_2 + 0x38c);
  uVar7 = *(undefined4 *)(param_2 + 0x390);
  uVar8 = *(undefined4 *)(param_2 + 0x394);
  uVar9 = *(undefined4 *)(param_2 + 0x398);
  uVar10 = *(undefined4 *)(param_2 + 0x39c);
  uVar11 = *(undefined4 *)(param_2 + 0x3a0);
  uVar12 = *(undefined4 *)(param_2 + 0x3a4);
  uVar13 = *(undefined4 *)(param_2 + 0x3ac);
  uVar14 = *(undefined4 *)(param_2 + 0x3b0);
  uVar15 = *(undefined4 *)(param_2 + 0x3b4);
  *(undefined4 *)(param_1 + 0x3a8) = *(undefined4 *)(param_2 + 0x3a8);
  *(undefined4 *)(param_1 + 0x3ac) = uVar13;
  *(undefined4 *)(param_1 + 0x3b0) = uVar14;
  *(undefined4 *)(param_1 + 0x3b4) = uVar15;
  *(undefined4 *)(param_1 + 0x398) = uVar9;
  *(undefined4 *)(param_1 + 0x39c) = uVar10;
  *(undefined4 *)(param_1 + 0x3a0) = uVar11;
  *(undefined4 *)(param_1 + 0x3a4) = uVar12;
  *(undefined4 *)(param_1 + 0x388) = uVar5;
  *(undefined4 *)(param_1 + 0x38c) = uVar6;
  *(undefined4 *)(param_1 + 0x390) = uVar7;
  *(undefined4 *)(param_1 + 0x394) = uVar8;
  lVar20 = *(longlong *)(param_2 + 0x3b8);
  if (DAT_14c950c29 == '\x01') {
    if (lVar20 == 0) {
      lVar20 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar20 = *(longlong *)(param_2 + 0x3b8);
    }
  }
  *(longlong *)(param_1 + 0x3b8) = lVar20;
  puVar21 = (undefined8 *)(param_2 + 0x3c0);
  puVar22 = (undefined8 *)(param_1 + 0x3c0);
  for (lVar20 = 10; lVar20 != 0; lVar20 = lVar20 + -1) {
    *puVar22 = *puVar21;
    puVar21 = puVar21 + 1;
    puVar22 = puVar22 + 1;
  }
  *(undefined1 *)(param_1 + 0x414) = *(undefined1 *)(param_2 + 0x414);
  *(undefined4 *)(param_1 + 0x410) = *(undefined4 *)(param_2 + 0x410);
  uVar3 = *(undefined8 *)(param_2 + 0x418);
  lVar20 = *(longlong *)(param_2 + 0x420);
  if (lVar20 != 0) {
    LOCK();
    *(int *)(lVar20 + 8) = *(int *)(lVar20 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x420);
  *(undefined8 *)(param_1 + 0x418) = uVar3;
  *(longlong *)(param_1 + 0x420) = lVar20;
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
  *(undefined8 *)(param_1 + 0x428) = *(undefined8 *)(param_2 + 0x428);
  uVar5 = *(undefined4 *)(param_2 + 0x438);
  uVar6 = *(undefined4 *)(param_2 + 0x43c);
  uVar7 = *(undefined4 *)(param_2 + 0x440);
  uVar8 = *(undefined4 *)(param_2 + 0x444);
  uVar9 = *(undefined4 *)(param_2 + 0x448);
  uVar10 = *(undefined4 *)(param_2 + 0x44c);
  uVar11 = *(undefined4 *)(param_2 + 0x450);
  uVar12 = *(undefined4 *)(param_2 + 0x454);
  uVar13 = *(undefined4 *)(param_2 + 0x45c);
  uVar14 = *(undefined4 *)(param_2 + 0x460);
  uVar15 = *(undefined4 *)(param_2 + 0x464);
  *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_2 + 0x458);
  *(undefined4 *)(param_1 + 0x45c) = uVar13;
  *(undefined4 *)(param_1 + 0x460) = uVar14;
  *(undefined4 *)(param_1 + 0x464) = uVar15;
  *(undefined4 *)(param_1 + 0x448) = uVar9;
  *(undefined4 *)(param_1 + 0x44c) = uVar10;
  *(undefined4 *)(param_1 + 0x450) = uVar11;
  *(undefined4 *)(param_1 + 0x454) = uVar12;
  *(undefined4 *)(param_1 + 0x438) = uVar5;
  *(undefined4 *)(param_1 + 0x43c) = uVar6;
  *(undefined4 *)(param_1 + 0x440) = uVar7;
  *(undefined4 *)(param_1 + 0x444) = uVar8;
  lVar20 = *(longlong *)(param_2 + 0x468);
  if (DAT_14c950c29 == '\x01') {
    if (lVar20 == 0) {
      lVar20 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar20 = *(longlong *)(param_2 + 0x468);
    }
  }
  *(longlong *)(param_1 + 0x468) = lVar20;
  puVar21 = (undefined8 *)(param_2 + 0x470);
  puVar22 = (undefined8 *)(param_1 + 0x470);
  for (lVar20 = 10; lVar20 != 0; lVar20 = lVar20 + -1) {
    *puVar22 = *puVar21;
    puVar21 = puVar21 + 1;
    puVar22 = puVar22 + 1;
  }
  *(undefined1 *)(param_1 + 0x4c4) = *(undefined1 *)(param_2 + 0x4c4);
  *(undefined4 *)(param_1 + 0x4c0) = *(undefined4 *)(param_2 + 0x4c0);
  uVar3 = *(undefined8 *)(param_2 + 0x4c8);
  lVar20 = *(longlong *)(param_2 + 0x4d0);
  if (lVar20 != 0) {
    LOCK();
    *(int *)(lVar20 + 8) = *(int *)(lVar20 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x4d0);
  *(undefined8 *)(param_1 + 0x4c8) = uVar3;
  *(longlong *)(param_1 + 0x4d0) = lVar20;
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
  *(undefined8 *)(param_1 + 0x4d8) = *(undefined8 *)(param_2 + 0x4d8);
  uVar3 = *(undefined8 *)(param_2 + 0x4e8);
  uVar16 = *(undefined8 *)(param_2 + 0x4f0);
  uVar17 = *(undefined8 *)(param_2 + 0x4f8);
  uVar18 = *(undefined8 *)(param_2 + 0x500);
  uVar19 = *(undefined8 *)(param_2 + 0x508);
  *(undefined8 *)(param_1 + 0x4e0) = *(undefined8 *)(param_2 + 0x4e0);
  *(undefined8 *)(param_1 + 0x4e8) = uVar3;
  *(undefined8 *)(param_1 + 0x4f0) = uVar16;
  *(undefined8 *)(param_1 + 0x4f8) = uVar17;
  *(undefined8 *)(param_1 + 0x500) = uVar18;
  *(undefined8 *)(param_1 + 0x508) = uVar19;
  *(undefined4 *)(param_1 + 0x510) = *(undefined4 *)(param_2 + 0x510);
  return param_1;
}



// FUNCTION 14134d824 FUN_14134d824 body=3499 status=ok
// SIG undefined FUN_14134d824(void)

void FUN_14134d824(longlong param_1,undefined8 param_2,undefined2 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  bool bVar17;
  undefined1 auStack_2a8 [32];
  undefined2 *local_288;
  longlong *local_280;
  longlong *local_278;
  ulonglong local_270;
  longlong local_268;
  undefined8 *local_260;
  longlong local_258;
  longlong local_250;
  int local_244;
  longlong local_240;
  longlong local_238;
  longlong local_230;
  int local_224;
  undefined2 *local_220;
  undefined6 *local_218;
  undefined2 local_20c;
  undefined2 local_20a;
  undefined2 local_208;
  undefined1 local_203;
  undefined4 local_200;
  undefined1 local_1fc;
  undefined8 *local_1f8;
  undefined4 local_1f0;
  undefined8 *local_1e8;
  longlong *local_1e0;
  int local_1d8;
  longlong local_1d0;
  longlong *local_1c8;
  int local_1c0;
  longlong local_1b8;
  undefined1 *local_1b0;
  longlong local_1a8;
  int local_1a0;
  longlong local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined2 *local_16c;
  undefined4 local_164;
  undefined1 local_160;
  longlong local_158 [2];
  longlong local_148;
  undefined1 local_133;
  undefined2 local_132;
  undefined2 *local_130;
  undefined2 **local_128;
  undefined8 local_120;
  undefined4 local_118;
  uint local_114;
  undefined1 local_110;
  undefined1 local_108 [80];
  undefined8 *local_b8;
  undefined2 local_58;
  undefined6 uStack_56;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x5d8);
  plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x5e0);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  cVar3 = *(char *)(lVar7 + 0x7c);
  if (cVar3 == '\x04') {
    lVar15 = FUN_14009d2a0();
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x548);
    local_20c = *(undefined2 *)(lVar15 + 0x4e);
    local_20a = *(undefined2 *)(lVar15 + 0x54);
    local_208 = *(undefined2 *)(lVar15 + 0xfe);
    local_203 = 0;
    local_200 = 0x6ff;
    local_1fc = 0;
    local_58 = *(undefined2 *)(lVar15 + 0x11a);
    local_220 = &local_58;
    local_218 = &uStack_56;
    FUN_14134e5d0(&local_20c,&local_120);
    if ((((short)local_120 != -1) && (local_120._2_2_ != -1)) && (local_120._4_2_ != -1)) {
      lVar8 = *(longlong *)(param_1 + 0x28);
      local_1a8 = lVar8 + 0x28;
      local_1b0 = local_108;
      cVar3 = *(char *)(lVar8 + 0x298);
      if (cVar3 == '\0') {
        *(int *)(lVar8 + 0x28c) = *(int *)(lVar8 + 0x28c) + 1;
      }
      else {
        LOCK();
        *(int *)(lVar8 + 0x28c) = *(int *)(lVar8 + 0x28c) + 1;
        UNLOCK();
      }
      local_1a0 = FUN_1403b8464(&local_1b0,0);
      iVar9 = *(int *)(lVar8 + 0x38);
      for (; local_1a0 != iVar9; local_1a0 = FUN_1403b8464(&local_1b0,local_1a0 + 1)) {
        local_268 = local_1a8;
        local_230 = (longlong)local_1a0;
        lVar8 = *(longlong *)(*(longlong *)(local_1a8 + 0x60) + local_230 * 8);
        if (cVar3 == '\0') {
          *(undefined4 *)(lVar8 + 0x14) = 0;
          local_240 = lVar8;
        }
        else {
          local_240 = 0;
        }
        if (*(ushort *)(lVar8 + 0xc) != 0) {
          plVar10 = *(longlong **)(lVar8 + 0x28);
          lVar11 = (ulonglong)*(ushort *)(lVar8 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar10 + 0x1e) == local_120._4_2_) goto LAB_14134dd28;
            plVar10 = plVar10 + 4;
            lVar11 = lVar11 + -0x20;
          } while (lVar11 != 0);
        }
        plVar10 = (longlong *)0x0;
LAB_14134dd28:
        local_244 = *(int *)(lVar8 + 0x14);
        local_270 = lVar8;
        if (local_244 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar10 + 1));
        }
        LOCK();
        *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
        UNLOCK();
        local_258 = *plVar10;
        if (*(ushort *)(lVar8 + 0xc) != 0) {
          plVar13 = *(longlong **)(lVar8 + 0x28);
          lVar8 = (ulonglong)*(ushort *)(lVar8 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar13 + 0x1e) == local_120._2_2_) goto LAB_14134dd82;
            plVar13 = plVar13 + 4;
            lVar8 = lVar8 + -0x20;
          } while (lVar8 != 0);
        }
        plVar13 = (longlong *)0x0;
LAB_14134dd82:
        local_224 = *(int *)(local_270 + 0x14);
        if (local_224 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar13 + 1));
        }
        LOCK();
        *(int *)(plVar13 + 3) = (int)plVar13[3] + 1;
        UNLOCK();
        local_238 = *plVar13;
        if (*(ushort *)(local_270 + 0xc) != 0) {
          local_260 = *(undefined8 **)(local_270 + 0x28);
          lVar8 = (ulonglong)*(ushort *)(local_270 + 0xc) << 5;
          do {
            if (*(short *)((longlong)local_260 + 0x1e) == (short)local_120) goto LAB_14134dde0;
            local_260 = local_260 + 4;
            lVar8 = lVar8 + -0x20;
          } while (lVar8 != 0);
        }
        local_260 = (undefined8 *)0x0;
LAB_14134dde0:
        piVar1 = (int *)(local_270 + 0x14);
        local_270 = CONCAT44(local_270._4_4_,*piVar1);
        if (*piVar1 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(local_260 + 1));
        }
        LOCK();
        *(int *)(local_260 + 3) = *(int *)(local_260 + 3) + 1;
        UNLOCK();
        local_250 = *local_260;
        local_1f8 = local_260;
        local_1f0 = (undefined4)local_270;
        local_1d8 = local_224;
        local_1d0 = local_238;
        local_1c0 = local_244;
        local_1b8 = local_258;
        local_270 = (ulonglong)
                    *(ushort *)
                     (*(longlong *)(*(longlong *)(local_268 + 0x60) + local_230 * 8) + 0xe);
        lVar11 = local_230 * 0x28 + *(longlong *)(local_268 + 8);
        local_1e8 = (undefined8 *)local_250;
        local_1e0 = plVar13;
        local_1c8 = plVar10;
        lVar8 = FUN_14009d2a0();
        uVar4 = *(ushort *)(lVar8 + 0x10a);
        if ((uVar4 == 0xffff) ||
           (uVar5 = *(uint *)(lVar11 + 0x20), uVar5 == uVar4 || (int)uVar5 < (int)(uint)uVar4)) {
          local_268._0_4_ = 0;
        }
        else {
          local_268._0_4_ =
               (uint)CONCAT11((char)(uVar4 >> 8),
                              (*(uint *)(lVar11 + (ulonglong)(uVar4 >> 5) * 4) >> (uVar4 & 0x1f) & 1
                              ) != 0);
        }
        if (local_270 != 0) {
          local_270 = (ulonglong)(uint)((int)local_270 << 2);
          uVar14 = 0;
          do {
            lVar8 = *(longlong *)(lVar7 + 8);
            local_260 = (undefined8 *)((ulonglong)*(ushort *)(local_250 + uVar14) * 0x128);
            FUN_14087ad3e((longlong)local_260 + lVar8 + 0x90,local_158);
            lVar11 = *(longlong *)(local_258 + uVar14 * 8);
            if (DAT_14c950c29 == '\x01') {
              if (lVar11 == 0) {
                lVar11 = 0;
              }
              else {
                FUN_1456cec3c();
                lVar11 = *(longlong *)(local_258 + uVar14 * 8);
              }
            }
            puVar16 = local_260;
            local_190 = *(undefined8 *)(local_258 + 8 + uVar14 * 8);
            puVar2 = (undefined4 *)(local_258 + 0x10 + uVar14 * 8);
            local_188 = *puVar2;
            uStack_184 = puVar2[1];
            uStack_180 = puVar2[2];
            uStack_17c = puVar2[3];
            local_164 = 0;
            local_132 = CONCAT11(local_132._1_1_,0xf);
            local_288 = &local_132;
            local_198 = lVar11;
            FUN_140cdcd7c(local_158,&local_130,*(undefined8 *)(local_238 + uVar14 * 2),
                          (longlong)local_260 + lVar8 + 0xb0);
            local_16c = local_130;
            if ((char)local_128 == '\0') {
              local_16c = (undefined2 *)0x0;
            }
            local_178 = *(undefined4 *)((longlong)puVar16 + lVar8 + 0x122);
            local_174 = *(undefined4 *)((longlong)puVar16 + lVar8 + 0x110);
            local_160 = (undefined1)local_268;
            FUN_140f908d2(param_1,local_178,&local_198);
            if (local_148 != 0) {
              FUN_1400020a8();
            }
            uVar14 = uVar14 + 4;
          } while (local_270 != uVar14);
        }
        FUN_145916206(&local_1f8);
        if (local_240 != 0) {
          *(undefined4 *)(local_240 + 0x14) = 1;
        }
      }
      if (local_1b0 != (undefined1 *)0x0) {
        if (*(char *)(local_1a8 + 0x270) == '\0') {
          *(int *)(local_1a8 + 0x264) = *(int *)(local_1a8 + 0x264) + -1;
        }
        else {
          LOCK();
          *(int *)(local_1a8 + 0x264) = *(int *)(local_1a8 + 0x264) + -1;
          UNLOCK();
        }
      }
    }
    if (local_b8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    local_20c = *(undefined2 *)(lVar15 + 0x4e);
    local_20a = *(undefined2 *)(lVar15 + 0x54);
    local_208 = *(undefined2 *)(lVar15 + 0xfe);
    local_203 = 0;
    local_200 = 0x6ff;
    local_1fc = 0;
    local_132 = *(undefined2 *)(lVar15 + 0x12e);
    local_130 = &local_132;
    local_128 = &local_130;
    FUN_14134e5d0(&local_20c,&local_120);
    if ((((short)local_120 != -1) && (local_120._2_2_ != -1)) && (local_120._4_2_ != -1)) {
      lVar15 = *(longlong *)(param_1 + 0x28);
      local_1a8 = lVar15 + 0x28;
      local_1b0 = local_108;
      cVar3 = *(char *)(lVar15 + 0x298);
      if (cVar3 == '\0') {
        *(int *)(lVar15 + 0x28c) = *(int *)(lVar15 + 0x28c) + 1;
      }
      else {
        LOCK();
        *(int *)(lVar15 + 0x28c) = *(int *)(lVar15 + 0x28c) + 1;
        UNLOCK();
      }
      local_1a0 = FUN_1403b8464(&local_1b0,0);
      iVar9 = *(int *)(lVar15 + 0x38);
      for (; local_1a0 != iVar9; local_1a0 = FUN_1403b8464(&local_1b0,local_1a0 + 1)) {
        local_250 = local_1a8;
        local_240 = (longlong)local_1a0;
        lVar15 = *(longlong *)(*(longlong *)(local_1a8 + 0x60) + local_240 * 8);
        if (cVar3 == '\0') {
          *(undefined4 *)(lVar15 + 0x14) = 0;
          local_268 = lVar15;
        }
        else {
          local_268 = 0;
        }
        if (*(ushort *)(lVar15 + 0xc) != 0) {
          plVar10 = *(longlong **)(lVar15 + 0x28);
          lVar8 = (ulonglong)*(ushort *)(lVar15 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar10 + 0x1e) == local_120._4_2_) goto LAB_14134e0b4;
            plVar10 = plVar10 + 4;
            lVar8 = lVar8 + -0x20;
          } while (lVar8 != 0);
        }
        plVar10 = (longlong *)0x0;
LAB_14134e0b4:
        local_230 = CONCAT44(local_230._4_4_,*(int *)(lVar15 + 0x14));
        local_270 = lVar15;
        if (*(int *)(lVar15 + 0x14) == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar10 + 1));
        }
        uVar14 = local_270;
        LOCK();
        *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
        UNLOCK();
        local_258 = *plVar10;
        if (*(ushort *)(lVar15 + 0xc) != 0) {
          plVar13 = *(longlong **)(lVar15 + 0x28);
          lVar15 = (ulonglong)*(ushort *)(lVar15 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar13 + 0x1e) == local_120._2_2_) goto LAB_14134e10b;
            plVar13 = plVar13 + 4;
            lVar15 = lVar15 + -0x20;
          } while (lVar15 != 0);
        }
        plVar13 = (longlong *)0x0;
LAB_14134e10b:
        local_244 = *(int *)(local_270 + 0x14);
        if (local_244 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar13 + 1));
        }
        LOCK();
        *(int *)(plVar13 + 3) = (int)plVar13[3] + 1;
        UNLOCK();
        local_238 = *plVar13;
        uVar4 = *(ushort *)(uVar14 + 0xc);
        if (uVar4 != 0) {
          puVar16 = *(undefined8 **)(uVar14 + 0x28);
          lVar15 = (ulonglong)uVar4 << 5;
          do {
            if (*(short *)((longlong)puVar16 + 0x1e) == (short)local_120) goto LAB_14134e15f;
            puVar16 = puVar16 + 4;
            lVar15 = lVar15 + -0x20;
          } while (lVar15 != 0);
        }
        puVar16 = (undefined8 *)0x0;
LAB_14134e15f:
        piVar1 = (int *)(local_270 + 0x14);
        local_270 = CONCAT44(local_270._4_4_,*piVar1);
        if (*piVar1 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(puVar16 + 1));
        }
        LOCK();
        *(int *)(puVar16 + 3) = *(int *)(puVar16 + 3) + 1;
        UNLOCK();
        local_260 = (undefined8 *)*puVar16;
        local_1f0 = (undefined4)local_270;
        local_1d8 = local_244;
        local_1d0 = local_238;
        local_1c0 = (int)local_230;
        local_1b8 = local_258;
        local_270 = (ulonglong)
                    *(ushort *)
                     (*(longlong *)(*(longlong *)(local_250 + 0x60) + local_240 * 8) + 0xe);
        lVar8 = local_240 * 0x28 + *(longlong *)(local_250 + 8);
        local_1f8 = puVar16;
        local_1e8 = local_260;
        local_1e0 = plVar13;
        local_1c8 = plVar10;
        lVar15 = FUN_14009d2a0();
        uVar4 = *(ushort *)(lVar15 + 0x10a);
        if ((uVar4 == 0xffff) ||
           (uVar5 = *(uint *)(lVar8 + 0x20), uVar5 == uVar4 || (int)uVar5 < (int)(uint)uVar4)) {
          local_250._0_4_ = 0;
        }
        else {
          local_250._0_4_ =
               (uint)CONCAT11((char)(uVar4 >> 8),
                              (*(uint *)(lVar8 + (ulonglong)(uVar4 >> 5) * 4) >> (uVar4 & 0x1f) & 1)
                              != 0);
        }
        if (local_270 != 0) {
          local_270 = (ulonglong)(uint)((int)local_270 << 2);
          uVar14 = 0;
          do {
            lVar15 = *(longlong *)(lVar7 + 8);
            lVar11 = (ulonglong)*(ushort *)((longlong)local_260 + uVar14) * 0x128;
            FUN_14087ad3e(lVar15 + lVar11 + 0x90,local_158);
            lVar8 = *(longlong *)(local_258 + uVar14 * 8);
            if (DAT_14c950c29 == '\x01') {
              if (lVar8 == 0) {
                lVar8 = 0;
              }
              else {
                FUN_1456cec3c();
                lVar8 = *(longlong *)(local_258 + uVar14 * 8);
              }
            }
            lVar15 = lVar15 + lVar11;
            local_190 = *(undefined8 *)(local_258 + 8 + uVar14 * 8);
            puVar2 = (undefined4 *)(local_258 + 0x10 + uVar14 * 8);
            local_188 = *puVar2;
            uStack_184 = puVar2[1];
            uStack_180 = puVar2[2];
            uStack_17c = puVar2[3];
            local_164 = 2;
            local_133 = 0xf;
            local_288 = (undefined2 *)&local_133;
            local_198 = lVar8;
            FUN_140cdcd7c(local_158,&local_58,*(undefined8 *)(local_238 + uVar14 * 2),lVar15 + 0xb0)
            ;
            if (local_50 == '\0') {
              local_16c = (undefined2 *)0x0;
            }
            else {
              local_16c = (undefined2 *)CONCAT62(uStack_56,local_58);
            }
            local_178 = *(undefined4 *)(lVar15 + 0x122);
            local_174 = *(undefined4 *)(lVar15 + 0x110);
            local_160 = (undefined1)local_250;
            FUN_140f908d2(param_1,local_178,&local_198);
            if (local_148 != 0) {
              FUN_1400020a8();
            }
            uVar14 = uVar14 + 4;
          } while (local_270 != uVar14);
        }
        FUN_145916206(&local_1f8);
        if (local_268 != 0) {
          *(undefined4 *)(local_268 + 0x14) = 1;
        }
      }
      if (local_1b0 != (undefined1 *)0x0) {
        if (*(char *)(local_1a8 + 0x270) == '\0') {
          *(int *)(local_1a8 + 0x264) = *(int *)(local_1a8 + 0x264) + -1;
        }
        else {
          LOCK();
          *(int *)(local_1a8 + 0x264) = *(int *)(local_1a8 + 0x264) + -1;
          UNLOCK();
        }
      }
    }
  }
  else {
    if (cVar3 == '\x10') {
      lVar7 = FUN_14009d2a0();
      local_120 = (undefined8 *)
                  CONCAT26(*(undefined2 *)(lVar7 + 0x100),
                           CONCAT24(*(undefined2 *)(lVar7 + 0x54),
                                    CONCAT22(*(undefined2 *)(lVar7 + 0xfe),
                                             *(undefined2 *)(lVar7 + 0x4e))));
      local_110 = 0;
      lVar7 = *(longlong *)(param_1 + 0x28);
      local_114 = *(uint *)(lVar7 + 0x294);
      local_118._0_2_ = CONCAT11((local_114 & 0xfffffeff) == 1,(undefined1)local_118);
      local_198 = *(longlong *)(lVar7 + 0x548);
      local_278 = &local_198;
      local_280 = local_158;
      local_288 = param_3;
      local_158[0] = param_1;
      FUN_1432d5e5a(&local_120,&local_1f8,lVar7 + 0x28,param_2);
      if (local_1f8 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_1f8 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_1f8)(local_1f8,1);
        }
      }
      goto LAB_14134d88b;
    }
    if (*(int *)(param_1 + 0x48) == *(int *)(param_1 + 0x74)) goto LAB_14134d88b;
    local_120 = (undefined8 *)0x0;
    local_118 = 0;
    FUN_1446efa72(&local_120,0,3,0x10);
    puVar16 = local_120;
    local_118 = 3;
    *local_120 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar15 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar15 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar15;
    local_120[2] = lVar8;
    *local_120 = &PTR_FUN_14a475830;
    local_120[3] = 0;
    iVar9 = 0;
    if (param_1 != 0) {
      uVar5 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_120 + 3) = uVar5;
      if ((int)uVar5 < DAT_14c9647dc) {
        lVar15 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
      }
      else {
        lVar15 = 0;
      }
      iVar9 = *(int *)(lVar15 + 0x10);
      if (*(int *)(lVar15 + 0x10) == 0) {
        LOCK();
        iVar9 = DAT_14c964868 + 1;
        UNLOCK();
        iVar12 = DAT_14c964868 + 1;
        bVar17 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar9;
        if (bVar17) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar12);
        }
        LOCK();
        iVar9 = *(int *)(lVar15 + 0x10);
        bVar17 = iVar9 == 0;
        if (bVar17) {
          *(int *)(lVar15 + 0x10) = iVar12;
          iVar9 = 0;
        }
        UNLOCK();
        if (bVar17) {
          iVar9 = iVar12;
        }
      }
    }
    *(int *)((longlong)puVar16 + 0x1c) = iVar9;
    puVar16[4] = FUN_14128b5d4;
    FUN_1448b6402(lVar7 + 0x58,&local_1f8,&local_120);
    local_b8 = local_120;
    if (local_118 != 0) {
      if (local_120 == (undefined8 *)0x0) goto LAB_14134d88b;
      (**(code **)*local_120)(local_120,0);
      FUN_1446efa72(&local_120,0,0,0x10);
      local_118 = 0;
      local_b8 = local_120;
    }
  }
  if (local_b8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14134d88b:
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar6 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14134e5d0 FUN_14134e5d0 body=613 status=ok
// SIG undefined FUN_14134e5d0(void)

ushort * FUN_14134e5d0(undefined8 *param_1,ushort *param_2,undefined4 *param_3)

{
  ushort *puVar1;
  ushort uVar2;
  undefined8 uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = param_1[1];
  *(undefined8 *)param_2 = *param_1;
  *(undefined8 *)(param_2 + 4) = uVar3;
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 2);
  puVar1 = param_2 + 0xc;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0x100;
  param_2[0x1f] = 0;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  param_2[0x32] = 0x100;
  param_2[0x33] = 0;
  param_2[0x4c] = 0;
  param_2[0x4d] = 0;
  param_2[0x4e] = 0x100;
  param_2[0x4f] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x60] = 0;
  param_2[0x61] = 0;
  param_2[0x62] = 0x100;
  param_2[99] = 0;
  uVar2 = *param_2;
  iVar7 = uVar2 + 1;
  iVar5 = iVar7;
  if (0xff < uVar2) {
    FUN_14497ddce(puVar1,0);
    iVar5 = *(int *)(param_2 + 0x1c) + iVar7;
  }
  iVar8 = iVar5 + 0x1f;
  if (-1 < iVar5) {
    iVar8 = iVar5;
  }
  *(int *)(param_2 + 0x1c) = iVar5;
  if (iVar5 % 0x20 != 0) {
    bVar4 = -(char)(iVar5 % 0x20);
    *(uint *)(puVar1 + (longlong)(iVar8 >> 5) * 2) =
         (uint)(*(int *)(puVar1 + (longlong)(iVar8 >> 5) * 2) << (bVar4 & 0x1f)) >> (bVar4 & 0x1f);
  }
  FUN_1447c45ca(puVar1,0,iVar7,0);
  *(uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 2 + 0xc) =
       *(uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 2 + 0xc) | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = param_2[1];
  iVar7 = uVar2 + 1;
  iVar5 = *(int *)(param_2 + 0x1c);
  iVar8 = iVar7 - iVar5;
  if (iVar8 != 0 && iVar5 <= iVar7) {
    if (iVar5 == 0) {
LAB_14134e6c6:
      if (*(int *)(param_2 + 0x1e) <= (int)(uint)uVar2) {
        param_2[0x1e] = 0x100;
        param_2[0x1f] = 0;
        FUN_14497ddce(puVar1,iVar5);
        iVar7 = *(int *)(param_2 + 0x1c) + iVar8;
      }
      iVar6 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar6 = iVar7;
      }
      *(int *)(param_2 + 0x1c) = iVar7;
      if (iVar7 % 0x20 != 0) {
        bVar4 = -(char)(iVar7 % 0x20);
        *(uint *)(puVar1 + (longlong)(iVar6 >> 5) * 2) =
             (uint)(*(int *)(puVar1 + (longlong)(iVar6 >> 5) * 2) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    else {
      iVar6 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar6 = iVar5 + -1;
      }
      if (iVar6 >> 5 != (uint)(uVar2 >> 5)) goto LAB_14134e6c6;
      *(int *)(param_2 + 0x1c) = iVar7;
    }
    FUN_1447c45ca(puVar1,iVar5,iVar8,0);
  }
  *(uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 2 + 0xc) =
       *(uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 2 + 0xc) | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = param_2[2];
  iVar7 = uVar2 + 1;
  iVar5 = *(int *)(param_2 + 0x1c);
  iVar8 = iVar7 - iVar5;
  if (iVar8 == 0 || iVar7 < iVar5) goto LAB_14134e78c;
  if (iVar5 == 0) {
LAB_14134e74c:
    if (*(int *)(param_2 + 0x1e) <= (int)(uint)uVar2) {
      param_2[0x1e] = 0x100;
      param_2[0x1f] = 0;
      FUN_14497ddce(puVar1,iVar5);
      iVar7 = *(int *)(param_2 + 0x1c) + iVar8;
    }
    iVar6 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar6 = iVar7;
    }
    *(int *)(param_2 + 0x1c) = iVar7;
    if (iVar7 % 0x20 != 0) {
      bVar4 = -(char)(iVar7 % 0x20);
      *(uint *)(puVar1 + (longlong)(iVar6 >> 5) * 2) =
           (uint)(*(int *)(puVar1 + (longlong)(iVar6 >> 5) * 2) << (bVar4 & 0x1f)) >> (bVar4 & 0x1f)
      ;
    }
  }
  else {
    iVar6 = iVar5 + 0x1e;
    if (-1 < iVar5 + -1) {
      iVar6 = iVar5 + -1;
    }
    if (iVar6 >> 5 != (uint)(uVar2 >> 5)) goto LAB_14134e74c;
    *(int *)(param_2 + 0x1c) = iVar7;
  }
  FUN_1447c45ca(puVar1,iVar5,iVar8,0);
LAB_14134e78c:
  *(uint *)(puVar1 + (ulonglong)(uVar2 >> 5) * 2) =
       *(uint *)(puVar1 + (ulonglong)(uVar2 >> 5) * 2) | 1 << ((byte)uVar2 & 0x1f);
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  FUN_1403b5126(puVar1,&local_58,2);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14134e836 FUN_14134e836 body=197 status=ok
// SIG undefined FUN_14134e836(void)

int FUN_14134e836(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_14134e87c:
      lVar10 = (longlong)iVar1 * 0x20;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_14134e8d4;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_14134e8d4;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_14134e8ea;
    }
  }
  return -1;
LAB_14134e8d4:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_14134e8ea:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_14134e87c;
}



// FUNCTION 14134e904 FUN_14134e904 body=513 status=ok
// SIG undefined FUN_14134e904(void)

void FUN_14134e904(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_88 [40];
  code *local_60;
  undefined4 local_58;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar1 = FUN_1403ae288(param_1 + 0x70);
  if (cVar1 != '\0') {
    lVar2 = FUN_14008e0ae(param_1 + 0x70);
    switch(*(undefined1 *)(*(longlong *)(param_1 + 0x30) + 0x11)) {
    case 0:
      local_60 = FUN_140df4bfa;
      local_58 = 0;
      FUN_14134eb06(local_50,param_1);
      FUN_14036a282(lVar2 + 0x168,&local_60,local_50);
      FUN_1449db362(local_50);
      lVar2 = lVar2 + 0x180;
      break;
    case 1:
      local_60 = FUN_140df4bfa;
      local_58 = 0;
      FUN_14134eb06(local_50,param_1);
      FUN_14036a282(lVar2 + 0x270,&local_60,local_50);
      FUN_1449db362(local_50);
      lVar2 = lVar2 + 0x288;
      break;
    case 2:
      local_60 = FUN_140df4bfa;
      local_58 = 0;
      FUN_14134eb06(local_50,param_1);
      FUN_14036a282(lVar2 + 0x198,&local_60,local_50);
      FUN_1449db362(local_50);
      lVar2 = lVar2 + 0x1b0;
      break;
    case 3:
      local_60 = FUN_140df4bfa;
      local_58 = 0;
      FUN_14134eb06(local_50,param_1);
      FUN_14036a282(lVar2 + 0x240,&local_60,local_50);
      FUN_1449db362(local_50);
      lVar2 = lVar2 + 600;
      break;
    default:
      goto switchD_14134e963_default;
    }
    local_60 = FUN_140df4bfa;
    local_58 = 0;
    FUN_14134eb06(local_50,param_1,&local_60);
    FUN_14036a282(lVar2,&local_60,local_50);
    FUN_1449db362(local_50);
  }
switchD_14134e963_default:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14134eb06 FUN_14134eb06 body=428 status=ok
// SIG undefined FUN_14134eb06(void)

longlong * FUN_14134eb06(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_14134ebe6:
    *puVar5 = &PTR_LAB_14b3f7890;
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
    *puVar5 = &PTR_FUN_14b4296a0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14134ebe6;
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
    *puVar5 = &PTR_LAB_14b3f7890;
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
    *puVar5 = &PTR_FUN_14b4296a0;
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



// FUNCTION 14134ecb2 FUN_14134ecb2 body=743 status=ok
// SIG undefined FUN_14134ecb2(void)

bool FUN_14134ecb2(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  undefined4 *puVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined1 auStack_e8 [40];
  char local_c0 [16];
  longlong *local_b0;
  int local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  ushort local_78;
  byte local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar2 = *(longlong *)(param_1 + 0x14f0);
  if (lVar2 != 0) {
    uVar6 = FUN_14134ef9a(param_1 + -0x510);
    if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)(*(longlong *)(param_1 + 0x14f0) + 0xf48))) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x14f0) + 0xf40);
      local_c0[0] = '\0';
      local_98 = 0;
      FUN_1456bb102(local_c0,param_1 + -0x510);
      puVar13 = &local_90;
      FUN_1448729ea(lVar3 + (ulonglong)uVar6 * 0x68 + 0x18,puVar13,local_c0);
      if (local_70 == 3) {
        uVar6 = 3;
        uVar14 = local_90;
      }
      else {
        puVar9 = &local_68;
        FUN_1400b56fe(puVar9,&local_90,3);
        uVar14 = 0;
        if (local_48 != 0) {
          uVar14 = local_68;
        }
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
        if (pcVar4 != (code *)0x0) {
          if (0x18 < local_50) {
            puVar9 = (undefined4 *)CONCAT44(uStack_64,local_68);
          }
          (*pcVar4)(puVar9);
        }
        if (0x18 < local_50) {
          FUN_1400020a8(CONCAT44(uStack_64,local_68));
        }
        uVar6 = (uint)local_70;
      }
      *(undefined8 *)(param_3 + 4) = 0;
      *(undefined8 *)(param_3 + 0xc) = 0;
      *(undefined4 *)(param_3 + 0x14) = 0x3f800000;
      *(undefined4 *)(param_3 + 0x18) = uVar14;
      *(undefined4 *)(param_3 + 0x20) = uVar14;
      *(undefined1 *)(param_3 + 0x1c) = 1;
      *(undefined1 *)(param_3 + 0x24) = 0;
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar6 * 0x120));
      if (pcVar4 != (code *)0x0) {
        if (0x18 < local_78) {
          puVar13 = (undefined4 *)CONCAT44(uStack_8c,local_90);
        }
        (*pcVar4)(puVar13);
      }
      if (0x18 < local_78) {
        FUN_1400020a8(CONCAT44(uStack_8c,local_90));
      }
      lVar3 = DAT_14c9a3da0;
      if ((longlong)local_98 != 0) {
        lVar11 = (longlong)local_98 + -1;
        lVar12 = lVar11 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar12),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar12));
        if (*(longlong *)(lVar3 + lVar12) != 0) {
          FUN_1400020a8();
        }
        lVar3 = DAT_14c9a3da0;
        iVar10 = (int)lVar11;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar10;
        }
        *(undefined4 *)(lVar3 + lVar12) = 0xffffffff;
        iVar7 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar7 = DAT_14c9a3dd0;
        }
        *(int *)(lVar3 + 4 + lVar12) = iVar7;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar8 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar8 = DAT_14c9a3dc0;
        }
        iVar7 = iVar10 + 0x1f;
        if (-1 < iVar10) {
          iVar7 = iVar10;
        }
        bVar5 = (byte)lVar11 & 0x1f;
        DAT_14c9a3dd0 = iVar10;
        *(uint *)(puVar8 + (longlong)(iVar7 >> 5) * 4) =
             *(uint *)(puVar8 + (longlong)(iVar7 >> 5) * 4) &
             (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
        local_98 = 0;
      }
      if ((local_c0[0] == '\x03') && (local_b0 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_b0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_b0 + 0x10))();
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14134ef9a FUN_14134ef9a body=322 status=ok
// SIG undefined FUN_14134ef9a(void)

undefined4 FUN_14134ef9a(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x5d0))();
  uVar3 = 0xffffffff;
  if (plVar2 == (longlong *)0x0) goto LAB_14134f01b;
  if (DAT_14cbadd90 == 0) {
    local_40 = &local_28;
    local_28 = FUN_141030f22;
    local_30 = FUN_14081d0ea;
    local_38 = &LAB_1459f2e4c;
    local_48 = &LAB_148c39de3;
    local_50 = &LAB_1457a9eb2;
    local_58 = &DAT_149e063b2;
    local_60 = 0;
    local_68 = 0x10000004;
    local_70 = 0x10;
    local_78 = 0x3de0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
  }
  if ((*(int *)(plVar2[2] + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
     (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8)
      != DAT_14cbadd90 + 0x30)) goto LAB_14134f01b;
  if ((*(byte *)(plVar2 + 0x84) & 2) == 0) {
LAB_14134f00c:
    if ((char)param_1[0x2f] != '\x03') goto LAB_14134f01b;
  }
  else {
    cVar1 = (**(code **)(*plVar2 + 0x6c8))(plVar2);
    if (cVar1 == '\0') goto LAB_14134f00c;
  }
  uVar3 = (undefined4)plVar2[0x732];
LAB_14134f01b:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14134f0de FUN_14134f0de body=349 status=ok
// SIG undefined FUN_14134f0de(void)

void FUN_14134f0de(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_68 [32];
  longlong *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = FUN_144a7be76();
  if (lVar3 != 0) {
    lVar4 = FUN_144a2f878();
    if ((((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) &&
        (plVar1 = *(longlong **)(lVar3 + 0x3c0), plVar1 != (longlong *)0x0)) &&
       (((*(byte *)(plVar1 + 0x84) & 2) == 0 ||
        (cVar2 = (**(code **)(*plVar1 + 0x6c8))(), cVar2 == '\0')))) {
      lVar4 = lVar3 + 0x75e8;
      FUN_140efa230(lVar4,*(longlong *)(param_1 + 0x48) + 0xa8);
      uVar5 = FUN_140f7e331();
      FUN_14111d472(uVar5,&local_48);
      if ((longlong)local_40 != 0) {
        plVar1 = local_48 + local_40;
        plVar8 = local_48;
        do {
          lVar6 = (longlong)*(int *)(*plVar8 + 0x1b8);
          if (lVar6 != 0) {
            lVar7 = *(longlong *)(*plVar8 + 0x1b0);
            lVar6 = lVar6 * 0x28;
            do {
              uVar5 = FUN_1457125b0(lVar7);
              FUN_1470d7856(lVar4,uVar5);
              lVar7 = lVar7 + 0x28;
              lVar6 = lVar6 + -0x28;
            } while (lVar6 != 0);
          }
          plVar8 = plVar8 + 1;
        } while (plVar8 != plVar1);
      }
      FUN_14036b79c(lVar3 + 0x7718,lVar3);
      FUN_140a87c14(lVar4,0,0);
      if (local_48 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14134f23c FUN_14134f23c body=2691 status=ok
// SIG undefined FUN_14134f23c(void)

void FUN_14134f23c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  byte *pbVar3;
  PSRWLOCK pRVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ushort *puVar9;
  char **ppcVar10;
  char cVar11;
  byte bVar12;
  undefined4 uVar13;
  int iVar14;
  longlong *plVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  int iVar19;
  byte bVar20;
  undefined8 *puVar21;
  longlong lVar22;
  bool bVar23;
  undefined1 auStack_248 [32];
  char **local_228;
  longlong local_218;
  PSRWLOCK local_210;
  longlong *local_208 [2];
  undefined8 local_1f8;
  longlong *local_1f0;
  undefined8 local_1e8;
  longlong *plStack_1e0;
  longlong *local_1d8 [2];
  longlong *local_1c8 [2];
  undefined8 local_1b8;
  longlong *local_1b0;
  char **local_1a8;
  undefined1 *local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  longlong local_180;
  undefined8 uStack_178;
  longlong local_168;
  ulonglong uStack_160;
  undefined4 local_158;
  longlong local_150;
  undefined8 uStack_148;
  char *local_138;
  int local_130;
  undefined1 local_12c;
  longlong *local_128 [2];
  undefined1 local_118 [160];
  char local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_248;
  if (((*(byte *)(param_1 + 0x8c) & 0x80) == 0) ||
     (lVar22 = *(longlong *)(param_1 + 0x288), lVar22 == 0)) goto LAB_14134f272;
  plVar15 = (longlong *)FUN_14134fd62(param_1);
  lVar6 = *plVar15;
  AcquireSRWLockShared((PSRWLOCK)(lVar6 + 0x1478));
  if (*(int *)(param_1 + 0x368) != *(int *)(lVar6 + 0x1468)) {
    *(int *)(param_1 + 0x368) = *(int *)(lVar6 + 0x1468);
    FUN_145916b36(lVar22 + 0xb50,*(undefined4 *)(lVar6 + 0x1460));
    if ((longlong)*(int *)(lVar6 + 0x1460) != 0) {
      puVar17 = *(undefined8 **)(lVar6 + 0x1458);
      puVar21 = (undefined8 *)((longlong)*(int *)(lVar6 + 0x1460) * 0x1c + (longlong)puVar17);
      do {
        puVar18 = (undefined8 *)FUN_14591693c(lVar22 + 0xb50);
        *puVar18 = *puVar17;
        *(undefined4 *)(puVar18 + 1) = *(undefined4 *)((longlong)puVar17 + 0xc);
        *(undefined4 *)((longlong)puVar18 + 0xc) = *(undefined4 *)((longlong)puVar17 + 0x14);
        puVar17 = (undefined8 *)((longlong)puVar17 + 0x1c);
      } while (puVar17 != puVar21);
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)(lVar6 + 0x1478));
  if (*(longlong *)(param_1 + 0x288) == 0) {
LAB_14134fbb2:
    bVar12 = 0;
LAB_14134f386:
    bVar20 = *(byte *)(param_1 + 0x2c8);
  }
  else {
    cVar11 = FUN_14134fe5a();
    if (cVar11 != '\0') {
      plVar15 = (longlong *)FUN_145916aba(param_1);
      lVar6 = *plVar15;
      pRVar4 = (PSRWLOCK)(lVar6 + 0x1c0);
      AcquireSRWLockShared(pRVar4);
      FUN_141353eda(lVar6,&local_138);
      ReleaseSRWLockShared(pRVar4);
      iVar19 = 0;
      if (local_130 != 0) {
        FUN_1400b22c2(&local_168,"StartEquippedFirmwareTutorial");
        FUN_140afad18(param_1,&local_168);
        iVar19 = local_130;
        if (local_168 != 0) {
          FUN_1400020a8();
          iVar19 = local_130;
        }
      }
      FUN_141354349(local_138,iVar19);
      if (local_138 != (char *)0x0) {
        FUN_1400020a8();
      }
      *(undefined4 *)(lVar22 + 0xbbc) = 0;
      *(undefined1 *)(param_1 + 0x2c8) = 1;
    }
    lVar6 = *(longlong *)(param_1 + 0x288);
    if (lVar6 == 0) goto LAB_14134fbb2;
    plVar15 = (longlong *)FUN_14134fdde(param_1);
    lVar7 = *plVar15;
    AcquireSRWLockShared((PSRWLOCK)(lVar7 + 0x88));
    iVar19 = *(int *)(param_1 + 0x2cc);
    iVar5 = *(int *)(lVar7 + 0x80);
    if (iVar19 != iVar5) {
      *(int *)(param_1 + 0x2cc) = iVar5;
      local_218 = lVar22;
      iVar14 = FUN_145916930(lVar7);
      local_210 = (PSRWLOCK)CONCAT44(local_210._4_4_,iVar14);
      if (iVar14 == 1) {
        local_168 = 0;
        uStack_160 = 0;
        local_158 = 0;
        local_150 = 0;
        uStack_148 = 0;
        FUN_1446ddda2(&local_168,"SingleUnclaimedReward",0);
        FUN_1410d1eba(local_1c8,&local_168);
        lVar22 = local_218;
      }
      else {
        local_1e8 = 0;
        plStack_1e0 = (longlong *)0x0;
        FUN_145c561ae(local_1d8,iVar14,0);
        local_198 = 0;
        uStack_190 = 0;
        local_188 = 0;
        local_180 = 0;
        uStack_178 = 0;
        FUN_1446ddda2(&local_198,"NumUnclaimedRewardsFormat",0);
        FUN_1410d1eba(local_208,&local_198);
        FUN_14023409e(&local_1f8,local_208,1);
        local_138 = (char *)CONCAT44(local_138._4_4_,4);
        FUN_14023423e(local_128,local_1d8);
        local_1a8 = &local_138;
        local_1a0 = local_118;
        FUN_14010d304(&local_168);
        local_1b8 = local_1f8;
        local_1b0 = local_1f0;
        if (local_1f0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_1f0 + 1) = (int)local_1f0[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(local_1c8,&local_1b8,&local_168);
        FUN_14007f2db(local_168,uStack_160 & 0xffffffff);
        if (local_168 != 0) {
          FUN_1400020a8();
        }
        lVar22 = local_218;
        if (local_128[0] != (longlong *)0x0) {
          (**(code **)(*local_128[0] + 0x10))();
        }
        if (local_1f0 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_1f0 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
            (**(code **)*local_1f0)(local_1f0);
            LOCK();
            piVar2 = (int *)((longlong)local_1f0 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_1f0 + 0x10))(local_1f0);
            }
          }
        }
        if (local_1d8[0] != (longlong *)0x0) {
          (**(code **)(*local_1d8[0] + 0x10))();
        }
      }
      FUN_140008f88(lVar6 + 0xb70,local_1c8);
      if (local_1c8[0] != (longlong *)0x0) {
        (**(code **)(*local_1c8[0] + 0x10))();
      }
      if ((int)local_210 == 1) {
        lVar22 = local_218;
        if (local_150 != 0) {
          FUN_1400020a8();
          lVar22 = local_218;
        }
      }
      else {
        if (local_208[0] != (longlong *)0x0) {
          (**(code **)(*local_208[0] + 0x10))();
        }
        if (local_180 != 0) {
          FUN_1400020a8();
        }
        plVar15 = plStack_1e0;
        if (plStack_1e0 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_1e0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_1e0)(plStack_1e0);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
      }
      cVar11 = FUN_145916934(lVar7);
      if (cVar11 == '\0') {
        bVar23 = false;
      }
      else {
        plVar15 = (longlong *)FUN_14134fce6(param_1);
        lVar8 = *plVar15;
        pRVar4 = (PSRWLOCK)(lVar8 + 0xb0);
        AcquireSRWLockShared(pRVar4);
        bVar23 = *(int *)(lVar8 + 8) == 0;
        ReleaseSRWLockShared(pRVar4);
      }
      *(byte *)(lVar6 + 0xb80) = *(byte *)(lVar6 + 0xb80) & 0xfe | bVar23;
      if (((*(byte *)(param_1 + 0x8c) & 0x80) != 0) && (bVar23 != false)) {
        FUN_1400b22c2(&local_138,"StartRewardCenterTutorial");
        FUN_140afad18(param_1,&local_138);
        if (local_138 != (char *)0x0) {
          FUN_1400020a8();
        }
      }
      puVar9 = *(ushort **)(lVar6 + 0x80);
      if (puVar9 != (ushort *)0x0) {
        *puVar9 = *puVar9 | (ushort)(1L << (*(byte *)(lVar6 + 0x78) & 0x3f));
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)(lVar7 + 0x88));
    bVar20 = iVar19 != iVar5 | *(byte *)(param_1 + 0x2c8);
    *(byte *)(param_1 + 0x2c8) = bVar20;
    if (*(longlong *)(param_1 + 0x288) != 0) {
      bVar12 = FUN_141350080();
      goto LAB_14134f386;
    }
    bVar12 = 0;
  }
  pbVar3 = (byte *)(param_1 + 0x2c8);
  *pbVar3 = bVar20 | bVar12;
  if (((*(byte *)(param_1 + 0x8c) & 0x80) == 0) ||
     (lVar6 = *(longlong *)(param_1 + 0x288), lVar6 == 0)) {
    bVar12 = 0;
  }
  else {
    iVar19 = *(int *)(lVar6 + 0xb8c);
    bVar12 = FUN_1413503e0(lVar6);
    iVar5 = *(int *)(lVar6 + 0xb8c);
    bVar12 = iVar19 != iVar5 & bVar12;
    if (bVar12 == 1) {
      FUN_14591761c(param_1,iVar19);
      FUN_1459180aa(param_1,iVar5);
    }
    plVar15 = (longlong *)FUN_14134fce6(param_1);
    lVar7 = *plVar15;
    pRVar4 = (PSRWLOCK)(lVar7 + 0xb0);
    AcquireSRWLockShared(pRVar4);
    local_210 = pRVar4;
    if (*(int *)(param_1 + 0x2fc) != *(int *)(lVar7 + 0x74)) {
      cVar11 = *(char *)(lVar7 + 0x70);
      *(char *)(param_1 + 0x2f8) = cVar11;
      *(undefined4 *)(param_1 + 0x2fc) = *(undefined4 *)(lVar7 + 0x74);
      if (cVar11 == '\x01') {
        uVar16 = FUN_14001cc68(0x110,0x10);
        local_78 = '\0';
        if (DAT_14caa8580 == 0) {
          FUN_140608a9e();
        }
        FUN_1400702d4(DAT_14caa8580,&local_1a8,*(undefined8 *)(param_1 + 0x348),0);
        local_228 = &local_138;
        FUN_141350326(uVar16,param_1 + 0x30,local_1a8,1);
        FUN_140391314(param_1,uVar16);
        if (local_78 == '\x01') {
          FUN_145a1457c(&local_138);
        }
      }
      else {
        local_218 = lVar22;
        puVar17 = (undefined8 *)FUN_14001cc68(0x40,0x10);
        if (DAT_14caa8580 == 0) {
          FUN_140608a9e();
        }
        FUN_1400702d4(DAT_14caa8580,&local_1a8,*(undefined8 *)(param_1 + 0x348),0);
        ppcVar10 = local_1a8;
        *puVar17 = &PTR_FUN_14b9c9c90;
        local_138 = "ClearStandIn";
        local_130 = 0xc;
        local_12c = 0;
        uVar13 = FUN_14001a6c0(&local_138,1);
        FUN_14039176c(puVar17,*(undefined8 *)(param_1 + 0x30),uVar13,1);
        *puVar17 = &PTR_FUN_14b9c9c90;
        puVar17[7] = ppcVar10;
        FUN_140391314(param_1,puVar17);
        lVar22 = local_218;
      }
    }
    if (*(int *)(param_1 + 0x304) != *(int *)(lVar7 + 0x7c)) {
      cVar11 = *(char *)(lVar7 + 0x78);
      *(char *)(param_1 + 0x300) = cVar11;
      *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(lVar7 + 0x7c);
      if (cVar11 == '\x01') {
        uVar16 = FUN_14001cc68(0x110,0x10);
        local_78 = '\0';
        if (DAT_14caa8580 == 0) {
          FUN_140608a9e();
        }
        FUN_1400702d4(DAT_14caa8580,&local_1b8,*(undefined8 *)(param_1 + 0x350),0);
        local_228 = &local_138;
        FUN_141350326(uVar16,param_1 + 0x30,local_1b8,1);
        FUN_140391314(param_1,uVar16);
        if (local_78 == '\x01') {
          FUN_145a1457c(&local_138);
        }
      }
      else {
        local_218 = lVar22;
        puVar17 = (undefined8 *)FUN_14001cc68(0x40,0x10);
        if (DAT_14caa8580 == 0) {
          FUN_140608a9e();
        }
        FUN_1400702d4(DAT_14caa8580,&local_1b8,*(undefined8 *)(param_1 + 0x350),0);
        uVar16 = local_1b8;
        *puVar17 = &PTR_FUN_14b9c9c90;
        local_138 = "ClearStandIn";
        local_130 = 0xc;
        local_12c = 0;
        uVar13 = FUN_14001a6c0(&local_138,1);
        FUN_14039176c(puVar17,*(undefined8 *)(param_1 + 0x30),uVar13,1);
        *puVar17 = &PTR_FUN_14b9c9c90;
        puVar17[7] = uVar16;
        FUN_140391314(param_1,puVar17);
        lVar22 = local_218;
      }
    }
    iVar19 = *(int *)(lVar7 + 0x18);
    if (*(int *)(param_1 + 0x2f4) != *(int *)(lVar7 + 0x14)) {
      *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(lVar7 + 0x10);
      *(undefined4 *)(param_1 + 0x2f4) = *(undefined4 *)(lVar7 + 0x14);
    }
    ReleaseSRWLockShared(local_210);
    if (*(int *)(lVar6 + 0x32c) != iVar19) {
      FUN_145917952(param_1,iVar19);
    }
  }
  *pbVar3 = *pbVar3 | bVar12;
  if (*pbVar3 != 0) {
    FUN_141351f5e(lVar22);
    FUN_1459169de(param_1);
  }
  FUN_140714c1e(lVar22 + 0x2c0,*(undefined4 *)(param_1 + 0x208));
  *(uint *)(param_1 + 0x8c) =
       *(uint *)(param_1 + 0x8c) & 0xfffdffff | (uint)(*(int *)(param_1 + 0x2f0) == 0) << 0x11;
  plVar15 = (longlong *)FUN_14134fce6(param_1);
  lVar6 = *plVar15;
  pRVar4 = (PSRWLOCK)(lVar6 + 0xb0);
  AcquireSRWLockShared(pRVar4);
  iVar19 = *(int *)(lVar6 + 0xa0);
  ReleaseSRWLockShared(pRVar4);
  if (iVar19 != 0) {
LAB_14134f272:
    if ((local_60 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  plVar15 = (longlong *)FUN_14134fce6(param_1);
  lVar6 = *plVar15;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar6 + 0xb0));
  *(int *)(lVar6 + 0xa8) = *(int *)(lVar6 + 0xa8) + 1;
  if (*(int *)(lVar22 + 0xb8c) == *(int *)(lVar6 + 0x10)) {
    if (*(int *)(lVar6 + 0x14) != 0) goto LAB_14134f451;
    iVar19 = 1;
  }
  else {
    iVar19 = *(int *)(lVar6 + 0x14) + 1;
  }
  *(int *)(lVar6 + 0x10) = *(int *)(lVar22 + 0xb8c);
  *(int *)(lVar6 + 0x14) = iVar19;
LAB_14134f451:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_248);
}



// FUNCTION 14134fce6 FUN_14134fce6 body=123 status=ok
// SIG undefined FUN_14134fce6(void)

longlong FUN_14134fce6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448d5e3c(&local_28,param_1 + 0x208);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28 + 0x200;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14134fd62 FUN_14134fd62 body=123 status=ok
// SIG undefined FUN_14134fd62(void)

longlong FUN_14134fd62(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448d5e3c(&local_28,param_1 + 0x208);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28 + 0x1f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14134fdde FUN_14134fdde body=123 status=ok
// SIG undefined FUN_14134fdde(void)

longlong FUN_14134fdde(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448d5e3c(&local_28,param_1 + 0x208);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28 + 0x4c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14134fe5a FUN_14134fe5a body=428 status=ok
// SIG undefined FUN_14134fe5a(void)

ulonglong FUN_14134fe5a(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 unaff_RBX;
  ulonglong uVar10;
  int iVar11;
  
  plVar8 = (longlong *)FUN_141350006();
  lVar6 = *plVar8;
  AcquireSRWLockShared((PSRWLOCK)(lVar6 + 0x1c0));
  if (*(int *)(param_1 + 0xac0) == *(int *)(lVar6 + 0x1b8)) {
LAB_14134fe8d:
    uVar10 = 0;
  }
  else {
    *(int *)(param_1 + 0xac0) = *(int *)(lVar6 + 0x1b8);
    iVar1 = *(int *)(param_1 + 0x3d4);
    iVar11 = *(int *)(lVar6 + 0x54);
    if (iVar1 != iVar11) {
      *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(lVar6 + 0x50);
      *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(lVar6 + 0x54);
    }
    iVar2 = *(int *)(param_1 + 0x3dc);
    iVar3 = *(int *)(lVar6 + 0x5c);
    if (iVar2 != iVar3) {
      *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(lVar6 + 0x58);
      *(undefined4 *)(param_1 + 0x3dc) = *(undefined4 *)(lVar6 + 0x5c);
    }
    iVar4 = *(int *)(param_1 + 1000);
    iVar5 = *(int *)(lVar6 + 100);
    if (iVar4 != iVar5) {
      *(undefined4 *)(param_1 + 0x3e4) = *(undefined4 *)(lVar6 + 0x60);
      *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(lVar6 + 100);
    }
    if (*(int *)(param_1 + 0x420) == *(int *)(lVar6 + 0x90) && *(int *)(param_1 + 0x420) != 0) {
      if ((bool)(~(iVar1 != iVar11 || iVar2 != iVar3) & iVar4 == iVar5)) goto LAB_14134fe8d;
    }
    else {
      *(int *)(param_1 + 0x420) = *(int *)(lVar6 + 0x90);
      FUN_145916980(param_1 + 0x410);
    }
    *(undefined4 *)(param_1 + 0x3ec) = 0;
    iVar1 = *(int *)(lVar6 + 0x88);
    uVar10 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    if ((longlong)iVar1 != 0) {
      lVar7 = *(longlong *)(lVar6 + 0x80);
      lVar9 = 0;
      iVar11 = 0;
      do {
        if ((*(byte *)(lVar7 + 0x10 + lVar9) & 1) != 0) {
          iVar11 = iVar11 + 1;
          *(int *)(param_1 + 0x3ec) = iVar11;
        }
        lVar9 = lVar9 + 0x430;
      } while ((longlong)iVar1 * 0x430 - lVar9 != 0);
    }
  }
  if (*(int *)(param_1 + 0xacc) != *(int *)(lVar6 + 0x78)) {
    *(int *)(param_1 + 0xacc) = *(int *)(lVar6 + 0x78);
    *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) | 0x80;
    uVar10 = CONCAT71((int7)(uVar10 >> 8),1);
  }
  ReleaseSRWLockShared((PSRWLOCK)(lVar6 + 0x1c0));
  return uVar10 & 0xffffffff;
}



// FUNCTION 141350006 FUN_141350006 body=120 status=ok
// SIG undefined FUN_141350006(void)

longlong FUN_141350006(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448d5e3c(&local_28,param_1 + 0x70);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28 + 0x1b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141350080 FUN_141350080 body=618 status=ok
// SIG undefined FUN_141350080(void)

ulonglong FUN_141350080(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  void *_Src;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong unaff_RBX;
  longlong lVar12;
  longlong lVar13;
  
  plVar8 = (longlong *)FUN_141352250();
  lVar6 = *plVar8;
  AcquireSRWLockShared((PSRWLOCK)(lVar6 + 0x1478));
  iVar3 = *(int *)((longlong)param_1 + 0xbbc);
  iVar4 = *(int *)(lVar6 + 0x1470);
  if (iVar3 != iVar4) {
    *(int *)((longlong)param_1 + 0xbbc) = iVar4;
    if ((int)param_1[0x177] != *(int *)(lVar6 + 0x1454)) {
      *(undefined4 *)((longlong)param_1 + 0xbb4) = *(undefined4 *)(lVar6 + 0x1450);
      *(undefined4 *)(param_1 + 0x177) = *(undefined4 *)(lVar6 + 0x1454);
      FUN_1461eedf4(param_1 + 0x16c);
      iVar7 = *(int *)((longlong)param_1 + 0x3d4);
      if (iVar7 != *(int *)(lVar6 + 0x1454)) {
        *(undefined4 *)(param_1 + 0x7a) = *(undefined4 *)(lVar6 + 0x1450);
        iVar7 = *(int *)(lVar6 + 0x1454);
        *(int *)((longlong)param_1 + 0x3d4) = iVar7;
      }
      if (*(int *)((longlong)param_1 + 0x3dc) != iVar7) {
        *(undefined4 *)(param_1 + 0x7b) = *(undefined4 *)(lVar6 + 0x1450);
        *(undefined4 *)((longlong)param_1 + 0x3dc) = *(undefined4 *)(lVar6 + 0x1454);
      }
    }
    lVar9 = FUN_145916fde(param_1);
    uVar5 = *(uint *)((longlong)param_1 + 0xbb4);
    if ((ulonglong)uVar5 != 0) {
      unaff_RBX = 0;
      do {
        puVar2 = (undefined8 *)(unaff_RBX * 0x68 + lVar6);
        lVar12 = unaff_RBX * 0x280 + param_1[0x16c];
        if (*(int *)(lVar6 + 0x58 + unaff_RBX * 0x68) != -1) {
          plVar8 = (longlong *)(**(code **)(*param_1 + 0x120))(param_1);
          if ((longlong)(int)plVar8[1] != 0) {
            lVar13 = *plVar8;
            lVar10 = (longlong)(int)plVar8[1] * 0x430;
            do {
              if (*(int *)(lVar13 + 8) == *(int *)(puVar2 + 0xb)) {
                if (lVar13 != 0) {
                  FUN_141352d9a(lVar12,lVar13);
                  if ((lVar9 == 0) || (*(char *)(lVar13 + 0x1d0) != '\x01')) goto LAB_1413502d7;
                  uVar11 = FUN_14001cc68(0x48,0x10);
                  FUN_145916e18(uVar11,*(undefined8 *)((longlong)param_1 + 0x54),lVar13 + 0x1f0);
                  FUN_14039144e(lVar9,uVar11);
                  goto LAB_14135025b;
                }
                break;
              }
              lVar13 = lVar13 + 0x430;
              lVar10 = lVar10 + -0x430;
            } while (lVar10 != 0);
          }
        }
        FUN_1401e0130(lVar12);
LAB_14135025b:
        *(bool *)(lVar12 + 0x268) = *(int *)(puVar2 + 9) == 0;
        puVar1 = (undefined8 *)(lVar12 + 0x270);
        if (puVar1 != puVar2) {
          iVar7 = *(int *)(puVar2 + 1);
          _Src = (void *)*puVar2;
          *(int *)(lVar12 + 0x278) = iVar7;
          if (iVar7 == 0 && *(int *)(lVar12 + 0x27c) == 0) {
            *(undefined4 *)(lVar12 + 0x27c) = 0;
          }
          else {
            FUN_1446dd670(puVar1,iVar7);
            if (iVar7 != 0) {
              memcpy((void *)*puVar1,_Src,(longlong)iVar7 * 2);
            }
          }
        }
        *(byte *)(lVar12 + 0x9d) = *(byte *)(lVar12 + 0x9d) & 0xfb | *(char *)(puVar2 + 10) << 2;
LAB_1413502d7:
        unaff_RBX = unaff_RBX + 1;
      } while (unaff_RBX != uVar5);
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)(lVar6 + 0x1478));
  return CONCAT71((int7)(unaff_RBX >> 8),iVar3 != iVar4) & 0xffffffff;
}



// FUNCTION 1413502ea FUN_1413502ea body=60 status=ok
// SIG undefined FUN_1413502ea(void)

void FUN_1413502ea(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1413505e4(param_1,param_2);
    param_1 = param_1 + 0x430;
    param_2 = param_2 + 0x430;
  }
  return;
}



// FUNCTION 141350326 FUN_141350326 body=185 status=ok
// SIG undefined FUN_141350326(void)

undefined8 *
FUN_141350326(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
             longlong param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [32];
  char *local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_14b9c6eb0;
  local_48 = "RespawnStandIn";
  local_40 = 0xe;
  local_3c = 0;
  uVar2 = FUN_14001a6c0(&local_48,1);
  FUN_14039176c(param_1,*param_2,uVar2,param_4);
  *param_1 = &PTR_FUN_14b9c6eb0;
  param_1[7] = param_3;
  cVar1 = *(char *)(param_5 + 0xc0);
  *(char *)(param_1 + 0x20) = cVar1;
  if (cVar1 == '\x01') {
    FUN_145a14a00(param_1 + 8,param_5);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413503e0 FUN_1413503e0 body=393 status=ok
// SIG undefined FUN_1413503e0(void)

ulonglong FUN_1413503e0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined4 uVar9;
  byte bVar10;
  undefined8 unaff_RBX;
  undefined7 uVar11;
  
  plVar8 = (longlong *)FUN_14135056a();
  lVar7 = *plVar8;
  AcquireSRWLockShared((PSRWLOCK)(lVar7 + 0xb0));
  iVar1 = *(int *)(param_1 + 0xb98);
  iVar2 = *(int *)(lVar7 + 0x54);
  if (iVar1 != iVar2) {
    *(undefined4 *)(param_1 + 0xb94) = *(undefined4 *)(lVar7 + 0x50);
    *(undefined4 *)(param_1 + 0xb98) = *(undefined4 *)(lVar7 + 0x54);
  }
  iVar3 = *(int *)(param_1 + 0xba0);
  iVar4 = *(int *)(lVar7 + 0x5c);
  if (iVar3 != iVar4) {
    *(undefined4 *)(param_1 + 0xb9c) = *(undefined4 *)(lVar7 + 0x58);
    *(undefined4 *)(param_1 + 0xba0) = *(undefined4 *)(lVar7 + 0x5c);
  }
  iVar5 = *(int *)(param_1 + 0xba8);
  iVar6 = *(int *)(lVar7 + 100);
  if (iVar5 != iVar6) {
    *(undefined4 *)(param_1 + 0xba4) = *(undefined4 *)(lVar7 + 0x60);
    *(undefined4 *)(param_1 + 0xba8) = *(undefined4 *)(lVar7 + 100);
  }
  if (*(int *)(param_1 + 0xbb0) == *(int *)(lVar7 + 0x6c)) {
    if ((bool)(~(iVar1 != iVar2 || iVar3 != iVar4) & iVar5 == iVar6)) {
      bVar10 = 0;
      uVar11 = 0;
      goto LAB_14135045b;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xbac) = *(undefined4 *)(lVar7 + 0x68);
    *(undefined4 *)(param_1 + 0xbb0) = *(undefined4 *)(lVar7 + 0x6c);
  }
  uVar9 = 0xffffffff;
  if (*(int *)(param_1 + 0xba4) != -1) {
    uVar9 = *(undefined4 *)(param_1 + 0x32c);
  }
  FUN_146234f2c(param_1,uVar9);
  uVar11 = (undefined7)((ulonglong)unaff_RBX >> 8);
  bVar10 = 1;
LAB_14135045b:
  iVar1 = *(int *)(param_1 + 0xb88);
  iVar2 = *(int *)(lVar7 + 0x84);
  if (iVar1 != iVar2) {
    *(undefined1 *)(param_1 + 0xb84) = *(undefined1 *)(lVar7 + 0x80);
    *(undefined4 *)(param_1 + 0xb88) = *(undefined4 *)(lVar7 + 0x84);
  }
  iVar3 = *(int *)(param_1 + 0xb90);
  iVar4 = *(int *)(lVar7 + 0xc);
  if (iVar3 != iVar4) {
    *(undefined4 *)(param_1 + 0xb8c) = *(undefined4 *)(lVar7 + 8);
    *(undefined4 *)(param_1 + 0xb90) = *(undefined4 *)(lVar7 + 0xc);
  }
  ReleaseSRWLockShared((PSRWLOCK)(lVar7 + 0xb0));
  return CONCAT71(uVar11,bVar10 | iVar3 != iVar4 | iVar1 != iVar2) & 0xffffffff;
}



// FUNCTION 14135056a FUN_14135056a body=120 status=ok
// SIG undefined FUN_14135056a(void)

longlong FUN_14135056a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448d5e3c(&local_28,param_1 + 0x70);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28 + 0x200;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413505e4 FUN_1413505e4 body=3090 status=ok
// SIG undefined FUN_1413505e4(void)

undefined8 * FUN_1413505e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *_Dst;
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  *param_1 = &PTR_FUN_14b81b980;
  param_1[1] = 0xffffffff;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[4] = param_2[4];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  param_1[10] = 0;
  iVar1 = *(int *)(param_2 + 0xb);
  uVar2 = param_2[10];
  *(int *)(param_1 + 0xb) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_140b856de(param_1 + 10,iVar1,0);
    FUN_140b8566a(param_1[10],uVar2,iVar1);
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1 == param_2) {
    *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *(undefined4 *)(param_1 + 0x12) = 0;
    *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    *(undefined4 *)(param_1 + 0x15) = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 0xe);
    pvVar3 = (void *)param_2[0xd];
    *(int *)(param_1 + 0xe) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x74) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 0xd,iVar1,0);
      memcpy((void *)param_1[0xd],pvVar3,(longlong)iVar1 * 2);
    }
    *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *(undefined4 *)(param_1 + 0x12) = 0;
    iVar1 = *(int *)(param_2 + 0x11);
    pvVar3 = (void *)param_2[0x10];
    *(int *)(param_1 + 0x11) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 0x10,iVar1,0);
      memcpy((void *)param_1[0x10],pvVar3,(longlong)iVar1 * 2);
    }
    *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    *(undefined4 *)(param_1 + 0x15) = 0;
    iVar1 = *(int *)(param_2 + 0x14);
    pvVar3 = (void *)param_2[0x13];
    *(int *)(param_1 + 0x14) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 0x13,iVar1,0);
      memcpy((void *)param_1[0x13],pvVar3,(longlong)iVar1 * 2);
    }
  }
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
  *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)((longlong)param_2 + 0xb4);
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1 == param_2) {
    *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 0x18);
    pvVar3 = (void *)param_2[0x17];
    *(int *)(param_1 + 0x18) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 0x17,iVar1,0);
      memcpy((void *)param_1[0x17],pvVar3,(longlong)iVar1 * 2);
    }
    *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    iVar1 = *(int *)(param_2 + 0x1b);
    pvVar3 = (void *)param_2[0x1a];
    *(int *)(param_1 + 0x1b) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 0x1a,iVar1,0);
      memcpy((void *)param_1[0x1a],pvVar3,(longlong)iVar1 * 2);
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_2 + 0x1d);
  *(undefined4 *)((longlong)param_1 + 0xec) = *(undefined4 *)((longlong)param_2 + 0xec);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (param_1 == param_2) {
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    *(undefined4 *)(param_1 + 0x23) = 0;
    *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(param_2 + 0x23);
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    *(undefined4 *)(param_1 + 0x26) = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 0x1f);
    pvVar3 = (void *)param_2[0x1e];
    *(int *)(param_1 + 0x1f) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 0x1e,iVar1,0);
      memcpy((void *)param_1[0x1e],pvVar3,(longlong)iVar1 * 2);
    }
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    *(undefined4 *)(param_1 + 0x23) = 0;
    iVar1 = *(int *)(param_2 + 0x22);
    pvVar3 = (void *)param_2[0x21];
    *(int *)(param_1 + 0x22) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x114) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 0x21,iVar1,0);
      memcpy((void *)param_1[0x21],pvVar3,(longlong)iVar1 * 2);
    }
    *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(param_2 + 0x23);
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    *(undefined4 *)(param_1 + 0x26) = 0;
    iVar1 = *(int *)(param_2 + 0x25);
    pvVar3 = (void *)param_2[0x24];
    *(int *)(param_1 + 0x25) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 300) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 0x24,iVar1,0);
      memcpy((void *)param_1[0x24],pvVar3,(longlong)iVar1 * 2);
    }
  }
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_2 + 0x26);
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x27) = *(undefined4 *)(param_2 + 0x27);
  *(undefined4 *)((longlong)param_1 + 0x13c) = *(undefined4 *)((longlong)param_2 + 0x13c);
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  if (param_1 == param_2) {
    *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)(param_2 + 0x2a);
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    *(undefined4 *)(param_1 + 0x2d) = 0;
    *(undefined4 *)(param_1 + 0x2d) = *(undefined4 *)(param_2 + 0x2d);
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 0x29);
    pvVar3 = (void *)param_2[0x28];
    *(int *)(param_1 + 0x29) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 0x28,iVar1,0);
      memcpy((void *)param_1[0x28],pvVar3,(longlong)iVar1 * 2);
    }
    *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)(param_2 + 0x2a);
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    *(undefined4 *)(param_1 + 0x2d) = 0;
    iVar1 = *(int *)(param_2 + 0x2c);
    pvVar3 = (void *)param_2[0x2b];
    *(int *)(param_1 + 0x2c) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x164) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 0x2b,iVar1,0);
      memcpy((void *)param_1[0x2b],pvVar3,(longlong)iVar1 * 2);
    }
    *(undefined4 *)(param_1 + 0x2d) = *(undefined4 *)(param_2 + 0x2d);
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    iVar1 = *(int *)(param_2 + 0x2f);
    pvVar3 = (void *)param_2[0x2e];
    *(int *)(param_1 + 0x2f) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 0x2e,iVar1,0);
      memcpy((void *)param_1[0x2e],pvVar3,(longlong)iVar1 * 2);
    }
  }
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x31) = *(undefined4 *)(param_2 + 0x31);
  *(undefined4 *)((longlong)param_1 + 0x18c) = *(undefined4 *)((longlong)param_2 + 0x18c);
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (param_1 == param_2) {
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    param_1[0x35] = 0;
    param_1[0x36] = 0;
    *(undefined4 *)(param_1 + 0x37) = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 0x33);
    pvVar3 = (void *)param_2[0x32];
    *(int *)(param_1 + 0x33) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x19c) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 0x32,iVar1,0);
      memcpy((void *)param_1[0x32],pvVar3,(longlong)iVar1 * 2);
    }
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    param_1[0x35] = 0;
    param_1[0x36] = 0;
    *(undefined4 *)(param_1 + 0x37) = 0;
    iVar1 = *(int *)(param_2 + 0x36);
    pvVar3 = (void *)param_2[0x35];
    *(int *)(param_1 + 0x36) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 0x35,iVar1,0);
      memcpy((void *)param_1[0x35],pvVar3,(longlong)iVar1 * 2);
    }
  }
  *(undefined4 *)(param_1 + 0x37) = *(undefined4 *)(param_2 + 0x37);
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined4 *)((longlong)param_1 + 0x1c4) = *(undefined4 *)((longlong)param_2 + 0x1c4);
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined1 *)(param_1 + 0x39) = *(undefined1 *)(param_2 + 0x39);
  *(undefined4 *)((longlong)param_1 + 0x1cc) = *(undefined4 *)((longlong)param_2 + 0x1cc);
  *(undefined1 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined1 *)(param_1 + 0x3a) = *(undefined1 *)(param_2 + 0x3a);
  *(undefined4 *)((longlong)param_1 + 0x1d4) = *(undefined4 *)((longlong)param_2 + 0x1d4);
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  if (param_1 == param_2) {
    *(undefined4 *)(param_1 + 0x3d) = *(undefined4 *)(param_2 + 0x3d);
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 0x3c);
    pvVar3 = (void *)param_2[0x3b];
    *(int *)(param_1 + 0x3c) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 0x3b,iVar1,0);
      memcpy((void *)param_1[0x3b],pvVar3,(longlong)iVar1 * 2);
    }
    *(undefined4 *)(param_1 + 0x3d) = *(undefined4 *)(param_2 + 0x3d);
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    iVar1 = *(int *)(param_2 + 0x3f);
    pvVar3 = (void *)param_2[0x3e];
    *(int *)(param_1 + 0x3f) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 0x3e,iVar1,0);
      memcpy((void *)param_1[0x3e],pvVar3,(longlong)iVar1 * 2);
    }
  }
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x41) = *(undefined4 *)(param_2 + 0x41);
  *(undefined4 *)((longlong)param_1 + 0x20c) = *(undefined4 *)((longlong)param_2 + 0x20c);
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x42) = *(undefined4 *)(param_2 + 0x42);
  *(undefined4 *)((longlong)param_1 + 0x214) = *(undefined4 *)((longlong)param_2 + 0x214);
  memset(param_1 + 0x43,0,0xd8);
  *(undefined4 *)((longlong)param_1 + 0x284) = 0x80;
  *(undefined4 *)(param_1 + 0x51) = 0xffffffff;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0xf;
  *(undefined1 *)(param_1 + 0x5b) = 1;
  *(undefined8 *)((longlong)param_1 + 0x2dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e4) = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  FUN_1407b25f0(param_1 + 0x43);
  *(undefined4 *)(param_1 + 0x5e) = *(undefined4 *)(param_2 + 0x5e);
  _Dst = param_1 + 0x5f;
  memset(_Dst,0,0xd8);
  FUN_140c5455a(_Dst);
  *(undefined4 *)(param_1 + 0x7a) = 0;
  FUN_1413511f6(_Dst,param_2 + 0x5f);
  *(undefined4 *)(param_1 + 0x7a) = *(undefined4 *)(param_2 + 0x7a);
  *(undefined1 *)(param_1 + 0x7b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3dc) = 0;
  *(undefined1 *)(param_1 + 0x7b) = *(undefined1 *)(param_2 + 0x7b);
  *(undefined4 *)((longlong)param_1 + 0x3dc) = *(undefined4 *)((longlong)param_2 + 0x3dc);
  FUN_140dd90de(param_1 + 0x7c,param_2 + 0x7c);
  *(undefined1 *)(param_1 + 0x7f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3fc) = 0;
  *(undefined1 *)(param_1 + 0x7f) = *(undefined1 *)(param_2 + 0x7f);
  *(undefined4 *)((longlong)param_1 + 0x3fc) = *(undefined4 *)((longlong)param_2 + 0x3fc);
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x404) = 0;
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  *(undefined4 *)((longlong)param_1 + 0x404) = *(undefined4 *)((longlong)param_2 + 0x404);
  *(undefined1 *)(param_1 + 0x81) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40c) = 0;
  *(undefined1 *)(param_1 + 0x81) = *(undefined1 *)(param_2 + 0x81);
  *(undefined4 *)((longlong)param_1 + 0x40c) = *(undefined4 *)((longlong)param_2 + 0x40c);
  param_1[0x82] = 0;
  iVar1 = *(int *)(param_2 + 0x83);
  uVar2 = param_2[0x82];
  *(int *)(param_1 + 0x83) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x41c) = 0;
  }
  else {
    FUN_140bb3404(param_1 + 0x82,iVar1,0);
    FUN_140bb2cf7(param_1[0x82],uVar2,iVar1);
  }
  param_1[0x84] = 0;
  iVar1 = *(int *)(param_2 + 0x85);
  uVar2 = param_2[0x84];
  *(int *)(param_1 + 0x85) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x42c) = 0;
  }
  else {
    FUN_140bb3404(param_1 + 0x84,iVar1,0);
    FUN_140bb2cf7(param_1[0x84],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1413511f6 FUN_1413511f6 body=808 status=ok
// SIG undefined FUN_1413511f6(void)

undefined8 * FUN_1413511f6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_1 == param_2) {
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  }
  else {
    iVar1 = *(int *)(param_2 + 1);
    pvVar2 = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
      }
    }
    iVar1 = *(int *)(param_2 + 3);
    pvVar2 = (void *)param_2[2];
    *(int *)(param_1 + 3) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x1c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 2,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
      }
    }
    iVar1 = *(int *)(param_2 + 5);
    pvVar2 = (void *)param_2[4];
    *(int *)(param_1 + 5) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x2c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 4,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
      }
    }
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
    iVar1 = *(int *)(param_2 + 8);
    pvVar2 = (void *)param_2[7];
    *(int *)(param_1 + 8) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x44) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x44) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 7,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[7],pvVar2,(longlong)iVar1 * 2);
      }
    }
    iVar1 = *(int *)(param_2 + 10);
    pvVar2 = (void *)param_2[9];
    *(int *)(param_1 + 10) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x54) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x54) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 9,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[9],pvVar2,(longlong)iVar1 * 2);
      }
    }
  }
  FUN_1406fa324(param_1 + 0xb,param_2 + 0xb);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  plVar3 = (longlong *)param_2[0xe];
  plVar4 = (longlong *)param_1[0xe];
  if (plVar4 != plVar3) {
    param_1[0xe] = plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  plVar3 = (longlong *)param_2[0x10];
  plVar4 = (longlong *)param_1[0x10];
  if (plVar4 != plVar3) {
    param_1[0x10] = plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  plVar3 = (longlong *)param_2[0x12];
  plVar4 = (longlong *)param_1[0x12];
  if (plVar4 != plVar3) {
    param_1[0x12] = plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
  plVar3 = (longlong *)param_2[0x14];
  plVar4 = (longlong *)param_1[0x14];
  if (plVar4 != plVar3) {
    param_1[0x14] = plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
  param_1[0x16] = param_2[0x16];
  uVar5 = *(undefined4 *)((longlong)param_2 + 0xbc);
  uVar6 = *(undefined4 *)(param_2 + 0x18);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0xc4);
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
  *(undefined4 *)((longlong)param_1 + 0xbc) = uVar5;
  *(undefined4 *)(param_1 + 0x18) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0xc4) = uVar7;
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x1a);
    pvVar2 = (void *)param_2[0x19];
    *(int *)(param_1 + 0x1a) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xd4) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 0x19,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[0x19],pvVar2,(longlong)iVar1 * 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 14135151e FUN_14135151e body=410 status=ok
// SIG undefined FUN_14135151e(void)

void FUN_14135151e(longlong param_1,uint param_2)

{
  byte *pbVar1;
  int iVar2;
  ushort *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  if (*(char *)(param_1 + 0x928) == '\0') {
    if ((((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0xb68))) &&
        (iVar2 = *(int *)(*(longlong *)(param_1 + 0xb60) + 0x254 + (ulonglong)param_2 * 0x280),
        iVar2 != -1)) && ((longlong)*(int *)(param_1 + 0x3f8) != 0)) {
      lVar6 = *(longlong *)(param_1 + 0x3f0);
      lVar5 = (longlong)*(int *)(param_1 + 0x3f8) * 0x268;
      do {
        if (*(int *)(lVar6 + 0x254) == iVar2) {
          if (lVar6 != 0) {
            FUN_14135191a(param_1 + 0x690);
            goto LAB_141351547;
          }
          break;
        }
        lVar6 = lVar6 + 0x268;
        lVar5 = lVar5 + -0x268;
      } while (lVar5 != 0);
    }
    FUN_1401e0130(param_1 + 0x690);
LAB_141351547:
    iVar2 = *(int *)(param_1 + 0xb68);
    if ((longlong)iVar2 != 0) {
      lVar6 = *(longlong *)(param_1 + 0xb60);
      lVar5 = 0;
      do {
        pbVar1 = (byte *)(lVar6 + 0x9f + lVar5);
        *pbVar1 = *pbVar1 & 0xfe;
        pbVar1 = (byte *)(lVar6 + 0x9e + lVar5);
        *pbVar1 = *pbVar1 & 0xfd;
        lVar5 = lVar5 + 0x280;
      } while ((longlong)iVar2 * 0x280 != lVar5);
    }
    if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0xb68))) {
      lVar5 = (ulonglong)param_2 * 0x280;
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0xb60) + 0x9e + lVar5);
      *pbVar1 = *pbVar1 | 2;
      plVar4 = (longlong *)FUN_14135056a(param_1);
      lVar6 = *plVar4;
      AcquireSRWLockShared((PSRWLOCK)(lVar6 + 0xb0));
      if (*(int *)(lVar6 + 0x60) == -1) {
        bVar7 = *(int *)(lVar6 + 0x68) != 0;
      }
      else {
        bVar7 = true;
      }
      *(byte *)(*(longlong *)(param_1 + 0xb60) + 0x9f + lVar5) =
           *(byte *)(*(longlong *)(param_1 + 0xb60) + 0x9f + lVar5) & 0xfe | bVar7;
      ReleaseSRWLockShared((PSRWLOCK)(lVar6 + 0xb0));
    }
    *(uint *)(param_1 + 0x32c) = param_2;
    puVar3 = *(ushort **)(param_1 + 0x80);
    if (puVar3 != (ushort *)0x0) {
      *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(param_1 + 0x78) & 0x3f));
    }
  }
  return;
}



// FUNCTION 1413516b8 FUN_1413516b8 body=609 status=ok
// SIG undefined FUN_1413516b8(void)

void FUN_1413516b8(longlong *param_1)

{
  longlong *plVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  ushort *puVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  
  uVar6 = (**(code **)(*param_1 + 0x30))();
  plVar1 = param_1 + 0x7e;
  FUN_145916edc(plVar1,uVar6);
  bVar3 = *(byte *)(param_1 + 0x160);
  uVar10 = *(uint *)(param_1 + 0x7b);
  if ((bVar3 & 4) != 0) {
    uVar10 = uVar10 + *(int *)((longlong)param_1 + 0x3ec);
  }
  uVar11 = *(uint *)(param_1 + 0x81);
  if (((bVar3 & 1) != 0) && ((int)uVar11 < (int)uVar10)) {
    uVar11 = uVar10;
  }
  uVar10 = uVar6;
  if ((int)uVar6 < (int)uVar11) {
    uVar10 = uVar11;
  }
  *(uint *)((longlong)param_1 + 0x90c) = uVar10;
  if ((((bVar3 & 0x10) != 0) && (iVar4 = (int)param_1[0x72], 0 < iVar4)) &&
     ((int)uVar10 % iVar4 != 0)) {
    *(uint *)((longlong)param_1 + 0x90c) = (iVar4 + uVar10) - (int)uVar10 % iVar4;
  }
  lVar7 = FUN_145916fde(param_1);
  if (uVar6 != 0) {
    uVar13 = 0;
    do {
      if (*(uint *)(param_1 + 0x7c) < uVar13) break;
      uVar10 = (uint)uVar13;
      if ((*(byte *)((longlong)param_1 + 0x8f9) & 1) != 0) {
        uVar10 = (int)param_1[0x120] + uVar10;
      }
      if (((int)uVar10 < 0) || ((int)param_1[0x81] <= (int)uVar10)) {
        lVar15 = uVar13 * 0x268;
        FUN_1401e0130(*plVar1 + lVar15);
        pbVar2 = (byte *)(*plVar1 + 0x9e + lVar15);
        *pbVar2 = *pbVar2 & 0xfd;
        pbVar2 = (byte *)(*plVar1 + 0x9f + lVar15);
        *pbVar2 = *pbVar2 & 0xfe;
        *(byte *)(*plVar1 + 0x9e + lVar15) =
             *(byte *)(*plVar1 + 0x9e + lVar15) & 0xbf | ((int)uVar11 <= (int)uVar10) << 6;
LAB_14135184c:
        *(uint *)(*plVar1 + 0x98 + uVar13 * 0x268) = uVar10;
      }
      else {
        lVar15 = (ulonglong)uVar10 * 0x268 + param_1[0x80];
        FUN_14135191a(uVar13 * 0x268 + param_1[0x7e],lVar15);
        if ((lVar7 != 0) && ((*(byte *)(lVar15 + 0xa0) & 1) != 0)) {
          if (*(int *)(lVar15 + 0x254) != -1) {
            plVar8 = (longlong *)(**(code **)(*param_1 + 0x120))(param_1);
            if ((longlong)(int)plVar8[1] != 0) {
              lVar12 = 8;
              lVar14 = 0;
              do {
                if (*(int *)(*plVar8 + lVar12) == *(int *)(lVar15 + 0x254)) {
                  if (*plVar8 != lVar14) {
                    uVar9 = FUN_14001cc68(0x48,0x10);
                    FUN_145916e18(uVar9,*(undefined8 *)((longlong)param_1 + 0x54));
                    FUN_14039144e(lVar7,uVar9);
                  }
                  break;
                }
                lVar14 = lVar14 + -0x430;
                lVar12 = lVar12 + 0x430;
              } while ((longlong)(int)plVar8[1] * -0x430 - lVar14 != 0);
            }
          }
          goto LAB_14135184c;
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar6);
  }
  puVar5 = (ushort *)param_1[0x10];
  if (puVar5 != (ushort *)0x0) {
    *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(param_1 + 0xf) & 0x3f));
  }
  return;
}



// FUNCTION 14135191a FUN_14135191a body=1604 status=ok
// SIG undefined FUN_14135191a(void)

undefined8 * FUN_14135191a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (param_1 == param_2) {
    FUN_140bee9ec(param_1 + 0xe,param_2 + 0xe);
    uVar10 = param_2[0x11];
    uVar11 = param_2[0x12];
    uVar12 = param_2[0x13];
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = uVar10;
    param_1[0x12] = uVar11;
    param_1[0x13] = uVar12;
    *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  }
  else {
    iVar1 = *(int *)(param_2 + 1);
    pvVar2 = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
      }
    }
    iVar1 = *(int *)(param_2 + 3);
    pvVar2 = (void *)param_2[2];
    *(int *)(param_1 + 3) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x1c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 2,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
      }
    }
    iVar1 = *(int *)(param_2 + 5);
    pvVar2 = (void *)param_2[4];
    *(int *)(param_1 + 5) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x2c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 4,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
      }
    }
    iVar1 = *(int *)(param_2 + 7);
    pvVar2 = (void *)param_2[6];
    *(int *)(param_1 + 7) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x3c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 6,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[6],pvVar2,(longlong)iVar1 * 2);
      }
    }
    iVar1 = *(int *)(param_2 + 9);
    pvVar2 = (void *)param_2[8];
    *(int *)(param_1 + 9) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x4c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 8,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[8],pvVar2,(longlong)iVar1 * 2);
      }
    }
    iVar1 = *(int *)(param_2 + 0xb);
    pvVar2 = (void *)param_2[10];
    *(int *)(param_1 + 0xb) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x5c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 10,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[10],pvVar2,(longlong)iVar1 * 2);
      }
    }
    iVar1 = *(int *)(param_2 + 0xd);
    pvVar2 = (void *)param_2[0xc];
    *(int *)(param_1 + 0xd) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x6c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 0xc,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[0xc],pvVar2,(longlong)iVar1 * 2);
      }
    }
    FUN_140bee9ec(param_1 + 0xe,param_2 + 0xe);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x84);
    uVar4 = *(undefined4 *)(param_2 + 0x11);
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x8c);
    uVar6 = *(undefined4 *)(param_2 + 0x12);
    uVar7 = *(undefined4 *)((longlong)param_2 + 0x94);
    uVar8 = *(undefined4 *)(param_2 + 0x13);
    uVar9 = *(undefined4 *)((longlong)param_2 + 0x9c);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
    *(undefined4 *)(param_1 + 0x11) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x8c) = uVar5;
    *(undefined4 *)(param_1 + 0x12) = uVar6;
    *(undefined4 *)((longlong)param_1 + 0x94) = uVar7;
    *(undefined4 *)(param_1 + 0x13) = uVar8;
    *(undefined4 *)((longlong)param_1 + 0x9c) = uVar9;
    *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
    iVar1 = *(int *)(param_2 + 0x16);
    pvVar2 = (void *)param_2[0x15];
    *(int *)(param_1 + 0x16) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xb4) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 0x15,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[0x15],pvVar2,(longlong)iVar1 * 2);
      }
    }
    iVar1 = *(int *)(param_2 + 0x18);
    pvVar2 = (void *)param_2[0x17];
    *(int *)(param_1 + 0x18) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc4) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 0x17,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[0x17],pvVar2,(longlong)iVar1 * 2);
      }
    }
    iVar1 = *(int *)(param_2 + 0x1a);
    pvVar2 = (void *)param_2[0x19];
    *(int *)(param_1 + 0x1a) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xd4) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 0x19,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[0x19],pvVar2,(longlong)iVar1 * 2);
      }
    }
    iVar1 = *(int *)(param_2 + 0x1c);
    pvVar2 = (void *)param_2[0x1b];
    *(int *)(param_1 + 0x1c) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xe4) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 0x1b,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[0x1b],pvVar2,(longlong)iVar1 * 2);
      }
    }
    iVar1 = *(int *)(param_2 + 0x1e);
    pvVar2 = (void *)param_2[0x1d];
    *(int *)(param_1 + 0x1e) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xf4) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 0x1d,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[0x1d],pvVar2,(longlong)iVar1 * 2);
      }
    }
    iVar1 = *(int *)(param_2 + 0x20);
    pvVar2 = (void *)param_2[0x1f];
    *(int *)(param_1 + 0x20) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x104) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x104) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 0x1f,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[0x1f],pvVar2,(longlong)iVar1 * 2);
      }
    }
    iVar1 = *(int *)(param_2 + 0x22);
    pvVar2 = (void *)param_2[0x21];
    *(int *)(param_1 + 0x22) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x114) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x114) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 0x21,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[0x21],pvVar2,(longlong)iVar1 * 2);
      }
    }
    iVar1 = *(int *)(param_2 + 0x24);
    pvVar2 = (void *)param_2[0x23];
    *(int *)(param_1 + 0x24) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x124) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x124) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 0x23,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[0x23],pvVar2,(longlong)iVar1 * 2);
      }
    }
    iVar1 = *(int *)(param_2 + 0x26);
    pvVar2 = (void *)param_2[0x25];
    *(int *)(param_1 + 0x26) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x134) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x134) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 0x25,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[0x25],pvVar2,(longlong)iVar1 * 2);
      }
    }
    iVar1 = *(int *)(param_2 + 0x28);
    pvVar2 = (void *)param_2[0x27];
    *(int *)(param_1 + 0x28) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x144) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x144) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 0x27,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[0x27],pvVar2,(longlong)iVar1 * 2);
      }
    }
    iVar1 = *(int *)(param_2 + 0x2a);
    pvVar2 = (void *)param_2[0x29];
    *(int *)(param_1 + 0x2a) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x154) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x154) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 0x29,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[0x29],pvVar2,(longlong)iVar1 * 2);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)(param_2 + 0x2b);
  *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)(param_2 + 0x2e);
  FUN_1413511f6(param_1 + 0x2f,param_2 + 0x2f);
  uVar10 = param_2[0x4b];
  param_1[0x4a] = param_2[0x4a];
  param_1[0x4b] = uVar10;
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  return param_1;
}



// FUNCTION 141351f5e FUN_141351f5e body=753 status=ok
// SIG undefined FUN_141351f5e(void)

void FUN_141351f5e(longlong *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  undefined1 *puVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  ulonglong local_b0;
  longlong local_a8;
  PSRWLOCK local_a0;
  undefined1 local_98 [64];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar5 = (longlong *)FUN_141352250();
  lVar12 = *plVar5;
  local_a0 = (PSRWLOCK)(lVar12 + 0x1478);
  AcquireSRWLockShared(local_a0);
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1000000000;
  uVar3 = *(uint *)((longlong)param_1 + 0xbb4);
  if ((ulonglong)uVar3 != 0) {
    lVar16 = 0;
    do {
      uVar10 = local_50;
      iVar15 = *(int *)(lVar12 + 0x58 + lVar16);
      if (iVar15 != -1) {
        lVar9 = (longlong)(int)local_50;
        uVar6 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar6);
        if (local_50._4_4_ < uVar6) {
          FUN_148eee6ea(local_98,uVar10 & 0xffffffff);
          iVar15 = *(int *)(lVar12 + 0x58 + lVar16);
        }
        puVar7 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar7 = local_98;
        }
        *(int *)(puVar7 + lVar9 * 4) = iVar15;
      }
      lVar16 = lVar16 + 0x68;
    } while ((ulonglong)uVar3 * 0x68 - lVar16 != 0);
    uVar10 = (ulonglong)*(uint *)((longlong)param_1 + 0xbb4);
    if (uVar10 != 0) {
      uVar14 = 0;
      local_b8 = param_1;
      local_b0 = uVar10;
      local_a8 = lVar12;
      do {
        if ((*(byte *)(param_1[0x16c] + 0x9d + uVar14 * 0x280) & 4) == 0) {
          lVar16 = param_1[0x16c] + uVar14 * 0x280;
          if (*(int *)(lVar16 + 0x254) != -1) {
            plVar5 = (longlong *)(**(code **)(*param_1 + 0x120))(param_1);
            if ((longlong)(int)plVar5[1] != 0) {
              lVar9 = *plVar5;
              lVar8 = (longlong)(int)plVar5[1] * 0x430;
              do {
                if (*(int *)(lVar9 + 8) == *(int *)(lVar16 + 0x254)) {
                  if ((lVar9 != 0) && (bVar17 = true, (*(byte *)(lVar9 + 0x18) & 1) == 0))
                  goto LAB_1413520ab;
                  break;
                }
                lVar9 = lVar9 + 0x430;
                lVar8 = lVar8 + -0x430;
              } while (lVar8 != 0);
            }
          }
          if ((longlong)(int)param_1[0x83] == 0) {
            lVar9 = 0;
          }
          else {
            lVar9 = param_1[0x82];
            lVar8 = (longlong)(int)param_1[0x83] * 0x430 + lVar9;
            puVar7 = local_58;
            if (local_58 == (undefined1 *)0x0) {
              puVar7 = local_98;
            }
            lVar13 = uVar14 * 0x68 + lVar12;
            do {
              uVar10 = local_b0;
              lVar12 = local_a8;
              param_1 = local_b8;
              if ((*(byte *)(lVar9 + 0x18) & 1) == 0) {
                iVar15 = *(int *)(lVar9 + 0xf8);
                iVar4 = *(int *)(lVar13 + 0x38);
                if (iVar15 == iVar4) {
                  if (1 < iVar15) {
                    lVar11 = 0;
                    while( true ) {
                      uVar1 = *(ushort *)(*(longlong *)(lVar9 + 0xf0) + lVar11);
                      uVar2 = *(ushort *)(*(longlong *)(lVar13 + 0x30) + lVar11);
                      if (uVar1 != uVar2) break;
                      if (uVar1 == 0) goto LAB_141352199;
LAB_141352169:
                      lVar11 = lVar11 + 2;
                    }
                    if ((uVar2 | uVar1) < 0x80) {
                      if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[(uint)uVar2])
                      goto LAB_141352169;
                      iVar15 = (uint)(byte)(&DAT_149e05da0)[uVar1] -
                               (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
                    }
                    else {
                      iVar15 = (uint)uVar1 - (uint)uVar2;
                    }
                    if (iVar15 != 0) goto LAB_141352134;
                  }
                }
                else if (iVar4 + iVar15 != 1) goto LAB_141352134;
LAB_141352199:
                if ((int)local_50 == 0) goto LAB_1413521cb;
                lVar11 = 0;
                while (*(int *)(puVar7 + lVar11) != *(int *)(lVar9 + 8)) {
                  lVar11 = lVar11 + 4;
                  if ((longlong)(int)local_50 << 2 == lVar11) goto LAB_1413521cb;
                }
              }
LAB_141352134:
              lVar9 = lVar9 + 0x430;
            } while (lVar9 != lVar8);
            lVar9 = 0;
          }
LAB_1413521cb:
          bVar17 = lVar9 != 0;
LAB_1413520ab:
          *(byte *)(lVar16 + 0x9d) = *(byte *)(lVar16 + 0x9d) & 0xfe | bVar17;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 != uVar10);
    }
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  ReleaseSRWLockShared(local_a0);
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141352250 FUN_141352250 body=120 status=ok
// SIG undefined FUN_141352250(void)

longlong FUN_141352250(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448d5e3c(&local_28,param_1 + 0x70);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28 + 0x1f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413522ca FUN_1413522ca body=900 status=ok
// SIG undefined FUN_1413522ca(void)

void FUN_1413522ca(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  code *pcVar2;
  ushort *puVar3;
  char cVar4;
  byte bVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined **local_c8;
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
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  longlong local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_141352cc6(param_2,&local_58,param_1);
  iVar1 = *(int *)((longlong)param_1 + 0x40c);
  FUN_1412d6a39(param_1[0x80],(int)param_1[0x81]);
  *(undefined4 *)(param_1 + 0x81) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0x40c) != 0)) {
    FUN_148e9a4d0(param_1 + 0x80,0);
  }
  local_c0 = 0;
  uStack_b8 = 0;
  local_c8 = &PTR_FUN_14b895f80;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  plVar6 = (longlong *)FUN_145917192(param_1);
  lVar10 = *plVar6;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar10 + 0x58));
  *(int *)(lVar10 + 0x50) = *(int *)(lVar10 + 0x50) + 1;
  (**(code **)(*param_1 + 0xa8))(param_1,&local_138);
  lVar7 = FUN_145917130(lVar10,&local_138);
  if (local_138 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar10 + 0x58));
  if (lVar7 != 0) {
    FUN_148e1aee4(lVar7,&local_58);
    FUN_148eddec8(&local_c8,lVar7);
  }
  uVar8 = (ulonglong)local_50;
  if (uVar8 != 0) {
    lVar10 = 0;
    do {
      lVar12 = local_58 + lVar10;
      lVar7 = FUN_141352650(param_1 + 0x80);
      FUN_141352d9a(lVar7,lVar12);
      pcVar2 = (code *)param_1[0x162];
      if (pcVar2 != (code *)0x0) {
        plVar6 = param_1 + 0x166;
        if ((longlong *)param_1[0x164] != (longlong *)0x0) {
          plVar6 = (longlong *)param_1[0x164];
        }
        uVar9 = (**(code **)(*plVar6 + 8))();
        (*pcVar2)(uVar9,lVar7,lVar12);
      }
      cVar4 = FUN_141352880(&local_c8,lVar7);
      *(byte *)(lVar7 + 0x9d) = *(byte *)(lVar7 + 0x9d) & 0x7f | (cVar4 == '\0') << 7;
      lVar10 = lVar10 + 0x430;
    } while (uVar8 * 0x430 - lVar10 != 0);
  }
  if ((longlong)(int)param_1[0x22] != 0) {
    lVar10 = param_1[0x21];
    lVar7 = (longlong)(int)param_1[0x22] * 0x90 + lVar10;
    do {
      if ((*(byte *)(lVar10 + 0x89) & 1) != 0) {
        bVar5 = *(byte *)(lVar10 + 0x88) & 0xbf;
        *(byte *)(lVar10 + 0x88) = bVar5;
        if ((longlong)*(int *)(lVar10 + 0x78) != 0) {
          lVar12 = 0;
          do {
            uVar11 = (uint)*(undefined8 *)(*(longlong *)(lVar10 + 0x70) + lVar12);
            if ((-1 < (int)uVar11) && ((int)uVar11 < (int)param_1[0x22])) {
              bVar5 = bVar5 | *(byte *)(param_1[0x21] + 0x88 +
                                       (ulonglong)(uVar11 & 0x7fffffff) * 0x90) & 0x40;
              *(byte *)(lVar10 + 0x88) = bVar5;
            }
            lVar12 = lVar12 + 8;
          } while ((longlong)*(int *)(lVar10 + 0x78) * 8 != lVar12);
        }
      }
      lVar10 = lVar10 + 0x90;
    } while (lVar10 != lVar7);
  }
  local_130 = 0;
  uStack_128 = 0;
  local_138 = &PTR_FUN_14b895f80;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  bVar5 = FUN_14591720c(&local_c8,&local_138);
  *(byte *)((longlong)param_1 + 0x119) = bVar5 ^ 1;
  FUN_14591706c(&local_138);
  *(undefined1 *)(param_1 + 0x73) = 1;
  puVar3 = (ushort *)param_1[0x10];
  if (puVar3 != (ushort *)0x0) {
    *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(param_1 + 0xf) & 0x3f));
  }
  FUN_14591706c(&local_c8);
  FUN_141286eab(local_58,local_50);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141352650 FUN_141352650 body=69 status=ok
// SIG undefined FUN_141352650(void)

longlong FUN_141352650(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14591741c(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x268 + *param_1;
  FUN_141352695(lVar2,1);
  return lVar2;
}



// FUNCTION 141352695 FUN_141352695 body=41 status=ok
// SIG undefined FUN_141352695(void)

void FUN_141352695(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1413526be(param_1);
    param_1 = param_1 + 0x268;
  }
  return;
}



// FUNCTION 1413526be FUN_1413526be body=449 status=ok
// SIG undefined FUN_1413526be(void)

longlong FUN_1413526be(longlong param_1)

{
  FUN_140056680(param_1,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x10,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x20,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x30,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x40,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x50,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x60,&DAT_149dfb77a);
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(byte *)(param_1 + 0xa0) = *(byte *)(param_1 + 0xa0) | 1;
  FUN_140056680(param_1 + 0xa8,&DAT_149e62e78);
  FUN_140056680(param_1 + 0xb8,&DAT_149dfb77a);
  FUN_140056680(param_1 + 200,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0xd8,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0xe8,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0xf8,&DAT_149dfb77a);
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  FUN_140056680(param_1 + 0x108,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x118,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x128,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x138,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x148,&DAT_149dfb77a);
  *(undefined4 *)(param_1 + 0x158) = 0xffffffff;
  FUN_140056680(param_1 + 0x160);
  *(undefined4 *)(param_1 + 0x170) = 0;
  memset((void *)(param_1 + 0x178),0,0xd8);
  FUN_140c5455a((void *)(param_1 + 0x178));
  *(undefined8 *)(param_1 + 0x250) = 0xffffffff00000000;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined4 *)(param_1 + 0x260) = 0;
  return param_1;
}



// FUNCTION 141352880 FUN_141352880 body=1033 status=ok
// SIG undefined FUN_141352880(void)

ulonglong FUN_141352880(undefined **param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  longlong lVar11;
  byte bVar12;
  undefined8 unaff_RSI;
  undefined7 uVar14;
  ulonglong uVar13;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  uint uVar19;
  longlong lVar20;
  bool bVar21;
  undefined1 auStack_198 [32];
  undefined ***local_178;
  undefined **local_170;
  undefined **local_168 [32];
  undefined ***local_68;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if ((*(byte *)(param_2 + 0x9c) & 1) == 0) {
    uVar14 = (undefined7)((ulonglong)unaff_RSI >> 8);
    bVar12 = 1;
    cVar2 = '\x01';
    if (*(int *)(param_1 + 4) != 0) {
      cVar2 = FUN_144a23846(param_1 + 3,param_2 + 0x20);
    }
    if (*(int *)(param_1 + 8) != 0) {
      cVar4 = FUN_144a23846(param_1 + 7,param_2 + 0x40);
      if (cVar4 == '\0') {
        if ((longlong)*(int *)(param_2 + 0x78) == 0) {
          bVar12 = 0;
          uVar14 = 0;
        }
        else {
          lVar11 = *(longlong *)(param_2 + 0x70);
          lVar20 = (longlong)*(int *)(param_2 + 0x78) << 4;
          bVar12 = 0;
          do {
            bVar3 = FUN_144a23846(param_1 + 7,lVar11);
            bVar12 = bVar12 | bVar3;
            uVar14 = 0;
            lVar11 = lVar11 + 0x10;
            lVar20 = lVar20 + -0x10;
          } while (lVar20 != 0);
        }
      }
    }
    bVar5 = 1;
    bVar3 = 1;
    if (*(int *)(param_1 + 0xc) != 0) {
      bVar3 = FUN_144a23846(param_1 + 0xb,param_2 + 0x30);
    }
    if (*(int *)(param_1 + 10) != 0) {
      cVar4 = FUN_144a23846(param_1 + 9,param_2 + 0xb8);
      if (cVar4 == '\0') {
        bVar5 = FUN_144a23846(param_1 + 9,param_2 + 200);
      }
    }
    local_68 = (undefined ***)0x0;
    local_58 = 0x400000000;
    bVar18 = *(byte *)(param_1 + 0xd);
    bVar21 = (bVar18 & 4) != 0;
    if (bVar21) {
      local_58 = 0x400000001;
      local_168[0] = (undefined **)&LAB_148e9a540;
      local_168[2] = (undefined **)0x0;
      local_168[4] = &PTR_LAB_14b9c7360;
      local_168[5] = (undefined **)&LAB_144323886;
    }
    uVar8 = (uint)bVar21;
    if ((bVar18 & 8) != 0) {
      uVar8 = uVar8 + 1;
      local_58 = CONCAT44(local_58._4_4_,uVar8);
      uVar13 = (ulonglong)bVar21;
      local_168[uVar13 * 8] = (undefined **)&LAB_148e9a540;
      local_168[uVar13 * 8 + 2] = (undefined **)0x0;
      local_168[uVar13 * 8 + 4] = &PTR_LAB_14b9c7360;
      local_168[uVar13 * 8 + 5] = (undefined **)&LAB_144323892;
    }
    uVar19 = uVar8;
    if ((bVar18 & 0x10) != 0) {
      uVar19 = uVar8 + 1;
      local_58 = CONCAT44(local_58._4_4_,uVar19);
      uVar13 = (ulonglong)(uVar8 << 6);
      *(undefined1 **)((longlong)local_168 + uVar13) = &LAB_148e9a540;
      *(undefined8 *)((longlong)local_168 + uVar13 + 0x10) = 0;
      *(undefined ***)((longlong)local_168 + uVar13 + 0x20) = &PTR_LAB_14b9c7360;
      *(undefined1 **)((longlong)local_168 + uVar13 + 0x28) = &LAB_14432389e;
      bVar18 = *(byte *)(param_1 + 0xd);
    }
    if ((bVar18 & 0x20) != 0) {
      local_58 = CONCAT44(local_58._4_4_,uVar19 + 1);
      if (local_58._4_4_ < uVar19 + 1) {
        FUN_148eedd86(local_168,uVar19);
      }
      pppuVar9 = local_68;
      if (local_68 == (undefined ***)0x0) {
        pppuVar9 = local_168;
      }
      lVar11 = (longlong)(int)uVar19;
      pppuVar9[lVar11 * 8] = (undefined **)FUN_1443238aa;
      pppuVar9[lVar11 * 8 + 2] = (undefined **)0x0;
      pppuVar9[lVar11 * 8 + 4] = &PTR_LAB_14b9d89e0;
      pppuVar9[lVar11 * 8 + 5] = param_1;
      uVar19 = (uint)local_58;
    }
    bVar18 = 1;
    if (uVar19 != 0) {
      pppuVar9 = local_68;
      if (local_68 == (undefined ***)0x0) {
        pppuVar9 = local_168;
      }
      local_178 = pppuVar9 + (longlong)(int)uVar19 * 8;
      bVar18 = 0;
      do {
        local_170 = *pppuVar9;
        pppuVar10 = pppuVar9 + 4;
        if ((undefined ***)pppuVar9[2] != (undefined ***)0x0) {
          pppuVar10 = (undefined ***)pppuVar9[2];
        }
        uVar7 = (*(code *)(*pppuVar10)[1])();
        bVar6 = (*(code *)local_170)(uVar7,param_2);
        bVar18 = bVar18 | bVar6;
        pppuVar9 = pppuVar9 + 8;
      } while (pppuVar9 != local_178);
      bVar18 = bVar18 & 1;
    }
    if (cVar2 == '\0') {
      uVar13 = 0;
    }
    else {
      bVar6 = *(byte *)(param_1 + 0xd);
      bVar1 = *(byte *)(param_2 + 0x9c);
      bVar16 = bVar1 >> 3;
      if ((bVar6 & 2) == 0) {
        bVar16 = 1;
      }
      bVar15 = *(byte *)(param_2 + 0x9d) >> 5;
      if ((bVar6 & 1) == 0) {
        bVar15 = 1;
      }
      bVar17 = bVar1 >> 1;
      if ((bVar6 & 0x40) == 0) {
        bVar17 = 1;
      }
      uVar13 = CONCAT71(uVar14,bVar12 & bVar3 & bVar5 & ((bVar1 & 2) == 0 || -1 < (char)bVar6) &
                               (bVar17 & bVar16 & bVar15 & bVar18) != 0);
    }
    pppuVar9 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar9 = local_168;
    }
    FUN_141352c8a(pppuVar9,local_58 & 0xffffffff);
    if (local_68 != (undefined ***)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    uVar13 = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13 & 0xffffffff;
}



// FUNCTION 141352c8a FUN_141352c8a body=60 status=ok
// SIG undefined FUN_141352c8a(void)

void FUN_141352c8a(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x20);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141352cc6 FUN_141352cc6 body=211 status=ok
// SIG undefined FUN_141352cc6(void)

longlong * FUN_141352cc6(longlong *param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  *param_2 = 0;
  param_2[1] = 0;
  if ((longlong)(int)param_1[1] != 0) {
    lVar6 = *param_1;
    lVar9 = (longlong)(int)param_1[1] * 0x430 + lVar6;
    do {
      if ((longlong)*(int *)(param_3 + 0xae0) != 0) {
        lVar8 = (longlong)*(int *)(param_3 + 0xae0) << 6;
        plVar7 = (longlong *)(*(longlong *)(param_3 + 0xad8) + 0x20);
        do {
          pcVar2 = (code *)plVar7[-4];
          if (pcVar2 != (code *)0x0) {
            plVar5 = (longlong *)plVar7[-2];
            if ((longlong *)plVar7[-2] == (longlong *)0x0) {
              plVar5 = plVar7;
            }
            uVar4 = (**(code **)(*plVar5 + 8))();
            cVar3 = (*pcVar2)(uVar4,lVar6);
            if (cVar3 == '\0') goto LAB_141352d6b;
          }
          plVar7 = plVar7 + 8;
          lVar8 = lVar8 + -0x40;
        } while (lVar8 != 0);
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_145917388(param_2,iVar1);
      }
      FUN_1413505e4((longlong)iVar1 * 0x430 + *param_2,lVar6);
LAB_141352d6b:
      lVar6 = lVar6 + 0x430;
    } while (lVar6 != lVar9);
  }
  return param_2;
}



// FUNCTION 141352d9a FUN_141352d9a body=2358 status=ok
// SIG undefined FUN_141352d9a(void)

void FUN_141352d9a(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  code *pcVar7;
  byte bVar8;
  char cVar9;
  byte bVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong *plVar14;
  byte bVar15;
  byte bVar16;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *plStack_60;
  longlong *local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((undefined8 *)(param_2 + 0xb8) != param_1) {
    iVar4 = *(int *)(param_2 + 0xc0);
    pvVar6 = *(void **)(param_2 + 0xb8);
    *(int *)(param_1 + 1) = iVar4;
    if (iVar4 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_1,iVar4);
      if (iVar4 != 0) {
        memcpy((void *)*param_1,pvVar6,(longlong)iVar4 * 2);
      }
    }
  }
  puVar1 = param_1 + 2;
  if (puVar1 != (undefined8 *)(param_2 + 0xd0)) {
    iVar4 = *(int *)(param_2 + 0xd8);
    pvVar6 = *(void **)(param_2 + 0xd0);
    *(int *)(param_1 + 3) = iVar4;
    if (iVar4 == 0 && *(int *)((longlong)param_1 + 0x1c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    }
    else {
      FUN_1446dd670(puVar1,iVar4);
      if (iVar4 != 0) {
        memcpy((void *)*puVar1,pvVar6,(longlong)iVar4 * 2);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x4a) = *(undefined4 *)(param_2 + 0x208);
  *(undefined4 *)((longlong)param_1 + 0x254) = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0x25c) = *(undefined8 *)(param_2 + 0x20);
  puVar1 = param_1 + 8;
  if (puVar1 != (undefined8 *)(param_2 + 0xf0)) {
    iVar4 = *(int *)(param_2 + 0xf8);
    pvVar6 = *(void **)(param_2 + 0xf0);
    *(int *)(param_1 + 9) = iVar4;
    if (iVar4 == 0 && *(int *)((longlong)param_1 + 0x4c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
    }
    else {
      FUN_1446dd670(puVar1,iVar4);
      if (iVar4 != 0) {
        memcpy((void *)*puVar1,pvVar6,(longlong)iVar4 * 2);
      }
    }
  }
  puVar1 = param_1 + 10;
  if (puVar1 != (undefined8 *)(param_2 + 0x80)) {
    iVar4 = *(int *)(param_2 + 0x88);
    pvVar6 = *(void **)(param_2 + 0x80);
    *(int *)(param_1 + 0xb) = iVar4;
    if (iVar4 == 0 && *(int *)((longlong)param_1 + 0x5c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
    }
    else {
      FUN_1446dd670(puVar1,iVar4);
      if (iVar4 != 0) {
        memcpy((void *)*puVar1,pvVar6,(longlong)iVar4 * 2);
      }
    }
  }
  puVar1 = param_1 + 0x15;
  if (puVar1 != (undefined8 *)(param_2 + 0x1d8)) {
    iVar4 = *(int *)(param_2 + 0x1e0);
    pvVar6 = *(void **)(param_2 + 0x1d8);
    *(int *)(param_1 + 0x16) = iVar4;
    if (iVar4 == 0 && *(int *)((longlong)param_1 + 0xb4) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
    }
    else {
      FUN_1446dd670(puVar1,iVar4);
      if (iVar4 != 0) {
        memcpy((void *)*puVar1,pvVar6,(longlong)iVar4 * 2);
      }
    }
  }
  *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) & 0xfe | *(byte *)(param_2 + 0x1d0);
  puVar1 = param_1 + 4;
  if (puVar1 != (undefined8 *)(param_2 + 0x120)) {
    iVar4 = *(int *)(param_2 + 0x128);
    pvVar6 = *(void **)(param_2 + 0x120);
    *(int *)(param_1 + 5) = iVar4;
    if (iVar4 == 0 && *(int *)((longlong)param_1 + 0x2c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    }
    else {
      FUN_1446dd670(puVar1,iVar4);
      if (iVar4 != 0) {
        memcpy((void *)*puVar1,pvVar6,(longlong)iVar4 * 2);
      }
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x138);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0xb0);
  uVar5 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x11) = uVar5;
  local_68 = 0;
  plStack_60 = (longlong *)0x0;
  FUN_1413a454c(&local_50,uVar5,0);
  plVar14 = local_50;
  if (*(code **)(*local_50 + 0x50) != FUN_144828418) {
    plVar14 = (longlong *)(**(code **)(*local_50 + 0x50))();
  }
  FUN_1447a1fc0(plVar14);
  pcVar7 = *(code **)(*local_50 + 0x28);
  if (pcVar7 == FUN_14482841c) {
    plVar14 = local_50 + 3;
    if (local_50[5] != 0) {
      plVar14 = (longlong *)(local_50[5] + 8);
    }
  }
  else if (pcVar7 == (code *)&LAB_14010c34c) {
    plVar14 = local_50 + 2;
  }
  else {
    plVar14 = (longlong *)(*pcVar7)(local_50);
  }
  plVar2 = param_1 + 0xc;
  if (plVar2 != plVar14) {
    iVar4 = (int)plVar14[1];
    pvVar6 = (void *)*plVar14;
    *(int *)(param_1 + 0xd) = iVar4;
    if (iVar4 == 0 && *(int *)((longlong)param_1 + 0x6c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
    }
    else {
      FUN_1446dd670(plVar2);
      if (iVar4 != 0) {
        memcpy((void *)*plVar2,pvVar6,(longlong)iVar4 * 2);
      }
    }
  }
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  plVar14 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_60 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar3 = (int *)((longlong)plVar14 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)(param_2 + 0x44);
  puVar1 = param_1 + 6;
  if (puVar1 != (undefined8 *)(param_2 + 0x170)) {
    iVar4 = *(int *)(param_2 + 0x178);
    pvVar6 = *(void **)(param_2 + 0x170);
    *(int *)(param_1 + 7) = iVar4;
    if (iVar4 == 0 && *(int *)((longlong)param_1 + 0x3c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
    }
    else {
      FUN_1446dd670(puVar1);
      if (iVar4 != 0) {
        memcpy((void *)*puVar1,pvVar6,(longlong)iVar4 * 2);
      }
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)(param_2 + 0x188);
  puVar1 = param_1 + 0x17;
  if (puVar1 != (undefined8 *)(param_2 + 400)) {
    iVar4 = *(int *)(param_2 + 0x198);
    pvVar6 = *(void **)(param_2 + 400);
    *(int *)(param_1 + 0x18) = iVar4;
    if (iVar4 == 0 && *(int *)((longlong)param_1 + 0xc4) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
    }
    else {
      FUN_1446dd670(puVar1);
      if (iVar4 != 0) {
        memcpy((void *)*puVar1,pvVar6,(longlong)iVar4 * 2);
      }
    }
  }
  puVar1 = param_1 + 0x19;
  if (puVar1 != (undefined8 *)(param_2 + 0x1a8)) {
    iVar4 = *(int *)(param_2 + 0x1b0);
    pvVar6 = *(void **)(param_2 + 0x1a8);
    *(int *)(param_1 + 0x1a) = iVar4;
    if (iVar4 == 0 && *(int *)((longlong)param_1 + 0xd4) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
    }
    else {
      FUN_1446dd670(puVar1);
      if (iVar4 != 0) {
        memcpy((void *)*puVar1,pvVar6,(longlong)iVar4 * 2);
      }
    }
  }
  bVar15 = *(byte *)((longlong)param_1 + 0x9e) & 0xfb | *(char *)(param_2 + 0x1c0) << 2;
  *(byte *)((longlong)param_1 + 0x9e) = bVar15;
  *(byte *)((longlong)param_1 + 0x9e) = bVar15 & 0xf7 | *(char *)(param_2 + 0x1c8) << 3;
  bVar15 = *(byte *)(param_2 + 0x3d8) ^ 1;
  if (*(int *)(param_2 + 8) != -1) {
    bVar15 = 0;
  }
  bVar15 = *(byte *)((longlong)param_1 + 0x9c) & 0xfe | bVar15;
  *(byte *)((longlong)param_1 + 0x9c) = bVar15;
  bVar8 = *(char *)(param_2 + 0x10) * '\x02' & 2;
  *(byte *)((longlong)param_1 + 0x9c) = bVar15 & 0xfd | bVar8;
  bVar15 = bVar15 & 0xf9 | bVar8 | *(char *)(param_2 + 0xe8) << 2;
  *(byte *)((longlong)param_1 + 0x9c) = bVar15;
  cVar9 = FUN_141353716(param_2);
  bVar16 = bVar15 & 0xf7 | cVar9 << 3;
  *(byte *)((longlong)param_1 + 0x9c) = bVar16;
  bVar15 = (*(byte *)(param_2 + 0x18) & 4) << 2;
  *(byte *)((longlong)param_1 + 0x9c) = bVar16 & 0xef | bVar15;
  bVar8 = (*(byte *)(param_2 + 0x18) & 2) << 4;
  *(byte *)((longlong)param_1 + 0x9c) = bVar16 & 0xcf | bVar15 | bVar8;
  bVar10 = (*(byte *)(param_2 + 0x18) & 8) << 3;
  *(byte *)((longlong)param_1 + 0x9c) = bVar16 & 0x8f | bVar15 | bVar8 | bVar10;
  *(byte *)((longlong)param_1 + 0x9c) =
       bVar16 & 0xf | bVar15 | bVar8 | bVar10 | ((*(byte *)(param_2 + 0x18) & 0xf0) != 0) << 7;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (*(int *)((longlong)param_1 + 0xf4) != 0) {
    FUN_1446f8c06(param_1 + 0x1d);
  }
  uVar11 = *(uint *)(param_2 + 0x18);
  if (((((uVar11 & 0x10) != 0) || ((uVar11 & 0x20) != 0)) || ((uVar11 & 0x40) != 0)) ||
     ((char)uVar11 < '\0')) {
    FUN_144a787a6(param_1 + 0x1d);
    uVar11 = *(uint *)(param_2 + 0x18);
  }
  bVar15 = *(byte *)(param_2 + 0x3d8) ^ 1;
  if ((uVar11 & 1) != 0) {
    bVar15 = 0;
  }
  bVar15 = *(byte *)((longlong)param_1 + 0x9d) & 0xfe | bVar15;
  *(byte *)((longlong)param_1 + 0x9d) = bVar15;
  bVar8 = *(byte *)((longlong)param_1 + 0x9e) & 0xbf;
  *(byte *)((longlong)param_1 + 0x9e) = bVar8;
  bVar10 = 4;
  if ((*(char *)(param_2 + 0x400) == '\0') && (*(char *)(param_2 + 0x408) == '\0')) {
    bVar10 = *(char *)(param_2 + 0x3f8) << 2;
  }
  bVar10 = bVar15 & 0xfb | bVar10;
  *(byte *)((longlong)param_1 + 0x9d) = bVar10;
  bVar10 = bVar10 & 0xf7 | *(char *)(param_2 + 0x3f8) << 3;
  *(byte *)((longlong)param_1 + 0x9d) = bVar10;
  bVar15 = *(byte *)((longlong)param_1 + 0x9f) & 0xbf | *(char *)(param_2 + 0x400) << 6;
  *(byte *)((longlong)param_1 + 0x9f) = bVar15;
  *(byte *)((longlong)param_1 + 0x9f) = bVar15 & 0x7f | *(char *)(param_2 + 0x408) << 7;
  *(byte *)((longlong)param_1 + 0x9d) = bVar10 & 0xef;
  *(byte *)((longlong)param_1 + 0x9e) = bVar8 | 0x80;
  cVar9 = FUN_1413536d2(param_2);
  *(byte *)((longlong)param_1 + 0x9d) = bVar10 & 0xcf | cVar9 << 5;
  lVar12 = FUN_140b47a16(param_2 + 0x218,&DAT_14cbcb7b0);
  if ((lVar12 == 0) || (*(char *)(lVar12 + 8) != '\0')) {
    bVar15 = *(byte *)((longlong)param_1 + 0x9f);
  }
  else {
    bVar15 = *(byte *)((longlong)param_1 + 0x9f);
    if (*(longlong *)(lVar12 + 0x28) != 0) {
      bVar8 = 0x10;
      goto LAB_141353478;
    }
  }
  bVar8 = 0;
LAB_141353478:
  *(byte *)((longlong)param_1 + 0x9f) = bVar15 & 0xef | bVar8;
  if ((*(byte *)((longlong)param_1 + 0x9c) & 1) == 0) {
    bVar15 = *(byte *)((longlong)param_1 + 0x9d);
    bVar8 = 0x40;
    if ((((*(byte *)((longlong)param_1 + 0x9c) & 8) == 0) && ((bVar15 & 0x20) == 0)) &&
       (*(int *)(param_1 + 0x18) < 2)) {
      bVar8 = (1 < *(int *)(param_1 + 0x1a)) << 6;
    }
  }
  else {
    bVar15 = *(byte *)((longlong)param_1 + 0x9d);
    bVar8 = 0;
  }
  *(byte *)((longlong)param_1 + 0x9d) = bVar15 & 0xbf | bVar8;
  FUN_140bee9ec(param_1 + 0xe,param_2 + 0x50);
  *(byte *)((longlong)param_1 + 0x9f) =
       *(byte *)((longlong)param_1 + 0x9f) & 0xdf | *(char *)(param_2 + 0x3d8) << 5;
  FUN_1413511f6(param_1 + 0x2f,param_2 + 0x2f8);
  if ((*(byte *)((longlong)param_1 + 0x9f) & 0x20) == 0) {
    FUN_14020fad6(param_1 + 0x21,&DAT_149dfb77a);
    FUN_14020fad6(param_1 + 0x23,&DAT_149dfb77a);
    bVar15 = *(byte *)((longlong)param_1 + 0x9f) & 0xfd;
  }
  else {
    uVar13 = FUN_1447a1f4a(param_1 + 0x3d);
    FUN_144a787a6(param_1 + 0x23,uVar13);
    bVar15 = *(byte *)((longlong)param_1 + 0x9f) | 2;
  }
  *(byte *)((longlong)param_1 + 0x9f) = bVar15;
  FUN_14135375c(param_2,&local_50);
  if ((longlong **)(param_1 + 0x1f) == &local_50) {
    if (local_50 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0x1f] != 0) {
      FUN_1400020a8();
    }
    param_1[0x1f] = local_50;
    *(undefined4 *)(param_1 + 0x20) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x104) = local_44;
  }
  *(undefined4 *)(param_1 + 0x4b) = 0;
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) & 0xcf;
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413536d2 FUN_1413536d2 body=68 status=ok
// SIG undefined FUN_1413536d2(void)

undefined8 FUN_1413536d2(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x418) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x410);
    lVar2 = (longlong)*(int *)(param_1 + 0x418) * 0x18;
    do {
      if ((*plVar1 != 0) && (*(char *)(*plVar1 + 0x18) == '\x04')) {
        if (plVar1 == (longlong *)0x0) {
          return 0;
        }
        return CONCAT71((int7)((ulonglong)plVar1 >> 8),(int)plVar1[2] != 0);
      }
      plVar1 = plVar1 + 3;
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0);
  }
  return 0;
}



// FUNCTION 141353716 FUN_141353716 body=70 status=ok
// SIG undefined FUN_141353716(void)

undefined8 FUN_141353716(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x418) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x410);
    lVar2 = (longlong)*(int *)(param_1 + 0x418) * 0x18;
    do {
      if ((*plVar1 != 0) && (*(char *)(*plVar1 + 0x18) == '\x05')) {
        if (plVar1 == (longlong *)0x0) {
          return 0;
        }
        return CONCAT71((int7)((ulonglong)plVar1 >> 8),(int)plVar1[2] != 0);
      }
      plVar1 = plVar1 + 3;
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0);
  }
  return 0;
}



// FUNCTION 14135375c FUN_14135375c body=299 status=ok
// SIG undefined FUN_14135375c(void)

longlong * FUN_14135375c(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((longlong)*(int *)(param_1 + 0x418) != 0) {
    plVar4 = *(longlong **)(param_1 + 0x410);
    lVar5 = (longlong)*(int *)(param_1 + 0x418) * 0x18;
    do {
      if ((*plVar4 != 0) && (*(char *)(*plVar4 + 0x18) == '\x04')) {
        if ((plVar4 != (longlong *)0x0) && ((longlong)(int)plVar4[2] != 0)) {
          lVar5 = 0;
          do {
            lVar2 = *(longlong *)(plVar4[1] + lVar5);
            if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x80) != 0)) {
              FUN_1400021e4(lVar2 + 0x80,&local_28);
              uVar3 = local_20 - 1;
              if (local_20 == 0) {
                uVar3 = 0;
              }
              if (0 < (int)uVar3) {
                uVar6 = 0;
                do {
                  uVar1 = *(ushort *)(local_28 + uVar6 * 2);
                  *(ushort *)(local_28 + uVar6 * 2) = (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
                  uVar6 = uVar6 + 1;
                } while (uVar3 != uVar6);
              }
              *param_2 = local_28;
              *(int *)(param_2 + 1) = local_20;
              *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
            }
            lVar5 = lVar5 + 0x60;
          } while ((longlong)(int)plVar4[2] * 0x60 != lVar5);
        }
        break;
      }
      plVar4 = plVar4 + 3;
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != 0);
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14135388e FUN_14135388e body=438 status=ok
// SIG undefined FUN_14135388e(void)

undefined8 * FUN_14135388e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 *puVar4;
  bool bVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  longlong *plVar9;
  void *_Src;
  bool bVar10;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar8 = *(int *)(param_1 + 0x340);
  if (iVar8 < 2) {
    plVar9 = *(longlong **)(param_1 + 0x68);
    bVar5 = true;
    if (plVar9 == (longlong *)0x0) {
LAB_141353957:
      plVar9 = (longlong *)0x0;
LAB_14135395d:
      local_48 = 0;
      uStack_40 = 0;
    }
    else {
      iVar8 = (int)plVar9[1];
      do {
        if (iVar8 == 0) goto LAB_141353957;
        LOCK();
        iVar6 = (int)plVar9[1];
        bVar10 = iVar8 == iVar6;
        if (bVar10) {
          *(int *)(plVar9 + 1) = iVar8 + 1;
          iVar6 = iVar8;
        }
        iVar8 = iVar6;
        UNLOCK();
      } while (!bVar10);
      lVar3 = *(longlong *)(param_1 + 0x60);
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar9 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
      if ((lVar3 == 0) || (lVar3 = *(longlong *)(lVar3 + 0x1a8), lVar3 == 0)) {
        bVar5 = false;
        goto LAB_14135395d;
      }
      puVar4 = *(undefined4 **)(lVar3 + 8);
      puVar7 = &DAT_14c9485f0;
      if (puVar4 != (undefined4 *)0x0) {
        puVar7 = puVar4;
      }
      local_48 = 0;
      uStack_40 = 0;
      FUN_1400b2348(puVar7,&local_48,1);
      bVar5 = false;
    }
    if ((longlong *)(param_1 + 0x338) == &local_48) {
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x338) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x338) = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 0x340) = (undefined4)uStack_40;
      *(undefined4 *)(param_1 + 0x344) = uStack_40._4_4_;
    }
    if (!bVar5) {
      LOCK();
      plVar1 = plVar9 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
    iVar8 = *(int *)(param_1 + 0x340);
    *param_2 = 0;
    _Src = *(void **)(param_1 + 0x338);
    *(int *)(param_2 + 1) = iVar8;
    if (iVar8 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      goto LAB_141353a15;
    }
  }
  else {
    *param_2 = 0;
    _Src = *(void **)(param_1 + 0x338);
    *(int *)(param_2 + 1) = iVar8;
  }
  FUN_1446dd670(param_2,iVar8,0);
  memcpy((void *)*param_2,_Src,(longlong)iVar8 * 2);
LAB_141353a15:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 141353a46 FUN_141353a46 body=1171 status=ok
// SIG undefined FUN_141353a46(void)

void FUN_141353a46(longlong *param_1)

{
  longlong lVar1;
  byte *pbVar2;
  int iVar3;
  longlong lVar4;
  ushort uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ushort uVar10;
  longlong lVar11;
  
  lVar4 = param_1[0x81];
  if ((longlong)(int)lVar4 != 0) {
    lVar9 = param_1[0x80];
    lVar6 = lVar9 + 0x9f;
    lVar11 = 0;
    do {
      if ((*(byte *)(lVar6 + lVar11) & 0x20) == 0) {
        if (*(longlong *)(lVar9 + 0x108 + lVar11) != 0) {
          FUN_1400020a8();
        }
        lVar1 = lVar6 + lVar11;
        *(undefined8 *)(lVar1 + 0x69) = 0;
        *(undefined8 *)(lVar1 + 0x71) = 0;
        if (*(longlong *)(lVar1 + 0x79) != 0) {
          FUN_1400020a8();
        }
        pbVar2 = (byte *)(lVar6 + lVar11);
        pbVar2[0xd1] = 0;
        pbVar2[0xd2] = 0;
        pbVar2[0xd3] = 0;
        pbVar2[0xd4] = 0;
        pbVar2[0x79] = 0;
        pbVar2[0x7a] = 0;
        pbVar2[0x7b] = 0;
        pbVar2[0x7c] = 0;
        pbVar2[0x7d] = 0;
        pbVar2[0x7e] = 0;
        pbVar2[0x7f] = 0;
        pbVar2[0x80] = 0;
        pbVar2[0x81] = 0;
        pbVar2[0x82] = 0;
        pbVar2[0x83] = 0;
        pbVar2[0x84] = 0;
        pbVar2[0x85] = 0;
        pbVar2[0x86] = 0;
        pbVar2[0x87] = 0;
        pbVar2[0x88] = 0;
        *pbVar2 = *pbVar2 & 0xfd;
      }
      lVar11 = lVar11 + 0x268;
    } while ((longlong)(int)lVar4 * 0x268 - lVar11 != 0);
  }
  iVar3 = (int)param_1[0x6c];
  lVar4 = 0xb0;
  if (1 < iVar3) {
    if (iVar3 == DAT_14cbe35a8) {
      lVar9 = 0;
      while( true ) {
        uVar10 = *(ushort *)(param_1[0x6b] + lVar9);
        uVar8 = (ulonglong)uVar10;
        uVar5 = *(ushort *)(DAT_14cbe35a0 + lVar9);
        if (uVar10 != uVar5) break;
        if (uVar10 == 0) goto LAB_141353ad5;
LAB_141353b32:
        lVar9 = lVar9 + 2;
      }
      if ((uVar5 | uVar10) < 0x80) {
        uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
        uVar7 = (ulonglong)uVar5;
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar7]) goto LAB_141353b32;
      }
      if (uVar10 != uVar5) goto LAB_141353b6b;
    }
    else if (DAT_14cbe35a8 + iVar3 != 1) {
LAB_141353b6b:
      if (iVar3 == DAT_14cbe35b8) {
        lVar4 = 0;
        while( true ) {
          uVar10 = *(ushort *)(param_1[0x6b] + lVar4);
          uVar8 = (ulonglong)uVar10;
          uVar5 = *(ushort *)(DAT_14cbe35b0 + lVar4);
          if (uVar10 != uVar5) break;
          if (uVar10 == 0) goto LAB_141353bcd;
LAB_141353ba2:
          lVar4 = lVar4 + 2;
        }
        if ((uVar5 | uVar10) < 0x80) {
          uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          uVar7 = (ulonglong)uVar5;
          uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar7]) goto LAB_141353ba2;
        }
        if (uVar10 != uVar5) goto LAB_141353be7;
LAB_141353bcd:
        lVar4 = 0xb8;
      }
      else {
        lVar4 = 0xb8;
        if (DAT_14cbe35b8 + iVar3 != 1) {
LAB_141353be7:
          if (iVar3 == DAT_14cbe35c8) {
            lVar4 = 0;
            while( true ) {
              uVar10 = *(ushort *)(param_1[0x6b] + lVar4);
              uVar8 = (ulonglong)uVar10;
              uVar5 = *(ushort *)(DAT_14cbe35c0 + lVar4);
              if (uVar10 != uVar5) break;
              if (uVar10 == 0) goto LAB_141353c49;
LAB_141353c1e:
              lVar4 = lVar4 + 2;
            }
            if ((uVar5 | uVar10) < 0x80) {
              uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
              uVar7 = (ulonglong)uVar5;
              uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
              if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar7]) goto LAB_141353c1e;
            }
            if (uVar10 != uVar5) goto LAB_141353c63;
LAB_141353c49:
            lVar4 = 0xc0;
          }
          else {
            lVar4 = 0xc0;
            if (DAT_14cbe35c8 + iVar3 != 1) {
LAB_141353c63:
              if (iVar3 == DAT_14cbe35d8) {
                lVar4 = 0;
                while( true ) {
                  uVar10 = *(ushort *)(param_1[0x6b] + lVar4);
                  uVar8 = (ulonglong)uVar10;
                  uVar5 = *(ushort *)(DAT_14cbe35d0 + lVar4);
                  if (uVar10 != uVar5) break;
                  if (uVar10 == 0) goto LAB_141353cc5;
LAB_141353c9a:
                  lVar4 = lVar4 + 2;
                }
                if ((uVar5 | uVar10) < 0x80) {
                  uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
                  uVar7 = (ulonglong)uVar5;
                  uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
                  if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar7]) goto LAB_141353c9a;
                }
                if (uVar10 != uVar5) goto LAB_141353cdf;
LAB_141353cc5:
                lVar4 = 200;
              }
              else {
                lVar4 = 200;
                if (DAT_14cbe35d8 + iVar3 != 1) {
LAB_141353cdf:
                  if (iVar3 == DAT_14cbe35e8) {
                    lVar4 = 0;
                    while( true ) {
                      uVar10 = *(ushort *)(param_1[0x6b] + lVar4);
                      uVar8 = (ulonglong)uVar10;
                      uVar5 = *(ushort *)(DAT_14cbe35e0 + lVar4);
                      if (uVar10 != uVar5) break;
                      if (uVar10 == 0) goto LAB_141353d41;
LAB_141353d16:
                      lVar4 = lVar4 + 2;
                    }
                    if ((uVar5 | uVar10) < 0x80) {
                      uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
                      uVar7 = (ulonglong)uVar5;
                      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
                      if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar7]) goto LAB_141353d16;
                    }
                    if (uVar10 != uVar5) goto LAB_141353d5b;
LAB_141353d41:
                    lVar4 = 0xd0;
                  }
                  else {
                    lVar4 = 0xd0;
                    if (DAT_14cbe35e8 + iVar3 != 1) {
LAB_141353d5b:
                      if (iVar3 == DAT_14cbe35f8) {
                        lVar4 = 0;
                        while( true ) {
                          uVar10 = *(ushort *)(param_1[0x6b] + lVar4);
                          uVar8 = (ulonglong)uVar10;
                          uVar5 = *(ushort *)(DAT_14cbe35f0 + lVar4);
                          if (uVar10 != uVar5) break;
                          if (uVar10 == 0) goto LAB_141353dbd;
LAB_141353d92:
                          lVar4 = lVar4 + 2;
                        }
                        if ((uVar5 | uVar10) < 0x80) {
                          uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
                          uVar7 = (ulonglong)uVar5;
                          uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
                          if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar7])
                          goto LAB_141353d92;
                        }
                        if (uVar10 != uVar5) goto LAB_141353dd7;
LAB_141353dbd:
                        lVar4 = 0xd8;
                      }
                      else {
                        lVar4 = 0xd8;
                        if (DAT_14cbe35f8 + iVar3 != 1) {
LAB_141353dd7:
                          if (iVar3 == DAT_14cbe3608) {
                            lVar4 = 0;
                            while( true ) {
                              uVar10 = *(ushort *)(param_1[0x6b] + lVar4);
                              uVar8 = (ulonglong)uVar10;
                              uVar5 = *(ushort *)(DAT_14cbe3600 + lVar4);
                              if (uVar10 != uVar5) break;
                              if (uVar10 == 0) goto LAB_141353e39;
LAB_141353e0e:
                              lVar4 = lVar4 + 2;
                            }
                            if ((uVar5 | uVar10) < 0x80) {
                              uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
                              uVar7 = (ulonglong)uVar5;
                              uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
                              if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar7])
                              goto LAB_141353e0e;
                            }
                            if (uVar10 != uVar5) goto LAB_141353e53;
LAB_141353e39:
                            lVar4 = 0xe0;
                          }
                          else {
                            lVar4 = 0xe0;
                            if (DAT_14cbe3608 + iVar3 != 1) {
LAB_141353e53:
                              if (iVar3 == DAT_14cbe3618) {
                                lVar4 = 0;
                                while( true ) {
                                  uVar10 = *(ushort *)(param_1[0x6b] + lVar4);
                                  uVar8 = (ulonglong)uVar10;
                                  uVar5 = *(ushort *)(DAT_14cbe3610 + lVar4);
                                  if (uVar10 != uVar5) break;
                                  if (uVar10 == 0) goto LAB_141353eb5;
LAB_141353e89:
                                  lVar4 = lVar4 + 2;
                                }
                                if ((uVar5 | uVar10) < 0x80) {
                                  uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
                                  uVar7 = (ulonglong)uVar5;
                                  uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
                                  if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar7])
                                  goto LAB_141353e89;
                                }
                                if (uVar10 != uVar5) goto LAB_141353ecf;
LAB_141353eb5:
                                lVar4 = 0xe8;
                              }
                              else {
                                lVar4 = 0xe8;
                                if (DAT_14cbe3618 + iVar3 != 1) {
LAB_141353ecf:
                                  lVar4 = 0xf0;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_141353ad5:
                    /* WARNING: Could not recover jumptable at 0x000141353ae9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + lVar4))(param_1);
  return;
}



// FUNCTION 141353eda FUN_141353eda body=1134 status=ok
// SIG undefined FUN_141353eda(void)

undefined8 * FUN_141353eda(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  uint uVar21;
  ulonglong uVar22;
  int iVar23;
  int iVar24;
  longlong lVar25;
  longlong lVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  longlong lVar30;
  bool bVar31;
  bool bVar32;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  if ((longlong)*(int *)(param_1 + 0xd0) == 0) {
    local_88 = (undefined8 *)0x0;
    iVar23 = 0;
  }
  else {
    lVar26 = *(longlong *)(param_1 + 200);
    lVar30 = (longlong)*(int *)(param_1 + 0xd0) << 6;
    do {
      uVar22 = uStack_80;
      if (*(char *)(lVar26 + 0x39) != '\0') {
        lVar25 = (longlong)(int)uStack_80;
        uVar21 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar21);
        if (uStack_80._4_4_ < uVar21) {
          FUN_148e22ebc(&local_88,uVar22 & 0xffffffff);
        }
        FUN_148e22dc2(local_88 + lVar25 * 8,lVar26);
      }
      lVar26 = lVar26 + 0x40;
      lVar30 = lVar30 + -0x40;
    } while (lVar30 != 0);
    iVar23 = 0;
    if ((uStack_80 & 0xffffffff) != 0) {
      iVar23 = ((int)uStack_80 - ((int)uStack_80 + -2 >> 0x1f)) + -2 >> 1;
      iVar28 = iVar23;
      do {
        while (iVar29 = iVar23 * 2 + 1, iVar29 < (int)uStack_80) {
          iVar27 = iVar23 * 2 + 2;
          if (iVar27 < (int)uStack_80) {
            lVar26 = (longlong)iVar27;
            bVar4 = *(byte *)((longlong)local_88 + lVar26 * 0x40 + 0x39);
            bVar5 = *(byte *)((longlong)local_88 + (longlong)iVar29 * 0x40 + 0x39);
            bVar31 = bVar4 < bVar5;
            bVar32 = false;
            if (bVar4 == bVar5) {
              bVar5 = *(byte *)(local_88 + lVar26 * 8 + 7);
              if (bVar5 == bVar4) goto LAB_14135404c;
              bVar31 = bVar5 < *(byte *)(local_88 + (longlong)iVar29 * 8 + 7);
              bVar32 = bVar5 == *(byte *)(local_88 + (longlong)iVar29 * 8 + 7);
            }
            if (!bVar31 && !bVar32) goto LAB_14135404c;
          }
          else {
LAB_14135404c:
            lVar26 = (longlong)iVar29;
            iVar27 = iVar29;
          }
          puVar2 = local_88 + (longlong)iVar23 * 8;
          puVar3 = local_88 + lVar26 * 8;
          bVar4 = *(byte *)((longlong)local_88 + (longlong)iVar23 * 0x40 + 0x39);
          bVar5 = *(byte *)((longlong)local_88 + lVar26 * 0x40 + 0x39);
          bVar32 = bVar4 < bVar5;
          bVar31 = bVar4 == bVar5;
          if (bVar31) {
            bVar5 = *(byte *)(puVar2 + 7);
            if (bVar5 != bVar4) {
              bVar32 = bVar5 < *(byte *)(puVar3 + 7);
              bVar31 = bVar5 == *(byte *)(puVar3 + 7);
              goto LAB_14135407a;
            }
          }
          else {
LAB_14135407a:
            if (bVar32 || bVar31) break;
          }
          uVar6 = *puVar2;
          uVar7 = puVar2[1];
          local_68 = puVar2[2];
          uStack_60 = puVar2[3];
          local_58 = puVar2[4];
          uStack_50 = puVar2[5];
          local_48 = puVar2[6];
          uStack_40 = puVar2[7];
          uVar8 = *puVar3;
          uVar9 = puVar3[1];
          uVar10 = puVar3[2];
          uVar11 = puVar3[3];
          uVar12 = puVar3[4];
          uVar13 = puVar3[5];
          uVar14 = puVar3[7];
          puVar2[6] = puVar3[6];
          puVar2[7] = uVar14;
          puVar2[4] = uVar12;
          puVar2[5] = uVar13;
          puVar2[2] = uVar10;
          puVar2[3] = uVar11;
          *puVar2 = uVar8;
          puVar2[1] = uVar9;
          local_78._0_4_ = (undefined4)uVar6;
          local_78._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_70._0_4_ = (undefined4)uVar7;
          uStack_70._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          puVar3[6] = local_48;
          puVar3[7] = uStack_40;
          puVar3[4] = local_58;
          puVar3[5] = uStack_50;
          puVar3[2] = local_68;
          puVar3[3] = uStack_60;
          *(undefined4 *)puVar3 = (undefined4)local_78;
          *(undefined4 *)((longlong)puVar3 + 4) = local_78._4_4_;
          *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_70._4_4_;
          iVar23 = iVar27;
          local_78 = uVar6;
          uStack_70 = uVar7;
        }
        bVar32 = iVar28 != 0;
        iVar23 = iVar28 + -1;
        iVar28 = iVar23;
      } while (bVar32);
      iVar23 = (int)uStack_80;
      if (1 < (int)uStack_80) {
        uVar22 = (uStack_80 & 0xffffffff) - 1;
        uVar6 = *local_88;
        uVar7 = local_88[1];
        local_68 = local_88[2];
        uStack_60 = local_88[3];
        local_58 = local_88[4];
        uStack_50 = local_88[5];
        local_48 = local_88[6];
        uStack_40 = local_88[7];
        uVar8 = local_88[uVar22 * 8];
        uVar9 = (local_88 + uVar22 * 8)[1];
        uVar10 = local_88[uVar22 * 8 + 2];
        uVar11 = (local_88 + uVar22 * 8 + 2)[1];
        uVar12 = local_88[uVar22 * 8 + 4];
        uVar13 = (local_88 + uVar22 * 8 + 4)[1];
        uVar14 = (local_88 + uVar22 * 8 + 6)[1];
        local_88[6] = local_88[uVar22 * 8 + 6];
        local_88[7] = uVar14;
        local_88[4] = uVar12;
        local_88[5] = uVar13;
        local_88[2] = uVar10;
        local_88[3] = uVar11;
        *local_88 = uVar8;
        local_88[1] = uVar9;
        local_78._0_4_ = (undefined4)uVar6;
        local_78._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
        uStack_70._0_4_ = (undefined4)uVar7;
        uStack_70._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_88[uVar22 * 8 + 6] = local_48;
        (local_88 + uVar22 * 8 + 6)[1] = uStack_40;
        local_88[uVar22 * 8 + 4] = local_58;
        (local_88 + uVar22 * 8 + 4)[1] = uStack_50;
        local_88[uVar22 * 8 + 2] = local_68;
        (local_88 + uVar22 * 8 + 2)[1] = uStack_60;
        puVar2 = local_88 + uVar22 * 8;
        *(undefined4 *)puVar2 = (undefined4)local_78;
        *(undefined4 *)((longlong)puVar2 + 4) = local_78._4_4_;
        *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_70;
        *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_70._4_4_;
        if ((int)uStack_80 == 2) {
          iVar23 = 2;
          local_78 = uVar6;
          uStack_70 = uVar7;
        }
        else {
          do {
            iVar29 = 0;
            iVar28 = 1;
            iVar27 = 0;
            do {
              lVar26 = (longlong)(iVar29 + 2);
              if (lVar26 < (longlong)uVar22) {
                bVar4 = *(byte *)((longlong)local_88 + lVar26 * 0x40 + 0x39);
                bVar5 = *(byte *)((longlong)local_88 + (longlong)iVar28 * 0x40 + 0x39);
                bVar31 = bVar4 < bVar5;
                bVar32 = false;
                if (bVar4 == bVar5) {
                  bVar5 = *(byte *)(local_88 + lVar26 * 8 + 7);
                  if (bVar5 == bVar4) goto LAB_1413541f7;
                  bVar31 = bVar5 < *(byte *)(local_88 + (longlong)iVar28 * 8 + 7);
                  bVar32 = bVar5 == *(byte *)(local_88 + (longlong)iVar28 * 8 + 7);
                }
                iVar24 = iVar29 + 2;
                if (!bVar31 && !bVar32) goto LAB_1413541f7;
              }
              else {
LAB_1413541f7:
                lVar26 = (longlong)iVar28;
                iVar24 = iVar28;
              }
              puVar2 = local_88 + (longlong)iVar27 * 8;
              puVar3 = local_88 + lVar26 * 8;
              bVar4 = *(byte *)((longlong)local_88 + (longlong)iVar27 * 0x40 + 0x39);
              bVar5 = *(byte *)((longlong)local_88 + lVar26 * 0x40 + 0x39);
              bVar32 = bVar4 < bVar5;
              bVar31 = bVar4 == bVar5;
              if (bVar31) {
                bVar5 = *(byte *)(puVar2 + 7);
                if (bVar5 != bVar4) {
                  bVar32 = bVar5 < *(byte *)(puVar3 + 7);
                  bVar31 = bVar5 == *(byte *)(puVar3 + 7);
                  goto LAB_141354226;
                }
              }
              else {
LAB_141354226:
                if (bVar32 || bVar31) break;
              }
              uVar6 = *puVar2;
              uVar7 = puVar2[1];
              uVar8 = puVar2[2];
              uVar9 = puVar2[3];
              uVar10 = puVar2[4];
              uVar11 = puVar2[5];
              uVar12 = puVar2[6];
              uVar13 = puVar2[7];
              uVar14 = *puVar3;
              uVar15 = puVar3[1];
              uVar16 = puVar3[2];
              uVar17 = puVar3[3];
              uVar18 = puVar3[4];
              uVar19 = puVar3[5];
              uVar20 = puVar3[7];
              puVar2[6] = puVar3[6];
              puVar2[7] = uVar20;
              puVar2[4] = uVar18;
              puVar2[5] = uVar19;
              puVar2[2] = uVar16;
              puVar2[3] = uVar17;
              *puVar2 = uVar14;
              puVar2[1] = uVar15;
              puVar3[6] = uVar12;
              puVar3[7] = uVar13;
              puVar3[4] = uVar10;
              puVar3[5] = uVar11;
              puVar3[2] = uVar8;
              puVar3[3] = uVar9;
              *puVar3 = uVar6;
              puVar3[1] = uVar7;
              iVar29 = iVar24 * 2;
              iVar28 = iVar24 * 2 + 1;
              iVar27 = iVar24;
            } while ((longlong)iVar28 < (longlong)uVar22);
            uVar1 = uVar22 - 1;
            uVar6 = *local_88;
            uVar7 = local_88[1];
            local_68 = local_88[2];
            uStack_60 = local_88[3];
            local_58 = local_88[4];
            uStack_50 = local_88[5];
            local_48 = local_88[6];
            uStack_40 = local_88[7];
            uVar8 = local_88[uVar1 * 8];
            uVar9 = (local_88 + uVar1 * 8)[1];
            uVar10 = local_88[uVar1 * 8 + 2];
            uVar11 = (local_88 + uVar1 * 8 + 2)[1];
            uVar12 = local_88[uVar1 * 8 + 4];
            uVar13 = (local_88 + uVar1 * 8 + 4)[1];
            uVar14 = (local_88 + uVar1 * 8 + 6)[1];
            local_88[6] = local_88[uVar1 * 8 + 6];
            local_88[7] = uVar14;
            local_88[4] = uVar12;
            local_88[5] = uVar13;
            local_88[2] = uVar10;
            local_88[3] = uVar11;
            *local_88 = uVar8;
            local_88[1] = uVar9;
            local_78._0_4_ = (undefined4)uVar6;
            local_78._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
            uStack_70._0_4_ = (undefined4)uVar7;
            uStack_70._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
            local_88[uVar1 * 8 + 6] = local_48;
            (local_88 + uVar1 * 8 + 6)[1] = uStack_40;
            local_88[uVar1 * 8 + 4] = local_58;
            (local_88 + uVar1 * 8 + 4)[1] = uStack_50;
            local_88[uVar1 * 8 + 2] = local_68;
            (local_88 + uVar1 * 8 + 2)[1] = uStack_60;
            puVar2 = local_88 + uVar1 * 8;
            *(undefined4 *)puVar2 = (undefined4)local_78;
            *(undefined4 *)((longlong)puVar2 + 4) = local_78._4_4_;
            *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_70;
            *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_70._4_4_;
            bVar32 = 2 < uVar22;
            uVar22 = uVar1;
            local_78 = uVar6;
            uStack_70 = uVar7;
          } while (bVar32);
        }
      }
    }
  }
  *param_2 = local_88;
  local_88 = (undefined8 *)0x0;
  *(int *)(param_2 + 1) = iVar23;
  *(uint *)((longlong)param_2 + 0xc) = uStack_80._4_4_;
  uStack_80 = 0;
  FUN_141354349(0,0);
  if (local_88 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 141354349 FUN_141354349 body=88 status=ok
// SIG undefined FUN_141354349(void)

void FUN_141354349(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (plVar1[4] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[2] != 0) {
        FUN_1400020a8();
      }
      FUN_1413543a1(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1413543a1 FUN_1413543a1 body=148 status=ok
// SIG undefined FUN_1413543a1(void)

void FUN_1413543a1(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0xa8;
    do {
      *(undefined4 *)(param_1 + 0x48) = 0;
      if (*(longlong *)(param_1 + 0x40) != 0) {
        FUN_1400020a8();
      }
      FUN_140bb2a1a(param_1);
      if (*(longlong *)(param_1 + -0x28) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(param_1 + -0x58) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(param_1 + -0x70) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(param_1 + -0x88) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong **)(param_1 + -0xa8) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + -0xa8) + 0x10))();
      }
      param_1 = param_1 + 0xf8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141354436 FUN_141354436 body=1651 status=ok
// SIG undefined FUN_141354436(void)

void FUN_141354436(longlong param_1,uint param_2)

{
  PSRWLOCK pRVar1;
  longlong lVar2;
  void *_Src;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined2 *puVar12;
  longlong lVar13;
  ushort uVar14;
  ulonglong uVar15;
  ushort uVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 *local_a0;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  void *local_68;
  int local_60;
  int local_5c;
  char *local_58;
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = *(longlong *)(param_1 + 0x288);
  iVar7 = 0;
  if (param_2 == 0xffffffff && lVar2 != 0) {
    iVar7 = *(int *)(lVar2 + 0xb8c);
  }
  plVar8 = (longlong *)FUN_14134fce6(param_1);
  lVar9 = *plVar8;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar9 + 0xb0));
  *(int *)(lVar9 + 0xa8) = *(int *)(lVar9 + 0xa8) + 1;
  iVar4 = *(int *)(lVar9 + 0x14);
  if (iVar7 == *(int *)(lVar9 + 0x10)) {
    if (iVar4 == 0) {
      iVar4 = 0;
      goto LAB_1413544b1;
    }
  }
  else {
LAB_1413544b1:
    *(int *)(lVar9 + 0x10) = iVar7;
    *(int *)(lVar9 + 0x14) = iVar4 + 1;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar9 + 0xb0));
  if ((lVar2 == 0) || ((*(uint *)(lVar2 + 0x328) & param_2) == 0xffffffff)) goto LAB_1413544d6;
  FUN_145916d4e(lVar2,param_2);
  FUN_140056680(&local_68,&DAT_149e62e78);
  plVar8 = (longlong *)FUN_14134fce6(param_1);
  lVar9 = *plVar8;
  pRVar1 = (PSRWLOCK)(lVar9 + 0xb0);
  AcquireSRWLockShared(pRVar1);
  iVar7 = *(int *)(lVar9 + 0x18);
  ReleaseSRWLockShared(pRVar1);
  uVar18 = 1;
  if ((*(byte *)(lVar2 + 0x8f8) & 0x10) != 0) {
    if (iVar7 == -1) {
      uVar18 = 3;
    }
    else {
      uVar18 = (uint)(iVar7 == *(int *)(lVar2 + 0x328)) * 2 + 1;
    }
  }
  if (((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar2 + 0xb68))) &&
     (lVar9 = (ulonglong)param_2 * 0x280 + *(longlong *)(lVar2 + 0xb60), lVar9 != 0)) {
    uVar18 = uVar18 | ~(uint)*(byte *)(lVar9 + 0x9d) & 4;
  }
  plVar8 = (longlong *)FUN_14134fce6(param_1);
  lVar9 = *plVar8;
  pRVar1 = (PSRWLOCK)(lVar9 + 0xb0);
  AcquireSRWLockShared(pRVar1);
  if (*(int *)(lVar9 + 0x60) == -1) {
    iVar7 = *(int *)(lVar9 + 0x68);
    ReleaseSRWLockShared(pRVar1);
    if (iVar7 != 0) goto LAB_1413545db;
    plVar8 = (longlong *)FUN_14134fce6(param_1);
    lVar9 = *plVar8;
    pRVar1 = (PSRWLOCK)(lVar9 + 0xb0);
    AcquireSRWLockShared(pRVar1);
    iVar7 = *(int *)(lVar9 + 8);
    ReleaseSRWLockShared(pRVar1);
    uVar19 = uVar18 + 0x10;
    if (iVar7 != 1) {
      uVar19 = uVar18;
    }
  }
  else {
    ReleaseSRWLockShared(pRVar1);
LAB_1413545db:
    uVar19 = uVar18 | 0x20;
  }
  if (*(longlong *)(param_1 + 0x288) == 0) {
LAB_14135492d:
    puVar10 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar11 = *(undefined8 *)(param_1 + 0x30);
    *puVar10 = &PTR_FUN_14b9c71b0;
    local_58 = "ClearItem";
    local_50 = 9;
    local_4c = 0;
    uVar5 = FUN_14001a6c0(&local_58,1);
    FUN_14039176c(puVar10,uVar11,uVar5,1);
    *puVar10 = &PTR_FUN_14b9c71b0;
    *(undefined4 *)(puVar10 + 7) = 0;
    FUN_140391314(param_1,puVar10);
    FUN_140de1078(param_1,&DAT_14cbde1b8,0,0);
    uVar5 = 0;
  }
  else {
    cVar3 = FUN_148ee834c();
    uVar18 = uVar19 + 0x800;
    if (cVar3 == '\0') {
      uVar18 = uVar19;
    }
    lVar9 = *(longlong *)(param_1 + 0x288);
    if ((lVar9 == 0) ||
       (((*(int *)(lVar9 + 0x67c) == -1 && (*(int *)(lVar9 + 0x680) == 0)) &&
        ((*(byte *)(lVar9 + 0x4c7) & 0x20) == 0)))) goto LAB_14135492d;
    if ((*(byte *)(lVar9 + 0x4c5) & 1) != 0) {
      puVar10 = (undefined8 *)FUN_14001cc68(0x48,0x10);
      uVar11 = *(undefined8 *)(param_1 + 0x30);
      *puVar10 = &PTR_FUN_14b9c7260;
      local_58 = "UpdateItemFlags";
      local_50 = 0xf;
      local_4c = 0;
      uVar5 = FUN_14001a6c0(&local_58,1);
      FUN_14039176c(puVar10,uVar11,uVar5,1);
      *puVar10 = &PTR_FUN_14b9c7260;
      *(undefined4 *)(puVar10 + 7) = *(undefined4 *)(lVar9 + 0x67c);
      *(undefined8 *)((longlong)puVar10 + 0x3c) = 1;
      FUN_140391314(param_1,puVar10);
    }
    uVar11 = FUN_14001cc68(0x148,0x10);
    local_a0 = &local_88;
    local_88 = (undefined4)DAT_14c8464e0;
    uStack_84 = DAT_14c8464e0._4_4_;
    uStack_80 = (undefined4)DAT_14c8464e8;
    uStack_7c = DAT_14c8464e8._4_4_;
    local_78 = DAT_14c8464f0;
    local_a8 = *(undefined4 *)(lVar9 + 0x67c);
    FUN_14664e342(uVar11,*(undefined8 *)(param_1 + 0x30),0,*(undefined8 *)(lVar9 + 0x684));
    FUN_140391314(param_1,uVar11);
    plVar8 = (longlong *)FUN_14134fce6(param_1);
    lVar13 = *plVar8;
    pRVar1 = (PSRWLOCK)(lVar13 + 0xb0);
    AcquireSRWLockShared(pRVar1);
    if (*(int *)(lVar13 + 0x60) == -1) {
      iVar7 = *(int *)(lVar13 + 0x68);
      ReleaseSRWLockShared(pRVar1);
      if (iVar7 != 0) goto LAB_141354770;
      local_8c = 0;
    }
    else {
      ReleaseSRWLockShared(pRVar1);
LAB_141354770:
      plVar8 = (longlong *)FUN_14134fce6(param_1);
      lVar13 = *plVar8;
      pRVar1 = (PSRWLOCK)(lVar13 + 0xb0);
      AcquireSRWLockShared(pRVar1);
      iVar7 = *(int *)(lVar13 + 0x60);
      local_8c = CONCAT31((int3)((uint)iVar7 >> 8),iVar7 != *(int *)(lVar9 + 0x67c));
      ReleaseSRWLockShared(pRVar1);
    }
    puVar10 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar11 = *(undefined8 *)(param_1 + 0x30);
    *puVar10 = &PTR_FUN_14b9c7290;
    local_58 = "SetGlyphs";
    local_50 = 9;
    local_4c = 0;
    uVar5 = FUN_14001a6c0(&local_58,1);
    FUN_14039176c(puVar10,uVar11,uVar5,1);
    *puVar10 = &PTR_FUN_14b9c7290;
    *(uint *)(puVar10 + 7) = uVar18;
    FUN_140391314(param_1,puVar10);
    if (*(int *)(lVar9 + 0x470) == 0) {
      puVar12 = &DAT_149dfb77a;
    }
    else {
      puVar12 = *(undefined2 **)(lVar9 + 0x468);
    }
    lVar13 = 0;
    while( true ) {
      uVar14 = *(ushort *)((longlong)puVar12 + lVar13);
      uVar15 = (ulonglong)uVar14;
      uVar16 = *(ushort *)((longlong)L"weapon" + lVar13);
      if (uVar14 != uVar16) break;
      if (uVar14 == 0) goto LAB_14135488d;
LAB_141354858:
      lVar13 = lVar13 + 2;
    }
    if ((uVar16 | uVar14) < 0x80) {
      uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
      uVar17 = (ulonglong)uVar16;
      uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
      if ((&DAT_149e05da0)[uVar15] == (&DAT_149e05da0)[uVar17]) goto LAB_141354858;
    }
    if (uVar14 != uVar16) {
      puVar10 = &DAT_14cbde188;
      goto LAB_141354894;
    }
LAB_14135488d:
    puVar10 = &DAT_14cbde168;
LAB_141354894:
    FUN_140de1078(param_1,puVar10,0,0);
    uVar5 = local_8c;
    if (&local_68 != (void **)(lVar9 + 0x478)) {
      iVar7 = *(int *)(lVar9 + 0x480);
      _Src = *(void **)(lVar9 + 0x478);
      local_60 = iVar7;
      if (iVar7 == 0 && local_5c == 0) {
        local_5c = 0;
      }
      else {
        FUN_1446dd670(&local_68,iVar7);
        uVar5 = local_8c;
        if (iVar7 != 0) {
          memcpy(local_68,_Src,(longlong)iVar7 * 2);
        }
      }
    }
  }
  puVar10 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar11 = *(undefined8 *)(param_1 + 0x30);
  *puVar10 = &PTR_FUN_14b9c7210;
  local_58 = "SetVisible";
  local_50 = 10;
  local_4c = 0;
  uVar6 = FUN_14001a6c0(&local_58,1);
  FUN_14039176c(puVar10,uVar11,uVar6,1);
  *puVar10 = &PTR_FUN_14b9c7210;
  *(char *)(puVar10 + 7) = (char)uVar5;
  *(undefined4 *)((longlong)puVar10 + 0x3c) = 1;
  FUN_140391314(param_1,puVar10);
  if (param_2 != 0xffffffff) {
    plVar8 = (longlong *)FUN_14134fce6(param_1);
    lVar9 = *plVar8;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar9 + 0xb0));
    *(int *)(lVar9 + 0xa8) = *(int *)(lVar9 + 0xa8) + 1;
    if (*(int *)(lVar9 + 0x10) == 0) {
      if (*(int *)(lVar9 + 0x14) == 0) {
        iVar7 = 1;
        goto LAB_141354a4f;
      }
    }
    else {
      iVar7 = *(int *)(lVar9 + 0x14) + 1;
LAB_141354a4f:
      *(undefined4 *)(lVar9 + 0x10) = 0;
      *(int *)(lVar9 + 0x14) = iVar7;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar9 + 0xb0));
  }
  *(byte *)(lVar2 + 0x330) = *(byte *)(lVar2 + 0x330) | 0x20;
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1413544d6:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141354aaa FUN_141354aaa body=2932 status=ok
// SIG undefined FUN_141354aaa(void)

/* WARNING: Removing unreachable block (ram,0x000141355351) */
/* WARNING: Removing unreachable block (ram,0x00014135510f) */
/* WARNING: Removing unreachable block (ram,0x000141354f31) */
/* WARNING: Removing unreachable block (ram,0x00014135501f) */
/* WARNING: Removing unreachable block (ram,0x00014135525e) */
/* WARNING: Removing unreachable block (ram,0x000141355436) */
/* WARNING: Removing unreachable block (ram,0x000141355363) */
/* WARNING: Removing unreachable block (ram,0x000141355121) */
/* WARNING: Removing unreachable block (ram,0x000141354f43) */
/* WARNING: Removing unreachable block (ram,0x000141355031) */
/* WARNING: Removing unreachable block (ram,0x000141355270) */
/* WARNING: Removing unreachable block (ram,0x000141355448) */

void FUN_141354aaa(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined ***pppuVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  undefined8 unaff_RDI;
  byte bVar15;
  bool bVar16;
  undefined1 auStack_1a8 [44];
  undefined4 local_17c;
  longlong *local_178 [2];
  undefined8 local_168;
  longlong *local_160;
  undefined8 local_158;
  longlong *plStack_150;
  longlong *local_148 [2];
  longlong *local_138 [2];
  longlong *local_128;
  undefined4 local_120;
  longlong local_118;
  undefined8 uStack_110;
  char local_f9;
  undefined8 local_f8;
  longlong *local_f0;
  undefined4 *local_e8;
  ulonglong *local_e0;
  longlong local_d8;
  undefined4 local_d0;
  code *local_c8;
  undefined8 uStack_c0;
  undefined ***local_b8;
  undefined8 local_b0;
  undefined **ppuStack_a8;
  char *local_a0;
  longlong *local_98;
  undefined4 local_80 [4];
  longlong *local_70 [2];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_f9 = '\0';
  local_118 = 0;
  uStack_110 = 0;
  iVar3 = *(int *)(param_1 + 0xb8c);
  if (iVar3 == 5) {
    uVar12 = 0;
  }
  else {
    iVar14 = *(int *)(param_1 + 0x328);
    if ((((-1 < (longlong)iVar14) && (iVar14 < *(int *)(param_1 + 0xb68))) &&
        (iVar14 = *(int *)(*(longlong *)(param_1 + 0xb60) + 0x254 + (longlong)iVar14 * 0x280),
        iVar14 != -1)) && ((longlong)*(int *)(param_1 + 0x3f8) != 0)) {
      lVar10 = *(longlong *)(param_1 + 0x3f0);
      lVar13 = (longlong)*(int *)(param_1 + 0x3f8) * 0x268;
      do {
        if (*(int *)(lVar10 + 0x254) == iVar14) {
          if (lVar10 != 0) {
            if ((((*(byte *)(param_1 + 0x8f8) & 0x10) == 0) ||
                ((*(byte *)(lVar10 + 0x9e) & 0x40) != 0)) || ((*(byte *)(lVar10 + 0x9c) & 1) != 0))
            {
              bVar16 = false;
            }
            else {
              bVar16 = (char)*(byte *)(lVar10 + 0x9e) < '\0' &&
                       (*(byte *)(lVar10 + 0x9f) & 0x20) == 0;
            }
            bVar15 = *(byte *)(param_1 + 0x928);
            if (bVar15 == 0) {
              bVar5 = *(int *)(param_1 + 0x3d0) < *(int *)(param_1 + 0x3d8);
            }
            else {
              bVar5 = false;
            }
            bVar6 = FUN_148ee4610();
            local_17c = (undefined4)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),(bVar15 ^ 1) & bVar6)
            ;
            goto LAB_141354bca;
          }
          break;
        }
        lVar10 = lVar10 + 0x268;
        lVar13 = lVar13 + -0x268;
      } while (lVar13 != 0);
    }
    bVar5 = false;
    bVar16 = false;
    local_17c = 0;
LAB_141354bca:
    plVar8 = (longlong *)FUN_141350006(param_1);
    lVar10 = *plVar8;
    AcquireSRWLockShared((PSRWLOCK)(lVar10 + 0x1c0));
    iVar14 = 0;
    if ((longlong)*(int *)(lVar10 + 0x88) != 0) {
      lVar13 = 0;
      iVar14 = 0;
      do {
        if (*(int *)(*(longlong *)(lVar10 + 0x80) + 8 + lVar13) == -1) {
          bVar15 = 0;
        }
        else {
          bVar15 = (*(byte *)(*(longlong *)(lVar10 + 0x80) + 0x18 + lVar13) & 8) >> 3;
        }
        iVar14 = iVar14 + (uint)bVar15;
        lVar13 = lVar13 + 0x430;
      } while ((longlong)*(int *)(lVar10 + 0x88) * 0x430 - lVar13 != 0);
    }
    ReleaseSRWLockShared((PSRWLOCK)(lVar10 + 0x1c0));
    bVar15 = *(byte *)(param_1 + 0x8f8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
    bVar15 = 0 < iVar14 & (bVar15 & 0x40) >> 6;
    local_128 = DAT_14c844840;
    if (DAT_14c844840 != (longlong *)0x0) {
      (**(code **)(*DAT_14c844840 + 8))();
    }
    local_120 = DAT_14c844848;
    if (bVar15 != 0) {
      local_158 = 0;
      plStack_150 = (longlong *)0x0;
      FUN_1413a454c(local_148,iVar14,0);
      local_c8 = (code *)0x0;
      uStack_c0 = 0;
      local_b8 = (undefined ***)((ulonglong)local_b8 & 0xffffffff00000000);
      local_b0 = 0;
      ppuStack_a8 = (undefined **)0x0;
      FUN_1446ddda2(&local_c8,"BankDepositCountFormatText",0);
      FUN_1410d1eba(local_178,&local_c8);
      FUN_14023409e(&local_168,local_178,1);
      local_80[0] = 4;
      FUN_14023423e(local_70,local_148);
      local_e8 = local_80;
      local_e0 = local_60;
      FUN_14010d304(&local_d8);
      local_f8 = local_168;
      local_f0 = local_160;
      if (local_160 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_160 + 1) = (int)local_160[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_138,&local_f8,&local_d8);
      FUN_14007f2db(local_d8,local_d0);
      if (local_d8 != 0) {
        FUN_1400020a8();
      }
      if (local_70[0] != (longlong *)0x0) {
        (**(code **)(*local_70[0] + 0x10))();
      }
      if (local_160 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_160 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*local_160)(local_160);
          LOCK();
          piVar1 = (int *)((longlong)local_160 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_160 + 0x10))(local_160);
          }
        }
      }
      if (local_148[0] != (longlong *)0x0) {
        (**(code **)(*local_148[0] + 0x10))();
      }
      FUN_140008f88(&local_128,local_138);
      if (local_138[0] != (longlong *)0x0) {
        (**(code **)(*local_138[0] + 0x10))();
      }
      if (local_178[0] != (longlong *)0x0) {
        (**(code **)(*local_178[0] + 0x10))();
      }
      if (local_b0 != 0) {
        FUN_1400020a8();
      }
      plVar8 = plStack_150;
      if (plStack_150 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_150 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plStack_150)(plStack_150);
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
    if (bVar16) {
      FUN_146637162(&local_c8,&DAT_14cbe2f28,&DAT_14cbe3038);
      uVar12 = uStack_110;
      lVar10 = (longlong)(int)uStack_110;
      uVar7 = (int)uStack_110 + 1;
      uStack_110 = CONCAT44(uStack_110._4_4_,uVar7);
      if (uStack_110._4_4_ < uVar7) {
        FUN_146638242(&local_118,uVar12 & 0xffffffff);
      }
      lVar10 = lVar10 * 0x20;
      *(undefined8 *)(local_118 + lVar10) = 0;
      *(code **)(local_118 + lVar10) = local_c8;
      *(undefined4 *)(local_118 + 8 + lVar10) = (undefined4)uStack_c0;
      *(undefined4 *)(local_118 + 0xc + lVar10) = uStack_c0._4_4_;
      *(undefined8 *)(local_118 + 0x10 + lVar10) = 0;
      *(undefined ****)(local_118 + 0x10 + lVar10) = local_b8;
      *(undefined4 *)(local_118 + 0x18 + lVar10) = (undefined4)local_b0;
      *(undefined4 *)(local_118 + 0x1c + lVar10) = local_b0._4_4_;
      local_b0 = 0;
      local_b8 = (undefined ***)0x0;
      uStack_c0 = 0;
      local_c8 = (code *)0x0;
    }
    if (bVar5) {
      FUN_146637162(&local_c8,&DAT_14cbe2ea8,&DAT_14cbe3008);
      uVar12 = uStack_110;
      lVar10 = (longlong)(int)uStack_110;
      uVar7 = (int)uStack_110 + 1;
      uStack_110 = CONCAT44(uStack_110._4_4_,uVar7);
      if (uStack_110._4_4_ < uVar7) {
        FUN_146638242(&local_118,uVar12 & 0xffffffff);
      }
      lVar10 = lVar10 * 0x20;
      *(undefined8 *)(local_118 + lVar10) = 0;
      *(code **)(local_118 + lVar10) = local_c8;
      *(undefined4 *)(local_118 + 8 + lVar10) = (undefined4)uStack_c0;
      *(undefined4 *)(local_118 + 0xc + lVar10) = uStack_c0._4_4_;
      *(undefined8 *)(local_118 + 0x10 + lVar10) = 0;
      *(undefined ****)(local_118 + 0x10 + lVar10) = local_b8;
      *(undefined4 *)(local_118 + 0x18 + lVar10) = (undefined4)local_b0;
      *(undefined4 *)(local_118 + 0x1c + lVar10) = local_b0._4_4_;
      local_b0 = 0;
      local_b8 = (undefined ***)0x0;
      uStack_c0 = 0;
      local_c8 = (code *)0x0;
    }
    if ((char)local_17c != '\0') {
      FUN_146637162(&local_c8,&DAT_14cbe2e88,&DAT_14cbe3018);
      uVar12 = uStack_110;
      lVar10 = (longlong)(int)uStack_110;
      uVar7 = (int)uStack_110 + 1;
      uStack_110 = CONCAT44(uStack_110._4_4_,uVar7);
      if (uStack_110._4_4_ < uVar7) {
        FUN_146638242(&local_118,uVar12 & 0xffffffff);
      }
      lVar10 = lVar10 * 0x20;
      *(undefined8 *)(local_118 + lVar10) = 0;
      *(code **)(local_118 + lVar10) = local_c8;
      *(undefined4 *)(local_118 + 8 + lVar10) = (undefined4)uStack_c0;
      *(undefined4 *)(local_118 + 0xc + lVar10) = uStack_c0._4_4_;
      *(undefined8 *)(local_118 + 0x10 + lVar10) = 0;
      *(undefined ****)(local_118 + 0x10 + lVar10) = local_b8;
      *(undefined4 *)(local_118 + 0x18 + lVar10) = (undefined4)local_b0;
      *(undefined4 *)(local_118 + 0x1c + lVar10) = local_b0._4_4_;
      local_b0 = 0;
      local_b8 = (undefined ***)0x0;
      uStack_c0 = 0;
      local_c8 = (code *)0x0;
    }
    if (bVar15 != 0) {
      plVar8 = local_128;
      if (*(code **)(*local_128 + 0x50) != FUN_144828418) {
        plVar8 = (longlong *)(**(code **)(*local_128 + 0x50))();
      }
      FUN_1447a1fc0(plVar8);
      pcVar4 = *(code **)(*local_128 + 0x28);
      if (pcVar4 == FUN_14482841c) {
        plVar8 = local_128 + 3;
        if (local_128[5] != 0) {
          plVar8 = (longlong *)(local_128[5] + 8);
        }
      }
      else if (pcVar4 == (code *)&LAB_14010c34c) {
        plVar8 = local_128 + 2;
      }
      else {
        plVar8 = (longlong *)(*pcVar4)(local_128);
      }
      FUN_146637162(&local_c8,&DAT_14cbe2ee8,plVar8);
      uVar12 = uStack_110;
      lVar10 = (longlong)(int)uStack_110;
      uVar7 = (int)uStack_110 + 1;
      uStack_110 = CONCAT44(uStack_110._4_4_,uVar7);
      if (uStack_110._4_4_ < uVar7) {
        FUN_146638242(&local_118,uVar12 & 0xffffffff);
      }
      lVar10 = lVar10 * 0x20;
      *(undefined8 *)(local_118 + lVar10) = 0;
      *(code **)(local_118 + lVar10) = local_c8;
      *(undefined4 *)(local_118 + 8 + lVar10) = (undefined4)uStack_c0;
      *(undefined4 *)(local_118 + 0xc + lVar10) = uStack_c0._4_4_;
      *(undefined8 *)(local_118 + 0x10 + lVar10) = 0;
      *(undefined ****)(local_118 + 0x10 + lVar10) = local_b8;
      *(undefined4 *)(local_118 + 0x18 + lVar10) = (undefined4)local_b0;
      *(undefined4 *)(local_118 + 0x1c + lVar10) = local_b0._4_4_;
      local_b0 = 0;
      local_b8 = (undefined ***)0x0;
      uStack_c0 = 0;
      local_c8 = (code *)0x0;
    }
    if ((iVar3 == 4) || (iVar3 == 1)) {
      FUN_146637162(&local_c8,&DAT_14cbe2f98,&DAT_14cbe30a8);
      uVar12 = uStack_110;
      lVar10 = (longlong)(int)uStack_110;
      uVar7 = (int)uStack_110 + 1;
      uStack_110 = CONCAT44(uStack_110._4_4_,uVar7);
      if (uStack_110._4_4_ < uVar7) {
        FUN_146638242(&local_118,uVar12 & 0xffffffff);
      }
      lVar10 = lVar10 * 0x20;
      *(undefined8 *)(local_118 + lVar10) = 0;
      *(code **)(local_118 + lVar10) = local_c8;
      *(undefined4 *)(local_118 + 8 + lVar10) = (undefined4)uStack_c0;
      *(undefined4 *)(local_118 + 0xc + lVar10) = uStack_c0._4_4_;
      *(undefined8 *)(local_118 + 0x10 + lVar10) = 0;
      *(undefined ****)(local_118 + 0x10 + lVar10) = local_b8;
      *(undefined4 *)(local_118 + 0x18 + lVar10) = (undefined4)local_b0;
      *(undefined4 *)(local_118 + 0x1c + lVar10) = local_b0._4_4_;
      local_b0 = 0;
      local_b8 = (undefined ***)0x0;
      uStack_c0 = 0;
      local_c8 = (code *)0x0;
    }
    FUN_146637162(&local_c8,&DAT_14cbe2f08,&DAT_14cbe3078);
    uVar12 = uStack_110;
    lVar10 = (longlong)(int)uStack_110;
    uVar7 = (int)uStack_110 + 1;
    uStack_110 = CONCAT44(uStack_110._4_4_,uVar7);
    if (uStack_110._4_4_ < uVar7) {
      FUN_146638242(&local_118,uVar12 & 0xffffffff);
    }
    lVar10 = lVar10 * 0x20;
    *(undefined8 *)(local_118 + lVar10) = 0;
    *(code **)(local_118 + lVar10) = local_c8;
    *(undefined4 *)(local_118 + 8 + lVar10) = (undefined4)uStack_c0;
    *(undefined4 *)(local_118 + 0xc + lVar10) = uStack_c0._4_4_;
    *(undefined8 *)(local_118 + 0x10 + lVar10) = 0;
    *(undefined ****)(local_118 + 0x10 + lVar10) = local_b8;
    *(undefined4 *)(local_118 + 0x18 + lVar10) = (undefined4)local_b0;
    *(undefined4 *)(local_118 + 0x1c + lVar10) = local_b0._4_4_;
    local_b0 = 0;
    local_b8 = (undefined ***)0x0;
    uStack_c0 = 0;
    local_c8 = (code *)0x0;
    puVar9 = (undefined8 *)FUN_14135056a(param_1);
    local_b8 = (undefined ***)0x0;
    ppuStack_a8 = &PTR_LAB_14b9d8ac0;
    local_a0 = &local_f9;
    local_98 = &local_118;
    local_c8 = FUN_144326666;
    FUN_148e57a3a(*puVar9,&local_c8);
    if (local_c8 != (code *)0x0) {
      pppuVar11 = local_b8;
      if (local_b8 == (undefined ***)0x0) {
        pppuVar11 = &ppuStack_a8;
      }
      (*(code *)(*pppuVar11)[2])();
    }
    if (local_f9 == '\x01') {
      FUN_148c56694(param_1 + 0x2b0,&local_118);
      FUN_144315e9e(param_1);
    }
    if (local_128 != (longlong *)0x0) {
      (**(code **)(*local_128 + 0x10))();
    }
    uVar12 = uStack_110 & 0xffffffff;
  }
  FUN_145a5bc9c(local_118,uVar12);
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  if ((local_60[0] ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141355620 FUN_141355620 body=295 status=ok
// SIG undefined FUN_141355620(void)

undefined8 * FUN_141355620(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[2] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 3) = DAT_14c844848;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined2 *)(param_1 + 0x12) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x32) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3a) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  return param_1;
}



// FUNCTION 141355748 FUN_141355748 body=176 status=ok
// SIG undefined FUN_141355748(void)

void FUN_141355748(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14acb1590;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
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
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 1413557f8 FUN_1413557f8 body=286 status=ok
// SIG undefined FUN_1413557f8(void)

undefined8 FUN_1413557f8(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_141355910;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_141355910;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_141355910:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1413558bd;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_1413558bd;
    }
  }
  uVar6 = 0;
LAB_1413558bd:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141355918 FUN_141355918 body=232 status=ok
// SIG undefined FUN_141355918(void)

void FUN_141355918(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x88) == '\x01') {
    FUN_1449027d0(param_1,&local_38);
    lVar3 = *(longlong *)(local_38 + 0x120);
    AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x100));
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar4 = (int *)((longlong)local_30 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
    iVar2 = *(int *)(param_2 + 0x394);
    *(int *)(lVar3 + 0xb0) = *(int *)(lVar3 + 0xb0) + 1;
    if ((longlong)*(int *)(lVar3 + 0xa8) != 0) {
      piVar4 = *(int **)(lVar3 + 0xa0);
      lVar5 = (longlong)*(int *)(lVar3 + 0xa8) << 6;
      do {
        if (*piVar4 == iVar2) {
          if (piVar4 != (int *)0x0) {
            *(undefined1 *)((longlong)piVar4 + 0x19) = *(undefined1 *)(param_2 + 0x1350);
            *(int *)(lVar3 + 0xf8) = *(int *)(lVar3 + 0xf8) + 1;
          }
          break;
        }
        piVar4 = piVar4 + 0x10;
        lVar5 = lVar5 + -0x40;
      } while (lVar5 != 0);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x100));
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141355a01 FUN_141355a01 body=170 status=ok
// SIG undefined FUN_141355a01(void)

void FUN_141355a01(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    param_1 = param_1 + 0x30;
    do {
      *(undefined4 *)(plVar1 + 9) = 0;
      if (plVar1[8] != 0) {
        FUN_1400020a8();
      }
      *(undefined4 *)(plVar1 + 1) = 0;
      if (*(int *)((longlong)plVar1 + 0xc) != 0) {
        FUN_14472eb64(plVar1,0);
      }
      plVar1[6] = 0xffffffff;
      *(undefined4 *)(plVar1 + 5) = 0;
      if (0x80 < *(uint *)((longlong)plVar1 + 0x2c)) {
        *(undefined4 *)((longlong)plVar1 + 0x2c) = 0x80;
        FUN_1446efbd8(param_1);
      }
      if (plVar1[4] != 0) {
        FUN_1400020a8();
      }
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xe;
      param_1 = param_1 + 0x70;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141355aac FUN_141355aac body=55 status=ok
// SIG undefined FUN_141355aac(void)

void FUN_141355aac(longlong *param_1)

{
  FUN_141355ae4(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141355ae4 FUN_141355ae4 body=527 status=ok
// SIG undefined FUN_141355ae4(void)

void FUN_141355ae4(longlong *param_1,int param_2)

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
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  undefined1 auStack_98 [40];
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
    uVar11 = 1;
    local_58._4_4_ = 0;
    uVar14 = 0xffffffff;
    iVar15 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar11 = local_68 >> 0x20;
    uVar14 = (uint)local_58;
    iVar15 = (int)local_68;
  }
  plVar6 = local_60;
  iVar8 = local_58._4_4_;
  iVar12 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      plVar9 = *(longlong **)(*param_1 + 8 + (longlong)iVar8 * 0x18);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar9 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
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
      uVar14 = uVar14 & ~(uint)uVar11;
      plVar9 = (longlong *)plVar6[2];
      if ((longlong *)plVar6[2] == (longlong *)0x0) {
        plVar9 = plVar6;
      }
      iVar4 = (int)plVar6[3];
      lVar13 = (longlong)iVar15;
      uVar7 = *(uint *)((longlong)plVar9 + lVar13 * 4) & uVar14;
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
          iVar12 = iVar12 + 0x20;
          uVar7 = *(uint *)((longlong)plVar9 + lVar10 * 4 + lVar13 * 4 + 4);
          if (uVar7 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar5 - lVar13 == lVar10) goto LAB_141355c1f;
        }
        iVar15 = iVar15 + (int)lVar10 + 1;
        uVar14 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar7 & uVar7);
      uVar3 = uVar11 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar8 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar4);
  }
LAB_141355c1f:
  plVar6 = local_70;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar14 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar14) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar7 = 0x80;
    if (0x80 < (int)uVar14) {
      uVar7 = uVar14;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar7;
    FUN_1446efbd8(plVar6,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141355cf6 FUN_141355cf6 body=478 status=ok
// SIG undefined FUN_141355cf6(void)

void FUN_141355cf6(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar15 = 1;
    local_58._4_4_ = 0;
    uVar14 = 0xffffffff;
    iVar16 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar15 = local_68 >> 0x20;
    uVar14 = (uint)local_58;
    iVar16 = (int)local_68;
  }
  plVar7 = local_60;
  iVar9 = local_58._4_4_;
  iVar12 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      plVar10 = *(longlong **)(*param_1 + 0x10 + (longlong)iVar9 * 0x28);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar10 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar3 = (int *)((longlong)plVar10 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      uVar14 = uVar14 & ~(uint)uVar15;
      plVar10 = (longlong *)plVar7[2];
      if ((longlong *)plVar7[2] == (longlong *)0x0) {
        plVar10 = plVar7;
      }
      iVar5 = (int)plVar7[3];
      lVar13 = (longlong)iVar16;
      uVar8 = *(uint *)((longlong)plVar10 + lVar13 * 4) & uVar14;
      if (uVar8 == 0) {
        iVar9 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar9 = iVar5 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar6 = iVar9;
        if (iVar9 < iVar16) {
          iVar6 = iVar16;
        }
        if (iVar9 <= iVar16) break;
        lVar11 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar8 = *(uint *)((longlong)plVar10 + lVar11 * 4 + lVar13 * 4 + 4);
          if (uVar8 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar6 - lVar13 == lVar11) goto LAB_141355e2d;
        }
        iVar16 = iVar16 + (int)lVar11 + 1;
        uVar14 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar8 & uVar8);
      uVar4 = uVar15 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar9 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar5);
  }
LAB_141355e2d:
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
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141355ed6 FUN_141355ed6 body=478 status=ok
// SIG undefined FUN_141355ed6(void)

void FUN_141355ed6(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar15 = 1;
    local_58._4_4_ = 0;
    uVar14 = 0xffffffff;
    iVar16 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar15 = local_68 >> 0x20;
    uVar14 = (uint)local_58;
    iVar16 = (int)local_68;
  }
  plVar7 = local_60;
  iVar9 = local_58._4_4_;
  iVar12 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      plVar10 = *(longlong **)(*param_1 + 0x10 + (longlong)iVar9 * 0x20);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar10 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar3 = (int *)((longlong)plVar10 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      uVar14 = uVar14 & ~(uint)uVar15;
      plVar10 = (longlong *)plVar7[2];
      if ((longlong *)plVar7[2] == (longlong *)0x0) {
        plVar10 = plVar7;
      }
      iVar5 = (int)plVar7[3];
      lVar13 = (longlong)iVar16;
      uVar8 = *(uint *)((longlong)plVar10 + lVar13 * 4) & uVar14;
      if (uVar8 == 0) {
        iVar9 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar9 = iVar5 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar6 = iVar9;
        if (iVar9 < iVar16) {
          iVar6 = iVar16;
        }
        if (iVar9 <= iVar16) break;
        lVar11 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar8 = *(uint *)((longlong)plVar10 + lVar11 * 4 + lVar13 * 4 + 4);
          if (uVar8 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar6 - lVar13 == lVar11) goto LAB_14135600d;
        }
        iVar16 = iVar16 + (int)lVar11 + 1;
        uVar14 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar8 & uVar8);
      uVar4 = uVar15 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar9 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar5);
  }
LAB_14135600d:
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
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413560b6 FUN_1413560b6 body=473 status=ok
// SIG undefined FUN_1413560b6(void)

void FUN_1413560b6(longlong *param_1)

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
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar13 = 1;
    local_58._4_4_ = 0;
    uVar12 = 0xffffffff;
    iVar14 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar13 = local_68 >> 0x20;
    uVar12 = (uint)local_58;
    iVar14 = (int)local_68;
  }
  plVar4 = local_60;
  iVar5 = (int)local_60[3];
  iVar7 = local_58._4_4_;
  iVar10 = local_50;
  if (local_58._4_4_ < iVar5) {
    do {
      lVar11 = *(longlong *)(*param_1 + 8 + (longlong)iVar7 * 0x18);
      if (lVar11 != 0) {
        if (*(longlong *)(lVar11 + 0x30) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(lVar11);
        iVar5 = (int)plVar4[3];
      }
      uVar12 = uVar12 & ~(uint)uVar13;
      plVar8 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar8 = plVar4;
      }
      lVar11 = (longlong)iVar14;
      uVar6 = *(uint *)((longlong)plVar8 + lVar11 * 4) & uVar12;
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
          uVar6 = *(uint *)((longlong)plVar8 + lVar9 * 4 + lVar11 * 4 + 4);
          if (uVar6 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar3 - lVar11 == lVar9) goto LAB_1413561e8;
        }
        iVar14 = iVar14 + (int)lVar9 + 1;
        uVar12 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar6 & uVar6);
      uVar2 = uVar13 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar7 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar5);
  }
LAB_1413561e8:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141356290 FUN_141356290 body=494 status=ok
// SIG undefined FUN_141356290(void)

void FUN_141356290(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 auStack_98 [40];
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
    local_58._4_4_ = 0;
    uVar11 = 0xffffffff;
    iVar13 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar12 = local_68 >> 0x20;
    uVar11 = (uint)local_58;
    iVar13 = (int)local_68;
  }
  plVar4 = local_60;
  iVar6 = local_58._4_4_;
  iVar8 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar10 = *param_1;
      lVar9 = (longlong)iVar6 * 0x60;
      *(undefined4 *)(lVar10 + 0x50 + lVar9) = 0;
      if (*(longlong *)(lVar10 + 0x48 + lVar9) != 0) {
        FUN_1400020a8();
      }
      FUN_14041fb7c(lVar10 + lVar9 + 8);
      uVar11 = uVar11 & ~(uint)uVar12;
      plVar7 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar7 = plVar4;
      }
      iVar2 = (int)plVar4[3];
      lVar10 = (longlong)iVar13;
      uVar5 = *(uint *)((longlong)plVar7 + lVar10 * 4) & uVar11;
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
        lVar9 = 0;
        while( true ) {
          iVar8 = iVar8 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar9 * 4 + lVar10 * 4 + 4);
          if (uVar5 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar3 - lVar10 == lVar9) goto LAB_1413563cb;
        }
        iVar13 = iVar13 + (int)lVar9 + 1;
        uVar11 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar12 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar6 = (iVar8 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_1413563cb:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1448fc38a(param_1,0);
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



// FUNCTION 141356480 FUN_141356480 body=640 status=ok
// SIG undefined FUN_141356480(void)

void FUN_141356480(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  undefined1 auStack_98 [40];
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
    uVar11 = 1;
    local_58._4_4_ = 0;
    uVar12 = 0xffffffff;
    iVar13 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar11 = local_68 >> 0x20;
    uVar12 = (uint)local_58;
    iVar13 = (int)local_68;
  }
  plVar4 = local_60;
  iVar6 = local_58._4_4_;
  iVar9 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar10 = *param_1;
      lVar8 = (longlong)iVar6 * 0x80;
      *(undefined4 *)(lVar10 + 0x70 + lVar8) = 0;
      if (*(longlong *)(lVar10 + 0x68 + lVar8) != 0) {
        FUN_1400020a8();
      }
      lVar10 = lVar10 + lVar8;
      *(undefined4 *)(lVar10 + 0x30) = 0;
      if (*(int *)(lVar10 + 0x34) != 0) {
        FUN_14472eb64((longlong *)(lVar10 + 0x28),0);
      }
      *(undefined8 *)(lVar10 + 0x58) = 0xffffffff;
      *(undefined4 *)(lVar10 + 0x50) = 0;
      if (0x80 < *(uint *)(lVar10 + 0x54)) {
        *(undefined4 *)(lVar10 + 0x54) = 0x80;
        FUN_1446efbd8(lVar10 + 0x38,0);
      }
      if (*(longlong *)(lVar10 + 0x48) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar10 + 0x28) != 0) {
        FUN_1400020a8();
      }
      uVar12 = uVar12 & ~(uint)uVar11;
      plVar7 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar7 = plVar4;
      }
      iVar2 = (int)plVar4[3];
      lVar10 = (longlong)iVar13;
      uVar5 = *(uint *)((longlong)plVar7 + lVar10 * 4) & uVar12;
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
          iVar9 = iVar9 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar8 * 4 + lVar10 * 4 + 4);
          if (uVar5 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar3 - lVar10 == lVar8) goto LAB_141356603;
        }
        iVar13 = iVar13 + (int)lVar8 + 1;
        uVar12 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar11 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar6 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_141356603:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14095c99c(param_1,0);
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



// FUNCTION 141356701 FUN_141356701 body=83 status=ok
// SIG undefined FUN_141356701(void)

void FUN_141356701(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      lVar2 = 0x80;
      do {
        if (*(longlong *)(lVar1 + -0x10 + lVar2) != 0) {
          FUN_1400020a8();
        }
        lVar2 = lVar2 + -0x10;
      } while (lVar2 != 0);
      FUN_1400020a8(lVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}



// FUNCTION 141356754 FUN_141356754 body=763 status=ok
// SIG undefined FUN_141356754(void)

void FUN_141356754(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = param_1 + 0x18;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_70 = (longlong *)param_1;
  if (*(int *)(param_1 + 0x30) == 0) {
    uVar10 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar10 = local_68 >> 0x20;
  }
  lVar3 = local_60;
  local_70 = (longlong *)((longlong)local_70 + 8);
  iVar4 = *(int *)(local_60 + 0x18);
  iVar13 = (int)local_68;
  uVar12 = (uint)local_58;
  iVar6 = local_58._4_4_;
  iVar9 = local_50;
  if (local_58._4_4_ < iVar4) {
    do {
      lVar7 = *(longlong *)(*local_70 + 8 + (longlong)iVar6 * 0x18);
      if (lVar7 != 0) {
        *(undefined4 *)(lVar7 + 200) = 0;
        if (*(longlong *)(lVar7 + 0xc0) != 0) {
          FUN_1400020a8();
        }
        *(undefined4 *)(lVar7 + 0x88) = 0;
        if (*(int *)(lVar7 + 0x8c) != 0) {
          FUN_144727cd0((longlong *)(lVar7 + 0x80),0);
        }
        *(undefined8 *)(lVar7 + 0xb0) = 0xffffffff;
        *(undefined4 *)(lVar7 + 0xa8) = 0;
        if (0x80 < *(uint *)(lVar7 + 0xac)) {
          *(undefined4 *)(lVar7 + 0xac) = 0x80;
          FUN_1446efbd8(lVar7 + 0x90,0);
        }
        if (*(longlong *)(lVar7 + 0xa0) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(lVar7 + 0x80) != 0) {
          FUN_1400020a8();
        }
        *(undefined4 *)(lVar7 + 0x78) = 0;
        if (*(longlong *)(lVar7 + 0x70) != 0) {
          FUN_1400020a8();
        }
        *(undefined4 *)(lVar7 + 0x38) = 0;
        if (*(int *)(lVar7 + 0x3c) != 0) {
          FUN_144727cd0((longlong *)(lVar7 + 0x30),0);
        }
        *(undefined8 *)(lVar7 + 0x60) = 0xffffffff;
        *(undefined4 *)(lVar7 + 0x58) = 0;
        if (0x80 < *(uint *)(lVar7 + 0x5c)) {
          *(undefined4 *)(lVar7 + 0x5c) = 0x80;
          FUN_1446efbd8(lVar7 + 0x40,0);
        }
        if (*(longlong *)(lVar7 + 0x50) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(lVar7 + 0x30) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(lVar7 + 0x20) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(lVar7);
        iVar4 = *(int *)(lVar3 + 0x18);
      }
      uVar12 = uVar12 & ~(uint)uVar10;
      lVar7 = *(longlong *)(lVar3 + 0x10);
      if (*(longlong *)(lVar3 + 0x10) == 0) {
        lVar7 = lVar3;
      }
      lVar11 = (longlong)iVar13;
      uVar5 = *(uint *)(lVar7 + lVar11 * 4) & uVar12;
      if (uVar5 == 0) {
        iVar6 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar6 = iVar4 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar2 = iVar6;
        if (iVar6 < iVar13) {
          iVar2 = iVar13;
        }
        if (iVar6 <= iVar13) break;
        lVar8 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar5 = *(uint *)(lVar7 + lVar11 * 4 + 4 + lVar8 * 4);
          if (uVar5 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar2 - lVar11 == lVar8) goto LAB_141356a1e;
        }
        iVar13 = iVar13 + (int)lVar8 + 1;
        uVar12 = 0xffffffff;
      }
      uVar10 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar10 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = (iVar9 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar4);
  }
LAB_141356a1e:
  FUN_14591a47c(local_70);
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141356a50 FUN_141356a50 body=553 status=ok
// SIG undefined FUN_141356a50(void)

void FUN_141356a50(longlong *param_1)

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
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
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
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar9 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar9 = local_58 >> 0x20;
    }
    iVar5 = (int)local_58;
    uVar6 = (uint)local_48;
    iVar7 = local_48._4_4_;
    iVar10 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar12 = *param_1;
        lVar11 = (longlong)iVar7;
        uVar2 = *(undefined8 *)(lVar12 + lVar11 * 0x18);
        uVar14 = (longlong)(int)((uint)((ulonglong)uVar2 >> 0x20) ^ (uint)uVar2) &
                 (longlong)(int)param_1[9] - 1U;
        iVar13 = (int)uVar14;
        *(int *)(lVar12 + 0x14 + lVar11 * 0x18) = iVar13;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar12 + 0x10 + lVar11 * 0x18) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar14) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar13 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7
        ;
        uVar6 = ~(uint)uVar9 & uVar6;
        plVar8 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar8 = local_50;
        }
        iVar13 = (int)local_50[3];
        lVar12 = (longlong)iVar5;
        uVar4 = *(uint *)((longlong)plVar8 + lVar12 * 4) & uVar6;
        if (uVar4 == 0) {
          iVar7 = iVar13 + 0x1e;
          if (-1 < iVar13 + -1) {
            iVar7 = iVar13 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar5) {
            iVar3 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar11 = 0;
          while( true ) {
            iVar10 = iVar10 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar11 * 4 + lVar12 * 4 + 4);
            if (uVar4 != 0) break;
            lVar11 = lVar11 + 1;
            if (iVar3 - lVar12 == lVar11) goto LAB_141356c30;
          }
          iVar5 = iVar5 + (int)lVar11 + 1;
          uVar6 = 0xffffffff;
        }
        uVar9 = (ulonglong)(-uVar4 & uVar4);
        uVar14 = uVar9 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar7 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar13);
    }
  }
LAB_141356c30:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141356c7a FUN_141356c7a body=322 status=ok
// SIG undefined FUN_141356c7a(void)

longlong FUN_141356c7a(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + -0x10);
  if (lVar1 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1459f2e4c;
      local_38 = &LAB_148c39de3;
      local_40 = &LAB_1457a9eb2;
      local_48 = &DAT_149e063b2;
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      lVar1 = *(longlong *)(lVar1 + 0x398);
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar1);
      }
      goto LAB_141356ce8;
    }
  }
  lVar1 = 0;
LAB_141356ce8:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141356dbe FUN_141356dbe body=497 status=ok
// SIG undefined FUN_141356dbe(void)

void FUN_141356dbe(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  code *local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar5 = FUN_141356c7a();
  if (lVar5 != 0) {
    if (DAT_14cbae3d8 == 0) {
      local_70 = &local_48;
      local_48 = FUN_141030f22;
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
    if (((*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) == DAT_14cbae3d8 + 0x30)) &&
       (DAT_14cb758b8 != 0)) {
      param_1 = param_1 + -0x30;
      local_48 = (code *)0x0;
      uStack_40 = 0;
      FUN_140b1bfcc(DAT_14cb758b8,&local_48);
      FUN_1449027d0(param_1,local_58);
      pcVar4 = local_48;
      lVar7 = (longlong)(int)uStack_40;
      if (lVar7 != 0) {
        lVar6 = 0;
        do {
          lVar3 = *(longlong *)(pcVar4 + lVar6);
          if (lVar3 != 0) {
            FUN_1442af3ec(param_1,lVar5,lVar3,0);
            FUN_141318398(param_1,lVar5,lVar3);
            FUN_140de831e(param_1,lVar3);
          }
          lVar6 = lVar6 + 8;
        } while (lVar7 * 8 != lVar6);
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
      if (local_48 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141356fb0 FUN_141356fb0 body=44 status=ok
// SIG undefined FUN_141356fb0(void)

undefined8 FUN_141356fb0(longlong param_1)

{
  longlong lVar1;
  
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0x1f0) != 0)) &&
     (lVar1 = FUN_141356fdc(), lVar1 != 0)) {
    return *(undefined8 *)(lVar1 + 0x30);
  }
  return 0;
}



// FUNCTION 141356fdc FUN_141356fdc body=105 status=ok
// SIG undefined FUN_141356fdc(void)

void FUN_141356fdc(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_141357092();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_141357046(param_1 + 0x100,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141357046 FUN_141357046 body=76 status=ok
// SIG undefined FUN_141357046(void)

void FUN_141357046(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_141357092();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_141357083;
    }
  }
  lVar2 = 0;
LAB_141357083:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 141357092 FUN_141357092 body=228 status=ok
// SIG undefined FUN_141357092(void)

longlong FUN_141357092(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb96e08 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1417ad04a;
    local_28 = &LAB_14107a1fc;
    local_38 = &LAB_148a68df1;
    local_40 = FUN_14657edfd;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxOnline",L"GbxAchievementsSubsystem",&DAT_14cb96e08,&DAT_148a68df0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb96e08;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141357178 FUN_141357178 body=228 status=ok
// SIG undefined FUN_141357178(void)

longlong FUN_141357178(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb97018 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1417ad04a;
    local_28 = &LAB_14107a1fc;
    local_38 = &LAB_148a68e3d;
    local_40 = FUN_14657f369;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxOnline",L"GbxTextChatSubsystem",&DAT_14cb97018,&DAT_148a68e3c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb97018;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14135725e FUN_14135725e body=858 status=ok
// SIG undefined FUN_14135725e(void)

void FUN_14135725e(longlong param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  void *_Src;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_a8 [40];
  uint *local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  void *local_60;
  undefined8 local_58;
  undefined2 local_50;
  uint local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = param_2;
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
    lVar5 = param_1 + 0x60;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x68);
    }
    iVar8 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x70) - 1U & param_2) * 4);
    if (iVar8 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x28);
      do {
        if (*(uint *)(lVar5 + (longlong)iVar8 * 0x70) == param_2) goto LAB_141357335;
        iVar8 = *(int *)((longlong)iVar8 * 0x70 + lVar5 + 0x68);
      } while (iVar8 != -1);
    }
  }
  local_80 = &local_48;
  FUN_145f97a90((longlong *)(param_1 + 0x28),&local_44);
  uVar2 = local_48;
  lVar5 = *(longlong *)(param_1 + 0x28) + (longlong)local_44 * 0x70;
  uVar6 = FUN_140b70546(param_1);
  lVar7 = FUN_14658115e(uVar6,uVar2);
  if (lVar7 != 0) {
    FUN_146581198(lVar7,&local_80);
    FUN_140cb1648(lVar5 + 8,&local_80);
    FUN_140cb1696(local_80,(ulonglong)local_78 & 0xffffffff);
    if (local_80 != (uint *)0x0) {
      FUN_1400020a8();
    }
    *(uint *)(lVar5 + 100) = local_48;
    local_80 = *(uint **)(lVar7 + 0x18);
    local_78 = *(longlong **)(lVar7 + 0x20);
    if (local_78 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_78 + 1) = (int)local_78[1] + 1;
      UNLOCK();
    }
    local_70 = *(undefined8 *)(lVar7 + 0x28);
    local_68 = *(longlong **)(lVar7 + 0x30);
    if (local_68 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_68 + 1) = (int)local_68[1] + 1;
      UNLOCK();
    }
    local_60 = (void *)0x0;
    uVar2 = *(uint *)(lVar7 + 0x40);
    _Src = *(void **)(lVar7 + 0x38);
    local_58 = CONCAT44(local_58._4_4_,uVar2);
    if ((longlong)(int)uVar2 == 0) {
      local_58 = (ulonglong)uVar2;
    }
    else {
      FUN_1446dd670(&local_60,uVar2,0);
      memcpy(local_60,_Src,(longlong)(int)uVar2 * 2);
    }
    plVar4 = local_78;
    local_50 = *(undefined2 *)(lVar7 + 0x48);
    if ((uint **)(lVar5 + 0x18) == &local_80) {
      *(undefined2 *)(lVar5 + 0x48) = local_50;
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      *(uint **)(lVar5 + 0x18) = local_80;
      local_80 = (uint *)0x0;
      plVar3 = *(longlong **)(lVar5 + 0x20);
      if (local_78 != plVar3) {
        local_78 = (longlong *)0x0;
        *(longlong **)(lVar5 + 0x20) = plVar4;
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
      }
      plVar3 = local_68;
      *(undefined8 *)(lVar5 + 0x28) = local_70;
      local_70 = 0;
      plVar4 = *(longlong **)(lVar5 + 0x30);
      if (local_68 != plVar4) {
        local_68 = (longlong *)0x0;
        *(longlong **)(lVar5 + 0x30) = plVar3;
        if (plVar4 != (longlong *)0x0) {
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
      if (*(longlong *)(lVar5 + 0x38) != 0) {
        FUN_1400020a8();
      }
      *(void **)(lVar5 + 0x38) = local_60;
      local_60 = (void *)0x0;
      *(undefined4 *)(lVar5 + 0x40) = (undefined4)local_58;
      *(undefined4 *)(lVar5 + 0x44) = local_58._4_4_;
      local_58 = 0;
      *(undefined2 *)(lVar5 + 0x48) = local_50;
    }
    plVar4 = local_68;
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_68 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    plVar4 = local_78;
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_78 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_78)(local_78);
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
  if ((1 < *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x5c)) &&
     (*(char *)(param_1 + 0x20) == '\0')) {
    *(undefined1 *)(lVar5 + 0x60) = 1;
  }
  FUN_140cb1814(param_1,lVar5 + 8);
LAB_141357335:
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413575ba FUN_1413575ba body=944 status=ok
// SIG undefined FUN_1413575ba(void)

void FUN_1413575ba(longlong *param_1,undefined4 param_2)

{
  int *piVar1;
  longlong **pplVar2;
  undefined4 uVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  byte bVar9;
  longlong **pplVar10;
  undefined1 auStack_b8 [32];
  longlong local_98 [2];
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong **local_70;
  longlong *local_68;
  longlong *plStack_60;
  undefined1 local_54 [4];
  longlong *local_50;
  longlong **local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar4 = FUN_1459ca56e();
  if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
  }
  (**(code **)(*param_1 + 0x180))(param_1);
  local_50 = (longlong *)0x0;
  plVar5 = (longlong *)FUN_1401e3228();
  if (plVar5 == (longlong *)0x0) {
    local_68 = (longlong *)0x0;
    plStack_60 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x80))(plVar5,&local_68);
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x110))(local_68,&local_78,param_2);
      if (local_78 == (longlong *)0x0) {
LAB_141357684:
        (**(code **)(*param_1 + 0x2d8))(param_1,param_2);
      }
      else {
        cVar4 = (**(code **)(*local_78 + 0x28))();
        if (cVar4 == '\0') goto LAB_141357684;
        local_50 = local_78;
        local_48 = local_70;
        if (local_70 == (longlong **)0x0) {
          pplVar10 = (longlong **)0x0;
        }
        else {
          LOCK();
          *(int *)(local_70 + 1) = *(int *)(local_70 + 1) + 1;
          UNLOCK();
          pplVar10 = local_70;
        }
        plVar6 = (longlong *)FUN_14001cc68(0xd8,0x10);
        plVar6[1] = (longlong)&DAT_100000001;
        *plVar6 = (longlong)&PTR_FUN_14b4f66e0;
        plVar5 = plVar6 + 2;
        FUN_148aab67e(plVar5,&local_50,param_2);
        local_88 = plVar5;
        local_80 = plVar6;
        FUN_148ab39d6(&local_88,plVar5);
        if (pplVar10 != (longlong **)0x0) {
          LOCK();
          pplVar2 = pplVar10 + 1;
          *(int *)pplVar2 = *(int *)pplVar2 + -1;
          UNLOCK();
          if (*(int *)pplVar2 == 0) {
            (*(code *)**pplVar10)(pplVar10);
            LOCK();
            piVar1 = (int *)((longlong)pplVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*pplVar10)[2])(pplVar10);
            }
          }
        }
        lVar7 = (**(code **)(*(longlong *)param_1[6] + 0x280))();
        local_88[7] = lVar7;
        if (lVar7 == 0) {
          (**(code **)(*param_1 + 0x2d8))(param_1,param_2);
        }
        else {
          if (local_78 == (longlong *)0x0) {
LAB_14135784f:
            local_98[0] = 0;
            local_98[1] = 0;
          }
          else {
            cVar4 = (**(code **)(*local_78 + 0x28))();
            if (cVar4 == '\0') goto LAB_14135784f;
            (**(code **)(*local_78 + 0x30))(local_78,local_98);
          }
          local_50 = local_98;
          local_48 = &local_88;
          FUN_14620ef66(param_1 + 0x1d,local_54);
          if (local_98[0] != 0) {
            FUN_1400020a8();
          }
          FUN_14164c43e(param_1);
          FUN_145f8388a(param_1,&local_50);
          plVar5 = local_50;
          if ((local_50 != (longlong *)0x0) && (lVar7 = local_50[6], (int)lVar7 == (int)local_88[6])
             ) {
            uVar8 = (**(code **)(*param_1 + 0x180))(param_1);
            lVar7 = FUN_14127aa70(uVar8,(int)lVar7);
            if (lVar7 != 0) {
              bVar9 = *(byte *)(lVar7 + 0x23) ^ 1;
              FUN_143f45d52(param_1,(int)local_88[6],bVar9);
              pplVar10 = local_48;
              *(byte *)((longlong)param_1 + 0x39) = bVar9;
              uVar3 = *(undefined4 *)(lVar7 + 0x7c);
              if (local_48 != (longlong **)0x0) {
                LOCK();
                *(int *)(local_48 + 1) = *(int *)(local_48 + 1) + 1;
                UNLOCK();
              }
              plVar5 = (longlong *)plVar5[7];
              if (plVar5 != (longlong *)0x0) {
                (**(code **)(*plVar5 + 0x20))(plVar5,uVar3);
              }
              if (pplVar10 != (longlong **)0x0) {
                LOCK();
                pplVar2 = pplVar10 + 1;
                *(int *)pplVar2 = *(int *)pplVar2 + -1;
                UNLOCK();
                if (*(int *)pplVar2 == 0) {
                  (*(code *)**pplVar10)(pplVar10);
                  LOCK();
                  piVar1 = (int *)((longlong)pplVar10 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (*(code *)(*pplVar10)[2])(pplVar10);
                  }
                }
              }
            }
          }
          pplVar10 = local_48;
          if (local_48 != (longlong **)0x0) {
            LOCK();
            pplVar2 = local_48 + 1;
            *(int *)pplVar2 = *(int *)pplVar2 + -1;
            UNLOCK();
            if (*(int *)pplVar2 == 0) {
              (*(code *)**pplVar10)(pplVar10);
              LOCK();
              piVar1 = (int *)((longlong)pplVar10 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (*(code *)(*pplVar10)[2])(pplVar10);
              }
            }
          }
          FUN_148aab712(param_1,&local_88);
          (**(code **)(*param_1 + 0x2d0))(param_1,param_2);
          FUN_1458eaba4(param_1);
        }
        plVar5 = local_80;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_80 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*local_80)(local_80);
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
      if (local_70 != (longlong **)0x0) {
        LOCK();
        pplVar10 = local_70 + 1;
        *(int *)pplVar10 = *(int *)pplVar10 + -1;
        UNLOCK();
        if (*(int *)pplVar10 == 0) {
          (*(code *)**local_70)(local_70);
          LOCK();
          piVar1 = (int *)((longlong)local_70 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (*(code *)(*local_70)[2])(local_70);
          }
        }
      }
      goto LAB_1413576d1;
    }
  }
  (**(code **)(*param_1 + 0x2d8))(param_1,param_2);
LAB_1413576d1:
  plVar5 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_60 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141357988 FUN_141357988 body=481 status=ok
// SIG undefined FUN_141357988(void)

void FUN_141357988(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  size_t sVar4;
  char *pcVar5;
  ulonglong uVar6;
  char **ppcVar7;
  uint uVar8;
  undefined1 auStack_58 [40];
  char *local_30;
  undefined4 local_28;
  char *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((longlong)DAT_14cc074d8 < 0) {
    pcVar5 = (char *)(DAT_14cc074d8 & 0x7fffffffffffffff);
    if (DAT_14cc074e4 == '\x01') {
      ppcVar7 = &local_30;
      FUN_1446f470e(ppcVar7,pcVar5,1);
    }
    else {
      local_30 = pcVar5;
      if (pcVar5 == (char *)0x0) {
        local_28 = 0;
      }
      else {
        sVar4 = strlen(pcVar5);
        local_28 = (undefined4)sVar4;
      }
      ppcVar7 = &local_20;
      FUN_14001c09c(ppcVar7,&local_30,1);
    }
    uVar2 = (ulonglong)*(uint *)ppcVar7;
    uVar6 = (ulonglong)DAT_14cc074e0 << 0x20;
    DAT_14cc074d8 = uVar2;
  }
  else {
    uVar2 = (ulonglong)DAT_14cc074e0 << 0x20;
    uVar6 = DAT_14cc074d8 & 0xffffffff;
  }
  local_20 = (char *)(uVar6 | uVar2);
  uVar1 = (uint)((ulonglong)local_20 >> 0x10);
  uVar8 = (uint)local_20 & 0xffff;
  puVar3 = (undefined4 *)
           FUN_140dfb35a(param_1 + 0x1a8,
                         ((uint)local_20 << 0x10 | uVar8) + (int)((ulonglong)local_20 >> 0x20) +
                         (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar8 >> 4),&local_20);
  *puVar3 = 0;
  if ((longlong)DAT_14cc074e8 < 0) {
    pcVar5 = (char *)(DAT_14cc074e8 & 0x7fffffffffffffff);
    if (DAT_14cc074f4 == '\x01') {
      ppcVar7 = &local_30;
      FUN_1446f470e(ppcVar7,pcVar5,1);
    }
    else {
      local_30 = pcVar5;
      if (pcVar5 == (char *)0x0) {
        local_28 = 0;
      }
      else {
        sVar4 = strlen(pcVar5);
        local_28 = (undefined4)sVar4;
      }
      ppcVar7 = &local_20;
      FUN_14001c09c(ppcVar7,&local_30,1);
    }
    uVar2 = (ulonglong)*(uint *)ppcVar7;
    uVar6 = (ulonglong)DAT_14cc074f0 << 0x20;
    DAT_14cc074e8 = uVar2;
  }
  else {
    uVar2 = (ulonglong)DAT_14cc074f0 << 0x20;
    uVar6 = DAT_14cc074e8 & 0xffffffff;
  }
  local_20 = (char *)(uVar6 | uVar2);
  uVar1 = (uint)((ulonglong)local_20 >> 0x10);
  uVar8 = (uint)local_20 & 0xffff;
  puVar3 = (undefined4 *)
           FUN_140dfb35a(param_1 + 0x1a8,
                         ((uint)local_20 << 0x10 | uVar8) + (int)((ulonglong)local_20 >> 0x20) +
                         (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar8 >> 4),&local_20);
  *puVar3 = 1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141357b6a FUN_141357b6a body=417 status=ok
// SIG undefined FUN_141357b6a(void)

longlong FUN_141357b6a(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined4 local_70;
  undefined8 local_68;
  wchar_t *local_60;
  undefined4 local_58;
  code *local_50;
  undefined1 *local_48;
  undefined2 **local_40;
  undefined2 *local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((((*(int *)(param_1 + 0xbc) != 0) && (uVar1 = *(uint *)(param_1 + 0xb8), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar5 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar5 != (longlong *)0x0 && ((int)plVar5[2] == *(int *)(param_1 + 0xbc))))) &&
     (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (lVar6 = *plVar5, lVar6 != 0)))) {
    if (DAT_14c948fa0 == 0) {
      local_38 = &DAT_1427db2a2;
      lVar2 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c948fa0 = lVar2;
      FUN_1446f470e(local_30,L"ScriptStruct",1);
      local_48 = &LAB_1468915ce;
      local_50 = FUN_1427dc742;
      local_60 = L"Engine";
      local_58 = 199;
      local_68 = 0x10;
      local_70 = 0x10000020;
      local_78 = (wchar_t *)CONCAT44(local_78._4_4_,8);
      local_40 = &local_38;
      FUN_14574b4b2(lVar2);
      DAT_14c948fa0 = lVar2;
      uVar3 = FUN_1446f8646();
      lVar2 = DAT_14c948fa0;
      uVar4 = FUN_1449e2fb2();
      local_78 = L"ScriptStruct";
      FUN_14574b446(uVar4,lVar2,uVar3,L"/Script/CoreUObject");
    }
    if ((*(int *)(DAT_14c948fa0 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14c948fa0 + 0x38) * 8) == DAT_14c948fa0 + 0x30)) goto LAB_141357bfe;
  }
  lVar6 = 0;
LAB_141357bfe:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141357d0c FUN_141357d0c body=1309 status=ok
// SIG undefined FUN_141357d0c(void)

void FUN_141357d0c(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  float fVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_118 [32];
  undefined2 *local_f8;
  undefined8 *local_f0;
  int local_e8;
  undefined2 local_e0 [2];
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  byte local_98;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_14135822a(param_1,1);
  FUN_140898514(param_1 + 8,param_2);
  FUN_141358340(param_1,0);
  uVar9 = -(uint)(0.0001 < *(float *)(param_1[6] + 0x74));
  fVar2 = (float)(~uVar9 & 0x3f800000 | (uint)(1.0 / *(float *)(param_1[6] + 0x74)) & uVar9);
  lVar3 = (**(code **)(*param_1 + 0x180))(param_1);
  if (*(longlong *)(lVar3 + 0x1f0) == 0) {
    puVar4 = (undefined8 *)(lVar3 + 0x458);
  }
  else {
    puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
  }
  uVar1 = *puVar4;
  fVar11 = *(float *)(param_1[0x14] + 0x80);
  fVar10 = (float)(**(code **)(*param_1 + 0x2c8))(param_1);
  fVar10 = fVar10 * fVar11;
  if (fVar10 <= 0.01) {
    fVar10 = 0.01;
  }
  local_f0 = (undefined8 *)0x0;
  local_e8 = 0;
  FUN_1446efa72(&local_f0,0,3,0x10);
  puVar4 = local_f0;
  local_e8 = 3;
  *local_f0 = &PTR_LAB_14a1c8830;
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
  local_f0[2] = lVar5;
  *local_f0 = &PTR_FUN_14b9e1090;
  local_f0[3] = 0;
  iVar6 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar9 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_f0 + 3) = uVar9;
    if ((int)uVar9 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    iVar6 = *(int *)(lVar3 + 0x10);
    if (*(int *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar6 = *(int *)(lVar3 + 0x10);
      bVar8 = iVar6 == 0;
      if (bVar8) {
        *(int *)(lVar3 + 0x10) = iVar7;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar6 = iVar7;
      }
    }
  }
  *(int *)((longlong)puVar4 + 0x1c) = iVar6;
  puVar4[4] = FUN_141148634;
  local_d8 = 0;
  local_d0 = 0;
  FUN_14487d8d8(&local_d8,&local_f0);
  local_98 = 1;
  local_e0[0] = 0;
  local_dc = 0xbf800000;
  local_f8 = local_e0;
  FUN_1406f4044(uVar1,param_1 + 0x20,&local_d8,fVar10 * fVar2);
  (*(code *)(&PTR_LAB_14a1c87a0)[local_98])(&local_d8);
  if (local_e8 == 0) {
LAB_141357f26:
    if (local_f0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_f0 != (undefined8 *)0x0) {
    (**(code **)*local_f0)(local_f0,0);
    FUN_1446efa72(&local_f0,0,0,0x10);
    local_e8 = 0;
    goto LAB_141357f26;
  }
  fVar11 = (float)(**(code **)(*param_1 + 0x2c8))(param_1);
  local_f0 = (undefined8 *)0x0;
  local_e8 = 0;
  FUN_1446efa72(&local_f0,0,3,0x10);
  puVar4 = local_f0;
  local_e8 = 3;
  *local_f0 = &PTR_LAB_14a1c8830;
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
  local_f0[2] = lVar5;
  *local_f0 = &PTR_FUN_14b9e1090;
  local_f0[3] = 0;
  iVar6 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar9 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_f0 + 3) = uVar9;
    if ((int)uVar9 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    iVar6 = *(int *)(lVar3 + 0x10);
    if (*(int *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar6 = *(int *)(lVar3 + 0x10);
      bVar8 = iVar6 == 0;
      if (bVar8) {
        *(int *)(lVar3 + 0x10) = iVar7;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar6 = iVar7;
      }
    }
  }
  *(int *)((longlong)puVar4 + 0x1c) = iVar6;
  puVar4[4] = FUN_141148712;
  local_d8 = 0;
  local_d0 = 0;
  FUN_14487d8d8(&local_d8,&local_f0);
  local_98 = 1;
  local_e0[0] = 0;
  local_dc = 0xbf800000;
  local_f8 = local_e0;
  FUN_1406f4044(uVar1,param_1 + 0x1f,&local_d8,fVar2 * fVar11);
  (*(code *)(&PTR_LAB_14a1c87a0)[local_98])(&local_d8);
  if (local_e8 != 0) {
    if (local_f0 == (undefined8 *)0x0) goto LAB_14135807a;
    (**(code **)*local_f0)(local_f0,0);
    FUN_1446efa72(&local_f0,0,0,0x10);
    local_e8 = 0;
  }
  if (local_f0 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14135807a:
  if ((local_80 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14135822a FUN_14135822a body=278 status=ok
// SIG undefined FUN_14135822a(void)

void FUN_14135822a(longlong param_1,char param_2)

{
  ulonglong uVar1;
  byte bVar2;
  longlong lVar3;
  undefined *puVar4;
  uint *puVar5;
  longlong *plVar6;
  uint uVar7;
  
  *(char *)(param_1 + 0xd4) = param_2;
  if (*(char *)(*(longlong *)(param_1 + 0x30) + 0x178) == '\x03') {
    bVar2 = *(byte *)(param_1 + 0xd5) + 1 & 0xf | param_2 << 4;
    if (*(byte *)(param_1 + 0xd5) != bVar2) {
      *(byte *)(param_1 + 0xd5) = bVar2;
      uVar1 = *(ulonglong *)(param_1 + 0x38);
      if (uVar1 < 0xffffffff00000000) {
        plVar6 = DAT_14c9980d0;
        if (DAT_14c9980d8 == 0) {
          plVar6 = (longlong *)0x0;
        }
        (**(code **)(*plVar6 + 0x58))(plVar6,param_1,uVar1,2);
      }
      else {
        uVar7 = (uint)uVar1;
        if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c998088)) {
          puVar4 = &DAT_14c998070;
          if (DAT_14c998080 != (undefined *)0x0) {
            puVar4 = DAT_14c998080;
          }
          if ((*(uint *)(puVar4 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar7 & 0x1f) & 1) != 0) {
            lVar3 = DAT_14c998060 + (ulonglong)(uVar7 & 0x7fffffff) * 0x68;
            puVar5 = *(uint **)(lVar3 + 0x18);
            if (*(uint **)(lVar3 + 0x18) == (uint *)0x0) {
              puVar5 = (uint *)(lVar3 + 8);
            }
            *puVar5 = *puVar5 | 4;
            *(byte *)(lVar3 + 0x60) = *(byte *)(lVar3 + 0x60) | 1;
          }
        }
      }
    }
    if (((*(byte *)(param_1 + 0xd8) & 1) != 0) &&
       (bVar2 = *(byte *)(param_1 + 0xd5) | 0x80, *(byte *)(param_1 + 0xd5) != bVar2)) {
      *(byte *)(param_1 + 0xd5) = bVar2;
      FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),2);
      return;
    }
  }
  return;
}



// FUNCTION 141358340 FUN_141358340 body=404 status=ok
// SIG undefined FUN_141358340(void)

void FUN_141358340(longlong *param_1,float param_2)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  float fVar7;
  
  fVar7 = param_2;
  if (param_2 <= 0.0) {
    fVar7 = (float)(**(code **)(*param_1 + 0x2c8))(param_1);
  }
  lVar5 = param_1[6];
  cVar3 = FUN_140dd024a(lVar5,DAT_14cbe7988);
  *(char *)(param_1 + 0x27) = cVar3;
  if (cVar3 != '\0') {
    lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
    param_1[0x28] = *(longlong *)(lVar4 + 0x6d0);
    if (param_2 <= 0.0) {
      uVar6 = -(uint)(0.0001 < *(float *)(lVar5 + 0x74));
      param_2 = fVar7 * (float)(~uVar6 & 0x3f800000 | (uint)(1.0 / *(float *)(lVar5 + 0x74)) & uVar6
                               );
    }
    *(float *)(param_1 + 0x29) = param_2;
  }
  lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  *(float *)(param_1 + 0x1e) = (float)*(double *)(lVar4 + 0x6d0);
  fVar7 = (float)(**(code **)(*param_1 + 0x2c8))(param_1);
  fVar7 = fVar7 * *(float *)(param_1[0x14] + 0x84);
  uVar6 = -(uint)(0.0 < fVar7);
  uVar6 = ~uVar6 & 0x447a0000 | (uint)(1.0 / fVar7) & uVar6;
  *(uint *)((longlong)param_1 + 0xec) = uVar6;
  bVar1 = *(byte *)(lVar5 + 0xbd8);
  if ((int)(uint)bVar1 < *(int *)(lVar5 + 0xbf0)) {
    plVar2 = *(longlong **)
              (*(longlong *)(lVar5 + 0xbe8) + 0x40 + (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8)
    ;
    if (plVar2 != (longlong *)0x0) {
      *(uint *)(plVar2 + 0x18) = uVar6;
      *(undefined4 *)((longlong)plVar2 + 0xbc) = 0;
      lVar5 = (**(code **)(*plVar2 + 0x180))(plVar2);
      *(float *)(plVar2 + 0x17) = (float)*(double *)(lVar5 + 0x6d0);
    }
  }
  return;
}



// FUNCTION 1413584e0 FUN_1413584e0 body=339 status=ok
// SIG undefined FUN_1413584e0(void)

longlong FUN_1413584e0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined4 local_5c;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((longlong)*(int *)(param_1 + 0x88) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x80);
    lVar5 = (longlong)*(int *)(param_1 + 0x88) * 0x38;
    do {
      cVar3 = FUN_140d6591c(lVar4,param_2);
      if (cVar3 != '\0') {
        if (lVar4 != 0) goto LAB_1413585fb;
        break;
      }
      lVar4 = lVar4 + 0x38;
      lVar5 = lVar5 + -0x38;
    } while (lVar5 != 0);
  }
  local_88 = 0;
  FUN_14485c47a(&local_88,param_2);
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 2;
  local_6c = 0;
  uStack_64 = 0;
  local_5c = 0;
  local_58 = 2;
  iVar2 = *(int *)(param_1 + 0x88);
  *(uint *)(param_1 + 0x88) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x8c) < iVar2 + 1U) {
    FUN_14591f4da((longlong *)(param_1 + 0x80),iVar2);
  }
  lVar5 = *(longlong *)(param_1 + 0x80);
  lVar6 = (longlong)iVar2 * 0x38;
  lVar4 = lVar5 + lVar6;
  puVar1 = (undefined8 *)(lVar5 + lVar6);
  *puVar1 = local_88;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 2;
  FUN_14019d794(puVar1 + 1,&local_80);
  lVar5 = lVar5 + lVar6;
  *(undefined8 *)(lVar5 + 0x20) = 0;
  *(undefined8 *)(lVar5 + 0x28) = 0;
  *(undefined8 *)(lVar5 + 0x30) = 2;
  FUN_14019d794((undefined8 *)(lVar5 + 0x20),(longlong)&local_6c + 4);
  FUN_1457a5b42(&local_88);
LAB_1413585fb:
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 141358634 FUN_141358634 body=114 status=ok
// SIG undefined FUN_141358634(void)

void FUN_141358634(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1405d674a(param_1 + 0x148);
  iVar1 = *(int *)(param_1 + 0x240);
  *(uint *)(param_1 + 0x240) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x244) < iVar1 + 1U) {
    FUN_14591f904((longlong *)(param_1 + 0x238),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x238);
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 0x10) = *param_2;
  lVar3 = param_2[1];
  *(longlong *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1413586a6 FUN_1413586a6 body=145 status=ok
// SIG undefined FUN_1413586a6(void)

undefined8 * FUN_1413586a6(undefined8 *param_1)

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



// FUNCTION 141358738 FUN_141358738 body=206 status=ok
// SIG undefined FUN_141358738(void)

longlong FUN_141358738(longlong param_1)

{
  undefined8 *puVar1;
  DWORD DVar2;
  longlong lVar3;
  
  lVar3 = 0;
  do {
    *(undefined8 *)(param_1 + lVar3) = 0;
    ((undefined8 *)(param_1 + lVar3))[1] = 0;
    puVar1 = (undefined8 *)(param_1 + 0x70 + lVar3);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(param_1 + 0x60 + lVar3);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(param_1 + 0x50 + lVar3);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(param_1 + 0x40 + lVar3);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(param_1 + 0x30 + lVar3);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(param_1 + 0x20 + lVar3);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(param_1 + 0x10 + lVar3);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(param_1 + lVar3) = 0xffffffffffffffff;
    lVar3 = lVar3 + 0x80;
  } while (lVar3 != 0x1000);
  *(undefined8 *)(param_1 + 0x1000) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1080));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x1080),4000);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10a8));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x10a8),4000);
  *(undefined8 *)(param_1 + 0x10d0) = 0;
  *(undefined8 *)(param_1 + 0x10d8) = 0;
  *(undefined8 *)(param_1 + 0x10e0) = 0;
  *(undefined8 *)(param_1 + 0x10e8) = 0;
  *(undefined8 *)(param_1 + 0x10f0) = 0x20ffffffff;
  DVar2 = TlsAlloc();
  *(DWORD *)(param_1 + 0x10f0) = DVar2;
  return param_1;
}



// FUNCTION 141358806 FUN_141358806 body=1936 status=ok
// SIG undefined FUN_141358806(void)

void FUN_141358806(longlong param_1,char *param_2,longlong *param_3)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  longlong *plVar10;
  uint uVar11;
  longlong *plVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  short sVar17;
  uint uVar18;
  byte bVar19;
  bool bVar20;
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
  short local_92;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  char *local_78;
  longlong local_70;
  longlong *local_68;
  undefined1 local_60 [4];
  undefined4 local_5c;
  uint local_58;
  ushort local_53;
  undefined1 local_51;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_78 = param_2;
  if ((longlong)(int)param_3[1] != 0) {
    lVar8 = param_1 + -0xd8;
    plVar12 = (longlong *)*param_3;
    local_68 = plVar12 + (int)param_3[1];
    local_70 = param_1 + -0x10;
    local_80 = param_1 + -0x88;
    do {
      lVar4 = *plVar12;
      if (lVar4 != 0) {
        if (**(int **)(param_1 + -0x28) == 0) {
          uVar3 = *(uint *)(lVar4 + 0xc);
          if ((int)uVar3 < DAT_14c9647dc) {
            lVar13 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
          }
          else {
            lVar13 = 0;
          }
          uVar18 = *(uint *)(lVar13 + 0x10);
          if (*(uint *)(lVar13 + 0x10) == 0) {
            LOCK();
            iVar7 = DAT_14c964868 + 1;
            UNLOCK();
            uVar6 = DAT_14c964868 + 1;
            bVar20 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar7;
            if (bVar20) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                           );
            }
            LOCK();
            uVar18 = *(uint *)(lVar13 + 0x10);
            bVar20 = uVar18 == 0;
            if (bVar20) {
              *(uint *)(lVar13 + 0x10) = uVar6;
              uVar18 = 0;
            }
            UNLOCK();
            if (bVar20) {
              uVar18 = uVar6;
            }
          }
          FUN_1407336f2(local_70,local_60,lVar4);
          if (*(int *)(param_1 + -0xb8) != *(int *)(param_1 + -0x8c)) {
            uVar9 = uVar18 >> 0xd ^ uVar3 - uVar18;
            uVar6 = uVar9 << 8 ^ (-0x61c88647 - uVar18) - uVar9;
            uVar11 = uVar6 >> 0xd ^ (uVar18 - uVar9) - uVar6;
            uVar14 = uVar11 >> 0xc ^ (uVar9 - uVar6) - uVar11;
            uVar9 = uVar14 << 0x10 ^ (uVar6 - uVar11) - uVar14;
            uVar6 = uVar9 >> 5 ^ (uVar11 - uVar14) - uVar9;
            uVar11 = uVar6 >> 3 ^ (uVar14 - uVar9) - uVar6;
            uVar9 = uVar11 << 10 ^ (uVar9 - uVar6) - uVar11;
            lVar13 = *(longlong *)(param_1 + -0x80);
            if (*(longlong *)(param_1 + -0x80) == 0) {
              lVar13 = local_80;
            }
            uVar6 = *(uint *)(lVar13 + (ulonglong)
                                       (*(int *)(param_1 + -0x78) - 1U &
                                       (uVar9 >> 0xf ^ uVar6 - (uVar11 + uVar9))) * 4);
            if (uVar6 != 0xffffffff) {
              do {
                puVar1 = (uint *)(*(longlong *)(param_1 + -0xc0) + (longlong)(int)uVar6 * 0x14);
                if ((*puVar1 == uVar3) &&
                   (*(uint *)(*(longlong *)(param_1 + -0xc0) + 4 + (longlong)(int)uVar6 * 0x14) ==
                    uVar18)) {
                  if (puVar1 != (uint *)0x0) {
                    local_58 = puVar1[2];
                    local_5c = *(undefined4 *)(param_1 + -0x18);
                    if ((local_58 != 0xffffffff) &&
                       (lVar13 = FUN_1400e4054(*(undefined8 *)(param_1 + -0x28),local_60),
                       lVar13 != 0)) goto LAB_141358a02;
                  }
                  break;
                }
                uVar6 = puVar1[3];
              } while (uVar6 != 0xffffffff);
            }
          }
        }
        else {
LAB_141358a02:
          FUN_141358f98(lVar8,local_60,lVar4);
          local_88 = lVar8;
          if (**(int **)(param_1 + -0x28) != 0) {
            FUN_140adeba6(*(int **)(param_1 + -0x28),local_60);
          }
          uVar3 = local_58;
          lVar13 = (longlong)(int)local_58;
          lVar8 = FUN_1400e4054();
          if (lVar8 != 0) {
            sVar17 = *(short *)(lVar8 + 0xe);
            bVar19 = *(byte *)(*(longlong *)(param_1 + -0x70) + 0xb + lVar13 * 0xc);
            if (sVar17 == 0) {
              if ((bVar19 & 1) == 0) {
LAB_141358a64:
                uVar18 = *(uint *)(lVar4 + 0xc);
                if ((int)uVar18 < DAT_14c9647dc) {
                  lVar8 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8);
                }
                else {
                  lVar8 = 0;
                }
                iVar7 = *(int *)(lVar8 + 0x10);
                local_90 = lVar13;
                if (iVar7 == 0) {
                  LOCK();
                  iVar7 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar15 = DAT_14c964868 + 1;
                  bVar20 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar7;
                  if (bVar20) {
                    local_92 = sVar17;
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                 );
                    sVar17 = local_92;
                  }
                  LOCK();
                  iVar7 = *(int *)(lVar8 + 0x10);
                  bVar20 = iVar7 == 0;
                  if (bVar20) {
                    *(int *)(lVar8 + 0x10) = iVar15;
                    iVar7 = 0;
                  }
                  UNLOCK();
                  if (bVar20) {
                    iVar7 = iVar15;
                  }
                  if (iVar7 != 0) goto LAB_141358aa5;
LAB_141358d45:
                  bVar19 = 0;
                  uVar5 = 0;
                }
                else {
LAB_141358aa5:
                  bVar19 = 0;
                  if ((int)uVar18 < 0) goto LAB_141358d45;
                  uVar5 = 0;
                  if ((int)uVar18 < DAT_14c9647dc) {
                    plVar10 = (longlong *)
                              ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8));
                    if (((plVar10 == (longlong *)0x0) || ((int)plVar10[2] != iVar7)) ||
                       (((*(uint *)(plVar10 + 1) & 0x10200000) != 0 ||
                        (plVar10 = (longlong *)*plVar10, plVar10 == (longlong *)0x0)))) {
LAB_141358d52:
                      bVar19 = 0;
                    }
                    else {
                      if (DAT_14cac9ca8 == 0) {
                        local_b0 = &local_50;
                        local_50 = FUN_141030f22;
                        local_a0 = FUN_14081d0ea;
                        local_a8 = FUN_14081d0ea;
                        local_b8 = &LAB_1478c0a72;
                        local_c0 = &LAB_1417b2375;
                        local_c8 = L"Engine";
                        local_d0 = 0x1000000000;
                        local_d8 = 0x10000004;
                        local_e0 = 8;
                        local_e8 = 0x390;
                        FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
                      }
                      lVar8 = plVar10[2];
                      iVar7 = *(int *)(lVar8 + 0x38);
                      if ((iVar7 < *(int *)(DAT_14cac9ca8 + 0x38)) ||
                         (*(longlong *)
                           (*(longlong *)(lVar8 + 0x30) +
                           (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30)) {
                        if (DAT_14cac7648 == 0) {
                          local_b0 = &local_50;
                          local_50 = FUN_144a7958c;
                          local_a0 = FUN_14081d0ea;
                          local_a8 = FUN_143242436;
                          local_b8 = &LAB_14789ef1f;
                          local_c0 = &LAB_1417b008f;
                          local_c8 = L"Engine";
                          local_d0 = 0x8000000000;
                          local_d8 = 0x10000004;
                          local_e0 = 0x10;
                          local_e8 = 0x2b0;
                          FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,
                                        FUN_146393848);
                          lVar8 = plVar10[2];
                          iVar7 = *(int *)(lVar8 + 0x38);
                        }
                        if (*(int *)(DAT_14cac7648 + 0x38) <= iVar7) {
                          if (*(longlong *)
                               (*(longlong *)(lVar8 + 0x30) +
                               (longlong)*(int *)(DAT_14cac7648 + 0x38) * 8) == DAT_14cac7648 + 0x30
                             ) {
                            bVar19 = *(byte *)((longlong)plVar10 + 0x1f9);
                            uVar5 = (**(code **)(*plVar10 + 0x560))(plVar10);
                            bVar19 = bVar19 >> 3 & 1;
                          }
                          else {
                            bVar19 = 0;
                            uVar5 = 0;
                          }
                          goto LAB_141358b93;
                        }
                        goto LAB_141358d52;
                      }
                      bVar19 = *(byte *)(plVar10 + 0xc) >> 7;
                    }
                    uVar5 = 0;
                  }
                }
LAB_141358b93:
                local_53 = (ushort)bVar19;
                local_50 = (code *)CONCAT44(local_50._4_4_,uVar3);
                lVar8 = lVar13 * 0xc + *(longlong *)(param_1 + -0x70);
                lVar13 = local_90;
                local_51 = uVar5;
                if (sVar17 == 0) {
                  *(undefined1 *)(lVar8 + 10) = uVar5;
                  *(ushort *)(lVar8 + 8) = local_53;
                  *(byte *)(lVar8 + 0xb) = *(byte *)(lVar8 + 0xb) | 3;
                }
                else if ((*(byte *)(lVar8 + 0xb) & 1) == 0) {
                  *(undefined1 *)(lVar8 + 10) = uVar5;
                  *(ushort *)(lVar8 + 8) = local_53;
                  *(byte *)(lVar8 + 0xb) = *(byte *)(lVar8 + 0xb) | 1;
                }
                else {
                  FUN_1476b42bc(param_1 + -0x38,&local_50,&local_53);
                }
              }
            }
            else if (((bVar19 & 2) == 0 & bVar19) == 0) {
              uVar18 = *(uint *)(param_1 + -0x30);
              lVar8 = *(longlong *)(param_1 + -0x38);
              uVar6 = 0;
              if (0 < (int)uVar18) {
                uVar6 = 0;
                uVar16 = (ulonglong)uVar18;
                do {
                  uVar11 = (int)(uVar16 >> 1) + uVar6;
                  uVar9 = (uint)uVar16;
                  if (*(int *)(lVar8 + (ulonglong)uVar11 * 8) < (int)uVar3) {
                    uVar6 = uVar11 + (uVar9 & 1);
                  }
                  uVar16 = uVar16 >> 1;
                  local_92 = sVar17;
                } while (1 < uVar9);
              }
              if ((((int)uVar18 <= (int)uVar6) ||
                  ((int)uVar3 < *(int *)(lVar8 + (ulonglong)uVar6 * 8))) ||
                 (lVar8 + (ulonglong)uVar6 * 8 == -4)) goto LAB_141358a64;
            }
          }
          lVar8 = local_88;
          if (*local_78 == '\x01') {
            pbVar2 = (byte *)(*(longlong *)(param_1 + -0x70) + 0xb + lVar13 * 0xc);
            *pbVar2 = *pbVar2 | 2;
          }
        }
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != local_68);
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141358f98 FUN_141358f98 body=281 status=ok
// SIG undefined FUN_141358f98(void)

longlong FUN_141358f98(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar2 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar3 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar3);
      }
      LOCK();
      iVar2 = *(int *)(lVar4 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar4 + 0x10) = iVar3;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar3;
      }
    }
    local_40 = CONCAT44(iVar2,uVar1);
  }
  FUN_14118d4f0(param_1,&local_44,&local_40);
  FUN_14027461a(param_1 + 200,param_2,param_3);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = local_44;
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1413590b2 FUN_1413590b2 body=162 status=ok
// SIG undefined FUN_1413590b2(void)

void FUN_1413590b2(longlong *param_1,undefined8 param_2)

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
        goto LAB_14135913f;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14135913f:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 141359154 FUN_141359154 body=306 status=ok
// SIG undefined FUN_141359154(void)

undefined8 FUN_141359154(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_141359280;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_141359280;
    }
    FUN_140192332(param_1 + 0x18,&local_48,0);
  }
  else {
LAB_141359280:
    local_48 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_141359228;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_141359228;
    }
  }
  uVar6 = 0;
LAB_141359228:
  if ((local_48 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_48);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141359288 FUN_141359288 body=327 status=ok
// SIG undefined FUN_141359288(void)

void FUN_141359288(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *plStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar5 = FUN_1403ae288(param_2);
  if ((cVar5 != '\0') && ((longlong)*(int *)(param_1 + 0x58) != 0)) {
    plVar8 = *(longlong **)(param_1 + 0x50);
    plVar7 = plVar8 + (longlong)*(int *)(param_1 + 0x58) * 2;
    do {
      plVar3 = (longlong *)plVar8[1];
      if (plVar3 == (longlong *)0x0) {
        plStack_70 = (longlong *)0x0;
LAB_14135939e:
        local_78 = 0;
        bVar10 = true;
        plVar9 = (longlong *)0x0;
      }
      else {
        local_78 = *plVar8;
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        iVar6 = (int)plVar3[1];
        do {
          if (iVar6 == 0) {
            plStack_70 = (longlong *)0x0;
            goto LAB_14135939e;
          }
          LOCK();
          iVar4 = (int)plVar3[1];
          bVar10 = iVar6 == iVar4;
          if (bVar10) {
            *(int *)(plVar3 + 1) = iVar6 + 1;
            iVar4 = iVar6;
          }
          iVar6 = iVar4;
          UNLOCK();
        } while (!bVar10);
        plStack_70 = plVar3;
        if (plVar3 == (longlong *)0x0) goto LAB_14135939e;
        bVar10 = false;
        plVar9 = plVar3;
      }
      if (local_78 != 0) {
        FUN_1459201de(param_1,param_2,&local_78,param_3);
      }
      if (!bVar10) {
        LOCK();
        plVar1 = plVar9 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
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
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      plVar8 = plVar8 + 2;
    } while (plVar8 != plVar7);
  }
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413593d0 FUN_1413593d0 body=217 status=ok
// SIG undefined FUN_1413593d0(void)

void FUN_1413593d0(longlong param_1,undefined8 param_2,float *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [39];
  char local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3[1] == 0.0 || *(float *)(param_1 + 8) != *param_3) {
    *param_3 = *(float *)(param_1 + 8);
    param_3[1] = (float)((int)param_3[1] + 1);
  }
  lVar2 = FUN_140280ec4(param_2);
  if (param_3[7] == 0.0 || *(float *)(lVar2 + 0x3c) != param_3[6]) {
    param_3[6] = *(float *)(lVar2 + 0x3c);
    param_3[7] = (float)((int)param_3[7] + 1);
  }
  local_21 = '\x04';
  uVar3 = FUN_140280ec4(param_2);
  cVar1 = FUN_140280f4a(uVar3,&local_21);
  if (cVar1 != '\0') {
    if (param_3[0xb] == 0.0 || local_21 != *(char *)(param_3 + 10)) {
      *(char *)(param_3 + 10) = local_21;
      param_3[0xb] = (float)((int)param_3[0xb] + 1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413594aa FUN_1413594aa body=95 status=ok
// SIG undefined FUN_1413594aa(void)

void FUN_1413594aa(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x240);
  if ((param_1 != 0) && ((*(uint *)(param_1 + 8) & 0x10) == 0)) {
    plVar1 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x398) + 0x20))(param_1 + 0x398);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001413594fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x30))(plVar1,param_2,*(code **)(*plVar1 + 0x30));
      return;
    }
  }
  return;
}



// FUNCTION 141359509 FUN_141359509 body=58 status=ok
// SIG undefined FUN_141359509(void)

void FUN_141359509(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x20);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141359544 FUN_141359544 body=265 status=ok
// SIG undefined FUN_141359544(void)

undefined * FUN_141359544(void)

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
              0x110) < DAT_14c9f1fb0) {
    FUN_144b3d300(&DAT_14c9f1fb0);
    if (DAT_14c9f1fb0 == -1) {
      FUN_14135964e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FScreenProbeParameters";
      local_38 = 0;
      local_50 = 0x150;
      local_58 = 0x4d;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f1f30,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d2637f);
      _Init_thread_footer(&DAT_14c9f1fb0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9f1f30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14135964e FUN_14135964e body=226 status=ok
// SIG undefined FUN_14135964e(void)

longlong * FUN_14135964e(longlong *param_1)

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
  pcVar13 = FUN_1462d9c24;
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



// FUNCTION 141359731 FUN_141359731 body=77 status=ok
// SIG undefined FUN_141359731(void)

void FUN_141359731(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14135977e FUN_14135977e body=397 status=ok
// SIG undefined FUN_14135977e(void)

longlong FUN_14135977e(longlong *param_1,int *param_2,undefined8 param_3,ulonglong *param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined1 auStack_78 [32];
  ulonglong *local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *param_4;
  cVar3 = FUN_1403f35db(local_48,&DAT_14c9908e8);
  if (cVar3 == '\0') {
    cVar3 = FUN_1403f35db(*param_4,&DAT_14c9908f8);
    if (cVar3 != '\0') goto LAB_141359818;
    (**(code **)(*param_1 + 0x128))(param_1,&local_50);
    local_48 = local_50;
    cVar3 = FUN_1403f35db(local_50,&DAT_14c9908e8);
    if (cVar3 != '\0') goto LAB_141359818;
    cVar3 = FUN_1403f35db(local_50,&DAT_14c9908f8);
    if (cVar3 != '\0') goto LAB_141359818;
  }
  else {
LAB_141359818:
    iVar2 = DAT_14c892fa0;
    iVar1 = *param_2;
    bVar7 = DAT_14c892fa0 == iVar1;
    uVar6 = 6;
    if (bVar7) {
      uVar6 = 0x11;
    }
    uVar4 = (**(code **)(*param_1 + 0x130))(param_1,&local_48);
    lVar5 = Ordinal_23(uVar4,bVar7 + '\x01',uVar6);
    if (lVar5 != -1) {
      local_58 = &local_48;
      lVar5 = (**(code **)(*param_1 + 0x168))(param_1,lVar5,(iVar2 != iVar1) + '\x01',param_3);
      if (lVar5 != 0) {
        SetHandleInformation(*(HANDLE *)(lVar5 + 0x28),1,0);
        cVar3 = FUN_1403f35db(*(undefined8 *)(lVar5 + 0x20),&DAT_14c9908f8);
        if (cVar3 != '\0') {
          local_48 = local_48 & 0xffffffff00000000;
          local_58 = (ulonglong *)CONCAT44(local_58._4_4_,4);
          Ordinal_21(*(undefined8 *)(lVar5 + 0x28),0x29,0x1b);
        }
        goto LAB_1413598e3;
      }
    }
  }
  lVar5 = 0;
LAB_1413598e3:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14135990c FUN_14135990c body=1132 status=ok
// SIG undefined FUN_14135990c(void)

void FUN_14135990c(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  uint uVar14;
  bool bVar15;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong *local_c0;
  longlong local_b0;
  undefined4 local_a4;
  longlong *local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88 [2];
  ulonglong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    plVar8 = *(longlong **)(param_1 + 0x28);
    plVar9 = plVar8 + (longlong)*(int *)(param_1 + 0x30) * 4;
    local_a0 = (longlong *)(param_2 + 0x40);
    local_b0 = param_1;
    do {
      lVar10 = plVar8[1];
      if (lVar10 == 0) {
        uVar5 = FUN_145cd9bd2();
        lVar10 = FUN_14477b664(uVar5);
        plVar8[1] = lVar10;
      }
      if (plVar8[2] == 0) {
        if ((lVar10 != 0) && (*plVar8 != 0)) {
          plVar12 = *(longlong **)(lVar10 + 0xb8);
          if ((plVar12 == (longlong *)0x0) ||
             (cVar2 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar2 == '\0')) {
            plVar8[2] = 0;
          }
          else {
            uVar5 = (**(code **)(*plVar12 + 0x110))(plVar12);
            lVar10 = FUN_144aff482(uVar5,plVar8);
            plVar8[2] = lVar10;
            if (lVar10 != 0) goto LAB_141359980;
          }
        }
      }
      else {
LAB_141359980:
        if (param_2 == 0) {
          uVar13 = 0;
          uVar7 = 0;
        }
        else {
          uVar14 = *(uint *)(param_2 + 0xc);
          uVar13 = (ulonglong)uVar14;
          if ((int)uVar14 < DAT_14c9647dc) {
            lVar10 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
          }
          else {
            lVar10 = 0;
          }
          uVar7 = (ulonglong)*(uint *)(lVar10 + 0x10);
          if (*(uint *)(lVar10 + 0x10) == 0) {
            LOCK();
            iVar1 = DAT_14c964868 + 1;
            UNLOCK();
            uVar14 = DAT_14c964868 + 1;
            bVar15 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar1;
            if (bVar15) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar14);
            }
            LOCK();
            uVar3 = *(uint *)(lVar10 + 0x10);
            bVar15 = uVar3 == 0;
            if (bVar15) {
              *(uint *)(lVar10 + 0x10) = uVar14;
              uVar3 = 0;
            }
            UNLOCK();
            if (bVar15) {
              uVar3 = uVar14;
            }
            uVar7 = (ulonglong)uVar3;
          }
        }
        local_70 = plVar8[3];
        local_78 = uVar13 | uVar7 << 0x20;
        lVar10 = plVar8[1];
        if (lVar10 == 0) {
          uVar5 = FUN_145cd9bd2();
          lVar10 = FUN_14477b664(uVar5);
          plVar8[1] = lVar10;
        }
        if (plVar8[2] == 0) {
          if ((lVar10 != 0) && (*plVar8 != 0)) {
            plVar12 = *(longlong **)(lVar10 + 0xb8);
            if ((plVar12 == (longlong *)0x0) ||
               (cVar2 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar2 == '\0')) {
              plVar8[2] = 0;
              param_1 = local_b0;
            }
            else {
              uVar5 = (**(code **)(*plVar12 + 0x110))(plVar12);
              lVar10 = FUN_144aff482(uVar5,plVar8);
              plVar8[2] = lVar10;
              param_1 = local_b0;
              if (lVar10 != 0) goto LAB_1413599f4;
            }
          }
        }
        else {
LAB_1413599f4:
          if ((longlong)*(int *)(param_2 + 0x48) != 0) {
            plVar12 = *(longlong **)(param_2 + 0x40);
            lVar10 = (longlong)*(int *)(param_2 + 0x48) * 0x28;
            do {
              if (plVar12[1] == 0) {
                uVar5 = FUN_145cd9bd2();
                lVar11 = FUN_14477b664(uVar5);
                plVar12[1] = lVar11;
              }
              lVar11 = plVar8[1];
              if (lVar11 == 0) {
                lVar11 = FUN_145cd9bd2();
              }
              lVar6 = *plVar8;
              uVar5 = FUN_14477b664(lVar11);
              local_88[0] = lVar6;
              local_a4 = FUN_144a7891a(uVar5);
              local_68 = *plVar12;
              lVar11 = plVar12[1];
              uVar4 = FUN_144a7891a(lVar11);
              local_c8 = uVar5;
              local_c0 = local_88;
              cVar2 = FUN_144a789b8(uVar4,lVar11,&local_68,local_a4);
              if (cVar2 != '\0') {
                if (plVar12 != (longlong *)0x0) goto LAB_141359a72;
                break;
              }
              plVar12 = plVar12 + 5;
              lVar10 = lVar10 + -0x28;
            } while (lVar10 != 0);
          }
          lVar10 = *plVar8;
          uVar5 = FUN_14477b664(plVar8[1]);
          uVar5 = FUN_14477b664(uVar5);
          plVar12 = local_a0;
          lVar11 = plVar8[2];
          iVar1 = *(int *)(param_2 + 0x48);
          *(uint *)(param_2 + 0x48) = iVar1 + 1U;
          if (*(uint *)(param_2 + 0x4c) < iVar1 + 1U) {
            FUN_141359d7a(local_a0,iVar1);
          }
          plVar12 = (longlong *)(*plVar12 + (longlong)iVar1 * 0x28);
          plVar12[1] = 0;
          plVar12[2] = 0;
          *plVar12 = lVar10;
          uVar5 = FUN_14477b664(uVar5);
          lVar10 = FUN_14477b664(uVar5);
          plVar12[1] = lVar10;
          plVar12[2] = lVar11;
          plVar12[3] = 0;
          plVar12[4] = 0;
LAB_141359a72:
          FUN_14053c012(plVar12 + 3,&local_78);
          param_1 = local_b0;
        }
      }
      plVar8 = plVar8 + 4;
    } while (plVar8 != plVar9);
  }
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar10 = *(longlong *)(param_1 + 0x38);
    lVar11 = 0;
    do {
      if (*(longlong *)(lVar10 + lVar11) != 0) {
        local_88[0] = 0;
        FUN_14485c47a(local_88,param_2);
        local_90 = *(undefined8 *)(lVar10 + 8 + lVar11);
        local_98 = local_88[0];
        if (*(longlong *)(lVar10 + lVar11) != 0) {
          lVar6 = FUN_145924fa4(param_2);
          FUN_14053c012(lVar6 + 8,&local_98);
        }
      }
      lVar11 = lVar11 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar11);
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141359d7a FUN_141359d7a body=370 status=ok
// SIG undefined FUN_141359d7a(void)

void FUN_141359d7a(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x28;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141359e03;
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
LAB_141359e03:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 141359eec FUN_141359eec body=3023 status=ok
// SIG undefined FUN_141359eec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141359eec(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  bool bVar19;
  undefined4 uVar20;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  longlong *local_f0;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  longlong local_90 [3];
  longlong *local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (((((*(longlong **)(param_2 + 0x18) == (longlong *)0x0) || (*(int *)(param_2 + 0x14) == 0)) ||
       (uVar4 = *(uint *)(param_2 + 0x10), (int)uVar4 < 0)) ||
      (((DAT_14c9647dc <= (int)uVar4 ||
        (lVar16 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar16 == 0)) ||
       ((*(int *)(lVar16 + 0x10) != *(int *)(param_2 + 0x14) ||
        (((*(uint *)(lVar16 + 8) & 0x10200000) != 0 ||
         (lVar16 = (**(code **)(**(longlong **)(param_2 + 0x18) + 0x10))(), lVar16 == 0)))))))) ||
     (local_c0 = (longlong *)FUN_14065bd6c(lVar16), local_c0 == (longlong *)0x0))
  goto LAB_14135a4de;
  lVar7 = *(longlong *)(param_2 + 0x108);
  if (lVar7 == 0) {
    uVar10 = FUN_14065b502();
    lVar7 = FUN_14477b664(uVar10);
    *(longlong *)(param_2 + 0x108) = lVar7;
  }
  lVar12 = *(longlong *)(param_2 + 0x110);
  local_d0 = param_1;
  if (lVar12 == 0) {
    if ((*(longlong *)(param_2 + 0x100) != 0) && (lVar7 != 0)) {
      plVar13 = *(longlong **)(lVar7 + 0xb8);
      if ((plVar13 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar13 + 0x108))(plVar13), cVar3 == '\0')) {
        *(undefined8 *)(param_2 + 0x110) = 0;
      }
      else {
        uVar10 = (**(code **)(*plVar13 + 0x110))(plVar13);
        lVar12 = FUN_144aff482(uVar10,(longlong *)(param_2 + 0x100));
        *(longlong *)(param_2 + 0x110) = lVar12;
        param_1 = local_d0;
        if (lVar12 != 0) goto LAB_141359fd7;
      }
    }
    param_1 = local_d0;
    lVar12 = FUN_140317ef6(param_2 + 0x20);
    if (lVar12 == 0) {
      lVar12 = FUN_14575395a();
    }
  }
LAB_141359fd7:
  lVar7 = FUN_14494f566(param_2 + 0x20);
  if ((lVar12 == 0) || (lVar7 == 0)) goto LAB_14135a4de;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb7ee78) && (FUN_144b3d300(&DAT_14cb7ee78), DAT_14cb7ee78 == -1)) {
    DAT_14cb7ee68 = (undefined4 *)0x0;
    _DAT_14cb7ee70 = 0x1400000000;
    atexit((_func_5014 *)&LAB_143d66b8f);
    _Init_thread_footer(&DAT_14cb7ee78);
  }
  lVar7 = *(longlong *)(param_2 + 0x50);
  local_78 = param_3;
  local_70 = param_1;
  if (lVar7 == 0) {
    uVar10 = FUN_140e2f220();
    lVar7 = FUN_14477b664(uVar10);
    *(longlong *)(param_2 + 0x50) = lVar7;
  }
  lVar9 = *(longlong *)(param_2 + 0x58);
  local_e0 = lVar12;
  local_d8 = lVar16;
  if (lVar9 == 0) {
    if ((lVar7 == 0) || (*(longlong *)(param_2 + 0x48) == 0)) goto LAB_14135a4de;
    plVar13 = *(longlong **)(lVar7 + 0xb8);
    if ((plVar13 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar13 + 0x108))(plVar13), cVar3 == '\0')) {
      *(undefined8 *)(param_2 + 0x58) = 0;
      goto LAB_14135a4de;
    }
    uVar10 = (**(code **)(*plVar13 + 0x110))(plVar13);
    lVar9 = FUN_144aff482(uVar10);
    *(longlong *)(param_2 + 0x58) = lVar9;
    param_1 = local_d0;
    if (lVar9 == 0) goto LAB_14135a4de;
  }
  lVar16 = *(longlong *)(param_2 + 0x80);
  lVar7 = local_e0;
  if ((lVar16 != 0) && (0.0 < *(float *)(lVar9 + 0x1c))) {
    local_98 = *(undefined8 *)(lVar9 + 0x18);
    lVar7 = *(longlong *)(local_e0 + 0x30);
    local_c8 = (longlong *)(param_1 + 0x220);
    iVar5 = *(int *)(param_1 + 0x228);
    local_b8 = param_3;
    if ((longlong)iVar5 != 0) {
      lVar12 = *(longlong *)(local_d0 + 0x220);
      iVar15 = 0;
      plVar13 = (longlong *)(lVar12 + 0x20);
      do {
        if ((((plVar13[-4] == lVar16) && (plVar13[6] == 0)) &&
            (cVar3 = FUN_14135aabc(plVar13 + -3), cVar3 != '\0')) && (plVar13[-2] == lVar7)) {
          local_a0 = lVar9;
          if (*plVar13 == 0) {
            uVar10 = FUN_1407ad36c();
            lVar9 = FUN_14477b664(uVar10);
            *plVar13 = lVar9;
          }
          lVar9 = *(longlong *)(param_2 + 0x68);
          if (lVar9 == 0) {
            lVar9 = FUN_1407ad36c();
          }
          lVar14 = *(longlong *)(param_2 + 0x60);
          local_a8 = FUN_14477b664(lVar9);
          local_90[0] = lVar14;
          local_ac = FUN_144a7891a(local_a8);
          local_68 = plVar13[-1];
          lVar9 = *plVar13;
          uVar20 = FUN_144a7891a(lVar9);
          local_f0 = local_90;
          local_f8 = local_a8;
          cVar3 = FUN_144a789b8(uVar20,lVar9,&local_68,local_ac);
          lVar9 = local_a0;
          if (cVar3 != '\0') {
            if (iVar15 != 1) {
              iVar15 = -iVar15;
              param_3 = local_b8;
              goto LAB_14135a9dd;
            }
            break;
          }
        }
        iVar15 = iVar15 + -1;
        plVar8 = plVar13 + 0xc;
        plVar13 = plVar13 + 0x10;
      } while (plVar8 != (longlong *)((longlong)iVar5 * 0x80 + lVar12));
    }
    lVar12 = local_d0;
    iVar5 = *(int *)(local_d0 + 0x228);
    uVar4 = iVar5 + 1;
    *(uint *)(local_d0 + 0x228) = uVar4;
    if (*(uint *)(local_d0 + 0x22c) < uVar4) {
      FUN_1459251d8(local_c8);
    }
    lVar14 = *local_c8;
    lVar18 = (longlong)iVar5 * 0x80;
    puVar1 = (undefined8 *)(lVar14 + 0x68 + lVar18);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar14 + 0x58 + lVar18);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar14 + 0x48 + lVar18);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar14 + 0x38 + lVar18);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar14 + 0x28 + lVar18);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar14 + 0x18 + lVar18);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar14 + 8 + lVar18);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(lVar14 + 0x78 + lVar18) = 0;
    *(longlong *)(lVar14 + lVar18) = lVar16;
    uVar4 = *(uint *)((longlong)local_c0 + 0xc);
    *(uint *)(lVar14 + 8 + lVar18) = uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar16 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar16 = 0;
    }
    lVar14 = lVar14 + lVar18;
    iVar5 = *(int *)(lVar16 + 0x10);
    if (*(int *)(lVar16 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar15 = DAT_14c964868 + 1;
      bVar19 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar19) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar15);
      }
      LOCK();
      iVar5 = *(int *)(lVar16 + 0x10);
      bVar19 = iVar5 == 0;
      if (bVar19) {
        *(int *)(lVar16 + 0x10) = iVar15;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar19) {
        iVar5 = iVar15;
      }
    }
    param_3 = local_b8;
    *(int *)(lVar14 + 0xc) = iVar5;
    *(longlong *)(lVar14 + 0x10) = lVar7;
    lVar16 = *(longlong *)(param_2 + 0x60);
    if (*(longlong *)(lVar14 + 0x18) != lVar16) {
      *(undefined8 *)(lVar14 + 0x28) = 0;
    }
    *(longlong *)(lVar14 + 0x18) = lVar16;
    if (*(longlong *)(lVar14 + 0x20) != *(longlong *)(param_2 + 0x68)) {
      *(undefined8 *)(lVar14 + 0x28) = 0;
    }
    uVar10 = FUN_14477b664();
    uVar10 = FUN_14477b664(uVar10);
    *(undefined8 *)(lVar14 + 0x20) = uVar10;
    *(undefined8 *)(lVar14 + 0x28) = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(lVar14 + 0x58) = local_98;
    iVar15 = *(int *)(lVar12 + 0x228) + -1;
    lVar7 = local_e0;
    if (*(int *)(lVar12 + 0x228) != 0) {
LAB_14135a9dd:
      lVar7 = local_e0;
      puVar11 = DAT_14cb7ee68;
      if (DAT_14cb7ee68 == (undefined4 *)0x0) {
        puVar11 = &DAT_14cb7ee18;
      }
      if ((longlong)DAT_14cb7ee70 != 0) {
        lVar16 = 0;
        do {
          if (*(int *)((longlong)puVar11 + lVar16) == iVar15) goto LAB_14135a2cb;
          lVar16 = lVar16 + 4;
        } while ((longlong)DAT_14cb7ee70 * 4 != lVar16);
      }
      lVar16 = *local_c8;
      pcVar2 = (code *)*param_3;
      plVar13 = param_3 + 4;
      if ((longlong *)param_3[2] != (longlong *)0x0) {
        plVar13 = (longlong *)param_3[2];
      }
      uVar10 = (**(code **)(*plVar13 + 8))();
      (*pcVar2)(uVar10,(longlong)iVar15 * 0x80 + lVar16);
      uVar17 = _DAT_14cb7ee70;
      lVar16 = (longlong)DAT_14cb7ee70;
      uVar4 = DAT_14cb7ee70 + 1;
      _DAT_14cb7ee70 = CONCAT44(DAT_14cb7ee74,uVar4);
      if (DAT_14cb7ee74 < uVar4) {
        FUN_14592516c(uVar17 & 0xffffffff);
      }
      puVar11 = &DAT_14cb7ee18;
      if (DAT_14cb7ee68 != (undefined4 *)0x0) {
        puVar11 = DAT_14cb7ee68;
      }
      puVar11[lVar16] = iVar15;
    }
  }
LAB_14135a2cb:
  if (*(char *)(lVar9 + 0x30) == '\0') {
    lVar16 = FUN_140316ff8();
    uVar20 = *(undefined4 *)(lVar16 + 0x48);
  }
  else if (*(char *)(lVar9 + 0x30) == '\x01') {
    lVar16 = FUN_140316ff8();
    uVar20 = *(undefined4 *)(lVar16 + 0x4c);
    lVar7 = local_e0;
  }
  else {
    uVar20 = 0xbf800000;
    lVar7 = local_e0;
  }
  lVar12 = local_d8;
  lVar16 = *(longlong *)(param_2 + 0x68);
  if (lVar16 == 0) {
    uVar10 = FUN_1407ad36c();
    lVar16 = FUN_14477b664(uVar10);
    *(longlong *)(param_2 + 0x68) = lVar16;
  }
  local_c0 = (longlong *)(param_2 + 0x60);
  if (*(longlong *)(param_2 + 0x70) == 0) {
    if (lVar16 == 0) {
LAB_14135a931:
      bVar19 = false;
      lVar7 = local_e0;
      lVar12 = local_d8;
    }
    else {
      bVar19 = false;
      lVar7 = local_e0;
      lVar12 = local_d8;
      if (*local_c0 != 0) {
        plVar13 = *(longlong **)(lVar16 + 0xb8);
        if ((plVar13 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar13 + 0x108))(plVar13), cVar3 == '\0')) {
          *(undefined8 *)(param_2 + 0x70) = 0;
          goto LAB_14135a931;
        }
        uVar10 = (**(code **)(*plVar13 + 0x110))(plVar13);
        lVar16 = FUN_144aff482(uVar10,local_c0);
        *(longlong *)(param_2 + 0x70) = lVar16;
        lVar7 = local_e0;
        lVar12 = local_d8;
        if (lVar16 != 0) goto LAB_14135a309;
        bVar19 = false;
      }
    }
  }
  else {
LAB_14135a309:
    bVar19 = 0.0 < *(float *)(lVar9 + 0x24);
  }
  if (*(longlong *)(lVar7 + 0x30) == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = CONCAT71((int7)((ulonglong)lVar7 >> 8),0.0 < *(float *)(lVar9 + 0x2c));
  }
  if ((((*(longlong *)(lVar12 + 0x180) != 0) && (*(int *)(lVar12 + 0x17c) != 0)) &&
      ((uVar4 = *(uint *)(lVar12 + 0x178), -1 < (int)uVar4 &&
       ((((int)uVar4 < DAT_14c9647dc &&
         (lVar16 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar16 != 0)) &&
        (*(int *)(lVar16 + 0x10) == *(int *)(lVar12 + 0x17c))))))) &&
     (((*(uint *)(lVar16 + 8) & 0x10200000) == 0 && (*(int *)(lVar12 + 0x18c) == 0)))) {
    if (bVar19) {
      local_c8 = (longlong *)CONCAT44(local_c8._4_4_,(int)uVar17);
      plVar13 = *(longlong **)(lVar9 + 0x20);
      FUN_1403196a4(lVar12,local_90);
      local_f8 = CONCAT44(local_f8._4_4_,uVar20);
      local_f0 = plVar13;
      iVar5 = FUN_14135ac02(local_d0,*(undefined8 *)(param_2 + 0x80),local_c0,local_90);
      if (iVar5 != -1) {
        puVar11 = DAT_14cb7ee68;
        if (DAT_14cb7ee68 == (undefined4 *)0x0) {
          puVar11 = &DAT_14cb7ee18;
        }
        if ((longlong)DAT_14cb7ee70 != 0) {
          lVar16 = 0;
          do {
            if (*(int *)((longlong)puVar11 + lVar16) == iVar5) goto LAB_14135a4a6;
            lVar16 = lVar16 + 4;
          } while ((longlong)DAT_14cb7ee70 * 4 != lVar16);
        }
        lVar16 = *(longlong *)(local_d0 + 0x220);
        pcVar2 = (code *)*param_3;
        plVar13 = param_3 + 4;
        if ((longlong *)param_3[2] != (longlong *)0x0) {
          plVar13 = (longlong *)param_3[2];
        }
        uVar10 = (**(code **)(*plVar13 + 8))();
        (*pcVar2)(uVar10,(longlong)iVar5 * 0x80 + lVar16);
        uVar17 = _DAT_14cb7ee70;
        lVar16 = (longlong)DAT_14cb7ee70;
        uVar4 = DAT_14cb7ee70 + 1;
        _DAT_14cb7ee70 = CONCAT44(DAT_14cb7ee74,uVar4);
        if (DAT_14cb7ee74 < uVar4) {
          FUN_14592516c(uVar17 & 0xffffffff);
        }
        puVar11 = &DAT_14cb7ee18;
        if (DAT_14cb7ee68 != (undefined4 *)0x0) {
          puVar11 = DAT_14cb7ee68;
        }
        puVar11[lVar16] = iVar5;
        lVar12 = local_d8;
      }
LAB_14135a4a6:
      bVar19 = true;
      uVar17 = (ulonglong)local_c8 & 0xffffffff;
    }
    if ((char)uVar17 != '\0') {
      plVar13 = *(longlong **)(lVar9 + 0x28);
      FUN_1403196a4(lVar12,local_90);
      local_f8 = CONCAT44(local_f8._4_4_,uVar20);
      local_f0 = plVar13;
      uVar6 = FUN_14887f37a(local_d0,*(undefined8 *)(param_2 + 0x80),
                            *(undefined8 *)(local_e0 + 0x30),local_90);
      FUN_143d66ba0(&local_78,uVar6);
    }
  }
  cVar3 = FUN_14065b53c(param_2);
  if (cVar3 != '\0') {
    uVar10 = (**(code **)(**(longlong **)(param_2 + 0x18) + 0x18))();
    local_d8 = FUN_1447210f0(uVar10);
    if (0 < *(int *)(local_d8 + 0x238)) {
      iVar5 = 0;
      lVar16 = 0;
      do {
        plVar13 = (longlong *)FUN_14479d2ce(*(longlong *)(local_d8 + 0x230) + lVar16);
        if (plVar13 != (longlong *)0x0) {
          if (bVar19) {
            local_c8 = *(longlong **)(lVar9 + 0x20);
            (**(code **)(*plVar13 + 0xe60))(plVar13,local_90);
            local_f0 = local_c8;
            local_f8 = CONCAT44(local_f8._4_4_,uVar20);
            uVar6 = FUN_14135ac02(local_d0,*(undefined8 *)(param_2 + 0x80),local_c0,local_90);
            FUN_143d66ba0(&local_78,uVar6);
          }
          if ((char)uVar17 != '\0') {
            local_c8 = *(longlong **)(lVar9 + 0x28);
            (**(code **)(*plVar13 + 0xe60))(plVar13,local_90);
            local_f0 = local_c8;
            local_f8 = CONCAT44(local_f8._4_4_,uVar20);
            uVar6 = FUN_14887f37a(local_d0,*(undefined8 *)(param_2 + 0x80),
                                  *(undefined8 *)(local_e0 + 0x30),local_90);
            FUN_143d66ba0(&local_78,uVar6);
          }
        }
        lVar16 = lVar16 + 8;
        iVar5 = iVar5 + 1;
        uVar17 = uVar17 & 0xffffffff;
      } while (iVar5 < *(int *)(local_d8 + 0x238));
    }
  }
  bVar19 = (longlong)_DAT_14cb7ee70 < 0;
  _DAT_14cb7ee70 = _DAT_14cb7ee70 & 0xffffffff00000000;
  if (bVar19) {
    FUN_1488844c6();
  }
LAB_14135a4de:
  if (*param_3 != 0) {
    plVar13 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar13 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar13 + 0x10))(plVar13);
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14135aabc FUN_14135aabc body=325 status=ok
// SIG undefined FUN_14135aabc(void)

ulonglong FUN_14135aabc(uint *param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined7 uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  
  pcVar5 = (char *)param_1;
  if (param_2 == 0) {
    uVar7 = 0;
    uVar4 = 0;
  }
  else {
    uVar7 = *(uint *)(param_2 + 0xc);
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 2);
      pcVar5 = (char *)DAT_14c9647c8;
    }
    else {
      lVar9 = 0;
    }
    uVar4 = *(uint *)(lVar9 + 0x10);
    if (*(uint *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      uVar8 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar10) {
        pcVar5 = ".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp";
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar8);
      }
      LOCK();
      uVar4 = *(uint *)(lVar9 + 0x10);
      bVar10 = uVar4 == 0;
      if (bVar10) {
        *(uint *)(lVar9 + 0x10) = uVar8;
        uVar4 = 0;
      }
      UNLOCK();
      if (bVar10) {
        uVar4 = uVar8;
      }
    }
  }
  uVar8 = *param_1;
  uVar2 = param_1[1];
  if ((uVar8 != uVar7) ||
     (pcVar5 = (char *)CONCAT71((int7)((ulonglong)pcVar5 >> 8),1), uVar2 != uVar4)) {
    if ((uVar2 == 0) ||
       (((((int)uVar8 < 0 || (DAT_14c9647dc <= (int)uVar8)) ||
         (pcVar5 = (char *)((ulonglong)((uVar8 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 2)),
         (uint *)pcVar5 == (uint *)0x0)) ||
        ((*(uint *)((longlong)pcVar5 + 0x10) != uVar2 ||
         (puVar1 = (uint *)((longlong)pcVar5 + 8), pcVar5 = (char *)(ulonglong)*puVar1,
         (*puVar1 & 0x10200000) != 0)))))) {
      uVar6 = (undefined7)((ulonglong)pcVar5 >> 8);
      pcVar5 = (char *)CONCAT71(uVar6,1);
      if ((uVar4 != 0) &&
         (((-1 < (int)uVar7 && ((int)uVar7 < DAT_14c9647dc)) &&
          ((lVar9 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 2), lVar9 != 0 &&
           (*(uint *)(lVar9 + 0x10) == uVar4)))))) {
        pcVar5 = (char *)CONCAT71(uVar6,(*(uint *)(lVar9 + 8) & 0x10200000) != 0);
      }
    }
    else {
      pcVar5 = (char *)0x0;
    }
  }
  return (ulonglong)pcVar5 & 0xffffffff;
}



// FUNCTION 14135ac02 FUN_14135ac02 body=1093 status=ok
// SIG undefined FUN_14135ac02(void)

int FUN_14135ac02(longlong param_1,longlong param_2,longlong *param_3,double *param_4,float param_5,
                 undefined8 param_6)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  code *pcVar11;
  longlong lVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  float *pfVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  undefined8 uVar20;
  undefined **ppuVar21;
  float *pfVar22;
  int iVar23;
  longlong lVar24;
  
  iVar8 = *(int *)(param_1 + 0x228);
  if ((longlong)iVar8 != 0) {
    lVar9 = *(longlong *)(param_1 + 0x220);
    iVar23 = 0;
    pfVar22 = (float *)(lVar9 + 0x48);
    do {
      if ((*(longlong *)(pfVar22 + -0x12) == param_2) && (*(longlong *)(pfVar22 + 2) == 0)) {
        if (*(longlong *)(pfVar22 + -10) == 0) {
          uVar20 = FUN_1407ad36c();
          uVar20 = FUN_14477b664(uVar20);
          *(undefined8 *)(pfVar22 + -10) = uVar20;
        }
        lVar17 = param_3[1];
        if (lVar17 == 0) {
          lVar17 = FUN_1407ad36c();
        }
        lVar24 = *param_3;
        lVar17 = FUN_14477b664(lVar17);
        iVar15 = 0;
        iVar14 = 0;
        if ((lVar17 != 0) && (plVar10 = *(longlong **)(lVar17 + 0xb8), plVar10 != (longlong *)0x0))
        {
          lVar18 = *plVar10;
          pcVar11 = *(code **)(lVar18 + 0x108);
          if (pcVar11 != (code *)&LAB_14478342e && pcVar11 != (code *)&LAB_144783422) {
            cVar13 = (*pcVar11)(plVar10);
            iVar14 = 0;
            if (cVar13 == '\0') goto LAB_14135ad2d;
            lVar18 = *plVar10;
          }
          pcVar11 = *(code **)(lVar18 + 0x110);
          ppuVar21 = &PTR_PTR_14c763408;
          if ((pcVar11 != (code *)&LAB_144783426) &&
             (ppuVar21 = &PTR_PTR_14c75f798, pcVar11 != (code *)&LAB_144783432)) {
            ppuVar21 = (undefined **)(*pcVar11)(plVar10);
          }
          iVar14 = FUN_144aff48c(ppuVar21);
        }
LAB_14135ad2d:
        lVar18 = *(longlong *)(pfVar22 + -0xc);
        lVar12 = *(longlong *)(pfVar22 + -10);
        if ((lVar12 != 0) && (plVar10 = *(longlong **)(lVar12 + 0xb8), plVar10 != (longlong *)0x0))
        {
          lVar19 = *plVar10;
          pcVar11 = *(code **)(lVar19 + 0x108);
          if (pcVar11 != (code *)&LAB_14478342e && pcVar11 != (code *)&LAB_144783422) {
            cVar13 = (*pcVar11)(plVar10);
            if (cVar13 == '\0') goto LAB_14135ada0;
            lVar19 = *plVar10;
          }
          pcVar11 = *(code **)(lVar19 + 0x110);
          ppuVar21 = &PTR_PTR_14c763408;
          if ((pcVar11 != (code *)&LAB_144783426) &&
             (ppuVar21 = &PTR_PTR_14c75f798, pcVar11 != (code *)&LAB_144783432)) {
            ppuVar21 = (undefined **)(*pcVar11)(plVar10);
          }
          iVar15 = FUN_144aff48c(ppuVar21);
        }
LAB_14135ada0:
        if ((iVar15 == iVar14) && (lVar18 == lVar24)) {
          if (lVar12 == lVar17) {
LAB_14135ae48:
            if ((*pfVar22 == param_5) &&
               ((!NAN(*pfVar22) && !NAN(param_5) &&
                (dVar2 = *(double *)(pfVar22 + -2), dVar3 = param_4[2],
                dVar4 = *(double *)(pfVar22 + -4), dVar5 = param_4[1],
                dVar6 = *(double *)(pfVar22 + -6), dVar7 = *param_4, lVar17 = FUN_140316ff8(),
                (dVar2 - dVar3) * (dVar2 - dVar3) +
                (dVar6 - dVar7) * (dVar6 - dVar7) + (dVar4 - dVar5) * (dVar4 - dVar5) <
                (double)(*(float *)(lVar17 + 0x54) * *(float *)(lVar17 + 0x54)))))) {
              if (iVar23 != 1) {
                return -iVar23;
              }
              break;
            }
          }
          else if ((lVar17 != 0) && (lVar12 != 0)) {
            iVar14 = *(int *)(lVar17 + 0x38);
            iVar15 = *(int *)(lVar12 + 0x38);
            if (((iVar14 <= iVar15) &&
                (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar14 * 8) == lVar17 + 0x30
                )) || ((iVar15 <= iVar14 &&
                       (*(longlong *)(*(longlong *)(lVar17 + 0x30) + (longlong)iVar15 * 8) ==
                        lVar12 + 0x30)))) goto LAB_14135ae48;
          }
        }
      }
      iVar23 = iVar23 + -1;
      pfVar16 = pfVar22 + 0xe;
      pfVar22 = pfVar22 + 0x20;
    } while (pfVar16 != (float *)((longlong)iVar8 * 0x80 + lVar9));
  }
  iVar8 = *(int *)(param_1 + 0x228);
  *(uint *)(param_1 + 0x228) = iVar8 + 1U;
  if (*(uint *)(param_1 + 0x22c) < iVar8 + 1U) {
    FUN_1459251d8((longlong *)(param_1 + 0x220),iVar8);
  }
  lVar17 = *(longlong *)(param_1 + 0x220);
  lVar24 = (longlong)iVar8 * 0x80;
  lVar9 = lVar17 + lVar24;
  puVar1 = (undefined8 *)(lVar17 + 0x68 + lVar24);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar17 + 0x58 + lVar24);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar17 + 0x48 + lVar24);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar17 + 0x38 + lVar24);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar17 + 0x28 + lVar24);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar17 + 0x18 + lVar24);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar17 + 8 + lVar24);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar17 + 0x78 + lVar24) = 0;
  *(longlong *)(lVar17 + lVar24) = param_2;
  *(longlong *)(lVar17 + 0x18 + lVar24) = *param_3;
  if (param_3[1] != 0) {
    *(undefined8 *)(lVar9 + 0x28) = 0;
  }
  uVar20 = FUN_14477b664();
  uVar20 = FUN_14477b664(uVar20);
  *(undefined8 *)(lVar9 + 0x20) = uVar20;
  *(longlong *)(lVar9 + 0x28) = param_3[2];
  *(double *)(lVar9 + 0x40) = param_4[2];
  dVar2 = param_4[1];
  *(double *)(lVar9 + 0x30) = *param_4;
  *(double *)(lVar9 + 0x38) = dVar2;
  *(float *)(lVar9 + 0x48) = param_5;
  *(undefined8 *)(lVar9 + 0x58) = param_6;
  return *(int *)(param_1 + 0x228) + -1;
}



// FUNCTION 14135b052 FUN_14135b052 body=1461 status=ok
// SIG undefined FUN_14135b052(void)

undefined8 * FUN_14135b052(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  uint local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  undefined8 local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140651a3e();
  *param_1 = &PTR_FUN_14b021dc0;
  param_1[0x72] = &PTR_FUN_14b022410;
  param_1[0x73] = &PTR_FUN_14b022430;
  param_1[0x74] = &PTR_FUN_14b022460;
  param_1[0x75] = &PTR_FUN_14b022470;
  param_1[0x76] = &PTR_FUN_14b0224e0;
  param_1[0x77] = &PTR_FUN_14b022510;
  param_1[0x78] = &PTR_FUN_14b022540;
  param_1[0x7f] = &PTR_FUN_14b0225f0;
  param_1[0x80] = &PTR_FUN_14b022660;
  param_1[0x81] = &PTR_FUN_14b0226d0;
  param_1[0x82] = &PTR_FUN_14b022700;
  param_1[0x83] = &PTR_FUN_14b022740;
  param_1[0x84] = &PTR_FUN_14b0227e0;
  param_1[0x85] = &PTR_FUN_14b022800;
  param_1[0x89] = &PTR_FUN_14b022820;
  param_1[0x8a] = &PTR_FUN_14b0228e0;
  param_1[0x8b] = &PTR_FUN_14b022960;
  param_1[0x8c] = &PTR_FUN_14b0229b0;
  param_1[0x8d] = &PTR_FUN_14b0229f0;
  param_1[0x8e] = &PTR_FUN_14b022a10;
  param_1[0x8f] = &PTR_FUN_14b022a30;
  param_1[0x90] = &PTR_FUN_14b022a50;
  param_1[0x91] = &PTR_FUN_14b022a70;
  param_1[0x92] = &PTR_FUN_14b022a90;
  param_1[0x93] = &PTR_FUN_14b022ab0;
  param_1[0x94] = &PTR_FUN_14b022ad0;
  param_1[0x95] = &PTR_FUN_14b022af0;
  param_1[0x96] = &PTR_FUN_14b022b10;
  param_1[0x34b] = &PTR_FUN_14b022b30;
  param_1[0x34c] = &PTR_FUN_14b022c10;
  param_1[0x34d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a74) = 0;
  param_1[0x358] = 0;
  *(undefined4 *)(param_1 + 0x359) = 0;
  param_1[0x354] = 0;
  param_1[0x355] = 0;
  param_1[0x352] = 0;
  param_1[0x353] = 0;
  param_1[0x350] = 0;
  param_1[0x351] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1acc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1ad4) = 0;
  param_1[0x35c] = 0;
  *(undefined4 *)(param_1 + 0x35d) = 0;
  param_1[0x35e] = 0;
  param_1[0x35f] = 0;
  param_1[0x361] = 0;
  param_1[0x362] = 0;
  param_1[0x363] = 0;
  *(undefined1 *)((longlong)param_1 + 0x1bb5) = 1;
  *(undefined4 *)(param_1 + 0x377) = 0x42480000;
  param_1[0x379] = 0;
  *(undefined4 *)(param_1 + 0x37a) = 3;
  param_1[0x37b] = 0;
  param_1[0x37c] = 0;
  param_1[0x37d] = 0;
  param_1[0x37e] = 0;
  param_1[0x37f] = 0;
  param_1[0x380] = 0;
  param_1[0x381] = 0;
  param_1[0x382] = 0;
  param_1[899] = 0;
  *(undefined2 *)(param_1 + 900) = 1;
  param_1[0x38b] = 0;
  param_1[0x38c] = 0;
  param_1[0x389] = 0;
  param_1[0x38a] = 0;
  param_1[0x387] = 0;
  param_1[0x388] = 0;
  *(undefined4 *)(param_1 + 0x38d) = 2;
  param_1[0x39e] = 0;
  *(undefined4 *)(param_1 + 0x39f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ca4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ccc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cd4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1cdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1d04) = 0;
  param_1[0x3a2] = 0;
  *(undefined4 *)(param_1 + 0x3a3) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d2d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d35) = 0;
  param_1[0x3a4] = 0;
  param_1[0x3a5] = 0;
  param_1[0x3ac] = 0;
  param_1[0x3ad] = 0;
  param_1[0x3aa] = 0;
  param_1[0x3ab] = 0;
  param_1[0x3a8] = 0;
  param_1[0x3a9] = 0;
  *(undefined4 *)(param_1 + 0x3ae) = 2;
  *(undefined1 *)(param_1 + 0x3c4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d77) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d74) = 0;
  param_1[0x3b6] = 0;
  param_1[0x3b4] = 0;
  param_1[0x3b5] = 0;
  param_1[0x3b2] = 0;
  param_1[0x3b3] = 0;
  param_1[0x3b0] = 0;
  param_1[0x3b1] = 0;
  param_1[0x3c8] = 0;
  param_1[0x3c9] = 0;
  param_1[0x3c6] = 0;
  param_1[0x3c7] = 0;
  param_1[0x386] = &PTR_FUN_14b023630;
  param_1[0x3ca] = 0;
  FUN_1446f470e(&local_30,L"SegmentMeshComponent",1);
  if (DAT_14cac1d70 == 0) {
    local_50 = &local_28;
    local_28 = FUN_144b223ce;
    local_40 = FUN_14081d0ea;
    local_48 = FUN_1432411d6;
    local_58 = &LAB_147878f54;
    local_60 = &LAB_1417ad3ba;
    local_68 = L"Engine";
    local_70 = 0;
    local_78 = 0x10000004;
    local_80 = 0x10;
    local_88 = 0xb10;
    FUN_14081cfa3(L"/Script/Engine",L"InstancedStaticMeshComponent",&DAT_14cac1d70,FUN_14637c2da);
  }
  local_80 = local_80 & 0xffffff00;
  local_88 = CONCAT31(local_88._1_3_,1);
  plVar4 = (longlong *)FUN_14048696c(param_1,local_30,DAT_14cac1d70,DAT_14cac1d70);
  if ((plVar4 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
    param_1[0x37b] = plVar4;
    if (plVar4 == (longlong *)0x0) goto LAB_14135b466;
  }
  else {
    FUN_1456cec3c(plVar4);
    param_1[0x37b] = plVar4;
  }
  (**(code **)(*plVar4 + 0x588))(plVar4,0);
  FUN_140486fc4(param_1[0x37b],param_1[0x39],0);
LAB_14135b466:
  *(undefined1 **)((longlong)param_1 + 0x1bbc) = &DAT_100000001;
  *(undefined8 *)((longlong)param_1 + 0x1b84) = 0x4234000042480000;
  *(undefined8 *)((longlong)param_1 + 0x1b8c) = 0x42480000;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x373) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x1b9c) = uVar1;
  *(undefined4 *)(param_1 + 0x374) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1ba4) = uVar3;
  param_1[0x375] = DAT_14c8464f0;
  *(undefined4 *)((longlong)param_1 + 0x1b94) = 0x41c80000;
  *(undefined4 *)(param_1 + 0x376) = 0x42200000;
  FUN_1403121a6(param_1,0);
  *(undefined1 *)(param_1 + 0x34e) = 0;
  *(byte *)((longlong)param_1 + 0x1a7c) = *(byte *)((longlong)param_1 + 0x1a7c) & 0xfe;
  *(byte *)((longlong)param_1 + 0x1b04) = *(byte *)((longlong)param_1 + 0x1b04) & 0xfe;
  *(undefined4 *)(param_1 + 0x360) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b84) = 0x41a0000041f00000;
  param_1[0x373] = 0x402e000000000000;
  param_1[0x374] = 0;
  param_1[0x375] = 0;
  *(undefined4 *)(param_1 + 0x376) = 0x41c80000;
  *(byte *)((longlong)param_1 + 0x1bb4) = *(byte *)((longlong)param_1 + 0x1bb4) & 0xc0 | 0x10;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14135b608 FUN_14135b608 body=2378 status=ok
// SIG undefined FUN_14135b608(void)

void FUN_14135b608(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  uint *puVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  longlong *plVar18;
  undefined4 *puVar19;
  ulonglong uVar20;
  undefined1 auStack_1c8 [44];
  int local_19c;
  ulonglong local_198;
  longlong *local_190;
  longlong local_188;
  uint local_180;
  uint local_17c;
  longlong *local_178;
  longlong local_170;
  ulonglong local_168;
  longlong *local_160;
  ulonglong local_158;
  ulonglong local_150;
  longlong local_148;
  longlong local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined2 local_128;
  undefined8 local_120;
  longlong *plStack_118;
  undefined8 local_110;
  longlong local_108 [2];
  uint local_f8 [4];
  uint *local_e8;
  uint local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  longlong local_b8 [2];
  uint local_a8 [4];
  uint *local_98;
  uint local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_170 = param_1;
  if (*param_2 != 0) {
    FUN_1446e60f4(*param_2,&DAT_14cb843f8);
  }
  uVar11 = 0;
  local_98 = (uint *)0x0;
  local_90 = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN_140cb327c();
  if (local_90 == 0) {
    uVar20 = 1;
    uVar3 = 0;
    iVar16 = 0;
  }
  else {
    puVar4 = local_98;
    if (local_98 == (uint *)0x0) {
      puVar4 = local_a8;
    }
    uVar3 = *puVar4;
    if (uVar3 == 0) {
      iVar16 = local_90 + 0x1e;
      if (-1 < (int)(local_90 - 1)) {
        iVar16 = local_90 - 1;
      }
      uVar11 = 0;
      uVar20 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
        uVar20 = uVar11;
      }
      iVar16 = 0;
      do {
        if (uVar20 == uVar11) goto LAB_14135bda1;
        iVar16 = iVar16 + 0x20;
        uVar3 = puVar4[uVar11 + 1];
        uVar11 = uVar11 + 1;
      } while (uVar3 == 0);
    }
    else {
      uVar11 = 0;
      iVar16 = 0;
    }
    uVar20 = (ulonglong)(-uVar3 & uVar3);
    uVar13 = uVar20 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar3 = (iVar16 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if ((int)local_90 <= (int)uVar3) {
      uVar3 = local_90;
    }
  }
  if (uVar3 != local_90) {
    local_178 = (longlong *)(local_170 + 0x18);
    uVar15 = 0xffffffff;
    local_198 = (ulonglong)local_90;
    do {
      local_188 = (longlong)(int)uVar3 * 0x40 + local_b8[0];
      iVar10 = *(int *)(local_170 + 0x20);
      uVar3 = iVar10 + 1;
      *(uint *)(local_170 + 0x20) = uVar3;
      local_19c = iVar16;
      local_180 = uVar15;
      if (*(uint *)(local_170 + 0x24) < uVar3) {
        FUN_14135c068(local_178);
      }
      lVar12 = *local_178;
      lVar17 = (longlong)iVar10 * 0xa0;
      plVar14 = (longlong *)(lVar12 + lVar17);
      memset(plVar14,0,0xa0);
      *(undefined4 *)(lVar12 + 0x40 + lVar17) = 0xf00000d0;
      *(undefined4 *)(lVar12 + 0x50 + lVar17) = 0x3f800000;
      puVar9 = (undefined8 *)(lVar12 + 0x58 + lVar17);
      *puVar9 = 0;
      puVar9[1] = 0;
      *(undefined8 *)(lVar12 + 0x68 + lVar17) = 0;
      if (DAT_14c947fe0 == 0) {
        lVar6 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar6);
        DAT_14c947fe0 = lVar6;
      }
      lVar6 = local_188;
      FUN_140045924(DAT_14c947fe0,local_108,local_188,1);
      *plVar14 = local_108[0];
      puVar9 = &DAT_14c9a1308;
      if (*(longlong *)(lVar6 + 0x28) != 0) {
        puVar9 = (undefined8 *)FUN_1446e60f4(*(longlong *)(lVar6 + 0x28),&DAT_14cb84400);
      }
      FUN_140d72bcc(lVar12 + lVar17 + 8,puVar9,0);
      if (*(longlong *)(local_188 + 0x28) != 0) {
        FUN_1446e60f4(*(longlong *)(local_188 + 0x28),&DAT_14cb84408);
      }
      uVar13 = 0;
      local_e8 = (uint *)0x0;
      local_e0 = 0;
      local_108[0] = 0;
      local_108[1] = 0;
      local_dc = 0xffffffff00000080;
      local_d4 = 0;
      local_c8 = 0;
      local_c0 = 0;
      FUN_140cb327c(local_108);
      local_168 = uVar20;
      local_150 = uVar11;
      if (local_e0 == 0) {
        uVar11 = 1;
        uVar3 = 0;
        iVar16 = 0;
      }
      else {
        puVar4 = local_e8;
        if (local_e8 == (uint *)0x0) {
          puVar4 = local_f8;
        }
        uVar3 = *puVar4;
        if (uVar3 == 0) {
          iVar16 = local_e0 + 0x1e;
          if (-1 < (int)(local_e0 - 1)) {
            iVar16 = local_e0 - 1;
          }
          uVar13 = 0;
          uVar11 = (ulonglong)(uint)(iVar16 >> 5);
          if (iVar16 >> 5 < 1) {
            uVar11 = uVar13;
          }
          iVar16 = 0;
          do {
            if (uVar11 == uVar13) goto LAB_14135bc8b;
            iVar16 = iVar16 + 0x20;
            uVar3 = puVar4[uVar13 + 1];
            uVar13 = uVar13 + 1;
          } while (uVar3 == 0);
        }
        else {
          uVar13 = 0;
          iVar16 = 0;
        }
        uVar11 = (ulonglong)(-uVar3 & uVar3);
        uVar20 = uVar11 * 2 + 1;
        lVar6 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        uVar3 = (iVar16 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
        if ((int)local_e0 <= (int)uVar3) {
          uVar3 = local_e0;
        }
      }
      if (uVar3 != local_e0) {
        plVar18 = (longlong *)(lVar17 + lVar12 + 0x58);
        uVar15 = 0xffffffff;
        local_190 = plVar14;
        local_160 = plVar18;
        local_158 = (ulonglong)local_e0;
        do {
          lVar17 = (longlong)(int)uVar3 * 0x40 + local_108[0];
          lVar12 = local_190[0xc];
          uVar3 = (int)lVar12 + 1;
          *(uint *)(local_190 + 0xc) = uVar3;
          local_17c = uVar15;
          if (*(uint *)((longlong)local_190 + 100) < uVar3) {
            FUN_14135bf54(plVar18);
          }
          lVar6 = *plVar18;
          lVar12 = (longlong)(int)lVar12 * 0x110;
          plVar14 = (longlong *)(lVar6 + lVar12);
          memset(plVar14,0,0x110);
          *(undefined ***)(lVar6 + 8 + lVar12) = &PTR_FUN_14b023b08;
          *(undefined1 *)(lVar6 + 0x28 + lVar12) = 0;
          puVar9 = (undefined8 *)(lVar6 + 0x30 + lVar12);
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9 = (undefined8 *)(lVar6 + 0x40 + lVar12);
          *puVar9 = 0;
          puVar9[1] = 0;
          *(undefined4 *)(lVar6 + 0x50 + lVar12) = 0x3b9cbb9e;
          puVar9 = (undefined8 *)(lVar6 + 0x58 + lVar12);
          *puVar9 = 0;
          puVar9[1] = 0;
          *(undefined8 *)(lVar6 + 0x68 + lVar12) = 0;
          *(undefined4 *)(lVar6 + 0x70 + lVar12) = 0x3f800000;
          puVar9 = (undefined8 *)(lVar6 + 0x78 + lVar12);
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9 = (undefined8 *)(lVar6 + 0x88 + lVar12);
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9 = (undefined8 *)(lVar6 + 0x98 + lVar12);
          *puVar9 = 0;
          puVar9[1] = 0;
          *(undefined4 *)(lVar6 + 0xa8 + lVar12) = 0xf00000d0;
          *(undefined4 *)(lVar6 + 0xb8 + lVar12) = 0x3f800000;
          puVar9 = (undefined8 *)(lVar6 + 200 + lVar12);
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9 = (undefined8 *)(lVar6 + 0xd8 + lVar12);
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9 = (undefined8 *)(lVar6 + 0xe8 + lVar12);
          *puVar9 = 0;
          puVar9[1] = 0;
          *(undefined4 *)(lVar6 + 0xf8 + lVar12) = 0xf00000d0;
          *(undefined4 *)(lVar6 + 0x108 + lVar12) = 0x3f800000;
          if (DAT_14c947fe0 == 0) {
            lVar5 = FUN_14001cc68(0x140,0x10);
            FUN_1456b2032(lVar5);
            DAT_14c947fe0 = lVar5;
          }
          FUN_140045924(DAT_14c947fe0,&local_140,lVar17,1);
          *plVar14 = local_140;
          lVar17 = *(longlong *)(lVar17 + 0x28);
          plVar18 = &DAT_14c9a1308;
          if (lVar17 != 0) {
            plVar18 = (longlong *)FUN_1446e60f4(lVar17,&DAT_14cb84418);
          }
          puVar19 = &DAT_14c9a12e0;
          if (*plVar18 != 0) {
            puVar19 = (undefined4 *)FUN_140625092();
          }
          if (DAT_14c947fe0 == 0) {
            lVar17 = FUN_14001cc68(0x140,0x10);
            FUN_1456b2032(lVar17);
            DAT_14c947fe0 = lVar17;
          }
          FUN_140045924(DAT_14c947fe0,&local_148,puVar19,1);
          local_140 = local_148;
          local_138 = 0x1030;
          local_130 = 0;
          local_128 = 0;
          local_110 = 0;
          local_120 = 0;
          plStack_118 = (longlong *)0x0;
          if ((plVar14[2] != local_148) || ((int)plVar14[3] != 0x1030)) {
            plVar14[2] = local_148;
            *(undefined4 *)(plVar14 + 3) = 0x1030;
            plVar14[4] = 0;
          }
          *(undefined2 *)(plVar14 + 5) = 0;
          FUN_14029d0b6(lVar12 + 0x30 + lVar6,&local_120);
          plVar14 = plStack_118;
          plVar18 = local_160;
          if (plStack_118 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_118 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_118)(plStack_118);
              LOCK();
              piVar2 = (int *)((longlong)plVar14 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar14 + 0x10))(plVar14);
              }
            }
          }
          puVar9 = &DAT_14c9a1308;
          if (*(longlong *)(local_188 + 0x28) != 0) {
            puVar9 = (undefined8 *)FUN_1446e60f4(*(longlong *)(local_188 + 0x28),&DAT_14cb84410);
          }
          FUN_140d72bcc(lVar12 + 0x70 + lVar6,puVar9,&DAT_14c9a77f0);
          uVar15 = local_17c & ~(uint)uVar11;
          puVar4 = local_e8;
          if (local_e8 == (uint *)0x0) {
            puVar4 = local_f8;
          }
          iVar10 = (int)uVar13;
          lVar12 = (longlong)iVar10;
          uVar3 = puVar4[lVar12] & uVar15;
          if (uVar3 == 0) {
            iVar7 = local_e0 + 0x1e;
            if (-1 < (int)(local_e0 - 1)) {
              iVar7 = local_e0 - 1;
            }
            iVar7 = iVar7 >> 5;
            iVar16 = iVar16 + 0x20;
            iVar8 = iVar7;
            if (iVar7 < iVar10) {
              iVar8 = iVar10;
            }
            if (iVar10 < iVar7) {
              lVar17 = 0;
              do {
                uVar3 = (puVar4 + lVar12 + 1)[lVar17];
                if (uVar3 != 0) {
                  uVar13 = (ulonglong)(iVar10 + (int)lVar17 + 1);
                  uVar15 = 0xffffffff;
                  goto LAB_14135bc4e;
                }
                iVar16 = iVar16 + 0x20;
                lVar17 = lVar17 + 1;
              } while (iVar8 - lVar12 != lVar17);
              uVar15 = 0xffffffff;
              iVar10 = iVar8;
            }
            uVar13 = (ulonglong)(iVar10 + 1);
            plVar18 = local_160;
            uVar3 = local_e0;
          }
          else {
LAB_14135bc4e:
            uVar11 = (ulonglong)(-uVar3 & uVar3);
            uVar20 = uVar11 * 2 + 1;
            lVar12 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar12 == 0; lVar12 = lVar12 + -1) {
              }
            }
            uVar3 = (iVar16 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
            if ((int)local_e0 <= (int)uVar3) {
              uVar3 = local_e0;
            }
          }
        } while (uVar3 != (uint)local_158);
      }
LAB_14135bc8b:
      local_c0 = 0;
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      FUN_140cb2c32(local_108);
      uVar15 = local_180 & ~(uint)local_168;
      puVar4 = local_98;
      if (local_98 == (uint *)0x0) {
        puVar4 = local_a8;
      }
      iVar10 = (int)local_150;
      lVar12 = (longlong)iVar10;
      uVar3 = puVar4[lVar12] & uVar15;
      uVar11 = local_150;
      iVar16 = local_19c;
      if (uVar3 == 0) {
        iVar7 = local_90 + 0x1e;
        if (-1 < (int)(local_90 - 1)) {
          iVar7 = local_90 - 1;
        }
        iVar7 = iVar7 >> 5;
        iVar16 = local_19c + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar10) {
          iVar8 = iVar10;
        }
        if (iVar10 < iVar7) {
          lVar17 = 0;
          do {
            uVar3 = (puVar4 + lVar12 + 1)[lVar17];
            if (uVar3 != 0) {
              uVar15 = 0xffffffff;
              uVar11 = (ulonglong)(iVar10 + (int)lVar17 + 1);
              goto LAB_14135bd50;
            }
            iVar16 = iVar16 + 0x20;
            lVar17 = lVar17 + 1;
          } while (iVar8 - lVar12 != lVar17);
          uVar15 = 0xffffffff;
          iVar10 = iVar8;
        }
        uVar11 = (ulonglong)(iVar10 + 1);
        uVar20 = local_168;
        uVar3 = local_90;
      }
      else {
LAB_14135bd50:
        uVar20 = (ulonglong)(-uVar3 & uVar3);
        uVar13 = uVar20 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        uVar3 = (iVar16 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if ((int)local_90 <= (int)uVar3) {
          uVar3 = local_90;
        }
      }
    } while (uVar3 != (uint)local_198);
  }
LAB_14135bda1:
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_140cb2c32(local_b8);
  if ((local_60 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14135bf54 FUN_14135bf54 body=274 status=ok
// SIG undefined FUN_14135bf54(void)

void FUN_14135bf54(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x110;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x110)) {
      uVar5 = uVar4 / 0x110 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x110,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14135c068 FUN_14135c068 body=272 status=ok
// SIG undefined FUN_14135c068(void)

void FUN_14135c068(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0xa0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xa0)) {
      uVar5 = uVar4 / 0xa0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xa0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14135c178 FUN_14135c178 body=45 status=ok
// SIG undefined FUN_14135c178(void)

void FUN_14135c178(undefined8 param_1,longlong param_2)

{
  FUN_141001072();
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    FUN_14135c1a6(param_1);
    return;
  }
  return;
}



// FUNCTION 14135c1a6 FUN_14135c1a6 body=507 status=ok
// SIG undefined FUN_14135c1a6(void)

void FUN_14135c1a6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = 0;
  local_38 = 0x100000000;
  if (0 < *(int *)(param_1 + 0x540)) {
    lVar4 = param_1 + 0x100;
    lVar6 = 0;
    do {
      FUN_140f937a0(&local_58,lVar4);
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 0x110;
    } while (lVar6 < *(int *)(param_1 + 0x540));
  }
  lVar4 = local_40;
  local_60 = (longlong *)FUN_14001cc68(0x60,0x10);
  local_60[1] = (longlong)&DAT_100000001;
  *local_60 = (longlong)&PTR_FUN_14a492060;
  local_68 = local_60 + 2;
  local_60[2] = 0;
  local_60[3] = 0;
  local_60[4] = 0;
  local_60[5] = 0;
  local_60[6] = 2;
  if (lVar4 == 0) {
    local_60[9] = local_48;
    *(undefined4 *)(local_60 + 7) = local_58;
    *(undefined4 *)((longlong)local_60 + 0x3c) = uStack_54;
    *(undefined4 *)(local_60 + 8) = uStack_50;
    *(undefined4 *)((longlong)local_60 + 0x44) = uStack_4c;
  }
  local_60[10] = lVar4;
  local_40 = 0;
  *(undefined4 *)(local_60 + 0xb) = (undefined4)local_38;
  *(undefined4 *)((longlong)local_60 + 0x5c) = local_38._4_4_;
  local_38 = 0x100000000;
  FUN_140aec6f8(&local_68);
  plVar1 = local_60;
  if (local_60 == (longlong *)0x0) {
    *(longlong **)(param_1 + 0xe0) = local_68;
    plVar5 = *(longlong **)(param_1 + 0xe8);
    if (plVar5 == (longlong *)0x0) goto LAB_14135c2d9;
    *(undefined8 *)(param_1 + 0xe8) = 0;
LAB_14135c33f:
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_14135c2d9;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar5;
  }
  else {
    LOCK();
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0xe0) = local_68;
    plVar5 = *(longlong **)(param_1 + 0xe8);
    if (local_60 != plVar5) {
      *(longlong **)(param_1 + 0xe8) = local_60;
      if (plVar5 == (longlong *)0x0) goto LAB_14135c2d9;
      goto LAB_14135c33f;
    }
    LOCK();
    plVar5 = local_60 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_14135c2d9;
    (**(code **)*local_60)(local_60);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_14135c2d9:
  plVar1 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_60 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  FUN_1404dbc0c(&local_58);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14135c3aa FUN_14135c3aa body=76 status=ok
// SIG undefined FUN_14135c3aa(void)

void FUN_14135c3aa(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_1414e62ca();
  if (cVar1 != '\0') {
    return;
  }
  FUN_1418c07b4(param_1 + 0x10,param_2);
  if (param_1[0x24] != 0) {
    FUN_143f47f2a();
  }
                    /* WARNING: Could not recover jumptable at 0x00014135c3f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x58))(param_1);
  return;
}



// FUNCTION 14135c3f6 FUN_14135c3f6 body=244 status=ok
// SIG undefined FUN_14135c3f6(void)

void FUN_14135c3f6(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_68 [40];
  longlong *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(**(longlong **)(param_1 + 0x78) + 0x70))();
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x568));
  plVar1 = (longlong *)(param_1 + 0x548);
  puVar2 = *(undefined8 **)(param_1 + 0x550);
  while (puVar2 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar2;
    FUN_142758d3a(plVar1);
  }
  if ((longlong *)*plVar1 != (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    plVar3 = (longlong *)*plVar1;
    do {
      if (*(longlong *)(plVar3[2] + 0x30) == *(longlong *)(plVar3[2] + 0x18)) {
        plVar4 = (longlong *)*plVar3;
        plVar5 = plVar6;
        if (plVar6 == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *plVar5 = (longlong)plVar4;
        *(int *)(param_1 + 0x55c) = *(int *)(param_1 + 0x55c) + -1;
        local_38 = (undefined4)plVar3[1];
        local_40 = plVar3;
        FUN_14682f594();
      }
      else {
        plVar4 = (longlong *)*plVar3;
        plVar6 = plVar3;
      }
      plVar3 = plVar4;
    } while (plVar4 != (longlong *)0x0);
  }
  *(undefined8 *)(param_1 + 0x550) = 0;
  *(undefined4 *)(param_1 + 0x558) = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x00014135c498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x568));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14135c4ec FUN_14135c4ec body=216 status=ok
// SIG undefined FUN_14135c4ec(void)

void FUN_14135c4ec(longlong param_1,char param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [32];
  LPCRITICAL_SECTION local_68;
  undefined1 *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != '\0') {
    LOCK();
    *(longlong *)(param_1 + 0x60) = *(longlong *)(param_1 + 0x60) + 1;
    UNLOCK();
    local_48 = (undefined ***)0x0;
    local_38 = &PTR_LAB_149e16d50;
    local_58[0] = &LAB_14170363a;
    local_30 = param_1;
    FUN_14135c642(0,0,local_58);
    if (local_58[0] != (undefined1 *)0x0) {
      pppuVar1 = local_48;
      if (local_48 == (undefined ***)0x0) {
        pppuVar1 = &local_38;
      }
      (*(code *)(*pppuVar1)[2])();
    }
    if (DAT_14c758734 != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
      local_68 = (LPCRITICAL_SECTION)(param_1 + 0x38);
      FUN_14135c5d6(param_1 + 0xd38,param_1 + 0xd38,param_1 + 0x1540,param_1 + 0x1538);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_88);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14135c5d6 FUN_14135c5d6 body=108 status=ok
// SIG undefined FUN_14135c5d6(void)

void FUN_14135c5d6(undefined8 param_1,undefined8 *param_2,uint *param_3,longlong *param_4)

{
  LPVOID lpAddress;
  uint uVar1;
  
  if (*param_3 != 0) {
    do {
      lpAddress = (LPVOID)*param_2;
      *param_4 = *param_4 - param_2[1];
      uVar1 = *param_3 - 1;
      *param_3 = uVar1;
      if (uVar1 != 0) {
        memmove(param_2,param_2 + 2,(ulonglong)uVar1 << 4);
      }
      VirtualFree(lpAddress,0,0x8000);
    } while (*param_3 != 0);
  }
  return;
}



// FUNCTION 14135c642 FUN_14135c642 body=3772 status=ok
// SIG undefined FUN_14135c642(void)

void FUN_14135c642(char param_1,char param_2,longlong *param_3)

{
  char *pcVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  code *pcVar5;
  longlong lVar6;
  double dVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  LARGE_INTEGER *pLVar14;
  uint uVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  bool bVar25;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  int local_bc;
  longlong local_b8;
  undefined8 uStack_b0;
  char *local_a8;
  LARGE_INTEGER local_a0;
  char **local_98;
  LARGE_INTEGER local_90 [4];
  LARGE_INTEGER *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  QueryPerformanceCounter(local_90);
  dVar7 = (double)CONCAT44(local_90[0].s.HighPart,local_90[0].s.LowPart) * DAT_14c83f420;
  local_90[0].s.LowPart = 0x101;
  pcVar5 = (code *)*param_3;
  local_d8 = param_3 + 4;
  plVar16 = (longlong *)param_3[2];
  if ((longlong *)param_3[2] == (longlong *)0x0) {
    plVar16 = local_d8;
  }
  uVar11 = (**(code **)(*plVar16 + 8))();
  (*pcVar5)(uVar11,local_90);
  if (DAT_14c82b500 == (longlong *)0x0) goto LAB_14135d38e;
  dVar7 = dVar7 + 16777216.0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_70 = (LARGE_INTEGER *)0x0;
  local_68 = 0x400000000;
  local_bc = 0;
  local_e0 = param_3;
  if (param_1 == '\0') {
    plVar16 = (longlong *)0x0;
  }
  else {
    local_d0 = (longlong *)FUN_1405d8a54(0);
    iVar9 = DAT_14c7585a8;
    if (param_2 != '\0') {
      iVar9 = (**(code **)(*DAT_14c82b500 + 0x20))();
    }
    LOCK();
    local_bc = local_bc + iVar9;
    UNLOCK();
    if (local_bc < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(local_bc);
    }
    if ((int)uStack_b0._4_4_ < local_bc) {
      FUN_1467ab768(&local_b8);
    }
    if (0 < iVar9) {
      lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar3 = (undefined8 *)(lVar6 + 0x308);
      local_c8 = (longlong *)(lVar6 + 0x2b8);
      iVar20 = 0;
LAB_14135c7c7:
      uVar11 = FUN_1405d8a54(0);
      uVar22 = uStack_b0;
      lVar21 = (longlong)(int)uStack_b0;
      uVar10 = (int)uStack_b0 + 1;
      uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar10);
      if (uStack_b0._4_4_ < uVar10) {
        FUN_1467ab7c8(&local_b8,uVar22 & 0xffffffff);
      }
      *(undefined8 *)(local_b8 + lVar21 * 8) = uVar11;
      puVar13 = (uint *)*puVar3;
      if (puVar13 != (uint *)0x0) goto LAB_14135c85c;
      do {
        uVar10 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar10 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar10 | 1;
          __tlregdtor(&LAB_142733bf0);
        }
        puVar12 = *(undefined4 **)(lVar6 + 0x310);
        *(undefined8 *)(lVar6 + 0x310) = 0;
        if (puVar12 == (undefined4 *)0x0) {
          puVar12 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar12 = 0xffffffff;
        *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
        puVar12[0x12] = 0;
        *puVar3 = puVar12;
        FUN_140217a48(puVar3);
        puVar13 = (uint *)*puVar3;
LAB_14135c85c:
        uVar22 = *(longlong *)(puVar13 + 0x10) + 0xf;
        uVar10 = puVar13[0x12];
        while( true ) {
          puVar23 = (undefined8 *)(uVar22 & 0xfffffffffffffff0);
          if (puVar23 + 0x24 <= puVar13 + 0x4000) {
            *(undefined8 **)(puVar13 + 0x10) = puVar23 + 0x24;
            puVar13[0x12] = uVar10 + 1;
            puVar23[1] = &DAT_100000001;
            puVar23[2] = 0;
            *(undefined4 *)(puVar23 + 3) = 0;
            *(undefined4 *)(puVar23 + 4) = 0xffffffff;
            puVar23[6] = 0;
            puVar23[7] = 0x100000000;
            *(undefined1 *)(puVar23 + 8) = 1;
            puVar23[0xe] = LowLevelTasks::
                           TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                           TTaskDelegateDummy::vftable;
            puVar23[0xf] = 0;
            puVar23[0x10] = 0xe800000000000020;
            puVar23[0x12] = 0;
            puVar23[0x13] = 0x100000000;
            *(undefined2 *)(puVar23 + 0x14) = 0;
            *puVar23 = FBaseGraphTask::vftable;
            LOCK();
            bVar25 = *(char *)(puVar23 + 8) == '\x01';
            if (bVar25) {
              *(char *)(puVar23 + 8) = '\0';
            }
            UNLOCK();
            if (bVar25) goto LAB_14135c962;
            pcVar1 = (char *)(puVar23 + 8);
            cVar8 = *pcVar1;
            goto LAB_14135cb2f;
          }
          *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
          LOCK();
          uVar19 = *puVar13;
          *puVar13 = *puVar13 + uVar10 + 1;
          UNLOCK();
          if ((uVar19 ^ uVar10) != 0xffffffff) break;
          puVar13 = (uint *)*puVar3;
          *puVar13 = 0xffffffff;
          *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
          puVar13[0x12] = 0;
          *puVar3 = puVar13;
          uVar22 = (longlong)puVar13 + 0x67;
          uVar10 = 0;
        }
      } while( true );
    }
LAB_14135cb79:
    plVar16 = local_d0;
    if (local_d0 != (longlong *)0x0) {
      (**(code **)(*local_d0 + 0x20))(local_d0,3000,0);
    }
    lVar6 = local_b8;
    param_3 = local_e0;
    lVar21 = (longlong)(int)uStack_b0;
    if (lVar21 != 0) {
      lVar18 = 0;
      do {
        (**(code **)(**(longlong **)(lVar6 + lVar18) + 0x10))();
        lVar18 = lVar18 + 8;
      } while (lVar21 * 8 != lVar18);
    }
    QueryPerformanceCounter(&local_a0);
    (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_90,0x101);
    QueryPerformanceCounter(&local_a0);
  }
  if (DAT_14c842751 == '\x01') {
    puVar3 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar13 = (uint *)*puVar3;
    if (puVar13 != (uint *)0x0) goto LAB_14135cca6;
    do {
      uVar10 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar10 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar10 | 1;
        __tlregdtor(&LAB_142733bf0);
      }
      lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar12 = *(undefined4 **)(lVar6 + 0x310);
      *(undefined8 *)(lVar6 + 0x310) = 0;
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar12 = 0xffffffff;
      *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
      puVar12[0x12] = 0;
      *puVar3 = puVar12;
      FUN_140217a48(puVar3);
      puVar13 = (uint *)*puVar3;
LAB_14135cca6:
      uVar22 = *(longlong *)(puVar13 + 0x10) + 0xf;
      uVar10 = puVar13[0x12];
      while( true ) {
        puVar23 = (undefined8 *)(uVar22 & 0xfffffffffffffff0);
        if (puVar23 + 0x24 <= puVar13 + 0x4000) {
          *(undefined8 **)(puVar13 + 0x10) = puVar23 + 0x24;
          puVar13[0x12] = uVar10 + 1;
          puVar23[1] = &DAT_100000001;
          puVar23[2] = 0;
          *(undefined4 *)(puVar23 + 3) = 0;
          *(undefined4 *)(puVar23 + 4) = 0xffffffff;
          puVar23[6] = 0;
          puVar23[7] = 0x100000000;
          *(undefined1 *)(puVar23 + 8) = 1;
          puVar23[0xe] = LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateDummy::vftable;
          puVar23[0xf] = 0;
          puVar23[0x10] = 0xe800000000000020;
          puVar23[0x12] = 0;
          puVar23[0x13] = 0x100000000;
          *(undefined2 *)(puVar23 + 0x14) = 0;
          *puVar23 = FBaseGraphTask::vftable;
          LOCK();
          bVar25 = *(char *)(puVar23 + 8) == '\x01';
          if (bVar25) {
            *(char *)(puVar23 + 8) = '\0';
          }
          UNLOCK();
          if (bVar25) goto LAB_14135cdae;
          pcVar1 = (char *)(puVar23 + 8);
          cVar8 = *pcVar1;
          goto LAB_14135d451;
        }
        *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
        LOCK();
        uVar19 = *puVar13;
        *puVar13 = *puVar13 + uVar10 + 1;
        UNLOCK();
        if ((uVar19 ^ uVar10) != 0xffffffff) break;
        puVar13 = (uint *)*puVar3;
        *puVar13 = 0xffffffff;
        *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
        puVar13[0x12] = 0;
        *puVar3 = puVar13;
        uVar22 = (longlong)puVar13 + 0x67;
        uVar10 = 0;
      }
    } while( true );
  }
  goto LAB_14135cf48;
  while( true ) {
    LOCK();
    cVar8 = *pcVar1;
    bVar25 = cVar8 == '\x01';
    if (bVar25) {
      *pcVar1 = '\0';
      cVar8 = '\x01';
    }
    UNLOCK();
    if (bVar25) break;
LAB_14135cb2f:
    if (cVar8 != '\x01') {
      local_98 = &local_a8;
      local_a0.QuadPart = (LONGLONG)FUN_1400e502e;
      local_a8 = pcVar1;
      FUN_14008cf08(pcVar1,&local_a0);
      break;
    }
  }
LAB_14135c962:
  *puVar23 = &PTR_FUN_149e000b8;
  lVar21 = *local_e0;
  puVar23[0x16] = lVar21;
  puVar23[0x18] = 0;
  if (lVar21 != 0) {
    plVar16 = (longlong *)local_e0[2];
    if ((longlong *)local_e0[2] == (longlong *)0x0) {
      plVar16 = local_d8;
    }
    (**(code **)*plVar16)(plVar16,puVar23 + 0x18);
  }
  *(undefined4 *)(puVar23 + 0x1e) = 0x6ff;
  puVar23[0x1f] = &local_bc;
  puVar23[0x20] = uVar11;
  puVar23[0x21] = local_d0;
  puVar23[0x22] = dVar7;
  puVar23[0x23] = L"NPTask";
  if (*(code **)(puVar23[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar23[0xe] + 0x18))(puVar23 + 0xe,puVar23 + 9);
  }
  puVar23[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
  puVar23[9] = puVar23;
  puVar23[10] = puVar23;
  if (*local_c8 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(*local_c8 + 0x30);
  }
  puVar23[0xf] = uVar11;
  puVar23[0x10] = 0xc00000527800b400;
  *(undefined4 *)((longlong)puVar23 + 0x1c) = 0;
  if (puVar23 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar23 + 1) = *(int *)(puVar23 + 1) + 1;
    UNLOCK();
  }
  local_a0.s.LowPart._0_1_ = 1;
  FUN_1447439e4(puVar23,&local_a0);
  uVar22 = local_68;
  lVar21 = (longlong)(int)local_68;
  uVar10 = (int)local_68 + 1;
  local_68 = CONCAT44(local_68._4_4_,uVar10);
  if (local_68._4_4_ < uVar10) {
    FUN_14476a5c8(local_90,uVar22 & 0xffffffff);
  }
  pLVar14 = local_70;
  if (local_70 == (LARGE_INTEGER *)0x0) {
    pLVar14 = local_90;
  }
  pLVar14[lVar21].QuadPart = (LONGLONG)puVar23;
  iVar20 = iVar20 + 1;
  if (iVar20 == iVar9) goto LAB_14135cb79;
  goto LAB_14135c7c7;
  while( true ) {
    LOCK();
    cVar8 = *pcVar1;
    bVar25 = cVar8 == '\x01';
    if (bVar25) {
      *pcVar1 = '\0';
      cVar8 = '\x01';
    }
    UNLOCK();
    param_3 = local_e0;
    if (bVar25) break;
LAB_14135d46f:
    if (cVar8 != '\x01') {
      local_98 = &local_a8;
      local_a0.QuadPart = (LONGLONG)FUN_1400e502e;
      local_a8 = pcVar1;
      FUN_14008cf08();
      param_3 = local_e0;
      break;
    }
  }
LAB_14135d107:
  *puVar23 = &PTR_FUN_149e000b8;
  lVar6 = *param_3;
  puVar23[0x16] = lVar6;
  puVar23[0x18] = 0;
  if (lVar6 != 0) {
    plVar17 = local_d8;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar17 = (longlong *)param_3[2];
    }
    (**(code **)*plVar17)(plVar17,puVar23 + 0x18);
  }
  *(uint *)(puVar23 + 0x1e) = uVar19;
  puVar23[0x1f] = 0;
  puVar23[0x20] = 0;
  puVar23[0x21] = 0;
  puVar23[0x22] = dVar7;
  puVar23[0x23] = &DAT_149dff672;
  if ((uVar22 & 0xff) == 0xff) {
    uVar10 = uVar10 >> 10 & 3;
    iVar9 = 0;
    if (uVar10 < 2) {
      uVar22 = (ulonglong)(byte)(&DAT_149e38edc)[uVar10];
    }
    else {
      uVar22 = 2;
    }
  }
  else {
    iVar9 = *(int *)(&DAT_149e38ed0 + (uVar22 & 0xff) * 4) + (uVar10 >> 7 & 2) + 1;
    uVar22 = 5;
  }
  if (*(code **)(puVar23[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar23[0xe] + 0x18))(puVar23 + 0xe,puVar23 + 9);
  }
  puVar23[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
  puVar23[9] = puVar23;
  puVar23[10] = puVar23;
  lVar6 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar6 == 0) {
    uVar24 = 1;
    if ((char)uVar22 != '\x06') {
      uVar24 = uVar22;
    }
    uVar22 = uVar24;
    uVar11 = 0;
  }
  else {
    if ((char)uVar22 == '\x06') {
      uVar22 = *(ulonglong *)(lVar6 + 0x38) >> 0x3b;
    }
    uVar11 = *(undefined8 *)(lVar6 + 0x30);
  }
  puVar23[0xf] = uVar11;
  puVar23[0x10] = uVar22 << 0x3b | 0xc00000527800b400;
  *(int *)((longlong)puVar23 + 0x1c) = iVar9;
  if (puVar23 == (undefined8 *)0x0) {
    local_a0.s.LowPart._0_1_ = 1;
    FUN_1447439e4(0);
  }
  else {
    LOCK();
    *(int *)(puVar23 + 1) = *(int *)(puVar23 + 1) + 1;
    UNLOCK();
    local_a0.s.LowPart._0_1_ = 1;
    FUN_1447439e4(puVar23);
    LOCK();
    piVar2 = (int *)(puVar23 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar23)(puVar23,1);
    }
  }
  goto LAB_14135d313;
  while( true ) {
    LOCK();
    cVar8 = *pcVar1;
    bVar25 = cVar8 == '\x01';
    if (bVar25) {
      *pcVar1 = '\0';
      cVar8 = '\x01';
    }
    UNLOCK();
    param_3 = local_e0;
    if (bVar25) break;
LAB_14135d451:
    if (cVar8 != '\x01') {
      local_98 = &local_a8;
      local_a0.QuadPart = (LONGLONG)FUN_1400e502e;
      local_a8 = pcVar1;
      FUN_14008cf08();
      param_3 = local_e0;
      break;
    }
  }
LAB_14135cdae:
  *puVar23 = &PTR_FUN_149e000b8;
  lVar6 = *param_3;
  puVar23[0x16] = lVar6;
  puVar23[0x18] = 0;
  if (lVar6 != 0) {
    plVar17 = (longlong *)param_3[2];
    if ((longlong *)param_3[2] == (longlong *)0x0) {
      plVar17 = local_d8;
    }
    (**(code **)*plVar17)(plVar17,puVar23 + 0x18);
  }
  *(undefined4 *)(puVar23 + 0x1e) = 0x200;
  puVar23[0x1f] = 0;
  puVar23[0x20] = 0;
  puVar23[0x21] = 0;
  puVar23[0x22] = dVar7;
  puVar23[0x23] = L"RHIT";
  if (*(code **)(puVar23[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar23[0xe] + 0x18))(puVar23 + 0xe,puVar23 + 9);
  }
  puVar23[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
  puVar23[9] = puVar23;
  puVar23[10] = puVar23;
  lVar6 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar6 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(lVar6 + 0x30);
  }
  puVar23[0xf] = uVar11;
  puVar23[0x10] = 0xe80000527800b400;
  *(undefined4 *)((longlong)puVar23 + 0x1c) = 0xc;
  if (puVar23 == (undefined8 *)0x0) {
    local_a0.s.LowPart._0_1_ = 1;
    FUN_1447439e4(0);
  }
  else {
    LOCK();
    *(int *)(puVar23 + 1) = *(int *)(puVar23 + 1) + 1;
    UNLOCK();
    local_a0.s.LowPart._0_1_ = 1;
    FUN_1447439e4(puVar23);
    LOCK();
    piVar2 = (int *)(puVar23 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar23)(puVar23,1);
    }
  }
LAB_14135cf48:
  uVar10 = DAT_14c7585c8;
  uVar22 = (ulonglong)DAT_14c7585c8;
  if (DAT_14c7585c8 != 1) {
    uVar19 = DAT_14c7585c8 | 0x200;
    puVar3 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar13 = (uint *)*puVar3;
    if (puVar13 != (uint *)0x0) goto LAB_14135cfff;
    do {
      uVar15 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar15 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar15 | 1;
        __tlregdtor(&LAB_142733bf0);
      }
      lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar12 = *(undefined4 **)(lVar6 + 0x310);
      *(undefined8 *)(lVar6 + 0x310) = 0;
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar12 = 0xffffffff;
      *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
      puVar12[0x12] = 0;
      *puVar3 = puVar12;
      FUN_140217a48(puVar3);
      puVar13 = (uint *)*puVar3;
LAB_14135cfff:
      uVar24 = *(longlong *)(puVar13 + 0x10) + 0xf;
      uVar15 = puVar13[0x12];
      while( true ) {
        puVar23 = (undefined8 *)(uVar24 & 0xfffffffffffffff0);
        if (puVar23 + 0x24 <= puVar13 + 0x4000) {
          *(undefined8 **)(puVar13 + 0x10) = puVar23 + 0x24;
          puVar13[0x12] = uVar15 + 1;
          puVar23[1] = &DAT_100000001;
          puVar23[2] = 0;
          *(undefined4 *)(puVar23 + 3) = 0;
          *(undefined4 *)(puVar23 + 4) = 0xffffffff;
          puVar23[6] = 0;
          puVar23[7] = 0x100000000;
          *(undefined1 *)(puVar23 + 8) = 1;
          puVar23[0xe] = LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateDummy::vftable;
          puVar23[0xf] = 0;
          puVar23[0x10] = 0xe800000000000020;
          puVar23[0x12] = 0;
          puVar23[0x13] = 0x100000000;
          *(undefined2 *)(puVar23 + 0x14) = 0;
          *puVar23 = FBaseGraphTask::vftable;
          LOCK();
          bVar25 = *(char *)(puVar23 + 8) == '\x01';
          if (bVar25) {
            *(char *)(puVar23 + 8) = '\0';
          }
          UNLOCK();
          if (bVar25) goto LAB_14135d107;
          pcVar1 = (char *)(puVar23 + 8);
          cVar8 = *pcVar1;
          goto LAB_14135d46f;
        }
        *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
        LOCK();
        uVar4 = *puVar13;
        *puVar13 = *puVar13 + uVar15 + 1;
        UNLOCK();
        if ((uVar4 ^ uVar15) != 0xffffffff) break;
        puVar13 = (uint *)*puVar3;
        *puVar13 = 0xffffffff;
        *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
        puVar13[0x12] = 0;
        *puVar3 = puVar13;
        uVar24 = (longlong)puVar13 + 0x67;
        uVar15 = 0;
      }
    } while( true );
  }
LAB_14135d313:
  lVar6 = local_b8;
  lVar21 = (longlong)(int)uStack_b0;
  if (lVar21 != 0) {
    lVar18 = 0;
    do {
      FUN_14018802a(*(undefined8 *)(lVar6 + lVar18));
      lVar18 = lVar18 + 8;
    } while (lVar21 * 8 != lVar18);
  }
  if (plVar16 != (longlong *)0x0) {
    FUN_14018802a(plVar16);
  }
  QueryPerformanceCounter(&local_a0);
  pLVar14 = local_90;
  if (local_70 != (LARGE_INTEGER *)0x0) {
    pLVar14 = local_70;
  }
  FUN_144717c65(pLVar14,local_68 & 0xffffffff);
  if (local_70 != (LARGE_INTEGER *)0x0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
LAB_14135d38e:
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14135d500 FUN_14135d500 body=375 status=ok
// SIG undefined FUN_14135d500(void)

undefined8 * FUN_14135d500(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 14135d683 FUN_14135d683 body=73 status=ok
// SIG undefined FUN_14135d683(void)

void FUN_14135d683(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14135d6cc FUN_14135d6cc body=228 status=ok
// SIG undefined FUN_14135d6cc(void)

longlong FUN_14135d6cc(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbae910 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_148c403c1;
    local_40 = &LAB_145aa4d96;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x5a0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakSingularity",&DAT_14cbae910,FUN_1465ec21c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbae910;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14135d7b2 FUN_14135d7b2 body=207 status=ok
// SIG undefined FUN_14135d7b2(void)

void FUN_14135d7b2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b429e90;
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
    if (puVar4 == (undefined8 *)0x0) goto LAB_14135d856;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_14135d856:
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014135d86e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14135d882 FUN_14135d882 body=78 status=ok
// SIG undefined FUN_14135d882(void)

longlong * FUN_14135d882(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_140cee5ba();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30) {
        return (longlong *)0x0;
      }
      return plVar1;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 14135d8d0 FUN_14135d8d0 body=94 status=ok
// SIG undefined FUN_14135d8d0(void)

undefined8 FUN_14135d8d0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((param_2 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x1c8) != 0)) {
    lVar1 = (**(code **)(*param_2 + 0x3a8))(param_2);
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014135d921. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x490))
                        (*(longlong **)(param_1 + 0x1c8),lVar1,param_3,param_4);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 14135d92e FUN_14135d92e body=860 status=ok
// SIG undefined FUN_14135d92e(void)

void FUN_14135d92e(longlong param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined1 *local_68;
  undefined4 local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_2 == (longlong *)0x0) || (lVar4 = (**(code **)(*param_2 + 0x18))(param_2), lVar4 == 0))
  goto LAB_14135da00;
  (**(code **)(*param_2 + 0x40))(param_2);
  lVar5 = FUN_140b15fd0(lVar4);
  if (lVar5 == 0) {
    *(undefined8 *)(param_1 + 0x68) = 0;
    goto LAB_14135da00;
  }
  uVar1 = *(uint *)(lVar5 + 0xc);
  *(uint *)(param_1 + 0x68) = uVar1;
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar5 = 0;
  }
  iVar3 = *(int *)(lVar5 + 0x10);
  if (iVar3 == 0) {
    LOCK();
    iVar3 = DAT_14c964868 + 1;
    UNLOCK();
    iVar7 = DAT_14c964868 + 1;
    bVar9 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar3;
    if (bVar9) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar7);
    }
    LOCK();
    iVar3 = *(int *)(lVar5 + 0x10);
    bVar9 = iVar3 == 0;
    if (bVar9) {
      *(int *)(lVar5 + 0x10) = iVar7;
      iVar3 = 0;
    }
    UNLOCK();
    if (bVar9) {
      iVar3 = iVar7;
    }
    *(int *)(param_1 + 0x6c) = iVar3;
    if (iVar3 == 0) goto LAB_14135da00;
  }
  else {
    *(int *)(param_1 + 0x6c) = iVar3;
  }
  uVar1 = *(uint *)(param_1 + 0x68);
  if (((((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) ||
      (plVar6 = (longlong *)
                ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
      plVar6 == (longlong *)0x0)) ||
     ((((int)plVar6[2] != iVar3 || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)) ||
      (lVar5 = *plVar6, lVar5 == 0)))) goto LAB_14135da00;
  local_68 = &LAB_143de5bb2;
  local_60 = 0;
  FUN_146556e54(&local_58,param_1);
  FUN_14581ede4(lVar4 + 0x30,&local_68,&local_58);
  if ((int)uStack_50 == 0) {
LAB_14135daa0:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    uStack_50 = (ulonglong)uStack_50._4_4_ << 0x20;
    goto LAB_14135daa0;
  }
  local_68 = &LAB_1460026f2;
  local_60 = 0;
  FUN_146556e54(&local_58,param_1);
  FUN_14581ede4(lVar4 + 0x48,&local_68,&local_58);
  if ((int)uStack_50 == 0) {
LAB_14135db24:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    uStack_50 = uStack_50 & 0xffffffff00000000;
    goto LAB_14135db24;
  }
  FUN_1410d9770(param_1,&local_58);
  if (DAT_14c947fe0 == 0) {
    lVar8 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar8);
    DAT_14c947fe0 = lVar8;
  }
  FUN_140045924(DAT_14c947fe0,&local_70,&local_58,1);
  FUN_1411f10ec(lVar4,1,local_70);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  local_78 = 0;
  FUN_140d0a558(lVar5,&local_58);
  puVar2 = local_58;
  lVar5 = (longlong)(int)uStack_50;
  if (lVar5 != 0) {
    lVar8 = 0;
    do {
      FUN_140b1548a(lVar4,*(undefined8 *)((longlong)puVar2 + lVar8),1);
      lVar8 = lVar8 + 8;
    } while (lVar5 * 8 != lVar8);
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8(local_58);
  }
LAB_14135da00:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14135dc8c FUN_14135dc8c body=251 status=ok
// SIG undefined FUN_14135dc8c(void)

ulonglong FUN_14135dc8c(longlong param_1)

{
  char cVar1;
  byte bVar2;
  undefined8 unaff_RDI;
  undefined7 uVar4;
  ulonglong uVar3;
  
  uVar4 = (undefined7)((ulonglong)unaff_RDI >> 8);
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c83f0fc) {
      FUN_144b3d300(&DAT_14c83f0fc);
      if (DAT_14c83f0fc == -1) {
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        bVar2 = FUN_14054d46e(&DAT_14c846b20,L"nothreading");
        DAT_14c83f0f8 = bVar2 ^ 1;
        _Init_thread_footer(&DAT_14c83f0fc);
      }
    }
    if (DAT_14c83f0f8 != 1) {
      uVar3 = CONCAT71(uVar4,1);
      goto LAB_14135dcdb;
    }
  }
  uVar3 = CONCAT71(uVar4,1);
  if (*(longlong *)(param_1 + 0x260) != 0) {
    FUN_1459275e2();
    FUN_145927616(*(undefined8 *)(param_1 + 0x260));
    cVar1 = FUN_1459275f4(*(undefined8 *)(param_1 + 0x260));
    if (cVar1 != '\0') {
      (**(code **)(*DAT_14c82b500 + 0x48))(DAT_14c82b500,1);
      uVar3 = 0;
    }
  }
LAB_14135dcdb:
  return uVar3 & 0xffffffff;
}



// FUNCTION 14135dd88 FUN_14135dd88 body=24 status=ok
// SIG undefined FUN_14135dd88(void)

void FUN_14135dd88(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014135dd9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 14135dda0 FUN_14135dda0 body=29 status=ok
// SIG undefined FUN_14135dda0(void)

undefined8 FUN_14135dda0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14135ddbe FUN_14135ddbe body=90 status=ok
// SIG undefined FUN_14135ddbe(void)

void FUN_14135ddbe(longlong *param_1)

{
  FUN_14135de18(param_1[7],(int)param_1[8]);
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14135de18 FUN_14135de18 body=75 status=ok
// SIG undefined FUN_14135de18(void)

void FUN_14135de18(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x20);
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
      plVar4 = plVar4 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14135de64 FUN_14135de64 body=106 status=ok
// SIG undefined FUN_14135de64(void)

undefined8 * FUN_14135de64(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_14001cc68(0x90,0x10);
  FUN_14135dece(uVar1,param_1,0);
  *param_2 = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_149f22470;
  puVar2[2] = uVar1;
  param_2[1] = puVar2;
  return param_2;
}



// FUNCTION 14135dece FUN_14135dece body=200 status=ok
// SIG undefined FUN_14135dece(void)

undefined8 * FUN_14135dece(undefined8 *param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  undefined2 uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_149f21480;
  param_1[0x11] = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
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
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  if ((param_2 != (longlong *)0x0) && (param_3 == 0)) {
    (**(code **)(*param_2 + 0x128))(param_2,&local_20);
    param_3 = local_20;
  }
  cVar1 = FUN_1403f35db(param_3,&DAT_14c9908e8);
  uVar2 = 2;
  if (cVar1 == '\0') {
    cVar1 = FUN_1403f35db(param_3);
    uVar2 = 0x17;
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
  }
  *(undefined2 *)(param_1 + 1) = uVar2;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14135df98 FUN_14135df98 body=193 status=ok
// SIG undefined FUN_14135df98(void)

ulonglong * FUN_14135df98(undefined8 param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  size_t sVar2;
  ulonglong uVar3;
  char *_Str;
  char **ppcVar4;
  undefined1 auStack_58 [40];
  char *local_30;
  undefined4 local_28;
  char *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((longlong)DAT_14c9908e8 < 0) {
    _Str = (char *)(DAT_14c9908e8 & 0x7fffffffffffffff);
    if (DAT_14c9908f4 == '\x01') {
      ppcVar4 = &local_30;
      FUN_1446f470e(ppcVar4,_Str,1);
    }
    else {
      local_30 = _Str;
      if (_Str == (char *)0x0) {
        local_28 = 0;
      }
      else {
        sVar2 = strlen(_Str);
        local_28 = (undefined4)sVar2;
      }
      ppcVar4 = &local_20;
      FUN_14001c09c(ppcVar4,&local_30,1);
    }
    uVar1 = (ulonglong)*(uint *)ppcVar4;
    uVar3 = (ulonglong)DAT_14c9908f0 << 0x20;
    DAT_14c9908e8 = uVar1;
  }
  else {
    uVar1 = (ulonglong)DAT_14c9908f0 << 0x20;
    uVar3 = DAT_14c9908e8 & 0xffffffff;
  }
  *param_2 = uVar3 | uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14135e05a FUN_14135e05a body=348 status=ok
// SIG undefined FUN_14135e05a(void)

ulonglong FUN_14135e05a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  ulonglong uVar5;
  undefined1 auStack_278 [32];
  undefined1 local_258;
  undefined8 local_250;
  longlong local_248 [2];
  longlong local_238;
  longlong *local_230;
  undefined1 local_228 [520];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_278;
  memset(local_228,0,0x200);
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  local_250 = 0;
  local_258 = 1;
  cVar4 = FUN_140751ea8(&DAT_14c846b20,L"MULTIHOME=",local_228,0x100);
  if (cVar4 == '\0') {
    uVar5 = 0;
  }
  else {
    FUN_140056680(local_248,local_228);
    (**(code **)(*param_1 + 0x58))(param_1,&local_238,local_248);
    if (local_248[0] != 0) {
      FUN_1400020a8();
    }
    uVar5 = CONCAT71((int7)((ulonglong)param_1 >> 8),local_238 != 0);
    if (local_238 != 0) {
      if (local_230 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_230 + 1) = (int)local_230[1] + 1;
        UNLOCK();
      }
      plVar3 = (longlong *)param_2[1];
      *param_2 = local_238;
      param_2[1] = (longlong)local_230;
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
    if (local_230 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_230 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_230)(local_230);
        LOCK();
        piVar2 = (int *)((longlong)local_230 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_230 + 0x10))(local_230);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14135e1b8 FUN_14135e1b8 body=2368 status=ok
// SIG undefined FUN_14135e1b8(void)

longlong FUN_14135e1b8(longlong *param_1,longlong param_2,wchar_t *param_3,wchar_t *param_4,
                      ushort param_5,undefined8 param_6,int param_7)

{
  longlong *plVar1;
  int *piVar2;
  wchar_t wVar3;
  char *_Str;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  wchar_t *pwVar8;
  int iVar9;
  char cVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  DWORD DVar13;
  DWORD DVar14;
  ulonglong uVar15;
  size_t sVar16;
  longlong *plVar17;
  longlong *plVar18;
  uint uVar19;
  longlong lVar20;
  ushort uVar21;
  wchar_t *pwVar22;
  uint uVar23;
  int iVar24;
  bool bVar25;
  undefined1 auStack_288 [32];
  longlong *local_268;
  int local_25c;
  longlong local_258;
  longlong *local_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 local_23c;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  longlong local_210;
  undefined2 **local_208;
  uint local_1fc;
  undefined2 local_1f8;
  undefined1 uStack_1f6;
  undefined5 uStack_1f5;
  undefined2 *local_178;
  undefined2 *local_170;
  int local_168;
  longlong local_f8;
  undefined8 local_f0;
  undefined2 *local_e0 [16];
  undefined2 **local_60;
  undefined2 **local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_288;
  local_268 = param_1;
  FUN_140056680(param_2,param_3);
  FUN_140056680(param_2 + 0x10,param_4);
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x30) = 0x33;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  lVar20 = DAT_14c990918;
  if (param_3 == (wchar_t *)0x0 && param_4 == (wchar_t *)0x0) goto LAB_14135eab2;
  local_210 = 0;
  iVar24 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  if (iVar24 == 0x40000002) {
    uVar15 = 0;
  }
  else {
    bVar25 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar24 != 2)) {
      if (iVar24 == 1) {
        DVar13 = FUN_140ad26c0();
        DVar14 = GetCurrentThreadId();
        bVar25 = DVar13 == DVar14;
      }
      else {
        bVar25 = false;
      }
    }
    uVar15 = (ulonglong)(bVar25 ^ 1);
  }
  iVar24 = param_7;
  local_25c = *(int *)(lVar20 + uVar15 * 4);
  uVar21 = param_5;
  if (param_4 != (wchar_t *)0x0) {
    FUN_140056680(&local_1f8,param_4);
    cVar10 = FUN_1405b43cc(&local_1f8);
    if (CONCAT53(uStack_1f5,CONCAT12(uStack_1f6,local_1f8)) != 0) {
      FUN_1400020a8();
    }
    uVar21 = param_5 | 4;
    if (cVar10 == '\0') {
      uVar21 = param_5;
    }
  }
  plVar1 = local_268;
  local_228 = 0;
  uStack_220 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_218 = 0;
  local_23c = (**(code **)(*local_268 + 0x130))(local_268,&param_6);
  local_240 = (**(code **)(*plVar1 + 0x158))(plVar1,uVar21);
  if (iVar24 != 0) {
    uVar12 = 6;
    if (iVar24 == 1) {
      uVar12 = 0x11;
    }
    local_238 = CONCAT44(uVar12,(iVar24 == 1) + 1);
  }
  local_178 = (undefined2 *)0x0;
  if (param_4 == (wchar_t *)0x0) {
    local_170 = (undefined2 *)0x0;
    local_168 = 0;
  }
  else {
    sVar16 = wcslen(param_4);
    local_208 = (undefined2 **)((ulonglong)local_208 & 0xffffffff00000000);
    local_e0[0] = (undefined2 *)CONCAT44(local_e0[0]._4_4_,0x7fffffff);
    uVar15 = sVar16 & 0xffffffff;
    pwVar22 = param_4;
    do {
      iVar24 = (int)uVar15;
      if (iVar24 < 1) {
LAB_14135e42f:
        local_168 = (int)local_208;
        uVar19 = (int)local_208 + 1;
        if (uVar19 < 0x81) goto LAB_14135e44b;
        FUN_1446efa72(&local_178,0,uVar19,1);
        local_170 = local_178;
        goto LAB_14135e44d;
      }
      wVar3 = *pwVar22;
      uVar19 = (uint)(ushort)wVar3;
      pwVar8 = pwVar22 + 1;
      uVar23 = iVar24 - 1;
      if ((wVar3 & 0xfc00U) == 0xd800) {
        if (iVar24 == 1) {
          cVar10 = FUN_140024707(uVar19,&local_208,local_e0);
          if (cVar10 != '\0') goto LAB_14135e42f;
          break;
        }
        if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
          uVar19 = (uint)(ushort)wVar3 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
          uVar23 = iVar24 - 2;
          pwVar8 = pwVar22 + 2;
        }
      }
      pwVar22 = pwVar8;
      cVar10 = FUN_140024707(uVar19,&local_208,local_e0);
      uVar15 = (ulonglong)uVar23;
    } while (cVar10 != '\0');
    local_168 = -1;
    uVar19 = 0;
LAB_14135e44b:
    local_170 = (undefined2 *)0x0;
LAB_14135e44d:
    if (local_170 == (undefined2 *)0x0) {
      local_170 = &local_1f8;
    }
    iVar24 = (int)sVar16 + 1;
    local_208 = (undefined2 **)CONCAT44(local_208._4_4_,uVar19);
    local_e0[0] = local_170;
    do {
      if (iVar24 < 1) break;
      wVar3 = *param_4;
      uVar19 = (uint)(ushort)wVar3;
      pwVar22 = param_4 + 1;
      iVar9 = iVar24 + -1;
      if ((wVar3 & 0xfc00U) == 0xd800) {
        if (iVar24 == 1) {
          FUN_1400247af(uVar19,local_e0,&local_208);
          break;
        }
        if (((ushort)*pwVar22 & 0xfc00) == 0xdc00) {
          uVar19 = (uint)(ushort)wVar3 * 0x400 + (uint)(ushort)*pwVar22 + 0xfca02400;
          pwVar22 = param_4 + 2;
          iVar9 = iVar24 + -2;
        }
      }
      iVar24 = iVar9;
      cVar10 = FUN_1400247af(uVar19,local_e0,&local_208);
      param_4 = pwVar22;
    } while (cVar10 != '\0');
  }
  puVar7 = local_170;
  local_60 = (undefined2 **)0x0;
  if (param_3 == (wchar_t *)0x0) {
    local_58 = (undefined2 **)0x0;
    local_50 = 0;
  }
  else {
    sVar16 = wcslen(param_3);
    local_1fc = 0;
    local_208 = (undefined2 **)CONCAT44(local_208._4_4_,0x7fffffff);
    uVar15 = sVar16 & 0xffffffff;
    pwVar22 = param_3;
    do {
      iVar24 = (int)uVar15;
      if (iVar24 < 1) {
LAB_14135e62a:
        local_50 = local_1fc;
        uVar19 = local_1fc + 1;
        if (uVar19 < 0x81) goto LAB_14135e646;
        FUN_1446efa72(&local_60,0,uVar19,1);
        local_208 = local_60;
        goto LAB_14135e648;
      }
      wVar3 = *pwVar22;
      uVar19 = (uint)(ushort)wVar3;
      pwVar8 = pwVar22 + 1;
      uVar23 = iVar24 - 1;
      if ((wVar3 & 0xfc00U) == 0xd800) {
        if (iVar24 == 1) {
          cVar10 = FUN_140024707(uVar19,&local_1fc,&local_208);
          if (cVar10 != '\0') goto LAB_14135e62a;
          break;
        }
        if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
          uVar19 = (uint)(ushort)wVar3 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
          uVar23 = iVar24 - 2;
          pwVar8 = pwVar22 + 2;
        }
      }
      pwVar22 = pwVar8;
      cVar10 = FUN_140024707(uVar19,&local_1fc,&local_208);
      uVar15 = (ulonglong)uVar23;
    } while (cVar10 != '\0');
    local_50 = 0xffffffff;
    uVar19 = 0;
LAB_14135e646:
    local_208 = (undefined2 **)0x0;
LAB_14135e648:
    if (local_208 == (undefined2 **)0x0) {
      local_208 = local_e0;
    }
    iVar24 = (int)sVar16 + 1;
    local_1fc = uVar19;
    local_58 = local_208;
    do {
      if (iVar24 < 1) break;
      wVar3 = *param_3;
      uVar19 = (uint)(ushort)wVar3;
      pwVar22 = param_3 + 1;
      iVar9 = iVar24 + -1;
      if ((wVar3 & 0xfc00U) == 0xd800) {
        if (iVar24 == 1) {
          FUN_1400247af(uVar19,&local_208,&local_1fc);
          break;
        }
        if (((ushort)*pwVar22 & 0xfc00) == 0xdc00) {
          uVar19 = (uint)(ushort)wVar3 * 0x400 + (uint)(ushort)*pwVar22 + 0xfca02400;
          pwVar22 = param_3 + 2;
          iVar9 = iVar24 + -2;
        }
      }
      iVar24 = iVar9;
      param_3 = pwVar22;
      cVar10 = FUN_1400247af(uVar19,&local_208,&local_1fc);
    } while (cVar10 != '\0');
  }
  iVar24 = getaddrinfo(local_58,puVar7,&local_240,&local_210);
  if (local_60 != (undefined2 **)0x0) {
    FUN_1400020a8();
  }
  if (local_178 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (iVar24 < 0x276d) {
    if (iVar24 < 0x2726) {
      if (iVar24 == 0) {
        *(undefined4 *)(param_2 + 0x30) = 0;
        local_258 = local_210;
        if (local_210 != 0) {
          _Str = *(char **)(local_210 + 0x18);
          if (_Str != (char *)0x0) {
            local_f8 = 0;
            sVar16 = strlen(_Str);
            FUN_1446e6fe8(&local_1f8,_Str,sVar16 & 0xffffffff,1);
            FUN_14020fad6(param_2 + 0x20,local_f0);
            if (local_f8 != 0) {
              FUN_1400020a8();
            }
            if (local_210 == 0) goto LAB_14135ea81;
          }
          local_250 = (longlong *)(param_2 + 0x38);
          do {
            if (((*(int *)(local_210 + 4) == 2) ||
                ((*(int *)(local_210 + 4) == 0x17 && (local_25c == 0)))) &&
               (lVar20 = *(longlong *)(local_210 + 0x20), lVar20 != 0)) {
              plVar17 = (longlong *)FUN_14001cc68(0x90,0x10);
              plVar1 = local_268;
              FUN_14135dece(plVar17,local_268,0);
              plVar18 = (longlong *)FUN_14001cc68(0x18,0x10);
              plVar18[1] = (longlong)&DAT_100000001;
              *plVar18 = (longlong)&PTR_FUN_149f22470;
              plVar18[2] = (longlong)plVar17;
              (**(code **)(*plVar17 + 200))(plVar17,lVar20,*(undefined4 *)(local_210 + 0x10));
              uVar12 = (**(code **)(*plVar1 + 0x150))(plVar1,*(undefined4 *)(local_210 + 0xc));
              (**(code **)(*plVar1 + 0x140))(plVar1,&local_248);
              uVar6 = local_248;
              uVar4 = *(undefined8 *)(local_210 + 0x10);
              if (plVar18 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
                UNLOCK();
                LOCK();
                *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
                UNLOCK();
                LOCK();
                plVar1 = plVar18 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plVar18)(plVar18);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar18 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar18 + 0x10))(plVar18);
                  }
                }
              }
              uVar11 = (**(code **)(*local_268 + 0x148))(local_268,*(undefined4 *)(local_210 + 4));
              iVar24 = *(int *)(param_2 + 0x40);
              lVar20 = (longlong)iVar24;
              *(uint *)(param_2 + 0x40) = iVar24 + 1U;
              if (*(uint *)(param_2 + 0x44) < iVar24 + 1U) {
                FUN_1417236ea(local_250,iVar24);
              }
              lVar5 = *local_250;
              *(undefined1 *)(lVar5 + lVar20 * 0x28) = uVar11;
              *(undefined2 *)(lVar5 + 1 + lVar20 * 0x28) = local_1f8;
              *(undefined1 *)(lVar5 + 3 + lVar20 * 0x28) = uStack_1f6;
              *(undefined8 *)(lVar5 + 4 + lVar20 * 0x28) = uVar6;
              *(undefined4 *)(lVar5 + 0xc + lVar20 * 0x28) = uVar12;
              *(undefined8 *)(lVar5 + 0x10 + lVar20 * 0x28) = uVar4;
              *(longlong **)(lVar5 + 0x18 + lVar20 * 0x28) = plVar17;
              *(longlong **)(lVar5 + 0x20 + lVar20 * 0x28) = plVar18;
              if (plVar18 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
                UNLOCK();
                LOCK();
                plVar1 = plVar18 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plVar18)(plVar18);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar18 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar18 + 0x10))(plVar18);
                  }
                }
                LOCK();
                plVar1 = plVar18 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plVar18)(plVar18);
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
            local_210 = *(longlong *)(local_210 + 0x28);
          } while (local_210 != 0);
        }
LAB_14135ea81:
        freeaddrinfo(local_258);
        goto LAB_14135eab2;
      }
      if (iVar24 != 8) goto LAB_14135e7f0;
      uVar12 = 0x1b;
    }
    else if (iVar24 == 0x2726) {
LAB_14135e7f0:
      uVar12 = 5;
    }
    else if (iVar24 == 0x273c) {
      uVar12 = 0x10;
    }
    else {
      if (iVar24 != 0x273f) goto LAB_14135e7f0;
      uVar12 = 0x13;
    }
  }
  else {
    switch(iVar24) {
    case 0x2af9:
      uVar12 = 0x30;
      break;
    case 0x2afa:
      uVar12 = 0x31;
      break;
    case 0x2afb:
      uVar12 = 0x32;
      break;
    case 0x2afc:
      uVar12 = 0x33;
      break;
    default:
      if (iVar24 == 0x276d) {
        uVar12 = 0x2f;
      }
      else {
        if (iVar24 != 0x277d) goto LAB_14135e7f0;
        uVar12 = 0x12;
      }
    }
  }
  *(undefined4 *)(param_2 + 0x30) = uVar12;
LAB_14135eab2:
  if ((local_48 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14135eafa FUN_14135eafa body=5030 status=ok
// SIG undefined FUN_14135eafa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14135eafa(longlong *param_1,float param_2)

{
  double dVar1;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  longlong lVar8;
  double *pdVar9;
  longlong lVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined *puVar14;
  uint *puVar15;
  undefined4 in_EDX;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  byte bVar19;
  ulonglong uVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  double dVar38;
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  double dVar46;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar47;
  double dVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  double dVar56;
  undefined1 auVar55 [16];
  double dVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  double dVar60;
  double dVar61;
  undefined1 auVar62 [16];
  double dVar63;
  double dVar64;
  undefined1 auVar65 [16];
  double dVar66;
  double dVar67;
  undefined1 auStack_1d8 [32];
  ulonglong local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  wchar_t *local_198;
  code *local_190;
  undefined1 *local_188;
  code **local_180;
  code *local_178;
  code *local_170;
  double local_168;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  longlong local_118;
  longlong lStack_110;
  longlong local_108;
  code *local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  ulonglong local_d0;
  double dVar2;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  cVar7 = (**(code **)(*param_1 + 0x600))();
  if (((cVar7 == '\0') || (cVar7 = *(char *)((longlong)param_1 + 0x293), cVar7 == '\0')) ||
     ((plVar12 = (longlong *)param_1[0x3e], (char)plVar12[0x2f] != '\x01' &&
      ((char)plVar12[0xd] != '\x02')))) goto LAB_14135f044;
  lVar8 = param_1[0x102];
  if (lVar8 == 0) {
    plVar12 = param_1 + 0x3d;
    lVar8 = (**(code **)(param_1[0x3d] + 0x28))();
    param_1[0x102] = lVar8;
    if (lVar8 != 0) {
      cVar7 = *(char *)((longlong)param_1 + 0x293);
      goto LAB_14135ebc8;
    }
LAB_14135eff9:
    lVar8 = (**(code **)(param_1[0x3d] + 0x28))(param_1 + 0x3d);
    param_1[0x102] = lVar8;
  }
  else {
LAB_14135ebc8:
    plVar13 = DAT_14c8464f0;
    if (cVar7 == '\x02') {
      if ((((((double)param_1[0x25] != 0.0) || (NAN((double)param_1[0x25]))) ||
           ((double)param_1[0x26] != 0.0)) ||
          ((NAN((double)param_1[0x26]) || ((double)param_1[0x27] != 0.0)))) ||
         (NAN((double)param_1[0x27]))) {
        fVar21 = *(float *)(lVar8 + 0x128);
      }
      else {
        fVar21 = *(float *)(lVar8 + 0x128) * 0.5;
      }
      pdVar9 = (double *)(lVar8 + 0x80);
      if (fVar21 <= param_2) {
        *(longlong **)(lVar8 + 0x90) = DAT_14c8464f0;
        dVar22 = DAT_14c8464e8;
        *pdVar9 = DAT_14c8464e0;
        *(double *)(lVar8 + 0x88) = dVar22;
      }
      else {
        dVar22 = (double)(1.0 - param_2 / fVar21);
        *(double *)(lVar8 + 0x80) = dVar22 * *(double *)(lVar8 + 0x80);
        *(double *)(lVar8 + 0x88) = *(double *)(lVar8 + 0x88) * dVar22;
        *(double *)(lVar8 + 0x90) = *(double *)(lVar8 + 0x90) * dVar22;
        plVar13 = plVar12;
      }
      dVar36 = *(double *)(lVar8 + 0xe0);
      dVar38 = *(double *)(lVar8 + 0xe8);
      auVar49 = *(undefined1 (*) [16])(lVar8 + 0xf0);
      dVar22 = auVar49._0_8_;
      dVar35 = auVar49._8_8_;
      if (*(float *)(lVar8 + 300) <= param_2) {
        *(double *)(lVar8 + 0xc0) = dVar36;
        *(double *)(lVar8 + 200) = dVar38;
        *(undefined1 (*) [16])(lVar8 + 0xd0) = auVar49;
        auVar33 = auVar49;
        dVar40 = dVar36;
        dVar46 = dVar38;
      }
      else {
        dVar40 = (double)(param_2 / *(float *)(lVar8 + 300));
        uVar20 = -(ulonglong)
                  (0.0 <= dVar35 * *(double *)(lVar8 + 0xd8) +
                          *(double *)(lVar8 + 0xd0) * dVar22 +
                          *(double *)(lVar8 + 0xc0) * dVar36 + dVar38 * *(double *)(lVar8 + 200));
        dVar24 = (double)(~uVar20 & (ulonglong)-(1.0 - dVar40) | (ulonglong)(1.0 - dVar40) & uVar20)
        ;
        dVar46 = *(double *)(lVar8 + 0xc0) * dVar24 + dVar36 * dVar40;
        dVar23 = *(double *)(lVar8 + 200) * dVar24 + dVar38 * dVar40;
        dVar56 = dVar24 * *(double *)(lVar8 + 0xd0) + dVar40 * dVar22;
        dVar57 = dVar24 * *(double *)(lVar8 + 0xd8) + dVar40 * dVar35;
        dVar40 = dVar56 * dVar56 + dVar46 * dVar46;
        dVar24 = dVar57 * dVar57 + dVar23 * dVar23;
        auVar34._0_8_ = dVar40 + dVar24;
        auVar34._8_8_ = dVar40 + dVar24;
        auVar33._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar34._8_8_);
        auVar33._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar34._0_8_);
        auVar51 = sqrtpd(auVar34,auVar34);
        auVar51 = divpd(_DAT_149934d80,auVar51);
        auVar55._0_8_ = auVar51._0_8_ * dVar56;
        auVar55._8_8_ = auVar51._8_8_ * dVar57;
        dVar40 = (double)((ulonglong)(dVar46 * auVar51._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar34._0_8_));
        dVar46 = (double)((ulonglong)(dVar23 * auVar51._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar34._8_8_));
        auVar33 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar55,auVar33);
        *(double *)(lVar8 + 0xc0) = dVar40;
        *(double *)(lVar8 + 200) = dVar46;
        *(undefined1 (*) [16])(lVar8 + 0xd0) = auVar33;
      }
      if (((ABS(*pdVar9) <= 0.009999999776482582) &&
          (ABS(*(double *)(lVar8 + 0x88)) <= 0.009999999776482582)) &&
         (ABS(*(double *)(lVar8 + 0x90)) <= 0.009999999776482582)) {
        auVar62._8_8_ = -(ulonglong)(9.999999747378752e-06 < ABS(dVar46 - dVar38));
        auVar62._0_8_ = -(ulonglong)(9.999999747378752e-06 < ABS(dVar40 - dVar36));
        uVar11 = movmskpd((int)plVar13,auVar62);
        auVar51._8_8_ = -(ulonglong)(9.999999747378752e-06 < ABS(auVar33._8_8_ - dVar35));
        auVar51._0_8_ = -(ulonglong)(9.999999747378752e-06 < ABS(auVar33._0_8_ - dVar22));
        iVar17 = movmskpd(in_EDX,auVar51);
        uVar18 = iVar17 << 2 | uVar11;
        if (uVar18 != 0) {
          auVar52._8_8_ = -(ulonglong)(9.999999747378752e-06 < ABS(dVar46 + dVar38));
          auVar52._0_8_ = -(ulonglong)(9.999999747378752e-06 < ABS(dVar40 + dVar36));
          iVar17 = movmskpd(uVar11,auVar52);
          auVar30._8_8_ = -(ulonglong)(9.999999747378752e-06 < ABS(auVar33._8_8_ + dVar35));
          auVar30._0_8_ = -(ulonglong)(9.999999747378752e-06 < ABS(auVar33._0_8_ + dVar22));
          uVar11 = movmskpd(uVar18,auVar30);
          if ((uVar11 & 0x3fffffff) != 0 || iVar17 != 0) goto LAB_14135efed;
        }
        *(byte *)((longlong)param_1 + 0x34a) = *(byte *)((longlong)param_1 + 0x34a) | 2;
        *(longlong **)(lVar8 + 0x90) = DAT_14c8464f0;
        dVar22 = DAT_14c8464e8;
        *pdVar9 = DAT_14c8464e0;
        *(double *)(lVar8 + 0x88) = dVar22;
        *(double *)(lVar8 + 0xc0) = dVar36;
        *(double *)(lVar8 + 200) = dVar38;
        *(undefined1 (*) [16])(lVar8 + 0xd0) = auVar49;
      }
    }
    else if (cVar7 == '\x01') {
      if ((param_1[0x16] == 0) &&
         ((((param_1[0x15] == 0 || ((*(uint *)(param_1[0x15] + 8) & 0x10) != 0)) ||
           (lVar10 = FUN_1447210f0(), lVar10 == 0)) && ((param_1[4] != 0 && (DAT_14cb10130 == 0)))))
         ) {
        local_180 = &local_f8;
        local_f8 = FUN_140754f84;
        local_170 = FUN_14081d0ea;
        local_178 = FUN_14081d0ea;
        local_188 = &LAB_147da9a76;
        local_190 = FUN_1409f3105;
        local_198 = L"Engine";
        local_1a0 = 0;
        local_1a8 = 0x10000000;
        local_1b0 = 8;
        local_1b8 = CONCAT44(local_1b8._4_4_,0x990);
        FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
      }
      dVar22 = (double)param_2 + *(double *)(lVar8 + 0x118);
      *(double *)(lVar8 + 0x118) = dVar22;
      fVar21 = *(float *)(lVar8 + 0x100);
      if (fVar21 <= 1e-08) {
        fVar21 = 1.0;
      }
      else {
        dVar35 = (double)(fVar21 * 0.15) + *(double *)(lVar8 + 0x110);
        dVar22 = (double)(float)dVar22;
        if (dVar35 <= dVar22) {
          dVar22 = dVar35;
        }
        fVar21 = (fVar21 - (float)(*(double *)(lVar8 + 0x110) - dVar22)) / fVar21;
        if (1.15 <= fVar21) {
          fVar21 = 1.15;
        }
        *(double *)(lVar8 + 0x118) = dVar22;
        fVar31 = 0.0;
        if ((fVar21 <= 0.0) || (fVar31 = fVar21, fVar21 < 0.9999)) {
          dVar36 = (double)(1.0 - fVar31);
          dVar22 = (double)fVar31;
          dVar35 = (double)DAT_14c8464f0 * dVar22;
          dVar38 = DAT_14c8464e8 * dVar22;
          *(double *)(lVar8 + 0x80) = DAT_14c8464e0 * dVar22 + dVar36 * *(double *)(lVar8 + 0x68);
          *(double *)(lVar8 + 0x88) = dVar38 + *(double *)(lVar8 + 0x70) * dVar36;
          *(double *)(lVar8 + 0x90) = dVar35 + *(double *)(lVar8 + 0x78) * dVar36;
          uVar20 = -(ulonglong)
                    (0.0 <= *(double *)(lVar8 + 0xb8) * *(double *)(lVar8 + 0xf8) +
                            *(double *)(lVar8 + 0xb0) * *(double *)(lVar8 + 0xf0) +
                            *(double *)(lVar8 + 0xa0) * *(double *)(lVar8 + 0xe0) +
                            *(double *)(lVar8 + 0xa8) * *(double *)(lVar8 + 0xe8));
          dVar35 = (double)(~uVar20 & (ulonglong)-(1.0 - dVar22) |
                           (ulonglong)(1.0 - dVar22) & uVar20);
          dVar40 = *(double *)(lVar8 + 0xa0) * dVar35 + *(double *)(lVar8 + 0xe0) * dVar22;
          dVar46 = *(double *)(lVar8 + 0xa8) * dVar35 + *(double *)(lVar8 + 0xe8) * dVar22;
          dVar36 = dVar35 * *(double *)(lVar8 + 0xb0) + dVar22 * *(double *)(lVar8 + 0xf0);
          dVar38 = dVar35 * *(double *)(lVar8 + 0xb8) + dVar22 * *(double *)(lVar8 + 0xf8);
          dVar22 = dVar36 * dVar36 + dVar40 * dVar40;
          dVar35 = dVar38 * dVar38 + dVar46 * dVar46;
          auVar32._0_8_ = dVar22 + dVar35;
          auVar32._8_8_ = dVar22 + dVar35;
          auVar49._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar32._8_8_);
          auVar49._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar32._0_8_);
          auVar33 = sqrtpd(auVar32,auVar32);
          auVar33 = divpd(_DAT_149934d80,auVar33);
          auVar37._0_8_ = auVar33._0_8_ * dVar36;
          auVar37._8_8_ = auVar33._8_8_ * dVar38;
          auVar49 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar37,auVar49);
          *(ulonglong *)(lVar8 + 0xc0) =
               (ulonglong)(dVar40 * auVar33._0_8_) &
               -(ulonglong)(9.99999993922529e-09 <= auVar32._0_8_);
          *(ulonglong *)(lVar8 + 200) =
               (ulonglong)(dVar46 * auVar33._8_8_) &
               -(ulonglong)(9.99999993922529e-09 <= auVar32._8_8_);
          *(undefined1 (*) [16])(lVar8 + 0xd0) = auVar49;
          goto LAB_14135efed;
        }
      }
      if (((9.999999747378752e-05 < ABS((double)param_1[0x25])) ||
          (9.999999747378752e-05 < ABS((double)param_1[0x26]))) ||
         (9.999999747378752e-05 < ABS((double)param_1[0x27]))) {
        dVar22 = (double)(1.0 - fVar21);
        dVar36 = (double)fVar21;
        dVar38 = (double)DAT_14c8464f0 * dVar36;
        dVar35 = DAT_14c8464e8 * dVar36;
        *(double *)(lVar8 + 0x80) = dVar36 * DAT_14c8464e0 + dVar22 * *(double *)(lVar8 + 0x68);
        *(double *)(lVar8 + 0x88) = dVar35 + *(double *)(lVar8 + 0x70) * dVar22;
        *(double *)(lVar8 + 0x90) = dVar38 + *(double *)(lVar8 + 0x78) * dVar22;
        *(byte *)((longlong)param_1 + 0x34a) =
             *(byte *)((longlong)param_1 + 0x34a) & 0xfd | (1.15 <= fVar21) * '\x02';
      }
      else {
        *(longlong **)(lVar8 + 0x90) = DAT_14c8464f0;
        dVar22 = DAT_14c8464e8;
        *(double *)(lVar8 + 0x80) = DAT_14c8464e0;
        *(double *)(lVar8 + 0x88) = dVar22;
        *(undefined8 *)(lVar8 + 0x118) = *(undefined8 *)(lVar8 + 0x110);
        *(byte *)((longlong)param_1 + 0x34a) = *(byte *)((longlong)param_1 + 0x34a) | 2;
      }
      *(undefined8 *)(lVar8 + 0xd0) = *(undefined8 *)(lVar8 + 0xf0);
      *(undefined8 *)(lVar8 + 0xd8) = *(undefined8 *)(lVar8 + 0xf8);
      *(undefined8 *)(lVar8 + 0xc0) = *(undefined8 *)(lVar8 + 0xe0);
      *(undefined8 *)(lVar8 + 200) = *(undefined8 *)(lVar8 + 0xe8);
    }
LAB_14135efed:
    lVar8 = param_1[0x102];
    if (lVar8 == 0) goto LAB_14135eff9;
  }
  plVar12 = *(longlong **)(param_1[0x3e] + 0x428);
  if (plVar12 == (longlong *)0x0 || lVar8 == 0) goto LAB_14135f044;
  uVar16 = 0;
  plVar13 = plVar12;
  cVar7 = (**(code **)(*plVar12 + 0x480))();
  if (cVar7 != '\0') goto LAB_14135f044;
  if (*(char *)((longlong)param_1 + 0x293) == '\x02') {
    lVar10 = plVar12[0x24];
    if (lVar10 == 0) {
      dVar22 = 1.0;
      dVar35 = 1.0;
      dVar36 = 1.0;
    }
    else {
      dVar35 = *(double *)(lVar10 + 0x280);
      dVar36 = *(double *)(lVar10 + 0x288);
      dVar22 = *(double *)(lVar10 + 0x290);
    }
    dVar4 = *(double *)(lVar8 + 0x80);
    dVar5 = *(double *)(lVar8 + 0x88);
    lVar10 = param_1[0x22];
    plVar13 = (longlong *)param_1[0x3e];
    dVar6 = *(double *)(lVar10 + 0x240);
    dVar61 = -dVar6;
    dVar63 = -*(double *)(lVar10 + 0x248);
    dVar41 = *(double *)(lVar10 + 0x250) * -1.0;
    dVar47 = *(double *)(lVar10 + 600) * 1.0;
    dVar64 = dVar5 * dVar61 - dVar4 * dVar63;
    dVar66 = *(double *)(lVar8 + 0x90) * dVar63 - dVar5 * dVar41;
    dVar67 = dVar4 * dVar41 - dVar61 * *(double *)(lVar8 + 0x90);
    dVar66 = dVar66 + dVar66;
    dVar67 = dVar67 + dVar67;
    dVar64 = dVar64 + dVar64;
    dVar38 = *(double *)(lVar8 + 0x90);
    dVar40 = (double)plVar13[0xa2];
    dVar46 = (double)plVar13[0xa1];
    dVar23 = (double)plVar13[0xa0];
    (**(code **)(*plVar13 + 2000))(plVar13,&local_138);
    dVar56 = *(double *)(lVar8 + 0xd8);
    dVar24 = *(double *)(lVar8 + 0xd8);
    dVar57 = *(double *)(lVar8 + 200);
    dVar60 = *(double *)(lVar8 + 200);
    dVar3 = *(double *)(lVar8 + 0xc0);
    dVar48 = *(double *)(lVar8 + 0xc0);
    dVar1 = *(double *)(lVar8 + 0xd0);
    dVar2 = *(double *)(lVar8 + 0xd0);
    local_f8 = (code *)(dStack_130 * dVar1 * -1.0 +
                       local_128 * dVar57 + dVar3 * dStack_120 * 1.0 + dVar56 * local_138);
    dStack_f0 = local_138 * dVar2 * 1.0 +
                dStack_120 * dVar60 + dVar48 * local_128 * -1.0 + dVar24 * dStack_130;
    local_e8 = dStack_120 * dVar1 * 1.0 +
               ((dVar3 * dStack_130 * 1.0 + dVar56 * local_128) - dVar57 * local_138);
    dStack_e0 = local_128 * dVar2 * -1.0 +
                ((dVar48 * local_138 * -1.0 + dVar24 * dStack_120) - dVar60 * dStack_130);
    bVar19 = 1;
    if ((*(byte *)((longlong)param_1 + 0x5b4) & 0x20) == 0) {
      bVar19 = *(byte *)((longlong)param_1 + 0x34a) >> 2 & 1;
    }
    pdVar9 = &local_150;
    local_1b0 = CONCAT31(local_1b0._1_3_,bVar19);
    local_150 = ((dVar64 * dVar63 - dVar67 * dVar41) + dVar47 * dVar66 + dVar4) /
                (double)(~-(ulonglong)(ABS(dVar35) <= 1e-08) & (ulonglong)dVar35 |
                        -(ulonglong)(ABS(dVar35) <= 1e-08) & 0x3ff0000000000000) + dVar23;
    local_148 = (dVar6 * dVar64 + dVar41 * dVar66 + dVar47 * dVar67 + dVar5) /
                (double)(~-(ulonglong)(ABS(dVar36) <= 1e-08) & (ulonglong)dVar36 |
                        -(ulonglong)(ABS(dVar36) <= 1e-08) & 0x3ff0000000000000) + dVar46;
    local_140 = (dVar47 * dVar64 + dVar38 + (dVar67 * dVar61 - dVar66 * dVar63)) /
                (double)(~-(ulonglong)(ABS(dVar22) <= 1e-08) & (ulonglong)dVar22 |
                        -(ulonglong)(ABS(dVar22) <= 1e-08) & 0x3ff0000000000000) + dVar40;
  }
  else {
    if (*(char *)((longlong)param_1 + 0x293) != '\x01') goto LAB_14135f044;
    lVar10 = plVar12[0x24];
    if (lVar10 == 0) {
      dVar22 = 1.0;
      dVar35 = 1.0;
      dVar36 = 1.0;
    }
    else {
      dVar35 = *(double *)(lVar10 + 0x280);
      dVar36 = *(double *)(lVar10 + 0x288);
      dVar22 = *(double *)(lVar10 + 0x290);
    }
    dVar38 = *(double *)(lVar8 + 0x80);
    dVar40 = *(double *)(lVar8 + 0x88);
    dVar46 = *(double *)(lVar8 + 0x90);
    dVar23 = *(double *)(lVar8 + 0xd0);
    dVar24 = *(double *)(lVar8 + 200);
    dVar56 = *(double *)(lVar8 + 0xc0);
    dVar48 = dVar40 * dVar23 - dVar24 * dVar46;
    dVar48 = dVar48 + dVar48;
    dVar57 = *(double *)(lVar8 + 0xd8);
    dVar60 = dVar38 * dVar24 - dVar56 * dVar40;
    dVar60 = dVar60 + dVar60;
    dVar3 = dVar46 * dVar56 - dVar23 * dVar38;
    dVar3 = dVar3 + dVar3;
    lVar10 = param_1[0x3e];
    dVar46 = ((dVar24 * dVar48 - dVar56 * dVar3) + dVar57 * dVar60 + dVar46) /
             (double)(~-(ulonglong)(ABS(dVar22) <= 1e-08) & (ulonglong)dVar22 |
                     -(ulonglong)(ABS(dVar22) <= 1e-08) & 0x3ff0000000000000) +
             *(double *)(lVar10 + 0x510);
    dVar22 = ((dVar56 * dVar60 - dVar48 * dVar23) + dVar57 * dVar3 + dVar40) /
             (double)(~-(ulonglong)(ABS(dVar36) <= 1e-08) & (ulonglong)dVar36 |
                     -(ulonglong)(ABS(dVar36) <= 1e-08) & 0x3ff0000000000000) +
             *(double *)(lVar10 + 0x508);
    dVar35 = ((dVar3 * dVar23 - dVar60 * dVar24) + dVar48 * dVar57 + dVar38) /
             (double)(~-(ulonglong)(ABS(dVar35) <= 1e-08) & (ulonglong)dVar35 |
                     -(ulonglong)(ABS(dVar35) <= 1e-08) & 0x3ff0000000000000) +
             *(double *)(lVar10 + 0x500);
    lVar10 = param_1[0x22];
    auVar65._8_8_ =
         -(ulonglong)
          (9.999999974752427e-07 < ABS(*(double *)(lVar10 + 0x248) - *(double *)(lVar8 + 200)));
    auVar65._0_8_ =
         -(ulonglong)
          (9.999999974752427e-07 < ABS(*(double *)(lVar10 + 0x240) - *(double *)(lVar8 + 0xc0)));
    uVar11 = movmskpd((int)plVar13,auVar65);
    auVar53._8_8_ =
         -(ulonglong)
          (9.999999974752427e-07 < ABS(*(double *)(lVar10 + 600) - *(double *)(lVar8 + 0xd8)));
    auVar53._0_8_ =
         -(ulonglong)
          (9.999999974752427e-07 < ABS(*(double *)(lVar10 + 0x250) - *(double *)(lVar8 + 0xd0)));
    iVar17 = movmskpd(uVar16,auVar53);
    uVar18 = iVar17 << 2 | uVar11;
    if (uVar18 != 0) {
      auVar25._8_8_ =
           -(ulonglong)
            (9.999999974752427e-07 < ABS(*(double *)(lVar10 + 0x248) + *(double *)(lVar8 + 200)));
      auVar25._0_8_ =
           -(ulonglong)
            (9.999999974752427e-07 < ABS(*(double *)(lVar10 + 0x240) + *(double *)(lVar8 + 0xc0)));
      iVar17 = movmskpd(uVar11,auVar25);
      auVar42._8_8_ =
           -(ulonglong)
            (9.999999974752427e-07 < ABS(*(double *)(lVar10 + 600) + *(double *)(lVar8 + 0xd8)));
      auVar42._0_8_ =
           -(ulonglong)
            (9.999999974752427e-07 < ABS(*(double *)(lVar10 + 0x250) + *(double *)(lVar8 + 0xd0)));
      uVar11 = movmskpd(uVar18,auVar42);
      if ((uVar11 & 0x3fffffff) != 0 || iVar17 != 0) {
        local_108 = plVar12[0x35];
        local_118 = plVar12[0x33];
        lStack_110 = plVar12[0x34];
        dVar36 = *(double *)(lVar10 + 0x1b0);
        dVar38 = *(double *)(lVar10 + 0x1b8);
        dVar40 = *(double *)(lVar10 + 0x1c0);
        uVar20 = plVar12[7];
        if (uVar20 < 0xffffffff00000000) {
          plVar13 = DAT_14c9980d0;
          if (DAT_14c9980d8 == 0) {
            plVar13 = (longlong *)0x0;
          }
          (**(code **)(*plVar13 + 0x58))(plVar13,plVar12,uVar20,5);
        }
        else {
          uVar11 = (uint)uVar20;
          if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c998088)) {
            puVar14 = &DAT_14c998070;
            if (DAT_14c998080 != (undefined *)0x0) {
              puVar14 = DAT_14c998080;
            }
            if ((*(uint *)(puVar14 + ((uint)(uVar20 >> 3) & 0xffffffc)) >> (uVar11 & 0x1f) & 1) != 0
               ) {
              lVar10 = DAT_14c998060 + (ulonglong)(uVar11 & 0x7fffffff) * 0x68;
              puVar15 = *(uint **)(lVar10 + 0x18);
              if (*(uint **)(lVar10 + 0x18) == (uint *)0x0) {
                puVar15 = (uint *)(lVar10 + 8);
              }
              *puVar15 = *puVar15 | 0x20;
              *(byte *)(lVar10 + 0x60) = *(byte *)(lVar10 + 0x60) | 1;
            }
          }
        }
        plVar12[0x33] = (longlong)dVar35;
        plVar12[0x34] = (longlong)dVar22;
        plVar12[0x35] = (longlong)dVar46;
        local_1b8 = local_1b8 & 0xffffffffffffff00;
        FUN_145927ad6(param_1[0x22],lVar8 + 0xc0,0,0);
        lVar8 = param_1[0x22];
        if (((*(double *)(lVar8 + 0x1b0) != dVar36) ||
            (NAN(*(double *)(lVar8 + 0x1b0)) || NAN(dVar36))) ||
           ((*(double *)(lVar8 + 0x1b8) != dVar38 ||
            (NAN(*(double *)(lVar8 + 0x1b8)) || NAN(dVar38))))) goto LAB_14135f044;
        dVar36 = *(double *)(lVar8 + 0x1c0);
        if ((dVar36 != dVar40) || (NAN(dVar36) || NAN(dVar40))) goto LAB_14135f044;
        uVar20 = plVar12[7];
        if (uVar20 < 0xffffffff00000000) {
          plVar13 = DAT_14c9980d0;
          if (DAT_14c9980d8 == 0) {
            plVar13 = (longlong *)0x0;
          }
          (**(code **)(*plVar13 + 0x58))(dVar36,plVar12,uVar20,5);
        }
        else {
          uVar11 = (uint)uVar20;
          if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c998088)) {
            puVar14 = &DAT_14c998070;
            if (DAT_14c998080 != (undefined *)0x0) {
              puVar14 = DAT_14c998080;
            }
            if ((*(uint *)(puVar14 + ((uint)(uVar20 >> 3) & 0xffffffc)) >> (uVar11 & 0x1f) & 1) != 0
               ) {
              lVar8 = DAT_14c998060 + (ulonglong)(uVar11 & 0x7fffffff) * 0x68;
              puVar15 = *(uint **)(lVar8 + 0x18);
              if (*(uint **)(lVar8 + 0x18) == (uint *)0x0) {
                puVar15 = (uint *)(lVar8 + 8);
              }
              *puVar15 = *puVar15 | 0x20;
              *(byte *)(lVar8 + 0x60) = *(byte *)(lVar8 + 0x60) | 1;
            }
          }
        }
        plVar12[0x35] = local_108;
        plVar12[0x33] = local_118;
        plVar12[0x34] = lStack_110;
      }
    }
    bVar19 = 1;
    if ((*(byte *)((longlong)param_1 + 0x5b4) & 0x20) == 0) {
      bVar19 = *(byte *)((longlong)param_1 + 0x34a) >> 2 & 1;
    }
    auVar49 = *(undefined1 (*) [16])(plVar12 + 0x36);
    dVar38 = auVar49._0_8_;
    dVar40 = auVar49._8_8_;
    dVar36 = (double)plVar12[0x38];
    pdVar9 = (double *)plVar12[0x46];
    if (pdVar9 == (double *)0x0) {
      pdVar9 = (double *)FUN_14001cc68(0x40,0x10);
      dVar23 = DAT_14c8463d8;
      *pdVar9 = DAT_14c8463d0;
      pdVar9[1] = dVar23;
      dVar23 = DAT_14c8463e8;
      pdVar9[2] = DAT_14c8463e0;
      pdVar9[3] = dVar23;
      dVar23 = DAT_14c846500;
      pdVar9[4] = DAT_14c8464f8;
      pdVar9[5] = dVar23;
      pdVar9[6] = DAT_14c846508;
      plVar12[0x46] = (longlong)pdVar9;
    }
    auVar33 = _DAT_1499387d0;
    if ((((pdVar9[4] != dVar38) || (NAN(pdVar9[4]) || NAN(dVar38))) || (pdVar9[5] != dVar40)) ||
       (NAN(pdVar9[5]) || NAN(dVar40))) {
LAB_14135f392:
      auVar43._8_8_ = 0;
      auVar43._0_8_ = dVar36;
      dVar23 = (double)DAT_1499387d0;
      dVar24 = DAT_1499387d0._8_8_;
      auVar49 = divpd(auVar49,_DAT_1499387d0);
      auVar34 = divpd(auVar43,_DAT_1499387d0);
      auVar49 = roundpd(auVar49,auVar49,3);
      auVar34 = roundpd(auVar34,auVar34,3);
      auVar58._0_8_ = dVar38 - auVar49._0_8_ * dVar23;
      auVar58._8_8_ = dVar40 - auVar49._8_8_ * dVar24;
      auVar44._0_8_ = dVar36 - auVar34._0_8_ * dVar23;
      auVar44._8_8_ = 0.0 - auVar34._8_8_ * dVar24;
      auVar54._0_8_ = auVar58._0_8_ + dVar23;
      auVar54._8_8_ = auVar58._8_8_ + dVar24;
      auVar39._0_8_ = auVar44._0_8_ + dVar23;
      auVar39._8_8_ = auVar44._8_8_ + dVar24;
      auVar26._8_8_ = -(ulonglong)(0.0 <= auVar58._8_8_);
      auVar26._0_8_ = -(ulonglong)(0.0 <= auVar58._0_8_);
      auVar34 = blendvpd(auVar54,auVar58,auVar26);
      auVar27._8_8_ = -(ulonglong)(0.0 <= auVar44._8_8_);
      auVar27._0_8_ = -(ulonglong)(0.0 <= auVar44._0_8_);
      auVar49 = blendvpd(auVar39,auVar44,auVar27);
      auVar45._0_8_ = auVar34._0_8_ + -360.0;
      auVar45._8_8_ = auVar34._8_8_ + -360.0;
      auVar50._0_8_ = auVar49._0_8_ + -360.0;
      auVar50._8_8_ = auVar49._8_8_ + 0.0;
      auVar28._8_8_ = -(ulonglong)(180.0 < auVar34._8_8_);
      auVar28._0_8_ = -(ulonglong)(180.0 < auVar34._0_8_);
      auVar34 = blendvpd(auVar34,auVar45,auVar28);
      auVar29._8_8_ = -(ulonglong)(180.0 < auVar49._8_8_);
      auVar29._0_8_ = -(ulonglong)(180.0 < auVar49._0_8_);
      auVar49 = blendvpd(auVar49,auVar50,auVar29);
      *(undefined1 (*) [16])(pdVar9 + 4) = auVar34;
      dVar36 = auVar49._0_8_;
      pdVar9[6] = dVar36;
      auVar59._8_8_ = 0;
      auVar59._0_8_ = dVar36;
      auVar49 = divpd(auVar34,auVar33);
      auVar33 = divpd(auVar59,auVar33);
      auVar49 = roundpd(auVar49,auVar49,3);
      auVar33 = roundpd(auVar33,auVar33,3);
      dVar40 = (auVar34._0_8_ - auVar49._0_8_ * dVar23) * 0.008726646259971648;
      dVar56 = (auVar34._8_8_ - auVar49._8_8_ * dVar24) * 0.008726646259971648;
      dVar57 = (dVar36 - auVar33._0_8_ * dVar23) * 0.008726646259971648;
      dVar60 = (0.0 - auVar33._8_8_ * dVar24) * 0.008726646259971648;
      local_168 = sin(dVar40);
      dVar36 = sin(dVar56);
      dVar38 = sin(dVar57);
      sin(dVar60);
      dVar40 = cos(dVar40);
      dVar23 = cos(dVar56);
      dVar24 = cos(dVar57);
      cos(dVar60);
      *pdVar9 = local_168 * dVar36 * dVar24 - dVar40 * dVar23 * dVar38;
      pdVar9[1] = -(local_168 * dVar23 * dVar24) - dVar40 * dVar36 * dVar38;
      pdVar9[2] = -(dVar23 * local_168 * dVar38) + dVar36 * dVar40 * dVar24;
      pdVar9[3] = dVar36 * local_168 * dVar38 + dVar23 * dVar40 * dVar24;
    }
    else if ((pdVar9[6] != dVar36) || (NAN(pdVar9[6]) || NAN(dVar36))) goto LAB_14135f392;
    local_f8 = (code *)*pdVar9;
    dStack_f0 = pdVar9[1];
    local_e8 = pdVar9[2];
    dStack_e0 = pdVar9[3];
    pdVar9 = &local_138;
    local_1b0 = CONCAT31(local_1b0._1_3_,bVar19);
    local_138 = dVar35;
    dStack_130 = dVar22;
    local_128 = dVar46;
  }
  local_1b8 = 0;
  FUN_144927ad4(plVar12,pdVar9,&local_f8,0);
LAB_14135f044:
  if ((local_d0 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14135fea2 FUN_14135fea2 body=2032 status=ok
// SIG undefined FUN_14135fea2(void)

ulonglong FUN_14135fea2(undefined8 *param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 **ppuVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_108 [39];
  char local_e1;
  longlong *local_e0;
  undefined1 local_d8 [16];
  longlong local_c8;
  int local_c0;
  longlong local_b8;
  int local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  longlong local_88;
  ulonglong uStack_80;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  ppuVar11 = &local_98;
  local_98 = (undefined8 *)0x0;
  uStack_90 = 1;
  local_e1 = param_3;
  FUN_145928098(ppuVar11,0);
  *local_98 = *param_1;
  lVar10 = param_1[1];
  local_98[1] = lVar10;
  if (lVar10 != 0) {
    LOCK();
    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
    UNLOCK();
  }
  if (0 < (int)uStack_90) {
    local_e0 = param_2 + 2;
    do {
      bVar17 = true;
      FUN_1413606e0(&local_98,&local_a8,1);
      uVar15 = uStack_90;
      if (*(char *)((longlong)local_a8 + 0x21) == '\x01') {
        bVar17 = false;
        iVar14 = 0;
        if ((int)local_a8[1] < 2) {
          if (0 < (longlong)(int)param_2[3]) {
            iVar14 = *(int *)(*local_e0 + -4 + (longlong)(int)param_2[3] * 4);
          }
          bVar17 = iVar14 != 6;
        }
      }
      plVar9 = (longlong *)local_a8[2];
      switch((int)plVar9[1]) {
      case 1:
        if (bVar17) {
          FUN_14683e778(param_2,0);
        }
        else {
          FUN_14683e804(param_2,local_a8,0);
        }
        break;
      case 2:
        if (bVar17) {
          FUN_14047e026(plVar9,&local_78);
          FUN_145927f78(param_2,&local_78);
LAB_14135ffa0:
          if (local_78 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          FUN_14047e026(plVar9,local_d8);
          FUN_1459285e0(param_2,local_a8,local_d8);
        }
        break;
      case 3:
        cVar4 = (**(code **)(*plVar9 + 0x88))();
        if (bVar17) {
          if (cVar4 != '\0') {
            FUN_14047e026(local_a8[2],&local_78);
            local_b8 = local_78;
            local_b0 = (int)uStack_70 + -1;
            if ((int)uStack_70 == 0) {
              local_b0 = 0;
            }
            FUN_14683e274(param_2);
            lVar10 = local_78;
            goto LAB_1413605e8;
          }
          uVar6 = FUN_141360850(local_a8[2]);
          FUN_14683e2fa(param_2,uVar6);
        }
        else if (cVar4 == '\0') {
          uVar6 = FUN_141360850(local_a8[2]);
          FUN_14592816a(param_2,local_a8,uVar6);
        }
        else {
          FUN_14047e026(local_a8[2],&local_c8);
          lVar10 = local_c8;
          ppuVar11 = (undefined8 **)(ulonglong)(local_c0 - 1);
          if (local_c0 == 0) {
            ppuVar11 = (undefined8 **)0x0;
          }
          iVar14 = (int)local_a8[1] + -1;
          if ((int)local_a8[1] == 0) {
            iVar14 = 0;
          }
          local_78 = *local_a8;
          uStack_70 = CONCAT44(uStack_70._4_4_,iVar14);
          FUN_14683e6dc(param_2);
          local_88 = lVar10;
          uStack_80 = CONCAT44(uStack_80._4_4_,(int)ppuVar11);
          FUN_145d3640c(param_2[1]);
          *(undefined4 *)(param_2 + 4) = 7;
          lVar10 = local_c8;
LAB_1413605e8:
          if (lVar10 != 0) {
            FUN_1400020a8();
          }
        }
        break;
      case 4:
        uVar6 = FUN_140b87404();
        if (bVar17) {
          FUN_14683e380(param_2,uVar6);
        }
        else {
          FUN_14683e424(param_2,local_a8,uVar6);
        }
        break;
      case 5:
        if ((char)local_a8[4] != '\x01') {
          *(undefined1 *)(local_a8 + 4) = 1;
          lVar10 = (longlong)(int)uStack_90;
          uVar5 = (int)uStack_90 + 1;
          uStack_90 = CONCAT44(uStack_90._4_4_,uVar5);
          if (uStack_90._4_4_ < uVar5) {
            FUN_145928098(&local_98,uVar15 & 0xffffffff);
          }
          local_98[lVar10 * 2] = local_a8;
          local_98[lVar10 * 2 + 1] = local_a0;
          if (local_a0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
            UNLOCK();
          }
          if (bVar17) {
            FUN_14683e51e(param_2);
          }
          else {
            FUN_1459286da(param_2,local_a8);
          }
          plVar9 = (longlong *)FUN_140482996(local_a8[2]);
          local_78 = 0;
          iVar14 = (int)plVar9[1];
          ppuVar11 = (undefined8 **)*plVar9;
          uStack_70 = CONCAT44(uStack_70._4_4_,iVar14);
          if (iVar14 == 0) {
            uStack_70 = 0;
            uVar15 = 0;
          }
          else {
            FUN_14047d15e(&local_78,iVar14,0);
            FUN_14047cdb6(local_78,ppuVar11,iVar14);
            uVar15 = (ulonglong)(int)uStack_70;
            if (0 < (longlong)uVar15) {
              uVar13 = uVar15 + 1;
              lVar10 = uVar15 << 4;
              do {
                lVar10 = lVar10 + -0x10;
                plVar9 = (longlong *)FUN_145927ea5(local_78 + lVar10);
                uVar15 = uStack_90;
                lVar12 = (longlong)(int)uStack_90;
                uVar5 = (int)uStack_90 + 1;
                uStack_90 = CONCAT44(uStack_90._4_4_,uVar5);
                if (uStack_90._4_4_ < uVar5) {
                  FUN_145928098(&local_98,uVar15 & 0xffffffff);
                }
                ppuVar11 = (undefined8 **)(lVar12 * 0x10);
                local_98[lVar12 * 2] = plVar9 + 2;
                (local_98 + 1)[lVar12 * 2] = plVar9;
                if (plVar9 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
                  UNLOCK();
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
                uVar13 = uVar13 - 1;
              } while (1 < uVar13);
              uVar15 = uStack_70 & 0xffffffff;
            }
          }
          FUN_14047c710(local_78,uVar15 & 0xffffffff);
          goto LAB_14135ffa0;
        }
        FUN_1459282dc(param_2);
        break;
      case 6:
        if ((char)local_a8[4] != '\x01') {
          *(undefined1 *)(local_a8 + 4) = 1;
          lVar10 = (longlong)(int)uStack_90;
          uVar5 = (int)uStack_90 + 1;
          uStack_90 = CONCAT44(uStack_90._4_4_,uVar5);
          if (uStack_90._4_4_ < uVar5) {
            FUN_145928098(&local_98,uVar15 & 0xffffffff);
          }
          ppuVar11 = (undefined8 **)(lVar10 * 0x10);
          local_98[lVar10 * 2] = local_a8;
          (local_98 + 1)[lVar10 * 2] = local_a0;
          if (local_a0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
            UNLOCK();
          }
          if (bVar17) {
            FUN_145928344(param_2);
          }
          else {
            FUN_14683e5d6(param_2,local_a8);
          }
          local_78 = 0;
          uStack_70 = 0;
          local_88 = 0;
          uStack_80 = 0;
          puVar7 = (undefined8 *)(*(code *)**(undefined8 **)local_a8[2])();
          uVar3 = *puVar7;
          plVar9 = (longlong *)puVar7[1];
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
          }
          FUN_1459287d4(uVar3,&local_78);
          FUN_1459283f8(uVar3,&local_88);
          lVar10 = (longlong)(int)uStack_80;
          if (0 < lVar10) {
            uVar15 = lVar10 + 1;
            lVar10 = lVar10 << 4;
            do {
              lVar10 = lVar10 + -0x10;
              lVar12 = local_88 + lVar10;
              lVar16 = local_78 + lVar10;
              plVar8 = (longlong *)FUN_14001cc68(0x38,0x10);
              plVar8[1] = (longlong)&DAT_100000001;
              *plVar8 = (longlong)&PTR_FUN_149e442f0;
              ppuVar11 = (undefined8 **)(plVar8 + 2);
              FUN_145927f00(ppuVar11,lVar16,lVar12);
              uVar13 = uStack_90;
              lVar12 = (longlong)(int)uStack_90;
              uVar5 = (int)uStack_90 + 1;
              uStack_90 = CONCAT44(uStack_90._4_4_,uVar5);
              if (uStack_90._4_4_ < uVar5) {
                FUN_145928098(&local_98,uVar13 & 0xffffffff);
              }
              local_98[lVar12 * 2] = ppuVar11;
              local_98[lVar12 * 2 + 1] = plVar8;
              if (plVar8 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
                UNLOCK();
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
              uVar15 = uVar15 - 1;
            } while (1 < uVar15);
          }
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
          FUN_14047c710(local_88,uStack_80 & 0xffffffff);
          if (local_88 != 0) {
            FUN_1400020a8();
          }
          FUN_1447a1747(local_78,uStack_70 & 0xffffffff);
          goto LAB_14135ffa0;
        }
        *(int *)((longlong)param_2 + 0x24) = *(int *)((longlong)param_2 + 0x24) + -1;
        local_78 = CONCAT62(local_78._2_6_,0x7d);
        (**(code **)(*(longlong *)param_2[1] + 0x170))((longlong *)param_2[1],&local_78,2);
        *(int *)(param_2 + 3) = (int)param_2[3] + -1;
        FUN_14047c610(local_e0);
        *(undefined4 *)(param_2 + 4) = 3;
        break;
      default:
        FUN_140033559("Runtime\\Json\\Public\\Serialization/JsonSerializer.h",0x224,
                      L"Could not print Json Value, unrecognized type.");
      }
      plVar9 = local_a0;
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_a0 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
    } while (0 < (int)uStack_90);
  }
  if (local_e1 == '\0') {
    uVar15 = CONCAT71((int7)((ulonglong)ppuVar11 >> 8),1);
    iVar14 = (int)uStack_90;
  }
  else {
    uVar5 = (**(code **)(*param_2 + 8))(param_2);
    uVar15 = (ulonglong)uVar5;
    iVar14 = (int)uStack_90;
  }
  FUN_14592811d(local_98,iVar14);
  if (local_98 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar15 & 0xffffffff;
}



// FUNCTION 141360694 FUN_141360694 body=76 status=ok
// SIG undefined FUN_141360694(void)

void FUN_141360694(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
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
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1413606e0 FUN_1413606e0 body=93 status=ok
// SIG undefined FUN_1413606e0(void)

undefined8 * FUN_1413606e0(longlong *param_1,undefined8 *param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = (int)param_1[1];
  *param_2 = *(undefined8 *)(lVar1 + -0x10 + (longlong)iVar2 * 0x10);
  lVar1 = *(longlong *)(lVar1 + -8 + (longlong)iVar2 * 0x10);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
    iVar2 = (int)param_1[1];
  }
  FUN_1413607d6(param_1,iVar2 + -1);
  if (param_3 == '\x01') {
    FUN_14136073e(param_1);
  }
  return param_2;
}



// FUNCTION 14136073e FUN_14136073e body=64 status=ok
// SIG undefined FUN_14136073e(void)

void FUN_14136073e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14136077e(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 14136077e FUN_14136077e body=87 status=ok
// SIG undefined FUN_14136077e(void)

ulonglong FUN_14136077e(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if ((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) == 0) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if ((param_2 == 0) || (0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1413607d6 FUN_1413607d6 body=122 status=ok
// SIG undefined FUN_1413607d6(void)

void FUN_1413607d6(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
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
  iVar5 = (int)param_1[1];
  if (~param_2 + iVar5 != 0) {
    _Dst = (void *)(lVar3 + (longlong)(int)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar5) << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 141360850 FUN_141360850 body=111 status=ok
// SIG undefined FUN_141360850(void)

void FUN_141360850(longlong *param_1)

{
  char cVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  cVar1 = (**(code **)(*param_1 + 0x50))();
  if (cVar1 == '\0') {
    FUN_140056680(local_28,L"Number");
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18);
}



// FUNCTION 1413608c0 FUN_1413608c0 body=690 status=ok
// SIG undefined FUN_1413608c0(void)

void FUN_1413608c0(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined2 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_108 [40];
  undefined1 *local_e0;
  int local_d8;
  undefined8 local_d0 [2];
  undefined8 local_c0 [2];
  undefined8 local_b0 [2];
  undefined8 local_a0 [2];
  undefined8 local_90 [2];
  undefined8 local_80 [2];
  undefined1 *local_70;
  undefined1 *local_68;
  ulonglong *local_60;
  undefined1 local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar2 = *(uint *)(param_2 + 1);
  if (uVar2 != 0) {
    lVar5 = *param_2;
    do {
      uVar9 = 0;
      if (0 < (int)uVar2) {
        uVar9 = uVar2 - 1;
        if (0x7fe < uVar9) {
          uVar9 = 0x7ff;
        }
        uVar9 = uVar9 + 1;
        uVar4 = 0;
        do {
          uVar1 = *(ushort *)(lVar5 + uVar4 * 2);
          if (((((ulonglong)uVar1 < 0x23) && ((0x400003700U >> ((ulonglong)uVar1 & 0x3f) & 1) != 0))
              || (uVar1 == 0x5c)) || (uVar1 < 0x20)) {
            uVar9 = (uint)uVar4;
            break;
          }
          uVar4 = uVar4 + 1;
        } while (uVar9 != uVar4);
      }
      uVar7 = uVar2;
      if ((int)uVar9 < (int)uVar2) {
        uVar7 = uVar9;
      }
      if (0 < (int)uVar7) {
        if (lVar5 == 0) {
          uVar7 = 0;
        }
        else if (*(short *)(lVar5 + (ulonglong)(uVar7 - 1) * 2) == 0) {
          uVar7 = uVar7 - 1;
        }
        (**(code **)(**(longlong **)(param_1 + 8) + 0x170))
                  (*(longlong **)(param_1 + 8),lVar5,(ulonglong)uVar7 * 2);
        uVar2 = *(uint *)(param_2 + 1);
        lVar5 = *param_2;
      }
      uVar7 = uVar2 - uVar9;
      if ((int)uVar2 <= (int)(uVar2 - uVar9)) {
        uVar7 = uVar2;
      }
      lVar8 = 0;
      uVar4 = 0;
      if (0 < (int)uVar7) {
        uVar4 = (ulonglong)uVar7;
      }
      uVar9 = (uint)uVar4;
      lVar5 = (lVar5 + (longlong)(int)uVar2 * 2) - (ulonglong)(uVar9 * 2);
      *param_2 = lVar5;
      *(uint *)(param_2 + 1) = uVar9;
      if (0 < (int)uVar7) {
        lVar8 = 0;
        do {
          uVar9 = (uint)uVar4;
          lVar5 = *param_2;
          uVar1 = *(ushort *)(lVar5 + lVar8 * 2);
          if (uVar1 == 0x22) {
            (**(code **)(**(longlong **)(param_1 + 8) + 0x170))
                      (*(longlong **)(param_1 + 8),&DAT_149e0200a,4);
          }
          else {
            switch(uVar1) {
            case 8:
              puVar3 = (undefined2 *)&DAT_149e38588;
              puVar6 = local_b0;
              break;
            case 9:
              puVar3 = (undefined2 *)&DAT_149e01ffe;
              puVar6 = local_a0;
              break;
            case 10:
              puVar3 = (undefined2 *)&DAT_149e01ff8;
              puVar6 = local_90;
              break;
            case 0xb:
switchD_141360a23_caseD_b:
              if (uVar1 < 0x20) {
                local_70 = local_50;
                local_60 = &local_48;
                local_58 = 0;
                local_68 = local_70;
                FUN_14089c9ba(&local_70,"\\u%04x");
                local_d8 = (int)local_68 - (int)local_70;
                local_e0 = local_70;
                FUN_14683c90a(*(undefined8 *)(param_1 + 8));
                FUN_144aa0d5a(&local_70);
                goto LAB_1413609fa;
              }
              goto LAB_141360a2c;
            case 0xc:
              puVar3 = (undefined2 *)&DAT_149e3858e;
              puVar6 = local_c0;
              break;
            case 0xd:
              puVar3 = (undefined2 *)&DAT_149e02004;
              puVar6 = local_d0;
              break;
            default:
              if (uVar1 != 0x5c) goto switchD_141360a23_caseD_b;
              puVar3 = &DAT_149e01ff2;
              puVar6 = local_80;
            }
            *puVar6 = puVar3;
            *(undefined4 *)(puVar6 + 1) = 2;
            FUN_145d3640c(*(undefined8 *)(param_1 + 8));
          }
LAB_1413609fa:
          lVar8 = lVar8 + 1;
          uVar9 = *(uint *)(param_2 + 1);
          uVar4 = (ulonglong)(int)uVar9;
        } while (lVar8 < (longlong)uVar4);
        lVar5 = *param_2;
      }
LAB_141360a2c:
      uVar7 = uVar9 - (int)lVar8;
      if ((int)uVar9 <= (int)uVar7) {
        uVar7 = uVar9;
      }
      uVar2 = 0;
      if (0 < (int)uVar7) {
        uVar2 = uVar7;
      }
      lVar5 = (lVar5 + (longlong)(int)uVar9 * 2) - (ulonglong)(uVar2 * 2);
      *param_2 = lVar5;
      *(uint *)(param_2 + 1) = uVar2;
    } while (0 < (int)uVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141360b74 FUN_141360b74 body=94 status=ok
// SIG undefined FUN_141360b74(void)

undefined4 FUN_141360b74(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_1446f8bcc(*(undefined8 *)(param_1 + 0x38),*(int *)(param_1 + 0x30) >> 1);
  if (0 < *(int *)(param_1 + 0x30)) {
    iVar2 = 0;
    do {
      FUN_140002184(*(undefined8 *)(param_1 + 0x38),
                    *(undefined2 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar2));
      iVar2 = iVar2 + 2;
    } while (iVar2 < *(int *)(param_1 + 0x30));
  }
  iVar2 = *(int *)(param_1 + 0x20);
  if (((iVar2 == 3) || (iVar2 == 5)) || (iVar2 == 0)) {
    uVar1 = CONCAT31((int3)((uint)iVar2 >> 8),*(int *)(param_1 + 0x18) == 0);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 141360bd2 FUN_141360bd2 body=1011 status=ok
// SIG undefined FUN_141360bd2(void)

void FUN_141360bd2(undefined8 param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  void *_Src;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined ***pppuVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined **ppuVar18;
  longlong *plVar19;
  longlong *plVar20;
  undefined1 auStack_e8 [40];
  undefined **local_c0;
  longlong *local_b8;
  ulonglong uStack_b0;
  undefined1 *local_a8;
  longlong local_a0;
  undefined ***local_98;
  undefined **local_88;
  code *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_140a9b590(param_1,&local_a8,1);
  if (local_a0 == 0) {
    uVar11 = FUN_14037df6e();
    local_a0 = FUN_14477b664(uVar11);
  }
  pppuVar14 = local_98;
  if (local_98 == (undefined ***)0x0) {
    if ((((local_a8 == (undefined1 *)0x0) || (local_a0 == 0)) ||
        (plVar20 = *(longlong **)(local_a0 + 0xb8), plVar20 == (longlong *)0x0)) ||
       (cVar8 = (**(code **)(*plVar20 + 0x108))(plVar20), cVar8 == '\0')) goto LAB_141360f90;
    uVar11 = (**(code **)(*plVar20 + 0x110))(plVar20);
    pppuVar14 = (undefined ***)FUN_144aff482(uVar11,&local_a8);
    if (pppuVar14 == (undefined ***)0x0) goto LAB_141360f90;
  }
  if ((longlong)*(int *)(pppuVar14 + 0x1e9) != 0) {
    ppuVar18 = pppuVar14[0x1e8];
    local_c0 = ppuVar18 + (longlong)*(int *)(pppuVar14 + 0x1e9) * 0xd;
    do {
      puVar12 = ppuVar18[1];
      if (puVar12 == (undefined *)0x0) {
        uVar11 = FUN_14042c486();
        puVar12 = (undefined *)FUN_14477b664(uVar11);
        ppuVar18[1] = puVar12;
      }
      puVar13 = ppuVar18[2];
      if (puVar13 == (undefined *)0x0) {
        if ((puVar12 != (undefined *)0x0) && (*ppuVar18 != (undefined *)0x0)) {
          plVar20 = *(longlong **)(puVar12 + 0xb8);
          if ((plVar20 == (longlong *)0x0) ||
             (cVar8 = (**(code **)(*plVar20 + 0x108))(plVar20), cVar8 == '\0')) {
LAB_141360f1e:
            ppuVar18[2] = (undefined *)0x0;
          }
          else {
            uVar11 = (**(code **)(*plVar20 + 0x110))(plVar20);
            puVar13 = (undefined *)FUN_144aff482(uVar11,ppuVar18);
            ppuVar18[2] = puVar13;
            if (puVar13 != (undefined *)0x0) {
              puVar12 = ppuVar18[1];
              goto LAB_141360c6d;
            }
          }
        }
      }
      else {
LAB_141360c6d:
        if (puVar12 == (undefined *)0x0) {
          uVar11 = FUN_14042c486(puVar13);
          puVar12 = (undefined *)FUN_14477b664(uVar11);
          ppuVar18[1] = puVar12;
          puVar13 = ppuVar18[2];
          if (puVar13 == (undefined *)0x0) {
            if ((puVar12 != (undefined *)0x0) && (*ppuVar18 != (undefined *)0x0)) {
              plVar20 = *(longlong **)(puVar12 + 0xb8);
              if ((plVar20 == (longlong *)0x0) ||
                 (cVar8 = (**(code **)(*plVar20 + 0x108))(plVar20), cVar8 == '\0'))
              goto LAB_141360f1e;
              uVar11 = (**(code **)(*plVar20 + 0x110))(plVar20);
              puVar13 = (undefined *)FUN_144aff482(uVar11,ppuVar18);
              ppuVar18[2] = puVar13;
              if (puVar13 != (undefined *)0x0) goto LAB_141360c76;
            }
            goto LAB_141360dca;
          }
        }
LAB_141360c76:
        local_98 = (undefined ***)0x0;
        local_88 = &PTR_LAB_14b406f80;
        local_80 = FUN_144347dd6;
        local_a8 = &LAB_140255cce;
        local_b8 = (longlong *)0x0;
        uStack_b0 = 0;
        FUN_140255ee2(puVar13,&local_b8,&local_a8);
        if ((longlong)(int)uStack_b0 == 0) {
          uVar15 = 0;
        }
        else {
          plVar19 = local_b8 + (longlong)(int)uStack_b0 * 2;
          plVar20 = local_b8;
          do {
            plVar4 = (longlong *)*plVar20;
            plVar5 = (longlong *)plVar20[1];
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
              UNLOCK();
            }
            if (plVar4 != (longlong *)0x0) {
              lVar9 = (**(code **)(*plVar4 + 8))(plVar4);
              lVar10 = FUN_141360fc6();
              if (((lVar10 != 0) && (*(int *)(lVar10 + 0x38) <= *(int *)(lVar9 + 0x38))) &&
                 (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
                  == lVar10 + 0x30)) {
                iVar3 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar3 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
                  FUN_1406f071e(param_2,iVar3);
                }
                lVar9 = *param_2;
                lVar16 = (longlong)iVar3 * 0x20;
                uVar6 = *(undefined4 *)((longlong)plVar4 + 0x44);
                lVar10 = plVar4[9];
                uVar7 = *(undefined4 *)((longlong)plVar4 + 0x4c);
                puVar1 = (undefined4 *)(lVar9 + lVar16);
                *puVar1 = (int)plVar4[8];
                puVar1[1] = uVar6;
                puVar1[2] = (int)lVar10;
                puVar1[3] = uVar7;
                *(undefined8 *)(lVar9 + 0x10 + lVar16) = 0;
                iVar3 = (int)plVar4[0xb];
                _Src = (void *)plVar4[10];
                *(int *)(lVar9 + 0x18 + lVar16) = iVar3;
                if ((longlong)iVar3 == 0) {
                  *(undefined4 *)(lVar9 + lVar16 + 0x1c) = 0;
                }
                else {
                  puVar17 = (undefined8 *)(lVar16 + lVar9 + 0x10);
                  FUN_1446dd670(puVar17,iVar3,0);
                  memcpy((void *)*puVar17,_Src,(longlong)iVar3 * 2);
                }
              }
            }
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              plVar4 = plVar5 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
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
            plVar20 = plVar20 + 2;
          } while (plVar20 != plVar19);
          uVar15 = uStack_b0 & 0xffffffff;
        }
        FUN_140255aed(local_b8,uVar15);
        if (local_b8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if (local_a8 != (undefined1 *)0x0) {
          pppuVar14 = local_98;
          if (local_98 == (undefined ***)0x0) {
            pppuVar14 = &local_88;
          }
          (*(code *)(*pppuVar14)[2])();
        }
      }
LAB_141360dca:
      ppuVar18 = ppuVar18 + 0xd;
    } while (ppuVar18 != local_c0);
  }
LAB_141360f90:
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141360fc6 FUN_141360fc6 body=57 status=ok
// SIG undefined FUN_141360fc6(void)

void FUN_141360fc6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69e10 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69e10 = FUN_140002ddd(FUN_146523edd,uVar1,L"InventoryBodyParticleEffectAspect");
  }
  return;
}



// FUNCTION 141361000 FUN_141361000 body=190 status=ok
// SIG undefined FUN_141361000(void)

undefined8 * FUN_141361000(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbd6d74) {
    FUN_144b3d300(&DAT_14cbd6d74);
    if (DAT_14cbd6d74 == -1) {
      builtin_wcsncpy(local_48 + 0x10,L"nged",5);
      builtin_wcsncpy(local_48 + 8,L"sPawnCha",8);
      builtin_wcsncpy(local_48,L"OnPosses",8);
      FUN_1446f470e(&DAT_14cbd6d6c,local_48,1);
      _Init_thread_footer(&DAT_14cbd6d74);
    }
  }
  *param_1 = DAT_14cbd6d6c;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413610c0 FUN_1413610c0 body=94 status=ok
// SIG undefined FUN_1413610c0(void)

void FUN_1413610c0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0x8c) & 0x80) != 0) {
    FUN_14136111e();
    cVar1 = FUN_144729dda(param_1 + 0x30);
    if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x2e8) == DAT_14cbe2680)) {
      uVar2 = FUN_14479d2ce(param_1 + 0x30);
      FUN_14573e1ce(uVar2,&DAT_14cbe2648,0);
      return;
    }
  }
  return;
}



// FUNCTION 14136111e FUN_14136111e body=41 status=ok
// SIG undefined FUN_14136111e(void)

void FUN_14136111e(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x8c) & 0x80) != 0) {
    FUN_14013ebf8();
    *(undefined8 *)(param_1 + 0x2e0) = 0;
  }
  return;
}



// FUNCTION 141361148 FUN_141361148 body=137 status=ok
// SIG undefined FUN_141361148(void)

void FUN_141361148(longlong param_1,float param_2,undefined4 param_3)

{
  longlong lVar1;
  
  if (((1e-06 <= param_2) && (*(longlong *)(param_1 + 0x110) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 0x4208), lVar1 != 0)) {
    lVar1 = (**(code **)(*(longlong *)(lVar1 + 0x3b38) + 0x18))(lVar1 + 0x3b38);
    if (*(char *)(lVar1 + 0x40) != '\0') {
      FUN_1413611d2(param_1,param_2);
      return;
    }
    FUN_141361438(param_1,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 1413611d2 FUN_1413611d2 body=612 status=ok
// SIG undefined FUN_1413611d2(void)

void FUN_1413611d2(longlong *param_1,undefined8 param_2)

{
  float fVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_1a8 [32];
  undefined4 *local_188;
  undefined1 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  float fStack_154;
  longlong lStack_150;
  longlong local_148;
  undefined4 local_b4;
  undefined4 local_88;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar2 = param_1[0x841];
  if ((lVar2 != 0) && (param_1[0x898] != 0)) {
    lVar2 = (**(code **)(*(longlong *)(lVar2 + 0x3b38) + 0x18))(lVar2 + 0x3b38);
    fVar1 = *(float *)(lVar2 + 0x1c0);
    if ((0.0 < fVar1) &&
       ((*(char *)(param_1[0x898] + 0x3e1) != '\x01' ||
        ((double)param_1[0x27] <= 0.0 && (double)param_1[0x27] != 0.0)))) {
      if (*(char *)(param_1[0x898] + 0x3e0) == '\0') {
        local_188 = (undefined4 *)CONCAT44(local_188._4_4_,fVar1);
        FUN_1405a186c(&local_158,param_1 + 0x25,&DAT_14c8464e0,param_2);
        param_1[0x27] = local_148;
        param_1[0x25] = CONCAT44(fStack_154,local_158);
        param_1[0x26] = lStack_150;
      }
      else {
        dVar4 = 0.0;
        dVar3 = 0.0 - (double)param_1[0x27];
        if (9.99999993922529e-09 <= dVar3 * dVar3) {
          dVar4 = (double)(fVar1 * (float)param_2);
          if (dVar4 <= dVar3) {
            dVar3 = dVar4;
          }
          if (dVar3 <= -dVar4) {
            dVar3 = -dVar4;
          }
          dVar4 = (double)param_1[0x27] + dVar3;
        }
        param_1[0x27] = (longlong)dVar4;
      }
    }
  }
  local_58 = (double)(float)param_2;
  local_48 = (double)param_1[0x27] * local_58;
  local_50 = (double)param_1[0x26] * local_58;
  local_58 = local_58 * (double)param_1[0x25];
  memset(&local_158,0,0x100);
  local_88 = 0xffffffff;
  local_b4 = 0xffffffff;
  fStack_154 = 1.0;
  lVar2 = param_1[0x22];
  local_178 = *(undefined8 *)(lVar2 + 0x240);
  uStack_170 = *(undefined8 *)(lVar2 + 0x248);
  local_168 = *(undefined4 *)(lVar2 + 0x250);
  uStack_164 = *(undefined4 *)(lVar2 + 0x254);
  uStack_160 = *(undefined4 *)(lVar2 + 600);
  uStack_15c = *(undefined4 *)(lVar2 + 0x25c);
  local_180 = 0;
  local_188 = &local_158;
  FUN_1402eda10(param_1,&local_58,&local_178,1);
  if (fStack_154 < 1.0) {
    (**(code **)(*param_1 + 0x4c8))(param_1,&local_158,param_2,&local_58);
    local_180 = 1;
    local_188 = &local_158;
    (**(code **)(*param_1 + 0x508))(param_1,&local_58,1.0 - fStack_154);
  }
  if ((local_40 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141361438 FUN_141361438 body=1180 status=ok
// SIG undefined FUN_141361438(void)

void FUN_141361438(longlong *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  ulonglong uVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  double dVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  double *local_a8;
  longlong local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  (**(code **)(*param_1 + 0x770))();
  lVar7 = param_1[0x841];
  if ((((lVar7 != 0) && (param_1[0x898] != 0)) && (param_1[0x15] != 0)) &&
     (1 < *(byte *)(param_1[0x15] + 0x178))) {
    lVar7 = (**(code **)(*(longlong *)(lVar7 + 0x3b38) + 0x18))(lVar7 + 0x3b38);
    lVar8 = (**(code **)(*(longlong *)(param_1[0x841] + 0x3b38) + 0x18))(param_1[0x841] + 0x3b38);
    if ((*(longlong *)(lVar8 + 0x118) != 0) &&
       (plVar9 = *(longlong **)(lVar8 + 0x120), plVar9 != (longlong *)0x0)) {
      if (*(code **)(*plVar9 + 0x20) == (code *)&LAB_144a7e90a) {
        plVar9 = plVar9 + 0x143;
      }
      else {
        plVar9 = (longlong *)(**(code **)(*plVar9 + 0x20))(plVar9);
      }
      if ((int)plVar9[6] != *(int *)((longlong)plVar9 + 0x5c)) {
        plVar10 = plVar9 + 0xc;
        if ((longlong *)plVar9[0xd] != (longlong *)0x0) {
          plVar10 = (longlong *)plVar9[0xd];
        }
        iVar11 = *(int *)((longlong)plVar10 +
                         (ulonglong)((int)plVar9[0xe] - 1U & *(uint *)(lVar8 + 0x128)) * 4);
        if (iVar11 != -1) {
          do {
            if (*(uint *)(plVar9[5] + (longlong)iVar11 * 0xe0) == *(uint *)(lVar8 + 0x128)) {
              cVar6 = FUN_1412c32aa(lVar8 + 0x118);
              if (cVar6 != '\0') {
                local_58 = *(double *)(lVar8 + 0x148);
                local_68 = *(undefined4 *)(lVar8 + 0x138);
                uStack_64 = *(undefined4 *)(lVar8 + 0x13c);
                uStack_60 = *(undefined4 *)(lVar8 + 0x140);
                uStack_5c = *(undefined4 *)(lVar8 + 0x144);
                FUN_1413618d6(lVar7,&local_80);
                lVar8 = *(longlong *)(param_1[0x841] + 0x1c8);
                if (lVar8 == 0) {
                  local_88 = DAT_14c8464f0;
                  local_98 = DAT_14c8464e0;
                  dStack_90 = DAT_14c8464e8;
                }
                else {
                  local_98 = *(double *)(lVar8 + 0x260);
                  dStack_90 = *(double *)(lVar8 + 0x268);
                  local_88 = *(double *)(lVar8 + 0x270);
                }
                local_a8 = &local_98;
                local_b0 = param_1;
                local_a0 = lVar7 + 0x1b8;
                if (((9.999999747378752e-05 < ABS((double)CONCAT44(uStack_64,local_68) - local_80))
                    || (9.999999747378752e-05 <
                        ABS((double)CONCAT44(uStack_5c,uStack_60) - local_78))) ||
                   (9.999999747378752e-05 < ABS(local_58 - local_70))) {
                  fVar16 = (float)SQRT((local_80 - local_98) * (local_80 - local_98) +
                                       (local_78 - dStack_90) * (local_78 - dStack_90)) -
                           (*(float *)(lVar7 + 0x214) + *(float *)(lVar7 + 0x218)) *
                           (float)SQRT((double)param_1[0x25] * (double)param_1[0x25] +
                                       (double)param_1[0x26] * (double)param_1[0x26]);
                  fVar13 = (float)FUN_14416362c(&local_b0,&local_68);
                  if (fVar16 <= fVar13) {
                    fVar13 = fVar16;
                  }
                  lVar8 = param_1[0x898];
                }
                else {
                  dVar12 = (double)CONCAT44(uStack_5c,uStack_60) - dStack_90;
                  dVar2 = (double)CONCAT44(uStack_64,local_68) - local_98;
                  dVar1 = (double)param_1[0x25];
                  dVar14 = (double)param_1[0x26];
                  fVar13 = (float)SQRT(dVar1 * dVar1 + dVar14 * dVar14);
                  dVar15 = dVar2 * dVar2 + dVar12 * dVar12;
                  lVar8 = param_1[0x898];
                  if (*(char *)(lVar8 + 0x3ec) == '\x01') {
                    if ((dVar15 != 1.0) || (NAN(dVar15))) {
                      if (9.99999993922529e-09 <= dVar15) {
                        dVar12 = dVar12 * (1.0 / SQRT(dVar15));
                        dVar2 = dVar2 * (1.0 / SQRT(dVar15));
                        uVar17 = 0;
                        uVar18 = 0;
                      }
                      else {
                        uVar17 = SUB84(DAT_14c8464f0,0);
                        uVar18 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
                        dVar12 = DAT_14c8464e8;
                        dVar2 = DAT_14c8464e0;
                      }
                    }
                    else {
                      uVar5 = -(ulonglong)(local_58 - local_88 == 0.0) &
                              (ulonglong)(local_58 - local_88);
                      uVar17 = (undefined4)uVar5;
                      uVar18 = (undefined4)(uVar5 >> 0x20);
                    }
                    dVar3 = (double)fVar13;
                    dVar4 = (double)param_1[0x27] * DAT_14c8462d0;
                    dVar14 = dVar14 * DAT_14c8462c8;
                    param_1[0x25] = (longlong)(dVar1 * DAT_14c8462c0 + dVar2 * dVar3);
                    param_1[0x26] = (longlong)(dVar14 + dVar12 * dVar3);
                    param_1[0x27] = (longlong)(dVar4 + (double)CONCAT44(uVar18,uVar17) * dVar3);
                  }
                  fVar13 = (float)SQRT(dVar15) -
                           (*(float *)(lVar7 + 0x214) + *(float *)(lVar7 + 0x218)) * fVar13;
                }
                if (*(float *)(lVar8 + 1000) <= fVar13 && fVar13 != *(float *)(lVar8 + 1000)) {
                  FUN_14589c80a(lVar7,lVar7 + 0x118);
                }
              }
              break;
            }
            iVar11 = *(int *)((longlong)iVar11 * 0xe0 + plVar9[5] + 0xd0);
          } while (iVar11 != -1);
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413618d6 FUN_1413618d6 body=342 status=ok
// SIG undefined FUN_1413618d6(void)

void FUN_1413618d6(longlong param_1,undefined1 (*param_2) [16])

{
  double dVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  *(undefined8 *)param_2[1] = *(undefined8 *)(param_1 + 0x148);
  uVar8 = *(undefined8 *)(param_1 + 0x140);
  *(undefined8 *)*param_2 = *(undefined8 *)(param_1 + 0x138);
  *(undefined8 *)(*param_2 + 8) = uVar8;
  lVar2 = *(longlong *)(param_1 + 0x150);
  if (lVar2 != 0) {
    dVar10 = *(double *)(param_1 + 0x158) * *(double *)(lVar2 + 0x280);
    dVar11 = *(double *)(param_1 + 0x160) * *(double *)(lVar2 + 0x288);
    dVar9 = *(double *)(param_1 + 0x168) * *(double *)(lVar2 + 0x290);
    dVar5 = *(double *)(lVar2 + 0x240);
    dVar6 = *(double *)(lVar2 + 0x248);
    dVar7 = *(double *)(lVar2 + 0x250);
    dVar1 = *(double *)(lVar2 + 600);
    dVar12 = dVar11 * dVar5 - dVar10 * dVar6;
    dVar13 = dVar9 * dVar6 - dVar11 * dVar7;
    dVar14 = dVar10 * dVar7 - dVar5 * dVar9;
    dVar13 = dVar13 + dVar13;
    dVar14 = dVar14 + dVar14;
    dVar12 = dVar12 + dVar12;
    dVar4 = (dVar7 * dVar13 - dVar5 * dVar12) + *(double *)(lVar2 + 600) * dVar14 + dVar11 +
            *(double *)(lVar2 + 0x268);
    dVar11 = *(double *)(lVar2 + 0x270);
    auVar3._8_4_ = SUB84(dVar4,0);
    auVar3._0_8_ = (dVar12 * dVar6 - dVar14 * dVar7) + dVar1 * dVar13 + dVar10 +
                   *(double *)(lVar2 + 0x260);
    auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    *param_2 = auVar3;
    *(double *)param_2[1] = dVar12 * dVar1 + dVar9 + (dVar14 * dVar5 - dVar13 * dVar6) + dVar11;
  }
  return;
}



// FUNCTION 141361a2c FUN_141361a2c body=55 status=ok
// SIG undefined FUN_141361a2c(void)

void FUN_141361a2c(longlong *param_1)

{
  FUN_141361a64(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141361a64 FUN_141361a64 body=123 status=ok
// SIG undefined FUN_141361a64(void)

void FUN_141361a64(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 141361ae0 FUN_141361ae0 body=246 status=ok
// SIG undefined FUN_141361ae0(void)

void FUN_141361ae0(undefined8 *param_1)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_149f72280;
  if (param_1[7] != 0) {
    lVar1 = *(longlong *)(param_1[7] + 0x9d0);
    SRWLock = (PSRWLOCK)(lVar1 + 0x20);
    AcquireSRWLockShared(SRWLock);
    plVar2 = (longlong *)**(undefined8 **)(lVar1 + 8);
    (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
    ReleaseSRWLockShared(SRWLock);
    FUN_1411dc7ca(param_1[7] + 0x70,param_1[0x10]);
  }
  if (param_1[6] != 0) {
    FUN_14298752c(param_1[6],param_1[7]);
  }
  param_1[0x10] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  puVar3 = param_1 + 10;
  if ((undefined8 *)param_1[0xe] != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)param_1[0xe];
  }
  FUN_144717c65(puVar3,*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (*(char *)((longlong)param_1 + 9) == '\x01')) {
    FUN_14019e20a(DAT_14c948580,param_1);
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 141361bd6 FUN_141361bd6 body=1651 status=ok
// SIG undefined FUN_141361bd6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141361bd6(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  uint *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong *plVar20;
  longlong lVar21;
  undefined1 auStack_138 [40];
  undefined4 local_110;
  longlong *local_108;
  uint local_f4;
  uint *local_f0;
  longlong *local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong *local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 *local_b8;
  longlong *local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  iVar14 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  plVar20 = (longlong *)(param_1 + 0x228);
  local_f0 = (uint *)(param_1 + 0x238);
  iVar1 = *(int *)(param_1 + 0x250);
  local_e8 = plVar20;
  local_e0 = param_1;
  if (iVar1 == 0) {
    uVar18 = 1;
    uVar13 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = *(uint **)(param_1 + 0x248);
    if (*(uint **)(param_1 + 0x248) == (uint *)0x0) {
      puVar7 = local_f0;
    }
    uVar15 = *puVar7;
    if (uVar15 == 0) {
      iVar14 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar14 = iVar1 + -1;
      }
      uVar13 = 0;
      uVar18 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar18 = uVar13;
      }
      iVar14 = 0;
      do {
        if (uVar18 == uVar13) goto LAB_141361ce3;
        iVar14 = iVar14 + 0x20;
        uVar15 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar15 == 0);
    }
    else {
      iVar14 = 0;
      uVar13 = 0;
    }
    uVar18 = (ulonglong)(-uVar15 & uVar15);
    uVar8 = uVar18 * 2 + 1;
    lVar21 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    iVar6 = (iVar14 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
    if (iVar1 <= iVar6) {
      iVar6 = iVar1;
    }
  }
  if (iVar6 != iVar1) {
    uVar15 = 0xffffffff;
    do {
      plVar3 = *(longlong **)(*plVar20 + (longlong)iVar6 * 0x10);
      cVar5 = (**(code **)(*plVar3 + 0x358))(plVar3);
      if ((cVar5 != '\0') && (local_a8 = (**(code **)(*plVar3 + 0x7a0))(plVar3), local_a8 != 0)) {
        FUN_1479fa666(&local_98,&local_b8,&local_a8,0);
      }
      uVar15 = uVar15 & ~(uint)uVar18;
      puVar7 = *(uint **)(param_1 + 0x248);
      if (*(uint **)(param_1 + 0x248) == (uint *)0x0) {
        puVar7 = local_f0;
      }
      iVar2 = *(int *)(param_1 + 0x250);
      iVar6 = (int)uVar13;
      lVar21 = (longlong)iVar6;
      uVar12 = puVar7[lVar21] & uVar15;
      if (uVar12 == 0) {
        iVar10 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar10 = iVar2 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar14 = iVar14 + 0x20;
        iVar9 = iVar10;
        if (iVar10 < iVar6) {
          iVar9 = iVar6;
        }
        if (iVar6 < iVar10) {
          lVar16 = 0;
          do {
            uVar12 = puVar7[lVar21 + lVar16 + 1];
            if (uVar12 != 0) {
              uVar13 = (ulonglong)(iVar6 + (int)lVar16 + 1);
              uVar15 = 0xffffffff;
              goto LAB_141361f13;
            }
            iVar14 = iVar14 + 0x20;
            lVar16 = lVar16 + 1;
          } while (iVar9 - lVar21 != lVar16);
          uVar15 = 0xffffffff;
          iVar6 = iVar9;
        }
        uVar13 = (ulonglong)(iVar6 + 1);
        param_1 = local_e0;
        plVar20 = local_e8;
        iVar6 = iVar2;
      }
      else {
LAB_141361f13:
        uVar18 = (ulonglong)(-uVar12 & uVar12);
        uVar8 = uVar18 * 2 + 1;
        lVar21 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        iVar6 = (iVar14 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar6) {
          iVar6 = iVar2;
        }
      }
    } while (iVar6 != iVar1);
  }
LAB_141361ce3:
  FUN_14362aeae(&local_98,&local_c8);
  local_b0 = &local_d8;
  local_108 = &local_a8;
  local_a8 = 0;
  uVar18 = 0;
  local_a0 = 0;
  local_b8 = &LAB_14363e15a;
  local_110 = 0;
  uVar13 = 1;
  local_d8 = param_1;
  local_d0 = &local_c8;
  FUN_1411ca36e(L"CreatePhysicsMeshes.PF",local_c0,1);
  iVar1 = *(int *)(param_1 + 0x250);
  iVar6 = 0;
  iVar14 = 0;
  if (iVar1 != 0) {
    puVar7 = *(uint **)(local_e0 + 0x248);
    if (*(uint **)(local_e0 + 0x248) == (uint *)0x0) {
      puVar7 = local_f0;
    }
    uVar15 = *puVar7;
    if (uVar15 == 0) {
      iVar14 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar14 = iVar1 + -1;
      }
      uVar18 = 0;
      uVar13 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar13 = uVar18;
      }
      iVar6 = 0;
      do {
        if (uVar13 == uVar18) goto LAB_141361de0;
        iVar6 = iVar6 + 0x20;
        uVar15 = puVar7[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar18 = 0;
    }
    uVar13 = (ulonglong)(-uVar15 & uVar15);
    uVar8 = uVar13 * 2 + 1;
    lVar21 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    iVar14 = (iVar6 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
    if (iVar1 <= iVar14) {
      iVar14 = iVar1;
    }
  }
  if (iVar14 != iVar1) {
    uVar15 = 0xffffffff;
    puVar7 = local_f0;
    do {
      plVar3 = *(longlong **)(*plVar20 + (longlong)iVar14 * 0x10);
      if ((((plVar3[0x15] == 0) || ((*(uint *)(plVar3[0x15] + 8) >> 0x1e & 1) == 0)) &&
          (cVar5 = (**(code **)(*plVar3 + 0x358))(plVar3), cVar5 != '\0')) &&
         ((*(byte *)((longlong)plVar3 + 0x9c) & 8) == 0)) {
        (**(code **)(*plVar3 + 0x348))(plVar3);
        plVar11 = (longlong *)(ulonglong)DAT_14cad0f4c;
        uVar8 = (ulonglong)DAT_14cad0f40;
        if (0 < (longlong)uVar8) {
          local_f4 = 0;
          DAT_14cad0f4c = DAT_14cad0f4c + 1;
          do {
            lVar21 = uVar8 * 0x10 + -8;
            uVar19 = uVar8;
            while (((*(int *)(DAT_14cad0f38 + lVar21) != 0 &&
                    (plVar11 = *(longlong **)(DAT_14cad0f38 + -8 + lVar21),
                    plVar11 != (longlong *)0x0)) &&
                   (cVar5 = (**(code **)(*plVar11 + 0x60))(plVar11,plVar3), cVar5 != '\0'))) {
              lVar21 = lVar21 + -0x10;
              bVar4 = uVar19 < 2;
              uVar19 = uVar19 - 1;
              if (bVar4) {
                DAT_14cad0f4c = DAT_14cad0f4c - 1;
                plVar20 = local_e8;
                puVar7 = local_f0;
                if ((local_f4 & 1) != 0) goto LAB_141362156;
                goto LAB_141362096;
              }
            }
            uVar8 = uVar19 - 1;
            plVar11 = (longlong *)CONCAT71((int7)((ulonglong)plVar11 >> 8),1);
            local_f4 = (uint)plVar11;
          } while (1 < uVar19);
          DAT_14cad0f4c = DAT_14cad0f4c - 1;
LAB_141362156:
          iVar14 = DAT_14cad0f40;
          plVar20 = local_e8;
          puVar7 = local_f0;
          if ((int)DAT_14cad0f4c < 1) {
            if (0 < DAT_14cad0f40) {
              local_f4 = 0;
              do {
                if (((*(int *)(DAT_14cad0f38 + 8 + (longlong)(int)local_f4 * 0x10) == 0) ||
                    (plVar20 = *(longlong **)(DAT_14cad0f38 + (longlong)(int)local_f4 * 0x10),
                    plVar20 == (longlong *)0x0)) ||
                   (cVar5 = (**(code **)(*plVar20 + 0x28))(), cVar5 != '\0')) {
                  FUN_14005b288(&DAT_14cad0f38,local_f4);
                  FUN_14005b248(&DAT_14cad0f38);
                }
                else {
                  local_f4 = local_f4 + 1;
                }
              } while ((int)local_f4 < DAT_14cad0f40);
            }
            plVar20 = local_e8;
            puVar7 = local_f0;
            _DAT_14cad0f48 = DAT_14cad0f40 * 2;
            if (_DAT_14cad0f48 < 3) {
              _DAT_14cad0f48 = 2;
            }
            if ((_DAT_14cad0f48 < iVar14) && (DAT_14cad0f44 != DAT_14cad0f40)) {
              FUN_14045812c(&DAT_14cad0f38);
            }
          }
        }
      }
LAB_141362096:
      plVar3[0x70] = 0;
      uVar15 = uVar15 & ~(uint)uVar13;
      puVar17 = *(uint **)(local_e0 + 0x248);
      if (*(uint **)(local_e0 + 0x248) == (uint *)0x0) {
        puVar17 = puVar7;
      }
      iVar2 = *(int *)(local_e0 + 0x250);
      iVar14 = (int)uVar18;
      lVar21 = (longlong)iVar14;
      uVar12 = puVar17[lVar21] & uVar15;
      if (uVar12 == 0) {
        iVar10 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar10 = iVar2 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar6 = iVar6 + 0x20;
        iVar9 = iVar10;
        if (iVar10 < iVar14) {
          iVar9 = iVar14;
        }
        if (iVar14 < iVar10) {
          lVar16 = 0;
          do {
            uVar12 = puVar17[lVar21 + lVar16 + 1];
            if (uVar12 != 0) {
              uVar18 = (ulonglong)(iVar14 + (int)lVar16 + 1);
              uVar15 = 0xffffffff;
              goto LAB_141362126;
            }
            iVar6 = iVar6 + 0x20;
            lVar16 = lVar16 + 1;
          } while (iVar9 - lVar21 != lVar16);
          uVar15 = 0xffffffff;
          iVar14 = iVar9;
        }
        uVar18 = (ulonglong)(iVar14 + 1);
        plVar20 = local_e8;
        puVar7 = local_f0;
        iVar14 = iVar2;
      }
      else {
LAB_141362126:
        uVar13 = (ulonglong)(-uVar12 & uVar12);
        uVar8 = uVar13 * 2 + 1;
        lVar21 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        iVar14 = (iVar6 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar14) {
          iVar14 = iVar2;
        }
      }
    } while (iVar14 != iVar1);
  }
LAB_141361de0:
  FUN_1433b7b66(plVar20);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_14363e0cc(&local_98);
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14136224a FUN_14136224a body=129 status=ok
// SIG undefined FUN_14136224a(void)

undefined1 *
FUN_14136224a(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  if (((*(byte *)(param_1 + 0x39) & 8) != 0) && (cVar1 = FUN_140f8cc94(), cVar1 == '\0')) {
    FUN_1407c952c(param_1,param_2,param_3,param_4,1);
    return param_2;
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 1413622cc FUN_1413622cc body=12 status=ok
// SIG undefined FUN_1413622cc(void)

void FUN_1413622cc(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001413622d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1413622d8 FUN_1413622d8 body=31 status=ok
// SIG undefined FUN_1413622d8(void)

undefined8 FUN_1413622d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1413622f8 FUN_1413622f8 body=128 status=ok
// SIG undefined FUN_1413622f8(void)

undefined8 FUN_1413622f8(char param_1,int param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  char local_38 [4];
  undefined8 local_34;
  undefined1 local_2c;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = 0;
  if ((param_1 != '\x04') && (0xfffffffb < param_2 - 5U)) {
    local_2c = 0;
    local_34 = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_38[1] = 1;
    local_38[0] = param_1;
    local_38[2] = (char)param_2;
    uVar1 = FUN_1410a7212(local_38);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14136237a FUN_14136237a body=360 status=ok
// SIG undefined FUN_14136237a(void)

longlong FUN_14136237a(longlong *param_1,undefined8 param_2,longlong param_3,int param_4,
                      undefined8 param_5,undefined4 param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  longlong *local_60;
  byte local_58 [16];
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_6;
  local_78 = param_5;
  lVar2 = FUN_1413624e4(param_1);
  if (lVar2 != 0) {
    if (param_4 == 1) {
      param_3 = param_3 + *(int *)((longlong)param_1 + 0x44);
    }
    (**(code **)(*param_1 + 0x218))(param_1,&local_40,param_3);
    local_48 = local_40;
    if ((local_40 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    (**(code **)(*param_1 + 0x230))(param_1,param_3,&local_48);
    if (local_40 != 0) {
      lVar3 = FUN_144a817a2();
      if ((((local_40 != 0) && (lVar3 != 0)) && (lVar1 = *(longlong *)(local_40 + 0x10), lVar1 != 0)
          ) && ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38) &&
                (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
                 == lVar3 + 0x30)))) {
        local_58[0] = DAT_14c872ba8 ^ 1;
        if (DAT_14c872ba8 == 0) {
          FUN_1468bd714(local_58,param_5);
        }
        local_60 = param_1;
        FUN_1468bdcba(local_40 + 0x250,&local_60,param_3);
        if (local_58[0] == 1) {
          FUN_1468bd798(local_58);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413624e4 FUN_1413624e4 body=750 status=ok
// SIG undefined FUN_1413624e4(void)

undefined8
FUN_1413624e4(longlong *param_1,undefined8 param_2,longlong param_3,int param_4,longlong param_5,
             uint param_6)

{
  undefined8 uVar1;
  DWORD DVar2;
  char cVar3;
  DWORD dwTlsIndex;
  DWORD DVar4;
  LPVOID pvVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  longlong *local_110;
  undefined4 local_108;
  undefined4 local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  longlong local_e0 [3];
  byte local_c8;
  uint local_c0;
  undefined1 local_a0 [64];
  longlong local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_f0 = 0;
  dwTlsIndex = DAT_14c75ec34;
  local_e8 = param_2;
  if (DAT_14c75ec34 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar4 = 0xffffffff;
    LOCK();
    bVar9 = DAT_14c75ec34 != 0xffffffff;
    DVar2 = dwTlsIndex;
    if (bVar9) {
      DVar4 = DAT_14c75ec34;
      DVar2 = DAT_14c75ec34;
    }
    DAT_14c75ec34 = DVar2;
    UNLOCK();
    if (bVar9) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar4;
    }
  }
  pvVar5 = TlsGetValue(dwTlsIndex);
  if (pvVar5 == (LPVOID)0x0) {
    pvVar5 = (LPVOID)FUN_14001cc68(0x60,0x10);
    FUN_141073f92(pvVar5);
    FUN_140fddf04(pvVar5);
    TlsSetValue(dwTlsIndex,pvVar5);
  }
  local_110 = &local_f0;
  local_118 = &local_e8;
  FUN_1413627d4(param_1,param_5,param_1[0xe],param_6);
  lVar7 = local_f0;
  if (((param_6 >> 0x12 & 1) != 0 && local_f0 != 0) &&
     ((*(byte *)((longlong)param_1 + 0x3a) & 8) != 0)) {
    uVar1 = *(undefined8 *)(local_f0 + 0x18);
    uVar8 = 0;
    plVar6 = (longlong *)FUN_1402ab8a4(param_5,0,uVar1);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x170))(plVar6,0,0,0x10);
    }
    local_100 = 0xfff00007;
    local_108 = 0;
    local_110 = (longlong *)0x0;
    local_118 = (undefined8 *)CONCAT44(local_118._4_4_,0xffffffff);
    FUN_14092e9d5(local_e0,lVar7,param_5,uVar1);
    local_c8 = local_c8 & 0xdf;
    for (; param_5 != 0; param_5 = *(longlong *)(param_5 + 0x20)) {
      if ((*(uint *)(param_5 + 8) & 0x30) != 0) {
        uVar8 = 0x20;
        break;
      }
    }
    local_c0 = local_c0 & 0xffffffdf | uVar8;
    lVar7 = FUN_14092ef3d();
    if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar7);
    }
    local_58 = 0;
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    FUN_1401be51a(local_a0);
  }
  if ((param_4 == 1) && (cVar3 = (**(code **)(*param_1 + 0x80))(param_1), cVar3 != '\0')) {
    local_f8 = lVar7;
    if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar7);
    }
    FUN_142811eb4(param_1,param_3,&local_f8);
  }
  else {
    if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar7);
    }
    if (param_4 == 1) {
      param_3 = param_3 + *(int *)((longlong)param_1 + 0x44);
    }
    if (lVar7 == 0) {
      if ((*(byte *)((longlong)param_1 + 0x39) & 0x10) != 0) goto LAB_1413625da;
      local_e0[0] = 0;
    }
    else {
      local_e0[0] = lVar7;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar7);
      }
    }
    (**(code **)(*param_1 + 0x1f8))(param_1,param_3,local_e0);
  }
LAB_1413625da:
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_e8;
}



// FUNCTION 1413627d4 FUN_1413627d4 body=616 status=ok
// SIG undefined FUN_1413627d4(void)

ulonglong FUN_1413627d4(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
                       longlong *param_5,longlong *param_6)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  wint_t *pwVar4;
  short *psVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStack_2a8 [32];
  undefined2 *local_288;
  undefined4 local_280;
  longlong local_270;
  undefined2 *local_268;
  undefined2 *local_260;
  ulonglong *local_258;
  char local_250;
  undefined2 local_248 [256];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  if (param_3 == 0) {
    *param_6 = 0;
    uVar9 = 0;
    goto LAB_141362980;
  }
  local_268 = local_248;
  local_250 = '\0';
  local_258 = &local_48;
  local_260 = local_268;
  pwVar4 = (wint_t *)FUN_1409a0110(*param_5,&local_268,1);
  *param_5 = (longlong)pwVar4;
  if (pwVar4 == (wint_t *)0x0) {
LAB_141362960:
    uVar9 = 0;
  }
  else if (((longlong)local_260 - (longlong)local_268 & 0x1fffffffeU) == 8) {
    lVar6 = 4;
    lVar7 = 0;
    while( true ) {
      uVar1 = *(ushort *)((longlong)local_268 + lVar7);
      uVar8 = (uint)uVar1;
      uVar2 = *(ushort *)((longlong)&DAT_149e01fe8 + lVar7);
      uVar9 = (ulonglong)uVar2;
      if (uVar1 != uVar2) break;
      uVar9 = CONCAT71((uint7)(byte)(uVar2 >> 8),1);
      if ((uVar1 == 0) || (lVar6 == 1)) goto LAB_141362957;
LAB_1413629fe:
      lVar6 = lVar6 + -1;
      lVar7 = lVar7 + 2;
    }
    if ((uVar2 | uVar1) < 0x80) {
      uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar1];
      uVar9 = (ulonglong)(byte)(&DAT_149e05da0)[uVar2];
      if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[uVar2]) goto LAB_141362a2f;
      if (lVar6 != 1) goto LAB_1413629fe;
    }
    else {
LAB_141362a2f:
      if (uVar8 != (uint)uVar9) goto LAB_14136287d;
    }
    uVar9 = CONCAT71((int7)(uVar9 >> 8),1);
LAB_141362957:
    *param_6 = 0;
  }
  else {
LAB_14136287d:
    iVar3 = iswspace(*pwVar4);
    psVar5 = (short *)*param_5;
    while (iVar3 != 0) {
      *param_5 = (longlong)(psVar5 + 1);
      iVar3 = iswspace(psVar5[1]);
      psVar5 = (short *)*param_5;
    }
    if (*psVar5 == 0x27) {
      *param_5 = (longlong)(psVar5 + 1);
      local_260 = local_268;
      psVar5 = (short *)FUN_1409a0110(psVar5 + 1,&local_268,1);
      *param_5 = (longlong)psVar5;
      if ((psVar5 == (short *)0x0) || (*param_5 = (longlong)(psVar5 + 1), *psVar5 != 0x27))
      goto LAB_141362960;
    }
    *local_260 = 0;
    local_288 = local_268;
    local_280 = param_4;
    FUN_14281153e(&local_270,param_1,param_2,param_3);
    if ((local_270 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(local_270);
    }
    *param_6 = local_270;
    if (local_270 == 0) goto LAB_141362960;
    if ((*(int *)(*(longlong *)(local_270 + 0x10) + 0x38) < *(int *)(param_3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_270 + 0x10) + 0x30) +
         (longlong)*(int *)(param_3 + 0x38) * 8) != param_3 + 0x30)) {
      uVar9 = 0;
      goto LAB_141362957;
    }
    uVar9 = CONCAT71((int7)((ulonglong)&local_270 >> 8),1);
  }
  if (local_250 == '\x01') {
    FUN_1400020a8(local_268);
  }
LAB_141362980:
  if ((local_48 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141362a3e FUN_141362a3e body=132 status=ok
// SIG undefined FUN_141362a3e(void)

longlong * FUN_141362a3e(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 0x20);
  if ((plVar4 == (longlong *)0x0) || (*(int *)(param_1 + 0x1c) == 0)) {
    return (longlong *)0x0;
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  plVar3 = (longlong *)0x0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (lVar2 == 0) {
      return (longlong *)0x0;
    }
    if (*(int *)(lVar2 + 0x10) != *(int *)(param_1 + 0x1c)) {
      return (longlong *)0x0;
    }
    if ((*(uint *)(lVar2 + 8) & 0x10200000) != 0) {
      return (longlong *)0x0;
    }
    if (*(code **)(*plVar4 + 0x30) != (code *)&LAB_14479b63c) {
                    /* WARNING: Could not recover jumptable at 0x000141362abf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x30))();
      return plVar4;
    }
    plVar3 = plVar4 + -0xa4;
    if ((longlong *)plVar4[-0x77] != (longlong *)0x0) {
      plVar3 = (longlong *)plVar4[-0x77];
    }
  }
  return plVar3;
}



// FUNCTION 141362ac2 FUN_141362ac2 body=158 status=ok
// SIG undefined FUN_141362ac2(void)

ulonglong FUN_141362ac2(longlong param_1,char param_2)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if ((lVar1 == 0) || (*(char *)(lVar1 + 0x18) != '\x01')) {
    fVar4 = *(float *)(param_1 + 0x30);
    fVar5 = fVar4;
  }
  else {
    fVar4 = *(float *)(param_1 + 0x30);
    auVar6 = roundps(ZEXT416(*(uint *)(param_1 + 0x30)),ZEXT416(*(uint *)(param_1 + 0x30)),3);
    fVar5 = auVar6._0_4_;
  }
  if (param_2 == '\0') {
    fVar5 = *(float *)(param_1 + 200);
    if (0.0001 <= ABS(fVar5 - *(float *)(param_1 + 0x24))) {
      return 0;
    }
    bVar3 = fVar4 == fVar5;
    bVar2 = fVar4 < fVar5;
  }
  else {
    if (param_2 != '\x02') {
      if (param_2 == '\x01') {
        return (ulonglong)*(byte *)(param_1 + 0x130);
      }
      if (param_2 != '\x03') {
        return 0;
      }
      return (ulonglong)*(byte *)(param_1 + 0x12f);
    }
    fVar4 = ABS(*(float *)(param_1 + 200) - fVar5);
    bVar3 = fVar4 == 0.0001;
    bVar2 = 0.0001 < fVar4;
    lVar1 = 0;
  }
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),!bVar2 && !bVar3);
}



// FUNCTION 141362b60 FUN_141362b60 body=369 status=ok
// SIG undefined FUN_141362b60(void)

void FUN_141362b60(longlong param_1,char param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  code *local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = FUN_1447210f0();
  if (((lVar3 != 0) && ((*(byte *)(lVar3 + 0x155) & 0x20) == 0)) &&
     (*(longlong *)(lVar3 + 0x1f0) != 0)) {
    lVar4 = FUN_1403ca142();
    plVar1 = *(longlong **)(lVar3 + 0x1f0);
    if (((plVar1 != (longlong *)0x0) && (lVar4 != 0)) &&
       ((lVar3 = plVar1[2], lVar3 != 0 &&
        ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)))))) {
      cVar2 = (**(code **)(*plVar1 + 0x498))();
      if (cVar2 == '\b') {
        if (*(longlong *)(param_1 + 0x640) == 0) {
          if (*(char *)(param_1 + 0x848) == param_2) goto LAB_141362bf7;
        }
        else {
          FUN_14480f766(&DAT_14cb7df68);
          *(undefined8 *)(param_1 + 0x640) = 0;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
      *(char *)(param_1 + 0x848) = param_2;
      if (*(longlong *)(param_1 + 0x640) == 0) {
        local_38 = FUN_148d22958;
        local_30 = 0;
        FUN_14592be2a(&DAT_14cb7df68,&local_28,param_1);
      }
      else {
        FUN_14480f766(&DAT_14cb7df68);
        *(undefined8 *)(param_1 + 0x640) = 0;
        local_38 = FUN_148d22958;
        local_30 = 0;
        FUN_14592be2a(&DAT_14cb7df68,&local_28,param_1);
      }
      *(undefined8 *)(param_1 + 0x640) = local_28;
    }
  }
LAB_141362bf7:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141362e04 FUN_141362e04 body=209 status=ok
// SIG undefined FUN_141362e04(void)

void FUN_141362e04(longlong param_1,undefined1 *param_2)

{
  longlong unaff_GS_OFFSET;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc9910) {
    FUN_144b3d300(&DAT_14cbc9910);
    if (DAT_14cbc9910 == -1) {
      DAT_14cbc9908 = FUN_145a3b399();
      _Init_thread_footer(&DAT_14cbc9910);
    }
  }
  if ((*(char *)(param_1 + 0x178) == '\x03') && (DAT_14cbc9908 != 0)) {
    local_1c = 0;
    local_30 = DAT_14cbc9480;
    local_28 = 0xffffffff;
    FUN_1413630d6(param_1 + 0x3b8,&local_30,*param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141362ed6 FUN_141362ed6 body=481 status=ok
// SIG undefined FUN_141362ed6(void)

void FUN_141362ed6(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  undefined4 *local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = FUN_1447210f0();
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x155) & 0x20) == 0)) {
    fVar2 = *(float *)(param_1 + 0x864);
    fVar3 = *(float *)(lVar1 + 0x930);
    *(float *)(param_1 + 0x864) = fVar3;
    if ((*(char *)(param_1 + 0x848) == '\x02') && (*(char *)(param_1 + 0x178) == '\x03')) {
      fVar3 = (float)(-(uint)(0.0 < fVar2) & (uint)(fVar3 - fVar2));
      fVar2 = (float)FUN_1447c7e44(fVar3);
      FUN_140002266(local_50,L"%d minutes %d seconds",
                    (int)ROUND(fVar3 / 60.0 + fVar3 / 60.0 + -0.5) >> 1,
                    (int)ROUND(fVar2 + fVar2 + 0.5) >> 1);
      FUN_1412e3d1e(&local_78);
      local_68 = CONCAT44(DAT_14c9a3000,DAT_14c9a2ffc);
      uStack_60 = CONCAT44(DAT_14c9a3008,DAT_14c9a3004);
      DAT_14c9a2ffc = local_78;
      DAT_14c9a3000 = uStack_74;
      DAT_14c9a3004 = uStack_70;
      DAT_14c9a3008 = uStack_6c;
      if ((char)param_2 == '\x03') {
        local_98 = local_50;
        FUN_148d203b9(param_1 + 0x840,*(undefined1 *)(param_1 + 0x848),
                      *(undefined1 *)(param_1 + 0x84b),fVar3);
      }
      else {
        FUN_148d2146e(param_1,&local_78);
        local_98 = (longlong *)CONCAT44(local_98._4_4_,fVar3);
        local_90 = local_50;
        local_88 = &local_78;
        FUN_148d20741(param_1 + 0x840,*(undefined1 *)(param_1 + 0x848),param_2,
                      *(undefined1 *)(param_1 + 0x84b));
        if (CONCAT44(uStack_74,local_78) != 0) {
          FUN_1400020a8();
        }
      }
      FUN_1412b8792(param_1);
      DAT_14c9a2ffc = (undefined4)local_68;
      DAT_14c9a3000 = local_68._4_4_;
      DAT_14c9a3004 = (undefined4)uStack_60;
      DAT_14c9a3008 = uStack_60._4_4_;
      if (local_50[0] != 0) {
        FUN_1400020a8();
      }
    }
    else if (((char)param_2 == '\x02') && (*(char *)(param_1 + 0x178) == '\x03')) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413630d6 FUN_1413630d6 body=432 status=ok
// SIG undefined FUN_1413630d6(void)

undefined4 FUN_1413630d6(longlong *param_1,longlong *param_2,undefined4 param_3,float *param_4)

{
  longlong lVar1;
  float fVar2;
  longlong lVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  float fVar11;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *param_2;
  uVar5 = *(uint *)(param_2 + 1);
  if (lVar3 != 0 || uVar5 != 0xffffffff) {
    if ((int)uVar5 < 0) {
      lVar9 = *param_1;
      uVar7 = *(uint *)(param_1 + 1);
LAB_14136312f:
      if (uVar7 != 0) {
        uVar6 = (ulonglong)(int)uVar7;
        goto LAB_141363142;
      }
    }
    else {
      uVar7 = *(uint *)(param_1 + 1);
      uVar6 = (ulonglong)uVar7;
      lVar9 = *param_1;
      if ((int)uVar7 <= (int)uVar5) goto LAB_14136312f;
      if (*(longlong *)(lVar9 + 0x68 + (ulonglong)uVar5 * 0x88) == lVar3) {
LAB_14136318e:
        lVar9 = (longlong)(int)uVar5 * 0x88 + lVar9;
        if (lVar9 != 0) {
          uVar10 = FUN_1406400be(param_1);
          fVar2 = *(float *)(lVar9 + 0x84);
          local_58 = *(undefined4 *)(lVar9 + 0x80);
          local_60 = *(undefined8 *)(lVar9 + 0x78);
          fVar11 = (float)uVar10;
          if (*(char *)(param_4 + 1) == '\x01') {
            fVar11 = *param_4;
          }
          uVar4 = FUN_140640470(lVar9,param_3,fVar11);
          if ((char)uVar4 != '\0') {
            uVar5 = -(uint)(fVar2 < 0.0);
            FUN_140640a12(param_1,lVar9,&local_60,
                          (ulonglong)(uVar5 & 0x7f7fffff) |
                          CONCAT44((int)((ulonglong)uVar10 >> 0x20),
                                   ~uVar5 & (uint)((float)uVar10 - fVar2)));
          }
          goto LAB_141363217;
        }
        goto LAB_141363215;
      }
LAB_141363142:
      uVar8 = 0;
      do {
        if (*(longlong *)(lVar9 + 0x68 + uVar8) == lVar3) {
          uVar5 = (int)(uVar8 >> 3) * -0xf0f0f0f;
          *(uint *)(param_2 + 1) = uVar5;
          if (uVar5 == 0xffffffff) goto LAB_141363215;
          lVar9 = *param_1;
          goto LAB_14136318e;
        }
        lVar1 = lVar9 + uVar8;
        uVar8 = uVar8 + 0x88;
      } while (lVar1 + 0x88 != uVar6 * 0x88 + lVar9);
    }
    *(undefined4 *)(param_2 + 1) = 0xffffffff;
  }
LAB_141363215:
  uVar4 = 0;
LAB_141363217:
  if (*(char *)(param_4 + 1) == '\x01') {
    *(undefined1 *)(param_4 + 1) = 0;
  }
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 141363288 FUN_141363288 body=828 status=ok
// SIG undefined FUN_141363288(void)

void FUN_141363288(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_138 [32];
  longlong *local_118;
  undefined8 *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 *local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [8];
  longlong local_b8;
  longlong local_a8;
  undefined1 local_a0 [8];
  undefined8 *local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 *local_80;
  longlong local_78;
  undefined8 local_70;
  float local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (((*(char *)(param_1 + 0x860) == '\0') &&
      (puVar6 = (undefined8 *)FUN_1447210f0(), puVar6 != (undefined8 *)0x0)) &&
     ((*(byte *)((longlong)puVar6 + 0x155) & 0x20) == 0)) {
    iVar1 = *(int *)(param_1 + 0x560);
    if ((longlong)iVar1 != 0) {
      lVar7 = *(longlong *)(param_1 + 0x558);
      lVar12 = 0;
      do {
        FUN_141118f36(*(undefined8 *)(lVar7 + lVar12));
        lVar12 = lVar12 + 8;
      } while ((longlong)iVar1 * 8 != lVar12);
    }
    FUN_146626a06(local_c0);
    local_d8 = puVar6;
    FUN_1457aab88(local_a0,local_c0,&local_d8);
    LOCK();
    *(int *)(local_a8 + 8) = *(int *)(local_a8 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_b8 + 8) = *(int *)(local_b8 + 8) + -1;
    UNLOCK();
    local_d8 = local_98;
    local_d0 = local_90;
    LOCK();
    *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
    UNLOCK();
    FUN_140dba91a(&local_d8);
    local_c8 = local_88;
    local_f0 = local_80;
    local_e8 = local_78;
    LOCK();
    *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
    UNLOCK();
    FUN_140dba91a(&local_f0);
    local_e0 = local_70;
    local_110 = local_f0;
    if (local_d8 != local_f0) {
      local_118 = (longlong *)(param_1 + 0x850);
      do {
        puVar6 = local_d8;
        iVar1 = *(int *)(param_1 + 0x560);
        if ((longlong)iVar1 != 0) {
          lVar7 = local_d8[2];
          lVar12 = *(longlong *)(param_1 + 0x558);
          lVar11 = 0;
          do {
            lVar2 = *(longlong *)(lVar12 + lVar11);
            if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0)) {
              local_108 = *(undefined8 *)(lVar7 + 0x260);
              uStack_100 = *(undefined8 *)(lVar7 + 0x268);
              local_f8 = *(undefined8 *)(lVar7 + 0x270);
              plVar3 = *(longlong **)(lVar2 + 0x3a8);
              if (((plVar3 != (longlong *)0x0) &&
                  ((cVar4 = (**(code **)(*plVar3 + 0x7c0))(plVar3,&local_108,&local_64,local_c0),
                   cVar4 != '\0' && (0.0 <= local_64)))) && (local_64 <= 0.0)) {
                if (lVar7 == 0) {
                  uVar9 = 0;
                  uVar10 = 0;
                }
                else {
                  uVar9 = *(uint *)(lVar7 + 0xc);
                  if ((int)uVar9 < DAT_14c9647dc) {
                    lVar7 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
                  }
                  else {
                    lVar7 = 0;
                  }
                  uVar10 = (ulonglong)*(uint *)(lVar7 + 0x10);
                  if (*(uint *)(lVar7 + 0x10) == 0) {
                    LOCK();
                    iVar1 = DAT_14c964868 + 1;
                    UNLOCK();
                    uVar8 = DAT_14c964868 + 1;
                    bVar13 = DAT_14c964868 < 1000;
                    DAT_14c964868 = iVar1;
                    if (bVar13) {
                      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                    L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                    ,uVar8);
                    }
                    LOCK();
                    uVar5 = *(uint *)(lVar7 + 0x10);
                    bVar13 = uVar5 == 0;
                    if (bVar13) {
                      *(uint *)(lVar7 + 0x10) = uVar8;
                      uVar5 = 0;
                    }
                    UNLOCK();
                    if (bVar13) {
                      uVar5 = uVar8;
                    }
                    uVar10 = (ulonglong)uVar5;
                  }
                }
                iVar1 = *(int *)(param_1 + 0x858);
                *(uint *)(param_1 + 0x858) = iVar1 + 1U;
                if (*(uint *)(param_1 + 0x85c) < iVar1 + 1U) {
                  FUN_146626a7a(local_118,iVar1);
                }
                *(ulonglong *)(*local_118 + (longlong)iVar1 * 8) = (ulonglong)uVar9 | uVar10 << 0x20
                ;
                local_110 = local_f0;
                puVar6 = local_d8;
                break;
              }
            }
            lVar11 = lVar11 + 8;
          } while ((longlong)iVar1 * 8 != lVar11);
        }
        local_d8 = (undefined8 *)FUN_140dba96c(*puVar6);
        FUN_140dba91a(&local_d8);
        FUN_140dba8c2(&local_d8);
      } while (local_d8 != local_110);
    }
    LOCK();
    *(int *)(local_e8 + 8) = *(int *)(local_e8 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + -1;
    UNLOCK();
    *(undefined1 *)(param_1 + 0x860) = 1;
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413635c6 FUN_1413635c6 body=245 status=ok
// SIG undefined FUN_1413635c6(void)

bool FUN_1413635c6(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    FUN_1413636bc(param_2,param_1 + 0x88);
    if ((longlong)*(int *)(param_1 + 0x130) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x128);
      lVar6 = (longlong)*(int *)(param_1 + 0x130) * 0xc0 + lVar4;
      do {
        if ((longlong)*(int *)(lVar4 + 0xa8) != 0) {
          plVar3 = *(longlong **)(lVar4 + 0xa0);
          plVar1 = plVar3 + *(int *)(lVar4 + 0xa8);
          do {
            if ((int)param_3[1] != 0) {
              lVar5 = 0;
              do {
                if (*(longlong *)(*param_3 + lVar5) == *plVar3) goto LAB_141363681;
                lVar5 = lVar5 + 8;
              } while ((longlong)(int)param_3[1] << 3 != lVar5);
            }
            if ((longlong)(int)param_3[3] == 0) goto LAB_141363695;
            lVar5 = 0;
            while (*(longlong *)(param_3[2] + lVar5) != *plVar3) {
              lVar5 = lVar5 + 8;
              if ((longlong)(int)param_3[3] * 8 == lVar5) goto LAB_141363695;
            }
LAB_141363681:
            plVar3 = plVar3 + 1;
          } while (plVar3 != plVar1);
        }
        FUN_1413636bc(param_2,lVar4);
LAB_141363695:
        lVar4 = lVar4 + 0xc0;
      } while (lVar4 != lVar6);
    }
  }
  return lVar2 != 0;
}



// FUNCTION 1413636bc FUN_1413636bc body=426 status=ok
// SIG undefined FUN_1413636bc(void)

void FUN_1413636bc(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  FUN_143c990be();
  iVar2 = *(int *)(param_2 + 0x78);
  if (iVar2 == 0) {
    uVar13 = 1;
    uVar14 = 0;
    iVar9 = 0;
    iVar4 = 0;
  }
  else {
    puVar5 = *(uint **)(param_2 + 0x70);
    if (*(uint **)(param_2 + 0x70) == (uint *)0x0) {
      puVar5 = (uint *)(param_2 + 0x60);
    }
    uVar6 = *puVar5;
    if (uVar6 == 0) {
      iVar4 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar4 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar13 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar13 = uVar14;
      }
      iVar9 = 0;
      do {
        if (uVar13 == uVar14) {
          return;
        }
        iVar9 = iVar9 + 0x20;
        uVar6 = puVar5[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar6 == 0);
    }
    else {
      uVar14 = 0;
      iVar9 = 0;
    }
    uVar13 = (ulonglong)(-uVar6 & uVar6);
    uVar1 = uVar13 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar4 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar4) {
      iVar4 = iVar2;
    }
  }
  if (iVar4 != iVar2) {
    uVar6 = 0xffffffff;
    do {
      FUN_143c990be(param_1,*(longlong *)(param_2 + 0x50) + (longlong)iVar4 * 0x60 + 8);
      uVar6 = ~(uint)uVar13 & uVar6;
      puVar5 = *(uint **)(param_2 + 0x70);
      if (*(uint **)(param_2 + 0x70) == (uint *)0x0) {
        puVar5 = (uint *)(param_2 + 0x60);
      }
      iVar3 = *(int *)(param_2 + 0x78);
      iVar4 = (int)uVar14;
      lVar11 = (longlong)iVar4;
      uVar10 = puVar5[lVar11] & uVar6;
      if (uVar10 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar4) {
          iVar8 = iVar4;
        }
        if (iVar4 < iVar7) {
          lVar12 = 0;
          do {
            uVar10 = puVar5[lVar11 + lVar12 + 1];
            if (uVar10 != 0) {
              uVar14 = (ulonglong)(iVar4 + (int)lVar12 + 1);
              uVar6 = 0xffffffff;
              goto LAB_141363811;
            }
            iVar9 = iVar9 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar8 - lVar11 != lVar12);
          uVar6 = 0xffffffff;
          iVar4 = iVar8;
        }
        uVar14 = (ulonglong)(iVar4 + 1);
        iVar4 = iVar3;
      }
      else {
LAB_141363811:
        uVar13 = (ulonglong)(-uVar10 & uVar10);
        uVar1 = uVar13 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar4 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar4) {
          iVar4 = iVar3;
        }
      }
    } while (iVar4 != iVar2);
  }
  return;
}



// FUNCTION 1413638b0 FUN_1413638b0 body=1152 status=ok
// SIG undefined FUN_1413638b0(void)

void FUN_1413638b0(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  int local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1468d96f0;
      local_40 = 0;
      local_48 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_18);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_18);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_18 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_18);
    }
  }
  uStack_20 = 0;
  uStack_1c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1409e12a0;
      local_40 = 0;
      local_48 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
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
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_14067a048;
      local_40 = 0;
      local_48 = 0x28001;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_141363d32(local_18,CONCAT44(uStack_1c,uStack_20),local_24 != 0);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141363d32 FUN_141363d32 body=538 status=ok
// SIG undefined FUN_141363d32(void)

void FUN_141363d32(longlong *param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
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
  longlong local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = param_2;
  if ((param_1 != (longlong *)0x0 && param_2 != 0) && ((char)param_1[0x2f] == '\x03')) {
    if (DAT_14cb56270 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_148630fef;
      local_50 = FUN_1464b6a91;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
    }
    plVar1 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,DAT_14cb56270);
    if (plVar1 != (longlong *)0x0) {
      if (DAT_14cb56270 == 0) {
        local_40 = &local_20;
        local_20 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_148630fef;
        local_50 = FUN_1464b6a91;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
      }
      plVar2 = (longlong *)FUN_144718840(plVar1,DAT_14cb56270);
      if (plVar2 != (longlong *)0x0 && plVar1 != plVar2) {
        lVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
        if (lVar3 != 0) {
          if (param_3 == '\0') {
            FUN_1400bc8c2(lVar3 + 0x90,&local_28);
          }
          else {
            FUN_1400bc96c();
          }
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141363faa FUN_141363faa body=151 status=ok
// SIG undefined FUN_141363faa(void)

void FUN_141363faa(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [40];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    uVar1 = FUN_1447210f0();
    plVar2 = (longlong *)FUN_14007a5e6(uVar1);
    if (plVar2 != (longlong *)0x0) {
      *(undefined1 *)(param_1 + 0x28d9) = 1;
      FUN_1406f1bc8(param_1 + 0xc20,local_58);
      (**(code **)(*plVar2 + 0xe0))(plVar2,local_58);
      if (local_30 != 0) {
        FUN_1400020a8();
      }
      FUN_141364196(param_1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141364042 FUN_141364042 body=339 status=ok
// SIG undefined FUN_141364042(void)

void FUN_141364042(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  char local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x28d8) == '\x01') {
    *(undefined1 *)(param_1 + 0x28d8) = 0;
    uVar2 = FUN_1447210f0();
    plVar3 = (longlong *)FUN_14007a5e6(uVar2);
    if (plVar3 != (longlong *)0x0) {
      cVar1 = *(char *)(*(longlong *)(param_1 + 0x28c0) + 0x596);
      if ((longlong)*(int *)(param_1 + 0x2920) != 0) {
        lVar6 = *(longlong *)(param_1 + 0x2918);
        lVar7 = (longlong)*(int *)(param_1 + 0x2920) * 0x300 + lVar6;
        do {
          plVar4 = (longlong *)FUN_14136441e(lVar6);
          if (*plVar4 != 0) {
            if ((longlong)(int)plVar4[3] != 0) {
              lVar5 = 0;
              do {
                if (*(longlong *)(plVar4[2] + lVar5) == 0) goto LAB_141364123;
                lVar5 = lVar5 + 8;
              } while ((longlong)(int)plVar4[3] * 8 != lVar5);
            }
            if (cVar1 != '\0') {
              *(undefined1 *)(lVar6 + 0xb3) = 1;
            }
            (**(code **)(*plVar3 + 0x10))(plVar3,local_40,lVar6 + 400,lVar6);
            if (local_3c == '\x01') {
              local_3c = '\0';
            }
          }
LAB_141364123:
          lVar6 = lVar6 + 0x300;
        } while (lVar6 != lVar7);
      }
      if (cVar1 == '\0') {
        FUN_141364196(param_1);
      }
    }
    FUN_140771728(*(undefined8 *)(param_1 + 0x2918),*(undefined4 *)(param_1 + 0x2920));
    *(undefined4 *)(param_1 + 0x2920) = 0;
    if (*(int *)(param_1 + 0x2924) != 0) {
      FUN_14592cc3a(param_1 + 0x2918);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141364196 FUN_141364196 body=647 status=ok
// SIG undefined FUN_141364196(void)

void FUN_141364196(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  float fVar9;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined8 *local_c0;
  int local_b8;
  undefined2 local_b0 [2];
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar3 = FUN_1447210f0();
  if (lVar3 != 0) {
    lVar3 = FUN_14011c349();
    fVar9 = 0.01;
    if (0.01 <= *(float *)(lVar3 + 0x67c)) {
      fVar9 = *(float *)(lVar3 + 0x67c);
    }
    lVar3 = FUN_1447210f0(param_1);
    if (*(longlong *)(lVar3 + 0x1f0) == 0) {
      puVar4 = (undefined8 *)(lVar3 + 0x458);
    }
    else {
      puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
    }
    uVar2 = *puVar4;
    local_c0 = (undefined8 *)0x0;
    local_b8 = 0;
    FUN_1446efa72(&local_c0,0,3,0x10);
    puVar4 = local_c0;
    local_b8 = 3;
    *local_c0 = &PTR_LAB_14a1c8830;
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
    local_c0[2] = lVar5;
    *local_c0 = &PTR_FUN_14b97a700;
    local_c0[3] = 0;
    iVar7 = 0;
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_c0 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      iVar7 = *(int *)(lVar3 + 0x10);
      if (*(int *)(lVar3 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar6 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar6);
        }
        LOCK();
        iVar7 = *(int *)(lVar3 + 0x10);
        bVar8 = iVar7 == 0;
        if (bVar8) {
          *(int *)(lVar3 + 0x10) = iVar6;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar7 = iVar6;
        }
      }
    }
    *(int *)((longlong)puVar4 + 0x1c) = iVar7;
    puVar4[4] = FUN_1413646c2;
    *(undefined4 *)(puVar4 + 5) = 0;
    local_a8 = 0;
    local_a0 = 0;
    FUN_14487d8d8(&local_a8,&local_c0);
    local_68 = 1;
    local_c8 = local_b0;
    local_b0[0] = 0;
    local_ac = 0xbf800000;
    FUN_1406f4044(uVar2,param_1 + 0x28e0,&local_a8,fVar9);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
    if (local_b8 != 0) {
      if (local_c0 == (undefined8 *)0x0) goto LAB_141364340;
      (**(code **)*local_c0)(local_c0,0);
      FUN_1446efa72(&local_c0,0,0,0x10);
      local_b8 = 0;
    }
    if (local_c0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_141364340:
  if ((local_50 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14136441e FUN_14136441e body=675 status=ok
// SIG undefined FUN_14136441e(void)

longlong FUN_14136441e(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_138 [40];
  undefined1 local_110 [216];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(longlong *)(param_1 + 400) != 0) {
    if ((longlong)*(int *)(param_1 + 0x1a8) != 0) {
      lVar6 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x1a0) + lVar6) == 0) goto LAB_1413644ac;
        lVar6 = lVar6 + 8;
      } while ((longlong)*(int *)(param_1 + 0x1a8) * 8 != lVar6);
    }
    goto LAB_14136447f;
  }
LAB_1413644ac:
  if ((*(int *)(param_1 + 0x298) < 1) || (*(longlong *)(param_1 + 0x2a0) == 0)) goto LAB_14136447f;
  FUN_140368c94(param_1 + 0x298,local_110,(char *)(param_1 + 0x268),param_2);
  FUN_140a6a9d4(param_1 + 400,local_110);
  FUN_140368b56(local_110);
  if (*(char *)(param_1 + 0x268) == '\x03') {
    plVar5 = *(longlong **)(param_1 + 0x278);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
    }
  }
  else if (*(char *)(param_1 + 0x268) == '\x01') {
    *(undefined8 *)(param_1 + 0x270) = 0;
  }
  cVar3 = DAT_14c9a40e0;
  *(char *)(param_1 + 0x268) = DAT_14c9a40e0;
  if (cVar3 == '\x01') {
    plVar5 = &DAT_14c9a40e8;
LAB_141364522:
    lVar6 = *plVar5;
    *(undefined1 *)(param_1 + 0x268) = 2;
    *(undefined8 *)(param_1 + 0x270) = 0;
    if (lVar6 == 0) {
      iVar4 = 0;
    }
    else {
      uVar2 = *(uint *)(lVar6 + 0xc);
      *(uint *)(param_1 + 0x270) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      iVar4 = *(int *)(lVar6 + 0x10);
      if (*(int *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar4 = *(int *)(lVar6 + 0x10);
        bVar8 = iVar4 == 0;
        if (bVar8) {
          *(int *)(lVar6 + 0x10) = iVar7;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar4 = iVar7;
        }
      }
    }
    *(int *)(param_1 + 0x274) = iVar4;
  }
  else if (cVar3 == '\x02') {
    *(undefined8 *)(param_1 + 0x270) = DAT_14c9a40e8;
  }
  else if (cVar3 == '\x03') {
    *(undefined8 *)(param_1 + 0x270) = DAT_14c9a40e8;
    lVar6 = DAT_14c9a40f0;
    *(longlong *)(param_1 + 0x278) = DAT_14c9a40f0;
    if (lVar6 == 0) {
      *(undefined8 *)(param_1 + 0x280) = DAT_14c9a40f8;
      *(undefined1 *)(param_1 + 0x288) = DAT_14c9a4100;
    }
    else {
      LOCK();
      piVar1 = (int *)(lVar6 + 0xc);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      *(undefined8 *)(param_1 + 0x280) = DAT_14c9a40f8;
      *(undefined1 *)(param_1 + 0x288) = DAT_14c9a4100;
      if (*(char *)(param_1 + 0x268) == '\x01') {
        plVar5 = (longlong *)(param_1 + 0x270);
        goto LAB_141364522;
      }
    }
  }
  FUN_14495544a(param_1 + 0x290,&DAT_14c9a4108);
  FUN_1418959ae(param_1 + 0x298);
LAB_14136447f:
  if ((local_38 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1 + 400;
}



// FUNCTION 1413646c2 FUN_1413646c2 body=762 status=ok
// SIG undefined FUN_1413646c2(void)

void FUN_1413646c2(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  undefined4 local_160;
  longlong local_150;
  longlong local_148;
  undefined8 uStack_140;
  longlong local_138 [12];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined2 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((*(longlong *)(param_1 + 0x28e0) != 0) && (lVar5 = FUN_1447210f0(param_1), lVar5 != 0)) {
    puVar1 = (undefined8 *)(param_1 + 0x28e0);
    lVar5 = FUN_1447210f0(param_1);
    if (*(longlong *)(lVar5 + 0x1f0) == 0) {
      puVar8 = (undefined8 *)(lVar5 + 0x458);
    }
    else {
      puVar8 = (undefined8 *)(*(longlong *)(lVar5 + 0x1f0) + 0xf0);
    }
    uVar6 = *puVar8;
    lVar5 = FUN_144a61814(uVar6,puVar1);
    if (lVar5 != 0) {
      FUN_1405a424c(uVar6,*puVar1);
    }
    *puVar1 = 0;
  }
  if (*(char *)(param_1 + 0x178) == '\x03') {
    uVar6 = FUN_1447210f0(param_1);
    plVar7 = (longlong *)FUN_14007a5e6(uVar6);
    if (plVar7 != (longlong *)0x0) {
      local_148 = 0;
      uStack_140 = 0;
      FUN_1406f1bc8(param_1 + 0xc20,local_138);
      (**(code **)(*plVar7 + 0x68))(plVar7,local_138,&local_148);
      if (local_138[5] != 0) {
        FUN_1400020a8();
      }
      if (((0 < (int)uStack_140) && (lVar5 = FUN_14592cd0e(param_1), lVar5 != 0)) &&
         (plVar3 = *(longlong **)(lVar5 + 0x3c0), plVar3 != (longlong *)0x0)) {
        uVar6 = FUN_14007a696();
        lVar5 = (**(code **)(*plVar3 + 0x288))(plVar3,uVar6);
        if (lVar5 != 0) {
          uVar6 = FUN_14007a696();
          local_150 = FUN_144718840(lVar5,uVar6);
          if ((lVar5 != local_150) && (local_150 != 0)) {
            FUN_14592cc6a(local_148,local_148 + (longlong)(int)uStack_140 * 4,local_138);
            lVar5 = local_148;
            lVar10 = (longlong)(int)uStack_140;
            if (lVar10 != 0) {
              lVar9 = 0;
              do {
                uVar2 = *(undefined4 *)(lVar5 + lVar9);
                local_d8 = 0;
                local_d0 = 0;
                local_138[0] = 0;
                local_138[1] = 0;
                local_138[2] = 0;
                local_138[3] = 0;
                local_138[4] = 0;
                local_138[5] = 0;
                local_138[6] = 0;
                local_138[7] = 0;
                local_138[8] = 0;
                local_138[9] = 0;
                local_cc = 0xffffffff00000080;
                local_c4 = 0;
                local_b8 = 0;
                local_b0 = 0;
                local_88 = 0;
                local_98 = 0;
                uStack_90 = 0;
                local_a8 = 0;
                uStack_a0 = 0;
                local_80 = 0xf;
                local_78 = 1;
                local_74 = 0;
                uStack_6c = 0;
                cVar4 = (**(code **)(*plVar7 + 0x70))(plVar7,uVar2);
                if (((cVar4 != '\0') && (local_138[0] != 0)) &&
                   (*(char *)(local_138[0] + 0x279) != '\x01')) {
                  local_160 = 0;
                  local_168 = 0;
                  (**(code **)(*plVar7 + 0x30))(plVar7,uVar2,local_150,0x40);
                }
                FUN_140368b56(local_138);
                lVar9 = lVar9 + 4;
              } while (lVar10 * 4 != lVar9);
            }
          }
        }
      }
      if (local_148 != 0) {
        FUN_1400020a8(local_148);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413649be FUN_1413649be body=139 status=ok
// SIG undefined FUN_1413649be(void)

longlong FUN_1413649be(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  if (*(int *)(param_2 + 0x54) < *(int *)(param_2 + 0x28)) {
    lVar1 = *(longlong *)(param_1 + 0x8d0);
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar4 = (uint)lVar1 & 0xffff;
    lVar3 = param_2 + 0x58;
    if (*(longlong *)(param_2 + 0x60) != 0) {
      lVar3 = *(longlong *)(param_2 + 0x60);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_2 + 0x68) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar4) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 == -1) {
      lVar3 = 0;
    }
    else {
      do {
        bVar6 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 0x10) == lVar1;
        lVar3 = CONCAT71((int7)((ulonglong)lVar3 >> 8),bVar6);
        if (bVar6) {
          return lVar3;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x10 + *(longlong *)(param_2 + 0x20) + 8);
      } while (iVar5 != -1);
    }
  }
  else {
    lVar3 = CONCAT71((uint7)(uint3)((uint)*(int *)(param_2 + 0x28) >> 8),1);
  }
  return lVar3;
}



// FUNCTION 141364a4a FUN_141364a4a body=534 status=ok
// SIG undefined FUN_141364a4a(void)

longlong * FUN_141364a4a(longlong *param_1,longlong *param_2,undefined4 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  byte bVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_68 [40];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2f0))();
  if (param_4 == -1) {
    param_4 = FUN_14358c06e(param_1,param_2);
    if (param_4 == -1) {
      if (*(char *)((longlong)param_1 + 0x1c9c) == '\0') {
        *(undefined1 *)((longlong)param_1 + 0x1c9c) = 1;
      }
      plVar5 = (longlong *)0x0;
      goto LAB_141364c00;
    }
  }
  plVar5 = (longlong *)FUN_1408e7b94(param_1[0xb],param_2);
  (**(code **)(*plVar5 + 0x2a0))(plVar5,param_1,param_4,param_3);
  lVar1 = param_1[0x27e];
  if (plVar5 != (longlong *)0x0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(plVar5);
  }
  bVar4 = DAT_14c950c29;
  *(longlong **)(lVar1 + (longlong)param_4 * 8) = plVar5;
  if ((plVar5 != (longlong *)0x0) && ((bVar4 & 1) != 0)) {
    FUN_1456cec3c(plVar5);
  }
  iVar8 = (int)param_1[0xf];
  *(uint *)(param_1 + 0xf) = iVar8 + 1U;
  if (*(uint *)((longlong)param_1 + 0x7c) < iVar8 + 1U) {
    FUN_1405f7400(param_1 + 0xe,iVar8);
  }
  *(longlong **)(param_1[0xe] + (longlong)iVar8 * 8) = plVar5;
  if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(plVar5);
  }
  lVar1 = param_1[0xb];
  if (*(int *)(lVar1 + 0x220) != *(int *)(lVar1 + 0x24c)) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar7 = (uint)lVar2 & 0xffff;
    lVar6 = lVar1 + 0x250;
    if (*(longlong *)(lVar1 + 600) != 0) {
      lVar6 = *(longlong *)(lVar1 + 600);
    }
    iVar8 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(lVar1 + 0x260) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar7) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar8 != -1) {
      do {
        lVar6 = *(longlong *)(lVar1 + 0x218) + (longlong)iVar8 * 0x80;
        if (*(longlong *)(*(longlong *)(lVar1 + 0x218) + (longlong)iVar8 * 0x80) == lVar2)
        goto LAB_141364bbf;
        iVar8 = *(int *)(lVar6 + 0x78);
      } while (iVar8 != -1);
    }
  }
  lVar6 = 0;
LAB_141364bbf:
  if ((*(byte *)(lVar6 + 0x24) & 1) != 0) {
    local_40 = plVar5;
    if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(plVar5);
    }
    FUN_1405f6d44(param_1 + 0x2d9,&local_40);
  }
LAB_141364c00:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141364c62 FUN_141364c62 body=265 status=ok
// SIG undefined FUN_141364c62(void)

undefined * FUN_141364c62(void)

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
              0x110) < DAT_14c9c02e0) {
    FUN_144b3d300(&DAT_14c9c02e0);
    if (DAT_14c9c02e0 == -1) {
      FUN_141364d6c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FRadianceCacheInterpolationParameters";
      local_38 = 0;
      local_50 = 0x170;
      local_58 = 0x28;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c0260,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b8dfa3);
      _Init_thread_footer(&DAT_14c9c02e0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9c0260;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141364d6c FUN_141364d6c body=226 status=ok
// SIG undefined FUN_141364d6c(void)

longlong * FUN_141364d6c(longlong *param_1)

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
  pcVar13 = FUN_1462b6cb0;
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



// FUNCTION 141364e50 FUN_141364e50 body=508 status=ok
// SIG undefined FUN_141364e50(void)

void FUN_141364e50(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  longlong param_5,undefined1 param_6,undefined1 param_7)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong in_stack_ffffffffffffff88;
  
  if ((longlong)*(int *)(param_1 + 0x30) < 1) {
    if (*(longlong *)(param_2 + 0x1c8) == 0) {
      lVar4 = FUN_147d11ede(param_2);
      FUN_144757f48(lVar4,8);
      *(undefined1 *)(lVar4 + 0xb9) = 1;
      if (param_5 != 0) {
        FUN_147a04096(lVar4,param_5);
      }
      FUN_140613f88(lVar4,param_4,0,0,in_stack_ffffffffffffff88 & 0xffffffffffffff00);
      FUN_14092e51e(param_2,lVar4);
      FUN_140b506a4(lVar4);
      return;
    }
  }
  else {
    lVar4 = *(longlong *)(param_2 + 0x1c8);
    plVar7 = *(longlong **)(param_1 + 0x28);
    plVar1 = plVar7 + *(int *)(param_1 + 0x30);
    do {
      lVar2 = *plVar7;
      if ((lVar2 != 0) && ((lVar4 == 0 || (*(longlong *)(param_1 + 0x48) != lVar2)))) {
        lVar6 = *(longlong *)(lVar2 + 0x88);
        if (lVar6 == 0) {
LAB_141364ecc:
          lVar9 = 0;
        }
        else {
          if (*(char *)(lVar2 + 0x98) != '\x01') {
            plVar5 = (longlong *)FUN_1408c92bc(*(undefined8 *)(param_2 + 0x10),lVar6,3);
            if ((plVar5 != (longlong *)0x0) &&
               (lVar9 = (**(code **)(*plVar5 + 0x220))(plVar5,param_2,0), lVar9 != 0)) {
              lVar6 = FUN_144a799b0();
              if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) goto LAB_141364ecf;
            }
            goto LAB_141364ecc;
          }
          lVar3 = *(longlong *)(param_3 + 0xc0);
          if (*(longlong *)(param_3 + 0xc0) == 0) {
            lVar3 = param_3;
          }
          if ((longlong)*(int *)(param_3 + 200) == 0) goto LAB_141364ecc;
          lVar8 = 0;
          do {
            lVar9 = *(longlong *)(lVar3 + lVar8);
            if (*(longlong *)(lVar9 + 0x18) == lVar6) break;
            lVar8 = lVar8 + 8;
            lVar9 = 0;
          } while ((longlong)*(int *)(param_3 + 200) * 8 != lVar8);
        }
LAB_141364ecf:
        if (lVar9 == 0) {
          lVar9 = lVar4;
        }
        FUN_14136504c(lVar2,param_2,lVar9,param_4,param_5,param_6,param_7);
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar1);
  }
  return;
}



// FUNCTION 14136504c FUN_14136504c body=4261 status=ok
// SIG undefined FUN_14136504c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_14136504c(longlong param_1,longlong *param_2,longlong *param_3,double *param_4,longlong param_5,
             char param_6,char param_7)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  undefined4 uVar5;
  undefined4 extraout_EAX;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  double *pdVar12;
  undefined4 uVar13;
  byte bVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  double extraout_XMM0_Qb;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar23;
  double dVar24;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  undefined1 auVar30 [16];
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  double dVar38;
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar43;
  undefined1 auVar44 [16];
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  undefined1 auVar49 [16];
  double dVar50;
  undefined1 auVar51 [16];
  double dVar52;
  double dVar53;
  double dVar54;
  undefined1 auVar55 [16];
  double dVar56;
  double dVar59;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auStack_2f8 [32];
  ulonglong local_2d8;
  uint local_2d0;
  uint local_2c8;
  undefined8 local_2c0;
  wchar_t *local_2b8;
  undefined1 *local_2b0;
  undefined1 *local_2a8;
  code **local_2a0;
  code *local_298;
  code *local_290;
  double local_288;
  double dStack_280;
  double local_278;
  undefined8 uStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  undefined8 uStack_250;
  undefined1 local_248 [16];
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8 [2];
  undefined1 local_1e8 [16];
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  code *local_178;
  double local_170;
  double local_168;
  double dStack_160;
  double local_158;
  double local_150;
  double local_148;
  double dStack_140;
  double local_138;
  double local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  lVar7 = param_2[2];
  if (((*(byte *)(lVar7 + 0x25c) & 1) == 0) || (DAT_14cace958 != 0)) {
LAB_1413650f9:
    lVar7 = FUN_1417ed78e(param_1,lVar7);
    if (lVar7 != 0) {
      plVar8 = (longlong *)FUN_1412bcf36(param_2,lVar7,*(undefined8 *)(param_1 + 0xd0));
      goto LAB_14136511f;
    }
  }
  else {
    lVar10 = FUN_147cf2544(param_1,lVar7);
    if ((lVar10 == 0) ||
       ((*(char *)(lVar10 + 0x21) != '\x01' || (*(longlong *)(lVar10 + 0x10) == 0))))
    goto LAB_1413650f9;
    plVar8 = (longlong *)FUN_1433bbc20(param_2,lVar10,*(undefined8 *)(param_1 + 0xd0));
LAB_14136511f:
    if (plVar8 != (longlong *)0x0) {
      *(undefined1 *)((longlong)plVar8 + 0xb9) = 1;
      *(byte *)((longlong)plVar8 + 0x9c) = *(byte *)((longlong)plVar8 + 0x9c) | 0x20;
      if ((*(byte *)((longlong)plVar8 + 0x9f) & 4) == 0) {
        (**(code **)(*plVar8 + 0x428))(plVar8);
      }
      if (DAT_14cac7648 == 0) {
        local_2a0 = &local_178;
        local_178 = FUN_144a7958c;
        local_290 = FUN_14081d0ea;
        local_298 = FUN_143242436;
        local_2a8 = &LAB_14789ef1f;
        local_2b0 = &LAB_1417b008f;
        local_2b8 = L"Engine";
        local_2c0 = 0x8000000000;
        local_2c8 = 0x10000004;
        local_2d0 = 0x10;
        local_2d8 = CONCAT44(local_2d8._4_4_,0x2b0);
        FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
      }
      if ((*(int *)(DAT_14cac7648 + 0x38) <= *(int *)(plVar8[2] + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(plVar8[2] + 0x30) + (longlong)*(int *)(DAT_14cac7648 + 0x38) * 8) ==
          DAT_14cac7648 + 0x30)) {
        uVar9 = FUN_1447210f0(param_2);
        if (uVar9 == 0) {
          bVar14 = 0;
        }
        else {
          bVar14 = (*(byte *)(uVar9 + 0x153) & 0x40) >> 6;
        }
        if (param_3 == (longlong *)0x0) {
LAB_141365213:
          dVar16 = (double)CONCAT71((int7)(uVar9 >> 8),param_7);
          pdVar12 = local_1f8;
          for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
            *pdVar12 = *param_4;
            param_4 = param_4 + 1;
            pdVar12 = pdVar12 + 1;
          }
          if (param_7 == '\x01') {
            dVar1 = (double)plVar8[0x39];
            dVar15 = (double)plVar8[0x3a];
            dVar2 = (double)plVar8[0x3b];
            local_258 = (double)plVar8[0x33];
            uStack_250 = 0;
            dVar25 = (double)plVar8[0x34];
            dVar46 = (double)plVar8[0x35];
            auVar57 = *(undefined1 (*) [16])(plVar8 + 0x36);
            dVar36 = auVar57._0_8_;
            dVar23 = auVar57._8_8_;
            dVar24 = (double)plVar8[0x38];
            pdVar12 = (double *)plVar8[0x46];
            uVar13 = 0;
            if (pdVar12 == (double *)0x0) {
              uVar13 = 0x40;
              pdVar12 = (double *)FUN_14001cc68(0x40,0x10);
              dVar16 = DAT_14c8463d8;
              *pdVar12 = DAT_14c8463d0;
              pdVar12[1] = dVar16;
              dVar16 = DAT_14c8463e8;
              pdVar12[2] = DAT_14c8463e0;
              pdVar12[3] = dVar16;
              dVar16 = DAT_14c846500;
              pdVar12[4] = DAT_14c8464f8;
              pdVar12[5] = dVar16;
              dVar16 = DAT_14c846508;
              pdVar12[6] = DAT_14c846508;
              plVar8[0x46] = (longlong)pdVar12;
            }
            auVar19 = _DAT_1499387d0;
            uVar5 = SUB84(dVar16,0);
            local_288 = dVar25;
            if (((((pdVar12[4] != dVar36) || (NAN(pdVar12[4]) || NAN(dVar36))) ||
                 (pdVar12[5] != dVar23)) ||
                ((NAN(pdVar12[5]) || NAN(dVar23) || (pdVar12[6] != dVar24)))) ||
               (NAN(pdVar12[6]) || NAN(dVar24))) {
              auVar32._8_8_ = 0;
              auVar32._0_8_ = dVar24;
              dVar16 = (double)DAT_1499387d0;
              dVar25 = DAT_1499387d0._8_8_;
              auVar57 = divpd(auVar57,_DAT_1499387d0);
              auVar26 = divpd(auVar32,_DAT_1499387d0);
              auVar57 = roundpd(auVar57,auVar57,3);
              auVar26 = roundpd(auVar26,auVar26,3);
              auVar44._0_8_ = dVar36 - auVar57._0_8_ * dVar16;
              auVar44._8_8_ = dVar23 - auVar57._8_8_ * dVar25;
              auVar33._0_8_ = dVar24 - auVar26._0_8_ * dVar16;
              auVar33._8_8_ = 0.0 - auVar26._8_8_ * dVar25;
              auVar41._0_8_ = auVar44._0_8_ + dVar16;
              auVar41._8_8_ = auVar44._8_8_ + dVar25;
              auVar30._0_8_ = auVar33._0_8_ + dVar16;
              auVar30._8_8_ = auVar33._8_8_ + dVar25;
              auVar57._8_8_ = -(ulonglong)(0.0 <= auVar44._8_8_);
              auVar57._0_8_ = -(ulonglong)(0.0 <= auVar44._0_8_);
              auVar42 = blendvpd(auVar41,auVar44,auVar57);
              auVar26._8_8_ = -(ulonglong)(0.0 <= auVar33._8_8_);
              auVar26._0_8_ = -(ulonglong)(0.0 <= auVar33._0_8_);
              auVar57 = blendvpd(auVar30,auVar33,auVar26);
              auVar34._0_8_ = auVar42._0_8_ + -360.0;
              auVar34._8_8_ = auVar42._8_8_ + -360.0;
              auVar37._0_8_ = auVar57._0_8_ + -360.0;
              auVar37._8_8_ = auVar57._8_8_ + 0.0;
              auVar17._8_8_ = -(ulonglong)(180.0 < auVar42._8_8_);
              auVar17._0_8_ = -(ulonglong)(180.0 < auVar42._0_8_);
              auVar26 = blendvpd(auVar42,auVar34,auVar17);
              auVar42._8_8_ = -(ulonglong)(180.0 < auVar57._8_8_);
              auVar42._0_8_ = -(ulonglong)(180.0 < auVar57._0_8_);
              auVar57 = blendvpd(auVar57,auVar37,auVar42);
              *(undefined1 (*) [16])(pdVar12 + 4) = auVar26;
              dVar24 = auVar57._0_8_;
              pdVar12[6] = dVar24;
              auVar51._8_8_ = 0;
              auVar51._0_8_ = dVar24;
              auVar57 = divpd(auVar26,auVar19);
              auVar19 = divpd(auVar51,auVar19);
              auVar57 = roundpd(auVar57,auVar57,3);
              auVar19 = roundpd(auVar19,auVar19,3);
              dVar36 = (auVar26._0_8_ - auVar57._0_8_ * dVar16) * 0.008726646259971648;
              dVar29 = (auVar26._8_8_ - auVar57._8_8_ * dVar25) * 0.008726646259971648;
              dVar16 = (dVar24 - auVar19._0_8_ * dVar16) * 0.008726646259971648;
              dVar24 = (0.0 - auVar19._8_8_ * dVar25) * 0.008726646259971648;
              dVar25 = sin(dVar36);
              dVar23 = sin(dVar29);
              uStack_270 = 0;
              local_278 = dVar15;
              local_268 = sin(dVar16);
              dStack_280 = 0.0;
              dStack_260 = extraout_XMM0_Qb;
              sin(dVar24);
              dVar15 = cos(dVar36);
              dVar29 = cos(dVar29);
              dVar31 = cos(dVar16);
              cos(dVar24);
              dVar24 = -(dVar29 * dVar25 * local_268) + dVar23 * dVar15 * dVar31;
              dVar36 = dVar23 * dVar25 * local_268 + dVar29 * dVar15 * dVar31;
              dVar16 = dVar25 * dVar23 * dVar31 - dVar15 * dVar29 * local_268;
              dVar25 = -(dVar25 * dVar29 * dVar31) - dVar15 * dVar23 * local_268;
              *pdVar12 = dVar16;
              pdVar12[1] = dVar25;
              pdVar12[2] = dVar24;
              pdVar12[3] = dVar36;
              uVar5 = extraout_EAX;
              dVar15 = local_278;
            }
            else {
              dVar16 = *pdVar12;
              dVar25 = pdVar12[1];
              dVar24 = pdVar12[2];
              dVar36 = pdVar12[3];
            }
            auVar57 = _DAT_149934d80;
            uStack_270 = 0;
            auVar49._8_8_ = 0;
            auVar49._0_8_ = dVar2;
            auVar19._8_8_ = dStack_1b0;
            auVar19._0_8_ = local_1b8;
            auVar3._8_8_ = dStack_1a0;
            auVar3._0_8_ = local_1a8;
            auVar18._8_8_ = dVar15;
            auVar18._0_8_ = dVar1;
            auVar19 = minpd(auVar18,auVar19);
            auVar26 = minpd(auVar49,auVar3);
            auVar20._8_8_ = -(ulonglong)(auVar19._8_8_ < 0.0);
            auVar20._0_8_ = -(ulonglong)(auVar19._0_8_ < 0.0);
            iVar6 = movmskpd(uVar5,auVar20);
            auVar27._8_8_ = -(ulonglong)(auVar26._8_8_ < 0.0);
            auVar27._0_8_ = -(ulonglong)(auVar26._0_8_ < 0.0);
            uVar4 = movmskpd(uVar13,auVar27);
            local_278 = dVar46;
            if ((uVar4 & 0x3fffffff) == 0 && iVar6 == 0) {
              dVar23 = dVar25 * (double)local_1e8._0_8_ * -1.0 +
                       dVar24 * local_1f8[1] +
                       dVar36 * local_1f8[0] * 1.0 + dVar16 * (double)local_1e8._8_8_;
              dVar29 = dVar16 * (double)local_1e8._0_8_ * 1.0 +
                       dVar36 * local_1f8[1] +
                       dVar24 * local_1f8[0] * -1.0 + dVar25 * (double)local_1e8._8_8_;
              auVar55._0_8_ =
                   dVar36 * (double)local_1e8._0_8_ * 1.0 +
                   ((local_1f8[0] * dVar25 * 1.0 + dVar24 * (double)local_1e8._8_8_) -
                   dVar16 * local_1f8[1]);
              auVar55._8_8_ =
                   dVar24 * (double)local_1e8._0_8_ * -1.0 +
                   ((local_1f8[0] * dVar16 * -1.0 + dVar36 * (double)local_1e8._8_8_) -
                   dVar25 * local_1f8[1]);
              dVar35 = local_258 * local_1b8;
              local_288 = local_288 * dStack_1b0;
              dVar46 = dVar46 * local_1a8;
              dVar31 = dStack_1a0 * 0.0;
              dVar16 = local_288 * local_1f8[0] - dVar35 * local_1f8[1];
              dVar25 = dVar46 * local_1f8[1] - local_288 * (double)local_1e8._0_8_;
              dVar24 = dVar35 * (double)local_1e8._0_8_ - dVar46 * local_1f8[0];
              dVar36 = dVar31 * (double)local_1e8._8_8_ - dVar31 * (double)local_1e8._8_8_;
              dVar25 = dVar25 + dVar25;
              dVar24 = dVar24 + dVar24;
              dVar16 = dVar16 + dVar16;
              dVar36 = dVar36 + dVar36;
              local_1d8 = (dVar16 * local_1f8[1] - (double)local_1e8._0_8_ * dVar24) +
                          (double)local_1e8._8_8_ * dVar25 + dVar35 + local_1d8;
              dStack_1d0 = (dVar25 * (double)local_1e8._0_8_ - dVar16 * local_1f8[0]) +
                           (double)local_1e8._8_8_ * dVar24 + local_288 + dStack_1d0;
              local_1c8 = (dVar24 * local_1f8[0] - local_1f8[1] * dVar25) +
                          (double)local_1e8._8_8_ * dVar16 + dVar46 + local_1c8;
              dStack_1c0 = (dVar36 * (double)local_1e8._8_8_ - dVar36 * (double)local_1e8._8_8_) +
                           (double)local_1e8._8_8_ * dVar36 + dVar31 + dStack_1c0;
              local_288 = dVar1;
              dStack_280 = dVar15;
            }
            else {
              dVar23 = local_1f8[1] + local_1f8[1];
              dVar35 = (double)local_1e8._0_8_ + (double)local_1e8._0_8_;
              dVar39 = local_1f8[0] * (local_1f8[0] + local_1f8[0]);
              dVar43 = local_1f8[1] * dVar23;
              local_218 = local_258;
              dVar38 = (local_1f8[0] + local_1f8[0]) * (double)local_1e8._8_8_;
              local_268 = dVar2 * local_1a8;
              dStack_260 = dStack_1a0 * 0.0;
              local_238 = (1.0 - (dVar39 + dVar43)) * local_1a8;
              dStack_230 = (0.0 - (dVar39 + dVar43)) * dStack_1a0;
              dVar40 = (dVar23 * (double)local_1e8._8_8_ + local_1f8[0] * dVar35) * local_1a8;
              dVar29 = (dVar23 * local_1f8[0] - dVar35 * (double)local_1e8._8_8_) * dStack_1b0;
              dVar31 = (dVar35 * local_1f8[1] - dVar38) * local_1a8;
              local_208 = dVar1 * local_1b8;
              dStack_200 = dVar15 * dStack_1b0;
              dVar50 = (1.0 - ((double)local_1e8._0_8_ * dVar35 + dVar43)) * local_1b8;
              dVar52 = (1.0 - ((double)local_1e8._0_8_ * dVar35 + dVar39)) * dStack_1b0;
              dVar56 = (dVar23 * local_1f8[0] + dVar35 * (double)local_1e8._8_8_) * local_1b8;
              dVar59 = (dVar35 * local_1f8[1] + dVar38) * dStack_1b0;
              dVar47 = (local_1f8[0] * dVar35 - dVar23 * (double)local_1e8._8_8_) * local_1b8;
              dVar39 = dVar25 + dVar25;
              dVar48 = dVar24 + dVar24;
              local_228 = dVar16 * (dVar16 + dVar16);
              dStack_220 = dVar25 * dVar39;
              dVar45 = (dVar16 + dVar16) * dVar36;
              dVar35 = (dVar39 * dVar16 - dVar48 * dVar36) * dVar15;
              dVar38 = (dVar48 * dVar25 - dVar45) * dVar2;
              dVar23 = (1.0 - (dVar24 * dVar48 + dStack_220)) * dVar1;
              dVar24 = (1.0 - (dVar24 * dVar48 + local_228)) * dVar15;
              dVar43 = (dVar39 * dVar16 + dVar48 * dVar36) * dVar1;
              dVar45 = (dVar48 * dVar25 + dVar45) * dVar15;
              dVar25 = (dVar48 * dVar16 - dVar39 * dVar36) * dVar1;
              dStack_280 = 0.0;
              dVar36 = (dVar39 * dVar36 + dVar48 * dVar16) * dVar2;
              dVar16 = (1.0 - (local_228 + dStack_220)) * dVar2;
              local_118 = dVar40 * dVar46 + dVar29 * local_288 + dVar50 * local_258 + local_1d8;
              dStack_110 = dVar31 * dVar46 + dVar52 * local_288 + dVar56 * local_258 + dStack_1d0;
              local_1d8 = local_1d8 * 0.0;
              dStack_1d0 = dStack_1d0 * 0.0;
              local_108 = dVar46 * local_238 + local_288 * dVar59 + local_258 * dVar47 + local_1c8;
              dStack_100 = dVar46 * 0.0 + local_288 * 0.0 + local_258 * 0.0 + 1.0;
              local_1c8 = local_1c8 * 0.0;
              dVar53 = dVar25 * dVar40 + dVar43 * dVar29 + dVar23 * dVar50 + local_1d8;
              dVar54 = dVar25 * dVar31 + dVar43 * dVar52 + dVar23 * dVar56 + dStack_1d0;
              dVar48 = dVar25 * local_238 + dVar43 * dVar59 + dVar23 * dVar47 + local_1c8;
              dStack_160 = dVar25 * 0.0 + dVar43 * 0.0 + dVar23 * 0.0 + 0.0;
              dVar39 = dVar45 * dVar40 + dVar24 * dVar29 + dVar35 * dVar50 + local_1d8;
              dVar43 = dVar45 * dVar31 + dVar24 * dVar52 + dVar35 * dVar56 + dStack_1d0;
              dVar23 = dVar45 * local_238 + dVar24 * dVar59 + dVar35 * dVar47 + local_1c8;
              dStack_140 = dVar45 * 0.0 + dVar24 * 0.0 + dVar35 * 0.0 + 0.0;
              local_1d8 = dVar16 * dVar40 + dVar38 * dVar29 + dVar36 * dVar50 + local_1d8;
              dStack_1d0 = dVar16 * dVar31 + dVar38 * dVar52 + dVar36 * dVar56 + dStack_1d0;
              local_1c8 = dVar16 * local_238 + dVar38 * dVar59 + dVar36 * dVar47 + local_1c8;
              dStack_120 = dVar16 * 0.0 + dVar38 * 0.0 + dVar36 * 0.0 + 0.0;
              dVar16 = dVar48 * dVar48 + dVar53 * dVar53 + dVar54 * dVar54;
              dVar25 = dVar23 * dVar23 + dVar39 * dVar39 + dVar43 * dVar43;
              dVar46 = local_1c8 * local_1c8 + local_1d8 * local_1d8 + dStack_1d0 * dStack_1d0;
              uVar9 = -(ulonglong)(0.0 <= dVar16 + -9.99999993922529e-09);
              dVar16 = (double)(~uVar9 & 0x3ff0000000000000 |
                               (ulonglong)(1.0 / SQRT(dVar16)) & uVar9);
              uVar9 = -(ulonglong)(0.0 <= dVar25 + -9.99999993922529e-09);
              dVar25 = (double)(~uVar9 & 0x3ff0000000000000 |
                               (ulonglong)(1.0 / SQRT(dVar25)) & uVar9);
              uVar9 = -(ulonglong)(0.0 <= dVar46 + -9.99999993922529e-09);
              dVar46 = (double)(~uVar9 & 0x3ff0000000000000 |
                               (ulonglong)(1.0 / SQRT(dVar46)) & uVar9);
              auVar21._8_8_ = -(ulonglong)(0.0 <= dStack_200);
              auVar21._0_8_ = -(ulonglong)(0.0 <= local_208);
              auVar19 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar21);
              local_138 = (double)(~-(ulonglong)(0.0 <= local_268) & 0xbff0000000000000 |
                                  -(ulonglong)(0.0 <= local_268) & 0x3ff0000000000000);
              local_168 = auVar19._0_8_;
              local_178 = (code *)(dVar53 * dVar16 * local_168);
              local_170 = dVar54 * dVar16 * local_168;
              local_168 = dVar16 * dVar48 * local_168;
              local_158 = auVar19._8_8_;
              local_148 = dVar25 * dVar23 * local_158;
              local_150 = dVar43 * dVar25 * local_158;
              local_158 = local_158 * dVar39 * dVar25;
              local_128 = dVar46 * local_1c8 * local_138;
              local_130 = dStack_1d0 * dVar46 * local_138;
              local_138 = local_138 * local_1d8 * dVar46;
              dStack_210 = local_288;
              local_288 = local_238;
              local_248 = auVar49;
              FUN_14481fd10(&local_198,&local_178);
              dVar16 = local_188 * local_188 + local_198 * local_198;
              dVar25 = dStack_180 * dStack_180 + dStack_190 * dStack_190;
              auVar28._0_8_ = dVar16 + dVar25;
              auVar28._8_8_ = dVar16 + dVar25;
              auVar22._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar28._8_8_);
              auVar22._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_);
              auVar19 = sqrtpd(auVar28,auVar28);
              auVar57 = divpd(auVar57,auVar19);
              auVar58._0_8_ = auVar57._0_8_ * local_188;
              auVar58._8_8_ = auVar57._8_8_ * dStack_180;
              dVar23 = (double)((ulonglong)(local_198 * auVar57._0_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_));
              dVar29 = (double)((ulonglong)(dStack_190 * auVar57._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar28._8_8_));
              auVar55 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar58,auVar22);
              dStack_1c0 = 0.0;
              local_1d8 = local_118;
              dStack_1d0 = dStack_110;
              local_1c8 = local_108;
            }
            dStack_1b0 = dVar15 * dStack_1b0;
            local_1b8 = dVar1 * local_1b8;
            dStack_1a0 = dStack_1a0 * 0.0;
            local_1a8 = dVar2 * local_1a8;
            local_1f8[0] = dVar23;
            local_1f8[1] = dVar29;
            local_1e8 = auVar55;
          }
          if (param_6 != '\0') {
            local_1b8 = (double)plVar8[0x39];
            dStack_1b0 = (double)plVar8[0x3a];
            local_1a8 = (double)plVar8[0x3b];
            dStack_1a0 = 0.0;
          }
          if (param_5 != 0) {
            FUN_147a04096(plVar8);
          }
          local_2d8 = local_2d8 & 0xffffffffffffff00;
          FUN_140613f88(plVar8,local_1f8,0,0);
          FUN_14092e51e(param_2,plVar8);
          if (((*(byte *)((longlong)param_2 + 100) & 0x10) >> 4 & bVar14) == 1) {
            (**(code **)(*param_2 + 0x4b0))(param_2);
            FUN_14132cf46(param_2,0,0);
          }
        }
        else {
          uVar9 = (ulonglong)*(uint *)(param_3 + 1);
          if ((plVar8 == param_3) ||
             (uVar4 = *(uint *)(param_3 + 1) & 0x40000000, uVar9 = (ulonglong)uVar4, uVar4 != 0))
          goto LAB_141365213;
          FUN_140486fc4(plVar8,param_3,*(undefined8 *)(param_1 + 0x80));
        }
        param_3 = plVar8;
        if (bVar14 != 0) {
          lVar7 = *(longlong *)(param_1 + 0x20);
          if (lVar7 == 0) {
LAB_141365e84:
            lVar7 = 0;
          }
          else {
            lVar10 = FUN_1413dd9ba();
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar10 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar10 + 0x38) * 8) != lVar10 + 0x30)) goto LAB_141365e84;
          }
          if (*(longlong *)(lVar7 + 0xa8) != 0) {
            FUN_147d5d07e(*(longlong *)(lVar7 + 0xa8),plVar8);
          }
          FUN_1417eda34(plVar8);
        }
      }
      if (*(longlong *)(param_1 + 0xd0) != 0) {
        plVar11 = (longlong *)FUN_1408c92bc(param_2[2],*(longlong *)(param_1 + 0xd0),3);
        if (plVar11 != (longlong *)0x0) {
          lVar7 = plVar11[0xe];
          if (lVar7 != 0) {
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(lVar7);
            }
            if ((*(int *)(plVar8[2] + 0x38) < *(int *)(lVar7 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(plVar8[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
                lVar7 + 0x30)) goto LAB_141365f08;
          }
          (**(code **)(*plVar11 + 0x200))(plVar11,param_2,plVar8,0);
        }
      }
LAB_141365f08:
      if (0 < *(int *)(param_1 + 0xa8)) {
        lVar7 = 0;
        do {
          local_2c8 = local_2c8 & 0xffffff00;
          local_2d0 = local_2d0 & 0xffffff00;
          local_2d8 = 0;
          FUN_14136504c(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + lVar7 * 8),param_2,param_3,0
                       );
          lVar7 = lVar7 + 1;
        } while (lVar7 < *(int *)(param_1 + 0xa8));
      }
      goto LAB_141365f52;
    }
  }
  plVar8 = (longlong *)0x0;
LAB_141365f52:
  if ((local_f0 ^ (ulonglong)auStack_2f8) == DAT_14c707940) {
    return plVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413660f2 FUN_1413660f2 body=474 status=ok
// SIG undefined FUN_1413660f2(void)

undefined8 FUN_1413660f2(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar3 = *param_4;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar4 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14a3a3510;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  local_58[2] = lVar5;
  *local_58 = &PTR_FUN_14b963600;
  local_58[3] = 0;
  iVar7 = 0;
  if (param_3 != 0) {
    uVar2 = *(uint *)(param_3 + 0xc);
    *(uint *)(local_58 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar7 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar7 = *(int *)(lVar8 + 0x10);
      bVar9 = iVar7 == 0;
      if (bVar9) {
        *(int *)(lVar8 + 0x10) = iVar6;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar7 = iVar6;
      }
    }
  }
  *(int *)((longlong)puVar4 + 0x1c) = iVar7;
  puVar4[4] = uVar3;
  *(undefined4 *)(puVar4 + 5) = uVar1;
  FUN_14490d954(param_1,param_2,&local_58);
  if (local_50 != 0) {
    if (local_58 == (undefined8 *)0x0) goto LAB_141366204;
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_141366204:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1413662ce FUN_1413662ce body=24 status=ok
// SIG undefined FUN_1413662ce(void)

void FUN_1413662ce(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x2c8) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x2c8) + 0x1e8) = 0;
  }
  return;
}



// FUNCTION 1413662e6 FUN_1413662e6 body=66 status=ok
// SIG undefined FUN_1413662e6(void)

void FUN_1413662e6(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_145852fa4(param_1 + 0x50);
  FUN_140af926c(param_1 + 0x38);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 141366328 FUN_141366328 body=970 status=ok
// SIG undefined FUN_141366328(void)

void FUN_141366328(longlong param_1,int param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  void *_Src;
  char *pcVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  size_t sVar12;
  undefined1 auStack_128 [32];
  undefined8 ***local_108;
  undefined8 local_100;
  undefined2 local_f8;
  undefined1 local_f6;
  undefined8 local_f0;
  wchar_t *local_e8;
  undefined4 local_e0;
  undefined1 local_d8 [8];
  longlong *local_d0;
  char *local_c8;
  uint local_c0;
  uint local_bc;
  undefined8 ***local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  int local_68;
  byte *local_60;
  undefined8 uStack_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar7 = *(longlong *)(param_1 + 0x270);
  iVar8 = -1;
  if ((longlong)*(int *)(param_1 + 0x278) != 0) {
    lVar9 = (longlong)*(int *)(param_1 + 0x278) << 3;
    lVar10 = 0;
    do {
      if (*(int *)(*(longlong *)(lVar7 + lVar10 * 8) + 8) == param_2) {
        iVar8 = (int)lVar10;
        break;
      }
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + -8;
    } while (lVar9 != 0);
  }
  puVar3 = *(undefined8 **)(lVar7 + (longlong)iVar8 * 8);
  *(undefined8 *)(lVar7 + (longlong)iVar8 * 8) = 0;
  FUN_140f1002a(param_1 + 0x270);
  plVar6 = (longlong *)FUN_14479d2ce((longlong)puVar3 + 0xc);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x2c0))(plVar6,puVar3 + 3,*(undefined4 *)(param_3 + 0x28));
  }
  if ((longlong)*(int *)(puVar3 + 10) != 0) {
    lVar7 = 0;
    do {
      if ((*(int *)(puVar3[9] + 8 + lVar7) != 0) && (*(longlong *)(puVar3[9] + lVar7) != 0))
      goto LAB_1413663fc;
      lVar7 = lVar7 + 0x10;
    } while ((longlong)*(int *)(puVar3 + 10) * 0x10 != lVar7);
  }
  if ((longlong)*(int *)(param_1 + 0x2a0) != 0) {
    lVar7 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x298) + 8 + lVar7) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x298) + lVar7) != 0)) goto LAB_1413663fc;
      lVar7 = lVar7 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x2a0) * 0x10 != lVar7);
  }
  goto LAB_14136660a;
LAB_1413663fc:
  local_50 = param_3 + 0x30;
  local_78 = 0;
  uStack_70 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_68 = 9;
  local_60 = (byte *)0x0;
  uStack_58 = 0;
  local_98 = FUN_14479d2ce((longlong)puVar3 + 0xc);
  FUN_1447715ec(&local_90,puVar3 + 3);
  local_68 = *(int *)(param_3 + 0x28);
  if (local_68 == 0) {
    local_c8 = (char *)0x0;
    local_c0 = *(int *)(param_3 + 0x38);
    sVar12 = (size_t)(int)local_c0;
    _Src = *(void **)(param_3 + 0x30);
    if (sVar12 == 0) {
      local_bc = 0;
      uVar11 = 0;
    }
    else {
      FUN_1447a127e(&local_c8,local_c0,0);
      memcpy(local_c8,_Src,sVar12);
      uVar11 = local_c0;
    }
    local_c0 = uVar11 + 1;
    if (local_bc < local_c0) {
      FUN_1447403be(&local_c8,uVar11);
    }
    pcVar4 = local_c8;
    local_c8[(int)uVar11] = '\0';
    local_b8 = (undefined8 ****)0x0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    sVar12 = strlen(local_c8);
    FUN_140cd1a74(&local_b8,pcVar4,sVar12);
    local_e8 = L"UnspecifiedFile";
    local_e0 = 0xf;
    local_f8 = 0;
    local_f6 = 0;
    local_f0 = 0;
    local_108 = &local_b8;
    if (0xf < uStack_a0) {
      local_108 = local_b8;
    }
    local_100 = local_a8;
    FUN_141183efe(local_d8,&local_108,&local_f8,&local_e8);
    FUN_1446dcc2e(&local_60,local_d8);
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_d0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_d0)();
        LOCK();
        piVar2 = (int *)((longlong)local_d0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_d0 + 0x10))();
        }
      }
    }
    if (local_60 == (byte *)0x0) {
LAB_141366652:
      local_68 = 6;
    }
    else {
      local_68 = 6;
      if ((*local_60 & 3) != 0) {
        local_68 = 0;
      }
      if (((plVar6 != (longlong *)0x0) && ((*local_60 & 3) != 0)) &&
         (cVar5 = (**(code **)(*plVar6 + 0x2a8))(plVar6,puVar3 + 3,&local_60), cVar5 != '\0'))
      goto LAB_141366652;
    }
    FUN_1401d9a90(&local_b8);
    if (local_c8 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_1413666f4(puVar3 + 9,&local_98);
  FUN_1413666f4(param_1 + 0x298,&local_98);
  FUN_14592ded2(&local_98);
LAB_14136660a:
  FUN_140f1049c(param_1);
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413666f4 FUN_1413666f4 body=162 status=ok
// SIG undefined FUN_1413666f4(void)

void FUN_1413666f4(longlong *param_1,undefined8 param_2)

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
        goto LAB_141366781;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_141366781:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 141366796 FUN_141366796 body=386 status=ok
// SIG undefined FUN_141366796(void)

void FUN_141366796(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  int local_80 [6];
  longlong local_68;
  int local_58 [6];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = DAT_14cb8dd60;
  local_88 = DAT_14cb8dd68;
  FUN_1448075d0(local_58);
  iVar2 = *(int *)(param_2 + 8);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (iVar2 == local_58[0]) {
    plVar4 = param_1 + 0x2c;
LAB_1413667ff:
    plVar4 = (longlong *)*plVar4;
    if (plVar4 != (longlong *)0x0) {
      if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
        lVar5 = param_1[4];
      }
      else {
        lVar5 = 0;
      }
      if (*(int *)(param_2 + 0x30) - 6U < 2) {
        *(undefined1 *)(plVar4 + 0xb) = 2;
      }
      else if (*(int *)(param_2 + 0x30) == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,lVar5,param_2 + 0x38);
      }
      else {
        *(undefined1 *)(plVar4 + 0xb) = 0;
      }
      piVar1 = (int *)((longlong)param_1 + 0x15c);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(undefined1 *)((longlong)param_1 + 0x159) = 0;
        (**(code **)(*param_1 + 0x2e0))(param_1);
      }
    }
  }
  else {
    FUN_1447a97f4(local_80,param_2 + 8);
    if ((longlong)(int)param_1[0x2f] != 0) {
      lVar5 = 0;
      uVar3 = 0;
      do {
        if (*(int *)(*(longlong *)(param_1[0x2e] + lVar5) + 8) == local_80[0]) {
          if (local_68 != 0) {
            FUN_1400020a8();
          }
          if (((int)uVar3 < 0) || ((int)param_1[0x2f] <= (int)uVar3)) goto LAB_1413668e0;
          plVar4 = (longlong *)((ulonglong)(uVar3 & 0x7fffffff) * 0x10 + param_1[0x2e]);
          goto LAB_1413667ff;
        }
        uVar3 = uVar3 + 1;
        lVar5 = lVar5 + 0x10;
      } while ((longlong)(int)param_1[0x2f] * 0x10 != lVar5);
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
LAB_1413668e0:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14136691a FUN_14136691a body=1194 status=ok
// SIG undefined FUN_14136691a(void)

void FUN_14136691a(longlong param_1,int param_2,double *param_3,double *param_4,double *param_5,
                  double *param_6)

{
  undefined4 *puVar1;
  double *pdVar2;
  int *piVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  double *pdVar25;
  longlong lVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  double dVar36;
  undefined1 auVar35 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auStack_128 [32];
  double *local_108;
  double *local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  undefined1 local_c8 [16];
  double local_b8;
  double local_b0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar24 = (longlong)param_2;
  piVar3 = (int *)(*(longlong *)(param_1 + 0x60) + 4 + lVar24 * 8);
  *piVar3 = *piVar3 + 1;
  iVar20 = *(int *)(*(longlong *)(param_1 + 0x60) + lVar24 * 8);
  if (iVar20 == -1) {
    lVar26 = *(longlong *)(param_1 + 0x80) + lVar24 * 0x4810;
    iVar20 = *(int *)(*(longlong *)(param_1 + 0x80) + 0x4808 + lVar24 * 0x4810);
    lVar23 = (longlong)iVar20;
    if ((0xff < lVar23) &&
       (*(double *)(param_1 + 0xa0) <= param_3[4] && param_3[4] != *(double *)(param_1 + 0xa0))) {
      FUN_1487f4ada(param_6,lVar26);
      iVar20 = FUN_1487f4b80(param_1);
      *(int *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(iVar20 - 1U >> 3) * 4) = param_2;
      *(int *)(*(longlong *)(param_1 + 0x60) + lVar24 * 8) = iVar20;
      *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 4 + lVar24 * 8) = 0;
      pdVar25 = (double *)param_6[0x900];
      if ((double *)param_6[0x900] == (double *)0x0) {
        pdVar25 = param_6;
      }
      if ((longlong)*(int *)(param_6 + 0x901) != 0) {
        pdVar2 = pdVar25 + (longlong)*(int *)(param_6 + 0x901) * 9;
        do {
          local_f8 = *pdVar25;
          dStack_f0 = pdVar25[1];
          local_e8 = pdVar25[2];
          local_d8 = pdVar25[3];
          dStack_d0 = pdVar25[4];
          local_c8._8_8_ = 0;
          local_c8._0_8_ = pdVar25[5];
          dStack_e0 = 0.0;
          local_100 = param_6;
          local_108 = pdVar25;
          FUN_14136691a(param_1,param_2,param_3,&local_f8);
          pdVar25 = pdVar25 + 9;
        } while (pdVar25 != pdVar2);
      }
      FUN_1487f4c04(param_6);
LAB_141366cd3:
      local_100 = param_6;
      local_108 = param_5;
      FUN_14136691a(param_1,param_2,param_3,param_4);
      goto LAB_141366a54;
    }
    *(uint *)(lVar26 + 0x4808) = iVar20 + 1U;
    if (*(uint *)(lVar26 + 0x480c) < iVar20 + 1U) {
      FUN_141366dc6(lVar26,iVar20);
    }
    lVar24 = *(longlong *)(lVar26 + 0x4800);
    if (*(longlong *)(lVar26 + 0x4800) == 0) {
      lVar24 = lVar26;
    }
    *(double *)(lVar24 + 0x30 + lVar23 * 0x48) = param_5[6];
    uVar11 = *(undefined4 *)param_5;
    uVar12 = *(undefined4 *)((longlong)param_5 + 4);
    uVar13 = *(undefined4 *)(param_5 + 1);
    uVar14 = *(undefined4 *)((longlong)param_5 + 0xc);
    dVar5 = param_5[2];
    dVar9 = param_5[3];
    dVar4 = param_5[5];
    pdVar25 = (double *)(lVar24 + 0x20 + lVar23 * 0x48);
    *pdVar25 = param_5[4];
    pdVar25[1] = dVar4;
    pdVar25 = (double *)(lVar24 + 0x10 + lVar23 * 0x48);
    *pdVar25 = dVar5;
    pdVar25[1] = dVar9;
    puVar1 = (undefined4 *)(lVar24 + lVar23 * 0x48);
    *puVar1 = uVar11;
    puVar1[1] = uVar12;
    puVar1[2] = uVar13;
    puVar1[3] = uVar14;
    *(double *)(lVar24 + 0x38 + lVar23 * 0x48) = param_5[7];
    dVar5 = param_5[8];
    *(double *)(lVar24 + 0x40 + lVar23 * 0x48) = dVar5;
    if (dVar5 != 0.0) {
      LOCK();
      *(int *)((longlong)dVar5 + 8) = *(int *)((longlong)dVar5 + 8) + 1;
      UNLOCK();
    }
  }
  else {
    dVar30 = *param_4;
    dVar32 = param_4[1];
    dVar33 = param_4[2];
    dVar36 = param_4[3];
    dVar15 = *param_3;
    dVar16 = param_3[1];
    dVar17 = param_3[2];
    dVar18 = param_3[3];
    dVar5 = param_3[9];
    dVar9 = dVar32 - (dVar16 - dVar5);
    auVar27._0_8_ = (dVar15 + dVar5) - dVar30;
    auVar27._8_8_ = (dVar16 + dVar5) - dVar32;
    auVar28._8_4_ = SUB84(dVar9,0);
    auVar28._0_8_ = dVar30 - (dVar15 - dVar5);
    auVar28._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    auVar28 = minpd(auVar27,auVar28);
    auVar37._0_8_ = (dVar17 + dVar5) - dVar33;
    auVar37._8_8_ = (dVar18 + dVar5) - dVar36;
    auVar38._8_8_ = dVar36 - (dVar18 - dVar5);
    auVar38._0_8_ = dVar33 - (dVar17 - dVar5);
    auVar38 = minpd(auVar37,auVar38);
    dVar9 = param_3[8];
    dVar4 = param_3[8];
    lVar26 = -(ulonglong)(dVar4 < auVar28._8_8_ + param_4[5]);
    auVar6._8_4_ = (int)lVar26;
    auVar6._0_8_ = -(ulonglong)(dVar9 < auVar28._0_8_ + param_4[4]);
    auVar6._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
    iVar19 = movmskpd((int)*(longlong *)(param_1 + 0x60),auVar6);
    auVar29._8_8_ = -(ulonglong)(dVar4 < auVar38._8_8_ + param_4[7]);
    auVar29._0_8_ = -(ulonglong)(dVar9 < auVar38._0_8_ + param_4[6]);
    uVar21 = movmskpd((int)param_6,auVar29);
    if ((uVar21 & 0x3fffffff) == 0 && iVar19 == 0) {
      pdVar25 = param_3 + 8;
      auVar7._8_4_ = (int)-(ulonglong)(dVar16 < dVar32);
      auVar7._0_8_ = -(ulonglong)(dVar15 < dVar30);
      auVar7._12_4_ = (int)(-(ulonglong)(dVar16 < dVar32) >> 0x20);
      iVar19 = movmskpd(iVar19,auVar7);
      auVar34._8_8_ = -(ulonglong)(dVar18 < dVar36);
      auVar34._0_8_ = -(ulonglong)(dVar17 < dVar33);
      uVar21 = movmskpd(0,auVar34);
      iVar19 = iVar19 + (uVar21 & 1) * 4;
      param_2 = iVar20 + iVar19;
      auVar31._4_4_ = iVar19;
      auVar31._0_4_ = iVar19;
      auVar31._8_4_ = iVar19;
      auVar31._12_4_ = iVar19;
      auVar38 = pmovsxbd(auVar34,0x8040201);
      auVar31 = auVar31 & auVar38;
      dVar33 = (double)(float)-(uint)(auVar31._0_4_ == auVar38._0_4_);
      dVar36 = (double)(float)-(uint)(auVar31._4_4_ == auVar38._4_4_);
      dVar30 = (double)(float)-(uint)(auVar31._8_4_ == auVar38._8_4_);
      dVar32 = (double)(float)-(uint)(auVar31._12_4_ == auVar38._12_4_);
      uVar10 = (ulonglong)dVar5 & (ulonglong)dVar36;
      auVar35._0_8_ = ~(ulonglong)dVar33 & (ulonglong)-dVar5;
      auVar35._8_8_ = ~(ulonglong)dVar36 & (ulonglong)-dVar5;
      auVar8._8_4_ = (int)uVar10;
      auVar8._0_8_ = (ulonglong)dVar5 & (ulonglong)dVar33;
      auVar8._12_4_ = (int)(uVar10 >> 0x20);
      local_f8 = SUB168(auVar35 | auVar8,0) + dVar15;
      dStack_f0 = SUB168(auVar35 | auVar8,8) + dVar16;
      local_e8 = ((double)(~(ulonglong)dVar30 & (ulonglong)-dVar5 |
                          (ulonglong)dVar5 & (ulonglong)dVar30) + dVar17) * 1.0;
      dStack_e0 = ((double)(~(ulonglong)dVar32 & (ulonglong)-dVar5 |
                           (ulonglong)dVar5 & (ulonglong)dVar32) + dVar18) * 0.0;
      param_3 = &local_f8;
      local_b8 = *pdVar25 * 0.5 * 1.0625;
      local_c8._8_4_ = SUB84(dVar4 * 0.0,0);
      local_c8._0_8_ = dVar9 * 1.0;
      local_c8._12_4_ = (int)((ulonglong)(dVar4 * 0.0) >> 0x20);
      local_b0 = *pdVar25 - local_b8;
      local_d8 = dVar9;
      dStack_d0 = dVar4;
      goto LAB_141366cd3;
    }
    lVar23 = *(longlong *)(param_1 + 0x80);
    lVar24 = lVar24 * 0x4810;
    lVar26 = lVar23 + lVar24;
    iVar20 = *(int *)(lVar23 + 0x4808 + lVar24);
    lVar22 = (longlong)iVar20;
    *(uint *)(lVar23 + 0x4808 + lVar24) = iVar20 + 1U;
    if (*(uint *)(lVar23 + 0x480c + lVar24) < iVar20 + 1U) {
      FUN_141366dc6(lVar26,iVar20);
    }
    lVar24 = *(longlong *)(lVar26 + 0x4800);
    if (*(longlong *)(lVar26 + 0x4800) == 0) {
      lVar24 = lVar26;
    }
    *(double *)(lVar24 + 0x30 + lVar22 * 0x48) = param_5[6];
    uVar11 = *(undefined4 *)param_5;
    uVar12 = *(undefined4 *)((longlong)param_5 + 4);
    uVar13 = *(undefined4 *)(param_5 + 1);
    uVar14 = *(undefined4 *)((longlong)param_5 + 0xc);
    dVar5 = param_5[2];
    dVar9 = param_5[3];
    dVar4 = param_5[5];
    pdVar25 = (double *)(lVar24 + 0x20 + lVar22 * 0x48);
    *pdVar25 = param_5[4];
    pdVar25[1] = dVar4;
    pdVar25 = (double *)(lVar24 + 0x10 + lVar22 * 0x48);
    *pdVar25 = dVar5;
    pdVar25[1] = dVar9;
    puVar1 = (undefined4 *)(lVar24 + lVar22 * 0x48);
    *puVar1 = uVar11;
    puVar1[1] = uVar12;
    puVar1[2] = uVar13;
    puVar1[3] = uVar14;
    *(double *)(lVar24 + 0x38 + lVar22 * 0x48) = param_5[7];
    dVar5 = param_5[8];
    *(double *)(lVar24 + 0x40 + lVar22 * 0x48) = dVar5;
    if (dVar5 != 0.0) {
      LOCK();
      *(int *)((longlong)dVar5 + 8) = *(int *)((longlong)dVar5 + 8) + 1;
      UNLOCK();
    }
  }
  *(ulonglong *)((longlong)param_5[7] + 0x18) = CONCAT44(iVar20,param_2);
LAB_141366a54:
  if ((local_90 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141366dc6 FUN_141366dc6 body=367 status=ok
// SIG undefined FUN_141366dc6(void)

void FUN_141366dc6(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  
  uVar3 = *(uint *)(param_1 + 0x4808);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 < 0x101) {
    iVar8 = 0x100;
  }
  else {
    lVar4 = (longlong)(int)uVar3;
    if (0x100 < *(uint *)(param_1 + 0x480c)) {
      lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
    }
    uVar5 = lVar4 * 0x48;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar7 = 0x32;
            if (0x32 < bVar2) {
              uVar7 = (ulonglong)bVar2;
            }
            uVar9 = 0x32 - (ulonglong)bVar2;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_141366e62;
              lVar4 = uVar7 + 1 + uVar9;
              uVar9 = uVar9 - 1;
            } while (lVar4 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
      }
    }
LAB_141366e62:
    iVar6 = (int)(uVar5 / 0x48);
    iVar8 = 0x7fffffff;
    if ((int)uVar3 <= iVar6) {
      iVar8 = iVar6;
    }
  }
  *(int *)(param_1 + 0x480c) = iVar8;
  FUN_141366f36(param_1,param_2);
  return;
}



// FUNCTION 141366f36 FUN_141366f36 body=151 status=ok
// SIG undefined FUN_141366f36(void)

void FUN_141366f36(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x4800);
  if ((uint)param_3 < 0x101) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x48);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x4800,0,param_3,0x48);
    memmove(*(void **)((longlong)param_1 + 0x4800),param_1,(longlong)param_2 * 0x48);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x4800,param_2,param_3,0x48);
  return;
}



// FUNCTION 141366fce FUN_141366fce body=27 status=ok
// SIG undefined FUN_141366fce(void)

undefined2 * FUN_141366fce(undefined2 *param_1)

{
  *param_1 = 0x100;
  *(undefined8 *)(param_1 + 2) = 0x100000000;
  *(undefined8 *)(param_1 + 6) = 0x144;
  *(undefined4 *)(param_1 + 10) = 3;
  return param_1;
}



// FUNCTION 141366fea FUN_141366fea body=295 status=ok
// SIG undefined FUN_141366fea(void)

void FUN_141366fea(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  
  iVar1 = *(int *)(param_1 + 0xe0);
  lVar13 = (longlong)iVar1;
  if (lVar13 != 0) {
    plVar2 = *(longlong **)(param_1 + 0xd8);
    iVar11 = 0;
    bVar7 = *plVar2 == *param_2;
    iVar4 = 0;
    do {
      lVar8 = (longlong)iVar4;
      iVar12 = iVar4 + 1;
      if (iVar4 + 1 < iVar1) {
        iVar12 = iVar1;
      }
      plVar10 = plVar2 + lVar8 * 0x11 + 0x11;
      iVar5 = iVar4;
      lVar9 = lVar8;
      do {
        lVar9 = lVar9 + 1;
        iVar6 = iVar12;
        if (lVar13 <= lVar9) break;
        lVar3 = *plVar10;
        iVar5 = iVar5 + 1;
        plVar10 = plVar10 + 0x11;
        iVar6 = iVar5;
      } while (bVar7 == (lVar3 == *param_2));
      iVar12 = iVar6 - iVar4;
      if (bVar7 == false) {
        if (iVar11 != iVar4) {
          memmove(plVar2 + (longlong)iVar11 * 0x11,plVar2 + lVar8 * 0x11,(longlong)iVar12 * 0x88);
        }
        iVar11 = iVar11 + iVar12;
      }
      else {
        FUN_14592ed47(plVar2 + lVar8 * 0x11,iVar12);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar4 = iVar6;
    } while (lVar9 < lVar13);
    *(int *)(param_1 + 0xe0) = iVar11;
  }
  return;
}



// FUNCTION 141367111 FUN_141367111 body=332 status=ok
// SIG undefined FUN_141367111(void)

longlong FUN_141367111(uint *param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
      && ((plVar2 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar2 != (longlong *)0x0 && (*(uint *)(plVar2 + 2) == param_1[1])))) &&
     (((*(uint *)(plVar2 + 1) & 0x10200000) == 0 && (lVar3 = *plVar2, lVar3 != 0)))) {
    if (DAT_14cac6e60 == 0) {
      local_30 = &local_18;
      local_18 = FUN_144a7958c;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_142b47bc4;
      local_38 = &LAB_1478989f1;
      local_40 = &LAB_146391124;
      local_48 = L"Engine";
      local_50 = 0x10000000000;
      local_58 = 0x10000005;
      local_60 = 0x10;
      local_68 = 0x620;
      FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
    }
    if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) == DAT_14cac6e60 + 0x30)) goto LAB_141367197;
  }
  lVar3 = 0;
LAB_141367197:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14136725e FUN_14136725e body=26 status=ok
// SIG undefined FUN_14136725e(void)

void FUN_14136725e(longlong param_1,int param_2,char param_3)

{
  if (*(char *)(*(longlong *)(param_1 + 0x5d0) + (longlong)param_2) == param_3) {
    return;
  }
  *(char *)(*(longlong *)(param_1 + 0x5d0) + (longlong)param_2) = param_3;
  FUN_1448215fa();
  return;
}



// FUNCTION 141367278 FUN_141367278 body=48 status=ok
// SIG undefined FUN_141367278(void)

void FUN_141367278(longlong param_1,uint param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint uVar15;
  uint *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined1 auStack_98 [32];
  code **ppcStack_78;
  code *apcStack_68 [2];
  undefined ***pppuStack_58;
  undefined **ppuStack_48;
  longlong lStack_40;
  uint uStack_38;
  ulonglong uStack_28;
  
  uVar13 = 0xff;
  if ((int)param_2 < 0xff) {
    uVar13 = param_2;
  }
  uVar15 = 0;
  if (0 < (int)uVar13) {
    uVar15 = uVar13;
  }
  if (*(uint *)(param_1 + 0x33c) == uVar15) {
    return;
  }
  *(uint *)(param_1 + 0x33c) = uVar15;
  lVar4 = *(longlong *)(param_1 + 0x5a8);
  if (lVar4 == 0) {
    return;
  }
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_1413672e8;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_1413672f1;
      goto LAB_141367387;
    }
  }
  else {
LAB_1413672e8:
    if (iVar7 != 0x10) {
LAB_141367387:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2))
        goto LAB_1413672f1;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_1413672f1;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_1413674ea;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_14365fa42);
          }
          lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar5 + 0x310);
          *(undefined8 *)(lVar5 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          FUN_140217a48(puVar2);
          puVar11 = (uint *)*puVar2;
LAB_1413674ea:
          puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar17 + 0x17);
          uVar13 = puVar11[0x12];
          if (puVar16 <= puVar11 + 0x4000) break;
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
            puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar16 = (uint *)(puVar17 + 0x17);
            uVar13 = 0;
            if (puVar16 <= puVar11 + 0x4000) {
              uVar13 = 1;
              goto LAB_14136756a;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_14136756a:
        *(uint **)(puVar11 + 0x10) = puVar16;
        puVar11[0x12] = uVar13;
        iVar7 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14aa59e88;
        puVar17[0x15] = lVar4;
        *(uint *)(puVar17 + 0x16) = uVar15;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar13 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
            uVar18 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
            iVar7 = 0;
          }
          else {
            uVar18 = 2;
          }
        }
        else {
          iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar18 = 5;
        }
        if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
        }
        puVar17[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar17[9] = puVar17;
        puVar17[10] = puVar17;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar6 = 1;
          if ((char)uVar18 != '\x06') {
            uVar6 = uVar18;
          }
          uVar18 = uVar6;
          uVar12 = 0;
        }
        else {
          if ((char)uVar18 == '\x06') {
            uVar18 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar17[0xf] = uVar12;
        puVar17[0x10] = uVar18 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar17 + 0x1c) = iVar7;
        if (puVar17 == (undefined8 *)0x0) {
          apcStack_68[0] = (code *)CONCAT71(apcStack_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          apcStack_68[0] = (code *)CONCAT71(apcStack_68[0]._1_7_,1);
          FUN_1447439e4(puVar17);
          LOCK();
          piVar1 = (int *)(puVar17 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar17)(puVar17,1);
          }
        }
      }
      else {
        ppcStack_78 = apcStack_68;
        pppuStack_58 = (undefined ***)0x0;
        ppuStack_48 = &PTR_LAB_14aa59e30;
        apcStack_68[0] = FUN_143662174;
        lStack_40 = lVar4;
        uStack_38 = uVar15;
        FUN_14005a792(&DAT_14ca9a440,L"FSetCustomDepthStencilValue",&DAT_14cafe1c8);
        if (apcStack_68[0] != (code *)0x0) {
          pppuVar14 = pppuStack_58;
          if (pppuStack_58 == (undefined ***)0x0) {
            pppuVar14 = &ppuStack_48;
          }
          (*(code *)(*pppuVar14)[2])();
        }
      }
      goto LAB_141367429;
    }
  }
LAB_1413672f1:
  if ((*(byte *)(lVar4 + 0x80) != uVar15) &&
     (*(char *)(lVar4 + 0x80) = (char)uVar15, *(longlong *)(lVar4 + 0x218) != 0)) {
    (**(code **)(**(longlong **)(lVar4 + 0x210) + 0x4c0))();
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(uStack_28 ^ (ulonglong)auStack_98);
  }
LAB_141367429:
  if ((uStack_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413672a8 FUN_1413672a8 body=1296 status=ok
// SIG undefined FUN_1413672a8(void)

void FUN_1413672a8(longlong param_1,uint param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined1 auStack_98 [32];
  code **local_78;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  uint local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_1413672e8;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_1413672f1;
      goto LAB_141367387;
    }
  }
  else {
LAB_1413672e8:
    if (iVar6 != 0x10) {
LAB_141367387:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_1413672f1;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_1413672f1;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_1413674ea;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_14365fa42);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_1413674ea:
          puVar15 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar15 + 0x17);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar15 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar15 + 0x17);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_14136756a;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_14136756a:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar15,0);
        *puVar15 = &PTR_FUN_14aa59e88;
        puVar15[0x15] = param_1;
        *(uint *)(puVar15 + 0x16) = param_2;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
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
          uVar11 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar15[0xf] = uVar11;
        puVar15[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar15 + 0x1c) = iVar6;
        if (puVar15 == (undefined8 *)0x0) {
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
          UNLOCK();
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
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
        local_78 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14aa59e30;
        local_68[0] = FUN_143662174;
        local_40 = param_1;
        local_38 = param_2;
        FUN_14005a792(&DAT_14ca9a440,L"FSetCustomDepthStencilValue",&DAT_14cafe1c8);
        if (local_68[0] != (code *)0x0) {
          pppuVar13 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar13 = &local_48;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_141367429;
    }
  }
LAB_1413672f1:
  if ((*(byte *)(param_1 + 0x80) != param_2) &&
     (*(char *)(param_1 + 0x80) = (char)param_2, *(longlong *)(param_1 + 0x218) != 0)) {
    (**(code **)(**(longlong **)(param_1 + 0x210) + 0x4c0))();
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
  }
LAB_141367429:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413677d2 FUN_1413677d2 body=513 status=ok
// SIG undefined FUN_1413677d2(void)

void FUN_1413677d2(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  uint local_54;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar4 = param_2[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar1 = *param_2;
    lVar2 = *(longlong *)(param_1 + 8);
    lVar8 = 0;
    do {
      lVar9 = *(longlong *)(lVar1 + lVar8);
      if (lVar9 != 0) {
        if (DAT_14cac6e60 == 0) {
          local_50 = FUN_144a7958c;
          local_60 = FUN_14081d0ea;
          local_68 = FUN_142b47bc4;
          local_70 = &local_50;
          local_78 = &LAB_1478989f1;
          local_80 = &LAB_146391124;
          local_88 = L"Engine";
          local_90 = 0x10000000000;
          local_98 = 0x10000005;
          local_a0 = 0x10;
          local_a8 = 0x620;
          FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
        }
        if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) == DAT_14cac6e60 + 0x30)) {
          puVar6 = (uint *)FUN_145c7bd64(lVar2 + 0x28);
          uVar5 = *(uint *)(lVar9 + 0xc);
          *puVar6 = uVar5;
          if ((int)uVar5 < DAT_14c9647dc) {
            lVar9 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
          }
          else {
            lVar9 = 0;
          }
          uVar5 = *(uint *)(lVar9 + 0x10);
          if (*(uint *)(lVar9 + 0x10) == 0) {
            LOCK();
            iVar3 = DAT_14c964868 + 1;
            UNLOCK();
            uVar7 = DAT_14c964868 + 1;
            bVar10 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar3;
            if (bVar10) {
              local_54 = uVar7;
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar7);
              uVar7 = local_54;
            }
            LOCK();
            uVar5 = *(uint *)(lVar9 + 0x10);
            bVar10 = uVar5 == 0;
            if (bVar10) {
              *(uint *)(lVar9 + 0x10) = uVar7;
              uVar5 = 0;
            }
            UNLOCK();
            if (bVar10) {
              uVar5 = uVar7;
            }
          }
          puVar6[1] = uVar5;
        }
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413679d4 FUN_1413679d4 body=181 status=ok
// SIG undefined FUN_1413679d4(void)

void FUN_1413679d4(longlong param_1,ulonglong param_2,undefined4 param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x1b90) != *(int *)(param_1 + 0x1bb4)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar4 = param_1 + 0x1bb8;
    if (*(longlong *)(param_1 + 0x1bc0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x1bc0);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x1bc8) - 1U & (uVar2 >> 0x10 ^ uVar2))
                             * 4);
    if (iVar3 != -1) {
      lVar4 = param_1 + 0x1b28;
      if (*(longlong *)(param_1 + 0x1b88) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x1b88);
      }
      do {
        puVar1 = (ulonglong *)(lVar4 + (longlong)iVar3 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 == (ulonglong *)0x0) {
            return;
          }
          if (puVar1 + 1 == (ulonglong *)0x0) {
            return;
          }
          FUN_145931e58(puVar1[1],param_3);
          return;
        }
        iVar3 = (int)puVar1[2];
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 141367a8a FUN_141367a8a body=162 status=ok
// SIG undefined FUN_141367a8a(void)

void FUN_141367a8a(longlong *param_1,undefined4 param_2)

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
        goto LAB_141367b17;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_141367b17:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 141367b2c FUN_141367b2c body=1141 status=ok
// SIG undefined FUN_141367b2c(void)

void FUN_141367b2c(longlong param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  byte bVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  ulonglong uVar11;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *plStack_50;
  byte local_48;
  undefined1 local_47;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  bVar7 = (byte)param_2;
  if (1 < bVar7) goto LAB_141367e1b;
  uVar11 = (ulonglong)(param_2 & 0xff);
  fVar1 = *(float *)(param_1 + 0x948 + uVar11 * 8);
  if (fVar1 < 0.0) goto LAB_141367e1b;
  if (((((*(longlong *)(param_1 + 0x20) == 0) || (*(int *)(param_1 + 0x1c) == 0)) ||
       (uVar3 = *(uint *)(param_1 + 0x18), (int)uVar3 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar3 ||
       (lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar8 == 0)))) ||
     ((*(int *)(lVar8 + 0x10) != *(int *)(param_1 + 0x1c) ||
      (((*(uint *)(lVar8 + 8) & 0x10200000) != 0 ||
       (plVar5 = *(longlong **)(param_1 + 8), plVar5 == (longlong *)0x0)))))) {
LAB_141367de0:
    if (*(float *)(param_1 + 0x948 + uVar11 * 8) < 0.0) goto LAB_141367e1b;
    plVar5 = *(longlong **)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x948 + uVar11 * 8) = 0xbf800000;
    *(undefined1 *)(param_1 + 0x94c + uVar11 * 8) = 0;
    if (plVar5 == (longlong *)0x0) goto LAB_141367e1b;
  }
  else {
    if (bVar7 == 0) {
      if (*(char *)(param_1 + 0x4a0) != '\0') {
        lVar8 = param_1 + 0x28;
        goto LAB_141367c09;
      }
LAB_141367cf6:
      bVar10 = false;
LAB_141367cf8:
      lVar8 = *(longlong *)(param_1 + 0x928);
      if (lVar8 != 0) {
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x18))();
        lVar9 = (**(code **)(*plVar5 + 0x180))();
        if (lVar9 != 0) {
          *(float *)(lVar8 + 0xc0) = (float)*(double *)(lVar9 + 0x6d0);
        }
      }
      plVar5 = *(longlong **)(param_1 + 8);
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      local_47 = bVar10;
      if (plVar5 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
        local_48 = bVar7;
      }
      else {
        local_48 = bVar7;
        lVar8 = (**(code **)(*plVar5 + 0x18))(plVar5);
        if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar8);
        }
        plVar6 = *(longlong **)(param_1 + 8);
        local_58 = lVar8;
        plStack_50 = plVar5;
      }
      if ((*(longlong *)(param_1 + 0x20) == 0) || (*(int *)(param_1 + 0x1c) == 0)) {
LAB_141367dd3:
        lVar8 = 0;
      }
      else {
        uVar3 = *(uint *)(param_1 + 0x18);
        lVar8 = 0;
        if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
          lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
          if ((lVar9 == 0) || (*(int *)(lVar9 + 0x10) != *(int *)(param_1 + 0x1c)))
          goto LAB_141367dd3;
          lVar8 = 0;
          if ((*(uint *)(lVar9 + 8) & 0x10200000) == 0) {
            lVar8 = *(longlong *)(param_1 + 0x20);
          }
        }
      }
      (**(code **)(*plVar6 + 0x28))(plVar6,lVar8,&local_58);
      goto LAB_141367de0;
    }
    if (*(char *)(param_1 + 0x920) != '\x01') goto LAB_141367cf6;
    lVar8 = param_1 + 0x4a8;
LAB_141367c09:
    if ((lVar8 == 0) || (cVar4 = *(char *)(lVar8 + 0x460), cVar4 == '\0')) goto LAB_141367cf6;
    if (cVar4 == '\x03') {
      cVar4 = FUN_140b61818(param_1);
      if ((cVar4 != '\0') && (cVar4 = FUN_140b6174a(param_1,param_2), cVar4 != '\0')) {
        plVar5 = *(longlong **)(param_1 + 8);
        local_58 = 0;
        plStack_50 = (longlong *)0x0;
        local_47 = 1;
        lVar8 = local_58;
        plVar6 = plStack_50;
        local_48 = bVar7;
        if ((plVar5 != (longlong *)0x0) &&
           ((lVar8 = (**(code **)(*plVar5 + 0x18))(plVar5), plVar6 = plVar5, lVar8 != 0 &&
            (DAT_14c950c29 != '\0')))) {
          FUN_1456cec3c(lVar8);
        }
        plStack_50 = plVar6;
        local_58 = lVar8;
        if ((*(longlong *)(param_1 + 0x20) == 0) || (*(int *)(param_1 + 0x1c) == 0)) {
LAB_141367ecb:
          lVar8 = 0;
        }
        else {
          uVar3 = *(uint *)(param_1 + 0x18);
          lVar8 = 0;
          if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
            lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
            if ((lVar9 == 0) || (*(int *)(lVar9 + 0x10) != *(int *)(param_1 + 0x1c)))
            goto LAB_141367ecb;
            lVar8 = 0;
            if ((*(uint *)(lVar9 + 8) & 0x10200000) == 0) {
              lVar8 = *(longlong *)(param_1 + 0x20);
            }
          }
        }
        FUN_145934e76(lVar8,&local_58,1);
        lVar8 = *(longlong *)(param_1 + 0x928);
        if (lVar8 != 0) {
          FUN_1489aec50(lVar8,param_2);
          if (bVar7 == 0) {
            if (*(char *)(param_1 + 0x4a0) != '\0') {
              lVar9 = param_1 + 0x28;
              goto LAB_141367f6c;
            }
          }
          else if (*(char *)(param_1 + 0x920) == '\x01') {
            lVar9 = param_1 + 0x4a8;
LAB_141367f6c:
            if (((lVar9 != 0) && (*(char *)(lVar9 + 0x470) == '\x01')) &&
               (*(longlong *)(lVar9 + 0x468) != 0)) {
              FUN_1489ae990(lVar8,*(longlong *)(lVar9 + 0x468),1);
            }
          }
        }
      }
      if ((*(longlong *)(param_1 + 0x20) == 0) || (*(int *)(param_1 + 0x1c) == 0)) {
LAB_141367e3f:
        lVar8 = 0;
      }
      else {
        uVar3 = *(uint *)(param_1 + 0x18);
        lVar8 = 0;
        if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
          lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
          if ((lVar9 == 0) || (*(int *)(lVar9 + 0x10) != *(int *)(param_1 + 0x1c)))
          goto LAB_141367e3f;
          lVar8 = 0;
          if ((*(uint *)(lVar9 + 8) & 0x10200000) == 0) {
            lVar8 = *(longlong *)(param_1 + 0x20);
          }
        }
      }
      (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),lVar8,param_2);
      goto LAB_141367de0;
    }
    fVar2 = *(float *)(lVar8 + 0x464);
    bVar10 = fVar2 <= fVar1;
    if (cVar4 != '\x01') {
      if ((cVar4 == '\x02') && (bVar10 = true, fVar1 < fVar2)) {
        if (*(char *)(param_1 + 0x94c + uVar11 * 8) != '\0') goto LAB_141367de0;
        goto LAB_141367cf6;
      }
      goto LAB_141367cf8;
    }
    bVar10 = true;
    if (fVar2 <= fVar1) goto LAB_141367cf8;
    *(undefined4 *)(param_1 + 0x948 + uVar11 * 8) = 0xbf800000;
    *(undefined1 *)(param_1 + 0x94c + uVar11 * 8) = 0;
  }
  FUN_141367a8a(plVar5 + 0xb,param_2);
LAB_141367e1b:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141367fa2 FUN_141367fa2 body=1532 status=ok
// SIG undefined FUN_141367fa2(void)

undefined8 * FUN_141367fa2(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  code *pcVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined ***pppuVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_1b8 [40];
  undefined8 *local_190;
  longlong *local_188;
  longlong *local_180;
  undefined8 *local_178;
  int local_170;
  code *local_168;
  undefined ***local_158;
  undefined **local_148;
  char *local_140;
  longlong **local_138;
  char local_120 [16];
  longlong *local_110;
  undefined4 local_f8 [2];
  char local_f0 [8];
  undefined8 local_e8;
  longlong *local_e0;
  undefined4 local_c8 [2];
  longlong local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar10 = *(longlong *)(param_3 + 8);
  uVar7 = 0;
  local_190 = param_2;
  if ((*(longlong *)(lVar10 + 0x88) == 0) || (*(longlong **)(lVar10 + 0x90) == (longlong *)0x0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = (**(code **)(**(longlong **)(lVar10 + 0x90) + 8))();
    lVar10 = *(longlong *)(param_3 + 8);
  }
  local_120[0] = '\0';
  local_f8[0] = 0;
  FUN_1456bb102(local_120,lVar10);
  local_f0[0] = '\0';
  local_c8[0] = 0;
  FUN_1456bb102(local_f0,uVar8);
  plVar6 = (longlong *)FUN_14001cc68(200);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b426d40;
  memset(plVar6 + 3,0,0x90);
  *(undefined4 *)((longlong)plVar6 + 0x44) = 0xffffffff;
  plVar6[9] = 0;
  plVar6[10] = 0;
  *(undefined4 *)(plVar6 + 0xb) = 2;
  *(undefined1 *)((longlong)plVar6 + 0x8c) = 0;
  *(undefined4 *)(plVar6 + 0x14) = 0;
  plVar6[0xd] = 0;
  plVar6[0xe] = 0;
  *(undefined8 *)((longlong)plVar6 + 0x74) = 0;
  *(undefined8 *)((longlong)plVar6 + 0x7c) = 0;
  plVar6[2] = (longlong)&PTR_FUN_14b242780;
  plVar6[0x15] = 0;
  plVar6[0x16] = 0;
  plVar6[0x17] = 0;
  plVar6[0x18] = 0;
  local_188 = plVar6 + 2;
  local_180 = plVar6;
  if (*(longlong *)(*(longlong *)(param_3 + 8) + 0x40) != 0) {
    uVar7 = FUN_1447210f0();
  }
  FUN_140cfc686(&local_c0,uVar7);
  plVar6[0x15] = local_c0;
  local_c0 = 0;
  plVar2 = (longlong *)plVar6[0x16];
  plVar6[0x16] = (longlong)local_b8;
  local_b8 = (longlong *)0x0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_b8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_b8 + 0x10))();
      }
    }
  }
  local_158 = (undefined ***)0x0;
  local_148 = &PTR_LAB_14b426dd0;
  local_138 = &local_188;
  local_168 = FUN_143e26ec8;
  local_178 = (undefined8 *)0x0;
  local_170 = 0;
  local_140 = local_120;
  FUN_1446efa72(&local_178,0,3,0x10);
  plVar6 = local_180;
  local_170 = 3;
  if (local_180 == (longlong *)0x0) {
    *local_178 = &PTR_LAB_14b427140;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    local_178[2] = lVar11;
    *local_178 = &PTR_FUN_14b426d60;
    local_178[3] = local_188;
    local_178[4] = 0;
    local_178[5] = &LAB_143e26e1a;
  }
  else {
    LOCK();
    *(int *)(local_180 + 1) = (int)local_180[1] + 1;
    UNLOCK();
    *local_178 = &PTR_LAB_14b427140;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    local_178[2] = lVar11;
    *local_178 = &PTR_FUN_14b426d60;
    local_178[3] = local_188;
    local_178[4] = local_180;
    LOCK();
    *(int *)((longlong)local_180 + 0xc) = *(int *)((longlong)local_180 + 0xc) + 1;
    UNLOCK();
    local_178[5] = &LAB_143e26e1a;
    LOCK();
    plVar2 = local_180 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_180)(local_180);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  local_b8 = local_188 + 0xb;
  local_c0 = *(longlong *)(param_3 + 0x10);
  local_b0 = 0;
  local_a8 = 0;
  FUN_141368656(&local_b0,&local_178);
  local_80 = 0;
  local_78 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_74 = 0xffffffff00000080;
  local_6c = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  if (local_170 != 0) {
    if (local_178 == (undefined8 *)0x0) goto LAB_141368288;
    (**(code **)*local_178)(local_178,0);
    FUN_1446efa72(&local_178,0,0,0x10);
    local_170 = 0;
  }
  if (local_178 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_141368288:
  if (0 < *(int *)(param_1 + 0x68)) {
    lVar10 = 0;
    do {
      pcVar4 = local_168;
      lVar11 = lVar10 * 0xa8 + *(longlong *)(param_1 + 0x60);
      local_178 = (undefined8 *)CONCAT44(local_178._4_4_,(int)lVar10);
      pppuVar9 = local_158;
      if (local_158 == (undefined ***)0x0) {
        pppuVar9 = &local_148;
      }
      uVar7 = (*(code *)(*pppuVar9)[1])();
      iVar5 = (*pcVar4)(uVar7,&local_178,lVar11);
      if (iVar5 != -1) {
        if ((longlong)*(int *)(param_1 + 0x58) != 0) {
          lVar12 = *(longlong *)(param_1 + 0x50);
          lVar13 = (longlong)*(int *)(param_1 + 0x58) * 0x18;
          do {
            FUN_1413ebb2a(&local_c0,iVar5,lVar12);
            lVar12 = lVar12 + 0x18;
            lVar13 = lVar13 + -0x18;
          } while (lVar13 != 0);
        }
        if ((longlong)*(int *)(lVar11 + 0x30) != 0) {
          lVar12 = *(longlong *)(lVar11 + 0x28);
          lVar11 = (longlong)*(int *)(lVar11 + 0x30) * 0x18;
          do {
            FUN_1413ebb2a(&local_c0,iVar5,lVar12);
            lVar12 = lVar12 + 0x18;
            lVar11 = lVar11 + -0x18;
          } while (lVar11 != 0);
        }
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(param_1 + 0x68));
  }
  FUN_1413685a0(&local_c0);
  if (local_168 != (code *)0x0) {
    pppuVar9 = &local_148;
    if (local_158 != (undefined ***)0x0) {
      pppuVar9 = local_158;
    }
    (*(code *)(*pppuVar9)[2])(pppuVar9);
  }
  plVar6 = local_180;
  puVar3 = local_190;
  *local_190 = local_188;
  local_190[1] = local_180;
  if (local_180 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_180 + 1) = (int)local_180[1] + 1;
    UNLOCK();
    if (local_180 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_180 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_180)(local_180);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  FUN_1448173f8(local_c8);
  if (local_f0[0] != '\0') {
    if (local_f0[0] == '\x01') {
      local_e8 = 0;
    }
    else if ((local_f0[0] == '\x03') && (local_e0 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_e0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_e0 + 0x10))();
      }
    }
    local_f0[0] = '\0';
  }
  FUN_1448173f8(local_f8);
  if ((local_120[0] == '\x03') && (local_110 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_110 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_110 + 0x10))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar3;
}



// FUNCTION 1413685a0 FUN_1413685a0 body=125 status=ok
// SIG undefined FUN_1413685a0(void)

void FUN_1413685a0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  FUN_141368900();
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_14136861e(param_1 + 0x20);
  plVar1 = (longlong *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14136861e FUN_14136861e body=55 status=ok
// SIG undefined FUN_14136861e(void)

void FUN_14136861e(longlong *param_1)

{
  FUN_141368788(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141368656 FUN_141368656 body=305 status=ok
// SIG undefined FUN_141368656(void)

void FUN_141368656(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_1413686f0;
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
LAB_1413686c9:
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
      goto LAB_1413686c9;
    }
  }
  *param_1 = (longlong)puVar2;
  *(int *)(param_1 + 1) = iVar3;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_1413686f0;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1413686f0:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141368788 FUN_141368788 body=374 status=ok
// SIG undefined FUN_141368788(void)

void FUN_141368788(longlong *param_1,int param_2)

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
      FUN_1489892c6((longlong)iStack_54 * 0x58 + *local_70);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140e91948(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


