// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14654f51a FUN_14654f51a body=158 status=ok
// SIG undefined FUN_14654f51a(void)

bool FUN_14654f51a(longlong param_1,undefined8 param_2)

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



// FUNCTION 14654f5ba FUN_14654f5ba body=24 status=ok
// SIG undefined FUN_14654f5ba(void)

bool FUN_14654f5ba(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14654f5d2 FUN_14654f5d2 body=158 status=ok
// SIG undefined FUN_14654f5d2(void)

bool FUN_14654f5d2(longlong param_1,undefined8 param_2)

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



// FUNCTION 14654f672 FUN_14654f672 body=29 status=ok
// SIG undefined FUN_14654f672(void)

bool FUN_14654f672(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14654f690 FUN_14654f690 body=26 status=ok
// SIG undefined FUN_14654f690(void)

bool FUN_14654f690(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14654f6aa FUN_14654f6aa body=24 status=ok
// SIG undefined FUN_14654f6aa(void)

bool FUN_14654f6aa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14654f6c2 FUN_14654f6c2 body=29 status=ok
// SIG undefined FUN_14654f6c2(void)

bool FUN_14654f6c2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14654f6e0 FUN_14654f6e0 body=24 status=ok
// SIG undefined FUN_14654f6e0(void)

bool FUN_14654f6e0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14654f6f8 FUN_14654f6f8 body=24 status=ok
// SIG undefined FUN_14654f6f8(void)

bool FUN_14654f6f8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14654f710 FUN_14654f710 body=120 status=ok
// SIG undefined FUN_14654f710(void)

undefined8 * FUN_14654f710(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb7df10) {
    FUN_144b3d300(&DAT_14cb7df10);
    if (DAT_14cb7df10 == -1) {
      FUN_1446f470e(&DAT_14cb7df08,L"title",1);
      _Init_thread_footer(&DAT_14cb7df10);
    }
  }
  *param_2 = DAT_14cb7df08;
  return param_2;
}



// FUNCTION 14654f788 FUN_14654f788 body=120 status=ok
// SIG undefined FUN_14654f788(void)

undefined8 * FUN_14654f788(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb7df20) {
    FUN_144b3d300(&DAT_14cb7df20);
    if (DAT_14cb7df20 == -1) {
      FUN_1446f470e(&DAT_14cb7df18,L"main",1);
      _Init_thread_footer(&DAT_14cb7df20);
    }
  }
  *param_2 = DAT_14cb7df18;
  return param_2;
}



// FUNCTION 14654f800 FUN_14654f800 body=118 status=ok
// SIG undefined FUN_14654f800(void)

undefined8 * FUN_14654f800(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb7df30) {
    FUN_144b3d300(&DAT_14cb7df30);
    if (DAT_14cb7df30 == -1) {
      FUN_1446f470e(&DAT_14cb7df28,L"gameplay",1);
      _Init_thread_footer(&DAT_14cb7df30);
    }
  }
  *param_2 = DAT_14cb7df28;
  return param_2;
}



// FUNCTION 14654f876 FUN_14654f876 body=29 status=ok
// SIG undefined FUN_14654f876(void)

undefined8 FUN_14654f876(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14654f894 FUN_14654f894 body=26 status=ok
// SIG undefined FUN_14654f894(void)

bool FUN_14654f894(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14654f8ae FUN_14654f8ae body=26 status=ok
// SIG undefined FUN_14654f8ae(void)

bool FUN_14654f8ae(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14654f8c8 FUN_14654f8c8 body=29 status=ok
// SIG undefined FUN_14654f8c8(void)

undefined8 FUN_14654f8c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14654f8e6 FUN_14654f8e6 body=29 status=ok
// SIG undefined FUN_14654f8e6(void)

undefined8 FUN_14654f8e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14654f904 FUN_14654f904 body=193 status=ok
// SIG undefined FUN_14654f904(void)

void FUN_14654f904(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_144a78b9e();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      if (*(longlong *)(param_1 + 0x1c0) != 0) {
        FUN_14480f766(param_2 + 0x410);
      }
      lVar1 = *(longlong *)(param_2 + 0x3c0);
      if (lVar1 != 0) {
        lVar2 = FUN_1449f3324();
        if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) &&
           (*(longlong *)(param_1 + 0x1c8) != 0)) {
          FUN_14480f766(lVar1 + 0xce0);
        }
      }
    }
  }
  FUN_140568588(param_1,param_2,param_3,param_4);
  *(undefined1 *)(param_1 + 0x1b8) = 0;
  return;
}



// FUNCTION 14654f9c6 FUN_14654f9c6 body=38 status=ok
// SIG undefined FUN_14654f9c6(void)

void FUN_14654f9c6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14485c47a(param_1 + 0x94);
  *(undefined8 *)(param_1 + 0x9c) = param_3;
  return;
}



// FUNCTION 14654f9ec FUN_14654f9ec body=144 status=ok
// SIG undefined FUN_14654f9ec(void)

