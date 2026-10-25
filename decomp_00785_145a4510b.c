// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145a4510b FUN_145a4510b body=43 status=ok
// SIG undefined FUN_145a4510b(void)

void FUN_145a4510b(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 5;
  }
  return;
}



// FUNCTION 145a45142 FUN_145a45142 body=101 status=ok
// SIG undefined FUN_145a45142(void)

undefined8 * FUN_145a45142(undefined8 *param_1)

{
  FUN_141219ba0();
  *param_1 = &PTR_FUN_14ae60c10;
  param_1[5] = &PTR_FUN_14ae60f40;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(byte *)((longlong)param_1 + 0xd9) = *(byte *)((longlong)param_1 + 0xd9) | 1;
  FUN_141266e28(param_1,1);
  *(undefined4 *)((longlong)param_1 + 0x184) = 0x40a00000;
  return param_1;
}



// FUNCTION 145a451a8 FUN_145a451a8 body=40 status=ok
// SIG undefined FUN_145a451a8(void)

undefined8 FUN_145a451a8(undefined8 param_1,int param_2)

{
  FUN_145a451d0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a451d0 FUN_145a451d0 body=638 status=ok
// SIG undefined FUN_145a451d0(void)

void FUN_145a451d0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14af07350;
  param_1[6] = &PTR_FUN_14af07630;
  param_1[7] = &PTR_FUN_14af07650;
  if (param_1[0x9f] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x9e) = 0;
  if (param_1[0x9d] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x95);
  *(undefined4 *)(param_1 + 0x94) = 0;
  if (param_1[0x93] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x8b);
  if (param_1[0x80] != 0) {
    plVar3 = param_1 + 0x84;
    if ((longlong *)param_1[0x82] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x82];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x6c] != 0) {
    plVar3 = param_1 + 0x70;
    if ((longlong *)param_1[0x6e] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x6e];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[100] != 0) {
    plVar3 = param_1 + 0x68;
    if ((longlong *)param_1[0x66] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x66];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x5e] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x5d) = 0;
  if (param_1[0x5c] != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x53) = 0;
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  FUN_14083ed90(param_1 + 0x4a);
  FUN_145a45466(param_1 + 0x26);
  plVar3 = (longlong *)param_1[0x13];
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
  plVar3 = (longlong *)param_1[0x11];
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
  FUN_1449db362(param_1 + 0xe);
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



// FUNCTION 145a45466 FUN_145a45466 body=139 status=ok
// SIG undefined FUN_145a45466(void)

void FUN_145a45466(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(param_1 + 0xe);
  FUN_145a454f1(param_1[0xc],(int)param_1[0xd]);
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(param_1 + 2);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a454f1 FUN_145a454f1 body=49 status=ok
// SIG undefined FUN_145a454f1(void)

void FUN_145a454f1(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145a45522 FUN_145a45522 body=31 status=ok
// SIG undefined FUN_145a45522(void)

undefined8 FUN_145a45522(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a45542 FUN_145a45542 body=31 status=ok
// SIG undefined FUN_145a45542(void)

undefined8 FUN_145a45542(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a45562 FUN_145a45562 body=66 status=ok
// SIG undefined FUN_145a45562(void)

undefined8 FUN_145a45562(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1403ae288(param_1 + 0xc0);
  if (cVar1 == '\0') {
    return 0;
  }
  uVar2 = FUN_140280ec4(param_1 + 0xc0);
  uVar2 = FUN_144a87362(uVar2);
  uVar2 = FUN_141362ac2(uVar2,2);
  return uVar2;
}



// FUNCTION 145a455ae FUN_145a455ae body=61 status=ok
// SIG undefined FUN_145a455ae(void)

void FUN_145a455ae(longlong *param_1)

{
  FUN_141033307(param_1[5],(int)param_1[6]);
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145a455e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 145a455f6 FUN_145a455f6 body=157 status=ok
// SIG undefined FUN_145a455f6(void)

undefined8 * FUN_145a455f6(undefined8 *param_1)

{
  FUN_140198756();
  *param_1 = &PTR_FUN_14bac98a0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1b));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x1b),4000);
  return param_1;
}



// FUNCTION 145a45693 FUN_145a45693 body=63 status=ok
// SIG undefined FUN_145a45693(void)

void FUN_145a45693(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145a456d2(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bb61460;
  puVar1[0x4a] = &PTR_FUN_14bb61860;
  puVar1[0x76] = &PTR_FUN_14bb61880;
  return;
}



// FUNCTION 145a456d2 FUN_145a456d2 body=77 status=ok
// SIG undefined FUN_145a456d2(void)

undefined8 * FUN_145a456d2(undefined8 *param_1)

{
  FUN_14094d83e();
  *param_1 = &PTR_FUN_14bac69a0;
  param_1[0x4a] = &PTR_LAB_14bac6da0;
  param_1[0x76] = &PTR_LAB_14bac6dc0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  return param_1;
}



// FUNCTION 145a4572c FUN_145a4572c body=45 status=ok
// SIG undefined FUN_145a4572c(void)

void FUN_145a4572c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar1 = &PTR_FUN_14bea8ef0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  return;
}



// FUNCTION 145a4575a FUN_145a4575a body=381 status=ok
// SIG undefined FUN_145a4575a(void)

void FUN_145a4575a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_50;
  longlong *plStack_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_145a458d8();
  if ((param_2 != 0) && (lVar5 = *(longlong *)(param_1 + 0x50), lVar5 != 0)) {
    if ((&DAT_149fc1b6e)[*(byte *)(param_2 + 0x3b8)] == '\x01') {
      if ((*(longlong **)(param_2 + 0x3a8) == (longlong *)0x0) ||
         (cVar4 = (**(code **)(**(longlong **)(param_2 + 0x3a8) + 0x28))(), cVar4 == '\0'))
      goto LAB_145a45834;
      lVar5 = *(longlong *)(param_1 + 0x50);
    }
    else if ((*(uint *)(param_2 + 0x3a8) & 0xffffff) == 0) goto LAB_145a45834;
    FUN_1408e4d18(param_2 + 0x3a0,&local_68);
    local_50 = local_68;
    plStack_48 = plStack_60;
    local_68 = 0;
    plStack_60 = (longlong *)0x0;
    FUN_140b7090e(lVar5,&local_40);
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar3 = (int *)((longlong)local_38 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_38 + 0x10))(local_38);
        }
      }
    }
    plVar1 = plStack_48;
    if (plStack_48 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_48 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_48)(plStack_48);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    plVar1 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_60 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    if (local_40 == 0) {
      FUN_148da98c8(param_1 + 0x180,param_2);
    }
  }
LAB_145a45834:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a458d8 FUN_145a458d8 body=33 status=ok
// SIG undefined FUN_145a458d8(void)

