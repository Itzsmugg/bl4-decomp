// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1459b0bdc FUN_1459b0bdc body=154 status=ok
// SIG undefined FUN_1459b0bdc(void)

void FUN_1459b0bdc(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1412d7cbc();
  FUN_1459b0d76(param_1);
  lVar1 = (**(code **)(*param_1 + 0x180))(param_1);
  if (lVar1 != 0) {
    lVar1 = (**(code **)(*param_1 + 0x180))(param_1);
    if (*(longlong *)(lVar1 + 0x1f0) != 0) {
      lVar1 = FUN_1459b10c6();
      if (lVar1 != 0) {
        uVar2 = FUN_1459b0c78(lVar1);
        FUN_1459b0c80(uVar2,&local_20,param_1);
        param_1[0x2d] = local_20;
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459b0c78 FUN_1459b0c78 body=8 status=ok
// SIG undefined FUN_1459b0c78(void)

longlong FUN_1459b0c78(longlong param_1)

{
  return param_1 + 0x208;
}



// FUNCTION 1459b0c80 FUN_1459b0c80 body=244 status=ok
// SIG undefined FUN_1459b0c80(void)

undefined8 FUN_1459b0c80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_LAB_149e020b0;
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
  *local_38 = &PTR_FUN_14b9dbe50;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = &LAB_145d35734;
  FUN_1448b6402(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459b0d76 FUN_1459b0d76 body=847 status=ok
// SIG undefined FUN_1459b0d76(void)

void FUN_1459b0d76(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  ushort uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ushort uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8 [2];
  longlong *local_98;
  int local_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar3 = (**(code **)(*param_1 + 0x180))();
  if (((lVar3 != 0) &&
      (lVar3 = (**(code **)(*param_1 + 0x180))(param_1), *(longlong *)(lVar3 + 0x1f0) != 0)) &&
     (lVar3 = FUN_1459b10c6(), lVar3 != 0)) {
    local_b8 = param_1 + 0x28;
    FUN_145892607(param_1[0x28],(int)param_1[0x29]);
    *(undefined4 *)(param_1 + 0x29) = 0;
    if (*(int *)((longlong)param_1 + 0x14c) != 0) {
      FUN_1459b12ca(local_b8);
    }
    local_78 = 0;
    uStack_70 = 0;
    local_b0 = param_1;
    if ((int)param_1[0x27] == 1) {
      FUN_1459b137e(lVar3,&local_98,*(undefined4 *)(param_1[0xb] + 0xe0));
      FUN_1459b127a(&local_78,&local_98);
      FUN_1459b117c(local_98,local_90);
      if (local_98 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      FUN_141427610(lVar3,&local_98);
    }
    else {
      FUN_1459b169e(lVar3,&local_98,*(undefined4 *)(param_1[0xb] + 0xe0));
      FUN_1459b127a(&local_78,&local_98);
      FUN_1459b117c(local_98,local_90);
      if (local_98 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      FUN_141427640(lVar3,&local_98);
    }
    plVar2 = local_98;
    if ((longlong)(int)uStack_70 != 0) {
      lVar3 = local_78 + (longlong)(int)uStack_70 * 0x28;
      lVar9 = local_78;
      do {
        FUN_144a5dc74(&local_98);
        local_88 = 0;
        uStack_80 = 0;
        FUN_140009b9a(local_a8,lVar9);
        FUN_140008f88(&local_98,local_a8);
        if (local_a8[0] != (longlong *)0x0) {
          (**(code **)(*local_a8[0] + 0x10))();
        }
        FUN_144a787a6(&local_88);
        if ((int)uStack_80 == local_90) {
          if (1 < local_90) {
            lVar6 = 0;
            while( true ) {
              uVar4 = *(ushort *)(local_88 + lVar6);
              uVar5 = (ulonglong)uVar4;
              uVar7 = *(ushort *)((longlong)plVar2 + lVar6);
              if (uVar4 != uVar7) break;
              if (uVar4 == 0) goto LAB_1459b0ff9;
LAB_1459b0fc5:
              lVar6 = lVar6 + 2;
            }
            if ((uVar7 | uVar4) < 0x80) {
              uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
              uVar8 = (ulonglong)uVar7;
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
              if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar8]) goto LAB_1459b0fc5;
            }
            if (uVar4 != uVar7) goto LAB_1459b0f5a;
          }
LAB_1459b0ff9:
          FUN_1459b11ba(local_b8,&local_98);
        }
        else {
          if ((int)uStack_80 + local_90 == 1) goto LAB_1459b0ff9;
LAB_1459b0f5a:
          iVar1 = (int)local_b0[0x29];
          *(uint *)(local_b0 + 0x29) = iVar1 + 1U;
          if (*(uint *)((longlong)local_b0 + 0x14c) < iVar1 + 1U) {
            FUN_1459b12fa(local_b8,iVar1);
          }
          FUN_1459b1204((longlong)iVar1 * 0x20 + *local_b8,&local_98);
        }
        if (local_88 != 0) {
          FUN_1400020a8();
        }
        if (local_98 != (longlong *)0x0) {
          (**(code **)(*local_98 + 0x10))();
        }
        lVar9 = lVar9 + 0x28;
      } while (lVar9 != lVar3);
    }
    if (plVar2 != (longlong *)0x0) {
      FUN_1400020a8(plVar2);
    }
    FUN_1459b117c(local_78,uStack_70 & 0xffffffff);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459b10c6 FUN_1459b10c6 body=105 status=ok
// SIG undefined FUN_1459b10c6(void)

void FUN_1459b10c6(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14142752a();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_18);
  }
  FUN_1459b1130(param_1 + 0x100,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459b1130 FUN_1459b1130 body=76 status=ok
// SIG undefined FUN_1459b1130(void)

void FUN_1459b1130(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14142752a();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1459b116d;
    }
  }
  lVar2 = 0;
LAB_1459b116d:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 1459b117c FUN_1459b117c body=61 status=ok
// SIG undefined FUN_1459b117c(void)

void FUN_1459b117c(longlong param_1,int param_2)

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
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1459b11ba FUN_1459b11ba body=74 status=ok
// SIG undefined FUN_1459b11ba(void)

void FUN_1459b11ba(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar1 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar1 + 1) {
    FUN_1459b12fa(param_1,(ulonglong)uVar1);
  }
  memmove((void *)((longlong)*param_1 + 0x20),(void *)*param_1,(ulonglong)uVar1 << 5);
  FUN_1459b1204(*param_1,param_2);
  return;
}



// FUNCTION 1459b1204 FUN_1459b1204 body=118 status=ok
// SIG undefined FUN_1459b1204(void)

longlong * FUN_1459b1204(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  void *_Src;
  
  plVar2 = (longlong *)*param_2;
  *param_1 = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  param_1[2] = 0;
  iVar1 = (int)param_2[3];
  _Src = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 1459b127a FUN_1459b127a body=80 status=ok
// SIG undefined FUN_1459b127a(void)

longlong * FUN_1459b127a(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1459b117c(*param_1,(int)param_1[1]);
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



// FUNCTION 1459b12ca FUN_1459b12ca body=48 status=ok
// SIG undefined FUN_1459b12ca(void)

void FUN_1459b12ca(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 1459b12fa FUN_1459b12fa body=132 status=ok
// SIG undefined FUN_1459b12fa(void)

void FUN_1459b12fa(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1459b137e FUN_1459b137e body=630 status=ok
// SIG undefined FUN_1459b137e(void)

longlong * FUN_1459b137e(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_108 [32];
  longlong local_e8 [4];
  undefined2 local_c8;
  longlong local_c0 [2];
  wchar_t *local_b0;
  int local_a8;
  longlong local_a0 [2];
  wchar_t *local_90;
  int local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1459ca5e2(0,&local_70);
  if ((local_70 != 0) && (plVar2 = *(longlong **)(local_70 + 0x38), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x60))(plVar2,&local_80);
    (**(code **)(**(longlong **)(local_70 + 0x38) + 0x88))(*(longlong **)(local_70 + 0x38),local_a0)
    ;
    (**(code **)(**(longlong **)(local_70 + 0x38) + 0x98))(*(longlong **)(local_70 + 0x38),local_c0)
    ;
    if ((longlong)local_78 != 0) {
      lVar6 = (longlong)local_78 << 5;
      puVar5 = (undefined8 *)(local_80 + 0x10);
      do {
        local_e8[2] = 0;
        local_e8[3] = 0;
        local_e8[0] = 0;
        local_e8[1] = 0;
        local_c8 = 0;
        FUN_144a787a6(local_e8,puVar5 + -2);
        FUN_144a787a6(local_e8 + 2,puVar5);
        iVar4 = *(int *)(puVar5 + 1);
        if (iVar4 == local_88) {
          if ((iVar4 < 2) || (iVar3 = wcscmp((wchar_t *)*puVar5,local_90), iVar3 == 0)) {
LAB_1459b1509:
            local_c8 = CONCAT11(local_c8._1_1_,1);
            iVar4 = *(int *)(puVar5 + 1);
          }
        }
        else if (local_88 + iVar4 == 1) goto LAB_1459b1509;
        if (iVar4 == local_a8) {
          if ((iVar4 < 2) || (iVar4 = wcscmp((wchar_t *)*puVar5,local_b0), iVar4 == 0)) {
LAB_1459b151a:
            local_c8 = CONCAT11(1,(undefined1)local_c8);
          }
        }
        else if (local_a8 + iVar4 == 1) goto LAB_1459b151a;
        iVar4 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
          FUN_1459b1958(param_2,iVar4);
        }
        FUN_1459b15f6((longlong)iVar4 * 0x28 + *param_2,local_e8);
        if (local_e8[2] != 0) {
          FUN_1400020a8();
        }
        if (local_e8[0] != 0) {
          FUN_1400020a8();
        }
        puVar5 = puVar5 + 4;
        lVar6 = lVar6 + -0x20;
      } while (lVar6 != 0);
    }
    if (local_b0 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_c0[0] != 0) {
      FUN_1400020a8();
    }
    if (local_90 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_a0[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1459b191a(local_80,local_78);
    if (local_80 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_68 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1459b15f6 FUN_1459b15f6 body=168 status=ok
// SIG undefined FUN_1459b15f6(void)

undefined8 * FUN_1459b15f6(undefined8 *param_1,undefined8 *param_2)

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
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  return param_1;
}



// FUNCTION 1459b169e FUN_1459b169e body=635 status=ok
// SIG undefined FUN_1459b169e(void)

longlong * FUN_1459b169e(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_108 [32];
  longlong local_e8 [4];
  undefined2 local_c8;
  longlong local_c0 [2];
  wchar_t *local_b0;
  int local_a8;
  longlong local_a0 [2];
  wchar_t *local_90;
  int local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1459ca5e2(0,&local_70);
  if ((local_70 != 0) && (plVar2 = *(longlong **)(local_70 + 0x38), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x58))(plVar2,&local_80);
    (**(code **)(**(longlong **)(local_70 + 0x38) + 0x80))(*(longlong **)(local_70 + 0x38),local_a0)
    ;
    (**(code **)(**(longlong **)(local_70 + 0x38) + 0x90))(*(longlong **)(local_70 + 0x38),local_c0)
    ;
    if ((longlong)local_78 != 0) {
      lVar6 = (longlong)local_78 << 5;
      puVar5 = (undefined8 *)(local_80 + 0x10);
      do {
        local_e8[2] = 0;
        local_e8[3] = 0;
        local_e8[0] = 0;
        local_e8[1] = 0;
        local_c8 = 0;
        FUN_144a787a6(local_e8,puVar5 + -2);
        FUN_144a787a6(local_e8 + 2,puVar5);
        iVar4 = *(int *)(puVar5 + 1);
        if (iVar4 == local_88) {
          if ((iVar4 < 2) || (iVar3 = wcscmp((wchar_t *)*puVar5,local_90), iVar3 == 0)) {
LAB_1459b17b1:
            local_c8 = CONCAT11(local_c8._1_1_,1);
            iVar4 = *(int *)(puVar5 + 1);
          }
        }
        else if (local_88 + iVar4 == 1) goto LAB_1459b17b1;
        if (iVar4 == local_a8) {
          if ((iVar4 < 2) || (iVar4 = wcscmp((wchar_t *)*puVar5,local_b0), iVar4 == 0)) {
LAB_1459b17d9:
            local_c8 = CONCAT11(1,(undefined1)local_c8);
          }
        }
        else if (local_a8 + iVar4 == 1) goto LAB_1459b17d9;
        iVar4 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
          FUN_1459b1958(param_2,iVar4);
        }
        FUN_1459b15f6((longlong)iVar4 * 0x28 + *param_2,local_e8);
        if (local_e8[2] != 0) {
          FUN_1400020a8();
        }
        if (local_e8[0] != 0) {
          FUN_1400020a8();
        }
        puVar5 = puVar5 + 4;
        lVar6 = lVar6 + -0x20;
      } while (lVar6 != 0);
    }
    if (local_b0 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_c0[0] != 0) {
      FUN_1400020a8();
    }
    if (local_90 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_a0[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1459b191a(local_80,local_78);
    if (local_80 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_68 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1459b191a FUN_1459b191a body=61 status=ok
// SIG undefined FUN_1459b191a(void)

void FUN_1459b191a(longlong param_1,int param_2)

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
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1459b1958 FUN_1459b1958 body=147 status=ok
// SIG undefined FUN_1459b1958(void)

void FUN_1459b1958(longlong param_1,int param_2)

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



// FUNCTION 1459b1a18 FUN_1459b1a18 body=465 status=ok
// SIG undefined FUN_1459b1a18(void)

void FUN_1459b1a18(longlong param_1,int param_2)

{
  void *_Src;
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_e8 [32];
  void *local_c8;
  int local_c0;
  undefined4 local_bc;
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  void *local_78;
  ulonglong uStack_70;
  undefined8 local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined8 local_50;
  undefined1 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(char *)(param_1 + 0x168) == '\x01') && (*(longlong *)(param_1 + 0x18) != 0)) {
    cVar1 = FUN_144729dda(param_1 + 0x80);
    if (cVar1 != '\0') {
      plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x80);
      lVar3 = (**(code **)(*plVar2 + 0x2c0))(plVar2);
      if ((lVar3 != 0) && (*(char *)(lVar3 + 0x1d9) == '\x01')) {
        local_60 = 0x800000000;
        local_58 = 0;
        local_56 = 0;
        local_50 = 0;
        local_78 = (void *)0x0;
        uStack_70 = 0;
        FUN_1409e3c80(*(undefined8 *)(param_1 + 0x28),&local_78);
        _Src = local_78;
        local_c8 = (void *)0x0;
        lVar4 = (longlong)(int)uStack_70;
        local_c0 = (int)uStack_70;
        if (lVar4 == 0) {
          local_bc = 0;
        }
        else {
          FUN_1446dd670(&local_c8,uStack_70 & 0xffffffff,0);
          memcpy(local_c8,_Src,lVar4 * 2);
        }
        FUN_1459b1bea(local_b8,&local_c8,param_1 + 0x28);
        if (param_2 == 1) {
          FUN_1446dcc2e(local_98,param_1 + 0x158);
          FUN_1487b2462(lVar3,local_b8);
        }
        else if (*(char *)(param_1 + 0x16a) == '\x01') {
          local_48 = local_b8;
          FUN_1459b1d18(lVar3 + 0x98);
        }
        FUN_1459b1c7c(local_b8);
        if (local_78 != (void *)0x0) {
          FUN_1400020a8();
        }
        FUN_1414276ce(&local_60);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459b1bea FUN_1459b1bea body=146 status=ok
// SIG undefined FUN_1459b1bea(void)

undefined8 * FUN_1459b1bea(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  *param_1 = 0;
  iVar1 = (int)param_2[1];
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  param_1[2] = *param_3;
  lVar2 = param_3[1];
  param_1[3] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 1459b1c7c FUN_1459b1c7c body=155 status=ok
// SIG undefined FUN_1459b1c7c(void)

void FUN_1459b1c7c(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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



// FUNCTION 1459b1d18 FUN_1459b1d18 body=522 status=ok
// SIG undefined FUN_1459b1d18(void)

void FUN_1459b1d18(longlong *param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  bool bVar15;
  bool bVar16;
  
  uVar3 = *(uint *)(param_1 + 1);
  uVar14 = (ulonglong)(int)uVar3;
  if (uVar14 == 0) {
    return;
  }
  plVar4 = (longlong *)*param_1;
  iVar7 = (int)plVar4[1];
  iVar6 = (int)((longlong *)*param_2)[1];
  if (iVar7 == iVar6) {
    bVar16 = true;
    if (1 < iVar7) {
      lVar11 = 0;
      while( true ) {
        uVar1 = *(ushort *)(*plVar4 + lVar11);
        uVar8 = (uint)uVar1;
        uVar2 = *(ushort *)(*(longlong *)*param_2 + lVar11);
        uVar13 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1459b1d88;
          }
          iVar7 = uVar8 - uVar13;
          goto LAB_1459b1f13;
        }
        if (uVar1 == 0) break;
LAB_1459b1d88:
        lVar11 = lVar11 + 2;
      }
      iVar7 = 0;
LAB_1459b1f13:
      bVar16 = iVar7 == 0;
    }
  }
  else {
    bVar16 = iVar6 + iVar7 == 1;
  }
  iVar7 = 0;
  uVar10 = 0;
LAB_1459b1dc9:
  iVar6 = (int)uVar10;
  uVar10 = (ulonglong)(iVar6 + 1U);
  if ((int)(iVar6 + 1U) < (int)uVar3) {
    uVar10 = (longlong)iVar6 + 1;
    iVar9 = (int)((longlong *)*param_2)[1];
    bVar5 = true;
LAB_1459b1dea:
    if ((int)plVar4[uVar10 * 8 + 1] != iVar9) {
      bVar15 = (int)plVar4[uVar10 * 8 + 1] + iVar9 == 1;
      goto LAB_1459b1e5d;
    }
    if (1 < iVar9) {
      lVar11 = 0;
      do {
        uVar1 = *(ushort *)(plVar4[uVar10 * 8] + lVar11);
        uVar2 = *(ushort *)(*(longlong *)*param_2 + lVar11);
        if (uVar1 == uVar2) {
          if (uVar1 == 0) goto LAB_1459b1e82;
        }
        else {
          if (0x7f < (uVar2 | uVar1)) {
            iVar12 = (uint)uVar1 - (uint)uVar2;
            goto LAB_1459b1e85;
          }
          if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
            iVar12 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2]
            ;
            goto LAB_1459b1e85;
          }
        }
        lVar11 = lVar11 + 2;
      } while( true );
    }
    if (bVar16) goto LAB_1459b1e6a;
    iVar9 = (int)uVar10 - iVar6;
    goto LAB_1459b1ec4;
  }
  bVar5 = false;
  goto LAB_1459b1e8d;
LAB_1459b1e82:
  iVar12 = 0;
LAB_1459b1e85:
  bVar15 = iVar12 == 0;
LAB_1459b1e5d:
  if ((bool)(bVar15 ^ bVar16)) goto LAB_1459b1e8d;
LAB_1459b1e6a:
  uVar10 = uVar10 + 1;
  bVar5 = (longlong)uVar10 < (longlong)uVar14;
  if (uVar10 == uVar14) goto LAB_1459b1eb6;
  goto LAB_1459b1dea;
LAB_1459b1eb6:
  uVar10 = (ulonglong)uVar3;
LAB_1459b1e8d:
  iVar9 = (int)uVar10 - iVar6;
  if (bVar16) {
    FUN_145dcbabc(plVar4 + (longlong)iVar6 * 8,iVar9);
    bVar16 = false;
  }
  else {
LAB_1459b1ec4:
    if (iVar7 != iVar6) {
      memmove(plVar4 + (longlong)iVar7 * 8,plVar4 + (longlong)iVar6 * 8,(longlong)iVar9 << 6);
    }
    iVar7 = iVar7 + iVar9;
    bVar16 = true;
  }
  if (!bVar5) {
    *(int *)(param_1 + 1) = iVar7;
    return;
  }
  goto LAB_1459b1dc9;
}



// FUNCTION 1459b1f2a FUN_1459b1f2a body=85 status=ok
// SIG undefined FUN_1459b1f2a(void)

undefined8 * FUN_1459b1f2a(undefined8 *param_1)

{
  FUN_1406ee02c();
  *param_1 = &PTR_FUN_14ac2e2b0;
  *(undefined1 *)(param_1 + 0x72) = 0;
  *(undefined8 *)((longlong)param_1 + 0x394) = 0;
  *(undefined8 *)((longlong)param_1 + 0x39c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3bc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 0;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 8;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 8;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) & 0xfd;
  return param_1;
}



// FUNCTION 1459b1f80 FUN_1459b1f80 body=40 status=ok
// SIG undefined FUN_1459b1f80(void)

undefined8 FUN_1459b1f80(undefined8 param_1,int param_2)

{
  FUN_1459b1fa8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459b1fa8 FUN_1459b1fa8 body=53 status=ok
// SIG undefined FUN_1459b1fa8(void)

void FUN_1459b1fa8(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  *param_1 = &PTR_FUN_14a8fee80;
  if (*(char *)((longlong)param_1 + 0x3b4) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x3b4) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x3ac) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x3ac) = 0;
    thunk_FUN_1402ef4ac();
    return;
  }
  *param_1 = &PTR_FUN_14a77e150;
  if (param_1[0x70] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x6a],*(undefined4 *)(param_1 + 0x6b));
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x66],*(undefined4 *)(param_1 + 0x67));
  if (param_1[0x66] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[99],*(undefined4 *)(param_1 + 100));
  if (param_1[99] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x60],*(undefined4 *)(param_1 + 0x61));
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x5d],*(undefined4 *)(param_1 + 0x5e));
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x5a],*(undefined4 *)(param_1 + 0x5b));
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x57],*(undefined4 *)(param_1 + 0x58));
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  puVar3 = (undefined8 *)param_1[0x56];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x51) = 0;
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  FUN_1407903ca(param_1 + 0x48);
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  FUN_140115fde(param_1[0x44],*(undefined4 *)(param_1 + 0x45));
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  lVar5 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0xe) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar6 = *(int *)(param_1 + 0xe) + -1;
      lVar4 = (longlong)iVar6 * 0x88;
      lVar2 = DAT_14c9a3d60 + lVar4;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar4),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar4));
      if (*(longlong *)(lVar5 + 0x70 + lVar4) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar6,1);
    }
    *(undefined4 *)(param_1 + 0xe) = 0;
  }
  FUN_144760f98(param_1 + 6);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1459b1fe8 FUN_1459b1fe8 body=373 status=ok