void FUN_14654f9ec(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  
  cVar4 = FUN_144729dda(param_1 + 0x94);
  if ((cVar4 != '\0') && (*(char *)(param_1 + 0x90) == '\x01')) {
    lVar5 = FUN_14479d2ce(param_1 + 0x94);
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      FUN_14480f766(lVar5 + 0x200);
    }
  }
  FUN_140b3e76a(param_1 + 0xb0);
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
                    /* WARNING: Could not recover jumptable at 0x00014654fa78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14654fa7c FUN_14654fa7c body=260 status=ok
// SIG undefined FUN_14654fa7c(void)

void FUN_14654fa7c(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (cVar1 != '\0') {
    local_40 = 0;
    FUN_14485c47a(&local_40,param_3);
    plVar3 = param_1 + 0xd;
    plVar2 = (longlong *)param_1[0x1d];
    if ((longlong *)param_1[0x1d] == (longlong *)0x0) {
      plVar2 = plVar3;
    }
    iVar4 = 0;
    uStack_38 = param_4;
    if ((longlong)(int)param_1[0x1e] != 0) {
      lVar5 = (longlong)(int)param_1[0x1e] << 4;
      do {
        if (plVar2[1] == uStack_38) {
          cVar1 = FUN_14038330a(plVar2,&local_40);
          if (cVar1 != '\0') goto LAB_14654fb15;
        }
        plVar2 = plVar2 + 2;
        lVar5 = lVar5 + -0x10;
      } while (lVar5 != 0);
      iVar4 = (int)param_1[0x1e];
    }
    *(uint *)(param_1 + 0x1e) = iVar4 + 1U;
    if (*(uint *)((longlong)param_1 + 0xf4) < iVar4 + 1U) {
      FUN_14887174c(plVar3,iVar4);
    }
    if ((longlong *)param_1[0x1d] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x1d];
    }
    plVar3 = plVar3 + (longlong)iVar4 * 2;
    *(undefined4 *)plVar3 = (undefined4)local_40;
    *(undefined4 *)((longlong)plVar3 + 4) = local_40._4_4_;
    *(undefined4 *)(plVar3 + 1) = (undefined4)uStack_38;
    *(undefined4 *)((longlong)plVar3 + 0xc) = uStack_38._4_4_;
  }
LAB_14654fb15:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14654fb82 FUN_14654fb82 body=36 status=ok
// SIG undefined FUN_14654fb82(void)

void FUN_14654fb82(longlong param_1)

{
  FUN_14024bdb0();
  FUN_144a84024(param_1 + 0x78,*(undefined4 *)(param_1 + 0x58),0);
  return;
}



// FUNCTION 14654fba6 FUN_14654fba6 body=292 status=ok
// SIG undefined FUN_14654fba6(void)

longlong FUN_14654fba6(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    plVar9 = *(longlong **)(param_1 + 0x28);
    plVar1 = plVar9 + *(int *)(param_1 + 0x30);
    do {
      plVar3 = (longlong *)*plVar9;
      if (plVar3 != (longlong *)0x0) {
        lVar6 = (**(code **)(*plVar3 + 8))(plVar3);
        lVar7 = FUN_140076f80();
        if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
           (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
            lVar7 + 0x30)) {
          cVar5 = FUN_144729dda(plVar3 + 9);
          if (((((cVar5 != '\0') && (plVar3[10] != 0)) &&
               ((lVar6 = *(longlong *)(plVar3[10] + 0xe8), lVar6 != 0 &&
                ((lVar6 = *(longlong *)(lVar6 + 0x10), lVar6 != 0 &&
                 (lVar7 = FUN_144a7a726(), lVar7 != 0)))))) &&
              (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
             ((((*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
                 == lVar7 + 0x30 && (cVar5 = FUN_144729dda(plVar3 + 9), cVar5 != '\0')) &&
               (lVar6 = plVar3[10], lVar6 != 0)) &&
              (iVar2 = *(int *)(lVar6 + 0x40), (longlong)iVar2 != 0)))) {
            lVar6 = *(longlong *)(lVar6 + 0x38);
            lVar7 = 0;
            do {
              lVar4 = *(longlong *)(lVar6 + lVar7);
              if (lVar4 != 0) {
                lVar8 = FUN_1406d0862();
                if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) {
                  return lVar4;
                }
              }
              lVar7 = lVar7 + 8;
            } while ((longlong)iVar2 * 8 != lVar7);
          }
        }
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar1);
  }
  return 0;
}



// FUNCTION 14654fcca FUN_14654fcca body=88 status=ok
// SIG undefined FUN_14654fcca(void)

void FUN_14654fcca(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  plVar3 = *(longlong **)(param_1 + 0x3b8);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x3b8) = 0;
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
  FUN_140872622(param_1);
  return;
}



// FUNCTION 14654fd22 FUN_14654fd22 body=563 status=ok
// SIG undefined FUN_14654fd22(void)

void FUN_14654fd22(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_58 [40];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((longlong)*(int *)(param_1 + 0x168) != 0) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x160) + lVar4);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x8a0) == *param_2)) {
        if ((*param_3 == 0) || (plVar2 = *(longlong **)(lVar1 + 0x298), plVar2 == (longlong *)0x0))
        goto LAB_14654fd9e;
        lVar4 = FUN_145996648();
        if ((((*(int *)(plVar2[2] + 0x38) < *(int *)(lVar4 + 0x38)) ||
             (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
              != lVar4 + 0x30)) || (lVar4 = (**(code **)(*plVar2 + 0x2e8))(plVar2), lVar4 == 0)) ||
           ((longlong)(int)plVar2[0x2a] < 1)) goto LAB_14654fd9e;
        lVar3 = plVar2[0x29];
        lVar5 = 0;
        goto LAB_14654febe;
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)*(int *)(param_1 + 0x168) * 8 != lVar4);
  }
  goto LAB_14654fd47;
  while (lVar5 = lVar5 + 0x10, (longlong)(int)plVar2[0x2a] * 0x10 != lVar5) {
LAB_14654febe:
    if (*(longlong *)(lVar3 + lVar5) == *param_3) {
      if (lVar5 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(lVar3 + -4 + lVar5);
      }
      FUN_144a808d5(local_30,*(int *)(lVar3 + 0xc + lVar5) - iVar6,*(undefined8 *)(lVar4 + 0x118),
                    *(undefined8 *)(lVar4 + 0x120));
      goto LAB_14654fd47;
    }
  }
LAB_14654fd9e:
  FUN_140bfdd42(lVar1,local_30);
LAB_14654fd47:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14654ff5c FUN_14654ff5c body=108 status=ok
// SIG undefined FUN_14654ff5c(void)

undefined8 FUN_14654ff5c(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((param_3 != '\x04') && (lVar1 = *(longlong *)(param_1 + 0x48), *(int *)(lVar1 + 0x98) == 2)) {
    uVar2 = FUN_140343d7a(param_1);
    FUN_1414180c0(uVar2,lVar1 + 0x80,param_1 + 0xd8,0);
  }
  if (*(int *)(*(longlong *)(param_1 + 0x48) + 0x98) == 1) {
    FUN_14072d42a(param_1 + 0xd8,0);
  }
  return 1;
}



// FUNCTION 14654ffc8 FUN_14654ffc8 body=28 status=ok
// SIG undefined FUN_14654ffc8(void)

void FUN_14654ffc8(undefined8 param_1)

{
  FUN_140356ae0();
  FUN_145c20c26(param_1,0);
  return;
}



// FUNCTION 14654ffe4 FUN_14654ffe4 body=18 status=ok
// SIG undefined FUN_14654ffe4(void)

char FUN_14654ffe4(void)

{
  byte bVar1;
  
  bVar1 = FUN_1415552fe();
  return (bVar1 ^ 1) * '\x02';
}



// FUNCTION 14654fff6 FUN_14654fff6 body=81 status=ok
// SIG undefined FUN_14654fff6(void)

void FUN_14654fff6(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x110) != 0) {
    cVar1 = FUN_144729dda(param_1 + 0x108);
    if ((cVar1 != '\0') && (*(longlong **)(param_1 + 0x110) != (longlong *)0x0)) {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x50))();
      FUN_140c4a7e8(uVar2,*(undefined1 *)(param_1 + 0xd8),1);
      return;
    }
  }
  return;
}



// FUNCTION 146550048 FUN_146550048 body=55 status=ok
// SIG undefined FUN_146550048(void)

undefined4 FUN_146550048(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_140c5097a();
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FUN_145ccdaba(*(longlong *)(param_1 + 0x120),
                  *(undefined1 *)(*(longlong *)(param_1 + 0x48) + 0x1e9),0);
  }
  return uVar1;
}



// FUNCTION 146550080 FUN_146550080 body=40 status=ok
// SIG undefined FUN_146550080(void)

undefined8 FUN_146550080(undefined8 param_1,int param_2)

{
  FUN_1410a3b96();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465500ae FUN_1465500ae body=62 status=ok
// SIG undefined FUN_1465500ae(void)

undefined8 * FUN_1465500ae(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_144a2da94(param_1 + 7);
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465500ec FUN_1465500ec body=40 status=ok
// SIG undefined FUN_1465500ec(void)

undefined8 FUN_1465500ec(undefined8 param_1,int param_2)

{
  FUN_140d29fd0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146550114 FUN_146550114 body=66 status=ok
// SIG undefined FUN_146550114(void)

undefined8 * FUN_146550114(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4057f0;
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



// FUNCTION 146550156 FUN_146550156 body=423 status=ok
// SIG undefined FUN_146550156(void)

longlong * FUN_146550156(longlong *param_1,longlong param_2)

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
LAB_14655022d:
    *puVar3 = &PTR_LAB_14b3e7b60;
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
    *puVar3 = &PTR_FUN_14b405d70;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = &LAB_1461155cc;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_14655022d;
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
    *puVar3 = &PTR_LAB_14b3e7b60;
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
    *puVar3 = &PTR_FUN_14b405d70;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = &LAB_1461155cc;
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



// FUNCTION 1465502fe FUN_1465502fe body=118 status=ok
// SIG undefined FUN_1465502fe(void)

void FUN_1465502fe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9b40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b405e50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 146550374 FUN_146550374 body=29 status=ok
// SIG undefined FUN_146550374(void)

undefined8 FUN_146550374(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146550392 FUN_146550392 body=48 status=ok
// SIG undefined FUN_146550392(void)

void FUN_146550392(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b407058);
  FUN_1406f8a8a(param_1,param_2);
  return;
}



// FUNCTION 1465503c2 FUN_1465503c2 body=294 status=ok
// SIG undefined FUN_1465503c2(void)

void FUN_1465503c2(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined8 *)(param_1 + 0x120) = DAT_14cb7e388;
  uVar5 = CONCAT44(DAT_14cb7e380._4_4_,(undefined4)DAT_14cb7e380);
  *(ulonglong *)(param_1 + 0x110) = CONCAT44(DAT_14cb7e378._4_4_,(undefined4)DAT_14cb7e378);
  *(undefined8 *)(param_1 + 0x118) = uVar5;
  *(undefined8 *)(param_1 + 0x138) = DAT_14cb7e388;
  uVar3 = DAT_14cb7e380._4_4_;
  uVar2 = (undefined4)DAT_14cb7e380;
  uVar1 = DAT_14cb7e378._4_4_;
  *(undefined4 *)(param_1 + 0x128) = (undefined4)DAT_14cb7e378;
  *(undefined4 *)(param_1 + 300) = uVar1;
  *(undefined4 *)(param_1 + 0x130) = uVar2;
  *(undefined4 *)(param_1 + 0x134) = uVar3;
  *(undefined8 *)(param_1 + 0x140) = 0;
  plVar4 = (longlong *)FUN_140343d7a();
  if (plVar4 != (longlong *)0x0) {
    uVar5 = FUN_1407ca880();
    lVar6 = (**(code **)(*plVar4 + 0x288))(plVar4,uVar5);
    if (lVar6 != 0) {
      uVar5 = FUN_1407ca880();
      lVar7 = FUN_144718840(lVar6,uVar5);
      if (lVar6 != lVar7) goto LAB_146550464;
    }
  }
  lVar7 = 0;
LAB_146550464:
  FUN_1407be368(&local_28,lVar7);
  *(undefined4 *)(param_1 + 0xf0) = local_28;
  *(undefined4 *)(param_1 + 0xf4) = uStack_24;
  *(undefined4 *)(param_1 + 0xf8) = uStack_20;
  *(undefined4 *)(param_1 + 0xfc) = uStack_1c;
  lVar6 = FUN_140343d7a(param_1);
  if (lVar6 != 0) {
    lVar7 = FUN_14070cc62();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        == lVar7 + 0x30)) {
      FUN_14485c47a(param_1 + 0x148,*(undefined8 *)(lVar6 + 0x858));
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1465504ea FUN_1465504ea body=173 status=ok
// SIG undefined FUN_1465504ea(void)

void FUN_1465504ea(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  FUN_140cad146();
  *(undefined1 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  plVar3 = *(longlong **)(param_1 + 0x160);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x160) = 0;
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
  *(undefined4 *)(param_1 + 0xd8) = 0;
  FUN_1400bc96c(*param_2 + 0x488,&DAT_14cb7e3b8);
  lVar4 = FUN_14479d2ce(param_1 + 0x148);
  if (lVar4 != 0) {
    FUN_1400bc96c(lVar4 + 0x11f0,&DAT_14cb7e3b8);
  }
  FUN_1414758ce(param_1);
  return;
}



// FUNCTION 146550598 FUN_146550598 body=126 status=ok
// SIG undefined FUN_146550598(void)

void FUN_146550598(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (*(int *)(param_1 + 0xd8) == 1) {
    FUN_145a4355c(param_1);
    if (*(char *)(*(longlong *)(param_1 + 0x48) + 0x179) == '\x01') {
      FUN_145a43666(param_1);
    }
  }
  FUN_1400bc8c2(*param_2 + 0x488,&DAT_14cb7e3b8);
  lVar1 = FUN_14479d2ce(param_1 + 0x148);
  if (lVar1 != 0) {
    FUN_1400bc8c2(lVar1 + 0x11f0,&DAT_14cb7e3b8);
    return;
  }
  return;
}



// FUNCTION 146550616 FUN_146550616 body=1474 status=ok
// SIG undefined FUN_146550616(void)

void FUN_146550616(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 ***pppuVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined1 auStack_158 [32];
  longlong local_138;
  undefined8 **local_130;
  undefined1 *local_128;
  int local_11c;
  uint local_118;
  undefined4 local_114;
  undefined1 local_110;
  undefined4 local_10f;
  undefined1 local_10b;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  uint local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined2 local_c8;
  undefined1 local_c0;
  char local_b8;
  undefined1 local_b0;
  undefined1 local_af;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 **local_98;
  undefined1 local_90;
  undefined8 local_8c;
  undefined1 local_84;
  undefined8 local_80;
  byte local_78;
  undefined1 local_74 [4];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10);
  }
  local_118 = local_118 & 0xffffff00;
  local_f0 = 0;
  FUN_1456bb102(&local_118,uVar4);
  local_138 = param_1 + 0x1d0;
  FUN_1447c3578(param_1 + 0x1d0,&local_98,&local_118);
  uVar11 = FUN_144a7ecd0(&local_98);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar8 = &local_98;
    if (0x18 < (ushort)local_80) {
      pppuVar8 = (undefined8 ***)local_98;
    }
    (*pcVar1)(pppuVar8);
  }
  if (0x18 < (ushort)local_80) {
    FUN_1400020a8(local_98);
  }
  FUN_144a5ac3a(&local_118);
  lVar7 = param_1 + 0x208;
  local_118 = local_118 & 0xffffff00;
  local_f0 = 0;
  FUN_1456bb102(&local_118,uVar4);
  FUN_1447c3578(lVar7,&local_98,&local_118);
  uVar12 = FUN_144a7ecd0(&local_98);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar8 = &local_98;
    if (0x18 < (ushort)local_80) {
      pppuVar8 = (undefined8 ***)local_98;
    }
    (*pcVar1)(pppuVar8);
  }
  if (0x18 < (ushort)local_80) {
    FUN_1400020a8(local_98);
  }
  FUN_144a5ac3a(&local_118);
  uVar4 = DAT_14cb7e488;
  bVar9 = (&DAT_14c9a8514)[(uint)*(byte *)(param_1 + 0x1f8) * 0x120];
  bVar10 = (&DAT_14c9a8514)[(uint)*(byte *)(param_1 + 0x230) * 0x120];
  local_110 = 0;
  local_108 = DAT_14c8464e0;
  uStack_100 = DAT_14c8464e8;
  local_f8 = DAT_14c8464f0;
  local_f0 = local_f0 & 0xff000000;
  local_e0 = (undefined4)DAT_14c8464f8;
  uStack_dc = DAT_14c8464f8._4_4_;
  uStack_d8 = (undefined4)DAT_14c846500;
  uStack_d4 = DAT_14c846500._4_4_;
  local_d0 = DAT_14c846508;
  local_e8 = 0;
  local_c8 = 0x18;
  local_c0 = 5;
  local_b8 = ((DAT_14c9a8ab4 & 0x20) == 0) * '\x05';
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_10b = 1;
  local_10f = 0x1010101;
  local_af = 0;
  local_118 = uVar11;
  local_114 = uVar12;
  uVar2 = FUN_141115664();
  lVar3 = FUN_140c48046(param_1 + 0x80,uVar2,uVar4,0);
  if (lVar3 != 0) {
    bVar9 = bVar9 >> 5 & 1;
    bVar10 = bVar10 >> 5 & 1;
    *(undefined4 *)(lVar3 + 0xd0) = 0x3dcccccd;
    uVar4 = FUN_140a48832();
    lVar5 = FUN_140c483dc(lVar3,uVar4,&DAT_14cb7e498,0);
    if (lVar5 != 0) {
      local_98 = (undefined8 **)0x0;
      uVar4 = FUN_140c48226();
      lVar6 = FUN_140c47e50(lVar5,uVar4,&local_98);
      if (lVar6 != 0) {
        *(undefined1 *)(lVar6 + 0x7b) = 0;
        *(undefined4 *)(lVar6 + 0x19c) = 2;
        FUN_144983130(lVar6 + 0x1e8,param_1 + 0x198);
        FUN_144955a78(lVar6 + 0x98,&local_118);
        *(byte *)(lVar6 + 0x158) = bVar9;
        FUN_144983130(lVar6 + 0x120,local_138);
        *(byte *)(lVar6 + 0x198) = bVar10;
        FUN_144983130(lVar6 + 0x160,lVar7);
      }
      local_98 = (undefined8 ***)0x0;
      uVar4 = FUN_140c48260();
      lVar5 = FUN_140c47e50(lVar5,uVar4,&local_98);
      if (lVar5 != 0) {
        lVar6 = *(longlong *)(param_1 + 0x240);
        if (DAT_14c950c29 == '\x01') {
          if (lVar6 == 0) {
            lVar6 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar6 = *(longlong *)(param_1 + 0x240);
          }
        }
        *(longlong *)(lVar5 + 0x80) = lVar6;
        *(undefined8 *)(lVar5 + 0x88) = *(undefined8 *)(param_1 + 0x248);
        *(undefined4 *)(lVar5 + 0x90) = *(undefined4 *)(param_1 + 0x250);
        FUN_144983130(lVar5 + 0x98,param_1 + 600);
        FUN_144983130(lVar5 + 0xd0,param_1 + 0x290);
        *(undefined4 *)(lVar5 + 0x108) = *(undefined4 *)(param_1 + 0x2c8);
      }
    }
    uVar4 = FUN_140a48832();
    lVar5 = FUN_140c483dc(lVar3,uVar4,&DAT_14cb7e4a8,&local_11c);
    if (lVar5 != 0) {
      *(undefined1 *)(*(longlong *)(lVar3 + 0xd8) + (longlong)local_11c * 4) = 0;
      *(undefined1 *)(lVar5 + 0x1c) = *(undefined1 *)(param_1 + 0x2cc);
      local_98 = (undefined8 **)0x0;
      uVar4 = FUN_140c48226();
      lVar3 = FUN_140c47e50(lVar5,uVar4,&local_98);
      if (lVar3 != 0) {
        FUN_144983130(lVar3 + 0x1e8,param_1 + 0x198);
        FUN_144955a78(lVar3 + 0x98,&local_118);
        *(byte *)(lVar3 + 0x158) = bVar9;
        FUN_144983130(lVar3 + 0x120,local_138);
        *(byte *)(lVar3 + 0x198) = bVar10;
        FUN_144983130(lVar3 + 0x160,lVar7);
      }
      local_98 = (undefined8 ***)0x0;
      uVar4 = FUN_140c4800c();
      lVar7 = FUN_140c47e50(lVar5,uVar4,&local_98);
      if (lVar7 != 0) {
        FUN_144983130(lVar7 + 0x80,param_1 + 0x198);
        local_128 = local_74;
        local_98 = DAT_14cb72618;
        local_90 = *(char *)(param_1 + 0x2cd) == '\x01';
        local_8c = DAT_14cb72620;
        local_84 = *(undefined1 *)(param_1 + 0x2cf);
        local_80 = DAT_14cb72628;
        local_78 = *(byte *)(param_1 + 0x2ce);
        local_130 = &local_98;
        FUN_140c482d4(lVar7);
      }
    }
  }
  FUN_144a2da94(&local_e8);
  if ((local_70 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146550be0 FUN_146550be0 body=270 status=ok
// SIG undefined FUN_146550be0(void)

void FUN_146550be0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68 [24];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = FUN_144a126be();
  lVar3 = FUN_1411db1ae(uVar2);
  if ((lVar3 != 0) && ((longlong)*(int *)(lVar3 + 0x148) != 0)) {
    puVar5 = *(undefined8 **)(lVar3 + 0x140);
    puVar1 = (undefined8 *)((longlong)puVar5 + (longlong)*(int *)(lVar3 + 0x148) * 0xc);
    do {
      local_78 = *puVar5;
      local_70 = *(undefined4 *)(puVar5 + 1);
      FUN_1448075d0(local_68,&local_78);
      lVar3 = FUN_14060eaf6(local_68);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      if (lVar3 != 0) {
        FUN_141889d2a(param_1,lVar3 + 0x758);
        if ((longlong)*(int *)(lVar3 + 0x778) != 0) {
          lVar4 = *(longlong *)(lVar3 + 0x770);
          lVar3 = (longlong)*(int *)(lVar3 + 0x778) * 0x18;
          do {
            FUN_141889d2a(param_1,lVar4);
            lVar4 = lVar4 + 0x18;
            lVar3 = lVar3 + -0x18;
          } while (lVar3 != 0);
        }
      }
      puVar5 = (undefined8 *)((longlong)puVar5 + 0xc);
    } while (puVar5 != puVar1);
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146550d00 FUN_146550d00 body=29 status=ok
// SIG undefined FUN_146550d00(void)

byte FUN_146550d00(undefined8 param_1,uint param_2)

{
  byte bVar1;
  
  bVar1 = FUN_14110c842();
  return bVar1 | (param_2 & 0xfffffffe) == 4;
}



// FUNCTION 146550d1e FUN_146550d1e body=147 status=ok
// SIG undefined FUN_146550d1e(void)

void FUN_146550d1e(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140c8307c();
  if (param_2 != 0) {
    lVar1 = FUN_140d53794();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      if (*(int *)(param_2 + 0x18c) == 3) {
        uVar2 = 1;
      }
      else {
        uVar2 = *(undefined1 *)(param_2 + 400);
      }
      local_38 = param_2;
      FUN_1457ea838(param_1,local_28,param_2 + 0x148,uVar2);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146550db2 FUN_146550db2 body=101 status=ok
// SIG undefined FUN_146550db2(void)

undefined8 FUN_146550db2(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x1f0) != 0)) {
    lVar3 = FUN_144a79464();
    plVar1 = *(longlong **)(param_1 + 0x1f0);
    if (((plVar1 != (longlong *)0x0) &&
        (((lVar3 != 0 && (lVar2 = plVar1[2], lVar2 != 0)) &&
         (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x000146550e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*plVar1 + 0x480))();
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 146550e1e FUN_146550e1e body=66 status=ok
// SIG undefined FUN_146550e1e(void)

undefined8 * FUN_146550e1e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b406c80;
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



// FUNCTION 146550e60 FUN_146550e60 body=26 status=ok
// SIG undefined FUN_146550e60(void)

bool FUN_146550e60(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146550e7a FUN_146550e7a body=24 status=ok
// SIG undefined FUN_146550e7a(void)

bool FUN_146550e7a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146550e92 FUN_146550e92 body=147 status=ok
// SIG undefined FUN_146550e92(void)

void FUN_146550e92(longlong param_1,int param_2)

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



// FUNCTION 146550f26 FUN_146550f26 body=140 status=ok
// SIG undefined FUN_146550f26(void)

void FUN_146550f26(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1412aab56();
  FUN_1446f470e(&local_38,L"GbxDialogProvider",1);
  uVar1 = FUN_140b4ce5a();
  FUN_140b4ce5a();
  uVar1 = FUN_140f1fabf(uVar1,local_38);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146550fb4 FUN_146550fb4 body=86 status=ok
// SIG undefined FUN_146550fb4(void)

void FUN_146550fb4(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x48) != param_2) {
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 0x48) = param_2;
    FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x30),1);
    FUN_140b3e36e(param_1);
    return;
  }
  return;
}



// FUNCTION 14655100a FUN_14655100a body=206 status=ok
// SIG undefined FUN_14655100a(void)

void FUN_14655100a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  wchar_t *local_68;
  undefined1 *puStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  switchD_143c3d4dc::caseD_42();
  local_38 = 0;
  local_48 = 0;
  local_40 = 1;
  FUN_1446f470e(&local_68,L"GbxDialogProvider",1);
  uVar1 = FUN_140317d24();
  FUN_140317d24();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = (wchar_t *)0x0;
  puStack_60 = (undefined1 *)0x0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  local_68 = L"AttachedAudioImplementer";
  puStack_60 = &DAT_100000001;
  FUN_140c2c993(&local_68,param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1465510da FUN_1465510da body=206 status=ok
// SIG undefined FUN_1465510da(void)

undefined8 * FUN_1465510da(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong local_58 [2];
  longlong local_48 [2];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400021e4(param_1 + 8,local_48);
  FUN_1400021e4(param_1,local_68);
  FUN_144a882a8(local_58,local_68,&DAT_149e0635c);
  FUN_1401c7f3e(&local_38,local_58,local_48);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  *param_2 = local_38;
  *(undefined4 *)(param_2 + 1) = local_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = local_2c;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1465511aa FUN_1465511aa body=664 status=ok
// SIG undefined FUN_1465511aa(void)

void FUN_1465511aa(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  wchar_t *local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  switchD_143c3d4dc::caseD_42();
  local_48 = 0;
  local_58 = 0;
  local_50 = 1;
  local_78 = L"NameTagHandle";
  uStack_70 = 0x100000000;
  FUN_140c2c993(&local_78,param_2);
  FUN_1446f470e(&local_78,L"bIsRegisteredOnServer",1);
  uVar1 = FUN_140d53794();
  FUN_140d53794();
  uVar1 = FUN_140f1fabf(uVar1,local_78);
  local_68 = 0;
  local_78 = (wchar_t *)0x0;
  uStack_70 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_78);
  FUN_1446f470e(&local_78,L"SpeakerType",1);
  uVar1 = FUN_140d53794();
  FUN_140d53794();
  uVar1 = FUN_140f1fabf(uVar1,local_78);
  local_68 = 0;
  local_78 = (wchar_t *)0x0;
  uStack_70 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_78);
  FUN_1446f470e(&local_78,L"BaseVoicePitchOffset",1);
  uVar1 = FUN_140d53794();
  FUN_140d53794();
  uVar1 = FUN_140f1fabf(uVar1,local_78);
  local_68 = 0;
  local_78 = (wchar_t *)0x0;
  uStack_70 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_78);
  FUN_1446f470e(&local_78,L"NametagVoicePitchOffset",1);
  uVar1 = FUN_140d53794();
  FUN_140d53794();
  uVar1 = FUN_140f1fabf(uVar1,local_78);
  local_68 = 0;
  local_78 = (wchar_t *)0x0;
  uStack_70 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_78);
  local_68 = 0;
  uStack_70 = uStack_70 & 0xffffffffffffff00;
  local_78 = (wchar_t *)0x1;
  FUN_1446f470e(&local_80,L"InitialDialogInProgress",1);
  uVar1 = FUN_140d53794();
  FUN_140d53794();
  uVar1 = FUN_140f1fabf(uVar1,local_80);
  FUN_140f1fa23(uVar1,param_2,&local_78);
  FUN_1446f470e(&local_78,L"bSpeakDirectlyToPlayer",1);
  uVar1 = FUN_140d53794();
  FUN_140d53794();
  uVar1 = FUN_140f1fabf(uVar1,local_78);
  local_68 = 0;
  local_78 = (wchar_t *)0x0;
  uStack_70 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_78);
  FUN_1446f470e(&local_78,L"DirectSpeakerTarget",1);
  uVar1 = FUN_140d53794();
  FUN_140d53794();
  uVar1 = FUN_140f1fabf(uVar1,local_78);
  local_68 = 0;
  local_78 = (wchar_t *)0x0;
  uStack_70 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_78);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146551444 FUN_146551444 body=201 status=ok
// SIG undefined FUN_146551444(void)

void FUN_146551444(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 0x398) != 0) {
    FUN_140521208();
    *(undefined8 *)(param_1 + 0x398) = 0;
    plVar4 = *(longlong **)(param_1 + 0x3a0);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x3a0) = 0;
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
  iVar3 = *(int *)(param_1 + 0x3b0);
  if ((longlong)iVar3 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x3a8);
    lVar6 = 0;
    do {
      if (*(longlong *)(lVar5 + lVar6) != 0) {
        FUN_140bcbd0c();
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar3 * 8 != lVar6);
  }
  *(undefined4 *)(param_1 + 0x3b0) = 0;
  if (*(int *)(param_1 + 0x3b4) < 0) {
    FUN_148884d72(param_1 + 0x3a8);
  }
  FUN_1403d8a98(param_1,param_2);
  return;
}



// FUNCTION 14655150e FUN_14655150e body=74 status=ok
// SIG undefined FUN_14655150e(void)

undefined8 * FUN_14655150e(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    uVar1 = FUN_1447f7908();
    lVar2 = FUN_144718840(lVar2,uVar1);
    param_1[1] = lVar2;
    if (lVar2 != 0) {
      FUN_14485c47a(param_1,*param_2);
    }
  }
  return param_1;
}



// FUNCTION 146551558 FUN_146551558 body=54 status=ok
// SIG undefined FUN_146551558(void)

void FUN_146551558(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_140115352();
  }
  FUN_1407ae347(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14655158e FUN_14655158e body=231 status=ok
// SIG undefined FUN_14655158e(void)

void FUN_14655158e(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,3,0x10);
  local_20 = 3;
  *local_28 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_28[2] = lVar3;
  *local_28 = &PTR_FUN_14b40ac60;
  local_28[3] = &DAT_14cb7f990;
  local_28[4] = FUN_1459cff60;
  uVar2 = FUN_144a52528();
  local_38 = *param_1;
  uStack_34 = param_1[1];
  uStack_30 = param_1[2];
  uStack_2c = param_1[3];
  FUN_140da023c(uVar2,&local_38,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146551676 FUN_146551676 body=51 status=ok
// SIG undefined FUN_146551676(void)

void FUN_146551676(longlong param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_14490d72a();
    if (iVar1 != 3) {
      FUN_140877338(param_1);
      FUN_1412af310(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1465516aa FUN_1465516aa body=214 status=ok
// SIG undefined FUN_1465516aa(void)

undefined8 FUN_1465516aa(undefined8 param_1)

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
  FUN_1446efa72(&local_28,0,2,0x10);
  local_20 = 2;
  *local_28 = &PTR_LAB_14a90a240;
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
  *local_28 = &PTR_FUN_14b40acd0;
  local_28[3] = FUN_148880a54;
  FUN_1406baa38(&DAT_14cb10920,param_1,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146551782 FUN_146551782 body=669 status=ok
// SIG undefined FUN_146551782(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_146551782(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [16];
  undefined **local_b8;
  ulonglong *local_b0;
  longlong local_a8;
  undefined4 local_a0;
  longlong local_98;
  int local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78 [2];
  undefined *local_68;
  longlong *local_60;
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1446f470e(local_78 + 1,L"Disabled",1);
  FUN_1446f470e(local_78,L"FullResolution",1);
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    uVar1 = (uint)((ulonglong)DAT_14cb7fa60 >> 0x10);
    uVar4 = (uint)DAT_14cb7fa60 & 0xffff;
    plVar3 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_2[8];
    }
    iVar5 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)param_2[9] - 1U &
                    (int)((ulonglong)DAT_14cb7fa60 >> 0x20) + ((uint)DAT_14cb7fa60 << 0x10 | uVar4)
                    + (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar3 = (longlong *)(*param_2 + (longlong)iVar5 * 0x18);
        if (*plVar3 == DAT_14cb7fa60) {
          if (plVar3 != (longlong *)0x0) {
            local_80 = plVar3[1];
            goto LAB_14655186b;
          }
          break;
        }
        iVar5 = (int)plVar3[2];
      } while (iVar5 != -1);
    }
  }
  local_80 = 0;
LAB_14655186b:
  if ((local_80 == 0) || (local_80 == local_78[1])) {
    local_68 = &DAT_14cb7fa70;
    local_60 = local_78;
    FUN_140906722(param_2,&local_98,&local_68,0);
  }
  else {
    FUN_14021bc82(param_2,DAT_14cb7fa78);
  }
  local_88 = local_78[1];
  if ((*(char *)(param_1 + 0x164) == '\x01') && (iVar5 = *(int *)(param_1 + 0x168), 0 < iVar5)) {
    iVar2 = FUN_14586b5e2(param_1);
    if (iVar2 < iVar5) {
      iVar5 = iVar2;
    }
    FUN_1400021e4(&local_80,local_c8);
    FUN_14146ec20(&local_68,local_c8);
    FUN_142787b30(local_48,iVar5);
    local_b0 = &local_28;
    local_b8 = &local_68;
    FUN_1407adb6e(&local_a8);
    FUN_140230a2e(&local_98,L"{0}x{1}",&local_a8);
    iVar5 = local_90 + -1;
    if (local_90 == 0) {
      iVar5 = 0;
    }
    FUN_1446f82e2(&local_88,iVar5,local_98,1);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    FUN_1407adb3e(local_a8,local_a0);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    lVar6 = 0x40;
    do {
      if (*(longlong *)((longlong)local_78 + lVar6) != 0) {
        FUN_1400020a8();
      }
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  local_68 = &DAT_14cb7fa68;
  local_60 = &local_88;
  FUN_140906722(param_2,&local_98,&local_68,0);
  if ((local_28 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146551a20 FUN_146551a20 body=348 status=ok
// SIG undefined FUN_146551a20(void)

/* WARNING: Removing unreachable block (ram,0x000146551b7b) */

