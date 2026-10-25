// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1489da406 FUN_1489da406 body=81 status=ok
// SIG undefined FUN_1489da406(void)

void FUN_1489da406(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          FUN_1489da458(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1489da458 FUN_1489da458 body=90 status=ok
// SIG undefined FUN_1489da458(void)

void FUN_1489da458(longlong *param_1,int param_2)

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
  FUN_1489da4b2();
  return;
}



// FUNCTION 1489da4b2 FUN_1489da4b2 body=78 status=ok
// SIG undefined FUN_1489da4b2(void)

void FUN_1489da4b2(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(*param_1 + 0x10 + (longlong)param_2 * 0x20);
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
  FUN_1489da17e(param_1,param_2);
  return;
}



// FUNCTION 1489da500 FUN_1489da500 body=147 status=ok
// SIG undefined FUN_1489da500(void)

void FUN_1489da500(longlong param_1,int param_2)

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



// FUNCTION 1489da594 FUN_1489da594 body=48 status=ok
// SIG undefined FUN_1489da594(void)

void FUN_1489da594(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 1489da5c4 FUN_1489da5c4 body=97 status=ok
// SIG undefined FUN_1489da5c4(void)

void FUN_1489da5c4(ISyncStreamReader *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_14b451cc0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  FUN_1489c22cc(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x0001489da61e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  cohtml::ISyncStreamReader::~ISyncStreamReader(param_1);
  return;
}



// FUNCTION 1489da626 FUN_1489da626 body=223 status=ok
// SIG undefined FUN_1489da626(void)

void FUN_1489da626(undefined8 param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_68 [40];
  wchar_t *local_40;
  int local_38;
  wchar_t *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    FUN_140056680(&local_30,&DAT_149e01fe8);
  }
  else {
    FUN_1400021e4(param_2 + 0x20,&local_30);
  }
  FUN_140056680(&local_40,L"ProtocolPathDefs");
  if (local_28 == local_38) {
    bVar2 = true;
    if (1 < local_28) {
      iVar1 = wcscmp(local_30,local_40);
      bVar2 = iVar1 == 0;
    }
  }
  else {
    bVar2 = local_38 + local_28 == 1;
  }
  if (local_40 != (wchar_t *)0x0) {
    FUN_1400020a8(local_40);
  }
  if (local_30 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (bVar2) {
    FUN_141509056(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489da706 FUN_1489da706 body=125 status=ok
// SIG undefined FUN_1489da706(void)

void FUN_1489da706(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_14485c47a();
  iVar1 = *(int *)(param_1 + 0x3d0);
  *(uint *)(param_1 + 0x3d0) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x3d4) < iVar1 + 1U) {
    FUN_1409d3082((longlong *)(param_1 + 0x3c8),iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x3c8) + (longlong)iVar1 * 8) = local_28;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489da784 FUN_1489da784 body=96 status=ok
// SIG undefined FUN_1489da784(void)

void FUN_1489da784(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_14485c47a(&local_28);
  local_20 = &local_28;
  FUN_1411dbb96(param_1 + 0x3c8);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489da7e6 FUN_1489da7e6 body=181 status=ok
// SIG undefined FUN_1489da7e6(void)

void FUN_1489da7e6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if (*(char *)(param_1 + 8) == '\x01') {
    puVar1 = cohtml::IEventHandler::operator_new(0x10);
    *puVar1 = &PTR_FUN_14b456440;
    puVar1[1] = param_1;
    (**(code **)(*param_2 + 0x1b0))(param_2,"speechapi.speak",puVar1);
    puVar1 = cohtml::IEventHandler::operator_new(0x10);
    *puVar1 = &PTR_FUN_14b456460;
    puVar1[1] = param_1;
    (**(code **)(*param_2 + 0x1b0))(param_2,"speechapi.cancel",puVar1);
    puVar1 = cohtml::IEventHandler::operator_new(0x10);
    *puVar1 = &PTR_FUN_14b456480;
    puVar1[1] = param_1;
                    /* WARNING: Could not recover jumptable at 0x0001489da88f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x1b0))
              (param_2,"speechapi.isSpeaking",puVar1,*(code **)(*param_2 + 0x1b0));
    return;
  }
  return;
}



// FUNCTION 1489da89c FUN_1489da89c body=8 status=ok
// SIG undefined FUN_1489da89c(void)

undefined8 FUN_1489da89c(void)

{
  return DAT_14cb90e10;
}



// FUNCTION 1489da8a4 FUN_1489da8a4 body=61 status=ok
// SIG undefined FUN_1489da8a4(void)

longlong FUN_1489da8a4(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a6654a();
  if (lVar1 != 0) {
    lVar2 = FUN_144a79692();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1489da8e2 FUN_1489da8e2 body=277 status=ok
// SIG undefined FUN_1489da8e2(void)

ulonglong FUN_1489da8e2(undefined8 *param_1,undefined8 param_2)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  void *local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  int local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = (void *)0x0;
  uStack_60 = 0;
  local_58 = *param_1;
  local_50 = *(int *)(param_1 + 1) + -1;
  if (*(int *)(param_1 + 1) == 0) {
    local_50 = 0;
  }
  FUN_14475bf92(&local_78,&local_58);
  _Src = local_68;
  local_58 = 0;
  local_50 = (undefined4)local_78;
  uStack_4c = local_78._4_4_;
  uStack_48 = (undefined4)uStack_70;
  uStack_44 = uStack_70._4_4_;
  local_40 = (void *)0x0;
  lVar2 = (longlong)(int)uStack_60;
  local_38 = (int)uStack_60;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,uStack_60 & 0xffffffff,0);
    memcpy(local_40,_Src,lVar2 * 2);
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8(local_68);
  }
  lVar2 = FUN_14090ae24(&local_58);
  if ((lVar2 == 0) || ((*(uint *)(lVar2 + 8) >> 0x1e & 1) != 0)) {
    uVar3 = 0;
  }
  else {
    local_30 = lVar2;
    iVar1 = FUN_1489daa40(param_2);
    uVar3 = CONCAT71((int7)((ulonglong)param_2 >> 8),0 < iVar1);
  }
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489da9f8 FUN_1489da9f8 body=70 status=ok
// SIG undefined FUN_1489da9f8(void)

bool FUN_1489da9f8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_1;
  iVar1 = FUN_1489daa40(param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0 < iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489daa40 FUN_1489daa40 body=199 status=ok
// SIG undefined FUN_1489daa40(void)

int FUN_1489daa40(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  
  iVar3 = (int)param_1[1];
  iVar4 = iVar3;
  if (0 < iVar3) {
    lVar10 = 0;
    bVar5 = false;
    do {
      uVar9 = (uint)lVar10;
      lVar10 = (longlong)(int)uVar9;
      lVar1 = *param_1 + lVar10 * 8;
      lVar8 = 0;
      while (*(longlong *)(lVar1 + lVar8 * 8) != *param_2) {
        lVar2 = lVar10 + lVar8;
        lVar8 = lVar8 + 1;
        if ((longlong)iVar4 <= lVar2 + 1) {
          if (bVar5) goto LAB_1489daafa;
          goto LAB_1489daae7;
        }
      }
      iVar7 = (int)lVar8;
      if (~uVar9 + iVar4 != iVar7) {
        iVar6 = (~uVar9 + iVar4) - iVar7;
        if (0 < iVar6) {
          iVar6 = 1;
        }
        memmove((void *)(lVar1 + lVar8 * 8),(void *)(*param_1 + (longlong)(iVar4 - iVar6) * 8),
                (longlong)iVar6 << 3);
        iVar4 = (int)param_1[1];
      }
      lVar10 = lVar10 + lVar8;
      iVar4 = iVar4 + -1;
      *(int *)(param_1 + 1) = iVar4;
      bVar5 = true;
    } while ((int)(uVar9 + iVar7) < iVar4);
LAB_1489daafa:
    FUN_147a76144(param_1);
    iVar4 = (int)param_1[1];
  }
LAB_1489daae7:
  return iVar3 - iVar4;
}



// FUNCTION 1489dab1e FUN_1489dab1e body=8 status=ok
// SIG undefined FUN_1489dab1e(void)

undefined * FUN_1489dab1e(void)

{
  return &DAT_14cb90e48;
}



// FUNCTION 1489dad7e FUN_1489dad7e body=412 status=ok
// SIG undefined FUN_1489dad7e(void)

undefined8
FUN_1489dad7e(longlong param_1,undefined8 param_2,undefined8 param_3,double *param_4,double *param_5
             )

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  float fVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  int local_38;
  int iStack_34;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_4 = 0.0;
  param_4[1] = 0.0;
  *param_5 = 0.0;
  param_5[1] = 0.0;
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 8))();
    if (cVar3 != '\0') {
      cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))();
      if (cVar3 == '\0') {
        (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),&local_30);
        *param_4 = (double)local_30;
        param_4[1] = (double)local_2c;
        *param_5 = (double)local_28;
        param_5[1] = (double)local_24;
        lVar2 = DAT_14cb0d2b0;
        if (DAT_14cb0d2b0 != 0) {
          cVar3 = FUN_140432338(DAT_14cb0d2b0);
          if ((cVar3 != '\0') && (*(longlong *)(lVar2 + 0xc20) != 0)) {
            cVar3 = FUN_146036e26();
            if ((cVar3 == '\0') &&
               (plVar1 = *(longlong **)(*(longlong *)(DAT_14cb0d2b0 + 0xc20) + 0xf8),
               plVar1 != (longlong *)0x0)) {
              local_48 = 0;
              uStack_40 = 0;
              (**(code **)(*plVar1 + 0x158))(plVar1,&local_38);
              fVar4 = (float)(**(code **)(**(longlong **)
                                            (*(longlong *)
                                              (*(longlong *)(DAT_14cb0d2b0 + 0xc20) + 0xf8) + 0x30)
                                         + 0x1c8))();
              local_38 = (int)((float)local_38 * fVar4);
              iStack_34 = (int)((float)iStack_34 * fVar4);
              *param_4 = (double)local_38 + *param_4;
              param_4[1] = (double)iStack_34 + param_4[1];
            }
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489daf28 FUN_1489daf28 body=41 status=ok
// SIG undefined FUN_1489daf28(void)

void FUN_1489daf28(longlong param_1)

{
  if (*(char *)(param_1 + 0x28) == '\0') {
    *(undefined1 *)(param_1 + 0x28) = 1;
    FUN_144a7e010(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



// FUNCTION 1489db094 FUN_1489db094 body=61 status=ok
// SIG undefined FUN_1489db094(void)

int FUN_1489db094(longlong param_1)

{
  int iVar1;
  HKL pHVar2;
  longlong lVar3;
  
  pHVar2 = GetKeyboardLayout(0);
  lVar3 = 0x20;
  if (((uint)pHVar2 & 0x3ff) == 4) {
    lVar3 = (ulonglong)*(byte *)(param_1 + 0x48) * 0x20 + 0x20;
  }
  iVar1 = *(int *)(param_1 + lVar3) + -1;
  if (*(int *)(param_1 + lVar3) == 0) {
    iVar1 = 0;
  }
  return iVar1;
}



// FUNCTION 1489db0d2 FUN_1489db0d2 body=272 status=ok
// SIG undefined FUN_1489db0d2(void)

void FUN_1489db0d2(longlong param_1,undefined4 param_2,undefined4 param_3,void **param_4)

{
  void *_Src;
  HKL pHVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pHVar1 = GetKeyboardLayout(0);
  if (((uint)pHVar1 & 0x3ff) != 4) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  if (*(char *)(param_1 + 0x48) == '\x01') {
    local_40 = (void *)0x0;
    local_38 = *(int *)(param_1 + 0x40);
    lVar2 = (longlong)local_38;
    _Src = *(void **)(param_1 + 0x38);
    if (lVar2 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,_Src,lVar2 * 2);
    }
  }
  else {
    FUN_144a63a7c(param_1 + 0x18,&local_40,param_2,param_3);
  }
  if (&local_40 == param_4) {
    if (local_40 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_4 != (void *)0x0) {
      FUN_1400020a8();
    }
    *param_4 = local_40;
    *(int *)(param_4 + 1) = local_38;
    *(undefined4 *)((longlong)param_4 + 0xc) = local_34;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489db1fe FUN_1489db1fe body=759 status=ok
// SIG undefined FUN_1489db1fe(void)

void FUN_1489db1fe(longlong param_1,int param_2,int param_3,undefined8 param_4)

{
  longlong *plVar1;
  void *_Src;
  char cVar2;
  HKL pHVar3;
  undefined2 *puVar4;
  longlong *plVar5;
  size_t sVar6;
  int iVar7;
  int iVar8;
  wchar_t *_Str;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined2 *puVar13;
  undefined1 auStack_128 [32];
  longlong local_108 [2];
  longlong local_f8 [2];
  wchar_t *local_e8;
  uint local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  pHVar3 = GetKeyboardLayout(0);
  if (((uint)pHVar3 & 0x3ff) != 4) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_128);
  }
  plVar1 = (longlong *)(param_1 + 0x18);
  uVar11 = param_3 + param_2 + *(int *)(param_1 + 0x30);
  iVar9 = *(int *)(param_1 + 0x20);
  puVar13 = &DAT_149dfb77a;
  puVar4 = &DAT_149dfb77a;
  if (iVar9 != 0) {
    puVar4 = (undefined2 *)*plVar1;
  }
  uVar10 = iVar9 - 1;
  if (iVar9 == 0) {
    uVar10 = 0;
  }
  if ((int)uVar10 <= (int)uVar11) {
    uVar11 = uVar10;
  }
  uVar12 = (ulonglong)uVar11;
  if ((int)uVar11 < 1) {
    uVar12 = 0;
  }
  FUN_14006620a(&local_e8,puVar4 + uVar12,uVar10 - (int)uVar12);
  iVar9 = *(int *)(param_1 + 0x20) + -1;
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar9 = 0;
  }
  else {
    puVar13 = (undefined2 *)*plVar1;
  }
  if (param_2 < iVar9) {
    iVar9 = param_2;
  }
  if (iVar9 < 1) {
    iVar9 = 0;
  }
  FUN_14006620a(local_108,puVar13,iVar9);
  FUN_144a7dea0(local_f8,local_108,param_4);
  FUN_1401c7f3e(&local_d8,local_f8,&local_e8);
  if (plVar1 == &local_d8) {
    if (local_d8 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x18) = local_d8;
    local_d8 = 0;
    *(undefined4 *)(param_1 + 0x20) = (undefined4)local_d0;
    *(undefined4 *)(param_1 + 0x24) = local_d0._4_4_;
    local_d0 = 0;
  }
  if (local_f8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_108[0] != 0) {
    FUN_1400020a8();
  }
  if (local_e8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (((*(longlong **)(param_1 + 8) != (longlong *)0x0) &&
      (cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 8))(), cVar2 != '\0')) &&
     (plVar5 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(),
     plVar5 != (longlong *)0x0)) {
    uVar11 = *(uint *)(param_1 + 0x20);
    if ((int)uVar11 < 2) {
      (**(code **)(*plVar5 + 0x108))(plVar5);
    }
    else {
      iVar9 = *(int *)(param_1 + 0x30);
      if (iVar9 == 0) {
        local_e8 = (wchar_t *)0x0;
        _Src = (void *)*plVar1;
        local_e0 = uVar11;
        FUN_1446dd670(&local_e8,uVar11,0);
        memcpy(local_e8,_Src,(ulonglong)uVar11 * 2);
      }
      else {
        iVar8 = uVar11 - 1;
        if (iVar8 <= iVar9) {
          iVar9 = iVar8;
        }
        iVar7 = 0;
        if (0 < iVar9) {
          iVar7 = iVar9;
        }
        FUN_14006620a(&local_e8,(ulonglong)(uint)(iVar7 * 2) + *plVar1,iVar8 - iVar7);
      }
      iVar9 = local_e0 - 1;
      _Str = local_e8;
      if (local_e0 == 0) {
        iVar9 = 0;
        _Str = L"";
      }
      local_58 = 0;
      if (_Str == (wchar_t *)0x0) {
        local_50 = 0;
        local_48 = 0;
      }
      else {
        sVar6 = wcslen(_Str);
        FUN_1446fe5a4(&local_d8,_Str,sVar6 & 0xffffffff,1);
      }
      (**(code **)(*plVar5 + 0xf8))(plVar5,local_50,iVar9,iVar9);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if (local_e8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489db518 FUN_1489db518 body=143 status=ok
// SIG undefined FUN_1489db518(void)

void FUN_1489db518(longlong param_1)

{
  int iVar1;
  HKL pHVar2;
  
  pHVar2 = GetKeyboardLayout(0);
  if (((uint)pHVar2 & 0x3ff) == 4) {
    if (*(char *)(param_1 + 0x28) == '\0') {
      iVar1 = *(int *)(param_1 + 0x40) + -1;
      if (*(int *)(param_1 + 0x40) == 0) {
        iVar1 = 0;
      }
      *(int *)(param_1 + 0x30) = iVar1;
      if (*(char *)(param_1 + 0x48) == '\x01') {
        FUN_1402980a2(param_1 + 0x18,*(undefined8 *)(param_1 + 0x38));
      }
      else {
        FUN_144a7e010(param_1 + 0x18);
      }
      *(undefined1 *)(param_1 + 0x28) = 1;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined1 *)(param_1 + 0x48) = 0;
      FUN_144a7e010((undefined8 *)(param_1 + 0x38));
      return;
    }
  }
  else if (*(char *)(param_1 + 0x28) == '\0') {
    *(undefined1 *)(param_1 + 0x28) = 1;
    FUN_144a7e010(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



// FUNCTION 1489db5a8 FUN_1489db5a8 body=566 status=ok
// SIG undefined FUN_1489db5a8(void)

void FUN_1489db5a8(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  HKL pHVar5;
  longlong *plVar6;
  size_t sVar7;
  ulonglong uVar8;
  uint uVar9;
  wchar_t *_Str;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  pHVar5 = GetKeyboardLayout(0);
  if (((uint)pHVar5 & 0x3ff) != 4) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_f8);
  }
  if ((*(char *)(param_1 + 0x28) != '\x01') || (*(int *)(param_1 + 0x20) < 2)) goto LAB_1489db757;
  plVar1 = (longlong *)(param_1 + 0x18);
  uVar9 = *(int *)(param_1 + 0x20) - 1;
  uVar4 = *(uint *)(param_1 + 0x30);
  if (((int)uVar4 < (int)uVar9 && uVar4 != 0) && (*(ushort *)*plVar1 < 0x80)) {
    if ((int)uVar9 <= (int)uVar4) {
      uVar4 = uVar9;
    }
    uVar8 = 0;
    if (0 < (int)uVar4) {
      uVar8 = (ulonglong)uVar4;
    }
    FUN_14006620a(&local_d0,(ushort *)*plVar1 + uVar8,uVar9 - (int)uVar8);
    if (plVar1 == &local_d0) {
      if (local_d0 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x18) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x18) = local_d0;
      local_d0 = 0;
      *(undefined4 *)(param_1 + 0x20) = local_c8;
      *(undefined4 *)(param_1 + 0x24) = local_c4;
    }
  }
  if ((uVar9 == 1) && (*(ushort *)*plVar1 < 0x80)) {
    *(undefined1 *)(param_1 + 0x48) = 1;
    iVar2 = *(int *)(param_1 + 0x20) + -1;
    if (*(int *)(param_1 + 0x20) == 0) {
      iVar2 = 0;
    }
    FUN_1402980a2(param_1 + 0x38,(ushort *)*plVar1,iVar2);
  }
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 8))();
    if (cVar3 != '\0') {
      plVar6 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
      if (plVar6 != (longlong *)0x0) {
        if (*(int *)(param_1 + 0x20) == 0) {
          _Str = L"";
LAB_1489db6e6:
          local_50 = 0;
          sVar7 = wcslen(_Str);
          FUN_1446fe5a4(&local_d0,_Str,sVar7 & 0xffffffff,1);
        }
        else {
          _Str = (wchar_t *)*plVar1;
          local_50 = 0;
          if (_Str != (wchar_t *)0x0) goto LAB_1489db6e6;
          local_48 = 0;
          local_40 = 0;
        }
        (**(code **)(*plVar6 + 0x100))(plVar6,local_48);
        if (local_50 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x28) = 0;
  FUN_144a7e010(plVar1);
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_145af498a(*(undefined8 *)(param_1 + 8),0);
  FUN_145af498a(*(undefined8 *)(param_1 + 8),1);
LAB_1489db757:
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489db7f6 FUN_1489db7f6 body=873 status=ok
// SIG undefined FUN_1489db7f6(void)

ulonglong FUN_1489db7f6(undefined8 param_1,int param_2,char *param_3,int param_4,void *param_5,
                       uint param_6)

{
  void *_Src;
  int iVar1;
  size_t sVar2;
  undefined8 *puVar3;
  wchar_t *pwVar4;
  ulonglong uVar5;
  longlong lVar6;
  bool bVar7;
  longlong lVar8;
  undefined1 auStack_198 [32];
  wchar_t *local_178;
  int local_170;
  undefined4 local_16c;
  longlong *local_168 [2];
  undefined1 local_158 [128];
  wchar_t *local_d8;
  void *local_d0;
  uint local_c8;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (param_4 == 0) {
    uVar5 = 0;
    goto LAB_1489db9ae;
  }
  local_58 = 0;
  if (param_3 == (char *)0x0) {
    local_50 = 0;
    local_48 = 0;
  }
  else {
    sVar2 = strlen(param_3);
    FUN_1446e6fe8(local_158,param_3,sVar2 & 0xffffffff,1);
  }
  FUN_140056680(&local_178,local_50);
  FUN_140233b1a(local_168);
  if (local_178 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (param_2 == 2) {
    puVar3 = (undefined8 *)FUN_1447a1f4a(local_168);
    local_178 = (wchar_t *)0x0;
    local_170 = *(int *)(puVar3 + 1);
    lVar6 = (longlong)local_170;
    _Src = (void *)*puVar3;
    if (lVar6 == 0) {
      local_16c = 0;
LAB_1489dbb13:
      local_d8 = (wchar_t *)0x0;
      local_d0 = (void *)0x0;
      local_c8 = 0;
      sVar2 = 0;
      pwVar4 = local_178;
LAB_1489dbb2f:
      memcpy(param_5,local_d0,sVar2);
      uVar5 = CONCAT71((int7)((ulonglong)pwVar4 >> 8),1);
    }
    else {
      FUN_1446dd670(&local_178,local_170,0);
      memcpy(local_178,_Src,lVar6 * 2);
      pwVar4 = local_178;
      lVar6 = (longlong)local_170;
      if (lVar6 != 0) {
        bVar7 = true;
        lVar8 = 0;
        do {
          iVar1 = iswalnum(*(wint_t *)((longlong)pwVar4 + lVar8));
          if (iVar1 == 0) {
            bVar7 = (bool)(*(short *)((longlong)pwVar4 + lVar8) != 0x5f | bVar7);
          }
          else {
            if (bVar7) {
              *(ushort *)((longlong)pwVar4 + lVar8) =
                   *(ushort *)((longlong)pwVar4 + lVar8) +
                   (ushort)(0x19 < *(ushort *)((longlong)pwVar4 + lVar8) - 0x61) * 0x20 + -0x20;
            }
            bVar7 = false;
          }
          lVar8 = lVar8 + 2;
        } while (lVar6 * 2 != lVar8);
      }
      pwVar4 = local_178;
      local_d8 = (wchar_t *)0x0;
      if (local_178 == (wchar_t *)0x0) goto LAB_1489dbb13;
      sVar2 = wcslen(local_178);
      FUN_1446fe5a4(local_158,pwVar4,sVar2 & 0xffffffff,1);
      sVar2 = (size_t)(int)local_c8;
      if (local_c8 <= param_6) goto LAB_1489dbb2f;
      uVar5 = 0;
    }
    pwVar4 = local_178;
    if (local_d8 != (wchar_t *)0x0) {
      FUN_1400020a8();
      pwVar4 = local_178;
    }
LAB_1489db994:
    if (pwVar4 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_2 == 1) {
      FUN_1467cf2c6(local_168,&local_178);
LAB_1489db90d:
      puVar3 = (undefined8 *)FUN_1447a1f4a(&local_178);
      if (*(int *)(puVar3 + 1) == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = (wchar_t *)*puVar3;
      }
      local_d8 = (wchar_t *)0x0;
      if (pwVar4 == (wchar_t *)0x0) {
        local_d0 = (void *)0x0;
        local_c8 = 0;
      }
      else {
        sVar2 = wcslen(pwVar4);
        FUN_1446fe5a4(local_158,pwVar4,sVar2 & 0xffffffff,1);
      }
      if (local_178 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_178 + 0x10))();
      }
      uVar5 = CONCAT71((int7)((ulonglong)pwVar4 >> 8),local_c8 <= param_6);
      pwVar4 = local_d8;
      if (local_c8 <= param_6) {
        memcpy(param_5,local_d0,(longlong)(int)local_c8);
        pwVar4 = local_d8;
      }
      goto LAB_1489db994;
    }
    if (param_2 == 0) {
      FUN_1467cf38e(local_168,&local_178);
      goto LAB_1489db90d;
    }
    uVar5 = 0;
  }
  if (local_168[0] != (longlong *)0x0) {
    (**(code **)(*local_168[0] + 0x10))();
  }
LAB_1489db9ae:
  if ((local_40 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 1489dbb60 FUN_1489dbb60 body=211 status=ok
// SIG undefined FUN_1489dbb60(void)

char FUN_1489dbb60(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  
  lVar1 = FUN_1446ddbd2();
  lVar2 = FUN_144a5ab96();
  if (lVar1 == lVar2) {
    cVar3 = '\0';
  }
  else {
    lVar2 = FUN_14475a8dc();
    cVar3 = '\x05';
    if (lVar1 != lVar2) {
      lVar2 = FUN_144a7452c();
      if (lVar1 != lVar2) {
        lVar2 = FUN_144a83f76();
        if (lVar1 != lVar2) {
          lVar2 = FUN_144a8cc30();
          cVar3 = '\x06';
          if (lVar1 != lVar2) {
            lVar2 = FUN_144aa1f9a();
            if (lVar1 != lVar2) {
              lVar2 = FUN_144a64e42();
              if (lVar1 == lVar2) {
                cVar3 = '\t';
              }
              else {
                lVar2 = FUN_144a49fc8();
                if (lVar1 == lVar2) {
                  cVar3 = '\n';
                }
                else {
                  lVar2 = FUN_144a49f24();
                  cVar3 = '\v';
                  if (lVar1 != lVar2) {
                    lVar2 = FUN_144a63fc8();
                    if (lVar1 != lVar2) {
                      lVar2 = FUN_144a4a07e();
                      if (lVar1 != lVar2) {
                        lVar2 = FUN_1446e6bbc();
                        if (lVar1 == lVar2) {
                          cVar3 = '\r';
                        }
                        else {
                          lVar2 = FUN_1446ebfd4();
                          cVar3 = (lVar1 != lVar2) * '\x02' + '\x0e';
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
  return cVar3;
}



// FUNCTION 1489dbc33 FUN_1489dbc33 body=147 status=ok
// SIG undefined FUN_1489dbc33(void)

void FUN_1489dbc33(undefined8 param_1,longlong *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  
  lVar4 = *param_2;
  lVar3 = param_2[1];
  iVar2 = *(int *)(lVar3 + 0x44);
  bVar1 = *(byte *)(lVar3 + 0x70);
  (**(code **)(**(longlong **)(lVar3 + 0x78) + 0x178))();
  if (*(int *)(lVar4 + 8 + (longlong)iVar2) == 0) {
    lVar4 = 0;
  }
  else {
    puVar5 = (ulonglong *)(lVar4 + iVar2);
    if ((bVar1 & 1) == 0) {
      uVar6 = *puVar5;
    }
    else {
      uVar6 = *puVar5;
      if ((uVar6 & 1) != 0) {
        uVar6 = (longlong)puVar5 + ((longlong)uVar6 >> 0x18);
      }
    }
    lVar4 = (longlong)param_3 * (longlong)*(int *)(*(longlong *)(lVar3 + 0x78) + 0x34) + uVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x0001489dbca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_2[2] + 0x20))((longlong *)param_2[2],param_1,lVar4);
  return;
}



// FUNCTION 1489dbcc6 FUN_1489dbcc6 body=491 status=ok
// SIG undefined FUN_1489dbcc6(void)

undefined8 FUN_1489dbcc6(longlong *param_1,undefined8 param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 unaff_RBX;
  int iVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  int local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  byte local_60;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar5 = param_1[1];
  local_80 = *param_1 + (longlong)*(int *)(lVar5 + 0x44);
  local_60 = *(byte *)(lVar5 + 0x98);
  local_90 = *(undefined8 *)(lVar5 + 0x70);
  uStack_88 = *(undefined8 *)(lVar5 + 0x78);
  local_78 = *(undefined4 *)(lVar5 + 0x80);
  uStack_74 = *(undefined4 *)(lVar5 + 0x84);
  uStack_70 = *(undefined4 *)(lVar5 + 0x88);
  uStack_6c = *(undefined4 *)(lVar5 + 0x8c);
  local_68 = *(undefined8 *)(lVar5 + 0x90);
  if (*(int *)((ulonglong)((local_60 & 1) == 0) * 0x10 + 0x24 + local_80) <
      *(int *)(*param_1 + 8 + (longlong)*(int *)(lVar5 + 0x44))) {
    iVar6 = 0;
    do {
      local_58 = &local_90;
      local_50 = iVar6;
      lVar5 = FUN_144aff4d2(&local_90,&local_58);
      if (lVar5 != 0) {
        FUN_147a55288(&local_a0,local_90,lVar5,0);
        FUN_1400b22c2(&local_58,param_2);
        if (local_98 == local_50) {
          bVar8 = true;
          if (1 < local_98) {
            lVar5 = 0;
            while( true ) {
              uVar1 = *(ushort *)(local_a0 + lVar5);
              uVar3 = (uint)uVar1;
              uVar2 = *(ushort *)((longlong)local_58 + lVar5);
              uVar7 = (uint)uVar2;
              if (uVar1 != uVar2) {
                if ((uVar2 | uVar1) < 0x80) {
                  uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                  uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                  if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1489dbdd6;
                }
                iVar4 = uVar3 - uVar7;
                goto LAB_1489dbe72;
              }
              if (uVar1 == 0) break;
LAB_1489dbdd6:
              lVar5 = lVar5 + 2;
            }
            iVar4 = 0;
LAB_1489dbe72:
            bVar8 = iVar4 == 0;
          }
        }
        else {
          bVar8 = local_50 + local_98 == 1;
        }
        if (local_58 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        if (bVar8) {
          local_58 = &local_90;
          local_50 = iVar6;
          unaff_RBX = FUN_1446ec24c(&local_90,&local_58);
        }
        if (local_a0 != 0) {
          FUN_1400020a8();
        }
        if (bVar8) goto LAB_1489dbe7c;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(local_80 + 8) -
                     *(int *)(local_80 + 0x24 + (ulonglong)((local_60 & 1) == 0) * 0x10));
  }
  unaff_RBX = 0;
LAB_1489dbe7c:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBX;
}



// FUNCTION 1489dbeb2 FUN_1489dbeb2 body=102 status=ok
// SIG undefined FUN_1489dbeb2(void)

undefined8 * FUN_1489dbeb2(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x80);
  FUN_140066fe0(puVar1,param_2);
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 100) = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  *puVar1 = &PTR_FUN_14b455830;
  *param_1 = puVar1;
  return param_1;
}



// FUNCTION 1489dbf18 FUN_1489dbf18 body=102 status=ok
// SIG undefined FUN_1489dbf18(void)

undefined8 * FUN_1489dbf18(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x80);
  FUN_140066fe0(puVar1,param_2);
  *puVar1 = &PTR_FUN_14b4558c0;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 100) = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  *param_1 = puVar1;
  return param_1;
}



// FUNCTION 1489dbf7e FUN_1489dbf7e body=66 status=ok
// SIG undefined FUN_1489dbf7e(void)

undefined8 * FUN_1489dbf7e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x38);
  FUN_140066fe0(puVar1,param_2);
  *puVar1 = &PTR_FUN_14b455a70;
  *(undefined1 *)(puVar1 + 6) = 1;
  *param_1 = puVar1;
  return param_1;
}



// FUNCTION 1489dbfc0 FUN_1489dbfc0 body=66 status=ok
// SIG undefined FUN_1489dbfc0(void)

undefined8 * FUN_1489dbfc0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x38);
  FUN_140066fe0(puVar1,param_2);
  *puVar1 = &PTR_FUN_14b455b00;
  *(undefined1 *)(puVar1 + 6) = 1;
  *param_1 = puVar1;
  return param_1;
}



// FUNCTION 1489dc002 FUN_1489dc002 body=454 status=ok
// SIG undefined FUN_1489dc002(void)

void FUN_1489dc002(longlong *param_1,undefined8 param_2,longlong param_3)

{
  size_t sVar1;
  undefined8 *puVar2;
  uint uVar3;
  wchar_t *_Str;
  undefined1 auStack_128 [36];
  int local_104;
  longlong local_100 [2];
  wchar_t *local_f0;
  int local_e8;
  undefined8 local_e0 [16];
  undefined8 *local_60;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_104 = (**(code **)(*param_1 + 0x88))();
  local_e0[0] = *(undefined8 *)(param_3 + 0x18);
  FUN_1400021e4(local_e0,&local_f0);
  _Str = local_f0;
  if (local_e8 == 0) {
    _Str = L"";
  }
  local_60 = (undefined8 *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    local_50 = FUN_14475aa65(0,_Str,sVar1 & 0xffffffff);
    uVar3 = local_50 + 1;
    puVar2 = (undefined8 *)0x0;
    if (0x80 < uVar3) {
      FUN_1446efa72(&local_60,0,uVar3,1);
      puVar2 = local_60;
    }
    local_58 = local_e0;
    if (puVar2 != (undefined8 *)0x0) {
      local_58 = puVar2;
    }
    FUN_14475a98a(local_58,uVar3,_Str,(int)sVar1 + 1);
  }
  (**(code **)(*param_1 + 0x10))(param_1,local_100,local_58,param_2);
  if (local_60 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_100[0] != 0) {
    FUN_14475ab45(param_1,param_2,param_3,local_104 == 0);
    FUN_140066842(param_1,param_3);
  }
  cohtml::TypeDescription::~TypeDescription((TypeDescription *)local_100);
  if (local_f0 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489dc1c9 FUN_1489dc1c9 body=362 status=ok
// SIG undefined FUN_1489dc1c9(void)

void FUN_1489dc1c9(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  size_t sVar2;
  wchar_t *_Str;
  undefined1 auStack_118 [40];
  longlong local_f0 [2];
  wchar_t *local_e0;
  int local_d8;
  undefined8 local_d0 [16];
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  iVar1 = (**(code **)(*param_1 + 0x88))();
  local_d0[0] = *(undefined8 *)(param_3 + 0x18);
  FUN_1400021e4(local_d0,&local_e0);
  if (iVar1 != 0) {
    thunk_FUN_14047a987(&local_e0,"_ByRef",6);
  }
  _Str = local_e0;
  if (local_d8 == 0) {
    _Str = L"";
  }
  local_50 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_48 = 0;
    local_40 = 0;
  }
  else {
    sVar2 = wcslen(_Str);
    FUN_1446fe5a4(local_d0,_Str,sVar2 & 0xffffffff,1);
  }
  (**(code **)(*param_1 + 0x10))(param_1,local_f0,local_48,param_2);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_f0[0] != 0) {
    FUN_1489dc334(param_1,param_2,param_3,iVar1 == 0);
    FUN_1489dc6e5(param_1,param_3);
  }
  cohtml::TypeDescription::~TypeDescription((TypeDescription *)local_f0);
  if (local_e0 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489dc334 FUN_1489dc334 body=944 status=ok
// SIG undefined FUN_1489dc334(void)

void FUN_1489dc334(longlong *param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined **ppuVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_e8 [40];
  longlong *local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 *local_a8;
  int local_a0;
  undefined8 local_98;
  longlong *plStack_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined1 local_82;
  longlong local_78;
  longlong *plStack_70;
  undefined8 local_68;
  longlong local_60;
  longlong *plStack_58;
  undefined4 local_50;
  undefined2 uStack_4c;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_3 == 0) {
    plStack_58 = (longlong *)0x0;
  }
  else {
    plStack_58 = *(longlong **)(param_3 + 0x50);
  }
  local_50 = 0xffffffff;
  uStack_4c = 0x101;
  uStack_4a = 0;
  local_c0 = param_1;
  local_b8 = param_2;
  local_b0 = param_3;
  local_60 = param_3;
  FUN_144a2daf0(&local_60);
  local_68 = CONCAT17(uStack_49,CONCAT16(uStack_4a,CONCAT24(uStack_4c,local_50)));
  local_78 = local_60;
  plStack_70 = plStack_58;
  local_98 = 0;
  plStack_90 = (longlong *)0x0;
  local_88 = 0xffffffff;
  local_84 = 0x101;
  local_82 = 0;
  FUN_144a2daf0(&local_98);
  if (plStack_70 != plStack_90) {
    do {
      plVar1 = plStack_70;
      if ((DAT_14cb91048 == (longlong *)0x0 || DAT_14cb91050 == 0) ||
         (cVar2 = (**(code **)(*DAT_14cb91048 + 0x30))(), cVar2 == '\0')) {
LAB_1489dc44c:
        if (plVar1 == (longlong *)0x0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          lVar6 = plVar1[1];
          lVar5 = FUN_14475a8dc();
          if (*(ulonglong *)(lVar5 + 8) == 0) {
            bVar11 = lVar6 != 0;
            if (lVar6 != lVar5 && bVar11) {
              do {
                lVar6 = *(longlong *)(lVar6 + 0x30);
                bVar11 = lVar6 != 0;
                if (lVar6 == lVar5) break;
              } while (lVar6 != 0);
            }
          }
          else {
            bVar11 = (*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0;
          }
          plVar7 = (longlong *)0x0;
          if (bVar11) {
            plVar7 = plVar1;
          }
        }
        lVar5 = FUN_144a7add4();
        lVar6 = plVar1[1];
        if (*(ulonglong *)(lVar5 + 8) == 0) {
          bVar11 = lVar6 != 0;
          if (lVar6 != lVar5 && bVar11) {
            do {
              lVar6 = *(longlong *)(lVar6 + 0x30);
              bVar11 = lVar6 != 0;
              if (lVar6 == lVar5) break;
            } while (lVar6 != 0);
          }
          if (bVar11) goto LAB_1489dc499;
LAB_1489dc515:
          if ((plVar7 != (longlong *)0x0) && (plVar7[0xe] != 0)) {
            (**(code **)(*plVar7 + 0x70))(plVar7,&local_a8,0);
            puVar8 = (undefined8 *)&DAT_149dfb77a;
            if (local_a0 != 0) {
              puVar8 = local_a8;
            }
            iVar4 = local_a0 + -1;
            if (local_a0 == 0) {
              iVar4 = 0;
            }
            uVar3 = FUN_144a49b4a(iVar4,puVar8);
            iVar4 = FUN_1456cf568(&DAT_14cb90ff8,uVar3);
            lVar6 = (longlong)iVar4 * 0x18 + DAT_14cb90ff8;
            if (local_a8 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
            if (iVar4 != -1 && lVar6 != 0) goto LAB_1489dc696;
          }
          ppuVar9 = &PTR_FUN_14b454510;
          uVar10 = param_4 & 0xff ^ 0x13;
          do {
            cVar2 = (*(code *)*ppuVar9)(plVar1,param_4 & 0xffffffff);
            if (cVar2 != '\0') {
              if (ppuVar9 != (undefined **)0x0) {
                (*(code *)ppuVar9[1])(&local_a8,plVar1);
                (**(code **)(*local_c0 + 0x18))(local_c0,local_b8);
                if (local_a8 != (undefined8 *)0x0) {
                  (**(code **)*local_a8)(local_a8,1);
                }
              }
              break;
            }
            ppuVar9 = ppuVar9 + 2;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        else {
          if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) == 0) goto LAB_1489dc515;
LAB_1489dc499:
          (**(code **)(*plVar1 + 0x70))(plVar1,&local_a8,0,0);
          puVar8 = (undefined8 *)&DAT_149dfb77a;
          if (local_a0 != 0) {
            puVar8 = local_a8;
          }
          iVar4 = local_a0 + -1;
          if (local_a0 == 0) {
            iVar4 = 0;
          }
          uVar3 = FUN_144a49b4a(iVar4,puVar8);
          iVar4 = FUN_1456cf568(&DAT_14cb90ff8,uVar3);
          lVar6 = (longlong)iVar4 * 0x18 + DAT_14cb90ff8;
          if (local_a8 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
          if (iVar4 == -1 || lVar6 == 0) goto LAB_1489dc515;
LAB_1489dc696:
          FUN_1456bf313(local_c0,local_b8);
        }
      }
      else {
        plVar7 = DAT_14cb91048;
        if (DAT_14cb91050 == 0) {
          plVar7 = (longlong *)0x0;
        }
        cVar2 = (**(code **)(*plVar7 + 0x58))(plVar7,local_b0,plVar1);
        if (cVar2 == '\0') goto LAB_1489dc44c;
      }
      plStack_70 = (longlong *)plStack_70[3];
      FUN_144a2daf0(&local_78);
    } while (plStack_70 != plStack_90);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489dc6e5 FUN_1489dc6e5 body=561 status=ok
// SIG undefined FUN_1489dc6e5(void)

void FUN_1489dc6e5(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  size_t sVar4;
  longlong *plVar5;
  wchar_t *_Str;
  undefined1 auStack_168 [32];
  longlong local_148 [2];
  undefined8 local_138;
  longlong lStack_130;
  undefined4 local_128;
  undefined2 local_124;
  undefined1 local_122;
  longlong local_118;
  longlong lStack_110;
  undefined8 local_108;
  longlong local_f8;
  longlong lStack_f0;
  undefined4 local_e8;
  undefined2 uStack_e4;
  undefined1 uStack_e2;
  undefined1 uStack_e1;
  undefined8 local_e0 [16];
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (param_2 == 0) {
    lStack_f0 = 0;
  }
  else {
    lStack_f0 = *(longlong *)(param_2 + 0x48);
  }
  local_e8 = 0xffffffff;
  uStack_e4 = 0x101;
  uStack_e2 = 0;
  local_f8 = param_2;
  FUN_14164c386(&local_f8);
  local_108 = CONCAT17(uStack_e1,CONCAT16(uStack_e2,CONCAT24(uStack_e4,local_e8)));
  local_118 = local_f8;
  lStack_110 = lStack_f0;
  local_138 = 0;
  lStack_130 = 0;
  local_128 = 0xffffffff;
  local_124 = 0x101;
  local_122 = 0;
  FUN_14164c386(&local_138);
  if (lStack_110 != lStack_130) {
    do {
      lVar1 = lStack_110;
      if (((DAT_14cb91060 == 0) || (DAT_14cb91058 == (longlong *)0x0)) ||
         (cVar2 = (**(code **)(*DAT_14cb91058 + 0x30))(), cVar2 == '\0')) {
LAB_1489dc80e:
        local_e0[0] = *(undefined8 *)(lVar1 + 0x18);
        FUN_1400021e4(local_e0,local_148);
        pvVar3 = cohtml::IEventHandler::operator_new(0x30);
        FUN_1489ea0b2(pvVar3,lVar1);
        if (*(int *)((longlong)pvVar3 + 0x10) == 0) {
          _Str = L"";
LAB_1489dc857:
          local_60 = 0;
          sVar4 = wcslen(_Str);
          FUN_1446fe5a4(local_e0,_Str,sVar4 & 0xffffffff,1);
        }
        else {
          _Str = *(wchar_t **)((longlong)pvVar3 + 8);
          local_60 = 0;
          if (_Str != (wchar_t *)0x0) goto LAB_1489dc857;
          local_58 = 0;
          local_50 = 0;
        }
        (**(code **)(*param_1 + 0x20))(param_1,local_58,pvVar3);
        if (local_60 != 0) {
          FUN_1400020a8();
        }
        if (local_148[0] != 0) {
          FUN_1400020a8();
        }
      }
      else {
        plVar5 = DAT_14cb91058;
        if (DAT_14cb91060 == 0) {
          plVar5 = (longlong *)0x0;
        }
        cVar2 = (**(code **)(*plVar5 + 0x58))(plVar5,param_2,lVar1);
        if (cVar2 == '\0') goto LAB_1489dc80e;
      }
      lStack_110 = *(longlong *)(lStack_110 + 0x28);
      FUN_14164c386(&local_118);
    } while (lStack_110 != lStack_130);
  }
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489dc917 FUN_1489dc917 body=203 status=ok
// SIG undefined FUN_1489dc917(void)

void FUN_1489dc917(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  
  (**(code **)(*param_1 + 0x28))();
  if (DAT_14cb90fb0 != DAT_14cb90fdc) {
    uVar3 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    puVar4 = &DAT_14cb90fe0;
    if (DAT_14cb90fe8 != (undefined *)0x0) {
      puVar4 = DAT_14cb90fe8;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)(DAT_14cb90ff0 - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
    while (iVar2 != -1) {
      puVar1 = (ulonglong *)(DAT_14cb90fa8 + (longlong)iVar2 * 0x18);
      if (*puVar1 == param_3) {
        if ((puVar1 != (ulonglong *)0x0) && (puVar1 + 1 != (ulonglong *)0x0)) {
          (*(code *)puVar1[1])(param_1,param_2);
          goto LAB_1489dc9cb;
        }
        break;
      }
      iVar2 = (int)puVar1[2];
    }
  }
  FUN_1489dc1c9(param_1,param_2,param_3);
LAB_1489dc9cb:
                    /* WARNING: Could not recover jumptable at 0x0001489dc9df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1,param_2);
  return;
}



// FUNCTION 1489dc9e2 FUN_1489dc9e2 body=238 status=ok
// SIG undefined FUN_1489dc9e2(void)

void FUN_1489dc9e2(longlong *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  
  if (param_2 == 0) {
    return;
  }
  (**(code **)(*param_1 + 0x38))();
  if (DAT_14cb90f60 != DAT_14cb90f8c) {
    uVar3 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    puVar4 = &DAT_14cb90f90;
    if (DAT_14cb90f98 != (undefined *)0x0) {
      puVar4 = DAT_14cb90f98;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)(DAT_14cb90fa0 - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
    while (iVar2 != -1) {
      puVar1 = (ulonglong *)(DAT_14cb90f58 + (longlong)iVar2 * 0x18);
      if (*puVar1 == param_3) {
        if (puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
          (*(code *)puVar1[1])(param_1,param_2);
          goto LAB_1489dca19;
        }
        break;
      }
      iVar2 = (int)puVar1[2];
    }
  }
  FUN_1489dc002(param_1,param_2,param_3);
LAB_1489dca19:
                    /* WARNING: Could not recover jumptable at 0x0001489dca2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1,param_2);
  return;
}



// FUNCTION 1489dcad0 FUN_1489dcad0 body=170 status=ok
// SIG undefined FUN_1489dcad0(void)

void FUN_1489dcad0(longlong param_1,int param_2,int param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = FUN_141545d8e();
  local_28 = 0;
  FUN_14485c47a(&local_28,uVar2);
  if (*(longlong *)(param_1 + 8) != 0) {
    cVar1 = FUN_144729dda(&local_28);
    if (cVar1 != '\0') {
      lVar3 = FUN_14479d2ce(&local_28);
      if (*(int *)(lVar3 + 0x140) == param_2) {
        lVar3 = FUN_14479d2ce(&local_28);
        if (*(int *)(lVar3 + 0x144) == param_3) goto LAB_1489dcb40;
      }
    }
    (**(code **)(**(longlong **)(param_1 + 8) + 0x60))(*(longlong **)(param_1 + 8),param_2,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
LAB_1489dcb40:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489dcb9a FUN_1489dcb9a body=7 status=ok
// SIG undefined FUN_1489dcb9a(void)

undefined1 FUN_1489dcb9a(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x134);
}



// FUNCTION 1489dcba2 FUN_1489dcba2 body=8 status=ok
// SIG undefined FUN_1489dcba2(void)

void FUN_1489dcba2(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x148) = param_2;
  return;
}



// FUNCTION 1489dcbaa FUN_1489dcbaa body=12 status=ok
// SIG undefined FUN_1489dcbaa(void)

void FUN_1489dcbaa(longlong param_1)

{
  FUN_14485c47a(param_1 + 0x150);
  return;
}



// FUNCTION 1489dcbb6 FUN_1489dcbb6 body=289 status=ok
// SIG undefined FUN_1489dcbb6(void)

undefined4 FUN_1489dcbb6(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong lStack_60;
  undefined4 *local_58;
  undefined8 *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x180));
  *(int *)(param_1 + 0x1a8) = *(int *)(param_1 + 0x1a8) + 1;
  puVar1 = (undefined4 *)(param_1 + 0x1a8);
  local_68 = (ulonglong)local_68._4_4_ << 0x20;
  lStack_60 = FUN_1405d8a54(0);
  local_58 = puVar1;
  local_50 = &local_68;
  FUN_1489ee7b6(param_1 + 0x1b8,local_44);
  if (lStack_60 != 0) {
    FUN_14018802a();
  }
  local_68 = 0;
  lStack_60 = 0;
  local_58 = puVar1;
  local_50 = &local_68;
  FUN_1489eec14(param_1 + 0x208,local_44);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  local_68 = 0;
  lStack_60 = 0;
  local_58 = puVar1;
  local_50 = &local_68;
  FUN_1489ef07a(param_1 + 600,local_44);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  uVar2 = *puVar1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x180));
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489dccd8 FUN_1489dccd8 body=43 status=ok
// SIG undefined FUN_1489dccd8(void)

void FUN_1489dccd8(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_14480f766(&DAT_14cb90de0);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1489dcd04 FUN_1489dcd04 body=1043 status=ok
// SIG undefined FUN_1489dcd04(void)

undefined8 * FUN_1489dcd04(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  longlong *plVar5;
  char *_Str;
  size_t sVar6;
  undefined2 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  ushort uVar10;
  ushort uVar11;
  ulonglong uVar12;
  undefined1 auStack_78 [32];
  longlong *local_58 [2];
  undefined2 *local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b4548c0;
  param_1[3] = param_2;
  param_1[4] = param_3;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  plVar2 = param_1 + 7;
  FUN_144a5dc74(plVar2);
  plVar1 = param_1 + 9;
  FUN_144a5dc74(plVar1);
  FUN_144a5dc74(param_1 + 0xb);
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0x6c) = 0;
  plVar5 = (longlong *)FUN_144a7d136();
  lVar8 = plVar5[0x22];
  if (lVar8 == 0) {
    (**(code **)(*plVar5 + 1000))(plVar5);
    lVar8 = plVar5[0x22];
  }
  if (*(char *)(lVar8 + 0x69) == '\x01') {
    *(undefined4 *)(param_1 + 0xd) = 5;
  }
  local_48 = (undefined2 *)0x0;
  uStack_40 = 0;
  cVar3 = (**(code **)(*(longlong *)param_1[4] + 0x38))();
  *(bool *)((longlong)param_1 + 0x6c) = cVar3 == 's';
  _Str = (char *)(**(code **)(*(longlong *)param_1[4] + 0x60))((longlong *)param_1[4],0);
  if (_Str != (char *)0x0) {
    sVar6 = strlen(_Str);
    FUN_1409ee323(_Str,sVar6,&local_48);
    FUN_140009b9a(local_58,&local_48);
    FUN_140008f88(plVar2,local_58);
    if (local_58[0] != (longlong *)0x0) {
      (**(code **)(*local_58[0] + 0x10))();
    }
    plVar2 = (longlong *)*plVar2;
    plVar5 = (longlong *)*plVar1;
    if (plVar5 != plVar2) {
      *plVar1 = (longlong)plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_1 + 8);
  }
  cVar3 = FUN_1489dd118(param_1,"placeholder",&local_48);
  if (cVar3 != '\0') {
    FUN_140009b9a(local_58,&local_48);
    FUN_140008f88(param_1 + 0xb,local_58);
    if (local_58[0] != (longlong *)0x0) {
      (**(code **)(*local_58[0] + 0x10))();
    }
  }
  if ((*(char *)((longlong)param_1 + 0x6c) == '\x01') ||
     (cVar3 = FUN_1489dd118(param_1,&DAT_149e377fe), cVar3 == '\0')) goto LAB_1489dce7b;
  puVar7 = &DAT_149dfb77a;
  if ((int)uStack_40 != 0) {
    puVar7 = local_48;
  }
  lVar8 = 0;
  while( true ) {
    uVar10 = *(ushort *)((longlong)puVar7 + lVar8);
    uVar9 = (ulonglong)uVar10;
    uVar11 = *(ushort *)((longlong)&DAT_14b45491c + lVar8);
    if (uVar10 != uVar11) break;
    if (uVar10 == 0) goto LAB_1489dd0ef;
LAB_1489dcf2a:
    lVar8 = lVar8 + 2;
  }
  if ((uVar11 | uVar10) < 0x80) {
    uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
    uVar12 = (ulonglong)uVar11;
    uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
    if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar12]) goto LAB_1489dcf2a;
  }
  if (uVar10 != uVar11) {
    lVar8 = 0;
    goto LAB_1489dcf63;
  }
LAB_1489dd0ef:
  uVar4 = 4;
  goto LAB_1489dd0f4;
LAB_1489dcf63:
  uVar10 = *(ushort *)((longlong)puVar7 + lVar8);
  uVar9 = (ulonglong)uVar10;
  uVar11 = *(ushort *)((longlong)L"number" + lVar8);
  if (uVar10 == uVar11) {
    if (uVar10 == 0) goto LAB_1489dd0fc;
LAB_1489dcf7c:
    lVar8 = lVar8 + 2;
    goto LAB_1489dcf63;
  }
  if ((uVar11 | uVar10) < 0x80) {
    uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
    uVar12 = (ulonglong)uVar11;
    uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
    if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar12]) goto LAB_1489dcf7c;
  }
  if (uVar10 != uVar11) {
    lVar8 = 0;
    goto LAB_1489dcfb5;
  }
LAB_1489dd0fc:
  uVar4 = 1;
  goto LAB_1489dd0f4;
LAB_1489dcfb5:
  uVar10 = *(ushort *)((longlong)puVar7 + lVar8);
  uVar9 = (ulonglong)uVar10;
  uVar11 = *(ushort *)((longlong)&DAT_14a8e6ae2 + lVar8);
  if (uVar10 == uVar11) {
    if (uVar10 == 0) goto LAB_1489dd103;
LAB_1489dcfce:
    lVar8 = lVar8 + 2;
    goto LAB_1489dcfb5;
  }
  if ((uVar11 | uVar10) < 0x80) {
    uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
    uVar12 = (ulonglong)uVar11;
    uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
    if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar12]) goto LAB_1489dcfce;
  }
  if (uVar10 != uVar11) {
    lVar8 = 0;
    goto LAB_1489dd007;
  }
LAB_1489dd103:
  uVar4 = 2;
  goto LAB_1489dd0f4;
LAB_1489dd007:
  uVar10 = *(ushort *)((longlong)puVar7 + lVar8);
  uVar9 = (ulonglong)uVar10;
  uVar11 = *(ushort *)((longlong)L"email" + lVar8);
  if (uVar10 == uVar11) {
    if (uVar10 == 0) goto LAB_1489dd10a;
LAB_1489dd020:
    lVar8 = lVar8 + 2;
    goto LAB_1489dd007;
  }
  if ((uVar11 | uVar10) < 0x80) {
    uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
    uVar12 = (ulonglong)uVar11;
    uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
    if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar12]) goto LAB_1489dd020;
  }
  if (uVar10 != uVar11) {
    lVar8 = 0;
    goto LAB_1489dd059;
  }
LAB_1489dd10a:
  uVar4 = 3;
  goto LAB_1489dd0f4;
LAB_1489dd059:
  uVar10 = *(ushort *)((longlong)puVar7 + lVar8);
  uVar9 = (ulonglong)uVar10;
  uVar11 = *(ushort *)((longlong)L"alpha" + lVar8);
  if (uVar10 == uVar11) {
    if (uVar10 == 0) goto LAB_1489dd111;
LAB_1489dd072:
    lVar8 = lVar8 + 2;
    goto LAB_1489dd059;
  }
  if ((uVar11 | uVar10) < 0x80) {
    uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
    uVar12 = (ulonglong)uVar11;
    uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
    if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar12]) goto LAB_1489dd072;
  }
  if (uVar10 != uVar11) {
    lVar8 = 0;
    goto LAB_1489dd0a7;
  }
LAB_1489dd111:
  uVar4 = 5;
  goto LAB_1489dd0f4;
LAB_1489dd0a7:
  uVar10 = *(ushort *)((longlong)puVar7 + lVar8);
  uVar9 = (ulonglong)uVar10;
  uVar11 = *(ushort *)((longlong)&DAT_14a176c16 + lVar8);
  if (uVar10 == uVar11) {
    if (uVar10 == 0) goto LAB_1489dd0eb;
LAB_1489dd0bc:
    lVar8 = lVar8 + 2;
    goto LAB_1489dd0a7;
  }
  if ((uVar11 | uVar10) < 0x80) {
    uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
    uVar12 = (ulonglong)uVar11;
    uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
    if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar12]) goto LAB_1489dd0bc;
  }
  if (uVar10 != uVar11) goto LAB_1489dce7b;
LAB_1489dd0eb:
  uVar4 = 0;
LAB_1489dd0f4:
  *(undefined4 *)(param_1 + 0xd) = uVar4;
LAB_1489dce7b:
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1489dd118 FUN_1489dd118 body=152 status=ok
// SIG undefined FUN_1489dd118(void)

undefined8 FUN_1489dd118(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))();
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x20))
                      (*(longlong **)(param_1 + 0x20),param_2,0,0);
    if (iVar2 != 0) {
      lVar3 = FUN_14001cc68(iVar2,0x10);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x20))
                (*(longlong **)(param_1 + 0x20),param_2,lVar3,iVar2);
      FUN_1409ee323(lVar3,iVar2,param_3);
      uVar4 = CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
      if (lVar3 != 0) {
        FUN_1400020a8(lVar3);
      }
    }
  }
  return uVar4;
}



// FUNCTION 1489dd1b0 FUN_1489dd1b0 body=9 status=ok
// SIG undefined FUN_1489dd1b0(void)

void FUN_1489dd1b0(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 1489dd1ba FUN_1489dd1ba body=46 status=ok
// SIG undefined FUN_1489dd1ba(void)

longlong * FUN_1489dd1ba(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x48);
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x50);
  return param_2;
}



// FUNCTION 1489dd1e8 FUN_1489dd1e8 body=87 status=ok
// SIG undefined FUN_1489dd1e8(void)

undefined8 FUN_1489dd1e8(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x78))(*(longlong **)(param_1 + 0x20),&local_2c);
  *param_2 = local_2c;
  *param_3 = local_28;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT71((uint7)(uint3)((uint)local_28 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489dd240 FUN_1489dd240 body=46 status=ok
// SIG undefined FUN_1489dd240(void)

longlong * FUN_1489dd240(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x58);
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x60);
  return param_2;
}



// FUNCTION 1489dd284 FUN_1489dd284 body=90 status=ok
// SIG undefined FUN_1489dd284(void)

void FUN_1489dd284(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4548c0;
  if ((longlong *)param_1[0xb] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xb] + 0x10))();
  }
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[9] + 0x10))();
  }
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x10))();
  }
  *param_1 = &PTR_LAB_149f1b660;
  FUN_1449db362(param_1 + 1);
  return;
}



// FUNCTION 1489dd2de FUN_1489dd2de body=1109 status=ok
// SIG undefined FUN_1489dd2de(void)

/* WARNING: Removing unreachable block (ram,0x0001489dd675) */

IClientSideSocket *
FUN_1489dd2de(IClientSideSocket *param_1,undefined8 param_2,char *param_3,longlong param_4,
             uint param_5)

{
  IClientSideSocket *pIVar1;
  int *piVar2;
  int iVar3;
  char *_Str;
  longlong lVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  size_t sVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  IClientSideSocket *local_188;
  undefined8 local_180;
  longlong local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  longlong local_128;
  ulonglong uStack_120;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  cohtml::IClientSideSocket::IClientSideSocket(param_1);
  *(undefined ***)param_1 = &PTR_FUN_14b454960;
  *(undefined8 *)(param_1 + 8) = param_2;
  pIVar1 = param_1 + 0x20;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  param_1[0x40] = (IClientSideSocket)0x1;
  local_68 = 0;
  if (param_3 == (char *)0x0) {
    local_60 = 0;
    local_58 = 0;
  }
  else {
    sVar8 = strlen(param_3);
    FUN_1446e6fe8(&local_168,param_3,sVar8 & 0xffffffff,1);
  }
  FUN_140056680((IClientSideSocket *)&local_178,local_60);
  local_188 = pIVar1;
  if (pIVar1 == (IClientSideSocket *)&local_178) {
    if (local_178 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)pIVar1 != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x20) = local_178;
    local_178 = 0;
    *(undefined4 *)(param_1 + 0x28) = (undefined4)local_170;
    *(undefined4 *)(param_1 + 0x2c) = local_170._4_4_;
    local_170 = (longlong *)0x0;
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  pIVar1 = param_1 + 0x30;
  if (param_5 != 0) {
    uVar10 = 0;
    do {
      _Str = *(char **)(param_4 + uVar10 * 8);
      local_68 = 0;
      if (_Str == (char *)0x0) {
        local_60 = 0;
        local_58 = 0;
      }
      else {
        sVar8 = strlen(_Str);
        FUN_1446e6fe8(&local_168,_Str,sVar8 & 0xffffffff,1);
      }
      FUN_140056680(&local_178,local_60);
      iVar3 = *(int *)(param_1 + 0x38);
      uVar5 = iVar3 + 1;
      *(uint *)(param_1 + 0x38) = uVar5;
      if (*(uint *)(param_1 + 0x3c) < uVar5) {
        FUN_1447a1bd6(pIVar1);
      }
      lVar4 = *(longlong *)pIVar1;
      lVar11 = (longlong)iVar3 * 0x10;
      *(undefined8 *)(lVar4 + lVar11) = 0;
      *(longlong *)(lVar4 + lVar11) = local_178;
      *(undefined4 *)(lVar4 + 8 + lVar11) = (undefined4)local_170;
      *(undefined4 *)(lVar4 + 0xc + lVar11) = local_170._4_4_;
      local_170 = (longlong *)0x0;
      local_178 = 0;
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      uVar10 = uVar10 + 1;
    } while (param_5 != uVar10);
  }
  FUN_1446ddc76(&local_180,"WebSockets",1);
  uVar6 = FUN_144a52528();
  FUN_1402c9134(uVar6,local_180,&local_168,1);
  plVar7 = (longlong *)FUN_1489c2e00();
  local_148 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  uStack_140 = 0x8000000000;
  local_138 = 0xffffffff;
  local_198 = &local_168;
  (**(code **)(*plVar7 + 0x48))(plVar7,&local_178,local_188,pIVar1);
  plVar7 = local_170;
  if (local_170 == (longlong *)0x0) {
    *(longlong *)(param_1 + 0x10) = local_178;
    plVar9 = *(longlong **)(param_1 + 0x18);
    if (plVar9 == (longlong *)0x0) goto LAB_1489dd4b6;
    *(undefined8 *)(param_1 + 0x18) = 0;
LAB_1489dd6fb:
    LOCK();
    plVar7 = plVar9 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 != 0) goto LAB_1489dd4b6;
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar2 = (int *)((longlong)plVar9 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(local_170 + 1) = (int)local_170[1] + 1;
    UNLOCK();
    *(longlong *)(param_1 + 0x10) = local_178;
    plVar9 = *(longlong **)(param_1 + 0x18);
    if (local_170 != plVar9) {
      *(longlong **)(param_1 + 0x18) = local_170;
      if (plVar9 == (longlong *)0x0) goto LAB_1489dd4b6;
      goto LAB_1489dd6fb;
    }
    LOCK();
    plVar9 = local_170 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 != 0) goto LAB_1489dd4b6;
    (**(code **)*local_170)(local_170);
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar9 = plVar7;
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
LAB_1489dd4b6:
  plVar7 = local_170;
  if (local_170 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_170 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_170)(local_170);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  uStack_120 = uStack_120 & 0xffffffff00000000;
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(&local_168);
  uVar6 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x38))();
  FUN_1489dd734(uVar6,&local_168,param_1);
  uVar6 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))();
  FUN_1489dd81a(uVar6,&local_168,param_1,FUN_143e9443c);
  uVar6 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x48))();
  FUN_1489dd900(uVar6,&local_168,param_1);
  uVar6 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x50))();
  FUN_1489dd81a(uVar6,&local_168,param_1,FUN_143e946c6);
  uVar6 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x58))();
  FUN_1489dd9e6(uVar6,&local_168,param_1);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1489dd734 FUN_1489dd734 body=228 status=ok