// SIG undefined FUN_1459b1fe8(void)

undefined8 * FUN_1459b1fe8(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  FUN_1459b21ac();
  *param_1 = &PTR_FUN_14a7b3730;
  param_1[5] = &PTR_FUN_14a7b3b30;
  param_1[6] = &PTR_FUN_14a7b3b70;
  param_1[7] = &PTR_FUN_14a7b3ba0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x3e4ccccd;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0x3f80000000000000;
  *(undefined1 *)((longlong)param_1 + 0xec) = 0;
  FUN_1404163bc(param_1 + 0x19);
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x3e4ccccd;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0x3f80000000000000;
  *(undefined1 *)((longlong)param_1 + 0x11c) = 0;
  FUN_1404163bc(param_1 + 0x1f);
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0x3c23d70a42700000;
  param_1[0x3c] = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x3e800000;
  *(undefined1 *)((longlong)param_1 + 0xee) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0x3e800000;
  *(undefined1 *)((longlong)param_1 + 0x11e) = 1;
  param_1[0x25] = 0xbf800000;
  *(undefined1 *)((longlong)param_1 + 0x17a) = 1;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  uVar1 = DAT_14cacd6f8;
  iVar2 = FUN_1459b215e(param_1 + 0x2d);
  *(undefined8 *)(param_1[0x2d] + (longlong)iVar2 * 0x18) = uVar1;
  param_1[0x3c] = DAT_14cacbb28;
  return param_1;
}



// FUNCTION 1459b215e FUN_1459b215e body=59 status=ok
// SIG undefined FUN_1459b215e(void)

int FUN_1459b215e(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) == iVar1) {
    FUN_1459b2220(param_1,iVar1);
  }
  FUN_1459b2199((longlong)iVar1 * 0x18 + *param_1);
  return iVar1;
}



// FUNCTION 1459b2199 FUN_1459b2199 body=18 status=ok
// SIG undefined FUN_1459b2199(void)

void FUN_1459b2199(undefined8 *param_1)

{
  *param_1 = DAT_14cacd6f8;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 1459b21ac FUN_1459b21ac body=116 status=ok
// SIG undefined FUN_1459b21ac(void)

undefined8 * FUN_1459b21ac(undefined8 *param_1)

{
  FUN_14061ea1a();
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0xb4) = 0;
  *param_1 = &PTR_FUN_14a79f2f0;
  param_1[5] = &PTR_FUN_14a79f6f0;
  param_1[6] = &PTR_FUN_14a79f730;
  param_1[7] = &PTR_FUN_14a79f760;
  param_1[0x17] = 0x10000ea60;
  return param_1;
}



// FUNCTION 1459b2220 FUN_1459b2220 body=147 status=ok
// SIG undefined FUN_1459b2220(void)

void FUN_1459b2220(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1459b22b4 FUN_1459b22b4 body=169 status=ok
// SIG undefined FUN_1459b22b4(void)

void FUN_1459b22b4(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  double dVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)FUN_1400dbadc();
  plVar3 = (longlong *)*plVar2;
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)FUN_140e92164();
    *plVar2 = (longlong)plVar3;
  }
  cVar1 = (**(code **)(*plVar3 + 0x78))(plVar3,param_2);
  if (cVar1 == '\0') {
    dVar4 = -1.0;
  }
  else {
    FUN_140212f8e(&local_30);
    (**(code **)(*param_1 + 0xd0))(param_1,&local_38,param_2);
    dVar4 = (double)(local_30 - local_38) / 10000000.0;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(dVar4);
}



// FUNCTION 1459b235e FUN_1459b235e body=104 status=ok
// SIG undefined FUN_1459b235e(void)

ulonglong * FUN_1459b235e(ulonglong *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1459b23c6();
  *param_1 = (ulonglong)param_2;
  param_1[1] = 0;
  FUN_14485c47a(param_1 + 1,uVar1);
  param_1[2] = uVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (param_2 - 0x10 < 0xfffffffe) {
    uVar2 = FUN_141427744(param_2);
    FUN_14020fad6(param_1 + 3,uVar2);
  }
  return param_1;
}



// FUNCTION 1459b23c6 FUN_1459b23c6 body=57 status=ok
// SIG undefined FUN_1459b23c6(void)

void FUN_1459b23c6(void)

{
  undefined8 uVar1;
  
  if (DAT_14c997e48 == 0) {
    uVar1 = FUN_141298036();
    DAT_14c997e48 = FUN_14171c317(FUN_146288c04,uVar1,L"ENetCloseResult");
  }
  return;
}



// FUNCTION 1459b2400 FUN_1459b2400 body=75 status=ok
// SIG undefined FUN_1459b2400(void)

void FUN_1459b2400(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x860))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001459b2430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x868))(param_1);
    return;
  }
  DAT_14c949520 = L"ServerVerifyViewTarget_Validate";
  return;
}



// FUNCTION 1459b2450 FUN_1459b2450 body=128 status=ok
// SIG undefined FUN_1459b2450(void)

void FUN_1459b2450(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  longlong *local_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x6b8))();
  if (plVar1 != param_1) {
    local_28 = 0;
    local_24 = 1;
    local_20 = 0x40000000;
    local_30 = plVar1;
    uVar2 = FUN_14477b072(param_1,DAT_14caf97b8);
    (**(code **)(*param_1 + 0x248))(param_1,uVar2,&local_30);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459b24e0 FUN_1459b24e0 body=88 status=ok
// SIG undefined FUN_1459b24e0(void)

undefined8 * FUN_1459b24e0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b103b80;
  (*(code *)(&switchD_148704b3c::switchdataD_14b103c20)[*(byte *)(param_1 + 0x12)])(param_1 + 0xb);
  (*(code *)(&switchD_148704b3c::switchdataD_14b103c20)[*(byte *)(param_1 + 9)])(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459b2546 FUN_1459b2546 body=118 status=ok
// SIG undefined FUN_1459b2546(void)

void FUN_1459b2546(char *param_1,longlong *param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar2 = *param_2;
  if ((lVar2 != 0) && (*param_1 == '\0')) {
    uVar1 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar3 = (uint)lVar2 & 0xffff;
    lVar2 = FUN_1459b25bc(param_1 + 8,
                          ((uint)lVar2 << 0x10 | uVar3) + (int)((ulonglong)lVar2 >> 0x20) +
                          (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar3 >> 4),param_2);
    if (*(int *)(lVar2 + 0x20) <= param_4) {
      FUN_144a787a6(lVar2 + 0x10,param_3);
      *(int *)(lVar2 + 0x20) = param_4;
    }
  }
  return;
}



// FUNCTION 1459b25bc FUN_1459b25bc body=180 status=ok
// SIG undefined FUN_1459b25bc(void)

longlong * FUN_1459b25bc(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
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
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x48);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_1459b261c;
          break;
        }
        iVar1 = (int)plVar2[8];
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1459b2672(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x48);
LAB_1459b261c:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 1459b2672 FUN_1459b2672 body=269 status=ok
// SIG undefined FUN_1459b2672(void)

undefined4 * FUN_1459b2672(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

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
  FUN_1459b28c4(param_1,local_48);
  FUN_1459b2780(param_4,local_40);
  *(undefined4 *)(local_40 + 0x40) = 0xffffffff;
  cVar1 = FUN_1459b280e(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x44) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x40) =
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
      FUN_1459b29ac(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459b2780 FUN_1459b2780 body=141 status=ok
// SIG undefined FUN_1459b2780(void)

undefined8 * FUN_1459b2780(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0xffffffff;
  *param_2 = *(undefined8 *)*param_1;
  param_2[1] = 0;
  param_2[2] = 0;
  local_48 = 0;
  uStack_40 = 0;
  param_2[3] = 0;
  local_38 = 0;
  param_2[4] = 0;
  local_30 = 0;
  *(undefined1 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined4 *)(param_2 + 5) = 0xffffffff;
  param_2[6] = 0;
  local_20 = 0;
  param_2[7] = 0;
  local_18 = 0;
  FUN_1457b93ae(&local_48);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459b280e FUN_1459b280e body=181 status=ok
// SIG undefined FUN_1459b280e(void)

undefined8 FUN_1459b280e(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_1457b93ae(plVar16 + 1);
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
          FUN_1487fbf2c(param_1,*param_4);
          *param_4 = iVar17;
          return 1;
        }
        iVar17 = (int)plVar16[8];
      } while (iVar17 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1459b28c4 FUN_1459b28c4 body=231 status=ok
// SIG undefined FUN_1459b28c4(void)

int * FUN_1459b28c4(longlong *param_1,int *param_2)

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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x48);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x48) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x48 + *param_1;
  return param_2;
}



// FUNCTION 1459b29ac FUN_1459b29ac body=482 status=ok
// SIG undefined FUN_1459b29ac(void)

void FUN_1459b29ac(longlong *param_1)

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



// FUNCTION 1459b2b90 FUN_1459b2b90 body=25 status=ok
// SIG undefined FUN_1459b2b90(void)

undefined8 FUN_1459b2b90(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1459b2baa FUN_1459b2baa body=42 status=ok
// SIG undefined FUN_1459b2baa(void)

void FUN_1459b2baa(longlong param_1)

{
  if (*(char *)(param_1 + 0x110) == '\x01') {
    FUN_1459b2c80();
    FUN_1459b2bd4(param_1);
    return;
  }
  return;
}



// FUNCTION 1459b2bd4 FUN_1459b2bd4 body=170 status=ok
// SIG undefined FUN_1459b2bd4(void)

void FUN_1459b2bd4(longlong param_1)

{
  undefined1 auStack_88 [32];
  undefined1 **local_68;
  undefined8 local_60;
  longlong local_58;
  undefined1 *local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0x110) == '\0') {
    FUN_1446ddc76(&local_60,"Global",1);
    local_28 = 0;
    local_38 = local_60;
    local_40 = 0;
    local_48 = &local_58;
    local_68 = &local_50;
    local_50 = &LAB_146554320;
    local_58 = param_1 + 0x50;
    FUN_141427b60(param_1 + 0x50,0,&local_40,0);
    *(undefined1 *)(param_1 + 0x110) = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459b2c80 FUN_1459b2c80 body=220 status=ok
// SIG undefined FUN_1459b2c80(void)

void FUN_1459b2c80(longlong param_1)

{
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  longlong local_88 [3];
  undefined8 *local_70;
  longlong *local_68;
  undefined1 *local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x110) == '\x01') {
    local_88[0] = 0;
    local_88[1] = 0;
    FUN_1446ddc76(&local_90,"Global",1);
    local_48 = 0;
    local_40 = local_90;
    local_30 = 0;
    local_70 = &local_50;
    local_50 = 0;
    local_58 = local_88 + 2;
    local_60 = &LAB_14571c398;
    local_88[2] = param_1 + 0x50;
    local_68 = local_88;
    FUN_141427c98(param_1 + 0x50);
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x110) = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459b2d68 FUN_1459b2d68 body=72 status=ok
// SIG undefined FUN_1459b2d68(void)

undefined8 * FUN_1459b2d68(undefined8 *param_1)

{
  FUN_1400ead26();
  *param_1 = &PTR_FUN_14a654520;
  param_1[5] = &PTR_FUN_14a654b00;
  param_1[6] = &PTR_LAB_14a654b40;
  param_1[0x55] = 0;
  *(undefined1 *)((longlong)param_1 + 0x1fb) = 0;
  return param_1;
}



// FUNCTION 1459b2dbc FUN_1459b2dbc body=72 status=ok
// SIG undefined FUN_1459b2dbc(void)

undefined8 * FUN_1459b2dbc(undefined8 *param_1)

{
  FUN_1400ead26();
  *param_1 = &PTR_FUN_14a702590;
  param_1[5] = &PTR_FUN_14a702b70;
  param_1[6] = &PTR_LAB_14a702bb0;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) | 2;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 0x55) = 0x42c80000;
  return param_1;
}



// FUNCTION 1459b2e04 FUN_1459b2e04 body=152 status=ok
// SIG undefined FUN_1459b2e04(void)

bool FUN_1459b2e04(longlong param_1,undefined4 param_2)

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



// FUNCTION 1459b2eba FUN_1459b2eba body=45 status=ok
// SIG undefined FUN_1459b2eba(void)

undefined8 FUN_1459b2eba(undefined8 param_1,int param_2)

{
  FUN_1459b2ee8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x270);
  }
  return param_1;
}



// FUNCTION 1459b2ee8 FUN_1459b2ee8 body=107 status=ok
// SIG undefined FUN_1459b2ee8(void)