void FUN_146551a20(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  undefined *local_28;
  longlong *local_20;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446f470e(&local_30,&DAT_149e3aba4,1);
  FUN_1446f470e(&local_38,L"Medium",1);
  FUN_1446f470e(&local_40,&DAT_149e3caec,1);
  local_48 = 0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)DAT_14cb7fa88 >> 0x10);
    uVar4 = (uint)DAT_14cb7fa88 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)DAT_14cb7fa88 >> 0x20) + ((uint)DAT_14cb7fa88 << 0x10 | uVar4)
                    + (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar3 = (longlong *)(*param_1 + (longlong)iVar5 * 0x18);
        if (*plVar3 == DAT_14cb7fa88) {
          if (((plVar3 != (longlong *)0x0) && (lVar1 = plVar3[1], lVar1 != 0)) &&
             ((lVar1 == local_30 || ((lVar1 == local_38 || (lVar1 == local_40)))))) {
            local_28 = &DAT_14cb7fa80;
            local_20 = &local_48;
            local_48 = lVar1;
            FUN_140906722(param_1,local_14,&local_28,0);
          }
          break;
        }
        iVar5 = (int)plVar3[2];
      } while (iVar5 != -1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146551b7e FUN_146551b7e body=239 status=ok
// SIG undefined FUN_146551b7e(void)

undefined8 FUN_146551b7e(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_14a8e9b60;
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
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14b40ae90;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = &LAB_145bfca74;
  FUN_145c22c52(&DAT_14cb0ca98,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146551c6e FUN_146551c6e body=96 status=ok
// SIG undefined FUN_146551c6e(void)

void FUN_146551c6e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
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



// FUNCTION 146551cce FUN_146551cce body=93 status=ok
// SIG undefined FUN_146551cce(void)

void FUN_146551cce(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b40ac60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146551d2c FUN_146551d2c body=24 status=ok
// SIG undefined FUN_146551d2c(void)

bool FUN_146551d2c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146551d44 FUN_146551d44 body=29 status=ok
// SIG undefined FUN_146551d44(void)

bool FUN_146551d44(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146551d62 FUN_146551d62 body=24 status=ok
// SIG undefined FUN_146551d62(void)

bool FUN_146551d62(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146551d7a FUN_146551d7a body=29 status=ok
// SIG undefined FUN_146551d7a(void)

bool FUN_146551d7a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146551d98 FUN_146551d98 body=26 status=ok
// SIG undefined FUN_146551d98(void)

bool FUN_146551d98(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146551db2 FUN_146551db2 body=24 status=ok
// SIG undefined FUN_146551db2(void)

bool FUN_146551db2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146551dca FUN_146551dca body=118 status=ok
// SIG undefined FUN_146551dca(void)

ulonglong FUN_146551dca(int *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_14485c47a(&local_20);
  if ((*param_1 != (int)local_20) ||
     (uVar2 = CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1), param_1[1] != local_20._4_4_)) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 == '\0') {
      uVar2 = FUN_144729dda(&local_20);
      uVar2 = uVar2 ^ 1;
    }
    else {
      uVar2 = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146551e42 FUN_146551e42 body=66 status=ok
// SIG undefined FUN_146551e42(void)

void FUN_146551e42(longlong param_1)

{
  if (*(int *)(param_1 + 0x17c) < 0) {
    *(undefined4 *)(param_1 + 0x178) = 0;
    FUN_14655254c(param_1 + 0x170,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x178) = 0;
  }
  FUN_1405682ba(param_1);
  return;
}



// FUNCTION 146551e8a FUN_146551e8a body=318 status=ok
// SIG undefined FUN_146551e8a(void)

void FUN_146551e8a(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 ***pppuVar4;
  float fVar5;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_99;
  undefined1 local_98 [40];
  undefined4 local_70;
  undefined8 **local_68;
  longlong *local_60;
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = *(longlong *)(param_1 + 0x48);
  local_99 = 2;
  local_a8 = FUN_144a7be76();
  FUN_144a7bec8(param_1,&local_68);
  local_98[0] = 0;
  local_70 = 0;
  FUN_144a7bf34(local_98,&local_68,&local_a8,&local_99);
  if (local_60 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_60 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
  FUN_1447c3578(lVar2 + 0x80,&local_68,local_98);
  fVar5 = (float)FUN_144a7ecd0(&local_68);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
  if (pcVar3 != (code *)0x0) {
    pppuVar4 = &local_68;
    if (0x18 < local_50) {
      pppuVar4 = (undefined8 ***)local_68;
    }
    (*pcVar3)(pppuVar4);
  }
  if (0x18 < local_50) {
    FUN_1400020a8(local_68);
  }
  FUN_144a5ac3a(local_98);
  *(float *)(param_1 + 0x70) = fVar5 + *(float *)(param_1 + 0x54);
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146551fca FUN_146551fca body=104 status=ok
// SIG undefined FUN_146551fca(void)

undefined8 FUN_146551fca(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  float fVar4;
  
  fVar4 = (float)FUN_141236616();
  if ((((fVar4 < *(float *)(param_1 + 0x1a4)) && (*(char *)(param_1 + 0x68) == '\0')) &&
      (*(char *)(*(longlong *)(param_1 + 0x40) + 0x180) != '\x01')) ||
     ((*(char *)(*(longlong *)(param_1 + 0x48) + 0x80) == '\0' &&
      ((lVar3 = FUN_14479d2ce(param_1 + 0xc4), lVar3 == 0 ||
       (cVar1 = FUN_1489507a2(lVar3), cVar1 != '\0')))))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 146552032 FUN_146552032 body=490 status=ok
// SIG undefined FUN_146552032(void)

void FUN_146552032(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 ****ppppuVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  longlong local_e0;
  undefined1 local_d8;
  undefined8 local_c8;
  undefined1 local_b9;
  undefined1 local_b8 [40];
  undefined4 local_90;
  undefined8 ***local_88;
  longlong *local_80;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  fVar5 = (float)FUN_141236616();
  if (*(float *)(param_1 + 0x1a8) <= 0.0) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    local_b9 = 2;
    local_c8 = FUN_144a7be76(param_1);
    FUN_144a7bec8(param_1,&local_88);
    local_b8[0] = 0;
    local_90 = 0;
    FUN_144a7bf34(local_b8,&local_88,&local_c8,&local_b9);
    if (local_80 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_80 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_80 + 0x10))();
      }
    }
    FUN_1447c3578(lVar2 + 600,&local_88,local_b8);
    fVar6 = (float)FUN_144a7ecd0(&local_88);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar4 = &local_88;
      if (0x18 < local_70) {
        ppppuVar4 = (undefined8 ****)local_88;
      }
      (*pcVar3)(ppppuVar4);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(local_88);
    }
    FUN_144a5ac3a(local_b8);
    if (fVar6 < 1e-08) {
      FUN_145bef2cc(param_1);
    }
    else {
      *(float *)(param_1 + 0x1a8) = fVar5 + fVar6;
      local_e0 = lVar2 + 0x340;
      local_d8 = 1;
      local_e8 = 200;
      FUN_1461a06de(param_1,&DAT_14cb80ae8,1,fVar6);
    }
  }
  else if (*(float *)(param_1 + 0x1a8) < fVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_108);
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146552246 FUN_146552246 body=48 status=ok
// SIG undefined FUN_146552246(void)

void FUN_146552246(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b40c818);
  FUN_1406f8a8a(param_1,param_2);
  return;
}



// FUNCTION 14655227c FUN_14655227c body=98 status=ok
// SIG undefined FUN_14655227c(void)

ulonglong FUN_14655227c(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b40c854);
  uVar1 = FUN_1406f8a8a(param_1,param_2);
  uVar3 = (ulonglong)uVar1;
  iVar2 = FUN_1448332aa(param_2,&DAT_14b40c854);
  if ((iVar2 < 1) && ((*(byte *)(param_2 + 5) & 1) != 0)) {
    FUN_14889b3d2(param_1,param_2);
    uVar3 = CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
  }
  return uVar3;
}



// FUNCTION 1465522e4 FUN_1465522e4 body=62 status=ok
// SIG undefined FUN_1465522e4(void)

undefined8 * FUN_1465522e4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146552322 FUN_146552322 body=40 status=ok
// SIG undefined FUN_146552322(void)

undefined8 FUN_146552322(undefined8 param_1,int param_2)

{
  FUN_145d38eea();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655234a FUN_14655234a body=64 status=ok
// SIG undefined FUN_14655234a(void)

undefined8 * FUN_14655234a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b40cc60;
  plVar2 = (longlong *)param_1[3];
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



// FUNCTION 14655238a FUN_14655238a body=419 status=ok
// SIG undefined FUN_14655238a(void)

undefined4 * FUN_14655238a(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  void *_Src;
  uint uVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  uint local_60;
  int iStack_5c;
  uint uStack_58;
  int iStack_54;
  undefined2 *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = *param_3;
  local_60 = *(uint *)(param_3 + 1);
  iStack_5c = *(int *)((longlong)param_3 + 0xc);
  uStack_58 = *(uint *)(param_3 + 2);
  iStack_54 = *(int *)((longlong)param_3 + 0x14);
  local_50 = (undefined2 *)0x0;
  local_48 = *(int *)(param_3 + 4);
  lVar7 = (longlong)local_48;
  _Src = (void *)param_3[3];
  if (lVar7 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,_Src,lVar7 * 2);
  }
  uVar1 = (uint)(CONCAT44(iStack_54,uStack_58) >> 0x10);
  uVar3 = (uint)(CONCAT44(iStack_5c,local_60) >> 0x10);
  uVar3 = (local_60 << 0x10 | local_60 & 0xffff) + iStack_5c + (uVar3 << 0x13 | uVar3 & 0xffff) +
          ((local_60 & 0xffff) >> 4);
  uVar4 = FUN_144a78877(0,(uVar3 >> 2) +
                          (uStack_58 << 0x10 | uStack_58 & 0xffff) + iStack_54 +
                          (uVar1 << 0x13 | uVar1 & 0xffff) + ((uStack_58 & 0xffff) >> 4) +
                          uVar3 * 0x40 + 0x9e3779b9 ^ uVar3);
  iVar6 = local_48 + -1;
  puVar2 = local_50;
  if (local_48 == 0) {
    iVar6 = 0;
    puVar2 = &DAT_149dfb77a;
  }
  uVar5 = FUN_144a49b4a(iVar6,puVar2);
  uVar4 = FUN_144a78877(uVar4,uVar5);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar4 = FUN_145d569f4(param_1,uVar4,param_3);
  *param_2 = uVar4;
  if (param_3[3] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14655252e FUN_14655252e body=29 status=ok
// SIG undefined FUN_14655252e(void)

undefined8 FUN_14655252e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655254c FUN_14655254c body=95 status=ok
// SIG undefined FUN_14655254c(void)

void FUN_14655254c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1465525ac FUN_1465525ac body=38 status=ok
// SIG undefined FUN_1465525ac(void)

void FUN_1465525ac(longlong param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_141236616();
  if (fVar1 < *(float *)(param_1 + 0x70)) {
    return;
  }
  FUN_14097c15a(param_1);
  return;
}



// FUNCTION 1465525de FUN_1465525de body=108 status=ok
// SIG undefined FUN_1465525de(void)

void FUN_1465525de(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1407fb560();
  if (*(longlong *)(param_1 + 0xba8) != 0) {
    FUN_140521208();
    *(undefined8 *)(param_1 + 0xba8) = 0;
    plVar3 = *(longlong **)(param_1 + 0xbb0);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xbb0) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000146552646. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14655266c FUN_14655266c body=32 status=ok
// SIG undefined FUN_14655266c(void)

undefined8 FUN_14655266c(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"GbxStandIn");
  return param_2;
}



// FUNCTION 14655268c FUN_14655268c body=409 status=ok
// SIG undefined FUN_14655268c(void)

longlong FUN_14655268c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_108 [40];
  undefined2 *local_e0;
  int local_d8;
  undefined2 *local_d0;
  int local_c8;
  undefined8 local_c0;
  undefined8 local_b8 [8];
  longlong local_78;
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(int *)(param_3 + 1) < 2) {
    lVar1 = FUN_140e7cbd2(param_1,param_2);
    if (lVar1 != 0) {
      lVar2 = FUN_141147bae();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) goto LAB_1465526ec;
    }
    lVar1 = 0;
    goto LAB_1465526ec;
  }
  FUN_140e7cc9e(param_1,local_b8,param_2);
  FUN_1400021e4(local_b8,&local_e0);
  puVar4 = &DAT_149dfb77a;
  if (local_d8 != 0) {
    puVar4 = local_e0;
  }
  puVar3 = &DAT_149dfb77a;
  if (*(int *)(param_3 + 1) != 0) {
    puVar3 = (undefined2 *)*param_3;
  }
  FUN_140002266(&local_d0,L"%s.%s",puVar3,puVar4);
  puVar4 = &DAT_149dfb77a;
  if (local_c8 != 0) {
    puVar4 = local_d0;
  }
  FUN_1446f470e(&local_c0,puVar4,1);
  local_b8[0] = local_c0;
  if (local_d0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_e0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  lVar1 = FUN_140e7cc60(param_1,param_2,local_b8);
  if (lVar1 == 0) {
LAB_1465527f7:
    lVar1 = 0;
  }
  else {
    lVar2 = FUN_141147bae();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        != lVar2 + 0x30)) goto LAB_1465527f7;
  }
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
LAB_1465526ec:
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14655282c FUN_14655282c body=68 status=ok
// SIG undefined FUN_14655282c(void)

ulonglong FUN_14655282c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  undefined7 uVar4;
  
  lVar1 = (**(code **)(*param_2 + 0x18))(param_2);
  uVar4 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar3 = CONCAT71(uVar4,1);
  if (lVar1 != 0) {
    lVar2 = FUN_140126fc0();
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      uVar3 = CONCAT71(uVar4,*(longlong *)
                              (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
                             != lVar2 + 0x30);
    }
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 146552870 FUN_146552870 body=278 status=ok
// SIG undefined FUN_146552870(void)

void FUN_146552870(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar2 = *param_2;
    uVar1 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar5 = (uint)lVar2 & 0xffff;
    lVar3 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x60);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x68) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar5) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 0x20) == lVar2) {
          if ((lVar3 != 0) && ((undefined8 *)(lVar3 + 8) != (undefined8 *)0x0)) {
            local_20 = *(undefined8 *)(lVar3 + 8);
            lVar2 = FUN_14479d2ce();
            if ((lVar2 != 0) &&
               ((*(longlong *)(lVar2 + 0x3f8) != 0 &&
                (lVar3 = FUN_1461a6134(*(longlong *)(lVar2 + 0x3f8),param_3), lVar3 != 0)))) {
              (**(code **)(*(longlong *)(lVar2 + 0x3c0) + 0x20))(lVar2 + 0x3c0,lVar3);
              *(undefined8 *)(lVar2 + 0x410) = *param_3;
            }
          }
          break;
        }
        iVar4 = *(int *)(lVar3 + 0x18);
      } while (iVar4 != -1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146552988 FUN_146552988 body=122 status=ok
// SIG undefined FUN_146552988(void)

void FUN_146552988(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  
  lVar2 = FUN_140c8331a();
  if (lVar2 != 0) {
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined1 *)(lVar2 + 0x524) = 1;
    FUN_1413d4c10(lVar2,param_2 + 0x10,0,0,0);
    lVar1 = *(longlong *)(lVar2 + 0x530);
    if ((lVar1 != 0) && (*(longlong *)(lVar2 + 0x3c0) != 0)) {
      fVar3 = *(float *)(param_2 + 0x7c);
      if (*(float *)(lVar1 + 0x5c) <= *(float *)(param_2 + 0x7c)) {
        fVar3 = *(float *)(lVar1 + 0x5c);
      }
      if (fVar3 <= *(float *)(lVar1 + 0x58)) {
        fVar3 = *(float *)(lVar1 + 0x58);
      }
      *(float *)(*(longlong *)(lVar2 + 0x3c0) + 0x38c) = fVar3;
    }
  }
  return;
}