// SIG undefined FUN_1489dd734(void)

undefined8 FUN_1489dd734(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_149e020b0;
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
  *local_38 = &PTR_FUN_14b456ac0;
  local_38[3] = param_3;
  local_38[4] = &LAB_143e9442a;
  FUN_1448b6402(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489dd81a FUN_1489dd81a body=228 status=ok
// SIG undefined FUN_1489dd81a(void)

undefined8
FUN_1489dd81a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  local_38 = 3;
  *local_40 = &PTR_LAB_149e063e0;
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
  local_40[2] = lVar2;
  *local_40 = &PTR_FUN_14b456b30;
  local_40[3] = param_3;
  local_40[4] = param_4;
  FUN_14134bd86(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489dd900 FUN_1489dd900 body=228 status=ok
// SIG undefined FUN_1489dd900(void)

undefined8 FUN_1489dd900(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14b456c10;
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
  *local_38 = &PTR_FUN_14b456ba0;
  local_38[3] = param_3;
  local_38[4] = FUN_143e9457a;
  FUN_1489eb0e2(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489dd9e6 FUN_1489dd9e6 body=228 status=ok
// SIG undefined FUN_1489dd9e6(void)

undefined8 FUN_1489dd9e6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14b456cf0;
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
  *local_38 = &PTR_FUN_14b456c80;
  local_38[3] = param_3;
  local_38[4] = &LAB_143e9480a;
  FUN_1489eb370(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489ddae6 FUN_1489ddae6 body=223 status=ok
// SIG undefined FUN_1489ddae6(void)

void FUN_1489ddae6(longlong param_1,undefined4 param_2,char *param_3)

{
  longlong *plVar1;
  size_t sVar2;
  undefined1 auStack_178 [40];
  longlong local_150 [2];
  undefined1 local_140 [256];
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_178;
  plVar1 = *(longlong **)(param_1 + 0x10);
  local_40 = 0;
  if (param_3 == (char *)0x0) {
    local_38 = 0;
    local_30 = 0;
  }
  else {
    sVar2 = strlen(param_3);
    FUN_1446e6fe8(local_140,param_3,sVar2 & 0xffffffff,1);
  }
  FUN_140056680(local_150,local_38);
  (**(code **)(*plVar1 + 0x10))(plVar1,param_2,local_150);
  if (local_150[0] != 0) {
    FUN_1400020a8();
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489ddbc6 FUN_1489ddbc6 body=360 status=ok
// SIG undefined FUN_1489ddbc6(void)

void FUN_1489ddbc6(undefined8 *param_1,undefined4 param_2,char *param_3)

{
  longlong *plVar1;
  size_t sVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  longlong local_158 [2];
  undefined1 local_148 [256];
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_178;
  *(undefined1 *)(param_1 + 8) = 0;
  plVar1 = (longlong *)param_1[2];
  local_48 = 0;
  if (param_3 == (char *)0x0) {
    local_40 = 0;
    local_38 = 0;
  }
  else {
    sVar2 = strlen(param_3);
    FUN_1446e6fe8(local_148,param_3,sVar2 & 0xffffffff,1);
  }
  FUN_140056680(local_158,local_40);
  (**(code **)(*plVar1 + 0x10))(plVar1,param_2,local_158);
  if (local_158[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  uVar3 = (**(code **)(*(longlong *)param_1[2] + 0x38))();
  FUN_140457ffc(uVar3,param_1);
  uVar3 = (**(code **)(*(longlong *)param_1[2] + 0x40))();
  FUN_140457ffc(uVar3,param_1);
  uVar3 = (**(code **)(*(longlong *)param_1[2] + 0x48))();
  FUN_140457ffc(uVar3,param_1);
  uVar3 = (**(code **)(*(longlong *)param_1[2] + 0x50))();
  FUN_140457ffc(uVar3,param_1);
  uVar3 = (**(code **)(*(longlong *)param_1[2] + 0x58))();
  FUN_140457ffc(uVar3,param_1);
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  if ((local_30 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489ddd30 FUN_1489ddd30 body=40 status=ok
// SIG undefined FUN_1489ddd30(void)

undefined8 * FUN_1489ddd30(undefined8 *param_1)

{
  FUN_141067f4a();
  *param_1 = &PTR_FUN_14b4549a0;
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 1489ddd58 FUN_1489ddd58 body=49 status=ok
// SIG undefined FUN_1489ddd58(void)

void FUN_1489ddd58(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    cVar1 = FUN_1410f9880(*(longlong *)(param_1 + 0x28),1);
    if (cVar1 != '\0') {
      FUN_143e94826(*(undefined8 *)(param_1 + 0x28));
      return;
    }
  }
  return;
}



// FUNCTION 1489ddd8a FUN_1489ddd8a body=110 status=ok
// SIG undefined FUN_1489ddd8a(void)

undefined8 FUN_1489ddd8a(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144750a86(*(undefined8 *)(param_1 + 0x28),local_28,0,0);
  FUN_144a882a8(param_2,local_28,L"[UCohtmlWidget]");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489dddfa FUN_1489dddfa body=289 status=ok
// SIG undefined FUN_1489dddfa(void)

undefined8 * FUN_1489dddfa(longlong param_1,undefined8 *param_2,char param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 == '\0') {
    *param_2 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10) + 0x18);
  }
  else {
    local_38 = *(undefined2 **)(*(longlong *)(param_1 + 0x28) + 0x18);
    FUN_1400021e4(&local_38,&local_48);
    puVar1 = &DAT_149dfb77a;
    if (local_40 != 0) {
      puVar1 = local_48;
    }
    local_38 = *(undefined2 **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10) + 0x18);
    FUN_1400021e4(&local_38,&local_58);
    puVar2 = &DAT_149dfb77a;
    if (local_50 != 0) {
      puVar2 = local_58;
    }
    FUN_140002266(&local_38,L"%s/%s",puVar2,puVar1);
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    puVar1 = local_38;
    if (local_30 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_1446f470e(param_2,puVar1,1);
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1489ddf1c FUN_1489ddf1c body=1586 status=ok
// SIG undefined FUN_1489ddf1c(void)

longlong * FUN_1489ddf1c(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  IViewListener *this;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  code **ppcVar10;
  longlong lVar11;
  undefined1 auStack_138 [32];
  longlong *local_118;
  undefined8 *local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  code *local_c8;
  ulonglong uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined2 local_98;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined2 local_74;
  undefined4 local_71;
  undefined8 local_68;
  undefined8 local_58;
  undefined1 local_4c [4];
  longlong local_48 [4];
  
  local_48[3] = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar11 = param_1[0x2d];
  if (lVar11 != 0) goto LAB_1489ddf4e;
  local_48[0] = (**(code **)(*param_1 + 0x180))(param_1);
  local_48[1] = DAT_14cb10918;
  lVar11 = 0;
  do {
    lVar3 = *(longlong *)((longlong)local_48 + lVar11);
    if ((lVar3 != 0) && (lVar6 = FUN_1414f26f4(lVar3), lVar6 != 0)) {
      uVar8 = FUN_145c2452f(lVar3);
      plVar9 = param_1 + 0x30;
      FUN_14485c47a(plVar9,uVar8);
      cVar5 = FUN_144729dda(plVar9);
      if (cVar5 != '\0') {
        uVar8 = FUN_14479d2ce(plVar9);
        FUN_1489da706(uVar8,param_1);
      }
      uVar8 = FUN_1414f26f4(lVar3);
      FUN_1489de550(param_1,uVar8);
      FUN_1489cbed1(param_1 + 0x32,*(undefined1 *)((longlong)param_1 + 0x246),plVar9);
      cVar5 = FUN_140432338(lVar3);
      if ((cVar5 != '\0') && (cVar5 = FUN_1414229ce(lVar3), cVar5 != '\0')) {
        local_c8 = FUN_1489de6aa;
        uStack_c0 = uStack_c0 & 0xffffffff00000000;
        FUN_1489de5b0(&local_d8,param_1);
        param_1[0x61] = local_d8;
      }
      break;
    }
    lVar11 = lVar11 + 8;
  } while (lVar11 != 0x10);
  FUN_1446f470e(&local_58,L"UCohtmlWidget Audio Wrapper",1);
  local_110 = (undefined8 *)0x0;
  local_118 = (longlong *)((ulonglong)local_118 & 0xffffffffffffff00);
  lVar11 = FUN_1489cbbad(param_1,local_58,0,0);
  param_1[0x4b] = lVar11;
  this = (IViewListener *)FUN_14001cc68(0x40,0x10);
  cohtml::IViewListener::IViewListener(this);
  cohtml::ITextInputHandler::ITextInputHandler((ITextInputHandler *)(this + 8));
  *(undefined ***)this = &PTR_FUN_14b456dd0;
  *(undefined ***)(this + 8) = &PTR_FUN_14b456ea0;
  *(undefined4 *)(this + 0x10) = 0;
  *(longlong **)(this + 0x18) = param_1;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14b456ed0;
  plVar7[2] = (longlong)this;
  param_1[0x4d] = (longlong)this;
  plVar9 = (longlong *)param_1[0x4e];
  if (plVar7 == plVar9) {
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar7 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x0001489de123:
        if (iVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  else {
    param_1[0x4e] = (longlong)plVar7;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar9 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar7 = plVar9;
        goto joined_r0x0001489de123;
      }
    }
  }
  local_c8 = (code *)0x0;
  uStack_c0 = 0;
  local_b8 = 0x2d000000500;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 1;
  local_94 = 1;
  uStack_8c = 0;
  local_84 = 200;
  local_80 = 0;
  local_78 = 0x41000000;
  local_74 = 0;
  local_68 = 0;
  local_71 = 0;
  (**(code **)(*param_1 + 0x300))(param_1,&local_d8);
  plVar9 = local_d0;
  if (param_1 + 0x2d != &local_d8) {
    param_1[0x2d] = local_d8;
    local_d8 = 0;
    plVar7 = (longlong *)param_1[0x2e];
    if (local_d0 != plVar7) {
      local_d0 = (longlong *)0x0;
      param_1[0x2e] = (longlong)plVar9;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar7 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
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
  plVar9 = local_d0;
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_d0 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  FUN_1446f470e(&local_e0,L"Multithread Compositor Wrapper",1);
  local_110 = (undefined8 *)0x0;
  local_118 = (longlong *)((ulonglong)local_118 & 0xffffffffffffff00);
  lVar11 = FUN_1489cbc87(param_1,local_e0,0,0);
  param_1[0x5e] = lVar11;
  FUN_1446ddc76(&local_d8,"CohtmlPlugin",1);
  lVar11 = local_d8;
  uVar8 = FUN_144a52528();
  FUN_1402c9134(uVar8,lVar11,local_4c,1);
  if ((DAT_14cb90d30 == (longlong *)0x0 || DAT_14cb90d38 == 0) ||
     (cVar5 = (**(code **)(*DAT_14cb90d30 + 0x30))(), cVar5 == '\0')) {
    FUN_1446f470e(&local_e8,L"CohtmlWidget Surface Partitioning Compositor",1);
    lVar11 = FUN_1489de703(param_1,local_e8);
  }
  else {
    plVar9 = DAT_14cb90d30;
    if (DAT_14cb90d38 == 0) {
      plVar9 = (longlong *)0x0;
    }
    lVar11 = (**(code **)(*plVar9 + 0x58))(plVar9,param_1);
  }
  lVar4 = local_d8;
  param_1[0x4c] = lVar11;
  *(longlong *)(lVar11 + 0x150) = param_1[0x2d];
  *(undefined4 *)(lVar11 + 0x58) = 0;
  lVar3 = param_1[0x4c];
  lVar6 = param_1[0x5e];
  lVar11 = lVar3 + 0x28;
  if (lVar3 == 0) {
    lVar11 = 0;
  }
  *(longlong *)(lVar6 + 0x168) = lVar3;
  *(longlong *)(lVar6 + 0x160) = lVar11;
  local_d8._5_3_ = SUB83(lVar4,5);
  local_d8._0_5_ =
       CONCAT14(*(undefined1 *)((longlong)param_1 + 0x245),
                CONCAT13(*(undefined1 *)((longlong)param_1 + 0x244),
                         CONCAT12(*(undefined1 *)((longlong)param_1 + 0x242),
                                  (ushort)*(byte *)(param_1 + 0x48))));
  lVar11 = param_1[0x2d];
  local_108 = param_1[0x4d];
  local_f8 = local_108 + 8;
  if (local_108 == 0) {
    local_f8 = 0;
  }
  local_f0 = param_1[0x4e];
  if (local_f0 == 0) {
    local_100 = 0;
  }
  else {
    LOCK();
    *(int *)(local_f0 + 8) = *(int *)(local_f0 + 8) + 1;
    UNLOCK();
    local_108 = param_1[0x4d];
    local_100 = param_1[0x4e];
    if (local_100 != 0) {
      LOCK();
      *(int *)(local_100 + 8) = *(int *)(local_100 + 8) + 1;
      UNLOCK();
    }
  }
  local_118 = &local_f8;
  local_110 = &local_d8;
  FUN_145c22798(lVar11,&local_c8,param_1 + 0x62,&local_108);
  ppcVar10 = &local_c8;
  plVar9 = param_1 + 0x51;
  for (lVar11 = 0xd; lVar11 != 0; lVar11 = lVar11 + -1) {
    *plVar9 = (longlong)*ppcVar10;
    ppcVar10 = ppcVar10 + 1;
    plVar9 = plVar9 + 1;
  }
  param_1[0x4f] = 0;
  plVar9 = (longlong *)param_1[0x50];
  if (plVar9 != (longlong *)0x0) {
    param_1[0x50] = 0;
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
  }
  lVar11 = param_1[0x2d];
LAB_1489ddf4e:
  plVar9 = (longlong *)param_1[0x2e];
  if (plVar9 == (longlong *)0x0) {
    *param_2 = lVar11;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    *param_2 = lVar11;
    param_2[1] = (longlong)plVar9;
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
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
  }
  if ((local_48[3] ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489de550 FUN_1489de550 body=96 status=ok
// SIG undefined FUN_1489de550(void)

void FUN_1489de550(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = param_1 + 400;
  *(longlong *)(param_1 + 0x1b8) = param_1;
  FUN_1489cbed1(lVar1,*(undefined1 *)(param_1 + 0x246),param_1 + 0x180);
  bVar2 = true;
  if ((*(byte *)(param_1 + 0x19a) & 4) == 0) {
    bVar2 = *(char *)(param_1 + 0x19b) != '\0';
  }
  FUN_140cbebe8(lVar1,bVar2);
  FUN_1402eb876(lVar1,param_2);
  return;
}



// FUNCTION 1489de5b0 FUN_1489de5b0 body=248 status=ok
// SIG undefined FUN_1489de5b0(void)

undefined8 FUN_1489de5b0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14a3ea200;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14b456d60;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14585199c(&DAT_14cb10808,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489de6aa FUN_1489de6aa body=89 status=ok
// SIG undefined FUN_1489de6aa(void)

void FUN_1489de6aa(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  if (*(char *)((longlong)param_1 + 0x245) == '\x01') {
    lVar2 = (**(code **)(*param_1 + 0x180))();
    if (lVar2 == param_2) {
      cVar1 = FUN_1414229ce(param_2);
      if (((cVar1 != '\0') && (param_1[0x2d] != 0)) && (*(longlong *)(param_1[0x2d] + 0x238) != 0))
      {
        FUN_1400ec6b2();
        return;
      }
    }
  }
  return;
}



// FUNCTION 1489de703 FUN_1489de703 body=199 status=ok
// SIG undefined FUN_1489de703(void)

undefined8 FUN_1489de703(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
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
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_b8 = FUN_1459d7e12();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  uStack_a0 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
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



// FUNCTION 1489de7cc FUN_1489de7cc body=15 status=ok
// SIG undefined FUN_1489de7cc(void)

void FUN_1489de7cc(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x168) = param_2;
  *(undefined8 *)(param_1 + 0x160) = param_3;
  return;
}



// FUNCTION 1489de7dc FUN_1489de7dc body=271 status=ok
// SIG undefined FUN_1489de7dc(void)

undefined8 * FUN_1489de7dc(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_238 [47];
  undefined1 local_209;
  undefined1 local_208 [8];
  longlong *local_200;
  undefined8 local_1f0;
  undefined8 local_1e8;
  longlong *local_1e0;
  undefined1 local_1d8 [424];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_238;
  FUN_146568968(local_1d8);
  local_1f0 = 0;
  FUN_14485c47a(&local_1f0,param_1);
  local_30 = local_1f0;
  FUN_1489ec760(local_208,&local_209);
  FUN_143e94a38(local_208,&local_1e8,local_1d8);
  *param_2 = local_1e8;
  param_2[1] = local_1e0;
  if (local_1e0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1e0 + 1) = (int)local_1e0[1] + 1;
    UNLOCK();
    if (local_1e0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1e0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_1e0)(local_1e0);
        LOCK();
        piVar2 = (int *)((longlong)local_1e0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_1e0 + 0x10))(local_1e0);
        }
      }
    }
  }
  if (local_200 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_200 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_200)(local_200);
      LOCK();
      piVar2 = (int *)((longlong)local_200 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_200 + 0x10))(local_200);
      }
    }
  }
  FUN_140a4ff8c(local_1d8);
  if ((local_28 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489de8ec FUN_1489de8ec body=169 status=ok
// SIG undefined FUN_1489de8ec(void)

void FUN_1489de8ec(longlong param_1)

{
  longlong lVar1;
  
  FUN_1489cbed1(param_1 + 400,*(undefined1 *)(param_1 + 0x246),param_1 + 0x180);
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x241) != *(char *)(lVar1 + 0x260)) {
      *(char *)(lVar1 + 0x260) = *(char *)(param_1 + 0x241);
      lVar1 = *(longlong *)(param_1 + 0x168);
    }
    *(undefined1 *)(lVar1 + 0x26c) = *(undefined1 *)(param_1 + 0x242);
    *(undefined1 *)(*(longlong *)(param_1 + 0x168) + 0x2c0) = *(undefined1 *)(param_1 + 0x243);
    *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x168) + 0x238) + 0xf4) =
         *(undefined1 *)(param_1 + 0x245);
    if (1 < *(int *)(param_1 + 0x318)) {
      FUN_1489de996(param_1,param_1 + 0x310);
    }
  }
  FUN_1412719b8(param_1);
  return;
}



// FUNCTION 1489de996 FUN_1489de996 body=390 status=ok
// SIG undefined FUN_1489de996(void)

void FUN_1489de996(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  size_t sVar4;
  wchar_t *_Str;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar1 = (longlong *)(param_1 + 0x310);
  FUN_144a787a6(plVar1);
  lVar2 = *(longlong *)(param_1 + 0x168);
  if (lVar2 == 0) goto LAB_1489dea45;
  plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0x238) + 8);
  if (plVar3 == (longlong *)0x0) {
    local_d8 = *(longlong *)(param_1 + 0x268);
    local_c8 = local_d8 + 8;
    if (local_d8 == 0) {
      local_c8 = 0;
    }
    local_c0 = *(longlong *)(param_1 + 0x270);
    if (local_c0 == 0) {
      local_d0 = 0;
    }
    else {
      LOCK();
      *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
      UNLOCK();
      local_d8 = *(longlong *)(param_1 + 0x268);
      local_d0 = *(longlong *)(param_1 + 0x270);
      if (local_d0 != 0) {
        LOCK();
        *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + 1;
        UNLOCK();
      }
    }
    local_e8 = &local_c8;
    FUN_1489debc0(lVar2,param_1 + 0x288,plVar1,&local_d8);
    goto LAB_1489dea45;
  }
  if (*(int *)(param_1 + 0x318) == 0) {
    _Str = L"";
LAB_1489dea01:
    local_38 = 0;
    sVar4 = wcslen(_Str);
    FUN_1446fe5a4(local_b8,_Str,sVar4 & 0xffffffff,1);
  }
  else {
    _Str = (wchar_t *)*plVar1;
    local_38 = 0;
    if (_Str != (wchar_t *)0x0) goto LAB_1489dea01;
    local_30 = 0;
    local_28 = 0;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3,local_30);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
LAB_1489dea45:
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489deb1e FUN_1489deb1e body=34 status=ok
// SIG undefined FUN_1489deb1e(void)

undefined8 FUN_1489deb1e(void)

{
  undefined8 uVar1;
  
  if ((DAT_14cb90e00 == 0) || (DAT_14cb90e08 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulonglong)DAT_14cb90e08 >> 8),0 < *(int *)(DAT_14cb90e08 + 8));
  }
  return uVar1;
}



// FUNCTION 1489deb6e FUN_1489deb6e body=29 status=ok
// SIG undefined FUN_1489deb6e(void)

undefined8 FUN_1489deb6e(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x168) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x168) + 0x238);
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x134));
  }
  return 0;
}