void FUN_1459b2ee8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b5ffb50;
  if (param_1[0x45] != 0) {
    FUN_1400020a8();
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
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1459b2f54 FUN_1459b2f54 body=40 status=ok
// SIG undefined FUN_1459b2f54(void)

undefined8 FUN_1459b2f54(undefined8 param_1,int param_2)

{
  FUN_1459b2f7c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459b2f7c FUN_1459b2f7c body=66 status=ok
// SIG undefined FUN_1459b2f7c(void)

void FUN_1459b2f7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b7ba310;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_1459b2fbe(param_1 + 7);
  FUN_1403159fa(param_1);
  return;
}



// FUNCTION 1459b2fbe FUN_1459b2fbe body=53 status=ok
// SIG undefined FUN_1459b2fbe(void)

void FUN_1459b2fbe(longlong *param_1)

{
  FUN_1459b2ff4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459b2ff4 FUN_1459b2ff4 body=90 status=ok
// SIG undefined FUN_1459b2ff4(void)

void FUN_1459b2ff4(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 1459b304e FUN_1459b304e body=582 status=ok
// SIG undefined FUN_1459b304e(void)

void FUN_1459b304e(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  char *pcVar9;
  byte bVar10;
  byte bVar11;
  float fVar12;
  undefined1 auStack_98 [36];
  int local_74;
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = FUN_1459b3296();
  lVar4 = FUN_141427ed0(param_1);
  if (lVar4 != 0) {
    lVar5 = FUN_144a5dd5e();
    if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
         == lVar5 + 0x30)) && (iVar2 = FUN_1408966e4(lVar4), iVar2 != -1 && lVar3 != 0)) {
      *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
      if ((longlong)*(int *)(param_1 + 0xc0) != 0) {
        lVar4 = *(longlong *)(param_1 + 0xb8);
        local_58 = (longlong)*(int *)(param_1 + 0xc0) * 0x70 + lVar4;
        do {
          local_70 = 0;
          if ((longlong)*(int *)(lVar4 + 0x50) == 0) {
            fVar12 = 0.0;
            bVar11 = 0;
          }
          else {
            local_60 = *(longlong *)(lVar4 + 0x48);
            local_68 = (longlong)*(int *)(lVar4 + 0x50) * 0x18;
            lVar5 = 0;
            local_74 = 0;
            bVar11 = 0;
            do {
              local_50 = *(undefined8 *)(local_60 + lVar5);
              plVar6 = (longlong *)FUN_1403363fe(lVar3,&local_50);
              if (plVar6 != (longlong *)0x0) {
                plVar7 = (longlong *)FUN_1403362f0(lVar3,iVar2,plVar6);
                if (plVar7 != (longlong *)0x0) {
                  lVar8 = FUN_140d18446(lVar3,iVar2,plVar6);
                  if (lVar8 == 0) {
                    if (*plVar6 != 0) {
                      pcVar9 = (char *)(*plVar6 + 200);
                      goto LAB_1459b31b4;
                    }
LAB_1459b31e5:
                    bVar10 = 0;
                  }
                  else {
                    pcVar9 = (char *)(lVar8 + 0x28);
LAB_1459b31b4:
                    if (*pcVar9 != '\x01') goto LAB_1459b31e5;
                    bVar10 = 1;
                    if (((DAT_14cbd56d8 == '\0') && (*plVar7 == 0)) &&
                       (*(char *)((longlong)plVar7 + 0x12) == '\0')) {
                      if (*plVar6 == 0) {
                        bVar10 = 0;
                      }
                      else {
                        bVar10 = *(byte *)(*plVar6 + 0xc9);
                      }
                      bVar10 = bVar10 ^ 1;
                    }
                  }
                  if ((*(char *)((longlong)plVar7 + 0x11) == '\0') &&
                     (*(char *)((longlong)plVar7 + 0x12) != '\x01')) {
                    bVar1 = *(byte *)(plVar7 + 2);
                  }
                  else {
                    bVar1 = FUN_1412f7d10(plVar6);
                  }
                  bVar11 = bVar10 & 1 | bVar11;
                  local_74 = local_74 + (uint)bVar1;
                }
                bVar10 = FUN_1412f7d10(plVar6);
                local_70 = (ulonglong)((int)local_70 + (uint)bVar10);
              }
              lVar5 = lVar5 + 0x18;
            } while (local_68 != lVar5);
            fVar12 = 0.0;
            if ((int)local_70 != 0) {
              fVar12 = (float)local_74 / (float)(int)local_70;
            }
          }
          FUN_148e1b7bc(lVar4,fVar12);
          *(byte *)(lVar4 + 0x42) = *(byte *)(lVar4 + 0x42) & 0xfd | bVar11 * '\x02';
          lVar4 = lVar4 + 0x70;
        } while (lVar4 != local_58);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459b3296 FUN_1459b3296 body=80 status=ok
// SIG undefined FUN_1459b3296(void)

undefined8 FUN_1459b3296(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_141427ed0();
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) && (lVar1 = FUN_140c154c8(lVar1), lVar1 != 0)) {
      return *(undefined8 *)(lVar1 + 0x170);
    }
  }
  return 0;
}



// FUNCTION 1459b32e6 FUN_1459b32e6 body=754 status=ok
// SIG undefined FUN_1459b32e6(void)

void FUN_1459b32e6(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  byte *pbVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong lStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1459b35da();
  puVar4 = (undefined8 *)FUN_144a06846(param_2,&DAT_14cb78160);
  if (((byte *)*puVar4 == (byte *)0x0) || ((~*(byte *)*puVar4 & 3) != 0)) goto LAB_1459b3593;
  uVar5 = FUN_144a06846(puVar4,&DAT_14cb78188);
  uVar5 = FUN_140625082(uVar5,&DAT_14c9a12e0);
  FUN_1447325ac(uVar5,&local_78,1);
  *(longlong *)(param_1 + 0x48) = local_78;
  uVar5 = FUN_144a06846(puVar4,&DAT_14cb781b0);
  uVar5 = FUN_140625082(uVar5,&DAT_14c9a12e0);
  FUN_1447325ac(uVar5,&local_80,1);
  local_78 = local_80;
  uVar5 = FUN_141030812();
  local_70 = FUN_14477b664(uVar5);
  lStack_68 = 0;
  uVar5 = 0;
  if ((local_70 != 0) && (local_80 != 0)) {
    plVar1 = *(longlong **)(local_70 + 0xb8);
    if (plVar1 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar3 != '\0') {
        uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
        uVar5 = FUN_144aff482(uVar5,&local_78);
        goto LAB_1459b3412;
      }
    }
    uVar5 = 0;
  }
LAB_1459b3412:
  *(undefined8 *)(param_1 + 0x50) = uVar5;
  puVar6 = (undefined8 *)FUN_144a06846(puVar4,&DAT_14cb781d8);
  pbVar2 = (byte *)*puVar6;
  if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 3) == 2)) {
    lVar8 = (longlong)(int)(*(longlong **)(pbVar2 + 8))[2];
    if (lVar8 != 0) {
      lVar7 = **(longlong **)(pbVar2 + 8);
      lVar8 = lVar8 << 4;
      do {
        uVar5 = FUN_140625082(lVar7,&DAT_14c9a12e0);
        FUN_1447325ac(uVar5,&local_78,1);
        FUN_1409d9716(param_1 + 0x58,&local_78);
        lVar7 = lVar7 + 0x10;
        lVar8 = lVar8 + -0x10;
      } while (lVar8 != 0);
    }
  }
  puVar4 = (undefined8 *)FUN_144a06846(puVar4,&DAT_14cb78200);
  pbVar2 = (byte *)*puVar4;
  if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 3) == 2)) {
    lVar8 = (longlong)(int)(*(longlong **)(pbVar2 + 8))[2];
    if (lVar8 != 0) {
      lVar7 = **(longlong **)(pbVar2 + 8);
      lVar8 = lVar8 << 4;
      do {
        uVar5 = FUN_140625082(lVar7,&DAT_14c9a12e0);
        FUN_1447325ac(uVar5,&local_88,1);
        local_78 = local_88;
        local_70 = 0;
        lStack_68 = 0;
        uVar5 = FUN_141030812();
        local_70 = FUN_14477b664(uVar5);
        if (lStack_68 == 0) {
          if ((local_78 != 0) && (local_70 != 0)) {
            plVar1 = *(longlong **)(local_70 + 0xb8);
            if (plVar1 != (longlong *)0x0) {
              cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1);
              if (cVar3 != '\0') {
                uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
                local_78 = FUN_144aff482(uVar5,&local_78);
                if (local_78 != 0) goto LAB_1459b357a;
                goto LAB_1459b3585;
              }
            }
            local_78 = 0;
          }
        }
        else {
          local_78 = lStack_68;
LAB_1459b357a:
          FUN_141427f78(param_1 + 0x68,&local_78);
        }
LAB_1459b3585:
        lVar7 = lVar7 + 0x10;
        lVar8 = lVar8 + -0x10;
      } while (lVar8 != 0);
    }
  }
LAB_1459b3593:
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459b35da FUN_1459b35da body=85 status=ok
// SIG undefined FUN_1459b35da(void)

void FUN_1459b35da(longlong param_1)