// FUNCTION 146552a02 FUN_146552a02 body=472 status=ok
// SIG undefined FUN_146552a02(void)

void FUN_146552a02(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    iVar2 = *(int *)(param_1 + 0x118);
    if ((longlong)iVar2 != 0) {
      lVar8 = *(longlong *)(param_1 + 0x110);
      lVar7 = 0;
      do {
        local_48 = *(undefined8 *)(lVar8 + lVar7);
        cVar3 = FUN_144729dda(&local_48);
        if (cVar3 != '\0') {
          plVar1 = *(longlong **)(param_1 + 0x48);
          uVar6 = FUN_14479d2ce(&local_48);
          (**(code **)(*plVar1 + 0x28))(plVar1,uVar6);
        }
        lVar7 = lVar7 + 8;
      } while ((longlong)iVar2 * 8 != lVar7);
    }
    plVar1 = (longlong *)(param_1 + 0x110);
    *(undefined4 *)(param_1 + 0x118) = 0;
    if (*(int *)(param_1 + 0x11c) != 0) {
      FUN_146552d34(plVar1,0);
    }
    if ((longlong)(int)param_2[1] != 0) {
      lVar8 = (longlong)(int)param_2[1] * 0xc0;
      lVar7 = *param_2 + 0x98;
      do {
        lVar4 = FUN_1401ca522(lVar7 + -0x28);
        if ((lVar4 != 0) &&
           (plVar5 = (longlong *)FUN_140995b6b(DAT_14c951640), plVar5 != (longlong *)0x0)) {
          (**(code **)(*plVar5 + 0xa78))(plVar5,lVar4);
          *(byte *)((longlong)plVar5 + 0x66c) = *(byte *)((longlong)plVar5 + 0x66c) | 2;
          lVar4 = FUN_1402d20ea(lVar7);
          if (lVar4 != 0) {
            (**(code **)(*plVar5 + 0x638))(plVar5,0,lVar4);
          }
          (**(code **)(**(longlong **)(param_1 + 0x48) + 0x20))
                    (*(longlong **)(param_1 + 0x48),plVar5,lVar7 + -0x88,0);
          local_48 = 0;
          FUN_14485c47a(&local_48,plVar5);
          iVar2 = *(int *)(param_1 + 0x118);
          *(uint *)(param_1 + 0x118) = iVar2 + 1U;
          if (*(uint *)(param_1 + 0x11c) < iVar2 + 1U) {
            FUN_14163bfaa(plVar1,iVar2);
          }
          *(undefined8 *)(*plVar1 + (longlong)iVar2 * 8) = local_48;
        }
        lVar7 = lVar7 + 0xc0;
        lVar8 = lVar8 + -0xc0;
      } while (lVar8 != 0);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146552bfc FUN_146552bfc body=38 status=ok
// SIG undefined FUN_146552bfc(void)

undefined8 FUN_146552bfc(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"StandInViewer",1);
  return param_2;
}



// FUNCTION 146552c22 FUN_146552c22 body=24 status=ok
// SIG undefined FUN_146552c22(void)

bool FUN_146552c22(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146552c3a FUN_146552c3a body=132 status=ok
// SIG undefined FUN_146552c3a(void)

void FUN_146552c3a(longlong param_1,int param_2)

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



// FUNCTION 146552cc0 FUN_146552cc0 body=85 status=ok
// SIG undefined FUN_146552cc0(void)

void FUN_146552cc0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40eda0;
  return;
}



// FUNCTION 146552d16 FUN_146552d16 body=29 status=ok
// SIG undefined FUN_146552d16(void)

undefined8 FUN_146552d16(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146552d34 FUN_146552d34 body=96 status=ok
// SIG undefined FUN_146552d34(void)

void FUN_146552d34(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 146552d94 FUN_146552d94 body=669 status=ok
// SIG undefined FUN_146552d94(void)

void FUN_146552d94(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 auStack_f8 [36];
  int local_d4;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong lStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_68;
  longlong lStack_60;
  ulonglong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar1 = (longlong *)(param_1 + 0x2e8);
  lVar2 = param_1 + 0x2f8;
  local_b8 = (longlong *)&DAT_100000000;
  lStack_a8 = 0xffffffff;
  local_a0 = local_a0 & 0xffffffff00000000;
  iVar7 = 0;
  local_b0 = lVar2;
  if (*(int *)(param_1 + 0x310) != 0) {
    FUN_1449c0562(&local_b8);
    iVar7 = *(int *)(param_1 + 0x310);
  }
  local_78 = lStack_a8;
  lVar3 = local_78;
  local_70 = (uint)local_a0;
  local_6c = local_a0._4_4_;
  local_88 = local_b8;
  local_80 = local_b0;
  local_78._4_4_ = (int)((ulonglong)lStack_a8 >> 0x20);
  iVar5 = local_78._4_4_;
  local_90 = plVar1;
  if ((local_78._4_4_ != iVar7) || (local_78 = lVar3, local_b0 != lVar2)) {
    do {
      local_78 = lVar3;
      local_c0 = *local_90;
      local_c8 = (longlong)iVar5 * 0x20;
      lVar3 = *(longlong *)(local_c0 + 0x10 + local_c8);
      if (lVar3 != 0) {
        local_d0 = lVar3 + 0x80;
        local_68 = 0x100000000;
        local_58 = 0xffffffff;
        uStack_50 = 0;
        lStack_60 = local_d0;
        if (*(int *)(lVar3 + 0x98) == 0) {
          local_d4 = 0;
        }
        else {
          FUN_1449c0562(&local_68);
          local_d4 = *(int *)(lVar3 + 0x98);
        }
        plVar8 = (longlong *)(lVar3 + 0x70);
        uStack_98 = CONCAT44(uStack_4c,uStack_50);
        local_a0 = local_58;
        uVar4 = local_a0;
        local_b0 = local_68;
        lStack_a8 = lStack_60;
        local_a0._4_4_ = (int)(local_58 >> 0x20);
        iVar5 = local_a0._4_4_;
        local_b8 = plVar8;
        if ((local_a0._4_4_ != local_d4) || (local_a0 = uVar4, lStack_60 != local_d0)) {
          do {
            local_a0 = uVar4;
            lVar3 = *local_b8;
            plVar6 = *(longlong **)(*(longlong *)(lVar3 + 0x10 + (longlong)iVar5 * 0x20) + 0x30);
            if (plVar6 != (longlong *)0x0) {
              (**(code **)(*plVar6 + 0x18))();
              *(undefined8 *)(*(longlong *)(lVar3 + (longlong)iVar5 * 0x20 + 0x10) + 0x30) = 0;
            }
            local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 & ~local_b0._4_4_);
            FUN_1449c0562(&local_b0);
            iVar5 = local_a0._4_4_;
            uVar4 = local_a0;
          } while (local_b8 != plVar8 || (lStack_a8 != local_d0 || local_a0._4_4_ != local_d4));
        }
        plVar6 = (longlong *)(local_c0 + local_c8 + 0x10);
        plVar8 = *(longlong **)(*plVar6 + 0x30);
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x18))();
          *(undefined8 *)(*plVar6 + 0x30) = 0;
        }
      }
      local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
      FUN_1449c0562(&local_88);
      iVar5 = local_78._4_4_;
      lVar3 = local_78;
    } while (((local_78._4_4_ != iVar7) || (local_80 != lVar2)) || (local_90 != plVar1));
  }
  FUN_14042ef50(param_1);
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146553032 FUN_146553032 body=59 status=ok
// SIG undefined FUN_146553032(void)

void FUN_146553032(longlong param_1,longlong param_2)

{
  if (((*(longlong *)(param_1 + 0x20) != 0) && (param_2 != 0)) &&
     (*(longlong *)(param_1 + 0x28) != 0)) {
    FUN_140a3f3e6(param_1 + 0x348);
    FUN_140a3f3ac(param_1);
    return;
  }
  return;
}



// FUNCTION 14655306e FUN_14655306e body=105 status=ok
// SIG undefined FUN_14655306e(void)

void FUN_14655306e(longlong param_1,undefined8 param_2)

{
  FUN_140aa1618(param_1 + 0x40);
  FUN_140aa1618(param_1 + 0xd8,param_2);
  FUN_140aa1618(param_1 + 0x138,param_2);
  FUN_140aa1618(param_1 + 0x180,param_2);
  FUN_140aa1618(param_1 + 0x1a0,param_2);
  FUN_140aa1618(param_1 + 0x1c0,param_2);
  return;
}



// FUNCTION 1465530d8 FUN_1465530d8 body=87 status=ok
// SIG undefined FUN_1465530d8(void)

void FUN_1465530d8(longlong param_1,undefined8 param_2)

{
  FUN_140f5d36e();
  FUN_140aa1618(param_1 + 0x80,param_2);
  FUN_140aa1618(param_1 + 0xa0,param_2);
  if (*(int *)(param_1 + 0xe0) != 3) {
    return;
  }
  FUN_140aa1618(param_1 + 0xc0,param_2);
  return;
}



// FUNCTION 146553130 FUN_146553130 body=63 status=ok
// SIG undefined FUN_146553130(void)

void FUN_146553130(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = (**(code **)(*(longlong *)(param_1 + 0x30) + 0x48))(param_1 + 0x30);
  iVar1 = FUN_14490d72a(uVar2);
  *(bool *)(param_1 + 0x119) = iVar1 != 3;
  lVar3 = FUN_140e40dfb();
  FUN_14118c70e(param_1 + 0x38,lVar3 + 0x20);
  return;
}



// FUNCTION 146553170 FUN_146553170 body=102 status=ok
// SIG undefined FUN_146553170(void)

void FUN_146553170(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) != 1) {
    FUN_1406ba688(param_2,1);
  }
  puVar1 = (undefined8 *)FUN_1403f9e22(param_2);
  *(undefined4 *)(puVar1 + 1) = DAT_14cb7bde8;
  *puVar1 = DAT_14cb7bde0;
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x2b0);
  }
  FUN_14117b6b4((longlong)puVar1 + 0xc,uVar2);
  return;
}



// FUNCTION 1465531d6 FUN_1465531d6 body=76 status=ok
// SIG undefined FUN_1465531d6(void)