/* WARNING: Removing unreachable block (ram,0x000145a45a37) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145a458d8(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong **pplVar2;
  longlong **pplVar3;
  longlong *plVar4;
  ulonglong uVar5;
  char cVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong **pplVar13;
  undefined1 auStack_f8 [32];
  undefined1 *puStack_d8;
  longlong *plStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong **pplStack_a8;
  longlong *plStack_a0;
  longlong **pplStack_98;
  longlong *plStack_90;
  longlong alStack_88 [3];
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  longlong **pplStack_60;
  longlong *plStack_58;
  byte bStack_50;
  ulonglong uStack_48;
  longlong *in_stack_ffffffffffffffc0;
  
  if ((*(longlong *)(param_1 + 0x40) == 0) ||
     (*(char *)(*(longlong *)(param_1 + 0x40) + 0x50) != '\x01')) {
    lVar11 = *(longlong *)(param_1 + 0x78);
    if (lVar11 == 0) {
      return;
    }
    uVar8 = DAT_14c707940 ^ (ulonglong)&ppuStack_68;
    ppuStack_70 = (undefined **)0x145a4591d;
    cVar6 = FUN_145a45aa6();
    if (cVar6 != '\0') {
      uVar10 = 0;
      if (param_2 != 0) {
        ppuStack_70 = (undefined **)0x145a4593b;
        lVar9 = FUN_140082f10();
        if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) {
          ppuStack_70 = (undefined **)0x145a45975;
          FUN_1408e4d18(param_2 + 0x4e8,&uStack_48);
          uVar5 = uStack_48;
          if (uStack_48 != 0) {
            if (in_stack_ffffffffffffffc0 != (longlong *)0x0) {
              LOCK();
              *(int *)(in_stack_ffffffffffffffc0 + 1) = (int)in_stack_ffffffffffffffc0[1] + 1;
              UNLOCK();
            }
            uVar10 = 1;
            ppuStack_70 = (undefined **)0x145a459ae;
            FUN_1413eac7e(&stack0xffffffffffffffc8,0);
            _DAT_00000000 = uVar5;
            _DAT_00000008 = in_stack_ffffffffffffffc0;
            if (in_stack_ffffffffffffffc0 != (longlong *)0x0) {
              LOCK();
              *(int *)(in_stack_ffffffffffffffc0 + 1) = (int)in_stack_ffffffffffffffc0[1] + 1;
              UNLOCK();
              LOCK();
              plVar12 = in_stack_ffffffffffffffc0 + 1;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)*plVar12 == 0) {
                ppuStack_70 = (undefined **)0x145a45a6e;
                (**(code **)*in_stack_ffffffffffffffc0)(in_stack_ffffffffffffffc0);
                LOCK();
                piVar1 = (int *)((longlong)in_stack_ffffffffffffffc0 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  ppuStack_70 = (undefined **)0x145a45a81;
                  (**(code **)(*in_stack_ffffffffffffffc0 + 0x10))(in_stack_ffffffffffffffc0);
                }
              }
            }
          }
          if (in_stack_ffffffffffffffc0 != (longlong *)0x0) {
            LOCK();
            plVar12 = in_stack_ffffffffffffffc0 + 1;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)*plVar12 == 0) {
              ppuStack_70 = (undefined **)0x145a45a8e;
              (**(code **)*in_stack_ffffffffffffffc0)(in_stack_ffffffffffffffc0);
              LOCK();
              piVar1 = (int *)((longlong)in_stack_ffffffffffffffc0 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                ppuStack_70 = (undefined **)0x145a45aa1;
                (**(code **)(*in_stack_ffffffffffffffc0 + 0x10))(in_stack_ffffffffffffffc0);
              }
            }
          }
        }
      }
      ppuStack_70 = (undefined **)0x145a459fa;
      FUN_145a45af4(lVar11,&uStack_48);
      ppuStack_70 = (undefined **)0x145a45a07;
      FUN_145a45ca4(&uStack_48,&stack0xffffffffffffffc8);
      ppuStack_70 = (undefined **)0x145a45a12;
      FUN_14127b1cd(uStack_48,(ulonglong)in_stack_ffffffffffffffc0 & 0xffffffff);
      if (uStack_48 != 0) {
        ppuStack_70 = (undefined **)0x145a45a1f;
        FUN_1400020a8();
      }
      ppuStack_70 = (undefined **)0x145a45a2d;
      FUN_14127b1cd(0,uVar10);
    }
    if ((uVar8 ^ (ulonglong)&ppuStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      ppuStack_70 = (undefined **)&UNK_145a45a5c;
      FUN_144d8e3a0();
    }
    return;
  }
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1408e4d18(param_2 + 0x3a0,&pplStack_98);
  pplVar13 = pplStack_98;
  if (pplStack_98 == (longlong **)0x0) goto LAB_148a7cd36;
  uVar10 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x180))();
  FUN_140b6e166(&pplStack_a8,uVar10,pplVar13);
  pplVar13 = pplStack_98;
  plVar12 = plStack_90;
  if (pplStack_a8 != (longlong **)0x0) {
    if (param_2 == 0) {
LAB_148a7c896:
      (*(code *)(*pplStack_98)[6])(pplStack_98,&ppuStack_68);
      uVar7 = FUN_140b71325(&ppuStack_68);
      if (ppuStack_68 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      alStack_88[0] = 0;
      alStack_88[1] = 0;
      pplStack_60 = &plStack_c8;
      ppuStack_68 = (undefined **)FUN_143efd7ea;
      plStack_c8 = alStack_88;
      bifrost::sessions::serviceName(uVar7);
      uVar10 = FUN_14101d2ea();
      cVar6 = FUN_143f3ac8a(alStack_88,uVar10);
      if (alStack_88[0] != 0) {
        FUN_1400020a8();
      }
      pplVar13 = pplStack_98;
      plVar12 = plStack_90;
      if (cVar6 == '\0') goto LAB_148a7c9c4;
    }
    else {
      lVar11 = FUN_140082f10();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar11 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar11 + 0x38) * 8) != lVar11 + 0x30)) goto LAB_148a7c896;
      if ((&DAT_149fc1b6e)[*(byte *)(param_2 + 0x500)] == '\x01') {
        if ((*(longlong **)(param_2 + 0x4f0) != (longlong *)0x0) &&
           (cVar6 = (**(code **)(**(longlong **)(param_2 + 0x4f0) + 0x28))(), cVar6 != '\0'))
        goto LAB_148a7c96f;
        goto LAB_148a7c896;
      }
      if ((*(uint *)(param_2 + 0x4f0) & 0xffffff) == 0) goto LAB_148a7c896;
LAB_148a7c96f:
      plVar12 = (longlong *)FUN_140a68038(1);
      if (plVar12 == (longlong *)0x0) goto LAB_148a7c896;
      (**(code **)(*plVar12 + 0x10))(plVar12,&ppuStack_68);
      FUN_140b6e8c2(param_2 + 0x4e8,&ppuStack_70);
      pplVar13 = pplStack_98;
      plVar12 = plStack_90;
      if (ppuStack_68 != ppuStack_70) goto LAB_148a7c9c4;
    }
    pplVar13 = pplStack_a8;
    plVar12 = plStack_a0;
  }
LAB_148a7c9c4:
  if (plVar12 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  uVar10 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2d0))();
  lVar11 = FUN_14119d4d6(uVar10);
  if ((((lVar11 != 0) &&
       (lVar9 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x180))(), lVar9 != 0)) &&
      (lVar9 = FUN_1400f6f32(lVar9), lVar9 != 0)) &&
     (lVar9 = *(longlong *)(lVar9 + 0x68), lVar9 != 0)) {
    ppuStack_68 = &PTR_FUN_14a184370;
    pplStack_60 = pplStack_98;
    plStack_58 = plStack_90;
    if (plStack_90 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
      UNLOCK();
    }
    bStack_50 = 0;
    FUN_1413d931e(lVar9,&uStack_ac,&ppuStack_68,1);
    ppuStack_68 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[bStack_50])(&pplStack_60);
    if (-1 < (short)uStack_ac) {
      (*(code *)(*pplVar13)[2])(pplVar13,&ppuStack_70);
      uVar10 = FUN_140b6de3c();
      FUN_140b6df48(uVar10,&ppuStack_68,lVar11,pplStack_98);
      if (ppuStack_68 == (undefined **)0x0) {
        if (pplStack_98 == pplVar13 && pplStack_98 != (longlong **)0x0) {
          ppuStack_70 = (undefined **)0x0;
        }
      }
      else {
        (*(code *)(*pplStack_98)[2])(pplStack_98,auStack_b8);
        plStack_c8 = (longlong *)0x0;
        uStack_c0 = 0;
        (**(code **)(*ppuStack_68 + 0x18))(ppuStack_68,alStack_88);
        puStack_d8 = auStack_b8;
        FUN_141589eda(lVar9,&uStack_b0,&uStack_ac,alStack_88);
        uStack_ac = uStack_b0;
        if (alStack_88[0] != 0) {
          FUN_1400020a8();
        }
        if (plStack_c8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      pplVar3 = pplStack_60;
      if (pplStack_60 != (longlong **)0x0) {
        LOCK();
        pplVar2 = pplStack_60 + 1;
        *(int *)pplVar2 = *(int *)pplVar2 + -1;
        UNLOCK();
        if (*(int *)pplVar2 == 0) {
          (*(code *)**pplStack_60)(pplStack_60);
          LOCK();
          piVar1 = (int *)((longlong)pplVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (*(code *)(*pplVar3)[2])(pplVar3);
          }
        }
      }
      if (pplStack_a8 != (longlong **)0x0) {
        ppuStack_68 = &PTR_FUN_14a184370;
        pplStack_60 = pplStack_a8;
        plStack_58 = plStack_a0;
        if (plStack_a0 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
          UNLOCK();
        }
        bStack_50 = 0;
        puStack_d8 = (undefined1 *)((ulonglong)puStack_d8 & 0xffffffffffffff00);
        FUN_1414c1098(lVar9,alStack_88,&uStack_ac,&ppuStack_68);
        uStack_ac = (undefined4)alStack_88[0];
        ppuStack_68 = &PTR_FUN_14a184370;
        (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[bStack_50])(&pplStack_60);
        uVar10 = FUN_140b6de3c();
        FUN_140b6df48(uVar10,&ppuStack_68,lVar11,pplStack_a8);
        if (ppuStack_68 == (undefined **)0x0) {
          if (pplStack_a8 == pplVar13 && pplStack_a8 != (longlong **)0x0) {
            ppuStack_70 = (undefined **)0x0;
          }
        }
        else {
          (*(code *)(*pplStack_a8)[2])(pplStack_a8,auStack_b8);
          plStack_c8 = (longlong *)0x0;
          uStack_c0 = 0;
          (**(code **)(*ppuStack_68 + 0x18))(ppuStack_68,alStack_88);
          puStack_d8 = auStack_b8;
          FUN_141589eda(lVar9,&uStack_b0,&uStack_ac,alStack_88);
          uStack_ac = uStack_b0;
          if (alStack_88[0] != 0) {
            FUN_1400020a8();
          }
          if (plStack_c8 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        pplVar13 = pplStack_60;
        if (pplStack_60 != (longlong **)0x0) {
          LOCK();
          pplVar3 = pplStack_60 + 1;
          *(int *)pplVar3 = *(int *)pplVar3 + -1;
          UNLOCK();
          if (*(int *)pplVar3 == 0) {
            (*(code *)**pplStack_60)(pplStack_60);
            LOCK();
            piVar1 = (int *)((longlong)pplVar13 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*pplVar13)[2])(pplVar13);
            }
          }
        }
      }
      FUN_141589e20(lVar9,&ppuStack_68,&uStack_ac,&ppuStack_70);
    }
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar12 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar12 = plStack_a0 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
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
LAB_148a7cd36:
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar12 = plStack_90 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plStack_90 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plStack_90 + 0x10))(plStack_90);
      }
    }
  }
  if ((uStack_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a458fa FUN_145a458fa body=427 status=ok
// SIG undefined FUN_145a458fa(void)

void FUN_145a458fa(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar4 = FUN_145a45aa6();
  if (cVar4 != '\0') {
    local_38 = 0;
    uStack_30 = 0;
    if (param_2 != 0) {
      lVar6 = FUN_140082f10();
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
        FUN_1408e4d18(param_2 + 0x4e8,&local_48);
        lVar6 = local_48;
        if (local_48 != 0) {
          plVar3 = (longlong *)CONCAT44(uStack_3c,local_40);
          if (plVar3 == (longlong *)0x0) {
            uVar5 = 0;
            iVar7 = 0;
          }
          else {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
            iVar7 = (int)uStack_30;
            uVar5 = uStack_30._4_4_;
          }
          uStack_30 = CONCAT44(uStack_30._4_4_,iVar7 + 1U);
          if (uVar5 < iVar7 + 1U) {
            FUN_1413eac7e(&local_38,iVar7);
          }
          *(longlong *)(local_38 + (longlong)iVar7 * 0x10) = lVar6;
          *(longlong **)(local_38 + 8 + (longlong)iVar7 * 0x10) = plVar3;
          if (plVar3 != (longlong *)0x0) {
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
          }
        }
        plVar3 = (longlong *)CONCAT44(uStack_3c,local_40);
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
    }
    FUN_145a45af4(param_1,&local_48);
    FUN_145a45ca4(&local_48,&local_38);
    FUN_14127b1cd(local_48,local_40);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_14127b1cd(local_38,uStack_30 & 0xffffffff);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a45aa6 FUN_145a45aa6 body=77 status=ok
// SIG undefined FUN_145a45aa6(void)

undefined8 FUN_145a45aa6(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined7 uVar5;
  byte bVar6;
  longlong lVar7;
  
  lVar7 = *param_1;
  lVar2 = FUN_14147686c(lVar7);
  if (lVar2 != 0) {
    lVar3 = FUN_144a79464();
    lVar7 = *(longlong *)(lVar2 + 0x10);
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar7 + 0x38)) &&
       (lVar7 = *(longlong *)(lVar7 + 0x30),
       *(longlong *)(lVar7 + (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
      uVar4 = FUN_144a87d0a(lVar2);
      bVar6 = (byte)uVar4;
      uVar5 = (undefined7)((ulonglong)uVar4 >> 8);
      bVar1 = 1;
      goto LAB_145a45ae7;
    }
  }
  bVar6 = (byte)lVar7;
  bVar1 = 0;
  uVar5 = 0;
LAB_145a45ae7:
  return CONCAT71(uVar5,bVar1 & bVar6);
}



// FUNCTION 145a45af4 FUN_145a45af4 body=431 status=ok
// SIG undefined FUN_145a45af4(void)

longlong * FUN_145a45af4(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  param_2[1] = 0;
  lVar7 = FUN_14147686c(*param_1);
  if (lVar7 != 0) {
    plVar8 = (longlong *)FUN_140a68038(1);
    if (plVar8 == (longlong *)0x0) {
      local_58 = (longlong *)0x0;
      plStack_50 = (longlong *)0x0;
    }
    else {
      (**(code **)(*plVar8 + 0x80))(plVar8,&local_58);
      if (local_58 != (longlong *)0x0) {
        plVar8 = (longlong *)FUN_144a7c8f0(lVar7);
        lVar7 = plVar8[1];
        if ((longlong)(int)lVar7 != 0) {
          lVar4 = *plVar8;
          lVar9 = 0;
          do {
            (**(code **)(*local_58 + 0x110))
                      (local_58,&local_68,*(undefined4 *)(*(longlong *)(lVar4 + lVar9) + 0xe0));
            plVar8 = local_60;
            lVar6 = local_68;
            if (local_68 != 0) {
              if (local_60 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_60 + 1) = (int)local_60[1] + 1;
                UNLOCK();
              }
              iVar3 = (int)param_2[1];
              *(uint *)(param_2 + 1) = iVar3 + 1U;
              if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
                FUN_1413eac7e(param_2,iVar3);
              }
              lVar5 = *param_2;
              *(longlong *)(lVar5 + (longlong)iVar3 * 0x10) = lVar6;
              *(longlong **)(lVar5 + 8 + (longlong)iVar3 * 0x10) = plVar8;
              if (plVar8 != (longlong *)0x0) {
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
              }
            }
            plVar8 = local_60;
            if (local_60 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_60 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_60)(local_60);
                LOCK();
                piVar2 = (int *)((longlong)plVar8 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar8 + 0x10))(plVar8);
                }
              }
            }
            lVar9 = lVar9 + 8;
          } while ((longlong)(int)lVar7 * 8 != lVar9);
        }
      }
    }
    plVar8 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_50)(plStack_50);
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
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a45ca4 FUN_145a45ca4 body=913 status=ok
// SIG undefined FUN_145a45ca4(void)

void FUN_145a45ca4(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  longlong local_e0 [2];
  longlong local_d0;
  undefined8 *local_c8;
  undefined8 uStack_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88;
  longlong local_78 [3];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar8 = (longlong *)FUN_140a68038(1);
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x28))(plVar8,&local_b8);
    if (local_b8 != (longlong *)0x0) {
      local_c8 = (undefined8 *)0x0;
      uStack_c0 = 0;
      iVar3 = *(int *)(param_2 + 1);
      if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar3);
      }
      if (iVar3 != 0) {
        FUN_145a460a6(&local_c8);
      }
      (**(code **)(*plVar8 + 0x10))(plVar8,&local_d0);
      if ((longlong)*(int *)(param_2 + 1) != 0) {
        puVar9 = (undefined8 *)*param_2;
        lVar11 = (longlong)*(int *)(param_2 + 1) << 4;
        do {
          (**(code **)(*(longlong *)*puVar9 + 0x10))((longlong *)*puVar9,&local_a8);
          if (local_a8 == local_d0) {
            FUN_140056680(local_78,&DAT_149dfb77a);
            FUN_145a4610e(&local_a8,puVar9,local_78);
            if (local_78[0] != 0) {
              FUN_1400020a8();
            }
            uVar5 = uStack_c0;
            lVar10 = (longlong)(int)uStack_c0;
            uVar7 = (int)uStack_c0 + 1;
            uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar7);
            if (uStack_c0._4_4_ < uVar7) {
              FUN_145a46204(&local_c8,uVar5 & 0xffffffff);
            }
            local_c8[lVar10 * 5] = local_a8;
            local_c8[lVar10 * 5 + 1] = uStack_a0;
            if (uStack_a0 != 0) {
              LOCK();
              *(int *)(uStack_a0 + 8) = *(int *)(uStack_a0 + 8) + 1;
              UNLOCK();
            }
            local_c8[lVar10 * 5 + 2] = 0;
            local_c8[lVar10 * 5 + 2] = local_98;
            local_98 = 0;
            *(undefined4 *)(local_c8 + lVar10 * 5 + 3) = (undefined4)local_90;
            *(undefined4 *)((longlong)local_c8 + lVar10 * 0x28 + 0x1c) = local_90._4_4_;
            local_90 = 0;
            *(undefined1 *)(local_c8 + lVar10 * 5 + 4) = local_88;
            FUN_145a4605c(&local_a8);
          }
          puVar9 = puVar9 + 2;
          lVar11 = lVar11 + -0x10;
        } while (lVar11 != 0);
      }
      if ((longlong)(int)param_1[1] != 0) {
        puVar9 = (undefined8 *)*param_1;
        puVar13 = puVar9 + (longlong)(int)param_1[1] * 2;
        do {
          puVar4 = (undefined8 *)*puVar9;
          plVar8 = (longlong *)puVar9[1];
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
          }
          local_a8 = 0;
          uStack_a0 = 0;
          if ((longlong)(int)uStack_c0 != 0) {
            lVar11 = (longlong)(int)uStack_c0 * 0x28;
            puVar12 = local_c8;
            do {
              cVar6 = (**(code **)*puVar4)(puVar4,*puVar12);
              uVar5 = uStack_a0;
              if (cVar6 == '\0') {
                lVar10 = (longlong)(int)uStack_a0;
                uVar7 = (int)uStack_a0 + 1;
                uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar7);
                if (uStack_a0._4_4_ < uVar7) {
                  FUN_145a46204(&local_a8,uVar5 & 0xffffffff);
                }
                FUN_145a46184(lVar10 * 0x28 + local_a8,puVar12);
              }
              puVar12 = puVar12 + 5;
              lVar11 = lVar11 + -0x28;
            } while (lVar11 != 0);
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
          plVar8 = local_b8;
          local_78[0] = 0;
          local_78[1] = 0;
          FUN_140056680(local_e0,&DAT_149dfb77a);
          local_e8 = local_78;
          (**(code **)(*plVar8 + 0x1e0))(plVar8,*puVar9,&local_a8,local_e0);
          if (local_e0[0] != 0) {
            FUN_1400020a8();
          }
          FUN_1449db362(local_78);
          FUN_145a46036(local_a8,uStack_a0 & 0xffffffff);
          if (local_a8 != 0) {
            FUN_1400020a8();
          }
          puVar9 = puVar9 + 2;
        } while (puVar9 != puVar13);
      }
      FUN_145a46036(local_c8,uStack_c0 & 0xffffffff);
      if (local_c8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_b0 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar2 = (int *)((longlong)local_b0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_b0 + 0x10))(local_b0);
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a46036 FUN_145a46036 body=38 status=ok
// SIG undefined FUN_145a46036(void)

void FUN_145a46036(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145a4605c(param_1);
    param_1 = param_1 + 0x28;
  }
  return;
}



// FUNCTION 145a4605c FUN_145a4605c body=74 status=ok
// SIG undefined FUN_145a4605c(void)

void FUN_145a4605c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000145a460a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145a460a6 FUN_145a460a6 body=103 status=ok
// SIG undefined FUN_145a460a6(void)

undefined8 FUN_145a460a6(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x28,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xcccccccccccccccd),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar2 / 0x28)) {
    uVar4 = uVar2 / 0x28 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar3 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x28,8);
  }
  return uVar3;
}



// FUNCTION 145a4610e FUN_145a4610e body=118 status=ok
// SIG undefined FUN_145a4610e(void)

undefined8 * FUN_145a4610e(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  
  *param_1 = *param_2;
  lVar2 = param_2[1];
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 4) = 0;
  return param_1;
}



// FUNCTION 145a46184 FUN_145a46184 body=128 status=ok
// SIG undefined FUN_145a46184(void)

undefined8 * FUN_145a46184(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  
  *param_1 = *param_2;
  lVar2 = param_2[1];
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
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
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



// FUNCTION 145a46204 FUN_145a46204 body=147 status=ok
// SIG undefined FUN_145a46204(void)

void FUN_145a46204(longlong param_1,int param_2)

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



// FUNCTION 145a46298 FUN_145a46298 body=339 status=ok
// SIG undefined FUN_145a46298(void)

void FUN_145a46298(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  char cVar6;
  longlong *plVar7;
  byte bVar8;
  longlong lVar9;
  
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 0x65) & 2) == 0)) &&
      ((*(byte *)(param_1 + 0x9f) & 0x40) == 0)) && ((longlong)*(int *)(param_2 + 1) != 0)) {
    plVar7 = (longlong *)*param_2;
    plVar1 = (longlong *)(param_1 + 0x16e8);
    lVar9 = (longlong)*(int *)(param_2 + 1) << 4;
    bVar8 = 0;
    do {
      if (*plVar7 != 0) {
        bVar5 = FUN_145a463ec(plVar1,plVar7);
        iVar2 = *(int *)(param_1 + 0x16f0);
        *(uint *)(param_1 + 0x16f0) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x16f4) < iVar2 + 1U) {
          FUN_145a46462(plVar1,iVar2);
        }
        lVar3 = *plVar1;
        lVar4 = *plVar7;
        *(longlong *)(lVar3 + (longlong)iVar2 * 0x10) = lVar4;
        if ((lVar4 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        bVar8 = bVar8 | bVar5 ^ 1;
        *(longlong *)(lVar3 + (longlong)iVar2 * 0x10 + 8) = plVar7[1];
      }
      plVar7 = plVar7 + 2;
      lVar9 = lVar9 + -0x10;
    } while (lVar9 != 0);
    if (((bVar8 & 1) != 0) &&
       (((((*(longlong *)(param_1 + 0xa8) != 0 &&
           (*(char *)(*(longlong *)(param_1 + 0xa8) + 0x178) == '\x03')) ||
          (cVar6 = FUN_140f2b868(param_1), cVar6 == '\0')) && ((*(byte *)(param_1 + 0x9c) & 1) != 0)
         ) || (((*(longlong *)(param_1 + 0xa8) == 0 ||
                (*(char *)(*(longlong *)(param_1 + 0xa8) + 0x178) != '\x03')) &&
               ((*(byte *)(param_1 + 0x9f) & 0x20) != 0)))))) {
      FUN_140f2be08(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 145a463ec FUN_145a463ec body=118 status=ok
// SIG undefined FUN_145a463ec(void)

undefined8 FUN_145a463ec(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar5 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar2 = *param_2;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if ((*(longlong *)(lVar1 + lVar5) == lVar2) &&
         (lVar2 = *(longlong *)(lVar1 + 8 + lVar5), lVar2 == param_2[1])) {
        return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar5);
  }
  return 0;
}



// FUNCTION 145a46462 FUN_145a46462 body=132 status=ok
// SIG undefined FUN_145a46462(void)

void FUN_145a46462(longlong param_1,int param_2)

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



// FUNCTION 145a464e6 FUN_145a464e6 body=254 status=ok
// SIG undefined FUN_145a464e6(void)

undefined8
FUN_145a464e6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14a90c0e0;
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
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14a90a050;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145a465e6(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a465e6 FUN_145a465e6 body=214 status=ok
// SIG undefined FUN_145a465e6(void)

undefined8 * FUN_145a465e6(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145a466ca FUN_145a466ca body=24 status=ok
// SIG undefined FUN_145a466ca(void)

bool FUN_145a466ca(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145a466e2 FUN_145a466e2 body=40 status=ok
// SIG undefined FUN_145a466e2(void)

undefined8 FUN_145a466e2(undefined8 param_1,int param_2)

{
  FUN_145a4670a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a4670a FUN_145a4670a body=63 status=ok
// SIG undefined FUN_145a4670a(void)

void FUN_145a4670a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b509b30;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_145a4674a(param_1 + 6);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a4674a FUN_145a4674a body=53 status=ok
// SIG undefined FUN_145a4674a(void)

void FUN_145a4674a(longlong *param_1)

{
  FUN_145a46780();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a46780 FUN_145a46780 body=348 status=ok
// SIG undefined FUN_145a46780(void)

void FUN_145a46780(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
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
      lVar2 = *local_70 + (longlong)iStack_54 * 0xe8;
      FUN_14118c3d0(lVar2 + 0x38);
      if (*(longlong *)(lVar2 + 0x28) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140032aa6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a468de FUN_145a468de body=241 status=ok
// SIG undefined FUN_145a468de(void)

void FUN_145a468de(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a0))(param_1,local_1c,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a469d0 FUN_145a469d0 body=136 status=ok
// SIG undefined FUN_145a469d0(void)

void FUN_145a469d0(longlong param_1,int param_2,undefined4 param_3)

{
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(int *)(param_1 + 0x68) != 0) && (param_2 == 0 || *(int *)(param_1 + 0x68) == param_2)) {
    FUN_140056680(local_40,L"NetMulticast Stop");
    FUN_1403171d0(param_1,0,local_40,param_3);
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a46a5a FUN_145a46a5a body=478 status=ok
// SIG undefined FUN_145a46a5a(void)

void FUN_145a46a5a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b9963c0;
  *(undefined4 *)(param_1 + 0x77) = 0;
  if (param_1[0x76] != 0) {
    FUN_1400020a8();
  }
  FUN_145a46c38(param_1 + 0x6e);
  *(undefined4 *)(param_1 + 0x6d) = 0;
  if (param_1[0x6c] != 0) {
    FUN_1400020a8();
  }
  FUN_145a46c6e(param_1 + 100);
  param_1[0x60] = 0;
  param_1[0x61] = 0xffffffffffffffff;
  if (*(char *)(param_1 + 0x5d) == '\x01') {
    *(undefined1 *)(param_1 + 0x5d) = 0;
  }
  *(undefined4 *)(param_1 + 0x4f) = 0;
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  FUN_145a46ca4(param_1 + 0x46);
  FUN_14147687a(param_1[0x44],*(undefined4 *)(param_1 + 0x45));
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  FUN_144760f98(param_1 + 0x31);
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_140af926c(param_1);
  return;
}



// FUNCTION 145a46c38 FUN_145a46c38 body=53 status=ok
// SIG undefined FUN_145a46c38(void)

void FUN_145a46c38(longlong *param_1)

{
  FUN_145a46f9e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a46c6e FUN_145a46c6e body=53 status=ok
// SIG undefined FUN_145a46c6e(void)

void FUN_145a46c6e(longlong *param_1)

{
  FUN_145a46cda();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a46ca4 FUN_145a46ca4 body=53 status=ok
// SIG undefined FUN_145a46ca4(void)

void FUN_145a46ca4(longlong *param_1)

{
  FUN_145a46e4e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a46cda FUN_145a46cda body=371 status=ok
// SIG undefined FUN_145a46cda(void)

void FUN_145a46cda(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c * 0x70;
      *(undefined4 *)(lVar2 + 0x60 + lVar3) = 0;
      if (*(longlong *)(lVar2 + 0x58 + lVar3) != 0) {
        FUN_1400020a8();
      }
      FUN_140584d76(lVar2 + lVar3 + 0x18);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
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
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a46e4e FUN_145a46e4e body=335 status=ok
// SIG undefined FUN_145a46e4e(void)

void FUN_145a46e4e(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 0x18 + (longlong)iStack_4c * 0x38) != 0) {
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



// FUNCTION 145a46f9e FUN_145a46f9e body=378 status=ok
// SIG undefined FUN_145a46f9e(void)

void FUN_145a46f9e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c * 0x70;
      *(undefined4 *)(lVar2 + 0x60 + lVar3) = 0;
      if (*(longlong *)(lVar2 + 0x58 + lVar3) != 0) {
        FUN_1400020a8();
      }
      FUN_148dc291e(lVar2 + lVar3 + 0x18);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
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
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a4711a FUN_145a4711a body=63 status=ok
// SIG undefined FUN_145a4711a(void)

longlong FUN_145a4711a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145a47168(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x18 + *param_1;
  FUN_145a47159(lVar2);
  return lVar2;
}



// FUNCTION 145a47159 FUN_145a47159 body=15 status=ok
// SIG undefined FUN_145a47159(void)

void FUN_145a47159(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 145a47168 FUN_145a47168 body=147 status=ok
// SIG undefined FUN_145a47168(void)

void FUN_145a47168(longlong param_1,int param_2)

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



// FUNCTION 145a471fc FUN_145a471fc body=158 status=ok
// SIG undefined FUN_145a471fc(void)

bool FUN_145a471fc(longlong param_1,undefined8 param_2)

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



// FUNCTION 145a4729c FUN_145a4729c body=542 status=ok
// SIG undefined FUN_145a4729c(void)

void FUN_145a4729c(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_198 [40];
  longlong local_170;
  int local_168;
  undefined8 local_160;
  undefined8 *local_158;
  undefined8 *puStack_150;
  ulonglong *local_148;
  ulonglong uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined2 local_98;
  undefined8 local_94;
  undefined8 uStack_8c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_198;
  plVar2 = (longlong *)FUN_1400d6e82();
  lVar4 = *plVar2;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x88));
  *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + 1;
  uVar3 = FUN_1400d7050(param_1 + 6);
  FUN_14147691e(&local_158,param_2,uVar3);
  FUN_145a474bc(lVar4,&local_158);
  FUN_141286d76(&local_158);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0x88));
  lVar4 = FUN_140495e96(param_1 + 6);
  if (lVar4 != 0) {
    lVar4 = FUN_140cee904(lVar4);
    if (lVar4 != 0) {
      local_158 = &local_138;
      uStack_140 = uStack_140 & 0xffffffffffffff00;
      local_148 = &local_38;
      puStack_150 = local_158;
      FUN_1414768aa(&local_158,"inventory.rewards.");
      local_160 = *(undefined8 *)(param_2 + 0x18);
      FUN_1400021e4(&local_160,&local_170);
      iVar1 = local_168 + -1;
      if (local_168 == 0) {
        iVar1 = 0;
      }
      FUN_1449668a2(&local_158,local_170,iVar1);
      if (local_170 != 0) {
        FUN_1400020a8();
      }
      *(undefined2 *)puStack_150 = 0;
      FUN_145a4750c(lVar4,local_158);
      if ((char)uStack_140 == '\x01') {
        FUN_1400020a8(local_158);
      }
    }
  }
  local_f8 = 0;
  local_f0 = 0x8000000000;
  uStack_e8 = 0xffffffff;
  local_158 = (undefined8 *)0x0;
  puStack_150 = (undefined8 *)0x0;
  local_148 = (ulonglong *)0x0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0xf;
  local_98 = 1;
  local_94 = 0;
  uStack_8c = 0;
  lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x1f0) != 0)) {
    FUN_1400d6ce6();
  }
  FUN_140368b56(&local_158);
  if ((local_38 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a474bc FUN_145a474bc body=80 status=ok
// SIG undefined FUN_145a474bc(void)

bool FUN_145a474bc(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145a47784(param_1,iVar1);
  }
  FUN_145a475b8((longlong)iVar1 * 0xe8 + *param_1,param_2);
  if (iVar1 != -1) {
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  return iVar1 != -1;
}



// FUNCTION 145a4750c FUN_145a4750c body=76 status=ok
// SIG undefined FUN_145a4750c(void)

void FUN_145a4750c(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_1409801a0();
  lVar1 = *plVar2;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x28));
  *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + 1;
  FUN_145a47558(lVar1,param_2);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x28));
  FUN_140ceeb80(param_1);
  return;
}



// FUNCTION 145a47558 FUN_145a47558 body=95 status=ok
// SIG undefined FUN_145a47558(void)

void FUN_145a47558(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140c83f8c(param_1,local_28,param_2);
  FUN_1405e9454(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a475b8 FUN_145a475b8 body=345 status=ok
// SIG undefined FUN_145a475b8(void)

longlong FUN_145a475b8(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_14023423e();
  FUN_14023423e(param_1 + 0x10,param_2 + 0x10);
  FUN_14023423e(param_1 + 0x20,param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  FUN_145a47712(param_1 + 0x58,param_2 + 0x58);
  uVar1 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_2 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
  *(undefined8 *)(param_2 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_2 + 200) = 0;
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
  *(undefined8 *)(param_2 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_2 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
  *(undefined8 *)(param_2 + 0xe0) = 0;
  return param_1;
}



// FUNCTION 145a47712 FUN_145a47712 body=113 status=ok
// SIG undefined FUN_145a47712(void)

longlong FUN_145a47712(longlong param_1,longlong param_2)

{
  FUN_14023423e();
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  return param_1;
}



// FUNCTION 145a47784 FUN_145a47784 body=146 status=ok
// SIG undefined FUN_145a47784(void)

void FUN_145a47784(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong lVar4;
  
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
    uVar5 = FUN_144a3809e(lVar4 * 0xe8,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x8d3dcb08d3dcb09),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0xe8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145a47838 FUN_145a47838 body=103 status=ok
// SIG undefined FUN_145a47838(void)

ulonglong FUN_145a47838(longlong param_1)

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
LAB_145a47882:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145a47882;
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



// FUNCTION 145a478a0 FUN_145a478a0 body=81 status=ok
// SIG undefined FUN_145a478a0(void)

void FUN_145a478a0(longlong *param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_1458c7f24();
  if (cVar1 == '\0') {
    if (param_2 != '\0') {
      FUN_1414354ce(param_1);
      FUN_145d7c4e6(param_1);
      return;
    }
  }
  else {
    uVar2 = FUN_143f2ac96(param_1,0x17);
    *(undefined4 *)((longlong)param_1 + 0x44) = uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x000145a478ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x98))(param_1);
  return;
}



// FUNCTION 145a478f2 FUN_145a478f2 body=83 status=ok
// SIG undefined FUN_145a478f2(void)

void FUN_145a478f2(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_1458c7f24();
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x90))(param_1,param_2);
    FUN_145d7c4e6(param_1);
    return;
  }
  uVar2 = FUN_143f2ac96(param_1,0x17);
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000145a4793e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x98))(param_1);
  return;
}



// FUNCTION 145a47948 FUN_145a47948 body=129 status=ok
// SIG undefined FUN_145a47948(void)

undefined4
FUN_145a47948(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(param_1 + 0x18);
  local_28 = *param_2;
  *param_2 = 0;
  local_20 = (undefined4)param_2[1];
  local_1c = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  uVar2 = (*pcVar1)(&local_28,param_3,param_4,param_5);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a479ca FUN_145a479ca body=561 status=ok
// SIG undefined FUN_145a479ca(void)

ulonglong FUN_145a479ca(longlong *param_1,longlong *param_2,undefined4 param_3,longlong param_4)

{
  void *pvVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined1 auStack_d8 [40];
  undefined4 local_b0 [2];
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  void *local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  longlong local_80 [2];
  void *local_70;
  int iStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_4 != 0) {
    lVar3 = FUN_1447210f0(param_4);
    if (lVar3 != 0) {
      iVar2 = FUN_14490d72a(lVar3);
      if ((iVar2 == 3) && (*(byte *)(param_4 + 0x178) < 3)) {
        local_70 = (void *)0x0;
        iStack_68 = (int)param_1[1];
        lVar3 = (longlong)iStack_68;
        pvVar1 = (void *)*param_1;
        if (lVar3 == 0) {
          uStack_64 = 0;
        }
        else {
          FUN_1446dd670(&local_70,iStack_68,0);
          memcpy(local_70,pvVar1,lVar3 * 2);
        }
        if (0 < (int)param_2[1]) {
          lVar6 = 8;
          lVar3 = 0;
          do {
            puVar5 = &DAT_149dfb77a;
            if (*(int *)(*param_2 + lVar6) != 0) {
              puVar5 = *(undefined2 **)(*param_2 + -8 + lVar6);
            }
            FUN_140002266(local_80,&DAT_14a1ca408,puVar5);
            FUN_1407ec8fc(&local_98,&local_70,local_80);
            if (local_70 != (void *)0x0) {
              FUN_1400020a8();
            }
            local_70 = local_98;
            iStack_68 = (int)uStack_90;
            uStack_64 = uStack_90._4_4_;
            local_98 = (void *)0x0;
            uStack_90 = (void *)0x0;
            if (local_80[0] != 0) {
              FUN_1400020a8();
            }
            lVar3 = lVar3 + 1;
            lVar6 = lVar6 + 0x10;
          } while (lVar3 < (int)param_2[1]);
        }
        uStack_90 = (void *)0x0;
        local_88 = 0;
        local_98 = (void *)CONCAT44(local_98._4_4_,param_3);
        iVar2 = iStack_68 + -1;
        if (iStack_68 == 0) {
          iVar2 = 0;
        }
        FUN_1402980a2(&uStack_90,local_70,iVar2);
        pvVar1 = uStack_90;
        local_b0[0] = local_98._0_4_;
        local_a8 = (void *)0x0;
        lVar3 = (longlong)(int)local_88;
        local_a0 = (int)local_88;
        if (lVar3 == 0) {
          local_9c = 0;
        }
        else {
          FUN_1446dd670(&local_a8,local_88 & 0xffffffff,0);
          memcpy(local_a8,pvVar1,lVar3 * 2);
        }
        FUN_145a47bfc(param_4,local_b0);
        if (uStack_90 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_70 != (void *)0x0) {
          FUN_1400020a8();
        }
        uVar4 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
        goto LAB_145a47a21;
      }
    }
  }
  uVar4 = 0;
LAB_145a47a21:
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a47bfc FUN_145a47bfc body=152 status=ok
// SIG undefined FUN_145a47bfc(void)

void FUN_145a47bfc(longlong *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  longlong local_30 [3];
  
  local_30[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30[0] = 0;
  local_30[1] = 0;
  local_38[0] = *param_2;
  FUN_144a787a6(local_30,param_2 + 2);
  uVar1 = FUN_14477b072(param_1,DAT_14caf9ab0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_38);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 2) != 0) {
    FUN_1400020a8();
  }
  if ((local_30[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a47ca0 FUN_145a47ca0 body=294 status=ok
// SIG undefined FUN_145a47ca0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_145a47ca0(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145a47dc8();
  *param_1 = &PTR_FUN_14b370400;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  *(undefined8 *)((longlong)param_1 + 0x36c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x374) = 0;
  param_1[0x70] = 0;
  *(undefined4 *)(param_1 + 0x71) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xa50000;
  param_1[0x17] = "gamemode";
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb7de80) {
    FUN_144b3d300(&DAT_14cb7de80);
    if (DAT_14cb7de80 == -1) {
      _DAT_14cb7de70 = "option";
      _DAT_14cb7de78 = 0;
      _Init_thread_footer(&DAT_14cb7de80);
    }
  }
  param_1[0x18] = &DAT_14cb7de70;
  FUN_1400b22c2(local_28,"GameModes.GameMode");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a47dc8 FUN_145a47dc8 body=32 status=ok
// SIG undefined FUN_145a47dc8(void)

undefined8 * FUN_145a47dc8(undefined8 *param_1)

{
  FUN_1410fb190();
  *param_1 = &PTR_FUN_14a171470;
  return param_1;
}



// FUNCTION 145a47df6 FUN_145a47df6 body=45 status=ok
// SIG undefined FUN_145a47df6(void)

undefined8 FUN_145a47df6(undefined8 param_1,int param_2)

{
  FUN_145a47e24();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 145a47e24 FUN_145a47e24 body=110 status=ok
// SIG undefined FUN_145a47e24(void)

void FUN_145a47e24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4a7950;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 145a47e92 FUN_145a47e92 body=254 status=ok
// SIG undefined FUN_145a47e92(void)

undefined8
FUN_145a47e92(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14bb76500;
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
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14bb76490;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145a47f92(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a47f92 FUN_145a47f92 body=216 status=ok
// SIG undefined FUN_145a47f92(void)

undefined8 * FUN_145a47f92(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145a48078 FUN_145a48078 body=24 status=ok
// SIG undefined FUN_145a48078(void)

bool FUN_145a48078(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145a48090 FUN_145a48090 body=132 status=ok
// SIG undefined FUN_145a48090(void)

void FUN_145a48090(longlong param_1,int param_2)

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



// FUNCTION 145a48116 FUN_145a48116 body=48 status=ok
// SIG undefined FUN_145a48116(void)

void FUN_145a48116(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 145a48146 FUN_145a48146 body=93 status=ok
// SIG undefined FUN_145a48146(void)

undefined8 * FUN_145a48146(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_141477791(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_145a481a4(param_1,iVar1);
      FUN_1414777c0(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145a481a4 FUN_145a481a4 body=98 status=ok
// SIG undefined FUN_145a481a4(void)

void FUN_145a481a4(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 5,8);
    iVar1 = (int)(uVar2 >> 5);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x20,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 145a48206 FUN_145a48206 body=244 status=ok
// SIG undefined FUN_145a48206(void)

void FUN_145a48206(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  longlong local_98 [3];
  longlong local_80;
  undefined8 *local_78;
  longlong *local_70;
  undefined1 *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined1 local_4c [28];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 0x110) == '\x01') {
    local_98[0] = 0;
    local_98[1] = 0;
    FUN_140d8b592(local_4c,param_2);
    local_78 = &local_58;
    local_58 = 0;
    local_60 = &local_80;
    local_68 = &LAB_14571c398;
    local_80 = param_1 + 0x50;
    local_70 = local_98;
    FUN_141427c98(param_1 + 0x50,local_4c);
    if (local_98[0] != 0) {
      FUN_1400020a8();
    }
  }
  FUN_145a482fc(param_1,param_2);
  local_a0 = 0;
  FUN_14485c47a(&local_a0,param_2);
  FUN_145a4849e(param_1 + 0x118,local_a0);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a482fc FUN_145a482fc body=179 status=ok
// SIG undefined FUN_145a482fc(void)

void FUN_145a482fc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_14485c47a(&local_30);
  local_28 = local_30;
  iVar2 = FUN_145a483b0((longlong *)(param_1 + 0x118),
                        (uint)((ulonglong)local_30 >> 0x20) ^ (uint)local_30);
  if (iVar2 != -1) {
    lVar1 = *(longlong *)(param_1 + 0x118);
    if (((lVar1 + (longlong)iVar2 * 0x18 != 0) &&
        (plVar3 = (longlong *)(lVar1 + (longlong)iVar2 * 0x18 + 8), plVar3 != (longlong *)0x0)) &&
       (*plVar3 != 0)) {
      FUN_14480f766(param_2 + 0xc10);
      *plVar3 = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a483b0 FUN_145a483b0 body=180 status=ok
// SIG undefined FUN_145a483b0(void)

int FUN_145a483b0(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x18);
        cVar1 = FUN_145a48466(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_145a4843e;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_145a4843e:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a48466 FUN_145a48466 body=55 status=ok
// SIG undefined FUN_145a48466(void)

ulonglong FUN_145a48466(int *param_1,int *param_2)

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



// FUNCTION 145a4849e FUN_145a4849e body=250 status=ok
// SIG undefined FUN_145a4849e(void)

void FUN_145a4849e(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    uVar6 = (longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
            (longlong)(int)param_1[9] - 1U;
    lVar4 = (longlong)*(int *)((longlong)plVar5 + uVar6 * 4);
    if (lVar4 != -1) {
      lVar2 = *param_1;
      local_40 = *(undefined8 *)(lVar2 + lVar4 * 0x18);
      local_48 = param_2;
      cVar3 = FUN_145a48466();
      if (cVar3 == '\0') {
        puVar1 = (undefined8 *)(lVar2 + lVar4 * 0x18);
        do {
          puVar7 = puVar1;
          lVar4 = (longlong)*(int *)(puVar7 + 2);
          if (lVar4 == -1) goto LAB_145a4852a;
          puVar1 = (undefined8 *)(*param_1 + lVar4 * 0x18);
          local_40 = *puVar1;
          local_48 = param_2;
          cVar3 = FUN_145a48466(&local_40,&local_48);
        } while (cVar3 == '\0');
        puVar7 = puVar7 + 2;
      }
      else {
        puVar7 = (undefined8 *)((longlong)plVar5 + uVar6 * 4);
      }
      FUN_145a4859a(param_1,*(undefined4 *)puVar7);
    }
  }
LAB_145a4852a:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a4859a FUN_145a4859a body=85 status=ok
// SIG undefined FUN_145a4859a(void)

void FUN_145a4859a(longlong *param_1,int param_2)

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
  FUN_145a485f0();
  return;
}



// FUNCTION 145a485f0 FUN_145a485f0 body=116 status=ok
// SIG undefined FUN_145a485f0(void)

void FUN_145a485f0(longlong *param_1,int param_2)

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
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 145a48664 FUN_145a48664 body=49 status=ok
// SIG undefined FUN_145a48664(void)

void FUN_145a48664(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1470fbba2(param_1);
    }
    param_1 = param_1 + 0x18;
  }
  return;
}



// FUNCTION 145a48696 FUN_145a48696 body=103 status=ok
// SIG undefined FUN_145a48696(void)

ulonglong FUN_145a48696(longlong param_1)

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
LAB_145a486e0:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145a486e0;
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



// FUNCTION 145a486fe FUN_145a486fe body=601 status=ok
// SIG undefined FUN_145a486fe(void)

void FUN_145a486fe(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  undefined1 auStack_198 [40];
  longlong local_170 [12];
  undefined1 local_110 [16];
  undefined1 local_100 [80];
  undefined1 local_b0 [112];
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_198;
  plVar4 = (longlong *)(**(code **)(*param_2 + 0x98))(param_2);
  (**(code **)(*plVar4 + 0x48))(plVar4,local_110);
  lVar5 = FUN_145916402(param_1,local_100);
  FUN_141478002(local_110);
  if (lVar5 != 0) {
    uVar6 = (**(code **)(*param_2 + 0xa0))(param_2);
    plVar4 = (longlong *)(**(code **)(*param_2 + 0x98))(param_2);
    (**(code **)(*plVar4 + 0x48))(plVar4,local_170);
    FUN_1413ebcfe(local_110,local_170);
    FUN_140d600ee(local_b0,uVar6);
    local_40 = 0;
    iVar3 = *(int *)(lVar5 + 0x90);
    *(uint *)(lVar5 + 0x90) = iVar3 + 1U;
    if (*(uint *)(lVar5 + 0x94) < iVar3 + 1U) {
      FUN_145a48958((longlong *)(lVar5 + 0x88),iVar3);
    }
    lVar5 = *(longlong *)(lVar5 + 0x88);
    FUN_1413ebcfe(lVar5 + (longlong)iVar3 * 0xd8,local_110);
    lVar5 = (longlong)iVar3 * 0xd8 + lVar5;
    FUN_140d600ee(lVar5 + 0x60,local_b0);
    *(undefined2 *)(lVar5 + 0xd0) = local_40;
    FUN_140d5fbf2(local_b0);
    FUN_141478002(local_110);
    FUN_141478002(local_170);
    lVar5 = (**(code **)(*param_2 + 0xa0))(param_2);
    iVar3 = *(int *)(lVar5 + 0x18);
    if (iVar3 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    else {
      puVar7 = *(undefined2 **)(lVar5 + 0x10);
    }
    iVar1 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar1 = 0;
    }
    uVar2 = FUN_144a49b4a(iVar1,puVar7);
    iVar3 = FUN_1456cf568(param_1 + 0x20,uVar2,lVar5 + 0x10);
    if (iVar3 != -1) {
      lVar5 = (**(code **)(*param_2 + 0xa0))(param_2);
      (**(code **)(*param_1 + 0x158))(param_1,lVar5 + 0x10,1);
    }
    plVar4 = (longlong *)(**(code **)(*param_2 + 0x98))(param_2);
    (**(code **)(*plVar4 + 0x48))(plVar4,local_110);
    FUN_141478050(param_1,local_170,local_100);
    FUN_141478002(local_110);
    lVar5 = (**(code **)(*param_2 + 0xa0))(param_2);
    FUN_140b9d292(param_1 + 0x46,local_170,lVar5 + 0x10);
    if (local_170[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a48958 FUN_145a48958 body=146 status=ok
// SIG undefined FUN_145a48958(void)

void FUN_145a48958(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xd8,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xd8)) {
      uVar5 = uVar4 / 0xd8 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xd8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145a489ea FUN_145a489ea body=430 status=ok
// SIG undefined FUN_145a489ea(void)

void FUN_145a489ea(longlong param_1,longlong *param_2)

{
  void *_Src;
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_1a8 [40];
  undefined1 local_180 [96];
  void *local_120;
  int local_118;
  undefined4 local_114;
  undefined1 local_110 [80];
  undefined1 local_c0 [112];
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  plVar1 = (longlong *)(**(code **)(*param_2 + 0x98))(param_2);
  (**(code **)(*plVar1 + 0x48))(plVar1,&local_120);
  lVar2 = FUN_145916402(param_1,local_110);
  FUN_141478002(&local_120);
  if (lVar2 != 0) {
    uVar3 = (**(code **)(*param_2 + 0xa0))(param_2);
    plVar1 = (longlong *)(**(code **)(*param_2 + 0x98))(param_2);
    (**(code **)(*plVar1 + 0x48))(plVar1,local_180);
    FUN_1413ebcfe(&local_120,local_180);
    FUN_140d600ee(local_c0,uVar3);
    local_50 = 0;
    FUN_145a48b9a(lVar2 + 0x88,&local_120);
    FUN_140d5fbf2(local_c0);
    FUN_141478002(&local_120);
    FUN_141478002(local_180);
    local_120 = (void *)0x0;
    local_118 = *(int *)(lVar2 + 0x80);
    lVar4 = (longlong)local_118;
    _Src = *(void **)(lVar2 + 0x78);
    if (lVar4 == 0) {
      local_114 = 0;
    }
    else {
      FUN_1446dd670(&local_120,local_118,0);
      memcpy(local_120,_Src,lVar4 * 2);
    }
    lVar2 = (**(code **)(*param_2 + 0xa0))(param_2);
    FUN_140b9d292(param_1 + 0x290,&local_120,lVar2 + 0x10);
    if (local_120 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a48b9a FUN_145a48b9a body=234 status=ok
// SIG undefined FUN_145a48b9a(void)

void FUN_145a48b9a(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  bool bVar4;
  ulonglong uVar5;
  
  if (0 < (int)param_1[1]) {
    uVar5 = 0;
    bVar4 = false;
LAB_145a48bc3:
    do {
      lVar1 = *param_1;
      lVar3 = uVar5 * 0xd8;
      cVar2 = FUN_1414b3116(lVar1 + lVar3 + 0x60,param_2 + 0x60);
      if ((cVar2 != '\0') && (cVar2 = FUN_145cefc2c(lVar1 + lVar3,param_2), cVar2 != '\0')) {
        do {
          FUN_145a48d2c(param_1,uVar5 & 0xffffffff);
          if ((longlong)(int)param_1[1] <= (longlong)uVar5) goto LAB_145a48c41;
          lVar1 = *param_1;
          cVar2 = FUN_1414b3116(lVar1 + lVar3 + 0x60,param_2 + 0x60);
          if (cVar2 == '\0') {
            uVar5 = uVar5 + 1;
            bVar4 = true;
            if ((longlong)(int)param_1[1] <= (longlong)uVar5) goto LAB_145a48c41;
            goto LAB_145a48bc3;
          }
          cVar2 = FUN_145cefc2c(lVar1 + lVar3,param_2);
        } while (cVar2 != '\0');
        bVar4 = true;
      }
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)(int)param_1[1]);
    if (bVar4) {
LAB_145a48c41:
      FUN_145a48c84(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 145a48c84 FUN_145a48c84 body=63 status=ok
// SIG undefined FUN_145a48c84(void)

void FUN_145a48c84(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145a48cc4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xd8,8);
  }
  return;
}



// FUNCTION 145a48cc4 FUN_145a48cc4 body=103 status=ok
// SIG undefined FUN_145a48cc4(void)

ulonglong FUN_145a48cc4(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0xd8) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if ((param_1 == 0) || (0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0xd8,8);
      uVar1 = uVar1 / 0xd8;
    }
  }
  return uVar1;
}



// FUNCTION 145a48d2c FUN_145a48d2c body=126 status=ok
// SIG undefined FUN_145a48d2c(void)

void FUN_145a48d2c(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0xd8);
  FUN_140d5fbf2(lVar1 + (longlong)(int)param_2 * 0xd8 + 0x60);
  FUN_141478002(_Dst);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0xd8),(longlong)iVar3 * 0xd8);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 145a48daa FUN_145a48daa body=14 status=ok
// SIG undefined FUN_145a48daa(void)

void FUN_145a48daa(longlong param_1,longlong param_2)

{
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x20);
  return;
}



// FUNCTION 145a48dbe FUN_145a48dbe body=122 status=ok
// SIG undefined FUN_145a48dbe(void)

void FUN_145a48dbe(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1406078d6(puVar1,param_1);
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  *puVar1 = &PTR_FUN_14ad90b00;
  puVar1[0x21] = 0;
  uVar2 = FUN_144830b78(puVar1 + 0x22,&DAT_14cb42160);
  *(undefined4 *)(puVar1 + 0x22) = uVar2;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  *puVar1 = &PTR_FUN_14ad8f160;
  puVar1[0x25] = &PTR_FUN_14ad8f4b0;
  return;
}



// FUNCTION 145a48e38 FUN_145a48e38 body=104 status=ok
// SIG undefined FUN_145a48e38(void)

undefined8 FUN_145a48e38(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_145a48ea2(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a48ea2 FUN_145a48ea2 body=22 status=ok
// SIG undefined FUN_145a48ea2(void)

undefined8 FUN_145a48ea2(int *param_1)

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
  
  plVar4 = DAT_14cb8a9c8;
  if (DAT_14cb8a9c8 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb8a9c8 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb8a9c8 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb8a9c8[0x3a] <= *(int *)((longlong)DAT_14cb8a9c8 + 0x1fc))) {
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
    cVar5 = (**(code **)(*DAT_14cb8a9c8 + 0x300))(DAT_14cb8a9c8);
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



// FUNCTION 145a48eb8 FUN_145a48eb8 body=63 status=ok
// SIG undefined FUN_145a48eb8(void)

undefined1 FUN_145a48eb8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_145a48ef8(param_2,param_3);
    param_3 = param_3 + 0xd8;
    param_2 = param_2 + 0xd8;
  }
  return 1;
}



// FUNCTION 145a48ef8 FUN_145a48ef8 body=98 status=ok
// SIG undefined FUN_145a48ef8(void)

longlong FUN_145a48ef8(longlong param_1,longlong param_2)

{
  FUN_145a48f5a();
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  FUN_140816cc4(param_1 + 0x18,param_2 + 0x18);
  FUN_144881636(param_1 + 0x68,param_2 + 0x68);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  if (param_2 != param_1) {
    FUN_1401b31d8(param_1 + 0xc0,param_2 + 0xc0);
  }
  return param_1;
}



// FUNCTION 145a48f5a FUN_145a48f5a body=93 status=ok
// SIG undefined FUN_145a48f5a(void)

undefined8 * FUN_145a48f5a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1457e64f1(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c3fece(param_1,iVar1);
      FUN_148c3ff30(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145a48fb8 FUN_145a48fb8 body=48 status=ok
// SIG undefined FUN_145a48fb8(void)

void FUN_145a48fb8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x120,0x10);
  }
  return;
}



// FUNCTION 145a48fee FUN_145a48fee body=108 status=ok
// SIG undefined FUN_145a48fee(void)

void FUN_145a48fee(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (*(int *)(param_1 + 0x18) != 0) {
      uVar2 = 0;
      do {
        FUN_1400020a8(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + uVar2 * 8));
        *(undefined8 *)(*(longlong *)(param_1 + 0x20) + uVar2 * 8) = 0;
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0x18));
      lVar1 = *(longlong *)(param_1 + 0x20);
    }
    FUN_1400020a8(lVar1);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a4905a FUN_145a4905a body=40 status=ok
// SIG undefined FUN_145a4905a(void)

undefined8 FUN_145a4905a(undefined8 param_1,int param_2)

{
  FUN_145a49082();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a49082 FUN_145a49082 body=73 status=ok
// SIG undefined FUN_145a49082(void)

void FUN_145a49082(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aaa1b00;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14aa9f670;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a490cc FUN_145a490cc body=40 status=ok
// SIG undefined FUN_145a490cc(void)

undefined8 FUN_145a490cc(undefined8 param_1,int param_2)

{
  FUN_145a490f4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a490f4 FUN_145a490f4 body=73 status=ok
// SIG undefined FUN_145a490f4(void)

void FUN_145a490f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae032a0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ae02e60;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a4913e FUN_145a4913e body=40 status=ok
// SIG undefined FUN_145a4913e(void)

undefined8 FUN_145a4913e(undefined8 param_1,int param_2)

{
  FUN_145a49166();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a49166 FUN_145a49166 body=73 status=ok
// SIG undefined FUN_145a49166(void)

void FUN_145a49166(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b06e100;
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
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a491b0 FUN_145a491b0 body=40 status=ok
// SIG undefined FUN_145a491b0(void)

undefined8 FUN_145a491b0(undefined8 param_1,int param_2)

{
  FUN_145a491d8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a491d8 FUN_145a491d8 body=73 status=ok
// SIG undefined FUN_145a491d8(void)

void FUN_145a491d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4639c0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a49222 FUN_145a49222 body=40 status=ok
// SIG undefined FUN_145a49222(void)

undefined8 FUN_145a49222(undefined8 param_1,int param_2)

{
  FUN_145a4924a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a4924a FUN_145a4924a body=73 status=ok
// SIG undefined FUN_145a4924a(void)

void FUN_145a4924a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b466c40;
  FUN_1407e878c(param_1 + 10);
  FUN_1447cd778(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a49294 FUN_145a49294 body=40 status=ok
// SIG undefined FUN_145a49294(void)

undefined8 FUN_145a49294(undefined8 param_1,int param_2)

{
  FUN_145a492bc();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a492bc FUN_145a492bc body=73 status=ok
// SIG undefined FUN_145a492bc(void)

void FUN_145a492bc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4db890;
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a49306 FUN_145a49306 body=40 status=ok
// SIG undefined FUN_145a49306(void)

undefined8 FUN_145a49306(undefined8 param_1,int param_2)

{
  FUN_145a4932e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a4932e FUN_145a4932e body=73 status=ok
// SIG undefined FUN_145a4932e(void)

void FUN_145a4932e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4dbc40;
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a49378 FUN_145a49378 body=40 status=ok
// SIG undefined FUN_145a49378(void)

undefined8 FUN_145a49378(undefined8 param_1,int param_2)

{
  FUN_145a493a0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a493a0 FUN_145a493a0 body=73 status=ok
// SIG undefined FUN_145a493a0(void)

void FUN_145a493a0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4dd290;
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a493ea FUN_145a493ea body=40 status=ok
// SIG undefined FUN_145a493ea(void)

undefined8 FUN_145a493ea(undefined8 param_1,int param_2)

{
  FUN_145a49412();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a49412 FUN_145a49412 body=73 status=ok
// SIG undefined FUN_145a49412(void)

void FUN_145a49412(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4de6a0;
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a4945c FUN_145a4945c body=40 status=ok
// SIG undefined FUN_145a4945c(void)

undefined8 FUN_145a4945c(undefined8 param_1,int param_2)

{
  FUN_145a49484();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a49484 FUN_145a49484 body=73 status=ok
// SIG undefined FUN_145a49484(void)

void FUN_145a49484(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4dedc0;
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a494ce FUN_145a494ce body=40 status=ok
// SIG undefined FUN_145a494ce(void)

undefined8 FUN_145a494ce(undefined8 param_1,int param_2)

{
  FUN_145a494f6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a494f6 FUN_145a494f6 body=73 status=ok
// SIG undefined FUN_145a494f6(void)

void FUN_145a494f6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b709f00;
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
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a49540 FUN_145a49540 body=40 status=ok
// SIG undefined FUN_145a49540(void)

undefined8 FUN_145a49540(undefined8 param_1,int param_2)

{
  FUN_145a49568();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a49568 FUN_145a49568 body=73 status=ok
// SIG undefined FUN_145a49568(void)

void FUN_145a49568(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b7e44c0;
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
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a495b2 FUN_145a495b2 body=40 status=ok
// SIG undefined FUN_145a495b2(void)

undefined8 FUN_145a495b2(undefined8 param_1,int param_2)

{
  FUN_145a495da();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a495da FUN_145a495da body=73 status=ok
// SIG undefined FUN_145a495da(void)

void FUN_145a495da(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b7e48d0;
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
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a49624 FUN_145a49624 body=40 status=ok
// SIG undefined FUN_145a49624(void)

undefined8 FUN_145a49624(undefined8 param_1,int param_2)

{
  FUN_145a4964c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a4964c FUN_145a4964c body=222 status=ok
// SIG undefined FUN_145a4964c(void)

void FUN_145a4964c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bc16fe0;
  param_1[5] = &PTR_FUN_14bc172a0;
  FUN_1448eac94(param_1 + 0x29);
  FUN_1448eac94(param_1 + 0x24);
  plVar3 = (longlong *)param_1[0x23];
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
  FUN_145a4972a(param_1[0x20],*(undefined4 *)(param_1 + 0x21));
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1b));
  FUN_1448eac94(param_1 + 0x12);
  FUN_1448eac94(param_1 + 0xd);
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a4972a FUN_145a4972a body=77 status=ok
// SIG undefined FUN_145a4972a(void)

void FUN_145a4972a(longlong param_1,int param_2)

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



// FUNCTION 145a49777 FUN_145a49777 body=45 status=ok
// SIG undefined FUN_145a49777(void)

void FUN_145a49777(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145a497a4(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bc9c180;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  return;
}



// FUNCTION 145a497a4 FUN_145a497a4 body=68 status=ok
// SIG undefined FUN_145a497a4(void)

undefined8 * FUN_145a497a4(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = &PTR_FUN_14bc24070;
  FUN_144a5dc74(param_1 + 0xe);
  return param_1;
}



// FUNCTION 145a497e8 FUN_145a497e8 body=20144 status=ok
// SIG undefined FUN_145a497e8(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145a497e8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_df98 [32];
  undefined8 local_df78;
  undefined ***local_df70;
  undefined8 *local_df68;
  undefined8 local_df60;
  undefined8 local_df58;
  undefined8 local_df50;
  undefined8 local_df48;
  undefined8 local_df40;
  undefined8 local_df38;
  undefined8 local_df30;
  undefined8 local_df28;
  undefined8 local_df20;
  undefined8 local_df18;
  undefined8 local_df10;
  undefined8 local_df08;
  undefined8 local_df00;
  undefined8 local_def8;
  undefined8 local_def0;
  undefined8 local_dee8;
  undefined8 local_dee0;
  undefined8 local_ded8;
  undefined8 local_ded0;
  undefined8 local_dec8;
  undefined8 local_dec0;
  undefined **local_deb8 [20];
  longlong *local_de18;
  undefined8 local_de00;
  undefined **local_ddf8;
  undefined1 *puStack_ddf0;
  longlong *local_dd58;
  undefined8 local_dd40;
  undefined **local_dd38;
  undefined1 *puStack_dd30;
  longlong *local_dc98;
  undefined **local_dc80 [2];
  undefined **local_dc70;
  longlong local_dc68 [2];
  undefined **local_dc58;
  longlong local_dc50 [2];
  undefined **local_dc40;
  longlong local_dc38 [2];
  undefined **local_dc28;
  longlong local_dc20 [2];
  undefined **local_dc10;
  undefined **local_dc08;
  undefined1 *puStack_dc00;
  undefined **local_dbf8;
  undefined **local_dbf0;
  undefined **local_dbe8;
  undefined **local_dbe0;
  undefined8 local_dbd8;
  undefined8 local_dbd0;
  undefined **local_dbc8;
  longlong local_dbc0;
  undefined8 local_dbb8;
  undefined8 uStack_dbb0;
  longlong *local_db80;
  undefined4 local_db6c;
  undefined8 local_db58;
  undefined8 local_db50;
  undefined8 local_db48;
  undefined8 local_db40;
  undefined8 local_db38;
  undefined8 local_db30;
  undefined8 local_db28;
  undefined8 local_db20;
  undefined8 local_db18;
  undefined8 local_db10;
  undefined8 local_db08;
  undefined8 local_db00;
  undefined8 local_daf8;
  undefined8 local_daf0;
  undefined8 local_dae8;
  undefined8 local_dae0;
  undefined8 local_dad8;
  undefined8 local_dad0;
  undefined8 local_dac8;
  undefined8 local_dac0;
  undefined8 local_dab8;
  undefined8 local_dab0;
  undefined8 local_daa8;
  undefined8 local_daa0;
  undefined8 local_da98;
  undefined8 local_da90;
  undefined8 local_da88;
  undefined8 local_da80;
  undefined8 uStack_da78;
  undefined8 local_da70;
  undefined8 local_da60;
  undefined8 local_da58;
  undefined8 local_da50;
  undefined8 uStack_da48;
  undefined8 local_da40;
  undefined8 local_da30;
  undefined8 local_da28;
  undefined8 local_da20;
  undefined8 local_da18;
  undefined8 local_da10;
  undefined8 local_da00;
  undefined8 local_d9f8;
  undefined8 local_d9f0;
  undefined8 uStack_d9e8;
  undefined8 local_d9e0;
  undefined8 local_d9d0;
  undefined8 local_d9c8;
  undefined8 local_d9c0;
  undefined8 local_d9b8;
  undefined8 local_d9b0;
  undefined8 local_d9a0;
  undefined8 local_d998;
  undefined8 local_d990;
  undefined8 uStack_d988;
  undefined8 local_d980;
  undefined8 local_d970;
  undefined **local_d968;
  undefined1 *puStack_d960;
  longlong *plStack_d8c8;
  undefined8 local_d8b8;
  undefined8 local_d8b0;
  undefined8 local_d8a8;
  undefined8 local_d8a0;
  undefined4 local_d898;
  undefined4 uStack_d894;
  undefined4 uStack_d890;
  undefined4 uStack_d88c;
  undefined1 *local_d888;
  undefined8 uStack_d880;
  longlong local_d870 [3];
  undefined8 local_d858;
  undefined8 local_d850;
  undefined8 local_d848;
  undefined8 local_d840;
  undefined1 local_d834 [20];
  undefined8 local_d820;
  undefined1 local_d814 [20];
  undefined8 local_d800;
  undefined1 local_d7f4 [20];
  undefined8 local_d7e0;
  undefined8 local_d7d8;
  undefined8 local_d7d0;
  undefined **local_d7c8;
  undefined1 *puStack_d7c0;
  undefined1 local_d7b8 [144];
  longlong *local_d728;
  undefined **local_d448;
  undefined4 local_d440;
  undefined4 uStack_d43c;
  undefined4 uStack_d438;
  undefined4 uStack_d434;
  undefined4 local_d430;
  undefined4 uStack_d42c;
  undefined4 uStack_d428;
  undefined4 uStack_d424;
  undefined4 local_d420;
  undefined4 uStack_d41c;
  undefined4 uStack_d418;
  undefined4 uStack_d414;
  longlong local_d410;
  undefined8 local_d408 [10];
  undefined4 local_d3b8;
  undefined1 local_d3b4;
  undefined8 local_d3b0;
  longlong local_d3a8;
  undefined8 local_d3a0;
  undefined8 local_d398;
  undefined8 uStack_d390;
  undefined8 local_d388;
  undefined **local_d378;
  undefined4 local_d370;
  undefined4 uStack_d36c;
  undefined4 uStack_d368;
  undefined4 uStack_d364;
  undefined4 local_d360;
  undefined4 uStack_d35c;
  undefined4 uStack_d358;
  undefined4 uStack_d354;
  undefined4 local_d350;
  undefined4 uStack_d34c;
  undefined4 uStack_d348;
  undefined4 uStack_d344;
  longlong local_d340;
  undefined8 local_d338 [10];
  undefined4 local_d2e8;
  undefined1 local_d2e4;
  undefined8 local_d2e0;
  longlong local_d2d8;
  undefined8 local_d2d0;
  undefined4 local_d2c8;
  undefined4 uStack_d2c4;
  undefined4 uStack_d2c0;
  undefined4 uStack_d2bc;
  undefined4 local_d2b8;
  undefined4 uStack_d2b4;
  undefined4 uStack_d2b0;
  undefined4 uStack_d2ac;
  undefined4 local_d2a8;
  undefined4 uStack_d2a4;
  undefined4 uStack_d2a0;
  undefined4 uStack_d29c;
  undefined1 local_d298;
  undefined **local_d288;
  undefined8 uStack_d280;
  undefined1 local_d278 [144];
  longlong *local_d1e8;
  undefined1 local_d1c8 [176];
  undefined1 local_d118 [372];
  undefined8 local_cfa4;
  undefined8 uStack_cf9c;
  undefined4 local_cf94;
  undefined8 local_cf68;
  undefined8 uStack_cf60;
  undefined4 local_cf58;
  undefined4 uStack_cf54;
  undefined4 uStack_cf50;
  undefined4 uStack_cf4c;
  undefined **local_c938 [20];
  longlong *local_c898;
  undefined8 local_c618;
  undefined8 uStack_c610;
  undefined4 local_c608;
  undefined4 uStack_c604;
  undefined4 uStack_c600;
  undefined4 uStack_c5fc;
  undefined **local_c5c8;
  undefined1 local_c5c0 [8];
  undefined1 local_c5b8 [144];
  longlong *local_c528;
  undefined1 local_c508 [176];
  undefined1 local_c458 [176];
  undefined1 local_c3a8 [176];
  undefined1 local_c2f8 [176];
  undefined1 local_c248 [176];
  undefined1 local_c198 [176];
  undefined1 local_c0e8 [176];
  undefined1 local_c038 [1776];
  undefined **local_b948;
  undefined1 local_b940;
  undefined1 local_b938 [144];
  longlong *local_b8a8;
  undefined1 local_b888 [176];
  undefined1 local_b7d8 [176];
  undefined1 local_b728 [176];
  undefined4 local_b678;
  undefined4 uStack_b674;
  undefined4 uStack_b670;
  undefined4 uStack_b66c;
  undefined4 local_b668;
  undefined4 local_b664;
  undefined4 uStack_b660;
  undefined4 uStack_b65c;
  undefined4 uStack_b658;
  undefined4 local_b654;
  undefined4 local_b650;
  undefined4 uStack_b64c;
  undefined4 uStack_b648;
  undefined4 uStack_b644;
  undefined4 local_b640;
  undefined4 local_b63c;
  undefined4 uStack_b638;
  undefined4 uStack_b634;
  undefined4 uStack_b630;
  undefined4 local_b62c;
  undefined8 local_b628;
  undefined8 uStack_b620;
  undefined8 local_b618;
  undefined8 uStack_b610;
  undefined **local_b5c8;
  undefined4 local_b5c0;
  undefined4 uStack_b5bc;
  undefined4 uStack_b5b8;
  undefined4 uStack_b5b4;
  undefined4 local_b5b0;
  undefined4 uStack_b5ac;
  undefined4 uStack_b5a8;
  undefined4 uStack_b5a4;
  undefined4 local_b5a0;
  undefined4 uStack_b59c;
  undefined4 uStack_b598;
  undefined4 uStack_b594;
  longlong local_b590;
  undefined8 local_b588 [10];
  undefined4 local_b538;
  undefined1 local_b534;
  undefined8 local_b530;
  longlong local_b528;
  undefined8 local_b520;
  undefined8 local_b518;
  undefined8 uStack_b510;
  undefined8 local_b508;
  undefined **local_b4f8;
  undefined4 local_b4f0;
  undefined4 uStack_b4ec;
  undefined4 uStack_b4e8;
  undefined4 uStack_b4e4;
  undefined4 local_b4e0;
  undefined4 uStack_b4dc;
  undefined4 uStack_b4d8;
  undefined4 uStack_b4d4;
  undefined4 local_b4d0;
  undefined4 uStack_b4cc;
  undefined4 uStack_b4c8;
  undefined4 uStack_b4c4;
  longlong local_b4c0;
  undefined8 local_b4b8 [10];
  undefined4 local_b468;
  undefined1 local_b464;
  undefined8 local_b460;
  longlong local_b458;
  undefined8 local_b450;
  undefined8 local_b448;
  undefined8 uStack_b440;
  undefined8 local_b438;
  undefined8 uStack_b430;
  undefined4 local_b428;
  undefined4 uStack_b424;
  undefined4 uStack_b420;
  undefined4 uStack_b41c;
  undefined1 local_b418;
  undefined1 local_b3b8 [176];
  undefined8 local_b308;
  undefined8 uStack_b300;
  undefined1 local_b2f8 [176];
  undefined1 local_b248 [176];
  undefined1 local_b198 [176];
  undefined4 local_b0e8;
  undefined4 uStack_b0e4;
  undefined4 uStack_b0e0;
  undefined4 uStack_b0dc;
  undefined4 local_b0d8;
  undefined4 local_b0d4;
  undefined4 uStack_b0d0;
  undefined4 uStack_b0cc;
  undefined4 uStack_b0c8;
  undefined4 local_b0c4;
  undefined4 local_b0c0;
  undefined4 uStack_b0bc;
  undefined4 uStack_b0b8;
  undefined4 uStack_b0b4;
  undefined4 local_b0b0;
  undefined4 local_b0ac;
  undefined4 uStack_b0a8;
  undefined4 uStack_b0a4;
  undefined4 uStack_b0a0;
  undefined4 local_b09c;
  undefined4 local_b098;
  undefined4 uStack_b094;
  undefined4 uStack_b090;
  undefined4 uStack_b08c;
  undefined4 local_b088;
  undefined4 local_b084;
  undefined4 uStack_b080;
  undefined4 uStack_b07c;
  undefined4 uStack_b078;
  undefined4 local_b074;
  undefined4 local_b070;
  undefined4 uStack_b06c;
  undefined4 uStack_b068;
  undefined4 uStack_b064;
  undefined4 local_b060;
  undefined1 local_9e68 [880];
  undefined1 local_9af8 [176];
  undefined4 local_9a48;
  undefined4 uStack_9a44;
  undefined4 uStack_9a40;
  undefined4 uStack_9a3c;
  undefined8 local_9a38;
  undefined1 local_9a28 [176];
  undefined8 local_9978;
  undefined8 uStack_9970;
  undefined4 local_9968;
  undefined4 uStack_9964;
  undefined4 uStack_9960;
  undefined4 uStack_995c;
  undefined4 local_9958;
  undefined4 uStack_9954;
  undefined4 uStack_9950;
  undefined4 uStack_994c;
  undefined1 local_9948;
  undefined8 local_83c8;
  undefined8 uStack_83c0;
  undefined4 local_839c;
  undefined4 uStack_8398;
  undefined4 uStack_8394;
  undefined4 uStack_8390;
  undefined8 local_8388;
  undefined8 uStack_8380;
  undefined8 local_8378;
  undefined8 uStack_8370;
  undefined4 local_8368;
  undefined4 uStack_8364;
  undefined4 uStack_8360;
  undefined4 uStack_835c;
  undefined4 local_8338;
  undefined4 uStack_8334;
  undefined4 uStack_8330;
  undefined4 uStack_832c;
  undefined **local_82e8;
  undefined1 *puStack_82e0;
  undefined1 local_82d8 [144];
  longlong *local_8248;
  undefined1 local_8228 [528];
  undefined4 local_8018;
  undefined4 uStack_8014;
  undefined4 uStack_8010;
  undefined4 uStack_800c;
  undefined4 local_8008;
  undefined8 local_8004;
  undefined8 uStack_7ffc;
  undefined4 local_7ff4;
  undefined8 local_7ff0;
  undefined8 uStack_7fe8;
  undefined4 local_7fe0;
  undefined **local_7f68;
  undefined4 local_7f60;
  undefined4 uStack_7f5c;
  undefined4 uStack_7f58;
  undefined4 uStack_7f54;
  undefined4 local_7f50;
  undefined4 uStack_7f4c;
  undefined4 uStack_7f48;
  undefined4 uStack_7f44;
  undefined4 local_7f40;
  undefined4 uStack_7f3c;
  undefined4 uStack_7f38;
  undefined4 uStack_7f34;
  longlong local_7f30;
  undefined8 local_7f28 [10];
  undefined4 local_7ed8;
  undefined1 local_7ed4;
  undefined8 local_7ed0;
  longlong local_7ec8;
  undefined8 local_7ec0;
  undefined8 local_7eb8;
  undefined8 uStack_7eb0;
  undefined8 local_7ea8;
  undefined **local_7e98;
  undefined4 local_7e90;
  undefined4 uStack_7e8c;
  undefined4 uStack_7e88;
  undefined4 uStack_7e84;
  undefined4 local_7e80;
  undefined4 uStack_7e7c;
  undefined4 uStack_7e78;
  undefined4 uStack_7e74;
  undefined4 local_7e70;
  undefined4 uStack_7e6c;
  undefined4 uStack_7e68;
  undefined4 uStack_7e64;
  longlong local_7e60;
  undefined8 local_7e58 [10];
  undefined4 local_7e08;
  undefined1 local_7e04;
  undefined8 local_7e00;
  longlong local_7df8;
  undefined8 local_7df0;
  undefined4 local_7de8;
  undefined4 uStack_7de4;
  undefined4 uStack_7de0;
  undefined4 uStack_7ddc;
  undefined4 local_7dd8;
  undefined4 uStack_7dd4;
  undefined4 uStack_7dd0;
  undefined4 uStack_7dcc;
  undefined4 local_7dc8;
  undefined4 uStack_7dc4;
  undefined4 uStack_7dc0;
  undefined4 uStack_7dbc;
  undefined1 local_7db8;
  undefined **local_7da8;
  undefined8 uStack_7da0;
  longlong *local_7d08;
  undefined **local_7a38 [20];
  longlong *local_7998;
  undefined **local_76c8;
  undefined1 local_76c0;
  undefined1 local_76b8 [144];
  longlong *local_7628;
  undefined1 local_7608 [176];
  undefined1 local_7558 [176];
  undefined1 local_74a8 [176];
  undefined1 local_73f8 [176];
  undefined1 local_7348 [1488];
  undefined **local_6d78;
  undefined1 local_6d70;
  undefined7 uStack_6d6f;
  undefined1 local_6d68 [144];
  longlong *local_6cd8;
  undefined1 local_6cb8 [176];
  undefined1 local_6c08 [176];
  undefined1 local_6b58 [176];
  undefined4 local_6aa8;
  undefined4 uStack_6aa4;
  undefined4 uStack_6aa0;
  undefined4 uStack_6a9c;
  undefined4 local_6a98;
  undefined4 local_6a94;
  undefined4 uStack_6a90;
  undefined4 uStack_6a8c;
  undefined4 uStack_6a88;
  undefined4 local_6a84;
  undefined4 local_6a80;
  undefined4 uStack_6a7c;
  undefined4 uStack_6a78;
  undefined4 uStack_6a74;
  undefined4 local_6a70;
  undefined4 local_6a6c;
  undefined4 uStack_6a68;
  undefined4 uStack_6a64;
  undefined4 uStack_6a60;
  undefined4 local_6a5c;
  undefined8 local_6a58;
  undefined8 uStack_6a50;
  undefined8 local_6a48;
  undefined8 uStack_6a40;
  undefined **local_69f8;
  undefined4 local_69f0;
  undefined4 uStack_69ec;
  undefined4 uStack_69e8;
  undefined4 uStack_69e4;
  undefined4 local_69e0;
  undefined4 uStack_69dc;
  undefined4 uStack_69d8;
  undefined4 uStack_69d4;
  undefined4 local_69d0;
  undefined4 uStack_69cc;
  undefined4 uStack_69c8;
  undefined4 uStack_69c4;
  longlong local_69c0;
  undefined8 local_69b8 [10];
  undefined4 local_6968;
  undefined1 local_6964;
  undefined8 local_6960;
  longlong local_6958;
  undefined8 local_6950;
  undefined8 local_6948;
  undefined8 uStack_6940;
  undefined8 local_6938;
  undefined **local_6928;
  undefined4 local_6920;
  undefined4 uStack_691c;
  undefined4 uStack_6918;
  undefined4 uStack_6914;
  undefined4 local_6910;
  undefined4 uStack_690c;
  undefined4 uStack_6908;
  undefined4 uStack_6904;
  undefined4 local_6900;
  undefined4 uStack_68fc;
  undefined4 uStack_68f8;
  undefined4 uStack_68f4;
  longlong local_68f0;
  undefined8 auStack_68e8 [10];
  undefined4 local_6898;
  undefined1 local_6894;
  undefined8 local_6890;
  longlong local_6888;
  undefined8 local_6880;
  undefined8 local_6878;
  undefined8 uStack_6870;
  undefined4 local_6868;
  undefined4 uStack_6864;
  undefined4 uStack_6860;
  undefined4 uStack_685c;
  undefined4 local_6858;
  undefined4 uStack_6854;
  undefined4 uStack_6850;
  undefined4 uStack_684c;
  undefined1 local_6848;
  undefined1 local_67e8 [3056];
  undefined1 local_5bf8 [2400];
  undefined1 local_5298 [880];
  undefined1 local_4f28 [176];
  undefined4 local_4e78;
  undefined4 uStack_4e74;
  undefined4 uStack_4e70;
  undefined4 uStack_4e6c;
  undefined8 local_4e68;
  undefined1 local_4e58 [176];
  undefined8 local_4da8;
  undefined8 uStack_4da0;
  undefined4 local_4d98;
  undefined4 uStack_4d94;
  undefined4 uStack_4d90;
  undefined4 uStack_4d8c;
  undefined4 local_4d88;
  undefined4 uStack_4d84;
  undefined4 uStack_4d80;
  undefined4 uStack_4d7c;
  undefined1 local_4d78;
  undefined1 local_4d68 [896];
  undefined1 local_49e8 [880];
  undefined1 local_4678 [176];
  undefined4 local_45c8;
  undefined4 uStack_45c4;
  undefined4 uStack_45c0;
  undefined4 uStack_45bc;
  undefined8 local_45b8;
  undefined1 local_45a8 [176];
  undefined4 local_44f8;
  undefined4 uStack_44f4;
  undefined4 uStack_44f0;
  undefined4 uStack_44ec;
  undefined4 local_44e8;
  undefined4 uStack_44e4;
  undefined4 uStack_44e0;
  undefined4 uStack_44dc;
  undefined4 local_44d8;
  undefined4 uStack_44d4;
  undefined4 uStack_44d0;
  undefined4 uStack_44cc;
  undefined1 local_44c8;
  undefined1 local_44b8 [2384];
  undefined1 local_3b68 [924];
  undefined4 local_37cc;
  undefined4 uStack_37c8;
  undefined4 uStack_37c4;
  undefined4 uStack_37c0;
  undefined8 local_37b8;
  undefined8 uStack_37b0;
  undefined4 local_37a8;
  undefined4 uStack_37a4;
  undefined4 uStack_37a0;
  undefined4 uStack_379c;
  undefined8 local_3798;
  undefined8 uStack_3790;
  undefined8 local_3788;
  undefined8 uStack_3780;
  undefined4 local_3778;
  undefined4 uStack_3774;
  undefined4 uStack_3770;
  undefined4 uStack_376c;
  undefined4 local_3768;
  undefined4 uStack_3764;
  undefined4 uStack_3760;
  undefined4 uStack_375c;
  undefined **local_3758;
  undefined1 local_3750;
  undefined **local_3718;
  undefined1 *puStack_3710;
  undefined4 local_3708;
  undefined4 uStack_3704;
  undefined4 uStack_3700;
  undefined4 uStack_36fc;
  undefined4 local_36b0;
  undefined4 uStack_36ac;
  undefined4 uStack_36a8;
  undefined4 uStack_36a4;
  undefined4 local_36a0;
  undefined1 local_35a8 [176];
  undefined1 local_34f8 [200];
  undefined1 local_3430 [152];
  undefined1 local_3398 [176];
  undefined1 local_32e8 [176];
  undefined8 local_3238;
  undefined8 uStack_3230;
  undefined4 local_3228;
  undefined4 local_3224;
  undefined4 uStack_3220;
  undefined4 uStack_321c;
  undefined4 uStack_3218;
  undefined1 local_2598 [8336];
  undefined1 local_508 [1040];
  undefined **local_f8;
  ulonglong local_b0;
  undefined8 uStack_48;
  
  uStack_48 = 0x145a497fe;
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_df98;
  uVar4 = *param_1;
  FUN_1446ddc76(&local_d7d0,"NormalEditableTextBox",1);
  local_df58 = FUN_145817874(uVar4,local_d7d0,0,0);
  uVar4 = *param_1;
  FUN_1446ddc76(&local_d7d8,"NormalText",1);
  local_df60 = FUN_140a57516(uVar4,local_d7d8,0,0);
  uVar4 = *param_1;
  FUN_1446ddc76(&local_d7e0,"SmallButtonText",1);
  local_df40 = FUN_140a57516(uVar4,local_d7e0,0,0);
  plVar3 = (longlong *)*param_1;
  FUN_1446ddc76(&local_d800,"SelectionColor",1);
  local_df70 = (undefined ***)0x0;
  local_df78 = (undefined ***)&DAT_14c98de74;
  (**(code **)(*plVar3 + 0x40))(plVar3,local_d7f4,local_d800,0);
  plVar3 = (longlong *)*param_1;
  FUN_1446ddc76(&local_d820,"SelectionColor_Pressed",1);
  local_df70 = (undefined ***)0x0;
  local_df78 = (undefined ***)&DAT_14c98de74;
  (**(code **)(*plVar3 + 0x40))(plVar3,local_d814,local_d820,0);
  plVar3 = (longlong *)*param_1;
  FUN_1446ddc76(&local_d840,"SelectionColor_Pressed",1);
  local_df70 = (undefined ***)0x0;
  local_df78 = (undefined ***)&DAT_14c98de74;
  (**(code **)(*plVar3 + 0x40))(plVar3,local_d834,local_d840,0);
  plVar3 = (longlong *)*param_1;
  uVar4 = FUN_14001cc68(0xb0,0x10);
  local_3718 = (undefined **)&DAT_3f8000003f800000;
  puStack_3710 = &DAT_3f8000003f800000;
  local_b948 = DAT_14c968004;
  (**(code **)(*plVar3 + 0xe8))(plVar3,&local_6d78,"Icons/icon_generic_toolbar",&DAT_149eca162);
  local_df70 = (undefined ***)CONCAT44(local_df70._4_4_,1);
  local_df78 = (undefined ***)((ulonglong)local_df78 & 0xffffffff00000000);
  FUN_14140806a(uVar4,&local_6d78,&local_b948,&local_3718);
  FUN_1446ddc76(&local_d848,"MultiBox.GenericToolBarIcon",1);
  FUN_141408132(plVar3,local_d848,uVar4);
  if (local_6d78 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)*param_1;
  uVar4 = FUN_14001cc68(0xb0,0x10);
  local_3718 = (undefined **)&DAT_3f8000003f800000;
  puStack_3710 = &DAT_3f8000003f800000;
  local_b948 = DAT_14c967fd4;
  (**(code **)(*plVar3 + 0xe8))(plVar3,&local_6d78,"Icons/icon_generic_toolbar",&DAT_149eca162);
  local_df70 = (undefined ***)CONCAT44(local_df70._4_4_,1);
  local_df78 = (undefined ***)((ulonglong)local_df78 & 0xffffffff00000000);
  FUN_14140806a(uVar4,&local_6d78,&local_b948,&local_3718);
  FUN_1446ddc76(&local_d850,"MultiBox.GenericToolBarIcon.Small",1);
  FUN_141408132(plVar3,local_d850,uVar4);
  if (local_6d78 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  uVar4 = *param_1;
  local_3718 = (undefined **)0x3f80000000000000;
  puStack_3710 = (undefined1 *)0x3f80000000000000;
  FUN_1446ddc76(&local_d858,"MultiboxHookColor",1);
  FUN_141639e8e(uVar4,local_d858,&local_3718);
  FUN_145a4ed82(&local_6d78);
  FUN_1411bc404(&local_76c8,&DAT_14c98db9c);
  FUN_140f13d9e(local_6d68,&local_76c8);
  local_3768 = 0;
  uStack_3764 = 0x40800000;
  uStack_3760 = 0;
  uStack_375c = 0x40800000;
  local_d7c8 = (undefined **)&DAT_3f8000003f800000;
  puStack_d7c0 = &DAT_3f8000003f800000;
  local_7da8 = DAT_14c967fc4;
  (**(code **)(*(longlong *)*param_1 + 0xe8))
            ((longlong *)*param_1,local_7a38,"Icons/toolbar_expand_16x",&DAT_149eca162);
  local_df70 = (undefined ***)CONCAT44(local_df70._4_4_,1);
  local_df78 = (undefined ***)((ulonglong)local_df78 & 0xffffffff00000000);
  FUN_14140806a(&local_d288,local_7a38,&local_7da8,&local_d7c8);
  FUN_140f13d9e(local_6cb8,&local_d288);
  local_37b8 = 0x40800000;
  uStack_37b0 = 0x40800000;
  local_37a8 = 0x40000000;
  uStack_37a4 = 0;
  uStack_37a0 = 0x40000000;
  uStack_379c = 0;
  local_3798 = 0x40800000;
  uStack_3790 = 0x40800000;
  FUN_1411bc404(&local_82e8,&DAT_14c98dc50);
  FUN_140f13d9e(local_6c08,&local_82e8);
  local_37cc = 0x3f800000;
  uStack_37c8 = 0;
  uStack_37c4 = 0x3f800000;
  uStack_37c0 = 0;
  FUN_140e9ea3a(&local_c5c8,local_df60);
  uVar4 = FUN_145a4e762();
  FUN_1412cc59c(local_c5c0,uVar4);
  FUN_140a5e6b8(local_6b58,&local_c5c8);
  FUN_1414790b6(&local_b948,local_df58);
  uVar4 = FUN_145a4e762();
  FUN_1412cc59c(&uStack_b660,uVar4);
  FUN_1458a2fee(&local_6878,&local_b948);
  uVar4 = *param_1;
  FUN_1446ddc76(local_d870 + 2,"ComboButton",1);
  lVar5 = FUN_145a4e810(uVar4,local_d870[2],0,0);
  FUN_141254448(local_5298,lVar5 + 0x10);
  FUN_140f13d9e(local_4f28,lVar5 + 0x380);
  local_4e78 = *(undefined4 *)(lVar5 + 0x430);
  uStack_4e74 = *(undefined4 *)(lVar5 + 0x434);
  uStack_4e70 = *(undefined4 *)(lVar5 + 0x438);
  uStack_4e6c = *(undefined4 *)(lVar5 + 0x43c);
  local_4e68 = *(undefined8 *)(lVar5 + 0x440);
  FUN_140f13d9e(local_4e58,lVar5 + 0x450);
  local_4da8 = *(undefined8 *)(lVar5 + 0x500);
  uStack_4da0 = *(undefined8 *)(lVar5 + 0x508);
  local_4d98 = *(undefined4 *)(lVar5 + 0x510);
  uStack_4d94 = *(undefined4 *)(lVar5 + 0x514);
  uStack_4d90 = *(undefined4 *)(lVar5 + 0x518);
  uStack_4d8c = *(undefined4 *)(lVar5 + 0x51c);
  local_4d88 = *(undefined4 *)(lVar5 + 0x520);
  uStack_4d84 = *(undefined4 *)(lVar5 + 0x524);
  uStack_4d80 = *(undefined4 *)(lVar5 + 0x528);
  uStack_4d7c = *(undefined4 *)(lVar5 + 0x52c);
  local_4d78 = *(undefined1 *)(lVar5 + 0x530);
  local_3788 = 0x4000000040000000;
  uStack_3780 = 0x4080000040800000;
  local_3778 = 0x41900000;
  uStack_3774 = 0x40000000;
  uStack_3770 = 0x40800000;
  uStack_376c = 0x40800000;
  FUN_145a4eab8(&local_3718,&local_6d78);
  FUN_140ffd7a4(&local_b948);
  FUN_140e9e952(&local_c5c8);
  plVar3 = local_8248;
  local_82e8 = &PTR_FUN_149ed05f0;
  if (local_8248 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_8248 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_8248)(local_8248);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_d1e8;
  local_d288 = &PTR_FUN_149ed05f0;
  if (local_d1e8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d1e8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_d1e8)(local_d1e8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_7a38[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar3 = local_7628;
  local_76c8 = &PTR_FUN_149ed05f0;
  if (local_7628 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_7628 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_7628)(local_7628);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_140ffd4ee(&local_6d78);
  FUN_1414c3a06(&local_6d78);
  local_6d70 = 1;
  local_dc08 = DAT_14c84635c;
  FUN_1412ce202(&local_b948);
  FUN_140f13d9e(local_6d68,&local_b948);
  local_7da8 = (undefined **)0x3e8000003e800000;
  uStack_7da0 = 0x3e8000003e800000;
  (**(code **)(*(longlong *)*param_1 + 0xe8))
            ((longlong *)*param_1,local_c938,"Common/RoundedSelection_16x",&DAT_149eca162);
  local_df78._0_4_ = 1;
  local_df68 = param_1;
  FUN_141478850(&local_c5c8,local_c938,&local_7da8,local_d814);
  FUN_140f13d9e(local_6c08,&local_c5c8);
  local_d968 = (undefined **)0x3e8000003e800000;
  puStack_d960 = (undefined1 *)0x3e8000003e800000;
  (**(code **)(*(longlong *)*local_df68 + 0xe8))
            ((longlong *)*local_df68,&local_dd38,"Common/RoundedSelection_16x",&DAT_149eca162);
  local_df78._0_4_ = 1;
  FUN_141478850(&local_d288,&local_dd38,&local_d968,local_d7f4);
  FUN_140f13d9e(local_6cb8,&local_d288);
  local_ddf8 = (undefined **)0x3e8000003e800000;
  puStack_ddf0 = (undefined1 *)0x3e8000003e800000;
  (**(code **)(*(longlong *)*local_df68 + 0xe8))
            ((longlong *)*local_df68,local_deb8,"Common/RoundedSelection_16x",&DAT_149eca162);
  local_df78._0_4_ = 1;
  FUN_141478850(&local_82e8,local_deb8,&local_ddf8,local_d814);
  FUN_140f13d9e(local_6b58,&local_82e8);
  local_dbb8 = 0x3e8000003e800000;
  uStack_dbb0 = 0x3e8000003e800000;
  (**(code **)(*(longlong *)*local_df68 + 0xe8))
            ((longlong *)*local_df68,local_d870,"Common/RoundedSelection_16x",&DAT_149eca162);
  local_df78._0_4_ = 1;
  FUN_141478850(&local_d7c8,local_d870,&local_dbb8,local_d814);
  puVar10 = local_df68;
  FUN_140f13d9e(&local_6aa8,&local_d7c8);
  local_d888 = (undefined1 *)0x3e8000003e800000;
  uStack_d880 = 0x3e8000003e800000;
  (**(code **)(*(longlong *)*puVar10 + 0xe8))
            ((longlong *)*puVar10,&local_d898,"Common/RoundedSelection_16x",&DAT_149eca162);
  local_df78 = (undefined ***)CONCAT44(local_df78._4_4_,1);
  FUN_141478850(local_7a38,&local_d898,&local_d888,local_d7f4);
  FUN_140f13d9e(&local_69f8,local_7a38);
  FUN_141479b70(&local_76c8,&local_6d78);
  plVar3 = local_7998;
  local_7a38[0] = &PTR_FUN_149ed05f0;
  if (local_7998 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_7998 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_7998)(local_7998);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (CONCAT44(uStack_d894,local_d898) != 0) {
    FUN_1400020a8();
  }
  plVar3 = local_d728;
  local_d7c8 = &PTR_FUN_149ed05f0;
  if (local_d728 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d728 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_d728)(local_d728);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_d870[0] != 0) {
    FUN_1400020a8();
  }
  plVar3 = local_8248;
  local_82e8 = &PTR_FUN_149ed05f0;
  if (local_8248 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_8248 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_8248)(local_8248);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_deb8[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar3 = local_d1e8;
  local_d288 = &PTR_FUN_149ed05f0;
  if (local_d1e8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d1e8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_d1e8)(local_d1e8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_dd38 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar3 = local_c528;
  local_c5c8 = &PTR_FUN_149ed05f0;
  if (local_c528 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_c528 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_c528)(local_c528);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_c938[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar3 = local_b8a8;
  local_b948 = &PTR_FUN_149ed05f0;
  if (local_b8a8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_b8a8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_b8a8)(local_b8a8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_140ffdb16(&local_6d78);
  FUN_1414c3ed0(local_2598,&local_76c8);
  FUN_140ca8d78(&local_6d78);
  local_d968 = DAT_14c84635c;
  FUN_1412ce202(&local_b948);
  FUN_140f13d9e(local_6d68,&local_b948);
  local_82e8 = (undefined **)0x3e8000003e800000;
  puStack_82e0 = (undefined1 *)0x3e8000003e800000;
  (**(code **)(*(longlong *)*puVar10 + 0xe8))
            ((longlong *)*puVar10,&local_d7c8,"Common/RoundedSelection_16x",&DAT_149eca162);
  local_df78._0_4_ = 1;
  FUN_141478850(&local_c5c8,&local_d7c8,&local_82e8,local_d814);
  FUN_140f13d9e(local_6c08,&local_c5c8);
  local_7da8 = (undefined **)0x3e8000003e800000;
  uStack_7da0 = 0x3e8000003e800000;
  (**(code **)(*(longlong *)*puVar10 + 0xe8))
            ((longlong *)*puVar10,local_c938,"Common/RoundedSelection_16x",&DAT_149eca162);
  local_df78 = (undefined ***)CONCAT44(local_df78._4_4_,1);
  FUN_141478850(&local_d288,local_c938,&local_7da8,local_d7f4);
  FUN_140f13d9e(local_6cb8,&local_d288);
  local_6a58 = 0x4000000040000000;
  uStack_6a50 = 0x4000000040000000;
  local_6a48 = 0x4040000040000000;
  uStack_6a40 = 0x3f80000040000000;
  local_6aa8 = 0x3f800000;
  uStack_6aa4 = 0;
  uStack_6aa0 = 0x3f800000;
  uStack_6a9c = 0x3f800000;
  local_6a98 = CONCAT22(local_6a98._2_2_,2);
  local_6a80 = 0x3f800000;
  uStack_6a7c = 0;
  uStack_6a78 = 0x3f800000;
  uStack_6a74 = 0x3f800000;
  local_6a70 = CONCAT22(local_6a70._2_2_,2);
  local_6a94 = 0x3f800000;
  uStack_6a90 = 0;
  uStack_6a8c = 0x3f800000;
  uStack_6a88 = 0x3f800000;
  local_6a84 = CONCAT22(local_6a84._2_2_,2);
  local_6a6c = 0x3f800000;
  uStack_6a68 = 0;
  uStack_6a64 = 0x3f800000;
  uStack_6a60 = 0x3f800000;
  local_6a5c = CONCAT22(local_6a5c._2_2_,2);
  FUN_141478cf2(local_7a38,&local_6d78);
  plVar3 = local_d1e8;
  local_d288 = &PTR_FUN_149ed05f0;
  if (local_d1e8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d1e8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_d1e8)(local_d1e8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_c938[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar3 = local_c528;
  local_c5c8 = &PTR_FUN_149ed05f0;
  if (local_c528 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_c528 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_c528)(local_c528);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_d7c8 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar3 = local_b8a8;
  local_b948 = &PTR_FUN_149ed05f0;
  if (local_b8a8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_b8a8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_b8a8)(local_b8a8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_140ffd6b6(&local_6d78);
  FUN_141254448(local_508,local_7a38);
  local_f8 = DAT_14c968004;
  uVar4 = *puVar10;
  FUN_1446ddc76(&local_d8a0,"ToolBar",1);
  FUN_141478970(uVar4,local_d8a0,&local_3718);
  uVar4 = *puVar10;
  FUN_1446ddc76(&local_d8a8,"SimpleButton",1);
  local_df50 = FUN_141492734(uVar4,local_d8a8,0,0);
  FUN_141478cf2(&local_6d78,local_df50);
  local_6aa8 = _DAT_14c98dac0;
  uStack_6aa4 = uRam000000014c98dac4;
  uStack_6aa0 = uRam000000014c98dac8;
  uStack_6a9c = uRam000000014c98dacc;
  local_6a98 = DAT_14c98dad0;
  local_6a80 = _DAT_14c98db38;
  uStack_6a7c = uRam000000014c98db3c;
  uStack_6a78 = uRam000000014c98db40;
  uStack_6a74 = uRam000000014c98db44;
  local_6a70 = DAT_14c98db48;
  local_6a94 = _DAT_14c98db38;
  uStack_6a90 = uRam000000014c98db3c;
  uStack_6a8c = uRam000000014c98db40;
  uStack_6a88 = uRam000000014c98db44;
  local_6a84 = DAT_14c98db48;
  local_6a6c = _DAT_14c98dac0;
  uStack_6a68 = uRam000000014c98dac4;
  uStack_6a64 = uRam000000014c98dac8;
  uStack_6a60 = uRam000000014c98dacc;
  local_6a5c = DAT_14c98dad0;
  local_6a58 = 0x4080000041000000;
  uStack_6a50 = 0x4080000041000000;
  local_6a48 = 0x40a0000041000000;
  uStack_6a40 = 0x4040000041000000;
  FUN_141478cf2(&local_7da8,&local_6d78);
  FUN_140ffd6b6(&local_6d78);
  uVar4 = *puVar10;
  FUN_1446ddc76(&local_d8b0,"SimpleComboButton",1);
  lVar5 = FUN_145a4e810(uVar4,local_d8b0,0,0);
  local_6d78 = &PTR_FUN_149ee3280;
  FUN_141478cf2(local_6d68,lVar5 + 0x10);
  local_69f8 = &PTR_FUN_149ed05f0;
  local_69f0 = *(undefined4 *)(lVar5 + 0x388);
  uStack_69ec = *(undefined4 *)(lVar5 + 0x38c);
  uStack_69e8 = *(undefined4 *)(lVar5 + 0x390);
  uStack_69e4 = *(undefined4 *)(lVar5 + 0x394);
  local_69e0 = *(undefined4 *)(lVar5 + 0x398);
  uStack_69dc = *(undefined4 *)(lVar5 + 0x39c);
  uStack_69d8 = *(undefined4 *)(lVar5 + 0x3a0);
  uStack_69d4 = *(undefined4 *)(lVar5 + 0x3a4);
  local_69d0 = *(undefined4 *)(lVar5 + 0x3a8);
  uStack_69cc = *(undefined4 *)(lVar5 + 0x3ac);
  uStack_69c8 = *(undefined4 *)(lVar5 + 0x3b0);
  uStack_69c4 = *(undefined4 *)(lVar5 + 0x3b4);
  local_69c0 = *(longlong *)(lVar5 + 0x3b8);
  if ((DAT_14c950c29 == 1) && (local_69c0 != 0)) {
    FUN_1456cec3c();
  }
  puVar10 = (undefined8 *)(lVar5 + 0x3c0);
  puVar7 = local_69b8;
  for (lVar9 = 10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar7 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar7 = puVar7 + 1;
  }
  local_6964 = *(undefined1 *)(lVar5 + 0x414);
  local_6968 = *(undefined4 *)(lVar5 + 0x410);
  local_6960 = *(undefined8 *)(lVar5 + 0x418);
  local_6958 = *(longlong *)(lVar5 + 0x420);
  if (local_6958 != 0) {
    LOCK();
    *(int *)(local_6958 + 8) = *(int *)(local_6958 + 8) + 1;
    UNLOCK();
  }
  local_6950 = *(undefined8 *)(lVar5 + 0x428);
  local_6948 = *(undefined8 *)(lVar5 + 0x430);
  uStack_6940 = *(undefined8 *)(lVar5 + 0x438);
  local_6938 = *(undefined8 *)(lVar5 + 0x440);
  local_6928 = &PTR_FUN_149ed05f0;
  local_6920 = *(undefined4 *)(lVar5 + 0x458);
  uStack_691c = *(undefined4 *)(lVar5 + 0x45c);
  uStack_6918 = *(undefined4 *)(lVar5 + 0x460);
  uStack_6914 = *(undefined4 *)(lVar5 + 0x464);
  local_6910 = *(undefined4 *)(lVar5 + 0x468);
  uStack_690c = *(undefined4 *)(lVar5 + 0x46c);
  uStack_6908 = *(undefined4 *)(lVar5 + 0x470);
  uStack_6904 = *(undefined4 *)(lVar5 + 0x474);
  local_6900 = *(undefined4 *)(lVar5 + 0x478);
  uStack_68fc = *(undefined4 *)(lVar5 + 0x47c);
  uStack_68f8 = *(undefined4 *)(lVar5 + 0x480);
  uStack_68f4 = *(undefined4 *)(lVar5 + 0x484);
  local_68f0 = *(longlong *)(lVar5 + 0x488);
  if ((DAT_14c950c29 == 1) && (local_68f0 != 0)) {
    FUN_1456cec3c();
  }
  puVar10 = (undefined8 *)(lVar5 + 0x490);
  puVar7 = auStack_68e8;
  for (lVar9 = 10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar7 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar7 = puVar7 + 1;
  }
  local_6894 = *(undefined1 *)(lVar5 + 0x4e4);
  local_6898 = *(undefined4 *)(lVar5 + 0x4e0);
  local_6890 = *(undefined8 *)(lVar5 + 0x4e8);
  local_6888 = *(longlong *)(lVar5 + 0x4f0);
  if (local_6888 != 0) {
    LOCK();
    *(int *)(local_6888 + 8) = *(int *)(local_6888 + 8) + 1;
    UNLOCK();
  }
  local_6880 = *(undefined8 *)(lVar5 + 0x4f8);
  local_6878 = *(undefined8 *)(lVar5 + 0x500);
  uStack_6870 = *(undefined8 *)(lVar5 + 0x508);
  local_6868 = *(undefined4 *)(lVar5 + 0x510);
  uStack_6864 = *(undefined4 *)(lVar5 + 0x514);
  uStack_6860 = *(undefined4 *)(lVar5 + 0x518);
  uStack_685c = *(undefined4 *)(lVar5 + 0x51c);
  local_6848 = *(undefined1 *)(lVar5 + 0x530);
  local_6858 = 0x3f800000;
  uStack_6854 = 0;
  uStack_6850 = 0x40000000;
  uStack_684c = 0;
  local_82e8 = &PTR_FUN_149ee3280;
  FUN_141478cf2(local_82d8,local_6d68);
  local_7f68 = &PTR_FUN_149ed05f0;
  local_7f60 = local_69f0;
  uStack_7f5c = uStack_69ec;
  uStack_7f58 = uStack_69e8;
  uStack_7f54 = uStack_69e4;
  local_7f50 = local_69e0;
  uStack_7f4c = uStack_69dc;
  uStack_7f48 = uStack_69d8;
  uStack_7f44 = uStack_69d4;
  local_7f40 = local_69d0;
  uStack_7f3c = uStack_69cc;
  uStack_7f38 = uStack_69c8;
  uStack_7f34 = uStack_69c4;
  local_7f30 = local_69c0;
  if ((local_69c0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar10 = local_69b8;
  puVar7 = local_7f28;
  for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar7 = puVar7 + 1;
  }
  local_7ed4 = local_6964;
  local_7ed8 = local_6968;
  local_7ed0 = local_6960;
  local_7ec8 = local_6958;
  if (local_6958 != 0) {
    LOCK();
    *(int *)(local_6958 + 8) = *(int *)(local_6958 + 8) + 1;
    UNLOCK();
  }
  local_7ec0 = local_6950;
  local_7eb8 = local_6948;
  uStack_7eb0 = uStack_6940;
  local_7ea8 = local_6938;
  local_7e98 = &PTR_FUN_149ed05f0;
  local_7e90 = local_6920;
  uStack_7e8c = uStack_691c;
  uStack_7e88 = uStack_6918;
  uStack_7e84 = uStack_6914;
  local_7e80 = local_6910;
  uStack_7e7c = uStack_690c;
  uStack_7e78 = uStack_6908;
  uStack_7e74 = uStack_6904;
  local_7e70 = local_6900;
  uStack_7e6c = uStack_68fc;
  uStack_7e68 = uStack_68f8;
  uStack_7e64 = uStack_68f4;
  local_7e60 = local_68f0;
  if ((local_68f0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar10 = auStack_68e8;
  puVar7 = local_7e58;
  for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar7 = puVar7 + 1;
  }
  local_7e04 = local_6894;
  local_7e08 = local_6898;
  local_7e00 = local_6890;
  local_7df8 = local_6888;
  if (local_6888 != 0) {
    LOCK();
    *(int *)(local_6888 + 8) = *(int *)(local_6888 + 8) + 1;
    UNLOCK();
  }
  local_7df0 = local_6880;
  local_7de8 = (undefined4)local_6878;
  uStack_7de4 = local_6878._4_4_;
  uStack_7de0 = (undefined4)uStack_6870;
  uStack_7ddc = uStack_6870._4_4_;
  local_7dd8 = local_6868;
  uStack_7dd4 = uStack_6864;
  uStack_7dd0 = uStack_6860;
  uStack_7dcc = uStack_685c;
  local_7dc8 = local_6858;
  uStack_7dc4 = uStack_6854;
  uStack_7dc0 = uStack_6850;
  uStack_7dbc = uStack_684c;
  local_7db8 = local_6848;
  FUN_140ffd624();
  uVar4 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar4,&DAT_14c98db9c);
  FUN_145a4ed82(&local_b948);
  local_df48 = uVar4;
  FUN_140f13d9e(local_b938,uVar4);
  local_8338 = 0x40800000;
  uStack_8334 = 0x40c00000;
  uStack_8330 = 0x40800000;
  uStack_832c = 0x40c00000;
  local_d968 = (undefined **)&DAT_3f8000003f800000;
  puStack_d960 = &DAT_3f8000003f800000;
  local_ddf8 = DAT_14c967fc4;
  (**(code **)(*(longlong *)*local_df68 + 0xe8))
            ((longlong *)*local_df68,&local_dd38,"Icons/toolbar_expand_16x",&DAT_149eca162);
  local_df70 = (undefined ***)CONCAT44(local_df70._4_4_,1);
  local_df78 = (undefined ***)((ulonglong)local_df78 & 0xffffffff00000000);
  FUN_14140806a(&local_d7c8,&local_dd38,&local_ddf8,&local_d968);
  FUN_140f13d9e(local_b888,&local_d7c8);
  local_8388 = 0;
  uStack_8380 = 0;
  local_8378 = 0x40800000;
  uStack_8370 = 0x40800000;
  local_8368 = 0x41000000;
  uStack_8364 = 0;
  uStack_8360 = 0x41000000;
  uStack_835c = 0;
  FUN_1411bc404(local_c938,&DAT_14c98dc14);
  FUN_140f13d9e(local_b7d8,local_c938);
  local_839c = 0x40800000;
  uStack_8398 = 0xc0a00000;
  uStack_8394 = 0x40800000;
  uStack_8390 = 0xc0a00000;
  FUN_140e9ea3a(&local_d288,local_df60);
  FUN_140a5e6b8(local_b728,&local_d288);
  FUN_141254448(local_9e68,local_82d8);
  FUN_140f13d9e(local_9af8,&local_7f68);
  local_9a48 = (undefined4)local_7eb8;
  uStack_9a44 = local_7eb8._4_4_;
  uStack_9a40 = (undefined4)uStack_7eb0;
  uStack_9a3c = uStack_7eb0._4_4_;
  local_9a38 = local_7ea8;
  FUN_140f13d9e(local_9a28,&local_7e98);
  local_9978 = CONCAT44(uStack_7de4,local_7de8);
  uStack_9970 = CONCAT44(uStack_7ddc,uStack_7de0);
  local_9968 = local_7dd8;
  uStack_9964 = uStack_7dd4;
  uStack_9960 = uStack_7dd0;
  uStack_995c = uStack_7dcc;
  local_9958 = local_7dc8;
  uStack_9954 = uStack_7dc4;
  uStack_9950 = uStack_7dc0;
  uStack_994c = uStack_7dbc;
  local_9948 = local_7db8;
  local_83c8 = 0x40800000;
  uStack_83c0 = 0;
  FUN_1414790b6(&local_c5c8,local_df58);
  FUN_1458a2fee(&local_b448,&local_c5c8);
  FUN_145a4eab8(&local_6d78,&local_b948);
  FUN_140ffd7a4(&local_c5c8);
  FUN_140e9e952(&local_d288);
  plVar3 = local_c898;
  local_c938[0] = &PTR_FUN_149ed05f0;
  if (local_c898 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_c898 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_c898)(local_c898);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_d728;
  local_d7c8 = &PTR_FUN_149ed05f0;
  if (local_d728 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d728 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_d728)(local_d728);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_dd38 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  FUN_140ffd4ee(&local_b948);
  uVar4 = *local_df68;
  FUN_1446ddc76(&local_d8b8,"ToggleButtonCheckbox",1);
  uVar4 = FUN_145a4e88a(uVar4,local_d8b8,0,0);
  FUN_141479b70(&local_b948,uVar4);
  local_b308 = 0x4080000041000000;
  uStack_b300 = 0x4080000041000000;
  FUN_141479b70(&local_c5c8,&local_b948);
  FUN_140ffdb16(&local_b948);
  FUN_1414c3ed0(local_5bf8,&local_c5c8);
  FUN_141254448(local_3b68,&local_7da8);
  FUN_141478cf2(&local_b948,local_df50);
  local_dd38 = DAT_14c84635c;
  FUN_1412ce202(&local_d288);
  FUN_140f13d9e(local_b7d8,&local_d288);
  local_ddf8 = DAT_14c84635c;
  FUN_1412ce202(&local_d7c8);
  FUN_140f13d9e(local_b888,&local_d7c8);
  local_deb8[0] = DAT_14c84635c;
  FUN_1412ce202(&local_d968);
  FUN_140f13d9e(local_b938,&local_d968);
  local_b678 = _DAT_14c98dac0;
  uStack_b674 = uRam000000014c98dac4;
  uStack_b670 = uRam000000014c98dac8;
  uStack_b66c = uRam000000014c98dacc;
  local_b668 = DAT_14c98dad0;
  local_b650 = _DAT_14c98db38;
  uStack_b64c = uRam000000014c98db3c;
  uStack_b648 = uRam000000014c98db40;
  uStack_b644 = uRam000000014c98db44;
  local_b640 = DAT_14c98db48;
  local_b664 = _DAT_14c98db38;
  uStack_b660 = uRam000000014c98db3c;
  uStack_b65c = uRam000000014c98db40;
  uStack_b658 = uRam000000014c98db44;
  local_b654 = DAT_14c98db48;
  local_b63c = _DAT_14c98dac0;
  uStack_b638 = uRam000000014c98dac4;
  uStack_b634 = uRam000000014c98dac8;
  uStack_b630 = uRam000000014c98dacc;
  local_b62c = DAT_14c98dad0;
  local_b628 = 0x4080000041000000;
  uStack_b620 = 0x4080000041000000;
  local_b618 = 0x40a0000041000000;
  uStack_b610 = 0x4040000041000000;
  FUN_141478cf2(local_c938,&local_b948);
  plVar3 = plStack_d8c8;
  local_d968 = &PTR_FUN_149ed05f0;
  if (plStack_d8c8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_d8c8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_d8c8)(plStack_d8c8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_d728;
  local_d7c8 = &PTR_FUN_149ed05f0;
  if (local_d728 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d728 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_d728)(local_d728);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_d1e8;
  local_d288 = &PTR_FUN_149ed05f0;
  if (local_d1e8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d1e8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_d1e8)(local_d1e8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_140ffd6b6(&local_b948);
  uVar4 = *local_df68;
  FUN_1446ddc76(&local_d970,"TransparentCheckBox",1);
  uVar4 = FUN_145a4e88a(uVar4,local_d970,0,0);
  FUN_141479b70(&local_b948,uVar4);
  local_b308 = 0x4080000041000000;
  uStack_b300 = 0x4080000041000000;
  FUN_141479b70(&local_d288,&local_b948);
  FUN_140ffdb16(&local_b948);
  FUN_141254448(local_4d68,local_c938);
  FUN_1414c3ed0(local_44b8,&local_d288);
  local_3758 = DAT_14c967fd4;
  local_c618 = 0x4080000040800000;
  uStack_c610 = 0x4080000040800000;
  local_c608 = 0x40800000;
  uStack_c604 = 0x40a00000;
  uStack_c600 = 0x40800000;
  uStack_c5fc = 0x40400000;
  local_b948 = &PTR_FUN_149ee3280;
  FUN_141478cf2(local_b938,local_82d8);
  local_b5c8 = &PTR_FUN_149ed05f0;
  local_b5c0 = local_7f60;
  uStack_b5bc = uStack_7f5c;
  uStack_b5b8 = uStack_7f58;
  uStack_b5b4 = uStack_7f54;
  local_b5b0 = local_7f50;
  uStack_b5ac = uStack_7f4c;
  uStack_b5a8 = uStack_7f48;
  uStack_b5a4 = uStack_7f44;
  local_b5a0 = local_7f40;
  uStack_b59c = uStack_7f3c;
  uStack_b598 = uStack_7f38;
  uStack_b594 = uStack_7f34;
  local_b590 = local_7f30;
  if ((local_7f30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar10 = local_7f28;
  puVar7 = local_b588;
  for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar7 = puVar7 + 1;
  }
  local_b534 = local_7ed4;
  local_b538 = local_7ed8;
  local_b530 = local_7ed0;
  local_b528 = local_7ec8;
  if (local_7ec8 != 0) {
    LOCK();
    *(int *)(local_7ec8 + 8) = *(int *)(local_7ec8 + 8) + 1;
    UNLOCK();
  }
  local_b520 = local_7ec0;
  local_b518 = local_7eb8;
  uStack_b510 = uStack_7eb0;
  local_b508 = local_7ea8;
  local_b4f8 = &PTR_FUN_149ed05f0;
  local_b4f0 = local_7e90;
  uStack_b4ec = uStack_7e8c;
  uStack_b4e8 = uStack_7e88;
  uStack_b4e4 = uStack_7e84;
  local_b4e0 = local_7e80;
  uStack_b4dc = uStack_7e7c;
  uStack_b4d8 = uStack_7e78;
  uStack_b4d4 = uStack_7e74;
  local_b4d0 = local_7e70;
  uStack_b4cc = uStack_7e6c;
  uStack_b4c8 = uStack_7e68;
  uStack_b4c4 = uStack_7e64;
  local_b4c0 = local_7e60;
  if ((local_7e60 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar10 = local_7e58;
  puVar7 = local_b4b8;
  for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar7 = puVar7 + 1;
  }
  local_b464 = local_7e04;
  local_b468 = local_7e08;
  local_b460 = local_7e00;
  local_b458 = local_7df8;
  if (local_7df8 != 0) {
    LOCK();
    *(int *)(local_7df8 + 8) = *(int *)(local_7df8 + 8) + 1;
    UNLOCK();
  }
  local_b450 = local_7df0;
  local_b448 = CONCAT44(uStack_7de4,local_7de8);
  uStack_b440 = CONCAT44(uStack_7ddc,uStack_7de0);
  local_b428 = local_7dc8;
  uStack_b424 = uStack_7dc4;
  uStack_b420 = uStack_7dc0;
  uStack_b41c = uStack_7dbc;
  local_b418 = local_7db8;
  local_b438 = 0;
  uStack_b430 = 0;
  FUN_141254448(local_b938,local_c938);
  local_dd38 = (undefined **)&DAT_3f8000003f800000;
  puStack_dd30 = &DAT_3f8000003f800000;
  local_deb8[0] = (undefined **)0x41a0000040c00000;
  (**(code **)(*(longlong *)*local_df68 + 0xe8))
            ((longlong *)*local_df68,&local_ddf8,"Starship/Common/ellipsis-vertical-narrow",L".svg")
  ;
  local_df70 = (undefined ***)CONCAT44(local_df70._4_4_,3);
  local_df78 = (undefined ***)((ulonglong)local_df78 & 0xffffffff00000000);
  FUN_14140806a(&local_d968,&local_ddf8,local_deb8,&local_dd38);
  local_d968 = &PTR_FUN_149eeb468;
  FUN_140f13d9e(&local_b5c8,&local_d968);
  local_d7c8 = &PTR_FUN_149ee3280;
  FUN_141478cf2(local_d7b8,local_b938);
  local_d448 = &PTR_FUN_149ed05f0;
  local_d440 = local_b5c0;
  uStack_d43c = uStack_b5bc;
  uStack_d438 = uStack_b5b8;
  uStack_d434 = uStack_b5b4;
  local_d430 = local_b5b0;
  uStack_d42c = uStack_b5ac;
  uStack_d428 = uStack_b5a8;
  uStack_d424 = uStack_b5a4;
  local_d420 = local_b5a0;
  uStack_d41c = uStack_b59c;
  uStack_d418 = uStack_b598;
  uStack_d414 = uStack_b594;
  local_d410 = local_b590;
  if ((local_b590 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar10 = local_df68;
  puVar7 = local_b588;
  puVar11 = local_d408;
  for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar11 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar11 = puVar11 + 1;
  }
  local_d3b4 = local_b534;
  local_d3b8 = local_b538;
  local_d3b0 = local_b530;
  local_d3a8 = local_b528;
  if (local_b528 != 0) {
    LOCK();
    *(int *)(local_b528 + 8) = *(int *)(local_b528 + 8) + 1;
    UNLOCK();
  }
  local_d3a0 = local_b520;
  local_d398 = local_b518;
  uStack_d390 = uStack_b510;
  local_d388 = local_b508;
  local_d378 = &PTR_FUN_149ed05f0;
  local_d370 = local_b4f0;
  uStack_d36c = uStack_b4ec;
  uStack_d368 = uStack_b4e8;
  uStack_d364 = uStack_b4e4;
  local_d360 = local_b4e0;
  uStack_d35c = uStack_b4dc;
  uStack_d358 = uStack_b4d8;
  uStack_d354 = uStack_b4d4;
  local_d350 = local_b4d0;
  uStack_d34c = uStack_b4cc;
  uStack_d348 = uStack_b4c8;
  uStack_d344 = uStack_b4c4;
  local_d340 = local_b4c0;
  if ((local_b4c0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  plVar3 = plStack_d8c8;
  puVar7 = local_b4b8;
  puVar11 = local_d338;
  for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar11 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar11 = puVar11 + 1;
  }
  local_d2e4 = local_b464;
  local_d2e8 = local_b468;
  local_d2e0 = local_b460;
  local_d2d8 = local_b458;
  if (local_b458 != 0) {
    LOCK();
    *(int *)(local_b458 + 8) = *(int *)(local_b458 + 8) + 1;
    UNLOCK();
  }
  local_d2d0 = local_b450;
  local_d2c8 = (undefined4)local_b448;
  uStack_d2c4 = local_b448._4_4_;
  uStack_d2c0 = (undefined4)uStack_b440;
  uStack_d2bc = uStack_b440._4_4_;
  local_d2b8 = (undefined4)local_b438;
  uStack_d2b4 = local_b438._4_4_;
  uStack_d2b0 = (undefined4)uStack_b430;
  uStack_d2ac = uStack_b430._4_4_;
  local_d2a8 = local_b428;
  uStack_d2a4 = uStack_b424;
  uStack_d2a0 = uStack_b420;
  uStack_d29c = uStack_b41c;
  local_d298 = local_b418;
  local_d968 = &PTR_FUN_149ed05f0;
  if (plStack_d8c8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_d8c8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_d8c8)(plStack_d8c8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_ddf8 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  FUN_140ffd624(&local_b948);
  FUN_141254448(local_49e8,local_d7b8);
  FUN_140f13d9e(local_4678,&local_d448);
  local_45c8 = (undefined4)local_d398;
  uStack_45c4 = local_d398._4_4_;
  uStack_45c0 = (undefined4)uStack_d390;
  uStack_45bc = uStack_d390._4_4_;
  local_45b8 = local_d388;
  FUN_140f13d9e(local_45a8,&local_d378);
  local_44f8 = local_d2c8;
  uStack_44f4 = uStack_d2c4;
  uStack_44f0 = uStack_d2c0;
  uStack_44ec = uStack_d2bc;
  local_44e8 = local_d2b8;
  uStack_44e4 = uStack_d2b4;
  uStack_44e0 = uStack_d2b0;
  uStack_44dc = uStack_d2ac;
  local_44d8 = local_d2a8;
  uStack_44d4 = uStack_d2a4;
  uStack_44d0 = uStack_d2a0;
  uStack_44cc = uStack_d29c;
  local_44c8 = local_d298;
  uVar4 = *puVar10;
  uVar6 = FUN_14001cc68(0xb0,0x10);
  local_b948 = DAT_14c84635c;
  local_d998 = 0x4010000000000000;
  local_d990 = 0;
  uStack_d988 = 0;
  local_d980 = 0x4010000000000000;
  FUN_145a4e904(uVar6,&DAT_14c98dae8,&local_d998,&local_b948);
  FUN_1446ddc76(&local_d9a0,"ToolbarSettingsRegion.LeftHover",1);
  FUN_1414787f0(uVar4,local_d9a0,uVar6);
  uVar4 = *puVar10;
  uVar6 = FUN_14001cc68(0xb0,0x10);
  local_b948 = DAT_14c84635c;
  local_d9c8 = 0;
  local_d9c0 = 0x4010000000000000;
  local_d9b8 = 0x4010000000000000;
  local_d9b0 = 0;
  FUN_145a4e904(uVar6,&DAT_14c98dae8,&local_d9c8,&local_b948);
  FUN_1446ddc76(&local_d9d0,"ToolbarSettingsRegion.RightHover",1);
  FUN_1414787f0(uVar4,local_d9d0,uVar6);
  uVar4 = *puVar10;
  uVar6 = FUN_14001cc68(0xb0,0x10);
  local_b948 = DAT_14c84635c;
  local_d9f8 = 0x4010000000000000;
  local_d9f0 = 0;
  uStack_d9e8 = 0;
  local_d9e0 = 0x4010000000000000;
  local_df78 = &local_b948;
  FUN_145a4e9d8(uVar6,&DAT_14c98dbc4,&local_d9f8,&DAT_14c98dc78);
  FUN_1446ddc76(&local_da00,"ToolbarSettingsRegion.Left",1);
  FUN_1414787f0(uVar4,local_da00,uVar6);
  uVar4 = *puVar10;
  uVar6 = FUN_14001cc68(0xb0,0x10);
  local_b948 = DAT_14c84635c;
  local_da28 = 0;
  local_da20 = 0x4010000000000000;
  local_da18 = 0x4010000000000000;
  local_da10 = 0;
  local_df78 = &local_b948;
  FUN_145a4e9d8(uVar6,&DAT_14c98dbc4,&local_da28,&DAT_14c98dc78);
  FUN_1446ddc76(&local_da30,"ToolbarSettingsRegion.Right",1);
  FUN_1414787f0(uVar4,local_da30,uVar6);
  uVar4 = *puVar10;
  uVar6 = FUN_14001cc68(0xb0,0x10);
  local_b948 = DAT_14c84635c;
  local_da58 = 0x4010000000000000;
  local_da50 = 0;
  uStack_da48 = 0;
  local_da40 = 0x4010000000000000;
  FUN_145a4e904(uVar6,&DAT_14c98dbec,&local_da58,&local_b948);
  FUN_1446ddc76(&local_da60,"ToolbarSettingsRegion.LeftToggleHover",1);
  FUN_1414787f0(uVar4,local_da60,uVar6);
  uVar4 = *puVar10;
  uVar6 = FUN_14001cc68(0xb0,0x10);
  local_b948 = DAT_14c84635c;
  local_da88 = 0x4010000000000000;
  local_da80 = 0;
  uStack_da78 = 0;
  local_da70 = 0x4010000000000000;
  FUN_145a4e904(uVar6,&DAT_14c98db10,&local_da88,&local_b948);
  FUN_1446ddc76(&local_da90,"ToolbarSettingsRegion.LeftToggle",1);
  FUN_1414787f0(uVar4,local_da90,uVar6);
  uVar4 = *puVar10;
  FUN_1446ddc76(&local_da98,"SlimToolBar",1);
  FUN_141478970(uVar4,local_da98,&local_6d78);
  local_3750 = 0;
  uVar4 = *puVar10;
  FUN_1446ddc76(&local_daa0,"AssetEditorToolbar",1);
  FUN_141478970(uVar4,local_daa0,&local_6d78);
  uVar4 = *puVar10;
  FUN_1446ddc76(&local_daa8,"AssetEditorToolbar.Background",1);
  FUN_1414f0b62(uVar4,local_daa8,local_df48);
  FUN_145a4eab8(&local_b948,&local_6d78);
  uVar4 = *puVar10;
  FUN_1446ddc76(&local_dab0,"SecondaryToolbar",1);
  FUN_141478970(uVar4,local_dab0,&local_b948);
  FUN_140ffd4ee(&local_b948);
  local_3750 = 1;
  uVar4 = *puVar10;
  FUN_1446ddc76(&local_dab8,"CalloutToolbar",1);
  FUN_141478970(uVar4,local_dab8,&local_6d78);
  FUN_140ffd624(&local_d7c8);
  FUN_140ffdb16(&local_d288);
  FUN_140ffd6b6(local_c938);
  FUN_140ffdb16(&local_c5c8);
  FUN_140ffd4ee(&local_6d78);
  FUN_140ffd624(&local_82e8);
  FUN_140ffd6b6(&local_7da8);
  FUN_140ffd6b6(local_7a38);
  FUN_140ffdb16(&local_76c8);
  FUN_140ffd4ee(&local_3718);
  uVar4 = *puVar10;
  uVar6 = FUN_14001cc68(0xb0,0x10);
  local_3718 = DAT_14c84635c;
  FUN_14154bc0c(uVar6,&DAT_14c98dc00,0x40a00000,&local_3718);
  FUN_1446ddc76(&local_dac0,"Menu.WidgetBorder",1);
  FUN_1414787f0(uVar4,local_dac0,uVar6);
  uVar4 = *puVar10;
  FUN_14134cd04(&local_3718);
  local_82e8 = DAT_14c84635c;
  local_df78._0_4_ = 0x3f800000;
  local_df70 = &local_82e8;
  FUN_1414fd764(&local_6d78,&DAT_14c98dc00,0x40800000,&DAT_14c98dc3c);
  FUN_140f13d9e(&local_3708,&local_6d78);
  local_d7c8 = DAT_14c84635c;
  local_df78._0_4_ = 0x3f800000;
  local_df70 = &local_d7c8;
  FUN_1414fd764(&local_b948,&DAT_14c98dc00,0x40800000,&DAT_14c98dae8);
  FUN_140f13d9e(local_35a8,&local_b948);
  local_7a38[0] = DAT_14c84635c;
  local_df78._0_4_ = 0x3f800000;
  local_df70 = local_7a38;
  FUN_145a4ebc4(&local_c5c8,&DAT_14c98dae8,0x40800000,&DAT_149e1e318);
  FUN_140f13d9e(local_34f8,&local_c5c8);
  local_df70 = &local_7da8;
  local_7da8 = DAT_14c84635c;
  local_df78 = (undefined ***)CONCAT44(local_df78._4_4_,0x3f800000);
  FUN_145a4ebc4(&local_76c8,&DAT_14c98dc3c,0x40800000,&DAT_149e1e318);
  FUN_140f13d9e(local_3398,&local_76c8);
  local_c938[0] = DAT_14c84635c;
  FUN_1412ce202(&local_d288,local_c938);
  FUN_140f13d9e(local_32e8,&local_d288);
  local_3238 = CONCAT44(uRam000000014c98db3c,_DAT_14c98db38);
  uStack_3230 = CONCAT44(uRam000000014c98db44,uRam000000014c98db40);
  local_3228 = DAT_14c98db48;
  local_3224 = 0x41200000;
  uStack_3220 = 0x40600000;
  uStack_321c = 0x41200000;
  uStack_3218 = 0x40800000;
  FUN_1446ddc76(&local_dac8,"Menu.SpinBox",1);
  FUN_14147aa12(uVar4,local_dac8,&local_3718);
  plVar3 = local_d1e8;
  local_d288 = &PTR_FUN_149ed05f0;
  if (local_d1e8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d1e8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_d1e8)(local_d1e8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_7628;
  local_76c8 = &PTR_FUN_149ed05f0;
  if (local_7628 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_7628 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_7628)(local_7628);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_c528;
  puVar10 = local_df68;
  local_c5c8 = &PTR_FUN_149ed05f0;
  if (local_c528 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_c528 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_c528)(local_c528);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_b8a8;
  local_b948 = &PTR_FUN_149ed05f0;
  if (local_b8a8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_b8a8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_b8a8)(local_b8a8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  local_6d78 = &PTR_FUN_149ed05f0;
  if (local_6cd8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_6cd8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_6cd8)(local_6cd8);
      LOCK();
      piVar2 = (int *)((longlong)local_6cd8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_6cd8 + 0x10))(local_6cd8);
      }
    }
  }
  FUN_141147850(&local_3718);
  uVar4 = *puVar10;
  uVar6 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar6,&DAT_14c98dbc4);
  FUN_1446ddc76(&local_dad0,"Menu.Background",1);
  FUN_1411bc6ae(uVar4,local_dad0,uVar6);
  uVar4 = *puVar10;
  uVar6 = FUN_14001cc68(0xb0,0x10);
  local_3718 = DAT_14c84635c;
  local_df78._0_4_ = 0x3f800000;
  local_df70 = &local_3718;
  FUN_1414fd764(uVar6,&DAT_14c98db24,0,&DAT_14c98dbb0);
  FUN_1446ddc76(&local_dad8,"Menu.Outline",1);
  FUN_1414787f0(uVar4,local_dad8,uVar6);
  plVar3 = (longlong *)*puVar10;
  uVar4 = FUN_14001cc68(0xb0,0x10);
  local_3718 = (undefined **)&DAT_3f8000003f800000;
  puStack_3710 = &DAT_3f8000003f800000;
  local_b948 = DAT_14c967fc4;
  (**(code **)(*plVar3 + 0xe8))(plVar3,&local_6d78,"Icons/icon_tab_toolbar_16px",&DAT_149eca162);
  local_df70 = (undefined ***)CONCAT44(local_df70._4_4_,1);
  local_df78 = (undefined ***)((ulonglong)local_df78._4_4_ << 0x20);
  FUN_14140806a(uVar4,&local_6d78,&local_b948,&local_3718);
  FUN_1446ddc76(&local_dae0,"Menu.Icon",1);
  FUN_141408132(plVar3,local_dae0,uVar4);
  if (local_6d78 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)*puVar10;
  uVar4 = FUN_14001cc68(0xb0,0x10);
  local_3718 = (undefined **)&DAT_3f8000003f800000;
  puStack_3710 = &DAT_3f8000003f800000;
  local_b948 = DAT_14c967fc4;
  (**(code **)(*plVar3 + 0xe8))(plVar3,&local_6d78,"Icons/toolbar_expand_16x",&DAT_149eca162);
  local_df70 = (undefined ***)CONCAT44(local_df70._4_4_,1);
  local_df78 = (undefined ***)((ulonglong)local_df78 & 0xffffffff00000000);
  FUN_14140806a(uVar4,&local_6d78,&local_b948,&local_3718);
  FUN_1446ddc76(&local_dae8,"Menu.Expand",1);
  FUN_141408132(plVar3,local_dae8,uVar4);
  if (local_6d78 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)*puVar10;
  puVar7 = (undefined8 *)FUN_14001cc68(0xb0,0x10);
  local_6d78 = DAT_14c967fc4;
  (**(code **)(*plVar3 + 0xe8))(plVar3,&local_3718,"Starship/Common/chevron-right",L".svg");
  local_df70 = (undefined ***)CONCAT44(local_df70._4_4_,3);
  local_df78 = (undefined ***)((ulonglong)local_df78 & 0xffffffff00000000);
  FUN_14154bb44(puVar7,&local_3718,&local_6d78,&DAT_14c98dac0);
  *puVar7 = &PTR_FUN_149eeb468;
  FUN_1446ddc76(&local_daf0,"Menu.SubMenuIndicator",1);
  FUN_1415bbd06(plVar3,local_daf0,puVar7);
  if (local_3718 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  uVar4 = *puVar10;
  local_3718 = (undefined **)0x4000000040000000;
  puStack_3710 = (undefined1 *)0x4000000040000000;
  FUN_1446ddc76(&local_daf8,"Menu.SToolBarComboButtonBlock.Padding",1);
  FUN_141478916(uVar4,local_daf8,&local_3718);
  uVar4 = *puVar10;
  local_3718 = (undefined **)0x4000000040000000;
  puStack_3710 = (undefined1 *)0x4000000040000000;
  FUN_1446ddc76(&local_db00,"Menu.SToolBarButtonBlock.Padding",1);
  FUN_141478916(uVar4,local_db00,&local_3718);
  uVar4 = *puVar10;
  local_3718 = (undefined **)0x4000000040000000;
  puStack_3710 = (undefined1 *)0x4000000040000000;
  FUN_1446ddc76(&local_db08,"Menu.SToolBarCheckComboButtonBlock.Padding",1);
  FUN_141478916(uVar4,local_db08,&local_3718);
  uVar4 = *puVar10;
  local_3718 = (undefined **)0x0;
  puStack_3710 = (undefined1 *)0x0;
  FUN_1446ddc76(&local_db10,"Menu.SToolBarButtonBlock.CheckBox.Padding",1);
  FUN_141478916(uVar4,local_db10,&local_3718);
  uVar4 = *puVar10;
  FUN_1446ddc76(&local_db18,"Menu.SToolBarComboButtonBlock.ComboButton.Color",1);
  FUN_1411bc70e(uVar4,local_db18,local_d834);
  uVar4 = *puVar10;
  FUN_1446ddc76(&local_db20,"Menu.MenuIconSize",1);
  FUN_141478a72(uVar4,local_db20,0x41600000);
  local_d870[0] = 0x3f80000041400000;
  local_d870[1] = 0x3f80000040a00000;
  uVar4 = *puVar10;
  local_3718 = (undefined **)0x3f80000041f00000;
  puStack_3710 = (undefined1 *)0x3f80000040a00000;
  FUN_1446ddc76(&local_db28,"Menu.Block.IndentedPadding",1);
  FUN_141478916(uVar4,local_db28,&local_3718);
  uVar4 = *puVar10;
  FUN_1446ddc76(&local_db30,"Menu.Block.Padding",1);
  FUN_141478916(uVar4,local_db30,local_d870);
  uVar4 = *puVar10;
  uVar6 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar6,&DAT_14c98dca0);
  FUN_1446ddc76(&local_db38,"Menu.Separator",1);
  FUN_1411bc6ae(uVar4,local_db38,uVar6);
  uVar4 = *puVar10;
  local_3718 = (undefined **)0x40c0000041400000;
  puStack_3710 = (undefined1 *)0x40c0000041400000;
  FUN_1446ddc76(&local_db40,"Menu.Separator.Padding",1);
  FUN_141478916(uVar4,local_db40,&local_3718);
  uVar4 = *puVar10;
  FUN_1446ddc76(&local_db48,"Menu.Label",1);
  uVar6 = local_df60;
  FUN_1412cc702(uVar4,local_db48,local_df60);
  uVar4 = *puVar10;
  FUN_1414790b6(&local_3718,local_df58);
  uVar8 = FUN_145a4e762();
  FUN_1412cc59c(local_3430,uVar8);
  FUN_1446ddc76(&local_db50,"Menu.EditableText",1);
  FUN_1412ce49c(uVar4,local_db50,&local_3718);
  FUN_140ffd7a4(&local_3718);
  uVar4 = *puVar10;
  FUN_140e9ea3a(&local_3718,uVar6);
  lVar5 = FUN_145a4e762();
  FUN_1412cc59c(&puStack_3710,lVar5 + 0x180);
  FUN_1446ddc76(&local_db58,"Menu.Keybinding",1);
  FUN_1412cc702(uVar4,local_db58,&local_3718);
  FUN_140e9e952(&local_3718);
  puStack_3710 = (undefined1 *)0x0;
  local_3718 = (undefined **)((ulonglong)local_3718 & 0xff00000000000000);
  local_3708 = 0;
  uStack_3704 = 0;
  uStack_3700 = 0;
  uStack_36fc = 0x3f800000;
  FUN_1446ddc76(&local_b948,&DAT_149eea5a7,1);
  uVar4 = FUN_1412ce748();
  FUN_1412ce8e2(uVar4,&local_6d78);
  local_dbc0 = CONCAT71(uStack_6d6f,local_6d70);
  local_dbc8 = local_6d78;
  if (local_dbc0 != 0) {
    LOCK();
    *(int *)(local_dbc0 + 8) = *(int *)(local_dbc0 + 8) + 1;
    UNLOCK();
  }
  local_df78 = &local_3718;
  FUN_1412ce660(&local_dbb8,&local_dbc8,0x40e00000,&local_b948);
  plVar3 = (longlong *)CONCAT71(uStack_6d6f,local_6d70);
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
  local_db6c = 0xfa;
  uVar4 = *puVar10;
  FUN_140e9ea3a(&local_3718,local_df40);
  FUN_1412cc59c(&puStack_3710,&local_dbb8);
  local_36b0 = _DAT_14c98dca0;
  uStack_36ac = uRam000000014c98dca4;
  uStack_36a8 = uRam000000014c98dca8;
  uStack_36a4 = uRam000000014c98dcac;
  local_36a0 = DAT_14c98dcb0;
  FUN_1446ddc76(&local_dbd0,"Menu.Heading",1);
  FUN_1412cc702(uVar4,local_dbd0,&local_3718);
  FUN_140e9e952(&local_3718);
  uVar4 = *puVar10;
  local_3718 = (undefined **)0x40c0000041400000;
  puStack_3710 = (undefined1 *)0x40c0000041400000;
  FUN_1446ddc76(&local_dbd8,"Menu.Heading.Padding",1);
  FUN_141478916(uVar4,local_dbd8,&local_3718);
  local_d888 = &DAT_3f8000003f800000;
  uStack_d880 = 0x3e4ccccd3f800000;
  local_d898 = 0x3f800000;
  uStack_d894 = 0x3f800000;
  uStack_d890 = 0x3f800000;
  uStack_d88c = 0x3c23d70a;
  FUN_1414c3a06(&local_6d78);
  local_dc80[0] = DAT_14c84635c;
  FUN_1412ce202(&local_b948);
  FUN_140f13d9e(local_6d68,&local_b948);
  local_dbe0 = DAT_14c84635c;
  FUN_1412ce202(&local_c5c8);
  FUN_140f13d9e(local_6cb8,&local_c5c8);
  local_dbe8 = DAT_14c84635c;
  FUN_1412ce202(&local_76c8);
  FUN_140f13d9e(local_6c08,&local_76c8);
  local_d968 = (undefined **)&DAT_3f8000003f800000;
  puStack_d960 = &DAT_3f8000003f800000;
  local_dbf0 = DAT_14c967fc4;
  (**(code **)(*(longlong *)*puVar10 + 0xe8))
            ((longlong *)*puVar10,&local_dd38,"Starship/Common/check",L".svg");
  local_df70._0_4_ = 3;
  local_df78 = (undefined ***)((ulonglong)local_df78 & 0xffffffff00000000);
  FUN_14140806a(&local_d288,&local_dd38,&local_dbf0,&local_d968);
  local_d288 = &PTR_FUN_149eeb468;
  FUN_140f13d9e(local_6b58,&local_d288);
  local_ddf8 = (undefined **)&DAT_3f8000003f800000;
  puStack_ddf0 = &DAT_3f8000003f800000;
  local_dbf8 = DAT_14c967fc4;
  (**(code **)(*(longlong *)*local_df68 + 0xe8))
            ((longlong *)*local_df68,local_deb8,"Starship/Common/check",L".svg");
  local_df70._0_4_ = 3;
  local_df78 = (undefined ***)((ulonglong)local_df78 & 0xffffffff00000000);
  FUN_14140806a(&local_82e8,local_deb8,&local_dbf8,&local_ddf8);
  local_82e8 = &PTR_FUN_149eeb468;
  FUN_140f13d9e(&local_6aa8,&local_82e8);
  local_dc08 = (undefined **)&DAT_3f8000003f800000;
  puStack_dc00 = &DAT_3f8000003f800000;
  local_dc10 = DAT_14c967fc4;
  (**(code **)(*(longlong *)*local_df68 + 0xe8))
            ((longlong *)*local_df68,local_dc20,"Starship/Common/check",L".svg");
  local_df70._0_4_ = 3;
  local_df78 = (undefined ***)((ulonglong)local_df78 & 0xffffffff00000000);
  FUN_14140806a(&local_d7c8,local_dc20,&local_dc10,&local_dc08);
  puVar10 = local_df68;
  local_d7c8 = &PTR_FUN_149eeb468;
  FUN_140f13d9e(&local_69f8,&local_d7c8);
  local_dc28 = DAT_14c967fc4;
  (**(code **)(*(longlong *)*puVar10 + 0xe8))
            ((longlong *)*puVar10,local_dc38,"Starship/Common/check",L".svg");
  local_df70._0_4_ = 3;
  local_df78 = (undefined ***)((ulonglong)local_df78 & 0xffffffff00000000);
  FUN_14140806a(local_7a38,local_dc38,local_dc38 + 2,&local_d898);
  local_7a38[0] = &PTR_FUN_149eeb468;
  FUN_140f13d9e(&local_6948,local_7a38);
  local_dc40 = DAT_14c967fc4;
  (**(code **)(*(longlong *)*puVar10 + 0xe8))
            ((longlong *)*puVar10,local_dc50,"Starship/Common/check",L".svg");
  local_df70._0_4_ = 3;
  local_df78 = (undefined ***)((ulonglong)local_df78 & 0xffffffff00000000);
  FUN_14140806a(&local_7da8,local_dc50,&local_dc40,&local_d888);
  local_7da8 = &PTR_FUN_149eeb468;
  FUN_140f13d9e(&local_6898,&local_7da8);
  local_dc58 = DAT_14c967fc4;
  (**(code **)(*(longlong *)*puVar10 + 0xe8))
            ((longlong *)*puVar10,local_dc68,"Starship/Common/check",L".svg");
  local_df70 = (undefined ***)CONCAT44(local_df70._4_4_,3);
  local_df78 = (undefined ***)((ulonglong)local_df78 & 0xffffffff00000000);
  FUN_14140806a(local_c938,local_dc68,local_dc68 + 2,&local_d888);
  local_c938[0] = &PTR_FUN_149eeb468;
  FUN_140f13d9e(local_67e8,local_c938);
  FUN_141479b70(&local_3718,&local_6d78);
  plVar3 = local_c898;
  local_c938[0] = &PTR_FUN_149ed05f0;
  if (local_c898 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_c898 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_c898)(local_c898);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_dc68[0] != 0) {
    FUN_1400020a8();
  }
  plVar3 = local_7d08;
  local_7da8 = &PTR_FUN_149ed05f0;
  if (local_7d08 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_7d08 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_7d08)(local_7d08);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_dc50[0] != 0) {
    FUN_1400020a8();
  }
  plVar3 = local_7998;
  local_7a38[0] = &PTR_FUN_149ed05f0;
  if (local_7998 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_7998 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_7998)(local_7998);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_dc38[0] != 0) {
    FUN_1400020a8();
  }
  plVar3 = local_d728;
  local_d7c8 = &PTR_FUN_149ed05f0;
  if (local_d728 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d728 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_d728)(local_d728);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_dc20[0] != 0) {
    FUN_1400020a8();
  }
  plVar3 = local_8248;
  local_82e8 = &PTR_FUN_149ed05f0;
  if (local_8248 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_8248 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_8248)(local_8248);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_deb8[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar3 = local_d1e8;
  local_d288 = &PTR_FUN_149ed05f0;
  if (local_d1e8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d1e8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_d1e8)(local_d1e8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_dd38 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar3 = local_7628;
  local_76c8 = &PTR_FUN_149ed05f0;
  if (local_7628 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_7628 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_7628)(local_7628);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_c528;
  local_c5c8 = &PTR_FUN_149ed05f0;
  if (local_c528 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_c528 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_c528)(local_c528);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  local_b948 = &PTR_FUN_149ed05f0;
  if (local_b8a8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_b8a8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_b8a8)(local_b8a8);
      LOCK();
      piVar2 = (int *)((longlong)local_b8a8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_b8a8 + 0x10))(local_b8a8);
      }
    }
  }
  FUN_140ffdb16(&local_6d78);
  FUN_1414c3a06(&local_b948);
  local_b940 = 0;
  local_b0e8 = _DAT_14c98db4c;
  uStack_b0e4 = uRam000000014c98db50;
  uStack_b0e0 = uRam000000014c98db54;
  uStack_b0dc = uRam000000014c98db58;
  local_b0d8 = DAT_14c98db5c;
  local_b0d4 = _DAT_14c98db4c;
  uStack_b0d0 = uRam000000014c98db50;
  uStack_b0cc = uRam000000014c98db54;
  uStack_b0c8 = uRam000000014c98db58;
  local_b0c4 = DAT_14c98db5c;
  local_b0c0 = _DAT_14c98db4c;
  uStack_b0bc = uRam000000014c98db50;
  uStack_b0b8 = uRam000000014c98db54;
  uStack_b0b4 = uRam000000014c98db58;
  local_b0b0 = DAT_14c98db5c;
  local_b0ac = _DAT_14c98db4c;
  uStack_b0a8 = uRam000000014c98db50;
  uStack_b0a4 = uRam000000014c98db54;
  uStack_b0a0 = uRam000000014c98db58;
  local_b09c = DAT_14c98db5c;
  local_b088 = DAT_14c98db5c;
  local_b098 = _DAT_14c98db4c;
  uStack_b094 = uRam000000014c98db50;
  uStack_b090 = uRam000000014c98db54;
  uStack_b08c = uRam000000014c98db58;
  local_b084 = _DAT_14c98db4c;
  uStack_b080 = uRam000000014c98db50;
  uStack_b07c = uRam000000014c98db54;
  uStack_b078 = uRam000000014c98db58;
  local_b074 = DAT_14c98db5c;
  local_b060 = DAT_14c98db5c;
  local_b070 = _DAT_14c98db4c;
  uStack_b06c = uRam000000014c98db50;
  uStack_b068 = uRam000000014c98db54;
  uStack_b064 = uRam000000014c98db58;
  local_dbe0 = DAT_14c84635c;
  FUN_1412ce202(&local_c5c8);
  FUN_140f13d9e(local_b938,&local_c5c8);
  local_dbe8 = DAT_14c84635c;
  FUN_1412ce202(&local_76c8);
  FUN_140f13d9e(local_b888,&local_76c8);
  local_dbf0 = DAT_14c84635c;
  FUN_1412ce202(&local_d288);
  FUN_140f13d9e(local_b7d8,&local_d288);
  puVar10 = local_df68;
  local_dbf8 = DAT_14c967fc4;
  (**(code **)(*(longlong *)*local_df68 + 0xe8))
            ((longlong *)*local_df68,&local_dc08,"Starship/CoreWidgets/CheckBox/check",L".svg");
  local_df70._0_4_ = 3;
  local_df78 = (undefined ***)((ulonglong)local_df78 & 0xffffffff00000000);
  FUN_14154bb44(&local_82e8,&local_dc08,&local_dbf8,&DAT_14c98db4c);
  local_82e8 = &PTR_FUN_149eeb468;
  FUN_140f13d9e(local_b728,&local_82e8);
  local_dc10 = DAT_14c967fc4;
  (**(code **)(*(longlong *)*puVar10 + 0xe8))
            ((longlong *)*puVar10,local_dc20,"Starship/CoreWidgets/CheckBox/check",L".svg");
  local_df70._0_4_ = 3;
  local_df78 = (undefined ***)((ulonglong)local_df78 & 0xffffffff00000000);
  FUN_14154bb44(&local_d7c8,local_dc20,&local_dc10,&DAT_14c98db4c);
  local_d7c8 = &PTR_FUN_149eeb468;
  FUN_140f13d9e(&local_b678,&local_d7c8);
  local_dc28 = DAT_14c967fc4;
  (**(code **)(*(longlong *)*puVar10 + 0xe8))
            ((longlong *)*puVar10,local_dc38,"Starship/CoreWidgets/CheckBox/check",L".svg");
  local_df70._0_4_ = 3;
  local_df78 = (undefined ***)((ulonglong)local_df78 & 0xffffffff00000000);
  FUN_14154bb44(local_7a38,local_dc38,local_dc38 + 2,&DAT_14c98db4c);
  local_7a38[0] = &PTR_FUN_149eeb468;
  FUN_140f13d9e(&local_b5c8,local_7a38);
  local_dc40 = DAT_14c967fc4;
  (**(code **)(*(longlong *)*puVar10 + 0xe8))
            ((longlong *)*puVar10,local_dc50,"Starship/CoreWidgets/CheckBox/indeterminate",L".svg");
  local_df70._0_4_ = 3;
  local_df78 = (undefined ***)((ulonglong)local_df78 & 0xffffffff00000000);
  FUN_14154bb44(&local_7da8,local_dc50,&local_dc40,&DAT_14c98db4c);
  local_7da8 = &PTR_FUN_149eeb468;
  FUN_140f13d9e(&local_b518,&local_7da8);
  local_dc58 = DAT_14c967fc4;
  (**(code **)(*(longlong *)*puVar10 + 0xe8))
            ((longlong *)*puVar10,local_dc68,"Starship/CoreWidgets/CheckBox/indeterminate",L".svg");
  local_df70._0_4_ = 3;
  local_df78 = (undefined ***)((ulonglong)local_df78 & 0xffffffff00000000);
  FUN_14154bb44(local_c938,local_dc68,local_dc68 + 2,&DAT_14c98db4c);
  local_c938[0] = &PTR_FUN_149eeb468;
  FUN_140f13d9e(&local_b468,local_c938);
  local_dc70 = DAT_14c967fc4;
  (**(code **)(*(longlong *)*puVar10 + 0xe8))
            ((longlong *)*puVar10,local_dc80,"Starship/CoreWidgets/CheckBox/indeterminate",L".svg");
  local_df70 = (undefined ***)CONCAT44(local_df70._4_4_,3);
  local_df78 = (undefined ***)((ulonglong)local_df78 & 0xffffffff00000000);
  FUN_14154bb44(&local_d968,local_dc80,&local_dc70,&DAT_14c98db4c);
  local_d968 = &PTR_FUN_149eeb468;
  FUN_140f13d9e(local_b3b8,&local_d968);
  local_df70 = (undefined ***)&local_dd40;
  local_dd40 = DAT_14c967fcc;
  local_df78._0_4_ = 0x3f800000;
  FUN_1414fd764(&local_dd38,&DAT_14c98db9c,0x40400000,&DAT_14c98dae8);
  FUN_140f13d9e(local_b2f8,&local_dd38);
  local_df70 = (undefined ***)&local_de00;
  local_de00 = DAT_14c967fcc;
  local_df78._0_4_ = 0x3f800000;
  FUN_1414fd764(&local_ddf8,&DAT_14c98db9c,0x40400000,&DAT_14c98dae8);
  FUN_140f13d9e(local_b248,&local_ddf8);
  local_df70 = (undefined ***)&local_dec0;
  local_dec0 = DAT_14c967fcc;
  local_df78 = (undefined ***)CONCAT44(local_df78._4_4_,0x3f800000);
  FUN_1414fd764(local_deb8,&DAT_14c98db9c,0x40400000,&DAT_14c98dae8);
  FUN_140f13d9e(local_b198,local_deb8);
  FUN_141479b70(&local_6d78,&local_b948);
  local_deb8[0] = &PTR_FUN_149ed05f0;
  if (local_de18 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_de18 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_de18)(local_de18);
      LOCK();
      piVar2 = (int *)((longlong)local_de18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_de18 + 0x10))(local_de18);
      }
    }
  }
  local_ddf8 = &PTR_FUN_149ed05f0;
  if (local_dd58 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_dd58 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_dd58)(local_dd58);
      LOCK();
      piVar2 = (int *)((longlong)local_dd58 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_dd58 + 0x10))(local_dd58);
      }
    }
  }
  plVar3 = local_dc98;
  puVar10 = local_df68;
  local_dd38 = &PTR_FUN_149ed05f0;
  if (local_dc98 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_dc98 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_dc98)(local_dc98);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_d8c8;
  local_d968 = &PTR_FUN_149ed05f0;
  if (plStack_d8c8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_d8c8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_d8c8)(plStack_d8c8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_dc80[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar3 = local_c898;
  local_c938[0] = &PTR_FUN_149ed05f0;
  if (local_c898 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_c898 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_c898)(local_c898);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_dc68[0] != 0) {
    FUN_1400020a8();
  }
  plVar3 = local_7d08;
  local_7da8 = &PTR_FUN_149ed05f0;
  if (local_7d08 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_7d08 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_7d08)(local_7d08);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_dc50[0] != 0) {
    FUN_1400020a8();
  }
  plVar3 = local_7998;
  local_7a38[0] = &PTR_FUN_149ed05f0;
  if (local_7998 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_7998 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_7998)(local_7998);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_dc38[0] != 0) {
    FUN_1400020a8();
  }
  plVar3 = local_d728;
  local_d7c8 = &PTR_FUN_149ed05f0;
  if (local_d728 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d728 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_d728)(local_d728);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_dc20[0] != 0) {
    FUN_1400020a8();
  }
  plVar3 = local_8248;
  local_82e8 = &PTR_FUN_149ed05f0;
  if (local_8248 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_8248 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_8248)(local_8248);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_dc08 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar3 = local_d1e8;
  local_d288 = &PTR_FUN_149ed05f0;
  if (local_d1e8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d1e8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_d1e8)(local_d1e8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_7628;
  local_76c8 = &PTR_FUN_149ed05f0;
  if (local_7628 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_7628 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_7628)(local_7628);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  local_c5c8 = &PTR_FUN_149ed05f0;
  if (local_c528 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_c528 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_c528)(local_c528);
      LOCK();
      piVar2 = (int *)((longlong)local_c528 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_c528 + 0x10))(local_c528);
      }
    }
  }
  FUN_140ffdb16(&local_b948);
  uVar4 = *puVar10;
  FUN_1446ddc76(&local_dec8,"Menu.CheckBox",1);
  FUN_14154bcd8(uVar4,local_dec8,&local_6d78);
  uVar4 = *puVar10;
  FUN_1446ddc76(&local_ded0,"Menu.Check",1);
  FUN_14154bcd8(uVar4,local_ded0,&local_3718);
  uVar4 = *puVar10;
  FUN_1446ddc76(&local_ded8,"ClippingVerticalBox.Check",1);
  FUN_14154bcd8(uVar4,local_ded8,&local_3718);
  FUN_1414c3a06(&local_c5c8);
  FUN_145a4e69a(&local_76c8,&DAT_14c98dc00);
  FUN_140f13d9e(local_c5b8,&local_76c8);
  FUN_145a4e69a(&local_d288,&DAT_14c98dc00);
  FUN_140f13d9e(local_c508,&local_d288);
  FUN_145a4e69a(&local_82e8,&DAT_14c98dafc);
  FUN_140f13d9e(local_c458,&local_82e8);
  FUN_145a4e69a(&local_d7c8,&DAT_14c98db4c);
  FUN_140f13d9e(local_c3a8,&local_d7c8);
  FUN_145a4e69a(local_7a38,&DAT_14c98db4c);
  FUN_140f13d9e(local_c2f8,local_7a38);
  FUN_145a4e69a(&local_7da8,&DAT_14c98db4c);
  FUN_140f13d9e(local_c248,&local_7da8);
  FUN_145a4e69a(local_c938,&DAT_14c98dc00);
  FUN_140f13d9e(local_c198,local_c938);
  FUN_145a4e69a(&local_d968,&DAT_14c98db4c);
  FUN_140f13d9e(local_c0e8,&local_d968);
  FUN_145a4e69a(&local_dd38,&DAT_14c98db4c);
  FUN_140f13d9e(local_c038,&local_dd38);
  FUN_141479b70(&local_b948,&local_c5c8);
  local_dd38 = &PTR_FUN_149ed05f0;
  if (local_dc98 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_dc98 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_dc98)(local_dc98);
      LOCK();
      piVar2 = (int *)((longlong)local_dc98 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_dc98 + 0x10))(local_dc98);
      }
    }
  }
  local_d968 = &PTR_FUN_149ed05f0;
  if (plStack_d8c8 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_d8c8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_d8c8)(plStack_d8c8);
      LOCK();
      piVar2 = (int *)((longlong)plStack_d8c8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plStack_d8c8 + 0x10))(plStack_d8c8);
      }
    }
  }
  plVar3 = local_c898;
  local_c938[0] = &PTR_FUN_149ed05f0;
  if (local_c898 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_c898 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_c898)(local_c898);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_7d08;
  local_7da8 = &PTR_FUN_149ed05f0;
  if (local_7d08 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_7d08 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_7d08)(local_7d08);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_7998;
  local_7a38[0] = &PTR_FUN_149ed05f0;
  if (local_7998 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_7998 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_7998)(local_7998);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_d728;
  local_d7c8 = &PTR_FUN_149ed05f0;
  if (local_d728 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d728 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_d728)(local_d728);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_8248;
  local_82e8 = &PTR_FUN_149ed05f0;
  if (local_8248 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_8248 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_8248)(local_8248);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_d1e8;
  local_d288 = &PTR_FUN_149ed05f0;
  if (local_d1e8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d1e8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_d1e8)(local_d1e8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  local_76c8 = &PTR_FUN_149ed05f0;
  if (local_7628 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_7628 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_7628)(local_7628);
      LOCK();
      piVar2 = (int *)((longlong)local_7628 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_7628 + 0x10))(local_7628);
      }
    }
  }
  FUN_140ffdb16(&local_c5c8);
  uVar4 = *puVar10;
  FUN_1446ddc76(&local_dee0,"Menu.RadioButton",1);
  FUN_14154bcd8(uVar4,local_dee0,&local_b948);
  FUN_1414c3a06(&local_76c8);
  local_76c0 = 1;
  local_dbe0 = DAT_14c84635c;
  FUN_1412ce202(&local_d288);
  FUN_140f13d9e(local_76b8,&local_d288);
  local_d968 = (undefined **)0x3e8000003e800000;
  puStack_d960 = (undefined1 *)0x3e8000003e800000;
  (**(code **)(*(longlong *)*puVar10 + 0xe8))
            ((longlong *)*puVar10,&local_dd38,"Common/RoundedSelection_16x",&DAT_149eca162);
  local_df78._0_4_ = 1;
  FUN_141478850(&local_82e8,&local_dd38,&local_d968,local_d814);
  FUN_140f13d9e(local_7558,&local_82e8);
  local_ddf8 = (undefined **)0x3e8000003e800000;
  puStack_ddf0 = (undefined1 *)0x3e8000003e800000;
  (**(code **)(*(longlong *)*puVar10 + 0xe8))
            ((longlong *)*puVar10,local_deb8,"Common/RoundedSelection_16x",&DAT_149eca162);
  local_df78._0_4_ = 1;
  FUN_141478850(&local_d7c8,local_deb8,&local_ddf8,local_d7f4);
  FUN_140f13d9e(local_7608,&local_d7c8);
  local_dc08 = (undefined **)0x3e8000003e800000;
  puStack_dc00 = (undefined1 *)0x3e8000003e800000;
  (**(code **)(*(longlong *)*local_df68 + 0xe8))
            ((longlong *)*local_df68,local_dc20,"Common/RoundedSelection_16x",&DAT_149eca162);
  local_df78._0_4_ = 1;
  FUN_141478850(local_7a38,local_dc20,&local_dc08,local_d814);
  FUN_140f13d9e(local_74a8,local_7a38);
  local_dc38[0] = 0x3e8000003e800000;
  local_dc38[1] = 0x3e8000003e800000;
  (**(code **)(*(longlong *)*local_df68 + 0xe8))
            ((longlong *)*local_df68,local_dc50,"Common/RoundedSelection_16x",&DAT_149eca162);
  local_df78._0_4_ = 1;
  FUN_141478850(&local_7da8,local_dc50,local_dc38,local_d814);
  puVar10 = local_df68;
  FUN_140f13d9e(local_73f8,&local_7da8);
  local_dc68[0] = 0x3e8000003e800000;
  local_dc68[1] = 0x3e8000003e800000;
  (**(code **)(*(longlong *)*puVar10 + 0xe8))
            ((longlong *)*puVar10,local_dc80,"Common/RoundedSelection_16x",&DAT_149eca162);
  local_df78 = (undefined ***)CONCAT44(local_df78._4_4_,1);
  FUN_141478850(local_c938,local_dc80,local_dc68,local_d7f4);
  FUN_140f13d9e(local_7348,local_c938);
  FUN_141479b70(&local_c5c8,&local_76c8);
  local_c938[0] = &PTR_FUN_149ed05f0;
  if (local_c898 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_c898 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_c898)(local_c898);
      LOCK();
      piVar2 = (int *)((longlong)local_c898 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_c898 + 0x10))(local_c898);
      }
    }
  }
  if (local_dc80[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  local_7da8 = &PTR_FUN_149ed05f0;
  if (local_7d08 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_7d08 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_7d08)(local_7d08);
      LOCK();
      piVar2 = (int *)((longlong)local_7d08 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_7d08 + 0x10))(local_7d08);
      }
    }
  }
  if (local_dc50[0] != 0) {
    FUN_1400020a8();
  }
  plVar3 = local_7998;
  local_7a38[0] = &PTR_FUN_149ed05f0;
  if (local_7998 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_7998 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_7998)(local_7998);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_dc20[0] != 0) {
    FUN_1400020a8();
  }
  plVar3 = local_d728;
  local_d7c8 = &PTR_FUN_149ed05f0;
  if (local_d728 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d728 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_d728)(local_d728);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_deb8[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar3 = local_8248;
  local_82e8 = &PTR_FUN_149ed05f0;
  if (local_8248 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_8248 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_8248)(local_8248);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_dd38 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  local_d288 = &PTR_FUN_149ed05f0;
  if (local_d1e8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_d1e8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_d1e8)(local_d1e8);
      LOCK();
      piVar2 = (int *)((longlong)local_d1e8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_d1e8 + 0x10))(local_d1e8);
      }
    }
  }
  FUN_140ffdb16(&local_76c8);
  uVar4 = *puVar10;
  FUN_1446ddc76(&local_dee8,"Menu.ToggleButton",1);
  FUN_14154bcd8(uVar4,local_dee8,&local_c5c8);
  uVar4 = *puVar10;
  FUN_1446ddc76(&local_def0,"NoBorder",1);
  uVar4 = FUN_141492734(uVar4,local_def0,0,0);
  FUN_141478cf2(&local_d288,uVar4);
  local_7da8 = DAT_14c84635c;
  FUN_1412ce202(&local_82e8);
  FUN_140f13d9e(local_d278,&local_82e8);
  FUN_1411bc404(&local_d7c8,&DAT_14c98db10);
  FUN_140f13d9e(local_d118,&local_d7c8);
  FUN_1411bc404(local_7a38,&DAT_14c98db10);
  FUN_140f13d9e(local_d1c8,local_7a38);
  local_cfa4 = CONCAT44(uRam000000014c98db3c,_DAT_14c98db38);
  uStack_cf9c = CONCAT44(uRam000000014c98db44,uRam000000014c98db40);
  local_cf94 = DAT_14c98db48;
  local_cf68 = 0x4000000000000000;
  uStack_cf60 = 0x4000000000000000;
  local_cf58 = 0;
  uStack_cf54 = 0x40400000;
  uStack_cf50 = 0;
  uStack_cf4c = 0x3f800000;
  FUN_141478cf2(&local_76c8,&local_d288);
  local_7a38[0] = &PTR_FUN_149ed05f0;
  if (local_7998 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_7998 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_7998)(local_7998);
      LOCK();
      piVar2 = (int *)((longlong)local_7998 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_7998 + 0x10))(local_7998);
      }
    }
  }
  plVar3 = local_d728;
  local_d7c8 = &PTR_FUN_149ed05f0;
  if (local_d728 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d728 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_d728)(local_d728);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  local_82e8 = &PTR_FUN_149ed05f0;
  if (local_8248 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_8248 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_8248)(local_8248);
      LOCK();
      piVar2 = (int *)((longlong)local_8248 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_8248 + 0x10))(local_8248);
      }
    }
  }
  FUN_140ffd6b6(&local_d288);
  uVar4 = *puVar10;
  FUN_1446ddc76(&local_def8,"Menu.Button",1);
  FUN_1414fd860(uVar4,local_def8,&local_76c8);
  plVar3 = (longlong *)*puVar10;
  uVar4 = FUN_14001cc68(0xb0,0x10);
  local_d288 = (undefined **)0x3e8000003e800000;
  uStack_d280 = 0x3e8000003e800000;
  (**(code **)(*plVar3 + 0xe8))(plVar3,&local_82e8,"Common/RoundedSelection_16x",&DAT_149eca162);
  local_df78 = (undefined ***)CONCAT44(local_df78._4_4_,1);
  FUN_141478850(uVar4,&local_82e8,&local_d288,local_d814);
  FUN_1446ddc76(&local_df00,"Menu.Button.Checked",1);
  FUN_141639ee8(plVar3,local_df00,uVar4);
  if (local_82e8 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)*puVar10;
  uVar4 = FUN_14001cc68(0xb0,0x10);
  local_d288 = (undefined **)0x3dcccccd3dcccccd;
  uStack_d280 = 0x3f8000003dcccccd;
  local_82e8 = (undefined **)0x3e8000003e800000;
  puStack_82e0 = (undefined1 *)0x3e8000003e800000;
  (**(code **)(*plVar3 + 0xe8))(plVar3,&local_d7c8,"Common/Selection",&DAT_149eca162);
  local_df78 = (undefined ***)CONCAT44(local_df78._4_4_,1);
  FUN_1458a33d8(uVar4,&local_d7c8,&local_82e8,&local_d288);
  FUN_1446ddc76(&local_df08,"Menu.Button.SubMenuOpen",1);
  FUN_14147a5de(plVar3,local_df08,uVar4);
  if (local_d7c8 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  FUN_141478cf2(&local_82e8,&local_76c8);
  FUN_1411bc404(&local_d7c8,&DAT_14c98dae8);
  FUN_140f13d9e(local_8228,&local_d7c8);
  local_8004 = CONCAT44(uRam000000014c98db3c,_DAT_14c98db38);
  uStack_7ffc = CONCAT44(uRam000000014c98db44,uRam000000014c98db40);
  local_7ff4 = DAT_14c98db48;
  local_7fe0 = DAT_14c98db48;
  local_8018 = _DAT_14c98dac0;
  uStack_8014 = uRam000000014c98dac4;
  uStack_8010 = uRam000000014c98dac8;
  uStack_800c = uRam000000014c98dacc;
  local_8008 = DAT_14c98dad0;
  local_7ff0 = local_8004;
  uStack_7fe8 = uStack_7ffc;
  FUN_141478cf2(&local_d288,&local_82e8);
  local_d7c8 = &PTR_FUN_149ed05f0;
  if (local_d728 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_d728 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_d728)(local_d728);
      LOCK();
      piVar2 = (int *)((longlong)local_d728 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_d728 + 0x10))(local_d728);
      }
    }
  }
  FUN_140ffd6b6(&local_82e8);
  uVar4 = *puVar10;
  uVar6 = FUN_14001cc68(0xb0,0x10);
  local_82e8 = DAT_14c84635c;
  FUN_1412ce202(uVar6,&local_82e8);
  FUN_1446ddc76(&local_df10,"WindowMenuBar.Background",1);
  FUN_141639e2e(uVar4,local_df10,uVar6);
  uVar4 = *puVar10;
  FUN_140e9ea3a(&local_82e8,local_df60);
  uVar6 = FUN_145a4e762();
  FUN_1412cc59c(&puStack_82e0,uVar6);
  FUN_1446ddc76(&local_df18,"WindowMenuBar.Label",1);
  FUN_1412cc702(uVar4,local_df18,&local_82e8);
  FUN_140e9e952(&local_82e8);
  plVar3 = (longlong *)*puVar10;
  uVar4 = FUN_14001cc68(0xb0,0x10);
  local_82e8 = (undefined **)&DAT_3f8000003f800000;
  puStack_82e0 = &DAT_3f8000003f800000;
  local_7a38[0] = DAT_14c967fc4;
  (**(code **)(*plVar3 + 0xe8))(plVar3,&local_d7c8,"Icons/toolbar_expand_16x",&DAT_149eca162);
  local_df70 = (undefined ***)CONCAT44(local_df70._4_4_,1);
  local_df78 = (undefined ***)((ulonglong)local_df78 & 0xffffffff00000000);
  FUN_14140806a(uVar4,&local_d7c8,local_7a38,&local_82e8);
  FUN_1446ddc76(&local_df20,"WindowMenuBar.Expand",1);
  FUN_141408132(plVar3,local_df20,uVar4);
  if (local_d7c8 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  uVar4 = *puVar10;
  FUN_1446ddc76(&local_df28,"WindowMenuBar.Button",1);
  FUN_1414fd860(uVar4,local_df28,&local_d288);
  uVar4 = *puVar10;
  uVar6 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar6,&DAT_14c98db10);
  FUN_1446ddc76(&local_df30,"WindowMenuBar.Button.SubMenuOpen",1);
  FUN_1411bc6ae(uVar4,local_df30,uVar6);
  uVar4 = *puVar10;
  local_82e8 = (undefined **)0x4080000041400000;
  puStack_82e0 = (undefined1 *)0x4080000041400000;
  FUN_1446ddc76(&local_df38,"WindowMenuBar.MenuBar.Padding",1);
  FUN_141478916(uVar4,local_df38,&local_82e8);
  FUN_140ffd6b6(&local_d288);
  FUN_140ffd6b6(&local_76c8);
  FUN_140ffdb16(&local_c5c8);
  FUN_140ffdb16(&local_b948);
  FUN_140ffdb16(&local_6d78);
  FUN_140ffdb16(&local_3718);
  if (local_db80 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_db80 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_db80)(local_db80);
      LOCK();
      piVar2 = (int *)((longlong)local_db80 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_db80 + 0x10))(local_db80);
      }
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_df98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a4e69a FUN_145a4e69a body=74 status=ok
// SIG undefined FUN_145a4e69a(void)

undefined8 FUN_145a4e69a(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = DAT_14c967f9c;
  FUN_145a4e6e6();
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a4e6e6 FUN_145a4e6e6 body=123 status=ok
// SIG undefined FUN_145a4e6e6(void)

undefined8 * FUN_145a4e6e6(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  uStack_20 = 0;
  local_50 = 0;
  local_58 = 0;
  local_30 = 0;
  local_38 = 0;
  local_48 = param_3;
  local_40 = param_2;
  FUN_1411bc492(0,4,0);
  *param_1 = &PTR_FUN_149eeb588;
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a4e762 FUN_145a4e762 body=172 status=ok
// SIG undefined FUN_145a4e762(void)

longlong FUN_145a4e762(void)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_458 [32];
  undefined1 local_438 [1056];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_458;
  if (DAT_14c9751d8 == 0) {
    FUN_145a4f478(local_438);
    lVar2 = FUN_14001cc68(0x420,0x10);
    FUN_145a4ecbe(lVar2,local_438);
    lVar1 = DAT_14c9751d8;
    bVar3 = DAT_14c9751d8 != 0;
    DAT_14c9751d8 = lVar2;
    if (bVar3) {
      FUN_145a4f216(lVar1);
      FUN_1400020a8(lVar1);
    }
    FUN_145a4f216(local_438);
  }
  if ((local_18 ^ (ulonglong)auStack_458) == DAT_14c707940) {
    return DAT_14c9751d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a4e810 FUN_145a4e810 body=120 status=ok
// SIG undefined FUN_145a4e810(void)

undefined *
FUN_145a4e810(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141160160(&local_28);
  local_38 = 1;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x98))(param_1,DAT_14c979cb8,local_28,param_4);
  if (puVar1 == (undefined *)0x0) {
    FUN_1469624f0();
    puVar1 = &DAT_14c96c4b0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a4e88a FUN_145a4e88a body=120 status=ok
// SIG undefined FUN_145a4e88a(void)

undefined *
FUN_145a4e88a(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141160160(&local_28);
  local_38 = 1;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x98))(param_1,DAT_14c979d00,local_28,param_4);
  if (puVar1 == (undefined *)0x0) {
    FUN_146962418();
    puVar1 = &DAT_14c96b7c0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a4e904 FUN_145a4e904 body=211 status=ok
// SIG undefined FUN_145a4e904(void)

undefined8 *
FUN_145a4e904(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_88 = 0;
  local_98 = param_4;
  local_90 = param_2;
  FUN_1411bc492(param_1,4,0,&local_78);
  *param_1 = &PTR_FUN_149eeb588;
  uVar1 = *(undefined4 *)param_3;
  uVar2 = *(undefined4 *)((longlong)param_3 + 4);
  local_78 = *param_3;
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
  uStack_70 = param_3[1];
  local_68 = *(undefined4 *)(param_3 + 2);
  uStack_64 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_60 = *(undefined4 *)(param_3 + 3);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0x1c);
  local_58 = 0;
  uStack_50 = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 10) = local_68;
  *(undefined4 *)((longlong)param_1 + 0x54) = uStack_64;
  *(undefined4 *)(param_1 + 0xb) = uStack_60;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uStack_5c;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar2;
  *(undefined4 *)(param_1 + 9) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar4;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined2 *)(param_1 + 0xf) = 0;
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a4e9d8 FUN_145a4e9d8 body=222 status=ok
// SIG undefined FUN_145a4e9d8(void)

undefined8 *
FUN_145a4e9d8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = 0;
  uStack_60 = 0;
  local_88 = param_5;
  local_90 = 0;
  local_98 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = param_2;
  FUN_1411bc492(param_1,4,0,&local_68);
  *param_1 = &PTR_FUN_149eeb588;
  uVar1 = *(undefined4 *)param_3;
  uVar2 = *(undefined4 *)((longlong)param_3 + 4);
  local_68 = *param_3;
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
  uStack_60 = param_3[1];
  local_58 = *(undefined4 *)(param_3 + 2);
  uStack_54 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_50 = *(undefined4 *)(param_3 + 3);
  uStack_4c = *(undefined4 *)((longlong)param_3 + 0x1c);
  local_48 = *param_4;
  uStack_44 = param_4[1];
  uStack_40 = param_4[2];
  uStack_3c = param_4[3];
  local_38 = param_4[4];
  *(undefined4 *)(param_1 + 0xe) = local_38;
  *(undefined4 *)(param_1 + 0xc) = local_48;
  *(undefined4 *)((longlong)param_1 + 100) = uStack_44;
  *(undefined4 *)(param_1 + 0xd) = uStack_40;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uStack_3c;
  *(undefined4 *)(param_1 + 10) = local_58;
  *(undefined4 *)((longlong)param_1 + 0x54) = uStack_54;
  *(undefined4 *)(param_1 + 0xb) = uStack_50;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uStack_4c;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar2;
  *(undefined4 *)(param_1 + 9) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3f800000;
  *(undefined2 *)(param_1 + 0xf) = 0;
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a4eab8 FUN_145a4eab8 body=268 status=ok
// SIG undefined FUN_145a4eab8(void)

undefined8 * FUN_145a4eab8(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  
  *param_1 = &PTR_FUN_149eed6d0;
  FUN_140e361c2(param_1 + 2,param_2 + 0x10);
  FUN_140e361c2(param_1 + 0x18,param_2 + 0xc0);
  FUN_140e361c2(param_1 + 0x2e,param_2 + 0x170);
  FUN_140e9ea3a(param_1 + 0x44,param_2 + 0x220);
  FUN_1414790b6(param_1 + 0xa0,param_2 + 0x500);
  FUN_141479b70(param_1 + 0x230,param_2 + 0x1180);
  FUN_141478ad0(param_1 + 0x35a,param_2 + 0x1ad0);
  FUN_141478cf2(param_1 + 0x402,param_2 + 0x2010);
  FUN_141478ad0(param_1 + 0x470,param_2 + 0x2380);
  FUN_141479b70(param_1 + 0x518,param_2 + 0x28c0);
  FUN_141478cf2(param_1 + 0x642,param_2 + 0x3210);
  memcpy(param_1 + 0x6b0,(void *)(param_2 + 0x3580),0xd4);
  cVar1 = *(char *)(param_2 + 0x3655);
  *(char *)((longlong)param_1 + 0x3655) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x3654) = *(undefined1 *)(param_2 + 0x3654);
  }
  return param_1;
}



// FUNCTION 145a4ebc4 FUN_145a4ebc4 body=249 status=ok
// SIG undefined FUN_145a4ebc4(void)

undefined8 *
FUN_145a4ebc4(undefined8 *param_1,undefined8 param_2,float param_3,undefined8 *param_4,
             undefined4 param_5,undefined8 param_6)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  local_88 = param_6;
  local_90 = 0;
  local_98 = 0;
  local_78 = 0;
  local_80 = param_2;
  FUN_1411bc492(param_1,4,0,&local_68);
  *param_1 = &PTR_FUN_149eeb588;
  uVar2 = *param_4;
  uVar3 = param_4[1];
  dVar1 = (double)param_3;
  param_1[8] = dVar1;
  param_1[9] = dVar1;
  param_1[10] = dVar1;
  param_1[0xb] = dVar1;
  local_68._0_4_ = (undefined4)uVar2;
  local_68._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_60._0_4_ = (undefined4)uVar3;
  uStack_60._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  *(undefined4 *)(param_1 + 0xc) = (undefined4)local_68;
  *(undefined4 *)((longlong)param_1 + 100) = local_68._4_4_;
  *(undefined4 *)(param_1 + 0xd) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uStack_60._4_4_;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = param_5;
  *(undefined2 *)(param_1 + 0xf) = 0;
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
  local_68 = uVar2;
  uStack_60 = uVar3;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a4ecbe FUN_145a4ecbe body=196 status=ok
// SIG undefined FUN_145a4ecbe(void)

longlong FUN_145a4ecbe(longlong param_1,longlong param_2)

{
  FUN_144a87366();
  FUN_144a87366(param_1 + 0x60,param_2 + 0x60);
  FUN_144a87366(param_1 + 0xc0,param_2 + 0xc0);
  FUN_144a87366(param_1 + 0x120,param_2 + 0x120);
  FUN_144a87366(param_1 + 0x180,param_2 + 0x180);
  FUN_144a87366(param_1 + 0x1e0,param_2 + 0x1e0);
  FUN_144a87366(param_1 + 0x240,param_2 + 0x240);
  FUN_144a87366(param_1 + 0x2a0,param_2 + 0x2a0);
  FUN_144a87366(param_1 + 0x300,param_2 + 0x300);
  FUN_144a87366(param_1 + 0x360,param_2 + 0x360);
  FUN_144a87366(param_1 + 0x3c0,param_2 + 0x3c0);
  return param_1;
}



// FUNCTION 145a4ed82 FUN_145a4ed82 body=1156 status=ok
// SIG undefined FUN_145a4ed82(void)

undefined8 * FUN_145a4ed82(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  undefined **local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  longlong local_a0;
  undefined8 local_98 [10];
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_145a4f208();
  *param_1 = &PTR_FUN_149eed6d0;
  local_e0 = DAT_14c84635c;
  FUN_1412ce202(&local_d8);
  param_1[2] = &PTR_FUN_149ed05f0;
  *(undefined4 *)(param_1 + 3) = local_d0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_cc;
  *(undefined4 *)(param_1 + 4) = uStack_c8;
  *(undefined4 *)((longlong)param_1 + 0x24) = uStack_c4;
  *(undefined4 *)(param_1 + 5) = local_c0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_bc;
  *(undefined4 *)(param_1 + 6) = uStack_b8;
  *(undefined4 *)((longlong)param_1 + 0x34) = uStack_b4;
  *(undefined4 *)(param_1 + 7) = local_b0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_ac;
  *(undefined4 *)(param_1 + 8) = uStack_a8;
  *(undefined4 *)((longlong)param_1 + 0x44) = uStack_a4;
  param_1[9] = local_a0;
  if ((local_a0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  plVar2 = local_38;
  puVar5 = local_98;
  puVar6 = param_1 + 10;
  for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0xa4) = local_44;
  *(undefined4 *)(param_1 + 0x14) = local_48;
  param_1[0x15] = local_40;
  param_1[0x16] = local_38;
  if (local_38 == (longlong *)0x0) {
    param_1[0x17] = local_30;
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    param_1[0x17] = local_30;
    local_d8 = &PTR_FUN_149ed05f0;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
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
  local_e0 = DAT_14c84635c;
  FUN_1412ce202(&local_d8);
  param_1[0x18] = &PTR_FUN_149ed05f0;
  *(undefined4 *)(param_1 + 0x19) = local_d0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = uStack_cc;
  *(undefined4 *)(param_1 + 0x1a) = uStack_c8;
  *(undefined4 *)((longlong)param_1 + 0xd4) = uStack_c4;
  *(undefined4 *)(param_1 + 0x1b) = local_c0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = uStack_bc;
  *(undefined4 *)(param_1 + 0x1c) = uStack_b8;
  *(undefined4 *)((longlong)param_1 + 0xe4) = uStack_b4;
  *(undefined4 *)(param_1 + 0x1d) = local_b0;
  *(undefined4 *)((longlong)param_1 + 0xec) = uStack_ac;
  *(undefined4 *)(param_1 + 0x1e) = uStack_a8;
  *(undefined4 *)((longlong)param_1 + 0xf4) = uStack_a4;
  param_1[0x1f] = local_a0;
  if ((local_a0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  plVar2 = local_38;
  puVar5 = local_98;
  puVar6 = param_1 + 0x20;
  for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x154) = local_44;
  *(undefined4 *)(param_1 + 0x2a) = local_48;
  param_1[0x2b] = local_40;
  param_1[0x2c] = local_38;
  if (local_38 == (longlong *)0x0) {
    param_1[0x2d] = local_30;
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    param_1[0x2d] = local_30;
    local_d8 = &PTR_FUN_149ed05f0;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
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
  local_e0 = DAT_14c84635c;
  FUN_1412ce202(&local_d8);
  param_1[0x2e] = &PTR_FUN_149ed05f0;
  *(undefined4 *)(param_1 + 0x2f) = local_d0;
  *(undefined4 *)((longlong)param_1 + 0x17c) = uStack_cc;
  *(undefined4 *)(param_1 + 0x30) = uStack_c8;
  *(undefined4 *)((longlong)param_1 + 0x184) = uStack_c4;
  *(undefined4 *)(param_1 + 0x31) = local_c0;
  *(undefined4 *)((longlong)param_1 + 0x18c) = uStack_bc;
  *(undefined4 *)(param_1 + 0x32) = uStack_b8;
  *(undefined4 *)((longlong)param_1 + 0x194) = uStack_b4;
  *(undefined4 *)(param_1 + 0x33) = local_b0;
  *(undefined4 *)((longlong)param_1 + 0x19c) = uStack_ac;
  *(undefined4 *)(param_1 + 0x34) = uStack_a8;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = uStack_a4;
  param_1[0x35] = local_a0;
  if ((local_a0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar5 = local_98;
  puVar6 = param_1 + 0x36;
  for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x204) = local_44;
  *(undefined4 *)(param_1 + 0x40) = local_48;
  param_1[0x41] = local_40;
  param_1[0x42] = local_38;
  if (local_38 == (longlong *)0x0) {
    param_1[0x43] = local_30;
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    param_1[0x43] = local_30;
    local_d8 = &PTR_FUN_149ed05f0;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_38 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar3 = (int *)((longlong)local_38 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_38 + 0x10))(local_38);
        }
      }
    }
  }
  FUN_140a581a0(param_1 + 0x44);
  FUN_1412cd24a(param_1 + 0xa0);
  FUN_1414c3a06(param_1 + 0x230);
  FUN_140f13d18(param_1 + 0x35a);
  FUN_140ca8d78(param_1 + 0x402);
  FUN_140f13d18(param_1 + 0x470);
  FUN_1414c3a06(param_1 + 0x518);
  FUN_140ca8d78(param_1 + 0x642);
  param_1[0x6b0] = 0;
  param_1[0x6b1] = 0;
  param_1[0x6b2] = 0;
  param_1[0x6b3] = 0;
  param_1[0x6b4] = 0;
  param_1[0x6b5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x35ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x35b4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x35bc) = 0x40000000;
  param_1[0x6b8] = 0;
  param_1[0x6b9] = 0;
  param_1[0x6ba] = 0;
  param_1[0x6bb] = 0;
  param_1[0x6bc] = 0;
  param_1[0x6bd] = 0;
  param_1[0x6be] = 0;
  param_1[0x6bf] = 0;
  param_1[0x6c0] = 0;
  param_1[0x6c1] = 0;
  param_1[0x6c2] = 0;
  param_1[0x6c3] = 0;
  param_1[0x6c4] = 0x4180000041800000;
  *(undefined1 *)(param_1 + 0x6c5) = 1;
  *(undefined8 *)((longlong)param_1 + 0x362c) = 0x3f80000042800000;
  *(undefined1 *)((longlong)param_1 + 0x3655) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3634) = 0;
  *(undefined8 *)((longlong)param_1 + 0x363c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3644) = 0;
  *(undefined8 *)((longlong)param_1 + 0x364c) = 0;
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a4f208 FUN_145a4f208 body=14 status=ok
// SIG undefined FUN_145a4f208(void)

void FUN_145a4f208(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149edb610;
  return;
}



// FUNCTION 145a4f216 FUN_145a4f216 body=609 status=ok
// SIG undefined FUN_145a4f216(void)

void FUN_145a4f216(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x3f8);
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
  plVar3 = *(longlong **)(param_1 + 0x398);
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
  plVar3 = *(longlong **)(param_1 + 0x338);
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
  plVar3 = *(longlong **)(param_1 + 0x2d8);
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
  plVar3 = *(longlong **)(param_1 + 0x278);
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
  plVar3 = *(longlong **)(param_1 + 0x218);
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
  plVar3 = *(longlong **)(param_1 + 0x1b8);
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
  plVar3 = *(longlong **)(param_1 + 0x158);
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
  plVar3 = *(longlong **)(param_1 + 0xf8);
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
  plVar3 = *(longlong **)(param_1 + 0x98);
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
  plVar3 = *(longlong **)(param_1 + 0x38);
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
                    /* WARNING: Could not recover jumptable at 0x000145a4f473. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145a4f478 FUN_145a4f478 body=2437 status=ok
// SIG undefined FUN_145a4f478(void)

longlong FUN_145a4f478(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined1 auStack_158 [32];
  undefined4 *local_138;
  undefined8 local_128;
  longlong *local_120;
  undefined8 local_118;
  longlong *local_110;
  undefined8 local_108;
  longlong *local_100;
  undefined8 local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined1 local_68 [8];
  undefined4 local_60;
  undefined3 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_58 = 0;
  local_60 = 0;
  uStack_5c = 0;
  local_50 = 0;
  uStack_48 = 0x3f80000000000000;
  FUN_1446ddc76(local_68,"Regular",1);
  uVar4 = FUN_1412ce748();
  FUN_1412ce8e2(uVar4,&local_88);
  local_78 = local_88;
  local_70 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
  }
  local_138 = &local_60;
  FUN_1412ce660(param_1,&local_78,0x41200000,local_68);
  plVar2 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  local_58 = 0;
  local_60 = 0;
  uStack_5c = 0;
  local_50 = 0;
  uStack_48 = 0x3f80000000000000;
  FUN_1446ddc76(local_68,"Italic",1);
  uVar4 = FUN_1412ce748();
  FUN_1412ce8e2(uVar4,&local_88);
  local_98 = local_88;
  local_90 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
  }
  local_138 = &local_60;
  FUN_1412ce660(param_1 + 0x60,&local_98,0x41200000,local_68);
  plVar2 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  local_58 = 0;
  local_60 = 0;
  uStack_5c = 0;
  local_50 = 0;
  uStack_48 = 0x3f80000000000000;
  FUN_1446ddc76(local_68,&DAT_149eea5a7,1);
  uVar4 = FUN_1412ce748();
  FUN_1412ce8e2(uVar4,&local_88);
  local_a8 = local_88;
  local_a0 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
  }
  local_138 = &local_60;
  FUN_1412ce660(param_1 + 0xc0,&local_a8,0x41200000,local_68);
  plVar2 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  local_58 = 0;
  local_60 = 0;
  uStack_5c = 0;
  local_50 = 0;
  uStack_48 = 0x3f80000000000000;
  FUN_1446ddc76(local_68,"BoldItalic",1);
  uVar4 = FUN_1412ce748();
  FUN_1412ce8e2(uVar4,&local_88);
  local_b8 = local_88;
  local_b0 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
  }
  local_138 = &local_60;
  FUN_1412ce660(param_1 + 0x120,&local_b8,0x41200000,local_68);
  plVar2 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  local_58 = 0;
  local_60 = 0;
  uStack_5c = 0;
  local_50 = 0;
  uStack_48 = 0x3f80000000000000;
  FUN_1446ddc76(local_68,"Regular",1);
  uVar4 = FUN_1412ce748();
  FUN_1412ce8e2(uVar4,&local_88);
  local_c8 = local_88;
  local_c0 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
  }
  local_138 = &local_60;
  FUN_1412ce660(param_1 + 0x180,&local_c8,0x41000000,local_68);
  plVar2 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  local_58 = 0;
  local_60 = 0;
  uStack_5c = 0;
  local_50 = 0;
  uStack_48 = 0x3f80000000000000;
  FUN_1446ddc76(local_68,&DAT_149eea5a7,1);
  uVar4 = FUN_1412ce748();
  FUN_1412ce8e2(uVar4,&local_88);
  local_d8 = local_88;
  local_d0 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
  }
  local_138 = &local_60;
  FUN_1412ce660(param_1 + 0x1e0,&local_d8,0x41000000,local_68);
  plVar2 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  local_58 = 0;
  local_60 = 0;
  uStack_5c = 0;
  local_50 = 0;
  uStack_48 = 0x3f80000000000000;
  FUN_1446ddc76(local_68,"Regular",1);
  uVar4 = FUN_1412ce748();
  FUN_1412ce8e2(uVar4,&local_88);
  local_e8 = local_88;
  local_e0 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
  }
  local_138 = &local_60;
  FUN_1412ce660(param_1 + 0x240,&local_e8,0x41600000,local_68);
  plVar2 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  local_58 = 0;
  local_60 = 0;
  uStack_5c = 0;
  local_50 = 0;
  uStack_48 = 0x3f80000000000000;
  FUN_1446ddc76(local_68,&DAT_149eea5a7,1);
  uVar4 = FUN_1412ce748();
  FUN_1412ce8e2(uVar4,&local_88);
  local_f8 = local_88;
  local_f0 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
  }
  local_138 = &local_60;
  FUN_1412ce660(param_1 + 0x2a0,&local_f8,0x41600000,local_68);
  plVar2 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  local_58 = 0;
  local_60 = 0;
  uStack_5c = 0;
  local_50 = 0;
  uStack_48 = 0x3f80000000000000;
  FUN_1446ddc76(local_68,"BoldCondensed",1);
  uVar4 = FUN_1412ce748();
  FUN_1412ce8e2(uVar4,&local_88);
  local_108 = local_88;
  local_100 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
  }
  local_138 = &local_60;
  FUN_1412ce660(param_1 + 0x300,&local_108,0x42040000,local_68);
  plVar2 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  local_58 = 0;
  local_60 = 0;
  uStack_5c = 0;
  local_50 = 0;
  uStack_48 = 0x3f80000000000000;
  FUN_1446ddc76(local_68,"BoldCondensed",1);
  uVar4 = FUN_1412ce748();
  FUN_1412ce8e2(uVar4,&local_88);
  local_118 = local_88;
  local_110 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
  }
  local_138 = &local_60;
  FUN_1412ce660(param_1 + 0x360,&local_118,0x41a80000,local_68);
  plVar2 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  local_58 = 0;
  local_60 = 0;
  uStack_5c = 0;
  local_50 = 0;
  uStack_48 = 0x3f80000000000000;
  FUN_1446ddc76(local_68,"BoldCondensed",1);
  uVar4 = FUN_1412ce748();
  FUN_1412ce8e2(uVar4,&local_88);
  local_128 = local_88;
  local_120 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
  }
  local_138 = &local_60;
  FUN_1412ce660(param_1 + 0x3c0,&local_128,0x41700000,local_68);
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_80 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar3 = (int *)((longlong)local_80 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_80 + 0x10))(local_80);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a4fe04 FUN_145a4fe04 body=67 status=ok
// SIG undefined FUN_145a4fe04(void)

void FUN_145a4fe04(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_14487fd02();
  cVar1 = FUN_1449ce97a(param_1);
  if (iVar2 == 3 || cVar1 != '\x01') {
    return;
  }
  FUN_145a4fe48(param_1,&DAT_14cb712e8,0);
  return;
}



// FUNCTION 145a4fe48 FUN_145a4fe48 body=140 status=ok
// SIG undefined FUN_145a4fe48(void)

void FUN_145a4fe48(longlong *param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_144a7b040();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_144a7b040();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
        lVar4 = (**(code **)(*plVar3 + 0x20))(plVar3);
        if (lVar4 != 0) {
          if (param_3 == '\0') {
            FUN_1400bc8c2();
            return;
          }
          FUN_1400bc96c(lVar4 + 0x90,param_2);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 145a4fed4 FUN_145a4fed4 body=57 status=ok
// SIG undefined FUN_145a4fed4(void)

void FUN_145a4fed4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5d008 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5d008 = FUN_140002ddd(FUN_1464d9b95,uVar1,L"GbxDiscoveryInWorldIndicatorDef");
  }
  return;
}



// FUNCTION 145a4ff0d FUN_145a4ff0d body=61 status=ok
// SIG undefined FUN_145a4ff0d(void)

void FUN_145a4ff0d(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145a4ff4a(puVar1);
  *puVar1 = &PTR_FUN_14a5b1980;
  *(undefined1 *)(puVar1 + 0x16) = 1;
  puVar1[0x17] = 0;
  *(undefined1 *)(puVar1 + 0x18) = 2;
  *(byte *)((longlong)puVar1 + 0x52) = *(byte *)((longlong)puVar1 + 0x52) & 0xfe;
  return;
}



// FUNCTION 145a4ff4a FUN_145a4ff4a body=109 status=ok
// SIG undefined FUN_145a4ff4a(void)

undefined8 * FUN_145a4ff4a(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14a5b31c0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x41) = 0;
  *(undefined8 *)((longlong)param_1 + 0x49) = 0;
  *(undefined1 *)((longlong)param_1 + 0x51) = 3;
  *(byte *)((longlong)param_1 + 0x52) = (*(byte *)((longlong)param_1 + 0x52) & 0xe0) + 1;
  param_1[0xd] = 0;
  param_1[0xe] = 0x8000000000;
  param_1[0x11] = 0;
  param_1[0x12] = 0x8000000000;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  return param_1;
}



// FUNCTION 145a4ffb8 FUN_145a4ffb8 body=52 status=ok
// SIG undefined FUN_145a4ffb8(void)

void FUN_145a4ffb8(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x310);
  memset(_Dst,0,0x310);
  FUN_145a4ffec(_Dst);
  return;
}



// FUNCTION 145a4ffec FUN_145a4ffec body=118 status=ok
// SIG undefined FUN_145a4ffec(void)

undefined8 * FUN_145a4ffec(undefined8 *param_1)

{
  FUN_140e8cfb8();
  *param_1 = &PTR_FUN_14b9cb1a0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  *(undefined8 *)((longlong)param_1 + 700) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c4) = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  FUN_140056680(param_1 + 0x5d,&DAT_149dfb77a);
  *(undefined1 *)(param_1 + 0x5f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x304) = 0;
  *(undefined1 *)(param_1 + 0x61) = 0;
  return param_1;
}



// FUNCTION 145a50062 FUN_145a50062 body=138 status=ok
// SIG undefined FUN_145a50062(void)

code * FUN_145a50062(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LuminanceMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5800000046;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14728ebb8;
}



// FUNCTION 145a500ec FUN_145a500ec body=138 status=ok
// SIG undefined FUN_145a500ec(void)

code * FUN_145a500ec(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"IgnoreMaterialsLuminanceScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000048;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14728eb2e;
}



// FUNCTION 145a50176 FUN_145a50176 body=138 status=ok
// SIG undefined FUN_145a50176(void)

code * FUN_145a50176(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BlackHistogramBucketInfluence";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000040;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14728ee6a;
}



// FUNCTION 145a50200 FUN_145a50200 body=26 status=ok
// SIG undefined FUN_145a50200(void)

void FUN_145a50200(undefined8 param_1)

{
  FUN_14596bb78();
  FUN_145a5021a(param_1);
  return;
}



// FUNCTION 145a5021a FUN_145a5021a body=108 status=ok
// SIG undefined FUN_145a5021a(void)

void FUN_145a5021a(longlong param_1)

{
  FUN_145a50288(param_1,0);
  FUN_14117ff6e(param_1);
  FUN_14117f62e(param_1);
  FUN_145a50286(*(undefined8 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xf0));
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(int *)(param_1 + 0xf4) != 0) {
    FUN_148914ea4(param_1 + 0xe8);
  }
  *(undefined4 *)(param_1 + 0x30) = DAT_14c948620;
  *(undefined8 *)(param_1 + 0x28) = DAT_14c948618;
  return;
}



// FUNCTION 145a50286 FUN_145a50286 body=1 status=ok
// SIG undefined FUN_145a50286(void)

void FUN_145a50286(void)

{
  return;
}



// FUNCTION 145a50288 FUN_145a50288 body=272 status=ok
// SIG undefined FUN_145a50288(void)

void FUN_145a50288(undefined8 param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  code *local_50;
  undefined4 local_48;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = FUN_140d80c3e();
  plVar5 = (longlong *)FUN_140ec3c65(uVar4);
  if (plVar5 != (longlong *)0x0) {
    plVar6 = (longlong *)(**(code **)(*plVar5 + 0x90))(plVar5);
    if (param_2 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
    }
    lVar2 = plVar6[1];
    if ((longlong)(int)lVar2 != 0) {
      lVar1 = *plVar6;
      lVar7 = 0;
      do {
        if (((*(int *)(lVar1 + 8 + lVar7) != 0) &&
            (plVar6 = *(longlong **)(lVar1 + lVar7), plVar6 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar6 + 0x20))(plVar6,param_1), cVar3 != '\0'))
        goto LAB_145a5034d;
        lVar7 = lVar7 + 0x10;
      } while ((longlong)(int)lVar2 * 0x10 != lVar7);
    }
    uVar4 = (**(code **)(*plVar5 + 0x90))(plVar5);
    local_50 = FUN_145a503b0;
    local_48 = 0;
    FUN_145a50428(local_40,param_1);
    FUN_1448b6402(uVar4,&local_50,local_40);
    FUN_1449db362(local_40);
LAB_145a5034d:
    FUN_145a503b0(param_1);
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a503b0 FUN_145a503b0 body=119 status=ok
// SIG undefined FUN_145a503b0(void)

void FUN_145a503b0(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [44];
  longlong local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = FUN_140d80c3e();
  FUN_140fda471(&local_2c,uVar2);
  cVar1 = FUN_144a8940a(param_1 + 5,&local_2c);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 6) = local_24;
    param_1[5] = local_2c;
    (**(code **)(*param_1 + 0x30))(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a50428 FUN_145a50428 body=428 status=ok
// SIG undefined FUN_145a50428(void)

longlong * FUN_145a50428(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_145a50508:
    *puVar5 = &PTR_LAB_149e020b0;
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
    *puVar5 = &PTR_FUN_14b41b130;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145a50508;
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
    *puVar5 = &PTR_LAB_149e020b0;
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
    *puVar5 = &PTR_FUN_14b41b130;
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



// FUNCTION 145a505d4 FUN_145a505d4 body=356 status=ok
// SIG undefined FUN_145a505d4(void)

void FUN_145a505d4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0;
  local_30 = 0x3008;
  local_28 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  local_50 = local_30;
  local_48 = 0;
  FUN_145a5073a(local_20,&local_58,local_40);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a5073a FUN_145a5073a body=215 status=ok
// SIG undefined FUN_145a5073a(void)

void FUN_145a5073a(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 == 0) goto LAB_145a507ed;
  uVar1 = FUN_1403ec9c0();
  plVar2 = (longlong *)FUN_144718840(param_1,uVar1);
  if (((plVar2 == (longlong *)0x0) || (*param_2 == 0)) || (0xfffffffd < (int)param_2[1] - 1U))
  goto LAB_145a507ed;
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2);
  if (plVar2 == (longlong *)0x0) {
LAB_145a5080e:
    plVar5 = (longlong *)0x0;
  }
  else {
    lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
    lVar4 = FUN_14049e780();
    if ((lVar4 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar4 + 0x38))) goto LAB_145a5080e;
    plVar5 = (longlong *)0x0;
    if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30) {
      plVar5 = plVar2;
    }
  }
  local_40 = *param_2;
  local_38 = (undefined4)param_2[1];
  local_30 = 0;
  FUN_145a50812(plVar5,&local_40,param_3);
LAB_145a507ed:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a50812 FUN_145a50812 body=215 status=ok
// SIG undefined FUN_145a50812(void)

void FUN_145a50812(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = FUN_1458d2a44(param_2);
  if ((lVar5 != 0) && (lVar3 = *(longlong *)(lVar5 + 0x18), lVar3 != 0)) {
    plVar4 = *(longlong **)(lVar5 + 0x20);
    local_38 = lVar3;
    if (plVar4 == (longlong *)0x0) {
      local_30 = (longlong *)0x0;
      FUN_145a508ea(param_1,&local_38,param_3);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
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
      local_30 = plVar4;
      FUN_145a508ea(param_1,&local_38,param_3);
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a508ea FUN_145a508ea body=615 status=ok
// SIG undefined FUN_145a508ea(void)

void FUN_145a508ea(longlong param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  int *piVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  int local_84;
  
  uVar1 = *(uint *)(param_1 + 0x278);
  lVar12 = (longlong)(int)uVar1;
  if (lVar12 == 0) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 0x270);
  if (*plVar2 == *param_2) {
    bVar6 = true;
    if (*(int *)((longlong)plVar2 + 0x14) == 0 && (int)plVar2[2] == 0) goto LAB_145a50957;
    cVar7 = FUN_144729dda(plVar2 + 2);
    if ((cVar7 == '\0') || (lVar8 = FUN_14479d2ce(plVar2 + 2), lVar8 == param_3))
    goto LAB_145a50957;
  }
  bVar6 = false;
LAB_145a50957:
  local_84 = 0;
  uVar10 = 0;
LAB_145a50977:
  do {
    iVar4 = (int)uVar10;
    if ((int)(iVar4 + 1U) < (int)uVar1) {
      lVar8 = (longlong)iVar4;
      piVar11 = (int *)((longlong)plVar2 + lVar8 * 0x28 + 0x3c);
      bVar3 = true;
      lVar14 = 0;
      do {
        iVar13 = (int)lVar14;
        if (*(longlong *)(piVar11 + -5) == *param_2) {
          if (*piVar11 != 0 || piVar11[-1] != 0) {
            cVar7 = FUN_144729dda();
            if ((cVar7 != '\0') && (lVar9 = FUN_14479d2ce(piVar11 + -1), lVar9 != param_3))
            goto LAB_145a50a4c;
          }
          if (!bVar6) {
            uVar10 = (ulonglong)(iVar13 + iVar4 + 1);
            iVar13 = iVar13 + 1;
            goto LAB_145a50aa8;
          }
        }
        else {
LAB_145a50a4c:
          if (bVar6) {
            FUN_140ead4c4(plVar2 + lVar8 * 5,iVar13 + 1);
            if (!bVar3) goto LAB_145a509c0;
            uVar10 = lVar8 + 1 + lVar14;
            bVar6 = false;
            goto LAB_145a50977;
          }
        }
        bVar3 = lVar8 + lVar14 + 2 < lVar12;
        lVar14 = lVar14 + 1;
        piVar11 = piVar11 + 10;
        uVar5 = uVar1;
      } while ((lVar8 - lVar12) + 1 + lVar14 != 0);
    }
    else {
      bVar3 = false;
      uVar5 = iVar4 + 1U;
    }
    uVar10 = (ulonglong)uVar5;
    iVar13 = uVar5 - iVar4;
    if (bVar6) {
      FUN_140ead4c4(plVar2 + (longlong)iVar4 * 5,iVar13);
      bVar6 = false;
    }
    else {
LAB_145a50aa8:
      if (local_84 != iVar4) {
        memmove(plVar2 + (longlong)local_84 * 5,plVar2 + (longlong)iVar4 * 5,(longlong)iVar13 * 0x28
               );
      }
      local_84 = local_84 + iVar13;
      bVar6 = true;
    }
    if (!bVar3) {
LAB_145a509c0:
      *(int *)(param_1 + 0x278) = local_84;
      if (local_84 < (int)uVar1) {
        FUN_1447f69b6(param_1 + 0x248);
        return;
      }
      return;
    }
  } while( true );
}



// FUNCTION 145a50b58 FUN_145a50b58 body=221 status=ok
// SIG undefined FUN_145a50b58(void)

longlong FUN_145a50b58(void)

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
  if (DAT_14c9481c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1413d78d0;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1468707c3;
    local_40 = &LAB_145a30bbe;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/CoreUObject",L"GCObjectReferencer",&DAT_14c9481c0,&DAT_1468707c8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9481c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a50c3c FUN_145a50c3c body=221 status=ok
// SIG undefined FUN_145a50c3c(void)

longlong FUN_145a50c3c(void)

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
  if (DAT_14c952850 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1468e49f9;
    local_40 = FUN_146275f32;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/CoreUObject",L"PropertyWrapper",&DAT_14c952850,&DAT_1468e49fe);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c952850;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a50d20 FUN_145a50d20 body=221 status=ok
// SIG undefined FUN_145a50d20(void)

longlong FUN_145a50d20(void)

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
  if (DAT_14c98e1d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14698723b;
    local_40 = FUN_14627e45c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/ImageCore",L"SharedImageConstRefBlueprintFns",&DAT_14c98e1d0,
                  FUN_14627e43a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c98e1d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a50e04 FUN_145a50e04 body=221 status=ok
// SIG undefined FUN_145a50e04(void)

longlong FUN_145a50e04(void)

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
  if (DAT_14c98e430 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1469a3797;
    local_40 = FUN_14627ece0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Slate",L"ToolMenuBase",&DAT_14c98e430,&DAT_1469a3796);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c98e430;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a50ee8 FUN_145a50ee8 body=221 status=ok
// SIG undefined FUN_145a50ee8(void)

longlong FUN_145a50ee8(void)

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
  if (DAT_14c98e628 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1469b6f83;
    local_40 = FUN_14627f5d1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Slate",L"SlateSettings",&DAT_14c98e628,&DAT_1469b6f82);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c98e628;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a50fcc FUN_145a50fcc body=221 status=ok
// SIG undefined FUN_145a50fcc(void)

longlong FUN_145a50fcc(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c990ad0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_146b16711;
    local_40 = &LAB_145ce029e;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x108;
    FUN_14081cfa3(L"/Script/EngineSettings",L"GeneralProjectSettings",&DAT_14c990ad0,&DAT_146b16710)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c990ad0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a510b0 FUN_145a510b0 body=221 status=ok
// SIG undefined FUN_145a510b0(void)

longlong FUN_145a510b0(void)

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
  if (DAT_14c997a10 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_146ef13df;
    local_40 = FUN_146288422;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/PhysicsCore",L"BodySetupCore",&DAT_14c997a10,&DAT_146ef13de);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c997a10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a51194 FUN_145a51194 body=221 status=ok
// SIG undefined FUN_145a51194(void)

longlong FUN_145a51194(void)

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
  if (DAT_14c997e88 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_146efc443;
    local_40 = FUN_146288d32;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x68;
    FUN_14081cfa3(L"/Script/NetCore",L"StatePerObjectConfig",&DAT_14c997e88,&DAT_146efc442);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c997e88;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a51278 FUN_145a51278 body=221 status=ok
// SIG undefined FUN_145a51278(void)

longlong FUN_145a51278(void)

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
  if (DAT_14c9982d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_146f03c9b;
    local_40 = &LAB_145a1f22a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/IrisCore",L"DataStreamDefinitions",&DAT_14c9982d0,&DAT_146f03c9a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9982d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a5135c FUN_145a5135c body=221 status=ok
// SIG undefined FUN_145a5135c(void)

longlong FUN_145a5135c(void)

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
  if (DAT_14c998c18 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_146f079af;
    local_40 = FUN_14628c9d4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/IrisCore",L"SequentialPartialNetBlobHandlerConfig",&DAT_14c998c18,
                  &DAT_146f079ae);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c998c18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a51440 FUN_145a51440 body=221 status=ok
// SIG undefined FUN_145a51440(void)

longlong FUN_145a51440(void)

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
  if (DAT_14c99d628 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_146fe3870;
    local_40 = FUN_1462945de;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/AssetRegistry",L"AssetRegistryHelpers",&DAT_14c99d628,FUN_1462945bc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c99d628;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a51524 FUN_145a51524 body=221 status=ok
// SIG undefined FUN_145a51524(void)

longlong FUN_145a51524(void)

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
  if (DAT_14c99eca0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147047aaf;
    local_40 = FUN_146297ca7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/TypedElementFramework",L"EditorDataStorageFactory",&DAT_14c99eca0,
                  &DAT_147047aae);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c99eca0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a51608 FUN_145a51608 body=221 status=ok
// SIG undefined FUN_145a51608(void)

longlong FUN_145a51608(void)

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
  if (DAT_14c99edb0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147047eef;
    local_40 = FUN_14629822a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/TypedElementFramework",L"TypedElementHandleLibrary",&DAT_14c99edb0,
                  FUN_146298208);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c99edb0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a516ec FUN_145a516ec body=221 status=ok
// SIG undefined FUN_145a516ec(void)

longlong FUN_145a516ec(void)

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
  if (DAT_14c99eef8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14704a60e;
    local_40 = FUN_146298988;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/TypedElementFramework",L"TypedElementListLibrary",&DAT_14c99eef8,
                  FUN_146298966);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c99eef8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a517d0 FUN_145a517d0 body=221 status=ok
// SIG undefined FUN_145a517d0(void)

longlong FUN_145a517d0(void)

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
  if (DAT_14c99f690 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14705b067;
    local_40 = FUN_14629c1ee;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/TypedElementRuntime",L"TypedElementSelectionSetLibrary",&DAT_14c99f690,
                  FUN_14629c1cc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c99f690;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a518b4 FUN_145a518b4 body=221 status=ok
// SIG undefined FUN_145a518b4(void)

longlong FUN_145a518b4(void)

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
  if (DAT_14caa82d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14747b817;
    local_40 = &LAB_145ff1dc8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x2a0;
    FUN_14081cfa3(L"/Script/GameplayTags",L"GameplayTagsManager",&DAT_14caa82d0,&DAT_14747b816);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa82d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a51998 FUN_145a51998 body=221 status=ok
// SIG undefined FUN_145a51998(void)

longlong FUN_145a51998(void)

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
  if (DAT_14caa8668 == 0) {
    local_30 = &local_10;
    local_10 = FUN_146328bc8;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14747f041;
    local_40 = FUN_146328bfb;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x78;
    FUN_14081cfa3(L"/Script/DataflowEngine",L"DataflowContextObject",&DAT_14caa8668,&DAT_14747f040);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa8668;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a51a7c FUN_145a51a7c body=221 status=ok
// SIG undefined FUN_145a51a7c(void)

longlong FUN_145a51a7c(void)

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
  if (DAT_14cab19d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147518a57;
    local_40 = FUN_1463385ff;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/TimeManagement",L"TimeSynchronizationSource",&DAT_14cab19d0,
                  &DAT_147518a56);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab19d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a51b60 FUN_145a51b60 body=221 status=ok
// SIG undefined FUN_145a51b60(void)

longlong FUN_145a51b60(void)

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
  if (DAT_14cab24d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147533af9;
    local_40 = &LAB_145d6df04;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x230;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneCompiledDataManager",&DAT_14cab24d0,
                  &DAT_147533af8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab24d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a51c44 FUN_145a51c44 body=221 status=ok
// SIG undefined FUN_145a51c44(void)

longlong FUN_145a51c44(void)

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
  if (DAT_14cab35b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147573d2e;
    local_40 = FUN_14634059a;
    local_48 = L"EditorSettings";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneMetaData",&DAT_14cab35b8,FUN_146340578);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab35b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a51d28 FUN_145a51d28 body=221 status=ok
// SIG undefined FUN_145a51d28(void)

longlong FUN_145a51d28(void)

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
  if (DAT_14cabb8a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1477dd985;
    local_40 = &LAB_145aaa81a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xa8;
    FUN_14081cfa3(L"/Script/AudioMixer",L"AudioGenerator",&DAT_14cabb8a0,&DAT_1477dd984);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabb8a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a51e0c FUN_145a51e0c body=221 status=ok
// SIG undefined FUN_145a51e0c(void)

longlong FUN_145a51e0c(void)

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
  if (DAT_14cabbde8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1477f666c;
    local_40 = FUN_1463636cc;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/MovieSceneCapture",L"MovieSceneCaptureEnvironment",&DAT_14cabbde8,
                  FUN_1463636aa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabbde8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a51ef0 FUN_145a51ef0 body=221 status=ok
// SIG undefined FUN_145a51ef0(void)

longlong FUN_145a51ef0(void)

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
  if (DAT_14cabd048 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147825f9c;
    local_40 = FUN_146369010;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/MRMesh",L"MeshReconstructorBase",&DAT_14cabd048,FUN_146368fee);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabd048;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a51fd4 FUN_145a51fd4 body=221 status=ok
// SIG undefined FUN_145a51fd4(void)

longlong FUN_145a51fd4(void)

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
  if (DAT_14cabf548 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14785cfb1;
    local_40 = &LAB_145a5ee13;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/Engine",L"BlueprintCore",&DAT_14cabf548,&DAT_14785cfb0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabf548;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a520b8 FUN_145a520b8 body=221 status=ok
// SIG undefined FUN_145a520b8(void)

longlong FUN_145a520b8(void)

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
  if (DAT_14cabff98 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147863ea1;
    local_40 = &LAB_1459be2de;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"EdGraphSchema",&DAT_14cabff98,&DAT_147863ea0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabff98;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a5219c FUN_145a5219c body=221 status=ok
// SIG undefined FUN_145a5219c(void)

longlong FUN_145a5219c(void)

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
  if (DAT_14cb10be0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147db2f4d;
    local_40 = FUN_14640eebb;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"ActorDescContainerInstance",&DAT_14cb10be0,&DAT_147db2f4c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb10be0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a52280 FUN_145a52280 body=221 status=ok
// SIG undefined FUN_145a52280(void)

longlong FUN_145a52280(void)

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
  if (DAT_14cac90a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1478ae1a5;
    local_40 = FUN_14639acd2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"WorldPartitionPropertyOverride",&DAT_14cac90a0,&DAT_1478ae1a4)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac90a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a52364 FUN_145a52364 body=221 status=ok
// SIG undefined FUN_145a52364(void)

longlong FUN_145a52364(void)

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
  if (DAT_14cb10bc8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147db2f49;
    local_40 = FUN_14640ee69;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"ActorDescContainer",&DAT_14cb10bc8,&DAT_147db2f48);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb10bc8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a52448 FUN_145a52448 body=221 status=ok
// SIG undefined FUN_145a52448(void)

longlong FUN_145a52448(void)

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
  if (DAT_14cac46c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147881e0d;
    local_40 = FUN_1463856b6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000010;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"MaterialFunctionInterfaceEditorOnlyData",&DAT_14cac46c0,
                  &DAT_147881e0c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac46c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a5252c FUN_145a5252c body=221 status=ok
// SIG undefined FUN_145a5252c(void)

longlong FUN_145a5252c(void)

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
  if (DAT_14cac4e30 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147884df3;
    local_40 = &LAB_14591eded;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/Engine",L"NavLinkDefinition",&DAT_14cac4e30,&DAT_147884df2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac4e30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a52610 FUN_145a52610 body=221 status=ok
// SIG undefined FUN_145a52610(void)

longlong FUN_145a52610(void)

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
  if (DAT_14cac6548 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14788caad;
    local_40 = &LAB_145c852ae;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0xb0;
    FUN_14081cfa3(L"/Script/Engine",L"PlatformInterfaceWebResponse",&DAT_14cac6548,FUN_14638d904);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac6548;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a526f4 FUN_145a526f4 body=221 status=ok
// SIG undefined FUN_145a526f4(void)

longlong FUN_145a526f4(void)

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
  if (DAT_14cac84b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1478a60f1;
    local_40 = &LAB_145ac29f8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/Engine",L"AnimatedSparseVolumeTextureController",&DAT_14cac84b8,
                  FUN_14639720a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac84b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a527d8 FUN_145a527d8 body=221 status=ok
// SIG undefined FUN_145a527d8(void)

longlong FUN_145a527d8(void)

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
  if (DAT_14cac8668 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1478a88e4;
    local_40 = FUN_146397fc4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"EditorFlagCollector",&DAT_14cac8668,FUN_146397fa2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac8668;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a528bc FUN_145a528bc body=221 status=ok
// SIG undefined FUN_145a528bc(void)

longlong FUN_145a528bc(void)

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
  if (DAT_14cad5b68 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147a5b029;
    local_40 = FUN_1463c2ede;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"ReporterBase",&DAT_14cad5b68,&DAT_147a5b028);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad5b68;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a529a0 FUN_145a529a0 body=221 status=ok
// SIG undefined FUN_145a529a0(void)

longlong FUN_145a529a0(void)

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
  if (DAT_14cb0b6a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147d70e07;
    local_40 = FUN_1464087c0;
    local_48 = L"DeviceProfiles";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/Engine",L"TextureLODSettings",&DAT_14cb0b6a8,&DAT_147d70e06);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb0b6a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a52a84 FUN_145a52a84 body=221 status=ok
// SIG undefined FUN_145a52a84(void)

longlong FUN_145a52a84(void)

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
  if (DAT_14cad7bf8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147a7fac3;
    local_40 = FUN_1463c55d9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"ActorElementAssetDataInterface",&DAT_14cad7bf8,&DAT_147a7fac2)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad7bf8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a52b68 FUN_145a52b68 body=221 status=ok
// SIG undefined FUN_145a52b68(void)

longlong FUN_145a52b68(void)

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
  if (DAT_14cad7c10 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147a7faf7;
    local_40 = FUN_1463c5636;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"ActorElementCounterInterface",&DAT_14cad7c10,&DAT_147a7faf6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad7c10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a52c4c FUN_145a52c4c body=221 status=ok
// SIG undefined FUN_145a52c4c(void)

longlong FUN_145a52c4c(void)

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
  if (DAT_14cad7c30 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147a7fd1b;
    local_40 = FUN_1463c5693;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"ActorElementHierarchyInterface",&DAT_14cad7c30,&DAT_147a7fd1a)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad7c30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a52d30 FUN_145a52d30 body=221 status=ok
// SIG undefined FUN_145a52d30(void)

longlong FUN_145a52d30(void)

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
  if (DAT_14cad7c48 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147a7fd27;
    local_40 = FUN_1463c56f0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"ActorElementObjectInterface",&DAT_14cad7c48,&DAT_147a7fd26);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad7c48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a52e14 FUN_145a52e14 body=221 status=ok
// SIG undefined FUN_145a52e14(void)

longlong FUN_145a52e14(void)

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
  if (DAT_14cad7c60 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147a7fd49;
    local_40 = FUN_1463c574d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"ActorElementSelectionInterface",&DAT_14cad7c60,&DAT_147a7fd48)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad7c60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a52ef8 FUN_145a52ef8 body=221 status=ok
// SIG undefined FUN_145a52ef8(void)

longlong FUN_145a52ef8(void)

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
  if (DAT_14cad7c88 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147a7fd4d;
    local_40 = FUN_1463c57aa;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"ActorElementWorldInterface",&DAT_14cad7c88,&DAT_147a7fd4c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad7c88;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a52fdc FUN_145a52fdc body=221 status=ok
// SIG undefined FUN_145a52fdc(void)

longlong FUN_145a52fdc(void)

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
  if (DAT_14cad7ca0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147a80be9;
    local_40 = FUN_1463c5807;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"ComponentElementCounterInterface",&DAT_14cad7ca0,
                  &DAT_147a80be8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad7ca0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a530c0 FUN_145a530c0 body=221 status=ok
// SIG undefined FUN_145a530c0(void)

longlong FUN_145a530c0(void)

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
  if (DAT_14cad7cc0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147a80e0d;
    local_40 = FUN_1463c5864;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"ComponentElementHierarchyInterface",&DAT_14cad7cc0,
                  &DAT_147a80e0c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad7cc0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a531a4 FUN_145a531a4 body=221 status=ok
// SIG undefined FUN_145a531a4(void)

longlong FUN_145a531a4(void)

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
  if (DAT_14cad7cd8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147a80e73;
    local_40 = FUN_1463c58c1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"ComponentElementObjectInterface",&DAT_14cad7cd8,&DAT_147a80e72
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad7cd8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a53288 FUN_145a53288 body=221 status=ok
// SIG undefined FUN_145a53288(void)

longlong FUN_145a53288(void)

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
  if (DAT_14cad7cf0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147a80e95;
    local_40 = FUN_1463c591e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"ComponentElementSelectionInterface",&DAT_14cad7cf0,
                  &DAT_147a80e94);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad7cf0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a5336c FUN_145a5336c body=221 status=ok
// SIG undefined FUN_145a5336c(void)

longlong FUN_145a5336c(void)

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
  if (DAT_14cad7d08 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147a80e99;
    local_40 = FUN_1463c597b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"ComponentElementWorldInterface",&DAT_14cad7d08,&DAT_147a80e98)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad7d08;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a53450 FUN_145a53450 body=221 status=ok
// SIG undefined FUN_145a53450(void)

longlong FUN_145a53450(void)

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
  if (DAT_14cad7dd0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147a838a9;
    local_40 = &LAB_145c45343;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x828;
    FUN_14081cfa3(L"/Script/Engine",L"TypedElementCommonActions",&DAT_14cad7dd0,FUN_1463c5d5e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad7dd0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a53534 FUN_145a53534 body=221 status=ok
// SIG undefined FUN_145a53534(void)

longlong FUN_145a53534(void)

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
  if (DAT_14cad7ef8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147a87daf;
    local_40 = FUN_1463c626c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"ObjectElementAssetDataInterface",&DAT_14cad7ef8,&DAT_147a87dae
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad7ef8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a53618 FUN_145a53618 body=221 status=ok
// SIG undefined FUN_145a53618(void)

longlong FUN_145a53618(void)

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
  if (DAT_14cad7f10 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147a87de3;
    local_40 = FUN_1463c62c9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"ObjectElementCounterInterface",&DAT_14cad7f10,&DAT_147a87de2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad7f10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a536fc FUN_145a536fc body=221 status=ok
// SIG undefined FUN_145a536fc(void)

longlong FUN_145a536fc(void)

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
  if (DAT_14cad7f30 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147a88215;
    local_40 = FUN_1463c6326;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"ObjectElementObjectInterface",&DAT_14cad7f30,&DAT_147a88214);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad7f30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a537e0 FUN_145a537e0 body=221 status=ok
// SIG undefined FUN_145a537e0(void)

longlong FUN_145a537e0(void)

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
  if (DAT_14cad7f48 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147a88237;
    local_40 = FUN_1463c6383;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"ObjectElementSelectionInterface",&DAT_14cad7f48,&DAT_147a88236
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad7f48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a538c4 FUN_145a538c4 body=221 status=ok
// SIG undefined FUN_145a538c4(void)

longlong FUN_145a538c4(void)

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
  if (DAT_14cad7f60 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147a8823b;
    local_40 = FUN_1463c63e0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"SMInstanceElementAssetDataInterface",&DAT_14cad7f60,
                  &DAT_147a8823a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad7f60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a539a8 FUN_145a539a8 body=221 status=ok
// SIG undefined FUN_145a539a8(void)

longlong FUN_145a539a8(void)

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
  if (DAT_14cad7fb0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147a886ff;
    local_40 = FUN_1463c643d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"SMInstanceElementHierarchyInterface",&DAT_14cad7fb0,
                  &DAT_147a886fe);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad7fb0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a53a8c FUN_145a53a8c body=221 status=ok
// SIG undefined FUN_145a53a8c(void)

longlong FUN_145a53a8c(void)

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
  if (DAT_14cad80c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147a88903;
    local_40 = FUN_1463c64e9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"SMInstanceElementPrimitiveCustomDataInterface",&DAT_14cad80c0,
                  &DAT_147a88902);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad80c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a53b70 FUN_145a53b70 body=221 status=ok
// SIG undefined FUN_145a53b70(void)

longlong FUN_145a53b70(void)

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
  if (DAT_14cad80d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147a88a27;
    local_40 = FUN_1463c6546;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"SMInstanceElementSelectionInterface",&DAT_14cad80d8,
                  &DAT_147a88a26);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad80d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a53c54 FUN_145a53c54 body=221 status=ok
// SIG undefined FUN_145a53c54(void)

longlong FUN_145a53c54(void)

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
  if (DAT_14cad80f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147a88b75;
    local_40 = FUN_1463c65a3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"SMInstanceElementWorldInterface",&DAT_14cad80f0,&DAT_147a88b74
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad80f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a53d38 FUN_145a53d38 body=221 status=ok
// SIG undefined FUN_145a53d38(void)

longlong FUN_145a53d38(void)

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
  if (DAT_14cad8628 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147a92c0b;
    local_40 = FUN_1463c7828;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"PoseWatchElement",&DAT_14cad8628,&DAT_147a92c0a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad8628;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a53e1c FUN_145a53e1c body=221 status=ok
// SIG undefined FUN_145a53e1c(void)

longlong FUN_145a53e1c(void)

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
  if (DAT_14cb04010 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147cf2529;
    local_40 = FUN_1463fe493;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/Engine",L"ScriptViewportClient",&DAT_14cb04010,&DAT_147cf2528);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb04010;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a53f00 FUN_145a53f00 body=221 status=ok
// SIG undefined FUN_145a53f00(void)

longlong FUN_145a53f00(void)

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
  if (DAT_14cae8598 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147b8b677;
    local_40 = FUN_1463e6d24;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"BlueprintTypeConversions",&DAT_14cae8598,FUN_1463e6d02);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cae8598;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a53fe4 FUN_145a53fe4 body=221 status=ok
// SIG undefined FUN_145a53fe4(void)

longlong FUN_145a53fe4(void)

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
  if (DAT_14cb0fae8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147da8245;
    local_40 = FUN_14640d8f9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"VirtualTexture",&DAT_14cb0fae8,&DAT_147da8244);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb0fae8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a540c8 FUN_145a540c8 body=221 status=ok
// SIG undefined FUN_145a540c8(void)

longlong FUN_145a540c8(void)

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
  if (DAT_14cb11598 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147dbe6a3;
    local_40 = FUN_146411459;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"WorldPartitionHLODModifier",&DAT_14cb11598,&DAT_147dbe6a2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb11598;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a541ac FUN_145a541ac body=221 status=ok
// SIG undefined FUN_145a541ac(void)

longlong FUN_145a541ac(void)

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
  if (DAT_14cb1a4a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147e195e5;
    local_40 = FUN_146417bde;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxSpawn",L"GbxTaggedAnim",&DAT_14cb1a4a8,&DAT_147e195e4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1a4a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a54290 FUN_145a54290 body=221 status=ok
// SIG undefined FUN_145a54290(void)

longlong FUN_145a54290(void)

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
  if (DAT_14cb246f8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147f6249f;
    local_40 = FUN_1464424d5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxDestruction",L"CustomFractureFieldEffects",&DAT_14cb246f8,
                  &DAT_147f6249e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb246f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a54374 FUN_145a54374 body=221 status=ok
// SIG undefined FUN_145a54374(void)

longlong FUN_145a54374(void)

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
  if (DAT_14cb2f630 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14804da4f;
    local_40 = FUN_146460848;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/NiagaraShader",L"NiagaraScriptBase",&DAT_14cb2f630,&DAT_14804da4e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb2f630;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a54458 FUN_145a54458 body=221 status=ok
// SIG undefined FUN_145a54458(void)

longlong FUN_145a54458(void)

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
  if (DAT_14cb3e738 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1481c6469;
    local_40 = FUN_146474b26;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraEventReceiverEmitterAction",&DAT_14cb3e738,
                  &DAT_1481c6468);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb3e738;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a5453c FUN_145a5453c body=221 status=ok
// SIG undefined FUN_145a5453c(void)

longlong FUN_145a5453c(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb45948 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148236c75;
    local_40 = &LAB_145abd5cb;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 0x10;
    local_68 = 0x1b0;
    FUN_14081cfa3(L"/Script/CommonUI",L"CommonUISettings",&DAT_14cb45948,&DAT_148236c74);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb45948;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a54620 FUN_145a54620 body=221 status=ok
// SIG undefined FUN_145a54620(void)

longlong FUN_145a54620(void)

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
  if (DAT_14cb4a5e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14840d14b;
    local_40 = FUN_14648a290;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"InteractiveCommandArguments",&DAT_14cb4a5e8
                  ,&DAT_14840d14a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4a5e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a54704 FUN_145a54704 body=221 status=ok
// SIG undefined FUN_145a54704(void)

longlong FUN_145a54704(void)

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
  if (DAT_14cb4a600 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14840d14f;
    local_40 = FUN_14648a2ea;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"InteractiveCommandResult",&DAT_14cb4a600,
                  &DAT_14840d14e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4a600;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a547e8 FUN_145a547e8 body=221 status=ok
// SIG undefined FUN_145a547e8(void)

longlong FUN_145a547e8(void)

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
  if (DAT_14cb4a618 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14840d153;
    local_40 = FUN_14648a33c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"InteractiveCommand",&DAT_14cb4a618,
                  &DAT_14840d152);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4a618;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a548cc FUN_145a548cc body=221 status=ok
// SIG undefined FUN_145a548cc(void)

longlong FUN_145a548cc(void)

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
  if (DAT_14cb4b960 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148451fc9;
    local_40 = FUN_14648fdd7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"SceneSnappingManager",&DAT_14cb4b960,
                  &DAT_148451fc8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4b960;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a549b0 FUN_145a549b0 body=221 status=ok
// SIG undefined FUN_145a549b0(void)

longlong FUN_145a549b0(void)

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
  if (DAT_14cb4b978 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14845225b;
    local_40 = FUN_14648fe29;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"SelectionSet",&DAT_14cb4b978,&DAT_14845225a
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4b978;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a54a94 FUN_145a54a94 body=221 status=ok
// SIG undefined FUN_145a54a94(void)

longlong FUN_145a54a94(void)

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
  if (DAT_14cb4d000 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148505bab;
    local_40 = FUN_146494b4c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/ModelingComponents",L"ModelingObjectsCreationAPI",&DAT_14cb4d000,
                  FUN_146494b2a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4d000;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a54b78 FUN_145a54b78 body=221 status=ok
// SIG undefined FUN_145a54b78(void)

longlong FUN_145a54b78(void)

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
  if (DAT_14cb58248 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14864efaf;
    local_40 = &LAB_145ce65e0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xd8;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxActivityLogger",&DAT_14cb58248,&DAT_14864efae);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb58248;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a54c5c FUN_145a54c5c body=221 status=ok
// SIG undefined FUN_145a54c5c(void)

longlong FUN_145a54c5c(void)

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
  if (DAT_14cb59210 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14865d5c1;
    local_40 = &LAB_1458befac;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxIdentityResolver",&DAT_14cb59210,&DAT_14865d5c0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb59210;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a54d40 FUN_145a54d40 body=221 status=ok
// SIG undefined FUN_145a54d40(void)

longlong FUN_145a54d40(void)

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
  if (DAT_14cb5cec0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148692795;
    local_40 = FUN_1464d9628;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxDiscoveryFODBase",&DAT_14cb5cec0,&DAT_148692794);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5cec0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a54e24 FUN_145a54e24 body=221 status=ok
// SIG undefined FUN_145a54e24(void)

longlong FUN_145a54e24(void)

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
  if (DAT_14cb5d388 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14869637d;
    local_40 = FUN_1464dae08;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxDiscoveryDiscoverableActorData",&DAT_14cb5d388,
                  FUN_1464dade6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5d388;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a54f08 FUN_145a54f08 body=221 status=ok
// SIG undefined FUN_145a54f08(void)

longlong FUN_145a54f08(void)

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
  if (DAT_14cb64090 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1486fa39b;
    local_40 = FUN_146501452;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillActionExecHandlerWriter_ControlledMove",
                  &DAT_14cb64090,FUN_146501430);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb64090;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a54fec FUN_145a54fec body=221 status=ok
// SIG undefined FUN_145a54fec(void)

longlong FUN_145a54fec(void)

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
  if (DAT_14cb64468 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1486fe5e5;
    local_40 = FUN_146502932;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillBlueprintPrivate",&DAT_14cb64468,FUN_146502910);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb64468;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a550d0 FUN_145a550d0 body=221 status=ok
// SIG undefined FUN_145a550d0(void)

longlong FUN_145a550d0(void)

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
  if (DAT_14cb64710 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14870481b;
    local_40 = FUN_146503f96;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillComponentFunctions_AOE_Gps",&DAT_14cb64710,
                  FUN_146503f74);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb64710;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a551b4 FUN_145a551b4 body=221 status=ok
// SIG undefined FUN_145a551b4(void)

longlong FUN_145a551b4(void)

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
  if (DAT_14cb64b80 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14870c7ad;
    local_40 = FUN_146505f8e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillComponentFunctions_Library",&DAT_14cb64b80,
                  FUN_146505f6c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb64b80;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a55298 FUN_145a55298 body=221 status=ok
// SIG undefined FUN_145a55298(void)

longlong FUN_145a55298(void)

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
  if (DAT_14cb64c28 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14870ca0d;
    local_40 = FUN_14650636a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillComponentFunctions_Material",&DAT_14cb64c28,
                  FUN_146506348);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb64c28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a5537c FUN_145a5537c body=221 status=ok
// SIG undefined FUN_145a5537c(void)

longlong FUN_145a5537c(void)

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
  if (DAT_14cb64cd8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14870d65c;
    local_40 = FUN_14650671a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillComponentFunctions_ResourcePool",&DAT_14cb64cd8,
                  FUN_1465066f8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb64cd8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a55460 FUN_145a55460 body=221 status=ok
// SIG undefined FUN_145a55460(void)

longlong FUN_145a55460(void)

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
  if (DAT_14cb64de8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14870d678;
    local_40 = FUN_146506d94;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillComponentFunctions_TimerEx",&DAT_14cb64de8,
                  FUN_146506d72);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb64de8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a55544 FUN_145a55544 body=221 status=ok
// SIG undefined FUN_145a55544(void)

longlong FUN_145a55544(void)

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
  if (DAT_14cb67920 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14873d03f;
    local_40 = FUN_1465177ba;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxStatusEffectsStatics",&DAT_14cb67920,FUN_146517798);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb67920;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a55628 FUN_145a55628 body=221 status=ok
// SIG undefined FUN_145a55628(void)

longlong FUN_145a55628(void)

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
  if (DAT_14cb679b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14873d043;
    local_40 = &LAB_1465179c9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x88;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSubtitleManager",&DAT_14cb679b8,&DAT_14873d042);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb679b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a5570c FUN_145a5570c body=221 status=ok
// SIG undefined FUN_145a5570c(void)

longlong FUN_145a5570c(void)

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
  if (DAT_14cb6ada8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14876c1a3;
    local_40 = FUN_146529881;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/GbxGame",L"LightBeamScript",&DAT_14cb6ada8,&DAT_14876c1a2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6ada8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