// FUNCTION 1489deb8c FUN_1489deb8c body=51 status=ok
// SIG undefined FUN_1489deb8c(void)

void FUN_1489deb8c(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x168) == 0) {
    plVar1 = *(longlong **)(param_1 + 0x178);
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x168) + 0x238) + 8);
  }
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489debb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xa8))();
    return;
  }
  return;
}



// FUNCTION 1489debc0 FUN_1489debc0 body=229 status=ok
// SIG undefined FUN_1489debc0(void)

void FUN_1489debc0(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                  longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [40];
  undefined8 local_90 [2];
  undefined4 local_80;
  undefined4 local_7c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar5 = local_90;
  for (lVar4 = 0xd; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *param_2;
    param_2 = param_2 + 1;
    puVar5 = puVar5 + 1;
  }
  local_80 = *(undefined4 *)(param_1 + 600);
  local_7c = *(undefined4 *)(param_1 + 0x25c);
  *(undefined1 *)(param_1 + 0x26d) = 1;
  FUN_143e92482(*(undefined8 *)(param_1 + 0x238),local_90);
  plVar3 = *(longlong **)(param_4 + 8);
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
  puVar5 = *(undefined8 **)(param_5 + 8);
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar5 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar5)(puVar5);
      LOCK();
      piVar2 = (int *)((longlong)puVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_b8);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489decea FUN_1489decea body=27 status=ok
// SIG undefined FUN_1489decea(void)

undefined8 FUN_1489decea(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x168) != 0) {
    uVar1 = FUN_141545d8e(*(undefined8 *)(*(longlong *)(param_1 + 0x168) + 0x238));
    return uVar1;
  }
  return 0;
}



// FUNCTION 1489ded06 FUN_1489ded06 body=253 status=ok
// SIG undefined FUN_1489ded06(void)

void FUN_1489ded06(longlong param_1,uint param_2)