undefined8 FUN_1465531d6(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_14112d98e(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x000146553217. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 146553222 FUN_146553222 body=76 status=ok
// SIG undefined FUN_146553222(void)

undefined8 FUN_146553222(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_14111bd62(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x000146553263. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 14655326e FUN_14655326e body=635 status=ok
// SIG undefined FUN_14655326e(void)

void FUN_14655326e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140c2c6fa();
  local_58 = 0;
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  local_68 = 1;
  FUN_1446f470e(&local_70,L"LifeSpan",1);
  uVar1 = FUN_141048d22();
  FUN_141048d22();
  uVar1 = FUN_140f1fabf(uVar1,local_70);
  FUN_140f1fa23(uVar1,param_2,&local_68);
  local_58 = 0;
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  local_68 = 1;
  FUN_1446f470e(&local_70,L"FullRadius",1);
  uVar1 = FUN_141048d22();
  FUN_141048d22();
  uVar1 = FUN_140f1fabf(uVar1,local_70);
  FUN_140f1fa23(uVar1,param_2,&local_68);
  local_58 = 0;
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  local_68 = 1;
  FUN_1446f470e(&local_70,L"TraceDistanceOverride",1);
  uVar1 = FUN_141048d22();
  FUN_141048d22();
  uVar1 = FUN_140f1fabf(uVar1,local_70);
  FUN_140f1fa23(uVar1,param_2,&local_68);
  local_58 = 0;
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  local_68 = 1;
  FUN_1446f470e(&local_70,L"PuddleState",1);
  uVar1 = FUN_141048d22();
  FUN_141048d22();
  uVar1 = FUN_140f1fabf(uVar1,local_70);
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"DefHandle",1);
  uVar1 = FUN_141048d22();
  FUN_141048d22();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"RepHazardInteractionState",1);
  uVar1 = FUN_141048d22();
  FUN_141048d22();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"RepCleanUpTransitionTime",1);
  uVar1 = FUN_141048d22();
  FUN_141048d22();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14655352c FUN_14655352c body=40 status=ok
// SIG undefined FUN_14655352c(void)

undefined8 FUN_14655352c(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146553554 FUN_146553554 body=85 status=ok
// SIG undefined FUN_146553554(void)

void FUN_146553554(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40fe10;
  return;
}



// FUNCTION 1465535aa FUN_1465535aa body=29 status=ok
// SIG undefined FUN_1465535aa(void)

undefined8 FUN_1465535aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465535c8 FUN_1465535c8 body=517 status=ok
// SIG undefined FUN_1465535c8(void)

void FUN_1465535c8(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
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
  uVar3 = *(uint *)(param_1 + 9);
  uVar2 = local_70;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)((longlong)plVar4 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
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
    uVar2 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar8 = local_70._4_4_;
      local_70 = uVar2;
      do {
        lVar9 = *local_88;
        uVar6 = *(ulonglong *)(lVar9 + (longlong)iVar8 * 0x68);
        if ((DAT_14c950c29 == '\x01') && (uVar6 != 0)) {
          FUN_1456cec3c(uVar6);
        }
        lVar9 = lVar9 + (longlong)iVar8 * 0x68;
        uVar3 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar6 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar9 + 100) = iVar5;
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)(lVar9 + 0x60) =
             *(undefined4 *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(int *)((longlong)plVar4 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar8;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar8 = local_70._4_4_;
        uVar2 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1465537ce FUN_1465537ce body=85 status=ok
// SIG undefined FUN_1465537ce(void)

void FUN_1465537ce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b410190;
  return;
}



// FUNCTION 146553824 FUN_146553824 body=29 status=ok
// SIG undefined FUN_146553824(void)

undefined8 FUN_146553824(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146553842 FUN_146553842 body=107 status=ok
// SIG undefined FUN_146553842(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146553842(longlong param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar2 + 1U) {
    FUN_1405b572a(param_1 + 0x18,iVar2);
  }
  sVar1 = *param_2;
  *(short *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 2) = sVar1;
  *(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)sVar1 * 8) = 0;
  if (param_2 != (short *)0x0) {
    FUN_145c1fb8e(param_2);
    _DAT_14cb81d5c = _DAT_14cb81d5c + -1;
    *(short **)param_2 = DAT_14cb81d50;
    DAT_14cb81d50 = param_2;
  }
  return;
}



// FUNCTION 1465538ae FUN_1465538ae body=16 status=ok
// SIG undefined FUN_1465538ae(void)

byte FUN_1465538ae(void)

{
  byte bVar1;
  
  bVar1 = FUN_144729dda();
  return bVar1 ^ 1;
}



// FUNCTION 1465538be FUN_1465538be body=93 status=ok
// SIG undefined FUN_1465538be(void)

void FUN_1465538be(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b410600;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b410590;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14655391c FUN_14655391c body=132 status=ok
// SIG undefined FUN_14655391c(void)

void FUN_14655391c(longlong param_1,int param_2)

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



// FUNCTION 1465539a0 FUN_1465539a0 body=116 status=ok
// SIG undefined FUN_1465539a0(void)

void FUN_1465539a0(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x38);
  if (*(longlong *)(lVar1 + 0x28 + (longlong)(int)param_2 * 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362((longlong)_Dst + 8);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x38),(longlong)iVar3 * 0x38);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 146553a14 FUN_146553a14 body=87 status=ok
// SIG undefined FUN_146553a14(void)

void FUN_146553a14(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
  }
  uVar2 = 0x7fffffff;
  if ((int)uVar1 <= (int)uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0xc) = uVar2;
  FUN_1412ae76e();
  return;
}



// FUNCTION 146553a6c FUN_146553a6c body=33 status=ok
// SIG undefined FUN_146553a6c(void)

void FUN_146553a6c(undefined8 param_1)

{
  FUN_144a81a0a();
  FUN_140457ffc(&DAT_14c967070,param_1);
  return;
}



// FUNCTION 146553a8e FUN_146553a8e body=107 status=ok
// SIG undefined FUN_146553a8e(void)

void FUN_146553a8e(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = FUN_1405faa04(param_1 + 0x30);
  if (((param_2 != 0) && ((param_3 & 1) != 0)) && (lVar1 != 0)) {
    uVar2 = FUN_1406d192e();
    plVar3 = (longlong *)FUN_144718840(param_2,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = FUN_1405faa04(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x000146553aed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x28))(plVar3,uVar2,*(code **)(*plVar3 + 0x28));
      return;
    }
  }
  return;
}



// FUNCTION 146553afa FUN_146553afa body=85 status=ok
// SIG undefined FUN_146553afa(void)

void FUN_146553afa(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x1e0);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_140368b56(param_1 + 0x108);
  puVar1 = *(undefined8 **)(param_1 + 0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_140368b56(param_1 + 8);
  return;
}



// FUNCTION 146553b50 FUN_146553b50 body=160 status=ok
// SIG undefined FUN_146553b50(void)

void FUN_146553b50(longlong param_1,int *param_2,uint param_3,char param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (longlong)*(int *)(*(longlong *)(param_1 + 0xa0) + 0x120);
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x118);
    lVar2 = lVar2 * 0x150;
    do {
      if (*(int *)(lVar3 + 0x108) == *param_2) {
        if (param_4 == '\0') {
          *(uint *)(lVar3 + 0xfc) = *(uint *)(lVar3 + 0xfc) | param_3;
        }
        else {
          *(uint *)(lVar3 + 0xfc) = *(uint *)(lVar3 + 0xfc) & ~param_3;
        }
        FUN_140705884(*(undefined8 *)(param_1 + 0xa0),lVar3);
        plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0x13c);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x578))(plVar1);
        }
        FUN_141069ce4(param_1,lVar3);
        return;
      }
      lVar3 = lVar3 + 0x150;
      lVar2 = lVar2 + -0x150;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 146553bf0 FUN_146553bf0 body=242 status=ok
// SIG undefined FUN_146553bf0(void)

void FUN_146553bf0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5,undefined4 param_6)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined1 local_80 [32];
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60 = (undefined1 *)0x0;
  local_58 = 0x400000000;
  local_88 = param_2;
  (**(code **)(*param_1 + 0xd8))(param_1,local_80,0);
  puVar2 = local_60;
  if (local_60 == (undefined1 *)0x0) {
    puVar2 = local_80;
  }
  lVar3 = (longlong)(int)local_58;
  if (lVar3 != 0) {
    lVar1 = 0;
    do {
      local_90 = param_6;
      local_98 = param_5;
      FUN_1409808da(*(undefined8 *)(puVar2 + lVar1),&local_88,param_3,param_4);
      lVar1 = lVar1 + 8;
    } while (lVar3 * 8 != lVar1);
  }
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146553d04 FUN_146553d04 body=38 status=ok
// SIG undefined FUN_146553d04(void)

undefined8 FUN_146553d04(undefined8 param_1,int param_2)

{
  FUN_140cada64();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146553d2a FUN_146553d2a body=29 status=ok
// SIG undefined FUN_146553d2a(void)

bool FUN_146553d2a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146553d48 FUN_146553d48 body=24 status=ok
// SIG undefined FUN_146553d48(void)

bool FUN_146553d48(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146553d60 FUN_146553d60 body=85 status=ok
// SIG undefined FUN_146553d60(void)

void FUN_146553d60(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4114a0;
  return;
}



// FUNCTION 146553db6 FUN_146553db6 body=29 status=ok
// SIG undefined FUN_146553db6(void)

undefined8 FUN_146553db6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146553dd4 FUN_146553dd4 body=33 status=ok
// SIG undefined FUN_146553dd4(void)

void FUN_146553dd4(longlong param_1)

{
  FUN_140b969c4();
  FUN_1404d4e8e(param_1 + 0x548,param_1);
  return;
}



// FUNCTION 146553df6 FUN_146553df6 body=51 status=ok
// SIG undefined FUN_146553df6(void)

void FUN_146553df6(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x540) != 0) {
    FUN_14096c230(*(longlong *)(param_1 + 0x540),param_2);
  }
  FUN_140940a0a(param_1,param_2);
  return;
}



// FUNCTION 146553e2a FUN_146553e2a body=33 status=ok
// SIG undefined FUN_146553e2a(void)

void FUN_146553e2a(longlong param_1)

{
  FUN_1405f1eac();
  thunk_FUN_1405f85e0(param_1 + 0x548);
  return;
}



// FUNCTION 146553e4c FUN_146553e4c body=17 status=ok
// SIG undefined FUN_146553e4c(void)

uint FUN_146553e4c(void)

{
  uint uVar1;
  
  uVar1 = FUN_1400ece20();
  return uVar1 | 2;
}



// FUNCTION 146553e5e FUN_146553e5e body=153 status=ok
// SIG undefined FUN_146553e5e(void)

undefined4 FUN_146553e5e(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar2 = FUN_140d0e492();
  if ((char)uVar2 != '\0') {
    uVar3 = FUN_14001cc68(0x180,0x10);
    FUN_140d50c94(uVar3,param_1 + 0x520);
    *(undefined8 *)(param_1 + 0x540) = uVar3;
    lVar1 = *(longlong *)(param_1 + 0x1c8);
    if (lVar1 != 0) {
      lVar4 = FUN_14081cebe();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) {
        FUN_140d0e42c(*(undefined8 *)(param_1 + 0x540),lVar1);
      }
    }
    if (*(char *)(param_1 + 0x650) == '\x01') {
      FUN_1488c7a9e(*(undefined8 *)(param_1 + 0x540));
    }
  }
  return uVar2;
}



// FUNCTION 146553f5a FUN_146553f5a body=87 status=ok
// SIG undefined FUN_146553f5a(void)

void FUN_146553f5a(longlong param_1)

{
  if ((*(byte *)(param_1 + -0x4bc) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x41c) = 0xbf800000;
    *(byte *)(param_1 + 0x448) = *(byte *)(param_1 + 0x448) & 0xf7;
    if (*(longlong **)(param_1 + 0x268) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x268) + 0x870))();
    }
    FUN_14022e476(param_1 + -0x520);
    return;
  }
  *(undefined2 *)(param_1 + 0x308) = 0x101;
  return;
}



// FUNCTION 146553fb2 FUN_146553fb2 body=212 status=ok
// SIG undefined FUN_146553fb2(void)

undefined8 * FUN_146553fb2(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  *param_1 = param_2;
  param_1[0xc] = 0;
  param_1[0xd] = 0x800000000;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_140265f12();
  param_1[0xf] = &DAT_14cb83310;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = &PTR_FUN_14b1828b0;
  FUN_140265f12();
  param_1[0x13] = &DAT_14cb83310;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = &PTR_FUN_14b1828b0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0x400000000;
  FUN_140e4602c(param_1);
  if (param_3 != 0) {
    FUN_1405dc634(param_1 + 0x12,param_3 + 0x90);
    FUN_1405dc634(param_1 + 0xe,param_3 + 0x90);
  }
  return param_1;
}



// FUNCTION 146554086 FUN_146554086 body=22 status=ok
// SIG undefined FUN_146554086(void)