{
  if (*(int *)(param_1 + 100) < 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    FUN_1402191ca(param_1 + 0x58,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if (*(int *)(param_1 + 0x74) < 0) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    FUN_14882b814(param_1 + 0x68);
  }
  else {
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



// FUNCTION 1459b3630 FUN_1459b3630 body=132 status=ok
// SIG undefined FUN_1459b3630(void)

void FUN_1459b3630(longlong param_1,int param_2)

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



// FUNCTION 1459b36b6 FUN_1459b36b6 body=39 status=ok
// SIG undefined FUN_1459b36b6(void)

void FUN_1459b36b6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001459b36d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 1459b36de FUN_1459b36de body=190 status=ok
// SIG undefined FUN_1459b36de(void)

longlong FUN_1459b36de(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar2 != 0) goto LAB_1459b372d;
          break;
        }
        iVar1 = *(int *)(lVar2 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1459b379e(param_1,&local_1c,param_2);
  lVar2 = (longlong)local_1c * 0x20 + *param_1;
LAB_1459b372d:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 + 8;
}



// FUNCTION 1459b379e FUN_1459b379e body=283 status=ok
// SIG undefined FUN_1459b379e(void)

undefined4 * FUN_1459b379e(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_1459b3970(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  FUN_1457bbb8e(0,0);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_1459b38ba(param_1,param_3,local_40,local_48);
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
      FUN_1459b3a56(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459b38ba FUN_1459b38ba body=181 status=ok
// SIG undefined FUN_1459b38ba(void)

undefined8 FUN_1459b38ba(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          FUN_1457bbb8e(*(undefined8 *)(puVar1 + 2),puVar1[4]);
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_148e44c30(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1459b3970 FUN_1459b3970 body=230 status=ok
// SIG undefined FUN_1459b3970(void)

int * FUN_1459b3970(longlong *param_1,int *param_2)

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



// FUNCTION 1459b3a56 FUN_1459b3a56 body=485 status=ok
// SIG undefined FUN_1459b3a56(void)

void FUN_1459b3a56(longlong *param_1)

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



// FUNCTION 1459b3c46 FUN_1459b3c46 body=126 status=ok
// SIG undefined FUN_1459b3c46(void)

void FUN_1459b3c46(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b242ff0;
  param_1[10] = &PTR_FUN_14b243050;
  plVar3 = (longlong *)param_1[0x10];
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
  param_1[10] = &PTR_LAB_14b243070;
  FUN_1414280cb(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_140d8c2c6(param_1);
  return;
}



// FUNCTION 1459b3cc4 FUN_1459b3cc4 body=40 status=ok
// SIG undefined FUN_1459b3cc4(void)

undefined8 FUN_1459b3cc4(undefined8 param_1,int param_2)

{
  FUN_1459b3cec();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459b3cec FUN_1459b3cec body=299 status=ok
// SIG undefined FUN_1459b3cec(void)

void FUN_1459b3cec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba51760;
  FUN_144760e21(param_1[0x19],*(undefined4 *)(param_1 + 0x1a));
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x13],*(undefined4 *)(param_1 + 0x14));
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1459b3e17(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1459b3e17 FUN_1459b3e17 body=77 status=ok
// SIG undefined FUN_1459b3e17(void)

void FUN_1459b3e17(longlong param_1,int param_2)

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



// FUNCTION 1459b3e64 FUN_1459b3e64 body=351 status=ok
// SIG undefined FUN_1459b3e64(void)

void FUN_1459b3e64(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_138 [40];
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  code *local_b8 [2];
  undefined8 *local_a8;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_110 = *param_1;
  uVar4 = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = *(undefined4 *)(param_1 + 2);
  uVar8 = param_1[3];
  uVar9 = param_1[4];
  param_1[3] = 0;
  param_1[4] = 0;
  uVar1 = *(undefined1 *)(param_1 + 5);
  uVar5 = param_1[6];
  param_1[6] = 0;
  uVar3 = *(undefined4 *)(param_1 + 7);
  *(undefined4 *)(param_1 + 7) = 0;
  uVar6 = param_1[8];
  uVar7 = param_1[9];
  param_1[8] = 0;
  param_1[9] = 0;
  local_b8[0] = (code *)0x0;
  local_f8 = uVar2;
  local_e0 = uVar1;
  local_a8 = (undefined8 *)FUN_14001cc68(0x58,8);
  *local_a8 = &PTR_LAB_14ae37cc0;
  local_108 = 0;
  local_100 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_a8[1] = local_110;
  local_a8[2] = uVar4;
  *(undefined4 *)(local_a8 + 3) = uVar2;
  local_a8[4] = uVar8;
  local_a8[5] = uVar9;
  *(undefined1 *)(local_a8 + 6) = uVar1;
  local_a8[7] = uVar5;
  *(undefined4 *)(local_a8 + 8) = uVar3;
  local_a8[9] = uVar6;
  local_a8[10] = uVar7;
  if (local_a8 + 1 != (undefined8 *)0x0) {
    local_b8[0] = FUN_143ae3454;
  }
  FUN_1407461b0(0x4ff,local_b8);
  FUN_141428114(&local_108);
  if ((local_70 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459b3fc4 FUN_1459b3fc4 body=181 status=ok
// SIG undefined FUN_1459b3fc4(void)

void FUN_1459b3fc4(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1459b407a();
  if (param_3 != 0) {
    FUN_1405a76a4(param_3,&local_30);
    plVar3 = local_28;
    *(undefined8 *)(param_1 + 0x38) = local_30;
    plVar2 = *(longlong **)(param_1 + 0x40);
    if (plVar2 != local_28) {
      if (local_28 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_28 + 0xc) = *(int *)((longlong)local_28 + 0xc) + 1;
        UNLOCK();
        plVar2 = *(longlong **)(param_1 + 0x40);
      }
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      *(longlong **)(param_1 + 0x40) = plVar3;
      plVar3 = local_28;
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
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459b407a FUN_1459b407a body=16 status=ok
// SIG undefined FUN_1459b407a(void)

void FUN_1459b407a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  FUN_14485c47a(param_1 + 0x10,param_3);
  return;
}



// FUNCTION 1459b408a FUN_1459b408a body=59 status=ok
// SIG undefined FUN_1459b408a(void)

void FUN_1459b408a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(undefined1 *)(param_1 + 0x2f0) = 1;
  iVar1 = *(int *)(param_1 + 0x50);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    lVar3 = 0;
    do {
      FUN_1459b40c6(*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  return;
}



// FUNCTION 1459b40c6 FUN_1459b40c6 body=14 status=ok
// SIG undefined FUN_1459b40c6(void)

void FUN_1459b40c6(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001459b40cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2a0))();
  return;
}



// FUNCTION 1459b40d4 FUN_1459b40d4 body=40 status=ok
// SIG undefined FUN_1459b40d4(void)

undefined8 FUN_1459b40d4(undefined8 param_1,int param_2)

{
  FUN_1459b40fc();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459b40fc FUN_1459b40fc body=106 status=ok
// SIG undefined FUN_1459b40fc(void)

void FUN_1459b40fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b830a60;
  param_1[6] = &PTR_FUN_14b830d50;
  param_1[7] = &PTR_LAB_14b830de0;
  FUN_1447a1747(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 9);
  FUN_140b3fd78(param_1);
  return;
}



// FUNCTION 1459b4166 FUN_1459b4166 body=40 status=ok
// SIG undefined FUN_1459b4166(void)

undefined8 FUN_1459b4166(undefined8 param_1,int param_2)

{
  FUN_1459b418e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459b418e FUN_1459b418e body=330 status=ok
// SIG undefined FUN_1459b418e(void)

void FUN_1459b418e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b449db0;
  FUN_1459b42d8(param_1[0x1e],*(undefined4 *)(param_1 + 0x1f));
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x1c],*(undefined4 *)(param_1 + 0x1d));
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_145965e23(param_1[0x17],*(undefined4 *)(param_1 + 0x18));
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1459b4349(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_14111bf7d(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1459b42d8 FUN_1459b42d8 body=38 status=ok
// SIG undefined FUN_1459b42d8(void)

void FUN_1459b42d8(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1459b42fe(param_1);
    param_1 = param_1 + 0x40;
  }
  return;
}



// FUNCTION 1459b42fe FUN_1459b42fe body=75 status=ok
// SIG undefined FUN_1459b42fe(void)

void FUN_1459b42fe(longlong *param_1)

{
  if (param_1[6] != 0) {
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



// FUNCTION 1459b4349 FUN_1459b4349 body=49 status=ok
// SIG undefined FUN_1459b4349(void)

void FUN_1459b4349(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1459b4382 FUN_1459b4382 body=409 status=ok
// SIG undefined FUN_1459b4382(void)

undefined8 * FUN_1459b4382(undefined8 *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b0f9570;
  param_1[0xb] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x4fc71eb4;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x4fc71eb4;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x4fc71eb4;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0x4120000041200000;
  *(undefined4 *)(param_1 + 0x1d) = 0x42340000;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x41f00000;
  *(undefined4 *)(param_1 + 0x22) = 0x3f5db3d0;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x23) = 0x41f00000;
  *(undefined1 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x24] = 0x3f7746ed41700000;
  *(undefined4 *)(param_1 + 0x25) = 0x3f400000;
  *(undefined2 *)((longlong)param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined4 *)(param_1 + 3) = 0x3f666666;
  FUN_1446f470e(&local_20,L"L_Foot",1);
  *(undefined8 *)((longlong)param_1 + 0x4c) = local_20;
  FUN_1446f470e(&local_20,L"Root",1);
  param_1[0x17] = local_20;
  FUN_1446f470e(&local_20,L"Speed",1);
  param_1[0x18] = local_20;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x432f0000;
  *(undefined4 *)(param_1 + 0x1e) = 0x40e00000;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x42340000;
  *(undefined4 *)(param_1 + 0x1f) = 0xbf3504f3;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0x4334000042c80000;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0x3f8000003f4ccccd;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459b451c FUN_1459b451c body=27 status=ok
// SIG undefined FUN_1459b451c(void)

byte FUN_1459b451c(undefined2 *param_1)

{
  byte bVar1;
  
  bVar1 = FUN_1459b4538(*param_1);
  return bVar1 & (byte)*(undefined4 *)(param_1 + 4);
}



// FUNCTION 1459b4538 FUN_1459b4538 body=88 status=ok
// SIG undefined FUN_1459b4538(void)

ulonglong FUN_1459b4538(ushort param_1)

{
  char cVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)param_1;
  if ((((2 < (int)(&DAT_14ca814b8)[uVar2 * 0xf]) && (cVar1 = FUN_141051ab2(), cVar1 != '\0')) &&
      (*(longlong *)(&DAT_14ca814b0 + uVar2 * 0x3c) != DAT_14ca81490)) &&
     (((*(byte *)((longlong)&DAT_14ca814d0 + uVar2 * 0x3c + 2) & 0x80) == 0 &&
      ((&DAT_14ca814b8)[uVar2 * 0xf] != 1)))) {
    uVar2 = FUN_14473b0f0();
    return uVar2 ^ 1;
  }
  return 0;
}



// FUNCTION 1459b4590 FUN_1459b4590 body=63 status=ok
// SIG undefined FUN_1459b4590(void)

void FUN_1459b4590(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_1459b462a(param_1);
    FUN_1459b45d0(param_1);
    return;
  }
  FUN_1459b45d0(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_145daca5e(param_1);
  return;
}



// FUNCTION 1459b45d0 FUN_1459b45d0 body=90 status=ok
// SIG undefined FUN_1459b45d0(void)

void FUN_1459b45d0(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1407f13e6(param_1,0);
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



// FUNCTION 1459b462a FUN_1459b462a body=327 status=ok
// SIG undefined FUN_1459b462a(void)

void FUN_1459b462a(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x20 + (longlong)iVar4 * 0x24) * 4) =
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



// FUNCTION 1459b4772 FUN_1459b4772 body=40 status=ok
// SIG undefined FUN_1459b4772(void)

undefined8 FUN_1459b4772(undefined8 param_1,int param_2)

{
  FUN_1459b479a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459b479a FUN_1459b479a body=70 status=ok
// SIG undefined FUN_1459b479a(void)

void FUN_1459b479a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b479ed0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  FUN_1459b47e0(param_1 + 0x72);
  FUN_140bd4d6a(param_1);
  return;
}



// FUNCTION 1459b47e0 FUN_1459b47e0 body=53 status=ok
// SIG undefined FUN_1459b47e0(void)

void FUN_1459b47e0(longlong *param_1)

{
  FUN_1459b4816();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459b4816 FUN_1459b4816 body=88 status=ok
// SIG undefined FUN_1459b4816(void)

void FUN_1459b4816(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 1459b486e FUN_1459b486e body=41 status=ok
// SIG undefined FUN_1459b486e(void)

undefined4 FUN_1459b486e(longlong *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x390))();
  if ((char)uVar1 != '\0') {
    FUN_141357988(param_1);
  }
  return uVar1;
}



// FUNCTION 1459b489e FUN_1459b489e body=301 status=ok
// SIG undefined FUN_1459b489e(void)

undefined4 FUN_1459b489e(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = param_1[0x2a];
  uVar1 = 0;
  (**(code **)(*param_1 + 0x360))(param_1,&local_40,0);
  if (*(int *)(param_1[0xb] + 0x2d0) == local_38) {
    FUN_1459b4ab0(lVar2,&local_40);
    uVar1 = (**(code **)(*(longlong *)param_1[0xb] + 0x310))((longlong *)param_1[0xb],lVar2);
    if ((char)uVar1 != '\0') {
      *(undefined1 *)(param_1 + 0x47) = 0;
    }
    param_1[9] = 0;
    lVar2 = FUN_1459b4a54(lVar2);
    lVar2 = *(longlong *)(lVar2 + 0x50);
    FUN_1459b49cc(lVar2);
    FUN_1459b4a10(lVar2 + 0x50);
    if ((longlong)(int)param_1[0x40] != 0) {
      lVar2 = 0;
      do {
        if ((*(int *)(param_1[0x3f] + 8 + lVar2) != 0) &&
           (*(longlong *)(param_1[0x3f] + lVar2) != 0)) {
          *(int *)((longlong)param_1 + 0x23c) = *(int *)((longlong)param_1 + 0x23c) + 1;
          FUN_1459b4b66(param_1 + 0x3f,param_1,param_2);
          *(int *)((longlong)param_1 + 0x23c) = *(int *)((longlong)param_1 + 0x23c) + -1;
          break;
        }
        lVar2 = lVar2 + 0x10;
      } while ((longlong)(int)param_1[0x40] * 0x10 != lVar2);
    }
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1459b49cc FUN_1459b49cc body=68 status=ok
// SIG undefined FUN_1459b49cc(void)

void FUN_1459b49cc(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_14917ecd8();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_1405b3ec2(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1459b4a10 FUN_1459b4a10 body=68 status=ok
// SIG undefined FUN_1459b4a10(void)

void FUN_1459b4a10(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_14917ee1c();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_140411364(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1459b4a54 FUN_1459b4a54 body=91 status=ok
// SIG undefined FUN_1459b4a54(void)

longlong FUN_1459b4a54(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x17);
  lVar2 = FUN_1408cc5ba();
  if (((lVar2 == 0) || (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
      lVar2 + 0x30)) {
    uVar3 = FUN_1408cc5ba();
    (**(code **)(*param_1 + 8))(param_1,uVar3);
  }
  return param_1[0x18];
}



// FUNCTION 1459b4ab0 FUN_1459b4ab0 body=139 status=ok
// SIG undefined FUN_1459b4ab0(void)

void FUN_1459b4ab0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  iVar2 = (int)param_2[1];
  plVar1 = (longlong *)(param_1 + 0x218);
  FUN_1459b4b3c(plVar1,iVar2);
  if (0 < (longlong)iVar2) {
    lVar5 = 0;
    do {
      uVar4 = *(undefined8 *)(*param_2 + 0x28 + lVar5);
      iVar3 = *(int *)(param_1 + 0x220);
      *(uint *)(param_1 + 0x220) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x224) < iVar3 + 1U) {
        FUN_14917ec52(plVar1,iVar3);
      }
      *(undefined8 *)(*plVar1 + (longlong)iVar3 * 8) = uVar4;
      lVar5 = lVar5 + 0x30;
    } while ((longlong)iVar2 * 0x30 != lVar5);
  }
  return;
}



// FUNCTION 1459b4b3c FUN_1459b4b3c body=41 status=ok
// SIG undefined FUN_1459b4b3c(void)

void FUN_1459b4b3c(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_1459b4c14();
  return;
}



// FUNCTION 1459b4b66 FUN_1459b4b66 body=173 status=ok
// SIG undefined FUN_1459b4b66(void)

void FUN_1459b4b66(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
        goto LAB_1459b4bfd;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1459b4bfd:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1459b4c14 FUN_1459b4c14 body=96 status=ok
// SIG undefined FUN_1459b4c14(void)

void FUN_1459b4c14(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1459b4c74 FUN_1459b4c74 body=128 status=ok
// SIG undefined FUN_1459b4c74(void)

void FUN_1459b4c74(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  puVar3 = (undefined8 *)*param_2;
  uVar4 = *puVar3;
  uVar5 = puVar3[4];
  uVar1 = *(undefined4 *)puVar3[8];
  uVar2 = *(undefined1 *)puVar3[0xc];
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar7 = FUN_144828ac0(puVar3 + 0x10,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  FUN_1459b4cf4(*(undefined8 *)(param_1 + 0xc0),uVar4,uVar5,uVar1,uVar2,uVar7);
  return;
}



// FUNCTION 1459b4cf4 FUN_1459b4cf4 body=382 status=ok
// SIG undefined FUN_1459b4cf4(void)

void FUN_1459b4cf4(longlong param_1,undefined8 param_2,undefined8 param_3,float param_4,
                  undefined1 param_5,longlong param_6)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  longlong local_140;
  undefined1 local_138;
  longlong local_130;
  undefined8 local_128 [12];
  undefined8 local_c8 [13];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (1e-08 <= param_4) {
    puVar7 = &DAT_14c846480;
    puVar8 = local_c8;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar7 = &DAT_14c846480;
    puVar8 = local_128;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    cVar2 = FUN_144828dba(param_6,param_2,*(undefined8 *)(param_1 + 0x1b0));
    if (((cVar2 != '\0') && (*(longlong *)(param_6 + 0x18) != 0)) &&
       ((bVar1 = *(byte *)(*(longlong *)(param_6 + 0x18) + 0x10), bVar1 - 1 < 2 ||
        (((bVar1 < 0x21 && ((0x100010010U >> ((ulonglong)(uint)bVar1 & 0x3f) & 1) != 0)) ||
         (bVar1 == 0x80)))))) {
      uVar3 = FUN_1459b4e74();
      puVar4 = (undefined1 *)FUN_1459b4e7c(uVar3);
      uVar6 = (uint)CONCAT71((int7)((ulonglong)puVar7 >> 8),*puVar4) ^ 1;
      local_140 = param_6;
      local_148 = local_c8;
      FUN_144828832(param_1,param_2,uVar6,0);
      FUN_1459b4e90(param_1,param_3,local_c8,local_128);
      local_130 = param_6;
      local_138 = param_5;
      local_140 = CONCAT44(local_140._4_4_,param_4);
      local_148 = local_128;
      FUN_1401228d0(param_1,param_2,uVar6,0);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459b4e74 FUN_1459b4e74 body=8 status=ok
// SIG undefined FUN_1459b4e74(void)

longlong FUN_1459b4e74(longlong param_1)

{
  return param_1 + 0x88;
}



// FUNCTION 1459b4e7c FUN_1459b4e7c body=19 status=ok
// SIG undefined FUN_1459b4e7c(void)

undefined1 * FUN_1459b4e7c(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = &DAT_14bb83710;
  if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_1 + 8);
  }
  return puVar1;
}



// FUNCTION 1459b4e90 FUN_1459b4e90 body=1846 status=ok
// SIG undefined FUN_1459b4e90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1459b4e90(undefined4 param_1,double *param_2,double *param_3,ulonglong *param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar22;
  undefined1 auVar21 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auStack_288 [32];
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_c0;
  
  auVar37 = _DAT_149934d80;
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  auVar27 = *(undefined1 (*) [16])(param_3 + 8);
  dVar3 = auVar27._0_8_;
  dVar7 = auVar27._8_8_;
  auVar23 = *(undefined1 (*) [16])(param_3 + 10);
  dVar4 = auVar23._0_8_;
  auVar28 = *(undefined1 (*) [16])(param_2 + 8);
  dVar5 = auVar28._0_8_;
  dVar8 = auVar28._8_8_;
  auVar2 = *(undefined1 (*) [16])(param_2 + 10);
  dVar6 = auVar2._0_8_;
  auVar27 = minpd(auVar28,auVar27);
  auVar31 = minpd(auVar2,auVar23);
  auVar28._8_8_ = -(ulonglong)(auVar27._8_8_ < 0.0);
  auVar28._0_8_ = -(ulonglong)(auVar27._0_8_ < 0.0);
  iVar16 = movmskpd((int)local_c0,auVar28);
  auVar27._8_8_ = -(ulonglong)(auVar31._8_8_ < 0.0);
  auVar27._0_8_ = -(ulonglong)(auVar31._0_8_ < 0.0);
  uVar17 = movmskpd(param_1,auVar27);
  if ((uVar17 & 0x3fffffff) == 0 && iVar16 == 0) {
    dVar34 = *param_2;
    dVar36 = param_2[1];
    dVar10 = param_2[2];
    dVar11 = param_2[3];
    dVar12 = *param_3;
    dVar13 = param_3[1];
    dVar14 = param_3[2];
    dVar15 = param_3[3];
    dVar1 = param_3[3];
    dVar35 = param_3[3];
    dVar22 = param_3[1];
    dVar32 = param_3[1];
    dVar33 = param_3[2];
    dVar30 = param_3[2];
    dVar26 = dVar36 * dVar33 * -1.0 + dVar10 * dVar22 + dVar11 * *param_3 * 1.0 + dVar34 * dVar1;
    dVar29 = dVar34 * dVar30 * 1.0 + dVar11 * dVar32 + dVar10 * *param_3 * -1.0 + dVar36 * dVar35;
    auVar37._0_8_ =
         dVar11 * dVar33 * 1.0 + ((*param_3 * dVar36 * 1.0 + dVar10 * dVar1) - dVar34 * dVar22);
    auVar37._8_8_ =
         dVar10 * dVar30 * -1.0 + ((*param_3 * dVar34 * -1.0 + dVar11 * dVar35) - dVar36 * dVar32);
    dVar33 = param_2[4] * dVar3;
    dVar34 = param_2[5] * dVar7;
    dVar36 = param_2[6] * dVar4;
    dVar10 = param_2[7] * auVar23._8_8_;
    dVar22 = dVar34 * dVar12 - dVar13 * dVar33;
    dVar32 = dVar36 * dVar13 - dVar14 * dVar34;
    dVar30 = dVar33 * dVar14 - dVar12 * dVar36;
    dVar11 = dVar10 * dVar15 - dVar15 * dVar10;
    dVar32 = dVar32 + dVar32;
    dVar30 = dVar30 + dVar30;
    dVar22 = dVar22 + dVar22;
    dVar11 = dVar11 + dVar11;
    local_e8 = (dVar22 * dVar13 - dVar14 * dVar30) + dVar1 * dVar32 + dVar33 + param_3[4];
    dStack_e0 = (dVar32 * dVar14 - dVar22 * dVar12) + dVar35 * dVar30 + dVar34 + param_3[5];
    local_d8 = (dVar30 * dVar12 - dVar13 * dVar32) + dVar1 * dVar22 + dVar36 + param_3[6];
    dVar35 = (dVar11 * dVar15 - dVar11 * dVar15) + dVar35 * dVar11 + dVar10 + param_3[7];
  }
  else {
    dVar1 = *param_3;
    dVar22 = param_3[1];
    dVar32 = param_3[2];
    dVar30 = dVar22 + dVar22;
    dVar33 = dVar32 + dVar32;
    dVar29 = dVar1 * (dVar1 + dVar1);
    local_178 = (1.0 - (dVar29 + dVar22 * dVar30)) * dVar4;
    dVar26 = param_3[3];
    dVar34 = dVar33 * dVar26;
    dVar36 = (dVar1 + dVar1) * param_3[3];
    dVar26 = dVar30 * dVar26;
    local_188 = (dVar26 + *param_3 * dVar33) * dVar4;
    dVar29 = (DAT_149934d80._8_8_ - (dVar32 * dVar33 + dVar29)) * dVar7;
    dVar35 = (dVar30 * dVar1 + dVar34) * dVar3;
    local_198 = (dVar33 * dVar22 + dVar36) * dVar7;
    dStack_180 = (dVar33 * dVar22 - dVar36) * dVar4;
    local_1b8 = (*param_3 * dVar33 - dVar26) * dVar3;
    local_1c8._8_4_ = SUB84(dVar35,0);
    local_1c8._0_8_ = ((double)DAT_149934d80 - (dVar32 * dVar33 + dVar22 * dVar30)) * dVar3;
    local_1c8._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
    uStack_1b0 = 0;
    local_1a8._8_4_ = SUB84(dVar29,0);
    local_1a8._0_8_ = (dVar30 * dVar1 - dVar34) * dVar7;
    local_1a8._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
    uStack_190 = 0;
    uStack_170 = 0;
    local_168 = param_3[4];
    dStack_160 = param_3[5];
    local_158 = param_3[6];
    uStack_150 = 0x3ff0000000000000;
    dVar35 = *param_2;
    dVar1 = param_2[1];
    dVar22 = param_2[2];
    dVar32 = dVar1 + dVar1;
    dVar30 = dVar22 + dVar22;
    dVar29 = dVar35 * (dVar35 + dVar35);
    local_1f8 = (1.0 - (dVar29 + dVar1 * dVar32)) * dVar6;
    dVar26 = param_2[3];
    dVar33 = dVar30 * dVar26;
    dVar34 = (dVar35 + dVar35) * param_2[3];
    dVar26 = dVar32 * dVar26;
    local_208 = (dVar26 + *param_2 * dVar30) * dVar6;
    dStack_200 = (dVar30 * dVar1 - dVar34) * dVar6;
    local_248 = ((double)DAT_149934d80 - (dVar22 * dVar30 + dVar1 * dVar32)) * dVar5;
    dVar29 = (DAT_149934d80._8_8_ - (dVar22 * dVar30 + dVar29)) * dVar8;
    dStack_240 = (dVar32 * dVar35 + dVar33) * dVar5;
    local_218 = (dVar30 * dVar1 + dVar34) * dVar8;
    local_238 = (*param_2 * dVar30 - dVar26) * dVar5;
    uStack_230 = 0;
    local_228._8_4_ = SUB84(dVar29,0);
    local_228._0_8_ = (dVar32 * dVar35 - dVar33) * dVar8;
    local_228._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
    uStack_210 = 0;
    uStack_1f0 = 0;
    local_1e8 = param_2[4];
    dStack_1e0 = param_2[5];
    local_1d8 = param_2[6];
    uStack_1d0 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_148,&local_248,local_1c8);
    FUN_144a1c686(&local_148,0x3e45798ee0000000);
    auVar31._8_8_ = -(ulonglong)(0.0 <= dVar7 * dVar8);
    auVar31._0_8_ = -(ulonglong)(0.0 <= dVar3 * dVar5);
    auVar27 = blendvpd(_DAT_149936790,auVar37,auVar31);
    uVar18 = -(ulonglong)(0.0 <= dVar4 * dVar6);
    dVar26 = (double)(~uVar18 & 0xbff0000000000000 | uVar18 & 0x3ff0000000000000);
    dVar29 = auVar27._0_8_;
    local_138 = local_138 * dVar29;
    local_140 = local_140 * dVar29;
    local_148 = local_148 * dVar29;
    dVar29 = auVar27._8_8_;
    local_118 = local_118 * dVar29;
    local_120 = local_120 * dVar29;
    local_128 = dVar29 * local_128;
    local_f8 = local_f8 * dVar26;
    local_100 = local_100 * dVar26;
    local_108 = dVar26 * local_108;
    FUN_14481fd10(&local_268,&local_148);
    dVar26 = local_258 * local_258 + local_268 * local_268;
    dVar29 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
    auVar25._0_8_ = dVar26 + dVar29;
    auVar25._8_8_ = dVar26 + dVar29;
    auVar20._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar25._8_8_);
    auVar20._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar25._0_8_);
    auVar27 = sqrtpd(auVar25,auVar25);
    auVar27 = divpd(auVar37,auVar27);
    auVar38._0_8_ = auVar27._0_8_ * local_258;
    auVar38._8_8_ = auVar27._8_8_ * dStack_250;
    dVar26 = (double)((ulonglong)(local_268 * auVar27._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar25._0_8_));
    dVar29 = (double)((ulonglong)(dStack_260 * auVar27._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar25._8_8_));
    auVar37 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar38,auVar20);
    dVar35 = 0.0;
  }
  dVar1 = auVar2._8_8_ * auVar23._8_8_;
  auVar2._8_4_ = SUB84(dStack_e0,0);
  auVar2._0_8_ = local_e8;
  auVar2._12_4_ = (int)((ulonglong)dStack_e0 >> 0x20);
  *(undefined1 (*) [16])(param_4 + 4) = auVar2;
  param_4[6] = (ulonglong)local_d8;
  param_4[7] = (ulonglong)dVar35;
  dVar32 = auVar37._0_8_;
  dVar30 = auVar37._8_8_;
  dVar35 = dVar32 * dVar32 + dVar26 * dVar26;
  dVar22 = dVar30 * dVar30 + dVar29 * dVar29;
  auVar21._0_8_ = dVar35 + dVar22;
  auVar21._8_8_ = dVar35 + dVar22;
  auVar9._8_4_ = SUB84(dVar8 * dVar7,0);
  auVar9._0_8_ = dVar5 * dVar3;
  auVar9._12_4_ = (int)((ulonglong)(dVar8 * dVar7) >> 0x20);
  *(undefined1 (*) [16])(param_4 + 8) = auVar9;
  auVar23._8_4_ = SUB84(dVar1,0);
  auVar23._0_8_ = dVar6 * dVar4;
  auVar23._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  *(undefined1 (*) [16])(param_4 + 10) = auVar23;
  auVar19._8_8_ = -(ulonglong)(1e-08 <= auVar21._8_8_);
  auVar19._0_8_ = -(ulonglong)(1e-08 <= auVar21._0_8_);
  auVar27 = sqrtpd(auVar21,auVar21);
  auVar23 = divpd(_DAT_149934d80,auVar27);
  auVar24._0_8_ = auVar23._0_8_ * dVar32;
  auVar24._8_8_ = auVar23._8_8_ * dVar30;
  auVar27 = blendvpd(_DAT_149935300,auVar24,auVar19);
  *param_4 = (ulonglong)(dVar26 * auVar23._0_8_) & -(ulonglong)(1e-08 <= auVar21._0_8_);
  param_4[1] = (ulonglong)(dVar29 * auVar23._8_8_) & -(ulonglong)(1e-08 <= auVar21._8_8_);
  *(undefined1 (*) [16])(param_4 + 2) = auVar27;
  if ((local_c0 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459b55c8 FUN_1459b55c8 body=21 status=ok
// SIG undefined FUN_1459b55c8(void)

undefined8 FUN_1459b55c8(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1459b55de FUN_1459b55de body=219 status=ok
// SIG undefined FUN_1459b55de(void)

void FUN_1459b55de(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    if ((*(byte *)(param_2 + 0x154) & 0x20) != 0) {
      (**(code **)(*param_1 + 8))(param_1);
    }
    FUN_1410908dc(param_2,local_58,0);
    FUN_14094a6a4(&local_48,local_58,0);
    iVar1 = local_40 + -1;
    if (local_40 == 0) {
      iVar1 = 0;
    }
    FUN_1446f82e2(&local_38,iVar1,local_48,1);
    (**(code **)(*param_1 + 0x10))(param_1,local_38,param_2);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459b56ba FUN_1459b56ba body=54 status=ok
// SIG undefined FUN_1459b56ba(void)

void FUN_1459b56ba(void)

{
  FUN_1459b56f0();
  if (DAT_14c866c70 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c866c50 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459b56f0 FUN_1459b56f0 body=337 status=ok
// SIG undefined FUN_1459b56f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1459b56f0(void)

{
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
  local_28 = &DAT_14c866c60;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14c866c78 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14c866c50;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      FUN_1459b5842((longlong)iStack_3c * 0x68 + *local_58);
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  DAT_14c866c58 = 0;
  if (DAT_14c866c5c != 0) {
    FUN_14059f004(&DAT_14c866c50,0);
  }
  _DAT_14c866c80 = 0xffffffff;
  DAT_14c866c78 = 0;
  if (0x80 < DAT_14c866c7c) {
    DAT_14c866c7c = 0x80;
    FUN_1446efbd8(&DAT_14c866c60,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459b5842 FUN_1459b5842 body=70 status=ok
// SIG undefined FUN_1459b5842(void)

void FUN_1459b5842(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 2);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1459b5888 FUN_1459b5888 body=40 status=ok
// SIG undefined FUN_1459b5888(void)

undefined8 FUN_1459b5888(undefined8 param_1,int param_2)

{
  FUN_1459b58b0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459b58b0 FUN_1459b58b0 body=70 status=ok
// SIG undefined FUN_1459b58b0(void)

void FUN_1459b58b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab513a0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  FUN_1459b58f6(param_1 + 0x72);
  FUN_140bd4d6a(param_1);
  return;
}



// FUNCTION 1459b58f6 FUN_1459b58f6 body=53 status=ok
// SIG undefined FUN_1459b58f6(void)

void FUN_1459b58f6(longlong *param_1)

{
  FUN_1459b592c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459b592c FUN_1459b592c body=89 status=ok
// SIG undefined FUN_1459b592c(void)

void FUN_1459b592c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 1459b5986 FUN_1459b5986 body=40 status=ok
// SIG undefined FUN_1459b5986(void)

undefined8 FUN_1459b5986(undefined8 param_1,int param_2)

{
  FUN_1459b59ae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459b59ae FUN_1459b59ae body=165 status=ok
// SIG undefined FUN_1459b59ae(void)

void FUN_1459b59ae(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac23530;
  param_1[5] = &PTR_FUN_14ac23850;
  plVar3 = (longlong *)param_1[0x22];
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
  plVar3 = (longlong *)param_1[0x1a];
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
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 1459b5a76 FUN_1459b5a76 body=153 status=ok
// SIG undefined FUN_1459b5a76(void)

void FUN_1459b5a76(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_1414281c4();
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  lVar3 = param_1[2];
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x7b;
  *(int *)(lVar2 + 0x14 + lVar4) = (int)lVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cb3e5b0;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x20;
  return;
}



// FUNCTION 1459b5b10 FUN_1459b5b10 body=226 status=ok
// SIG undefined FUN_1459b5b10(void)

longlong * FUN_1459b5b10(longlong *param_1)

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
  pcVar13 = FUN_146474942;
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



// FUNCTION 1459b5bf8 FUN_1459b5bf8 body=132 status=ok
// SIG undefined FUN_1459b5bf8(void)

undefined1 * FUN_1459b5bf8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TextureSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x13;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1459b5bf4;
}



// FUNCTION 1459b5c7c FUN_1459b5c7c body=138 status=ok
// SIG undefined FUN_1459b5c7c(void)

code * FUN_1459b5c7c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Texture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000014;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1459b5bf8;
}



// FUNCTION 1459b5d0e FUN_1459b5d0e body=76 status=ok
// SIG undefined FUN_1459b5d0e(void)

undefined8 * FUN_1459b5d0e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_14589d49c(param_1,uVar1);
  *param_1 = &PTR_FUN_14ae3a700;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 8) = 0x1000001;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
  *(undefined8 *)((longlong)param_1 + 0x44) = DAT_14cb449b0;
  return param_1;
}



// FUNCTION 1459b5d5a FUN_1459b5d5a body=9 status=ok
// SIG undefined FUN_1459b5d5a(void)

void FUN_1459b5d5a(longlong param_1)

{
  FUN_1414282c8(param_1 + 0x10);
  return;
}



// FUNCTION 1459b5d64 FUN_1459b5d64 body=40 status=ok
// SIG undefined FUN_1459b5d64(void)

undefined8 FUN_1459b5d64(undefined8 param_1,int param_2)

{
  FUN_1459b5d8c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459b5d8c FUN_1459b5d8c body=70 status=ok
// SIG undefined FUN_1459b5d8c(void)

void FUN_1459b5d8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b47a310;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  FUN_1459b5dd2(param_1 + 0x72);
  FUN_140bd4d6a(param_1);
  return;
}



// FUNCTION 1459b5dd2 FUN_1459b5dd2 body=53 status=ok
// SIG undefined FUN_1459b5dd2(void)

void FUN_1459b5dd2(longlong *param_1)

{
  FUN_1459b5e08();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459b5e08 FUN_1459b5e08 body=89 status=ok
// SIG undefined FUN_1459b5e08(void)

void FUN_1459b5e08(longlong param_1)

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



// FUNCTION 1459b5e62 FUN_1459b5e62 body=162 status=ok
// SIG undefined FUN_1459b5e62(void)

void FUN_1459b5e62(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xa80))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459b5f0c FUN_1459b5f0c body=156 status=ok
// SIG undefined FUN_1459b5f0c(void)

bool FUN_1459b5f0c(longlong param_1,undefined4 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 1459b5fb0 FUN_1459b5fb0 body=127 status=ok
// SIG undefined FUN_1459b5fb0(void)

void FUN_1459b5fb0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x210))();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,param_2,3);
    FUN_1459b602f(plVar1,param_3);
    FUN_1459b602f(plVar1,param_4);
    FUN_1459b602f(plVar1,param_5);
                    /* WARNING: Could not recover jumptable at 0x0001459b601e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x58))(plVar1);
    return;
  }
  return;
}



// FUNCTION 1459b602f FUN_1459b602f body=188 status=ok
// SIG undefined FUN_1459b602f(void)

void FUN_1459b602f(longlong *param_1,undefined4 *param_2)

{
  (**(code **)(*param_1 + 0x170))(param_1,4);
  (**(code **)(*param_1 + 0xd8))(param_1,&DAT_149e512b0);
  (**(code **)(*param_1 + 0xe8))(param_1,*param_2);
  (**(code **)(*param_1 + 0xd8))(param_1,&DAT_149e51268);
  (**(code **)(*param_1 + 0xe8))(param_1,param_2[1]);
  (**(code **)(*param_1 + 0xd8))(param_1,&DAT_149e4b430);
  (**(code **)(*param_1 + 0xe8))(param_1,param_2[2]);
  (**(code **)(*param_1 + 0xd8))(param_1,&DAT_149e4b3f2);
  (**(code **)(*param_1 + 0xe8))(param_1,param_2[3]);
                    /* WARNING: Could not recover jumptable at 0x0001459b60e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x178))(param_1);
  return;
}



// FUNCTION 1459b60ec FUN_1459b60ec body=106 status=ok
// SIG undefined FUN_1459b60ec(void)

void FUN_1459b60ec(undefined8 param_1)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x108);
  memset(_Dst,0,0x108);
  FUN_1459b6156(_Dst);
  *_Dst = &PTR_FUN_14b8a0050;
  FUN_140056680(_Dst + 0x1e,&DAT_149dfb77a);
  *(undefined2 *)(_Dst + 0x20) = 0;
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 1459b6156 FUN_1459b6156 body=146 status=ok
// SIG undefined FUN_1459b6156(void)

undefined8 * FUN_1459b6156(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b89fba0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x16] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x17) = (int)plVar2[1];
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x18] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x19) = (int)plVar2[1];
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined2 *)(param_1 + 0x1d) = 0x100;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return param_1;
}



// FUNCTION 1459b61e8 FUN_1459b61e8 body=151 status=ok
// SIG undefined FUN_1459b61e8(void)

bool FUN_1459b61e8(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = param_1[1];
  if (lVar4 == 0) {
    uVar3 = FUN_140261af2();
    lVar4 = FUN_14477b664(uVar3);
    param_1[1] = lVar4;
  }
  if (param_1[2] == 0) {
    if ((*param_1 != 0) && (lVar4 != 0)) {
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        param_1[2] = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar3,param_1);
        param_1[2] = lVar4;
        if (lVar4 != 0) {
          return false;
        }
      }
    }
    if (param_1[3] == 0) {
      return param_1[4] == 0;
    }
  }
  return false;
}



// FUNCTION 1459b6280 FUN_1459b6280 body=132 status=ok
// SIG undefined FUN_1459b6280(void)

void FUN_1459b6280(longlong param_1,int param_2)

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



// FUNCTION 1459b6306 FUN_1459b6306 body=40 status=ok
// SIG undefined FUN_1459b6306(void)

undefined8 FUN_1459b6306(undefined8 param_1,int param_2)

{
  FUN_1459b632e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459b632e FUN_1459b632e body=112 status=ok
// SIG undefined FUN_1459b632e(void)

void FUN_1459b632e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b38b0f0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  if (param_1[0x68] != 0) {
    FUN_1400020a8();
  }
  FUN_1459b639e(param_1 + 0x60);
  FUN_144760e21(param_1[0x5a],*(undefined4 *)(param_1 + 0x5b));
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  FUN_140bd4e94(param_1);
  return;
}



// FUNCTION 1459b639e FUN_1459b639e body=55 status=ok
// SIG undefined FUN_1459b639e(void)

void FUN_1459b639e(longlong *param_1)

{
  FUN_1459b63d6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459b63d6 FUN_1459b63d6 body=129 status=ok
// SIG undefined FUN_1459b63d6(void)

void FUN_1459b63d6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((int)uVar2 <= *(int *)(param_1 + 0x2c) && *(int *)(param_1 + 0x2c) < 0x81) {
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



// FUNCTION 1459b6464 FUN_1459b6464 body=217 status=ok
// SIG undefined FUN_1459b6464(void)

undefined8 * FUN_1459b6464(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_140ea0e34();
  *param_1 = &PTR_FUN_14a521eb0;
  param_1[5] = &PTR_FUN_14a5221b0;
  FUN_1459b653e(param_1 + 0x2e);
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  lVar1 = FUN_140bcc93a();
  FUN_140f13d9e(param_1 + 0x30,lVar1 + 0x2520);
  FUN_140f13d9e(param_1 + 0x46,lVar1 + 0x25d0);
  FUN_140f13d9e(param_1 + 0x5c,lVar1 + 0x2680);
  *(undefined1 *)(param_1 + 0x72) = *(undefined1 *)(lVar1 + 0x2730);
  param_1[0x47] = &DAT_3f8000003f800000;
  param_1[0x48] = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0x49) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3a3) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  param_1[0x79] = &DAT_3f8000003f800000;
  param_1[0x7a] = &DAT_3f8000003f800000;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  return param_1;
}



// FUNCTION 1459b653e FUN_1459b653e body=67 status=ok
// SIG undefined FUN_1459b653e(void)

undefined8 * FUN_1459b653e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149eeb690;
  FUN_140ca8f8e(param_1 + 2);
  FUN_140ca8f8e(param_1 + 0x18);
  FUN_140ca8f8e(param_1 + 0x2e);
  *(undefined1 *)(param_1 + 0x44) = 0;
  return param_1;
}



// FUNCTION 1459b6590 FUN_1459b6590 body=232 status=ok
// SIG undefined FUN_1459b6590(void)

undefined8 FUN_1459b6590(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  iVar2 = *(int *)(param_1 + 1);
  uVar3 = *param_1;
  local_30 = iVar2;
  if (iVar2 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1459b66a2(&local_38,iVar2);
    FUN_1459b6679(local_38,uVar3,iVar2);
    lVar5 = local_38;
    lVar6 = (longlong)local_30;
    if (lVar6 != 0) {
      lVar7 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar5 + lVar7) + 0x70) == 0) {
          FUN_1459b66fa();
        }
        lVar7 = lVar7 + 0x10;
      } while (lVar6 * 0x10 != lVar7);
    }
  }
  plVar4 = (longlong *)param_1[3];
  param_1[2] = 0;
  param_1[3] = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  FUN_1458c3d32(local_38,local_30);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459b6679 FUN_1459b6679 body=40 status=ok
// SIG undefined FUN_1459b6679(void)

void FUN_1459b6679(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
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
  return;
}



// FUNCTION 1459b66a2 FUN_1459b66a2 body=88 status=ok
// SIG undefined FUN_1459b66a2(void)

void FUN_1459b66a2(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1459b66fa FUN_1459b66fa body=853 status=ok
// SIG undefined FUN_1459b66fa(void)

void FUN_1459b66fa(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  int iVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  undefined8 uStack_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0 [16];
  undefined8 local_90;
  longlong local_88;
  longlong *plStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  puVar1 = param_1 + 2;
  cVar9 = FUN_14142923a(puVar1);
  if (cVar9 == '\0') {
    lVar12 = param_1[3];
    plVar11 = (longlong *)FUN_14479d2ce(puVar1);
    (**(code **)(*plVar11 + 0x180))(plVar11);
    local_88 = lVar12;
    plVar11 = (longlong *)FUN_1401e3228();
    if (plVar11 == (longlong *)0x0) {
      local_c8 = (longlong *)0x0;
      uStack_c0 = (longlong *)0x0;
LAB_1459b69c0:
      bVar14 = true;
    }
    else {
      (**(code **)(*plVar11 + 0xb8))(plVar11,&local_c8);
      if (local_c8 == (longlong *)0x0) goto LAB_1459b69c0;
      lVar12 = FUN_14479d2ce(puVar1);
      uVar5 = *(undefined4 *)(lVar12 + 0xe0);
      local_88 = 0;
      plStack_80 = (longlong *)0x0;
      FUN_141429280(param_1 + 4,&local_88);
      plVar11 = local_c8;
      FUN_1459b6a50(local_a0,param_1);
      (**(code **)(*plVar11 + 0x10))(plVar11,&local_90,uVar5,local_a0);
      param_1[0xe] = local_90;
      FUN_1449db362(local_a0);
      (**(code **)(*local_c8 + 8))(local_c8,uVar5,&local_88);
      FUN_14127b1cd(local_88,(ulonglong)plStack_80 & 0xffffffff);
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      bVar14 = false;
    }
    plVar11 = uStack_c0;
    if (uStack_c0 != (longlong *)0x0) {
      LOCK();
      plVar2 = uStack_c0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*uStack_c0)(uStack_c0);
        LOCK();
        piVar3 = (int *)((longlong)plVar11 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    if (!bVar14) goto LAB_1459b682e;
  }
  plStack_80 = param_1 + 6;
  local_88 = 0x100000000;
  local_78 = 0xffffffff;
  local_70 = 0;
  if (*(int *)(param_1 + 9) != 0) {
    FUN_1449c0562(&local_88);
  }
  local_b0 = local_78;
  uVar8 = local_b0;
  local_a8 = local_70;
  local_a4 = local_6c;
  uStack_c0 = (longlong *)local_88;
  local_b8 = plStack_80;
  local_b0._4_4_ = (int)((ulonglong)local_78 >> 0x20);
  if (local_b0._4_4_ < (int)plStack_80[3]) {
    iVar10 = local_b0._4_4_;
    local_c8 = param_1 + 4;
    local_b0 = uVar8;
    do {
      lVar12 = (longlong)*(int *)(*local_c8 + 0x18 + (longlong)iVar10 * 0x28);
      if (lVar12 != 0) {
        lVar4 = *local_c8 + (longlong)iVar10 * 0x28;
        lVar6 = *(longlong *)(lVar4 + 0x10);
        lVar13 = 0;
        do {
          local_88 = 0;
          plStack_80 = (longlong *)0x0;
          if (((*(int *)(lVar6 + 8 + lVar13) != 0) &&
              (plVar11 = *(longlong **)(lVar6 + lVar13), plVar11 != (longlong *)0x0)) &&
             ((**(code **)(*plVar11 + 0x60))(plVar11,lVar4,&local_88), plVar11 = plStack_80,
             plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar2 = plStack_80 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plStack_80)(plStack_80);
              LOCK();
              piVar3 = (int *)((longlong)plVar11 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
              }
            }
          }
          lVar13 = lVar13 + 0x10;
        } while (lVar12 * 0x10 != lVar13);
      }
      local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0 & ~uStack_c0._4_4_);
      FUN_1449c0562(&uStack_c0);
      iVar10 = local_b0._4_4_;
      uVar8 = local_b0;
    } while (local_b0._4_4_ < (int)local_b8[3]);
  }
  local_b0 = uVar8;
  uStack_c0 = (longlong *)param_1[1];
  if (uStack_c0 == (longlong *)0x0) {
    uStack_c0 = (longlong *)0x0;
    local_c8 = (longlong *)0x0;
  }
  else {
    iVar10 = (int)uStack_c0[1];
    local_c8 = (longlong *)0x0;
    do {
      if (iVar10 == 0) {
        uStack_c0 = (longlong *)0x0;
        goto LAB_1459b69eb;
      }
      LOCK();
      iVar7 = (int)uStack_c0[1];
      bVar14 = iVar10 == iVar7;
      if (bVar14) {
        *(int *)(uStack_c0 + 1) = iVar10 + 1;
        iVar7 = iVar10;
      }
      iVar10 = iVar7;
      UNLOCK();
    } while (!bVar14);
    local_c8 = (longlong *)*param_1;
  }
LAB_1459b69eb:
  if ((*(int *)(param_1 + 0x10) != 0) &&
     (plVar11 = (longlong *)param_1[0xf], plVar11 != (longlong *)0x0)) {
    (**(code **)(*plVar11 + 0x60))(plVar11,&local_c8);
  }
  plVar11 = uStack_c0;
  if (uStack_c0 != (longlong *)0x0) {
    LOCK();
    plVar2 = uStack_c0 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*uStack_c0)(uStack_c0);
      LOCK();
      piVar3 = (int *)((longlong)plVar11 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
LAB_1459b682e:
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459b6a50 FUN_1459b6a50 body=422 status=ok
// SIG undefined FUN_1459b6a50(void)

longlong * FUN_1459b6a50(longlong *param_1,undefined8 *param_2)

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
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
LAB_1459b6b26:
    *puVar3 = &PTR_LAB_14b438ab0;
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
    *puVar3 = &PTR_FUN_14b4f5420;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_14151b6ec;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_1459b6b26;
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
    uVar5 = *param_2;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14b438ab0;
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
    *puVar3 = &PTR_FUN_14b4f5420;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_14151b6ec;
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



// FUNCTION 1459b6bf6 FUN_1459b6bf6 body=69 status=ok
// SIG undefined FUN_1459b6bf6(void)

void FUN_1459b6bf6(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_14127b1cd(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1459b6c3c(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1459b6c3c FUN_1459b6c3c body=96 status=ok
// SIG undefined FUN_1459b6c3c(void)

void FUN_1459b6c3c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 1459b6c9c FUN_1459b6c9c body=56 status=ok
// SIG undefined FUN_1459b6c9c(void)

ulonglong FUN_1459b6c9c(undefined8 param_1,undefined4 param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_140b708a0();
  lVar3 = FUN_14127aa70(lVar2,param_2);
  if (lVar3 == 0) {
    bVar1 = 0;
  }
  else {
    lVar2 = lVar3;
    bVar1 = FUN_1459b6cd4(lVar3);
  }
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),lVar3 != 0 & bVar1) & 0xffffffff;
}



// FUNCTION 1459b6cd4 FUN_1459b6cd4 body=4 status=ok
// SIG undefined FUN_1459b6cd4(void)

undefined1 FUN_1459b6cd4(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x78);
}



// FUNCTION 1459b6cd8 FUN_1459b6cd8 body=268 status=ok
// SIG undefined FUN_1459b6cd8(void)

undefined8 FUN_1459b6cd8(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  
  uVar10 = 0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar6 = (**(code **)(*(longlong *)*param_2 + 0x40))();
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    uVar9 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
    iVar6 = *(int *)((longlong)plVar8 + uVar9 * 4);
    if (iVar6 != -1) {
      puVar11 = (undefined4 *)((longlong)plVar8 + uVar9 * 4);
      do {
        lVar3 = *param_1;
        lVar7 = (longlong)iVar6;
        puVar4 = *(undefined8 **)(lVar3 + lVar7 * 0x18);
        plVar8 = *(longlong **)(lVar3 + 8 + lVar7 * 0x18);
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
        }
        cVar5 = '\x01';
        if (puVar4 != (undefined8 *)*param_2) {
          cVar5 = (**(code **)*puVar4)();
        }
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
        if (cVar5 != '\0') {
          FUN_1459b6de4(param_1,*puVar11);
          uVar10 = 1;
          break;
        }
        lVar3 = lVar3 + lVar7 * 0x18;
        iVar6 = *(int *)(lVar3 + 0x10);
        puVar11 = (undefined4 *)(lVar3 + 0x10);
      } while (iVar6 != -1);
    }
  }
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
  return uVar10;
}



// FUNCTION 1459b6de4 FUN_1459b6de4 body=91 status=ok
// SIG undefined FUN_1459b6de4(void)

void FUN_1459b6de4(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_1459b6e40(param_1,param_2,1);
  return;
}



// FUNCTION 1459b6e40 FUN_1459b6e40 body=121 status=ok
// SIG undefined FUN_1459b6e40(void)

void FUN_1459b6e40(longlong *param_1,int param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (longlong *)(*param_1 + (longlong)param_2 * 0x18 + 8);
    iVar4 = param_3;
    do {
      plVar3 = (longlong *)*plVar5;
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
      plVar5 = plVar5 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_140b6d468(param_1,param_2,param_3);
  return;
}



// FUNCTION 1459b6eba FUN_1459b6eba body=293 status=ok
// SIG undefined FUN_1459b6eba(void)

undefined4 *
FUN_1459b6eba(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1459b71d6(param_1,local_58);
  FUN_1459b6fe0(param_4,local_50);
  *(undefined4 *)(local_50 + 0x58) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_1459b70fc(param_1,param_3,local_50,local_58);
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
      *(uint *)(local_50 + 0x5c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 0x58) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_1459b72c6(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459b6fe0 FUN_1459b6fe0 body=156 status=ok
// SIG undefined FUN_1459b6fe0(void)

undefined4 * FUN_1459b6fe0(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  *param_2 = *(undefined4 *)*param_1;
  FUN_1459b707e(param_2 + 2,&local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_140b6c31a(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459b707e FUN_1459b707e body=125 status=ok
// SIG undefined FUN_1459b707e(void)

undefined8 * FUN_1459b707e(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1459b7478();
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



// FUNCTION 1459b70fc FUN_1459b70fc body=217 status=ok
// SIG undefined FUN_1459b70fc(void)

void FUN_1459b70fc(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  void *_Dst;
  undefined1 uVar1;
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
        _Dst = (void *)(*param_1 + (longlong)iVar3 * 0x60);
        if (*(int *)(*param_1 + (longlong)iVar3 * 0x60) == *param_3) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_140b6c31a((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_148a77060(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          break;
        }
        iVar3 = *(int *)((longlong)_Dst + 0x58);
        uVar1 = 0;
      } while (iVar3 != -1);
      goto LAB_1459b712a;
    }
  }
  uVar1 = 0;
LAB_1459b712a:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 1459b71d6 FUN_1459b71d6 body=239 status=ok
// SIG undefined FUN_1459b71d6(void)

int * FUN_1459b71d6(longlong *param_1,int *param_2)

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
      FUN_14488f93c(param_1,iVar6);
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



// FUNCTION 1459b72c6 FUN_1459b72c6 body=432 status=ok
// SIG undefined FUN_1459b72c6(void)

void FUN_1459b72c6(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x60;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x5c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar7) =
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



// FUNCTION 1459b7478 FUN_1459b7478 body=469 status=ok
// SIG undefined FUN_1459b7478(void)

longlong * FUN_1459b7478(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
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
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    iVar10 = 0;
    local_50 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
      iVar10 = (int)param_1[5];
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar8 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    iVar9 = local_68._4_4_;
    local_80 = param_1;
    if ((local_68._4_4_ != iVar10) || (local_68 = uVar8, local_50 != plVar1)) {
      do {
        local_68 = uVar8;
        plVar4 = *(longlong **)(*local_80 + 8 + (longlong)iVar9 * 0x18);
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
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar9 = local_68._4_4_;
        uVar8 = local_68;
      } while (((local_68._4_4_ != iVar10) || (local_70 != plVar1)) || (local_80 != param_1));
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
      uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar7 = param_2[3];
      uVar6 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
      *(int *)(param_1 + 3) = (int)lVar7;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar6;
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
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1459b764e FUN_1459b764e body=114 status=ok
// SIG undefined FUN_1459b764e(void)

undefined8 FUN_1459b764e(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  
  uVar2 = FUN_1459b76c0(0);
  iVar3 = FUN_1412993ba();
  if ((-1 < (int)uVar2) && (0 < iVar3)) {
    iVar3 = iVar3 + uVar2;
    lVar4 = (ulonglong)uVar2 * 0x48 + 0x28;
    do {
      if (*(int *)(param_1 + 0x78f0) <= (int)uVar2) {
        return 0;
      }
      lVar1 = *(longlong *)(param_1 + 0x78e8);
      if (((*(int *)(lVar1 + -0x1c + lVar4) != -1) && (*(longlong *)(lVar1 + -8 + lVar4) != 0)) &&
         (*(longlong *)(lVar1 + lVar4) != 0)) {
        return 1;
      }
      uVar2 = uVar2 + 1;
      lVar4 = lVar4 + 0x48;
    } while ((int)uVar2 < iVar3);
  }
  return 0;
}



// FUNCTION 1459b76c0 FUN_1459b76c0 body=255 status=ok
// SIG undefined FUN_1459b76c0(void)

int FUN_1459b76c0(uint param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  lVar3 = FUN_14011c349();
  lVar4 = *(longlong *)(lVar3 + 0x28);
  if (lVar4 == 0) {
    uVar5 = FUN_145d8612a();
    lVar4 = FUN_14477b664(uVar5);
    *(longlong *)(lVar3 + 0x28) = lVar4;
  }
  lVar6 = *(longlong *)(lVar3 + 0x30);
  if (lVar6 == 0) {
    if (lVar4 == 0) {
      return -1;
    }
    if (*(longlong *)(lVar3 + 0x20) == 0) {
      return -1;
    }
    plVar7 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar7 == (longlong *)0x0) ||
       (cVar1 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar1 == '\0')) {
      *(undefined8 *)(lVar3 + 0x30) = 0;
      return -1;
    }
    uVar5 = (**(code **)(*plVar7 + 0x110))(plVar7);
    lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar3 + 0x20));
    *(longlong *)(lVar3 + 0x30) = lVar6;
    if (lVar6 == 0) {
      return -1;
    }
  }
  if ((longlong)*(int *)(lVar6 + 0x20) != 0) {
    plVar7 = *(longlong **)(lVar6 + 0x18);
    plVar8 = plVar7 + (longlong)*(int *)(lVar6 + 0x20) * 7;
    iVar2 = 0;
    do {
      if (*(longlong *)(lVar3 + 0x78) == *plVar7) {
        if (*(uint *)(plVar7 + 1) <= param_1) {
          return -1;
        }
        return iVar2 + param_1;
      }
      iVar2 = iVar2 + *(uint *)(plVar7 + 1);
      plVar7 = plVar7 + 7;
    } while (plVar7 != plVar8);
  }
  return -1;
}



// FUNCTION 1459b77c0 FUN_1459b77c0 body=40 status=ok
// SIG undefined FUN_1459b77c0(void)

undefined8 FUN_1459b77c0(undefined8 param_1,int param_2)

{
  FUN_1459b77e8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459b77e8 FUN_1459b77e8 body=138 status=ok
// SIG undefined FUN_1459b77e8(void)

void FUN_1459b77e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b080330;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x16));
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_1405d62d2(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1459b7872(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1459b7872 FUN_1459b7872 body=53 status=ok
// SIG undefined FUN_1459b7872(void)

void FUN_1459b7872(longlong *param_1)

{
  FUN_1459b78a8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459b78a8 FUN_1459b78a8 body=320 status=ok
// SIG undefined FUN_1459b78a8(void)

void FUN_1459b78a8(longlong *param_1)

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
      FUN_141429cb8((longlong)iStack_4c * 0x28 + *local_68);
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459b79ea FUN_1459b79ea body=40 status=ok
// SIG undefined FUN_1459b79ea(void)

undefined8 FUN_1459b79ea(undefined8 param_1,int param_2)

{
  FUN_1459b7a12();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459b7a12 FUN_1459b7a12 body=129 status=ok
// SIG undefined FUN_1459b7a12(void)

void FUN_1459b7a12(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14abb9a00;
  param_1[5] = &PTR_FUN_14abb9e90;
  param_1[6] = &PTR_LAB_14abb9ed0;
  param_1[0x22] = &PTR_FUN_14abb9f20;
  param_1[0x2c] = &PTR_FUN_14abb9fa0;
  FUN_1449db362(param_1 + 0x47);
  if (param_1[0x45] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0x43);
  FUN_14006e852(param_1);
  return;
}



// FUNCTION 1459b7a93 FUN_1459b7a93 body=45 status=ok
// SIG undefined FUN_1459b7a93(void)

void FUN_1459b7a93(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1459b7ac0(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd0f4d0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  return;
}



// FUNCTION 1459b7ac0 FUN_1459b7ac0 body=124 status=ok
// SIG undefined FUN_1459b7ac0(void)

undefined8 * FUN_1459b7ac0(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14bcd7f50;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
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
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  return param_1;
}



// FUNCTION 1459b7b48 FUN_1459b7b48 body=210 status=ok
// SIG undefined FUN_1459b7b48(void)

undefined8 * FUN_1459b7b48(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1406ed334();
  *param_1 = &PTR_FUN_14a4be360;
  param_1[0x1f] = &PTR_FUN_14a4be6d0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 1;
  local_38 = 0xd2704c107b5ae74c;
  uStack_30 = 0xb212a5aa9585798;
  iVar2 = FUN_1448a256a(param_1);
  if (iVar2 < 4) {
    cVar1 = '\0';
  }
  else {
    local_48 = 0xd2704c107b5ae74c;
    uStack_40 = 0xb212a5aa9585798;
    iVar2 = FUN_1448a256a(param_1);
    cVar1 = '\x02' - (iVar2 < 6);
  }
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(char *)((longlong)param_1 + 0x59) = cVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459b7c1c FUN_1459b7c1c body=9 status=ok
// SIG undefined FUN_1459b7c1c(void)

void FUN_1459b7c1c(longlong param_1)

{
  FUN_1459b7c26(param_1 + 0x10);
  return;
}



// FUNCTION 1459b7c26 FUN_1459b7c26 body=163 status=ok
// SIG undefined FUN_1459b7c26(void)

void FUN_1459b7c26(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4205a0;
  FUN_1459b7cca();
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[0xf];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,1);
  }
  FUN_141429cf4(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_141429cf4(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 8);
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
  FUN_140af926c(param_1);
  return;
}



// FUNCTION 1459b7cca FUN_1459b7cca body=158 status=ok
// SIG undefined FUN_1459b7cca(void)

void FUN_1459b7cca(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(int *)(param_1 + 0xac) != 0) {
    FUN_140254dde(param_1 + 0x90,0);
  }
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_1449db8d8(param_1);
  FUN_141429cf4(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_1487c83b8(param_1 + 0x50);
  }
  FUN_141429cf4(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_1487c83b8(param_1 + 0x60);
  }
  FUN_141429d20(param_1);
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 1459b7d68 FUN_1459b7d68 body=101 status=ok
// SIG undefined FUN_1459b7d68(void)

ulonglong FUN_1459b7d68(longlong param_1)

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
LAB_1459b7dc9:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1459b7dc9;
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



// FUNCTION 1459b7dd4 FUN_1459b7dd4 body=61 status=ok
// SIG undefined FUN_1459b7dd4(void)

void FUN_1459b7dd4(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_14b42c2d0;
  FUN_1449db362(param_1 + 0x40);
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001459b7e0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1459b7e12 FUN_1459b7e12 body=181 status=ok
// SIG undefined FUN_1459b7e12(void)

void FUN_1459b7e12(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x40) == '\0') {
    *(undefined1 *)(param_1 + 0x40) = 1;
    local_18 = *(longlong **)(param_1 + 0x10);
    if (local_18 == (longlong *)0x0) {
      local_18 = (longlong *)0x0;
      local_20 = 0;
    }
    else {
      iVar5 = (int)local_18[1];
      local_20 = 0;
      do {
        if (iVar5 == 0) {
          local_18 = (longlong *)0x0;
          goto LAB_1459b7e52;
        }
        LOCK();
        iVar4 = (int)local_18[1];
        bVar6 = iVar5 == iVar4;
        if (bVar6) {
          *(int *)(local_18 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
      } while (!bVar6);
      local_20 = *(undefined8 *)(param_1 + 8);
    }
LAB_1459b7e52:
    if ((*(int *)(param_1 + 0x38) != 0) &&
       (plVar3 = *(longlong **)(param_1 + 0x30), plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x60))(plVar3,&local_20);
    }
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
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459b7ec8 FUN_1459b7ec8 body=107 status=ok
// SIG undefined FUN_1459b7ec8(void)

void FUN_1459b7ec8(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  
  FUN_140696702();
  lVar1 = *(longlong *)(param_1 + 0xba8);
  if (lVar1 != 0) {
    uVar2 = FUN_1407f6684();
    cVar3 = FUN_1448093f4(lVar1,uVar2);
    if (cVar3 != '\0') {
      lVar1 = *(longlong *)(param_1 + 0xba8);
      uVar2 = FUN_1407f6684();
      cVar3 = FUN_1448093f4(lVar1,uVar2);
      if ((cVar3 != '\0') && (lVar1 != 0)) {
        FUN_141429f22(lVar1,param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1459b7f34 FUN_1459b7f34 body=38 status=ok
// SIG undefined FUN_1459b7f34(void)

undefined8 FUN_1459b7f34(undefined8 param_1,int param_2)

{
  FUN_1459b7f5a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459b7f5a FUN_1459b7f5a body=163 status=ok
// SIG undefined FUN_1459b7f5a(void)

void FUN_1459b7f5a(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  *param_1 = &PTR_FUN_14b95ca90;
  if ((param_1[6] != 0) && (plVar3 = (longlong *)param_1[8], plVar3 != (longlong *)0x0)) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1459b7f74;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    if (param_1[7] != 0) {
      FUN_145ae57be(param_1[7],param_1 + 6);
    }
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
LAB_1459b7f74:
  plVar3 = (longlong *)param_1[8];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_144760e21(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1459b7ffe FUN_1459b7ffe body=458 status=ok
// SIG undefined FUN_1459b7ffe(void)

void FUN_1459b7ffe(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_c8 [32];
  int local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined8 uStack_2c;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_50 = (uint)local_50._2_2_ << 0x10;
  uStack_48 = (undefined4)DAT_14c8464f8;
  uStack_44 = DAT_14c8464f8._4_4_;
  uStack_40 = (undefined4)DAT_14c846500;
  uStack_3c = DAT_14c846500._4_4_;
  uStack_38 = DAT_14c846508;
  local_30 = 0;
  uStack_2c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_54 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a8 = local_50;
  uStack_a4 = uStack_4c;
  uStack_a0 = uStack_48;
  uStack_9c = uStack_44;
  local_98 = uStack_40;
  uStack_94 = uStack_3c;
  uStack_90 = (undefined4)uStack_38;
  uStack_8c = uStack_38._4_4_;
  local_88 = local_30;
  uStack_84 = (undefined4)uStack_2c;
  uStack_80 = uStack_2c._4_4_;
  uStack_7c = uStack_24;
  FUN_141429f80(&local_70,local_20,&local_a8,local_54);
  *(undefined8 *)(param_3 + 4) = local_60;
  *param_3 = local_70;
  param_3[1] = uStack_6c;
  param_3[2] = uStack_68;
  param_3[3] = uStack_64;
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459b81ca FUN_1459b81ca body=104 status=ok
// SIG undefined FUN_1459b81ca(void)

undefined8 FUN_1459b81ca(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_1459b8234(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459b8234 FUN_1459b8234 body=22 status=ok
// SIG undefined FUN_1459b8234(void)

undefined8 FUN_1459b8234(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cb72968;
  if (DAT_14cb72968 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb72968 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb72968 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb72968[0x3a] <= *(int *)((longlong)DAT_14cb72968 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cb72968 + 0x300))(DAT_14cb72968);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 1459b824a FUN_1459b824a body=107 status=ok
// SIG undefined FUN_1459b824a(void)

undefined8 FUN_1459b824a(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1459b828f:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1459b828f;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    (**(code **)(param_1 + 0x28))
              ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),param_2);
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
  return param_2;
}



// FUNCTION 1459b82b6 FUN_1459b82b6 body=169 status=ok
// SIG undefined FUN_1459b82b6(void)

float * FUN_1459b82b6(longlong param_1,float *param_2)

{
  char cVar1;
  float fVar2;
  float fVar3;
  
  cVar1 = FUN_1459b8360(param_1 + 0x298);
  fVar3 = 0.0;
  if (cVar1 != '\0') {
    fVar3 = (float)FUN_14692f614(param_1 + 0x298);
    fVar2 = sinf(fVar3 * 34.55752);
    fVar3 = (1.0 - fVar3) * (fVar2 + 1.0) * 0.5;
  }
  fVar2 = 1.0 - fVar3;
  *param_2 = fVar2;
  param_2[1] = fVar2;
  param_2[2] = fVar2;
  param_2[3] = fVar3 * 0.0 + 1.0;
  *(undefined1 *)(param_2 + 4) = 0;
  return param_2;
}



// FUNCTION 1459b8360 FUN_1459b8360 body=63 status=ok
// SIG undefined FUN_1459b8360(void)

bool FUN_1459b8360(longlong param_1)

{
  bool bVar1;
  double dVar2;
  
  if ((*(byte *)(param_1 + 0x68) & 4) == 0) {
    if ((*(byte *)(param_1 + 0x68) & 2) == 0) {
      dVar2 = (double)(**(code **)(*DAT_14c968098 + 0x60))();
      bVar1 = dVar2 - *(double *)(param_1 + 0x50) <= *(double *)(param_1 + 0x60);
    }
    else {
      bVar1 = true;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



// FUNCTION 1459b83a0 FUN_1459b83a0 body=192 status=ok
// SIG undefined FUN_1459b83a0(void)

longlong * FUN_1459b83a0(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x1d0,0x10);
  FUN_1459b8506(plVar4,param_1,param_3);
  plVar1 = plVar4 + 2;
  local_38 = plVar1;
  local_30 = plVar4;
  FUN_1459b8464(&local_38,plVar1);
  plVar3 = local_30;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459b8464 FUN_1459b8464 body=162 status=ok
// SIG undefined FUN_1459b8464(void)

void FUN_1459b8464(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1459b84a3;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1459b84a3;
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
LAB_1459b84a3:
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
                    /* WARNING: Could not recover jumptable at 0x0001459b8502. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1459b8506 FUN_1459b8506 body=194 status=ok
// SIG undefined FUN_1459b8506(void)

undefined8 * FUN_1459b8506(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14b41f410;
  FUN_140724c32(param_1 + 2);
  param_1[2] = &PTR_FUN_14b41e710;
  *(undefined2 *)(param_1 + 0x26) = 0;
  *(undefined1 *)((longlong)param_1 + 0x132) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)((longlong)param_1 + 0x13f) = 0;
  *(undefined1 *)((longlong)param_1 + 0x143) = 1;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0x3ff00000;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0x3ff0000000000000;
  param_1[0x33] = 0x3ff0000000000000;
  param_1[0x34] = 0x3ff0000000000000;
  param_1[0x35] = 0;
  param_1[0x36] = param_2;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  return param_1;
}



// FUNCTION 1459b85d4 FUN_1459b85d4 body=42 status=ok
// SIG undefined FUN_1459b85d4(void)

undefined8 * FUN_1459b85d4(undefined8 *param_1)

{
  FUN_1406078d6();
  *param_1 = &PTR_FUN_14b212190;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  return param_1;
}



// FUNCTION 1459b85fe FUN_1459b85fe body=112 status=ok
// SIG undefined FUN_1459b85fe(void)

void FUN_1459b85fe(longlong param_1,uint param_2)

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
  if ((iVar3 <= *(int *)(param_1 + 0x48) || (int)param_2 < 1) && *(int *)(param_1 + 0x48) <= iVar3)
  {
    FUN_1459b866e(param_1);
    FUN_14142a238(param_1,param_2);
    return;
  }
  FUN_14142a238(param_1,param_2);
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_14142a43e(param_1);
  return;
}



// FUNCTION 1459b866e FUN_1459b866e body=335 status=ok
// SIG undefined FUN_1459b866e(void)

void FUN_1459b866e(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x24 + (longlong)iVar4 * 0x28) * 4) =
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



// FUNCTION 1459b87be FUN_1459b87be body=226 status=ok
// SIG undefined FUN_1459b87be(void)

void FUN_1459b87be(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined4 local_48;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_1459b88a2();
  if ((param_2 != 0) && (lVar1 != 0)) {
    lVar2 = FUN_141118888();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      local_50 = &LAB_148d895a0;
      local_48 = 0;
      FUN_1459b8a10(local_40,param_1);
      FUN_1459b892a(param_2 + 0x6a8,&local_50,local_40);
      FUN_1449db362(local_40);
      *(undefined1 *)(param_2 + 0x84b) = 1;
      if ((*(char *)(lVar1 + 0x18) == '\x01') && (*(char *)(param_2 + 0x848) != '\x01')) {
        FUN_141362b60(param_2,1);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459b88a2 FUN_1459b88a2 body=78 status=ok
// SIG undefined FUN_1459b88a2(void)

longlong * FUN_1459b88a2(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_1459b88f0();
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



// FUNCTION 1459b88f0 FUN_1459b88f0 body=57 status=ok
// SIG undefined FUN_1459b88f0(void)

void FUN_1459b88f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf510 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf510 = FUN_140002ddd(FUN_1466121da,uVar1,L"BinderBehaviorMod_BossObjective");
  }
  return;
}



// FUNCTION 1459b892a FUN_1459b892a body=216 status=ok
// SIG undefined FUN_1459b892a(void)

undefined8 * FUN_1459b892a(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1459b8a10 FUN_1459b8a10 body=428 status=ok
// SIG undefined FUN_1459b8a10(void)

longlong * FUN_1459b8a10(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_1459b8af0:
    *puVar5 = &PTR_LAB_14b96ea50;
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
    *puVar5 = &PTR_FUN_14b97dcd0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1459b8af0;
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
    *puVar5 = &PTR_LAB_14b96ea50;
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
    *puVar5 = &PTR_FUN_14b97dcd0;
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



// FUNCTION 1459b8bc8 FUN_1459b8bc8 body=146 status=ok
// SIG undefined FUN_1459b8bc8(void)

undefined8 * FUN_1459b8bc8(undefined8 *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14ac0d230;
  if (((*(uint *)(param_1 + 1) & 0x10) != 0) &&
     (lVar1 = param_1[2], (*(byte *)(lVar1 + 0xd4) & 1) == 0)) {
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    uVar2 = DAT_14cb1fcd8;
    lVar3 = (longlong)(int)DAT_14cb1fcd8;
    DAT_14cb1fcd8 = DAT_14cb1fcd8 + 1;
    if (DAT_14cb1fcdc < DAT_14cb1fcd8) {
      FUN_1459b8c5a(uVar2);
    }
    *(longlong *)(DAT_14cb1fcd0 + lVar3 * 8) = lVar1;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
  }
  return param_1;
}



// FUNCTION 1459b8c5a FUN_1459b8c5a body=140 status=ok
// SIG undefined FUN_1459b8c5a(void)

void FUN_1459b8c5a(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14cb1fcd8;
  if (param_1 <= (int)DAT_14cb1fcd8) {
    if (DAT_14cb1fcdc == 0) {
      uVar2 = 4;
      if (4 < DAT_14cb1fcd8) {
        uVar2 = DAT_14cb1fcd8;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)DAT_14cb1fcd8 + ((ulonglong)((longlong)(int)DAT_14cb1fcd8 * 3) >> 3) +
              0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    DAT_14cb1fcdc = (int)uVar5;
    FUN_1446f8d3c(&DAT_14cb1fcd0,param_1,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1459b8ce6 FUN_1459b8ce6 body=24 status=ok
// SIG undefined FUN_1459b8ce6(void)

void FUN_1459b8ce6(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001459b8cfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1459b8cfe FUN_1459b8cfe body=38 status=ok
// SIG undefined FUN_1459b8cfe(void)

undefined8 FUN_1459b8cfe(undefined8 param_1,int param_2)

{
  FUN_1459b8d24();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459b8d24 FUN_1459b8d24 body=105 status=ok
// SIG undefined FUN_1459b8d24(void)

void FUN_1459b8d24(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b42ffa0;
  FUN_14142a61b(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1459b8d8d(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001459b8d89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1459b8d8d FUN_1459b8d8d body=45 status=ok
// SIG undefined FUN_1459b8d8d(void)

void FUN_1459b8d8d(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x10;
    do {
      FUN_1459b8dba(param_1);
      param_1 = param_1 + 0xc30;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1459b8dba FUN_1459b8dba body=61 status=ok
// SIG undefined FUN_1459b8dba(void)

void FUN_1459b8dba(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xc00);
  if (*(longlong *)(param_1 + 0xc00) == 0) {
    lVar1 = param_1;
  }
  FUN_1403e173a(lVar1,*(undefined4 *)(param_1 + 0xc08));
  if (*(longlong *)(param_1 + 0xc00) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459b8df8 FUN_1459b8df8 body=179 status=ok
// SIG undefined FUN_1459b8df8(void)

bool FUN_1459b8df8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459b8ed8 FUN_1459b8ed8 body=86 status=ok
// SIG undefined FUN_1459b8ed8(void)

undefined8 * FUN_1459b8ed8(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  plVar1 = (longlong *)FUN_1459b8f2e();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
    if (lVar2 == 0) {
      return param_1;
    }
  }
  FUN_144a787a6(param_1,lVar2 + 0xb8);
  return param_1;
}



// FUNCTION 1459b8f2e FUN_1459b8f2e body=221 status=ok
// SIG undefined FUN_1459b8f2e(void)

longlong FUN_1459b8f2e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbacc20 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148c31a7f;
    local_40 = FUN_1465e3fb4;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0xf8;
    FUN_14081cfa3(L"/Script/OakGame",L"OakMatchmakingConfig",&DAT_14cbacc20,&DAT_148c31a7e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbacc20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459b900c FUN_1459b900c body=120 status=ok
// SIG undefined FUN_1459b900c(void)

void FUN_1459b900c(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined8 *)(param_1 + 0x350) = 0;
  local_28 = *(undefined8 *)(param_1 + 0x28);
  local_20 = param_1;
  FUN_1459b9086(param_1 + 0x40,&local_28);
  local_28 = *(undefined8 *)(param_1 + 0x28);
  local_20 = param_1;
  FUN_1459b93c6(param_1 + 0x1b8,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459b9086 FUN_1459b9086 body=437 status=ok
// SIG undefined FUN_1459b9086(void)

void FUN_1459b9086(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0xf0);
  lVar2 = param_1 + 0x100;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar2;
  if (*(int *)(param_1 + 0x118) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar3 = *(int *)(param_1 + 0x118);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_80 = plVar1;
  if ((iStack_44 != iVar3) || (uStack_50 != lVar2)) {
    do {
      do {
        FUN_1457db340(param_2,*local_80 + (longlong)iStack_64 * 0x40 + 0x20);
        local_68 = local_68 & ~uStack_74;
        FUN_1449c0562(&local_78);
      } while (iStack_64 != iVar3);
    } while ((CONCAT44(uStack_6c,uStack_70) != lVar2) || (local_80 != plVar1));
  }
  FUN_1410ffc2a(param_1);
  FUN_1410ffdb0(param_1 + 0x50);
  FUN_1459b923c(param_1 + 0xa0);
  FUN_140f81954(plVar1);
  *(undefined4 *)(param_1 + 0x140) = 0;
  if (0x80 < *(uint *)(param_1 + 0x144)) {
    *(undefined4 *)(param_1 + 0x144) = 0x80;
    FUN_1446efbd8(param_1 + 0x128,0);
  }
  *(undefined4 *)(param_1 + 0x160) = 0;
  if (0x80 < *(uint *)(param_1 + 0x164)) {
    *(undefined4 *)(param_1 + 0x164) = 0x80;
    FUN_1446efbd8(param_1 + 0x148,0);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459b923c FUN_1459b923c body=63 status=ok
// SIG undefined FUN_1459b923c(void)

void FUN_1459b923c(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_1459b927c(param_1);
    FUN_140f819ac(param_1);
    return;
  }
  FUN_140f819ac(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_140fc5678(param_1);
  return;
}



// FUNCTION 1459b927c FUN_1459b927c body=329 status=ok
// SIG undefined FUN_1459b927c(void)

void FUN_1459b927c(longlong *param_1)

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



// FUNCTION 1459b93c6 FUN_1459b93c6 body=449 status=ok
// SIG undefined FUN_1459b93c6(void)

void FUN_1459b93c6(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0xf0);
  lVar2 = param_1 + 0x100;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  iVar3 = 0;
  local_50 = lVar2;
  if (*(int *)(param_1 + 0x118) != 0) {
    FUN_1449c0562(&local_58);
    iVar3 = *(int *)(param_1 + 0x118);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = plVar1;
  if ((iStack_44 != iVar3) || (local_50 != lVar2)) {
    do {
      do {
        FUN_1457db6a6(param_2,*local_80 + (longlong)iStack_64 * 0x40 + 0x20);
        local_68 = local_68 & ~local_78._4_4_;
        FUN_1449c0562(&local_78);
      } while (iStack_64 != iVar3);
    } while ((local_70 != lVar2) || (local_80 != plVar1));
  }
  FUN_1410ffc2a(param_1);
  FUN_1410ffdb0(param_1 + 0x50);
  FUN_1459b923c(param_1 + 0xa0);
  FUN_140f81954(plVar1);
  *(undefined4 *)(param_1 + 0x140) = 0;
  if (0x80 < *(uint *)(param_1 + 0x144)) {
    *(undefined4 *)(param_1 + 0x144) = 0x80;
    FUN_1446efbd8(param_1 + 0x128,0);
  }
  *(undefined4 *)(param_1 + 0x160) = 0;
  if (0x80 < *(uint *)(param_1 + 0x164)) {
    *(undefined4 *)(param_1 + 0x164) = 0x80;
    FUN_1446efbd8(param_1 + 0x148,0);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459b9588 FUN_1459b9588 body=53 status=ok
// SIG undefined FUN_1459b9588(void)

void FUN_1459b9588(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1459b95be(puVar1,param_1);
  *puVar1 = &PTR_FUN_149f91a80;
  puVar1[5] = 0x461c400044fa0000;
  puVar1[6] = 0x3e4ccccd3f800000;
  *(undefined4 *)(puVar1 + 7) = 0x3dcccccd;
  return;
}



// FUNCTION 1459b95be FUN_1459b95be body=32 status=ok
// SIG undefined FUN_1459b95be(void)

undefined8 * FUN_1459b95be(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_149f87460;
  return param_1;
}



// FUNCTION 1459b95de FUN_1459b95de body=70 status=ok
// SIG undefined FUN_1459b95de(void)

void FUN_1459b95de(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1410b225f(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459b9626 FUN_1459b9626 body=70 status=ok
// SIG undefined FUN_1459b9626(void)

void FUN_1459b9626(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_14144c10c(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459b966e FUN_1459b966e body=132 status=ok
// SIG undefined FUN_1459b966e(void)

void FUN_1459b966e(longlong param_1,int param_2)

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



// FUNCTION 1459b96f4 FUN_1459b96f4 body=40 status=ok
// SIG undefined FUN_1459b96f4(void)

undefined8 FUN_1459b96f4(undefined8 param_1,int param_2)

{
  FUN_1459b971c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459b971c FUN_1459b971c body=109 status=ok
// SIG undefined FUN_1459b971c(void)

void FUN_1459b971c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a44dd30;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_1459b978a(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_1459b97c0(param_1 + 6);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 1459b978a FUN_1459b978a body=53 status=ok
// SIG undefined FUN_1459b978a(void)

void FUN_1459b978a(longlong *param_1)

{
  FUN_140e56d20();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459b97c0 FUN_1459b97c0 body=53 status=ok
// SIG undefined FUN_1459b97c0(void)

void FUN_1459b97c0(longlong *param_1)

{
  FUN_140e56b36();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459b97f6 FUN_1459b97f6 body=40 status=ok
// SIG undefined FUN_1459b97f6(void)

undefined8 FUN_1459b97f6(undefined8 param_1,int param_2)

{
  FUN_1459b981e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459b981e FUN_1459b981e body=86 status=ok
// SIG undefined FUN_1459b981e(void)

void FUN_1459b981e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b6cf3e0;
  if (param_1[0xca] != 0) {
    FUN_1400020a8();
  }
  if (param_1[200] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc5] != 0) {
    FUN_1400020a8();
  }
  FUN_1459b9874(param_1);
  return;
}



// FUNCTION 1459b9874 FUN_1459b9874 body=67 status=ok
// SIG undefined FUN_1459b9874(void)

void FUN_1459b9874(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b14ca10;
  if (param_1[0xc3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc1] != 0) {
    FUN_1400020a8();
  }
  FUN_1459b98b8(param_1);
  return;
}



// FUNCTION 1459b98b8 FUN_1459b98b8 body=229 status=ok
// SIG undefined FUN_1459b98b8(void)

void FUN_1459b98b8(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a1903d0;
  plVar2 = (longlong *)param_1[0xc0];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_1407c83f0(param_1[0xbd],*(undefined4 *)(param_1 + 0xbe));
  if (param_1[0xbd] != 0) {
    FUN_1400020a8();
  }
  FUN_1407c83f0(param_1[0xbb],*(undefined4 *)(param_1 + 0xbc));
  if (param_1[0xbb] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xba) = 0;
  if (param_1[0xb9] != 0) {
    FUN_1400020a8();
  }
  FUN_1459b999e(param_1 + 0xb1);
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (param_1[0xaf] != 0) {
    FUN_1400020a8();
  }
  FUN_1459b99d4(param_1 + 0xa7);
  FUN_14142a6ea(param_1);
  return;
}



// FUNCTION 1459b999e FUN_1459b999e body=53 status=ok
// SIG undefined FUN_1459b999e(void)

void FUN_1459b999e(longlong *param_1)

{
  FUN_1459b9a0a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459b99d4 FUN_1459b99d4 body=53 status=ok
// SIG undefined FUN_1459b99d4(void)

void FUN_1459b99d4(longlong *param_1)

{
  FUN_1459b9b58();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459b9a0a FUN_1459b9a0a body=332 status=ok
// SIG undefined FUN_1459b9a0a(void)

void FUN_1459b9a0a(longlong *param_1)

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
      FUN_14099aaa0(*local_68 + (longlong)iStack_4c * 0x70 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140875b54(param_1,0);
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



// FUNCTION 1459b9b58 FUN_1459b9b58 body=343 status=ok
// SIG undefined FUN_1459b9b58(void)

void FUN_1459b9b58(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
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
      plVar3 = *(longlong **)(*local_68 + 0x20 + (longlong)iStack_4c * 0x30);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
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
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459b9cbc FUN_1459b9cbc body=361 status=ok
// SIG undefined FUN_1459b9cbc(void)

undefined8 * FUN_1459b9cbc(undefined8 *param_1)

{
  FUN_1408f3ab0();
  *param_1 = &PTR_FUN_14a74b350;
  param_1[5] = &PTR_FUN_14a74b930;
  param_1[6] = &PTR_LAB_14a74b970;
  param_1[0x5f] = 0;
  param_1[0x6a] = 0;
  memset(param_1 + 0x6c,0,0x90);
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  memset(param_1 + 0x82,0,0x90);
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x1fb) = 1;
  *(undefined1 *)((longlong)param_1 + 0x30d) = 1;
  *(undefined2 *)((longlong)param_1 + 0x349) = 1;
  *(undefined4 *)(param_1 + 100) = 0x447a0000;
  param_1[0x65] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x66) = 0xff000000;
  *(undefined8 *)((longlong)param_1 + 0x304) = 0x48127c0000000080;
  param_1[0x62] = 0;
  param_1[99] = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0x7e) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x94) = 0x3f800000;
  *(undefined1 **)((longlong)param_1 + 0x4a4) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x4ac) = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0x5b) = 1;
  *(uint *)((longlong)param_1 + 0x2d4) = *(uint *)((longlong)param_1 + 0x2d4) & 0xfffffebf | 0x40;
  *(byte *)((longlong)param_1 + 0x2dc) = *(byte *)((longlong)param_1 + 0x2dc) | 3;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 4;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  *(byte *)((longlong)param_1 + 0x334) = *(byte *)((longlong)param_1 + 0x334) & 0xfe;
  param_1[0x67] = 0x431600003f800000;
  param_1[0x68] = 0x3d4ccccd3f800000;
  return param_1;
}



// FUNCTION 1459b9e2c FUN_1459b9e2c body=228 status=ok
// SIG undefined FUN_1459b9e2c(void)

longlong FUN_1459b9e2c(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cac1208 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_14786eee1;
    local_40 = FUN_146378a34;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"GbxBoneSetInterface",&DAT_14cac1208,&DAT_14786eee0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac1208;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459b9f18 FUN_1459b9f18 body=228 status=ok
// SIG undefined FUN_1459b9f18(void)

longlong FUN_1459b9f18(void)

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
  if (DAT_14cb5fc50 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1411827ec;
    local_38 = &LAB_1486b8d99;
    local_40 = &LAB_1458c5c8a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x78;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxInventoryChannel",&DAT_14cb5fc50,&DAT_1486b8d98);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5fc50;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459ba004 FUN_1459ba004 body=228 status=ok
// SIG undefined FUN_1459ba004(void)

longlong FUN_1459ba004(void)

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
  if (DAT_14cb61e60 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1411827ec;
    local_38 = &LAB_1486dfd9b;
    local_40 = &LAB_145ac255f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0xc0;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerProfileChannel",&DAT_14cb61e60,&DAT_1486dfd9a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb61e60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459ba0f6 FUN_1459ba0f6 body=228 status=ok
// SIG undefined FUN_1459ba0f6(void)

longlong FUN_1459ba0f6(void)

{
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
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9fea8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_14096c2dc;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459f28be;
    local_38 = &LAB_148b8b10d;
    local_40 = &LAB_14620e649;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x32c0;
    FUN_14081cfa3(L"/Script/OakGame",L"CharacterSelectStationObject",&DAT_14cb9fea8,&DAT_148b8b10c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9fea8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459ba1e2 FUN_1459ba1e2 body=228 status=ok
// SIG undefined FUN_1459ba1e2(void)

longlong FUN_1459ba1e2(void)

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
  if (DAT_14cbaba28 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1411827ec;
    local_38 = &LAB_148c254e9;
    local_40 = &LAB_145950b50;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x78;
    FUN_14081cfa3(L"/Script/OakGame",L"OakInventoryChannel",&DAT_14cbaba28,&DAT_148c254e8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbaba28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459ba2ce FUN_1459ba2ce body=228 status=ok
// SIG undefined FUN_1459ba2ce(void)

longlong FUN_1459ba2ce(void)

{
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
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbad560 == 0) {
    local_30 = &local_10;
    local_10 = FUN_14096c2dc;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1418c3448;
    local_38 = &LAB_148c35b35;
    local_40 = &LAB_1461f29c3;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2600;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPhysicsObject",&DAT_14cbad560,&DAT_148c35b34);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbad560;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459ba3b4 FUN_1459ba3b4 body=250 status=ok
// SIG undefined FUN_1459ba3b4(void)

longlong * FUN_1459ba3b4(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x98,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b961410;
  plVar1 = plVar4 + 2;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  plVar4[0xb] = 0;
  plVar4[0xc] = 0;
  plVar4[0xd] = 0;
  plVar4[2] = (longlong)&PTR_LAB_14b961430;
  plVar4[0xe] = 0;
  plVar4[0xf] = 0;
  plVar4[0x10] = 0;
  plVar4[0x11] = 0;
  plVar4[0x12] = 0;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_1459ba4b2(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459ba4b2 FUN_1459ba4b2 body=162 status=ok
// SIG undefined FUN_1459ba4b2(void)

void FUN_1459ba4b2(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1459ba4f1;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1459ba4f1;
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
LAB_1459ba4f1:
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
                    /* WARNING: Could not recover jumptable at 0x0001459ba550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1459ba56a FUN_1459ba56a body=128 status=ok
// SIG undefined FUN_1459ba56a(void)

void FUN_1459ba56a(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  
  if ((((*(int *)(param_1 + 0x68) == 0) && (*(int *)(param_1 + 0x1a0) != 0)) &&
      (*(int *)(param_1 + 0xd8) == 0)) && (lVar1 = FUN_14494f566(param_1 + 0x1a8), lVar1 != 0)) {
    fVar2 = (float)FUN_140c03056(param_1);
    if (((fVar2 == 0.0) && (!NAN(fVar2))) || (1.0 < fVar2 - *(float *)(param_1 + 0x1d8))) {
      FUN_14031a040(param_1,param_1 + 0x1a0,0);
      *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_1 + 0x1d8);
    }
  }
  return;
}



// FUNCTION 1459ba5ea FUN_1459ba5ea body=213 status=ok
// SIG undefined FUN_1459ba5ea(void)

bool FUN_1459ba5ea(longlong param_1,undefined8 param_2,undefined2 *param_3)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined2 local_40;
  undefined6 uStack_3e;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_144a61b4f();
  if (cVar2 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar4 = CONCAT62(uStack_3e,local_40);
  }
  else {
    lVar4 = 0;
  }
  lVar3 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar3 != 0) {
    pcVar1 = *(code **)(param_1 + 0x20);
    local_40 = *param_3;
    local_38 = *(longlong *)(param_3 + 4);
    if ((local_38 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    (*pcVar1)(lVar3,param_2,&local_40);
  }
  if ((lVar4 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar4);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar3 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459ba6c0 FUN_1459ba6c0 body=84 status=ok
// SIG undefined FUN_1459ba6c0(void)

void FUN_1459ba6c0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if (lVar1 == param_2) {
    FUN_1412465d2(param_1 + 0x1a,param_2);
    if (DAT_14cadbee0 == '\x01') {
      FUN_14082bc44(param_1 + 0x1a,param_2,param_2 + 0x950);
      return;
    }
  }
  return;
}



// FUNCTION 1459ba714 FUN_1459ba714 body=40 status=ok
// SIG undefined FUN_1459ba714(void)

undefined8 FUN_1459ba714(undefined8 param_1,int param_2)

{
  FUN_1459ba73c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459ba73c FUN_1459ba73c body=68 status=ok
// SIG undefined FUN_1459ba73c(void)

void FUN_1459ba73c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae1a790;
  FUN_1459becf2(param_1 + 0x1b);
  FUN_1459ba786(param_1 + 0xb);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 1459ba780 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(void)

{
  thunk_FUN_144760e82();
  return;
}



// FUNCTION 1459ba786 FUN_1459ba786 body=100 status=ok
// SIG undefined FUN_1459ba786(void)

void FUN_1459ba786(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  if (((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x30) + 8))) {
    FUN_148070982(param_1);
  }
  plVar2 = *(longlong **)(param_1 + 0x30);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459ba7f0 FUN_1459ba7f0 body=181 status=ok
// SIG undefined FUN_1459ba7f0(void)

void FUN_1459ba7f0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_1;
  lVar1 = lVar2 + 0x410;
  local_38 = 0;
  uStack_30 = 0;
  FUN_144a84622(lVar1,&local_38);
  if ((longlong)(int)uStack_30 != 0) {
    lVar5 = (longlong)(int)uStack_30 << 4;
    lVar6 = local_38;
    do {
      cVar4 = FUN_144a84554(lVar1,lVar6);
      if (cVar4 != '\0') {
        lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x620) + 0x38);
        *(undefined4 *)(lVar3 + 0x20) = 6;
        *(longlong *)(lVar3 + 0x28) = lVar3;
        FUN_1459ba8a6(lVar6,lVar3 + 0x20);
      }
      lVar6 = lVar6 + 0x10;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
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



// FUNCTION 1459ba8a6 FUN_1459ba8a6 body=23 status=ok
// SIG undefined FUN_1459ba8a6(void)

void FUN_1459ba8a6(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    if ((*(byte *)(lVar3 + 8) & 3) == 0) {
      uVar1 = *(uint *)(lVar3 + 0xc);
      lVar2 = *(longlong *)(lVar3 + 0x48);
      *(undefined8 *)(lVar3 + 0x70) = param_2;
      *(uint *)(lVar3 + 0xc) = uVar1 | 1;
      if ((lVar2 != 0 && uVar1 == 0) && (*(longlong *)(lVar2 + 8) != 0)) {
        FUN_144821112(*(longlong *)(lVar2 + 8) + 0x70,lVar2,*(uint *)(lVar3 + 8) >> 3);
        return;
      }
      return;
    }
    *(undefined8 *)(lVar3 + 0x68) = param_2;
  }
  return;
}



// FUNCTION 1459ba8c8 FUN_1459ba8c8 body=117 status=ok
// SIG undefined FUN_1459ba8c8(void)

undefined8 * FUN_1459ba8c8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b45e590;
  InitializeSRWLock((PSRWLOCK)(param_1 + 5));
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  param_1[7] = puVar1;
  param_1[6] = puVar1;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  return param_1;
}



// FUNCTION 1459ba93e FUN_1459ba93e body=156 status=ok
// SIG undefined FUN_1459ba93e(void)

bool FUN_1459ba93e(longlong param_1,undefined4 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 1459ba9e8 FUN_1459ba9e8 body=78 status=ok
// SIG undefined FUN_1459ba9e8(void)

void FUN_1459ba9e8(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0x70);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0x70);
    if (lVar2 != 0) {
      cVar1 = FUN_1459baa36(lVar2);
      if (cVar1 != '\0') {
        FUN_144000cde(lVar2,param_2);
        return;
      }
    }
  }
  return;
}