{
  undefined2 *puVar1;
  bool bVar2;
  undefined1 auStack_158 [32];
  undefined2 *local_138;
  int local_130;
  undefined1 local_128 [256];
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_28 = 0;
  if (param_1 == 0) {
    local_20 = 0;
    local_18 = 0;
  }
  else {
    if ((int)param_2 < 1) {
      bVar2 = false;
    }
    else {
      bVar2 = *(char *)(param_1 + (ulonglong)(param_2 - 1)) == '\0';
      if (bVar2) {
        param_2 = param_2 - 1;
      }
    }
    FUN_1446e6fe8(local_128,param_1,param_2,bVar2);
  }
  FUN_1400089be(&local_138,local_18,local_20);
  puVar1 = local_138;
  if (local_130 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_142855b70(puVar1);
  if (local_138 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489dee04 FUN_1489dee04 body=242 status=ok
// SIG undefined FUN_1489dee04(void)

void FUN_1489dee04(undefined8 *param_1)

{
  size_t sVar1;
  wchar_t *_Str;
  undefined1 auStack_e8 [32];
  wchar_t *local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c8 = (wchar_t *)0x0;
  uStack_c0 = 0;
  FUN_140d67490(&local_c8);
  _Str = local_c8;
  if ((int)uStack_c0 == 0) {
    _Str = L"";
  }
  local_38 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_30 = 0;
    local_28 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1446fe5a4(local_b8,_Str,sVar1 & 0xffffffff,1);
  }
  (**(code **)*param_1)(param_1,local_30,local_28);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_c8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489deef8 FUN_1489deef8 body=164 status=ok
// SIG undefined FUN_1489deef8(void)

void FUN_1489deef8(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  if (*(longlong *)(param_1 + 0x168) == 0) {
    plVar1 = (longlong *)(param_1 + 0x178);
  }
  else {
    plVar1 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x168) + 0x238) + 8);
  }
  plVar1 = (longlong *)*plVar1;
  if ((plVar1 != (longlong *)0x0) && ((*(uint *)(param_1 + 8) & 0x8000) == 0)) {
    if (DAT_14cb90e10 != 0) {
      FUN_1489da7e6(DAT_14cb90e10,plVar1);
    }
    puVar2 = cohtml::IEventHandler::operator_new(0x18);
    *puVar2 = &PTR_FUN_14b4541e0;
    puVar2[2] = &LAB_1489ccaae;
    puVar2[1] = param_1 + 0x1e0;
                    /* WARNING: Could not recover jumptable at 0x0001489def7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x1b0))(plVar1,"ScriptingReady",puVar2,*(code **)(*plVar1 + 0x1b0));
    return;
  }
  return;
}



// FUNCTION 1489def9c FUN_1489def9c body=53 status=ok
// SIG undefined FUN_1489def9c(void)

undefined8 FUN_1489def9c(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 0x168) == 0) {
    plVar2 = (longlong *)(param_1 + 0x178);
  }
  else {
    plVar2 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x168) + 0x238) + 8);
  }
  if ((longlong *)*plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489defbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)*plVar2 + 0x1d0))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 1489defd2 FUN_1489defd2 body=12 status=ok
// SIG undefined FUN_1489defd2(void)

void FUN_1489defd2(void)

{
  FUN_1489ccade(DAT_14c951640);
  return;
}



// FUNCTION 1489defde FUN_1489defde body=18 status=ok
// SIG undefined FUN_1489defde(void)

void FUN_1489defde(longlong param_1,undefined8 param_2)

{
  FUN_143e90a6c(param_2,param_1 + 0x248);
  return;
}



// FUNCTION 1489deff0 FUN_1489deff0 body=18 status=ok
// SIG undefined FUN_1489deff0(void)

void FUN_1489deff0(longlong param_1,undefined8 param_2)

{
  FUN_143e90bce(param_2,param_1 + 0x248);
  return;
}



// FUNCTION 1489df002 FUN_1489df002 body=18 status=ok
// SIG undefined FUN_1489df002(void)

void FUN_1489df002(longlong param_1,undefined8 param_2)

{
  FUN_1489da8e2(param_2,param_1 + 0x248);
  return;
}



// FUNCTION 1489df014 FUN_1489df014 body=74 status=ok
// SIG undefined FUN_1489df014(void)

bool FUN_1489df014(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  iVar1 = FUN_1489daa40(param_1 + 0x248,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0 < iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489df082 FUN_1489df082 body=19 status=ok
// SIG undefined FUN_1489df082(void)

void FUN_1489df082(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_98 [32];
  longlong *plStack_78;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint uStack_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  uint uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong uStack_30;
  
  lVar3 = *(longlong *)(param_1 + 600);
  if (*(longlong *)(lVar3 + 0x28) == 0) {
    return;
  }
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined1 *)(lVar3 + 0x450) = 1;
  FUN_1477db452(lVar3 + 0x80);
  plVar1 = (longlong *)(lVar3 + 0x30);
  lVar2 = lVar3 + 0x40;
  uStack_50 = 0x100000000;
  uStack_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = lVar2;
  if (*(int *)(lVar3 + 0x58) == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&uStack_50);
    iVar4 = *(int *)(lVar3 + 0x58);
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  uStack_60 = uStack_40;
  iStack_5c = iStack_3c;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  plStack_78 = plVar1;
  if ((iStack_3c != iVar4) || (uStack_48 != lVar2)) {
    do {
      FUN_14342da8c(*(undefined8 *)(*plStack_78 + 8 + (longlong)iStack_5c * 0x28),param_2);
      uStack_60 = uStack_60 & ~uStack_6c;
      FUN_1449c0562(&uStack_70);
    } while (plStack_78 != plVar1 || (CONCAT44(uStack_64,uStack_68) != lVar2 || iStack_5c != iVar4))
    ;
  }
  if ((uStack_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489df096 FUN_1489df096 body=25 status=ok
// SIG undefined FUN_1489df096(void)

void FUN_1489df096(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x243) = param_2;
  if (*(longlong *)(param_1 + 0x168) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x168) + 0x2c0) = param_2;
  }
  return;
}



// FUNCTION 1489df0b0 FUN_1489df0b0 body=8 status=ok
// SIG undefined FUN_1489df0b0(void)

undefined1 FUN_1489df0b0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x243);
}



// FUNCTION 1489df0b8 FUN_1489df0b8 body=124 status=ok
// SIG undefined FUN_1489df0b8(void)

void FUN_1489df0b8(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = param_1[0x4b];
  if (*(longlong *)(lVar2 + 0x28) == 0) {
    lVar1 = param_1[0x31];
    if (lVar1 == 0) {
      lVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
    }
    FUN_1489cb046(lVar2,lVar1);
    lVar2 = param_1[0x4b];
    if (*(longlong *)(lVar2 + 0x28) == 0) {
      return;
    }
  }
  FUN_1489cb37e(lVar2,param_2,param_3,param_4);
  return;
}



// FUNCTION 1489df134 FUN_1489df134 body=94 status=ok
// SIG undefined FUN_1489df134(void)

void FUN_1489df134(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  lVar1 = DAT_14cb90c48;
  plVar3 = *(longlong **)(DAT_14cb90c48 + 0x140);
  if (plVar3 == (longlong *)0x0) {
    FUN_143e8c464(DAT_14cb90c48);
    plVar3 = *(longlong **)(lVar1 + 0x140);
  }
  plVar2 = (longlong *)(**(code **)(*plVar3 + 0x40))();
  plVar3 = *(longlong **)(param_1 + 200);
  if ((plVar3 != plVar2) && (*(longlong **)(param_1 + 200) = plVar2, plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001489df186. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 8))();
    return;
  }
  return;
}



// FUNCTION 1489df192 FUN_1489df192 body=26 status=ok
// SIG undefined FUN_1489df192(void)

void FUN_1489df192(undefined8 param_1)

{
  FUN_1489df1ac();
  FUN_1414f2a14(param_1);
  return;
}



// FUNCTION 1489df1ac FUN_1489df1ac body=67 status=ok
// SIG undefined FUN_1489df1ac(void)

void FUN_1489df1ac(longlong param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x60) + 0xd8))();
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x60) + 0xc0))();
    FUN_1489ed06e(param_1 + 0x78);
    *(undefined1 *)(param_1 + 0x70) = 1;
  }
  return;
}



// FUNCTION 1489df1f0 FUN_1489df1f0 body=96 status=ok
// SIG undefined FUN_1489df1f0(void)

void FUN_1489df1f0(longlong *param_1)

{
  FUN_1447a1747(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1489df250 FUN_1489df250 body=116 status=ok
// SIG undefined FUN_1489df250(void)

undefined8 * FUN_1489df250(undefined8 *param_1)

{
  FUN_1489df2c4();
  *param_1 = &PTR_FUN_14b454b60;
  param_1[0x29] = 1;
  param_1[0x2a] = 2;
  param_1[0x2b] = 0x7f7fffff7f7fffff;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0x78;
  param_1[0x2f] = 0xff7fffff3e800000;
  param_1[0x30] = 0x7f7fffffff7fffff;
  *(undefined4 *)(param_1 + 0x31) = 0x7f7fffff;
  return param_1;
}



// FUNCTION 1489df2c4 FUN_1489df2c4 body=109 status=ok
// SIG undefined FUN_1489df2c4(void)

void FUN_1489df2c4(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR_LAB_14b454b90;
  param_1[1] = 0x100000000;
  *(undefined4 *)(param_1 + 2) = param_3;
  lVar2 = 0x24;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x10);
    *puVar1 = 0;
    puVar1[1] = 0x100000000;
    *(undefined4 *)((longlong)param_1 + lVar2) = 0;
    *(undefined4 *)((longlong)param_1 + lVar2 + 3) = 0;
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x124);
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = param_2;
  param_1[0x28] = 0;
  return;
}



// FUNCTION 1489df332 FUN_1489df332 body=526 status=ok
// SIG undefined FUN_1489df332(void)

undefined8 FUN_1489df332(longlong param_1,longlong param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int *piVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar7 = *(ulonglong *)(param_1 + 0x118);
  uVar12 = *(ulonglong *)(param_1 + 0x150);
  if (uVar12 < uVar7 + param_3) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 8);
    if ((iVar2 == 0) || (((iVar2 == 4 || (iVar2 == 1)) && (uVar7 < uVar12)))) {
      if (param_3 != 0) {
        uVar10 = 0;
        do {
          puVar9 = (undefined4 *)(param_2 + uVar10 * 0x18);
          while (puVar9[3] != 1) {
            uVar10 = uVar10 + 1;
            puVar9 = puVar9 + 6;
            if (param_3 <= uVar10) goto LAB_1489df45e;
          }
          if (uVar7 == 0) {
            uVar12 = 0;
          }
          else {
            uVar11 = 0;
            piVar8 = (int *)(param_1 + 0x1c);
            do {
              uVar12 = uVar11;
              if (*piVar8 == puVar9[2]) break;
              uVar11 = uVar11 + 1;
              piVar8 = piVar8 + 8;
              uVar12 = uVar7;
            } while (uVar7 != uVar11);
          }
          lVar6 = uVar12 * 0x20;
          *(undefined8 *)(param_1 + 0x24 + lVar6) = *(undefined8 *)(puVar9 + 4);
          uVar3 = puVar9[1];
          uVar4 = puVar9[2];
          uVar5 = puVar9[3];
          puVar1 = (undefined4 *)(param_1 + 0x14 + lVar6);
          *puVar1 = *puVar9;
          puVar1[1] = uVar3;
          puVar1[2] = uVar4;
          puVar1[3] = uVar5;
          *(undefined4 *)(param_1 + 0x2c + lVar6) = *puVar9;
          *(undefined4 *)(param_1 + 0x30 + lVar6) = puVar9[1];
          uVar7 = *(ulonglong *)(param_1 + 0x118);
          if (uVar12 == uVar7) {
            uVar7 = uVar12 + 1;
            *(ulonglong *)(param_1 + 0x118) = uVar7;
          }
          uVar12 = *(ulonglong *)(param_1 + 0x150);
          uVar10 = uVar10 + 1;
        } while ((uVar10 < param_3) && (uVar7 != uVar12));
      }
LAB_1489df45e:
      if (uVar7 <= uVar12 && *(ulonglong *)(param_1 + 0x148) <= uVar7) {
        fVar13 = 0.0;
        fVar15 = 0.0;
        fVar16 = 0.0;
        fVar14 = 0.0;
        if (uVar7 != 0) {
          piVar8 = (int *)(param_1 + 0x30);
          do {
            fVar15 = fVar15 + (float)piVar8[-1];
            fVar16 = fVar16 + (float)*piVar8;
            fVar14 = fVar14 + 1.0;
            piVar8 = piVar8 + 8;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        if (0.0 < fVar14) {
          fVar13 = fVar15 / fVar14;
        }
        *(float *)(param_1 + 0x158) = fVar13;
        *(uint *)(param_1 + 0x15c) = -(uint)(0.0 < fVar14) & (uint)(fVar16 / fVar14);
        FUN_144b39038(&local_38);
        *(longlong *)(param_1 + 0x160) = local_38 / 1000000;
        *(undefined8 *)(param_1 + 0x17c) = *(undefined8 *)(param_1 + 0x158);
        *(longlong *)(param_1 + 0x168) = local_38 / 1000000;
        if (iVar2 != 4) {
          *(undefined4 *)(param_1 + 8) = 1;
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 1489df542 FUN_1489df542 body=321 status=ok
// SIG undefined FUN_1489df542(void)

undefined8 FUN_1489df542(longlong *param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[0x23];
  if (((ulonglong)param_1[0x29] <= uVar1) && (uVar1 <= (ulonglong)param_1[0x2a])) {
    fVar6 = 0.0;
    fVar4 = 0.0;
    fVar5 = 0.0;
    fVar3 = 0.0;
    if (uVar1 != 0) {
      plVar2 = param_1 + 6;
      do {
        fVar4 = fVar4 + (float)*(int *)((longlong)plVar2 + -4);
        fVar5 = fVar5 + (float)(int)*plVar2;
        fVar3 = fVar3 + 1.0;
        plVar2 = plVar2 + 4;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    uVar7 = -(uint)(0.0 < fVar3) & (uint)(fVar5 / fVar3);
    if (0.0 < fVar3) {
      fVar6 = fVar4 / fVar3;
    }
    FUN_144b39038(&local_48);
    local_48 = local_48 / 1000000;
    if (param_1[0x2e] < local_48 - param_1[0x2c]) {
      *(float *)((longlong)param_1 + 0x17c) = fVar6;
      *(uint *)(param_1 + 0x30) = uVar7;
      param_1[0x2d] = local_48;
    }
    param_1[0x2c] = local_48;
    *(float *)(param_1 + 0x2b) = fVar6;
    *(uint *)((longlong)param_1 + 0x15c) = uVar7;
    *(undefined4 *)(param_1 + 1) = 4;
    (**(code **)(*param_1 + 0x20))(param_1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489df684 FUN_1489df684 body=742 status=ok
// SIG undefined FUN_1489df684(void)

undefined8 FUN_1489df684(longlong *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = param_1[0x23];
  fVar10 = 0.0;
  fVar11 = 0.0;
  fVar9 = 0.0;
  if (uVar2 != 0) {
    plVar3 = param_1 + 6;
    uVar5 = uVar2;
    do {
      fVar10 = fVar10 + (float)*(int *)((longlong)plVar3 + -4);
      fVar11 = fVar11 + (float)(int)*plVar3;
      fVar9 = fVar9 + 1.0;
      plVar3 = plVar3 + 4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (0.0 < fVar9) {
    fVar10 = fVar10 / fVar9;
  }
  else {
    fVar10 = 0.0;
  }
  *(float *)((longlong)param_1 + 0x184) = fVar10;
  *(uint *)(param_1 + 0x31) = -(uint)(0.0 < fVar9) & (uint)(fVar11 / fVar9);
  if (param_3 != 0) {
    lVar6 = 0;
    do {
      if ((*(int *)(param_2 + 0xc + lVar6 * 0x20) == 2) && (uVar1 = (uint)uVar2, 0 < (int)uVar1)) {
        uVar5 = (ulonglong)(uVar1 - 1);
        uVar7 = 0;
        puVar4 = (undefined4 *)((longlong)param_1 + 0x34);
        piVar8 = (int *)((longlong)param_1 + 0x1c);
LAB_1489df762:
        if (*piVar8 != *(int *)(lVar6 * 0x20 + param_2 + 8)) goto code_r0x0001489df768;
        if ((int)uVar7 < (int)(uVar1 - 1)) {
          do {
            puVar4[-4] = puVar4[4];
            puVar4[-3] = puVar4[5];
            puVar4[-2] = puVar4[6];
            puVar4[-1] = puVar4[7];
            puVar4[-8] = *puVar4;
            puVar4[-7] = puVar4[1];
            puVar4[-6] = puVar4[2];
            puVar4[-5] = puVar4[3];
            puVar4 = puVar4 + 8;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
          uVar2 = param_1[0x23];
        }
        uVar2 = uVar2 - 1;
        param_1[0x23] = uVar2;
      }
LAB_1489df7ab:
      lVar6 = lVar6 + 1;
    } while (lVar6 != param_3);
  }
  if (uVar2 < (ulonglong)param_1[0x29]) {
    lVar6 = param_1[1];
    FUN_144b39038(&local_48);
    if ((((local_48 / 1000000 - param_1[0x2c] <= param_1[0x2e]) &&
         (fVar9 = *(float *)((longlong)param_1 + 0x184) - *(float *)((longlong)param_1 + 0x17c),
         *(float *)(param_1 + 0x2f) <=
         (fVar9 * fVar9 +
         (*(float *)(param_1 + 0x31) - *(float *)(param_1 + 0x30)) *
         (*(float *)(param_1 + 0x31) - *(float *)(param_1 + 0x30))) / 3968.008)) &&
        ((int)lVar6 == 4)) && (plVar3 = (longlong *)param_1[0x28], plVar3 != (longlong *)0x0)) {
      fVar9 = 0.0;
      if (param_1[0x2d] != 0) {
        fVar9 = (float)(local_48 / 1000000 - param_1[0x2d]);
      }
      (**(code **)(*plVar3 + 0x18))
                (plVar3,*(undefined8 *)((longlong)param_1 + 0x184),
                 *(undefined8 *)((longlong)param_1 + 0x17c),fVar9);
    }
    *(undefined1 **)((longlong)param_1 + 0x17c) = &DAT_ff7fffffff7fffff;
    param_1[0x2d] = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    param_1[0x23] = 0;
  }
  else {
    fVar10 = 0.0;
    fVar11 = 0.0;
    fVar9 = 0.0;
    if (uVar2 != 0) {
      plVar3 = param_1 + 6;
      do {
        fVar10 = fVar10 + (float)*(int *)((longlong)plVar3 + -4);
        fVar11 = fVar11 + (float)(int)*plVar3;
        fVar9 = fVar9 + 1.0;
        plVar3 = plVar3 + 4;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    if (0.0 < fVar9) {
      fVar10 = fVar10 / fVar9;
    }
    else {
      fVar10 = 0.0;
    }
    *(float *)(param_1 + 0x2b) = fVar10;
    *(uint *)((longlong)param_1 + 0x15c) = -(uint)(0.0 < fVar9) & (uint)(fVar11 / fVar9);
    *(undefined4 *)(param_1 + 1) = 4;
    (**(code **)(*param_1 + 0x20))(param_1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
code_r0x0001489df768:
  uVar7 = uVar7 + 1;
  piVar8 = piVar8 + 8;
  puVar4 = puVar4 + 8;
  uVar5 = uVar5 - 1;
  if ((uVar1 & 0x7fffffff) == uVar7) goto LAB_1489df7ab;
  goto LAB_1489df762;
}



// FUNCTION 1489df96e FUN_1489df96e body=18 status=ok
// SIG undefined FUN_1489df96e(void)

undefined8 * FUN_1489df96e(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 1489df980 thunk_FUN_1489e96ac body=5 status=ok
// SIG undefined thunk_FUN_1489e96ac(void)

void thunk_FUN_1489e96ac(longlong *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[1];
    if (plVar2 != plVar3) {
      do {
        puVar1 = (undefined8 *)*plVar2;
        if (puVar1 != (undefined8 *)0x0) {
          (**(code **)*puVar1)(puVar1,1);
        }
        plVar2 = plVar2 + 1;
      } while (plVar2 != plVar3);
      plVar2 = (longlong *)*param_1;
    }
    plVar3 = plVar2;
    if ((0xfff < (ulonglong)(param_1[2] - (longlong)plVar2)) &&
       (plVar3 = (longlong *)plVar2[-1],
       0x1f < (ulonglong)((longlong)plVar2 + (-8 - (longlong)plVar3)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(plVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 1489df986 FUN_1489df986 body=83 status=ok
// SIG undefined FUN_1489df986(void)

void FUN_1489df986(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 == (undefined8 *)param_1[2]) {
    FUN_1489e972e(param_1);
    lVar3 = param_1[1];
  }
  else {
    uVar2 = *param_2;
    *param_2 = 0;
    *puVar1 = uVar2;
    lVar3 = param_1[1] + 8;
    param_1[1] = lVar3;
  }
  FUN_143ea311f(*param_1,lVar3,lVar3 - *param_1 >> 3);
  return;
}



// FUNCTION 1489df9da FUN_1489df9da body=82 status=ok
// SIG undefined FUN_1489df9da(void)

void FUN_1489df9da(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1[1] - *param_1 != 0) {
    lVar1 = param_1[1] - *param_1 >> 3;
    lVar2 = 0;
    do {
      FUN_1489dfa2c(*(undefined8 *)(*param_1 + lVar2 * 8),param_2,param_3);
      lVar2 = lVar2 + 1;
    } while (lVar1 + (ulonglong)(lVar1 == 0) != lVar2);
  }
  return;
}



// FUNCTION 1489dfa2c FUN_1489dfa2c body=258 status=ok
// SIG undefined FUN_1489dfa2c(void)

void FUN_1489dfa2c(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  longlong lVar4;
  
  if ((*(char *)((longlong)param_1 + 0xc) == '\x01') && ((int)param_1[1] - 4U < 0xfffffffe)) {
    *(undefined2 *)((longlong)param_1 + 0xd) = 0;
    *(undefined1 *)((longlong)param_1 + 0xf) = 0;
    if (param_3 != 0) {
      piVar3 = (int *)(param_2 + 0xc);
      lVar4 = param_3;
      do {
        iVar1 = *piVar3;
        if (iVar1 == 0) {
          if ((*(char *)((longlong)param_1 + 0xe) == '\0') &&
             (cVar2 = FUN_1489dfb2e(param_1,param_2,param_3), cVar2 != '\0')) {
            (**(code **)(*param_1 + 0x10))(param_1,param_1[0x24],param_1[0x25] - param_1[0x24] >> 5)
            ;
            *(undefined1 *)((longlong)param_1 + 0xe) = 1;
          }
        }
        else if (iVar1 == 2) {
          if ((*(char *)((longlong)param_1 + 0xf) == '\0') &&
             (cVar2 = FUN_1489dfb2e(param_1,param_2,param_3), cVar2 != '\0')) {
            (**(code **)(*param_1 + 0x18))(param_1,param_1[0x24],param_1[0x25] - param_1[0x24] >> 5)
            ;
            *(undefined1 *)((longlong)param_1 + 0xf) = 1;
          }
        }
        else if ((iVar1 == 1) && (*(char *)((longlong)param_1 + 0xd) == '\0')) {
          (**(code **)(*param_1 + 8))(param_1,param_2,param_3);
          *(undefined1 *)((longlong)param_1 + 0xd) = 1;
        }
        piVar3 = piVar3 + 6;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  return;
}



// FUNCTION 1489dfb2e FUN_1489dfb2e body=236 status=ok
// SIG undefined FUN_1489dfb2e(void)

undefined8 FUN_1489dfb2e(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  longlong lVar10;
  
  if (*(longlong *)(param_1 + 0x120) != *(longlong *)(param_1 + 0x128)) {
    *(longlong *)(param_1 + 0x128) = *(longlong *)(param_1 + 0x120);
  }
  uVar6 = *(ulonglong *)(param_1 + 0x118);
  lVar10 = 0;
  uVar7 = uVar6;
  do {
    if (uVar7 == 0) {
      uVar7 = 0;
    }
    else {
      puVar1 = (undefined4 *)(param_2 + lVar10 * 0x18);
      uVar8 = 0;
      puVar9 = (undefined4 *)(param_1 + 0x30);
      do {
        if (puVar1[2] == puVar9[-5]) {
          FUN_1489e997c(param_1 + 0x120);
          lVar2 = *(longlong *)(param_1 + 0x128);
          *(undefined8 *)(lVar2 + -0x10) = *(undefined8 *)(puVar1 + 4);
          uVar3 = puVar1[1];
          uVar4 = puVar1[2];
          uVar5 = puVar1[3];
          *(undefined4 *)(lVar2 + -0x20) = *puVar1;
          *(undefined4 *)(lVar2 + -0x1c) = uVar3;
          *(undefined4 *)(lVar2 + -0x18) = uVar4;
          *(undefined4 *)(lVar2 + -0x14) = uVar5;
          *(undefined4 *)(lVar2 + -8) = *puVar1;
          *(undefined4 *)(lVar2 + -4) = puVar1[1];
          puVar9[-1] = *puVar1;
          *puVar9 = puVar1[1];
          uVar6 = *(ulonglong *)(param_1 + 0x118);
        }
        uVar8 = uVar8 + 1;
        puVar9 = puVar9 + 8;
        uVar7 = uVar6;
      } while (uVar8 < uVar6);
    }
    lVar10 = lVar10 + 1;
  } while (lVar10 != param_3);
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x128) >> 8),
                  *(longlong *)(param_1 + 0x128) != *(longlong *)(param_1 + 0x120));
}



// FUNCTION 1489dfc1a FUN_1489dfc1a body=70 status=ok
// SIG undefined FUN_1489dfc1a(void)

undefined8 * FUN_1489dfc1a(undefined8 *param_1)

{
  FUN_1489df2c4();
  *param_1 = &PTR_FUN_14b454bc0;
  param_1[0x29] = 0xfa00000001;
  *(undefined4 *)(param_1 + 0x2a) = 0x28;
  param_1[0x2c] = 0;
  return param_1;
}



// FUNCTION 1489dfc60 FUN_1489dfc60 body=236 status=ok
// SIG undefined FUN_1489dfc60(void)

undefined8 FUN_1489dfc60(longlong param_1,int *param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar4 = 0;
    lVar3 = 0;
    do {
      lVar3 = lVar3 + (ulonglong)(*(int *)((longlong)param_2 + lVar4 + 0xc) == 1);
      lVar4 = lVar4 + 0x18;
    } while (param_3 * 0x18 != lVar4);
  }
  if ((ulonglong)*(uint *)(param_1 + 0x148) < (ulonglong)(lVar3 + *(longlong *)(param_1 + 0x118))) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
  }
  else if (param_2[3] == 1) {
    *(longlong *)(param_1 + 0x118) = *(longlong *)(param_1 + 0x118) + 1;
    uVar2 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0x1c) = uVar2;
    *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 4);
    *(int *)(param_1 + 0x2c) = *param_2;
    iVar1 = param_2[1];
    *(int *)(param_1 + 0x30) = iVar1;
    *(float *)(param_1 + 0x154) = (float)*param_2;
    *(float *)(param_1 + 0x158) = (float)iVar1;
    FUN_144b39038(&local_20);
    *(undefined8 *)(param_1 + 0x160) = local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 1489dfd52 FUN_1489dfd52 body=231 status=ok
// SIG undefined FUN_1489dfd52(void)

undefined8 FUN_1489dfd52(longlong *param_1,int *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 != 0) {
    param_1[0x23] = param_1[0x23] + -1;
    iVar1 = *param_2;
    iVar2 = param_2[1];
    FUN_144b39038(&local_30);
    if ((local_30 - param_1[0x2c]) / 1000000 <
        (longlong)(ulonglong)*(uint *)((longlong)param_1 + 0x14c)) {
      fVar3 = (float)iVar1 - *(float *)((longlong)param_1 + 0x154);
      if (SQRT(fVar3 * fVar3 +
               ((float)iVar2 - *(float *)(param_1 + 0x2b)) *
               ((float)iVar2 - *(float *)(param_1 + 0x2b))) < (float)*(uint *)(param_1 + 0x2a)) {
        *(undefined4 *)(param_1 + 1) = 3;
        (**(code **)(*param_1 + 0x20))(param_1);
      }
    }
    *(undefined4 *)(param_1 + 1) = 0;
    param_1[0x23] = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489dfe5c FUN_1489dfe5c body=93 status=ok
// SIG undefined FUN_1489dfe5c(void)

undefined8 * FUN_1489dfe5c(undefined8 *param_1)

{
  FUN_1489df2c4();
  *param_1 = &PTR_FUN_14b454bf0;
  param_1[0x29] = 1;
  param_1[0x2a] = 2;
  param_1[0x2b] = 0x7f7fffff00000000;
  param_1[0x2c] = 0x3f0000007f7fffff;
  param_1[0x2d] = 0x7f7fffff7f7fffff;
  param_1[0x2e] = 0x7f7fffff7f7fffff;
  param_1[0x2f] = 0;
  return param_1;
}



// FUNCTION 1489dfeba FUN_1489dfeba body=500 status=ok
// SIG undefined FUN_1489dfeba(void)

undefined8 FUN_1489dfeba(longlong param_1,int *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int *piVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int *piVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if (param_3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar10 = 0;
    lVar5 = 0;
    do {
      lVar5 = lVar5 + (ulonglong)(*(int *)((longlong)param_2 + lVar10 + 0xc) == 1);
      lVar10 = lVar10 + 0x18;
    } while (param_3 * 0x18 != lVar10);
  }
  uVar9 = *(ulonglong *)(param_1 + 0x118);
  uVar8 = *(ulonglong *)(param_1 + 0x150);
  if (uVar8 < lVar5 + uVar9) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 8);
    if ((iVar2 == 0) || (((iVar2 == 4 || (iVar2 == 1)) && (uVar9 < uVar8)))) {
      if (param_3 != 0) {
        uVar11 = 0;
        do {
          piVar6 = param_2 + uVar11 * 6;
          while (piVar6[3] != 1) {
            uVar11 = uVar11 + 1;
            piVar6 = piVar6 + 6;
            if (param_3 <= uVar11) goto LAB_1489e0009;
          }
          if (uVar9 == 0) {
            uVar8 = 0;
          }
          else {
            uVar7 = 0;
            piVar12 = (int *)(param_1 + 0x1c);
            do {
              uVar8 = uVar7;
              if (*piVar12 == piVar6[2]) break;
              uVar7 = uVar7 + 1;
              piVar12 = piVar12 + 8;
              uVar8 = uVar9;
            } while (uVar9 != uVar7);
          }
          lVar5 = uVar8 * 0x20;
          *(undefined8 *)(param_1 + 0x24 + lVar5) = *(undefined8 *)(piVar6 + 4);
          uVar4 = *(undefined8 *)(piVar6 + 2);
          puVar1 = (undefined8 *)(param_1 + 0x14 + lVar5);
          *puVar1 = *(undefined8 *)piVar6;
          puVar1[1] = uVar4;
          *(int *)(param_1 + 0x2c + lVar5) = *piVar6;
          *(int *)(param_1 + 0x30 + lVar5) = piVar6[1];
          uVar9 = *(ulonglong *)(param_1 + 0x118);
          if (uVar8 == uVar9) {
            uVar9 = uVar8 + 1;
            *(ulonglong *)(param_1 + 0x118) = uVar9;
          }
          iVar3 = param_2[1];
          *(float *)(param_1 + 0x168) = (float)*param_2;
          *(float *)(param_1 + 0x16c) = (float)iVar3;
          uVar8 = *(ulonglong *)(param_1 + 0x150);
          uVar11 = uVar11 + 1;
        } while ((uVar11 < param_3) && (uVar9 != uVar8));
      }
LAB_1489e0009:
      if (uVar9 <= uVar8 && *(ulonglong *)(param_1 + 0x148) <= uVar9) {
        fVar13 = 0.0;
        fVar15 = 0.0;
        fVar16 = 0.0;
        fVar14 = 0.0;
        if (uVar9 != 0) {
          piVar6 = (int *)(param_1 + 0x30);
          do {
            fVar15 = fVar15 + (float)piVar6[-1];
            fVar16 = fVar16 + (float)*piVar6;
            fVar14 = fVar14 + 1.0;
            piVar6 = piVar6 + 8;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        if (0.0 < fVar14) {
          fVar13 = fVar15 / fVar14;
        }
        *(float *)(param_1 + 0x15c) = fVar13;
        *(uint *)(param_1 + 0x160) = -(uint)(0.0 < fVar14) & (uint)(fVar16 / fVar14);
        if (iVar2 != 4) {
          *(undefined4 *)(param_1 + 0x158) = 0;
          *(undefined4 *)(param_1 + 8) = 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1489e00ae FUN_1489e00ae body=270 status=ok
// SIG undefined FUN_1489e00ae(void)

undefined8 FUN_1489e00ae(longlong *param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = param_1[0x23];
  if (((ulonglong)param_1[0x29] <= uVar1) && (uVar1 <= (ulonglong)param_1[0x2a])) {
    fVar3 = 0.0;
    fVar5 = 0.0;
    fVar4 = 0.0;
    if (uVar1 != 0) {
      plVar2 = param_1 + 6;
      do {
        fVar3 = fVar3 + (float)*(int *)((longlong)plVar2 + -4);
        fVar5 = fVar5 + (float)(int)*plVar2;
        fVar4 = fVar4 + 1.0;
        plVar2 = plVar2 + 4;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    if (0.0 < fVar4) {
      fVar3 = fVar3 / fVar4;
    }
    else {
      fVar3 = 0.0;
    }
    fVar4 = (float)(-(uint)(0.0 < fVar4) & (uint)(fVar5 / fVar4));
    fVar5 = *(float *)(param_1 + 0x2c) - fVar4;
    fVar6 = *(float *)((longlong)param_1 + 0x15c) - fVar3;
    *(float *)(param_1 + 0x2f) = fVar6;
    *(float *)((longlong)param_1 + 0x17c) = fVar5;
    *(float *)((longlong)param_1 + 0x15c) = fVar3;
    *(float *)(param_1 + 0x2c) = fVar4;
    if (((int)param_1[1] == 1) &&
       (fVar3 = SQRT(fVar6 * fVar6 + fVar5 * fVar5) / 62.992126 + *(float *)(param_1 + 0x2b),
       *(float *)(param_1 + 0x2b) = fVar3, ABS(fVar3) < *(float *)((longlong)param_1 + 0x164))) {
      return 0;
    }
    *(undefined4 *)(param_1 + 1) = 4;
    (**(code **)(*param_1 + 0x20))();
  }
  return 0;
}



// FUNCTION 1489e01bc FUN_1489e01bc body=493 status=ok
// SIG undefined FUN_1489e01bc(void)

undefined8 FUN_1489e01bc(longlong *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar2 = param_1[0x23];
  fVar9 = 0.0;
  fVar11 = 0.0;
  fVar12 = 0.0;
  fVar10 = 0.0;
  if (uVar2 != 0) {
    plVar3 = param_1 + 6;
    uVar5 = uVar2;
    do {
      fVar11 = fVar11 + (float)*(int *)((longlong)plVar3 + -4);
      fVar12 = fVar12 + (float)(int)*plVar3;
      fVar10 = fVar10 + 1.0;
      plVar3 = plVar3 + 4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (0.0 < fVar10) {
    fVar9 = fVar11 / fVar10;
  }
  *(float *)(param_1 + 0x2e) = fVar9;
  *(uint *)((longlong)param_1 + 0x174) = -(uint)(0.0 < fVar10) & (uint)(fVar12 / fVar10);
  if (param_3 != 0) {
    lVar6 = 0;
    do {
      if ((*(int *)(param_2 + 0xc + lVar6 * 0x20) == 2) && (uVar1 = (uint)uVar2, 0 < (int)uVar1)) {
        uVar5 = uVar2 & 0xffffffff;
        uVar4 = 0;
        puVar7 = (undefined4 *)((longlong)param_1 + 0x34);
        piVar8 = (int *)((longlong)param_1 + 0x1c);
LAB_1489e0283:
        if (*piVar8 != *(int *)(lVar6 * 0x20 + param_2 + 8)) goto code_r0x0001489e0288;
        if ((int)uVar4 < (int)(uVar1 - (int)uVar4)) {
          do {
            puVar7[-4] = puVar7[4];
            puVar7[-3] = puVar7[5];
            puVar7[-2] = puVar7[6];
            puVar7[-1] = puVar7[7];
            puVar7[-8] = *puVar7;
            puVar7[-7] = puVar7[1];
            puVar7[-6] = puVar7[2];
            puVar7[-5] = puVar7[3];
            puVar7 = puVar7 + 8;
            uVar5 = uVar5 - 1;
          } while (uVar4 != uVar5);
          uVar2 = param_1[0x23];
        }
        uVar2 = uVar2 - 1;
        param_1[0x23] = uVar2;
      }
LAB_1489e02d6:
      lVar6 = lVar6 + 1;
    } while (lVar6 != param_3);
  }
  if (uVar2 < (ulonglong)param_1[0x29]) {
    if (((int)param_1[1] == 4) && (plVar3 = (longlong *)param_1[0x28], plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3,param_1[0x2e]);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    param_1[0x23] = 0;
  }
  else {
    fVar9 = 0.0;
    fVar11 = 0.0;
    fVar12 = 0.0;
    fVar10 = 0.0;
    if (uVar2 != 0) {
      plVar3 = param_1 + 6;
      do {
        fVar11 = fVar11 + (float)*(int *)((longlong)plVar3 + -4);
        fVar12 = fVar12 + (float)(int)*plVar3;
        fVar10 = fVar10 + 1.0;
        plVar3 = plVar3 + 4;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    if (0.0 < fVar10) {
      fVar9 = fVar11 / fVar10;
    }
    *(float *)((longlong)param_1 + 0x15c) = fVar9;
    *(uint *)(param_1 + 0x2c) = -(uint)(0.0 < fVar10) & (uint)(fVar12 / fVar10);
    *(undefined4 *)(param_1 + 1) = 4;
    (**(code **)(*param_1 + 0x20))(param_1);
  }
  return 0;
code_r0x0001489e0288:
  uVar4 = uVar4 + 1;
  piVar8 = piVar8 + 8;
  puVar7 = puVar7 + 8;
  uVar5 = (ulonglong)((int)uVar5 - 1);
  if ((uVar1 & 0x7fffffff) == uVar4) goto LAB_1489e02d6;
  goto LAB_1489e0283;
}



// FUNCTION 1489e03da FUN_1489e03da body=54 status=ok
// SIG undefined FUN_1489e03da(void)

void FUN_1489e03da(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x108);
  return;
}



// FUNCTION 1489e0418 FUN_1489e0418 body=39 status=ok
// SIG undefined FUN_1489e0418(void)

void FUN_1489e0418(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x108,0x10);
  FUN_1489e9b48(uVar1,param_1);
  return;
}



// FUNCTION 1489e0440 FUN_1489e0440 body=77 status=ok
// SIG undefined FUN_1489e0440(void)

void * FUN_1489e0440(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x108);
  memset(_Dst,0,0x108);
  FUN_1472ea222(_Dst);
  *(undefined8 *)((longlong)_Dst + 0xf8) = 0;
  *(undefined4 *)((longlong)_Dst + 0x100) = 0;
  return _Dst;
}



// FUNCTION 1489e048e FUN_1489e048e body=54 status=ok
// SIG undefined FUN_1489e048e(void)

void FUN_1489e048e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf8);
  return;
}



// FUNCTION 1489e04cc FUN_1489e04cc body=39 status=ok
// SIG undefined FUN_1489e04cc(void)

void FUN_1489e04cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xf8,0x10);
  FUN_1472ea2b4(uVar1,param_1);
  return;
}



// FUNCTION 1489e04f4 FUN_1489e04f4 body=52 status=ok
// SIG undefined FUN_1489e04f4(void)

void FUN_1489e04f4(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xf8);
  memset(_Dst,0,0xf8);
  FUN_1472ea222(_Dst);
  return;
}



// FUNCTION 1489e0528 FUN_1489e0528 body=49 status=ok
// SIG undefined FUN_1489e0528(void)

void FUN_1489e0528(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return;
}



// FUNCTION 1489e055a FUN_1489e055a body=41 status=ok
// SIG undefined FUN_1489e055a(void)

void FUN_1489e055a(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1 != param_2) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  }
  return;
}



// FUNCTION 1489e0584 FUN_1489e0584 body=120 status=ok
// SIG undefined FUN_1489e0584(void)

undefined8 * FUN_1489e0584(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar1 = param_2[1];
  param_1[1] = uVar1;
  uVar3 = FUN_14001cc68(0x18,0x10);
  FUN_1456bc4c4(uVar3,uVar1);
  puVar2 = (undefined8 *)param_1[2];
  param_1[2] = uVar3;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return param_1;
}



// FUNCTION 1489e05fc FUN_1489e05fc body=112 status=ok
// SIG undefined FUN_1489e05fc(void)

undefined8 * FUN_1489e05fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (param_1 != param_2) {
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    uVar1 = param_2[1];
    param_1[1] = uVar1;
    uVar3 = FUN_14001cc68(0x18,0x10);
    FUN_1456bc4c4(uVar3,uVar1);
    puVar2 = (undefined8 *)param_1[2];
    param_1[2] = uVar3;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return param_1;
}



// FUNCTION 1489e066c FUN_1489e066c body=179 status=ok
// SIG undefined FUN_1489e066c(void)

void FUN_1489e066c(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  code *local_68 [2];
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = (code *)0x0;
  local_58 = (longlong *)0x0;
  cVar2 = FUN_144a91224(param_1 + 0x370,local_68);
  if (cVar2 != '\0') {
    do {
      pcVar1 = local_68[0];
      plVar4 = local_58;
      if (local_58 == (longlong *)0x0) {
        plVar4 = local_48;
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      (*pcVar1)(uVar3);
      cVar2 = FUN_144a91224(param_1 + 0x370,local_68);
    } while (cVar2 != '\0');
  }
  if (local_68[0] != (code *)0x0) {
    plVar4 = local_48;
    if (local_58 != (longlong *)0x0) {
      plVar4 = local_58;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489e0720 FUN_1489e0720 body=106 status=ok
// SIG undefined FUN_1489e0720(void)

longlong FUN_1489e0720(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = (longlong)*(int *)(param_1 + 0x360);
  if (0 < lVar2) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x358) + -8 + lVar2 * 8);
    *(undefined8 *)(*(longlong *)(param_1 + 0x358) + -8 + lVar2 * 8) = 0;
    FUN_1489ef510(param_1 + 0x358,*(int *)(param_1 + 0x360) + -1);
    FUN_1489ef570(param_1 + 0x358);
    if (lVar1 != 0) {
      if (DAT_14c872a72 != '\0') {
        return lVar1;
      }
      FUN_140113f48(lVar1);
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1489e078a FUN_1489e078a body=734 status=ok
// SIG undefined FUN_1489e078a(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x0001489e0904 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong FUN_1489e078a(longlong param_1,char *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  longlong *plVar10;
  undefined1 auStack_1d8 [40];
  longlong local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  uint local_198;
  undefined1 local_190 [256];
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  code *local_78;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar6 = param_1 + -0x118;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    local_90 = 0;
    local_1b0 = lVar6;
    if (param_2 == (char *)0x0) {
      local_88 = 0;
      local_80 = 0;
    }
    else {
      sVar3 = strlen(param_2);
      FUN_1446e6fe8(local_190,param_2,sVar3 & 0xffffffff,1);
    }
    FUN_140056680(&local_1a8,local_88);
    pcVar9 = (code *)0x0;
    local_78 = (code *)0x0;
    local_198 = param_3;
    puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
    *puVar4 = &PTR_FUN_14b457100;
    plVar10 = puVar4 + 1;
    *plVar10 = local_1b0;
    puVar4[2] = local_1a8;
    local_1a8 = 0;
    *(undefined4 *)(puVar4 + 3) = (undefined4)local_1a0;
    *(undefined4 *)((longlong)puVar4 + 0x1c) = local_1a0._4_4_;
    local_1a0 = 0;
    *(uint *)(puVar4 + 4) = local_198;
    if (plVar10 != (longlong *)0x0) {
      pcVar9 = FUN_143ea6dfc;
      local_78 = FUN_143ea6dfc;
    }
    puVar5 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    *puVar5 = 0;
    puVar5[2] = pcVar9;
    puVar5[4] = puVar4;
    local_68 = 0;
    *(undefined4 *)(puVar5 + 8) = local_48;
    *(undefined4 *)((longlong)puVar5 + 0x44) = uStack_44;
    *(undefined4 *)(puVar5 + 9) = uStack_40;
    *(undefined4 *)((longlong)puVar5 + 0x4c) = uStack_3c;
    *(undefined4 *)(puVar5 + 6) = local_58;
    *(undefined4 *)((longlong)puVar5 + 0x34) = uStack_54;
    *(undefined4 *)(puVar5 + 7) = uStack_50;
    *(undefined4 *)((longlong)puVar5 + 0x3c) = uStack_4c;
    if (plVar10 != (longlong *)0x0) {
      local_78 = (code *)0x0;
    }
    lVar6 = 0;
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      plVar10 = *(longlong **)(param_1 + 600);
      *(undefined8 **)(param_1 + 600) = puVar5;
      UNLOCK();
      LOCK();
      lVar6 = *plVar10;
      *plVar10 = (longlong)puVar5;
      UNLOCK();
      if (local_78 != (code *)0x0) {
        lVar6 = (**(code **)(CONCAT44(uStack_54,local_58) + 0x10))();
      }
    }
    if (local_1a8 != 0) {
      lVar6 = FUN_1400020a8();
    }
    if (local_90 != 0) {
      lVar6 = FUN_1400020a8();
    }
  }
  else {
    *(short *)(param_1 + 0x94) = *(short *)(param_1 + 0x94) + -1;
    if (*(int *)(param_1 + 0x1a8) != *(int *)(param_1 + 0x1d4)) {
      lVar7 = param_1 + 0x1d8;
      if (*(longlong *)(param_1 + 0x1e0) != 0) {
        lVar7 = *(longlong *)(param_1 + 0x1e0);
      }
      iVar2 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x1e8) - 1U & param_3) * 4);
      if (iVar2 != -1) {
        lVar7 = *(longlong *)(param_1 + 0x1a0);
        do {
          lVar8 = lVar7 + (longlong)iVar2 * 0x38;
          if (*(uint *)(lVar7 + (longlong)iVar2 * 0x38) == param_3) goto LAB_1489e09bb;
          iVar2 = *(int *)(lVar8 + 0x30);
        } while (iVar2 != -1);
      }
    }
    lVar8 = 0;
LAB_1489e09bb:
    lVar7 = lVar8 + 8;
    if (lVar8 == 0) {
      lVar7 = 0;
    }
    lVar7 = *(longlong *)(lVar7 + 8);
    if ((lVar7 != 0) && (cVar1 = FUN_140432338(lVar7), cVar1 != '\0')) {
      FUN_143e97874(lVar6,lVar7);
    }
    FUN_1489ee63e((longlong *)(param_1 + 0x1a0),param_3);
    iVar2 = *(int *)(param_1 + 0x198);
    *(uint *)(param_1 + 0x198) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x19c) < iVar2 + 1U) {
      FUN_1489ee5a0((longlong *)(param_1 + 400),iVar2);
    }
    lVar6 = *(longlong *)(param_1 + 400);
    lVar7 = (longlong)iVar2 * 0x1c;
    *(undefined8 *)(lVar6 + lVar7) = 0;
    ((undefined8 *)(lVar6 + lVar7))[1] = 0;
    *(uint *)(lVar6 + 0x10 + lVar7) = param_3;
    *(undefined4 *)(lVar6 + 0x14 + lVar7) = 0xffffffff;
    *(undefined1 *)(lVar6 + 0x18 + lVar7) = 2;
  }
  if ((local_30 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489e0a6a FUN_1489e0a6a body=61 status=ok
// SIG undefined FUN_1489e0a6a(void)

void FUN_1489e0a6a(longlong *param_1)

{
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1489e0aa8 FUN_1489e0aa8 body=274 status=ok
// SIG undefined FUN_1489e0aa8(void)

void FUN_1489e0aa8(longlong param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  lVar12 = FUN_144821ef4(param_2);
  FUN_1447f9c4a(lVar12,param_1 + 0xf8,param_3,0);
  iVar10 = *(int *)(lVar12 + 0x30) + *(int *)(lVar12 + 0x20);
  iVar11 = iVar10 + *(int *)(lVar12 + 0x40);
  if (iVar11 != 0 && SCARRY4(iVar10,*(int *)(lVar12 + 0x40)) == iVar11 < 0) {
    uVar5 = param_2[0x32];
    puVar13 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar13 + 0xb;
    if ((undefined8 *)param_2[1] < puVar14) {
      FUN_140023dd8(param_2,0x60);
      puVar13 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar14 = puVar13 + 0xb;
    }
    *param_2 = (ulonglong)puVar14;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar13;
    param_2[6] = (ulonglong)(puVar13 + 1);
    uVar6 = *(undefined8 *)(lVar12 + 0x38);
    uVar1 = *(undefined4 *)(lVar12 + 0x40);
    uVar7 = *(undefined8 *)(lVar12 + 0x28);
    uVar2 = *(undefined4 *)(lVar12 + 0x30);
    uVar8 = *(undefined8 *)(lVar12 + 0x18);
    uVar3 = *(undefined4 *)(lVar12 + 0x20);
    uVar9 = *(undefined8 *)(lVar12 + 8);
    uVar4 = *(undefined4 *)(lVar12 + 0x10);
    puVar13[1] = 0;
    *puVar13 = &PTR_FUN_14a1e7fd8;
    puVar13[2] = uVar5;
    puVar13[3] = uVar9;
    *(undefined4 *)(puVar13 + 4) = uVar4;
    puVar13[5] = uVar8;
    *(undefined4 *)(puVar13 + 6) = uVar3;
    puVar13[7] = uVar7;
    *(undefined4 *)(puVar13 + 8) = uVar2;
    puVar13[9] = uVar6;
    *(undefined4 *)(puVar13 + 10) = uVar1;
    *(undefined8 *)(lVar12 + 8) = 0;
    *(undefined4 *)(lVar12 + 0x10) = 0;
    *(undefined8 *)(lVar12 + 0x18) = 0;
    *(undefined4 *)(lVar12 + 0x20) = 0;
    *(undefined8 *)(lVar12 + 0x28) = 0;
    *(undefined4 *)(lVar12 + 0x30) = 0;
    *(undefined8 *)(lVar12 + 0x38) = 0;
    *(undefined4 *)(lVar12 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1489e0bba FUN_1489e0bba body=274 status=ok
// SIG undefined FUN_1489e0bba(void)

void FUN_1489e0bba(longlong param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  lVar12 = FUN_144821ef4(param_2);
  FUN_1449dacb8(lVar12,param_1 + 0xfe,param_3,0);
  iVar10 = *(int *)(lVar12 + 0x30) + *(int *)(lVar12 + 0x20);
  iVar11 = iVar10 + *(int *)(lVar12 + 0x40);
  if (iVar11 != 0 && SCARRY4(iVar10,*(int *)(lVar12 + 0x40)) == iVar11 < 0) {
    uVar5 = param_2[0x32];
    puVar13 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar13 + 0xb;
    if ((undefined8 *)param_2[1] < puVar14) {
      FUN_140023dd8(param_2,0x60);
      puVar13 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar14 = puVar13 + 0xb;
    }
    *param_2 = (ulonglong)puVar14;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar13;
    param_2[6] = (ulonglong)(puVar13 + 1);
    uVar6 = *(undefined8 *)(lVar12 + 0x38);
    uVar1 = *(undefined4 *)(lVar12 + 0x40);
    uVar7 = *(undefined8 *)(lVar12 + 0x28);
    uVar2 = *(undefined4 *)(lVar12 + 0x30);
    uVar8 = *(undefined8 *)(lVar12 + 0x18);
    uVar3 = *(undefined4 *)(lVar12 + 0x20);
    uVar9 = *(undefined8 *)(lVar12 + 8);
    uVar4 = *(undefined4 *)(lVar12 + 0x10);
    puVar13[1] = 0;
    *puVar13 = &PTR_FUN_14a1e7fd8;
    puVar13[2] = uVar5;
    puVar13[3] = uVar9;
    *(undefined4 *)(puVar13 + 4) = uVar4;
    puVar13[5] = uVar8;
    *(undefined4 *)(puVar13 + 6) = uVar3;
    puVar13[7] = uVar7;
    *(undefined4 *)(puVar13 + 8) = uVar2;
    puVar13[9] = uVar6;
    *(undefined4 *)(puVar13 + 10) = uVar1;
    *(undefined8 *)(lVar12 + 8) = 0;
    *(undefined4 *)(lVar12 + 0x10) = 0;
    *(undefined8 *)(lVar12 + 0x18) = 0;
    *(undefined4 *)(lVar12 + 0x20) = 0;
    *(undefined8 *)(lVar12 + 0x28) = 0;
    *(undefined4 *)(lVar12 + 0x30) = 0;
    *(undefined8 *)(lVar12 + 0x38) = 0;
    *(undefined4 *)(lVar12 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1489e0ccc FUN_1489e0ccc body=371 status=ok
// SIG undefined FUN_1489e0ccc(void)

void FUN_1489e0ccc(undefined8 param_1,ulonglong *param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  
  uVar5 = param_2[0x33];
  lVar11 = FUN_144821ef4(param_2);
  FUN_144ab89ca(param_1,lVar11,param_3,param_3 + 0x18);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar12 + 0xb;
    if ((undefined8 *)param_2[1] < puVar14) {
      FUN_140023dd8(param_2,0x60);
      puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar14 = puVar12 + 0xb;
    }
    *param_2 = (ulonglong)puVar14;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar12;
    param_2[6] = (ulonglong)(puVar12 + 1);
    uVar13 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
    puVar12[2] = uVar5;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar13;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  uVar13 = FUN_14485b2b4(param_4,*(undefined4 *)(param_3 + 0x3090));
  FUN_1489e9bb2(param_1,param_2,uVar5,param_4,uVar13,param_3);
  return;
}



// FUNCTION 1489e0e40 FUN_1489e0e40 body=17 status=ok
// SIG undefined FUN_1489e0e40(void)

ulonglong FUN_1489e0e40(longlong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x70))();
  return uVar1 ^ 1;
}



// FUNCTION 1489e0e60 FUN_1489e0e60 body=273 status=ok
// SIG undefined FUN_1489e0e60(void)

undefined4 FUN_1489e0e60(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong **local_68;
  undefined1 local_60;
  longlong *local_58;
  undefined8 *puStack_50;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar2 = (**(code **)(*param_1 + 0x78))();
  uVar3 = 0;
  if (cVar2 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
    plVar1 = param_1 + 6;
    FUN_1489ef6c2(param_1 + 0x11,(int)param_1[6]);
    FUN_1489ef814(param_1 + 7,(int)param_1[6]);
    *(int *)(param_1 + 6) = (int)param_1[6] + 1;
    local_70 = (longlong *)((ulonglong)local_70._4_4_ << 0x20);
    local_68 = (longlong **)FUN_1405d8a54(0);
    local_60 = 0;
    local_58 = plVar1;
    puStack_50 = &local_70;
    FUN_1489ef964(param_1 + 7,local_3c,&local_58);
    if (local_68 != (longlong **)0x0) {
      FUN_14018802a();
    }
    local_58 = (longlong *)0x0;
    puStack_50 = (undefined8 *)0x0;
    local_70 = plVar1;
    local_68 = &local_58;
    FUN_1489efdc4(param_1 + 0x11,local_3c);
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    uVar3 = (undefined4)*plVar1;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489e0f72 FUN_1489e0f72 body=272 status=ok
// SIG undefined FUN_1489e0f72(void)

void FUN_1489e0f72(longlong param_1,longlong param_2)

{
  char *_Str;
  size_t sVar1;
  undefined1 auStack_258 [32];
  longlong local_238 [2];
  longlong *local_228;
  undefined1 *local_220;
  undefined1 local_214 [4];
  undefined1 local_210 [256];
  longlong local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined1 local_f8 [8];
  longlong local_f0;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_258;
  FUN_1489e1084(local_f8);
  _Str = *(char **)(param_2 + 8);
  local_110 = 0;
  if (_Str == (char *)0x0) {
    local_108 = 0;
    local_100 = 0;
  }
  else {
    sVar1 = strlen(_Str);
    FUN_1446e6fe8(local_210,_Str,sVar1 & 0xffffffff,1);
  }
  FUN_140056680(local_238,local_108);
  local_228 = local_238;
  local_220 = local_f8;
  FUN_1489f022a(param_1 + 0xd8,local_214);
  if (local_238[0] != 0) {
    FUN_1400020a8();
  }
  if (local_110 != 0) {
    FUN_1400020a8();
  }
  if (local_f0 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489e1084 FUN_1489e1084 body=391 status=ok
// SIG undefined FUN_1489e1084(void)

undefined4 * FUN_1489e1084(undefined4 *param_1,undefined4 *param_2)

{
  char *_Str;
  undefined4 uVar1;
  undefined4 uVar2;
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
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  size_t sVar18;
  undefined1 auStack_168 [32];
  undefined1 local_148 [256];
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  *param_1 = *param_2;
  _Str = *(char **)(param_2 + 2);
  local_48 = 0;
  if (_Str == (char *)0x0) {
    local_40 = 0;
    local_38 = 0;
  }
  else {
    sVar18 = strlen(_Str);
    FUN_1446e6fe8(local_148,_Str,sVar18 & 0xffffffff,1);
  }
  FUN_140056680(param_1 + 2,local_40);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 4);
  param_1[8] = param_2[6];
  uVar13 = *(undefined8 *)(param_2 + 9);
  uVar14 = *(undefined8 *)(param_2 + 0xb);
  uVar15 = *(undefined8 *)(param_2 + 0xd);
  uVar16 = *(undefined8 *)(param_2 + 0xf);
  uVar17 = *(undefined8 *)(param_2 + 0x11);
  *(undefined8 *)(param_1 + 9) = *(undefined8 *)(param_2 + 7);
  *(undefined8 *)(param_1 + 0xb) = uVar13;
  *(undefined8 *)(param_1 + 0xd) = uVar14;
  *(undefined8 *)(param_1 + 0xf) = uVar15;
  *(undefined8 *)(param_1 + 0x11) = uVar16;
  *(undefined8 *)(param_1 + 0x13) = uVar17;
  param_1[0x15] = param_2[0x13];
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x16);
  uVar13 = *(undefined8 *)(param_2 + 0x1a);
  uVar1 = param_2[0x1c];
  uVar2 = param_2[0x1d];
  uVar3 = param_2[0x1e];
  uVar4 = param_2[0x1f];
  uVar5 = param_2[0x20];
  uVar6 = param_2[0x21];
  uVar7 = param_2[0x22];
  uVar8 = param_2[0x23];
  uVar9 = param_2[0x24];
  uVar10 = param_2[0x25];
  uVar11 = param_2[0x26];
  uVar12 = param_2[0x27];
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x1e) = uVar13;
  param_1[0x20] = uVar1;
  param_1[0x21] = uVar2;
  param_1[0x22] = uVar3;
  param_1[0x23] = uVar4;
  param_1[0x24] = uVar5;
  param_1[0x25] = uVar6;
  param_1[0x26] = uVar7;
  param_1[0x27] = uVar8;
  param_1[0x28] = uVar9;
  param_1[0x29] = uVar10;
  param_1[0x2a] = uVar11;
  param_1[0x2b] = uVar12;
  param_1[0x2c] = param_2[0x28];
  param_1[0x2d] = param_2[0x29];
  param_1[0x2e] = param_2[0x2a];
  *(undefined8 *)(param_1 + 0x2f) = *(undefined8 *)(param_2 + 0x2b);
  param_1[0x31] = param_2[0x2d];
  if ((local_30 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489e120c FUN_1489e120c body=335 status=ok
// SIG undefined FUN_1489e120c(void)

void FUN_1489e120c(longlong param_1,undefined8 param_2,char *param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  int iVar10;
  size_t sVar11;
  ulonglong uVar12;
  undefined2 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auStack_168 [32];
  undefined2 *local_148;
  int local_140;
  undefined1 local_138 [256];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_38 = 0;
  if (param_3 == (char *)0x0) {
    local_30 = 0;
    local_28 = 0;
  }
  else {
    sVar11 = strlen(param_3);
    FUN_1446e6fe8(local_138,param_3,sVar11 & 0xffffffff,1);
  }
  FUN_140056680(&local_148,local_30);
  puVar13 = local_148;
  if (local_140 == 0) {
    puVar13 = &DAT_149dfb77a;
  }
  uVar14 = 0;
  uVar12 = (ulonglong)(local_140 - 1);
  if (local_140 == 0) {
    uVar12 = uVar14;
  }
  uVar9 = FUN_144a49b4a(uVar12,puVar13);
  iVar10 = FUN_1489f05d8((longlong *)(param_1 + 0xd8),uVar9,&local_148);
  if (iVar10 != -1) {
    uVar14 = (longlong)iVar10 * 0xf0 + *(longlong *)(param_1 + 0xd8);
  }
  lVar15 = uVar14 + 0x10;
  if (uVar14 == 0) {
    lVar15 = 0;
  }
  if (local_148 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (lVar15 != 0) {
    uVar9 = *param_5;
    uVar1 = param_5[1];
    uVar2 = param_5[2];
    uVar3 = param_5[3];
    uVar4 = *(undefined8 *)(param_5 + 4);
    uVar5 = *(undefined8 *)(param_5 + 6);
    uVar6 = *(undefined8 *)(param_5 + 8);
    uVar7 = *(undefined8 *)(param_5 + 10);
    uVar8 = *(undefined8 *)(param_5 + 0xe);
    *(undefined8 *)(lVar15 + 0xa0) = *(undefined8 *)(param_5 + 0xc);
    *(undefined8 *)(lVar15 + 0xa8) = uVar8;
    *(undefined8 *)(lVar15 + 0x90) = uVar6;
    *(undefined8 *)(lVar15 + 0x98) = uVar7;
    *(undefined8 *)(lVar15 + 0x80) = uVar4;
    *(undefined8 *)(lVar15 + 0x88) = uVar5;
    *(undefined4 *)(lVar15 + 0x70) = uVar9;
    *(undefined4 *)(lVar15 + 0x74) = uVar1;
    *(undefined4 *)(lVar15 + 0x78) = uVar2;
    *(undefined4 *)(lVar15 + 0x7c) = uVar3;
  }
  if ((local_20 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489e135c FUN_1489e135c body=285 status=ok
// SIG undefined FUN_1489e135c(void)

void FUN_1489e135c(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
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
  plVar1 = param_1 + 0x1b;
  plVar2 = param_1 + 0x1d;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = plVar2;
  if ((int)param_1[0x20] == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar3 = (int)param_1[0x20];
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar1;
  if ((iStack_44 != iVar3) || (uStack_50 != plVar2)) {
    do {
      (**(code **)(*param_1 + 0x38))(param_1,*local_80 + (longlong)iStack_64 * 0xf0 + 0x10,param_2);
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 ||
             ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar2 || iStack_64 != iVar3));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489e147a FUN_1489e147a body=68 status=ok
// SIG undefined FUN_1489e147a(void)

void FUN_1489e147a(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  FUN_1489ef814(param_1 + 0x38,*(undefined4 *)(param_1 + 0x30));
  FUN_1489ef6c2(param_1 + 0x88,*(undefined4 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x0001489e14b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 1489e14d0 FUN_1489e14d0 body=482 status=ok
// SIG undefined FUN_1489e14d0(void)

void FUN_1489e14d0(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  void *_Src;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined1 *local_a0;
  ulonglong local_98;
  uint local_90;
  int iStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong *local_70;
  undefined8 local_68;
  ulonglong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 0x238);
  uVar2 = param_1 + 0x248;
  local_a0 = &DAT_100000000;
  local_90 = 0xffffffff;
  iStack_8c = 0;
  uStack_88 = 0;
  iVar6 = 0;
  local_98 = uVar2;
  if (*(int *)(param_1 + 0x260) != 0) {
    FUN_1449c0562(&local_a0);
    iVar6 = *(int *)(param_1 + 0x260);
  }
  local_58 = local_90;
  iStack_54 = iStack_8c;
  local_50 = uStack_88;
  local_4c = uStack_84;
  local_68 = local_a0;
  local_60 = local_98;
  local_a8 = param_1;
  local_70 = plVar1;
  if ((iStack_8c != iVar6) || (local_98 != uVar2)) {
    do {
      lVar7 = *local_70;
      lVar5 = (longlong)iStack_54 * 0x38;
      local_a0 = (undefined1 *)0x0;
      uVar3 = *(uint *)(lVar7 + 8 + lVar5);
      _Src = *(void **)(lVar7 + lVar5);
      local_98 = CONCAT44(local_98._4_4_,uVar3);
      if ((longlong)(int)uVar3 == 0) {
        local_98 = (ulonglong)uVar3;
      }
      else {
        FUN_1446dd670(&local_a0,uVar3,0);
        memcpy(local_a0,_Src,(longlong)(int)uVar3 * 2);
      }
      lVar7 = lVar7 + lVar5;
      local_90 = *(uint *)(lVar7 + 0x10);
      iStack_8c = *(int *)(lVar7 + 0x14);
      uStack_88 = *(undefined4 *)(lVar7 + 0x18);
      uStack_84 = *(undefined4 *)(lVar7 + 0x1c);
      plVar4 = *(longlong **)(lVar7 + 0x18);
      local_80 = *(undefined4 *)(lVar7 + 0x20);
      uStack_7c = *(undefined4 *)(lVar7 + 0x24);
      uStack_78 = *(undefined4 *)(lVar7 + 0x28);
      uStack_74 = *(undefined4 *)(lVar7 + 0x2c);
      (**(code **)(*plVar4 + 0x420))(plVar4,0);
      if (local_a0 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (local_70 != plVar1 || (local_60 != uVar2 || iStack_54 != iVar6));
  }
  FUN_1489f0924(plVar1);
  lVar7 = local_a8;
  FUN_1489f0c8a(local_a8 + 0x1e8);
  *(undefined1 *)(lVar7 + 0x298) = 1;
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489e16b3 FUN_1489e16b3 body=204 status=ok
// SIG undefined FUN_1489e16b3(void)

undefined8 FUN_1489e16b3(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
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
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_98 = 0;
  uStack_a0 = 0x40;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  local_a8 = param_3;
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



// FUNCTION 1489e1780 FUN_1489e1780 body=307 status=ok
// SIG undefined FUN_1489e1780(void)

void FUN_1489e1780(longlong param_1,undefined8 param_2,char *param_3,undefined8 param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  size_t sVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  undefined1 auStack_168 [32];
  undefined2 *local_148;
  int local_140;
  undefined1 local_138 [256];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_38 = 0;
  if (param_3 == (char *)0x0) {
    local_30 = 0;
    local_28 = 0;
  }
  else {
    sVar4 = strlen(param_3);
    FUN_1446e6fe8(local_138,param_3,sVar4 & 0xffffffff,1);
  }
  FUN_140056680(&local_148,local_30);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  puVar5 = local_148;
  if (local_140 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  iVar3 = local_140 + -1;
  if (local_140 == 0) {
    iVar3 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar3,puVar5);
  iVar3 = FUN_1489f1136((longlong *)(param_1 + 0x128),uVar2,&local_148);
  if (iVar3 != -1) {
    lVar1 = *(longlong *)(param_1 + 0x128);
    uVar6 = lVar1 + (longlong)iVar3 * 0x38 + 0x10;
    if ((uVar6 & 0xffffffffffffffef) != 0) {
      FUN_14045627c(*(undefined8 *)(lVar1 + (longlong)iVar3 * 0x38 + 0x18),
                    CONCAT71((int7)(uVar6 >> 8),param_5),1);
    }
  }
  if (local_148 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489e18ba FUN_1489e18ba body=26 status=ok
// SIG undefined FUN_1489e18ba(void)

void FUN_1489e18ba(undefined8 param_1)

{
  FUN_141302ef4();
  FUN_1489e14d0(param_1);
  return;
}



// FUNCTION 1489e18d4 FUN_1489e18d4 body=51 status=ok
// SIG undefined FUN_1489e18d4(void)

void FUN_1489e18d4(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = FUN_140432338(param_1 + -0x110);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x180) = param_2;
    *(undefined4 *)(param_1 + 0x184) = param_3;
  }
  return;
}



// FUNCTION 1489e1908 FUN_1489e1908 body=258 status=ok
// SIG undefined FUN_1489e1908(void)

undefined4 * FUN_1489e1908(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = param_2[4];
  _Src = *(void **)(param_2 + 2);
  param_1[4] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[5] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy(*(void **)(param_1 + 2),_Src,(longlong)iVar1 * 2);
  }
  puVar10 = (undefined8 *)(param_2 + 6);
  puVar11 = (undefined8 *)(param_1 + 6);
  for (lVar9 = 10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x1c);
  uVar3 = *(undefined8 *)(param_2 + 0x1e);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x22);
  uVar6 = *(undefined8 *)(param_2 + 0x24);
  uVar7 = *(undefined8 *)(param_2 + 0x26);
  uVar8 = *(undefined8 *)(param_2 + 0x2a);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x2a) = uVar8;
  *(undefined8 *)(param_1 + 0x24) = uVar6;
  *(undefined8 *)(param_1 + 0x26) = uVar7;
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  *(undefined8 *)(param_1 + 0x22) = uVar5;
  *(undefined8 *)(param_1 + 0x1c) = uVar2;
  *(undefined8 *)(param_1 + 0x1e) = uVar3;
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2d] = param_2[0x2d];
  param_1[0x2e] = param_2[0x2e];
  *(undefined8 *)(param_1 + 0x2f) = *(undefined8 *)(param_2 + 0x2f);
  param_1[0x31] = param_2[0x31];
  return param_1;
}



// FUNCTION 1489e1a1c FUN_1489e1a1c body=528 status=ok
// SIG undefined FUN_1489e1a1c(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x0001489e1bde */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_1489e1a1c(longlong param_1,undefined4 param_2,char *param_3,undefined8 param_4)

{
  char cVar1;
  size_t sVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  longlong *plVar7;
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  undefined4 local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined1 local_190 [256];
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  code *local_78;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  cVar1 = FUN_144a61b4f();
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_1d8);
  }
  local_1b8 = param_1 + -0x28;
  local_90 = 0;
  local_1b0 = param_2;
  if (param_3 == (char *)0x0) {
    local_88 = 0;
    local_80 = 0;
  }
  else {
    sVar2 = strlen(param_3);
    FUN_1446e6fe8(local_190,param_3,sVar2 & 0xffffffff,1);
  }
  FUN_140056680(&local_1a8,local_88);
  pcVar6 = (code *)0x0;
  local_78 = (code *)0x0;
  local_198 = param_4;
  puVar3 = (undefined8 *)FUN_14001cc68(0x30,8);
  *puVar3 = &PTR_FUN_14b457380;
  plVar7 = puVar3 + 1;
  *plVar7 = local_1b8;
  *(undefined4 *)(puVar3 + 2) = local_1b0;
  puVar3[3] = local_1a8;
  local_1a8 = 0;
  *(undefined4 *)(puVar3 + 4) = (undefined4)local_1a0;
  *(undefined4 *)((longlong)puVar3 + 0x24) = local_1a0._4_4_;
  local_1a0 = 0;
  puVar3[5] = local_198;
  if (plVar7 != (longlong *)0x0) {
    pcVar6 = FUN_143ea7f3a;
    local_78 = FUN_143ea7f3a;
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar4 = 0;
  puVar4[2] = pcVar6;
  puVar4[4] = puVar3;
  local_68 = 0;
  *(undefined4 *)(puVar4 + 8) = local_48;
  *(undefined4 *)((longlong)puVar4 + 0x44) = uStack_44;
  *(undefined4 *)(puVar4 + 9) = uStack_40;
  *(undefined4 *)((longlong)puVar4 + 0x4c) = uStack_3c;
  *(undefined4 *)(puVar4 + 6) = local_58;
  *(undefined4 *)((longlong)puVar4 + 0x34) = uStack_54;
  *(undefined4 *)(puVar4 + 7) = uStack_50;
  *(undefined4 *)((longlong)puVar4 + 0x3c) = uStack_4c;
  if (plVar7 != (longlong *)0x0) {
    local_78 = (code *)0x0;
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar3 = *(undefined8 **)(param_1 + 0x128);
    *(undefined8 **)(param_1 + 0x128) = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar3;
    *puVar3 = puVar4;
    UNLOCK();
    if (local_78 != (code *)0x0) {
      uVar5 = (**(code **)(CONCAT44(uStack_54,local_58) + 0x10))();
    }
  }
  if (local_1a8 != 0) {
    uVar5 = FUN_1400020a8();
  }
  if (local_90 != 0) {
    uVar5 = FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1489e1c4e FUN_1489e1c4e body=552 status=ok
// SIG undefined FUN_1489e1c4e(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff98 : 0x0001489e1e28 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_1489e1c4e(longlong param_1,undefined4 param_2,char *param_3,undefined8 param_4,
             undefined1 param_5)

{
  char cVar1;
  size_t sVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  longlong *plVar7;
  undefined1 auStack_1f8 [40];
  longlong local_1d0;
  undefined4 local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8;
  undefined1 local_1a0 [256];
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  code *local_88;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  cVar1 = FUN_144a61b4f();
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_1f8);
  }
  local_1d0 = param_1 + -0x28;
  local_a0 = 0;
  local_1c8 = param_2;
  if (param_3 == (char *)0x0) {
    local_98 = 0;
    local_90 = 0;
  }
  else {
    sVar2 = strlen(param_3);
    FUN_1446e6fe8(local_1a0,param_3,sVar2 & 0xffffffff,1);
  }
  FUN_140056680(&local_1c0,local_98);
  local_1a8 = param_5;
  pcVar6 = (code *)0x0;
  local_88 = (code *)0x0;
  local_1b0 = param_4;
  puVar3 = (undefined8 *)FUN_14001cc68(0x38,8);
  *puVar3 = &PTR_FUN_14b4573a0;
  plVar7 = puVar3 + 1;
  *plVar7 = local_1d0;
  *(undefined4 *)(puVar3 + 2) = local_1c8;
  puVar3[3] = local_1c0;
  local_1c0 = 0;
  *(undefined4 *)(puVar3 + 4) = (undefined4)local_1b8;
  *(undefined4 *)((longlong)puVar3 + 0x24) = local_1b8._4_4_;
  local_1b8 = 0;
  *(undefined1 *)(puVar3 + 6) = local_1a8;
  puVar3[5] = local_1b0;
  if (plVar7 != (longlong *)0x0) {
    pcVar6 = FUN_143ea8188;
    local_88 = FUN_143ea8188;
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar4 = 0;
  puVar4[2] = pcVar6;
  puVar4[4] = puVar3;
  local_78 = 0;
  *(undefined4 *)(puVar4 + 8) = local_58;
  *(undefined4 *)((longlong)puVar4 + 0x44) = uStack_54;
  *(undefined4 *)(puVar4 + 9) = uStack_50;
  *(undefined4 *)((longlong)puVar4 + 0x4c) = uStack_4c;
  *(undefined4 *)(puVar4 + 6) = local_68;
  *(undefined4 *)((longlong)puVar4 + 0x34) = uStack_64;
  *(undefined4 *)(puVar4 + 7) = uStack_60;
  *(undefined4 *)((longlong)puVar4 + 0x3c) = uStack_5c;
  if (plVar7 != (longlong *)0x0) {
    local_88 = (code *)0x0;
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar3 = *(undefined8 **)(param_1 + 0x128);
    *(undefined8 **)(param_1 + 0x128) = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar3;
    *puVar3 = puVar4;
    UNLOCK();
    if (local_88 != (code *)0x0) {
      uVar5 = (**(code **)(CONCAT44(uStack_64,local_68) + 0x10))();
    }
  }
  if (local_1c0 != 0) {
    uVar5 = FUN_1400020a8();
  }
  if (local_a0 != 0) {
    uVar5 = FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1489e1e9a FUN_1489e1e9a body=676 status=ok
// SIG undefined FUN_1489e1e9a(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff98 : 0x0001489e20ed */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_1489e1e9a(longlong param_1,undefined4 param_2,char *param_3,undefined8 param_4,
             undefined4 *param_5)

{
  char cVar1;
  size_t sVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  longlong *plVar7;
  undefined1 auStack_238 [40];
  undefined1 local_210 [256];
  longlong local_110;
  undefined8 local_108;
  undefined4 local_100;
  longlong local_f8;
  undefined4 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  code *local_88;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_238;
  cVar1 = FUN_144a61b4f();
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_238);
  }
  local_f8 = param_1 + -0x28;
  local_110 = 0;
  local_f0 = param_2;
  if (param_3 == (char *)0x0) {
    local_108 = 0;
    local_100 = 0;
  }
  else {
    sVar2 = strlen(param_3);
    FUN_1446e6fe8(local_210,param_3,sVar2 & 0xffffffff,1);
  }
  FUN_140056680(&local_e8,local_108);
  local_c8 = *param_5;
  uStack_c4 = param_5[1];
  uStack_c0 = param_5[2];
  uStack_bc = param_5[3];
  local_b8 = param_5[4];
  uStack_b4 = param_5[5];
  uStack_b0 = param_5[6];
  uStack_ac = param_5[7];
  local_a8 = param_5[8];
  uStack_a4 = param_5[9];
  uStack_a0 = param_5[10];
  uStack_9c = param_5[0xb];
  local_98 = param_5[0xc];
  uStack_94 = param_5[0xd];
  uStack_90 = param_5[0xe];
  uStack_8c = param_5[0xf];
  pcVar6 = (code *)0x0;
  local_88 = (code *)0x0;
  local_d8 = param_4;
  puVar3 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  *puVar3 = &PTR_FUN_14b4573c0;
  plVar7 = puVar3 + 2;
  *plVar7 = local_f8;
  *(undefined4 *)(puVar3 + 3) = local_f0;
  puVar3[4] = local_e8;
  local_e8 = 0;
  *(undefined4 *)(puVar3 + 5) = (undefined4)local_e0;
  *(undefined4 *)((longlong)puVar3 + 0x2c) = local_e0._4_4_;
  local_e0 = 0;
  puVar3[6] = local_d8;
  *(undefined4 *)(puVar3 + 0xe) = local_98;
  *(undefined4 *)((longlong)puVar3 + 0x74) = uStack_94;
  *(undefined4 *)(puVar3 + 0xf) = uStack_90;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_8c;
  *(undefined4 *)(puVar3 + 0xc) = local_a8;
  *(undefined4 *)((longlong)puVar3 + 100) = uStack_a4;
  *(undefined4 *)(puVar3 + 0xd) = uStack_a0;
  *(undefined4 *)((longlong)puVar3 + 0x6c) = uStack_9c;
  *(undefined4 *)(puVar3 + 10) = local_b8;
  *(undefined4 *)((longlong)puVar3 + 0x54) = uStack_b4;
  *(undefined4 *)(puVar3 + 0xb) = uStack_b0;
  *(undefined4 *)((longlong)puVar3 + 0x5c) = uStack_ac;
  *(undefined4 *)(puVar3 + 8) = local_c8;
  *(undefined4 *)((longlong)puVar3 + 0x44) = uStack_c4;
  *(undefined4 *)(puVar3 + 9) = uStack_c0;
  *(undefined4 *)((longlong)puVar3 + 0x4c) = uStack_bc;
  if (plVar7 != (longlong *)0x0) {
    pcVar6 = FUN_143ea83ec;
    local_88 = FUN_143ea83ec;
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar4 = 0;
  puVar4[2] = pcVar6;
  puVar4[4] = puVar3;
  local_78 = 0;
  *(undefined4 *)(puVar4 + 8) = local_58;
  *(undefined4 *)((longlong)puVar4 + 0x44) = uStack_54;
  *(undefined4 *)(puVar4 + 9) = uStack_50;
  *(undefined4 *)((longlong)puVar4 + 0x4c) = uStack_4c;
  *(undefined4 *)(puVar4 + 6) = local_68;
  *(undefined4 *)((longlong)puVar4 + 0x34) = uStack_64;
  *(undefined4 *)(puVar4 + 7) = uStack_60;
  *(undefined4 *)((longlong)puVar4 + 0x3c) = uStack_5c;
  if (plVar7 != (longlong *)0x0) {
    local_88 = (code *)0x0;
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar3 = *(undefined8 **)(param_1 + 0x128);
    *(undefined8 **)(param_1 + 0x128) = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar3;
    *puVar3 = puVar4;
    UNLOCK();
    if (local_88 != (code *)0x0) {
      uVar5 = (**(code **)(CONCAT44(uStack_64,local_68) + 0x10))();
    }
  }
  if (local_e8 != 0) {
    uVar5 = FUN_1400020a8();
  }
  if (local_110 != 0) {
    uVar5 = FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1489e2162 FUN_1489e2162 body=528 status=ok
// SIG undefined FUN_1489e2162(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x0001489e2324 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_1489e2162(longlong param_1,undefined4 param_2,char *param_3,undefined8 param_4)

{
  char cVar1;
  size_t sVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  longlong *plVar7;
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  undefined4 local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined1 local_190 [256];
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  code *local_78;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  cVar1 = FUN_144a61b4f();
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_1d8);
  }
  local_1b8 = param_1 + -0x28;
  local_90 = 0;
  local_1b0 = param_2;
  if (param_3 == (char *)0x0) {
    local_88 = 0;
    local_80 = 0;
  }
  else {
    sVar2 = strlen(param_3);
    FUN_1446e6fe8(local_190,param_3,sVar2 & 0xffffffff,1);
  }
  FUN_140056680(&local_1a8,local_88);
  pcVar6 = (code *)0x0;
  local_78 = (code *)0x0;
  local_198 = param_4;
  puVar3 = (undefined8 *)FUN_14001cc68(0x30,8);
  *puVar3 = &PTR_FUN_14b4573e0;
  plVar7 = puVar3 + 1;
  *plVar7 = local_1b8;
  *(undefined4 *)(puVar3 + 2) = local_1b0;
  puVar3[3] = local_1a8;
  local_1a8 = 0;
  *(undefined4 *)(puVar3 + 4) = (undefined4)local_1a0;
  *(undefined4 *)((longlong)puVar3 + 0x24) = local_1a0._4_4_;
  local_1a0 = 0;
  puVar3[5] = local_198;
  if (plVar7 != (longlong *)0x0) {
    pcVar6 = FUN_143ea866a;
    local_78 = FUN_143ea866a;
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar4 = 0;
  puVar4[2] = pcVar6;
  puVar4[4] = puVar3;
  local_68 = 0;
  *(undefined4 *)(puVar4 + 8) = local_48;
  *(undefined4 *)((longlong)puVar4 + 0x44) = uStack_44;
  *(undefined4 *)(puVar4 + 9) = uStack_40;
  *(undefined4 *)((longlong)puVar4 + 0x4c) = uStack_3c;
  *(undefined4 *)(puVar4 + 6) = local_58;
  *(undefined4 *)((longlong)puVar4 + 0x34) = uStack_54;
  *(undefined4 *)(puVar4 + 7) = uStack_50;
  *(undefined4 *)((longlong)puVar4 + 0x3c) = uStack_4c;
  if (plVar7 != (longlong *)0x0) {
    local_78 = (code *)0x0;
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar3 = *(undefined8 **)(param_1 + 0x128);
    *(undefined8 **)(param_1 + 0x128) = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar3;
    *puVar3 = puVar4;
    UNLOCK();
    if (local_78 != (code *)0x0) {
      uVar5 = (**(code **)(CONCAT44(uStack_54,local_58) + 0x10))();
    }
  }
  if (local_1a8 != 0) {
    uVar5 = FUN_1400020a8();
  }
  if (local_90 != 0) {
    uVar5 = FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1489e2394 FUN_1489e2394 body=36 status=ok
// SIG undefined FUN_1489e2394(void)

void FUN_1489e2394(longlong param_1)

{
  FUN_1489e23b8(param_1 + -0x28);
                    /* WARNING: Could not recover jumptable at 0x0001489e23b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x138) + 0x60))();
  return;
}



// FUNCTION 1489e23b8 FUN_1489e23b8 body=179 status=ok
// SIG undefined FUN_1489e23b8(void)

void FUN_1489e23b8(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  code *local_68 [2];
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = (code *)0x0;
  local_58 = (longlong *)0x0;
  cVar2 = FUN_144a91224(param_1 + 0x150,local_68);
  if (cVar2 != '\0') {
    do {
      pcVar1 = local_68[0];
      plVar4 = local_58;
      if (local_58 == (longlong *)0x0) {
        plVar4 = local_48;
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      (*pcVar1)(uVar3);
      cVar2 = FUN_144a91224(param_1 + 0x150,local_68);
    } while (cVar2 != '\0');
  }
  if (local_68[0] != (code *)0x0) {
    plVar4 = local_48;
    if (local_58 != (longlong *)0x0) {
      plVar4 = local_58;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489e24b0 FUN_1489e24b0 body=54 status=ok
// SIG undefined FUN_1489e24b0(void)

undefined8 FUN_1489e24b0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x80))();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)**(longlong **)(param_1 + 0x130) >> 8),
                     **(longlong **)(param_1 + 0x130) == 0);
  }
  return uVar2;
}



// FUNCTION 1489e24f4 FUN_1489e24f4 body=48 status=ok
// SIG undefined FUN_1489e24f4(void)

undefined8 FUN_1489e24f4(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_140432338(param_1 + -0x28);
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001489e2518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x78))();
    return uVar2;
  }
  return 0;
}



// FUNCTION 1489e258e FUN_1489e258e body=206 status=ok
// SIG undefined FUN_1489e258e(void)

undefined8 * FUN_1489e258e(undefined8 *param_1)

{
  FUN_140a55f88();
  *param_1 = &PTR_FUN_14b4550b0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 2;
  *(undefined8 *)((longlong)param_1 + 0x27c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x284) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x294) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b4) = 0;
  *(undefined8 *)((longlong)param_1 + 700) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x2c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x2dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x2f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(undefined8 *)((longlong)param_1 + 0x344) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x354) = 0;
  *(undefined8 *)((longlong)param_1 + 0x35c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x364) = 0;
  *(undefined8 *)((longlong)param_1 + 0x36c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x374) = 0;
  *(undefined8 *)((longlong)param_1 + 0x37c) = 1;
  *(undefined4 *)((longlong)param_1 + 899) = 0;
  return param_1;
}



// FUNCTION 1489e265c FUN_1489e265c body=275 status=ok
// SIG undefined FUN_1489e265c(void)

void FUN_1489e265c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b4550b0;
  puVar1 = (undefined8 *)param_1[100];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1449db362(param_1 + 0x5f);
  FUN_144760e21(param_1[0x5c],*(undefined4 *)(param_1 + 0x5d));
  if (param_1[0x5c] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x59],*(undefined4 *)(param_1 + 0x5a));
  if (param_1[0x59] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x56],*(undefined4 *)(param_1 + 0x57));
  if (param_1[0x56] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x53],*(undefined4 *)(param_1 + 0x54));
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x50],*(undefined4 *)(param_1 + 0x51));
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x4d],*(undefined4 *)(param_1 + 0x4e));
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  FUN_14171f70c(param_1);
  return;
}



// FUNCTION 1489e2770 FUN_1489e2770 body=320 status=ok
// SIG undefined FUN_1489e2770(void)

void FUN_1489e2770(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_2 + 0x1a8);
  *(undefined8 *)(param_1 + 0x330) = 0;
  *(undefined4 *)(param_1 + 0x308) = 0;
  *(undefined4 *)(param_1 + 0x31c) = 0;
  *(undefined4 *)(param_1 + 0x30c) = 1;
  *(undefined4 *)(param_1 + 0x310) = 0;
  *(undefined4 *)(param_1 + 0x314) = 2;
  *(undefined4 *)(param_1 + 0x318) = 0;
  *(undefined1 *)(param_1 + 0x388) = 0;
  *(undefined1 *)(param_1 + 0x340) = 0;
  puVar7 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  plStack_30 = *(longlong **)(param_1 + 0x10);
  if (plStack_30 == (longlong *)0x0) {
LAB_1489e2814:
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
    bVar8 = true;
  }
  else {
    iVar6 = (int)plStack_30[1];
    do {
      if (iVar6 == 0) goto LAB_1489e2814;
      LOCK();
      iVar5 = (int)plStack_30[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plStack_30 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    local_38 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plStack_30 + 0xc) = *(int *)((longlong)plStack_30 + 0xc) + 1;
    UNLOCK();
    bVar8 = false;
  }
  plVar4 = plStack_30;
  FUN_1489cf9a4(puVar7,&local_38);
  puVar3 = *(undefined8 **)(param_1 + 800);
  if ((puVar3 != puVar7) && (*(undefined8 **)(param_1 + 800) = puVar7, puVar3 != (undefined8 *)0x0))
  {
    (**(code **)*puVar3)(puVar3,1);
  }
  if (!bVar8) {
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
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489e28b2 FUN_1489e28b2 body=7 status=ok
// SIG undefined FUN_1489e28b2(void)

void FUN_1489e28b2(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30c) = param_2;
  return;
}



// FUNCTION 1489e28ba FUN_1489e28ba body=7 status=ok
// SIG undefined FUN_1489e28ba(void)

void FUN_1489e28ba(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x310) = param_2;
  return;
}



// FUNCTION 1489e28c2 FUN_1489e28c2 body=7 status=ok
// SIG undefined FUN_1489e28c2(void)

void FUN_1489e28c2(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x314) = param_2;
  return;
}



// FUNCTION 1489e28ca FUN_1489e28ca body=7 status=ok
// SIG undefined FUN_1489e28ca(void)

void FUN_1489e28ca(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x318) = param_2;
  return;
}



// FUNCTION 1489e28d2 FUN_1489e28d2 body=196 status=ok
// SIG undefined FUN_1489e28d2(void)

undefined1 * FUN_1489e28d2(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined1 local_d0 [184];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((*(char *)(param_1 + 0x31c) != '\0') || (*(char *)(param_1 + 0x31d) == '\x01')) {
    if ((*(float *)(param_4 + 0x30) == 0.0) && (!NAN(*(float *)(param_4 + 0x30)))) {
      if ((*(float *)(param_4 + 0x34) == 0.0) && (!NAN(*(float *)(param_4 + 0x34))))
      goto LAB_1489e291f;
    }
    local_d8 = 0;
    FUN_1489e2998();
    FUN_14493db24(local_d0);
  }
LAB_1489e291f:
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489e2998 FUN_1489e2998 body=1220 status=ok
// SIG undefined FUN_1489e2998(void)

undefined8
FUN_1489e2998(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
             undefined4 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_ad8 [32];
  undefined1 *local_ab8;
  undefined1 *local_ab0;
  longlong local_aa8;
  double local_a98;
  double local_a90;
  double local_a88;
  double local_a80;
  undefined1 local_a74 [44];
  undefined8 local_a48;
  undefined8 local_a40;
  undefined8 local_a38;
  undefined1 local_a28 [288];
  undefined8 local_908;
  undefined8 uStack_900;
  undefined8 local_8f8;
  undefined8 uStack_8f0;
  undefined8 local_8e8;
  char local_8e0;
  undefined8 auStack_8d8 [16];
  char local_858;
  undefined8 auStack_848 [16];
  char local_7c8;
  undefined4 local_7b8;
  undefined4 uStack_7b4;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  undefined8 local_7a8;
  undefined8 uStack_7a0;
  undefined8 local_798;
  char local_788;
  undefined1 local_770 [184];
  undefined1 local_6b8 [288];
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  char local_570;
  undefined8 auStack_568 [16];
  char local_4e8;
  undefined8 auStack_4d8 [16];
  char local_458;
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  char local_418;
  char local_400 [184];
  undefined1 local_348 [288];
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  char local_200;
  undefined8 auStack_1f8 [16];
  char local_178;
  undefined8 auStack_168 [16];
  char local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  char local_a8;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_ad8;
  cVar7 = FUN_1489e4308(param_1,&local_a48);
  if (cVar7 == '\0') {
    FUN_1489e3b52(param_1,param_2,param_5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_90 ^ (ulonglong)auStack_ad8);
  }
  fVar1 = *(float *)(param_4 + 0x20);
  fVar2 = *(float *)(param_4 + 0x24);
  fVar15 = 1.0 / (*(float *)(param_3 + 0x1c) * *(float *)(param_3 + 0x28) -
                 *(float *)(param_3 + 0x24) * *(float *)(param_3 + 0x20));
  fVar14 = *(float *)(param_3 + 0x1c) * fVar15;
  fVar13 = -*(float *)(param_3 + 0x24) * fVar15;
  fVar11 = -*(float *)(param_3 + 0x20) * fVar15;
  fVar15 = fVar15 * *(float *)(param_3 + 0x28);
  fVar3 = *(float *)(param_3 + 0x30);
  fVar4 = *(float *)(param_3 + 0x2c);
  fVar12 = (float)FUN_146567c8e(local_a40);
  dVar5 = (double)(fVar11 * fVar1 + fVar14 * fVar2 + (-fVar4 * fVar11 - fVar14 * fVar3)) *
          (double)fVar12;
  dVar6 = (double)(fVar15 * fVar1 + fVar13 * fVar2 + (-fVar4 * fVar15 - fVar3 * fVar13)) *
          (double)fVar12;
  FUN_1489d1160(local_348,local_a38);
  FUN_1407c9ae3(local_a74,param_4,param_5);
  local_418 = local_a8;
  if (local_a8 == '\x01') {
    memcpy(local_6b8,local_348,0x120);
    local_598 = local_228;
    uStack_590 = uStack_220;
    local_570 = local_200;
    if (local_200 == '\x01') {
      local_578 = local_208;
      local_588 = local_218;
      uStack_580 = uStack_210;
    }
    local_4e8 = local_178;
    if (local_178 == '\x01') {
      puVar9 = auStack_1f8;
      puVar10 = auStack_568;
      for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
    }
    local_458 = local_e8;
    if (local_e8 == '\x01') {
      puVar9 = auStack_168;
      puVar10 = auStack_4d8;
      for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
    }
    local_448 = local_d8;
    uStack_444 = uStack_d4;
    uStack_440 = uStack_d0;
    uStack_43c = uStack_cc;
    local_438 = local_c8;
    uStack_430 = uStack_c0;
    local_428 = local_b8;
  }
  local_ab8 = local_6b8;
  local_ab0 = local_a74;
  local_aa8 = param_4;
  local_a88 = dVar6;
  local_a80 = dVar5;
  FUN_1489e3bfa(param_1,local_400,local_a48);
  if (local_400[0] != '\x01') {
    local_788 = local_a8;
    if (local_a8 == '\x01') {
      memcpy(local_a28,local_348,0x120);
      local_908 = local_228;
      uStack_900 = uStack_220;
      local_8e0 = local_200;
      if (local_200 == '\x01') {
        local_8e8 = local_208;
        local_8f8 = local_218;
        uStack_8f0 = uStack_210;
      }
      local_858 = local_178;
      if (local_178 == '\x01') {
        puVar9 = auStack_1f8;
        puVar10 = auStack_8d8;
        for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
      }
      local_7c8 = local_e8;
      if (local_e8 == '\x01') {
        puVar9 = auStack_168;
        puVar10 = auStack_848;
        for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
      }
      local_7b8 = local_d8;
      uStack_7b4 = uStack_d4;
      uStack_7b0 = uStack_d0;
      uStack_7ac = uStack_cc;
      local_7a8 = local_c8;
      uStack_7a0 = uStack_c0;
      local_798 = local_b8;
    }
    local_ab8 = local_a28;
    local_ab0 = local_a74;
    local_aa8 = param_4;
    local_a98 = dVar6;
    local_a90 = dVar5;
    FUN_1489e3cc4(param_1,local_770,&local_a48);
    FUN_1403d4924(local_400,local_770);
    FUN_14493db24(local_770);
    if (local_400[0] != '\x01') {
      FUN_1489e3b52(param_1,param_2,param_5);
      goto LAB_1489e2c67;
    }
  }
  FUN_1428fd920(param_2,local_400);
LAB_1489e2c67:
  FUN_14493db24(local_400);
  if ((local_90 ^ (ulonglong)auStack_ad8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1489e2e5e FUN_1489e2e5e body=270 status=ok
// SIG undefined FUN_1489e2e5e(void)

undefined1 * FUN_1489e2e5e(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(char *)(param_1 + 0x31c) == '\0') && (*(char *)(param_1 + 0x31d) == '\0')) {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  else {
    local_48 = *(undefined8 *)(param_4 + 0x40);
    local_40 = *(undefined8 *)(param_4 + 0x48);
    local_38 = *(longlong **)(param_4 + 0x50);
    if (local_38 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
    }
    FUN_1489f1302(param_1 + 0x268,&local_48);
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
    local_58 = 1;
    FUN_1489e2998(param_1,param_2,param_3,param_4);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489e2f6e FUN_1489e2f6e body=105 status=ok
// SIG undefined FUN_1489e2f6e(void)

undefined1 *
FUN_1489e2f6e(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  if ((*(char *)(param_1 + 0x31c) == '\0') && (*(char *)(param_1 + 0x31d) == '\0')) {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  else {
    FUN_1489e2998(param_1,param_2,param_3,param_4,1);
  }
  return param_2;
}



// FUNCTION 1489e2fd8 FUN_1489e2fd8 body=270 status=ok
// SIG undefined FUN_1489e2fd8(void)

undefined1 * FUN_1489e2fd8(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(char *)(param_1 + 0x31c) == '\0') && (*(char *)(param_1 + 0x31d) == '\0')) {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  else {
    local_48 = *(undefined8 *)(param_4 + 0x40);
    local_40 = *(undefined8 *)(param_4 + 0x48);
    local_38 = *(longlong **)(param_4 + 0x50);
    if (local_38 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
    }
    FUN_1489f1302(param_1 + 0x280,&local_48);
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
    local_58 = 2;
    FUN_1489e2998(param_1,param_2,param_3,param_4);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489e30e8 FUN_1489e30e8 body=145 status=ok
// SIG undefined FUN_1489e30e8(void)

undefined1 *
FUN_1489e30e8(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  if ((*(char *)(param_1 + 0x31c) == '\0') && (*(char *)(param_1 + 0x31d) == '\0')) {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  else {
    FUN_1489f13a6(param_1 + 0x2c8,param_4);
    FUN_1489e2998(param_1,param_2,param_3,param_4,3);
  }
  return param_2;
}



// FUNCTION 1489e317a FUN_1489e317a body=196 status=ok
// SIG undefined FUN_1489e317a(void)

undefined1 * FUN_1489e317a(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined1 local_d0 [184];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((*(char *)(param_1 + 0x31c) != '\0') || (*(char *)(param_1 + 0x31d) == '\x01')) {
    if ((*(float *)(param_4 + 0x30) == 0.0) && (!NAN(*(float *)(param_4 + 0x30)))) {
      if ((*(float *)(param_4 + 0x34) == 0.0) && (!NAN(*(float *)(param_4 + 0x34))))
      goto LAB_1489e31c7;
    }
    local_d8 = 0;
    FUN_1489e3240();
    FUN_14493db24(local_d0);
  }
LAB_1489e31c7:
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489e3240 FUN_1489e3240 body=1525 status=ok
// SIG undefined FUN_1489e3240(void)

undefined8
FUN_1489e3240(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
             undefined4 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined ***pppuVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_6e8 [32];
  code **local_6c8;
  code **local_6c0;
  code **local_6b8;
  code **local_6b0;
  code *local_6a8;
  code **local_6a0;
  code *local_698;
  code **local_690;
  code *local_688;
  code **local_680;
  undefined1 local_674 [4];
  undefined4 local_670;
  undefined4 local_66c;
  undefined4 local_668;
  undefined4 local_664;
  undefined1 local_660 [24];
  double local_648;
  double local_640;
  double local_638;
  double local_630;
  undefined8 local_628;
  undefined8 local_620;
  undefined8 local_618;
  code *local_608 [2];
  longlong *local_5f8;
  longlong local_5e8 [4];
  code *local_5c8 [2];
  undefined ***local_5b8;
  undefined **local_5a8;
  longlong local_5a0;
  longlong local_598;
  code *local_588 [2];
  undefined ***local_578;
  undefined **local_568;
  longlong local_560;
  undefined4 *local_558;
  undefined1 local_540 [8];
  undefined8 local_538;
  undefined8 uStack_530;
  undefined1 local_520;
  undefined1 local_518 [136];
  undefined8 local_490;
  code *local_488 [2];
  undefined8 local_478;
  char local_440 [184];
  code *local_388;
  longlong *local_378;
  longlong local_368 [4];
  undefined1 local_348 [696];
  ulonglong local_90;
  
  uVar5 = param_5;
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_6e8;
  cVar6 = FUN_1489e4308(param_1,&local_628);
  if (cVar6 == '\0') {
    FUN_1489e3ba6(param_1,param_2,uVar5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_90 ^ (ulonglong)auStack_6e8);
  }
  fVar1 = *(float *)(param_4 + 0x20);
  fVar2 = *(float *)(param_4 + 0x24);
  fVar14 = 1.0 / (*(float *)(param_3 + 0x1c) * *(float *)(param_3 + 0x28) -
                 *(float *)(param_3 + 0x24) * *(float *)(param_3 + 0x20));
  fVar13 = *(float *)(param_3 + 0x1c) * fVar14;
  fVar12 = -*(float *)(param_3 + 0x24) * fVar14;
  fVar10 = -*(float *)(param_3 + 0x20) * fVar14;
  fVar14 = fVar14 * *(float *)(param_3 + 0x28);
  fVar3 = *(float *)(param_3 + 0x30);
  fVar4 = *(float *)(param_3 + 0x2c);
  FUN_14039c14e(local_620,&local_638);
  plVar7 = (longlong *)FUN_1401e2c50();
  lVar8 = plVar7[0x22];
  if (lVar8 == 0) {
    (**(code **)(*plVar7 + 1000))(plVar7);
    lVar8 = plVar7[0x22];
  }
  fVar11 = (float)FUN_1401e2bac(lVar8,CONCAT44((int)local_630,(int)local_638));
  local_640 = (double)(fVar10 * fVar1 + fVar13 * fVar2 + (-fVar4 * fVar10 - fVar13 * fVar3)) *
              (double)fVar11;
  local_648 = (double)(fVar14 * fVar1 + fVar12 * fVar2 + (-fVar4 * fVar14 - fVar3 * fVar12)) *
              (double)fVar11;
  FUN_1489d1160(local_348,local_618);
  FUN_1489d1041(local_660,param_4,uVar5);
  local_388 = (code *)0x0;
  local_378 = (longlong *)FUN_14001cc68(0x28,8);
  *local_378 = (longlong)&PTR_FUN_14b457460;
  local_378[1] = (longlong)local_660;
  local_378[2] = (longlong)&param_5;
  local_378[3] = param_1;
  local_378[4] = param_4;
  if (local_378 + 1 == (longlong *)0x0) {
    local_488[0] = (code *)0x0;
    local_478 = 0;
  }
  else {
    local_388 = FUN_143ea8bc4;
    local_488[0] = FUN_143ea8bc4;
    local_478 = 0;
    plVar7 = local_378;
    if (local_378 == (longlong *)0x0) {
      plVar7 = local_368;
    }
    (**(code **)*plVar7)(plVar7);
  }
  local_6c8 = local_488;
  FUN_1489d1382(local_440,local_628,&local_648,local_348);
  if (local_440[0] == '\x01') {
    FUN_1428fd920(param_2,local_440);
  }
  else {
    local_540[0] = 0;
    local_520 = 0;
    local_538 = 0;
    uStack_530 = 0;
    memset(local_518,0,0x88);
    local_490 = 0x20702;
    FUN_1403d4924(local_440,local_540);
    FUN_14493db24(local_540);
    local_578 = (undefined ***)0x0;
    local_568 = &PTR_LAB_14b457480;
    local_588[0] = FUN_143ea8ec2;
    local_5b8 = (undefined ***)0x0;
    local_5a8 = &PTR_LAB_14b4574a0;
    local_5c8[0] = FUN_143ea8f2e;
    local_608[0] = (code *)0x0;
    local_5a0 = param_1;
    local_598 = param_4;
    local_560 = param_1;
    local_558 = &param_5;
    local_5f8 = (longlong *)FUN_14001cc68(0x28,8);
    *local_5f8 = (longlong)&PTR_FUN_14b4574c0;
    local_5f8[1] = (longlong)local_660;
    local_5f8[2] = (longlong)&param_5;
    local_5f8[3] = param_1;
    local_5f8[4] = param_4;
    if (local_5f8 + 1 != (longlong *)0x0) {
      local_608[0] = FUN_143ea90fa;
    }
    local_674[0] = *(undefined1 *)(param_1 + 799);
    local_6c8 = (code **)local_674;
    local_670 = *(undefined4 *)(param_1 + 0x30c);
    local_66c = *(undefined4 *)(param_1 + 0x314);
    local_668 = *(undefined4 *)(param_1 + 0x318);
    local_664 = *(undefined4 *)(param_1 + 0x310);
    local_680 = local_608;
    local_6b0 = &local_688;
    local_688 = FUN_1489f144a;
    local_690 = local_5c8;
    local_6b8 = &local_698;
    local_698 = FUN_1489d95e6;
    local_6a0 = local_588;
    local_6c0 = &local_6a8;
    local_6a8 = FUN_1489d95e6;
    FUN_143e885ce(local_540,&local_628,&local_648,local_348);
    FUN_1403d4924(local_440,local_540);
    FUN_14493db24(local_540);
    if (local_440[0] == '\x01') {
      FUN_1428fd920(param_2,local_440);
    }
    else {
      FUN_1489e3ba6(param_1,param_2,param_5);
    }
    if (local_608[0] != (code *)0x0) {
      plVar7 = local_5f8;
      if (local_5f8 == (longlong *)0x0) {
        plVar7 = local_5e8;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    if (local_5c8[0] != (code *)0x0) {
      pppuVar9 = local_5b8;
      if (local_5b8 == (undefined ***)0x0) {
        pppuVar9 = &local_5a8;
      }
      (*(code *)(*pppuVar9)[2])();
    }
    if (local_588[0] != (code *)0x0) {
      pppuVar9 = local_578;
      if (local_578 == (undefined ***)0x0) {
        pppuVar9 = &local_568;
      }
      (*(code *)(*pppuVar9)[2])();
    }
  }
  FUN_14493db24(local_440);
  if (local_388 != (code *)0x0) {
    plVar7 = local_378;
    if (local_378 == (longlong *)0x0) {
      plVar7 = local_368;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_90 ^ (ulonglong)auStack_6e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489e383c FUN_1489e383c body=105 status=ok
// SIG undefined FUN_1489e383c(void)

undefined1 *
FUN_1489e383c(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  if ((*(char *)(param_1 + 0x31c) == '\0') && (*(char *)(param_1 + 0x31d) == '\0')) {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  else {
    FUN_1489e3240(param_1,param_2,param_3,param_4,1);
  }
  return param_2;
}



// FUNCTION 1489e38a6 FUN_1489e38a6 body=105 status=ok
// SIG undefined FUN_1489e38a6(void)

undefined1 *
FUN_1489e38a6(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  if ((*(char *)(param_1 + 0x31c) == '\0') && (*(char *)(param_1 + 0x31d) == '\0')) {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  else {
    FUN_1489e3240(param_1,param_2,param_3,param_4,2);
  }
  return param_2;
}



// FUNCTION 1489e3910 FUN_1489e3910 body=203 status=ok
// SIG undefined FUN_1489e3910(void)

undefined1 * FUN_1489e3910(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  undefined1 *puVar1;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined1 local_188 [184];
  undefined1 local_d0 [184];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if ((*(char *)(param_1 + 0x31c) != '\0') || (*(char *)(param_1 + 0x31d) == '\x01')) {
    if (*(char *)(param_4 + 100) == '\x01') {
      local_198 = 0;
      puVar1 = local_d0;
      FUN_1489e3240();
    }
    else {
      local_198 = 0;
      puVar1 = local_188;
      FUN_1489e2998();
    }
    FUN_14493db24(puVar1);
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if ((local_18 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489e39dc FUN_1489e39dc body=81 status=ok
// SIG undefined FUN_1489e39dc(void)

undefined1 * FUN_1489e39dc(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  cVar1 = FUN_144729dda(param_1 + 0x338);
  uVar3 = 1;
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0x338);
    uVar3 = *(undefined4 *)(lVar2 + 0x1d8);
  }
  *param_2 = 1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x38) = uVar3;
  return param_2;
}



// FUNCTION 1489e3a3e FUN_1489e3a3e body=221 status=ok
// SIG undefined FUN_1489e3a3e(void)

void FUN_1489e3a3e(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = param_1 + 0x338;
  cVar1 = FUN_1489e3b1c(param_1 + 0x330,lVar4);
  if (cVar1 == '\0') {
    cVar1 = FUN_144729dda(lVar4);
    if (cVar1 != '\0') {
      lVar2 = FUN_14479d2ce(lVar4);
      if (*(longlong *)(*(longlong *)(lVar2 + 0x220) + 8) != 0) {
        lVar2 = param_1 + 0x344;
        if (*(char *)(param_1 + 0x388) == '\0') {
          lVar2 = 0;
        }
        lVar3 = FUN_14479d2ce(lVar4);
        FUN_145afb0de(*(undefined8 *)(*(longlong *)(lVar3 + 0x220) + 8),lVar2);
        *(undefined1 *)(param_1 + 0x388) = 0;
        lVar2 = param_1 + 0x370;
        if (*(char *)(param_1 + 0x389) == '\0') {
          lVar2 = 0;
        }
        lVar4 = FUN_14479d2ce(lVar4);
        FUN_145afb03c(*(undefined8 *)(*(longlong *)(lVar4 + 0x220) + 8),lVar2);
        *(undefined1 *)(param_1 + 0x389) = 0;
      }
    }
  }
  FUN_14485c47a(param_1 + 0x330,param_2);
  return;
}



// FUNCTION 1489e3b1c FUN_1489e3b1c body=53 status=ok
// SIG undefined FUN_1489e3b1c(void)

ulonglong FUN_1489e3b1c(int *param_1,int *param_2)

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



// FUNCTION 1489e3b52 FUN_1489e3b52 body=83 status=ok
// SIG undefined FUN_1489e3b52(void)

undefined1 * FUN_1489e3b52(undefined8 param_1,undefined1 *param_2,int param_3)

{
  if (param_3 != 0) {
    FUN_1489e3a3e();
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



// FUNCTION 1489e3ba6 FUN_1489e3ba6 body=83 status=ok
// SIG undefined FUN_1489e3ba6(void)

undefined1 * FUN_1489e3ba6(undefined8 param_1,undefined1 *param_2,int param_3)

{
  if (param_3 != 0) {
    FUN_1489e3a3e();
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



// FUNCTION 1489e3bfa FUN_1489e3bfa body=200 status=ok
// SIG undefined FUN_1489e3bfa(void)

undefined8
FUN_1489e3bfa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5,undefined4 param_6,undefined4 param_7)

{
  undefined1 auStack_88 [32];
  code **local_68;
  code *local_58 [2];
  undefined8 local_48;
  undefined **local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = local_58;
  local_48 = 0;
  local_38 = &PTR_LAB_14b457400;
  local_28 = param_6;
  uStack_20 = param_7;
  local_58[0] = FUN_143ea88b8;
  local_30 = param_1;
  FUN_1489d1382(param_2,param_3,param_4,param_5);
  if (*(char *)(param_5 + 0x2a0) == '\x01') {
    if (*(char *)(param_5 + 0x260) == '\x01') {
      *(undefined1 *)(param_5 + 0x260) = 0;
    }
    if (*(char *)(param_5 + 0x1d0) == '\x01') {
      *(undefined1 *)(param_5 + 0x1d0) = 0;
    }
    if (*(char *)(param_5 + 0x148) == '\x01') {
      *(undefined1 *)(param_5 + 0x148) = 0;
    }
    *(undefined1 *)(param_5 + 0x2a0) = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489e3cc4 FUN_1489e3cc4 body=476 status=ok
// SIG undefined FUN_1489e3cc4(void)

undefined8
FUN_1489e3cc4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5,undefined8 param_6,undefined8 param_7)

{
  undefined ***pppuVar1;
  undefined1 auStack_158 [32];
  undefined1 *local_138;
  code **local_130;
  code **local_128;
  code **local_120;
  code *local_118;
  code **local_110;
  code *local_108;
  code **local_100;
  code *local_f8;
  longlong *local_f0;
  undefined1 local_e4 [4];
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  code *local_b8 [2];
  undefined ***local_a8;
  undefined **local_98;
  longlong local_90;
  undefined8 local_88;
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_110 = local_78;
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_14b457420;
  local_48 = param_6;
  local_78[0] = FUN_143ea8964;
  local_100 = local_b8;
  local_a8 = (undefined ***)0x0;
  local_98 = &PTR_LAB_14b457440;
  local_88 = param_7;
  local_b8[0] = FUN_143ea89d0;
  local_f0 = &local_d0;
  local_c8 = param_6;
  local_c0 = param_7;
  local_e4[0] = *(undefined1 *)(param_1 + 799);
  local_138 = local_e4;
  local_e0 = *(undefined4 *)(param_1 + 0x30c);
  local_dc = *(undefined4 *)(param_1 + 0x314);
  local_d8 = *(undefined4 *)(param_1 + 0x318);
  local_d4 = *(undefined4 *)(param_1 + 0x310);
  local_120 = &local_f8;
  local_f8 = FUN_143ea8b9c;
  local_128 = &local_108;
  local_108 = FUN_1489d95e6;
  local_130 = &local_118;
  local_118 = FUN_1489d95e6;
  local_d0 = param_1;
  local_90 = param_1;
  local_50 = param_1;
  FUN_143e885ce(param_2,param_3,param_4,param_5);
  if (local_b8[0] != (code *)0x0) {
    pppuVar1 = local_a8;
    if (local_a8 == (undefined ***)0x0) {
      pppuVar1 = &local_98;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if (local_78[0] != (code *)0x0) {
    pppuVar1 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar1 = &local_58;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if (*(char *)(param_5 + 0x2a0) == '\x01') {
    if (*(char *)(param_5 + 0x260) == '\x01') {
      *(undefined1 *)(param_5 + 0x260) = 0;
    }
    if (*(char *)(param_5 + 0x1d0) == '\x01') {
      *(undefined1 *)(param_5 + 0x1d0) = 0;
    }
    if (*(char *)(param_5 + 0x148) == '\x01') {
      *(undefined1 *)(param_5 + 0x148) = 0;
    }
    *(undefined1 *)(param_5 + 0x2a0) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489e3ea2 FUN_1489e3ea2 body=524 status=ok
// SIG undefined FUN_1489e3ea2(void)

char * FUN_1489e3ea2(longlong *param_1,char *param_2,double *param_3,longlong param_4,int *param_5,
                    longlong param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined1 uVar16;
  int iVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong *plStack_90;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  param_5[2] = (int)*param_3;
  param_5[3] = (int)param_3[1];
  if (*param_5 == 2) {
    uVar16 = 0;
  }
  else {
    if (*param_5 != 1) goto LAB_1489e3f28;
    FUN_1489e3a3e(param_1,param_4);
    iVar17 = *param_5;
    iVar15 = param_5[1];
    iVar6 = param_5[2];
    iVar7 = param_5[3];
    iVar8 = param_5[4];
    iVar9 = param_5[5];
    iVar10 = param_5[6];
    iVar11 = param_5[7];
    iVar12 = param_5[8];
    iVar13 = param_5[9];
    iVar14 = param_5[10];
    *(int *)(param_1 + 0x6c) = param_5[7];
    *(int *)((longlong)param_1 + 0x364) = iVar12;
    *(int *)(param_1 + 0x6d) = iVar13;
    *(int *)((longlong)param_1 + 0x36c) = iVar14;
    *(int *)((longlong)param_1 + 0x354) = iVar8;
    *(int *)(param_1 + 0x6b) = iVar9;
    *(int *)((longlong)param_1 + 0x35c) = iVar10;
    *(int *)(param_1 + 0x6c) = iVar11;
    *(int *)((longlong)param_1 + 0x344) = iVar17;
    *(int *)(param_1 + 0x69) = iVar15;
    *(int *)((longlong)param_1 + 0x34c) = iVar6;
    *(int *)(param_1 + 0x6a) = iVar7;
    uVar16 = 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x389) = uVar16;
LAB_1489e3f28:
  FUN_14485c47a(param_1 + 0x67,param_4);
  uVar4 = *(undefined8 *)(*(longlong *)(param_4 + 0x220) + 8);
  local_68 = *param_5;
  iStack_64 = param_5[1];
  iStack_60 = param_5[2];
  iStack_5c = param_5[3];
  iStack_58 = param_5[4];
  iStack_54 = param_5[5];
  iStack_50 = param_5[6];
  local_4c = param_5[7];
  iStack_48 = param_5[8];
  iStack_44 = param_5[9];
  iStack_40 = param_5[10];
  (**(code **)(*param_1 + 0x240))(param_1,param_4,uVar4);
  FUN_143e8853d(param_2,uVar4,param_5);
  if (*param_2 == '\x01') {
    local_80 = *(undefined8 *)(param_6 + 0x40);
    local_78 = *(undefined8 *)(param_6 + 0x48);
    local_70 = *(longlong *)(param_6 + 0x50);
    if (local_70 != 0) {
      LOCK();
      *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
      UNLOCK();
    }
    plVar5 = (longlong *)param_1[2];
    if (plVar5 == (longlong *)0x0) {
LAB_1489e4006:
      local_98 = 0;
      plStack_90 = (longlong *)0x0;
      bVar19 = true;
    }
    else {
      iVar17 = (int)plVar5[1];
      do {
        if (iVar17 == 0) goto LAB_1489e4006;
        LOCK();
        iVar15 = (int)plVar5[1];
        bVar19 = iVar17 == iVar15;
        if (bVar19) {
          *(int *)(plVar5 + 1) = iVar17 + 1;
          iVar15 = iVar17;
        }
        iVar17 = iVar15;
        UNLOCK();
      } while (!bVar19);
      lVar18 = param_1[1];
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
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      bVar19 = false;
      local_98 = lVar18;
      plStack_90 = plVar5;
    }
    plVar5 = plStack_90;
    lVar18 = FUN_1407c9a0c(param_2,&local_98,&local_80);
    *(byte *)(lVar18 + 0xb4) = *(byte *)(lVar18 + 0xb4) | 0x40;
    FUN_1402c17c2(param_2,lVar18);
    plVar1 = plStack_90;
    if (plStack_90 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_90 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_90)(plStack_90);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    if (!bVar19) {
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
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1489e40b0 FUN_1489e40b0 body=599 status=ok
// SIG undefined FUN_1489e40b0(void)

char * FUN_1489e40b0(longlong *param_1,char *param_2,longlong param_3,float *param_4,int *param_5,
                    longlong param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  float fVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined1 uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong *plStack_b0;
  undefined8 local_a0;
  undefined8 local_98;
  longlong local_90;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int local_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar5 = *(longlong **)(*(longlong *)(param_3 + 0x220) + 8);
  fVar4 = *param_4;
  uVar12 = (**(code **)(*plVar5 + 0x68))(plVar5);
  param_5[2] = (int)((float)uVar12 * fVar4);
  fVar4 = param_4[1];
  uVar12 = (**(code **)(*plVar5 + 0x70))(plVar5);
  param_5[3] = (int)((float)uVar12 * fVar4);
  if (*param_5 == 2) {
    uVar11 = 0;
  }
  else {
    if (*param_5 != 1) goto LAB_1489e4182;
    FUN_1489e3a3e(param_1,param_3);
    iVar13 = *param_5;
    iVar10 = param_5[1];
    iVar6 = param_5[2];
    iVar7 = param_5[3];
    uVar8 = *(undefined8 *)(param_5 + 4);
    uVar9 = *(undefined8 *)(param_5 + 6);
    lVar14 = *(longlong *)(param_5 + 9);
    param_1[0x6c] = *(longlong *)(param_5 + 7);
    param_1[0x6d] = lVar14;
    *(undefined8 *)((longlong)param_1 + 0x354) = uVar8;
    *(undefined8 *)((longlong)param_1 + 0x35c) = uVar9;
    *(int *)((longlong)param_1 + 0x344) = iVar13;
    *(int *)(param_1 + 0x69) = iVar10;
    *(int *)((longlong)param_1 + 0x34c) = iVar6;
    *(int *)(param_1 + 0x6a) = iVar7;
    uVar11 = 1;
  }
  *(undefined1 *)(param_1 + 0x71) = uVar11;
LAB_1489e4182:
  FUN_14485c47a(param_1 + 0x67,param_3);
  local_88 = *param_5;
  iStack_84 = param_5[1];
  iStack_80 = param_5[2];
  iStack_7c = param_5[3];
  iStack_78 = param_5[4];
  iStack_74 = param_5[5];
  iStack_70 = param_5[6];
  local_6c = param_5[7];
  iStack_68 = param_5[8];
  iStack_64 = param_5[9];
  iStack_60 = param_5[10];
  (**(code **)(*param_1 + 0x248))(param_1,param_3,plVar5);
  FUN_143e8853d(param_2,plVar5,param_5);
  if (*param_2 == '\x01') {
    local_a0 = *(undefined8 *)(param_6 + 0x40);
    local_98 = *(undefined8 *)(param_6 + 0x48);
    local_90 = *(longlong *)(param_6 + 0x50);
    if (local_90 != 0) {
      LOCK();
      *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
      UNLOCK();
    }
    plVar5 = (longlong *)param_1[2];
    if (plVar5 == (longlong *)0x0) {
LAB_1489e4255:
      local_b8 = 0;
      plStack_b0 = (longlong *)0x0;
      bVar15 = true;
    }
    else {
      iVar13 = (int)plVar5[1];
      do {
        if (iVar13 == 0) goto LAB_1489e4255;
        LOCK();
        iVar10 = (int)plVar5[1];
        bVar15 = iVar13 == iVar10;
        if (bVar15) {
          *(int *)(plVar5 + 1) = iVar13 + 1;
          iVar10 = iVar13;
        }
        iVar13 = iVar10;
        UNLOCK();
      } while (!bVar15);
      lVar14 = param_1[1];
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
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      bVar15 = false;
      local_b8 = lVar14;
      plStack_b0 = plVar5;
    }
    plVar5 = plStack_b0;
    lVar14 = FUN_1407c9a0c(param_2,&local_b8,&local_a0);
    *(byte *)(lVar14 + 0xb4) = *(byte *)(lVar14 + 0xb4) | 0x40;
    FUN_1402c17c2(param_2,lVar14);
    plVar1 = plStack_b0;
    if (plStack_b0 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_b0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_b0)(plStack_b0);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    if (!bVar15) {
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
  if ((local_50 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1489e4308 FUN_1489e4308 body=200 status=ok
// SIG undefined FUN_1489e4308(void)

undefined8 FUN_1489e4308(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  cVar3 = FUN_144729dda(param_1 + 0x328);
  if (cVar3 != '\0') {
    uVar4 = FUN_14479d2ce(param_1 + 0x328);
    lVar5 = FUN_1447210f0(uVar4);
    if (lVar5 != 0) {
      *param_2 = lVar5;
      lVar5 = FUN_1449baec6(lVar5);
      if (lVar5 != 0) {
        param_2[1] = lVar5;
        lVar5 = FUN_147d80080(DAT_14cb0d2b0,*param_2);
        if (((lVar5 != 0) && (*(longlong *)(lVar5 + 0x430) != 0)) &&
           (param_2[2] = lVar5, *(longlong *)(lVar5 + 0x430) != 0)) {
          lVar6 = FUN_1449db7f2();
          lVar5 = *(longlong *)(lVar5 + 0x430);
          if (lVar5 != 0) {
            if (lVar6 == 0) {
              return 0;
            }
            lVar2 = *(longlong *)(lVar5 + 0x10);
            if (lVar2 == 0) {
              return 0;
            }
            iVar1 = *(int *)(lVar6 + 0x38);
            if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
               (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) == lVar6 + 0x30)) {
              param_2[3] = lVar5;
              return CONCAT71((int7)(int3)((uint)iVar1 >> 8),1);
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1489e43d0 FUN_1489e43d0 body=221 status=ok
// SIG undefined FUN_1489e43d0(void)

undefined8 FUN_1489e43d0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *(undefined8 *)(param_4 + 0x20);
  local_30 = *(undefined8 *)(param_4 + 0x28);
  local_28 = *(longlong **)(param_4 + 0x30);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  cVar4 = FUN_140230656(&local_38);
  if (cVar4 == '\0') {
    FUN_1489f1302(param_1 + 0x298,&local_38);
    FUN_1489e44ae(param_1,param_4,1);
  }
  else {
    FUN_1489ce796(&DAT_14cb90e48,param_4,1);
  }
  FUN_1489e4548(param_1,param_2,param_4);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489e44ae FUN_1489e44ae body=152 status=ok
// SIG undefined FUN_1489e44ae(void)

void FUN_1489e44ae(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145c4e694(local_28);
  param_1 = param_1 + 0x330;
  cVar2 = FUN_1489cfecc(param_1,0);
  if (cVar2 == '\0') {
    lVar3 = FUN_14479d2ce(param_1);
    if (*(longlong *)(*(longlong *)(lVar3 + 0x220) + 8) != 0) {
      lVar3 = FUN_14479d2ce(param_1);
      plVar1 = *(longlong **)(*(longlong *)(lVar3 + 0x220) + 8);
      local_38 = 0;
      (**(code **)(*plVar1 + 0xf0))(plVar1,local_28,0,0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489e4548 FUN_1489e4548 body=266 status=ok
// SIG undefined FUN_1489e4548(void)

undefined1 * FUN_1489e4548(longlong param_1,undefined1 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte bVar4;
  char cVar5;
  undefined1 uVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *(undefined8 *)(param_3 + 0x20);
  local_28 = *(undefined8 *)(param_3 + 0x28);
  local_20 = *(longlong **)(param_3 + 0x30);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
  }
  bVar4 = *(byte *)(param_1 + 0x31e);
  if ((bVar4 & 2) == 0) {
LAB_1489e4595:
    if ((bVar4 & 1) != 0) {
      cVar5 = FUN_140230656(&local_30);
      if (cVar5 == '\0') goto LAB_1489e463d;
    }
    uVar6 = 1;
  }
  else {
    cVar5 = FUN_140230656(&local_30);
    if (cVar5 == '\0') {
      bVar4 = *(byte *)(param_1 + 0x31e);
      goto LAB_1489e4595;
    }
LAB_1489e463d:
    uVar6 = 0;
  }
  *param_2 = uVar6;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  plVar3 = local_20;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489e4656 FUN_1489e4656 body=221 status=ok
// SIG undefined FUN_1489e4656(void)

undefined8 FUN_1489e4656(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *(undefined8 *)(param_4 + 0x20);
  local_30 = *(undefined8 *)(param_4 + 0x28);
  local_28 = *(longlong **)(param_4 + 0x30);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  cVar4 = FUN_140230656(&local_38);
  if (cVar4 == '\0') {
    FUN_1489f1302(param_1 + 0x2b0,&local_38);
    FUN_1489e44ae(param_1,param_4,2);
  }
  else {
    FUN_1489ce796(&DAT_14cb90e48,param_4,0);
  }
  FUN_1489e4548(param_1,param_2,param_4);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489e4734 FUN_1489e4734 body=56 status=ok
// SIG undefined FUN_1489e4734(void)

undefined8
FUN_1489e4734(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140f4720e(&DAT_14cb90e48,param_4);
  FUN_1489e4548(param_1,param_2,param_4);
  return param_2;
}



// FUNCTION 1489e476c FUN_1489e476c body=95 status=ok
// SIG undefined FUN_1489e476c(void)

byte * FUN_1489e476c(longlong param_1,byte *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1489e44ae(param_1,param_4,3);
  *param_2 = ~*(byte *)(param_1 + 0x31e) & 1;
  param_2[0x20] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  memset(param_2 + 0x28,0,0x88);
  param_2[0xb0] = 2;
  param_2[0xb1] = 7;
  param_2[0xb2] = 2;
  param_2[0xb3] = 0;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 1489e47d0 FUN_1489e47d0 body=136 status=ok
// SIG undefined FUN_1489e47d0(void)

undefined1 * FUN_1489e47d0(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  FUN_140898514(param_1 + 0x2e0,0);
  if (*(int *)(param_1 + 0x308) == 2) {
    FUN_1489cea92(&DAT_14cb90e48,*(undefined4 *)(param_4 + 4));
  }
  *(undefined1 *)(param_1 + 0x31c) = 1;
  FUN_145af498a(*(undefined8 *)(param_1 + 800));
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 1489e4858 FUN_1489e4858 body=168 status=ok
// SIG undefined FUN_1489e4858(void)

void FUN_1489e4858(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  
  FUN_140898514(param_1 + 0x2e0,1);
  *(undefined1 *)(param_1 + 0x31c) = 0;
  uVar1 = *(undefined4 *)(param_2 + 4);
  FUN_145afb196(&DAT_14cb90e48,uVar1);
  if (((*(int *)(param_1 + 0x300) == 0) || (*(longlong **)(param_1 + 0x2f8) == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x2f8) + 0x30))(), cVar2 == '\0')) {
    *(undefined4 *)(param_1 + 0x308) = 0;
  }
  else {
    if (*(int *)(param_1 + 0x300) == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = *(longlong **)(param_1 + 0x2f8);
    }
    uVar3 = (**(code **)(*plVar4 + 0x58))(plVar4,uVar1);
    *(uint *)(param_1 + 0x308) = uVar3;
    if ((uVar3 & 0xfffffffd) != 0) goto LAB_1489e48e8;
  }
  FUN_145afb2c0(&DAT_14cb90e48,uVar1);
LAB_1489e48e8:
  FUN_145af498a(*(undefined8 *)(param_1 + 800),0);
  return;
}



// FUNCTION 1489e4902 FUN_1489e4902 body=227 status=ok
// SIG undefined FUN_1489e4902(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1489e4902(void)

{
  _DAT_14cb912e0 = 0x78000000000;
  DAT_14cb912e8 = 0x438;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0x30))
            (DAT_14c8407a8,L"gbx.ui.scale",&DAT_14cb912e0,
             L"Global scale multiplier for cohtml widgets. 0 disables",0);
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0x38))
            (DAT_14c8407a8,L"gbx.ui.scale.max.w",&DAT_14cb912e4,
             L"Max width to allow before scaling.",0);
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0x38))
            (DAT_14c8407a8,L"gbx.ui.scale.max.h",&DAT_14cb912e8,
             L"Max height to allow before scaling.",0);
  return;
}



// FUNCTION 1489e4a04 FUN_1489e4a04 body=126 status=ok
// SIG undefined FUN_1489e4a04(void)

undefined8 * FUN_1489e4a04(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  param_1[4] = 0;
  iVar1 = (int)param_2[1];
  _Src = (void *)*param_2;
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],_Src,(longlong)iVar1 * 2);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 1489e4a82 FUN_1489e4a82 body=30 status=ok
// SIG undefined FUN_1489e4a82(void)

undefined8 FUN_1489e4a82(undefined8 param_1,undefined8 param_2)

{
  FUN_1489e4aa0();
  return param_2;
}



// FUNCTION 1489e4aa0 FUN_1489e4aa0 body=966 status=ok
// SIG undefined FUN_1489e4aa0(void)

undefined1 *
FUN_1489e4aa0(longlong param_1,undefined1 *param_2,longlong param_3,longlong param_4,int param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 uVar10;
  char cVar11;
  int iVar12;
  undefined8 uVar13;
  longlong lVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  longlong *plStack_180;
  undefined8 local_178;
  undefined8 local_170;
  longlong local_168;
  int local_160;
  int iStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 local_150;
  char local_148 [8];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 local_128;
  undefined1 local_120 [136];
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x238) + 8);
  if ((lVar14 == 0) || (*(char *)(param_1 + 0x26c) != '\x01')) {
    *param_2 = 0;
  }
  else {
    if ((((param_5 != 0) || (*(float *)(param_4 + 0x30) != 0.0)) ||
        (NAN(*(float *)(param_4 + 0x30)))) ||
       ((*(float *)(param_4 + 0x34) != 0.0 || (NAN(*(float *)(param_4 + 0x34)))))) {
      fVar16 = *(float *)(param_1 + 0x2c4) * *(float *)(param_1 + 0x264);
      fVar4 = *(float *)(param_4 + 0x20);
      fVar5 = *(float *)(param_4 + 0x24);
      fVar20 = 1.0 / (*(float *)(param_3 + 0x1c) * *(float *)(param_3 + 0x28) -
                     *(float *)(param_3 + 0x24) * *(float *)(param_3 + 0x20));
      fVar18 = *(float *)(param_3 + 0x1c) * fVar20;
      fVar17 = -*(float *)(param_3 + 0x24) * fVar20;
      fVar19 = -*(float *)(param_3 + 0x20) * fVar20;
      fVar20 = fVar20 * *(float *)(param_3 + 0x28);
      fVar6 = *(float *)(param_3 + 0x30);
      fVar7 = *(float *)(param_3 + 0x2c);
      FUN_1489d1041(&local_160,param_4,param_5);
      local_160 = (int)((fVar20 * fVar4 + fVar17 * fVar5 + (-fVar7 * fVar20 - fVar6 * fVar17)) *
                       fVar16);
      iStack_15c = (int)((fVar19 * fVar4 + fVar18 * fVar5 + (-fVar7 * fVar19 - fVar18 * fVar6)) *
                        fVar16);
      if (param_5 == 2) {
        uVar10 = 0;
LAB_1489e4cf6:
        *(undefined1 *)(param_1 + 0x2b5) = uVar10;
      }
      else if (param_5 == 1) {
        *(undefined8 *)(param_1 + 0x2ac) = local_150;
        *(int *)(param_1 + 0x29c) = local_160;
        *(int *)(param_1 + 0x2a0) = iStack_15c;
        *(undefined4 *)(param_1 + 0x2a4) = uStack_158;
        *(undefined4 *)(param_1 + 0x2a8) = uStack_154;
        uVar10 = 1;
        goto LAB_1489e4cf6;
      }
      uVar13 = FUN_1489e4ea4(param_1);
      cVar11 = FUN_1489d107d(lVar14,uVar13,&local_160);
      local_128 = 0;
      local_140 = 0;
      uStack_138 = 0;
      local_148[0] = cVar11;
      memset(local_120,0,0x88);
      local_98 = 0x20702;
      if (cVar11 == '\0') {
        FUN_1428fd920(param_2,local_148);
      }
      else {
        local_178 = *(undefined8 *)(param_4 + 0x40);
        local_170 = *(undefined8 *)(param_4 + 0x48);
        local_168 = *(longlong *)(param_4 + 0x50);
        if (local_168 != 0) {
          LOCK();
          *(int *)(local_168 + 8) = *(int *)(local_168 + 8) + 1;
          UNLOCK();
        }
        plVar8 = *(longlong **)(param_1 + 0x10);
        if (plVar8 == (longlong *)0x0) {
LAB_1489e4de0:
          local_188 = 0;
          plStack_180 = (longlong *)0x0;
          bVar15 = true;
        }
        else {
          iVar12 = (int)plVar8[1];
          do {
            if (iVar12 == 0) goto LAB_1489e4de0;
            LOCK();
            iVar9 = (int)plVar8[1];
            bVar15 = iVar12 == iVar9;
            if (bVar15) {
              *(int *)(plVar8 + 1) = iVar12 + 1;
              iVar9 = iVar12;
            }
            iVar12 = iVar9;
            UNLOCK();
          } while (!bVar15);
          uVar13 = *(undefined8 *)(param_1 + 8);
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
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
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          bVar15 = false;
          local_188 = uVar13;
          plStack_180 = plVar8;
        }
        plVar8 = plStack_180;
        lVar14 = FUN_1407c9a0c(local_148,&local_188,&local_178);
        *(byte *)(lVar14 + 0xb4) = *(byte *)(lVar14 + 0xb4) | 0x40;
        FUN_1403d4c6e(param_2,lVar14);
        plVar1 = plStack_180;
        if (plStack_180 != (longlong *)0x0) {
          LOCK();
          plVar3 = plStack_180 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plStack_180)(plStack_180);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        if (!bVar15) {
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
      }
      FUN_14493db24(local_148);
      goto LAB_1489e4b81;
    }
    *param_2 = 1;
  }
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_1489e4b81:
  if ((local_90 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1489e4e68 FUN_1489e4e68 body=30 status=ok
// SIG undefined FUN_1489e4e68(void)

undefined8 FUN_1489e4e68(undefined8 param_1,undefined8 param_2)

{
  FUN_1489e4aa0();
  return param_2;
}



// FUNCTION 1489e4e86 FUN_1489e4e86 body=30 status=ok
// SIG undefined FUN_1489e4e86(void)

undefined8 FUN_1489e4e86(undefined8 param_1,undefined8 param_2)

{
  FUN_1489e4aa0();
  return param_2;
}



// FUNCTION 1489e4ea4 FUN_1489e4ea4 body=98 status=ok
// SIG undefined FUN_1489e4ea4(void)

longlong FUN_1489e4ea4(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x240);
  if (lVar1 == 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar2 = &PTR_FUN_14b454190;
    puVar2[1] = 0;
    puVar2[2] = 0;
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined8 **)(param_1 + 0x240) = puVar2;
    }
    FUN_1489cc4f4(puVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 8));
    lVar1 = *(longlong *)(param_1 + 0x240);
  }
  return lVar1;
}



// FUNCTION 1489e4f06 FUN_1489e4f06 body=309 status=ok
// SIG undefined FUN_1489e4f06(void)

void FUN_1489e4f06(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  void *_Src;
  undefined1 auStack_e8 [32];
  longlong local_c8 [2];
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined1 local_a8 [72];
  void *local_60;
  int local_58;
  longlong *local_50;
  undefined1 *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  FUN_1400b22c2(&local_60,param_3);
  _Src = local_60;
  local_b8 = (void *)0x0;
  local_b0 = local_58;
  if ((longlong)local_58 == 0) {
    local_ac = 0;
  }
  else {
    FUN_1446dd670(&local_b8,local_58,0);
    memcpy(local_b8,_Src,(longlong)local_58 * 2);
  }
  FUN_1489e4a04(local_a8,&local_b8);
  FUN_1400b22c2(local_c8,param_3);
  local_50 = local_c8;
  local_48 = local_a8;
  FUN_1489f1878(param_1 + 0x130,local_3c);
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1489c9ef6(local_a8);
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489e503c FUN_1489e503c body=167 status=ok
// SIG undefined FUN_1489e503c(void)

void FUN_1489e503c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  undefined1 local_49;
  longlong *local_48;
  undefined1 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_49 = param_5;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  FUN_1400b22c2(local_60,param_3);
  local_48 = local_60;
  local_40 = &local_49;
  FUN_1489d8024(param_1 + 0x180,local_34,&local_48,0);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489e50e4 FUN_1489e50e4 body=182 status=ok
// SIG undefined FUN_1489e50e4(void)

void FUN_1489e50e4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  FUN_1400b22c2(local_40,param_3);
  FUN_1489f1e26(param_1 + 0x130,local_40);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_40,param_3);
  FUN_1489d8330(param_1 + 0xd8,local_40);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489e519c FUN_1489e519c body=38 status=ok
// SIG undefined FUN_1489e519c(void)

undefined8 FUN_1489e519c(undefined8 param_1,int param_2)

{
  FUN_1489dd284();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489e51c2 FUN_1489e51c2 body=38 status=ok
// SIG undefined FUN_1489e51c2(void)

undefined8 FUN_1489e51c2(undefined8 param_1,int param_2)

{
  FUN_1489f1fd2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489e51f0 FUN_1489e51f0 body=38 status=ok
// SIG undefined FUN_1489e51f0(void)

undefined8 FUN_1489e51f0(undefined8 param_1,int param_2)

{
  FUN_144760f98();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489e5216 FUN_1489e5216 body=55 status=ok
// SIG undefined FUN_1489e5216(void)

undefined8 * FUN_1489e5216(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b454b90;
  FUN_1489e9928(param_1 + 0x24);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489e5256 FUN_1489e5256 body=55 status=ok
// SIG undefined FUN_1489e5256(void)

undefined8 * FUN_1489e5256(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b454b90;
  FUN_1489e9928(param_1 + 0x24);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489e5294 FUN_1489e5294 body=55 status=ok
// SIG undefined FUN_1489e5294(void)

undefined8 * FUN_1489e5294(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b454b90;
  FUN_1489e9928(param_1 + 0x24);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489e52d0 FUN_1489e52d0 body=38 status=ok
// SIG undefined FUN_1489e52d0(void)

undefined8 FUN_1489e52d0(undefined8 param_1,int param_2)

{
  FUN_1489e265c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489e52fa FUN_1489e52fa body=32 status=ok
// SIG undefined FUN_1489e52fa(void)

undefined8 FUN_1489e52fa(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FCoherentSlateElement");
  return param_2;
}



// FUNCTION 1489e531a FUN_1489e531a body=38 status=ok
// SIG undefined FUN_1489e531a(void)

undefined8 FUN_1489e531a(undefined8 param_1,int param_2)

{
  FUN_1413d7d8a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489e5348 FUN_1489e5348 body=59 status=ok
// SIG undefined FUN_1489e5348(void)

void FUN_1489e5348(longlong *param_1)

{
  FUN_1447a1747(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1489e5384 FUN_1489e5384 body=132 status=ok
// SIG undefined FUN_1489e5384(void)

void FUN_1489e5384(longlong param_1,int param_2)

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



// FUNCTION 1489e540a FUN_1489e540a body=73 status=ok
// SIG undefined FUN_1489e540a(void)

void FUN_1489e540a(longlong *param_1)

{
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_1418b5f4f(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1489e5454 FUN_1489e5454 body=132 status=ok
// SIG undefined FUN_1489e5454(void)

void FUN_1489e5454(longlong param_1,int param_2)

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



// FUNCTION 1489e54da FUN_1489e54da body=217 status=ok
// SIG undefined FUN_1489e54da(void)

undefined8 * FUN_1489e54da(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1409e00a6(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  uVar3 = param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1418b5e0e(param_1 + 2,iVar1);
    FUN_1418b5ee3(param_1[2],uVar3,iVar1);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1473ad136(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 1489e55b4 FUN_1489e55b4 body=147 status=ok
// SIG undefined FUN_1489e55b4(void)

void FUN_1489e55b4(longlong param_1,int param_2)

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



// FUNCTION 1489e5648 FUN_1489e5648 body=110 status=ok
// SIG undefined FUN_1489e5648(void)

longlong FUN_1489e5648(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar2 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x10);
    plVar1 = (longlong *)(param_1 + 0x20);
    lVar6 = 0;
    do {
      uVar4 = *(undefined8 *)(lVar5 + lVar6);
      iVar3 = *(int *)(param_1 + 0x28);
      *(uint *)(param_1 + 0x28) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x2c) < iVar3 + 1U) {
        FUN_140ca86cc(plVar1,iVar3);
      }
      *(undefined8 *)(*plVar1 + (longlong)iVar3 * 8) = uVar4;
      lVar6 = lVar6 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar6);
    lVar5 = *plVar1;
  }
  return lVar5;
}



// FUNCTION 1489e56b6 FUN_1489e56b6 body=147 status=ok
// SIG undefined FUN_1489e56b6(void)

void FUN_1489e56b6(longlong param_1,int param_2)

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



// FUNCTION 1489e574a FUN_1489e574a body=62 status=ok
// SIG undefined FUN_1489e574a(void)

undefined8 FUN_1489e574a(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x240))(param_2,param_1[1]);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3);
  }
  return param_3;
}



// FUNCTION 1489e5788 FUN_1489e5788 body=136 status=ok
// SIG undefined FUN_1489e5788(void)

longlong FUN_1489e5788(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 8);
    lVar2 = FUN_1446dcc8c();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
    }
    else {
      bVar4 = (*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0;
    }
    lVar3 = 0;
    if (bVar4) {
      lVar3 = lVar1;
    }
  }
  FUN_1489dc9e2(param_2,*(int *)(lVar3 + 0x44) + param_3,*(undefined8 *)(lVar3 + 0x70));
  return param_3;
}



// FUNCTION 1489e5882 FUN_1489e5882 body=304 status=ok
// SIG undefined FUN_1489e5882(void)

bool FUN_1489e5882(longlong param_1,longlong *param_2,longlong param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  uVar1 = *(uint *)(lVar3 + 0x30);
  if (1 < uVar1) {
    plVar5 = (longlong *)FUN_1489e59be(param_1,param_3);
    *plVar5 = param_3;
    plVar5[1] = lVar3;
    uVar4 = (**(code **)(*param_2 + 0x88))(param_2);
    (**(code **)(*param_2 + 0x80))(param_2,4);
    iVar2 = *(int *)(lVar3 + 0x44);
    lVar3 = *(longlong *)(param_1 + 0x18);
    if (lVar3 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(longlong *)(lVar3 + 8);
      lVar6 = FUN_1446dcc8c();
      if (*(ulonglong *)(lVar6 + 8) == 0) {
        bVar9 = lVar8 != 0;
        if (lVar8 != lVar6 && bVar9) {
          do {
            lVar8 = *(longlong *)(lVar8 + 0x30);
            bVar9 = lVar8 != 0;
            if (lVar8 == lVar6) break;
          } while (lVar8 != 0);
        }
      }
      else {
        bVar9 = (*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar6 + 8)) != 0;
      }
      lVar8 = 0;
      if (bVar9) {
        lVar8 = lVar3;
      }
    }
    FUN_1401e1be1(param_2,iVar2 + param_3,*(undefined8 *)(lVar8 + 0x70));
    (**(code **)(*param_2 + 0x80))(param_2,uVar4);
    uVar7 = (**(code **)(*param_2 + 0x40))(param_2);
    uVar4 = FUN_1489dbb60();
    *param_4 = uVar4;
    *(undefined1 **)(param_4 + 2) = &LAB_143e9109a;
    *(code **)(param_4 + 4) = FUN_143e9dc4a;
    *(undefined8 *)(param_4 + 6) = uVar7;
    *(longlong **)(param_4 + 8) = plVar5;
  }
  return 1 < uVar1;
}



// FUNCTION 1489e59be FUN_1489e59be body=234 status=ok
// SIG undefined FUN_1489e59be(void)

longlong FUN_1489e59be(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)(param_1 + 0x30);
  local_30 = param_2;
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar4 = param_1 + 0x68;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x70);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x78) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar3 != -1) {
      do {
        lVar4 = *plVar1 + (longlong)iVar3 * 0x20;
        if (*(ulonglong *)(*plVar1 + (longlong)iVar3 * 0x20) == param_2) {
          if (lVar4 != 0) goto LAB_1489e5a8b;
          break;
        }
        iVar3 = *(int *)(lVar4 + 0x18);
      } while (iVar3 != -1);
    }
  }
  local_28 = &local_30;
  FUN_1489e5be6(plVar1,&local_1c);
  lVar4 = (longlong)local_1c * 0x20 + *plVar1;
LAB_1489e5a8b:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4 + 8;
}



// FUNCTION 1489e5aaa FUN_1489e5aaa body=157 status=ok
// SIG undefined FUN_1489e5aaa(void)

void FUN_1489e5aaa(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar2 = FUN_143e9dc4a(param_2,param_3);
  if (lVar2 == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_2 + 8);
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(lVar1 + 8);
    lVar3 = FUN_1446dcc8c();
    if (*(ulonglong *)(lVar3 + 8) == 0) {
      bVar5 = lVar4 != 0;
      if (lVar4 != lVar3 && bVar5) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar5 = lVar4 != 0;
          if (lVar4 == lVar3) break;
        } while (lVar4 != 0);
      }
    }
    else {
      bVar5 = (*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0;
    }
    lVar4 = 0;
    if (bVar5) {
      lVar4 = lVar1;
    }
  }
  FUN_1489dc9e2(param_1,lVar2,*(undefined8 *)(lVar4 + 0x70));
  return;
}



// FUNCTION 1489e5b48 FUN_1489e5b48 body=158 status=ok
// SIG undefined FUN_1489e5b48(void)

void FUN_1489e5b48(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar2 = FUN_143e9dc4a(param_2,param_3);
  if (lVar2 == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_2 + 8);
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(lVar1 + 8);
    lVar3 = FUN_1446dcc8c();
    if (*(ulonglong *)(lVar3 + 8) == 0) {
      bVar5 = lVar4 != 0;
      if (lVar4 != lVar3 && bVar5) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar5 = lVar4 != 0;
          if (lVar4 == lVar3) break;
        } while (lVar4 != 0);
      }
    }
    else {
      bVar5 = (*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0;
    }
    lVar4 = 0;
    if (bVar5) {
      lVar4 = lVar1;
    }
  }
  FUN_1401e1be1(param_1,lVar2,*(undefined8 *)(lVar4 + 0x70));
  return;
}



// FUNCTION 1489e5be6 FUN_1489e5be6 body=322 status=ok
// SIG undefined FUN_1489e5be6(void)

undefined4 * FUN_1489e5be6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1489e5d2a(param_1,local_48);
  uVar5 = *(ulonglong *)*param_3;
  *local_40 = uVar5;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_1489e5e10(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0x1c) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1489e5f0c(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489e5d2a FUN_1489e5d2a body=229 status=ok
// SIG undefined FUN_1489e5d2a(void)

int * FUN_1489e5d2a(longlong *param_1,int *param_2)

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



// FUNCTION 1489e5e10 FUN_1489e5e10 body=137 status=ok
// SIG undefined FUN_1489e5e10(void)

undefined8 FUN_1489e5e10(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_1489e5e9a((int)lVar4,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 1489e5e9a FUN_1489e5e9a body=114 status=ok
// SIG undefined FUN_1489e5e9a(void)

void FUN_1489e5e9a(longlong *param_1,int param_2)

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



// FUNCTION 1489e5f0c FUN_1489e5f0c body=477 status=ok
// SIG undefined FUN_1489e5f0c(void)

void FUN_1489e5f0c(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
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
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x1c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 1489e61ce FUN_1489e61ce body=39 status=ok
// SIG undefined FUN_1489e61ce(void)

void * FUN_1489e61ce(void *param_1,int param_2)

{
  FUN_145887d1a();
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 1489e61f6 FUN_1489e61f6 body=94 status=ok
// SIG undefined FUN_1489e61f6(void)

undefined8 * FUN_1489e61f6(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x80);
  FUN_140841c04(puVar1,param_1);
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 100) = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  *puVar1 = &PTR_FUN_14b455830;
  return puVar1;
}



// FUNCTION 1489e6254 FUN_1489e6254 body=228 status=ok
// SIG undefined FUN_1489e6254(void)

undefined8 FUN_1489e6254(longlong param_1,longlong param_2,float *param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x44);
  lVar10 = (longlong)iVar5;
  dVar6 = *(double *)(param_2 + lVar10);
  dVar7 = ((double *)(param_2 + lVar10))[1];
  dVar2 = *(double *)(param_2 + 0x10 + lVar10);
  dVar13 = dVar2 * (dVar2 + dVar2);
  pdVar1 = (double *)(param_2 + 0x40 + lVar10);
  dVar8 = *pdVar1;
  dVar9 = pdVar1[1];
  dVar11 = (dVar7 + dVar7) * dVar6;
  dVar12 = (dVar2 + dVar2) * *(double *)(param_2 + 0x18 + lVar10);
  dVar2 = *(double *)(param_2 + 0x48 + lVar10);
  dVar3 = *(double *)(param_2 + 0x20 + lVar10);
  dVar4 = *(double *)(param_2 + 0x28 + lVar10);
  *param_3 = (float)((1.0 - (dVar13 + dVar7 * (dVar7 + dVar7))) * dVar8);
  param_3[1] = (float)((dVar12 + dVar11) * dVar8);
  param_3[2] = (float)((dVar11 - dVar12) * dVar2);
  param_3[3] = (float)((1.0 - (dVar13 + dVar6 * (dVar6 + dVar6))) * dVar9);
  param_3[4] = (float)dVar3;
  param_3[5] = (float)dVar4;
  return CONCAT71((int7)(int3)((uint)iVar5 >> 8),1);
}



// FUNCTION 1489e6338 FUN_1489e6338 body=39 status=ok
// SIG undefined FUN_1489e6338(void)

void * FUN_1489e6338(void *param_1,int param_2)

{
  FUN_1489e6812();
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 1489e6360 FUN_1489e6360 body=335 status=ok
// SIG undefined FUN_1489e6360(void)

longlong FUN_1489e6360(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (lVar2 == 0) {
    lVar2 = 0;
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(lVar2 + 8);
    lVar3 = FUN_144a810c6();
    if (*(ulonglong *)(lVar3 + 8) == 0) {
      bVar7 = lVar5 != 0;
      if (lVar5 != lVar3 && bVar7) {
        do {
          lVar5 = *(longlong *)(lVar5 + 0x30);
          bVar7 = lVar5 != 0;
          if (lVar5 == lVar3) break;
        } while (lVar5 != 0);
      }
    }
    else {
      bVar7 = (*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0;
    }
    lVar5 = 0;
    if (bVar7) {
      lVar5 = lVar2;
    }
    lVar2 = *(longlong *)(param_1 + 0x18);
  }
  if (*(uint *)(lVar2 + 0x30) < 2) {
    FUN_1489dc917(param_2,*(undefined8 *)(param_3 + *(int *)(lVar5 + 0x44)),
                  *(undefined8 *)(lVar5 + 0x70));
  }
  else {
    plVar4 = (longlong *)FUN_1489e686e(param_1,param_3);
    *plVar4 = param_3;
    plVar4[1] = *(longlong *)(param_1 + 0x18);
    cVar1 = (**(code **)(*param_2 + 0x158))
                      (param_2,plVar4,FUN_1489e69f8,FUN_1489e695a,&LAB_143e9109a,FUN_143e9de0a);
    if (cVar1 == '\0') {
      (**(code **)(*param_2 + 0x160))
                (param_2,(longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 0x30));
      lVar2 = *(longlong *)(param_1 + 0x18);
      if (0 < *(int *)(lVar2 + 0x30)) {
        iVar6 = 0;
        do {
          FUN_1489dc917(param_2,*(undefined8 *)
                                 ((longlong)*(int *)(lVar2 + 0x34) * (longlong)iVar6 +
                                 *(int *)(lVar5 + 0x44) + param_3),*(undefined8 *)(lVar5 + 0x70));
          iVar6 = iVar6 + 1;
          lVar2 = *(longlong *)(param_1 + 0x18);
        } while (iVar6 < *(int *)(lVar2 + 0x30));
      }
      (**(code **)(*param_2 + 0x168))(param_2);
    }
  }
  return param_3;
}



// FUNCTION 1489e64b0 FUN_1489e64b0 body=137 status=ok
// SIG undefined FUN_1489e64b0(void)

longlong FUN_1489e64b0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 8);
    lVar2 = FUN_144a810c6();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
    }
    else {
      bVar4 = (*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0;
    }
    lVar3 = 0;
    if (bVar4) {
      lVar3 = lVar1;
    }
  }
  FUN_143e9155f(param_2,*(undefined8 *)(param_3 + *(int *)(lVar3 + 0x44)),
                *(undefined8 *)(lVar3 + 0x70));
  return param_3;
}



// FUNCTION 1489e653a FUN_1489e653a body=94 status=ok
// SIG undefined FUN_1489e653a(void)

undefined8 * FUN_1489e653a(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x80);
  FUN_140841c04(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b4558c0;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 100) = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  return puVar1;
}



// FUNCTION 1489e6598 FUN_1489e6598 body=294 status=ok
// SIG undefined FUN_1489e6598(void)

bool FUN_1489e6598(longlong param_1,longlong *param_2,longlong param_3,undefined4 *param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  bool bVar8;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  uVar1 = *(uint *)(lVar2 + 0x30);
  if (1 < uVar1) {
    plVar4 = (longlong *)FUN_1489e686e(param_1,param_3);
    *plVar4 = param_3;
    plVar4[1] = lVar2;
    lVar2 = *(longlong *)(param_1 + 0x18);
    if (lVar2 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = *(longlong *)(lVar2 + 8);
      lVar5 = FUN_144a810c6();
      if (*(ulonglong *)(lVar5 + 8) == 0) {
        bVar8 = lVar7 != 0;
        if (lVar7 != lVar5 && bVar8) {
          do {
            lVar7 = *(longlong *)(lVar7 + 0x30);
            bVar8 = lVar7 != 0;
            if (lVar7 == lVar5) break;
          } while (lVar7 != 0);
        }
      }
      else {
        bVar8 = (*(ulonglong *)(lVar7 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0;
      }
      lVar7 = 0;
      if (bVar8) {
        lVar7 = lVar2;
      }
    }
    uVar3 = (**(code **)(*param_2 + 0x88))(param_2);
    (**(code **)(*param_2 + 0x80))(param_2,4);
    FUN_1489dc917(param_2,*(undefined8 *)(param_3 + *(int *)(lVar7 + 0x44)),
                  *(undefined8 *)(lVar7 + 0x70));
    (**(code **)(*param_2 + 0x80))(param_2,uVar3);
    uVar6 = (**(code **)(*param_2 + 0x40))(param_2);
    uVar3 = FUN_1489dbb60();
    *param_4 = uVar3;
    *(undefined1 **)(param_4 + 2) = &LAB_143e9109a;
    *(code **)(param_4 + 4) = FUN_143e9de0a;
    *(undefined8 *)(param_4 + 6) = uVar6;
    *(longlong **)(param_4 + 8) = plVar4;
  }
  return 1 < uVar1;
}



// FUNCTION 1489e66be FUN_1489e66be body=223 status=ok
// SIG undefined FUN_1489e66be(void)

undefined8 FUN_1489e66be(longlong *param_1,longlong *param_2,longlong param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  uVar3 = (**(code **)(*param_2 + 0x88))(param_2);
  (**(code **)(*param_2 + 0x80))(param_2,4);
  (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3);
  (**(code **)(*param_2 + 0x80))(param_2,uVar3);
  uVar4 = (**(code **)(*param_2 + 0x40))(param_2);
  lVar1 = param_1[3];
  if (lVar1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(longlong *)(lVar1 + 8);
    lVar5 = FUN_144a810c6();
    if (*(ulonglong *)(lVar5 + 8) == 0) {
      bVar7 = lVar6 != 0;
      if (lVar6 != lVar5 && bVar7) {
        do {
          lVar6 = *(longlong *)(lVar6 + 0x30);
          bVar7 = lVar6 != 0;
          if (lVar6 == lVar5) break;
        } while (lVar6 != 0);
      }
    }
    else {
      bVar7 = (*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0;
    }
    lVar6 = 0;
    if (bVar7) {
      lVar6 = lVar1;
    }
  }
  uVar2 = *(undefined8 *)(param_3 + *(int *)(lVar6 + 0x44));
  uVar3 = FUN_1489dbb60();
  *param_4 = uVar3;
  *(undefined8 *)(param_4 + 2) = uVar4;
  *(undefined8 *)(param_4 + 4) = uVar2;
  return 1;
}



// FUNCTION 1489e679e FUN_1489e679e body=115 status=ok
// SIG undefined FUN_1489e679e(void)

undefined8 FUN_1489e679e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 8);
    lVar2 = FUN_144a810c6();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
    }
    else {
      bVar4 = (*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0;
    }
    lVar3 = 0;
    if (bVar4) {
      lVar3 = lVar1;
    }
  }
  return *(undefined8 *)(param_2 + *(int *)(lVar3 + 0x44));
}



// FUNCTION 1489e6812 FUN_1489e6812 body=92 status=ok
// SIG undefined FUN_1489e6812(void)

void FUN_1489e6812(Property *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_14b4558c0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_140066d2a(param_1 + 0x30);
  *(undefined ***)param_1 = &PTR_LAB_14b455710;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x0001489e6867. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  cohtml::Property::~Property(param_1);
  return;
}



// FUNCTION 1489e686e FUN_1489e686e body=234 status=ok
// SIG undefined FUN_1489e686e(void)

longlong FUN_1489e686e(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)(param_1 + 0x30);
  local_30 = param_2;
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar4 = param_1 + 0x68;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x70);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x78) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar3 != -1) {
      do {
        lVar4 = *plVar1 + (longlong)iVar3 * 0x20;
        if (*(ulonglong *)(*plVar1 + (longlong)iVar3 * 0x20) == param_2) {
          if (lVar4 != 0) goto LAB_1489e693b;
          break;
        }
        iVar3 = *(int *)(lVar4 + 0x18);
      } while (iVar3 != -1);
    }
  }
  local_28 = &local_30;
  FUN_1489e5be6(plVar1,&local_1c);
  lVar4 = (longlong)local_1c * 0x20 + *plVar1;
LAB_1489e693b:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4 + 8;
}



// FUNCTION 1489e695a FUN_1489e695a body=158 status=ok
// SIG undefined FUN_1489e695a(void)

void FUN_1489e695a(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar2 = FUN_143e9de0a(param_2,param_3);
  if (lVar2 == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_2 + 8);
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(lVar1 + 8);
    lVar3 = FUN_144a810c6();
    if (*(ulonglong *)(lVar3 + 8) == 0) {
      bVar5 = lVar4 != 0;
      if (lVar4 != lVar3 && bVar5) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar5 = lVar4 != 0;
          if (lVar4 == lVar3) break;
        } while (lVar4 != 0);
      }
    }
    else {
      bVar5 = (*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0;
    }
    lVar4 = 0;
    if (bVar5) {
      lVar4 = lVar1;
    }
  }
  FUN_143e9155f(param_1,lVar2,*(undefined8 *)(lVar4 + 0x70));
  return;
}



// FUNCTION 1489e69f8 FUN_1489e69f8 body=157 status=ok
// SIG undefined FUN_1489e69f8(void)

void FUN_1489e69f8(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar2 = FUN_143e9de0a(param_2,param_3);
  if (lVar2 == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_2 + 8);
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(lVar1 + 8);
    lVar3 = FUN_144a810c6();
    if (*(ulonglong *)(lVar3 + 8) == 0) {
      bVar5 = lVar4 != 0;
      if (lVar4 != lVar3 && bVar5) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar5 = lVar4 != 0;
          if (lVar4 == lVar3) break;
        } while (lVar4 != 0);
      }
    }
    else {
      bVar5 = (*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0;
    }
    lVar4 = 0;
    if (bVar5) {
      lVar4 = lVar1;
    }
  }
  FUN_1489dc917(param_1,lVar2,*(undefined8 *)(lVar4 + 0x70));
  return;
}



// FUNCTION 1489e6a96 FUN_1489e6a96 body=78 status=ok
// SIG undefined FUN_1489e6a96(void)

undefined8 FUN_1489e6a96(longlong param_1,longlong *param_2,undefined8 param_3)

{
  (**(code **)(*param_2 + 0xa8))(param_2,*(undefined8 *)(param_1 + 8));
  if (*(longlong *)(param_1 + 0x30) == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  else {
    FUN_1418b5f7a(param_1,param_2,param_3);
  }
  return param_3;
}



// FUNCTION 1489e6ae4 FUN_1489e6ae4 body=63 status=ok
// SIG undefined FUN_1489e6ae4(void)

undefined8 FUN_1489e6ae4(longlong param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x240))(param_2,*(undefined8 *)(param_1 + 8));
  if (cVar1 != '\0') {
    FUN_1489e6b24(param_1,param_2,param_3);
  }
  return param_3;
}



// FUNCTION 1489e6b24 FUN_1489e6b24 body=457 status=ok
// SIG undefined FUN_1489e6b24(void)

longlong FUN_1489e6b24(longlong param_1,longlong *param_2,longlong param_3)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong *local_50;
  int local_48;
  undefined4 local_44;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    lVar7 = plVar3[1];
    lVar4 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar4 + 8) == 0) {
      bVar10 = lVar7 != 0;
      if (lVar7 != lVar4 && bVar10) {
        do {
          lVar7 = *(longlong *)(lVar7 + 0x30);
          bVar10 = lVar7 != 0;
          if (lVar7 == lVar4) break;
        } while (lVar7 != 0);
      }
    }
    else {
      bVar10 = (*(ulonglong *)(lVar7 + 0x18) & *(ulonglong *)(lVar4 + 8)) != 0;
    }
    plVar8 = (longlong *)0x0;
    if (bVar10) {
      plVar8 = plVar3;
    }
  }
  if ((*(byte *)((longlong)plVar8 + 0x39) & 2) == 0) {
    (**(code **)(*plVar8 + 0x160))(plVar8,*(int *)((longlong)plVar8 + 0x44) + param_3);
  }
  else {
    memset((void *)(*(int *)((longlong)plVar8 + 0x44) + param_3),0,
           (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
  }
  iVar2 = *(int *)((longlong)plVar8 + 0x44);
  bVar1 = *(byte *)(plVar8 + 0xe);
  local_44 = (**(code **)(*(longlong *)plVar8[0xf] + 0x178))();
  local_58 = plVar8[0xf];
  local_48 = *(int *)(local_58 + 0x34);
  local_50 = (ulonglong *)(iVar2 + param_3);
  local_40 = bVar1;
  uVar5 = (**(code **)(*param_2 + 0x250))(param_2);
  if (uVar5 != 0) {
    FUN_144a8a902(&local_58,uVar5 & 0xffffffff);
    uVar9 = 1;
    uVar6 = 0;
    do {
      (**(code **)(*param_2 + 600))(param_2,uVar6);
      if ((int)local_50[1] == 0) {
        lVar7 = 0;
      }
      else {
        if ((local_40 & 1) == 0) {
          uVar6 = *local_50;
        }
        else {
          uVar6 = *local_50;
          if ((uVar6 & 1) != 0) {
            uVar6 = (longlong)local_50 + ((longlong)uVar6 >> 0x18);
          }
        }
        lVar7 = (longlong)local_48 * (longlong)(int)(uVar9 - 1) + uVar6;
      }
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x20))
                (*(longlong **)(param_1 + 0x30),param_2,lVar7);
      uVar6 = (ulonglong)uVar9;
      uVar9 = uVar9 + 1;
    } while (uVar6 < uVar5);
  }
  (**(code **)(*param_2 + 0x260))(param_2);
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_3;
}



// FUNCTION 1489e6cee FUN_1489e6cee body=114 status=ok
// SIG undefined FUN_1489e6cee(void)

void FUN_1489e6cee(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
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



// FUNCTION 1489e6d60 FUN_1489e6d60 body=85 status=ok
// SIG undefined FUN_1489e6d60(void)

undefined8 FUN_1489e6d60(longlong param_1,longlong *param_2,undefined8 param_3)

{
  (**(code **)(*param_2 + 0xa8))(param_2,*(undefined8 *)(param_1 + 8));
  if ((*(longlong *)(param_1 + 0x30) == 0) || (*(longlong *)(param_1 + 0x38) == 0)) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  else {
    FUN_1489e6db6(param_1,param_2,param_3);
  }
  return param_3;
}



// FUNCTION 1489e6db6 FUN_1489e6db6 body=428 status=ok
// SIG undefined FUN_1489e6db6(void)

longlong FUN_1489e6db6(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  byte local_60;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(lVar1 + 8);
    lVar2 = FUN_1446ebfd4();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar7 = lVar5 != 0;
      if (lVar5 != lVar2 && bVar7) {
        do {
          lVar5 = *(longlong *)(lVar5 + 0x30);
          bVar7 = lVar5 != 0;
          if (lVar5 == lVar2) break;
        } while (lVar5 != 0);
      }
    }
    else {
      bVar7 = (*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0;
    }
    lVar5 = 0;
    if (bVar7) {
      lVar5 = lVar1;
    }
  }
  lVar2 = (longlong)*(int *)(lVar5 + 0x44);
  lVar1 = param_3 + lVar2;
  local_60 = *(byte *)(lVar5 + 0x98);
  local_90 = *(undefined8 *)(lVar5 + 0x70);
  uStack_88 = *(undefined8 *)(lVar5 + 0x78);
  local_78 = *(undefined4 *)(lVar5 + 0x80);
  uStack_74 = *(undefined4 *)(lVar5 + 0x84);
  uStack_70 = *(undefined4 *)(lVar5 + 0x88);
  uStack_6c = *(undefined4 *)(lVar5 + 0x8c);
  local_68 = *(undefined8 *)(lVar5 + 0x90);
  lVar5 = (ulonglong)((local_60 & 1) == 0) * 0x10;
  local_80 = lVar1;
  (**(code **)(*param_2 + 0x170))
            (param_2,(longlong)*(int *)(param_3 + 8 + lVar2) -
                     (longlong)*(int *)(lVar5 + 0x24 + lVar1));
  if (*(int *)(lVar5 + 0x24 + lVar1) < *(int *)(param_3 + 8 + lVar2)) {
    iVar6 = 0;
    do {
      local_58 = &local_90;
      local_50 = iVar6;
      uVar3 = FUN_140005950(&local_90,&local_58);
      local_58 = &local_90;
      local_50 = iVar6;
      uVar4 = FUN_140005950(&local_90,&local_58);
      local_98 = uVar3;
      FUN_1489e72a2(param_2,param_1 + 0x30,uVar4,param_1 + 0x38);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(local_80 + 8) -
                     *(int *)(local_80 + 0x24 + (ulonglong)((local_60 & 1) == 0) * 0x10));
  }
  (**(code **)(*param_2 + 0x178))(param_2);
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_3;
}



// FUNCTION 1489e6f64 FUN_1489e6f64 body=63 status=ok
// SIG undefined FUN_1489e6f64(void)

undefined8 FUN_1489e6f64(longlong param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x240))(param_2,*(undefined8 *)(param_1 + 8));
  if (cVar1 != '\0') {
    FUN_1489e6fa4(param_1,param_2,param_3);
  }
  return param_3;
}



// FUNCTION 1489e6fa4 FUN_1489e6fa4 body=600 status=ok
// SIG undefined FUN_1489e6fa4(void)

longlong FUN_1489e6fa4(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  longlong lStack_88;
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  byte local_60;
  longlong *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    lVar5 = plVar1[1];
    lVar3 = FUN_1446ebfd4();
    if (*(ulonglong *)(lVar3 + 8) == 0) {
      bVar8 = lVar5 != 0;
      if (lVar5 != lVar3 && bVar8) {
        do {
          lVar5 = *(longlong *)(lVar5 + 0x30);
          bVar8 = lVar5 != 0;
          if (lVar5 == lVar3) break;
        } while (lVar5 != 0);
      }
    }
    else {
      bVar8 = (*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0;
    }
    plVar7 = (longlong *)0x0;
    if (bVar8) {
      plVar7 = plVar1;
    }
  }
  plVar1 = (longlong *)plVar7[0xe];
  plVar2 = (longlong *)plVar7[0xf];
  if ((*(byte *)((longlong)plVar7 + 0x39) & 2) == 0) {
    (**(code **)(*plVar7 + 0x160))(plVar7,*(int *)((longlong)plVar7 + 0x44) + param_3);
  }
  else {
    memset((void *)(*(int *)((longlong)plVar7 + 0x44) + param_3),0,
           (longlong)(int)plVar7[6] * (longlong)*(int *)((longlong)plVar7 + 0x34));
  }
  local_80 = *(int *)((longlong)plVar7 + 0x44) + param_3;
  local_60 = *(byte *)(plVar7 + 0x13);
  local_90 = plVar7[0xe];
  lStack_88 = plVar7[0xf];
  local_78 = (undefined4)plVar7[0x10];
  uStack_74 = *(undefined4 *)((longlong)plVar7 + 0x84);
  uStack_70 = (undefined4)plVar7[0x11];
  uStack_6c = *(undefined4 *)((longlong)plVar7 + 0x8c);
  local_68 = plVar7[0x12];
  local_98 = param_3;
  uVar4 = (**(code **)(*param_2 + 0x268))(param_2);
  if (uVar4 != 0) {
    uVar6 = 1;
    do {
      if ((local_60 & 1) == 0) {
        local_50 = FUN_14491444c();
      }
      else {
        local_50 = FUN_1468c9c00(local_80,&local_68);
      }
      local_58 = &local_90;
      lVar5 = FUN_140005950(&local_90);
      (**(code **)(*param_2 + 0x270))(param_2);
      if ((*(byte *)((longlong)plVar1 + 0x39) & 2) == 0) {
        (**(code **)(*plVar1 + 0x160))(plVar1);
      }
      else {
        memset((void *)(*(int *)((longlong)plVar1 + 0x44) + lVar5),0,
               (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
      }
      if ((*(byte *)((longlong)plVar2 + 0x39) & 2) == 0) {
        (**(code **)(*plVar2 + 0x160))(plVar2,*(int *)((longlong)plVar2 + 0x44) + lVar5);
      }
      else {
        memset((void *)(*(int *)((longlong)plVar2 + 0x44) + lVar5),0,
               (longlong)(int)plVar2[6] * (longlong)*(int *)((longlong)plVar2 + 0x34));
      }
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x20))
                (*(longlong **)(param_1 + 0x30),param_2,lVar5);
      (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))
                (*(longlong **)(param_1 + 0x38),param_2,lVar5);
      bVar8 = uVar6 < uVar4;
      uVar6 = (ulonglong)((int)uVar6 + 1);
    } while (bVar8);
  }
  (**(code **)(*param_2 + 0x278))(param_2);
  FUN_140458c30(&local_90);
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_98;
}



// FUNCTION 1489e71fe FUN_1489e71fe body=164 status=ok
// SIG undefined FUN_1489e71fe(void)

undefined8 FUN_1489e71fe(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  puVar2 = (undefined8 *)FUN_1489e7328(param_1,param_3);
  *puVar2 = param_3;
  puVar2[1] = uVar3;
  uVar1 = (**(code **)(*param_2 + 0x88))(param_2);
  (**(code **)(*param_2 + 0x80))(param_2,4);
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))
            (*(longlong **)(param_1 + 0x38),param_2,param_3);
  (**(code **)(*param_2 + 0x80))(param_2,uVar1);
  uVar3 = (**(code **)(*param_2 + 0x40))(param_2);
  uVar1 = FUN_1489dbb60();
  *param_4 = uVar1;
  *(code **)(param_4 + 2) = FUN_1489dbcc6;
  *(undefined8 *)(param_4 + 4) = uVar3;
  *(undefined8 **)(param_4 + 6) = puVar2;
  return 0x1489dbc01;
}



// FUNCTION 1489e72a2 FUN_1489e72a2 body=134 status=ok
// SIG undefined FUN_1489e72a2(void)

void FUN_1489e72a2(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x88))();
  if (iVar1 == 2) {
    (**(code **)(*param_1 + 0x80))(param_1,3);
  }
  (**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,param_1,param_3);
  (**(code **)(*param_1 + 0x80))(param_1,iVar1);
  (**(code **)(*(longlong *)*param_4 + 0x10))((longlong *)*param_4,param_1,param_5);
                    /* WARNING: Could not recover jumptable at 0x0001489e7321. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}



// FUNCTION 1489e7328 FUN_1489e7328 body=240 status=ok
// SIG undefined FUN_1489e7328(void)

longlong FUN_1489e7328(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)(param_1 + 0x40);
  local_30 = param_2;
  if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar4 = param_1 + 0x78;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x80);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x88) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar3 != -1) {
      do {
        lVar4 = *plVar1 + (longlong)iVar3 * 0x20;
        if (*(ulonglong *)(*plVar1 + (longlong)iVar3 * 0x20) == param_2) {
          if (lVar4 != 0) goto LAB_1489e73fb;
          break;
        }
        iVar3 = *(int *)(lVar4 + 0x18);
      } while (iVar3 != -1);
    }
  }
  local_28 = &local_30;
  FUN_1489e741a(plVar1,&local_1c);
  lVar4 = (longlong)local_1c * 0x20 + *plVar1;
LAB_1489e73fb:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4 + 8;
}



// FUNCTION 1489e741a FUN_1489e741a body=322 status=ok
// SIG undefined FUN_1489e741a(void)

undefined4 * FUN_1489e741a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1489e755e(param_1,local_48);
  uVar5 = *(ulonglong *)*param_3;
  *local_40 = uVar5;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_1489e7644(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0x1c) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1489e7740(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489e755e FUN_1489e755e body=229 status=ok
// SIG undefined FUN_1489e755e(void)

int * FUN_1489e755e(longlong *param_1,int *param_2)

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



// FUNCTION 1489e7644 FUN_1489e7644 body=137 status=ok
// SIG undefined FUN_1489e7644(void)

undefined8 FUN_1489e7644(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_1489e76ce((int)lVar4,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}