undefined8 FUN_146554086(int *param_1)

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
  
  plVar4 = DAT_14cb83a10;
  if (DAT_14cb83a10 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb83a10 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb83a10 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb83a10[0x3a] <= *(int *)((longlong)DAT_14cb83a10 + 0x1fc))) {
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
    cVar5 = (**(code **)(*DAT_14cb83a10 + 0x300))(DAT_14cb83a10);
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



// FUNCTION 14655409c FUN_14655409c body=22 status=ok
// SIG undefined FUN_14655409c(void)

undefined8 FUN_14655409c(int *param_1)

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
  
  plVar4 = DAT_14cb83a30;
  if (DAT_14cb83a30 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb83a30 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb83a30 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb83a30[0x3a] <= *(int *)((longlong)DAT_14cb83a30 + 0x1fc))) {
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
    cVar5 = (**(code **)(*DAT_14cb83a30 + 0x300))(DAT_14cb83a30);
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



// FUNCTION 1465540d4 FUN_1465540d4 body=62 status=ok
// SIG undefined FUN_1465540d4(void)

void FUN_1465540d4(longlong param_1)

{
  FUN_14099696a(param_1,0);
  if (*(longlong *)(param_1 + 0x618) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x600) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146554112 FUN_146554112 body=215 status=ok
// SIG undefined FUN_146554112(void)

undefined8 FUN_146554112(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14b412de0;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14b412410;
  local_30[3] = FUN_143dae6bd;
  FUN_140d821cc(param_1,param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1465541ea FUN_1465541ea body=29 status=ok
// SIG undefined FUN_1465541ea(void)

undefined8 FUN_1465541ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146554208 FUN_146554208 body=132 status=ok
// SIG undefined FUN_146554208(void)

void FUN_146554208(longlong param_1,int param_2)

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



// FUNCTION 14655428e FUN_14655428e body=85 status=ok
// SIG undefined FUN_14655428e(void)

void FUN_14655428e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b412780;
  return;
}



// FUNCTION 1465542e4 FUN_1465542e4 body=29 status=ok
// SIG undefined FUN_1465542e4(void)

undefined8 FUN_1465542e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146554302 FUN_146554302 body=29 status=ok
// SIG undefined FUN_146554302(void)

undefined8 FUN_146554302(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655432c FUN_14655432c body=369 status=ok
// SIG undefined FUN_14655432c(void)

void FUN_14655432c(float *param_1,undefined8 *param_2)

{
  float *pfVar1;
  float *pfVar2;
  bool bVar3;
  uint uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_b8 [32];
  float *local_98;
  undefined4 local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint local_80;
  float fStack_7c;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  uint local_60;
  float fStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar4 = rand();
  fVar7 = ((float)(uVar4 & 0x7fff) / 32767.0) * *param_1;
  pfVar1 = param_1 + 2;
  pfVar2 = param_1 + 0x36;
  local_70 = 0x100000000;
  local_60 = 0xffffffff;
  fStack_5c = 0.0;
  uStack_58 = 0;
  uStack_68 = pfVar2;
  if (param_1[0x3a] == 0.0) {
    fVar6 = 0.0;
  }
  else {
    FUN_144a81a4c(&local_70);
    fVar6 = param_1[0x3a];
  }
  uStack_78 = CONCAT44(uStack_54,uStack_58);
  local_80 = local_60;
  fStack_7c = fStack_5c;
  local_90 = (undefined4)local_70;
  uStack_8c = local_70._4_4_;
  uStack_88 = (undefined4)uStack_68;
  uStack_84 = uStack_68._4_4_;
  local_98 = pfVar1;
  if ((fStack_5c != fVar6) || (uStack_68 != pfVar2)) {
    fVar8 = 0.0;
    do {
      pfVar5 = *(float **)(local_98 + 0x30);
      if (*(float **)(local_98 + 0x30) == (float *)0x0) {
        pfVar5 = local_98;
      }
      bVar3 = fVar8 <= fVar7;
      fVar8 = fVar8 + pfVar5[(longlong)(int)fStack_7c * 6 + 2];
      if ((bVar3) && (fVar7 <= fVar8)) {
        *param_2 = *(undefined8 *)(pfVar5 + (longlong)(int)fStack_7c * 6);
        break;
      }
      local_80 = local_80 & ~uStack_8c;
      FUN_144a81a4c(&local_90);
    } while (local_98 != pfVar1 ||
             ((float *)CONCAT44(uStack_84,uStack_88) != pfVar2 || fStack_7c != fVar6));
  }
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14655449e FUN_14655449e body=212 status=ok
// SIG undefined FUN_14655449e(void)

longlong * FUN_14655449e(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar2 = FUN_140d2fab0();
    lVar4 = FUN_14477b664(uVar2);
    *(longlong *)(param_1 + 0x30) = lVar4;
  }
  plVar3 = *(longlong **)(param_1 + 0x38);
  if (plVar3 == (longlong *)0x0) {
    if (*(longlong *)(param_1 + 0x28) == 0) {
      return (longlong *)0x0;
    }
    if (lVar4 == 0) {
      return (longlong *)0x0;
    }
    plVar3 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar3 == (longlong *)0x0) ||
       (cVar1 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar1 == '\0')) {
      *(undefined8 *)(param_1 + 0x38) = 0;
      return (longlong *)0x0;
    }
    uVar2 = (**(code **)(*plVar3 + 0x110))(plVar3);
    plVar3 = (longlong *)FUN_144aff482(uVar2,(longlong *)(param_1 + 0x28));
    *(longlong **)(param_1 + 0x38) = plVar3;
    if (plVar3 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
  }
  lVar4 = (**(code **)(*plVar3 + 8))(plVar3);
  lVar5 = FUN_14652c10a();
  if (((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
      lVar5 + 0x30)) {
    if ((char)plVar3[3] != '\0') {
      return plVar3;
    }
    return (longlong *)0x0;
  }
  return (longlong *)0x0;
}



// FUNCTION 146554578 FUN_146554578 body=54 status=ok
// SIG undefined FUN_146554578(void)

void FUN_146554578(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  
  if (param_3 != 0) {
    plVar1 = (longlong *)FUN_14007a5e6(param_3);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001465545a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x58))(plVar1,param_2,*(code **)(*plVar1 + 0x58));
      return;
    }
  }
  return;
}



// FUNCTION 1465545ae FUN_1465545ae body=112 status=ok
// SIG undefined FUN_1465545ae(void)

undefined8 FUN_1465545ae(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    uVar1 = FUN_14131a30e();
    plVar2 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_14131a30e();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar2 == plVar3) {
        return 0;
      }
      if (plVar3 == (longlong *)0x0) {
        return 0;
      }
      (**(code **)(*plVar3 + 0x88))(plVar3,*(undefined1 *)(param_1 + 0x20),1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14655461e FUN_14655461e body=253 status=ok
// SIG undefined FUN_14655461e(void)

void FUN_14655461e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  char cVar4;
  longlong lVar5;
  
  iVar2 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_1447a1bd6(param_2,iVar2);
  }
  lVar3 = *param_2;
  lVar5 = (longlong)iVar2 * 0x10;
  puVar1 = (undefined8 *)(lVar3 + lVar5);
  *(undefined8 *)(lVar3 + lVar5) = 0;
  iVar2 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(lVar3 + 8 + lVar5) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
  }
  cVar4 = FUN_144a791f8(puVar1,&DAT_149e01f5a,1,1);
  if (cVar4 != '\0') {
    cVar4 = FUN_144a38768(puVar1,&DAT_149e01f5a,1,1);
    if (cVar4 != '\0') {
      FUN_140c540b4(puVar1,&DAT_149e01f5a,1,1);
      FUN_140b127b8(puVar1,&DAT_149e01f5a,1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14655471c FUN_14655471c body=151 status=ok
// SIG undefined FUN_14655471c(void)

void FUN_14655471c(int *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int local_50;
  undefined8 local_48;
  int local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 *local_28;
  undefined4 *local_20;
  ulonglong local_18;
  
  lVar1 = DAT_14cb84f20;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*param_1 != 0) && (DAT_14cb84f20 != 0)) {
    local_38 = *param_2;
    uStack_34 = param_2[1];
    uStack_30 = param_2[2];
    uStack_2c = param_2[3];
    local_58 = *(undefined8 *)param_1;
    local_50 = param_1[2];
    local_20 = &local_38;
    local_28 = &LAB_143dbc848;
    uVar2 = FUN_14039d08e();
    local_48 = local_58;
    local_40 = local_50;
    FUN_140e9367e(lVar1,&local_48,uVar2,&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1465547b4 FUN_1465547b4 body=151 status=ok
// SIG undefined FUN_1465547b4(void)

void FUN_1465547b4(int *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int local_50;
  undefined8 local_48;
  int local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 *local_28;
  undefined4 *local_20;
  ulonglong local_18;
  
  lVar1 = DAT_14cb84f20;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*param_1 != 0) && (DAT_14cb84f20 != 0)) {
    local_38 = *param_2;
    uStack_34 = param_2[1];
    uStack_30 = param_2[2];
    uStack_2c = param_2[3];
    local_58 = *(undefined8 *)param_1;
    local_50 = param_1[2];
    local_20 = &local_38;
    local_28 = &LAB_143dbc856;
    uVar2 = FUN_1402796c0();
    local_48 = local_58;
    local_40 = local_50;
    FUN_140e9367e(lVar1,&local_48,uVar2,&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14655484c FUN_14655484c body=265 status=ok
// SIG undefined FUN_14655484c(void)

undefined8 FUN_14655484c(longlong param_1,undefined8 param_2,float param_3)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  undefined1 auStack_58 [32];
  double local_38;
  double dStack_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = *(double **)(param_1 + 0x48);
  pdVar2 = *(double **)(param_1 + 0x58);
  local_28 = pdVar2[2] - pdVar1[2];
  dStack_30 = pdVar2[1] - pdVar1[1];
  local_38 = *pdVar2 - *pdVar1;
  dVar3 = local_28 * local_28 + local_38 * local_38 + dStack_30 * dStack_30;
  if ((dVar3 != 1.0) || (NAN(dVar3))) {
    if (dVar3 < 9.999999747378752e-05) {
      local_28 = DAT_14c8464f0;
      local_38 = DAT_14c8464e0;
      dStack_30 = DAT_14c8464e8;
    }
    else {
      dVar3 = 1.0 / SQRT(dVar3);
      local_28 = local_28 * dVar3;
      dStack_30 = dStack_30 * dVar3;
      local_38 = local_38 * dVar3;
    }
  }
  if (*(float *)(param_1 + 0x28) <= param_3) {
    param_3 = *(float *)(param_1 + 0x28);
  }
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  FUN_140754464(param_1 + 0x30,param_2,param_3,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146554956 FUN_146554956 body=522 status=ok
// SIG undefined FUN_146554956(void)

void FUN_146554956(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  
  lVar6 = param_1[1];
  if ((longlong)(int)lVar6 != 0) {
    lVar4 = *param_1;
    lVar11 = 0;
    do {
      lVar7 = (**(code **)(**(longlong **)(lVar4 + lVar11) + 8))();
      lVar8 = FUN_140a49604();
      if (lVar7 == lVar8) {
        plVar9 = (longlong *)FUN_14001cc68(0x20,0x10);
        plVar9[1] = (longlong)&DAT_100000001;
        *plVar9 = (longlong)&PTR_FUN_14b4132e0;
        uVar5 = *param_2;
        plVar9[2] = (longlong)&PTR_FUN_14b33eb10;
        plVar9[3] = 0;
        FUN_14485c47a(plVar9 + 3,uVar5);
        if (plVar9 == (longlong *)0x0) {
          *(undefined8 *)(lVar4 + lVar11) = 0x10;
          plVar10 = *(longlong **)(lVar4 + 8 + lVar11);
          if (plVar10 == (longlong *)0x0) {
            return;
          }
          *(undefined8 *)(lVar4 + 8 + lVar11) = 0;
        }
        else {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
          *(longlong **)(lVar4 + lVar11) = plVar9 + 2;
          plVar10 = *(longlong **)(lVar4 + 8 + lVar11);
          if (plVar9 == plVar10) {
            LOCK();
            plVar10 = plVar9 + 1;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)*plVar10 == 0) {
              (**(code **)*plVar9)(plVar9);
              LOCK();
              piVar2 = (int *)((longlong)plVar9 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
            goto LAB_146554a20;
          }
          *(longlong **)(lVar4 + 8 + lVar11) = plVar9;
          if (plVar10 == (longlong *)0x0) goto LAB_146554a20;
        }
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
        if (plVar9 == (longlong *)0x0) {
          return;
        }
        goto LAB_146554a20;
      }
      lVar11 = lVar11 + 0x10;
    } while ((longlong)(int)lVar6 * 0x10 != lVar11);
  }
  plVar9 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14b4132e0;
  uVar5 = *param_2;
  plVar9[2] = (longlong)&PTR_FUN_14b33eb10;
  plVar9[3] = 0;
  FUN_14485c47a(plVar9 + 3,uVar5);
  iVar3 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
    FUN_1401037bc(param_1,iVar3);
  }
  lVar6 = *param_1;
  *(longlong **)(lVar6 + (longlong)iVar3 * 0x10) = plVar9 + 2;
  *(longlong **)(lVar6 + 8 + (longlong)iVar3 * 0x10) = plVar9;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
LAB_146554a20:
    LOCK();
    plVar10 = plVar9 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146554b60 FUN_146554b60 body=132 status=ok
// SIG undefined FUN_146554b60(void)

void FUN_146554b60(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146554be4 FUN_146554be4 body=454 status=ok
// SIG undefined FUN_146554be4(void)

void FUN_146554be4(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x260;
        uVar10 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x254 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x250 + lVar7) =
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



// FUNCTION 146554dac FUN_146554dac body=432 status=ok
// SIG undefined FUN_146554dac(void)

void FUN_146554dac(longlong *param_1,uint param_2)

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
      FUN_1448fc38a(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_14488f93c(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar9 * 0x60 + lVar2 + -0x5c);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = iVar8 + -1;
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
        puVar5 = puVar5 + -0x18;
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



// FUNCTION 146554f5c FUN_146554f5c body=487 status=ok
// SIG undefined FUN_146554f5c(void)

void FUN_146554f5c(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 146555144 FUN_146555144 body=132 status=ok
// SIG undefined FUN_146555144(void)

void FUN_146555144(longlong param_1,int param_2)

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



// FUNCTION 1465551ca FUN_1465551ca body=146 status=ok
// SIG undefined FUN_1465551ca(void)

void FUN_1465551ca(longlong param_1,int param_2)

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



// FUNCTION 14655525c FUN_14655525c body=156 status=ok
// SIG undefined FUN_14655525c(void)

void FUN_14655525c(void)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38 [2];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  lVar1 = DAT_14caa8580;
  FUN_140056680(local_38,L"(Native)");
  FUN_1446f470e(&local_40,L"Spline.Road",1);
  FUN_1413e432a(lVar1,local_28,local_40,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1465552fa FUN_1465552fa body=146 status=ok
// SIG undefined FUN_1465552fa(void)

bool FUN_1465552fa(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140b5f98e(param_1 + 0x58,&local_30);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if (local_30 == 0) {
    bVar3 = false;
  }
  else {
    FUN_144a787a6(param_2,local_30 + 0x78);
    bVar3 = 1 < *(int *)(param_2 + 8);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14655538e FUN_14655538e body=591 status=ok
// SIG undefined FUN_14655538e(void)

void FUN_14655538e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  switchD_143c3d4dc::caseD_42();
  FUN_1446f470e(&local_58,L"SyncID",1);
  uVar1 = FUN_140fb6d42();
  FUN_140fb6d42();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"ServerSourcePoint",1);
  uVar1 = FUN_140fb6d42();
  FUN_140fb6d42();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"ServerTargetPoint",1);
  uVar1 = FUN_140fb6d42();
  FUN_140fb6d42();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"ClientState",1);
  uVar1 = FUN_140fb6d42();
  FUN_140fb6d42();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"DamageInterval",1);
  uVar1 = FUN_140fb6d42();
  FUN_140fb6d42();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"bIsGrowing",1);
  uVar1 = FUN_140fb6d42();
  FUN_140fb6d42();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"bIsShrinking",1);
  uVar1 = FUN_140fb6d42();
  FUN_140fb6d42();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1465555de FUN_1465555de body=350 status=ok
// SIG undefined FUN_1465555de(void)

void FUN_1465555de(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  byte *pbVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  cVar4 = (char)param_2;
  FUN_14032a73a();
  if (cVar4 == '\0') {
    iVar1 = *(int *)(param_1 + 0x3b0);
    if ((longlong)iVar1 != 0) {
      lVar6 = *(longlong *)(param_1 + 0x3a8);
      lVar8 = 0;
      do {
        lVar2 = *(longlong *)(lVar6 + lVar8);
        pbVar3 = *(byte **)(lVar2 + 0x50);
        if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 1) != 0)) {
          FUN_1405f3418(lVar2 + 0x30);
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)iVar1 * 8 != lVar8);
    }
    if ((*(byte **)(param_1 + 0x428) != (byte *)0x0) && ((**(byte **)(param_1 + 0x428) & 1) != 0)) {
      FUN_1405f3418(param_1 + 0x408);
      return;
    }
  }
  else {
    uVar5 = FUN_144a79cc8(param_1);
    iVar1 = *(int *)(param_1 + 0x3b0);
    if ((longlong)iVar1 != 0) {
      lVar6 = *(longlong *)(param_1 + 0x3a8);
      lVar8 = 0;
      do {
        param_2 = uVar5;
        FUN_1402eb876(*(longlong *)(lVar6 + lVar8) + 0x30,uVar5);
        lVar8 = lVar8 + 8;
      } while ((longlong)iVar1 * 8 != lVar8);
    }
    if ((*(byte *)(param_1 + 0x412) & 2) != 0) {
      lVar6 = param_1 + 0x408;
      *(longlong *)(param_1 + 0x430) = param_1;
      uVar7 = CONCAT71((int7)((ulonglong)param_2 >> 8),*(byte *)(param_1 + 0x412)) &
              0xffffffffffffff04;
      FUN_140cbebe8(lVar6,CONCAT71((int7)(uVar7 >> 8),(byte)uVar7 >> 2));
      FUN_14082bc44(lVar6,param_1,param_1 + 0x30);
      FUN_1402eb876(lVar6,uVar5);
    }
    lVar6 = FUN_1447210f0(param_1);
    if ((lVar6 != 0) && (DAT_14cadbee0 == '\x01')) {
      FUN_14082bc44(param_1 + 0x30,lVar6,lVar6 + 0x950);
      return;
    }
  }
  return;
}



// FUNCTION 14655573c FUN_14655573c body=254 status=ok
// SIG undefined FUN_14655573c(void)

void FUN_14655573c(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_140872622();
  if (0 < *(int *)(param_1 + 0x478)) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x470);
      puVar1 = *(undefined8 **)(lVar2 + lVar3);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
        lVar2 = *(longlong *)(param_1 + 0x470);
      }
      *(undefined8 *)(lVar2 + lVar3) = 0;
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x18;
    } while (lVar4 < *(int *)(param_1 + 0x478));
  }
  if (0 < *(int *)(param_1 + 0x488)) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x480);
      puVar1 = *(undefined8 **)(lVar2 + lVar3);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
        lVar2 = *(longlong *)(param_1 + 0x480);
      }
      *(undefined8 *)(lVar2 + lVar3) = 0;
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x18;
    } while (lVar4 < *(int *)(param_1 + 0x488));
  }
  if (0 < *(int *)(param_1 + 0x498)) {
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x490);
      puVar1 = *(undefined8 **)(lVar3 + lVar4 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
        lVar3 = *(longlong *)(param_1 + 0x490);
      }
      *(undefined8 *)(lVar3 + lVar4 * 8) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x498));
  }
  return;
}



// FUNCTION 14655583a FUN_14655583a body=187 status=ok
// SIG undefined FUN_14655583a(void)

undefined8 FUN_14655583a(undefined8 param_1,undefined8 param_2)

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



// FUNCTION 1465558f6 FUN_1465558f6 body=42 status=ok
// SIG undefined FUN_1465558f6(void)

longlong FUN_1465558f6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x278);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_140717404(lVar1);
    if (lVar2 == 0) {
      lVar2 = lVar1;
    }
  }
  return lVar2;
}



// FUNCTION 146555920 FUN_146555920 body=152 status=ok
// SIG undefined FUN_146555920(void)

undefined8 FUN_146555920(longlong *param_1,byte param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (((((*(byte *)(param_1 + 0x20) & 0x10) != 0) && (param_1[0x30] != 0)) && (param_1[8] != 0)) &&
     (((short)param_1[9] < 0 || (param_1[10] != 0)))) {
    uVar3 = (**(code **)(*param_1 + 0x180))(param_1);
    lVar1 = param_1[0x4f];
    if (lVar1 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = FUN_140717404(lVar1);
      if (lVar4 == 0) {
        lVar4 = lVar1;
      }
    }
    iVar2 = FUN_1412d1158(param_1 + 8,lVar4,uVar3);
    if ((iVar2 == 1 & param_2) != 0 || iVar2 == 2) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1465559b8 FUN_1465559b8 body=95 status=ok
// SIG undefined FUN_1465559b8(void)

void FUN_1465559b8(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 146555a18 FUN_146555a18 body=29 status=ok
// SIG undefined FUN_146555a18(void)

bool FUN_146555a18(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146555a36 FUN_146555a36 body=26 status=ok
// SIG undefined FUN_146555a36(void)

bool FUN_146555a36(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146555a50 FUN_146555a50 body=24 status=ok
// SIG undefined FUN_146555a50(void)

bool FUN_146555a50(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146555a68 FUN_146555a68 body=29 status=ok
// SIG undefined FUN_146555a68(void)

undefined8 FUN_146555a68(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146555a86 FUN_146555a86 body=143 status=ok
// SIG undefined FUN_146555a86(void)

void FUN_146555a86(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
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
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146555b16 FUN_146555b16 body=202 status=ok
// SIG undefined FUN_146555b16(void)

void FUN_146555b16(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  iVar3 = FUN_144a79e9a(param_1 + 2,1,(int)param_1[5]);
  iVar4 = iVar3 + 1;
  iVar5 = (int)param_1[1];
  if (iVar4 < iVar5) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar7 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      lVar2 = *param_1;
      do {
        lVar6 = (longlong)(int)uVar7;
        if (iVar3 < (int)uVar7) {
          iVar5 = *(int *)(lVar2 + lVar6 * 0x18);
          iVar1 = *(int *)(lVar2 + 4 + lVar6 * 0x18);
          uVar7 = (ulonglong)iVar1;
          if (uVar7 != 0xffffffffffffffff) {
            *(int *)(lVar2 + uVar7 * 0x18) = iVar5;
          }
          if (iVar5 == -1) {
            *(int *)(param_1 + 6) = iVar1;
          }
          else {
            *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x18) = iVar1;
          }
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
        }
        else {
          uVar7 = (ulonglong)*(uint *)(lVar2 + 4 + lVar6 * 0x18);
        }
      } while ((int)uVar7 != -1);
      iVar5 = (int)param_1[1];
    }
    if (iVar5 != iVar4) {
      *(int *)(param_1 + 1) = iVar4;
    }
    FUN_144a6134a(param_1 + 2,iVar4,(int)param_1[5] - iVar4);
    iVar5 = (int)param_1[1];
  }
  if (*(int *)((longlong)param_1 + 0xc) != iVar5) {
    FUN_1405357e8(param_1,iVar5);
    return;
  }
  return;
}



// FUNCTION 146555be0 FUN_146555be0 body=295 status=ok
// SIG undefined FUN_146555be0(void)

void FUN_146555be0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  char cVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  cVar5 = (char)param_2;
  FUN_14032a73a();
  if (cVar5 == '\0') {
    iVar2 = *(int *)(param_1 + 0x3c8);
    if ((longlong)iVar2 != 0) {
      lVar1 = *(longlong *)(param_1 + 0x3c0);
      lVar8 = 0;
      do {
        lVar3 = *(longlong *)(lVar1 + lVar8);
        pbVar4 = *(byte **)(lVar3 + 0x50);
        if ((pbVar4 != (byte *)0x0) && ((*pbVar4 & 1) != 0)) {
          FUN_1405f3418(lVar3 + 0x30);
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)iVar2 * 8 != lVar8);
    }
    if ((*(byte **)(param_1 + 0x4b8) != (byte *)0x0) && ((**(byte **)(param_1 + 0x4b8) & 1) != 0)) {
      FUN_1405f3418(param_1 + 0x498);
      return;
    }
  }
  else {
    uVar6 = FUN_144a79cc8(param_1);
    iVar2 = *(int *)(param_1 + 0x3c8);
    if ((longlong)iVar2 != 0) {
      lVar1 = *(longlong *)(param_1 + 0x3c0);
      lVar8 = 0;
      do {
        param_2 = uVar6;
        FUN_1402eb876(*(longlong *)(lVar1 + lVar8) + 0x30,uVar6);
        lVar8 = lVar8 + 8;
      } while ((longlong)iVar2 * 8 != lVar8);
    }
    if ((*(byte *)(param_1 + 0x4a2) & 2) != 0) {
      lVar1 = param_1 + 0x498;
      *(longlong *)(param_1 + 0x4c0) = param_1;
      uVar7 = CONCAT71((int7)((ulonglong)param_2 >> 8),*(byte *)(param_1 + 0x4a2)) &
              0xffffffffffffff04;
      FUN_140cbebe8(lVar1,CONCAT71((int7)(uVar7 >> 8),(byte)uVar7 >> 2));
      FUN_14082bc44(lVar1,param_1,param_1 + 0x30);
      FUN_1402eb876(lVar1,uVar6);
      return;
    }
  }
  return;
}



// FUNCTION 146555d08 FUN_146555d08 body=270 status=ok
// SIG undefined FUN_146555d08(void)

void FUN_146555d08(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_140457ffc(&DAT_14cadbf08,param_1);
  FUN_140872622(param_1);
  if (0 < *(int *)(param_1 + 0x508)) {
    lVar4 = 0;
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x500);
      puVar1 = *(undefined8 **)(lVar2 + lVar4);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
        lVar2 = *(longlong *)(param_1 + 0x500);
      }
      *(undefined8 *)(lVar2 + lVar4) = 0;
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x18;
    } while (lVar3 < *(int *)(param_1 + 0x508));
  }
  if (0 < *(int *)(param_1 + 0x518)) {
    lVar4 = 0;
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x510);
      puVar1 = *(undefined8 **)(lVar2 + lVar4);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
        lVar2 = *(longlong *)(param_1 + 0x510);
      }
      *(undefined8 *)(lVar2 + lVar4) = 0;
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x18;
    } while (lVar3 < *(int *)(param_1 + 0x518));
  }
  if (0 < *(int *)(param_1 + 0x528)) {
    lVar3 = 0;
    do {
      lVar4 = *(longlong *)(param_1 + 0x520);
      puVar1 = *(undefined8 **)(lVar4 + lVar3 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
        lVar4 = *(longlong *)(param_1 + 0x520);
      }
      *(undefined8 *)(lVar4 + lVar3 * 8) = 0;
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x528));
  }
  return;
}



// FUNCTION 146555e16 FUN_146555e16 body=76 status=ok
// SIG undefined FUN_146555e16(void)

undefined8 FUN_146555e16(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_1458469b2(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x000146555e57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 146555e62 FUN_146555e62 body=264 status=ok
// SIG undefined FUN_146555e62(void)

void FUN_146555e62(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  uint local_138 [4];
  undefined1 local_128 [4];
  undefined4 local_124;
  undefined4 local_84;
  undefined4 local_58;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_188;
  cVar2 = (**(code **)(*param_1 + 0x600))();
  if (cVar2 != '\0') {
    local_138[0] = 0;
    local_138[1] = 0;
    local_138[2] = 0;
    memset(local_128,0,0x100);
    local_58 = 0xffffffff;
    local_84 = 0xffffffff;
    local_124 = 0x3f800000;
    lVar1 = param_1[0x22];
    local_158 = *(undefined8 *)(lVar1 + 0x260);
    uStack_150 = *(undefined8 *)(lVar1 + 0x268);
    local_148 = *(undefined8 *)(lVar1 + 0x270);
    local_168 = 0;
    (**(code **)(*param_1 + 0x900))(param_1,&local_158,local_138,0);
    if (((local_138[0] ^ 0xffffffff) & 3) == 0) {
      memcpy(param_1 + 0x93,local_138,0x110);
      (**(code **)(*param_1 + 0x630))(param_1);
      FUN_140d73a98(param_1,param_1 + 0x93);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146555f6c FUN_146555f6c body=76 status=ok
// SIG undefined FUN_146555f6c(void)

undefined8 FUN_146555f6c(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_145977fe2(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x000146555fad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 146555fb8 FUN_146555fb8 body=135 status=ok
// SIG undefined FUN_146555fb8(void)

undefined8 * FUN_146555fb8(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58 [5];
  char local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 == (longlong *)0x0) {
    *param_2 = 0;
  }
  else {
    uVar2 = FUN_14479d2ce(param_1 + 8);
    (**(code **)(*plVar1 + 0x18))(plVar1,local_58,param_3,uVar2);
    if (local_30 == '\0') {
      local_58[0] = 0;
    }
    *param_2 = local_58[0];
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146556040 FUN_146556040 body=205 status=ok
// SIG undefined FUN_146556040(void)

void FUN_146556040(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  
  if ((((*(longlong *)(param_1 + 0x158) != 0) &&
       (plVar6 = *(longlong **)(param_1 + 0x160), plVar6 != (longlong *)0x0)) &&
      (0 < (int)plVar6[1])) && (*(longlong *)(param_1 + 0x168) != 0)) {
    lVar5 = 0;
    iVar4 = (int)plVar6[1];
    do {
      iVar3 = iVar4;
      if (iVar3 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_146556092;
      }
      LOCK();
      iVar4 = (int)plVar6[1];
      bVar7 = iVar3 == iVar4;
      if (bVar7) {
        *(int *)(plVar6 + 1) = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
    } while (!bVar7);
    lVar5 = *(longlong *)(param_1 + 0x158);
LAB_146556092:
    if (*(longlong *)(param_1 + 0x168) != 0) {
      FUN_14480f766(lVar5 + 0x18);
    }
    if (iVar3 != 0) {
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
    *(undefined8 *)(param_1 + 0x158) = 0;
    plVar6 = *(longlong **)(param_1 + 0x160);
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
    }
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 14655610e FUN_14655610e body=340 status=ok
// SIG undefined FUN_14655610e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14655610e(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
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
  plVar1 = (longlong *)(param_1 + 0x2e8);
  lVar2 = param_1 + 0x2f8;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  iVar5 = 0;
  local_50 = lVar2;
  if (*(int *)(param_1 + 0x310) != 0) {
    FUN_1449c0562(&local_58);
    iVar5 = *(int *)(param_1 + 0x310);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = plVar1;
  if ((iStack_44 != iVar5) || (local_50 != lVar2)) {
    do {
      lVar3 = *(longlong *)(*local_80 + 0x10 + (longlong)iStack_64 * 0x20);
      if ((lVar3 != 0) && (plVar4 = *(longlong **)(lVar3 + 0x30), plVar4 != (longlong *)0x0)) {
        (**(code **)*plVar4)(plVar4,0);
        _DAT_14cb85a4c = _DAT_14cb85a4c + -1;
        *plVar4 = (longlong)DAT_14cb85a40;
        DAT_14cb85a40 = plVar4;
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (((iStack_64 != iVar5) || (local_70 != lVar2)) || (local_80 != plVar1));
  }
  FUN_14042ef50(param_1);
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146556284 FUN_146556284 body=29 status=ok
// SIG undefined FUN_146556284(void)

undefined8 FUN_146556284(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465562a2 FUN_1465562a2 body=132 status=ok
// SIG undefined FUN_1465562a2(void)

void FUN_1465562a2(longlong param_1,int param_2)

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



// FUNCTION 146556328 FUN_146556328 body=85 status=ok
// SIG undefined FUN_146556328(void)

void FUN_146556328(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b417860;
  return;
}



// FUNCTION 14655637e FUN_14655637e body=29 status=ok
// SIG undefined FUN_14655637e(void)

undefined8 FUN_14655637e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655639c FUN_14655639c body=93 status=ok
// SIG undefined FUN_14655639c(void)

void FUN_14655639c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b416630;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1465563fa FUN_1465563fa body=9 status=ok
// SIG undefined FUN_1465563fa(void)

void FUN_1465563fa(longlong param_1)

{
  FUN_140333dee(param_1 + 0x10);
  return;
}



// FUNCTION 146556404 FUN_146556404 body=29 status=ok
// SIG undefined FUN_146556404(void)

undefined8 FUN_146556404(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146556422 FUN_146556422 body=61 status=ok
// SIG undefined FUN_146556422(void)

void FUN_146556422(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b416750;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_14b416780;
  FUN_1449db362(param_1 + 0x18);
  return;
}



// FUNCTION 146556460 FUN_146556460 body=29 status=ok
// SIG undefined FUN_146556460(void)

undefined8 FUN_146556460(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146556486 FUN_146556486 body=66 status=ok
// SIG undefined FUN_146556486(void)

undefined8 * FUN_146556486(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4167f0;
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



// FUNCTION 1465564d2 FUN_1465564d2 body=93 status=ok
// SIG undefined FUN_1465564d2(void)

void FUN_1465564d2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b416ff0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146556530 FUN_146556530 body=84 status=ok
// SIG undefined FUN_146556530(void)

void FUN_146556530(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14135d882();
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x18) == '\x01')) {
    FUN_1411c2820(param_1);
    return;
  }
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1458cdfb6();
    uVar2 = FUN_144718840(param_2,uVar2);
  }
  FUN_1411c29ea(param_1,uVar2);
  return;
}



// FUNCTION 146556584 FUN_146556584 body=137 status=ok
// SIG undefined FUN_146556584(void)

void FUN_146556584(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    uVar1 = FUN_144a7b040();
    plVar2 = (longlong *)FUN_144718840(param_2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
      if (lVar3 != 0) {
        lVar3 = lVar3 + 400;
        goto LAB_1465565dd;
      }
    }
    lVar3 = FUN_140929c72();
    if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) &&
       (*(longlong *)(param_2 + 0x410) != 0)) {
      lVar3 = *(longlong *)(param_2 + 0x410) + 0x990;
LAB_1465565dd:
      FUN_140457ffc(lVar3,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14655660e FUN_14655660e body=190 status=ok
// SIG undefined FUN_14655660e(void)

void FUN_14655660e(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    lVar1 = FUN_140363886();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) &&
       (*(longlong *)(param_2 + 0x3a0) != 0)) {
      local_28 = 0;
      local_20 = 0x4000;
      local_18 = 0;
      local_48 = DAT_14cb7bd70;
      local_50 = DAT_14cb7bd68;
      local_44 = DAT_14cb7bd80;
      local_3c = DAT_14cb7bd88;
      local_38 = 0;
      local_30 = 0;
      FUN_145ae6b28();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1465566ce FUN_1465566ce body=423 status=ok
// SIG undefined FUN_1465566ce(void)

longlong * FUN_1465566ce(longlong *param_1,longlong param_2)

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
LAB_1465567a5:
    *puVar3 = &PTR_LAB_14b3fc100;
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
    *puVar3 = &PTR_FUN_14b419430;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_1488fc530;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_1465567a5;
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
    *puVar3 = &PTR_LAB_14b3fc100;
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
    *puVar3 = &PTR_FUN_14b419430;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_1488fc530;
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



// FUNCTION 146556876 FUN_146556876 body=73 status=ok
// SIG undefined FUN_146556876(void)

undefined8 * FUN_146556876(longlong param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = *(undefined8 *)(param_1 + 0x88);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x90);
  FUN_1447715ec(param_2 + 2,param_1 + 0x98);
  return param_2;
}



// FUNCTION 1465568c0 FUN_1465568c0 body=333 status=ok
// SIG undefined FUN_1465568c0(void)

void FUN_1465568c0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*param_2 == 0) || (param_2[1] == 0)) || (lVar4 = (**(code **)(*param_1 + 8))(), lVar4 == 0))
  goto LAB_1465569c0;
  lVar5 = FUN_144a6c4d8();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
      lVar5 + 0x30)) goto LAB_1465569c0;
  uVar6 = FUN_1447210f0(lVar4);
  plVar7 = (longlong *)FUN_1457f66cc(uVar6);
  if (plVar7 == (longlong *)0x0) goto LAB_1465569c0;
  local_38 = 0;
  plVar8 = (longlong *)param_1[2];
  local_30 = plVar8;
  if (plVar8 == (longlong *)0x0) {
LAB_1465569ea:
    plVar8 = (longlong *)0x0;
  }
  else {
    iVar3 = (int)plVar8[1];
    do {
      if (iVar3 == 0) {
        local_30 = (longlong *)0x0;
        goto LAB_1465569ea;
      }
      LOCK();
      iVar2 = (int)plVar8[1];
      bVar9 = iVar3 == iVar2;
      if (bVar9) {
        *(int *)(plVar8 + 1) = iVar3 + 1;
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
      UNLOCK();
    } while (!bVar9);
    if (plVar8 == (longlong *)0x0) goto LAB_1465569ea;
    local_38 = param_1[1];
  }
  if (local_38 != 0) {
    plVar8 = (longlong *)0x0;
    if (*param_2 != 0) {
      plVar8 = (longlong *)param_2[1];
    }
    uVar6 = (**(code **)(*plVar8 + 0x18))();
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_38,uVar6);
    plVar8 = local_30;
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
LAB_1465569c0:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146556a0e FUN_146556a0e body=163 status=ok
// SIG undefined FUN_146556a0e(void)

void FUN_146556a0e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(longlong *)(param_1 + 0x1a0) != 0) && (*(longlong *)(param_1 + 0x1a8) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x1a8) + 8))) {
    FUN_1401cb356();
    local_20 = *(undefined8 *)(param_1 + 0x1a0);
    local_18 = *(longlong *)(param_1 + 0x1a8);
    if (local_18 != 0) {
      LOCK();
      *(int *)(local_18 + 0xc) = *(int *)(local_18 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_20);
    plVar2 = *(longlong **)(param_1 + 0x1a8);
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146556ab2 FUN_146556ab2 body=62 status=ok
// SIG undefined FUN_146556ab2(void)

void FUN_146556ab2(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_144729dda(param_1 + 0x50);
  if (cVar2 != '\0') {
    lVar1 = FUN_14479d2ce(param_1 + 0x50);
    FUN_140457ffc(lVar1 + 0x2a8,param_1);
    return;
  }
  return;
}



// FUNCTION 146556af0 FUN_146556af0 body=114 status=ok
// SIG undefined FUN_146556af0(void)

undefined8 * FUN_146556af0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  undefined8 *puVar3;
  
  plVar2 = (longlong *)FUN_140d7e454();
  if (plVar2 == (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0xd0))(plVar2);
    *param_2 = 0;
    iVar1 = *(int *)(puVar3 + 1);
    _Src = (void *)*puVar3;
    *(int *)(param_2 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1446dd7be(param_2,iVar1,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar1 * 0xc);
    }
  }
  return param_2;
}



// FUNCTION 146556b62 FUN_146556b62 body=390 status=ok
// SIG undefined FUN_146556b62(void)

void FUN_146556b62(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 *local_48;
  undefined4 local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(longlong *)(param_1 + 0x1b0) == 0) || (*(longlong *)(param_1 + 0x1b8) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x1b8) + 8) < 1)) {
    uVar4 = FUN_1401cb356();
    local_48 = (undefined8 *)0x0;
    local_40 = 0;
    FUN_1446efa72(&local_48,0,3,0x10);
    local_40 = 3;
    *local_48 = &PTR_LAB_149e02020;
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
    local_48[2] = lVar5;
    *local_48 = &PTR_FUN_14b419980;
    local_48[3] = param_1;
    local_48[4] = FUN_14571f9de;
    local_58 = 0x800000;
    FUN_1405f67fc(uVar4,&local_38,&local_48,
                  L"FMissionBrain::ReconcilePermanentRewardsStateWithMissionStateNextTick");
    if ((undefined8 *)(param_1 + 0x1b0) != &local_38) {
      *(undefined8 *)(param_1 + 0x1b0) = local_38;
      local_38 = 0;
      plVar2 = *(longlong **)(param_1 + 0x1b8);
      *(longlong **)(param_1 + 0x1b8) = local_30;
      local_30 = (longlong *)0x0;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))();
      }
    }
    FUN_1449db362(&local_48);
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146556cea FUN_146556cea body=66 status=ok
// SIG undefined FUN_146556cea(void)

undefined8 * FUN_146556cea(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b417e80;
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



// FUNCTION 146556d32 FUN_146556d32 body=53 status=ok
// SIG undefined FUN_146556d32(void)

void FUN_146556d32(longlong *param_1)

{
  FUN_1459e1798();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146556d68 FUN_146556d68 body=55 status=ok
// SIG undefined FUN_146556d68(void)

void FUN_146556d68(longlong *param_1)

{
  FUN_145a1ab9e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146556da0 FUN_146556da0 body=9 status=ok
// SIG undefined FUN_146556da0(void)

void FUN_146556da0(longlong param_1)

{
  FUN_140fae274(param_1 + 0x10);
  return;
}



// FUNCTION 146556daa FUN_146556daa body=29 status=ok
// SIG undefined FUN_146556daa(void)

undefined8 FUN_146556daa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146556dc8 FUN_146556dc8 body=29 status=ok
// SIG undefined FUN_146556dc8(void)

undefined8 FUN_146556dc8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146556de6 FUN_146556de6 body=29 status=ok
// SIG undefined FUN_146556de6(void)

undefined8 FUN_146556de6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146556e04 FUN_146556e04 body=9 status=ok
// SIG undefined FUN_146556e04(void)

void FUN_146556e04(longlong param_1)

{
  FUN_140fae274(param_1 + 0x10);
  return;
}



// FUNCTION 146556e0e FUN_146556e0e body=29 status=ok
// SIG undefined FUN_146556e0e(void)

undefined8 FUN_146556e0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146556e2c FUN_146556e2c body=9 status=ok
// SIG undefined FUN_146556e2c(void)

void FUN_146556e2c(longlong param_1)

{
  FUN_140fae274(param_1 + 0x10);
  return;
}



// FUNCTION 146556e36 FUN_146556e36 body=29 status=ok
// SIG undefined FUN_146556e36(void)

undefined8 FUN_146556e36(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146556e54 FUN_146556e54 body=428 status=ok
// SIG undefined FUN_146556e54(void)

longlong * FUN_146556e54(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_146556f34:
    *puVar5 = &PTR_LAB_14b419ac0;
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
    *puVar5 = &PTR_FUN_14b418d70;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_146556f34;
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
    *puVar5 = &PTR_LAB_14b419ac0;
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
    *puVar5 = &PTR_FUN_14b418d70;
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



// FUNCTION 146557000 FUN_146557000 body=118 status=ok
// SIG undefined FUN_146557000(void)

void FUN_146557000(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fc100;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b419430;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 146557076 FUN_146557076 body=29 status=ok
// SIG undefined FUN_146557076(void)

undefined8 FUN_146557076(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146557094 FUN_146557094 body=29 status=ok
// SIG undefined FUN_146557094(void)

undefined8 FUN_146557094(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465570b2 FUN_1465570b2 body=118 status=ok
// SIG undefined FUN_1465570b2(void)

void FUN_1465570b2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4195d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 146557128 FUN_146557128 body=29 status=ok
// SIG undefined FUN_146557128(void)

undefined8 FUN_146557128(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146557146 FUN_146557146 body=96 status=ok
// SIG undefined FUN_146557146(void)

void FUN_146557146(longlong param_1,int param_2)

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



// FUNCTION 1465571a6 FUN_1465571a6 body=48 status=ok
// SIG undefined FUN_1465571a6(void)

void FUN_1465571a6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1465571d6 FUN_1465571d6 body=48 status=ok
// SIG undefined FUN_1465571d6(void)

void FUN_1465571d6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 146557206 FUN_146557206 body=93 status=ok
// SIG undefined FUN_146557206(void)

void FUN_146557206(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b419980;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146557264 FUN_146557264 body=29 status=ok
// SIG undefined FUN_146557264(void)

undefined8 FUN_146557264(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146557282 FUN_146557282 body=132 status=ok
// SIG undefined FUN_146557282(void)

void FUN_146557282(longlong param_1,int param_2)

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



// FUNCTION 146557306 FUN_146557306 body=96 status=ok
// SIG undefined FUN_146557306(void)

void FUN_146557306(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
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



// FUNCTION 146557370 FUN_146557370 body=117 status=ok
// SIG undefined FUN_146557370(void)

undefined8 FUN_146557370(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x10))();
  if (cVar1 == '\0') {
    cVar1 = FUN_140fec400(param_1);
    if (cVar1 == '\0') {
      return 1;
    }
    if (((char)param_1[0x20] == '\0') && ((char)param_1[0x16] == '\0')) {
      if ((longlong)(int)param_1[0x1d] == 0) {
        return 1;
      }
      lVar2 = 0;
      while ((*(char *)(param_1[0x1c] + 0x19 + lVar2) != '\x01' ||
             (*(char *)(param_1[0x1c] + 0x1a + lVar2) == '\0'))) {
        lVar2 = lVar2 + 0x30;
        if ((longlong)(int)param_1[0x1d] * 0x30 == lVar2) {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1465573e6 FUN_1465573e6 body=809 status=ok
// SIG undefined FUN_1465573e6(void)

void FUN_1465573e6(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  undefined4 local_78;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = param_3 + 0x1d0;
  lVar9 = FUN_140b9c2d2(local_88,&DAT_14c948618);
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(byte *)(lVar6 + 0xc80) & 1) == 0) {
    plVar10 = (longlong *)FUN_14001cc68(0x98,0x10);
    plVar10[1] = (longlong)&DAT_100000001;
    *plVar10 = (longlong)&PTR_FUN_14b41bb70;
    plVar10[0xf] = 0;
    plVar10[0x10] = 0;
    plVar10[5] = 0;
    plVar10[6] = 0;
    plVar10[7] = 0;
    plVar10[8] = 0;
    plVar10[9] = 0;
    plVar10[10] = 0;
    plVar10[0xb] = 0;
    plVar10[0xc] = 0;
    plVar10[0x11] = 0;
    plVar10[0x12] = 0;
    plVar10[3] = 0;
    plVar10[4] = 0;
    plVar10[2] = (longlong)&PTR_FUN_14b00bf40;
    plVar10[0xd] = 0;
    plVar10[0xe] = 0;
    *(undefined4 *)(plVar10 + 0xf) = 0;
    *(undefined8 *)((longlong)plVar10 + 0x2c) = 0;
    *(undefined8 *)((longlong)plVar10 + 0x31) = 0;
    plVar10[8] = 0;
    plVar10[9] = 0;
    *(undefined8 *)((longlong)plVar10 + 0x4a) = 0;
    *(undefined8 *)((longlong)plVar10 + 0x52) = 0;
    plVar10[0x10] = 0;
    plVar10[0x11] = 0;
    *(undefined1 *)(plVar10 + 0x12) = 0;
  }
  else {
    puVar3 = (undefined1 *)(lVar6 + 0xc80);
    lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar4 = *(undefined4 *)(lVar6 + 0xc7c);
    *puVar3 = 0;
    *(undefined4 *)(lVar6 + 0xc7c) = 0xffffffff;
    plVar10 = (longlong *)FUN_14001cc68(0x98,0x10);
    plVar10[1] = (longlong)&DAT_100000001;
    *plVar10 = (longlong)&PTR_FUN_14b41bb70;
    plVar10[0xf] = 0;
    plVar10[0x10] = 0;
    plVar10[5] = 0;
    plVar10[6] = 0;
    plVar10[7] = 0;
    plVar10[8] = 0;
    plVar10[9] = 0;
    plVar10[10] = 0;
    plVar10[0xb] = 0;
    plVar10[0xc] = 0;
    plVar10[0x11] = 0;
    plVar10[0x12] = 0;
    plVar10[3] = 0;
    plVar10[4] = 0;
    plVar10[2] = (longlong)&PTR_FUN_14b00bf40;
    plVar10[0xd] = 0;
    plVar10[0xe] = 0;
    *(undefined4 *)(plVar10 + 0xf) = 0;
    *(undefined8 *)((longlong)plVar10 + 0x2c) = 0;
    *(undefined8 *)((longlong)plVar10 + 0x31) = 0;
    plVar10[8] = 0;
    plVar10[9] = 0;
    *(undefined8 *)((longlong)plVar10 + 0x4a) = 0;
    *(undefined8 *)((longlong)plVar10 + 0x52) = 0;
    plVar10[0x10] = 0;
    plVar10[0x11] = 0;
    *(undefined1 *)(plVar10 + 0x12) = 0;
    *(undefined4 *)(lVar6 + 0xc7c) = uVar4;
    *puVar3 = 1;
  }
  *(undefined1 *)(plVar10 + 7) = *(undefined1 *)(param_1 + 0x38);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  uVar7 = *(undefined4 *)(param_1 + 0x30);
  uVar8 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(plVar10 + 5) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((longlong)plVar10 + 0x2c) = uVar4;
  *(undefined4 *)(plVar10 + 6) = uVar7;
  *(undefined4 *)((longlong)plVar10 + 0x34) = uVar8;
  FUN_1401f3db8(plVar10 + 8,param_1 + 0x40);
  FUN_1409c70ec(local_88,&local_80);
  FUN_1411b8130(plVar10 + 0xb,&local_80);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  *(undefined1 *)(plVar10 + 0x12) = 0;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  iVar5 = *(int *)(lVar9 + 0x50);
  *(uint *)(lVar9 + 0x50) = iVar5 + 1U;
  if (*(uint *)(lVar9 + 0x54) < iVar5 + 1U) {
    FUN_140822376((longlong *)(lVar9 + 0x48),iVar5);
  }
  lVar6 = *(longlong *)(lVar9 + 0x48);
  *(longlong **)(lVar6 + (longlong)iVar5 * 0x10) = plVar10 + 2;
  *(longlong **)(lVar6 + 8 + (longlong)iVar5 * 0x10) = plVar10;
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
  FUN_140d22200(param_3 + 0x1f8,lVar9 + 0x18);
  FUN_140d89482(param_3 + 0x220,lVar9 + 0x18);
  FUN_14082207e(&local_80,plVar10 + 0xb,0);
  FUN_1400fce78(param_1 + 0x18,&local_80);
  FUN_1447cd778(local_80,local_78);
  if (local_80 != 0) {
    FUN_1400020a8();
  }
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
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146557710 FUN_146557710 body=92 status=ok
// SIG undefined FUN_146557710(void)

undefined8 FUN_146557710(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(undefined4 *)(param_1 + 0x98);
  local_20 = *(undefined8 *)(param_1 + 0x90);
  FUN_1408226d0(&local_20,param_2,1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1465579e8 FUN_1465579e8 body=29 status=ok
// SIG undefined FUN_1465579e8(void)

undefined8 FUN_1465579e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146557a06 FUN_146557a06 body=29 status=ok
// SIG undefined FUN_146557a06(void)

undefined8 FUN_146557a06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146557a24 FUN_146557a24 body=132 status=ok
// SIG undefined FUN_146557a24(void)

void FUN_146557a24(longlong param_1,int param_2)

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



// FUNCTION 146557aaa FUN_146557aaa body=118 status=ok
// SIG undefined FUN_146557aaa(void)

void FUN_146557aaa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41a9e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 146557b20 FUN_146557b20 body=29 status=ok
// SIG undefined FUN_146557b20(void)

undefined8 FUN_146557b20(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146557b3d FUN_146557b3d body=63 status=ok
// SIG undefined FUN_146557b3d(void)

void FUN_146557b3d(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1405b6d62(param_1);
    param_1 = param_1 + 0x50;
  }
  return;
}



// FUNCTION 146557b7c FUN_146557b7c body=118 status=ok
// SIG undefined FUN_146557b7c(void)

void FUN_146557b7c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fc100;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41af30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 146557bf2 FUN_146557bf2 body=68 status=ok
// SIG undefined FUN_146557bf2(void)

undefined8 * FUN_146557bf2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b41b030;
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



// FUNCTION 146557c36 FUN_146557c36 body=118 status=ok
// SIG undefined FUN_146557c36(void)

void FUN_146557c36(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41b0c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 146557cac FUN_146557cac body=118 status=ok
// SIG undefined FUN_146557cac(void)

void FUN_146557cac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41b1a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 146557d22 FUN_146557d22 body=118 status=ok
// SIG undefined FUN_146557d22(void)

void FUN_146557d22(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41b3d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 146557d98 FUN_146557d98 body=29 status=ok
// SIG undefined FUN_146557d98(void)

undefined8 FUN_146557d98(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146557db6 FUN_146557db6 body=29 status=ok
// SIG undefined FUN_146557db6(void)

undefined8 FUN_146557db6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146557dd4 FUN_146557dd4 body=29 status=ok
// SIG undefined FUN_146557dd4(void)

undefined8 FUN_146557dd4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146557df2 FUN_146557df2 body=118 status=ok
// SIG undefined FUN_146557df2(void)

void FUN_146557df2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41b580;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 146557e68 FUN_146557e68 body=95 status=ok
// SIG undefined FUN_146557e68(void)

ulonglong FUN_146557e68(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146557eaa:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_146557eaa;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 146557ec8 FUN_146557ec8 body=48 status=ok
// SIG undefined FUN_146557ec8(void)

void FUN_146557ec8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 146557ef8 FUN_146557ef8 body=29 status=ok
// SIG undefined FUN_146557ef8(void)

undefined8 FUN_146557ef8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


